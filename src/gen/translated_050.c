#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_006b2130 */
uint F_006b2130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2130u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)this = CONCAT22((undefined2)param_1,(undefined2)param_2);
  return (uint)this;
}

/* ref: FUN_006b2160 */
unsigned int F_006b2160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b2160u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return 0;
}

/* ref: FUN_006b2190 */
uint F_006b2190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b2190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  int iVar2;
  undefined * this_00;
  
  if ((param_1 & 2) != 0) {
    piVar1 = (int *)((int)this + -4);
    iVar2 = *piVar1;
    this_00 = (undefined *)((int)this + iVar2 * 0xc);
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      this_00 = (undefined *)((int)this_00 + -0xc);
      F_0068b9a0(this_00);
    }
    if ((param_1 & 1) != 0) {
      F_00406b30(piVar1);
    }
    return (uint)piVar1;
  }
  F_0068b9a0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_006b21f0 */
byte F_006b21f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b21f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  int * piVar2;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this)));
  return (byte)(*((uint *)GEN_TOP((uVar1 + 4 + ((param_1 >> 5) + *piVar2) * 4))) >> ((byte)param_1 & 0x1f)) & 1
  ;
}

/* ref: FUN_006b2230 */
uint F_006b2230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2230u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this)));
  iVar1 = *piVar3;
  uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  return uVar4 + *((int *)GEN_TOP((uVar2 + 0x14 + (iVar1 + (param_2 + param_1 * 4) * 8) * 4)));
}

/* ref: FUN_006b2270 */
float F_006b2270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2270u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  int * piVar2;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this)));
  return *((float *)GEN_TOP((uVar1 + 0x18 + (*piVar2 + (param_2 + param_1 * 4) * 8) * 4)));
}

/* ref: FUN_006b22b0 */
uint F_006b22b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b22b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  int * piVar2;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this)));
  return uVar1 + 0x1c + (*piVar2 + (param_2 + param_1 * 4) * 8) * 4;
}

/* ref: FUN_006b22f0 */
uint F_006b22f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b22f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  int * piVar2;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this)));
  return uVar1 + 0x28 + (*piVar2 + (param_2 + param_1 * 4) * 8) * 4;
}

/* ref: Client::Graphics::Scene::AttachUtility::vf0 */
uint F_006b2340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b2340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10b2b58));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_006b23a0 */
uint F_006b23a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6b23a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint uVar1;
  char * pcVar2;
  undefined * pvVar3;
  char * pcVar4;
  
  uVar1 = *(uint *)((int)this + 0x10);
  if (param_3 == 0) {
    if (param_2 < uVar1) {
      return param_2;
    }
  }
  else {
    if (param_3 <= uVar1) {
      uVar1 = uVar1 - param_3;
      if (param_2 < uVar1) {
        uVar1 = param_2;
      }
      pvVar3 = this;
      if (0xf < *(uint *)((int)this + 0x14)) {
        pvVar3 = *(undefined * PTR32 *)this;
      }
      pcVar4 = (char *)((int)pvVar3 + uVar1);
      while( true ) {
        if ((*pcVar4 == *param_1) && (uVar1 = F_0040d320(pcVar4,param_1,param_3), uVar1 == 0)) {
          if (0xf < *(uint *)((int)this + 0x14)) {
            this = *(undefined * PTR32 *)this;
          }
          return (int)pcVar4 - (int)this;
        }
        pcVar2 = (char *)F_004e18e0(this);
        if (pcVar4 == pcVar2) break;
        pcVar4 = pcVar4 + -1;
      }
    }
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

/* ref: FUN_006b2430 */
uint F_006b2430(unsigned int gen_a0)
{
  GEN_ENTER(0x6b2430u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006b2440 */
uint F_006b2440(unsigned int gen_a0)
{
  GEN_ENTER(0x6b2440u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_006b2450 */
uint F_006b2450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2450u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006b2480 */
uint F_006b2480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2480u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006b2490 */
byte F_006b2490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b2490u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_006b24f0 */
uint F_006b24f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b24f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006b2500 */
byte F_006b2500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b2500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_006b2520 */
uint F_006b2520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2520u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006b2530 */
byte F_006b2530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b2530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_006b2560 */
uint F_006b2560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b2560u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_006b2580 */
uint F_006b2580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b2580u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_006b25c0 */
uint F_006b25c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b25c0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_006b2600 */
uint F_006b2600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b2600u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_006b2640 */
uint F_006b2640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b2640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 3;
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

/* ref: FUN_006b2680 */
uint F_006b2680(unsigned int gen_a0)
{
  GEN_ENTER(0x6b2680u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006b26b0 */
uint F_006b26b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b26b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),param_1,0x10);
  return uVar1;
}

/* ref: FUN_006b26d0 */
uint F_006b26d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b26d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),param_1,0x10);
  return uVar1;
}

/* ref: FUN_006b26f0 */
unsigned int F_006b26f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b26f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar1 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0x15) == '\0') {
    *(int *)(*piVar1 + 4) = param_1;
  }
  piVar1[1] = *(int *)(param_1 + 4);
  if (param_1 == *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar1;
    *piVar1 = param_1;
    *(int * PTR32 *)(param_1 + 4) = piVar1;
    return 0;
  }
  piVar2 = *(int * PTR32 *)(param_1 + 4);
  if (param_1 == *piVar2) {
    *piVar2 = (int)piVar1;
    *piVar1 = param_1;
    *(int * PTR32 *)(param_1 + 4) = piVar1;
    return 0;
  }
  piVar2[2] = (int)piVar1;
  *piVar1 = param_1;
  *(int * PTR32 *)(param_1 + 4) = piVar1;
  return 0;
}

/* ref: FUN_006b2760 */
uint F_006b2760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2760u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006b2770 */
uint F_006b2770(unsigned int gen_a0)
{
  GEN_ENTER(0x6b2770u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_006b0160(this);
  return (uint)this;
}

/* ref: FUN_006b2780 */
uint F_006b2780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2780u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(gen_code32 *)this = ((code *)REFP(0x6b0490));
  *(uint *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  return param_1;
}

/* ref: FUN_006b27a0 */
uint F_006b27a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b27a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(gen_code32 *)this = ((code *)REFP(0x6b04b0));
  *(uint *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  return param_1;
}

/* ref: FUN_006b27c0 */
uint F_006b27c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b27c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(gen_code32 *)this = ((code *)REFP(0x6b04d0));
  *(uint *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  return param_1;
}

/* ref: FUN_006b27e0 */
uint F_006b27e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b27e0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_006b2810 */
unsigned int F_006b2810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2810u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_006b2830 */
uint F_006b2830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b2830u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_006b2850 */
unsigned int F_006b2850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2850u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_006b2870 */
unsigned int F_006b2870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2870u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_006b2890 */
unsigned int F_006b2890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2890u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_006b28b0 */
unsigned int F_006b28b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b28b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_006b28d0 */
unsigned int F_006b28d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b28d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_006b28f0 */
unsigned int F_006b28f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b28f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_006b2910 */
unsigned int F_006b2910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2910u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_006b2930 */
uint F_006b2930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2930u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_006b2960 */
unsigned int F_006b2960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2960u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_006b2980 */
uint F_006b2980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2980u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_006b29e0 */
unsigned int F_006b29e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b29e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte bVar1;
  
  bVar1 = (byte)*(undefined4 *)((int)this + 4);
  **(uint * PTR32 *)this =
       (*(uint *)*param_1 >> ((byte)param_1[1] & 0x1f) & 1) << (bVar1 & 0x1f) |
       ~(1 << (bVar1 & 0x1f)) & **(uint * PTR32 *)this;
  return 0;
}

/* ref: FUN_006b2a30 */
uint F_006b2a30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b2a30u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  return *in_ecx - *param_2 >> 3;
}

/* ref: FUN_006b2a50 */
uint F_006b2a50(unsigned int gen_a0)
{
  GEN_ENTER(0x6b2a50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),param_1,0x10);
  return uVar1;
}

/* ref: FUN_006b2a70 */
uint F_006b2a70(unsigned int gen_a0)
{
  GEN_ENTER(0x6b2a70u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),param_1);
  }
  return uVar1;
}

/* ref: FUN_006b2a90 */
uint F_006b2a90(unsigned int gen_a0)
{
  GEN_ENTER(0x6b2a90u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),param_1);
  }
  return uVar1;
}

/* ref: FUN_006b2ab0 */
uint F_006b2ab0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b2ab0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),param_1);
  }
  return uVar1;
}

/* ref: FUN_006b2ae0 */
uint F_006b2ae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2ae0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_006b2b00 */
unsigned int F_006b2b00(unsigned int gen_a0)
{
  GEN_ENTER(0x6b2b00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x45) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return 0;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x45) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x45) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x45) == '\0');
      *(int *)this = iVar4;
      return 0;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x45);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x45);
    }
    if (*(char *)(*(int *)this + 0x45) != '\0') {
      return 0;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return 0;
}

/* ref: FUN_006b2b60 */
unsigned int F_006b2b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2b60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_006b08f0(this);
  return 0;
}

/* ref: FUN_006b2b70 */
uint F_006b2b70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2b70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 4) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0x6b0830));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = param_2;
  return (uint)this;
}

/* ref: FUN_006b2b90 */
uint F_006b2b90(unsigned int gen_a0)
{
  GEN_ENTER(0x6b2b90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006b2ba0 */
uint F_006b2ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b2ba0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_006b2bb0 */
uint F_006b2bb0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b2bb0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006b2bc0 */
uint F_006b2bc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2bc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_006b2c10 */
byte F_006b2c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b2c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_006b2c30 */
uint F_006b2c30(unsigned int gen_a0)
{
  GEN_ENTER(0x6b2c30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_006b1d30(this);
  return (uint)this;
}

/* ref: FUN_006b2c50 */
uint F_006b2c50(unsigned int gen_a0)
{
  GEN_ENTER(0x6b2c50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x1fU >> 3 & 0x1ffffffc;
}

/* ref: FUN_006b2c70 */
uint F_006b2c70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b2c70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * pvVar1;
  
  pvVar1 = F_00c48350(*(undefined * PTR32 *)this,0,param_1 + 0x1fU >> 3 & 0x1ffffffc);
  return (uint)pvVar1;
}

/* ref: FUN_006b2ca0 */
uint F_006b2ca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2ca0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006b2cd0 */
uint F_006b2cd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2cd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_006b2cf0 */
unsigned int F_006b2cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b2cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  return 0;
}

/* ref: FUN_006b2d20 */
unsigned int F_006b2d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6b2d20u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  code * param_5 = (code *)(uintptr_t)gen_a4;
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = param_2;
  while( true ) {
    iVar4 = iVar1 * 2 + 2;
    if (param_3 <= iVar4) break;
    iVar2 = param_1 + iVar4 * 8;
    uVar3 = (*param_5)(iVar2,iVar2 + -8);
    if ((char)uVar3 != '\0') {
      iVar4 = iVar1 * 2 + 1;
    }
    *(undefined4 *)(param_1 + iVar1 * 8) = *(undefined4 *)(param_1 + iVar4 * 8);
    *(undefined4 *)(param_1 + 4 + iVar1 * 8) = *(undefined4 *)(param_1 + 4 + iVar4 * 8);
    iVar1 = iVar4;
  }
  if (iVar4 == param_3) {
    *(undefined4 *)(param_1 + iVar1 * 8) = *(undefined4 *)(param_1 + -8 + param_3 * 8);
    *(undefined4 *)(param_1 + 4 + iVar1 * 8) = *(undefined4 *)(param_1 + -4 + param_3 * 8);
    iVar1 = param_3 + -1;
  }
  while (param_2 < iVar1) {
    iVar4 = (iVar1 + -1) / 2;
    uVar3 = (*param_5)(param_1 + iVar4 * 8,param_4);
    if ((char)uVar3 == '\0') break;
    *(undefined4 *)(param_1 + iVar1 * 8) = *(undefined4 *)(param_1 + iVar4 * 8);
    *(undefined4 *)(param_1 + 4 + iVar1 * 8) = *(undefined4 *)(param_1 + 4 + iVar4 * 8);
    iVar1 = iVar4;
  }
  *(undefined4 *)(param_1 + iVar1 * 8) = *param_4;
  *(undefined4 *)(param_1 + 4 + iVar1 * 8) = param_4[1];
  return 0;
}

/* ref: FUN_006b2e00 */
unsigned int F_006b2e00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2e00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_006b2e30 */
unsigned int F_006b2e30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2e30u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_3;
  for (iVar2 = param_2; param_1 != iVar2; iVar2 = iVar2 + -8) {
    puVar1[-2] = *(undefined4 *)(iVar2 + -8);
    puVar1[-1] = *(undefined4 *)(iVar2 + -4);
    puVar1 = puVar1 + -2;
  }
  return 0;
}

/* ref: FUN_006b2e60 */
unsigned int F_006b2e60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6b2e60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  *param_3 = *param_1;
  param_3[1] = param_1[1];
  F_006b2d20(param_1,0,param_2 - (int)((int)(uintptr_t)param_1) >> 3,param_4,param_5);
  return 0;
}

/* ref: FUN_006b2ea0 */
uint F_006b2ea0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b2ea0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c),param_1,0x10);
  return uVar1;
}

/* ref: FUN_006b2ec0 */
uint F_006b2ec0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b2ec0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),param_1);
  }
  return uVar1;
}

/* ref: Client::Graphics::Scene::Object::vf0 */
uint F_006b2ee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b2ee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b2ae0));
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),this);
  }
  return (uint)this;
}

/* ref: FUN_006b2f10 */
unsigned int F_006b2f10(unsigned int gen_a0)
{
  GEN_ENTER(0x6b2f10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10b2b20));
  *(undefined4 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x10b2b08));
  F_004d6680((undefined4 *)((int)this + 4));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10b2a74));
  return 0;
}

/* ref: Client::Graphics::Scene::CameraManager::vf0 */
uint F_006b2f30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b2f30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10b2b20));
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x10b2b08));
  F_004d6680(this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10b2a74));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_006b2f70 */
unsigned int F_006b2f70(unsigned int gen_a0)
{
  GEN_ENTER(0x6b2f70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  
  switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + 0x38))) {
  case 1: ;
  case 3: ;
    iVar1 = *(int *)((int)this + 0x44);
    this_00 = *(undefined * PTR32 *)((int)this + 0x40);
    break;
  case 2: ;
  case 4: ;
    iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x44) + 0x74)));
    this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x40) + 0x74)));
    break;
  default: ;
    goto switchD_006b2f7f_default;
  }
  if (((iVar1 != 0) && (this_00 != (undefined *)0x0)) && (*(undefined * PTR32 *)(iVar1 + 0x20) == this_00)) {
    F_006886d0(this_00);
    F_0068bd00(REFG(undefined4, 0x1371294),((undefined4)(uint)(this_00)));
  }
switchD_006b2f7f_default: ;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  return 0;
}

/* ref: FUN_006b2fe0 */
uint F_006b2fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b2fe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint in_EAX = 0;
  uint * puVar1;
  
  if (0x1f < param_1) {
    return in_EAX & 0xffffff00;
  }
  puVar1 = ((uint *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this)));
  return *puVar1 >> ((byte)param_1 & 0x1f) & 1;
}

/* ref: FUN_006b3010 */
uint F_006b3010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b3010u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 < 0x20) {
    puVar1 = ((uint *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this)));
    if ((*puVar1 >> ((byte)param_1 & 0x1f) & 1) != 0) {
      puVar1 = ((uint *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this)));
      uVar2 = 0xffffffff;
      if (param_1 < 0x20) {
        uVar2 = (1 << ((byte)param_1 & 0x1f)) - 1;
      }
      uVar2 = ((*puVar1 & uVar2) >> 1 & 0x55555555) + (*puVar1 & uVar2 & 0x55555555);
      uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
      uVar2 = (uVar2 >> 4 & 0xf0f0f0f) + (uVar2 & 0xf0f0f0f);
      uVar3 = (uVar2 >> 8 & 0xff00ff) + (uVar2 & 0xff00ff);
      uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
      return uVar2 + ((uVar3 >> 0x10) + (uVar3 & 0xffff)) * 0x1000;
    }
  }
  return 0;
}

/* ref: FUN_006b30c0 */
uint F_006b30c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b30c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  *param_1 = *(undefined4 *)(uVar1 + param_2 * 4);
  return (uint)param_1;
}

/* ref: FUN_006b30e0 */
uint F_006b30e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b30e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  *param_1 = *(undefined4 *)(uVar1 + 0x400 + param_2 * 4);
  return (uint)param_1;
}

/* ref: FUN_006b3100 */
uint F_006b3100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b3100u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  *param_1 = *(undefined4 *)(uVar1 + 0x800 + param_2 * 4);
  return (uint)param_1;
}

/* ref: FUN_006b3120 */
uint F_006b3120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b3120u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  *param_1 = *(undefined4 *)(uVar1 + 0xc00 + param_2 * 4);
  return (uint)param_1;
}

/* ref: FUN_006b3140 */
uint F_006b3140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b3140u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  *param_1 = *(undefined4 *)(uVar1 + 0x1000 + param_2 * 4);
  return (uint)param_1;
}

/* ref: FUN_006b3160 */
uint F_006b3160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x6b3160u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  int param_5 = (int)gen_a5;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  *param_1 = *((undefined4 *)GEN_TOP((uVar1 + (param_3 + -2 + (param_4 + param_2 * 2) * 2) * 0x1400 + param_5 * 4)));
  return (uint)param_1;
}

/* ref: FUN_006b31a0 */
uint F_006b31a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x6b31a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  int param_5 = (int)gen_a5;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  *param_1 = *((undefined4 *)GEN_TOP((uVar1 + (param_3 + -2 + (param_4 + param_2 * 2) * 2) * 0x1400 + 0x400 + param_5 * 8)));
  return (uint)param_1;
}

/* ref: FUN_006b31e0 */
uint F_006b31e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x6b31e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  int param_5 = (int)gen_a5;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  *param_1 = *((undefined4 *)GEN_TOP((uVar1 + (param_3 + -2 + (param_4 + param_2 * 2) * 2) * 0x1400 + 0x404 + param_5 * 8)));
  return (uint)param_1;
}

/* ref: FUN_006b3220 */
float10 F_006b3220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x6b3220u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  int param_6 = (int)gen_a5;
  int iVar1;
  uint uVar2;
  float * pfVar3;
  float10 fVar4;
  
  if (param_6 == 0xff) {
    return (float10)1;
  }
  uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x5c))(param_1);
  iVar1 = param_4 + -2 + param_5 * 2 + param_2 * 10;
  if ((param_3 & 1) == 0) {
    pfVar3 = (float *)(uVar2 + 0x1b5d0 + iVar1 * 0x38);
  }
  else {
    pfVar3 = (float *)(uVar2 + 0x1b5e0 + iVar1 * 0x38);
  }
  fVar4 = (float10)param_6;
  if (param_6 < 0) {
    fVar4 = fVar4 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  return (float10)((float)GEN_TOF(((float10)*pfVar3 +
                         (float10)(float)(fVar4 / (float10)*(double *)&REFG(undefined, 0x1088118)) *
                         ((float10)pfVar3[1] - (float10)*pfVar3))));
}

/* ref: FUN_006b32b0 */
float10 F_006b32b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x6b32b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  int param_6 = (int)gen_a5;
  int iVar1;
  uint uVar2;
  float * pfVar3;
  float10 fVar4;
  
  uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x5c))(param_1);
  iVar1 = param_4 + -2 + param_5 * 2 + param_2 * 10;
  if ((param_3 & 1) == 0) {
    pfVar3 = (float *)(uVar2 + 0x1b5d8 + iVar1 * 0x38);
  }
  else {
    pfVar3 = (float *)(uVar2 + 0x1b5e8 + iVar1 * 0x38);
  }
  fVar4 = (float10)param_6;
  if (param_6 < 0) {
    fVar4 = fVar4 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  return (float10)((float)GEN_TOF(((float10)*pfVar3 +
                         (float10)(float)(fVar4 / (float10)*(double *)&REFG(undefined, 0x1088118)) *
                         ((float10)pfVar3[1] - (float10)*pfVar3))));
}

/* ref: FUN_006b3330 */
uint F_006b3330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x6b3330u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint param_4 = (uint)gen_a3;
  uint param_5 = (uint)gen_a4;
  uint param_6 = (uint)gen_a5;
  int param_7 = (int)gen_a6;
  float * pfVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float10 fVar5;
  
  fVar2 = REFG(float, 0x1302c10);
  if ((param_4 & 1) == 0) {
    *param_2 = GEN_FLT_TO(*param_2, REFG(float, 0x1302c0c));
    fVar3 = REFG(float, 0x1302c14);
    param_2[1] = fVar2;
    param_2[2] = fVar3;
    return (uint)param_2;
  }
  uVar4 = ((code *)*(gen_code32 *)(*param_1 + 0x5c))(param_1);
  fVar5 = (float10)param_7;
  pfVar1 = ((float *)GEN_TOP((uVar4 + (param_5 + (param_6 + (param_3 + 200) * 5) * 2) * 0x38)));
  if (param_7 < 0) {
    fVar5 = fVar5 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar2 = pfVar1[2];
  fVar3 = pfVar1[1];
  fVar5 = (float10)(float)(fVar5 / (float10)*(double *)&REFG(undefined, 0x1088118));
  *param_2 = ((float)GEN_TOF((fVar5 * ((float10)pfVar1[3] - (float10)*pfVar1) + (float10)*pfVar1)));
  param_2[1] = ((float)GEN_TOF(((float10)fVar3 + fVar5 * ((float10)pfVar1[4] - (float10)fVar3))));
  param_2[2] = ((float)GEN_TOF(((float10)fVar2 + ((float10)pfVar1[5] - (float10)fVar2) * fVar5)));
  return (uint)param_2;
}

/* ref: FUN_006b3420 */
float F_006b3420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6b3420u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  float10 fVar1;
  
  fVar1 = F_006b3220(*(undefined4 *)((int)this + 0x24),(param_1 - 1U >> 1) + 1,param_2,
                       param_1 - 1U & 1,param_3,param_4);
  return (float)fVar1;
}

/* ref: FUN_006b3450 */
float F_006b3450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6b3450u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  float10 fVar1;
  
  fVar1 = F_006b32b0(*(undefined4 *)((int)this + 0x24),(param_1 - 1U >> 1) + 1,param_2,
                       param_1 - 1U & 1,param_3,param_4);
  return (float)fVar1;
}

/* ref: FUN_006b3480 */
uint F_006b3480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x6b3480u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint param_4 = (uint)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  F_006b3330(*(undefined4 *)((int)this + 0x24),param_1,(param_2 - 1U >> 1) + 1,param_3,
               param_2 - 1U & 1,param_4,param_5);
  return param_1;
}

/* ref: FUN_006b34c0 */
uint F_006b34c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b34c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = F_006b1210(this,param_1);
  if (uVar1 == 0xffffffff) {
    return 0;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  uVar3 = F_006b11b0(this);
  return uVar2 + 4 + (uVar3 * param_2 + uVar1) * 6;
}

/* ref: FUN_006b3510 */
uint F_006b3510(unsigned int gen_a0)
{
  GEN_ENTER(0x6b3510u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),param_1,0x10);
  return uVar1;
}

/* ref: FUN_006b3530 */
uint F_006b3530(unsigned int gen_a0)
{
  GEN_ENTER(0x6b3530u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),param_1,0x10);
  return uVar1;
}

/* ref: FUN_006b3550 */
uint F_006b3550(unsigned int gen_a0)
{
  GEN_ENTER(0x6b3550u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),param_1);
  }
  return uVar1;
}

/* ref: FUN_006b3570 */
uint F_006b3570(unsigned int gen_a0)
{
  GEN_ENTER(0x6b3570u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),param_1);
  }
  return uVar1;
}

/* ref: Client::Graphics::Scene::CharacterBase::VfxInstanceListenner::vf0 */
uint F_006b35a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b35a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10b2a9c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_006b35d0 */
uint F_006b35d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b35d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),param_1,0x10);
  return uVar1;
}

/* ref: FUN_006b35f0 */
uint F_006b35f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b35f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),param_1);
  }
  return uVar1;
}

/* ref: FUN_006b3620 */
byte F_006b3620(unsigned int gen_a0)
{
  GEN_ENTER(0x6b3620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x2c0);
  return ((byte)(uVar1 >> 3) | (byte)(uVar1 >> 2) | (byte)(uVar1 >> 1) |
         *(byte *)((int)this + 0x2c0)) & 1 | *(int *)((int)this + 0x6f8) != 0 |
         *(int *)((int)this + 0x40c) != 0;
}

/* ref: FUN_006b3670 */
uint F_006b3670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b3670u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *(ushort *)(in_ecx + 0x40) >> ((byte)param_2 & 0x1f) & 1;
}

/* ref: FUN_006b3690 */
uint F_006b3690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b3690u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *(ushort *)(in_ecx + 0x42) >> ((byte)param_2 & 0x1f) & 1;
}

/* ref: FUN_006b36d0 */
uint F_006b36d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b36d0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  return *(ushort *)(in_ecx + 0x40) >> ((char)param_3 + (char)param_2 & 0x1fU) & 1;
}

/* ref: FUN_006b36f0 */
uint F_006b36f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b36f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  return *((uint *)GEN_TOP(((int)this + (param_1 + param_2) * 4)));
}

/* ref: FUN_006b3700 */
uint F_006b3700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b3700u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  return *(ushort *)(in_ecx + 0x40) >> ((char)param_3 + (char)param_2 & 0x1fU) & 1;
}

/* ref: FUN_006b3720 */
uint F_006b3720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b3720u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  return *(ushort *)(in_ecx + 0x42) >> ((char)param_3 + (char)param_2 & 0x1fU) & 1;
}

/* ref: FUN_006b3740 */
uint F_006b3740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b3740u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  return *((uint *)GEN_TOP(((int)this + (param_1 + param_2) * 4)));
}

/* ref: FUN_006b3750 */
unsigned int F_006b3750(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x6b3750u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  float * pfVar2;
  float * pfVar3;
  
  *(float *)(param_1 + 0x84) = param_2;
  pfVar3 = (float *)(param_1 + 0x54);
  if ((float10)*(float *)(param_1 + 0x54) < (float10)*(float *)(param_1 + 0x50)) {
    pfVar3 = (float *)(param_1 + 0x50);
  }
  pfVar2 = (float *)(param_1 + 0x58);
  if ((float10)*(float *)(param_1 + 0x58) < (float10)*pfVar3) {
    pfVar2 = pfVar3;
  }
  fVar1 = (float)((float10)*pfVar2 + (float10)*pfVar2);
  if ((float10)fVar1 < (float10)*(float *)(param_1 + 0x84)) {
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0x84);
    return 0;
  }
  *(float *)(param_1 + 0x84) = fVar1;
  return 0;
}

/* ref: FUN_006b3840 */
uint F_006b3840(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x6b3840u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  float * pfVar2;
  float10 fVar3;
  float10 fVar4;
  
  iVar1 = *(int *)((*(int *)&gen_args[0]) + 0x28);
  (*(float *)(gen_frame + 0x8)) = *(float *)((*(int *)&gen_args[0]) + 0x18);
  fVar3 = (float10)*(float *)((*(int *)&gen_args[0]) + 0x18);
  (*(float *)(gen_frame + 0x4)) = gen_bits2f(iVar1 + -1);
  (*(float *)(gen_frame + 0x0)) = 0.0;
  fVar4 = (float10)iVar1;
  if (iVar1 < 0) {
    fVar4 = fVar4 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  (*(float *)&gen_args[1]) = ((float)GEN_TOF(((fVar4 * ((float10)(*(float *)&gen_args[1]) - fVar3)) /
                   ((float10)*(float *)((*(int *)&gen_args[0]) + 0x1c) - fVar3))));
  fVar3 = F_00c4d2a0((uint)(ulonglong)gen_d2bits((double)(*(float *)&gen_args[1])),
                       (int)((ulonglong)gen_d2bits((double)(*(float *)&gen_args[1])) >> 0x20));
  (*(float *)&gen_args[1]) = gen_bits2f((int)fVar3);
  pfVar2 = &(*(float *)&gen_args[1]);
  if (iVar1 + -1 <= (int)fVar3) {
    pfVar2 = &(*(float *)(gen_frame + 0x4));
  }
  if ((int)gen_fl2bits(*pfVar2) < 1) {
    pfVar2 = &(*(float *)(gen_frame + 0x0));
  }
  return (uint)gen_fl2bits(*pfVar2);
}

/* ref: FUN_006b38c0 */
uint F_006b38c0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x6b38c0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  float * pfVar2;
  float10 fVar3;
  float10 fVar4;
  
  iVar1 = *(int *)((*(int *)&gen_args[0]) + 0x28);
  (*(float *)(gen_frame + 0x8)) = *(float *)((*(int *)&gen_args[0]) + 0x20);
  fVar3 = (float10)*(float *)((*(int *)&gen_args[0]) + 0x20);
  (*(float *)(gen_frame + 0x4)) = gen_bits2f(iVar1 + -1);
  (*(float *)(gen_frame + 0x0)) = 0.0;
  fVar4 = (float10)iVar1;
  if (iVar1 < 0) {
    fVar4 = fVar4 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  (*(float *)&gen_args[1]) = ((float)GEN_TOF(((fVar4 * ((float10)(*(float *)&gen_args[1]) - fVar3)) /
                   ((float10)*(float *)((*(int *)&gen_args[0]) + 0x24) - fVar3))));
  fVar3 = F_00c4d2a0((uint)(ulonglong)gen_d2bits((double)(*(float *)&gen_args[1])),
                       (int)((ulonglong)gen_d2bits((double)(*(float *)&gen_args[1])) >> 0x20));
  (*(float *)&gen_args[1]) = gen_bits2f((int)fVar3);
  pfVar2 = &(*(float *)&gen_args[1]);
  if (iVar1 + -1 <= (int)fVar3) {
    pfVar2 = &(*(float *)(gen_frame + 0x4));
  }
  if ((int)gen_fl2bits(*pfVar2) < 1) {
    pfVar2 = &(*(float *)(gen_frame + 0x0));
  }
  return (uint)gen_fl2bits(*pfVar2);
}

/* ref: FUN_006b39a0 */
uint F_006b39a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b39a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),param_1);
  }
  return uVar1;
}

/* ref: FUN_006b3a00 */
unsigned int F_006b3a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b3a00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int * piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*((char *)GEN_TOP((*(int *)(iVar1 + 8) + 0x45))) == '\0') {
    *((int * PTR32 *)GEN_TOP((*(int *)(iVar1 + 8) + 4))) = param_1;
  }
  *(int *)(iVar1 + 4) = param_1[1];
  if (param_1 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = iVar1;
    *(int * PTR32 *)(iVar1 + 8) = param_1;
    param_1[1] = iVar1;
    return 0;
  }
  piVar2 = (int *)param_1[1];
  if (param_1 == (int *)piVar2[2]) {
    piVar2[2] = iVar1;
    *(int * PTR32 *)(iVar1 + 8) = param_1;
    param_1[1] = iVar1;
    return 0;
  }
  *piVar2 = iVar1;
  *(int * PTR32 *)(iVar1 + 8) = param_1;
  param_1[1] = iVar1;
  return 0;
}

/* ref: FUN_006b3a60 */
uint F_006b3a60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b3a60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006b3a70 */
uint F_006b3a70(unsigned int gen_a0)
{
  GEN_ENTER(0x6b3a70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_006b1d30(this);
  return (uint)this;
}

/* ref: FUN_006b3a80 */
uint F_006b3a80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b3a80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *param_2 = in_ecx;
  param_2[1] = param_3;
  return (uint)param_2;
}

/* ref: FUN_006b3aa0 */
uint F_006b3aa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6b3aa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_3 >> 5;
  uVar1 = 0;
  if (uVar3 != 0) {
    do {
      *(uint *)(*(int *)this + uVar1 * 4) =
           *(uint *)(*param_1 + uVar1 * 4) & *(uint *)(*param_2 + uVar1 * 4);
      uVar1 = uVar1 + 1;
    } while (uVar1 < uVar3);
  }
  uVar1 = uVar3 * 0x20;
  iVar2 = param_3 + uVar3 * -0x20;
  if (iVar2 != 0) {
    uVar1 = *(uint *)(*param_1 + uVar3 * 4) & *(uint *)(*param_2 + uVar3 * 4) &
            ~(-1 << ((byte)iVar2 & 0x1f));
    *(uint *)(*(int *)this + uVar3 * 4) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_006b3b10 */
uint F_006b3b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b3b10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_006b3b40((undefined *)((int)this + -0x60),param_1);
  return uVar1;
}

/* ref: Client::Graphics::Scene::World::vf0 */
uint F_006b3b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b3b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)(this + 0x68) =
       (*(undefined * PTR32 (*)[1])REFP(0x10b2a94));
  *(undefined * PTR32 * PTR32 *)(this + 0x60) = (*(undefined * PTR32 (*)[1])REFP(0x10b2a6c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b2ae0));
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Scene::Camera::vf0 */
uint F_006b3b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b3b80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b2ae0));
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Scene::CameraMaya::vf0 */
uint F_006b3bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b3bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b2ae0));
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Scene::DrawObject::vf8 */
unsigned int F_006b3bf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b3bf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::Graphics::Scene::DrawObject::vf9 */
unsigned int F_006b3c00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b3c00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::Graphics::Scene::DrawObject::vf15 */
byte F_006b3c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b3c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Graphics::Scene::DrawObject::vf14 */
byte F_006b3c20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b3c20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::Graphics::Scene::DrawObject::vf23 */
unsigned int F_006b3c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b3c30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Graphics::Scene::DrawObject::vf24 */
unsigned int F_006b3c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b3c40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Graphics::Scene::DrawObject::vf25 */
uint F_006b3c50(void)
{
  GEN_ENTER(0x6b3c50u, 0u, 0u, 0u, 0u);
  return 0x1302e54;
}

/* ref: Client::Graphics::Scene::DrawObject::vf26 */
unsigned int F_006b3c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b3c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Graphics::Scene::DrawObject::vf27 */
unsigned int F_006b3c70(void)
{
  GEN_ENTER(0x6b3c70u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Graphics::Scene::DrawObject::vf28 */
unsigned int F_006b3c80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b3c80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Graphics::Scene::DrawObject::vf29 */
uint F_006b3c90(void)
{
  GEN_ENTER(0x6b3c90u, 0u, 0u, 0u, 0u);
  return 0xffffffff;
}

/* ref: Client::Graphics::Scene::DrawObject::vf32 */
unsigned int F_006b3ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b3ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Graphics::Scene::DrawObject::vf33 */
unsigned int F_006b3cb0(void)
{
  GEN_ENTER(0x6b3cb0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Graphics::Scene::DrawObject::vf34 */
unsigned int F_006b3cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b3cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Graphics::Scene::DrawObject::vf35 */
unsigned int F_006b3cd0(void)
{
  GEN_ENTER(0x6b3cd0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Graphics::Scene::DrawObject::vf36 */
byte F_006b3ce0(void)
{
  GEN_ENTER(0x6b3ce0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Graphics::Scene::DrawObject::vf37 */
byte F_006b3cf0(void)
{
  GEN_ENTER(0x6b3cf0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Graphics::Scene::DrawObject::vf38 */
unsigned int F_006b3d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6b3d00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Client::Graphics::Scene::DrawObject::vf39 */
unsigned int F_006b3d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b3d10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Graphics::Scene::DrawObject::vf40 */
unsigned int F_006b3d20(void)
{
  GEN_ENTER(0x6b3d20u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Graphics::Scene::DrawObject::vf41 */
uint F_006b3d30(void)
{
  GEN_ENTER(0x6b3d30u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Graphics::Scene::DrawObject::vf42 */
uint F_006b3d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b3d40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Graphics::Scene::DrawObject::vf43 */
unsigned int F_006b3d50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6b3d50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = REFG(undefined4, 0x1302e58);
  *param_1 = REFG(undefined4, 0x1302e54);
  uVar2 = REFG(undefined4, 0x1302e5c);
  param_1[1] = uVar1;
  uVar1 = REFG(undefined4, 0x1302e60);
  param_1[2] = uVar2;
  param_1[3] = uVar1;
  return 0;
}

/* ref: Client::Graphics::Scene::DrawObject::vf44 */
unsigned int F_006b3d80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b3d80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::Graphics::Scene::DrawObject::vf45 */
unsigned int F_006b3d90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b3d90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::Graphics::Scene::DrawObject::vf46 */
uint F_006b3da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b3da0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Graphics::Scene::DrawObject::vf47 */
uint F_006b3db0(void)
{
  GEN_ENTER(0x6b3db0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Graphics::Scene::DrawObject::vf48 */
uint F_006b3dc0(void)
{
  GEN_ENTER(0x6b3dc0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Graphics::Scene::DrawObject::vf49 */
uint F_006b3dd0(void)
{
  GEN_ENTER(0x6b3dd0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Graphics::Scene::DrawObject::vf0 */
uint F_006b3de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b3de0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b2ae0));
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),this);
  }
  return (uint)this;
}

/* ref: FUN_006b3e10 */
uint F_006b3e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b3e10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  puVar1 = (undefined4 *)F_006b2020(&(*(undefined * PTR32 *)(gen_frame + 0x8)),this);
  *param_1 = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_006b3e30 */
uint F_006b3e30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b3e30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((param_1 & 2) == 0) {
    if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),this);
    }
  }
  else {
    this = (undefined *)((int)this - 4);
    if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),this);
      return (uint)this;
    }
  }
  return (uint)this;
}

/* ref: FUN_006b3e80 */
uint F_006b3e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b3e80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Scene::Terrain::vf2 */
uint F_006b3eb0(void)
{
  GEN_ENTER(0x6b3eb0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::Graphics::Scene::Terrain::vf0 */
uint F_006b3ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b3ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b2ae0));
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Scene::BGManager::vf0 */
uint F_006b3f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b3f00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)(this + 0x70) = (*(undefined * PTR32 (*)[6])REFP(0x10b2ae0));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b2ae0));
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Scene::BGObject::vf2 */
uint F_006b3f40(void)
{
  GEN_ENTER(0x6b3f40u, 0u, 0u, 0u, 0u);
  return 2;
}

/* ref: Client::Graphics::Scene::BGObject::vf0 */
uint F_006b3f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b3f50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b2ae0));
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Scene::Light::vf2 */
uint F_006b3f90(void)
{
  GEN_ENTER(0x6b3f90u, 0u, 0u, 0u, 0u);
  return 5;
}

/* ref: Client::Graphics::Scene::Light::vf0 */
uint F_006b3fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b3fa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b2ae0));
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Scene::EnvLocation::vf2 */
uint F_006b3fd0(void)
{
  GEN_ENTER(0x6b3fd0u, 0u, 0u, 0u, 0u);
  return 8;
}

/* ref: Client::Graphics::Scene::EnvLocation::vf6 */
unsigned int F_006b3fe0(void)
{
  GEN_ENTER(0x6b3fe0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Graphics::Scene::EnvLocation::vf7 */
unsigned int F_006b3ff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b3ff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Graphics::Scene::EnvLocation::vf4 */
unsigned int F_006b4000(void)
{
  GEN_ENTER(0x6b4000u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Graphics::Scene::EnvLocation::vf0 */
uint F_006b4010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b4010u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b2ae0));
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Scene::EnvSpace::vf2 */
uint F_006b4040(void)
{
  GEN_ENTER(0x6b4040u, 0u, 0u, 0u, 0u);
  return 7;
}

/* ref: Client::Graphics::Scene::EnvSpace::vf7 */
unsigned int F_006b4050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b4050u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(undefined1 *)(in_ecx + 0x96) = 1;
  return 0;
}

/* ref: Client::Graphics::Scene::EnvSpace::vf0 */
uint F_006b4060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b4060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b2ae0));
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Scene::EnvScene::vf0 */
uint F_006b4090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b4090u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pEVar1;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10b2b34));
  pEVar1 = this + 0x580;
  iVar2 = 7;
  do {
    pEVar1 = pEVar1 + -0xa0;
    iVar2 = iVar2 + -1;
    *(undefined * PTR32 * PTR32 *)pEVar1 = (*(undefined * PTR32 (*)[6])REFP(0x10b2ae0));
  } while (-1 < iVar2);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_006b40e0 */
unsigned int F_006b40e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b40e0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[52])REFP(0x10b314c));
  in_ecx[0x1c] = (*(undefined * PTR32 (*)[10])REFP(0x10b3120));
  in_ecx[0x78] = (*(undefined * PTR32 (*)[3])REFP(0x10b2ad0));
  F_009837b0(in_ecx + 0x1c);
  *in_ecx = (*(undefined * PTR32 (*)[6])REFP(0x10b2ae0));
  return 0;
}

/* ref: Client::Graphics::Scene::VfxObject::vf2 */
uint F_006b4110(void)
{
  GEN_ENTER(0x6b4110u, 0u, 0u, 0u, 0u);
  return 4;
}

/* ref: FUN_006b4120 */
uint F_006b4120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b4120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_006b4140((undefined *)((int)this + -0x70),param_1);
  return uVar1;
}

/* ref: FUN_006b4130 */
uint F_006b4130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b4130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_006b4140((undefined *)((int)this + -0x1e0),param_1);
  return uVar1;
}

/* ref: Client::Graphics::Scene::VfxObject::vf0 */
uint F_006b4140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b4140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[52])REFP(0x10b314c));
  *(undefined * PTR32 * PTR32 *)(this + 0x70) = (*(undefined * PTR32 (*)[10])REFP(0x10b3120));
  *(undefined * PTR32 * PTR32 *)(this + 0x1e0) = (*(undefined * PTR32 (*)[3])REFP(0x10b2ad0));
  F_009837b0(this + 0x70);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b2ae0));
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Scene::ResidentResourceManager::vf0 */
uint F_006b41a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b41a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[2])REFP(0x10b2afc));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10b2a8c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_006b41d0 */
uint F_006b41d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b41d0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  
  uVar1 = F_006b23a0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),1);
  return uVar1;
}

/* ref: FUN_006b41f0 */
uint F_006b41f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b41f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_006b4200 */
uint F_006b4200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b4200u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_006b4210 */
uint F_006b4210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b4210u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_006b4230 */
uint F_006b4230(unsigned int gen_a0)
{
  GEN_ENTER(0x6b4230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_006b1d30(this);
  return (uint)this;
}

/* ref: FUN_006b4240 */
uint F_006b4240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b4240u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x1b0];
  float10 fVar1;
  undefined4 * puVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  undefined4 * puVar6;
  
  (*(uint *)(gen_frame + 0x19c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1a0);
  fVar1 = (float10)0;
  (*(float *)(gen_frame + 0x180)) = (float)fVar1;
  (*(float *)(gen_frame + 0x184)) = (float)fVar1;
  (*(float *)(gen_frame + 0x188)) = (float)fVar1;
  (*(undefined4 *)(gen_frame + 0x150)) = *(undefined4 *)((int)this + 0x30);
  (*(undefined4 *)(gen_frame + 0x4c)) = param_2;
  (*(undefined4 *)(gen_frame + 0x154)) = 0;
  (*(undefined4 *)(gen_frame + 0x158)) = 0;
  (*(undefined4 *)(gen_frame + 0x160)) = 0;
  (*(undefined4 *)(gen_frame + 0x168)) = 0;
  (*(undefined4 *)(gen_frame + 0x170)) = 0;
  (*(undefined4 *)(gen_frame + 0x174)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x48)) = this;
  (*(undefined4 * PTR32 *)(gen_frame + 0x44)) = param_1;
  (*(undefined4 *)(gen_frame + 0x164)) = *(undefined4 *)((int)this + 0x34);
  (*(undefined4 *)(gen_frame + 0x178)) = *(undefined4 *)((int)this + 0x38);
  F_004efe70(&(*(undefined4 *)(gen_frame + 0x150)),(int)this + 0x20);
  (*(float *)(gen_frame + 0x180)) = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x10) + (float10)(*(float *)(gen_frame + 0x180)))));
  (*(float *)(gen_frame + 0x184)) = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x14) + (float10)(*(float *)(gen_frame + 0x184)))));
  (*(float *)(gen_frame + 0x188)) = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x18) + (float10)(*(float *)(gen_frame + 0x188)))));
  puVar2 = (undefined4 *)F_004f45d0(((undefined1 *)(gen_frame + 0x50)),&(*(undefined4 *)(gen_frame + 0x150)));
  puVar4 = ((undefined4 *)(gen_frame + 0x110));
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  uVar3 = F_006558a0((*(undefined * PTR32 *)(gen_frame + 0x48)),((undefined1 *)(gen_frame + 0x90)),(*(undefined4 *)(gen_frame + 0x4c)));
  puVar4 = (undefined4 *)F_004ef350(((undefined1 *)(gen_frame + 0xd0)),uVar3,(uint)((undefined4 *)(gen_frame + 0x110)));
  puVar2 = (*(undefined4 * PTR32 *)(gen_frame + 0x44));
  puVar6 = ((undefined4 *)(gen_frame + 0x0));
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  *puVar2 = (*(undefined4 *)(gen_frame + 0x30));
  puVar2[1] = (*(undefined4 *)(gen_frame + 0x34));
  puVar2[2] = (*(undefined4 *)(gen_frame + 0x38));
  F_00c47745((*(uint *)(gen_frame + 0x19c)) ^ (uint)(uint)(gen_frame + 0x1a0));
  return (uint)puVar2;
}

/* ref: FUN_006b43b0 */
uint F_006b43b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b43b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_006b43c0 */
uint F_006b43c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b43c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_006b43d0 */
byte F_006b43d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b43d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_006b4400 */
uint F_006b4400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b4400u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_006b4410 */
uint F_006b4410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b4410u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_006b4430 */
uint F_006b4430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b4430u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_006b4440 */
uint F_006b4440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b4440u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_006b4450 */
byte F_006b4450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b4450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_006b4470 */
byte F_006b4470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b4470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_006b44b0 */
uint F_006b44b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b44b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_006b44d0 */
uint F_006b44d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b44d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0xd8);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_006b4510 */
undefined4 * F_006b4510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b4510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x45) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if ((uint)puVar2[3] < *param_1) {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x45) == '\0');
  }
  return puVar2;
}

/* ref: FUN_006b4540 */
undefined4 * F_006b4540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b4540u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x45) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if ((uint)puVar2[3] < *param_1) {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x45) == '\0');
  }
  return puVar2;
}

/* ref: FUN_006b4600 */
uint F_006b4600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b4600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = (uint)((char)param_1 != '\0') | *(uint *)((int)this + 0x10) & 0xfffffffe;
  *(uint *)((int)this + 0x10) = uVar1;
  return uVar1;
}

/* ref: FUN_006b4620 */
uint F_006b4620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b4620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = (uint)((char)param_1 != '\0') << 6 | *(uint *)((int)this + 0x10) & 0xffffffbf;
  *(uint *)((int)this + 0x10) = uVar1;
  return uVar1;
}

/* ref: FUN_006b4640 */
unsigned int F_006b4640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b4640u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0x50) =
       ~(1 << ((byte)param_1 & 0x1f)) & *(uint *)((int)this + 0x50) |
       (uint)((char)param_2 != '\0') << ((byte)param_1 & 0x1f);
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 2;
  return 0;
}

/* ref: FUN_006b4680 */
uint F_006b4680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b4680u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(uint *)(in_ecx + 0x50) = -(uint)((char)param_2 != '\0');
  *(uint *)(in_ecx + 0x10) = *(uint *)(in_ecx + 0x10) | 2;
  return -(uint)((char)param_2 != '\0');
}

/* ref: FUN_006b46a0 */
uint F_006b46a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b46a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  byte bVar3;
  
  uVar1 = F_0065bce0(this,param_1);
  uVar2 = uVar1 & 0xffff;
  if ((short)uVar1 != -1) {
    bVar3 = (byte)uVar2;
    uVar2 = (uint)((char)param_2 != '\0') << (bVar3 & 0x1f);
    *(uint *)((int)this + 0x50) = ~(1 << (bVar3 & 0x1f)) & *(uint *)((int)this + 0x50) | uVar2;
    *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 2;
  }
  return uVar2;
}

/* ref: FUN_006b46f0 */
unsigned int F_006b46f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b46f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0x60) =
       ~(1 << ((byte)param_1 & 0x1f)) & *(uint *)((int)this + 0x60) |
       (uint)((char)param_2 != '\0') << ((byte)param_1 & 0x1f);
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 4;
  return 0;
}

/* ref: FUN_006b4730 */
uint F_006b4730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b4730u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(uint *)(in_ecx + 0x60) = -(uint)((char)param_2 != '\0');
  *(uint *)(in_ecx + 0x10) = *(uint *)(in_ecx + 0x10) | 4;
  return -(uint)((char)param_2 != '\0');
}

/* ref: FUN_006b4750 */
uint F_006b4750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b4750u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  byte bVar3;
  
  uVar1 = F_0065bd80(this,param_1);
  uVar2 = uVar1 & 0xffff;
  if ((short)uVar1 != -1) {
    bVar3 = (byte)uVar2;
    uVar2 = (uint)((char)param_2 != '\0') << (bVar3 & 0x1f);
    *(uint *)((int)this + 0x60) = ~(1 << (bVar3 & 0x1f)) & *(uint *)((int)this + 0x60) | uVar2;
    *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 4;
  }
  return uVar2;
}

/* ref: FUN_006b47a0 */
uint F_006b47a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b47a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006b47b0 */
uint F_006b47b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b47b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_006b0160(this);
  return (uint)param_1;
}

/* ref: FUN_006b47d0 */
unsigned int F_006b47d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b47d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x15);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_006b47d0(this,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_00429760(piVar3,0x18,0xd8);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x15);
  }
  return 0;
}

/* ref: FUN_006b4810 */
byte F_006b4810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b4810u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * PTR32 * ppiVar1;
  uint * puVar2;
  uint * puVar3;
  int iVar4;
  undefined * this_00;
  uint uVar5;
  int iVar6;
  int * piVar7;
  int * piVar8;
  
  (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)0x2;
  ppiVar1 = &(*(int * PTR32 *)&gen_args[1]);
  if ((*(int * PTR32 *)&gen_args[1]) < 3) {
    ppiVar1 = &(*(int * PTR32 *)(gen_frame + 0x18));
  }
  piVar8 = *ppiVar1;
  *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = piVar8;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = 0;
  (*(int * PTR32 *)&gen_args[1]) = piVar8;
  if (piVar8 == (int *)0x0) {
    puVar2 = (uint *)F_00406a50(4);
  }
  else {
    piVar7 = *(int * PTR32 *)(REFG(int, 0x1371270) + 4);
    (*(int * PTR32 *)(gen_frame + 0x18)) = piVar7;
    (*(int *)(gen_frame + 0x14)) = *piVar7;
    uVar5 = -(uint)((int)(ZEXT48(piVar8) * 0x14 >> 0x20) != 0) | (uint)(ZEXT48(piVar8) * 0x14);
    puVar2 = ((uint *)GEN_TOP(((code *)*(gen_code32 *)(*piVar7 + 8))(piVar7,-(uint)(0xfffffffb < uVar5) | uVar5 + 4,0x10)))
    ;
    piVar8 = (*(int * PTR32 *)&gen_args[1]);
  }
  if (puVar2 == (uint *)0x0) {
    puVar3 = (uint *)0x0;
  }
  else {
    puVar3 = puVar2 + 1;
    *puVar2 = (uint)piVar8;
    puVar2 = puVar3;
    piVar7 = piVar8;
    while (piVar7 = (int *)((int)piVar7 - 1), -1 < (int)piVar7) {
      *puVar2 = (uint)(*(undefined * PTR32 (*)[1])REFP(0x10b2ac8));
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2 = puVar2 + 5;
    }
  }
  *((uint * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = puVar3;
  if (piVar8 != (int *)0x0) {
    iVar6 = 0;
    piVar7 = piVar8;
    do {
      iVar4 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + iVar6;
      iVar6 = iVar6 + 0x14;
      piVar7 = (int *)((int)piVar7 - 1);
      *(undefined4 *)(iVar4 + 4) = 0;
      *(undefined4 *)(iVar4 + 8) = 0x10;
      *(undefined * PTR32 *)(iVar4 + 0xc) = (*(undefined * PTR32 *)&gen_args[0]);
      *(undefined4 *)(iVar4 + 0x10) = 0;
    } while (piVar7 != (int *)0x0);
  }
  this_00 = (undefined *)F_00406b90(0x78,0,0);
  if (this_00 == (undefined *)0x0) {
    uVar5 = 0;
  }
  else {
    (*(gen_code32 *)(gen_frame + 0xc)) = (code *)0x0;
    (*(gen_code32 *)(gen_frame + 0x4)) = ((code *)REFP(0x6b0830));
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(gen_code32 *)(gen_frame + 0xc)) = ((code *)REFP(0x6b2b60));
    uVar5 = F_004a0c60(this_00,&(*(gen_code32 *)(gen_frame + 0x4)),0,(int)piVar8 - 1);
  }
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = uVar5;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 100))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x68))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = 0;
  return 1;
}

/* ref: FUN_006b4970 */
uint F_006b4970(unsigned int gen_a0)
{
  GEN_ENTER(0x6b4970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int * piVar5;
  ulonglong uVar6;
  int local_8;
  
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  piVar5 = (int *)((int)this + 0x28);
  local_8 = 0x10;
  do {
    uVar3 = 0;
    if (*piVar5 != 0) {
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))
                        (*(int * PTR32 *)(REFG(int, 0x1371270) + 4),*piVar5);
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x14);
  if (puVar1 != (undefined4 *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  iVar4 = *(int *)((int)this + 0xc);
  if (iVar4 != 0) {
    uVar3 = 0;
    do {
      iVar2 = *(int *)((int)this + 8);
      *(undefined4 *)(uVar3 + 0x10 + iVar2) = 0;
      *(undefined4 *)(uVar3 + 0xc + iVar2) = 0;
      uVar3 = uVar3 + 0x14;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 8);
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] != 0) {
      uVar3 = ((code *)*(gen_code32 *)*puVar1)(puVar1,3);
      *(undefined4 *)((int)this + 8) = 0;
      *(undefined4 *)((int)this + 0xc) = 0;
      return uVar3;
    }
    uVar6 = F_00406b30(puVar1 + -1);
    uVar3 = (uint)uVar6;
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  return uVar3;
}

/* ref: FUN_006b4a20 */
uint F_006b4a20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6b4a20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
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

/* ref: FUN_006b4a50 */
byte F_006b4a50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b4a50u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int * piVar1;
  
  for (piVar1 = param_1; piVar1 != param_2; piVar1 = piVar1 + 1) {
    if (*piVar1 != 0) {
      F_0050c620(*piVar1,0,0);
    }
  }
  return (byte)param_3;
}

/* ref: JobQueue_JobSystem_VWorld_Scene_Graphics_Client::vf0 */
uint F_006b4a90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b4a90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  
  if ((param_1 & 2) != 0) {
    iVar2 = *(int *)((int)this + -4);
    uVar1 = (int)this - 4;
    puVar3 = (undefined4 *)((int)this + iVar2 * 0x14);
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      puVar3 = puVar3 + -5;
      *puVar3 = (*(undefined * PTR32 (*)[1])REFP(0x10b2ac8));
    }
    if (((param_1 & 1) != 0) && (uVar1 != 0)) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),uVar1);
    }
    return uVar1;
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10b2ac8));
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),this);
  }
  return (uint)this;
}

/* ref: FUN_006b4b00 */
uint F_006b4b00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b4b00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_006b4b20 */
uint F_006b4b20(unsigned int gen_a0)
{
  GEN_ENTER(0x6b4b20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_006b2b00(this);
  return (uint)this;
}

/* ref: FUN_006b4b40 */
uint F_006b4b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b4b40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_006b4b60 */
uint F_006b4b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6b4b60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_006b3aa0(this,param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_006b4b70 */
unsigned int F_006b4b70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b4b70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 2) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
    }
    puVar1 = puVar1 + 2;
  }
  return 0;
}

/* ref: FUN_006b4ba0 */
unsigned int F_006b4ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b4ba0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  return 0;
}

/* ref: FUN_006b4bd0 */
uint F_006b4bd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6b4bd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  code * param_3 = (code *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar4 = param_2 - param_1 >> 3;
  uVar1 = (int)(uVar4 - (param_2 - param_1 >> 0x1f)) >> 1;
  uVar3 = uVar1;
  if (0 < (int)uVar1) {
    uVar6 = uVar1 * 2 + 2;
    iVar5 = param_1 + uVar1 * 8;
    do {
      uVar1 = uVar1 - 1;
      (*(int *)(gen_frame + 0x18)) = iVar5 + -8;
      (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(iVar5 + -8);
      (*(uint *)(gen_frame + 0x14)) = uVar6 - 2;
      (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(iVar5 + -4);
      uVar3 = uVar1;
      for (uVar6 = uVar6 - 2; (int)uVar6 < (int)uVar4; uVar6 = uVar6 * 2 + 2) {
        iVar5 = param_1 + uVar6 * 8;
        uVar2 = (*param_3)(iVar5,iVar5 + -8);
        if ((char)uVar2 != '\0') {
          uVar6 = uVar6 - 1;
        }
        *(undefined4 *)(param_1 + uVar3 * 8) = *(undefined4 *)(param_1 + uVar6 * 8);
        *(undefined4 *)(param_1 + 4 + uVar3 * 8) = *(undefined4 *)(param_1 + 4 + uVar6 * 8);
        uVar3 = uVar6;
      }
      if (uVar6 == uVar4) {
        *(undefined4 *)(param_1 + uVar3 * 8) = *(undefined4 *)(param_1 + -8 + uVar4 * 8);
        *(undefined4 *)(param_1 + 4 + uVar3 * 8) = *(undefined4 *)(param_1 + -4 + uVar4 * 8);
        uVar3 = uVar4 - 1;
      }
      uVar3 = F_006b0c20(param_1,uVar3,uVar1,&(*(undefined4 *)(gen_frame + 0xc)),param_3);
      iVar5 = (*(int *)(gen_frame + 0x18));
      uVar6 = (*(uint *)(gen_frame + 0x14));
    } while (0 < (int)uVar1);
  }
  return uVar3;
}

/* ref: FUN_006b4ca0 */
unsigned int F_006b4ca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b4ca0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_006b4cd0 */
unsigned int F_006b4cd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b4cd0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_006b4d00 */
unsigned int F_006b4d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b4d00u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_006b4d30 */
unsigned int F_006b4d30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b4d30u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_006b4d60 */
unsigned int F_006b4d60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6b4d60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  code * param_4 = (code *)(uintptr_t)gen_a3;
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = (*param_4)(param_2,param_1);
  if ((char)uVar3 != '\0') {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    *param_1 = uVar1;
    param_1[1] = uVar2;
  }
  uVar3 = (*param_4)(param_3,param_2);
  if ((char)uVar3 != '\0') {
    uVar1 = *param_3;
    uVar2 = param_3[1];
    *param_3 = *param_2;
    param_3[1] = param_2[1];
    *param_2 = uVar1;
    param_2[1] = uVar2;
  }
  uVar3 = (*param_4)(param_2,param_1);
  if ((char)uVar3 != '\0') {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    *param_1 = uVar1;
    param_1[1] = uVar2;
  }
  return 0;
}

/* ref: FUN_006b4de0 */
unsigned int F_006b4de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b4de0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_3;
  for (iVar2 = param_2; param_1 != iVar2; iVar2 = iVar2 + -8) {
    puVar1[-2] = *(undefined4 *)(iVar2 + -8);
    puVar1[-1] = *(undefined4 *)(iVar2 + -4);
    puVar1 = puVar1 + -2;
  }
  return 0;
}

/* ref: FUN_006b4e10 */
unsigned int F_006b4e10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b4e10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(param_2 + -4);
  (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(param_2 + -8);
  *(undefined4 *)(param_2 + -8) = *param_1;
  *(undefined4 *)(param_2 + -4) = param_1[1];
  F_006b2d20(param_1,0,(param_2 - (int)param_1) + -8 >> 3,&(*(undefined4 *)(gen_frame + 0x4)),param_3);
  return 0;
}

/* ref: Client::Graphics::Scene::DrawObject::vf10 */
unsigned int F_006b4e60(unsigned int gen_a0)
{
  GEN_ENTER(0x6b4e60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(byte *)(in_ecx + 100) = *(byte *)(in_ecx + 100) | 4;
  return 0;
}

/* ref: FUN_006b4eb0 */
byte F_006b4eb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b4eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_1 != '\0') << 4 | *(byte *)((int)this + 100) & 0xef;
  *(byte *)((int)this + 100) = bVar1;
  return bVar1;
}

/* ref: FUN_006b4ed0 */
unsigned int F_006b4ed0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x6b4ed0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  if ((*(uint *)(in_ecx + 200) >> 1 & 1) == 0) {
    *((float *)GEN_TOP((*(int *)(in_ecx + 0xc0) + 0xa8))) = param_2;
  }
  return 0;
}

/* ref: FUN_006b4f00 */
unsigned int F_006b4f00(unsigned int gen_a0)
{
  GEN_ENTER(0x6b4f00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10abff4));
  F_004a05c0(this);
  if (this == (undefined *)0xffffffd8) {
    this = (undefined *)0x0;
  }
  iVar1 = *(int *)((int)this + 0x28);
  iVar2 = *(int *)((int)this + 0x2c);
  iVar3 = iVar2;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x2c) = iVar2;
    iVar3 = *(int *)&REFG(undefined, 0x1487c7c);
  }
  *(int *)&REFG(undefined, 0x1487c7c) = iVar3;
  if (iVar2 == 0) {
    REFG(int, 0x1487c80) = iVar1;
    return 0;
  }
  *(int *)(iVar2 + 0x28) = iVar1;
  return 0;
}

/* ref: FUN_006b4f40 */
uint F_006b4f40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b4f40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_1;
  if (param_1 == 0) {
    uVar2 = 1;
  }
  uVar1 = F_006b3010(this,uVar2 >> 9);
  if (uVar1 == 0) {
    return 0;
  }
  return uVar1 + (uVar2 & 0x1ff) * 8;
}

/* ref: FUN_006b4fc0 */
uint F_006b4fc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6b4fc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  if (param_1 == 0) {
    return 0;
  }
  bVar1 = F_0069b720((undefined *)((int)this + 0x90),*(undefined4 *)((int)this + 0x78),
                       *(undefined4 *)(param_1 + 0x78),param_2,param_3);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_006b5000 */
ushort F_006b5000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b5000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ushort uVar1;
  
  uVar1 = (ushort)((char)param_1 != '\0') * 4 | *(ushort *)((int)this + 0x70) & 0xfffb;
  *(ushort *)((int)this + 0x70) = uVar1;
  return uVar1;
}

/* ref: FUN_006b5040 */
unsigned int F_006b5040(unsigned int gen_a0)
{
  GEN_ENTER(0x6b5040u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 0x78);
  if (((iVar1 != 0) && (uVar2 = F_00a065a0(), (char)uVar2 != '\0')) &&
     ('\0' < *(char *)(iVar1 + 0xa8))) {
    return 0;
  }
  if (((*(byte *)((int)this + 0x70) & 1) == 0) && (*(int *)((int)this + 0xe0) != 0)) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xe0) + 0x10))))(*(int * PTR32 *)((int)this + 0xe0));
    *(ushort *)((int)this + 0x70) = *(ushort *)((int)this + 0x70) | 1;
  }
  return 0;
}

/* ref: FUN_006b5090 */
uint F_006b5090(unsigned int gen_a0)
{
  GEN_ENTER(0x6b5090u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  *(undefined4 *)((int)this + 0x40) = 0xffff0000;
  uVar2 = 0;
  do {
    bVar1 = (byte)uVar2;
    *(undefined4 *)((int)this + uVar2 * 4) = 0;
    uVar2 = uVar2 + 1;
    *(ushort *)((int)this + 0x42) =
         ~(1 << (bVar1 & 0x1f)) & *(ushort *)((int)this + 0x42) | 0 << (bVar1 & 0x1f);
  } while (uVar2 < 0x10);
  return (uint)this;
}

/* ref: FUN_006b50d0 */
uint F_006b50d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x6b50d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint uVar1;
  
  uVar1 = F_006937b0(this,param_1 + param_2,param_3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_006b50f0 */
uint F_006b50f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b50f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = F_00693890(this,param_1 + param_2);
  return uVar1;
}

/* ref: FUN_006b5110 */
uint F_006b5110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x6b5110u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint uVar1;
  
  uVar1 = F_006937b0(this,param_1 + param_2,param_3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_006b5130 */
uint F_006b5130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b5130u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = F_00693890(this,param_1 + param_2);
  return uVar1;
}

/* ref: FUN_006b5150 */
byte F_006b5150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b5150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = (char)param_1 != '\0' | *(byte *)((int)this + 0xe0a8) & 0xfe;
  *(byte *)((int)this + 0xe0a8) = bVar1;
  return bVar1;
}

/* ref: FUN_006b5170 */
uint F_006b5170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b5170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = (uint)((char)param_1 != '\0') | *(uint *)((int)this + 0x18) & 0xfffffffe;
  *(uint *)((int)this + 0x18) = uVar1;
  return uVar1;
}

/* ref: FUN_006b5190 */
uint F_006b5190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b5190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = (uint)((char)param_1 != '\0') * 4 | *(uint *)((int)this + 0x18) & 0xfffffffb;
  *(uint *)((int)this + 0x18) = uVar1;
  return uVar1;
}

/* ref: FUN_006b51b0 */
uint F_006b51b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b51b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = (uint)((char)param_1 != '\0') * 8 | *(uint *)((int)this + 0x18) & 0xfffffff7;
  *(uint *)((int)this + 0x18) = uVar1;
  return uVar1;
}

/* ref: FUN_006b51d0 */
uint F_006b51d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b51d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = (uint)((char)param_1 != '\0') << 4 | *(uint *)((int)this + 0x18) & 0xffffffef;
  *(uint *)((int)this + 0x18) = uVar1;
  return uVar1;
}

/* ref: FUN_006b51f0 */
uint F_006b51f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b51f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = (uint)((char)param_1 != '\0') << 5 | *(uint *)((int)this + 0x18) & 0xffffffdf;
  *(uint *)((int)this + 0x18) = uVar1;
  return uVar1;
}

/* ref: JobSystem_VWorld_Scene_Graphics_Client_USceneUpdateJob::vf0 */
uint F_006b5210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b5210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10b2a94));
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),this);
  }
  return (uint)this;
}

/* ref: FUN_006b5260 */
uint F_006b5260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b5260u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006b5270 */
uint F_006b5270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b5270u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_006b1d30(this);
  return (uint)param_1;
}

/* ref: FUN_006b5290 */
unsigned int F_006b5290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b5290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar1 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0x45) == '\0') {
    *(int *)(*piVar1 + 4) = param_1;
  }
  piVar1[1] = *(int *)(param_1 + 4);
  if (param_1 == *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar1;
    *piVar1 = param_1;
    *(int * PTR32 *)(param_1 + 4) = piVar1;
    return 0;
  }
  piVar2 = *(int * PTR32 *)(param_1 + 4);
  if (param_1 == *piVar2) {
    *piVar2 = (int)piVar1;
    *piVar1 = param_1;
    *(int * PTR32 *)(param_1 + 4) = piVar1;
    return 0;
  }
  piVar2[2] = (int)piVar1;
  *piVar1 = param_1;
  *(int * PTR32 *)(param_1 + 4) = piVar1;
  return 0;
}

/* ref: FUN_006b52f0 */
unsigned int F_006b52f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b52f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10abff4));
  F_004a05c0(this);
  if (this == (undefined *)0xffffffd8) {
    this = (undefined *)0x0;
  }
  iVar1 = *(int *)((int)this + 0x28);
  iVar2 = *(int *)((int)this + 0x2c);
  iVar3 = iVar2;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x2c) = iVar2;
    iVar3 = *(int *)&REFG(undefined, 0x1487c7c);
  }
  *(int *)&REFG(undefined, 0x1487c7c) = iVar3;
  if (iVar2 == 0) {
    REFG(int, 0x1487c80) = iVar1;
    return 0;
  }
  *(int *)(iVar2 + 0x28) = iVar1;
  return 0;
}

/* ref: Client::Graphics::Scene::PostBoneDeformer::vf0 */
uint F_006b5330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b5330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined * pPVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10abff4));
  F_004a05c0(this);
  pPVar4 = this;
  if (this == (undefined *)0xffffffd8) {
    pPVar4 = (undefined *)0x0;
  }
  iVar1 = *(int *)(pPVar4 + 0x28);
  iVar2 = *(int *)(pPVar4 + 0x2c);
  iVar3 = iVar2;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x2c) = iVar2;
    iVar3 = *(int *)&REFG(undefined, 0x1487c7c);
  }
  *(int *)&REFG(undefined, 0x1487c7c) = iVar3;
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0x28) = iVar1;
    iVar1 = REFG(int, 0x1487c80);
  }
  REFG(int, 0x1487c80) = iVar1;
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Scene::Attach::vf0 */
uint F_006b5390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b5390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined * pAVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10abff4));
  F_004a05c0(this);
  pAVar4 = this;
  if (this == (undefined *)0xffffffd8) {
    pAVar4 = (undefined *)0x0;
  }
  iVar1 = *(int *)(pAVar4 + 0x28);
  iVar2 = *(int *)(pAVar4 + 0x2c);
  iVar3 = iVar2;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x2c) = iVar2;
    iVar3 = *(int *)&REFG(undefined, 0x1487c7c);
  }
  *(int *)&REFG(undefined, 0x1487c7c) = iVar3;
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0x28) = iVar1;
    iVar1 = REFG(int, 0x1487c80);
  }
  REFG(int, 0x1487c80) = iVar1;
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),this);
  }
  return (uint)this;
}

/* ref: FUN_006b53f0 */
uint F_006b53f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b53f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0xd8);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_006b5430 */
uint F_006b5430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b5430u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  F_00c46e20(param_2,param_2 + 4,(*(int *)((int)this + 4) - (param_2 + 4) >> 2) * 4);
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -4;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_006b54b0 */
uint F_006b54b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b54b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x45) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x45) == '\0');
  }
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_006b54f0 */
uint F_006b54f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b54f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x45) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x45) == '\0');
  }
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_006b5530 */
uint F_006b5530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6b5530u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_006b55d0 */
uint F_006b55d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b55d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0xd8);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_006b5610 */
uint F_006b5610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6b5610u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_006b5670 */
uint F_006b5670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b5670u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_006b5690 */
uint F_006b5690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b5690u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_006b56a0 */
uint F_006b56a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b56a0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  int * piVar7;
  
  piVar3 = (*(int * PTR32 *)&gen_args[2]);
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x15))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  F_006b0160(&(*(int * PTR32 *)&gen_args[2]));
  piVar6 = (int *)*piVar3;
  if (*(char *)((int)piVar6 + 0x15) == '\0') {
    piVar7 = piVar6;
    if ((*(char *)(piVar3[2] + 0x15) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar3[2]) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar7 + 0x15) == '\0') {
          piVar7[1] = (int)piVar6;
        }
        *piVar6 = (int)piVar7;
        (*(int * PTR32 *)&gen_args[2])[2] = piVar3[2];
        *(int * PTR32 *)(piVar3[2] + 4) = (*(int * PTR32 *)&gen_args[2]);
      }
      if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) == piVar3) {
        *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = (*(int * PTR32 *)&gen_args[2]);
      }
      else {
        puVar2 = (undefined4 *)piVar3[1];
        if ((int *)*puVar2 == piVar3) {
          *puVar2 = (*(int * PTR32 *)&gen_args[2]);
        }
        else {
          puVar2[2] = (*(int * PTR32 *)&gen_args[2]);
        }
      }
      (*(int * PTR32 *)&gen_args[2])[1] = piVar3[1];
      iVar1 = (*(int * PTR32 *)&gen_args[2])[5];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 5))) = (char)piVar3[5];
      *(char *)(piVar3 + 5) = (char)iVar1;
      goto LAB_006b57ba;
    }
  }
  else {
    piVar7 = (int *)piVar3[2];
  }
  piVar6 = (int *)piVar3[1];
  if (*(char *)((int)piVar7 + 0x15) == '\0') {
    piVar7[1] = (int)piVar6;
  }
  if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) == piVar3) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = piVar7;
  }
  else if ((int *)*piVar6 == piVar3) {
    *piVar6 = (int)piVar7;
  }
  else {
    piVar6[2] = (int)piVar7;
  }
  if (((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))))) == piVar3) {
    piVar4 = piVar6;
    if (*(char *)((int)piVar7 + 0x15) == '\0') {
      piVar4 = (int *)F_006b0020(piVar7);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*(int * PTR32 *)(iVar1 + 8) == piVar3) {
    if (*(char *)((int)piVar7 + 0x15) == '\0') {
      uVar5 = F_006b0000(piVar7);
      *(uint *)(iVar1 + 8) = uVar5;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar6;
    }
  }
LAB_006b57ba: ;
  if ((char)piVar3[5] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[5] != '\x01') break;
        piVar6 = (int *)*piVar4;
        if (piVar7 == piVar6) {
          piVar6 = (int *)piVar4[2];
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_006b26f0((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)piVar4[2];
          }
          if (*(char *)((int)piVar6 + 0x15) == '\0') {
            if ((*(char *)(*piVar6 + 0x14) != '\x01') || (*(char *)(piVar6[2] + 0x14) != '\x01')) {
              if (*(char *)(piVar6[2] + 0x14) == '\x01') {
                *(undefined1 *)(*piVar6 + 0x14) = 1;
                *(undefined1 *)(piVar6 + 5) = 0;
                F_006aff90((*(undefined * PTR32 *)&gen_args[0]),piVar6);
                piVar6 = (int *)piVar4[2];
              }
              *(char *)(piVar6 + 5) = (char)piVar4[5];
              *(undefined1 *)(piVar4 + 5) = 1;
              *(undefined1 *)(piVar6[2] + 0x14) = 1;
              F_006b26f0((*(undefined * PTR32 *)&gen_args[0]),piVar4);
              break;
            }
LAB_006b5878: ;
            *(undefined1 *)(piVar6 + 5) = 0;
          }
        }
        else {
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_006aff90((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)*piVar4;
          }
          if (*(char *)((int)piVar6 + 0x15) == '\0') {
            if ((*(char *)(piVar6[2] + 0x14) == '\x01') && (*(char *)(*piVar6 + 0x14) == '\x01'))
            goto LAB_006b5878;
            if (*(char *)(*piVar6 + 0x14) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0x14) = 1;
              *(undefined1 *)(piVar6 + 5) = 0;
              F_006b26f0((*(undefined * PTR32 *)&gen_args[0]),piVar6);
              piVar6 = (int *)*piVar4;
            }
            *(char *)(piVar6 + 5) = (char)piVar4[5];
            *(undefined1 *)(piVar4 + 5) = 1;
            *(undefined1 *)(*piVar6 + 0x14) = 1;
            F_006aff90((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            break;
          }
        }
        piVar6 = (int *)piVar4[1];
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 5) = 1;
  }
  F_00429760(piVar3,0x18,0xd8);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + -1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_006b5900 */
uint F_006b5900(unsigned int gen_a0)
{
  GEN_ENTER(0x6b5900u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  cVar1 = *(char *)((int)piVar2 + 0x15);
  while (cVar1 == '\0') {
    F_006b47d0(this,piVar2[2]);
    piVar3 = (int *)*piVar2;
    F_00429760(piVar2,0x18,0xd8);
    piVar2 = piVar3;
    cVar1 = *(char *)((int)piVar3 + 0x15);
  }
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar4 = *(uint *)((int)this + 4);
  *(uint *)(uVar4 + 8) = uVar4;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar4;
}

/* ref: FUN_006b5970 */
uint F_006b5970(unsigned int gen_a0)
{
  GEN_ENTER(0x6b5970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_006b2b00(this);
  return (uint)this;
}

/* ref: FUN_006b5980 */
uint F_006b5980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b5980u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_006b5990 */
byte F_006b5990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b5990u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  piVar4 = param_1;
  piVar2 = param_1;
  while (piVar4 != param_2) {
    if (piVar4[0x10] != 0) {
      F_0050c620(piVar4[0x10],0,0);
      piVar4[0x10] = 0;
      piVar4 = piVar2;
    }
    if (*(char *)((int)piVar4 + 0x45) == '\0') {
      piVar2 = (int *)piVar4[2];
      if (*(char *)((int)piVar2 + 0x45) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x45);
        piVar4 = piVar2;
        piVar3 = (int *)*piVar2;
        while (piVar2 = piVar4, cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x45);
          piVar4 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar1 = *(char *)(piVar4[1] + 0x45);
        piVar2 = (int *)piVar4[1];
        piVar3 = piVar4;
        while ((piVar4 = piVar2, piVar2 = piVar4, cVar1 == '\0' && (piVar3 == (int *)piVar4[2]))) {
          cVar1 = *(char *)(piVar4[1] + 0x45);
          piVar2 = (int *)piVar4[1];
          piVar3 = piVar4;
        }
      }
    }
  }
  return (byte)param_3;
}

/* ref: FUN_006b5a20 */
unsigned int F_006b5a20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b5a20u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar1);
      }
      puVar1 = puVar1 + 2;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_006b5a50 */
uint F_006b5a50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b5a50u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = param_2;
  if (8 < (int)(param_2 - param_1 & 0xfffffff8)) {
    uVar1 = F_006b4bd0(param_1,param_2,param_3,0,0);
  }
  return uVar1;
}

/* ref: FUN_006b5a80 */
unsigned int F_006b5a80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b5a80u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_006b5ab0 */
unsigned int F_006b5ab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b5ab0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_006b5ae0 */
unsigned int F_006b5ae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b5ae0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_006b5b10 */
unsigned int F_006b5b10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b5b10u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_006b5b40 */
unsigned int F_006b5b40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6b5b40u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_3 - param_1 >> 3;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar2 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    iVar1 = iVar2 * 8 + param_1;
    F_006b4d60(param_1,iVar1,iVar2 * 0x10 + param_1,param_4);
    F_006b4d60(param_2 + iVar2 * -8,param_2,iVar2 * 8 + param_2,param_4);
    iVar3 = param_3 + iVar2 * -8;
    F_006b4d60(param_3 + iVar2 * -0x10,iVar3,param_3,param_4);
    F_006b4d60(iVar1,param_2,iVar3,param_4);
    return 0;
  }
  F_006b4d60(param_1,param_2,param_3,param_4);
  return 0;
}

/* ref: FUN_006b5be0 */
unsigned int F_006b5be0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6b5be0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  code * param_3 = (code *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  undefined4 * puVar2;
  char cVar3;
  uint uVar4;
  undefined4 * puVar5;
  
  if ((param_1 != param_2) && (puVar5 = param_1 + 2, puVar5 != param_2)) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = param_1;
    do {
      (*(undefined4 *)(gen_frame + 0x0)) = *puVar5;
      (*(undefined4 *)(gen_frame + 0x4)) = puVar5[1];
      uVar4 = (*param_3)(&(*(undefined4 *)(gen_frame + 0x0)),param_1);
      puVar2 = (*(undefined4 * PTR32 *)(gen_frame + 0x8));
      puVar1 = puVar5;
      if ((char)uVar4 == '\0') {
        uVar4 = (*param_3)(&(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 * PTR32 *)(gen_frame + 0x8)));
        cVar3 = (char)uVar4;
        while (cVar3 != '\0') {
          *puVar1 = *puVar2;
          puVar1[1] = puVar2[1];
          uVar4 = (*param_3)(&(*(undefined4 *)(gen_frame + 0x0)),puVar2 + -2);
          puVar1 = puVar2;
          puVar2 = puVar2 + -2;
          cVar3 = (char)uVar4;
        }
        *puVar1 = (*(undefined4 *)(gen_frame + 0x0));
        puVar1[1] = (*(undefined4 *)(gen_frame + 0x4));
      }
      else {
        for (; param_1 != puVar1; puVar1 = puVar1 + -2) {
          *puVar1 = puVar1[-2];
          puVar1[1] = puVar1[-1];
        }
        *param_1 = (*(undefined4 *)(gen_frame + 0x0));
        param_1[1] = (*(undefined4 *)(gen_frame + 0x4));
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (*(undefined4 * PTR32 *)(gen_frame + 0x8)) + 2;
      puVar5 = puVar5 + 2;
    } while (puVar5 != param_2);
  }
  return 0;
}

/* ref: FUN_006b5cb0 */
unsigned int F_006b5cb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b5cb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(param_2 + -4);
  (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(param_2 + -8);
  *(undefined4 *)(param_2 + -8) = *param_1;
  *(undefined4 *)(param_2 + -4) = param_1[1];
  F_006b2d20(param_1,0,(param_2 - (int)param_1) + -8 >> 3,&(*(undefined4 *)(gen_frame + 0x4)),param_3);
  return 0;
}

/* ref: FUN_006b5d00 */
uint F_006b5d00(unsigned int gen_a0)
{
  GEN_ENTER(0x6b5d00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_006b5090(this);
  return (uint)this;
}

/* ref: FUN_006b5d10 */
uint F_006b5d10(unsigned int gen_a0)
{
  GEN_ENTER(0x6b5d10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_006b5090(this);
  return (uint)this;
}

/* ref: FUN_006b5d20 */
unsigned int F_006b5d20(unsigned int gen_a0)
{
  GEN_ENTER(0x6b5d20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)((int)this + 4) != 0) {
    F_006b2f70(((undefined *)GEN_TOP((*(int *)((int)this + 4) + 0x90))));
  }
  *(uint *)((int)this + 0x18) = *(uint *)((int)this + 0x18) & 0xfffffff3;
  return 0;
}

/* ref: FUN_006b5d40 */
uint F_006b5d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b5d40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_006b5d60 */
uint F_006b5d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b5d60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_006b5d70 */
uint F_006b5d70(unsigned int gen_a0)
{
  GEN_ENTER(0x6b5d70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (0xf < *(uint *)((int)this + 0x28)) {
    F_00429760(*(undefined4 *)((int)this + 0x14),*(uint *)((int)this + 0x28) + 1,0x32);
  }
  *(undefined4 *)((int)this + 0x28) = 0xf;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined1 *)((int)this + 0x14) = 0;
  return 0;
}

/* ref: FUN_006b5da0 */
uint F_006b5da0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b5da0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x45) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x45) == '\0');
  }
  if ((puVar3 != *(undefined4 * PTR32 *)((int)this + 4)) && ((uint)puVar3[3] <= *param_2)) {
    *param_1 = puVar3;
    return (uint)param_1;
  }
  *param_1 = *(undefined4 * PTR32 *)((int)this + 4);
  return (uint)param_1;
}

/* ref: FUN_006b5e10 */
uint F_006b5e10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b5e10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x45) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x45) == '\0');
  }
  if ((puVar3 != *(undefined4 * PTR32 *)((int)this + 4)) && ((uint)puVar3[3] <= *param_2)) {
    *param_1 = puVar3;
    return (uint)param_1;
  }
  *param_1 = *(undefined4 * PTR32 *)((int)this + 4);
  return (uint)param_1;
}

/* ref: FUN_006b5e80 */
unsigned int F_006b5e80(unsigned int gen_a0)
{
  GEN_ENTER(0x6b5e80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != *(int *)((int)this + 4)) {
    F_00c46e20(iVar1,*(int *)((int)this + 4),0);
    *(int *)((int)this + 4) = iVar1;
  }
  return 0;
}

/* ref: FUN_006b5eb0 */
uint F_006b5eb0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b5eb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0xd8);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_006b5ef0 */
unsigned int F_006b5ef0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b5ef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != *(int *)((int)this + 4)) {
    F_00c46e20(iVar1,*(int *)((int)this + 4),0);
    *(int *)((int)this + 4) = iVar1;
  }
  return 0;
}

/* ref: FUN_006b5f20 */
uint F_006b5f20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6b5f20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  piVar3 = param_2;
  if ((param_2 == ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 4)))) && (param_3 == *(int * PTR32 *)((int)this + 4))) {
    F_006b5900(this);
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x15) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x15) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x15);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x15);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x15);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_006b56a0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_006b5fd0 */
byte F_006b5fd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b5fd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  byte bVar1;
  
  bVar1 = F_006b5990(param_1,param_2,param_3);
  return bVar1;
}

/* ref: FUN_006b5ff0 */
unsigned int F_006b5ff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b5ff0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar1);
      }
      puVar1 = puVar1 + 2;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_006b6030 */
uint F_006b6030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6b6030u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint param_4 = (uint)gen_a4;
  uint uVar1;
  undefined * pvVar2;
  undefined * pvVar3;
  undefined4 * puVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = *(uint *)((int)this + 0x10);
  if ((uVar5 < param_1) || ((uint)param_2[4] < param_3)) {
                    
    F_00c457e7("invalid string position");
  }
  uVar1 = param_2[4] - param_3;
  uVar6 = param_4;
  if (uVar1 < param_4) {
    uVar6 = uVar1;
  }
  if (uVar6 < -uVar5 - 1) {
    if (uVar6 != 0) {
      uVar1 = uVar5 + uVar6;
      if (uVar1 == 0xffffffff) {
                    
        F_00c4579a("string too long");
      }
      if (*(uint *)((int)this + 0x14) < uVar1) {
        F_004e3ed0(this,uVar1,uVar5);
        if (uVar1 == 0) {
          return (uint)this;
        }
      }
      else if (uVar1 == 0) {
        *(undefined4 *)((int)this + 0x10) = 0;
        if (*(uint *)((int)this + 0x14) < 0x10) {
          *(undefined1 *)this = 0;
          return (uint)this;
        }
        **(undefined1 * PTR32 *)this = 0;
        return (uint)this;
      }
      pvVar2 = this;
      pvVar3 = this;
      if (0xf < *(uint *)((int)this + 0x14)) {
        pvVar2 = *(undefined * PTR32 *)this;
        pvVar3 = *(undefined * PTR32 *)this;
      }
      F_00c46e20((int)pvVar2 + uVar6 + param_1,(int)pvVar3 + param_1,
                 *(int *)((int)this + 0x10) - param_1);
      if (this == param_2) {
        uVar5 = param_3 + uVar6;
        if (param_3 <= param_1) {
          uVar5 = param_3;
        }
        if (*(uint *)((int)this + 0x14) < 0x10) {
          F_00c46e20((int)this + param_1,(int)this + uVar5,uVar6);
        }
        else {
          F_00c46e20(*(int *)this + param_1,*(int *)this + uVar5,uVar6);
        }
      }
      else {
        puVar4 = param_2;
        if (0xf < (uint)param_2[5]) {
          puVar4 = (undefined4 *)*param_2;
        }
        pvVar3 = this;
        if (0xf < *(uint *)((int)this + 0x14)) {
          pvVar3 = *(undefined * PTR32 *)this;
        }
        F_00c46aa0((int)pvVar3 + param_1,(int)puVar4 + param_3,uVar6);
      }
      *(uint *)((int)this + 0x10) = uVar1;
      if (0xf < *(uint *)((int)this + 0x14)) {
        *(undefined1 *)(*(int *)this + uVar1) = 0;
        return (uint)this;
      }
      *(undefined1 *)((int)this + uVar1) = 0;
    }
    return (uint)this;
  }
                    
  F_00c4579a("string too long");
}

/* ref: FUN_006b61b0 */
unsigned int F_006b61b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b61b0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_006b61e0 */
unsigned int F_006b61e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b61e0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_006b6210 */
unsigned int F_006b6210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b6210u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_006b6240 */
unsigned int F_006b6240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b6240u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_006b6270 */
uint F_006b6270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6b6270u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  code * param_4 = (code *)(uintptr_t)gen_a3;
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 * puVar4;
  uint uVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  undefined4 * puVar10;
  undefined4 * puVar11;
  undefined4 * local_c;
  undefined4 * local_8;
  
  puVar9 = param_2 + (((int)param_3 - (int)((int)(uintptr_t)param_2) >> 3) - ((int)param_3 - (int)((int)(uintptr_t)param_2) >> 0x1f) >>
                     1) * 2;
  F_006b5b40(param_2,puVar9,param_3 + -2,param_4);
  puVar1 = puVar9;
  while (puVar6 = puVar1, param_2 < puVar6) {
    puVar1 = puVar6 + -2;
    uVar5 = (*param_4)(puVar1,puVar6);
    if (((char)uVar5 != '\0') || (uVar5 = (*param_4)(puVar6,puVar1), (char)uVar5 != '\0')) break;
  }
  do {
    puVar9 = puVar9 + 2;
    puVar1 = puVar9;
    puVar7 = puVar9;
    local_c = puVar6;
    puVar10 = puVar6;
    if (param_3 <= puVar9) break;
    uVar5 = (*param_4)(puVar9,puVar6);
    if (((char)uVar5 != '\0') || (uVar5 = (*param_4)(puVar6,puVar9), (char)uVar5 != '\0')) break;
  } while( true );
joined_r0x006b6305: ;
  puVar11 = puVar6;
  puVar4 = local_c;
  local_8 = puVar7;
  if (param_3 <= puVar1) {
joined_r0x006b634f: ;
    while (puVar7 = puVar6, param_2 < puVar6) {
      puVar8 = puVar11 + -2;
      uVar5 = (*param_4)(puVar8,puVar10);
      puVar7 = puVar10;
      puVar9 = local_8;
      if ((char)uVar5 == '\0') {
        uVar5 = (*param_4)(puVar10,puVar8);
        puVar7 = puVar4;
        if ((char)uVar5 != '\0') break;
        uVar2 = puVar10[-2];
        uVar3 = puVar10[-1];
        puVar7 = puVar10 + -2;
        *puVar7 = *puVar8;
        puVar10[-1] = puVar11[-1];
        *puVar8 = uVar2;
        puVar11[-1] = uVar3;
      }
      puVar6 = puVar4 + -2;
      puVar11 = puVar8;
      puVar10 = puVar7;
      puVar4 = puVar6;
    }
    if (puVar7 == param_2) {
      if (puVar1 == param_3) {
        *param_1 = puVar10;
        param_1[1] = puVar9;
        return (uint)param_1;
      }
      if (puVar9 != puVar1) {
        uVar2 = puVar10[1];
        uVar3 = *puVar10;
        *puVar10 = *puVar9;
        puVar10[1] = puVar9[1];
        *puVar9 = uVar3;
        puVar9[1] = uVar2;
      }
      uVar2 = *puVar10;
      uVar3 = puVar10[1];
      *puVar10 = *puVar1;
      puVar10[1] = puVar1[1];
      puVar9 = puVar9 + 2;
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar6 = puVar7;
      puVar1 = puVar1 + 2;
      puVar7 = puVar9;
      local_c = puVar4;
      puVar10 = puVar10 + 2;
    }
    else {
      puVar6 = puVar7 + -2;
      local_c = puVar6;
      if (puVar1 == param_3) {
        puVar11 = puVar10 + -2;
        if (puVar6 != puVar11) {
          uVar2 = puVar7[-1];
          uVar3 = *puVar6;
          *puVar6 = *puVar11;
          puVar7[-1] = puVar10[-1];
          *puVar11 = uVar3;
          puVar10[-1] = uVar2;
        }
        uVar2 = puVar10[-1];
        uVar3 = *puVar11;
        puVar7 = puVar9 + -2;
        *puVar11 = *puVar7;
        puVar10[-1] = puVar9[-1];
        *puVar7 = uVar3;
        puVar9[-1] = uVar2;
        puVar9 = puVar7;
        puVar10 = puVar11;
      }
      else {
        uVar2 = puVar1[1];
        uVar3 = *puVar1;
        *puVar1 = *puVar6;
        puVar1[1] = puVar7[-1];
        *puVar6 = uVar3;
        puVar7[-1] = uVar2;
        puVar1 = puVar1 + 2;
        puVar7 = local_8;
      }
    }
    goto joined_r0x006b6305;
  }
  uVar5 = (*param_4)(puVar10,puVar1);
  if ((char)uVar5 == '\0') {
    uVar5 = (*param_4)(puVar1,puVar10);
    puVar6 = local_c;
    puVar11 = local_c;
    local_8 = puVar9;
    if ((char)uVar5 != '\0') goto joined_r0x006b634f;
    uVar2 = puVar9[1];
    uVar3 = *puVar9;
    *puVar9 = *puVar1;
    puVar9[1] = puVar1[1];
    puVar9 = puVar9 + 2;
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
  }
  puVar6 = local_c;
  puVar1 = puVar1 + 2;
  puVar7 = puVar9;
  goto joined_r0x006b6305;
}

/* ref: FUN_006b6490 */
unsigned int F_006b6490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b6490u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_006b5be0(param_1,param_2,param_3,0);
  return 0;
}

/* ref: FUN_006b64b0 */
unsigned int F_006b64b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b64b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = param_2 - (int)param_1;
  if (8 < (int)(uVar1 & 0xfffffff8)) {
    puVar2 = (undefined4 *)(param_2 + -8);
    do {
      (*(undefined4 *)(gen_frame + 0x4)) = *puVar2;
      *puVar2 = *param_1;
      (*(undefined4 *)(gen_frame + 0x8)) = puVar2[1];
      puVar2[1] = param_1[1];
      F_006b2d20(param_1,0,(int)(uVar1 - 8) >> 3,&(*(undefined4 *)(gen_frame + 0x4)),param_3);
      puVar2 = puVar2 + -2;
      uVar1 = (int)puVar2 + (8 - (int)param_1);
    } while (8 < (int)(uVar1 & 0xfffffff8));
  }
  return 0;
}

/* ref: FUN_006b6520 */
uint F_006b6520(unsigned int gen_a0)
{
  GEN_ENTER(0x6b6520u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (0xf < *(uint *)((int)this + 0x2c)) {
    F_00429760(*(undefined4 *)((int)this + 0x18),*(uint *)((int)this + 0x2c) + 1,0x32);
  }
  *(undefined4 *)((int)this + 0x2c) = 0xf;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x18) = 0;
  return 0;
}

/* ref: FUN_006b65b0 */
uint F_006b65b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6b65b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)this = 0;
  F_004e54d0(this,param_1,param_2,param_3);
  return (uint)this;
}

/* ref: FUN_006b65f0 */
uint F_006b65f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b65f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_006b5f20(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_006b6610 */
uint F_006b6610(unsigned int gen_a0)
{
  GEN_ENTER(0x6b6610u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 3) * 8,0xd8);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_006b6650 */
uint F_006b6650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b6650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_1;
  if ((uint)(*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 3) < param_1) {
    uVar3 = F_004296a0(param_1 * 8,0,0xd8);
    F_006b5ff0(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3);
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 3) * 8,0xd8);
    }
    uVar4 = uVar3 + (iVar2 - iVar1 >> 3) * 8;
    *(uint *)this = uVar3;
    *(uint *)((int)this + 8) = param_1 * 8 + uVar3;
    *(uint *)((int)this + 4) = uVar4;
  }
  return uVar4;
}

/* ref: FUN_006b66f0 */
uint F_006b66f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b66f0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = param_3;
  if (param_1 != param_2) {
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return (uint)puVar1;
}

/* ref: FUN_006b6720 */
unsigned int F_006b6720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b6720u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_006b6750 */
unsigned int F_006b6750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b6750u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_006b6780 */
unsigned int F_006b6780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b6780u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_006b67b0 */
uint F_006b67b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b67b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_006b6030(this,param_1,param_2,0,0xffffffff);
  return uVar1;
}

/* ref: FUN_006b67d0 */
unsigned int F_006b67d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b67d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_006b64b0(param_1,param_2,param_3);
  return 0;
}

/* ref: FUN_006b67e0 */
uint F_006b67e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b67e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (0xf < *(uint *)((int)this + 0x2c)) {
    F_00429760(*(undefined4 *)((int)this + 0x18),*(uint *)((int)this + 0x2c) + 1,0x32);
  }
  *(undefined4 *)((int)this + 0x2c) = 0xf;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x18) = 0;
  return 0;
}

/* ref: FUN_006b6810 */
uint F_006b6810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6b6810u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  F_004e54d0(param_1,this,param_2,param_3);
  return (uint)param_1;
}

/* ref: FUN_006b6840 */
uint F_006b6840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b6840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  if (this != param_1) {
    iVar2 = *param_1;
    uVar6 = param_1[1] - iVar2 >> 2;
    iVar3 = *(int *)this;
    if (uVar6 == 0) {
      if (iVar3 != *(int *)((int)this + 4)) {
        F_00c46e20(iVar3,*(int *)((int)this + 4),0);
        *(int *)((int)this + 4) = iVar3;
        return (uint)this;
      }
    }
    else {
      uVar7 = *(int *)((int)this + 4) - iVar3 >> 2;
      if (uVar6 <= uVar7) {
        F_00c46e20(iVar3,iVar2,(param_1[1] - iVar2 >> 2) * 4);
        *(int *)((int)this + 4) = *(int *)this + (param_1[1] - *param_1 >> 2) * 4;
        return (uint)this;
      }
      uVar5 = *(int *)((int)this + 8) - iVar3 >> 2;
      if (uVar6 <= uVar5) {
        iVar1 = iVar2 + uVar7 * 4;
        F_00c46e20(iVar3,iVar2,(iVar1 - iVar2 >> 2) * 4);
        uVar6 = F_006b66f0(iVar1,param_1[1],*(undefined4 *)((int)this + 4));
        *(uint *)((int)this + 4) = uVar6;
        return (uint)this;
      }
      if (iVar3 != 0) {
        F_0051c130(iVar3,uVar5);
      }
      bVar4 = F_00520b70(this,param_1[1] - *param_1 >> 2);
      if (bVar4 != 0) {
        uVar6 = F_006b66f0(*param_1,param_1[1],*(undefined4 *)this);
        *(uint *)((int)this + 4) = uVar6;
      }
    }
  }
  return (uint)this;
}

/* ref: FUN_006b6960 */
uint F_006b6960(unsigned int gen_a0)
{
  GEN_ENTER(0x6b6960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_006b5f20(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,0xd8);
  return (uint)uVar1;
}

/* ref: FUN_006b69a0 */
uint F_006b69a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b69a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 3) * 8,0xd8);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_006b69e0 */
uint F_006b69e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b69e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 3;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 3;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_006b6650(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_006b6650(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_006b6a50 */
uint F_006b6a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b6a50u, gen_a0, gen_a1, 0u, 0u);
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
    puVar3 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,0xd4);
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
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0xd4);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_006b6b00 */
uint F_006b6b00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b6b00u, gen_a0, gen_a1, 0u, 0u);
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
    puVar3 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,0xd8);
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
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0xd8);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_006b6bb0 */
uint F_006b6bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b6bb0u, gen_a0, gen_a1, 0u, 0u);
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
    puVar3 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,0xd8);
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
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0xd8);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_006b6c60 */
uint F_006b6c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b6c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if (this != param_1) {
    if (0xf < *(uint *)((int)this + 0x14)) {
      F_00429760(*(undefined4 *)this,*(uint *)((int)this + 0x14) + 1,0x32);
    }
    *(undefined4 *)((int)this + 0x14) = 0xf;
    *(undefined4 *)((int)this + 0x10) = 0;
    *(undefined1 *)this = 0;
    if ((uint)param_1[5] < 0x10) {
      F_00c46e20(this,param_1,param_1[4] + 1);
    }
    else {
      *(undefined4 *)this = *param_1;
      *param_1 = 0;
    }
    *(undefined4 *)((int)this + 0x10) = param_1[4];
    *(undefined4 *)((int)this + 0x14) = param_1[5];
    param_1[5] = 0xf;
    param_1[4] = 0;
    *(undefined1 *)param_1 = 0;
  }
  return (uint)this;
}

/* ref: FUN_006b6cf0 */
unsigned int F_006b6cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6b6cf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
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
LAB_006b6d82: ;
      if (1 < iVar1) {
        F_006b5be0(iVar2,iVar4,param_4,0);
      }
      return 0;
    }
    if (iVar3 < 1) {
      if (0x20 < iVar1) {
        if (8 < (int)(iVar4 - iVar2 & 0xfffffff8U)) {
          F_006b4bd0(iVar2,iVar4,param_4,0,0);
        }
        F_006b64b0(iVar2,iVar4,param_4);
        return 0;
      }
      goto LAB_006b6d82;
    }
    F_006b6270(&(*(int *)(gen_frame + 0x4)),iVar2,iVar4,param_4);
    iVar3 = iVar3 / 2 + (iVar3 / 2) / 2;
    if ((int)((*(int *)(gen_frame + 0x4)) - iVar2 & 0xfffffff8U) < (int)(iVar4 - (*(int *)(gen_frame + 0x8)) & 0xfffffff8U)) {
      F_006b6cf0(iVar2,(*(int *)(gen_frame + 0x4)),iVar3,param_4);
      iVar2 = (*(int *)(gen_frame + 0x8));
    }
    else {
      F_006b6cf0((*(int *)(gen_frame + 0x8)),iVar4,iVar3,param_4);
      iVar4 = (*(int *)(gen_frame + 0x4));
    }
    iVar1 = iVar4 - iVar2;
  } while( true );
}

/* ref: FUN_006b6de0 */
uint F_006b6de0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b6de0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10b32d4));
  iVar1 = *(int *)((int)this + 0xac);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 0xb4) - iVar1 >> 2) * 4,0xcb);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10b2a7c));
  return uVar2;
}

/* ref: Client::Graphics::Scene::CharacterUtility::vf0 */
uint F_006b6e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b6e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_006b6de0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_006b6e70 */
uint F_006b6e70(unsigned int gen_a0)
{
  GEN_ENTER(0x6b6e70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (0xf < *(uint *)((int)this + 0x2c)) {
    F_00429760(*(undefined4 *)((int)this + 0x18),*(uint *)((int)this + 0x2c) + 1,0x32);
  }
  *(undefined4 *)((int)this + 0x2c) = 0xf;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x18) = 0;
  return 0;
}

/* ref: FUN_006b6ea0 */
uint F_006b6ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b6ea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_006b6840(this,param_1);
  return (uint)this;
}

/* ref: FUN_006b6ec0 */
uint F_006b6ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b6ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x28) = 0xf;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined1 *)((int)this + 0x14) = 0;
  F_004e54d0((undefined1 *)((int)this + 0x14),param_1 + 5,0,0xffffffff);
  return (uint)this;
}

/* ref: FUN_006b6f10 */
uint F_006b6f10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x6b6f10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  *(undefined4 *)this = *param_3;
  *(undefined4 *)((int)this + 4) = *param_4;
  *(undefined4 *)((int)this + 8) = param_5;
  *(undefined4 *)((int)this + 0xc) = param_6;
  *(undefined4 *)((int)this + 0x10) = param_2;
  *(undefined4 *)((int)this + 0x28) = 0xf;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined1 *)((int)this + 0x14) = 0;
  F_004e54d0((undefined1 *)((int)this + 0x14),param_1,0,0xffffffff);
  return (uint)this;
}

/* ref: FUN_006b6f60 */
uint F_006b6f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x6b6f60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  byte * pbVar1;
  uint uVar2;
  int iVar3;
  
  *(undefined4 *)((int)this + 4) = *param_3;
  *(undefined4 *)((int)this + 8) = *param_4;
  *(undefined4 *)((int)this + 0xc) = param_5;
  *(undefined4 *)((int)this + 0x10) = param_6;
  *(undefined4 *)((int)this + 0x14) = param_2;
  *(undefined4 *)((int)this + 0x2c) = 0xf;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x18) = 0;
  F_004e54d0((undefined1 *)((int)this + 0x18),param_1,0,0xffffffff);
  uVar2 = 0x811c9dc5;
  pbVar1 = (byte *)((int)this + 5);
  iVar3 = 8;
  do {
    uVar2 = (uint)pbVar1[4] ^
            ((((((uint)pbVar1[-1] ^ uVar2 * 0x1000193) * 0x1000193 ^ (uint)*pbVar1) * 0x1000193 ^
              (uint)pbVar1[1]) * 0x1000193 ^ (uint)pbVar1[2]) * 0x1000193 ^ (uint)pbVar1[3]) *
            0x1000193;
    pbVar1 = pbVar1 + 6;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(uint *)this = uVar2;
  return (uint)this;
}

/* ref: FUN_006b7020 */
uint F_006b7020(unsigned int gen_a0)
{
  GEN_ENTER(0x6b7020u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_006b5f20(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,0xd8);
  return (uint)uVar1;
}

/* ref: FUN_006b70a0 */
uint F_006b70a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b70a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  
  puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar4) && (*(undefined4 * PTR32 *)this <= param_1)) {
    iVar5 = (int)param_1 - (int)*(undefined4 * PTR32 *)((int)(uintptr_t)this) >> 3;
    if (puVar4 == *(undefined4 * PTR32 *)((int)this + 8)) {
      puVar4 = (undefined4 *)F_006b69e0(this,1);
    }
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = *(int *)this;
      *puVar1 = *(undefined4 *)(iVar2 + iVar5 * 8);
      uVar3 = *(uint *)(iVar2 + 4 + iVar5 * 8);
      puVar1[1] = uVar3;
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 8;
      return uVar3;
    }
  }
  else {
    if (puVar4 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_006b69e0(this,1);
    }
    puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = *param_1;
      puVar4[1] = param_1[1];
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 8;
  return (uint)puVar4;
}

/* ref: FUN_006b7120 */
uint F_006b7120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b7120u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_006b6a50(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_006b6a50(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_006b7190 */
uint F_006b7190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b7190u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_006b6b00(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_006b6b00(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_006b7200 */
uint F_006b7200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b7200u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_006b6bb0(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_006b6bb0(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_006b7270 */
unsigned int F_006b7270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b7270u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_006b6cf0(param_1,param_2,param_2 - param_1 >> 3,param_3);
  return 0;
}

/* ref: FUN_006b72a0 */
uint F_006b72a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b72a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)this = 0;
  F_006b6c60(this,param_1);
  return (uint)this;
}

/* ref: FUN_006b72d0 */
uint F_006b72d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b72d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if (0xf < *(uint *)((int)this + 0x2c)) {
    F_00429760(*(undefined4 *)((int)this + 0x18),*(uint *)((int)this + 0x2c) + 1,0x32);
  }
  *(undefined4 *)((int)this + 0x2c) = 0xf;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x18) = 0;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_006b7320 */
uint F_006b7320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b7320u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x2c) = 0xf;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x18) = 0;
  F_004e54d0((undefined1 *)((int)this + 0x18),param_1 + 6,0,0xffffffff);
  return (uint)this;
}

/* ref: Client::Graphics::Scene::GrassManager::vf0 */
uint F_006b7380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b7380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_006a9c90(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_006b73b0 */
unsigned int F_006b73b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b73b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_005296e0(this,1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) =
           *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar2) >> 2) * 4)));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
      return 0;
    }
  }
  else {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_005296e0(this,1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return 0;
}

/* ref: FUN_006b7460 */
unsigned int F_006b7460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b7460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_006b7120(this,1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) =
           *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar2) >> 2) * 4)));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
      return 0;
    }
  }
  else {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_006b7120(this,1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return 0;
}

/* ref: FUN_006b74d0 */
unsigned int F_006b74d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b74d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_006b7120(this,1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) =
           *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar2) >> 2) * 4)));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
      return 0;
    }
  }
  else {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_006b7120(this,1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return 0;
}

/* ref: FUN_006b7540 */
unsigned int F_006b7540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b7540u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_006b7190(this,1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) =
           *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar2) >> 2) * 4)));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
      return 0;
    }
  }
  else {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_006b7190(this,1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return 0;
}

/* ref: FUN_006b75b0 */
unsigned int F_006b75b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b75b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_006b7200(this,1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) =
           *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar2) >> 2) * 4)));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
      return 0;
    }
  }
  else {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_006b7200(this,1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return 0;
}

/* ref: FUN_006b7620 */
unsigned int F_006b7620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b7620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  
  if (this != param_1) {
    iVar1 = *(int *)this;
    if (iVar1 != 0) {
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0xcb);
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)this = *param_1;
    *(undefined4 *)((int)this + 4) = param_1[1];
    *(undefined4 *)((int)this + 8) = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return 0;
}

/* ref: FUN_006b7680 */
uint F_006b7680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b7680u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_006b6030(param_3,0,param_2,0,0xffffffff);
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  F_006b6c60(param_1,uVar1);
  return (uint)param_1;
}

/* ref: FUN_006b76c0 */
uint F_006b76c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b76c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x2c) = 0xf;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x18) = 0;
  F_004e54d0((undefined1 *)((int)this + 0x18),param_1 + 6,0,0xffffffff);
  *(undefined4 *)((int)this + 0x34) = *param_2;
  return (uint)this;
}

/* ref: FUN_006b7720 */
uint F_006b7720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b7720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x2c) = 0xf;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x18) = 0;
  F_004e54d0((undefined1 *)((int)this + 0x18),param_1 + 6,0,0xffffffff);
  *(undefined4 *)((int)this + 0x34) = param_1[0xd];
  return (uint)this;
}

/* ref: FUN_006b7780 */
uint F_006b7780(unsigned int gen_a0)
{
  GEN_ENTER(0x6b7780u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (0xf < *(uint *)(param_1 + 0x2c)) {
    F_00429760(*(undefined4 *)(param_1 + 0x18),*(uint *)(param_1 + 0x2c) + 1,0x32);
  }
  *(undefined4 *)(param_1 + 0x2c) = 0xf;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  return 0;
}

/* ref: FUN_006b77c0 */
unsigned int F_006b77c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b77c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (this != param_1) {
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)this = *param_1;
    *(undefined4 *)((int)this + 4) = param_1[1];
    *(undefined4 *)((int)this + 8) = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return 0;
}

/* ref: FUN_006b7800 */
uint F_006b7800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b7800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  
  if (this != param_1) {
    iVar1 = *(int *)this;
    if (iVar1 != 0) {
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0xcb);
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)this = *param_1;
    *(undefined4 *)((int)this + 4) = param_1[1];
    *(undefined4 *)((int)this + 8) = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return (uint)this;
}

/* ref: FUN_006b7860 */
uint F_006b7860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b7860u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x2c) = 0xf;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x18) = 0;
  F_004e54d0((undefined1 *)((int)this + 0x18),param_1 + 6,0,0xffffffff);
  *(undefined4 *)((int)this + 0x34) = *param_2;
  return (uint)this;
}

/* ref: FUN_006b78c0 */
uint F_006b78c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b78c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x2c) = 0xf;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x18) = 0;
  F_004e54d0((undefined1 *)((int)this + 0x18),param_1 + 6,0,0xffffffff);
  *(undefined4 *)((int)this + 0x34) = param_1[0xd];
  return (uint)this;
}

/* ref: FUN_006b7920 */
uint F_006b7920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b7920u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  if (0xf < *(uint *)(param_2 + 0x2c)) {
    F_00429760(*(undefined4 *)(param_2 + 0x18),*(uint *)(param_2 + 0x2c) + 1,0x32);
  }
  *(undefined4 *)(param_2 + 0x2c) = 0xf;
  *(undefined4 *)(param_2 + 0x28) = 0;
  *(undefined1 *)(param_2 + 0x18) = 0;
  return 0;
}

/* ref: FUN_006b7960 */
unsigned int F_006b7960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b7960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  if (this != param_1) {
    uVar1 = *(undefined4 *)this;
    *(undefined4 *)this = *param_1;
    *param_1 = uVar1;
    uVar1 = *(undefined4 *)((int)this + 4);
    *(undefined4 *)((int)this + 4) = param_1[1];
    param_1[1] = uVar1;
    uVar1 = *(undefined4 *)((int)this + 8);
    *(undefined4 *)((int)this + 8) = param_1[2];
    param_1[2] = uVar1;
  }
  return 0;
}

/* ref: FUN_006b79a0 */
uint F_006b79a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6b79a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  
  if (0xfffffffd < *(uint *)((int)this + 8)) {
    if (0xf < (uint)param_4[0xe]) {
      F_00429760(param_4[9],param_4[0xe] + 1,0x32);
    }
    param_4[0xe] = 0xf;
    param_4[0xd] = 0;
    *(undefined1 *)(param_4 + 9) = 0;
    F_00429760(param_4,0x48,0xcb);
                    
    F_00c4579a("map/set<T> too long");
  }
  *(uint *)((int)this + 8) = *(uint *)((int)this + 8) + 1;
  param_4[1] = (int)param_3;
  if (param_3 == *(undefined4 * PTR32 *)((int)this + 4)) {
    (*(undefined4 * PTR32 *)((int)this + 4))[1] = param_4;
    **(undefined4 * PTR32 *)((int)this + 4) = param_4;
    *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = param_4;
  }
  else if ((char)param_2 == '\0') {
    param_3[2] = param_4;
    if (param_3 == *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 8)))) {
      *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = param_4;
    }
  }
  else {
    *param_3 = param_4;
    if (param_3 == ((undefined4 *)GEN_TOP(**(int * PTR32 *)((int)this + 4)))) {
      **(int * PTR32 *)((int)this + 4) = (int)param_4;
    }
  }
  cVar1 = *(char *)(param_4[1] + 0x44);
  piVar4 = param_4;
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      *param_1 = param_4;
      *(undefined1 *)(iVar2 + 0x44) = 1;
      return (uint)param_1;
    }
    piVar5 = (int *)piVar4[1];
    piVar6 = (int *)piVar5[1];
    if (piVar5 == (int *)*piVar6) {
      iVar2 = piVar6[2];
      if (*(char *)(iVar2 + 0x44) == '\0') {
        *(undefined1 *)(piVar5 + 0x11) = 1;
        *(undefined1 *)(iVar2 + 0x44) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x44))) = 0;
        piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
      }
      else {
        if (piVar4 == (int *)piVar5[2]) {
          piVar4 = (int *)piVar5[2];
          piVar5[2] = *piVar4;
          if (*(char *)(*piVar4 + 0x45) == '\0') {
            *(int * PTR32 *)(*piVar4 + 4) = piVar5;
          }
          piVar4[1] = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
            *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar4;
          }
          else {
            piVar6 = (int *)piVar5[1];
            if (piVar5 == (int *)*piVar6) {
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
        *(undefined1 *)(piVar4[1] + 0x44) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x44))) = 0;
        piVar5 = *(int * PTR32 *)(piVar4[1] + 4);
        piVar6 = (int *)*piVar5;
        *piVar5 = piVar6[2];
        if (*(char *)(piVar6[2] + 0x45) == '\0') {
          *(int * PTR32 *)(piVar6[2] + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar6;
          piVar6[2] = (int)piVar5;
        }
        else {
          piVar3 = (int *)piVar5[1];
          if (piVar5 == (int *)piVar3[2]) {
            piVar3[2] = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
          else {
            *piVar3 = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
        }
LAB_006b7bc3: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*(char *)(iVar2 + 0x44) != '\0') {
        if (piVar4 == (int *)*piVar5) {
          iVar2 = *piVar5;
          *piVar5 = *(int *)(iVar2 + 8);
          if (*((char *)GEN_TOP((*(int *)(iVar2 + 8) + 0x45))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*(int *)(iVar2 + 8) + 4))) = piVar5;
          }
          *(int *)(iVar2 + 4) = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
            *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = iVar2;
          }
          else {
            piVar4 = (int *)piVar5[1];
            if (piVar5 == (int *)piVar4[2]) {
              piVar4[2] = iVar2;
            }
            else {
              *piVar4 = iVar2;
            }
          }
          *(int * PTR32 *)(iVar2 + 8) = piVar5;
          piVar5[1] = iVar2;
          piVar4 = piVar5;
        }
        *(undefined1 *)(piVar4[1] + 0x44) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x44))) = 0;
        piVar5 = *(int * PTR32 *)(piVar4[1] + 4);
        piVar6 = (int *)piVar5[2];
        piVar5[2] = *piVar6;
        if (*(char *)(*piVar6 + 0x45) == '\0') {
          *(int * PTR32 *)(*piVar6 + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar6;
        }
        else {
          piVar3 = (int *)piVar5[1];
          if (piVar5 == (int *)*piVar3) {
            *piVar3 = (int)piVar6;
          }
          else {
            piVar3[2] = (int)piVar6;
          }
        }
        *piVar6 = (int)piVar5;
        goto LAB_006b7bc3;
      }
      *(undefined1 *)(piVar5 + 0x11) = 1;
      *(undefined1 *)(iVar2 + 0x44) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x44))) = 0;
      piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
    }
    cVar1 = *(char *)(piVar4[1] + 0x44);
  } while( true );
}

/* ref: FUN_006b7bf0 */
unsigned int F_006b7bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b7bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_006b78c0(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_006b7c10 */
uint F_006b7c10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b7c10u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  int * piVar7;
  
  piVar3 = (*(int * PTR32 *)&gen_args[2]);
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x45))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  F_006b1d30(&(*(int * PTR32 *)&gen_args[2]));
  piVar6 = (int *)*piVar3;
  if (*(char *)((int)piVar6 + 0x45) == '\0') {
    piVar7 = piVar6;
    if ((*(char *)(piVar3[2] + 0x45) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar3[2]) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar7 + 0x45) == '\0') {
          piVar7[1] = (int)piVar6;
        }
        *piVar6 = (int)piVar7;
        (*(int * PTR32 *)&gen_args[2])[2] = piVar3[2];
        *(int * PTR32 *)(piVar3[2] + 4) = (*(int * PTR32 *)&gen_args[2]);
      }
      if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) == piVar3) {
        *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = (*(int * PTR32 *)&gen_args[2]);
      }
      else {
        puVar2 = (undefined4 *)piVar3[1];
        if ((int *)*puVar2 == piVar3) {
          *puVar2 = (*(int * PTR32 *)&gen_args[2]);
        }
        else {
          puVar2[2] = (*(int * PTR32 *)&gen_args[2]);
        }
      }
      (*(int * PTR32 *)&gen_args[2])[1] = piVar3[1];
      iVar1 = (*(int * PTR32 *)&gen_args[2])[0x11];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 0x11))) = (char)piVar3[0x11];
      *(char *)(piVar3 + 0x11) = (char)iVar1;
      goto LAB_006b7d2a;
    }
  }
  else {
    piVar7 = (int *)piVar3[2];
  }
  piVar6 = (int *)piVar3[1];
  if (*(char *)((int)piVar7 + 0x45) == '\0') {
    piVar7[1] = (int)piVar6;
  }
  if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) == piVar3) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = piVar7;
  }
  else if ((int *)*piVar6 == piVar3) {
    *piVar6 = (int)piVar7;
  }
  else {
    piVar6[2] = (int)piVar7;
  }
  if (((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))))) == piVar3) {
    piVar4 = piVar6;
    if (*(char *)((int)piVar7 + 0x45) == '\0') {
      piVar4 = (int *)F_006b1cf0(piVar7);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*(int * PTR32 *)(iVar1 + 8) == piVar3) {
    if (*(char *)((int)piVar7 + 0x45) == '\0') {
      uVar5 = F_006b1cd0(piVar7);
      *(uint *)(iVar1 + 8) = uVar5;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar6;
    }
  }
LAB_006b7d2a: ;
  if ((char)piVar3[0x11] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[0x11] != '\x01') break;
        piVar6 = (int *)*piVar4;
        if (piVar7 == piVar6) {
          piVar6 = (int *)piVar4[2];
          if ((char)piVar6[0x11] == '\0') {
            *(undefined1 *)(piVar6 + 0x11) = 1;
            *(undefined1 *)(piVar4 + 0x11) = 0;
            F_006b5290((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)piVar4[2];
          }
          if (*(char *)((int)piVar6 + 0x45) == '\0') {
            if ((*(char *)(*piVar6 + 0x44) != '\x01') || (*(char *)(piVar6[2] + 0x44) != '\x01')) {
              if (*(char *)(piVar6[2] + 0x44) == '\x01') {
                *(undefined1 *)(*piVar6 + 0x44) = 1;
                *(undefined1 *)(piVar6 + 0x11) = 0;
                F_006b3a00((*(undefined * PTR32 *)&gen_args[0]),piVar6);
                piVar6 = (int *)piVar4[2];
              }
              *(char *)(piVar6 + 0x11) = (char)piVar4[0x11];
              *(undefined1 *)(piVar4 + 0x11) = 1;
              *(undefined1 *)(piVar6[2] + 0x44) = 1;
              F_006b5290((*(undefined * PTR32 *)&gen_args[0]),piVar4);
              break;
            }
LAB_006b7de8: ;
            *(undefined1 *)(piVar6 + 0x11) = 0;
          }
        }
        else {
          if ((char)piVar6[0x11] == '\0') {
            *(undefined1 *)(piVar6 + 0x11) = 1;
            *(undefined1 *)(piVar4 + 0x11) = 0;
            F_006b3a00((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)*piVar4;
          }
          if (*(char *)((int)piVar6 + 0x45) == '\0') {
            if ((*(char *)(piVar6[2] + 0x44) == '\x01') && (*(char *)(*piVar6 + 0x44) == '\x01'))
            goto LAB_006b7de8;
            if (*(char *)(*piVar6 + 0x44) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0x44) = 1;
              *(undefined1 *)(piVar6 + 0x11) = 0;
              F_006b5290((*(undefined * PTR32 *)&gen_args[0]),piVar6);
              piVar6 = (int *)*piVar4;
            }
            *(char *)(piVar6 + 0x11) = (char)piVar4[0x11];
            *(undefined1 *)(piVar4 + 0x11) = 1;
            *(undefined1 *)(*piVar6 + 0x44) = 1;
            F_006b3a00((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            break;
          }
        }
        piVar6 = (int *)piVar4[1];
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 0x11) = 1;
  }
  if (0xf < (uint)piVar3[0xe]) {
    F_00429760(piVar3[9],piVar3[0xe] + 1,0x32);
  }
  piVar3[0xe] = 0xf;
  piVar3[0xd] = 0;
  *(undefined1 *)(piVar3 + 9) = 0;
  F_00429760(piVar3,0x48,0xcb);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + -1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_006b7ea0 */
unsigned int F_006b7ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b7ea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x45);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_006b7ea0(this,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    if (0xf < (uint)piVar3[0xe]) {
      F_00429760(piVar3[9],piVar3[0xe] + 1,0x32);
    }
    piVar3[0xe] = 0xf;
    piVar3[0xd] = 0;
    *(undefined1 *)(piVar3 + 9) = 0;
    F_00429760(piVar3,0x48,0xcb);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x45);
  }
  return 0;
}

/* ref: FUN_006b7f10 */
uint F_006b7f10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6b7f10u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  undefined4 uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  bool bVar5;
  
  iVar2 = (*(int *)&gen_args[2]);
  puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  bVar5 = true;
  (*(int *)&gen_args[2]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[2]), 1, 3),1);
  if (*(char *)((int)puVar4[1] + 0x45) == '\0') {
    puVar3 = (undefined4 *)puVar4[1];
    do {
      puVar4 = puVar3;
      if ((char)(*(undefined4 * PTR32 *)&gen_args[3]) == '\0') {
        bVar5 = *(uint *)(iVar2 + 0xc) < (uint)puVar4[3];
      }
      else {
        bVar5 = *(uint *)(iVar2 + 0xc) <= (uint)puVar4[3];
      }
      (*(int *)&gen_args[2]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[2]), 1, 3),bVar5);
      if (bVar5 == false) {
        puVar3 = (undefined4 *)puVar4[2];
      }
      else {
        puVar3 = (undefined4 *)*puVar4;
      }
    } while (*(char *)((int)puVar3 + 0x45) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[3]) = puVar4;
  if (bVar5 != false) {
    if (puVar4 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
      puVar4 = (undefined4 *)F_006b79a0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar4,iVar2);
      *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar4;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    F_006b2b00(&(*(undefined4 * PTR32 *)&gen_args[3]));
  }
  if ((uint)(*(undefined4 * PTR32 *)&gen_args[3])[3] < *(uint *)(iVar2 + 0xc)) {
    puVar4 = (undefined4 *)F_006b79a0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),(*(int *)&gen_args[2]),puVar4,iVar2);
    uVar1 = *puVar4;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
    *(*(undefined4 * PTR32 *)&gen_args[1]) = uVar1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  if (0xf < *(uint *)(iVar2 + 0x38)) {
    F_00429760(*(undefined4 *)(iVar2 + 0x24),*(uint *)(iVar2 + 0x38) + 1,0x32);
  }
  *(undefined4 *)(iVar2 + 0x38) = 0xf;
  *(undefined4 *)(iVar2 + 0x34) = 0;
  *(undefined1 *)(iVar2 + 0x24) = 0;
  F_00429760(iVar2,0x48,0xcb);
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(undefined4 * PTR32 *)&gen_args[3]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_006b8010 */
unsigned int F_006b8010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b8010u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_006b78c0(param_2,param_3);
  }
  return 0;
}

/* ref: FUN_006b8030 */
unsigned int F_006b8030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b8030u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_006b78c0(param_2,param_3);
  }
  return 0;
}

/* ref: FUN_006b8050 */
uint F_006b8050(unsigned int gen_a0)
{
  GEN_ENTER(0x6b8050u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_006b7ea0(this,*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar1 = *(uint *)((int)this + 4);
  *(uint *)(uVar1 + 8) = uVar1;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_006b8080 */
uint F_006b8080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b8080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x48,0,0xcb);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 0x11) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    F_006b78c0(puVar1 + 3,param_1);
  }
  return (uint)puVar1;
}

/* ref: FUN_006b80d0 */
uint F_006b80d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b80d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x48,0,0xcb);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 0x11) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    F_006b78c0(puVar1 + 3,param_1);
  }
  return (uint)puVar1;
}

/* ref: FUN_006b8120 */
uint F_006b8120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6b8120u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  piVar2 = *(int * PTR32 *)((int)this + 4);
  piVar3 = param_2;
  if ((param_2 == (int *)*piVar2) && (param_3 == piVar2)) {
    F_006b7ea0(this,piVar2[1]);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x45) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x45) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x45);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x45);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x45);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x45);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_006b7c10(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_006b81e0 */
uint F_006b81e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b81e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x48,0,0xcb);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 0x11) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    F_006b78c0(puVar1 + 3,param_2);
  }
  F_006b7f10(this,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_006b8240 */
uint F_006b8240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b8240u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x48,0,0xcb);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 0x11) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    F_006b78c0(puVar1 + 3,param_2);
  }
  F_006b7f10(this,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_006b82a0 */
uint F_006b82a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b82a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_006b8120(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_006b82c0 */
uint F_006b82c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b82c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_006b8120(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x48,0xcb);
  return (uint)uVar1;
}

/* ref: FUN_006b8340 */
uint F_006b8340(unsigned int gen_a0)
{
  GEN_ENTER(0x6b8340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_006b8120(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x48,0xcb);
  return (uint)uVar1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf3 */
byte F_006b8380(void)
{
  GEN_ENTER(0x6b8380u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf52 */
unsigned int F_006b8390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b8390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf53 */
unsigned int F_006b83a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b83a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf54 */
unsigned int F_006b83b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b83b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf56 */
unsigned int F_006b83c0(void)
{
  GEN_ENTER(0x6b83c0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf55 */
unsigned int F_006b83d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b83d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf57 */
unsigned int F_006b83e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b83e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf58 */
unsigned int F_006b83f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b83f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf59 */
unsigned int F_006b8400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b8400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf60 */
unsigned int F_006b8410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b8410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf61 */
unsigned int F_006b8420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b8420u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf62 */
unsigned int F_006b8430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b8430u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf73 */
uint F_006b8440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6b8440u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf86 */
unsigned int F_006b8450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6b8450u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: FUN_006b8460 */
unsigned int F_006b8460(unsigned int gen_a0)
{
  GEN_ENTER(0x6b8460u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  int iVar3;
  undefined * this_00;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[91])REFP(0x10b32ec));
  F_00b89b90();
  F_00b826a0((undefined *)((int)this + 0x700));
  F_006b8120((undefined *)((int)this + 0x6d0),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x6d4),
               *(undefined4 * PTR32 *)((int)this + 0x6d4));
  F_00429760(*(undefined4 *)((int)this + 0x6d4),0x48,0xcb);
  F_006b8120((undefined *)((int)this + 0x6c0),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x6c4),
               *(undefined4 * PTR32 *)((int)this + 0x6c4));
  F_00429760(*(undefined4 *)((int)this + 0x6c4),0x48,0xcb);
  this_00 = (undefined *)((int)this + 0x6c0);
  iVar3 = 4;
  do {
    this_00 = (undefined *)((int)this_00 + -0x88);
    F_009fa170(this_00);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  iVar3 = *(int *)((int)this + 0x3fc);
  if (iVar3 != 0) {
    F_00429760(iVar3,(*(int *)((int)this + 0x404) - iVar3 >> 2) * 4,0xcb);
  }
  *(undefined4 *)((int)this + 0x3fc) = 0;
  *(undefined4 *)((int)this + 0x400) = 0;
  *(undefined4 *)((int)this + 0x404) = 0;
  iVar3 = *(int *)((int)this + 0x3ec);
  if (iVar3 != 0) {
    F_00429760(iVar3,(*(int *)((int)this + 0x3f4) - iVar3 >> 2) * 4,0xcb);
  }
  *(undefined4 *)((int)this + 0x3ec) = 0;
  *(undefined4 *)((int)this + 0x3f0) = 0;
  *(undefined4 *)((int)this + 0x3f4) = 0;
  iVar3 = *(int *)((int)this + 0x3dc);
  if (iVar3 != 0) {
    F_00429760(iVar3,(*(int *)((int)this + 0x3e4) - iVar3 >> 2) * 4,0xcb);
  }
  *(undefined4 *)((int)this + 0x3dc) = 0;
  *(undefined4 *)((int)this + 0x3e0) = 0;
  *(undefined4 *)((int)this + 0x3e4) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x90) = (*(undefined * PTR32 (*)[5])REFP(0x10abff4));
  F_004a05c0((undefined *)((int)this + 0x90));
  if (this == (undefined *)0xffffff48) {
    iVar3 = 0;
  }
  else {
    iVar3 = (int)this + 0x90;
  }
  iVar1 = *(int *)(iVar3 + 0x28);
  iVar3 = *(int *)(iVar3 + 0x2c);
  iVar2 = iVar3;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x2c) = iVar3;
    iVar2 = *(int *)&REFG(undefined, 0x1487c7c);
  }
  *(int *)&REFG(undefined, 0x1487c7c) = iVar2;
  if (iVar3 != 0) {
    *(int *)(iVar3 + 0x28) = iVar1;
    iVar1 = REFG(int, 0x1487c80);
  }
  REFG(int, 0x1487c80) = iVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x84) = (*(undefined * PTR32 (*)[10])REFP(0x10b2a9c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b2ae0));
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf0 */
uint F_006b8610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b8610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_006b8460(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Scene::Human::vf80 */
uint F_006b8640(void)
{
  GEN_ENTER(0x6b8640u, 0u, 0u, 0u, 0u);
  return 5;
}

/* ref: Client::Graphics::Scene::Human::vf74 */
ushort F_006b8650(unsigned int gen_a0)
{
  GEN_ENTER(0x6b8650u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 0x778);
}

/* ref: Client::Graphics::Scene::Human::vf0 */
uint F_006b8670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b8670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[91])REFP(0x10b345c));
  F_006b8460(this);
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Scene::Demihuman::vf80 */
uint F_006b86a0(void)
{
  GEN_ENTER(0x6b86a0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::Graphics::Scene::Demihuman::vf74 */
ushort F_006b86b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b86b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 0x748);
}

/* ref: Client::Graphics::Scene::Demihuman::vf0 */
uint F_006b86d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b86d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[91])REFP(0x10b35cc));
  F_006b8460(this);
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Scene::Weapon::vf55 */
unsigned int F_006b8700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b8700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Graphics::Scene::Weapon::vf80 */
uint F_006b8710(void)
{
  GEN_ENTER(0x6b8710u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::Graphics::Scene::Weapon::vf74 */
ushort F_006b8720(unsigned int gen_a0)
{
  GEN_ENTER(0x6b8720u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 0x730);
}

/* ref: Client::Graphics::Scene::Weapon::vf0 */
uint F_006b8740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b8740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[91])REFP(0x10b373c));
  F_006b8460(this);
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Scene::Monster::vf55 */
unsigned int F_006b8770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b8770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Graphics::Scene::Monster::vf80 */
uint F_006b8780(void)
{
  GEN_ENTER(0x6b8780u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::Graphics::Scene::Monster::vf74 */
ushort F_006b8790(unsigned int gen_a0)
{
  GEN_ENTER(0x6b8790u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 0x730);
}

/* ref: Client::Graphics::Scene::Monster::vf0 */
uint F_006b87b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b87b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[91])REFP(0x10b38ac));
  F_006b8460(this);
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),this);
  }
  return (uint)this;
}

/* ref: FUN_006b87f0 */
uint F_006b87f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b87f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * piVar1;
  undefined * pvVar2;
  uint uVar3;
  
  pvVar2 = (undefined *)F_00406b90(0x360,0,0);
  if (pvVar2 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = F_00498e80(pvVar2,*param_1);
  }
  *(uint *)this = uVar3;
  pvVar2 = (undefined *)F_00406b90(0x20,0,0);
  if (pvVar2 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = F_00b8a620(pvVar2,*param_1);
  }
  *(uint *)((int)this + 4) = uVar3;
  pvVar2 = (undefined *)F_00406b90(0x18,0,0);
  if (pvVar2 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = F_00b12aa0(pvVar2,*param_1);
  }
  piVar1 = *(int * PTR32 *)this;
  *(uint *)((int)this + 8) = uVar3;
  if (piVar1 != (int *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,param_1[1]);
    if ((char)uVar3 != '\0') {
      *(uint *)((int)this + 0xc) = *(uint *)((int)this + 0xc) | 1;
    }
    uVar3 = F_00406b90(0x120,0,0);
    if (uVar3 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = F_00b8a1b0(uVar3);
    }
    *(uint *)((int)this + 0x14) = uVar3;
  }
  piVar1 = *(int * PTR32 *)((int)this + 4);
  if (piVar1 != (int *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    if ((char)uVar3 != '\0') {
      *(uint *)((int)this + 0xc) = *(uint *)((int)this + 0xc) | 2;
    }
  }
  piVar1 = *(int * PTR32 *)((int)this + 8);
  if (piVar1 != (int *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    if ((char)uVar3 != '\0') {
      *(uint *)((int)this + 0xc) = *(uint *)((int)this + 0xc) | 4;
    }
  }
  return uVar3;
}

/* ref: FUN_006b88f0 */
unsigned int F_006b88f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b88f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 8);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 8) = 0;
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 4) = 0;
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x14);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  puVar1 = *(undefined4 * PTR32 *)this;
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)this = 0;
  }
  return 0;
}

