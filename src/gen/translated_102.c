#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_009de100 */
uint F_009de100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9de100u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_009de120 */
uint F_009de120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9de120u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_009de140 */
uint F_009de140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9de140u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_009de160 */
uint F_009de160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9de160u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_009de180 */
uint F_009de180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9de180u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_009de1a0 */
uint F_009de1a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9de1a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_009de1c0 */
uint F_009de1c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9de1c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_009de1e0 */
uint F_009de1e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9de1e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_009de200 */
uint F_009de200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9de200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  return (uint)this;
}

/* ref: FUN_009de220 */
uint F_009de220(unsigned int gen_a0)
{
  GEN_ENTER(0x9de220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x11) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x11) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x11) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x11) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x11);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x11);
    }
    if (*(char *)(*(int *)this + 0x11) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_009de280 */
uint F_009de280(unsigned int gen_a0)
{
  GEN_ENTER(0x9de280u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x11) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x11) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x11) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x11) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x11);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x11);
    }
    if (*(char *)(*(int *)this + 0x11) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_009de310 */
uint F_009de310(unsigned int gen_a0)
{
  GEN_ENTER(0x9de310u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x29) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x29) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x29) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x29) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x29);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x29);
    }
    if (*(char *)(*(int *)this + 0x29) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_009de370 */
uint F_009de370(unsigned int gen_a0)
{
  GEN_ENTER(0x9de370u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009de380 */
uint F_009de380(unsigned int gen_a0)
{
  GEN_ENTER(0x9de380u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009de390 */
uint F_009de390(unsigned int gen_a0)
{
  GEN_ENTER(0x9de390u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009de3a0 */
uint F_009de3a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9de3a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009de3b0 */
uint F_009de3b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9de3b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009de3c0 */
uint F_009de3c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9de3c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009de3d0 */
uint F_009de3d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9de3d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009de3e0 */
uint F_009de3e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9de3e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009de3f0 */
uint F_009de3f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9de3f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009de400 */
uint F_009de400(unsigned int gen_a0)
{
  GEN_ENTER(0x9de400u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009de410 */
uint F_009de410(unsigned int gen_a0)
{
  GEN_ENTER(0x9de410u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009de420 */
uint F_009de420(unsigned int gen_a0)
{
  GEN_ENTER(0x9de420u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009de430 */
uint F_009de430(unsigned int gen_a0)
{
  GEN_ENTER(0x9de430u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009de440 */
uint F_009de440(unsigned int gen_a0)
{
  GEN_ENTER(0x9de440u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009de450 */
uint F_009de450(unsigned int gen_a0)
{
  GEN_ENTER(0x9de450u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009de460 */
uint F_009de460(unsigned int gen_a0)
{
  GEN_ENTER(0x9de460u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009de470 */
uint F_009de470(unsigned int gen_a0)
{
  GEN_ENTER(0x9de470u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009de480 */
byte F_009de480(void)
{
  GEN_ENTER(0x9de480u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_009de490 */
uint F_009de490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9de490u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_009de4c0 */
byte F_009de4c0(void)
{
  GEN_ENTER(0x9de4c0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_009de4d0 */
byte F_009de4d0(void)
{
  GEN_ENTER(0x9de4d0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_009de4e0 */
byte F_009de4e0(void)
{
  GEN_ENTER(0x9de4e0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_009de4f0 */
byte F_009de4f0(void)
{
  GEN_ENTER(0x9de4f0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_009de500 */
uint F_009de500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9de500u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_009de530 */
byte F_009de530(void)
{
  GEN_ENTER(0x9de530u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_009de540 */
uint F_009de540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9de540u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_009de570 */
byte F_009de570(void)
{
  GEN_ENTER(0x9de570u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_009de580 */
uint F_009de580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9de580u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_009de5b0 */
byte F_009de5b0(void)
{
  GEN_ENTER(0x9de5b0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_009de5c0 */
uint F_009de5c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9de5c0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_009de5f0 */
byte F_009de5f0(void)
{
  GEN_ENTER(0x9de5f0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_009de600 */
uint F_009de600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9de600u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_009de630 */
byte F_009de630(void)
{
  GEN_ENTER(0x9de630u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_009de640 */
uint F_009de640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9de640u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_009de670 */
byte F_009de670(void)
{
  GEN_ENTER(0x9de670u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_009de680 */
uint F_009de680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9de680u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_009de6b0 */
byte F_009de6b0(void)
{
  GEN_ENTER(0x9de6b0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_009de6c0 */
uint F_009de6c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9de6c0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_009de6f0 */
byte F_009de6f0(void)
{
  GEN_ENTER(0x9de6f0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_009de710 */
uint F_009de710(unsigned int gen_a0)
{
  GEN_ENTER(0x9de710u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009de720 */
uint F_009de720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9de720u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_009de740 */
uint F_009de740(unsigned int gen_a0)
{
  GEN_ENTER(0x9de740u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009de750 */
uint F_009de750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9de750u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_009de770 */
byte F_009de770(void)
{
  GEN_ENTER(0x9de770u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_009de780 */
byte F_009de780(void)
{
  GEN_ENTER(0x9de780u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_009de790 */
byte F_009de790(void)
{
  GEN_ENTER(0x9de790u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_009de840 */
uint F_009de840(unsigned int gen_a0)
{
  GEN_ENTER(0x9de840u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009de850 */
uint F_009de850(unsigned int gen_a0)
{
  GEN_ENTER(0x9de850u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009de860 */
uint F_009de860(unsigned int gen_a0)
{
  GEN_ENTER(0x9de860u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009de8d0 */
uint F_009de8d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9de8d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009de8e0 */
uint F_009de8e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9de8e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = *param_2;
  *(undefined4 *)((int)this + 0x14) = param_2[1];
  *(undefined4 *)((int)this + 0x18) = param_2[2];
  return (uint)this;
}

/* ref: FUN_009de930 */
byte F_009de930(void)
{
  GEN_ENTER(0x9de930u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_009de940 */
uint F_009de940(unsigned int gen_a0)
{
  GEN_ENTER(0x9de940u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009de950 */
uint F_009de950(unsigned int gen_a0)
{
  GEN_ENTER(0x9de950u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009de960 */
uint F_009de960(unsigned int gen_a0)
{
  GEN_ENTER(0x9de960u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009dea30 */
uint F_009dea30(unsigned int gen_a0)
{
  GEN_ENTER(0x9dea30u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009dea40 */
uint F_009dea40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9dea40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_009dea60 */
uint F_009dea60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9dea60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_009dea80 */
uint F_009dea80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9dea80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_009deaa0 */
uint F_009deaa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9deaa0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_009deac0 */
uint F_009deac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9deac0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_009deb30 */
uint F_009deb30(unsigned int gen_a0)
{
  GEN_ENTER(0x9deb30u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_009dec60 */
uint F_009dec60(unsigned int gen_a0)
{
  GEN_ENTER(0x9dec60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009dec70 */
uint F_009dec70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9dec70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_009dec90 */
uint F_009dec90(unsigned int gen_a0)
{
  GEN_ENTER(0x9dec90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009deca0 */
uint F_009deca0(unsigned int gen_a0)
{
  GEN_ENTER(0x9deca0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009decb0 */
uint F_009decb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9decb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_009decd0 */
uint F_009decd0(unsigned int gen_a0)
{
  GEN_ENTER(0x9decd0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009dece0 */
uint F_009dece0(unsigned int gen_a0)
{
  GEN_ENTER(0x9dece0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009decf0 */
uint F_009decf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9decf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_009ded10 */
uint F_009ded10(unsigned int gen_a0)
{
  GEN_ENTER(0x9ded10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009ded20 */
uint F_009ded20(unsigned int gen_a0)
{
  GEN_ENTER(0x9ded20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009ded30 */
uint F_009ded30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9ded30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = *param_2;
  *(undefined4 *)((int)this + 0x14) = param_2[1];
  *(undefined4 *)((int)this + 0x18) = param_2[2];
  return (uint)this;
}

/* ref: FUN_009ded70 */
uint F_009ded70(unsigned int gen_a0)
{
  GEN_ENTER(0x9ded70u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009ded80 */
uint F_009ded80(unsigned int gen_a0)
{
  GEN_ENTER(0x9ded80u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009ded90 */
uint F_009ded90(unsigned int gen_a0)
{
  GEN_ENTER(0x9ded90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009deda0 */
uint F_009deda0(unsigned int gen_a0)
{
  GEN_ENTER(0x9deda0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009dedc0 */
uint F_009dedc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9dedc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float fVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2;
  while ((param_3 < iVar2 &&
         (iVar3 = (iVar2 + -1) / 2, (float10)*(float *)(param_1 + iVar3 * 8) < (float10)*param_4)))
  {
    *(undefined4 *)(param_1 + iVar2 * 8) = *(undefined4 *)(param_1 + iVar3 * 8);
    *(undefined4 *)(param_1 + 4 + iVar2 * 8) = *(undefined4 *)(param_1 + 4 + iVar3 * 8);
    iVar2 = iVar3;
  }
  fVar1 = *param_4;
  *(float *)(param_1 + iVar2 * 8) = fVar1;
  *(float *)(param_1 + 4 + iVar2 * 8) = param_4[1];
  return (uint)gen_fl2bits(fVar1);
}

/* ref: FUN_009dee20 */
byte F_009dee20(void)
{
  GEN_ENTER(0x9dee20u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_009dee30 */
uint F_009dee30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9dee30u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float fVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2;
  while ((param_3 < iVar2 &&
         (iVar3 = (iVar2 + -1) / 2, (float10)*(float *)(param_1 + iVar3 * 8) < (float10)*param_4)))
  {
    *(undefined4 *)(param_1 + iVar2 * 8) = *(undefined4 *)(param_1 + iVar3 * 8);
    *(undefined4 *)(param_1 + 4 + iVar2 * 8) = *(undefined4 *)(param_1 + 4 + iVar3 * 8);
    iVar2 = iVar3;
  }
  fVar1 = *param_4;
  *(float *)(param_1 + iVar2 * 8) = fVar1;
  *(float *)(param_1 + 4 + iVar2 * 8) = param_4[1];
  return (uint)gen_fl2bits(fVar1);
}

/* ref: FUN_009dee90 */
byte F_009dee90(void)
{
  GEN_ENTER(0x9dee90u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_009deea0 */
uint F_009deea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9deea0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  uint * param_4 = (uint *)(uintptr_t)gen_a3;
  uint uVar1;
  int iVar2;
  int iVar3;
  uint * puVar4;
  int iVar5;
  uint * puVar6;
  
  iVar2 = param_2;
  while (param_3 < iVar2) {
    iVar3 = (iVar2 + -1) / 2;
    iVar5 = iVar3 * 0x10;
    uVar1 = *(uint *)(iVar5 + 4 + param_1);
    puVar6 = (uint *)(iVar5 + param_1);
    if ((param_4[1] < uVar1) || ((param_4[1] <= uVar1 && (*param_4 <= *puVar6)))) break;
    puVar4 = (uint *)(iVar2 * 0x10 + param_1);
    *puVar4 = *puVar6;
    puVar4[1] = puVar6[1];
    puVar4[2] = puVar6[2];
    puVar4[3] = puVar6[3];
    iVar2 = iVar3;
  }
  puVar6 = (uint *)(iVar2 * 0x10 + param_1);
  *puVar6 = *param_4;
  puVar6[1] = param_4[1];
  uVar1 = param_4[2];
  puVar6[2] = uVar1;
  puVar6[3] = param_4[3];
  return uVar1;
}

/* ref: FUN_009def20 */
byte F_009def20(void)
{
  GEN_ENTER(0x9def20u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_009def30 */
uint F_009def30(unsigned int gen_a0)
{
  GEN_ENTER(0x9def30u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009def40 */
uint F_009def40(unsigned int gen_a0)
{
  GEN_ENTER(0x9def40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009def50 */
uint F_009def50(unsigned int gen_a0)
{
  GEN_ENTER(0x9def50u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009def60 */
uint F_009def60(unsigned int gen_a0)
{
  GEN_ENTER(0x9def60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009def70 */
uint F_009def70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x9def70u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x6c))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_009def80 */
uint F_009def80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x9def80u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x70))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_009def90 */
uint F_009def90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x9def90u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x68))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_009defa0 */
unsigned int F_009defa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9defa0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float10 fVar1;
  
  fVar1 = (float10)*(double *)&REFG(undefined, 0x1088118);
  *(float *)param_2 = ((float)GEN_TOF(((float10)(int)*(char *)(param_1 + 0x49) / fVar1)));
  *(float *)(param_2 + 4) = ((float)GEN_TOF(((float10)(int)*(char *)(param_1 + 0x4a) / fVar1)));
  *(float *)(param_2 + 8) = ((float)GEN_TOF(((float10)(int)*(char *)(param_1 + 0x4b) / fVar1)));
  fVar1 = (float10)*(float *)(param_1 + 0x2c);
  *(float *)param_2 = (float)(fVar1 * (float10)*(float *)param_2);
  *(float *)(param_2 + 4) = ((float)GEN_TOF(((float10)*(float *)(param_2 + 4) * fVar1)));
  *(float *)(param_2 + 8) = ((float)GEN_TOF((fVar1 * (float10)*(float *)(param_2 + 8))));
  return 0;
}

/* ref: FUN_009df010 */
uint F_009df010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9df010u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float10 fVar1;
  
  fVar1 = (float10)*(double *)&REFG(undefined, 0x1088118);
  *(float *)param_2 = ((float)GEN_TOF(((float10)(int)*(char *)(param_1 + 0x4c) / fVar1)));
  *(float *)(param_2 + 4) = ((float)GEN_TOF(((float10)(int)*(char *)(param_1 + 0x4d) / fVar1)));
  *(float *)(param_2 + 8) = ((float)GEN_TOF(((float10)(int)*(char *)(param_1 + 0x4e) / fVar1)));
  fVar1 = (float10)*(float *)(param_1 + 0x30);
  *(float *)param_2 = (float)(fVar1 * (float10)*(float *)param_2);
  *(float *)(param_2 + 4) = ((float)GEN_TOF(((float10)*(float *)(param_2 + 4) * fVar1)));
  *(float *)(param_2 + 8) = ((float)GEN_TOF((fVar1 * (float10)*(float *)(param_2 + 8))));
  return param_2;
}

/* ref: FUN_009df080 */
uint F_009df080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9df080u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float10 fVar1;
  
  fVar1 = (float10)*(double *)&REFG(undefined, 0x1088118);
  *(float *)param_2 = ((float)GEN_TOF(((float10)(int)*(char *)(param_1 + 0x46) / fVar1)));
  *(float *)(param_2 + 4) = ((float)GEN_TOF(((float10)(int)*(char *)(param_1 + 0x47) / fVar1)));
  *(float *)(param_2 + 8) = ((float)GEN_TOF(((float10)(int)*(char *)(param_1 + 0x48) / fVar1)));
  fVar1 = (float10)*(float *)(param_1 + 0x28);
  *(float *)param_2 = (float)(fVar1 * (float10)*(float *)param_2);
  *(float *)(param_2 + 4) = ((float)GEN_TOF(((float10)*(float *)(param_2 + 4) * fVar1)));
  *(float *)(param_2 + 8) = ((float)GEN_TOF((fVar1 * (float10)*(float *)(param_2 + 8))));
  return param_2;
}

/* ref: FUN_009df0f0 */
uint F_009df0f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9df0f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  return (uint)this;
}

/* ref: FUN_009df120 */
uint F_009df120(unsigned int gen_a0)
{
  GEN_ENTER(0x9df120u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * puVar1;
  
  if (REFG(int, 0x14a09e8) != -1) {
    puVar1 = (undefined4 *)(REFG(int, 0x14a09e8) * 0x400 + REFG(int, 0x14a09f4));
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + -1;
    REFG(int, 0x14a09e8) = *puVar1;
    return (uint)puVar1;
  }
  return 0;
}

/* ref: FUN_009df150 */
uint F_009df150(unsigned int gen_a0)
{
  GEN_ENTER(0x9df150u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = (uint)(param_1 - REFG(int, 0x14a09f4)) >> 10;
  *(uint *)(uVar1 * 0x400 + REFG(int, 0x14a09f4)) = REFG(undefined4, 0x14a09e8);
  REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
  REFG(undefined4, 0x14a09e8) = uVar1;
  return uVar1;
}

/* ref: FUN_009df180 */
uint F_009df180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9df180u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x1ec);
  *(undefined4 *)(uVar1 + 0x88) = *param_2;
  *(undefined4 *)(uVar1 + 0x8c) = param_2[1];
  *(undefined4 *)(uVar1 + 0x90) = param_2[2];
  return uVar1;
}

/* ref: FUN_009df1b0 */
uint F_009df1b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9df1b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined1 * puVar4;
  undefined1 * puVar5;
  uint uVar6;
  float10 fVar7;
  
  (*(float *)(gen_frame + 0x9c)) = *param_2;
  (*(bool *)(gen_frame + 0xab)) = true;
  bVar1 = GEN_ISNAN((*(float *)(gen_frame + 0x9c))) != (GEN_ISNAN((*(float *)(gen_frame + 0x9c))) || (*(float *)(gen_frame + 0x9c)) == 0.0);
  if (bVar1) {
    (*(bool *)(gen_frame + 0xab)) = false;
  }
  (*(bool *)(gen_frame + 0xab)) = !bVar1;
  (*(float *)(gen_frame + 0xa4)) = param_2[1];
  bVar1 = GEN_ISNAN((*(float *)(gen_frame + 0xa4))) != (GEN_ISNAN((*(float *)(gen_frame + 0xa4))) || (*(float *)(gen_frame + 0xa4)) == 0.0);
  bVar3 = !bVar1;
  (*(float *)(gen_frame + 0xa0)) = param_2[2];
  bVar2 = GEN_ISNAN((*(float *)(gen_frame + 0xa0))) == (GEN_ISNAN((*(float *)(gen_frame + 0xa0))) || (*(float *)(gen_frame + 0xa0)) == 0.0);
  if (!(*(bool *)(gen_frame + 0xab))) {
    if (bVar3) {
      if (!bVar2) {
        uVar6 = F_00981960(param_1,(*(float *)(gen_frame + 0xa4)));
        return uVar6;
      }
      F_00981960(((undefined1 *)(gen_frame + 0xc)),(*(float *)(gen_frame + 0xa4)));
      F_009819e0(((undefined1 *)(gen_frame + 0x3c)),(*(float *)(gen_frame + 0xa0)));
      switch((unsigned int)(uintptr_t)(param_3)) {
      case 0: ;
      case 1: ;
      case 4: ;
        uVar6 = F_00981c90(param_1,((undefined1 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x3c)));
        return uVar6;
      case 2: ;
      case 3: ;
      case 5: ;
        uVar6 = F_00981c90(param_1,((undefined1 *)(gen_frame + 0x3c)),((undefined1 *)(gen_frame + 0xc)));
        return uVar6;
      }
    }
    else if (bVar2) {
      uVar6 = F_009819e0(param_1,(*(float *)(gen_frame + 0xa0)));
      return uVar6;
    }
    goto switchD_009df45a_default;
  }
  fVar7 = (float10)(*(float *)(gen_frame + 0x9c));
  if (!bVar3) {
    if (bVar2) {
      F_009818e0(((undefined1 *)(gen_frame + 0x6c)),(*(float *)(gen_frame + 0x9c)));
      F_009819e0(((undefined1 *)(gen_frame + 0x3c)),(*(float *)(gen_frame + 0xa0)));
      switch((unsigned int)(uintptr_t)(param_3)) {
      case 0: ;
      case 3: ;
      case 4: ;
        uVar6 = F_00981c90(param_1,((undefined1 *)(gen_frame + 0x6c)),((undefined1 *)(gen_frame + 0x3c)));
        return uVar6;
      case 1: ;
      case 2: ;
      case 5: ;
        uVar6 = F_00981c90(param_1,((undefined1 *)(gen_frame + 0x3c)),((undefined1 *)(gen_frame + 0x6c)));
        return uVar6;
      }
LAB_009df41a: ;
      fVar7 = (float10)(*(float *)(gen_frame + 0x9c));
    }
switchD_009df272_default: ;
    if (bVar1) {
      if (!bVar2) {
        uVar6 = F_009818e0(param_1,(float)fVar7);
        return uVar6;
      }
    }
    else if (!bVar2) {
      F_009818e0(((undefined1 *)(gen_frame + 0x6c)),(float)fVar7);
      F_00981960(((undefined1 *)(gen_frame + 0xc)),(*(float *)(gen_frame + 0xa4)));
      switch((unsigned int)(uintptr_t)(param_3)) {
      case 0: ;
      case 2: ;
      case 3: ;
        uVar6 = F_00981c90(param_1,((undefined1 *)(gen_frame + 0x6c)),((undefined1 *)(gen_frame + 0xc)));
        return uVar6;
      case 1: ;
      case 4: ;
      case 5: ;
        uVar6 = F_00981c90(param_1,((undefined1 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x6c)));
        return uVar6;
      }
    }
switchD_009df45a_default: ;
    *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x132f428));
    param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x132f42c));
    param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x132f430));
    param_1[3] = GEN_FLT_TO(param_1[3], REFG(float, 0x132f434));
    param_1[4] = GEN_FLT_TO(param_1[4], REFG(float, 0x132f438));
    param_1[5] = GEN_FLT_TO(param_1[5], REFG(float, 0x132f43c));
    param_1[6] = GEN_FLT_TO(param_1[6], REFG(float, 0x132f440));
    param_1[7] = GEN_FLT_TO(param_1[7], REFG(float, 0x132f444));
    param_1[8] = GEN_FLT_TO(param_1[8], REFG(float, 0x132f448));
    param_1[9] = GEN_FLT_TO(param_1[9], REFG(float, 0x132f44c));
    param_1[10] = GEN_FLT_TO(param_1[10], REFG(float, 0x132f450));
    param_1[0xb] = GEN_FLT_TO(param_1[0xb], REFG(float, 0x132f454));
    return (uint)param_1;
  }
  if (!bVar2) goto switchD_009df272_default;
  F_009818e0(((undefined1 *)(gen_frame + 0x6c)),(*(float *)(gen_frame + 0x9c)));
  F_00981960(((undefined1 *)(gen_frame + 0xc)),(*(float *)(gen_frame + 0xa4)));
  F_009819e0(((undefined1 *)(gen_frame + 0x3c)),(*(float *)(gen_frame + 0xa0)));
  switch((unsigned int)(uintptr_t)(param_3)) {
  case 0: ;
    puVar4 = ((undefined1 *)(gen_frame + 0xc));
    puVar5 = ((undefined1 *)(gen_frame + 0x6c));
    break;
  case 1: ;
    F_00981c90(param_1,((undefined1 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x3c)));
    uVar6 = F_009820e0(param_1,(uint)param_1,(uint)((undefined1 *)(gen_frame + 0x6c)));
    return uVar6;
  case 2: ;
    puVar5 = ((undefined1 *)(gen_frame + 0x6c));
    puVar4 = ((undefined1 *)(gen_frame + 0x3c));
    goto LAB_009df2cf;
  case 3: ;
    puVar5 = ((undefined1 *)(gen_frame + 0x3c));
    puVar4 = ((undefined1 *)(gen_frame + 0x6c));
LAB_009df2cf: ;
    F_00981c90(param_1,puVar4,puVar5);
    uVar6 = F_009820e0(param_1,(uint)param_1,(uint)((undefined1 *)(gen_frame + 0xc)));
    return uVar6;
  case 4: ;
    puVar4 = ((undefined1 *)(gen_frame + 0x6c));
    puVar5 = ((undefined1 *)(gen_frame + 0xc));
    break;
  case 5: ;
    F_00981c90(param_1,((undefined1 *)(gen_frame + 0x3c)),((undefined1 *)(gen_frame + 0xc)));
    uVar6 = F_009820e0(param_1,(uint)param_1,(uint)((undefined1 *)(gen_frame + 0x6c)));
    return uVar6;
  default: ;
    goto LAB_009df41a;
  }
  F_00981c90(param_1,puVar5,puVar4);
  uVar6 = F_009820e0(param_1,(uint)param_1,(uint)((undefined1 *)(gen_frame + 0x3c)));
  return uVar6;
}

/* ref: FUN_009df600 */
uint F_009df600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9df600u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint param_4 = (uint)gen_a3;
  uint param_5 = (uint)gen_a4;
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_5;
  switch((unsigned int)(uintptr_t)(param_5)) {
  case 0: ;
    uVar1 = param_2;
    uVar2 = param_3;
    break;
  case 1: ;
    uVar1 = param_4;
    uVar2 = param_2;
    goto LAB_009df659;
  case 2: ;
    uVar1 = param_3;
    uVar2 = param_4;
    goto LAB_009df637;
  case 3: ;
    uVar1 = param_4;
    uVar2 = param_3;
LAB_009df637: ;
    F_00981c90(param_1,uVar1,uVar2);
    uVar1 = F_009820e0(param_1,param_1,param_2);
    return uVar1;
  case 4: ;
    uVar1 = param_2;
    uVar2 = param_4;
LAB_009df659: ;
    F_00981c90(param_1,uVar1,uVar2);
    uVar1 = F_009820e0(param_1,param_1,param_3);
    return uVar1;
  case 5: ;
    uVar1 = param_3;
    uVar2 = param_2;
    break;
  default: ;
    goto switchD_009df610_default;
  }
  F_00981c90(param_1,uVar1,uVar2);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_4 + 0x24);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_4 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_4 + 0x2c);
  uVar1 = param_4;
switchD_009df610_default: ;
  return uVar1;
}

/* ref: FUN_009df6c0 */
uint F_009df6c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9df6c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint param_4 = (uint)gen_a3;
  uint uVar1;
  
  uVar1 = param_4;
  switch((unsigned int)(uintptr_t)(param_4)) {
  case 0: ;
    break;
  case 1: ;
    uVar1 = F_00981c90(param_1,param_3,param_2);
    return uVar1;
  case 2: ;
    break;
  case 3: ;
  case 4: ;
    uVar1 = F_00981c90(param_1,param_3,param_2);
    return uVar1;
  case 5: ;
    break;
  default: ;
    goto switchD_009df6cc_default;
  }
  F_009db5b0(param_1,param_2);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_3 + 0x24);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_3 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_3 + 0x2c);
  uVar1 = param_3;
switchD_009df6cc_default: ;
  return uVar1;
}

/* ref: FUN_009df750 */
uint F_009df750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9df750u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint param_4 = (uint)gen_a3;
  uint uVar1;
  
  uVar1 = param_4;
  switch((unsigned int)(uintptr_t)(param_4)) {
  case 0: ;
  case 1: ;
  case 4: ;
    uVar1 = F_00981c90(param_1,param_2,param_3);
    return uVar1;
  case 2: ;
  case 3: ;
  case 5: ;
    uVar1 = F_00981c90(param_1,param_3,param_2);
  }
  return uVar1;
}

/* ref: FUN_009df7b0 */
uint F_009df7b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9df7b0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  
  iVar8 = param_2 * 0x10 + *param_1;
  fVar9 = (float10)*(float *)(param_2 * 0x10 + *param_1);
  fVar1 = ((float)GEN_TOF(((float10)*(float *)(iVar8 + 0x10) - fVar9)));
  fVar2 = *(float *)(iVar8 + 4);
  fVar3 = ((float)GEN_TOF(((float10)*(float *)(iVar8 + 0x14) - (float10)fVar2)));
  fVar4 = *(float *)(iVar8 + 8);
  fVar5 = ((float)GEN_TOF(((float10)*(float *)(iVar8 + 0x18) - (float10)fVar4)));
  if (-1 < (int)(param_2 - 1)) {
    fVar6 = *(float *)(iVar8 + -0xc);
    fVar7 = *(float *)(iVar8 + -8);
    fVar10 = (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)*(float *)(iVar8 + 0x1c) -
                                              (float10)*(float *)(iVar8 + 0xc)))) /
                             (float10)((float)GEN_TOF(((float10)*(float *)(iVar8 + 0x1c) -
                                             (float10)*(float *)(iVar8 + -4)))))));
    *param_3 = ((float)GEN_TOF((fVar10 * (float10)((float)GEN_TOF(((float10)((float)GEN_TOF((fVar9 - (float10)*(float *)(iVar8 
                                                  + -0x10)))) + (float10)fVar1))))));
    param_3[1] = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)fVar3 +
                                         (float10)(float)((float10)fVar2 - (float10)fVar6)))) * fVar10
                        )));
    param_3[2] = ((float)GEN_TOF((fVar10 * (float10)((float)GEN_TOF(((float10)(float)((float10)fVar4 - (float10)fVar7)
                                                  + (float10)fVar5))))));
    return (uint)param_3;
  }
  *param_3 = fVar1;
  param_3[1] = fVar3;
  param_3[2] = fVar5;
  return (uint)param_3;
}

/* ref: FUN_009df8c0 */
uint F_009df8c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9df8c0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  float * pfVar9;
  float * pfVar10;
  float10 fVar11;
  float10 fVar12;
  
  iVar8 = *param_1;
  pfVar9 = (float *)(param_2 * 0x10 + iVar8);
  fVar11 = (float10)*(float *)(param_2 * 0x10 + 0x10 + iVar8);
  fVar1 = (float)(fVar11 - (float10)*pfVar9);
  fVar2 = pfVar9[5];
  fVar3 = (float)((float10)fVar2 - (float10)pfVar9[1]);
  fVar4 = pfVar9[6];
  fVar5 = (float)((float10)fVar4 - (float10)pfVar9[2]);
  if ((int)(param_2 + 2) <= param_1[1] + -1) {
    pfVar10 = ((float *)GEN_TOP(((param_2 + 2) * 0x10 + iVar8)));
    fVar6 = pfVar10[1];
    fVar7 = pfVar10[2];
    fVar12 = (float10)((float)GEN_TOF(((float10)(float)((float10)pfVar9[7] - (float10)pfVar9[3]) /
                             (float10)(float)((float10)pfVar10[3] - (float10)pfVar9[3]))));
    *param_3 = ((float)GEN_TOF((fVar12 * (float10)((float)GEN_TOF(((float10)(float)((float10)*pfVar10 - fVar11) +
                                                (float10)fVar1))))));
    param_3[1] = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)fVar3 +
                                         (float10)(float)((float10)fVar6 - (float10)fVar2)))) * fVar12
                        )));
    param_3[2] = ((float)GEN_TOF((fVar12 * (float10)((float)GEN_TOF(((float10)(float)((float10)fVar7 - (float10)fVar4)
                                                  + (float10)fVar5))))));
    return (uint)param_3;
  }
  *param_3 = fVar1;
  param_3[1] = fVar3;
  param_3[2] = fVar5;
  return (uint)param_3;
}

/* ref: FUN_009df9e0 */
unsigned int F_009df9e0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9df9e0u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float10 fVar6;
  float * pfVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  
  pfVar7 = (float *)(param_3 * 0x10 + *param_1);
  fVar1 = pfVar7[3];
  fVar2 = pfVar7[7];
  F_009df8c0(param_1,param_3,&(*(float *)(gen_frame + 0xc)));
  F_009df7b0(param_1,param_3,&(*(float *)(gen_frame + 0x18)));
  fVar8 = (float10)((float)GEN_TOF((((float10)param_2 - (float10)fVar1) / ((float10)fVar2 - (float10)fVar1))));
  fVar9 = (float10)(float)(fVar8 * fVar8);
  fVar10 = (float10)(float)(fVar9 * fVar8);
  fVar11 = (float10)(*(float *)(gen_frame + 0xc));
  fVar12 = (float10)(float)(fVar10 - fVar9);
  fVar13 = (float10)(*(float *)(gen_frame + 0x10));
  fVar6 = (float10)(*(float *)(gen_frame + 0x14));
  fVar14 = (float10)(*(float *)(gen_frame + 0x18));
  fVar15 = (float10)((float)GEN_TOF(((fVar10 - fVar9 * (float10)*(double *)&REFG(undefined, 0x1092098)) + fVar8)));
  (*(float *)(gen_frame + 0xc)) = (float)(fVar15 * fVar14);
  fVar16 = (float10)(*(float *)(gen_frame + 0x1c));
  (*(float *)(gen_frame + 0x10)) = (float)(fVar16 * fVar15);
  fVar8 = (float10)(*(float *)(gen_frame + 0x20));
  (*(float *)(gen_frame + 0x14)) = (float)(fVar15 * fVar8);
  fVar10 = fVar10 * (float10)*(double *)&REFG(undefined, 0x1092098);
  fVar17 = (float10)(float)(fVar9 * (float10)*(double *)&REFG(undefined, 0x10944e0) - fVar10);
  (*(float *)(gen_frame + 0x24)) = (float)(fVar17 * (float10)pfVar7[4]);
  fVar1 = pfVar7[5];
  (*(float *)(gen_frame + 0x28)) = (float)((float10)fVar1 * fVar17);
  fVar2 = pfVar7[6];
  (*(float *)(gen_frame + 0x2c)) = (float)(fVar17 * (float10)fVar2);
  fVar9 = (float10)((float)GEN_TOF(((fVar10 - fVar9 * (float10)*(double *)&REFG(undefined, 0x10944e0)) +
                          (float10)REFG(double, 0x1088130))));
  (*(float *)(gen_frame + 0x30)) = (float)(fVar9 * (float10)*pfVar7);
  fVar3 = pfVar7[1];
  (*(float *)(gen_frame + 0x34)) = (float)((float10)fVar3 * fVar9);
  fVar4 = pfVar7[2];
  (*(float *)(gen_frame + 0x38)) = (float)(fVar9 * (float10)fVar4);
  fVar5 = ((float)GEN_TOF(((float10)(float)(fVar9 * (float10)*pfVar7) +
                 (float10)(float)(fVar17 * (float10)pfVar7[4]))));
  (*(float *)(gen_frame + 0x18)) = fVar5;
  fVar1 = ((float)GEN_TOF(((float10)(float)((float10)fVar3 * fVar9) +
                 (float10)(float)((float10)fVar1 * fVar17))));
  (*(float *)(gen_frame + 0x1c)) = fVar1;
  fVar2 = ((float)GEN_TOF(((float10)(float)(fVar9 * (float10)fVar4) +
                 (float10)(float)(fVar17 * (float10)fVar2))));
  (*(float *)(gen_frame + 0x20)) = fVar2;
  fVar3 = ((float)GEN_TOF(((float10)fVar5 + (float10)(float)(fVar15 * fVar14))));
  (*(float *)(gen_frame + 0x24)) = fVar3;
  fVar1 = ((float)GEN_TOF(((float10)fVar1 + (float10)(float)(fVar16 * fVar15))));
  (*(float *)(gen_frame + 0x28)) = fVar1;
  fVar2 = ((float)GEN_TOF(((float10)fVar2 + (float10)(float)(fVar15 * fVar8))));
  (*(float *)(gen_frame + 0x2c)) = fVar2;
  fVar3 = ((float)GEN_TOF(((float10)fVar3 + (float10)(float)(fVar12 * fVar11))));
  (*(float *)(gen_frame + 0xc)) = fVar3;
  fVar1 = ((float)GEN_TOF(((float10)fVar1 + (float10)(float)(fVar13 * fVar12))));
  (*(float *)(gen_frame + 0x10)) = fVar1;
  fVar2 = ((float)GEN_TOF(((float10)fVar2 + (float10)(float)(fVar12 * fVar6))));
  (*(float *)(gen_frame + 0x14)) = fVar2;
  *param_4 = fVar3;
  param_4[1] = fVar1;
  param_4[2] = fVar2;
  return 0;
}

/* ref: Apricot::Engine::Data::Communicator::Model::vf0 */
uint F_009dfb80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dfb80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_009799e0(this);
  if ((((param_1 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) && (this != (undefined *)0x0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Communicator::Texture::vf0 */
uint F_009dfbb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dfbb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10dda70));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    *(undefined4 *)(this + 4) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10dd200));
  if (((param_1 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Communicator::CameraBinder::vf1 */
uint F_009dfc00(unsigned int gen_a0)
{
  GEN_ENTER(0x9dfc00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 8;
}

/* ref: Apricot::Engine::Data::Communicator::LinearBinder::vf1 */
uint F_009dfc10(unsigned int gen_a0)
{
  GEN_ENTER(0x9dfc10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 8;
}

/* ref: Apricot::Engine::Data::Communicator::PointBinder::vf1 */
uint F_009dfc20(unsigned int gen_a0)
{
  GEN_ENTER(0x9dfc20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 8;
}

/* ref: Apricot::Engine::Data::Communicator::SplineBinder::vf1 */
uint F_009dfc30(unsigned int gen_a0)
{
  GEN_ENTER(0x9dfc30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 8;
}

/* ref: Apricot::Engine::Data::Communicator::RadialBlurEffector::vf1 */
uint F_009dfc40(unsigned int gen_a0)
{
  GEN_ENTER(0x9dfc40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 8;
}

/* ref: Apricot::Engine::Data::Communicator::RadialBlurEffector::vf2 */
uint F_009dfc50(unsigned int gen_a0)
{
  GEN_ENTER(0x9dfc50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x40;
}

/* ref: Apricot::Engine::Data::Communicator::RadialBlurEffector::vf3 */
uint F_009dfc60(unsigned int gen_a0)
{
  GEN_ENTER(0x9dfc60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x78;
}

/* ref: Apricot::Engine::Data::Communicator::RadialBlurEffector::vf4 */
uint F_009dfc70(unsigned int gen_a0)
{
  GEN_ENTER(0x9dfc70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xb0;
}

/* ref: Apricot::Engine::Data::Communicator::RadialBlurEffector::vf5 */
uint F_009dfc80(unsigned int gen_a0)
{
  GEN_ENTER(0x9dfc80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xe8;
}

/* ref: Apricot::Engine::Data::Communicator::RadialBlurEffector::vf6 */
float10 F_009dfc90(unsigned int gen_a0)
{
  GEN_ENTER(0x9dfc90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 0x120);
}

/* ref: Apricot::Engine::Data::Communicator::RadialBlurEffector::vf7 */
float10 F_009dfca0(unsigned int gen_a0)
{
  GEN_ENTER(0x9dfca0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 0x124);
}

/* ref: Apricot::Engine::Data::Communicator::ConeEmitter::vf1 */
uint F_009dfcb0(unsigned int gen_a0)
{
  GEN_ENTER(0x9dfcb0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: Apricot::Engine::Data::Communicator::ConeEmitter::vf2 */
uint F_009dfcc0(unsigned int gen_a0)
{
  GEN_ENTER(0x9dfcc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 8;
}

/* ref: Apricot::Engine::Data::Communicator::ConeEmitter::vf3 */
uint F_009dfcd0(unsigned int gen_a0)
{
  GEN_ENTER(0x9dfcd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x90;
}

/* ref: Apricot::Engine::Data::Communicator::ConeEmitter::vf4 */
uint F_009dfce0(unsigned int gen_a0)
{
  GEN_ENTER(0x9dfce0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x118;
}

/* ref: Apricot::Engine::Data::Communicator::ConeEmitter::vf5 */
uint F_009dfcf0(unsigned int gen_a0)
{
  GEN_ENTER(0x9dfcf0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x1a0;
}

/* ref: Apricot::Engine::Data::Communicator::ConeEmitter::vf6 */
uint F_009dfd00(unsigned int gen_a0)
{
  GEN_ENTER(0x9dfd00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x228;
}

/* ref: Apricot::Engine::Data::Communicator::ConeEmitter::vf7 */
uint F_009dfd10(unsigned int gen_a0)
{
  GEN_ENTER(0x9dfd10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x2b0;
}

/* ref: Apricot::Engine::Data::Communicator::ConeEmitter::vf8 */
uint F_009dfd20(unsigned int gen_a0)
{
  GEN_ENTER(0x9dfd20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x338;
}

/* ref: Apricot::Engine::Data::Communicator::ConeModelEmitter::vf1 */
uint F_009dfd30(unsigned int gen_a0)
{
  GEN_ENTER(0x9dfd30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: Apricot::Engine::Data::Communicator::ConeModelEmitter::vf2 */
uint F_009dfd40(unsigned int gen_a0)
{
  GEN_ENTER(0x9dfd40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8);
}

/* ref: Apricot::Engine::Data::Communicator::ConeModelEmitter::vf3 */
uint F_009dfd50(unsigned int gen_a0)
{
  GEN_ENTER(0x9dfd50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xc);
}

/* ref: Apricot::Engine::Data::Communicator::ConeModelEmitter::vf4 */
uint F_009dfd60(unsigned int gen_a0)
{
  GEN_ENTER(0x9dfd60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x10);
}

/* ref: Apricot::Engine::Data::Communicator::ConeModelEmitter::vf5 */
uint F_009dfd70(unsigned int gen_a0)
{
  GEN_ENTER(0x9dfd70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x18;
}

/* ref: Apricot::Engine::Data::Communicator::ConeModelEmitter::vf6 */
uint F_009dfd80(unsigned int gen_a0)
{
  GEN_ENTER(0x9dfd80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xa0;
}

/* ref: Apricot::Engine::Data::Communicator::ConeModelEmitter::vf7 */
uint F_009dfd90(unsigned int gen_a0)
{
  GEN_ENTER(0x9dfd90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x128;
}

/* ref: Apricot::Engine::Data::Communicator::ConeModelEmitter::vf8 */
uint F_009dfda0(unsigned int gen_a0)
{
  GEN_ENTER(0x9dfda0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x1b0;
}

/* ref: Apricot::Engine::Data::Communicator::ConeModelEmitter::vf9 */
uint F_009dfdb0(unsigned int gen_a0)
{
  GEN_ENTER(0x9dfdb0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x238;
}

/* ref: Apricot::Engine::Data::Communicator::ConeModelEmitter::vf10 */
uint F_009dfdc0(unsigned int gen_a0)
{
  GEN_ENTER(0x9dfdc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x2c0;
}

/* ref: Apricot::Engine::Data::Communicator::CylinderModelEmitter::vf1 */
uint F_009dfdd0(unsigned int gen_a0)
{
  GEN_ENTER(0x9dfdd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: Apricot::Engine::Data::Communicator::CylinderModelEmitter::vf2 */
uint F_009dfde0(unsigned int gen_a0)
{
  GEN_ENTER(0x9dfde0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8);
}

/* ref: Apricot::Engine::Data::Communicator::CylinderModelEmitter::vf3 */
uint F_009dfdf0(unsigned int gen_a0)
{
  GEN_ENTER(0x9dfdf0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xc);
}

/* ref: Apricot::Engine::Data::Communicator::CylinderModelEmitter::vf4 */
uint F_009dfe00(unsigned int gen_a0)
{
  GEN_ENTER(0x9dfe00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x10);
}

/* ref: Apricot::Engine::Data::Communicator::CylinderModelEmitter::vf5 */
uint F_009dfe10(unsigned int gen_a0)
{
  GEN_ENTER(0x9dfe10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x18;
}

/* ref: Apricot::Engine::Data::Communicator::CylinderModelEmitter::vf6 */
uint F_009dfe20(unsigned int gen_a0)
{
  GEN_ENTER(0x9dfe20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xa0;
}

/* ref: Apricot::Engine::Data::Communicator::CylinderModelEmitter::vf7 */
uint F_009dfe30(unsigned int gen_a0)
{
  GEN_ENTER(0x9dfe30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x128;
}

/* ref: Apricot::Engine::Data::Communicator::CylinderModelEmitter::vf8 */
uint F_009dfe40(unsigned int gen_a0)
{
  GEN_ENTER(0x9dfe40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x1b0;
}

/* ref: Apricot::Engine::Data::Communicator::CylinderModelEmitter::vf9 */
uint F_009dfe50(unsigned int gen_a0)
{
  GEN_ENTER(0x9dfe50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x238;
}

/* ref: Apricot::Engine::Data::Communicator::CylinderModelEmitter::vf10 */
uint F_009dfe60(unsigned int gen_a0)
{
  GEN_ENTER(0x9dfe60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x2c0;
}

/* ref: Apricot::Engine::Data::Communicator::ModelEmitter::vf1 */
uint F_009dfe70(unsigned int gen_a0)
{
  GEN_ENTER(0x9dfe70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: Apricot::Engine::Data::Communicator::ModelEmitter::vf2 */
uint F_009dfe80(unsigned int gen_a0)
{
  GEN_ENTER(0x9dfe80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8);
}

/* ref: Apricot::Engine::Data::Communicator::ModelEmitter::vf3 */
uint F_009dfe90(unsigned int gen_a0)
{
  GEN_ENTER(0x9dfe90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xc);
}

/* ref: Apricot::Engine::Data::Communicator::ModelEmitter::vf4 */
uint F_009dfea0(unsigned int gen_a0)
{
  GEN_ENTER(0x9dfea0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x10;
}

/* ref: Apricot::Engine::Data::Communicator::ModelEmitter::vf5 */
uint F_009dfeb0(unsigned int gen_a0)
{
  GEN_ENTER(0x9dfeb0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x98;
}

/* ref: Apricot::Engine::Data::Communicator::ModelEmitter::vf6 */
uint F_009dfec0(unsigned int gen_a0)
{
  GEN_ENTER(0x9dfec0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x120;
}

/* ref: Apricot::Engine::Data::Communicator::ModelEmitter::vf7 */
uint F_009dfed0(unsigned int gen_a0)
{
  GEN_ENTER(0x9dfed0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x1a8;
}

/* ref: Apricot::Engine::Data::Communicator::PointEmitter::vf0 */
uint F_009dfee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dfee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10dd36c));
  if (((param_1 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Communicator::SphereModelEmitter::vf1 */
uint F_009dff10(unsigned int gen_a0)
{
  GEN_ENTER(0x9dff10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: Apricot::Engine::Data::Communicator::SphereModelEmitter::vf2 */
uint F_009dff20(unsigned int gen_a0)
{
  GEN_ENTER(0x9dff20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8);
}

/* ref: Apricot::Engine::Data::Communicator::SphereModelEmitter::vf3 */
uint F_009dff30(unsigned int gen_a0)
{
  GEN_ENTER(0x9dff30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xc);
}

/* ref: Apricot::Engine::Data::Communicator::SphereModelEmitter::vf4 */
uint F_009dff40(unsigned int gen_a0)
{
  GEN_ENTER(0x9dff40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x10);
}

/* ref: Apricot::Engine::Data::Communicator::SphereModelEmitter::vf5 */
uint F_009dff50(unsigned int gen_a0)
{
  GEN_ENTER(0x9dff50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x18;
}

/* ref: Apricot::Engine::Data::Communicator::SphereModelEmitter::vf6 */
uint F_009dff60(unsigned int gen_a0)
{
  GEN_ENTER(0x9dff60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xa0;
}

/* ref: Apricot::Engine::Data::Communicator::SphereModelEmitter::vf7 */
uint F_009dff70(unsigned int gen_a0)
{
  GEN_ENTER(0x9dff70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x128;
}

/* ref: Apricot::Engine::Data::Communicator::SphereModelEmitter::vf8 */
uint F_009dff80(unsigned int gen_a0)
{
  GEN_ENTER(0x9dff80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x1b0;
}

/* ref: Apricot::Engine::Data::Communicator::SphereModelEmitter::vf9 */
uint F_009dff90(unsigned int gen_a0)
{
  GEN_ENTER(0x9dff90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x238;
}

/* ref: Apricot::Engine::Data::Communicator::Axis3Parameter::vf1 */
uint F_009dffa0(void)
{
  GEN_ENTER(0x9dffa0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::Engine::Data::Communicator::BindPointProperty::vf1 */
uint F_009dffb0(unsigned int gen_a0)
{
  GEN_ENTER(0x9dffb0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Apricot::Engine::Data::Communicator::BindPointProperty::vf2 */
uint F_009dffc0(unsigned int gen_a0)
{
  GEN_ENTER(0x9dffc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x14);
}

/* ref: Apricot::Engine::Data::Communicator::BindPointProperty::vf3 */
uint F_009dffd0(unsigned int gen_a0)
{
  GEN_ENTER(0x9dffd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x18);
}

/* ref: Apricot::Engine::Data::Communicator::BindPointProperty::vf4 */
uint F_009dffe0(unsigned int gen_a0)
{
  GEN_ENTER(0x9dffe0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x1c);
}

/* ref: Apricot::Engine::Data::Communicator::BindPointProperty::vf5 */
uint F_009dfff0(unsigned int gen_a0)
{
  GEN_ENTER(0x9dfff0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x24);
}

/* ref: Apricot::Engine::Data::Communicator::BindPointProperty::vf6 */
uint F_009e0000(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0000u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x28);
}

/* ref: Apricot::Engine::Data::Communicator::BindPointProperty::vf7 */
byte F_009e0010(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0010u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x20);
}

/* ref: Apricot::Engine::Data::Communicator::BindPointProperty::vf8 */
uint F_009e0020(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0020u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x2c);
}

/* ref: Apricot::Engine::Data::Communicator::BindPointProperty::vf9 */
float10 F_009e0030(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0030u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 0x30);
}

/* ref: Apricot::Engine::Data::Communicator::BindPointProperty::vf10 */
float10 F_009e0040(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0040u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 0x34);
}

/* ref: Apricot::Engine::Data::Communicator::BindPointProperty::vf11 */
float10 F_009e0050(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0050u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 0x38);
}

/* ref: Apricot::Engine::Data::Communicator::BindPointProperty::vf12 */
float10 F_009e0060(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0060u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 0x3c);
}

/* ref: Apricot::Engine::Data::Communicator::BindPointProperty::vf13 */
uint F_009e0070(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0070u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x40;
}

/* ref: Apricot::Engine::Data::Communicator::FunctionCurve::vf0 */
uint F_009e0090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9e0090u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  code * pcVar1;
  
  pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)(this + 4) != 0)) {
    (*pcVar1)(*(int *)(this + 4));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  if (((param_1 & 1) != 0) && (pcVar1 != (code *)0x0)) {
    (*pcVar1)(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Communicator::Value::vf1 */
float10 F_009e00e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9e00e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 4);
}

/* ref: Apricot::Engine::Data::Communicator::Value::vf2 */
float10 F_009e00f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9e00f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 8);
}

/* ref: Apricot::Engine::Data::Communicator::Value::vf0 */
uint F_009e0100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9e0100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10dd358));
  if (((param_1 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Communicator::ValueFunctionCurve::vf0 */
uint F_009e0130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9e0130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  code * pcVar1;
  
  pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *(undefined * PTR32 * PTR32 *)(this + 0x40) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)(this + 0x44) != 0)) {
    (*pcVar1)(*(int *)(this + 0x44));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)(this + 0x40) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)(this + 8) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)(this + 0xc) != 0)) {
    (*pcVar1)(*(int *)(this + 0xc));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)(this + 8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  if (((param_1 & 1) != 0) && (pcVar1 != (code *)0x0)) {
    (*pcVar1)(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Communicator::TextureUvSet::vf1 */
uint F_009e01b0(void)
{
  GEN_ENTER(0x9e01b0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::Engine::Data::Communicator::TextureUvSet::vf2 */
uint F_009e01c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9e01c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: Apricot::Engine::Data::Communicator::LaserParticle::vf0 */
uint F_009e01d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9e01d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0097a850(this);
  if ((((param_1 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) && (this != (undefined *)0x0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Communicator::LightModelParticle::vf1 */
uint F_009e0200(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0200u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: Apricot::Engine::Data::Communicator::LightModelParticle::vf0 */
uint F_009e0210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9e0210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10dd5e8));
  if (((param_1 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Communicator::PolygonParticle::vf0 */
uint F_009e0240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9e0240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0097a930(this);
  if ((((param_1 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) && (this != (undefined *)0x0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Communicator::PowderParticle::vf1 */
byte F_009e0270(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0270u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 4);
}

/* ref: Apricot::Engine::Data::Communicator::PowderParticle::vf2 */
uint F_009e0280(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0280u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8);
}

/* ref: Apricot::Engine::Data::Communicator::PowderParticle::vf3 */
float10 F_009e0290(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0290u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 0xc);
}

/* ref: Apricot::Engine::Data::Communicator::PowderParticle::vf0 */
uint F_009e02a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9e02a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10dd500));
  if (((param_1 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Communicator::WindmillParticle::vf1 */
uint F_009e02d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9e02d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: Apricot::Engine::Data::Communicator::WindmillParticle::vf0 */
uint F_009e02e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9e02e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10dd514));
  if (((param_1 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Communicator::QuadParticle::vf0 */
uint F_009e0310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9e0310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10dd520));
  if (((param_1 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Communicator::DecalParticle::vf1 */
float10 F_009e0340(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0340u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 4);
}

/* ref: Apricot::Engine::Data::Communicator::DecalParticle::vf0 */
uint F_009e0350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9e0350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10dd5f4));
  if (((param_1 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Communicator::DecalRingParticle::vf0 */
uint F_009e0380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9e0380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0097a9e0(this);
  if ((((param_1 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) && (this != (undefined *)0x0))
  {
    ((code *)REFG(gen_code32, 0x14a0a18))(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Runtime::Scheduler::vf0 */
uint F_009e03b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9e03b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  undefined * pSVar2;
  
  if ((param_1 & 2) != 0) {
    iVar1 = *(int *)(this + -4);
    pSVar2 = this + iVar1 * 0x10;
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      pSVar2 = pSVar2 + -0x10;
      *(undefined * PTR32 * PTR32 *)pSVar2 = (*(undefined * PTR32 (*)[5])REFP(0x10dd320));
    }
    return (uint)(this + -4);
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10dd320));
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Runtime::Timeline::vf0 */
uint F_009e03f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9e03f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  undefined * pTVar2;
  
  if ((param_1 & 2) != 0) {
    iVar1 = *(int *)(this + -4);
    pTVar2 = this + iVar1 * 0x20;
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      pTVar2 = pTVar2 + -0x20;
      *(undefined * PTR32 * PTR32 *)pTVar2 = (*(undefined * PTR32 (*)[7])REFP(0x10dd338));
    }
    return (uint)(this + -4);
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x10dd338));
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Runtime::Effector::vf0 */
uint F_009e0430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9e0430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pEVar1;
  undefined * pEVar2;
  int iVar3;
  
  if ((param_1 & 2) == 0) {
    *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x10dd92c));
  }
  else {
    pEVar1 = this + -4;
    iVar3 = *(int *)(this + -4) + -1;
    pEVar2 = this + *(int *)(this + -4) * 0x14;
    this = pEVar1;
    if (-1 < iVar3) {
      do {
        pEVar2 = pEVar2 + -0x14;
        iVar3 = iVar3 + -1;
        *(undefined * PTR32 * PTR32 *)pEVar2 = (*(undefined * PTR32 (*)[13])REFP(0x10dd92c));
      } while (-1 < iVar3);
      return (uint)pEVar1;
    }
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Runtime::Binder::vf0 */
uint F_009e0470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9e0470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pBVar1;
  undefined * pBVar2;
  int iVar3;
  
  if ((param_1 & 2) == 0) {
    *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[12])REFP(0x10dd2ec));
  }
  else {
    pBVar1 = this + -4;
    iVar3 = *(int *)(this + -4) + -1;
    pBVar2 = this + *(int *)(this + -4) * 0x24;
    this = pBVar1;
    if (-1 < iVar3) {
      do {
        pBVar2 = pBVar2 + -0x24;
        iVar3 = iVar3 + -1;
        *(undefined * PTR32 * PTR32 *)pBVar2 = (*(undefined * PTR32 (*)[12])REFP(0x10dd2ec));
      } while (-1 < iVar3);
      return (uint)pBVar1;
    }
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Runtime::Texture::vf0 */
uint F_009e04b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9e04b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int * piVar2;
  undefined * pTVar3;
  int iVar4;
  
  if ((param_1 & 2) == 0) {
    piVar2 = *(int * PTR32 *)(this + 4);
    *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10ddc78));
    if (piVar2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
      *(undefined4 *)(this + 4) = 0;
    }
    *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10dd200));
    return (uint)this;
  }
  iVar1 = *(int *)(this + -4);
  iVar4 = iVar1 + -1;
  if (-1 < iVar4) {
    pTVar3 = this + iVar1 * 8 + 4;
    do {
      piVar2 = *(int * PTR32 *)(pTVar3 + -8);
      *(undefined * PTR32 * PTR32 *)(pTVar3 + -0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10ddc78));
      if (piVar2 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
        *(undefined4 *)(pTVar3 + -8) = 0;
      }
      iVar4 = iVar4 + -1;
      *(undefined * PTR32 * PTR32 *)(pTVar3 + -0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10dd200));
      pTVar3 = pTVar3 + -8;
    } while (-1 < iVar4);
  }
  return (uint)(this + -4);
}

/* ref: Apricot::Engine::Data::Runtime::Model::vf0 */
uint F_009e0530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9e0530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int * piVar2;
  undefined * pMVar3;
  undefined * pMVar4;
  int iVar5;
  
  if ((param_1 & 2) == 0) {
    piVar2 = *(int * PTR32 *)(this + 0xc);
    *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10ddc54));
    if (piVar2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
      *(undefined4 *)(this + 0xc) = 0;
    }
    piVar2 = *(int * PTR32 *)(this + 0x10);
    if (piVar2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
      *(undefined4 *)(this + 0x10) = 0;
    }
    *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10dd1f4));
    return (uint)this;
  }
  iVar1 = *(int *)(this + -4);
  iVar5 = iVar1 + -1;
  if (-1 < iVar5) {
    pMVar3 = this + iVar1 * 0x1c + 0x10;
    do {
      piVar2 = *(int * PTR32 *)(pMVar3 + -0x20);
      pMVar4 = pMVar3 + -0x1c;
      *(undefined * PTR32 * PTR32 *)(pMVar3 + -0x2c) = (*(undefined * PTR32 (*)[2])REFP(0x10ddc54));
      if (piVar2 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
        *(int *)(pMVar3 + -0x20) = 0;
      }
      piVar2 = *(int * PTR32 *)pMVar4;
      if (piVar2 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
        *(int *)pMVar4 = 0;
      }
      iVar5 = iVar5 + -1;
      *(undefined * PTR32 * PTR32 *)(pMVar3 + -0x2c) = (*(undefined * PTR32 (*)[2])REFP(0x10dd1f4));
      pMVar3 = pMVar4;
    } while (-1 < iVar5);
  }
  return (uint)(this + -4);
}

/* ref: Apricot::Engine::Data::Runtime::CameraBinder::vf1 */
uint F_009e05f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9e05f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Apricot::Engine::Data::Runtime::LinearBinder::vf1 */
uint F_009e0600(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0600u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Apricot::Engine::Data::Runtime::PointBinder::vf1 */
uint F_009e0610(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0610u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Apricot::Engine::Data::Runtime::SplineBinder::vf1 */
uint F_009e0620(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0620u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Apricot::Engine::Data::Runtime::RadialBlurEffector::vf1 */
uint F_009e0630(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0630u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Apricot::Engine::Data::Runtime::RadialBlurEffector::vf2 */
uint F_009e0640(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0640u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xc;
}

/* ref: Apricot::Engine::Data::Runtime::RadialBlurEffector::vf3 */
uint F_009e0650(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0650u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x14;
}

/* ref: Apricot::Engine::Data::Runtime::RadialBlurEffector::vf4 */
uint F_009e0660(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0660u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x1c;
}

/* ref: Apricot::Engine::Data::Runtime::RadialBlurEffector::vf5 */
uint F_009e0670(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0670u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x24;
}

/* ref: Apricot::Engine::Data::Runtime::RadialBlurEffector::vf6 */
float10 F_009e0680(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0680u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 0x2c);
}

/* ref: Apricot::Engine::Data::Runtime::RadialBlurEffector::vf7 */
float10 F_009e0690(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0690u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 0x30);
}

/* ref: Apricot::Engine::Data::Runtime::ConeEmitter::vf1 */
uint F_009e06a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9e06a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 4);
}

/* ref: Apricot::Engine::Data::Runtime::ConeEmitter::vf2 */
uint F_009e06b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9e06b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 8;
}

/* ref: Apricot::Engine::Data::Runtime::ConeEmitter::vf3 */
uint F_009e06c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9e06c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x20;
}

/* ref: Apricot::Engine::Data::Runtime::ConeEmitter::vf4 */
uint F_009e06d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9e06d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x38;
}

/* ref: Apricot::Engine::Data::Runtime::ConeEmitter::vf5 */
uint F_009e06e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9e06e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x50;
}

/* ref: Apricot::Engine::Data::Runtime::ConeEmitter::vf6 */
uint F_009e06f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9e06f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x68;
}

/* ref: Apricot::Engine::Data::Runtime::ConeEmitter::vf7 */
uint F_009e0700(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0700u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x80;
}

/* ref: Apricot::Engine::Data::Runtime::ConeEmitter::vf8 */
uint F_009e0710(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0710u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x98;
}

/* ref: Apricot::Engine::Data::Runtime::ConeModelEmitter::vf1 */
uint F_009e0720(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0720u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 4);
}

/* ref: Apricot::Engine::Data::Runtime::ConeModelEmitter::vf2 */
uint F_009e0730(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0730u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 5);
}

/* ref: Apricot::Engine::Data::Runtime::ConeModelEmitter::vf3 */
uint F_009e0740(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0740u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 6);
}

/* ref: Apricot::Engine::Data::Runtime::ConeModelEmitter::vf4 */
uint F_009e0750(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0750u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 7);
}

/* ref: Apricot::Engine::Data::Runtime::ConeModelEmitter::vf5 */
uint F_009e0760(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0760u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 8;
}

/* ref: Apricot::Engine::Data::Runtime::ConeModelEmitter::vf6 */
uint F_009e0770(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0770u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x20;
}

/* ref: Apricot::Engine::Data::Runtime::ConeModelEmitter::vf7 */
uint F_009e0780(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0780u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x38;
}

/* ref: Apricot::Engine::Data::Runtime::ConeModelEmitter::vf8 */
uint F_009e0790(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0790u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x50;
}

/* ref: Apricot::Engine::Data::Runtime::ConeModelEmitter::vf9 */
uint F_009e07a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9e07a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x68;
}

/* ref: Apricot::Engine::Data::Runtime::ConeModelEmitter::vf10 */
uint F_009e07b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9e07b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x80;
}

/* ref: Apricot::Engine::Data::Runtime::CylinderModelEmitter::vf1 */
uint F_009e07c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9e07c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 4);
}

/* ref: Apricot::Engine::Data::Runtime::CylinderModelEmitter::vf2 */
uint F_009e07d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9e07d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 5);
}

/* ref: Apricot::Engine::Data::Runtime::CylinderModelEmitter::vf3 */
uint F_009e07e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9e07e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 6);
}

/* ref: Apricot::Engine::Data::Runtime::CylinderModelEmitter::vf4 */
uint F_009e07f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9e07f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 7);
}

/* ref: Apricot::Engine::Data::Runtime::CylinderModelEmitter::vf5 */
uint F_009e0800(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0800u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 8;
}

/* ref: Apricot::Engine::Data::Runtime::CylinderModelEmitter::vf6 */
uint F_009e0810(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0810u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x20;
}

/* ref: Apricot::Engine::Data::Runtime::CylinderModelEmitter::vf7 */
uint F_009e0820(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0820u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x38;
}

/* ref: Apricot::Engine::Data::Runtime::CylinderModelEmitter::vf8 */
uint F_009e0830(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0830u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x50;
}

/* ref: Apricot::Engine::Data::Runtime::CylinderModelEmitter::vf9 */
uint F_009e0840(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0840u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x68;
}

/* ref: Apricot::Engine::Data::Runtime::CylinderModelEmitter::vf10 */
uint F_009e0850(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0850u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x80;
}

/* ref: Apricot::Engine::Data::Runtime::ModelEmitter::vf1 */
uint F_009e0860(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0860u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 4);
}

/* ref: Apricot::Engine::Data::Runtime::ModelEmitter::vf2 */
uint F_009e0870(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0870u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 5);
}

/* ref: Apricot::Engine::Data::Runtime::ModelEmitter::vf3 */
uint F_009e0880(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0880u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 6);
}

/* ref: Apricot::Engine::Data::Runtime::ModelEmitter::vf4 */
uint F_009e0890(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0890u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 8;
}

/* ref: Apricot::Engine::Data::Runtime::ModelEmitter::vf5 */
uint F_009e08a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9e08a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x20;
}

/* ref: Apricot::Engine::Data::Runtime::ModelEmitter::vf6 */
uint F_009e08b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9e08b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x38;
}

/* ref: Apricot::Engine::Data::Runtime::ModelEmitter::vf7 */
uint F_009e08c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9e08c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x50;
}

/* ref: Apricot::Engine::Data::Runtime::PointEmitter::vf0 */
uint F_009e08d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9e08d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10dd36c));
  return (uint)in_ecx;
}

/* ref: Apricot::Engine::Data::Runtime::SphereModelEmitter::vf1 */
uint F_009e08e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9e08e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 4);
}

/* ref: Apricot::Engine::Data::Runtime::SphereModelEmitter::vf2 */
uint F_009e08f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9e08f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 5);
}

/* ref: Apricot::Engine::Data::Runtime::SphereModelEmitter::vf3 */
uint F_009e0900(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0900u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 6);
}

/* ref: Apricot::Engine::Data::Runtime::SphereModelEmitter::vf4 */
uint F_009e0910(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0910u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 7);
}

/* ref: Apricot::Engine::Data::Runtime::SphereModelEmitter::vf5 */
uint F_009e0920(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0920u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 8;
}

/* ref: Apricot::Engine::Data::Runtime::SphereModelEmitter::vf6 */
uint F_009e0930(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0930u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x20;
}

/* ref: Apricot::Engine::Data::Runtime::SphereModelEmitter::vf7 */
uint F_009e0940(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0940u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x38;
}

/* ref: Apricot::Engine::Data::Runtime::SphereModelEmitter::vf8 */
uint F_009e0950(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0950u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x50;
}

/* ref: Apricot::Engine::Data::Runtime::SphereModelEmitter::vf9 */
uint F_009e0960(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0960u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x68;
}

/* ref: Apricot::Engine::Data::Runtime::Axis3Parameter::vf1 */
uint F_009e0970(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0970u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: Apricot::Engine::Data::Runtime::BindPointProperty::vf1 */
uint F_009e0980(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0980u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Apricot::Engine::Data::Runtime::BindPointProperty::vf2 */
uint F_009e0990(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0990u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)*(byte *)(in_ecx + 0x2b);
}

/* ref: Apricot::Engine::Data::Runtime::BindPointProperty::vf3 */
uint F_009e09a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9e09a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x2a) >> 1 & 3;
}

/* ref: Apricot::Engine::Data::Runtime::BindPointProperty::vf4 */
uint F_009e09b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9e09b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x2a) >> 3 & 7;
}

/* ref: Apricot::Engine::Data::Runtime::BindPointProperty::vf7 */
uint F_009e09c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9e09c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x2a) & 1;
}

/* ref: Apricot::Engine::Data::Runtime::BindPointProperty::vf5 */
uint F_009e09d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9e09d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(short *)(in_ecx + 0x24);
}

/* ref: Apricot::Engine::Data::Runtime::BindPointProperty::vf6 */
uint F_009e09e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9e09e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(short *)(in_ecx + 0x26);
}

/* ref: Apricot::Engine::Data::Runtime::BindPointProperty::vf8 */
uint F_009e09f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9e09f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(short *)(in_ecx + 0x28);
}

/* ref: Apricot::Engine::Data::Runtime::BindPointProperty::vf9 */
float10 F_009e0a00(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0a00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 0x14);
}

/* ref: Apricot::Engine::Data::Runtime::BindPointProperty::vf10 */
float10 F_009e0a10(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0a10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 0x18);
}

/* ref: Apricot::Engine::Data::Runtime::BindPointProperty::vf11 */
float10 F_009e0a20(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0a20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 0x1c);
}

/* ref: Apricot::Engine::Data::Runtime::BindPointProperty::vf12 */
float10 F_009e0a30(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0a30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 0x20);
}

/* ref: Apricot::Engine::Data::Runtime::BindPointProperty::vf13 */
uint F_009e0a40(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0a40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x2c;
}

/* ref: Apricot::Engine::Data::Runtime::ColorFunctionCurve::vf1 */
uint F_009e0a50(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0a50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: Apricot::Engine::Data::Runtime::FunctionCurve::vf0 */
uint F_009e0a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9e0a60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  return (uint)in_ecx;
}

/* ref: Apricot::Engine::Data::Runtime::RgbFunctionCurve::vf0 */
uint F_009e0a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9e0a70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x10dd28c));
  return (uint)in_ecx;
}

/* ref: Apricot::Engine::Data::Runtime::Value::vf0 */
uint F_009e0a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9e0a80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[4])REFP(0x10dd358));
  return (uint)in_ecx;
}

/* ref: Apricot::Engine::Data::Runtime::ValueFunctionCurve::vf0 */
uint F_009e0a90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9e0a90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[3] = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  in_ecx[1] = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *in_ecx = (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  return (uint)in_ecx;
}

/* ref: Apricot::Engine::Data::Runtime::TextureUvSet::vf1 */
uint F_009e0ab0(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0ab0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: Apricot::Engine::Data::Runtime::TextureUvSet::vf2 */
uint F_009e0ac0(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0ac0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return **(uint * PTR32 *)(in_ecx + 4) >> 1 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color1::vf0 */
uint F_009e0ad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9e0ad0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[7] = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  in_ecx[5] = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  in_ecx[4] = (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *in_ecx = (*(undefined * PTR32 (*)[13])REFP(0x10dd680));
  return (uint)in_ecx;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color2::vf0 */
uint F_009e0af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9e0af0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[11])REFP(0x10dd6b8));
  return (uint)in_ecx;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Normal::vf0 */
uint F_009e0b00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9e0b00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[2] = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *in_ecx = (*(undefined * PTR32 (*)[8])REFP(0x10dd6e8));
  return (uint)in_ecx;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Reflection::vf0 */
uint F_009e0b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9e0b20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[2] = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *in_ecx = (*(undefined * PTR32 (*)[7])REFP(0x10dd70c));
  return (uint)in_ecx;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Distortion::vf0 */
uint F_009e0b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9e0b40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[2] = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *in_ecx = (*(undefined * PTR32 (*)[12])REFP(0x10dd72c));
  return (uint)in_ecx;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Palette::vf0 */
uint F_009e0b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9e0b60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[2] = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *in_ecx = (*(undefined * PTR32 (*)[5])REFP(0x10dd760));
  return (uint)in_ecx;
}

/* ref: Apricot::Engine::Data::Runtime::LaserParticle::vf0 */
uint F_009e0b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9e0b80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined * PTR32 * PTR32 *)(this + 0x28) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)(this + 0x20) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)(this + 0x1c) = (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)(this + 0x10) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)(this + 8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10dd534));
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Runtime::LineParticle::vf1 */
uint F_009e0bb0(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0bb0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 4);
}

/* ref: Apricot::Engine::Data::Runtime::LineParticle::vf2 */
uint F_009e0bc0(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0bc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 8;
}

/* ref: Apricot::Engine::Data::Runtime::LineParticle::vf3 */
uint F_009e0bd0(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0bd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x20;
}

/* ref: Apricot::Engine::Data::Runtime::LineParticle::vf4 */
uint F_009e0be0(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0be0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x8c;
}

/* ref: Apricot::Engine::Data::Runtime::ModelParticle::vf1 */
uint F_009e0bf0(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0bf0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xc) >> 8 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::ModelParticle::vf2 */
uint F_009e0c00(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0c00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xc) >> 9 & 3;
}

/* ref: Apricot::Engine::Data::Runtime::ModelParticle::vf3 */
uint F_009e0c10(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0c10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xc) >> 0xb & 3;
}

/* ref: Apricot::Engine::Data::Runtime::ModelParticle::vf4 */
uint F_009e0c20(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0c20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)((*(uint *)(in_ecx + 0xc) & 0x6000) != 0);
}

/* ref: Apricot::Engine::Data::Runtime::ModelParticle::vf5 */
uint F_009e0c30(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0c30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xc) >> 0xf & 1;
}

/* ref: Apricot::Engine::Data::Runtime::ModelParticle::vf6 */
uint F_009e0c40(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0c40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x10;
}

/* ref: Apricot::Engine::Data::Runtime::ModelParticle::vf7 */
uint F_009e0c50(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0c50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x28;
}

/* ref: Apricot::Engine::Data::Runtime::ModelParticle::vf8 */
uint F_009e0c60(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0c60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x60;
}

/* ref: Apricot::Engine::Data::Runtime::ModelParticle::vf9 */
uint F_009e0c70(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0c70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xcc;
}

/* ref: Apricot::Engine::Data::Runtime::ModelParticle::vf10 */
uint F_009e0c80(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0c80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x138;
}

/* ref: Apricot::Engine::Data::Runtime::ModelParticle::vf11 */
uint F_009e0c90(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0c90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x140;
}

/* ref: Apricot::Engine::Data::Runtime::LightModelParticle::vf0 */
uint F_009e0ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9e0ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x10dd5e8));
  return (uint)in_ecx;
}

/* ref: Apricot::Engine::Data::Runtime::PolygonParticle::vf0 */
uint F_009e0cb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9e0cb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[4] = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  in_ecx[2] = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  in_ecx[1] = (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x10dd528));
  return (uint)in_ecx;
}

/* ref: Apricot::Engine::Data::Runtime::PolyLineParticle::vf1 */
uint F_009e0cd0(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0cd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 4) & 0xf;
}

/* ref: Apricot::Engine::Data::Runtime::PolyLineParticle::vf2 */
uint F_009e0ce0(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0ce0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)(*(byte *)(in_ecx + 4) >> 4);
}

/* ref: Apricot::Engine::Data::Runtime::PolyLineParticle::vf3 */
uint F_009e0cf0(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0cf0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 5);
}

/* ref: Apricot::Engine::Data::Runtime::PolyLineParticle::vf4 */
uint F_009e0d00(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0d00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 6);
}

/* ref: Apricot::Engine::Data::Runtime::PolyLineParticle::vf5 */
uint F_009e0d10(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0d10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 7);
}

/* ref: Apricot::Engine::Data::Runtime::PolyLineParticle::vf6 */
uint F_009e0d20(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0d20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 8) & 1;
}

/* ref: Apricot::Engine::Data::Runtime::PolyLineParticle::vf7 */
uint F_009e0d30(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0d30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 8) >> 1 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::PolyLineParticle::vf8 */
uint F_009e0d40(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0d40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 8) >> 2 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::PolyLineParticle::vf9 */
uint F_009e0d50(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0d50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 8) >> 3 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::PolyLineParticle::vf10 */
uint F_009e0d60(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0d60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 8) >> 4 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::PolyLineParticle::vf11 */
uint F_009e0d70(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0d70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xc;
}

/* ref: Apricot::Engine::Data::Runtime::PolyLineParticle::vf12 */
uint F_009e0d80(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0d80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x24;
}

/* ref: Apricot::Engine::Data::Runtime::PolyLineParticle::vf13 */
uint F_009e0d90(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0d90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x3c;
}

/* ref: Apricot::Engine::Data::Runtime::PolyLineParticle::vf14 */
uint F_009e0da0(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0da0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x54;
}

/* ref: Apricot::Engine::Data::Runtime::PolyLineParticle::vf15 */
uint F_009e0db0(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0db0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x6c;
}

/* ref: Apricot::Engine::Data::Runtime::PolyLineParticle::vf16 */
uint F_009e0dc0(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0dc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x84;
}

/* ref: Apricot::Engine::Data::Runtime::PolyLineParticle::vf17 */
uint F_009e0dd0(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0dd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xb4;
}

/* ref: Apricot::Engine::Data::Runtime::PolyLineParticle::vf18 */
uint F_009e0de0(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0de0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x9c;
}

/* ref: Apricot::Engine::Data::Runtime::PolyLineParticle::vf19 */
uint F_009e0df0(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0df0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xbc;
}

/* ref: Apricot::Engine::Data::Runtime::PolyLineParticle::vf20 */
uint F_009e0e00(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0e00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x128;
}

/* ref: Apricot::Engine::Data::Runtime::PolyLineParticle::vf21 */
uint F_009e0e10(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0e10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x194;
}

/* ref: Apricot::Engine::Data::Runtime::PolyLineParticle::vf22 */
uint F_009e0e20(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0e20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x200;
}

/* ref: Apricot::Engine::Data::Runtime::PolyLineParticle::vf23 */
uint F_009e0e30(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0e30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x26c;
}

/* ref: Apricot::Engine::Data::Runtime::PolyLineParticle::vf24 */
uint F_009e0e40(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0e40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x2d8;
}

/* ref: Apricot::Engine::Data::Runtime::PowderParticle::vf0 */
uint F_009e0e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9e0e50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[4])REFP(0x10dd500));
  return (uint)in_ecx;
}

/* ref: Apricot::Engine::Data::Runtime::WindmillParticle::vf0 */
uint F_009e0e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9e0e60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x10dd514));
  return (uint)in_ecx;
}

/* ref: Apricot::Engine::Data::Runtime::QuadParticle::vf0 */
uint F_009e0e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9e0e70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10dd520));
  return (uint)in_ecx;
}

/* ref: Apricot::Engine::Data::Runtime::DecalParticle::vf0 */
uint F_009e0e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9e0e80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x10dd5f4));
  return (uint)in_ecx;
}

/* ref: Apricot::Engine::Data::Runtime::DecalRingParticle::vf0 */
uint F_009e0e90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9e0e90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[4] = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  in_ecx[2] = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  in_ecx[1] = (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *in_ecx = (*(undefined * PTR32 (*)[4])REFP(0x10dd600));
  return (uint)in_ecx;
}

/* ref: Apricot::Engine::Data::Runtime::DiscParticle::vf1 */
uint F_009e0eb0(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0eb0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)*(byte *)(in_ecx + 4);
}

/* ref: Apricot::Engine::Data::Runtime::DiscParticle::vf2 */
uint F_009e0ec0(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0ec0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)*(byte *)(in_ecx + 5);
}

/* ref: Apricot::Engine::Data::Runtime::DiscParticle::vf3 */
uint F_009e0ed0(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0ed0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)*(byte *)(in_ecx + 6);
}

/* ref: Apricot::Engine::Data::Runtime::DiscParticle::vf4 */
float10 F_009e0ee0(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0ee0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 8);
}

/* ref: Apricot::Engine::Data::Runtime::DiscParticle::vf5 */
uint F_009e0ef0(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0ef0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xc;
}

/* ref: Apricot::Engine::Data::Runtime::DiscParticle::vf6 */
uint F_009e0f00(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0f00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x24;
}

/* ref: Apricot::Engine::Data::Runtime::DiscParticle::vf7 */
uint F_009e0f10(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0f10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x3c;
}

/* ref: Apricot::Engine::Data::Runtime::DiscParticle::vf8 */
uint F_009e0f20(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0f20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x54;
}

/* ref: Apricot::Engine::Data::Runtime::DiscParticle::vf9 */
uint F_009e0f30(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0f30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x6c;
}

/* ref: Apricot::Engine::Data::Runtime::DiscParticle::vf10 */
uint F_009e0f40(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0f40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x84;
}

/* ref: Apricot::Engine::Data::Runtime::DiscParticle::vf11 */
uint F_009e0f50(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0f50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x9c;
}

/* ref: Apricot::Engine::Data::Runtime::DiscParticle::vf12 */
uint F_009e0f60(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0f60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xb4;
}

/* ref: Apricot::Engine::Data::Runtime::DiscParticle::vf13 */
uint F_009e0f70(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0f70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xcc;
}

/* ref: Apricot::Engine::Data::Runtime::DiscParticle::vf14 */
uint F_009e0f80(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0f80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xe4;
}

/* ref: Apricot::Engine::Data::Runtime::DiscParticle::vf15 */
uint F_009e0f90(unsigned int gen_a0)
{
  GEN_ENTER(0x9e0f90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x150;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf0 */
uint F_009e0fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9e0fa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[31])REFP(0x10dde84));
  puVar2 = *(undefined4 * PTR32 *)(this + 0x1e0);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar2[0x7a];
    ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    puVar2 = puVar1;
  }
  if ((param_1 & 1) != 0) {
    uVar3 = (uint)((int)this - REFG(int, 0x14a09f4)) >> 10;
    *(uint *)(uVar3 * 0x400 + REFG(int, 0x14a09f4)) = REFG(undefined4, 0x14a09e8);
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
    REFG(undefined4, 0x14a09e8) = uVar3;
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Instance::ParametricInstance::vf0 */
uint F_009e1030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9e1030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  F_0097ee40(this);
  if ((param_1 & 1) != 0) {
    uVar1 = (uint)((int)this - REFG(int, 0x14a09f4)) >> 10;
    *(uint *)(uVar1 * 0x400 + REFG(int, 0x14a09f4)) = REFG(undefined4, 0x14a09e8);
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
    REFG(undefined4, 0x14a09e8) = uVar1;
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Instance::ParticleInstance::vf0 */
uint F_009e1080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9e1080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[34])REFP(0x10ddf84));
  F_0097ee40(this);
  if ((param_1 & 1) != 0) {
    uVar1 = (uint)((int)this - REFG(int, 0x14a09f4)) >> 10;
    *(uint *)(uVar1 * 0x400 + REFG(int, 0x14a09f4)) = REFG(undefined4, 0x14a09e8);
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
    REFG(undefined4, 0x14a09e8) = uVar1;
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Instance::BinderInstance::vf8 */
uint F_009e10d0(void)
{
  GEN_ENTER(0x9e10d0u, 0u, 0u, 0u, 0u);
  return 9;
}

/* ref: Apricot::Engine::Instance::CameraBinderInstance::vf5 */
uint F_009e10e0(void)
{
  GEN_ENTER(0x9e10e0u, 0u, 0u, 0u, 0u);
  return 0x132f428;
}

/* ref: Apricot::Engine::Instance::CameraBinderInstance::vf6 */
uint F_009e10f0(void)
{
  GEN_ENTER(0x9e10f0u, 0u, 0u, 0u, 0u);
  return 0x132f3f8;
}

/* ref: Apricot::Engine::Instance::CameraBinderInstance::vf7 */
uint F_009e1100(void)
{
  GEN_ENTER(0x9e1100u, 0u, 0u, 0u, 0u);
  return 0x14a0a2c;
}

/* ref: Apricot::Engine::Instance::LinearBinderInstance::vf5 */
uint F_009e1110(unsigned int gen_a0)
{
  GEN_ENTER(0x9e1110u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x270;
}

/* ref: Apricot::Engine::Instance::LinearBinderInstance::vf6 */
uint F_009e1120(unsigned int gen_a0)
{
  GEN_ENTER(0x9e1120u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x2a0;
}

/* ref: Apricot::Engine::Instance::LinearBinderInstance::vf7 */
uint F_009e1130(void)
{
  GEN_ENTER(0x9e1130u, 0u, 0u, 0u, 0u);
  return 0x14a0a2c;
}

/* ref: Apricot::Engine::Instance::PointBinderInstance::vf5 */
uint F_009e1140(unsigned int gen_a0)
{
  GEN_ENTER(0x9e1140u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x240;
}

/* ref: Apricot::Engine::Instance::PointBinderInstance::vf6 */
uint F_009e1150(unsigned int gen_a0)
{
  GEN_ENTER(0x9e1150u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x270;
}

/* ref: Apricot::Engine::Instance::PointBinderInstance::vf7 */
uint F_009e1160(void)
{
  GEN_ENTER(0x9e1160u, 0u, 0u, 0u, 0u);
  return 0x14a0a2c;
}

/* ref: Apricot::Engine::Instance::SplineBinderInstance::vf5 */
uint F_009e1170(unsigned int gen_a0)
{
  GEN_ENTER(0x9e1170u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x270;
}

/* ref: Apricot::Engine::Instance::SplineBinderInstance::vf6 */
uint F_009e1180(unsigned int gen_a0)
{
  GEN_ENTER(0x9e1180u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x2a0;
}

/* ref: Apricot::Engine::Instance::SplineBinderInstance::vf7 */
uint F_009e1190(void)
{
  GEN_ENTER(0x9e1190u, 0u, 0u, 0u, 0u);
  return 0x14a0a2c;
}

/* ref: Apricot::Engine::Instance::BindPointPropertyInstance::vf0 */
uint F_009e11a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9e11a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de010));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Instance::LineParticleInstance::vf0 */
uint F_009e11e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9e11e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[34])REFP(0x10de01c));
  if (*(int *)(this + 0x2f0) != 0) {
    uVar1 = (uint)(*(int *)(this + 0x2f0) - REFG(int, 0x14a09f4)) >> 10;
    *(uint *)(uVar1 * 0x400 + REFG(int, 0x14a09f4)) = REFG(undefined4, 0x14a09e8);
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
    REFG(undefined4, 0x14a09e8) = uVar1;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[34])REFP(0x10ddf84));
  F_0097ee40(this);
  if ((param_1 & 1) != 0) {
    uVar1 = (uint)((int)this - REFG(int, 0x14a09f4)) >> 10;
    *(uint *)(uVar1 * 0x400 + REFG(int, 0x14a09f4)) = REFG(undefined4, 0x14a09e8);
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
    REFG(undefined4, 0x14a09e8) = uVar1;
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Instance::ModelParticleInstance::vf0 */
uint F_009e1290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9e1290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[34])REFP(0x10de0ac));
  if (*(int *)(this + 0x300) != 0) {
    uVar1 = (uint)(*(int *)(this + 0x300) - REFG(int, 0x14a09f4)) >> 10;
    *(uint *)(uVar1 * 0x400 + REFG(int, 0x14a09f4)) = REFG(undefined4, 0x14a09e8);
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
    REFG(undefined4, 0x14a09e8) = uVar1;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[34])REFP(0x10ddf84));
  F_0097ee40(this);
  if ((param_1 & 1) != 0) {
    uVar1 = (uint)((int)this - REFG(int, 0x14a09f4)) >> 10;
    *(uint *)(uVar1 * 0x400 + REFG(int, 0x14a09f4)) = REFG(undefined4, 0x14a09e8);
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
    REFG(undefined4, 0x14a09e8) = uVar1;
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Instance::LightModelParticleInstance::vf0 */
uint F_009e1320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9e1320u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[34])REFP(0x10de13c));
  if (*(int *)(this + 0x2f0) != 0) {
    uVar1 = (uint)(*(int *)(this + 0x2f0) - REFG(int, 0x14a09f4)) >> 10;
    *(uint *)(uVar1 * 0x400 + REFG(int, 0x14a09f4)) = REFG(undefined4, 0x14a09e8);
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
    REFG(undefined4, 0x14a09e8) = uVar1;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[34])REFP(0x10ddf84));
  F_0097ee40(this);
  if ((param_1 & 1) != 0) {
    uVar1 = (uint)((int)this - REFG(int, 0x14a09f4)) >> 10;
    *(uint *)(uVar1 * 0x400 + REFG(int, 0x14a09f4)) = REFG(undefined4, 0x14a09e8);
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
    REFG(undefined4, 0x14a09e8) = uVar1;
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Instance::PolygonParticleInstance::vf0 */
uint F_009e13a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9e13a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[34])REFP(0x10de1cc));
  if (*(int *)(this + 0x2f4) != 0) {
    uVar1 = (uint)(*(int *)(this + 0x2f4) - REFG(int, 0x14a09f4)) >> 10;
    *(uint *)(uVar1 * 0x400 + REFG(int, 0x14a09f4)) = REFG(undefined4, 0x14a09e8);
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
    REFG(undefined4, 0x14a09e8) = uVar1;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[34])REFP(0x10ddf84));
  F_0097ee40(this);
  if ((param_1 & 1) != 0) {
    uVar1 = (uint)((int)this - REFG(int, 0x14a09f4)) >> 10;
    *(uint *)(uVar1 * 0x400 + REFG(int, 0x14a09f4)) = REFG(undefined4, 0x14a09e8);
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
    REFG(undefined4, 0x14a09e8) = uVar1;
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Instance::PolyLineParticleInstance::vf0 */
uint F_009e1420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9e1420u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  F_009808e0(this);
  if ((param_1 & 1) != 0) {
    uVar1 = (uint)((int)this - REFG(int, 0x14a09f4)) >> 10;
    *(uint *)(uVar1 * 0x400 + REFG(int, 0x14a09f4)) = REFG(undefined4, 0x14a09e8);
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
    REFG(undefined4, 0x14a09e8) = uVar1;
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Instance::QuadParticleInstance::vf0 */
uint F_009e1470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9e1470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[34])REFP(0x10de2ec));
  if (*(int *)(this + 0x2f0) != 0) {
    uVar1 = (uint)(*(int *)(this + 0x2f0) - REFG(int, 0x14a09f4)) >> 10;
    *(uint *)(uVar1 * 0x400 + REFG(int, 0x14a09f4)) = REFG(undefined4, 0x14a09e8);
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
    REFG(undefined4, 0x14a09e8) = uVar1;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[34])REFP(0x10ddf84));
  F_0097ee40(this);
  if ((param_1 & 1) != 0) {
    uVar1 = (uint)((int)this - REFG(int, 0x14a09f4)) >> 10;
    *(uint *)(uVar1 * 0x400 + REFG(int, 0x14a09f4)) = REFG(undefined4, 0x14a09e8);
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
    REFG(undefined4, 0x14a09e8) = uVar1;
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Instance::DecalParticleInstance::vf0 */
uint F_009e14f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9e14f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[34])REFP(0x10de37c));
  if (*(int *)(this + 0x2f0) != 0) {
    uVar1 = (uint)(*(int *)(this + 0x2f0) - REFG(int, 0x14a09f4)) >> 10;
    *(uint *)(uVar1 * 0x400 + REFG(int, 0x14a09f4)) = REFG(undefined4, 0x14a09e8);
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
    REFG(undefined4, 0x14a09e8) = uVar1;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[34])REFP(0x10ddf84));
  F_0097ee40(this);
  if ((param_1 & 1) != 0) {
    uVar1 = (uint)((int)this - REFG(int, 0x14a09f4)) >> 10;
    *(uint *)(uVar1 * 0x400 + REFG(int, 0x14a09f4)) = REFG(undefined4, 0x14a09e8);
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
    REFG(undefined4, 0x14a09e8) = uVar1;
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Instance::DecalRingParticleInstance::vf0 */
uint F_009e1570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9e1570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[34])REFP(0x10de40c));
  if (*(int *)(this + 0x2f0) != 0) {
    uVar1 = (uint)(*(int *)(this + 0x2f0) - REFG(int, 0x14a09f4)) >> 10;
    *(uint *)(uVar1 * 0x400 + REFG(int, 0x14a09f4)) = REFG(undefined4, 0x14a09e8);
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
    REFG(undefined4, 0x14a09e8) = uVar1;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[34])REFP(0x10ddf84));
  F_0097ee40(this);
  if ((param_1 & 1) != 0) {
    uVar1 = (uint)((int)this - REFG(int, 0x14a09f4)) >> 10;
    *(uint *)(uVar1 * 0x400 + REFG(int, 0x14a09f4)) = REFG(undefined4, 0x14a09e8);
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
    REFG(undefined4, 0x14a09e8) = uVar1;
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Instance::DiscParticleInstance::vf0 */
uint F_009e15f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9e15f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[34])REFP(0x10de49c));
  if (*(int *)(this + 0x304) != 0) {
    uVar1 = (uint)(*(int *)(this + 0x304) - REFG(int, 0x14a09f4)) >> 10;
    *(uint *)(uVar1 * 0x400 + REFG(int, 0x14a09f4)) = REFG(undefined4, 0x14a09e8);
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
    REFG(undefined4, 0x14a09e8) = uVar1;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[34])REFP(0x10ddf84));
  F_0097ee40(this);
  if ((param_1 & 1) != 0) {
    uVar1 = (uint)((int)this - REFG(int, 0x14a09f4)) >> 10;
    *(uint *)(uVar1 * 0x400 + REFG(int, 0x14a09f4)) = REFG(undefined4, 0x14a09e8);
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
    REFG(undefined4, 0x14a09e8) = uVar1;
  }
  return (uint)this;
}

/* ref: Apricot::IVertexLayout::vf0 */
uint F_009e16a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9e16a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10de554));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_009e16d0 */
uint F_009e16d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9e16d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10de600));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[1])REFP(0x10de730));
  *(int * PTR32 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = 1;
  if (param_1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10dee84));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x10dee7c));
  return (uint)this;
}

/* ref: FUN_009e1740 */
uint F_009e1740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9e1740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_009e17c0((undefined *)((int)this + -4),param_1);
  return uVar1;
}

/* ref: FUN_009e1750 */
unsigned int F_009e1750(unsigned int gen_a0)
{
  GEN_ENTER(0x9e1750u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10dee84));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x10dee7c));
  piVar1 = *(int * PTR32 *)((int)this + 8);
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[1])REFP(0x10de730));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x10de5f8));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10de554));
  return 0;
}

/* ref: Apricot::VertexBuffer::vf1 */
uint F_009e1790(unsigned int gen_a0)
{
  GEN_ENTER(0x9e1790u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pVVar1;
  uint uVar2;
  
  pVVar1 = this + 0xc;
  *(int *)pVVar1 = *(int *)pVVar1 + -1;
  uVar2 = *(uint *)(this + 0xc);
  if (*(int *)pVVar1 == 0) {
    (*((code *)GEN_TOP(**(undefined4 * PTR32 *)(this + 4))))(this + 4,1);
  }
  return uVar2;
}

/* ref: Apricot::VertexBuffer::vf2 */
uint F_009e17b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9e17b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = *(int *)(in_ecx + 0xc) + 1;
  *(uint *)(in_ecx + 0xc) = uVar1;
  return uVar1;
}

/* ref: Apricot::VertexBuffer::vf0 */
uint F_009e17c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9e17c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10dee84));
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x10dee7c));
  piVar1 = *(int * PTR32 *)(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x10de730));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x10de5f8));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10de554));
  if (((param_1 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(this);
  }
  return (uint)this;
}

/* ref: FUN_009e1820 */
uint F_009e1820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9e1820u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10de610));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[1])REFP(0x10de738));
  *(int * PTR32 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = 1;
  if (param_1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10dee9c));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x10dee94));
  return (uint)this;
}

/* ref: FUN_009e1890 */
uint F_009e1890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9e1890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_009e1910((undefined *)((int)this + -4),param_1);
  return uVar1;
}

/* ref: FUN_009e18a0 */
unsigned int F_009e18a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9e18a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10dee9c));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x10dee94));
  piVar1 = *(int * PTR32 *)((int)this + 8);
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[1])REFP(0x10de738));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x10de5f8));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10de554));
  return 0;
}

/* ref: Apricot::IndexBuffer::vf1 */
uint F_009e18e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9e18e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pIVar1;
  uint uVar2;
  
  pIVar1 = this + 0xc;
  *(int *)pIVar1 = *(int *)pIVar1 + -1;
  uVar2 = *(uint *)(this + 0xc);
  if (*(int *)pIVar1 == 0) {
    (*((code *)GEN_TOP(**(undefined4 * PTR32 *)(this + 4))))(this + 4,1);
  }
  return uVar2;
}

/* ref: Apricot::IndexBuffer::vf2 */
uint F_009e1900(unsigned int gen_a0)
{
  GEN_ENTER(0x9e1900u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = *(int *)(in_ecx + 0xc) + 1;
  *(uint *)(in_ecx + 0xc) = uVar1;
  return uVar1;
}

/* ref: Apricot::IndexBuffer::vf0 */
uint F_009e1910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9e1910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10dee9c));
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x10dee94));
  piVar1 = *(int * PTR32 *)(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x10de738));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x10de5f8));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10de554));
  if (((param_1 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(this);
  }
  return (uint)this;
}

/* ref: FUN_009e1970 */
uint F_009e1970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9e1970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10de620));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[1])REFP(0x10de74c));
  *(int * PTR32 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = 1;
  if (param_1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10deeb4));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x10deeac));
  return (uint)this;
}

