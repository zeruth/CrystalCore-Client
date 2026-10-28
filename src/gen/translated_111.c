#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00a30c60 */
GEN_FRAME uint GEN_THISCALL F_00a30c60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa30c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char cVar1;
  char * pcVar2;
  
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)this = 0;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  F_00a2f470(this GEN_EDX_FWD,param_1,(int)pcVar2 - (int)(param_1 + 1));
  return (uint)this;
}

/* ref: FUN_00a30ca0 */
GEN_FRAME uint GEN_THISCALL F_00a30ca0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa30ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a2ec30(this GEN_EDX_FWD,param_1,0,0xffffffff);
  return uVar1;
}

/* ref: FUN_00a30cc0 */
GEN_FRAME uint GEN_THISCALL F_00a30cc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa30cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char cVar1;
  char * pcVar2;
  uint uVar3;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = F_00a2f350(this GEN_EDX_FWD,param_1,(int)pcVar2 - (int)(param_1 + 1));
  return uVar3;
}

/* ref: FUN_00a30cf0 */
GEN_FRAME uint GEN_THISCALL F_00a30cf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa30cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  undefined * pvVar3;
  
  pvVar3 = this;
  if (0xf < *(uint *)((int)this + 0x14)) {
    pvVar3 = *(undefined * PTR32 *)this;
  }
  iVar1 = *(int *)((int)this + 0x10) + (int)pvVar3;
  pvVar3 = this;
  if (0xf < *(uint *)((int)this + 0x14)) {
    pvVar3 = *(undefined * PTR32 *)this;
  }
  if (iVar1 != 0) {
    uVar2 = F_00a2f570(this GEN_EDX_FWD,iVar1 - (int)pvVar3,1,param_1);
    return uVar2;
  }
  uVar2 = F_00a2f570(this GEN_EDX_ARG,0,1,param_1);
  return uVar2;
}

/* ref: FUN_00a30d40 */
GEN_FRAME uint GEN_THISCALL F_00a30d40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa30d40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  F_00a2edd0(param_1 GEN_EDX_FWD,this,param_2,param_3);
  return (uint)param_1;
}

/* ref: FUN_00a30d70 */
GEN_FRAME uint GEN_THISCALL F_00a30d70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa30d70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  uint uVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  uVar1 = F_00a2f670(this GEN_EDX_FWD,param_2);
  if (uVar1 != *(uint *)((int)this + 4)) {
    puVar2 = (undefined4 *)(uVar1 + 0xc);
    if (0xf < *(uint *)(uVar1 + 0x20)) {
      puVar2 = (undefined4 *)*puVar2;
    }
    uVar3 = F_00a2c090(param_2 GEN_EDX_ARG,0,*(undefined4 *)((int)param_2 + 0x10),puVar2,
                         *(undefined4 *)(uVar1 + 0x1c));
    if (-1 < (int)uVar3) {
      *param_1 = uVar1;
      return (uint)param_1;
    }
  }
  *param_1 = *(uint *)((int)this + 4);
  return (uint)param_1;
}

/* ref: FUN_00a30de0 */
GEN_FRAME uint GEN_THISCALL F_00a30de0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa30de0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)this = 0;
  F_00a2edd0(this GEN_EDX_FWD,param_1,0,0xffffffff);
  *(undefined4 *)((int)this + 0x30) = 0xf;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined1 *)((int)this + 0x1c) = 0;
  F_00a2edd0((undefined1 *)((int)this + 0x1c) GEN_EDX_ARG,param_2,0,0xffffffff);
  return (uint)this;
}

/* ref: FUN_00a30e30 */
GEN_NOFRAME uint GEN_THISCALL F_00a30e30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa30e30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00a30120(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar1 = *(uint *)((int)this + 4);
  *(uint *)(uVar1 + 8) = uVar1;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00a30e60 */
GEN_FRAME uint GEN_THISCALL F_00a30e60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa30e60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if (this != param_1) {
    if (0xf < *(uint *)((int)this + 0x14)) {
      F_00429760(*(undefined4 *)this,*(uint *)((int)this + 0x14) + 1,0x2c4);
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

/* ref: FUN_00a30ef0 */
GEN_FRAME uint GEN_THISCALL F_00a30ef0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa30ef0u, gen_a0, gen_a1, 0u, 0u);
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
    puVar3 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,0x2c4);
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
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0x2c4);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_00a30fa0 */
GEN_FRAME uint GEN_THISCALL F_00a30fa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa30fa0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00a30120(this GEN_EDX_FWD,piVar2[1]);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x65) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x65) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x65);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x65);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x65);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x65);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_00a30490(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00a31060 */
GEN_NOFRAME uint GEN_THISCALL F_00a31060(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa31060u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00a306f0(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar1 = *(uint *)((int)this + 4);
  *(uint *)(uVar1 + 8) = uVar1;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00a31090 */
GEN_FRAME uint GEN_THISCALL F_00a31090(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa31090u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar1 = (undefined4 *)F_004296a0(0xac,0,0x2c4);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 0x2a) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    F_0042cbc0(puVar1 + 3 GEN_EDX_ARG,param_2);
    puVar3 = (undefined4 *)(param_2 + 0x54);
    puVar4 = puVar1 + 0x18;
    for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 - 1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  F_00a307a0(this GEN_EDX_ARG,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_00a31110 */
GEN_FRAME uint GEN_THISCALL F_00a31110(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa31110u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x68,0,0x2c4);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 0x19) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    F_0042cbc0(puVar1 + 3 GEN_EDX_ARG,param_2);
    puVar1[0x18] = *(undefined4 *)(param_2 + 0x54);
  }
  F_00a308e0(this GEN_EDX_ARG,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_00a31180 */
GEN_FRAME uint F_00a31180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa31180u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  undefined * this;
  
  this = param_3;
  for (iVar1 = param_1; iVar1 != param_2; iVar1 = iVar1 + 0x1c) {
    F_00a2edd0(this GEN_EDX_ARG,iVar1,0,0xffffffff);
    this = (undefined *)((int)this + 0x1c);
  }
  return (uint)this;
}

/* ref: FUN_00a311b0 */
GEN_FRAME unsigned int F_00a311b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa311b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined1 *)0x0) {
    *(undefined4 *)(param_2 + 0x14) = 0xf;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *param_2 = 0;
    F_00a2edd0(param_2 GEN_EDX_ARG,param_3,0,0xffffffff);
  }
  return;
}

/* ref: FUN_00a311e0 */
GEN_FRAME unsigned int F_00a311e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa311e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined1 *)0x0) {
    *(undefined4 *)(param_2 + 0x14) = 0xf;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *param_2 = 0;
    F_00a2edd0(param_2 GEN_EDX_ARG,param_3,0,0xffffffff);
  }
  return;
}

/* ref: FUN_00a31210 */
GEN_FRAME unsigned int GEN_STDCALL F_00a31210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa31210u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  undefined1 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined1 *)0x0) {
        *puVar1 = puVar1[(int)param_1 - (int)param_3];
      }
      puVar1 = puVar1 + 1;
    } while (puVar1 + ((int)param_1 - (int)param_3) != param_2);
  }
  return 0;
}

/* ref: FUN_00a31240 */
GEN_FRAME unsigned int GEN_STDCALL F_00a31240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa31240u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00a31270 */
GEN_FRAME uint GEN_STDCALL F_00a31270(unsigned int gen_a0)
{
  GEN_ENTER(0xa31270u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00a2e950(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00a31280 */
GEN_FRAME uint F_00a31280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa31280u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  ulonglong uVar4;
  
  puVar2 = param_1;
  if (param_1 != param_2) {
    puVar3 = param_1 + 5;
    do {
      puVar2 = (undefined4 *)*puVar3;
      if ((undefined4 *)0xf < puVar2) {
        uVar4 = F_00429760(puVar3[-5],(int)puVar2 + 1,0x2c4);
        puVar2 = (undefined4 *)uVar4;
      }
      *puVar3 = 0xf;
      puVar3[-1] = 0;
      *(undefined1 *)(puVar3 - 5) = 0;
      puVar1 = puVar3 + 2;
      puVar3 = puVar3 + 7;
    } while (puVar1 != param_2);
  }
  return (uint)puVar2;
}

/* ref: FUN_00a312d0 */
GEN_FRAME uint F_00a312d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa312d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined1 * this;
  int iVar1;
  
  this = param_3;
  iVar1 = param_1;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (this != (undefined1 *)0x0) {
      *(undefined4 *)(this + 0x14) = 0xf;
      *(undefined4 *)(this + 0x10) = 0;
      *this = 0;
      F_00a2edd0(this GEN_EDX_ARG,iVar1,0,0xffffffff);
    }
    iVar1 = iVar1 + 0x1c;
    this = this + 0x1c;
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00a31320 */
GEN_FRAME uint F_00a31320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa31320u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined1 * this;
  int iVar1;
  
  this = param_3;
  iVar1 = param_1;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (this != (undefined1 *)0x0) {
      *(undefined4 *)(this + 0x14) = 0xf;
      *(undefined4 *)(this + 0x10) = 0;
      *this = 0;
      F_00a2edd0(this GEN_EDX_ARG,iVar1,0,0xffffffff);
    }
    iVar1 = iVar1 + 0x1c;
    this = this + 0x1c;
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00a31370 */
GEN_FRAME unsigned int GEN_STDCALL F_00a31370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa31370u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00a313a0 */
GEN_FRAME uint GEN_THISCALL F_00a313a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa313a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)this = 0;
  F_00a2edd0(this GEN_EDX_FWD,param_1,0,0xffffffff);
  *(undefined4 *)((int)this + 0x30) = 0xf;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined1 *)((int)this + 0x1c) = 0;
  F_00a2edd0((undefined1 *)((int)this + 0x1c) GEN_EDX_ARG,param_1 + 0x1c,0,0xffffffff);
  return (uint)this;
}

/* ref: FUN_00a313f0 */
GEN_FRAME uint F_00a313f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa313f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined1 * this;
  
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (this != (undefined1 *)0x0) {
      *(undefined4 *)(this + 0x14) = 0xf;
      *(undefined4 *)(this + 0x10) = 0;
      *this = 0;
      F_00a2edd0(this GEN_EDX_ARG,param_1,0,0xffffffff);
    }
    param_1 = param_1 + 0x1c;
    this = this + 0x1c;
  } while (param_1 != param_2);
  return (uint)this;
}

/* ref: FUN_00a31440 */
GEN_FRAME uint GEN_THISCALL F_00a31440(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa31440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)this = 0;
  F_00a30e60(this GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: FUN_00a31470 */
GEN_FRAME uint GEN_THISCALL F_00a31470(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa31470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a30e60(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00a31480 */
GEN_FRAME uint GEN_THISCALL F_00a31480(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa31480u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_00a30ef0(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00a30ef0(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00a314f0 */
GEN_FRAME uint GEN_THISCALL F_00a314f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa314f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00a30fa0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00a31510 */
GEN_FRAME uint GEN_THISCALL F_00a31510(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa31510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined1 * puVar3;
  undefined1 * puVar4;
  undefined1 * puVar5;
  undefined1 * puVar6;
  
  puVar5 = param_1;
  if (((undefined1 *)GEN_TOP((*(int *)((int)this + 8) - *(int *)this))) < param_1) {
    puVar3 = (undefined1 *)F_004296a0(param_1,0,0x2c4);
    puVar5 = *(undefined1 * PTR32 *)((int)this + 4);
    puVar6 = puVar3;
    for (puVar4 = *(undefined1 * PTR32 *)this; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      if (puVar6 != (undefined1 *)0x0) {
        *puVar6 = *puVar4;
      }
      puVar6 = puVar6 + 1;
    }
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,*(int *)((int)this + 8) - iVar1,0x2c4);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined1 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1);
    *(undefined1 * PTR32 *)this = puVar3;
    *(undefined1 * PTR32 *)((int)this + 8) = puVar5;
  }
  return (uint)puVar5;
}

/* ref: FUN_00a315a0 */
GEN_FRAME uint GEN_THISCALL F_00a315a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa315a0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00a306f0(this GEN_EDX_FWD,piVar2[1]);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0xa9) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0xa9) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0xa9);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0xa9);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0xa9);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0xa9);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_00a30190(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00a31670 */
GEN_FRAME uint GEN_THISCALL F_00a31670(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa31670u, gen_a0, gen_a1, 0u, 0u);
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
    puVar3 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,0x2c4);
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
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0x2c4);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_00a31720 */
GEN_FRAME uint F_00a31720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa31720u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00a31280(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_00a31740 */
GEN_FRAME uint F_00a31740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa31740u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a2e950(param_2 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00a31750 */
GEN_FRAME uint GEN_THISCALL F_00a31750(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa31750u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  int * piVar5;
  int * piVar6;
  
  if (0xfffffffd < *(uint *)((int)this + 8)) {
    F_00a2e950(param_4 + 3 GEN_EDX_FWD);
    F_00429760(param_4,0x48,0x2c4);
                    
    F_00c4579a("map/set<T> too long");
  }
  *(uint *)((int)this + 8) = *(uint *)((int)this + 8) + 1;
  param_4[1] = (int)param_3;
  if (param_3 == *(undefined4 * PTR32 *)((int)this + 4)) {
    (*(undefined4 * PTR32 *)((int)this + 4))[1] = param_4;
    **(undefined4 * PTR32 *)((int)this + 4) = param_4;
    iVar4 = *(int *)((int)this + 4);
  }
  else {
    if ((char)param_2 != '\0') {
      *param_3 = param_4;
      if (param_3 == ((undefined4 *)GEN_TOP(**(int * PTR32 *)((int)this + 4)))) {
        **(int * PTR32 *)((int)this + 4) = (int)param_4;
      }
      goto LAB_00a317c6;
    }
    param_3[2] = param_4;
    iVar4 = *(int *)((int)this + 4);
    if (param_3 != *(undefined4 * PTR32 *)(iVar4 + 8)) goto LAB_00a317c6;
  }
  *(int * PTR32 *)(iVar4 + 8) = param_4;
LAB_00a317c6: ;
  cVar1 = *(char *)(param_4[1] + 0x44);
  piVar3 = param_4;
  do {
    if (cVar1 != '\0') {
      iVar4 = *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      *param_1 = param_4;
      *(undefined1 *)(iVar4 + 0x44) = 1;
      return (uint)param_1;
    }
    piVar5 = (int *)piVar3[1];
    piVar6 = (int *)piVar5[1];
    if (piVar5 == (int *)*piVar6) {
      iVar4 = piVar6[2];
      if (*(char *)(iVar4 + 0x44) == '\0') {
        *(undefined1 *)(piVar5 + 0x11) = 1;
        *(undefined1 *)(iVar4 + 0x44) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar3[1] + 4) + 0x44))) = 0;
        piVar3 = *(int * PTR32 *)(piVar3[1] + 4);
      }
      else {
        if (piVar3 == (int *)piVar5[2]) {
          piVar3 = (int *)piVar5[2];
          piVar5[2] = *piVar3;
          if (*(char *)(*piVar3 + 0x45) == '\0') {
            *(int * PTR32 *)(*piVar3 + 4) = piVar5;
          }
          piVar3[1] = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
            *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar3;
          }
          else {
            piVar6 = (int *)piVar5[1];
            if (piVar5 == (int *)*piVar6) {
              *piVar6 = (int)piVar3;
            }
            else {
              piVar6[2] = (int)piVar3;
            }
          }
          *piVar3 = (int)piVar5;
          piVar5[1] = (int)piVar3;
          piVar3 = piVar5;
        }
        *(undefined1 *)(piVar3[1] + 0x44) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar3[1] + 4) + 0x44))) = 0;
        piVar5 = *(int * PTR32 *)(piVar3[1] + 4);
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
          piVar2 = (int *)piVar5[1];
          if (piVar5 == (int *)piVar2[2]) {
            piVar2[2] = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
          else {
            *piVar2 = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
        }
LAB_00a31951: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar4 = *piVar6;
      if (*(char *)(iVar4 + 0x44) != '\0') {
        if (piVar3 == (int *)*piVar5) {
          iVar4 = *piVar5;
          *piVar5 = *(int *)(iVar4 + 8);
          if (*((char *)GEN_TOP((*(int *)(iVar4 + 8) + 0x45))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*(int *)(iVar4 + 8) + 4))) = piVar5;
          }
          *(int *)(iVar4 + 4) = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
            *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = iVar4;
          }
          else {
            piVar3 = (int *)piVar5[1];
            if (piVar5 == (int *)piVar3[2]) {
              piVar3[2] = iVar4;
            }
            else {
              *piVar3 = iVar4;
            }
          }
          *(int * PTR32 *)(iVar4 + 8) = piVar5;
          piVar5[1] = iVar4;
          piVar3 = piVar5;
        }
        *(undefined1 *)(piVar3[1] + 0x44) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar3[1] + 4) + 0x44))) = 0;
        piVar5 = *(int * PTR32 *)(piVar3[1] + 4);
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
          piVar2 = (int *)piVar5[1];
          if (piVar5 == (int *)*piVar2) {
            *piVar2 = (int)piVar6;
          }
          else {
            piVar2[2] = (int)piVar6;
          }
        }
        *piVar6 = (int)piVar5;
        goto LAB_00a31951;
      }
      *(undefined1 *)(piVar5 + 0x11) = 1;
      *(undefined1 *)(iVar4 + 0x44) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar3[1] + 4) + 0x44))) = 0;
      piVar3 = *(int * PTR32 *)(piVar3[1] + 4);
    }
    cVar1 = *(char *)(piVar3[1] + 0x44);
  } while( true );
}

/* ref: FUN_00a31980 */
GEN_FRAME uint F_00a31980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa31980u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00a312d0(param_1,param_2,param_3,param_4,in_ECX);
  return uVar1;
}

/* ref: FUN_00a319b0 */
GEN_FRAME uint F_00a319b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa319b0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  undefined * this;
  
  iVar1 = param_1;
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    F_00a30e60(this GEN_EDX_ARG,iVar1);
    iVar1 = iVar1 + 0x1c;
    this = (undefined *)((int)this + 0x1c);
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00a319f0 */
GEN_FRAME uint F_00a319f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa319f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00a31320(param_1,param_2,param_3,param_4,0,in_ECX);
  return uVar1;
}

/* ref: FUN_00a31a20 */
GEN_FRAME uint GEN_THISCALL F_00a31a20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa31a20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  iVar3 = param_1[1];
  iVar1 = *param_1;
  *(undefined4 *)this = 0;
  iVar3 = iVar3 - iVar1 >> 2;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (iVar3 != 0) {
    puVar4 = (undefined4 *)F_004296a0(iVar3 * 4,0,0x2c4);
    *(undefined4 * PTR32 *)this = puVar4;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar4;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar4 + iVar3;
    puVar2 = (undefined4 *)param_1[1];
    for (puVar5 = (undefined4 *)*param_1; puVar5 != puVar2; puVar5 = puVar5 + 1) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = *puVar5;
      }
      puVar4 = puVar4 + 1;
    }
    *(undefined4 * PTR32 *)((int)this + 4) = puVar4;
  }
  return (uint)this;
}

/* ref: FUN_00a31aa0 */
GEN_FRAME unsigned int GEN_STDCALL F_00a31aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa31aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined1 *)0x0) {
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    F_00a2edd0(param_1 GEN_EDX_ARG,param_2,0,0xffffffff);
    *(undefined4 *)(param_1 + 0x30) = 0xf;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    param_1[0x1c] = 0;
    F_00a2edd0(param_1 + 0x1c GEN_EDX_ARG,param_2 + 0x1c,0,0xffffffff);
  }
  return;
}

/* ref: FUN_00a31b00 */
GEN_FRAME uint F_00a31b00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa31b00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00a313f0(param_1,param_2,param_3,param_4,in_ECX);
  return uVar1;
}

/* ref: FUN_00a31b30 */
GEN_FRAME uint GEN_THISCALL F_00a31b30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa31b30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  
  iVar3 = *(int *)((int)this + 4);
  uVar2 = iVar3 - *(int *)((int)(uintptr_t)this) >> 2;
  if (param_1 < uVar2) {
    iVar1 = *(int *)this + param_1 * 4;
    if (iVar1 != iVar3) {
      uVar2 = F_00c46e20(iVar1,iVar3,0);
      *(int *)((int)this + 4) = iVar1;
      return uVar2;
    }
  }
  else if (uVar2 < param_1) {
    F_00a31480(this GEN_EDX_ARG,param_1 - uVar2);
    puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
    for (iVar3 = param_1 - ((int)puVar4 - *(int *)((int)(uintptr_t)this) >> 2); iVar3 != 0; iVar3 = iVar3 - 1) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0;
      }
      puVar4 = puVar4 + 1;
    }
    uVar2 = *(uint *)((int)this + 4);
    *(uint *)((int)this + 4) = uVar2 + (param_1 - ((int)(uVar2 - *(int *)this) >> 2)) * 4;
  }
  return uVar2;
}

/* ref: FUN_00a31bc0 */
GEN_FRAME uint GEN_THISCALL F_00a31bc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa31bc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00a30fa0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x68,0x2c4);
  return (uint)uVar1;
}

/* ref: FUN_00a31c00 */
GEN_FRAME uint GEN_THISCALL F_00a31c00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa31c00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)this;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)this;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00a31510(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00a31510(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00a31c60 */
GEN_FRAME uint GEN_THISCALL F_00a31c60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa31c60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00a315a0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00a31c80 */
GEN_FRAME uint GEN_THISCALL F_00a31c80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa31c80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00a31280(param_1,param_2,(int)this + 0xc,param_2);
  return uVar1;
}

/* ref: FUN_00a31ca0 */
GEN_FRAME uint GEN_THISCALL F_00a31ca0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa31ca0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    F_00a31280(*(int *)this,*(undefined4 *)((int)this + 4),(int)this + 0xc,this);
    uVar2 = F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x1c) * 0x1c,0x2c4
                        );
    uVar1 = (uint)uVar2;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00a31d10 */
GEN_FRAME uint GEN_THISCALL F_00a31d10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa31d10u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_00a31670(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00a31670(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00a31d80 */
GEN_FRAME uint GEN_THISCALL F_00a31d80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa31d80u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  int * piVar7;
  bool bVar8;
  
  piVar3 = (*(int * PTR32 *)&gen_args[2]);
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x45))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  F_00a2d290(&(*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  piVar7 = (int *)*piVar3;
  if (*(char *)((int)piVar7 + 0x45) == '\0') {
    piVar6 = piVar7;
    if ((*(char *)(piVar3[2] + 0x45) == '\0') && (piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar3)) {
      piVar7[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar3;
      piVar7 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar3[2]) {
        piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar6 + 0x45) == '\0') {
          piVar6[1] = (int)piVar7;
        }
        *piVar7 = (int)piVar6;
        (*(int * PTR32 *)&gen_args[2])[2] = piVar3[2];
        *(int * PTR32 *)(piVar3[2] + 4) = (*(int * PTR32 *)&gen_args[2]);
      }
      if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) == piVar3) {
        *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = (*(int * PTR32 *)&gen_args[2]);
      }
      else {
        puVar1 = (undefined4 *)piVar3[1];
        if ((int *)*puVar1 == piVar3) {
          *puVar1 = (*(int * PTR32 *)&gen_args[2]);
        }
        else {
          puVar1[2] = (*(int * PTR32 *)&gen_args[2]);
        }
      }
      (*(int * PTR32 *)&gen_args[2])[1] = piVar3[1];
      iVar2 = (*(int * PTR32 *)&gen_args[2])[0x11];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 0x11))) = (char)piVar3[0x11];
      *(char *)(piVar3 + 0x11) = (char)iVar2;
      goto LAB_00a31e9f;
    }
  }
  else {
    piVar6 = (int *)piVar3[2];
  }
  piVar7 = (int *)piVar3[1];
  if (*(char *)((int)piVar6 + 0x45) == '\0') {
    piVar6[1] = (int)piVar7;
  }
  if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) == piVar3) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = piVar6;
  }
  else if ((int *)*piVar7 == piVar3) {
    *piVar7 = (int)piVar6;
  }
  else {
    piVar7[2] = (int)piVar6;
  }
  if (((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))))) == piVar3) {
    piVar4 = piVar7;
    if (*(char *)((int)piVar6 + 0x45) == '\0') {
      piVar4 = (int *)F_00a2bb50(piVar6);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar4;
  }
  if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 8))) == piVar3) {
    if (*(char *)((int)piVar6 + 0x45) == '\0') {
      uVar5 = F_00a2bdf0(piVar6);
      *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 8))) = uVar5;
    }
    else {
      *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 8))) = piVar7;
    }
  }
LAB_00a31e9f: ;
  if ((char)piVar3[0x11] == '\x01') {
    if (piVar6 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
      do {
        if ((char)piVar6[0x11] != '\x01') break;
        piVar4 = (int *)*piVar7;
        if (piVar6 == piVar4) {
          piVar4 = (int *)piVar7[2];
          if ((char)piVar4[0x11] == '\0') {
            *(undefined1 *)(piVar4 + 0x11) = 1;
            *(undefined1 *)(piVar7 + 0x11) = 0;
            F_00a2d720((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar7);
            piVar4 = (int *)piVar7[2];
          }
          if (*(char *)((int)piVar4 + 0x45) == '\0') {
            if ((*(char *)(*piVar4 + 0x44) != '\x01') || (*(char *)(piVar4[2] + 0x44) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x44) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x44) = 1;
                *(undefined1 *)(piVar4 + 0x11) = 0;
                F_00a2bd90((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
                piVar4 = (int *)piVar7[2];
              }
              *(char *)(piVar4 + 0x11) = (char)piVar7[0x11];
              *(undefined1 *)(piVar7 + 0x11) = 1;
              *(undefined1 *)(piVar4[2] + 0x44) = 1;
              F_00a2d720((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar7);
              break;
            }
LAB_00a31f65: ;
            *(undefined1 *)(piVar4 + 0x11) = 0;
          }
        }
        else {
          if ((char)piVar4[0x11] == '\0') {
            *(undefined1 *)(piVar4 + 0x11) = 1;
            *(undefined1 *)(piVar7 + 0x11) = 0;
            F_00a2bd90((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar7);
            piVar4 = (int *)*piVar7;
          }
          if (*(char *)((int)piVar4 + 0x45) == '\0') {
            if ((*(char *)(piVar4[2] + 0x44) == '\x01') && (*(char *)(*piVar4 + 0x44) == '\x01'))
            goto LAB_00a31f65;
            if (*(char *)(*piVar4 + 0x44) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x44) = 1;
              *(undefined1 *)(piVar4 + 0x11) = 0;
              F_00a2d720((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
              piVar4 = (int *)*piVar7;
            }
            *(char *)(piVar4 + 0x11) = (char)piVar7[0x11];
            *(undefined1 *)(piVar7 + 0x11) = 1;
            *(undefined1 *)(*piVar4 + 0x44) = 1;
            F_00a2bd90((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar7);
            break;
          }
        }
        bVar8 = piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)));
        piVar6 = piVar7;
        piVar7 = (int *)piVar7[1];
      } while (bVar8);
    }
    *(undefined1 *)(piVar6 + 0x11) = 1;
  }
  if (0xf < (uint)piVar3[0xf]) {
    F_00429760(piVar3[10],piVar3[0xf] + 1,0x2c4);
  }
  piVar3[0xf] = 0xf;
  piVar3[0xe] = 0;
  *(undefined1 *)(piVar3 + 10) = 0;
  if (0xf < (uint)piVar3[8]) {
    F_00429760(piVar3[3],piVar3[8] + 1,0x2c4);
  }
  piVar3[8] = 0xf;
  piVar3[7] = 0;
  *(undefined1 *)(piVar3 + 3) = 0;
  F_00429760(piVar3,0x48,0x2c4);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00a32040 */
GEN_FRAME unsigned int GEN_THISCALL F_00a32040(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa32040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x45);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00a32040(this GEN_EDX_FWD,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    if (0xf < (uint)piVar3[0xf]) {
      F_00429760(piVar3[10],piVar3[0xf] + 1,0x2c4);
    }
    piVar3[0xf] = 0xf;
    piVar3[0xe] = 0;
    *(undefined1 *)(piVar3 + 10) = 0;
    if (0xf < (uint)piVar3[8]) {
      F_00429760(piVar3[3],piVar3[8] + 1,0x2c4);
    }
    piVar3[8] = 0xf;
    piVar3[7] = 0;
    *(undefined1 *)(piVar3 + 3) = 0;
    F_00429760(piVar3,0x48,0x2c4);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x45);
  }
  return;
}

/* ref: FUN_00a320e0 */
GEN_FRAME uint GEN_THISCALL F_00a320e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa320e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00a312d0(param_1,param_2,param_3,(int)this + 0xc,param_3);
  return uVar1;
}

/* ref: FUN_00a32110 */
GEN_FRAME uint F_00a32110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa32110u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  undefined * this;
  
  this = param_3;
  for (iVar1 = param_1; iVar1 != param_2; iVar1 = iVar1 + 0x1c) {
    F_00a30e60(this GEN_EDX_ARG,iVar1);
    this = (undefined *)((int)this + 0x1c);
  }
  return (uint)this;
}

/* ref: FUN_00a32140 */
GEN_FRAME uint GEN_THISCALL F_00a32140(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa32140u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00a31320(param_1,param_2,param_3,(int)this + 0xc,0,param_3);
  return uVar1;
}

/* ref: FUN_00a32170 */
GEN_FRAME uint GEN_THISCALL F_00a32170(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa32170u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint uVar2;
  undefined4 * puVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  uint uVar9;
  int iVar10;
  undefined4 * puVar11;
  bool bVar12;
  undefined4 uVar13;
  
  puVar7 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  bVar12 = true;
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),1);
  if (*(char *)((int)puVar7[1] + 0x45) == '\0') {
    uVar9 = *(uint *)((*(int *)&gen_args[2]) + 0x1c);
    uVar1 = *(uint *)((*(int *)&gen_args[2]) + 0x20);
    puVar11 = (undefined4 *)puVar7[1];
    do {
      puVar7 = puVar11;
      piVar4 = puVar7 + 3;
      if ((char)(*(undefined4 * PTR32 *)&gen_args[3]) == '\0') {
        uVar2 = puVar7[7];
        if (0xf < (uint)puVar7[8]) {
          piVar4 = (int *)*piVar4;
        }
        uVar5 = *(uint *)((*(int *)&gen_args[2]) + 0x1c);
        if (uVar9 < *(uint *)((*(int *)&gen_args[2]) + 0x1c)) {
          uVar5 = uVar9;
        }
        uVar6 = uVar5;
        if (uVar2 <= uVar5) {
          uVar6 = uVar2;
        }
        if (uVar1 < 0x10) {
          iVar10 = (*(int *)&gen_args[2]) + 0xc;
        }
        else {
          iVar10 = *(int *)((*(int *)&gen_args[2]) + 0xc);
        }
        uVar6 = F_0040d320(iVar10,piVar4,uVar6);
        if (uVar6 == 0) {
          if (uVar5 < uVar2) {
            uVar6 = 0xffffffff;
          }
          else {
            uVar6 = (uint)(uVar5 != uVar2);
          }
        }
        bVar12 = (int)uVar6 < 0;
      }
      else {
        if (uVar1 < 0x10) {
          iVar10 = (*(int *)&gen_args[2]) + 0xc;
        }
        else {
          iVar10 = *(int *)((*(int *)&gen_args[2]) + 0xc);
        }
        uVar2 = puVar7[7];
        uVar5 = uVar2;
        if (uVar9 <= uVar2) {
          uVar5 = uVar9;
        }
        if (0xf < (uint)puVar7[8]) {
          piVar4 = (int *)*piVar4;
        }
        uVar5 = F_0040d320(piVar4,iVar10,uVar5);
        if (uVar5 == 0) {
          if (uVar2 < uVar9) {
            bVar12 = false;
            goto LAB_00a3225c;
          }
          uVar5 = (uint)(uVar2 != uVar9);
        }
        bVar12 = -1 < (int)uVar5;
      }
LAB_00a3225c: ;
      (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),bVar12);
      if (bVar12 == false) {
        puVar11 = (undefined4 *)puVar7[2];
      }
      else {
        puVar11 = (undefined4 *)*puVar7;
      }
    } while (*(char *)((int)puVar11 + 0x45) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[3]) = puVar7;
  if (bVar12 != false) {
    if (puVar7 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
      uVar13 = 1;
      goto LAB_00a32291;
    }
    F_00a2c220(&(*(undefined4 * PTR32 *)&gen_args[3]) GEN_EDX_ARG);
  }
  puVar3 = (*(undefined4 * PTR32 *)&gen_args[3]);
  puVar11 = (undefined4 *)((*(int *)&gen_args[2]) + 0xc);
  puVar8 = puVar11;
  if (0xf < *(uint *)((*(int *)&gen_args[2]) + 0x20)) {
    puVar8 = (undefined *)*puVar11;
  }
  uVar9 = F_00a2c090((*(undefined4 * PTR32 *)&gen_args[3]) + 3 GEN_EDX_ARG,0,(*(undefined4 * PTR32 *)&gen_args[3])[7],puVar8,*(undefined4 *)((*(int *)&gen_args[2]) + 0x1c));
  uVar13 = (*(undefined4 *)(gen_frame + 0x8));
  if (-1 < (int)uVar9) {
    F_00a2e950(puVar11 GEN_EDX_ARG);
    F_00429760((*(int *)&gen_args[2]),0x48,0x2c4);
    *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar3;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
LAB_00a32291: ;
  puVar7 = (undefined4 *)F_00a31750((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[3]),uVar13,puVar7,(*(int *)&gen_args[2]));
  *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar7;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00a32320 */
GEN_FRAME unsigned int F_00a32320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa32320u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_2 != (undefined1 *)0x0) {
    *(undefined4 *)(param_2 + 0x14) = 0xf;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *param_2 = 0;
    F_00a2edd0(param_2 GEN_EDX_ARG,param_3,0,0xffffffff);
    *(undefined4 *)(param_2 + 0x30) = 0xf;
    *(undefined4 *)(param_2 + 0x2c) = 0;
    param_2[0x1c] = 0;
    F_00a2edd0(param_2 + 0x1c GEN_EDX_ARG,param_3 + 0x1c,0,0xffffffff);
  }
  return;
}

/* ref: FUN_00a32380 */
GEN_FRAME uint GEN_THISCALL F_00a32380(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa32380u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00a313f0(param_1,param_2,param_3,(int)this + 0xc,param_3);
  return uVar1;
}

/* ref: FUN_00a323b0 */
GEN_FRAME uint GEN_THISCALL F_00a323b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa323b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00a30fa0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x68,0x2c4);
  return (uint)uVar1;
}

/* ref: FUN_00a323f0 */
GEN_FRAME uint GEN_THISCALL F_00a323f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa323f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * puVar1;
  undefined1 * puVar2;
  undefined1 * puVar3;
  
  puVar3 = *(undefined1 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined1 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined1 * PTR32 *)((int)this + 8)) {
      F_00a31c00(this GEN_EDX_FWD,1);
    }
    puVar2 = *(undefined1 * PTR32 *)((int)this + 4);
    puVar3 = (undefined1 *)0x0;
    if (puVar2 != (undefined1 *)0x0) {
      *puVar2 = param_1[*(int *)this - (int)puVar1];
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *(undefined1 * PTR32 *)((int)this + 8)) {
      F_00a31c00(this GEN_EDX_ARG,1);
    }
    puVar3 = *(undefined1 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined1 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar3;
}

/* ref: FUN_00a32450 */
GEN_FRAME uint GEN_THISCALL F_00a32450(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa32450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * puVar1;
  undefined1 * puVar2;
  undefined1 * puVar3;
  
  puVar3 = *(undefined1 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined1 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined1 * PTR32 *)((int)this + 8)) {
      F_00a31c00(this GEN_EDX_FWD,1);
    }
    puVar2 = *(undefined1 * PTR32 *)((int)this + 4);
    puVar3 = (undefined1 *)0x0;
    if (puVar2 != (undefined1 *)0x0) {
      *puVar2 = param_1[*(int *)this - (int)puVar1];
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *(undefined1 * PTR32 *)((int)this + 8)) {
      F_00a31c00(this GEN_EDX_ARG,1);
    }
    puVar3 = *(undefined1 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined1 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar3;
}

/* ref: FUN_00a324b0 */
GEN_FRAME uint GEN_THISCALL F_00a324b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa324b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00a315a0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0xac,0x2c4);
  return (uint)uVar1;
}

/* ref: FUN_00a32500 */
GEN_FRAME uint GEN_THISCALL F_00a32500(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa32500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00a31d10(this GEN_EDX_FWD,1);
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar3 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar1) >> 2) * 4)));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00a31d10(this GEN_EDX_ARG,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_00a325b0 */
GEN_FRAME uint GEN_THISCALL F_00a325b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa325b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  undefined * pvVar1;
  undefined * this_00;
  undefined * pvVar2;
  
  if (param_2 != param_3) {
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    this_00 = param_2;
    for (pvVar2 = param_3; pvVar2 != pvVar1; pvVar2 = (undefined *)((int)pvVar2 + 0x1c)) {
      F_00a30e60(this_00 GEN_EDX_FWD,pvVar2);
      this_00 = (undefined *)((int)this_00 + 0x1c);
    }
    F_00a31280(this_00,*(undefined4 *)((int)this + 4),(int)this + 0xc,param_1);
    *(undefined * PTR32 *)((int)this + 4) = this_00;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00a32620 */
GEN_FRAME uint GEN_THISCALL F_00a32620(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa32620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (*(int *)((int)this + 8) - *(int *)this) / 0x1c;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x1c,0,0x2c4);
    F_00a31320(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3,(int)this + 0xc,0,uVar3);
    iVar1 = *(int *)((int)this + 4);
    iVar2 = *(int *)this;
    if (*(int *)this != 0) {
      F_00a31280(*(int *)this,*(undefined4 *)((int)this + 4),(int)this + 0xc,uVar3);
      F_00429760(*(undefined4 *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x1c) * 0x1c,
                   0x2c4);
    }
    *(uint *)((int)this + 8) = param_1 * 0x1c + uVar3;
    *(uint *)((int)this + 4) = uVar3 + ((iVar1 - iVar2) / 0x1c) * 0x1c;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00a32720 */
GEN_NOFRAME uint GEN_THISCALL F_00a32720(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa32720u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00a32040(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar1 = *(uint *)((int)this + 4);
  *(uint *)(uVar1 + 8) = uVar1;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00a32750 */
GEN_FRAME uint GEN_THISCALL F_00a32750(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa32750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * this_00;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x48,0,0x2c4);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  this_00 = puVar1 + 3;
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 0x11) = 0;
  if (this_00 != (undefined4 *)0x0) {
    puVar1[8] = 0xf;
    puVar1[7] = 0;
    *(undefined1 *)this_00 = 0;
    F_00a2edd0(this_00 GEN_EDX_ARG,param_1,0,0xffffffff);
    puVar1[0xf] = 0xf;
    puVar1[0xe] = 0;
    *(undefined1 *)(puVar1 + 10) = 0;
    F_00a2edd0(puVar1 + 10 GEN_EDX_ARG,param_1 + 0x1c,0,0xffffffff);
  }
  return (uint)puVar1;
}

/* ref: FUN_00a327e0 */
GEN_FRAME uint GEN_THISCALL F_00a327e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa327e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  iVar1 = (param_1[1] - *param_1) / 0x1c;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (iVar1 != 0) {
    iVar1 = iVar1 * 0x1c;
    uVar2 = F_004296a0(iVar1,0,0x2c4);
    *(uint *)this = uVar2;
    *(uint *)((int)this + 4) = uVar2;
    *(uint *)((int)this + 8) = iVar1 + uVar2;
    uVar2 = F_00a313f0(*param_1,param_1[1],uVar2,(int)this + 0xc,param_1);
    *(uint *)((int)this + 4) = uVar2;
  }
  return (uint)this;
}

/* ref: FUN_00a32870 */
GEN_FRAME uint GEN_THISCALL F_00a32870(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa32870u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00a315a0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0xac,0x2c4);
  return (uint)uVar1;
}

/* ref: FUN_00a328d0 */
GEN_NOFRAME uint GEN_THISCALL F_00a328d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa328d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 0x20);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0x28) - iVar1 >> 2) * 4,0x2c4);
  }
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  F_00a31ca0((undefined *)((int)this + 0x10) GEN_EDX_ARG);
  uVar2 = F_00a31ca0(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00a32920 */
GEN_NOFRAME uint GEN_THISCALL F_00a32920(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa32920u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)((int)this + 0x3c);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0x44) - iVar1 >> 2) * 4,0x2c4);
  }
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  F_00a31ca0((undefined *)((int)this + 0x2c) GEN_EDX_ARG);
  F_00a31ca0((undefined *)((int)this + 0x1c) GEN_EDX_ARG);
  uVar2 = *(uint *)((int)this + 0x14);
  if (0xf < uVar2) {
    uVar3 = F_00429760(*(undefined4 *)this,uVar2 + 1,0x2c4);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined1 *)this = 0;
  return uVar2;
}

/* ref: FUN_00a32990 */
GEN_FRAME uint GEN_THISCALL F_00a32990(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa32990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  undefined4 * puVar4;
  int * piVar5;
  
  if ((param_1 & 2) == 0) {
    F_00a31ca0(this GEN_EDX_FWD);
    if ((param_1 & 1) != 0) {
      F_00406ad0(this);
    }
    return (uint)this;
  }
  iVar1 = *(int *)((int)this - 4);
  piVar3 = (int *)(iVar1 * 0x10 + (int)this);
  while (iVar1 = iVar1 - 1, -1 < iVar1) {
    puVar4 = (undefined4 *)piVar3[-4];
    piVar5 = piVar3 - 4;
    if (puVar4 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)piVar3[-3];
      for (; puVar4 != puVar2; puVar4 = puVar4 + 7) {
        if (0xf < (uint)puVar4[5]) {
          F_00429760(*puVar4,puVar4[5] + 1,0x2c4);
        }
        puVar4[5] = 0xf;
        puVar4[4] = 0;
        *(undefined1 *)puVar4 = 0;
      }
      F_00429760(*piVar5,((piVar3[-2] - *piVar5) / 0x1c) * 0x1c,0x2c4);
    }
    *piVar5 = 0;
    piVar3[-3] = 0;
    piVar3[-2] = 0;
    piVar3 = piVar5;
  }
  if ((param_1 & 1) != 0) {
    F_00406b30((int)this - 4U);
  }
  return (int)this - 4U;
}

/* ref: FUN_00a32a90 */
GEN_FRAME uint GEN_THISCALL F_00a32a90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa32a90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e3f48));
  F_00a22980(this GEN_EDX_FWD);
  F_00a30fa0((undefined *)((int)this + 0xc) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x10),
               *(undefined4 * PTR32 *)((int)this + 0x10));
  F_00429760(*(undefined4 *)((int)this + 0x10),0x68,0x2c4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1090598));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a32b40 */
GEN_FRAME uint GEN_THISCALL F_00a32b40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa32b40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00a325b0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)this,*(undefined4 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00a32b60 */
GEN_FRAME uint GEN_THISCALL F_00a32b60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa32b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x1c;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x1c;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00a32620(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00a32620(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00a32bf0 */
GEN_FRAME uint GEN_THISCALL F_00a32bf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa32bf0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00a32040(this GEN_EDX_FWD,piVar2[1]);
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
    F_00a31d80(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00a32cb0 */
GEN_FRAME uint GEN_THISCALL F_00a32cb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa32cb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_00a32750(this GEN_EDX_FWD,param_2);
  F_00a32170(this GEN_EDX_ARG,param_1,uVar1,uVar2);
  return param_1;
}

/* ref: FUN_00a32ce0 */
GEN_FRAME uint GEN_THISCALL F_00a32ce0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa32ce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_00a327e0(this GEN_EDX_FWD,param_1);
  F_00a327e0((undefined *)((int)this + 0x10) GEN_EDX_ARG,param_1 + 0x10);
  F_00a31a20((undefined *)((int)this + 0x20) GEN_EDX_ARG,param_1 + 0x20);
  return (uint)this;
}

/* ref: FUN_00a32d10 */
GEN_FRAME uint GEN_THISCALL F_00a32d10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa32d10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)this = 0;
  F_00a2edd0(this GEN_EDX_FWD,param_1,0,0xffffffff);
  F_00a327e0((undefined *)((int)this + 0x1c) GEN_EDX_ARG,param_1 + 0x1c);
  F_00a327e0((undefined *)((int)this + 0x2c) GEN_EDX_ARG,param_1 + 0x2c);
  F_00a31a20((undefined *)((int)this + 0x3c) GEN_EDX_ARG,param_1 + 0x3c);
  return (uint)this;
}

/* ref: FUN_00a32d70 */
GEN_FRAME uint GEN_THISCALL F_00a32d70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa32d70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e3fc4));
  F_0042c880((undefined *)((int)this + 0x18) GEN_EDX_FWD);
  F_00a315a0((undefined *)((int)this + 4) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 8),
               *(undefined4 * PTR32 *)((int)this + 8));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 8),0xac,0x2c4);
  return (uint)uVar1;
}

/* ref: Component::Text::MacroEncoder::vf0 */
GEN_FRAME uint GEN_THISCALL F_00a32dc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa32dc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e3fc4));
  F_0042c880(this + 0x18 GEN_EDX_FWD);
  F_00a315a0(this + 4 GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)(this + 8),*(undefined4 * PTR32 *)(this + 8));
  F_00429760(*(undefined4 *)(this + 8),0xac,0x2c4);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a32e30 */
GEN_FRAME uint GEN_THISCALL F_00a32e30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa32e30u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  byte bVar6;
  uint uVar7;
  
  piVar5 = (*(int * PTR32 *)&gen_args[1]);
  if ((*(undefined * PTR32 *)&gen_args[0]) != (*(int * PTR32 *)&gen_args[1])) {
    uVar7 = ((*(int * PTR32 *)&gen_args[1])[1] - *(*(int * PTR32 *)&gen_args[1])) / 0x1c;
    if (uVar7 == 0) {
      (*(int * PTR32 *)&gen_args[1]) = (int *)uVar7;
      F_00a325b0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(int * PTR32 *)&gen_args[1]),*(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))));
      return (uint)(*(undefined * PTR32 *)&gen_args[0]);
    }
    iVar2 = *(int *)(*(undefined * PTR32 *)&gen_args[0]);
    uVar4 = (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) - iVar2) / 0x1c;
    if (uVar7 <= uVar4) {
      piVar1 = (*(int * PTR32 *)&gen_args[1]) + 1;
      iVar3 = *(*(int * PTR32 *)&gen_args[1]);
      (*(int * PTR32 *)&gen_args[1]) = (int *)uVar7;
      uVar7 = F_00a31180(iVar3,*piVar1,iVar2);
      F_00a31280(uVar7,*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),(int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc,(*(int * PTR32 *)&gen_args[1]));
      *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = *(int *)(*(undefined * PTR32 *)&gen_args[0]) + ((piVar5[1] - *piVar5) / 0x1c) * 0x1c;
      return (uint)(*(undefined * PTR32 *)&gen_args[0]);
    }
    if (uVar7 <= (uint)((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) - iVar2) / 0x1c)) {
      iVar3 = *(*(int * PTR32 *)&gen_args[1]);
      (*(int * PTR32 *)&gen_args[1]) = (int *)(iVar3 + uVar4 * 0x1c);
      F_00a31180(iVar3,(*(int * PTR32 *)&gen_args[1]),iVar2);
      uVar7 = F_00a312d0((*(int * PTR32 *)&gen_args[1]),piVar5[1],*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),(int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc,(*(int * PTR32 *)&gen_args[1]))
      ;
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = uVar7;
      return (uint)(*(undefined * PTR32 *)&gen_args[0]);
    }
    (*(int * PTR32 *)&gen_args[1]) = (int *)uVar7;
    if (iVar2 != 0) {
      F_00a31c80((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,iVar2,*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))));
      F_00a2b3f0(*(int *)(*(undefined * PTR32 *)&gen_args[0]),(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) - *(int *)(*(undefined * PTR32 *)&gen_args[0])) / 0x1c);
    }
    bVar6 = F_00a2e0b0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(piVar5[1] - *piVar5) / 0x1c);
    if (bVar6 != 0) {
      uVar7 = F_00a320e0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,*piVar5,piVar5[1],*(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]));
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = uVar7;
    }
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00a32fd0 */
GEN_FRAME unsigned int GEN_THISCALL F_00a32fd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa32fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  undefined1 * this_00;
  
  uVar1 = *(uint *)((int)this + 4);
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00a32b60(this GEN_EDX_FWD,1);
    }
    uVar1 = *(int *)this + ((int)(param_1 - uVar2) / 0x1c) * 0x1c;
    this_00 = *(undefined1 * PTR32 *)((int)this + 4);
  }
  else {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00a32b60(this GEN_EDX_ARG,1);
    }
    this_00 = *(undefined1 * PTR32 *)((int)this + 4);
    uVar1 = param_1;
  }
  if (this_00 != (undefined1 *)0x0) {
    *(undefined4 *)(this_00 + 0x14) = 0xf;
    *(undefined4 *)(this_00 + 0x10) = 0;
    *this_00 = 0;
    F_00a2edd0(this_00 GEN_EDX_ARG,uVar1,0,0xffffffff);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x1c;
  return;
}

/* ref: FUN_00a33060 */
GEN_FRAME uint GEN_THISCALL F_00a33060(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa33060u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00a32bf0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00a33080 */
GEN_FRAME uint GEN_THISCALL F_00a33080(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa33080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00a32920(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a330b0 */
GEN_FRAME uint GEN_THISCALL F_00a330b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa330b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)this = 0;
  F_00a2edd0(this GEN_EDX_FWD,param_1,0,0xffffffff);
  F_00a327e0((undefined *)((int)this + 0x1c) GEN_EDX_ARG,param_2);
  F_00a327e0((undefined *)((int)this + 0x2c) GEN_EDX_ARG,param_2 + 0x10);
  F_00a31a20((undefined *)((int)this + 0x3c) GEN_EDX_ARG,param_2 + 0x20);
  return (uint)this;
}

/* ref: FUN_00a33110 */
GEN_FRAME uint GEN_THISCALL F_00a33110(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa33110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)this = 0;
  F_00a2edd0(this GEN_EDX_FWD,param_1,0,0xffffffff);
  F_00a327e0((undefined *)((int)this + 0x1c) GEN_EDX_ARG,param_1 + 0x1c);
  F_00a327e0((undefined *)((int)this + 0x2c) GEN_EDX_ARG,param_1 + 0x2c);
  F_00a31a20((undefined *)((int)this + 0x3c) GEN_EDX_ARG,param_1 + 0x3c);
  return (uint)this;
}

/* ref: FUN_00a33170 */
GEN_FRAME uint GEN_THISCALL F_00a33170(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa33170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00a32bf0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x48,0x2c4);
  return (uint)uVar1;
}

/* ref: FUN_00a331b0 */
GEN_FRAME uint GEN_THISCALL F_00a331b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa331b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)this = 0;
  F_00a2edd0(this GEN_EDX_FWD,param_1,0,0xffffffff);
  F_00a327e0((undefined *)((int)this + 0x1c) GEN_EDX_ARG,param_2);
  F_00a327e0((undefined *)((int)this + 0x2c) GEN_EDX_ARG,param_2 + 0x10);
  F_00a31a20((undefined *)((int)this + 0x3c) GEN_EDX_ARG,param_2 + 0x20);
  return (uint)this;
}

/* ref: FUN_00a33210 */
GEN_FRAME uint GEN_STDCALL F_00a33210(unsigned int gen_a0)
{
  GEN_ENTER(0xa33210u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00a32920(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00a33220 */
GEN_FRAME unsigned int GEN_STDCALL F_00a33220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa33220u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined1 *)0x0) {
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    F_00a2edd0(param_1 GEN_EDX_ARG,param_2,0,0xffffffff);
    F_00a327e0(param_1 + 0x1c GEN_EDX_ARG,param_2 + 0x1c);
    F_00a327e0(param_1 + 0x2c GEN_EDX_ARG,param_2 + 0x2c);
    F_00a31a20(param_1 + 0x3c GEN_EDX_ARG,param_2 + 0x3c);
  }
  return;
}

/* ref: FUN_00a33280 */
GEN_FRAME uint GEN_THISCALL F_00a33280(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa33280u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00a32bf0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x48,0x2c4);
  return (uint)uVar1;
}

/* ref: FUN_00a33300 */
GEN_FRAME uint F_00a33300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa33300u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a32920(param_2 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00a33310 */
GEN_FRAME uint GEN_THISCALL F_00a33310(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa33310u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  int * piVar5;
  int * piVar6;
  
  if (0xfffffffd < *(uint *)((int)this + 8)) {
    F_00a32920(param_4 + 3 GEN_EDX_FWD);
    F_00429760(param_4,0x5c,0x2c4);
                    
    F_00c4579a("map/set<T> too long");
  }
  *(uint *)((int)this + 8) = *(uint *)((int)this + 8) + 1;
  param_4[1] = (int)param_3;
  if (param_3 == *(undefined4 * PTR32 *)((int)this + 4)) {
    (*(undefined4 * PTR32 *)((int)this + 4))[1] = param_4;
    **(undefined4 * PTR32 *)((int)this + 4) = param_4;
    iVar4 = *(int *)((int)this + 4);
  }
  else {
    if ((char)param_2 != '\0') {
      *param_3 = param_4;
      if (param_3 == ((undefined4 *)GEN_TOP(**(int * PTR32 *)((int)this + 4)))) {
        **(int * PTR32 *)((int)this + 4) = (int)param_4;
      }
      goto LAB_00a33386;
    }
    param_3[2] = param_4;
    iVar4 = *(int *)((int)this + 4);
    if (param_3 != *(undefined4 * PTR32 *)(iVar4 + 8)) goto LAB_00a33386;
  }
  *(int * PTR32 *)(iVar4 + 8) = param_4;
LAB_00a33386: ;
  cVar1 = *(char *)(param_4[1] + 0x58);
  piVar3 = param_4;
  do {
    if (cVar1 != '\0') {
      iVar4 = *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      *param_1 = param_4;
      *(undefined1 *)(iVar4 + 0x58) = 1;
      return (uint)param_1;
    }
    piVar5 = (int *)piVar3[1];
    piVar6 = (int *)piVar5[1];
    if (piVar5 == (int *)*piVar6) {
      iVar4 = piVar6[2];
      if (*(char *)(iVar4 + 0x58) == '\0') {
        *(undefined1 *)(piVar5 + 0x16) = 1;
        *(undefined1 *)(iVar4 + 0x58) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar3[1] + 4) + 0x58))) = 0;
        piVar3 = *(int * PTR32 *)(piVar3[1] + 4);
      }
      else {
        if (piVar3 == (int *)piVar5[2]) {
          piVar3 = (int *)piVar5[2];
          piVar5[2] = *piVar3;
          if (*(char *)(*piVar3 + 0x59) == '\0') {
            *(int * PTR32 *)(*piVar3 + 4) = piVar5;
          }
          piVar3[1] = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
            *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar3;
          }
          else {
            piVar6 = (int *)piVar5[1];
            if (piVar5 == (int *)*piVar6) {
              *piVar6 = (int)piVar3;
            }
            else {
              piVar6[2] = (int)piVar3;
            }
          }
          *piVar3 = (int)piVar5;
          piVar5[1] = (int)piVar3;
          piVar3 = piVar5;
        }
        *(undefined1 *)(piVar3[1] + 0x58) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar3[1] + 4) + 0x58))) = 0;
        piVar5 = *(int * PTR32 *)(piVar3[1] + 4);
        piVar6 = (int *)*piVar5;
        *piVar5 = piVar6[2];
        if (*(char *)(piVar6[2] + 0x59) == '\0') {
          *(int * PTR32 *)(piVar6[2] + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar6;
          piVar6[2] = (int)piVar5;
        }
        else {
          piVar2 = (int *)piVar5[1];
          if (piVar5 == (int *)piVar2[2]) {
            piVar2[2] = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
          else {
            *piVar2 = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
        }
LAB_00a33511: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar4 = *piVar6;
      if (*(char *)(iVar4 + 0x58) != '\0') {
        if (piVar3 == (int *)*piVar5) {
          iVar4 = *piVar5;
          *piVar5 = *(int *)(iVar4 + 8);
          if (*((char *)GEN_TOP((*(int *)(iVar4 + 8) + 0x59))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*(int *)(iVar4 + 8) + 4))) = piVar5;
          }
          *(int *)(iVar4 + 4) = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
            *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = iVar4;
          }
          else {
            piVar3 = (int *)piVar5[1];
            if (piVar5 == (int *)piVar3[2]) {
              piVar3[2] = iVar4;
            }
            else {
              *piVar3 = iVar4;
            }
          }
          *(int * PTR32 *)(iVar4 + 8) = piVar5;
          piVar5[1] = iVar4;
          piVar3 = piVar5;
        }
        *(undefined1 *)(piVar3[1] + 0x58) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar3[1] + 4) + 0x58))) = 0;
        piVar5 = *(int * PTR32 *)(piVar3[1] + 4);
        piVar6 = (int *)piVar5[2];
        piVar5[2] = *piVar6;
        if (*(char *)(*piVar6 + 0x59) == '\0') {
          *(int * PTR32 *)(*piVar6 + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar6;
        }
        else {
          piVar2 = (int *)piVar5[1];
          if (piVar5 == (int *)*piVar2) {
            *piVar2 = (int)piVar6;
          }
          else {
            piVar2[2] = (int)piVar6;
          }
        }
        *piVar6 = (int)piVar5;
        goto LAB_00a33511;
      }
      *(undefined1 *)(piVar5 + 0x16) = 1;
      *(undefined1 *)(iVar4 + 0x58) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar3[1] + 4) + 0x58))) = 0;
      piVar3 = *(int * PTR32 *)(piVar3[1] + 4);
    }
    cVar1 = *(char *)(piVar3[1] + 0x58);
  } while( true );
}

/* ref: FUN_00a33540 */
GEN_FRAME unsigned int F_00a33540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa33540u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_2 != (undefined1 *)0x0) {
    *(undefined4 *)(param_2 + 0x14) = 0xf;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *param_2 = 0;
    F_00a2edd0(param_2 GEN_EDX_ARG,param_3,0,0xffffffff);
    F_00a327e0(param_2 + 0x1c GEN_EDX_ARG,param_3 + 0x1c);
    F_00a327e0(param_2 + 0x2c GEN_EDX_ARG,param_3 + 0x2c);
    F_00a31a20(param_2 + 0x3c GEN_EDX_ARG,param_3 + 0x3c);
  }
  return;
}

/* ref: FUN_00a335a0 */
GEN_FRAME unsigned int GEN_THISCALL F_00a335a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa335a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)((int)param_1 + 0x59);
  piVar4 = param_1;
  while (cVar1 == '\0') {
    F_00a335a0(this GEN_EDX_FWD,(int *)piVar4[2]);
    iVar2 = piVar4[0x12];
    piVar3 = (int *)*piVar4;
    if (iVar2 != 0) {
      F_00429760(iVar2,(piVar4[0x14] - iVar2 >> 2) * 4,0x2c4);
    }
    piVar4[0x12] = 0;
    piVar4[0x13] = 0;
    piVar4[0x14] = 0;
    if (piVar4[0xe] != 0) {
      F_00a31280(piVar4[0xe],piVar4[0xf],piVar4 + 0x11,param_1);
      F_00429760(piVar4[0xe],((piVar4[0x10] - piVar4[0xe]) / 0x1c) * 0x1c,0x2c4);
    }
    piVar4[0xe] = 0;
    piVar4[0xf] = 0;
    piVar4[0x10] = 0;
    if (piVar4[10] != 0) {
      F_00a31280(piVar4[10],piVar4[0xb],piVar4 + 0xd,param_1);
      F_00429760(piVar4[10],((piVar4[0xc] - piVar4[10]) / 0x1c) * 0x1c,0x2c4);
    }
    piVar4[10] = 0;
    piVar4[0xb] = 0;
    piVar4[0xc] = 0;
    if (0xf < (uint)piVar4[8]) {
      F_00429760(piVar4[3],piVar4[8] + 1,0x2c4);
    }
    piVar4[8] = 0xf;
    piVar4[7] = 0;
    *(undefined1 *)(piVar4 + 3) = 0;
    F_00429760(piVar4,0x5c,0x2c4);
    piVar4 = piVar3;
    cVar1 = *(char *)((int)piVar3 + 0x59);
  }
  return;
}

/* ref: FUN_00a33700 */
GEN_FRAME uint GEN_THISCALL F_00a33700(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa33700u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  int * piVar7;
  bool bVar8;
  
  piVar3 = (*(int * PTR32 *)&gen_args[2]);
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x59))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  F_00a2bf10(&(*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  piVar7 = (int *)*piVar3;
  if (*(char *)((int)piVar7 + 0x59) == '\0') {
    piVar6 = piVar7;
    if ((*(char *)(piVar3[2] + 0x59) == '\0') && (piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar3)) {
      piVar7[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar3;
      piVar7 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar3[2]) {
        piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar6 + 0x59) == '\0') {
          piVar6[1] = (int)piVar7;
        }
        *piVar7 = (int)piVar6;
        (*(int * PTR32 *)&gen_args[2])[2] = piVar3[2];
        *(int * PTR32 *)(piVar3[2] + 4) = (*(int * PTR32 *)&gen_args[2]);
      }
      if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) == piVar3) {
        *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = (*(int * PTR32 *)&gen_args[2]);
      }
      else {
        puVar1 = (undefined4 *)piVar3[1];
        if ((int *)*puVar1 == piVar3) {
          *puVar1 = (*(int * PTR32 *)&gen_args[2]);
        }
        else {
          puVar1[2] = (*(int * PTR32 *)&gen_args[2]);
        }
      }
      (*(int * PTR32 *)&gen_args[2])[1] = piVar3[1];
      iVar2 = (*(int * PTR32 *)&gen_args[2])[0x16];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 0x16))) = (char)piVar3[0x16];
      *(char *)(piVar3 + 0x16) = (char)iVar2;
      goto LAB_00a3381f;
    }
  }
  else {
    piVar6 = (int *)piVar3[2];
  }
  piVar7 = (int *)piVar3[1];
  if (*(char *)((int)piVar6 + 0x59) == '\0') {
    piVar6[1] = (int)piVar7;
  }
  if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) == piVar3) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = piVar6;
  }
  else if ((int *)*piVar7 == piVar3) {
    *piVar7 = (int)piVar6;
  }
  else {
    piVar7[2] = (int)piVar6;
  }
  if (((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))))) == piVar3) {
    piVar4 = piVar7;
    if (*(char *)((int)piVar6 + 0x59) == '\0') {
      piVar4 = (int *)F_00a2bd40(piVar6);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar4;
  }
  if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 8))) == piVar3) {
    if (*(char *)((int)piVar6 + 0x59) == '\0') {
      uVar5 = F_00a2bd20(piVar6);
      *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 8))) = uVar5;
    }
    else {
      *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 8))) = piVar7;
    }
  }
LAB_00a3381f: ;
  if ((char)piVar3[0x16] == '\x01') {
    if (piVar6 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
      do {
        if ((char)piVar6[0x16] != '\x01') break;
        piVar4 = (int *)*piVar7;
        if (piVar6 == piVar4) {
          piVar4 = (int *)piVar7[2];
          if ((char)piVar4[0x16] == '\0') {
            *(undefined1 *)(piVar4 + 0x16) = 1;
            *(undefined1 *)(piVar7 + 0x16) = 0;
            F_00a2d660((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar7);
            piVar4 = (int *)piVar7[2];
          }
          if (*(char *)((int)piVar4 + 0x59) == '\0') {
            if ((*(char *)(*piVar4 + 0x58) != '\x01') || (*(char *)(piVar4[2] + 0x58) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x58) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x58) = 1;
                *(undefined1 *)(piVar4 + 0x16) = 0;
                F_00a2d6c0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
                piVar4 = (int *)piVar7[2];
              }
              *(char *)(piVar4 + 0x16) = (char)piVar7[0x16];
              *(undefined1 *)(piVar7 + 0x16) = 1;
              *(undefined1 *)(piVar4[2] + 0x58) = 1;
              F_00a2d660((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar7);
              break;
            }
LAB_00a338e5: ;
            *(undefined1 *)(piVar4 + 0x16) = 0;
          }
        }
        else {
          if ((char)piVar4[0x16] == '\0') {
            *(undefined1 *)(piVar4 + 0x16) = 1;
            *(undefined1 *)(piVar7 + 0x16) = 0;
            F_00a2d6c0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar7);
            piVar4 = (int *)*piVar7;
          }
          if (*(char *)((int)piVar4 + 0x59) == '\0') {
            if ((*(char *)(piVar4[2] + 0x58) == '\x01') && (*(char *)(*piVar4 + 0x58) == '\x01'))
            goto LAB_00a338e5;
            if (*(char *)(*piVar4 + 0x58) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x58) = 1;
              *(undefined1 *)(piVar4 + 0x16) = 0;
              F_00a2d660((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
              piVar4 = (int *)*piVar7;
            }
            *(char *)(piVar4 + 0x16) = (char)piVar7[0x16];
            *(undefined1 *)(piVar7 + 0x16) = 1;
            *(undefined1 *)(*piVar4 + 0x58) = 1;
            F_00a2d6c0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar7);
            break;
          }
        }
        bVar8 = piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)));
        piVar6 = piVar7;
        piVar7 = (int *)piVar7[1];
      } while (bVar8);
    }
    *(undefined1 *)(piVar6 + 0x16) = 1;
  }
  iVar2 = piVar3[0x12];
  if (iVar2 != 0) {
    F_00429760(iVar2,(piVar3[0x14] - iVar2 >> 2) * 4,0x2c4);
  }
  piVar3[0x12] = 0;
  piVar3[0x13] = 0;
  piVar3[0x14] = 0;
  if (piVar3[0xe] != 0) {
    F_00a31280(piVar3[0xe],piVar3[0xf],piVar3 + 0x11,(*(int * PTR32 *)&gen_args[2]));
    F_00429760(piVar3[0xe],((piVar3[0x10] - piVar3[0xe]) / 0x1c) * 0x1c,0x2c4);
  }
  piVar3[0xe] = 0;
  piVar3[0xf] = 0;
  piVar3[0x10] = 0;
  if (piVar3[10] != 0) {
    F_00a31280(piVar3[10],piVar3[0xb],piVar3 + 0xd,(*(int * PTR32 *)&gen_args[2]));
    F_00429760(piVar3[10],((piVar3[0xc] - piVar3[10]) / 0x1c) * 0x1c,0x2c4);
  }
  piVar3[10] = 0;
  piVar3[0xb] = 0;
  piVar3[0xc] = 0;
  if (0xf < (uint)piVar3[8]) {
    F_00429760(piVar3[3],piVar3[8] + 1,0x2c4);
  }
  piVar3[8] = 0xf;
  piVar3[7] = 0;
  *(undefined1 *)(piVar3 + 3) = 0;
  F_00429760(piVar3,0x5c,0x2c4);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00a33a70 */
GEN_FRAME uint GEN_THISCALL F_00a33a70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa33a70u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint uVar2;
  undefined4 * puVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  uint uVar9;
  int iVar10;
  undefined4 * puVar11;
  bool bVar12;
  undefined4 uVar13;
  
  puVar7 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  bVar12 = true;
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),1);
  if (*(char *)((int)puVar7[1] + 0x59) == '\0') {
    uVar9 = *(uint *)((*(int *)&gen_args[2]) + 0x1c);
    uVar1 = *(uint *)((*(int *)&gen_args[2]) + 0x20);
    puVar11 = (undefined4 *)puVar7[1];
    do {
      puVar7 = puVar11;
      piVar4 = puVar7 + 3;
      if ((char)(*(undefined4 * PTR32 *)&gen_args[3]) == '\0') {
        uVar2 = puVar7[7];
        if (0xf < (uint)puVar7[8]) {
          piVar4 = (int *)*piVar4;
        }
        uVar5 = *(uint *)((*(int *)&gen_args[2]) + 0x1c);
        if (uVar9 < *(uint *)((*(int *)&gen_args[2]) + 0x1c)) {
          uVar5 = uVar9;
        }
        uVar6 = uVar5;
        if (uVar2 <= uVar5) {
          uVar6 = uVar2;
        }
        if (uVar1 < 0x10) {
          iVar10 = (*(int *)&gen_args[2]) + 0xc;
        }
        else {
          iVar10 = *(int *)((*(int *)&gen_args[2]) + 0xc);
        }
        uVar6 = F_0040d320(iVar10,piVar4,uVar6);
        if (uVar6 == 0) {
          if (uVar5 < uVar2) {
            uVar6 = 0xffffffff;
          }
          else {
            uVar6 = (uint)(uVar5 != uVar2);
          }
        }
        bVar12 = (int)uVar6 < 0;
      }
      else {
        if (uVar1 < 0x10) {
          iVar10 = (*(int *)&gen_args[2]) + 0xc;
        }
        else {
          iVar10 = *(int *)((*(int *)&gen_args[2]) + 0xc);
        }
        uVar2 = puVar7[7];
        uVar5 = uVar2;
        if (uVar9 <= uVar2) {
          uVar5 = uVar9;
        }
        if (0xf < (uint)puVar7[8]) {
          piVar4 = (int *)*piVar4;
        }
        uVar5 = F_0040d320(piVar4,iVar10,uVar5);
        if (uVar5 == 0) {
          if (uVar2 < uVar9) {
            bVar12 = false;
            goto LAB_00a33b5c;
          }
          uVar5 = (uint)(uVar2 != uVar9);
        }
        bVar12 = -1 < (int)uVar5;
      }
LAB_00a33b5c: ;
      (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),bVar12);
      if (bVar12 == false) {
        puVar11 = (undefined4 *)puVar7[2];
      }
      else {
        puVar11 = (undefined4 *)*puVar7;
      }
    } while (*(char *)((int)puVar11 + 0x59) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[3]) = puVar7;
  if (bVar12 != false) {
    if (puVar7 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
      uVar13 = 1;
      goto LAB_00a33b91;
    }
    F_00a2c1c0(&(*(undefined4 * PTR32 *)&gen_args[3]) GEN_EDX_ARG);
  }
  puVar3 = (*(undefined4 * PTR32 *)&gen_args[3]);
  puVar11 = (undefined4 *)((*(int *)&gen_args[2]) + 0xc);
  puVar8 = puVar11;
  if (0xf < *(uint *)((*(int *)&gen_args[2]) + 0x20)) {
    puVar8 = (undefined *)*puVar11;
  }
  uVar9 = F_00a2c090((*(undefined4 * PTR32 *)&gen_args[3]) + 3 GEN_EDX_ARG,0,(*(undefined4 * PTR32 *)&gen_args[3])[7],puVar8,*(undefined4 *)((*(int *)&gen_args[2]) + 0x1c));
  uVar13 = (*(undefined4 *)(gen_frame + 0x8));
  if (-1 < (int)uVar9) {
    F_00a32920(puVar11 GEN_EDX_ARG);
    F_00429760((*(int *)&gen_args[2]),0x5c,0x2c4);
    *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar3;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
LAB_00a33b91: ;
  puVar7 = (undefined4 *)F_00a33310((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[3]),uVar13,puVar7,(*(int *)&gen_args[2]));
  *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar7;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00a33c20 */
GEN_FRAME uint GEN_THISCALL F_00a33c20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa33c20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * this_00;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x5c,0,0x2c4);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  this_00 = puVar1 + 3;
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 0x16) = 0;
  if (this_00 != (undefined4 *)0x0) {
    puVar1[7] = 0;
    puVar1[8] = 0xf;
    *(undefined1 *)this_00 = 0;
    F_00a2edd0(this_00 GEN_EDX_ARG,param_1,0,0xffffffff);
    F_00a327e0(puVar1 + 10 GEN_EDX_ARG,param_1 + 0x1c);
    F_00a327e0(puVar1 + 0xe GEN_EDX_ARG,param_1 + 0x2c);
    F_00a31a20(puVar1 + 0x12 GEN_EDX_ARG,param_1 + 0x3c);
  }
  return (uint)puVar1;
}

/* ref: FUN_00a33ca0 */
GEN_NOFRAME uint GEN_THISCALL F_00a33ca0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa33ca0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00a335a0(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar1 = *(uint *)((int)this + 4);
  *(uint *)(uVar1 + 8) = uVar1;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00a33cd0 */
GEN_FRAME uint GEN_THISCALL F_00a33cd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa33cd0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00a335a0(this GEN_EDX_FWD,piVar2[1]);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x59) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x59) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x59);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x59);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x59);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x59);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_00a33700(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00a33d90 */
GEN_FRAME uint GEN_THISCALL F_00a33d90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa33d90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_00a33c20(this GEN_EDX_FWD,param_2);
  F_00a33a70(this GEN_EDX_ARG,param_1,uVar1,uVar2);
  return param_1;
}

/* ref: Component::Text::MacroDecoder::vf4 */
GEN_NOFRAME uint GEN_THISCALL F_00a33dc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa33dc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: Component::Text::MacroDecoder::vf5 */
GEN_NOFRAME uint GEN_THISCALL F_00a33dd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa33dd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: Component::Text::MacroDecoder::vf6 */
GEN_NOFRAME uint GEN_THISCALL F_00a33de0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa33de0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: Component::Text::MacroDecoder::vf7 */
GEN_NOFRAME uint GEN_THISCALL F_00a33df0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa33df0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: Component::Text::MacroDecoder::vf8 */
GEN_NOFRAME uint GEN_THISCALL F_00a33e00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa33e00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: Component::Text::MacroDecoder::vf9 */
GEN_NOFRAME uint GEN_THISCALL F_00a33e10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa33e10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: Component::Text::MacroDecoder::vf10 */
GEN_NOFRAME uint GEN_THISCALL F_00a33e20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa33e20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: Component::Text::MacroDecoder::vf13 */
GEN_NOFRAME uint GEN_THISCALL F_00a33e30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa33e30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: FUN_00a33e40 */
GEN_NOFRAME uint GEN_THISCALL F_00a33e40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa33e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a33f00((undefined *)((int)this - 4) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00a33e50 */
GEN_FRAME uint GEN_THISCALL F_00a33e50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa33e50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00a33cd0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: Component::Text::MacroDecoder::vf0 */
GEN_FRAME uint GEN_THISCALL F_00a33e70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa33e70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00a29530(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::Text::TextChecker::vf0 */
GEN_FRAME uint GEN_THISCALL F_00a33ea0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa33ea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[40])REFP(0x10e4074));
  F_0042c880(this + 0x4c GEN_EDX_FWD);
  F_00492c50(this + 0x34 GEN_EDX_ARG);
  F_00429760(*(undefined4 *)(this + 0x34),8,0x2c4);
  *(undefined4 *)(this + 0x34) = 0;
  F_00a29530(this GEN_EDX_ARG);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::Text::TextModule::vf0 */
GEN_FRAME uint GEN_THISCALL F_00a33f00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa33f00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00a29dc0(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a33f30 */
GEN_FRAME uint GEN_THISCALL F_00a33f30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa33f30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00a33cd0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x5c,0x2c4);
  return (uint)uVar1;
}

/* ref: FUN_00a33f70 */
GEN_FRAME uint GEN_THISCALL F_00a33f70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa33f70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00a33cd0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x5c,0x2c4);
  return (uint)uVar1;
}

/* ref: Component::Text::MacroPreProcessor::vf0 */
GEN_FRAME uint GEN_THISCALL F_00a33ff0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa33ff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00a2a960(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a34020 */
GEN_NOFRAME uint GEN_THISCALL F_00a34020(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa34020u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x10e420c));
  uVar1 = F_00406b30(*(undefined4 *)((int)this + 0x83c));
  return (uint)uVar1;
}

/* ref: FUN_00a34040 */
GEN_NOFRAME unsigned int F_00a34040(void)
{
  GEN_ENTER(0xa34040u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00a34060 */
GEN_NOFRAME byte GEN_THISCALL F_00a34060(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa34060u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x832);
}

/* ref: FUN_00a34080 */
GEN_NOFRAME byte GEN_THISCALL F_00a34080(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa34080u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x835);
}

/* ref: FUN_00a34090 */
GEN_NOFRAME byte GEN_THISCALL F_00a34090(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa34090u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x836);
}

/* ref: FUN_00a340a0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a340a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa340a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if ((*(char *)((int)this + 0x830) != '\0') &&
     ((*(short *)((int)this + 0x828) != 0 || (*(short *)((int)this + 0x82a) != 0)))) {
    F_00a1b170((int)*(short *)((int)this + 0x824),(int)*(short *)((int)this + 0x826));
    *(short *)((int)this + 0x82c) = *(short *)((int)this + 0x82c) + *(short *)((int)this + 0x828);
    *(short *)((int)this + 0x82e) = *(short *)((int)this + 0x82e) + *(short *)((int)this + 0x82a);
  }
  return;
}

/* ref: FUN_00a34100 */
GEN_FRAME uint GEN_THISCALL F_00a34100(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa34100u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  if (*(char *)((int)this + 0x830) != '\0') {
    *(short *)((int)this + 0x82c) = (short)param_1 - *(short *)((int)this + 0x824);
    *(short *)((int)this + 0x82e) = (short)param_2 - *(short *)((int)this + 0x826);
  }
  uVar1 = F_00a1b170(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00a34150 */
GEN_FRAME byte GEN_THISCALL F_00a34150(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa34150u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  if (param_1 == *(byte *)((int)this + 0x830)) {
    if (param_2 != (int *)0x0) {
      *param_2 = (int)*(short *)((int)this + 0x828);
    }
    if (param_3 != (int *)0x0) {
      *param_3 = (int)*(short *)((int)this + 0x82a);
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_00a34190 */
GEN_FRAME byte GEN_THISCALL F_00a34190(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa34190u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (*(byte *)(in_ecx + 0x831) & (byte)param_2) != 0;
}

/* ref: FUN_00a341c0 */
GEN_NOFRAME ushort GEN_THISCALL F_00a341c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa341c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 0x82a);
}

/* ref: FUN_00a341f0 */
GEN_FRAME uint GEN_THISCALL F_00a341f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa341f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00a1b070((undefined *)((int)this + 900) GEN_EDX_FWD,param_1,1);
  return param_1;
}

/* ref: FUN_00a34210 */
GEN_NOFRAME uint GEN_THISCALL F_00a34210(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa34210u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 900;
}

/* ref: FUN_00a34220 */
GEN_NOFRAME uint GEN_THISCALL F_00a34220(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa34220u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x32c;
}

/* ref: FUN_00a34230 */
GEN_FRAME uint GEN_THISCALL F_00a34230(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa34230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x1a0];
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  
  (*(uint *)(gen_frame + 0x198)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x19c);
  puVar1 = (undefined4 *)F_00976f30(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_FWD);
  puVar3 = puVar1;
  for (iVar2 = 0x65; this = (undefined *)((int)this + 4), iVar2 != 0; iVar2 = iVar2 - 1) {
    *(undefined4 *)this = *puVar3;
    puVar3 = puVar3 + 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x198)) ^ (uint)(uint)(gen_frame + 0x19c) GEN_EDX_ARG);
  return (uint)puVar1;
}

/* ref: FUN_00a34270 */
GEN_NOFRAME uint GEN_THISCALL F_00a34270(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa34270u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00976fe0(in_ecx + 4 GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_00a34290 */
GEN_NOFRAME uint GEN_THISCALL F_00a34290(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa34290u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(char *)(in_ecx + 0x837) != '\0') {
    uVar1 = F_00977010(in_ecx + 4 GEN_EDX_FWD);
    return uVar1;
  }
  F_00977000(in_ecx + 4 GEN_EDX_ARG);
  return in_EAX;
}

/* ref: FUN_00a342b0 */
GEN_NOFRAME uint GEN_THISCALL F_00a342b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa342b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(char *)(in_ecx + 0x837) != '\0') {
    F_00977000(in_ecx + 4 GEN_EDX_FWD);
    return in_EAX;
  }
  uVar1 = F_00977010(in_ecx + 4 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00a342d0 */
GEN_FRAME uint GEN_THISCALL F_00a342d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa342d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a1b1c0((undefined *)((int)this + 0x32c) GEN_EDX_FWD,1,param_1);
  return uVar1;
}

/* ref: FUN_00a342f0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a342f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa342f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(in_ecx + 0x830) = 0;
  return;
}

/* ref: FUN_00a34300 */
GEN_FRAME uint GEN_THISCALL F_00a34300(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa34300u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x4a0];
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  (*(uint *)(gen_frame + 0x498)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x49c);
  puVar1 = (undefined4 *)F_00a1b0d0(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_FWD);
  puVar3 = puVar1;
  puVar4 = (undefined4 *)((int)this + 900);
  for (iVar2 = 0x125; iVar2 != 0; iVar2 = iVar2 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x498)) ^ (uint)(uint)(gen_frame + 0x49c) GEN_EDX_ARG);
  return (uint)puVar1;
}

/* ref: FUN_00a34350 */
GEN_FRAME uint GEN_THISCALL F_00a34350(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa34350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  char cVar1;
  uint uVar2;
  
  cVar1 = *(char *)(param_1 + 4);
  uVar2 = CONCAT31((int3)((uint)param_1 >> 8),cVar1);
  if ((cVar1 != '\0') && ((byte)(cVar1 + 0x5bU) < 0x10)) {
    uVar2 = F_00977020((int)this + 4 GEN_EDX_FWD,1 << (cVar1 + 0x5bU & 0x1f));
  }
  return uVar2;
}

/* ref: FUN_00a34390 */
GEN_FRAME uint GEN_THISCALL F_00a34390(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa34390u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x83c) + param_1 * 0xb)));
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  *(undefined2 *)(puVar1 + 2) = *(undefined2 *)(param_2 + 2);
  *(undefined1 *)((int)puVar1 + 10) = *(undefined1 *)((int)param_2 + 10);
  if (*(int *)((int)this + 0x848) != 0) {
    puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x848) + 4))))
                       (*(int * PTR32 *)((int)this + 0x848) GEN_EDX_ARG,param_1,
                        *(int *)((int)this + 0x83c) + param_1 * 0xb)));
  }
  return (uint)puVar1;
}

/* ref: FUN_00a343f0 */
GEN_FRAME uint GEN_THISCALL F_00a343f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa343f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0xb + *(int *)(in_ecx + 0x83c);
}

/* ref: FUN_00a34410 */
GEN_FRAME uint GEN_THISCALL F_00a34410(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa34410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x83c) + param_1 * 0xb)));
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined2 *)(puVar1 + 2) = 0;
  *(undefined1 *)((int)puVar1 + 10) = 0;
  if (*(int *)((int)this + 0x848) != 0) {
    puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x848) + 4))))
                       (*(int * PTR32 *)((int)this + 0x848) GEN_EDX_ARG,param_1,
                        *(int *)((int)this + 0x83c) + param_1 * 0xb)));
  }
  return (uint)puVar1;
}

/* ref: FUN_00a34480 */
GEN_FRAME unsigned int GEN_THISCALL F_00a34480(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa34480u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < *(int *)((int)this + 0x838)) {
    iVar3 = 0;
    do {
      puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x83c) + iVar3)));
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined2 *)(puVar1 + 2) = 0;
      *(undefined1 *)((int)puVar1 + 10) = 0;
      if (*(int *)((int)this + 0x848) != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x848) + 4))))
                  (*(int * PTR32 *)((int)this + 0x848) GEN_EDX_ARG,iVar2,*(int *)((int)this + 0x83c) + iVar3);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0xb;
    } while (iVar2 < *(int *)((int)this + 0x838));
  }
  return;
}

/* ref: FUN_00a34500 */
GEN_FRAME byte GEN_THISCALL F_00a34500(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa34500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte bVar1;
  
  *(undefined4 *)((int)this + 0x840) = *param_1;
  *(undefined2 *)((int)this + 0x844) = *(undefined2 *)(param_1 + 1);
  bVar1 = *(byte *)((int)param_1 + 6);
  *(byte *)((int)this + 0x846) = bVar1;
  return bVar1;
}

/* ref: FUN_00a34530 */
GEN_FRAME uint GEN_THISCALL F_00a34530(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa34530u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  int iVar2;
  int iVar3;
  int local_8;
  
  local_8 = 0;
  if (0 < *(int *)((int)this + 0x838)) {
    iVar3 = *(int *)((int)this + 0x83c);
    do {
      iVar2 = 0;
      do {
        if ((((*(char *)(iVar3 + iVar2) == (char)param_1) &&
             (bVar1 = *(byte *)(iVar3 + 1 + iVar2), bVar1 != (byte)param_2)) &&
            ((*(byte *)((int)this + 0x819) & bVar1) == bVar1)) && ((byte)param_2 < bVar1)) {
          return iVar2 * 0x8000 + local_8;
        }
        iVar2 = iVar2 + 2;
      } while (iVar2 < 4);
      local_8 = local_8 + 1;
      iVar3 = iVar3 + 0xb;
    } while (local_8 < *(int *)((int)this + 0x838));
  }
  return 0xffffffff;
}

/* ref: FUN_00a345b0 */
GEN_FRAME uint GEN_THISCALL F_00a345b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa345b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)((int)this + 0x838)) {
    iVar2 = *(int *)((int)this + 0x83c);
    do {
      iVar1 = 0;
      do {
        if ((*(char *)(iVar2 + iVar1) == (char)param_1) &&
           (*(char *)(iVar2 + 1 + iVar1) == (char)param_2)) {
          return iVar1 * 0x8000 + iVar3;
        }
        iVar1 = iVar1 + 2;
      } while (iVar1 < 4);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0xb;
    } while (iVar3 < *(int *)((int)this + 0x838));
  }
  return 0xffffffff;
}

/* ref: FUN_00a34610 */
GEN_FRAME uint GEN_THISCALL F_00a34610(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa34610u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)((int)this + 0x838)) {
    iVar1 = *(int *)((int)this + 0x83c);
    do {
      iVar2 = 0;
      do {
        if ((*(char *)(iVar1 + iVar2) == (char)param_1) &&
           (*(char *)(iVar1 + 1 + iVar2) == (char)param_2)) {
          *(undefined2 *)(iVar1 + iVar2) = 0;
          if (*(int *)((int)this + 0x848) != 0) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x848) + 4))))
                      (*(int * PTR32 *)((int)this + 0x848) GEN_EDX_ARG,iVar3,iVar1);
          }
          return iVar2 * 0x8000 + iVar3;
        }
        iVar2 = iVar2 + 2;
      } while (iVar2 < 4);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + 0xb;
    } while (iVar3 < *(int *)((int)this + 0x838));
  }
  return 0xffffffff;
}

/* ref: FUN_00a34690 */
GEN_FRAME uint GEN_THISCALL F_00a34690(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa34690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x10e420c));
  F_00976f30((undefined *)((int)this + 4) GEN_EDX_FWD);
  F_00976f30((undefined *)((int)this + 0x198) GEN_EDX_ARG);
  F_00a1b190((int)this + 0x32c GEN_EDX_ARG);
  F_00a1b190((int)this + 0x358 GEN_EDX_ARG);
  F_00a1b0d0((undefined *)((int)this + 900) GEN_EDX_ARG);
  iVar4 = 0;
  *(undefined2 *)((int)this + 0x818) = 0;
  *(undefined4 *)((int)this + 0x830) = 0;
  *(undefined4 *)((int)this + 0x834) = 0;
  *(uint *)((int)this + 0x838) = param_1;
  uVar1 = F_00406bb0(-(uint)((int)((ulonglong)param_1 * 0xb >> 0x20) != 0) |
                       (uint)((ulonglong)param_1 * 0xb),0,0);
  if (uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    iVar3 = param_1 - 1;
    if (-1 < iVar3) {
      iVar2 = uVar1 + 2;
      do {
        *(undefined4 *)(iVar2 - 2) = 0;
        *(undefined4 *)(iVar2 + 2) = 0;
        *(undefined2 *)(iVar2 + 6) = 0;
        *(undefined1 *)(iVar2 + 8) = 0;
        iVar2 = iVar2 + 0xb;
        iVar3 = iVar3 - 1;
      } while (-1 < iVar3);
    }
  }
  *(uint *)((int)this + 0x83c) = uVar1;
  *(undefined4 *)((int)this + 0x848) = 0;
  do {
    *(char *)((int)this + iVar4 + 0x840) = (char)iVar4;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 7);
  return (uint)this;
}

/* ref: FUN_00a34760 */
GEN_FRAME unsigned int GEN_THISCALL F_00a34760(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa34760u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  
  if ((*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x33c))) & (*(uint *)&gen_args[1])) == 0) {
    if ((*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x338))) & (*(uint *)&gen_args[1])) == 0) {
      *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x830))) = *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x830))) & ~(byte)(*(undefined4 *)&gen_args[2]);
    }
  }
  else {
    *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x830))) = *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x830))) | (byte)(*(undefined4 *)&gen_args[2]);
  }
  if (((*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x344))) & (*(uint *)&gen_args[1])) != 0) &&
     ((uVar1 = (int)*((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x82c))) >> 0x1f,
      3 < (int)(((int)*((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x82c))) ^ uVar1) - uVar1) ||
      (uVar1 = (int)*((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x82e))) >> 0x1f,
      3 < (int)(((int)*((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x82e))) ^ uVar1) - uVar1))))) {
    *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x831))) = *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x831))) | (byte)(*(undefined4 *)&gen_args[2]);
    return;
  }
  *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x831))) = *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x831))) & ~(byte)(*(undefined4 *)&gen_args[2]);
  return;
}

/* ref: FUN_00a347e0 */
GEN_NOFRAME byte GEN_THISCALL F_00a347e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa347e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  byte bVar2;
  uint uVar3;
  
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x1c))(this GEN_EDX_FWD);
  uVar1 = *(uint *)((int)this + 0x14);
  if ((uVar1 & 0x100) != 0) {
    uVar3 = (uint)(byte)((byte)uVar3 | 1);
  }
  if ((uVar1 & 0x800) != 0) {
    uVar3 = (uint)(byte)((byte)uVar3 | 2);
  }
  if ((uVar1 & 0x200) != 0) {
    uVar3 = (uint)(byte)((byte)uVar3 | 4);
  }
  if ((uVar1 & 0x1000) != 0) {
    uVar3 = (uint)(byte)((byte)uVar3 | 8);
  }
  if ((uVar1 & 0x4000) != 0) {
    uVar3 = (uint)(byte)((byte)uVar3 | 0x80);
  }
  if ((uVar1 & 0x8000) != 0) {
    uVar3 = (uint)(byte)((byte)uVar3 | 0x40);
  }
  bVar2 = (byte)uVar3;
  if (((uVar3 & 4) != 0) && ((uVar3 & 8) != 0)) {
    bVar2 = bVar2 | 0x20;
  }
  return bVar2;
}

/* ref: FUN_00a34840 */
GEN_NOFRAME byte GEN_THISCALL F_00a34840(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa34840u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = (*(byte *)((int)this + 0x3c8) & 1) != 0;
  if ((*(byte *)((int)this + 0x3cc) & 1) != 0) {
    bVar1 = bVar1 + 2;
  }
  if ((*(byte *)((int)this + 0x3d0) & 1) != 0) {
    bVar1 = bVar1 + 4;
  }
  return bVar1;
}

/* ref: FUN_00a34870 */
GEN_FRAME byte GEN_THISCALL F_00a34870(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa34870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = param_1 * 0xb + *(int *)((int)this + 0x83c);
  iVar4 = 0;
  do {
    while( true ) {
      if ((3 < iVar4) && (*(char *)(iVar4 + iVar5) == '\0')) {
        return 0;
      }
      bVar1 = *(byte *)(iVar4 + iVar5);
      bVar2 = *(byte *)(iVar4 + 1 + iVar5);
      (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),bVar1);
      (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),bVar2);
      if (0x9f < bVar1) break;
      if ((((*(byte *)((int)this + (uint)bVar1 * 4 + 0x388) & 1) != 0) &&
          ((*(byte *)((int)this + 0x819) & bVar2) == bVar2)) &&
         (uVar3 = F_00a34530(this GEN_EDX_FWD,(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8))), uVar3 == 0xffffffff)) {
        return 1;
      }
LAB_00a34951: ;
      iVar4 = iVar4 + 2;
    }
    if (0xa4 < bVar1) {
      uVar6 = 1 << (bVar1 + 0x5b & 0x1f);
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_ARG,uVar6);
      if (((uVar3 != 0) && (*(byte *)((int)this + 0x818) == bVar2)) ||
         (((*(uint *)((int)this + 0x14) & uVar6) != 0 && (*(byte *)((int)this + 0x818) == bVar2))))
      {
        return 1;
      }
      goto LAB_00a34951;
    }
    if ((*(uint *)((int)this + 0x338) & 1 << (bVar1 + 0x60 & 0x1f)) == 0) goto LAB_00a34951;
    if (*(byte *)((int)this + 0x819) == bVar2) {
      return 1;
    }
    iVar4 = iVar4 + 2;
  } while( true );
}

/* ref: FUN_00a34970 */
GEN_FRAME byte GEN_THISCALL F_00a34970(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa34970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = param_1 * 0xb + *(int *)((int)this + 0x83c);
  iVar4 = 0;
  do {
    while( true ) {
      if ((3 < iVar4) && (*(char *)(iVar4 + iVar5) == '\0')) {
        return 0;
      }
      bVar1 = *(byte *)(iVar4 + iVar5);
      bVar2 = *(byte *)(iVar4 + 1 + iVar5);
      (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),bVar1);
      (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),bVar2);
      if (0x9f < bVar1) break;
      if ((((*(byte *)((int)this + (uint)bVar1 * 4 + 0x388) & 2) != 0) &&
          ((*(byte *)((int)this + 0x819) & bVar2) == bVar2)) &&
         (uVar3 = F_00a34530(this GEN_EDX_FWD,(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8))), uVar3 == 0xffffffff)) {
        return 1;
      }
LAB_00a34a51: ;
      iVar4 = iVar4 + 2;
    }
    if (0xa4 < bVar1) {
      uVar6 = 1 << (bVar1 + 0x5b & 0x1f);
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_ARG,uVar6);
      if (((uVar3 != 0) && (*(byte *)((int)this + 0x818) == bVar2)) ||
         (((*(uint *)((int)this + 0x18) & uVar6) != 0 && (*(byte *)((int)this + 0x818) == bVar2))))
      {
        return 1;
      }
      goto LAB_00a34a51;
    }
    if ((*(uint *)((int)this + 0x33c) & 1 << (bVar1 + 0x60 & 0x1f)) == 0) goto LAB_00a34a51;
    if (*(byte *)((int)this + 0x819) == bVar2) {
      return 1;
    }
    iVar4 = iVar4 + 2;
  } while( true );
}

/* ref: FUN_00a34a70 */
GEN_FRAME byte GEN_THISCALL F_00a34a70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa34a70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = param_1 * 0xb + *(int *)((int)this + 0x83c);
  iVar4 = 0;
  do {
    while( true ) {
      if ((3 < iVar4) && (*(char *)(iVar4 + iVar5) == '\0')) {
        return 0;
      }
      bVar1 = *(byte *)(iVar4 + iVar5);
      bVar2 = *(byte *)(iVar4 + 1 + iVar5);
      (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),bVar1);
      (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),bVar2);
      if (0x9f < bVar1) break;
      if ((((*(byte *)((int)this + (uint)bVar1 * 4 + 0x388) & 8) != 0) &&
          ((*(byte *)((int)this + 0x819) & bVar2) == bVar2)) &&
         (uVar3 = F_00a34530(this GEN_EDX_FWD,(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8))), uVar3 == 0xffffffff)) {
        return 1;
      }
LAB_00a34b51: ;
      iVar4 = iVar4 + 2;
    }
    if (0xa4 < bVar1) {
      uVar6 = 1 << (bVar1 + 0x5b & 0x1f);
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x14))(this GEN_EDX_ARG,uVar6);
      if (((uVar3 != 0) && (*(byte *)((int)this + 0x818) == bVar2)) ||
         (((*(uint *)((int)this + 0x20) & uVar6) != 0 && (*(byte *)((int)this + 0x818) == bVar2))))
      {
        return 1;
      }
      goto LAB_00a34b51;
    }
    if ((*(uint *)((int)this + 0x348) & 1 << (bVar1 + 0x60 & 0x1f)) == 0) goto LAB_00a34b51;
    if (*(byte *)((int)this + 0x819) == bVar2) {
      return 1;
    }
    iVar4 = iVar4 + 2;
  } while( true );
}

/* ref: FUN_00a34b70 */
GEN_FRAME byte GEN_THISCALL F_00a34b70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa34b70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar4 = param_1 * 0xb + *(int *)((int)this + 0x83c);
  iVar5 = 0;
  do {
    while( true ) {
      if ((3 < iVar5) && (*(char *)(iVar5 + iVar4) == '\0')) {
        return 0;
      }
      bVar1 = *(byte *)(iVar5 + iVar4);
      bVar2 = *(byte *)(iVar5 + 1 + iVar4);
      (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),bVar1);
      (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),bVar2);
      if (0x9f < bVar1) break;
      if ((((*(byte *)((int)this + (uint)bVar1 * 4 + 0x388) & 1) != 0) &&
          ((*(byte *)((int)this + 0x819) & bVar2) == bVar2)) &&
         (uVar3 = F_00a34530(this GEN_EDX_FWD,(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8))), uVar3 == 0xffffffff)) {
        return 1;
      }
LAB_00a34c28: ;
      iVar5 = iVar5 + 2;
    }
    if (0xa4 < bVar1) {
      uVar6 = 1 << (bVar1 + 0x5b & 0x1f);
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_ARG,uVar6);
      if ((uVar3 != 0) || ((*(uint *)((int)this + 0x14) & uVar6) != 0)) {
        return 1;
      }
      goto LAB_00a34c28;
    }
    if ((*(uint *)((int)this + 0x338) & 1 << (bVar1 + 0x60 & 0x1f)) != 0) {
      return 1;
    }
    iVar5 = iVar5 + 2;
  } while( true );
}

/* ref: FUN_00a34c40 */
GEN_FRAME byte GEN_THISCALL F_00a34c40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa34c40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar4 = param_1 * 0xb + *(int *)((int)this + 0x83c);
  iVar5 = 0;
  do {
    while( true ) {
      if ((3 < iVar5) && (*(char *)(iVar5 + iVar4) == '\0')) {
        return 0;
      }
      bVar1 = *(byte *)(iVar5 + iVar4);
      bVar2 = *(byte *)(iVar5 + 1 + iVar4);
      (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),bVar1);
      (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),bVar2);
      if (0x9f < bVar1) break;
      if ((((*(byte *)((int)this + (uint)bVar1 * 4 + 0x388) & 2) != 0) &&
          ((*(byte *)((int)this + 0x819) & bVar2) == bVar2)) &&
         (uVar3 = F_00a34530(this GEN_EDX_FWD,(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8))), uVar3 == 0xffffffff)) {
        return 1;
      }
LAB_00a34cf8: ;
      iVar5 = iVar5 + 2;
    }
    if (0xa4 < bVar1) {
      uVar6 = 1 << (bVar1 + 0x5b & 0x1f);
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_ARG,uVar6);
      if ((uVar3 != 0) || ((*(uint *)((int)this + 0x18) & uVar6) != 0)) {
        return 1;
      }
      goto LAB_00a34cf8;
    }
    if ((*(uint *)((int)this + 0x33c) & 1 << (bVar1 + 0x60 & 0x1f)) != 0) {
      return 1;
    }
    iVar5 = iVar5 + 2;
  } while( true );
}

/* ref: FUN_00a34d10 */
GEN_FRAME byte GEN_THISCALL F_00a34d10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa34d10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar4 = param_1 * 0xb + *(int *)((int)this + 0x83c);
  iVar5 = 0;
  do {
    while( true ) {
      if ((3 < iVar5) && (*(char *)(iVar5 + iVar4) == '\0')) {
        return 0;
      }
      bVar1 = *(byte *)(iVar5 + iVar4);
      bVar2 = *(byte *)(iVar5 + 1 + iVar4);
      (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),bVar1);
      (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),bVar2);
      if (0x9f < bVar1) break;
      if ((((*(byte *)((int)this + (uint)bVar1 * 4 + 0x388) & 8) != 0) &&
          ((*(byte *)((int)this + 0x819) & bVar2) == bVar2)) &&
         (uVar3 = F_00a34530(this GEN_EDX_FWD,(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8))), uVar3 == 0xffffffff)) {
        return 1;
      }
LAB_00a34dc8: ;
      iVar5 = iVar5 + 2;
    }
    if (0xa4 < bVar1) {
      uVar6 = 1 << (bVar1 + 0x5b & 0x1f);
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x14))(this GEN_EDX_ARG,uVar6);
      if ((uVar3 != 0) || ((*(uint *)((int)this + 0x20) & uVar6) != 0)) {
        return 1;
      }
      goto LAB_00a34dc8;
    }
    if ((*(uint *)((int)this + 0x348) & 1 << (bVar1 + 0x60 & 0x1f)) != 0) {
      return 1;
    }
    iVar5 = iVar5 + 2;
  } while( true );
}

/* ref: FUN_00a34de0 */
GEN_FRAME byte GEN_THISCALL F_00a34de0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa34de0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = param_1 * 0xb + *(int *)((int)this + 0x83c);
  iVar3 = 0;
  do {
    while( true ) {
      if ((3 < iVar3) && (*(char *)(iVar3 + iVar4) == '\0')) {
        return 0;
      }
      bVar1 = *(byte *)(iVar3 + iVar4);
      if (0x9f < bVar1) break;
      if ((*(byte *)((int)this + (uint)bVar1 * 4 + 0x388) & 4) != 0) {
        return 1;
      }
LAB_00a34e65: ;
      iVar3 = iVar3 + 2;
    }
    if (0xa4 < bVar1) {
      uVar5 = 1 << (bVar1 + 0x5b & 0x1f);
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x18))(this GEN_EDX_FWD,uVar5);
      if ((uVar2 != 0) || ((*(uint *)((int)this + 0x1c) & uVar5) != 0)) {
        return 1;
      }
      goto LAB_00a34e65;
    }
    if ((*(uint *)((int)this + 0x344) & 1 << (bVar1 + 0x60 & 0x1f)) != 0) {
      return 1;
    }
    iVar3 = iVar3 + 2;
  } while( true );
}

/* ref: FUN_00a34e80 */
GEN_FRAME uint GEN_THISCALL F_00a34e80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa34e80u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  undefined1 uVar2;
  
  uVar2 = *((undefined1 *)GEN_TOP(((*(int *)&gen_args[1]) + 0x840 + (int)(*(undefined * PTR32 *)&gen_args[0]))));
  (*(int *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[1]), 1, 3),uVar2);
  if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x837))) != '\0') {
    switch((unsigned int)(uintptr_t)(uVar2)) {
    case 3: ;
      uVar2 = 5;
      break;
    case 4: ;
      uVar2 = 6;
      break;
    case 5: ;
      uVar2 = 3;
      break;
    case 6: ;
      uVar2 = 4;
      break;
    default: ;
      goto switchD_00a34ea8_default;
    }
    (*(int *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[1]), 1, 3),uVar2);
  }
switchD_00a34ea8_default: ;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 8))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,(*(int *)&gen_args[1]));
  if (uVar1 == 0) {
    switch((unsigned int)(uintptr_t)(uVar2)) {
    case 0: ;
      return *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x81c)));
    case 1: ;
      return *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x820)));
    case 2: ;
      return *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x334)));
    case 3: ;
      return *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
    case 4: ;
      return *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
    case 5: ;
      return *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc)));
    case 6: ;
      return *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10)));
    default: ;
      uVar1 = 0;
    }
  }
  return uVar1;
}

/* ref: FUN_00a34f60 */
GEN_FRAME uint GEN_THISCALL F_00a34f60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa34f60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x630];
  undefined4 * puVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined4 * puVar4;
  
  (*(uint *)(gen_frame + 0x628)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x62c);
  puVar1 = (undefined4 *)F_00976f30(((undefined1 *)(gen_frame + 0x494)) GEN_EDX_FWD);
  puVar4 = this;
  for (iVar3 = 0x65; puVar4 = puVar4 + 1, iVar3 != 0; iVar3 = iVar3 - 1) {
    *puVar4 = *puVar1;
    puVar1 = puVar1 + 1;
  }
  F_00a1b1c0((undefined *)((int)this + 0x32c) GEN_EDX_ARG,1,0x1f);
  puVar2 = (undefined4 *)F_00a1b0d0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  puVar4 = puVar2;
  puVar1 = (undefined4 *)((int)this + 900);
  for (iVar3 = 0x125; iVar3 != 0; iVar3 = iVar3 - 1) {
    *puVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar1 = puVar1 + 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x628)) ^ (uint)(uint)(gen_frame + 0x62c) GEN_EDX_ARG);
  return (uint)puVar2;
}

/* ref: FUN_00a34fd0 */
GEN_FRAME unsigned int GEN_THISCALL F_00a34fd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa34fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * puVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    if (*(byte *)(iVar2 + param_1) != 0) {
      puVar1 = ((uint *)GEN_TOP(((int)this + (uint)*(byte *)(iVar2 + param_1) * 4 + 0x388)));
      *puVar1 = *puVar1 & 0xfffffff0;
    }
    iVar2 = iVar2 + 2;
  } while (iVar2 < 4);
  return 0;
}

/* ref: Client::System::Input::InputData::vf1 */
GEN_FRAME uint GEN_THISCALL F_00a35000(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xa35000u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  uint param_4 = (uint)gen_a4;
  uint param_5 = (uint)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined1 IVar1;
  code * pcVar2;
  undefined1 IVar3;
  uint uVar4;
  uint extraout_EAX = 0;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined2 uVar8;
  undefined4 * puVar9;
  undefined * pIVar10;
  undefined * pIVar11;
  
  IVar3 = (undefined1)F_00976f60(param_1 GEN_EDX_FWD,this + 0x198);
  this[0x832] = IVar3;
  IVar3 = (undefined1)F_00a1b200(param_2 GEN_EDX_ARG,this + 0x358);
  this[0x833] = IVar3;
  this[0x834] = *param_3;
  IVar3 = (undefined1)F_00a1b230(param_2 GEN_EDX_ARG,this + 0x32c);
  this[0x835] = IVar3;
  IVar3 = (undefined1)F_00976fa0(param_1 GEN_EDX_ARG,this + 4);
  iVar7 = *(int *)this;
  this[0x836] = IVar3;
  puVar9 = param_1;
  pIVar10 = this + 4;
  for (iVar6 = 0x65; iVar6 != 0; iVar6 = iVar6 - 1) {
    *(undefined4 *)pIVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    pIVar10 = pIVar10 + 4;
  }
  puVar9 = param_1;
  pIVar10 = this + 0x198;
  for (iVar6 = 0x65; iVar6 != 0; iVar6 = iVar6 - 1) {
    *(undefined4 *)pIVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    pIVar10 = pIVar10 + 4;
  }
  puVar9 = param_2;
  pIVar10 = this + 0x32c;
  for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 - 1) {
    *(undefined4 *)pIVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    pIVar10 = pIVar10 + 4;
  }
  pcVar2 = *(gen_code32 *)(iVar7 + 0x1c);
  puVar9 = param_2;
  pIVar10 = this + 0x358;
  for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 - 1) {
    *(undefined4 *)pIVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    pIVar10 = pIVar10 + 4;
  }
  pIVar10 = param_3;
  pIVar11 = this + 900;
  for (iVar7 = 0x125; iVar7 != 0; iVar7 = iVar7 - 1) {
    *(undefined4 *)pIVar11 = *(undefined4 *)pIVar10;
    pIVar10 = pIVar10 + 4;
    pIVar11 = pIVar11 + 4;
  }
  uVar4 = (*pcVar2)(this);
  uVar5 = *(uint *)(this + 0x14);
  if ((uVar5 & 0x100) != 0) {
    uVar4 = (uint)(byte)((byte)uVar4 | 1);
  }
  if ((uVar5 & 0x800) != 0) {
    uVar4 = (uint)(byte)((byte)uVar4 | 2);
  }
  if ((uVar5 & 0x200) != 0) {
    uVar4 = (uint)(byte)((byte)uVar4 | 4);
  }
  if ((uVar5 & 0x1000) != 0) {
    uVar4 = (uint)(byte)((byte)uVar4 | 8);
  }
  if ((uVar5 & 0x4000) != 0) {
    uVar4 = (uint)(byte)((byte)uVar4 | 0x80);
  }
  if ((uVar5 & 0x8000) != 0) {
    uVar4 = (uint)(byte)((byte)uVar4 | 0x40);
  }
  IVar3 = SUB41(uVar4,0);
  if (((uVar4 & 4) != 0) && ((uVar4 & 8) != 0)) {
    IVar3 = (undefined1)((byte)IVar3 | 0x20);
  }
  this[0x818] = IVar3;
  IVar3 = (undefined1)(((byte)this[0x3c8] & 1) != 0);
  if (((byte)this[0x3cc] & 1) != 0) {
    IVar3 = (undefined1)((char)IVar3 + '\x02');
  }
  if (((byte)this[0x3d0] & 1) != 0) {
    IVar3 = (undefined1)((char)IVar3 + '\x04');
  }
  IVar1 = this[0x830];
  this[0x819] = IVar3;
  F_00a34760(this GEN_EDX_ARG,1,1);
  F_00a34760(((undefined *)(uint)(this)) GEN_EDX_ARG,4,4);
  uVar5 = extraout_EAX;
  if (IVar1 == (undefined1)0x0) {
    if (this[0x830] == (undefined1)0x0) goto LAB_00a351e8;
    if ((char)param_6 == '\0') {
      uVar5 = F_00a34e80(((undefined *)(uint)((this))) GEN_EDX_ARG,0);
      uVar8 = (undefined2)uVar5;
      uVar5 = F_00a34e80(this GEN_EDX_ARG,1);
    }
    else {
      uVar8 = (undefined2)param_4;
      uVar5 = param_5;
    }
    *(undefined2 *)(this + 0x824) = uVar8;
    *(short *)(this + 0x826) = (short)uVar5;
    *(undefined4 *)(this + 0x828) = 0;
    *(undefined4 *)(this + 0x82c) = 0;
  }
  if (this[0x830] != (undefined1)0x0) {
    *(uint *)(this + 0x820) = param_5;
    *(short *)(this + 0x828) = *(short *)(this + 0x824) - *(short *)(this + 0x32c);
    *(short *)(this + 0x82a) = *(short *)(this + 0x826) - *(short *)(this + 0x330);
    *(uint *)(this + 0x81c) = param_4;
    return CONCAT22((short)(uVar5 >> 0x10),*(short *)(this + 0x824) - *(short *)(this + 0x32c));
  }
LAB_00a351e8: ;
  *(uint *)(this + 0x820) = param_5;
  *(uint *)(this + 0x81c) = param_4;
  return param_4;
}

/* ref: FUN_00a35200 */
GEN_FRAME uint GEN_THISCALL F_00a35200(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa35200u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint * puVar1;
  
  puVar1 = (uint *)((int)this + param_1 * 4 + 4);
  *puVar1 = *puVar1 & ~param_2;
  return param_1;
}

/* ref: Client::System::Input::InputData::vf0 */
GEN_FRAME uint GEN_THISCALL F_00a35220(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa35220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x10e420c));
  F_00406b30(*(undefined4 *)(this + 0x83c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a352b0 */
GEN_FRAME float10 F_00a352b0(float gen_a0)
{
  GEN_ENTER(0xa352b0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: FUN_00a352d0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a352d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa352d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  iVar2 = 0x158;
  *(undefined4 *)((int)this + 8) = 0x158;
  *(undefined2 *)((int)this + 4) = 0x100;
  puVar1 = (undefined4 *)((int)this + 0xad0);
  do {
    puVar1[-0x2b0] = 0;
    puVar1[-0x158] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  *(undefined4 *)((int)this + 0x1030) = 0;
  *(undefined4 *)((int)this + 0x1034) = 0;
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00a35320 */
GEN_NOFRAME unsigned int F_00a35320(void)
{
  GEN_ENTER(0xa35320u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00a35330 */
GEN_FRAME uint F_00a35330(unsigned int gen_a0)
{
  GEN_ENTER(0xa35330u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  
  if (param_1 < 200) {
    uVar1 = (&REFG(undefined4, 0x14a9a1c))[(int)(param_1 >> 1)];
    if (uVar1 == 0) {
      return 0;
    }
    if ((param_1 & 1) != 0) {
      if ((*(char *)(uVar1 + 0x2e08) == '\0') && (*(char *)(uVar1 + 0x2e09) == '\0')) {
        return *(uint *)(uVar1 + 0x2e04);
      }
      return *(uint *)(uVar1 + 0x2e00);
    }
  }
  else {
    if (param_1 < 0xf4) {
      uVar1 = F_00ae0db0(&REFG(undefined, 0x14c0920) GEN_EDX_ARG,param_1 - 200);
      return uVar1;
    }
    if (param_1 < 0x11c) {
      uVar1 = F_00ae1300(&REFG(undefined, 0x14c0878) GEN_EDX_ARG,param_1 - 0xf4);
      return uVar1;
    }
    uVar1 = F_00b79f30(&REFG(undefined, 0x14c5798) GEN_EDX_ARG,param_1 - 0x11c);
  }
  return uVar1;
}

/* ref: FUN_00a353c0 */
GEN_FRAME uint F_00a353c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa353c0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  if (param_1[1] == param_2[1]) {
    return (-(uint)(*(byte *)(*param_1 + 0x8d) < *(byte *)(*param_2 + 0x8d)) & 0xfffffffe) + 1;
  }
  return param_1[1] - param_2[1];
}

/* ref: FUN_00a35400 */
GEN_FRAME uint GEN_THISCALL F_00a35400(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa35400u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * this_00;
  uint uVar1;
  uint * puVar2;
  uint uVar3;
  uint * puVar4;
  int local_8;
  
  uVar3 = 0;
  this_00 = (uint *)((int)this + 0x10);
  local_8 = 0;
  puVar4 = (uint *)((int)this + 0xad0);
  puVar2 = this_00;
  do {
    uVar1 = F_00a35330(uVar3);
    *puVar2 = uVar1;
    if (uVar1 != 0) {
      local_8 = local_8 + 1;
      puVar4[-0x158] = uVar1;
      *puVar4 = uVar1;
      puVar4 = puVar4 + 1;
    }
    uVar3 = uVar3 + 1;
    puVar2 = puVar2 + 1;
  } while (uVar3 < 0x158);
  *(int *)((int)this + 0x1030) = local_8;
  *(int *)((int)this + 0x1034) = local_8;
  if (local_8 != 0) {
    F_00a35a90(this_00 GEN_EDX_ARG,0,local_8 - 1);
  }
  uVar3 = 0;
  if (*(int *)((int)this + 0x1034) != 0) {
    uVar3 = F_00a35bb0(this_00 GEN_EDX_ARG,0,*(int *)((int)this + 0x1034) - 1);
  }
  return uVar3;
}

/* ref: FUN_00a35490 */
GEN_FRAME uint GEN_THISCALL F_00a35490(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa35490u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = *(int *)((int)this + 0x1024) - 1;
  if (-1 < iVar5) {
    do {
      iVar3 = iVar5 + iVar4 >> 1;
      uVar1 = *(uint *)((int)this + iVar3 * 4 + 0xac0);
      uVar2 = *(uint *)(uVar1 + 0x74);
      if (uVar2 < param_1) {
        iVar4 = iVar3 + 1;
      }
      else {
        if (uVar2 <= param_1) {
          return uVar1;
        }
        iVar5 = iVar3 - 1;
      }
    } while (iVar4 <= iVar5);
  }
  return 0;
}

/* ref: FUN_00a354d0 */
GEN_FRAME uint GEN_THISCALL F_00a354d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa354d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a2;
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  int local_8;
  
  iVar3 = *(int *)((int)this + 0x1020) - 1;
  local_8 = 0;
  if (iVar3 < 0) {
    return 0;
  }
  do {
    iVar4 = iVar3 + local_8 >> 1;
    puVar1 = *(undefined4 * PTR32 *)((int)this + iVar4 * 4 + 0x560);
    uVar5 = ((gen_lcode *)*(gen_code32 *)*puVar1)(puVar1);
    uVar2 = (uint)(uVar5 >> 0x20);
    if (param_2 < uVar2) {
LAB_00a3552f: ;
      iVar3 = iVar4 - 1;
    }
    else {
      if ((param_2 <= uVar2) && ((*(uint *)&gen_a1) <= (uint)uVar5)) {
        if (uVar5 <= CONCAT44(param_2,(*(uint *)&gen_a1))) {
          return (uint)puVar1;
        }
        goto LAB_00a3552f;
      }
      local_8 = iVar4 + 1;
    }
    if (iVar3 < local_8) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_00a35550 */
GEN_NOFRAME unsigned int F_00a35550(void)
{
  GEN_ENTER(0xa35550u, 0u, 0u, 0u, 0u);
  F_00a64090(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG);
  F_00ae0d60(&REFG(undefined, 0x14c0920) GEN_EDX_ARG);
  F_00ae2520(&REFG(undefined, 0x14c0878) GEN_EDX_ARG);
  F_00b7a240(&REFG(undefined, 0x14c5798) GEN_EDX_ARG);
  return;
}

/* ref: FUN_00a35580 */
GEN_FRAME unsigned int F_00a35580(unsigned int gen_a0)
{
  GEN_ENTER(0xa35580u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  F_00a64600(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,param_1);
  F_00ae1380(&REFG(undefined, 0x14c0878) GEN_EDX_ARG,param_1);
  F_00b7a060(&REFG(undefined, 0x14c5798) GEN_EDX_ARG,param_1);
  return;
}

/* ref: FUN_00a355b0 */
GEN_FRAME byte F_00a355b0(unsigned int gen_a0)
{
  GEN_ENTER(0xa355b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte bVar1;
  
  bVar1 = F_00a64690(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,param_1);
  if (bVar1 != 0) {
    bVar1 = F_00ae1410(&REFG(undefined, 0x14c0878) GEN_EDX_ARG,param_1);
    if (bVar1 != 0) {
      bVar1 = F_00b7a140(&REFG(undefined, 0x14c5798) GEN_EDX_ARG,param_1);
      if (bVar1 != 0) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00a35600 */
GEN_NOFRAME unsigned int F_00a35600(void)
{
  GEN_ENTER(0xa35600u, 0u, 0u, 0u, 0u);
  int * piVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    piVar1 = ((int *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[(int)(uVar2)]));
    if (piVar1 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x30))(piVar1 GEN_EDX_ARG);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x158);
  return;
}

/* ref: FUN_00a35630 */
GEN_FRAME uint F_00a35630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa35630u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  longlong lVar3;
  
  puVar1 = (undefined4 *)0x0;
  if (param_1 != -0x20000000) {
    uVar2 = 0;
    while ((puVar1 = ((undefined4 *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[(int)(uVar2)])), puVar1 == (undefined4 *)0x0 ||
           (lVar3 = ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG), lVar3 != (longlong)CONCAT44(param_2,param_1)))) {
      uVar2 = uVar2 + 1;
      if (0x157 < uVar2) {
        return 0;
      }
    }
  }
  return (uint)puVar1;
}

/* ref: FUN_00a35680 */
GEN_FRAME uint F_00a35680(unsigned int gen_a0)
{
  GEN_ENTER(0xa35680u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if (param_1 != -0x20000000) {
    uVar2 = 0;
    while ((uVar1 = (&REFG(undefined4, 0x14a31f0))[(int)(uVar2)], uVar1 == 0 || (*(int *)(uVar1 + 0x74) != param_1))) {
      uVar2 = uVar2 + 1;
      if (0x157 < uVar2) {
        return 0;
      }
    }
  }
  return uVar1;
}

/* ref: FUN_00a356c0 */
GEN_FRAME uint F_00a356c0(unsigned int gen_a0)
{
  GEN_ENTER(0xa356c0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_ARG);
  if (uVar1 == 8) {
    uVar1 = 0;
    do {
      if (param_1 == ((int *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[(int)(uVar1)]))) {
        if (uVar1 == 0) {
          return 0;
        }
        if (0x157 < uVar1 - 1) {
          return 0;
        }
        return (&REFG(undefined4, 0x14a31f0))[(int)(uVar1 - 1)];
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 0x158);
  }
  return 0;
}

/* ref: FUN_00a35710 */
GEN_NOFRAME uint GEN_THISCALL F_00a35710(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa35710u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a35400(this GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_00a35720 */
GEN_NOFRAME uint GEN_THISCALL F_00a35720(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa35720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a35400(this GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_00a35730 */
GEN_FRAME uint GEN_THISCALL F_00a35730(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa35730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a35400(this GEN_EDX_FWD);
  if (*(int *)((int)this + 0xc) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0xc))))
                      (*(undefined4 * PTR32 *)((int)this + 0xc) GEN_EDX_ARG,param_1);
    return uVar1;
  }
  return uVar1;
}

/* ref: FUN_00a35760 */
GEN_FRAME uint GEN_THISCALL F_00a35760(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa35760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (*(int *)((int)this + 0xc) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 4))))(*(int * PTR32 *)((int)this + 0xc) GEN_EDX_FWD,param_1);
  }
  uVar1 = F_00a35400(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00a35790 */
GEN_NOFRAME uint GEN_THISCALL F_00a35790(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa35790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a35400(this GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_00a357a0 */
GEN_FRAME uint GEN_THISCALL F_00a357a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa357a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xae0];
  int * piVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  uint uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xadc);
  (*(uint *)(gen_frame + 0xad8)) = uVar3;
  *(undefined1 *)((int)this + 4) = 0;
  if (*(char *)((int)this + 5) != '\0') {
    bVar2 = F_005e1600();
    uVar3 = CONCAT31(extraout_var,bVar2);
    if (bVar2 != 0) {
      bVar2 = F_005d99e0();
      uVar3 = CONCAT31(extraout_var_00,bVar2);
      if (bVar2 != 0) {
        *(undefined1 *)((int)this + 4) = 1;
        iVar5 = 0x14;
        do {
          if ((*(uint *)this < 0x158) &&
             (piVar1 = ((int *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[(int)(*(uint *)this)])), piVar1 != (int *)0x0)) {
            ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x34))(piVar1 GEN_EDX_ARG);
          }
          *(int *)this = *(int *)this + 1;
          if (0x157 < *(int *)this) {
            *(undefined4 *)this = 0;
          }
          iVar5 = iVar5 - 1;
        } while (iVar5 != 0);
        (*(gen_size32 *)(gen_frame + 0x14)) = 0;
        (*(int *)(gen_frame + 0x8)) = 0;
        (*(int *)(gen_frame + 0xc)) = 0;
        (*(int *)(gen_frame + 0x10)) = 0;
        uVar3 = 0;
        do {
          if ((int)uVar3 < 200) {
            if (0xf3 < (int)uVar3) goto LAB_00a35860;
LAB_00a3586c: ;
            if (((uVar3 < 0x158) && (piVar1 = ((int *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[(int)(uVar3)])), piVar1 != (int *)0x0))
               && (uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xb8))(piVar1 GEN_EDX_ARG), (char)uVar4 != '\0')) {
              if (*(byte *)((int)piVar1 + 0x8d) < 0x1a) {
                uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
                if (uVar4 == 1) {
                  (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 1;
                }
                uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
                if (uVar4 == 2) {
                  (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + 1;
                }
                uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
                if (uVar4 == 3) {
                  (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
                }
              }
              ((uint *)(gen_frame + 0x18))[(int)((*(gen_size32 *)(gen_frame + 0x14)) * 2)] = (uint)piVar1;
              ((uint *)(gen_frame + 0x18))[(int)((*(gen_size32 *)(gen_frame + 0x14)) * 2 + 1)] = (uint)*(byte *)(piVar1 + 0x23);
              (*(gen_size32 *)(gen_frame + 0x14)) = (*(gen_size32 *)(gen_frame + 0x14)) + 1;
            }
          }
          else if (0xf3 < (int)uVar3) {
LAB_00a35860: ;
            if (0x11b < (int)uVar3) goto LAB_00a3586c;
          }
          uVar3 = uVar3 + 1;
        } while ((int)uVar3 < 0x158);
        uVar3 = F_00b070f0();
        F_004ea3a0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25f8) GEN_EDX_ARG,(*(int *)(gen_frame + 0x10)),(*(int *)(gen_frame + 0xc)),(*(int *)(gen_frame + 0x8)),
                     (uint)(*(char *)(uVar3 + 0x232) != '\0'));
        F_00c4f040(((uint *)(gen_frame + 0x18)),(*(gen_size32 *)(gen_frame + 0x14)),8,((code *)REFP(0xa353c0)));
        uVar4 = *(uint *)((int)this + 8);
        iVar5 = 0;
        iVar6 = 0;
        uVar3 = uVar4;
        if (0 < (int)(*(gen_size32 *)(gen_frame + 0x14))) {
          do {
            if (((iVar5 < (int)uVar4) &&
                (piVar1 = (int *)((uint *)(gen_frame + 0x18))[(int)(iVar6 * 2)], (piVar1[0x47] & 0x102U) == 0)) &&
               ((int)((uint *)(gen_frame + 0x18))[(int)(iVar6 * 2 + 1)] < 0xe)) {
              uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1 GEN_EDX_ARG);
              iVar5 = iVar5 + 1;
            }
            else {
              uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)((uint *)(gen_frame + 0x18))[(int)(iVar6 * 2)] + 0x30))))
                                ((int *)((uint *)(gen_frame + 0x18))[(int)(iVar6 * 2)] GEN_EDX_ARG);
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < (int)(*(gen_size32 *)(gen_frame + 0x14)));
        }
      }
    }
  }
  uVar4 = 200;
  bVar7 = true;
  do {
    if (((bVar7) && (piVar1 = ((int *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[(int)(uVar4)])), piVar1 != (int *)0x0)) &&
       ((*(byte *)((int)piVar1 + 0x8f) & 0x40) != 0)) {
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xb8))(piVar1 GEN_EDX_ARG);
      if ((char)uVar3 == '\0') {
        uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x84))(piVar1 GEN_EDX_ARG);
      }
      else {
        F_00aa0b30(piVar1 GEN_EDX_ARG);
        ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x84))(piVar1 GEN_EDX_ARG);
        uVar3 = F_00aa8770(piVar1 GEN_EDX_ARG);
      }
    }
    uVar4 = uVar4 + 1;
    bVar7 = uVar4 < 0x158;
  } while ((int)uVar4 < 0x158);
  F_00c47745((*(uint *)(gen_frame + 0xad8)) ^ (uint)(uint)(gen_frame + 0xadc) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_00a35a90 */
GEN_FRAME unsigned int GEN_THISCALL F_00a35a90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa35a90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 * puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int local_8;
  
  iVar3 = param_1;
  while (iVar3 < param_2) {
    local_8 = param_2;
    puVar6 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + (param_2 + iVar3 >> 1) * 4 + 0x560)));
    uVar7 = ((gen_lcode *)*(gen_code32 *)*puVar6)(puVar6);
    iVar4 = iVar3;
    while( true ) {
      puVar6 = *(undefined4 * PTR32 *)((int)this + iVar4 * 4 + 0x560);
      iVar5 = (int)this + iVar4 * 4 + 0x560;
      uVar8 = ((gen_lcode *)*(gen_code32 *)*puVar6)(puVar6);
      while (uVar8 < uVar7) {
        puVar6 = (undefined4 *)(iVar5 + 4);
        iVar5 = iVar5 + 4;
        iVar4 = iVar4 + 1;
        uVar8 = (*((code *)GEN_TOP(**(undefined4 * PTR32 *)*puVar6)))((undefined4 *)*puVar6);
      }
      puVar6 = (undefined4 *)((int)this + local_8 * 4 + 0x560);
      uVar8 = (*((code *)GEN_TOP(**(undefined4 * PTR32 *)*puVar6)))((undefined4 *)*puVar6);
      iVar5 = local_8;
      while (uVar7 < uVar8) {
        puVar1 = puVar6 - 1;
        iVar5 = iVar5 - 1;
        puVar6 = puVar6 - 1;
        uVar8 = (*((code *)GEN_TOP(**(undefined4 * PTR32 *)*puVar1)))((undefined4 *)*puVar1);
      }
      if (iVar5 <= iVar4) break;
      uVar2 = *(undefined4 *)((int)this + iVar4 * 4 + 0x560);
      *(undefined4 *)((int)this + iVar4 * 4 + 0x560) =
           *(undefined4 *)((int)this + iVar5 * 4 + 0x560);
      *(undefined4 *)((int)this + iVar5 * 4 + 0x560) = uVar2;
      iVar4 = iVar4 + 1;
      local_8 = iVar5 - 1;
    }
    if (iVar3 < iVar4 - 1) {
      F_00a35a90(this GEN_EDX_ARG,iVar3,iVar4 - 1);
    }
    iVar3 = iVar5 + 1;
  }
  return 0;
}

/* ref: FUN_00a35bb0 */
GEN_FRAME uint GEN_THISCALL F_00a35bb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa35bb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  uVar8 = param_1;
  uVar5 = param_1;
  while ((int)uVar8 < param_2) {
    uVar2 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + ((int)(param_2 + uVar8) >> 1) * 4 + 0xac0))) + 0x74)));
    uVar5 = uVar8;
    iVar7 = param_2;
    while( true ) {
      iVar6 = (int)this + uVar5 * 4 + 0xac0;
      uVar3 = *((uint *)GEN_TOP((*(int *)((int)this + uVar5 * 4 + 0xac0) + 0x74)));
      while (uVar3 < uVar2) {
        piVar1 = (int *)(iVar6 + 4);
        iVar6 = iVar6 + 4;
        uVar5 = uVar5 + 1;
        uVar3 = *(uint *)(*piVar1 + 0x74);
      }
      iVar6 = (int)this + iVar7 * 4 + 0xac0;
      uVar3 = *((uint *)GEN_TOP((*(int *)((int)this + iVar7 * 4 + 0xac0) + 0x74)));
      while (uVar2 < uVar3) {
        piVar1 = (int *)(iVar6 - 4);
        iVar6 = iVar6 - 4;
        iVar7 = iVar7 - 1;
        uVar3 = *(uint *)(*piVar1 + 0x74);
      }
      if (iVar7 <= (int)uVar5) break;
      uVar4 = *(undefined4 *)((int)this + uVar5 * 4 + 0xac0);
      *(undefined4 *)((int)this + uVar5 * 4 + 0xac0) =
           *(undefined4 *)((int)this + iVar7 * 4 + 0xac0);
      *(undefined4 *)((int)this + iVar7 * 4 + 0xac0) = uVar4;
      uVar5 = uVar5 + 1;
      iVar7 = iVar7 - 1;
    }
    uVar5 = uVar5 - 1;
    if ((int)uVar8 < (int)uVar5) {
      uVar5 = F_00a35bb0(this GEN_EDX_FWD,uVar8,uVar5);
    }
    uVar8 = iVar7 + 1;
  }
  return uVar5;
}

/* ref: FUN_00a35c90 */
GEN_FRAME float10 F_00a35c90(float gen_a0)
{
  GEN_ENTER(0xa35c90u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: FUN_00a35cb0 */
GEN_NOFRAME byte F_00a35cb0(void)
{
  GEN_ENTER(0xa35cb0u, 0u, 0u, 0u, 0u);
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_00ab1c90(*(undefined4 *)&REFG(undefined2, 0x1379c78));
  bVar1 = F_00a4a790(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x3d);
  if (((bVar1 != 0) && (!(*(float *)&REFG(undefined, 0x1088114) < REFG(float, 0x14bd70c)))) && (uVar2 != 0)) {
    uVar2 = F_00ab1cc0((uint)*(byte *)(uVar2 + 0x2a));
    if (uVar2 != 0) {
      return *(byte *)(uVar2 + 2);
    }
  }
  return 0;
}

/* ref: FUN_00a35d00 */
GEN_FRAME uint F_00a35d00(unsigned int gen_a0)
{
  GEN_ENTER(0xa35d00u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = F_00ab24a0(param_1);
  if (uVar1 == 0) {
    return 0;
  }
  if ((REFG(undefined1, 0x14ab0d2) != 0) && (*(char *)(REFG(undefined1, 0x14ab0d2) + 0xc2 + uVar1) != '\0')) {
    if (REFG(char, 0x14ab0d1) == '\0') {
      if (*(char *)(uVar1 + 200) == '\0') {
        return 4;
      }
    }
    else if ((REFG(char, 0x14ab0d1) == '\x01') && (*(char *)(uVar1 + 0xc9) == '\0')) {
      return 4;
    }
    if ((*(char *)(uVar1 + 0xaf) == '\0') || (*(char *)(uVar1 + 0xaf) == REFG(char, 0x14ab29a))) {
      uVar3 = (uint)REFG(undefined1, 0x14ab0d4);
      uVar2 = F_00ab21d0((uint)*(byte *)(uVar1 + 0xac));
      if ((*(char *)(uVar2 + 4 + uVar3) != '\0') &&
         (uVar2 = F_00a68280(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,uVar3,0),
         (uint)*(byte *)(uVar1 + 0x9f) <= (uVar2 & 0xffff))) {
        return 1;
      }
      iVar4 = 1;
      while ((uVar2 = F_00ab21d0((uint)*(byte *)(uVar1 + 0xac)),
             *(char *)(uVar2 + 4 + iVar4) == '\0' ||
             (uVar2 = F_00a68280(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,iVar4,0),
             (uVar2 & 0xffff) < (uint)*(byte *)(uVar1 + 0x9f)))) {
        iVar4 = iVar4 + 1;
        if (0x1c < iVar4) {
          uVar1 = F_00ab21d0((uint)*(byte *)(uVar1 + 0xac));
          return (*(char *)(uVar1 + 4 + uVar3) == '\0') + 3;
        }
      }
      uVar1 = F_00ab25a0((uint)*(byte *)(uVar1 + 0xa6));
      return (*(char *)(uVar1 + 4) != '\x01') + 1;
    }
  }
  return 4;
}

/* ref: FUN_00a35e40 */
GEN_FRAME uint F_00a35e40(unsigned int gen_a0)
{
  GEN_ENTER(0xa35e40u, gen_a0, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00ab24a0((*(int *)&gen_a0));
  if ((uVar1 != 0) && ((*(int *)&gen_a0) != 0)) {
    return *(uint *)(uVar1 + 0x18);
  }
  return 0;
}

/* ref: FUN_00a35e70 */
GEN_FRAME uint F_00a35e70(unsigned int gen_a0)
{
  GEN_ENTER(0xa35e70u, gen_a0, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00ab24a0((*(int *)&gen_a0));
  if ((uVar1 != 0) && ((*(int *)&gen_a0) != 0)) {
    return *(uint *)(uVar1 + 0x18);
  }
  return 0;
}

/* ref: FUN_00a35ea0 */
GEN_FRAME byte F_00a35ea0(unsigned int gen_a0)
{
  GEN_ENTER(0xa35ea0u, gen_a0, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00ab24a0((*(int *)&gen_a0));
  if (((uVar1 != 0) && (*(char *)(uVar1 + 0xa7) == '\x01')) && ((*(int *)&gen_a0) - 0xf4241U < 999999)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a35ee0 */
GEN_FRAME uint GEN_THISCALL F_00a35ee0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa35ee0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *(uint *)(in_ecx + 8) = param_2;
  if ((*(char *)(in_ecx + 6) == '\0') &&
     (((param_2 < 0x1e8481 || (0x1e8909 < param_2)) && ((char)param_3 != '\0')))) {
    if (999999 < param_2) {
      *(byte *)(in_ecx + 0x14) = *(byte *)(in_ecx + 0x14) | 1;
      *(uint *)(in_ecx + 8) = param_2 - 1000000;
      return param_2 - 1000000;
    }
    *(byte *)(in_ecx + 0x14) = *(byte *)(in_ecx + 0x14) & 0xfe;
  }
  return param_2;
}

/* ref: FUN_00a35f30 */
GEN_NOFRAME uint GEN_THISCALL F_00a35f30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa35f30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined1 *)((int)this + 0x14) = 0;
  *(undefined2 *)((int)this + 0x12) = 30000;
  *(undefined1 *)((int)this + 0x2f) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined1 *)((int)this + 6) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined2 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined2 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2a) = 0;
  *(undefined1 *)((int)this + 0x2e) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined1 *)((int)this + 0x38) = 0;
  return 0;
}

/* ref: FUN_00a35f80 */
GEN_FRAME uint GEN_THISCALL F_00a35f80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa35f80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(uint *)((int)this + 0xc) = param_1;
  if (((param_1 == 0) && (*(undefined4 *)((int)this + 0xc) = 0, *(char *)((int)this + 6) == '\0'))
     && (*(int *)((int)this + 8) != 1)) {
    *(undefined4 *)((int)this + 8) = 0;
  }
  return param_1;
}

/* ref: FUN_00a35fb0 */
GEN_FRAME byte GEN_THISCALL F_00a35fb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa35fb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 0x3c);
  if (iVar3 != 0) {
    this_00 = (undefined *)F_006b8c00();
    piVar1 = (int *)F_006e3240(this_00 GEN_EDX_ARG,iVar3);
    if (piVar1 != (int *)0x0) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
      if ((char)uVar2 != '\0') {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x1b8))(piVar1 GEN_EDX_ARG,param_1);
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00a36000 */
GEN_NOFRAME byte GEN_THISCALL F_00a36000(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa36000u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = (byte)(((uint)*(ushort *)((int)this + 0x12) * 100) / 30000);
  if ((bVar1 == 0) && (*(ushort *)((int)this + 0x12) != 0)) {
    bVar1 = 1;
  }
  return bVar1;
}

/* ref: FUN_00a36030 */
GEN_FRAME uint GEN_THISCALL F_00a36030(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa36030u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  undefined1 * puVar4;
  int iVar5;
  
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (param_2 < 4) {
    *(undefined4 *)((int)this + 0xc) = 0x19;
  }
  else if (param_2 == 1000) {
    *(undefined4 *)((int)this + 0xc) = 0xe;
  }
  else if (param_2 == 2000) {
    *(undefined4 *)((int)this + 0xc) = 8;
  }
  else {
    if (param_2 != 0x7d1) {
      if (param_2 == 0x7d2) {
        *(undefined4 *)((int)this + 0xc) = 6;
        goto LAB_00a3620a;
      }
      if (param_2 == 0x7d3) {
        *(undefined4 *)((int)this + 0xc) = 0x10;
        goto LAB_00a3620a;
      }
      if (param_2 == 0x7d4) {
        *(undefined4 *)((int)this + 0xc) = 0x5f;
        goto LAB_00a3620a;
      }
      if (param_2 == 0x7d5) {
        *(undefined4 *)((int)this + 0xc) = 6;
        goto LAB_00a3620a;
      }
      if (param_2 == 0x7d6) {
        *(undefined4 *)((int)this + 0xc) = 6;
        goto LAB_00a3620a;
      }
      if (param_2 == 0x7d7) {
        *(undefined4 *)((int)this + 0xc) = 100;
        goto LAB_00a3620a;
      }
      if (param_2 == 0x7d8) {
        *(undefined4 *)((int)this + 0xc) = 0x19;
        goto LAB_00a3620a;
      }
      if (param_2 == 0x7d9) {
        *(undefined4 *)((int)this + 0xc) = 0xe;
        goto LAB_00a3620a;
      }
      if (param_2 == 0x7da) {
        *(undefined4 *)((int)this + 0xc) = 0xa0;
        goto LAB_00a3620a;
      }
      if (param_2 - 10000 < 7) {
        *(undefined4 *)((int)this + 0xc) = 0x19;
        goto LAB_00a3620a;
      }
      if (param_2 == 12000) {
        *(undefined4 *)((int)this + 0xc) = 8;
        goto LAB_00a3620a;
      }
      if (param_2 != 0x2ee1) {
        if (param_2 == 0x2ee2) {
          *(undefined4 *)((int)this + 0xc) = 0x14;
          goto LAB_00a3620a;
        }
        if (param_2 == 11000) {
          *(undefined4 *)((int)this + 0xc) = 0xe;
          goto LAB_00a3620a;
        }
        if (param_2 == 0xdac) {
          *(undefined4 *)((int)this + 0xc) = 0x19;
          goto LAB_00a3620a;
        }
        if (param_2 == 0xd48) {
          *(undefined4 *)((int)this + 0xc) = 9;
          goto LAB_00a3620a;
        }
        if (param_2 == 0xce4) {
          *(undefined4 *)((int)this + 0xc) = 0x19;
          goto LAB_00a3620a;
        }
        if (param_2 - 0xc80 < 10) {
          *(undefined4 *)((int)this + 0xc) = 0x19;
          goto LAB_00a3620a;
        }
        if (param_2 - 20000 < 5) {
          *(undefined4 *)((int)this + 0xc) = 0x32;
          goto LAB_00a3620a;
        }
        if (param_2 == 22000) {
          *(undefined4 *)((int)this + 0xc) = 8;
          goto LAB_00a3620a;
        }
        if (param_2 != 0x55f1) {
          return param_2;
        }
      }
    }
    *(undefined4 *)((int)this + 0xc) = 0x12;
  }
LAB_00a3620a: ;
  uVar3 = *(uint *)((int)this + 0xc);
  lVar1 = (ulonglong)uVar3 * 0x40;
  uVar2 = F_00406bb0(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1,0,0);
  if (uVar2 == 0) {
    uVar2 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = uVar3 - 1;
    if (-1 < (int)uVar3) {
      puVar4 = (undefined1 *)(uVar2 + 6);
      do {
        *(undefined2 *)(puVar4 - 2) = 0;
        *(undefined4 *)(puVar4 - 6) = 9999;
        *puVar4 = 0;
        *(undefined4 *)(puVar4 + 2) = 0;
        *(undefined4 *)(puVar4 + 6) = 0;
        *(undefined4 *)(puVar4 + 0x12) = 0;
        *(undefined4 *)(puVar4 + 0x16) = 0;
        puVar4[0xe] = 0;
        puVar4[0x29] = 0;
        *(undefined4 *)(puVar4 + 0x2a) = 0;
        *(undefined4 *)(puVar4 + 0x36) = 0;
        *(undefined2 *)(puVar4 + 0xc) = 30000;
        *(undefined2 *)(puVar4 + 10) = 0;
        *(undefined4 *)(puVar4 + 0x1a) = 0;
        *(undefined4 *)(puVar4 + 0x1e) = 0;
        *(undefined2 *)(puVar4 + 0x22) = 0;
        *(undefined4 *)(puVar4 + 0x24) = 0;
        puVar4[0x28] = 0;
        *(undefined4 *)(puVar4 + 0x2e) = 0;
        puVar4[0x32] = 0;
        puVar4 = puVar4 + 0x40;
        uVar3 = uVar3 - 1;
      } while (-1 < (int)uVar3);
    }
  }
  *(uint *)this = uVar2;
  if (uVar2 != 0) {
    *(uint *)((int)this + 8) = param_2;
    uVar3 = 0;
    if (0 < *(int *)((int)this + 0xc)) {
      iVar5 = 0;
      do {
        *(undefined4 *)(iVar5 + *(int *)this) = *(undefined4 *)((int)this + 8);
        *(short *)(iVar5 + 4 + *(int *)this) = (short)uVar3;
        uVar3 = uVar3 + 1;
        iVar5 = iVar5 + 0x40;
      } while ((int)uVar3 < *(int *)((int)this + 0xc));
    }
    *(undefined1 *)((int)this + 0x10) = 0;
  }
  return uVar3;
}

/* ref: FUN_00a362e0 */
GEN_NOFRAME uint GEN_THISCALL F_00a362e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa362e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar2 = F_00406b30(*(int *)this);
    uVar1 = (uint)uVar2;
    *(undefined4 *)this = 0;
  }
  return uVar1;
}

/* ref: FUN_00a36310 */
GEN_FRAME unsigned int GEN_THISCALL F_00a36310(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa36310u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  int local_8;
  
  local_8 = 0;
  if (0 < *(int *)((int)this + 0xc)) {
    iVar3 = 0;
    do {
      if (*(int *)((int)this + 8) == 0x7d5) {
        *(undefined1 *)(iVar3 + 6 + *(int *)this) = 0;
      }
      iVar2 = *(int *)this;
      if (iVar2 != 0) {
        *(undefined4 *)(iVar3 + 8 + iVar2) = 0;
        *(undefined4 *)(iVar3 + 0xc + iVar2) = 0;
        *(undefined4 *)(iVar3 + 0x18 + iVar2) = 0;
        *(undefined4 *)(iVar3 + 0x1c + iVar2) = 0;
        *(undefined1 *)(iVar3 + 0x14 + iVar2) = 0;
        *(undefined1 *)(iVar3 + 0x2f + iVar2) = 0;
        *(undefined4 *)(iVar3 + 0x30 + iVar2) = 0;
        *(undefined1 *)(iVar3 + 6 + iVar2) = 0;
        *(undefined4 *)(iVar3 + 0x3c + iVar2) = 0;
        *(undefined2 *)(iVar3 + 0x12 + iVar2) = 30000;
        *(undefined2 *)(iVar3 + 0x10 + iVar2) = 0;
        *(undefined4 *)(iVar3 + 0x20 + iVar2) = 0;
        *(undefined4 *)(iVar3 + 0x24 + iVar2) = 0;
        *(undefined2 *)(iVar3 + 0x28 + iVar2) = 0;
        *(undefined4 *)(iVar3 + 0x2a + iVar2) = 0;
        *(undefined1 *)(iVar3 + 0x2e + iVar2) = 0;
        puVar1 = (undefined4 *)(iVar3 + 0x34 + iVar2);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 0;
      }
      local_8 = local_8 + 1;
      iVar3 = iVar3 + 0x40;
    } while (local_8 < *(int *)((int)this + 0xc));
  }
  return;
}

/* ref: FUN_00a363c0 */
GEN_FRAME uint GEN_THISCALL F_00a363c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa363c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (((*(int *)this != 0) && (-1 < (*(int *)&gen_a1))) && ((*(int *)&gen_a1) < *(int *)((int)this + 0xc))) {
    return (*(int *)&gen_a1) * 0x40 + *(int *)this;
  }
  return 0;
}

/* ref: FUN_00a363f0 */
GEN_FRAME byte GEN_THISCALL F_00a363f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa363f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < *(int *)((int)this + 0xc)) {
      piVar3 = (int *)(iVar1 + 8);
      do {
        if ((*(char *)((int)piVar3 - 2) == '\0') && (*piVar3 == 0)) {
          *param_1 = iVar2 * 0x40 + iVar1;
          return 1;
        }
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 0x10;
      } while (iVar2 < *(int *)((int)this + 0xc));
    }
  }
  return 0;
}

/* ref: FUN_00a36440 */
GEN_FRAME uint GEN_THISCALL F_00a36440(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa36440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    uVar2 = (uint)(ushort)param_1;
    if ((int)uVar2 < *(int *)((int)this + 0xc)) {
      piVar3 = (int *)(uVar2 * 0x40 + 8 + iVar1);
      do {
        if ((*(char *)((int)piVar3 - 2) == '\0') && (*piVar3 == 0)) {
          return uVar2 * 0x40 + iVar1;
        }
        uVar2 = uVar2 + 1;
        piVar3 = piVar3 + 0x10;
      } while ((int)uVar2 < *(int *)((int)this + 0xc));
    }
  }
  return 0;
}

/* ref: FUN_00a36490 */
GEN_FRAME uint F_00a36490(unsigned int gen_a0)
{
  GEN_ENTER(0xa36490u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int iVar1;
  
  if ((int)param_1 < 0) {
    if (3 < (int)param_1) goto LAB_00a364a6;
    if (4 < (int)param_1) goto LAB_00a364b7;
    if (REFG(int, 0x13342b8) <= (int)param_1) goto LAB_00a364d2;
  }
  else {
    if ((int)param_1 < 4) {
      return param_1;
    }
LAB_00a364a6: ;
    if ((int)param_1 < 5) {
      return param_1 + 0x3e4;
    }
LAB_00a364b7: ;
    if ((int)param_1 < REFG(int, 0x13342b8)) {
      return param_1 + 0x7cb;
    }
LAB_00a364d2: ;
    if ((int)param_1 < REFG(int, 0x13342b8) + 7) {
      return (param_1 - REFG(int, 0x13342b8)) + 10000;
    }
  }
  if ((REFG(int, 0x13342b8) + 7 <= (int)param_1) && ((int)param_1 < REFG(int, 0x13342b8) + 8)) {
    return (param_1 - REFG(int, 0x13342b8)) + 0x2af1;
  }
  if ((REFG(int, 0x13342b8) + 8 <= (int)param_1) && ((int)param_1 < REFG(int, 0x13342b4) + REFG(int, 0x13342b8))) {
    return (param_1 - REFG(int, 0x13342b8)) + 0x2ed8;
  }
  if ((REFG(int, 0x13342b4) + REFG(int, 0x13342b8) <= (int)param_1) &&
     ((int)param_1 < REFG(int, 0x13342b4) + REFG(int, 0x13342b8) + 1)) {
    return ((param_1 - REFG(int, 0x13342b4)) - REFG(int, 0x13342b8)) + 0xdac;
  }
  iVar1 = REFG(int, 0x13342b0) + REFG(int, 0x13342b4) + REFG(int, 0x13342b8);
  if (param_1 == iVar1 - 2U) {
    return 0xce4;
  }
  if (param_1 == iVar1 - 1U) {
    return 0xd48;
  }
  if ((int)param_1 < REFG(int, 0x13342b4) + 1 + REFG(int, 0x13342b8)) {
    if ((int)param_1 < iVar1) goto LAB_00a36594;
  }
  else if ((int)param_1 < iVar1) {
    return ((param_1 - REFG(int, 0x13342b4)) - REFG(int, 0x13342b8)) + 0xc7f;
  }
  if ((int)param_1 < iVar1 + 5) {
    return (((param_1 - REFG(int, 0x13342b0)) - REFG(int, 0x13342b4)) - REFG(int, 0x13342b8)) + 20000;
  }
LAB_00a36594: ;
  if ((iVar1 + 5 <= (int)param_1) &&
     ((int)param_1 < REFG(int, 0x13342ac) + REFG(int, 0x13342b0) + REFG(int, 0x13342b4) + REFG(int, 0x13342b8))) {
    return (((param_1 - REFG(int, 0x13342b0)) - REFG(int, 0x13342b4)) - REFG(int, 0x13342b8)) + 0x55eb;
  }
  return 9999;
}

/* ref: FUN_00a365d0 */
GEN_FRAME uint GEN_STDCALL F_00a365d0(unsigned int gen_a0)
{
  GEN_ENTER(0xa365d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte bVar1;
  uint * puVar2;
  
  bVar1 = F_00a68940(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG);
  if ((byte)((char)param_1 - 1U) < 3) {
    bVar1 = F_00a68920(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,param_1);
  }
  puVar2 = (uint *)F_00ab3fa0((uint)bVar1);
  if (puVar2 == (uint *)0x0) {
    return 0;
  }
  return *puVar2;
}

/* ref: FUN_00a36610 */
GEN_FRAME uint GEN_THISCALL F_00a36610(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa36610u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((ushort)param_2 < 5) {
    return (short)(ushort)param_2 * 0x40 + 0x1b0 + in_ecx;
  }
  return 0;
}

/* ref: FUN_00a36640 */
GEN_NOFRAME byte GEN_THISCALL F_00a36640(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa36640u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return 1 < *(int *)(in_ecx + 0x334) || REFG(char, 0x14a7375) == '\x01';
}

/* ref: FUN_00a36660 */
GEN_NOFRAME byte GEN_THISCALL F_00a36660(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa36660u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((*(int *)(in_ecx + 0x334) < 2) && (REFG(char, 0x14a7375) != '\x01')) {
    return 0;
  }
  return *(byte *)(in_ecx + 0x35c);
}

/* ref: FUN_00a36680 */
GEN_NOFRAME uint GEN_THISCALL F_00a36680(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa36680u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x334);
}

/* ref: FUN_00a36690 */
GEN_NOFRAME uint GEN_THISCALL F_00a36690(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa36690u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x338);
}

/* ref: FUN_00a366a0 */
GEN_NOFRAME uint F_00a366a0(void)
{
  GEN_ENTER(0xa366a0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  if (REFG(int * PTR32, 0x1379694) != (int *)0x0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1379694) + 0xc))))(REFG(int * PTR32, 0x1379694) GEN_EDX_ARG);
    return uVar1;
  }
  return 0x10e4aa8;
}

/* ref: FUN_00a366c0 */
GEN_NOFRAME uint GEN_THISCALL F_00a366c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa366c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x33c;
}

/* ref: FUN_00a366d0 */
GEN_FRAME byte F_00a366d0(unsigned int gen_a0)
{
  GEN_ENTER(0xa366d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (param_1 == 1000) {
    return 1;
  }
  return param_1 == 11000;
}

/* ref: FUN_00a366f0 */
GEN_FRAME byte F_00a366f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa366f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (param_1 - 10000U < 7) {
    return 1;
  }
  return param_1 - 12000U < 3;
}

/* ref: FUN_00a36720 */
GEN_FRAME byte F_00a36720(unsigned int gen_a0)
{
  GEN_ENTER(0xa36720u, gen_a0, 0u, 0u, 0u);
  if ((((*(int *)&gen_a0) != 0x7d5) && ((*(int *)&gen_a0) != 0x7d2)) && ((*(int *)&gen_a0) != 0x7d7)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00a36750 */
GEN_FRAME byte F_00a36750(unsigned int gen_a0)
{
  GEN_ENTER(0xa36750u, gen_a0, 0u, 0u, 0u);
  if (((((*(int *)&gen_a0) != 0xdac) && (9 < (*(int *)&gen_a0) - 0xc80U)) && ((*(int *)&gen_a0) != 0xce4)) && ((*(int *)&gen_a0) != 0xd48))
  {
    return 0;
  }
  return 1;
}

/* ref: FUN_00a36790 */
GEN_FRAME byte F_00a36790(unsigned int gen_a0)
{
  GEN_ENTER(0xa36790u, gen_a0, 0u, 0u, 0u);
  if ((((*(int *)&gen_a0) != 0x7d1) && ((*(int *)&gen_a0) != 0x2ee1)) && ((*(int *)&gen_a0) != 0x55f1)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00a367c0 */
GEN_FRAME byte F_00a367c0(unsigned int gen_a0)
{
  GEN_ENTER(0xa367c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 == 0x2ee1;
}

/* ref: FUN_00a367d0 */
GEN_FRAME uint GEN_THISCALL F_00a367d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa367d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return *(uint *)((int)this + (short)param_1 * 8 + 0x2340);
}

/* ref: FUN_00a367f0 */
GEN_FRAME uint GEN_THISCALL F_00a367f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa367f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)(short)param_1;
  *(undefined4 *)((int)this + iVar1 * 8 + 0x2340) = param_2;
  *(undefined4 *)((int)this + iVar1 * 8 + 0x2344) = 0;
  uVar2 = F_00a51200(0x20,iVar1,param_2,0,0);
  return uVar2;
}

/* ref: FUN_00a36850 */
GEN_NOFRAME uint GEN_THISCALL F_00a36850(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa36850u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  puVar2 = (undefined4 *)((int)this + 0x2184);
  iVar3 = 8;
  do {
    puVar2[-3] = 0;
    puVar2[-2] = 0;
    puVar2[-1] = 0;
    *puVar2 = 0x10000;
    puVar2[1] = 0;
    uVar1 = F_00c49908(puVar2 + 2,0x20,"RETAINER");
    puVar2 = puVar2 + 0xe;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  return uVar1;
}

/* ref: FUN_00a36890 */
GEN_FRAME byte F_00a36890(unsigned int gen_a0)
{
  GEN_ENTER(0xa36890u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = F_00ab21d0((uint)*(byte *)(param_1 + 0xac));
  if (uVar1 == 0) {
    return 1;
  }
  iVar3 = 0;
  do {
    if (*(char *)(uVar1 + 4 + iVar3) == '\x01') {
      uVar2 = F_00ab21a0(iVar3);
      if (uVar2 == 0) {
        return 1;
      }
      if (*(char *)(uVar2 + 0x45) != '\0') {
        return 0;
      }
    }
    iVar3 = iVar3 + 1;
    if (0x1c < iVar3) {
      return 1;
    }
  } while( true );
}

/* ref: FUN_00a368f0 */
GEN_FRAME byte F_00a368f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa368f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_00ab21d0((uint)*(byte *)(param_1 + 0xac));
  if (uVar1 == 0) {
    return 0;
  }
  return *(byte *)(uVar1 + 4 + param_2);
}

/* ref: FUN_00a36920 */
GEN_FRAME byte F_00a36920(unsigned int gen_a0)
{
  GEN_ENTER(0xa36920u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  int iVar2;
  
  if (param_1 != 0) {
    uVar1 = F_00ab25a0((uint)*(byte *)(param_1 + 0xa6));
    iVar2 = 0;
    do {
      if (*(char *)(uVar1 + 4 + iVar2) == '\x01') goto LAB_00a36952;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0xe);
  }
  iVar2 = 0xe;
LAB_00a36952: ;
  return (byte)iVar2;
}

/* ref: FUN_00a36960 */
GEN_FRAME uint F_00a36960(unsigned int gen_a0)
{
  GEN_ENTER(0xa36960u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  if (0xd < (byte)param_1) {
    return 9999;
  }
  switch((unsigned int)(uintptr_t)((uint)(byte)param_1)) {
  case 0: ;
    return 0xdac;
  default: ;
    return (byte)param_1 + 0xc7f;
  case 0xb: ;
  case 0xc: ;
    return 0xce4;
  case 0xd: ;
    return 0xd48;
  }
}

/* ref: FUN_00a369d0 */
GEN_NOFRAME uint F_00a369d0(void)
{
  GEN_ENTER(0xa369d0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  if ((REFG(void * PTR32, 0x1379694) != (undefined *)0x0) && (*((char *)GEN_TOP(((int)REFG(void * PTR32, 0x1379694) + 0x188))) == '\a')) {
    F_00aa2900(REFG(void * PTR32, 0x1379694) GEN_EDX_ARG,0);
  }
  uVar1 = F_00a51200(0x2d,0,0,0,0);
  return uVar1;
}

/* ref: FUN_00a36a00 */
GEN_FRAME uint GEN_STDCALL F_00a36a00(unsigned int gen_a0)
{
  GEN_ENTER(0xa36a00u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  if ((REFG(void * PTR32, 0x1379694) != (undefined *)0x0) && (*((char *)GEN_TOP(((int)REFG(void * PTR32, 0x1379694) + 0x188))) == '\a')) {
    F_00aa2900(REFG(void * PTR32, 0x1379694) GEN_EDX_ARG,0);
  }
  uVar1 = F_00a51200(0x2f,(uint)((char)param_1 != '\0'),0,0,0);
  return uVar1;
}

/* ref: FUN_00a36a40 */
GEN_FRAME uint GEN_STDCALL F_00a36a40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa36a40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a51200(0x31,param_1,param_2,0,0);
  return uVar1;
}

/* ref: FUN_00a36a60 */
GEN_FRAME uint GEN_STDCALL F_00a36a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa36a60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = param_1;
  if ((param_1 != (undefined4 *)0x0) && ((*(char *)((int)param_1 + 6) != '\0' || (param_1[2] != 0)))
     ) {
    puVar1 = (undefined4 *)
             F_00a51200(0x35,*param_1,(int)*(short *)(param_1 + 1),param_2,0);
  }
  return (uint)puVar1;
}

/* ref: FUN_00a36aa0 */
GEN_FRAME uint GEN_THISCALL F_00a36aa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa36aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte * pbVar1;
  undefined4 * puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = (uint)*(ushort *)(param_1 + 10) * 0x40;
  uVar3 = *(uint *)(param_1 + 0x10);
  *(uint *)((int)this + iVar4 + 0x1b8) = uVar3;
  if ((*(char *)((int)this + iVar4 + 0x1b6) == '\0') && ((uVar3 < 0x1e8481 || (0x1e8909 < uVar3))))
  {
    if (uVar3 < 1000000) {
      pbVar1 = (byte *)((int)this + iVar4 + 0x1c4);
      *pbVar1 = *pbVar1 & 0xfe;
    }
    else {
      pbVar1 = (byte *)((int)this + iVar4 + 0x1c4);
      *pbVar1 = *pbVar1 | 1;
      *(uint *)((int)this + iVar4 + 0x1b8) = uVar3 - 1000000;
    }
  }
  iVar4 = *(int *)(param_1 + 0xc);
  iVar5 = (uint)*(ushort *)(param_1 + 10) * 0x40;
  *(int *)((int)this + iVar5 + 0x1bc) = iVar4;
  if (((iVar4 == 0) &&
      (*(undefined4 *)((int)this + iVar5 + 0x1bc) = 0, *(char *)((int)this + iVar5 + 0x1b6) == '\0')
      ) && (*(int *)((int)this + iVar5 + 0x1b8) != 1)) {
    *(undefined4 *)((int)this + iVar5 + 0x1b8) = 0;
  }
  iVar4 = (uint)*(ushort *)(param_1 + 10) * 0x40;
  *(undefined4 *)(iVar4 + 0x1c8 + (int)this) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(iVar4 + 0x1cc + (int)this) = *(undefined4 *)(param_1 + 0x1c);
  *((undefined1 *)GEN_TOP(((uint)*(ushort *)(param_1 + 10) * 0x40 + 0x1c4 + (int)this))) =
       *(undefined1 *)(param_1 + 0x20);
  *((undefined2 *)GEN_TOP(((*(ushort *)(param_1 + 10) + 7) * 0x40 + (int)this))) =
       *(undefined2 *)(param_1 + 0x24);
  *((undefined2 *)GEN_TOP(((uint)*(ushort *)(param_1 + 10) * 0x40 + 0x1c2 + (int)this))) =
       *(undefined2 *)(param_1 + 0x22);
  *((undefined1 *)GEN_TOP(((uint)*(ushort *)(param_1 + 10) * 0x40 + 0x1df + (int)this))) =
       *(undefined1 *)(param_1 + 0x26);
  *((undefined4 *)GEN_TOP(((uint)*(ushort *)(param_1 + 10) * 0x40 + 0x1e0 + (int)this))) =
       *(undefined4 *)(param_1 + 0x28);
  iVar4 = (uint)*(ushort *)(param_1 + 10) * 0x40;
  *(undefined4 *)(iVar4 + 0x1d0 + (int)this) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(iVar4 + 0x1d4 + (int)this) = *(undefined4 *)(param_1 + 0x30);
  *(undefined2 *)((int)this + iVar4 + 0x1d8) = *(undefined2 *)(param_1 + 0x34);
  puVar2 = ((undefined4 *)GEN_TOP(((uint)*(ushort *)(param_1 + 10) * 0x40 + 0x1da + (int)this)));
  *puVar2 = *(undefined4 *)(param_1 + 0x36);
  *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(param_1 + 0x3a);
  puVar2 = ((undefined4 *)GEN_TOP(((uint)*(ushort *)(param_1 + 10) * 0x40 + 0x1e4 + (int)this)));
  *puVar2 = *(undefined4 *)(param_1 + 0x3b);
  *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(param_1 + 0x3f);
  return (uint)puVar2;
}

/* ref: FUN_00a36c00 */
GEN_FRAME uint GEN_THISCALL F_00a36c00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa36c00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte * pbVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = (uint)*(ushort *)(param_1 + 6) * 0x40;
  uVar2 = *(uint *)(param_1 + 0x10);
  *(uint *)((int)this + iVar3 + 0x1b8) = uVar2;
  if ((*(char *)(iVar3 + 0x1b6 + (int)this) == '\0') && ((uVar2 < 0x1e8481 || (0x1e8909 < uVar2))))
  {
    if (uVar2 < 1000000) {
      pbVar1 = (byte *)((int)this + iVar3 + 0x1c4);
      *pbVar1 = *pbVar1 & 0xfe;
    }
    else {
      pbVar1 = (byte *)((int)this + iVar3 + 0x1c4);
      *pbVar1 = *pbVar1 | 1;
      *(uint *)((int)this + iVar3 + 0x1b8) = uVar2 - 1000000;
    }
  }
  iVar3 = *(int *)(param_1 + 8);
  uVar2 = (uint)*(ushort *)(param_1 + 6) * 0x40 + 0x1b0 + (int)this;
  *(int *)(uVar2 + 0xc) = iVar3;
  if (((iVar3 == 0) && (*(undefined4 *)(uVar2 + 0xc) = 0, *(char *)(uVar2 + 6) == '\0')) &&
     (*(int *)(uVar2 + 8) != 1)) {
    *(undefined4 *)(uVar2 + 8) = 0;
  }
  return uVar2;
}

/* ref: FUN_00a36c80 */
GEN_NOFRAME uint GEN_THISCALL F_00a36c80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa36c80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  
  iVar4 = 0;
  do {
    iVar1 = *(int *)this;
    if ((iVar1 != 0) && (*(int *)(iVar4 + iVar1) != 0)) {
      F_00406b30(*(int *)(iVar4 + iVar1));
      *(undefined4 *)(iVar4 + iVar1) = 0;
    }
    iVar4 = iVar4 + 0x20;
  } while (iVar4 < 0x80);
  piVar2 = *(int * PTR32 *)((int)this + 4);
  if ((piVar2 != (int *)0x0) && (*piVar2 != 0)) {
    F_00406b30(*piVar2);
    *piVar2 = 0;
  }
  iVar4 = 0;
  do {
    iVar1 = *(int *)((int)this + 8);
    if ((iVar1 != 0) && (*(int *)(iVar4 + iVar1) != 0)) {
      F_00406b30(*(int *)(iVar4 + iVar1));
      *(undefined4 *)(iVar4 + iVar1) = 0;
    }
    iVar4 = iVar4 + 0x20;
  } while (iVar4 < 0x160);
  iVar4 = 0;
  do {
    iVar1 = *(int *)((int)this + 0xc);
    if ((iVar1 != 0) && (*(int *)(iVar4 + iVar1) != 0)) {
      F_00406b30(*(int *)(iVar4 + iVar1));
      *(undefined4 *)(iVar4 + iVar1) = 0;
    }
    iVar4 = iVar4 + 0x20;
  } while (iVar4 < 0xe0);
  piVar2 = *(int * PTR32 *)((int)this + 0x10);
  if ((piVar2 != (int *)0x0) && (*piVar2 != 0)) {
    F_00406b30(*piVar2);
    *piVar2 = 0;
  }
  iVar4 = 0;
  do {
    iVar1 = *(int *)((int)this + 0x14);
    if ((iVar1 != 0) && (*(int *)(iVar4 + iVar1) != 0)) {
      F_00406b30(*(int *)(iVar4 + iVar1));
      *(undefined4 *)(iVar4 + iVar1) = 0;
    }
    iVar4 = iVar4 + 0x20;
  } while (iVar4 < 0x60);
  piVar2 = *(int * PTR32 *)((int)this + 0x18);
  if ((piVar2 != (int *)0x0) && (*piVar2 != 0)) {
    F_00406b30(*piVar2);
    *piVar2 = 0;
  }
  iVar4 = 0;
  do {
    iVar1 = *(int *)((int)this + 0x1c);
    if ((iVar1 != 0) && (*(int *)(iVar4 + iVar1) != 0)) {
      F_00406b30(*(int *)(iVar4 + iVar1));
      *(undefined4 *)(iVar4 + iVar1) = 0;
    }
    iVar4 = iVar4 + 0x20;
  } while (iVar4 < 0x180);
  iVar4 = 0;
  do {
    iVar1 = *(int *)((int)this + 0x20);
    if ((iVar1 != 0) && (*(int *)(iVar4 + iVar1) != 0)) {
      F_00406b30(*(int *)(iVar4 + iVar1));
      *(undefined4 *)(iVar4 + iVar1) = 0;
    }
    iVar4 = iVar4 + 0x20;
  } while (iVar4 < 0xa0);
  iVar4 = 0;
  do {
    iVar1 = *(int *)((int)this + 0x24);
    if ((iVar1 != 0) && (*(int *)(iVar4 + iVar1) != 0)) {
      F_00406b30(*(int *)(iVar4 + iVar1));
      *(undefined4 *)(iVar4 + iVar1) = 0;
    }
    iVar4 = iVar4 + 0x20;
  } while (iVar4 < 0x40);
  if (*(int *)this != 0) {
    F_00406b30(*(int *)this);
    *(undefined4 *)this = 0;
  }
  if (*(int *)((int)this + 4) != 0) {
    F_00406b30(*(int *)((int)this + 4));
    *(undefined4 *)((int)this + 4) = 0;
  }
  if (*(int *)((int)this + 8) != 0) {
    F_00406b30(*(int *)((int)this + 8));
    *(undefined4 *)((int)this + 8) = 0;
  }
  if (*(int *)((int)this + 0xc) != 0) {
    F_00406b30(*(int *)((int)this + 0xc));
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  if (*(int *)((int)this + 0x10) != 0) {
    F_00406b30(*(int *)((int)this + 0x10));
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  if (*(int *)((int)this + 0x14) != 0) {
    F_00406b30(*(int *)((int)this + 0x14));
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  if (*(int *)((int)this + 0x18) != 0) {
    F_00406b30(*(int *)((int)this + 0x18));
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  if (*(int *)((int)this + 0x1c) != 0) {
    F_00406b30(*(int *)((int)this + 0x1c));
    *(undefined4 *)((int)this + 0x1c) = 0;
  }
  if (*(int *)((int)this + 0x20) != 0) {
    F_00406b30(*(int *)((int)this + 0x20));
    *(undefined4 *)((int)this + 0x20) = 0;
  }
  uVar3 = 0;
  if (*(int *)((int)this + 0x24) != 0) {
    uVar5 = F_00406b30(*(int *)((int)this + 0x24));
    uVar3 = (uint)uVar5;
    *(undefined4 *)((int)this + 0x24) = 0;
  }
  return uVar3;
}

/* ref: FUN_00a36f00 */
GEN_FRAME uint GEN_THISCALL F_00a36f00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa36f00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if ((*(uint *)((int)this + 0x2ff8) & 1 << ((byte)param_1 & 0x1f)) == 0) {
    return 0;
  }
  return param_1 * 0xd0 + 0x2498 + (int)this;
}

/* ref: FUN_00a36f30 */
GEN_FRAME uint GEN_THISCALL F_00a36f30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa36f30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if (((*(int *)this != 0) && (*(uint *)((int)this + 4) != 0)) && (*(int *)((int)this + 8) != 0)) {
    if (param_1 < 4) {
      return param_1 * 0x20 + *(int *)this;
    }
    if (param_1 == 1000) {
      return *(uint *)((int)this + 4);
    }
    if (param_1 - 2000 < 0xb) {
      return (param_1 - 2000) * 0x20 + *(int *)((int)this + 8);
    }
    if (param_1 - 10000 < 7) {
      return (param_1 - 10000) * 0x20 + *(int *)((int)this + 0xc);
    }
    if (param_1 == 11000) {
      return *(uint *)((int)this + 0x10);
    }
    if (param_1 - 12000 < 3) {
      return (param_1 - 12000) * 0x20 + *(int *)((int)this + 0x14);
    }
    if (param_1 == 0xdac) {
      return *(uint *)((int)this + 0x18);
    }
    if (param_1 == 0xd48) {
      return *(int *)((int)this + 0x1c) + 0x160;
    }
    if (param_1 == 0xce4) {
      return *(int *)((int)this + 0x1c) + 0x140;
    }
    if (param_1 - 0xc80 < 10) {
      return (param_1 - 0xc80) * 0x20 + *(int *)((int)this + 0x1c);
    }
    if (param_1 - 20000 < 5) {
      return (param_1 - 20000) * 0x20 + *(int *)((int)this + 0x20);
    }
    if (param_1 - 22000 < 2) {
      return (param_1 - 22000) * 0x20 + *(int *)((int)this + 0x24);
    }
  }
  return 0;
}

/* ref: FUN_00a370a0 */
GEN_FRAME byte GEN_THISCALL F_00a370a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa370a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a36f30(this GEN_EDX_FWD,param_1);
  return *(byte *)(uVar1 + 0x10);
}

/* ref: FUN_00a370c0 */
GEN_FRAME uint GEN_THISCALL F_00a370c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa370c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00a36f30(this GEN_EDX_FWD,param_1);
  *(undefined1 *)(uVar1 + 0x10) = (undefined1)param_2;
  return uVar1;
}

/* ref: FUN_00a370f0 */
GEN_FRAME uint GEN_THISCALL F_00a370f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa370f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a36f30(this GEN_EDX_FWD,(param_1 & 0xffff) + 1000);
  return uVar1;
}

/* ref: FUN_00a37110 */
GEN_NOFRAME uint GEN_THISCALL F_00a37110(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa37110u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x2338);
}

/* ref: FUN_00a37120 */
GEN_NOFRAME uint GEN_THISCALL F_00a37120(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa37120u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  uVar1 = 0;
  piVar2 = (int *)((int)this + 0x2178);
  do {
    if (*piVar2 == 0 && piVar2[1] == 0) {
      return uVar1;
    }
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 0xe;
  } while ((int)uVar1 < 2);
  return 0;
}

/* ref: FUN_00a37140 */
GEN_FRAME uint GEN_THISCALL F_00a37140(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa37140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  int * piVar2;
  uint uVar3;
  
  uVar3 = param_1;
  if (param_1 - 1 < 8) {
    uVar3 = 0;
    piVar2 = (int *)((int)this + 0x2178);
    uVar1 = param_1;
    while ((*piVar2 == 0 && piVar2[1] == 0 || (uVar1 = uVar1 - 1, uVar1 != 0))) {
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 0xe;
      if (7 < (int)uVar3) {
        return uVar1;
      }
    }
  }
  return uVar3;
}

/* ref: FUN_00a37180 */
GEN_NOFRAME uint GEN_THISCALL F_00a37180(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa37180u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  int * piVar3;
  undefined * extraout_ECX;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = 0;
  do {
    piVar2 = (int *)F_00a36f30(this GEN_EDX_FWD,iVar6);
    extraout_ECX = ((undefined *)(uint)(this));
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    iVar1 = *piVar2;
    if (iVar1 != 0) {
      iVar4 = 0;
      if (0 < piVar2[3]) {
        piVar3 = (int *)(iVar1 + 8);
        do {
          if ((*(char *)((int)piVar3 - 2) == '\0') && (*piVar3 == 0)) {
            uVar5 = iVar4 * 0x40 + iVar1;
            if (uVar5 != 0) {
              return uVar5;
            }
            break;
          }
          iVar4 = iVar4 + 1;
          piVar3 = piVar3 + 0x10;
        } while (iVar4 < piVar2[3]);
      }
    }
    iVar6 = iVar6 + 1;
    this = extraout_ECX;
    if (3 < iVar6) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_00a371d0 */
GEN_FRAME uint GEN_THISCALL F_00a371d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa371d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * pvVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  int * piVar5;
  int iVar6;
  int iVar7;
  
  if (((byte)REFG(undefined2, 0x14b4eb8) & 8) != 0) {
    uVar3 = F_00ab24a0(param_1);
    if (uVar3 == 0) {
      return 0;
    }
    if ((*(short *)(uVar3 + 0x90) == 0) || (*(uint *)(uVar3 + 0x28) < 2)) {
      if (*(char *)(uVar3 + 0xa6) == '\0') {
        if (*(int *)this == 0) {
          return 0;
        }
        if (*(int *)((int)this + 4) == 0) {
          return 0;
        }
        if (*(int *)((int)this + 8) == 0) {
          return 0;
        }
        pvVar1 = (undefined *)(*(int *)this + 0x60);
        if (pvVar1 == (undefined *)0x0) {
          return 0;
        }
        uVar3 = F_00a36440(pvVar1 GEN_EDX_ARG,0);
        if (uVar3 != 0) {
          return uVar3;
        }
      }
    }
    else {
      if (*(int *)this == 0) {
        return 0;
      }
      if (*(int *)((int)this + 4) == 0) {
        return 0;
      }
      if (*(int *)((int)this + 8) == 0) {
        return 0;
      }
      pvVar1 = (undefined *)(*(int *)this + 0x40);
      if (pvVar1 == (undefined *)0x0) {
        return 0;
      }
      uVar3 = F_00a36440(pvVar1 GEN_EDX_ARG,0);
      if (uVar3 != 0) {
        return uVar3;
      }
    }
  }
  iVar7 = 0;
  do {
    piVar4 = (int *)F_00a36f30(this GEN_EDX_ARG,iVar7);
    if (piVar4 == (int *)0x0) {
      return 0;
    }
    iVar2 = *piVar4;
    if (iVar2 != 0) {
      iVar6 = 0;
      if (0 < piVar4[3]) {
        piVar5 = (int *)(iVar2 + 8);
        do {
          if ((*(char *)((int)piVar5 - 2) == '\0') && (*piVar5 == 0)) {
            uVar3 = iVar6 * 0x40 + iVar2;
            if (uVar3 != 0) {
              return uVar3;
            }
            break;
          }
          iVar6 = iVar6 + 1;
          piVar5 = piVar5 + 0x10;
        } while (iVar6 < piVar4[3]);
      }
    }
    iVar7 = iVar7 + 1;
    if (3 < iVar7) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_00a372b0 */
GEN_NOFRAME uint GEN_THISCALL F_00a372b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa372b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  int * piVar3;
  undefined * extraout_ECX;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = 10000;
  do {
    piVar2 = (int *)F_00a36f30(this GEN_EDX_FWD,iVar6);
    extraout_ECX = ((undefined *)(uint)(this));
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    iVar1 = *piVar2;
    if (iVar1 != 0) {
      iVar4 = 0;
      if (0 < piVar2[3]) {
        piVar3 = (int *)(iVar1 + 8);
        do {
          if ((*(char *)((int)piVar3 - 2) == '\0') && (*piVar3 == 0)) {
            uVar5 = iVar4 * 0x40 + iVar1;
            if (uVar5 != 0) {
              return uVar5;
            }
            break;
          }
          iVar4 = iVar4 + 1;
          piVar3 = piVar3 + 0x10;
        } while (iVar4 < piVar2[3]);
      }
    }
    iVar6 = iVar6 + 1;
    this = extraout_ECX;
    if (0x2716 < iVar6) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_00a37310 */
GEN_FRAME uint GEN_STDCALL F_00a37310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa37310u, gen_a0, gen_a1, 0u, 0u);
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00ab24a0((*(int *)&gen_a0));
  uVar2 = param_2;
  if (((uVar1 != 0) && ((*(int *)&gen_a0) != 0)) &&
     (uVar2 = param_2 / *(uint *)(uVar1 + 0x28), param_2 % *(uint *)(uVar1 + 0x28) != 0)) {
    return uVar2 + 1;
  }
  return uVar2;
}

/* ref: FUN_00a37350 */
GEN_FRAME uint GEN_THISCALL F_00a37350(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa37350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  short sVar1;
  int iVar2;
  int * this_00;
  uint uVar3;
  int iVar4;
  int * piVar5;
  uint uVar6;
  
  uVar6 = 0;
  this_00 = (int *)F_00a36f30(this GEN_EDX_FWD,param_1);
  if (this_00 == (int *)0x0) {
    return 0;
  }
  uVar3 = F_00a36440(this_00 GEN_EDX_ARG,0);
  if ((uVar3 != 0) && (sVar1 = *(short *)(uVar3 + 4), sVar1 != -1)) {
    iVar2 = *this_00;
    while (uVar6 = uVar6 + 1, iVar2 != 0) {
      uVar3 = (uint)(ushort)(sVar1 + 1);
      if (this_00[3] <= (int)uVar3) {
        return uVar6;
      }
      piVar5 = (int *)(uVar3 * 0x40 + 8 + iVar2);
      while ((*(char *)((int)piVar5 - 2) != '\0' || (*piVar5 != 0))) {
        uVar3 = uVar3 + 1;
        piVar5 = piVar5 + 0x10;
        if (this_00[3] <= (int)uVar3) {
          return uVar6;
        }
      }
      iVar4 = uVar3 * 0x40 + iVar2;
      if (iVar4 == 0) {
        return uVar6;
      }
      sVar1 = *(short *)(iVar4 + 4);
      if (sVar1 == -1) {
        return uVar6;
      }
    }
  }
  return uVar6;
}

/* ref: FUN_00a373e0 */
GEN_FRAME uint F_00a373e0(unsigned int gen_a0)
{
  GEN_ENTER(0xa373e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  switch((unsigned int)(uintptr_t)((undefined1)param_1)) {
  case 0x13: ;
    return 0x11be;
  case 0x14: ;
    return 0x11bf;
  case 0x15: ;
    return 0x11c0;
  case 0x16: ;
    return 0x11c1;
  case 0x17: ;
    return 0x11c2;
  case 0x18: ;
    return 0x11c3;
  case 0x19: ;
    return 0x11c4;
  default: ;
    return 0;
  case 0x1b: ;
    return 0x11c5;
  case 0x1c: ;
    return 0x11c6;
  }
}

/* ref: FUN_00a374a0 */
GEN_FRAME uint GEN_THISCALL F_00a374a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa374a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  char * pcVar2;
  
  iVar1 = 0;
  pcVar2 = (char *)((int)this + 0x364);
  while ((*(int *)(pcVar2 + 4) != param_1 || (*pcVar2 != '\0'))) {
    iVar1 = iVar1 + 1;
    pcVar2 = pcVar2 + 0x3c;
    if (0x7f < iVar1) {
      return 0;
    }
  }
  return (int)this + iVar1 * 0x3c + 0x364;
}

/* ref: FUN_00a374e0 */
GEN_FRAME uint GEN_THISCALL F_00a374e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa374e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  char * pcVar2;
  
  iVar1 = 0;
  pcVar2 = (char *)((int)this + 0x364);
  while ((*(int *)(pcVar2 + 8) != param_1 || (*pcVar2 != '\0'))) {
    iVar1 = iVar1 + 1;
    pcVar2 = pcVar2 + 0x3c;
    if (0x7f < iVar1) {
      return 0;
    }
  }
  return (int)this + iVar1 * 0x3c + 0x364;
}

/* ref: FUN_00a37520 */
GEN_FRAME unsigned int GEN_THISCALL F_00a37520(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa37520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar2 = (undefined4 *)((int)this + 0x364);
  (*(int *)(gen_frame + 0x48)) = 0x80;
  do {
    if (puVar2[1] == param_1) {
      (*(undefined2 *)(gen_frame + 0x20)) = 0xffff;
      (*(undefined2 *)(gen_frame + 0x34)) = 0xffff;
      (*(undefined1 *)((char *)&((undefined4 *)(gen_frame + 0xc))[0] + 0)) = 1;
      ((undefined4 *)(gen_frame + 0xc))[1] = 0x10000000;
      ((undefined4 *)(gen_frame + 0xc))[2] = 0;
      ((undefined4 *)(gen_frame + 0xc))[3] = 0;
      ((undefined4 *)(gen_frame + 0xc))[4] = 9999;
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(undefined4 *)(gen_frame + 0x2c)) = 0;
      (*(undefined4 *)(gen_frame + 0x30)) = 9999;
      (*(undefined4 *)(gen_frame + 0x38)) = 0;
      (*(undefined4 *)(gen_frame + 0x3c)) = 0;
      (*(undefined4 *)(gen_frame + 0x40)) = 0;
      (*(undefined4 *)(gen_frame + 0x44)) = 0;
      puVar3 = ((undefined4 *)(gen_frame + 0xc));
      puVar4 = puVar2;
      for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 - 1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
    }
    puVar2 = puVar2 + 0xf;
    iVar1 = (*(int *)(gen_frame + 0x48)) - 1;
    (*(int *)(gen_frame + 0x48)) = iVar1;
  } while (iVar1 != 0);
  return 0;
}

/* ref: FUN_00a375a0 */
GEN_FRAME unsigned int GEN_THISCALL F_00a375a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa375a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x44)) = this;
  (*(int *)(gen_frame + 0x48)) = 0x80;
  puVar1 = (undefined4 *)((int)this + 0x364);
  do {
    (*(undefined2 *)(gen_frame + 0x1c)) = 0xffff;
    (*(undefined2 *)(gen_frame + 0x30)) = 0xffff;
    iVar4 = (*(int *)(gen_frame + 0x48)) - 1;
    (*(int *)(gen_frame + 0x48)) = iVar4;
    (*(undefined1 *)((char *)&((undefined4 *)(gen_frame + 0x8))[0] + 0)) = 1;
    ((undefined4 *)(gen_frame + 0x8))[1] = 0x10000000;
    ((undefined4 *)(gen_frame + 0x8))[2] = 0;
    ((undefined4 *)(gen_frame + 0x8))[3] = 0;
    ((undefined4 *)(gen_frame + 0x8))[4] = 9999;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x2c)) = 9999;
    (*(undefined4 *)(gen_frame + 0x34)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x3c)) = 0;
    (*(undefined4 *)(gen_frame + 0x40)) = 0;
    puVar3 = ((undefined4 *)(gen_frame + 0x8));
    puVar5 = puVar1;
    for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 - 1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar1 = puVar1 + 0xf;
  } while (iVar4 != 0);
  *(undefined1 *)((int)this + 0x35e) = 0;
  *(undefined1 *)((int)this + 0x35c) = 0;
  puVar1 = (undefined4 *)((int)this + 0x1bc);
  iVar4 = 6;
  do {
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *(undefined1 *)(puVar1 + 2) = 0;
    *(undefined1 *)((int)puVar1 + 0x23) = 0;
    puVar1[9] = 0;
    *(undefined1 *)((int)puVar1 - 6) = 0;
    puVar1[0xc] = 0;
    *(undefined2 *)((int)puVar1 + 6) = 30000;
    *(undefined2 *)(puVar1 + 1) = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *(undefined2 *)(puVar1 + 7) = 0;
    *(undefined4 *)((int)puVar1 + 0x1e) = 0;
    *(undefined1 *)((int)puVar1 + 0x22) = 0;
    puVar1[10] = 0;
    *(undefined1 *)(puVar1 + 0xb) = 0;
    puVar1 = puVar1 + 0x10;
    iVar4 = iVar4 - 1;
  } while (iVar4 != 0);
  return 0;
}

/* ref: FUN_00a376a0 */
GEN_FRAME uint GEN_THISCALL F_00a376a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa376a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  short * psVar1;
  int iVar2;
  
  iVar2 = 0x20;
  psVar1 = (short *)((int)this + 0x378);
  do {
    if ((*(int *)(psVar1 - 2) == param_1) && (*psVar1 == (short)param_2)) {
      *(undefined1 *)(psVar1 + 0x12) = 1;
    }
    if ((*(int *)(psVar1 + 8) == param_1) && (psVar1[10] == (short)param_2)) {
      *(undefined1 *)((int)psVar1 + 0x25) = 1;
    }
    if ((*(int *)(psVar1 + 0x1c) == param_1) && (psVar1[0x1e] == (short)param_2)) {
      *(undefined1 *)(psVar1 + 0x30) = 1;
    }
    if ((*(int *)(psVar1 + 0x26) == param_1) && (psVar1[0x28] == (short)param_2)) {
      *(undefined1 *)((int)psVar1 + 0x61) = 1;
    }
    if ((*(int *)(psVar1 + 0x3a) == param_1) && (psVar1[0x3c] == (short)param_2)) {
      *(undefined1 *)(psVar1 + 0x4e) = 1;
    }
    if ((*(int *)(psVar1 + 0x44) == param_1) && (psVar1[0x46] == (short)param_2)) {
      *(undefined1 *)((int)psVar1 + 0x9d) = 1;
    }
    if ((*(int *)(psVar1 + 0x58) == param_1) && (psVar1[0x5a] == (short)param_2)) {
      *(undefined1 *)(psVar1 + 0x6c) = 1;
    }
    if ((*(int *)(psVar1 + 0x62) == param_1) && (psVar1[100] == (short)param_2)) {
      *(undefined1 *)((int)psVar1 + 0xd9) = 1;
    }
    psVar1 = psVar1 + 0x78;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  return (uint)psVar1;
}

/* ref: FUN_00a37760 */
GEN_FRAME unsigned int GEN_THISCALL F_00a37760(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa37760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined1 * puVar1;
  int iVar2;
  
  puVar1 = (undefined1 *)((int)this + 0x39e);
  iVar2 = 0x80;
  do {
    if (*(int *)(puVar1 - 0x2a) == param_1) {
      *puVar1 = 1;
    }
    if (*(int *)(puVar1 - 0x16) == param_1) {
      puVar1[1] = 1;
    }
    puVar1 = puVar1 + 0x3c;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  return 0;
}

/* ref: FUN_00a37790 */
GEN_FRAME byte F_00a37790(unsigned int gen_a0)
{
  GEN_ENTER(0xa37790u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 - 0x1e8481U < 0x489;
}

/* ref: FUN_00a377b0 */
GEN_FRAME byte F_00a377b0(unsigned int gen_a0)
{
  GEN_ENTER(0xa377b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 - 2U < 0x12;
}

/* ref: FUN_00a377d0 */
GEN_FRAME byte F_00a377d0(unsigned int gen_a0)
{
  GEN_ENTER(0xa377d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 - 0x17U < 4;
}

/* ref: FUN_00a377f0 */
GEN_FRAME uint F_00a377f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa377f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_00ab24a0(param_1);
  if (uVar2 == 0) {
    return 0;
  }
  bVar1 = *(byte *)(uVar2 + 0x9f);
  if (bVar1 < 0xb) {
    return 10;
  }
  if (bVar1 < 0x15) {
    return 0x32;
  }
  if (bVar1 < 0x1f) {
    return 100;
  }
  return (-(uint)(0x28 < bVar1) & 0x122) + 0xd2;
}

/* ref: FUN_00a37840 */
GEN_FRAME uint F_00a37840(unsigned int gen_a0)
{
  GEN_ENTER(0xa37840u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  uint * puVar2;
  
  uVar1 = F_00ab24a0(param_1);
  if (uVar1 != 0) {
    switch((unsigned int)(uintptr_t)(*(undefined1 *)(uVar1 + 0xa6))) {
    case 2: ;
    case 0xe: ;
      puVar2 = (uint *)F_00ab4340(8);
      return *puVar2;
    case 3: ;
      puVar2 = (uint *)F_00ab4340(9);
      return *puVar2;
    case 4: ;
    case 0xf: ;
    case 0x10: ;
      puVar2 = (uint *)F_00ab4340(10);
      return *puVar2;
    }
  }
  return 0;
}

/* ref: FUN_00a378d0 */
GEN_FRAME uint GEN_STDCALL F_00a378d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa378d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  byte bVar1;
  uint uVar2;
  
  bVar1 = F_00a4a790(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x61);
  if (bVar1 == 0) {
    uVar2 = F_00a4a810(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x61);
    return uVar2;
  }
  uVar2 = F_00a51200(0x25,param_1,(int)(short)param_2,param_3,(int)(short)param_4);
  return uVar2;
}

/* ref: FUN_00a37920 */
GEN_FRAME uint GEN_STDCALL F_00a37920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa37920u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00a51200(0x32,param_1,(int)(short)param_2,(uint)((char)param_3 != '\0'),0);
  return uVar1;
}

/* ref: FUN_00a37950 */
GEN_FRAME uint GEN_STDCALL F_00a37950(unsigned int gen_a0)
{
  GEN_ENTER(0xa37950u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00a51200(0x33,(uint)((char)param_1 != '\0'),0,0,0);
  return uVar1;
}

/* ref: FUN_00a37970 */
GEN_FRAME uint GEN_STDCALL F_00a37970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa37970u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a51200(0x34,param_1,(uint)((char)param_2 != '\0'),0,0);
  return uVar1;
}

/* ref: FUN_00a379a0 */
GEN_NOFRAME byte GEN_THISCALL F_00a379a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa379a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = *(int *)((int)this + 0x2178) != 0 || *(int *)((int)this + 0x217c) != 0;
  if (*(int *)((int)this + 0x21b0) != 0 || *(int *)((int)this + 0x21b4) != 0) {
    bVar1 = bVar1 + 1;
  }
  if (*(int *)((int)this + 0x21e8) != 0 || *(int *)((int)this + 0x21ec) != 0) {
    bVar1 = bVar1 + 1;
  }
  if (*(int *)((int)this + 0x2220) != 0 || *(int *)((int)this + 0x2224) != 0) {
    bVar1 = bVar1 + 1;
  }
  if (*(int *)((int)this + 0x2258) != 0 || *(int *)((int)this + 0x225c) != 0) {
    bVar1 = bVar1 + 1;
  }
  if (*(int *)((int)this + 0x2290) != 0 || *(int *)((int)this + 0x2294) != 0) {
    bVar1 = bVar1 + 1;
  }
  if (*(int *)((int)this + 0x22c8) != 0 || *(int *)((int)this + 0x22cc) != 0) {
    bVar1 = bVar1 + 1;
  }
  if (*(int *)((int)this + 0x2300) != 0 || *(int *)((int)this + 0x2304) != 0) {
    bVar1 = bVar1 + 1;
  }
  return bVar1;
}

/* ref: FUN_00a37a90 */
GEN_NOFRAME byte GEN_THISCALL F_00a37a90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa37a90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(char *)(in_ecx + 0x311e) != '\0') {
    return 0;
  }
  return *(char *)(in_ecx + 0x3088) == '\0';
}

/* ref: FUN_00a37ab0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a37ab0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa37ab0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)((int)this + 0x308c) = 0;
  *(undefined4 *)((int)this + 0x3084) = 0;
  *(undefined1 *)((int)this + 0x3088) = 0;
  *(undefined4 *)((int)this + 0x3008) = 0;
  *(undefined4 *)((int)this + 0x300c) = 0;
  *(undefined4 *)((int)this + 0x3018) = 0;
  *(undefined4 *)((int)this + 0x301c) = 0;
  *(undefined1 *)((int)this + 0x3014) = 0;
  *(undefined1 *)((int)this + 0x302f) = 0;
  *(undefined4 *)((int)this + 0x3030) = 0;
  *(undefined1 *)((int)this + 0x3006) = 0;
  *(undefined4 *)((int)this + 0x303c) = 0;
  *(undefined2 *)((int)this + 0x3012) = 30000;
  *(undefined2 *)((int)this + 0x3010) = 0;
  *(undefined4 *)((int)this + 0x3020) = 0;
  *(undefined4 *)((int)this + 0x3024) = 0;
  *(undefined2 *)((int)this + 0x3028) = 0;
  *(undefined4 *)((int)this + 0x302a) = 0;
  *(undefined1 *)((int)this + 0x302e) = 0;
  *(undefined4 *)((int)this + 0x3034) = 0;
  *(undefined1 *)((int)this + 0x3038) = 0;
  *(undefined4 *)((int)this + 0x3048) = 0;
  *(undefined4 *)((int)this + 0x304c) = 0;
  *(undefined4 *)((int)this + 0x3058) = 0;
  *(undefined4 *)((int)this + 0x305c) = 0;
  *(undefined1 *)((int)this + 0x3054) = 0;
  *(undefined2 *)((int)this + 0x3052) = 30000;
  *(undefined1 *)((int)this + 0x306f) = 0;
  *(undefined4 *)((int)this + 0x3070) = 0;
  *(undefined1 *)((int)this + 0x3046) = 0;
  *(undefined4 *)((int)this + 0x307c) = 0;
  *(undefined2 *)((int)this + 0x3050) = 0;
  *(undefined4 *)((int)this + 0x3060) = 0;
  *(undefined4 *)((int)this + 0x3064) = 0;
  *(undefined2 *)((int)this + 0x3068) = 0;
  *(undefined4 *)((int)this + 0x306a) = 0;
  *(undefined1 *)((int)this + 0x306e) = 0;
  *(undefined4 *)((int)this + 0x3074) = 0;
  *(undefined1 *)((int)this + 0x3078) = 0;
  return 0;
}

/* ref: FUN_00a37bc0 */
GEN_NOFRAME uint F_00a37bc0(void)
{
  GEN_ENTER(0xa37bc0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00a51200(0x26,0,0,0,0);
  return uVar1;
}

/* ref: FUN_00a37be0 */
GEN_FRAME uint GEN_STDCALL F_00a37be0(unsigned int gen_a0)
{
  GEN_ENTER(0xa37be0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00a51200(0x27,(int)(short)param_1,0,0,0);
  return uVar1;
}

/* ref: FUN_00a37c00 */
GEN_NOFRAME byte GEN_THISCALL F_00a37c00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa37c00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x2487);
}

/* ref: FUN_00a37c10 */
GEN_FRAME byte GEN_THISCALL F_00a37c10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa37c10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x2487) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a37c20 */
GEN_NOFRAME uint GEN_THISCALL F_00a37c20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa37c20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined2 *)(in_ecx + 0x311c) = 0;
  return 0;
}

/* ref: FUN_00a37c30 */
GEN_NOFRAME byte F_00a37c30(void)
{
  GEN_ENTER(0xa37c30u, 0u, 0u, 0u, 0u);
  if (((REFG(undefined4, 0x14a7228) & 2) != 0) && (REFG(char, 0x14a6838) == '\x03')) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a37c50 */
GEN_FRAME uint GEN_THISCALL F_00a37c50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa37c50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  char * pcVar3;
  int iVar4;
  
  piVar2 = (int *)F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_FWD,0x7d5);
  iVar1 = piVar2[3] - 1;
  iVar4 = 0;
  if (0 < iVar1) {
    pcVar3 = (char *)(*piVar2 + 6);
    do {
      if (((((*piVar2 != 0) && (-1 < iVar4)) && (iVar4 < piVar2[3])) &&
          ((pcVar3 != &REFG(undefined, 0x6) && (*pcVar3 != '\0')))) &&
         (((uint)*(ushort *)(pcVar3 + 4) == *(uint *)this &&
          (*(short *)(pcVar3 + 2) == *(short *)((int)this + 4))))) {
        return (uint)(pcVar3 - 6);
      }
      iVar4 = iVar4 + 1;
      pcVar3 = pcVar3 + 0x40;
    } while (iVar4 < iVar1);
  }
  piVar2 = (int *)F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,0x7d2);
  iVar1 = piVar2[3] - 1;
  iVar4 = 0;
  if (0 < iVar1) {
    pcVar3 = (char *)(*piVar2 + 6);
    do {
      if ((((*piVar2 != 0) && (-1 < iVar4)) &&
          ((iVar4 < piVar2[3] &&
           (((pcVar3 != &REFG(undefined, 0x6) && (*pcVar3 != '\0')) &&
            ((uint)*(ushort *)(pcVar3 + 4) == *(uint *)this)))))) &&
         (*(short *)(pcVar3 + 2) == *(short *)((int)this + 4))) {
        return (uint)(pcVar3 - 6);
      }
      iVar4 = iVar4 + 1;
      pcVar3 = pcVar3 + 0x40;
    } while (iVar4 < iVar1);
  }
  piVar2 = (int *)F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,0x7d7);
  iVar1 = piVar2[3];
  iVar4 = 0;
  if (0 < iVar1) {
    pcVar3 = (char *)(*piVar2 + 6);
    do {
      if ((((*piVar2 != 0) && (-1 < iVar4)) &&
          ((iVar4 < iVar1 && ((pcVar3 != &REFG(undefined, 0x6) && (*pcVar3 != '\0')))))) &&
         (((uint)*(ushort *)(pcVar3 + 4) == *(uint *)this &&
          (*(short *)(pcVar3 + 2) == *(short *)((int)this + 4))))) {
        return (uint)(pcVar3 - 6);
      }
      iVar4 = iVar4 + 1;
      pcVar3 = pcVar3 + 0x40;
    } while (iVar4 < iVar1);
  }
  return 0;
}

/* ref: FUN_00a37da0 */
GEN_FRAME uint GEN_THISCALL F_00a37da0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa37da0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int * piVar2;
  int iVar3;
  
  if (((*(int *)this == 0) || (param_1 < 0)) || (*(int *)((int)this + 0xc) <= param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_1 * 0x40 + *(int *)this;
    if (*(char *)(uVar1 + 6) != '\0') {
      iVar3 = (int)*(short *)(uVar1 + 8);
      piVar2 = (int *)F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_FWD,(uint)*(ushort *)(uVar1 + 10));
      if (((*piVar2 != 0) && (-1 < iVar3)) && (iVar3 < piVar2[3])) {
        return *piVar2 + iVar3 * 0x40;
      }
      return 0;
    }
  }
  return uVar1;
}

/* ref: FUN_00a37e00 */
GEN_FRAME unsigned int GEN_THISCALL F_00a37e00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa37e00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  if (*(int *)this != 0) {
    uVar1 = F_00a37da0(this GEN_EDX_FWD,param_3);
    if (uVar1 != 0) {
      *(uint *)(uVar1 + 8) = param_1;
      if ((*(char *)(uVar1 + 6) == '\0') && ((param_1 < 0x1e8481 || (0x1e8909 < param_1)))) {
        if (param_1 < 1000000) {
          *(byte *)(uVar1 + 0x14) = *(byte *)(uVar1 + 0x14) & 0xfe;
        }
        else {
          *(byte *)(uVar1 + 0x14) = *(byte *)(uVar1 + 0x14) | 1;
          *(uint *)(uVar1 + 8) = param_1 - 1000000;
        }
      }
      *(int *)(uVar1 + 0xc) = param_2;
      if (((param_2 == 0) && (*(undefined4 *)(uVar1 + 0xc) = 0, *(char *)(uVar1 + 6) == '\0')) &&
         (*(int *)(uVar1 + 8) != 1)) {
        *(undefined4 *)(uVar1 + 8) = 0;
      }
    }
  }
  return;
}

/* ref: FUN_00a37e70 */
GEN_FRAME uint GEN_THISCALL F_00a37e70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa37e70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined1 * puVar2;
  int iVar3;
  undefined4 * puVar4;
  int iVar5;
  undefined4 * puVar6;
  int local_c;
  int local_8;
  
  *(undefined4 *)((int)this + 0x360) = 0x10000000;
  uVar1 = F_00406bb0(0x80,0,0);
  *(uint *)this = uVar1;
  uVar1 = F_00406bb0(0x20,0,0);
  *(uint *)((int)this + 4) = uVar1;
  uVar1 = F_00406bb0(0x160,0,0);
  *(uint *)((int)this + 8) = uVar1;
  uVar1 = F_00406bb0(0xe0,0,0);
  *(uint *)((int)this + 0xc) = uVar1;
  uVar1 = F_00406bb0(0x20,0,0);
  *(uint *)((int)this + 0x10) = uVar1;
  uVar1 = F_00406bb0(0x60,0,0);
  *(uint *)((int)this + 0x14) = uVar1;
  uVar1 = F_00406bb0(0x20,0,0);
  *(uint *)((int)this + 0x18) = uVar1;
  uVar1 = F_00406bb0(0x180,0,0);
  *(uint *)((int)this + 0x1c) = uVar1;
  uVar1 = F_00406bb0(0xa0,0,0);
  *(uint *)((int)this + 0x20) = uVar1;
  uVar1 = F_00406bb0(0x40,0,0);
  *(uint *)((int)this + 0x24) = uVar1;
  if ((((((*(int *)this != 0) && (*(int *)((int)this + 4) != 0)) && (*(int *)((int)this + 8) != 0))
       && ((*(int *)((int)this + 0xc) != 0 && (*(int *)((int)this + 0x10) != 0)))) &&
      ((*(int *)((int)this + 0x14) != 0 &&
       ((*(int *)((int)this + 0x18) != 0 && (*(int *)((int)this + 0x1c) != 0)))))) &&
     ((*(int *)((int)this + 0x20) != 0 && (uVar1 != 0)))) {
    iVar5 = 0;
    *(undefined4 *)((int)this + 0x28) = 1000;
    iVar3 = 0;
    do {
      F_00a36030((undefined *)(*(int *)this + iVar3) GEN_EDX_ARG,0,iVar5);
      iVar3 = iVar3 + 0x20;
      iVar5 = iVar5 + 1;
    } while (iVar3 < 0x80);
    F_00a36030(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_ARG,1,1000);
    iVar5 = 0;
    iVar3 = 2;
    local_8 = 0xb;
    do {
      F_00a36030(((undefined *)GEN_TOP((*(int *)((int)this + 8) + iVar5))) GEN_EDX_ARG,iVar3,iVar3 + 0x7ce);
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 0x20;
      local_8 = local_8 - 1;
    } while (local_8 != 0);
    iVar5 = 0;
    iVar3 = 0;
    do {
      F_00a36030(((undefined *)GEN_TOP((*(int *)((int)this + 0xc) + iVar3))) GEN_EDX_ARG,0xc,iVar5 + 10000);
      iVar3 = iVar3 + 0x20;
      iVar5 = iVar5 + 1;
    } while (iVar3 < 0xe0);
    F_00a36030(*(undefined * PTR32 *)((int)this + 0x10) GEN_EDX_ARG,0xd,11000);
    iVar5 = 0;
    iVar3 = 0xe;
    local_8 = 3;
    do {
      F_00a36030(((undefined *)GEN_TOP((*(int *)((int)this + 0x14) + iVar5))) GEN_EDX_ARG,iVar3,iVar3 + 0x2ed2);
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 0x20;
      local_8 = local_8 - 1;
    } while (local_8 != 0);
    F_00a36030(*(undefined * PTR32 *)((int)this + 0x18) GEN_EDX_ARG,0x11,0xdac);
    iVar5 = 0;
    iVar3 = 0;
    do {
      F_00a36030(((undefined *)GEN_TOP((*(int *)((int)this + 0x1c) + iVar3))) GEN_EDX_ARG,0x12,iVar5 + 0xc80);
      iVar3 = iVar3 + 0x20;
      iVar5 = iVar5 + 1;
    } while (iVar3 < 0x140);
    iVar3 = *(int *)((int)this + 0x1c);
    *(undefined4 *)(iVar3 + 0x14c) = 0x19;
    *(undefined4 *)(iVar3 + 0x144) = 0x13;
    uVar1 = F_00406bb0(0x640,0,0);
    if (uVar1 == 0) {
      uVar1 = 0;
    }
    else {
      iVar5 = 0x18;
      puVar2 = (undefined1 *)(uVar1 + 6);
      do {
        *(undefined2 *)(puVar2 - 2) = 0;
        *puVar2 = 0;
        puVar2[0xe] = 0;
        *(undefined4 *)(puVar2 - 6) = 9999;
        *(undefined4 *)(puVar2 + 2) = 0;
        *(undefined4 *)(puVar2 + 6) = 0;
        *(undefined4 *)(puVar2 + 0x12) = 0;
        *(undefined4 *)(puVar2 + 0x16) = 0;
        *(undefined4 *)(puVar2 + 0x2a) = 0;
        *(undefined4 *)(puVar2 + 0x36) = 0;
        *(undefined2 *)(puVar2 + 0xc) = 30000;
        *(undefined2 *)(puVar2 + 10) = 0;
        puVar2[0x29] = 0;
        *(undefined4 *)(puVar2 + 0x1a) = 0;
        *(undefined4 *)(puVar2 + 0x1e) = 0;
        *(undefined2 *)(puVar2 + 0x22) = 0;
        *(undefined4 *)(puVar2 + 0x24) = 0;
        puVar2[0x28] = 0;
        *(undefined4 *)(puVar2 + 0x2e) = 0;
        puVar2[0x32] = 0;
        puVar2 = puVar2 + 0x40;
        iVar5 = iVar5 - 1;
      } while (-1 < iVar5);
    }
    *(uint *)(iVar3 + 0x140) = uVar1;
    if (uVar1 != 0) {
      *(undefined4 *)(iVar3 + 0x148) = 0xce4;
      local_8 = 0;
      if (0 < *(int *)(iVar3 + 0x14c)) {
        iVar5 = 0;
        do {
          *((undefined4 *)GEN_TOP((iVar5 + *(int *)(iVar3 + 0x140)))) = *(undefined4 *)(iVar3 + 0x148);
          *((short *)GEN_TOP((iVar5 + 4 + *(int *)(iVar3 + 0x140)))) = (short)local_8;
          local_8 = local_8 + 1;
          iVar5 = iVar5 + 0x40;
        } while (local_8 < *(int *)(iVar3 + 0x14c));
      }
      *(undefined1 *)(iVar3 + 0x150) = 0;
    }
    iVar3 = *(int *)((int)this + 0x1c);
    *(undefined4 *)(iVar3 + 0x16c) = 9;
    *(undefined4 *)(iVar3 + 0x164) = 0x14;
    uVar1 = F_00406bb0(0x240,0,0);
    if (uVar1 == 0) {
      uVar1 = 0;
    }
    else {
      iVar5 = 8;
      puVar2 = (undefined1 *)(uVar1 + 6);
      do {
        *(undefined2 *)(puVar2 - 2) = 0;
        *puVar2 = 0;
        puVar2[0xe] = 0;
        *(undefined4 *)(puVar2 - 6) = 9999;
        *(undefined4 *)(puVar2 + 2) = 0;
        *(undefined4 *)(puVar2 + 6) = 0;
        *(undefined4 *)(puVar2 + 0x12) = 0;
        *(undefined4 *)(puVar2 + 0x16) = 0;
        *(undefined4 *)(puVar2 + 0x2a) = 0;
        *(undefined4 *)(puVar2 + 0x36) = 0;
        *(undefined2 *)(puVar2 + 0xc) = 30000;
        *(undefined2 *)(puVar2 + 10) = 0;
        puVar2[0x29] = 0;
        *(undefined4 *)(puVar2 + 0x1a) = 0;
        *(undefined4 *)(puVar2 + 0x1e) = 0;
        *(undefined2 *)(puVar2 + 0x22) = 0;
        *(undefined4 *)(puVar2 + 0x24) = 0;
        puVar2[0x28] = 0;
        *(undefined4 *)(puVar2 + 0x2e) = 0;
        puVar2[0x32] = 0;
        puVar2 = puVar2 + 0x40;
        iVar5 = iVar5 - 1;
      } while (-1 < iVar5);
    }
    *(uint *)(iVar3 + 0x160) = uVar1;
    if (uVar1 != 0) {
      *(undefined4 *)(iVar3 + 0x168) = 0xd48;
      local_8 = 0;
      if (0 < *(int *)(iVar3 + 0x16c)) {
        iVar5 = 0;
        do {
          *((undefined4 *)GEN_TOP((iVar5 + *(int *)(iVar3 + 0x160)))) = *(undefined4 *)(iVar3 + 0x168);
          *((short *)GEN_TOP((iVar5 + 4 + *(int *)(iVar3 + 0x160)))) = (short)local_8;
          local_8 = local_8 + 1;
          iVar5 = iVar5 + 0x40;
        } while (local_8 < *(int *)(iVar3 + 0x16c));
      }
      *(undefined1 *)(iVar3 + 0x170) = 0;
    }
    local_8 = 0;
    iVar3 = 0;
    do {
      F_00a36030(((undefined *)GEN_TOP((*(int *)((int)this + 0x20) + iVar3))) GEN_EDX_ARG,0x15,local_8 + 20000);
      local_8 = local_8 + 1;
      iVar3 = iVar3 + 0x20;
    } while (iVar3 < 0xa0);
    local_8 = 0;
    iVar3 = 0x16;
    local_c = 2;
    do {
      F_00a36030(((undefined *)GEN_TOP((*(int *)((int)this + 0x24) + local_8))) GEN_EDX_ARG,iVar3,iVar3 + 0x55da);
      local_8 = local_8 + 0x20;
      iVar3 = iVar3 + 1;
      local_c = local_c - 1;
    } while (local_c != 0);
    *(undefined4 *)((int)this + 0x330) = 0;
    *(undefined4 *)((int)this + 0x334) = 0;
    *(undefined4 *)((int)this + 0x338) = 0;
    *(undefined4 *)((int)this + 0x35c) = 0x100;
    *(undefined4 *)((int)this + 0x2338) = 0xffffffff;
    *(undefined2 *)((int)this + 0x23e0) = 0;
    *(undefined4 *)((int)this + 0x23e4) = 0;
    F_00c48350((undefined *)((int)this + 0x23e8),0,0x70);
    *(undefined4 *)((int)this + 0x2488) = 0;
    *(undefined4 *)((int)this + 0x248c) = 0;
    *(undefined1 *)((int)this + 0x2487) = 0;
    *(undefined4 *)((int)this + 0x2458) = 0;
    *(undefined1 *)((int)this + 0x245c) = 1;
    F_00c48350((undefined *)((int)this + 0x245d),0,0x2a);
    *(undefined4 *)((int)this + 0x2490) = 0;
    *(undefined4 *)((int)this + 0x2494) = 0;
    *(undefined4 *)((int)this + 0x2ff8) = 0;
    F_00c48350((undefined *)((int)this + 0x2498),0,0xb60);
    *(undefined4 *)((int)this + 0x3008) = 0;
    *(undefined4 *)((int)this + 0x300c) = 0;
    *(undefined4 *)((int)this + 0x3018) = 0;
    *(undefined4 *)((int)this + 0x301c) = 0;
    *(undefined1 *)((int)this + 0x3014) = 0;
    *(undefined4 *)((int)this + 0x3010) = 0x75300000;
    *(undefined1 *)((int)this + 0x302f) = 0;
    *(undefined4 *)((int)this + 0x3030) = 0;
    *(undefined1 *)((int)this + 0x3006) = 0;
    *(undefined4 *)((int)this + 0x303c) = 0;
    *(undefined4 *)((int)this + 0x3020) = 0;
    *(undefined4 *)((int)this + 0x3024) = 0;
    *(undefined2 *)((int)this + 0x3028) = 0;
    *(undefined4 *)((int)this + 0x302a) = 0;
    *(undefined1 *)((int)this + 0x302e) = 0;
    *(undefined4 *)((int)this + 0x3034) = 0;
    *(undefined1 *)((int)this + 0x3038) = 0;
    *(undefined4 *)((int)this + 0x3048) = 0;
    *(undefined4 *)((int)this + 0x304c) = 0;
    *(undefined4 *)((int)this + 0x3058) = 0;
    *(undefined4 *)((int)this + 0x305c) = 0;
    *(undefined1 *)((int)this + 0x3054) = 0;
    *(undefined4 *)((int)this + 0x3050) = 0x75300000;
    *(undefined1 *)((int)this + 0x306f) = 0;
    *(undefined4 *)((int)this + 0x3070) = 0;
    *(undefined1 *)((int)this + 0x3046) = 0;
    *(undefined4 *)((int)this + 0x307c) = 0;
    *(undefined4 *)((int)this + 0x3060) = 0;
    *(undefined4 *)((int)this + 0x3064) = 0;
    *(undefined2 *)((int)this + 0x3068) = 0;
    *(undefined4 *)((int)this + 0x306a) = 0;
    *(undefined1 *)((int)this + 0x306e) = 0;
    *(undefined4 *)((int)this + 0x3074) = 0;
    *(undefined1 *)((int)this + 0x3078) = 0;
    *(undefined4 *)((int)this + 0x3080) = 0;
    *(undefined4 *)((int)this + 0x3084) = 0;
    *(undefined1 *)((int)this + 0x3088) = 0;
    *(undefined4 *)((int)this + 0x308c) = 0;
    *(undefined4 *)((int)this + 0x3098) = 0;
    *(undefined4 *)((int)this + 0x309c) = 0;
    *(undefined4 *)((int)this + 0x30a8) = 0;
    *(undefined4 *)((int)this + 0x30ac) = 0;
    *(undefined1 *)((int)this + 0x30a4) = 0;
    *(undefined4 *)((int)this + 0x30a0) = 0x75300000;
    *(undefined1 *)((int)this + 0x30bf) = 0;
    *(undefined4 *)((int)this + 0x30c0) = 0;
    *(undefined1 *)((int)this + 0x3096) = 0;
    *(undefined4 *)((int)this + 0x30cc) = 0;
    *(undefined4 *)((int)this + 0x30b0) = 0;
    *(undefined4 *)((int)this + 0x30b4) = 0;
    *(undefined2 *)((int)this + 0x30b8) = 0;
    *(undefined4 *)((int)this + 0x30ba) = 0;
    *(undefined1 *)((int)this + 0x30be) = 0;
    *(undefined4 *)((int)this + 0x30c4) = 0;
    *(undefined1 *)((int)this + 0x30c8) = 0;
    *(undefined1 *)((int)this + 0x30e4) = 0;
    *(undefined1 *)((int)this + 0x30ff) = 0;
    *(undefined1 *)((int)this + 0x30d6) = 0;
    *(undefined4 *)((int)this + 0x30d8) = 0;
    *(undefined4 *)((int)this + 0x30dc) = 0;
    *(undefined4 *)((int)this + 0x30e8) = 0;
    *(undefined4 *)((int)this + 0x30ec) = 0;
    *(undefined4 *)((int)this + 0x30e0) = 0x75300000;
    *(undefined4 *)((int)this + 0x3100) = 0;
    *(undefined4 *)((int)this + 0x310c) = 0;
    *(undefined4 *)((int)this + 0x30f0) = 0;
    *(undefined4 *)((int)this + 0x30f4) = 0;
    *(undefined2 *)((int)this + 0x30f8) = 0;
    *(undefined4 *)((int)this + 0x30fa) = 0;
    *(undefined1 *)((int)this + 0x30fe) = 0;
    *(undefined4 *)((int)this + 0x3104) = 0;
    *(undefined1 *)((int)this + 0x3108) = 0;
    *(undefined1 *)((int)this + 0x3114) = 0;
    *(undefined1 *)((int)this + 0x311e) = 0;
    *(undefined1 *)((int)this + 0x3124) = 0;
    *(undefined4 *)((int)this + 0x3110) = 0;
    *(undefined4 *)((int)this + 0x3118) = 0;
    *(undefined4 *)((int)this + 0x3120) = 0;
    *(undefined4 *)((int)this + 0x3128) = 0;
    *(undefined2 *)((int)this + 0x311c) = 0;
    *(undefined1 *)(*(int *)this + 0x10) = 1;
    *(undefined1 *)(*(int *)this + 0x30) = 1;
    *(undefined1 *)(*(int *)this + 0x50) = 1;
    *(undefined1 *)(*(int *)this + 0x70) = 1;
    iVar3 = 0;
    do {
      *((undefined1 *)GEN_TOP((iVar3 + 0x10 + *(int *)((int)this + 8)))) = 1;
      iVar3 = iVar3 + 0x20;
    } while (iVar3 < 0x160);
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0xc) + 0x10))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0xc) + 0x30))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0xc) + 0x50))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0xc) + 0x70))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0xc) + 0x90))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0xc) + 0xb0))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0xc) + 0xd0))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x14) + 0x10))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x14) + 0x30))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x14) + 0x50))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x10))) = 1;
    iVar3 = 0;
    do {
      *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0x10 + iVar3))) = 1;
      iVar3 = iVar3 + 0x20;
    } while (iVar3 < 0x180);
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x20) + 0x10))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x20) + 0x30))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x20) + 0x50))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x20) + 0x70))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x20) + 0x90))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x24) + 0x10))) = 1;
    uVar1 = *(uint *)((int)this + 0x24);
    *(undefined1 *)(uVar1 + 0x30) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x10))) = 1;
    *(undefined4 *)((int)this + 0x2340) = 0;
    *(undefined4 *)((int)this + 0x2344) = 0;
    puVar4 = (undefined4 *)((int)this + 0x2340);
    puVar6 = (undefined4 *)((int)this + 0x2348);
    for (iVar3 = 0x26; iVar3 != 0; iVar3 = iVar3 - 1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
    *(undefined4 *)((int)this + 0x2174) = 0;
  }
  return uVar1;
}

/* ref: FUN_00a38650 */
GEN_FRAME byte GEN_THISCALL F_00a38650(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa38650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if ((short)param_1 == 10000) {
    return 1;
  }
  if ((short)param_1 == 0) {
    uVar1 = F_00a36f30(this GEN_EDX_FWD,1000);
    return *(byte *)(uVar1 + 0x10);
  }
  return 0;
}

/* ref: FUN_00a38690 */
GEN_FRAME byte F_00a38690(unsigned int gen_a0)
{
  GEN_ENTER(0xa38690u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  int iVar2;
  
  uVar1 = F_00ab24a0(param_1);
  if (uVar1 != 0) {
    uVar1 = F_00ab25a0((uint)*(byte *)(uVar1 + 0xa6));
    iVar2 = 0;
    do {
      if (*(char *)(uVar1 + 4 + iVar2) == '\x01') goto LAB_00a386cf;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0xe);
  }
  iVar2 = 0xe;
LAB_00a386cf: ;
  return (byte)iVar2;
}

/* ref: FUN_00a386e0 */
GEN_NOFRAME uint GEN_STDCALL F_00a386e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa386e0u, gen_a0, gen_a1, 0u, 0u);
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined2 * puVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  puVar4 = param_1;
  if ((param_1 != (undefined2 *)0x0) &&
     ((*(char *)(param_1 + 3) != '\0' || (*(int *)(param_1 + 4) != 0)))) {
    (*(undefined2 *)(gen_frame + 0x20)) = *param_1;
    (*(undefined4 *)(gen_frame + 0x24)) = *param_2;
    (*(undefined2 *)(gen_frame + 0x22)) = param_1[2];
    uVar7 = 0;
    (*(undefined4 *)(gen_frame + 0x2c)) = param_2[2];
    (*(undefined4 *)(gen_frame + 0x28)) = param_2[1];
    uVar1 = param_2[3];
    uVar2 = param_2[4];
    uVar6 = 0;
    puVar5 = &(*(undefined4 *)(gen_frame + 0x8));
    (*(undefined4 *)(gen_frame + 0x8)) = 0x1a5;
    (*(undefined4 *)(gen_frame + 0xc)) = 0x28;
    (*(undefined4 *)(gen_frame + 0x30)) = uVar1;
    (*(undefined4 *)(gen_frame + 0x34)) = uVar2;
    this = (undefined *)F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
    bVar3 = F_00974e00(this GEN_EDX_ARG,puVar5,uVar6,uVar7);
    puVar4 = ((undefined2 *)GEN_TOP(CONCAT31(extraout_var,bVar3)));
  }
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30) GEN_EDX_ARG);
  return (uint)puVar4;
}

/* ref: FUN_00a387b0 */
GEN_FRAME unsigned int GEN_STDCALL F_00a387b0(unsigned int gen_a0)
{
  GEN_ENTER(0xa387b0u, gen_a0, 0u, 0u, 0u);
  byte bVar1;
  int * piVar2;
  uint uVar3;
  int * piVar4;
  undefined * this;
  undefined * pvVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  pvVar5 = REFG(void * PTR32, 0x1379694);
  if ((REFG(void * PTR32, 0x1379694) != (undefined *)0x0) && ((*(int *)&gen_a0) != 0)) {
    bVar1 = F_00a4a790(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x66);
    if (bVar1 == 0) {
      F_00a4a810(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x66);
      return;
    }
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
    uVar8 = 0x23;
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2 GEN_EDX_ARG);
    piVar4 = (int *)F_00763050(uVar3 GEN_EDX_ARG,uVar8);
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x10))(piVar4 GEN_EDX_ARG);
    if ((char)uVar3 != '\0') {
      uVar7 = 0;
      uVar8 = 0x4c4;
      this = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2 GEN_EDX_ARG)));
      F_0046ac40(this GEN_EDX_ARG,uVar8,uVar7,pvVar5);
      return;
    }
    fVar6 = F_00a601f0(pvVar5 GEN_EDX_ARG,(*(int *)&gen_a0));
    if ((float10)REFG(float, 0x10a509c) < (float10)fVar6) {
      uVar8 = 0x51e;
      pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2 GEN_EDX_ARG)));
      F_0046a630(pvVar5 GEN_EDX_ARG,uVar8);
      return;
    }
    F_00a51200(0x30,*(undefined4 *)((*(int *)&gen_a0) + 0x74),0,0,0);
  }
  return;
}

/* ref: FUN_00a38890 */
GEN_FRAME uint GEN_THISCALL F_00a38890(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa38890u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined1 * puVar1;
  uint uVar2;
  uint uVar3;
  char * pcVar4;
  
  uVar2 = 0;
  pcVar4 = (char *)((int)this + 0x364);
  do {
    if (*pcVar4 != '\0') {
      puVar1 = (undefined1 *)((int)this + uVar2 * 0x3c + 0x364);
      *puVar1 = 0;
      uVar2 = 0;
      if (puVar1 != (undefined1 *)0x0) {
        if ((param_1 == 0x7d6) || (param_3 == 0x7d6)) {
          *(undefined4 *)(puVar1 + 8) = 0x1a;
          *(undefined1 *)((int)this + 0x35c) = 1;
        }
        else {
          *(undefined4 *)(puVar1 + 8) = 8;
        }
        *(int *)(puVar1 + 0x24) = param_3;
        *(short *)(puVar1 + 0x28) = (short)param_4;
        *(int *)(puVar1 + 0x10) = param_1;
        *(short *)(puVar1 + 0x14) = (short)param_2;
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((int)this + 0x360);
        F_00a51580(param_1,param_2,param_3,param_4,param_5,*(undefined4 *)((int)this + 0x360));
        uVar3 = *(int *)((int)this + 0x360) + 1;
        uVar2 = uVar3 / 0xfffffff;
        *(uint *)((int)this + 0x360) = uVar3 % 0xfffffff | 0x10000000;
      }
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    pcVar4 = pcVar4 + 0x3c;
  } while ((int)uVar2 < 0x80);
  return uVar2;
}

/* ref: FUN_00a38960 */
GEN_FRAME uint GEN_THISCALL F_00a38960(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa38960u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined1 * puVar1;
  uint uVar2;
  uint uVar3;
  char * pcVar4;
  
  uVar2 = 0;
  pcVar4 = (char *)((int)this + 0x364);
  do {
    if (*pcVar4 != '\0') {
      puVar1 = (undefined1 *)((int)this + uVar2 * 0x3c + 0x364);
      *puVar1 = 0;
      uVar2 = 0;
      if (puVar1 != (undefined1 *)0x0) {
        *(undefined4 *)(puVar1 + 8) = 0x16;
        *(undefined4 *)(puVar1 + 0x10) = param_1;
        *(short *)(puVar1 + 0x14) = (short)param_2;
        *(undefined4 *)(puVar1 + 0x18) = param_3;
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((int)this + 0x360);
        F_00a51650(param_1,param_2,param_3,*(undefined4 *)((int)this + 0x360));
        uVar3 = *(int *)((int)this + 0x360) + 1;
        uVar2 = uVar3 / 0xfffffff;
        *(uint *)((int)this + 0x360) = uVar3 % 0xfffffff | 0x10000000;
      }
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    pcVar4 = pcVar4 + 0x3c;
  } while ((int)uVar2 < 0x80);
  return uVar2;
}

/* ref: FUN_00a38a00 */
GEN_FRAME uint GEN_THISCALL F_00a38a00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa38a00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined1 * puVar1;
  uint uVar2;
  uint uVar3;
  char * pcVar4;
  
  uVar2 = 0;
  pcVar4 = (char *)((int)this + 0x364);
  do {
    if (*pcVar4 != '\0') {
      puVar1 = (undefined1 *)((int)this + uVar2 * 0x3c + 0x364);
      *puVar1 = 0;
      uVar2 = 0;
      if (puVar1 != (undefined1 *)0x0) {
        *(undefined4 *)(puVar1 + 8) = 0x17;
        *(undefined4 *)(puVar1 + 0x10) = param_1;
        *(short *)(puVar1 + 0x14) = (short)param_2;
        *(undefined4 *)(puVar1 + 0x18) = param_3;
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((int)this + 0x360);
        F_00a51720(param_1,param_2,param_3,*(undefined4 *)((int)this + 0x360));
        uVar3 = *(int *)((int)this + 0x360) + 1;
        uVar2 = uVar3 / 0xfffffff;
        *(uint *)((int)this + 0x360) = uVar3 % 0xfffffff | 0x10000000;
      }
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    pcVar4 = pcVar4 + 0x3c;
  } while ((int)uVar2 < 0x80);
  return uVar2;
}

/* ref: FUN_00a38aa0 */
GEN_FRAME uint GEN_THISCALL F_00a38aa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa38aa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined1 * puVar1;
  uint uVar2;
  uint uVar3;
  char * pcVar4;
  
  uVar2 = 0;
  pcVar4 = (char *)((int)this + 0x364);
  do {
    if (*pcVar4 != '\0') {
      puVar1 = (undefined1 *)((int)this + uVar2 * 0x3c + 0x364);
      *puVar1 = 0;
      uVar2 = 0;
      if (puVar1 != (undefined1 *)0x0) {
        *(undefined4 *)(puVar1 + 8) = 0x2b;
        *(undefined4 *)(puVar1 + 0x10) = param_1;
        *(short *)(puVar1 + 0x14) = (short)param_2;
        *(undefined4 *)(puVar1 + 0x18) = param_3;
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((int)this + 0x360);
        F_00a517f0(param_1,param_2,param_3,*(undefined4 *)((int)this + 0x360));
        uVar3 = *(int *)((int)this + 0x360) + 1;
        uVar2 = uVar3 / 0xfffffff;
        *(uint *)((int)this + 0x360) = uVar3 % 0xfffffff | 0x10000000;
      }
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    pcVar4 = pcVar4 + 0x3c;
  } while ((int)uVar2 < 0x80);
  return uVar2;
}

/* ref: FUN_00a38b40 */
GEN_FRAME uint GEN_THISCALL F_00a38b40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa38b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined1 * puVar1;
  uint uVar2;
  uint uVar3;
  char * pcVar4;
  
  uVar2 = 0;
  pcVar4 = (char *)((int)this + 0x364);
  do {
    if (*pcVar4 != '\0') {
      puVar1 = (undefined1 *)((int)this + uVar2 * 0x3c + 0x364);
      *puVar1 = 0;
      uVar2 = 0;
      if (puVar1 != (undefined1 *)0x0) {
        *(undefined4 *)(puVar1 + 8) = 0x18;
        *(undefined4 *)(puVar1 + 0x18) = param_1;
        *(undefined4 *)(puVar1 + 0x2c) = param_1;
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((int)this + 0x360);
        F_00a52620(param_1,*(undefined4 *)((int)this + 0x360));
        uVar3 = *(int *)((int)this + 0x360) + 1;
        uVar2 = uVar3 / 0xfffffff;
        *(uint *)((int)this + 0x360) = uVar3 % 0xfffffff | 0x10000000;
      }
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    pcVar4 = pcVar4 + 0x3c;
  } while ((int)uVar2 < 0x80);
  return uVar2;
}

/* ref: FUN_00a38bd0 */
GEN_FRAME uint GEN_THISCALL F_00a38bd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa38bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined1 * puVar1;
  uint uVar2;
  uint uVar3;
  char * pcVar4;
  
  uVar2 = 0;
  pcVar4 = (char *)((int)this + 0x364);
  do {
    if (*pcVar4 != '\0') {
      puVar1 = (undefined1 *)((int)this + uVar2 * 0x3c + 0x364);
      *puVar1 = 0;
      uVar2 = 0;
      if (puVar1 != (undefined1 *)0x0) {
        *(undefined4 *)(puVar1 + 8) = 0x19;
        *(undefined4 *)(puVar1 + 0x20) = param_1;
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((int)this + 0x360);
        F_00a522b0(param_1,*(undefined4 *)((int)this + 0x360));
        uVar3 = *(int *)((int)this + 0x360) + 1;
        uVar2 = uVar3 / 0xfffffff;
        *(uint *)((int)this + 0x360) = uVar3 % 0xfffffff | 0x10000000;
      }
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    pcVar4 = pcVar4 + 0x3c;
  } while ((int)uVar2 < 0x80);
  return uVar2;
}

/* ref: FUN_00a38c60 */
GEN_NOFRAME uint GEN_THISCALL F_00a38c60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa38c60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * puVar1;
  uint uVar2;
  uint uVar3;
  char * pcVar4;
  
  uVar2 = 0;
  pcVar4 = (char *)((int)this + 0x364);
  do {
    if (*pcVar4 != '\0') {
      puVar1 = (undefined1 *)((int)this + uVar2 * 0x3c + 0x364);
      *puVar1 = 0;
      uVar2 = 0;
      if (puVar1 != (undefined1 *)0x0) {
        *(undefined4 *)(puVar1 + 8) = 0x19;
        *(undefined4 *)(puVar1 + 0x34) = 3;
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((int)this + 0x360);
        F_00a52340(3,*(undefined4 *)((int)this + 0x360));
        uVar3 = *(int *)((int)this + 0x360) + 1;
        uVar2 = uVar3 / 0xfffffff;
        *(uint *)((int)this + 0x360) = uVar3 % 0xfffffff | 0x10000000;
      }
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    pcVar4 = pcVar4 + 0x3c;
  } while ((int)uVar2 < 0x80);
  return uVar2;
}

/* ref: FUN_00a38ce0 */
GEN_FRAME uint GEN_THISCALL F_00a38ce0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa38ce0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined1 * puVar1;
  uint uVar2;
  uint uVar3;
  char * pcVar4;
  
  uVar2 = 0;
  pcVar4 = (char *)((int)this + 0x364);
  do {
    if (*pcVar4 != '\0') {
      puVar1 = (undefined1 *)((int)this + uVar2 * 0x3c + 0x364);
      *puVar1 = 0;
      uVar2 = 0;
      if (puVar1 != (undefined1 *)0x0) {
        *(undefined4 *)(puVar1 + 8) = 0x1a;
        *(undefined4 *)(puVar1 + 0x10) = param_1;
        *(short *)(puVar1 + 0x14) = (short)param_2;
        *(undefined4 *)(puVar1 + 0x24) = param_3;
        *(undefined2 *)(puVar1 + 0x28) = (undefined2)param_4;
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((int)this + 0x360);
        F_00a523d0(param_1,param_2,param_3,param_4,*(undefined4 *)((int)this + 0x360));
        uVar3 = *(int *)((int)this + 0x360) + 1;
        uVar2 = uVar3 / 0xfffffff;
        *(uint *)((int)this + 0x360) = uVar3 % 0xfffffff | 0x10000000;
      }
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    pcVar4 = pcVar4 + 0x3c;
  } while ((int)uVar2 < 0x80);
  return uVar2;
}

/* ref: FUN_00a38d80 */
GEN_FRAME uint GEN_THISCALL F_00a38d80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa38d80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined1 * puVar1;
  uint uVar2;
  uint uVar3;
  char * pcVar4;
  
  uVar2 = 0;
  pcVar4 = (char *)((int)this + 0x364);
  do {
    if (*pcVar4 != '\0') {
      puVar1 = (undefined1 *)((int)this + uVar2 * 0x3c + 0x364);
      *puVar1 = 0;
      uVar2 = 0;
      if (puVar1 != (undefined1 *)0x0) {
        *(undefined4 *)(puVar1 + 8) = 0x1c;
        *(short *)(puVar1 + 0x14) = (short)param_1;
        *(short *)(puVar1 + 0x28) = (short)param_1;
        *(undefined4 *)(puVar1 + 0x18) = param_2;
        *(undefined4 *)(puVar1 + 0x2c) = param_2;
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((int)this + 0x360);
        F_00a524a0(param_1,param_2,*(undefined4 *)((int)this + 0x360));
        uVar3 = *(int *)((int)this + 0x360) + 1;
        uVar2 = uVar3 / 0xfffffff;
        *(uint *)((int)this + 0x360) = uVar3 % 0xfffffff | 0x10000000;
      }
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    pcVar4 = pcVar4 + 0x3c;
  } while ((int)uVar2 < 0x80);
  return uVar2;
}

/* ref: FUN_00a38e20 */
GEN_FRAME uint GEN_THISCALL F_00a38e20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa38e20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined1 * puVar1;
  uint uVar2;
  uint uVar3;
  char * pcVar4;
  
  uVar2 = 0;
  pcVar4 = (char *)((int)this + 0x364);
  do {
    if (*pcVar4 != '\0') {
      puVar1 = (undefined1 *)((int)this + uVar2 * 0x3c + 0x364);
      *puVar1 = 0;
      uVar2 = 0;
      if (puVar1 != (undefined1 *)0x0) {
        *(undefined4 *)(puVar1 + 8) = 0x1b;
        *(undefined4 *)(puVar1 + 0x18) = param_1;
        *(undefined4 *)(puVar1 + 0x2c) = param_1;
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((int)this + 0x360);
        F_00a52560(param_1,*(undefined4 *)((int)this + 0x360));
        uVar3 = *(int *)((int)this + 0x360) + 1;
        uVar2 = uVar3 / 0xfffffff;
        *(uint *)((int)this + 0x360) = uVar3 % 0xfffffff | 0x10000000;
      }
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    pcVar4 = pcVar4 + 0x3c;
  } while ((int)uVar2 < 0x80);
  return uVar2;
}

/* ref: FUN_00a38eb0 */
GEN_NOFRAME uint GEN_THISCALL F_00a38eb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa38eb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * puVar1;
  uint uVar2;
  uint uVar3;
  char * pcVar4;
  
  uVar2 = 0;
  pcVar4 = (char *)((int)this + 0x364);
  do {
    if (*pcVar4 != '\0') {
      puVar1 = (undefined1 *)((int)this + uVar2 * 0x3c + 0x364);
      *puVar1 = 0;
      uVar2 = 0;
      if (puVar1 != (undefined1 *)0x0) {
        *(undefined4 *)(puVar1 + 8) = 0x19;
        *(undefined4 *)(puVar1 + 0x34) = 4;
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((int)this + 0x360);
        F_00a52340(4,*(undefined4 *)((int)this + 0x360));
        uVar3 = *(int *)((int)this + 0x360) + 1;
        uVar2 = uVar3 / 0xfffffff;
        *(uint *)((int)this + 0x360) = uVar3 % 0xfffffff | 0x10000000;
      }
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    pcVar4 = pcVar4 + 0x3c;
  } while ((int)uVar2 < 0x80);
  return uVar2;
}

/* ref: FUN_00a38f30 */
GEN_NOFRAME uint GEN_THISCALL F_00a38f30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa38f30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * puVar1;
  uint uVar2;
  uint uVar3;
  char * pcVar4;
  
  uVar2 = 0;
  pcVar4 = (char *)((int)this + 0x364);
  do {
    if (*pcVar4 != '\0') {
      puVar1 = (undefined1 *)((int)this + uVar2 * 0x3c + 0x364);
      *puVar1 = 0;
      uVar2 = 0;
      if (puVar1 != (undefined1 *)0x0) {
        *(undefined4 *)(puVar1 + 8) = 0x19;
        *(undefined4 *)(puVar1 + 0x34) = 7;
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((int)this + 0x360);
        F_00a52340(7,*(undefined4 *)((int)this + 0x360));
        uVar3 = *(int *)((int)this + 0x360) + 1;
        uVar2 = uVar3 / 0xfffffff;
        *(uint *)((int)this + 0x360) = uVar3 % 0xfffffff | 0x10000000;
      }
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    pcVar4 = pcVar4 + 0x3c;
  } while ((int)uVar2 < 0x80);
  return uVar2;
}

/* ref: FUN_00a38fb0 */
GEN_NOFRAME uint GEN_THISCALL F_00a38fb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa38fb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * puVar1;
  uint uVar2;
  uint uVar3;
  char * pcVar4;
  
  uVar2 = 0;
  pcVar4 = (char *)((int)this + 0x364);
  do {
    if (*pcVar4 != '\0') {
      puVar1 = (undefined1 *)((int)this + uVar2 * 0x3c + 0x364);
      *puVar1 = 0;
      uVar2 = 0;
      if (puVar1 != (undefined1 *)0x0) {
        *(undefined4 *)(puVar1 + 8) = 0x19;
        *(undefined4 *)(puVar1 + 0x34) = 8;
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((int)this + 0x360);
        F_00a52340(8,*(undefined4 *)((int)this + 0x360));
        uVar3 = *(int *)((int)this + 0x360) + 1;
        uVar2 = uVar3 / 0xfffffff;
        *(uint *)((int)this + 0x360) = uVar3 % 0xfffffff | 0x10000000;
      }
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    pcVar4 = pcVar4 + 0x3c;
  } while ((int)uVar2 < 0x80);
  return uVar2;
}

/* ref: FUN_00a39030 */
GEN_NOFRAME uint GEN_THISCALL F_00a39030(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa39030u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * puVar1;
  uint uVar2;
  uint uVar3;
  char * pcVar4;
  
  uVar2 = 0;
  pcVar4 = (char *)((int)this + 0x364);
  do {
    if (*pcVar4 != '\0') {
      puVar1 = (undefined1 *)((int)this + uVar2 * 0x3c + 0x364);
      *puVar1 = 0;
      uVar2 = 0;
      if (puVar1 != (undefined1 *)0x0) {
        *(undefined4 *)(puVar1 + 8) = 0x19;
        *(undefined4 *)(puVar1 + 0x34) = 6;
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((int)this + 0x360);
        F_00a52340(6,*(undefined4 *)((int)this + 0x360));
        uVar3 = *(int *)((int)this + 0x360) + 1;
        uVar2 = uVar3 / 0xfffffff;
        *(uint *)((int)this + 0x360) = uVar3 % 0xfffffff | 0x10000000;
      }
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    pcVar4 = pcVar4 + 0x3c;
  } while ((int)uVar2 < 0x80);
  return uVar2;
}

/* ref: FUN_00a390b0 */
GEN_NOFRAME uint GEN_THISCALL F_00a390b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa390b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * puVar1;
  uint uVar2;
  uint uVar3;
  char * pcVar4;
  
  uVar2 = 0;
  pcVar4 = (char *)((int)this + 0x364);
  do {
    if (*pcVar4 != '\0') {
      puVar1 = (undefined1 *)((int)this + uVar2 * 0x3c + 0x364);
      *puVar1 = 0;
      uVar2 = 0;
      if (puVar1 != (undefined1 *)0x0) {
        *(undefined4 *)(puVar1 + 8) = 0x19;
        *(undefined4 *)(puVar1 + 0x34) = 0x12;
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((int)this + 0x360);
        F_00a52340(0x12,*(undefined4 *)((int)this + 0x360));
        uVar3 = *(int *)((int)this + 0x360) + 1;
        uVar2 = uVar3 / 0xfffffff;
        *(uint *)((int)this + 0x360) = uVar3 % 0xfffffff | 0x10000000;
      }
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    pcVar4 = pcVar4 + 0x3c;
  } while ((int)uVar2 < 0x80);
  return uVar2;
}

/* ref: FUN_00a39130 */
GEN_FRAME uint GEN_THISCALL F_00a39130(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xa39130u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined1 * puVar1;
  uint uVar2;
  uint uVar3;
  char * pcVar4;
  
  uVar2 = 0;
  pcVar4 = (char *)((int)this + 0x364);
  do {
    if (*pcVar4 != '\0') {
      puVar1 = (undefined1 *)((int)this + uVar2 * 0x3c + 0x364);
      *puVar1 = 0;
      uVar2 = 0;
      if (puVar1 != (undefined1 *)0x0) {
        if ((param_1 == 0x7d6) || (param_3 == 0x7d6)) {
          *(undefined4 *)(puVar1 + 8) = 0x1a;
          *(undefined1 *)((int)this + 0x35c) = 1;
        }
        else {
          *(undefined4 *)(puVar1 + 8) = 9;
        }
        *(int *)(puVar1 + 0x24) = param_3;
        *(short *)(puVar1 + 0x28) = (short)param_4;
        *(int *)(puVar1 + 0x10) = param_1;
        *(short *)(puVar1 + 0x14) = (short)param_2;
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((int)this + 0x360);
        F_00a51f70(param_1,param_2,param_3,param_4,param_5,param_6,
                     *(undefined4 *)((int)this + 0x360));
        uVar3 = *(int *)((int)this + 0x360) + 1;
        uVar2 = uVar3 / 0xfffffff;
        *(uint *)((int)this + 0x360) = uVar3 % 0xfffffff | 0x10000000;
      }
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    pcVar4 = pcVar4 + 0x3c;
  } while ((int)uVar2 < 0x80);
  return uVar2;
}

/* ref: FUN_00a39200 */
GEN_FRAME uint GEN_THISCALL F_00a39200(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xa39200u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined1 * puVar1;
  uint uVar2;
  uint uVar3;
  char * pcVar4;
  
  uVar2 = 0;
  pcVar4 = (char *)((int)this + 0x364);
  do {
    if (*pcVar4 != '\0') {
      puVar1 = (undefined1 *)((int)this + uVar2 * 0x3c + 0x364);
      *puVar1 = 0;
      uVar2 = 0;
      if (puVar1 != (undefined1 *)0x0) {
        if ((param_1 == 0x7d6) || (param_3 == 0x7d6)) {
          *(undefined4 *)(puVar1 + 8) = 0x1a;
          *(undefined1 *)((int)this + 0x35c) = 1;
        }
        else {
          *(undefined4 *)(puVar1 + 8) = 0xc;
        }
        *(int *)(puVar1 + 0x24) = param_3;
        *(short *)(puVar1 + 0x28) = (short)param_4;
        *(int *)(puVar1 + 0x10) = param_1;
        *(short *)(puVar1 + 0x14) = (short)param_2;
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((int)this + 0x360);
        F_00a52040(param_1,param_2,param_3,param_4,param_5,param_6,
                     *(undefined4 *)((int)this + 0x360));
        uVar3 = *(int *)((int)this + 0x360) + 1;
        uVar2 = uVar3 / 0xfffffff;
        *(uint *)((int)this + 0x360) = uVar3 % 0xfffffff | 0x10000000;
      }
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    pcVar4 = pcVar4 + 0x3c;
  } while ((int)uVar2 < 0x80);
  return uVar2;
}

/* ref: FUN_00a392d0 */
GEN_FRAME uint GEN_THISCALL F_00a392d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xa392d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined1 * puVar1;
  uint uVar2;
  uint uVar3;
  char * pcVar4;
  
  uVar2 = 0;
  pcVar4 = (char *)((int)this + 0x364);
  do {
    if (*pcVar4 != '\0') {
      puVar1 = (undefined1 *)((int)this + uVar2 * 0x3c + 0x364);
      *puVar1 = 0;
      uVar2 = 0;
      if (puVar1 != (undefined1 *)0x0) {
        *(undefined4 *)(puVar1 + 0x24) = param_3;
        *(undefined4 *)(puVar1 + 0x18) = param_5;
        *(undefined4 *)(puVar1 + 0x2c) = param_5;
        *(undefined4 *)(puVar1 + 8) = 10;
        *(undefined4 *)(puVar1 + 0x10) = param_1;
        *(short *)(puVar1 + 0x14) = (short)param_2;
        *(undefined2 *)(puVar1 + 0x28) = (undefined2)param_4;
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((int)this + 0x360);
        F_00a52110(param_1,param_2,param_3,param_4,param_5,param_6,
                     *(undefined4 *)((int)this + 0x360));
        uVar3 = *(int *)((int)this + 0x360) + 1;
        uVar2 = uVar3 / 0xfffffff;
        *(uint *)((int)this + 0x360) = uVar3 % 0xfffffff | 0x10000000;
      }
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    pcVar4 = pcVar4 + 0x3c;
  } while ((int)uVar2 < 0x80);
  return uVar2;
}

/* ref: FUN_00a39390 */
GEN_FRAME uint GEN_THISCALL F_00a39390(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xa39390u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined1 * puVar1;
  uint uVar2;
  uint uVar3;
  char * pcVar4;
  
  uVar2 = 0;
  pcVar4 = (char *)((int)this + 0x364);
  do {
    if (*pcVar4 != '\0') {
      puVar1 = (undefined1 *)((int)this + uVar2 * 0x3c + 0x364);
      *puVar1 = 0;
      uVar2 = 0;
      if (puVar1 != (undefined1 *)0x0) {
        *(undefined4 *)(puVar1 + 0x24) = param_3;
        *(undefined4 *)(puVar1 + 0x18) = param_5;
        *(undefined4 *)(puVar1 + 0x2c) = param_5;
        *(undefined4 *)(puVar1 + 8) = 0xb;
        *(undefined4 *)(puVar1 + 0x10) = param_1;
        *(short *)(puVar1 + 0x14) = (short)param_2;
        *(undefined2 *)(puVar1 + 0x28) = (undefined2)param_4;
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((int)this + 0x360);
        F_00a521e0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                     *(undefined4 *)((int)this + 0x360));
        uVar3 = *(int *)((int)this + 0x360) + 1;
        uVar2 = uVar3 / 0xfffffff;
        *(uint *)((int)this + 0x360) = uVar3 % 0xfffffff | 0x10000000;
      }
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    pcVar4 = pcVar4 + 0x3c;
  } while ((int)uVar2 < 0x80);
  return uVar2;
}

/* ref: FUN_00a39450 */
GEN_FRAME uint GEN_THISCALL F_00a39450(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa39450u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined1 * puVar1;
  uint uVar2;
  uint uVar3;
  char * pcVar4;
  
  uVar2 = 0;
  pcVar4 = (char *)((int)this + 0x364);
  do {
    if (*pcVar4 != '\0') {
      puVar1 = (undefined1 *)((int)this + uVar2 * 0x3c + 0x364);
      *puVar1 = 0;
      uVar2 = 0;
      if (puVar1 != (undefined1 *)0x0) {
        *(undefined4 *)(puVar1 + 8) = 0xd;
        *(undefined4 *)(puVar1 + 0x10) = param_1;
        *(short *)(puVar1 + 0x14) = (short)param_2;
        *(undefined4 *)(puVar1 + 0x24) = param_1;
        *(short *)(puVar1 + 0x28) = (short)param_2;
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((int)this + 0x360);
        F_00a527b0(param_1,param_2,*(undefined4 *)((int)this + 0x360));
        uVar3 = *(int *)((int)this + 0x360) + 1;
        uVar2 = uVar3 / 0xfffffff;
        *(uint *)((int)this + 0x360) = uVar3 % 0xfffffff | 0x10000000;
      }
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    pcVar4 = pcVar4 + 0x3c;
  } while ((int)uVar2 < 0x80);
  return uVar2;
}

/* ref: FUN_00a394f0 */
GEN_FRAME uint GEN_THISCALL F_00a394f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa394f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined1 * puVar1;
  uint uVar2;
  uint uVar3;
  char * pcVar4;
  
  uVar2 = 0;
  pcVar4 = (char *)((int)this + 0x364);
  do {
    if (*pcVar4 != '\0') {
      puVar1 = (undefined1 *)((int)this + uVar2 * 0x3c + 0x364);
      *puVar1 = 0;
      uVar2 = 0;
      if (puVar1 != (undefined1 *)0x0) {
        *(undefined4 *)(puVar1 + 8) = 0x14;
        *(undefined4 *)(puVar1 + 0x10) = param_1;
        *(undefined4 *)(puVar1 + 0x24) = param_1;
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((int)this + 0x360);
        F_00a52930(param_1);
        uVar3 = *(int *)((int)this + 0x360) + 1;
        uVar2 = uVar3 / 0xfffffff;
        *(uint *)((int)this + 0x360) = uVar3 % 0xfffffff | 0x10000000;
      }
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    pcVar4 = pcVar4 + 0x3c;
  } while ((int)uVar2 < 0x80);
  return uVar2;
}

/* ref: FUN_00a39570 */
GEN_FRAME uint GEN_THISCALL F_00a39570(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa39570u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined1 * puVar1;
  uint uVar2;
  uint uVar3;
  char * pcVar4;
  
  uVar2 = 0;
  pcVar4 = (char *)((int)this + 0x364);
  do {
    if (*pcVar4 != '\0') {
      puVar1 = (undefined1 *)((int)this + uVar2 * 0x3c + 0x364);
      *puVar1 = 0;
      uVar2 = 0;
      if (puVar1 != (undefined1 *)0x0) {
        *(undefined4 *)(puVar1 + 8) = 0x1e;
        *(undefined4 *)(puVar1 + 0x10) = param_1;
        *(short *)(puVar1 + 0x14) = (short)param_2;
        *(undefined4 *)(puVar1 + 0x24) = param_1;
        *(short *)(puVar1 + 0x28) = (short)param_2;
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((int)this + 0x360);
        F_00a529f0(param_1,param_2,*(undefined4 *)((int)this + 0x360));
        uVar3 = *(int *)((int)this + 0x360) + 1;
        uVar2 = uVar3 / 0xfffffff;
        *(uint *)((int)this + 0x360) = uVar3 % 0xfffffff | 0x10000000;
      }
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    pcVar4 = pcVar4 + 0x3c;
  } while ((int)uVar2 < 0x80);
  return uVar2;
}

/* ref: FUN_00a39610 */
GEN_FRAME uint GEN_THISCALL F_00a39610(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa39610u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined1 * puVar1;
  uint uVar2;
  uint uVar3;
  char * pcVar4;
  
  uVar2 = 0;
  pcVar4 = (char *)((int)this + 0x364);
  do {
    if (*pcVar4 != '\0') {
      puVar1 = (undefined1 *)((int)this + uVar2 * 0x3c + 0x364);
      *puVar1 = 0;
      uVar2 = 0;
      if (puVar1 != (undefined1 *)0x0) {
        *(undefined4 *)(puVar1 + 0x24) = param_1;
        *(undefined4 *)(puVar1 + 0x20) = param_5;
        *(undefined4 *)(puVar1 + 0x10) = param_3;
        *(undefined4 *)(puVar1 + 8) = 0x1f;
        *(short *)(puVar1 + 0x14) = (short)param_4;
        *(undefined2 *)(puVar1 + 0x28) = (undefined2)param_2;
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((int)this + 0x360);
        F_00a52ab0(param_1,param_2,param_3,param_4,param_5,*(undefined4 *)((int)this + 0x360));
        uVar3 = *(int *)((int)this + 0x360) + 1;
        uVar2 = uVar3 / 0xfffffff;
        *(uint *)((int)this + 0x360) = uVar3 % 0xfffffff | 0x10000000;
      }
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    pcVar4 = pcVar4 + 0x3c;
  } while ((int)uVar2 < 0x80);
  return uVar2;
}

/* ref: FUN_00a396c0 */
GEN_FRAME uint GEN_THISCALL F_00a396c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xa396c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined1 * puVar1;
  uint uVar2;
  uint uVar3;
  char * pcVar4;
  
  uVar2 = 0;
  pcVar4 = (char *)((int)this + 0x364);
  do {
    if (*pcVar4 != '\0') {
      puVar1 = (undefined1 *)((int)this + uVar2 * 0x3c + 0x364);
      *puVar1 = 0;
      uVar2 = 0;
      if (puVar1 != (undefined1 *)0x0) {
        *(undefined4 *)(puVar1 + 0x24) = param_1;
        *(undefined2 *)(puVar1 + 0x28) = (undefined2)param_2;
        *(undefined4 *)(puVar1 + 0x20) = param_5;
        *(undefined4 *)(puVar1 + 0x10) = param_3;
        *(undefined4 *)(puVar1 + 8) = 0x21;
        *(short *)(puVar1 + 0x14) = (short)param_4;
        *(undefined4 *)(puVar1 + 0x2c) = param_6;
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((int)this + 0x360);
        F_00a52b80(param_1,param_2,param_3,param_4,param_5,param_6,
                     *(undefined4 *)((int)this + 0x360));
        uVar3 = *(int *)((int)this + 0x360) + 1;
        uVar2 = uVar3 / 0xfffffff;
        *(uint *)((int)this + 0x360) = uVar3 % 0xfffffff | 0x10000000;
      }
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    pcVar4 = pcVar4 + 0x3c;
  } while ((int)uVar2 < 0x80);
  return uVar2;
}

/* ref: FUN_00a39780 */
GEN_FRAME uint GEN_THISCALL F_00a39780(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa39780u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined1 * puVar1;
  uint uVar2;
  uint uVar3;
  char * pcVar4;
  
  uVar2 = 0;
  pcVar4 = (char *)((int)this + 0x364);
  do {
    if (*pcVar4 != '\0') {
      puVar1 = (undefined1 *)((int)this + uVar2 * 0x3c + 0x364);
      *puVar1 = 0;
      uVar2 = 0;
      if (puVar1 != (undefined1 *)0x0) {
        *(undefined4 *)(puVar1 + 8) = 0x20;
        *(undefined4 *)(puVar1 + 0x10) = param_1;
        *(short *)(puVar1 + 0x14) = (short)param_2;
        *(undefined4 *)(puVar1 + 0x24) = param_1;
        *(short *)(puVar1 + 0x28) = (short)param_2;
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((int)this + 0x360);
        F_00a52c50(param_1,param_2,*(undefined4 *)((int)this + 0x360));
        uVar3 = *(int *)((int)this + 0x360) + 1;
        uVar2 = uVar3 / 0xfffffff;
        *(uint *)((int)this + 0x360) = uVar3 % 0xfffffff | 0x10000000;
      }
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    pcVar4 = pcVar4 + 0x3c;
  } while ((int)uVar2 < 0x80);
  return uVar2;
}

/* ref: FUN_00a39820 */
GEN_FRAME uint GEN_THISCALL F_00a39820(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa39820u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined1 * puVar1;
  uint uVar2;
  uint uVar3;
  char * pcVar4;
  
  uVar2 = 0;
  pcVar4 = (char *)((int)this + 0x364);
  do {
    if (*pcVar4 != '\0') {
      puVar1 = (undefined1 *)((int)this + uVar2 * 0x3c + 0x364);
      *puVar1 = 0;
      uVar2 = 0;
      if (puVar1 != (undefined1 *)0x0) {
        *(undefined4 *)(puVar1 + 8) = 0xe;
        *(undefined4 *)(puVar1 + 0x10) = param_1;
        *(short *)(puVar1 + 0x14) = (short)param_2;
        *(undefined4 *)(puVar1 + 0x1c) = param_3;
        *(undefined4 *)(puVar1 + 0x24) = param_1;
        *(short *)(puVar1 + 0x28) = (short)param_2;
        *(undefined4 *)(puVar1 + 0x30) = param_3;
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((int)this + 0x360);
        F_00a518c0(param_1,param_2,param_3,*(undefined4 *)((int)this + 0x360));
        uVar3 = *(int *)((int)this + 0x360) + 1;
        uVar2 = uVar3 / 0xfffffff;
        *(uint *)((int)this + 0x360) = uVar3 % 0xfffffff | 0x10000000;
      }
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    pcVar4 = pcVar4 + 0x3c;
  } while ((int)uVar2 < 0x80);
  return uVar2;
}

/* ref: FUN_00a398c0 */
GEN_FRAME uint GEN_THISCALL F_00a398c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa398c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined1 * puVar1;
  uint uVar2;
  uint uVar3;
  char * pcVar4;
  
  uVar2 = 0;
  pcVar4 = (char *)((int)this + 0x364);
  do {
    if (*pcVar4 != '\0') {
      puVar1 = (undefined1 *)((int)this + uVar2 * 0x3c + 0x364);
      *puVar1 = 0;
      uVar2 = 0;
      if (puVar1 != (undefined1 *)0x0) {
        *(undefined4 *)(puVar1 + 8) = 0xf;
        *(undefined4 *)(puVar1 + 0x10) = param_1;
        *(undefined4 *)(puVar1 + 0x1c) = param_3;
        *(short *)(puVar1 + 0x14) = (short)param_2;
        *(undefined4 *)(puVar1 + 0x24) = param_1;
        *(short *)(puVar1 + 0x28) = (short)param_2;
        *(undefined4 *)(puVar1 + 0x30) = param_3;
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((int)this + 0x360);
        F_00a51990(param_1,param_2,param_3,*(undefined4 *)((int)this + 0x360));
        uVar3 = *(int *)((int)this + 0x360) + 1;
        uVar2 = uVar3 / 0xfffffff;
        *(uint *)((int)this + 0x360) = uVar3 % 0xfffffff | 0x10000000;
      }
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    pcVar4 = pcVar4 + 0x3c;
  } while ((int)uVar2 < 0x80);
  return uVar2;
}

/* ref: FUN_00a39960 */
GEN_FRAME uint GEN_THISCALL F_00a39960(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa39960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined1 * puVar1;
  uint uVar2;
  uint uVar3;
  char * pcVar4;
  
  uVar2 = 0;
  pcVar4 = (char *)((int)this + 0x364);
  do {
    if (*pcVar4 != '\0') {
      puVar1 = (undefined1 *)((int)this + uVar2 * 0x3c + 0x364);
      *puVar1 = 0;
      uVar2 = 0;
      if (puVar1 != (undefined1 *)0x0) {
        *(undefined4 *)(puVar1 + 8) = 0x10;
        *(undefined4 *)(puVar1 + 0x10) = param_1;
        *(undefined4 *)(puVar1 + 0x24) = param_1;
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((int)this + 0x360);
        F_00a51a60(param_1,*(undefined4 *)((int)this + 0x360));
        uVar3 = *(int *)((int)this + 0x360) + 1;
        uVar2 = uVar3 / 0xfffffff;
        *(uint *)((int)this + 0x360) = uVar3 % 0xfffffff | 0x10000000;
      }
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    pcVar4 = pcVar4 + 0x3c;
  } while ((int)uVar2 < 0x80);
  return uVar2;
}

/* ref: FUN_00a399f0 */
GEN_FRAME uint GEN_THISCALL F_00a399f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa399f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined1 * puVar1;
  uint uVar2;
  uint uVar3;
  char * pcVar4;
  
  uVar2 = 0;
  pcVar4 = (char *)((int)this + 0x364);
  do {
    if (*pcVar4 != '\0') {
      puVar1 = (undefined1 *)((int)this + uVar2 * 0x3c + 0x364);
      *puVar1 = 0;
      uVar2 = 0;
      if (puVar1 != (undefined1 *)0x0) {
        *(undefined4 *)(puVar1 + 8) = 0x11;
        *(undefined4 *)(puVar1 + 0x10) = param_1;
        *(undefined4 *)(puVar1 + 0x24) = param_1;
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((int)this + 0x360);
        F_00a51b20(param_1,*(undefined4 *)((int)this + 0x360));
        uVar3 = *(int *)((int)this + 0x360) + 1;
        uVar2 = uVar3 / 0xfffffff;
        *(uint *)((int)this + 0x360) = uVar3 % 0xfffffff | 0x10000000;
      }
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    pcVar4 = pcVar4 + 0x3c;
  } while ((int)uVar2 < 0x80);
  return uVar2;
}

/* ref: FUN_00a39a80 */
GEN_FRAME uint GEN_THISCALL F_00a39a80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa39a80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined1 * puVar1;
  uint uVar2;
  uint uVar3;
  char * pcVar4;
  
  uVar2 = 0;
  pcVar4 = (char *)((int)this + 0x364);
  do {
    if (*pcVar4 != '\0') {
      puVar1 = (undefined1 *)((int)this + uVar2 * 0x3c + 0x364);
      *puVar1 = 0;
      uVar2 = 0;
      if (puVar1 != (undefined1 *)0x0) {
        *(undefined4 *)(puVar1 + 8) = 0x12;
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((int)this + 0x360);
        F_00a51be0(*(undefined4 *)((int)this + 0x360),param_1);
        uVar3 = *(int *)((int)this + 0x360) + 1;
        uVar2 = uVar3 / 0xfffffff;
        *(uint *)((int)this + 0x360) = uVar3 % 0xfffffff | 0x10000000;
      }
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    pcVar4 = pcVar4 + 0x3c;
  } while ((int)uVar2 < 0x80);
  return uVar2;
}

/* ref: FUN_00a39b00 */
GEN_FRAME uint GEN_THISCALL F_00a39b00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa39b00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined1 * puVar1;
  uint uVar2;
  uint uVar3;
  char * pcVar4;
  
  uVar2 = 0;
  pcVar4 = (char *)((int)this + 0x364);
  do {
    if (*pcVar4 != '\0') {
      puVar1 = (undefined1 *)((int)this + uVar2 * 0x3c + 0x364);
      *puVar1 = 0;
      uVar2 = 0;
      if (puVar1 != (undefined1 *)0x0) {
        *(undefined4 *)(puVar1 + 8) = 0x13;
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((int)this + 0x360);
        F_00a51ca0(*(undefined4 *)((int)this + 0x360),param_1);
        uVar3 = *(int *)((int)this + 0x360) + 1;
        uVar2 = uVar3 / 0xfffffff;
        *(uint *)((int)this + 0x360) = uVar3 % 0xfffffff | 0x10000000;
      }
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    pcVar4 = pcVar4 + 0x3c;
  } while ((int)uVar2 < 0x80);
  return uVar2;
}

/* ref: FUN_00a39b80 */
GEN_NOFRAME uint F_00a39b80(void)
{
  GEN_ENTER(0xa39b80u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00a39b90 */
GEN_FRAME uint GEN_THISCALL F_00a39b90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa39b90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  uint uVar2;
  
  *(undefined1 *)((int)this + 0x23e0) = *(undefined1 *)(param_2 + 4);
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD);
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1 GEN_EDX_ARG);
  *(byte *)(uVar2 + 0x230bf) = *(byte *)(uVar2 + 0x230bf) | 4;
  return uVar2;
}

/* ref: FUN_00a39bc0 */
GEN_FRAME uint GEN_THISCALL F_00a39bc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa39bc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  int * piVar3;
  undefined * pvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar2 = F_00a64450(&REFG(undefined, 0x14a9a18) GEN_EDX_FWD,*(undefined4 *)(param_2 + 0x78));
  if (uVar2 == 0) {
    if ((REFG(void * PTR32, 0x1379694) != (undefined *)0x0) && (*((char *)GEN_TOP(((int)REFG(void * PTR32, 0x1379694) + 0x188))) == '\a')) {
      F_00aa2900(REFG(void * PTR32, 0x1379694) GEN_EDX_ARG,0);
    }
    uVar2 = F_00a51200(0x2f,0,0,0,0);
    return uVar2;
  }
  piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar6 = 0;
  uVar5 = 0x4c1;
  pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3 GEN_EDX_ARG)));
  F_0046ac40(pvVar4 GEN_EDX_ARG,uVar5,uVar6,uVar2);
  *(undefined4 *)((int)this + 0x30d8) = 0;
  *(undefined4 *)((int)this + 0x30dc) = 0;
  *(undefined4 *)((int)this + 0x30e8) = 0;
  *(undefined4 *)((int)this + 0x30ec) = 0;
  *(undefined1 *)((int)this + 0x30e4) = 0;
  *(undefined4 *)((int)this + 0x30e0) = 0x75300000;
  *(undefined1 *)((int)this + 0x30ff) = 0;
  *(undefined4 *)((int)this + 0x3100) = 0;
  *(undefined1 *)((int)this + 0x30d6) = 0;
  *(undefined4 *)((int)this + 0x310c) = 0;
  *(undefined4 *)((int)this + 0x30f0) = 0;
  *(undefined4 *)((int)this + 0x30f4) = 0;
  *(undefined2 *)((int)this + 0x30f8) = 0;
  *(undefined4 *)((int)this + 0x30fa) = 0;
  *(undefined1 *)((int)this + 0x30fe) = 0;
  *(undefined4 *)((int)this + 0x3104) = 0;
  *(undefined1 *)((int)this + 0x3108) = 0;
  uVar2 = *(uint *)(param_2 + 0x10);
  *(uint *)((int)this + 0x30d8) = uVar2;
  if ((*(char *)((int)this + 0x30d6) == '\0') && ((uVar2 < 0x1e8481 || (0x1e8909 < uVar2)))) {
    if (uVar2 < 1000000) {
      *(byte *)((int)this + 0x30e4) = *(byte *)((int)this + 0x30e4) & 0xfe;
    }
    else {
      *(byte *)((int)this + 0x30e4) = *(byte *)((int)this + 0x30e4) | 1;
      *(uint *)((int)this + 0x30d8) = uVar2 - 1000000;
    }
  }
  iVar1 = *(int *)(param_2 + 0xc);
  *(int *)((int)this + 0x30dc) = iVar1;
  if (((iVar1 == 0) &&
      (*(undefined4 *)((int)this + 0x30dc) = 0, *(char *)((int)this + 0x30d6) == '\0')) &&
     (*(int *)((int)this + 0x30d8) != 1)) {
    *(undefined4 *)((int)this + 0x30d8) = 0;
  }
  *(undefined4 *)((int)this + 0x30e8) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((int)this + 0x30ec) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined1 *)((int)this + 0x30e4) = *(undefined1 *)(param_2 + 0x20);
  *(undefined2 *)((int)this + 0x30e2) = *(undefined2 *)(param_2 + 0x22);
  *(undefined2 *)((int)this + 0x30e0) = *(undefined2 *)(param_2 + 0x24);
  *(undefined1 *)((int)this + 0x30ff) = *(undefined1 *)(param_2 + 0x26);
  *(undefined4 *)((int)this + 0x3100) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)((int)this + 0x30f0) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)((int)this + 0x30f4) = *(undefined4 *)(param_2 + 0x30);
  *(undefined2 *)((int)this + 0x30f8) = *(undefined2 *)(param_2 + 0x34);
  *(undefined4 *)((int)this + 0x30fa) = *(undefined4 *)(param_2 + 0x36);
  *(undefined1 *)((int)this + 0x30fe) = *(undefined1 *)(param_2 + 0x3a);
  *(undefined4 *)((int)this + 0x3104) = *(undefined4 *)(param_2 + 0x3b);
  *(undefined1 *)((int)this + 0x3108) = *(undefined1 *)(param_2 + 0x3f);
  *(undefined4 *)((int)this + 0x3098) = 0;
  *(undefined4 *)((int)this + 0x309c) = 0;
  *(undefined4 *)((int)this + 0x30a8) = 0;
  *(undefined4 *)((int)this + 0x30ac) = 0;
  *(undefined1 *)((int)this + 0x30a4) = 0;
  *(undefined1 *)((int)this + 0x30bf) = 0;
  *(undefined4 *)((int)this + 0x30c0) = 0;
  *(undefined1 *)((int)this + 0x3096) = 0;
  *(undefined4 *)((int)this + 0x30cc) = 0;
  *(undefined2 *)((int)this + 0x30a2) = 30000;
  *(undefined2 *)((int)this + 0x30a0) = 0;
  *(undefined4 *)((int)this + 0x30b0) = 0;
  *(undefined4 *)((int)this + 0x30b4) = 0;
  *(undefined2 *)((int)this + 0x30b8) = 0;
  *(undefined4 *)((int)this + 0x30ba) = 0;
  *(undefined1 *)((int)this + 0x30be) = 0;
  *(undefined4 *)((int)this + 0x30c4) = 0;
  *(undefined1 *)((int)this + 0x30c8) = 0;
  uVar2 = *(uint *)(param_2 + 0x48);
  *(uint *)((int)this + 0x3098) = uVar2;
  if ((*(char *)((int)this + 0x3096) == '\0') && ((uVar2 < 0x1e8481 || (0x1e8909 < uVar2)))) {
    if (uVar2 < 1000000) {
      *(byte *)((int)this + 0x30a4) = *(byte *)((int)this + 0x30a4) & 0xfe;
    }
    else {
      *(byte *)((int)this + 0x30a4) = *(byte *)((int)this + 0x30a4) | 1;
      *(uint *)((int)this + 0x3098) = uVar2 - 1000000;
    }
  }
  iVar1 = *(int *)(param_2 + 0x44);
  *(int *)((int)this + 0x309c) = iVar1;
  if (((iVar1 == 0) &&
      (*(undefined4 *)((int)this + 0x309c) = 0, *(char *)((int)this + 0x3096) == '\0')) &&
     (*(int *)((int)this + 0x3098) != 1)) {
    *(undefined4 *)((int)this + 0x3098) = 0;
  }
  *(undefined4 *)((int)this + 0x30a8) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)((int)this + 0x30ac) = *(undefined4 *)(param_2 + 0x54);
  *(undefined1 *)((int)this + 0x30a4) = *(undefined1 *)(param_2 + 0x58);
  *(undefined2 *)((int)this + 0x30a2) = *(undefined2 *)(param_2 + 0x5a);
  *(undefined2 *)((int)this + 0x30a0) = *(undefined2 *)(param_2 + 0x5c);
  *(undefined1 *)((int)this + 0x30bf) = *(undefined1 *)(param_2 + 0x5e);
  *(undefined4 *)((int)this + 0x30c0) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)((int)this + 0x30b0) = *(undefined4 *)(param_2 + 100);
  *(undefined4 *)((int)this + 0x30b4) = *(undefined4 *)(param_2 + 0x68);
  *(undefined2 *)((int)this + 0x30b8) = *(undefined2 *)(param_2 + 0x6c);
  *(undefined4 *)((int)this + 0x30ba) = *(undefined4 *)(param_2 + 0x6e);
  *(undefined1 *)((int)this + 0x30be) = *(undefined1 *)(param_2 + 0x72);
  *(undefined4 *)((int)this + 0x30c4) = *(undefined4 *)(param_2 + 0x73);
  *(undefined1 *)((int)this + 0x30c8) = *(undefined1 *)(param_2 + 0x77);
  *(undefined4 *)((int)this + 0x3110) = *(undefined4 *)(param_2 + 0x78);
  piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar5 = 0x23;
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x48))(piVar3 GEN_EDX_ARG);
  pvVar4 = (undefined *)F_00763050(uVar2 GEN_EDX_ARG,uVar5);
  uVar2 = F_007784a0(pvVar4 GEN_EDX_ARG,(int)this + 0x30d0,(int)this + 0x3090,*(undefined4 *)(param_2 + 0x7c))
  ;
  return uVar2;
}

/* ref: FUN_00a39eb0 */
GEN_FRAME uint GEN_STDCALL F_00a39eb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa39eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 uVar6;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar6 = 1;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1 GEN_EDX_ARG);
    uVar2 = F_00763050(uVar2 GEN_EDX_ARG,uVar6);
    if (uVar2 != 0) {
      ((undefined4 *)(gen_frame + 0x8))[0] = 0;
      ((undefined4 *)(gen_frame + 0x8))[1] = 0;
      ((undefined4 *)(gen_frame + 0x8))[2] = 0;
      ((undefined4 *)(gen_frame + 0x8))[3] = 0;
      ((undefined4 *)(gen_frame + 0x8))[4] = 0;
      ((undefined4 *)(gen_frame + 0x8))[5] = 0;
      (*(undefined2 *)(gen_frame + 0x20)) = 0;
      (*(undefined1 *)(gen_frame + 0x22)) = *param_2;
      (*(undefined4 *)(gen_frame + 0x23)) = 0;
      puVar4 = (undefined4 *)(param_2 + 1);
      puVar5 = ((undefined4 *)(gen_frame + 0x8));
      for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 - 1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      *(undefined2 *)puVar5 = *(undefined2 *)puVar4;
      F_00780650(uVar2 GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x8)));
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00a39f40 */
GEN_NOFRAME uint F_00a39f40(void)
{
  GEN_ENTER(0xa39f40u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0xc60];
  byte bVar1;
  int * piVar2;
  uint uVar3;
  uint in_ecx;
  undefined4 * puVar4;
  undefined * this;
  undefined3 extraout_var = 0;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  (*(uint *)(gen_frame + 0xc4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc50);
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar3 = 0;
  if (piVar2 != (int *)0x0) {
    uVar8 = 1;
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2 GEN_EDX_ARG);
    in_ecx = F_00763050(uVar3 GEN_EDX_ARG,uVar8);
    uVar3 = 0;
    if (in_ecx != 0) {
      puVar4 = (undefined4 *)F_007806c0(in_ecx GEN_EDX_ARG);
      puVar6 = &(*(undefined4 *)(gen_frame + 0x8));
      for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 - 1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar6 = puVar6 + 1;
      }
      *(undefined2 *)puVar6 = *(undefined2 *)puVar4;
      *(undefined1 *)((int)puVar6 + 2) = *(undefined1 *)((int)puVar4 + 2);
      (*(undefined1 *)(gen_frame + 0x40)) = (*(undefined1 *)(gen_frame + 0x22));
      (*(undefined4 *)(gen_frame + 0x28)) = 0x1a6;
      (*(undefined4 *)(gen_frame + 0x2c)) = 0x30;
      puVar4 = &(*(undefined4 *)(gen_frame + 0x8));
      puVar6 = ((undefined4 *)(gen_frame + 0x41));
      for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 - 1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar6 = puVar6 + 1;
      }
      uVar9 = 0;
      uVar8 = 0;
      puVar7 = &(*(undefined4 *)(gen_frame + 0x28));
      *(undefined2 *)puVar6 = *(undefined2 *)puVar4;
      this = (undefined *)F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
      bVar1 = F_00974e00(this GEN_EDX_ARG,puVar7,uVar8,uVar9);
      uVar3 = CONCAT31(extraout_var,bVar1);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xc4c)) ^ (uint)(uint)(gen_frame + 0xc50) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_00a3a020 */
GEN_NOFRAME byte F_00a3a020(void)
{
  GEN_ENTER(0xa3a020u, 0u, 0u, 0u, 0u);
  byte bVar1;
  int * piVar2;
  uint in_ecx;
  undefined * this;
  undefined4 uVar3;
  
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar3 = 0x21;
  in_ecx = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2 GEN_EDX_ARG);
  this = (undefined *)F_00763050(in_ecx GEN_EDX_ARG,uVar3);
  bVar1 = F_008d5350(this GEN_EDX_ARG);
  return bVar1;
}

/* ref: FUN_00a3a050 */
GEN_NOFRAME uint F_00a3a050(void)
{
  GEN_ENTER(0xa3a050u, 0u, 0u, 0u, 0u);
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined4 uVar4;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar4 = 0x22;
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1 GEN_EDX_ARG);
  pvVar3 = (undefined *)F_00763050(uVar2 GEN_EDX_ARG,uVar4);
  F_008e9cb0(pvVar3 GEN_EDX_ARG);
  uVar4 = 0x23;
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1 GEN_EDX_ARG);
  pvVar3 = (undefined *)F_00763050(uVar2 GEN_EDX_ARG,uVar4);
  uVar2 = F_008edf60(pvVar3 GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00a3a0a0 */
GEN_NOFRAME uint F_00a3a0a0(void)
{
  GEN_ENTER(0xa3a0a0u, 0u, 0u, 0u, 0u);
  int * piVar1;
  uint uVar2;
  undefined * this;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar3 = 0x24;
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1 GEN_EDX_ARG);
  this = (undefined *)F_00763050(uVar2 GEN_EDX_ARG,uVar3);
  *(undefined4 *)((int)this + 0x20) = 0xffffffff;
  uVar2 = F_008ea1f0(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00a3a0d0 */
GEN_NOFRAME uint F_00a3a0d0(void)
{
  GEN_ENTER(0xa3a0d0u, 0u, 0u, 0u, 0u);
  int * piVar1;
  uint uVar2;
  undefined * this;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar3 = 0x48;
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1 GEN_EDX_ARG);
  this = (undefined *)F_00763050(uVar2 GEN_EDX_ARG,uVar3);
  uVar2 = F_008a1f90(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00a3a100 */
GEN_NOFRAME unsigned int F_00a3a100(void)
{
  GEN_ENTER(0xa3a100u, 0u, 0u, 0u, 0u);
  int * piVar1;
  uint in_ecx;
  undefined * this;
  undefined4 uVar2;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar2 = 0x1b;
  in_ecx = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1 GEN_EDX_ARG);
  this = (undefined *)F_00763050(in_ecx GEN_EDX_ARG,uVar2);
  F_00777710(this GEN_EDX_ARG);
  return;
}

/* ref: FUN_00a3a150 */
GEN_FRAME uint GEN_THISCALL F_00a3a150(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa3a150u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00a36f30(this GEN_EDX_FWD,param_1);
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  uVar1 = F_00a37da0(this_00 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_00a3a180 */
GEN_FRAME uint GEN_THISCALL F_00a3a180(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa3a180u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short sVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  int iVar6;
  undefined * extraout_ECX;
  int iVar7;
  int iVar8;
  uint local_c;
  uint local_8;
  
  local_8 = 0;
  local_c = 0;
  do {
    iVar8 = 0;
    piVar4 = (int *)F_00a36f30(this GEN_EDX_FWD,local_c);
    extraout_ECX = ((undefined *)(uint)(this));
    iVar6 = 0;
    if ((piVar4 != (int *)0x0) && (iVar2 = *piVar4, iVar6 = iVar8, iVar2 != 0)) {
      iVar3 = piVar4[3];
      iVar7 = 0;
      if (0 < iVar3) {
        piVar4 = (int *)(iVar2 + 8);
        do {
          if ((*(char *)((int)piVar4 - 2) == '\0') && (*piVar4 == 0)) {
            iVar7 = iVar7 * 0x40 + iVar2;
            if (iVar7 != 0) {
              sVar1 = *(short *)(iVar7 + 4);
              goto joined_r0x00a3a1d2;
            }
            break;
          }
          iVar7 = iVar7 + 1;
          piVar4 = piVar4 + 0x10;
        } while (iVar7 < iVar3);
      }
    }
LAB_00a3a211: ;
    local_8 = local_8 + iVar6;
    local_c = local_c + 1;
    this = extraout_ECX;
    if (3 < local_c) {
      return local_8;
    }
  } while( true );
joined_r0x00a3a1d2: ;
  iVar6 = iVar8;
  if (sVar1 == -1) goto LAB_00a3a211;
  uVar5 = (uint)(ushort)(sVar1 + 1);
  iVar8 = iVar8 + 1;
  iVar6 = iVar8;
  if (iVar3 <= (int)uVar5) goto LAB_00a3a211;
  piVar4 = (int *)(uVar5 * 0x40 + 8 + iVar2);
  while ((*(char *)((int)piVar4 - 2) != '\0' || (*piVar4 != 0))) {
    uVar5 = uVar5 + 1;
    piVar4 = piVar4 + 0x10;
    if (iVar3 <= (int)uVar5) goto LAB_00a3a211;
  }
  iVar7 = uVar5 * 0x40 + iVar2;
  if (iVar7 == 0) goto LAB_00a3a211;
  sVar1 = *(short *)(iVar7 + 4);
  goto joined_r0x00a3a1d2;
}

/* ref: FUN_00a3a230 */
GEN_FRAME uint GEN_THISCALL F_00a3a230(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa3a230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  if (param_1 - 2U < 0x12) {
    this_00 = (undefined *)F_00a36f30(this GEN_EDX_FWD,0x7d1);
    if (this_00 != (undefined *)0x0) {
      uVar1 = F_00a37da0(this_00 GEN_EDX_ARG,param_1 - 2);
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_00a3a270 */
GEN_FRAME uint GEN_THISCALL F_00a3a270(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa3a270u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  if (param_1 - 2U < 0x12) {
    this_00 = (undefined *)F_00a36f30(this GEN_EDX_FWD,0x2ee1);
    if (this_00 != (undefined *)0x0) {
      uVar1 = F_00a37da0(this_00 GEN_EDX_ARG,param_1 - 2);
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_00a3a2b0 */
GEN_FRAME uint GEN_THISCALL F_00a3a2b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa3a2b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  int * piVar3;
  undefined * pvVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar5 = 0;
  do {
    F_00ab24a0(iVar5 + 0x15da);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 5);
  if ((char)param_2 != '\0') {
    iVar5 = 1;
    do {
      uVar2 = F_00ab21a0(iVar5);
      if (*(int *)(uVar2 + 0x10) == 0x21) {
        uVar2 = F_00a68280(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,iVar5,0);
        if (((short)uVar2 != 0) && ((REFG(undefined1, 0x14b4edf) & 0x80) != 0)) {
          F_00a6e080(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG,0x20,0,0);
          uVar2 = F_00a399f0(this GEN_EDX_ARG,param_1);
          return uVar2;
        }
      }
      iVar5 = iVar5 + 1;
      if (0x1c < iVar5) {
        uVar2 = F_00a399f0(this GEN_EDX_ARG,param_1);
        return uVar2;
      }
    } while( true );
  }
  bVar1 = F_00ab1d50(*(undefined4 *)&REFG(undefined2, 0x1379c78));
  iVar5 = REFG(int, 0x1379694);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 == 0) {
    if (REFG(int, 0x1379694) != 0) {
      piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
      uVar2 = 0;
      if (piVar3 != (int *)0x0) {
        uVar7 = 0;
        uVar6 = 0x577;
        pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3 GEN_EDX_ARG)));
        uVar2 = F_0046ac40(pvVar4 GEN_EDX_ARG,uVar6,iVar5,uVar7);
        return uVar2;
      }
    }
  }
  else {
    bVar1 = F_00a4a790(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x17);
    if (bVar1 == 0) {
      uVar2 = F_00a4a810(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x17);
      return uVar2;
    }
    piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
    uVar6 = 0x34;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x48))(piVar3 GEN_EDX_ARG);
    piVar3 = (int *)F_00763050(uVar2 GEN_EDX_ARG,uVar6);
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3 GEN_EDX_ARG);
    if ((char)uVar2 == '\0') {
      F_00a39960(this GEN_EDX_ARG,param_1);
      uVar2 = F_00a4a760(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x17,1);
    }
    else {
      piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
      uVar2 = 0;
      if (piVar3 != (int *)0x0) {
        uVar6 = 0x1a0;
        pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3 GEN_EDX_ARG)));
        uVar2 = F_0046a630(pvVar4 GEN_EDX_ARG,uVar6);
        return uVar2;
      }
    }
  }
  return uVar2;
}

/* ref: FUN_00a3a440 */
GEN_FRAME uint GEN_THISCALL F_00a3a440(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa3a440u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  int * piVar3;
  undefined * pvVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar5 = 0;
  do {
    F_00ab24a0(iVar5 + 0x15da);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 5);
  if ((char)param_1 != '\0') {
    iVar5 = 1;
    do {
      uVar2 = F_00ab21a0(iVar5);
      if (*(int *)(uVar2 + 0x10) == 0x21) {
        uVar2 = F_00a68280(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,iVar5,0);
        if (((short)uVar2 != 0) && ((REFG(undefined1, 0x14b4edf) & 0x80) != 0)) {
          F_00a6e080(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG,0x20,0,0);
          uVar2 = F_00a39b00(this GEN_EDX_ARG,param_2);
          return uVar2;
        }
      }
      iVar5 = iVar5 + 1;
      if (0x1c < iVar5) {
        uVar2 = F_00a39b00(this GEN_EDX_ARG,param_2);
        return uVar2;
      }
    } while( true );
  }
  bVar1 = F_00ab1d50(*(undefined4 *)&REFG(undefined2, 0x1379c78));
  iVar5 = REFG(int, 0x1379694);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 == 0) {
    if (REFG(int, 0x1379694) != 0) {
      piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
      uVar2 = 0;
      if (piVar3 != (int *)0x0) {
        uVar7 = 0;
        uVar6 = 0x577;
        pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3 GEN_EDX_ARG)));
        uVar2 = F_0046ac40(pvVar4 GEN_EDX_ARG,uVar6,iVar5,uVar7);
        return uVar2;
      }
    }
  }
  else {
    bVar1 = F_00a4a790(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x17);
    if (bVar1 == 0) {
      uVar2 = F_00a4a810(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x17);
      return uVar2;
    }
    piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
    uVar6 = 0x34;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x48))(piVar3 GEN_EDX_ARG);
    piVar3 = (int *)F_00763050(uVar2 GEN_EDX_ARG,uVar6);
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3 GEN_EDX_ARG);
    if ((char)uVar2 == '\0') {
      F_00a39a80(this GEN_EDX_ARG,param_2);
      uVar2 = F_00a4a760(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x17,1);
    }
    else {
      piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
      uVar2 = 0;
      if (piVar3 != (int *)0x0) {
        uVar6 = 0x1a0;
        pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3 GEN_EDX_ARG)));
        uVar2 = F_0046a630(pvVar4 GEN_EDX_ARG,uVar6);
        return uVar2;
      }
    }
  }
  return uVar2;
}

/* ref: FUN_00a3a5d0 */
GEN_FRAME byte GEN_THISCALL F_00a3a5d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa3a5d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  undefined * this_00;
  ushort uVar2;
  undefined4 uVar3;
  
  uVar2 = 0;
  if (param_1 < 0x55f1) {
    if (param_1 == 22000) {
      uVar2 = 0x20;
    }
    else {
      switch((unsigned int)(uintptr_t)(param_1)) {
      case 20000: ;
        uVar2 = 1;
        break;
      case 0x4e21: ;
        uVar2 = 2;
        break;
      case 0x4e22: ;
        uVar2 = 4;
        break;
      case 0x4e23: ;
        uVar2 = 8;
        break;
      case 0x4e24: ;
        uVar2 = 0x10;
      }
    }
  }
  else if (param_1 == 0x55f1) {
    uVar2 = 0x40;
  }
  if ((*(ushort *)((int)this + 0x311c) & uVar2) == 0) {
    if ((*(char *)((int)this + 0x311e) == '\0') || (param_1 == 22000)) {
      if (((*(char *)((int)this + 0x3124) == '\0') || (param_1 != 22000)) &&
         (*(char *)((int)this + 0x3088) == '\0')) {
        F_00a51200(0x28,param_1,0,0,0);
        *(ushort *)((int)this + 0x311c) = *(ushort *)((int)this + 0x311c) | uVar2;
        if (param_1 != 22000) {
          *(undefined4 *)((int)this + 0x3120) = *(undefined4 *)&REFG(undefined, 0x10e4a84);
          *(undefined1 *)((int)this + 0x311e) = 1;
          if ((param_1 - 20000U < 0x7d2) && (uVar2 != 0)) {
            *(ushort *)((int)this + 0x311c) = *(ushort *)((int)this + 0x311c) | 0x20;
          }
          return 1;
        }
        *(undefined4 *)((int)this + 0x3128) = *(undefined4 *)&REFG(undefined, 0x10e4a84);
        *(undefined1 *)((int)this + 0x3124) = 1;
        return 1;
      }
    }
    else {
      piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
      uVar3 = 0x744;
      this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1 GEN_EDX_ARG)));
      F_0046a630(this_00 GEN_EDX_ARG,uVar3);
    }
  }
  return 0;
}

/* ref: FUN_00a3a720 */
GEN_NOFRAME uint F_00a3a720(void)
{
  GEN_ENTER(0xa3a720u, 0u, 0u, 0u, 0u);
  int * piVar1;
  uint uVar2;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1 GEN_EDX_ARG);
  *(byte *)(uVar2 + 0x230bf) = *(byte *)(uVar2 + 0x230bf) | 1;
  F_006d0fd0();
  uVar2 = F_00701020();
  return uVar2;
}

/* ref: FUN_00a3a750 */
GEN_FRAME uint F_00a3a750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa3a750u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 == 0) {
    return 0x2c7;
  }
  bVar1 = F_00a4a790(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x3e);
  if (bVar1 == 0) {
    return (-(uint)(REFG(int, 0x14a4258) != param_1 + 1000) & 0xfffffff5) + 0x2c4;
  }
  if (param_2 != 0xd) {
    return 0;
  }
  piVar2 = (int *)F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,param_1 + 1000);
  if (((piVar2 != (int *)0x0) && (iVar4 = *piVar2, iVar4 != 0)) && (0 < piVar2[3])) {
    if (*(char *)(iVar4 + 6) != '\0') {
      iVar5 = (int)*(short *)(iVar4 + 8);
      piVar2 = (int *)F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*(ushort *)(iVar4 + 10));
      if (((*piVar2 == 0) || (iVar5 < 0)) || (piVar2[3] <= iVar5)) {
        iVar4 = 0;
      }
      else {
        iVar4 = *piVar2 + iVar5 * 0x40;
      }
    }
    if ((iVar4 != 0) && ((*(char *)(iVar4 + 6) != '\0' || (*(int *)(iVar4 + 8) != 0)))) {
      uVar3 = F_00a36f00(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,0);
      if (uVar3 == 0) {
        return 0x2cc;
      }
      uVar3 = F_00ab21a0((uint)*(byte *)(uVar3 + 0xa8));
      if (*(char *)(uVar3 + 0x45) == '\0') {
        bVar1 = F_00a35cb0();
        if (bVar1 != 0) {
          return 0;
        }
        return 0x2da;
      }
      return 0x2b5;
    }
  }
  return 0x2c4;
}

/* ref: FUN_00a3a860 */
GEN_NOFRAME uint GEN_THISCALL F_00a3a860(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa3a860u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  
  if (*(char *)((int)this + 6) != '\0') {
    this_00 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_FWD,(uint)*(ushort *)((int)this + 10));
    if (this_00 == (undefined *)0x0) {
      return 0;
    }
    uVar1 = F_00a37da0(this_00 GEN_EDX_ARG,(int)*(short *)((int)this + 8));
    if (uVar1 != 0) {
      return uVar1;
    }
  }
  return (uint)this;
}

/* ref: FUN_00a3a8a0 */
GEN_NOFRAME uint GEN_THISCALL F_00a3a8a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa3a8a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (*(char *)((int)this + 6) == '\0') {
    return *(uint *)((int)this + 0xc);
  }
  iVar4 = (int)*(short *)((int)this + 8);
  pvVar1 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_FWD,(uint)*(ushort *)((int)this + 10));
  pvVar1 = (undefined *)F_00a37da0(pvVar1 GEN_EDX_ARG,iVar4);
  uVar3 = *(uint *)((int)this + 0xc);
  uVar2 = F_00a3a8a0(pvVar1 GEN_EDX_ARG);
  if (uVar2 < uVar3) {
    uVar3 = F_00a3a8a0(pvVar1 GEN_EDX_ARG);
    *(uint *)((int)this + 0xc) = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00a3a8f0 */
GEN_FRAME uint GEN_THISCALL F_00a3a8f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa3a8f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined * pvVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (*(int *)this == 0) {
    return 0;
  }
  if (param_2 < *(int *)((int)this + 0xc)) {
    iVar7 = param_2 << 6;
    iVar2 = param_2;
    do {
      iVar8 = iVar7 + *(int *)this;
      if (*(int *)(iVar8 + 8) == param_1) {
        if (*(char *)(iVar8 + 6) == '\0') {
          uVar5 = *(uint *)(iVar8 + 0xc);
        }
        else {
          iVar6 = (int)*(short *)(iVar8 + 8);
          pvVar4 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_FWD,(uint)*(ushort *)(iVar8 + 10));
          pvVar4 = (undefined *)F_00a37da0(pvVar4 GEN_EDX_ARG,iVar6);
          uVar5 = *(uint *)(iVar8 + 0xc);
          uVar1 = F_00a3a8a0(pvVar4 GEN_EDX_ARG);
          if (uVar1 < uVar5) {
            uVar5 = F_00a3a8a0(pvVar4 GEN_EDX_ARG);
            *(uint *)(iVar8 + 0xc) = uVar5;
          }
        }
        if (uVar5 != 0) {
          puVar3 = (undefined4 *)(iVar2 * 0x40 + *(int *)this);
          if (*(char *)((int)puVar3 + 6) == '\0') {
            return (uint)puVar3;
          }
          iVar2 = (int)*(short *)(puVar3 + 1);
          pvVar4 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,*puVar3);
          uVar5 = F_00a37da0(pvVar4 GEN_EDX_ARG,iVar2);
          return uVar5;
        }
      }
      iVar2 = iVar2 + 1;
      iVar7 = iVar7 + 0x40;
    } while (iVar2 < *(int *)((int)this + 0xc));
  }
  return 0;
}

/* ref: FUN_00a3a9d0 */
GEN_FRAME unsigned int GEN_THISCALL F_00a3a9d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa3a9d0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  byte bVar1;
  undefined * this_00;
  uint uVar2;
  
  uVar2 = (uint)(*(undefined * PTR32 *)&gen_args[1]);
  if (*(int *)(*(undefined * PTR32 *)&gen_args[0]) != 0) {
    this_00 = (undefined *)F_00a3a8f0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,(*(undefined * PTR32 *)&gen_args[1]),0);
    (*(undefined * PTR32 *)&gen_args[1]) = this_00;
    if (this_00 == (undefined *)0x0) {
      bVar1 = F_00a363f0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined * PTR32 *)&gen_args[1]));
      if (bVar1 != 0) {
        *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 8))) = uVar2;
        if ((*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 6))) == '\0') && ((uVar2 < 0x1e8481 || (0x1e8909 < uVar2)))) {
          if (uVar2 < 1000000) {
            *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0x14))) = *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0x14))) & 0xfe;
          }
          else {
            *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0x14))) = *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0x14))) | 1;
            *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 8))) = uVar2 - 1000000;
          }
        }
        *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0xc))) = (*(int *)&gen_args[2]);
        if ((((*(int *)&gen_args[2]) == 0) &&
            (*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0xc))) = 0, *((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 6))) == '\0')) &&
           (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 8))) != 1)) {
          *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 8))) = 0;
          return;
        }
      }
    }
    else {
      uVar2 = F_00a3a8a0(this_00 GEN_EDX_ARG);
      *(uint *)((int)this_00 + 0xc) = uVar2 + (*(int *)&gen_args[2]);
      if (((uVar2 + (*(int *)&gen_args[2]) == 0) &&
          (*(undefined4 *)((int)this_00 + 0xc) = 0, *(char *)((int)this_00 + 6) == '\0')) &&
         (*(int *)((int)this_00 + 8) != 1)) {
        *(undefined4 *)((int)this_00 + 8) = 0;
      }
    }
  }
  return;
}

/* ref: FUN_00a3aa90 */
GEN_FRAME unsigned int GEN_THISCALL F_00a3aa90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa3aa90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * this_00;
  uint uVar1;
  
  if ((*(int *)this != 0) &&
     ((this_00 = (undefined *)F_00a37da0(this GEN_EDX_FWD,param_1), *(char *)((int)this_00 + 6) != '\0' ||
      (*(int *)((int)this_00 + 8) != 0)))) {
    uVar1 = F_00a3a8a0(this_00 GEN_EDX_ARG);
    *(uint *)((int)this_00 + 0xc) = uVar1 + param_2;
    if ((uVar1 + param_2 == 0) &&
       ((*(undefined4 *)((int)this_00 + 0xc) = 0, *(char *)((int)this_00 + 6) == '\0' &&
        (*(int *)((int)this_00 + 8) != 1)))) {
      *(undefined4 *)((int)this_00 + 8) = 0;
    }
  }
  return;
}

/* ref: FUN_00a3aae0 */
GEN_FRAME unsigned int GEN_THISCALL F_00a3aae0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa3aae0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * this_00;
  uint uVar1;
  
  if ((*(int *)this != 0) &&
     (this_00 = (undefined *)F_00a3a8f0(this GEN_EDX_FWD,param_1,0), this_00 != (undefined *)0x0)) {
    uVar1 = F_00a3a8a0(this_00 GEN_EDX_ARG);
    *(uint *)((int)this_00 + 0xc) = uVar1 - param_2;
    if ((uVar1 - param_2 == 0) &&
       ((*(undefined4 *)((int)this_00 + 0xc) = 0, *(char *)((int)this_00 + 6) == '\0' &&
        (*(int *)((int)this_00 + 8) != 1)))) {
      *(undefined4 *)((int)this_00 + 8) = 0;
    }
  }
  return;
}

/* ref: FUN_00a3ab30 */
GEN_FRAME unsigned int GEN_THISCALL F_00a3ab30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa3ab30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * this_00;
  uint uVar1;
  
  if ((*(int *)this != 0) &&
     ((this_00 = (undefined *)F_00a37da0(this GEN_EDX_FWD,param_1), *(char *)((int)this_00 + 6) != '\0' ||
      (*(int *)((int)this_00 + 8) != 0)))) {
    uVar1 = F_00a3a8a0(this_00 GEN_EDX_ARG);
    *(uint *)((int)this_00 + 0xc) = uVar1 - param_2;
    if ((uVar1 - param_2 == 0) &&
       ((*(undefined4 *)((int)this_00 + 0xc) = 0, *(char *)((int)this_00 + 6) == '\0' &&
        (*(int *)((int)this_00 + 8) != 1)))) {
      *(undefined4 *)((int)this_00 + 8) = 0;
    }
  }
  return;
}

/* ref: FUN_00a3ab80 */
GEN_FRAME byte GEN_THISCALL F_00a3ab80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa3ab80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a3a8f0(this GEN_EDX_FWD,param_1,0);
  return uVar1 != 0;
}

/* ref: FUN_00a3aba0 */
GEN_FRAME uint GEN_THISCALL F_00a3aba0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa3aba0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  ushort uVar5;
  int iVar6;
  undefined * this_00;
  uint local_8;
  
  uVar1 = 0;
  local_8 = 0;
  uVar5 = 0;
  if (*(short *)((int)this + 0xc) != 0) {
    do {
      if ((*(int *)this == 0) || (*(int *)((int)this + 0xc) <= (int)(uint)uVar5)) {
        iVar2 = 0;
      }
      else {
        iVar2 = (uint)uVar5 * 0x40 + *(int *)this;
        if (*(char *)(iVar2 + 6) != '\0') {
          iVar6 = (int)*(short *)(iVar2 + 8);
          piVar3 = (int *)F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_FWD,(uint)*(ushort *)(iVar2 + 10));
          if (((*piVar3 == 0) || (iVar6 < 0)) || (piVar3[3] <= iVar6)) {
            iVar2 = 0;
          }
          else {
            iVar2 = iVar6 * 0x40 + *piVar3;
          }
        }
      }
      if (*(char *)(iVar2 + 6) == '\0') {
        if (*(int *)(iVar2 + 8) != 0) {
          uVar1 = *(uint *)(iVar2 + 0xc);
          goto LAB_00a3acb6;
        }
      }
      else {
        piVar3 = (int *)F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*(ushort *)(iVar2 + 10));
        iVar6 = (int)*(short *)(iVar2 + 8);
        if (((*piVar3 == 0) || (iVar6 < 0)) || (piVar3[3] <= iVar6)) {
          this_00 = (undefined *)0x0;
        }
        else {
          this_00 = (undefined *)(iVar6 * 0x40 + *piVar3);
          if (*(char *)((int)this_00 + 6) != '\0') {
            iVar6 = (int)*(short *)((int)this_00 + 8);
            piVar3 = (int *)F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*(ushort *)((int)this_00 + 10));
            if (((*piVar3 == 0) || (iVar6 < 0)) || (piVar3[3] <= iVar6)) {
              this_00 = (undefined *)0x0;
            }
            else {
              this_00 = (undefined *)(iVar6 * 0x40 + *piVar3);
            }
          }
        }
        uVar1 = *(uint *)(iVar2 + 0xc);
        uVar4 = F_00a3a8a0(this_00 GEN_EDX_ARG);
        if (uVar4 < uVar1) {
          uVar1 = F_00a3a8a0(this_00 GEN_EDX_ARG);
          *(uint *)(iVar2 + 0xc) = uVar1;
        }
LAB_00a3acb6: ;
        local_8 = local_8 + uVar1;
      }
      uVar5 = uVar5 + 1;
      uVar1 = local_8;
    } while (uVar5 < *(ushort *)((int)this + 0xc));
  }
  return uVar1;
}

/* ref: FUN_00a3ace0 */
GEN_NOFRAME uint GEN_THISCALL F_00a3ace0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa3ace0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  int iVar3;
  
  piVar1 = (int *)F_00a36f30(this GEN_EDX_FWD,2000);
  if (((piVar1 != (int *)0x0) && (this_00 = (undefined *)*piVar1, this_00 != (undefined *)0x0)) &&
     (0 < piVar1[3])) {
    if (*(char *)((int)this_00 + 6) != '\0') {
      iVar3 = (int)*(short *)((int)this_00 + 8);
      piVar1 = (int *)F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*(ushort *)((int)this_00 + 10));
      if (((*piVar1 == 0) || (iVar3 < 0)) || (piVar1[3] <= iVar3)) {
        this_00 = (undefined *)0x0;
      }
      else {
        this_00 = (undefined *)(*piVar1 + iVar3 * 0x40);
      }
    }
    if ((this_00 != (undefined *)0x0) &&
       ((*(char *)((int)this_00 + 6) != '\0' || (*(int *)((int)this_00 + 8) != 0)))) {
      uVar2 = F_00a3a8a0(this_00 GEN_EDX_ARG);
      return uVar2;
    }
  }
  return 0;
}

/* ref: FUN_00a3ad50 */
GEN_FRAME uint GEN_THISCALL F_00a3ad50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa3ad50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if ((char)param_1 == '\x01') {
    uVar3 = 1;
  }
  else if ((char)param_1 == '\x02') {
    uVar3 = 2;
  }
  else {
    if ((char)param_1 != '\x03') {
      return 0;
    }
    uVar3 = 3;
  }
  pvVar1 = (undefined *)F_00a36f30(this GEN_EDX_FWD,2000);
  if (((pvVar1 != (undefined *)0x0) &&
      (pvVar1 = (undefined *)F_00a37da0(pvVar1 GEN_EDX_ARG,uVar3), pvVar1 != (undefined *)0x0)) &&
     ((*(char *)((int)pvVar1 + 6) != '\0' || (*(int *)((int)pvVar1 + 8) != 0)))) {
    uVar2 = F_00a3a8a0(pvVar1 GEN_EDX_ARG);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_00a3adb0 */
GEN_NOFRAME uint GEN_THISCALL F_00a3adb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa3adb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)F_00a36f30(this GEN_EDX_FWD,22000);
  if ((((puVar1 != (undefined4 *)0x0) && (this_00 = (undefined *)*puVar1, this_00 != (undefined *)0x0)) &&
      (0 < (int)puVar1[3])) &&
     ((*(char *)((int)this_00 + 6) != '\0' || (*(int *)((int)this_00 + 8) != 0)))) {
    uVar2 = F_00a3a8a0(this_00 GEN_EDX_ARG);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_00a3ade0 */
GEN_NOFRAME uint GEN_THISCALL F_00a3ade0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa3ade0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (int *)F_00a36f30(this GEN_EDX_FWD,0x7d5);
  if ((((piVar2 != (int *)0x0) && (iVar1 = *piVar2, iVar1 != 0)) && (5 < piVar2[3])) &&
     (((undefined *)(iVar1 + 0x140) != (undefined *)0x0 &&
      ((*(char *)(iVar1 + 0x146) != '\0' || (*(int *)(iVar1 + 0x148) != 0)))))) {
    uVar3 = F_00a3a8a0((undefined *)(iVar1 + 0x140) GEN_EDX_ARG);
    return uVar3;
  }
  return 0;
}

/* ref: FUN_00a3ae20 */
GEN_NOFRAME uint GEN_THISCALL F_00a3ae20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa3ae20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)F_00a36f30(this GEN_EDX_FWD,12000);
  if ((((puVar1 != (undefined4 *)0x0) && (this_00 = (undefined *)*puVar1, this_00 != (undefined *)0x0)) &&
      (0 < (int)puVar1[3])) &&
     ((*(char *)((int)this_00 + 6) != '\0' || (*(int *)((int)this_00 + 8) != 0)))) {
    uVar2 = F_00a3a8a0(this_00 GEN_EDX_ARG);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_00a3ae50 */
GEN_FRAME uint GEN_THISCALL F_00a3ae50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa3ae50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  
  puVar1 = (undefined4 *)F_00a36f30(this GEN_EDX_FWD,12000);
  if ((((puVar1 == (undefined4 *)0x0) || (this_00 = (undefined *)*puVar1, this_00 == (undefined *)0x0)) ||
      ((int)puVar1[3] < 1)) ||
     ((*(char *)((int)this_00 + 6) == '\0' && (*(int *)((int)this_00 + 8) == 0)))) {
    uVar2 = 0;
  }
  else {
    uVar2 = F_00a3a8a0(this_00 GEN_EDX_ARG);
  }
  uVar3 = F_00a3ace0(this GEN_EDX_ARG);
  if (uVar2 + uVar3 < param_1) {
    return 8;
  }
  F_00a38b40(this GEN_EDX_ARG,param_1);
  return 0;
}

/* ref: FUN_00a3aec0 */
GEN_NOFRAME uint GEN_THISCALL F_00a3aec0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa3aec0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (*(char *)((int)this + 0x2f6) == '\0') {
    return *(uint *)((int)this + 0x2fc);
  }
  iVar4 = (int)*(short *)((int)this + 0x2f8);
  pvVar1 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_FWD,(uint)*(ushort *)((int)this + 0x2fa));
  pvVar1 = (undefined *)F_00a37da0(pvVar1 GEN_EDX_ARG,iVar4);
  uVar3 = *(uint *)((int)this + 0x2fc);
  uVar2 = F_00a3a8a0(pvVar1 GEN_EDX_ARG);
  if (uVar2 < uVar3) {
    uVar3 = F_00a3a8a0(pvVar1 GEN_EDX_ARG);
    *(uint *)((int)this + 0x2fc) = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00a3af20 */
GEN_FRAME uint GEN_THISCALL F_00a3af20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa3af20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  int * this_00;
  undefined4 * puVar2;
  uint uVar3;
  int iVar4;
  undefined * this_01;
  int iVar5;
  undefined4 * puVar6;
  
  if ((ushort)param_1 < 5) {
    this_00 = (int *)F_00a36f30(this GEN_EDX_FWD,0x7d5);
    if (this_00 != (int *)0x0) {
      iVar5 = (int)(short)(ushort)param_1;
      puVar2 = (undefined4 *)F_00a37da0(this_00 GEN_EDX_ARG,iVar5);
      puVar1 = (undefined4 *)(iVar5 * 0x40 + 0x30 + (int)this);
      puVar6 = puVar1;
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 - 1) {
        *puVar6 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar6 = puVar6 + 1;
      }
      if (((*this_00 == 0) || (iVar5 < 0)) || (this_00[3] <= iVar5)) {
        this_01 = (undefined *)0x0;
      }
      else {
        this_01 = (undefined *)(*this_00 + iVar5 * 0x40);
      }
      uVar3 = F_00a3a8a0(this_01 GEN_EDX_ARG);
      puVar1[3] = uVar3;
      if (((uVar3 == 0) && (puVar1[3] = 0, *(char *)((int)puVar1 + 6) == '\0')) && (puVar1[2] != 1))
      {
        puVar1[2] = 0;
      }
      return (uint)puVar1;
    }
  }
  return 0;
}

/* ref: FUN_00a3afd0 */
GEN_FRAME uint GEN_THISCALL F_00a3afd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa3afd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined * this_00;
  undefined * this_01;
  uint uVar1;
  uint uVar2;
  
  if ((param_1 != 0x7d6) && ((*(int *)&gen_a3) != 0x7d6)) {
    return 3;
  }
  this_00 = (undefined *)F_00a36f30(this GEN_EDX_FWD,param_1);
  this_01 = (undefined *)F_00a36f30(((undefined *)(uint)(this)) GEN_EDX_ARG,(*(int *)&gen_a3));
  if ((this_00 != (undefined *)0x0) && (this_01 != (undefined *)0x0)) {
    uVar1 = F_00a37da0(this_00 GEN_EDX_ARG,(int)(short)param_2);
    if (uVar1 != 0) {
      uVar2 = F_00a37da0(this_01 GEN_EDX_ARG,(int)(short)param_4);
      if ((uVar2 != 0) && ((*(char *)(uVar1 + 6) != '\0' || (*(int *)(uVar1 + 8) != 0)))) {
        F_00a38ce0(this GEN_EDX_ARG,param_1,param_2,(*(int *)&gen_a3),param_4);
        return 0;
      }
    }
    return 4;
  }
  return 3;
}

/* ref: FUN_00a3b080 */
GEN_FRAME uint GEN_THISCALL F_00a3b080(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa3b080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  int * piVar2;
  int iVar3;
  
  uVar1 = F_00a3ace0(this GEN_EDX_FWD);
  if (uVar1 < param_1) {
    return 8;
  }
  piVar2 = (int *)F_00a36f30(this GEN_EDX_ARG,0x7d5);
  if ((*piVar2 == 0) || (piVar2[3] < 6)) {
    iVar3 = 0;
  }
  else {
    iVar3 = *piVar2 + 0x140;
  }
  *(uint *)(iVar3 + 0xc) = param_1;
  if (((param_1 == 0) && (*(undefined4 *)(iVar3 + 0xc) = 0, *(char *)(iVar3 + 6) == '\0')) &&
     (*(int *)(iVar3 + 8) != 1)) {
    *(undefined4 *)(iVar3 + 8) = 0;
  }
  F_00a38e20(this GEN_EDX_ARG,param_1);
  return 0;
}

/* ref: FUN_00a3b0f0 */
GEN_NOFRAME uint GEN_THISCALL F_00a3b0f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa3b0f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)((int)this + 0x334) = 4;
  *(undefined1 *)((int)this + 0x35c) = 1;
  F_00a38eb0(this GEN_EDX_FWD);
  return 0;
}

/* ref: FUN_00a3b110 */
GEN_NOFRAME uint GEN_THISCALL F_00a3b110(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa3b110u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(char *)((int)this + 0x35e) == '\0') {
    *(undefined1 *)((int)this + 0x35e) = 1;
    F_00a38f30(this GEN_EDX_FWD);
  }
  return 0;
}

/* ref: FUN_00a3b140 */
GEN_NOFRAME uint GEN_THISCALL F_00a3b140(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa3b140u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  undefined * this_00;
  undefined4 uVar3;
  undefined4 uVar4;
  
  F_00a39030(this GEN_EDX_FWD);
  uVar1 = F_00a64490(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,(int)this + 0x33c,0);
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar4 = 0;
  uVar3 = 0x21;
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2 GEN_EDX_ARG)));
  F_0046ac40(this_00 GEN_EDX_ARG,uVar3,uVar4,uVar1);
  return 0;
}

/* ref: FUN_00a3b190 */
GEN_FRAME byte GEN_STDCALL F_00a3b190(unsigned int gen_a0)
{
  GEN_ENTER(0xa3b190u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  undefined * pvVar5;
  undefined4 uVar6;
  
  iVar1 = REFG(int, 0x1379694);
  bVar2 = F_00a4a790(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,7);
  if (bVar2 == 0) {
    F_00a4a810(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,7);
    return 0;
  }
  if (*(char *)(iVar1 + 0x188) == '\a') {
    piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
    uVar6 = 0x22;
    uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x48))(piVar3 GEN_EDX_ARG);
    pvVar5 = (undefined *)F_00763050(uVar4 GEN_EDX_ARG,uVar6);
    F_008e9cb0(pvVar5 GEN_EDX_ARG);
    uVar6 = 0x23;
    uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x48))(piVar3 GEN_EDX_ARG);
    pvVar5 = (undefined *)F_00763050(uVar4 GEN_EDX_ARG,uVar6);
    F_008edf60(pvVar5 GEN_EDX_ARG);
    piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
    if (piVar3 != (int *)0x0) {
      uVar6 = 0x1a0;
      pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3 GEN_EDX_ARG)));
      F_0046a630(pvVar5 GEN_EDX_ARG,uVar6);
    }
    return 0;
  }
  F_00a51200(0x2b,param_1,0,0,0);
  return 1;
}

/* ref: FUN_00a3b250 */
GEN_FRAME unsigned int GEN_STDCALL F_00a3b250(unsigned int gen_a0)
{
  GEN_ENTER(0xa3b250u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * piVar1;
  undefined * this;
  undefined4 uVar2;
  
  if ((char)param_1 == '\0') {
    if ((REFG(void * PTR32, 0x1379694) != (undefined *)0x0) && (*((char *)GEN_TOP(((int)REFG(void * PTR32, 0x1379694) + 0x188))) == '\a')) {
      F_00aa2900(REFG(void * PTR32, 0x1379694) GEN_EDX_ARG,0);
    }
    piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
    uVar2 = 0x4c3;
    this = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1 GEN_EDX_ARG)));
    F_0046a630(this GEN_EDX_ARG,uVar2);
    F_00a51200(0x36,0,0,0,0);
  }
  return;
}

/* ref: FUN_00a3b2b0 */
GEN_FRAME uint GEN_THISCALL F_00a3b2b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa3b2b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  byte bVar2;
  int * piVar3;
  undefined * pvVar4;
  uint uVar5;
  undefined4 uVar6;
  
  if ((param_1 == (int *)0x0) || (param_2 == 0)) {
    return 4;
  }
  bVar2 = F_00a4a790(&REFG(undefined, 0x14a7360) GEN_EDX_FWD,7);
  if (bVar2 == 0) {
    F_00a4a810(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,7);
    F_00a369d0();
    return 0x1f;
  }
  if (REFG(char, 0x14a7367) == '\0') {
    piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
    uVar6 = 0x191;
    pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3 GEN_EDX_ARG)));
    F_0046a630(pvVar4 GEN_EDX_ARG,uVar6);
    F_00a369d0();
    return 0x1f;
  }
  iVar1 = *param_1;
  if ((iVar1 != 1000) && (iVar1 != 11000)) {
    bVar2 = F_00a36750(iVar1);
    if ((bVar2 == 0) && ((iVar1 < 0 || (3 < iVar1)))) {
      return 3;
    }
  }
  piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar6 = 0x34;
  uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x48))(piVar3 GEN_EDX_ARG);
  piVar3 = (int *)F_00763050(uVar5 GEN_EDX_ARG,uVar6);
  uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3 GEN_EDX_ARG);
  if ((char)uVar5 != '\0') {
    piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
    if (piVar3 != (int *)0x0) {
      uVar6 = 0x1a0;
      pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3 GEN_EDX_ARG)));
      F_0046a630(pvVar4 GEN_EDX_ARG,uVar6);
    }
    return 0x1f;
  }
  *(int * PTR32 *)((int)this + 0x2488) = param_1;
  *(int *)((int)this + 0x248c) = param_2;
  F_00a51200(0x2c,0,0,0,0);
  return 0;
}

/* ref: FUN_00a3b400 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a3b400(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa3b400u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  if ((*(char *)((int)this + 0x3114) == '\0') && (*(int *)((int)this + 0x2488) != 0)) {
    bVar1 = F_00a4a790(&REFG(undefined, 0x14a7360) GEN_EDX_FWD,7);
    if ((bVar1 == 0) || (REFG(char, 0x14a7367) == '\0')) {
      F_00a369d0();
      return;
    }
    F_00a39610(this GEN_EDX_ARG,**(undefined4 * PTR32 *)((int)this + 0x2488),
                 (uint)*((ushort *)GEN_TOP((*(undefined4 * PTR32 *)((int)this + 0x2488) + 1))),
                 **(undefined4 * PTR32 *)((int)this + 0x248c),
                 (uint)*((ushort *)GEN_TOP((*(undefined4 * PTR32 *)((int)this + 0x248c) + 1))),
                 *(undefined4 *)(REFG(int, 0x1379694) + 0x74));
  }
  return;
}

/* ref: FUN_00a3b470 */
GEN_FRAME uint GEN_THISCALL F_00a3b470(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa3b470u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  undefined4 uVar3;
  
  if ((((((*(int *)&gen_a1) != 1000) && ((*(int *)&gen_a1) != 11000)) && ((*(int *)&gen_a1) != 0xdac)) &&
      ((9 < (*(int *)&gen_a1) - 0xc80U && ((*(int *)&gen_a1) != 0xce4)))) &&
     (((*(int *)&gen_a1) != 0xd48 && (((*(int *)&gen_a1) < 0 || (3 < (*(int *)&gen_a1))))))) {
    return 3;
  }
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD);
  uVar3 = 0x34;
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1 GEN_EDX_ARG);
  piVar1 = (int *)F_00763050(uVar2 GEN_EDX_ARG,uVar3);
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1 GEN_EDX_ARG);
  if ((char)uVar2 != '\0') {
    piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
    if (piVar1 != (int *)0x0) {
      uVar3 = 0x1a0;
      this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1 GEN_EDX_ARG)));
      F_0046a630(this_00 GEN_EDX_ARG,uVar3);
    }
    return 0x1f;
  }
  F_00a39610(this GEN_EDX_ARG,(*(int *)&gen_a1),param_2,param_3,param_4,param_5);
  return 0;
}

/* ref: FUN_00a3b540 */
GEN_FRAME uint GEN_THISCALL F_00a3b540(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa3b540u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00a36f30(this GEN_EDX_FWD,param_1);
  if (this_00 == (undefined *)0x0) {
    return 3;
  }
  uVar1 = F_00a37da0(this_00 GEN_EDX_ARG,(int)(short)param_2);
  if ((*(char *)(uVar1 + 6) == '\0') && (*(int *)(uVar1 + 8) == 0)) {
    return 4;
  }
  F_00a39780(this GEN_EDX_ARG,param_1,param_2);
  return 0;
}

/* ref: FUN_00a3b5a0 */
GEN_FRAME uint GEN_THISCALL F_00a3b5a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa3b5a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  short sVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  *(undefined4 *)((int)this + 0x2340) = 0;
  *(undefined4 *)((int)this + 0x2344) = 0;
  puVar6 = (undefined4 *)((int)this + 0x2340);
  puVar7 = (undefined4 *)((int)this + 0x2348);
  for (iVar5 = 0x26; iVar2 = param_1, iVar5 != 0; iVar5 = iVar5 - 1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  for (; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x54)) {
    if ((*(int *)(iVar2 + 8) == 0x1ad) && (sVar1 = *(short *)(iVar2 + 0x18), sVar1 < 0x14)) {
      *(undefined4 *)((int)this + sVar1 * 8 + 0x2340) = *(undefined4 *)(iVar2 + 0x20);
      *(undefined4 *)((int)this + sVar1 * 8 + 0x2344) = *(undefined4 *)(iVar2 + 0x24);
    }
  }
  piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD);
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3 GEN_EDX_ARG);
  *(byte *)(uVar4 + 0x230bf) = *(byte *)(uVar4 + 0x230bf) | 1;
  F_006d0fd0();
  uVar4 = F_00701020();
  return uVar4;
}

/* ref: FUN_00a3b630 */
GEN_FRAME uint GEN_THISCALL F_00a3b630(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa3b630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  F_00a36850(this GEN_EDX_FWD);
  for (iVar1 = param_1; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x54)) {
    if (*(int *)(iVar1 + 8) == 0x1ab) {
      uVar3 = (uint)*(byte *)(iVar1 + 0x20);
      *((undefined4 *)GEN_TOP(((int)this + (uVar3 + 0x99) * 0x38))) = *(undefined4 *)(iVar1 + 0x18);
      *((undefined4 *)GEN_TOP(((int)this + (uVar3 + 0x99) * 0x38 + 4))) = *(undefined4 *)(iVar1 + 0x1c);
      *(undefined4 *)((int)this + uVar3 * 0x38 + 0x2180) = *(undefined4 *)(iVar1 + 0x24);
      *(bool *)((int)this + uVar3 * 0x38 + 0x2184) = *(char *)(iVar1 + 0x28) != '\0';
      *(undefined1 *)((int)this + uVar3 * 0x38 + 0x2185) = *(undefined1 *)(iVar1 + 0x29);
      *(undefined2 *)((int)this + uVar3 * 0x38 + 0x2186) = *(undefined2 *)(iVar1 + 0x2a);
      *(undefined4 *)((int)this + uVar3 * 0x38 + 0x2188) = *(undefined4 *)(iVar1 + 0x2c);
      F_00c49908((int)this + uVar3 * 0x38 + 0x218c,0x20,iVar1 + 0x30);
    }
  }
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2 GEN_EDX_ARG);
  *(byte *)(uVar3 + 0x230bf) = *(byte *)(uVar3 + 0x230bf) | 1;
  F_006d0fd0();
  uVar3 = F_00701020();
  return uVar3;
}

/* ref: FUN_00a3b700 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a3b700(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa3b700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  int * piVar2;
  uint in_ecx;
  undefined4 uVar3;
  
  pvVar1 = (undefined *)F_00a36f30(this GEN_EDX_FWD,0x7d2);
  if (pvVar1 != (undefined *)0x0) {
    F_00a36310(pvVar1 GEN_EDX_ARG);
  }
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar3 = 0x1b;
  in_ecx = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2 GEN_EDX_ARG);
  pvVar1 = (undefined *)F_00763050(in_ecx GEN_EDX_ARG,uVar3);
  F_00777710(pvVar1 GEN_EDX_ARG);
  return;
}

/* ref: FUN_00a3b740 */
GEN_FRAME uint GEN_THISCALL F_00a3b740(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa3b740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  undefined * pvVar3;
  
  if (param_1 - 2U < 0x12) {
    uVar2 = F_00ab24a0(param_1);
    if (uVar2 != 0) {
      iVar1 = *(int *)(uVar2 + 0x28);
      pvVar3 = (undefined *)F_00a36f30(this GEN_EDX_ARG,0x7d1);
      if (pvVar3 != (undefined *)0x0) {
        pvVar3 = (undefined *)F_00a37da0(pvVar3 GEN_EDX_ARG,param_1 - 2);
        if (pvVar3 != (undefined *)0x0) {
          uVar2 = F_00a3a8a0(pvVar3 GEN_EDX_ARG);
          return iVar1 - uVar2;
        }
      }
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00a3b7b0 */
GEN_FRAME uint GEN_THISCALL F_00a3b7b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa3b7b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  undefined * pvVar3;
  
  if (param_1 - 2U < 0x12) {
    uVar2 = F_00ab24a0(param_1);
    if (uVar2 != 0) {
      iVar1 = *(int *)(uVar2 + 0x28);
      pvVar3 = (undefined *)F_00a36f30(this GEN_EDX_ARG,0x2ee1);
      if (pvVar3 != (undefined *)0x0) {
        pvVar3 = (undefined *)F_00a37da0(pvVar3 GEN_EDX_ARG,param_1 - 2);
        if (pvVar3 != (undefined *)0x0) {
          uVar2 = F_00a3a8a0(pvVar3 GEN_EDX_ARG);
          return iVar1 - uVar2;
        }
      }
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00a3b820 */
GEN_FRAME uint F_00a3b820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa3b820u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  undefined * pvVar4;
  undefined * this;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  ((uint *)(gen_frame + 0x8))[0x24] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  ((uint *)(gen_frame + 0x8))[2] = 0x4b;
  ((uint *)(gen_frame + 0x8))[0xb] = 0x4b;
  ((uint *)(gen_frame + 0x8))[0x14] = 0x4b;
  ((uint *)(gen_frame + 0x8))[5] = 0x3c;
  ((uint *)(gen_frame + 0x8))[0xe] = 0x3c;
  ((uint *)(gen_frame + 0x8))[0x16] = 0x3c;
  ((uint *)(gen_frame + 0x8))[0x1e] = 0x3c;
  ((uint *)(gen_frame + 0x8))[0] = 100;
  ((uint *)(gen_frame + 0x8))[1] = 0x50;
  ((uint *)(gen_frame + 0x8))[3] = 0x46;
  ((uint *)(gen_frame + 0x8))[4] = 0x41;
  ((uint *)(gen_frame + 0x8))[6] = 0x37;
  ((uint *)(gen_frame + 0x8))[7] = 10;
  ((uint *)(gen_frame + 0x8))[8] = 0;
  ((uint *)(gen_frame + 0x8))[9] = 100;
  ((uint *)(gen_frame + 0x8))[10] = 0x50;
  ((uint *)(gen_frame + 0x8))[0xc] = 0x46;
  ((uint *)(gen_frame + 0x8))[0xd] = 0x41;
  ((uint *)(gen_frame + 0x8))[0xf] = 0x32;
  ((uint *)(gen_frame + 0x8))[0x10] = 10;
  ((uint *)(gen_frame + 0x8))[0x11] = 0;
  ((uint *)(gen_frame + 0x8))[0x12] = 100;
  ((uint *)(gen_frame + 0x8))[0x13] = 0x50;
  ((uint *)(gen_frame + 0x8))[0x15] = 0x46;
  ((uint *)(gen_frame + 0x8))[0x17] = 0x32;
  ((uint *)(gen_frame + 0x8))[0x18] = 0x28;
  ((uint *)(gen_frame + 0x8))[0x19] = 10;
  ((uint *)(gen_frame + 0x8))[0x1a] = 0;
  ((uint *)(gen_frame + 0x8))[0x1b] = 100;
  ((uint *)(gen_frame + 0x8))[0x1c] = 0x50;
  ((uint *)(gen_frame + 0x8))[0x1d] = 0x46;
  ((uint *)(gen_frame + 0x8))[0x1f] = 0x32;
  ((uint *)(gen_frame + 0x8))[0x20] = 0x28;
  ((uint *)(gen_frame + 0x8))[0x21] = 0x1e;
  ((uint *)(gen_frame + 0x8))[0x22] = 10;
  ((uint *)(gen_frame + 0x8))[0x23] = 0;
  pvVar4 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,param_1);
  if (pvVar4 != (undefined *)0x0) {
    this = (undefined *)F_00a37da0(pvVar4 GEN_EDX_ARG,param_2);
    if (this != (undefined *)0x0) {
      uVar3 = F_00906d60(this GEN_EDX_ARG);
      if (uVar3 == 0) {
        F_00c47745(((uint *)(gen_frame + 0x8))[0x24] ^ (uint)(uint)(gen_frame + 0x9c) GEN_EDX_ARG);
        return 0;
      }
      pvVar4 = (undefined *)F_00a37da0(pvVar4 GEN_EDX_ARG,0);
      uVar5 = F_0046e5e0(pvVar4 GEN_EDX_ARG);
      uVar5 = F_00ab24a0(uVar5);
      if (uVar5 != 0) {
        bVar1 = *(byte *)(uVar5 + 0xa8);
        uVar5 = F_0046e5e0(this GEN_EDX_ARG);
        uVar5 = F_00ab24a0(uVar5);
        if (uVar5 != 0) {
          bVar2 = *(byte *)(uVar5 + 0x9f);
          if (bVar2 < 0x33) {
            if (bVar2 < 0x1f) {
              uVar8 = (uint)(10 < bVar2);
            }
            else {
              uVar8 = 2;
            }
          }
          else {
            uVar8 = 3;
          }
          uVar6 = F_00a68280(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,(uint)bVar1,1);
          iVar7 = (uint)*(byte *)(uVar5 + 0x9f) - (uVar6 & 0xffff);
          if (iVar7 < 7) {
            if (iVar7 < 0) {
              iVar7 = 0;
            }
          }
          else {
            iVar7 = 7;
          }
          uVar5 = ((uint *)(gen_frame + 0x8))[(int)(iVar7 + uVar8 * 9)];
          F_00c47745(((uint *)(gen_frame + 0x8))[0x24] ^ (uint)(uint)(gen_frame + 0x9c) GEN_EDX_ARG);
          return uVar5;
        }
      }
    }
  }
  F_00c47745(((uint *)(gen_frame + 0x8))[0x24] ^ (uint)(uint)(gen_frame + 0x9c) GEN_EDX_ARG);
  return 0xffffffff;
}

/* ref: FUN_00a3ba20 */
GEN_FRAME uint F_00a3ba20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa3ba20u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  ushort uVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  uint * puVar5;
  uint uVar6;
  uint uVar7;
  int * piVar8;
  int iVar9;
  undefined * this;
  undefined * this_00;
  short * psVar10;
  int iVar11;
  int iVar12;
  uint local_c;
  uint local_8;
  
  if (param_2 == (undefined *)0x0) {
    return 0;
  }
  uVar4 = F_0046e5e0(param_2 GEN_EDX_ARG);
  uVar4 = F_00ab24a0(uVar4);
  if (uVar4 == 0) {
    return 0xffffffff;
  }
  local_8 = 0;
  if (param_1 == 0xc) {
    local_8 = (uint)*(ushort *)(uVar4 + 0x80);
  }
  else if (param_1 == 0xd) {
    local_8 = (uint)*(ushort *)(uVar4 + 0x82);
  }
  else if (param_1 == 0x15) {
    local_8 = (uint)*(ushort *)(uVar4 + 0x8a);
  }
  else if (param_1 == 0xe) {
    local_8 = (uint)*(ushort *)(uVar4 + 0x84);
  }
  else if (param_1 == 0x11) {
    local_8 = (uint)*(ushort *)(uVar4 + 0x86);
  }
  else if (param_1 == 0x12) {
    local_8 = (uint)*(ushort *)(uVar4 + 0x88);
  }
  else if (param_1 == 0x18) {
    local_8 = (uint)*(ushort *)(uVar4 + 0x8c);
  }
  psVar10 = (short *)(uVar4 + 0x92);
  puVar5 = (uint *)(uVar4 + 0x44);
  iVar11 = 6;
  do {
    if (*puVar5 == param_1) {
      local_8 = local_8 + (int)*psVar10;
    }
    puVar5 = puVar5 + 1;
    psVar10 = psVar10 + 1;
    iVar11 = iVar11 - 1;
  } while (iVar11 != 0);
  uVar6 = F_0046e5e0(param_2 GEN_EDX_ARG);
  uVar7 = F_00ab24a0(uVar6);
  if (((uVar7 != 0) && (*(char *)(uVar7 + 0xa7) == '\x01')) && (uVar6 - 0xf4241 < 999999)) {
    puVar5 = (uint *)(uVar4 + 0x5c);
    iVar11 = 0;
    do {
      if (*puVar5 == param_1) {
        local_8 = local_8 + (int)*(char *)(iVar11 + 0xb1 + uVar4);
      }
      iVar11 = iVar11 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar11 < 6);
  }
  if ((char)param_3 == '\x01') {
    uVar4 = F_00a6ad20(param_1,uVar4);
    local_c = 0;
    do {
      uVar3 = F_0071d2c0(param_2 GEN_EDX_ARG,local_c);
      if (*(char *)((int)param_2 + 6) == '\0') {
LAB_00a3bc31: ;
        bVar2 = *((byte *)GEN_TOP(((local_c & 0xff) + 0x2a + (int)param_2)));
      }
      else {
        uVar1 = *(ushort *)((int)param_2 + 10);
        piVar8 = (int *)F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)uVar1);
        if (piVar8 == (int *)0x0) goto LAB_00a3bc31;
        iVar11 = (int)*(short *)((int)param_2 + 8);
        if (((*piVar8 == 0) || (iVar11 < 0)) || (piVar8[3] <= iVar11)) {
LAB_00a3bbf9: ;
          if (param_2 == (undefined *)0x0) goto LAB_00a3bc31;
        }
        else {
          iVar9 = iVar11 * 0x40 + *piVar8;
          if (*(char *)(iVar9 + 6) != '\0') {
            iVar12 = (int)*(short *)(iVar9 + 8);
            piVar8 = (int *)F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*(ushort *)(iVar9 + 10));
            if (((*piVar8 == 0) || (iVar12 < 0)) || (piVar8[3] <= iVar12)) {
              iVar9 = 0;
            }
            else {
              iVar9 = iVar12 * 0x40 + *piVar8;
            }
          }
          if (iVar9 == 0) goto LAB_00a3bbf9;
        }
        this = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)uVar1);
        this_00 = (undefined *)0x0;
        if ((this != (undefined *)0x0) &&
           (this_00 = (undefined *)F_00a37da0(this GEN_EDX_ARG,iVar11), this_00 == (undefined *)0x0)) {
          this_00 = param_2;
        }
        bVar2 = F_0071d300(this_00 GEN_EDX_ARG,local_c);
      }
      if ((((uVar3 != 0) && (uVar6 = F_00ab20e0((uint)uVar3), uVar6 != 0)) &&
          (*(byte *)(uVar6 + 0x28) == param_1)) && (bVar2 < 10)) {
        iVar11 = (int)*(char *)(bVar2 + 0x29 + uVar6);
        if (((int)uVar4 < (int)(iVar11 + local_8)) && (iVar11 = uVar4 - local_8, iVar11 < 0)) {
          iVar11 = 0;
        }
        local_8 = local_8 + iVar11;
      }
      local_c = local_c + 1;
    } while ((int)local_c < 5);
  }
  return local_8;
}

/* ref: FUN_00a3bca0 */
GEN_FRAME uint F_00a3bca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa3bca0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_4 = (undefined4)gen_a3;
  int * piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  piVar1 = (int *)F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,param_2);
  if (((*piVar1 != 0) && (-1 < (*(int *)&gen_a2))) && ((*(int *)&gen_a2) < piVar1[3])) {
    iVar2 = (*(int *)&gen_a2) * 0x40 + *piVar1;
    if (*(char *)(iVar2 + 6) == '\0') goto LAB_00a3bcff;
    iVar5 = (int)*(short *)(iVar2 + 8);
    piVar1 = (int *)F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*(ushort *)(iVar2 + 10));
    if (((*piVar1 != 0) && (-1 < iVar5)) && (iVar5 < piVar1[3])) {
      iVar2 = *piVar1 + iVar5 * 0x40;
      goto LAB_00a3bcff;
    }
  }
  iVar2 = 0;
LAB_00a3bcff: ;
  uVar3 = F_00a3ba20(param_1,iVar2,1);
  if (((char)param_4 != '\0') && ((param_1 == 0xc || (param_1 == 0x15)))) {
    uVar4 = F_00a3b820(param_2,(*(int *)&gen_a2));
    if (uVar4 == 0xffffffff) {
      return 0xffffffff;
    }
    uVar3 = (int)(uVar4 * uVar3) / 100;
  }
  return uVar3;
}

/* ref: FUN_00a3bd60 */
GEN_FRAME uint GEN_THISCALL F_00a3bd60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa3bd60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  undefined * pvVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  
  uVar3 = F_0046e5e0(param_1 GEN_EDX_FWD);
  *(uint *)((int)this + 8) = uVar3;
  if ((*(char *)((int)this + 6) == '\0') && ((uVar3 < 0x1e8481 || (0x1e8909 < uVar3)))) {
    if (uVar3 < 1000000) {
      *(byte *)((int)this + 0x14) = *(byte *)((int)this + 0x14) & 0xfe;
    }
    else {
      *(byte *)((int)this + 0x14) = *(byte *)((int)this + 0x14) | 1;
      *(uint *)((int)this + 8) = uVar3 - 1000000;
    }
  }
  if (*(char *)((int)param_1 + 6) == '\0') {
    uVar3 = *(uint *)((int)param_1 + 0xc);
  }
  else {
    iVar6 = (int)*(short *)((int)param_1 + 8);
    pvVar4 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*(ushort *)((int)param_1 + 10));
    pvVar4 = (undefined *)F_00a37da0(pvVar4 GEN_EDX_ARG,iVar6);
    uVar3 = *(uint *)((int)param_1 + 0xc);
    uVar5 = F_00a3a8a0(pvVar4 GEN_EDX_ARG);
    if (uVar5 < uVar3) {
      uVar3 = F_00a3a8a0(pvVar4 GEN_EDX_ARG);
      *(uint *)((int)param_1 + 0xc) = uVar3;
    }
  }
  *(uint *)((int)this + 0xc) = uVar3;
  uVar7 = F_00906d30(param_1 GEN_EDX_ARG);
  *(ulonglong *)((int)this + 0x18) = uVar7;
  *(undefined1 *)((int)this + 0x14) = *(undefined1 *)((int)param_1 + 0x14);
  uVar2 = F_00906d60(param_1 GEN_EDX_ARG);
  *(ushort *)((int)this + 0x12) = uVar2;
  uVar2 = F_0071d210(param_1 GEN_EDX_ARG);
  *(ushort *)((int)this + 0x10) = uVar2;
  bVar1 = F_0046e590(param_1 GEN_EDX_ARG);
  *(byte *)((int)this + 0x2f) = bVar1;
  uVar3 = F_00a4a5a0(param_1 GEN_EDX_ARG);
  *(uint *)((int)this + 0x30) = uVar3;
  *(undefined1 *)((int)this + 6) = *(undefined1 *)((int)param_1 + 6);
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)((int)param_1 + 0x20);
  *(undefined4 *)((int)this + 0x24) = *(undefined4 *)((int)param_1 + 0x24);
  *(undefined2 *)((int)this + 0x28) = *(undefined2 *)((int)param_1 + 0x28);
  *(undefined4 *)((int)this + 0x2a) = *(undefined4 *)((int)param_1 + 0x2a);
  *(undefined1 *)((int)this + 0x2e) = *(undefined1 *)((int)param_1 + 0x2e);
  *(undefined4 *)((int)this + 0x34) = *(undefined4 *)((int)param_1 + 0x34);
  bVar1 = *(byte *)((int)param_1 + 0x38);
  *(byte *)((int)this + 0x38) = bVar1;
  return (uint)bVar1;
}

/* ref: FUN_00a3be70 */
GEN_FRAME uint GEN_THISCALL F_00a3be70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa3be70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  ushort uVar1;
  short sVar2;
  undefined * this_00;
  uint uVar3;
  undefined * pvVar4;
  
  *(uint *)((int)this + 8) = CONCAT22((undefined2)param_1,(undefined2)param_2);
  uVar1 = *(ushort *)((int)this + 10);
  *(undefined1 *)((int)this + 6) = 1;
  this_00 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_FWD,(uint)uVar1);
  pvVar4 = (undefined *)0x0;
  if (this_00 != (undefined *)0x0) {
    sVar2 = *(short *)((int)this + 8);
    uVar3 = F_00a37da0(this_00 GEN_EDX_ARG,(int)sVar2);
    if ((uVar3 != 0) || (pvVar4 = this, this != (undefined *)0x0)) {
      pvVar4 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)uVar1);
      if (pvVar4 == (undefined *)0x0) {
        *(undefined1 *)((int)this + 0x14) = REFG(uint, 0x00000014);
        return 0;
      }
      pvVar4 = (undefined *)F_00a37da0(pvVar4 GEN_EDX_ARG,(int)sVar2);
      if (pvVar4 == (undefined *)0x0) {
        pvVar4 = this;
      }
      *(undefined1 *)((int)this + 0x14) = *(undefined1 *)((int)pvVar4 + 0x14);
    }
  }
  return (uint)pvVar4;
}

/* ref: FUN_00a3bef0 */
GEN_FRAME byte GEN_THISCALL F_00a3bef0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa3bef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short sVar1;
  ushort uVar2;
  undefined * pvVar3;
  uint uVar4;
  uint local_c;
  byte local_5;
  
  local_5 = 0;
  local_c = 0;
  do {
    if (*(char *)((int)this + 6) == '\0') {
LAB_00a3bf72: ;
      uVar2 = *((ushort *)GEN_TOP(((int)this + (local_c & 0xff) * 2 + 0x20)));
    }
    else {
      uVar2 = *(ushort *)((int)this + 10);
      pvVar3 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_FWD,(uint)uVar2);
      if (pvVar3 == (undefined *)0x0) goto LAB_00a3bf72;
      sVar1 = *(short *)((int)this + 8);
      uVar4 = F_00a37da0(pvVar3 GEN_EDX_ARG,(int)sVar1);
      if ((uVar4 == 0) && (this == (undefined *)0x0)) goto LAB_00a3bf72;
      pvVar3 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)uVar2);
      if (pvVar3 == (undefined *)0x0) {
        uVar2 = F_0071d2c0((undefined *)0x0 GEN_EDX_ARG,local_c);
      }
      else {
        pvVar3 = (undefined *)F_00a37da0(pvVar3 GEN_EDX_ARG,(int)sVar1);
        if (pvVar3 == (undefined *)0x0) {
          pvVar3 = this;
        }
        uVar2 = F_0071d2c0(pvVar3 GEN_EDX_ARG,local_c);
      }
    }
    if (uVar2 != 0) {
      local_5 = local_5 + 1;
    }
    local_c = local_c + 1;
    if (4 < (int)local_c) {
      return local_5;
    }
  } while( true );
}

/* ref: FUN_00a3bfa0 */
GEN_FRAME unsigned int GEN_THISCALL F_00a3bfa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa3bfa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  
  if (*(int *)this == 0) {
    return;
  }
  this_00 = (undefined *)F_00a37da0(this GEN_EDX_FWD,param_3);
  if ((*(char *)((int)this_00 + 6) == '\0') && (*(int *)((int)this_00 + 8) == 0)) {
    *(uint *)((int)this_00 + 8) = param_1;
    if ((param_1 < 0x1e8481) || (0x1e8909 < param_1)) {
      if (param_1 < 1000000) {
        *(byte *)((int)this_00 + 0x14) = *(byte *)((int)this_00 + 0x14) & 0xfe;
      }
      else {
        *(byte *)((int)this_00 + 0x14) = *(byte *)((int)this_00 + 0x14) | 1;
        *(uint *)((int)this_00 + 8) = param_1 - 1000000;
      }
    }
    *(int *)((int)this_00 + 0xc) = param_2;
    if (param_2 != 0) {
      return;
    }
    iVar1 = *(int *)((int)this_00 + 8);
    *(undefined4 *)((int)this_00 + 0xc) = 0;
  }
  else {
    uVar2 = F_0046e5e0(this_00 GEN_EDX_ARG);
    if (uVar2 != param_1) {
      return;
    }
    uVar2 = F_00a3a8a0(this_00 GEN_EDX_ARG);
    *(uint *)((int)this_00 + 0xc) = uVar2 + param_2;
    if (uVar2 + param_2 != 0) {
      return;
    }
    *(undefined4 *)((int)this_00 + 0xc) = 0;
    if (*(char *)((int)this_00 + 6) != '\0') {
      return;
    }
    iVar1 = *(int *)((int)this_00 + 8);
  }
  if (iVar1 != 1) {
    *(undefined4 *)((int)this_00 + 8) = 0;
  }
  return;
}

/* ref: FUN_00a3c040 */
GEN_FRAME uint GEN_THISCALL F_00a3c040(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa3c040u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  undefined * pvVar4;
  uint uVar5;
  int iVar6;
  
  uVar2 = F_00ab24a0(param_1);
  if ((uVar2 == 0) || (param_1 == 0)) {
    return 0;
  }
  uVar2 = *(uint *)(uVar2 + 0x28);
  uVar1 = (ushort)param_3;
  if ((ushort)param_3 < *(ushort *)((int)this + 0xc)) {
    do {
      this_00 = (undefined *)((uint)uVar1 * 0x40 + *(int *)this);
      uVar3 = F_0046e5e0(this_00 GEN_EDX_ARG);
      if (uVar3 == param_1) {
        if (*(char *)((int)this_00 + 6) == '\0') {
          uVar3 = *(uint *)((int)this_00 + 0xc);
        }
        else {
          iVar6 = (int)*(short *)((int)this_00 + 8);
          pvVar4 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*(ushort *)((int)this_00 + 10));
          pvVar4 = (undefined *)F_00a37da0(pvVar4 GEN_EDX_ARG,iVar6);
          uVar3 = *(uint *)((int)this_00 + 0xc);
          uVar5 = F_00a3a8a0(pvVar4 GEN_EDX_ARG);
          if (uVar5 < uVar3) {
            uVar3 = F_00a3a8a0(pvVar4 GEN_EDX_ARG);
            *(uint *)((int)this_00 + 0xc) = uVar3;
          }
        }
        if ((uVar3 + param_2 != 0) &&
           (uVar3 = F_00a3a8a0((undefined *)(*(int *)this + (uint)uVar1 * 0x40) GEN_EDX_ARG), uVar3 < uVar2)) {
          return (uint)uVar1 * 0x40 + *(int *)this;
        }
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(ushort *)((int)this + 0xc));
  }
  return 0;
}

/* ref: Client::Game::Item::AskToTradeCallback::vf1 */
GEN_FRAME uint GEN_THISCALL F_00a3c130(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa3c130u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  if ((0 < param_3) && (((*param_2 & 0xf) == 0 || (*(int *)(param_2 + 4) == 0)))) {
    F_00a38c60(&REFG(undefined, 0x14a4230) GEN_EDX_FWD);
    *param_1 = 2;
    *(undefined1 *)(param_1 + 1) = 1;
    return (uint)param_1;
  }
  if (REFG(char, 0x14a458e) == '\0') {
    REFG(char, 0x14a458e) = '\x01';
    F_00a38f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG);
  }
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 1;
  return (uint)param_1;
}

/* ref: Client::Game::Item::ConfirmationCallback::vf1 */
GEN_FRAME uint GEN_THISCALL F_00a3c190(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa3c190u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  int * piVar2;
  undefined * this_00;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((0 < param_3) && (((*param_2 & 0xf) == 0 || (*(int *)(param_2 + 4) == 0)))) {
    F_00a39030(&REFG(undefined, 0x14a4230) GEN_EDX_FWD);
    uVar1 = F_00a64490(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,&REFG(undefined, 0x14a456c),0);
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
    uVar4 = 0;
    uVar3 = 0x21;
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2 GEN_EDX_ARG)));
    F_0046ac40(this_00 GEN_EDX_ARG,uVar3,uVar4,uVar1);
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = 2;
    return (uint)param_1;
  }
  if (((1 < REFG(int, 0x14a4564)) || (REFG(char, 0x14a7375) == '\x01')) && (REFG(char, 0x14a458e) == '\0')) {
    REFG(char, 0x14a458e) = '\x01';
    F_00a38f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG);
  }
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: FUN_00a3c240 */
GEN_FRAME uint GEN_THISCALL F_00a3c240(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa3c240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  
  if (3 < param_1 - 0x17) {
    return 0;
  }
  pvVar1 = (undefined *)F_00a36f30(this GEN_EDX_FWD,2000);
  if (pvVar1 != (undefined *)0x0) {
    pvVar1 = (undefined *)F_00a37da0(pvVar1 GEN_EDX_ARG,(uint)(byte)(((byte)param_1 & 1) + 5));
    if ((pvVar1 != (undefined *)0x0) &&
       ((*(char *)((int)pvVar1 + 6) != '\0' || (*(int *)((int)pvVar1 + 8) != 0)))) {
      uVar2 = F_00906df0(pvVar1 GEN_EDX_ARG);
      if (uVar2 == param_1) {
        uVar2 = F_00a3a8a0(pvVar1 GEN_EDX_ARG);
        return uVar2;
      }
    }
  }
  return 0;
}

/* ref: FUN_00a3c2b0 */
GEN_FRAME uint GEN_THISCALL F_00a3c2b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa3c2b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int * piVar2;
  undefined * this_00;
  uint uVar3;
  int iVar4;
  
  if ((((param_1 - 0x17 < 4) && ((param_1 & 1) == 0)) &&
      (piVar2 = (int *)F_00a36f30(this GEN_EDX_FWD,2000), piVar2 != (int *)0x0)) &&
     ((iVar1 = *piVar2, iVar1 != 0 && (5 < piVar2[3])))) {
    this_00 = (undefined *)(iVar1 + 0x140);
    if (*(char *)(iVar1 + 0x146) != '\0') {
      iVar4 = (int)*(short *)(iVar1 + 0x148);
      piVar2 = (int *)F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*(ushort *)(iVar1 + 0x14a));
      if (((*piVar2 == 0) || (iVar4 < 0)) || (piVar2[3] <= iVar4)) {
        this_00 = (undefined *)0x0;
      }
      else {
        this_00 = (undefined *)(*piVar2 + iVar4 * 0x40);
      }
    }
    if ((this_00 != (undefined *)0x0) &&
       (((*(char *)((int)this_00 + 6) == '\0' && (*(int *)((int)this_00 + 8) == 0)) ||
        (uVar3 = F_00906df0(this_00 GEN_EDX_ARG), uVar3 == param_1)))) {
      return *(uint *)((int)this + 0x3118);
    }
  }
  return 0;
}

/* ref: FUN_00a3c360 */
GEN_FRAME uint GEN_THISCALL F_00a3c360(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa3c360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  byte bVar2;
  undefined1 uVar3;
  int * piVar4;
  undefined * pvVar5;
  uint uVar6;
  int * this_00;
  int * piVar7;
  uint3 uVar8;
  undefined4 uVar9;
  
  if (*(char *)((int)this + 0x3088) != '\0') {
    piVar4 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD);
    uVar9 = 0x745;
    pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4 GEN_EDX_ARG)));
    uVar6 = F_0046a630(pvVar5 GEN_EDX_ARG,uVar9);
    return uVar6;
  }
  pvVar5 = (undefined *)F_00a36f30(this GEN_EDX_ARG,2000);
  piVar4 = (int *)F_00a36f30(((undefined *)(uint)(this)) GEN_EDX_ARG,22000);
  if ((pvVar5 != (undefined *)0x0) && (piVar4 != (int *)0x0)) {
    this_00 = (int *)F_00a37da0(pvVar5 GEN_EDX_ARG,0);
    piVar7 = (int *)F_00a37da0(piVar4 GEN_EDX_ARG,0);
    piVar4 = piVar7;
    if ((this_00 != (int *)0x0) && (piVar7 != (int *)0x0)) {
      piVar4 = (int *)F_0071d3a0(this_00 GEN_EDX_ARG);
      if ((char)piVar4 == '\0') {
        piVar4 = (int *)F_00a3a8a0(this_00 GEN_EDX_ARG);
        if ((param_1 <= piVar4) && (param_1 != (int *)0x0)) {
          if ((*(char *)((int)this + 0x3086) != '\0') && (*(char *)((int)this + 0x3087) != '\0')) {
            bVar2 = F_00a4a790(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x6e);
            if (bVar2 == 0) {
              F_00a4a810(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x6e);
              uVar6 = F_00a51200(0x2a,22000,0,0,0);
              return uVar6;
            }
            uVar6 = F_00a51200(0x38,param_1,0,0,0);
            return uVar6;
          }
          F_00a51200(0x29,*this_00,*piVar7,0,0);
          *(undefined4 *)((int)this + 0x308c) = 4;
          F_00a3bd60((undefined *)((int)this + 0x3000) GEN_EDX_ARG,this_00);
          *(int *)((int)this + 0x3000) = *this_00;
          *(short *)((int)this + 0x3004) = (short)this_00[1];
          F_00a3bd60((undefined *)((int)this + 0x3040) GEN_EDX_ARG,piVar7);
          *(int *)((int)this + 0x3040) = *piVar7;
          *(short *)((int)this + 0x3044) = (short)piVar7[1];
          *(int * PTR32 *)((int)this + 0x3080) = param_1;
          if ((*this_00 < 20000) || (0x55f1 < *this_00)) {
            uVar3 = 1;
          }
          else {
            uVar3 = 0;
          }
          *(undefined1 *)((int)this + 0x3084) = uVar3;
          iVar1 = *piVar7;
          uVar8 = (uint3)((uint)iVar1 >> 8);
          if ((iVar1 < 20000) || (0x55f1 < iVar1)) {
            uVar3 = 1;
          }
          else {
            uVar3 = 0;
          }
          *(undefined1 *)((int)this + 0x3085) = uVar3;
          if ((*this_00 < 20000) || (0x55f1 < *this_00)) {
            uVar3 = 1;
          }
          else {
            uVar3 = 0;
          }
          *(undefined1 *)((int)this + 0x3086) = uVar3;
          if ((19999 < *piVar7) && (*piVar7 < 0x55f2)) {
            *(undefined1 *)((int)this + 0x3087) = 0;
            *(undefined1 *)((int)this + 0x3088) = 1;
            return (uint)uVar8 << 8;
          }
          piVar4 = ((int *)GEN_TOP(CONCAT31(uVar8,1)));
          *(undefined1 *)((int)this + 0x3087) = 1;
          *(undefined1 *)((int)this + 0x3088) = 1;
        }
      }
    }
  }
  return (uint)piVar4;
}

/* ref: FUN_00a3c570 */
GEN_FRAME uint GEN_THISCALL F_00a3c570(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa3c570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  byte bVar2;
  undefined1 uVar3;
  int * piVar4;
  undefined * pvVar5;
  uint uVar6;
  int * this_00;
  int * piVar7;
  uint3 uVar8;
  undefined4 uVar9;
  
  if (*(char *)((int)this + 0x3088) != '\0') {
    piVar4 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD);
    uVar9 = 0x745;
    pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4 GEN_EDX_ARG)));
    uVar6 = F_0046a630(pvVar5 GEN_EDX_ARG,uVar9);
    return uVar6;
  }
  pvVar5 = (undefined *)F_00a36f30(this GEN_EDX_ARG,22000);
  piVar4 = (int *)F_00a36f30(((undefined *)(uint)(this)) GEN_EDX_ARG,2000);
  if ((pvVar5 != (undefined *)0x0) && (piVar4 != (int *)0x0)) {
    this_00 = (int *)F_00a37da0(pvVar5 GEN_EDX_ARG,0);
    piVar7 = (int *)F_00a37da0(piVar4 GEN_EDX_ARG,0);
    piVar4 = piVar7;
    if ((this_00 != (int *)0x0) && (piVar7 != (int *)0x0)) {
      piVar4 = (int *)F_0071d3a0(this_00 GEN_EDX_ARG);
      if ((char)piVar4 == '\0') {
        piVar4 = (int *)F_00a3a8a0(this_00 GEN_EDX_ARG);
        if ((param_1 <= piVar4) && (param_1 != (int *)0x0)) {
          if ((*(char *)((int)this + 0x3086) != '\0') && (*(char *)((int)this + 0x3087) != '\0')) {
            bVar2 = F_00a4a790(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x6e);
            if (bVar2 == 0) {
              F_00a4a810(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x6e);
              uVar6 = F_00a51200(0x2a,22000,0,0,0);
              return uVar6;
            }
            uVar6 = F_00a51200(0x39,param_1,0,0,0);
            return uVar6;
          }
          F_00a51200(0x29,*this_00,*piVar7,0,0);
          *(undefined4 *)((int)this + 0x308c) = 5;
          F_00a3bd60((undefined *)((int)this + 0x3000) GEN_EDX_ARG,this_00);
          *(int *)((int)this + 0x3000) = *this_00;
          *(short *)((int)this + 0x3004) = (short)this_00[1];
          F_00a3bd60((undefined *)((int)this + 0x3040) GEN_EDX_ARG,piVar7);
          *(int *)((int)this + 0x3040) = *piVar7;
          *(short *)((int)this + 0x3044) = (short)piVar7[1];
          *(int * PTR32 *)((int)this + 0x3080) = param_1;
          if ((*this_00 < 20000) || (0x55f1 < *this_00)) {
            uVar3 = 1;
          }
          else {
            uVar3 = 0;
          }
          *(undefined1 *)((int)this + 0x3084) = uVar3;
          iVar1 = *piVar7;
          uVar8 = (uint3)((uint)iVar1 >> 8);
          if ((iVar1 < 20000) || (0x55f1 < iVar1)) {
            uVar3 = 1;
          }
          else {
            uVar3 = 0;
          }
          *(undefined1 *)((int)this + 0x3085) = uVar3;
          if ((*this_00 < 20000) || (0x55f1 < *this_00)) {
            uVar3 = 1;
          }
          else {
            uVar3 = 0;
          }
          *(undefined1 *)((int)this + 0x3086) = uVar3;
          if ((19999 < *piVar7) && (*piVar7 < 0x55f2)) {
            *(undefined1 *)((int)this + 0x3087) = 0;
            *(undefined1 *)((int)this + 0x3088) = 1;
            return (uint)uVar8 << 8;
          }
          piVar4 = ((int *)GEN_TOP(CONCAT31(uVar8,1)));
          *(undefined1 *)((int)this + 0x3087) = 1;
          *(undefined1 *)((int)this + 0x3088) = 1;
        }
      }
    }
  }
  return (uint)piVar4;
}

/* ref: FUN_00a3c780 */
GEN_FRAME uint GEN_THISCALL F_00a3c780(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa3c780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 4;
  if (*(int *)((int)this + 0x334) < 4) {
    if (3 < *(int *)((int)this + 0x338)) {
      F_00a38fb0(this GEN_EDX_FWD);
    }
    uVar1 = F_00a3b080(this GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_00a3c7b0 */
GEN_FRAME uint GEN_THISCALL F_00a3c7b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa3c7b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined * pvVar2;
  
  uVar1 = (ushort)param_1 + 1000;
  if ((ushort)param_1 == 10000) {
    uVar1 = 11000;
  }
  else {
    if (uVar1 < 1000) {
      return 0;
    }
    if ((1000 < uVar1) && (uVar1 != 11000)) {
      return 0;
    }
  }
  pvVar2 = (undefined *)F_00a36f30(this GEN_EDX_FWD,uVar1);
  if ((pvVar2 != (undefined *)0x0) &&
     (pvVar2 = (undefined *)F_00a37da0(pvVar2 GEN_EDX_ARG,(int)(short)param_2), pvVar2 != (undefined *)0x0)) {
    uVar1 = F_0046e5e0(pvVar2 GEN_EDX_ARG);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00a3c810 */
GEN_FRAME uint GEN_THISCALL F_00a3c810(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa3c810u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * pvVar1;
  uint uVar2;
  
  pvVar1 = (undefined *)F_00a36f30(this GEN_EDX_FWD,param_1 & 0xffff);
  if (pvVar1 != (undefined *)0x0) {
    pvVar1 = (undefined *)F_00a37da0(pvVar1 GEN_EDX_ARG,(int)(short)param_2);
    if (pvVar1 != (undefined *)0x0) {
      uVar2 = F_0046e5e0(pvVar1 GEN_EDX_ARG);
      return uVar2;
    }
  }
  return 0;
}

/* ref: FUN_00a3c850 */
GEN_FRAME uint GEN_THISCALL F_00a3c850(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa3c850u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  undefined * pvVar2;
  ushort uVar3;
  
  uVar3 = *(short *)((int)this + 0x28) - 1000;
  uVar1 = uVar3 + 1000;
  if (uVar3 == 10000) {
    uVar1 = 11000;
  }
  else {
    if (uVar1 < 1000) {
      return 0;
    }
    if ((1000 < uVar1) && (uVar1 != 11000)) {
      return 0;
    }
  }
  pvVar2 = (undefined *)F_00a36f30(this GEN_EDX_FWD,uVar1);
  if ((pvVar2 != (undefined *)0x0) &&
     (pvVar2 = (undefined *)F_00a37da0(pvVar2 GEN_EDX_ARG,(int)(short)param_1), pvVar2 != (undefined *)0x0)) {
    uVar1 = F_0046e5e0(pvVar2 GEN_EDX_ARG);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00a3c8c0 */
GEN_FRAME byte GEN_STDCALL F_00a3c8c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa3c8c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  ushort uVar1;
  uint uVar2;
  
  if (param_1 == (undefined *)0x0) {
    return 0;
  }
  uVar2 = param_2;
  if (param_2 == 0) {
    uVar2 = F_0046e5e0(param_1 GEN_EDX_ARG);
    uVar2 = F_00ab24a0(uVar2);
    if (uVar2 == 0) {
      return 0;
    }
  }
  if ((*(char *)(uVar2 + 0xbf) == '\0') && (uVar1 = F_0071d210(param_1 GEN_EDX_ARG), uVar1 == 0)) {
    if ((*(int *)(uVar2 + 0x74) != 0) && (uVar1 = F_00906d60(param_1 GEN_EDX_ARG), uVar1 < 30000)) {
      return 0;
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_00a3c930 */
GEN_FRAME byte GEN_STDCALL F_00a3c930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa3c930u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (param_1 != (undefined *)0x0) {
    uVar1 = param_2;
    if (param_2 == 0) {
      uVar1 = F_0046e5e0(param_1 GEN_EDX_ARG);
      uVar1 = F_00ab24a0(uVar1);
      if (uVar1 == 0) {
        return 0;
      }
    }
    if (*(char *)(uVar1 + 0xbd) == '\0') {
      return *(char *)(uVar1 + 0xae) != '\0';
    }
  }
  return 0;
}

/* ref: FUN_00a3c970 */
GEN_FRAME byte GEN_THISCALL F_00a3c970(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa3c970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  int * piVar1;
  undefined * this_00;
  int * piVar2;
  uint uVar3;
  undefined * pvVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  byte local_5;
  
  piVar1 = (int *)F_00a36f30(this GEN_EDX_FWD,0x7d5);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  local_5 = 0;
  if (*param_1 == 0) {
    return 1;
  }
  do {
    iVar6 = *piVar1;
    uVar8 = (uint)local_5;
    if ((iVar6 == 0) || (piVar1[3] <= (int)uVar8)) {
      iVar7 = 0;
    }
    else {
      iVar7 = uVar8 * 0x40 + iVar6;
    }
    if ((iVar6 == 0) || (piVar1[3] <= (int)uVar8)) {
LAB_00a3ca18: ;
      this_00 = (undefined *)0x0;
    }
    else {
      this_00 = (undefined *)(uVar8 * 0x40 + iVar6);
      if (*(char *)((int)this_00 + 6) != '\0') {
        iVar6 = (int)*(short *)((int)this_00 + 8);
        piVar2 = (int *)F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*(ushort *)((int)this_00 + 10));
        if (((*piVar2 == 0) || (iVar6 < 0)) || (piVar2[3] <= iVar6)) goto LAB_00a3ca18;
        this_00 = (undefined *)(iVar6 * 0x40 + *piVar2);
      }
    }
    if (iVar7 == 0) {
      return 0;
    }
    uVar3 = F_00906df0(this_00 GEN_EDX_ARG);
    if (uVar3 != *(uint *)(param_1 + uVar8 * 0x74 + 4)) {
      return 0;
    }
    if (*(char *)((int)this_00 + 6) == '\0') {
      uVar3 = *(uint *)((int)this_00 + 0xc);
    }
    else {
      iVar6 = (int)*(short *)((int)this_00 + 8);
      pvVar4 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*(ushort *)((int)this_00 + 10));
      pvVar4 = (undefined *)F_00a37da0(pvVar4 GEN_EDX_ARG,iVar6);
      uVar3 = *(uint *)((int)this_00 + 0xc);
      uVar5 = F_00a3a8a0(pvVar4 GEN_EDX_ARG);
      if (uVar5 < uVar3) {
        uVar3 = F_00a3a8a0(pvVar4 GEN_EDX_ARG);
        *(uint *)((int)this_00 + 0xc) = uVar3;
      }
    }
    if (uVar3 < *(uint *)(param_1 + uVar8 * 0x74 + 8)) {
      return 0;
    }
    if ((param_1[uVar8 * 0x74 + 100] != 0) && ((*(byte *)((int)this_00 + 0x14) & 1) == 0)) {
      return 0;
    }
    local_5 = local_5 + 1;
    if (*param_1 <= local_5) {
      return 1;
    }
  } while( true );
}

/* ref: FUN_00a3cac0 */
GEN_FRAME byte GEN_STDCALL F_00a3cac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa3cac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x270];
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ushort * puVar9;
  char * pcVar10;
  
  (*(uint *)(gen_frame + 0x268)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x26c);
  uVar5 = F_00b9f960(&REFG(undefined, 0x14b0f2c) GEN_EDX_ARG);
  F_009222f0(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,uVar5);
  iVar7 = (int)(short)param_2;
  iVar6 = 0;
  iVar8 = iVar7 * 0x74;
  ((char *)(gen_frame + 0x260))[0] = '\0';
  ((char *)(gen_frame + 0x260))[1] = '\0';
  ((char *)(gen_frame + 0x260))[2] = '\0';
  ((char *)(gen_frame + 0x260))[3] = '\0';
  ((char *)(gen_frame + 0x260))[4] = '\0';
  (*(byte *)(gen_frame + 0xf)) = 0;
  uVar5 = F_00906df0(param_1 GEN_EDX_ARG);
  if ((((uint *)(gen_frame + 0x14))[(int)(iVar7 * 0x1d)] == uVar5) &&
     (uVar5 = F_00a3a8a0(param_1 GEN_EDX_ARG), ((uint *)(gen_frame + 0x14))[(int)(iVar7 * 0x1d + 1)] <= uVar5)) {
    if ((((char *)(gen_frame + 0x74))[(int)(iVar8)] == '\0') || ((*(byte *)((int)param_1 + 0x14) & 1) != 0)) {
      bVar1 = ((byte *)(gen_frame + 0x85))[(int)(iVar8)];
      (*(byte * PTR32 *)(gen_frame + 0x4)) = ((byte *)(gen_frame + 0x80)) + iVar8;
      puVar9 = (ushort *)(((char *)(gen_frame + 0x74)) + iVar8 + 2);
      ((char *)(gen_frame + 0x258))[0] = '\0';
      ((char *)(gen_frame + 0x258))[1] = '\0';
      ((char *)(gen_frame + 0x258))[2] = '\0';
      ((char *)(gen_frame + 0x258))[3] = '\0';
      ((char *)(gen_frame + 0x258))[4] = '\0';
      do {
        ((char *)(gen_frame + 0x260))[(int)(iVar6)] = '\0';
        if ((bVar1 != 0) && (uVar3 = F_0071d2c0(param_1 GEN_EDX_ARG,iVar6), uVar3 != 0)) {
          (*(byte *)(gen_frame + 0xf)) = (*(byte *)(gen_frame + 0xf)) + 1;
        }
        uVar3 = *puVar9;
        if (uVar3 == 0) {
          ((char *)(gen_frame + 0x260))[(int)(iVar6)] = '\x01';
        }
        else {
          iVar7 = 0;
          do {
            if (((((char *)(gen_frame + 0x258))[(int)(iVar7)] == '\0') && (uVar4 = F_0071d2c0(param_1 GEN_EDX_ARG,iVar7), uVar3 == uVar4))
               && (bVar2 = F_0071d300(param_1 GEN_EDX_ARG,iVar7), *(*(byte * PTR32 *)(gen_frame + 0x4)) == bVar2)) {
              ((char *)(gen_frame + 0x260))[(int)(iVar6)] = '\x01';
              ((char *)(gen_frame + 0x258))[(int)(iVar7)] = '\x01';
              break;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < 5);
          if (((char *)(gen_frame + 0x260))[(int)(iVar6)] == '\0') break;
        }
        (*(byte * PTR32 *)(gen_frame + 0x4)) = (*(byte * PTR32 *)(gen_frame + 0x4)) + 1;
        iVar6 = iVar6 + 1;
        puVar9 = puVar9 + 1;
      } while (iVar6 < 5);
      if ((bVar1 == 0) || (bVar1 <= (*(byte *)(gen_frame + 0xf)))) {
        iVar6 = 0;
        do {
          if (((char *)(gen_frame + 0x260))[(int)(iVar6)] == '\0') {
            iVar6 = 4;
            pcVar10 = ((char *)(gen_frame + 0x260)) + 4;
            do {
              pcVar10 = pcVar10 - 0x74;
              F_0042c880(pcVar10 GEN_EDX_ARG);
              iVar6 = iVar6 - 1;
            } while (-1 < iVar6);
            goto LAB_00a3ccfd;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < 5);
        uVar5 = F_00a37c50(param_1 GEN_EDX_ARG);
        if ((uVar5 == 0) || (*(short *)(uVar5 + 4) == (short)param_2)) {
          iVar6 = 4;
          pcVar10 = ((char *)(gen_frame + 0x260)) + 4;
          do {
            pcVar10 = pcVar10 - 0x74;
            F_0042c880(pcVar10 GEN_EDX_ARG);
            iVar6 = iVar6 - 1;
          } while (-1 < iVar6);
          F_00c47745((*(uint *)(gen_frame + 0x268)) ^ (uint)(uint)(gen_frame + 0x26c) GEN_EDX_ARG);
          return 1;
        }
        iVar6 = 4;
        pcVar10 = ((char *)(gen_frame + 0x260)) + 4;
        do {
          pcVar10 = pcVar10 - 0x74;
          F_0042c880(pcVar10 GEN_EDX_ARG);
          iVar6 = iVar6 - 1;
        } while (-1 < iVar6);
      }
      else {
        iVar6 = 4;
        pcVar10 = ((char *)(gen_frame + 0x260)) + 4;
        do {
          pcVar10 = pcVar10 - 0x74;
          F_0042c880(pcVar10 GEN_EDX_ARG);
          iVar6 = iVar6 - 1;
        } while (-1 < iVar6);
      }
    }
    else {
      F_00720090(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
    }
  }
  else {
    iVar6 = 4;
    pcVar10 = ((char *)(gen_frame + 0x260)) + 4;
    do {
      pcVar10 = pcVar10 - 0x74;
      F_0042c880(pcVar10 GEN_EDX_ARG);
      iVar6 = iVar6 - 1;
    } while (-1 < iVar6);
  }
LAB_00a3ccfd: ;
  F_00c47745((*(uint *)(gen_frame + 0x268)) ^ (uint)(uint)(gen_frame + 0x26c) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00a3cd20 */
GEN_FRAME uint GEN_THISCALL F_00a3cd20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa3cd20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  ushort uVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  undefined * pvVar6;
  int iVar7;
  undefined4 uVar8;
  
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD);
  iVar7 = (int)(short)param_3;
  piVar3 = (int *)F_00a36f30(this GEN_EDX_ARG,(*(int *)&gen_a2));
  if (((*piVar3 == 0) || (iVar7 < 0)) || (piVar3[3] <= iVar7)) {
    pvVar6 = (undefined *)0x0;
  }
  else {
    pvVar6 = (undefined *)(*piVar3 + iVar7 * 0x40);
  }
  uVar4 = F_0046e5e0(param_1 GEN_EDX_ARG);
  if ((0x488 < uVar4 - 0x1e8481) && ((*(int *)&gen_a2) != 0x7d7)) {
    uVar4 = F_0046e5e0(param_1 GEN_EDX_ARG);
    uVar4 = F_00ab24a0(uVar4);
    if ((uVar4 == 0) || (uVar5 = F_00906df0(param_1 GEN_EDX_ARG), uVar5 == 0)) {
      return 6;
    }
    if ((2 < *(int *)((int)this + 0x334)) || ((*(int *)&gen_a2) == 0x7d2)) {
      if ((*(char *)(uVar4 + 0xbf) != '\0') || (uVar1 = F_0071d210(param_1 GEN_EDX_ARG), uVar1 != 0)) {
        uVar8 = 0x1f;
        pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2 GEN_EDX_ARG)));
        F_0046a630(pvVar6 GEN_EDX_ARG,uVar8);
        return 0x1c;
      }
      if ((*(int *)(uVar4 + 0x74) != 0) && (uVar1 = F_00906d60(param_1 GEN_EDX_ARG), uVar1 < 30000)) {
        uVar8 = 0x29;
        pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2 GEN_EDX_ARG)));
        F_0046a630(pvVar6 GEN_EDX_ARG,uVar8);
        return 0x1d;
      }
    }
  }
  if ((*(char *)((int)pvVar6 + 6) == '\0') && (uVar4 = F_00a37c50(param_1 GEN_EDX_ARG), uVar4 == 0)) {
    F_00a3be70(pvVar6 GEN_EDX_ARG,*param_1,(uint)*(ushort *)(param_1 + 1));
    *(undefined4 *)((int)pvVar6 + 0xc) = 1;
    if (((char)param_4 != '\0') &&
       (((uVar4 = F_0046e5e0(param_1 GEN_EDX_ARG), 0x488 < uVar4 - 0x1e8481 && ((*(int *)&gen_a2) != 0x7d2)) &&
        ((*(int *)&gen_a2) != 0x7d7)))) {
      uVar1 = *(ushort *)(param_1 + 1);
      uVar8 = *param_1;
      uVar4 = F_00a3a8a0(param_1 GEN_EDX_ARG);
      F_00a38890(this GEN_EDX_ARG,uVar8,(uint)uVar1,(*(int *)&gen_a2),param_3,uVar4);
    }
    return 0;
  }
  return 0x13;
}

/* ref: FUN_00a3ced0 */
GEN_FRAME uint GEN_THISCALL F_00a3ced0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa3ced0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * in_ecx = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  ushort uVar1;
  undefined4 uVar2;
  int * piVar3;
  undefined * this;
  undefined4 * this_00;
  uint uVar4;
  undefined * this_02;
  int iVar5;
  
  if (((*(int *)&gen_a1) == 0x7d5) && (3 < *(int *)((int)in_ecx + 0x334))) {
    return 0x13;
  }
  iVar5 = (int)(short)param_3;
  piVar3 = (int *)F_00a36f30(in_ecx GEN_EDX_FWD,(*(int *)&gen_a1));
  if ((*piVar3 == 0) || ((iVar5 < 0 || (piVar3[3] <= iVar5)))) {
    this_02 = (undefined *)0x0;
  }
  else {
    this_02 = (undefined *)(iVar5 * 0x40 + *piVar3);
  }
  this = (undefined *)F_00a36f30(((undefined *)(uint)(in_ecx)) GEN_EDX_ARG,(*(int *)&gen_a1));
  this_00 = (undefined4 *)F_00a37da0(this GEN_EDX_ARG,iVar5);
  if ((char)param_4 != '\0') {
    uVar4 = F_0046e5e0(this_00 GEN_EDX_ARG);
    if (((uVar4 < 0x1e8481) && ((*(int *)&gen_a1) != 0x7d2)) && ((*(int *)&gen_a1) != 0x7d7)) {
      uVar1 = *(ushort *)(this_00 + 1);
      uVar2 = *this_00;
      uVar4 = F_00a3a8a0(this_02 GEN_EDX_ARG);
      F_00a38890(in_ecx GEN_EDX_ARG,(*(int *)&gen_a1),param_3,uVar2,(uint)uVar1,uVar4);
    }
  }
  *(undefined4 *)((int)this_02 + 8) = 0;
  *(undefined4 *)((int)this_02 + 0xc) = 0;
  *(undefined4 *)((int)this_02 + 0x18) = 0;
  *(undefined4 *)((int)this_02 + 0x1c) = 0;
  *(undefined1 *)((int)this_02 + 0x14) = 0;
  *(undefined4 *)((int)this_02 + 0x10) = 0x75300000;
  *(undefined1 *)((int)this_02 + 0x2f) = 0;
  *(undefined4 *)((int)this_02 + 0x30) = 0;
  *(undefined1 *)((int)this_02 + 6) = 0;
  *(undefined4 *)((int)this_02 + 0x3c) = 0;
  *(undefined4 *)((int)this_02 + 0x20) = 0;
  *(undefined4 *)((int)this_02 + 0x24) = 0;
  *(undefined2 *)((int)this_02 + 0x28) = 0;
  *(undefined4 *)((int)this_02 + 0x2a) = 0;
  *(undefined1 *)((int)this_02 + 0x2e) = 0;
  *(undefined4 *)((int)this_02 + 0x34) = 0;
  *(undefined1 *)((int)this_02 + 0x38) = 0;
  piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  iVar5 = ((code *)*(gen_code32 *)(*piVar3 + 0x1c))();
  *(byte *)(iVar5 + 0x230bf) = *(byte *)(iVar5 + 0x230bf) | 1;
  F_006d0fd0();
  F_00701020();
  return 0;
}

/* ref: FUN_00a3cef5 */
GEN_NOFRAME uint F_00a3cef5(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa3cef5u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 in_eax = (undefined4)gen_a0;
  undefined * in_ecx = (undefined *)(uintptr_t)gen_a1;
  int in_ebp = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 uVar1;
  int * piVar2;
  undefined * this;
  undefined4 * this_00;
  uint uVar3;
  undefined * this_02;
  int iVar4;
  
  iVar4 = (int)*(short *)(in_ebp + 0xc);
  piVar2 = (int *)F_00a36f30(in_ecx GEN_EDX_ARG,in_eax);
  if (((*piVar2 == 0) || (iVar4 < 0)) || (piVar2[3] <= iVar4)) {
    this_02 = (undefined *)0x0;
  }
  else {
    this_02 = (undefined *)(iVar4 * 0x40 + *piVar2);
  }
  this = (undefined *)F_00a36f30(((undefined *)(uint)(in_ecx)) GEN_EDX_ARG,*(undefined4 *)(in_ebp + 8));
  this_00 = (undefined4 *)F_00a37da0(this GEN_EDX_ARG,iVar4);
  if (*(char *)(in_ebp + 0x10) != '\0') {
    uVar3 = F_0046e5e0(this_00 GEN_EDX_ARG);
    if (((uVar3 < 0x1e8481) && (*(int *)(in_ebp + 8) != 0x7d2)) && (*(int *)(in_ebp + 8) != 0x7d7)) {
      uVar1 = *this_00;
      *(uint *)(in_ebp + 0x10) = (uint)*(ushort *)(this_00 + 1);
      uVar3 = F_00a3a8a0(this_02 GEN_EDX_ARG);
      F_00a38890(*(undefined * PTR32 *)(in_ebp - 4) GEN_EDX_ARG,*(undefined4 *)(in_ebp + 8),*(undefined4 *)(in_ebp + 0xc) ,uVar1,*(undefined4 *)(in_ebp + 0x10),uVar3);
    }
  }
  *(undefined4 *)((int)this_02 + 8) = 0;
  *(undefined4 *)((int)this_02 + 0xc) = 0;
  *(undefined4 *)((int)this_02 + 0x18) = 0;
  *(undefined4 *)((int)this_02 + 0x1c) = 0;
  *(undefined1 *)((int)this_02 + 0x14) = 0;
  *(undefined4 *)((int)this_02 + 0x10) = 0x75300000;
  *(undefined1 *)((int)this_02 + 0x2f) = 0;
  *(undefined4 *)((int)this_02 + 0x30) = 0;
  *(undefined1 *)((int)this_02 + 6) = 0;
  *(undefined4 *)((int)this_02 + 0x3c) = 0;
  *(undefined4 *)((int)this_02 + 0x20) = 0;
  *(undefined4 *)((int)this_02 + 0x24) = 0;
  *(undefined2 *)((int)this_02 + 0x28) = 0;
  *(undefined4 *)((int)this_02 + 0x2a) = 0;
  *(undefined1 *)((int)this_02 + 0x2e) = 0;
  *(undefined4 *)((int)this_02 + 0x34) = 0;
  *(undefined1 *)((int)this_02 + 0x38) = 0;
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2 GEN_EDX_ARG);
  *(byte *)(uVar3 + 0x230bf) = *(byte *)(uVar3 + 0x230bf) | 1;
  F_006d0fd0();
  F_00701020();
  return 0;
}

/* ref: FUN_00a3cff0 */
GEN_FRAME uint GEN_THISCALL F_00a3cff0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa3cff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined * this_00;
  int iVar5;
  undefined * local_c;
  undefined * local_8;
  
  iVar5 = (int)(short)param_2;
  piVar1 = (int *)F_00a36f30(this GEN_EDX_FWD,(*(int *)&gen_a1));
  if (((*piVar1 == 0) || (iVar5 < 0)) || (piVar1[3] <= iVar5)) {
    this_00 = (undefined *)0x0;
  }
  else {
    this_00 = (undefined *)(iVar5 * 0x40 + *piVar1);
  }
  piVar1 = (int *)F_00a36f30(this GEN_EDX_ARG,(*(int *)&gen_a1));
  if (((*piVar1 == 0) || (iVar5 < 0)) || (piVar1[3] <= iVar5)) {
    local_c = (undefined *)0x0;
  }
  else {
    local_c = (undefined *)(iVar5 * 0x40 + *piVar1);
    if (*(char *)((int)local_c + 6) != '\0') {
      iVar5 = (int)*(short *)((int)local_c + 8);
      piVar1 = (int *)F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*(ushort *)((int)local_c + 10));
      if (((*piVar1 == 0) || (iVar5 < 0)) || (piVar1[3] <= iVar5)) {
        local_c = (undefined *)0x0;
      }
      else {
        local_c = (undefined *)(iVar5 * 0x40 + *piVar1);
      }
    }
  }
  iVar5 = (int)(short)param_4;
  piVar1 = (int *)F_00a36f30(this GEN_EDX_ARG,param_3);
  if (((*piVar1 == 0) || (iVar5 < 0)) || (piVar1[3] <= iVar5)) {
    local_8 = (undefined *)0x0;
  }
  else {
    local_8 = (undefined *)(iVar5 * 0x40 + *piVar1);
  }
  if ((((char)param_5 != '\0') && (uVar2 = F_0046e5e0(local_c GEN_EDX_ARG), uVar2 < 0x1e8481)) &&
     (((*(int *)&gen_a1) != 0x7d2 && ((*(int *)&gen_a1) != 0x7d7)))) {
    uVar2 = F_00a3a8a0(this_00 GEN_EDX_ARG);
    F_00a38890(this GEN_EDX_ARG,(*(int *)&gen_a1),param_2,param_3,param_4,uVar2);
  }
  if (*(char *)((int)this_00 + 6) == '\0') {
    uVar2 = 9999;
  }
  else {
    uVar2 = (uint)*(ushort *)((int)this_00 + 10);
  }
  F_00a3be70(local_8 GEN_EDX_ARG,uVar2,(uint)*(ushort *)((int)this_00 + 8));
  if (*(char *)((int)this_00 + 6) == '\0') {
    uVar2 = *(uint *)((int)this_00 + 0xc);
  }
  else {
    iVar5 = (int)*(short *)((int)this_00 + 8);
    pvVar3 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*(ushort *)((int)this_00 + 10));
    pvVar3 = (undefined *)F_00a37da0(pvVar3 GEN_EDX_ARG,iVar5);
    uVar2 = *(uint *)((int)this_00 + 0xc);
    uVar4 = F_00a3a8a0(pvVar3 GEN_EDX_ARG);
    if (uVar4 < uVar2) {
      uVar2 = F_00a3a8a0(pvVar3 GEN_EDX_ARG);
      *(uint *)((int)this_00 + 0xc) = uVar2;
    }
  }
  *(uint *)((int)local_8 + 0xc) = uVar2;
  if (((uVar2 == 0) &&
      (*(undefined4 *)((int)local_8 + 0xc) = 0, *(char *)((int)local_8 + 6) == '\0')) &&
     (*(int *)((int)local_8 + 8) != 1)) {
    *(undefined4 *)((int)local_8 + 8) = 0;
  }
  *(undefined4 *)((int)this_00 + 8) = 0;
  *(undefined4 *)((int)this_00 + 0xc) = 0;
  *(undefined4 *)((int)this_00 + 0x18) = 0;
  *(undefined4 *)((int)this_00 + 0x1c) = 0;
  *(undefined1 *)((int)this_00 + 0x14) = 0;
  *(undefined1 *)((int)this_00 + 0x2f) = 0;
  *(undefined4 *)((int)this_00 + 0x30) = 0;
  *(undefined1 *)((int)this_00 + 6) = 0;
  *(undefined4 *)((int)this_00 + 0x3c) = 0;
  *(undefined4 *)((int)this_00 + 0x10) = 0x75300000;
  *(undefined4 *)((int)this_00 + 0x20) = 0;
  *(undefined4 *)((int)this_00 + 0x24) = 0;
  *(undefined2 *)((int)this_00 + 0x28) = 0;
  *(undefined4 *)((int)this_00 + 0x2a) = 0;
  *(undefined1 *)((int)this_00 + 0x2e) = 0;
  *(undefined4 *)((int)this_00 + 0x34) = 0;
  *(undefined1 *)((int)this_00 + 0x38) = 0;
  return 0;
}

/* ref: FUN_00a3d1c0 */
GEN_FRAME uint GEN_THISCALL F_00a3d1c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa3d1c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  char cVar1;
  ushort uVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  undefined * pvVar6;
  undefined * pvVar7;
  uint uVar8;
  int iVar9;
  undefined * pvVar10;
  
  iVar9 = (int)(short)param_2;
  piVar3 = (int *)F_00a36f30(this GEN_EDX_FWD,param_1);
  if (((*piVar3 == 0) || (iVar9 < 0)) || (piVar3[3] <= iVar9)) {
    (*(undefined * PTR32 *)(gen_frame + 0x48)) = (undefined *)0x0;
  }
  else {
    (*(undefined * PTR32 *)(gen_frame + 0x48)) = (undefined *)(iVar9 * 0x40 + *piVar3);
  }
  iVar9 = (int)(short)param_4;
  piVar3 = (int *)F_00a36f30(this GEN_EDX_ARG,param_3);
  if (((*piVar3 == 0) || (iVar9 < 0)) || (piVar3[3] <= iVar9)) {
    pvVar10 = (undefined *)0x0;
  }
  else {
    pvVar10 = (undefined *)(iVar9 * 0x40 + *piVar3);
  }
  if ((char)param_5 != '\0') {
    uVar4 = F_00a3a8a0(pvVar10 GEN_EDX_ARG);
    uVar5 = F_00a3a8a0((*(undefined * PTR32 *)(gen_frame + 0x48)) GEN_EDX_ARG);
    F_00a39130(this GEN_EDX_ARG,param_1,param_2,param_3,param_4,uVar5,uVar4);
  }
  (*(uint *)(gen_frame + 0x10)) = 0;
  (*(uint *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  cVar1 = *(char *)((int)pvVar10 + 6);
  (*(undefined4 *)(gen_frame + 0x8)) = 9999;
  (*(undefined2 *)(gen_frame + 0xc)) = 0;
  (*(char *)(gen_frame + 0xe)) = '\0';
  (*(undefined1 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0x75300000;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined2 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x32)) = 0;
  (*(undefined2 *)(gen_frame + 0x36)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined1 *)(gen_frame + 0x40)) = 0;
  if (cVar1 == '\0') {
    uVar4 = 9999;
  }
  else {
    uVar4 = (uint)*(ushort *)((int)pvVar10 + 10);
  }
  uVar2 = *(ushort *)((int)pvVar10 + 8);
  F_00a3be70(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,uVar4,(uint)uVar2);
  if (cVar1 == '\0') {
    uVar4 = *(uint *)((int)pvVar10 + 0xc);
  }
  else {
    iVar9 = (int)(short)uVar2;
    pvVar6 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*(ushort *)((int)pvVar10 + 10));
    pvVar6 = (undefined *)F_00a37da0(pvVar6 GEN_EDX_ARG,iVar9);
    uVar4 = *(uint *)((int)pvVar10 + 0xc);
    uVar5 = F_00a3a8a0(pvVar6 GEN_EDX_ARG);
    if (uVar5 < uVar4) {
      uVar4 = F_00a3a8a0(pvVar6 GEN_EDX_ARG);
      *(uint *)((int)pvVar10 + 0xc) = uVar4;
    }
  }
  pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x48));
  (*(uint *)(gen_frame + 0x14)) = uVar4;
  if (((uVar4 == 0) && ((*(uint *)(gen_frame + 0x14)) = 0, (*(char *)(gen_frame + 0xe)) == '\0')) && ((*(uint *)(gen_frame + 0x10)) != 1)) {
    (*(uint *)(gen_frame + 0x10)) = 0;
  }
  uVar4 = (*(uint *)(gen_frame + 0x10));
  if (*(char *)((int)(*(undefined * PTR32 *)(gen_frame + 0x48)) + 6) == '\0') {
    uVar5 = 9999;
  }
  else {
    uVar5 = (uint)*(ushort *)((int)(*(undefined * PTR32 *)(gen_frame + 0x48)) + 10);
  }
  F_00a3be70(pvVar10 GEN_EDX_ARG,uVar5,(uint)*(ushort *)((int)(*(undefined * PTR32 *)(gen_frame + 0x48)) + 8));
  if (*(char *)((int)pvVar6 + 6) == '\0') {
    uVar5 = *(uint *)((int)pvVar6 + 0xc);
  }
  else {
    iVar9 = (int)*(short *)((int)pvVar6 + 8);
    pvVar7 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*(ushort *)((int)pvVar6 + 10));
    pvVar7 = (undefined *)F_00a37da0(pvVar7 GEN_EDX_ARG,iVar9);
    uVar5 = *(uint *)((int)pvVar6 + 0xc);
    uVar8 = F_00a3a8a0(pvVar7 GEN_EDX_ARG);
    uVar4 = (*(uint *)(gen_frame + 0x10));
    if (uVar8 < uVar5) {
      uVar5 = F_00a3a8a0(pvVar7 GEN_EDX_ARG);
      *(uint *)((int)pvVar6 + 0xc) = uVar5;
      uVar4 = (*(uint *)(gen_frame + 0x10));
    }
  }
  *(uint *)((int)pvVar10 + 0xc) = uVar5;
  if (((uVar5 == 0) &&
      (*(undefined4 *)((int)pvVar10 + 0xc) = 0, *(char *)((int)pvVar10 + 6) == '\0')) &&
     (*(int *)((int)pvVar10 + 8) != 1)) {
    *(undefined4 *)((int)pvVar10 + 8) = 0;
  }
  if ((*(char *)(gen_frame + 0xe)) == '\0') {
    uVar5 = 9999;
  }
  else {
    uVar5 = uVar4 >> 0x10;
  }
  F_00a3be70(pvVar6 GEN_EDX_ARG,uVar5,uVar4);
  uVar5 = (*(uint *)(gen_frame + 0x14));
  if ((*(char *)(gen_frame + 0xe)) != '\0') {
    iVar9 = (int)(short)(*(uint *)(gen_frame + 0x10));
    pvVar10 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,uVar4 >> 0x10);
    pvVar10 = (undefined *)F_00a37da0(pvVar10 GEN_EDX_ARG,iVar9);
    uVar5 = (*(uint *)(gen_frame + 0x14));
    uVar4 = F_00a3a8a0(pvVar10 GEN_EDX_ARG);
    if (uVar4 < uVar5) {
      uVar5 = F_00a3a8a0(pvVar10 GEN_EDX_ARG);
    }
  }
  *(uint *)((int)pvVar6 + 0xc) = uVar5;
  if (((uVar5 == 0) && (*(undefined4 *)((int)pvVar6 + 0xc) = 0, *(char *)((int)pvVar6 + 6) == '\0'))
     && (*(int *)((int)pvVar6 + 8) != 1)) {
    *(undefined4 *)((int)pvVar6 + 8) = 0;
    return 0;
  }
  return 0;
}

/* ref: FUN_00a3d420 */
GEN_NOFRAME uint GEN_THISCALL F_00a3d420(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa3d420u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  undefined * pvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  pvVar4 = REFG(void * PTR32, 0x1379694);
  bVar1 = F_00a4a790(&REFG(undefined, 0x14a7360) GEN_EDX_FWD,7);
  if (bVar1 == 0) {
    F_00a4a810(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,7);
  }
  else {
    if (*(char *)((int)pvVar4 + 0x188) != '\a') {
      uVar7 = 0;
      uVar5 = 0;
      uVar6 = 0;
      *(undefined1 *)((int)this + 0x3114) = 1;
      uVar3 = F_00906df0((undefined *)((int)this + 0x30d0) GEN_EDX_ARG);
      F_00a51200(0x2e,uVar3,uVar6,uVar5,uVar7);
      return 0;
    }
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
    uVar6 = 0x22;
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2 GEN_EDX_ARG);
    pvVar4 = (undefined *)F_00763050(uVar3 GEN_EDX_ARG,uVar6);
    F_008e9cb0(pvVar4 GEN_EDX_ARG);
    uVar6 = 0x23;
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2 GEN_EDX_ARG);
    pvVar4 = (undefined *)F_00763050(uVar3 GEN_EDX_ARG,uVar6);
    F_008edf60(pvVar4 GEN_EDX_ARG);
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
    if (piVar2 != (int *)0x0) {
      uVar6 = 0x1a0;
      pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2 GEN_EDX_ARG)));
      F_0046a630(pvVar4 GEN_EDX_ARG,uVar6);
    }
  }
  if ((REFG(void * PTR32, 0x1379694) != (undefined *)0x0) && (*((char *)GEN_TOP(((int)REFG(void * PTR32, 0x1379694) + 0x188))) == '\a')) {
    F_00aa2900(REFG(void * PTR32, 0x1379694) GEN_EDX_ARG,0);
  }
  F_00a51200(0x2f,0,0,0,0);
  return 0x1f;
}

/* ref: FUN_00a3d520 */
GEN_FRAME uint GEN_THISCALL F_00a3d520(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa3d520u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  int * piVar4;
  undefined * this_00;
  undefined4 uVar5;
  undefined4 uVar6;
  
  piVar2 = (int *)F_00a64450(&REFG(undefined, 0x14a9a18) GEN_EDX_FWD,param_1);
  piVar4 = REFG(int * PTR32, 0x1379694);
  if (piVar2 != (int *)0x0) {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG);
    if ((uVar3 == 1) && (piVar2 != piVar4)) {
      piVar4 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
      bVar1 = F_00a4a790(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x66);
      if (bVar1 == 0) {
        F_00a4a810(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x66);
        return 0x16;
      }
      if (*(char *)((int)piVar2 + 0x18a) == '\f') {
        uVar6 = 0;
        uVar5 = 0x4c4;
        this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4 GEN_EDX_ARG)));
        F_0046ac40(this_00 GEN_EDX_ARG,uVar5,uVar6,piVar2);
        return 0x16;
      }
      F_00a3bd60((undefined *)((int)this + 0x30d0) GEN_EDX_ARG,param_2);
      *(undefined4 *)((int)this + 0x30d0) = *param_2;
      *(undefined2 *)((int)this + 0x30d4) = *(undefined2 *)(param_2 + 1);
      F_00a3bd60((undefined *)((int)this + 0x3090) GEN_EDX_ARG,param_3);
      *(undefined4 *)((int)this + 0x3090) = *param_3;
      *(undefined2 *)((int)this + 0x3094) = *(undefined2 *)(param_3 + 1);
      *(undefined4 *)((int)this + 0x3110) = param_1;
      F_00a396c0(this GEN_EDX_ARG,*param_2,(uint)*(ushort *)(param_2 + 1),*param_3,
                   (uint)*(ushort *)(param_3 + 1),param_1,param_4);
      return 0;
    }
  }
  return 2;
}

/* ref: FUN_00a3d640 */
GEN_FRAME uint GEN_THISCALL F_00a3d640(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa3d640u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined1 * puVar1;
  undefined * pvVar2;
  uint uVar3;
  uint uVar4;
  char * pcVar5;
  undefined4 uVar6;
  
  pvVar2 = (undefined *)F_00a36f30(this GEN_EDX_FWD,param_1);
  uVar3 = 0;
  if (pvVar2 != (undefined *)0x0) {
    pvVar2 = (undefined *)F_00a37da0(pvVar2 GEN_EDX_ARG,(int)(short)param_2);
    uVar3 = 0;
    if (pvVar2 != (undefined *)0x0) {
      uVar3 = 0;
      pcVar5 = (char *)((int)this + 0x364);
      while (*pcVar5 == '\0') {
        uVar3 = uVar3 + 1;
        pcVar5 = pcVar5 + 0x3c;
        if (0x7f < (int)uVar3) {
          return uVar3;
        }
      }
      puVar1 = (undefined1 *)((int)this + uVar3 * 0x3c + 0x364);
      *puVar1 = 0;
      if (puVar1 != (undefined1 *)0x0) {
        *(short *)(puVar1 + 0x14) = (short)param_2;
        *(undefined4 *)(puVar1 + 8) = 7;
        *(undefined4 *)(puVar1 + 0x10) = param_1;
        uVar3 = F_0046e5e0(pvVar2 GEN_EDX_ARG);
        *(uint *)(puVar1 + 0x1c) = uVar3;
        uVar3 = F_00a3a8a0(pvVar2 GEN_EDX_ARG);
        *(uint *)(puVar1 + 0x18) = uVar3;
        *(undefined4 *)(puVar1 + 0x24) = param_1;
        *(short *)(puVar1 + 0x28) = (short)param_2;
        uVar3 = F_0046e5e0(pvVar2 GEN_EDX_ARG);
        *(uint *)(puVar1 + 0x30) = uVar3;
        uVar3 = F_00a3a8a0(pvVar2 GEN_EDX_ARG);
        *(uint *)(puVar1 + 0x2c) = uVar3;
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((int)this + 0x360);
        uVar6 = *(undefined4 *)((int)this + 0x360);
        uVar3 = F_00a3a8a0(pvVar2 GEN_EDX_ARG);
        uVar4 = F_0046e5e0(pvVar2 GEN_EDX_ARG);
        F_00a526e0(param_1,param_2,uVar4,uVar3,uVar6);
        uVar4 = *(int *)((int)this + 0x360) + 1;
        uVar3 = uVar4 / 0xfffffff;
        *(uint *)((int)this + 0x360) = uVar4 % 0xfffffff | 0x10000000;
      }
    }
  }
  return uVar3;
}

/* ref: FUN_00a3d750 */
GEN_FRAME uint GEN_THISCALL F_00a3d750(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa3d750u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  pvVar1 = (undefined *)F_00a36f30(this GEN_EDX_FWD,0x7d7);
  uVar4 = 0;
  if (pvVar1 != (undefined *)0x0) {
    uVar2 = F_00a36440(pvVar1 GEN_EDX_ARG,0);
    uVar4 = 0;
    if (uVar2 != 0) {
      pvVar1 = (undefined *)F_00a36f30(this GEN_EDX_ARG,param_1);
      uVar4 = 0;
      if (pvVar1 != (undefined *)0x0) {
        uVar3 = F_00a37da0(pvVar1 GEN_EDX_ARG,(int)(short)param_2);
        uVar4 = 0;
        if (uVar3 != 0) {
          F_00a3cd20(this GEN_EDX_ARG,uVar3,0x7d7,(uint)*(ushort *)(uVar2 + 4),0);
          uVar4 = F_00a3a720();
        }
      }
    }
  }
  return uVar4;
}

/* ref: FUN_00a3d7c0 */
GEN_FRAME uint GEN_THISCALL F_00a3d7c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa3d7c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar2 = (int *)F_00a36f30(this GEN_EDX_FWD,0x7d7);
  uVar6 = 0;
  if (piVar2 != (int *)0x0) {
    iVar1 = piVar2[3];
    iVar4 = 0;
    if (0 < iVar1) {
      iVar5 = *piVar2;
      do {
        if (((*piVar2 == 0) || (iVar4 < 0)) || (iVar3 = iVar5, iVar1 <= iVar4)) {
          iVar3 = 0;
        }
        if (*(char *)(iVar3 + 6) == '\0') {
          uVar6 = 9999;
        }
        else {
          uVar6 = (uint)*(ushort *)(iVar3 + 10);
        }
        if ((uVar6 == param_1) && (*(short *)(iVar3 + 8) == (short)param_2)) {
          F_00a3ced0(this GEN_EDX_ARG,0x7d7,iVar4,0);
          break;
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 0x40;
      } while (iVar4 < iVar1);
    }
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
    uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2 GEN_EDX_ARG);
    *(byte *)(uVar6 + 0x230bf) = *(byte *)(uVar6 + 0x230bf) | 1;
    F_006d0fd0();
    uVar6 = F_00701020();
  }
  return uVar6;
}

/* ref: FUN_00a3d870 */
GEN_FRAME uint GEN_THISCALL F_00a3d870(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa3d870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  F_00a3ced0(this GEN_EDX_FWD,*(undefined4 *)(param_1 + 0xc),(uint)*(ushort *)(param_1 + 0x10),0);
  uVar1 = F_00a376a0(this GEN_EDX_ARG,*(undefined4 *)(param_1 + 0xc),(uint)*(ushort *)(param_1 + 0x10));
  return uVar1;
}

/* ref: FUN_00a3d8b0 */
GEN_FRAME uint GEN_THISCALL F_00a3d8b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa3d8b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined * pvVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint local_c;
  int local_8;
  
  uVar2 = F_00ab24a0(param_1);
  if ((uVar2 == 0) || (param_1 == 0)) {
    return 0;
  }
  uVar2 = *(uint *)(uVar2 + 0x28);
  local_c = 0;
  if (param_1 - 2 < 0x12) {
    pvVar3 = (undefined *)F_00a36f30(this GEN_EDX_ARG,0x7d1);
    if ((pvVar3 != (undefined *)0x0) &&
       (pvVar3 = (undefined *)F_00a37da0(pvVar3 GEN_EDX_ARG,param_1 - 2), pvVar3 != (undefined *)0x0)) {
      uVar4 = F_00a3a8a0(pvVar3 GEN_EDX_ARG);
      uVar2 = uVar2 - uVar4;
    }
    return uVar2;
  }
  if (3 < param_1 - 0x17) {
    local_8 = 0;
    do {
      pvVar3 = (undefined *)F_00a36f30(this GEN_EDX_ARG,local_8);
      for (uVar4 = F_00a3c040(pvVar3 GEN_EDX_ARG,param_1,1,0); uVar4 != 0;
          uVar4 = F_00a3c040(pvVar3 GEN_EDX_ARG,param_1,1,*(ushort *)(uVar4 + 4) + 1)) {
        if ((*(byte *)(uVar4 + 0x14) & 1) == (byte)param_2) {
          if (*(char *)(uVar4 + 6) == '\0') {
            uVar7 = *(uint *)(uVar4 + 0xc);
          }
          else {
            iVar8 = (int)*(short *)(uVar4 + 8);
            pvVar5 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*(ushort *)(uVar4 + 10));
            pvVar5 = (undefined *)F_00a37da0(pvVar5 GEN_EDX_ARG,iVar8);
            uVar7 = *(uint *)(uVar4 + 0xc);
            uVar6 = F_00a3a8a0(pvVar5 GEN_EDX_ARG);
            if (uVar6 < uVar7) {
              uVar7 = F_00a3a8a0(pvVar5 GEN_EDX_ARG);
              *(uint *)(uVar4 + 0xc) = uVar7;
            }
          }
          local_c = local_c + (uVar2 - uVar7);
        }
      }
      local_8 = local_8 + 1;
    } while (local_8 < 4);
    return local_c;
  }
  bVar1 = ((byte)param_1 & 1) + 5;
  pvVar3 = (undefined *)F_00a36f30(this GEN_EDX_ARG,2000);
  if (((pvVar3 == (undefined *)0x0) ||
      (pvVar3 = (undefined *)F_00a37da0(pvVar3 GEN_EDX_ARG,(uint)bVar1), pvVar3 == (undefined *)0x0)) ||
     (uVar2 = F_0071d3a0(pvVar3 GEN_EDX_ARG), (char)uVar2 != '\0')) {
    if (bVar1 == 5) {
      return 300 - *(int *)((int)this + 0x3118);
    }
    return 2000;
  }
  uVar2 = F_00906df0(pvVar3 GEN_EDX_ARG);
  if (uVar2 != param_1) {
    return 0;
  }
  if (bVar1 == 5) {
    uVar4 = 300 - *(int *)((int)this + 0x3118);
    uVar2 = F_00a3a8a0(pvVar3 GEN_EDX_ARG);
    if ((int)uVar4 < (int)(2000 - uVar2)) {
      return uVar4;
    }
    return 2000 - uVar2;
  }
  uVar2 = F_00a3a8a0(pvVar3 GEN_EDX_ARG);
  return 2000 - uVar2;
}

/* ref: FUN_00a3dac0 */
GEN_FRAME uint GEN_THISCALL F_00a3dac0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa3dac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * in_ecx = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  undefined * this;
  char * pcVar6;
  int iVar7;
  char * pcVar8;
  char * pcVar9;
  uint uVar10;
  char * pcVar11;
  int iStack_8;
  
  uVar4 = F_00a373e0((*(int *)&gen_a1));
  if (uVar4 == 0) {
    return 0;
  }
  (*(int *)&gen_a1) = 1000;
  do {
    if ((*(int *)&gen_a1) == 1000) {
LAB_00a3db16: ;
      if ((*(int *)&gen_a1) == 0x3e9) goto LAB_00a3db1e;
      if ((*(int *)&gen_a1) == 0xd49) {
        (*(int *)&gen_a1) = 0;
      }
    }
    else {
      if ((*(int *)&gen_a1) != 0x3e9) {
        if ((((*(int *)&gen_a1) != 0xd48) && ((*(int *)&gen_a1) != 0xd49)) && (3 < (*(int *)&gen_a1))) {
          return 0;
        }
        goto LAB_00a3db16;
      }
LAB_00a3db1e: ;
      (*(int *)&gen_a1) = 0xd48;
    }
    piVar5 = (int *)F_00a36f30(in_ecx GEN_EDX_ARG,(*(int *)&gen_a1));
    if (piVar5 != (int *)0x0) {
      iVar2 = piVar5[3];
      iStack_8 = 0;
      if (0 < iVar2) {
        iVar3 = *piVar5;
        pcVar11 = (char *)(iVar3 + 6);
        do {
          if (((iVar3 != 0) && (-1 < iStack_8)) && (iStack_8 < iVar2)) {
            if (*pcVar11 == '\0') {
              pcVar8 = pcVar11 - 6;
            }
            else {
              iVar7 = (int)*(short *)(pcVar11 + 2);
              piVar5 = (int *)F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*(ushort *)(pcVar11 + 4));
              if (((*piVar5 == 0) || (iVar7 < 0)) || (piVar5[3] <= iVar7)) {
                pcVar8 = (char *)0x0;
              }
              else {
                pcVar8 = (char *)(iVar7 * 0x40 + *piVar5);
              }
            }
            if (pcVar8 != (char *)0x0) {
              if (pcVar8[6] == '\0') {
                if (*(int *)(pcVar8 + 8) == 0) goto LAB_00a3dc32;
                uVar10 = *(uint *)(pcVar8 + 8);
              }
              else {
                this = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*(ushort *)(pcVar8 + 10));
                if (this == (undefined *)0x0) {
                  pcVar9 = (char *)0x0;
                }
                else {
                  pcVar6 = (char *)F_00a37da0(this GEN_EDX_ARG,(int)*(short *)(pcVar8 + 8));
                  pcVar9 = pcVar8;
                  if (pcVar6 != (char *)0x0) {
                    pcVar9 = pcVar6;
                  }
                }
                cVar1 = pcVar9[6];
                while (cVar1 == '\0') {
                  cVar1 = pcVar9[6];
                }
                uVar10 = *(uint *)(pcVar9 + 8);
              }
              if (uVar10 == uVar4) {
                return (uint)pcVar8;
              }
            }
          }
LAB_00a3dc32: ;
          iStack_8 = iStack_8 + 1;
          pcVar11 = pcVar11 + 0x40;
        } while (iStack_8 < iVar2);
      }
    }
    (*(int *)&gen_a1) = (*(int *)&gen_a1) + 1;
  } while( true );
}

/* ref: FUN_00a3dae2 */
GEN_NOFRAME uint F_00a3dae2(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa3dae2u, gen_a0, gen_a1, 0u, 0u);
  int in_ebp = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  char cVar1;
  int * piVar2;
  int iVar3;
  undefined * this;
  char * pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char * pcVar8;
  char * pcVar9;
  
  iVar7 = 1000;
  do {
    *(int *)(in_ebp + 8) = iVar7;
    if (iVar7 == 1000) {
LAB_00a3db16: ;
      if (iVar7 == 0x3e9) goto LAB_00a3db1e;
      if (iVar7 == 0xd49) {
        *(undefined4 *)(in_ebp + 8) = 0;
        goto LAB_00a3db36;
      }
    }
    else {
      if (iVar7 != 0x3e9) {
        if (((iVar7 != 0xd48) && (iVar7 != 0xd49)) && (3 < iVar7)) {
          return 0;
        }
        goto LAB_00a3db16;
      }
LAB_00a3db1e: ;
      *(undefined4 *)(in_ebp + 8) = 0xd48;
LAB_00a3db36: ;
      iVar7 = *(int *)(in_ebp + 8);
    }
    piVar2 = (int *)F_00a36f30(*(undefined * PTR32 *)(in_ebp - 0x10) GEN_EDX_ARG,iVar7);
    if (piVar2 != (int *)0x0) {
      iVar6 = piVar2[3];
      iVar5 = 0;
      *(int *)(in_ebp - 8) = iVar6;
      *(undefined4 *)(in_ebp - 4) = 0;
      if (0 < iVar6) {
        iVar3 = *piVar2;
        pcVar9 = (char *)(iVar3 + 6);
        *(int *)(in_ebp - 0x14) = iVar3;
        *(char * PTR32 *)(in_ebp - 0xc) = pcVar9;
        do {
          if (((iVar3 != 0) && (-1 < iVar5)) && (iVar5 < iVar6)) {
            if (*pcVar9 == '\0') {
              pcVar8 = pcVar9 - 6;
            }
            else {
              iVar7 = (int)*(short *)(pcVar9 + 2);
              piVar2 = (int *)F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*(ushort *)(pcVar9 + 4));
              if (((*piVar2 == 0) || (iVar7 < 0)) || (piVar2[3] <= iVar7)) {
                pcVar8 = (char *)0x0;
              }
              else {
                pcVar8 = (char *)(iVar7 * 0x40 + *piVar2);
              }
              iVar6 = *(int *)(in_ebp - 8);
              iVar5 = *(int *)(in_ebp - 4);
              iVar7 = *(int *)(in_ebp + 8);
            }
            if (pcVar8 != (char *)0x0) {
              if (pcVar8[6] == '\0') {
                if (*(int *)(pcVar8 + 8) == 0) goto LAB_00a3dc32;
                iVar7 = *(int *)(pcVar8 + 8);
              }
              else {
                this = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*(ushort *)(pcVar8 + 10));
                if (this == (undefined *)0x0) {
                  pcVar9 = (char *)0x0;
                }
                else {
                  pcVar4 = (char *)F_00a37da0(this GEN_EDX_ARG,(int)*(short *)(pcVar8 + 8));
                  pcVar9 = pcVar8;
                  if (pcVar4 != (char *)0x0) {
                    pcVar9 = pcVar4;
                  }
                }
                cVar1 = pcVar9[6];
                while (cVar1 == '\0') {
                  cVar1 = pcVar9[6];
                }
                iVar7 = *(int *)(pcVar9 + 8);
              }
              if (iVar7 == *(int *)(in_ebp - 0x18)) {
                return (uint)pcVar8;
              }
              pcVar9 = *(char * PTR32 *)(in_ebp - 0xc);
              iVar6 = *(int *)(in_ebp - 8);
              iVar5 = *(int *)(in_ebp - 4);
              iVar7 = *(int *)(in_ebp + 8);
            }
          }
LAB_00a3dc32: ;
          iVar5 = iVar5 + 1;
          pcVar9 = pcVar9 + 0x40;
          *(int *)(in_ebp - 4) = iVar5;
          *(char * PTR32 *)(in_ebp - 0xc) = pcVar9;
          if (iVar6 <= iVar5) break;
          iVar3 = *(int *)(in_ebp - 0x14);
        } while( true );
      }
    }
    iVar7 = iVar7 + 1;
  } while( true );
}

/* ref: FUN_00a3dc60 */
GEN_FRAME uint GEN_THISCALL F_00a3dc60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xa3dc60u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  ushort uVar1;
  bool bVar2;
  byte bVar3;
  undefined * this_00;
  undefined * pvVar4;
  undefined * pvVar5;
  uint uVar6;
  byte bVar7;
  short sVar8;
  
  this_00 = (undefined *)F_00a36f30((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,(*(undefined4 *)&gen_args[1]));
  sVar8 = 0;
  if ((*(uint *)&gen_args[2]) - 1000000 < 1000000) {
    (*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[4]) + 0)) = 1;
    (*(uint *)&gen_args[2]) = (*(uint *)&gen_args[2]) - 1000000;
  }
  if (0 < *(int *)((int)this_00 + 0xc)) {
    do {
      pvVar4 = (undefined *)F_00a3a8f0(this_00 GEN_EDX_ARG,(*(uint *)&gen_args[2]),(int)sVar8);
      if (pvVar4 == (undefined *)0x0) {
        return 0;
      }
      bVar7 = *(byte *)((int)pvVar4 + 0x14);
      if ((*(uint *)&gen_args[5]) == 0xffffffff) {
LAB_00a3dd36: ;
        bVar2 = true;
      }
      else {
        if (*(char *)((int)pvVar4 + 6) == '\0') {
LAB_00a3dd27: ;
          bVar3 = *(byte *)((int)pvVar4 + 0x2f);
        }
        else {
          uVar1 = *(ushort *)((int)pvVar4 + 10);
          pvVar5 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)uVar1);
          if (pvVar5 == (undefined *)0x0) goto LAB_00a3dd27;
          sVar8 = *(short *)((int)pvVar4 + 8);
          uVar6 = F_00a37da0(pvVar5 GEN_EDX_ARG,(int)sVar8);
          if ((uVar6 == 0) && (pvVar4 == (undefined *)0x0)) goto LAB_00a3dd27;
          pvVar5 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)uVar1);
          if (pvVar5 == (undefined *)0x0) {
            bVar3 = F_0046e590((undefined *)0x0 GEN_EDX_ARG);
          }
          else {
            pvVar5 = (undefined *)F_00a37da0(pvVar5 GEN_EDX_ARG,(int)sVar8);
            if (pvVar5 == (undefined *)0x0) {
              pvVar5 = pvVar4;
            }
            bVar3 = F_0046e590(pvVar5 GEN_EDX_ARG);
          }
        }
        if ((*(uint *)&gen_args[5]) == bVar3) goto LAB_00a3dd36;
        bVar2 = false;
      }
      bVar7 = bVar7 & 1;
      if (*(*(short * PTR32 *)&gen_args[3]) < 1) {
        if ((((byte)(*(undefined4 *)&gen_args[4]) == bVar7) && (bVar2)) && (*(short *)((int)pvVar4 + 4) != (short)(*(undefined4 *)&gen_args[6]))
           ) {
          return (uint)pvVar4;
        }
        sVar8 = *(short *)((int)pvVar4 + 4) + 1;
      }
      else {
        sVar8 = *(short *)((int)pvVar4 + 4) + 1;
        if (((byte)(*(undefined4 *)&gen_args[4]) == bVar7) && (bVar2)) {
          *(*(short * PTR32 *)&gen_args[3]) = *(*(short * PTR32 *)&gen_args[3]) - 1;
        }
      }
    } while ((int)sVar8 < *(int *)((int)this_00 + 0xc));
  }
  return 0;
}

/* ref: FUN_00a3dda0 */
GEN_FRAME uint GEN_THISCALL F_00a3dda0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa3dda0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  uVar1 = F_00a3dc60(this GEN_EDX_FWD,param_1,param_2,&(*(undefined * PTR32 *)(gen_frame + 0x8)),param_3,param_4,0xffffffff);
  return uVar1;
}

/* ref: FUN_00a3ddd0 */
GEN_FRAME uint GEN_THISCALL F_00a3ddd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa3ddd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  uVar1 = F_00a3dc60(this GEN_EDX_FWD,param_1,param_2,&(*(undefined * PTR32 *)(gen_frame + 0x8)),param_3,param_4,param_5);
  return uVar1;
}

