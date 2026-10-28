#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00b9a980 */
GEN_NOFRAME uint F_00b9a980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9a980u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  
  piVar1 = (int *)F_00b9a540(param_2,param_1);
  if ((piVar1[2] == 6) && (*(char *)(*piVar1 + 6) != '\0')) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b9a9b0 */
GEN_NOFRAME uint F_00b9a9b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9a9b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  uVar1 = F_00b9a540(param_2,param_1);
  if (*(int *)(uVar1 + 8) != 3) {
    uVar1 = F_00c02bc0(uVar1,((undefined1 *)(gen_frame + 0x0)));
    if (uVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_00b9a9f0 */
GEN_NOFRAME uint F_00b9a9f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9a9f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined * puVar1;
  
  puVar1 = (undefined *)F_00b9a540(param_2,param_1);
  if ((puVar1 != &REFG(undefined, 0x110e488)) && ((*(int *)(puVar1 + 8) == 4 || (*(int *)(puVar1 + 8) == 3)))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b9aa50 */
GEN_NOFRAME uint F_00b9aa50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9aa50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined * puVar1;
  undefined * puVar2;
  uint uVar3;
  
  puVar1 = (undefined *)F_00b9a540(param_2,param_1);
  puVar2 = (undefined *)F_00b9a540(param_3,param_1);
  if ((puVar1 != &REFG(undefined, 0x110e488)) && (puVar2 != &REFG(undefined, 0x110e488))) {
    uVar3 = F_00c00310(puVar1,puVar2);
    return uVar3;
  }
  return 0;
}

/* ref: FUN_00b9aaf0 */
GEN_NOFRAME uint F_00b9aaf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9aaf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined * puVar1;
  undefined * puVar2;
  uint uVar3;
  
  puVar1 = (undefined *)F_00b9a540(param_2,param_1);
  puVar2 = (undefined *)F_00b9a540(param_3,param_1);
  if ((puVar1 != &REFG(undefined, 0x110e488)) && (puVar2 != &REFG(undefined, 0x110e488))) {
    uVar3 = F_00c03260(param_1,puVar1,puVar2);
    return uVar3;
  }
  return 0;
}

/* ref: FUN_00b9ab30 */
GEN_NOFRAME double F_00b9ab30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9ab30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  double * pdVar1;
  
  pdVar1 = (double *)F_00b9a540(param_2,param_1);
  if (*(int *)(pdVar1 + 1) != 3) {
    pdVar1 = (double *)F_00c02bc0(pdVar1,((undefined1 *)(gen_frame + 0x0)));
    if (pdVar1 == (double *)0x0) {
      return 0.0;
    }
  }
  return *pdVar1;
}

/* ref: FUN_00b9ab70 */
GEN_NOFRAME uint F_00b9ab70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9ab70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  double * pdVar1;
  
  pdVar1 = (double *)F_00b9a540(param_2,param_1);
  if (*(int *)(pdVar1 + 1) != 3) {
    pdVar1 = (double *)F_00c02bc0(pdVar1,((undefined1 *)(gen_frame + 0x0)));
    if (pdVar1 == (double *)0x0) {
      return 0;
    }
  }
  return (int)ROUND(*pdVar1);
}

/* ref: FUN_00b9abc0 */
GEN_NOFRAME uint F_00b9abc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9abc0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  
  piVar1 = (int *)F_00b9a540(param_2,param_1);
  if ((piVar1[2] != 0) && ((piVar1[2] != 1 || (*piVar1 != 0)))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b9abf0 */
GEN_NOFRAME uint F_00b9abf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9abf0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (int *)F_00b9a540(param_2,param_1);
  if (piVar1[2] != 4) {
    uVar2 = F_00c02c10(param_1,piVar1);
    if (uVar2 == 0) {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = 0;
      }
      return 0;
    }
    if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x40))) <= *((uint *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x44)))) {
      F_00c01810(param_1);
    }
    piVar1 = (int *)F_00b9a540(param_2,param_1);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(*piVar1 + 0xc);
  }
  return *piVar1 + 0x10;
}

/* ref: FUN_00b9ac60 */
GEN_NOFRAME uint F_00b9ac60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9ac60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (int *)F_00b9a540(param_2,param_1);
  switch((unsigned int)(uintptr_t)(piVar1[2])) {
  case 3: ;
    uVar2 = F_00c02c10(param_1,piVar1);
    if (uVar2 != 0) goto switchD_00b9ac7e_caseD_4;
    break;
  case 4: ;
switchD_00b9ac7e_caseD_4: ;
    return *(uint *)(*piVar1 + 0xc);
  case 5: ;
    uVar2 = F_00c05400(*piVar1);
    return uVar2;
  case 7: ;
    return *(uint *)(*piVar1 + 0x10);
  }
  return 0;
}

/* ref: FUN_00b9acd0 */
GEN_NOFRAME uint F_00b9acd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9acd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  
  piVar1 = (int *)F_00b9a540(param_2,param_1);
  if ((piVar1[2] == 6) && (*(char *)(*piVar1 + 6) != '\0')) {
    return *(uint *)(*piVar1 + 0x10);
  }
  return 0;
}

/* ref: FUN_00b9ad00 */
GEN_NOFRAME uint F_00b9ad00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9ad00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint * puVar1;
  
  puVar1 = (uint *)F_00b9a540(param_2,param_1);
  if (puVar1[2] == 2) {
    return *puVar1;
  }
  if (puVar1[2] != 7) {
    return 0;
  }
  return *puVar1 + 0x18;
}

/* ref: FUN_00b9ad30 */
GEN_NOFRAME uint F_00b9ad30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9ad30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint * puVar1;
  
  puVar1 = (uint *)F_00b9a540(param_2,param_1);
  if (puVar1[2] != 8) {
    return 0;
  }
  return *puVar1;
}

/* ref: FUN_00b9ad50 */
GEN_NOFRAME uint F_00b9ad50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9ad50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint * puVar1;
  
  puVar1 = (uint *)F_00b9a540(param_2,param_1);
  switch((unsigned int)(uintptr_t)(puVar1[2])) {
  case 2: ;
  case 7: ;
    puVar1 = (uint *)F_00b9a540(param_2,param_1);
    if (puVar1[2] == 2) goto switchD_00b9ad6e_caseD_5;
    if (puVar1[2] == 7) {
      return *puVar1 + 0x18;
    }
    break;
  case 5: ;
  case 6: ;
  case 8: ;
switchD_00b9ad6e_caseD_5: ;
    return *puVar1;
  }
  return 0;
}

/* ref: FUN_00b9adc0 */
GEN_NOFRAME uint F_00b9adc0(unsigned int gen_a0)
{
  GEN_ENTER(0xb9adc0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  *((undefined4 *)GEN_TOP((*(int *)(param_1 + 8) + 8))) = 0;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
  return param_1;
}

/* ref: FUN_00b9ade0 */
GEN_NOFRAME uint F_00b9ade0(unsigned int gen_a0, double gen_a1)
{
  GEN_ENTER(0xb9ade0u, gen_a0, (unsigned int)gen_trace_d(gen_a1), (unsigned int)(gen_trace_d(gen_a1) >> 32), 0u);
  uint param_1 = (uint)gen_a0;
  double param_2 = (double)gen_a1;
  double * pdVar1;
  
  pdVar1 = *(double * PTR32 *)(param_1 + 8);
  *pdVar1 = param_2;
  *(undefined4 *)(pdVar1 + 1) = 3;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
  return param_1;
}

/* ref: FUN_00b9ae00 */
GEN_NOFRAME uint F_00b9ae00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9ae00u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  double * pdVar1;
  
  pdVar1 = *(double * PTR32 *)(param_1 + 8);
  *pdVar1 = (double)param_2;
  *(undefined4 *)(pdVar1 + 1) = 3;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
  return param_1;
}

/* ref: FUN_00b9ae20 */
GEN_NOFRAME uint F_00b9ae20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9ae20u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint * puVar1;
  uint uVar2;
  
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x40))) <= *((uint *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x44)))) {
    F_00c01810(param_1);
  }
  puVar1 = *(uint * PTR32 *)(param_1 + 8);
  uVar2 = F_00c05a80(param_1,param_2,param_3);
  *puVar1 = uVar2;
  puVar1[2] = 4;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
  return uVar2;
}

/* ref: FUN_00b9ae60 */
GEN_NOFRAME uint F_00b9ae60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9ae60u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  char cVar1;
  uint * puVar2;
  char * pcVar3;
  uint uVar4;
  
  if (param_2 == (char *)0x0) {
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 8) + 8))) = 0;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
    return param_1;
  }
  pcVar3 = param_2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x40))) <= *((uint *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x44)))) {
    F_00c01810(param_1);
  }
  puVar2 = *(uint * PTR32 *)(param_1 + 8);
  uVar4 = F_00c05a80(param_1,param_2,(int)pcVar3 - (int)(param_2 + 1));
  *puVar2 = uVar4;
  puVar2[2] = 4;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
  return uVar4;
}

/* ref: FUN_00b9aed0 */
GEN_NOFRAME uint F_00b9aed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9aed0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x40))) <= *((uint *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x44)))) {
    F_00c01810(param_1);
  }
  uVar1 = F_00c00470(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00b9af00 */
GEN_NOFRAME uint F_00b9af00(unsigned int gen_a0, unsigned int gen_a1, ...)
{
  GEN_ENTER(0xb9af00u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[34];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  { va_list gen_va; va_start(gen_va, gen_a1);
    for (int gen_i = 2; gen_i < 34; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x40))) <= *((uint *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x44)))) {
    F_00c01810(param_1);
  }
  uVar1 = F_00c00470(param_1,param_2,((undefined *)&gen_args[2]));
  return uVar1;
}

/* ref: FUN_00b9af30 */
GEN_NOFRAME uint F_00b9af30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9af30u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  uint * puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  int iVar7;
  
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x40))) <= *((uint *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x44)))) {
    F_00c01810(param_1);
  }
  if (*(int *)(param_1 + 0x14) == *(int *)(param_1 + 0x28)) {
    uVar2 = *(undefined4 *)(param_1 + 0x48);
  }
  else {
    uVar2 = *((undefined4 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x14) + 4))) + 0xc)));
  }
  uVar3 = F_00c05bd0(param_1,param_3,uVar2);
  *(undefined4 *)(uVar3 + 0x10) = param_2;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * -0x10;
  if (param_3 != 0) {
    puVar5 = (undefined4 *)(param_3 * 0x10 + 0x18 + uVar3);
    iVar7 = param_3;
    do {
      puVar6 = puVar5 - 4;
      iVar4 = *(int *)(param_1 + 8) + (-0x18 - uVar3);
      *puVar6 = *(undefined4 *)(iVar4 + (int)puVar6);
      iVar7 = iVar7 - 1;
      puVar5[-3] = *(undefined4 *)((int)puVar6 + iVar4 + 4);
      puVar5[-2] = *(undefined4 *)((int)puVar6 + iVar4 + 8);
      puVar5 = puVar6;
    } while (iVar7 != 0);
  }
  puVar1 = *(uint * PTR32 *)(param_1 + 8);
  *puVar1 = uVar3;
  puVar1[2] = 6;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
  return uVar3;
}

/* ref: FUN_00b9afd0 */
GEN_NOFRAME uint F_00b9afd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9afd0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  uint * puVar1;
  
  puVar1 = *(uint * PTR32 *)(param_1 + 8);
  puVar1[2] = 1;
  *puVar1 = (uint)(param_2 != 0);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
  return param_1;
}

/* ref: FUN_00b9aff0 */
GEN_NOFRAME uint F_00b9aff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9aff0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)(param_1 + 8);
  *puVar1 = param_2;
  puVar1[2] = 2;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
  return param_1;
}

/* ref: FUN_00b9b010 */
GEN_NOFRAME uint F_00b9b010(unsigned int gen_a0)
{
  GEN_ENTER(0xb9b010u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(param_1 + 8);
  *piVar1 = param_1;
  piVar1[2] = 8;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
  return (uint)(*((int *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x70))) == param_1);
}

/* ref: FUN_00b9b040 */
GEN_NOFRAME uint F_00b9b040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9b040u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  int iVar2;
  
  uVar1 = F_00b9a540(param_2,param_1);
  iVar2 = *(int *)(param_1 + 8) - 0x10;
  uVar1 = F_00c02e80(param_1,uVar1,iVar2,iVar2);
  return uVar1;
}

/* ref: FUN_00b9b070 */
GEN_NOFRAME uint F_00b9b070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9b070u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  char * param_3 = (char *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  uint uVar2;
  char * pcVar3;
  uint uVar4;
  
  uVar2 = F_00b9a540(param_2,param_1);
  pcVar3 = param_3;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  uVar4 = F_00c05a80(param_1,param_3,(int)pcVar3 - (int)(param_3 + 1));
  ((uint *)(gen_frame + 0x0))[0] = uVar4;
  (*(undefined4 *)(gen_frame + 0x8)) = 4;
  uVar2 = F_00c02e80(param_1,uVar2,((uint *)(gen_frame + 0x0)),*(undefined4 *)(param_1 + 8));
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
  return uVar2;
}

/* ref: FUN_00b9b0d0 */
GEN_NOFRAME uint F_00b9b0d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9b0d0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  puVar3 = (undefined4 *)F_00b9a540(param_2,param_1);
  puVar3 = (undefined4 *)F_00c051f0(*puVar3,*(int *)(param_1 + 8) - 0x10);
  iVar1 = *(int *)(param_1 + 8);
  *(undefined4 *)(iVar1 - 0x10) = *puVar3;
  *(undefined4 *)(iVar1 - 0xc) = puVar3[1];
  uVar2 = puVar3[2];
  *(uint *)(iVar1 - 8) = uVar2;
  return uVar2;
}

/* ref: FUN_00b9b110 */
GEN_NOFRAME uint F_00b9b110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9b110u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = (undefined4 *)F_00b9a540(param_2,param_1);
  puVar3 = (undefined4 *)F_00c05110(*puVar2,param_3);
  puVar2 = *(undefined4 * PTR32 *)(param_1 + 8);
  *puVar2 = *puVar3;
  puVar2[1] = puVar3[1];
  uVar1 = puVar3[2];
  puVar2[2] = uVar1;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
  return uVar1;
}

/* ref: FUN_00b9b150 */
GEN_NOFRAME uint F_00b9b150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9b150u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint * puVar1;
  uint uVar2;
  
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x40))) <= *((uint *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x44)))) {
    F_00c01810(param_1);
  }
  puVar1 = *(uint * PTR32 *)(param_1 + 8);
  uVar2 = F_00c05020(param_1,param_2,param_3);
  *puVar1 = uVar2;
  puVar1[2] = 5;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
  return uVar2;
}

/* ref: FUN_00b9b190 */
GEN_NOFRAME uint F_00b9b190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9b190u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  int iVar2;
  
  piVar1 = (int *)F_00b9a540(param_2,param_1);
  iVar2 = piVar1[2];
  if (iVar2 == 5) {
    iVar2 = *(int *)(*piVar1 + 8);
  }
  else if (iVar2 == 7) {
    iVar2 = *(int *)(*piVar1 + 8);
  }
  else {
    iVar2 = *((int *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x98 + iVar2 * 4)));
  }
  if (iVar2 == 0) {
    return 0;
  }
  piVar1 = *(int * PTR32 *)(param_1 + 8);
  *piVar1 = iVar2;
  piVar1[2] = 5;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
  return 1;
}

/* ref: FUN_00b9b1f0 */
GEN_NOFRAME uint F_00b9b1f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9b1f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  undefined4 * puVar3;
  uint * puVar4;
  int * piVar5;
  
  piVar5 = (int *)F_00b9a540(param_2,param_1);
  iVar1 = piVar5[2];
  if ((iVar1 != 6) && (iVar1 != 7)) {
    if (iVar1 != 8) {
      uVar2 = *(uint *)(param_1 + 8);
      *(undefined4 *)(uVar2 + 8) = 0;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
      return uVar2;
    }
    iVar1 = *piVar5;
    puVar3 = *(undefined4 * PTR32 *)(param_1 + 8);
    *puVar3 = *(undefined4 *)(iVar1 + 0x48);
    puVar3[1] = *(undefined4 *)(iVar1 + 0x4c);
    uVar2 = *(uint *)(iVar1 + 0x50);
    puVar3[2] = uVar2;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
    return uVar2;
  }
  puVar4 = *(uint * PTR32 *)(param_1 + 8);
  uVar2 = *(uint *)(*piVar5 + 0xc);
  puVar4[2] = 5;
  *puVar4 = uVar2;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
  return uVar2;
}

/* ref: FUN_00b9b260 */
GEN_NOFRAME uint F_00b9b260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9b260u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b9a540(param_2,param_1);
  uVar1 = F_00c02f70(param_1,uVar1,*(int *)(param_1 + 8) - 0x20,*(int *)(param_1 + 8) - 0x10);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) - 0x20;
  return uVar1;
}

/* ref: FUN_00b9b290 */
GEN_NOFRAME uint F_00b9b290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9b290u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  char * param_3 = (char *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  uint uVar2;
  char * pcVar3;
  uint uVar4;
  
  uVar2 = F_00b9a540(param_2,param_1);
  pcVar3 = param_3;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  uVar4 = F_00c05a80(param_1,param_3,(int)pcVar3 - (int)(param_3 + 1));
  ((uint *)(gen_frame + 0x0))[0] = uVar4;
  (*(undefined4 *)(gen_frame + 0x8)) = 4;
  uVar2 = F_00c02f70(param_1,uVar2,((uint *)(gen_frame + 0x0)),*(int *)(param_1 + 8) - 0x10);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) - 0x10;
  return uVar2;
}

/* ref: FUN_00b9b2f0 */
GEN_NOFRAME uint F_00b9b2f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9b2f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int iVar1;
  int * piVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  piVar2 = (int *)F_00b9a540(param_2,param_1);
  iVar1 = *(int *)(param_1 + 8);
  puVar3 = (undefined4 *)F_00c052a0(param_1,*piVar2,iVar1 - 0x20);
  *puVar3 = *(undefined4 *)(iVar1 - 0x10);
  puVar3[1] = *(undefined4 *)(iVar1 - 0xc);
  puVar3[2] = *(undefined4 *)(iVar1 - 8);
  uVar4 = *(uint *)(param_1 + 8);
  if (((3 < *(int *)(uVar4 - 8)) &&
      (uVar4 = *(uint *)(uVar4 - 0x10), (*(byte *)(uVar4 + 5) & 3) != 0)) &&
     ((*(byte *)(*piVar2 + 5) & 4) != 0)) {
    uVar4 = F_00c01940(param_1,*piVar2);
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) - 0x20;
  return uVar4;
}

/* ref: FUN_00b9b360 */
GEN_NOFRAME uint F_00b9b360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9b360u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  int * piVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  piVar2 = (int *)F_00b9a540(param_2,param_1);
  iVar1 = *(int *)(param_1 + 8);
  puVar3 = (undefined4 *)F_00c05310(param_1,*piVar2,param_3);
  *puVar3 = *(undefined4 *)(iVar1 - 0x10);
  puVar3[1] = *(undefined4 *)(iVar1 - 0xc);
  puVar3[2] = *(undefined4 *)(iVar1 - 8);
  uVar4 = *(uint *)(param_1 + 8);
  if (((3 < *(int *)(uVar4 - 8)) &&
      (uVar4 = *(uint *)(uVar4 - 0x10), (*(byte *)(uVar4 + 5) & 3) != 0)) &&
     ((*(byte *)(*piVar2 + 5) & 4) != 0)) {
    uVar4 = F_00c01940(param_1,*piVar2);
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) - 0x10;
  return uVar4;
}

/* ref: FUN_00b9b3d0 */
GEN_NOFRAME uint F_00b9b3d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9b3d0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int iVar1;
  int * piVar2;
  int iVar3;
  
  piVar2 = (int *)F_00b9a540(param_2,param_1);
  if (*((int *)GEN_TOP((*(int *)(param_1 + 8) - 8))) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *((int *)GEN_TOP((*(int *)(param_1 + 8) - 0x10)));
  }
  iVar1 = piVar2[2];
  if (iVar1 == 5) {
    *(int *)(*piVar2 + 8) = iVar3;
    if (((iVar3 != 0) && ((*(byte *)(iVar3 + 5) & 3) != 0)) && ((*(byte *)(*piVar2 + 5) & 4) != 0))
    {
      F_00c01940(param_1,*piVar2);
    }
  }
  else {
    if (iVar1 != 7) {
      *((int *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x98 + iVar1 * 4))) = iVar3;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) - 0x10;
      return 1;
    }
    *(int *)(*piVar2 + 8) = iVar3;
    if (((iVar3 != 0) && ((*(byte *)(iVar3 + 5) & 3) != 0)) && ((*(byte *)(*piVar2 + 5) & 4) != 0))
    {
      F_00c01900(param_1,*piVar2,iVar3);
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) - 0x10;
      return 1;
    }
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) - 0x10;
  return 1;
}

/* ref: FUN_00b9b480 */
GEN_NOFRAME uint F_00b9b480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9b480u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int iVar1;
  int * piVar2;
  
  piVar2 = (int *)F_00b9a540(param_2,param_1);
  iVar1 = piVar2[2];
  if (iVar1 == 6) {
    *(undefined4 *)(*piVar2 + 0xc) = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 8) - 0x10)));
  }
  else if (iVar1 == 7) {
    *(undefined4 *)(*piVar2 + 0xc) = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 8) - 0x10)));
  }
  else {
    if (iVar1 != 8) {
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) - 0x10;
      return 0;
    }
    iVar1 = *piVar2;
    *(undefined4 *)(iVar1 + 0x48) = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 8) - 0x10)));
    *(undefined4 *)(iVar1 + 0x50) = 5;
  }
  iVar1 = *((int *)GEN_TOP((*(int *)(param_1 + 8) - 0x10)));
  if (((*(byte *)(iVar1 + 5) & 3) != 0) && ((*(byte *)(*piVar2 + 5) & 4) != 0)) {
    F_00c01900(param_1,*piVar2,iVar1);
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) - 0x10;
  return 1;
}

/* ref: FUN_00b9b510 */
GEN_NOFRAME uint F_00b9b510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9b510u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = F_00bb9600(param_1,*(int *)(param_1 + 8) + (param_2 + 1) * -0x10,param_3);
  if (param_3 == -1) {
    uVar1 = *(uint *)(param_1 + 0x14);
    if (*(uint *)(uVar1 + 8) <= *(uint *)(param_1 + 8)) {
      *(uint *)(uVar1 + 8) = *(uint *)(param_1 + 8);
    }
  }
  return uVar1;
}

/* ref: FUN_00b9b550 */
GEN_NOFRAME uint F_00b9b550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9b550u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00bb9600(param_1,*param_2,param_2[1]);
  return uVar1;
}

/* ref: FUN_00b9b570 */
GEN_NOFRAME uint F_00b9b570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb9b570u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (param_4 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = F_00b9a540(param_4,param_1);
    iVar3 = uVar2 - *(int *)(param_1 + 0x20);
  }
  iVar1 = *(int *)(param_1 + 8) + (param_2 + 1) * -0x10;
  (*(int *)(gen_frame + 0x8)) = iVar1;
  (*(int *)(gen_frame + 0xc)) = param_3;
  uVar2 = F_00bb97b0(param_1,((code *)REFP(0xb9b550)),&(*(int *)(gen_frame + 0x8)),iVar1 - *(int *)(param_1 + 0x20),iVar3);
  if (param_3 == -1) {
    if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x14) + 8))) <= *(uint *)(param_1 + 8)) {
      *((uint *)GEN_TOP((*(int *)(param_1 + 0x14) + 8))) = *(uint *)(param_1 + 8);
    }
  }
  return uVar2;
}

/* ref: FUN_00b9b5e0 */
GEN_NOFRAME uint F_00b9b5e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9b5e0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint * puVar1;
  undefined4 * puVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 0x14) == *(int *)(param_1 + 0x28)) {
    uVar3 = *(undefined4 *)(param_1 + 0x48);
  }
  else {
    uVar3 = *((undefined4 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x14) + 4))) + 0xc)));
  }
  uVar4 = F_00c05bd0(param_1,0,uVar3);
  *(undefined4 *)(uVar4 + 0x10) = *param_2;
  puVar1 = *(uint * PTR32 *)(param_1 + 8);
  *puVar1 = uVar4;
  puVar1[2] = 6;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
  puVar2 = *(undefined4 * PTR32 *)(param_1 + 8);
  *puVar2 = param_2[1];
  puVar2[2] = 2;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
  uVar4 = F_00bb9600(param_1,*(int *)(param_1 + 8) - 0x20,0);
  return uVar4;
}

/* ref: FUN_00b9b650 */
GEN_NOFRAME uint F_00b9b650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9b650u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x8)) = param_2;
  (*(undefined4 *)(gen_frame + 0xc)) = param_3;
  uVar1 = F_00bb97b0(param_1,((code *)REFP(0xb9b5e0)),&(*(undefined4 *)(gen_frame + 0x8)),
                       *(int *)(param_1 + 8) - *(int *)(param_1 + 0x20),0);
  return uVar1;
}

/* ref: FUN_00b9b690 */
GEN_NOFRAME uint F_00b9b690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb9b690u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined * puVar2;
  
  puVar2 = param_4;
  if (param_4 == (undefined *)0x0) {
    puVar2 = &REFG(undefined, 0x13405c8);
  }
  F_00c06080(param_1,((undefined1 *)(gen_frame + 0xc)),param_2,param_3);
  uVar1 = F_00bb98b0(param_1,((undefined1 *)(gen_frame + 0xc)),puVar2);
  return uVar1;
}

/* ref: FUN_00b9b6d0 */
GEN_NOFRAME uint F_00b9b6d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9b6d0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  piVar3 = ((int *)GEN_TOP((*(int *)(param_1 + 8) - 0x10)));
  if ((*((int *)GEN_TOP((*(int *)(param_1 + 8) - 8))) == 6) && (*(char *)(*piVar3 + 6) == '\0')) {
    bVar1 = F_00c07300();
    uVar2 = F_00c06800(param_1,*(undefined4 *)(*piVar3 + 0x10),param_2,param_3,0,(uint)bVar1);
    return uVar2;
  }
  return 1;
}

/* ref: FUN_00b9b720 */
GEN_NOFRAME uint F_00b9b720(unsigned int gen_a0)
{
  GEN_ENTER(0xb9b720u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (uint)*(byte *)(param_1 + 6);
}

/* ref: FUN_00b9b730 */
GEN_NOFRAME uint F_00b9b730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9b730u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  uVar3 = 0;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    *(undefined4 *)(iVar1 + 0x40) = 0xfffffffd;
    return 0;
  case 1: ;
    *(undefined4 *)(iVar1 + 0x40) = *(undefined4 *)(iVar1 + 0x44);
    return 0;
  case 2: ;
    F_00c01890(param_1);
    return 0;
  case 3: ;
    return *(uint *)(iVar1 + 0x44) >> 10;
  case 4: ;
    return *(uint *)(iVar1 + 0x44) & 0x3ff;
  case 5: ;
    uVar2 = *(uint *)(iVar1 + 0x44);
    if (uVar2 < (uint)(param_3 * 0x400)) {
      *(undefined4 *)(iVar1 + 0x40) = 0;
    }
    else {
      *(uint *)(iVar1 + 0x40) = uVar2 + param_3 * -0x400;
    }
    if (*(uint *)(iVar1 + 0x40) <= uVar2) {
      do {
        F_00c01810(param_1);
        if (*(char *)(iVar1 + 0x15) == '\0') {
          return 1;
        }
      } while (*(uint *)(iVar1 + 0x40) <= *(uint *)(iVar1 + 0x44));
      return 0;
    }
    break;
  case 6: ;
    uVar3 = *(uint *)(iVar1 + 0x50);
    *(int *)(iVar1 + 0x50) = param_3;
    return uVar3;
  case 7: ;
    uVar3 = *(uint *)(iVar1 + 0x54);
    *(int *)(iVar1 + 0x54) = param_3;
    return uVar3;
  default: ;
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

/* ref: FUN_00b9b830 */
GEN_NOFRAME uint F_00b9b830(unsigned int gen_a0)
{
  GEN_ENTER(0xb9b830u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  F_00c026b0(param_1);
  return 0;
}

/* ref: FUN_00b9b840 */
GEN_NOFRAME uint F_00b9b840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9b840u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)F_00b9a540(param_2,param_1);
  uVar2 = F_00c04c10(param_1,*puVar1,*(int *)(param_1 + 8) - 0x10);
  if (uVar2 != 0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
    return uVar2;
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) - 0x10;
  return 0;
}

/* ref: FUN_00b9b880 */
GEN_NOFRAME unsigned int F_00b9b880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9b880u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  if (1 < param_2) {
    if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x40))) <= *((uint *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x44)))) {
      F_00c01810(param_1);
    }
    F_00c03460(param_1,param_2,(*(int *)(param_1 + 8) - *(int *)(param_1 + 0xc) >> 4) - 1);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_2 * -0x10 + 0x10;
    return;
  }
  if (param_2 == 0) {
    puVar1 = *(uint * PTR32 *)(param_1 + 8);
    uVar2 = F_00c05a80(param_1,&REFG(undefined, 0x14c591c),0);
    *puVar1 = uVar2;
    puVar1[2] = 4;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
  }
  return;
}

/* ref: FUN_00b9b950 */
GEN_NOFRAME uint F_00b9b950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9b950u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint * puVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x40))) <= *((uint *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x44)))) {
    F_00c01810(param_1);
  }
  if (*(int *)(param_1 + 0x14) == *(int *)(param_1 + 0x28)) {
    uVar2 = *(undefined4 *)(param_1 + 0x48);
  }
  else {
    uVar2 = *((undefined4 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x14) + 4))) + 0xc)));
  }
  uVar3 = F_00c05b70(param_1,param_2,uVar2);
  puVar1 = *(uint * PTR32 *)(param_1 + 8);
  *puVar1 = uVar3;
  puVar1[2] = 7;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
  return uVar3 + 0x18;
}

/* ref: FUN_00b9ba00 */
GEN_NOFRAME uint F_00b9ba00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9ba00u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  undefined * puVar4;
  undefined4 * puVar5;
  
  piVar3 = (int *)F_00b9a540(param_2,param_1);
  if (piVar3[2] != 6) {
    return 0;
  }
  iVar1 = *piVar3;
  if (*(char *)(iVar1 + 6) == '\0') {
    if (param_3 < 1) {
      return 0;
    }
    if (*((int *)GEN_TOP((*(int *)(iVar1 + 0x10) + 0x24))) < param_3) {
      return 0;
    }
    puVar5 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(iVar1 + 0x10 + param_3 * 4) + 8)));
    puVar4 = ((undefined *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar1 + 0x10) + 0x1c))) - 4 + param_3 * 4))) + 0x10)));
    if (puVar4 == (undefined *)0x0) {
      return 0;
    }
  }
  else {
    if ((param_3 < 1) || ((int)(uint)*(byte *)(iVar1 + 7) < param_3)) {
      return 0;
    }
    puVar5 = (undefined4 *)(param_3 * 0x10 + 8 + iVar1);
    puVar4 = &REFG(undefined, 0x14c591d);
  }
  puVar2 = *(undefined4 * PTR32 *)(param_1 + 8);
  *puVar2 = *puVar5;
  puVar2[1] = puVar5[1];
  puVar2[2] = puVar5[2];
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
  return (uint)puVar4;
}

/* ref: FUN_00b9ba90 */
GEN_NOFRAME uint F_00b9ba90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9ba90u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  undefined4 * puVar4;
  undefined * puVar5;
  
  piVar3 = (int *)F_00b9a540(param_2,param_1);
  if (piVar3[2] != 6) {
    return 0;
  }
  iVar1 = *piVar3;
  if (*(char *)(iVar1 + 6) == '\0') {
    if (param_3 < 1) {
      return 0;
    }
    if (*((int *)GEN_TOP((*(int *)(iVar1 + 0x10) + 0x24))) < param_3) {
      return 0;
    }
    puVar4 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(iVar1 + 0x10 + param_3 * 4) + 8)));
    puVar5 = ((undefined *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar1 + 0x10) + 0x1c))) - 4 + param_3 * 4))) + 0x10)));
    if (puVar5 == (undefined *)0x0) {
      return 0;
    }
  }
  else {
    if ((param_3 < 1) || ((int)(uint)*(byte *)(iVar1 + 7) < param_3)) {
      return 0;
    }
    puVar4 = (undefined4 *)(param_3 * 0x10 + 8 + iVar1);
    puVar5 = &REFG(undefined, 0x14c591d);
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) - 0x10;
  puVar2 = *(undefined4 * PTR32 *)(param_1 + 8);
  *puVar4 = *puVar2;
  puVar4[1] = puVar2[1];
  puVar4[2] = puVar2[2];
  if (((3 < (*(int * PTR32 *)(param_1 + 8))[2]) &&
      (iVar1 = **(int * PTR32 *)(param_1 + 8), (*(byte *)(iVar1 + 5) & 3) != 0)) &&
     ((*(byte *)(*piVar3 + 5) & 4) != 0)) {
    F_00c01900(param_1,*piVar3,iVar1);
  }
  return (uint)puVar5;
}

/* ref: FUN_00b9bb40 */
GEN_NOFRAME uint F_00b9bb40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9bb40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)((byte *)(gen_frame + 0x8));
  uVar1 = F_00c01ae0(param_1,param_2,((byte *)(gen_frame + 0x8)));
  if (uVar1 != 0) {
    F_00c028c0(param_1,&REFG(undefined, 0x1340648),((byte *)(gen_frame + 0x8)));
    if (0 < (int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 20))) {
      uVar1 = F_00b9af00(param_1,((char *)REFP(0x134064c)),((undefined1 *)(gen_frame + 0x2c)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 20)));
      F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)((byte *)(gen_frame + 0x8)) GEN_EDX_ARG);
      return uVar1;
    }
  }
  uVar1 = F_00b9ae20(param_1,&REFG(undefined, 0x14c591e),0);
  F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)((byte *)(gen_frame + 0x8)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00b9bbd0 */
GEN_NOFRAME uint F_00b9bbd0(unsigned int gen_a0, unsigned int gen_a1, ...)
{
  GEN_ENTER(0xb9bbd0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[34];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  { va_list gen_va; va_start(gen_va, gen_a1);
    for (int gen_i = 2; gen_i < 34; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  F_00b9bb40(param_1,1);
  F_00b9aed0(param_1,param_2,((undefined *)&gen_args[2]));
  F_00b9b880(param_1,2);
  uVar1 = F_00b9b830(param_1);
  return uVar1;
}

/* ref: FUN_00b9bc00 */
GEN_NOFRAME uint F_00b9bc00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9bc00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  F_00b9b070(param_1,0xffffd8f0,param_2);
  uVar1 = F_00b9a940(param_1,0xffffffff);
  if (uVar1 != 0) {
    return 0;
  }
  F_00b9a760(param_1,0xfffffffe);
  F_00b9b150(param_1,0,0);
  F_00b9a910(param_1,0xffffffff);
  F_00b9b290(param_1,0xffffd8f0,param_2);
  return 1;
}

/* ref: FUN_00b9bc60 */
GEN_NOFRAME uint F_00b9bc60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9bc60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00b9a610(param_1,param_2);
  if (uVar1 == 0) {
    uVar1 = F_00b9bbd0(param_1,((char *)REFP(0x1340668)),param_3);
  }
  return uVar1;
}

/* ref: FUN_00b9bc90 */
GEN_NOFRAME uint F_00b9bc90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9bc90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00b9b190(param_1,param_2);
  if (uVar1 != 0) {
    F_00b9ae60(param_1,param_3);
    F_00b9b0d0(param_1,0xfffffffe);
    uVar1 = F_00b9a940(param_1,0xffffffff);
    if (uVar1 != 0) {
      F_00b9a7b0(param_1,0xfffffffe);
      return 1;
    }
    F_00b9a760(param_1,0xfffffffd);
  }
  return 0;
}

/* ref: FUN_00b9bcf0 */
GEN_NOFRAME uint F_00b9bcf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9bcf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  int iVar2;
  
  iVar2 = param_2;
  if (param_2 + 9999U < 10000) {
    uVar1 = F_00b9a750(param_1);
    iVar2 = param_2 + 1 + uVar1;
  }
  uVar1 = F_00b9bc90(param_1,iVar2,param_3);
  if (uVar1 == 0) {
    return 0;
  }
  F_00b9a910(param_1,iVar2);
  F_00b9b510(param_1,1,1);
  return 1;
}

/* ref: FUN_00b9bd60 */
GEN_NOFRAME uint F_00b9bd60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb9bd60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  char * param_3 = (char *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  char * pcVar1;
  char * pcVar2;
  uint uVar3;
  undefined4 uVar4;
  char * pcVar5;
  
  F_00b9a910(param_1,param_2);
  pcVar5 = param_3;
  do {
    pcVar2 = (char *)F_00c51da0(pcVar5,0x2e);
    pcVar1 = pcVar5;
    if (pcVar2 == (char *)0x0) {
      do {
        pcVar2 = pcVar1;
        pcVar1 = pcVar2 + 1;
      } while (*pcVar2 != '\0');
    }
    F_00b9ae20(param_1,pcVar5,(int)pcVar2 - (int)pcVar5);
    F_00b9b0d0(param_1,0xfffffffe);
    uVar3 = F_00b9a940(param_1,0xffffffff);
    if (uVar3 == 0) {
      F_00b9a760(param_1,0xfffffffe);
      uVar4 = 1;
      if (*pcVar2 != '.') {
        uVar4 = param_4;
      }
      F_00b9b150(param_1,0,uVar4);
      F_00b9ae20(param_1,pcVar5,(int)pcVar2 - (int)pcVar5);
      F_00b9a910(param_1,0xfffffffe);
      F_00b9b260(param_1,0xfffffffc);
    }
    else {
      uVar3 = F_00b9a940(param_1,0xffffffff);
      if (uVar3 != 5) {
        F_00b9a760(param_1,0xfffffffd);
        return (uint)pcVar5;
      }
    }
    F_00b9a7b0(param_1,0xfffffffe);
    pcVar5 = pcVar2 + 1;
  } while (*pcVar2 == '.');
  return 0;
}

/* ref: FUN_00b9be80 */
GEN_NOFRAME uint F_00b9be80(unsigned int gen_a0)
{
  GEN_ENTER(0xb9be80u, gen_a0, 0u, 0u, 0u);
  int * piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint in_EAX = 0;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar4 = (*(uint *)&gen_a0);
  iVar6 = 1;
  if (1 < *(int *)((*(uint *)&gen_a0) + 4)) {
    uVar2 = *(undefined4 *)((*(uint *)&gen_a0) + 8);
    (*(uint *)&gen_a0) = F_00b9ac60(uVar2,0xffffffff);
    iVar7 = -2;
    do {
      uVar5 = F_00b9ac60(uVar2,iVar7);
      iVar3 = *(int *)(iVar4 + 4);
      if (((iVar3 - iVar6) + 1 < 10) && ((*(uint *)&gen_a0) <= uVar5)) break;
      (*(uint *)&gen_a0) = (*(uint *)&gen_a0) + uVar5;
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 - 1;
    } while (iVar6 < iVar3);
    F_00b9b880(uVar2,iVar6);
    in_EAX = 1 - iVar6;
    piVar1 = (int *)(iVar4 + 4);
    *piVar1 = *piVar1 + in_EAX;
  }
  return in_EAX;
}

/* ref: FUN_00b9bef0 */
GEN_NOFRAME uint F_00b9bef0(unsigned int gen_a0)
{
  GEN_ENTER(0xb9bef0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = (*param_1 - (int)param_1) - 0xc;
  if (iVar1 != 0) {
    F_00b9ae20(param_1[2],param_1 + 3,iVar1);
    param_1[1] = param_1[1] + 1;
    *param_1 = (int)(param_1 + 3);
    F_00b9be80(param_1);
  }
  return (uint)(param_1 + 3);
}

/* ref: FUN_00b9bf30 */
GEN_NOFRAME uint F_00b9bf30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9bf30u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int * in_EAX = 0;
  int iVar1;
  int iVar2;
  undefined1 * puVar3;
  
  puVar3 = param_2;
  iVar2 = param_3;
  while (iVar2 != 0) {
    in_EAX = (int *)*param_1;
    iVar2 = iVar2 - 1;
    if (param_1 + 0x83 <= in_EAX) {
      iVar1 = (int)in_EAX + (-0xc - (int)param_1);
      in_EAX = (int *)0x0;
      if (iVar1 != 0) {
        F_00b9ae20(param_1[2],param_1 + 3,iVar1);
        param_1[1] = param_1[1] + 1;
        *param_1 = (int)(param_1 + 3);
        in_EAX = (int *)F_00b9be80(param_1);
      }
    }
    *(undefined1 *)*param_1 = *puVar3;
    *param_1 = *param_1 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)in_EAX;
}

/* ref: FUN_00b9bfc0 */
GEN_NOFRAME unsigned int F_00b9bfc0(unsigned int gen_a0)
{
  GEN_ENTER(0xb9bfc0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = (*param_1 - (int)param_1) - 0xc;
  if (iVar1 != 0) {
    F_00b9ae20(param_1[2],param_1 + 3,iVar1);
    param_1[1] = param_1[1] + 1;
    *param_1 = (int)(param_1 + 3);
  }
  F_00b9b880(param_1[2],param_1[1]);
  param_1[1] = 1;
  return;
}

/* ref: FUN_00b9c000 */
GEN_NOFRAME uint F_00b9c000(unsigned int gen_a0)
{
  GEN_ENTER(0xb9c000u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int iVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  iVar1 = (*(int * PTR32 *)&gen_args[0])[2];
  uVar3 = F_00b9abf0(iVar1,0xffffffff,&(*(int * PTR32 *)&gen_args[0]));
  iVar4 = *piVar2;
  if ((*(int * PTR32 *)&gen_args[0]) <= ((int *)GEN_TOP(((int)piVar2 + (0x20c - iVar4))))) {
    F_00c46aa0(iVar4,uVar3,(*(int * PTR32 *)&gen_args[0]));
    *piVar2 = *piVar2 + (int)(*(int * PTR32 *)&gen_args[0]);
    uVar3 = F_00b9a760(iVar1,0xfffffffe);
    return uVar3;
  }
  iVar4 = (iVar4 - (int)piVar2) - 0xc;
  if (iVar4 != 0) {
    F_00b9ae20(piVar2[2],piVar2 + 3,iVar4);
    piVar2[1] = piVar2[1] + 1;
    *piVar2 = (int)(piVar2 + 3);
    F_00b9a800(iVar1,0xfffffffe);
  }
  piVar2[1] = piVar2[1] + 1;
  uVar3 = F_00b9be80(piVar2);
  return uVar3;
}

/* ref: FUN_00b9c080 */
GEN_NOFRAME uint F_00b9c080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9c080u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  param_2[2] = param_1;
  *param_2 = (int)(param_2 + 3);
  param_2[1] = 0;
  return (uint)param_2;
}

/* ref: FUN_00b9c1b0 */
GEN_NOFRAME uint F_00b9c1b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9c1b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  gen_size32 * param_3 = (gen_size32 *)(uintptr_t)gen_a2;
  int iVar1;
  gen_size32 sVar2;
  
  if (*param_2 != 0) {
    *param_2 = 0;
    *param_3 = 1;
    return 0x13406b4;
  }
  iVar1 = F_00c48a9f((undefined *)param_2[1]);
  if (iVar1 != 0) {
    return 0;
  }
  sVar2 = F_00c48f5e(param_2 + 2,1,0x200,(undefined *)param_2[1]);
  *param_3 = sVar2;
  return -(uint)(sVar2 != 0) & (uint)(param_2 + 2);
}

/* ref: FUN_00b9c210 */
GEN_NOFRAME uint F_00b9c210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9c210u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 in_esi = (undefined4)gen_a0;
  undefined4 in_edi = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  piVar1 = F_00c51f85();
  uVar2 = F_00c51e86(*piVar1);
  uVar3 = F_00b9abf0(in_esi,in_edi,0);
  F_00b9af00(in_esi,((char *)REFP(0x13406b8)),param_3,uVar3 + 1,uVar2);
  F_00b9a7b0(in_esi,in_edi);
  return 6;
}

/* ref: FUN_00b9c250 */
GEN_NOFRAME uint F_00b9c250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9c250u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  uint uVar1;
  int iVar2;
  undefined * pFVar3;
  int * piVar4;
  uint uVar5;
  int in_edi;
  
  (*(uint *)(gen_frame + 0x20c)) = REFG(undefined4, 0x134ab78) ^ (uint)((int *)(gen_frame + 0x0));
  uVar1 = F_00b9a750(param_1);
  in_edi = uVar1 + 1;
  ((int *)(gen_frame + 0x0))[1] = 0;
  if (param_2 == (char *)0x0) {
    F_00b9ae20(param_1,((char *)REFP(0x13406cc)),6);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)F_00c50860();
  }
  else {
    F_00b9af00(param_1,&REFG(undefined, 0x13406d4),param_2);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = F_00c495d8(param_2,&REFG(undefined, 0x13406d8));
    if ((*(undefined * PTR32 *)(gen_frame + 0x8)) == (undefined *)0x0) {
      piVar4 = F_00c51f85();
      uVar1 = F_00c51e86(*piVar4);
      uVar5 = F_00b9abf0(param_1,in_edi,0);
      F_00b9af00(param_1,((char *)REFP(0x13406b8)),&REFG(undefined, 0x13406dc),uVar5 + 1,uVar1);
      F_00b9a7b0(param_1,in_edi);
      uVar1 = 6;
      goto LAB_00b9c44e;
    }
  }
  iVar2 = F_00c48be3((*(undefined * PTR32 *)(gen_frame + 0x8)));
  if (iVar2 == 0x23) {
    ((int *)(gen_frame + 0x0))[1] = 1;
    do {
      iVar2 = F_00c48be3((*(undefined * PTR32 *)(gen_frame + 0x8)));
      if (iVar2 == -1) goto LAB_00b9c2e4;
    } while (iVar2 != 10);
    iVar2 = F_00c48be3((*(undefined * PTR32 *)(gen_frame + 0x8)));
  }
LAB_00b9c2e4: ;
  if ((iVar2 == REFG(char, 0x13406e4)) && (param_2 != (char *)0x0)) {
    pFVar3 = F_00c5212b(param_2,&REFG(undefined, 0x13406ec),(*(undefined * PTR32 *)(gen_frame + 0x8)));
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = pFVar3;
    if (pFVar3 == (undefined *)0x0) {
      uVar1 = F_00b9c210(param_1,in_edi,((char *)REFP(0x13406f0)));
      goto LAB_00b9c44e;
    }
    do {
      iVar2 = F_00c48be3((*(undefined * PTR32 *)(gen_frame + 0x8)));
      if (iVar2 == -1) break;
    } while (iVar2 != REFG(char, 0x13406f8));
    ((int *)(gen_frame + 0x0))[1] = 0;
  }
  F_00c50cf0(iVar2,(*(undefined * PTR32 *)(gen_frame + 0x8)));
  uVar1 = F_00b9abf0(param_1,0xffffffff,0);
  uVar1 = F_00b9b690(param_1,((code *)REFP(0xb9c1b0)),((int *)(gen_frame + 0x0)) + 1,uVar1);
  iVar2 = F_00c48ac7((*(undefined * PTR32 *)(gen_frame + 0x8)));
  ((int *)(gen_frame + 0x0))[0] = iVar2;
  if (param_2 != (char *)0x0) {
    F_00c49312((*(undefined * PTR32 *)(gen_frame + 0x8)));
  }
  if (((int *)(gen_frame + 0x0))[0] == 0) {
    F_00b9a7b0(param_1,in_edi);
  }
  else {
    F_00b9a760(param_1,in_edi);
    piVar4 = F_00c51f85();
    uVar1 = F_00c51e86(*piVar4);
    uVar5 = F_00b9abf0(param_1,in_edi,0);
    F_00b9af00(param_1,((char *)REFP(0x13406b8)),&REFG(undefined, 0x1340700),uVar5 + 1,uVar1);
    F_00b9a7b0(param_1,in_edi);
    uVar1 = 6;
  }
LAB_00b9c44e: ;
  F_00c47745((*(uint *)(gen_frame + 0x20c)) ^ (uint)((int *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00b9c470 */
GEN_NOFRAME uint F_00b9c470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9c470u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  if (param_2[1] == 0) {
    return 0;
  }
  *param_3 = param_2[1];
  param_2[1] = 0;
  return *param_2;
}

/* ref: FUN_00b9c490 */
GEN_NOFRAME uint F_00b9c490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb9c490u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x8)) = param_2;
  (*(undefined4 *)(gen_frame + 0xc)) = param_3;
  uVar1 = F_00b9b690(param_1,((code *)REFP(0xb9c470)),&(*(undefined4 *)(gen_frame + 0x8)),param_4);
  return uVar1;
}

/* ref: FUN_00b9c500 */
GEN_NOFRAME uint F_00b9c500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb9c500u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int param_4 = (int)gen_a3;
  undefined * pvVar1;
  
  if (param_4 == 0) {
    F_00c4c68f(param_2);
    return 0;
  }
  pvVar1 = F_00c52171(param_2,param_4);
  return (uint)pvVar1;
}

/* ref: FUN_00b9c530 */
GEN_NOFRAME uint F_00b9c530(unsigned int gen_a0)
{
  GEN_ENTER(0xb9c530u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  uint uVar2;
  char * pcVar3;
  
  uVar1 = F_00b9abf0(param_1,0xffffffff,0);
  pcVar3 = ((char *)REFP(0x1340708));
  uVar2 = F_00c50860();
  F_00c49386(uVar2 + 0x40,pcVar3,uVar1);
  return 0;
}

/* ref: FUN_00b9c590 */
GEN_NOFRAME uint F_00b9c590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9c590u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  byte bVar1;
  uint uVar2;
  byte * pbVar3;
  int iVar4;
  char * pcVar5;
  bool bVar6;
  
  (*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)((byte *)(gen_frame + 0x8));
  uVar2 = F_00c01ae0(param_1,0,((byte *)(gen_frame + 0x8)));
  if (uVar2 == 0) {
    uVar2 = F_00b9bbd0(param_1,((char *)REFP(0x13405cc)),param_2,param_3);
    F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)((byte *)(gen_frame + 0x8)) GEN_EDX_ARG);
    return uVar2;
  }
  F_00c028c0(param_1,&REFG(undefined, 0x13405e4),((byte *)(gen_frame + 0x8)));
  pcVar5 = ((char *)REFP(0x13405e8));
  pbVar3 = (byte *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8));
  do {
    bVar1 = *pbVar3;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_00b9c620: ;
      iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00b9c625;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_00b9c620;
    pbVar3 = pbVar3 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_00b9c625: ;
  if (iVar4 == 0) {
    param_2 = param_2 - 1;
    if (param_2 == 0) {
      uVar2 = F_00b9bbd0(param_1,((char *)REFP(0x13405f0)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4)),param_3);
      F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)((byte *)(gen_frame + 0x8)) GEN_EDX_ARG);
      return uVar2;
    }
  }
  if ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4)) == 0) {
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4)) = &REFG(undefined, 0x1340610);
  }
  uVar2 = F_00b9bbd0(param_1,((char *)REFP(0x1340614)),param_2,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4)),param_3
                      );
  F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)((byte *)(gen_frame + 0x8)) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00b9c710 */
GEN_NOFRAME uint F_00b9c710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9c710u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00b9ad00(param_1,param_2);
  if (uVar1 != 0) {
    uVar2 = F_00b9b190(param_1,param_2);
    if (uVar2 != 0) {
      F_00b9b070(param_1,0xffffd8f0,param_3);
      uVar2 = F_00b9aa50(param_1,0xffffffff,0xfffffffe);
      if (uVar2 != 0) {
        F_00b9a760(param_1,0xfffffffd);
        return uVar1;
      }
    }
  }
  uVar1 = F_00b9a940(param_1,param_2);
  uVar1 = F_00b9a960(param_1,uVar1);
  uVar1 = F_00b9af00(param_1,((char *)REFP(0x1340634)),param_3,uVar1);
  F_00b9c590(param_1,param_2,uVar1);
  return 0;
}

/* ref: FUN_00b9c7a0 */
GEN_NOFRAME uint F_00b9c7a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9c7a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00b9a940(param_1,param_2);
  if (uVar1 != param_3) {
    uVar1 = F_00b9a960(param_1,param_3);
    uVar2 = F_00b9a940(param_1,param_2);
    uVar2 = F_00b9a960(param_1,uVar2);
    uVar1 = F_00b9af00(param_1,((char *)REFP(0x1340634)),uVar1,uVar2);
    uVar1 = F_00b9c590(param_1,param_2,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00b9c7f0 */
GEN_NOFRAME uint F_00b9c7f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9c7f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b9a940(param_1,param_2);
  if (uVar1 == 0xffffffff) {
    uVar1 = F_00b9c590(param_1,param_2,((char *)REFP(0x134067c)));
  }
  return uVar1;
}

/* ref: FUN_00b9c820 */
GEN_NOFRAME uint F_00b9c820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9c820u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = F_00b9abf0(param_1,param_2,param_3);
  if (uVar1 == 0) {
    uVar2 = F_00b9a960(param_1,4);
    uVar3 = F_00b9a940(param_1,param_2);
    uVar3 = F_00b9a960(param_1,uVar3);
    uVar2 = F_00b9af00(param_1,((char *)REFP(0x1340634)),uVar2,uVar3);
    F_00b9c590(param_1,param_2,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00b9c880 */
GEN_NOFRAME uint F_00b9c880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb9c880u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  char * param_3 = (char *)(uintptr_t)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  char cVar1;
  uint uVar2;
  char * pcVar3;
  
  uVar2 = F_00b9a940(param_1,param_2);
  if ((int)uVar2 < 1) {
    pcVar3 = param_3;
    if (param_4 != (int *)0x0) {
      if (param_3 != (char *)0x0) {
        do {
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
        *param_4 = (int)pcVar3 - (int)(param_3 + 1);
        return (uint)param_3;
      }
      *param_4 = 0;
      return (uint)param_3;
    }
  }
  else {
    pcVar3 = (char *)F_00b9c820(param_1,param_2,param_4);
  }
  return (uint)pcVar3;
}

/* ref: FUN_00b9c8e0 */
GEN_NOFRAME float F_00b9c8e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9c8e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  double dVar3;
  
  dVar3 = F_00b9ab30(param_1,param_2);
  if ((GEN_ISNAN(dVar3) != (GEN_ISNAN(dVar3) || dVar3 == 0.0)) &&
     (uVar1 = F_00b9a9b0(param_1,param_2), uVar1 == 0)) {
    uVar1 = F_00b9a960(param_1,3);
    uVar2 = F_00b9a940(param_1,param_2);
    uVar2 = F_00b9a960(param_1,uVar2);
    uVar1 = F_00b9af00(param_1,((char *)REFP(0x1340634)),uVar1,uVar2);
    F_00b9c590(param_1,param_2,uVar1);
  }
  return (float)dVar3;
}

/* ref: FUN_00b9c960 */
GEN_NOFRAME float10 F_00b9c960(unsigned int gen_a0, unsigned int gen_a1, double gen_a2)
{
  GEN_ENTER(0xb9c960u, gen_a0, gen_a1, (unsigned int)gen_trace_d(gen_a2), (unsigned int)(gen_trace_d(gen_a2) >> 32));
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  double param_3 = (double)gen_a2;
  uint uVar1;
  float fVar2;
  
  uVar1 = F_00b9a940(param_1,param_2);
  if ((int)uVar1 < 1) {
    return (float10)param_3;
  }
  fVar2 = F_00b9c8e0(param_1,param_2);
  return (float10)fVar2;
}

/* ref: FUN_00b9c9b0 */
GEN_NOFRAME uint F_00b9c9b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9c9b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = F_00b9ab70(param_1,param_2);
  if ((uVar1 == 0) && (uVar2 = F_00b9a9b0(param_1,param_2), uVar2 == 0)) {
    uVar2 = F_00b9a960(param_1,3);
    uVar3 = F_00b9a940(param_1,param_2);
    uVar3 = F_00b9a960(param_1,uVar3);
    uVar2 = F_00b9af00(param_1,((char *)REFP(0x1340634)),uVar2,uVar3);
    F_00b9c590(param_1,param_2,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00b9ca20 */
GEN_NOFRAME uint F_00b9ca20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9ca20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  
  uVar1 = F_00b9a940(param_1,param_2);
  if ((int)uVar1 < 1) {
    return param_3;
  }
  uVar1 = F_00b9c9b0(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00b9ca50 */
GEN_NOFRAME uint F_00b9ca50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb9ca50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  uint uVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  
  if (param_2 != 0) {
    iVar2 = 0;
    iVar3 = *param_3;
    piVar4 = param_3;
    while (iVar3 != 0) {
      piVar4 = piVar4 + 2;
      iVar2 = iVar2 + 1;
      iVar3 = *piVar4;
    }
    F_00b9bd60(param_1,0xffffd8f0,((char *)REFP(0x134068c)),1);
    F_00b9b070(param_1,0xffffffff,param_2);
    uVar1 = F_00b9a940(param_1,0xffffffff);
    if (uVar1 != 5) {
      F_00b9a760(param_1,0xfffffffe);
      uVar1 = F_00b9bd60(param_1,0xffffd8ee,param_2,iVar2);
      if (uVar1 != 0) {
        F_00b9bbd0(param_1,((char *)REFP(0x1340694)),param_2);
      }
      F_00b9a910(param_1,0xffffffff);
      F_00b9b290(param_1,0xfffffffd,param_2);
    }
    F_00b9a7b0(param_1,0xfffffffe);
    F_00b9a800(param_1,-1 - param_4);
  }
  if (*param_3 != 0) {
    piVar4 = param_3;
    do {
      if (0 < param_4) {
        iVar3 = param_4;
        do {
          F_00b9a910(param_1,-param_4);
          iVar3 = iVar3 - 1;
        } while (iVar3 != 0);
      }
      F_00b9af30(param_1,piVar4[1],param_4);
      F_00b9b290(param_1,-2 - param_4,*piVar4);
      piVar4 = piVar4 + 2;
    } while (*piVar4 != 0);
  }
  uVar1 = F_00b9a760(param_1,-1 - param_4);
  return uVar1;
}

/* ref: FUN_00b9cb70 */
GEN_NOFRAME uint F_00b9cb70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb9cb70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  char * param_3 = (char *)(uintptr_t)gen_a2;
  char * param_4 = (char *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x220];
  char cVar1;
  char * pcVar2;
  char * pcVar3;
  int iVar4;
  uint uVar5;
  
  (*(uint *)(gen_frame + 0x21c)) = REFG(undefined4, 0x134ab78) ^ (uint)&(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined4 *)(gen_frame + 0x8)) = param_1;
  pcVar2 = param_3;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  (*(int *)(gen_frame + 0xc)) = (int)pcVar2 - (int)(param_3 + 1);
  (*(undefined4 *)(gen_frame + 0x18)) = param_1;
  (*(undefined1 * PTR32 *)(gen_frame + 0x10)) = ((undefined1 *)(gen_frame + 0x1c));
  (*(int *)(gen_frame + 0x14)) = 0;
  pcVar3 = F_00c46a10(param_2,param_3);
  pcVar2 = param_2;
  while (pcVar3 != (char *)0x0) {
    F_00b9bf30(&(*(undefined1 * PTR32 *)(gen_frame + 0x10)),pcVar2,(int)pcVar3 - (int)pcVar2);
    pcVar2 = param_4;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    F_00b9bf30(&(*(undefined1 * PTR32 *)(gen_frame + 0x10)),param_4,(int)pcVar2 - (int)(param_4 + 1));
    pcVar2 = pcVar3 + (*(int *)(gen_frame + 0xc));
    pcVar3 = F_00c46a10(pcVar2,param_3);
  }
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  F_00b9bf30(&(*(undefined1 * PTR32 *)(gen_frame + 0x10)),pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  iVar4 = (int)(*(undefined1 * PTR32 *)(gen_frame + 0x10)) - (int)((undefined1 *)(gen_frame + 0x1c));
  if (iVar4 != 0) {
    F_00b9ae20((*(undefined4 *)(gen_frame + 0x18)),((undefined1 *)(gen_frame + 0x1c)),iVar4);
    (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 1;
    (*(undefined1 * PTR32 *)(gen_frame + 0x10)) = ((undefined1 *)(gen_frame + 0x1c));
  }
  F_00b9b880((*(undefined4 *)(gen_frame + 0x18)),(*(int *)(gen_frame + 0x14)));
  (*(int *)(gen_frame + 0x14)) = 1;
  uVar5 = F_00b9abf0((*(undefined4 *)(gen_frame + 0x8)),0xffffffff,0);
  F_00c47745((*(uint *)(gen_frame + 0x21c)) ^ (uint)&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  return uVar5;
}

/* ref: FUN_00b9ccc0 */
GEN_NOFRAME uint F_00b9ccc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb9ccc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte * param_3 = (byte *)(uintptr_t)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  byte bVar1;
  uint uVar2;
  byte * pbVar3;
  byte * pbVar4;
  int iVar5;
  byte * pbVar6;
  bool bVar7;
  
  if ((param_3 == (byte *)0x0) ||
     (uVar2 = F_00b9a940(param_1,param_2), pbVar3 = param_3, 0 < (int)uVar2)) {
    pbVar3 = (byte *)F_00b9c820(param_1,param_2,0);
  }
  pbVar4 = (byte *)*param_4;
  uVar2 = 0;
  do {
    pbVar6 = pbVar3;
    if (pbVar4 == (byte *)0x0) {
      uVar2 = F_00b9af00(param_1,((char *)REFP(0x1340654)),pbVar3);
      uVar2 = F_00b9c590(param_1,param_2,uVar2);
      return uVar2;
    }
    do {
      bVar1 = *pbVar4;
      bVar7 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_00b9cd30: ;
        iVar5 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_00b9cd35;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar7 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_00b9cd30;
      pbVar4 = pbVar4 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_00b9cd35: ;
    if (iVar5 == 0) {
      return uVar2;
    }
    pbVar4 = (byte *)param_4[uVar2 + 1];
    uVar2 = uVar2 + 1;
  } while( true );
}

/* ref: FUN_00b9cd70 */
GEN_NOFRAME uint F_00b9cd70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9cd70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00b9ca50(param_1,param_2,param_3,0);
  return uVar1;
}

/* ref: FUN_00b9cdb0 */
GEN_FRAME float10 F_00b9cdb0(float gen_a0)
{
  GEN_ENTER(0xb9cdb0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: FUN_00b9cdd0 */
GEN_NOFRAME uint GEN_THISCALL F_00b9cdd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb9cdd0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  return in_ecx;
}

/* ref: FUN_00b9cde0 */
GEN_NOFRAME unsigned int F_00b9cde0(void)
{
  GEN_ENTER(0xb9cde0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00b9cdf0 */
GEN_FRAME uint GEN_STDCALL F_00b9cdf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9cdf0u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = 0;
  puVar1 = (uint *)F_00ab4280(param_1 & 0xff);
  if (puVar1 != (uint *)0x0) {
    if ((char)param_2 == '\0') {
      uVar2 = *puVar1;
    }
    else if ((char)param_2 == '\x01') {
      uVar2 = puVar1[1];
    }
    if ((char)param_3 != '\0') {
      return (uVar2 * 0x96) / 100;
    }
  }
  return uVar2;
}

/* ref: FUN_00b9ce40 */
GEN_FRAME uint GEN_STDCALL F_00b9ce40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9ce40u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  uVar1 = F_00ab4280(param_1 & 0xff);
  if (uVar1 != 0) {
    if ((char)param_2 == '\0') {
      uVar2 = *(uint *)(uVar1 + 0xc);
    }
    else if ((char)param_2 == '\x01') {
      uVar2 = *(uint *)(uVar1 + 0x10);
    }
    else if ((char)param_2 == '\x02') {
      uVar2 = *(uint *)(uVar1 + 8);
    }
    if ((char)param_3 != '\0') {
      return (uVar2 * 0x96) / 100;
    }
  }
  return uVar2;
}

/* ref: FUN_00b9cea0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00b9cea0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb9cea0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x4e0) = 0;
  return;
}

/* ref: FUN_00b9cec0 */
GEN_FRAME uint GEN_STDCALL F_00b9cec0(unsigned int gen_a0)
{
  GEN_ENTER(0xb9cec0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  char cVar1;
  undefined * this;
  int iVar2;
  undefined * this_00;
  undefined * this_01;
  char cVar3;
  int local_c;
  int local_8;
  
  this = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,0x7d5);
  if (this == (undefined *)0x0) {
    return 0;
  }
  cVar3 = '\0';
  local_8 = 0;
  local_c = 0;
  if (*(int *)((int)this + 0xc) < 1) {
    return 0;
  }
  iVar2 = 0;
  do {
    this_00 = (undefined *)F_00a37da0(this GEN_EDX_ARG,iVar2);
    if (this_00 == (undefined *)0x0) break;
    if (*(char *)((int)this_00 + 6) == '\0') {
      iVar2 = *(int *)((int)this_00 + 8);
    }
    else {
      this_01 = (undefined *)F_00a3a860(this_00 GEN_EDX_ARG);
      cVar1 = *(char *)((int)this_01 + 6);
      while (cVar1 == '\0') {
        this_01 = (undefined *)F_00a3a860(this_01 GEN_EDX_ARG);
        cVar1 = *(char *)((int)this_01 + 6);
      }
      iVar2 = *(int *)((int)this_01 + 8);
    }
    if (iVar2 == 0) break;
    if ((*(byte *)((int)this_00 + 0x14) & 1) != 0) {
      local_8 = local_8 + 1;
    }
    local_c = local_c + 1;
    cVar3 = cVar3 + '\x01';
    iVar2 = (int)cVar3;
  } while (iVar2 < *(int *)((int)this + 0xc));
  if (local_8 == 0) {
    return 0;
  }
  return (uint)(local_8 * param_1 * 0x32) / (uint)(local_c * 100);
}

/* ref: FUN_00b9cf90 */
GEN_FRAME uint GEN_STDCALL F_00b9cf90(unsigned int gen_a0)
{
  GEN_ENTER(0xb9cf90u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  char cVar1;
  undefined * this;
  int iVar2;
  undefined * this_00;
  undefined * this_01;
  char cVar3;
  int local_c;
  int local_8;
  
  this = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,0x7d5);
  if (this == (undefined *)0x0) {
    return 0;
  }
  cVar3 = '\0';
  local_8 = 0;
  local_c = 0;
  if (*(int *)((int)this + 0xc) < 1) {
    return 0;
  }
  iVar2 = 0;
  do {
    this_00 = (undefined *)F_00a37da0(this GEN_EDX_ARG,iVar2);
    if (this_00 == (undefined *)0x0) break;
    if (*(char *)((int)this_00 + 6) == '\0') {
      iVar2 = *(int *)((int)this_00 + 8);
    }
    else {
      this_01 = (undefined *)F_00a3a860(this_00 GEN_EDX_ARG);
      cVar1 = *(char *)((int)this_01 + 6);
      while (cVar1 == '\0') {
        this_01 = (undefined *)F_00a3a860(this_01 GEN_EDX_ARG);
        cVar1 = *(char *)((int)this_01 + 6);
      }
      iVar2 = *(int *)((int)this_01 + 8);
    }
    if (iVar2 == 0) break;
    if ((*(byte *)((int)this_00 + 0x14) & 1) != 0) {
      local_8 = local_8 + 1;
    }
    local_c = local_c + 1;
    cVar3 = cVar3 + '\x01';
    iVar2 = (int)cVar3;
  } while (iVar2 < *(int *)((int)this + 0xc));
  if (local_8 == 0) {
    return 0;
  }
  return (uint)(local_8 * param_1 * 0x32) / (uint)(local_c * 100);
}

/* ref: FUN_00b9d060 */
GEN_FRAME uint GEN_STDCALL F_00b9d060(unsigned int gen_a0)
{
  GEN_ENTER(0xb9d060u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return (byte)param_1 + 8;
}

/* ref: FUN_00b9d070 */
GEN_FRAME uint GEN_THISCALL F_00b9d070(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb9d070u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  char * pcVar1;
  int iVar2;
  undefined4 * puVar3;
  uint uVar4;
  int * piVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  uint local_14;
  uint local_c;
  
  iVar2 = *(int *)(*param_1 + 4);
  piVar5 = (int *)(iVar2 + 0x30);
  local_14 = 0;
  do {
    uVar7 = (uint)*((byte *)GEN_TOP((*(int *)((int)this + 0x1d1c) + 0x1d0c + (int)this)));
    uVar6 = 0;
    iVar8 = 0;
    param_1 = (int *)0x0;
    switch((unsigned int)(uintptr_t)(*(int *)((int)this + 0x1d1c))) {
    case 0: ;
      iVar8 = piVar5[-0xc];
      uVar6 = *(undefined1 *)(local_14 + 0xc + iVar2);
      param_1 = (int *)0x8;
      break;
    case 1: ;
      iVar8 = piVar5[0x10];
      uVar6 = *(undefined1 *)(local_14 + 0x7c + iVar2);
      param_1 = (int *)0x9;
      break;
    case 2: ;
      iVar8 = *piVar5;
      uVar6 = *(undefined1 *)(local_14 + 0x3c + iVar2);
      param_1 = (int *)0xa;
      break;
    case 3: ;
      iVar8 = piVar5[8];
      uVar6 = *(undefined1 *)(local_14 + 0x5c + iVar2);
      param_1 = (int *)0xb;
      break;
    case 4: ;
      iVar8 = piVar5[4];
      uVar6 = *(undefined1 *)(local_14 + 0x4c + iVar2);
      param_1 = (int *)0xc;
      break;
    case 5: ;
      iVar8 = piVar5[0xc];
      uVar6 = *(undefined1 *)(local_14 + 0x6c + iVar2);
      param_1 = (int *)0xd;
      break;
    case 6: ;
      iVar8 = piVar5[-4];
      uVar6 = *(undefined1 *)(local_14 + 0x2c + iVar2);
      param_1 = (int *)0xe;
      break;
    case 7: ;
      iVar8 = piVar5[-8];
      uVar6 = *(undefined1 *)(local_14 + 0x1c + iVar2);
      param_1 = (int *)0xf;
      break;
    case 8: ;
      iVar8 = piVar5[0x14];
      uVar6 = *(undefined1 *)(local_14 + 0x8c + iVar2);
      param_1 = (int *)0x10;
      break;
    case 9: ;
      iVar8 = piVar5[0x18];
      uVar6 = *(undefined1 *)(local_14 + 0x9c + iVar2);
      param_1 = (int *)0x11;
      break;
    case 10: ;
      iVar8 = piVar5[0x1c];
      uVar6 = *(undefined1 *)(local_14 + 0xac + iVar2);
      param_1 = (int *)0x12;
    }
    if ((uVar7 < 5) && (iVar8 != 0)) {
      local_c = *(uint *)(&REFG(undefined, 0x14ab2cc) + (*(uint *)((int)this + 0x1d1c) & 0xfffffffc)) >>
                (('\x03' - ((byte)*(uint *)((int)this + 0x1d1c) & 3)) * '\b' & 0x1f) & 0xff;
      uVar4 = F_00a68280(&REFG(undefined1, 0x14ab070) GEN_EDX_FWD,*(byte *)((int)this + 0x1d1c) + 8,0);
      if ((ushort)local_c == 0) {
        if ((short)uVar4 != 0) {
          local_c = 1;
        }
      }
      else if (0x32 < (ushort)local_c) {
        local_c = 0x32;
      }
      *((int *)GEN_TOP(((uVar7 + *(int *)((int)this + 0x1d1c) * 5) * 0x70 + 0x4fc + (int)this))) = iVar8;
      *((undefined1 *)GEN_TOP(((uVar7 + *(int *)((int)this + 0x1d1c) * 5) * 0x70 + 0x50a + (int)this))) = uVar6
      ;
      *((int * PTR32 *)GEN_TOP(((uVar7 + *(int *)((int)this + 0x1d1c) * 5) * 0x70 + 0x50c + (int)this))) = param_1;
      *((uint *)GEN_TOP(((uVar7 + *(int *)((int)this + 0x1d1c) * 5) * 0x70 + 0x510 + (int)this))) =
           (local_c - *(byte *)((int)this + 0x1d18)) + 1;
      pcVar1 = ((char *)GEN_TOP((*(int *)((int)this + 0x1d1c) + 0x1d0c + (int)this)));
      *pcVar1 = *pcVar1 + '\x01';
    }
    local_14 = local_14 + 1;
    piVar5 = piVar5 + 1;
  } while (local_14 < 3);
  puVar3 = *(undefined4 * PTR32 *)((int)this + 0x4ec);
  if (puVar3 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar3)(puVar3 GEN_EDX_ARG,1);
    *(undefined4 *)((int)this + 0x4ec) = 0;
  }
  uVar7 = F_00b9e010(this GEN_EDX_ARG);
  return uVar7;
}

/* ref: FUN_00b9d310 */
GEN_NOFRAME uint GEN_THISCALL F_00b9d310(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb9d310u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  uint uVar3;
  undefined4 * this_00;
  uint uVar4;
  
  piVar2 = (int *)F_0052fba0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8) GEN_EDX_FWD,&REFG(undefined, 0x1102538));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2 GEN_EDX_ARG);
  uVar4 = (*(int *)((int)this + 0x1d2c) - *(int *)((int)this + 0x1d28) >> 2) -
          *(int *)((int)this + 0x1d24);
  if (uVar3 < uVar4) {
    uVar4 = uVar3;
  }
  this_00 = (undefined4 *)F_00406b90(0x20,0,0);
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(this_00 GEN_EDX_ARG,uVar4,0);
    this_00[5] = uVar4;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x1102548));
    this_00[6] = this;
    this_00[7] = ((code *)REFP(0xb9db10));
  }
  *(undefined4 * PTR32 *)((int)this + 0x4f4) = this_00;
  if (*(int *)((int)this + 0x4f0) == 0) {
    uVar3 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8) GEN_EDX_ARG,9);
    *(uint *)((int)this + 0x4f0) = uVar3;
  }
  uVar3 = 0;
  if (uVar4 != 0) {
    do {
      iVar1 = *(int *)((int)this + 0x1d24);
      *(int *)((int)this + 0x1d24) = iVar1 + 1;
      F_00cb4540(*(undefined * PTR32 *)((int)this + 0x4f4) GEN_EDX_ARG,uVar3,
                   *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1d28) + iVar1 * 4))));
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  *(undefined1 *)((int)this + 0x4f8) = 1;
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x4f0) + 0x48))))
                    (*(int * PTR32 *)((int)this + 0x4f0) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x4f4));
  return uVar4;
}

/* ref: FUN_00b9d400 */
GEN_FRAME uint F_00b9d400(void)
{
  GEN_ENTER(0xb9d400u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined * this;
  uint uVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  undefined * ptVar5;
  ulonglong uVar6;
  __time64_t _Var7;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  if (this == (undefined *)0x0) {
    uVar6 = F_0046ff40();
    uVar1 = (uint)(uVar6 / 1000);
  }
  else {
    uVar1 = F_00975680(this GEN_EDX_ARG);
  }
  if (uVar1 == 0) {
    piVar4 = &REFG(undefined4, 0x14a2ad4);
  }
  else {
    ((uint *)(gen_frame + 0xc))[0] = uVar1;
    ((uint *)(gen_frame + 0xc))[1] = 0;
    F_00c4f4ca(&REFG(undefined4, 0x14a2ab0),((uint *)(gen_frame + 0xc)));
    piVar4 = &REFG(undefined4, 0x14a2ab0);
  }
  ptVar5 = ((undefined *)(gen_frame + 0x14));
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 - 1) {
    (*(int *)((char *)(ptVar5))) = *piVar4;
    piVar4 = piVar4 + 1;
    ptVar5 = (undefined *)&(*(int *)(((char *)(ptVar5) + 4)));
  }
  (*(int *)(((char *)((undefined *)(gen_frame + 0x14)) + 8))) = 5;
  (*(int *)(((char *)((undefined *)(gen_frame + 0x14)) + 4))) = 0;
  (*(int *)((char *)((undefined *)(gen_frame + 0x14)))) = 0;
  _Var7 = F_00c4c109(((undefined *)(gen_frame + 0x14)));
  uVar2 = (uint)_Var7;
  if (uVar2 <= uVar1) {
    uVar2 = uVar2 + 0x15180;
  }
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00b9d4b0 */
GEN_FRAME uint GEN_THISCALL F_00b9d4b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb9d4b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int * piVar1;
  uint uVar2;
  uint uVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  ((uint *)(gen_frame + 0x10))[0x16] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  ((uint *)(gen_frame + 0x10))[0] = 0;
  ((uint *)(gen_frame + 0x10))[1] = 0;
  ((uint *)(gen_frame + 0x10))[2] = 0;
  ((uint *)(gen_frame + 0x10))[3] = 0;
  ((uint *)(gen_frame + 0x10))[4] = 0;
  ((uint *)(gen_frame + 0x10))[5] = 0;
  ((uint *)(gen_frame + 0x10))[6] = 0;
  ((uint *)(gen_frame + 0x10))[7] = 0;
  ((uint *)(gen_frame + 0x10))[8] = 0;
  ((uint *)(gen_frame + 0x10))[9] = 0;
  ((uint *)(gen_frame + 0x10))[10] = 0;
  ((uint *)(gen_frame + 0x10))[0xb] = 0;
  ((uint *)(gen_frame + 0x10))[0xc] = 0;
  ((uint *)(gen_frame + 0x10))[0xd] = 0;
  ((uint *)(gen_frame + 0x10))[0xe] = 0;
  ((uint *)(gen_frame + 0x10))[0xf] = 0;
  ((uint *)(gen_frame + 0x10))[0x10] = 0;
  ((uint *)(gen_frame + 0x10))[0x11] = 0;
  ((uint *)(gen_frame + 0x10))[0x12] = 0;
  ((uint *)(gen_frame + 0x10))[0x13] = 0;
  ((uint *)(gen_frame + 0x10))[0x14] = 0;
  ((uint *)(gen_frame + 0x10))[0x15] = 0;
  iVar8 = 0;
  (*(uint *)(gen_frame + 0xc)) = 0xb;
  uVar6 = 0x68000ace;
  uVar3 = 0x8801;
  uVar9 = 0x98d0;
  uVar2 = REFG(undefined4, 0x14ab2d8);
  do {
    uVar5 = uVar6;
    uVar2 = uVar2 << 0xb ^ uVar2;
    uVar6 = (uVar9 >> 0xb ^ uVar2) >> 8 ^ uVar9 ^ uVar2;
    *(uint *)((int)((uint *)(gen_frame + 0x10)) + iVar8) = uVar6 % 1000;
    uVar3 = uVar3 << 0xb ^ uVar3;
    uVar2 = (uVar6 >> 0xb ^ uVar3) >> 8 ^ uVar6 ^ uVar3;
    *(uint *)((int)((uint *)(gen_frame + 0x10)) + iVar8 + 0x2c) = uVar2 % 1000;
    iVar8 = iVar8 + 4;
    (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) - 1;
    uVar3 = uVar9;
    uVar9 = uVar2;
    uVar2 = uVar5;
  } while ((*(uint *)(gen_frame + 0xc)) != 0);
  uVar6 = 0;
  (*(uint *)(gen_frame + 0xc)) = 0;
  iVar8 = (int)this + 0xc;
  do {
    iVar7 = (((uint)*(byte *)((int)this + uVar6 + 0x1d0c) * ((uint *)(gen_frame + 0x10))[(int)(uVar6)]) / 1000 + (*(uint *)(gen_frame + 0xc))) *
            0x70;
    uVar3 = ((uint *)(gen_frame + 0x10))[(int)(uVar6 + 0xb)];
    piVar1 = (int *)(iVar7 + 0x4fc + (int)this);
    *(undefined4 *)(iVar8 - 0xc) = *(undefined4 *)(iVar7 + 0x4fc + (int)this);
    *(undefined1 *)(iVar8 + 2) = *(undefined1 *)((int)piVar1 + 0xe);
    *(bool *)iVar8 = uVar3 < 10;
    *(char *)(iVar8 + 1) = (char)(uVar6 >> 3);
    if ((((&REFG(undefined1, 0x14ab2c8))[(int)(uVar6 >> 3)] & (byte)(0x80 >> ((byte)uVar6 & 7))) == 0) && (*piVar1 != 0))
    {
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
    *(undefined1 *)(iVar8 + 3) = uVar4;
    *(int *)(iVar8 + 4) = piVar1[4];
    (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) + 5;
    *(int *)(iVar8 + 8) = piVar1[5];
    uVar6 = uVar6 + 1;
    iVar8 = iVar8 + 0x70;
  } while ((*(uint *)(gen_frame + 0xc)) < 0x37);
  F_00c47745(((uint *)(gen_frame + 0x10))[0x16] ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_FWD);
  return (uint)piVar1;
}

/* ref: FUN_00b9d660 */
GEN_NOFRAME uint GEN_THISCALL F_00b9d660(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb9d660u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 0x4ec) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x4e8);
    if (piVar1 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1 GEN_EDX_FWD,*(int *)((int)this + 0x4ec));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x4ec);
    if (puVar2 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 0x4ec) = 0;
    }
  }
  uVar4 = *(uint *)((int)this + 0x4f4);
  *(undefined4 *)((int)this + 0x4e8) = 0;
  if (uVar4 != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x4f0);
    if (piVar1 != (int *)0x0) {
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1 GEN_EDX_ARG,uVar4);
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x4f4);
    if (puVar2 != (undefined4 *)0x0) {
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 0x4f4) = 0;
    }
  }
  *(undefined4 *)((int)this + 0x4f0) = 0;
  *(undefined4 *)((int)this + 0x4e0) = 0;
  *(undefined4 *)((int)this + 0x4e4) = 0;
  *(undefined1 *)((int)this + 0x1d20) = 0;
  *(undefined4 *)((int)this + 0x1d24) = 0;
  iVar3 = *(int *)((int)this + 0x1d28);
  if (iVar3 != *(int *)((int)this + 0x1d2c)) {
    uVar4 = F_00c46e20(iVar3,*(int *)((int)this + 0x1d2c),0);
    *(int *)((int)this + 0x1d2c) = iVar3;
  }
  return uVar4;
}

/* ref: FUN_00b9d730 */
GEN_NOFRAME uint GEN_THISCALL F_00b9d730(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb9d730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * pvVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)((int)this + 0x1d28);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0x1d30) - iVar1 >> 2) * 4,800);
  }
  *(undefined4 *)((int)this + 0x1d28) = 0;
  *(undefined4 *)((int)this + 0x1d2c) = 0;
  *(undefined4 *)((int)this + 0x1d30) = 0;
  iVar1 = 0x36;
  pvVar2 = (undefined *)((int)this + 0x1d24);
  do {
    pvVar2 = (undefined *)((int)pvVar2 - 0x70);
    F_0042c880(pvVar2 GEN_EDX_ARG);
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  F_0074d930((undefined *)((int)this + 0x4d0) GEN_EDX_ARG);
  iVar1 = 10;
  pvVar2 = (undefined *)((int)this + 0x4e8);
  do {
    pvVar2 = (undefined *)((int)pvVar2 - 0x70);
    uVar3 = F_0042c880(pvVar2 GEN_EDX_ARG);
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  return (uint)uVar3;
}

/* ref: FUN_00b9d7c0 */
GEN_NOFRAME uint GEN_THISCALL F_00b9d7c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb9d7c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  F_00756250(this GEN_EDX_FWD);
  F_00b9e290((undefined *)((int)this + 0x4fc) GEN_EDX_ARG);
  uVar2 = 0;
  *(undefined1 *)((int)this + 0x1d18) = 0;
  *(undefined4 *)((int)this + 0x4e8) = 0;
  *(undefined4 *)((int)this + 0x4ec) = 0;
  *(undefined4 *)((int)this + 0x4f0) = 0;
  *(undefined4 *)((int)this + 0x4f4) = 0;
  *(undefined1 *)((int)this + 0x1d20) = 0;
  *(undefined1 *)((int)this + 0x4f8) = 0;
  *(undefined4 *)((int)this + 0x1d24) = 0;
  iVar1 = *(int *)((int)this + 0x1d28);
  if (iVar1 != *(int *)((int)this + 0x1d2c)) {
    uVar2 = F_00c46e20(iVar1,*(int *)((int)this + 0x1d2c),0);
    *(int *)((int)this + 0x1d2c) = iVar1;
  }
  return uVar2;
}

/* ref: FUN_00b9d840 */
GEN_NOFRAME uint GEN_THISCALL F_00b9d840(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb9d840u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00754160(this GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x4e0) = 0;
  *(undefined4 *)((int)this + 0x4e4) = 0;
  F_00b9e680((undefined *)((int)this + 0x4fc) GEN_EDX_ARG);
  *(undefined4 *)((int)this + 0x1d28) = 0;
  *(undefined4 *)((int)this + 0x1d2c) = 0;
  *(undefined4 *)((int)this + 0x1d30) = 0;
  F_00b9d7c0(this GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00b9d880 */
GEN_FRAME uint GEN_THISCALL F_00b9d880(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb9d880u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint * this_00;
  int * piVar1;
  char cVar2;
  undefined * this_01;
  undefined * pvVar3;
  undefined * this_02;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int * piVar7;
  int iVar8;
  
  this_00 = (uint *)((int)this + 0x1d28);
  uVar4 = *this_00;
  if (uVar4 != *(uint *)((int)this + 0x1d2c)) {
    F_00c46e20(uVar4,*(uint *)((int)this + 0x1d2c),0);
    *(uint *)((int)this + 0x1d2c) = uVar4;
  }
  iVar8 = 0;
  do {
    ((int *)(gen_frame + 0x0))[1] = iVar8;
LAB_00b9d8c0: ;
    iVar8 = ((int *)(gen_frame + 0x0))[1];
    this_01 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,((int *)(gen_frame + 0x0))[1]);
    (*(char *)(gen_frame + 0xb)) = '\0';
    pvVar3 = this_01;
    if (0 < *(int *)((int)this_01 + 0xc)) {
      pvVar3 = (undefined *)0x0;
      do {
        pvVar3 = (undefined *)F_00a37da0(this_01 GEN_EDX_ARG,pvVar3);
        if (pvVar3 != (undefined *)0x0) {
          if (*(char *)((int)pvVar3 + 6) == '\0') {
            iVar8 = *(int *)((int)pvVar3 + 8);
          }
          else {
            this_02 = (undefined *)F_00a3a860(pvVar3 GEN_EDX_ARG);
            cVar2 = *(char *)((int)this_02 + 6);
            while (cVar2 == '\0') {
              this_02 = (undefined *)F_00a3a860(this_02 GEN_EDX_ARG);
              cVar2 = *(char *)((int)this_02 + 6);
            }
            iVar8 = *(int *)((int)this_02 + 8);
          }
          if (iVar8 != 0) {
            if (*(char *)((int)pvVar3 + 6) == '\0') {
              iVar8 = *(int *)((int)pvVar3 + 8);
            }
            else {
              pvVar3 = (undefined *)F_00a3a860(pvVar3 GEN_EDX_ARG);
              cVar2 = *(char *)((int)pvVar3 + 6);
              while (cVar2 == '\0') {
                pvVar3 = (undefined *)F_00a3a860(pvVar3 GEN_EDX_ARG);
                cVar2 = *(char *)((int)pvVar3 + 6);
              }
              iVar8 = *(int *)((int)pvVar3 + 8);
            }
            uVar4 = (int)(*(int *)((int)this + 0x1d2c) - *this_00) >> 2;
            ((int *)(gen_frame + 0x0))[0] = iVar8;
            if (uVar4 != 0) {
              piVar7 = (int *)*this_00;
              uVar6 = 0;
              do {
                if (iVar8 == *piVar7) goto LAB_00b9da2a;
                uVar6 = uVar6 + 1;
                piVar7 = piVar7 + 1;
              } while (uVar6 < uVar4);
            }
            piVar7 = *(int * PTR32 *)((int)this + 0x1d2c);
            if ((((int *)(gen_frame + 0x0)) < piVar7) && (piVar1 = (int *)*this_00, piVar1 <= ((int *)(gen_frame + 0x0)))) {
              if (piVar7 == *(int * PTR32 *)((int)this + 0x1d30)) {
                iVar8 = (int)piVar7 - (int)((int)(uintptr_t)piVar1) >> 2;
                if (iVar8 == -1) {
LAB_00b9daa8: ;
                    
                  F_00c4579a("vector<T> too long");
                }
                uVar6 = iVar8 + 1;
                uVar4 = (int)*(int * PTR32 *)((int)this + 0x1d30) - (int)((int)(uintptr_t)piVar1) >> 2;
                if (uVar4 < uVar6) {
                  if (-(uVar4 >> 1) - 1 < uVar4) {
                    uVar4 = 0;
                  }
                  else {
                    uVar4 = uVar4 + (uVar4 >> 1);
                  }
                  if (uVar4 < uVar6) {
                    uVar4 = uVar6;
                  }
                  F_0074cbd0(this_00 GEN_EDX_ARG,uVar4);
                }
              }
              if (*(undefined4 * PTR32 *)((int)this + 0x1d2c) != (undefined4 *)0x0) {
                **(undefined4 * PTR32 *)((int)this + 0x1d2c) =
                     *((undefined4 *)GEN_TOP((*this_00 + ((int)((int *)(gen_frame + 0x0)) - (int)((int)(uintptr_t)piVar1) >> 2) * 4)));
              }
            }
            else {
              if (piVar7 == *(int * PTR32 *)((int)this + 0x1d30)) {
                iVar5 = (int)((int)piVar7 - *this_00) >> 2;
                if (iVar5 == -1) goto LAB_00b9daa8;
                uVar6 = iVar5 + 1;
                uVar4 = (int)((int)*(int * PTR32 *)((int)this + 0x1d30) - *this_00) >> 2;
                if (uVar4 < uVar6) {
                  if (-(uVar4 >> 1) - 1 < uVar4) {
                    uVar4 = 0;
                  }
                  else {
                    uVar4 = uVar4 + (uVar4 >> 1);
                  }
                  if (uVar4 < uVar6) {
                    uVar4 = uVar6;
                  }
                  F_0074cbd0(this_00 GEN_EDX_ARG,uVar4);
                }
              }
              if (*(int * PTR32 *)((int)this + 0x1d2c) != (int *)0x0) {
                **(int * PTR32 *)((int)this + 0x1d2c) = iVar8;
              }
            }
            *(int *)((int)this + 0x1d2c) = *(int *)((int)this + 0x1d2c) + 4;
          }
        }
LAB_00b9da2a: ;
        cVar2 = (*(char *)(gen_frame + 0xb)) + '\x01';
        (*(char *)(gen_frame + 0xb)) = cVar2;
        pvVar3 = (undefined *)(int)cVar2;
        iVar8 = ((int *)(gen_frame + 0x0))[1];
      } while ((int)pvVar3 < *(int *)((int)this_01 + 0xc));
    }
    if (iVar8 == 3) {
      ((int *)(gen_frame + 0x0))[1] = 0xdac;
      goto LAB_00b9d8c0;
    }
    if (iVar8 == 0xdac) {
      ((int *)(gen_frame + 0x0))[1] = 0xc80;
      goto LAB_00b9d8c0;
    }
    if (iVar8 == 0xc89) {
      ((int *)(gen_frame + 0x0))[1] = 0xce4;
      goto LAB_00b9d8c0;
    }
    if (iVar8 == 0xce4) {
      ((int *)(gen_frame + 0x0))[1] = 0xd48;
      goto LAB_00b9d8c0;
    }
    if (iVar8 == 0xd48) {
      if ((*(int *)((int)this + 0x1d2c) - *this_00 & 0xfffffffc) == 0) {
        piVar7 = *(int * PTR32 *)((int)this + 0x4e0);
        *(undefined1 *)((int)this + 0x1d20) = 0;
        if (piVar7 != (int *)0x0) {
          pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 4))(piVar7 GEN_EDX_ARG,0x16)));
        }
        piVar7 = *(int * PTR32 *)((int)this + 0x4e4);
        if (piVar7 != (int *)0x0) {
          uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 4))(piVar7 GEN_EDX_ARG,0x16);
          return uVar4;
        }
      }
      else {
        *(undefined4 *)((int)this + 0x1d24) = 0;
        pvVar3 = (undefined *)F_00b9d310(this GEN_EDX_ARG);
      }
      return (uint)pvVar3;
    }
    iVar8 = iVar8 + 1;
  } while( true );
}

/* ref: FUN_00b9db10 */
GEN_FRAME uint GEN_THISCALL F_00b9db10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb9db10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  byte bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 * puVar6;
  int * piVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint * puVar11;
  char * pcVar12;
  
  (*(uint *)(gen_frame + 0x98)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  if (*(char *)((int)this + 0x4f8) == '\0') {
    (*(uint *)(gen_frame + 0x1c)) = 0;
    if (param_2 != 0) {
      pcVar12 = (char *)((int)this + 0xc);
      do {
        iVar4 = *((int *)GEN_TOP((*(int *)(param_1 + (*(uint *)(gen_frame + 0x1c)) * 4) + 4)));
        uVar10 = F_00a68280(&REFG(undefined1, 0x14ab070) GEN_EDX_FWD,*(undefined4 *)(pcVar12 + 4),0);
        uVar8 = 0;
        if ((ushort)uVar10 < 0x32) {
          cVar2 = *pcVar12;
          cVar3 = pcVar12[1];
          puVar11 = (uint *)F_00ab4280((uint)(byte)pcVar12[8]);
          if (puVar11 != (uint *)0x0) {
            if (cVar3 == '\0') {
              uVar8 = *puVar11;
            }
            else if (cVar3 == '\x01') {
              uVar8 = puVar11[1];
            }
            if (cVar2 != '\0') {
              uVar8 = (uVar8 * 0x96) / 100;
            }
          }
        }
        cVar2 = *pcVar12;
        cVar3 = pcVar12[1];
        *(uint *)(pcVar12 - 8) = uVar8;
        uVar8 = 0;
        uVar10 = F_00ab4280((uint)(byte)pcVar12[8]);
        if (uVar10 != 0) {
          if (cVar3 == '\0') {
            uVar8 = *(uint *)(uVar10 + 0xc);
          }
          else if (cVar3 == '\x01') {
            uVar8 = *(uint *)(uVar10 + 0x10);
          }
          else if (cVar3 == '\x02') {
            uVar8 = *(uint *)(uVar10 + 8);
          }
          if (cVar2 != '\0') {
            uVar8 = (uVar8 * 0x96) / 100;
          }
        }
        *(uint *)(pcVar12 - 4) = uVar8;
        uVar8 = F_00ab6240(*(undefined4 *)(pcVar12 - 0xc),0,0);
        F_0042e430(pcVar12 + 0xc GEN_EDX_ARG,uVar8);
        uVar8 = F_00ab25d0((uint)*(byte *)(iVar4 + 0xa1));
        if (uVar8 == 0) {
          uVar8 = F_00ab65a0(*(undefined4 *)(pcVar12 - 0xc),iVar4);
        }
        else {
          uVar8 = *(uint *)(uVar8 + 4);
        }
        *(uint *)(pcVar12 + 0x60) = uVar8;
        (*(uint *)(gen_frame + 0x1c)) = (*(uint *)(gen_frame + 0x1c)) + 1;
        pcVar12 = pcVar12 + 0x70;
      } while ((*(uint *)(gen_frame + 0x1c)) < param_2);
    }
    puVar6 = *(undefined4 * PTR32 *)((int)this + 0x4f4);
    if (puVar6 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar6)(puVar6 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 0x4f4) = 0;
    }
    uVar8 = F_00b9d880(this GEN_EDX_ARG);
  }
  else {
    (*(uint *)(gen_frame + 0xc)) = 0;
    if (param_2 != 0) {
      (*(uint *)(gen_frame + 0x1c)) = 0;
      do {
        iVar4 = *((int *)GEN_TOP((*(int *)(param_1 + (*(uint *)(gen_frame + 0xc)) * 4) + 4)));
        iVar5 = *((int *)GEN_TOP(((*(uint *)(gen_frame + 0x1c)) + *((int *)GEN_TOP((*(int *)((int)this + 0x4f4) + 0xc))))));
        if (iVar4 != 0) {
          if ((*(char *)(iVar4 + 0xa3) == '\x02') || (*(char *)(iVar4 + 0xa3) == '\a')) {
            F_0042b630(((undefined1 *)(gen_frame + 0x40)) GEN_EDX_ARG);
            ((int *)(gen_frame + 0x28))[0] = 0;
            ((int *)(gen_frame + 0x28))[1] = 0;
            ((int *)(gen_frame + 0x28))[2] = 0;
            (*(undefined4 *)(gen_frame + 0x34)) = 0x1000000;
            (*(undefined4 *)(gen_frame + 0x38)) = 0;
            (*(uint *)(gen_frame + 0x3c)) = 0;
            F_0042e430(((undefined1 *)(gen_frame + 0x40)) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
            uVar9 = (*(undefined4 *)(gen_frame + 0x34));
            bVar1 = *(byte *)(iVar4 + 0x9e);
            (*(uint *)(gen_frame + 0x94)) = 0;
            ((int *)(gen_frame + 0x28))[0] = iVar5;
            ((int *)(gen_frame + 0x28))[1] = 0;
            (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x34)) + 0)) = 0;
            (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x34)) + 1)) = 2;
            (*(undefined4 *)(gen_frame + 0x34)) = CONCAT13((char)((uint)uVar9 >> 0x18),0x200);
            uVar8 = F_00ab4280((uint)bVar1);
            if (uVar8 == 0) {
              uVar9 = 0;
            }
            else {
              uVar9 = *(undefined4 *)(uVar8 + 8);
            }
            ((int *)(gen_frame + 0x28))[2] = uVar9;
            (*(uint *)(gen_frame + 0x3c)) = (uint)*(byte *)(iVar4 + 0x9e);
            uVar8 = F_00ab6240(iVar5,0,0);
            F_0042e430(((undefined1 *)(gen_frame + 0x40)) GEN_EDX_ARG,uVar8);
            uVar8 = F_00ab65a0(iVar5,iVar4);
            (*(uint *)(gen_frame + 0x94)) = uVar8;
            F_00b9f810((undefined *)((int)this + 0x4d0) GEN_EDX_ARG,((int *)(gen_frame + 0x28)));
            F_0042c880(((undefined1 *)(gen_frame + 0x40)) GEN_EDX_ARG);
          }
          if (iVar5 - 0x177aU < 7) {
            F_0042b630(((undefined1 *)(gen_frame + 0x40)) GEN_EDX_ARG);
            ((int *)(gen_frame + 0x28))[0] = 0;
            ((int *)(gen_frame + 0x28))[1] = 0;
            ((int *)(gen_frame + 0x28))[2] = 0;
            (*(undefined4 *)(gen_frame + 0x34)) = 0x1000000;
            (*(undefined4 *)(gen_frame + 0x38)) = 0;
            (*(uint *)(gen_frame + 0x3c)) = 0;
            F_0042e430(((undefined1 *)(gen_frame + 0x40)) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
            uVar9 = (*(undefined4 *)(gen_frame + 0x34));
            bVar1 = *(byte *)(iVar4 + 0x9e);
            (*(uint *)(gen_frame + 0x94)) = 0;
            ((int *)(gen_frame + 0x28))[0] = iVar5;
            ((int *)(gen_frame + 0x28))[1] = 0;
            (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x34)) + 0)) = 0;
            (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x34)) + 1)) = 2;
            (*(undefined4 *)(gen_frame + 0x34)) = CONCAT13((char)((uint)uVar9 >> 0x18),0x200);
            (*(uint *)(gen_frame + 0x3c)) = (uint)bVar1;
            uVar8 = F_00ab6240(iVar5,0,0);
            F_0042e430(((undefined1 *)(gen_frame + 0x40)) GEN_EDX_ARG,uVar8);
            uVar8 = F_00ab65a0(iVar5,iVar4);
            (*(uint *)(gen_frame + 0x94)) = uVar8;
            if (((iVar5 == 0x177a) || (iVar5 == 0x177c)) || (((int *)(gen_frame + 0x28))[2] = 25000, iVar5 == 0x177e))
            {
              ((int *)(gen_frame + 0x28))[2] = 0x9c4;
            }
            F_00b9f810((undefined *)((int)this + 0x4d0) GEN_EDX_ARG,((int *)(gen_frame + 0x28)));
            F_0042c880(((undefined1 *)(gen_frame + 0x40)) GEN_EDX_ARG);
          }
        }
        (*(uint *)(gen_frame + 0x1c)) = (*(uint *)(gen_frame + 0x1c)) + 0x10;
        (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) + 1;
      } while ((*(uint *)(gen_frame + 0xc)) < param_2);
    }
    puVar6 = *(undefined4 * PTR32 *)((int)this + 0x4f4);
    if (puVar6 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar6)(puVar6 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 0x4f4) = 0;
    }
    if (*(uint *)((int)this + 0x1d24) <
        (uint)(*(int *)((int)this + 0x1d2c) - *(int *)((int)this + 0x1d28) >> 2)) {
      uVar8 = F_00b9d310(this GEN_EDX_ARG);
      F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c) GEN_EDX_ARG);
      return uVar8;
    }
    (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x14)) & 0xffffff00;
    uVar8 = F_00b9f5f0(*(undefined4 *)((int)this + 0x4d0),*(int *)((int)this + 0x4d4),
                         (*(int *)((int)this + 0x4d4) - *(int *)((int)this + 0x4d0)) / 0x70,(*(uint *)(gen_frame + 0x14))
                        );
    piVar7 = *(int * PTR32 *)((int)this + 0x4e0);
    *(undefined1 *)((int)this + 0x1d20) = 0;
    if (piVar7 != (int *)0x0) {
      uVar8 = ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 4))(piVar7 GEN_EDX_ARG,0x16);
    }
    piVar7 = *(int * PTR32 *)((int)this + 0x4e4);
    if (piVar7 != (int *)0x0) {
      uVar8 = ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 4))(piVar7 GEN_EDX_ARG,0x16);
      F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c) GEN_EDX_ARG);
      return uVar8;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c) GEN_EDX_ARG);
  return uVar8;
}

/* ref: FUN_00b9df60 */
GEN_NOFRAME uint GEN_THISCALL F_00b9df60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb9df60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)F_00406b90(0x20,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(puVar1 GEN_EDX_ARG,0xb,0);
    puVar1[5] = 0xb;
    *puVar1 = (*(undefined * PTR32 (*)[2])REFP(0x1102548));
    puVar1[6] = this;
    puVar1[7] = ((code *)REFP(0xb9db10));
  }
  *(undefined4 * PTR32 *)((int)this + 0x4f4) = puVar1;
  if (*(int *)((int)this + 0x4f0) == 0) {
    uVar2 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8) GEN_EDX_ARG,9);
    *(uint *)((int)this + 0x4f0) = uVar2;
  }
  uVar2 = 0;
  puVar1 = this;
  do {
    F_00cb4540(*(undefined * PTR32 *)((int)this + 0x4f4) GEN_EDX_ARG,uVar2,*puVar1);
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 0x1c;
  } while (uVar2 < 0xb);
  *(undefined1 *)((int)this + 0x4f8) = 0;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x4f0) + 0x48))))
                    (*(int * PTR32 *)((int)this + 0x4f0) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x4f4));
  return uVar2;
}

/* ref: FUN_00b9e010 */
GEN_NOFRAME uint GEN_THISCALL F_00b9e010(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb9e010u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  undefined4 * this_00;
  uint uVar3;
  
  uVar3 = *(uint *)(&REFG(undefined, 0x14ab2cc) + (*(uint *)((int)this + 0x1d1c) & 0xfffffffc)) >>
          (('\x03' - ((byte)*(uint *)((int)this + 0x1d1c) & 3)) * '\b' & 0x1f) & 0xff;
  uVar2 = F_00a68280(&REFG(undefined1, 0x14ab070) GEN_EDX_FWD,*(byte *)((int)this + 0x1d1c) + 8,0);
  if ((short)uVar3 == 0) {
    if ((short)uVar2 != 0) {
      uVar3 = 1;
    }
  }
  else if (0x32 < uVar3) {
    uVar3 = 0x32;
  }
  while ((uVar3 == *(byte *)((int)this + 0x1d18) || (int)(uVar3 - *(byte *)((int)this + 0x1d18)) < 0
         || (4 < *((byte *)GEN_TOP(((int)this + *(int *)((int)this + 0x1d1c) + 0x1d0c)))))) {
    *(int *)((int)this + 0x1d1c) = *(int *)((int)this + 0x1d1c) + 1;
    uVar2 = *(uint *)((int)this + 0x1d1c);
    *(undefined1 *)((int)this + 0x1d18) = 0;
    if (10 < uVar2) {
      F_00b9d4b0(this GEN_EDX_ARG);
      uVar2 = F_00b9df60(this GEN_EDX_ARG);
      return uVar2;
    }
    uVar3 = *(uint *)(&REFG(undefined, 0x14ab2cc) + (uVar2 & 0xfffffffc)) >>
            (('\x03' - ((byte)uVar2 & 3)) * '\b' & 0x1f) & 0xff;
    uVar2 = F_00a68280(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,*(byte *)((int)this + 0x1d1c) + 8,0);
    if ((short)uVar3 == 0) {
      if ((short)uVar2 != 0) {
        uVar3 = 1;
      }
    }
    else if (0x32 < uVar3) {
      uVar3 = 0x32;
    }
  }
  this_00 = (undefined4 *)F_00406b90(0x20,0,0);
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(this_00 GEN_EDX_ARG,1,0);
    this_00[5] = 1;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x1102548));
    this_00[6] = this;
    this_00[7] = ((code *)REFP(0xb9d070));
  }
  *(undefined4 * PTR32 *)((int)this + 0x4ec) = this_00;
  if (*(int *)((int)this + 0x4e8) == 0) {
    uVar2 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8) GEN_EDX_ARG,0x11f);
    *(uint *)((int)this + 0x4e8) = uVar2;
  }
  bVar1 = *(byte *)((int)this + 0x1d18);
  *(byte *)((int)this + 0x1d18) = bVar1 + 1;
  F_00cb4540(*(undefined * PTR32 *)((int)this + 0x4ec) GEN_EDX_ARG,0,uVar3 - bVar1);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x4e8) + 0x48))))
                    (*(int * PTR32 *)((int)this + 0x4e8) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x4ec));
  return uVar2;
}

/* ref: FUN_00b9e1d0 */
GEN_FRAME uint GEN_THISCALL F_00b9e1d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb9e1d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  byte bVar2;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar3;
  
  cVar1 = REFG(char, 0x14ab29a);
  if (*(char *)((int)this + 0x1d20) == '\0') {
    bVar2 = F_00a68940(&REFG(undefined1, 0x14ab070) GEN_EDX_FWD);
    in_EAX = CONCAT31(extraout_var,bVar2);
    if ((bVar2 != 0) && (cVar1 != '\0')) {
      *(undefined1 *)((int)this + 0x1d20) = 1;
      F_00756250(this GEN_EDX_ARG);
      F_00b9e290((undefined *)((int)this + 0x4fc) GEN_EDX_ARG);
      *(undefined1 *)((int)this + 0x1d18) = 0;
      *(undefined4 *)((int)this + 0x1d1c) = 0;
      uVar3 = F_00b9e010(this GEN_EDX_ARG);
      return uVar3;
    }
    *(undefined4 *)((int)this + 0x4e0) = 0;
    *(undefined4 *)((int)this + 0x4e4) = 0;
  }
  return in_EAX;
}

/* ref: FUN_00b9e250 */
GEN_FRAME uint GEN_THISCALL F_00b9e250(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb9e250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x4e0) = param_1;
  uVar1 = F_00b9e1d0(this GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_00b9e270 */
GEN_FRAME uint GEN_THISCALL F_00b9e270(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb9e270u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x4e4) = param_1;
  uVar1 = F_00b9e1d0(this GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_00b9e290 */
GEN_FRAME unsigned int GEN_THISCALL F_00b9e290(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb9e290u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  uint local_8;
  
  local_8 = 0;
  puVar1 = (undefined4 *)((int)this + 8);
  do {
    iVar2 = 5;
    do {
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0x1000000;
      puVar1[2] = 0;
      puVar1[3] = 0;
      F_0042e430(puVar1 + 4 GEN_EDX_FWD,&REFG(undefined1, 0x107fc63));
      puVar1[0x19] = 0;
      puVar1 = puVar1 + 0x1c;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
    *(undefined1 *)((int)this + local_8 + 0x1810) = 0;
    local_8 = local_8 + 1;
  } while (local_8 < 0xb);
  return 0;
}

/* ref: FUN_00b9e300 */
GEN_FRAME byte GEN_THISCALL F_00b9e300(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb9e300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  return (*((byte *)GEN_TOP(((param_1 >> 3) + 600 + (int)this))) & (byte)(0x80 >> ((byte)param_1 & 7))) != 0;
}

/* ref: FUN_00b9e330 */
GEN_FRAME uint GEN_THISCALL F_00b9e330(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb9e330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  return *((uint *)GEN_TOP(((int)this + (param_1 & 0xfffffffc) + 0x25c))) >>
         (('\x03' - ((byte)param_1 & 3)) * '\b' & 0x1f);
}

/* ref: FUN_00b9e370 */
GEN_FRAME uint GEN_STDCALL F_00b9e370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9e370u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (uint)(*(uint *)(param_1 + 0x14) < *(uint *)(param_2 + 0x14));
}

/* ref: FUN_00b9e390 */
GEN_FRAME uint GEN_THISCALL F_00b9e390(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb9e390u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this GEN_EDX_FWD,param_3,param_4);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1102548));
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VGCSupplyDuty_UI_Game_Client_Game::vf1 */
GEN_FRAME uint GEN_THISCALL F_00b9e3d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb9e3d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)((int)this + 0x1c))(*(undefined4 *)((int)this + 0x18),param_2,param_1,param_3)
  ;
  return uVar1;
}

/* ref: FUN_00b9e400 */
GEN_FRAME uint GEN_THISCALL F_00b9e400(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb9e400u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b9e430 */
GEN_FRAME uint F_00b9e430(unsigned int gen_a0)
{
  GEN_ENTER(0xb9e430u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b9e440 */
GEN_FRAME uint GEN_THISCALL F_00b9e440(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb9e440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return (*(int *)this - *param_1) / 0x70;
}

/* ref: FUN_00b9e470 */
GEN_FRAME uint F_00b9e470(unsigned int gen_a0)
{
  GEN_ENTER(0xb9e470u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b9e4a0 */
GEN_FRAME uint F_00b9e4a0(unsigned int gen_a0)
{
  GEN_ENTER(0xb9e4a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b9e4c0 */
GEN_FRAME uint F_00b9e4c0(unsigned int gen_a0)
{
  GEN_ENTER(0xb9e4c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b9e4d0 */
GEN_FRAME uint GEN_THISCALL F_00b9e4d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9e4d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00b9e4f0 */
GEN_FRAME uint F_00b9e4f0(unsigned int gen_a0)
{
  GEN_ENTER(0xb9e4f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b9e500 */
GEN_FRAME uint F_00b9e500(unsigned int gen_a0)
{
  GEN_ENTER(0xb9e500u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b9e510 */
GEN_FRAME uint F_00b9e510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb9e510u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 * puVar6;
  
  iVar3 = param_2;
  while (param_3 < iVar3) {
    iVar4 = (iVar3 - 1) / 2;
    iVar5 = iVar4 * 0x70;
    puVar6 = (undefined4 *)(iVar5 + param_1);
    if ((uint)param_4[5] <= *(uint *)(iVar5 + 0x14 + param_1)) break;
    puVar1 = (undefined4 *)(iVar3 * 0x70 + param_1);
    *puVar1 = *puVar6;
    puVar1[1] = puVar6[1];
    puVar1[2] = puVar6[2];
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(puVar6 + 3);
    *(undefined1 *)((int)puVar1 + 0xd) = *(undefined1 *)((int)puVar6 + 0xd);
    *(undefined1 *)((int)puVar1 + 0xe) = *(undefined1 *)((int)puVar6 + 0xe);
    *(undefined1 *)((int)puVar1 + 0xf) = *(undefined1 *)((int)puVar6 + 0xf);
    puVar1[4] = puVar6[4];
    puVar1[5] = puVar6[5];
    F_0042ccf0(puVar1 + 6 GEN_EDX_ARG,puVar6 + 6);
    puVar1[0x1b] = puVar6[0x1b];
    iVar3 = iVar4;
  }
  puVar6 = (undefined4 *)(iVar3 * 0x70 + param_1);
  *puVar6 = *param_4;
  puVar6[1] = param_4[1];
  puVar6[2] = param_4[2];
  *(undefined1 *)(puVar6 + 3) = *(undefined1 *)(param_4 + 3);
  *(undefined1 *)((int)puVar6 + 0xd) = *(undefined1 *)((int)param_4 + 0xd);
  *(undefined1 *)((int)puVar6 + 0xe) = *(undefined1 *)((int)param_4 + 0xe);
  *(undefined1 *)((int)puVar6 + 0xf) = *(undefined1 *)((int)param_4 + 0xf);
  puVar6[4] = param_4[4];
  puVar6[5] = param_4[5];
  F_0042ccf0(puVar6 + 6 GEN_EDX_ARG,param_4 + 6);
  uVar2 = param_4[0x1b];
  puVar6[0x1b] = uVar2;
  return uVar2;
}

/* ref: FUN_00b9e600 */
GEN_FRAME uint F_00b9e600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb9e600u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  if (param_1 != param_2) {
    puVar2 = param_2 + 2;
    puVar3 = param_3;
    do {
      puVar4 = puVar3 - 0x1c;
      *puVar4 = puVar2[-0x1e];
      puVar3[-0x1b] = puVar2[-0x1d];
      puVar3[-0x1a] = puVar2[-0x1c];
      *(undefined1 *)(puVar3 - 0x19) = *(undefined1 *)(puVar2 - 0x1b);
      *(undefined1 *)((int)puVar3 - 99) = *(undefined1 *)((int)puVar2 - 0x6b);
      *(undefined1 *)((int)puVar3 - 0x62) = *(undefined1 *)((int)puVar2 - 0x6a);
      *(undefined1 *)((int)puVar3 - 0x61) = *(undefined1 *)((int)puVar2 - 0x69);
      puVar3[-0x18] = puVar2[-0x1a];
      puVar3[-0x17] = puVar2[-0x19];
      F_0042ccf0(puVar3 - 0x16 GEN_EDX_ARG,puVar2 - 0x18);
      puVar1 = puVar2 - 0x1e;
      puVar3[-1] = puVar2[-3];
      puVar2 = puVar2 - 0x1c;
      puVar3 = puVar4;
    } while (puVar1 != param_1);
    return (uint)puVar4;
  }
  return (uint)param_3;
}

/* ref: FUN_00b9e680 */
GEN_FRAME uint GEN_THISCALL F_00b9e680(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb9e680u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int local_8;
  
  local_8 = 0x36;
  puVar1 = (undefined4 *)((int)this + 8);
  do {
    F_0042b630(puVar1 + 4 GEN_EDX_FWD);
    puVar1[-2] = 0;
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1[1] = 0x1000000;
    puVar1[2] = 0;
    puVar1[3] = 0;
    F_0042e430(puVar1 + 4 GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
    puVar1[0x19] = 0;
    puVar1 = puVar1 + 0x1c;
    local_8 = local_8 - 1;
  } while (-1 < local_8);
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VGCSupplyDuty_UI_Game_Client_Game::vf0 */
GEN_FRAME uint GEN_THISCALL F_00b9e700(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb9e700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cb4870(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b9e730 */
GEN_FRAME uint GEN_THISCALL F_00b9e730(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb9e730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x70;
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

/* ref: FUN_00b9e770 */
GEN_FRAME uint GEN_THISCALL F_00b9e770(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb9e770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return (*(int *)this - *param_1) / 0x70;
}

/* ref: FUN_00b9e7a0 */
GEN_FRAME uint F_00b9e7a0(unsigned int gen_a0)
{
  GEN_ENTER(0xb9e7a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b9e7b0 */
GEN_FRAME uint GEN_THISCALL F_00b9e7b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9e7b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00b9e7d0 */
GEN_FRAME unsigned int F_00b9e7d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9e7d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0071f820(param_2 GEN_EDX_ARG,param_3);
  }
  return;
}

/* ref: FUN_00b9e7f0 */
GEN_FRAME uint F_00b9e7f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9e7f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar5 = *param_1;
  uVar6 = param_1[1];
  uVar7 = param_1[2];
  uVar1 = *(undefined1 *)((int)param_1 + 0xd);
  uVar2 = *(undefined1 *)(param_1 + 3);
  uVar3 = *(undefined1 *)((int)param_1 + 0xe);
  uVar8 = param_1[4];
  uVar4 = *(undefined1 *)((int)param_1 + 0xf);
  uVar9 = param_1[5];
  F_0042cbc0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1 + 6);
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  (*(undefined4 *)(gen_frame + 0x54)) = param_1[0x1b];
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  *(undefined1 *)((int)param_1 + 0xd) = *(undefined1 *)((int)param_2 + 0xd);
  *(undefined1 *)((int)param_1 + 0xe) = *(undefined1 *)((int)param_2 + 0xe);
  *(undefined1 *)((int)param_1 + 0xf) = *(undefined1 *)((int)param_2 + 0xf);
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  F_0042ccf0(param_1 + 6 GEN_EDX_ARG,param_2 + 6);
  param_1[0x1b] = param_2[0x1b];
  *param_2 = uVar5;
  param_2[2] = uVar7;
  *(undefined1 *)(param_2 + 3) = uVar2;
  param_2[1] = uVar6;
  *(undefined1 *)((int)param_2 + 0xe) = uVar3;
  *(undefined1 *)((int)param_2 + 0xf) = uVar4;
  *(undefined1 *)((int)param_2 + 0xd) = uVar1;
  param_2[5] = uVar9;
  param_2[4] = uVar8;
  F_0042ccf0(param_2 + 6 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  param_2[0x1b] = (*(undefined4 *)(gen_frame + 0x54));
  uVar10 = F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return (uint)uVar10;
}

/* ref: FUN_00b9e910 */
GEN_FRAME uint F_00b9e910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb9e910u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_2;
  while( true ) {
    iVar3 = iVar4 * 2 + 2;
    if (param_3 <= iVar3) break;
    if (*(uint *)(iVar3 * 0x70 + 0x14 + param_1) < *(uint *)(iVar3 * 0x70 - 0x5c + param_1)) {
      iVar3 = iVar4 * 2 + 1;
    }
    puVar1 = (undefined4 *)(iVar4 * 0x70 + param_1);
    iVar4 = iVar3 * 0x70 + param_1;
    *puVar1 = *(undefined4 *)(iVar3 * 0x70 + param_1);
    puVar1[1] = *(undefined4 *)(iVar4 + 4);
    puVar1[2] = *(undefined4 *)(iVar4 + 8);
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(iVar4 + 0xc);
    *(undefined1 *)((int)puVar1 + 0xd) = *(undefined1 *)(iVar4 + 0xd);
    *(undefined1 *)((int)puVar1 + 0xe) = *(undefined1 *)(iVar4 + 0xe);
    *(undefined1 *)((int)puVar1 + 0xf) = *(undefined1 *)(iVar4 + 0xf);
    puVar1[4] = *(undefined4 *)(iVar4 + 0x10);
    puVar1[5] = *(undefined4 *)(iVar4 + 0x14);
    F_0042ccf0(puVar1 + 6 GEN_EDX_ARG,iVar4 + 0x18);
    puVar1[0x1b] = *(undefined4 *)(iVar4 + 0x6c);
    iVar4 = iVar3;
  }
  if (iVar3 == param_3) {
    puVar1 = (undefined4 *)(iVar4 * 0x70 + param_1);
    iVar4 = param_3 * 0x70 - 0x70 + param_1;
    *puVar1 = *(undefined4 *)(param_3 * 0x70 - 0x70 + param_1);
    puVar1[1] = *(undefined4 *)(iVar4 + 4);
    puVar1[2] = *(undefined4 *)(iVar4 + 8);
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(iVar4 + 0xc);
    *(undefined1 *)((int)puVar1 + 0xd) = *(undefined1 *)(iVar4 + 0xd);
    *(undefined1 *)((int)puVar1 + 0xe) = *(undefined1 *)(iVar4 + 0xe);
    *(undefined1 *)((int)puVar1 + 0xf) = *(undefined1 *)(iVar4 + 0xf);
    puVar1[4] = *(undefined4 *)(iVar4 + 0x10);
    puVar1[5] = *(undefined4 *)(iVar4 + 0x14);
    F_0042ccf0(puVar1 + 6 GEN_EDX_ARG,iVar4 + 0x18);
    puVar1[0x1b] = *(undefined4 *)(iVar4 + 0x6c);
    iVar4 = param_3 - 1;
  }
  uVar2 = F_00b9e510(param_1,iVar4,param_2,param_4,param_5);
  return uVar2;
}

/* ref: FUN_00b9ea20 */
GEN_FRAME uint F_00b9ea20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9ea20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00b9e600(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_00b9ea40 */
GEN_FRAME uint F_00b9ea40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb9ea40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint uVar1;
  
  *param_3 = *param_1;
  param_3[1] = param_1[1];
  param_3[2] = param_1[2];
  *(undefined1 *)(param_3 + 3) = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)((int)param_3 + 0xd) = *(undefined1 *)((int)param_1 + 0xd);
  *(undefined1 *)((int)param_3 + 0xe) = *(undefined1 *)((int)param_1 + 0xe);
  *(undefined1 *)((int)param_3 + 0xf) = *(undefined1 *)((int)param_1 + 0xf);
  param_3[4] = param_1[4];
  param_3[5] = param_1[5];
  F_0042ccf0(param_3 + 6 GEN_EDX_ARG,param_1 + 6);
  param_3[0x1b] = param_1[0x1b];
  uVar1 = F_00b9e910(param_1,0,(param_2 - (int)param_1) / 0x70,param_4,param_5);
  return uVar1;
}

/* ref: FUN_00b9ead0 */
GEN_FRAME unsigned int F_00b9ead0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9ead0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0071f820(param_2 GEN_EDX_ARG,param_3);
  }
  return;
}

/* ref: FUN_00b9eaf0 */
GEN_FRAME uint F_00b9eaf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9eaf0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b9e7f0(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00b9eb00 */
GEN_FRAME uint F_00b9eb00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb9eb00u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  iVar3 = (param_2 - param_1) / 0x70;
  uVar4 = iVar3 - (iVar3 >> 0x1f);
  iVar6 = iVar3 / 2;
  if (0 < iVar6) {
    iVar5 = iVar6 * 0x70 + 8 + param_1;
    do {
      uVar1 = *(undefined4 *)(iVar5 - 0x74);
      uVar2 = *(undefined4 *)(iVar5 - 0x70);
      (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(iVar5 - 0x78);
      (*(undefined1 *)(gen_frame + 0x14)) = *(undefined1 *)(iVar5 - 0x6c);
      (*(undefined4 *)(gen_frame + 0xc)) = uVar1;
      (*(undefined4 *)(gen_frame + 0x10)) = uVar2;
      (*(undefined1 *)(gen_frame + 0x17)) = *(undefined1 *)(iVar5 - 0x69);
      (*(undefined1 *)(gen_frame + 0x15)) = *(undefined1 *)(iVar5 - 0x6b);
      (*(undefined1 *)(gen_frame + 0x16)) = *(undefined1 *)(iVar5 - 0x6a);
      iVar6 = iVar6 - 1;
      (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(iVar5 - 0x68);
      (*(undefined4 *)(gen_frame + 0x1c)) = *(undefined4 *)(iVar5 - 100);
      F_0042cbc0(((undefined1 *)(gen_frame + 0x20)) GEN_EDX_ARG,iVar5 - 0x60);
      (*(undefined4 *)(gen_frame + 0x74)) = *(undefined4 *)(iVar5 - 0xc);
      F_00b9e910(param_1,iVar6,iVar3,&(*(undefined4 *)(gen_frame + 0x8)),param_3);
      uVar7 = F_0042c880(((undefined1 *)(gen_frame + 0x20)) GEN_EDX_ARG);
      uVar4 = (uint)uVar7;
      iVar5 = iVar5 - 0x70;
    } while (0 < iVar6);
  }
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
  return uVar4;
}

/* ref: FUN_00b9ebd0 */
GEN_FRAME uint F_00b9ebd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb9ebd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 * puVar11;
  undefined4 * puVar12;
  undefined4 * puVar13;
  ulonglong uVar14;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  puVar13 = param_2;
  puVar12 = param_1;
  if (param_1 != param_2) {
    while (puVar11 = puVar12 + 0x1c, puVar11 != param_2) {
      uVar6 = *puVar11;
      uVar7 = puVar11[1];
      uVar8 = puVar11[2];
      uVar2 = *(undefined1 *)(puVar11 + 3);
      uVar3 = *(undefined1 *)((int)puVar12 + 0x7d);
      uVar4 = *(undefined1 *)((int)puVar12 + 0x7f);
      uVar5 = *(undefined1 *)((int)puVar12 + 0x7e);
      uVar9 = puVar11[4];
      uVar10 = puVar11[5];
      F_0042cbc0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,puVar11 + 6);
      (*(undefined4 *)(gen_frame + 0x54)) = puVar11[0x1b];
      if (uVar10 < (uint)param_1[5]) {
        F_00b9e600(param_1,puVar11,puVar11 + 0x1c,param_1);
        *param_1 = uVar6;
        *(undefined1 *)(param_1 + 3) = uVar2;
        param_1[1] = uVar7;
        param_1[2] = uVar8;
        *(undefined1 *)((int)param_1 + 0xf) = uVar4;
        *(undefined1 *)((int)param_1 + 0xd) = uVar3;
        *(undefined1 *)((int)param_1 + 0xe) = uVar5;
        param_1[4] = uVar9;
        param_1[5] = uVar10;
        F_0042ccf0(param_1 + 6 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
        param_1[0x1b] = (*(undefined4 *)(gen_frame + 0x54));
      }
      else {
        uVar1 = puVar11[-0x17];
        puVar13 = puVar11;
        while (uVar10 < uVar1) {
          *puVar13 = puVar13[-0x1c];
          puVar13[1] = puVar13[-0x1b];
          puVar13[2] = puVar13[-0x1a];
          *(undefined1 *)(puVar13 + 3) = *(undefined1 *)(puVar13 - 0x19);
          *(undefined1 *)((int)puVar13 + 0xd) = *(undefined1 *)((int)puVar13 - 99);
          *(undefined1 *)((int)puVar13 + 0xe) = *(undefined1 *)((int)puVar13 - 0x62);
          *(undefined1 *)((int)puVar13 + 0xf) = *(undefined1 *)((int)puVar13 - 0x61);
          puVar13[4] = puVar13[-0x18];
          puVar13[5] = puVar13[-0x17];
          F_0042ccf0(puVar13 + 6 GEN_EDX_ARG,puVar13 - 0x16);
          puVar13[0x1b] = puVar13[-1];
          uVar1 = puVar13[-0x33];
          puVar13 = puVar13 - 0x1c;
        }
        *puVar13 = uVar6;
        puVar13[1] = uVar7;
        puVar13[2] = uVar8;
        *(undefined1 *)(puVar13 + 3) = uVar2;
        *(undefined1 *)((int)puVar13 + 0xd) = uVar3;
        *(undefined1 *)((int)puVar13 + 0xe) = uVar5;
        *(undefined1 *)((int)puVar13 + 0xf) = uVar4;
        puVar13[4] = uVar9;
        puVar13[5] = uVar10;
        F_0042ccf0(puVar13 + 6 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
        puVar13[0x1b] = (*(undefined4 *)(gen_frame + 0x54));
      }
      uVar14 = F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      puVar13 = (undefined4 *)uVar14;
      puVar12 = puVar11;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return (uint)puVar13;
}

/* ref: FUN_00b9ed90 */
GEN_FRAME uint F_00b9ed90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9ed90u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  
  if (*(uint *)(param_2 + 0x14) < *(uint *)(param_1 + 0x14)) {
    F_00b9e7f0(param_2,param_1);
  }
  uVar1 = param_3;
  if (*(uint *)(param_3 + 0x14) < *(uint *)(param_2 + 0x14)) {
    uVar1 = F_00b9e7f0(param_3,param_2);
  }
  if (*(uint *)(param_2 + 0x14) < *(uint *)(param_1 + 0x14)) {
    uVar1 = F_00b9e7f0(param_2,param_1);
  }
  return uVar1;
}

/* ref: FUN_00b9ede0 */
GEN_FRAME uint F_00b9ede0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9ede0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  undefined4 uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  uVar1 = *(undefined4 *)(param_2 - 0x6c);
  uVar2 = *(undefined4 *)(param_2 - 0x68);
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(param_2 - 0x70);
  (*(undefined4 *)(gen_frame + 0xc)) = uVar1;
  (*(undefined1 *)(gen_frame + 0x14)) = *(undefined1 *)(param_2 - 100);
  (*(undefined4 *)(gen_frame + 0x10)) = uVar2;
  (*(undefined1 *)(gen_frame + 0x15)) = *(undefined1 *)(param_2 - 99);
  (*(undefined1 *)(gen_frame + 0x17)) = *(undefined1 *)(param_2 - 0x61);
  (*(undefined1 *)(gen_frame + 0x16)) = *(undefined1 *)(param_2 - 0x62);
  (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(param_2 - 0x60);
  (*(undefined4 *)(gen_frame + 0x1c)) = *(undefined4 *)(param_2 - 0x5c);
  F_0042cbc0(((undefined1 *)(gen_frame + 0x20)) GEN_EDX_ARG,param_2 - 0x58);
  (*(undefined4 *)(gen_frame + 0x74)) = *(undefined4 *)(param_2 - 4);
  F_00b9ea40(param_1,param_2 - 0x70,param_2 - 0x70,&(*(undefined4 *)(gen_frame + 0x8)),param_3,0);
  uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x20)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
  return (uint)uVar3;
}

/* ref: FUN_00b9ee80 */
GEN_FRAME uint F_00b9ee80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9ee80u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = (param_2 - param_1) / 0x70;
  if (1 < (int)uVar1) {
    uVar1 = F_00b9eb00(param_1,param_2,param_3,0,0);
  }
  return uVar1;
}

/* ref: FUN_00b9eec0 */
GEN_FRAME uint F_00b9eec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9eec0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00b9ebd0(param_1,param_2,param_3,0);
  return uVar1;
}

/* ref: FUN_00b9eee0 */
GEN_FRAME uint F_00b9eee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb9eee0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_1 != param_2) {
    puVar2 = param_1 + 2;
    puVar3 = param_3;
    do {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = puVar2[-2];
        puVar3[1] = puVar2[-1];
        puVar3[2] = *puVar2;
        *(undefined1 *)(puVar3 + 3) = *(undefined1 *)(puVar2 + 1);
        *(undefined1 *)((int)puVar3 + 0xd) = *(undefined1 *)((int)puVar2 + 5);
        *(undefined1 *)((int)puVar3 + 0xe) = *(undefined1 *)((int)puVar2 + 6);
        *(undefined1 *)((int)puVar3 + 0xf) = *(undefined1 *)((int)puVar2 + 7);
        puVar3[4] = puVar2[2];
        puVar3[5] = puVar2[3];
        F_0042cbc0(puVar3 + 6 GEN_EDX_ARG,puVar2 + 4);
        puVar3[0x1b] = puVar2[0x19];
      }
      puVar1 = puVar2 + 0x1a;
      puVar3 = puVar3 + 0x1c;
      puVar2 = puVar2 + 0x1c;
    } while (puVar1 != param_2);
    return (uint)puVar3;
  }
  return (uint)param_3;
}

/* ref: FUN_00b9ef60 */
GEN_FRAME uint F_00b9ef60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb9ef60u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = (param_3 - param_1) / 0x70;
  if (iVar1 < 0x29) {
    if (*(uint *)(param_2 + 0x14) < *(uint *)(param_1 + 0x14)) {
      F_00b9e7f0(param_2,param_1);
    }
    if (*(uint *)(param_3 + 0x14) < *(uint *)(param_2 + 0x14)) {
      F_00b9e7f0(param_3,param_2);
    }
    uVar3 = *(uint *)(param_2 + 0x14);
    if (uVar3 < *(uint *)(param_1 + 0x14)) {
      uVar3 = F_00b9e7f0(param_2,param_1);
    }
  }
  else {
    iVar1 = iVar1 + 1;
    iVar2 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    iVar5 = iVar2 * 0x70;
    iVar1 = iVar5 + param_1;
    iVar4 = iVar2 * 0xe0 + param_1;
    if (*(uint *)(iVar5 + 0x14 + param_1) < *(uint *)(param_1 + 0x14)) {
      F_00b9e7f0(iVar1,param_1);
    }
    if (*(uint *)(iVar4 + 0x14) < *(uint *)(iVar1 + 0x14)) {
      F_00b9e7f0(iVar4,iVar1);
    }
    if (*(uint *)(iVar1 + 0x14) < *(uint *)(param_1 + 0x14)) {
      F_00b9e7f0(iVar1,param_1);
    }
    iVar4 = param_2 + iVar2 * -0x70;
    if (*(uint *)(param_2 + 0x14) < *(uint *)(iVar4 + 0x14)) {
      F_00b9e7f0(param_2,iVar4);
    }
    if (*(uint *)(iVar5 + 0x14 + param_2) < *(uint *)(param_2 + 0x14)) {
      F_00b9e7f0(iVar5 + param_2,param_2);
    }
    if (*(uint *)(param_2 + 0x14) < *(uint *)(iVar4 + 0x14)) {
      F_00b9e7f0(param_2,iVar4);
    }
    iVar4 = param_3 + iVar2 * -0x70;
    iVar2 = param_3 + iVar2 * -0xe0;
    if (*(uint *)(iVar4 + 0x14) < *(uint *)(iVar2 + 0x14)) {
      F_00b9e7f0(iVar4,iVar2);
    }
    if (*(uint *)(param_3 + 0x14) < *(uint *)(iVar4 + 0x14)) {
      F_00b9e7f0(param_3,iVar4);
    }
    if (*(uint *)(iVar4 + 0x14) < *(uint *)(iVar2 + 0x14)) {
      F_00b9e7f0(iVar4,iVar2);
    }
    if (*(uint *)(param_2 + 0x14) < *(uint *)(iVar1 + 0x14)) {
      F_00b9e7f0(param_2,iVar1);
    }
    if (*(uint *)(iVar4 + 0x14) < *(uint *)(param_2 + 0x14)) {
      F_00b9e7f0(iVar4,param_2);
    }
    uVar3 = *(uint *)(param_2 + 0x14);
    if (uVar3 < *(uint *)(iVar1 + 0x14)) {
      uVar3 = F_00b9e7f0(param_2,iVar1);
      return uVar3;
    }
  }
  return uVar3;
}

/* ref: FUN_00b9f100 */
GEN_FRAME uint F_00b9f100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9f100u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  undefined4 uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  uVar1 = *(undefined4 *)(param_2 - 0x6c);
  uVar2 = *(undefined4 *)(param_2 - 0x68);
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(param_2 - 0x70);
  (*(undefined4 *)(gen_frame + 0xc)) = uVar1;
  (*(undefined1 *)(gen_frame + 0x14)) = *(undefined1 *)(param_2 - 100);
  (*(undefined4 *)(gen_frame + 0x10)) = uVar2;
  (*(undefined1 *)(gen_frame + 0x15)) = *(undefined1 *)(param_2 - 99);
  (*(undefined1 *)(gen_frame + 0x17)) = *(undefined1 *)(param_2 - 0x61);
  (*(undefined1 *)(gen_frame + 0x16)) = *(undefined1 *)(param_2 - 0x62);
  (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(param_2 - 0x60);
  (*(undefined4 *)(gen_frame + 0x1c)) = *(undefined4 *)(param_2 - 0x5c);
  F_0042cbc0(((undefined1 *)(gen_frame + 0x20)) GEN_EDX_ARG,param_2 - 0x58);
  (*(undefined4 *)(gen_frame + 0x74)) = *(undefined4 *)(param_2 - 4);
  F_00b9ea40(param_1,param_2 - 0x70,param_2 - 0x70,&(*(undefined4 *)(gen_frame + 0x8)),param_3,0);
  uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x20)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
  return (uint)uVar3;
}

/* ref: FUN_00b9f1a0 */
GEN_FRAME uint F_00b9f1a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb9f1a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00b9eee0(param_1,param_2,param_3,param_4,0,in_ECX);
  return uVar1;
}

/* ref: FUN_00b9f1d0 */
GEN_FRAME uint F_00b9f1d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb9f1d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint local_8;
  
  uVar7 = ((int)(param_3 - param_2) / 0xe0) * 0x70 + param_2;
  F_00b9ef60(param_2,uVar7,param_3 - 0x70,param_4);
  uVar3 = uVar7 + 0x70;
  for (; ((param_2 < uVar7 &&
          (uVar5 = *(uint *)(uVar7 - 0x5c), uVar1 = *(uint *)(uVar7 + 0x14),
          uVar5 > uVar1 || uVar1 == uVar5)) && (uVar5 <= uVar1)); uVar7 = uVar7 - 0x70) {
  }
  uVar5 = uVar3;
  uVar1 = uVar3;
  uVar6 = uVar7;
  if (uVar3 < param_3) {
    uVar4 = *(uint *)(uVar7 + 0x14);
    do {
      uVar2 = *(uint *)(uVar3 + 0x14);
      uVar5 = uVar3;
      uVar1 = uVar3;
      if ((uVar4 >= uVar2 && uVar4 != uVar2) || (uVar4 < uVar2)) break;
      uVar3 = uVar3 + 0x70;
      uVar5 = uVar3;
      uVar1 = uVar3;
    } while (uVar3 < param_3);
  }
joined_r0x00b9f25a: ;
  do {
    if (param_3 <= uVar3) {
joined_r0x00b9f28c: ;
      for (; param_2 < uVar6; uVar6 = uVar6 - 0x70) {
        if (*(uint *)(uVar7 + 0x14) <= *(uint *)(uVar6 - 0x5c)) {
          if (*(uint *)(uVar7 + 0x14) < *(uint *)(uVar6 - 0x5c)) break;
          uVar7 = uVar7 - 0x70;
          F_00b9e7f0(uVar7,uVar6 - 0x70);
          uVar5 = uVar1;
        }
      }
      if (uVar6 == param_2) {
        if (uVar3 == param_3) {
          *param_1 = uVar7;
          param_1[1] = uVar5;
          return (uint)param_1;
        }
        uVar4 = uVar5;
        if (uVar5 != uVar3) {
          F_00b9e7f0(uVar7,uVar5);
          uVar4 = uVar1;
        }
        F_00b9e7f0(uVar7,uVar3);
        uVar3 = uVar3 + 0x70;
        uVar5 = uVar4 + 0x70;
        uVar1 = uVar4 + 0x70;
        uVar7 = uVar7 + 0x70;
      }
      else {
        uVar6 = uVar6 - 0x70;
        if (uVar3 == param_3) {
          uVar7 = uVar7 - 0x70;
          if (uVar6 != uVar7) {
            F_00b9e7f0(uVar6,uVar7);
            uVar5 = uVar1;
          }
          uVar5 = uVar5 - 0x70;
          F_00b9e7f0(uVar7,uVar5);
          uVar1 = uVar5;
        }
        else {
          F_00b9e7f0(uVar3,uVar6);
          uVar3 = uVar3 + 0x70;
          uVar5 = uVar1;
        }
      }
      goto joined_r0x00b9f25a;
    }
    uVar4 = uVar5;
    local_8 = uVar1;
    if (*(uint *)(uVar3 + 0x14) <= *(uint *)(uVar7 + 0x14)) {
      if (*(uint *)(uVar3 + 0x14) < *(uint *)(uVar7 + 0x14)) goto joined_r0x00b9f28c;
      uVar4 = uVar5 + 0x70;
      F_00b9e7f0(uVar5,uVar3);
      local_8 = uVar4;
    }
    uVar3 = uVar3 + 0x70;
    uVar5 = uVar4;
    uVar1 = local_8;
  } while( true );
}

/* ref: FUN_00b9f350 */
GEN_FRAME uint F_00b9f350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9f350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  uVar3 = (param_2 - (int)param_1) / 0x70;
  if (1 < (int)uVar3) {
    puVar4 = (undefined4 *)(param_2 - 0x68);
    do {
      uVar1 = puVar4[-1];
      uVar2 = *puVar4;
      (*(undefined4 *)(gen_frame + 0x8)) = puVar4[-2];
      (*(undefined4 *)(gen_frame + 0xc)) = uVar1;
      (*(undefined4 *)(gen_frame + 0x10)) = uVar2;
      (*(undefined1 *)(gen_frame + 0x14)) = *(undefined1 *)(puVar4 + 1);
      (*(undefined1 *)(gen_frame + 0x15)) = *(undefined1 *)((int)puVar4 + 5);
      (*(undefined1 *)(gen_frame + 0x16)) = *(undefined1 *)((int)puVar4 + 6);
      (*(undefined1 *)(gen_frame + 0x17)) = *(undefined1 *)((int)puVar4 + 7);
      (*(undefined4 *)(gen_frame + 0x18)) = puVar4[2];
      (*(undefined4 *)(gen_frame + 0x1c)) = puVar4[3];
      F_0042cbc0(((undefined1 *)(gen_frame + 0x20)) GEN_EDX_ARG,puVar4 + 4);
      puVar4[-2] = *param_1;
      puVar4[-1] = param_1[1];
      (*(undefined4 *)(gen_frame + 0x74)) = puVar4[0x19];
      *puVar4 = param_1[2];
      *(undefined1 *)(puVar4 + 1) = *(undefined1 *)(param_1 + 3);
      *(undefined1 *)((int)puVar4 + 5) = *(undefined1 *)((int)param_1 + 0xd);
      *(undefined1 *)((int)puVar4 + 6) = *(undefined1 *)((int)param_1 + 0xe);
      *(undefined1 *)((int)puVar4 + 7) = *(undefined1 *)((int)param_1 + 0xf);
      puVar4[2] = param_1[4];
      puVar4[3] = param_1[5];
      F_0042ccf0(puVar4 + 4 GEN_EDX_ARG,param_1 + 6);
      puVar4[0x19] = param_1[0x1b];
      F_00b9e910(param_1,0,((-8 - (int)param_1) + (int)puVar4) / 0x70,&(*(undefined4 *)(gen_frame + 0x8)),param_3);
      F_0042c880(((undefined1 *)(gen_frame + 0x20)) GEN_EDX_ARG);
      puVar4 = puVar4 - 0x1c;
      uVar3 = ((0x68 - (int)param_1) + (int)puVar4) / 0x70;
    } while (1 < (int)uVar3);
  }
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_00b9f4a0 */
GEN_FRAME uint GEN_THISCALL F_00b9f4a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb9f4a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00b9eee0(param_1,param_2,param_3,(int)this + 0xc,0,param_3);
  return uVar1;
}

/* ref: FUN_00b9f4d0 */
GEN_FRAME uint F_00b9f4d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9f4d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00b9f350(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00b9f4f0 */
GEN_FRAME uint GEN_THISCALL F_00b9f4f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb9f4f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = (*(int *)((int)this + 8) - *(int *)this) / 0x70;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x70,0,800);
    F_00b9eee0(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3,(int)this + 0xc,0,param_1)
    ;
    iVar1 = *(int *)((int)this + 4);
    iVar2 = *(int *)this;
    iVar4 = *(int *)this;
    if (iVar4 != 0) {
      for (; iVar4 != iVar1; iVar4 = iVar4 + 0x70) {
        F_0042c880((undefined *)(iVar4 + 0x18) GEN_EDX_ARG);
      }
      F_00429760(*(undefined4 *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x70) * 0x70,800)
      ;
    }
    *(uint *)((int)this + 4) = ((iVar1 - iVar2) / 0x70) * 0x70 + uVar3;
    *(uint *)((int)this + 8) = param_1 * 0x70 + uVar3;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00b9f5f0 */
GEN_FRAME uint F_00b9f5f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb9f5f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = param_2 - param_1;
  iVar4 = param_2;
  iVar3 = param_3;
  do {
    uVar1 = iVar2 / 0x70;
    if ((int)uVar1 < 0x21) {
LAB_00b9f6d1: ;
      if (1 < (int)uVar1) {
        uVar1 = F_00b9ebd0(param_1,iVar4,param_4,0);
      }
      return uVar1;
    }
    if (iVar3 < 1) {
      if (0x20 < (int)uVar1) {
        if (1 < (iVar4 - param_1) / 0x70) {
          F_00b9eb00(param_1,iVar4,param_4,0,0);
        }
        uVar1 = F_00b9f350(param_1,iVar4,param_4);
        return uVar1;
      }
      goto LAB_00b9f6d1;
    }
    F_00b9f1d0(&(*(int *)(gen_frame + 0x4)),param_1,iVar4,param_4);
    iVar3 = iVar3 / 2 + (iVar3 / 2) / 2;
    if (((*(int *)(gen_frame + 0x4)) - param_1) / 0x70 < (iVar4 - (*(int *)(gen_frame + 0x8))) / 0x70) {
      F_00b9f5f0(param_1,(*(int *)(gen_frame + 0x4)),iVar3,param_4);
      param_1 = (*(int *)(gen_frame + 0x8));
    }
    else {
      F_00b9f5f0((*(int *)(gen_frame + 0x8)),iVar4,iVar3,param_4);
      iVar4 = (*(int *)(gen_frame + 0x4));
    }
    iVar2 = iVar4 - param_1;
  } while( true );
}

/* ref: FUN_00b9f740 */
GEN_FRAME uint GEN_THISCALL F_00b9f740(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb9f740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x70;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x70;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00b9f4f0(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00b9f4f0(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00b9f7d0 */
GEN_FRAME uint F_00b9f7d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9f7d0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00b9f5f0(param_1,param_2,(param_2 - param_1) / 0x70,param_3);
  return uVar1;
}

/* ref: FUN_00b9f810 */
GEN_FRAME unsigned int GEN_THISCALL F_00b9f810(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb9f810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 4);
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00b9f740(this GEN_EDX_FWD,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_0071f820(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_ARG,((int)(param_1 - uVar2) / 0x70) * 0x70 + *(int *)this);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x70;
      return;
    }
  }
  else {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00b9f740(this GEN_EDX_ARG,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_0071f820(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_ARG,param_1);
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x70;
  return;
}

/* ref: FUN_00b9f890 */
GEN_FRAME float10 F_00b9f890(float gen_a0)
{
  GEN_ENTER(0xb9f890u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: FUN_00b9f8b0 */
GEN_NOFRAME uint GEN_THISCALL F_00b9f8b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb9f8b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  int iVar1;
  ulonglong uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1102cb8));
  iVar1 = 4;
  this_00 = (undefined *)((int)this + 600);
  do {
    this_00 = (undefined *)((int)this_00 - 0x74);
    uVar2 = F_0042c880(this_00 GEN_EDX_FWD);
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  return (uint)uVar2;
}

/* ref: FUN_00b9f8e0 */
GEN_FRAME byte F_00b9f8e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb9f8e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  byte * param_5 = (byte *)(uintptr_t)gen_a4;
  uint * puVar1;
  uint * puVar2;
  uint uVar3;
  undefined1 * puVar4;
  
  if ((byte)param_4 != 0) {
    puVar1 = (uint *)(param_5 + 4);
    uVar3 = (uint)(byte)param_4;
    puVar2 = param_2;
    puVar4 = param_3;
    do {
      *puVar1 = *((uint *)GEN_TOP(((param_1 - (int)param_2) + (int)puVar2)));
      puVar1[1] = *puVar2;
      *(undefined1 *)(puVar1 + 0x18) = *puVar4;
      if (1999999 < *puVar1) {
        *(undefined1 *)(puVar1 + 0x18) = 0;
      }
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
      puVar1 = puVar1 + 0x1d;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
    *param_5 = (byte)param_4;
    return (byte)param_4;
  }
  *param_5 = 0;
  return (byte)param_5;
}

/* ref: FUN_00b9f940 */
GEN_FRAME byte GEN_THISCALL F_00b9f940(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9f940u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(byte *)((int)this + 4) = (byte)param_1;
  *(undefined4 *)((int)this + 0x250) = param_2;
  return (byte)param_1;
}

/* ref: FUN_00b9f960 */
GEN_NOFRAME uint GEN_THISCALL F_00b9f960(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb9f960u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: FUN_00b9f970 */
GEN_NOFRAME unsigned int F_00b9f970(void)
{
  GEN_ENTER(0xb9f970u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00b9f980 */
GEN_FRAME uint GEN_THISCALL F_00b9f980(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb9f980u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar3 = (uint)*(byte *)((int)this + 0x264) * 0x74;
  iVar4 = *(int *)(iVar3 + 8 + (int)this);
  iVar1 = *(int *)(*param_1 + 4);
  if (*(char *)(iVar3 + 0x68 + (int)this) != '\0') {
    iVar4 = iVar4 + 1000000;
  }
  uVar5 = F_00ab65a0(iVar4,0);
  *((uint *)GEN_TOP(((uint)*(byte *)((int)this + 0x264) * 0x74 + 0x10 + (int)this))) = uVar5;
  iVar3 = (uint)*(byte *)((int)this + 0x264) * 0x74;
  iVar4 = *(int *)(iVar3 + 8 + (int)this);
  if (*(char *)(iVar3 + 0x68 + (int)this) != '\0') {
    iVar4 = iVar4 + 1000000;
  }
  uVar5 = F_00ab6240(iVar4,0,0);
  F_0042e430(((undefined *)GEN_TOP(((uint)*(byte *)((int)this + 0x264) * 0x74 + 0x14 + (int)this))) GEN_EDX_ARG,uVar5);
  *((bool *)GEN_TOP(((uint)*(byte *)((int)this + 0x264) * 0x74 + 0x7a + (int)this))) =
       1 < *(uint *)(iVar1 + 0x28);
  *((bool *)GEN_TOP(((uint)*(byte *)((int)this + 0x264) * 0x74 + 0x7b + (int)this))) =
       *(char *)(iVar1 + 0xa3) == '\a';
  puVar2 = *(undefined4 * PTR32 *)((int)this + 600);
  *(undefined4 *)((int)this + 0x254) = 0;
  if (puVar2 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
    *(undefined4 *)((int)this + 600) = 0;
  }
  *(char *)((int)this + 0x264) = *(char *)((int)this + 0x264) + '\x01';
  uVar5 = F_00b9ffe0(this GEN_EDX_ARG);
  return uVar5;
}

/* ref: FUN_00b9fa60 */
GEN_FRAME uint GEN_THISCALL F_00b9fa60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb9fa60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int iVar1;
  undefined4 * puVar2;
  ulonglong uVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  iVar1 = *(int *)(*param_1 + 4);
  F_0042b630(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_FWD);
  *((uint *)GEN_TOP(((uint)*(byte *)((int)this + 0x264) * 0x74 + 0x10 + (int)this))) =
       (uint)*(ushort *)(iVar1 + 0x1c);
  F_00ab9240(0x18f4a,**((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x260) + 0xc))),((undefined1 *)(gen_frame + 0x4)));
  F_0042ccf0(((undefined *)GEN_TOP(((uint)*(byte *)((int)this + 0x264) * 0x74 + 0x14 + (int)this))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  *((bool *)GEN_TOP(((uint)*(byte *)((int)this + 0x264) * 0x74 + 0x7a + (int)this))) =
       1 < *(byte *)(iVar1 + 0x20);
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x260);
  *(undefined4 *)((int)this + 0x25c) = 0;
  if (puVar2 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
    *(undefined4 *)((int)this + 0x260) = 0;
  }
  *(char *)((int)this + 0x264) = *(char *)((int)this + 0x264) + '\x01';
  F_00b9ffe0(this GEN_EDX_ARG);
  uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return (uint)uVar3;
}

/* ref: FUN_00b9fb30 */
GEN_FRAME byte GEN_THISCALL F_00b9fb30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9fb30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char * pcVar1;
  char cVar2;
  byte bVar3;
  ushort uVar4;
  undefined * pvVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  cVar2 = *(char *)((int)this + 4);
  (*(char *)(gen_frame + 0x18)) = '\0';
  (*(undefined4 *)(gen_frame + 0x19)) = 0;
  (*(byte *)(gen_frame + 0x17)) = 0;
  if (cVar2 != '\0') {
    do {
      if (*(char *)((int)param_1 + 6) == '\0') {
        iVar8 = *(int *)((int)param_1 + 8);
      }
      else {
        pvVar5 = (undefined *)F_00a3a860(param_1 GEN_EDX_FWD);
        cVar2 = *(char *)((int)pvVar5 + 6);
        while (cVar2 == '\0') {
          pvVar5 = (undefined *)F_00a3a860(pvVar5 GEN_EDX_ARG);
          cVar2 = *(char *)((int)pvVar5 + 6);
        }
        iVar8 = *(int *)((int)pvVar5 + 8);
      }
      uVar9 = (uint)(*(byte *)(gen_frame + 0x17));
      if (((*(int *)((int)this + uVar9 * 0x74 + 8) == iVar8) &&
          (uVar6 = F_00a3a8a0(param_1 GEN_EDX_ARG), *(uint *)((int)this + uVar9 * 0x74 + 0xc) <= uVar6)) &&
         ((*(char *)((int)this + uVar9 * 0x74 + 0x68) == '\0' ||
          ((*(byte *)((int)param_1 + 0x14) & 1) != 0)))) {
        (*(byte * PTR32 *)(gen_frame + 0x8)) = (byte *)((int)this + uVar9 * 0x74 + 0x74);
        (*(ushort * PTR32 *)(gen_frame + 0x10)) = (ushort *)((int)this + uVar9 * 0x74 + 0x6a);
        (*(byte *)(gen_frame + 0x16)) = 0;
        (*(char *)(gen_frame + 0x20)) = '\0';
        (*(undefined4 *)(gen_frame + 0x21)) = 0;
        (*(uint *)(gen_frame + 0xc)) = 0;
        do {
          cVar2 = *(char *)((int)this + uVar9 * 0x74 + 0x79);
          pcVar1 = &(*(char *)(gen_frame + 0x18)) + (*(uint *)(gen_frame + 0xc));
          *pcVar1 = '\0';
          if (cVar2 != '\0') {
            if ((*(char *)((int)param_1 + 6) == '\0') || (uVar6 = F_00a3a860(param_1 GEN_EDX_ARG), uVar6 == 0)
               ) {
              uVar4 = *((ushort *)GEN_TOP(((int)param_1 + ((*(uint *)(gen_frame + 0xc)) & 0xff) * 2 + 0x20)));
            }
            else {
              uVar6 = (*(uint *)(gen_frame + 0xc));
              pvVar5 = (undefined *)F_00a3a860(param_1 GEN_EDX_ARG);
              uVar4 = F_0071d2c0(pvVar5 GEN_EDX_ARG,uVar6);
            }
            if (uVar4 != 0) {
              (*(byte *)(gen_frame + 0x16)) = (*(byte *)(gen_frame + 0x16)) + 1;
            }
          }
          if (*(*(ushort * PTR32 *)(gen_frame + 0x10)) == 0) {
            *pcVar1 = '\x01';
          }
          else {
            uVar6 = 0;
            do {
              if ((&(*(char *)(gen_frame + 0x20)))[uVar6] == '\0') {
                if ((*(char *)((int)param_1 + 6) == '\0') ||
                   (uVar7 = F_00a3a860(param_1 GEN_EDX_ARG), uVar7 == 0)) {
                  uVar4 = *((ushort *)GEN_TOP(((int)param_1 + (uVar6 & 0xff) * 2 + 0x20)));
                }
                else {
                  uVar7 = uVar6;
                  pvVar5 = (undefined *)F_00a3a860(param_1 GEN_EDX_ARG);
                  uVar4 = F_0071d2c0(pvVar5 GEN_EDX_ARG,uVar7);
                }
                if (*(*(ushort * PTR32 *)(gen_frame + 0x10)) == uVar4) {
                  if ((*(char *)((int)param_1 + 6) == '\0') ||
                     (uVar7 = F_00a3a860(param_1 GEN_EDX_ARG), uVar7 == 0)) {
                    bVar3 = *((byte *)GEN_TOP(((uVar6 & 0xff) + 0x2a + (int)param_1)));
                  }
                  else {
                    uVar7 = uVar6;
                    pvVar5 = (undefined *)F_00a3a860(param_1 GEN_EDX_ARG);
                    bVar3 = F_0071d300(pvVar5 GEN_EDX_ARG,uVar7);
                  }
                  if (*(*(byte * PTR32 *)(gen_frame + 0x8)) == bVar3) {
                    *pcVar1 = '\x01';
                    (&(*(char *)(gen_frame + 0x20)))[uVar6] = '\x01';
                    break;
                  }
                }
              }
              uVar6 = uVar6 + 1;
            } while ((int)uVar6 < 5);
            if (*pcVar1 == '\0') break;
          }
          (*(ushort * PTR32 *)(gen_frame + 0x10)) = (*(ushort * PTR32 *)(gen_frame + 0x10)) + 1;
          (*(byte * PTR32 *)(gen_frame + 0x8)) = (*(byte * PTR32 *)(gen_frame + 0x8)) + 1;
          (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) + 1;
        } while ((int)(*(uint *)(gen_frame + 0xc)) < 5);
        bVar3 = *(byte *)((int)this + uVar9 * 0x74 + 0x79);
        if ((bVar3 == 0) || (bVar3 <= (*(byte *)(gen_frame + 0x16)))) {
          iVar8 = 0;
          do {
            if ((&(*(char *)(gen_frame + 0x18)))[iVar8] == '\0') goto LAB_00b9fd3e;
            iVar8 = iVar8 + 1;
          } while (iVar8 < 5);
          pvVar5 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,0x7d5);
          if ((((pvVar5 != (undefined *)0x0) && (uVar9 = F_00a363c0(pvVar5 GEN_EDX_ARG,uVar9), uVar9 != 0)) &&
              (*(char *)(uVar9 + 6) == '\0')) && (*(int *)(uVar9 + 8) == 0)) {
            *param_2 = *(undefined4 *)((uint)(*(byte *)(gen_frame + 0x17)) * 0x74 + 0xc + (int)this);
            F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
            return (*(byte *)(gen_frame + 0x17));
          }
        }
      }
LAB_00b9fd3e: ;
      (*(byte *)(gen_frame + 0x17)) = (*(byte *)(gen_frame + 0x17)) + 1;
    } while ((*(byte *)(gen_frame + 0x17)) < *(byte *)((int)this + 4));
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return 5;
}

/* ref: FUN_00b9fda0 */
GEN_FRAME unsigned int GEN_THISCALL F_00b9fda0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9fda0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  
  if ((byte)param_1 < 2) {
    uVar2 = 0;
    if ((byte)param_1 != 0) {
      do {
        if (*(int *)((int)this + uVar2 * 4 + 0x268) == param_2) {
          return;
        }
        bVar1 = (char)uVar2 + 1;
        uVar2 = (uint)bVar1;
      } while (bVar1 < (byte)param_1);
    }
    *(int *)((int)this + (uint)(byte)param_1 * 4 + 0x268) = param_2;
  }
  return;
}

/* ref: FUN_00b9fe10 */
GEN_FRAME uint GEN_THISCALL F_00b9fe10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb9fe10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  byte bVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  F_00c48350(((undefined1 *)(gen_frame + 0xc)),0,0x3c);
  bVar1 = *(byte *)((int)this + 4);
  if (param_1 == 0) {
    (*(undefined4 *)(gen_frame + 0x8)) = 1;
  }
  else {
    if (param_1 == 1) {
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
    }
    F_00a48ae0(&REFG(undefined, 0x14a4230) GEN_EDX_ARG);
  }
  if (*(byte *)((int)this + 4) != 0) {
    puVar3 = ((undefined4 *)(gen_frame + 0x10));
    puVar2 = (undefined4 *)((int)this + 0xc);
    uVar4 = (uint)*(byte *)((int)this + 4);
    do {
      puVar3[-1] = puVar2[-1];
      *puVar3 = *puVar2;
      puVar3[1] = (uint)*(byte *)(puVar2 + 0x17);
      puVar2 = puVar2 + 0x1d;
      puVar3 = puVar3 + 3;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x250) + 0xec))))
                    (*(int * PTR32 *)((int)this + 0x250) GEN_EDX_ARG,param_1,&(*(undefined4 *)(gen_frame + 0x8)),(uint)bVar1 * 3 + 1);
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
  return uVar4;
}

/* ref: FUN_00b9fec0 */
GEN_NOFRAME uint GEN_THISCALL F_00b9fec0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb9fec0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1102cb8));
  F_0072dd60((undefined *)((int)this + 4) GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00b9fee0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00b9fee0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb9fee0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  F_0071d9a0((undefined *)((int)this + 4) GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x254) = 0;
  *(undefined4 *)((int)this + 0x25c) = 0;
  *(undefined4 *)((int)this + 600) = 0;
  *(undefined4 *)((int)this + 0x260) = 0;
  *(undefined4 *)((int)this + 0x24c) = 0;
  *(undefined4 *)((int)this + 0x250) = 0;
  iVar1 = *(int *)((int)this + 0x268);
  while (iVar1 != 0) {
    *(undefined4 *)((int)this + 0x268) = *(undefined4 *)((int)this + 0x26c);
    *(undefined4 *)((int)this + 0x26c) = 0;
    iVar1 = *(int *)((int)this + 0x268);
  }
  return 0;
}

/* ref: FUN_00b9ff40 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00b9ff40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb9ff40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  
  if (*(int *)((int)this + 600) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x254);
    if (piVar1 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1 GEN_EDX_FWD,*(int *)((int)this + 600));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 600);
    if (puVar2 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 600) = 0;
    }
  }
  if (*(int *)((int)this + 0x260) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x25c);
    if (piVar1 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1 GEN_EDX_ARG,*(int *)((int)this + 0x260));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x260);
    if (puVar2 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 0x260) = 0;
    }
  }
  *(undefined4 *)((int)this + 0x24c) = 0;
  *(undefined4 *)((int)this + 0x250) = 0;
  iVar3 = *(int *)((int)this + 0x268);
  while (iVar3 != 0) {
    *(undefined4 *)((int)this + 0x268) = *(undefined4 *)((int)this + 0x26c);
    *(undefined4 *)((int)this + 0x26c) = 0;
    iVar3 = *(int *)((int)this + 0x268);
  }
  return 0;
}

/* ref: FUN_00b9ffe0 */
GEN_FRAME uint GEN_THISCALL F_00b9ffe0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb9ffe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  byte bVar1;
  undefined4 in_EAX = 0;
  undefined4 * puVar2;
  uint uVar3;
  byte bVar4;
  
  bVar1 = *(byte *)((int)this + 0x264);
  uVar3 = CONCAT31((int3)((uint)in_EAX >> 8),bVar1);
  if (*(byte *)((int)this + 4) <= bVar1) {
    if (*(int *)((int)this + 0x24c) != 0) {
      if ((((*(byte *)((int)this + 4) == 1) && (*(char *)((int)this + 0x7a) == '\0')) &&
          (1 < *(uint *)((int)this + 0xc))) && (*(uint *)((int)this + 8) < 2000000)) {
        bVar1 = *(byte *)((int)this + 0xc);
        for (bVar4 = 0; (bVar4 < 5 || (bVar4 < bVar1)); bVar4 = bVar4 + 1) {
          *(undefined4 *)((int)this + (uint)bVar4 * 0x74 + 0x10) = *(undefined4 *)((int)this + 0x10)
          ;
          *(undefined4 *)((int)this + (uint)bVar4 * 0x74 + 8) = *(undefined4 *)((int)this + 8);
          *(undefined1 *)((int)this + (uint)bVar4 * 0x74 + 0x68) = *(undefined1 *)((int)this + 0x68)
          ;
          this_00 = (undefined *)((int)this + (uint)bVar4 * 0x74 + 0x14);
          *(undefined1 *)((int)this + (uint)bVar4 * 0x74 + 0x79) = *(undefined1 *)((int)this + 0x79)
          ;
          F_0042ccf0(this_00 GEN_EDX_FWD,this_00);
          *(undefined4 *)((int)this + (uint)bVar4 * 0x74 + 0xc) = 1;
          *(undefined1 *)((int)this + (uint)bVar4 * 0x74 + 0x7a) = 0;
        }
        *(byte *)((int)this + 4) = bVar1;
      }
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x24c) + 4))))(*(int * PTR32 *)((int)this + 0x24c) GEN_EDX_ARG,0x15);
    }
    return uVar3;
  }
  if (*(uint *)((uint)bVar1 * 0x74 + 8 + (int)this) < 2000000) {
    puVar2 = (undefined4 *)F_00406b90(0x20,0,0);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      F_00cb4700(puVar2 GEN_EDX_ARG,1,0);
      puVar2[5] = 1;
      *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1102cc0));
      puVar2[6] = this;
      puVar2[7] = ((code *)REFP(0xb9f980));
    }
    *(undefined4 * PTR32 *)((int)this + 600) = puVar2;
    uVar3 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8) GEN_EDX_ARG,9);
    *(uint *)((int)this + 0x254) = uVar3;
    F_00cb4540(*(undefined * PTR32 *)((int)this + 600) GEN_EDX_ARG,0,
                 *((undefined4 *)GEN_TOP(((uint)*(byte *)((int)this + 0x264) * 0x74 + 8 + (int)this))));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x254) + 0x48))))
                      (*(int * PTR32 *)((int)this + 0x254) GEN_EDX_ARG,*(undefined4 *)((int)this + 600));
    return uVar3;
  }
  puVar2 = (undefined4 *)F_00406b90(0x20,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(puVar2 GEN_EDX_ARG,1,0);
    puVar2[5] = 1;
    *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x1102cc0));
    puVar2[6] = this;
    puVar2[7] = ((code *)REFP(0xb9fa60));
  }
  *(undefined4 * PTR32 *)((int)this + 0x260) = puVar2;
  uVar3 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8) GEN_EDX_ARG,0x52);
  *(uint *)((int)this + 0x25c) = uVar3;
  F_00cb4540(*(undefined * PTR32 *)((int)this + 0x260) GEN_EDX_ARG,0,
               *((undefined4 *)GEN_TOP(((uint)*(byte *)((int)this + 0x264) * 0x74 + 8 + (int)this))));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x25c) + 0x48))))
                    (*(int * PTR32 *)((int)this + 0x25c) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x260));
  return uVar3;
}

/* ref: FUN_00ba01b0 */
GEN_FRAME byte F_00ba01b0(unsigned int gen_a0)
{
  GEN_ENTER(0xba01b0u, gen_a0, 0u, 0u, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  byte * pbVar7;
  uint uVar8;
  byte * pbVar9;
  uint * puVar10;
  undefined4 * puVar11;
  
  uVar5 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xdc);
  (*(uint *)(gen_frame + 0xd8)) = uVar5;
  if (*param_1 == 0) {
    F_00c47745(uVar5 ^ (uint)(uint)(gen_frame + 0xdc) GEN_EDX_ARG);
    return 0;
  }
  (*(uint *)(gen_frame + 0x4c)) = 0;
  (*(byte *)(gen_frame + 0xa)) = 0;
  if (*param_1 == 0) {
    F_00c47745(uVar5 ^ (uint)(uint)(gen_frame + 0xdc) GEN_EDX_ARG);
    return 1;
  }
  do {
    (*(undefined4 *)(gen_frame + 0x90)) = 9999;
    (*(undefined2 *)(gen_frame + 0x94)) = 0;
    (*(undefined1 *)(gen_frame + 0x96)) = 0;
    (*(undefined4 *)(gen_frame + 0x98)) = 0;
    (*(undefined4 *)(gen_frame + 0x9c)) = 0;
    (*(undefined4 *)(gen_frame + 0xa8)) = 0;
    (*(undefined4 *)(gen_frame + 0xac)) = 0;
    (*(undefined1 *)(gen_frame + 0xa4)) = 0;
    (*(undefined4 *)(gen_frame + 0xa0)) = 0x75300000;
    (*(undefined4 *)(gen_frame + 0xc0)) = 0;
    (*(undefined4 *)(gen_frame + 0xcc)) = 0;
    (*(undefined4 *)(gen_frame + 0xb0)) = 0;
    (*(undefined4 *)(gen_frame + 0xb4)) = 0;
    (*(undefined2 *)(gen_frame + 0xb8)) = 0;
    (*(undefined4 *)(gen_frame + 0xba)) = 0;
    (*(undefined2 *)(gen_frame + 0xbe)) = 0;
    (*(undefined4 *)(gen_frame + 0xc4)) = 0;
    (*(undefined1 *)(gen_frame + 0xc8)) = 0;
    F_00a35f30(&(*(undefined4 *)(gen_frame + 0x90)) GEN_EDX_ARG);
    (*(undefined2 *)(gen_frame + 0x54)) = 0;
    iVar6 = (uint)(*(byte *)(gen_frame + 0xa)) * 0x74;
    uVar2 = *(undefined4 *)(param_1 + iVar6 + 4);
    (*(ushort *)(gen_frame + 0xd0)) = 0;
    (*(undefined4 *)(gen_frame + 0xd4)) = 0;
    (*(undefined4 *)(gen_frame + 0x50)) = 9999;
    (*(undefined1 *)(gen_frame + 0x56)) = 0;
    (*(undefined4 *)(gen_frame + 0x58)) = 0;
    (*(undefined4 *)(gen_frame + 0x5c)) = 0;
    (*(undefined4 *)(gen_frame + 0x68)) = 0;
    (*(undefined4 *)(gen_frame + 0x6c)) = 0;
    (*(byte *)(gen_frame + 0x64)) = 0;
    (*(undefined4 *)(gen_frame + 0x60)) = 0x75300000;
    ((byte *)(gen_frame + 0x7a))[6] = 0;
    ((byte *)(gen_frame + 0x7a))[7] = 0;
    ((byte *)(gen_frame + 0x7a))[8] = 0;
    ((byte *)(gen_frame + 0x7a))[9] = 0;
    (*(undefined4 *)(gen_frame + 0x8c)) = 0;
    (*(undefined4 *)(gen_frame + 0x70)) = 0;
    (*(undefined4 *)(gen_frame + 0x74)) = 0;
    (*(undefined2 *)(gen_frame + 0x78)) = 0;
    ((byte *)(gen_frame + 0x7a))[0] = 0;
    ((byte *)(gen_frame + 0x7a))[1] = 0;
    ((byte *)(gen_frame + 0x7a))[2] = 0;
    ((byte *)(gen_frame + 0x7a))[3] = 0;
    ((byte *)(gen_frame + 0x7a))[4] = 0;
    ((byte *)(gen_frame + 0x7a))[5] = 0;
    ((byte *)(gen_frame + 0x7a))[10] = 0;
    ((byte *)(gen_frame + 0x7a))[0xb] = 0;
    ((byte *)(gen_frame + 0x7a))[0xc] = 0;
    ((byte *)(gen_frame + 0x7a))[0xd] = 0;
    ((byte *)(gen_frame + 0x7a))[0xe] = 0;
    F_00a35ee0(&(*(undefined4 *)(gen_frame + 0x50)) GEN_EDX_ARG,uVar2,1);
    F_00a35f80(&(*(undefined4 *)(gen_frame + 0x50)) GEN_EDX_ARG,*(undefined4 *)(param_1 + iVar6 + 8));
    (*(byte * PTR32 *)(gen_frame + 0x4)) = param_1 + iVar6 + 0x70;
    pbVar9 = ((byte *)(gen_frame + 0x7a));
    puVar11 = &(*(undefined4 *)(gen_frame + 0x70));
    pbVar7 = param_1 + iVar6 + 0x66;
    (*(int *)(gen_frame + 0x0)) = 5;
    do {
      *(undefined2 *)puVar11 = *(undefined2 *)pbVar7;
      bVar1 = *(*(byte * PTR32 *)(gen_frame + 0x4));
      (*(byte * PTR32 *)(gen_frame + 0x4)) = (*(byte * PTR32 *)(gen_frame + 0x4)) + 1;
      *pbVar9 = bVar1;
      pbVar7 = pbVar7 + 2;
      puVar11 = (undefined4 *)((int)puVar11 + 2);
      pbVar9 = pbVar9 + 1;
      (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) - 1;
    } while ((*(int *)(gen_frame + 0x0)) != 0);
    (*(byte *)(gen_frame + 0xb)) = 0;
    if (param_1[iVar6 + 100] == 0) {
      bVar4 = false;
      if ((*(uint *)(gen_frame + 0x4c)) != 0) {
        uVar5 = 0;
        do {
          if (((int *)(gen_frame + 0x10))[(int)(uVar5)] == *(int *)(param_1 + iVar6 + 4)) {
            uVar8 = ((uint *)(gen_frame + 0x24))[(int)(uVar5)];
            uVar3 = *(uint *)(param_1 + iVar6 + 8);
            puVar10 = ((uint *)(gen_frame + 0x24));
            bVar4 = true;
            if (uVar8 < uVar3) {
              uVar8 = ((uint *)(gen_frame + 0x38))[(int)(uVar5)];
              puVar10 = ((uint *)(gen_frame + 0x38));
              if (uVar8 < uVar3) goto LAB_00ba05bc;
            }
            puVar10[uVar5] = uVar8 - uVar3;
          }
          (*(byte *)(gen_frame + 0xb)) = (*(byte *)(gen_frame + 0xb)) + 1;
          uVar5 = (uint)(*(byte *)(gen_frame + 0xb));
        } while (uVar5 < (*(uint *)(gen_frame + 0x4c)));
        if (bVar4) goto LAB_00ba058d;
      }
      bVar1 = param_1[iVar6 + 0x75];
      (*(byte *)(gen_frame + 0x64)) = (*(byte *)(gen_frame + 0x64)) & 0xfe;
      ((int *)(gen_frame + 0x10))[(int)((*(uint *)(gen_frame + 0x4c)))] = *(int *)(param_1 + iVar6 + 4);
      F_00a3bd60(&(*(undefined4 *)(gen_frame + 0x90)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x50)));
      (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0xd0)) + 0)) = bVar1;
      (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0xd0)) + 1)) = 0;
      (*(ushort *)(gen_frame + 0xd0)) = (ushort)bVar1;
      (*(undefined4 *)(gen_frame + 0xd4)) = 0;
      uVar5 = F_00a411a0(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x90)),0,1);
      (*(byte *)(gen_frame + 0x64)) = (*(byte *)(gen_frame + 0x64)) | 1;
      ((uint *)(gen_frame + 0x24))[(int)((*(uint *)(gen_frame + 0x4c)))] = uVar5;
      bVar1 = param_1[iVar6 + 0x75];
      F_00a3bd60(&(*(undefined4 *)(gen_frame + 0x90)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x50)));
      (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0xd0)) + 0)) = bVar1;
      (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0xd0)) + 1)) = 0;
      (*(ushort *)(gen_frame + 0xd0)) = (ushort)bVar1;
      (*(undefined4 *)(gen_frame + 0xd4)) = 0;
      uVar8 = F_00a411a0(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x90)),0,1);
      uVar5 = *(uint *)(param_1 + iVar6 + 8);
      ((uint *)(gen_frame + 0x38))[(int)((*(uint *)(gen_frame + 0x4c)))] = uVar8;
      uVar8 = ((uint *)(gen_frame + 0x24))[(int)((*(uint *)(gen_frame + 0x4c)))];
      puVar10 = ((uint *)(gen_frame + 0x24)) + (*(uint *)(gen_frame + 0x4c));
      if (uVar8 < uVar5) {
        puVar10 = ((uint *)(gen_frame + 0x38)) + (*(uint *)(gen_frame + 0x4c));
        goto LAB_00ba057d;
      }
LAB_00ba0583: ;
      *puVar10 = uVar8 - uVar5;
      (*(uint *)(gen_frame + 0x4c)) = (*(uint *)(gen_frame + 0x4c)) + 1;
    }
    else {
      bVar4 = false;
      uVar5 = (*(uint *)(gen_frame + 0x4c));
      if ((*(uint *)(gen_frame + 0x4c)) == 0) {
LAB_00ba038b: ;
        (*(byte *)(gen_frame + 0x64)) = (*(byte *)(gen_frame + 0x64)) & 0xfe;
        ((int *)(gen_frame + 0x10))[(int)(uVar5)] = *(int *)(param_1 + iVar6 + 4);
        bVar1 = param_1[iVar6 + 0x75];
        F_00a3bd60(&(*(undefined4 *)(gen_frame + 0x90)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x50)));
        (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0xd0)) + 0)) = bVar1;
        (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0xd0)) + 1)) = 0;
        (*(ushort *)(gen_frame + 0xd0)) = (ushort)bVar1;
        (*(undefined4 *)(gen_frame + 0xd4)) = 0;
        uVar5 = F_00a411a0(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x90)),0,1);
        (*(byte *)(gen_frame + 0x64)) = (*(byte *)(gen_frame + 0x64)) | 1;
        ((uint *)(gen_frame + 0x24))[(int)((*(uint *)(gen_frame + 0x4c)))] = uVar5;
        bVar1 = param_1[iVar6 + 0x75];
        F_00a3bd60(&(*(undefined4 *)(gen_frame + 0x90)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x50)));
        (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0xd0)) + 0)) = bVar1;
        (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0xd0)) + 1)) = 0;
        (*(ushort *)(gen_frame + 0xd0)) = (ushort)bVar1;
        (*(undefined4 *)(gen_frame + 0xd4)) = 0;
        uVar8 = F_00a411a0(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x90)),0,1);
        uVar5 = *(uint *)(param_1 + iVar6 + 8);
        ((uint *)(gen_frame + 0x38))[(int)((*(uint *)(gen_frame + 0x4c)))] = uVar8;
        puVar10 = ((uint *)(gen_frame + 0x38)) + (*(uint *)(gen_frame + 0x4c));
LAB_00ba057d: ;
        uVar8 = *puVar10;
        if (uVar8 < uVar5) {
LAB_00ba05bc: ;
          F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc) GEN_EDX_ARG);
          return 0;
        }
        goto LAB_00ba0583;
      }
      uVar8 = 0;
      do {
        if (((int *)(gen_frame + 0x10))[(int)(uVar8)] == *(int *)(param_1 + iVar6 + 4)) {
          uVar5 = ((uint *)(gen_frame + 0x38))[(int)(uVar8)];
          bVar4 = true;
          if (uVar5 < *(uint *)(param_1 + iVar6 + 8)) goto LAB_00ba05bc;
          ((uint *)(gen_frame + 0x38))[(int)(uVar8)] = uVar5 - *(uint *)(param_1 + iVar6 + 8);
          uVar5 = (*(uint *)(gen_frame + 0x4c));
        }
        (*(byte *)(gen_frame + 0xb)) = (*(byte *)(gen_frame + 0xb)) + 1;
        uVar8 = (uint)(*(byte *)(gen_frame + 0xb));
      } while (uVar8 < uVar5);
      if (!bVar4) goto LAB_00ba038b;
    }
LAB_00ba058d: ;
    (*(byte *)(gen_frame + 0xa)) = (*(byte *)(gen_frame + 0xa)) + 1;
    if (*param_1 <= (*(byte *)(gen_frame + 0xa))) {
      F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc) GEN_EDX_ARG);
      return 1;
    }
  } while( true );
}

/* ref: FUN_00ba05d0 */
GEN_NOFRAME byte GEN_THISCALL F_00ba05d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xba05d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00ba01b0((int)this + 4);
  return bVar1;
}

/* ref: FUN_00ba05e0 */
GEN_FRAME uint GEN_THISCALL F_00ba05e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xba05e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x130];
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  uint * this_01;
  int iVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 * puVar6;
  undefined * PTR32 * ppuVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  (*(uint *)(gen_frame + 0x128)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x12c);
  *(undefined * PTR32 *)&REFG(undefined, 0x1340c60) = this;
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD);
  F_0042b630(((undefined1 *)(gen_frame + 0xb4)) GEN_EDX_ARG);
  F_0042b630(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042b630(((undefined1 *)(gen_frame + 0x60)) GEN_EDX_ARG);
  F_00ab0230(0x1901f,((undefined1 *)(gen_frame + 0xc)));
  F_00ab0230(0x19020,((undefined1 *)(gen_frame + 0x60)));
  if (*(int *)((int)this + 0x268) == 1) {
    uVar10 = 0x19021;
  }
  else {
    if (*(int *)((int)this + 0x268) != 2) goto LAB_00ba0679;
    uVar10 = 0x19022;
  }
  F_00ab0230(uVar10,((undefined1 *)(gen_frame + 0xb4)));
LAB_00ba0679: ;
  (*(undefined4 *)(gen_frame + 0x108)) = 0;
  (*(undefined4 *)(gen_frame + 0x110)) = 0;
  (*(undefined4 *)(gen_frame + 0x118)) = 0;
  (*(undefined4 *)(gen_frame + 0x120)) = 0;
  uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0xb4)) GEN_EDX_ARG);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x108)) GEN_EDX_ARG,6);
  (*(uint *)(gen_frame + 0x10c)) = uVar2;
  uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x110)) GEN_EDX_ARG,6);
  (*(uint *)(gen_frame + 0x114)) = uVar2;
  uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x60)) GEN_EDX_ARG);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x118)) GEN_EDX_ARG,6);
  (*(uint *)(gen_frame + 0x11c)) = uVar2;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x120)) GEN_EDX_ARG,3);
  uVar11 = 4;
  uVar9 = 0;
  uVar8 = 0;
  ppuVar7 = &REFG(undefined * PTR32, 0x1340c5c);
  puVar6 = &(*(undefined4 *)(gen_frame + 0x108));
  (*(undefined4 *)(gen_frame + 0x124)) = 0;
  uVar5 = 4;
  uVar10 = 9;
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1 GEN_EDX_ARG)));
  *(uint *)&REFG(undefined, 0x1340c64) = F_008668b0(this_00 GEN_EDX_ARG,uVar10,uVar5,puVar6,ppuVar7,uVar8,uVar9,uVar11);
  this_01 = &(*(uint *)(gen_frame + 0x128));
  iVar3 = 3;
  do {
    this_01 = this_01 - 2;
    F_005a2670(this_01 GEN_EDX_ARG);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  F_0042c880(((undefined1 *)(gen_frame + 0x60)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  uVar4 = F_0042c880(((undefined1 *)(gen_frame + 0xb4)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x128)) ^ (uint)(uint)(gen_frame + 0x12c) GEN_EDX_ARG);
  return (uint)uVar4;
}

/* ref: FUN_00ba0750 */
GEN_FRAME byte GEN_THISCALL F_00ba0750(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xba0750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = *(int *)((int)this + 0x268);
    while (iVar1 != 0) {
      *(undefined4 *)((int)this + 0x268) = *(undefined4 *)((int)this + 0x26c);
      *(undefined4 *)((int)this + 0x26c) = 0;
      iVar1 = *(int *)((int)this + 0x268);
    }
    F_00b9fe10(this GEN_EDX_FWD,1);
    return 0;
  }
  *(undefined4 *)((int)this + 0x268) = *(undefined4 *)((int)this + 0x26c);
  *(undefined4 *)((int)this + 0x26c) = 0;
  if (*(int *)((int)this + 0x268) == 0) {
    F_00b9fe10(this GEN_EDX_ARG,0);
    return 0;
  }
  F_00ba05e0(this GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00ba07c0 */
GEN_FRAME byte GEN_THISCALL F_00ba07c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xba07c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  byte bVar1;
  
  F_00b9fee0(this GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x250) = param_5;
  bVar1 = F_00b9f8e0(param_1,param_2,param_3,param_4,(int)this + 4);
  return bVar1;
}

/* ref: FUN_00ba0800 */
GEN_FRAME unsigned int GEN_THISCALL F_00ba0800(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xba0800u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined2 * param_5 = (undefined2 *)(uintptr_t)gen_a5;
  undefined1 * param_6 = (undefined1 *)(uintptr_t)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  byte bVar1;
  undefined2 * puVar2;
  undefined1 * puVar3;
  undefined2 * puVar4;
  undefined1 * puVar5;
  
  bVar1 = (byte)param_1;
  if ((byte)param_1 == 0) {
    F_00b9fee0(this GEN_EDX_FWD);
  }
  *(uint *)((int)this + (uint)(byte)param_1 * 0x74 + 8) = param_2;
  *(undefined4 *)((int)this + (uint)(byte)param_1 * 0x74 + 0xc) = param_3;
  *(byte *)((int)this + (uint)(byte)param_1 * 0x74 + 0x68) = -(param_2 < 2000000) & (byte)param_4;
  puVar3 = (undefined1 *)((int)this + (uint)(byte)param_1 * 0x74 + 0x74);
  puVar4 = (undefined2 *)((int)this + (uint)(byte)param_1 * 0x74 + 0x6a);
  param_1 = 5;
  puVar2 = param_5;
  puVar5 = param_6;
  do {
    *puVar4 = *puVar2;
    *puVar3 = *puVar5;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
    puVar3 = puVar3 + 1;
    param_1 = param_1 - 1;
  } while (param_1 != 0);
  *(undefined1 *)((int)this + (uint)bVar1 * 0x74 + 0x79) = (undefined1)param_7;
  return 0;
}

/* ref: FUN_00ba0880 */
GEN_FRAME uint GEN_THISCALL F_00ba0880(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xba0880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x24c) = param_1;
  *(undefined1 *)((int)this + 0x264) = 0;
  uVar1 = F_00b9ffe0(this GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_00ba08a0 */
GEN_FRAME uint GEN_THISCALL F_00ba08a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xba08a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  undefined * this_00;
  undefined * this_01;
  undefined * pvVar4;
  byte bVar5;
  uint uVar6;
  ushort * puVar7;
  short * psVar8;
  ulonglong uVar9;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  (*(uint *)(gen_frame + 0x88)) = uVar3;
  if (*(int *)((int)this + 0x250) != 0) {
    this_00 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_FWD,0x7d5);
    (*(uint *)(gen_frame + 0xd)) = (*(uint *)(gen_frame + 0xd)) & 0xffffff00;
    if ((this_00 != (undefined *)0x0) && ((*(byte *)(gen_frame + 0x11)) = 0, *(char *)((int)this + 4) != '\0')) {
      do {
        uVar6 = (uint)(*(byte *)(gen_frame + 0x11));
        this_01 = (undefined *)F_00a37da0(this_00 GEN_EDX_ARG,uVar6);
        uVar3 = 0;
        if (this_01 != (undefined *)0x0) {
          F_0090da50(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,(int)this + uVar6 * 0x74 + 8);
          bVar5 = 0;
          puVar7 = (ushort *)((int)this_01 + 0x20);
          (*(char *)(gen_frame + 0x12)) = '\0';
          (*(char *)(gen_frame + 0x13)) = '\0';
          (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) & 0xffffff00;
          psVar8 = (short *)((int)this + uVar6 * 0x74 + 0x6a);
          do {
            if ((*(char *)((int)this_01 + 6) == '\0') || (uVar3 = F_00a3a860(this_01 GEN_EDX_ARG), uVar3 == 0) ) {
              uVar2 = *puVar7;
            }
            else {
              uVar3 = (*(uint *)(gen_frame + 0x0));
              pvVar4 = (undefined *)F_00a3a860(this_01 GEN_EDX_ARG);
              uVar2 = F_0071d2c0(pvVar4 GEN_EDX_ARG,uVar3);
            }
            if (uVar2 != 0) {
              (*(char *)(gen_frame + 0x13)) = (*(char *)(gen_frame + 0x13)) + '\x01';
            }
            if (*psVar8 != 0) {
              (*(char *)(gen_frame + 0x12)) = (*(char *)(gen_frame + 0x12)) + '\x01';
            }
            bVar5 = bVar5 + 1;
            puVar7 = puVar7 + 1;
            psVar8 = psVar8 + 1;
            (*(uint *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x0)), 1, 3),bVar5);
          } while (bVar5 < 5);
          pvVar4 = this;
          bVar5 = (byte)(*(uint *)(gen_frame + 0xd));
          if ((((char)(*(char *)((int)this + uVar6 * 0x74 + 0x79) + (*(char *)(gen_frame + 0x12))) == '\0') && ((*(char *)(gen_frame + 0x13)) != '\0')) && ((*(char *)(gen_frame + 0x87)) == '\0')) {
            F_00b9fda0(this GEN_EDX_ARG,(*(uint *)(gen_frame + 0xd)),1);
            bVar5 = (byte)(*(uint *)(gen_frame + 0xd)) + 1;
            (*(uint *)(gen_frame + 0xd)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0xd)), 1, 3),bVar5);
            pvVar4 = ((undefined *)(uint)(this));
          }
          if ((*(char *)((int)this + uVar6 * 0x74 + 0x68) == '\0') && ((*(byte *)((int)this_01 + 0x14) & 1) != 0)) {
            if (bVar5 < 2) {
              uVar3 = 0;
              if (bVar5 != 0) {
                do {
                  if (*(int *)((int)pvVar4 + uVar3 * 4 + 0x268) == 2) goto LAB_00ba0a31;
                  bVar1 = (char)uVar3 + 1;
                  uVar3 = (uint)bVar1;
                } while (bVar1 < bVar5);
              }
              *(undefined4 *)((int)pvVar4 + (uint)bVar5 * 4 + 0x268) = 2;
            }
LAB_00ba0a31: ;
            (*(uint *)(gen_frame + 0xd)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0xd)), 1, 3),bVar5 + 1);
          }
          uVar9 = F_0042c880(((undefined1 *)(gen_frame + 0x20)) GEN_EDX_ARG);
          uVar3 = (uint)uVar9;
        }
        (*(byte *)(gen_frame + 0x11)) = (*(byte *)(gen_frame + 0x11)) + 1;
      } while ((*(byte *)(gen_frame + 0x11)) < *(byte *)((int)this + 4));
      if (((byte)(*(uint *)(gen_frame + 0xd)) != '\0') && ((*(int *)&gen_a1) == 0)) {
        if (*(int *)((int)this + 0x268) != 0) {
          uVar3 = F_00ba05e0(this GEN_EDX_ARG);
          F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
          return uVar3;
        }
        goto LAB_00ba0a90;
      }
    }
    uVar3 = F_00b9fe10(this GEN_EDX_ARG,(*(int *)&gen_a1));
  }
LAB_00ba0a90: ;
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
  return uVar3;
}

/* ref: Client::Game::UI::NpcTradeWarningYesNoCallback::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00ba0ae0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xba0ae0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 4) = 0;
  *(undefined4 *)(in_ecx + 8) = 0;
  return 0;
}

/* ref: Client::Game::UI::NpcTradeWarningYesNoCallback::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ba0af0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xba0af0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00ba0b20 */
GEN_FRAME uint GEN_THISCALL F_00ba0b20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xba0b20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this GEN_EDX_FWD,param_3,param_4);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1102cc0));
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VNpcTrade_UI_Game_Client_Game::vf1 */
GEN_FRAME uint GEN_THISCALL F_00ba0b60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xba0b60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)((int)this + 0x1c))(*(undefined4 *)((int)this + 0x18),param_2,param_1,param_3)
  ;
  return uVar1;
}

/* ref: Client::Game::UI::NpcTrade::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ba0b90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xba0b90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  int iVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1102cb8));
  iVar1 = 4;
  this_00 = this + 600;
  do {
    this_00 = this_00 - 0x74;
    F_0042c880(this_00 GEN_EDX_FWD);
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VNpcTrade_UI_Game_Client_Game::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ba0be0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xba0be0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cb4870(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::UI::NpcTradeWarningYesNoCallback::vf1 */
GEN_FRAME uint GEN_THISCALL F_00ba0c10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xba0c10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  byte bVar1;
  undefined4 uVar2;
  
  if (*(undefined * PTR32 *)(this + 4) == (undefined *)0x0) {
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 2;
    return (uint)param_1;
  }
  if ((*param_2 & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_2 + 4);
  }
  bVar1 = F_00ba0750(*(undefined * PTR32 *)(this + 4) GEN_EDX_FWD,uVar2);
  if (bVar1 == 0) {
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 8))(this GEN_EDX_ARG);
  }
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: FUN_00ba0c70 */
GEN_FRAME float10 F_00ba0c70(float gen_a0)
{
  GEN_ENTER(0xba0c70u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: FUN_00ba0c90 */
GEN_FRAME unsigned int GEN_THISCALL F_00ba0c90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xba0c90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  undefined4 * puVar2;
  int * piVar3;
  int iVar4;
  
  uVar1 = 0;
  iVar4 = 0;
  puVar2 = (undefined4 *)(param_1 + 0xc);
  piVar3 = (int *)((int)this + 0x5c);
  do {
    if (param_2 <= uVar1) {
      return 0;
    }
    if (*piVar3 != 0) {
      puVar2[-3] = piVar3[-1];
      puVar2[-2] = *piVar3;
      *puVar2 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8)));
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 4;
    }
    iVar4 = iVar4 + 1;
    piVar3 = piVar3 + 4;
  } while (iVar4 < 4);
  return 0;
}

/* ref: FUN_00ba0ce0 */
GEN_FRAME uint GEN_THISCALL F_00ba0ce0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xba0ce0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  if ((REFG(int, 0x1379694) != 0) && (param_1[0x39] == *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))))) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_FWD);
    if (uVar1 == 2) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00ba0d20 */
GEN_FRAME uint GEN_THISCALL F_00ba0d20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xba0d20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  iVar2 = (int)this + 0x50;
  this_00 = (undefined *)F_006b8c00();
  uVar1 = F_00710bf0(this_00 GEN_EDX_ARG,param_1,param_2,iVar2,uVar3);
  return uVar1;
}

/* ref: FUN_00ba0d50 */
GEN_FRAME uint GEN_THISCALL F_00ba0d50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xba0d50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 1;
  iVar2 = (int)this + 0x50;
  this_00 = (undefined *)F_006b8c00();
  uVar1 = F_00710bf0(this_00 GEN_EDX_ARG,param_1,param_2,iVar2,uVar3);
  return uVar1;
}

/* ref: FUN_00ba0d80 */
GEN_FRAME unsigned int GEN_THISCALL F_00ba0d80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xba0d80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  
  if ((char)param_1 != '\0') {
    if (param_3 == 0) {
      uVar1 = F_0042a990(param_2 GEN_EDX_FWD);
      F_0042e430(((undefined *)GEN_TOP((*(int *)((int)this + 4) + 0x23c))) GEN_EDX_ARG,uVar1);
    }
    else if (param_3 == 1) {
      uVar1 = F_0042a990(param_2 GEN_EDX_ARG);
      F_0042e430(((undefined *)GEN_TOP((*(int *)((int)this + 4) + 0x290))) GEN_EDX_ARG,uVar1);
      return;
    }
  }
  return;
}

/* ref: FUN_00ba0df0 */
GEN_FRAME uint GEN_THISCALL F_00ba0df0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xba0df0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1103440));
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  in_ecx[10] = 0;
  in_ecx[0xb] = 0;
  in_ecx[0xc] = 0;
  in_ecx[0xd] = 0;
  in_ecx[0xe] = 0;
  in_ecx[0xf] = 0;
  in_ecx[0x10] = 0;
  in_ecx[0x11] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00ba0e50 */
GEN_FRAME uint F_00ba0e50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xba0e50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x80,"OnSequence%03d",param_3);
  uVar1 = F_00a024d0(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)),param_2,0);
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00ba0eb0 */
GEN_FRAME uint F_00ba0eb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xba0eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a024d0(param_1 GEN_EDX_ARG,"OnSynchronize",param_2,0);
  return uVar1;
}

/* ref: FUN_00ba0ed0 */
GEN_FRAME unsigned int GEN_THISCALL F_00ba0ed0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xba0ed0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1103458));
  in_ecx[3] = param_2;
  in_ecx[2] = (*(undefined * PTR32 (*)[1])REFP(0x1103440));
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  in_ecx[10] = 0;
  in_ecx[0xb] = 0;
  in_ecx[0xc] = 0;
  in_ecx[0xd] = 0;
  in_ecx[0xe] = 0;
  in_ecx[0xf] = 0;
  in_ecx[0x10] = 0;
  in_ecx[0x11] = 0;
  in_ecx[0x12] = 0;
  in_ecx[0x13] = 0;
  in_ecx[0x14] = (*(undefined * PTR32 (*)[3])REFP(0x1103448));
  in_ecx[0x15] = in_ecx;
  in_ecx[0x16] = 0;
  in_ecx[0x17] = 0;
  *(undefined1 *)(in_ecx + 0x18) = 0;
  in_ecx[0x19] = 0;
  in_ecx[0x1a] = 0;
  in_ecx[0x1b] = 0;
  *(undefined1 *)(in_ecx + 0x1c) = 0;
  in_ecx[0x1d] = 0;
  in_ecx[0x1e] = 0;
  in_ecx[0x1f] = 0;
  *(undefined1 *)(in_ecx + 0x20) = 0;
  in_ecx[0x21] = 0;
  in_ecx[0x22] = 0;
  in_ecx[0x23] = 0;
  *(undefined1 *)(in_ecx + 0x24) = 0;
  in_ecx[0x25] = 0;
  in_ecx[0x26] = 0;
  return 0;
}

/* ref: FUN_00ba0f80 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00ba0f80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xba0f80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  undefined4 * puVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1103458));
  puVar1 = (undefined4 *)((int)this + 0x50);
  this_00 = (undefined *)F_006b8c00();
  F_006da0a0(this_00 GEN_EDX_ARG,puVar1);
  *(undefined4 *)((int)this + 0x50) = (*(undefined * PTR32 (*)[3])REFP(0x10b8174));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[1])REFP(0x1103440));
  return;
}

/* ref: FUN_00ba0fb0 */
GEN_FRAME uint GEN_THISCALL F_00ba0fb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xba0fb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  int * piVar2;
  undefined1 * puVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar1 = 0;
  piVar2 = (int *)((int)this + 0xc);
  do {
    if (*piVar2 == 0) {
      puVar3 = ((undefined1 *)GEN_TOP((uVar1 * 0x140 + *((int *)GEN_TOP((*(int *)((int)this + 4) + 0x2f8))))));
      *puVar3 = 1;
      *(undefined4 *)(puVar3 + 4) = 2;
      uVar5 = REFG(undefined4, 0x108cc50);
      uVar1 = F_00463610(1,param_1,0);
      F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,uVar1,uVar5);
      F_0042ccf0(puVar3 + 8 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
      uVar4 = F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
      *(undefined4 *)(puVar3 + 0x60) = param_2;
      F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
      return (uint)uVar4;
    }
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 2;
  } while ((int)uVar1 < 8);
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00ba1090 */
GEN_FRAME byte GEN_THISCALL F_00ba1090(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xba1090u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 1: ;
    return *((byte *)GEN_TOP((*(int *)((int)this + 4) + 0x1de)));
  case 2: ;
    return *((byte *)GEN_TOP((*(int *)((int)this + 4) + 0x1df)));
  case 3: ;
    return *((byte *)GEN_TOP((*(int *)((int)this + 4) + 0x1e0)));
  case 4: ;
    return *((byte *)GEN_TOP((*(int *)((int)this + 4) + 0x1e1)));
  case 5: ;
    return *((byte *)GEN_TOP((*(int *)((int)this + 4) + 0x1e2)));
  case 6: ;
    return *((byte *)GEN_TOP((*(int *)((int)this + 4) + 0x1e3)));
  case 7: ;
    return *((byte *)GEN_TOP((*(int *)((int)this + 4) + 0x1e4)));
  case 8: ;
    return *((byte *)GEN_TOP((*(int *)((int)this + 4) + 0x1e5)));
  case 9: ;
    return *((byte *)GEN_TOP((*(int *)((int)this + 4) + 0x1e6)));
  case 10: ;
    return *((byte *)GEN_TOP((*(int *)((int)this + 4) + 0x1e7)));
  default: ;
    return 0;
  }
}

/* ref: FUN_00ba1160 */
GEN_FRAME uint F_00ba1160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xba1160u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00b9c9b0(*(undefined4 *)((int)param_1 + 8),2);
  uVar2 = F_00b9c9b0(*(undefined4 *)((int)param_1 + 8),3);
  if (uVar1 == 2) {
    uVar1 = F_00463610(0,uVar2,2);
    F_00a01ec0(param_1 GEN_EDX_ARG,uVar1);
  }
  return 1;
}

/* ref: FUN_00ba11b0 */
GEN_NOFRAME byte GEN_THISCALL F_00ba11b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xba11b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)((int)this + 0x98);
  if (iVar2 != 0) {
    iVar3 = 0;
    piVar1 = (int *)((int)this + 0x5c);
    do {
      if ((piVar1[-1] == iVar2) && (*piVar1 != 0)) {
        F_006d6e70(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_FWD,iVar2);
        F_00ba0fb0((undefined *)((int)this + 8) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x98),
                     *(undefined4 *)((int)this + iVar3 * 0x10 + 0x5c));
        return 1;
      }
      iVar3 = iVar3 + 1;
      piVar1 = piVar1 + 4;
    } while (iVar3 < 4);
  }
  F_006c4f50(*(undefined4 *)((int)this + 4) GEN_EDX_ARG);
  iVar2 = 0;
  piVar1 = (int *)((int)this + 0x14);
  do {
    if (*piVar1 == 0) {
      *((undefined1 *)GEN_TOP((iVar2 * 0x140 + *((int *)GEN_TOP((*(int *)((int)this + 0xc) + 0x2f8)))))) = 0;
      return 0;
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 2;
  } while (iVar2 < 8);
  return 0;
}

/* ref: FUN_00ba1240 */
GEN_FRAME uint GEN_THISCALL F_00ba1240(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xba1240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  
  uVar2 = *(int *)((int)this + param_1 * 8 + 8) - 1;
  if (uVar2 == 0) {
    bVar1 = F_00ba1090(this GEN_EDX_FWD,*(undefined4 *)((int)this + param_1 * 8 + 0xc));
    uVar2 = param_1 * 0x140;
    *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 4) + 0x2f8))) + 0x60 + uVar2))) = (uint)bVar1;
  }
  return uVar2;
}

/* ref: FUN_00ba1280 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00ba1280(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xba1280u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  int iVar2;
  undefined4 * puVar3;
  
  iVar2 = 0;
  puVar3 = (undefined4 *)((int)this + 0xc);
  do {
    if (puVar3[-1] == 1) {
      bVar1 = F_00ba1090(this GEN_EDX_FWD,*puVar3);
      *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 4) + 0x2f8))) + 0x60 + iVar2))) = (uint)bVar1;
    }
    iVar2 = iVar2 + 0x140;
    puVar3 = puVar3 + 2;
  } while (iVar2 < 0xa00);
  return 0;
}

/* ref: FUN_00ba12d0 */
GEN_NOFRAME uint GEN_THISCALL F_00ba12d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xba12d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  F_00ba1280((undefined *)((int)this + 8) GEN_EDX_FWD);
  bVar1 = F_00ba11b0(this GEN_EDX_ARG);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00ba12f0 */
GEN_FRAME uint F_00ba12f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xba12f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined4 uVar1;
  undefined4 * puVar2;
  uint uVar3;
  int * piVar4;
  int * piVar5;
  uint uVar6;
  undefined * pvVar7;
  undefined4 * puVar8;
  int iVar9;
  ulonglong uVar10;
  int * PTR32 * ppiVar11;
  
  iVar9 = REFG(int, 0x1379694);
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(uint *)(gen_frame + 0x38)) = uVar3;
  (*(int *)(gen_frame + 0x8)) = REFG(int, 0x1379694);
  if (REFG(int, 0x1379694) != 0) {
    piVar4 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
    (*(int * PTR32 *)(gen_frame + 0xc)) = piVar4;
    (*(int * PTR32 *)(gen_frame + 0x14)) = (int *)0x0;
    piVar5 = (int *)F_004296a0(8,0,0x2c4);
    (*(int * PTR32 *)(gen_frame + 0x14)) = piVar5;
    if (piVar5 != (int *)0x0) {
      *piVar5 = 0;
      piVar5[1] = 0;
    }
    *piVar5 = (int)&(*(int * PTR32 *)(gen_frame + 0x14));
    (*(int *)(gen_frame + 0x18)) = 0;
    (*(uint *)(gen_frame + 0x1c)) = 0;
    (*(int *)(gen_frame + 0x20)) = 0;
    (*(int *)(gen_frame + 0x24)) = 0;
    if ((byte)param_3 != 0) {
      (*(uint *)(gen_frame + 0x10)) = (uint)(byte)param_3;
      puVar8 = param_2;
      do {
        uVar1 = *puVar8;
        (*(undefined4 *)(gen_frame + 0x2c)) = 0;
        (*(undefined4 *)(gen_frame + 0x2c)) = uVar1;
        (*(undefined4 * PTR32 *)(gen_frame + 0x30)) = &(*(undefined4 *)(gen_frame + 0x2c));
        (*(char *)(gen_frame + 0x34)) = '\0';
        if ((*(uint *)(gen_frame + 0x1c)) <= (*(int *)(gen_frame + 0x24)) + 1U) {
          F_00486f80(&(*(int * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,1);
        }
        uVar3 = (*(int *)(gen_frame + 0x24)) + (*(int *)(gen_frame + 0x20));
        if ((*(uint *)(gen_frame + 0x1c)) <= uVar3) {
          uVar3 = uVar3 - (*(uint *)(gen_frame + 0x1c));
        }
        if (*(int *)((*(int *)(gen_frame + 0x18)) + uVar3 * 4) == 0) {
          uVar6 = F_004296a0(0xc,0,0x2c4);
          *(uint *)((*(int *)(gen_frame + 0x18)) + uVar3 * 4) = uVar6;
        }
        puVar2 = *(undefined4 * PTR32 *)((*(int *)(gen_frame + 0x18)) + uVar3 * 4);
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = 0;
          puVar2[1] = 0;
          *(undefined1 *)(puVar2 + 2) = 0xff;
          if (((*(char *)(gen_frame + 0x34)) != -1) && (puVar2 != &(*(undefined4 *)(gen_frame + 0x2c)))) {
            (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = puVar2;
            (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (*(undefined4 * PTR32 *)(gen_frame + 0x30));
            if ((*(char *)(gen_frame + 0x34)) == '\0') {
              F_004919b0(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
            }
            else if ((*(char *)(gen_frame + 0x34)) == '\x01') {
              F_00491a60(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
            }
          }
        }
        (*(int *)(gen_frame + 0x24)) = (*(int *)(gen_frame + 0x24)) + 1;
        if ((*(undefined4 * PTR32 *)(gen_frame + 0x30)) != (undefined4 *)0x0) {
          if (((*(char *)(gen_frame + 0x34)) != '\0') && ((*(char *)(gen_frame + 0x34)) == '\x01')) {
            pvVar7 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x30));
            *(int *)((int)pvVar7 + 0x54) = *(int *)((int)pvVar7 + 0x54) - 1;
            if (*(int *)((int)pvVar7 + 0x54) < 1) {
              F_0042c880(pvVar7 GEN_EDX_ARG);
              F_00406ad0(pvVar7);
            }
          }
          (*(undefined4 * PTR32 *)(gen_frame + 0x30)) = (undefined4 *)0x0;
          (*(char *)(gen_frame + 0x34)) = -1;
        }
        puVar8 = puVar8 + 1;
        uVar3 = (*(uint *)(gen_frame + 0x10)) - 1;
        (*(uint *)(gen_frame + 0x10)) = uVar3;
        piVar4 = (*(int * PTR32 *)(gen_frame + 0xc));
        iVar9 = (*(int *)(gen_frame + 0x8));
      } while (uVar3 != 0);
    }
    ppiVar11 = &(*(int * PTR32 *)(gen_frame + 0x14));
    pvVar7 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4 GEN_EDX_ARG)));
    F_0046ab30(pvVar7 GEN_EDX_ARG,param_1,iVar9,ppiVar11);
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG);
    uVar10 = F_00429760((*(int * PTR32 *)(gen_frame + 0x14)),8,0x2c4);
    uVar3 = (uint)uVar10;
  }
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_00ba14a0 */
GEN_FRAME uint GEN_THISCALL F_00ba14a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xba14a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint param_4 = (uint)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  uint uVar2;
  undefined1 * this_00;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  (*(uint *)(gen_frame + 0x58)) = uVar2;
  if (param_1 < 8) {
    this_00 = ((undefined1 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 4) + 0x2f8))) + param_1 * 0x140)));
    *this_00 = 1;
    *(undefined4 *)(this_00 + 4) = 1;
    *(undefined4 *)(this_00 + 0x60) = 0;
    *(uint *)(this_00 + 100) = param_4 & 0xff;
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_FWD,param_2,REFG(undefined4, 0x108cc50));
    F_0075c020(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
    F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    *(undefined4 *)((int)this + param_1 * 8 + 8) = 1;
    *(undefined4 *)((int)this + param_1 * 8 + 0xc) = param_3;
    bVar1 = F_00ba1090(this GEN_EDX_ARG,param_3);
    uVar2 = *((uint *)GEN_TOP((*(int *)((int)this + 4) + 0x2f8)));
    *(uint *)(uVar2 + 0x60 + param_1 * 0x140) = (uint)bVar1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00ba1550 */
GEN_FRAME uint GEN_THISCALL F_00ba1550(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xba1550u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  int * piVar4;
  
  if (param_1 == 0) {
    *(int *)((int)this + 0x98) = param_2;
    bVar1 = F_00ba11b0(this GEN_EDX_FWD);
    uVar2 = CONCAT31(extraout_var_01,bVar1);
  }
  else {
    if (param_1 != 1) {
      if (param_1 - 2U != 0) {
        return param_1 - 2U;
      }
      (*(int *)(gen_frame + 0x4)) = param_2;
      (*(undefined4 *)(gen_frame + 0x8)) = param_3;
      uVar2 = F_00ba12f0(0x70c,&(*(int *)(gen_frame + 0x4)),2);
      return uVar2;
    }
    iVar3 = 0;
    piVar4 = (int *)((int)this + 0x58);
    do {
      if ((*piVar4 == param_2) || (*piVar4 == 0)) {
        *(int *)((int)this + iVar3 * 0x10 + 0x58) = param_2;
        *(undefined4 *)((int)this + iVar3 * 0x10 + 0x5c) = param_3;
        bVar1 = F_00ba11b0(this GEN_EDX_ARG);
        uVar2 = CONCAT31(extraout_var_00,bVar1);
        REFG(undefined4, 0x14a458f) = 1;
        goto LAB_00ba15e5;
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 4;
    } while (iVar3 < 4);
    bVar1 = F_00ba11b0(this GEN_EDX_ARG);
    uVar2 = CONCAT31(extraout_var,bVar1);
    REFG(undefined4, 0x14a458f) = 1;
  }
LAB_00ba15e5: ;
  if ((REFG(int, 0x14b119c) != 0) && (REFG(char, 0x14b11f5) != '\0')) {
    F_00a69750(&REFG(int, 0x14b119c) GEN_EDX_ARG);
  }
  return uVar2;
}

/* ref: FUN_00ba1610 */
GEN_FRAME uint F_00ba1610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xba1610u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = F_00b9c9b0(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))),2);
  uVar2 = F_00b9c9b0(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))),3);
  uVar3 = F_00a01e40((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,4);
  uVar4 = F_00b9c9b0(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))),5);
  uVar5 = F_00b9c9b0(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))),6);
  (*(undefined * PTR32 *)&gen_args[0]) = ((undefined *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(undefined * PTR32 *)&gen_args[0]), 1, 3),(char)uVar5)));
  if (uVar1 == 1) {
    F_00ba14a0((undefined *)((*(int *)&gen_args[1]) + 8) GEN_EDX_ARG,uVar2 - 1,uVar3,uVar4,(*(undefined * PTR32 *)&gen_args[0]));
  }
  return 0;
}

/* ref: FUN_00ba1690 */
GEN_FRAME uint GEN_THISCALL F_00ba1690(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xba1690u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x1103448));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: FormatStringCallback_VEventBattleMediator_EventBattle_Game_Client_Event::vf1 */
GEN_FRAME unsigned int GEN_THISCALL F_00ba16c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xba16c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((char)param_1 != '\0') {
    if (param_3 == 0) {
      uVar2 = F_0042a990(param_2 GEN_EDX_FWD);
      F_0042e430(((undefined *)GEN_TOP((*(int *)(iVar1 + 4) + 0x23c))) GEN_EDX_ARG,uVar2);
    }
    else if (param_3 == 1) {
      uVar2 = F_0042a990(param_2 GEN_EDX_ARG);
      F_0042e430(((undefined *)GEN_TOP((*(int *)(iVar1 + 4) + 0x290))) GEN_EDX_ARG,uVar2);
      return;
    }
  }
  return;
}

/* ref: FormatStringCallback_VEventBattleMediator_EventBattle_Game_Client_Event::vf2 */
GEN_FRAME byte GEN_THISCALL F_00ba1710(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xba1710u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 4) == *(int *)(param_1 + 4);
}

/* ref: FormatStringCallback_VEventBattleMediator_EventBattle_Game_Client_Event::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ba1730(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xba1730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10b8174));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00ba1760 */
GEN_FRAME uint GEN_THISCALL F_00ba1760(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xba1760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b9c9b0(*(undefined4 *)((int)this + 8),param_1);
  return uVar1;
}

/* ref: FUN_00ba1780 */
GEN_FRAME uint GEN_THISCALL F_00ba1780(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xba1780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b9c9b0(*(undefined4 *)((int)this + 8),param_1);
  return uVar1;
}

/* ref: Client::Game::EventBattle::EventBattleTodo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ba17a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xba17a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1103440));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::EventBattle::EventBattleMediator::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ba17d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xba17d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  undefined * pEVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1103458));
  pEVar1 = this + 0x50;
  this_00 = (undefined *)F_006b8c00();
  F_006da0a0(this_00 GEN_EDX_ARG,pEVar1);
  *(undefined * PTR32 * PTR32 *)(this + 0x50) = (*(undefined * PTR32 (*)[3])REFP(0x10b8174));
  *(undefined * PTR32 * PTR32 *)(this + 8) = (*(undefined * PTR32 (*)[1])REFP(0x1103440));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00ba1820 */
GEN_FRAME uint GEN_THISCALL F_00ba1820(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xba1820u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_00ba14a0((undefined *)((int)this + 8) GEN_EDX_FWD,param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00ba1840 */
GEN_FRAME float10 F_00ba1840(float gen_a0)
{
  GEN_ENTER(0xba1840u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: FUN_00ba1860 */
GEN_NOFRAME uint GEN_THISCALL F_00ba1860(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xba1860u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  F_004a0020(in_ecx GEN_EDX_FWD);
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x1103c10));
  in_ecx[10] = 3;
  in_ecx[0xb] = 0xffffffff;
  in_ecx[0xc] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00ba1910 */
GEN_FRAME uint GEN_STDCALL F_00ba1910(double gen_a0)
{
  GEN_ENTER(0xba1910u, (unsigned int)gen_trace_d(gen_a0), (unsigned int)(gen_trace_d(gen_a0) >> 32), 0u, 0u);
  double param_1 = (double)gen_a0;
  uint uVar1;
  
  uVar1 = F_004119a0(REFG(undefined4, 0x1370c0c) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_00ba1930 */
GEN_NOFRAME uint F_00ba1930(void)
{
  GEN_ENTER(0xba1930u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00410a50(REFG(void * PTR32, 0x1370c0c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00ba1940 */
GEN_NOFRAME byte F_00ba1940(void)
{
  GEN_ENTER(0xba1940u, 0u, 0u, 0u, 0u);
  byte bVar1;
  
  bVar1 = F_00410a60(REFG(void * PTR32, 0x1370c0c) GEN_EDX_ARG);
  return bVar1;
}

/* ref: FUN_00ba1950 */
GEN_NOFRAME uint F_00ba1950(void)
{
  GEN_ENTER(0xba1950u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00410a70(REFG(void * PTR32, 0x1370c0c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00ba1980 */
GEN_NOFRAME unsigned int F_00ba1980(void)
{
  GEN_ENTER(0xba1980u, 0u, 0u, 0u, 0u);
  F_00410a20(REFG(void * PTR32, 0x1370c0c) GEN_EDX_ARG);
  return;
}

/* ref: FUN_00ba19a0 */
GEN_NOFRAME uint GEN_THISCALL F_00ba19a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xba19a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined4 uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x1103c10));
  if (*(int *)((int)this + 0x2c) != -1) {
    piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD);
    if (piVar1 != (int *)0x0) {
      uVar3 = 0x59;
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1 GEN_EDX_ARG);
      uVar2 = F_00763050(uVar2 GEN_EDX_ARG,uVar3);
      if (uVar2 != 0) {
        F_00779780(uVar2 GEN_EDX_ARG);
      }
    }
    if (*(int *)((int)this + 0x2c) != -1) {
      piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
      if (piVar1 != (int *)0x0) {
        uVar3 = 0x59;
        uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1 GEN_EDX_ARG);
        piVar1 = (int *)F_00763050(uVar2 GEN_EDX_ARG,uVar3);
        if (piVar1 != (int *)0x0) {
          ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
        }
      }
    }
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x30);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x78))(piVar1 GEN_EDX_ARG,500);
    *(undefined4 *)((int)this + 0x30) = 0;
  }
  F_004109f0(REFG(void * PTR32, 0x1370c0c) GEN_EDX_ARG);
  uVar2 = F_004a05c0(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00ba1a40 */
GEN_FRAME uint GEN_THISCALL F_00ba1a40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xba1a40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x530];
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  undefined * this_00;
  char * pcVar5;
  undefined4 uVar6;
  
  (*(uint *)(gen_frame + 0x528)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x52c);
  *(int *)((int)this + 0x28) = param_1;
  *(undefined1 *)(REFG(int, 0x137104c) + 0x25f0) = 1;
  uVar2 = param_2;
  if ((int)param_2 < 0) {
    uVar2 = F_0049c120(*(undefined4 *)(REFG(int, 0x137104c) + 0x25f4) GEN_EDX_FWD);
  }
  if (param_1 == 0) {
    pcVar5 = "00000";
    *(undefined4 *)((int)this + 0x2c) = 1;
  }
  else if (param_1 == 1) {
    pcVar5 = "00001";
    uVar2 = 0;
  }
  else {
    if (param_1 - 2U != 0) {
      *(undefined4 *)((int)this + 0x28) = 3;
      F_00c47745((*(uint *)(gen_frame + 0x528)) ^ (uint)(uint)(gen_frame + 0x52c) GEN_EDX_ARG);
      return param_1 - 2U;
    }
    pcVar5 = "00002";
    *(undefined4 *)((int)this + 0x2c) = 2;
  }
  F_00429f90(((wchar_t *)(gen_frame + 0x220)) GEN_EDX_ARG);
  F_0042a3f0(((byte *)(gen_frame + 0x4)) + 0x14 GEN_EDX_ARG,"/ffxiv",1);
  F_00c4a8e0(((wchar_t *)(gen_frame + 0x220)),0x104,(wchar_t *)(((byte *)(gen_frame + 0x4)) + 0x14));
  F_00429fa0();
  F_0042a2a0(((wchar_t *)(gen_frame + 0x220)) GEN_EDX_ARG,pcVar5);
  F_00411870(REFG(void * PTR32, 0x1370c0c) GEN_EDX_ARG,((wchar_t *)(gen_frame + 0x220)),0,uVar2,0);
  iVar1 = *(int *)((int)this + 0x2c);
  if (iVar1 != -1) {
    piVar3 = (int *)F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG);
    if (piVar3 != (int *)0x0) {
      uVar6 = 0x59;
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x48))(piVar3 GEN_EDX_ARG);
      this_00 = (undefined *)F_00763050(uVar4 GEN_EDX_ARG,uVar6);
      if (this_00 != (undefined *)0x0) {
        F_00877590(this_00 GEN_EDX_ARG,iVar1,this);
      }
    }
  }
  if (param_1 == 0) {
    pcVar5 = "music/ffxiv/movie/NonLegacyOPM";
  }
  else {
    uVar4 = 0;
    if (param_1 == 1) goto LAB_00ba1c0e;
    uVar4 = param_1 - 2;
    if (uVar4 != 0) {
      *(undefined4 *)((int)this + 0x28) = 3;
      goto LAB_00ba1c0e;
    }
    pcVar5 = "music/ffxiv/movie/Ginruiko";
  }
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 0)) = &REFG(undefined, 0x1103be8);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)) = &REFG(undefined, 0x1103bec);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) = &REFG(undefined, 0x1103bf0);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 12)) = &REFG(undefined, 0x1103bf4);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 16)) = (*(undefined * PTR32 (*)[1])REFP(0x1103bf8));
  F_00c472af(((undefined1 *)(gen_frame + 0x428)),0x100,"%s_%s.scd",pcVar5,*(undefined4 *)(((byte *)(gen_frame + 0x4)) + uVar2 * 4));
  uVar4 = F_004e9b30(*(undefined4 *)(REFG(int, 0x137104c) + 0x25f8) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x428)),(float)(float10)1,0,0,0);
  *(uint *)((int)this + 0x30) = uVar4;
LAB_00ba1c0e: ;
  F_00429fa0();
  F_00c47745((*(uint *)(gen_frame + 0x528)) ^ (uint)(uint)(gen_frame + 0x52c) GEN_EDX_ARG);
  return uVar4;
}

/* ref: FUN_00ba1c30 */
GEN_FRAME uint GEN_THISCALL F_00ba1c30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xba1c30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int * piVar2;
  undefined4 uVar3;
  
  uVar1 = F_00411930(REFG(void * PTR32, 0x1370c0c) GEN_EDX_FWD,param_1);
  if (*(int *)((int)this + 0x2c) != -1) {
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
    uVar1 = 0;
    if (piVar2 != (int *)0x0) {
      uVar3 = 0x59;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2 GEN_EDX_ARG);
      uVar1 = F_00763050(uVar1 GEN_EDX_ARG,uVar3);
      if (uVar1 != 0) {
        F_00779770(uVar1 GEN_EDX_ARG);
      }
    }
  }
  if (*(int *)((int)this + 0x30) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x30) + 0x4c))))(*(int * PTR32 *)((int)this + 0x30) GEN_EDX_ARG,500);
  }
  return uVar1;
}

/* ref: FUN_00ba1ca0 */
GEN_NOFRAME uint GEN_THISCALL F_00ba1ca0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xba1ca0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  uint in_ecx;
  undefined4 uVar3;
  
  uVar1 = F_004109f0(REFG(void * PTR32, 0x1370c0c) GEN_EDX_FWD);
  if (*(int *)((int)this + 0x2c) != -1) {
    piVar2 = (int *)F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG);
    uVar1 = 0;
    if (piVar2 != (int *)0x0) {
      uVar3 = 0x59;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2 GEN_EDX_ARG);
      in_ecx = F_00763050(uVar1 GEN_EDX_ARG,uVar3);
      uVar1 = 0;
      if (in_ecx != 0) {
        uVar1 = F_00779780(in_ecx GEN_EDX_ARG);
      }
    }
  }
  if (*(int *)((int)this + 0x30) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x30) + 0x50))))(*(int * PTR32 *)((int)this + 0x30) GEN_EDX_ARG,500);
    *(undefined1 *)(REFG(int, 0x137104c) + 0x25f0) = 0;
    return uVar1;
  }
  *(undefined1 *)(REFG(int, 0x137104c) + 0x25f0) = 0;
  return uVar1;
}

/* ref: FUN_00ba1d20 */
GEN_NOFRAME uint GEN_THISCALL F_00ba1d20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xba1d20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  uint in_ecx;
  undefined4 uVar3;
  
  uVar1 = F_00411960(REFG(void * PTR32, 0x1370c0c) GEN_EDX_FWD);
  if (*(int *)((int)this + 0x2c) != -1) {
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
    uVar1 = 0;
    if (piVar2 != (int *)0x0) {
      uVar3 = 0x59;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2 GEN_EDX_ARG);
      in_ecx = F_00763050(uVar1 GEN_EDX_ARG,uVar3);
      uVar1 = 0;
      if (in_ecx != 0) {
        uVar1 = F_00779780(in_ecx GEN_EDX_ARG);
      }
    }
  }
  if (*(int *)((int)this + 0x30) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x30) + 0x50))))(*(int * PTR32 *)((int)this + 0x30) GEN_EDX_ARG,500);
  }
  return uVar1;
}

/* ref: FUN_00ba1d80 */
GEN_NOFRAME uint GEN_THISCALL F_00ba1d80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xba1d80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  uint in_ecx;
  undefined4 uVar4;
  
  bVar1 = F_00410a60(REFG(void * PTR32, 0x1370c0c) GEN_EDX_FWD);
  if (bVar1 == 0) {
    uVar2 = F_00411980(REFG(void * PTR32, 0x1370c0c) GEN_EDX_ARG);
    if (*(int *)((int)this + 0x2c) != -1) {
      piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
      uVar2 = 0;
      if (piVar3 != (int *)0x0) {
        uVar4 = 0x59;
        uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x48))(piVar3 GEN_EDX_ARG);
        in_ecx = F_00763050(uVar2 GEN_EDX_ARG,uVar4);
        uVar2 = 0;
        if (in_ecx != 0) {
          uVar2 = F_00779780(in_ecx GEN_EDX_ARG);
        }
      }
    }
    if (*(int *)((int)this + 0x30) != 0) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x30) + 0x58))))(*(int * PTR32 *)((int)this + 0x30) GEN_EDX_ARG,1,0);
    }
  }
  else {
    uVar2 = F_00411930(REFG(void * PTR32, 0x1370c0c) GEN_EDX_ARG,0);
    if (*(int *)((int)this + 0x2c) != -1) {
      piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
      uVar2 = 0;
      if (piVar3 != (int *)0x0) {
        uVar4 = 0x59;
        uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x48))(piVar3 GEN_EDX_ARG);
        uVar2 = F_00763050(uVar2 GEN_EDX_ARG,uVar4);
        if (uVar2 != 0) {
          F_00779770(uVar2 GEN_EDX_ARG);
        }
      }
    }
    if (*(int *)((int)this + 0x30) != 0) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x30) + 0x58))))(*(int * PTR32 *)((int)this + 0x30) GEN_EDX_ARG,0,0);
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_00ba1e40 */
GEN_NOFRAME uint GEN_THISCALL F_00ba1e40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xba1e40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if ((*(int *)((int)this + 0x28) == 3) || (bVar1 = F_00410a40(REFG(void * PTR32, 0x1370c0c) GEN_EDX_FWD), bVar1 == 0)) {
    return 0;
  }
  if ((*(int *)((int)this + 0x2c) != -1) &&
     (piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG), piVar2 != (int *)0x0)) {
    uVar4 = 0x59;
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2 GEN_EDX_ARG);
    uVar3 = F_00763050(uVar3 GEN_EDX_ARG,uVar4);
    if ((uVar3 != 0) && (bVar1 = F_00779760(uVar3 GEN_EDX_ARG), bVar1 != 0)) {
      return 0;
    }
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x30);
  if ((piVar2 != (int *)0x0) && (uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2 GEN_EDX_ARG), (char)uVar3 != '\0')
     ) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00ba1eb0 */
GEN_FRAME uint GEN_THISCALL F_00ba1eb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xba1eb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_004a0020(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x1103c10));
  *(undefined4 *)((int)this + 0x28) = 3;
  *(undefined4 *)((int)this + 0x2c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x30) = 0;
  F_00ba1a40(this GEN_EDX_ARG,param_1,param_2);
  return (uint)this;
}

/* ref: FUN_00ba1ef0 */
GEN_FRAME uint F_00ba1ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xba1ef0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * this;
  
  if (REFG(undefined4 * PTR32, 0x14c5938) != (undefined4 *)0x0) {
    return 0;
  }
  F_00411f80();
  F_004109b0(REFG(undefined4, 0x1370c0c) GEN_EDX_ARG,*(float *)&REFG(undefined, 0x1103c1c));
  this = (undefined4 *)F_00406b90(0x38,0,0);
  if (this != (undefined4 *)0x0) {
    F_004a0020(this GEN_EDX_ARG);
    *this = (*(undefined * PTR32 (*)[3])REFP(0x1103c10));
    this[10] = 3;
    this[0xb] = 0xffffffff;
    this[0xc] = 0;
    F_00ba1a40(this GEN_EDX_ARG,param_1,param_2);
    if (this[10] != 3) {
      REFG(undefined4 * PTR32, 0x14c5938) = this;
      return (uint)this;
    }
    REFG(undefined4 * PTR32, 0x14c5938) = this;
    ((GEN_TCODE *)*(gen_code32 *)*this)(this GEN_EDX_ARG,1);
  }
  REFG(undefined4 * PTR32, 0x14c5938) = (undefined4 *)0;
  return 0;
}

/* ref: FUN_00ba1f90 */
GEN_NOFRAME uint GEN_THISCALL F_00ba1f90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xba1f90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  
  if (REFG(void * PTR32, 0x14c5938) == this) {
    *(undefined4 *)((int)this + 0x34) = 0;
    F_00ba1d20(this GEN_EDX_FWD);
    F_004a00e0(this GEN_EDX_ARG);
    in_EAX = F_004a0100((undefined *)(REFG(int, 0x137104c) + 0x11b0) GEN_EDX_ARG,0x20,this);
  }
  return in_EAX;
}

/* ref: Client::System::Streaming::AllInOnePlayer::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00ba1fd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xba1fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(this + 0x34);
  if (iVar1 == 0) {
    uVar2 = F_00410a50(REFG(void * PTR32, 0x1370c0c) GEN_EDX_FWD);
    if ((char)uVar2 != '\0') {
      uVar2 = F_00ba1d20(this GEN_EDX_ARG);
      return uVar2;
    }
    *(undefined4 *)(this + 0x34) = 1;
  }
  else if (iVar1 != 1) {
    uVar2 = 0;
    if (iVar1 - 2U != 0) {
      return iVar1 - 2U;
    }
    goto LAB_00ba2018;
  }
  uVar2 = F_004109f0(REFG(void * PTR32, 0x1370c0c) GEN_EDX_ARG);
  *(undefined4 *)(this + 0x34) = 2;
LAB_00ba2018: ;
  if (REFG(undefined4 * PTR32, 0x14c5938) != (undefined4 *)0x0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x14c5938))))(REFG(undefined4 * PTR32, 0x14c5938) GEN_EDX_ARG,1);
    REFG(undefined4 * PTR32, 0x14c5938) = (undefined4 *)0x0;
  }
  return uVar2;
}

/* ref: FUN_00ba2040 */
GEN_FRAME byte GEN_THISCALL F_00ba2040(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xba2040u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x25f0) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ba2050 */
GEN_FRAME uint F_00ba2050(unsigned int gen_a0)
{
  GEN_ENTER(0xba2050u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (param_1 != -1) {
    piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
    if (piVar1 != (int *)0x0) {
      uVar3 = 0x59;
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1 GEN_EDX_ARG);
      uVar2 = F_00763050(uVar2 GEN_EDX_ARG,uVar3);
      return uVar2;
    }
  }
  return 0;
}

/* ref: FUN_00ba2080 */
GEN_FRAME unsigned int F_00ba2080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xba2080u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  uint in_ecx;
  undefined * this;
  undefined4 uVar2;
  
  if (param_1 != -1) {
    piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
    if (piVar1 != (int *)0x0) {
      uVar2 = 0x59;
      in_ecx = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1 GEN_EDX_ARG);
      this = (undefined *)F_00763050(in_ecx GEN_EDX_ARG,uVar2);
      if (this != (undefined *)0x0) {
        F_00877590(this GEN_EDX_ARG,param_1,param_2);
      }
    }
  }
  return;
}

/* ref: FUN_00ba20c0 */
GEN_FRAME unsigned int F_00ba20c0(unsigned int gen_a0)
{
  GEN_ENTER(0xba20c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (param_1 != -1) {
    piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
    if (piVar1 != (int *)0x0) {
      uVar3 = 0x59;
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1 GEN_EDX_ARG);
      uVar2 = F_00763050(uVar2 GEN_EDX_ARG,uVar3);
      if (uVar2 != 0) {
        F_00779770(uVar2 GEN_EDX_ARG);
        return;
      }
    }
  }
  return;
}

/* ref: FUN_00ba2100 */
GEN_FRAME unsigned int F_00ba2100(unsigned int gen_a0)
{
  GEN_ENTER(0xba2100u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (param_1 != -1) {
    piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
    if (piVar1 != (int *)0x0) {
      uVar3 = 0x59;
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1 GEN_EDX_ARG);
      uVar2 = F_00763050(uVar2 GEN_EDX_ARG,uVar3);
      if (uVar2 != 0) {
        F_00779780(uVar2 GEN_EDX_ARG);
        return;
      }
    }
  }
  return;
}

/* ref: FUN_00ba2140 */
GEN_FRAME uint F_00ba2140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xba2140u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  uint in_EAX = 0;
  int * piVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (param_1 != -1) {
    piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
    in_EAX = 0;
    if (piVar1 != (int *)0x0) {
      uVar3 = 0x59;
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1 GEN_EDX_ARG);
      piVar1 = (int *)F_00763050(uVar2 GEN_EDX_ARG,uVar3);
      in_EAX = 0;
      if (piVar1 != (int *)0x0) {
        uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))
                          (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
        return uVar2;
      }
    }
  }
  return in_EAX;
}

/* ref: FUN_00ba2180 */
GEN_FRAME byte F_00ba2180(unsigned int gen_a0)
{
  GEN_ENTER(0xba2180u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if (param_1 != -1) {
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
    if (piVar2 != (int *)0x0) {
      uVar4 = 0x59;
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2 GEN_EDX_ARG);
      uVar3 = F_00763050(uVar3 GEN_EDX_ARG,uVar4);
      if (uVar3 != 0) {
        bVar1 = F_00779760(uVar3 GEN_EDX_ARG);
        return bVar1;
      }
    }
  }
  return 0;
}

/* ref: Client::System::Streaming::AllInOnePlayer::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ba21c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xba21c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00ba19a0(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00ba21f0 */
GEN_FRAME float10 F_00ba21f0(float gen_a0)
{
  GEN_ENTER(0xba21f0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: FUN_00ba2230 */
GEN_NOFRAME byte F_00ba2230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xba2230u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xc60];
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  undefined * this;
  undefined2 uVar4;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc50);
  (*(uint *)(gen_frame + 0xc4c)) = uVar3;
  if (param_2 == 1) {
    this = (undefined *)F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
    uVar1 = (*(undefined4 *)(gen_frame + 0x1a));
    (*(undefined2 *)(gen_frame + 0x18)) = *param_1;
    (*(undefined4 *)(gen_frame + 0x0)) = 0x1f9;
    (*(undefined4 *)(gen_frame + 0x4)) = 0x18;
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x1a)) + 0)) = (char)param_3 != '\0';
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x1a)) + 2)) = SUB42(uVar1,2);
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x1a)) + 1)) = (undefined1)param_4;
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x1a)) + 0)) = CONCAT11((undefined1)param_4,(char)param_3 != '\0');
  }
  else {
    if (5 < param_2) goto LAB_00ba2330;
    this = (undefined *)F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
    uVar3 = 0;
    do {
      if (uVar3 < param_2) {
        uVar4 = param_1[uVar3 * 2];
      }
      else {
        uVar4 = 0;
      }
      *(undefined2 *)((int)&(*(undefined4 *)(gen_frame + 0xc24)) + uVar3 * 2) = uVar4;
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x14);
    (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x18)) + 0)) = (char)param_3 != '\0';
    (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x18)) + 1)) = (undefined1)param_4;
    (*(undefined2 *)(gen_frame + 0x18)) = CONCAT11((undefined1)param_4,(char)param_3 != '\0');
    (*(undefined4 *)(gen_frame + 0x1a)) = (*(undefined4 *)(gen_frame + 0xc24));
    (*(undefined4 *)(gen_frame + 0x0)) = 0x1fd;
    (*(undefined4 *)(gen_frame + 0x4)) = 0x20;
    (*(undefined4 *)(gen_frame + 0x1e)) = (*(undefined4 *)(gen_frame + 0xc28));
    (*(undefined2 *)(gen_frame + 0x22)) = (*(undefined2 *)(gen_frame + 0xc2c));
  }
  bVar2 = F_00974d70(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),0,0);
  uVar3 = (uint)bVar2;
LAB_00ba2330: ;
  F_00c47745((*(uint *)(gen_frame + 0xc4c)) ^ (uint)(uint)(gen_frame + 0xc50) GEN_EDX_ARG);
  return (byte)uVar3;
}

/* ref: FUN_00ba2350 */
GEN_NOFRAME byte F_00ba2350(void)
{
  GEN_ENTER(0xba2350u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  (*(undefined4 *)(gen_frame + 0x8)) = 0x1fc;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x18;
  (*(undefined1 *)(gen_frame + 0x20)) = 0;
  bVar1 = F_00974d70(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30) GEN_EDX_ARG);
  return bVar1;
}

/* ref: FUN_00ba23c0 */
GEN_NOFRAME byte F_00ba23c0(unsigned int gen_a0)
{
  GEN_ENTER(0xba23c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  (*(undefined1 *)(gen_frame + 0x20)) = (undefined1)param_1;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x1fb;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x20;
  (*(undefined2 *)(gen_frame + 0x22)) = 0;
  bVar1 = F_00974d70(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30) GEN_EDX_ARG);
  return bVar1;
}

/* ref: FUN_00ba2450 */
GEN_NOFRAME byte F_00ba2450(void)
{
  GEN_ENTER(0xba2450u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  (*(undefined4 *)(gen_frame + 0x8)) = 0x266;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x18;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 1;
  bVar1 = F_00974d70(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30) GEN_EDX_ARG);
  return bVar1;
}

/* ref: FUN_00ba2550 */
GEN_NOFRAME byte F_00ba2550(void)
{
  GEN_ENTER(0xba2550u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  (*(undefined4 *)(gen_frame + 0x8)) = 0x266;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x18;
  (*(undefined4 *)(gen_frame + 0x20)) = 2;
  (*(undefined4 *)(gen_frame + 0x24)) = 1;
  bVar1 = F_00974d70(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30) GEN_EDX_ARG);
  return bVar1;
}

/* ref: FUN_00ba25d0 */
GEN_NOFRAME byte F_00ba25d0(void)
{
  GEN_ENTER(0xba25d0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  (*(undefined4 *)(gen_frame + 0x8)) = 0x266;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x18;
  (*(undefined4 *)(gen_frame + 0x20)) = 3;
  (*(undefined4 *)(gen_frame + 0x24)) = 1;
  bVar1 = F_00974d70(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30) GEN_EDX_ARG);
  return bVar1;
}

/* ref: FUN_00ba26d0 */
GEN_FRAME uint F_00ba26d0(unsigned int gen_a0)
{
  GEN_ENTER(0xba26d0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined4 uVar2;
  ushort * puVar3;
  byte bVar4;
  int * piVar5;
  uint uVar6;
  undefined * this;
  undefined4 uVar7;
  
  puVar3 = (*(ushort * PTR32 *)&gen_args[0]);
  piVar5 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar7 = 0x29;
  uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0x48))(piVar5 GEN_EDX_ARG);
  this = (undefined *)F_00763050(uVar6 GEN_EDX_ARG,uVar7);
  uVar6 = *((uint *)GEN_TOP(((*(ushort * PTR32 *)&gen_args[0]) + 2)));
  switch((unsigned int)(uintptr_t)(uVar6)) {
  case 0: ;
    if (((*((uint *)GEN_TOP(((*(ushort * PTR32 *)&gen_args[0]) + 4))) & 1) != 0) || ((*((uint *)GEN_TOP(((*(ushort * PTR32 *)&gen_args[0]) + 4))) & 2) != 0)) {
      F_0076bd60(this GEN_EDX_ARG,1);
    }
    F_0076bda0(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((*(ushort * PTR32 *)&gen_args[0]) + 6))),0,(uint)((byte)(*((uint *)GEN_TOP(((*(ushort * PTR32 *)&gen_args[0]) + 8))) >> 5) & 1)
                );
    uVar6 = F_008dd090(this GEN_EDX_ARG);
    return uVar6;
  case 1: ;
  case 2: ;
    uVar6 = *((uint *)GEN_TOP(((*(ushort * PTR32 *)&gen_args[0]) + 4)));
    uVar7 = 5;
    if ((uVar6 & 4) != 0) {
      uVar7 = 4;
    }
    if ((uVar6 & 8) != 0) {
      uVar7 = 4;
    }
    if ((uVar6 & 0x20) != 0) {
      uVar7 = 4;
    }
    if ((uVar6 & 0x10) != 0) {
      uVar7 = 4;
    }
    if ((uVar6 & 0x40) != 0) {
      uVar7 = 6;
    }
    uVar6 = F_008dd2e0(this GEN_EDX_ARG,uVar7);
    return uVar6;
  case 3: ;
    iVar1 = *((int *)GEN_TOP(((*(ushort * PTR32 *)&gen_args[0]) + 4)));
    if (iVar1 == 0) {
      uVar6 = F_008dd3c0(this GEN_EDX_ARG,1);
      return uVar6;
    }
    if (iVar1 == 1) {
      uVar6 = F_008dd3c0(this GEN_EDX_ARG,0);
      return uVar6;
    }
    if (iVar1 == 2) {
      uVar6 = F_008dd2e0(this GEN_EDX_ARG,5);
      return uVar6;
    }
    if (iVar1 != 4) {
      if (iVar1 == 5) {
        uVar6 = F_008dd2e0(this GEN_EDX_ARG,8);
        return uVar6;
      }
      if ((iVar1 == 6) || (iVar1 == 8)) goto switchD_00ba2706_caseD_a;
    }
    break;
  case 4: ;
    uVar7 = *((undefined4 *)GEN_TOP(((*(ushort * PTR32 *)&gen_args[0]) + 8)));
    uVar2 = *((undefined4 *)GEN_TOP(((*(ushort * PTR32 *)&gen_args[0]) + 6)));
    (*(uint *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x8)), 1, 3),(char)(*((uint *)GEN_TOP(((*(ushort * PTR32 *)&gen_args[0]) + 10))) >> 5)) & 0xffffff01;
    (*(ushort * PTR32 *)&gen_args[0]) = ((ushort *)GEN_TOP((CONCAT31(GEN_PIECE(&(*(ushort * PTR32 *)&gen_args[0]), 1, 3),(char)(*((uint *)GEN_TOP(((*(ushort * PTR32 *)&gen_args[0]) + 10))) >> 6)) & 0xffffff01)));
    bVar4 = F_0076c1a0(this GEN_EDX_ARG);
    if (bVar4 == 0) {
      F_0076bd60(this GEN_EDX_ARG,(*(ushort * PTR32 *)&gen_args[0]));
      F_0076bda0(this GEN_EDX_ARG,uVar2,0,(*(uint *)(gen_frame + 0x8)));
      F_00824570(this GEN_EDX_ARG,1,puVar3);
    }
    F_007cf670(this GEN_EDX_ARG,(uint)*puVar3,(uint)((byte)puVar3[4] & 1),uVar7);
    uVar6 = F_008dd1f0(this GEN_EDX_ARG,(uint)*puVar3);
    return uVar6;
  case 5: ;
    uVar6 = F_007cf6a0(this GEN_EDX_ARG,(uint)*(*(ushort * PTR32 *)&gen_args[0]));
    return uVar6;
  case 6: ;
    uVar6 = F_008d3040(this GEN_EDX_ARG,(uint)*(*(ushort * PTR32 *)&gen_args[0]));
    return uVar6;
  case 7: ;
    if (*((int *)GEN_TOP(((*(ushort * PTR32 *)&gen_args[0]) + 4))) == 0) {
      uVar6 = F_008dd2e0(this GEN_EDX_ARG,1);
      return uVar6;
    }
    break;
  case 8: ;
    uVar6 = F_008dd2a0(this GEN_EDX_ARG,0);
    return uVar6;
  case 9: ;
    uVar6 = F_008dd2e0(this GEN_EDX_ARG,6);
    return uVar6;
  case 10: ;
switchD_00ba2706_caseD_a: ;
    uVar6 = F_008dd2e0(this GEN_EDX_ARG,7);
    return uVar6;
  case 0xb: ;
    uVar6 = F_008d2f40(this GEN_EDX_ARG);
    return uVar6;
  case 0xc: ;
    uVar6 = F_008d3640(this GEN_EDX_ARG,(uint)*(*(ushort * PTR32 *)&gen_args[0]));
  }
  return uVar6;
}

/* ref: FUN_00ba2930 */
GEN_FRAME uint F_00ba2930(unsigned int gen_a0)
{
  GEN_ENTER(0xba2930u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined * this;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar3 = 0x29;
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1 GEN_EDX_ARG);
  this = (undefined *)F_00763050(uVar2 GEN_EDX_ARG,uVar3);
  F_0076bd60(this GEN_EDX_ARG,0);
  F_0076bda0(this GEN_EDX_ARG,*param_1,0,(uint)((byte)((uint)param_1[1] >> 5) & 1));
  F_00824570(this GEN_EDX_ARG,5,param_1 + 2);
  uVar2 = F_008dd090(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00ba2990 */
GEN_FRAME uint F_00ba2990(unsigned int gen_a0)
{
  GEN_ENTER(0xba2990u, gen_a0, 0u, 0u, 0u);
  ushort * param_1 = (ushort *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined * this;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar3 = 0x29;
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1 GEN_EDX_ARG);
  this = (undefined *)F_00763050(uVar2 GEN_EDX_ARG,uVar3);
  uVar2 = (byte)param_1[2] - 1;
  switch((unsigned int)(uintptr_t)(uVar2)) {
  case 0: ;
  case 1: ;
  case 2: ;
  case 3: ;
    uVar2 = F_0086ac70(this GEN_EDX_ARG,(uint)*param_1,(uint)*(byte *)((int)param_1 + 5),
                         (uint)(byte)param_1[3],(uint)*(byte *)((int)param_1 + 7),
                         (uint)(byte)param_1[4]);
  }
  return uVar2;
}

/* ref: FUN_00ba2a00 */
GEN_FRAME uint F_00ba2a00(unsigned int gen_a0)
{
  GEN_ENTER(0xba2a00u, gen_a0, 0u, 0u, 0u);
  ushort * param_1 = (ushort *)(uintptr_t)gen_a0;
  undefined1 uVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 uVar5;
  undefined2 uStack_a;
  undefined1 uStack_8;
  
  piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar5 = 0x29;
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x48))(piVar3 GEN_EDX_ARG);
  this = (undefined *)F_00763050(uVar4 GEN_EDX_ARG,uVar5);
  uVar4 = *(uint *)(param_1 + 2);
  switch((unsigned int)(uintptr_t)(uVar4)) {
  case 0: ;
    uVar4 = F_008d3530(this GEN_EDX_ARG,(uint)*param_1);
    return uVar4;
  case 1: ;
    uVar4 = F_008d2b10(this GEN_EDX_ARG,(uint)(*(int *)(param_1 + 4) == 1));
    return uVar4;
  case 2: ;
    uVar5 = *(undefined4 *)(param_1 + 4);
    uVar1 = (undefined1)((uint)uVar5 >> 8);
    uVar4 = F_008d2a00(this GEN_EDX_ARG,(uint)(*(int *)(param_1 + 6) == 1),
                         CONCAT22(uStack_a,CONCAT11(uVar1,(char)((uint)uVar5 >> 0x10))),
                         CONCAT13(uStack_8,CONCAT21(uStack_a,uVar1)),uVar5);
    return uVar4;
  case 3: ;
    uVar4 = F_008dd180(this GEN_EDX_ARG);
    return uVar4;
  case 4: ;
    bVar2 = F_0076c590(this GEN_EDX_ARG,(uint)(*(int *)(param_1 + 4) == 1));
    return CONCAT31(extraout_var,bVar2);
  case 5: ;
    uVar4 = F_008d3640(this GEN_EDX_ARG,(uint)*param_1);
  }
  return uVar4;
}

/* ref: FUN_00ba2ad0 */
GEN_NOFRAME byte F_00ba2ad0(void)
{
  GEN_ENTER(0xba2ad0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  (*(undefined4 *)(gen_frame + 0x8)) = 0x267;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x18;
  (*(undefined1 *)(gen_frame + 0x20)) = 0;
  bVar1 = F_00974d70(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30) GEN_EDX_ARG);
  return bVar1;
}

/* ref: FUN_00ba2b40 */
GEN_FRAME uint F_00ba2b40(unsigned int gen_a0)
{
  GEN_ENTER(0xba2b40u, gen_a0, 0u, 0u, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined * this;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar3 = 0x29;
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1 GEN_EDX_ARG);
  this = (undefined *)F_00763050(uVar2 GEN_EDX_ARG,uVar3);
  uVar2 = 0;
  if (this != (undefined *)0x0) {
    uVar2 = F_008d36d0(this GEN_EDX_ARG,(uint)*param_1,(uint)param_1[1]);
  }
  return uVar2;
}

/* ref: FUN_00ba2b80 */
GEN_FRAME uint F_00ba2b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xba2b80u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *param_1 = (char)(param_2 >> 0x10);
  param_1[1] = (char)(param_2 >> 8);
  param_1[2] = (char)param_2;
  return param_2;
}

/* ref: FUN_00ba2ba0 */
GEN_FRAME uint F_00ba2ba0(unsigned int gen_a0)
{
  GEN_ENTER(0xba2ba0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1 >> 5 & 1;
}

/* ref: FUN_00ba2bb0 */
GEN_FRAME uint F_00ba2bb0(unsigned int gen_a0)
{
  GEN_ENTER(0xba2bb0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1 >> 6 & 1;
}

/* ref: FUN_00ba2bc0 */
GEN_FRAME uint F_00ba2bc0(unsigned int gen_a0)
{
  GEN_ENTER(0xba2bc0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1 & 1;
}

/* ref: FUN_00ba2bd0 */
GEN_FRAME uint GEN_THISCALL F_00ba2bd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xba2bd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined2 *)((int)this + 0x18) = (undefined2)param_1;
  *(undefined4 *)this = 0x1f9;
  *(undefined4 *)((int)this + 4) = 0x18;
  *(undefined1 *)((int)this + 0x1a) = (undefined1)param_2;
  *(undefined1 *)((int)this + 0x1b) = (undefined1)param_3;
  return (uint)this;
}

/* ref: FUN_00ba2c00 */
GEN_FRAME uint GEN_THISCALL F_00ba2c00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xba2c00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined1 *)((int)this + 0x18) = (undefined1)param_1;
  *(undefined2 *)((int)this + 0x1a) = (undefined2)param_2;
  *(undefined4 *)this = 0x1fb;
  *(undefined4 *)((int)this + 4) = 0x20;
  *(undefined4 *)((int)this + 0x20) = param_3;
  *(undefined4 *)((int)this + 0x24) = param_4;
  return (uint)this;
}

/* ref: FUN_00ba2c30 */
GEN_FRAME uint GEN_THISCALL F_00ba2c30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xba2c30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = 0x1fc;
  in_ecx[1] = 0x18;
  *(undefined1 *)(in_ecx + 6) = (undefined1)param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ba2c50 */
GEN_FRAME uint GEN_THISCALL F_00ba2c50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xba2c50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  *(undefined1 *)((int)this + 0x18) = (undefined1)param_1;
  *(undefined4 *)this = 0x1fd;
  *(undefined4 *)((int)this + 4) = 0x20;
  *(undefined1 *)((int)this + 0x19) = (undefined1)param_2;
  *(undefined4 *)((int)this + 0x1a) = *param_3;
  *(undefined4 *)((int)this + 0x1e) = param_3[1];
  *(undefined2 *)((int)this + 0x22) = *(undefined2 *)(param_3 + 2);
  return (uint)this;
}

/* ref: FUN_00ba2c90 */
GEN_FRAME uint GEN_THISCALL F_00ba2c90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xba2c90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = 0x266;
  *(undefined4 *)((int)this + 4) = 0x18;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: FUN_00ba2cc0 */
GEN_FRAME uint GEN_THISCALL F_00ba2cc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xba2cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = 0x267;
  in_ecx[1] = 0x18;
  *(undefined1 *)(in_ecx + 6) = (undefined1)param_2;
  return (uint)in_ecx;
}

/* ref: Component::Prohibit::ProhibitModuleInterface::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ba2cf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xba2cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x1103ca8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::Prohibit::ProhibitModule::vf1 */
GEN_FRAME uint GEN_THISCALL F_00ba2d30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xba2d30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_0040b110(this + 4 GEN_EDX_FWD,param_1,param_2);
  F_0040b090(this + 4 GEN_EDX_ARG,this + 0x6c);
  return 0x14;
}

/* ref: Component::Prohibit::ProhibitModule::vf7 */
GEN_FRAME byte GEN_THISCALL F_00ba2d60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xba2d60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 * PTR32 * ppuVar4;
  uint uVar5;
  char * pcVar6;
  uint uVar7;
  undefined4 * puVar8;
  uint * puVar9;
  undefined4 * PTR32 * PTR32 * pppuVar10;
  bool bVar11;
  
  ppuVar4 = ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x20)) = 0xf;
  (*(uint *)(gen_frame + 0x1c)) = 0;
  (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] + 0)) = 0;
  ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (undefined4 * PTR32 *)((uint)ppuVar4 & 0xffffff00);
  pcVar6 = param_1;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00ba41e0(((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc)) GEN_EDX_FWD,param_1,(int)pcVar6 - (int)(param_1 + 1));
  (*(uint *)(gen_frame + 0x4)) = *(uint *)(this + 0x84);
  uVar7 = F_00ba3fb0(this + 0x80 GEN_EDX_ARG,((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc)));
  uVar5 = (*(uint *)(gen_frame + 0x1c));
  uVar2 = *(uint *)(this + 0x84);
  (*(uint *)(gen_frame + 0x0)) = uVar7;
  if (uVar7 != uVar2) {
    uVar3 = *(uint *)(uVar7 + 0x1c);
    puVar8 = (undefined4 *)(uVar7 + 0xc);
    if (0xf < *(uint *)(uVar7 + 0x20)) {
      puVar8 = (undefined4 *)*puVar8;
    }
    uVar7 = (*(uint *)(gen_frame + 0x1c));
    if (uVar3 <= (*(uint *)(gen_frame + 0x1c))) {
      uVar7 = uVar3;
    }
    pppuVar10 = (undefined4 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
    if ((*(uint *)(gen_frame + 0x20)) < 0x10) {
      pppuVar10 = ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc));
    }
    uVar7 = F_0040d320(pppuVar10,puVar8,uVar7);
    if (uVar7 == 0) {
      if (uVar5 < uVar3) goto LAB_00ba2e0e;
      uVar7 = (uint)(uVar5 != uVar3);
    }
    if (-1 < (int)uVar7) {
      puVar9 = &(*(uint *)(gen_frame + 0x0));
      goto LAB_00ba2e14;
    }
  }
LAB_00ba2e0e: ;
  (*(uint *)(gen_frame + 0x8)) = uVar2;
  puVar9 = &(*(uint *)(gen_frame + 0x8));
LAB_00ba2e14: ;
  bVar11 = *puVar9 != (*(uint *)(gen_frame + 0x4));
  if (0xf < (*(uint *)(gen_frame + 0x20))) {
    F_00429760(((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc))[0],(*(uint *)(gen_frame + 0x20)) + 1,0x2c3);
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return bVar11;
}

/* ref: Component::Prohibit::ProhibitModule::vf6 */
GEN_FRAME byte GEN_THISCALL F_00ba2e50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xba2e50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * pPVar1;
  undefined1 PVar2;
  uint uVar3;
  uint uVar4;
  undefined4 * PTR32 * ppuVar5;
  uint uVar6;
  undefined * pPVar7;
  uint uVar8;
  undefined4 * puVar9;
  uint * puVar10;
  undefined4 * PTR32 * PTR32 * pppuVar11;
  bool bVar12;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  pPVar1 = this + 0x6c;
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_FWD,param_1,param_2,pPVar1,0x14);
  ppuVar5 = ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
  (*(uint *)(gen_frame + 0x20)) = 0xf;
  (*(uint *)(gen_frame + 0x1c)) = 0;
  (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] + 0)) = 0;
  ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (undefined4 * PTR32 *)((uint)ppuVar5 & 0xffffff00);
  pPVar7 = pPVar1;
  do {
    PVar2 = *(undefined1 *)pPVar7;
    pPVar7 = pPVar7 + 1;
  } while (PVar2 != (undefined1)0x0);
  F_00ba41e0(((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,pPVar1,(int)pPVar7 - (int)(this + 0x6d));
  (*(uint *)(gen_frame + 0x4)) = *(uint *)(this + 0x84);
  uVar8 = F_00ba3fb0(this + 0x80 GEN_EDX_ARG,((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc)));
  uVar6 = (*(uint *)(gen_frame + 0x1c));
  uVar3 = *(uint *)(this + 0x84);
  (*(uint *)(gen_frame + 0x0)) = uVar8;
  if (uVar8 != uVar3) {
    uVar4 = *(uint *)(uVar8 + 0x1c);
    puVar9 = (undefined4 *)(uVar8 + 0xc);
    if (0xf < *(uint *)(uVar8 + 0x20)) {
      puVar9 = (undefined4 *)*puVar9;
    }
    uVar8 = (*(uint *)(gen_frame + 0x1c));
    if (uVar4 <= (*(uint *)(gen_frame + 0x1c))) {
      uVar8 = uVar4;
    }
    pppuVar11 = (undefined4 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
    if ((*(uint *)(gen_frame + 0x20)) < 0x10) {
      pppuVar11 = ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc));
    }
    uVar8 = F_0040d320(pppuVar11,puVar9,uVar8);
    if (uVar8 == 0) {
      if (uVar6 < uVar4) goto LAB_00ba2f11;
      uVar8 = (uint)(uVar6 != uVar4);
    }
    if (-1 < (int)uVar8) {
      puVar10 = &(*(uint *)(gen_frame + 0x0));
      goto LAB_00ba2f17;
    }
  }
LAB_00ba2f11: ;
  (*(uint *)(gen_frame + 0x8)) = uVar3;
  puVar10 = &(*(uint *)(gen_frame + 0x8));
LAB_00ba2f17: ;
  bVar12 = *puVar10 != (*(uint *)(gen_frame + 0x4));
  if (0xf < (*(uint *)(gen_frame + 0x20))) {
    F_00429760(((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc))[0],(*(uint *)(gen_frame + 0x20)) + 1,0x2c3);
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return bVar12;
}

/* ref: FUN_00ba2f50 */
GEN_FRAME uint GEN_THISCALL F_00ba2f50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xba2f50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x1103ccc));
  F_00ba4cd0((undefined *)((int)this + 0x80) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x84),
               *(undefined4 * PTR32 *)((int)this + 0x84));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 0x84),0x2c,0x2c0);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x1103ca8));
  return (uint)uVar1;
}

/* ref: Component::Prohibit::ProhibitModule::vf3 */
GEN_FRAME uint GEN_THISCALL F_00ba2fa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xba2fa0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)F_004296a0(0x2c,0,0x2c0);
  *puVar1 = *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x84)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x84)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x84)));
  *(undefined2 *)(puVar1 + 10) = 0;
  F_00ba4b90((*(undefined * PTR32 *)&gen_args[0]) + 0x8d,puVar1 + 3,&(*(undefined4 *)&gen_args[1]));
  uVar2 = F_00ba4950((*(undefined * PTR32 *)&gen_args[0]) + 0x80 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),puVar1,0);
  return uVar2;
}

/* ref: Component::Prohibit::ProhibitModule::vf2 */
GEN_FRAME uint GEN_THISCALL F_00ba3000(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xba3000u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  uint uVar2;
  
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_FWD,param_1,param_2,this + 0x6c,0x14);
  puVar1 = (undefined4 *)F_004296a0(0x2c,0,0x2c0);
  *puVar1 = *(undefined4 *)(this + 0x84);
  puVar1[1] = *(undefined4 *)(this + 0x84);
  puVar1[2] = *(undefined4 *)(this + 0x84);
  *(undefined2 *)(puVar1 + 10) = 0;
  F_00ba4c30(this + 0x8d,puVar1 + 3,this + 0x6c);
  uVar2 = F_00ba4950(this + 0x80 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),puVar1,0);
  return uVar2;
}

/* ref: Component::Prohibit::ProhibitModule::vf5 */
GEN_FRAME uint GEN_THISCALL F_00ba3080(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xba3080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  char * pcVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar3 = ((uint *)(gen_frame + 0xc))[0];
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x20)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined1 *)((char *)&((uint *)(gen_frame + 0xc))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0xc))[0] = uVar3 & 0xffffff00;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  F_00ba41e0(((uint *)(gen_frame + 0xc)) GEN_EDX_FWD,param_1,(int)pcVar2 - (int)(param_1 + 1));
  F_00ba3e00(this + 0x80 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x4)),((uint *)(gen_frame + 0xc)));
  F_00ba4cd0(this + 0x80 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
  uVar3 = (*(uint *)(gen_frame + 0x20));
  if (0xf < (*(uint *)(gen_frame + 0x20))) {
    uVar4 = F_00429760(((uint *)(gen_frame + 0xc))[0],(*(uint *)(gen_frame + 0x20)) + 1,0x2c3);
    uVar3 = (uint)uVar4;
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return uVar3;
}

/* ref: Component::Prohibit::ProhibitModule::vf4 */
GEN_FRAME uint GEN_THISCALL F_00ba3120(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xba3120u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * pPVar1;
  undefined1 PVar2;
  undefined * pPVar3;
  uint uVar4;
  ulonglong uVar5;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  pPVar1 = this + 0x6c;
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_FWD,param_1,param_2,pPVar1,0x14);
  uVar4 = ((uint *)(gen_frame + 0xc))[0];
  (*(uint *)(gen_frame + 0x20)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined1 *)((char *)&((uint *)(gen_frame + 0xc))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0xc))[0] = uVar4 & 0xffffff00;
  pPVar3 = pPVar1;
  do {
    PVar2 = *(undefined1 *)pPVar3;
    pPVar3 = pPVar3 + 1;
  } while (PVar2 != (undefined1)0x0);
  F_00ba41e0(((uint *)(gen_frame + 0xc)) GEN_EDX_ARG,pPVar1,(int)pPVar3 - (int)(this + 0x6d));
  F_00ba3e00(this + 0x80 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x4)),((uint *)(gen_frame + 0xc)));
  F_00ba4cd0(this + 0x80 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
  uVar4 = (*(uint *)(gen_frame + 0x20));
  if (0xf < (*(uint *)(gen_frame + 0x20))) {
    uVar5 = F_00429760(((uint *)(gen_frame + 0xc))[0],(*(uint *)(gen_frame + 0x20)) + 1,0x2c3);
    uVar4 = (uint)uVar5;
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return uVar4;
}

/* ref: FUN_00ba31d0 */
GEN_NOFRAME uint GEN_THISCALL F_00ba31d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xba31d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x1103ccc));
  F_00408e90((int)this + 4 GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x88) = 0;
  uVar1 = F_004296a0(0x2c,0,0x2c0);
  *(uint *)((int)this + 0x84) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x84) + 4))) = *(int *)((int)this + 0x84);
  *((int *)GEN_TOP((*(int *)((int)this + 0x84) + 8))) = *(int *)((int)this + 0x84);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x84) + 0x28))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x84) + 0x29))) = 1;
  return (uint)this;
}

/* ref: FUN_00ba3270 */
GEN_FRAME byte GEN_THISCALL F_00ba3270(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xba3270u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00ba32a0 */
GEN_FRAME uint F_00ba32a0(unsigned int gen_a0)
{
  GEN_ENTER(0xba32a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00ba32b0 */
GEN_FRAME uint F_00ba32b0(unsigned int gen_a0)
{
  GEN_ENTER(0xba32b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ba32e0 */
GEN_FRAME uint GEN_STDCALL F_00ba32e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xba32e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x2c,0x2c0);
  return (uint)uVar1;
}

/* ref: FUN_00ba3310 */
GEN_FRAME uint GEN_STDCALL F_00ba3310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xba3310u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2,0x2c3);
  return (uint)uVar1;
}

/* ref: FUN_00ba3330 */
GEN_FRAME uint F_00ba3330(unsigned int gen_a0)
{
  GEN_ENTER(0xba3330u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x28;
}

/* ref: FUN_00ba3340 */
GEN_FRAME uint F_00ba3340(unsigned int gen_a0)
{
  GEN_ENTER(0xba3340u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x29;
}

/* ref: FUN_00ba3350 */
GEN_FRAME uint F_00ba3350(unsigned int gen_a0)
{
  GEN_ENTER(0xba3350u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ba3360 */
GEN_FRAME uint F_00ba3360(unsigned int gen_a0)
{
  GEN_ENTER(0xba3360u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00ba3370 */
GEN_FRAME uint F_00ba3370(unsigned int gen_a0)
{
  GEN_ENTER(0xba3370u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00ba3380 */
GEN_FRAME uint F_00ba3380(unsigned int gen_a0)
{
  GEN_ENTER(0xba3380u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x29)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x29);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00ba33a0 */
GEN_FRAME uint F_00ba33a0(unsigned int gen_a0)
{
  GEN_ENTER(0xba33a0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x29);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x29);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00ba33c0 */
GEN_FRAME uint GEN_STDCALL F_00ba33c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xba33c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x2c,param_2,0x2c0);
  return uVar1;
}

/* ref: FUN_00ba3440 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00ba3440(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xba3440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x29) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x29) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x29);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x29);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x29);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x29);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00ba3490 */
GEN_FRAME uint GEN_STDCALL F_00ba3490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xba3490u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1,param_2,0x2c3);
  return uVar1;
}

/* ref: FUN_00ba34c0 */
GEN_FRAME uint F_00ba34c0(unsigned int gen_a0)
{
  GEN_ENTER(0xba34c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ba34e0 */
GEN_NOFRAME uint GEN_THISCALL F_00ba34e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xba34e0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00ba3550 */
GEN_FRAME uint F_00ba3550(unsigned int gen_a0)
{
  GEN_ENTER(0xba3550u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ba3560 */
GEN_FRAME uint F_00ba3560(unsigned int gen_a0)
{
  GEN_ENTER(0xba3560u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ba3570 */
GEN_FRAME uint F_00ba3570(unsigned int gen_a0)
{
  GEN_ENTER(0xba3570u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ba3580 */
GEN_FRAME uint GEN_THISCALL F_00ba3580(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xba3580u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00ba35a0 */
GEN_FRAME uint F_00ba35a0(unsigned int gen_a0)
{
  GEN_ENTER(0xba35a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ba35e0 */
GEN_FRAME uint GEN_THISCALL F_00ba35e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xba35e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00ba3600 */
GEN_FRAME byte GEN_THISCALL F_00ba3600(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xba3600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00ba3620 */
GEN_FRAME uint F_00ba3620(unsigned int gen_a0)
{
  GEN_ENTER(0xba3620u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos_00ba3660 */
GEN_FRAME uint GEN_THISCALL F_00ba3660(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xba3660u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  in_ecx[4] = param_2;
  if (0xf < (uint)in_ecx[5]) {
    in_ecx = (undefined4 *)*in_ecx;
  }
  *(undefined1 *)((int)in_ecx + param_2) = 0;
  return param_2;
}

/* ref: FUN_00ba3680 */
GEN_FRAME uint GEN_THISCALL F_00ba3680(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xba3680u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ba36c0 */
GEN_FRAME uint GEN_THISCALL F_00ba36c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xba36c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x29))) == '\0') {
    *((uint * PTR32 *)GEN_TOP((*(int *)(uVar2 + 8) + 4))) = param_1;
  }
  *(uint *)(uVar2 + 4) = param_1[1];
  if (param_1 == *((uint * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + 4))) = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  puVar1 = (uint *)param_1[1];
  if (param_1 == (uint *)puVar1[2]) {
    puVar1[2] = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  *puVar1 = uVar2;
  *(uint * PTR32 *)(uVar2 + 8) = param_1;
  param_1[1] = uVar2;
  return uVar2;
}

/* ref: FUN_00ba3730 */
GEN_FRAME byte GEN_THISCALL F_00ba3730(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xba3730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * pvVar1;
  
  if (param_1 != (undefined *)0x0) {
    pvVar1 = this;
    if (0xf < *(uint *)((int)this + 0x14)) {
      pvVar1 = *(undefined * PTR32 *)this;
    }
    if (pvVar1 <= param_1) {
      pvVar1 = this;
      if (0xf < *(uint *)((int)this + 0x14)) {
        pvVar1 = *(undefined * PTR32 *)this;
      }
      if (param_1 < ((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + (int)pvVar1)))) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00ba3770 */
GEN_NOFRAME uint GEN_THISCALL F_00ba3770(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xba3770u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00ba3440(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00ba3780 */
GEN_FRAME uint GEN_THISCALL F_00ba3780(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xba3780u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined * pvVar1;
  uint uVar2;
  int iVar3;
  undefined * pvVar4;
  uint uVar5;
  
  if (*(uint *)((int)this + 0x10) < param_1) {
                    
    F_00c457e7("invalid string position");
  }
  uVar2 = *(uint *)((int)this + 0x10) - param_1;
  uVar5 = param_2;
  if (uVar2 < param_2) {
    uVar5 = uVar2;
  }
  if (uVar5 != 0) {
    pvVar4 = this;
    pvVar1 = this;
    if (0xf < *(uint *)((int)this + 0x14)) {
      pvVar4 = *(undefined * PTR32 *)this;
      pvVar1 = *(undefined * PTR32 *)this;
    }
    F_00c46e20((int)pvVar4 + param_1,(int)pvVar1 + uVar5 + param_1,uVar2 - uVar5)
    ;
    iVar3 = *(int *)((int)this + 0x10) - uVar5;
    *(int *)((int)this + 0x10) = iVar3;
    if (0xf < *(uint *)((int)this + 0x14)) {
      *(undefined1 *)(*(int *)this + iVar3) = 0;
      return (uint)this;
    }
    *(undefined1 *)((int)this + iVar3) = 0;
  }
  return (uint)this;
}

/* ref: FUN_00ba3820 */
GEN_FRAME uint GEN_THISCALL F_00ba3820(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xba3820u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00ba3840 */
GEN_FRAME uint GEN_THISCALL F_00ba3840(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xba3840u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint param_4 = (uint)gen_a4;
  uint uVar1;
  uint uVar2;
  
  if (*(uint *)((int)this + 0x10) < param_1) {
                    
    F_00c457e7("invalid string position");
  }
  uVar1 = *(uint *)((int)this + 0x10) - param_1;
  uVar2 = param_2;
  if (uVar1 < param_2) {
    uVar2 = uVar1;
  }
  uVar1 = uVar2;
  if (param_4 <= uVar2) {
    uVar1 = param_4;
  }
  if (0xf < *(uint *)((int)this + 0x14)) {
    this = *(undefined * PTR32 *)this;
  }
  uVar1 = F_0040d320((int)this + param_1,param_3,uVar1);
  if (uVar1 == 0) {
    if (uVar2 < param_4) {
      return 0xffffffff;
    }
    uVar1 = (uint)(uVar2 != param_4);
  }
  return uVar1;
}

/* ref: FUN_00ba38b0 */
GEN_NOFRAME uint GEN_THISCALL F_00ba38b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xba38b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00ba34e0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00ba38d0 */
GEN_FRAME uint GEN_THISCALL F_00ba38d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xba38d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00ba38f0 */
GEN_FRAME unsigned int F_00ba38f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xba38f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
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
      if (*(char *)((int)piVar4 + 0x29) == '\0') {
        piVar2 = (int *)piVar4[2];
        if (*(char *)((int)piVar2 + 0x29) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x29);
          piVar4 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x29);
            piVar4 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar4[1] + 0x29);
          piVar3 = (int *)piVar4[1];
          piVar2 = piVar4;
          while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar4[2]))) {
            cVar1 = *(char *)(piVar4[1] + 0x29);
            piVar3 = (int *)piVar4[1];
            piVar2 = piVar4;
          }
        }
      }
    } while (piVar4 != param_2);
  }
  return;
}

/* ref: FUN_00ba3960 */
GEN_FRAME uint GEN_THISCALL F_00ba3960(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xba3960u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00ba39a0 */
GEN_FRAME unsigned int GEN_THISCALL F_00ba39a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xba39a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  
  if (((char)param_1 != '\0') && (0xf < *(uint *)((int)this + 0x14))) {
    uVar1 = *(undefined4 *)this;
    if (param_2 != 0) {
      F_00c46aa0(this,uVar1,param_2);
    }
    F_00429760(uVar1,*(int *)((int)this + 0x14) + 1,0x2c3);
  }
  *(int *)((int)this + 0x10) = param_2;
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined1 *)(param_2 + (int)this) = 0;
  return;
}

/* ref: FUN_00ba39f0 */
GEN_FRAME uint GEN_THISCALL F_00ba39f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xba39f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ba3a00 */
GEN_FRAME uint GEN_THISCALL F_00ba3a00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xba3a00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00ba3a60 */
GEN_FRAME uint GEN_THISCALL F_00ba3a60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xba3a60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00ba3440(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00ba3a80 */
GEN_FRAME uint GEN_THISCALL F_00ba3a80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xba3a80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x29) == '\0') {
    *(int *)(*piVar2 + 4) = param_1;
  }
  piVar2[1] = *(int *)(param_1 + 4);
  if (param_1 == *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar2;
    *piVar2 = param_1;
    *(int * PTR32 *)(param_1 + 4) = piVar2;
    return (uint)piVar2;
  }
  piVar1 = *(int * PTR32 *)(param_1 + 4);
  if (param_1 == *piVar1) {
    *piVar1 = (int)piVar2;
    *piVar2 = param_1;
    *(int * PTR32 *)(param_1 + 4) = piVar2;
    return (uint)piVar2;
  }
  piVar1[2] = (int)piVar2;
  *piVar2 = param_1;
  *(int * PTR32 *)(param_1 + 4) = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_00ba3ae0 */
GEN_FRAME uint GEN_THISCALL F_00ba3ae0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xba3ae0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = param_1 | 0xf;
  uVar5 = param_1;
  if (uVar4 != 0xffffffff) {
    uVar1 = *(uint *)((int)this + 0x14);
    uVar2 = uVar1 >> 1;
    uVar5 = uVar4;
    if ((uVar4 / 3 < uVar2) && (uVar5 = uVar2 + uVar1, -uVar2 - 2 < uVar1)) {
      uVar5 = 0xfffffffe;
    }
  }
  uVar4 = F_004296a0(uVar5 + 1,0,0x2c3);
  if (param_2 != 0) {
    pvVar3 = this;
    if (0xf < *(uint *)((int)this + 0x14)) {
      pvVar3 = *(undefined * PTR32 *)this;
    }
    F_00c46aa0(uVar4,pvVar3,param_2);
  }
  if (0xf < *(uint *)((int)this + 0x14)) {
    F_00429760(*(undefined4 *)this,*(uint *)((int)this + 0x14) + 1,0x2c3);
  }
  *(undefined1 *)this = 0;
  *(uint *)this = uVar4;
  *(uint *)((int)this + 0x14) = uVar5;
  *(int *)((int)this + 0x10) = param_2;
  if (uVar5 < 0x10) {
    *(undefined1 *)((int)this + param_2) = 0;
    return uVar4;
  }
  *(undefined1 *)(uVar4 + param_2) = 0;
  return uVar4;
}

/* ref: FUN_00ba3ba0 */
GEN_FRAME unsigned int F_00ba3ba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xba3ba0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 in_ECX = 0;
  
  F_00ba38f0(param_1,param_2,param_3,in_ECX);
  return;
}

/* ref: FUN_00ba3bc0 */
GEN_FRAME uint GEN_THISCALL F_00ba3bc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xba3bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = (undefined4 *)*param_1;
  }
  uVar2 = F_00ba3840(this GEN_EDX_FWD,0,*(undefined4 *)((int)this + 0x10),puVar1,param_1[4]);
  return uVar2;
}

/* ref: FUN_00ba3bf0 */
GEN_FRAME uint GEN_THISCALL F_00ba3bf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xba3bf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00ba3c10 */
GEN_FRAME uint GEN_THISCALL F_00ba3c10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xba3c10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00ba3c20 */
GEN_NOFRAME uint GEN_THISCALL F_00ba3c20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xba3c20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *(uint *)((int)this + 0x14);
  if (0xf < uVar1) {
    uVar2 = F_00429760(*(undefined4 *)this,uVar1 + 1,0x2c3);
    uVar1 = (uint)uVar2;
  }
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)this = 0;
  return uVar1;
}

/* ref: FUN_00ba3c90 */
GEN_FRAME uint GEN_THISCALL F_00ba3c90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xba3c90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if ((*(uint *)&gen_a1) == 0xffffffff) {
                    
    F_00c4579a("string too long");
  }
  uVar1 = *(uint *)((int)this + 0x14);
  if (uVar1 < (*(uint *)&gen_a1)) {
    F_00ba3ae0(this GEN_EDX_ARG,(*(uint *)&gen_a1),*(undefined4 *)((int)this + 0x10));
    return (uint)((*(uint *)&gen_a1) != 0);
  }
  if (((char)param_2 != '\0') && ((*(uint *)&gen_a1) < 0x10)) {
    uVar3 = *(uint *)((int)this + 0x10);
    if ((*(uint *)&gen_a1) < uVar3) {
      uVar3 = (*(uint *)&gen_a1);
    }
    if (0xf < uVar1) {
      uVar2 = *(undefined4 *)this;
      if (uVar3 != 0) {
        F_00c46aa0(this,uVar2,uVar3);
      }
      F_00429760(uVar2,*(int *)((int)this + 0x14) + 1,0x2c3);
    }
    *(uint *)((int)this + 0x10) = uVar3;
    *(undefined4 *)((int)this + 0x14) = 0xf;
    *(undefined1 *)(uVar3 + (int)this) = 0;
    return (uint)((*(uint *)&gen_a1) != 0);
  }
  if ((*(uint *)&gen_a1) == 0) {
    *(undefined4 *)((int)this + 0x10) = 0;
    if (0xf < uVar1) {
      this = *(undefined * PTR32 *)this;
    }
    *(undefined1 *)this = 0;
  }
  return (uint)((*(uint *)&gen_a1) != 0);
}

/* ref: FUN_00ba3d50 */
GEN_FRAME byte F_00ba3d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xba3d50u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_2;
  if (0xf < (uint)param_2[5]) {
    puVar1 = (undefined4 *)*param_2;
  }
  uVar2 = F_00ba3840(param_1 GEN_EDX_ARG,0,*(undefined4 *)((int)param_1 + 0x10),puVar1,param_2[4]);
  return (int)uVar2 < 0;
}

/* ref: FUN_00ba3d80 */
GEN_FRAME uint GEN_THISCALL F_00ba3d80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xba3d80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if (0xf < *(uint *)((int)this + 0x14)) {
    F_00429760(*(undefined4 *)this,*(uint *)((int)this + 0x14) + 1,0x2c3);
  }
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)this = 0;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00ba3dd0 */
GEN_FRAME byte GEN_STDCALL F_00ba3dd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xba3dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_2;
  if (0xf < (uint)param_2[5]) {
    puVar1 = (undefined4 *)*param_2;
  }
  uVar2 = F_00ba3840(param_1 GEN_EDX_ARG,0,*(undefined4 *)((int)param_1 + 0x10),puVar1,param_2[4]);
  return (int)uVar2 < 0;
}

/* ref: FUN_00ba3e00 */
GEN_FRAME uint GEN_THISCALL F_00ba3e00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xba3e00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 * puVar4;
  uint uVar5;
  undefined4 * puVar6;
  uint uVar7;
  int * piVar8;
  undefined4 * puVar9;
  undefined4 * local_18;
  undefined4 * local_10;
  undefined4 * local_8;
  
  local_18 = *(undefined4 * PTR32 *)((int)this + 4);
  local_8 = (undefined4 *)local_18[1];
  local_10 = local_18;
  if (*(char *)((int)local_8 + 0x29) == '\0') {
    uVar1 = param_2[4];
    uVar2 = param_2[5];
    do {
      puVar9 = local_8 + 3;
      puVar6 = param_2;
      if (0xf < uVar2) {
        puVar6 = (undefined4 *)*param_2;
      }
      uVar3 = local_8[7];
      uVar5 = uVar1;
      if (uVar3 < uVar1) {
        uVar5 = uVar3;
      }
      uVar7 = local_8[8];
      puVar4 = puVar9;
      if (0xf < uVar7) {
        puVar4 = (undefined4 *)*puVar9;
      }
      uVar5 = F_0040d320(puVar4,puVar6,uVar5);
      if (uVar5 == 0) {
        if (uVar1 <= uVar3) {
          uVar5 = (uint)(uVar3 != uVar1);
          goto LAB_00ba3e92;
        }
LAB_00ba3e94: ;
        local_8 = (undefined4 *)local_8[2];
      }
      else {
LAB_00ba3e92: ;
        if ((int)uVar5 < 0) goto LAB_00ba3e94;
        if (*(char *)((int)local_10 + 0x29) != '\0') {
          if (0xf < uVar7) {
            puVar9 = (undefined4 *)*puVar9;
          }
          uVar5 = param_2[4];
          if (uVar1 < (uint)param_2[4]) {
            uVar5 = uVar1;
          }
          uVar7 = uVar5;
          if (uVar3 <= uVar5) {
            uVar7 = uVar3;
          }
          puVar6 = param_2;
          if (0xf < uVar2) {
            puVar6 = (undefined4 *)*param_2;
          }
          uVar7 = F_0040d320(puVar6,puVar9,uVar7);
          if (uVar7 == 0) {
            if (uVar3 <= uVar5) {
              uVar7 = (uint)(uVar5 != uVar3);
              goto LAB_00ba3ee7;
            }
          }
          else {
LAB_00ba3ee7: ;
            if (-1 < (int)uVar7) goto LAB_00ba3ef4;
          }
          local_10 = local_8;
        }
LAB_00ba3ef4: ;
        local_18 = local_8;
        local_8 = (undefined4 *)*local_8;
      }
    } while (*(char *)((int)local_8 + 0x29) == '\0');
  }
  if (*(char *)((int)local_10 + 0x29) == '\0') {
    puVar6 = (undefined4 *)*local_10;
  }
  else {
    puVar6 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  }
  puVar9 = local_10;
  if (*(char *)((int)puVar6 + 0x29) == '\0') {
    uVar1 = param_2[4];
    uVar2 = param_2[5];
    do {
      uVar3 = puVar6[7];
      piVar8 = puVar6 + 3;
      if (0xf < (uint)puVar6[8]) {
        piVar8 = (int *)*piVar8;
      }
      uVar5 = uVar1;
      if (uVar3 <= uVar1) {
        uVar5 = uVar3;
      }
      puVar9 = param_2;
      if (0xf < uVar2) {
        puVar9 = (undefined4 *)*param_2;
      }
      uVar5 = F_0040d320(puVar9,piVar8,uVar5);
      if (uVar5 == 0) {
        if (uVar3 <= uVar1) {
          uVar5 = (uint)(uVar1 != uVar3);
          goto LAB_00ba3f86;
        }
LAB_00ba3f88: ;
        puVar4 = (undefined4 *)*puVar6;
        local_10 = puVar6;
      }
      else {
LAB_00ba3f86: ;
        if ((int)uVar5 < 0) goto LAB_00ba3f88;
        puVar4 = (undefined4 *)puVar6[2];
      }
      puVar9 = local_10;
      puVar6 = puVar4;
    } while (*(char *)((int)puVar4 + 0x29) == '\0');
  }
  *param_1 = (int)local_18;
  param_1[1] = (int)puVar9;
  return (uint)param_1;
}

/* ref: FUN_00ba3fb0 */
GEN_FRAME uint GEN_THISCALL F_00ba3fb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xba3fb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  undefined4 * local_8;
  
  local_8 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)local_8[1] + 0x29) == '\0') {
    uVar1 = param_1[5];
    uVar2 = param_1[4];
    puVar7 = (undefined4 *)local_8[1];
    do {
      piVar4 = puVar7 + 3;
      puVar6 = param_1;
      if (0xf < uVar1) {
        puVar6 = (undefined4 *)*param_1;
      }
      uVar3 = puVar7[7];
      uVar5 = uVar3;
      if (uVar2 <= uVar3) {
        uVar5 = uVar2;
      }
      if (0xf < (uint)puVar7[8]) {
        piVar4 = (int *)*piVar4;
      }
      uVar5 = F_0040d320(piVar4,puVar6,uVar5);
      if (uVar5 == 0) {
        if (uVar2 <= uVar3) {
          uVar5 = (uint)(uVar3 != uVar2);
          goto LAB_00ba4018;
        }
LAB_00ba401a: ;
        puVar6 = (undefined4 *)puVar7[2];
      }
      else {
LAB_00ba4018: ;
        if ((int)uVar5 < 0) goto LAB_00ba401a;
        puVar6 = (undefined4 *)*puVar7;
        local_8 = puVar7;
      }
      puVar7 = puVar6;
    } while (*(char *)((int)puVar6 + 0x29) == '\0');
  }
  return (uint)local_8;
}

/* ref: FUN_00ba4040 */
GEN_FRAME uint GEN_THISCALL F_00ba4040(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xba4040u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined * pvVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  if ((uint)param_1[4] < param_2) {
                    
    F_00c457e7("invalid string position");
  }
  uVar3 = param_1[4] - param_2;
  if (param_3 < uVar3) {
    uVar3 = param_3;
  }
  if (this == param_1) {
    F_00ba3780(this GEN_EDX_ARG,uVar3 + param_2,0xffffffff);
    F_00ba3780(this GEN_EDX_ARG,0,param_2);
    return (uint)this;
  }
  if (uVar3 == 0xffffffff) {
                    
    F_00c4579a("string too long");
  }
  if (*(uint *)((int)this + 0x14) < uVar3) {
    F_00ba3ae0(this GEN_EDX_ARG,uVar3,*(undefined4 *)((int)this + 0x10));
    if (uVar3 == 0) {
      return (uint)this;
    }
  }
  else if (uVar3 == 0) {
    *(undefined4 *)((int)this + 0x10) = 0;
    if (0xf < *(uint *)((int)this + 0x14)) {
      **(undefined1 * PTR32 *)this = 0;
      return (uint)this;
    }
    *(undefined1 *)this = 0;
    return (uint)this;
  }
  puVar2 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar2 = (undefined4 *)*param_1;
  }
  pvVar1 = this;
  if (0xf < *(uint *)((int)this + 0x14)) {
    pvVar1 = *(undefined * PTR32 *)this;
  }
  F_00c46aa0(pvVar1,(int)puVar2 + param_2,uVar3);
  *(uint *)((int)this + 0x10) = uVar3;
  if (*(uint *)((int)this + 0x14) < 0x10) {
    *(undefined1 *)((int)this + uVar3) = 0;
    return (uint)this;
  }
  *(undefined1 *)(*(int *)this + uVar3) = 0;
  return (uint)this;
}

/* ref: FUN_00ba4130 */
GEN_FRAME uint GEN_STDCALL F_00ba4130(unsigned int gen_a0)
{
  GEN_ENTER(0xba4130u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = param_1[5];
  if (0xf < uVar1) {
    uVar2 = F_00429760(*param_1,uVar1 + 1,0x2c3);
    uVar1 = (uint)uVar2;
  }
  param_1[5] = 0xf;
  param_1[4] = 0;
  *(undefined1 *)param_1 = 0;
  return uVar1;
}

/* ref: FUN_00ba4170 */
GEN_FRAME uint GEN_THISCALL F_00ba4170(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xba4170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)this = 0;
  F_00ba4040(this GEN_EDX_FWD,param_1,0,0xffffffff);
  return (uint)this;
}

/* ref: FUN_00ba41a0 */
GEN_FRAME uint GEN_THISCALL F_00ba41a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xba41a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00ba3fb0(this GEN_EDX_FWD,param_2);
  *param_1 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00ba41c0 */
GEN_FRAME uint GEN_THISCALL F_00ba41c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xba41c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00ba3e00(this GEN_EDX_FWD,param_1,param_2);
  return param_1;
}

/* ref: FUN_00ba41e0 */
GEN_FRAME uint GEN_THISCALL F_00ba41e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xba41e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  undefined * pvVar2;
  
  if (param_1 != (undefined *)0x0) {
    uVar1 = *(uint *)((int)this + 0x14);
    pvVar2 = this;
    if (0xf < uVar1) {
      pvVar2 = *(undefined * PTR32 *)this;
    }
    if (pvVar2 <= param_1) {
      pvVar2 = this;
      if (0xf < uVar1) {
        pvVar2 = *(undefined * PTR32 *)this;
      }
      if (param_1 < ((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + (int)pvVar2)))) {
        if (0xf < uVar1) {
          uVar1 = F_00ba4040(this GEN_EDX_FWD,this,(int)param_1 - *(int *)this,param_2);
          return uVar1;
        }
        uVar1 = F_00ba4040(this GEN_EDX_ARG,this,(int)param_1 - (int)this,param_2);
        return uVar1;
      }
    }
  }
  if (param_2 == 0xffffffff) {
                    
    F_00c4579a("string too long");
  }
  if (*(uint *)((int)this + 0x14) < param_2) {
    F_00ba3ae0(this GEN_EDX_ARG,param_2,*(undefined4 *)((int)this + 0x10));
    if (param_2 == 0) {
      return (uint)this;
    }
  }
  else if (param_2 == 0) {
    *(undefined4 *)((int)this + 0x10) = 0;
    if (0xf < *(uint *)((int)this + 0x14)) {
      **(undefined1 * PTR32 *)this = 0;
      return (uint)this;
    }
    *(undefined1 *)this = 0;
    return (uint)this;
  }
  pvVar2 = this;
  if (0xf < *(uint *)((int)this + 0x14)) {
    pvVar2 = *(undefined * PTR32 *)this;
  }
  F_00c46aa0(pvVar2,param_1,param_2);
  *(uint *)((int)this + 0x10) = param_2;
  if (*(uint *)((int)this + 0x14) < 0x10) {
    *(undefined1 *)((int)this + param_2) = 0;
    return (uint)this;
  }
  *(undefined1 *)(*(int *)this + param_2) = 0;
  return (uint)this;
}

/* ref: FUN_00ba42e0 */
GEN_FRAME uint F_00ba42e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xba42e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = param_2[5];
  if (0xf < uVar1) {
    uVar2 = F_00429760(*param_2,uVar1 + 1,0x2c3);
    uVar1 = (uint)uVar2;
  }
  param_2[5] = 0xf;
  param_2[4] = 0;
  *(undefined1 *)param_2 = 0;
  return uVar1;
}

/* ref: FUN_00ba4320 */
GEN_FRAME uint GEN_THISCALL F_00ba4320(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xba4320u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    if (0xf < (uint)param_4[8]) {
      F_00429760(param_4[3],param_4[8] + 1,0x2c3);
    }
    param_4[8] = 0xf;
    param_4[7] = 0;
    *(undefined1 *)(param_4 + 3) = 0;
    F_00429760(param_4,0x2c,0x2c0);
                    
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
  cVar1 = *(char *)(param_4[1] + 0x28);
  piVar4 = param_4;
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      *param_1 = param_4;
      *(undefined1 *)(iVar2 + 0x28) = 1;
      return (uint)param_1;
    }
    piVar5 = (int *)piVar4[1];
    piVar6 = (int *)piVar5[1];
    if (piVar5 == (int *)*piVar6) {
      iVar2 = piVar6[2];
      if (*(char *)(iVar2 + 0x28) == '\0') {
        *(undefined1 *)(piVar5 + 10) = 1;
        *(undefined1 *)(iVar2 + 0x28) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x28))) = 0;
        piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
      }
      else {
        if (piVar4 == (int *)piVar5[2]) {
          piVar4 = (int *)piVar5[2];
          piVar5[2] = *piVar4;
          if (*(char *)(*piVar4 + 0x29) == '\0') {
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
        *(undefined1 *)(piVar4[1] + 0x28) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x28))) = 0;
        piVar5 = *(int * PTR32 *)(piVar4[1] + 4);
        piVar6 = (int *)*piVar5;
        *piVar5 = piVar6[2];
        if (*(char *)(piVar6[2] + 0x29) == '\0') {
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
LAB_00ba454d: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*(char *)(iVar2 + 0x28) != '\0') {
        if (piVar4 == (int *)*piVar5) {
          iVar2 = *piVar5;
          *piVar5 = *(int *)(iVar2 + 8);
          if (*((char *)GEN_TOP((*(int *)(iVar2 + 8) + 0x29))) == '\0') {
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
        *(undefined1 *)(piVar4[1] + 0x28) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x28))) = 0;
        piVar5 = *(int * PTR32 *)(piVar4[1] + 4);
        piVar6 = (int *)piVar5[2];
        piVar5[2] = *piVar6;
        if (*(char *)(*piVar6 + 0x29) == '\0') {
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
        goto LAB_00ba454d;
      }
      *(undefined1 *)(piVar5 + 10) = 1;
      *(undefined1 *)(iVar2 + 0x28) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x28))) = 0;
      piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
    }
    cVar1 = *(char *)(piVar4[1] + 0x28);
  } while( true );
}

/* ref: FUN_00ba4580 */
GEN_FRAME unsigned int GEN_STDCALL F_00ba4580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xba4580u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined1 *)0x0) {
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    F_00ba4040(param_1 GEN_EDX_ARG,param_2,0,0xffffffff);
  }
  return;
}

/* ref: FUN_00ba45b0 */
GEN_FRAME uint GEN_THISCALL F_00ba45b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xba45b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  uint uVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  uVar1 = F_00ba3fb0(this GEN_EDX_FWD,param_2);
  if (uVar1 != *(uint *)((int)this + 4)) {
    puVar2 = (undefined4 *)(uVar1 + 0xc);
    if (0xf < *(uint *)(uVar1 + 0x20)) {
      puVar2 = (undefined4 *)*puVar2;
    }
    uVar3 = F_00ba3840(param_2 GEN_EDX_ARG,0,*(undefined4 *)((int)param_2 + 0x10),puVar2,
                         *(undefined4 *)(uVar1 + 0x1c));
    if (-1 < (int)uVar3) {
      *param_1 = uVar1;
      return (uint)param_1;
    }
  }
  *param_1 = *(uint *)((int)this + 4);
  return (uint)param_1;
}

/* ref: FUN_00ba4620 */
GEN_FRAME uint GEN_THISCALL F_00ba4620(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xba4620u, gen_a0, gen_a1, 0u, 0u);
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
  uVar3 = F_00ba41e0(this GEN_EDX_FWD,param_1,(int)pcVar2 - (int)(param_1 + 1));
  return uVar3;
}

/* ref: FUN_00ba4650 */
GEN_FRAME uint GEN_THISCALL F_00ba4650(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xba4650u, gen_a0, gen_a1, gen_a2, 0u);
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
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x29))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  F_00ba3440(&(*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  piVar6 = (int *)*piVar3;
  if (*(char *)((int)piVar6 + 0x29) == '\0') {
    piVar7 = piVar6;
    if ((*(char *)(piVar3[2] + 0x29) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar3[2]) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar7 + 0x29) == '\0') {
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
      iVar1 = (*(int * PTR32 *)&gen_args[2])[10];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 10))) = (char)piVar3[10];
      *(char *)(piVar3 + 10) = (char)iVar1;
      goto LAB_00ba476a;
    }
  }
  else {
    piVar7 = (int *)piVar3[2];
  }
  piVar6 = (int *)piVar3[1];
  if (*(char *)((int)piVar7 + 0x29) == '\0') {
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
    if (*(char *)((int)piVar7 + 0x29) == '\0') {
      piVar4 = (int *)F_00ba33a0(piVar7);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*(int * PTR32 *)(iVar1 + 8) == piVar3) {
    if (*(char *)((int)piVar7 + 0x29) == '\0') {
      uVar5 = F_00ba3380(piVar7);
      *(uint *)(iVar1 + 8) = uVar5;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar6;
    }
  }
LAB_00ba476a: ;
  if ((char)piVar3[10] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[10] != '\x01') break;
        piVar6 = (int *)*piVar4;
        if (piVar7 == piVar6) {
          piVar6 = (int *)piVar4[2];
          if ((char)piVar6[10] == '\0') {
            *(undefined1 *)(piVar6 + 10) = 1;
            *(undefined1 *)(piVar4 + 10) = 0;
            F_00ba3a80((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            piVar6 = (int *)piVar4[2];
          }
          if (*(char *)((int)piVar6 + 0x29) == '\0') {
            if ((*(char *)(*piVar6 + 0x28) != '\x01') || (*(char *)(piVar6[2] + 0x28) != '\x01')) {
              if (*(char *)(piVar6[2] + 0x28) == '\x01') {
                *(undefined1 *)(*piVar6 + 0x28) = 1;
                *(undefined1 *)(piVar6 + 10) = 0;
                F_00ba36c0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar6);
                piVar6 = (int *)piVar4[2];
              }
              *(char *)(piVar6 + 10) = (char)piVar4[10];
              *(undefined1 *)(piVar4 + 10) = 1;
              *(undefined1 *)(piVar6[2] + 0x28) = 1;
              F_00ba3a80((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
              break;
            }
LAB_00ba4828: ;
            *(undefined1 *)(piVar6 + 10) = 0;
          }
        }
        else {
          if ((char)piVar6[10] == '\0') {
            *(undefined1 *)(piVar6 + 10) = 1;
            *(undefined1 *)(piVar4 + 10) = 0;
            F_00ba36c0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            piVar6 = (int *)*piVar4;
          }
          if (*(char *)((int)piVar6 + 0x29) == '\0') {
            if ((*(char *)(piVar6[2] + 0x28) == '\x01') && (*(char *)(*piVar6 + 0x28) == '\x01'))
            goto LAB_00ba4828;
            if (*(char *)(*piVar6 + 0x28) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0x28) = 1;
              *(undefined1 *)(piVar6 + 10) = 0;
              F_00ba3a80((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar6);
              piVar6 = (int *)*piVar4;
            }
            *(char *)(piVar6 + 10) = (char)piVar4[10];
            *(undefined1 *)(piVar4 + 10) = 1;
            *(undefined1 *)(*piVar6 + 0x28) = 1;
            F_00ba36c0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = (int *)piVar4[1];
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 10) = 1;
  }
  if (0xf < (uint)piVar3[8]) {
    F_00429760(piVar3[3],piVar3[8] + 1,0x2c3);
  }
  piVar3[8] = 0xf;
  piVar3[7] = 0;
  *(undefined1 *)(piVar3 + 3) = 0;
  F_00429760(piVar3,0x2c,0x2c0);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00ba48e0 */
GEN_FRAME unsigned int GEN_THISCALL F_00ba48e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xba48e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x29);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00ba48e0(this GEN_EDX_FWD,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    if (0xf < (uint)piVar3[8]) {
      F_00429760(piVar3[3],piVar3[8] + 1,0x2c3);
    }
    piVar3[8] = 0xf;
    piVar3[7] = 0;
    *(undefined1 *)(piVar3 + 3) = 0;
    F_00429760(piVar3,0x2c,0x2c0);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x29);
  }
  return;
}

/* ref: FUN_00ba4950 */
GEN_FRAME uint GEN_THISCALL F_00ba4950(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xba4950u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  uint uVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  bool bVar10;
  undefined4 uVar11;
  
  puVar5 = ((undefined4 *)GEN_TOP((*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))))[1]));
  puVar9 = (undefined4 *)((*(int *)&gen_args[2]) + 0xc);
  cVar1 = *(char *)((int)puVar5 + 0x29);
  bVar10 = true;
  (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),1);
  puVar8 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  uVar11 = (*(undefined4 *)(gen_frame + 0x4));
  while (cVar1 == '\0') {
    piVar3 = puVar5 + 3;
    if ((char)(*(undefined4 * PTR32 *)&gen_args[3]) == '\0') {
      uVar7 = puVar5[7];
      if (0xf < (uint)puVar5[8]) {
        piVar3 = (int *)*piVar3;
      }
      uVar2 = *(uint *)((*(int *)&gen_args[2]) + 0x1c);
      uVar4 = uVar2;
      if (uVar7 <= uVar2) {
        uVar4 = uVar7;
      }
      puVar8 = puVar9;
      if (0xf < *(uint *)((*(int *)&gen_args[2]) + 0x20)) {
        puVar8 = (undefined4 *)*puVar9;
      }
      uVar4 = F_0040d320(puVar8,piVar3,uVar4);
      if (uVar4 == 0) {
        if (uVar2 < uVar7) {
          uVar4 = 0xffffffff;
        }
        else {
          uVar4 = (uint)(uVar2 != uVar7);
        }
      }
      bVar10 = (int)uVar4 < 0;
    }
    else {
      puVar8 = puVar9;
      if (0xf < *(uint *)((*(int *)&gen_args[2]) + 0x20)) {
        puVar8 = (undefined4 *)*puVar9;
      }
      uVar7 = puVar5[7];
      uVar2 = *(uint *)((*(int *)&gen_args[2]) + 0x1c);
      uVar4 = uVar7;
      if (uVar2 <= uVar7) {
        uVar4 = uVar2;
      }
      if (0xf < (uint)puVar5[8]) {
        piVar3 = (int *)*piVar3;
      }
      uVar4 = F_0040d320(piVar3,puVar8,uVar4);
      if (uVar4 == 0) {
        if (uVar7 < uVar2) {
          bVar10 = false;
          goto LAB_00ba4a30;
        }
        uVar4 = (uint)(uVar7 != uVar2);
      }
      bVar10 = -1 < (int)uVar4;
    }
LAB_00ba4a30: ;
    gen_piece_set(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3, (unsigned long long)((undefined3)((uint)uVar11 >> 8)));
    (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),bVar10);
    if (bVar10 == false) {
      puVar6 = (undefined4 *)puVar5[2];
    }
    else {
      puVar6 = (undefined4 *)*puVar5;
    }
    puVar8 = puVar5;
    puVar5 = puVar6;
    uVar11 = (*(undefined4 *)(gen_frame + 0x4));
    cVar1 = *(char *)((int)puVar6 + 0x29);
  }
  (*(undefined4 * PTR32 *)&gen_args[3]) = puVar8;
  if (bVar10 != false) {
    if (puVar8 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
      uVar11 = 1;
      goto LAB_00ba4a73;
    }
    F_00ba34e0(&(*(undefined4 * PTR32 *)&gen_args[3]) GEN_EDX_ARG);
  }
  puVar5 = (*(undefined4 * PTR32 *)&gen_args[3]);
  puVar6 = puVar9;
  if (0xf < *(uint *)((*(int *)&gen_args[2]) + 0x20)) {
    puVar6 = (undefined4 *)*puVar9;
  }
  uVar7 = F_00ba3840((*(undefined4 * PTR32 *)&gen_args[3]) + 3 GEN_EDX_ARG,0,(*(undefined4 * PTR32 *)&gen_args[3])[7],puVar6,*(undefined4 *)((*(int *)&gen_args[2]) + 0x1c));
  if (-1 < (int)uVar7) {
    if (0xf < *(uint *)((*(int *)&gen_args[2]) + 0x20)) {
      F_00429760(*puVar9,*(uint *)((*(int *)&gen_args[2]) + 0x20) + 1,0x2c3);
    }
    *(undefined4 *)((*(int *)&gen_args[2]) + 0x20) = 0xf;
    *(undefined4 *)((*(int *)&gen_args[2]) + 0x1c) = 0;
    *(undefined1 *)puVar9 = 0;
    F_00429760((*(int *)&gen_args[2]),0x2c,0x2c0);
    *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar5;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
LAB_00ba4a73: ;
  puVar5 = (undefined4 *)F_00ba4320((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[3]),uVar11,puVar8,(*(int *)&gen_args[2]));
  *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar5;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00ba4b20 */
GEN_FRAME uint GEN_THISCALL F_00ba4b20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xba4b20u, gen_a0, gen_a1, 0u, 0u);
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
  F_00ba41e0(this GEN_EDX_FWD,param_1,(int)pcVar2 - (int)(param_1 + 1));
  return (uint)this;
}

/* ref: FUN_00ba4b60 */
GEN_NOFRAME uint GEN_THISCALL F_00ba4b60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xba4b60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00ba48e0(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar1 = *(uint *)((int)this + 4);
  *(uint *)(uVar1 + 8) = uVar1;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00ba4b90 */
GEN_FRAME uint F_00ba4b90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xba4b90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  char * pcVar2;
  char * pcVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar4 = ((uint *)(gen_frame + 0xc))[0];
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  pcVar2 = (char *)*param_3;
  (*(uint *)(gen_frame + 0x20)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined1 *)((char *)&((uint *)(gen_frame + 0xc))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0xc))[0] = uVar4 & 0xffffff00;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  F_00ba41e0(((uint *)(gen_frame + 0xc)) GEN_EDX_ARG,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  if (param_2 != (undefined1 *)0x0) {
    *(undefined4 *)(param_2 + 0x14) = 0xf;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *param_2 = 0;
    F_00ba4040(param_2 GEN_EDX_ARG,((uint *)(gen_frame + 0xc)),0,0xffffffff);
  }
  uVar4 = (*(uint *)(gen_frame + 0x20));
  if (0xf < (*(uint *)(gen_frame + 0x20))) {
    uVar5 = F_00429760(((uint *)(gen_frame + 0xc))[0],(*(uint *)(gen_frame + 0x20)) + 1,0x2c3);
    uVar4 = (uint)uVar5;
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return uVar4;
}

/* ref: FUN_00ba4c30 */
GEN_FRAME uint F_00ba4c30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xba4c30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  char * param_3 = (char *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  char * pcVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar3 = ((uint *)(gen_frame + 0xc))[0];
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x20)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined1 *)((char *)&((uint *)(gen_frame + 0xc))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0xc))[0] = uVar3 & 0xffffff00;
  pcVar2 = param_3;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  F_00ba41e0(((uint *)(gen_frame + 0xc)) GEN_EDX_ARG,param_3,(int)pcVar2 - (int)(param_3 + 1));
  if (param_2 != (undefined1 *)0x0) {
    *(undefined4 *)(param_2 + 0x14) = 0xf;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *param_2 = 0;
    F_00ba4040(param_2 GEN_EDX_ARG,((uint *)(gen_frame + 0xc)),0,0xffffffff);
  }
  uVar3 = (*(uint *)(gen_frame + 0x20));
  if (0xf < (*(uint *)(gen_frame + 0x20))) {
    uVar4 = F_00429760(((uint *)(gen_frame + 0xc))[0],(*(uint *)(gen_frame + 0x20)) + 1,0x2c3);
    uVar3 = (uint)uVar4;
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_00ba4cd0 */
GEN_FRAME uint GEN_THISCALL F_00ba4cd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xba4cd0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00ba48e0(this GEN_EDX_FWD,piVar2[1]);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x29) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x29) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x29);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x29);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x29);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x29);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_00ba4650(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00ba4d90 */
GEN_FRAME uint GEN_THISCALL F_00ba4d90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xba4d90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00ba4cd0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00ba4db0 */
GEN_FRAME uint GEN_THISCALL F_00ba4db0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xba4db0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x2c,0,0x2c0);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 10) = 0;
  F_00ba4b90((int)this + 0xd,puVar1 + 3,param_1);
  return (uint)puVar1;
}

/* ref: FUN_00ba4e00 */
GEN_FRAME uint GEN_THISCALL F_00ba4e00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xba4e00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x2c,0,0x2c0);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 10) = 0;
  F_00ba4c30((int)this + 0xd,puVar1 + 3,param_1);
  return (uint)puVar1;
}

/* ref: FUN_00ba4e50 */
GEN_FRAME uint GEN_THISCALL F_00ba4e50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xba4e50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00ba4cd0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x2c,0x2c0);
  return (uint)uVar1;
}

/* ref: FUN_00ba4e90 */
GEN_FRAME uint GEN_THISCALL F_00ba4e90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xba4e90u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  F_00ba3e00((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x4)),(*(uint *)&gen_args[1]));
  (*(uint *)&gen_args[1]) = 0;
  F_00ba38f0((*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),&(*(uint *)&gen_args[1]),0);
  F_00ba4cd0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
  return (*(uint *)&gen_args[1]);
}

/* ref: FUN_00ba4ef0 */
GEN_FRAME uint GEN_THISCALL F_00ba4ef0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xba4ef0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x2c,0,0x2c0);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 10) = 0;
  F_00ba4b90((int)this + 0xd,puVar1 + 3,param_2);
  F_00ba4950(this GEN_EDX_ARG,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_00ba4f50 */
GEN_FRAME uint GEN_THISCALL F_00ba4f50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xba4f50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x2c,0,0x2c0);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 10) = 0;
  F_00ba4c30((int)this + 0xd,puVar1 + 3,param_2);
  F_00ba4950(this GEN_EDX_ARG,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_00ba4fb0 */
GEN_FRAME uint GEN_THISCALL F_00ba4fb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xba4fb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00ba4cd0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x2c,0x2c0);
  return (uint)uVar1;
}

/* ref: Component::Prohibit::ProhibitModule::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ba5030(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xba5030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x1103ccc));
  F_00ba4cd0(this + 0x80 GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)(this + 0x84),*(undefined4 * PTR32 *)(this + 0x84));
  F_00429760(*(undefined4 *)(this + 0x84),0x2c,0x2c0);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x1103ca8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00ba5090 */
GEN_FRAME float10 F_00ba5090(float gen_a0)
{
  GEN_ENTER(0xba5090u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: FUN_00ba50b0 */
GEN_FRAME uint GEN_THISCALL F_00ba50b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xba50b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  
  uVar1 = param_2;
  switch((unsigned int)(uintptr_t)(*(undefined2 *)(param_2 + 2))) {
  case 100: ;
    uVar1 = F_00c07490(param_1,param_2 + 0x10);
    return uVar1;
  case 0x65: ;
    uVar1 = F_00c07750(param_1,param_2 + 0x10);
    return uVar1;
  case 0x66: ;
    uVar1 = F_00c07620(param_1,param_2 + 0x10);
    return uVar1;
  case 0x67: ;
    uVar1 = F_00c07680(param_1,param_2 + 0x10);
    return uVar1;
  case 0x68: ;
    F_00c07480(param_1,param_2 + 0x10);
    return param_2 + 0x10;
  case 0x69: ;
    uVar1 = F_00c07ad0(param_1,param_2 + 0x10);
    break;
  case 0x6a: ;
    uVar1 = F_00c076e0(param_1,param_2 + 0x10);
    return uVar1;
  }
  return uVar1;
}

/* ref: FUN_00ba5190 */
GEN_FRAME uint GEN_THISCALL F_00ba5190(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xba5190u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = (*(undefined * PTR32 (*)[2])REFP(0x1104450));
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x1104468));
  in_ecx[1] = (*(undefined * PTR32 (*)[2])REFP(0x110445c));
  in_ecx[2] = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ba51c0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00ba51c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xba51c0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  in_ecx[1] = (*(undefined * PTR32 (*)[2])REFP(0x1104450));
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x10e5cc4));
  return;
}

/* ref: Client::Network::PacketDispatcher::Dispatch */
GEN_FRAME uint GEN_THISCALL F_00ba51d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xba51d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  int * piVar2;
  int iVar3;
  
  F_00a558c0(param_1,(uint)*(ushort *)(param_2 + 2));
  uVar1 = *(ushort *)(param_2 + 2) - 0x67;
  if (uVar1 < 0x285) {
                    
                    
    switch((unsigned int)(uintptr_t)(*((undefined1 *)GEN_TOP(((int)&REFG(undefined * PTR32, 0xba6358) + *(ushort *)(param_2 + 2) + 1))))) {
    case 0: ;
      piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
      if (piVar2 != (int *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x7c))(piVar2 GEN_EDX_ARG,1,0,param_2);
      }
      uVar1 = F_00a4f220(param_1,param_2 + 0x10);
      return uVar1;
    case 1: ;
      uVar1 = F_00b04930(param_1,param_2 + 0x10);
      return uVar1;
    case 2: ;
      uVar1 = F_00b04990(param_1,param_2 + 0x10);
      return uVar1;
    case 3: ;
      uVar1 = F_00b049f0(param_1,param_2 + 0x10);
      return uVar1;
    case 4: ;
      uVar1 = F_00b02710(param_1,param_2 + 0x10);
      return uVar1;
    case 5: ;
      uVar1 = F_00b02800(param_1,param_2 + 0x10);
      return uVar1;
    case 6: ;
      uVar1 = F_00b02840(param_1,param_2 + 0x10);
      return uVar1;
    case 7: ;
      uVar1 = F_00b02940(param_1,param_2 + 0x10);
      return uVar1;
    case 8: ;
      uVar1 = F_00b029c0(param_1,param_2 + 0x10);
      return uVar1;
    case 9: ;
      uVar1 = F_00b02a00(param_1,param_2 + 0x10);
      return uVar1;
    case 10: ;
      uVar1 = F_00b02b20(param_1,param_2 + 0x10);
      return uVar1;
    case 0xb: ;
      uVar1 = F_00b02be0(param_1,param_2 + 0x10);
      return uVar1;
    case 0xc: ;
      uVar1 = F_00b02ca0(param_1,param_2 + 0x10);
      return uVar1;
    case 0xd: ;
      uVar1 = F_00b03190(param_1,param_2 + 0x10);
      return uVar1;
    case 0xe: ;
      uVar1 = F_00b031e0(param_1,param_2 + 0x10);
      return uVar1;
    case 0xf: ;
      uVar1 = F_00b036a0(param_1,param_2 + 0x10);
      return uVar1;
    case 0x10: ;
      uVar1 = F_00b03740(param_1,param_2 + 0x10);
      return uVar1;
    case 0x11: ;
      uVar1 = F_00b037e0(param_1,param_2 + 0x10);
      return uVar1;
    case 0x12: ;
      uVar1 = F_00b03bd0(param_1,param_2 + 0x10);
      return uVar1;
    case 0x13: ;
      uVar1 = F_00b03d00(param_1,param_2 + 0x10);
      return uVar1;
    case 0x14: ;
      uVar1 = F_00b04a50(param_1,param_2 + 0x10);
      return uVar1;
    case 0x15: ;
      uVar1 = F_00b03cb0(param_1,param_2 + 0x10);
      return uVar1;
    case 0x16: ;
      uVar1 = F_00b05490(param_1,param_2 + 0x10);
      return uVar1;
    case 0x17: ;
      uVar1 = F_00b03d60(param_1,param_2 + 0x10);
      return uVar1;
    case 0x18: ;
      uVar1 = F_00b03da0(param_1,param_2 + 0x10);
      return uVar1;
    case 0x19: ;
      uVar1 = F_00b03de0(param_1,param_2 + 0x10);
      return uVar1;
    case 0x1a: ;
      uVar1 = F_00b03e20(param_1,param_2 + 0x10);
      return uVar1;
    case 0x1b: ;
      uVar1 = F_00b03e90(param_1,param_2 + 0x10);
      return uVar1;
    case 0x1c: ;
      uVar1 = F_00b03ed0(param_1,param_2 + 0x10);
      return uVar1;
    case 0x1d: ;
      uVar1 = F_00b05750(param_1,param_2 + 0x10);
      return uVar1;
    case 0x1e: ;
      uVar1 = F_00b058e0(param_1,param_2 + 0x10);
      return uVar1;
    case 0x1f: ;
      uVar1 = F_00b03f10(param_1,param_2 + 0x10);
      return uVar1;
    case 0x20: ;
      uVar1 = F_00b03f50(param_1,param_2 + 0x10);
      return uVar1;
    case 0x21: ;
      uVar1 = F_00b05ac0(param_1,param_2 + 0x10);
      return uVar1;
    case 0x22: ;
      uVar1 = F_00b03f90(param_1,param_2 + 0x10);
      return uVar1;
    case 0x23: ;
      uVar1 = F_00b05d70(param_1,param_2 + 0x10);
      return uVar1;
    case 0x24: ;
      uVar1 = F_00b04640(param_1,param_2 + 0x10);
      return uVar1;
    case 0x25: ;
      uVar1 = F_00b04680(param_1,param_2 + 0x10);
      return uVar1;
    case 0x26: ;
      uVar1 = F_00b046c0(param_1,param_2 + 0x10);
      return uVar1;
    case 0x27: ;
      uVar1 = F_00b04700(param_1,param_2 + 0x10);
      return uVar1;
    case 0x28: ;
      uVar1 = F_00b04740(param_1,param_2 + 0x10);
      return uVar1;
    case 0x29: ;
      uVar1 = F_00b047b0(param_1,param_2 + 0x10);
      return uVar1;
    case 0x2a: ;
      uVar1 = F_00b04830(param_1,param_2 + 0x10);
      return uVar1;
    case 0x2b: ;
      uVar1 = F_00b047f0(param_1,param_2 + 0x10);
      return uVar1;
    case 0x2c: ;
      uVar1 = F_00b04870(param_1,param_2 + 0x10);
      return uVar1;
    case 0x2d: ;
      uVar1 = F_00b048b0(param_1,param_2 + 0x10);
      return uVar1;
    case 0x2e: ;
      uVar1 = F_00b048f0(param_1,param_2 + 0x10);
      return uVar1;
    case 0x2f: ;
      uVar1 = F_00b02cd0(param_1,param_2 + 0x10);
      return uVar1;
    case 0x30: ;
      uVar1 = F_00a53c00(*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14),
                           (uint)*(ushort *)(param_2 + 0x1a),param_2 + 0x1c,
                           (uint)*(ushort *)(param_2 + 0x18));
      return uVar1;
    case 0x31: ;
      uVar1 = F_00a555b0(param_1,param_2 + 0x10);
      return uVar1;
    case 0x32: ;
      uVar1 = F_00a4ee20(param_1,param_2 + 0x10);
      return uVar1;
    case 0x33: ;
      uVar1 = F_00a55f80(param_1,(uint)*(ushort *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14)
                           ,*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c),
                           *(undefined4 *)(param_2 + 0x20),0,0,0xe0000000,0);
      return uVar1;
    case 0x34: ;
      uVar1 = F_00a55f80(param_1,(uint)*(ushort *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14)
                           ,*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c),
                           *(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x24),
                           *(undefined4 *)(param_2 + 0x28),0xe0000000,0);
      return uVar1;
    case 0x35: ;
      uVar1 = F_00a55f80(param_1,(uint)*(ushort *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14)
                           ,*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c),
                           *(undefined4 *)(param_2 + 0x20),0,0,*(undefined4 *)(param_2 + 0x28),
                           *(undefined4 *)(param_2 + 0x2c));
      return uVar1;
    case 0x36: ;
      uVar1 = F_00a554c0(param_1,param_2 + 0x10);
      return uVar1;
    case 0x37: ;
      uVar1 = F_00a4e520(param_1,param_2 + 0x10);
      return uVar1;
    case 0x38: ;
      uVar1 = F_00a4e510(param_1,param_2 + 0x10);
      return uVar1;
    case 0x39: ;
      uVar1 = F_00a4e4b0(param_1,param_2 + 0x10);
      return uVar1;
    case 0x3a: ;
      uVar1 = F_00a4e440(param_1,param_2 + 0x10);
      return uVar1;
    case 0x3b: ;
      uVar1 = F_00a4f1e0(param_1,param_2 + 0x10);
      return uVar1;
    case 0x3c: ;
      uVar1 = F_00a55c00(param_1,param_2 + 0x10);
      return uVar1;
    case 0x3d: ;
      uVar1 = F_00a4e400(param_1,param_2 + 0x10);
      return uVar1;
    case 0x3e: ;
      uVar1 = F_00a55c40(param_1,param_2 + 0x10);
      return uVar1;
    case 0x3f: ;
      uVar1 = F_00a55c60(param_1,param_2 + 0x10);
      return uVar1;
    case 0x40: ;
      uVar1 = F_00a4e4f0(param_1,param_2 + 0x10);
      return uVar1;
    case 0x41: ;
      uVar1 = F_00a52d10(param_1,param_2 + 0x10);
      return uVar1;
    case 0x42: ;
      uVar1 = F_00a52fd0(param_1,param_2 + 0x10);
      return uVar1;
    case 0x43: ;
      uVar1 = F_00a4e9a0(param_1,param_2 + 0x10);
      return uVar1;
    case 0x44: ;
      uVar1 = F_00a4e9c0(param_1,param_2 + 0x10);
      return uVar1;
    case 0x45: ;
      uVar1 = F_00a4ea20(param_1,param_2 + 0x10);
      return uVar1;
    case 0x46: ;
      uVar1 = F_00a53340(param_1,param_2 + 0x10);
      return uVar1;
    case 0x47: ;
      uVar1 = F_00a4ecc0(param_1,param_2 + 0x10);
      return uVar1;
    case 0x48: ;
      uVar1 = F_00a4ed60(param_1,param_2 + 0x10);
      return uVar1;
    case 0x49: ;
      uVar1 = F_00a53550(param_1,param_2 + 0x10);
      return uVar1;
    case 0x4a: ;
      uVar1 = F_00a4ecf0(param_1,param_2 + 0x10);
      return uVar1;
    case 0x4b: ;
      uVar1 = F_00a4f110(param_1,param_2 + 0x10);
      return uVar1;
    case 0x4c: ;
      uVar1 = F_00a4f150(param_1,param_2 + 0x10);
      return uVar1;
    case 0x4d: ;
      uVar1 = F_00a535a0(param_1,param_2 + 0x10);
      return uVar1;
    case 0x4e: ;
      uVar1 = F_00a4f1b0(param_1,param_2 + 0x10);
      return uVar1;
    case 0x4f: ;
      uVar1 = F_00a6ab30(&REFG(undefined, 0x14ab3a4) GEN_EDX_ARG,param_1,param_2 + 0x10);
      return uVar1;
    case 0x50: ;
      uVar1 = F_00aadf20(&REFG(undefined, 0x14b5ef0) GEN_EDX_ARG,*(undefined4 *)(param_2 + 0x10),
                           *(undefined4 *)(param_2 + 0x14),param_2 + 0x18);
      return uVar1;
    case 0x51: ;
      uVar1 = F_00a4f6b0(param_1,param_2 + 0x10);
      return uVar1;
    case 0x52: ;
      uVar1 = F_00a39bc0(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,param_1,param_2 + 0x10);
      return uVar1;
    case 0x53: ;
      uVar1 = F_00a558a0(param_1,param_2);
      return uVar1;
    case 0x54: ;
      uVar1 = F_00a55880(param_1,param_2);
      return uVar1;
    case 0x55: ;
      uVar1 = F_00a55ca0(param_1,param_2);
      return uVar1;
    case 0x56: ;
      uVar1 = F_00a55860(param_1,param_2);
      return uVar1;
    case 0x57: ;
      uVar1 = F_00a4f260(param_1,param_2 + 0x10);
      return uVar1;
    case 0x58: ;
      uVar1 = F_00a4f280(param_1,param_2 + 0x10);
      return uVar1;
    case 0x59: ;
      uVar1 = F_00a4e610(param_1,param_2 + 0x10);
      return uVar1;
    case 0x5a: ;
      uVar1 = F_00a4f2c0(param_1,param_2 + 0x10);
      return uVar1;
    case 0x5b: ;
      uVar1 = F_00a4f310(param_1,param_2 + 0x10);
      return uVar1;
    case 0x5c: ;
      uVar1 = F_00a4f330(param_1,param_2 + 0x10);
      return uVar1;
    case 0x5d: ;
      uVar1 = F_00a4f5a0(param_1,param_2 + 0x10);
      return uVar1;
    case 0x5e: ;
      uVar1 = F_00a4f470(param_1,param_2 + 0x10);
      return uVar1;
    case 0x5f: ;
      uVar1 = F_00a4f5b0(param_1,param_2 + 0x10);
      return uVar1;
    case 0x60: ;
      uVar1 = F_00a4f5d0(param_1,param_2 + 0x10);
      return uVar1;
    case 0x61: ;
      uVar1 = F_00a4ea80(param_1,param_2 + 0x10);
      return uVar1;
    case 0x62: ;
      uVar1 = F_00a4f5f0(param_1);
      return uVar1;
    case 99: ;
      uVar1 = F_00a4f2a0(param_1,param_2 + 0x10);
      return uVar1;
    case 100: ;
      uVar1 = F_00a50d10(*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14),
                           *(undefined4 *)(param_2 + 0x18),(uint)*(ushort *)(param_2 + 0x1c),
                           *(undefined4 *)(param_2 + 0x20),param_2 + 0x28,
                           (uint)*(byte *)(param_2 + 0x24));
      return uVar1;
    case 0x65: ;
      uVar1 = F_00a4e0d0(*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x10),
                           *(undefined4 *)(param_2 + 0x14),(uint)*(byte *)(param_2 + 0x1c),
                           *(undefined4 *)(param_2 + 0x20),(uint)*(byte *)(param_2 + 0x1d));
      return uVar1;
    case 0x66: ;
      uVar1 = F_00a4e100(*(undefined4 *)(param_2 + 0x10),(uint)*(byte *)(param_2 + 0x14),
                           *(undefined4 *)(param_2 + 0x18),(uint)*(byte *)(param_2 + 0x15));
      return uVar1;
    case 0x67: ;
      uVar1 = F_00a4e040(*(undefined4 *)(param_2 + 0x10),(uint)*(ushort *)(param_2 + 0x14),
                           param_2 + 0x18,(uint)*(byte *)(param_2 + 0x16));
      return uVar1;
    case 0x68: ;
      uVar1 = F_00a4e070(*(undefined4 *)(param_2 + 0x10),(uint)*(ushort *)(param_2 + 0x14),
                           (uint)*(byte *)(param_2 + 0x16),param_2 + 0x18,
                           (uint)*(byte *)(param_2 + 0x17));
      return uVar1;
    case 0x69: ;
      uVar1 = F_00a54690(param_2 + 0x10,0x1e);
      return uVar1;
    case 0x6a: ;
      uVar1 = F_00a50040((uint)*(byte *)(param_2 + 0x10),param_2 + 0x14,1,1,1);
      return uVar1;
    case 0x6b: ;
      uVar1 = F_00a50160(param_2 + 0x10,200);
      return uVar1;
    case 0x6c: ;
      uVar1 = F_00a501b0((uint)*(ushort *)(param_2 + 0x10),
                           (uint)(*(char *)(param_2 + 0x12) != '\0'),
                           (uint)(*(char *)(param_2 + 0x13) != '\0'));
      return uVar1;
    case 0x6d: ;
      uVar1 = F_00a547d0(param_2 + 0x10,0x10);
      return uVar1;
    case 0x6e: ;
      uVar1 = F_00a50240((uint)*(byte *)(param_2 + 0x10),param_2 + 0x14,1,1);
      return uVar1;
    case 0x6f: ;
      uVar1 = F_00a50330(param_2 + 0x10,200);
      return uVar1;
    case 0x70: ;
      uVar1 = F_00a50380((uint)*(ushort *)(param_2 + 0x10),
                           (uint)(*(char *)(param_2 + 0x12) != '\0'));
      return uVar1;
    case 0x71: ;
      uVar1 = F_00a4e130(*(undefined4 *)(param_2 + 0x10),(uint)*(byte *)(param_2 + 0x14),
                           param_2 + 0x18,(uint)*(byte *)(param_2 + 0x15));
      return uVar1;
    case 0x72: ;
      uVar1 = F_00a50560(param_2 + 0x10,5);
      return uVar1;
    case 0x73: ;
      uVar1 = F_00a39b90(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,param_1,param_2 + 0x10);
      return uVar1;
    case 0x74: ;
      uVar1 = F_00a50210(param_2 + 0x10,0x28);
      return uVar1;
    case 0x75: ;
      uVar1 = F_00a4e0a0(*(undefined4 *)(param_2 + 0x10),(uint)*(ushort *)(param_2 + 0x14),
                           (uint)*(byte *)(param_2 + 0x16),param_2 + 0x17);
      return uVar1;
    case 0x76: ;
      uVar1 = F_00a536c0(param_1,param_2 + 0x10);
      return uVar1;
    case 0x77: ;
      uVar1 = F_00a4e1a0(*(undefined4 *)(param_2 + 0x10),(uint)*(byte *)(param_2 + 0x14),
                           (uint)*(byte *)(param_2 + 0x15),param_2 + 0x16,10);
      return uVar1;
    case 0x78: ;
      uVar1 = F_00a4e1d0(*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14),
                           param_2 + 0x1c,(uint)*(byte *)(param_2 + 0x18));
      return uVar1;
    case 0x79: ;
      uVar1 = F_00a4e160(*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x18),
                           *(undefined4 *)(param_2 + 0x1c),(uint)*(byte *)(param_2 + 0x20),
                           *(undefined4 *)(param_2 + 0x24),*(undefined4 *)(param_2 + 0x28),
                           *(undefined4 *)(param_2 + 0x2c),param_2 + 0x34,
                           (uint)*(byte *)(param_2 + 0x30));
      return uVar1;
    case 0x7a: ;
      uVar1 = F_00a4e200(*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x18),
                           *(undefined4 *)(param_2 + 0x1c),(uint)*(byte *)(param_2 + 0x20),
                           *(undefined4 *)(param_2 + 0x24),(uint)*(byte *)(param_2 + 0x28));
      return uVar1;
    case 0x7b: ;
      uVar1 = F_00a4e230(param_2 + 0x14,param_2 + 0x1c,param_2 + 0x24,
                           (uint)*(byte *)(param_2 + 0x10));
      return uVar1;
    case 0x7c: ;
      uVar1 = F_00a4e230(param_2 + 0x14,param_2 + 0x24,param_2 + 0x34,
                           (uint)*(byte *)(param_2 + 0x10));
      return uVar1;
    case 0x7d: ;
      uVar1 = F_00a4e230(param_2 + 0x14,param_2 + 0x34,param_2 + 0x54,
                           (uint)*(byte *)(param_2 + 0x10));
      return uVar1;
    case 0x7e: ;
      uVar1 = F_00a4e230(param_2 + 0x14,param_2 + 0x54,param_2 + 0x94,
                           (uint)*(byte *)(param_2 + 0x10));
      return uVar1;
    case 0x7f: ;
      uVar1 = F_00a4e230(param_2 + 0x14,param_2 + 0x94,param_2 + 0x114,
                           (uint)*(byte *)(param_2 + 0x10));
      return uVar1;
    case 0x80: ;
      uVar1 = F_00a4e230(param_2 + 0x14,param_2 + 0x114,param_2 + 0x214,
                           (uint)*(byte *)(param_2 + 0x10));
      return uVar1;
    case 0x81: ;
      uVar1 = F_00a4e230(param_2 + 0x14,param_2 + 0x214,param_2 + 0x414,
                           (uint)*(byte *)(param_2 + 0x10));
      return uVar1;
    case 0x82: ;
      uVar1 = F_00a4f640((uint)*(byte *)(param_2 + 0x10));
      return uVar1;
    case 0x83: ;
      uVar1 = F_00a4f680(param_1,param_2 + 0x10);
      return uVar1;
    case 0x84: ;
      uVar1 = F_00a4f660(param_1,param_2 + 0x10);
      return uVar1;
    case 0x85: ;
      *(undefined4 *)(REFG(undefined4, 0x137104c) + 0x1228) = *(undefined4 *)(param_2 + 0x10);
      uVar1 = REFG(undefined4, 0x137104c);
      *(undefined4 *)(REFG(undefined4, 0x137104c) + 0x122c) = *(undefined4 *)(param_2 + 0x14);
      return uVar1;
    case 0x86: ;
      uVar1 = F_00a4f7a0(param_2 + 0x10);
      return uVar1;
    case 0x87: ;
      uVar1 = F_00a536f0(param_1,(uint)*(ushort *)(param_2 + 0x10),param_2 + 0x14,
                           (uint)*(byte *)(param_2 + 0x12));
      return uVar1;
    case 0x88: ;
      uVar1 = F_00a50d60(*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x18),
                           *(undefined4 *)(param_2 + 0x1c),param_2 + 0x20,0x1e);
      return uVar1;
    case 0x89: ;
      uVar1 = F_00a50fd0(*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x18),
                           *(undefined4 *)(param_2 + 0x1c),param_2 + 0x20,0x10);
      return uVar1;
    case 0x8a: ;
      uVar1 = F_00a53740(*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x18),
                           *(undefined4 *)(param_2 + 0x1c),param_2 + 0x20,0x10);
      return uVar1;
    case 0x8b: ;
      uVar1 = F_00a548d0(param_1,param_2 + 0x10);
      return uVar1;
    case 0x8c: ;
      uVar1 = F_00a4f7c0(param_2 + 0x10);
      return uVar1;
    case 0x8d: ;
      uVar1 = F_00a4f7f0(param_2 + 0x10);
      return uVar1;
    case 0x8e: ;
      uVar1 = F_00a4e250(*(undefined4 *)(param_2 + 0x10),param_2 + 0x14);
      return uVar1;
    case 0x8f: ;
      uVar1 = F_00a4f820(param_2 + 0x10);
      return uVar1;
    case 0x90: ;
      uVar1 = F_00a4e270(*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14));
      return uVar1;
    case 0x91: ;
      uVar1 = F_00a4e290(*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x18),
                           *(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x20),
                           *(undefined4 *)(param_2 + 0x24));
      return uVar1;
    case 0x92: ;
      piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
      uVar1 = 0;
      if (piVar2 != (int *)0x0) {
        uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x7c))(piVar2 GEN_EDX_ARG,7,0,param_2);
        return uVar1;
      }
      break;
    case 0x93: ;
      piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
      uVar1 = 0;
      if (piVar2 != (int *)0x0) {
        uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x7c))(piVar2 GEN_EDX_ARG,4,0,param_2);
        return uVar1;
      }
      break;
    case 0x94: ;
      uVar1 = F_00a4e2c0((uint)*(ushort *)(param_2 + 0x10),param_2 + 0x12);
      return uVar1;
    case 0x95: ;
      uVar1 = F_00a4e2e0(param_2 + 0x10);
      return uVar1;
    case 0x96: ;
      uVar1 = F_00ba26d0(param_2 + 0x10);
      return uVar1;
    case 0x97: ;
      uVar1 = F_00a4f840(param_2 + 0x10);
      return uVar1;
    case 0x98: ;
      uVar1 = F_00a4f860(param_2 + 0x10);
      return uVar1;
    case 0x99: ;
      uVar1 = F_00ba2990(param_2 + 0x10);
      return uVar1;
    case 0x9a: ;
      uVar1 = F_00a4e300(param_2 + 0x10);
      return uVar1;
    case 0x9b: ;
      uVar1 = F_00a4e320(param_2 + 0x10);
      return uVar1;
    case 0x9c: ;
      uVar1 = F_00ba2b40(param_2 + 0x10);
      return uVar1;
    case 0x9d: ;
      uVar1 = F_00a503e0(param_2 + 0x10,0x1c,param_2 + 0x2c,0x12,param_2 + 0x3e,10,param_2 + 0x48,
                           6,param_2 + 0x4e,2);
      return uVar1;
    case 0x9e: ;
      uVar1 = F_00a504a0(param_2 + 0x10,0x1c,param_2 + 0x2c,0x12,param_2 + 0x3e,10,param_2 + 0x48,
                           6,param_2 + 0x4e,2);
      return uVar1;
    case 0x9f: ;
      uVar1 = F_00ba2a00(param_2 + 0x10);
      return uVar1;
    case 0xa0: ;
      uVar1 = F_00a4f880(param_2 + 0x10);
      return uVar1;
    case 0xa1: ;
      uVar1 = F_00ba2930(param_2 + 0x10);
      return uVar1;
    case 0xa2: ;
      piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
      uVar1 = 0;
      if (piVar2 != (int *)0x0) {
        uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x7c))(piVar2 GEN_EDX_ARG,8,0,param_2);
        return uVar1;
      }
      break;
    case 0xa3: ;
      uVar1 = F_00a4f610(param_1,(uint)*(ushort *)(param_2 + 0x10));
      return uVar1;
    case 0xa4: ;
      uVar1 = F_00a4f8a0(param_2 + 0x10);
      return uVar1;
    case 0xa5: ;
      uVar1 = F_00a39eb0(param_1,param_2 + 0x10);
      return uVar1;
    case 0xa6: ;
      iVar3 = param_2 + 0x10;
      F_00b070f0();
      uVar1 = F_00b0b4a0(iVar3);
    }
  }
  return uVar1;
}

/* ref: FUN_00ba6660 */
GEN_FRAME uint GEN_THISCALL F_00ba6660(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xba6660u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return param_1;
}

/* ref: Client::Network::Protocol::Chat::PacketReceiverCallbackInterface::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ba6690(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xba6690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1104450));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00ba66c0 */
GEN_NOFRAME uint GEN_THISCALL F_00ba66c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xba66c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00ba66d0((undefined *)((int)this - 4) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: Client::Network::PacketDispatcher::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ba66d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xba66d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[2])REFP(0x1104450));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e5cc4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00ba6710 */
GEN_NOFRAME uint GEN_THISCALL F_00ba6710(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xba6710u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *(undefined2 *)(in_ecx + 4) = 0;
  *in_ecx = 0;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00ba6730 */
GEN_NOFRAME unsigned int F_00ba6730(void)
{
  GEN_ENTER(0xba6730u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00ba6740 */
GEN_FRAME uint GEN_THISCALL F_00ba6740(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xba6740u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  ushort uVar1;
  ulong uVar2;
  char * pcVar3;
  
  (*(uint *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  uVar2 = gen_imp_inet_addr((*(char * PTR32 *)&gen_args[1]));
  if (uVar2 != 0xffffffff) {
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x1c)) + 0)) = 2;
    (*(uint *)(gen_frame + 0x1c)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x1c)) + 2)),2);
    uVar1 = gen_imp_htons((ushort)(*(undefined4 *)&gen_args[2]));
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x1c)) + 2)) = uVar1;
    (*(uint *)(gen_frame + 0x1c)) = CONCAT22(uVar1,(undefined2)(*(uint *)(gen_frame + 0x1c)));
    *(uint *)(*(undefined * PTR32 *)&gen_args[0]) = (*(uint *)(gen_frame + 0x1c));
    *((ulong *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = uVar2;
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0;
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = 0;
    *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = 0;
    return (*(uint *)(gen_frame + 0x1c));
  }
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(uint *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 2;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  pcVar3 = ((char *)GEN_TOP(gen_imp_getaddrinfo((*(char * PTR32 *)&gen_args[1]),0,&(*(undefined4 *)(gen_frame + 0xc)),&(*(char * PTR32 *)&gen_args[1]))));
  if (((pcVar3 == (char *)0x0) && (pcVar3 = (*(char * PTR32 *)&gen_args[1]), (*(char * PTR32 *)&gen_args[1]) != (char *)0x0)) &&
     (*((int *)GEN_TOP(((*(char * PTR32 *)&gen_args[1]) + 0x18))) != 0)) {
    uVar1 = gen_imp_htons((ushort)(*(undefined4 *)&gen_args[2]));
    pcVar3 = (*(char * PTR32 *)&gen_args[1]);
    *((ushort *)GEN_TOP((*((int *)GEN_TOP(((*(char * PTR32 *)&gen_args[1]) + 0x18))) + 2))) = uVar1;
    F_00c46aa0((*(undefined * PTR32 *)&gen_args[0]),*((undefined4 *)GEN_TOP(((*(char * PTR32 *)&gen_args[1]) + 0x18))),*((undefined4 *)GEN_TOP(((*(char * PTR32 *)&gen_args[1]) + 0x10))));
    pcVar3 = ((char *)GEN_TOP(gen_imp_freeaddrinfo(pcVar3)));
  }
  *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = 0;
  return (uint)pcVar3;
}

/* ref: FUN_00ba6820 */
GEN_FRAME uint GEN_THISCALL F_00ba6820(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xba6820u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  uVar1 = param_1[3];
  *(uint *)((int)this + 0xc) = uVar1;
  *(undefined2 *)((int)this + 0x10) = (undefined2)param_2;
  return uVar1;
}

/* ref: FUN_00ba6850 */
GEN_FRAME uint GEN_THISCALL F_00ba6850(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xba6850u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = param_2;
  if (0x10 < param_2) {
    iVar1 = 0x10;
  }
  uVar2 = F_00c46aa0(this,param_1,iVar1);
  *(undefined2 *)((int)this + 0x10) = (undefined2)param_3;
  return (uint)uVar2;
}

/* ref: FUN_00ba6880 */
GEN_FRAME uint GEN_THISCALL F_00ba6880(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xba6880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined2 uVar1;
  
  uVar1 = *(undefined2 *)(param_1 + 4);
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined2 *)((int)this + 0x10) = uVar1;
  return (uint)this;
}

/* ref: FUN_00ba68b0 */
GEN_FRAME uint GEN_THISCALL F_00ba68b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xba68b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined2 *)((int)this + 0x10) = 0;
  return (uint)this;
}

/* ref: FUN_00ba68e0 */
GEN_FRAME byte GEN_THISCALL F_00ba68e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xba68e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (((*(short *)((int)this + 2) == *(short *)(param_1 + 2)) &&
      (*(int *)((int)this + 4) == *(int *)(param_1 + 4))) &&
     ((*(short *)((int)this + 0x10) == 0 ||
      (*(short *)((int)this + 0x10) == *(short *)(param_1 + 0x10))))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ba6930 */
GEN_NOFRAME ulonglong GEN_THISCALL F_00ba6930(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xba6930u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  return CONCAT44((int)((uint)*(ushort *)((int)this + 2) << 0x10) >> 0x1f | *(uint *)((int)this + 4)
                  ,CONCAT22(*(ushort *)((int)this + 2),*(undefined2 *)((int)this + 0x10)));
}

/* ref: FUN_00ba6970 */
GEN_NOFRAME uint GEN_THISCALL F_00ba6970(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xba6970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * pcVar1;
  
  pcVar1 = gen_imp_inet_ntoa((undefined4)(*(undefined (*)[4])((char *)(((int)this + 4)))));
  F_00c4d9ef((int)this + 0x12U,0x2e,pcVar1,0x10);
  *(undefined1 *)((int)this + 0x21) = 0;
  return (int)this + 0x12U;
}

/* ref: Client::Network::Socket::RUDPSocket::vf13 */
GEN_NOFRAME uint GEN_THISCALL F_00ba6a10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xba6a10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)(in_ecx + 0x7c);
  if (iVar1 == 0) {
    return 0x2736;
  }
  if (iVar1 != 1) {
    if (iVar1 != 5) {
      return 0x1000;
    }
    return 0;
  }
  return 0x2726;
}

/* ref: Client::Network::Socket::RUDPSocket::vf12 */
GEN_FRAME uint GEN_THISCALL F_00ba6a40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xba6a40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined2 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x7c);
  if (iVar2 == 0) {
    return 0x2736;
  }
  if (iVar2 != 1) {
    if (iVar2 != 5) {
      return 0x1000;
    }
    uVar1 = *(undefined2 *)(this + 0x94);
    *param_1 = *(undefined4 *)(this + 0x84);
    param_1[1] = *(undefined4 *)(this + 0x88);
    param_1[2] = *(undefined4 *)(this + 0x8c);
    param_1[3] = *(undefined4 *)(this + 0x90);
    *(undefined2 *)(param_1 + 4) = uVar1;
    return 0;
  }
  return 0x2749;
}

/* ref: FUN_00ba6ab0 */
GEN_FRAME uint F_00ba6ab0(unsigned int gen_a0)
{
  GEN_ENTER(0xba6ab0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    return 0x1104480;
  case 1: ;
    return 0x110448c;
  case 2: ;
    return 0x110449c;
  case 3: ;
    return 0x11044ac;
  case 4: ;
    return 0x11044c0;
  case 5: ;
    return 0x11044d4;
  case 6: ;
    return 0x11044e8;
  case 7: ;
    return 0x11044fc;
  case 8: ;
    return 0x1104510;
  case 9: ;
    return 0x1104524;
  case 10: ;
    return 0x1104534;
  case 0xb: ;
    return 0x1104544;
  case 0xc: ;
    return 0x1104554;
  case 0xd: ;
    return 0x1104564;
  default: ;
    return 0x110448b;
  }
}

/* ref: FUN_00ba6b70 */
GEN_FRAME uint GEN_STDCALL F_00ba6b70(unsigned int gen_a0)
{
  GEN_ENTER(0xba6b70u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return (byte)param_1 & 0x8000003f;
}

/* ref: FUN_00ba6bc0 */
GEN_FRAME uint F_00ba6bc0(unsigned int gen_a0)
{
  GEN_ENTER(0xba6bc0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    return 0x1104570;
  case 1: ;
    return 0x1104574;
  case 2: ;
    return 0x1104588;
  case 3: ;
    return 0x1104584;
  case 4: ;
    return 0x110457c;
  case 5: ;
    return 0x110458c;
  default: ;
    return 0;
  }
}

/* ref: Client::Network::Socket::RUDPSocket::vf6 */
GEN_NOFRAME uint F_00ba6c20(void)
{
  GEN_ENTER(0xba6c20u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Network::Socket::RUDPSocket::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00ba6c30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xba6c30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(in_ecx + 0xc4) = 1;
  return 0;
}

/* ref: Client::Network::Socket::RUDPSocket::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_00ba6c40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xba6c40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  switch((unsigned int)(uintptr_t)(*(undefined4 *)(in_ecx + 0x7c))) {
  default: ;
    return 0;
  case 1: ;
    return 1;
  case 2: ;
  case 3: ;
  case 4: ;
    return 3;
  case 5: ;
  case 6: ;
  case 7: ;
  case 8: ;
  case 9: ;
  case 10: ;
  case 0xb: ;
  case 0xd: ;
    return 4;
  case 0xc: ;
    return 7;
  }
}

/* ref: FUN_00ba6cc0 */
GEN_FRAME uint GEN_THISCALL F_00ba6cc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xba6cc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  int iVar3;
  __time64_t _Var4;
  uint local_8;
  
  local_8 = 0;
  _Var4 = F_00c4b7c2((__time64_t *)0x0);
  if (((*(int *)((int)this + 0x58) != 0 || *(int *)((int)this + 0x5c) != 0) &&
      ((longlong)*(int *)((int)this + 0x2c) <= _Var4 - *(longlong *)((int)this + 0x58))) &&
     (*(int *)((int)this + 0xd0) != 0)) {
    if ((code *)*(gen_code32 *)((int)this + 0x24) != (code *)0x0) {
      ((code *)*(gen_code32 *)((int)this + 0x24))(*(int *)((int)this + 0xd0));
    }
    local_8 = 1;
  }
  uVar1 = *(uint *)((int)this + 0x30);
  if ((uVar1 & (int)uVar1 >> 0x1f) != 0xffffffff) {
    uVar2 = *(uint *)((int)this + 0x60);
    iVar3 = *(int *)((int)this + 100);
    if ((uVar2 != 0 || iVar3 != 0) ||
       (*(int *)((int)this + 0x68) != 0 || *(int *)((int)this + 0x6c) != 0)) {
      if ((iVar3 < *(int *)((int)this + 0x6c)) ||
         ((iVar3 <= *(int *)((int)this + 0x6c) && (uVar2 <= *(uint *)((int)this + 0x68))))) {
        iVar3 = *(int *)((int)this + 0x6c);
        uVar2 = *(uint *)((int)this + 0x68);
      }
      if (((longlong)(int)uVar1 <= _Var4 - (longlong)CONCAT44(iVar3,uVar2)) &&
         (*(int *)((int)this + 0xd0) != 0)) {
        if ((code *)*(gen_code32 *)((int)this + 0x28) != (code *)0x0) {
          ((code *)*(gen_code32 *)((int)this + 0x28))(*(int *)((int)this + 0xd0));
        }
        return 1;
      }
    }
  }
  return local_8;
}

/* ref: FUN_00ba6da0 */
GEN_FRAME uint GEN_THISCALL F_00ba6da0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xba6da0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)((int)this + 0x60) = param_1;
  *(undefined4 *)((int)this + 100) = param_2;
  *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + 1;
  *(int *)((int)this + 0x40) = *(int *)((int)this + 0x40) + param_3;
  *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + param_3;
  *(uint *)((int)this + 0x54) = param_3;
  return param_3;
}

/* ref: FUN_00ba6dd0 */
GEN_FRAME uint GEN_THISCALL F_00ba6dd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xba6dd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)((int)this + 0x68) = param_1;
  *(undefined4 *)((int)this + 0x6c) = param_2;
  *(int *)((int)this + 0x3c) = *(int *)((int)this + 0x3c) + 1;
  *(int *)((int)this + 0x44) = *(int *)((int)this + 0x44) + param_3;
  *(int *)((int)this + 0x48) = *(int *)((int)this + 0x48) + param_3;
  *(uint *)((int)this + 0x50) = param_3;
  return param_3;
}

/* ref: FUN_00ba6e30 */
GEN_NOFRAME uint GEN_THISCALL F_00ba6e30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xba6e30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x20);
}

/* ref: FUN_00ba6e40 */
GEN_FRAME uint F_00ba6e40(unsigned int gen_a0)
{
  GEN_ENTER(0xba6e40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  *(uint *)&REFG(undefined, 0x13416b0) = param_1;
  return param_1;
}

/* ref: FUN_00ba6e60 */
GEN_FRAME uint F_00ba6e60(unsigned int gen_a0)
{
  GEN_ENTER(0xba6e60u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0x271e: ;
    return 0x11045f4;
  default: ;
    return 0x1104630;
  case 0x2726: ;
    return 0x1104608;
  case 0x2736: ;
    return 0x11045e0;
  case 0x2749: ;
    return 0x110461c;
  case 0x274c: ;
    return 0x11045cc;
  case 0x274d: ;
    return 0x11045b4;
  }
}

/* ref: FUN_00ba6f10 */
GEN_FRAME uint F_00ba6f10(unsigned int gen_a0)
{
  GEN_ENTER(0xba6f10u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0x271e: ;
    return 0x11045f4;
  default: ;
    return 0x1104630;
  case 0x2726: ;
    return 0x1104608;
  case 0x2736: ;
    return 0x11045e0;
  case 0x2749: ;
    return 0x110461c;
  case 0x274c: ;
    return 0x11045cc;
  case 0x274d: ;
    return 0x11045b4;
  }
}

/* ref: FUN_00ba6fb0 */
GEN_FRAME uint GEN_THISCALL F_00ba6fb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xba6fb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulong param_1 = (ulong)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  ushort uVar1;
  ulong uVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(undefined2 *)(gen_frame + 0x8)) = 2;
  uVar2 = gen_imp_htonl(param_1);
  (*(ulong *)(gen_frame + 0xc)) = uVar2;
  uVar1 = gen_imp_htons((ushort)param_2);
  (*(ushort *)(gen_frame + 0xa)) = uVar1;
  uVar3 = F_00c07c40(this GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0x8)),0x10);
  if (uVar3 == 0xffffffff) {
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_ARG);
    uVar3 = 0xffffffff;
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_00ba7020 */
GEN_FRAME uint GEN_THISCALL F_00ba7020(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xba7020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0x4)) = 0x10;
  uVar1 = F_00c07e60(this GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x4)));
  if (uVar1 == 0) {
    *param_1 = (*(undefined4 *)(gen_frame + 0x8));
    param_1[1] = (*(undefined4 *)(gen_frame + 0xc));
    param_1[2] = (*(undefined4 *)(gen_frame + 0x10));
    param_1[3] = (*(undefined4 *)(gen_frame + 0x14));
    *(undefined2 *)(param_1 + 4) = 0;
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00ba7080 */
GEN_FRAME uint GEN_THISCALL F_00ba7080(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xba7080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0x4)) = 0x10;
  uVar1 = F_00c07eb0(this GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x4)));
  if (uVar1 == 0) {
    *param_1 = (*(undefined4 *)(gen_frame + 0x8));
    param_1[1] = (*(undefined4 *)(gen_frame + 0xc));
    param_1[2] = (*(undefined4 *)(gen_frame + 0x10));
    param_1[3] = (*(undefined4 *)(gen_frame + 0x14));
    *(undefined2 *)(param_1 + 4) = 0;
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00ba7100 */
GEN_NOFRAME uint GEN_THISCALL F_00ba7100(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xba7100u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  return (uint)in_ecx;
}

