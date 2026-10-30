#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00e24bf0 */
GEN_LIB GEN_FRAME unsigned int F_00e24bf0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe24bf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
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

/* ref: FUN_00e24c20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e24c20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe24c20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00e24c40 */
GEN_LIB GEN_FRAME unsigned int F_00e24c40(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe24c40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  
  if (0 < param_2) {
    puVar1 = param_1;
    iVar2 = param_2;
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_3 - (int)param_1) + (int)puVar1)));
        puVar1[1] = *((undefined4 *)GEN_TOP(((param_3 - (int)param_1) + 4 + (int)puVar1)));
      }
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00e24c80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e24c80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe24c80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,8);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00e24cc0 */
GEN_LIB GEN_FRAME unsigned int F_00e24cc0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe24cc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
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

/* ref: FUN_00e24cf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e24cf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe24cf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00e24d10 */
GEN_LIB GEN_FRAME unsigned int F_00e24d10(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe24d10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  
  if (0 < param_2) {
    puVar1 = param_1;
    iVar2 = param_2;
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_3 - (int)param_1) + (int)puVar1)));
        puVar1[1] = *((undefined4 *)GEN_TOP(((param_3 - (int)param_1) + 4 + (int)puVar1)));
      }
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00e24d60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e24d60(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe24d60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*in_ecx + param_2 * 8)));
}

/* ref: FUN_00e24d70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e24d70(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe24d70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*in_ecx + 4 + param_2 * 8)));
}

/* ref: FUN_00e24d80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e24d80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe24d80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  *((bool *)GEN_TOP(param_2)) = param_3 <= *((int *)GEN_TOP((in_ecx + 8)));
  return param_2;
}

/* ref: FUN_00e24e10 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e24e10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe24e10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (*((int *)GEN_TOP(((int)this + 4))) != param_1) {
    puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + param_1 * 8)));
    iVar2 = (*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 8) - (int)puVar1;
    iVar3 = 2;
    do {
      *puVar1 = *((undefined4 *)GEN_TOP((iVar2 + (int)puVar1)));
      puVar1 = puVar1 + 1;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  return;
}

/* ref: FUN_00e24e40 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e24e40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe24e40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (*((int *)GEN_TOP(((int)this + 4))) != param_1) {
    puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + param_1 * 8)));
    iVar2 = (*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 8) - (int)puVar1;
    iVar3 = 2;
    do {
      *puVar1 = *((undefined4 *)GEN_TOP((iVar2 + (int)puVar1)));
      puVar1 = puVar1 + 1;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  return;
}

/* ref: FUN_00e24e70 */
GEN_LIB GEN_FRAME uint F_00e24e70(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe24e70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = F_00d924b0(*((undefined4 *)GEN_TOP(((int)pvVar1 + 0x2c))),param_1);
  return uVar2;
}

/* ref: FUN_00e24ea0 */
GEN_LIB GEN_FRAME uint F_00e24ea0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe24ea0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,param_2);
  return uVar2;
}

/* ref: FUN_00e24ed0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e24ed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe24ed0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e24f10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e24f10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe24f10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = param_2[1];
  iVar6 = *((int *)GEN_TOP(((int)this + 4)));
  if (iVar1 <= *((int *)GEN_TOP(((int)this + 4)))) {
    iVar6 = iVar1;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < iVar1) {
    iVar5 = uVar2 * 2;
    if (iVar5 <= iVar1) {
      iVar5 = iVar1;
    }
    F_00d95690(param_1,this,iVar5,8);
  }
  puVar4 = *(undefined4 * PTR32 *)this;
  if (0 < iVar6) {
    iVar3 = *param_2 - (int)puVar4;
    iVar5 = iVar6;
    do {
      *puVar4 = *((undefined4 *)GEN_TOP((iVar3 + (int)puVar4)));
      puVar4[1] = *((undefined4 *)GEN_TOP((iVar3 + 4 + (int)puVar4)));
      puVar4 = puVar4 + 2;
      iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
  }
  puVar4 = ((undefined4 *)GEN_TOP((*(int *)this + iVar6 * 8)));
  iVar5 = iVar1 - iVar6;
  if (0 < iVar5) {
    iVar6 = (*param_2 + iVar6 * 8) - (int)puVar4;
    do {
      if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar4 = *((undefined4 *)GEN_TOP((iVar6 + (int)puVar4)));
        puVar4[1] = *((undefined4 *)GEN_TOP((iVar6 + 4 + (int)puVar4)));
      }
      puVar4 = puVar4 + 2;
      iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
  }
  *((int *)GEN_TOP(((int)this + 4))) = iVar1;
  return (uint)this;
}

/* ref: FUN_00e24fc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e24fc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe24fc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e25000 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e25000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe25000u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = param_2[1];
  iVar6 = *((int *)GEN_TOP(((int)this + 4)));
  if (iVar1 <= *((int *)GEN_TOP(((int)this + 4)))) {
    iVar6 = iVar1;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < iVar1) {
    iVar5 = uVar2 * 2;
    if (iVar5 <= iVar1) {
      iVar5 = iVar1;
    }
    F_00d95690(param_1,this,iVar5,8);
  }
  puVar4 = *(undefined4 * PTR32 *)this;
  if (0 < iVar6) {
    iVar3 = *param_2 - (int)puVar4;
    iVar5 = iVar6;
    do {
      *puVar4 = *((undefined4 *)GEN_TOP((iVar3 + (int)puVar4)));
      puVar4[1] = *((undefined4 *)GEN_TOP((iVar3 + 4 + (int)puVar4)));
      puVar4 = puVar4 + 2;
      iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
  }
  puVar4 = ((undefined4 *)GEN_TOP((*(int *)this + iVar6 * 8)));
  iVar5 = iVar1 - iVar6;
  if (0 < iVar5) {
    iVar6 = (*param_2 + iVar6 * 8) - (int)puVar4;
    do {
      if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar4 = *((undefined4 *)GEN_TOP((iVar6 + (int)puVar4)));
        puVar4[1] = *((undefined4 *)GEN_TOP((iVar6 + 4 + (int)puVar4)));
      }
      puVar4 = puVar4 + 2;
      iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
  }
  *((int *)GEN_TOP(((int)this + 4))) = iVar1;
  return (uint)this;
}

/* ref: FUN_00e250d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e250d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe250d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int * piVar2;
  
  uVar1 = 0;
  if (-1 < *((int *)GEN_TOP(((int)this + 8)))) {
    piVar2 = *(int * PTR32 *)this;
    do {
      if (*piVar2 != -1) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 2;
    } while ((int)uVar1 <= *((int *)GEN_TOP(((int)this + 8))));
  }
  return uVar1;
}

/* ref: FUN_00e250f0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e250f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe250f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int * piVar2;
  
  iVar1 = param_1 + 1;
  if (iVar1 <= *((int *)GEN_TOP(((int)this + 8)))) {
    piVar2 = ((int *)GEN_TOP((*(int *)this + iVar1 * 8)));
    do {
      if (*piVar2 != -1) {
        return 0;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 2;
    } while (iVar1 <= *((int *)GEN_TOP(((int)this + 8))));
  }
  return 0;
}

/* ref: FUN_00e25120 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e25120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe25120u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = param_1[1];
  iVar6 = *((int *)GEN_TOP(((int)this + 4)));
  if (iVar1 <= *((int *)GEN_TOP(((int)this + 4)))) {
    iVar6 = iVar1;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < iVar1) {
    iVar5 = uVar2 * 2;
    if (iVar5 <= iVar1) {
      iVar5 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar5,8);
  }
  puVar4 = *(undefined4 * PTR32 *)this;
  if (0 < iVar6) {
    iVar3 = *param_1 - (int)puVar4;
    iVar5 = iVar6;
    do {
      *puVar4 = *((undefined4 *)GEN_TOP((iVar3 + (int)puVar4)));
      puVar4[1] = *((undefined4 *)GEN_TOP((iVar3 + 4 + (int)puVar4)));
      puVar4 = puVar4 + 2;
      iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
  }
  puVar4 = ((undefined4 *)GEN_TOP((*(int *)this + iVar6 * 8)));
  iVar5 = iVar1 - iVar6;
  if (0 < iVar5) {
    iVar6 = (*param_1 + iVar6 * 8) - (int)puVar4;
    do {
      if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar4 = *((undefined4 *)GEN_TOP((iVar6 + (int)puVar4)));
        puVar4[1] = *((undefined4 *)GEN_TOP((iVar6 + 4 + (int)puVar4)));
      }
      puVar4 = puVar4 + 2;
      iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
  }
  *((int *)GEN_TOP(((int)this + 4))) = iVar1;
  return (uint)this;
}

/* ref: FUN_00e251d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e251d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe251d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = param_1[1];
  iVar6 = *((int *)GEN_TOP(((int)this + 4)));
  if (iVar1 <= *((int *)GEN_TOP(((int)this + 4)))) {
    iVar6 = iVar1;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < iVar1) {
    iVar5 = uVar2 * 2;
    if (iVar5 <= iVar1) {
      iVar5 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar5,8);
  }
  puVar4 = *(undefined4 * PTR32 *)this;
  if (0 < iVar6) {
    iVar3 = *param_1 - (int)puVar4;
    iVar5 = iVar6;
    do {
      *puVar4 = *((undefined4 *)GEN_TOP((iVar3 + (int)puVar4)));
      puVar4[1] = *((undefined4 *)GEN_TOP((iVar3 + 4 + (int)puVar4)));
      puVar4 = puVar4 + 2;
      iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
  }
  puVar4 = ((undefined4 *)GEN_TOP((*(int *)this + iVar6 * 8)));
  iVar5 = iVar1 - iVar6;
  if (0 < iVar5) {
    iVar6 = (*param_1 + iVar6 * 8) - (int)puVar4;
    do {
      if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar4 = *((undefined4 *)GEN_TOP((iVar6 + (int)puVar4)));
        puVar4[1] = *((undefined4 *)GEN_TOP((iVar6 + 4 + (int)puVar4)));
      }
      puVar4 = puVar4 + 2;
      iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
  }
  *((int *)GEN_TOP(((int)this + 4))) = iVar1;
  return (uint)this;
}

/* ref: FUN_00e25280 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e25280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe25280u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e252c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e252c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe252c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e25300 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e25300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe25300u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e25340 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e25340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe25340u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e25380 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e25380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe25380u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e253c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e253c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe253c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e25400 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e25400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe25400u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: hkPackfileData::vf3 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e25440(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe25440u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0xc)));
}

/* ref: FUN_00e25450 */
GEN_LIB GEN_FRAME uint F_00e25450(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe25450u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkPackfileData::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e25480(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe25480u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00e24840(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: FUN_00e254c0 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e254c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe254c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = **((byte * PTR32 *)GEN_TOP(((int)this + 0x10)));
  if (bVar1 == 0) {
    F_00e1bdb0(this GEN_EDX_FWD,0x100);
    bVar1 = **((byte * PTR32 *)GEN_TOP(((int)this + 0x10)));
  }
  return bVar1;
}

/* ref: FUN_00e254e0 */
GEN_LIB GEN_FRAME uint F_00e254e0(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe254e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  if (((param_2 < 'a') || ('z' < param_2)) && (0x19 < (byte)(param_2 + 0xbfU))) {
    *param_1 = 0;
    return (uint)param_1;
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00e25510 */
GEN_LIB GEN_FRAME uint F_00e25510(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe25510u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  if ((((param_2 != ' ') && (param_2 != '\t')) && (param_2 != '\r')) && (param_2 != '\n')) {
    *param_1 = 0;
    return (uint)param_1;
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00e25540 */
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00e25540(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe25540u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  return 0xc;
}

/* ref: FUN_00e25550 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e25550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe25550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x11552e8));
  F_00e1bcd0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  return (uint)this;
}

/* ref: FUN_00e25580 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e25580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe25580u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  char cVar1;
  int iVar2;
  char * pcVar3;
  uint uVar4;
  int iVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP(0x3e2d2d));
LAB_00e25590: ;
  iVar2 = 0;
  do {
    iVar5 = iVar2;
    pcVar3 = *((char * PTR32 *)GEN_TOP(((int)this + 0x18)));
    if (((char *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x20))) + *((int *)GEN_TOP(((int)this + 0x1c)))))) <= pcVar3) {
      F_00e1bdb0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,0x100);
      pcVar3 = *((char * PTR32 *)GEN_TOP(((int)this + 0x18)));
      if (((char *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x20))) + *((int *)GEN_TOP(((int)this + 0x1c)))))) <= pcVar3)
      goto LAB_00e255d9;
    }
    cVar1 = *pcVar3;
    *((char * PTR32 *)GEN_TOP(((int)this + 0x18))) = pcVar3 + 1;
    if (cVar1 == '\0') {
LAB_00e255d9: ;
      uVar4 = F_00e25540(((char *)REFP(0x11552f4)));
      return uVar4;
    }
    if (*((char *)GEN_TOP(((int)&(*(undefined * PTR32 *)(gen_frame + 0x0)) + iVar5))) != cVar1) goto LAB_00e25590;
    iVar2 = iVar5 + 1;
    if (iVar5 + 1 == 3) {
      return iVar5 + 2;
    }
  } while( true );
}

/* ref: FUN_00e255f0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e255f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe255f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  bool bVar2;
  char * pcVar3;
  uint uVar4;
  
  do {
    bVar2 = false;
LAB_00e255f7: ;
    pcVar3 = *((char * PTR32 *)GEN_TOP(((int)this + 0x18)));
    if (((char *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x20))) + *((int *)GEN_TOP(((int)this + 0x1c)))))) <= pcVar3) {
      F_00e1bdb0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,0x100);
      pcVar3 = *((char * PTR32 *)GEN_TOP(((int)this + 0x18)));
      if (((char *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x20))) + *((int *)GEN_TOP(((int)this + 0x1c)))))) <= pcVar3)
      goto LAB_00e25643;
    }
    cVar1 = *pcVar3;
    *((char * PTR32 *)GEN_TOP(((int)this + 0x18))) = pcVar3 + 1;
    if (cVar1 == '\0') {
LAB_00e25643: ;
      uVar4 = F_00e25540(((char *)REFP(0x115530c)));
      return uVar4;
    }
  } while (bVar2);
  if (cVar1 == '\\') {
    bVar2 = true;
  }
  else if (cVar1 == '\"') {
    return 10;
  }
  goto LAB_00e255f7;
}

/* ref: FUN_00e25660 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e25660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe25660u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  uint uVar2;
  
LAB_00e25664: ;
  cVar1 = **((char * PTR32 *)GEN_TOP(((int)this + 0x18)));
  if (cVar1 == '\0') {
    F_00e1bdb0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,0x100);
    cVar1 = **((char * PTR32 *)GEN_TOP(((int)this + 0x18)));
  }
  if ((((cVar1 < 'a') || ('z' < cVar1)) && (0x19 < (byte)(cVar1 + 0xbfU))) &&
     ((9 < (byte)(cVar1 - 0x30U) && (cVar1 != '_')))) {
    return 8;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x18)));
  if ((uint)(*((int *)GEN_TOP(((int)this + 0x20))) + *((int *)GEN_TOP(((int)this + 0x1c)))) <= uVar2)
  goto code_r0x00e256a7;
  goto LAB_00e256c0;
code_r0x00e256a7: ;
  F_00e1bdb0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,0x100);
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x18)));
  if (uVar2 < (uint)(*((int *)GEN_TOP(((int)this + 0x20))) + *((int *)GEN_TOP(((int)this + 0x1c))))) {
LAB_00e256c0: ;
    *((uint *)GEN_TOP(((int)this + 0x18))) = uVar2 + 1;
  }
  goto LAB_00e25664;
}

/* ref: FUN_00e256d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e256d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe256d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  uint uVar2;
  
LAB_00e256d4: ;
  cVar1 = **((char * PTR32 *)GEN_TOP(((int)this + 0x18)));
  if (cVar1 == '\0') {
    F_00e1bdb0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,0x100);
    cVar1 = **((char * PTR32 *)GEN_TOP(((int)this + 0x18)));
  }
  if ((((cVar1 != ' ') && (cVar1 != '\t')) && (cVar1 != '\r')) && (cVar1 != '\n')) {
    return 3;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x18)));
  if ((uint)(*((int *)GEN_TOP(((int)this + 0x20))) + *((int *)GEN_TOP(((int)this + 0x1c)))) <= uVar2)
  goto code_r0x00e2570b;
  goto LAB_00e25724;
code_r0x00e2570b: ;
  F_00e1bdb0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,0x100);
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x18)));
  if (uVar2 < (uint)(*((int *)GEN_TOP(((int)this + 0x20))) + *((int *)GEN_TOP(((int)this + 0x1c))))) {
LAB_00e25724: ;
    *((uint *)GEN_TOP(((int)this + 0x18))) = uVar2 + 1;
  }
  goto LAB_00e256d4;
}

/* ref: FUN_00e25740 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e25740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe25740u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  char * pcVar2;
  char * pcVar3;
  
  if ((uint)(*((int *)GEN_TOP(((int)this + 0x14))) + *((int *)GEN_TOP(((int)this + 0x1c)))) < *((uint *)GEN_TOP(((int)this + 0x18))))
  {
    *((uint *)GEN_TOP(((int)this + 0x18))) = *((uint *)GEN_TOP(((int)this + 0x18))) - 1;
  }
  while( true ) {
    pcVar2 = *((char * PTR32 *)GEN_TOP(((int)this + 0x18)));
    if (((char *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x20))) + *((int *)GEN_TOP(((int)this + 0x1c)))))) <= pcVar2) {
      F_00e1bdb0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,0x100);
      pcVar2 = *((char * PTR32 *)GEN_TOP(((int)this + 0x18)));
      if (((char *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x20))) + *((int *)GEN_TOP(((int)this + 0x1c)))))) <= pcVar2) {
        return 2;
      }
    }
    cVar1 = *pcVar2;
    *((char * PTR32 *)GEN_TOP(((int)this + 0x18))) = pcVar2 + 1;
    if (cVar1 == '\0') {
      return 2;
    }
    if (cVar1 == '<') break;
    if ((((cVar1 == ' ') || (cVar1 == '\t')) || (cVar1 == '\r')) || (cVar1 == '\n')) {
      pcVar3 = ((char *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14))) + *((int *)GEN_TOP(((int)this + 0x1c))))));
LAB_00e257af: ;
      if (pcVar3 < pcVar2 + 1) {
        *((char * PTR32 *)GEN_TOP(((int)this + 0x18))) = pcVar2;
      }
      return 2;
    }
  }
  pcVar3 = ((char *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14))) + *((int *)GEN_TOP(((int)this + 0x1c))))));
  goto LAB_00e257af;
}

/* ref: FUN_00e257c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e257c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe257c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char * pcVar1;
  uint uVar2;
  char cVar3;
  
  do {
    pcVar1 = *((char * PTR32 *)GEN_TOP(((int)this + 0x18)));
    if (pcVar1 < ((char *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x20))) + *((int *)GEN_TOP(((int)this + 0x1c))))))) {
LAB_00e257ef: ;
      cVar3 = *pcVar1;
      *((char * PTR32 *)GEN_TOP(((int)this + 0x18))) = pcVar1 + 1;
    }
    else {
      F_00e1bdb0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,0x100);
      pcVar1 = *((char * PTR32 *)GEN_TOP(((int)this + 0x18)));
      if (pcVar1 < ((char *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x20))) + *((int *)GEN_TOP(((int)this + 0x1c)))))))
      goto LAB_00e257ef;
      cVar3 = '\0';
    }
    switch((unsigned int)(uintptr_t)(cVar3)) {
    case '\0': ;
      return 5;
    default: ;
      if ((((cVar3 < 'a') || ('z' < cVar3)) && (0x19 < (byte)(cVar3 + 0xbfU))) && (cVar3 != '_')) {
        uVar2 = F_00e25540(((char *)REFP(0x1155328)));
        return uVar2;
      }
      uVar2 = F_00e25660(this GEN_EDX_ARG);
      return uVar2;
    case '\t': ;
    case '\n': ;
    case '\r': ;
    case ' ': ;
      F_00e256d0(this GEN_EDX_ARG);
      F_00e1bc10(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
      break;
    case '\"': ;
      uVar2 = F_00e255f0(this GEN_EDX_ARG);
      return uVar2;
    case '/': ;
      return 0xb;
    case '=': ;
      return 9;
    case '>': ;
      if ((*((uint *)GEN_TOP(((int)this + 0x34))) & 2) != 0) {
        uVar2 = F_00e25540(((char *)REFP(0x115533c)));
        return uVar2;
      }
      *((uint *)GEN_TOP(((int)this + 0x34))) = *((uint *)GEN_TOP(((int)this + 0x34))) & 0xfffffffe;
      return 6;
    case '?': ;
      if ((*((byte *)GEN_TOP(((int)this + 0x34))) & 2) != 0) {
        pcVar1 = *((char * PTR32 *)GEN_TOP(((int)this + 0x18)));
        if (pcVar1 < ((char *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x20))) + *((int *)GEN_TOP(((int)this + 0x1c))))))) {
LAB_00e2584d: ;
          cVar3 = *pcVar1;
          *((char * PTR32 *)GEN_TOP(((int)this + 0x18))) = pcVar1 + 1;
          if (cVar3 == '>') {
            *((uint *)GEN_TOP(((int)this + 0x34))) = *((uint *)GEN_TOP(((int)this + 0x34))) & 0xfffffffc;
            return 7;
          }
        }
        else {
          F_00e1bdb0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,0x100);
          pcVar1 = *((char * PTR32 *)GEN_TOP(((int)this + 0x18)));
          if (pcVar1 < ((char *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x20))) + *((int *)GEN_TOP(((int)this + 0x1c)))))))
          goto LAB_00e2584d;
        }
        if ((uint)(*((int *)GEN_TOP(((int)this + 0x14))) + *((int *)GEN_TOP(((int)this + 0x1c)))) <
            *((uint *)GEN_TOP(((int)this + 0x18)))) {
          *((uint *)GEN_TOP(((int)this + 0x18))) = *((uint *)GEN_TOP(((int)this + 0x18))) - 1;
        }
      }
    }
  } while( true );
}

/* ref: FUN_00e25960 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e25960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe25960u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  char cVar1;
  uint uVar2;
  char * pcVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  pcVar3 = *((char * PTR32 *)GEN_TOP(((int)this + 0x18)));
  if (((char *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x20))) + *((int *)GEN_TOP(((int)this + 0x1c)))))) <= pcVar3) {
    F_00e1bdb0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,0x100);
    pcVar3 = *((char * PTR32 *)GEN_TOP(((int)this + 0x18)));
    if (((char *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x20))) + *((int *)GEN_TOP(((int)this + 0x1c)))))) <= pcVar3) {
      return 5;
    }
  }
  cVar1 = *pcVar3;
  *((char * PTR32 *)GEN_TOP(((int)this + 0x18))) = pcVar3 + 1;
  if (cVar1 == '\0') {
    return 5;
  }
  if (cVar1 != '<') {
    if ((((cVar1 != ' ') && (cVar1 != '\t')) && (cVar1 != '\r')) && (cVar1 != '\n')) {
      uVar2 = F_00e25740(this GEN_EDX_ARG);
      return uVar2;
    }
    uVar2 = F_00e256d0(this GEN_EDX_ARG);
    return uVar2;
  }
  cVar1 = pcVar3[1];
  if (cVar1 == '\0') {
    F_00e1bdb0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,0x100);
    cVar1 = **((char * PTR32 *)GEN_TOP(((int)this + 0x18)));
  }
  if (cVar1 != '?') {
    pcVar3 = ((char *)GEN_TOP(F_00e1bef0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,(int)&(*(undefined * PTR32 *)(gen_frame + 0x0)) + 3,&REFG(undefined, 0x1155360))));
    if (*pcVar3 == '\0') {
      *((uint *)GEN_TOP(((int)this + 0x34))) = *((uint *)GEN_TOP(((int)this + 0x34))) | 1;
      return 0;
    }
    uVar2 = F_00e25580(this GEN_EDX_ARG);
    return uVar2;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x18)));
  if ((uint)(*((int *)GEN_TOP(((int)this + 0x20))) + *((int *)GEN_TOP(((int)this + 0x1c)))) <= uVar2) {
    F_00e1bdb0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,0x100);
    uVar2 = *((uint *)GEN_TOP(((int)this + 0x18)));
    if ((uint)(*((int *)GEN_TOP(((int)this + 0x20))) + *((int *)GEN_TOP(((int)this + 0x1c)))) <= uVar2) goto LAB_00e25a1b;
  }
  *((uint *)GEN_TOP(((int)this + 0x18))) = uVar2 + 1;
LAB_00e25a1b: ;
  *((uint *)GEN_TOP(((int)this + 0x34))) = *((uint *)GEN_TOP(((int)this + 0x34))) | 3;
  return 1;
}

/* ref: FUN_00e25a70 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e25a70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe25a70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_00e1bc10(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
  if ((*((byte *)GEN_TOP(((int)this + 0x34))) & 1) != 0) {
    uVar1 = F_00e257c0(this GEN_EDX_ARG);
    return uVar1;
  }
  uVar1 = F_00e25960(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00e25ac0 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e25ac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe25ac0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  byte * pbVar2;
  
  pbVar2 = *((byte * PTR32 *)GEN_TOP(((int)this + 0x10)));
  if (((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + *((int *)GEN_TOP(((int)this + 0x14)))))) <= pbVar2) {
    F_00e1bdb0(this GEN_EDX_FWD,0x100);
    pbVar2 = *((byte * PTR32 *)GEN_TOP(((int)this + 0x10)));
    if (((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + *((int *)GEN_TOP(((int)this + 0x14)))))) <= pbVar2) {
      return 0;
    }
  }
  bVar1 = *pbVar2;
  *((byte * PTR32 *)GEN_TOP(((int)this + 0x10))) = pbVar2 + 1;
  return bVar1;
}

/* ref: FUN_00e25b00 */
GEN_LIB GEN_FRAME uint F_00e25b00(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe25b00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkXmlLexAnalyzer::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e25b30(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe25b30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00e1bd60(param_1 + 2 GEN_EDX_FWD);
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 1));
  }
  return (uint)param_1;
}

/* ref: FUN_00e25b70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e25b70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe25b70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_3;
  return (uint)this;
}

/* ref: FUN_00e25b90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e25b90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe25b90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dbd970(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e25ba0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e25ba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe25ba0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dbd970(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e25be0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e25be0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe25be0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_00e25c10 */
GEN_LIB GEN_FRAME uint F_00e25c10(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe25c10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + param_1;
}

/* ref: FUN_00e25c30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e25c30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe25c30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 0xc);
  return uVar1;
}

/* ref: FUN_00e25c50 */
GEN_LIB GEN_FRAME uint F_00e25c50(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe25c50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + param_1;
}

/* ref: FUN_00e25c90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e25c90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe25c90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dbd8b0(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e25cd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e25cd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe25cd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dbd8b0(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e25cf0 */
GEN_LIB GEN_FRAME unsigned int F_00e25cf0(GEN_P(undefined8 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined8 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe25cf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined8 * param_3 = (undefined8 *)(uintptr_t)gen_a2;)
  undefined8 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      if (puVar1 != ((undefined8 *)GEN_TOP(0x0))) {
        *puVar1 = *param_3;
        *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_3 + 1);
      }
      puVar1 = ((undefined8 *)GEN_TOP(((int)puVar1 + 0xc)));
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00e25d30 */
GEN_LIB GEN_FRAME uint F_00e25d30(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe25d30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  int iVar1;
  int iVar2;
  undefined * this;
  LPVOID pvVar3;
  uint uVar4;
  int iVar5;
  
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar4 = F_00d92490(*((undefined4 *)GEN_TOP(((int)pvVar3 + 0x2c))),param_1);
  iVar2 = *((int *)GEN_TOP(((uVar4 - 4) + param_1)));
  if (iVar2 != 0) {
    iVar1 = uVar4 + iVar2 * -8 - 4 + param_1;
    iVar5 = 0;
    if (0 < iVar2) {
      do {
        this = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar5 * 8)));
        if (this != ((undefined *)GEN_TOP(0x0))) {
          F_00dc2610(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar1 + 4 + iVar5 * 8))));
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar2);
    }
  }
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  F_00d924b0(*((undefined4 *)GEN_TOP(((int)pvVar3 + 0x2c))),param_1);
  return 0;
}

/* ref: FUN_00e25db0 */
GEN_LIB GEN_FRAME uint F_00e25db0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xe25db0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  GEN_FRAME_DECL_TOP(0xa8, 8, 4);
  undefined8 * puVar1;
  undefined4 uVar2;
  int iVar3;
  char * pcVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  LPVOID pvVar8;
  int iVar9;
  int * piVar10;
  
  (*(undefined4 *)(gen_frame + 0x7c)) = 0;
  (*(int *)(gen_frame + 0x80)) = 0;
  (*(uint *)(gen_frame + 0x84)) = 0x80000000;
  F_00da04b0(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x7c)));
  iVar7 = (int)(*(undefined4 * PTR32 *)&gen_args[1]);
  iVar9 = (*(int *)&gen_args[0]);
  (*(undefined4 *)(gen_frame + 0x38)) = 0x80000000;
  (*(undefined4 *)(gen_frame + 0x44)) = 0x80000000;
  (*(undefined4 *)(gen_frame + 0x50)) = 0x80000000;
  (*(undefined4 *)(gen_frame + 0x5c)) = 0x80000000;
  (*(uint *)(gen_frame + 0xa0)) = 0x80000000;
  (*(int *)(gen_frame + 0x30)) = 0;
  (*(int *)(gen_frame + 0x34)) = 0;
  (*(int *)(gen_frame + 0x3c)) = 0;
  (*(int *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x60)) = 0;
  (*(int *)(gen_frame + 0x98)) = 0;
  (*(uint *)(gen_frame + 0x9c)) = 0;
  (*(undefined4 *)(gen_frame + 0x70)) = 0;
  (*(undefined4 *)(gen_frame + 0x74)) = 0;
  (*(undefined4 *)(gen_frame + 0x78)) = 0xffffffff;
  F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x98)),8);
  piVar10 = ((int *)GEN_TOP(((*(int *)(gen_frame + 0x98)) + (*(uint *)(gen_frame + 0x9c)) * 8)));
  *piVar10 = iVar9;
  piVar10[1] = iVar7;
  (*(uint *)(gen_frame + 0x9c)) = (*(uint *)(gen_frame + 0x9c)) + 1;
  F_00dbd8b0(&(*(undefined4 *)(gen_frame + 0x70)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),iVar9,1);
  (*(undefined4 *)(gen_frame + 0x64)) = 0;
  (*(undefined4 *)(gen_frame + 0x68)) = 0;
  (*(undefined4 *)(gen_frame + 0x6c)) = 0xffffffff;
  (*(int *)(gen_frame + 0x8c)) = 0;
  (*(uint *)(gen_frame + 0x90)) = 0;
  (*(uint *)(gen_frame + 0x94)) = 0x80000000;
  F_00e05640(&(*(int *)&gen_args[0]) GEN_EDX_ARG,&REFG(undefined4, 0x135491c));
  F_00e05640(&(*(undefined4 * PTR32 *)&gen_args[1]) GEN_EDX_ARG,&REFG(undefined4, 0x135491c));
  F_00e26520(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[1]),&(*(int *)&gen_args[0]),(*(undefined4 *)&gen_args[5]));
  (*(undefined4 * PTR32 *)&gen_args[1]) = ((undefined4 *)GEN_TOP(0x0));
  if (0 < (int)(*(uint *)(gen_frame + 0x9c))) {
    do {
      uVar2 = *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x98)) + (int)(*(undefined4 * PTR32 *)&gen_args[1]) * 8)));
      uVar5 = *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x98)) + 4 + (int)(*(undefined4 * PTR32 *)&gen_args[1]) * 8)));
      F_00dbd8b0(&(*(undefined4 *)(gen_frame + 0x64)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),uVar2,(*(int *)(gen_frame + 0x80)));
      iVar9 = (*(int *)(gen_frame + 0x40));
      pcVar4 = ((char *)GEN_TOP(F_00d929e0(uVar5 GEN_EDX_ARG,(int)&(*(int *)&gen_args[0]) + 3)));
      if (*pcVar4 != '\0') {
        uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[3]) + 0x14))))((*(int * PTR32 *)&gen_args[3]) GEN_EDX_ARG,uVar2);
      }
      (*(int *)(gen_frame + 0x24)) = (*(int *)(gen_frame + 0x80));
      (*(undefined4 *)(gen_frame + 0x28)) = uVar2;
      uVar6 = F_00d92610(uVar5 GEN_EDX_ARG);
      (*(uint *)(gen_frame + 0x2c)) = uVar6;
      if ((*(uint *)(gen_frame + 0x90)) == ((*(uint *)(gen_frame + 0x94)) & 0x3fffffff)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x8c)),0xc);
      }
      puVar1 = ((undefined8 *)GEN_TOP(((*(int *)(gen_frame + 0x8c)) + (*(uint *)(gen_frame + 0x90)) * 0xc)));
      if (puVar1 != ((undefined8 *)GEN_TOP(0x0))) {
        *puVar1 = CONCAT44((*(undefined4 *)(gen_frame + 0x28)),(*(int *)(gen_frame + 0x24)));
        *(uint *)(puVar1 + 1) = (*(uint *)(gen_frame + 0x2c));
      }
      (*(uint *)(gen_frame + 0x90)) = (*(uint *)(gen_frame + 0x90)) + 1;
      F_00e27ef0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar2,uVar5,(*(undefined4 *)(gen_frame + 0x20)),uVar5,&(*(int *)(gen_frame + 0x30)));
      (*(int *)(gen_frame + 0x88)) = iVar9;
      if (iVar9 < (*(int *)(gen_frame + 0x40))) {
        iVar9 = iVar9 << 4;
        do {
          iVar7 = *((int *)GEN_TOP((iVar9 + 4 + (*(int *)(gen_frame + 0x3c)))));
          if ((iVar7 != 0) && (iVar3 = *((int *)GEN_TOP((iVar9 + 8 + (*(int *)(gen_frame + 0x3c))))), iVar3 != 0)) {
            if (((*(undefined * PTR32 *)&gen_args[2]) == ((undefined *)GEN_TOP(0x0))) || (uVar5 = F_00dbd970((*(undefined * PTR32 *)&gen_args[2]) GEN_EDX_ARG,iVar7,0), uVar5 == 0)) {
              uVar5 = F_00dbd970(&(*(undefined4 *)(gen_frame + 0x70)) GEN_EDX_ARG,iVar7,0);
              if (uVar5 == 0) {
                if ((*(uint *)(gen_frame + 0x9c)) == ((*(uint *)(gen_frame + 0xa0)) & 0x3fffffff)) {
                  F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x98)),8);
                }
                piVar10 = ((int *)GEN_TOP(((*(int *)(gen_frame + 0x98)) + (*(uint *)(gen_frame + 0x9c)) * 8)));
                *piVar10 = iVar7;
                piVar10[1] = iVar3;
                (*(uint *)(gen_frame + 0x9c)) = (*(uint *)(gen_frame + 0x9c)) + 1;
                F_00dbd8b0(&(*(undefined4 *)(gen_frame + 0x70)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),iVar7,1);
              }
            }
            else {
              *((uint *)GEN_TOP((iVar9 + 4 + (*(int *)(gen_frame + 0x3c))))) = uVar5;
            }
          }
          iVar7 = (*(int *)(gen_frame + 0x88)) + 1;
          iVar9 = iVar9 + 0x10;
          (*(int *)(gen_frame + 0x88)) = iVar7;
        } while (iVar7 < (*(int *)(gen_frame + 0x40)));
      }
      (*(undefined4 * PTR32 *)&gen_args[1]) = ((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[1]) + 1)));
    } while ((int)(*(undefined4 * PTR32 *)&gen_args[1]) < (int)(*(uint *)(gen_frame + 0x9c)));
  }
  iVar9 = (*(int *)(gen_frame + 0x80));
  if ((*(int *)(gen_frame + 0x80)) == 0) {
    F_00e26560(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    (*(uint *)(gen_frame + 0x90)) = 0;
    if (((*(uint *)(gen_frame + 0x94)) & 0x80000000) == 0) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x8c)),((*(uint *)(gen_frame + 0x94)) & 0x3fffffff) * 0xc);
    }
    (*(int *)(gen_frame + 0x8c)) = 0;
    (*(uint *)(gen_frame + 0x94)) = 0x80000000;
    F_00dbdb20(&(*(undefined4 *)(gen_frame + 0x64)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
    F_00dbd5e0();
    F_00dbdb20(&(*(undefined4 *)(gen_frame + 0x70)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
    F_00dbd5e0();
    (*(uint *)(gen_frame + 0x9c)) = 0;
    if (((*(uint *)(gen_frame + 0xa0)) & 0x80000000) == 0) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x98)),(*(uint *)(gen_frame + 0xa0)) * 8);
    }
    (*(int *)(gen_frame + 0x98)) = 0;
    (*(uint *)(gen_frame + 0xa0)) = 0x80000000;
    F_00e1d4f0(&(*(int *)(gen_frame + 0x30)) GEN_EDX_ARG);
    F_00d9fda0(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG);
    (*(int *)(gen_frame + 0x80)) = 0;
    if (((*(uint *)(gen_frame + 0x84)) & 0x80000000) == 0) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 *)(gen_frame + 0x7c)),(*(uint *)(gen_frame + 0x84)) & 0x3fffffff);
    }
    return 0;
  }
  iVar7 = 4;
  if ((*(int * PTR32 *)&gen_args[4]) != ((int *)GEN_TOP(0x0))) {
    iVar7 = (*(uint *)(gen_frame + 0x90)) * 8 + 4;
  }
  pvVar8 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar5 = F_00d92460(*((undefined4 *)GEN_TOP(((int)pvVar8 + 0x2c))),iVar9 + iVar7);
  (*(undefined4 * PTR32 *)&gen_args[1]) = ((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x80)) + uVar5)));
  F_00da1010(uVar5,(*(undefined4 *)(gen_frame + 0x7c)),(*(int *)(gen_frame + 0x80)));
  iVar9 = 0;
  if (0 < (*(int *)(gen_frame + 0x34))) {
    do {
      iVar3 = iVar9 * 8;
      iVar7 = iVar9 * 8;
      iVar9 = iVar9 + 1;
      *((uint *)GEN_TOP((uVar5 + *((int *)GEN_TOP(((*(int *)(gen_frame + 0x30)) + iVar7)))))) = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x30)) + 4 + iVar3))) + uVar5;
    } while (iVar9 < (*(int *)(gen_frame + 0x34)));
  }
  (*(int *)(gen_frame + 0x88)) = 0;
  if (0 < (*(int *)(gen_frame + 0x40))) {
    (*(int *)&gen_args[0]) = 0;
    do {
      iVar9 = *((int *)GEN_TOP(((*(int *)&gen_args[0]) + 4 + (*(int *)(gen_frame + 0x3c)))));
      uVar6 = F_00dbd970(&(*(undefined4 *)(gen_frame + 0x64)) GEN_EDX_ARG,iVar9,0xffffffff);
      if (uVar6 != 0xffffffff) {
        iVar9 = uVar6 + uVar5;
      }
      *((int *)GEN_TOP((uVar5 + *((int *)GEN_TOP(((*(int *)&gen_args[0]) + (*(int *)(gen_frame + 0x3c)))))))) = iVar9;
      iVar9 = (*(int *)(gen_frame + 0x88)) + 1;
      (*(int *)&gen_args[0]) = (*(int *)&gen_args[0]) + 0x10;
      (*(int *)(gen_frame + 0x88)) = iVar9;
    } while (iVar9 < (*(int *)(gen_frame + 0x40)));
  }
  if (((*(undefined * PTR32 *)&gen_args[2]) != ((undefined *)GEN_TOP(0x0))) && (0 < (int)(*(uint *)(gen_frame + 0x90)))) {
    iVar7 = 0;
    iVar9 = 0;
    do {
      F_00dbd8b0((*(undefined * PTR32 *)&gen_args[2]) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP((iVar7 + 4 + (*(int *)(gen_frame + 0x8c))))),
                   *((int *)GEN_TOP((iVar7 + (*(int *)(gen_frame + 0x8c))))) + uVar5);
      iVar9 = iVar9 + 1;
      iVar7 = iVar7 + 0xc;
    } while (iVar9 < (int)(*(uint *)(gen_frame + 0x90)));
  }
  iVar9 = 0;
  if ((*(int * PTR32 *)&gen_args[4]) == ((int *)GEN_TOP(0x0))) {
    *(*(undefined4 * PTR32 *)&gen_args[1]) = 0;
  }
  else {
    if (0 < (int)(*(uint *)(gen_frame + 0x90))) {
      (*(int *)&gen_args[0]) = 0;
      do {
        piVar10 = ((int *)GEN_TOP(((*(int *)&gen_args[0]) + (*(int *)(gen_frame + 0x8c)))));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[4]) + 0x10))))((*(int * PTR32 *)&gen_args[4]) GEN_EDX_ARG,*piVar10 + uVar5,piVar10[2]);
        uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[4]) + 0x1c))))((*(int * PTR32 *)&gen_args[4]) GEN_EDX_ARG,piVar10[2]);
        (*(int *)&gen_args[0]) = (*(int *)&gen_args[0]) + 0xc;
        (*(undefined4 * PTR32 *)&gen_args[1])[iVar9 * 2] = uVar6;
        (*(undefined4 * PTR32 *)&gen_args[1])[iVar9 * 2 + 1] = *piVar10 + uVar5;
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)(*(uint *)(gen_frame + 0x90)));
    }
    (*(undefined4 * PTR32 *)&gen_args[1])[(*(uint *)(gen_frame + 0x90)) * 2] = (*(uint *)(gen_frame + 0x90));
  }
  F_00e26560(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  (*(uint *)(gen_frame + 0x90)) = 0;
  if (((*(uint *)(gen_frame + 0x94)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x8c)),((*(uint *)(gen_frame + 0x94)) & 0x3fffffff) * 0xc);
  }
  (*(int *)(gen_frame + 0x8c)) = 0;
  (*(uint *)(gen_frame + 0x94)) = 0x80000000;
  F_00dbdb20(&(*(undefined4 *)(gen_frame + 0x64)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
  F_00dbdb20(&(*(undefined4 *)(gen_frame + 0x70)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
  (*(uint *)(gen_frame + 0x9c)) = 0;
  if (((*(uint *)(gen_frame + 0xa0)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x98)),(*(uint *)(gen_frame + 0xa0)) * 8);
  }
  (*(int *)(gen_frame + 0x98)) = 0;
  (*(uint *)(gen_frame + 0xa0)) = 0x80000000;
  F_00e1d4f0(&(*(int *)(gen_frame + 0x30)) GEN_EDX_ARG);
  F_00d9fda0(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG);
  (*(int *)(gen_frame + 0x80)) = 0;
  if (((*(uint *)(gen_frame + 0x84)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 *)(gen_frame + 0x7c)),(*(uint *)(gen_frame + 0x84)) & 0x3fffffff)
    ;
  }
  return uVar5;
}

/* ref: FUN_00e26340 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e26340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined8 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe26340u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a2;)
  undefined8 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,0xc);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 0xc)));
  if (puVar1 != ((undefined8 *)GEN_TOP(0x0))) {
    *puVar1 = *param_2;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_2 + 1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00e26390 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e26390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe26390u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e263d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e263d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined8 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe263d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a1;)
  undefined8 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,0xc);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 0xc)));
  if (puVar1 != ((undefined8 *)GEN_TOP(0x0))) {
    *puVar1 = *param_1;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00e26420 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e26420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe26420u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e26460 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e26460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe26460u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e264a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e264a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xe264a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_3;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_4;
  return (uint)this;
}

/* ref: FUN_00e264c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e264c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe264c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  return (uint)this;
}

/* ref: FUN_00e264e0 */
GEN_LIB GEN_FRAME uint F_00e264e0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe264e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  if ((param_2 <= param_1) && (param_1 < param_3)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00e26500 */
GEN_LIB GEN_NOFRAME uint F_00e26500(GEN_P(undefined4 in_esi, unsigned int gen_a0))
{
  GEN_ENTER(0xe26500u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 in_esi = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00da5ff0(in_esi GEN_EDX_ARG);
  if (uVar1 != 0) {
    uVar1 = F_00da5ff0(in_esi GEN_EDX_ARG);
    return uVar1;
  }
  return 1;
}

/* ref: FUN_00e26520 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e26520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe26520u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x1155368));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = *param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_3;
  *((bool *)GEN_TOP(((int)this + 0x14))) = *((char *)GEN_TOP(((int)this + 9))) != *((char *)GEN_TOP(((int)this + 0xd)));
  return (uint)this;
}

/* ref: FUN_00e26560 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e26560(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe26560u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return;
}

/* ref: FUN_00e26570 */
GEN_LIB GEN_FRAME uint GEN_FASTCALL F_00e26570(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xe26570u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0x210, 0, 4);
  code * pcVar1;
  uint uVar2;
  
  switch((unsigned int)(uintptr_t)(param_4)) {
  case 0xc: ;
  case 0xd: ;
  case 0xe: ;
  case 0xf: ;
  case 0x10: ;
  case 0x11: ;
  case 0x12: ;
    param_1 = param_1 * (param_2 >> 2);
    param_2 = 4;
  case 1: ;
  case 2: ;
  case 3: ;
  case 4: ;
  case 5: ;
  case 6: ;
  case 7: ;
  case 8: ;
  case 9: ;
  case 10: ;
  case 0xb: ;
  case 0x20: ;
    uVar2 = F_00da6970(param_3 GEN_EDX_ARG,param_5,param_2,param_1);
    return uVar2;
  }
  F_00da0a80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
  F_00d9fe80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,((char *)REFP(0x115539c)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                    (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,3,0x747e1e03,((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x1155380)),0x101);
  if (uVar2 != 0) {
    pcVar1 = ((code *)GEN_TOP(swi(3)));
    uVar2 = (*pcVar1)();
    return uVar2;
  }
  uVar2 = F_00d9fda0(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00e26640 */
GEN_LIB GEN_FRAME uint F_00e26640(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xe26640u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  undefined * this;
  uint uVar1;
  int iVar2;
  uint local_8;
  
  local_8 = F_00d92b10(param_1 GEN_EDX_ARG,param_3,param_4);
  if (((*((char *)GEN_TOP((param_2 + 0xc))) == '\x19') &&
      (this = ((undefined *)GEN_TOP(F_00da5fd0(param_2 GEN_EDX_ARG))), this != ((undefined *)GEN_TOP(0x0)))) &&
     (param_2 = F_00e26500(param_2), 0 < (int)param_2)) {
    do {
      iVar2 = 0;
      uVar1 = F_00d927e0(this GEN_EDX_ARG);
      if (0 < (int)uVar1) {
        do {
          uVar1 = F_00d92800(this GEN_EDX_ARG,iVar2);
          uVar1 = F_00e26640(this,uVar1,iVar2,param_4);
          if (uVar1 == 0) {
            local_8 = 0;
          }
          iVar2 = iVar2 + 1;
          uVar1 = F_00d927e0(this GEN_EDX_ARG);
        } while (iVar2 < (int)uVar1);
      }
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  return local_8;
}

/* ref: hkObjectCopier::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e266d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe266d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  if ((*((char *)GEN_TOP((param_1 + 0xc))) == *((char *)GEN_TOP((param_2 + 0xc)))) &&
     ((*((char *)GEN_TOP((param_1 + 0xd))) == *((char *)GEN_TOP((param_2 + 0xd))) || (*((char *)GEN_TOP((param_1 + 0xc))) == '\x18'))
     )) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00e26700 */
GEN_LIB GEN_FRAME uint F_00e26700(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xe26700u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  uint uVar1;
  LPVOID pvVar2;
  int iVar3;
  uint uVar4;
  
  if (param_2 == 4) {
    uVar1 = F_00da6970(param_1 GEN_EDX_ARG,param_4,4,param_3);
    return uVar1;
  }
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = *((uint *)GEN_TOP(((int)pvVar2 + 0xc)));
  uVar4 = param_3 * 8 + 0x7fU & 0xffffff80;
  if ((*((int *)GEN_TOP(((int)pvVar2 + 8))) < (int)uVar4) || (*((uint *)GEN_TOP(((int)pvVar2 + 0x10))) < uVar1 + uVar4)) {
    uVar1 = F_00d94390(pvVar2 GEN_EDX_ARG,uVar4);
  }
  else {
    *((uint *)GEN_TOP(((int)pvVar2 + 0xc))) = uVar1 + uVar4;
  }
  iVar3 = 0;
  if (0 < param_3) {
    do {
      *((undefined4 *)GEN_TOP((uVar1 + iVar3 * 8))) = *((undefined4 *)GEN_TOP((param_4 + iVar3 * 4)));
      *((undefined4 *)GEN_TOP((uVar1 + 4 + iVar3 * 8))) = 0;
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_3);
  }
  F_00da6970(param_1 GEN_EDX_ARG,uVar1,param_2,param_3);
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if ((((int)uVar4 <= *((int *)GEN_TOP(((int)pvVar2 + 8)))) && (uVar4 + uVar1 == *((int *)GEN_TOP(((int)pvVar2 + 0xc)))))
     && (*((uint *)GEN_TOP(((int)pvVar2 + 0x14))) != uVar1)) {
    *((uint *)GEN_TOP(((int)pvVar2 + 0xc))) = uVar1;
    return (uint)pvVar2;
  }
  uVar1 = F_00d945c0(pvVar2 GEN_EDX_ARG,uVar1,uVar4);
  return uVar1;
}

/* ref: FUN_00e267c0 */
GEN_LIB GEN_FRAME uint F_00e267c0(GEN_P(uint in_eax, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe267c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint in_eax = (uint)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  uint uVar1;
  LPVOID pvVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x20))))(param_2 GEN_EDX_ARG);
  (*(uint *)(gen_frame + 0x0)) = 0;
  (*(uint *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0x80000000;
  (*(uint *)(gen_frame + 0x10)) = in_eax;
  if (in_eax == 0) {
    uVar4 = 0;
  }
  else {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar4 = *((uint *)GEN_TOP(((int)pvVar2 + 0xc)));
    uVar3 = in_eax + 0x7f & 0xffffff80;
    if ((*((int *)GEN_TOP(((int)pvVar2 + 8))) < (int)uVar3) || (*((uint *)GEN_TOP(((int)pvVar2 + 0x10))) < uVar4 + uVar3))
    {
      uVar4 = F_00d94390(pvVar2 GEN_EDX_ARG,uVar3);
    }
    else {
      *((uint *)GEN_TOP(((int)pvVar2 + 0xc))) = uVar4 + uVar3;
    }
  }
  (*(uint *)(gen_frame + 0x8)) = in_eax | 0x80000000;
  (*(uint *)(gen_frame + 0x0)) = uVar4;
  (*(uint *)(gen_frame + 0xc)) = uVar4;
  if ((int)(in_eax & 0x3fffffff) < (int)in_eax) {
    uVar4 = (in_eax & 0x3fffffff) * 2;
    if ((int)uVar4 <= (int)in_eax) {
      uVar4 = in_eax;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(uint *)(gen_frame + 0x0)),uVar4,1);
  }
  if (0 < (int)(in_eax - (*(uint *)(gen_frame + 0x4)))) {
    F_00c48350(((undefined *)GEN_TOP(((*(uint *)(gen_frame + 0x4)) + (*(uint *)(gen_frame + 0x0))))),0,in_eax - (*(uint *)(gen_frame + 0x4)));
  }
  uVar1 = in_eax - 1 & uVar1;
  (*(uint *)(gen_frame + 0x4)) = in_eax;
  if (uVar1 != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x10))))(param_2 GEN_EDX_ARG,(*(uint *)(gen_frame + 0x0)),in_eax - uVar1);
  }
  uVar4 = (*(uint *)(gen_frame + 0x10));
  uVar1 = (*(uint *)(gen_frame + 0xc));
  if ((*(uint *)(gen_frame + 0xc)) == (*(uint *)(gen_frame + 0x0))) {
    (*(uint *)(gen_frame + 0x4)) = 0;
  }
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar4 = uVar4 + 0x7f & 0xffffff80;
  if (((*((int *)GEN_TOP(((int)pvVar2 + 8))) < (int)uVar4) || (uVar4 + uVar1 != *((int *)GEN_TOP(((int)pvVar2 + 0xc)))))
     || (*((uint *)GEN_TOP(((int)pvVar2 + 0x14))) == uVar1)) {
    F_00d945c0(pvVar2 GEN_EDX_ARG,uVar1,uVar4);
  }
  else {
    *((uint *)GEN_TOP(((int)pvVar2 + 0xc))) = uVar1;
  }
  (*(uint *)(gen_frame + 0x4)) = 0;
  uVar1 = (*(uint *)(gen_frame + 0x8));
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) & 0x3fffffff);
  }
  return uVar1;
}

/* ref: FUN_00e26910 */
GEN_LIB GEN_FRAME uint F_00e26910(GEN_P(uint in_eax, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe26910u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint in_eax = (uint)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  LPVOID pvVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  (*(uint *)(gen_frame + 0x0)) = 0;
  (*(uint *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0x80000000;
  (*(uint *)(gen_frame + 0x10)) = in_eax;
  if (in_eax == 0) {
    uVar2 = 0;
  }
  else {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar2 = *((uint *)GEN_TOP(((int)pvVar1 + 0xc)));
    uVar4 = in_eax + 0x7f & 0xffffff80;
    if ((*((int *)GEN_TOP(((int)pvVar1 + 8))) < (int)uVar4) || (*((uint *)GEN_TOP(((int)pvVar1 + 0x10))) < uVar2 + uVar4))
    {
      uVar2 = F_00d94390(pvVar1 GEN_EDX_ARG,uVar4);
    }
    else {
      *((uint *)GEN_TOP(((int)pvVar1 + 0xc))) = uVar2 + uVar4;
    }
  }
  (*(uint *)(gen_frame + 0x8)) = in_eax | 0x80000000;
  (*(uint *)(gen_frame + 0x0)) = uVar2;
  (*(uint *)(gen_frame + 0xc)) = uVar2;
  if ((int)(in_eax & 0x3fffffff) < (int)in_eax) {
    uVar2 = (in_eax & 0x3fffffff) * 2;
    if ((int)uVar2 <= (int)in_eax) {
      uVar2 = in_eax;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(uint *)(gen_frame + 0x0)),uVar2,1);
  }
  if (0 < (int)(in_eax - (*(uint *)(gen_frame + 0x4)))) {
    F_00c48350(((undefined *)GEN_TOP(((*(uint *)(gen_frame + 0x4)) + (*(uint *)(gen_frame + 0x0))))),0,in_eax - (*(uint *)(gen_frame + 0x4)));
  }
  (*(uint *)(gen_frame + 0x4)) = in_eax;
  uVar3 = F_00da6ae0(param_2 GEN_EDX_ARG,(*(uint *)(gen_frame + 0x0)),in_eax);
  uVar4 = (*(uint *)(gen_frame + 0x10));
  uVar2 = (*(uint *)(gen_frame + 0xc));
  if ((*(uint *)(gen_frame + 0xc)) == (*(uint *)(gen_frame + 0x0))) {
    (*(uint *)(gen_frame + 0x4)) = 0;
  }
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar4 = uVar4 + 0x7f & 0xffffff80;
  if (((*((int *)GEN_TOP(((int)pvVar1 + 8))) < (int)uVar4) || (uVar4 + uVar2 != *((int *)GEN_TOP(((int)pvVar1 + 0xc)))))
     || (*((uint *)GEN_TOP(((int)pvVar1 + 0x14))) == uVar2)) {
    F_00d945c0(pvVar1 GEN_EDX_ARG,uVar2,uVar4);
  }
  else {
    *((uint *)GEN_TOP(((int)pvVar1 + 0xc))) = uVar2;
  }
  (*(uint *)(gen_frame + 0x4)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) & 0x3fffffff)
    ;
  }
  return uVar3;
}

/* ref: FUN_00e26a50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e26a50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe26a50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL(0x210, 0);
  char cVar1;
  code * pcVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP(((int)param_2 + 0xc)));
  uVar4 = 0;
  switch((unsigned int)(uintptr_t)(cVar1)) {
  case '\x01': ;
  case '\x02': ;
  case '\x03': ;
  case '\x04': ;
  case '\x05': ;
  case '\x06': ;
  case '\a': ;
  case '\b': ;
  case '\t': ;
  case '\n': ;
  case '\v': ;
  case '\f': ;
  case '\r': ;
  case '\x0e': ;
  case '\x0f': ;
  case '\x10': ;
  case '\x11': ;
  case '\x12': ;
  case '\x18': ;
  case '\x1f': ;
  case ' ': ;
    uVar4 = F_00da6030(param_2 GEN_EDX_FWD);
    break;
  default: ;
    F_00da0a80(&(*(undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
    F_00d9fe80(&(*(undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,((char *)REFP(0x11553dc)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                      (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,3,0x5ef4e5a4,((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x1155380)),0xb0);
    if (uVar3 != 0) {
      pcVar2 = ((code *)GEN_TOP(swi(3)));
      uVar4 = (*pcVar2)();
      return uVar4;
    }
    F_00d9fda0(&(*(undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG);
    break;
  case '\x14': ;
  case '\x15': ;
  case '\x1e': ;
  case '!': ;
    uVar4 = F_00e26500(param_2);
    uVar4 = uVar4 * *((byte *)GEN_TOP(((int)this + 0xc)));
    break;
  case '\x16': ;
  case '\x17': ;
  case '\x1a': ;
  case '\x1b': ;
    if (cVar1 == '\x1b') {
      uVar4 = (uint)*((byte *)GEN_TOP(((int)this + 0xc)));
    }
    uVar4 = uVar4 + 4 + (uint)*((byte *)GEN_TOP(((int)this + 0xc)));
    if (cVar1 == '\x16') {
      (*(undefined1 *)(gen_frame + 0x200)) = 0;
      (*(undefined2 *)(gen_frame + 0x209)) = 0;
      (*(undefined1 *)(gen_frame + 0x20b)) = 0;
      (*(undefined8 *)(gen_frame + 0x201)) = 0;
      F_00da6ae0(param_1 GEN_EDX_ARG,&(*(undefined1 *)(gen_frame + 0x200)),uVar4);
      uVar4 = F_00da6c70(param_1 GEN_EDX_ARG,0x80000000);
      return uVar4;
    }
    break;
  case '\x19': ;
    uVar4 = F_00da5fc0(param_2 GEN_EDX_ARG);
    uVar4 = F_00d929c0(uVar4 GEN_EDX_ARG);
    uVar3 = F_00e26500(param_2);
    uVar4 = uVar4 * uVar3;
    break;
  case '\x1c': ;
    uVar4 = F_00e26500(param_2);
    uVar4 = uVar4 * *((byte *)GEN_TOP(((int)this + 0xc))) * 2;
  }
  uVar4 = F_00e26910(uVar4,param_1);
  return uVar4;
}

/* ref: FUN_00e26bd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e26bd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2), GEN_P(undefined * param_3, unsigned int gen_a3), GEN_P(undefined * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xe26bd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined * param_4 = (undefined *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL_TOP(0x2a8, 8, 4);
  byte bVar1;
  ushort uVar2;
  code * pcVar3;
  int * piVar4;
  uint uVar5;
  undefined4 * this_00;
  undefined4 * puVar6;
  undefined * pvVar7;
  ushort * puVar8;
  undefined8 * puVar9;
  undefined * pvVar10;
  uint uVar11;
  uint uVar12;
  ushort * puVar13;
  int iVar14;
  undefined * puVar15;
  undefined4 uVar16;
  undefined * puVar17;
  uint uVar18;
  
  (*(int * PTR32 *)(gen_frame + 0x294)) = this;
  piVar4 = ((int *)GEN_TOP(F_00da6b30(param_3 GEN_EDX_FWD)));
  (*(int * PTR32 *)(gen_frame + 0x254)) = piVar4;
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x20))))(piVar4 GEN_EDX_ARG);
  (*(uint *)(gen_frame + 0x260)) = uVar5;
  (*(int *)(gen_frame + 0x27c)) = 0;
  (*(uint *)(gen_frame + 0x280)) = 0;
  (*(uint *)(gen_frame + 0x284)) = 0x80000000;
  (*(int *)(gen_frame + 0x28c)) = 0;
  uVar5 = F_00d927e0(param_4 GEN_EDX_ARG);
  if (0 < (int)uVar5) {
    do {
      this_00 = ((undefined4 *)GEN_TOP(F_00d92800(param_4 GEN_EDX_ARG,(*(int *)(gen_frame + 0x28c)))));
      (*(undefined * PTR32 *)(gen_frame + 0x298)) = ((undefined *)GEN_TOP((uint)*((ushort *)GEN_TOP(((int)this_00 + 0x12)))));
      uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x20))))(piVar4 GEN_EDX_ARG);
      F_00e26910((int)(*(undefined * PTR32 *)(gen_frame + 0x298)) + ((*(uint *)(gen_frame + 0x260)) - uVar5),param_3);
      if ((*(ushort *)(this_00 + 4) & 0x400) == 0) {
LAB_00e26c88: ;
        puVar6 = ((undefined4 *)GEN_TOP(F_00d928d0(param_2 GEN_EDX_ARG,*this_00)));
        (*(undefined4 * PTR32 *)(gen_frame + 0x2a0)) = puVar6;
        if ((puVar6 == ((undefined4 *)GEN_TOP(0x0))) ||
           (uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x294)) + 0x10))))((*(int * PTR32 *)(gen_frame + 0x294)) GEN_EDX_ARG,puVar6,this_00), uVar5 == 0)) {
LAB_00e2729a: ;
          F_00e26640(param_4,this_00,(*(int *)(gen_frame + 0x28c)),piVar4);
        }
        else {
          puVar13 = ((ushort *)GEN_TOP(((uint)*((ushort *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x2a0)) + 0x12))) + param_1)));
          switch((unsigned int)(uintptr_t)(*(char *)(this_00 + 3))) {
          case '\x01': ;
          case '\x02': ;
          case '\x03': ;
          case '\x04': ;
          case '\x05': ;
          case '\x06': ;
          case '\a': ;
          case '\b': ;
          case '\t': ;
          case '\n': ;
          case '\v': ;
          case '\f': ;
          case '\r': ;
          case '\x0e': ;
          case '\x0f': ;
          case '\x10': ;
          case '\x11': ;
          case '\x12': ;
          case ' ': ;
            pvVar7 = ((undefined *)GEN_TOP(F_00e26500((*(undefined4 * PTR32 *)(gen_frame + 0x2a0)))));
            (*(undefined * PTR32 *)(gen_frame + 0x298)) = pvVar7;
            uVar5 = F_00e26500(this_00);
            pvVar7 = ((undefined *)GEN_TOP(F_00da6030(this_00 GEN_EDX_ARG)));
            (*(undefined * PTR32 *)(gen_frame + 0x290)) = pvVar7;
            uVar11 = F_00e28010((*(undefined * PTR32 *)(gen_frame + 0x298)),uVar5);
            F_00e26570(uVar11,(int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x290))) / (int)uVar5,param_3,(uint)*(byte *)(this_00 + 3),
                         puVar13);
            break;
          case '\x13': ;
            break;
          case '\x14': ;
          case '\x15': ;
          case '\x1d': ;
          case '!': ;
            uVar5 = F_00e26500(this_00);
            piVar4 = (*(int * PTR32 *)(gen_frame + 0x294));
            (*(undefined8 *)(gen_frame + 0x220)) = 0;
            if (0 < (int)uVar5) {
              do {
                F_00da6ae0(param_3 GEN_EDX_ARG,&(*(undefined8 *)(gen_frame + 0x220)),(uint)*(byte *)(piVar4 + 3));
                uVar5 = uVar5 - 1;
              } while (uVar5 != 0);
            }
            break;
          case '\x16': ;
          case '\x1a': ;
          case '\x1b': ;
            if (*(char *)(this_00 + 3) == '\x1b') {
              bVar1 = *(byte *)((*(int * PTR32 *)(gen_frame + 0x294)) + 3);
              (*(undefined8 *)(gen_frame + 0x210)) = 0;
              F_00da6970(param_3 GEN_EDX_ARG,&(*(undefined8 *)(gen_frame + 0x210)),(uint)bVar1,1);
              if (*(int *)puVar13 == 0) {
                F_00da0a80(((undefined1 *)(gen_frame + 0x234)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
                uVar16 = *(*(undefined4 * PTR32 *)(gen_frame + 0x2a0));
                puVar17 = &REFG(undefined, 0x1118a34);
                puVar15 = &REFG(undefined, 0x112652c);
                uVar5 = F_00d92610(param_2 GEN_EDX_ARG);
                pvVar7 = ((undefined *)GEN_TOP(F_00d9fe80(((undefined1 *)(gen_frame + 0x234)) GEN_EDX_ARG,
                                              ((char *)REFP(0x1155434)))));
                pvVar7 = ((undefined *)GEN_TOP(F_00d9fe80(pvVar7 GEN_EDX_ARG,uVar5)));
                pvVar7 = ((undefined *)GEN_TOP(F_00d9fe80(pvVar7 GEN_EDX_ARG,puVar15)));
                pvVar7 = ((undefined *)GEN_TOP(F_00d9fe80(pvVar7 GEN_EDX_ARG,uVar16)));
                F_00d9fe80(pvVar7 GEN_EDX_ARG,puVar17);
                ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                          (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,1,0xabba5a55,((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x1155380)),0x1cb);
                F_00d9fda0(((undefined1 *)(gen_frame + 0x234)) GEN_EDX_ARG);
                uVar5 = 0;
              }
              else {
                uVar5 = *(uint *)(puVar13 + 4);
              }
            }
            else if (*((char *)GEN_TOP(((int)this_00 + 0xd))) == '\0') {
              uVar5 = 0;
            }
            else {
              uVar5 = *(uint *)(puVar13 + 2);
            }
            bVar1 = *(byte *)((*(int * PTR32 *)(gen_frame + 0x294)) + 3);
            (*(undefined8 *)(gen_frame + 0x218)) = 0;
            F_00da6970(param_3 GEN_EDX_ARG,&(*(undefined8 *)(gen_frame + 0x218)),(uint)bVar1,1);
            F_00da6c50(param_3 GEN_EDX_ARG,uVar5);
            if (*(char *)(this_00 + 3) == '\x16') {
              F_00da6c50(param_3 GEN_EDX_ARG,uVar5 | 0x80000000);
            }
            break;
          default: ;
            F_00da0a80(((undefined1 *)(gen_frame + 0x228)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
            F_00d9fe80(((undefined1 *)(gen_frame + 0x228)) GEN_EDX_ARG,((char *)REFP(0x1155400)));
            uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                              (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,3,0x641e3e03,((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x1155380)),
                               0x245);
            if (uVar5 != 0) {
              pcVar3 = ((code *)GEN_TOP(swi(3)));
              uVar5 = (*pcVar3)();
              return uVar5;
            }
            F_00d9fda0(((undefined1 *)(gen_frame + 0x228)) GEN_EDX_ARG);
            break;
          case '\x18': ;
            if (((*(undefined4 * PTR32 *)(gen_frame + 0x2a0))[2] != 0) && (this_00[2] != 0)) {
              puVar8 = ((ushort *)GEN_TOP(F_00e26500((*(undefined4 * PTR32 *)(gen_frame + 0x2a0)))));
              (*(ushort * PTR32 *)(gen_frame + 0x29c)) = puVar8;
              uVar5 = F_00e26500(this_00);
              puVar8 = ((ushort *)GEN_TOP(F_00e28010((*(ushort * PTR32 *)(gen_frame + 0x29c)),uVar5)));
              pvVar7 = ((undefined *)GEN_TOP(F_00da5fe0((*(undefined4 * PTR32 *)(gen_frame + 0x2a0)) GEN_EDX_ARG)));
              (*(undefined * PTR32 *)(gen_frame + 0x298)) = pvVar7;
              pvVar7 = ((undefined *)GEN_TOP(F_00da5fe0(this_00 GEN_EDX_ARG)));
              (*(undefined * PTR32 *)(gen_frame + 0x290)) = pvVar7;
              uVar5 = F_00da6030((*(undefined4 * PTR32 *)(gen_frame + 0x2a0)) GEN_EDX_ARG);
              pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x298));
              iVar14 = (int)uVar5 / (int)(*(ushort * PTR32 *)(gen_frame + 0x29c));
              if (0 < (int)puVar8) {
                (*(ushort * PTR32 *)(gen_frame + 0x29c)) = puVar8;
                do {
                  uVar5 = F_00da6230((*(undefined4 * PTR32 *)(gen_frame + 0x2a0)) GEN_EDX_ARG,puVar13);
                  (*(undefined4 *)(gen_frame + 0x278)) = 0;
                  uVar5 = F_00da6fa0(pvVar7 GEN_EDX_ARG,uVar5,&(*(undefined4 *)(gen_frame + 0x250)));
                  if (uVar5 == 0) {
                    F_00da6fe0((*(undefined * PTR32 *)(gen_frame + 0x290)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x250)),&(*(undefined4 *)(gen_frame + 0x278)));
                  }
                  if (iVar14 == 1) {
                    F_00da6920(param_3 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x278)));
                  }
                  else if (iVar14 == 2) {
                    F_00da6c10(param_3 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x278)));
                  }
                  else if (iVar14 == 4) {
                    F_00da6c50(param_3 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x278)));
                  }
                  puVar13 = ((ushort *)GEN_TOP(((int)puVar13 + iVar14)));
                  puVar8 = ((ushort *)GEN_TOP(((int)(*(ushort * PTR32 *)(gen_frame + 0x29c)) - 1)));
                  (*(ushort * PTR32 *)(gen_frame + 0x29c)) = puVar8;
                } while (puVar8 != ((ushort *)GEN_TOP(0x0)));
              }
            }
            break;
          case '\x19': ;
            pvVar7 = ((undefined *)GEN_TOP(F_00da5fd0((*(undefined4 * PTR32 *)(gen_frame + 0x2a0)) GEN_EDX_ARG)));
            (*(undefined * PTR32 *)(gen_frame + 0x298)) = pvVar7;
            pvVar10 = ((undefined *)GEN_TOP(F_00da5fd0(this_00 GEN_EDX_ARG)));
            (*(undefined * PTR32 *)(gen_frame + 0x290)) = pvVar10;
            if ((pvVar7 != ((undefined *)GEN_TOP(0x0))) && (pvVar10 != ((undefined *)GEN_TOP(0x0)))) {
              uVar5 = F_00e26500(this_00);
              uVar11 = F_00e26500((*(undefined4 * PTR32 *)(gen_frame + 0x2a0)));
              pvVar10 = ((undefined *)GEN_TOP(F_00e28010(uVar11,uVar5)));
              pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x298));
              iVar14 = 0;
              (*(undefined * PTR32 *)(gen_frame + 0x270)) = pvVar10;
              if (0 < (int)pvVar10) {
                do {
                  uVar5 = F_00d929c0(pvVar7 GEN_EDX_ARG);
                  F_00e26bd0((*(int * PTR32 *)(gen_frame + 0x294)) GEN_EDX_ARG,(int)(uVar5 * iVar14 + (int)puVar13),pvVar7,param_3,(*(undefined * PTR32 *)(gen_frame + 0x290))
                              );
                  iVar14 = iVar14 + 1;
                } while (iVar14 < (int)(*(undefined * PTR32 *)(gen_frame + 0x270)));
              }
            }
            break;
          case '\x1c': ;
            (*(undefined8 *)(gen_frame + 0x200)) = 0;
            (*(undefined8 *)(gen_frame + 0x208)) = 0;
            uVar5 = F_00e26500(this_00);
            uVar11 = F_00e26500((*(undefined4 * PTR32 *)(gen_frame + 0x2a0)));
            uVar5 = F_00e28010(uVar11,uVar5);
            piVar4 = (*(int * PTR32 *)(gen_frame + 0x294));
            if (0 < (int)uVar5) {
              do {
                F_00da6970(param_3 GEN_EDX_ARG,&(*(undefined8 *)(gen_frame + 0x200)),(uint)*(byte *)(piVar4 + 3),2);
                uVar5 = uVar5 - 1;
              } while (uVar5 != 0);
            }
            break;
          case '\x1e': ;
            pvVar7 = ((undefined *)GEN_TOP(F_00e26500((*(undefined4 * PTR32 *)(gen_frame + 0x2a0)))));
            (*(undefined * PTR32 *)(gen_frame + 0x298)) = pvVar7;
            uVar5 = F_00e26500(this_00);
            uVar5 = F_00e28010((*(undefined * PTR32 *)(gen_frame + 0x298)),uVar5);
            F_00e26700(param_3,(uint)*(byte *)((*(int * PTR32 *)(gen_frame + 0x294)) + 3),uVar5,puVar13);
            break;
          case '\x1f': ;
            if (((*(undefined4 * PTR32 *)(gen_frame + 0x2a0))[2] != 0) && (this_00[2] != 0)) {
              uVar5 = F_00e26500((*(undefined4 * PTR32 *)(gen_frame + 0x2a0)));
              (*(ushort * PTR32 *)(gen_frame + 0x29c)) = ((ushort *)GEN_TOP(uVar5));
              uVar5 = F_00e26500(this_00);
              pvVar7 = ((undefined *)GEN_TOP(F_00e28010((*(ushort * PTR32 *)(gen_frame + 0x29c)),uVar5)));
              pvVar10 = ((undefined *)GEN_TOP(F_00da5fe0((*(undefined4 * PTR32 *)(gen_frame + 0x2a0)) GEN_EDX_ARG)));
              (*(undefined * PTR32 *)(gen_frame + 0x25c)) = pvVar10;
              pvVar10 = ((undefined *)GEN_TOP(F_00da5fe0(this_00 GEN_EDX_ARG)));
              (*(undefined * PTR32 *)(gen_frame + 0x270)) = pvVar10;
              uVar5 = F_00da6030((*(undefined4 * PTR32 *)(gen_frame + 0x2a0)) GEN_EDX_ARG);
              uVar5 = (int)uVar5 / (int)(*(ushort * PTR32 *)(gen_frame + 0x29c));
              (*(ushort * PTR32 *)(gen_frame + 0x29c)) = puVar13;
              (*(uint *)(gen_frame + 0x288)) = uVar5;
              if (0 < (int)pvVar7) {
                (*(undefined * PTR32 *)(gen_frame + 0x298)) = pvVar7;
                do {
                  uVar5 = F_00da6230((*(undefined4 * PTR32 *)(gen_frame + 0x2a0)) GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x29c)));
                  (*(int *)(gen_frame + 0x264)) = 0;
                  (*(int *)(gen_frame + 0x268)) = 0;
                  (*(int *)(gen_frame + 0x26c)) = ((int)0x80000000);
                  (*(uint *)(gen_frame + 0x274)) = 0;
                  F_00da7130((*(undefined * PTR32 *)(gen_frame + 0x25c)) GEN_EDX_ARG,uVar5,&(*(int *)(gen_frame + 0x264)),&(*(uint *)(gen_frame + 0x274)));
                  uVar5 = 0;
                  iVar14 = 0;
                  if (0 < (*(int *)(gen_frame + 0x268))) {
                    do {
                      uVar11 = F_00da6fe0((*(undefined * PTR32 *)(gen_frame + 0x270)) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x264)) + iVar14 * 4))),
                                            &(*(uint *)(gen_frame + 0x258)));
                      if (uVar11 == 0) {
                        uVar5 = uVar5 | (*(uint *)(gen_frame + 0x258));
                      }
                      else {
                        (*(uint *)(gen_frame + 0x274)) = (*(uint *)(gen_frame + 0x274)) | (*(uint *)(gen_frame + 0x258));
                      }
                      iVar14 = iVar14 + 1;
                    } while (iVar14 < (*(int *)(gen_frame + 0x268)));
                  }
                  if ((*(uint *)(gen_frame + 0x274)) != 0) {
                    (*(undefined * PTR32 *)(gen_frame + 0x290)) = ((undefined *)GEN_TOP(0x0));
                    F_00da7130((*(undefined * PTR32 *)(gen_frame + 0x270)) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x274)),&(*(int *)(gen_frame + 0x264)),&(*(undefined * PTR32 *)(gen_frame + 0x290)));
                    uVar5 = uVar5 | (uint)(*(undefined * PTR32 *)(gen_frame + 0x290));
                  }
                  uVar11 = (*(uint *)(gen_frame + 0x288));
                  if ((*(uint *)(gen_frame + 0x288)) == 1) {
                    F_00da6920(param_3 GEN_EDX_ARG,uVar5);
                  }
                  else if ((*(uint *)(gen_frame + 0x288)) == 2) {
                    F_00da6c10(param_3 GEN_EDX_ARG,uVar5);
                  }
                  else if ((*(uint *)(gen_frame + 0x288)) == 4) {
                    F_00da6c50(param_3 GEN_EDX_ARG,uVar5);
                  }
                  (*(ushort * PTR32 *)(gen_frame + 0x29c)) = ((ushort *)GEN_TOP(((int)(*(ushort * PTR32 *)(gen_frame + 0x29c)) + uVar11)));
                  (*(int *)(gen_frame + 0x268)) = 0;
                  if (-1 < (*(int *)(gen_frame + 0x26c))) {
                    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                              (&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x264)),(*(int *)(gen_frame + 0x26c)) * 4);
                  }
                  pvVar7 = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x298)) - 1)));
                  (*(undefined * PTR32 *)(gen_frame + 0x298)) = pvVar7;
                  (*(int *)(gen_frame + 0x264)) = 0;
                  (*(int *)(gen_frame + 0x26c)) = 0x80000000;
                } while (pvVar7 != ((undefined *)GEN_TOP(0x0)));
              }
            }
            break;
          case '\"': ;
            F_00da6c30(param_3 GEN_EDX_ARG,(uint)*puVar13);
            F_00da6c30(param_3 GEN_EDX_ARG,(uint)puVar13[1]);
            (*(undefined4 * PTR32 *)(gen_frame + 0x240)) = (*(undefined4 * PTR32 *)(gen_frame + 0x2a0));
            (*(undefined4 * PTR32 *)(gen_frame + 0x244)) = this_00;
            (*(int *)(gen_frame + 0x248)) = (uint)puVar13[1] + (int)puVar13;
            (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x24c)) + 0)) = *puVar13;
            (*(undefined4 *)(gen_frame + 0x24c)) = CONCAT22((*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x24c)) + 2)),*puVar13);
            if ((*(uint *)(gen_frame + 0x280)) == ((*(uint *)(gen_frame + 0x284)) & 0x3fffffff)) {
              F_00d95710(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0x27c)),0x10);
            }
            puVar9 = ((undefined8 *)GEN_TOP(((*(uint *)(gen_frame + 0x280)) * 0x10 + (*(int *)(gen_frame + 0x27c)))));
            if (puVar9 != ((undefined8 *)GEN_TOP(0x0))) {
              *puVar9 = CONCAT44((*(undefined4 * PTR32 *)(gen_frame + 0x244)),(*(undefined4 * PTR32 *)(gen_frame + 0x240)));
              *(int *)(puVar9 + 1) = (*(int *)(gen_frame + 0x248));
              *((undefined4 *)GEN_TOP(((int)puVar9 + 0xc))) = (*(undefined4 *)(gen_frame + 0x24c));
            }
            (*(uint *)(gen_frame + 0x280)) = (*(uint *)(gen_frame + 0x280)) + 1;
          }
        }
      }
      else {
        if (((*(int * PTR32 *)(gen_frame + 0x294))[4] & 2U) == 0) {
          if (((*(int * PTR32 *)(gen_frame + 0x294))[4] & 1U) == 0) goto LAB_00e26c88;
          goto LAB_00e2729a;
        }
        F_00e26a50((*(int * PTR32 *)(gen_frame + 0x294)) GEN_EDX_ARG,param_3,this_00);
      }
      iVar14 = (*(int *)(gen_frame + 0x28c)) + 1;
      (*(int *)(gen_frame + 0x28c)) = iVar14;
      uVar5 = F_00d927e0(param_4 GEN_EDX_ARG);
      piVar4 = (*(int * PTR32 *)(gen_frame + 0x254));
    } while (iVar14 < (int)uVar5);
  }
  uVar11 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x20))))(piVar4 GEN_EDX_ARG);
  uVar5 = (*(uint *)(gen_frame + 0x260));
  iVar14 = (*(uint *)(gen_frame + 0x260)) - uVar11;
  uVar11 = F_00d929c0(param_4 GEN_EDX_ARG);
  F_00e26910(uVar11 + iVar14,param_3);
  param_2 = ((undefined *)GEN_TOP(0x0));
  if (0 < (int)(*(uint *)(gen_frame + 0x280))) {
    param_4 = ((undefined *)GEN_TOP(0x0));
    do {
      uVar2 = *((ushort *)GEN_TOP(((int)param_4 + 0xc + (*(int *)(gen_frame + 0x27c)))));
      uVar5 = *((uint *)GEN_TOP(((int)param_4 + 4 + (*(int *)(gen_frame + 0x27c)))));
      pvVar7 = *((undefined * PTR32 *)GEN_TOP(((int)param_4 + 8 + (*(int *)(gen_frame + 0x27c)))));
      (*(uint *)(gen_frame + 0x288)) = uVar5;
      (*(undefined * PTR32 *)(gen_frame + 0x25c)) = pvVar7;
      if ((((uVar2 != 0) && (bVar1 = *((byte *)GEN_TOP((uVar5 + 0xd))), bVar1 != 0)) && (bVar1 != 0x14)) &&
         ((bVar1 != 0x1d && (bVar1 != 0x21)))) {
        if (bVar1 == 0x19) {
          uVar11 = F_00da5fd0(*((undefined4 *)GEN_TOP(((int)param_4 + (*(int *)(gen_frame + 0x27c))))) GEN_EDX_ARG);
          uVar5 = F_00da5fd0(uVar5 GEN_EDX_ARG);
          (*(uint *)(gen_frame + 0x288)) = uVar5;
          if (((uVar11 != 0) && (uVar5 != 0)) && (iVar14 = 0, uVar2 != 0)) {
            do {
              uVar5 = uVar11;
              pvVar7 = param_3;
              uVar18 = (*(uint *)(gen_frame + 0x288));
              uVar12 = F_00d929c0(uVar11 GEN_EDX_ARG);
              F_00e26bd0((*(int * PTR32 *)(gen_frame + 0x294)) GEN_EDX_ARG,(int)(uVar12 * iVar14 + (int)(*(undefined * PTR32 *)(gen_frame + 0x25c))),((undefined *)GEN_TOP(uVar5)),pvVar7,
                           ((undefined *)GEN_TOP(uVar18)));
              iVar14 = iVar14 + 1;
            } while (iVar14 < (int)(uint)uVar2);
          }
        }
        else if (bVar1 != 0x1c) {
          if (bVar1 == 0x1e) {
            F_00e26700(param_3,(uint)*(byte *)((*(int * PTR32 *)(gen_frame + 0x294)) + 3),(uint)uVar2,pvVar7);
          }
          else {
            uVar5 = F_00da61f0(uVar5 GEN_EDX_ARG);
            F_00e26570((uint)uVar2,uVar5,param_3,(uint)bVar1,pvVar7);
          }
        }
      }
      param_2 = ((undefined *)GEN_TOP(((int)param_2 + 1)));
      param_4 = ((undefined *)GEN_TOP(((int)param_4 + 0x10)));
      uVar5 = (*(uint *)(gen_frame + 0x260));
    } while ((int)param_2 < (int)(*(uint *)(gen_frame + 0x280)));
  }
  (*(uint *)(gen_frame + 0x280)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x284))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0x27c)),(*(uint *)(gen_frame + 0x284)) << 4);
  }
  return uVar5;
}

/* ref: FUN_00e27480 */
GEN_LIB GEN_FRAME uint F_00e27480(GEN_P(int * in_esi, unsigned int gen_a0), GEN_P(undefined * in_edi, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xe27480u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * in_esi = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * in_edi = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  undefined4 * puVar1;
  uint uVar2;
  int * piVar3;
  
  uVar2 = F_00da6b30(in_edi GEN_EDX_ARG);
  F_00e267c0(2,uVar2);
  piVar3 = ((int *)GEN_TOP(F_00da6b30(in_edi GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x20))))(piVar3 GEN_EDX_ARG);
  if (in_esi[1] == (in_esi[2] & 0x3fffffffU)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),in_esi,8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*in_esi + in_esi[1] * 8)));
  *puVar1 = param_4;
  puVar1[1] = uVar2;
  in_esi[1] = in_esi[1] + 1;
  uVar2 = F_00da0e60(param_3);
  F_00da6ae0(in_edi GEN_EDX_ARG,param_3,uVar2 + 1);
  return 0;
}

/* ref: FUN_00e27500 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e27500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2), GEN_P(undefined * param_3, unsigned int gen_a3), GEN_P(undefined * param_4, unsigned int gen_a4), GEN_P(int param_5, unsigned int gen_a5), GEN_P(undefined * param_6, unsigned int gen_a6), GEN_P(int param_7, unsigned int gen_a7))
{
  GEN_ENTER(0xe27500u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined * param_4 = (undefined *)(uintptr_t)gen_a4;)
  GEN_PIN(int param_5 = (int)gen_a5;)
  GEN_PIN(undefined * param_6 = (undefined *)(uintptr_t)gen_a6;)
  GEN_PIN(int param_7 = (int)gen_a7;)
  GEN_FRAME_DECL_TOP(0x260, 0, 4);
  int iVar1;
  char cVar2;
  byte bVar3;
  ushort uVar4;
  code * pcVar5;
  undefined * this_00;
  uint uVar6;
  undefined4 * in_esi;
  uint * puVar7;
  uint uVar8;
  uint uVar9;
  int * piVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined1 * this_01;
  uint * puVar14;
  int iVar15;
  undefined * pvVar16;
  undefined * pvVar17;
  undefined4 uVar18;
  
  this_00 = param_3;
  (*(int * PTR32 *)(gen_frame + 0x258)) = this;
  if (param_7 == 0) {
    uVar6 = F_00d92610(param_4 GEN_EDX_FWD);
    if (*((uint *)GEN_TOP(((int)param_6 + 0x1c))) == (*((uint *)GEN_TOP(((int)param_6 + 0x20))) & 0x3fffffff)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),((int *)GEN_TOP(((int)param_6 + 0x18))),8);
    }
    piVar10 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)param_6 + 0x18))) + *((int *)GEN_TOP(((int)param_6 + 0x1c))) * 8)));
    *piVar10 = param_5;
    piVar10[1] = uVar6;
    *((int *)GEN_TOP(((int)param_6 + 0x1c))) = *((int *)GEN_TOP(((int)param_6 + 0x1c))) + 1;
  }
  iVar1 = param_7 + 1;
  iVar15 = 0;
  (*(int *)(gen_frame + 0x240)) = 0;
  uVar6 = F_00d927e0(param_4 GEN_EDX_ARG);
  if (0 < (int)uVar6) {
    do {
      in_esi = ((undefined4 *)GEN_TOP(F_00d92800(param_4 GEN_EDX_ARG,iVar15)));
      puVar7 = ((uint *)GEN_TOP(F_00d928d0(param_2 GEN_EDX_ARG,*in_esi)));
      (*(uint * PTR32 *)(gen_frame + 0x254)) = puVar7;
      if (puVar7 == ((uint *)GEN_TOP(0x0))) goto LAB_00e27e7f;
      puVar14 = ((uint *)GEN_TOP(((uint)*((ushort *)GEN_TOP(((int)puVar7 + 0x12))) + param_1)));
      uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x258)) + 0x10))))((*(int * PTR32 *)(gen_frame + 0x258)) GEN_EDX_ARG,puVar7,in_esi);
      if ((uVar6 == 0) ||
         (((*(byte *)((*(int * PTR32 *)(gen_frame + 0x258)) + 4) & 2) != 0 && ((*(ushort *)(in_esi + 4) & 0x400) != 0))))
      goto LAB_00e27e7f;
      switch((unsigned int)(uintptr_t)(*(undefined1 *)(in_esi + 3))) {
      case 1: ;
      case 2: ;
      case 3: ;
      case 4: ;
      case 5: ;
      case 6: ;
      case 7: ;
      case 8: ;
      case 9: ;
      case 10: ;
      case 0xb: ;
      case 0xc: ;
      case 0xd: ;
      case 0xe: ;
      case 0xf: ;
      case 0x10: ;
      case 0x11: ;
      case 0x12: ;
      case 0x15: ;
      case 0x18: ;
      case 0x1e: ;
      case 0x1f: ;
      case 0x20: ;
      case 0x22: ;
        break;
      case 0x13: ;
        F_00da0a80(((undefined1 *)(gen_frame + 0x22c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
        F_00d9fe80(((undefined1 *)(gen_frame + 0x22c)) GEN_EDX_ARG,((char *)REFP(0x1155464)));
        uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                          (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,3,0x641e3e05,((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x1155380)),0x406);
        if (uVar6 != 0) {
          pcVar5 = ((code *)GEN_TOP(swi(3)));
          uVar6 = (*pcVar5)();
          return uVar6;
        }
        this_01 = ((undefined1 *)(gen_frame + 0x22c));
        goto LAB_00e27e65;
      case 0x14: ;
        uVar6 = F_00e26500(in_esi);
        puVar7 = (*(uint * PTR32 *)(gen_frame + 0x254));
        uVar11 = F_00e26500((*(uint * PTR32 *)(gen_frame + 0x254)));
        uVar6 = F_00e28010(uVar11,uVar6);
        (*(uint *)(gen_frame + 0x248)) = uVar6;
        uVar6 = F_00e26500(puVar7);
        uVar11 = F_00da6030((*(uint * PTR32 *)(gen_frame + 0x254)) GEN_EDX_ARG);
        (*(uint *)(gen_frame + 0x250)) = 0;
        (*(uint *)(gen_frame + 0x244)) = (int)uVar11 / (int)uVar6;
        if (0 < (int)(*(uint *)(gen_frame + 0x248))) {
          (*(uint * PTR32 *)(gen_frame + 0x254)) = puVar14;
          do {
            uVar6 = *puVar14;
            (*(uint * PTR32 *)(gen_frame + 0x254)) = puVar14;
            if (uVar6 != 0) {
              iVar15 = *(byte *)((*(int * PTR32 *)(gen_frame + 0x258)) + 3) * (*(uint *)(gen_frame + 0x250)) + (uint)*((ushort *)GEN_TOP(((int)in_esi + 0x12)));
              if (*((char *)GEN_TOP(((int)in_esi + 0xd))) == '\x02') {
                F_00e27480(param_6,this_00,uVar6,iVar15 + param_5);
              }
              else if (*((char *)GEN_TOP(((int)in_esi + 0xd))) != '\0') {
                uVar18 = 0;
                uVar11 = F_00da5fd0(in_esi GEN_EDX_ARG);
                F_00e28540(param_6 GEN_EDX_ARG,iVar15 + param_5,uVar6,uVar11,uVar18);
              }
            }
            puVar14 = ((uint *)GEN_TOP(((int)(*(uint * PTR32 *)(gen_frame + 0x254)) + (*(uint *)(gen_frame + 0x244)))));
            uVar6 = (*(uint *)(gen_frame + 0x250)) + 1;
            (*(uint *)(gen_frame + 0x250)) = uVar6;
            (*(uint * PTR32 *)(gen_frame + 0x254)) = puVar14;
          } while ((int)uVar6 < (int)(*(uint *)(gen_frame + 0x248)));
        }
        break;
      case 0x16: ;
      case 0x17: ;
      case 0x1a: ;
        if ((puVar14[1] != 0) && (cVar2 = *((char *)GEN_TOP(((int)in_esi + 0xd))), cVar2 != '\0')) {
          if (cVar2 == '\x14') {
            piVar10 = ((int *)GEN_TOP(F_00da6b30(this_00 GEN_EDX_ARG)));
            (*(uint *)(gen_frame + 0x244)) = (uint)*((ushort *)GEN_TOP(((int)in_esi + 0x12)));
            uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar10 + 0x20))))(piVar10 GEN_EDX_ARG);
            F_00dfa9f0(param_6 GEN_EDX_ARG,(*(uint *)(gen_frame + 0x244)) + param_5,uVar6);
            (*(undefined8 *)(gen_frame + 0x210)) = 0;
            uVar6 = F_00da61f0(puVar7 GEN_EDX_ARG);
            (*(uint *)(gen_frame + 0x24c)) = uVar6;
            (*(uint *)(gen_frame + 0x248)) = 0;
            if (0 < (int)puVar14[1]) {
              (*(uint *)(gen_frame + 0x250)) = 0;
              do {
                (*(uint *)(gen_frame + 0x244)) = *((uint *)GEN_TOP(((*(uint *)(gen_frame + 0x250)) + *puVar14)));
                if ((*((uint *)GEN_TOP(((*(uint *)(gen_frame + 0x250)) + *puVar14))) != 0) && (*((char *)GEN_TOP(((int)in_esi + 0xd))) != '\0'))
                {
                  piVar10 = ((int *)GEN_TOP(F_00da6b30(this_00 GEN_EDX_ARG)));
                  uVar18 = 0;
                  uVar11 = F_00da5fd0((*(uint * PTR32 *)(gen_frame + 0x254)) GEN_EDX_ARG);
                  uVar6 = (*(uint *)(gen_frame + 0x244));
                  uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar10 + 0x20))))(piVar10 GEN_EDX_ARG);
                  F_00e28540(param_6 GEN_EDX_ARG,uVar8,uVar6,uVar11,uVar18);
                }
                F_00da6ae0(this_00 GEN_EDX_ARG,&(*(undefined8 *)(gen_frame + 0x210)),(uint)*(byte *)((*(int * PTR32 *)(gen_frame + 0x258)) + 3));
                uVar6 = (*(uint *)(gen_frame + 0x248)) + 1;
                (*(uint *)(gen_frame + 0x248)) = uVar6;
                (*(uint *)(gen_frame + 0x250)) = (*(uint *)(gen_frame + 0x250)) + (*(uint *)(gen_frame + 0x24c));
              } while ((int)uVar6 < (int)puVar14[1]);
            }
          }
          else if (cVar2 == '\x1d') {
            piVar10 = ((int *)GEN_TOP(F_00da6b30(this_00 GEN_EDX_ARG)));
            uVar4 = *((ushort *)GEN_TOP(((int)in_esi + 0x12)));
            uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar10 + 0x20))))(piVar10 GEN_EDX_ARG);
            F_00dfa9f0(param_6 GEN_EDX_ARG,(uint)uVar4 + param_5,uVar6);
            (*(undefined8 *)(gen_frame + 0x238)) = 0;
            piVar10 = ((int *)GEN_TOP(F_00da6b30(this_00 GEN_EDX_ARG)));
            uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar10 + 0x20))))(piVar10 GEN_EDX_ARG);
            iVar15 = 0;
            (*(uint *)(gen_frame + 0x24c)) = uVar6;
            if (0 < (int)puVar14[1]) {
              do {
                F_00da6ae0(this_00 GEN_EDX_ARG,&(*(undefined8 *)(gen_frame + 0x238)),(uint)*(byte *)((*(int * PTR32 *)(gen_frame + 0x258)) + 3));
                iVar15 = iVar15 + 1;
              } while (iVar15 < (int)puVar14[1]);
            }
            param_3 = ((undefined *)GEN_TOP(0x0));
            if (0 < (int)puVar14[1]) {
              do {
                if (*((int *)GEN_TOP((*puVar14 + (int)((int)(uintptr_t)param_3) * 4))) != 0) {
                  F_00e27480(param_6,this_00,*((undefined4 *)GEN_TOP((*puVar14 + (int)((int)(uintptr_t)param_3) * 4))),
                               (uint)*(byte *)((*(int * PTR32 *)(gen_frame + 0x258)) + 3) * (int)param_3 + (*(uint *)(gen_frame + 0x24c)));
                }
                param_3 = ((undefined *)GEN_TOP(((int)param_3 + 1)));
              } while ((int)param_3 < (int)puVar14[1]);
            }
          }
          else if (cVar2 == '!') {
            piVar10 = ((int *)GEN_TOP(F_00da6b30(this_00 GEN_EDX_ARG)));
            uVar4 = *((ushort *)GEN_TOP(((int)in_esi + 0x12)));
            uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar10 + 0x20))))(piVar10 GEN_EDX_ARG);
            F_00dfa9f0(param_6 GEN_EDX_ARG,(uint)uVar4 + param_5,uVar6);
            (*(undefined8 *)(gen_frame + 0x218)) = 0;
            piVar10 = ((int *)GEN_TOP(F_00da6b30(this_00 GEN_EDX_ARG)));
            uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar10 + 0x20))))(piVar10 GEN_EDX_ARG);
            iVar15 = 0;
            (*(uint *)(gen_frame + 0x24c)) = uVar6;
            if (0 < (int)puVar14[1]) {
              do {
                F_00da6ae0(this_00 GEN_EDX_ARG,&(*(undefined8 *)(gen_frame + 0x218)),(uint)*(byte *)((*(int * PTR32 *)(gen_frame + 0x258)) + 3));
                iVar15 = iVar15 + 1;
              } while (iVar15 < (int)puVar14[1]);
            }
            param_3 = ((undefined *)GEN_TOP(0x0));
            if (0 < (int)puVar14[1]) {
              do {
                uVar6 = *((uint *)GEN_TOP((*puVar14 + (int)((int)(uintptr_t)param_3) * 4)));
                if ((uVar6 & 0xfffffffe) != 0) {
                  F_00e27480(param_6,this_00,uVar6 & 0xfffffffe,
                               (uint)*(byte *)((*(int * PTR32 *)(gen_frame + 0x258)) + 3) * (int)param_3 + (*(uint *)(gen_frame + 0x24c)));
                }
                param_3 = ((undefined *)GEN_TOP(((int)param_3 + 1)));
              } while ((int)param_3 < (int)puVar14[1]);
            }
          }
          else if (cVar2 == '\x19') {
            piVar10 = ((int *)GEN_TOP(F_00da6b30(this_00 GEN_EDX_ARG)));
            uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar10 + 0x20))))(piVar10 GEN_EDX_ARG);
            (*(uint *)(gen_frame + 0x24c)) = uVar6;
            F_00dfa9f0(param_6 GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)in_esi + 0x12))) + param_5,uVar6);
            uVar6 = F_00da5fd0((*(uint * PTR32 *)(gen_frame + 0x254)) GEN_EDX_ARG);
            uVar11 = F_00da5fd0(in_esi GEN_EDX_ARG);
            if ((uVar6 != 0) && (uVar11 != 0)) {
              (*(uint *)(gen_frame + 0x248)) = *puVar14;
              (*(uint *)(gen_frame + 0x250)) = 0;
              if (0 < (int)puVar14[1]) {
                do {
                  uVar8 = uVar6;
                  pvVar16 = this_00;
                  uVar12 = uVar11;
                  uVar9 = F_00d929c0(uVar6 GEN_EDX_ARG);
                  F_00e26bd0((*(int * PTR32 *)(gen_frame + 0x258)) GEN_EDX_ARG,uVar9 * (*(uint *)(gen_frame + 0x250)) + (*(uint *)(gen_frame + 0x248)),uVar8,pvVar16,uVar12);
                  uVar8 = (*(uint *)(gen_frame + 0x250)) + 1;
                  (*(uint *)(gen_frame + 0x250)) = uVar8;
                } while ((int)uVar8 < (int)puVar14[1]);
              }
              (*(uint * PTR32 *)(gen_frame + 0x254)) = ((uint *)GEN_TOP(0x0));
              if (0 < (int)puVar14[1]) {
                do {
                  pvVar17 = param_6;
                  iVar15 = iVar1;
                  uVar8 = F_00d929c0(uVar11 GEN_EDX_ARG);
                  iVar13 = uVar8 * (int)(*(uint * PTR32 *)(gen_frame + 0x254)) + (*(uint *)(gen_frame + 0x24c));
                  uVar8 = uVar6;
                  pvVar16 = this_00;
                  uVar12 = uVar11;
                  uVar9 = F_00d929c0(uVar6 GEN_EDX_ARG);
                  F_00e27500((*(int * PTR32 *)(gen_frame + 0x258)) GEN_EDX_ARG,uVar9 * (int)(*(uint * PTR32 *)(gen_frame + 0x254)) + (*(uint *)(gen_frame + 0x248)),((undefined *)GEN_TOP(uVar8)),pvVar16,
                               ((undefined *)GEN_TOP(uVar12)),iVar13,pvVar17,iVar15);
                  puVar7 = ((uint *)GEN_TOP(((int)(*(uint * PTR32 *)(gen_frame + 0x254)) + 1)));
                  (*(uint * PTR32 *)(gen_frame + 0x254)) = puVar7;
                } while ((int)puVar7 < (int)puVar14[1]);
              }
            }
          }
          else if (cVar2 == '\x1c') {
            piVar10 = ((int *)GEN_TOP(F_00da6b30(this_00 GEN_EDX_ARG)));
            uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar10 + 0x20))))(piVar10 GEN_EDX_ARG);
            (*(uint *)(gen_frame + 0x248)) = uVar6;
            F_00dfa9f0(param_6 GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)in_esi + 0x12))) + param_5,uVar6);
            iVar15 = 0;
            if (0 < (int)puVar14[1]) {
              do {
                bVar3 = *(byte *)((*(int * PTR32 *)(gen_frame + 0x258)) + 3);
                (*(undefined8 *)(gen_frame + 0x200)) = 0;
                (*(undefined8 *)(gen_frame + 0x208)) = 0;
                F_00da6970(this_00 GEN_EDX_ARG,&(*(undefined8 *)(gen_frame + 0x200)),(uint)bVar3,2);
                iVar15 = iVar15 + 1;
              } while (iVar15 < (int)puVar14[1]);
            }
            param_3 = ((undefined *)GEN_TOP(0x0));
            if (0 < (int)puVar14[1]) {
              do {
                piVar10 = ((int *)GEN_TOP((*puVar14 + (int)((int)(uintptr_t)param_3) * 8)));
                iVar15 = *piVar10;
                iVar13 = (uint)*(byte *)((*(int * PTR32 *)(gen_frame + 0x258)) + 3) * (int)((int)(uintptr_t)param_3) * 2;
                if (iVar15 != 0) {
                  F_00e28540(param_6 GEN_EDX_ARG,iVar13 + (*(uint *)(gen_frame + 0x248)),iVar15,piVar10[1],0);
                }
                iVar15 = *((int *)GEN_TOP((*puVar14 + 4 + (int)((int)(uintptr_t)param_3) * 8)));
                if (iVar15 != 0) {
                  F_00e28540(param_6 GEN_EDX_ARG,(uint)*(byte *)((*(int * PTR32 *)(gen_frame + 0x258)) + 3) + iVar13 + (*(uint *)(gen_frame + 0x248)),iVar15,
                               &REFG(undefined, 0x15da330),0);
                }
                param_3 = ((undefined *)GEN_TOP(((int)param_3 + 1)));
              } while ((int)param_3 < (int)puVar14[1]);
            }
          }
          else {
            piVar10 = ((int *)GEN_TOP(F_00da6b30(this_00 GEN_EDX_ARG)));
            uVar4 = *((ushort *)GEN_TOP(((int)in_esi + 0x12)));
            uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar10 + 0x20))))(piVar10 GEN_EDX_ARG);
            F_00dfa9f0(param_6 GEN_EDX_ARG,(uint)uVar4 + param_5,uVar6);
            bVar3 = *((byte *)GEN_TOP(((int)in_esi + 0xd)));
            if (bVar3 == 0x1e) {
              F_00e26700(this_00,(uint)*(byte *)((*(int * PTR32 *)(gen_frame + 0x258)) + 3),puVar14[1],*puVar14);
            }
            else {
              uVar6 = *puVar14;
              uVar11 = F_00da61f0(in_esi GEN_EDX_ARG);
              F_00e26570(puVar14[1],uVar11,this_00,(uint)bVar3,uVar6);
            }
          }
        }
        break;
      case 0x19: ;
        uVar6 = F_00da5fd0(puVar7 GEN_EDX_ARG);
        (*(uint *)(gen_frame + 0x250)) = uVar6;
        uVar11 = F_00da5fd0(in_esi GEN_EDX_ARG);
        (*(uint *)(gen_frame + 0x248)) = uVar11;
        if ((uVar6 != 0) && (uVar11 != 0)) {
          (*(uint *)(gen_frame + 0x244)) = (uint)*((ushort *)GEN_TOP(((int)in_esi + 0x12))) + param_5;
          uVar6 = F_00e26500((*(uint * PTR32 *)(gen_frame + 0x254)));
          (*(uint *)(gen_frame + 0x24c)) = uVar6;
          uVar6 = F_00e26500(in_esi);
          uVar6 = F_00e28010((*(uint *)(gen_frame + 0x24c)),uVar6);
          (*(uint *)(gen_frame + 0x24c)) = uVar6;
          param_3 = ((undefined *)GEN_TOP(0x0));
          if (0 < (int)uVar6) {
            do {
              uVar6 = F_00d929c0((*(uint *)(gen_frame + 0x250)) GEN_EDX_ARG);
              pvVar16 = param_6;
              iVar15 = iVar1;
              uVar11 = F_00d929c0((*(uint *)(gen_frame + 0x248)) GEN_EDX_ARG);
              F_00e27500((*(int * PTR32 *)(gen_frame + 0x258)) GEN_EDX_ARG,(int)(uVar6 * (int)param_3 + (int)puVar14),((undefined *)GEN_TOP((*(uint *)(gen_frame + 0x250)))),
                           this_00,((undefined *)GEN_TOP((*(uint *)(gen_frame + 0x248)))),uVar11 * (int)param_3 + (*(uint *)(gen_frame + 0x244)),pvVar16,iVar15)
              ;
              param_3 = ((undefined *)GEN_TOP(((int)param_3 + 1)));
            } while ((int)param_3 < (int)(*(uint *)(gen_frame + 0x24c)));
          }
        }
        break;
      case 0x1b: ;
        uVar6 = *puVar14;
        if (uVar6 != 0) {
          F_00e28540(param_6 GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)in_esi + 0x12))) + param_5,uVar6,&REFG(undefined, 0x15da330),1
                      );
          piVar10 = ((int *)GEN_TOP(F_00da6b30(this_00 GEN_EDX_ARG)));
          uVar11 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar10 + 0x20))))(piVar10 GEN_EDX_ARG);
          (*(uint *)(gen_frame + 0x24c)) = uVar11;
          F_00dfa9f0(param_6 GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)in_esi + 0x12))) +
                               (uint)*(byte *)((*(int * PTR32 *)(gen_frame + 0x258)) + 3) + param_5,uVar11);
          (*(uint *)(gen_frame + 0x248)) = puVar14[1];
          param_3 = ((undefined *)GEN_TOP(0x0));
          if (0 < (int)puVar14[2]) {
            do {
              uVar11 = uVar6;
              pvVar16 = this_00;
              uVar8 = uVar6;
              uVar12 = F_00d929c0(uVar6 GEN_EDX_ARG);
              F_00e26bd0((*(int * PTR32 *)(gen_frame + 0x258)) GEN_EDX_ARG,uVar12 * (int)param_3 + (*(uint *)(gen_frame + 0x248)),uVar11,pvVar16,uVar8);
              param_3 = ((undefined *)GEN_TOP(((int)param_3 + 1)));
            } while ((int)param_3 < (int)puVar14[2]);
          }
          param_3 = ((undefined *)GEN_TOP(0x0));
          if (0 < (int)puVar14[2]) {
            do {
              pvVar17 = param_6;
              iVar15 = iVar1;
              uVar11 = F_00d929c0(uVar6 GEN_EDX_ARG);
              iVar13 = uVar11 * (int)param_3 + (*(uint *)(gen_frame + 0x24c));
              uVar11 = uVar6;
              pvVar16 = this_00;
              uVar8 = uVar6;
              uVar12 = F_00d929c0(uVar6 GEN_EDX_ARG);
              F_00e27500((*(int * PTR32 *)(gen_frame + 0x258)) GEN_EDX_ARG,uVar12 * (int)param_3 + (*(uint *)(gen_frame + 0x248)),((undefined *)GEN_TOP(uVar11)),pvVar16,
                           ((undefined *)GEN_TOP(uVar8)),iVar13,pvVar17,iVar15);
              param_3 = ((undefined *)GEN_TOP(((int)param_3 + 1)));
            } while ((int)param_3 < (int)puVar14[2]);
          }
        }
        break;
      case 0x1c: ;
        uVar6 = F_00e26500((*(uint * PTR32 *)(gen_frame + 0x254)));
        (*(uint *)(gen_frame + 0x24c)) = uVar6;
        uVar6 = F_00e26500(in_esi);
        uVar6 = F_00e28010((*(uint *)(gen_frame + 0x24c)),uVar6);
        (*(uint *)(gen_frame + 0x24c)) = uVar6;
        (*(uint * PTR32 *)(gen_frame + 0x254)) = ((uint *)GEN_TOP(0x0));
        if (0 < (int)uVar6) {
          (*(uint *)(gen_frame + 0x250)) = 1;
          do {
            iVar15 = *((int *)GEN_TOP(((int)puVar14 + (int)((int)(uintptr_t)(*(uint * PTR32 *)(gen_frame + 0x254))) * (uint)*(byte *)((*(int * PTR32 *)(gen_frame + 0x258)) + 2) * 2)));
            uVar6 = *((uint *)GEN_TOP(((*(uint *)(gen_frame + 0x250)) * *(byte *)((*(int * PTR32 *)(gen_frame + 0x258)) + 2) + (int)puVar14)));
            if (iVar15 != 0) {
              F_00e28540(param_6 GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)in_esi + 0x12))) + param_5 +
                                   (uint)*(byte *)((*(int * PTR32 *)(gen_frame + 0x258)) + 3) * (int)((int)(uintptr_t)(*(uint * PTR32 *)(gen_frame + 0x254))) * 2,iVar15,uVar6,0);
            }
            if (uVar6 != 0) {
              F_00e28540(param_6 GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)in_esi + 0x12))) +
                                   *(byte *)((*(int * PTR32 *)(gen_frame + 0x258)) + 3) * (*(uint *)(gen_frame + 0x250)) + param_5,uVar6,&REFG(undefined, 0x15da330),0
                          );
            }
            (*(uint *)(gen_frame + 0x250)) = (*(uint *)(gen_frame + 0x250)) + 2;
            puVar7 = ((uint *)GEN_TOP(((int)(*(uint * PTR32 *)(gen_frame + 0x254)) + 1)));
            (*(uint * PTR32 *)(gen_frame + 0x254)) = puVar7;
          } while ((int)puVar7 < (int)(*(uint *)(gen_frame + 0x24c)));
        }
        break;
      case 0x1d: ;
        if (*puVar14 != 0) {
          F_00e27480(param_6,this_00,*puVar14,(uint)*((ushort *)GEN_TOP(((int)in_esi + 0x12))) + param_5);
        }
        break;
      case 0x21: ;
        if ((*puVar14 & 0xfffffffe) != 0) {
          F_00e27480(param_6,this_00,*puVar14 & 0xfffffffe,
                       (uint)*((ushort *)GEN_TOP(((int)in_esi + 0x12))) + param_5);
        }
        break;
      default: ;
        F_00da0a80(((undefined1 *)(gen_frame + 0x220)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
        F_00d9fe80(((undefined1 *)(gen_frame + 0x220)) GEN_EDX_ARG,((char *)REFP(0x1155400)));
        uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                          (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,3,0x641e3e05,((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x1155380)),0x40b);
        if (uVar6 != 0) {
          pcVar5 = ((code *)GEN_TOP(swi(3)));
          uVar6 = (*pcVar5)();
          return uVar6;
        }
        this_01 = ((undefined1 *)(gen_frame + 0x220));
LAB_00e27e65: ;
        F_00d9fda0(this_01 GEN_EDX_ARG);
      }
      uVar6 = F_00da6b30(this_00 GEN_EDX_ARG);
      F_00e267c0(0x10,uVar6);
LAB_00e27e7f: ;
      iVar15 = (*(int *)(gen_frame + 0x240)) + 1;
      (*(int *)(gen_frame + 0x240)) = iVar15;
      uVar6 = F_00d927e0(param_4 GEN_EDX_ARG);
    } while (iVar15 < (int)uVar6);
  }
  return uVar6;
}

/* ref: hkObjectCopier::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e27ef0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xe27ef0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[5];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  gen_args[4] = gen_a5;
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char * pcVar4;
  
  uVar2 = (*(uint *)&gen_args[2]);
  F_00da68d0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,(*(uint *)&gen_args[2]),this[0x14]);
  uVar3 = (*(undefined4 *)&gen_args[3]);
  (*(uint *)&gen_args[2]) = F_00e26bd0(this GEN_EDX_ARG,(*(undefined4 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),((undefined1 *)(gen_frame + 0x0)),(*(undefined4 *)&gen_args[3]));
  F_00e267c0(0x10,uVar2);
  F_00e27500(this GEN_EDX_ARG,(*(undefined4 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),((undefined1 *)(gen_frame + 0x0)),uVar3,(*(uint *)&gen_args[2]),(*(undefined4 *)&gen_args[4]),0);
  F_00e267c0(0x10,uVar2);
  pcVar4 = ((char *)GEN_TOP(F_00da6b10(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,(int)&(*(undefined4 *)&gen_args[1]) + 3)));
  cVar1 = *pcVar4;
  F_00da6900(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return (uint)(cVar1 == '\0');
}

/* ref: FUN_00e27f90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e27f90(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe27f90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return *in_ecx & param_2;
}

/* ref: FUN_00e27fa0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e27fa0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe27fa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((bool *)GEN_TOP(param_2)) = in_ecx[3] != *in_ecx;
  return param_2;
}

/* ref: FUN_00e27ff0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e27ff0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe27ff0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00e28010 */
GEN_LIB GEN_FRAME uint F_00e28010(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe28010u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = param_1;
  if ((int)param_2 <= (int)param_1) {
    uVar1 = param_2;
  }
  return uVar1;
}

/* ref: FUN_00e28050 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e28050(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe28050u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00e28090 */
GEN_LIB GEN_FRAME unsigned int F_00e28090(GEN_P(undefined8 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined8 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe28090u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined8 * param_3 = (undefined8 *)(uintptr_t)gen_a2;)
  undefined8 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      *puVar1 = *param_3;
      puVar1[1] = param_3[1];
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00e280c0 */
GEN_LIB GEN_FRAME unsigned int F_00e280c0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe280c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      *puVar1 = *param_3;
      puVar1[1] = param_3[1];
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00e28100 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e28100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe28100u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 << 4);
  return uVar1;
}

/* ref: FUN_00e28120 */
GEN_LIB GEN_FRAME uint F_00e28120(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe28120u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + param_1;
}

/* ref: hkObjectCopier::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e28140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe28140u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  return param_1;
}

/* ref: FUN_00e28170 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e28170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined8 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe28170u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a2;)
  undefined8 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,0x10);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) * 0x10 + *(int *)this)));
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00e281c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e281c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe281c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 8)));
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00e28200 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e28200(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe28200u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00e28230 */
GEN_LIB GEN_FRAME uint F_00e28230(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe28230u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  LPVOID this;
  uint uVar2;
  uint uVar3;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = *((uint *)GEN_TOP(((int)this + 0xc)));
  uVar3 = param_1 * 8 + 0x7fU & 0xffffff80;
  uVar2 = uVar1 + uVar3;
  if (((int)uVar3 <= *((int *)GEN_TOP(((int)this + 8)))) && (uVar2 <= *((uint *)GEN_TOP(((int)this + 0x10))))) {
    *((uint *)GEN_TOP(((int)this + 0xc))) = uVar2;
    return uVar1;
  }
  uVar2 = F_00d94390(this GEN_EDX_ARG,uVar3);
  return uVar2;
}

/* ref: FUN_00e28270 */
GEN_LIB GEN_FRAME uint F_00e28270(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe28270u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  LPVOID this;
  uint uVar1;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = param_2 * 8 + 0x7fU & 0xffffff80;
  if ((((int)uVar1 <= *((int *)GEN_TOP(((int)this + 8)))) && (uVar1 + param_1 == *((int *)GEN_TOP(((int)this + 0xc))))) &&
     (*((int *)GEN_TOP(((int)this + 0x14))) != param_1)) {
    *((int *)GEN_TOP(((int)this + 0xc))) = param_1;
    return (uint)this;
  }
  uVar1 = F_00d945c0(this GEN_EDX_ARG,param_1,uVar1);
  return uVar1;
}

/* ref: FUN_00e282c0 */
GEN_LIB GEN_FRAME unsigned int F_00e282c0(GEN_P(undefined8 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined8 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe282c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined8 * param_3 = (undefined8 *)(uintptr_t)gen_a2;)
  undefined8 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      if (puVar1 != ((undefined8 *)GEN_TOP(0x0))) {
        *puVar1 = *param_3;
        puVar1[1] = param_3[1];
      }
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00e28300 */
GEN_LIB GEN_FRAME uint F_00e28300(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe28300u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkObjectCopier::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e28330(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe28330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00e26560(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  }
  return param_1;
}

/* ref: FUN_00e28370 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e28370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined8 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe28370u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a1;)
  undefined8 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,0x10);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) * 0x10 + *(int *)this)));
  *puVar1 = *param_1;
  puVar1[1] = param_1[1];
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00e283c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e283c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe283c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 8)));
  *puVar1 = *param_1;
  puVar1[1] = param_1[1];
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00e28400 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e28400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe28400u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int iVar1;
  LPVOID this_00;
  uint uVar2;
  uint uVar3;
  
  this_00 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  iVar1 = *((int *)GEN_TOP(((int)this_00 + 0xc)));
  uVar3 = param_1 * 8 + 0x7fU & 0xffffff80;
  uVar2 = iVar1 + uVar3;
  if (((int)uVar3 <= *((int *)GEN_TOP(((int)this_00 + 8)))) && (uVar2 <= *((uint *)GEN_TOP(((int)this_00 + 0x10))))) {
    *((uint *)GEN_TOP(((int)this_00 + 0xc))) = uVar2;
    *(int *)this = iVar1;
    *((int *)GEN_TOP(((int)this + 4))) = param_1;
    return (uint)this;
  }
  uVar2 = F_00d94390(this_00 GEN_EDX_ARG,uVar3);
  *(uint *)this = uVar2;
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  return (uint)this;
}

/* ref: FUN_00e284b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e284b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined8 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe284b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a2;)
  undefined8 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,0x10);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) * 0x10 + *(int *)this)));
  if (puVar1 != ((undefined8 *)GEN_TOP(0x0))) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00e28500 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e28500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe28500u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 << 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e28540 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e28540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xe28540u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  undefined8 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 0x10))) == (*((uint *)GEN_TOP(((int)this + 0x14))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),((int *)GEN_TOP(((int)this + 0xc))),0x10);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) * 0x10 + *((int *)GEN_TOP(((int)this + 0xc))))));
  *puVar1 = CONCAT44(param_2,param_1);
  puVar1[1] = CONCAT44(param_4,param_3);
  *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00e285b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e285b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe285b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 0x1c))) == (*((uint *)GEN_TOP(((int)this + 0x20))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),((int *)GEN_TOP(((int)this + 0x18))),8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + *((int *)GEN_TOP(((int)this + 0x1c))) * 8)));
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *((int *)GEN_TOP(((int)this + 0x1c))) = *((int *)GEN_TOP(((int)this + 0x1c))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00e28600 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e28600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined8 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe28600u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a1;)
  undefined8 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516a4),this,0x10);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) * 0x10 + *(int *)this)));
  if (puVar1 != ((undefined8 *)GEN_TOP(0x0))) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00e28650 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e28650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe28650u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 << 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e28690 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e28690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe28690u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  LPVOID this_00;
  uint uVar2;
  
  uVar1 = 0;
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *((uint *)GEN_TOP(((int)this + 0x10))) = param_1;
  if (param_1 != 0) {
    this_00 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar1 = *((uint *)GEN_TOP(((int)this_00 + 0xc)));
    uVar2 = param_1 + 0x7f & 0xffffff80;
    if ((*((int *)GEN_TOP(((int)this_00 + 8))) < (int)uVar2) ||
       (*((uint *)GEN_TOP(((int)this_00 + 0x10))) < uVar1 + uVar2)) {
      uVar1 = F_00d94390(this_00 GEN_EDX_ARG,uVar2);
    }
    else {
      *((uint *)GEN_TOP(((int)this_00 + 0xc))) = uVar1 + uVar2;
    }
  }
  *((uint *)GEN_TOP(((int)this + 8))) = param_1 | 0x80000000;
  *(uint *)this = uVar1;
  *((uint *)GEN_TOP(((int)this + 0xc))) = uVar1;
  return (uint)this;
}

/* ref: FUN_00e28700 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e28700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe28700u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  LPVOID this_00;
  uint uVar3;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0xc)));
  if (iVar1 == *(int *)this) {
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  }
  iVar2 = *((int *)GEN_TOP(((int)this + 0x10)));
  this_00 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar3 = iVar2 + 0x7fU & 0xffffff80;
  if (((*((int *)GEN_TOP(((int)this_00 + 8))) < (int)uVar3) || (uVar3 + iVar1 != *((int *)GEN_TOP(((int)this_00 + 0xc)))))
     || (*((int *)GEN_TOP(((int)this_00 + 0x14))) == iVar1)) {
    F_00d945c0(this_00 GEN_EDX_ARG,iVar1,uVar3);
  }
  else {
    *((int *)GEN_TOP(((int)this_00 + 0xc))) = iVar1;
  }
  uVar3 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar3 & 0x80000000) == 0) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar3 & 0x3fffffff);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar3;
}

/* ref: FUN_00e28790 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e28790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe28790u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 << 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e28d50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e28d50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe28d50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0xc0))) = param_2;
  return param_2;
}

/* ref: Application::Network::ChatClient::RaptureChannelManager::vf1 */
GEN_LIB GEN_NOFRAME uint F_00e28d60(void)
{
  GEN_ENTER(0xe28d60u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Application::Network::ChatClient::RaptureChannelManager::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e28d70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe28d70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 0;
}

/* ref: Application::Network::ChatClient::RaptureChannelManager::vf19 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e28d80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe28d80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: FUN_00e28d90 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e28d90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe28d90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x3c, 4, 4);
  undefined * pvVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 0xc0)));
  if (iVar3 < 1) {
    return 0;
  }
  if (iVar3 < 3) {
    if (*param_1 == 2) {
      pvVar1 = ((undefined *)GEN_TOP(F_00c31900(this GEN_EDX_FWD)));
      if (pvVar1 == ((undefined *)GEN_TOP(0x0))) {
        return 0;
      }
      F_00e366f0(((int *)(gen_frame + 0x0)) GEN_EDX_ARG,*param_1,param_1[1],0);
      uVar2 = F_00e2cb30(pvVar1 GEN_EDX_ARG,((int *)(gen_frame + 0x0)));
      if (uVar2 != 0) {
        if ((*(int *)(gen_frame + 0x14)) == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x14)) + 0x24)));
        }
        F_00c46aa0(iVar3 + 0x10,param_1 + 6,param_1[1] - 0x10);
        iVar3 = (*(int *)(gen_frame + 0x14));
        (*(int *)(gen_frame + 0x14)) = 0;
        uVar2 = ((code *)*((gen_code32 *)GEN_TOP((((int *)(gen_frame + 0x0))[0] + 4))))(((int *)(gen_frame + 0x0)));
        if (((undefined4 *)GEN_TOP((iVar3 + 0xc))) != ((undefined4 *)GEN_TOP((uVar2 + 8)))) {
          *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = *((undefined4 *)GEN_TOP((uVar2 + 8)));
          *((undefined4 *)GEN_TOP((iVar3 + 0x10))) = *((undefined4 *)GEN_TOP((uVar2 + 0xc)));
        }
        ((code *)*((gen_code32 *)GEN_TOP((((int *)(gen_frame + 0x0))[0] + 0xc))))
                  (((int *)(gen_frame + 0x0)),*((undefined4 *)GEN_TOP((iVar3 + 0x24))),*((undefined4 *)GEN_TOP((iVar3 + 0x20))));
        F_00e2ebc0(*((undefined * PTR32 *)GEN_TOP(((int)pvVar1 + 0x20))) GEN_EDX_ARG,iVar3);
        *((undefined4 *)GEN_TOP(((int)this + 0xc0))) = 2;
        F_00e36660(((int *)(gen_frame + 0x0)) GEN_EDX_ARG);
        return 1;
      }
      goto LAB_00e28f30;
    }
  }
  else if (iVar3 != 3) {
    return 0;
  }
  pvVar1 = ((undefined *)GEN_TOP(F_00c31900(this GEN_EDX_ARG)));
  if (pvVar1 == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  F_00e366f0(((int *)(gen_frame + 0x0)) GEN_EDX_ARG,*param_1,param_1[1],0);
  uVar2 = F_00e2cb30(pvVar1 GEN_EDX_ARG,((int *)(gen_frame + 0x0)));
  if (uVar2 != 0) {
    if ((*(int *)(gen_frame + 0x14)) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x14)) + 0x24)));
    }
    F_00c46aa0(iVar3 + 0x10,param_1 + 6,param_1[1] - 0x10);
    iVar3 = (*(int *)(gen_frame + 0x14));
    (*(int *)(gen_frame + 0x14)) = 0;
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((((int *)(gen_frame + 0x0))[0] + 4))))(((int *)(gen_frame + 0x0)));
    if (((undefined4 *)GEN_TOP((iVar3 + 0xc))) != ((undefined4 *)GEN_TOP((uVar2 + 8)))) {
      *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = *((undefined4 *)GEN_TOP((uVar2 + 8)));
      *((undefined4 *)GEN_TOP((iVar3 + 0x10))) = *((undefined4 *)GEN_TOP((uVar2 + 0xc)));
    }
    ((code *)*((gen_code32 *)GEN_TOP((((int *)(gen_frame + 0x0))[0] + 0xc))))
              (((int *)(gen_frame + 0x0)),*((undefined4 *)GEN_TOP((iVar3 + 0x24))),*((undefined4 *)GEN_TOP((iVar3 + 0x20))));
    F_00e2ebc0(*((undefined * PTR32 *)GEN_TOP(((int)pvVar1 + 0x20))) GEN_EDX_ARG,iVar3);
    F_00e36660(((int *)(gen_frame + 0x0)) GEN_EDX_ARG);
    return 1;
  }
LAB_00e28f30: ;
  F_00e36660(((int *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00e28f50 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e28f50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe28f50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[25])REFP(0x11573ec));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_FWD,1);
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[25])REFP(0x1157384));
  F_00e2e6d0(this GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 0x8c))) =
       (*(undefined * PTR32 (*)[7])REFP(0x11572cc));
  F_00e30b00(((undefined4 *)GEN_TOP(((int)this + 0x8c))) GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 100))) =
       (*(undefined * PTR32 (*)[7])REFP(0x11572ac));
  F_00e30990(((undefined4 *)GEN_TOP(((int)this + 100))) GEN_EDX_ARG);
  uVar2 = F_00e316d0(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00e28fa0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e28fa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe28fa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 * puVar1;
  undefined * pvVar2;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004069f0(4)));
  if (puVar1 == ((undefined4 *)GEN_TOP(0x0))) {
    puVar1 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x115720c));
  }
  F_00e31250(this GEN_EDX_ARG,puVar1,0,1,0x1000);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[25])REFP(0x1157384));
  F_00e2f030(((undefined *)GEN_TOP(((int)this + 100))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 100))) =
       (*(undefined * PTR32 (*)[7])REFP(0x11572ac));
  F_00e2fcf0(((undefined *)GEN_TOP(((int)this + 0x8c))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x8c))) =
       (*(undefined * PTR32 (*)[7])REFP(0x11572cc));
  *((undefined4 *)GEN_TOP(((int)this + 0xb4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xbc))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[25])REFP(0x11573ec));
  *((undefined4 *)GEN_TOP(((int)this + 0xc0))) = 0;
  pvVar2 = ((undefined *)GEN_TOP(F_00406b90(0x110,0,0)));
  if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
    pvVar2 = ((undefined *)GEN_TOP(F_00e356f0(pvVar2 GEN_EDX_ARG,this,param_1)));
    *((undefined * PTR32 *)GEN_TOP(((int)this + 8))) = pvVar2;
    F_00e34460(pvVar2 GEN_EDX_ARG);
    return (uint)this;
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  F_00e34460(((undefined *)GEN_TOP(0x0)) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00e29060 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e29060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe29060u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint in_EAX = 0;
  uint uVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 8)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x44))))(this GEN_EDX_FWD);
    if (*((int *)GEN_TOP(((int)this + 0x24))) != 0) {
      F_00e31580(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x20))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x20))),0);
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG);
    in_EAX = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  }
  if (*((int *)GEN_TOP(((int)this + 0xc0))) == 0) {
    uVar2 = F_00c31900(this GEN_EDX_ARG);
    in_EAX = 0;
    if (uVar2 != 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0xc0))) = 1;
      return 1;
    }
  }
  return CONCAT31((int3)(in_EAX >> 8),1);
}

/* ref: FUN_00e290e0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e290e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe290e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  int * piVar1;
  byte bVar2;
  int iVar3;
  
  iVar3 = (int)(*(undefined * PTR32 * PTR32 *)&gen_args[0]);
  if (*((int *)GEN_TOP(((int)this + 0x58))) != 0) {
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 * PTR32 *)&gen_args[0]) + 0xc))) = *((undefined4 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x54))) + 8)));
    piVar1 = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 0x54)))));
    if (piVar1 != *((int * PTR32 *)GEN_TOP(((int)this + 0x54)))) {
      *((int *)GEN_TOP(piVar1[1])) = *piVar1;
      *((int *)GEN_TOP((*piVar1 + 4))) = piVar1[1];
      F_00406ad0(piVar1);
      *((int *)GEN_TOP(((int)this + 0x58))) = *((int *)GEN_TOP(((int)this + 0x58))) - 1;
    }
LAB_00e29135: ;
    F_00e360f0(&(*(undefined * PTR32 * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    (*(undefined * PTR32 * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[13])REFP(0x1157164));
    F_00e36130((undefined *)&(*(undefined * PTR32 * PTR32 *)&gen_args[0]) GEN_EDX_ARG,0,iVar3);
    iVar3 = *((int *)GEN_TOP((iVar3 + 0xc)));
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *((int *)GEN_TOP((iVar3 + 0x24)));
    }
    if (*((short *)GEN_TOP((iVar3 + 2))) == 2) {
      *((undefined4 *)GEN_TOP(((int)this + 0xc0))) = 3;
    }
    F_00e360e0(&(*(undefined * PTR32 * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    return 1;
  }
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) != ((undefined *)GEN_TOP(0x0))) {
    bVar2 = F_00e31c00(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,(*(undefined * PTR32 * PTR32 *)&gen_args[0]));
    if (bVar2 != 0) goto LAB_00e29135;
  }
  return 0;
}

/* ref: FUN_00e29220 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e29220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe29220u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *(uint *)this;
  *param_1 = uVar1;
  *(undefined8 *)(param_1 + 1) = *((undefined8 *)GEN_TOP(((int)this + 4)));
  *(undefined8 *)(param_1 + 3) = *((undefined8 *)GEN_TOP(((int)this + 0xc)));
  *(undefined8 *)(param_1 + 5) = *((undefined8 *)GEN_TOP(((int)this + 0x14)));
  *(undefined8 *)(param_1 + 7) = *((undefined8 *)GEN_TOP(((int)this + 0x1c)));
  return uVar1;
}

/* ref: FUN_00e29270 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e29270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe29270u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_1 = 0x38;
  *(undefined2 *)(param_1 + 3) = 1;
  param_1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  param_1[2] = *((undefined4 *)GEN_TOP(((int)this + 8)));
  param_1[4] = *((undefined4 *)GEN_TOP(((int)this + 0x10)));
  *(undefined8 *)(param_1 + 5) = *((undefined8 *)GEN_TOP(((int)this + 0x14)));
  *(undefined8 *)(param_1 + 7) = *((undefined8 *)GEN_TOP(((int)this + 0x1c)));
  *(undefined8 *)(param_1 + 9) = *((undefined8 *)GEN_TOP(((int)this + 0x24)));
  *(undefined8 *)(param_1 + 0xb) = *((undefined8 *)GEN_TOP(((int)this + 0x2c)));
  return (uint)param_1;
}

/* ref: FUN_00e292e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e292e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe292e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *(uint *)this;
  *param_1 = uVar1;
  *(undefined8 *)(param_1 + 1) = *((undefined8 *)GEN_TOP(((int)this + 0xc)));
  *(undefined8 *)(param_1 + 3) = *((undefined8 *)GEN_TOP(((int)this + 0x14)));
  *(undefined8 *)(param_1 + 5) = *((undefined8 *)GEN_TOP(((int)this + 0x1c)));
  *(undefined8 *)(param_1 + 7) = *((undefined8 *)GEN_TOP(((int)this + 0x24)));
  return uVar1;
}

/* ref: FUN_00e29330 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e29330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe29330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_1 = 0x38;
  *(undefined2 *)(param_1 + 3) = 2;
  param_1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  param_1[2] = *((undefined4 *)GEN_TOP(((int)this + 8)));
  param_1[4] = *((undefined4 *)GEN_TOP(((int)this + 0x10)));
  *(undefined8 *)(param_1 + 5) = *((undefined8 *)GEN_TOP(((int)this + 0x1c)));
  *(undefined8 *)(param_1 + 7) = *((undefined8 *)GEN_TOP(((int)this + 0x24)));
  *(undefined8 *)(param_1 + 9) = *((undefined8 *)GEN_TOP(((int)this + 0x2c)));
  *(undefined8 *)(param_1 + 0xb) = *((undefined8 *)GEN_TOP(((int)this + 0x34)));
  return (uint)param_1;
}

/* ref: FUN_00e293a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e293a0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe293a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  F_00e360f0(in_ecx GEN_EDX_FWD);
  *in_ecx = (*(undefined * PTR32 (*)[13])REFP(0x1157164));
  return (uint)in_ecx;
}

/* ref: FUN_00e293d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e293d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe293d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 8))) = param_2;
  return param_2;
}

/* ref: NetBufferFactoryInterface_TChatProtoUp_ChatProtoChannel_Network_Application_IpcChannel::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e29400(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe29400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x115719c))
  ;
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: NetBufferFactoryInterface_TChatProtoDown_ChatProtoChannel_Network_Application_IpcChannel::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e29430(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe29430u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x11571b4));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00e29460 */
GEN_LIB GEN_FRAME uint F_00e29460(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe29460u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x14;
}

/* ref: FUN_00e29470 */
GEN_LIB GEN_FRAME uint F_00e29470(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe29470u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x15;
}

/* ref: FUN_00e29480 */
GEN_LIB GEN_FRAME uint F_00e29480(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe29480u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e29490 */
GEN_LIB GEN_FRAME uint F_00e29490(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe29490u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 4;
}

/* ref: FUN_00e294a0 */
GEN_LIB GEN_FRAME uint F_00e294a0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe294a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 8;
}

/* ref: FUN_00e294b0 */
GEN_LIB GEN_FRAME uint F_00e294b0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe294b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: FUN_00e294c0 */
GEN_LIB GEN_FRAME uint F_00e294c0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe294c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*((uint *)GEN_TOP((param_1 + 8))) + 0x15)));
  uVar2 = *((uint *)GEN_TOP((param_1 + 8)));
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *((uint *)GEN_TOP((uVar3 + 8)));
    cVar1 = *((char *)GEN_TOP((uVar2 + 0x15)));
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00e294e0 */
GEN_LIB GEN_FRAME uint F_00e294e0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe294e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *((char *)GEN_TOP((*param_1 + 0x15)));
  piVar2 = ((int *)GEN_TOP(*param_1));
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = ((int *)GEN_TOP(*piVar3));
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00e29500 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e29500(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe29500u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00406ad0(param_1);
  return uVar1;
}

/* ref: FUN_00e29520 */
GEN_LIB GEN_FRAME uint F_00e29520(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe29520u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x14;
}

/* ref: FUN_00e29530 */
GEN_LIB GEN_FRAME uint F_00e29530(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe29530u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x15;
}

/* ref: FUN_00e29540 */
GEN_LIB GEN_FRAME uint F_00e29540(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe29540u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e29550 */
GEN_LIB GEN_FRAME uint F_00e29550(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe29550u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 4;
}

/* ref: FUN_00e29560 */
GEN_LIB GEN_FRAME uint F_00e29560(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe29560u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 8;
}

/* ref: FUN_00e29570 */
GEN_LIB GEN_FRAME uint F_00e29570(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe29570u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: FUN_00e29580 */
GEN_LIB GEN_FRAME uint F_00e29580(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe29580u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*((uint *)GEN_TOP((param_1 + 8))) + 0x15)));
  uVar2 = *((uint *)GEN_TOP((param_1 + 8)));
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *((uint *)GEN_TOP((uVar3 + 8)));
    cVar1 = *((char *)GEN_TOP((uVar2 + 0x15)));
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00e295a0 */
GEN_LIB GEN_FRAME uint F_00e295a0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe295a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *((char *)GEN_TOP((*param_1 + 0x15)));
  piVar2 = ((int *)GEN_TOP(*param_1));
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = ((int *)GEN_TOP(*piVar3));
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00e295c0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e295c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe295c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00406ad0(param_1);
  return uVar1;
}

/* ref: FUN_00e295f0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e295f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe295f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00e29620 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e29620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe29620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00e29650 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e29650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe29650u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*((char *)GEN_TOP((iVar2 + 0x15))) == '\0') {
    piVar3 = *((int * PTR32 *)GEN_TOP((iVar2 + 8)));
    if (*((char *)GEN_TOP(((int)piVar3 + 0x15))) == '\0') {
      cVar1 = *((char *)GEN_TOP((*piVar3 + 0x15)));
      piVar4 = ((int *)GEN_TOP(*piVar3));
      while (cVar1 == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar4 + 0x15)));
        piVar3 = piVar4;
        piVar4 = ((int *)GEN_TOP(*piVar4));
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
    cVar1 = *((char *)GEN_TOP((iVar2 + 0x15)));
    while ((cVar1 == '\0' && (*(int *)this == *((int *)GEN_TOP((iVar2 + 8)))))) {
      *(int *)this = iVar2;
      iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
      cVar1 = *((char *)GEN_TOP((iVar2 + 0x15)));
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00e296a0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e296a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe296a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*((char *)GEN_TOP((iVar2 + 0x15))) == '\0') {
    piVar3 = *((int * PTR32 *)GEN_TOP((iVar2 + 8)));
    if (*((char *)GEN_TOP(((int)piVar3 + 0x15))) == '\0') {
      cVar1 = *((char *)GEN_TOP((*piVar3 + 0x15)));
      piVar4 = ((int *)GEN_TOP(*piVar3));
      while (cVar1 == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar4 + 0x15)));
        piVar3 = piVar4;
        piVar4 = ((int *)GEN_TOP(*piVar4));
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
    cVar1 = *((char *)GEN_TOP((iVar2 + 0x15)));
    while ((cVar1 == '\0' && (*(int *)this == *((int *)GEN_TOP((iVar2 + 8)))))) {
      *(int *)this = iVar2;
      iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
      cVar1 = *((char *)GEN_TOP((iVar2 + 0x15)));
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00e296f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e296f0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe296f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e29700 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e29700(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe29700u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e29710 */
GEN_LIB GEN_FRAME uint F_00e29710(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe29710u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e29720 */
GEN_LIB GEN_FRAME uint F_00e29720(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe29720u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e29790 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e29790(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe29790u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x14))) = param_2;
  return param_2;
}

/* ref: FUN_00e297a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e297a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe297a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x18))) = param_2;
  return param_2;
}

/* ref: FUN_00e297b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e297b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe297b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x20))) = param_2;
  return param_2;
}

/* ref: FUN_00e297c0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e297c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe297c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00e297e0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e297e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe297e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00e29830 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e29830(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe29830u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00406ad0(param_1);
  return uVar1;
}

/* ref: FUN_00e29850 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e29850(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe29850u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00406ad0(param_1);
  return uVar1;
}

/* ref: FUN_00e29870 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e29870(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe29870u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00406ad0(param_1);
  return uVar1;
}

/* ref: FUN_00e29890 */
GEN_LIB GEN_FRAME uint F_00e29890(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe29890u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e298a0 */
GEN_LIB GEN_FRAME uint F_00e298a0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe298a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 4;
}

/* ref: FUN_00e298b0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e298b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe298b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00406ad0(param_1);
  return uVar1;
}

/* ref: FUN_00e29900 */
GEN_LIB GEN_FRAME uint F_00e29900(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe29900u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 8;
}

/* ref: FUN_00e29920 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e29920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe29920u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00e29940 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e29940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe29940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00e29960 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e29960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe29960u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00e29980 */
GEN_LIB GEN_FRAME uint F_00e29980(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe29980u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x14;
}

/* ref: FUN_00e29990 */
GEN_LIB GEN_FRAME uint F_00e29990(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe29990u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x15;
}

/* ref: FUN_00e299a0 */
GEN_LIB GEN_FRAME uint F_00e299a0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe299a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e299b0 */
GEN_LIB GEN_FRAME uint F_00e299b0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe299b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 4;
}

/* ref: FUN_00e299c0 */
GEN_LIB GEN_FRAME uint F_00e299c0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe299c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 8;
}

/* ref: FUN_00e299d0 */
GEN_LIB GEN_FRAME uint F_00e299d0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe299d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: FUN_00e299e0 */
GEN_LIB GEN_FRAME uint F_00e299e0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe299e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*((uint *)GEN_TOP((param_1 + 8))) + 0x15)));
  uVar2 = *((uint *)GEN_TOP((param_1 + 8)));
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *((uint *)GEN_TOP((uVar3 + 8)));
    cVar1 = *((char *)GEN_TOP((uVar2 + 0x15)));
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00e29a00 */
GEN_LIB GEN_FRAME uint F_00e29a00(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe29a00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *((char *)GEN_TOP((*param_1 + 0x15)));
  piVar2 = ((int *)GEN_TOP(*param_1));
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = ((int *)GEN_TOP(*piVar3));
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00e29a20 */
GEN_LIB GEN_FRAME uint F_00e29a20(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe29a20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x14;
}

/* ref: FUN_00e29a30 */
GEN_LIB GEN_FRAME uint F_00e29a30(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe29a30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*((uint *)GEN_TOP((param_1 + 8))) + 0x15)));
  uVar2 = *((uint *)GEN_TOP((param_1 + 8)));
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *((uint *)GEN_TOP((uVar3 + 8)));
    cVar1 = *((char *)GEN_TOP((uVar2 + 0x15)));
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00e29a50 */
GEN_LIB GEN_FRAME uint F_00e29a50(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe29a50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *((char *)GEN_TOP((*param_1 + 0x15)));
  piVar2 = ((int *)GEN_TOP(*param_1));
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = ((int *)GEN_TOP(*piVar3));
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00e29a70 */
GEN_LIB GEN_FRAME uint F_00e29a70(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe29a70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x14;
}

/* ref: FUN_00e29a80 */
GEN_LIB GEN_FRAME uint F_00e29a80(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe29a80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*((uint *)GEN_TOP((param_1 + 8))) + 0x15)));
  uVar2 = *((uint *)GEN_TOP((param_1 + 8)));
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *((uint *)GEN_TOP((uVar3 + 8)));
    cVar1 = *((char *)GEN_TOP((uVar2 + 0x15)));
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00e29aa0 */
GEN_LIB GEN_FRAME uint F_00e29aa0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe29aa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *((char *)GEN_TOP((*param_1 + 0x15)));
  piVar2 = ((int *)GEN_TOP(*param_1));
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = ((int *)GEN_TOP(*piVar3));
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00e29ac0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e29ac0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe29ac0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e29ae0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e29ae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe29ae0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*((char *)GEN_TOP((iVar2 + 0x15))) == '\0') {
    piVar3 = *((int * PTR32 *)GEN_TOP((iVar2 + 8)));
    if (*((char *)GEN_TOP(((int)piVar3 + 0x15))) == '\0') {
      cVar1 = *((char *)GEN_TOP((*piVar3 + 0x15)));
      piVar4 = ((int *)GEN_TOP(*piVar3));
      while (cVar1 == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar4 + 0x15)));
        piVar3 = piVar4;
        piVar4 = ((int *)GEN_TOP(*piVar4));
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
    cVar1 = *((char *)GEN_TOP((iVar2 + 0x15)));
    while ((cVar1 == '\0' && (*(int *)this == *((int *)GEN_TOP((iVar2 + 8)))))) {
      *(int *)this = iVar2;
      iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
      cVar1 = *((char *)GEN_TOP((iVar2 + 0x15)));
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00e29b30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e29b30(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe29b30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e29b40 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e29b40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe29b40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*((char *)GEN_TOP((iVar2 + 0x15))) == '\0') {
    piVar3 = *((int * PTR32 *)GEN_TOP((iVar2 + 8)));
    if (*((char *)GEN_TOP(((int)piVar3 + 0x15))) == '\0') {
      cVar1 = *((char *)GEN_TOP((*piVar3 + 0x15)));
      piVar4 = ((int *)GEN_TOP(*piVar3));
      while (cVar1 == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar4 + 0x15)));
        piVar3 = piVar4;
        piVar4 = ((int *)GEN_TOP(*piVar4));
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
    cVar1 = *((char *)GEN_TOP((iVar2 + 0x15)));
    while ((cVar1 == '\0' && (*(int *)this == *((int *)GEN_TOP((iVar2 + 8)))))) {
      *(int *)this = iVar2;
      iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
      cVar1 = *((char *)GEN_TOP((iVar2 + 0x15)));
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00e29b90 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e29b90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe29b90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*((char *)GEN_TOP((iVar2 + 0x15))) == '\0') {
    piVar3 = *((int * PTR32 *)GEN_TOP((iVar2 + 8)));
    if (*((char *)GEN_TOP(((int)piVar3 + 0x15))) == '\0') {
      cVar1 = *((char *)GEN_TOP((*piVar3 + 0x15)));
      piVar4 = ((int *)GEN_TOP(*piVar3));
      while (cVar1 == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar4 + 0x15)));
        piVar3 = piVar4;
        piVar4 = ((int *)GEN_TOP(*piVar4));
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
    cVar1 = *((char *)GEN_TOP((iVar2 + 0x15)));
    while ((cVar1 == '\0' && (*(int *)this == *((int *)GEN_TOP((iVar2 + 8)))))) {
      *(int *)this = iVar2;
      iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
      cVar1 = *((char *)GEN_TOP((iVar2 + 0x15)));
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00e29bf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e29bf0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe29bf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0xc))) = param_2;
  return param_2;
}

/* ref: FUN_00e29c30 */
GEN_LIB GEN_FRAME uint F_00e29c30(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe29c30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e29c40 */
GEN_LIB GEN_FRAME uint F_00e29c40(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe29c40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e29c50 */
GEN_LIB GEN_FRAME uint F_00e29c50(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe29c50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: PrimaryEntityFactoryClass_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e29c60(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe29c60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x11571cc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00e29cb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e29cb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe29cb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(((int)this + 0xc)));
  if (puVar1 != param_1) {
    *puVar1 = *param_1;
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_1[1];
  }
  return (uint)puVar1;
}

/* ref: FUN_00e29ce0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e29ce0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe29ce0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00406ad0(param_1);
  return uVar1;
}

/* ref: FUN_00e29d10 */
GEN_LIB GEN_FRAME uint F_00e29d10(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe29d10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e29d20 */
GEN_LIB GEN_FRAME uint F_00e29d20(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe29d20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 4;
}

/* ref: FUN_00e29d30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e29d30(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe29d30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0xc))) = param_2;
  return param_2;
}

/* ref: FUN_00e29da0 */
GEN_LIB GEN_FRAME uint F_00e29da0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe29da0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e29db0 */
GEN_LIB GEN_FRAME uint F_00e29db0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe29db0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0xaaaaaab) && (uVar1 = F_004069f0(param_1 * 0x18), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e29e00 */
GEN_LIB GEN_FRAME uint F_00e29e00(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe29e00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0xaaaaaab) && (uVar1 = F_004069f0(param_1 * 0x18), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e29e50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e29e50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(ulonglong * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe29e50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(ulonglong * param_1 = (ulonglong *)(uintptr_t)gen_a1;)
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) + 1;
  uVar3 = F_0046ff40();
  uVar2 = (uint)uVar3;
  if (*((int *)GEN_TOP(((int)this + 0x18))) == 0 && *((int *)GEN_TOP(((int)this + 0x1c))) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = uVar3 - *((longlong *)GEN_TOP(((int)this + 0x18)));
  }
  *((longlong *)GEN_TOP(((int)this + 0x10))) = lVar1;
  *((ulonglong *)GEN_TOP(((int)this + 0x18))) = uVar3;
  *((int *)GEN_TOP(((int)this + 0x28))) = (int)*param_1;
  *((int *)GEN_TOP(((int)this + 0x2c))) = *((int *)GEN_TOP(((int)param_1 + 4)));
  if (((int)*param_1 != 0 || *((int *)GEN_TOP(((int)param_1 + 4))) != 0) && (*param_1 < uVar3)) {
    uVar2 = (uint)(uVar3 - *param_1);
    *((ulonglong *)GEN_TOP(((int)this + 0x20))) = uVar3 - *param_1;
  }
  return uVar2;
}

/* ref: FUN_00e29f00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e29f00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe29f00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((uint *)GEN_TOP(((int)this + 0x10))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_2;
  return param_1;
}

/* ref: FUN_00e29f60 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e29f60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe29f60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00e29ae0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00e29f90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e29f90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe29f90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00e29fe0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e29fe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe29fe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00e2a000 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2a000(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe2a000u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e2a020 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2a020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe2a020u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  *param_1 = puVar1;
  *(undefined4 *)this = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_00e2a040 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e2a040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe2a040u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00e2a0a0 */
GEN_LIB GEN_FRAME uint F_00e2a0a0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe2a0a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 8;
}

/* ref: FUN_00e2a0b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2a0b0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe2a0b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: IpcEntityTmpl_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2a140(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe2a140u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x11571fc));
  F_01050b80(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: EntityWrapper_TargetEntityTmpl_TChatProtoUp_ChatProtoChannel_Network_Application::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2a170(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe2a170u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1157204));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: TargetEntityFactoryClass_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e2a1b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe2a1b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_FWD,1);
  }
  return;
}

/* ref: TargetEntityFactoryClass_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2a1d0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe2a1d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x11571dc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00e2a200 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2a200(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe2a200u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  F_01050b90(in_ecx GEN_EDX_FWD,param_3);
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x11571fc));
  in_ecx[4] = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e2a250 */
GEN_LIB GEN_FRAME uint F_00e2a250(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe2a250u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0x15555556) && (uVar1 = F_004069f0(param_1 * 0xc), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e2a2a0 */
GEN_LIB GEN_FRAME uint F_00e2a2a0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe2a2a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e2a2c0 */
GEN_LIB GEN_FRAME uint F_00e2a2c0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe2a2c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0xaaaaaab) && (uVar1 = F_004069f0(param_1 * 0x18), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e2a320 */
GEN_LIB GEN_FRAME uint F_00e2a320(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe2a320u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0xaaaaaab) && (uVar1 = F_004069f0(param_1 * 0x18), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e2a370 */
GEN_LIB GEN_FRAME uint F_00e2a370(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe2a370u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0x15555556) && (uVar1 = F_004069f0(param_1 * 0xc), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e2a3c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2a3c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe2a3c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x1157204));
  if (param_1 != 0) {
    *((undefined4 *)GEN_TOP(((int)this + 4))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
    *((int *)GEN_TOP(((int)this + 8))) = param_1;
    return (uint)this;
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return (uint)this;
}

/* ref: FUN_00e2a400 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2a400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe2a400u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL_TOP(0x1100c, 4, 4);
  uint uVar1;
  undefined1 * puVar2;
  
  (*(uint *)(gen_frame + 0x11004)) = 0xe2a40d;
  (*(uint *)(gen_frame + 0x11004)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  if (*((char *)GEN_TOP((uVar1 + 0x19))) == '\x01') {
    if ((param_1 == ((undefined1 *)GEN_TOP(0x0))) || (param_2 == 0)) {
      puVar2 = ((undefined1 *)(gen_frame + 0x10004));
      (*(int *)(gen_frame + 0x10000)) = 0x1000;
    }
    else {
      (*(int *)(gen_frame + 0x10000)) = param_2;
      puVar2 = param_1;
    }
    F_01050f50(puVar2,&(*(int *)(gen_frame + 0x10000)),*((int *)GEN_TOP(((int)this + 8))) + 0x20,
                 *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x10))) - 0x20);
    F_00c46aa0(*((int *)GEN_TOP(((int)this + 8))) + 0x20,puVar2,(*(int *)(gen_frame + 0x10000)));
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x19))) = 0;
    uVar1 = (*(int *)(gen_frame + 0x10000)) + 0x20;
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x10))) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00e2a500 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2a500(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe2a500u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x14))) = param_2;
  return param_2;
}

/* ref: FUN_00e2a510 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2a510(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe2a510u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x18))) = param_2;
  return param_2;
}

/* ref: FUN_00e2a520 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2a520(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe2a520u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x20))) = param_2;
  return param_2;
}

/* ref: FUN_00e2a5a0 */
GEN_LIB GEN_FRAME uint F_00e2a5a0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe2a5a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e2a5b0 */
GEN_LIB GEN_FRAME uint F_00e2a5b0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe2a5b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00e2a5f0 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e2a5f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe2a5f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL(0x48, 8);
  int * piVar1;
  short * psVar2;
  undefined8 * puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  
  if ((*((int *)GEN_TOP(((int)this + 0x10))) == 0) && (*((int *)GEN_TOP(((int)this + 0xc))) + 0x58U <= *(uint *)this)) {
    if (*((int *)GEN_TOP(((int)this + 0xc))) == 0) {
      puVar3 = *((undefined8 * PTR32 *)GEN_TOP(((int)this + 8)));
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x10))) = 0x20;
      *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x16))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0x20;
    }
    iVar4 = *((int *)GEN_TOP(((int)this + 0xc)));
    iVar5 = *((int *)GEN_TOP(((int)this + 8)));
    (*(undefined2 *)(gen_frame + 0xc)) = 2;
    ((undefined4 *)(gen_frame + 0x0))[1] = 0;
    ((undefined4 *)(gen_frame + 0x0))[2] = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = param_1;
    ((undefined4 *)(gen_frame + 0x0))[0] = 0x38;
    puVar7 = ((undefined4 *)(gen_frame + 0x0));
    puVar8 = ((undefined4 *)GEN_TOP((iVar4 + iVar5)));
    for (iVar6 = 0xe; iVar6 != 0; iVar6 = iVar6 - 1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    *((int *)GEN_TOP(((int)this + 0xc))) = *((int *)GEN_TOP(((int)this + 0xc))) + 0x38;
    piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x10)));
    *piVar1 = *piVar1 + 0x38;
    psVar2 = ((short *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x16)));
    *psVar2 = *psVar2 + 1;
    return 1;
  }
  return 0;
}

/* ref: FUN_00e2a6b0 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e2a6b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe2a6b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL(0x2a8, 8);
  int * piVar1;
  short * psVar2;
  undefined8 * puVar3;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  (*(uint *)(gen_frame + 0x294)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x298);
  if ((*((int *)GEN_TOP(((int)this + 0x10))) == 0) && (*((int *)GEN_TOP(((int)this + 0xc))) + 0x2b0U <= *(uint *)this)) {
    if (*((int *)GEN_TOP(((int)this + 0xc))) == 0) {
      puVar3 = *((undefined8 * PTR32 *)GEN_TOP(((int)this + 8)));
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x10))) = 0x20;
      *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x16))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0x20;
    }
    (*(undefined2 *)(gen_frame + 0xc)) = 10;
    ((undefined4 *)(gen_frame + 0x0))[0] = 0x290;
    ((undefined4 *)(gen_frame + 0x0))[1] = 0;
    ((undefined4 *)(gen_frame + 0x0))[2] = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = param_2;
    if ((param_1 != ((int *)GEN_TOP(0x0))) &&
       (uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x14))))(param_1 GEN_EDX_FWD,param_2,((undefined4 *)(gen_frame + 0x0))), (char)uVar4 != '\0')) {
      puVar6 = ((undefined4 *)(gen_frame + 0x0));
      puVar7 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + *((int *)GEN_TOP(((int)this + 8))))));
      for (iVar5 = 0xa4; iVar5 != 0; iVar5 = iVar5 - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      *((int *)GEN_TOP(((int)this + 0xc))) = *((int *)GEN_TOP(((int)this + 0xc))) + 0x290;
      piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x10)));
      *piVar1 = *piVar1 + 0x290;
      psVar2 = ((short *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x16)));
      *psVar2 = *psVar2 + 1;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00e2a7c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2a7c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe2a7c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x1157204));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *((undefined4 *)GEN_TOP((param_1 + 4)));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
  return (uint)this;
}

/* ref: FUN_00e2a7e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2a7e0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe2a7e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e2a810 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e2a810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe2a810u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00e2a830 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2a830(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe2a830u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e2a850 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e2a850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2a850u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*((char *)GEN_TOP(((int)puVar2 + 0x15))) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = ((int *)GEN_TOP(*puVar2));
  if (*((char *)GEN_TOP(((int)piVar5 + 0x15))) == '\0') {
    iVar3 = piVar5[2];
    if (*((char *)GEN_TOP((piVar5[2] + 0x15))) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *((int *)GEN_TOP((iVar4 + 8)));
      } while (*((char *)GEN_TOP((iVar3 + 0x15))) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = ((int *)GEN_TOP(puVar2[1]));
    cVar1 = *((char *)GEN_TOP(((int)piVar5 + 0x15)));
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = ((int *)GEN_TOP(piVar5[1]));
      cVar1 = *((char *)GEN_TOP(((int)piVar5 + 0x15)));
    }
    if (*((char *)GEN_TOP((*(int *)this + 0x15))) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00e2a8b0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e2a8b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe2a8b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  if ((*((int *)GEN_TOP((param_1 + 0xc))) != 0) && (*((int *)GEN_TOP((param_1 + 0xc))) == *(int *)this)) {
    return *((int *)GEN_TOP((param_1 + 0x10))) == *((int *)GEN_TOP(((int)this + 4)));
  }
  return 0;
}

/* ref: FUN_00e2a8e0 */
GEN_LIB GEN_FRAME uint F_00e2a8e0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe2a8e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e2a8f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2a8f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe2a8f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e2a910 */
GEN_LIB GEN_FRAME uint F_00e2a910(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe2a910u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e2a920 */
GEN_LIB GEN_FRAME uint F_00e2a920(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe2a920u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e2a940 */
GEN_LIB GEN_FRAME uint F_00e2a940(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe2a940u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e2a950 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2a950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe2a950u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e2a970 */
GEN_LIB GEN_FRAME uint F_00e2a970(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe2a970u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0xaaaaaab) && (uVar1 = F_004069f0(param_1 * 0x18), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e2a9c0 */
GEN_LIB GEN_FRAME uint F_00e2a9c0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe2a9c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e2a9d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2a9d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe2a9d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: Application::Network::ChatClient::ChatProtoDownDummyCallback::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2a9f0(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe2a9f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00e360e0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return param_1;
}

/* ref: FUN_00e2aa60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2aa60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe2aa60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *((uint *)GEN_TOP((uVar2 + 8)));
  if (*((char *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 8))) + 0x15))) == '\0') {
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

/* ref: FUN_00e2aaf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2aaf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe2aaf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *((uint *)GEN_TOP((uVar2 + 8)));
  if (*((char *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 8))) + 0x15))) == '\0') {
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

/* ref: FUN_00e2ab50 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e2ab50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2ab50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00e29650(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00e2ab60 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e2ab60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2ab60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00e296a0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00e2ab70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2ab70(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe2ab70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e2ab80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2ab80(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe2ab80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e2abc0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e2abc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2abc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00e29650(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00e2abd0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e2abd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2abd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00e296a0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00e2ac50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2ac50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe2ac50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  *param_1 = puVar1;
  *(undefined4 *)this = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_00e2ac90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2ac90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe2ac90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_00e29650(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00e2acb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2acb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe2acb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_00e296a0(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00e2acd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2acd0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe2acd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e2ad00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2ad00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe2ad00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *((uint *)GEN_TOP((uVar2 + 8)));
  if (*((char *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 8))) + 0x15))) == '\0') {
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

/* ref: FUN_00e2ad70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2ad70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe2ad70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *((uint *)GEN_TOP((uVar2 + 8)));
  if (*((char *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 8))) + 0x15))) == '\0') {
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

/* ref: FUN_00e2ade0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2ade0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe2ade0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *((uint *)GEN_TOP((uVar2 + 8)));
  if (*((char *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 8))) + 0x15))) == '\0') {
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

/* ref: FUN_00e2ae40 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e2ae40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2ae40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00e29ae0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00e2ae50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2ae50(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe2ae50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e2ae60 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e2ae60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2ae60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00e29b40(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00e2ae70 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e2ae70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2ae70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00e29b90(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00e2ae80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2ae80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe2ae80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*param_2,0);
  if (uVar2 != 0) {
    *((uint *)GEN_TOP((param_1 + 0xc))) = uVar2;
    return param_1;
  }
  return 0;
}

/* ref: FUN_00e2af00 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e2af00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2af00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00e29b40(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: PrimaryEntityFactoryClass_LF_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2af40(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe2af40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x11571cc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: PrimaryEntityFactoryClass_LF_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf2 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e2af80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe2af80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_FWD,1);
  }
  return;
}

/* ref: FUN_00e2afa0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e2afa0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe2afa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_00e2b000 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e2b000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2b000u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00e29b90(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00e2b010 */
GEN_LIB GEN_FRAME uint F_00e2b010(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe2b010u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: FUN_00e2b020 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e2b020(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe2b020u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0xaaaaaab) && (uVar1 = F_004069f0(param_1 * 0x18), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e2b070 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e2b070(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe2b070u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0xaaaaaab) && (uVar1 = F_004069f0(param_1 * 0x18), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e2b0f0 */
GEN_LIB GEN_FRAME undefined4 * GEN_THISCALL F_00e2b0f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe2b0f0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e2b120 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2b120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe2b120u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0xc)));
  if (((-1 < param_1) || ((uint)-param_1 <= (uint)piVar1[8])) &&
     ((param_1 < 1 || ((uint)(piVar1[8] + param_1) < 0x431)))) {
    if (param_1 != 0) {
      piVar1[8] = piVar1[8] + param_1;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_FWD,param_1);
    }
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
    return (uint)piVar1;
  }
  piVar1[8] = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  return (uint)piVar1;
}

/* ref: FUN_00e2b180 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2b180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe2b180u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x1157204));
  if (param_1 != 0) {
    *((undefined4 *)GEN_TOP(((int)this + 4))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
    *((int *)GEN_TOP(((int)this + 8))) = param_1;
    *(undefined * PTR32 * PTR32 *)this =
         (*(undefined * PTR32 (*)[1])REFP(0x115721c));
    return (uint)this;
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115721c));
  return (uint)this;
}

/* ref: ConnectionOwner_TargetEntityTmpl_TChatProtoUp_ChatProtoChannel_Network_Application::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2b1c0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe2b1c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1157204));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00e2b1f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2b1f0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe2b1f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00e2b200 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e2b200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe2b200u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00e2b240 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e2b240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe2b240u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00e2b280 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e2b280(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe2b280u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0x15555556) && (uVar1 = F_004069f0(param_1 * 0xc), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e2b2d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2b2d0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe2b2d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e2b2f0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e2b2f0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe2b2f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0xaaaaaab) && (uVar1 = F_004069f0(param_1 * 0x18), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e2b350 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e2b350(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe2b350u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0xaaaaaab) && (uVar1 = F_004069f0(param_1 * 0x18), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e2b3b0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e2b3b0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe2b3b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0x15555556) && (uVar1 = F_004069f0(param_1 * 0xc), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e2b400 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e2b400(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe2b400u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = _InterlockedExchange((volatile long *)((((uint *)GEN_TOP((param_2 + 0x48))))), (long)(1));
  return uVar1;
}

/* ref: FUN_00e2b420 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e2b420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe2b420u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_SUSPECT(0xe2b420u, "uStack_1a");
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int * piVar1;
  short * psVar2;
  undefined8 * puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  ulonglong * puVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined2 uStack_1a;
  
  if (*((char *)GEN_TOP(((int)this + 0x18))) != '\0') {
    iVar6 = _InterlockedCompareExchange((volatile long *)((((int *)GEN_TOP(((int)this + 0x14))))), (long)(1), (long)(0));
    if (iVar6 != 0) {
      return 0;
    }
  }
  if (*((int *)GEN_TOP(((int)this + 0x10))) != 0) {
    if (*((char *)GEN_TOP(((int)this + 0x18))) != '\0') {
      _InterlockedExchange((volatile long *)((((undefined4 *)GEN_TOP(((int)this + 0x14))))), (long)(0));
    }
    return 0;
  }
  iVar6 = *((int *)GEN_TOP((param_1 + 0x20)));
  uVar9 = iVar6 + 0x13U & 0xfffffffc;
  if (*((int *)GEN_TOP(((int)this + 0xc))) + 0x20 + uVar9 <= *(uint *)this) {
    if (*((int *)GEN_TOP(((int)this + 0xc))) == 0) {
      puVar3 = *((undefined8 * PTR32 *)GEN_TOP(((int)this + 8)));
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x10))) = 0x20;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x18))) = 1;
      *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x14))) = 0;
      *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x16))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0x20;
      **((undefined1 * PTR32 *)GEN_TOP(((int)this + 8))) = 0x52;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 1))) = 0x52;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 2))) = 0xa0;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 3))) = 0x41;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 4))) = 0xff;
    }
    uVar4 = *((undefined4 *)GEN_TOP((param_1 + 0x14)));
    uVar5 = *((undefined4 *)GEN_TOP((param_1 + 0x18)));
    puVar7 = ((ulonglong *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + *((int *)GEN_TOP(((int)this + 8))))));
    *puVar7 = CONCAT44(uVar4,iVar6 + 0x13U) & 0xfffffffffffffffc;
    puVar7[1] = CONCAT26(uStack_1a,CONCAT24(3,uVar5));
    *((int *)GEN_TOP(((int)this + 0xc))) = *((int *)GEN_TOP(((int)this + 0xc))) + 0x10;
    F_00c46aa0(*((int *)GEN_TOP(((int)this + 8))) + *((int *)GEN_TOP(((int)this + 0xc))),*((undefined4 *)GEN_TOP((param_1 + 0x24))),
               iVar6);
    if (param_2 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x18))))
                (param_2 GEN_EDX_ARG,uVar4,*((int *)GEN_TOP(((int)this + 0xc))) + *((int *)GEN_TOP(((int)this + 8))),iVar6);
    }
    *((int *)GEN_TOP(((int)this + 0xc))) = *((int *)GEN_TOP(((int)this + 0xc))) + iVar6;
    piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x10)));
    *piVar1 = *piVar1 + uVar9;
    psVar2 = ((short *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x16)));
    *psVar2 = *psVar2 + 1;
    uVar10 = F_0046ff40();
    *((ulonglong *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 8))) = uVar10;
    for (uVar8 = iVar6 + 0x10; uVar8 < uVar9; uVar8 = uVar8 + 1) {
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + *((int *)GEN_TOP(((int)this + 8)))))) = 0;
      *((int *)GEN_TOP(((int)this + 0xc))) = *((int *)GEN_TOP(((int)this + 0xc))) + 1;
    }
    if (*((char *)GEN_TOP(((int)this + 0x18))) != '\0') {
      _InterlockedExchange((volatile long *)((((undefined4 *)GEN_TOP(((int)this + 0x14))))), (long)(0));
    }
    return 1;
  }
  if (*((char *)GEN_TOP(((int)this + 0x18))) != '\0') {
    _InterlockedExchange((volatile long *)((((undefined4 *)GEN_TOP(((int)this + 0x14))))), (long)(0));
  }
  return 0;
}

/* ref: FUN_00e2b5e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2b5e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(int * param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xe2b5e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a5;)
  uint * puVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  uint * puVar6;
  uint * puVar7;
  
  *(undefined2 *)(param_2 + 5) = 0;
  if ((*((uint *)GEN_TOP(((int)this + 0xc))) < 0x20) ||
     (*((uint *)GEN_TOP(((int)this + 0xc))) < *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x10))))) {
    return 0;
  }
  F_00e2a400(this GEN_EDX_FWD,param_3,param_4);
  iVar2 = *((int *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = *((undefined4 *)GEN_TOP((iVar2 + 0x10)));
  if (*((int *)GEN_TOP(((int)this + 0x10))) == 0) {
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0x20;
  }
  iVar5 = *((int *)GEN_TOP(((int)this + 0x10)));
  if (iVar5 + 0x10U <= *((uint *)GEN_TOP(((int)this + 0xc)))) {
    puVar1 = param_2 + 2;
    *(undefined8 *)puVar1 = *((undefined8 *)GEN_TOP((iVar5 + iVar2)));
    *(undefined8 *)(param_2 + 4) = *((undefined8 *)GEN_TOP((iVar5 + 8 + iVar2)));
    uVar4 = *puVar1;
    iVar2 = *((int *)GEN_TOP(((int)this + 0x10)));
    if (uVar4 + iVar2 <= *((uint *)GEN_TOP(((int)this + 0xc)))) {
      switch((unsigned int)(uintptr_t)((short)param_2[5])) {
      case 1: ;
        if (uVar4 == 0x38) {
          puVar6 = ((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + iVar2)));
          puVar7 = puVar1;
          for (iVar5 = 0xe; iVar5 != 0; iVar5 = iVar5 - 1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
        }
        *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) + *puVar1;
        *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
        *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
        return 0;
      case 2: ;
        if (uVar4 == 0x38) {
          puVar6 = ((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + iVar2)));
          puVar7 = puVar1;
          for (iVar5 = 0xe; iVar5 != 0; iVar5 = iVar5 - 1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
        }
        *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) + *puVar1;
        *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
        *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
        return 0;
      case 3: ;
        piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x40))))(param_1 GEN_EDX_ARG)));
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,0x448,0);
        if (uVar4 == 0) {
          return 0;
        }
        *((uint *)GEN_TOP((uVar4 + 0x14))) = param_2[3];
        *((uint *)GEN_TOP((uVar4 + 0x18))) = param_2[4];
        F_00c46aa0(*((undefined4 *)GEN_TOP((uVar4 + 0x24))),
                   *((int *)GEN_TOP(((int)this + 8))) + 0x10 + *((int *)GEN_TOP(((int)this + 0x10))),*puVar1 - 0x10);
        *((uint *)GEN_TOP((uVar4 + 0x20))) = *puVar1 - 0x10;
        if (param_5 != ((int *)GEN_TOP(0x0))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_5 + 0x1c))))
                    (param_5 GEN_EDX_ARG,param_2[3],*((undefined4 *)GEN_TOP((uVar4 + 0x24))),*puVar1 - 0x10);
        }
        *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) + *puVar1;
        *param_2 = uVar4;
        if (*((int *)GEN_TOP(((int)this + 0x10))) == *((int *)GEN_TOP(((int)this + 0xc)))) {
          *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
          *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
        }
        return uVar4;
      default: ;
        *((uint *)GEN_TOP(((int)this + 0x10))) = uVar4 + iVar2;
        break;
      case 7: ;
        if (uVar4 == 0x18) {
          iVar5 = *((int *)GEN_TOP(((int)this + 8)));
          *(undefined8 *)puVar1 = *((undefined8 *)GEN_TOP((iVar5 + iVar2)));
          *(undefined8 *)(param_2 + 4) = *((undefined8 *)GEN_TOP((iVar5 + 8 + iVar2)));
          *(undefined8 *)(param_2 + 6) = *((undefined8 *)GEN_TOP((iVar5 + 0x10 + iVar2)));
        }
        *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) + *puVar1;
        if (*((int *)GEN_TOP(((int)this + 0x10))) != *((int *)GEN_TOP(((int)this + 0xc)))) {
          return 0;
        }
        *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
        *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
        return 0;
      case 8: ;
        if (uVar4 == 0x18) {
          iVar5 = *((int *)GEN_TOP(((int)this + 8)));
          *(undefined8 *)puVar1 = *((undefined8 *)GEN_TOP((iVar5 + iVar2)));
          *(undefined8 *)(param_2 + 4) = *((undefined8 *)GEN_TOP((iVar5 + 8 + iVar2)));
          *(undefined8 *)(param_2 + 6) = *((undefined8 *)GEN_TOP((iVar5 + 0x10 + iVar2)));
        }
        *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) + *puVar1;
        if (*((int *)GEN_TOP(((int)this + 0x10))) != *((int *)GEN_TOP(((int)this + 0xc)))) {
          return 0;
        }
        *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
        *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
        return 0;
      case 9: ;
        if (uVar4 == 0x278) {
          puVar6 = ((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + iVar2)));
          puVar7 = puVar1;
          for (iVar5 = 0x9e; iVar5 != 0; iVar5 = iVar5 - 1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
        }
        *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) + *puVar1;
        *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
        *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
        return 0;
      case 10: ;
        if (uVar4 == 0x290) {
          puVar6 = ((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + iVar2)));
          puVar7 = puVar1;
          for (iVar5 = 0xa4; iVar5 != 0; iVar5 = iVar5 - 1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
        }
        *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) + *puVar1;
        *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
        *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
        return 0;
      }
    }
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  return 0;
}

/* ref: FUN_00e2b890 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2b890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe2b890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x1157204));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *((undefined4 *)GEN_TOP((param_1 + 4)));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115721c));
  return (uint)this;
}

/* ref: FUN_00e2b8c0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e2b8c0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe2b8c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00e2b910 */
GEN_LIB GEN_FRAME uint F_00e2b910(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe2b910u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00e2b920 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2b920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe2b920u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e2b940 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2b940(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe2b940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00e2b950 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e2b950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe2b950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00e2b9a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e2b9a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2b9a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00e2a850(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00e2b9b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2b9b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe2b9b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e2b9e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2b9e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe2b9e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e2ba00 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e2ba00(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe2ba00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0xaaaaaab) && (uVar1 = F_004069f0(param_1 * 0x18), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e2ba60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2ba60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe2ba60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00e2ba90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2ba90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe2ba90u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e2baf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2baf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe2baf0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e2bb50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2bb50(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe2bb50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e2bb60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2bb60(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe2bb60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e2bb90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2bb90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe2bb90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00e2bbb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2bbb0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe2bbb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00e2bc00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2bc00(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe2bc00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e2bc10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2bc10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe2bc10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_00e29ae0(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00e2bc30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2bc30(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe2bc30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e2bc40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2bc40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe2bc40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_00e29b90(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00e2bc60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2bc60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe2bc60u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e2bcc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2bcc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe2bcc0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e2bd20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2bd20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe2bd20u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e2bd80 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e2bd80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe2bd80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *((char *)GEN_TOP(((int)param_1 + 0x15)));
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00e2bd80(this GEN_EDX_FWD,((int *)GEN_TOP(piVar3[2])));
    piVar2 = ((int *)GEN_TOP(*piVar3));
    F_00406ad0(piVar3);
    piVar3 = piVar2;
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
  }
  return;
}

/* ref: FUN_00e2bdc0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e2bdc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe2bdc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *((char *)GEN_TOP(((int)param_1 + 0x15)));
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00e2bdc0(this GEN_EDX_FWD,((int *)GEN_TOP(piVar3[2])));
    piVar2 = ((int *)GEN_TOP(*piVar3));
    F_00406ad0(piVar3);
    piVar3 = piVar2;
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
  }
  return;
}

/* ref: FUN_00e2be20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2be20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe2be20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x14)));
  if ((param_1 < 0) && ((uint)piVar1[8] < (uint)-param_1)) {
    piVar1[8] = 0;
  }
  else if ((param_1 < 1) || ((uint)(piVar1[8] + param_1) < 0x431)) {
    if (param_1 != 0) {
      piVar1[8] = piVar1[8] + param_1;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_FWD,param_1);
    }
  }
  else {
    piVar1[8] = 0;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG);
  if (piVar1 + 3 != ((int *)GEN_TOP((uVar2 + 8)))) {
    piVar1[3] = *((int *)GEN_TOP((uVar2 + 8)));
    piVar1[4] = *((int *)GEN_TOP((uVar2 + 0xc)));
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_ARG,piVar1[9],piVar1[8]);
  return (uint)piVar1;
}

/* ref: FUN_00e2bf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2bf10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe2bf10u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e2bf50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2bf50(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe2bf50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  F_01050b90(in_ecx GEN_EDX_FWD,param_3);
  in_ecx[4] = param_2;
  in_ecx[5] = param_3;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1157224));
  in_ecx[7] = 0;
  in_ecx[8] = 0;
  in_ecx[6] = (*(undefined * PTR32 (*)[1])REFP(0x115721c));
  return (uint)in_ecx;
}

/* ref: TargetEntityTmpl_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2bfb0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe2bfb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  param_1[6] = (*(undefined * PTR32 (*)[1])REFP(0x1157204));
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x11571fc));
  F_01050b80(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00e2bfe0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2bfe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe2bfe0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  undefined4 uVar1;
  
  if (*((int *)GEN_TOP((param_3 + 8))) == 0) {
    uVar1 = *((undefined4 *)GEN_TOP((param_3 + 4)));
  }
  else {
    uVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_3 + 8))) + 8)));
  }
  F_01050b90(this GEN_EDX_FWD,uVar1);
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x1157224));
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_2;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x18))) =
       (*(undefined * PTR32 (*)[1])REFP(0x1157204));
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = *((undefined4 *)GEN_TOP((param_3 + 4)));
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = *((undefined4 *)GEN_TOP((param_3 + 8)));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x18))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115721c));
  return (uint)this;
}

/* ref: FUN_00e2c040 */
GEN_LIB GEN_FRAME uint F_00e2c040(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe2c040u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00e2c070 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2c070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe2c070u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  uVar1 = F_004069f0(0xc);
  if (uVar1 != 0) {
    *(uint *)this = uVar1;
    *((uint *)GEN_TOP(uVar1)) = uVar1;
    *((int *)GEN_TOP((*(int *)this + 4))) = *(int *)this;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e2c0c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2c0c0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe2c0c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e2c0d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2c0d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe2c0d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
    *((uint *)GEN_TOP(uVar1)) = uVar1;
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e2c130 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2c130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe2c130u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
    *((uint *)GEN_TOP(uVar1)) = uVar1;
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e2c190 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2c190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe2c190u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  if (0x3ffffffeU - *((int *)GEN_TOP(((int)this + 4))) < param_1) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) + param_1;
  *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  return uVar1;
}

/* ref: FUN_00e2c1c0 */
GEN_LIB GEN_FRAME uint F_00e2c1c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe2c1c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00e2c1f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2c1f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe2c1f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
    *((uint *)GEN_TOP(uVar1)) = uVar1;
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e2c250 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2c250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe2c250u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
    *((uint *)GEN_TOP(uVar1)) = uVar1;
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e2c2c0 */
GEN_LIB GEN_FRAME uint F_00e2c2c0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe2c2c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00e2c2d0 */
GEN_LIB GEN_FRAME uint F_00e2c2d0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xe2c2d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  int iVar1;
  int * piVar2;
  
  piVar2 = param_2;
  if (param_2 == param_3) {
    *param_1 = (int)param_2;
    return (uint)param_1;
  }
  do {
    iVar1 = *((int *)GEN_TOP((piVar2[2] + 0xc)));
    if (((iVar1 != 0) && (iVar1 == param_4)) && (*((int *)GEN_TOP((piVar2[2] + 0x10))) == param_5)) break;
    piVar2 = ((int *)GEN_TOP(*piVar2));
  } while (piVar2 != param_3);
  *param_1 = (int)piVar2;
  return (uint)param_1;
}

/* ref: FUN_00e2c320 */
GEN_LIB GEN_FRAME byte F_00e2c320(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(byte param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe2c320u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(byte param_3 = (byte)gen_a2;)
  undefined4 * puVar1;
  
  for (puVar1 = param_1; puVar1 != param_2; puVar1 = ((undefined4 *)GEN_TOP(*puVar1))) {
    ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((puVar1[2] + 8))) + 0x10))))(puVar1[2]);
  }
  return param_3;
}

/* ref: FUN_00e2c350 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2c350(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xe2c350u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (0x1ffffffd < *((uint *)GEN_TOP((param_1 + 8)))) {
    F_00406ad0(param_5);
                    
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
LAB_00e2c54d: ;
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
        goto LAB_00e2c54d;
      }
      *(undefined1 *)(piVar5 + 5) = 1;
      *((undefined1 *)GEN_TOP((iVar2 + 0x14))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x14))) = 0;
      piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
    }
    cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x14)));
  } while( true );
}

/* ref: FUN_00e2c580 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e2c580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2c580u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00e2a850(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00e2c590 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2c590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe2c590u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e2c5b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2c5b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2c5b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004069f0(0x18)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
    puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
    puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
    *(undefined2 *)(puVar1 + 5) = 0;
    return (uint)puVar1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e2c600 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2c600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe2c600u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  uVar1 = F_004069f0(0xc);
  if (uVar1 != 0) {
    *(uint *)this = uVar1;
    *((uint *)GEN_TOP(uVar1)) = uVar1;
    *((int *)GEN_TOP((*(int *)this + 4))) = *(int *)this;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: std::allocator<std::_Container_proxy>::construct_00e2c650 */
GEN_LIB GEN_FRAME unsigned int GEN_STDCALL F_00e2c650(GEN_P(undefined * this, unsigned int gen_a0), GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe2c650u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_00e2c670 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2c670(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe2c670u, gen_a0, gen_a1, gen_a2, 0u);
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
  F_00e29650(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
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
      goto LAB_00e2c78a;
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
      piVar4 = ((int *)GEN_TOP(F_00e294e0(piVar7)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar3) {
    if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
      uVar5 = F_00e294c0(piVar7);
      *((uint *)GEN_TOP((iVar1 + 8))) = uVar5;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar6;
    }
  }
LAB_00e2c78a: ;
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
            F_00e2ba90(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(piVar4[2]));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar6 + 0x14))) != '\x01') || (*((char *)GEN_TOP((piVar6[2] + 0x14))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar6[2] + 0x14))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar6 + 0x14))) = 1;
                *(undefined1 *)(piVar6 + 5) = 0;
                F_00e2aa60(this GEN_EDX_ARG,piVar6);
                piVar6 = ((int *)GEN_TOP(piVar4[2]));
              }
              *(char *)(piVar6 + 5) = (char)piVar4[5];
              *(undefined1 *)(piVar4 + 5) = 1;
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x14))) = 1;
              F_00e2ba90(this GEN_EDX_ARG,piVar4);
              break;
            }
LAB_00e2c848: ;
            *(undefined1 *)(piVar6 + 5) = 0;
          }
        }
        else {
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00e2aa60(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(*piVar4));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
            if ((*((char *)GEN_TOP((piVar6[2] + 0x14))) == '\x01') && (*((char *)GEN_TOP((*piVar6 + 0x14))) == '\x01'))
            goto LAB_00e2c848;
            if (*((char *)GEN_TOP((*piVar6 + 0x14))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x14))) = 1;
              *(undefined1 *)(piVar6 + 5) = 0;
              F_00e2ba90(this GEN_EDX_ARG,piVar6);
              piVar6 = ((int *)GEN_TOP(*piVar4));
            }
            *(char *)(piVar6 + 5) = (char)piVar4[5];
            *(undefined1 *)(piVar4 + 5) = 1;
            *((undefined1 *)GEN_TOP((*piVar6 + 0x14))) = 1;
            F_00e2aa60(this GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = ((int *)GEN_TOP(piVar4[1]));
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 5) = 1;
  }
  F_00406ad0(piVar3);
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00e2c8c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2c8c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe2c8c0u, gen_a0, gen_a1, gen_a2, 0u);
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
  F_00e296a0(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
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
      goto LAB_00e2c9da;
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
      piVar4 = ((int *)GEN_TOP(F_00e295a0(piVar7)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar3) {
    if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
      uVar5 = F_00e29580(piVar7);
      *((uint *)GEN_TOP((iVar1 + 8))) = uVar5;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar6;
    }
  }
LAB_00e2c9da: ;
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
            F_00e2baf0(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(piVar4[2]));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar6 + 0x14))) != '\x01') || (*((char *)GEN_TOP((piVar6[2] + 0x14))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar6[2] + 0x14))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar6 + 0x14))) = 1;
                *(undefined1 *)(piVar6 + 5) = 0;
                F_00e2aaf0(this GEN_EDX_ARG,piVar6);
                piVar6 = ((int *)GEN_TOP(piVar4[2]));
              }
              *(char *)(piVar6 + 5) = (char)piVar4[5];
              *(undefined1 *)(piVar4 + 5) = 1;
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x14))) = 1;
              F_00e2baf0(this GEN_EDX_ARG,piVar4);
              break;
            }
LAB_00e2ca98: ;
            *(undefined1 *)(piVar6 + 5) = 0;
          }
        }
        else {
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00e2aaf0(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(*piVar4));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
            if ((*((char *)GEN_TOP((piVar6[2] + 0x14))) == '\x01') && (*((char *)GEN_TOP((*piVar6 + 0x14))) == '\x01'))
            goto LAB_00e2ca98;
            if (*((char *)GEN_TOP((*piVar6 + 0x14))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x14))) = 1;
              *(undefined1 *)(piVar6 + 5) = 0;
              F_00e2baf0(this GEN_EDX_ARG,piVar6);
              piVar6 = ((int *)GEN_TOP(*piVar4));
            }
            *(char *)(piVar6 + 5) = (char)piVar4[5];
            *(undefined1 *)(piVar4 + 5) = 1;
            *((undefined1 *)GEN_TOP((*piVar6 + 0x14))) = 1;
            F_00e2aaf0(this GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = ((int *)GEN_TOP(piVar4[1]));
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 5) = 1;
  }
  F_00406ad0(piVar3);
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00e2cb10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2cb10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe2cb10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00e2cb20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2cb20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe2cb20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00e2cb30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2cb30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe2cb30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  gen_size32 * psVar4;
  undefined4 uVar5;
  
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x10)));
  puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x38))))(piVar2 GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,*puVar1,0);
  if (uVar3 == 0) {
    return 0;
  }
  param_1[5] = uVar3;
  if (param_1 != ((int *)GEN_TOP(0xfffffff8))) {
    *((undefined4 *)GEN_TOP((uVar3 + 0x14))) = *((undefined4 *)GEN_TOP(((int)this + 0x14)));
    if (*((int *)GEN_TOP(((int)this + 0x20))) == 0) {
      uVar5 = *((undefined4 *)GEN_TOP(((int)this + 0x1c)));
    }
    else {
      uVar5 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x20))) + 8)));
    }
    *((undefined4 *)GEN_TOP((uVar3 + 0x18))) = uVar5;
    puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG)));
    *((undefined4 *)GEN_TOP((uVar3 + 0x20))) = *puVar1;
    psVar4 = ((gen_size32 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG)));
    F_00c48350(*((undefined * PTR32 *)GEN_TOP((uVar3 + 0x24))),0,*psVar4);
    if (param_1[5] != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1[5] + 0x24))));
      return (uint)(param_1 + 2);
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_ARG,0);
    return (uint)(param_1 + 2);
  }
  return 0;
}

/* ref: FUN_00e2cc00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2cc00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe2cc00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00e2cc20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2cc20(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe2cc20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP(*in_ecx));
  return (uint)param_2;
}

/* ref: FUN_00e2cc30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2cc30(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe2cc30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00e2cc50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2cc50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe2cc50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00e2cc60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2cc60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe2cc60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00e2cc80 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e2cc80(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe2cc80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00e2cc90 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e2cc90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2cc90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int * piVar2;
  
  piVar1 = *(int * PTR32 *)this;
  piVar2 = ((int *)GEN_TOP(*piVar1));
  *piVar1 = (int)piVar1;
  *((int *)GEN_TOP((*(int *)this + 4))) = *(int *)this;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (piVar2 != *(int * PTR32 *)this) {
    do {
      piVar1 = ((int *)GEN_TOP(*piVar2));
      F_00406ad0(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != ((int *)GEN_TOP(*(int *)this)));
  }
  return 0;
}

/* ref: FUN_00e2ccd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2ccd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe2ccd0u, gen_a0, gen_a1, gen_a2, 0u);
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
  F_00e29b40(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
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
      goto LAB_00e2cdea;
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
      piVar4 = ((int *)GEN_TOP(F_00e29a00(piVar7)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar3) {
    if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
      uVar5 = F_00e299e0(piVar7);
      *((uint *)GEN_TOP((iVar1 + 8))) = uVar5;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar6;
    }
  }
LAB_00e2cdea: ;
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
            F_00e2bc60(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(piVar4[2]));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar6 + 0x14))) != '\x01') || (*((char *)GEN_TOP((piVar6[2] + 0x14))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar6[2] + 0x14))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar6 + 0x14))) = 1;
                *(undefined1 *)(piVar6 + 5) = 0;
                F_00e2ad00(this GEN_EDX_ARG,piVar6);
                piVar6 = ((int *)GEN_TOP(piVar4[2]));
              }
              *(char *)(piVar6 + 5) = (char)piVar4[5];
              *(undefined1 *)(piVar4 + 5) = 1;
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x14))) = 1;
              F_00e2bc60(this GEN_EDX_ARG,piVar4);
              break;
            }
LAB_00e2cea8: ;
            *(undefined1 *)(piVar6 + 5) = 0;
          }
        }
        else {
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00e2ad00(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(*piVar4));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
            if ((*((char *)GEN_TOP((piVar6[2] + 0x14))) == '\x01') && (*((char *)GEN_TOP((*piVar6 + 0x14))) == '\x01'))
            goto LAB_00e2cea8;
            if (*((char *)GEN_TOP((*piVar6 + 0x14))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x14))) = 1;
              *(undefined1 *)(piVar6 + 5) = 0;
              F_00e2bc60(this GEN_EDX_ARG,piVar6);
              piVar6 = ((int *)GEN_TOP(*piVar4));
            }
            *(char *)(piVar6 + 5) = (char)piVar4[5];
            *(undefined1 *)(piVar4 + 5) = 1;
            *((undefined1 *)GEN_TOP((*piVar6 + 0x14))) = 1;
            F_00e2ad00(this GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = ((int *)GEN_TOP(piVar4[1]));
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 5) = 1;
  }
  F_00406ad0(piVar3);
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00e2cf20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2cf20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe2cf20u, gen_a0, gen_a1, gen_a2, 0u);
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
  F_00e29ae0(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
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
      goto LAB_00e2d03a;
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
      piVar4 = ((int *)GEN_TOP(F_00e29a50(piVar7)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar3) {
    if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
      uVar5 = F_00e29a30(piVar7);
      *((uint *)GEN_TOP((iVar1 + 8))) = uVar5;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar6;
    }
  }
LAB_00e2d03a: ;
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
            F_00e2bcc0(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(piVar4[2]));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar6 + 0x14))) != '\x01') || (*((char *)GEN_TOP((piVar6[2] + 0x14))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar6[2] + 0x14))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar6 + 0x14))) = 1;
                *(undefined1 *)(piVar6 + 5) = 0;
                F_00e2ad70(this GEN_EDX_ARG,piVar6);
                piVar6 = ((int *)GEN_TOP(piVar4[2]));
              }
              *(char *)(piVar6 + 5) = (char)piVar4[5];
              *(undefined1 *)(piVar4 + 5) = 1;
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x14))) = 1;
              F_00e2bcc0(this GEN_EDX_ARG,piVar4);
              break;
            }
LAB_00e2d0f8: ;
            *(undefined1 *)(piVar6 + 5) = 0;
          }
        }
        else {
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00e2ad70(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(*piVar4));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
            if ((*((char *)GEN_TOP((piVar6[2] + 0x14))) == '\x01') && (*((char *)GEN_TOP((*piVar6 + 0x14))) == '\x01'))
            goto LAB_00e2d0f8;
            if (*((char *)GEN_TOP((*piVar6 + 0x14))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x14))) = 1;
              *(undefined1 *)(piVar6 + 5) = 0;
              F_00e2bcc0(this GEN_EDX_ARG,piVar6);
              piVar6 = ((int *)GEN_TOP(*piVar4));
            }
            *(char *)(piVar6 + 5) = (char)piVar4[5];
            *(undefined1 *)(piVar4 + 5) = 1;
            *((undefined1 *)GEN_TOP((*piVar6 + 0x14))) = 1;
            F_00e2ad70(this GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = ((int *)GEN_TOP(piVar4[1]));
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 5) = 1;
  }
  F_00406ad0(piVar3);
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00e2d170 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2d170(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe2d170u, gen_a0, gen_a1, gen_a2, 0u);
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
  F_00e29b90(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
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
      goto LAB_00e2d28a;
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
      piVar4 = ((int *)GEN_TOP(F_00e29aa0(piVar7)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar3) {
    if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
      uVar5 = F_00e29a80(piVar7);
      *((uint *)GEN_TOP((iVar1 + 8))) = uVar5;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar6;
    }
  }
LAB_00e2d28a: ;
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
            F_00e2bd20(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(piVar4[2]));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar6 + 0x14))) != '\x01') || (*((char *)GEN_TOP((piVar6[2] + 0x14))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar6[2] + 0x14))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar6 + 0x14))) = 1;
                *(undefined1 *)(piVar6 + 5) = 0;
                F_00e2ade0(this GEN_EDX_ARG,piVar6);
                piVar6 = ((int *)GEN_TOP(piVar4[2]));
              }
              *(char *)(piVar6 + 5) = (char)piVar4[5];
              *(undefined1 *)(piVar4 + 5) = 1;
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x14))) = 1;
              F_00e2bd20(this GEN_EDX_ARG,piVar4);
              break;
            }
LAB_00e2d348: ;
            *(undefined1 *)(piVar6 + 5) = 0;
          }
        }
        else {
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00e2ade0(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(*piVar4));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
            if ((*((char *)GEN_TOP((piVar6[2] + 0x14))) == '\x01') && (*((char *)GEN_TOP((*piVar6 + 0x14))) == '\x01'))
            goto LAB_00e2d348;
            if (*((char *)GEN_TOP((*piVar6 + 0x14))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x14))) = 1;
              *(undefined1 *)(piVar6 + 5) = 0;
              F_00e2bd20(this GEN_EDX_ARG,piVar6);
              piVar6 = ((int *)GEN_TOP(*piVar4));
            }
            *(char *)(piVar6 + 5) = (char)piVar4[5];
            *(undefined1 *)(piVar4 + 5) = 1;
            *((undefined1 *)GEN_TOP((*piVar6 + 0x14))) = 1;
            F_00e2ade0(this GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = ((int *)GEN_TOP(piVar4[1]));
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 5) = 1;
  }
  F_00406ad0(piVar3);
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00e2d3c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e2d3c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2d3c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
  while (cVar1 == '\0') {
    F_00e2bd80(this GEN_EDX_FWD,piVar2[2]);
    piVar3 = ((int *)GEN_TOP(*piVar2));
    F_00406ad0(piVar2);
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

/* ref: FUN_00e2d410 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e2d410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2d410u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
  while (cVar1 == '\0') {
    F_00e2bdc0(this GEN_EDX_FWD,piVar2[2]);
    piVar3 = ((int *)GEN_TOP(*piVar2));
    F_00406ad0(piVar2);
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

/* ref: FUN_00e2d460 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e2d460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe2d460u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *((char *)GEN_TOP(((int)param_1 + 0x15)));
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00e2d460(this GEN_EDX_FWD,((int *)GEN_TOP(piVar3[2])));
    piVar2 = ((int *)GEN_TOP(*piVar3));
    F_00406ad0(piVar3);
    piVar3 = piVar2;
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
  }
  return;
}

/* ref: FUN_00e2d4a0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e2d4a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe2d4a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *((char *)GEN_TOP(((int)param_1 + 0x15)));
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00e2d4a0(this GEN_EDX_FWD,((int *)GEN_TOP(piVar3[2])));
    piVar2 = ((int *)GEN_TOP(*piVar3));
    F_00406ad0(piVar3);
    piVar3 = piVar2;
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
  }
  return;
}

/* ref: TargetEntityFactoryClass_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf1 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2d4e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe2d4e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 * in_ecx;
  undefined4 uVar3;
  undefined4 local_10;
  
  in_ecx = ((undefined4 *)GEN_TOP(F_004069f0(0x24)));
  if (in_ecx == ((undefined4 *)GEN_TOP(0x0))) {
    return 0;
  }
  if (param_2 == 0) {
    local_10 = 0;
  }
  else {
    local_10 = *((undefined4 *)GEN_TOP((param_2 + 8)));
  }
  uVar1 = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
  uVar2 = *((undefined4 *)GEN_TOP((param_1 + 0x14)));
  uVar3 = local_10;
  if (param_2 != 0) {
    uVar3 = *((undefined4 *)GEN_TOP((param_2 + 8)));
  }
  F_01050b90(in_ecx GEN_EDX_ARG,uVar3);
  in_ecx[5] = uVar2;
  in_ecx[4] = uVar1;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1157224));
  in_ecx[8] = param_2;
  in_ecx[7] = local_10;
  in_ecx[6] = (*(undefined * PTR32 (*)[1])REFP(0x115721c));
  return (uint)in_ecx;
}

/* ref: TargetEntityFactoryClass_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2d570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe2d570u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  undefined4 uVar1;
  undefined4 * in_ecx;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  in_ecx = ((undefined4 *)GEN_TOP(F_004069f0(0x24)));
  if (in_ecx == ((undefined4 *)GEN_TOP(0x0))) {
    return 0;
  }
  if (param_3 != 0) {
    uVar3 = *((undefined4 *)GEN_TOP((param_3 + 8)));
  }
  uVar1 = *((undefined4 *)GEN_TOP((param_2 + 8)));
  uVar2 = uVar3;
  if (param_3 != 0) {
    uVar2 = *((undefined4 *)GEN_TOP((param_3 + 8)));
  }
  F_01050b90(in_ecx GEN_EDX_ARG,uVar2);
  in_ecx[5] = uVar1;
  in_ecx[4] = param_1;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1157224));
  in_ecx[8] = param_3;
  in_ecx[7] = uVar3;
  in_ecx[6] = (*(undefined * PTR32 (*)[1])REFP(0x115721c));
  return (uint)in_ecx;
}

/* ref: TargetEntityFactoryClass_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2d5f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe2d5f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 * in_ecx;
  undefined4 uVar3;
  
  in_ecx = ((undefined4 *)GEN_TOP(F_004069f0(0x24)));
  if (in_ecx != ((undefined4 *)GEN_TOP(0x0))) {
    uVar1 = *((undefined4 *)GEN_TOP((param_1 + 0x14)));
    uVar2 = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
    if (*((int *)GEN_TOP((param_2 + 8))) == 0) {
      uVar3 = *((undefined4 *)GEN_TOP((param_2 + 4)));
    }
    else {
      uVar3 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_2 + 8))) + 8)));
    }
    F_01050b90(in_ecx GEN_EDX_ARG,uVar3);
    in_ecx[5] = uVar1;
    in_ecx[4] = uVar2;
    *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1157224));
    in_ecx[6] = (*(undefined * PTR32 (*)[1])REFP(0x1157204));
    in_ecx[7] = *((undefined4 *)GEN_TOP((param_2 + 4)));
    in_ecx[8] = *((undefined4 *)GEN_TOP((param_2 + 8)));
    in_ecx[6] = (*(undefined * PTR32 (*)[1])REFP(0x115721c));
    return (uint)in_ecx;
  }
  return 0;
}

/* ref: TargetEntityFactoryClass_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2d670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe2d670u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined4 * in_ecx;
  
  in_ecx = ((undefined4 *)GEN_TOP(F_004069f0(0x24)));
  if (in_ecx != ((undefined4 *)GEN_TOP(0x0))) {
    F_01050b90(in_ecx GEN_EDX_ARG,param_2);
    in_ecx[5] = param_2;
    in_ecx[4] = param_1;
    *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1157224));
    in_ecx[7] = 0;
    in_ecx[8] = 0;
    in_ecx[6] = (*(undefined * PTR32 (*)[1])REFP(0x115721c));
    return (uint)in_ecx;
  }
  return 0;
}

/* ref: TargetEntityFactoryClass_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2d6d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe2d6d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  undefined4 * in_ecx;
  undefined4 uVar1;
  
  in_ecx = ((undefined4 *)GEN_TOP(F_004069f0(0x24)));
  if (in_ecx != ((undefined4 *)GEN_TOP(0x0))) {
    if (*((int *)GEN_TOP((param_3 + 8))) == 0) {
      uVar1 = *((undefined4 *)GEN_TOP((param_3 + 4)));
    }
    else {
      uVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_3 + 8))) + 8)));
    }
    F_01050b90(in_ecx GEN_EDX_ARG,uVar1);
    in_ecx[4] = param_1;
    *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1157224));
    in_ecx[5] = param_2;
    in_ecx[6] = (*(undefined * PTR32 (*)[1])REFP(0x1157204));
    in_ecx[7] = *((undefined4 *)GEN_TOP((param_3 + 4)));
    in_ecx[8] = *((undefined4 *)GEN_TOP((param_3 + 8)));
    in_ecx[6] = (*(undefined * PTR32 (*)[1])REFP(0x115721c));
    return (uint)in_ecx;
  }
  return 0;
}

/* ref: FUN_00e2d740 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2d740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe2d740u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e2d7b0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e2d7b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2d7b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int * piVar2;
  
  piVar1 = *(int * PTR32 *)this;
  piVar2 = ((int *)GEN_TOP(*piVar1));
  *piVar1 = (int)piVar1;
  *((int *)GEN_TOP((*(int *)this + 4))) = *(int *)this;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (piVar2 != *(int * PTR32 *)this) {
    do {
      piVar1 = ((int *)GEN_TOP(*piVar2));
      F_00406ad0(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != ((int *)GEN_TOP(*(int *)this)));
  }
  return 0;
}

/* ref: FUN_00e2d7f0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e2d7f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe2d7f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined3 uVar4;
  byte bVar5;
  uint uVar6;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x68);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  F_00e2d740(((undefined *)GEN_TOP((param_1 + 0xc))) GEN_EDX_ARG,&(*(int *)&gen_args[0]),(*(int *)&gen_args[0]));
  if ((*(int *)&gen_args[0]) == *((int *)GEN_TOP((param_1 + 0x10)))) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((*(int *)&gen_args[0]) + 0x10)));
  if ((*(char *)&gen_args[2]) == '\0') {
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_ARG);
    if ((char)uVar6 == '\0') {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      return 0;
    }
  }
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  uVar2 = *((undefined4 *)GEN_TOP((param_1 + 0x80)));
  iVar3 = piVar1[5];
  uVar4 = (undefined3)(*(int *)&gen_args[0]);
  (*(undefined1 *)((char *)&(*(int *)&gen_args[0]) + 3)) = iVar3 == 0;
  bVar5 = F_00e2b420(piVar1 + 2 GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]),uVar2);
  if ((bVar5 != 0) &&
     (*((int *)GEN_TOP((param_1 + 0x24))) = *((int *)GEN_TOP((param_1 + 0x24))) + 1, (*(undefined1 *)((char *)&(*(int *)&gen_args[0]) + 3)) != '\0')) {
    *((int *)GEN_TOP((param_1 + 0x20))) = *((int *)GEN_TOP((param_1 + 0x20))) + 1;
  }
  (*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[1]) + 3)) = bVar5;
  if (((*(char *)&gen_args[2]) != '\0') && (piVar1[5] != 0)) {
    uVar4 = (undefined3)(*(undefined4 *)&gen_args[1]);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG,param_1);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return (*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[1]) + 3));
}

/* ref: FUN_00e2d8d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2d8d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe2d8d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int * piVar1;
  undefined * pvVar2;
  uint uVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD);
  F_00c317a0(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),&(*(undefined4 *)&gen_args[0]));
  pvVar2 = (*(undefined * PTR32 *)(gen_frame + 0x0));
  if ((*(undefined * PTR32 *)(gen_frame + 0x0)) != *((undefined * PTR32 *)GEN_TOP(((int)this + 0x18)))) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x4c)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x18))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x0)) + 0x10))));
    F_00e2d170(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,&(*(undefined4 *)&gen_args[0]),pvVar2);
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_00e2d930 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2d930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2d930u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  uVar1 = F_004069f0(0xc);
  if (uVar1 != 0) {
    *(uint *)this = uVar1;
    *((uint *)GEN_TOP(uVar1)) = uVar1;
    *((int *)GEN_TOP((*(int *)this + 4))) = *(int *)this;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e2d980 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2d980(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe2d980u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP(*in_ecx));
  return (uint)param_2;
}

/* ref: FUN_00e2d990 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2d990(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe2d990u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00e2d9a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2d9a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe2d9a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
    *((uint *)GEN_TOP(uVar1)) = uVar1;
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e2da00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2da00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe2da00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
    *((uint *)GEN_TOP(uVar1)) = uVar1;
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e2da60 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e2da60(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe2da60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00e2da70 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e2da70(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe2da70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004069f0(0xc)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    if (puVar1 + 2 != ((undefined4 *)GEN_TOP(0x0))) {
      puVar1[2] = *param_3;
    }
    return (uint)puVar1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e2dac0 */
GEN_LIB GEN_FRAME uint F_00e2dac0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xe2dac0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_00e2c2d0(((undefined1 *)(gen_frame + 0x0)),param_2,param_3,param_4,param_5)));
  *param_1 = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_00e2daf0 */
GEN_LIB GEN_FRAME byte F_00e2daf0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(byte param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe2daf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(byte param_3 = (byte)gen_a2;)
  int * piVar1;
  undefined4 * puVar2;
  
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = ((undefined4 *)GEN_TOP(*puVar2))) {
    piVar1 = *((int * PTR32 *)GEN_TOP((puVar2[2] + 8)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_ARG,puVar2[2]);
  }
  return param_3;
}

/* ref: FUN_00e2db20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2db20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe2db20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
    *((uint *)GEN_TOP(uVar1)) = uVar1;
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e2db80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2db80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe2db80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
    *((uint *)GEN_TOP(uVar1)) = uVar1;
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e2dbe0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2dbe0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe2dbe0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      puVar2 = ((undefined4 *)GEN_TOP(F_00e2c350(this GEN_EDX_FWD,&(*(undefined4 * PTR32 *)&gen_args[2]),1,puVar2,(*(int *)&gen_args[1]))));
      *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
    F_00e2a850(&(*(undefined4 * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[2]);
  if ((uint)(*(undefined4 * PTR32 *)&gen_args[2])[3] < *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc)))) {
    puVar2 = ((undefined4 *)GEN_TOP(F_00e2c350(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2]),local_8,puVar2,(*(int *)&gen_args[1]))));
    *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  F_00406ad0((*(int *)&gen_args[1]));
  *(*(undefined4 * PTR32 *)&gen_args[0]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00e2dcc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2dcc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2dcc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  uVar1 = F_004069f0(0xc);
  if (uVar1 != 0) {
    *(uint *)this = uVar1;
    *((uint *)GEN_TOP(uVar1)) = uVar1;
    *((int *)GEN_TOP((*(int *)this + 4))) = *(int *)this;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00e2dd10 */
GEN_LIB GEN_FRAME unsigned int F_00e2dd10(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe2dd10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_00e2dd40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2dd40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe2dd40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  
  iVar1 = *param_2;
  if (param_2 != *(int * PTR32 *)this) {
    *((int *)GEN_TOP(param_2[1])) = *param_2;
    *((int *)GEN_TOP((*param_2 + 4))) = param_2[1];
    F_00406ad0(param_2);
    *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: FUN_00e2dd80 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e2dd80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2dd80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int * piVar2;
  
  piVar1 = *(int * PTR32 *)this;
  piVar2 = ((int *)GEN_TOP(*piVar1));
  *piVar1 = (int)piVar1;
  *((int *)GEN_TOP((*(int *)this + 4))) = *(int *)this;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (piVar2 != *(int * PTR32 *)this) {
    do {
      piVar1 = ((int *)GEN_TOP(*piVar2));
      F_00406ad0(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != ((int *)GEN_TOP(*(int *)this)));
  }
  return 0;
}

/* ref: FUN_00e2ddc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2ddc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe2ddc0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00e2d3c0(this GEN_EDX_FWD);
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
    F_00e2c670(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00e2de60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2de60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe2de60u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00e2d410(this GEN_EDX_FWD);
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
    F_00e2c8c0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00e2df00 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e2df00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2df00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
  while (cVar1 == '\0') {
    F_00e2d460(this GEN_EDX_FWD,piVar2[2]);
    piVar3 = ((int *)GEN_TOP(*piVar2));
    F_00406ad0(piVar2);
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

/* ref: FUN_00e2df50 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e2df50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2df50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
  while (cVar1 == '\0') {
    F_00e2d4a0(this GEN_EDX_FWD,piVar2[2]);
    piVar3 = ((int *)GEN_TOP(*piVar2));
    F_00406ad0(piVar2);
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

/* ref: FUN_00e2dfa0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e2dfa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2dfa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int * piVar2;
  
  piVar1 = *(int * PTR32 *)this;
  piVar2 = ((int *)GEN_TOP(*piVar1));
  *piVar1 = (int)piVar1;
  *((int *)GEN_TOP((*(int *)this + 4))) = *(int *)this;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (piVar2 != *(int * PTR32 *)this) {
    do {
      piVar1 = ((int *)GEN_TOP(*piVar2));
      F_00406ad0(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != ((int *)GEN_TOP(*(int *)this)));
  }
  return 0;
}

/* ref: FUN_00e2dfe0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e2dfe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2dfe0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  int * piVar3;
  int * piVar4;
  
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  for (puVar2 = ((undefined4 *)GEN_TOP(*puVar1)); puVar2 != puVar1; puVar2 = ((undefined4 *)GEN_TOP(*puVar2))) {
    piVar3 = *((int * PTR32 *)GEN_TOP((puVar2[2] + 8)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x10))))(piVar3 GEN_EDX_FWD,puVar2[2]);
  }
  piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  piVar4 = ((int *)GEN_TOP(*piVar3));
  *piVar3 = (int)piVar3;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  if (piVar4 != *((int * PTR32 *)GEN_TOP(((int)this + 4)))) {
    do {
      piVar3 = ((int *)GEN_TOP(*piVar4));
      F_00406ad0(piVar4);
      piVar4 = piVar3;
    } while (piVar3 != ((int *)GEN_TOP(*((int *)GEN_TOP(((int)this + 4))))));
  }
  return 0;
}

/* ref: FUN_00e2e040 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2e040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe2e040u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  
  iVar1 = *param_2;
  if (param_2 != *(int * PTR32 *)this) {
    *((int *)GEN_TOP(param_2[1])) = *param_2;
    *((int *)GEN_TOP((*param_2 + 4))) = param_2[1];
    F_00406ad0(param_2);
    *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: FUN_00e2e080 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2e080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe2e080u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int iVar1;
  int * piVar2;
  
  iVar1 = *((int *)GEN_TOP((param_1 + 4)));
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
  piVar2 = ((int *)GEN_TOP(F_004069f0(0xc)));
  if (piVar2 == ((int *)GEN_TOP(0x0))) {
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = ((undefined *)GEN_TOP(0x0));
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
    F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  }
  *piVar2 = param_1;
  piVar2[1] = iVar1;
  if (piVar2 + 2 != ((int *)GEN_TOP(0x0))) {
    piVar2[2] = *param_2;
  }
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 4))) == 0x3ffffffe) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 4))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 4))) + 1;
  *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
  *((int * PTR32 *)GEN_TOP(piVar2[1])) = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_00e2e100 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2e100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe2e100u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004069f0(0x18)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
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
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e2e160 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e2e160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2e160u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int * piVar2;
  uint uVar3;
  
  piVar1 = *(int * PTR32 *)this;
  piVar2 = ((int *)GEN_TOP(*piVar1));
  *piVar1 = (int)piVar1;
  *((int *)GEN_TOP((*(int *)this + 4))) = *(int *)this;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (piVar2 != *(int * PTR32 *)this) {
    do {
      piVar1 = ((int *)GEN_TOP(*piVar2));
      F_00406ad0(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != ((int *)GEN_TOP(*(int *)this)));
  }
  uVar3 = F_00406ad0(*(undefined4 *)this);
  return uVar3;
}

/* ref: FUN_00e2e1a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e2e1a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2e1a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP(**(int * PTR32 *)this));
  if (piVar1 != *(int * PTR32 *)this) {
    *((int *)GEN_TOP(piVar1[1])) = *piVar1;
    *((int *)GEN_TOP((*piVar1 + 4))) = piVar1[1];
    piVar1 = ((int *)GEN_TOP(F_00406ad0(piVar1)));
    *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
  }
  return (uint)piVar1;
}

/* ref: FUN_00e2e1d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2e1d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2e1d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00e2ddc0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),
                       *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00e2e1f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2e1f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2e1f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00e2de60(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),
                       *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00e2e210 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2e210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe2e210u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00e2df00(this GEN_EDX_FWD);
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
    F_00e2cf20(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00e2e2b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2e2b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe2e2b0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00e2df50(this GEN_EDX_FWD);
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
    F_00e2d170(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00e2e350 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e2e350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2e350u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int * piVar2;
  uint uVar3;
  
  piVar1 = *(int * PTR32 *)this;
  piVar2 = ((int *)GEN_TOP(*piVar1));
  *piVar1 = (int)piVar1;
  *((int *)GEN_TOP((*(int *)this + 4))) = *(int *)this;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (piVar2 != *(int * PTR32 *)this) {
    do {
      piVar1 = ((int *)GEN_TOP(*piVar2));
      F_00406ad0(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != ((int *)GEN_TOP(*(int *)this)));
  }
  uVar3 = F_00406ad0(*(undefined4 *)this);
  return uVar3;
}

/* ref: FUN_00e2e390 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2e390(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe2e390u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int * piVar1;
  undefined * pvVar2;
  uint uVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x44))))(this GEN_EDX_FWD);
  F_00c31730(((undefined *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),&(*(uint *)&gen_args[0]));
  pvVar2 = (*(undefined * PTR32 *)(gen_frame + 0x0));
  if ((*(undefined * PTR32 *)(gen_frame + 0x0)) != *((undefined * PTR32 *)GEN_TOP(((int)this + 0x20)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x44))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)this + 0x44))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x0)) + 0x10))));
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x60)));
    if (piVar1 == ((int *)GEN_TOP(0x0))) {
      if ((((*(uint *)&gen_args[0]) & 0x5ff80000) == 0) &&
         ((((*(uint *)&gen_args[0]) >> 0x1d == 1 || ((*(uint *)&gen_args[0]) >> 0x1d == 2)) && ((char)(*(undefined4 *)&gen_args[1]) != '\0')))) {
        F_0074d410(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,&(*(uint *)&gen_args[0]));
      }
    }
    else if ((char)(*(undefined4 *)&gen_args[1]) != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,&(*(uint *)&gen_args[0]));
    }
    F_00e2cf20(((undefined *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,&(*(undefined4 *)&gen_args[1]),pvVar2);
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG);
  return uVar3;
}

