#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_0094e3e0 */
GEN_OWN GEN_FRAME uint F_0094e3e0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x94e3e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  undefined4 * puVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  if (param_1 != param_2) {
    uVar2 = param_3;
    puVar3 = param_1 + 2;
    do {
      *((undefined4 *)GEN_TOP((uVar2 + 4))) = puVar3[-1];
      *((undefined4 *)GEN_TOP((uVar2 + 8))) = *puVar3;
      puVar1 = puVar3 + 1;
      uVar2 = uVar2 + 0xc;
      puVar3 = puVar3 + 3;
    } while (puVar1 != param_2);
    return uVar2;
  }
  return param_3;
}

/* ref: FUN_0094e420 */
GEN_OWN GEN_FRAME uint F_0094e420(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x94e420u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  undefined4 * puVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  if (param_1 != param_2) {
    uVar2 = param_3;
    puVar3 = param_1 + 2;
    do {
      *((undefined4 *)GEN_TOP((uVar2 + 4))) = puVar3[-1];
      *((undefined4 *)GEN_TOP((uVar2 + 8))) = *puVar3;
      *((undefined4 *)GEN_TOP((uVar2 + 0xc))) = puVar3[1];
      *((undefined4 *)GEN_TOP((uVar2 + 0x10))) = puVar3[2];
      *((undefined1 *)GEN_TOP((uVar2 + 0x14))) = *(undefined1 *)(puVar3 + 3);
      puVar1 = puVar3 + 4;
      uVar2 = uVar2 + 0x18;
      puVar3 = puVar3 + 6;
    } while (puVar1 != param_2);
    return uVar2;
  }
  return param_3;
}

/* ref: FUN_0094e470 */
GEN_OWN GEN_FRAME uint F_0094e470(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x94e470u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  undefined4 * puVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  if (param_1 != param_2) {
    uVar2 = param_3;
    puVar3 = param_1 + 2;
    do {
      *((undefined4 *)GEN_TOP((uVar2 + 4))) = puVar3[-1];
      *((undefined4 *)GEN_TOP((uVar2 + 8))) = *puVar3;
      *((undefined4 *)GEN_TOP((uVar2 + 0xc))) = puVar3[1];
      puVar1 = puVar3 + 2;
      uVar2 = uVar2 + 0x10;
      puVar3 = puVar3 + 4;
    } while (puVar1 != param_2);
    return uVar2;
  }
  return param_3;
}

/* ref: FUN_0094e4b0 */
GEN_OWN GEN_FRAME uint F_0094e4b0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(uint param_7, unsigned int gen_a6), GEN_P(int * param_8, unsigned int gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8), GEN_P(uint param_10, unsigned int gen_a9), GEN_P(undefined4 param_11, unsigned int gen_a10))
{
  GEN_ENTER(0x94e4b0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
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
    uVar1 = uVar3 >> 2;
    if (*((uint *)GEN_TOP((iVar5 + 8))) <= uVar1) {
      uVar1 = uVar1 - *((uint *)GEN_TOP((iVar5 + 8)));
    }
    uVar4 = uVar4 - 1;
    if (param_8 == ((int *)GEN_TOP(0x0))) {
      iVar6 = 0;
    }
    else {
      iVar6 = *param_8;
    }
    uVar2 = uVar4 >> 2;
    if (*((uint *)GEN_TOP((iVar6 + 8))) <= uVar2) {
      uVar2 = uVar2 - *((uint *)GEN_TOP((iVar6 + 8)));
    }
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((iVar6 + 4))) + uVar2 * 4))) + (uVar4 & 3) * 4))) =
         *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((iVar5 + 4))) + uVar1 * 4))) + (uVar3 & 3) * 4)));
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

/* ref: FUN_0094e560 */
GEN_OWN GEN_FRAME uint F_0094e560(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(uint param_7, unsigned int gen_a6), GEN_P(int * param_8, unsigned int gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8), GEN_P(uint param_10, unsigned int gen_a9), GEN_P(undefined4 param_11, unsigned int gen_a10))
{
  GEN_ENTER(0x94e560u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = param_10;
  for (uVar1 = param_4; uVar1 != param_7; uVar1 = uVar1 + 1) {
    if (param_2 == ((int *)GEN_TOP(0x0))) {
      iVar4 = 0;
    }
    else {
      iVar4 = *param_2;
    }
    uVar3 = uVar1 >> 2;
    if (*((uint *)GEN_TOP((iVar4 + 8))) <= uVar3) {
      uVar3 = uVar3 - *((uint *)GEN_TOP((iVar4 + 8)));
    }
    if (param_8 == ((int *)GEN_TOP(0x0))) {
      iVar6 = 0;
    }
    else {
      iVar6 = *param_8;
    }
    uVar2 = uVar5 >> 2;
    if (*((uint *)GEN_TOP((iVar6 + 8))) <= uVar2) {
      uVar2 = uVar2 - *((uint *)GEN_TOP((iVar6 + 8)));
    }
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((iVar6 + 4))) + uVar2 * 4))) + (uVar5 & 3) * 4))) =
         *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 4))) + uVar3 * 4))) + (uVar1 & 3) * 4)));
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

/* ref: FUN_0094e610 */
GEN_OWN GEN_FRAME uint F_0094e610(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(uint param_7, unsigned int gen_a6), GEN_P(int * param_8, unsigned int gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8), GEN_P(uint param_10, unsigned int gen_a9), GEN_P(undefined4 param_11, unsigned int gen_a10))
{
  GEN_ENTER(0x94e610u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar3 = param_7;
  uVar5 = param_10;
  while (param_4 != uVar3) {
    uVar3 = uVar3 - 1;
    iVar6 = 0;
    if (param_5 != ((int *)GEN_TOP(0x0))) {
      iVar6 = *param_5;
    }
    uVar4 = uVar3;
    if (*((uint *)GEN_TOP((iVar6 + 8))) <= uVar3) {
      uVar4 = uVar3 - *((uint *)GEN_TOP((iVar6 + 8)));
    }
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar6 + 4))) + uVar4 * 4)));
    uVar5 = uVar5 - 1;
    iVar6 = 0;
    if (param_8 != ((int *)GEN_TOP(0x0))) {
      iVar6 = *param_8;
    }
    uVar4 = uVar5;
    if (*((uint *)GEN_TOP((iVar6 + 8))) <= uVar5) {
      uVar4 = uVar5 - *((uint *)GEN_TOP((iVar6 + 8)));
    }
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar6 + 4))) + uVar4 * 4)));
    *puVar2 = *puVar1;
    puVar2[2] = puVar1[2];
    puVar2[3] = puVar1[3];
    F_0042ccf0(puVar2 + 4 GEN_EDX_ARG,puVar1 + 4);
    F_0042ccf0(puVar2 + 0x19 GEN_EDX_ARG,puVar1 + 0x19);
    *(undefined1 *)(puVar2 + 0x2e) = *(undefined1 *)(puVar1 + 0x2e);
    *((undefined1 *)GEN_TOP(((int)puVar2 + 0xb9))) = *((undefined1 *)GEN_TOP(((int)puVar1 + 0xb9)));
    puVar2[0x2f] = puVar1[0x2f];
    puVar2[0x30] = puVar1[0x30];
  }
  *param_1 = 0;
  param_1[1] = 0;
  if (param_8 != ((int *)GEN_TOP(0x0))) {
    if (((undefined4 *)GEN_TOP(*param_8)) == ((undefined4 *)GEN_TOP(0x0))) {
      param_1[2] = uVar5;
      return (uint)param_1;
    }
    *param_1 = *((undefined4 *)GEN_TOP(*param_8));
  }
  param_1[2] = uVar5;
  return (uint)param_1;
}

/* ref: FUN_0094e700 */
GEN_OWN GEN_FRAME uint F_0094e700(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(uint param_7, unsigned int gen_a6), GEN_P(int * param_8, unsigned int gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8), GEN_P(uint param_10, unsigned int gen_a9), GEN_P(undefined4 param_11, unsigned int gen_a10))
{
  GEN_ENTER(0x94e700u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  undefined4 * puVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  uVar6 = param_10;
  for (uVar4 = param_4; uVar4 != param_7; uVar4 = uVar4 + 1) {
    if (param_2 == ((int *)GEN_TOP(0x0))) {
      iVar8 = 0;
    }
    else {
      iVar8 = *param_2;
    }
    uVar3 = uVar4;
    if (*((uint *)GEN_TOP((iVar8 + 8))) <= uVar4) {
      uVar3 = uVar4 - *((uint *)GEN_TOP((iVar8 + 8)));
    }
    iVar7 = 0;
    if (param_8 != ((int *)GEN_TOP(0x0))) {
      iVar7 = *param_8;
    }
    uVar5 = uVar6;
    if (*((uint *)GEN_TOP((iVar7 + 8))) <= uVar6) {
      uVar5 = uVar6 - *((uint *)GEN_TOP((iVar7 + 8)));
    }
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar8 + 4))) + uVar3 * 4)));
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar7 + 4))) + uVar5 * 4)));
    *puVar2 = *puVar1;
    puVar2[2] = puVar1[2];
    puVar2[3] = puVar1[3];
    F_0042ccf0(puVar2 + 4 GEN_EDX_ARG,puVar1 + 4);
    F_0042ccf0(puVar2 + 0x19 GEN_EDX_ARG,puVar1 + 0x19);
    *(undefined1 *)(puVar2 + 0x2e) = *(undefined1 *)(puVar1 + 0x2e);
    *((undefined1 *)GEN_TOP(((int)puVar2 + 0xb9))) = *((undefined1 *)GEN_TOP(((int)puVar1 + 0xb9)));
    puVar2[0x2f] = puVar1[0x2f];
    puVar2[0x30] = puVar1[0x30];
    uVar6 = uVar6 + 1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = uVar6;
  if ((param_8 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*param_8)) != ((undefined4 *)GEN_TOP(0x0)))) {
    *param_1 = *((undefined4 *)GEN_TOP(*param_8));
  }
  return (uint)param_1;
}

/* ref: FUN_0094e830 */
GEN_OWN GEN_FRAME unsigned int F_0094e830(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x94e830u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  for (puVar1 = param_1; puVar1 != param_2; puVar1 = puVar1 + 3) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,0);
  }
  return;
}

/* ref: FUN_0094e860 */
GEN_OWN GEN_FRAME unsigned int F_0094e860(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x94e860u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  for (puVar1 = param_1; puVar1 != param_2; puVar1 = puVar1 + 6) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,0);
  }
  return;
}

/* ref: FUN_0094e890 */
GEN_OWN GEN_FRAME unsigned int F_0094e890(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x94e890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  for (puVar1 = param_1; puVar1 != param_2; puVar1 = puVar1 + 4) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,0);
  }
  return;
}

/* ref: FUN_0094e8c0 */
GEN_OWN GEN_FRAME unsigned int F_0094e8c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x94e8c0u, gen_a0, gen_a1, gen_a2, 0u);
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
        *(undefined1 *)(puVar1 + 3) = *((undefined1 *)GEN_TOP((iVar2 + 0xc + (int)puVar1)));
      }
      puVar1 = ((undefined4 *)GEN_TOP(((int)puVar1 + 0xd)));
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_0094e910 */
GEN_OWN GEN_FRAME unsigned int F_0094e910(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined2 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x94e910u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;)
  undefined2 * puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    puVar1 = param_3;
    do {
      if (puVar1 != ((undefined2 *)GEN_TOP(0x0))) {
        *puVar1 = *((undefined2 *)GEN_TOP((iVar2 + (int)puVar1)));
        *(undefined1 *)(puVar1 + 1) = *((undefined1 *)GEN_TOP((iVar2 + 2 + (int)puVar1)));
      }
      puVar1 = ((undefined2 *)GEN_TOP(((int)puVar1 + 3)));
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_0094e960 */
GEN_OWN GEN_FRAME unsigned int F_0094e960(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x94e960u, gen_a0, gen_a1, gen_a2, 0u);
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
      }
      puVar1 = puVar1 + 2;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_0094e9a0 */
GEN_OWN GEN_FRAME unsigned int F_0094e9a0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x94e9a0u, gen_a0, gen_a1, gen_a2, 0u);
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
      }
      puVar1 = puVar1 + 2;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_0094e9e0 */
GEN_OWN GEN_FRAME unsigned int F_0094e9e0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x94e9e0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_0094eb10 */
GEN_OWN GEN_FRAME unsigned int F_0094eb10(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x94eb10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    F_0091dea0(param_2 GEN_EDX_ARG,param_3);
  }
  return;
}

/* ref: FUN_0094eb30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0094eb30(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x94eb30u, gen_a0, gen_a1, gen_a2, gen_a3);
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
LAB_0094ed2d: ;
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
        goto LAB_0094ed2d;
      }
      *(undefined1 *)(piVar5 + 5) = 1;
      *((undefined1 *)GEN_TOP((iVar2 + 0x14))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x14))) = 0;
      piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
    }
    cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x14)));
  } while( true );
}

/* ref: FUN_0094ed60 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0094ed60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x94ed60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_0091e020(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_0094ed70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0094ed70(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x94ed70u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00429760(param_5,0x18,400);
                    
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
LAB_0094ef6d: ;
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
        goto LAB_0094ef6d;
      }
      *(undefined1 *)(piVar5 + 5) = 1;
      *((undefined1 *)GEN_TOP((iVar2 + 0x14))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x14))) = 0;
      piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
    }
    cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x14)));
  } while( true );
}

/* ref: FUN_0094efa0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0094efa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x94efa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_0091e090(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_0094efb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0094efb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x94efb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_0094efd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0094efd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x94efd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_0094eff0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0094eff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x94eff0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  this_00 = ((undefined *)GEN_TOP(F_00406bd0(0x594,0,uVar1,uVar2)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  this_01 = ((undefined4 *)GEN_TOP(F_0085a1b0(this_00 GEN_EDX_ARG)));
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

/* ref: FUN_0094f060 */
GEN_OWN GEN_FRAME unsigned int F_0094f060(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x94f060u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0094f090 */
GEN_OWN GEN_FRAME unsigned int F_0094f090(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined2 * param_2, unsigned int gen_a1), GEN_P(undefined2 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x94f090u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined2 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_3 + 2);
    *((undefined1 *)GEN_TOP(((int)param_2 + 5))) = *((undefined1 *)GEN_TOP(((int)param_3 + 5)));
    *(undefined1 *)(param_2 + 3) = *(undefined1 *)(param_3 + 3);
    *((undefined1 *)GEN_TOP(((int)param_2 + 7))) = *((undefined1 *)GEN_TOP(((int)param_3 + 7)));
    F_0042cbc0(param_2 + 4 GEN_EDX_ARG,param_3 + 4);
    *(undefined4 *)(param_2 + 0x2e) = *(undefined4 *)(param_3 + 0x2e);
  }
  return;
}

/* ref: FUN_0094f0e0 */
GEN_OWN GEN_FRAME uint F_0094f0e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x94f0e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_0042c880(((undefined *)GEN_TOP((param_2 + 8))) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_0094f0f0 */
GEN_OWN GEN_FRAME uint F_0094f0f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x94f0f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  
  F_0042c880(((undefined *)GEN_TOP((param_2 + 0x80))) GEN_EDX_ARG);
  uVar1 = F_00560340(((undefined *)GEN_TOP((param_2 + 0x18))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0094f110 */
GEN_OWN GEN_FRAME unsigned int F_0094f110(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x94f110u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 4) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      puVar1[2] = puVar2[2];
      puVar1[3] = puVar2[3];
    }
    puVar1 = puVar1 + 4;
  }
  return 0;
}

/* ref: FUN_0094f150 */
GEN_OWN GEN_FRAME unsigned int F_0094f150(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x94f150u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar1 = param_3;
  for (puVar3 = param_1; puVar3 != param_2; puVar3 = puVar3 + 0x15) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      puVar4 = puVar3;
      puVar5 = puVar1;
      for (iVar2 = 0x15; iVar2 != 0; iVar2 = iVar2 - 1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
    }
    puVar1 = puVar1 + 0x15;
  }
  return 0;
}

/* ref: FUN_0094f190 */
GEN_OWN GEN_FRAME unsigned int F_0094f190(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0x94f190u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 6) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      puVar1[2] = puVar2[2];
      puVar1[3] = puVar2[3];
      puVar1[4] = puVar2[4];
      puVar1[5] = puVar2[5];
    }
    puVar1 = puVar1 + 6;
  }
  return 0;
}

/* ref: FUN_0094f1e0 */
GEN_OWN GEN_FRAME unsigned int F_0094f1e0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x94f1e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 4) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      puVar1[2] = puVar2[2];
      puVar1[3] = puVar2[3];
    }
    puVar1 = puVar1 + 4;
  }
  return 0;
}

/* ref: FUN_0094f220 */
GEN_OWN GEN_FRAME unsigned int F_0094f220(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x94f220u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_0094f250 */
GEN_OWN GEN_FRAME unsigned int F_0094f250(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x94f250u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_0094f280 */
GEN_OWN GEN_FRAME unsigned int F_0094f280(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x94f280u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0094f2c0 */
GEN_OWN GEN_FRAME unsigned int F_0094f2c0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x94f2c0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_0094f2f0 */
GEN_OWN GEN_FRAME unsigned int F_0094f2f0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x94f2f0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0094f320 */
GEN_OWN GEN_FRAME unsigned int F_0094f320(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x94f320u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_0094f350 */
GEN_OWN GEN_FRAME unsigned int F_0094f350(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x94f350u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0094f380 */
GEN_OWN GEN_FRAME unsigned int F_0094f380(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x94f380u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_0094f3b0 */
GEN_OWN GEN_FRAME unsigned int F_0094f3b0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x94f3b0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0094f3e0 */
GEN_OWN GEN_FRAME uint F_0094f3e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x94f3e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_0042c880(param_2 GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_0094f3f0 */
GEN_OWN GEN_FRAME uint F_0094f3f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x94f3f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_0042c880(param_2 GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_0094f400 */
GEN_OWN GEN_FRAME unsigned int F_0094f400(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x94f400u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_0094f440 */
GEN_OWN GEN_FRAME uint F_0094f440(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x94f440u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_0042c880(param_2 GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_0094f450 */
GEN_OWN GEN_FRAME uint F_0094f450(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x94f450u, gen_a0, gen_a1, gen_a2, 0u);
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
      F_0042cbc0(this GEN_EDX_ARG,iVar1);
    }
    iVar1 = iVar1 + 0x54;
    this = ((undefined *)GEN_TOP(((int)this + 0x54)));
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_0094f490 */
GEN_OWN GEN_FRAME unsigned int F_0094f490(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x94f490u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_0094f4c0 */
GEN_OWN GEN_FRAME unsigned int F_0094f4c0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x94f4c0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0094f4f0 */
GEN_OWN GEN_FRAME uint F_0094f4f0(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1), GEN_P(undefined2 * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0x94f4f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  undefined1 * puVar1;
  undefined1 * puVar2;
  undefined2 * puVar3;
  
  if (param_1 != param_2) {
    puVar2 = param_1 + 4;
    puVar3 = param_3;
    do {
      if (puVar3 != ((undefined2 *)GEN_TOP(0x0))) {
        *puVar3 = *(undefined2 *)(puVar2 - 4);
        puVar3[1] = *(undefined2 *)(puVar2 - 2);
        *(undefined1 *)(puVar3 + 2) = *puVar2;
        *((undefined1 *)GEN_TOP(((int)puVar3 + 5))) = puVar2[1];
        *(undefined1 *)(puVar3 + 3) = puVar2[2];
        *((undefined1 *)GEN_TOP(((int)puVar3 + 7))) = puVar2[3];
        F_0042cbc0(puVar3 + 4 GEN_EDX_ARG,puVar2 + 4);
        *(undefined4 *)(puVar3 + 0x2e) = *(undefined4 *)(puVar2 + 0x58);
      }
      puVar1 = puVar2 + 0x5c;
      puVar3 = puVar3 + 0x30;
      puVar2 = puVar2 + 0x60;
    } while (puVar1 != param_2);
    return (uint)puVar3;
  }
  return (uint)param_3;
}

/* ref: FUN_0094f560 */
GEN_OWN GEN_FRAME unsigned int F_0094f560(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x94f560u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_0094f5a0 */
GEN_OWN GEN_FRAME unsigned int F_0094f5a0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x94f5a0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_0094f5e0 */
GEN_OWN GEN_FRAME unsigned int F_0094f5e0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x94f5e0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_0094f610 */
GEN_OWN GEN_FRAME unsigned int F_0094f610(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x94f610u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_0094f640 */
GEN_OWN GEN_FRAME unsigned int F_0094f640(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x94f640u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_0094f670 */
GEN_OWN GEN_FRAME unsigned int F_0094f670(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x94f670u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_0094f6a0 */
GEN_OWN GEN_FRAME unsigned int F_0094f6a0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x94f6a0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_0094f6d0 */
GEN_OWN GEN_FRAME unsigned int F_0094f6d0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0x94f6d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 6) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      puVar1[2] = puVar2[2];
      puVar1[3] = puVar2[3];
      puVar1[4] = puVar2[4];
      puVar1[5] = puVar2[5];
    }
    puVar1 = puVar1 + 6;
  }
  return 0;
}

/* ref: FUN_0094f720 */
GEN_OWN GEN_FRAME unsigned int F_0094f720(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x94f720u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_0094f750 */
GEN_OWN GEN_FRAME unsigned int F_0094f750(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x94f750u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_0094f780 */
GEN_OWN GEN_FRAME unsigned int F_0094f780(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x94f780u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_0094f7c0 */
GEN_OWN GEN_FRAME unsigned int F_0094f7c0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x94f7c0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_0094f7f0 */
GEN_OWN GEN_FRAME unsigned int F_0094f7f0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x94f7f0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_0094f830 */
GEN_OWN GEN_FRAME uint F_0094f830(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x94f830u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  F_0042c880(((undefined *)GEN_TOP((param_2 + 0x68))) GEN_EDX_ARG);
  uVar1 = F_0042c880(((undefined *)GEN_TOP((param_2 + 0x14))) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_0094f850 */
GEN_OWN GEN_FRAME unsigned int F_0094f850(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0x94f850u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 6) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      puVar1[2] = puVar2[2];
      puVar1[3] = puVar2[3];
      puVar1[4] = puVar2[4];
      puVar1[5] = puVar2[5];
    }
    puVar1 = puVar1 + 6;
  }
  return 0;
}

/* ref: std::allocator<std::_Container_proxy>::construct_0094f8a0 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_0094f8a0(GEN_P(undefined * this, unsigned int gen_a0), GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x94f8a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_0094f8c0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0094f8c0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x94f8c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    puVar2 = param_2 + 2;
    puVar3 = param_1 + 2;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return (uint)param_1;
}

/* ref: FUN_0094f8f0 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_0094f8f0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x94f8f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    F_00940a10(param_1 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_0094f910 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0094f910(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x94f910u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  }
  return (uint)param_1;
}

/* ref: std::allocator<std::_Container_proxy>::construct_0094f940 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_0094f940(GEN_P(undefined * this, unsigned int gen_a0), GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x94f940u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_0094f960 */
GEN_OWN GEN_FRAME uint F_0094f960(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x94f960u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = param_1[3];
  uVar2 = *param_1;
  uVar3 = param_1[4];
  uVar4 = param_1[1];
  uVar5 = param_1[2];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  *param_2 = uVar2;
  param_2[1] = uVar4;
  param_2[2] = uVar5;
  param_2[3] = uVar1;
  param_2[4] = uVar3;
  return uVar3;
}

/* ref: FUN_0094f9c0 */
GEN_OWN GEN_FRAME uint F_0094f9c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(code * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x94f9c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(code * param_3 = (code *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  uVar3 = (param_2 - param_1) / 0x14;
  uVar4 = (int)uVar3 / 2;
  uVar6 = uVar4;
  if (0 < (int)uVar4) {
    uVar8 = uVar4 * 2 + 2;
    iVar7 = param_1 + uVar4 * 0x14;
    do {
      (*(undefined4 *)(gen_frame + 0x0)) = *((undefined4 *)GEN_TOP((iVar7 - 0x14)));
      (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP((iVar7 - 0x10)));
      (*(undefined4 *)(gen_frame + 0x8)) = *((undefined4 *)GEN_TOP((iVar7 - 0xc)));
      uVar4 = uVar4 - 1;
      (*(int *)(gen_frame + 0x18)) = iVar7 - 0x14;
      (*(undefined4 *)(gen_frame + 0xc)) = *((undefined4 *)GEN_TOP((iVar7 - 8)));
      (*(uint *)(gen_frame + 0x14)) = uVar8 - 2;
      (*(undefined4 *)(gen_frame + 0x10)) = *((undefined4 *)GEN_TOP((iVar7 - 4)));
      uVar6 = uVar4;
      for (uVar8 = uVar8 - 2; (int)uVar8 < (int)uVar3; uVar8 = uVar8 * 2 + 2) {
        iVar7 = param_1 + uVar8 * 0x14;
        uVar5 = (*param_3)(iVar7,iVar7 - 0x14);
        if ((char)uVar5 != '\0') {
          uVar8 = uVar8 - 1;
        }
        puVar1 = ((undefined4 *)GEN_TOP((param_1 + uVar8 * 0x14)));
        *((undefined4 *)GEN_TOP((param_1 + uVar6 * 0x14))) = *puVar1;
        iVar7 = param_1 + uVar6 * 0x14;
        *((undefined4 *)GEN_TOP((iVar7 + 4))) = puVar1[1];
        *((undefined4 *)GEN_TOP((iVar7 + 8))) = puVar1[2];
        *((undefined4 *)GEN_TOP((iVar7 + 0xc))) = puVar1[3];
        *((undefined4 *)GEN_TOP((iVar7 + 0x10))) = puVar1[4];
        uVar6 = uVar8;
      }
      if (uVar8 == uVar3) {
        iVar2 = param_1 - 0x14 + uVar3 * 0x14;
        *((undefined4 *)GEN_TOP((param_1 + uVar6 * 0x14))) = *((undefined4 *)GEN_TOP((param_1 - 0x14 + uVar3 * 0x14)));
        iVar7 = param_1 + uVar6 * 0x14;
        *((undefined4 *)GEN_TOP((iVar7 + 4))) = *((undefined4 *)GEN_TOP((iVar2 + 4)));
        *((undefined4 *)GEN_TOP((iVar7 + 8))) = *((undefined4 *)GEN_TOP((iVar2 + 8)));
        *((undefined4 *)GEN_TOP((iVar7 + 0xc))) = *((undefined4 *)GEN_TOP((iVar2 + 0xc)));
        *((undefined4 *)GEN_TOP((iVar7 + 0x10))) = *((undefined4 *)GEN_TOP((iVar2 + 0x10)));
        uVar6 = uVar3 - 1;
      }
      uVar6 = F_0091fc00(param_1,uVar6,uVar4,&(*(undefined4 *)(gen_frame + 0x0)),param_3);
      iVar7 = (*(int *)(gen_frame + 0x18));
      uVar8 = (*(uint *)(gen_frame + 0x14));
    } while (0 < (int)uVar4);
  }
  return uVar6;
}

/* ref: FUN_0094faf0 */
GEN_OWN GEN_FRAME uint F_0094faf0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x94faf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = param_1[3];
  uVar2 = *param_1;
  uVar3 = param_1[4];
  uVar4 = param_1[1];
  uVar5 = param_1[2];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  *param_2 = uVar2;
  param_2[1] = uVar4;
  param_2[2] = uVar5;
  param_2[3] = uVar1;
  param_2[4] = uVar3;
  return uVar3;
}

/* ref: FUN_0094fb50 */
GEN_OWN GEN_FRAME uint F_0094fb50(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(code * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x94fb50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(code * param_3 = (code *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  uVar3 = (param_2 - param_1) / 0x14;
  uVar4 = (int)uVar3 / 2;
  uVar6 = uVar4;
  if (0 < (int)uVar4) {
    uVar8 = uVar4 * 2 + 2;
    iVar7 = param_1 + uVar4 * 0x14;
    do {
      (*(undefined4 *)(gen_frame + 0x0)) = *((undefined4 *)GEN_TOP((iVar7 - 0x14)));
      (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP((iVar7 - 0x10)));
      (*(undefined4 *)(gen_frame + 0x8)) = *((undefined4 *)GEN_TOP((iVar7 - 0xc)));
      uVar4 = uVar4 - 1;
      (*(int *)(gen_frame + 0x18)) = iVar7 - 0x14;
      (*(undefined4 *)(gen_frame + 0xc)) = *((undefined4 *)GEN_TOP((iVar7 - 8)));
      (*(uint *)(gen_frame + 0x14)) = uVar8 - 2;
      (*(undefined4 *)(gen_frame + 0x10)) = *((undefined4 *)GEN_TOP((iVar7 - 4)));
      uVar6 = uVar4;
      for (uVar8 = uVar8 - 2; (int)uVar8 < (int)uVar3; uVar8 = uVar8 * 2 + 2) {
        iVar7 = param_1 + uVar8 * 0x14;
        uVar5 = (*param_3)(iVar7,iVar7 - 0x14);
        if ((char)uVar5 != '\0') {
          uVar8 = uVar8 - 1;
        }
        puVar1 = ((undefined4 *)GEN_TOP((param_1 + uVar8 * 0x14)));
        *((undefined4 *)GEN_TOP((param_1 + uVar6 * 0x14))) = *puVar1;
        iVar7 = param_1 + uVar6 * 0x14;
        *((undefined4 *)GEN_TOP((iVar7 + 4))) = puVar1[1];
        *((undefined4 *)GEN_TOP((iVar7 + 8))) = puVar1[2];
        *((undefined4 *)GEN_TOP((iVar7 + 0xc))) = puVar1[3];
        *((undefined4 *)GEN_TOP((iVar7 + 0x10))) = puVar1[4];
        uVar6 = uVar8;
      }
      if (uVar8 == uVar3) {
        iVar2 = param_1 - 0x14 + uVar3 * 0x14;
        *((undefined4 *)GEN_TOP((param_1 + uVar6 * 0x14))) = *((undefined4 *)GEN_TOP((param_1 - 0x14 + uVar3 * 0x14)));
        iVar7 = param_1 + uVar6 * 0x14;
        *((undefined4 *)GEN_TOP((iVar7 + 4))) = *((undefined4 *)GEN_TOP((iVar2 + 4)));
        *((undefined4 *)GEN_TOP((iVar7 + 8))) = *((undefined4 *)GEN_TOP((iVar2 + 8)));
        *((undefined4 *)GEN_TOP((iVar7 + 0xc))) = *((undefined4 *)GEN_TOP((iVar2 + 0xc)));
        *((undefined4 *)GEN_TOP((iVar7 + 0x10))) = *((undefined4 *)GEN_TOP((iVar2 + 0x10)));
        uVar6 = uVar3 - 1;
      }
      uVar6 = F_0091fcb0(param_1,uVar6,uVar4,&(*(undefined4 *)(gen_frame + 0x0)),param_3);
      iVar7 = (*(int *)(gen_frame + 0x18));
      uVar8 = (*(uint *)(gen_frame + 0x14));
    } while (0 < (int)uVar4);
  }
  return uVar6;
}

/* ref: FUN_0094fc80 */
GEN_OWN GEN_FRAME uint F_0094fc80(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x94fc80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_0094fcb0 */
GEN_OWN GEN_FRAME uint F_0094fcb0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(code * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x94fcb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(code * param_3 = (code *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  uVar5 = param_2 - param_1 >> 3;
  uVar2 = (int)(uVar5 - (param_2 - param_1 >> 0x1f)) >> 1;
  uVar4 = uVar2;
  if (0 < (int)uVar2) {
    uVar7 = uVar2 * 2 + 2;
    iVar6 = param_1 + uVar2 * 8;
    do {
      uVar2 = uVar2 - 1;
      (*(int *)(gen_frame + 0xc)) = iVar6 - 8;
      uVar1 = *((undefined4 *)GEN_TOP((iVar6 - 4)));
      (*(undefined4 *)(gen_frame + 0x0)) = *((undefined4 *)GEN_TOP((iVar6 - 8)));
      (*(uint *)(gen_frame + 0x8)) = uVar7 - 2;
      (*(undefined4 *)(gen_frame + 0x4)) = uVar1;
      uVar4 = uVar2;
      for (uVar7 = uVar7 - 2; (int)uVar7 < (int)uVar5; uVar7 = uVar7 * 2 + 2) {
        iVar6 = param_1 + uVar7 * 8;
        uVar3 = (*param_3)(iVar6,iVar6 - 8);
        if ((char)uVar3 != '\0') {
          uVar7 = uVar7 - 1;
        }
        *((undefined4 *)GEN_TOP((param_1 + uVar4 * 8))) = *((undefined4 *)GEN_TOP((param_1 + uVar7 * 8)));
        *((undefined4 *)GEN_TOP((param_1 + 4 + uVar4 * 8))) = *((undefined4 *)GEN_TOP((param_1 + 4 + uVar7 * 8)));
        uVar4 = uVar7;
      }
      if (uVar7 == uVar5) {
        *((undefined4 *)GEN_TOP((param_1 + uVar4 * 8))) = *((undefined4 *)GEN_TOP((param_1 - 8 + uVar5 * 8)));
        *((undefined4 *)GEN_TOP((param_1 + 4 + uVar4 * 8))) = *((undefined4 *)GEN_TOP((param_1 - 4 + uVar5 * 8)));
        uVar4 = uVar5 - 1;
      }
      uVar4 = F_0091fd60(param_1,uVar4,uVar2,&(*(undefined4 *)(gen_frame + 0x0)),param_3);
      iVar6 = (*(int *)(gen_frame + 0xc));
      uVar7 = (*(uint *)(gen_frame + 0x8));
    } while (0 < (int)uVar2);
  }
  return uVar4;
}

/* ref: FUN_0094fd80 */
GEN_OWN GEN_FRAME unsigned int F_0094fd80(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(code * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x94fd80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(code * param_3 = (code *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  undefined4 uVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  char cVar4;
  uint uVar5;
  undefined4 * puVar6;
  
  if ((param_1 != param_2) && (puVar6 = param_1 + 2, puVar6 != param_2)) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = param_1;
    do {
      uVar1 = puVar6[1];
      (*(undefined4 *)(gen_frame + 0x0)) = *puVar6;
      (*(undefined4 *)(gen_frame + 0x4)) = uVar1;
      uVar5 = (*param_3)(&(*(undefined4 *)(gen_frame + 0x0)),param_1);
      puVar3 = (*(undefined4 * PTR32 *)(gen_frame + 0x8));
      puVar2 = puVar6;
      if ((char)uVar5 == '\0') {
        uVar5 = (*param_3)(&(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 * PTR32 *)(gen_frame + 0x8)));
        cVar4 = (char)uVar5;
        while (cVar4 != '\0') {
          *puVar2 = *puVar3;
          puVar2[1] = puVar3[1];
          uVar5 = (*param_3)(&(*(undefined4 *)(gen_frame + 0x0)),puVar3 - 2);
          puVar2 = puVar3;
          puVar3 = puVar3 - 2;
          cVar4 = (char)uVar5;
        }
        *puVar2 = (*(undefined4 *)(gen_frame + 0x0));
        puVar2[1] = (*(undefined4 *)(gen_frame + 0x4));
      }
      else {
        for (; param_1 != puVar2; puVar2 = puVar2 - 2) {
          *puVar2 = puVar2[-2];
          puVar2[1] = puVar2[-1];
        }
        *param_1 = (*(undefined4 *)(gen_frame + 0x0));
        param_1[1] = (*(undefined4 *)(gen_frame + 0x4));
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (*(undefined4 * PTR32 *)(gen_frame + 0x8)) + 2;
      puVar6 = puVar6 + 2;
    } while (puVar6 != param_2);
  }
  return 0;
}

/* ref: FUN_0094fe50 */
GEN_OWN GEN_FRAME uint F_0094fe50(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x94fe50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_009415a0(param_1,param_2);
  return uVar1;
}

/* ref: FUN_0094fe60 */
GEN_OWN_GS GEN_FRAME uint F_0094fe60(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x94fe60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_GS(0x74, 12, 4);
  int iVar1;
  uint uVar2;
  undefined4 * puVar3;
  int iVar4;
  ulonglong uVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x70));
  iVar1 = (param_2 - param_1) / 0x6c;
  uVar2 = iVar1 - (iVar1 >> 0x1f);
  iVar4 = iVar1 / 2;
  if (0 < iVar4) {
    puVar3 = ((undefined4 *)GEN_TOP((iVar4 * 0x6c + 0x58 + param_1)));
    do {
      iVar4 = iVar4 - 1;
      F_0042cbc0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,puVar3 - 0x31);
      (*(undefined4 *)(gen_frame + 0x54)) = puVar3[-0x1c];
      (*(undefined4 *)(gen_frame + 0x58)) = puVar3[-0x1b];
      (*(undefined4 *)(gen_frame + 0x60)) = puVar3[-0x19];
      (*(undefined4 *)(gen_frame + 0x64)) = puVar3[-0x18];
      (*(undefined4 *)(gen_frame + 0x5c)) = puVar3[-0x1a];
      (*(undefined4 *)(gen_frame + 0x68)) = puVar3[-0x17];
      F_00941660(param_1,iVar4,iVar1,((undefined1 *)(gen_frame + 0x0)),param_3);
      uVar5 = F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      uVar2 = (uint)uVar5;
      puVar3 = puVar3 - 0x1b;
    } while (0 < iVar4);
  }
  return uVar2;
}

/* ref: FUN_0094ff20 */
GEN_OWN_GS GEN_FRAME uint F_0094ff20(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(code * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x94ff20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(code * param_3 = (code *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_GS(0x74, 12, 4);
  undefined * pvVar1;
  undefined * pvVar2;
  undefined * pvVar3;
  char cVar4;
  uint uVar5;
  undefined * pvVar6;
  ulonglong uVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x70));
  pvVar6 = param_2;
  pvVar3 = param_1;
  if (param_1 != param_2) {
    while (pvVar1 = ((undefined *)GEN_TOP(((int)pvVar3 + 0x6c))), pvVar1 != param_2) {
      F_0042cbc0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,pvVar1);
      (*(undefined4 *)(gen_frame + 0x54)) = *((undefined4 *)GEN_TOP(((int)pvVar3 + 0xc0)));
      (*(undefined4 *)(gen_frame + 0x60)) = *((undefined4 *)GEN_TOP(((int)pvVar3 + 0xcc)));
      (*(undefined4 *)(gen_frame + 0x58)) = *((undefined4 *)GEN_TOP(((int)pvVar3 + 0xc4)));
      (*(undefined4 *)(gen_frame + 0x5c)) = *((undefined4 *)GEN_TOP(((int)pvVar3 + 200)));
      (*(undefined4 *)(gen_frame + 0x64)) = *((undefined4 *)GEN_TOP(((int)pvVar3 + 0xd0)));
      (*(undefined4 *)(gen_frame + 0x68)) = *((undefined4 *)GEN_TOP(((int)pvVar3 + 0xd4)));
      uVar5 = (*param_3)(((undefined1 *)(gen_frame + 0x0)),param_1);
      if ((char)uVar5 == '\0') {
        uVar5 = (*param_3)(((undefined1 *)(gen_frame + 0x0)),pvVar3);
        cVar4 = (char)uVar5;
        pvVar6 = pvVar1;
        while (pvVar2 = pvVar3, cVar4 != '\0') {
          F_0042ccf0(pvVar6 GEN_EDX_ARG,pvVar2);
          *((undefined4 *)GEN_TOP(((int)pvVar6 + 0x54))) = *((undefined4 *)GEN_TOP(((int)pvVar2 + 0x54)));
          *((undefined4 *)GEN_TOP(((int)pvVar6 + 0x58))) = *((undefined4 *)GEN_TOP(((int)pvVar2 + 0x58)));
          *((undefined4 *)GEN_TOP(((int)pvVar6 + 0x5c))) = *((undefined4 *)GEN_TOP(((int)pvVar2 + 0x5c)));
          *((undefined4 *)GEN_TOP(((int)pvVar6 + 0x60))) = *((undefined4 *)GEN_TOP(((int)pvVar2 + 0x60)));
          *((undefined4 *)GEN_TOP(((int)pvVar6 + 100))) = *((undefined4 *)GEN_TOP(((int)pvVar2 + 100)));
          *((undefined4 *)GEN_TOP(((int)pvVar6 + 0x68))) = *((undefined4 *)GEN_TOP(((int)pvVar2 + 0x68)));
          uVar5 = (*param_3)(((undefined1 *)(gen_frame + 0x0)),((undefined *)GEN_TOP(((int)pvVar2 - 0x6c))));
          pvVar3 = ((undefined *)GEN_TOP(((int)pvVar2 - 0x6c)));
          pvVar6 = pvVar2;
          cVar4 = (char)uVar5;
        }
        F_0042ccf0(pvVar6 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
        *((undefined4 *)GEN_TOP(((int)pvVar6 + 0x54))) = (*(undefined4 *)(gen_frame + 0x54));
        *((undefined4 *)GEN_TOP(((int)pvVar6 + 0x58))) = (*(undefined4 *)(gen_frame + 0x58));
        *((undefined4 *)GEN_TOP(((int)pvVar6 + 0x5c))) = (*(undefined4 *)(gen_frame + 0x5c));
        *((undefined4 *)GEN_TOP(((int)pvVar6 + 0x60))) = (*(undefined4 *)(gen_frame + 0x60));
        *((undefined4 *)GEN_TOP(((int)pvVar6 + 100))) = (*(undefined4 *)(gen_frame + 0x64));
        *((undefined4 *)GEN_TOP(((int)pvVar6 + 0x68))) = (*(undefined4 *)(gen_frame + 0x68));
      }
      else {
        F_0091feb0(param_1,pvVar1,(int)pvVar3 + 0xd8,param_1);
        F_0042ccf0(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
        *((undefined4 *)GEN_TOP(((int)param_1 + 0x54))) = (*(undefined4 *)(gen_frame + 0x54));
        *((undefined4 *)GEN_TOP(((int)param_1 + 0x58))) = (*(undefined4 *)(gen_frame + 0x58));
        *((undefined4 *)GEN_TOP(((int)param_1 + 0x5c))) = (*(undefined4 *)(gen_frame + 0x5c));
        *((undefined4 *)GEN_TOP(((int)param_1 + 0x60))) = (*(undefined4 *)(gen_frame + 0x60));
        *((undefined4 *)GEN_TOP(((int)param_1 + 100))) = (*(undefined4 *)(gen_frame + 0x64));
        *((undefined4 *)GEN_TOP(((int)param_1 + 0x68))) = (*(undefined4 *)(gen_frame + 0x68));
      }
      uVar7 = F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      pvVar6 = ((undefined *)GEN_TOP((uint)uVar7));
      pvVar3 = pvVar1;
    }
  }
  return (uint)pvVar6;
}

/* ref: FUN_00950090 */
GEN_OWN GEN_FRAME uint F_00950090(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x950090u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00941760(param_1,param_2);
  return uVar1;
}

/* ref: FUN_009500a0 */
GEN_OWN_GS GEN_FRAME uint F_009500a0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x9500a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_GS(0x70, 0, 4);
  int iVar1;
  uint uVar2;
  undefined4 * puVar3;
  int iVar4;
  ulonglong uVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c));
  iVar1 = (param_2 - param_1) / 0x68;
  uVar2 = iVar1 - (iVar1 >> 0x1f);
  iVar4 = iVar1 / 2;
  if (0 < iVar4) {
    puVar3 = ((undefined4 *)GEN_TOP((iVar4 * 0x68 + 0x58 + param_1)));
    do {
      iVar4 = iVar4 - 1;
      F_0042cbc0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,puVar3 - 0x30);
      (*(undefined4 *)(gen_frame + 0x54)) = puVar3[-0x1b];
      (*(undefined4 *)(gen_frame + 0x5c)) = puVar3[-0x19];
      (*(undefined4 *)(gen_frame + 0x60)) = puVar3[-0x18];
      (*(undefined4 *)(gen_frame + 0x58)) = puVar3[-0x1a];
      (*(undefined1 *)(gen_frame + 0x64)) = *(undefined1 *)(puVar3 - 0x17);
      F_00941810(param_1,iVar4,iVar1,((undefined1 *)(gen_frame + 0x0)),param_3);
      uVar5 = F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      uVar2 = (uint)uVar5;
      puVar3 = puVar3 - 0x1a;
    } while (0 < iVar4);
  }
  return uVar2;
}

/* ref: FUN_00950150 */
GEN_OWN_GS GEN_FRAME uint F_00950150(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(code * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x950150u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(code * param_3 = (code *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_GS(0x70, 0, 4);
  undefined * pvVar1;
  undefined * pvVar2;
  undefined * pvVar3;
  char cVar4;
  uint uVar5;
  undefined * pvVar6;
  ulonglong uVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c));
  pvVar6 = param_2;
  pvVar3 = param_1;
  if (param_1 != param_2) {
    while (pvVar1 = ((undefined *)GEN_TOP(((int)pvVar3 + 0x68))), pvVar1 != param_2) {
      F_0042cbc0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,pvVar1);
      (*(undefined4 *)(gen_frame + 0x5c)) = *((undefined4 *)GEN_TOP(((int)pvVar3 + 0xc4)));
      (*(undefined4 *)(gen_frame + 0x54)) = *((undefined4 *)GEN_TOP(((int)pvVar3 + 0xbc)));
      (*(undefined4 *)(gen_frame + 0x58)) = *((undefined4 *)GEN_TOP(((int)pvVar3 + 0xc0)));
      (*(undefined4 *)(gen_frame + 0x60)) = *((undefined4 *)GEN_TOP(((int)pvVar3 + 200)));
      (*(undefined1 *)(gen_frame + 0x64)) = *((undefined1 *)GEN_TOP(((int)pvVar3 + 0xcc)));
      uVar5 = (*param_3)(((undefined1 *)(gen_frame + 0x0)),param_1);
      if ((char)uVar5 == '\0') {
        uVar5 = (*param_3)(((undefined1 *)(gen_frame + 0x0)),pvVar3);
        cVar4 = (char)uVar5;
        pvVar6 = pvVar1;
        while (pvVar2 = pvVar3, cVar4 != '\0') {
          F_0042ccf0(pvVar6 GEN_EDX_ARG,pvVar2);
          *((undefined4 *)GEN_TOP(((int)pvVar6 + 0x54))) = *((undefined4 *)GEN_TOP(((int)pvVar2 + 0x54)));
          *((undefined4 *)GEN_TOP(((int)pvVar6 + 0x58))) = *((undefined4 *)GEN_TOP(((int)pvVar2 + 0x58)));
          *((undefined4 *)GEN_TOP(((int)pvVar6 + 0x5c))) = *((undefined4 *)GEN_TOP(((int)pvVar2 + 0x5c)));
          *((undefined4 *)GEN_TOP(((int)pvVar6 + 0x60))) = *((undefined4 *)GEN_TOP(((int)pvVar2 + 0x60)));
          *((undefined1 *)GEN_TOP(((int)pvVar6 + 100))) = *((undefined1 *)GEN_TOP(((int)pvVar2 + 100)));
          uVar5 = (*param_3)(((undefined1 *)(gen_frame + 0x0)),((undefined *)GEN_TOP(((int)pvVar2 - 0x68))));
          pvVar3 = ((undefined *)GEN_TOP(((int)pvVar2 - 0x68)));
          pvVar6 = pvVar2;
          cVar4 = (char)uVar5;
        }
        F_0042ccf0(pvVar6 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
        *((undefined4 *)GEN_TOP(((int)pvVar6 + 0x54))) = (*(undefined4 *)(gen_frame + 0x54));
        *((undefined4 *)GEN_TOP(((int)pvVar6 + 0x58))) = (*(undefined4 *)(gen_frame + 0x58));
        *((undefined4 *)GEN_TOP(((int)pvVar6 + 0x5c))) = (*(undefined4 *)(gen_frame + 0x5c));
        *((undefined4 *)GEN_TOP(((int)pvVar6 + 0x60))) = (*(undefined4 *)(gen_frame + 0x60));
        *((undefined1 *)GEN_TOP(((int)pvVar6 + 100))) = (*(undefined1 *)(gen_frame + 0x64));
      }
      else {
        F_0091ffb0(param_1,pvVar1,(int)pvVar3 + 0xd0,param_1);
        F_0042ccf0(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
        *((undefined4 *)GEN_TOP(((int)param_1 + 0x54))) = (*(undefined4 *)(gen_frame + 0x54));
        *((undefined4 *)GEN_TOP(((int)param_1 + 0x58))) = (*(undefined4 *)(gen_frame + 0x58));
        *((undefined4 *)GEN_TOP(((int)param_1 + 0x5c))) = (*(undefined4 *)(gen_frame + 0x5c));
        *((undefined4 *)GEN_TOP(((int)param_1 + 0x60))) = (*(undefined4 *)(gen_frame + 0x60));
        *((undefined1 *)GEN_TOP(((int)param_1 + 100))) = (*(undefined1 *)(gen_frame + 0x64));
      }
      uVar7 = F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      pvVar6 = ((undefined *)GEN_TOP((uint)uVar7));
      pvVar3 = pvVar1;
    }
  }
  return (uint)pvVar6;
}

/* ref: FUN_009502a0 */
GEN_OWN GEN_FRAME uint F_009502a0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9502a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_009502c0 */
GEN_OWN GEN_FRAME uint F_009502c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(code * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x9502c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(code * param_3 = (code *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar5 = param_2 - param_1 >> 2;
  uVar4 = iVar5 - (param_2 - param_1 >> 0x1f);
  iVar6 = (int)uVar4 >> 1;
  if (0 < iVar6) {
    iVar7 = iVar6 * 2 + 2;
    do {
      iVar1 = iVar6 * 4;
      iVar6 = iVar6 - 1;
      (*(int *)(gen_frame + 0x4)) = iVar7 - 2;
      (*(undefined4 *)(gen_frame + 0x0)) = *((undefined4 *)GEN_TOP((param_1 - 4 + iVar1)));
      iVar1 = iVar6;
      for (iVar7 = iVar7 - 2; iVar7 < iVar5; iVar7 = iVar7 * 2 + 2) {
        uVar2 = *((undefined4 *)GEN_TOP((param_1 - 4 + iVar7 * 4)));
        uVar3 = *((undefined4 *)GEN_TOP((param_1 + iVar7 * 4)));
        uVar4 = (*param_3)(uVar3,uVar2);
        if ((char)uVar4 != '\0') {
          iVar7 = iVar7 - 1;
        }
        *((undefined4 *)GEN_TOP((param_1 + iVar1 * 4))) = *((undefined4 *)GEN_TOP((param_1 + iVar7 * 4)));
        iVar1 = iVar7;
      }
      param_2 = iVar1;
      if (iVar7 == iVar5) {
        param_2 = iVar5 - 1;
        *((undefined4 *)GEN_TOP((param_1 + iVar1 * 4))) = *((undefined4 *)GEN_TOP((param_1 - 4 + iVar5 * 4)));
      }
      uVar4 = F_00920010(param_1,param_2,iVar6,&(*(undefined4 *)(gen_frame + 0x0)),param_3);
      iVar7 = (*(int *)(gen_frame + 0x4));
    } while (0 < iVar6);
  }
  return uVar4;
}

/* ref: FUN_00950370 */
GEN_OWN GEN_FRAME uint F_00950370(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(code * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x950370u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(code * param_3 = (code *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  undefined4 uVar1;
  undefined4 * puVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  
  puVar6 = param_2;
  puVar2 = param_1;
  if (param_1 != param_2) {
    while (puVar2 = puVar2 + 1, puVar2 != param_2) {
      uVar1 = *puVar2;
      uVar4 = (*param_3)(uVar1,*param_1);
      if ((char)uVar4 == '\0') {
        uVar4 = (*param_3)(uVar1,puVar2[-1]);
        cVar3 = (char)uVar4;
        puVar6 = puVar2;
        while (cVar3 != '\0') {
          *puVar6 = puVar6[-1];
          uVar4 = (*param_3)(uVar1,puVar6[-2]);
          puVar6 = puVar6 - 1;
          cVar3 = (char)uVar4;
        }
        *puVar6 = uVar1;
      }
      else {
        iVar5 = (int)puVar2 - (int)((int)(uintptr_t)param_1) >> 2;
        puVar6 = ((undefined4 *)GEN_TOP(F_00c46e20(puVar2 + (1 - iVar5),param_1,iVar5 * 4)))
        ;
        *param_1 = uVar1;
      }
    }
  }
  return (uint)puVar6;
}

/* ref: FUN_00950410 */
GEN_OWN GEN_FRAME uint F_00950410(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x950410u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00950440 */
GEN_OWN GEN_FRAME uint F_00950440(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(code * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x950440u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(code * param_3 = (code *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  uVar5 = param_2 - param_1 >> 3;
  uVar2 = (int)(uVar5 - (param_2 - param_1 >> 0x1f)) >> 1;
  uVar4 = uVar2;
  if (0 < (int)uVar2) {
    uVar7 = uVar2 * 2 + 2;
    iVar6 = param_1 + uVar2 * 8;
    do {
      uVar2 = uVar2 - 1;
      (*(int *)(gen_frame + 0xc)) = iVar6 - 8;
      uVar1 = *((undefined4 *)GEN_TOP((iVar6 - 4)));
      (*(undefined4 *)(gen_frame + 0x0)) = *((undefined4 *)GEN_TOP((iVar6 - 8)));
      (*(uint *)(gen_frame + 0x8)) = uVar7 - 2;
      (*(undefined4 *)(gen_frame + 0x4)) = uVar1;
      uVar4 = uVar2;
      for (uVar7 = uVar7 - 2; (int)uVar7 < (int)uVar5; uVar7 = uVar7 * 2 + 2) {
        iVar6 = param_1 + uVar7 * 8;
        uVar3 = (*param_3)(iVar6,iVar6 - 8);
        if ((char)uVar3 != '\0') {
          uVar7 = uVar7 - 1;
        }
        *((undefined4 *)GEN_TOP((param_1 + uVar4 * 8))) = *((undefined4 *)GEN_TOP((param_1 + uVar7 * 8)));
        *((undefined4 *)GEN_TOP((param_1 + 4 + uVar4 * 8))) = *((undefined4 *)GEN_TOP((param_1 + 4 + uVar7 * 8)));
        uVar4 = uVar7;
      }
      if (uVar7 == uVar5) {
        *((undefined4 *)GEN_TOP((param_1 + uVar4 * 8))) = *((undefined4 *)GEN_TOP((param_1 - 8 + uVar5 * 8)));
        *((undefined4 *)GEN_TOP((param_1 + 4 + uVar4 * 8))) = *((undefined4 *)GEN_TOP((param_1 - 4 + uVar5 * 8)));
        uVar4 = uVar5 - 1;
      }
      uVar4 = F_009200d0(param_1,uVar4,uVar2,&(*(undefined4 *)(gen_frame + 0x0)),param_3);
      iVar6 = (*(int *)(gen_frame + 0xc));
      uVar7 = (*(uint *)(gen_frame + 0x8));
    } while (0 < (int)uVar2);
  }
  return uVar4;
}

/* ref: FUN_00950510 */
GEN_OWN GEN_FRAME uint F_00950510(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x950510u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *param_2 = uVar1;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  return (uint)param_1;
}

/* ref: FUN_00950550 */
GEN_OWN GEN_FRAME uint F_00950550(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(code * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x950550u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(code * param_3 = (code *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  undefined4 * puVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  uVar3 = (param_2 - param_1) / 0xc;
  uVar4 = (int)uVar3 / 2;
  uVar6 = uVar4;
  if (0 < (int)uVar4) {
    uVar8 = uVar4 * 2 + 2;
    iVar7 = param_1 + uVar4 * 0xc;
    do {
      (*(undefined4 *)(gen_frame + 0x0)) = *((undefined4 *)GEN_TOP((iVar7 - 0xc)));
      uVar4 = uVar4 - 1;
      (*(int *)(gen_frame + 0x10)) = iVar7 - 0xc;
      (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP((iVar7 - 8)));
      (*(uint *)(gen_frame + 0xc)) = uVar8 - 2;
      (*(undefined4 *)(gen_frame + 0x8)) = *((undefined4 *)GEN_TOP((iVar7 - 4)));
      uVar6 = uVar4;
      for (uVar8 = uVar8 - 2; (int)uVar8 < (int)uVar3; uVar8 = uVar8 * 2 + 2) {
        iVar7 = param_1 + uVar8 * 0xc;
        uVar5 = (*param_3)(iVar7,iVar7 - 0xc);
        if ((char)uVar5 != '\0') {
          uVar8 = uVar8 - 1;
        }
        puVar1 = ((undefined4 *)GEN_TOP((param_1 + uVar8 * 0xc)));
        puVar2 = ((undefined4 *)GEN_TOP((param_1 + uVar6 * 0xc)));
        *puVar2 = *puVar1;
        puVar2[1] = puVar1[1];
        puVar2[2] = puVar1[2];
        uVar6 = uVar8;
      }
      if (uVar8 == uVar3) {
        iVar7 = param_1 - 0xc + uVar3 * 0xc;
        puVar1 = ((undefined4 *)GEN_TOP((param_1 + uVar6 * 0xc)));
        *puVar1 = *((undefined4 *)GEN_TOP((param_1 - 0xc + uVar3 * 0xc)));
        puVar1[1] = *((undefined4 *)GEN_TOP((iVar7 + 4)));
        puVar1[2] = *((undefined4 *)GEN_TOP((iVar7 + 8)));
        uVar6 = uVar3 - 1;
      }
      uVar6 = F_00920150(param_1,uVar6,uVar4,&(*(undefined4 *)(gen_frame + 0x0)),param_3);
      iVar7 = (*(int *)(gen_frame + 0x10));
      uVar8 = (*(uint *)(gen_frame + 0xc));
    } while (0 < (int)uVar4);
  }
  return uVar6;
}

/* ref: FUN_00950660 */
GEN_OWN GEN_FRAME uint F_00950660(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x950660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *((undefined4 *)GEN_TOP((param_1 + 4)));
  uVar2 = *((undefined4 *)GEN_TOP((param_1 + 8)));
  *((undefined4 *)GEN_TOP((param_1 + 4))) = *((undefined4 *)GEN_TOP((param_2 + 4)));
  *((undefined4 *)GEN_TOP((param_1 + 8))) = *((undefined4 *)GEN_TOP((param_2 + 8)));
  *((undefined4 *)GEN_TOP((param_2 + 8))) = uVar2;
  *((undefined4 *)GEN_TOP((param_2 + 4))) = uVar1;
  return param_1;
}

/* ref: FUN_00950690 */
GEN_OWN GEN_FRAME byte F_00950690(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x950690u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar2 = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
  uVar3 = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
  bVar1 = *((byte *)GEN_TOP((param_1 + 0x14)));
  uVar4 = *((undefined4 *)GEN_TOP((param_1 + 4)));
  *((undefined4 *)GEN_TOP((param_1 + 4))) = *((undefined4 *)GEN_TOP((param_2 + 4)));
  uVar5 = *((undefined4 *)GEN_TOP((param_1 + 8)));
  *((undefined4 *)GEN_TOP((param_1 + 8))) = *((undefined4 *)GEN_TOP((param_2 + 8)));
  *((undefined4 *)GEN_TOP((param_1 + 0xc))) = *((undefined4 *)GEN_TOP((param_2 + 0xc)));
  *((undefined4 *)GEN_TOP((param_1 + 0x10))) = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
  *((undefined1 *)GEN_TOP((param_1 + 0x14))) = *((undefined1 *)GEN_TOP((param_2 + 0x14)));
  *((undefined4 *)GEN_TOP((param_2 + 8))) = uVar5;
  *((undefined4 *)GEN_TOP((param_2 + 4))) = uVar4;
  *((undefined4 *)GEN_TOP((param_2 + 0xc))) = uVar3;
  *((undefined4 *)GEN_TOP((param_2 + 0x10))) = uVar2;
  *((byte *)GEN_TOP((param_2 + 0x14))) = bVar1;
  return bVar1;
}

/* ref: FUN_009506f0 */
GEN_OWN GEN_FRAME uint F_009506f0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9506f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *((undefined4 *)GEN_TOP((param_1 + 4)));
  *((undefined4 *)GEN_TOP((param_1 + 4))) = *((undefined4 *)GEN_TOP((param_2 + 4)));
  uVar2 = *((undefined4 *)GEN_TOP((param_1 + 8)));
  *((undefined4 *)GEN_TOP((param_1 + 8))) = *((undefined4 *)GEN_TOP((param_2 + 8)));
  uVar3 = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
  *((undefined4 *)GEN_TOP((param_1 + 0xc))) = *((undefined4 *)GEN_TOP((param_2 + 0xc)));
  *((undefined4 *)GEN_TOP((param_2 + 0xc))) = uVar3;
  *((undefined4 *)GEN_TOP((param_2 + 8))) = uVar2;
  *((undefined4 *)GEN_TOP((param_2 + 4))) = uVar1;
  return param_1;
}

/* ref: FUN_00950730 */
GEN_OWN GEN_FRAME uint F_00950730(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x950730u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00950750 */
GEN_OWN GEN_FRAME uint F_00950750(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(code * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x950750u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(code * param_3 = (code *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar5 = param_2 - param_1 >> 2;
  uVar4 = iVar5 - (param_2 - param_1 >> 0x1f);
  iVar6 = (int)uVar4 >> 1;
  if (0 < iVar6) {
    iVar7 = iVar6 * 2 + 2;
    do {
      iVar1 = iVar6 * 4;
      iVar6 = iVar6 - 1;
      (*(int *)(gen_frame + 0x4)) = iVar7 - 2;
      (*(undefined4 *)(gen_frame + 0x0)) = *((undefined4 *)GEN_TOP((param_1 - 4 + iVar1)));
      iVar1 = iVar6;
      for (iVar7 = iVar7 - 2; iVar7 < iVar5; iVar7 = iVar7 * 2 + 2) {
        uVar2 = *((undefined4 *)GEN_TOP((param_1 - 4 + iVar7 * 4)));
        uVar3 = *((undefined4 *)GEN_TOP((param_1 + iVar7 * 4)));
        uVar4 = (*param_3)(uVar3,uVar2);
        if ((char)uVar4 != '\0') {
          iVar7 = iVar7 - 1;
        }
        *((undefined4 *)GEN_TOP((param_1 + iVar1 * 4))) = *((undefined4 *)GEN_TOP((param_1 + iVar7 * 4)));
        iVar1 = iVar7;
      }
      param_2 = iVar1;
      if (iVar7 == iVar5) {
        param_2 = iVar5 - 1;
        *((undefined4 *)GEN_TOP((param_1 + iVar1 * 4))) = *((undefined4 *)GEN_TOP((param_1 - 4 + iVar5 * 4)));
      }
      uVar4 = F_009201f0(param_1,param_2,iVar6,&(*(undefined4 *)(gen_frame + 0x0)),param_3);
      iVar7 = (*(int *)(gen_frame + 0x4));
    } while (0 < iVar6);
  }
  return uVar4;
}

/* ref: FUN_00950800 */
GEN_OWN GEN_FRAME uint F_00950800(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(code * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x950800u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(code * param_3 = (code *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  undefined4 uVar1;
  undefined4 * puVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  
  puVar6 = param_2;
  puVar2 = param_1;
  if (param_1 != param_2) {
    while (puVar2 = puVar2 + 1, puVar2 != param_2) {
      uVar1 = *puVar2;
      uVar4 = (*param_3)(uVar1,*param_1);
      if ((char)uVar4 == '\0') {
        uVar4 = (*param_3)(uVar1,puVar2[-1]);
        cVar3 = (char)uVar4;
        puVar6 = puVar2;
        while (cVar3 != '\0') {
          *puVar6 = puVar6[-1];
          uVar4 = (*param_3)(uVar1,puVar6[-2]);
          puVar6 = puVar6 - 1;
          cVar3 = (char)uVar4;
        }
        *puVar6 = uVar1;
      }
      else {
        iVar5 = (int)puVar2 - (int)((int)(uintptr_t)param_1) >> 2;
        puVar6 = ((undefined4 *)GEN_TOP(F_00c46e20(puVar2 + (1 - iVar5),param_1,iVar5 * 4)))
        ;
        *param_1 = uVar1;
      }
    }
  }
  return (uint)puVar6;
}

/* ref: FUN_009508a0 */
GEN_OWN GEN_FRAME uint F_009508a0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9508a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_009508c0 */
GEN_OWN GEN_FRAME uint F_009508c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(code * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x9508c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(code * param_3 = (code *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar5 = param_2 - param_1 >> 2;
  uVar4 = iVar5 - (param_2 - param_1 >> 0x1f);
  iVar6 = (int)uVar4 >> 1;
  if (0 < iVar6) {
    iVar7 = iVar6 * 2 + 2;
    do {
      iVar1 = iVar6 * 4;
      iVar6 = iVar6 - 1;
      (*(int *)(gen_frame + 0x4)) = iVar7 - 2;
      (*(undefined4 *)(gen_frame + 0x0)) = *((undefined4 *)GEN_TOP((param_1 - 4 + iVar1)));
      iVar1 = iVar6;
      for (iVar7 = iVar7 - 2; iVar7 < iVar5; iVar7 = iVar7 * 2 + 2) {
        uVar2 = *((undefined4 *)GEN_TOP((param_1 - 4 + iVar7 * 4)));
        uVar3 = *((undefined4 *)GEN_TOP((param_1 + iVar7 * 4)));
        uVar4 = (*param_3)(uVar3,uVar2);
        if ((char)uVar4 != '\0') {
          iVar7 = iVar7 - 1;
        }
        *((undefined4 *)GEN_TOP((param_1 + iVar1 * 4))) = *((undefined4 *)GEN_TOP((param_1 + iVar7 * 4)));
        iVar1 = iVar7;
      }
      param_2 = iVar1;
      if (iVar7 == iVar5) {
        param_2 = iVar5 - 1;
        *((undefined4 *)GEN_TOP((param_1 + iVar1 * 4))) = *((undefined4 *)GEN_TOP((param_1 - 4 + iVar5 * 4)));
      }
      uVar4 = F_009202a0(param_1,param_2,iVar6,&(*(undefined4 *)(gen_frame + 0x0)),param_3);
      iVar7 = (*(int *)(gen_frame + 0x4));
    } while (0 < iVar6);
  }
  return uVar4;
}

/* ref: FUN_00950970 */
GEN_OWN GEN_FRAME uint F_00950970(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(code * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x950970u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(code * param_3 = (code *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  undefined4 uVar1;
  undefined4 * puVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  
  puVar6 = param_2;
  puVar2 = param_1;
  if (param_1 != param_2) {
    while (puVar2 = puVar2 + 1, puVar2 != param_2) {
      uVar1 = *puVar2;
      uVar4 = (*param_3)(uVar1,*param_1);
      if ((char)uVar4 == '\0') {
        uVar4 = (*param_3)(uVar1,puVar2[-1]);
        cVar3 = (char)uVar4;
        puVar6 = puVar2;
        while (cVar3 != '\0') {
          *puVar6 = puVar6[-1];
          uVar4 = (*param_3)(uVar1,puVar6[-2]);
          puVar6 = puVar6 - 1;
          cVar3 = (char)uVar4;
        }
        *puVar6 = uVar1;
      }
      else {
        iVar5 = (int)puVar2 - (int)((int)(uintptr_t)param_1) >> 2;
        puVar6 = ((undefined4 *)GEN_TOP(F_00c46e20(puVar2 + (1 - iVar5),param_1,iVar5 * 4)))
        ;
        *param_1 = uVar1;
      }
    }
  }
  return (uint)puVar6;
}

/* ref: FUN_00950a10 */
GEN_OWN GEN_FRAME uint F_00950a10(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x950a10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00950a30 */
GEN_OWN GEN_FRAME uint F_00950a30(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(code * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x950a30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(code * param_3 = (code *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar5 = param_2 - param_1 >> 2;
  uVar4 = iVar5 - (param_2 - param_1 >> 0x1f);
  iVar6 = (int)uVar4 >> 1;
  if (0 < iVar6) {
    iVar7 = iVar6 * 2 + 2;
    do {
      iVar1 = iVar6 * 4;
      iVar6 = iVar6 - 1;
      (*(int *)(gen_frame + 0x4)) = iVar7 - 2;
      (*(undefined4 *)(gen_frame + 0x0)) = *((undefined4 *)GEN_TOP((param_1 - 4 + iVar1)));
      iVar1 = iVar6;
      for (iVar7 = iVar7 - 2; iVar7 < iVar5; iVar7 = iVar7 * 2 + 2) {
        uVar2 = *((undefined4 *)GEN_TOP((param_1 - 4 + iVar7 * 4)));
        uVar3 = *((undefined4 *)GEN_TOP((param_1 + iVar7 * 4)));
        uVar4 = (*param_3)(uVar3,uVar2);
        if ((char)uVar4 != '\0') {
          iVar7 = iVar7 - 1;
        }
        *((undefined4 *)GEN_TOP((param_1 + iVar1 * 4))) = *((undefined4 *)GEN_TOP((param_1 + iVar7 * 4)));
        iVar1 = iVar7;
      }
      param_2 = iVar1;
      if (iVar7 == iVar5) {
        param_2 = iVar5 - 1;
        *((undefined4 *)GEN_TOP((param_1 + iVar1 * 4))) = *((undefined4 *)GEN_TOP((param_1 - 4 + iVar5 * 4)));
      }
      uVar4 = F_00920360(param_1,param_2,iVar6,&(*(undefined4 *)(gen_frame + 0x0)),param_3);
      iVar7 = (*(int *)(gen_frame + 0x4));
    } while (0 < iVar6);
  }
  return uVar4;
}

/* ref: FUN_00950ae0 */
GEN_OWN GEN_FRAME uint F_00950ae0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(code * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x950ae0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(code * param_3 = (code *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  undefined4 uVar1;
  undefined4 * puVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  
  puVar6 = param_2;
  puVar2 = param_1;
  if (param_1 != param_2) {
    while (puVar2 = puVar2 + 1, puVar2 != param_2) {
      uVar1 = *puVar2;
      uVar4 = (*param_3)(uVar1,*param_1);
      if ((char)uVar4 == '\0') {
        uVar4 = (*param_3)(uVar1,puVar2[-1]);
        cVar3 = (char)uVar4;
        puVar6 = puVar2;
        while (cVar3 != '\0') {
          *puVar6 = puVar6[-1];
          uVar4 = (*param_3)(uVar1,puVar6[-2]);
          puVar6 = puVar6 - 1;
          cVar3 = (char)uVar4;
        }
        *puVar6 = uVar1;
      }
      else {
        iVar5 = (int)puVar2 - (int)((int)(uintptr_t)param_1) >> 2;
        puVar6 = ((undefined4 *)GEN_TOP(F_00c46e20(puVar2 + (1 - iVar5),param_1,iVar5 * 4)))
        ;
        *param_1 = uVar1;
      }
    }
  }
  return (uint)puVar6;
}

/* ref: FUN_00950b80 */
GEN_OWN GEN_FRAME uint F_00950b80(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x950b80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00950ba0 */
GEN_OWN GEN_FRAME uint F_00950ba0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(code * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x950ba0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(code * param_3 = (code *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar5 = param_2 - param_1 >> 2;
  uVar4 = iVar5 - (param_2 - param_1 >> 0x1f);
  iVar6 = (int)uVar4 >> 1;
  if (0 < iVar6) {
    iVar7 = iVar6 * 2 + 2;
    do {
      iVar1 = iVar6 * 4;
      iVar6 = iVar6 - 1;
      (*(int *)(gen_frame + 0x4)) = iVar7 - 2;
      (*(undefined4 *)(gen_frame + 0x0)) = *((undefined4 *)GEN_TOP((param_1 - 4 + iVar1)));
      iVar1 = iVar6;
      for (iVar7 = iVar7 - 2; iVar7 < iVar5; iVar7 = iVar7 * 2 + 2) {
        uVar2 = *((undefined4 *)GEN_TOP((param_1 - 4 + iVar7 * 4)));
        uVar3 = *((undefined4 *)GEN_TOP((param_1 + iVar7 * 4)));
        uVar4 = (*param_3)(uVar3,uVar2);
        if ((char)uVar4 != '\0') {
          iVar7 = iVar7 - 1;
        }
        *((undefined4 *)GEN_TOP((param_1 + iVar1 * 4))) = *((undefined4 *)GEN_TOP((param_1 + iVar7 * 4)));
        iVar1 = iVar7;
      }
      param_2 = iVar1;
      if (iVar7 == iVar5) {
        param_2 = iVar5 - 1;
        *((undefined4 *)GEN_TOP((param_1 + iVar1 * 4))) = *((undefined4 *)GEN_TOP((param_1 - 4 + iVar5 * 4)));
      }
      uVar4 = F_00920420(param_1,param_2,iVar6,&(*(undefined4 *)(gen_frame + 0x0)),param_3);
      iVar7 = (*(int *)(gen_frame + 0x4));
    } while (0 < iVar6);
  }
  return uVar4;
}

/* ref: FUN_00950c50 */
GEN_OWN GEN_FRAME uint F_00950c50(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(code * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x950c50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(code * param_3 = (code *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  undefined4 uVar1;
  undefined4 * puVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  
  puVar6 = param_2;
  puVar2 = param_1;
  if (param_1 != param_2) {
    while (puVar2 = puVar2 + 1, puVar2 != param_2) {
      uVar1 = *puVar2;
      uVar4 = (*param_3)(uVar1,*param_1);
      if ((char)uVar4 == '\0') {
        uVar4 = (*param_3)(uVar1,puVar2[-1]);
        cVar3 = (char)uVar4;
        puVar6 = puVar2;
        while (cVar3 != '\0') {
          *puVar6 = puVar6[-1];
          uVar4 = (*param_3)(uVar1,puVar6[-2]);
          puVar6 = puVar6 - 1;
          cVar3 = (char)uVar4;
        }
        *puVar6 = uVar1;
      }
      else {
        iVar5 = (int)puVar2 - (int)((int)(uintptr_t)param_1) >> 2;
        puVar6 = ((undefined4 *)GEN_TOP(F_00c46e20(puVar2 + (1 - iVar5),param_1,iVar5 * 4)))
        ;
        *param_1 = uVar1;
      }
    }
  }
  return (uint)puVar6;
}

/* ref: FUN_00950cf0 */
GEN_OWN GEN_FRAME uint F_00950cf0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x950cf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar1 = param_1[3];
  uVar2 = *param_1;
  uVar3 = param_1[4];
  uVar4 = param_1[5];
  uVar5 = param_1[1];
  uVar6 = param_1[2];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  *param_2 = uVar2;
  param_2[1] = uVar5;
  param_2[2] = uVar6;
  param_2[3] = uVar1;
  param_2[4] = uVar3;
  param_2[5] = uVar4;
  return uVar3;
}

/* ref: FUN_00950d60 */
GEN_OWN GEN_FRAME uint F_00950d60(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(code * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x950d60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(code * param_3 = (code *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  uVar4 = (param_2 - param_1) / 0x18;
  uVar5 = (int)uVar4 / 2;
  uVar8 = uVar5;
  if (0 < (int)uVar5) {
    uVar6 = uVar5 * 2 + 2;
    iVar7 = param_1 + uVar5 * 0x18;
    do {
      (*(undefined4 *)(gen_frame + 0x0)) = *((undefined4 *)GEN_TOP((iVar7 - 0x18)));
      (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP((iVar7 - 0x14)));
      (*(undefined4 *)(gen_frame + 0x8)) = *((undefined4 *)GEN_TOP((iVar7 - 0x10)));
      (*(undefined4 *)(gen_frame + 0xc)) = *((undefined4 *)GEN_TOP((iVar7 - 0xc)));
      (*(undefined4 *)(gen_frame + 0x10)) = *((undefined4 *)GEN_TOP((iVar7 - 8)));
      (*(uint *)(gen_frame + 0x1c)) = uVar5 - 1;
      (*(uint *)(gen_frame + 0x18)) = uVar6 - 2;
      (*(undefined4 *)(gen_frame + 0x14)) = *((undefined4 *)GEN_TOP((iVar7 - 4)));
      uVar5 = uVar5 - 1;
      for (uVar8 = uVar6 - 2; (int)uVar8 < (int)uVar4; uVar8 = uVar8 * 2 + 2) {
        iVar1 = param_1 + uVar8 * 0x18;
        uVar6 = (*param_3)(iVar1,iVar1 - 0x18);
        if ((char)uVar6 != '\0') {
          uVar8 = uVar8 - 1;
        }
        puVar2 = ((undefined4 *)GEN_TOP((param_1 + uVar8 * 0x18)));
        puVar3 = ((undefined4 *)GEN_TOP((param_1 + uVar5 * 0x18)));
        *puVar3 = *puVar2;
        puVar3[1] = puVar2[1];
        puVar3[2] = puVar2[2];
        puVar3[3] = puVar2[3];
        puVar3[4] = puVar2[4];
        puVar3[5] = puVar2[5];
        uVar5 = uVar8;
      }
      if (uVar8 == uVar4) {
        puVar3 = ((undefined4 *)GEN_TOP((param_1 - 0x18 + uVar4 * 0x18)));
        puVar2 = ((undefined4 *)GEN_TOP((param_1 + uVar5 * 0x18)));
        *puVar2 = *puVar3;
        puVar2[1] = puVar3[1];
        puVar2[2] = puVar3[2];
        puVar2[3] = puVar3[3];
        puVar2[4] = puVar3[4];
        puVar2[5] = puVar3[5];
        uVar5 = uVar4 - 1;
      }
      uVar8 = F_00920510(param_1,uVar5,(*(uint *)(gen_frame + 0x1c)),&(*(undefined4 *)(gen_frame + 0x0)),param_3);
      uVar5 = (*(uint *)(gen_frame + 0x1c));
      iVar7 = iVar7 - 0x18;
      uVar6 = (*(uint *)(gen_frame + 0x18));
    } while (0 < (int)(*(uint *)(gen_frame + 0x1c)));
  }
  return uVar8;
}

/* ref: FUN_00950ea0 */
GEN_OWN GEN_FRAME unsigned int F_00950ea0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(code * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x950ea0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(code * param_3 = (code *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  char cVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if ((param_1 != param_2) && (puVar7 = param_1 + 6, puVar7 != param_2)) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = param_1;
    do {
      uVar1 = puVar7[1];
      uVar2 = puVar7[2];
      (*(undefined4 *)(gen_frame + 0x0)) = *puVar7;
      (*(undefined4 *)(gen_frame + 0xc)) = puVar7[3];
      (*(undefined4 *)(gen_frame + 0x4)) = uVar1;
      (*(undefined4 *)(gen_frame + 0x8)) = uVar2;
      (*(undefined4 *)(gen_frame + 0x10)) = puVar7[4];
      (*(undefined4 *)(gen_frame + 0x14)) = puVar7[5];
      uVar6 = (*param_3)(&(*(undefined4 *)(gen_frame + 0x0)),param_1);
      puVar4 = (*(undefined4 * PTR32 *)(gen_frame + 0x18));
      if ((char)uVar6 == '\0') {
        uVar6 = (*param_3)(&(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 * PTR32 *)(gen_frame + 0x18)));
        cVar5 = (char)uVar6;
        puVar3 = puVar7;
        while (cVar5 != '\0') {
          *puVar3 = *puVar4;
          puVar3[1] = puVar4[1];
          puVar3[2] = puVar4[2];
          puVar3[3] = puVar4[3];
          puVar3[4] = puVar4[4];
          puVar3[5] = puVar4[5];
          uVar6 = (*param_3)(&(*(undefined4 *)(gen_frame + 0x0)),puVar4 - 6);
          puVar3 = puVar4;
          puVar4 = puVar4 - 6;
          cVar5 = (char)uVar6;
        }
        *puVar3 = (*(undefined4 *)(gen_frame + 0x0));
        puVar3[1] = (*(undefined4 *)(gen_frame + 0x4));
        puVar3[2] = (*(undefined4 *)(gen_frame + 0x8));
        puVar3[3] = (*(undefined4 *)(gen_frame + 0xc));
        puVar3[4] = (*(undefined4 *)(gen_frame + 0x10));
        puVar3[5] = (*(undefined4 *)(gen_frame + 0x14));
      }
      else {
        F_009205c0(param_1,puVar7,(*(undefined4 * PTR32 *)(gen_frame + 0x18)) + 0xc,param_1);
        *param_1 = (*(undefined4 *)(gen_frame + 0x0));
        param_1[1] = (*(undefined4 *)(gen_frame + 0x4));
        param_1[2] = (*(undefined4 *)(gen_frame + 0x8));
        param_1[3] = (*(undefined4 *)(gen_frame + 0xc));
        param_1[4] = (*(undefined4 *)(gen_frame + 0x10));
        param_1[5] = (*(undefined4 *)(gen_frame + 0x14));
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = (*(undefined4 * PTR32 *)(gen_frame + 0x18)) + 6;
      puVar7 = puVar7 + 6;
    } while (puVar7 != param_2);
  }
  return 0;
}

/* ref: FUN_00950fd0 */
GEN_OWN GEN_FRAME uint F_00950fd0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x950fd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *param_2 = uVar1;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  return (uint)param_1;
}

/* ref: FUN_00951010 */
GEN_OWN GEN_FRAME uint F_00951010(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(code * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x951010u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(code * param_3 = (code *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  undefined4 * puVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  uVar3 = (param_2 - param_1) / 0xc;
  uVar4 = (int)uVar3 / 2;
  uVar6 = uVar4;
  if (0 < (int)uVar4) {
    uVar8 = uVar4 * 2 + 2;
    iVar7 = param_1 + uVar4 * 0xc;
    do {
      (*(undefined4 *)(gen_frame + 0x0)) = *((undefined4 *)GEN_TOP((iVar7 - 0xc)));
      uVar4 = uVar4 - 1;
      (*(int *)(gen_frame + 0x10)) = iVar7 - 0xc;
      (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP((iVar7 - 8)));
      (*(uint *)(gen_frame + 0xc)) = uVar8 - 2;
      (*(undefined4 *)(gen_frame + 0x8)) = *((undefined4 *)GEN_TOP((iVar7 - 4)));
      uVar6 = uVar4;
      for (uVar8 = uVar8 - 2; (int)uVar8 < (int)uVar3; uVar8 = uVar8 * 2 + 2) {
        iVar7 = param_1 + uVar8 * 0xc;
        uVar5 = (*param_3)(iVar7,iVar7 - 0xc);
        if ((char)uVar5 != '\0') {
          uVar8 = uVar8 - 1;
        }
        puVar1 = ((undefined4 *)GEN_TOP((param_1 + uVar8 * 0xc)));
        puVar2 = ((undefined4 *)GEN_TOP((param_1 + uVar6 * 0xc)));
        *puVar2 = *puVar1;
        puVar2[1] = puVar1[1];
        puVar2[2] = puVar1[2];
        uVar6 = uVar8;
      }
      if (uVar8 == uVar3) {
        iVar7 = param_1 - 0xc + uVar3 * 0xc;
        puVar1 = ((undefined4 *)GEN_TOP((param_1 + uVar6 * 0xc)));
        *puVar1 = *((undefined4 *)GEN_TOP((param_1 - 0xc + uVar3 * 0xc)));
        puVar1[1] = *((undefined4 *)GEN_TOP((iVar7 + 4)));
        puVar1[2] = *((undefined4 *)GEN_TOP((iVar7 + 8)));
        uVar6 = uVar3 - 1;
      }
      uVar6 = F_00920610(param_1,uVar6,uVar4,&(*(undefined4 *)(gen_frame + 0x0)),param_3);
      iVar7 = (*(int *)(gen_frame + 0x10));
      uVar8 = (*(uint *)(gen_frame + 0xc));
    } while (0 < (int)uVar4);
  }
  return uVar6;
}

/* ref: FUN_00951120 */
GEN_OWN GEN_FRAME unsigned int F_00951120(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x951120u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = param_1[3];
  uVar2 = *param_1;
  uVar3 = param_1[1];
  uVar4 = param_1[2];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  *param_2 = uVar2;
  param_2[1] = uVar3;
  param_2[2] = uVar4;
  param_2[3] = uVar1;
  return 0;
}

/* ref: FUN_00951170 */
GEN_OWN GEN_FRAME uint F_00951170(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(code * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x951170u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(code * param_3 = (code *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 * puVar5;
  int iVar6;
  uint uVar7;
  
  uVar4 = param_2 - param_1 >> 4;
  uVar1 = (int)(uVar4 - (param_2 - param_1 >> 0x1f)) >> 1;
  uVar3 = uVar1;
  if (0 < (int)uVar1) {
    uVar7 = uVar1 * 2 + 2;
    iVar6 = uVar1 * 0x10 + param_1;
    do {
      (*(undefined4 *)(gen_frame + 0x0)) = *((undefined4 *)GEN_TOP((iVar6 - 0x10)));
      (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP((iVar6 - 0xc)));
      uVar1 = uVar1 - 1;
      (*(int *)(gen_frame + 0x14)) = iVar6 - 0x10;
      (*(undefined4 *)(gen_frame + 0x8)) = *((undefined4 *)GEN_TOP((iVar6 - 8)));
      (*(uint *)(gen_frame + 0x10)) = uVar7 - 2;
      (*(undefined4 *)(gen_frame + 0xc)) = *((undefined4 *)GEN_TOP((iVar6 - 4)));
      uVar3 = uVar1;
      for (uVar7 = uVar7 - 2; (int)uVar7 < (int)uVar4; uVar7 = uVar7 * 2 + 2) {
        iVar6 = uVar7 * 0x10 + param_1;
        uVar2 = (*param_3)(iVar6,iVar6 - 0x10);
        if ((char)uVar2 != '\0') {
          uVar7 = uVar7 - 1;
        }
        iVar6 = uVar7 * 0x10 + param_1;
        puVar5 = ((undefined4 *)GEN_TOP((uVar3 * 0x10 + param_1)));
        *puVar5 = *((undefined4 *)GEN_TOP((uVar7 * 0x10 + param_1)));
        puVar5[1] = *((undefined4 *)GEN_TOP((iVar6 + 4)));
        puVar5[2] = *((undefined4 *)GEN_TOP((iVar6 + 8)));
        puVar5[3] = *((undefined4 *)GEN_TOP((iVar6 + 0xc)));
        uVar3 = uVar7;
      }
      if (uVar7 == uVar4) {
        iVar6 = param_1 - 0x10 + uVar4 * 0x10;
        puVar5 = ((undefined4 *)GEN_TOP((uVar3 * 0x10 + param_1)));
        *puVar5 = *((undefined4 *)GEN_TOP((param_1 - 0x10 + uVar4 * 0x10)));
        puVar5[1] = *((undefined4 *)GEN_TOP((iVar6 + 4)));
        puVar5[2] = *((undefined4 *)GEN_TOP((iVar6 + 8)));
        puVar5[3] = *((undefined4 *)GEN_TOP((iVar6 + 0xc)));
        uVar3 = uVar4 - 1;
      }
      uVar3 = F_009206b0(param_1,uVar3,uVar1,&(*(undefined4 *)(gen_frame + 0x0)),param_3);
      iVar6 = (*(int *)(gen_frame + 0x14));
      uVar7 = (*(uint *)(gen_frame + 0x10));
    } while (0 < (int)uVar1);
  }
  return uVar3;
}

/* ref: FUN_00951280 */
GEN_OWN GEN_FRAME uint F_00951280(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x951280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *param_2 = uVar1;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  return (uint)param_1;
}

/* ref: FUN_009512c0 */
GEN_OWN GEN_FRAME uint F_009512c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(code * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x9512c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(code * param_3 = (code *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  undefined4 * puVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  uVar3 = (param_2 - param_1) / 0xc;
  uVar4 = (int)uVar3 / 2;
  uVar6 = uVar4;
  if (0 < (int)uVar4) {
    uVar8 = uVar4 * 2 + 2;
    iVar7 = param_1 + uVar4 * 0xc;
    do {
      (*(undefined4 *)(gen_frame + 0x0)) = *((undefined4 *)GEN_TOP((iVar7 - 0xc)));
      uVar4 = uVar4 - 1;
      (*(int *)(gen_frame + 0x10)) = iVar7 - 0xc;
      (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP((iVar7 - 8)));
      (*(uint *)(gen_frame + 0xc)) = uVar8 - 2;
      (*(undefined4 *)(gen_frame + 0x8)) = *((undefined4 *)GEN_TOP((iVar7 - 4)));
      uVar6 = uVar4;
      for (uVar8 = uVar8 - 2; (int)uVar8 < (int)uVar3; uVar8 = uVar8 * 2 + 2) {
        iVar7 = param_1 + uVar8 * 0xc;
        uVar5 = (*param_3)(iVar7,iVar7 - 0xc);
        if ((char)uVar5 != '\0') {
          uVar8 = uVar8 - 1;
        }
        puVar1 = ((undefined4 *)GEN_TOP((param_1 + uVar8 * 0xc)));
        puVar2 = ((undefined4 *)GEN_TOP((param_1 + uVar6 * 0xc)));
        *puVar2 = *puVar1;
        puVar2[1] = puVar1[1];
        puVar2[2] = puVar1[2];
        uVar6 = uVar8;
      }
      if (uVar8 == uVar3) {
        iVar7 = param_1 - 0xc + uVar3 * 0xc;
        puVar1 = ((undefined4 *)GEN_TOP((param_1 + uVar6 * 0xc)));
        *puVar1 = *((undefined4 *)GEN_TOP((param_1 - 0xc + uVar3 * 0xc)));
        puVar1[1] = *((undefined4 *)GEN_TOP((iVar7 + 4)));
        puVar1[2] = *((undefined4 *)GEN_TOP((iVar7 + 8)));
        uVar6 = uVar3 - 1;
      }
      uVar6 = F_00920750(param_1,uVar6,uVar4,&(*(undefined4 *)(gen_frame + 0x0)),param_3);
      iVar7 = (*(int *)(gen_frame + 0x10));
      uVar8 = (*(uint *)(gen_frame + 0xc));
    } while (0 < (int)uVar4);
  }
  return uVar6;
}

/* ref: FUN_009513d0 */
GEN_OWN GEN_FRAME unsigned int F_009513d0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9513d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = param_1[3];
  uVar2 = *param_1;
  uVar3 = param_1[1];
  uVar4 = param_1[2];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  *param_2 = uVar2;
  param_2[1] = uVar3;
  param_2[2] = uVar4;
  param_2[3] = uVar1;
  return 0;
}

/* ref: FUN_00951420 */
GEN_OWN GEN_FRAME uint F_00951420(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(code * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x951420u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(code * param_3 = (code *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 * puVar5;
  int iVar6;
  uint uVar7;
  
  uVar4 = param_2 - param_1 >> 4;
  uVar1 = (int)(uVar4 - (param_2 - param_1 >> 0x1f)) >> 1;
  uVar3 = uVar1;
  if (0 < (int)uVar1) {
    uVar7 = uVar1 * 2 + 2;
    iVar6 = uVar1 * 0x10 + param_1;
    do {
      (*(undefined4 *)(gen_frame + 0x0)) = *((undefined4 *)GEN_TOP((iVar6 - 0x10)));
      (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP((iVar6 - 0xc)));
      uVar1 = uVar1 - 1;
      (*(int *)(gen_frame + 0x14)) = iVar6 - 0x10;
      (*(undefined4 *)(gen_frame + 0x8)) = *((undefined4 *)GEN_TOP((iVar6 - 8)));
      (*(uint *)(gen_frame + 0x10)) = uVar7 - 2;
      (*(undefined4 *)(gen_frame + 0xc)) = *((undefined4 *)GEN_TOP((iVar6 - 4)));
      uVar3 = uVar1;
      for (uVar7 = uVar7 - 2; (int)uVar7 < (int)uVar4; uVar7 = uVar7 * 2 + 2) {
        iVar6 = uVar7 * 0x10 + param_1;
        uVar2 = (*param_3)(iVar6,iVar6 - 0x10);
        if ((char)uVar2 != '\0') {
          uVar7 = uVar7 - 1;
        }
        iVar6 = uVar7 * 0x10 + param_1;
        puVar5 = ((undefined4 *)GEN_TOP((uVar3 * 0x10 + param_1)));
        *puVar5 = *((undefined4 *)GEN_TOP((uVar7 * 0x10 + param_1)));
        puVar5[1] = *((undefined4 *)GEN_TOP((iVar6 + 4)));
        puVar5[2] = *((undefined4 *)GEN_TOP((iVar6 + 8)));
        puVar5[3] = *((undefined4 *)GEN_TOP((iVar6 + 0xc)));
        uVar3 = uVar7;
      }
      if (uVar7 == uVar4) {
        iVar6 = param_1 - 0x10 + uVar4 * 0x10;
        puVar5 = ((undefined4 *)GEN_TOP((uVar3 * 0x10 + param_1)));
        *puVar5 = *((undefined4 *)GEN_TOP((param_1 - 0x10 + uVar4 * 0x10)));
        puVar5[1] = *((undefined4 *)GEN_TOP((iVar6 + 4)));
        puVar5[2] = *((undefined4 *)GEN_TOP((iVar6 + 8)));
        puVar5[3] = *((undefined4 *)GEN_TOP((iVar6 + 0xc)));
        uVar3 = uVar4 - 1;
      }
      uVar3 = F_009207f0(param_1,uVar3,uVar1,&(*(undefined4 *)(gen_frame + 0x0)),param_3);
      iVar6 = (*(int *)(gen_frame + 0x14));
      uVar7 = (*(uint *)(gen_frame + 0x10));
    } while (0 < (int)uVar1);
  }
  return uVar3;
}

/* ref: FUN_00951530 */
GEN_OWN GEN_FRAME uint F_00951530(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x951530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = param_1[3];
  uVar2 = *param_1;
  uVar3 = param_1[4];
  uVar4 = param_1[1];
  uVar5 = param_1[2];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  *param_2 = uVar2;
  param_2[1] = uVar4;
  param_2[2] = uVar5;
  param_2[3] = uVar1;
  param_2[4] = uVar3;
  return uVar3;
}

/* ref: FUN_00951590 */
GEN_OWN GEN_FRAME uint F_00951590(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(code * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x951590u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(code * param_3 = (code *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  uVar3 = (param_2 - param_1) / 0x14;
  uVar4 = (int)uVar3 / 2;
  uVar6 = uVar4;
  if (0 < (int)uVar4) {
    uVar8 = uVar4 * 2 + 2;
    iVar7 = param_1 + uVar4 * 0x14;
    do {
      (*(undefined4 *)(gen_frame + 0x0)) = *((undefined4 *)GEN_TOP((iVar7 - 0x14)));
      (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP((iVar7 - 0x10)));
      (*(undefined4 *)(gen_frame + 0x8)) = *((undefined4 *)GEN_TOP((iVar7 - 0xc)));
      uVar4 = uVar4 - 1;
      (*(int *)(gen_frame + 0x18)) = iVar7 - 0x14;
      (*(undefined4 *)(gen_frame + 0xc)) = *((undefined4 *)GEN_TOP((iVar7 - 8)));
      (*(uint *)(gen_frame + 0x14)) = uVar8 - 2;
      (*(undefined4 *)(gen_frame + 0x10)) = *((undefined4 *)GEN_TOP((iVar7 - 4)));
      uVar6 = uVar4;
      for (uVar8 = uVar8 - 2; (int)uVar8 < (int)uVar3; uVar8 = uVar8 * 2 + 2) {
        iVar7 = param_1 + uVar8 * 0x14;
        uVar5 = (*param_3)(iVar7,iVar7 - 0x14);
        if ((char)uVar5 != '\0') {
          uVar8 = uVar8 - 1;
        }
        puVar1 = ((undefined4 *)GEN_TOP((param_1 + uVar8 * 0x14)));
        *((undefined4 *)GEN_TOP((param_1 + uVar6 * 0x14))) = *puVar1;
        iVar7 = param_1 + uVar6 * 0x14;
        *((undefined4 *)GEN_TOP((iVar7 + 4))) = puVar1[1];
        *((undefined4 *)GEN_TOP((iVar7 + 8))) = puVar1[2];
        *((undefined4 *)GEN_TOP((iVar7 + 0xc))) = puVar1[3];
        *((undefined4 *)GEN_TOP((iVar7 + 0x10))) = puVar1[4];
        uVar6 = uVar8;
      }
      if (uVar8 == uVar3) {
        iVar2 = param_1 - 0x14 + uVar3 * 0x14;
        *((undefined4 *)GEN_TOP((param_1 + uVar6 * 0x14))) = *((undefined4 *)GEN_TOP((param_1 - 0x14 + uVar3 * 0x14)));
        iVar7 = param_1 + uVar6 * 0x14;
        *((undefined4 *)GEN_TOP((iVar7 + 4))) = *((undefined4 *)GEN_TOP((iVar2 + 4)));
        *((undefined4 *)GEN_TOP((iVar7 + 8))) = *((undefined4 *)GEN_TOP((iVar2 + 8)));
        *((undefined4 *)GEN_TOP((iVar7 + 0xc))) = *((undefined4 *)GEN_TOP((iVar2 + 0xc)));
        *((undefined4 *)GEN_TOP((iVar7 + 0x10))) = *((undefined4 *)GEN_TOP((iVar2 + 0x10)));
        uVar6 = uVar3 - 1;
      }
      uVar6 = F_00920890(param_1,uVar6,uVar4,&(*(undefined4 *)(gen_frame + 0x0)),param_3);
      iVar7 = (*(int *)(gen_frame + 0x18));
      uVar8 = (*(uint *)(gen_frame + 0x14));
    } while (0 < (int)uVar4);
  }
  return uVar6;
}

/* ref: FUN_009516c0 */
GEN_OWN GEN_FRAME unsigned int F_009516c0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9516c0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_009516f0 */
GEN_OWN GEN_FRAME unsigned int F_009516f0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9516f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 uVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = param_3;
  for (puVar3 = param_1; puVar3 != param_2; puVar3 = puVar3 + 2) {
    uVar1 = puVar3[1];
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar2 = *puVar3;
      puVar2[1] = uVar1;
    }
    puVar2 = puVar2 + 2;
  }
  return 0;
}

/* ref: FUN_00951720 */
GEN_OWN GEN_FRAME unsigned int F_00951720(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x951720u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00951750 */
GEN_OWN GEN_FRAME unsigned int F_00951750(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x951750u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: std::allocator<std::_Container_proxy>::construct_00951780 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00951780(GEN_P(undefined * this, unsigned int gen_a0), GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x951780u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: std::allocator<std::_Container_proxy>::construct_009517a0 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_009517a0(GEN_P(undefined * this, unsigned int gen_a0), GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x9517a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_009517c0 */
GEN_OWN GEN_FRAME uint F_009517c0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(code * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x9517c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(code * param_4 = (code *)(uintptr_t)gen_a3;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  
  uVar6 = (*param_4)(param_2,param_1);
  if ((char)uVar6 != '\0') {
    uVar1 = param_2[3];
    uVar2 = *param_2;
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[4];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    param_2[3] = param_1[3];
    param_2[4] = param_1[4];
    *param_1 = uVar2;
    param_1[1] = uVar3;
    param_1[2] = uVar4;
    param_1[3] = uVar1;
    param_1[4] = uVar5;
  }
  uVar6 = (*param_4)(param_3,param_2);
  if ((char)uVar6 != '\0') {
    uVar1 = param_3[2];
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[3];
    uVar5 = param_3[4];
    *param_3 = *param_2;
    param_3[1] = param_2[1];
    param_3[2] = param_2[2];
    param_3[3] = param_2[3];
    param_3[4] = param_2[4];
    *param_2 = uVar2;
    param_2[1] = uVar3;
    param_2[2] = uVar1;
    param_2[3] = uVar4;
    param_2[4] = uVar5;
  }
  uVar6 = (*param_4)(param_2,param_1);
  if ((char)uVar6 != '\0') {
    uVar6 = param_2[3];
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[4];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    param_2[3] = param_1[3];
    param_2[4] = param_1[4];
    *param_1 = uVar1;
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    param_1[3] = uVar6;
    param_1[4] = uVar4;
  }
  return uVar6;
}

/* ref: FUN_009518d0 */
GEN_OWN GEN_FRAME unsigned int F_009518d0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9518d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_3;
  for (iVar2 = param_2; param_1 != iVar2; iVar2 = iVar2 - 0x14) {
    puVar1[-5] = *((undefined4 *)GEN_TOP((iVar2 - 0x14)));
    puVar1[-4] = *((undefined4 *)GEN_TOP((iVar2 - 0x10)));
    puVar1[-3] = *((undefined4 *)GEN_TOP((iVar2 - 0xc)));
    puVar1[-2] = *((undefined4 *)GEN_TOP((iVar2 - 8)));
    puVar1[-1] = *((undefined4 *)GEN_TOP((iVar2 - 4)));
    puVar1 = puVar1 - 5;
  }
  return 0;
}

/* ref: FUN_00951910 */
GEN_OWN GEN_FRAME uint F_00951910(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(code * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x951910u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(code * param_4 = (code *)(uintptr_t)gen_a3;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  
  uVar6 = (*param_4)(param_2,param_1);
  if ((char)uVar6 != '\0') {
    uVar1 = param_2[3];
    uVar2 = *param_2;
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[4];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    param_2[3] = param_1[3];
    param_2[4] = param_1[4];
    *param_1 = uVar2;
    param_1[1] = uVar3;
    param_1[2] = uVar4;
    param_1[3] = uVar1;
    param_1[4] = uVar5;
  }
  uVar6 = (*param_4)(param_3,param_2);
  if ((char)uVar6 != '\0') {
    uVar1 = param_3[2];
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[3];
    uVar5 = param_3[4];
    *param_3 = *param_2;
    param_3[1] = param_2[1];
    param_3[2] = param_2[2];
    param_3[3] = param_2[3];
    param_3[4] = param_2[4];
    *param_2 = uVar2;
    param_2[1] = uVar3;
    param_2[2] = uVar1;
    param_2[3] = uVar4;
    param_2[4] = uVar5;
  }
  uVar6 = (*param_4)(param_2,param_1);
  if ((char)uVar6 != '\0') {
    uVar6 = param_2[3];
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[4];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    param_2[3] = param_1[3];
    param_2[4] = param_1[4];
    *param_1 = uVar1;
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    param_1[3] = uVar6;
    param_1[4] = uVar4;
  }
  return uVar6;
}

/* ref: FUN_00951a20 */
GEN_OWN GEN_FRAME unsigned int F_00951a20(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x951a20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_3;
  for (iVar2 = param_2; param_1 != iVar2; iVar2 = iVar2 - 0x14) {
    puVar1[-5] = *((undefined4 *)GEN_TOP((iVar2 - 0x14)));
    puVar1[-4] = *((undefined4 *)GEN_TOP((iVar2 - 0x10)));
    puVar1[-3] = *((undefined4 *)GEN_TOP((iVar2 - 0xc)));
    puVar1[-2] = *((undefined4 *)GEN_TOP((iVar2 - 8)));
    puVar1[-1] = *((undefined4 *)GEN_TOP((iVar2 - 4)));
    puVar1 = puVar1 - 5;
  }
  return 0;
}

/* ref: FUN_00951a60 */
GEN_OWN GEN_FRAME uint F_00951a60(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1), GEN_P(uint * param_3, unsigned int gen_a2), GEN_P(code * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x951a60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(code * param_4 = (code *)(uintptr_t)gen_a3;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*param_4)(param_2,param_1);
  if ((char)uVar2 != '\0') {
    uVar2 = *param_2;
    uVar1 = param_2[1];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    *param_1 = uVar2;
    param_1[1] = uVar1;
  }
  uVar2 = (*param_4)(param_3,param_2);
  if ((char)uVar2 != '\0') {
    uVar2 = *param_3;
    uVar1 = param_3[1];
    *param_3 = *param_2;
    param_3[1] = param_2[1];
    *param_2 = uVar2;
    param_2[1] = uVar1;
  }
  uVar2 = (*param_4)(param_2,param_1);
  if ((char)uVar2 != '\0') {
    uVar2 = *param_2;
    uVar1 = param_2[1];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    *param_1 = uVar2;
    param_1[1] = uVar1;
  }
  return uVar2;
}

/* ref: FUN_00951ae0 */
GEN_OWN GEN_FRAME uint F_00951ae0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(code * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x951ae0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(code * param_4 = (code *)(uintptr_t)gen_a3;)
  uint uVar1;
  
  uVar1 = (*param_4)(param_2,param_1);
  if ((char)uVar1 != '\0') {
    F_009415a0(param_2,param_1);
  }
  uVar1 = (*param_4)(param_3,param_2);
  if ((char)uVar1 != '\0') {
    F_009415a0(param_3,param_2);
  }
  uVar1 = (*param_4)(param_2,param_1);
  if ((char)uVar1 != '\0') {
    uVar1 = F_009415a0(param_2,param_1);
  }
  return uVar1;
}

/* ref: FUN_00951b40 */
GEN_OWN GEN_FRAME uint F_00951b40(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(code * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x951b40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(code * param_4 = (code *)(uintptr_t)gen_a3;)
  uint uVar1;
  
  uVar1 = (*param_4)(param_2,param_1);
  if ((char)uVar1 != '\0') {
    F_00941760(param_2,param_1);
  }
  uVar1 = (*param_4)(param_3,param_2);
  if ((char)uVar1 != '\0') {
    F_00941760(param_3,param_2);
  }
  uVar1 = (*param_4)(param_2,param_1);
  if ((char)uVar1 != '\0') {
    uVar1 = F_00941760(param_2,param_1);
  }
  return uVar1;
}

/* ref: FUN_00951ba0 */
GEN_OWN GEN_FRAME uint F_00951ba0(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1), GEN_P(uint * param_3, unsigned int gen_a2), GEN_P(code * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x951ba0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(code * param_4 = (code *)(uintptr_t)gen_a3;)
  uint uVar1;
  
  uVar1 = (*param_4)(*param_2,*param_1);
  if ((char)uVar1 != '\0') {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  uVar1 = (*param_4)(*param_3,*param_2);
  if ((char)uVar1 != '\0') {
    uVar1 = *param_3;
    *param_3 = *param_2;
    *param_2 = uVar1;
  }
  uVar1 = (*param_4)(*param_2,*param_1);
  if ((char)uVar1 != '\0') {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00951c00 */
GEN_OWN GEN_FRAME uint F_00951c00(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1), GEN_P(uint * param_3, unsigned int gen_a2), GEN_P(code * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x951c00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(code * param_4 = (code *)(uintptr_t)gen_a3;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*param_4)(param_2,param_1);
  if ((char)uVar2 != '\0') {
    uVar2 = *param_2;
    uVar1 = param_2[1];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    *param_1 = uVar2;
    param_1[1] = uVar1;
  }
  uVar2 = (*param_4)(param_3,param_2);
  if ((char)uVar2 != '\0') {
    uVar2 = *param_3;
    uVar1 = param_3[1];
    *param_3 = *param_2;
    param_3[1] = param_2[1];
    *param_2 = uVar2;
    param_2[1] = uVar1;
  }
  uVar2 = (*param_4)(param_2,param_1);
  if ((char)uVar2 != '\0') {
    uVar2 = *param_2;
    uVar1 = param_2[1];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    *param_1 = uVar2;
    param_1[1] = uVar1;
  }
  return uVar2;
}

/* ref: FUN_00951c80 */
GEN_OWN GEN_FRAME unsigned int F_00951c80(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x951c80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_3;
  for (iVar2 = param_2; param_1 != iVar2; iVar2 = iVar2 - 8) {
    puVar1[-2] = *((undefined4 *)GEN_TOP((iVar2 - 8)));
    puVar1[-1] = *((undefined4 *)GEN_TOP((iVar2 - 4)));
    puVar1 = puVar1 - 2;
  }
  return 0;
}

/* ref: FUN_00951cb0 */
GEN_OWN GEN_FRAME uint F_00951cb0(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1), GEN_P(uint * param_3, unsigned int gen_a2), GEN_P(code * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x951cb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(code * param_4 = (code *)(uintptr_t)gen_a3;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (*param_4)(param_2,param_1);
  if ((char)uVar3 != '\0') {
    uVar3 = *param_2;
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    *param_1 = uVar3;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
  }
  uVar3 = (*param_4)(param_3,param_2);
  if ((char)uVar3 != '\0') {
    uVar3 = param_3[2];
    uVar1 = *param_3;
    uVar2 = param_3[1];
    *param_3 = *param_2;
    param_3[1] = param_2[1];
    param_3[2] = param_2[2];
    *param_2 = uVar1;
    param_2[1] = uVar2;
    param_2[2] = uVar3;
  }
  uVar3 = (*param_4)(param_2,param_1);
  if ((char)uVar3 != '\0') {
    uVar3 = *param_2;
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    *param_1 = uVar3;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
  }
  return uVar3;
}

/* ref: FUN_00951d60 */
GEN_OWN GEN_FRAME unsigned int F_00951d60(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x951d60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_3;
  for (iVar2 = param_2; param_1 != iVar2; iVar2 = iVar2 - 0xc) {
    puVar1[-3] = *((undefined4 *)GEN_TOP((iVar2 - 0xc)));
    puVar1[-2] = *((undefined4 *)GEN_TOP((iVar2 - 8)));
    puVar1[-1] = *((undefined4 *)GEN_TOP((iVar2 - 4)));
    puVar1 = puVar1 - 3;
  }
  return 0;
}

/* ref: FUN_00951d90 */
GEN_OWN GEN_FRAME uint F_00951d90(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(code * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x951d90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(code * param_4 = (code *)(uintptr_t)gen_a3;)
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = (*param_4)(param_2,param_1);
  if ((char)uVar3 != '\0') {
    uVar1 = *((undefined4 *)GEN_TOP((param_2 + 4)));
    uVar2 = *((undefined4 *)GEN_TOP((param_2 + 8)));
    *((undefined4 *)GEN_TOP((param_2 + 4))) = *((undefined4 *)GEN_TOP((param_1 + 4)));
    *((undefined4 *)GEN_TOP((param_2 + 8))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
    *((undefined4 *)GEN_TOP((param_1 + 4))) = uVar1;
    *((undefined4 *)GEN_TOP((param_1 + 8))) = uVar2;
  }
  uVar3 = (*param_4)(param_3,param_2);
  if ((char)uVar3 != '\0') {
    uVar1 = *((undefined4 *)GEN_TOP((param_3 + 4)));
    uVar2 = *((undefined4 *)GEN_TOP((param_3 + 8)));
    *((undefined4 *)GEN_TOP((param_3 + 4))) = *((undefined4 *)GEN_TOP((param_2 + 4)));
    *((undefined4 *)GEN_TOP((param_3 + 8))) = *((undefined4 *)GEN_TOP((param_2 + 8)));
    *((undefined4 *)GEN_TOP((param_2 + 4))) = uVar1;
    *((undefined4 *)GEN_TOP((param_2 + 8))) = uVar2;
  }
  uVar3 = (*param_4)(param_2,param_1);
  if ((char)uVar3 != '\0') {
    uVar3 = *((uint *)GEN_TOP((param_2 + 4)));
    uVar1 = *((undefined4 *)GEN_TOP((param_2 + 8)));
    *((undefined4 *)GEN_TOP((param_2 + 4))) = *((undefined4 *)GEN_TOP((param_1 + 4)));
    *((undefined4 *)GEN_TOP((param_2 + 8))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
    *((uint *)GEN_TOP((param_1 + 4))) = uVar3;
    *((undefined4 *)GEN_TOP((param_1 + 8))) = uVar1;
  }
  return uVar3;
}

/* ref: FUN_00951e10 */
GEN_OWN GEN_FRAME uint F_00951e10(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(code * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x951e10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(code * param_5 = (code *)(uintptr_t)gen_a4;)
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_2;
  while( true ) {
    iVar3 = iVar4 * 2 + 2;
    if (param_3 <= iVar3) break;
    iVar1 = param_1 + iVar3 * 0xc;
    uVar2 = (*param_5)(iVar1,iVar1 - 0xc);
    if ((char)uVar2 != '\0') {
      iVar3 = iVar4 * 2 + 1;
    }
    iVar1 = param_1 + iVar3 * 0xc;
    iVar4 = param_1 + iVar4 * 0xc;
    *((undefined4 *)GEN_TOP((iVar4 + 4))) = *((undefined4 *)GEN_TOP((iVar1 + 4)));
    *((undefined4 *)GEN_TOP((iVar4 + 8))) = *((undefined4 *)GEN_TOP((iVar1 + 8)));
    iVar4 = iVar3;
  }
  if (iVar3 == param_3) {
    iVar4 = param_1 + iVar4 * 0xc;
    *((undefined4 *)GEN_TOP((iVar4 + 4))) = *((undefined4 *)GEN_TOP((param_1 - 8 + param_3 * 0xc)));
    *((undefined4 *)GEN_TOP((iVar4 + 8))) = *((undefined4 *)GEN_TOP((param_1 + param_3 * 0xc - 4)));
    iVar4 = param_3 - 1;
  }
  uVar2 = F_00942ba0(param_1,iVar4,param_2,param_4,param_5);
  return uVar2;
}

/* ref: FUN_00951eb0 */
GEN_OWN GEN_FRAME unsigned int F_00951eb0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x951eb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != param_2) {
    iVar1 = param_3;
    iVar2 = param_2;
    do {
      iVar3 = iVar2 - 0xc;
      *((undefined4 *)GEN_TOP((iVar1 - 8))) = *((undefined4 *)GEN_TOP(((param_2 - param_3) - 8 + iVar1)));
      *((undefined4 *)GEN_TOP((iVar1 - 4))) = *((undefined4 *)GEN_TOP((iVar2 - 4)));
      iVar1 = iVar1 - 0xc;
      iVar2 = iVar3;
    } while (iVar3 != param_1);
  }
  return 0;
}

/* ref: FUN_00951ef0 */
GEN_OWN GEN_FRAME uint F_00951ef0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(code * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x951ef0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(code * param_4 = (code *)(uintptr_t)gen_a3;)
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  
  uVar6 = (*param_4)(param_2,param_1);
  if ((char)uVar6 != '\0') {
    uVar2 = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
    uVar3 = *((undefined4 *)GEN_TOP((param_2 + 4)));
    uVar4 = *((undefined4 *)GEN_TOP((param_2 + 8)));
    uVar5 = *((undefined4 *)GEN_TOP((param_2 + 0xc)));
    uVar1 = *((undefined1 *)GEN_TOP((param_2 + 0x14)));
    *((undefined4 *)GEN_TOP((param_2 + 4))) = *((undefined4 *)GEN_TOP((param_1 + 4)));
    *((undefined4 *)GEN_TOP((param_2 + 8))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
    *((undefined4 *)GEN_TOP((param_2 + 0xc))) = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
    *((undefined4 *)GEN_TOP((param_2 + 0x10))) = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
    *((undefined1 *)GEN_TOP((param_2 + 0x14))) = *((undefined1 *)GEN_TOP((param_1 + 0x14)));
    *((undefined4 *)GEN_TOP((param_1 + 4))) = uVar3;
    *((undefined4 *)GEN_TOP((param_1 + 8))) = uVar4;
    *((undefined4 *)GEN_TOP((param_1 + 0xc))) = uVar5;
    *((undefined4 *)GEN_TOP((param_1 + 0x10))) = uVar2;
    *((undefined1 *)GEN_TOP((param_1 + 0x14))) = uVar1;
  }
  uVar6 = (*param_4)(param_3,param_2);
  if ((char)uVar6 != '\0') {
    uVar2 = *((undefined4 *)GEN_TOP((param_3 + 0xc)));
    uVar3 = *((undefined4 *)GEN_TOP((param_3 + 4)));
    uVar4 = *((undefined4 *)GEN_TOP((param_3 + 8)));
    uVar5 = *((undefined4 *)GEN_TOP((param_3 + 0x10)));
    uVar1 = *((undefined1 *)GEN_TOP((param_3 + 0x14)));
    *((undefined4 *)GEN_TOP((param_3 + 4))) = *((undefined4 *)GEN_TOP((param_2 + 4)));
    *((undefined4 *)GEN_TOP((param_3 + 8))) = *((undefined4 *)GEN_TOP((param_2 + 8)));
    *((undefined4 *)GEN_TOP((param_3 + 0xc))) = *((undefined4 *)GEN_TOP((param_2 + 0xc)));
    *((undefined4 *)GEN_TOP((param_3 + 0x10))) = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
    *((undefined1 *)GEN_TOP((param_3 + 0x14))) = *((undefined1 *)GEN_TOP((param_2 + 0x14)));
    *((undefined4 *)GEN_TOP((param_2 + 4))) = uVar3;
    *((undefined4 *)GEN_TOP((param_2 + 8))) = uVar4;
    *((undefined4 *)GEN_TOP((param_2 + 0xc))) = uVar2;
    *((undefined4 *)GEN_TOP((param_2 + 0x10))) = uVar5;
    *((undefined1 *)GEN_TOP((param_2 + 0x14))) = uVar1;
  }
  uVar6 = (*param_4)(param_2,param_1);
  if ((char)uVar6 != '\0') {
    uVar6 = *((uint *)GEN_TOP((param_2 + 0x10)));
    uVar2 = *((undefined4 *)GEN_TOP((param_2 + 4)));
    uVar3 = *((undefined4 *)GEN_TOP((param_2 + 8)));
    uVar4 = *((undefined4 *)GEN_TOP((param_2 + 0xc)));
    uVar1 = *((undefined1 *)GEN_TOP((param_2 + 0x14)));
    *((undefined4 *)GEN_TOP((param_2 + 4))) = *((undefined4 *)GEN_TOP((param_1 + 4)));
    *((undefined4 *)GEN_TOP((param_2 + 8))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
    *((undefined4 *)GEN_TOP((param_2 + 0xc))) = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
    *((undefined4 *)GEN_TOP((param_2 + 0x10))) = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
    *((undefined1 *)GEN_TOP((param_2 + 0x14))) = *((undefined1 *)GEN_TOP((param_1 + 0x14)));
    *((undefined4 *)GEN_TOP((param_1 + 4))) = uVar2;
    *((undefined4 *)GEN_TOP((param_1 + 8))) = uVar3;
    *((undefined4 *)GEN_TOP((param_1 + 0xc))) = uVar4;
    *((uint *)GEN_TOP((param_1 + 0x10))) = uVar6;
    *((undefined1 *)GEN_TOP((param_1 + 0x14))) = uVar1;
  }
  return uVar6;
}

/* ref: FUN_00952020 */
GEN_OWN GEN_FRAME uint F_00952020(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(code * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x952020u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(code * param_5 = (code *)(uintptr_t)gen_a4;)
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_2;
  while( true ) {
    iVar3 = iVar4 * 2 + 2;
    if (param_3 <= iVar3) break;
    iVar1 = param_1 + iVar3 * 0x18;
    uVar2 = (*param_5)(iVar1,iVar1 - 0x18);
    if ((char)uVar2 != '\0') {
      iVar3 = iVar4 * 2 + 1;
    }
    iVar1 = param_1 + iVar3 * 0x18;
    iVar4 = param_1 + iVar4 * 0x18;
    *((undefined4 *)GEN_TOP((iVar4 + 4))) = *((undefined4 *)GEN_TOP((iVar1 + 4)));
    *((undefined4 *)GEN_TOP((iVar4 + 8))) = *((undefined4 *)GEN_TOP((iVar1 + 8)));
    *((undefined4 *)GEN_TOP((iVar4 + 0xc))) = *((undefined4 *)GEN_TOP((iVar1 + 0xc)));
    *((undefined4 *)GEN_TOP((iVar4 + 0x10))) = *((undefined4 *)GEN_TOP((iVar1 + 0x10)));
    *((undefined1 *)GEN_TOP((iVar4 + 0x14))) = *((undefined1 *)GEN_TOP((iVar1 + 0x14)));
    iVar4 = iVar3;
  }
  if (iVar3 == param_3) {
    iVar3 = param_1 - 0x18 + param_3 * 0x18;
    iVar4 = param_1 + iVar4 * 0x18;
    *((undefined4 *)GEN_TOP((iVar4 + 4))) = *((undefined4 *)GEN_TOP((param_1 - 0x14 + param_3 * 0x18)));
    *((undefined4 *)GEN_TOP((iVar4 + 8))) = *((undefined4 *)GEN_TOP((iVar3 + 8)));
    *((undefined4 *)GEN_TOP((iVar4 + 0xc))) = *((undefined4 *)GEN_TOP((iVar3 + 0xc)));
    *((undefined4 *)GEN_TOP((iVar4 + 0x10))) = *((undefined4 *)GEN_TOP((iVar3 + 0x10)));
    *((undefined1 *)GEN_TOP((iVar4 + 0x14))) = *((undefined1 *)GEN_TOP((iVar3 + 0x14)));
    iVar4 = param_3 - 1;
  }
  uVar2 = F_00942c60(param_1,iVar4,param_2,param_4,param_5);
  return uVar2;
}

/* ref: FUN_009520e0 */
GEN_OWN GEN_FRAME uint F_009520e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9520e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00942d00(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_00952100 */
GEN_OWN GEN_FRAME uint F_00952100(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(code * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x952100u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(code * param_4 = (code *)(uintptr_t)gen_a3;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar4 = (*param_4)(param_2,param_1);
  if ((char)uVar4 != '\0') {
    uVar1 = *((undefined4 *)GEN_TOP((param_2 + 4)));
    uVar2 = *((undefined4 *)GEN_TOP((param_2 + 8)));
    uVar3 = *((undefined4 *)GEN_TOP((param_2 + 0xc)));
    *((undefined4 *)GEN_TOP((param_2 + 4))) = *((undefined4 *)GEN_TOP((param_1 + 4)));
    *((undefined4 *)GEN_TOP((param_2 + 8))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
    *((undefined4 *)GEN_TOP((param_2 + 0xc))) = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
    *((undefined4 *)GEN_TOP((param_1 + 4))) = uVar1;
    *((undefined4 *)GEN_TOP((param_1 + 8))) = uVar2;
    *((undefined4 *)GEN_TOP((param_1 + 0xc))) = uVar3;
  }
  uVar4 = (*param_4)(param_3,param_2);
  if ((char)uVar4 != '\0') {
    uVar1 = *((undefined4 *)GEN_TOP((param_3 + 0xc)));
    uVar2 = *((undefined4 *)GEN_TOP((param_3 + 4)));
    uVar3 = *((undefined4 *)GEN_TOP((param_3 + 8)));
    *((undefined4 *)GEN_TOP((param_3 + 4))) = *((undefined4 *)GEN_TOP((param_2 + 4)));
    *((undefined4 *)GEN_TOP((param_3 + 8))) = *((undefined4 *)GEN_TOP((param_2 + 8)));
    *((undefined4 *)GEN_TOP((param_3 + 0xc))) = *((undefined4 *)GEN_TOP((param_2 + 0xc)));
    *((undefined4 *)GEN_TOP((param_2 + 4))) = uVar2;
    *((undefined4 *)GEN_TOP((param_2 + 8))) = uVar3;
    *((undefined4 *)GEN_TOP((param_2 + 0xc))) = uVar1;
  }
  uVar4 = (*param_4)(param_2,param_1);
  if ((char)uVar4 != '\0') {
    uVar4 = *((uint *)GEN_TOP((param_2 + 4)));
    uVar1 = *((undefined4 *)GEN_TOP((param_2 + 8)));
    uVar2 = *((undefined4 *)GEN_TOP((param_2 + 0xc)));
    *((undefined4 *)GEN_TOP((param_2 + 4))) = *((undefined4 *)GEN_TOP((param_1 + 4)));
    *((undefined4 *)GEN_TOP((param_2 + 8))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
    *((undefined4 *)GEN_TOP((param_2 + 0xc))) = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
    *((uint *)GEN_TOP((param_1 + 4))) = uVar4;
    *((undefined4 *)GEN_TOP((param_1 + 8))) = uVar1;
    *((undefined4 *)GEN_TOP((param_1 + 0xc))) = uVar2;
  }
  return uVar4;
}

/* ref: FUN_009521b0 */
GEN_OWN GEN_FRAME uint F_009521b0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(code * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x9521b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(code * param_5 = (code *)(uintptr_t)gen_a4;)
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_2;
  while( true ) {
    iVar3 = iVar4 * 2 + 2;
    if (param_3 <= iVar3) break;
    iVar1 = iVar3 * 0x10 + param_1;
    uVar2 = (*param_5)(iVar1,iVar1 - 0x10);
    if ((char)uVar2 != '\0') {
      iVar3 = iVar4 * 2 + 1;
    }
    iVar4 = param_1 + iVar4 * 0x10;
    *((undefined4 *)GEN_TOP((iVar4 + 4))) = *((undefined4 *)GEN_TOP((param_1 + 4 + iVar3 * 0x10)));
    *((undefined4 *)GEN_TOP((iVar4 + 8))) = *((undefined4 *)GEN_TOP((param_1 + 8 + iVar3 * 0x10)));
    *((undefined4 *)GEN_TOP((iVar4 + 0xc))) = *((undefined4 *)GEN_TOP((param_1 + 0xc + iVar3 * 0x10)));
    iVar4 = iVar3;
  }
  if (iVar3 == param_3) {
    iVar3 = param_1 - 0x10 + param_3 * 0x10;
    iVar4 = param_1 + iVar4 * 0x10;
    *((undefined4 *)GEN_TOP((iVar4 + 4))) = *((undefined4 *)GEN_TOP((param_1 - 0xc + param_3 * 0x10)));
    *((undefined4 *)GEN_TOP((iVar4 + 8))) = *((undefined4 *)GEN_TOP((iVar3 + 8)));
    *((undefined4 *)GEN_TOP((iVar4 + 0xc))) = *((undefined4 *)GEN_TOP((iVar3 + 0xc)));
    iVar4 = param_3 - 1;
  }
  uVar2 = F_00942d50(param_1,iVar4,param_2,param_4,param_5);
  return uVar2;
}

/* ref: FUN_00952260 */
GEN_OWN GEN_FRAME unsigned int F_00952260(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x952260u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  
  if (param_1 != param_2) {
    iVar2 = param_3;
    puVar3 = param_2 + 3;
    do {
      *((undefined4 *)GEN_TOP((iVar2 - 0xc))) = *((undefined4 *)GEN_TOP(((int)param_2 + iVar2 + (-0xc - param_3))));
      *((undefined4 *)GEN_TOP((iVar2 - 8))) = puVar3[-5];
      *((undefined4 *)GEN_TOP((iVar2 - 4))) = puVar3[-4];
      puVar1 = puVar3 - 7;
      iVar2 = iVar2 - 0x10;
      puVar3 = puVar3 - 4;
    } while (puVar1 != param_1);
  }
  return 0;
}

/* ref: FUN_009522b0 */
GEN_OWN GEN_FRAME uint F_009522b0(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1), GEN_P(uint * param_3, unsigned int gen_a2), GEN_P(code * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x9522b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(code * param_4 = (code *)(uintptr_t)gen_a3;)
  uint uVar1;
  
  uVar1 = (*param_4)(*param_2,*param_1);
  if ((char)uVar1 != '\0') {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  uVar1 = (*param_4)(*param_3,*param_2);
  if ((char)uVar1 != '\0') {
    uVar1 = *param_3;
    *param_3 = *param_2;
    *param_2 = uVar1;
  }
  uVar1 = (*param_4)(*param_2,*param_1);
  if ((char)uVar1 != '\0') {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00952310 */
GEN_OWN GEN_FRAME uint F_00952310(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1), GEN_P(uint * param_3, unsigned int gen_a2), GEN_P(code * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x952310u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(code * param_4 = (code *)(uintptr_t)gen_a3;)
  uint uVar1;
  
  uVar1 = (*param_4)(*param_2,*param_1);
  if ((char)uVar1 != '\0') {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  uVar1 = (*param_4)(*param_3,*param_2);
  if ((char)uVar1 != '\0') {
    uVar1 = *param_3;
    *param_3 = *param_2;
    *param_2 = uVar1;
  }
  uVar1 = (*param_4)(*param_2,*param_1);
  if ((char)uVar1 != '\0') {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00952370 */
GEN_OWN GEN_FRAME uint F_00952370(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1), GEN_P(uint * param_3, unsigned int gen_a2), GEN_P(code * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x952370u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(code * param_4 = (code *)(uintptr_t)gen_a3;)
  uint uVar1;
  
  uVar1 = (*param_4)(*param_2,*param_1);
  if ((char)uVar1 != '\0') {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  uVar1 = (*param_4)(*param_3,*param_2);
  if ((char)uVar1 != '\0') {
    uVar1 = *param_3;
    *param_3 = *param_2;
    *param_2 = uVar1;
  }
  uVar1 = (*param_4)(*param_2,*param_1);
  if ((char)uVar1 != '\0') {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  return uVar1;
}

/* ref: FUN_009523d0 */
GEN_OWN GEN_FRAME uint F_009523d0(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1), GEN_P(uint * param_3, unsigned int gen_a2), GEN_P(code * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x9523d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(code * param_4 = (code *)(uintptr_t)gen_a3;)
  uint uVar1;
  
  uVar1 = (*param_4)(*param_2,*param_1);
  if ((char)uVar1 != '\0') {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  uVar1 = (*param_4)(*param_3,*param_2);
  if ((char)uVar1 != '\0') {
    uVar1 = *param_3;
    *param_3 = *param_2;
    *param_2 = uVar1;
  }
  uVar1 = (*param_4)(*param_2,*param_1);
  if ((char)uVar1 != '\0') {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00952430 */
GEN_OWN GEN_FRAME uint F_00952430(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(code * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x952430u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(code * param_4 = (code *)(uintptr_t)gen_a3;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  
  uVar7 = (*param_4)(param_2,param_1);
  if ((char)uVar7 != '\0') {
    uVar1 = param_2[3];
    uVar2 = *param_2;
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[4];
    uVar6 = param_2[5];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    param_2[3] = param_1[3];
    param_2[4] = param_1[4];
    param_2[5] = param_1[5];
    *param_1 = uVar2;
    param_1[1] = uVar3;
    param_1[2] = uVar4;
    param_1[3] = uVar1;
    param_1[4] = uVar5;
    param_1[5] = uVar6;
  }
  uVar7 = (*param_4)(param_3,param_2);
  if ((char)uVar7 != '\0') {
    uVar1 = param_3[2];
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[3];
    uVar5 = param_3[4];
    uVar6 = param_3[5];
    *param_3 = *param_2;
    param_3[1] = param_2[1];
    param_3[2] = param_2[2];
    param_3[3] = param_2[3];
    param_3[4] = param_2[4];
    param_3[5] = param_2[5];
    *param_2 = uVar2;
    param_2[1] = uVar3;
    param_2[2] = uVar1;
    param_2[3] = uVar4;
    param_2[4] = uVar5;
    param_2[5] = uVar6;
  }
  uVar7 = (*param_4)(param_2,param_1);
  if ((char)uVar7 != '\0') {
    uVar1 = param_2[3];
    uVar2 = *param_2;
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[4];
    uVar7 = param_2[5];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    param_2[3] = param_1[3];
    param_2[4] = param_1[4];
    param_2[5] = param_1[5];
    *param_1 = uVar2;
    param_1[1] = uVar3;
    param_1[2] = uVar4;
    param_1[3] = uVar1;
    param_1[4] = uVar5;
    param_1[5] = uVar7;
  }
  return uVar7;
}

/* ref: FUN_00952580 */
GEN_OWN GEN_FRAME uint F_00952580(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1), GEN_P(uint * param_3, unsigned int gen_a2), GEN_P(code * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x952580u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(code * param_4 = (code *)(uintptr_t)gen_a3;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (*param_4)(param_2,param_1);
  if ((char)uVar3 != '\0') {
    uVar3 = *param_2;
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    *param_1 = uVar3;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
  }
  uVar3 = (*param_4)(param_3,param_2);
  if ((char)uVar3 != '\0') {
    uVar3 = param_3[2];
    uVar1 = *param_3;
    uVar2 = param_3[1];
    *param_3 = *param_2;
    param_3[1] = param_2[1];
    param_3[2] = param_2[2];
    *param_2 = uVar1;
    param_2[1] = uVar2;
    param_2[2] = uVar3;
  }
  uVar3 = (*param_4)(param_2,param_1);
  if ((char)uVar3 != '\0') {
    uVar3 = *param_2;
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    *param_1 = uVar3;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
  }
  return uVar3;
}

/* ref: FUN_00952630 */
GEN_OWN GEN_FRAME unsigned int F_00952630(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x952630u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_3;
  for (iVar2 = param_2; param_1 != iVar2; iVar2 = iVar2 - 0xc) {
    puVar1[-3] = *((undefined4 *)GEN_TOP((iVar2 - 0xc)));
    puVar1[-2] = *((undefined4 *)GEN_TOP((iVar2 - 8)));
    puVar1[-1] = *((undefined4 *)GEN_TOP((iVar2 - 4)));
    puVar1 = puVar1 - 3;
  }
  return 0;
}

/* ref: FUN_00952660 */
GEN_OWN GEN_FRAME uint F_00952660(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1), GEN_P(uint * param_3, unsigned int gen_a2), GEN_P(code * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x952660u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(code * param_4 = (code *)(uintptr_t)gen_a3;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = (*param_4)(param_2,param_1);
  if ((char)uVar4 != '\0') {
    uVar4 = param_2[3];
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    param_2[3] = param_1[3];
    *param_1 = uVar1;
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    param_1[3] = uVar4;
  }
  uVar4 = (*param_4)(param_3,param_2);
  if ((char)uVar4 != '\0') {
    uVar4 = param_3[2];
    uVar1 = *param_3;
    uVar2 = param_3[1];
    uVar3 = param_3[3];
    *param_3 = *param_2;
    param_3[1] = param_2[1];
    param_3[2] = param_2[2];
    param_3[3] = param_2[3];
    *param_2 = uVar1;
    param_2[1] = uVar2;
    param_2[2] = uVar4;
    param_2[3] = uVar3;
  }
  uVar4 = (*param_4)(param_2,param_1);
  if ((char)uVar4 != '\0') {
    uVar1 = param_2[3];
    uVar2 = param_2[2];
    uVar4 = *param_2;
    uVar3 = param_2[1];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    param_2[3] = param_1[3];
    *param_1 = uVar4;
    param_1[1] = uVar3;
    param_1[2] = uVar2;
    param_1[3] = uVar1;
  }
  return uVar4;
}

/* ref: FUN_00952740 */
GEN_OWN GEN_FRAME unsigned int F_00952740(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x952740u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_3;
  for (iVar2 = param_2; param_1 != iVar2; iVar2 = iVar2 - 0x10) {
    puVar1[-4] = *((undefined4 *)GEN_TOP((iVar2 - 0x10)));
    puVar1[-3] = *((undefined4 *)GEN_TOP((iVar2 - 0xc)));
    puVar1[-2] = *((undefined4 *)GEN_TOP((iVar2 - 8)));
    puVar1[-1] = *((undefined4 *)GEN_TOP((iVar2 - 4)));
    puVar1 = puVar1 - 4;
  }
  return 0;
}

/* ref: FUN_00952780 */
GEN_OWN GEN_FRAME uint F_00952780(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1), GEN_P(uint * param_3, unsigned int gen_a2), GEN_P(code * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x952780u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(code * param_4 = (code *)(uintptr_t)gen_a3;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (*param_4)(param_2,param_1);
  if ((char)uVar3 != '\0') {
    uVar3 = *param_2;
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    *param_1 = uVar3;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
  }
  uVar3 = (*param_4)(param_3,param_2);
  if ((char)uVar3 != '\0') {
    uVar3 = param_3[2];
    uVar1 = *param_3;
    uVar2 = param_3[1];
    *param_3 = *param_2;
    param_3[1] = param_2[1];
    param_3[2] = param_2[2];
    *param_2 = uVar1;
    param_2[1] = uVar2;
    param_2[2] = uVar3;
  }
  uVar3 = (*param_4)(param_2,param_1);
  if ((char)uVar3 != '\0') {
    uVar3 = *param_2;
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    *param_1 = uVar3;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
  }
  return uVar3;
}

/* ref: FUN_00952830 */
GEN_OWN GEN_FRAME unsigned int F_00952830(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x952830u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_3;
  for (iVar2 = param_2; param_1 != iVar2; iVar2 = iVar2 - 0xc) {
    puVar1[-3] = *((undefined4 *)GEN_TOP((iVar2 - 0xc)));
    puVar1[-2] = *((undefined4 *)GEN_TOP((iVar2 - 8)));
    puVar1[-1] = *((undefined4 *)GEN_TOP((iVar2 - 4)));
    puVar1 = puVar1 - 3;
  }
  return 0;
}

/* ref: FUN_00952860 */
GEN_OWN GEN_FRAME uint F_00952860(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1), GEN_P(uint * param_3, unsigned int gen_a2), GEN_P(code * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x952860u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(code * param_4 = (code *)(uintptr_t)gen_a3;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = (*param_4)(param_2,param_1);
  if ((char)uVar4 != '\0') {
    uVar4 = param_2[3];
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    param_2[3] = param_1[3];
    *param_1 = uVar1;
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    param_1[3] = uVar4;
  }
  uVar4 = (*param_4)(param_3,param_2);
  if ((char)uVar4 != '\0') {
    uVar4 = param_3[2];
    uVar1 = *param_3;
    uVar2 = param_3[1];
    uVar3 = param_3[3];
    *param_3 = *param_2;
    param_3[1] = param_2[1];
    param_3[2] = param_2[2];
    param_3[3] = param_2[3];
    *param_2 = uVar1;
    param_2[1] = uVar2;
    param_2[2] = uVar4;
    param_2[3] = uVar3;
  }
  uVar4 = (*param_4)(param_2,param_1);
  if ((char)uVar4 != '\0') {
    uVar1 = param_2[3];
    uVar2 = param_2[2];
    uVar4 = *param_2;
    uVar3 = param_2[1];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    param_2[3] = param_1[3];
    *param_1 = uVar4;
    param_1[1] = uVar3;
    param_1[2] = uVar2;
    param_1[3] = uVar1;
  }
  return uVar4;
}

/* ref: FUN_00952940 */
GEN_OWN GEN_FRAME unsigned int F_00952940(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x952940u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_3;
  for (iVar2 = param_2; param_1 != iVar2; iVar2 = iVar2 - 0x10) {
    puVar1[-4] = *((undefined4 *)GEN_TOP((iVar2 - 0x10)));
    puVar1[-3] = *((undefined4 *)GEN_TOP((iVar2 - 0xc)));
    puVar1[-2] = *((undefined4 *)GEN_TOP((iVar2 - 8)));
    puVar1[-1] = *((undefined4 *)GEN_TOP((iVar2 - 4)));
    puVar1 = puVar1 - 4;
  }
  return 0;
}

/* ref: FUN_00952980 */
GEN_OWN GEN_FRAME uint F_00952980(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(code * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x952980u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(code * param_4 = (code *)(uintptr_t)gen_a3;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  
  uVar6 = (*param_4)(param_2,param_1);
  if ((char)uVar6 != '\0') {
    uVar1 = param_2[3];
    uVar2 = *param_2;
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[4];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    param_2[3] = param_1[3];
    param_2[4] = param_1[4];
    *param_1 = uVar2;
    param_1[1] = uVar3;
    param_1[2] = uVar4;
    param_1[3] = uVar1;
    param_1[4] = uVar5;
  }
  uVar6 = (*param_4)(param_3,param_2);
  if ((char)uVar6 != '\0') {
    uVar1 = param_3[2];
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[3];
    uVar5 = param_3[4];
    *param_3 = *param_2;
    param_3[1] = param_2[1];
    param_3[2] = param_2[2];
    param_3[3] = param_2[3];
    param_3[4] = param_2[4];
    *param_2 = uVar2;
    param_2[1] = uVar3;
    param_2[2] = uVar1;
    param_2[3] = uVar4;
    param_2[4] = uVar5;
  }
  uVar6 = (*param_4)(param_2,param_1);
  if ((char)uVar6 != '\0') {
    uVar6 = param_2[3];
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[4];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    param_2[3] = param_1[3];
    param_2[4] = param_1[4];
    *param_1 = uVar1;
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    param_1[3] = uVar6;
    param_1[4] = uVar4;
  }
  return uVar6;
}

/* ref: FUN_00952a90 */
GEN_OWN GEN_FRAME unsigned int F_00952a90(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x952a90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_3;
  for (iVar2 = param_2; param_1 != iVar2; iVar2 = iVar2 - 0x14) {
    puVar1[-5] = *((undefined4 *)GEN_TOP((iVar2 - 0x14)));
    puVar1[-4] = *((undefined4 *)GEN_TOP((iVar2 - 0x10)));
    puVar1[-3] = *((undefined4 *)GEN_TOP((iVar2 - 0xc)));
    puVar1[-2] = *((undefined4 *)GEN_TOP((iVar2 - 8)));
    puVar1[-1] = *((undefined4 *)GEN_TOP((iVar2 - 4)));
    puVar1 = puVar1 - 5;
  }
  return 0;
}

/* ref: FUN_00952ad0 */
GEN_OWN GEN_FRAME uint F_00952ad0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x952ad0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  undefined4 uVar1;
  uint uVar2;
  
  (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP((param_2 - 0x10)));
  uVar1 = *((undefined4 *)GEN_TOP((param_2 - 8)));
  (*(undefined4 *)(gen_frame + 0x0)) = *((undefined4 *)GEN_TOP((param_2 - 0x14)));
  (*(undefined4 *)(gen_frame + 0xc)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x8)) = *((undefined4 *)GEN_TOP((param_2 - 0xc)));
  (*(undefined4 *)(gen_frame + 0x10)) = *((undefined4 *)GEN_TOP((param_2 - 4)));
  *((undefined4 *)GEN_TOP((param_2 - 0x14))) = *param_1;
  *((undefined4 *)GEN_TOP((param_2 - 0x10))) = param_1[1];
  *((undefined4 *)GEN_TOP((param_2 - 0xc))) = param_1[2];
  *((undefined4 *)GEN_TOP((param_2 - 8))) = param_1[3];
  *((undefined4 *)GEN_TOP((param_2 - 4))) = param_1[4];
  uVar2 = F_009411c0(param_1,0,((param_2 - (int)param_1) - 0x14) / 0x14,&(*(undefined4 *)(gen_frame + 0x0)),param_3);
  return uVar2;
}

/* ref: FUN_00952b50 */
GEN_OWN GEN_FRAME uint F_00952b50(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x952b50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  undefined4 uVar1;
  uint uVar2;
  
  (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP((param_2 - 0x10)));
  uVar1 = *((undefined4 *)GEN_TOP((param_2 - 8)));
  (*(undefined4 *)(gen_frame + 0x0)) = *((undefined4 *)GEN_TOP((param_2 - 0x14)));
  (*(undefined4 *)(gen_frame + 0xc)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x8)) = *((undefined4 *)GEN_TOP((param_2 - 0xc)));
  (*(undefined4 *)(gen_frame + 0x10)) = *((undefined4 *)GEN_TOP((param_2 - 4)));
  *((undefined4 *)GEN_TOP((param_2 - 0x14))) = *param_1;
  *((undefined4 *)GEN_TOP((param_2 - 0x10))) = param_1[1];
  *((undefined4 *)GEN_TOP((param_2 - 0xc))) = param_1[2];
  *((undefined4 *)GEN_TOP((param_2 - 8))) = param_1[3];
  *((undefined4 *)GEN_TOP((param_2 - 4))) = param_1[4];
  uVar2 = F_00941350(param_1,0,((param_2 - (int)param_1) - 0x14) / 0x14,&(*(undefined4 *)(gen_frame + 0x0)),param_3);
  return uVar2;
}

/* ref: FUN_00952bd0 */
GEN_OWN GEN_FRAME uint F_00952bd0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x952bd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP((param_2 - 4)));
  (*(undefined4 *)(gen_frame + 0x0)) = *((undefined4 *)GEN_TOP((param_2 - 8)));
  *((undefined4 *)GEN_TOP((param_2 - 8))) = *param_1;
  *((undefined4 *)GEN_TOP((param_2 - 4))) = param_1[1];
  uVar1 = F_009414b0(param_1,0,(param_2 - (int)param_1) - 8 >> 3,&(*(undefined4 *)(gen_frame + 0x0)),param_3);
  return uVar1;
}

/* ref: FUN_00952c20 */
GEN_OWN_GS GEN_FRAME uint F_00952c20(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x952c20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_GS(0x74, 12, 4);
  ulonglong uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x70));
  F_0042cbc0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((undefined *)GEN_TOP((param_2 - 0x6c))));
  (*(undefined4 *)(gen_frame + 0x54)) = *((undefined4 *)GEN_TOP((param_2 - 0x18)));
  (*(undefined4 *)(gen_frame + 0x58)) = *((undefined4 *)GEN_TOP((param_2 - 0x14)));
  (*(undefined4 *)(gen_frame + 0x5c)) = *((undefined4 *)GEN_TOP((param_2 - 0x10)));
  (*(undefined4 *)(gen_frame + 0x60)) = *((undefined4 *)GEN_TOP((param_2 - 0xc)));
  (*(undefined4 *)(gen_frame + 0x64)) = *((undefined4 *)GEN_TOP((param_2 - 8)));
  (*(undefined4 *)(gen_frame + 0x68)) = *((undefined4 *)GEN_TOP((param_2 - 4)));
  F_0042ccf0(((undefined *)GEN_TOP((param_2 - 0x6c))) GEN_EDX_ARG,param_1);
  *((undefined4 *)GEN_TOP((param_2 - 0x18))) = *((undefined4 *)GEN_TOP((param_1 + 0x54)));
  *((undefined4 *)GEN_TOP((param_2 - 0x14))) = *((undefined4 *)GEN_TOP((param_1 + 0x58)));
  *((undefined4 *)GEN_TOP((param_2 - 0x10))) = *((undefined4 *)GEN_TOP((param_1 + 0x5c)));
  *((undefined4 *)GEN_TOP((param_2 - 0xc))) = *((undefined4 *)GEN_TOP((param_1 + 0x60)));
  *((undefined4 *)GEN_TOP((param_2 - 8))) = *((undefined4 *)GEN_TOP((param_1 + 100)));
  *((undefined4 *)GEN_TOP((param_2 - 4))) = *((undefined4 *)GEN_TOP((param_1 + 0x68)));
  F_00941660(param_1,0,((param_2 - param_1) - 0x6c) / 0x6c,((undefined1 *)(gen_frame + 0x0)),param_3);
  uVar1 = F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00952ce0 */
GEN_OWN_GS GEN_FRAME uint F_00952ce0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x952ce0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_GS(0x70, 0, 4);
  ulonglong uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c));
  F_0042cbc0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((undefined *)GEN_TOP((param_2 - 0x68))));
  (*(undefined4 *)(gen_frame + 0x54)) = *((undefined4 *)GEN_TOP((param_2 - 0x14)));
  (*(undefined4 *)(gen_frame + 0x58)) = *((undefined4 *)GEN_TOP((param_2 - 0x10)));
  (*(undefined4 *)(gen_frame + 0x60)) = *((undefined4 *)GEN_TOP((param_2 - 8)));
  (*(undefined4 *)(gen_frame + 0x5c)) = *((undefined4 *)GEN_TOP((param_2 - 0xc)));
  (*(undefined1 *)(gen_frame + 0x64)) = *((undefined1 *)GEN_TOP((param_2 - 4)));
  F_0042ccf0(((undefined *)GEN_TOP((param_2 - 0x68))) GEN_EDX_ARG,param_1);
  *((undefined4 *)GEN_TOP((param_2 - 0x14))) = *((undefined4 *)GEN_TOP((param_1 + 0x54)));
  *((undefined4 *)GEN_TOP((param_2 - 0x10))) = *((undefined4 *)GEN_TOP((param_1 + 0x58)));
  *((undefined4 *)GEN_TOP((param_2 - 0xc))) = *((undefined4 *)GEN_TOP((param_1 + 0x5c)));
  *((undefined4 *)GEN_TOP((param_2 - 8))) = *((undefined4 *)GEN_TOP((param_1 + 0x60)));
  *((undefined1 *)GEN_TOP((param_2 - 4))) = *((undefined1 *)GEN_TOP((param_1 + 100)));
  F_00941810(param_1,0,((param_2 - param_1) - 0x68) / 0x68,((undefined1 *)(gen_frame + 0x0)),param_3);
  uVar1 = F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00952da0 */
GEN_OWN GEN_FRAME uint F_00952da0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x952da0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *((undefined4 *)GEN_TOP(((*(int *)&gen_args[1]) - 4)));
  *((undefined4 *)GEN_TOP(((*(int *)&gen_args[1]) - 4))) = *(*(undefined4 * PTR32 *)&gen_args[0]);
  iVar2 = (*(int *)&gen_args[1]) - (int)(*(undefined4 * PTR32 *)&gen_args[0]);
  (*(int *)&gen_args[1]) = uVar1;
  uVar3 = F_00941920((*(undefined4 * PTR32 *)&gen_args[0]),0,iVar2 - 4 >> 2,&(*(int *)&gen_args[1]),(*(undefined4 *)&gen_args[2]));
  return uVar3;
}

/* ref: FUN_00952de0 */
GEN_OWN GEN_FRAME uint F_00952de0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x952de0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP((param_2 - 4)));
  (*(undefined4 *)(gen_frame + 0x0)) = *((undefined4 *)GEN_TOP((param_2 - 8)));
  *((undefined4 *)GEN_TOP((param_2 - 8))) = *param_1;
  *((undefined4 *)GEN_TOP((param_2 - 4))) = param_1[1];
  uVar1 = F_00941a40(param_1,0,(param_2 - (int)param_1) - 8 >> 3,&(*(undefined4 *)(gen_frame + 0x0)),param_3);
  return uVar1;
}

/* ref: FUN_00952e30 */
GEN_OWN GEN_FRAME uint F_00952e30(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x952e30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP((param_2 - 8)));
  (*(undefined4 *)(gen_frame + 0x0)) = *((undefined4 *)GEN_TOP((param_2 - 0xc)));
  (*(undefined4 *)(gen_frame + 0x8)) = *((undefined4 *)GEN_TOP((param_2 - 4)));
  *((undefined4 *)GEN_TOP((param_2 - 0xc))) = *param_1;
  *((undefined4 *)GEN_TOP((param_2 - 8))) = param_1[1];
  *((undefined4 *)GEN_TOP((param_2 - 4))) = param_1[2];
  uVar1 = F_00941b40(param_1,0,((param_2 - (int)param_1) - 0xc) / 0xc,&(*(undefined4 *)(gen_frame + 0x0)),param_3);
  return uVar1;
}

/* ref: FUN_00952e90 */
GEN_OWN GEN_FRAME uint F_00952e90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x952e90u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *((undefined4 *)GEN_TOP(((*(int *)&gen_args[1]) - 4)));
  *((undefined4 *)GEN_TOP(((*(int *)&gen_args[1]) - 4))) = *(*(undefined4 * PTR32 *)&gen_args[0]);
  iVar2 = (*(int *)&gen_args[1]) - (int)(*(undefined4 * PTR32 *)&gen_args[0]);
  (*(int *)&gen_args[1]) = uVar1;
  uVar3 = F_00941d30((*(undefined4 * PTR32 *)&gen_args[0]),0,iVar2 - 4 >> 2,&(*(int *)&gen_args[1]),(*(undefined4 *)&gen_args[2]));
  return uVar3;
}

/* ref: FUN_00952ed0 */
GEN_OWN GEN_FRAME uint F_00952ed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x952ed0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *((undefined4 *)GEN_TOP(((*(int *)&gen_args[1]) - 4)));
  *((undefined4 *)GEN_TOP(((*(int *)&gen_args[1]) - 4))) = *(*(undefined4 * PTR32 *)&gen_args[0]);
  iVar2 = (*(int *)&gen_args[1]) - (int)(*(undefined4 * PTR32 *)&gen_args[0]);
  (*(int *)&gen_args[1]) = uVar1;
  uVar3 = F_00941e40((*(undefined4 * PTR32 *)&gen_args[0]),0,iVar2 - 4 >> 2,&(*(int *)&gen_args[1]),(*(undefined4 *)&gen_args[2]));
  return uVar3;
}

/* ref: FUN_00952f10 */
GEN_OWN GEN_FRAME uint F_00952f10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x952f10u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *((undefined4 *)GEN_TOP(((*(int *)&gen_args[1]) - 4)));
  *((undefined4 *)GEN_TOP(((*(int *)&gen_args[1]) - 4))) = *(*(undefined4 * PTR32 *)&gen_args[0]);
  iVar2 = (*(int *)&gen_args[1]) - (int)(*(undefined4 * PTR32 *)&gen_args[0]);
  (*(int *)&gen_args[1]) = uVar1;
  uVar3 = F_00941f50((*(undefined4 * PTR32 *)&gen_args[0]),0,iVar2 - 4 >> 2,&(*(int *)&gen_args[1]),(*(undefined4 *)&gen_args[2]));
  return uVar3;
}

/* ref: FUN_00952f50 */
GEN_OWN GEN_FRAME uint F_00952f50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x952f50u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *((undefined4 *)GEN_TOP(((*(int *)&gen_args[1]) - 4)));
  *((undefined4 *)GEN_TOP(((*(int *)&gen_args[1]) - 4))) = *(*(undefined4 * PTR32 *)&gen_args[0]);
  iVar2 = (*(int *)&gen_args[1]) - (int)(*(undefined4 * PTR32 *)&gen_args[0]);
  (*(int *)&gen_args[1]) = uVar1;
  uVar3 = F_00942060((*(undefined4 * PTR32 *)&gen_args[0]),0,iVar2 - 4 >> 2,&(*(int *)&gen_args[1]),(*(undefined4 *)&gen_args[2]));
  return uVar3;
}

/* ref: FUN_00952f90 */
GEN_OWN GEN_FRAME uint F_00952f90(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x952f90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  undefined4 uVar1;
  uint uVar2;
  
  (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP((param_2 - 0x14)));
  (*(undefined4 *)(gen_frame + 0xc)) = *((undefined4 *)GEN_TOP((param_2 - 0xc)));
  uVar1 = *((undefined4 *)GEN_TOP((param_2 - 4)));
  (*(undefined4 *)(gen_frame + 0x0)) = *((undefined4 *)GEN_TOP((param_2 - 0x18)));
  (*(undefined4 *)(gen_frame + 0x14)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x8)) = *((undefined4 *)GEN_TOP((param_2 - 0x10)));
  (*(undefined4 *)(gen_frame + 0x10)) = *((undefined4 *)GEN_TOP((param_2 - 8)));
  *((undefined4 *)GEN_TOP((param_2 - 0x18))) = *param_1;
  *((undefined4 *)GEN_TOP((param_2 - 0x14))) = param_1[1];
  *((undefined4 *)GEN_TOP((param_2 - 0x10))) = param_1[2];
  *((undefined4 *)GEN_TOP((param_2 - 0xc))) = param_1[3];
  *((undefined4 *)GEN_TOP((param_2 - 8))) = param_1[4];
  *((undefined4 *)GEN_TOP((param_2 - 4))) = param_1[5];
  uVar2 = F_009421e0(param_1,0,((param_2 - (int)param_1) - 0x18) / 0x18,&(*(undefined4 *)(gen_frame + 0x0)),param_3);
  return uVar2;
}

/* ref: FUN_00953020 */
GEN_OWN GEN_FRAME uint F_00953020(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x953020u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP((param_2 - 8)));
  (*(undefined4 *)(gen_frame + 0x0)) = *((undefined4 *)GEN_TOP((param_2 - 0xc)));
  (*(undefined4 *)(gen_frame + 0x8)) = *((undefined4 *)GEN_TOP((param_2 - 4)));
  *((undefined4 *)GEN_TOP((param_2 - 0xc))) = *param_1;
  *((undefined4 *)GEN_TOP((param_2 - 8))) = param_1[1];
  *((undefined4 *)GEN_TOP((param_2 - 4))) = param_1[2];
  uVar1 = F_00942380(param_1,0,((param_2 - (int)param_1) - 0xc) / 0xc,&(*(undefined4 *)(gen_frame + 0x0)),param_3);
  return uVar1;
}

/* ref: FUN_00953080 */
GEN_OWN GEN_FRAME uint F_00953080(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x953080u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  undefined4 uVar1;
  uint uVar2;
  
  (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP((param_2 - 0xc)));
  uVar1 = *((undefined4 *)GEN_TOP((param_2 - 4)));
  (*(undefined4 *)(gen_frame + 0x0)) = *((undefined4 *)GEN_TOP((param_2 - 0x10)));
  (*(undefined4 *)(gen_frame + 0xc)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x8)) = *((undefined4 *)GEN_TOP((param_2 - 8)));
  *((undefined4 *)GEN_TOP((param_2 - 0x10))) = *param_1;
  *((undefined4 *)GEN_TOP((param_2 - 0xc))) = param_1[1];
  *((undefined4 *)GEN_TOP((param_2 - 8))) = param_1[2];
  *((undefined4 *)GEN_TOP((param_2 - 4))) = param_1[3];
  uVar2 = F_009424d0(param_1,0,(param_2 - (int)param_1) - 0x10 >> 4,&(*(undefined4 *)(gen_frame + 0x0)),param_3);
  return uVar2;
}

/* ref: FUN_009530e0 */
GEN_OWN GEN_FRAME uint F_009530e0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9530e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP((param_2 - 8)));
  (*(undefined4 *)(gen_frame + 0x0)) = *((undefined4 *)GEN_TOP((param_2 - 0xc)));
  (*(undefined4 *)(gen_frame + 0x8)) = *((undefined4 *)GEN_TOP((param_2 - 4)));
  *((undefined4 *)GEN_TOP((param_2 - 0xc))) = *param_1;
  *((undefined4 *)GEN_TOP((param_2 - 8))) = param_1[1];
  *((undefined4 *)GEN_TOP((param_2 - 4))) = param_1[2];
  uVar1 = F_00942640(param_1,0,((param_2 - (int)param_1) - 0xc) / 0xc,&(*(undefined4 *)(gen_frame + 0x0)),param_3);
  return uVar1;
}

/* ref: FUN_00953140 */
GEN_OWN GEN_FRAME uint F_00953140(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x953140u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  undefined4 uVar1;
  uint uVar2;
  
  (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP((param_2 - 0xc)));
  uVar1 = *((undefined4 *)GEN_TOP((param_2 - 4)));
  (*(undefined4 *)(gen_frame + 0x0)) = *((undefined4 *)GEN_TOP((param_2 - 0x10)));
  (*(undefined4 *)(gen_frame + 0xc)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x8)) = *((undefined4 *)GEN_TOP((param_2 - 8)));
  *((undefined4 *)GEN_TOP((param_2 - 0x10))) = *param_1;
  *((undefined4 *)GEN_TOP((param_2 - 0xc))) = param_1[1];
  *((undefined4 *)GEN_TOP((param_2 - 8))) = param_1[2];
  *((undefined4 *)GEN_TOP((param_2 - 4))) = param_1[3];
  uVar2 = F_00942790(param_1,0,(param_2 - (int)param_1) - 0x10 >> 4,&(*(undefined4 *)(gen_frame + 0x0)),param_3);
  return uVar2;
}

/* ref: FUN_009531a0 */
GEN_OWN GEN_FRAME uint F_009531a0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x9531a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  undefined4 uVar1;
  uint uVar2;
  
  (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP((param_2 - 0x10)));
  uVar1 = *((undefined4 *)GEN_TOP((param_2 - 8)));
  (*(undefined4 *)(gen_frame + 0x0)) = *((undefined4 *)GEN_TOP((param_2 - 0x14)));
  (*(undefined4 *)(gen_frame + 0xc)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x8)) = *((undefined4 *)GEN_TOP((param_2 - 0xc)));
  (*(undefined4 *)(gen_frame + 0x10)) = *((undefined4 *)GEN_TOP((param_2 - 4)));
  *((undefined4 *)GEN_TOP((param_2 - 0x14))) = *param_1;
  *((undefined4 *)GEN_TOP((param_2 - 0x10))) = param_1[1];
  *((undefined4 *)GEN_TOP((param_2 - 0xc))) = param_1[2];
  *((undefined4 *)GEN_TOP((param_2 - 8))) = param_1[3];
  *((undefined4 *)GEN_TOP((param_2 - 4))) = param_1[4];
  uVar2 = F_00942920(param_1,0,((param_2 - (int)param_1) - 0x14) / 0x14,&(*(undefined4 *)(gen_frame + 0x0)),param_3);
  return uVar2;
}

/* ref: FUN_00953220 */
GEN_OWN GEN_FRAME uint F_00953220(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x953220u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP((param_3 + 4))) = *((undefined4 *)GEN_TOP((param_1 + 4)));
  *((undefined4 *)GEN_TOP((param_3 + 8))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
  uVar1 = F_00951e10(param_1,0,(param_2 - param_1) / 0xc,param_4,param_5);
  return uVar1;
}

/* ref: FUN_00953260 */
GEN_OWN GEN_FRAME uint F_00953260(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x953260u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP((param_3 + 4))) = *((undefined4 *)GEN_TOP((param_1 + 4)));
  *((undefined4 *)GEN_TOP((param_3 + 8))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
  *((undefined4 *)GEN_TOP((param_3 + 0xc))) = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
  *((undefined4 *)GEN_TOP((param_3 + 0x10))) = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
  *((undefined1 *)GEN_TOP((param_3 + 0x14))) = *((undefined1 *)GEN_TOP((param_1 + 0x14)));
  uVar1 = F_00952020(param_1,0,(param_2 - param_1) / 0x18,param_4,param_5);
  return uVar1;
}

/* ref: FUN_009532c0 */
GEN_OWN GEN_FRAME uint F_009532c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x9532c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP((param_3 + 4))) = *((undefined4 *)GEN_TOP((param_1 + 4)));
  *((undefined4 *)GEN_TOP((param_3 + 8))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
  *((undefined4 *)GEN_TOP((param_3 + 0xc))) = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
  uVar1 = F_009521b0(param_1,0,param_2 - param_1 >> 4,param_4,param_5);
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentConfigBase::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00953300(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x953300u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_008229e0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI2::Agent::AgentConfigCharacter::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00953330(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x953330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[23])REFP(0x10d68cc));
  param_1[3] = (*(undefined * PTR32 (*)[6])REFP(0x10d68ac));
  F_008229e0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI2::Agent::AgentConfigSystem::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00953360(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x953360u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00822fa0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI2::Agent::AgentCutSceneReplay::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00953390(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x953390u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_0082b410(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_009533c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009533c0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9533c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_009533d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009533d0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9533d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP(*in_ecx));
  return (uint)param_2;
}

/* ref: FUN_00953410 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00953410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x953410u, gen_a0, 0u, 0u, 0u);
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
      F_00429760(piVar2,0x14,400);
      piVar2 = piVar1;
    } while (piVar1 != ((int *)GEN_TOP(*(int *)this)));
  }
  uVar3 = F_00429760(*(undefined4 *)this,0x14,400);
  return (uint)uVar3;
}

/* ref: FUN_00953460 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00953460(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x953460u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP(*in_ecx));
  return (uint)param_2;
}

/* ref: FUN_00953470 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00953470(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x953470u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_009534b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009534b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9534b0u, gen_a0, 0u, 0u, 0u);
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
      F_00429760(piVar2,0xc,400);
      piVar2 = piVar1;
    } while (piVar1 != ((int *)GEN_TOP(*(int *)this)));
  }
  uVar3 = F_00429760(*(undefined4 *)this,0xc,400);
  return (uint)uVar3;
}

/* ref: FUN_00953500 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00953500(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x953500u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP(*in_ecx));
  return (uint)param_2;
}

/* ref: FUN_00953510 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00953510(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x953510u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00953550 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00953550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x953550u, gen_a0, 0u, 0u, 0u);
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
      F_00429760(piVar2,0xc,400);
      piVar2 = piVar1;
    } while (piVar1 != ((int *)GEN_TOP(*(int *)this)));
  }
  uVar3 = F_00429760(*(undefined4 *)this,0xc,400);
  return (uint)uVar3;
}

/* ref: FUN_009535a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009535a0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9535a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP(*in_ecx));
  return (uint)param_2;
}

/* ref: FUN_009535f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009535f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9535f0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00953610 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00953610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x953610u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00953630 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00953630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(ushort * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x953630u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(ushort * param_2 = (ushort *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar3[1] + 0x25))) == '\0') {
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
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x25))) == '\0');
  }
  if ((puVar3 != *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)))) && (*(ushort *)(puVar3 + 3) <= *param_2)) {
    *param_1 = puVar3;
    return (uint)param_1;
  }
  *param_1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  return (uint)param_1;
}

/* ref: FUN_009536a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009536a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(ushort * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x9536a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(ushort * param_2 = (ushort *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar3[1] + 0x21))) == '\0') {
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
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x21))) == '\0');
  }
  if ((puVar3 != *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)))) && (*(ushort *)(puVar3 + 3) <= *param_2)) {
    *param_1 = puVar3;
    return (uint)param_1;
  }
  *param_1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  return (uint)param_1;
}

/* ref: FUN_00953710 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00953710(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x953710u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00953730 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00953730(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x953730u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00953740 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00953740(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x953740u, gen_a0, gen_a1, gen_a2, 0u);
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
  F_00910c10(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
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
      goto LAB_0095385a;
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
      piVar4 = ((int *)GEN_TOP(F_00910b70(piVar7)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar3) {
    if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
      uVar5 = F_00910b50(piVar7);
      *((uint *)GEN_TOP((iVar1 + 8))) = uVar5;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar6;
    }
  }
LAB_0095385a: ;
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
            F_00946280(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(piVar4[2]));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar6 + 0x14))) != '\x01') || (*((char *)GEN_TOP((piVar6[2] + 0x14))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar6[2] + 0x14))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar6 + 0x14))) = 1;
                *(undefined1 *)(piVar6 + 5) = 0;
                F_00927810(this GEN_EDX_ARG,piVar6);
                piVar6 = ((int *)GEN_TOP(piVar4[2]));
              }
              *(char *)(piVar6 + 5) = (char)piVar4[5];
              *(undefined1 *)(piVar4 + 5) = 1;
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x14))) = 1;
              F_00946280(this GEN_EDX_ARG,piVar4);
              break;
            }
LAB_00953918: ;
            *(undefined1 *)(piVar6 + 5) = 0;
          }
        }
        else {
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00927810(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(*piVar4));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
            if ((*((char *)GEN_TOP((piVar6[2] + 0x14))) == '\x01') && (*((char *)GEN_TOP((*piVar6 + 0x14))) == '\x01'))
            goto LAB_00953918;
            if (*((char *)GEN_TOP((*piVar6 + 0x14))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x14))) = 1;
              *(undefined1 *)(piVar6 + 5) = 0;
              F_00946280(this GEN_EDX_ARG,piVar6);
              piVar6 = ((int *)GEN_TOP(*piVar4));
            }
            *(char *)(piVar6 + 5) = (char)piVar4[5];
            *(undefined1 *)(piVar4 + 5) = 1;
            *((undefined1 *)GEN_TOP((*piVar6 + 0x14))) = 1;
            F_00927810(this GEN_EDX_ARG,piVar4);
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

/* ref: FUN_009539a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009539a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9539a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_009539c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009539c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9539c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_009539d0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009539d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9539d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
  while (cVar1 == '\0') {
    F_00946340(this GEN_EDX_FWD,piVar2[2]);
    piVar3 = ((int *)GEN_TOP(*piVar2));
    F_00429760(piVar2,0x18,400);
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

/* ref: FUN_00953aa0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00953aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x953aa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_009463f0(this GEN_EDX_FWD);
  uVar1 = F_00429760(*(undefined4 *)this,8,400);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00953ad0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00953ad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x953ad0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00953af0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00953af0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x953af0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00953b20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00953b20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x953b20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00953b40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00953b40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x953b40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00953b50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00953b50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x953b50u, gen_a0, gen_a1, gen_a2, 0u);
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
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x39))) != '\0') {
                    
    F_00c457e7(((char *)REFP(0x10849c4)));
  }
  F_00914400(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  piVar6 = ((int *)GEN_TOP(*piVar3));
  if (*((char *)GEN_TOP(((int)piVar6 + 0x39))) == '\0') {
    piVar7 = piVar6;
    if ((*((char *)GEN_TOP((piVar3[2] + 0x39))) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[2])), (*(int * PTR32 *)&gen_args[1]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[1]);
      *(*(int * PTR32 *)&gen_args[1]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[1]);
      if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(piVar3[2]))) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[1]));
        if (*((char *)GEN_TOP(((int)piVar7 + 0x39))) == '\0') {
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
      iVar1 = (*(int * PTR32 *)&gen_args[1])[0xe];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1]) + 0xe))) = (char)piVar3[0xe];
      *(char *)(piVar3 + 0xe) = (char)iVar1;
      goto LAB_00953c6a;
    }
  }
  else {
    piVar7 = ((int *)GEN_TOP(piVar3[2]));
  }
  piVar6 = ((int *)GEN_TOP(piVar3[1]));
  if (*((char *)GEN_TOP(((int)piVar7 + 0x39))) == '\0') {
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
    if (*((char *)GEN_TOP(((int)piVar7 + 0x39))) == '\0') {
      piVar4 = ((int *)GEN_TOP(F_00910ee0(piVar7)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar3) {
    if (*((char *)GEN_TOP(((int)piVar7 + 0x39))) == '\0') {
      uVar5 = F_00910ec0(piVar7);
      *((uint *)GEN_TOP((iVar1 + 8))) = uVar5;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar6;
    }
  }
LAB_00953c6a: ;
  if ((char)piVar3[0xe] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[0xe] != '\x01') break;
        piVar6 = ((int *)GEN_TOP(*piVar4));
        if (piVar7 == piVar6) {
          piVar6 = ((int *)GEN_TOP(piVar4[2]));
          if ((char)piVar6[0xe] == '\0') {
            *(undefined1 *)(piVar6 + 0xe) = 1;
            *(undefined1 *)(piVar4 + 0xe) = 0;
            F_00946510(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(piVar4[2]));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x39))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar6 + 0x38))) != '\x01') || (*((char *)GEN_TOP((piVar6[2] + 0x38))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar6[2] + 0x38))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar6 + 0x38))) = 1;
                *(undefined1 *)(piVar6 + 0xe) = 0;
                F_009279b0(this GEN_EDX_ARG,piVar6);
                piVar6 = ((int *)GEN_TOP(piVar4[2]));
              }
              *(char *)(piVar6 + 0xe) = (char)piVar4[0xe];
              *(undefined1 *)(piVar4 + 0xe) = 1;
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x38))) = 1;
              F_00946510(this GEN_EDX_ARG,piVar4);
              break;
            }
LAB_00953d28: ;
            *(undefined1 *)(piVar6 + 0xe) = 0;
          }
        }
        else {
          if ((char)piVar6[0xe] == '\0') {
            *(undefined1 *)(piVar6 + 0xe) = 1;
            *(undefined1 *)(piVar4 + 0xe) = 0;
            F_009279b0(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(*piVar4));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x39))) == '\0') {
            if ((*((char *)GEN_TOP((piVar6[2] + 0x38))) == '\x01') && (*((char *)GEN_TOP((*piVar6 + 0x38))) == '\x01'))
            goto LAB_00953d28;
            if (*((char *)GEN_TOP((*piVar6 + 0x38))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x38))) = 1;
              *(undefined1 *)(piVar6 + 0xe) = 0;
              F_00946510(this GEN_EDX_ARG,piVar6);
              piVar6 = ((int *)GEN_TOP(*piVar4));
            }
            *(char *)(piVar6 + 0xe) = (char)piVar4[0xe];
            *(undefined1 *)(piVar4 + 0xe) = 1;
            *((undefined1 *)GEN_TOP((*piVar6 + 0x38))) = 1;
            F_009279b0(this GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = ((int *)GEN_TOP(piVar4[1]));
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 0xe) = 1;
  }
  F_00429760(piVar3,0x40,400);
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00953db0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00953db0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x953db0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x39)));
  while (cVar1 == '\0') {
    F_009464d0(this GEN_EDX_FWD,piVar2[2]);
    piVar3 = ((int *)GEN_TOP(*piVar2));
    F_00429760(piVar2,0x40,400);
    piVar2 = piVar3;
    cVar1 = *((char *)GEN_TOP(((int)piVar3 + 0x39)));
  }
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  uVar4 = *((uint *)GEN_TOP(((int)this + 4)));
  *((uint *)GEN_TOP((uVar4 + 8))) = uVar4;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar4;
}

/* ref: FUN_00953e50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00953e50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x953e50u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00953e70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00953e70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x953e70u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00953ec0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00953ec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x953ec0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int iVar2;
  
  if (*((int *)GEN_TOP(((int)this + 0x10))) != 0) {
    iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + *((int *)GEN_TOP(((int)this + 0xc))) * 4)));
    F_0042c880(((undefined *)GEN_TOP((iVar2 + 100))) GEN_EDX_FWD);
    F_0042c880(((undefined *)GEN_TOP((iVar2 + 0x10))) GEN_EDX_ARG);
    *((int *)GEN_TOP(((int)this + 0xc))) = *((int *)GEN_TOP(((int)this + 0xc))) + 1;
    if (*((uint *)GEN_TOP(((int)this + 8))) <= *((uint *)GEN_TOP(((int)this + 0xc)))) {
      *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
    }
    piVar1 = ((int *)GEN_TOP(((int)this + 0x10)));
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
    }
  }
  return;
}

/* ref: FUN_00953f50 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00953f50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x953f50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_009465f0(this GEN_EDX_FWD);
  uVar1 = F_00429760(*(undefined4 *)this,8,400);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00953fc0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00953fc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x953fc0u, gen_a0, 0u, 0u, 0u);
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
      F_00429760(piVar2,0xc,400);
      piVar2 = piVar1;
    } while (piVar1 != ((int *)GEN_TOP(*(int *)this)));
  }
  uVar3 = F_00429760(*(undefined4 *)this,0xc,400);
  return (uint)uVar3;
}

/* ref: FUN_00954010 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00954010(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x954010u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP(*in_ecx));
  return (uint)param_2;
}

/* ref: FUN_00954020 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00954020(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x954020u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00954060 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00954060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x954060u, gen_a0, 0u, 0u, 0u);
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
      F_00429760(piVar2,0x18,400);
      piVar2 = piVar1;
    } while (piVar1 != ((int *)GEN_TOP(*(int *)this)));
  }
  uVar3 = F_00429760(*(undefined4 *)this,0x18,400);
  return (uint)uVar3;
}

/* ref: FUN_009540b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009540b0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9540b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP(*in_ecx));
  return (uint)param_2;
}

/* ref: FUN_009540c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009540c0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9540c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00954100 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00954100(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x954100u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP(*in_ecx));
  return (uint)param_2;
}

/* ref: FUN_00954140 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00954140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x954140u, gen_a0, 0u, 0u, 0u);
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
      F_00429760(piVar2,0x14,400);
      piVar2 = piVar1;
    } while (piVar1 != ((int *)GEN_TOP(*(int *)this)));
  }
  uVar3 = F_00429760(*(undefined4 *)this,0x14,400);
  return (uint)uVar3;
}

/* ref: FUN_00954190 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00954190(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x954190u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP(*in_ecx));
  return (uint)param_2;
}

/* ref: FUN_009541d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009541d0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9541d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP(*in_ecx));
  return (uint)param_2;
}

/* ref: FUN_009541e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009541e0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9541e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00954220 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00954220(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x954220u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP(*in_ecx));
  return (uint)param_2;
}

/* ref: FUN_00954260 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00954260(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x954260u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP(*in_ecx));
  return (uint)param_2;
}

/* ref: FUN_00954270 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00954270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x954270u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_009542b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009542b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9542b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x21)));
  while (cVar1 == '\0') {
    F_00946d20(this GEN_EDX_FWD,piVar2[2]);
    piVar3 = ((int *)GEN_TOP(*piVar2));
    F_00429760(piVar2,0x28,400);
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

/* ref: FUN_00954310 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00954310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x954310u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00929470(this GEN_EDX_FWD,param_2);
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

/* ref: FUN_00954370 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00954370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x954370u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00929420(this GEN_EDX_FWD,param_2);
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

/* ref: FUN_009543d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009543d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9543d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_009543f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009543f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9543f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00954400 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00954400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x954400u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
  while (cVar1 == '\0') {
    F_00946da0(this GEN_EDX_FWD,piVar2[2]);
    piVar3 = ((int *)GEN_TOP(*piVar2));
    F_00429760(piVar2,0x18,400);
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

/* ref: FUN_00954460 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00954460(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x954460u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00954480 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00954480(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x954480u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00954490 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00954490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x954490u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
  while (cVar1 == '\0') {
    F_00946e20(this GEN_EDX_FWD,piVar2[2]);
    piVar3 = ((int *)GEN_TOP(*piVar2));
    F_00429760(piVar2,0x18,400);
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

/* ref: FUN_009544f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009544f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9544f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00929740(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00954500 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00954500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x954500u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_009297a0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00954510 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00954510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x954510u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00929870(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00954550 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00954550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x954550u, gen_a0, 0u, 0u, 0u);
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
      F_00429760(piVar2,0xc,400);
      piVar2 = piVar1;
    } while (piVar1 != ((int *)GEN_TOP(*(int *)this)));
  }
  uVar3 = F_00429760(*(undefined4 *)this,0xc,400);
  return (uint)uVar3;
}

/* ref: FUN_009545a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009545a0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9545a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP(*in_ecx));
  return (uint)param_2;
}

/* ref: FUN_009545b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009545b0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9545b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_009545f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009545f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9545f0u, gen_a0, 0u, 0u, 0u);
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
      F_00429760(piVar2,0xc,400);
      piVar2 = piVar1;
    } while (piVar1 != ((int *)GEN_TOP(*(int *)this)));
  }
  uVar3 = F_00429760(*(undefined4 *)this,0xc,400);
  return (uint)uVar3;
}

/* ref: FUN_00954640 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00954640(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x954640u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP(*in_ecx));
  return (uint)param_2;
}

/* ref: FUN_00954650 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00954650(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x954650u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00954660 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00954660(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x954660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00954670 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00954670(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x954670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP(*in_ecx));
  return (uint)param_2;
}

/* ref: FUN_00954680 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00954680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x954680u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_009546c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009546c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9546c0u, gen_a0, 0u, 0u, 0u);
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
      F_00429760(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + iVar2 * 4))),0x140,0x137);
    }
  }
  uVar3 = 0;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    uVar4 = F_00429760(*((int *)GEN_TOP(((int)this + 4))),*((int *)GEN_TOP(((int)this + 8))) * 4,0x137);
    uVar3 = (uint)uVar4;
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar3;
}

/* ref: FUN_00954780 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00954780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x954780u, gen_a0, 0u, 0u, 0u);
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
      F_00429760(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + iVar2 * 4))),0x10,400);
    }
  }
  uVar3 = 0;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    uVar4 = F_00429760(*((int *)GEN_TOP(((int)this + 4))),*((int *)GEN_TOP(((int)this + 8))) * 4,400);
    uVar3 = (uint)uVar4;
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar3;
}

/* ref: FUN_00954800 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00954800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x954800u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00954840 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00954840(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x954840u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00954850 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00954850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x954850u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  int * piVar2;
  
  iVar1 = *((int *)GEN_TOP((param_1 + 4)));
  piVar2 = ((int *)GEN_TOP(F_004296a0(0x14,0,400)));
  *piVar2 = param_1;
  piVar2[1] = iVar1;
  if (piVar2 + 2 != ((int *)GEN_TOP(0x0))) {
    piVar2[2] = *param_2;
    piVar2[3] = param_2[1];
    piVar2[4] = param_2[2];
  }
  if (*((int *)GEN_TOP(((int)this + 4))) == -2) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
  *((int * PTR32 *)GEN_TOP(piVar2[1])) = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_009548d0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_009548d0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9548d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_009548e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009548e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x9548e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  int * piVar2;
  
  iVar1 = *((int *)GEN_TOP((param_1 + 4)));
  piVar2 = ((int *)GEN_TOP(F_004296a0(0xc,0,400)));
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

/* ref: FUN_00954950 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00954950(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x954950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00954960 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00954960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x954960u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  int * piVar2;
  
  iVar1 = *((int *)GEN_TOP((param_1 + 4)));
  piVar2 = ((int *)GEN_TOP(F_004296a0(0xc,0,400)));
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

/* ref: FUN_009549d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009549d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x9549d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  
  iVar1 = *param_2;
  if (param_2 != *(int * PTR32 *)this) {
    *((int *)GEN_TOP(param_2[1])) = *param_2;
    *((int *)GEN_TOP((*param_2 + 4))) = param_2[1];
    F_00429760(param_2,0xc,400);
    *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: FUN_00954a20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00954a20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x954a20u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00954a60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00954a60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x954a60u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00954ae0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00954ae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x954ae0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00954ba0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00954ba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x954ba0u, gen_a0, 0u, 0u, 0u);
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
      F_00429760(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + iVar2 * 4))),0x10,400);
    }
  }
  uVar3 = 0;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    uVar4 = F_00429760(*((int *)GEN_TOP(((int)this + 4))),*((int *)GEN_TOP(((int)this + 8))) * 4,400);
    uVar3 = (uint)uVar4;
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar3;
}

/* ref: FUN_00954c60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00954c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x954c60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00928c60(this GEN_EDX_FWD,param_2);
  *param_1 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00954c80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00954c80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x954c80u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00954cd0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00954cd0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x954cd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00954ce0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00954ce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x954ce0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  int * piVar2;
  
  iVar1 = *((int *)GEN_TOP((param_1 + 4)));
  piVar2 = ((int *)GEN_TOP(F_004296a0(0xc,0,400)));
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

/* ref: FUN_00954d50 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00954d50(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x954d50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00954d60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00954d60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x954d60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  int * piVar2;
  
  iVar1 = *((int *)GEN_TOP((param_1 + 4)));
  piVar2 = ((int *)GEN_TOP(F_004296a0(0x18,0,400)));
  *piVar2 = param_1;
  piVar2[1] = iVar1;
  if (piVar2 + 2 != ((int *)GEN_TOP(0x0))) {
    piVar2[2] = *param_2;
    piVar2[3] = param_2[1];
    piVar2[4] = param_2[2];
    piVar2[5] = param_2[3];
  }
  if (*((int *)GEN_TOP(((int)this + 4))) == -2) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
  *((int * PTR32 *)GEN_TOP(piVar2[1])) = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_00954de0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00954de0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x954de0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00954df0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00954df0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x954df0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00954e00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00954e00(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x954e00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00954e10 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00954e10(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x954e10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00954e20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00954e20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x954e20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  int * piVar2;
  
  iVar1 = *((int *)GEN_TOP((param_1 + 4)));
  piVar2 = ((int *)GEN_TOP(F_004296a0(0x14,0,400)));
  *piVar2 = param_1;
  piVar2[1] = iVar1;
  if (piVar2 + 2 != ((int *)GEN_TOP(0x0))) {
    piVar2[2] = *param_2;
    piVar2[3] = param_2[1];
    piVar2[4] = param_2[2];
  }
  if (*((int *)GEN_TOP(((int)this + 4))) == -2) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
  *((int * PTR32 *)GEN_TOP(piVar2[1])) = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_00954ea0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00954ea0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x954ea0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00954eb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00954eb0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x954eb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00954ec0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00954ec0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x954ec0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00954ed0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00954ed0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x954ed0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00954ee0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00954ee0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x954ee0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00954ef0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00954ef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x954ef0u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00954f50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00954f50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x954f50u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00954ff0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00954ff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x954ff0u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00955050 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00955050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x955050u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00955110 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00955110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x955110u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00955150 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00955150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x955150u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00955190 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00955190(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x955190u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_009551a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009551a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x9551a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  int * piVar2;
  
  iVar1 = *((int *)GEN_TOP((param_1 + 4)));
  piVar2 = ((int *)GEN_TOP(F_004296a0(0xc,0,400)));
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

/* ref: FUN_00955210 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00955210(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x955210u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00955220 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00955220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x955220u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  int * piVar2;
  
  iVar1 = *((int *)GEN_TOP((param_1 + 4)));
  piVar2 = ((int *)GEN_TOP(F_004296a0(0xc,0,400)));
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

/* ref: FUN_00955290 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00955290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x955290u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_009539d0(this GEN_EDX_FWD);
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
    F_00948100(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00955330 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00955330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x955330u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00955350 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00955350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x955350u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00953db0(this GEN_EDX_FWD);
    *param_1 = **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*((char *)GEN_TOP(((int)piVar3 + 0x39))) == '\0') {
      piVar2 = ((int *)GEN_TOP(piVar3[2]));
      if (*((char *)GEN_TOP(((int)piVar2 + 0x39))) == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar2 + 0x39)));
        param_2 = piVar2;
        piVar2 = ((int *)GEN_TOP(*piVar2));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x39)));
          param_2 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP((piVar3[1] + 0x39)));
        piVar4 = ((int *)GEN_TOP(piVar3[1]));
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(param_2[2]))))) {
          cVar1 = *((char *)GEN_TOP((param_2[1] + 0x39)));
          piVar4 = ((int *)GEN_TOP(param_2[1]));
          piVar2 = param_2;
        }
      }
    }
    F_00953b50(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_009553f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009553f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9553f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar3 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x10))) != 0) {
    uVar3 = *((int *)GEN_TOP(((int)this + 0x10))) - 1 + *((int *)GEN_TOP(((int)this + 0xc)));
    if (*((uint *)GEN_TOP(((int)this + 8))) <= uVar3) {
      uVar3 = uVar3 - *((uint *)GEN_TOP(((int)this + 8)));
    }
    iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar3 * 4)));
    F_0042c880(((undefined *)GEN_TOP((iVar2 + 100))) GEN_EDX_FWD);
    uVar4 = F_0042c880(((undefined *)GEN_TOP((iVar2 + 0x10))) GEN_EDX_ARG);
    uVar3 = (uint)uVar4;
    piVar1 = ((int *)GEN_TOP(((int)this + 0x10)));
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
    }
  }
  return uVar3;
}

/* ref: FUN_00955430 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00955430(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x955430u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x6c,0,400)));
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (puVar1 + 2 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar1[2] = *param_3;
    puVar1[3] = param_3[1];
    F_0042cbc0(puVar1 + 4 GEN_EDX_ARG,param_3 + 2);
    puVar1[0x19] = param_3[0x17];
    puVar1[0x1a] = param_3[0x18];
  }
  return (uint)puVar1;
}

/* ref: FUN_00955490 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00955490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x955490u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_009542b0(this GEN_EDX_FWD);
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
    F_00948360(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00955530 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00955530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x955530u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00954400(this GEN_EDX_FWD);
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
    F_009485c0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_009555d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009555d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x9555d0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00954490(this GEN_EDX_FWD);
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
    F_00948820(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00955670 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00955670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x955670u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
  while (cVar1 == '\0') {
    F_00948b40(this GEN_EDX_FWD,piVar2[2]);
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

/* ref: FUN_009556d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009556d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(int param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x9556d0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    in_ecx = ((int *)GEN_TOP(F_0094dbf0(this_00 GEN_EDX_ARG,param_1,param_2,param_3)));
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

/* ref: FUN_00955860 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00955860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(int param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x955860u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    in_ecx = ((int *)GEN_TOP(F_0094dc60(this_00 GEN_EDX_ARG,param_1,param_2,param_3)));
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

/* ref: FUN_009559f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009559f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(int param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x9559f0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    in_ecx = ((int *)GEN_TOP(F_0094dcd0(this_00 GEN_EDX_ARG,param_1,param_2,param_3)));
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

/* ref: FUN_00955b80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00955b80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(int param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x955b80u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    in_ecx = ((int *)GEN_TOP(F_0094dd40(this_00 GEN_EDX_ARG,param_1,param_2,param_3)));
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

/* ref: FUN_00955d10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00955d10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(int param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x955d10u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    in_ecx = ((int *)GEN_TOP(F_0094ddb0(this_00 GEN_EDX_ARG,param_1,param_2,param_3)));
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

/* ref: FUN_00955ea0 */
GEN_OWN GEN_FRAME byte F_00955ea0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x955ea0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  return *param_1 != *param_2;
}

/* ref: FUN_00955ec0 */
GEN_OWN GEN_FRAME uint F_00955ec0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(int * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x955ec0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a3;)
  int * piVar1;
  
  piVar1 = param_2;
  if (param_2 != param_3) {
    do {
      if (piVar1[2] == *param_4) break;
      piVar1 = ((int *)GEN_TOP(*piVar1));
    } while (piVar1 != param_3);
  }
  *param_1 = (int)piVar1;
  return (uint)param_1;
}

/* ref: FUN_00955ef0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00955ef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(uint param_6, unsigned int gen_a6))
{
  GEN_ENTER(0x955ef0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(uint param_6 = (uint)gen_a6;)
  uint uVar1;
  uint uVar2;
  
  if ((*((char *)GEN_TOP(((int)this + 0x34))) == '\0') || (*((int *)GEN_TOP(((int)this + 0x18))) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar1 = F_0094de80(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0x14))) GEN_EDX_FWD,param_1,param_2,param_3,
                         *((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0xf6))) & 0xf,0);
    uVar2 = param_6;
    if (param_6 == 0) {
      uVar2 = uVar1;
    }
    uVar2 = F_00594fc0(this GEN_EDX_ARG,uVar1,(undefined1)param_4,0,param_5,uVar2,0,1,0,0);
    if ((uVar2 != 0) && (*((int *)GEN_TOP((uVar2 + 4))) != 0)) {
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 4))) + 0x13b))) =
           *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0x13a)));
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_00955f70 */
GEN_OWN GEN_FRAME byte F_00955f70(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x955f70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  return *param_1 != *param_2;
}

/* ref: FUN_00955f90 */
GEN_OWN GEN_FRAME uint F_00955f90(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(int * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x955f90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a3;)
  int * piVar1;
  
  piVar1 = param_2;
  if (param_2 != param_3) {
    do {
      if (piVar1[2] == *param_4) break;
      piVar1 = ((int *)GEN_TOP(*piVar1));
    } while (piVar1 != param_3);
  }
  *param_1 = (int)piVar1;
  return (uint)param_1;
}

/* ref: FUN_00955fc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00955fc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(uint param_6, unsigned int gen_a6))
{
  GEN_ENTER(0x955fc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(uint param_6 = (uint)gen_a6;)
  uint uVar1;
  uint uVar2;
  
  if ((*((char *)GEN_TOP(((int)this + 0x34))) == '\0') || (*((int *)GEN_TOP(((int)this + 0x18))) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar1 = F_0094df70(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0x14))) GEN_EDX_FWD,param_1,param_2,param_3,
                         *((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0xf6))) & 0xf,0);
    uVar2 = param_6;
    if (param_6 == 0) {
      uVar2 = uVar1;
    }
    uVar2 = F_00594fc0(this GEN_EDX_ARG,uVar1,(undefined1)param_4,0,param_5,uVar2,0,1,0,0);
    if ((uVar2 != 0) && (*((int *)GEN_TOP((uVar2 + 4))) != 0)) {
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 4))) + 0x13b))) =
           *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0x13a)));
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_00956040 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00956040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(uint param_6, unsigned int gen_a6))
{
  GEN_ENTER(0x956040u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(uint param_6 = (uint)gen_a6;)
  uint uVar1;
  uint uVar2;
  
  if ((*((char *)GEN_TOP(((int)this + 0x34))) == '\0') || (*((int *)GEN_TOP(((int)this + 0x18))) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar1 = F_0094e000(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0x14))) GEN_EDX_FWD,param_1,param_2,param_3,
                         *((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0xf6))) & 0xf,0);
    uVar2 = param_6;
    if (param_6 == 0) {
      uVar2 = uVar1;
    }
    uVar2 = F_00594fc0(this GEN_EDX_ARG,uVar1,(undefined1)param_4,0,param_5,uVar2,0,1,0,0);
    if ((uVar2 != 0) && (*((int *)GEN_TOP((uVar2 + 4))) != 0)) {
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 4))) + 0x13b))) =
           *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0x13a)));
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_009560c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009560c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(uint param_6, unsigned int gen_a6))
{
  GEN_ENTER(0x9560c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(uint param_6 = (uint)gen_a6;)
  uint uVar1;
  uint uVar2;
  
  if ((*((char *)GEN_TOP(((int)this + 0x34))) == '\0') || (*((int *)GEN_TOP(((int)this + 0x18))) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar1 = F_0094e090(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0x14))) GEN_EDX_FWD,param_1,param_2,param_3,
                         *((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0xf6))) & 0xf,0);
    uVar2 = param_6;
    if (param_6 == 0) {
      uVar2 = uVar1;
    }
    uVar2 = F_00594fc0(this GEN_EDX_ARG,uVar1,(undefined1)param_4,0,param_5,uVar2,0,1,0,0);
    if ((uVar2 != 0) && (*((int *)GEN_TOP((uVar2 + 4))) != 0)) {
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 4))) + 0x13b))) =
           *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0x13a)));
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_00956140 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00956140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(uint param_6, unsigned int gen_a6))
{
  GEN_ENTER(0x956140u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(uint param_6 = (uint)gen_a6;)
  uint uVar1;
  uint uVar2;
  
  if ((*((char *)GEN_TOP(((int)this + 0x34))) == '\0') || (*((int *)GEN_TOP(((int)this + 0x18))) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar1 = F_0094e120(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0x14))) GEN_EDX_FWD,param_1,param_2,param_3,
                         *((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0xf6))) & 0xf,0);
    uVar2 = param_6;
    if (param_6 == 0) {
      uVar2 = uVar1;
    }
    uVar2 = F_00594fc0(this GEN_EDX_ARG,uVar1,(undefined1)param_4,0,param_5,uVar2,0,1,0,0);
    if ((uVar2 != 0) && (*((int *)GEN_TOP((uVar2 + 4))) != 0)) {
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 4))) + 0x13b))) =
           *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0x13a)));
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_009561c0 */
GEN_OWN GEN_FRAME uint F_009561c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9561c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = (*(undefined * PTR32 (*)[3])REFP(0x10d3d38));
    param_2[1] = *((undefined4 *)GEN_TOP((param_3 + 4)));
    param_2[2] = *((undefined4 *)GEN_TOP((param_3 + 8)));
  }
  return (uint)param_2;
}

/* ref: FUN_009561f0 */
GEN_OWN GEN_FRAME uint F_009561f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9561f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = (*(undefined * PTR32 (*)[3])REFP(0x10d3d48));
    param_2[1] = *((undefined4 *)GEN_TOP((param_3 + 4)));
    param_2[2] = *((undefined4 *)GEN_TOP((param_3 + 8)));
    param_2[3] = *((undefined4 *)GEN_TOP((param_3 + 0xc)));
    param_2[4] = *((undefined4 *)GEN_TOP((param_3 + 0x10)));
    *(undefined1 *)(param_2 + 5) = *((undefined1 *)GEN_TOP((param_3 + 0x14)));
  }
  return (uint)param_2;
}

/* ref: FUN_00956230 */
GEN_OWN GEN_FRAME uint F_00956230(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x956230u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = (*(undefined * PTR32 (*)[3])REFP(0x10d3d58));
    param_2[1] = *((undefined4 *)GEN_TOP((param_3 + 4)));
    param_2[2] = *((undefined4 *)GEN_TOP((param_3 + 8)));
    param_2[3] = *((undefined4 *)GEN_TOP((param_3 + 0xc)));
  }
  return (uint)param_2;
}

/* ref: FUN_00956260 */
GEN_OWN GEN_FRAME unsigned int F_00956260(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x956260u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      *(undefined1 *)(puVar1 + 3) = 0;
    }
    puVar1 = ((undefined4 *)GEN_TOP(((int)puVar1 + 0xd)));
  }
  return 0;
}

/* ref: FUN_00956290 */
GEN_OWN GEN_FRAME unsigned int F_00956290(GEN_P(undefined2 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x956290u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined2 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != ((undefined2 *)GEN_TOP(0x0))) {
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 0;
    }
    puVar1 = ((undefined2 *)GEN_TOP(((int)puVar1 + 3)));
  }
  return 0;
}

/* ref: FUN_009562c0 */
GEN_OWN GEN_FRAME unsigned int F_009562c0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9562c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = 0;
      puVar1[1] = 0;
    }
    puVar1 = puVar1 + 2;
  }
  return 0;
}

/* ref: FUN_009562f0 */
GEN_OWN GEN_FRAME unsigned int F_009562f0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9562f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = 0;
      puVar1[1] = 0;
    }
    puVar1 = puVar1 + 2;
  }
  return 0;
}

/* ref: FUN_00956320 */
GEN_OWN GEN_FRAME unsigned int F_00956320(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x956320u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
    }
    puVar1 = puVar1 + 3;
  }
  return 0;
}

/* ref: FUN_00956350 */
GEN_OWN GEN_FRAME uint F_00956350(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x956350u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_0042c880(((undefined *)GEN_TOP((param_2 + 0x10))) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00956360 */
GEN_OWN GEN_FRAME uint F_00956360(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x956360u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_0042c880(((undefined *)GEN_TOP((param_2 + 8))) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00956370 */
GEN_OWN GEN_FRAME uint F_00956370(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x956370u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_0042c880(((undefined *)GEN_TOP((param_2 + 0x10))) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00956380 */
GEN_OWN GEN_FRAME uint F_00956380(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(int * param_8, unsigned int gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8), GEN_P(undefined4 param_10, unsigned int gen_a9))
{
  GEN_ENTER(0x956380u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(int * param_8 = (int *)(uintptr_t)gen_a7;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a8;)
  GEN_PIN(undefined4 param_10 = (undefined4)gen_a9;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if ((param_8 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*param_8)) != ((undefined4 *)GEN_TOP(0x0)))) {
    uVar3 = *((undefined4 *)GEN_TOP(*param_8));
  }
  uVar2 = 0;
  if ((param_5 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*param_5)) != ((undefined4 *)GEN_TOP(0x0)))) {
    uVar2 = *((undefined4 *)GEN_TOP(*param_5));
  }
  uVar1 = 0;
  if ((param_2 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*param_2)) != ((undefined4 *)GEN_TOP(0x0)))) {
    uVar1 = *((undefined4 *)GEN_TOP(*param_2));
  }
  F_0094e2a0(param_1,uVar1,0,param_4,uVar2,0,param_7,uVar3,0,param_10,param_1);
  return param_1;
}

/* ref: FUN_00956400 */
GEN_OWN GEN_FRAME uint F_00956400(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(int * param_8, unsigned int gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8), GEN_P(undefined4 param_10, unsigned int gen_a9))
{
  GEN_ENTER(0x956400u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(int * param_8 = (int *)(uintptr_t)gen_a7;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a8;)
  GEN_PIN(undefined4 param_10 = (undefined4)gen_a9;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if ((param_8 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*param_8)) != ((undefined4 *)GEN_TOP(0x0)))) {
    uVar3 = *((undefined4 *)GEN_TOP(*param_8));
  }
  uVar2 = 0;
  if ((param_5 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*param_5)) != ((undefined4 *)GEN_TOP(0x0)))) {
    uVar2 = *((undefined4 *)GEN_TOP(*param_5));
  }
  uVar1 = 0;
  if ((param_2 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*param_2)) != ((undefined4 *)GEN_TOP(0x0)))) {
    uVar1 = *((undefined4 *)GEN_TOP(*param_2));
  }
  F_0094e340(param_1,uVar1,0,param_4,uVar2,0,param_7,uVar3,0,param_10,param_1);
  return param_1;
}

/* ref: FUN_00956480 */
GEN_OWN GEN_FRAME unsigned int F_00956480(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x956480u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar1 = param_3;
    iVar2 = param_1;
    do {
      *((undefined4 *)GEN_TOP((iVar1 + 4))) = *((undefined4 *)GEN_TOP(((param_1 - param_3) + 4 + iVar1)));
      *((undefined4 *)GEN_TOP((iVar1 + 8))) = *((undefined4 *)GEN_TOP((iVar2 + 8)));
      iVar2 = iVar2 + 0xc;
      iVar1 = iVar1 + 0xc;
    } while (iVar2 != param_2);
  }
  return 0;
}

/* ref: FUN_009564c0 */
GEN_OWN GEN_FRAME uint F_009564c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9564c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_0094e420(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_009564e0 */
GEN_OWN GEN_FRAME uint F_009564e0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9564e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  undefined4 * puVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  uVar2 = param_3;
  if (param_1 != param_2) {
    puVar3 = param_1 + 3;
    do {
      *((undefined4 *)GEN_TOP((uVar2 + 4))) = *((undefined4 *)GEN_TOP(((int)param_1 + uVar2 + (4 - param_3))));
      *((undefined4 *)GEN_TOP((uVar2 + 8))) = puVar3[-1];
      *((undefined4 *)GEN_TOP((uVar2 + 0xc))) = *puVar3;
      puVar1 = puVar3 + 1;
      uVar2 = uVar2 + 0x10;
      puVar3 = puVar3 + 4;
    } while (puVar1 != param_2);
  }
  return uVar2;
}

/* ref: FUN_00956530 */
GEN_OWN GEN_FRAME uint F_00956530(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(int * param_8, unsigned int gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8), GEN_P(undefined4 param_10, unsigned int gen_a9))
{
  GEN_ENTER(0x956530u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(int * param_8 = (int *)(uintptr_t)gen_a7;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a8;)
  GEN_PIN(undefined4 param_10 = (undefined4)gen_a9;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if ((param_8 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*param_8)) != ((undefined4 *)GEN_TOP(0x0)))) {
    uVar3 = *((undefined4 *)GEN_TOP(*param_8));
  }
  uVar2 = 0;
  if ((param_5 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*param_5)) != ((undefined4 *)GEN_TOP(0x0)))) {
    uVar2 = *((undefined4 *)GEN_TOP(*param_5));
  }
  uVar1 = 0;
  if ((param_2 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*param_2)) != ((undefined4 *)GEN_TOP(0x0)))) {
    uVar1 = *((undefined4 *)GEN_TOP(*param_2));
  }
  F_0094e4b0(param_1,uVar1,0,param_4,uVar2,0,param_7,uVar3,0,param_10,param_1);
  return param_1;
}

/* ref: FUN_009565b0 */
GEN_OWN GEN_FRAME uint F_009565b0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(int * param_8, unsigned int gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8), GEN_P(undefined4 param_10, unsigned int gen_a9))
{
  GEN_ENTER(0x9565b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(int * param_8 = (int *)(uintptr_t)gen_a7;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a8;)
  GEN_PIN(undefined4 param_10 = (undefined4)gen_a9;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if ((param_8 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*param_8)) != ((undefined4 *)GEN_TOP(0x0)))) {
    uVar3 = *((undefined4 *)GEN_TOP(*param_8));
  }
  uVar2 = 0;
  if ((param_5 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*param_5)) != ((undefined4 *)GEN_TOP(0x0)))) {
    uVar2 = *((undefined4 *)GEN_TOP(*param_5));
  }
  uVar1 = 0;
  if ((param_2 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*param_2)) != ((undefined4 *)GEN_TOP(0x0)))) {
    uVar1 = *((undefined4 *)GEN_TOP(*param_2));
  }
  F_0094e560(param_1,uVar1,0,param_4,uVar2,0,param_7,uVar3,0,param_10,param_1);
  return param_1;
}

/* ref: FUN_00956630 */
GEN_OWN GEN_FRAME uint F_00956630(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(int * param_8, unsigned int gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8), GEN_P(undefined4 param_10, unsigned int gen_a9))
{
  GEN_ENTER(0x956630u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(int * param_8 = (int *)(uintptr_t)gen_a7;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a8;)
  GEN_PIN(undefined4 param_10 = (undefined4)gen_a9;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if ((param_8 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*param_8)) != ((undefined4 *)GEN_TOP(0x0)))) {
    uVar3 = *((undefined4 *)GEN_TOP(*param_8));
  }
  uVar2 = 0;
  if ((param_5 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*param_5)) != ((undefined4 *)GEN_TOP(0x0)))) {
    uVar2 = *((undefined4 *)GEN_TOP(*param_5));
  }
  uVar1 = 0;
  if ((param_2 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*param_2)) != ((undefined4 *)GEN_TOP(0x0)))) {
    uVar1 = *((undefined4 *)GEN_TOP(*param_2));
  }
  F_0094e610(param_1,uVar1,0,param_4,uVar2,0,param_7,uVar3,0,param_10,param_1);
  return param_1;
}

/* ref: FUN_009566b0 */
GEN_OWN GEN_FRAME uint F_009566b0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(int * param_8, unsigned int gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8), GEN_P(undefined4 param_10, unsigned int gen_a9))
{
  GEN_ENTER(0x9566b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(int * param_8 = (int *)(uintptr_t)gen_a7;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a8;)
  GEN_PIN(undefined4 param_10 = (undefined4)gen_a9;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if ((param_8 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*param_8)) != ((undefined4 *)GEN_TOP(0x0)))) {
    uVar3 = *((undefined4 *)GEN_TOP(*param_8));
  }
  uVar2 = 0;
  if ((param_5 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*param_5)) != ((undefined4 *)GEN_TOP(0x0)))) {
    uVar2 = *((undefined4 *)GEN_TOP(*param_5));
  }
  uVar1 = 0;
  if ((param_2 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*param_2)) != ((undefined4 *)GEN_TOP(0x0)))) {
    uVar1 = *((undefined4 *)GEN_TOP(*param_2));
  }
  F_0094e700(param_1,uVar1,0,param_4,uVar2,0,param_7,uVar3,0,param_10,param_1);
  return param_1;
}

/* ref: FUN_00956730 */
GEN_OWN GEN_FRAME uint F_00956730(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x956730u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  undefined * this;
  int iVar2;
  
  F_0042c880(((undefined *)GEN_TOP((param_2 + 0xb8))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP((param_2 + 0x60))) GEN_EDX_ARG);
  this = ((undefined *)GEN_TOP((param_2 + 0x60)));
  iVar2 = 9;
  do {
    this = ((undefined *)GEN_TOP(((int)this - 8)));
    uVar1 = F_005a2670(this GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_009567c0 */
GEN_OWN GEN_FRAME unsigned int F_009567c0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9567c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  for (puVar1 = param_1; puVar1 != param_2; puVar1 = puVar1 + 3) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,0);
  }
  return;
}

/* ref: FUN_009567f0 */
GEN_OWN GEN_FRAME unsigned int F_009567f0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9567f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  for (puVar1 = param_1; puVar1 != param_2; puVar1 = puVar1 + 6) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,0);
  }
  return;
}

/* ref: FUN_00956820 */
GEN_OWN GEN_FRAME unsigned int F_00956820(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x956820u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  for (puVar1 = param_1; puVar1 != param_2; puVar1 = puVar1 + 4) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,0);
  }
  return;
}

/* ref: FUN_00956850 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00956850(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x956850u, gen_a0, gen_a1, gen_a2, 0u);
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
        *(undefined1 *)(puVar1 + 3) = *((undefined1 *)GEN_TOP((iVar2 + 0xc + (int)puVar1)));
      }
      puVar1 = ((undefined4 *)GEN_TOP(((int)puVar1 + 0xd)));
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_009568a0 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_009568a0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined2 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9568a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;)
  undefined2 * puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    puVar1 = param_3;
    do {
      if (puVar1 != ((undefined2 *)GEN_TOP(0x0))) {
        *puVar1 = *((undefined2 *)GEN_TOP((iVar2 + (int)puVar1)));
        *(undefined1 *)(puVar1 + 1) = *((undefined1 *)GEN_TOP((iVar2 + 2 + (int)puVar1)));
      }
      puVar1 = ((undefined2 *)GEN_TOP(((int)puVar1 + 3)));
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_009568f0 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_009568f0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9568f0u, gen_a0, gen_a1, gen_a2, 0u);
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
      }
      puVar1 = puVar1 + 2;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00956940 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00956940(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x956940u, gen_a0, gen_a1, gen_a2, 0u);
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
      }
      puVar1 = puVar1 + 2;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00956990 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00956990(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x956990u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_009569e0 */
GEN_OWN GEN_FRAME unsigned int F_009569e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9569e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
    F_0042cbc0(param_2 + 1 GEN_EDX_ARG,param_3 + 1);
    param_2[0x16] = param_3[0x16];
    F_0042cbc0(param_2 + 0x17 GEN_EDX_ARG,param_3 + 0x17);
    param_2[0x2c] = param_3[0x2c];
  }
  return;
}

/* ref: FUN_00956a20 */
GEN_OWN GEN_FRAME unsigned int F_00956a20(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x956a20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    F_0042cbc0(param_2 GEN_EDX_ARG,param_3);
    *((undefined4 *)GEN_TOP(((int)param_2 + 0x54))) = *((undefined4 *)GEN_TOP((param_3 + 0x54)));
    *((undefined4 *)GEN_TOP(((int)param_2 + 0x58))) = *((undefined4 *)GEN_TOP((param_3 + 0x58)));
  }
  return;
}

/* ref: FUN_00956a50 */
GEN_OWN GEN_FRAME uint F_00956a50(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x956a50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    F_0042cbc0(param_2 + 2 GEN_EDX_ARG,param_3 + 2);
    uVar1 = param_3[0x17];
    param_2[0x17] = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00956b70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00956b70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x956b70u, gen_a0, gen_a1, gen_a2, gen_a3);
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
        local_8 = *((int *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc))) < (int)puVar2[3];
      }
      else {
        local_8 = *((int *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc))) <= (int)puVar2[3];
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
      puVar2 = ((undefined4 *)GEN_TOP(F_0094d230(this GEN_EDX_FWD,&(*(undefined4 * PTR32 *)&gen_args[2]),1,puVar2,(*(int *)&gen_args[1]))));
      *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
    F_009172d0(&(*(undefined4 * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[2]);
  if ((int)(*(undefined4 * PTR32 *)&gen_args[2])[3] < *((int *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc)))) {
    puVar2 = ((undefined4 *)GEN_TOP(F_0094d230(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2]),local_8,puVar2,(*(int *)&gen_args[1]))));
    *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  F_00429760((*(int *)&gen_args[1]),0x18,400);
  *(*(undefined4 * PTR32 *)&gen_args[0]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00956c50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00956c50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x956c50u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  cVar1 = *((char *)GEN_TOP(((int)puVar5 + 0x39)));
  local_8 = true;
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  bVar2 = local_8;
  do {
    if (cVar1 != '\0') {
      (*(undefined4 * PTR32 *)&gen_args[2]) = puVar3;
      if (bVar2) {
        if (puVar3 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 4)))))) {
          puVar5 = ((undefined4 *)GEN_TOP(F_0094d460(this GEN_EDX_FWD,&(*(undefined4 * PTR32 *)&gen_args[2]),1,puVar3,(*(int *)&gen_args[1]))));
          *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar5;
          *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
          return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
        }
        F_00917330(&(*(undefined4 * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
      }
      puVar5 = (*(undefined4 * PTR32 *)&gen_args[2]);
      if (((uint)(*(undefined4 * PTR32 *)&gen_args[2])[5] <= *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0x14)))) &&
         (((uint)(*(undefined4 * PTR32 *)&gen_args[2])[5] < *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0x14))) ||
          ((uint)(*(undefined4 * PTR32 *)&gen_args[2])[4] < *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0x10))))))) {
        puVar5 = ((undefined4 *)GEN_TOP(F_0094d460(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2]),bVar2,puVar3,(*(int *)&gen_args[1]))));
        *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar5;
        *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
        return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
      }
      F_00429760((*(int *)&gen_args[1]),0x40,400);
      *(*(undefined4 * PTR32 *)&gen_args[0]) = puVar5;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 0;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
    if ((char)(*(undefined4 * PTR32 *)&gen_args[2]) == '\0') {
      if (((uint)puVar5[5] < *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0x14)))) ||
         (((uint)puVar5[5] <= *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0x14))) &&
          ((uint)puVar5[4] <= *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0x10))))))) {
        local_8 = false;
        goto LAB_00956cc3;
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
LAB_00956cc3: ;
        puVar4 = ((undefined4 *)GEN_TOP(puVar5[2]));
      }
    }
    cVar1 = *((char *)GEN_TOP(((int)puVar4 + 0x39)));
    puVar3 = puVar5;
    puVar5 = puVar4;
    bVar2 = local_8;
  } while( true );
}

/* ref: FUN_00956d70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00956d70(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x956d70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP(*in_ecx));
  return (uint)param_2;
}

/* ref: FUN_00956d80 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00956d80(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x956d80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  ulonglong uVar1;
  
  F_0042c880(((undefined *)GEN_TOP((param_1 + 100))) GEN_EDX_ARG);
  uVar1 = F_0042c880(((undefined *)GEN_TOP((param_1 + 0xc))) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00956da0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00956da0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x956da0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
          puVar5 = ((undefined4 *)GEN_TOP(F_0094d690(this GEN_EDX_FWD,&(*(undefined4 * PTR32 *)&gen_args[2]),1,puVar3,(*(int *)&gen_args[1]))));
          *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar5;
          *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
          return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
        }
        F_00917390(&(*(undefined4 * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
      }
      puVar5 = (*(undefined4 * PTR32 *)&gen_args[2]);
      if (((uint)(*(undefined4 * PTR32 *)&gen_args[2])[5] <= *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0x14)))) &&
         (((uint)(*(undefined4 * PTR32 *)&gen_args[2])[5] < *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0x14))) ||
          ((uint)(*(undefined4 * PTR32 *)&gen_args[2])[4] < *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0x10))))))) {
        puVar5 = ((undefined4 *)GEN_TOP(F_0094d690(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2]),bVar2,puVar3,(*(int *)&gen_args[1]))));
        *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar5;
        *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
        return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
      }
      F_00429760((*(int *)&gen_args[1]),0x28,400);
      *(*(undefined4 * PTR32 *)&gen_args[0]) = puVar5;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 0;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
    if ((char)(*(undefined4 * PTR32 *)&gen_args[2]) == '\0') {
      if (((uint)puVar5[5] < *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0x14)))) ||
         (((uint)puVar5[5] <= *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0x14))) &&
          ((uint)puVar5[4] <= *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0x10))))))) {
        local_8 = false;
        goto LAB_00956e13;
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
LAB_00956e13: ;
        puVar4 = ((undefined4 *)GEN_TOP(puVar5[2]));
      }
    }
    cVar1 = *((char *)GEN_TOP(((int)puVar4 + 0x21)));
    puVar3 = puVar5;
    puVar5 = puVar4;
    bVar2 = local_8;
  } while( true );
}

/* ref: FUN_00956ec0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00956ec0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x956ec0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
        local_8 = *((int *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc))) < (int)puVar2[3];
      }
      else {
        local_8 = *((int *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc))) <= (int)puVar2[3];
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
      puVar2 = ((undefined4 *)GEN_TOP(F_0094d8c0(this GEN_EDX_FWD,&(*(undefined4 * PTR32 *)&gen_args[2]),1,puVar2,(*(int *)&gen_args[1]))));
      *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
    F_00917270(&(*(undefined4 * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[2]);
  if ((int)(*(undefined4 * PTR32 *)&gen_args[2])[3] < *((int *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc)))) {
    puVar2 = ((undefined4 *)GEN_TOP(F_0094d8c0(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2]),local_8,puVar2,(*(int *)&gen_args[1]))));
    *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  F_00429760((*(int *)&gen_args[1]),0x18,400);
  *(*(undefined4 * PTR32 *)&gen_args[0]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00956fa0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00956fa0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x956fa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00956fb0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00956fb0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x956fb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00956fc0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00956fc0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x956fc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x110,0,400)));
  puVar1[1] = param_2;
  *puVar1 = param_1;
  if (puVar1 + 2 != ((undefined4 *)GEN_TOP(0x0))) {
    F_0091dea0(puVar1 + 2 GEN_EDX_ARG,param_3);
  }
  return (uint)puVar1;
}

/* ref: FUN_00957000 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00957000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x957000u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  this_00 = ((undefined *)GEN_TOP(F_00406bd0(0x844,0,uVar1,uVar2)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  this_01 = ((undefined4 *)GEN_TOP(F_0088e3c0(this_00 GEN_EDX_ARG)));
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

/* ref: FUN_00957070 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00957070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x957070u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    piVar2 = ((int *)GEN_TOP(F_0094eff0(this GEN_EDX_ARG,param_1,param_2,param_3)));
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

/* ref: FUN_00957100 */
GEN_OWN GEN_FRAME unsigned int F_00957100(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x957100u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00957130 */
GEN_OWN GEN_FRAME uint F_00957130(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x957130u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00957190 */
GEN_OWN_GS GEN_FRAME uint F_00957190(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0x957190u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_FRAME_DECL_GS(0x68, 8, 4);
  uint uVar1;
  undefined1 * puVar2;
  int iVar3;
  ulonglong uVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x60)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x64));
  uVar1 = param_1;
  if (param_2 != 0) {
    puVar2 = ((undefined1 *)GEN_TOP((param_1 + 4)));
    iVar3 = param_2;
    do {
      F_0042b630(((byte *)(gen_frame + 0x8)) GEN_EDX_ARG);
      if (puVar2 != &REFG(undefined, 0x4)) {
        *(undefined2 *)(puVar2 - 4) = (*(undefined2 *)(gen_frame + 0x0));
        puVar2[1] = (*(undefined1 *)(gen_frame + 0x5));
        *puVar2 = (*(undefined1 *)(gen_frame + 0x4));
        *(undefined2 *)(puVar2 - 2) = (*(undefined2 *)(gen_frame + 0x2));
        puVar2[2] = (*(undefined1 *)(gen_frame + 0x6));
        puVar2[3] = (*(undefined1 *)(gen_frame + 0x7));
        F_0042cbc0(puVar2 + 4 GEN_EDX_ARG,((byte *)(gen_frame + 0x8)));
        *(undefined4 *)(puVar2 + 0x58) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 84));
      }
      uVar4 = F_0042c880(((byte *)(gen_frame + 0x8)) GEN_EDX_ARG);
      uVar1 = (uint)uVar4;
      puVar2 = puVar2 + 0x60;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  return uVar1;
}

/* ref: FUN_00957220 */
GEN_OWN GEN_FRAME unsigned int F_00957220(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x957220u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00957260 */
GEN_OWN GEN_FRAME unsigned int F_00957260(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x957260u, gen_a0, gen_a1, gen_a2, 0u);
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
        for (iVar2 = 0x15; iVar2 != 0; iVar2 = iVar2 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
      }
      puVar1 = puVar1 + 0x15;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_009572a0 */
GEN_OWN GEN_FRAME unsigned int F_009572a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x9572a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  undefined4 in_ECX = 0;
  
  F_0094f190(param_1,param_2,param_3,param_4,0,in_ECX);
  return;
}

/* ref: FUN_009572d0 */
GEN_OWN GEN_FRAME unsigned int F_009572d0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x9572d0u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00957310 */
GEN_OWN GEN_FRAME unsigned int F_00957310(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x957310u, gen_a0, gen_a1, gen_a2, 0u);
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
      }
      puVar1 = puVar1 + 2;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00957340 */
GEN_OWN GEN_FRAME uint F_00957340(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x957340u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_009573a0 */
GEN_OWN GEN_FRAME unsigned int F_009573a0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9573a0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_009573d0 */
GEN_OWN GEN_FRAME unsigned int F_009573d0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9573d0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00957410 */
GEN_OWN GEN_FRAME unsigned int F_00957410(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x957410u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00957440 */
GEN_OWN GEN_FRAME unsigned int F_00957440(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x957440u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00957470 */
GEN_OWN GEN_FRAME unsigned int F_00957470(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x957470u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_009574a0 */
GEN_OWN GEN_FRAME unsigned int F_009574a0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9574a0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_009574d0 */
GEN_OWN GEN_FRAME unsigned int F_009574d0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9574d0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00957500 */
GEN_OWN GEN_FRAME unsigned int F_00957500(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x957500u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: std::_Destroy_range<fuzzer__fuzzer_allocator<fuzzer__MergeFileInfo>_>_00957530 */
GEN_OWN GEN_FRAME unsigned int F_00957530(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x957530u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  
  for (this = param_1; this != param_2; this = this + 0x68) {
    F_0042c880(this GEN_EDX_ARG);
  }
  return;
}

/* ref: std::_Destroy_range<fuzzer__fuzzer_allocator<fuzzer__MergeFileInfo>_>_00957560 */
GEN_OWN GEN_FRAME unsigned int F_00957560(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x957560u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  
  for (this = param_1; this != param_2; this = this + 0x6c) {
    F_0042c880(this GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_00957590 */
GEN_OWN GEN_FRAME unsigned int F_00957590(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x957590u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: std::_Destroy_range<fuzzer__fuzzer_allocator<fuzzer__MergeFileInfo>_>_009575d0 */
GEN_OWN GEN_FRAME unsigned int F_009575d0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9575d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  
  for (this = param_1; this != param_2; this = this + 0x58) {
    F_0042c880(this GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_00957600 */
GEN_OWN GEN_FRAME uint F_00957600(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x957600u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: std::_Destroy_range<fuzzer__fuzzer_allocator<fuzzer__MergeFileInfo>_>_00957640 */
GEN_OWN GEN_FRAME unsigned int F_00957640(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x957640u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  
  for (this = param_1; this != param_2; this = this + 0x54) {
    F_0042c880(this GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_00957670 */
GEN_OWN GEN_FRAME unsigned int F_00957670(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x957670u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_009576a0 */
GEN_OWN GEN_FRAME unsigned int F_009576a0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9576a0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_009576d0 */
GEN_OWN GEN_FRAME uint F_009576d0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x9576d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_0094f4f0(param_1,param_2,param_3,param_4,0,in_ECX);
  return uVar1;
}

/* ref: FUN_00957700 */
GEN_OWN GEN_FRAME unsigned int F_00957700(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x957700u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int iVar1;
  
  for (iVar1 = param_1; iVar1 != param_2; iVar1 = iVar1 + 0x60) {
    F_0042c880(((undefined *)GEN_TOP((iVar1 + 8))) GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_00957730 */
GEN_OWN GEN_FRAME unsigned int F_00957730(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x957730u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00957770 */
GEN_OWN GEN_FRAME unsigned int F_00957770(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x957770u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_009577c0 */
GEN_OWN GEN_FRAME unsigned int F_009577c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x9577c0u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00957810 */
GEN_OWN GEN_FRAME unsigned int F_00957810(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x957810u, gen_a0, gen_a1, gen_a2, 0u);
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
      }
      puVar1 = puVar1 + 2;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00957840 */
GEN_OWN GEN_FRAME unsigned int F_00957840(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x957840u, gen_a0, gen_a1, gen_a2, 0u);
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
      }
      puVar1 = puVar1 + 2;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00957870 */
GEN_OWN GEN_FRAME unsigned int F_00957870(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x957870u, gen_a0, gen_a1, gen_a2, 0u);
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
      }
      puVar1 = puVar1 + 2;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_009578a0 */
GEN_OWN GEN_FRAME unsigned int F_009578a0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9578a0u, gen_a0, gen_a1, gen_a2, 0u);
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
      }
      puVar1 = puVar1 + 2;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_009578d0 */
GEN_OWN GEN_FRAME unsigned int F_009578d0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9578d0u, gen_a0, gen_a1, gen_a2, 0u);
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
      }
      puVar1 = puVar1 + 2;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00957900 */
GEN_OWN GEN_FRAME unsigned int F_00957900(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x957900u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  undefined4 in_ECX = 0;
  
  F_0094f6d0(param_1,param_2,param_3,param_4,0,in_ECX);
  return;
}

/* ref: FUN_00957930 */
GEN_OWN GEN_FRAME unsigned int F_00957930(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x957930u, gen_a0, gen_a1, gen_a2, 0u);
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
      }
      puVar1 = puVar1 + 2;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00957960 */
GEN_OWN GEN_FRAME unsigned int F_00957960(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x957960u, gen_a0, gen_a1, gen_a2, 0u);
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
      }
      puVar1 = puVar1 + 2;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00957990 */
GEN_OWN GEN_FRAME unsigned int F_00957990(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x957990u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_009579d0 */
GEN_OWN GEN_FRAME unsigned int F_009579d0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9579d0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00957a00 */
GEN_OWN GEN_FRAME unsigned int F_00957a00(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x957a00u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00957a40 */
GEN_OWN GEN_FRAME unsigned int F_00957a40(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x957a40u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00957a80 */
GEN_OWN GEN_FRAME unsigned int F_00957a80(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x957a80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  undefined4 in_ECX = 0;
  
  F_0094f850(param_1,param_2,param_3,param_4,0,in_ECX);
  return;
}

/* ref: FUN_00957ab0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00957ab0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x957ab0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  bool local_8;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  puVar1 = ((undefined4 *)GEN_TOP(puVar2[1]));
  local_8 = true;
  if (*((char *)GEN_TOP(((int)puVar1 + 0x15))) == '\0') {
    do {
      puVar2 = puVar1;
      if ((char)(*(undefined4 *)&gen_args[2]) == '\0') {
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
  puVar2 = ((undefined4 *)GEN_TOP(F_0094eb30(this GEN_EDX_FWD,&(*(undefined4 *)&gen_args[2]),local_8,puVar2,(*(int *)&gen_args[1]))));
  *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00957b20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00957b20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x957b20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  bool local_8;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  puVar1 = ((undefined4 *)GEN_TOP(puVar2[1]));
  local_8 = true;
  if (*((char *)GEN_TOP(((int)puVar1 + 0x15))) == '\0') {
    do {
      puVar2 = puVar1;
      if ((char)(*(undefined4 *)&gen_args[2]) == '\0') {
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
  puVar2 = ((undefined4 *)GEN_TOP(F_0094ed70(this GEN_EDX_FWD,&(*(undefined4 *)&gen_args[2]),local_8,puVar2,(*(int *)&gen_args[1]))));
  *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

