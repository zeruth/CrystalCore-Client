#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00d68370 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d68370(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd68370u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  undefined4 * puVar1;
  code * pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int * piVar8;
  uint uVar9;
  undefined4 * puVar10;
  int * piVar11;
  undefined2 * puVar12;
  int iVar13;
  
  piVar8 = (*(int * PTR32 *)&gen_args[0]);
  uVar9 = *((uint *)GEN_TOP(((int)this + 8)));
  piVar11 = (*(int * PTR32 *)&gen_args[1]);
  if ((int)(uVar9 & 0x3fffffff) < (*(int * PTR32 *)&gen_args[1])[1]) {
    if (-1 < (int)uVar9) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x10))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_FWD,*(undefined4 *)this,uVar9 << 6);
    }
    pcVar2 = *((gen_code32 *)GEN_TOP((*piVar8 + 0xc)));
    (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(((*(int * PTR32 *)&gen_args[1])[1] << 6)));
    uVar9 = (*pcVar2)(piVar8,&(*(int * PTR32 *)&gen_args[0]));
    *(uint *)this = uVar9;
    *((int *)GEN_TOP(((int)this + 8))) = (int)((int)(*(int * PTR32 *)&gen_args[0]) + ((int)(*(int * PTR32 *)&gen_args[0]) >> 0x1f & 0x3fU)) >> 6;
    piVar11 = (*(int * PTR32 *)&gen_args[1]);
  }
  iVar13 = piVar11[1];
  iVar3 = *(int *)this;
  *((int *)GEN_TOP(((int)this + 4))) = iVar13;
  iVar4 = *piVar11;
  if (0 < iVar13) {
    puVar12 = ((undefined2 *)GEN_TOP((iVar4 + 2)));
    puVar10 = ((undefined4 *)GEN_TOP((iVar3 + 0x20)));
    do {
      *(undefined2 *)(puVar10 - 8) = puVar12[-1];
      *((undefined2 *)GEN_TOP(((int)puVar10 - 0x1e))) = *puVar12;
      uVar5 = *(undefined4 *)(puVar12 + 9);
      uVar6 = *(undefined4 *)(puVar12 + 0xb);
      uVar7 = *(undefined4 *)(puVar12 + 0xd);
      puVar10[-4] = *(undefined4 *)(puVar12 + 7);
      puVar10[-3] = uVar5;
      puVar10[-2] = uVar6;
      puVar10[-1] = uVar7;
      puVar1 = ((undefined4 *)GEN_TOP(((iVar4 - iVar3) + (int)puVar10)));
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      *puVar10 = *puVar1;
      puVar10[1] = uVar5;
      puVar10[2] = uVar6;
      puVar10[3] = uVar7;
      uVar5 = *(undefined4 *)(puVar12 + 0x19);
      uVar6 = *(undefined4 *)(puVar12 + 0x1b);
      uVar7 = *(undefined4 *)(puVar12 + 0x1d);
      puVar10[4] = *(undefined4 *)(puVar12 + 0x17);
      puVar10[5] = uVar5;
      puVar10[6] = uVar6;
      puVar10[7] = uVar7;
      puVar12 = puVar12 + 0x20;
      puVar10 = puVar10 + 0x10;
      iVar13 = iVar13 - 1;
    } while (iVar13 != 0);
    return (uint)this;
  }
  return (uint)this;
}

/* ref: FUN_00d68440 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d68440(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd68440u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  undefined4 * puVar1;
  code * pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int * piVar8;
  uint uVar9;
  undefined4 * puVar10;
  int * piVar11;
  undefined4 * puVar12;
  
  piVar8 = (*(int * PTR32 *)&gen_args[0]);
  uVar9 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  piVar11 = (*(int * PTR32 *)&gen_args[1]);
  if ((int)uVar9 < (*(int * PTR32 *)&gen_args[1])[1]) {
    if (-1 < (int)*((uint *)GEN_TOP(((int)this + 8)))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x10))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_FWD,*(undefined4 *)this,uVar9 * 0x70);
    }
    (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(((*(int * PTR32 *)&gen_args[1])[1] * 0x70)));
    pcVar2 = *((gen_code32 *)GEN_TOP((*piVar8 + 0xc)));
    uVar9 = (*pcVar2)(piVar8,&(*(int * PTR32 *)&gen_args[0]));
    *(uint *)this = uVar9;
    *((int *)GEN_TOP(((int)this + 8))) = (int)(*(int * PTR32 *)&gen_args[0]) / 0x70;
    piVar11 = (*(int * PTR32 *)&gen_args[1]);
  }
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(piVar11[1]));
  iVar3 = *(int *)this;
  *((int * PTR32 *)GEN_TOP(((int)this + 4))) = (*(int * PTR32 *)&gen_args[1]);
  iVar4 = *piVar11;
  if (0 < (int)(*(int * PTR32 *)&gen_args[1])) {
    puVar12 = ((undefined4 *)GEN_TOP((iVar4 + 0x50)));
    puVar10 = ((undefined4 *)GEN_TOP((iVar3 + 0x20)));
    do {
      *(undefined2 *)(puVar10 - 8) = *(undefined2 *)(puVar12 - 0x14);
      *((undefined2 *)GEN_TOP(((int)puVar10 - 0x1e))) = *((undefined2 *)GEN_TOP(((int)puVar12 - 0x4e)));
      *(undefined2 *)(puVar10 - 7) = *(undefined2 *)(puVar12 - 0x13);
      *((undefined2 *)GEN_TOP(((int)puVar10 - 0x1a))) = *((undefined2 *)GEN_TOP(((int)puVar12 - 0x4a)));
      uVar5 = puVar12[-0xf];
      uVar6 = puVar12[-0xe];
      uVar7 = puVar12[-0xd];
      puVar10[-4] = puVar12[-0x10];
      puVar10[-3] = uVar5;
      puVar10[-2] = uVar6;
      puVar10[-1] = uVar7;
      puVar1 = ((undefined4 *)GEN_TOP(((iVar4 - iVar3) + (int)puVar10)));
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      *puVar10 = *puVar1;
      puVar10[1] = uVar5;
      puVar10[2] = uVar6;
      puVar10[3] = uVar7;
      uVar5 = puVar12[-7];
      uVar6 = puVar12[-6];
      uVar7 = puVar12[-5];
      puVar10[4] = puVar12[-8];
      puVar10[5] = uVar5;
      puVar10[6] = uVar6;
      puVar10[7] = uVar7;
      uVar5 = puVar12[-3];
      uVar6 = puVar12[-2];
      uVar7 = puVar12[-1];
      puVar10[8] = puVar12[-4];
      puVar10[9] = uVar5;
      puVar10[10] = uVar6;
      puVar10[0xb] = uVar7;
      uVar5 = puVar12[1];
      uVar6 = puVar12[2];
      uVar7 = puVar12[3];
      puVar10[0xc] = *puVar12;
      puVar10[0xd] = uVar5;
      puVar10[0xe] = uVar6;
      puVar10[0xf] = uVar7;
      uVar5 = puVar12[5];
      uVar6 = puVar12[6];
      uVar7 = puVar12[7];
      puVar10[0x10] = puVar12[4];
      puVar10[0x11] = uVar5;
      puVar10[0x12] = uVar6;
      puVar10[0x13] = uVar7;
      puVar12 = puVar12 + 0x1c;
      puVar10 = puVar10 + 0x1c;
      (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) - 1)));
    } while ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(0x0)));
  }
  return (uint)this;
}

/* ref: FUN_00d68530 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d68530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd68530u, gen_a0, gen_a1, 0u, 0u);
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
    uVar2 = param_1 * 4 + 0x7f & 0xffffff80;
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

/* ref: FUN_00d685a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d685a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd685a0u, gen_a0, 0u, 0u, 0u);
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
  uVar3 = iVar2 * 4 + 0x7fU & 0xffffff80;
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
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar3 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar3;
}

/* ref: FUN_00d68630 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d68630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd68630u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 * puVar8;
  undefined2 * puVar9;
  int iVar10;
  
  uVar7 = *((uint *)GEN_TOP(((int)this + 8)));
  if ((int)(uVar7 & 0x3fffffff) < param_1[1]) {
    if (-1 < (int)uVar7) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar7 << 6);
    }
    (*(int *)(gen_frame + 0x0)) = param_1[1] << 6;
    uVar7 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x0)));
    *(uint *)this = uVar7;
    *((int *)GEN_TOP(((int)this + 8))) = (int)((*(int *)(gen_frame + 0x0)) + ((*(int *)(gen_frame + 0x0)) >> 0x1f & 0x3fU)) >> 6;
  }
  iVar10 = param_1[1];
  iVar2 = *(int *)this;
  *((int *)GEN_TOP(((int)this + 4))) = iVar10;
  iVar3 = *param_1;
  if (0 < iVar10) {
    puVar9 = ((undefined2 *)GEN_TOP((iVar3 + 2)));
    puVar8 = ((undefined4 *)GEN_TOP((iVar2 + 0x20)));
    do {
      *(undefined2 *)(puVar8 - 8) = puVar9[-1];
      *((undefined2 *)GEN_TOP(((int)puVar8 - 0x1e))) = *puVar9;
      uVar4 = *(undefined4 *)(puVar9 + 9);
      uVar5 = *(undefined4 *)(puVar9 + 0xb);
      uVar6 = *(undefined4 *)(puVar9 + 0xd);
      puVar8[-4] = *(undefined4 *)(puVar9 + 7);
      puVar8[-3] = uVar4;
      puVar8[-2] = uVar5;
      puVar8[-1] = uVar6;
      puVar1 = ((undefined4 *)GEN_TOP(((iVar3 - iVar2) + (int)puVar8)));
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      *puVar8 = *puVar1;
      puVar8[1] = uVar4;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
      uVar4 = *(undefined4 *)(puVar9 + 0x19);
      uVar5 = *(undefined4 *)(puVar9 + 0x1b);
      uVar6 = *(undefined4 *)(puVar9 + 0x1d);
      puVar8[4] = *(undefined4 *)(puVar9 + 0x17);
      puVar8[5] = uVar4;
      puVar8[6] = uVar5;
      puVar8[7] = uVar6;
      puVar9 = puVar9 + 0x20;
      puVar8 = puVar8 + 0x10;
      iVar10 = iVar10 - 1;
    } while (iVar10 != 0);
    return (uint)this;
  }
  return (uint)this;
}

/* ref: FUN_00d68710 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d68710(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd68710u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 * puVar9;
  undefined4 * puVar10;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar8 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar8 < param_1[1]) {
    if (-1 < (int)*((uint *)GEN_TOP(((int)this + 8)))) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar8 * 0x70);
    }
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP((param_1[1] * 0x70)));
    uVar8 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined * PTR32 *)(gen_frame + 0x0)));
    *(uint *)this = uVar8;
    *((int *)GEN_TOP(((int)this + 8))) = (int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x0))) / 0x70;
  }
  iVar2 = param_1[1];
  iVar3 = *(int *)this;
  *((int *)GEN_TOP(((int)this + 4))) = iVar2;
  iVar4 = *param_1;
  if (0 < iVar2) {
    puVar10 = ((undefined4 *)GEN_TOP((iVar4 + 0x50)));
    puVar9 = ((undefined4 *)GEN_TOP((iVar3 + 0x20)));
    param_1 = ((int *)GEN_TOP(iVar2));
    do {
      *(undefined2 *)(puVar9 - 8) = *(undefined2 *)(puVar10 - 0x14);
      *((undefined2 *)GEN_TOP(((int)puVar9 - 0x1e))) = *((undefined2 *)GEN_TOP(((int)puVar10 - 0x4e)));
      *(undefined2 *)(puVar9 - 7) = *(undefined2 *)(puVar10 - 0x13);
      *((undefined2 *)GEN_TOP(((int)puVar9 - 0x1a))) = *((undefined2 *)GEN_TOP(((int)puVar10 - 0x4a)));
      uVar5 = puVar10[-0xf];
      uVar6 = puVar10[-0xe];
      uVar7 = puVar10[-0xd];
      puVar9[-4] = puVar10[-0x10];
      puVar9[-3] = uVar5;
      puVar9[-2] = uVar6;
      puVar9[-1] = uVar7;
      puVar1 = ((undefined4 *)GEN_TOP(((iVar4 - iVar3) + (int)puVar9)));
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      *puVar9 = *puVar1;
      puVar9[1] = uVar5;
      puVar9[2] = uVar6;
      puVar9[3] = uVar7;
      uVar5 = puVar10[-7];
      uVar6 = puVar10[-6];
      uVar7 = puVar10[-5];
      puVar9[4] = puVar10[-8];
      puVar9[5] = uVar5;
      puVar9[6] = uVar6;
      puVar9[7] = uVar7;
      uVar5 = puVar10[-3];
      uVar6 = puVar10[-2];
      uVar7 = puVar10[-1];
      puVar9[8] = puVar10[-4];
      puVar9[9] = uVar5;
      puVar9[10] = uVar6;
      puVar9[0xb] = uVar7;
      uVar5 = puVar10[1];
      uVar6 = puVar10[2];
      uVar7 = puVar10[3];
      puVar9[0xc] = *puVar10;
      puVar9[0xd] = uVar5;
      puVar9[0xe] = uVar6;
      puVar9[0xf] = uVar7;
      uVar5 = puVar10[5];
      uVar6 = puVar10[6];
      uVar7 = puVar10[7];
      puVar9[0x10] = puVar10[4];
      puVar9[0x11] = uVar5;
      puVar9[0x12] = uVar6;
      puVar9[0x13] = uVar7;
      puVar10 = puVar10 + 0x1c;
      puVar9 = puVar9 + 0x1c;
      param_1 = ((int *)GEN_TOP(((int)param_1 - 1)));
    } while (param_1 != ((int *)GEN_TOP(0x0)));
  }
  return (uint)this;
}

/* ref: FUN_00d68810 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d68810(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd68810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  undefined4 * puVar1;
  code * pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 * puVar6;
  uint uVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  undefined2 * puVar10;
  int iVar11;
  int iVar12;
  
  puVar6 = (*(undefined4 * PTR32 *)&gen_args[0]);
  if (((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0]))) != ((undefined *)GEN_TOP(0x0))) {
    F_00d919e0(((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0]))) GEN_EDX_FWD);
  }
  if (*(undefined * PTR32 *)this != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_ARG);
  }
  *(undefined4 *)this = *puVar6;
  if (((undefined *)GEN_TOP(puVar6[1])) != ((undefined *)GEN_TOP(0x0))) {
    F_00d919e0(((undefined *)GEN_TOP(puVar6[1])) GEN_EDX_ARG);
  }
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = puVar6[1];
  uVar7 = *((uint *)GEN_TOP(((int)this + 0x10)));
  if ((int)(uVar7 & 0x3fffffff) < (int)puVar6[3]) {
    if (-1 < (int)uVar7) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 8))),uVar7 << 6);
    }
    (*(undefined4 * PTR32 *)&gen_args[0]) = ((undefined4 *)GEN_TOP((puVar6[3] << 6)));
    pcVar2 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc)));
    uVar7 = (*pcVar2)(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined4 * PTR32 *)&gen_args[0]));
    *((uint *)GEN_TOP(((int)this + 8))) = uVar7;
    *((int *)GEN_TOP(((int)this + 0x10))) = (int)((int)(*(undefined4 * PTR32 *)&gen_args[0]) + ((int)(*(undefined4 * PTR32 *)&gen_args[0]) >> 0x1f & 0x3fU)) >> 6;
  }
  iVar12 = puVar6[3];
  (*(undefined4 * PTR32 *)&gen_args[0]) = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)));
  *((int *)GEN_TOP(((int)this + 0xc))) = iVar12;
  if (0 < iVar12) {
    puVar10 = ((undefined2 *)GEN_TOP((puVar6[2] + 2)));
    puVar8 = ((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[0]) + 0x20)));
    iVar11 = puVar6[2] - (int)(*(undefined4 * PTR32 *)&gen_args[0]);
    (*(undefined4 * PTR32 *)&gen_args[0]) = ((undefined4 *)GEN_TOP(iVar12));
    do {
      *(undefined2 *)(puVar8 - 8) = puVar10[-1];
      *((undefined2 *)GEN_TOP(((int)puVar8 - 0x1e))) = *puVar10;
      uVar3 = *(undefined4 *)(puVar10 + 9);
      uVar4 = *(undefined4 *)(puVar10 + 0xb);
      uVar5 = *(undefined4 *)(puVar10 + 0xd);
      puVar8[-4] = *(undefined4 *)(puVar10 + 7);
      puVar8[-3] = uVar3;
      puVar8[-2] = uVar4;
      puVar8[-1] = uVar5;
      puVar9 = ((undefined4 *)GEN_TOP((iVar11 + (int)puVar8)));
      uVar3 = puVar9[1];
      uVar4 = puVar9[2];
      uVar5 = puVar9[3];
      *puVar8 = *puVar9;
      puVar8[1] = uVar3;
      puVar8[2] = uVar4;
      puVar8[3] = uVar5;
      uVar3 = *(undefined4 *)(puVar10 + 0x19);
      uVar4 = *(undefined4 *)(puVar10 + 0x1b);
      uVar5 = *(undefined4 *)(puVar10 + 0x1d);
      puVar8[4] = *(undefined4 *)(puVar10 + 0x17);
      puVar8[5] = uVar3;
      puVar8[6] = uVar4;
      puVar8[7] = uVar5;
      puVar10 = puVar10 + 0x20;
      puVar8 = puVar8 + 0x10;
      (*(undefined4 * PTR32 *)&gen_args[0]) = ((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[0]) - 1)));
    } while ((*(undefined4 * PTR32 *)&gen_args[0]) != ((undefined4 *)GEN_TOP(0x0)));
  }
  uVar7 = *((uint *)GEN_TOP(((int)this + 0x1c))) & 0x3fffffff;
  if ((int)uVar7 < (int)puVar6[6]) {
    if (-1 < (int)*((uint *)GEN_TOP(((int)this + 0x1c)))) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x14))),uVar7 * 0x70);
    }
    (*(undefined4 * PTR32 *)&gen_args[0]) = ((undefined4 *)GEN_TOP((puVar6[6] * 0x70)));
    pcVar2 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc)));
    uVar7 = (*pcVar2)(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined4 * PTR32 *)&gen_args[0]));
    *((uint *)GEN_TOP(((int)this + 0x14))) = uVar7;
    *((int *)GEN_TOP(((int)this + 0x1c))) = (int)(*(undefined4 * PTR32 *)&gen_args[0]) / 0x70;
  }
  iVar12 = puVar6[6];
  (*(undefined4 * PTR32 *)&gen_args[0]) = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x14)));
  *((int *)GEN_TOP(((int)this + 0x18))) = iVar12;
  if (0 < iVar12) {
    puVar8 = ((undefined4 *)GEN_TOP((puVar6[5] + 0x50)));
    puVar9 = ((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[0]) + 0x20)));
    iVar11 = puVar6[5] - (int)(*(undefined4 * PTR32 *)&gen_args[0]);
    (*(undefined4 * PTR32 *)&gen_args[0]) = ((undefined4 *)GEN_TOP(iVar12));
    do {
      *(undefined2 *)(puVar9 - 8) = *(undefined2 *)(puVar8 - 0x14);
      *((undefined2 *)GEN_TOP(((int)puVar9 - 0x1e))) = *((undefined2 *)GEN_TOP(((int)puVar8 - 0x4e)));
      *(undefined2 *)(puVar9 - 7) = *(undefined2 *)(puVar8 - 0x13);
      *((undefined2 *)GEN_TOP(((int)puVar9 - 0x1a))) = *((undefined2 *)GEN_TOP(((int)puVar8 - 0x4a)));
      uVar3 = puVar8[-0xf];
      uVar4 = puVar8[-0xe];
      uVar5 = puVar8[-0xd];
      puVar9[-4] = puVar8[-0x10];
      puVar9[-3] = uVar3;
      puVar9[-2] = uVar4;
      puVar9[-1] = uVar5;
      puVar1 = ((undefined4 *)GEN_TOP((iVar11 + (int)puVar9)));
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      *puVar9 = *puVar1;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      puVar9[3] = uVar5;
      uVar3 = puVar8[-7];
      uVar4 = puVar8[-6];
      uVar5 = puVar8[-5];
      puVar9[4] = puVar8[-8];
      puVar9[5] = uVar3;
      puVar9[6] = uVar4;
      puVar9[7] = uVar5;
      uVar3 = puVar8[-3];
      uVar4 = puVar8[-2];
      uVar5 = puVar8[-1];
      puVar9[8] = puVar8[-4];
      puVar9[9] = uVar3;
      puVar9[10] = uVar4;
      puVar9[0xb] = uVar5;
      uVar3 = puVar8[1];
      uVar4 = puVar8[2];
      uVar5 = puVar8[3];
      puVar9[0xc] = *puVar8;
      puVar9[0xd] = uVar3;
      puVar9[0xe] = uVar4;
      puVar9[0xf] = uVar5;
      uVar3 = puVar8[5];
      uVar4 = puVar8[6];
      uVar5 = puVar8[7];
      puVar9[0x10] = puVar8[4];
      puVar9[0x11] = uVar3;
      puVar9[0x12] = uVar4;
      puVar9[0x13] = uVar5;
      puVar8 = puVar8 + 0x1c;
      puVar9 = puVar9 + 0x1c;
      (*(undefined4 * PTR32 *)&gen_args[0]) = ((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[0]) - 1)));
    } while ((*(undefined4 * PTR32 *)&gen_args[0]) != ((undefined4 *)GEN_TOP(0x0)));
  }
  uVar7 = *((uint *)GEN_TOP(((int)this + 0x28))) & 0x3fffffff;
  if ((int)uVar7 < (int)puVar6[9]) {
    if (-1 < (int)*((uint *)GEN_TOP(((int)this + 0x28)))) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x20))),uVar7 * 2);
    }
    (*(undefined4 * PTR32 *)&gen_args[0]) = ((undefined4 *)GEN_TOP((puVar6[9] * 2)));
    pcVar2 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc)));
    uVar7 = (*pcVar2)(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined4 * PTR32 *)&gen_args[0]));
    *((uint *)GEN_TOP(((int)this + 0x20))) = uVar7;
    *((int *)GEN_TOP(((int)this + 0x28))) = (int)(*(undefined4 * PTR32 *)&gen_args[0]) / 2;
  }
  (*(undefined4 * PTR32 *)&gen_args[0]) = ((undefined4 *)GEN_TOP(puVar6[9]));
  puVar10 = *((undefined2 * PTR32 *)GEN_TOP(((int)this + 0x20)));
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x24))) = (*(undefined4 * PTR32 *)&gen_args[0]);
  if (0 < (int)(*(undefined4 * PTR32 *)&gen_args[0])) {
    iVar12 = puVar6[8] - (int)puVar10;
    do {
      *puVar10 = *((undefined2 *)GEN_TOP((iVar12 + (int)puVar10)));
      puVar10 = puVar10 + 1;
      (*(undefined4 * PTR32 *)&gen_args[0]) = ((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[0]) - 1)));
    } while ((*(undefined4 * PTR32 *)&gen_args[0]) != ((undefined4 *)GEN_TOP(0x0)));
  }
  uVar3 = puVar6[0xd];
  uVar4 = puVar6[0xe];
  uVar5 = puVar6[0xf];
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = puVar6[0xc];
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = uVar3;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = uVar4;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = uVar5;
  uVar3 = puVar6[0x11];
  uVar4 = puVar6[0x12];
  uVar5 = puVar6[0x13];
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = puVar6[0x10];
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = uVar3;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = uVar4;
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = uVar5;
  uVar3 = puVar6[0x15];
  uVar4 = puVar6[0x16];
  uVar5 = puVar6[0x17];
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = puVar6[0x14];
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = uVar3;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = uVar4;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = uVar5;
  *((undefined1 *)GEN_TOP(((int)this + 0x60))) = *(undefined1 *)(puVar6 + 0x18);
  *((undefined4 *)GEN_TOP(((int)this + 100))) = puVar6[0x19];
  return (uint)this;
}

/* ref: FUN_00d68ab0 */
GEN_LIB GEN_FRAME uint F_00d68ab0(GEN_P(ushort * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd68ab0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(ushort * param_1 = (ushort *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return (uint)param_1[0xe] * param_2 + (uint)*param_1;
}

/* ref: FUN_00d68ad0 */
GEN_LIB GEN_FRAME uint F_00d68ad0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd68ad0u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  int iVar1;
  uint uVar2;
  float10 fVar3;
  float10 fVar4;
  float fVar5;
  uint local_c;
  
  iVar1 = *((ushort *)GEN_TOP(((*(uint *)&gen_args[0]) + 6))) - 1;
  fVar3 = (float10)iVar1;
  if (iVar1 < 0) {
    fVar3 = GEN_X87(fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110));
  }
  uVar2 = *((ushort *)GEN_TOP(((*(uint *)&gen_args[0]) + 6))) - 2;
  fVar3 = GEN_X87(fVar3 * ((float10)(*(float *)&gen_args[1]) / (float10)*((float *)GEN_TOP(((*(uint *)&gen_args[0]) + 8)))));
  (*(undefined2 *)((char *)&(*(float *)&gen_args[1]) + 0)) = gen_x87_cw | 0xc00;
  gen_set_x87_cw((unsigned short)(*(undefined2 *)((char *)&(*(float *)&gen_args[1]) + 0)));
  local_c = (uint)(longlong)TRUNC(fVar3);
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  if (uVar2 < local_c) {
    *(*(float * PTR32 *)&gen_args[3]) = GEN_FLT_TO(*(*(float * PTR32 *)&gen_args[3]), REFG(float, 0x1087f04));
    *(*(uint * PTR32 *)&gen_args[2]) = uVar2;
    return (uint)(*(uint * PTR32 *)&gen_args[2]);
  }
  fVar4 = (float10)(int)local_c;
  *(*(uint * PTR32 *)&gen_args[2]) = local_c;
  if ((int)local_c < 0) {
    fVar4 = GEN_X87(fVar4 + (float10)*(float *)&REFG(undefined, 0x1088110));
  }
  fVar3 = GEN_X87(fVar3 - fVar4);
  fVar5 = (float)fVar3;
  if (fVar3 < (float10)0) {
    *(*(float * PTR32 *)&gen_args[3]) = 0.0;
    return local_c;
  }
  if (REFG(float, 0x1087f04) < fVar5) {
    fVar5 = REFG(float, 0x1087f04);
  }
  *(*(float * PTR32 *)&gen_args[3]) = fVar5;
  return local_c;
}

/* ref: FUN_00d68b80 */
GEN_LIB GEN_FRAME uint F_00d68b80(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd68b80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return (uint)*((ushort *)GEN_TOP((param_1 + 2)));
}

/* ref: FUN_00d68b90 */
GEN_LIB GEN_FRAME uint F_00d68b90(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd68b90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return (uint)*((ushort *)GEN_TOP((param_1 + 4)));
}

/* ref: hkaQuantizedAnimation::vf5 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d68ba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xd68ba0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  return;
}

/* ref: hkaQuantizedAnimation::vf6 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d68bb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xd68bb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  return;
}

/* ref: FUN_00d68bc0 */
GEN_LIB GEN_FRAME unsigned int F_00d68bc0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(ushort * param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xd68bc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(ushort * param_3 = (ushort *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  int iVar1;
  int iVar2;
  ushort uVar3;
  
  if (0 < param_5) {
    uVar3 = *param_3;
    iVar2 = 0;
    if (0 < param_5 - 1) {
      do {
        if (param_2 <= (int)(uint)uVar3) break;
        iVar1 = iVar2 * 4;
        iVar2 = iVar2 + 1;
        *((undefined4 *)GEN_TOP((param_1 + (uint)uVar3 * 4))) = *((undefined4 *)GEN_TOP((param_4 + iVar1)));
        uVar3 = param_3[iVar2];
      } while (iVar2 < param_5 - 1);
    }
    if ((int)(uint)uVar3 < param_2) {
      *((undefined4 *)GEN_TOP((param_1 + (uint)uVar3 * 4))) = *((undefined4 *)GEN_TOP((param_4 + iVar2 * 4)));
    }
  }
  return;
}

/* ref: FUN_00d68c10 */
GEN_LIB GEN_FRAME uint F_00d68c10(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6))
{
  GEN_ENTER(0xd68c10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  uint uVar1;
  
  uVar1 = F_00d87980(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: hkaQuantizedAnimation::vf8 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d68c20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd68c20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return 4;
}

/* ref: hkaQuantizedAnimation::vf16 */
GEN_LIB GEN_NOFRAME byte F_00d68c30(void)
{
  GEN_ENTER(0xd68c30u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: hkaQuantizedAnimation::vf17 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d68c40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd68c40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x38)));
}

/* ref: hkaQuantizedAnimation::vf18 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d68c50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd68c50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x38))) = param_2;
  return param_2;
}

/* ref: hkaQuantizedAnimation::vf7 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d68c60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd68c60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x28))) + 6)));
}

/* ref: FUN_00d68c70 */
GEN_LIB GEN_NOFRAME unsigned int F_00d68c70(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(uint param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xd68c70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(uint param_5 = (uint)gen_a4;)
  GEN_FRAME_DECL(0x60, 0);
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  undefined4 * puVar9;
  ushort * puVar10;
  int iVar11;
  
  iVar11 = 0;
  if (0 < (int)param_5) {
    iVar8 = (param_5 & 0xfffffffc) - 4;
    (*(int *)(gen_frame + 0x40)) = iVar8;
    (*(int *)(gen_frame + 0x48)) = 0;
    if (0 < iVar8) {
      uVar6 = *((ushort *)GEN_TOP((param_3 + 6)));
      (*(int *)(gen_frame + 0x4c)) = param_4;
      puVar10 = ((ushort *)GEN_TOP((param_3 + 4)));
      do {
        (*(uint *)(gen_frame + 0x44)) = (uint)uVar6;
        if (param_2 <= (int)(uint)uVar6) break;
        F_00d85b30(((undefined4 *)(gen_frame + 0x0)),((undefined4 *)(gen_frame + 0x0)) + 4,&(*(undefined4 *)(gen_frame + 0x20)),&(*(undefined4 *)(gen_frame + 0x30)),(*(int *)(gen_frame + 0x4c)));
        (*(int *)(gen_frame + 0x48)) = (*(int *)(gen_frame + 0x48)) + 0xc;
        (*(int *)(gen_frame + 0x4c)) = (*(int *)(gen_frame + 0x4c)) + 0x18;
        puVar9 = ((undefined4 *)GEN_TOP((param_1 + (uint)puVar10[-2] * 0x10)));
        *puVar9 = ((undefined4 *)(gen_frame + 0x0))[0];
        puVar9[1] = ((undefined4 *)(gen_frame + 0x0))[1];
        puVar9[2] = ((undefined4 *)(gen_frame + 0x0))[2];
        puVar9[3] = ((undefined4 *)(gen_frame + 0x0))[3];
        puVar9 = ((undefined4 *)GEN_TOP((param_1 + (uint)puVar10[-1] * 0x10)));
        *puVar9 = ((undefined4 *)(gen_frame + 0x0))[4];
        puVar9[1] = ((undefined4 *)(gen_frame + 0x0))[5];
        puVar9[2] = ((undefined4 *)(gen_frame + 0x0))[6];
        puVar9[3] = (*(undefined4 *)(gen_frame + 0x1c));
        puVar9 = ((undefined4 *)GEN_TOP((param_1 + (uint)*puVar10 * 0x10)));
        *puVar9 = (*(undefined4 *)(gen_frame + 0x20));
        puVar9[1] = (*(undefined4 *)(gen_frame + 0x24));
        puVar9[2] = (*(undefined4 *)(gen_frame + 0x28));
        puVar9[3] = (*(undefined4 *)(gen_frame + 0x2c));
        iVar11 = iVar11 + 4;
        puVar9 = ((undefined4 *)GEN_TOP((param_1 + (*(uint *)(gen_frame + 0x44)) * 0x10)));
        *puVar9 = (*(undefined4 *)(gen_frame + 0x30));
        puVar9[1] = (*(undefined4 *)(gen_frame + 0x34));
        puVar9[2] = (*(undefined4 *)(gen_frame + 0x38));
        puVar9[3] = (*(undefined4 *)(gen_frame + 0x3c));
        uVar6 = puVar10[5];
        puVar10 = puVar10 + 4;
      } while (iVar11 < (*(int *)(gen_frame + 0x40)));
    }
    if (iVar11 < (int)param_5) {
      (*(int *)(gen_frame + 0x48)) = param_4 + (*(int *)(gen_frame + 0x48)) * 2;
      do {
        F_00d85b30(((undefined4 *)(gen_frame + 0x0)),((undefined4 *)(gen_frame + 0x0)) + 4,&(*(undefined4 *)(gen_frame + 0x20)),&(*(undefined4 *)(gen_frame + 0x30)),(*(int *)(gen_frame + 0x48)));
        iVar8 = 0;
        puVar9 = ((undefined4 *)(gen_frame + 0x0));
        do {
          if ((int)param_5 <= iVar11) break;
          uVar7 = (uint)*((ushort *)GEN_TOP((param_3 + iVar11 * 2)));
          if (param_2 <= (int)uVar7) {
            return;
          }
          uVar2 = *puVar9;
          uVar3 = puVar9[1];
          uVar4 = puVar9[2];
          uVar5 = puVar9[3];
          iVar8 = iVar8 + 1;
          puVar9 = puVar9 + 4;
          iVar11 = iVar11 + 1;
          puVar1 = ((undefined4 *)GEN_TOP((param_1 + uVar7 * 0x10)));
          *puVar1 = uVar2;
          puVar1[1] = uVar3;
          puVar1[2] = uVar4;
          puVar1[3] = uVar5;
        } while (iVar8 < 4);
        (*(int *)(gen_frame + 0x48)) = (*(int *)(gen_frame + 0x48)) + 0x18;
      } while (iVar11 < (int)param_5);
    }
  }
  return;
}

/* ref: FUN_00d68da0 */
GEN_LIB GEN_NOFRAME uint F_00d68da0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(int param_8, unsigned int gen_a7), GEN_P(int param_9, unsigned int gen_a8), GEN_P(undefined4 param_10, unsigned int gen_a9), GEN_P(undefined4 param_11, unsigned int gen_a10), GEN_P(undefined4 param_12, unsigned int gen_a11), GEN_P(undefined4 param_13, unsigned int gen_a12), GEN_P(undefined4 param_14, unsigned int gen_a13), GEN_P(undefined4 param_15, unsigned int gen_a14), GEN_P(float param_16, float gen_a15), GEN_P(char param_17, unsigned int gen_a16), GEN_P(float param_18, float gen_a17))
{
  GEN_ENTER(0xd68da0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(int param_8 = (int)gen_a7;)
  GEN_PIN(int param_9 = (int)gen_a8;)
  GEN_PIN(undefined4 param_10 = (undefined4)gen_a9;)
  GEN_PIN(undefined4 param_11 = (undefined4)gen_a10;)
  GEN_PIN(undefined4 param_12 = (undefined4)gen_a11;)
  GEN_PIN(undefined4 param_13 = (undefined4)gen_a12;)
  GEN_PIN(undefined4 param_14 = (undefined4)gen_a13;)
  GEN_PIN(undefined4 param_15 = (undefined4)gen_a14;)
  GEN_PIN(float param_16 = (float)gen_a15;)
  GEN_PIN(char param_17 = (char)gen_a16;)
  GEN_PIN(float param_18 = (float)gen_a17;)
  GEN_FRAME_DECL(0x60, 0);
  byte * pbVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  int iVar4;
  LPVOID pvVar5;
  undefined4 uVar6;
  undefined4 * puVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar7 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar3 + 4)));
  if (puVar7 < *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar3 + 0xc)))) {
    *puVar7 = ((char *)REFP(0x11371d8));
    uVar2 = rdtsc();
    (*(uint *)(gen_frame + 0x3c)) = (int)uVar2;
    puVar7[1] = (int)uVar2;
    *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar3 + 4))) = puVar7 + 3;
  }
  ((float *)(gen_frame + 0x18))[0] = param_2;
  fVar11 = REFG(float, 0x1087f04) - param_18;
  ((float *)(gen_frame + 0x18))[2] = fVar11;
  ((float *)(gen_frame + 0x18))[1] = param_3;
  (*(LPVOID *)(gen_frame + 0x2c)) = (LPVOID)0x0;
  do {
    pvVar3 = (*(LPVOID *)(gen_frame + 0x2c));
    uVar6 = param_7;
    if ((*(LPVOID *)(gen_frame + 0x2c)) == (LPVOID)0x0) {
      if (param_16 <= param_18) {
        F_00d837f0(param_6,param_7,param_10,param_4,param_11,param_5);
        (*(int *)(gen_frame + 0x40)) = 0;
        (*(undefined4 *)(gen_frame + 0x4c)) = param_6;
        (*(undefined4 *)(gen_frame + 0x48)) = param_6;
LAB_00d68ed7: ;
        (*(int *)(gen_frame + 0x34)) = param_4 * 3;
        (*(float *)(gen_frame + 0x38)) = gen_bits2f((uint)*((ushort *)GEN_TOP((param_1 + 0x22))));
        (*(undefined4 *)(gen_frame + 0x44)) = uVar6;
        iVar9 = (uint)*((ushort *)GEN_TOP((param_1 + 0x10))) + (uint)*((ushort *)GEN_TOP((param_1 + 0xc)));
        (*(uint *)(gen_frame + 0x3c)) = (uint)*((ushort *)GEN_TOP((param_1 + 0x1e)));
        (*(int *)(gen_frame + 0x28)) = param_4 * 0xc;
        (*(undefined4 *)(gen_frame + 0x48)) = (*(undefined4 *)(gen_frame + 0x4c));
        F_00d68bc0((*(undefined4 *)(gen_frame + 0x4c)),param_4 * 0xc,(uint)*((ushort *)GEN_TOP((param_1 + 0x1e))) + param_1,
                     (uint)*((ushort *)GEN_TOP((param_1 + 0x22))) + param_1,iVar9);
        iVar4 = (*(uint *)(gen_frame + 0x3c)) + iVar9 * 2;
        iVar9 = (int)gen_fl2bits((*(float *)(gen_frame + 0x38))) + iVar9 * 4;
        (*(uint *)(gen_frame + 0x3c)) = iVar4;
        F_00d68c70((*(undefined4 *)(gen_frame + 0x48)),(*(int *)(gen_frame + 0x34)),iVar4 + param_1,iVar9 + param_1,
                     (uint)*((ushort *)GEN_TOP((param_1 + 0xe))));
        F_00d68bc0((*(undefined4 *)(gen_frame + 0x44)),param_5,(*(uint *)(gen_frame + 0x3c)) + (uint)*((ushort *)GEN_TOP((param_1 + 0xe))) * 2 + param_1,
                     (iVar9 + 0xf + (uint)*((ushort *)GEN_TOP((param_1 + 0xe))) * 6 & 0xfffffff0) + param_1,
                     (uint)*((ushort *)GEN_TOP((param_1 + 0x12))));
        (*(uint *)(gen_frame + 0x30)) = (uint)*((ushort *)GEN_TOP((param_1 + 0x26)));
        iVar10 = (uint)*((ushort *)GEN_TOP((param_1 + 0x18))) + (uint)*((ushort *)GEN_TOP((param_1 + 0x14)));
        (*(float *)(gen_frame + 0x38)) = ((float *)(gen_frame + 0x18))[(int)((*(int *)(gen_frame + 0x40)))];
        (*(uint *)(gen_frame + 0x24)) = (uint)*((ushort *)GEN_TOP((param_1 + 0x24)));
        (*(uint *)(gen_frame + 0x3c)) = (uint)*((ushort *)GEN_TOP((param_1 + 0x20)));
        F_00d68c10((*(undefined4 *)(gen_frame + 0x4c)),(*(int *)(gen_frame + 0x28)),(uint)*((ushort *)GEN_TOP((param_1 + 0x20))) + param_1,
                     (uint)*((ushort *)GEN_TOP((param_1 + 0x24))) + param_1,
                     (uint)*((ushort *)GEN_TOP((param_1 + 0x26))) + param_1,
                     (undefined4)gen_fl2bits(((float *)(gen_frame + 0x18))[(int)((*(int *)(gen_frame + 0x40)))]),iVar10);
        iVar4 = iVar10 * 2;
        iVar9 = (*(uint *)(gen_frame + 0x3c)) + iVar4;
        (*(uint *)(gen_frame + 0x3c)) = iVar9;
        (*(int *)(gen_frame + 0x28)) = iVar4;
        F_00d68c70((*(undefined4 *)(gen_frame + 0x48)),(*(int *)(gen_frame + 0x34)),iVar9 + param_1,(int)gen_fl2bits((*(float *)(gen_frame + 0x38))) + iVar4,
                     (uint)*((ushort *)GEN_TOP((param_1 + 0x16))));
        F_00d68c10((*(undefined4 *)(gen_frame + 0x44)),param_5,(uint)*((ushort *)GEN_TOP((param_1 + 0x16))) * 2 + (*(uint *)(gen_frame + 0x3c)) + param_1,
                     ((*(uint *)(gen_frame + 0x24)) + 0xf + iVar10 * 4 & 0xfffffff0) + param_1,
                     ((*(uint *)(gen_frame + 0x30)) + 0xf + iVar10 * 4 & 0xfffffff0) + param_1,
                     (int)gen_fl2bits((*(float *)(gen_frame + 0x38))) + (uint)*((ushort *)GEN_TOP((param_1 + 0x16))) * 6 + (*(int *)(gen_frame + 0x28)),
                     (uint)*((ushort *)GEN_TOP((param_1 + 0x1a))));
        pvVar3 = (*(LPVOID *)(gen_frame + 0x2c));
        fVar11 = ((float *)(gen_frame + 0x18))[2];
      }
      else if (!(fVar11 <= param_16)) {
        F_00d837f0(param_12,param_14,param_10,param_4,param_11,param_5);
        (*(int *)(gen_frame + 0x40)) = 0;
        uVar6 = param_14;
        uVar8 = param_12;
        goto LAB_00d68ece;
      }
    }
    else if (!(param_16 <= param_18)) {
      if (fVar11 <= param_16) {
        F_00d837f0(param_6,param_7,param_10,param_4,param_11,param_5);
        uVar8 = param_6;
      }
      else {
        F_00d837f0(param_13,param_15,param_10,param_4,param_11,param_5);
        uVar6 = param_15;
        uVar8 = param_13;
      }
      (*(int *)(gen_frame + 0x40)) = 1;
LAB_00d68ece: ;
      (*(undefined4 *)(gen_frame + 0x4c)) = uVar8;
      (*(undefined4 *)(gen_frame + 0x48)) = uVar8;
      goto LAB_00d68ed7;
    }
    (*(LPVOID *)(gen_frame + 0x2c)) = (LPVOID)((int)pvVar3 + 1);
    if (1 < (int)pvVar3 + 1) {
      if ((!(param_16 <= param_18)) && (!(fVar11 <= param_16))) {
        (*(float *)(gen_frame + 0x0)) = param_16;
        (*(float *)(gen_frame + 0x4)) = param_16;
        (*(float *)(gen_frame + 0x8)) = param_16;
        (*(float *)(gen_frame + 0xc)) = param_16;
        (*(float *)(gen_frame + 0x10)) = param_16;
        (*(float *)(gen_frame + 0x14)) = param_16;
        ((float *)(gen_frame + 0x18))[0] = param_16;
        ((float *)(gen_frame + 0x18))[1] = param_16;
        F_00d49f00(param_6,param_12,param_13,&(*(float *)(gen_frame + 0x10)),param_4,0,(uint)(param_17 != '\0'));
        F_00d49310(param_7,param_14,param_15,&(*(float *)(gen_frame + 0x0)),param_5,0);
      }
      iVar9 = param_1 + 0x28;
      iVar4 = 0;
      if (3 < param_4) {
        puVar7 = ((undefined4 *)GEN_TOP((param_8 + 8)));
        do {
          pbVar1 = ((byte *)GEN_TOP((iVar9 + iVar4)));
          iVar4 = iVar4 + 4;
          puVar7[-2] = *(undefined4 *)(&REFG(undefined, 0x1350e80) + (uint)*pbVar1 * 4);
          puVar7[-1] = *(undefined4 *)(&REFG(undefined, 0x1350e80) + (uint)*((byte *)GEN_TOP((param_1 + 0x25 + iVar4))) * 4);
          *puVar7 = *(undefined4 *)(&REFG(undefined, 0x1350e80) + (uint)*((byte *)GEN_TOP((param_1 + 0x26 + iVar4))) * 4);
          puVar7[1] = *(undefined4 *)(&REFG(undefined, 0x1350e80) + (uint)*((byte *)GEN_TOP((param_1 + 0x27 + iVar4))) * 4);
          puVar7 = puVar7 + 4;
        } while (iVar4 < param_4 - 3);
      }
      while (iVar4 < param_4) {
        pbVar1 = ((byte *)GEN_TOP((iVar4 + iVar9)));
        iVar4 = iVar4 + 1;
        *((undefined4 *)GEN_TOP((param_8 - 4 + iVar4 * 4))) =
             *(undefined4 *)(&REFG(undefined, 0x1350e80) + (uint)*pbVar1 * 4);
      }
      iVar9 = iVar9 + param_4;
      iVar4 = 0;
      if (3 < param_5) {
        puVar7 = ((undefined4 *)GEN_TOP((param_9 + 8)));
        do {
          pbVar1 = ((byte *)GEN_TOP((iVar9 + iVar4)));
          iVar4 = iVar4 + 4;
          puVar7[-2] = *(undefined4 *)(&REFG(undefined, 0x1350e80) + (uint)*pbVar1 * 4);
          puVar7[-1] = *(undefined4 *)(&REFG(undefined, 0x1350e80) + (uint)*((byte *)GEN_TOP((iVar9 - 3 + iVar4))) * 4);
          *puVar7 = *(undefined4 *)(&REFG(undefined, 0x1350e80) + (uint)*((byte *)GEN_TOP((iVar9 - 2 + iVar4))) * 4);
          puVar7[1] = *(undefined4 *)(&REFG(undefined, 0x1350e80) + (uint)*((byte *)GEN_TOP((iVar9 - 1 + iVar4))) * 4);
          puVar7 = puVar7 + 4;
        } while (iVar4 < param_5 - 3);
      }
      while (iVar4 < param_5) {
        pbVar1 = ((byte *)GEN_TOP((iVar4 + iVar9)));
        iVar4 = iVar4 + 1;
        *((undefined4 *)GEN_TOP((param_9 - 4 + iVar4 * 4))) =
             *(undefined4 *)(&REFG(undefined, 0x1350e80) + (uint)*pbVar1 * 4);
      }
      pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
      puVar7 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar5 + 4)));
      pvVar3 = pvVar5;
      if (puVar7 < *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar5 + 0xc)))) {
        *puVar7 = &REFG(undefined, 0x1136cb0);
        uVar2 = rdtsc();
        pvVar3 = (LPVOID)uVar2;
        (*(LPVOID *)(gen_frame + 0x2c)) = pvVar3;
        puVar7[1] = pvVar3;
        *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar5 + 4))) = puVar7 + 3;
      }
      return (uint)pvVar3;
    }
  } while( true );
}

/* ref: hkaQuantizedAnimation::vf10 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d691e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd691e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  return (**(ushort * PTR32 *)(this + 0x28) + 0xf & 0xfffffff0) + 0x40 +
         ((*(ushort * PTR32 *)(this + 0x28))[0xe] + 0xf & 0xfffffff0) * 2;
}

/* ref: hkaQuantizedAnimation::vf11 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d69200(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd69200u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (*((int *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x38))) + 0x40))) + 3U & 0xfffffffc) * 0x10 +
         (*((int *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x38))) + 0x1c))) + 3U & 0xfffffffc) * 0x94;
}

/* ref: FUN_00d69230 */
GEN_LIB GEN_FRAME uint F_00d69230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12, float gen_a13, unsigned int gen_a14, float gen_a15)
{
  GEN_ENTER(0xd69230u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[16];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  gen_args[8] = gen_a8;
  gen_args[9] = gen_a9;
  gen_args[10] = gen_a10;
  gen_args[11] = gen_a11;
  gen_args[12] = gen_a12;
  memcpy(&gen_args[13], &gen_a13, sizeof gen_a13);
  gen_args[14] = gen_a14;
  memcpy(&gen_args[15], &gen_a15, sizeof gen_a15);
  uint uVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float fVar5;
  uint local_c;
  
  iVar2 = *((ushort *)GEN_TOP(((*(uint *)&gen_args[0]) + 6))) - 1;
  fVar3 = (float10)iVar2;
  if (iVar2 < 0) {
    fVar3 = GEN_X87(fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110));
  }
  uVar1 = *((ushort *)GEN_TOP(((*(uint *)&gen_args[0]) + 6))) - 2;
  fVar3 = GEN_X87(fVar3 * ((float10)(*(float *)&gen_args[13]) / (float10)*((float *)GEN_TOP(((*(uint *)&gen_args[0]) + 8)))));
  (*(undefined2 *)((char *)&(*(float *)&gen_args[13]) + 0)) = gen_x87_cw | 0xc00;
  gen_set_x87_cw((unsigned short)(*(undefined2 *)((char *)&(*(float *)&gen_args[13]) + 0)));
  local_c = (uint)(longlong)TRUNC(fVar3);
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  fVar5 = REFG(float, 0x1087f04);
  if (local_c <= uVar1) {
    fVar4 = (float10)(int)local_c;
    if ((int)local_c < 0) {
      fVar4 = GEN_X87(fVar4 + (float10)*(float *)&REFG(undefined, 0x1088110));
    }
    fVar3 = GEN_X87(fVar3 - fVar4);
    fVar5 = (float)fVar3;
    uVar1 = local_c;
    if (fVar3 < (float10)0) {
      fVar5 = 0.0;
    }
    else if (REFG(float, 0x1087f04) < fVar5) {
      fVar5 = REFG(float, 0x1087f04);
    }
  }
  uVar1 = F_00d68da0((*(uint *)&gen_args[0]),GEN_ARGF(*((ushort *)GEN_TOP(((*(uint *)&gen_args[0]) + 0x1c))) * uVar1 + (uint)*((ushort *)GEN_TOP((*(uint *)&gen_args[0]))) +
                               (*(uint *)&gen_args[0])),GEN_ARGF((uVar1 + 1) * (uint)*((ushort *)GEN_TOP(((*(uint *)&gen_args[0]) + 0x1c))) + (uint)*((ushort *)GEN_TOP((*(uint *)&gen_args[0]))) +
                       (*(uint *)&gen_args[0])),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]),(*(undefined4 *)&gen_args[5]),(*(undefined4 *)&gen_args[6]),(*(undefined4 *)&gen_args[7]),(*(undefined4 *)&gen_args[8]),
                       (*(undefined4 *)&gen_args[9]),(*(undefined4 *)&gen_args[10]),(*(undefined4 *)&gen_args[11]),(*(undefined4 *)&gen_args[12]),fVar5,(undefined1)(*(undefined4 *)&gen_args[14]),(*(float *)&gen_args[15]));
  return uVar1;
}

/* ref: hkaQuantizedAnimation::vf9 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d69330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xd69330u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  ushort uVar1;
  ushort * puVar2;
  uint uVar3;
  
  puVar2 = *(ushort * PTR32 *)(this + 0x28);
  uVar1 = *puVar2;
  uVar3 = (uint)puVar2[0xe];
  *param_3 = this;
  param_3[1] = 0x3c;
  param_3[3] = (uint)*puVar2;
  param_3[2] = puVar2;
  param_3[5] = uVar3;
  param_3[4] = (int)puVar2 + uVar3 * param_1 + (uint)uVar1;
  param_3[7] = uVar3;
  param_3[6] = (int)puVar2 + (param_1 + 1) * uVar3 + (uint)uVar1;
  return 0;
}

/* ref: FUN_00d69380 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d69380(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8), GEN_P(undefined4 param_10, unsigned int gen_a9), GEN_P(undefined4 param_11, unsigned int gen_a10), GEN_P(float param_12, float gen_a11), GEN_P(undefined4 param_13, unsigned int gen_a12), GEN_P(float param_14, float gen_a13))
{
  GEN_ENTER(0xd69380u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a8;)
  GEN_PIN(undefined4 param_10 = (undefined4)gen_a9;)
  GEN_PIN(undefined4 param_11 = (undefined4)gen_a10;)
  GEN_PIN(float param_12 = (float)gen_a11;)
  GEN_PIN(undefined4 param_13 = (undefined4)gen_a12;)
  GEN_PIN(float param_14 = (float)gen_a13;)
  uint uVar1;
  
  uVar1 = F_00d69230(*((uint *)GEN_TOP((param_1 + 0x28))),param_2,param_3,param_4,param_5,param_6,param_7,
                       *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x38))) + 0x24))),
                       *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x38))) + 0x30))),param_8,param_9,param_10,
                       param_11,param_12,param_13,param_14);
  return uVar1;
}

/* ref: FUN_00d693e0 */
GEN_LIB GEN_FRAME uint F_00d693e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(float param_2, float gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(int param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7), GEN_P(undefined4 * param_9, unsigned int gen_a8), GEN_P(undefined4 * param_10, unsigned int gen_a9))
{
  GEN_ENTER(0xd693e0u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(int param_7 = (int)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 * param_9 = (undefined4 *)(uintptr_t)gen_a8;)
  GEN_PIN(undefined4 * param_10 = (undefined4 *)(uintptr_t)gen_a9;)
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  LPVOID pvVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  float * pfVar16;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_20;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  float * local_8;
  
  iVar1 = *((int *)GEN_TOP((param_7 + 8)));
  uVar2 = *((undefined4 *)GEN_TOP((param_7 + 0x10)));
  uVar3 = *((undefined4 *)GEN_TOP((param_7 + 0x18)));
  uVar11 = (uint)*((ushort *)GEN_TOP((iVar1 + 2)));
  uVar13 = (uint)*((ushort *)GEN_TOP((iVar1 + 4)));
  uVar12 = uVar11 + 3 & 0xfffffffc;
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar9 = uVar12 * 0x30 + 0x7f & 0xffffff80;
  local_20 = *((uint *)GEN_TOP(((int)pvVar5 + 0xc)));
  if ((*((int *)GEN_TOP(((int)pvVar5 + 8))) < (int)uVar9) || (*((uint *)GEN_TOP(((int)pvVar5 + 0x10))) < uVar9 + local_20)
     ) {
    local_20 = F_00d94390(pvVar5 GEN_EDX_ARG,uVar9);
  }
  else {
    *((uint *)GEN_TOP(((int)pvVar5 + 0xc))) = uVar9 + local_20;
  }
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  local_34 = *((uint *)GEN_TOP(((int)pvVar5 + 0xc)));
  if ((*((int *)GEN_TOP(((int)pvVar5 + 8))) < (int)uVar9) || (*((uint *)GEN_TOP(((int)pvVar5 + 0x10))) < uVar9 + local_34)
     ) {
    local_34 = F_00d94390(pvVar5 GEN_EDX_ARG,uVar9);
  }
  else {
    *((uint *)GEN_TOP(((int)pvVar5 + 0xc))) = uVar9 + local_34;
  }
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  local_30 = *((uint *)GEN_TOP(((int)pvVar5 + 0xc)));
  if ((*((int *)GEN_TOP(((int)pvVar5 + 8))) < (int)uVar9) || (*((uint *)GEN_TOP(((int)pvVar5 + 0x10))) < uVar9 + local_30)
     ) {
    local_30 = F_00d94390(pvVar5 GEN_EDX_ARG,uVar9);
  }
  else {
    *((uint *)GEN_TOP(((int)pvVar5 + 0xc))) = uVar9 + local_30;
  }
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  local_18 = *((uint *)GEN_TOP(((int)pvVar5 + 0xc)));
  uVar12 = uVar12 * 4 + 0x7f & 0xffffff80;
  if ((*((int *)GEN_TOP(((int)pvVar5 + 8))) < (int)uVar12) ||
     (*((uint *)GEN_TOP(((int)pvVar5 + 0x10))) < uVar12 + local_18)) {
    local_18 = F_00d94390(pvVar5 GEN_EDX_ARG,uVar12);
  }
  else {
    *((uint *)GEN_TOP(((int)pvVar5 + 0xc))) = uVar12 + local_18;
  }
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  local_14 = *((uint *)GEN_TOP(((int)pvVar5 + 0xc)));
  uVar14 = (uVar13 + 3 & 0xfffffffc) * 4 + 0x7f & 0xffffff80;
  if ((*((int *)GEN_TOP(((int)pvVar5 + 8))) < (int)uVar14) ||
     (*((uint *)GEN_TOP(((int)pvVar5 + 0x10))) < uVar14 + local_14)) {
    local_14 = F_00d94390(pvVar5 GEN_EDX_ARG,uVar14);
  }
  else {
    *((uint *)GEN_TOP(((int)pvVar5 + 0xc))) = uVar14 + local_14;
  }
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  local_2c = *((uint *)GEN_TOP(((int)pvVar5 + 0xc)));
  if ((*((int *)GEN_TOP(((int)pvVar5 + 8))) < (int)uVar14) ||
     (*((uint *)GEN_TOP(((int)pvVar5 + 0x10))) < uVar14 + local_2c)) {
    local_2c = F_00d94390(pvVar5 GEN_EDX_ARG,uVar14);
  }
  else {
    *((uint *)GEN_TOP(((int)pvVar5 + 0xc))) = uVar14 + local_2c;
  }
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  local_28 = *((uint *)GEN_TOP(((int)pvVar5 + 0xc)));
  if ((*((int *)GEN_TOP(((int)pvVar5 + 8))) < (int)uVar14) ||
     (*((uint *)GEN_TOP(((int)pvVar5 + 0x10))) < uVar14 + local_28)) {
    local_28 = F_00d94390(pvVar5 GEN_EDX_ARG,uVar14);
  }
  else {
    *((uint *)GEN_TOP(((int)pvVar5 + 0xc))) = uVar14 + local_28;
  }
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  local_10 = *((uint *)GEN_TOP(((int)pvVar5 + 0xc)));
  if ((*((int *)GEN_TOP(((int)pvVar5 + 8))) < (int)uVar14) ||
     (*((uint *)GEN_TOP(((int)pvVar5 + 0x10))) < uVar14 + local_10)) {
    local_10 = F_00d94390(pvVar5 GEN_EDX_ARG,uVar14);
  }
  else {
    *((uint *)GEN_TOP(((int)pvVar5 + 0xc))) = uVar14 + local_10;
  }
  F_00d68da0(iVar1,gen_bits2f((unsigned int)(uVar2)),gen_bits2f((unsigned int)(uVar3)),uVar11,uVar13,local_20,local_14,local_18,local_10,param_5,param_6,
               local_34,local_30,local_2c,local_28,param_2,1,REFG(float, 0x10947f8));
  uVar10 = 0;
  local_c = 0;
  puVar8 = param_9;
  if (3 < uVar11) {
    local_8 = ((float *)GEN_TOP((local_18 + 8)));
    puVar6 = ((undefined4 *)GEN_TOP((local_20 + 0x50)));
    do {
      if (param_3 <= uVar10) goto LAB_00d69797;
      puVar7 = puVar8;
      if (0.0 < local_8[-2]) {
        uVar2 = puVar6[-0x13];
        uVar3 = puVar6[-0x12];
        uVar4 = puVar6[-0x11];
        *puVar8 = puVar6[-0x14];
        puVar8[1] = uVar2;
        puVar8[2] = uVar3;
        puVar8[3] = uVar4;
        uVar2 = puVar6[-0xf];
        uVar3 = puVar6[-0xe];
        uVar4 = puVar6[-0xd];
        puVar8[4] = puVar6[-0x10];
        puVar8[5] = uVar2;
        puVar8[6] = uVar3;
        puVar8[7] = uVar4;
        uVar2 = puVar6[-0xb];
        uVar3 = puVar6[-10];
        uVar4 = puVar6[-9];
        puVar7 = puVar8 + 0xc;
        puVar8[8] = puVar6[-0xc];
        puVar8[9] = uVar2;
        puVar8[10] = uVar3;
        puVar8[0xb] = uVar4;
        uVar10 = uVar10 + 1;
      }
      if (param_3 <= uVar10) goto LAB_00d69797;
      puVar8 = puVar7;
      if (0.0 < local_8[-1]) {
        uVar2 = puVar6[-7];
        uVar3 = puVar6[-6];
        uVar4 = puVar6[-5];
        *puVar7 = puVar6[-8];
        puVar7[1] = uVar2;
        puVar7[2] = uVar3;
        puVar7[3] = uVar4;
        uVar2 = puVar6[-3];
        uVar3 = puVar6[-2];
        uVar4 = puVar6[-1];
        puVar7[4] = puVar6[-4];
        puVar7[5] = uVar2;
        puVar7[6] = uVar3;
        puVar7[7] = uVar4;
        uVar2 = puVar6[1];
        uVar3 = puVar6[2];
        uVar4 = puVar6[3];
        puVar8 = puVar7 + 0xc;
        puVar7[8] = *puVar6;
        puVar7[9] = uVar2;
        puVar7[10] = uVar3;
        puVar7[0xb] = uVar4;
        uVar10 = uVar10 + 1;
      }
      if (param_3 <= uVar10) goto LAB_00d69797;
      puVar7 = puVar8;
      if (0.0 < *local_8) {
        uVar2 = puVar6[5];
        uVar3 = puVar6[6];
        uVar4 = puVar6[7];
        *puVar8 = puVar6[4];
        puVar8[1] = uVar2;
        puVar8[2] = uVar3;
        puVar8[3] = uVar4;
        uVar2 = puVar6[9];
        uVar3 = puVar6[10];
        uVar4 = puVar6[0xb];
        puVar8[4] = puVar6[8];
        puVar8[5] = uVar2;
        puVar8[6] = uVar3;
        puVar8[7] = uVar4;
        uVar2 = puVar6[0xd];
        uVar3 = puVar6[0xe];
        uVar4 = puVar6[0xf];
        puVar7 = puVar8 + 0xc;
        puVar8[8] = puVar6[0xc];
        puVar8[9] = uVar2;
        puVar8[10] = uVar3;
        puVar8[0xb] = uVar4;
        uVar10 = uVar10 + 1;
      }
      if (param_3 <= uVar10) goto LAB_00d69797;
      puVar8 = puVar7;
      if (0.0 < local_8[1]) {
        uVar2 = puVar6[0x11];
        uVar3 = puVar6[0x12];
        uVar4 = puVar6[0x13];
        *puVar7 = puVar6[0x10];
        puVar7[1] = uVar2;
        puVar7[2] = uVar3;
        puVar7[3] = uVar4;
        uVar2 = puVar6[0x15];
        uVar3 = puVar6[0x16];
        uVar4 = puVar6[0x17];
        puVar7[4] = puVar6[0x14];
        puVar7[5] = uVar2;
        puVar7[6] = uVar3;
        puVar7[7] = uVar4;
        uVar2 = puVar6[0x19];
        uVar3 = puVar6[0x1a];
        uVar4 = puVar6[0x1b];
        puVar8 = puVar7 + 0xc;
        puVar7[8] = puVar6[0x18];
        puVar7[9] = uVar2;
        puVar7[10] = uVar3;
        puVar7[0xb] = uVar4;
        uVar10 = uVar10 + 1;
      }
      local_c = local_c + 4;
      local_8 = local_8 + 4;
      puVar6 = puVar6 + 0x30;
    } while (local_c < uVar11 - 3);
  }
  if (local_c < uVar11) {
    puVar6 = ((undefined4 *)GEN_TOP((local_20 + 0x20 + local_c * 0x30)));
    uVar15 = local_c;
    do {
      if (param_3 <= uVar10) break;
      puVar7 = puVar8;
      if (0.0 < *((float *)GEN_TOP((local_18 + uVar15 * 4)))) {
        uVar2 = puVar6[-7];
        uVar3 = puVar6[-6];
        uVar4 = puVar6[-5];
        *puVar8 = puVar6[-8];
        puVar8[1] = uVar2;
        puVar8[2] = uVar3;
        puVar8[3] = uVar4;
        uVar2 = puVar6[-3];
        uVar3 = puVar6[-2];
        uVar4 = puVar6[-1];
        puVar8[4] = puVar6[-4];
        puVar8[5] = uVar2;
        puVar8[6] = uVar3;
        puVar8[7] = uVar4;
        uVar2 = puVar6[1];
        uVar3 = puVar6[2];
        uVar4 = puVar6[3];
        puVar7 = puVar8 + 0xc;
        puVar8[8] = *puVar6;
        puVar8[9] = uVar2;
        puVar8[10] = uVar3;
        puVar8[0xb] = uVar4;
        uVar10 = uVar10 + 1;
      }
      uVar15 = uVar15 + 1;
      puVar6 = puVar6 + 0xc;
      puVar8 = puVar7;
    } while (uVar15 < uVar11);
  }
LAB_00d69797: ;
  uVar11 = 0;
  local_c = 0;
  puVar8 = param_10;
  if (3 < uVar13) {
    pfVar16 = ((float *)GEN_TOP((local_10 + 0xc)));
    puVar6 = ((undefined4 *)GEN_TOP((local_14 + 4)));
    do {
      if (param_4 <= uVar11) goto LAB_00d69894;
      puVar7 = puVar8;
      if (0.0 < pfVar16[-3]) {
        puVar7 = puVar8 + 1;
        *puVar8 = puVar6[-1];
        uVar11 = uVar11 + 1;
      }
      if (param_4 <= uVar11) goto LAB_00d69894;
      puVar8 = puVar7;
      if (0.0 < *((float *)GEN_TOP(((local_10 - local_14) + (int)puVar6)))) {
        puVar8 = puVar7 + 1;
        *puVar7 = *puVar6;
        uVar11 = uVar11 + 1;
      }
      if (param_4 <= uVar11) goto LAB_00d69894;
      puVar7 = puVar8;
      if (0.0 < pfVar16[-1]) {
        puVar7 = puVar8 + 1;
        *puVar8 = puVar6[1];
        uVar11 = uVar11 + 1;
      }
      if (param_4 <= uVar11) goto LAB_00d69894;
      puVar8 = puVar7;
      if (0.0 < *pfVar16) {
        puVar8 = puVar7 + 1;
        *puVar7 = puVar6[2];
        uVar11 = uVar11 + 1;
      }
      local_c = local_c + 4;
      puVar6 = puVar6 + 4;
      pfVar16 = pfVar16 + 4;
    } while (local_c < uVar13 - 3);
  }
  if (local_c < uVar13) {
    puVar6 = ((undefined4 *)GEN_TOP((local_14 + local_c * 4)));
    uVar10 = local_c;
    do {
      if (param_4 <= uVar11) break;
      puVar7 = puVar8;
      if (0.0 < *((float *)GEN_TOP(((int)puVar6 + (local_10 - local_14))))) {
        puVar7 = puVar8 + 1;
        *puVar8 = *puVar6;
        uVar11 = uVar11 + 1;
      }
      uVar10 = uVar10 + 1;
      puVar6 = puVar6 + 1;
      puVar8 = puVar7;
    } while (uVar10 < uVar13);
  }
LAB_00d69894: ;
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if (((*((int *)GEN_TOP(((int)pvVar5 + 8))) < (int)uVar14) ||
      (uVar14 + local_10 != *((int *)GEN_TOP(((int)pvVar5 + 0xc))))) ||
     (*((uint *)GEN_TOP(((int)pvVar5 + 0x14))) == local_10)) {
    F_00d945c0(pvVar5 GEN_EDX_ARG,local_10,uVar14);
  }
  else {
    *((uint *)GEN_TOP(((int)pvVar5 + 0xc))) = local_10;
  }
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if (((*((int *)GEN_TOP(((int)pvVar5 + 8))) < (int)uVar14) ||
      (uVar14 + local_28 != *((int *)GEN_TOP(((int)pvVar5 + 0xc))))) ||
     (*((uint *)GEN_TOP(((int)pvVar5 + 0x14))) == local_28)) {
    F_00d945c0(pvVar5 GEN_EDX_ARG,local_28,uVar14);
  }
  else {
    *((uint *)GEN_TOP(((int)pvVar5 + 0xc))) = local_28;
  }
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if (((*((int *)GEN_TOP(((int)pvVar5 + 8))) < (int)uVar14) ||
      (uVar14 + local_2c != *((int *)GEN_TOP(((int)pvVar5 + 0xc))))) ||
     (*((uint *)GEN_TOP(((int)pvVar5 + 0x14))) == local_2c)) {
    F_00d945c0(pvVar5 GEN_EDX_ARG,local_2c,uVar14);
  }
  else {
    *((uint *)GEN_TOP(((int)pvVar5 + 0xc))) = local_2c;
  }
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if (((*((int *)GEN_TOP(((int)pvVar5 + 8))) < (int)uVar14) ||
      (uVar14 + local_14 != *((int *)GEN_TOP(((int)pvVar5 + 0xc))))) ||
     (*((uint *)GEN_TOP(((int)pvVar5 + 0x14))) == local_14)) {
    F_00d945c0(pvVar5 GEN_EDX_ARG,local_14,uVar14);
  }
  else {
    *((uint *)GEN_TOP(((int)pvVar5 + 0xc))) = local_14;
  }
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if (((*((int *)GEN_TOP(((int)pvVar5 + 8))) < (int)uVar12) ||
      (uVar12 + local_18 != *((int *)GEN_TOP(((int)pvVar5 + 0xc))))) ||
     (*((uint *)GEN_TOP(((int)pvVar5 + 0x14))) == local_18)) {
    F_00d945c0(pvVar5 GEN_EDX_ARG,local_18,uVar12);
  }
  else {
    *((uint *)GEN_TOP(((int)pvVar5 + 0xc))) = local_18;
  }
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if (((*((int *)GEN_TOP(((int)pvVar5 + 8))) < (int)uVar9) || (uVar9 + local_30 != *((int *)GEN_TOP(((int)pvVar5 + 0xc))))
      ) || (*((uint *)GEN_TOP(((int)pvVar5 + 0x14))) == local_30)) {
    F_00d945c0(pvVar5 GEN_EDX_ARG,local_30,uVar9);
  }
  else {
    *((uint *)GEN_TOP(((int)pvVar5 + 0xc))) = local_30;
  }
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if (((*((int *)GEN_TOP(((int)pvVar5 + 8))) < (int)uVar9) || (uVar9 + local_34 != *((int *)GEN_TOP(((int)pvVar5 + 0xc))))
      ) || (*((uint *)GEN_TOP(((int)pvVar5 + 0x14))) == local_34)) {
    F_00d945c0(pvVar5 GEN_EDX_ARG,local_34,uVar9);
  }
  else {
    *((uint *)GEN_TOP(((int)pvVar5 + 0xc))) = local_34;
  }
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if ((((int)uVar9 <= *((int *)GEN_TOP(((int)pvVar5 + 8)))) &&
      (uVar9 + local_20 == *((int *)GEN_TOP(((int)pvVar5 + 0xc))))) &&
     (*((uint *)GEN_TOP(((int)pvVar5 + 0x14))) != local_20)) {
    *((uint *)GEN_TOP(((int)pvVar5 + 0xc))) = local_20;
    return (uint)pvVar5;
  }
  uVar9 = F_00d945c0(pvVar5 GEN_EDX_ARG,local_20,uVar9);
  return uVar9;
}

/* ref: FUN_00d69a30 */
GEN_LIB GEN_FRAME uint F_00d69a30(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8), GEN_P(float param_10, float gen_a9), GEN_P(undefined4 param_11, unsigned int gen_a10), GEN_P(float param_12, float gen_a11))
{
  GEN_ENTER(0xd69a30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a8;)
  GEN_PIN(float param_10 = (float)gen_a9;)
  GEN_PIN(undefined4 param_11 = (undefined4)gen_a10;)
  GEN_PIN(float param_12 = (float)gen_a11;)
  GEN_FRAME_DECL_TOP(0x28, 8, 4);
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *((ushort *)GEN_TOP((param_1 + 2))) + 3 & 0xfffffffc;
  if (uVar1 == 0) {
    (*(uint *)(gen_frame + 0x18)) = 0;
LAB_00d69a89: ;
    (*(uint *)(gen_frame + 0x0)) = 0x80000000;
  }
  else {
    (*(int *)(gen_frame + 0x14)) = uVar1 * 0x30;
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0xc))))(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0x14)));
    (*(uint *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x14)) / 0x30;
    (*(uint *)(gen_frame + 0x18)) = uVar1;
    if ((*(uint *)(gen_frame + 0x0)) == 0) goto LAB_00d69a89;
  }
  uVar1 = *((ushort *)GEN_TOP((param_1 + 2))) + 3 & 0xfffffffc;
  if (uVar1 == 0) {
    (*(uint *)(gen_frame + 0x1c)) = 0;
LAB_00d69ada: ;
    (*(uint *)(gen_frame + 0x4)) = 0x80000000;
  }
  else {
    (*(int *)(gen_frame + 0x10)) = uVar1 * 0x30;
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0xc))))(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0x10)));
    (*(uint *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x10)) / 0x30;
    (*(uint *)(gen_frame + 0x1c)) = uVar1;
    if ((*(uint *)(gen_frame + 0x4)) == 0) goto LAB_00d69ada;
  }
  uVar1 = *((ushort *)GEN_TOP((param_1 + 4))) + 3 & 0xfffffffc;
  if (uVar1 == 0) {
    (*(uint *)(gen_frame + 0x20)) = 0;
LAB_00d69b23: ;
    iVar2 = ((int)0x80000000);
  }
  else {
    (*(int *)(gen_frame + 0xc)) = uVar1 * 4;
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0xc))))(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0xc)));
    iVar2 = (int)((*(int *)(gen_frame + 0xc)) + ((*(int *)(gen_frame + 0xc)) >> 0x1f & 3U)) >> 2;
    (*(uint *)(gen_frame + 0x20)) = uVar1;
    if (iVar2 == 0) goto LAB_00d69b23;
  }
  uVar1 = *((ushort *)GEN_TOP((param_1 + 4))) + 3 & 0xfffffffc;
  if (uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    (*(int *)(gen_frame + 0x8)) = uVar1 * 4;
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0xc))))(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0x8)));
    iVar3 = (int)((*(int *)(gen_frame + 0x8)) + ((*(int *)(gen_frame + 0x8)) >> 0x1f & 3U)) >> 2;
    if (iVar3 != 0) goto LAB_00d69b6e;
  }
  iVar3 = ((int)0x80000000);
LAB_00d69b6e: ;
  F_00d69230(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,(*(uint *)(gen_frame + 0x18)),
               (*(uint *)(gen_frame + 0x1c)),(*(uint *)(gen_frame + 0x20)),uVar1,param_10,param_11,param_12);
  if (-1 < iVar3) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),uVar1,iVar3 * 4);
  }
  if (-1 < iVar2) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(uint *)(gen_frame + 0x20)),iVar2 * 4);
  }
  if (-1 < (int)(*(uint *)(gen_frame + 0x4))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516a4),(*(uint *)(gen_frame + 0x1c)),((*(uint *)(gen_frame + 0x4)) & 0x3fffffff) * 0x30);
  }
  uVar1 = (*(uint *)(gen_frame + 0x0));
  if (-1 < (int)(*(uint *)(gen_frame + 0x0))) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),(*(uint *)(gen_frame + 0x18)),((*(uint *)(gen_frame + 0x0)) & 0x3fffffff) * 0x30);
  }
  return uVar1;
}

/* ref: FUN_00d69c80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d69c80(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(float param_6, float gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(float param_8, float gen_a7))
{
  GEN_ENTER(0xd69c80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(float param_6 = (float)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(float param_8 = (float)gen_a7;)
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP((param_1 + 0x28)));
  uVar2 = F_00d69a30(iVar1,(uint)*((ushort *)GEN_TOP((iVar1 + 2))),(uint)*((ushort *)GEN_TOP((iVar1 + 4))),param_2,
                       param_3,param_4,param_5,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x38))) + 0x24))),
                       *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x38))) + 0x30))),param_6,param_7,param_8);
  return uVar2;
}

/* ref: FUN_00d69ce0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d69ce0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(float param_8, float gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8), GEN_P(float param_10, float gen_a9))
{
  GEN_ENTER(0xd69ce0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(float param_8 = (float)gen_a7;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a8;)
  GEN_PIN(float param_10 = (float)gen_a9;)
  uint uVar1;
  
  uVar1 = F_00d69a30(*((undefined4 *)GEN_TOP((param_1 + 0x28))),param_2,param_3,param_4,param_5,param_6,
                       param_7,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x38))) + 0x24))),
                       *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x38))) + 0x30))),param_8,param_9,param_10);
  return uVar1;
}

/* ref: hkaQuantizedAnimation::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d69d30(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd69d30u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_TOP(0x3c, 4, 4);
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  uint uVar8;
  int iVar9;
  float * pfVar10;
  uint uVar11;
  uint uVar12;
  
  uVar8 = (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x28))) + 2)));
  uVar11 = (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x28))) + 4)));
  (*(uint *)(gen_frame + 0x28)) = uVar8;
  uVar12 = uVar11 + 3 & 0xfffffffc;
  uVar8 = uVar8 + 3 & 0xfffffffc;
  if (uVar8 == 0) {
    (*(uint *)(gen_frame + 0x2c)) = 0;
LAB_00d69d95: ;
    (*(uint *)(gen_frame + 0x0)) = 0x80000000;
  }
  else {
    (*(int *)(gen_frame + 0x20)) = uVar8 * 0x30;
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0xc))))(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0x20)));
    (*(uint *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x20)) / 0x30;
    (*(uint *)(gen_frame + 0x2c)) = uVar4;
    if ((*(uint *)(gen_frame + 0x0)) == 0) goto LAB_00d69d95;
  }
  if (uVar8 == 0) {
    (*(uint *)(gen_frame + 0x24)) = 0;
LAB_00d69de9: ;
    (*(int *)(gen_frame + 0x4)) = ((int)0x80000000);
  }
  else {
    (*(int *)(gen_frame + 0x1c)) = uVar8 * 4;
    uVar8 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0xc))))(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0x1c)));
    (*(int *)(gen_frame + 0x4)) = (int)((*(int *)(gen_frame + 0x1c)) + ((*(int *)(gen_frame + 0x1c)) >> 0x1f & 3U)) >> 2;
    (*(uint *)(gen_frame + 0x24)) = uVar8;
    if ((*(int *)(gen_frame + 0x4)) == 0) goto LAB_00d69de9;
  }
  uVar8 = (*(uint *)(gen_frame + 0x24));
  if (uVar12 == 0) {
    (*(uint *)(gen_frame + 0x30)) = 0;
LAB_00d69e31: ;
    (*(int *)(gen_frame + 0x8)) = ((int)0x80000000);
  }
  else {
    (*(int *)(gen_frame + 0x18)) = uVar12 * 4;
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0xc))))(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0x18)));
    (*(int *)(gen_frame + 0x8)) = (int)((*(int *)(gen_frame + 0x18)) + ((*(int *)(gen_frame + 0x18)) >> 0x1f & 3U)) >> 2;
    (*(uint *)(gen_frame + 0x30)) = uVar4;
    if ((*(int *)(gen_frame + 0x8)) == 0) goto LAB_00d69e31;
  }
  if (uVar12 == 0) {
    (*(uint *)(gen_frame + 0x34)) = 0;
  }
  else {
    (*(int *)(gen_frame + 0x14)) = uVar12 * 4;
    uVar12 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0xc))))(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0x14)));
    (*(int *)(gen_frame + 0xc)) = (int)((*(int *)(gen_frame + 0x14)) + ((*(int *)(gen_frame + 0x14)) >> 0x1f & 3U)) >> 2;
    (*(uint *)(gen_frame + 0x34)) = uVar12;
    if ((*(int *)(gen_frame + 0xc)) != 0) goto LAB_00d69e7c;
  }
  (*(int *)(gen_frame + 0xc)) = ((int)0x80000000);
LAB_00d69e7c: ;
  F_00d69ce0(param_1 GEN_EDX_ARG,(*(uint *)(gen_frame + 0x28)),uVar11,(*(uint *)(gen_frame + 0x2c)),(*(uint *)(gen_frame + 0x30)),uVar8,(*(uint *)(gen_frame + 0x34)),param_2,0,REFG(float, 0x10947f8));
  uVar4 = (*(uint *)(gen_frame + 0x30));
  uVar12 = 0;
  puVar7 = param_3;
  if (3 < (int)(*(uint *)(gen_frame + 0x28))) {
    param_2 = gen_bits2f(uVar8 + 8);
    puVar5 = ((undefined4 *)GEN_TOP(((*(uint *)(gen_frame + 0x2c)) + 0x50)));
    iVar9 = ((*(uint *)(gen_frame + 0x28)) - 4 >> 2) + 1;
    uVar12 = iVar9 * 4;
    do {
      puVar6 = puVar7;
      if (0.0 < *((float *)GEN_TOP(((int)gen_fl2bits(param_2) - 8)))) {
        uVar1 = puVar5[-0x13];
        uVar2 = puVar5[-0x12];
        uVar3 = puVar5[-0x11];
        *puVar7 = puVar5[-0x14];
        puVar7[1] = uVar1;
        puVar7[2] = uVar2;
        puVar7[3] = uVar3;
        uVar1 = puVar5[-0xf];
        uVar2 = puVar5[-0xe];
        uVar3 = puVar5[-0xd];
        puVar7[4] = puVar5[-0x10];
        puVar7[5] = uVar1;
        puVar7[6] = uVar2;
        puVar7[7] = uVar3;
        uVar1 = puVar5[-0xb];
        uVar2 = puVar5[-10];
        uVar3 = puVar5[-9];
        puVar6 = puVar7 + 0xc;
        puVar7[8] = puVar5[-0xc];
        puVar7[9] = uVar1;
        puVar7[10] = uVar2;
        puVar7[0xb] = uVar3;
      }
      puVar7 = puVar6;
      if (0.0 < *((float *)GEN_TOP(((int)gen_fl2bits(param_2) - 4)))) {
        uVar1 = puVar5[-7];
        uVar2 = puVar5[-6];
        uVar3 = puVar5[-5];
        *puVar6 = puVar5[-8];
        puVar6[1] = uVar1;
        puVar6[2] = uVar2;
        puVar6[3] = uVar3;
        uVar1 = puVar5[-3];
        uVar2 = puVar5[-2];
        uVar3 = puVar5[-1];
        puVar6[4] = puVar5[-4];
        puVar6[5] = uVar1;
        puVar6[6] = uVar2;
        puVar6[7] = uVar3;
        uVar1 = puVar5[1];
        uVar2 = puVar5[2];
        uVar3 = puVar5[3];
        puVar7 = puVar6 + 0xc;
        puVar6[8] = *puVar5;
        puVar6[9] = uVar1;
        puVar6[10] = uVar2;
        puVar6[0xb] = uVar3;
      }
      puVar6 = puVar7;
      if (0.0 < *((float *)(uintptr_t)gen_fl2bits((float)(param_2)))) {
        uVar1 = puVar5[5];
        uVar2 = puVar5[6];
        uVar3 = puVar5[7];
        *puVar7 = puVar5[4];
        puVar7[1] = uVar1;
        puVar7[2] = uVar2;
        puVar7[3] = uVar3;
        uVar1 = puVar5[9];
        uVar2 = puVar5[10];
        uVar3 = puVar5[0xb];
        puVar7[4] = puVar5[8];
        puVar7[5] = uVar1;
        puVar7[6] = uVar2;
        puVar7[7] = uVar3;
        uVar1 = puVar5[0xd];
        uVar2 = puVar5[0xe];
        uVar3 = puVar5[0xf];
        puVar6 = puVar7 + 0xc;
        puVar7[8] = puVar5[0xc];
        puVar7[9] = uVar1;
        puVar7[10] = uVar2;
        puVar7[0xb] = uVar3;
      }
      puVar7 = puVar6;
      if (0.0 < *((float *)GEN_TOP(((int)gen_fl2bits(param_2) + 4)))) {
        uVar1 = puVar5[0x11];
        uVar2 = puVar5[0x12];
        uVar3 = puVar5[0x13];
        *puVar6 = puVar5[0x10];
        puVar6[1] = uVar1;
        puVar6[2] = uVar2;
        puVar6[3] = uVar3;
        uVar1 = puVar5[0x15];
        uVar2 = puVar5[0x16];
        uVar3 = puVar5[0x17];
        puVar6[4] = puVar5[0x14];
        puVar6[5] = uVar1;
        puVar6[6] = uVar2;
        puVar6[7] = uVar3;
        uVar1 = puVar5[0x19];
        uVar2 = puVar5[0x1a];
        uVar3 = puVar5[0x1b];
        puVar7 = puVar6 + 0xc;
        puVar6[8] = puVar5[0x18];
        puVar6[9] = uVar1;
        puVar6[10] = uVar2;
        puVar6[0xb] = uVar3;
      }
      param_2 = gen_bits2f((int)gen_fl2bits(param_2) + 0x10);
      puVar5 = puVar5 + 0x30;
      iVar9 = iVar9 - 1;
    } while (iVar9 != 0);
  }
  if (uVar12 < (*(uint *)(gen_frame + 0x28))) {
    puVar5 = ((undefined4 *)GEN_TOP(((*(uint *)(gen_frame + 0x2c)) + 0x20 + uVar12 * 0x30)));
    do {
      if (0.0 < *((float *)GEN_TOP(((*(uint *)(gen_frame + 0x24)) + uVar12 * 4)))) {
        uVar1 = puVar5[-7];
        uVar2 = puVar5[-6];
        uVar3 = puVar5[-5];
        *puVar7 = puVar5[-8];
        puVar7[1] = uVar1;
        puVar7[2] = uVar2;
        puVar7[3] = uVar3;
        uVar1 = puVar5[-3];
        uVar2 = puVar5[-2];
        uVar3 = puVar5[-1];
        puVar7[4] = puVar5[-4];
        puVar7[5] = uVar1;
        puVar7[6] = uVar2;
        puVar7[7] = uVar3;
        uVar1 = puVar5[1];
        uVar2 = puVar5[2];
        uVar3 = puVar5[3];
        puVar7[8] = *puVar5;
        puVar7[9] = uVar1;
        puVar7[10] = uVar2;
        puVar7[0xb] = uVar3;
        puVar7 = puVar7 + 0xc;
      }
      uVar12 = uVar12 + 1;
      puVar5 = puVar5 + 0xc;
    } while (uVar12 < (*(uint *)(gen_frame + 0x28)));
  }
  param_3 = ((undefined4 *)GEN_TOP(0x0));
  puVar7 = param_4;
  if (3 < uVar11) {
    puVar5 = ((undefined4 *)GEN_TOP(((*(uint *)(gen_frame + 0x30)) + 4)));
    pfVar10 = ((float *)GEN_TOP(((*(uint *)(gen_frame + 0x34)) + 0xc)));
    iVar9 = (uVar11 - 4 >> 2) + 1;
    param_3 = ((undefined4 *)GEN_TOP((iVar9 * 4)));
    do {
      puVar6 = puVar7;
      if (0.0 < pfVar10[-3]) {
        puVar6 = puVar7 + 1;
        *puVar7 = puVar5[-1];
      }
      puVar7 = puVar6;
      if (0.0 < *((float *)GEN_TOP((((*(uint *)(gen_frame + 0x34)) - (*(uint *)(gen_frame + 0x30))) + (int)puVar5)))) {
        puVar7 = puVar6 + 1;
        *puVar6 = *puVar5;
      }
      puVar6 = puVar7;
      if (0.0 < pfVar10[-1]) {
        puVar6 = puVar7 + 1;
        *puVar7 = puVar5[1];
      }
      puVar7 = puVar6;
      if (0.0 < *pfVar10) {
        puVar7 = puVar6 + 1;
        *puVar6 = puVar5[2];
      }
      pfVar10 = pfVar10 + 4;
      puVar5 = puVar5 + 4;
      iVar9 = iVar9 - 1;
    } while (iVar9 != 0);
  }
  if (param_3 < uVar11) {
    iVar9 = uVar11 - (int)param_3;
    puVar5 = ((undefined4 *)GEN_TOP(((*(uint *)(gen_frame + 0x30)) + (int)((int)(uintptr_t)param_3) * 4)));
    do {
      puVar6 = puVar7;
      if (0.0 < *((float *)GEN_TOP(((int)puVar5 + ((*(uint *)(gen_frame + 0x34)) - (*(uint *)(gen_frame + 0x30))))))) {
        puVar6 = puVar7 + 1;
        *puVar7 = *puVar5;
      }
      puVar5 = puVar5 + 1;
      iVar9 = iVar9 - 1;
      puVar7 = puVar6;
    } while (iVar9 != 0);
  }
  if (-1 < (*(int *)(gen_frame + 0xc))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(uint *)(gen_frame + 0x34)),(*(int *)(gen_frame + 0xc)) * 4);
  }
  if (-1 < (*(int *)(gen_frame + 0x8))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),uVar4,(*(int *)(gen_frame + 0x8)) * 4);
  }
  if (-1 < (*(int *)(gen_frame + 0x4))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(uint *)(gen_frame + 0x24)),(*(int *)(gen_frame + 0x4)) * 4);
  }
  uVar8 = (*(uint *)(gen_frame + 0x0));
  if (-1 < (int)(*(uint *)(gen_frame + 0x0))) {
    uVar8 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),(*(uint *)(gen_frame + 0x2c)),((*(uint *)(gen_frame + 0x0)) & 0x3fffffff) * 0x30);
  }
  return uVar8;
}

/* ref: hkaQuantizedAnimation::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d6a160(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(uint param_5, unsigned int gen_a4), GEN_P(undefined4 * param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xd6a160u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(uint param_5 = (uint)gen_a4;)
  GEN_PIN(undefined4 * param_6 = (undefined4 *)(uintptr_t)gen_a5;)
  GEN_FRAME_DECL_TOP(0x3c, 4, 4);
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  uint uVar8;
  float * pfVar9;
  uint uVar10;
  
  uVar8 = (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x28))) + 2)));
  uVar10 = (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x28))) + 4)));
  (*(uint *)(gen_frame + 0x28)) = uVar10;
  (*(uint *)(gen_frame + 0x2c)) = uVar8;
  uVar10 = uVar10 + 3 & 0xfffffffc;
  uVar8 = uVar8 + 3 & 0xfffffffc;
  if (uVar8 == 0) {
    (*(uint *)(gen_frame + 0x24)) = 0;
LAB_00d6a1c5: ;
    (*(uint *)(gen_frame + 0x0)) = 0x80000000;
  }
  else {
    (*(int *)(gen_frame + 0x1c)) = uVar8 * 0x30;
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0xc))))(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0x1c)));
    (*(uint *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x1c)) / 0x30;
    (*(uint *)(gen_frame + 0x24)) = uVar4;
    if ((*(uint *)(gen_frame + 0x0)) == 0) goto LAB_00d6a1c5;
  }
  if (uVar8 == 0) {
    (*(uint *)(gen_frame + 0x20)) = 0;
LAB_00d6a219: ;
    (*(int *)(gen_frame + 0x4)) = ((int)0x80000000);
  }
  else {
    (*(int *)(gen_frame + 0x18)) = uVar8 * 4;
    uVar8 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0xc))))(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0x18)));
    (*(int *)(gen_frame + 0x4)) = (int)((*(int *)(gen_frame + 0x18)) + ((*(int *)(gen_frame + 0x18)) >> 0x1f & 3U)) >> 2;
    (*(uint *)(gen_frame + 0x20)) = uVar8;
    if ((*(int *)(gen_frame + 0x4)) == 0) goto LAB_00d6a219;
  }
  uVar8 = (*(uint *)(gen_frame + 0x20));
  if (uVar10 == 0) {
    (*(uint *)(gen_frame + 0x34)) = 0;
LAB_00d6a261: ;
    (*(int *)(gen_frame + 0x8)) = ((int)0x80000000);
  }
  else {
    (*(int *)(gen_frame + 0x14)) = uVar10 * 4;
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0xc))))(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0x14)));
    (*(int *)(gen_frame + 0x8)) = (int)((*(int *)(gen_frame + 0x14)) + ((*(int *)(gen_frame + 0x14)) >> 0x1f & 3U)) >> 2;
    (*(uint *)(gen_frame + 0x34)) = uVar4;
    if ((*(int *)(gen_frame + 0x8)) == 0) goto LAB_00d6a261;
  }
  if (uVar10 == 0) {
    (*(uint *)(gen_frame + 0x30)) = 0;
  }
  else {
    (*(int *)(gen_frame + 0x10)) = uVar10 * 4;
    uVar10 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0xc))))(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0x10)));
    (*(int *)(gen_frame + 0xc)) = (int)((*(int *)(gen_frame + 0x10)) + ((*(int *)(gen_frame + 0x10)) >> 0x1f & 3U)) >> 2;
    (*(uint *)(gen_frame + 0x30)) = uVar10;
    if ((*(int *)(gen_frame + 0xc)) != 0) goto LAB_00d6a2ac;
  }
  (*(int *)(gen_frame + 0xc)) = ((int)0x80000000);
LAB_00d6a2ac: ;
  F_00d69ce0(param_1 GEN_EDX_ARG,(*(uint *)(gen_frame + 0x2c)),(*(uint *)(gen_frame + 0x28)),(*(uint *)(gen_frame + 0x24)),(*(uint *)(gen_frame + 0x34)),uVar8,(*(uint *)(gen_frame + 0x30)),param_2,0,REFG(float, 0x10947f8));
  uVar4 = 0;
  uVar10 = 0;
  puVar7 = param_4;
  if (3 < (int)(*(uint *)(gen_frame + 0x2c))) {
    param_2 = gen_bits2f(uVar8 + 8);
    puVar5 = ((undefined4 *)GEN_TOP(((*(uint *)(gen_frame + 0x24)) + 0x50)));
    do {
      if (param_3 <= uVar10) goto LAB_00d6a437;
      puVar6 = puVar7;
      if (0.0 < *((float *)GEN_TOP(((int)gen_fl2bits(param_2) - 8)))) {
        uVar1 = puVar5[-0x13];
        uVar2 = puVar5[-0x12];
        uVar3 = puVar5[-0x11];
        *puVar7 = puVar5[-0x14];
        puVar7[1] = uVar1;
        puVar7[2] = uVar2;
        puVar7[3] = uVar3;
        uVar1 = puVar5[-0xf];
        uVar2 = puVar5[-0xe];
        uVar3 = puVar5[-0xd];
        puVar7[4] = puVar5[-0x10];
        puVar7[5] = uVar1;
        puVar7[6] = uVar2;
        puVar7[7] = uVar3;
        uVar1 = puVar5[-0xb];
        uVar2 = puVar5[-10];
        uVar3 = puVar5[-9];
        puVar6 = puVar7 + 0xc;
        puVar7[8] = puVar5[-0xc];
        puVar7[9] = uVar1;
        puVar7[10] = uVar2;
        puVar7[0xb] = uVar3;
        uVar10 = uVar10 + 1;
      }
      if (param_3 <= uVar10) goto LAB_00d6a437;
      puVar7 = puVar6;
      if (0.0 < *((float *)GEN_TOP(((int)gen_fl2bits(param_2) - 4)))) {
        uVar1 = puVar5[-7];
        uVar2 = puVar5[-6];
        uVar3 = puVar5[-5];
        *puVar6 = puVar5[-8];
        puVar6[1] = uVar1;
        puVar6[2] = uVar2;
        puVar6[3] = uVar3;
        uVar1 = puVar5[-3];
        uVar2 = puVar5[-2];
        uVar3 = puVar5[-1];
        puVar6[4] = puVar5[-4];
        puVar6[5] = uVar1;
        puVar6[6] = uVar2;
        puVar6[7] = uVar3;
        uVar1 = puVar5[1];
        uVar2 = puVar5[2];
        uVar3 = puVar5[3];
        puVar7 = puVar6 + 0xc;
        puVar6[8] = *puVar5;
        puVar6[9] = uVar1;
        puVar6[10] = uVar2;
        puVar6[0xb] = uVar3;
        uVar10 = uVar10 + 1;
      }
      if (param_3 <= uVar10) goto LAB_00d6a437;
      puVar6 = puVar7;
      if (0.0 < *((float *)(uintptr_t)gen_fl2bits((float)(param_2)))) {
        uVar1 = puVar5[5];
        uVar2 = puVar5[6];
        uVar3 = puVar5[7];
        *puVar7 = puVar5[4];
        puVar7[1] = uVar1;
        puVar7[2] = uVar2;
        puVar7[3] = uVar3;
        uVar1 = puVar5[9];
        uVar2 = puVar5[10];
        uVar3 = puVar5[0xb];
        puVar7[4] = puVar5[8];
        puVar7[5] = uVar1;
        puVar7[6] = uVar2;
        puVar7[7] = uVar3;
        uVar1 = puVar5[0xd];
        uVar2 = puVar5[0xe];
        uVar3 = puVar5[0xf];
        puVar6 = puVar7 + 0xc;
        puVar7[8] = puVar5[0xc];
        puVar7[9] = uVar1;
        puVar7[10] = uVar2;
        puVar7[0xb] = uVar3;
        uVar10 = uVar10 + 1;
      }
      if (param_3 <= uVar10) goto LAB_00d6a437;
      puVar7 = puVar6;
      if (0.0 < *((float *)GEN_TOP(((int)gen_fl2bits(param_2) + 4)))) {
        uVar1 = puVar5[0x11];
        uVar2 = puVar5[0x12];
        uVar3 = puVar5[0x13];
        *puVar6 = puVar5[0x10];
        puVar6[1] = uVar1;
        puVar6[2] = uVar2;
        puVar6[3] = uVar3;
        uVar1 = puVar5[0x15];
        uVar2 = puVar5[0x16];
        uVar3 = puVar5[0x17];
        puVar6[4] = puVar5[0x14];
        puVar6[5] = uVar1;
        puVar6[6] = uVar2;
        puVar6[7] = uVar3;
        uVar1 = puVar5[0x19];
        uVar2 = puVar5[0x1a];
        uVar3 = puVar5[0x1b];
        puVar7 = puVar6 + 0xc;
        puVar6[8] = puVar5[0x18];
        puVar6[9] = uVar1;
        puVar6[10] = uVar2;
        puVar6[0xb] = uVar3;
        uVar10 = uVar10 + 1;
      }
      param_2 = gen_bits2f((int)gen_fl2bits(param_2) + 0x10);
      uVar4 = uVar4 + 4;
      puVar5 = puVar5 + 0x30;
    } while (uVar4 < (*(uint *)(gen_frame + 0x2c)) - 3);
  }
  if (uVar4 < (*(uint *)(gen_frame + 0x2c))) {
    puVar5 = ((undefined4 *)GEN_TOP(((*(uint *)(gen_frame + 0x24)) + 0x20 + uVar4 * 0x30)));
    do {
      if (param_3 <= uVar10) break;
      puVar6 = puVar7;
      if (0.0 < *((float *)GEN_TOP(((*(uint *)(gen_frame + 0x20)) + uVar4 * 4)))) {
        uVar1 = puVar5[-7];
        uVar2 = puVar5[-6];
        uVar3 = puVar5[-5];
        *puVar7 = puVar5[-8];
        puVar7[1] = uVar1;
        puVar7[2] = uVar2;
        puVar7[3] = uVar3;
        uVar1 = puVar5[-3];
        uVar2 = puVar5[-2];
        uVar3 = puVar5[-1];
        puVar7[4] = puVar5[-4];
        puVar7[5] = uVar1;
        puVar7[6] = uVar2;
        puVar7[7] = uVar3;
        uVar1 = puVar5[1];
        uVar2 = puVar5[2];
        uVar3 = puVar5[3];
        puVar6 = puVar7 + 0xc;
        puVar7[8] = *puVar5;
        puVar7[9] = uVar1;
        puVar7[10] = uVar2;
        puVar7[0xb] = uVar3;
        uVar10 = uVar10 + 1;
      }
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 0xc;
      puVar7 = puVar6;
    } while (uVar4 < (*(uint *)(gen_frame + 0x2c)));
  }
LAB_00d6a437: ;
  uVar8 = 0;
  param_3 = 0;
  puVar7 = param_6;
  if (3 < (int)(*(uint *)(gen_frame + 0x28))) {
    pfVar9 = ((float *)GEN_TOP(((*(uint *)(gen_frame + 0x30)) + 0xc)));
    puVar5 = ((undefined4 *)GEN_TOP(((*(uint *)(gen_frame + 0x34)) + 4)));
    do {
      if (param_5 <= uVar8) goto LAB_00d6a554;
      puVar6 = puVar7;
      if (0.0 < pfVar9[-3]) {
        puVar6 = puVar7 + 1;
        *puVar7 = puVar5[-1];
        uVar8 = uVar8 + 1;
      }
      if (param_5 <= uVar8) goto LAB_00d6a554;
      puVar7 = puVar6;
      if (0.0 < *((float *)GEN_TOP((((*(uint *)(gen_frame + 0x30)) - (*(uint *)(gen_frame + 0x34))) + (int)puVar5)))) {
        puVar7 = puVar6 + 1;
        *puVar6 = *puVar5;
        uVar8 = uVar8 + 1;
      }
      if (param_5 <= uVar8) goto LAB_00d6a554;
      puVar6 = puVar7;
      if (0.0 < pfVar9[-1]) {
        puVar6 = puVar7 + 1;
        *puVar7 = puVar5[1];
        uVar8 = uVar8 + 1;
      }
      if (param_5 <= uVar8) goto LAB_00d6a554;
      puVar7 = puVar6;
      if (0.0 < *pfVar9) {
        puVar7 = puVar6 + 1;
        *puVar6 = puVar5[2];
        uVar8 = uVar8 + 1;
      }
      param_3 = param_3 + 4;
      puVar5 = puVar5 + 4;
      pfVar9 = pfVar9 + 4;
    } while (param_3 < (*(uint *)(gen_frame + 0x28)) - 3);
  }
  if (param_3 < (*(uint *)(gen_frame + 0x28))) {
    puVar5 = ((undefined4 *)GEN_TOP(((*(uint *)(gen_frame + 0x34)) + param_3 * 4)));
    uVar10 = param_3;
    do {
      if (param_5 <= uVar8) break;
      puVar6 = puVar7;
      if (0.0 < *((float *)GEN_TOP(((int)puVar5 + ((*(uint *)(gen_frame + 0x30)) - (*(uint *)(gen_frame + 0x34))))))) {
        puVar6 = puVar7 + 1;
        *puVar7 = *puVar5;
        uVar8 = uVar8 + 1;
      }
      uVar10 = uVar10 + 1;
      puVar5 = puVar5 + 1;
      puVar7 = puVar6;
    } while (uVar10 < (*(uint *)(gen_frame + 0x28)));
  }
LAB_00d6a554: ;
  if (-1 < (*(int *)(gen_frame + 0xc))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(uint *)(gen_frame + 0x30)),(*(int *)(gen_frame + 0xc)) * 4);
  }
  if (-1 < (*(int *)(gen_frame + 0x8))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(uint *)(gen_frame + 0x34)),(*(int *)(gen_frame + 0x8)) * 4);
  }
  if (-1 < (*(int *)(gen_frame + 0x4))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(uint *)(gen_frame + 0x20)),(*(int *)(gen_frame + 0x4)) * 4);
  }
  uVar8 = (*(uint *)(gen_frame + 0x0));
  if (-1 < (int)(*(uint *)(gen_frame + 0x0))) {
    uVar8 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),(*(uint *)(gen_frame + 0x24)),((*(uint *)(gen_frame + 0x0)) & 0x3fffffff) * 0x30);
  }
  return uVar8;
}

/* ref: FUN_00d6a610 */
GEN_LIB GEN_FRAME uint F_00d6a610(void)
{
  GEN_ENTER(0xd6a610u, 0u, 0u, 0u, 0u);
  undefined4 * puVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  LPVOID pvVar4;
  
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar3 + 4)));
  pvVar4 = pvVar3;
  if (puVar1 < *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar3 + 0xc)))) {
    *puVar1 = &REFG(undefined, 0x1136cb0);
    uVar2 = rdtsc();
    pvVar4 = (LPVOID)uVar2;
    puVar1[1] = pvVar4;
    *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar3 + 4))) = puVar1 + 3;
  }
  return (uint)pvVar4;
}

/* ref: FUN_00d6a650 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d6a650(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd6a650u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *in_ecx = param_2;
  in_ecx[1] = 0x3c;
  return param_2;
}

/* ref: FUN_00d6a670 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d6a670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd6a670u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(uint *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  return param_1;
}

/* ref: hkaInterleavedUncompressedAnimation::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d6a690(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd6a690u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))
                    (param_1 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),param_1[4],param_3,param_1[5],param_4)
  ;
  return uVar1;
}

/* ref: hkaInterleavedUncompressedAnimation::vf8 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d6a6c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd6a6c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = 1;
  if (0 < *((int *)GEN_TOP((in_ecx + 0x10)))) {
    uVar1 = 2;
  }
  if (0 < *((int *)GEN_TOP((in_ecx + 0x14)))) {
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}

/* ref: hkaInterleavedUncompressedAnimation::vf10 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d6a6e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd6a6e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  return (*(int *)(this + 0x14) * 8 + 0x1fU & 0xfffffff0) + 0x40 + *(int *)(this + 0x10) * 0x60;
}

/* ref: FUN_00d6a730 */
GEN_LIB GEN_FRAME float F_00d6a730(GEN_P(float in_xmm0, float gen_a0), GEN_P(float in_xmm1, float gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xd6a730u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  GEN_PIN(float in_xmm0 = (float)gen_a0;)
  GEN_PIN(float in_xmm1 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  if ((!(in_xmm1 < in_xmm0)) && (in_xmm0 = param_3, !(param_3 < in_xmm1))) {
    in_xmm0 = in_xmm1;
  }
  return in_xmm0;
}

/* ref: hkaInterleavedUncompressedAnimation::vf7 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d6a750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd6a750u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(int *)(this + 0x10) != 0) {
    return *(int *)(this + 0x2c) / *(int *)(this + 0x10);
  }
  return *(int *)(this + 0x38) / *(int *)(this + 0x14);
}

/* ref: hkaInterleavedUncompressedAnimation::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d6a770(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xd6a770u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  int iVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  float * pfVar6;
  float10 fVar7;
  float10 fVar8;
  float fVar9;
  float fVar10;
  
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x1c))))(param_1 GEN_EDX_FWD);
  fVar7 = (float10)(int)(uVar4 - 1);
  if ((int)(uVar4 - 1) < 0) {
    fVar7 = GEN_X87(fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110));
  }
  fVar7 = GEN_X87(fVar7 * ((float10)param_2 / ((float10)GEN_TOD(gen_bits2f(param_1[3])))));
  (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x4)) + 0)) = gen_x87_cw | 0xc00;
  uVar4 = uVar4 - 2;
  gen_set_x87_cw((unsigned short)(ushort)(*(int *)(gen_frame + 0x4)));
  (*(uint *)(gen_frame + 0x0)) = (uint)(longlong)TRUNC(fVar7);
  (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0x0));
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  if ((*(uint *)(gen_frame + 0x0)) <= uVar4) {
    fVar8 = (float10)(int)(*(uint *)(gen_frame + 0x0));
    if ((int)(*(uint *)(gen_frame + 0x0)) < 0) {
      fVar8 = GEN_X87(fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110));
    }
    fVar7 = GEN_X87(fVar7 - fVar8);
    fVar9 = (float)fVar7;
    if (fVar7 < (float10)0) {
      fVar9 = 0.0;
      goto LAB_00d6a804;
    }
    uVar4 = (*(uint *)(gen_frame + 0x0));
    if (!(REFG(float, 0x1087f04) < fVar9)) goto LAB_00d6a804;
  }
  fVar9 = REFG(float, 0x1087f04);
  (*(uint *)(gen_frame + 0xc)) = uVar4;
LAB_00d6a804: ;
  fVar10 = REFG(float, 0x1087f04) - fVar9;
  (*(uint *)(gen_frame + 0x8)) = 0;
  uVar4 = (*(uint *)(gen_frame + 0x8));
  if (3 < (int)param_4) {
    (*(int *)(gen_frame + 0x4)) = (param_4 - 4 >> 2) + 1;
    param_2 = gen_bits2f(param_3 + 4);
    pfVar6 = ((float *)GEN_TOP((param_5 + 8)));
    uVar4 = (*(int *)(gen_frame + 0x4)) * 4;
    do {
      if (-1 < *((short *)GEN_TOP(((int)gen_fl2bits(param_2) - 4)))) {
        iVar3 = param_1[5];
        iVar5 = (int)*((short *)GEN_TOP(((int)gen_fl2bits(param_2) - 4)));
        if (iVar5 < iVar3) {
          iVar1 = param_1[0xd] + iVar3 * (*(uint *)(gen_frame + 0xc)) * 4;
          pfVar6[-2] = *((float *)GEN_TOP((iVar1 + (iVar3 + iVar5) * 4))) * fVar9 +
                       *((float *)GEN_TOP((iVar1 + iVar5 * 4))) * fVar10;
        }
      }
      if (-1 < *((short *)GEN_TOP(((int)gen_fl2bits(param_2) - 2)))) {
        iVar3 = param_1[5];
        iVar5 = (int)*((short *)GEN_TOP(((int)gen_fl2bits(param_2) - 2)));
        if (iVar5 < iVar3) {
          iVar1 = param_1[0xd] + iVar3 * (*(uint *)(gen_frame + 0xc)) * 4;
          pfVar6[-1] = *((float *)GEN_TOP((iVar1 + (iVar3 + iVar5) * 4))) * fVar9 +
                       *((float *)GEN_TOP((iVar1 + iVar5 * 4))) * fVar10;
        }
      }
      if (-1 < *((short *)(uintptr_t)gen_fl2bits((float)(param_2)))) {
        iVar3 = param_1[5];
        iVar5 = (int)*((short *)(uintptr_t)gen_fl2bits((float)(param_2)));
        if (iVar5 < iVar3) {
          iVar1 = param_1[0xd] + iVar3 * (*(uint *)(gen_frame + 0xc)) * 4;
          *pfVar6 = *((float *)GEN_TOP((iVar1 + (iVar3 + iVar5) * 4))) * fVar9 +
                    *((float *)GEN_TOP((iVar1 + iVar5 * 4))) * fVar10;
        }
      }
      if (-1 < *((short *)GEN_TOP(((int)gen_fl2bits(param_2) + 2)))) {
        iVar3 = param_1[5];
        iVar5 = (int)*((short *)GEN_TOP(((int)gen_fl2bits(param_2) + 2)));
        if (iVar5 < iVar3) {
          iVar1 = param_1[0xd] + iVar3 * (*(uint *)(gen_frame + 0xc)) * 4;
          pfVar6[1] = *((float *)GEN_TOP((iVar1 + (iVar3 + iVar5) * 4))) * fVar9 +
                      *((float *)GEN_TOP((iVar1 + iVar5 * 4))) * fVar10;
        }
      }
      param_2 = gen_bits2f((int)gen_fl2bits(param_2) + 8);
      pfVar6 = pfVar6 + 4;
      (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) - 1;
    } while ((*(int *)(gen_frame + 0x4)) != 0);
  }
  for (; uVar4 < param_4; uVar4 = uVar4 + 1) {
    sVar2 = *((short *)GEN_TOP((param_3 + uVar4 * 2)));
    if (-1 < sVar2) {
      iVar3 = param_1[5];
      iVar5 = (int)sVar2;
      if (iVar5 < iVar3) {
        iVar1 = param_1[0xd] + iVar3 * (*(uint *)(gen_frame + 0xc)) * 4;
        *((float *)GEN_TOP((param_5 + uVar4 * 4))) =
             *((float *)GEN_TOP((iVar1 + (iVar3 + iVar5) * 4))) * fVar9 +
             *((float *)GEN_TOP((iVar1 + iVar5 * 4))) * fVar10;
      }
    }
  }
  return 0;
}

/* ref: hkaInterleavedUncompressedAnimation::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d6a9c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xd6a9c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  *param_3 = this;
  param_3[1] = 0x40;
  iVar1 = *(int *)(this + 0x10);
  iVar4 = 1;
  if (0 < iVar1) {
    param_3[2] = iVar1 * param_1 * 0x30 + *(int *)(this + 0x28);
    param_3[3] = iVar1 * 0x60;
    iVar4 = 2;
  }
  uVar2 = *(uint *)(this + 0x14);
  uVar3 = uVar2;
  if (0 < (int)uVar2) {
    uVar3 = *(int *)(this + 0x34) + uVar2 * param_1 * 4;
    param_3[iVar4 * 2] = uVar3;
    param_3[iVar4 * 2 + 1] = uVar2 << 3;
  }
  return uVar3;
}

/* ref: hkaInterleavedUncompressedAnimation::vf5 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d6abf0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xd6abf0u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  short sVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  float * pfVar15;
  float10 fVar16;
  float10 fVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar36;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  uint local_20;
  ushort uStack_1c;
  uint local_14;
  
  uVar10 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x1c))))(param_1 GEN_EDX_FWD);
  fVar16 = (float10)(int)(uVar10 - 1);
  if ((int)(uVar10 - 1) < 0) {
    fVar16 = GEN_X87(fVar16 + (float10)*(float *)&REFG(undefined, 0x1088110));
  }
  fVar16 = GEN_X87(fVar16 * ((float10)param_2 / ((float10)GEN_TOD(gen_bits2f(param_1[3])))));
  uStack_1c = gen_x87_cw | 0xc00;
  gen_set_x87_cw((unsigned short)uStack_1c);
  local_20 = (uint)(longlong)TRUNC(fVar16);
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  local_14 = local_20;
  fVar36 = REFG(float, 0x1087f04);
  uVar18 = uVar10 - 2;
  if (local_20 <= uVar10 - 2) {
    fVar17 = (float10)(int)local_20;
    if ((int)local_20 < 0) {
      fVar17 = GEN_X87(fVar17 + (float10)*(float *)&REFG(undefined, 0x1088110));
    }
    fVar16 = GEN_X87(fVar16 - fVar17);
    fVar22 = (float)fVar16;
    uVar18 = local_14;
    if (fVar16 < (float10)0) {
      fVar36 = 0.0;
    }
    else {
      fVar36 = REFG(float, 0x1087f04);
      if (!(REFG(float, 0x1087f04) < fVar22)) {
        fVar36 = fVar22;
      }
    }
  }
  local_14 = uVar18;
  uVar10 = 0;
  if (param_4 != 0) {
    pfVar15 = ((float *)GEN_TOP((param_5 + 0x10)));
    do {
      sVar9 = *((short *)GEN_TOP((param_3 + uVar10 * 2)));
      if (-1 < sVar9) {
        iVar12 = param_1[4];
        iVar14 = (int)sVar9;
        if (iVar14 < iVar12) {
          iVar13 = iVar12 * local_14 * 0x30 + param_1[10];
          iVar11 = iVar14 * 0x30;
          uVar1 = *((undefined8 *)GEN_TOP((iVar11 + iVar13)));
          uVar2 = *((undefined8 *)GEN_TOP((iVar11 + 8 + iVar13)));
          uVar3 = *((undefined8 *)GEN_TOP((iVar11 + 0x10 + iVar13)));
          uVar4 = *((undefined8 *)GEN_TOP((iVar11 + 0x18 + iVar13)));
          uVar5 = *((undefined8 *)GEN_TOP((iVar11 + iVar13 + 0x20)));
          uVar6 = *((undefined8 *)GEN_TOP((iVar11 + iVar13 + 0x28)));
          local_40 = gen_bits2f((uint)uVar3);
          fStack_3c = gen_bits2f((uint)((ulonglong)uVar3 >> 0x20));
          fStack_38 = gen_bits2f((uint)uVar4);
          fStack_34 = gen_bits2f((uint)((ulonglong)uVar4 >> 0x20));
          iVar12 = (iVar12 + iVar14) * 0x30;
          uVar3 = *((undefined8 *)GEN_TOP((iVar12 + iVar13)));
          uVar4 = *((undefined8 *)GEN_TOP((iVar12 + 8 + iVar13)));
          uVar7 = *((undefined8 *)GEN_TOP((iVar12 + 0x10 + iVar13)));
          iVar12 = iVar12 + iVar13;
          uVar8 = *((undefined8 *)GEN_TOP((iVar12 + 0x18)));
          local_60 = gen_bits2f((uint)*((undefined8 *)GEN_TOP((iVar12 + 0x20))));
          fStack_5c = gen_bits2f((uint)((ulonglong)*((undefined8 *)GEN_TOP((iVar12 + 0x20))) >> 0x20));
          fStack_58 = gen_bits2f((uint)*((undefined8 *)GEN_TOP((iVar12 + 0x28))));
          fStack_54 = gen_bits2f((uint)((ulonglong)*((undefined8 *)GEN_TOP((iVar12 + 0x28))) >> 0x20));
          local_30 = gen_bits2f((uint)uVar5);
          fStack_2c = gen_bits2f((uint)((ulonglong)uVar5 >> 0x20));
          fStack_28 = gen_bits2f((uint)uVar6);
          fStack_24 = gen_bits2f((uint)((ulonglong)uVar6 >> 0x20));
          pfVar15[4] = (local_60 - local_30) * fVar36 + local_30;
          pfVar15[5] = (fStack_5c - fStack_2c) * fVar36 + fStack_2c;
          pfVar15[6] = (fStack_58 - fStack_28) * fVar36 + fStack_28;
          pfVar15[7] = (fStack_54 - fStack_24) * fVar36 + fStack_24;
          local_80 = gen_bits2f((uint)uVar3);
          fStack_7c = gen_bits2f((uint)((ulonglong)uVar3 >> 0x20));
          fStack_78 = gen_bits2f((uint)uVar4);
          fStack_74 = gen_bits2f((uint)((ulonglong)uVar4 >> 0x20));
          local_50 = gen_bits2f((uint)uVar1);
          fStack_4c = gen_bits2f((uint)((ulonglong)uVar1 >> 0x20));
          fStack_48 = gen_bits2f((uint)uVar2);
          fStack_44 = gen_bits2f((uint)((ulonglong)uVar2 >> 0x20));
          pfVar15[-4] = (local_80 - local_50) * fVar36 + local_50;
          pfVar15[-3] = (fStack_7c - fStack_4c) * fVar36 + fStack_4c;
          pfVar15[-2] = (fStack_78 - fStack_48) * fVar36 + fStack_48;
          pfVar15[-1] = (fStack_74 - fStack_44) * fVar36 + fStack_44;
          local_70 = gen_bits2f((uint)uVar7);
          fStack_6c = gen_bits2f((uint)((ulonglong)uVar7 >> 0x20));
          fStack_68 = gen_bits2f((uint)uVar8);
          fStack_64 = gen_bits2f((uint)((ulonglong)uVar8 >> 0x20));
          (*(float *)((char *)&auVar34 + 0)) = fStack_38 * fStack_68 + local_40 * local_70;
          (*(float *)((char *)&auVar34 + 4)) = fStack_34 * fStack_64 + fStack_3c * fStack_6c;
          (*(float *)((char *)&auVar34 + 8)) = local_40 * local_70 + fStack_38 * fStack_68;
          (*(float *)((char *)&auVar34 + 12)) = fStack_3c * fStack_6c + fStack_34 * fStack_64;
          uVar18 = -(uint)((*(float *)((char *)&auVar34 + 4)) + (*(float *)((char *)&auVar34 + 0)) < 0.0);
          uVar19 = -(uint)((*(float *)((char *)&auVar34 + 0)) + (*(float *)((char *)&auVar34 + 4)) < 0.0);
          uVar20 = -(uint)((*(float *)((char *)&auVar34 + 12)) + (*(float *)((char *)&auVar34 + 8)) < 0.0);
          uVar21 = -(uint)((*(float *)((char *)&auVar34 + 8)) + (*(float *)((char *)&auVar34 + 12)) < 0.0);
          fVar22 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar36) & uVar18 |
                              ~uVar18 & (uint)gen_fl2bits(fVar36)) * local_70 +
                   (*(float *)&REFG(undefined, 0x1138af0) - fVar36) * local_40;
          fVar23 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar36) & uVar19 |
                              ~uVar19 & (uint)gen_fl2bits(fVar36)) * fStack_6c +
                   (*(float *)&REFG(undefined, 0x1138af4) - fVar36) * fStack_3c;
          fVar24 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar36) & uVar20 |
                              ~uVar20 & (uint)gen_fl2bits(fVar36)) * fStack_68 +
                   (*(float *)&REFG(undefined, 0x1138af8) - fVar36) * fStack_38;
          fVar25 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar36) & uVar21 |
                              ~uVar21 & (uint)gen_fl2bits(fVar36)) * fStack_64 +
                   (*(float *)&REFG(undefined, 0x1138afc) - fVar36) * fStack_34;
          fVar26 = fVar24 * fVar24 + fVar22 * fVar22;
          fVar27 = fVar25 * fVar25 + fVar23 * fVar23;
          fVar28 = fVar22 * fVar22 + fVar24 * fVar24;
          fVar29 = fVar23 * fVar23 + fVar25 * fVar25;
          fVar30 = fVar27 + fVar26;
          fVar26 = fVar26 + fVar27;
          fVar27 = fVar29 + fVar28;
          fVar28 = fVar28 + fVar29;
          (*(undefined4 *)((char *)&auVar35 + 4)) = (undefined4)gen_fl2bits(fVar26);
          (*(undefined4 *)((char *)&auVar35 + 0)) = (undefined4)gen_fl2bits(fVar30);
          (*(undefined4 *)((char *)&auVar35 + 8)) = (undefined4)gen_fl2bits(fVar27);
          (*(undefined4 *)((char *)&auVar35 + 12)) = (undefined4)gen_fl2bits(fVar28);
          gen_rsqrtps(&(auVar35), &(auVar34), &(auVar35));
          fVar33 = (*(float *)((char *)&auVar35 + 0));
          fVar29 = (*(float *)((char *)&auVar35 + 4));
          fVar31 = (*(float *)((char *)&auVar35 + 8));
          fVar32 = (*(float *)((char *)&auVar35 + 12));
          fVar26 = *(float *)&REFG(undefined, 0x1137204) - (fVar29 * fVar26) * fVar29;
          fVar27 = *(float *)&REFG(undefined, 0x1137208) - (fVar31 * fVar27) * fVar31;
          fVar28 = *(float *)&REFG(undefined, 0x113720c) - (fVar32 * fVar28) * fVar32;
          fVar29 = *(float *)&REFG(undefined, 0x1137214) * fVar29;
          fVar31 = *(float *)&REFG(undefined, 0x1137218) * fVar31;
          fVar32 = *(float *)&REFG(undefined, 0x113721c) * fVar32;
          *pfVar15 = ((*(float *)&REFG(undefined, 0x1137200) - (fVar33 * fVar30) * fVar33) *
                     (*(float *)&REFG(undefined, 0x1137210) * fVar33)) * fVar22;
          pfVar15[1] = (fVar26 * fVar29) * fVar23;
          pfVar15[2] = (fVar27 * fVar31) * fVar24;
          pfVar15[3] = (fVar28 * fVar32) * fVar25;
        }
      }
      uVar10 = uVar10 + 1;
      pfVar15 = pfVar15 + 0xc;
    } while (uVar10 < param_4);
  }
  return 0;
}

/* ref: FUN_00d6ae50 */
GEN_LIB GEN_NOFRAME uint F_00d6ae50(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(float param_2, float gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(uint param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5), GEN_P(int * param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7))
{
  GEN_ENTER(0xd6ae50u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(uint param_5 = (uint)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  GEN_PIN(int * param_7 = (int *)(uintptr_t)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  float fVar1;
  float fVar2;
  undefined4 * puVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  float fVar6;
  LPVOID pvVar7;
  float * pfVar8;
  LPVOID pvVar9;
  float * pfVar10;
  int iVar11;
  float * pfVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar33;
  float fVar34;
  undefined1 auVar32 [16];
  float fVar35;
  
  pvVar7 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar7 + 4)));
  if (puVar3 < *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar7 + 0xc)))) {
    *puVar3 = ((char *)REFP(0x1137220));
    uVar4 = rdtsc();
    puVar3[1] = (int)uVar4;
    *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar7 + 4))) = puVar3 + 3;
  }
  fVar6 = *(float *)&REFG(undefined, 0x113720c);
  fVar2 = *(float *)&REFG(undefined, 0x1137208);
  fVar1 = *(float *)&REFG(undefined, 0x1137204);
  fVar20 = *(float *)&REFG(undefined, 0x1137200);
  iVar14 = *param_7;
  iVar13 = *((int *)GEN_TOP((iVar14 + 0x10)));
  iVar11 = 1;
  if (0 < iVar13) {
    pfVar10 = ((float *)GEN_TOP(param_7[2]));
    pfVar8 = pfVar10 + iVar13 * 0xc;
    if (param_3 != 0) {
      pfVar12 = ((float *)GEN_TOP((param_4 + 0x10)));
      iVar13 = param_3;
      do {
        fVar19 = pfVar8[9];
        fVar21 = pfVar8[10];
        fVar22 = pfVar8[0xb];
        fVar23 = pfVar10[9];
        fVar24 = pfVar10[10];
        fVar25 = pfVar10[0xb];
        memcpy(&(auVar32), &(*(gen_v16 *)(pfVar8 + 4)), sizeof(*(gen_v16 *)(pfVar8 + 4)) < sizeof(auVar32) ? sizeof(*(gen_v16 *)(pfVar8 + 4)) : sizeof(auVar32));
        fVar26 = pfVar10[9];
        fVar27 = pfVar10[10];
        fVar28 = pfVar10[0xb];
        pfVar12[4] = (pfVar8[8] - pfVar10[8]) * param_2 + pfVar10[8];
        pfVar12[5] = (fVar19 - fVar23) * param_2 + fVar26;
        pfVar12[6] = (fVar21 - fVar24) * param_2 + fVar27;
        pfVar12[7] = (fVar22 - fVar25) * param_2 + fVar28;
        fVar19 = pfVar8[1];
        fVar21 = pfVar8[2];
        fVar22 = pfVar8[3];
        fVar23 = pfVar10[1];
        fVar24 = pfVar10[2];
        fVar25 = pfVar10[3];
        fVar26 = pfVar10[1];
        fVar27 = pfVar10[2];
        fVar28 = pfVar10[3];
        pfVar12[-4] = (*pfVar8 - *pfVar10) * param_2 + *pfVar10;
        pfVar12[-3] = (fVar19 - fVar23) * param_2 + fVar26;
        pfVar12[-2] = (fVar21 - fVar24) * param_2 + fVar27;
        pfVar12[-1] = (fVar22 - fVar25) * param_2 + fVar28;
        fVar19 = (*(float *)((char *)&auVar32 + 0)) * pfVar10[4];
        fVar21 = (*(float *)((char *)&auVar32 + 4)) * pfVar10[5];
        fVar22 = (*(float *)((char *)&auVar32 + 8)) * pfVar10[6];
        fVar23 = (*(float *)((char *)&auVar32 + 12)) * pfVar10[7];
        fVar24 = fVar22 + fVar19;
        fVar25 = fVar23 + fVar21;
        fVar19 = fVar19 + fVar22;
        fVar21 = fVar21 + fVar23;
        uVar15 = -(uint)(fVar25 + fVar24 < 0.0);
        uVar16 = -(uint)(fVar24 + fVar25 < 0.0);
        uVar17 = -(uint)(fVar21 + fVar19 < 0.0);
        uVar18 = -(uint)(fVar19 + fVar21 < 0.0);
        fVar24 = gen_bits2f((uint)gen_fl2bits(0.0 - param_2) & uVar15 |
                            ~uVar15 & (uint)gen_fl2bits(param_2)) * (*(float *)((char *)&auVar32 + 0)) +
                 (*(float *)&REFG(undefined, 0x1138af0) - param_2) * pfVar10[4];
        fVar25 = gen_bits2f((uint)gen_fl2bits(0.0 - param_2) & uVar16 |
                            ~uVar16 & (uint)gen_fl2bits(param_2)) * (*(float *)((char *)&auVar32 + 4)) +
                 (*(float *)&REFG(undefined, 0x1138af4) - param_2) * pfVar10[5];
        fVar26 = gen_bits2f((uint)gen_fl2bits(0.0 - param_2) & uVar17 |
                            ~uVar17 & (uint)gen_fl2bits(param_2)) * (*(float *)((char *)&auVar32 + 8)) +
                 (*(float *)&REFG(undefined, 0x1138af8) - param_2) * pfVar10[6];
        fVar27 = gen_bits2f((uint)gen_fl2bits(0.0 - param_2) & uVar18 |
                            ~uVar18 & (uint)gen_fl2bits(param_2)) * (*(float *)((char *)&auVar32 + 12)) +
                 (*(float *)&REFG(undefined, 0x1138afc) - param_2) * pfVar10[7];
        fVar19 = fVar26 * fVar26 + fVar24 * fVar24;
        fVar21 = fVar27 * fVar27 + fVar25 * fVar25;
        fVar22 = fVar24 * fVar24 + fVar26 * fVar26;
        fVar23 = fVar25 * fVar25 + fVar27 * fVar27;
        fVar28 = fVar21 + fVar19;
        fVar19 = fVar19 + fVar21;
        fVar29 = fVar23 + fVar22;
        fVar22 = fVar22 + fVar23;
        (*(undefined4 *)((char *)&auVar5 + 4)) = (undefined4)gen_fl2bits(fVar19);
        (*(undefined4 *)((char *)&auVar5 + 0)) = (undefined4)gen_fl2bits(fVar28);
        (*(undefined4 *)((char *)&auVar5 + 8)) = (undefined4)gen_fl2bits(fVar29);
        (*(undefined4 *)((char *)&auVar5 + 12)) = (undefined4)gen_fl2bits(fVar22);
        gen_rsqrtps(&(auVar32), &(auVar32), &(auVar5));
        fVar31 = (*(float *)((char *)&auVar32 + 0));
        fVar33 = (*(float *)((char *)&auVar32 + 4));
        fVar34 = (*(float *)((char *)&auVar32 + 8));
        fVar35 = (*(float *)((char *)&auVar32 + 12));
        fVar21 = *(float *)&REFG(undefined, 0x1137214) * fVar33;
        fVar23 = *(float *)&REFG(undefined, 0x1137218) * fVar34;
        fVar30 = *(float *)&REFG(undefined, 0x113721c) * fVar35;
        *pfVar12 = ((fVar20 - (fVar31 * fVar28) * fVar31) * (*(float *)&REFG(undefined, 0x1137210) * fVar31)) *
                   fVar24;
        pfVar12[1] = ((fVar1 - (fVar33 * fVar19) * fVar33) * fVar21) * fVar25;
        pfVar12[2] = ((fVar2 - (fVar34 * fVar29) * fVar34) * fVar23) * fVar26;
        pfVar12[3] = ((fVar6 - (fVar35 * fVar22) * fVar35) * fVar30) * fVar27;
        pfVar10 = pfVar10 + 0xc;
        pfVar8 = pfVar8 + 0xc;
        pfVar12 = pfVar12 + 0xc;
        iVar13 = iVar13 - 1;
      } while (iVar13 != 0);
    }
    iVar11 = 2;
  }
  iVar14 = *((int *)GEN_TOP((iVar14 + 0x14)));
  if (0 < iVar14) {
    pfVar8 = ((float *)GEN_TOP(param_7[iVar11 * 2]));
    uVar15 = 0;
    pfVar10 = pfVar8 + iVar14;
    fVar20 = REFG(float, 0x1087f04) - param_2;
    if (3 < (int)param_5) {
      pfVar12 = ((float *)GEN_TOP((param_6 + 8)));
      iVar14 = (param_5 - 4 >> 2) + 1;
      uVar15 = iVar14 * 4;
      do {
        fVar1 = pfVar10[1];
        pfVar12[-2] = *pfVar10 * param_2 + *pfVar8 * fVar20;
        fVar2 = pfVar10[2];
        pfVar12[-1] = pfVar8[1] * fVar20 + fVar1 * param_2;
        fVar1 = pfVar10[3];
        *pfVar12 = pfVar8[2] * fVar20 + fVar2 * param_2;
        pfVar12[1] = pfVar8[3] * fVar20 + fVar1 * param_2;
        pfVar8 = pfVar8 + 4;
        pfVar10 = pfVar10 + 4;
        pfVar12 = pfVar12 + 4;
        iVar14 = iVar14 - 1;
      } while (iVar14 != 0);
    }
    if (uVar15 < param_5) {
      iVar14 = (int)pfVar10 - (int)pfVar8;
      do {
        *((float *)GEN_TOP((param_6 + uVar15 * 4))) =
             *((float *)GEN_TOP((iVar14 + (int)pfVar8))) * param_2 + *pfVar8 * fVar20;
        uVar15 = uVar15 + 1;
        pfVar8 = pfVar8 + 1;
      } while (uVar15 < param_5);
    }
  }
  pvVar9 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar9 + 4)));
  pvVar7 = pvVar9;
  if (puVar3 < *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar9 + 0xc)))) {
    *puVar3 = &REFG(undefined, 0x1136cb0);
    uVar4 = rdtsc();
    pvVar7 = (LPVOID)uVar4;
    puVar3[1] = pvVar7;
    *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar9 + 4))) = puVar3 + 3;
  }
  return (uint)pvVar7;
}

/* ref: hkaInterleavedUncompressedAnimation::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d6b0e0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(uint param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xd6b0e0u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(uint param_5 = (uint)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  LPVOID pvVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 * puVar8;
  LPVOID pvVar9;
  undefined4 * puVar10;
  uint uVar11;
  float10 fVar12;
  float10 fVar13;
  float fVar14;
  
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar10 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar5 + 4)));
  if (puVar10 < *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar5 + 0xc)))) {
    *puVar10 = ((char *)REFP(0x113723c));
    uVar2 = rdtsc();
    uVar6 = (undefined4)uVar2;
    (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x18)) + 4)) = uVar6;
    (*(longlong *)(gen_frame + 0x18)) = CONCAT44(uVar6,(uint)(*(longlong *)(gen_frame + 0x18)));
    puVar10[1] = uVar6;
    *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar5 + 4))) = puVar10 + 3;
  }
  if (gen_bits2f(param_1[3]) <= param_2) {
    uVar11 = 0;
    if (param_3 != 0) {
      puVar10 = ((undefined4 *)GEN_TOP((param_4 + 0x20)));
      do {
        iVar7 = uVar11 - param_1[4];
        uVar11 = uVar11 + 1;
        puVar8 = ((undefined4 *)GEN_TOP(((iVar7 + param_1[0xb]) * 0x30 + param_1[10])));
        uVar6 = puVar8[1];
        uVar3 = puVar8[2];
        uVar4 = puVar8[3];
        puVar10[-8] = *puVar8;
        puVar10[-7] = uVar6;
        puVar10[-6] = uVar3;
        puVar10[-5] = uVar4;
        uVar6 = puVar8[5];
        uVar3 = puVar8[6];
        uVar4 = puVar8[7];
        puVar10[-4] = puVar8[4];
        puVar10[-3] = uVar6;
        puVar10[-2] = uVar3;
        puVar10[-1] = uVar4;
        uVar6 = puVar8[9];
        uVar3 = puVar8[10];
        uVar4 = puVar8[0xb];
        *puVar10 = puVar8[8];
        puVar10[1] = uVar6;
        puVar10[2] = uVar3;
        puVar10[3] = uVar4;
        puVar10 = puVar10 + 0xc;
      } while (uVar11 < param_3);
    }
    uVar11 = 0;
    if (3 < (int)param_5) {
      puVar10 = ((undefined4 *)GEN_TOP((param_6 + 8)));
      do {
        puVar10[-2] = *((undefined4 *)GEN_TOP((param_1[0xd] + ((param_1[0xe] - param_1[5]) + uVar11) * 4)));
        puVar10[-1] = *((undefined4 *)GEN_TOP((param_1[0xd] + 4 + ((param_1[0xe] - param_1[5]) + uVar11) * 4)))
        ;
        *puVar10 = *((undefined4 *)GEN_TOP((param_1[0xd] + 8 + ((param_1[0xe] - param_1[5]) + uVar11) * 4)));
        puVar10[1] = *((undefined4 *)GEN_TOP((param_1[0xd] + 0xc + ((param_1[0xe] - param_1[5]) + uVar11) * 4)));
        uVar11 = uVar11 + 4;
        puVar10 = puVar10 + 4;
      } while (uVar11 < param_5 - 3);
    }
    for (; uVar11 < param_5; uVar11 = uVar11 + 1) {
      *((undefined4 *)GEN_TOP((param_6 + uVar11 * 4))) =
           *((undefined4 *)GEN_TOP((param_1[0xd] + ((param_1[0xe] - param_1[5]) + uVar11) * 4)));
    }
    pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
    puVar10 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar5 + 4)));
    if (puVar10 < *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar5 + 0xc)))) {
      *puVar10 = &REFG(undefined, 0x1136cb0);
      uVar2 = rdtsc();
      puVar10[1] = (uint)uVar2;
      *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar5 + 4))) = puVar10 + 3;
      return (uint)uVar2;
    }
  }
  else {
    uVar11 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x1c))))(param_1 GEN_EDX_ARG);
    fVar12 = (float10)(int)(uVar11 - 1);
    if ((int)(uVar11 - 1) < 0) {
      fVar12 = GEN_X87(fVar12 + (float10)*(float *)&REFG(undefined, 0x1088110));
    }
    fVar12 = GEN_X87(fVar12 * ((float10)param_2 / ((float10)GEN_TOD(gen_bits2f(param_1[3])))));
    (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x18)) + 4)) = gen_x87_cw | 0xc00;
    uVar11 = uVar11 - 2;
    (*(undefined2 *)((char *)&(*(longlong *)(gen_frame + 0x18)) + 4)) = (undefined2)(gen_x87_cw | 0xc00);
    gen_set_x87_cw((unsigned short)(*(undefined2 *)((char *)&(*(longlong *)(gen_frame + 0x18)) + 4)));
    lVar1 = (longlong)TRUNC(fVar12);
    (*(longlong *)(gen_frame + 0x18)) = lVar1;
    lVar1 = (*(longlong *)(gen_frame + 0x18));
    (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x18)) + 0)) = (uint)lVar1;
    gen_set_x87_cw((unsigned short)gen_x87_cw);
    fVar14 = REFG(float, 0x1087f04);
    if ((uint)(*(longlong *)(gen_frame + 0x18)) <= uVar11) {
      fVar13 = (float10)(int)(uint)(*(longlong *)(gen_frame + 0x18));
      if ((int)(uint)(*(longlong *)(gen_frame + 0x18)) < 0) {
        fVar13 = GEN_X87(fVar13 + (float10)*(float *)&REFG(undefined, 0x1088110));
      }
      fVar12 = GEN_X87(fVar12 - fVar13);
      fVar14 = (float)fVar12;
      uVar11 = (uint)(*(longlong *)(gen_frame + 0x18));
      if (fVar12 < (float10)0) {
        fVar14 = 0.0;
      }
      else if (REFG(float, 0x1087f04) < fVar14) {
        fVar14 = REFG(float, 0x1087f04);
      }
    }
    (*(longlong *)(gen_frame + 0x18)) = lVar1;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x24))))(param_1 GEN_EDX_ARG,uVar11,(undefined4)gen_fl2bits(fVar14),((undefined1 *)(gen_frame + 0x0)),3);
    F_00d6ae50(uVar11,fVar14,param_3,param_4,param_5,param_6,((undefined1 *)(gen_frame + 0x0)),3);
    pvVar9 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
    puVar10 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar9 + 4)));
    pvVar5 = pvVar9;
    if (puVar10 < *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar9 + 0xc)))) {
      *puVar10 = &REFG(undefined, 0x1136cb0);
      uVar2 = rdtsc();
      pvVar5 = (LPVOID)uVar2;
      puVar10[1] = pvVar5;
      *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar9 + 4))) = puVar10 + 3;
    }
  }
  return (uint)pvVar5;
}

/* ref: FUN_00d6b330 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d6b330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd6b330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  float * pfVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 in_XMM3 [16] = {0};
  float fVar28;
  int local_8;
  
  F_00d739c0(this GEN_EDX_FWD,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x113657c));
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  piVar1 = ((int *)GEN_TOP(((int)this + 0x28)));
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 1;
  uVar16 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x1c))))(param_1 GEN_EDX_ARG);
  iVar18 = *((int *)GEN_TOP(((int)this + 0x10))) * uVar16;
  uVar17 = *((uint *)GEN_TOP(((int)this + 0x30))) & 0x3fffffff;
  if ((int)uVar17 < iVar18) {
    iVar20 = uVar17 * 2;
    iVar19 = iVar18;
    if (iVar18 < iVar20) {
      iVar19 = iVar20;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),piVar1,iVar19,0x30);
  }
  *((int *)GEN_TOP(((int)this + 0x2c))) = iVar18;
  iVar18 = *((int *)GEN_TOP(((int)this + 0x14))) * uVar16;
  uVar17 = *((uint *)GEN_TOP(((int)this + 0x3c))) & 0x3fffffff;
  if ((int)uVar17 < iVar18) {
    iVar20 = uVar17 * 2;
    if (iVar20 <= iVar18) {
      iVar20 = iVar18;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 0x34,iVar20,4);
  }
  *((int *)GEN_TOP(((int)this + 0x38))) = iVar18;
  local_8 = 0;
  if (0 < (int)uVar16) {
    do {
      if (*((int *)GEN_TOP(((int)this + 0x14))) == 0) {
        iVar18 = 0;
      }
      else {
        iVar18 = *((int *)GEN_TOP(((int)this + 0x34))) + *((int *)GEN_TOP(((int)this + 0x14))) * local_8 * 4;
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xc))))
                (param_1 GEN_EDX_ARG,(undefined4)
                         gen_fl2bits(((float)local_8 * *((float *)GEN_TOP(((int)this + 0xc)))) /
                                     (float)(int)(uVar16 - 1)),
                 *((int *)GEN_TOP(((int)this + 0x10))) * local_8 * 0x30 + *piVar1,iVar18);
      local_8 = local_8 + 1;
    } while (local_8 < (int)uVar16);
  }
  fVar15 = *(float *)&REFG(undefined, 0x113721c);
  fVar14 = *(float *)&REFG(undefined, 0x1137218);
  fVar13 = *(float *)&REFG(undefined, 0x1137214);
  fVar12 = *(float *)&REFG(undefined, 0x1137210);
  fVar11 = *(float *)&REFG(undefined, 0x113720c);
  fVar10 = *(float *)&REFG(undefined, 0x1137208);
  fVar9 = *(float *)&REFG(undefined, 0x1137204);
  fVar8 = *(float *)&REFG(undefined, 0x1137200);
  iVar18 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 0x2c)))) {
    iVar20 = 0;
    do {
      pfVar2 = ((float *)GEN_TOP((iVar20 + 0x10 + *piVar1)));
      fVar4 = *pfVar2;
      fVar5 = pfVar2[1];
      fVar6 = pfVar2[2];
      fVar7 = pfVar2[3];
      pfVar2 = ((float *)GEN_TOP((iVar20 + 0x10 + *piVar1)));
      fVar21 = fVar6 * fVar6 + fVar4 * fVar4;
      fVar22 = fVar7 * fVar7 + fVar5 * fVar5;
      fVar23 = fVar4 * fVar4 + fVar6 * fVar6;
      fVar24 = fVar5 * fVar5 + fVar7 * fVar7;
      fVar25 = fVar22 + fVar21;
      fVar21 = fVar21 + fVar22;
      fVar22 = fVar24 + fVar23;
      fVar23 = fVar23 + fVar24;
      (*(undefined4 *)((char *)&auVar3 + 4)) = (undefined4)gen_fl2bits(fVar21);
      (*(undefined4 *)((char *)&auVar3 + 0)) = (undefined4)gen_fl2bits(fVar25);
      (*(undefined4 *)((char *)&auVar3 + 8)) = (undefined4)gen_fl2bits(fVar22);
      (*(undefined4 *)((char *)&auVar3 + 12)) = (undefined4)gen_fl2bits(fVar23);
      gen_rsqrtps(&(in_XMM3), &(in_XMM3), &(auVar3));
      fVar24 = (*(float *)((char *)&in_XMM3 + 0));
      fVar26 = (*(float *)((char *)&in_XMM3 + 4));
      fVar27 = (*(float *)((char *)&in_XMM3 + 8));
      fVar28 = (*(float *)((char *)&in_XMM3 + 12));
      iVar18 = iVar18 + 1;
      *pfVar2 = fVar4 * ((fVar8 - (fVar24 * fVar25) * fVar24) * (fVar12 * fVar24));
      pfVar2[1] = fVar5 * ((fVar9 - (fVar26 * fVar21) * fVar26) * (fVar13 * fVar26));
      pfVar2[2] = fVar6 * ((fVar10 - (fVar27 * fVar22) * fVar27) * (fVar14 * fVar27));
      pfVar2[3] = fVar7 * ((fVar11 - (fVar28 * fVar23) * fVar28) * (fVar15 * fVar28));
      iVar20 = iVar20 + 0x30;
    } while (iVar18 < *((int *)GEN_TOP(((int)this + 0x2c))));
  }
  return (uint)this;
}

/* ref: FUN_00d6b4d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d6b4d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd6b4d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  undefined4 * puVar1;
  code * pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined4 * puVar10;
  undefined4 * puVar11;
  int iVar12;
  int iVar13;
  
  iVar9 = (*(int *)&gen_args[0]);
  F_00d739c0(this GEN_EDX_FWD,(*(int *)&gen_args[0]));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x113657c));
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0x80000000;
  uVar8 = *((uint *)GEN_TOP(((int)this + 0x30))) & 0x3fffffff;
  if ((int)uVar8 < *((int *)GEN_TOP((iVar9 + 0x2c)))) {
    if ((*((uint *)GEN_TOP(((int)this + 0x30))) & 0x80000000) == 0) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x28))),uVar8 * 0x30);
    }
    (*(int *)&gen_args[0]) = *((int *)GEN_TOP((iVar9 + 0x2c))) * 0x30;
    pcVar2 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc)));
    uVar8 = (*pcVar2)(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[0]));
    *((uint *)GEN_TOP(((int)this + 0x28))) = uVar8;
    *((int *)GEN_TOP(((int)this + 0x30))) = (*(int *)&gen_args[0]) / 0x30;
  }
  (*(int *)&gen_args[0]) = *((int *)GEN_TOP((iVar9 + 0x2c)));
  iVar13 = *((int *)GEN_TOP(((int)this + 0x28)));
  *((int *)GEN_TOP(((int)this + 0x2c))) = (*(int *)&gen_args[0]);
  iVar3 = *((int *)GEN_TOP((iVar9 + 0x28)));
  if (0 < (*(int *)&gen_args[0])) {
    puVar11 = *((undefined4 * PTR32 *)GEN_TOP((iVar9 + 0x28)));
    puVar10 = ((undefined4 *)GEN_TOP((iVar13 + 0x10)));
    do {
      uVar5 = puVar11[1];
      uVar6 = puVar11[2];
      uVar7 = puVar11[3];
      puVar10[-4] = *puVar11;
      puVar10[-3] = uVar5;
      puVar10[-2] = uVar6;
      puVar10[-1] = uVar7;
      puVar1 = ((undefined4 *)GEN_TOP(((iVar3 - iVar13) + (int)puVar10)));
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      *puVar10 = *puVar1;
      puVar10[1] = uVar5;
      puVar10[2] = uVar6;
      puVar10[3] = uVar7;
      uVar5 = puVar11[9];
      uVar6 = puVar11[10];
      uVar7 = puVar11[0xb];
      puVar10[4] = puVar11[8];
      puVar10[5] = uVar5;
      puVar10[6] = uVar6;
      puVar10[7] = uVar7;
      puVar11 = puVar11 + 0xc;
      puVar10 = puVar10 + 0xc;
      (*(int *)&gen_args[0]) = (*(int *)&gen_args[0]) - 1;
    } while ((*(int *)&gen_args[0]) != 0);
  }
  uVar8 = *((uint *)GEN_TOP(((int)this + 0x3c)));
  if ((int)(uVar8 & 0x3fffffff) < *((int *)GEN_TOP((iVar9 + 0x38)))) {
    if (-1 < (int)uVar8) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x34))),uVar8 * 4);
    }
    (*(int *)&gen_args[0]) = *((int *)GEN_TOP((iVar9 + 0x38))) * 4;
    pcVar2 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc)));
    uVar8 = (*pcVar2)(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[0]));
    *((uint *)GEN_TOP(((int)this + 0x34))) = uVar8;
    *((int *)GEN_TOP(((int)this + 0x3c))) = (int)((*(int *)&gen_args[0]) + ((*(int *)&gen_args[0]) >> 0x1f & 3U)) >> 2;
  }
  iVar13 = *((int *)GEN_TOP((iVar9 + 0x38)));
  iVar3 = *((int *)GEN_TOP(((int)this + 0x34)));
  *((int *)GEN_TOP(((int)this + 0x38))) = iVar13;
  iVar4 = *((int *)GEN_TOP((iVar9 + 0x34)));
  iVar9 = 0;
  if (3 < iVar13) {
    iVar12 = (iVar13 - 4U >> 2) + 1;
    iVar9 = iVar12 * 4;
    puVar10 = ((undefined4 *)GEN_TOP((iVar3 + 4)));
    puVar11 = ((undefined4 *)GEN_TOP((iVar4 + 0xc)));
    do {
      puVar10[-1] = puVar11[-3];
      iVar12 = iVar12 - 1;
      *puVar10 = *((undefined4 *)GEN_TOP(((iVar4 - iVar3) - 0x10 + (int)(puVar10 + 4))));
      puVar10[1] = puVar11[-1];
      puVar10[2] = *puVar11;
      puVar10 = puVar10 + 4;
      puVar11 = puVar11 + 4;
    } while (iVar12 != 0);
  }
  if (iVar9 < iVar13) {
    iVar13 = iVar13 - iVar9;
    puVar10 = ((undefined4 *)GEN_TOP((iVar3 + iVar9 * 4)));
    do {
      iVar13 = iVar13 - 1;
      *puVar10 = *((undefined4 *)GEN_TOP(((iVar4 - iVar3) + (int)puVar10)));
      puVar10 = puVar10 + 1;
    } while (iVar13 != 0);
  }
  return (uint)this;
}

/* ref: FUN_00d6b6b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d6b6b0(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd6b6b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00d6b6c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d6b6c0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd6b6c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00d6b700 */
GEN_LIB GEN_FRAME unsigned int F_00d6b700(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd6b700u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (3 < param_3) {
    iVar3 = (param_3 - 4U >> 2) + 1;
    iVar4 = iVar3 * 4;
    puVar1 = ((undefined4 *)GEN_TOP((param_1 + 4)));
    puVar2 = ((undefined4 *)GEN_TOP((param_2 + 0xc)));
    do {
      puVar1[-1] = puVar2[-3];
      iVar3 = iVar3 - 1;
      *puVar1 = *((undefined4 *)GEN_TOP(((param_2 - param_1) - 0x10 + (int)(puVar1 + 4))));
      puVar1[1] = puVar2[-1];
      puVar1[2] = *puVar2;
      puVar1 = puVar1 + 4;
      puVar2 = puVar2 + 4;
    } while (iVar3 != 0);
  }
  if (iVar4 < param_3) {
    iVar3 = param_3 - iVar4;
    puVar1 = ((undefined4 *)GEN_TOP((param_1 + iVar4 * 4)));
    do {
      iVar3 = iVar3 - 1;
      *puVar1 = *((undefined4 *)GEN_TOP(((int)puVar1 + (param_2 - param_1))));
      puVar1 = puVar1 + 1;
    } while (iVar3 != 0);
  }
  return;
}

/* ref: FUN_00d6b780 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d6b780(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd6b780u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *in_ecx = param_2;
  in_ecx[1] = 0x40;
  return param_2;
}

/* ref: FUN_00d6b7a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d6b7a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd6b7a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  *(undefined4 *)this = param_1;
  *((uint *)GEN_TOP(((int)this + 4))) = param_2 * 0x30;
  return param_2;
}

/* ref: FUN_00d6b7c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d6b7c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd6b7c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  *(undefined4 *)this = param_1;
  *((int *)GEN_TOP(((int)this + 4))) = param_2 * 4;
  return param_2 * 4;
}

/* ref: FUN_00d6b7e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d6b7e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd6b7e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  code * pcVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  undefined4 * puVar6;
  int iVar7;
  undefined4 * puVar8;
  int iVar9;
  int iVar10;
  
  piVar4 = (*(int * PTR32 *)&gen_args[1]);
  uVar5 = *((uint *)GEN_TOP(((int)this + 8)));
  if ((int)(uVar5 & 0x3fffffff) < (*(int * PTR32 *)&gen_args[1])[1]) {
    if (-1 < (int)uVar5) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x10))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_FWD,*(undefined4 *)this,uVar5 * 4);
    }
    pcVar1 = *((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0xc)));
    (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP((piVar4[1] * 4)));
    uVar5 = (*pcVar1)((*(int * PTR32 *)&gen_args[0]),&(*(int * PTR32 *)&gen_args[1]));
    *(uint *)this = uVar5;
    *((int *)GEN_TOP(((int)this + 8))) = (int)((int)(*(int * PTR32 *)&gen_args[1]) + ((int)(*(int * PTR32 *)&gen_args[1]) >> 0x1f & 3U)) >> 2;
  }
  iVar10 = piVar4[1];
  *((int *)GEN_TOP(((int)this + 4))) = iVar10;
  iVar2 = *piVar4;
  iVar3 = *(int *)this;
  iVar7 = 0;
  if (3 < iVar10) {
    iVar9 = (iVar10 - 4U >> 2) + 1;
    iVar7 = iVar9 * 4;
    puVar6 = ((undefined4 *)GEN_TOP((iVar3 + 4)));
    puVar8 = ((undefined4 *)GEN_TOP((iVar2 + 0xc)));
    do {
      puVar6[-1] = puVar8[-3];
      iVar9 = iVar9 - 1;
      *puVar6 = *((undefined4 *)GEN_TOP(((iVar2 - iVar3) - 0x10 + (int)(puVar6 + 4))));
      puVar6[1] = puVar8[-1];
      puVar6[2] = *puVar8;
      puVar6 = puVar6 + 4;
      puVar8 = puVar8 + 4;
    } while (iVar9 != 0);
  }
  if (iVar7 < iVar10) {
    iVar10 = iVar10 - iVar7;
    puVar6 = ((undefined4 *)GEN_TOP((iVar3 + iVar7 * 4)));
    do {
      iVar10 = iVar10 - 1;
      *puVar6 = *((undefined4 *)GEN_TOP(((int)puVar6 + (iVar2 - iVar3))));
      puVar6 = puVar6 + 1;
    } while (iVar10 != 0);
  }
  return (uint)this;
}

/* ref: FUN_00d6b8d0 */
GEN_LIB GEN_FRAME unsigned int F_00d6b8d0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd6b8d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  int iVar7;
  
  if (0 < param_3) {
    puVar5 = ((undefined4 *)GEN_TOP((param_1 + 0x10)));
    puVar6 = param_2;
    iVar7 = param_3;
    do {
      uVar2 = puVar6[1];
      uVar3 = puVar6[2];
      uVar4 = puVar6[3];
      puVar5[-4] = *puVar6;
      puVar5[-3] = uVar2;
      puVar5[-2] = uVar3;
      puVar5[-1] = uVar4;
      puVar1 = ((undefined4 *)GEN_TOP((((int)param_2 - param_1) + (int)puVar5)));
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *puVar5 = *puVar1;
      puVar5[1] = uVar2;
      puVar5[2] = uVar3;
      puVar5[3] = uVar4;
      uVar2 = puVar6[9];
      uVar3 = puVar6[10];
      uVar4 = puVar6[0xb];
      puVar5[4] = puVar6[8];
      puVar5[5] = uVar2;
      puVar5[6] = uVar3;
      puVar5[7] = uVar4;
      puVar6 = puVar6 + 0xc;
      puVar5 = puVar5 + 0xc;
      iVar7 = iVar7 - 1;
    } while (iVar7 != 0);
  }
  return;
}

/* ref: FUN_00d6b920 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d6b920(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd6b920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  code * pcVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  undefined4 * puVar6;
  int iVar7;
  undefined4 * puVar8;
  int iVar9;
  int iVar10;
  
  piVar4 = (*(int * PTR32 *)&gen_args[0]);
  uVar5 = *((uint *)GEN_TOP(((int)this + 8)));
  if ((int)(uVar5 & 0x3fffffff) < (*(int * PTR32 *)&gen_args[0])[1]) {
    if (-1 < (int)uVar5) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar5 * 4);
    }
    (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((piVar4[1] * 4)));
    pcVar1 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc)));
    uVar5 = (*pcVar1)(&REFG(undefined * PTR32, 0x13516ac),&(*(int * PTR32 *)&gen_args[0]));
    *(uint *)this = uVar5;
    *((int *)GEN_TOP(((int)this + 8))) = (int)((int)(*(int * PTR32 *)&gen_args[0]) + ((int)(*(int * PTR32 *)&gen_args[0]) >> 0x1f & 3U)) >> 2;
  }
  iVar10 = piVar4[1];
  *((int *)GEN_TOP(((int)this + 4))) = iVar10;
  iVar2 = *piVar4;
  iVar3 = *(int *)this;
  iVar7 = 0;
  if (3 < iVar10) {
    iVar9 = (iVar10 - 4U >> 2) + 1;
    iVar7 = iVar9 * 4;
    puVar6 = ((undefined4 *)GEN_TOP((iVar3 + 4)));
    puVar8 = ((undefined4 *)GEN_TOP((iVar2 + 0xc)));
    do {
      puVar6[-1] = puVar8[-3];
      iVar9 = iVar9 - 1;
      *puVar6 = *((undefined4 *)GEN_TOP(((iVar2 - iVar3) - 0x10 + (int)(puVar6 + 4))));
      puVar6[1] = puVar8[-1];
      puVar6[2] = *puVar8;
      puVar6 = puVar6 + 4;
      puVar8 = puVar8 + 4;
    } while (iVar9 != 0);
  }
  if (iVar7 < iVar10) {
    iVar10 = iVar10 - iVar7;
    puVar6 = ((undefined4 *)GEN_TOP((iVar3 + iVar7 * 4)));
    do {
      iVar10 = iVar10 - 1;
      *puVar6 = *((undefined4 *)GEN_TOP(((int)puVar6 + (iVar2 - iVar3))));
      puVar6 = puVar6 + 1;
    } while (iVar10 != 0);
  }
  return (uint)this;
}

/* ref: FUN_00d6ba10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d6ba10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd6ba10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  undefined4 * puVar1;
  code * pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int * piVar6;
  int * piVar7;
  undefined4 * puVar8;
  uint uVar9;
  undefined4 * puVar10;
  int iVar11;
  int iVar12;
  
  piVar6 = (*(int * PTR32 *)&gen_args[0]);
  uVar9 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  piVar7 = (*(int * PTR32 *)&gen_args[1]);
  if ((int)uVar9 < (*(int * PTR32 *)&gen_args[1])[1]) {
    if (-1 < (int)*((uint *)GEN_TOP(((int)this + 8)))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x10))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_FWD,*(undefined4 *)this,uVar9 * 0x30);
    }
    pcVar2 = *((gen_code32 *)GEN_TOP((*piVar6 + 0xc)));
    (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(((*(int * PTR32 *)&gen_args[1])[1] * 0x30)));
    uVar9 = (*pcVar2)(piVar6,&(*(int * PTR32 *)&gen_args[0]));
    *(uint *)this = uVar9;
    *((int *)GEN_TOP(((int)this + 8))) = (int)(*(int * PTR32 *)&gen_args[0]) / 0x30;
    piVar7 = (*(int * PTR32 *)&gen_args[1]);
  }
  iVar12 = piVar7[1];
  *((int *)GEN_TOP(((int)this + 4))) = iVar12;
  puVar10 = ((undefined4 *)GEN_TOP(*piVar7));
  if (0 < iVar12) {
    puVar8 = ((undefined4 *)GEN_TOP((*(int *)this + 0x10)));
    iVar11 = (int)puVar10 - *(int *)this;
    do {
      uVar3 = puVar10[1];
      uVar4 = puVar10[2];
      uVar5 = puVar10[3];
      puVar8[-4] = *puVar10;
      puVar8[-3] = uVar3;
      puVar8[-2] = uVar4;
      puVar8[-1] = uVar5;
      puVar1 = ((undefined4 *)GEN_TOP((iVar11 + (int)puVar8)));
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      *puVar8 = *puVar1;
      puVar8[1] = uVar3;
      puVar8[2] = uVar4;
      puVar8[3] = uVar5;
      uVar3 = puVar10[9];
      uVar4 = puVar10[10];
      uVar5 = puVar10[0xb];
      puVar8[4] = puVar10[8];
      puVar8[5] = uVar3;
      puVar8[6] = uVar4;
      puVar8[7] = uVar5;
      puVar10 = puVar10 + 0xc;
      puVar8 = puVar8 + 0xc;
      iVar12 = iVar12 - 1;
    } while (iVar12 != 0);
  }
  return (uint)this;
}

/* ref: FUN_00d6bac0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d6bac0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd6bac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  undefined4 * puVar1;
  code * pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int * piVar6;
  uint uVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  int iVar10;
  int iVar11;
  
  piVar6 = (*(int * PTR32 *)&gen_args[0]);
  uVar7 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar7 < (*(int * PTR32 *)&gen_args[0])[1]) {
    if (-1 < (int)*((uint *)GEN_TOP(((int)this + 8)))) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar7 * 0x30);
    }
    (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((piVar6[1] * 0x30)));
    pcVar2 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc)));
    uVar7 = (*pcVar2)(&REFG(undefined * PTR32, 0x13516ac),&(*(int * PTR32 *)&gen_args[0]));
    *(uint *)this = uVar7;
    *((int *)GEN_TOP(((int)this + 8))) = (int)(*(int * PTR32 *)&gen_args[0]) / 0x30;
  }
  iVar11 = piVar6[1];
  *((int *)GEN_TOP(((int)this + 4))) = iVar11;
  puVar9 = ((undefined4 *)GEN_TOP(*piVar6));
  if (0 < iVar11) {
    puVar8 = ((undefined4 *)GEN_TOP((*(int *)this + 0x10)));
    iVar10 = (int)puVar9 - *(int *)this;
    do {
      uVar3 = puVar9[1];
      uVar4 = puVar9[2];
      uVar5 = puVar9[3];
      puVar8[-4] = *puVar9;
      puVar8[-3] = uVar3;
      puVar8[-2] = uVar4;
      puVar8[-1] = uVar5;
      puVar1 = ((undefined4 *)GEN_TOP((iVar10 + (int)puVar8)));
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      *puVar8 = *puVar1;
      puVar8[1] = uVar3;
      puVar8[2] = uVar4;
      puVar8[3] = uVar5;
      uVar3 = puVar9[9];
      uVar4 = puVar9[10];
      uVar5 = puVar9[0xb];
      puVar8[4] = puVar9[8];
      puVar8[5] = uVar3;
      puVar8[6] = uVar4;
      puVar8[7] = uVar5;
      puVar9 = puVar9 + 0xc;
      puVar8 = puVar8 + 0xc;
      iVar11 = iVar11 - 1;
    } while (iVar11 != 0);
  }
  return (uint)this;
}

/* ref: FUN_00d6bba0 */
GEN_LIB GEN_FRAME uint F_00d6bba0(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd6bba0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00d91a80(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: hkaMirroredAnimation::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d6bbc0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd6bbc0u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))
                    (param_1 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),param_1[4],param_3,param_1[5],param_4)
  ;
  return uVar1;
}

/* ref: hkaMirroredAnimation::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d6bbf0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xd6bbf0u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x28))) + 0x18))))
                    (*((int * PTR32 *)GEN_TOP((param_1 + 0x28))) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),param_3,param_4,
                     param_5);
  return uVar1;
}

/* ref: hkaMirroredAnimation::vf7 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d6bc20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xd6bc20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x28) + 0x1c))))
                    (*(int * PTR32 *)(this + 0x28) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                     param_8);
  return uVar1;
}

/* ref: hkaMirroredAnimation::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d6bc30(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xd6bc30u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x28))) + 0x20))))
                    (*((int * PTR32 *)GEN_TOP((param_1 + 0x28))) GEN_EDX_ARG,param_2,(undefined4)gen_fl2bits(param_3));
  return uVar1 + 6;
}

/* ref: FUN_00d6bc60 */
GEN_LIB GEN_NOFRAME ushort F_00d6bc60(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(int in_ecx, unsigned int gen_a1))
{
  GEN_ENTER(0xd6bc60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(int in_ecx = (int)gen_a1;)
  if (in_ecx == 0) {
    return (ushort)in_eax;
  }
  return *((ushort *)GEN_TOP((in_ecx + in_eax * 2)));
}

/* ref: hkaMirroredAnimation::vf15 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d6bc70(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xd6bc70u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  uint uVar1;
  uint uVar2;
  uint * this;
  uint uVar3;
  
  uVar1 = F_00d736c0(param_1 GEN_EDX_FWD,param_2,param_3,param_4,param_5);
  if (uVar1 != 0) {
    this = ((uint *)GEN_TOP((param_4 + 8)));
    uVar3 = uVar1;
    do {
      uVar2 = F_00d86260(*((undefined * PTR32 *)GEN_TOP((param_1 + 0x30))) GEN_EDX_ARG,*this & 0xfffffffe);
      F_00d91520(this GEN_EDX_ARG,uVar2);
      this = this + 3;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return uVar1;
}

/* ref: hkaMirroredAnimation::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d6bce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd6bce0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x84, 12, 4);
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x28) + 0x28))))(*(int * PTR32 *)(this + 0x28) GEN_EDX_FWD);
  iVar1 = *(int *)this;
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0x20))))(this,0,0);
  ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0x24))))(this,0,0,((byte *)(gen_frame + 0x0)),uVar3);
  return (((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 40)) & 0xf) + 0xf + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 44)) & 0xfffffff0) +
         uVar2 + (((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) & 0xf) + 0xf + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) & 0xfffffff0) +
         (((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) & 0xf) + 0xf + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)) & 0xfffffff0) +
         (((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)) & 0xf) + 0xf + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20)) & 0xfffffff0) +
         (((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 24)) & 0xf) + 0xf + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 28)) & 0xfffffff0) +
         (((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 32)) & 0xf) + 0xf + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 36)) & 0xfffffff0);
}

/* ref: FUN_00d6bda0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d6bda0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd6bda0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  ushort uVar1;
  int in_eax;
  int iVar2;
  
  in_eax = 0;
  iVar2 = param_2;
  if (0 < param_3) {
    do {
      uVar1 = F_00d6bc60(in_eax,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x2c))) + 0x10))));
      if (-1 < (short)uVar1) {
        F_00d86470(*((undefined4 *)GEN_TOP((param_1 + 0x30))) GEN_EDX_ARG,iVar2,(int)(short)uVar1,param_4 != '\0');
      }
      in_eax = in_eax + 1;
      iVar2 = iVar2 + 0x30;
    } while (in_eax < param_3);
  }
  return;
}

/* ref: FUN_00d6bdf0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d6bdf0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3), GEN_P(char param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xd6bdf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  GEN_PIN(char param_5 = (char)gen_a4;)
  short sVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  iVar3 = param_2;
  if (param_4 != 0) {
    do {
      sVar1 = *((short *)GEN_TOP((param_3 + uVar4 * 2)));
      if (((-1 < sVar1) && ((int)sVar1 < *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x28))) + 0x10))))) &&
         (uVar2 = F_00d6bc60((int)sVar1,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x2c))) + 0x10)))),
         -1 < (short)uVar2)) {
        F_00d86470(*((undefined4 *)GEN_TOP((param_1 + 0x30))) GEN_EDX_ARG,iVar3,(int)(short)uVar2,param_5 != '\0');
      }
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 0x30;
    } while (uVar4 < param_4);
  }
  return;
}

/* ref: FUN_00d6be50 */
GEN_LIB GEN_FRAME uint F_00d6be50(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd6be50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  undefined4 in_ecx;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint in_eax;
  int iVar5;
  undefined1 uVar6;
  
  iVar1 = param_1[2];
  in_ecx = *param_1;
  uVar3 = F_00d86330(param_1 + 4);
  in_eax = 0;
  uVar4 = uVar3;
  iVar5 = param_3;
  if (param_2 != 0) {
    do {
      uVar6 = *((char *)GEN_TOP((iVar1 + 0x34))) != '\0';
      uVar2 = F_00d6bc60(in_eax,in_ecx);
      uVar4 = F_00d86470(uVar3 GEN_EDX_ARG,iVar5,(int)(short)uVar2,uVar6);
      in_eax = in_eax + 1;
      iVar5 = iVar5 + 0x30;
    } while (in_eax < param_2);
  }
  return uVar4;
}

/* ref: hkaMirroredAnimation::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d6bec0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xd6bec0u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  undefined4 * puVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  LPVOID pvVar4;
  
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar3 + 4)));
  if (puVar1 < *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar3 + 0xc)))) {
    *puVar1 = ((char *)REFP(0x1137260));
    puVar1[3] = ((char *)REFP(0x113724c));
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar3 + 4))) = puVar1 + 4;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x28))) + 0x10))))
            (*((int * PTR32 *)GEN_TOP((param_1 + 0x28))) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),param_3,param_4,param_5,
             param_6);
  F_00d6bda0(param_1 GEN_EDX_ARG,param_4,param_3,*((undefined1 *)GEN_TOP((param_1 + 0x34))));
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar4 + 4)));
  pvVar3 = pvVar4;
  if (puVar1 < *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar4 + 0xc)))) {
    *puVar1 = &REFG(undefined, 0x1134dd0);
    uVar2 = rdtsc();
    pvVar3 = (LPVOID)uVar2;
    puVar1[1] = pvVar3;
    *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar4 + 4))) = puVar1 + 3;
  }
  return (uint)pvVar3;
}

/* ref: hkaMirroredAnimation::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d6bf70(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xd6bf70u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  undefined4 * puVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  LPVOID pvVar4;
  
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar3 + 4)));
  if (puVar1 < *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar3 + 0xc)))) {
    *puVar1 = ((char *)REFP(0x1137260));
    puVar1[3] = ((char *)REFP(0x113724c));
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar3 + 4))) = puVar1 + 4;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x28))) + 0x14))))
            (*((int * PTR32 *)GEN_TOP((param_1 + 0x28))) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),param_3,param_4,param_5);
  F_00d6bdf0(param_1 GEN_EDX_ARG,param_5,param_3,param_4,*((undefined1 *)GEN_TOP((param_1 + 0x34))));
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar4 + 4)));
  pvVar3 = pvVar4;
  if (puVar1 < *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar4 + 0xc)))) {
    *puVar1 = &REFG(undefined, 0x1134dd0);
    uVar2 = rdtsc();
    pvVar3 = (LPVOID)uVar2;
    puVar1[1] = pvVar3;
    *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar4 + 4))) = puVar1 + 3;
  }
  return (uint)pvVar3;
}

/* ref: hkaMirroredAnimation::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d6c020(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xd6c020u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  int iVar1;
  int iVar2;
  uint uVar3;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x28))) + 0x24))))
            (*((int * PTR32 *)GEN_TOP((param_1 + 0x28))) GEN_EDX_ARG,param_2,(undefined4)gen_fl2bits(param_3),param_4 + 0xc,
             param_5 - 6);
  iVar1 = *((int *)GEN_TOP((param_1 + 0x2c)));
  if (*((int *)GEN_TOP((iVar1 + 0x14))) < 1) {
    *param_4 = 0;
    param_4[1] = 0;
  }
  else {
    iVar2 = *((int *)GEN_TOP((iVar1 + 0x14)));
    *param_4 = *((undefined4 *)GEN_TOP((iVar1 + 0x10)));
    param_4[1] = iVar2 * 2;
  }
  param_4[2] = param_1;
  param_4[3] = 0x38;
  uVar3 = F_00d86a10(*((undefined * PTR32 *)GEN_TOP((param_1 + 0x30))) GEN_EDX_ARG,param_4 + 4);
  return uVar3;
}

/* ref: FUN_00d6c0a0 */
GEN_LIB GEN_FRAME uint F_00d6c0a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(int param_7, unsigned int gen_a6), GEN_P(int param_8, unsigned int gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8), GEN_P(undefined4 param_10, unsigned int gen_a9))
{
  GEN_ENTER(0xd6c0a0u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(int param_7 = (int)gen_a6;)
  GEN_PIN(int param_8 = (int)gen_a7;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a8;)
  GEN_PIN(undefined4 param_10 = (undefined4)gen_a9;)
  undefined4 * puVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  int iVar4;
  LPVOID pvVar5;
  
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar3 + 4)));
  if (puVar1 < *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar3 + 0xc)))) {
    *puVar1 = ((char *)REFP(0x113729c));
    puVar1[3] = ((char *)REFP(0x1137288));
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar3 + 4))) = puVar1 + 4;
  }
  iVar4 = param_7 + 0x30;
  switch((unsigned int)(uintptr_t)(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_7 + 0x30))) + 8))))) {
  case 1: ;
    F_00d6ae50(param_1,param_2,param_3,param_9,param_4,param_10,iVar4,param_8 - 6);
    break;
  case 3: ;
    F_00d6de50(param_1,param_2,param_3,param_9,param_4,param_10,iVar4,param_8 - 6);
    break;
  case 4: ;
    F_00d693e0(param_1,param_2,param_3,param_4,param_5,param_6,iVar4,param_8 - 6,param_9,param_10
                );
    break;
  case 5: ;
    F_00d721f0(param_1,param_2,param_3,param_4,param_5,param_6,iVar4,param_8 - 6,param_9,param_10
                );
  }
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar3 + 4)));
  if (puVar1 < *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar3 + 0xc)))) {
    *puVar1 = ((char *)REFP(0x1137278));
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar3 + 4))) = puVar1 + 3;
  }
  F_00d6be50(param_7,param_3,param_9);
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar5 + 4)));
  pvVar3 = pvVar5;
  if (puVar1 < *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar5 + 0xc)))) {
    *puVar1 = &REFG(undefined, 0x1134dd0);
    uVar2 = rdtsc();
    pvVar3 = (LPVOID)uVar2;
    puVar1[1] = pvVar3;
    *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar5 + 4))) = puVar1 + 3;
  }
  return (uint)pvVar3;
}

/* ref: FUN_00d6c240 */
GEN_LIB GEN_FRAME uint F_00d6c240(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(int param_7, unsigned int gen_a6), GEN_P(int param_8, unsigned int gen_a7))
{
  GEN_ENTER(0xd6c240u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(int param_7 = (int)gen_a6;)
  GEN_PIN(int param_8 = (int)gen_a7;)
  undefined4 * puVar1;
  int iVar2;
  undefined8 uVar3;
  LPVOID pvVar4;
  LPVOID pvVar5;
  
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar4 + 4)));
  if (puVar1 < *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar4 + 0xc)))) {
    *puVar1 = ((char *)REFP(0x113729c));
    puVar1[3] = ((char *)REFP(0x1137288));
    uVar3 = rdtsc();
    puVar1[1] = (int)uVar3;
    *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar4 + 4))) = puVar1 + 4;
  }
  iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_7 + 0x30))) + 8)));
  if (iVar2 == 1) {
    F_00d6ae50(param_1,param_2,param_3,param_4,param_5,param_6,param_7 + 0x30,param_8 - 6);
  }
  else if (iVar2 == 3) {
    F_00d6de50(param_1,param_2,param_3,param_4,param_5,param_6,param_7 + 0x30,param_8 - 6);
  }
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar4 + 4)));
  if (puVar1 < *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar4 + 0xc)))) {
    *puVar1 = ((char *)REFP(0x1137278));
    uVar3 = rdtsc();
    puVar1[1] = (int)uVar3;
    *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar4 + 4))) = puVar1 + 3;
  }
  F_00d6be50(param_7,param_3,param_4);
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar5 + 4)));
  pvVar4 = pvVar5;
  if (puVar1 < *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar5 + 0xc)))) {
    *puVar1 = &REFG(undefined, 0x1134dd0);
    uVar3 = rdtsc();
    pvVar4 = (LPVOID)uVar3;
    puVar1[1] = pvVar4;
    *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar5 + 4))) = puVar1 + 3;
  }
  return (uint)pvVar4;
}

/* ref: hkaMirroredAnimation::vf12 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d6c360(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd6c360u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x18))) + 0xc))))
            (*((int * PTR32 *)GEN_TOP((param_1 + 0x18))) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),param_3);
  uVar1 = F_00d86720(*((undefined * PTR32 *)GEN_TOP((param_1 + 0x30))) GEN_EDX_ARG,param_3);
  return uVar1;
}

/* ref: hkaMirroredAnimation::vf13 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d6c390(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(float param_6, float gen_a5), GEN_P(float param_7, float gen_a6))
{
  GEN_ENTER(0xd6c390u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(float param_6 = (float)gen_a5;)
  GEN_PIN(float param_7 = (float)gen_a6;)
  uint uVar1;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x18))) + 0x10))))
            (*((int * PTR32 *)GEN_TOP((param_1 + 0x18))) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),
             (undefined4)gen_fl2bits(param_3),param_4,param_5,(undefined4)gen_fl2bits(param_6),
             (undefined4)gen_fl2bits(param_7));
  uVar1 = F_00d86720(*((undefined * PTR32 *)GEN_TOP((param_1 + 0x30))) GEN_EDX_ARG,param_5);
  return uVar1;
}

/* ref: FUN_00d6c3f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d6c3f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd6c3f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  uint * puVar1;
  ushort * puVar2;
  undefined4 in_ecx;
  ushort uVar3;
  LPVOID pvVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined2 * puVar7;
  int iVar8;
  int iVar9;
  undefined * pvVar10;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  puVar5 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar4 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar4 + 0x2c))) GEN_EDX_ARG,0x2c)));
  *(undefined2 *)(puVar5 + 1) = 0x2c;
  iVar9 = *((int *)GEN_TOP(((int)this + 0x2c)));
  *((undefined2 *)GEN_TOP(((int)puVar5 + 6))) = 1;
  *puVar5 = (*(undefined * PTR32 (*)[3])REFP(0x1136b9c));
  F_00d914e0(puVar5 + 2 GEN_EDX_ARG,iVar9 + 8);
  if (*((undefined * PTR32 *)GEN_TOP((iVar9 + 0xc))) != ((undefined *)GEN_TOP(0x0))) {
    F_00d919e0(*((undefined * PTR32 *)GEN_TOP((iVar9 + 0xc))) GEN_EDX_ARG);
  }
  puVar5[3] = *((undefined4 *)GEN_TOP((iVar9 + 0xc)));
  puVar5[4] = 0;
  puVar5[5] = 0;
  puVar1 = puVar5 + 4;
  puVar5[6] = 0x80000000;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0x80000000;
  *(undefined1 *)(puVar5 + 10) = *((undefined1 *)GEN_TOP((iVar9 + 0x28)));
  uVar6 = puVar5[6] & 0x3fffffff;
  if ((int)uVar6 < *((int *)GEN_TOP((iVar9 + 0x14)))) {
    if ((puVar5[6] & 0x80000000) == 0) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*puVar1,uVar6 * 2);
    }
    (*(int *)(gen_frame + 0x4)) = *((int *)GEN_TOP((iVar9 + 0x14))) * 2;
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x4)));
    *puVar1 = uVar6;
    puVar5[6] = (*(int *)(gen_frame + 0x4)) / 2;
  }
  puVar2 = *((ushort * PTR32 *)GEN_TOP((iVar9 + 0x14)));
  puVar7 = ((undefined2 *)GEN_TOP(*puVar1));
  puVar5[5] = puVar2;
  if (0 < (int)puVar2) {
    iVar8 = *((int *)GEN_TOP((iVar9 + 0x10))) - (int)puVar7;
    (*(ushort * PTR32 *)(gen_frame + 0x0)) = puVar2;
    do {
      *puVar7 = *((undefined2 *)GEN_TOP((iVar8 + (int)puVar7)));
      puVar7 = puVar7 + 1;
      puVar2 = ((ushort *)GEN_TOP(((int)(*(ushort * PTR32 *)(gen_frame + 0x0)) - 1)));
      (*(ushort * PTR32 *)(gen_frame + 0x0)) = puVar2;
    } while (puVar2 != ((ushort *)GEN_TOP(0x0)));
  }
  uVar6 = puVar5[9] & 0x3fffffff;
  if ((int)uVar6 < *((int *)GEN_TOP((iVar9 + 0x20)))) {
    if (-1 < (int)puVar5[9]) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),puVar5[7],uVar6 * 2);
    }
    (*(ushort * PTR32 *)(gen_frame + 0x0)) = ((ushort *)GEN_TOP((*((int *)GEN_TOP((iVar9 + 0x20))) * 2)));
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(ushort * PTR32 *)(gen_frame + 0x0)));
    puVar5[7] = uVar6;
    puVar5[9] = (int)((int)(uintptr_t)(*(ushort * PTR32 *)(gen_frame + 0x0))) / 2;
  }
  pvVar10 = (*(undefined * PTR32 *)(gen_frame + 0x8));
  iVar8 = *((int *)GEN_TOP((iVar9 + 0x20)));
  puVar7 = ((undefined2 *)GEN_TOP(puVar5[7]));
  puVar5[8] = iVar8;
  if (0 < iVar8) {
    iVar9 = *((int *)GEN_TOP((iVar9 + 0x1c))) - (int)puVar7;
    do {
      *puVar7 = *((undefined2 *)GEN_TOP((iVar9 + (int)puVar7)));
      puVar7 = puVar7 + 1;
      iVar8 = iVar8 - 1;
    } while (iVar8 != 0);
  }
  F_00d919e0((*(undefined * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  if (((undefined *)GEN_TOP(puVar5[3])) != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(((undefined *)GEN_TOP(puVar5[3])) GEN_EDX_ARG);
  }
  puVar5[3] = pvVar10;
  if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar10 + 0x2c))) + 0x14))) == 0) {
    iVar9 = *((int *)GEN_TOP(((int)pvVar10 + 0x10)));
    if ((int)(puVar5[6] & 0x3fffffff) < iVar9) {
      iVar8 = (puVar5[6] & 0x3fffffff) * 2;
      if (iVar8 <= iVar9) {
        iVar8 = iVar9;
      }
      F_00d95690(&REFG(undefined * PTR32, 0x13516ac),puVar1,iVar8,2);
    }
    puVar5[5] = iVar9;
    iVar9 = 0;
    if (0 < (int)puVar5[5]) {
      do {
        in_ecx = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x30)));
        (*(ushort * PTR32 *)(gen_frame + 0x0)) = ((ushort *)GEN_TOP((*puVar1 + iVar9 * 2)));
        uVar3 = F_00d86120(in_ecx GEN_EDX_ARG,iVar9);
        iVar9 = iVar9 + 1;
        *(*(ushort * PTR32 *)(gen_frame + 0x0)) = uVar3;
      } while (iVar9 < (int)puVar5[5]);
      return (uint)puVar5;
    }
  }
  else {
    iVar9 = puVar5[5];
    (*(int *)(gen_frame + 0x4)) = 0;
    if (0 < iVar9) {
      do {
        uVar6 = *puVar1;
        iVar9 = (*(int *)(gen_frame + 0x4)) * 2;
        uVar3 = F_00d86120(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x30))) GEN_EDX_ARG,
                             (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar10 + 0x2c))) + 0x10))) + iVar9))));
        *((ushort *)GEN_TOP((uVar6 + iVar9))) = uVar3;
        iVar9 = (*(int *)(gen_frame + 0x4)) + 1;
        (*(int *)(gen_frame + 0x4)) = iVar9;
        pvVar10 = (*(undefined * PTR32 *)(gen_frame + 0x8));
      } while (iVar9 < (int)puVar5[5]);
    }
  }
  return (uint)puVar5;
}

/* ref: FUN_00d6c640 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d6c640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd6c640u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  F_00d739c0(this GEN_EDX_FWD,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x11372b4));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 2;
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x28))) = param_1;
  *((int *)GEN_TOP(((int)this + 0x2c))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = param_3;
  F_00d919e0(param_1 GEN_EDX_ARG);
  F_00d919e0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x30))) GEN_EDX_ARG);
  F_00d919e0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x2c))) GEN_EDX_ARG);
  *((bool *)GEN_TOP(((int)this + 0x34))) = *((char *)GEN_TOP((param_2 + 0x28))) == '\x01';
  return (uint)this;
}

/* ref: FUN_00d6c6a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d6c6a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd6c6a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x11372b4));
  F_00d91a80(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x28))) GEN_EDX_FWD);
  F_00d91a80(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x30))) GEN_EDX_ARG);
  F_00d91a80(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x2c))) GEN_EDX_ARG);
  uVar1 = F_00d3e6d0(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00d6c6d0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d6c6d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd6c6d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    F_00d919e0(param_1 GEN_EDX_FWD);
  }
  if (*(undefined * PTR32 *)this != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_ARG);
  }
  *(undefined * PTR32 *)this = param_1;
  return;
}

/* ref: FUN_00d6c730 */
GEN_LIB GEN_FRAME uint F_00d6c730(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd6c730u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  *((short *)GEN_TOP((uVar2 + 4))) = (short)param_1;
  return uVar2;
}

/* ref: FUN_00d6c760 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d6c760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd6c760u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  *(undefined4 *)this = param_1;
  *((int *)GEN_TOP(((int)this + 4))) = param_2 * 2;
  return param_2 * 2;
}

/* ref: FUN_00d6c780 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d6c780(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd6c780u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *in_ecx = param_2;
  in_ecx[1] = 0x38;
  return param_2;
}

/* ref: FUN_00d6c7a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d6c7a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd6c7a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  code * pcVar1;
  uint uVar2;
  undefined2 * puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = (*(int *)&gen_args[0]);
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x1136b9c));
  F_00d914e0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,(*(int *)&gen_args[0]) + 8);
  if (*((undefined * PTR32 *)GEN_TOP((iVar6 + 0xc))) != ((undefined *)GEN_TOP(0x0))) {
    F_00d919e0(*((undefined * PTR32 *)GEN_TOP((iVar6 + 0xc))) GEN_EDX_ARG);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = *((undefined4 *)GEN_TOP((iVar6 + 0xc)));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0x80000000;
  *((undefined1 *)GEN_TOP(((int)this + 0x28))) = *((undefined1 *)GEN_TOP((iVar6 + 0x28)));
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x18))) & 0x3fffffff;
  if ((int)uVar2 < *((int *)GEN_TOP((iVar6 + 0x14)))) {
    if ((*((uint *)GEN_TOP(((int)this + 0x18))) & 0x80000000) == 0) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x10))),uVar2 * 2);
    }
    (*(int *)&gen_args[0]) = *((int *)GEN_TOP((iVar6 + 0x14))) * 2;
    pcVar1 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc)));
    uVar2 = (*pcVar1)(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[0]));
    *((uint *)GEN_TOP(((int)this + 0x10))) = uVar2;
    *((int *)GEN_TOP(((int)this + 0x18))) = (*(int *)&gen_args[0]) / 2;
  }
  iVar4 = *((int *)GEN_TOP((iVar6 + 0x14)));
  puVar3 = *((undefined2 * PTR32 *)GEN_TOP(((int)this + 0x10)));
  *((int *)GEN_TOP(((int)this + 0x14))) = iVar4;
  if (0 < iVar4) {
    iVar5 = *((int *)GEN_TOP((iVar6 + 0x10))) - (int)puVar3;
    do {
      *puVar3 = *((undefined2 *)GEN_TOP((iVar5 + (int)puVar3)));
      puVar3 = puVar3 + 1;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x24))) & 0x3fffffff;
  if ((int)uVar2 < *((int *)GEN_TOP((iVar6 + 0x20)))) {
    if (-1 < (int)*((uint *)GEN_TOP(((int)this + 0x24)))) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x1c))),uVar2 * 2);
    }
    (*(int *)&gen_args[0]) = *((int *)GEN_TOP((iVar6 + 0x20))) * 2;
    pcVar1 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc)));
    uVar2 = (*pcVar1)(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[0]));
    *((uint *)GEN_TOP(((int)this + 0x1c))) = uVar2;
    *((int *)GEN_TOP(((int)this + 0x24))) = (*(int *)&gen_args[0]) / 2;
  }
  iVar4 = *((int *)GEN_TOP((iVar6 + 0x20)));
  puVar3 = *((undefined2 * PTR32 *)GEN_TOP(((int)this + 0x1c)));
  *((int *)GEN_TOP(((int)this + 0x20))) = iVar4;
  if (0 < iVar4) {
    iVar6 = *((int *)GEN_TOP((iVar6 + 0x1c))) - (int)puVar3;
    do {
      *puVar3 = *((undefined2 *)GEN_TOP((iVar6 + (int)puVar3)));
      puVar3 = puVar3 + 1;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  return (uint)this;
}

/* ref: FUN_00d6c900 */
GEN_LIB GEN_FRAME uint F_00d6c900(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd6c900u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkaMirroredAnimation::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d6c930(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd6c930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00d6c6a0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: FUN_00d6c970 */
GEN_LIB GEN_FRAME byte F_00d6c970(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd6c970u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = *((byte *)GEN_TOP(*param_1));
  *param_1 = ((byte *)GEN_TOP(*param_1)) + 1;
  return bVar1;
}

/* ref: FUN_00d6c980 */
GEN_LIB GEN_FRAME uint F_00d6c980(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd6c980u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  ushort uVar1;
  
  uVar1 = *((ushort *)GEN_TOP(*param_1));
  *param_1 = ((ushort *)GEN_TOP(*param_1)) + 1;
  return (uint)uVar1;
}

/* ref: FUN_00d6c9a0 */
GEN_LIB GEN_FRAME float F_00d6c9a0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd6c9a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  float fVar1;
  
  fVar1 = *((float *)GEN_TOP(*param_1));
  *param_1 = ((float *)GEN_TOP(*param_1)) + 1;
  return fVar1;
}

/* ref: FUN_00d6c9c0 */
GEN_LIB GEN_FRAME uint F_00d6c9c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd6c9c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  *param_2 = (*param_2 - 1) + param_1 & ~(param_1 - 1U);
  return (uint)param_2;
}

/* ref: FUN_00d6c9e0 */
GEN_LIB GEN_FRAME uint F_00d6c9e0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd6c9e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ~(*(int *)(&REFG(undefined, 0x1137300) + param_1 * 4) - 1U);
  *param_2 = (*param_2 - 1) + *(int *)(&REFG(undefined, 0x1137300) + param_1 * 4) & uVar1;
  return uVar1;
}

/* ref: FUN_00d6ca00 */
GEN_LIB GEN_FRAME uint F_00d6ca00(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd6ca00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return *(uint *)(&REFG(undefined, 0x1137318) + param_1 * 4);
}

/* ref: FUN_00d6ca10 */
GEN_LIB GEN_FRAME uint F_00d6ca10(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd6ca10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return *(uint *)(&REFG(undefined, 0x1137330) + param_1 * 4);
}

/* ref: FUN_00d6ca20 */
GEN_LIB GEN_FRAME float10 F_00d6ca20(GEN_P(float param_1, float gen_a0), GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd6ca20u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  return GEN_X87((float10)param_1 +
         ((float10)(ushort)param_3 * (float10)REFG(float, 0x1137338)) * ((float10)param_2 - (float10)param_1));
}

/* ref: FUN_00d6ca50 */
GEN_LIB GEN_FRAME uint F_00d6ca50(GEN_P(byte param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1), GEN_P(uint * param_3, unsigned int gen_a2), GEN_P(uint * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd6ca50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(byte param_1 = (byte)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(uint * param_4 = (uint *)(uintptr_t)gen_a3;)
  *param_2 = param_1 & 3;
  *param_3 = param_1 >> 2 & 0xf;
  *param_4 = (uint)(param_1 >> 6);
  return (uint)(param_1 >> 6);
}

/* ref: FUN_00d6ca80 */
GEN_LIB GEN_FRAME byte F_00d6ca80(GEN_P(byte param_1, unsigned int gen_a0), GEN_P(byte * param_2, unsigned int gen_a1), GEN_P(uint * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd6ca80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(byte param_1 = (byte)gen_a0;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a2;)
  *param_3 = param_1 >> 1 & 3;
  *param_2 = param_1 & 0xf9;
  return param_1 & 0xf9;
}

/* ref: FUN_00d6caa0 */
GEN_LIB GEN_FRAME float10 F_00d6caa0(GEN_P(float param_1, float gen_a0), GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd6caa0u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  return GEN_X87(((float10)(byte)param_3 * (float10)REFG(float, 0x10addc0)) * ((float10)param_2 - (float10)param_1) +
         (float10)param_1);
}

/* ref: FUN_00d6cad0 */
GEN_LIB GEN_FRAME uint F_00d6cad0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd6cad0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x13512a4))[(int)(param_1)])))(param_2,param_3);
  return uVar1;
}

/* ref: FUN_00d6caf0 */
GEN_LIB GEN_FRAME uint F_00d6caf0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(byte * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd6caf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(byte * param_4 = (byte *)(uintptr_t)gen_a3;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  bVar1 = (byte)param_3;
  if (param_4[param_1 + 1] <= (byte)param_3) {
    return param_1;
  }
  if ((byte)param_3 <= *param_4) {
    return param_2;
  }
  param_3 = param_2;
  iVar3 = param_1 + 1 + param_2;
  uVar4 = param_1 + 1;
  do {
    while( true ) {
      uVar2 = iVar3 / 2;
      if (param_4[uVar2] <= bVar1) break;
LAB_00d6cb32: ;
      iVar3 = param_3 + uVar2;
      uVar4 = uVar2;
    }
    if (bVar1 < param_4[uVar2 + 1]) {
      return uVar2;
    }
    if (bVar1 < param_4[uVar2]) goto LAB_00d6cb32;
    iVar3 = uVar2 + uVar4;
    param_3 = uVar2;
  } while( true );
}

/* ref: FUN_00d6cb60 */
GEN_LIB GEN_FRAME uint F_00d6cb60(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd6cb60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if ((((param_2 != 0) && (param_2 != 1)) && (param_2 != 2)) &&
     (((param_2 != 3 && (param_2 != 4)) && (param_2 != 5)))) {
    *param_1 = 0;
    return (uint)param_1;
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00d6cba0 */
GEN_LIB GEN_FRAME uint F_00d6cba0(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd6cba0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if ((param_2 != 0) && (param_2 != 1)) {
    *param_1 = 0;
    return (uint)param_1;
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00d6cbd0 */
GEN_LIB GEN_FRAME float F_00d6cbd0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd6cbd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  float fVar1;
  
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    fVar1 = F_00d88600();
    return fVar1;
  case 1: ;
    fVar1 = F_00d88610();
    return fVar1;
  case 2: ;
    fVar1 = F_00d88620();
    return fVar1;
  case 3: ;
    fVar1 = F_00d885f0();
    return fVar1;
  case 4: ;
    fVar1 = F_00d885e0();
    return fVar1;
  case 5: ;
    fVar1 = F_00d88630();
    return fVar1;
  default: ;
    return (float)(float10)0;
  }
}

/* ref: FUN_00d6cc30 */
GEN_LIB GEN_FRAME double F_00d6cc30(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd6cc30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  if (param_1 == 0) {
    return (double)REFG(float, 0x1131544);
  }
  if (param_1 != 1) {
    return 0.0;
  }
  return (double)REFG(float, 0x1131540);
}

/* ref: hkaSplineCompressedAnimation::vf7 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d6cc60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd6cc60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x28)));
}

/* ref: hkaSplineCompressedAnimation::vf8 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d6cc70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd6cc70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return 3;
}

/* ref: hkaSplineCompressedAnimation::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d6cc80(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd6cc80u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))
                    (param_1 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),param_1[4],param_3,param_1[5],param_4)
  ;
  return uVar1;
}

/* ref: FUN_00d6ccd0 */
GEN_LIB GEN_FRAME uint F_00d6ccd0(GEN_P(byte * param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1), GEN_P(uint * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(float param_5, float gen_a4), GEN_P(int param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xd6ccd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  int iVar1;
  byte bVar2;
  ushort * puVar3;
  int * piVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  float * pfVar8;
  int iVar9;
  uint uVar10;
  
  piVar4 = (int *)param_1;
  puVar3 = *(ushort * PTR32 *)param_1;
  uVar7 = (uint)*puVar3;
  *(ushort * PTR32 *)param_1 = puVar3 + 1;
  iVar1 = (int)puVar3 + 3;
  uVar10 = (uint)(byte)puVar3[1];
  *(int *)param_1 = iVar1;
  uVar5 = F_00d6caf0(uVar7,uVar10,param_4,iVar1);
  iVar6 = 0;
  if (3 < uVar10 * 2) {
    pfVar8 = ((float *)GEN_TOP((param_6 + 8)));
    do {
      iVar9 = (iVar1 - uVar10) + iVar6 + uVar5;
      pfVar8[-2] = (float)*((byte *)GEN_TOP((iVar9 + 1))) * param_5;
      pfVar8[-1] = (float)*((byte *)GEN_TOP((iVar9 + 2))) * param_5;
      *pfVar8 = (float)*((byte *)GEN_TOP((iVar9 + 3))) * param_5;
      pfVar8[1] = (float)*((byte *)GEN_TOP((iVar9 + 4))) * param_5;
      iVar6 = iVar6 + 4;
      pfVar8 = pfVar8 + 4;
    } while (iVar6 < (int)(uVar10 * 2 - 3));
  }
  if (iVar6 < (int)(uVar10 * 2)) {
    param_1 = ((byte *)GEN_TOP(((*(int *)param_1 - uVar10) + iVar6 + 1 + uVar5)));
    do {
      bVar2 = *param_1;
      param_1 = param_1 + 1;
      *((float *)GEN_TOP((param_6 + iVar6 * 4))) = (float)bVar2 * param_5;
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)(uVar10 * 2));
  }
  *piVar4 = (int)puVar3 + uVar10 + 5 + uVar7;
  *param_2 = uVar7;
  *param_3 = uVar10;
  return uVar5;
}

/* ref: FUN_00d6cdf0 */
GEN_LIB GEN_FRAME unsigned int F_00d6cdf0(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xd6cdf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  undefined * PTR32 * ppuVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  *param_1 = (*param_1 - 1) + *(int *)(&REFG(undefined, 0x1137300) + param_2 * 4) &
             ~(*(int *)(&REFG(undefined, 0x1137300) + param_2 * 4) - 1U);
  iVar2 = *(int *)(&REFG(undefined, 0x1137318) + param_2 * 4);
  if (-1 < param_4) {
    iVar3 = (param_5 - param_4) * iVar2;
    ppuVar1 = &REFG(undefined * PTR32, 0x13512a4) + param_2;
    param_2 = param_4 + 1;
    iVar4 = param_6;
    do {
      (*(code *)*ppuVar1)(*param_1 + iVar3,iVar4);
      iVar3 = iVar3 + iVar2;
      iVar4 = iVar4 + 0x10;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  *param_1 = *param_1 + (param_3 + 1) * iVar2;
  return 0;
}

/* ref: FUN_00d6ce90 */
GEN_LIB GEN_FRAME float F_00d6ce90(GEN_P(float in_xmm0, float gen_a0), GEN_P(float in_xmm1, float gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xd6ce90u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  GEN_PIN(float in_xmm0 = (float)gen_a0;)
  GEN_PIN(float in_xmm1 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  if ((!(in_xmm1 < in_xmm0)) && (in_xmm0 = param_3, !(param_3 < in_xmm1))) {
    in_xmm0 = in_xmm1;
  }
  return in_xmm0;
}

/* ref: FUN_00d6ceb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d6ceb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd6ceb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x220, 0);
  byte bVar1;
  char cVar2;
  bool bVar3;
  char * pcVar4;
  float fVar5;
  double dVar6;
  
  bVar1 = *((byte *)GEN_TOP(((int)this + 0x19)));
  pcVar4 = ((char *)GEN_TOP(F_00d6cba0(&(*(char *)(gen_frame + 0x21b)),(uint)bVar1)));
  if (*pcVar4 != '\0') {
    pcVar4 = ((char *)GEN_TOP(F_00d6cb60(&(*(undefined1 *)(gen_frame + 0x203)),(uint)*((byte *)GEN_TOP(((int)this + 0x18))))));
    if (*pcVar4 != '\0') {
      pcVar4 = ((char *)GEN_TOP(F_00d6cba0(&(*(undefined1 *)(gen_frame + 0x213)),(uint)*((byte *)GEN_TOP(((int)this + 0x1a))))));
      if (*pcVar4 != '\0') {
        pcVar4 = ((char *)GEN_TOP(F_00d6cba0(&(*(undefined1 *)(gen_frame + 0x21a)),(uint)*((byte *)GEN_TOP(((int)this + 0x1b))))));
        cVar2 = *pcVar4;
        (*(char *)(gen_frame + 0x21b)) = '\x01';
        if (cVar2 != '\0') goto LAB_00d6cf1d;
      }
    }
  }
  (*(char *)(gen_frame + 0x21b)) = '\0';
LAB_00d6cf1d: ;
  (*(float *)(gen_frame + 0x214)) = *((float *)GEN_TOP(((int)this + 4)));
  if ((((0.0 <= *((float *)GEN_TOP(((int)this + 4)))) && (0.0 <= *(float *)this)) &&
      (0.0 <= *((float *)GEN_TOP(((int)this + 8))))) && (0.0 <= *((float *)GEN_TOP(((int)this + 0xc))))) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  dVar6 = F_00d6cc30((uint)bVar1);
  if ((double)(*(float *)(gen_frame + 0x214)) < dVar6) {
    F_00da0a80(((undefined1 *)(gen_frame + 0x204)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
    F_00d9fe80(((undefined1 *)(gen_frame + 0x204)) GEN_EDX_ARG,
                 ((char *)REFP(0x1137538))
                );
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
              (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,1,0xabba5a61,((undefined1 *)(gen_frame + 0x0)),
               ((char *)REFP(0x11374f8)),0x4f);
    F_00d9fda0(((undefined1 *)(gen_frame + 0x204)) GEN_EDX_ARG);
  }
  dVar6 = F_00d6cc30((uint)*((byte *)GEN_TOP(((int)this + 0x1a))));
  if ((double)*((float *)GEN_TOP(((int)this + 8))) < dVar6) {
    F_00da0a80(((undefined1 *)(gen_frame + 0x204)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
    F_00d9fe80(((undefined1 *)(gen_frame + 0x204)) GEN_EDX_ARG,
                 ((char *)REFP(0x1137478))
                );
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
              (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,1,0xabba5a61,((undefined1 *)(gen_frame + 0x0)),
               ((char *)REFP(0x11374f8)),0x54);
    F_00d9fda0(((undefined1 *)(gen_frame + 0x204)) GEN_EDX_ARG);
  }
  dVar6 = F_00d6cc30((uint)*((byte *)GEN_TOP(((int)this + 0x1b))));
  if ((double)*((float *)GEN_TOP(((int)this + 0xc))) < dVar6) {
    F_00da0a80(((undefined1 *)(gen_frame + 0x204)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
    F_00d9fe80(((undefined1 *)(gen_frame + 0x204)) GEN_EDX_ARG,
                 ((char *)REFP(0x11373f8))
                );
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
              (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,1,0xabba5a61,((undefined1 *)(gen_frame + 0x0)),
               ((char *)REFP(0x11374f8)),0x59);
    F_00d9fda0(((undefined1 *)(gen_frame + 0x204)) GEN_EDX_ARG);
  }
  (*(float *)(gen_frame + 0x214)) = *(float *)this;
  fVar5 = F_00d6cbd0((uint)*((byte *)GEN_TOP(((int)this + 0x18))));
  if ((float10)(*(float *)(gen_frame + 0x214)) < (float10)fVar5 * (float10)*(float *)&REFG(undefined, 0x11373f4)) {
    F_00da0a80(((undefined1 *)(gen_frame + 0x204)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
    F_00d9fe80(((undefined1 *)(gen_frame + 0x204)) GEN_EDX_ARG,
                 ((char *)REFP(0x1137370))
                );
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
              (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,1,0xabba5a61,((undefined1 *)(gen_frame + 0x0)),
               ((char *)REFP(0x11374f8)),100);
    F_00d9fda0(((undefined1 *)(gen_frame + 0x204)) GEN_EDX_ARG);
  }
  if (((*(char *)(gen_frame + 0x21b)) != '\0') && (bVar3)) {
    *param_1 = 1;
    return (uint)param_1;
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00d6d110 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d6d110(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd6d110u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 0x78))) + 0x84 +
         (*((int *)GEN_TOP((in_ecx + 0x6c))) + *((int *)GEN_TOP((in_ecx + 0x60))) + *((int *)GEN_TOP((in_ecx + 0x48)))) * 4;
}

/* ref: hkaSplineCompressedAnimation::vf10 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d6d130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd6d130u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar3 = *(int *)(this + 0x48) - 1;
  if (-1 < iVar3) {
    piVar4 = ((int *)GEN_TOP((*(int *)(this + 0x44) + iVar3 * 4)));
    iVar2 = *(int *)(this + 0x78);
    do {
      iVar1 = *piVar4;
      iVar2 = iVar2 - iVar1;
      if (iVar5 <= iVar2) {
        iVar5 = iVar2;
      }
      piVar4 = piVar4 - 1;
      iVar3 = iVar3 - 1;
      iVar2 = iVar1;
    } while (-1 < iVar3);
  }
  return (iVar5 + 0xfU & 0xfffffff0) + 0xa0;
}

/* ref: FUN_00d6d170 */
GEN_LIB GEN_FRAME uint F_00d6d170(GEN_P(float param_1, float gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(float * param_4, unsigned int gen_a3), GEN_P(float * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xd6d170u, gen_trace_f(gen_a0), gen_a1, gen_a2, gen_a3);
  GEN_PIN(float param_1 = (float)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a3;)
  GEN_PIN(float * param_5 = (float *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL_TOP(0x40, 0, 4);
  float fVar1;
  float * pfVar2;
  float * pfVar3;
  int iVar4;
  uint uVar5;
  float * pfVar6;
  float * pfVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  iVar8 = 1;
  ((float *)(gen_frame + 0x1c))[3] = gen_bits2f(REFG(float, 0x1087f04));
  if (0 < param_2) {
    pfVar7 = ((float *)GEN_TOP((param_3 - 4 + param_2 * 4)));
    (*(float * PTR32 *)(gen_frame + 0x38)) = pfVar7 + 1;
    do {
      pfVar6 = (*(float * PTR32 *)(gen_frame + 0x38));
      ((float *)(gen_frame + 0x8))[(int)(iVar8)] = param_1 - *pfVar7;
      iVar4 = 0;
      ((float *)(gen_frame + 0x8))[(int)(iVar8 + 4)] = *pfVar6 - param_1;
      fVar11 = 0.0;
      if (3 < iVar8) {
        pfVar6 = ((float *)GEN_TOP(((gen_frame + 0x0) + iVar8 * 4)));
        do {
          fVar13 = pfVar6[2];
          fVar9 = ((float *)(gen_frame + 0x8))[(int)(iVar4 + 8)] / (((float *)(gen_frame + 0x8))[(int)(iVar4 + 5)] + fVar13);
          ((float *)(gen_frame + 0x8))[(int)(iVar4 + 8)] = ((float *)(gen_frame + 0x8))[(int)(iVar4 + 5)] * fVar9 + fVar11;
          fVar11 = pfVar6[1];
          fVar12 = ((float *)(gen_frame + 0x8))[(int)(iVar4 + 9)] / (((float *)(gen_frame + 0x8))[(int)(iVar4 + 6)] + fVar11);
          fVar10 = *pfVar6;
          ((float *)(gen_frame + 0x8))[(int)(iVar4 + 9)] = ((float *)(gen_frame + 0x8))[(int)(iVar4 + 6)] * fVar12 + fVar13 * fVar9;
          fVar13 = ((float *)(gen_frame + 0x8))[(int)(iVar4 + 10)] / (((float *)(gen_frame + 0x8))[(int)(iVar4 + 7)] + fVar10);
          ((float *)(gen_frame + 0x8))[(int)(iVar4 + 10)] = ((float *)(gen_frame + 0x8))[(int)(iVar4 + 7)] * fVar13 + fVar11 * fVar12;
          fVar9 = ((float *)(gen_frame + 0x8))[(int)(iVar4 + 0xb)] / (((float *)(gen_frame + 0x8))[(int)(iVar4 + 8)] + pfVar6[-1]);
          fVar11 = fVar9 * pfVar6[-1];
          ((float *)(gen_frame + 0x8))[(int)(iVar4 + 0xb)] = ((float *)(gen_frame + 0x8))[(int)(iVar4 + 8)] * fVar9 + fVar10 * fVar13;
          iVar4 = iVar4 + 4;
          pfVar6 = pfVar6 - 4;
        } while (iVar4 < iVar8 - 3);
      }
      if (iVar4 < iVar8) {
        pfVar6 = ((float *)(gen_frame + 0x8)) + (iVar8 - iVar4);
        do {
          fVar13 = *pfVar6;
          fVar10 = ((float *)(gen_frame + 0x8))[(int)(iVar4 + 8)] / (((float *)(gen_frame + 0x8))[(int)(iVar4 + 5)] + fVar13);
          ((float *)(gen_frame + 0x8))[(int)(iVar4 + 8)] = ((float *)(gen_frame + 0x8))[(int)(iVar4 + 5)] * fVar10 + fVar11;
          iVar4 = iVar4 + 1;
          pfVar6 = pfVar6 - 1;
          fVar11 = fVar13 * fVar10;
        } while (iVar4 < iVar8);
      }
      (*(float * PTR32 *)(gen_frame + 0x38)) = (*(float * PTR32 *)(gen_frame + 0x38)) + 1;
      ((float *)(gen_frame + 0x8))[(int)(iVar8 + 8)] = fVar11;
      iVar8 = iVar8 + 1;
      pfVar7 = pfVar7 - 1;
    } while (iVar8 <= param_2);
  }
  uVar5 = 0;
  fVar11 = 0.0;
  fVar13 = 0.0;
  fVar10 = 0.0;
  fVar9 = 0.0;
  pfVar7 = param_4;
  if (param_2 < 0) {
    *param_5 = 0.0;
    param_5[1] = 0.0;
    param_5[2] = 0.0;
    param_5[3] = 0.0;
    return (uint)param_5;
  }
  do {
    fVar12 = ((float *)(gen_frame + 0x8))[(int)(uVar5 + 8)];
    fVar1 = *pfVar7;
    pfVar6 = pfVar7 + 1;
    pfVar2 = pfVar7 + 2;
    pfVar3 = pfVar7 + 3;
    uVar5 = uVar5 + 1;
    pfVar7 = pfVar7 + 4;
    fVar11 = fVar11 + fVar12 * fVar1;
    fVar13 = fVar13 + fVar12 * *pfVar6;
    fVar10 = fVar10 + fVar12 * *pfVar2;
    fVar9 = fVar9 + fVar12 * *pfVar3;
  } while ((int)uVar5 <= param_2);
  *param_5 = fVar11;
  param_5[1] = fVar13;
  param_5[2] = fVar10;
  param_5[3] = fVar9;
  return uVar5;
}

/* ref: FUN_00d6d350 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d6d350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd6d350u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  char * pcVar1;
  int iVar2;
  int iVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  iVar2 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 4)))) {
    iVar3 = 0;
    do {
      pcVar1 = ((char *)GEN_TOP(F_00d6ceb0(((undefined *)GEN_TOP((*(int *)this + iVar3))) GEN_EDX_FWD,(int)&(*(undefined * PTR32 *)(gen_frame + 0x0)) + 3)));
      if (*pcVar1 == '\0') {
        *param_1 = 0;
        return (uint)param_1;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x1c;
    } while (iVar2 < *((int *)GEN_TOP(((int)this + 4))));
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: hkaSplineCompressedAnimation::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d6d3a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xd6d3a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  *param_3 = this;
  param_3[1] = 0x84;
  uVar2 = param_1 / (*(int *)(this + 0x30) - 1U);
  if ((int)uVar2 < 1) {
    uVar2 = 0;
  }
  uVar3 = *(int *)(this + 0x2c) - 1;
  if ((int)uVar3 <= (int)uVar2) {
    uVar2 = uVar3;
  }
  if (uVar2 == uVar3) {
    iVar4 = *(int *)(this + 0x78);
  }
  else {
    iVar4 = *((int *)GEN_TOP((*(int *)(this + 0x44) + 4 + uVar2 * 4)));
  }
  uVar2 = uVar2 * 4;
  iVar1 = *((int *)GEN_TOP((*(int *)(this + 0x44) + uVar2)));
  param_3[2] = *(int *)(this + 0x74) + *((int *)GEN_TOP((*(int *)(this + 0x44) + uVar2)));
  param_3[3] = (iVar4 - iVar1) + 0xfU & 0xfffffff0;
  param_3[4] = *(int *)(this + 0x50) + uVar2;
  param_3[5] = 4;
  return uVar2;
}

/* ref: FUN_00d6d410 */
GEN_LIB GEN_FRAME uint F_00d6d410(GEN_P(float param_1, float gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(float * param_4, unsigned int gen_a3), GEN_P(float * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xd6d410u, gen_trace_f(gen_a0), gen_a1, gen_a2, gen_a3);
  GEN_PIN(float param_1 = (float)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a3;)
  GEN_PIN(float * param_5 = (float *)(uintptr_t)gen_a4;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 in_XMM2 [16] = {0};
  undefined1 auVar15 [16];
  
  fVar10 = param_3[1] - param_1;
  fVar14 = param_1 - *param_3;
  (*(undefined4 *)((char *)&auVar15 + 4)) = (undefined4)gen_fl2bits(fVar10 + fVar14);
  (*(undefined4 *)((char *)&auVar15 + 0)) = (undefined4)gen_fl2bits(fVar10 + fVar14);
  (*(undefined4 *)((char *)&auVar15 + 8)) = (undefined4)gen_fl2bits(fVar10 + fVar14);
  (*(undefined4 *)((char *)&auVar15 + 12)) = (undefined4)gen_fl2bits(fVar10 + fVar14);
  gen_rcpps(&(auVar15), &(in_XMM2), &(auVar15));
  fVar11 = *(float *)&REFG(undefined, 0x1137344) - (*(float *)((char *)&auVar15 + 4)) * (fVar10 + fVar14);
  fVar12 = *(float *)&REFG(undefined, 0x1137348) - (*(float *)((char *)&auVar15 + 8)) * (fVar10 + fVar14);
  fVar13 = *(float *)&REFG(undefined, 0x113734c) - (*(float *)((char *)&auVar15 + 12)) * (fVar10 + fVar14);
  fVar1 = param_4[5];
  fVar2 = param_4[6];
  fVar3 = param_4[7];
  fVar4 = param_4[1];
  fVar5 = param_4[2];
  fVar6 = param_4[3];
  fVar7 = param_4[1];
  fVar8 = param_4[2];
  fVar9 = param_4[3];
  *param_5 = (param_4[4] - *param_4) *
             (((*(float *)&REFG(undefined, 0x1137340) - (*(float *)((char *)&auVar15 + 0)) * (fVar10 + fVar14)) * (*(float *)((char *)&auVar15 + 0))) *
             fVar14) + *param_4;
  param_5[1] = (fVar1 - fVar4) * ((fVar11 * (*(float *)((char *)&auVar15 + 4))) * fVar14) + fVar7;
  param_5[2] = (fVar2 - fVar5) * ((fVar12 * (*(float *)((char *)&auVar15 + 8))) * fVar14) + fVar8;
  param_5[3] = (fVar3 - fVar6) * ((fVar13 * (*(float *)((char *)&auVar15 + 12))) * fVar14) + fVar9;
  return (uint)param_5;
}

/* ref: FUN_00d6d470 */
GEN_LIB GEN_NOFRAME uint F_00d6d470(GEN_P(float param_1, float gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(float * param_4, unsigned int gen_a3), GEN_P(float * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xd6d470u, gen_trace_f(gen_a0), gen_a1, gen_a2, gen_a3);
  GEN_PIN(float param_1 = (float)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a3;)
  GEN_PIN(float * param_5 = (float *)(uintptr_t)gen_a4;)
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 in_XMM3 [16] = {0};
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  
  fVar13 = param_3[2] - param_1;
  fVar12 = param_1 - param_3[1];
  (*(undefined4 *)((char *)&auVar15 + 4)) = (undefined4)gen_fl2bits(fVar12 + fVar13);
  (*(undefined4 *)((char *)&auVar15 + 0)) = (undefined4)gen_fl2bits(fVar12 + fVar13);
  (*(undefined4 *)((char *)&auVar15 + 8)) = (undefined4)gen_fl2bits(fVar12 + fVar13);
  (*(undefined4 *)((char *)&auVar15 + 12)) = (undefined4)gen_fl2bits(fVar12 + fVar13);
  gen_rcpps(&(auVar15), &(in_XMM3), &(auVar15));
  (*(float *)((char *)&auVar25 + 0)) = (*(float *)((char *)&auVar15 + 0)) * (fVar12 + fVar13);
  (*(float *)((char *)&auVar25 + 4)) = (*(float *)((char *)&auVar15 + 4)) * (fVar12 + fVar13);
  (*(float *)((char *)&auVar25 + 8)) = (*(float *)((char *)&auVar15 + 8)) * (fVar12 + fVar13);
  (*(float *)((char *)&auVar25 + 12)) = (*(float *)((char *)&auVar15 + 12)) * (fVar12 + fVar13);
  fVar7 = ((*(float *)&REFG(undefined, 0x1137340) - (*(float *)((char *)&auVar25 + 0))) * (*(float *)((char *)&auVar15 + 0))) * *(float *)&REFG(undefined, 0x1137350);
  fVar9 = ((*(float *)&REFG(undefined, 0x1137344) - (*(float *)((char *)&auVar25 + 4))) * (*(float *)((char *)&auVar15 + 4))) * *(float *)&REFG(undefined, 0x1137354);
  fVar10 = ((*(float *)&REFG(undefined, 0x1137348) - (*(float *)((char *)&auVar25 + 8))) * (*(float *)((char *)&auVar15 + 8))) * *(float *)&REFG(undefined, 0x1137358);
  fVar11 = ((*(float *)&REFG(undefined, 0x113734c) - (*(float *)((char *)&auVar25 + 12))) * (*(float *)((char *)&auVar15 + 12))) * *(float *)&REFG(undefined, 0x113735c)
  ;
  fVar14 = param_1 - *param_3;
  fVar8 = param_3[3] - param_1;
  (*(float *)((char *)&auVar20 + 0)) = fVar14 + fVar13;
  (*(float *)((char *)&auVar20 + 4)) = fVar14 + fVar13;
  (*(float *)((char *)&auVar20 + 8)) = fVar14 + fVar13;
  (*(float *)((char *)&auVar20 + 12)) = fVar14 + fVar13;
  gen_rcpps(&(auVar15), &(auVar25), &(auVar20));
  (*(float *)((char *)&auVar21 + 0)) =
       ((*(float *)&REFG(undefined, 0x1137340) - (*(float *)((char *)&auVar15 + 0)) * (*(float *)((char *)&auVar20 + 0))) * (*(float *)((char *)&auVar15 + 0))) *
       (fVar7 * fVar13 + *(float *)&REFG(undefined, 0x1137360));
  (*(float *)((char *)&auVar21 + 4)) =
       ((*(float *)&REFG(undefined, 0x1137344) - (*(float *)((char *)&auVar15 + 4)) * (*(float *)((char *)&auVar20 + 4))) * (*(float *)((char *)&auVar15 + 4))) *
       (fVar9 * fVar13 + *(float *)&REFG(undefined, 0x1137364));
  (*(float *)((char *)&auVar21 + 8)) =
       ((*(float *)&REFG(undefined, 0x1137348) - (*(float *)((char *)&auVar15 + 8)) * (*(float *)((char *)&auVar20 + 8))) * (*(float *)((char *)&auVar15 + 8))) *
       (fVar10 * fVar13 + *(float *)&REFG(undefined, 0x1137368));
  (*(float *)((char *)&auVar21 + 12)) =
       ((*(float *)&REFG(undefined, 0x113734c) - (*(float *)((char *)&auVar15 + 12)) * (*(float *)((char *)&auVar20 + 12))) * (*(float *)((char *)&auVar15 + 12))) *
       (fVar11 * fVar13 + *(float *)&REFG(undefined, 0x113736c));
  fVar22 = (*(float *)((char *)&auVar21 + 4)) * fVar13 + *(float *)&REFG(undefined, 0x1137364);
  fVar23 = (*(float *)((char *)&auVar21 + 8)) * fVar13 + *(float *)&REFG(undefined, 0x1137368);
  fVar24 = (*(float *)((char *)&auVar21 + 12)) * fVar13 + *(float *)&REFG(undefined, 0x113736c);
  (*(undefined4 *)((char *)&auVar1 + 4)) = (undefined4)gen_fl2bits(fVar8 + fVar12);
  (*(undefined4 *)((char *)&auVar1 + 0)) = (undefined4)gen_fl2bits(fVar8 + fVar12);
  (*(undefined4 *)((char *)&auVar1 + 8)) = (undefined4)gen_fl2bits(fVar8 + fVar12);
  (*(undefined4 *)((char *)&auVar1 + 12)) = (undefined4)gen_fl2bits(fVar8 + fVar12);
  gen_rcpps(&(auVar15), &(auVar21), &(auVar1));
  fVar16 = ((*(float *)&REFG(undefined, 0x1137340) - (*(float *)((char *)&auVar15 + 0)) * (fVar8 + fVar12)) * (*(float *)((char *)&auVar15 + 0))) *
           (fVar7 * fVar12);
  fVar17 = ((*(float *)&REFG(undefined, 0x1137344) - (*(float *)((char *)&auVar15 + 4)) * (fVar8 + fVar12)) * (*(float *)((char *)&auVar15 + 4))) *
           (fVar9 * fVar12);
  fVar18 = ((*(float *)&REFG(undefined, 0x1137348) - (*(float *)((char *)&auVar15 + 8)) * (fVar8 + fVar12)) * (*(float *)((char *)&auVar15 + 8))) *
           (fVar10 * fVar12);
  fVar19 = ((*(float *)&REFG(undefined, 0x113734c) - (*(float *)((char *)&auVar15 + 12)) * (fVar8 + fVar12)) * (*(float *)((char *)&auVar15 + 12))) *
           (fVar11 * fVar12);
  fVar7 = param_4[5];
  fVar9 = param_4[6];
  fVar10 = param_4[7];
  fVar11 = param_4[1];
  fVar2 = param_4[2];
  fVar3 = param_4[3];
  fVar4 = param_4[9];
  fVar5 = param_4[10];
  fVar6 = param_4[0xb];
  *param_5 = ((fVar8 * fVar16 + fVar14 * (*(float *)((char *)&auVar21 + 0))) * param_4[4] +
             *param_4 * ((*(float *)((char *)&auVar21 + 0)) * fVar13 + *(float *)&REFG(undefined, 0x1137360))) +
             (fVar16 * fVar12) * param_4[8];
  param_5[1] = ((fVar8 * fVar17 + fVar14 * (*(float *)((char *)&auVar21 + 4))) * fVar7 + fVar11 * fVar22) +
               (fVar17 * fVar12) * fVar4;
  param_5[2] = ((fVar8 * fVar18 + fVar14 * (*(float *)((char *)&auVar21 + 8))) * fVar9 + fVar2 * fVar23) +
               (fVar18 * fVar12) * fVar5;
  param_5[3] = ((fVar8 * fVar19 + fVar14 * (*(float *)((char *)&auVar21 + 12))) * fVar10 + fVar3 * fVar24) +
               (fVar19 * fVar12) * fVar6;
  return (uint)param_5;
}

/* ref: FUN_00d6d580 */
GEN_LIB GEN_NOFRAME uint F_00d6d580(GEN_P(float param_1, float gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(float * param_4, unsigned int gen_a3), GEN_P(float * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xd6d580u, gen_trace_f(gen_a0), gen_a1, gen_a2, gen_a3);
  GEN_PIN(float param_1 = (float)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a3;)
  GEN_PIN(float * param_5 = (float *)(uintptr_t)gen_a4;)
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 in_XMM2 [16] = {0};
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  float fVar38;
  float fVar39;
  
  fVar6 = param_1 - param_3[2];
  fVar21 = param_3[3] - param_1;
  (*(undefined4 *)((char *)&auVar20 + 4)) = (undefined4)gen_fl2bits(fVar6 + fVar21);
  (*(undefined4 *)((char *)&auVar20 + 0)) = (undefined4)gen_fl2bits(fVar6 + fVar21);
  (*(undefined4 *)((char *)&auVar20 + 8)) = (undefined4)gen_fl2bits(fVar6 + fVar21);
  (*(undefined4 *)((char *)&auVar20 + 12)) = (undefined4)gen_fl2bits(fVar6 + fVar21);
  gen_rcpps(&(auVar20), &(in_XMM2), &(auVar20));
  (*(float *)((char *)&auVar32 + 0)) = (*(float *)((char *)&auVar20 + 0)) * (fVar6 + fVar21);
  (*(float *)((char *)&auVar32 + 4)) = (*(float *)((char *)&auVar20 + 4)) * (fVar6 + fVar21);
  (*(float *)((char *)&auVar32 + 8)) = (*(float *)((char *)&auVar20 + 8)) * (fVar6 + fVar21);
  (*(float *)((char *)&auVar32 + 12)) = (*(float *)((char *)&auVar20 + 12)) * (fVar6 + fVar21);
  fVar7 = ((*(float *)&REFG(undefined, 0x1137340) - (*(float *)((char *)&auVar32 + 0))) * (*(float *)((char *)&auVar20 + 0))) * *(float *)&REFG(undefined, 0x1137350);
  fVar11 = ((*(float *)&REFG(undefined, 0x1137344) - (*(float *)((char *)&auVar32 + 4))) * (*(float *)((char *)&auVar20 + 4))) * *(float *)&REFG(undefined, 0x1137354);
  fVar14 = ((*(float *)&REFG(undefined, 0x1137348) - (*(float *)((char *)&auVar32 + 8))) * (*(float *)((char *)&auVar20 + 8))) * *(float *)&REFG(undefined, 0x1137358);
  fVar17 = ((*(float *)&REFG(undefined, 0x113734c) - (*(float *)((char *)&auVar32 + 12))) * (*(float *)((char *)&auVar20 + 12))) * *(float *)&REFG(undefined, 0x113735c)
  ;
  fVar30 = param_1 - param_3[1];
  (*(undefined4 *)((char *)&auVar1 + 4)) = (undefined4)gen_fl2bits(fVar21 + fVar30);
  (*(undefined4 *)((char *)&auVar1 + 0)) = (undefined4)gen_fl2bits(fVar21 + fVar30);
  (*(undefined4 *)((char *)&auVar1 + 8)) = (undefined4)gen_fl2bits(fVar21 + fVar30);
  (*(undefined4 *)((char *)&auVar1 + 12)) = (undefined4)gen_fl2bits(fVar21 + fVar30);
  gen_rcpps(&(auVar20), &(auVar32), &(auVar1));
  (*(float *)((char *)&auVar33 + 0)) = (*(float *)((char *)&auVar20 + 0)) * (fVar21 + fVar30);
  (*(float *)((char *)&auVar33 + 4)) = (*(float *)((char *)&auVar20 + 4)) * (fVar21 + fVar30);
  (*(float *)((char *)&auVar33 + 8)) = (*(float *)((char *)&auVar20 + 8)) * (fVar21 + fVar30);
  (*(float *)((char *)&auVar33 + 12)) = (*(float *)((char *)&auVar20 + 12)) * (fVar21 + fVar30);
  fVar19 = param_3[4] - param_1;
  fVar8 = ((*(float *)&REFG(undefined, 0x1137340) - (*(float *)((char *)&auVar33 + 0))) * (*(float *)((char *)&auVar20 + 0))) *
          (fVar7 * fVar21 + *(float *)&REFG(undefined, 0x1137360));
  fVar12 = ((*(float *)&REFG(undefined, 0x1137344) - (*(float *)((char *)&auVar33 + 4))) * (*(float *)((char *)&auVar20 + 4))) *
           (fVar11 * fVar21 + *(float *)&REFG(undefined, 0x1137364));
  fVar15 = ((*(float *)&REFG(undefined, 0x1137348) - (*(float *)((char *)&auVar33 + 8))) * (*(float *)((char *)&auVar20 + 8))) *
           (fVar14 * fVar21 + *(float *)&REFG(undefined, 0x1137368));
  fVar18 = ((*(float *)&REFG(undefined, 0x113734c) - (*(float *)((char *)&auVar33 + 12))) * (*(float *)((char *)&auVar20 + 12))) *
           (fVar17 * fVar21 + *(float *)&REFG(undefined, 0x113736c));
  (*(undefined4 *)((char *)&auVar2 + 4)) = (undefined4)gen_fl2bits(fVar19 + fVar6);
  (*(undefined4 *)((char *)&auVar2 + 0)) = (undefined4)gen_fl2bits(fVar19 + fVar6);
  (*(undefined4 *)((char *)&auVar2 + 8)) = (undefined4)gen_fl2bits(fVar19 + fVar6);
  (*(undefined4 *)((char *)&auVar2 + 12)) = (undefined4)gen_fl2bits(fVar19 + fVar6);
  gen_rcpps(&(auVar20), &(auVar33), &(auVar2));
  fVar9 = ((*(float *)&REFG(undefined, 0x1137340) - (*(float *)((char *)&auVar20 + 0)) * (fVar19 + fVar6)) * (*(float *)((char *)&auVar20 + 0))) *
          (fVar6 * fVar7);
  fVar13 = ((*(float *)&REFG(undefined, 0x1137344) - (*(float *)((char *)&auVar20 + 4)) * (fVar19 + fVar6)) * (*(float *)((char *)&auVar20 + 4))) *
           (fVar6 * fVar11);
  fVar16 = ((*(float *)&REFG(undefined, 0x1137348) - (*(float *)((char *)&auVar20 + 8)) * (fVar19 + fVar6)) * (*(float *)((char *)&auVar20 + 8))) *
           (fVar6 * fVar14);
  fVar17 = ((*(float *)&REFG(undefined, 0x113734c) - (*(float *)((char *)&auVar20 + 12)) * (fVar19 + fVar6)) * (*(float *)((char *)&auVar20 + 12))) *
           (fVar6 * fVar17);
  fVar31 = param_1 - *param_3;
  (*(float *)((char *)&auVar34 + 0)) = fVar31 + fVar21;
  (*(float *)((char *)&auVar34 + 4)) = fVar31 + fVar21;
  (*(float *)((char *)&auVar34 + 8)) = fVar31 + fVar21;
  (*(float *)((char *)&auVar34 + 12)) = fVar31 + fVar21;
  fVar10 = param_3[5] - param_1;
  gen_rcpps(&(auVar20), (&(unsigned int[4]){(unsigned int)((uint)gen_fl2bits(param_1)), 0, 0, 0}), &(auVar34));
  (*(float *)((char *)&auVar35 + 0)) =
       ((*(float *)&REFG(undefined, 0x1137340) - (*(float *)((char *)&auVar20 + 0)) * (*(float *)((char *)&auVar34 + 0))) * (*(float *)((char *)&auVar20 + 0))) *
       (fVar8 * fVar21 + *(float *)&REFG(undefined, 0x1137360));
  (*(float *)((char *)&auVar35 + 4)) =
       ((*(float *)&REFG(undefined, 0x1137344) - (*(float *)((char *)&auVar20 + 4)) * (*(float *)((char *)&auVar34 + 4))) * (*(float *)((char *)&auVar20 + 4))) *
       (fVar12 * fVar21 + *(float *)&REFG(undefined, 0x1137364));
  (*(float *)((char *)&auVar35 + 8)) =
       ((*(float *)&REFG(undefined, 0x1137348) - (*(float *)((char *)&auVar20 + 8)) * (*(float *)((char *)&auVar34 + 8))) * (*(float *)((char *)&auVar20 + 8))) *
       (fVar15 * fVar21 + *(float *)&REFG(undefined, 0x1137368));
  (*(float *)((char *)&auVar35 + 12)) =
       ((*(float *)&REFG(undefined, 0x113734c) - (*(float *)((char *)&auVar20 + 12)) * (*(float *)((char *)&auVar34 + 12))) * (*(float *)((char *)&auVar20 + 12))) *
       (fVar18 * fVar21 + *(float *)&REFG(undefined, 0x113736c));
  fVar37 = (*(float *)((char *)&auVar35 + 4)) * fVar21 + *(float *)&REFG(undefined, 0x1137364);
  fVar38 = (*(float *)((char *)&auVar35 + 8)) * fVar21 + *(float *)&REFG(undefined, 0x1137368);
  fVar39 = (*(float *)((char *)&auVar35 + 12)) * fVar21 + *(float *)&REFG(undefined, 0x113736c);
  (*(undefined4 *)((char *)&auVar3 + 4)) = (undefined4)gen_fl2bits(fVar19 + fVar30);
  (*(undefined4 *)((char *)&auVar3 + 0)) = (undefined4)gen_fl2bits(fVar19 + fVar30);
  (*(undefined4 *)((char *)&auVar3 + 8)) = (undefined4)gen_fl2bits(fVar19 + fVar30);
  (*(undefined4 *)((char *)&auVar3 + 12)) = (undefined4)gen_fl2bits(fVar19 + fVar30);
  gen_rcpps(&(auVar20), &(auVar35), &(auVar3));
  (*(float *)((char *)&auVar36 + 0)) = (*(float *)((char *)&auVar20 + 0)) * (fVar19 + fVar30);
  (*(float *)((char *)&auVar36 + 4)) = (*(float *)((char *)&auVar20 + 4)) * (fVar19 + fVar30);
  (*(float *)((char *)&auVar36 + 8)) = (*(float *)((char *)&auVar20 + 8)) * (fVar19 + fVar30);
  (*(float *)((char *)&auVar36 + 12)) = (*(float *)((char *)&auVar20 + 12)) * (fVar19 + fVar30);
  fVar22 = ((*(float *)&REFG(undefined, 0x1137340) - (*(float *)((char *)&auVar36 + 0))) * (*(float *)((char *)&auVar20 + 0))) *
           (fVar19 * fVar9 + fVar8 * fVar30);
  fVar23 = ((*(float *)&REFG(undefined, 0x1137344) - (*(float *)((char *)&auVar36 + 4))) * (*(float *)((char *)&auVar20 + 4))) *
           (fVar19 * fVar13 + fVar12 * fVar30);
  fVar24 = ((*(float *)&REFG(undefined, 0x1137348) - (*(float *)((char *)&auVar36 + 8))) * (*(float *)((char *)&auVar20 + 8))) *
           (fVar19 * fVar16 + fVar15 * fVar30);
  fVar25 = ((*(float *)&REFG(undefined, 0x113734c) - (*(float *)((char *)&auVar36 + 12))) * (*(float *)((char *)&auVar20 + 12))) *
           (fVar19 * fVar17 + fVar18 * fVar30);
  (*(undefined4 *)((char *)&auVar4 + 4)) = (undefined4)gen_fl2bits(fVar10 + fVar6);
  (*(undefined4 *)((char *)&auVar4 + 0)) = (undefined4)gen_fl2bits(fVar10 + fVar6);
  (*(undefined4 *)((char *)&auVar4 + 8)) = (undefined4)gen_fl2bits(fVar10 + fVar6);
  (*(undefined4 *)((char *)&auVar4 + 12)) = (undefined4)gen_fl2bits(fVar10 + fVar6);
  gen_rcpps(&(auVar20), &(auVar36), &(auVar4));
  fVar7 = param_4[5];
  fVar8 = param_4[6];
  fVar11 = param_4[7];
  fVar12 = param_4[1];
  fVar14 = param_4[2];
  fVar15 = param_4[3];
  fVar26 = ((*(float *)&REFG(undefined, 0x1137340) - (*(float *)((char *)&auVar20 + 0)) * (fVar10 + fVar6)) * (*(float *)((char *)&auVar20 + 0))) *
           (fVar6 * fVar9);
  fVar27 = ((*(float *)&REFG(undefined, 0x1137344) - (*(float *)((char *)&auVar20 + 4)) * (fVar10 + fVar6)) * (*(float *)((char *)&auVar20 + 4))) *
           (fVar6 * fVar13);
  fVar28 = ((*(float *)&REFG(undefined, 0x1137348) - (*(float *)((char *)&auVar20 + 8)) * (fVar10 + fVar6)) * (*(float *)((char *)&auVar20 + 8))) *
           (fVar6 * fVar16);
  fVar29 = ((*(float *)&REFG(undefined, 0x113734c) - (*(float *)((char *)&auVar20 + 12)) * (fVar10 + fVar6)) * (*(float *)((char *)&auVar20 + 12))) *
           (fVar6 * fVar17);
  fVar9 = param_4[9];
  fVar13 = param_4[10];
  fVar16 = param_4[0xb];
  fVar17 = param_4[0xd];
  fVar18 = param_4[0xe];
  fVar5 = param_4[0xf];
  *param_5 = ((fVar10 * fVar26 + fVar22 * fVar30) * param_4[8] +
             (param_4[4] * (fVar19 * fVar22 + fVar31 * (*(float *)((char *)&auVar35 + 0))) +
             *param_4 * ((*(float *)((char *)&auVar35 + 0)) * fVar21 + *(float *)&REFG(undefined, 0x1137360)))) +
             (fVar6 * fVar26) * param_4[0xc];
  param_5[1] = ((fVar10 * fVar27 + fVar23 * fVar30) * fVar9 +
               (fVar7 * (fVar19 * fVar23 + fVar31 * (*(float *)((char *)&auVar35 + 4))) + fVar12 * fVar37)) +
               (fVar6 * fVar27) * fVar17;
  param_5[2] = ((fVar10 * fVar28 + fVar24 * fVar30) * fVar13 +
               (fVar8 * (fVar19 * fVar24 + fVar31 * (*(float *)((char *)&auVar35 + 8))) + fVar14 * fVar38)) +
               (fVar6 * fVar28) * fVar18;
  param_5[3] = ((fVar10 * fVar29 + fVar25 * fVar30) * fVar16 +
               (fVar11 * (fVar19 * fVar25 + fVar31 * (*(float *)((char *)&auVar35 + 12))) + fVar15 * fVar39)) +
               (fVar6 * fVar29) * fVar5;
  return (uint)param_5;
}

/* ref: FUN_00d6d760 */
GEN_LIB GEN_NOFRAME uint F_00d6d760(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(byte param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5), GEN_P(undefined4 * param_7, unsigned int gen_a6))
{
  GEN_ENTER(0xd6d760u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(byte param_5 = (byte)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  GEN_PIN(undefined4 * param_7 = (undefined4 *)(uintptr_t)gen_a6;)
  GEN_FRAME_DECL(0x70, 0);
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 in_EAX = 0;
  uint uVar4;
  
  uVar3 = *(undefined4 *)&REFG(undefined, 0x1138cac);
  uVar2 = *(undefined4 *)&REFG(undefined, 0x1138ca8);
  uVar1 = *(undefined4 *)&REFG(undefined, 0x1138ca4);
  if ((param_5 & 0xf0) != 0) {
    uVar4 = F_00d6ccd0(param_1,&(*(undefined4 *)(gen_frame + 0x58)),&(*(int *)(gen_frame + 0x5c)),param_2,param_3,((undefined1 *)(gen_frame + 0x40)));
    F_00d6cdf0(param_1,param_6,(*(undefined4 *)(gen_frame + 0x58)),(*(int *)(gen_frame + 0x5c)),uVar4,((undefined1 *)(gen_frame + 0x0)));
    uVar4 = ((code *)*(gen_code32 *)(&REFG(undefined, 0x13512bc) + (*(int *)(gen_frame + 0x5c)) * 4)) ((undefined4)gen_fl2bits(param_4),(*(int *)(gen_frame + 0x5c)),((undefined1 *)(gen_frame + 0x40)),((undefined1 *)(gen_frame + 0x0)),param_7);
    return uVar4;
  }
  if ((param_5 & 0xf) != 0) {
    uVar4 = (*param_1 - 1) + *(int *)(&REFG(undefined, 0x1137300) + param_6 * 4) &
            ~(*(int *)(&REFG(undefined, 0x1137300) + param_6 * 4) - 1U);
    *param_1 = uVar4;
    (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x13512a4))[(int)(param_6)])))(uVar4,param_7);
    uVar4 = *(uint *)(&REFG(undefined, 0x1137318) + param_6 * 4);
    *param_1 = *param_1 + uVar4;
    return uVar4;
  }
  *param_7 = *(undefined4 *)&REFG(undefined, 0x1138ca0);
  param_7[1] = uVar1;
  param_7[2] = uVar2;
  param_7[3] = uVar3;
  return CONCAT31((int3)((uint)in_EAX >> 8),param_5);
}

/* ref: FUN_00d6d850 */
GEN_LIB GEN_NOFRAME uint F_00d6d850(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(byte param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5), GEN_P(undefined4 * param_7, unsigned int gen_a6), GEN_P(undefined4 * param_8, unsigned int gen_a7))
{
  GEN_ENTER(0xd6d850u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(byte param_5 = (byte)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  GEN_PIN(undefined4 * param_7 = (undefined4 *)(uintptr_t)gen_a6;)
  GEN_PIN(undefined4 * param_8 = (undefined4 *)(uintptr_t)gen_a7;)
  GEN_FRAME_DECL(0xe0, 0);
  undefined4 uVar1;
  ushort uVar2;
  uint uVar3;
  float * pfVar4;
  uint uVar5;
  int iVar6;
  float * pfVar7;
  uint uVar8;
  ushort * puVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  uVar8 = 0;
  (*(int *)(gen_frame + 0xc8)) = 0;
  (*(int *)(gen_frame + 0xbc)) = 0;
  (*(byte *)(gen_frame + 0xcf)) = param_5 & 0xf0;
  if ((param_5 & 0xf0) == 0) {
    (*(int *)(gen_frame + 0xc8)) = 0;
    (*(int *)(gen_frame + 0xbc)) = 0;
  }
  else {
    uVar8 = F_00d6ccd0(param_1,&(*(int *)(gen_frame + 0xbc)),&(*(int *)(gen_frame + 0xc8)),param_2,param_3,((undefined1 *)(gen_frame + 0x48)));
  }
  *param_1 = *param_1 + 3 & 0xfffffffc;
  uVar5 = (uint)param_5;
  fVar14 = (*(float *)(gen_frame + 0xa0));
  if ((param_5 & 1) == 0) {
    if ((param_5 & 0x10) != 0) {
      pfVar7 = ((float *)GEN_TOP(*param_1));
      fVar14 = *pfVar7;
      *param_1 = (uint)(pfVar7 + 1);
      fVar13 = pfVar7[1];
      *param_1 = (uint)(pfVar7 + 2);
      (*(float *)(gen_frame + 0xa0)) = fVar13;
    }
  }
  else {
    uVar1 = *((undefined4 *)GEN_TOP(*param_1));
    *param_1 = (uint)(((undefined4 *)GEN_TOP(*param_1)) + 1);
    (*(undefined4 *)(gen_frame + 0x70)) = uVar1;
  }
  fVar13 = (*(float *)(gen_frame + 0xa4));
  if ((param_5 & 2) == 0) {
    if ((param_5 & 0x20) != 0) {
      pfVar7 = ((float *)GEN_TOP(*param_1));
      fVar13 = *pfVar7;
      *param_1 = (uint)(pfVar7 + 1);
      fVar11 = pfVar7[1];
      *param_1 = (uint)(pfVar7 + 2);
      (*(float *)(gen_frame + 0xa4)) = fVar11;
    }
  }
  else {
    uVar1 = *((undefined4 *)GEN_TOP(*param_1));
    *param_1 = (uint)(((undefined4 *)GEN_TOP(*param_1)) + 1);
    (*(undefined4 *)(gen_frame + 0x74)) = uVar1;
  }
  fVar11 = (*(float *)(gen_frame + 0xa8));
  fVar12 = (*(float *)(gen_frame + 0xa8));
  if ((param_5 & 4) == 0) {
    if ((param_5 & 0x40) != 0) {
      pfVar7 = ((float *)GEN_TOP(*param_1));
      fVar11 = *pfVar7;
      *param_1 = (uint)(pfVar7 + 1);
      fVar12 = pfVar7[1];
      *param_1 = (uint)(pfVar7 + 2);
    }
  }
  else {
    uVar1 = *((undefined4 *)GEN_TOP(*param_1));
    *param_1 = (uint)(((undefined4 *)GEN_TOP(*param_1)) + 1);
    (*(undefined4 *)(gen_frame + 0x78)) = uVar1;
  }
  if ((*(byte *)(gen_frame + 0xcf)) == 0) {
    uVar8 = (int)~uVar5 >> 4 & ~uVar5;
    uVar5 = uVar8 & 0xf;
    if ((param_5 & 1) == 0) {
      if ((uVar8 & 1) != 0) {
        *param_8 = *param_7;
      }
    }
    else {
      *param_8 = (*(undefined4 *)(gen_frame + 0x70));
    }
    if ((param_5 & 2) == 0) {
      if ((uVar8 & 2) != 0) {
        param_8[1] = param_7[1];
      }
    }
    else {
      param_8[1] = (*(undefined4 *)(gen_frame + 0x74));
    }
    if ((param_5 & 4) == 0) {
      if ((uVar8 & 4) != 0) {
        param_8[2] = param_7[2];
      }
    }
    else {
      param_8[2] = (*(undefined4 *)(gen_frame + 0x78));
    }
    if ((param_5 & 8) != 0) {
      param_8[3] = (*(undefined4 *)(gen_frame + 0x7c));
      return uVar5;
    }
    if ((uVar8 & 8) != 0) {
      param_8[3] = param_7[3];
      return uVar5;
    }
  }
  else {
    iVar10 = *(int *)(&REFG(undefined, 0x1137330) + param_6 * 4);
    (*(int *)(gen_frame + 0x9c)) = iVar10;
    uVar3 = *param_1 + 1 & 0xfffffffe;
    *param_1 = uVar3;
    puVar9 = ((ushort *)GEN_TOP(((uVar8 - (*(int *)(gen_frame + 0xc8))) * iVar10 * *(int *)(&REFG(undefined, 0x11375c4) + (param_5 >> 4 & 7) * 4) + uVar3
             )));
    (*(int *)(gen_frame + 0x98)) = *(int *)(&REFG(undefined, 0x11375c4) + (param_5 >> 4 & 7) * 4);
    if (-1 < (*(int *)(gen_frame + 0xc8))) {
      (*(uint *)(gen_frame + 0x90)) = uVar5 & 0x10;
      (*(uint *)(gen_frame + 0x68)) = uVar5 & 0x20;
      (*(uint *)(gen_frame + 0x64)) = uVar5 & 0x40;
      (*(uint *)(gen_frame + 0x6c)) = uVar5 & 0xf;
      (*(uint *)(gen_frame + 0x8c)) = (int)~uVar5 >> 4 & ~uVar5 & 0xf;
      iVar10 = (int)&(*(undefined4 *)(gen_frame + 0x70)) - (int)param_7;
      (*(int *)(gen_frame + 0xc0)) = (int)param_7 - (int)((float *)(gen_frame + 0x0));
      pfVar7 = ((float *)(gen_frame + 0x0)) + 1;
      (*(int *)(gen_frame + 0x60)) = iVar10;
      (*(float * PTR32 *)(gen_frame + 0xc4)) = ((float *)(gen_frame + 0x0));
      (*(float * PTR32 *)(gen_frame + 0xb8)) = pfVar7;
      (*(int *)(gen_frame + 0x94)) = (*(int *)(gen_frame + 0xc8)) + 1;
      do {
        (*(float * PTR32 *)(gen_frame + 0xb8)) = pfVar7;
        if ((*(uint *)(gen_frame + 0x90)) != 0) {
          if (param_6 == 0) {
            uVar2 = *puVar9;
            puVar9 = ((ushort *)GEN_TOP(((int)puVar9 + 1)));
            fVar15 = (float)(byte)uVar2 * REFG(float, 0x10addc0);
          }
          else {
            uVar2 = *puVar9;
            puVar9 = puVar9 + 1;
            fVar15 = (float)uVar2 * REFG(float, 0x1137338);
          }
          pfVar7[-1] = ((*(float *)(gen_frame + 0xa0)) - fVar14) * fVar15 + fVar14;
        }
        if ((*(uint *)(gen_frame + 0x68)) != 0) {
          if (param_6 == 0) {
            uVar2 = *puVar9;
            puVar9 = ((ushort *)GEN_TOP(((int)puVar9 + 1)));
            fVar15 = (float)(byte)uVar2 * REFG(float, 0x10addc0);
          }
          else {
            uVar2 = *puVar9;
            puVar9 = puVar9 + 1;
            fVar15 = (float)uVar2 * REFG(float, 0x1137338);
          }
          *pfVar7 = ((*(float *)(gen_frame + 0xa4)) - fVar13) * fVar15 + fVar13;
        }
        if ((*(uint *)(gen_frame + 0x64)) != 0) {
          if (param_6 == 0) {
            uVar2 = *puVar9;
            puVar9 = ((ushort *)GEN_TOP(((int)puVar9 + 1)));
            fVar15 = (float)(byte)uVar2 * REFG(float, 0x10addc0);
          }
          else {
            uVar2 = *puVar9;
            puVar9 = puVar9 + 1;
            fVar15 = (float)uVar2 * REFG(float, 0x1137338);
          }
          pfVar7[1] = (fVar12 - fVar11) * fVar15 + fVar11;
        }
        pfVar4 = (*(float * PTR32 *)(gen_frame + 0xc4));
        uVar8 = 1;
        (*(float * PTR32 *)(gen_frame + 0xc4)) = ((float *)GEN_TOP(0x4));
        do {
          if (((*(uint *)(gen_frame + 0x6c)) & uVar8) == 0) {
            iVar6 = (*(int *)(gen_frame + 0xc0));
            if (((*(uint *)(gen_frame + 0x8c)) & uVar8) != 0) goto LAB_00d6dbcc;
          }
          else {
            iVar6 = (*(int *)(gen_frame + 0xc0)) + iVar10;
            iVar10 = (*(int *)(gen_frame + 0x60));
LAB_00d6dbcc: ;
            *pfVar4 = *((float *)GEN_TOP((iVar6 + (int)pfVar4)));
          }
          uVar8 = uVar8 * 2;
          pfVar4 = pfVar4 + 1;
          iVar6 = (int)(*(float * PTR32 *)(gen_frame + 0xc4)) - 1;
          (*(float * PTR32 *)(gen_frame + 0xc4)) = ((float *)GEN_TOP(iVar6));
        } while (iVar6 != 0);
        pfVar7 = (*(float * PTR32 *)(gen_frame + 0xb8)) + 4;
        (*(float * PTR32 *)(gen_frame + 0xb8)) = pfVar7;
        (*(int *)(gen_frame + 0xc0)) = (*(int *)(gen_frame + 0xc0)) - 0x10;
        iVar6 = (*(int *)(gen_frame + 0x94)) - 1;
        (*(int *)(gen_frame + 0x94)) = iVar6;
        (*(float * PTR32 *)(gen_frame + 0xc4)) = pfVar4;
      } while (iVar6 != 0);
    }
    uVar5 = ((code *)*(gen_code32 *)(&REFG(undefined, 0x13512bc) + (*(int *)(gen_frame + 0xc8)) * 4))
                      ((undefined4)gen_fl2bits(param_4),(*(int *)(gen_frame + 0xc8)),((undefined1 *)(gen_frame + 0x48)),((float *)(gen_frame + 0x0)),param_8);
    *param_1 = *param_1 + ((*(int *)(gen_frame + 0xbc)) + 1) * (*(int *)(gen_frame + 0x9c)) * (*(int *)(gen_frame + 0x98));
  }
  return uVar5;
}

/* ref: FUN_00d6dc40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d6dc40(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(uint * param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6))
{
  GEN_ENTER(0xd6dc40u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(uint * param_6 = (uint *)(uintptr_t)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  uint uVar1;
  
  uVar1 = F_00d6d760(param_6,param_3,GEN_ARGF(*((float *)GEN_TOP((param_1 + 0x40)))),param_2,(undefined1)param_4,
                       param_5,param_7);
  *param_6 = *param_6 + 3 & 0xfffffffc;
  return uVar1;
}

/* ref: FUN_00d6dc90 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d6dc90(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(uint * param_6, unsigned int gen_a5), GEN_P(undefined4 * param_7, unsigned int gen_a6))
{
  GEN_ENTER(0xd6dc90u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(uint * param_6 = (uint *)(uintptr_t)gen_a5;)
  GEN_PIN(undefined4 * param_7 = (undefined4 *)(uintptr_t)gen_a6;)
  GEN_FRAME_DECL(0x20, 0);
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar3 = REFG(uint, 0x0135177c);
  uVar2 = REFG(uint, 0x01351778);
  uVar1 = REFG(uint, 0x01351774);
  if ((char)param_4 == '\0') {
    *param_7 = *(undefined4 *)&REFG(undefined, 0x1351770);
    param_7[1] = uVar1;
    param_7[2] = uVar2;
    param_7[3] = uVar3;
    *param_6 = *param_6 + 3 & 0xfffffffc;
    return (uint)param_7;
  }
  (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)&REFG(undefined, 0x1351770);
  (*(undefined4 *)(gen_frame + 0x4)) = REFG(uint, 0x01351774);
  (*(undefined4 *)(gen_frame + 0x8)) = REFG(uint, 0x01351778);
  (*(undefined4 *)(gen_frame + 0xc)) = REFG(uint, 0x0135177c);
  uVar4 = F_00d6d850(param_6,param_3,GEN_ARGF(*((float *)GEN_TOP((param_1 + 0x40)))),param_2,(char)param_4,param_5,
                       &(*(undefined4 *)(gen_frame + 0x0)),param_7);
  *param_6 = *param_6 + 3 & 0xfffffffc;
  return uVar4;
}

/* ref: FUN_00d6dd20 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d6dd20(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(uint * param_6, unsigned int gen_a5), GEN_P(undefined4 * param_7, unsigned int gen_a6))
{
  GEN_ENTER(0xd6dd20u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(uint * param_6 = (uint *)(uintptr_t)gen_a5;)
  GEN_PIN(undefined4 * param_7 = (undefined4 *)(uintptr_t)gen_a6;)
  GEN_FRAME_DECL(0x20, 0);
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar3 = REFG(uint, 0x0135179c);
  uVar2 = REFG(uint, 0x01351798);
  uVar1 = REFG(uint, 0x01351794);
  if ((char)param_4 == '\0') {
    *param_7 = *(undefined4 *)&REFG(undefined, 0x1351790);
    param_7[1] = uVar1;
    param_7[2] = uVar2;
    param_7[3] = uVar3;
    *param_6 = *param_6 + 3 & 0xfffffffc;
    return (uint)param_7;
  }
  (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)&REFG(undefined, 0x1351790);
  (*(undefined4 *)(gen_frame + 0x4)) = REFG(uint, 0x01351794);
  (*(undefined4 *)(gen_frame + 0x8)) = REFG(uint, 0x01351798);
  (*(undefined4 *)(gen_frame + 0xc)) = REFG(uint, 0x0135179c);
  uVar4 = F_00d6d850(param_6,param_3,GEN_ARGF(*((float *)GEN_TOP((param_1 + 0x40)))),param_2,(char)param_4,param_5,
                       &(*(undefined4 *)(gen_frame + 0x0)),param_7);
  *param_6 = *param_6 + 3 & 0xfffffffc;
  return uVar4;
}

/* ref: FUN_00d6ddb0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d6ddb0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(uint * param_6, unsigned int gen_a5), GEN_P(undefined4 * param_7, unsigned int gen_a6))
{
  GEN_ENTER(0xd6ddb0u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(uint * param_6 = (uint *)(uintptr_t)gen_a5;)
  GEN_PIN(undefined4 * param_7 = (undefined4 *)(uintptr_t)gen_a6;)
  GEN_FRAME_DECL(0x30, 0);
  uint uVar1;
  
  if ((char)param_4 == '\0') {
    *param_7 = 0;
    *param_6 = *param_6 + 3 & 0xfffffffc;
    return (uint)param_7;
  }
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  uVar1 = F_00d6d850(param_6,param_3,GEN_ARGF(*((float *)GEN_TOP((param_1 + 0x40)))),param_2,(char)param_4,param_5,
                       &(*(undefined4 *)(gen_frame + 0x10)),((undefined4 *)(gen_frame + 0x0)));
  *param_7 = ((undefined4 *)(gen_frame + 0x0))[0];
  *param_6 = *param_6 + 3 & 0xfffffffc;
  return uVar1;
}

/* ref: FUN_00d6de50 */
GEN_LIB GEN_FRAME uint F_00d6de50(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xd6de50u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  unsigned int gen_args[8];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  byte bVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  LPVOID pvVar6;
  uint uVar7;
  LPVOID pvVar8;
  int iVar9;
  uint uVar10;
  byte * pbVar11;
  float10 fVar12;
  
  pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar6 + 4)));
  if (puVar2 < *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar6 + 0xc)))) {
    *puVar2 = ((char *)REFP(0x11375e4));
    uVar4 = rdtsc();
    (*(byte * PTR32 *)(gen_frame + 0x0)) = ((byte *)GEN_TOP((uint)uVar4));
    puVar2[1] = ((byte *)GEN_TOP((uint)uVar4));
    *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar6 + 4))) = puVar2 + 3;
  }
  iVar3 = *(*(int * PTR32 *)&gen_args[6]);
  uVar7 = (*(uint *)&gen_args[0]) / (*((int *)GEN_TOP((iVar3 + 0x30))) - 1U);
  if ((int)uVar7 < 1) {
    uVar7 = 0;
  }
  uVar10 = *((int *)GEN_TOP((iVar3 + 0x2c))) - 1;
  if ((int)uVar10 <= (int)uVar7) {
    uVar7 = uVar10;
  }
  iVar9 = (*(uint *)&gen_args[0]) - (*((int *)GEN_TOP((iVar3 + 0x30))) - 1) * uVar7;
  fVar12 = (float10)iVar9;
  if (iVar9 < 0) {
    fVar12 = GEN_X87(fVar12 + (float10)*(float *)&REFG(undefined, 0x1088110));
  }
  pbVar11 = ((byte *)GEN_TOP((*(int * PTR32 *)&gen_args[6])[2]));
  (*(float *)&gen_args[1]) = ((float)GEN_TOF(((fVar12 + (float10)(*(float *)&gen_args[1])) * (float10)*((float *)GEN_TOP((iVar3 + 0x40))))));
  uVar5 = (undefined1)
          (int)((*((float *)GEN_TOP((iVar3 + 0x3c))) * (*(float *)&gen_args[1])) * ((float)GEN_TOF((*((int *)GEN_TOP((iVar3 + 0x30))) - 1))));
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x4)) + 0)) = uVar5;
  (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),uVar5);
  (*(byte * PTR32 *)(gen_frame + 0x0)) = pbVar11 + *((int *)GEN_TOP((iVar3 + 0x34)));
  if ((*(int *)&gen_args[2]) != 0) {
    (*(uint *)&gen_args[0]) = (*(int *)&gen_args[3]) + 0x20;
    do {
      bVar1 = *pbVar11;
      F_00d6dc90(iVar3 GEN_EDX_ARG,(*(float *)&gen_args[1]),(*(undefined4 *)(gen_frame + 0x4)),(uint)pbVar11[1],bVar1 & 3,&(*(byte * PTR32 *)(gen_frame + 0x0)),(*(uint *)&gen_args[0]) - 0x20);
      F_00d6dc40(iVar3 GEN_EDX_ARG,(*(float *)&gen_args[1]),(*(undefined4 *)(gen_frame + 0x4)),(uint)pbVar11[2],bVar1 >> 2 & 0xf,&(*(byte * PTR32 *)(gen_frame + 0x0)),
                   (*(uint *)&gen_args[0]) - 0x10);
      F_00d6dd20(iVar3 GEN_EDX_ARG,(*(float *)&gen_args[1]),(*(undefined4 *)(gen_frame + 0x4)),(uint)pbVar11[3],(uint)(bVar1 >> 6),&(*(byte * PTR32 *)(gen_frame + 0x0)),(*(uint *)&gen_args[0]));
      (*(uint *)&gen_args[0]) = (*(uint *)&gen_args[0]) + 0x30;
      pbVar11 = pbVar11 + 4;
      (*(int *)&gen_args[2]) = (*(int *)&gen_args[2]) - 1;
    } while ((*(int *)&gen_args[2]) != 0);
    (*(int *)&gen_args[2]) = 0;
  }
  (*(uint *)&gen_args[0]) = *((int *)GEN_TOP((*(int * PTR32 *)&gen_args[6])[4])) + (*(int * PTR32 *)&gen_args[6])[2];
  pbVar11 = ((byte *)GEN_TOP(((*(int * PTR32 *)&gen_args[6])[2] + *((int *)GEN_TOP((iVar3 + 0x10))) * 4)));
  if ((*(int * PTR32 *)&gen_args[4]) != ((int *)GEN_TOP(0x0))) {
    (*(int * PTR32 *)&gen_args[6]) = (*(int * PTR32 *)&gen_args[4]);
    iVar9 = (*(int *)&gen_args[5]);
    do {
      bVar1 = *pbVar11;
      pbVar11 = pbVar11 + 1;
      F_00d6ddb0(iVar3 GEN_EDX_ARG,(*(float *)&gen_args[1]),(*(undefined4 *)(gen_frame + 0x4)),(uint)(bVar1 & 0xf9),bVar1 >> 1 & 3,&(*(uint *)&gen_args[0]),iVar9);
      iVar9 = iVar9 + 4;
      (*(int * PTR32 *)&gen_args[6]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[6]) - 1)));
    } while ((*(int * PTR32 *)&gen_args[6]) != ((int *)GEN_TOP(0x0)));
  }
  pvVar8 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar8 + 4)));
  pvVar6 = pvVar8;
  if (puVar2 < *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar8 + 0xc)))) {
    *puVar2 = &REFG(undefined, 0x1136cb0);
    uVar4 = rdtsc();
    pvVar6 = (LPVOID)uVar4;
    puVar2[1] = pvVar6;
    *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar8 + 4))) = puVar2 + 3;
  }
  return (uint)pvVar6;
}

/* ref: hkaSplineCompressedAnimation::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d6e350(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd6e350u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  unsigned int gen_args[4];
  memcpy(&gen_args[0], &gen_a1, sizeof gen_a1);
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  float fVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte * pbVar7;
  int iVar8;
  undefined4 * puVar9;
  uint uVar10;
  float10 fVar11;
  float10 fVar12;
  
  uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x1c))))(param_1 GEN_EDX_FWD);
  fVar11 = (float10)(int)(uVar6 - 1);
  if ((int)(uVar6 - 1) < 0) {
    fVar11 = GEN_X87(fVar11 + (float10)*(float *)&REFG(undefined, 0x1088110));
  }
  fVar11 = GEN_X87(fVar11 * ((float10)(*(float *)&gen_args[0]) / ((float10)GEN_TOD(gen_bits2f(param_1[3])))));
  (*(ushort *)(gen_frame + 0x4)) = gen_x87_cw | 0xc00;
  uVar6 = uVar6 - 2;
  gen_set_x87_cw((unsigned short)(*(ushort *)(gen_frame + 0x4)));
  (*(uint *)(gen_frame + 0x0)) = (uint)(longlong)TRUNC(fVar11);
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  (*(float *)&gen_args[0]) = REFG(float, 0x1087f04);
  if ((*(uint *)(gen_frame + 0x0)) <= uVar6) {
    fVar12 = (float10)(int)(*(uint *)(gen_frame + 0x0));
    if ((int)(*(uint *)(gen_frame + 0x0)) < 0) {
      fVar12 = GEN_X87(fVar12 + (float10)*(float *)&REFG(undefined, 0x1088110));
    }
    fVar11 = GEN_X87(fVar11 - fVar12);
    (*(float *)&gen_args[0]) = (float)fVar11;
    uVar6 = (*(uint *)(gen_frame + 0x0));
    if (fVar11 < (float10)0) {
      (*(float *)&gen_args[0]) = 0.0;
    }
    else if (REFG(float, 0x1087f04) < (*(float *)&gen_args[0])) {
      (*(float *)&gen_args[0]) = REFG(float, 0x1087f04);
    }
  }
  (*(uint *)(gen_frame + 0x14)) = uVar6 / (param_1[0xc] - 1U);
  if ((int)(*(uint *)(gen_frame + 0x14)) < 1) {
    (*(uint *)(gen_frame + 0x14)) = 0;
  }
  if ((int)(param_1[0xb] - 1U) <= (int)(*(uint *)(gen_frame + 0x14))) {
    (*(uint *)(gen_frame + 0x14)) = param_1[0xb] - 1U;
  }
  iVar8 = uVar6 - (param_1[0xc] - 1) * (*(uint *)(gen_frame + 0x14));
  fVar11 = (float10)iVar8;
  if (iVar8 < 0) {
    fVar11 = GEN_X87(fVar11 + (float10)*(float *)&REFG(undefined, 0x1088110));
  }
  uVar10 = 0;
  fVar1 = ((float)GEN_TOF(((fVar11 + (float10)(*(float *)&gen_args[0])) * ((float10)GEN_TOD(gen_bits2f(param_1[0x10]))))));
  uVar6 = (uint)((gen_bits2f(param_1[0xf]) * fVar1) * (float)(param_1[0xc] - 1));
  (*(undefined4 *)(gen_frame + 0xc)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0xc)), 1, 3),(char)uVar6);
  if ((*(uint *)&gen_args[2]) != 0) {
    puVar9 = ((undefined4 *)GEN_TOP(((*(uint *)&gen_args[3]) + 0x20)));
    do {
      uVar3 = *((ushort *)GEN_TOP(((*(int *)&gen_args[1]) + uVar10 * 2)));
      uVar6 = (uint)uVar3;
      if ((short)uVar3 < 0) {
LAB_00d6e56f: ;
        puVar9[-8] = 0;
        puVar9[-7] = 0;
        puVar9[-6] = 0;
        puVar9[-5] = 0;
        puVar9[-4] = 0;
        puVar9[-3] = 0;
        puVar9[-2] = 0;
        puVar9[-1] = 0;
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9[2] = 0;
        puVar9[3] = 0;
      }
      else {
        iVar8 = (int)(short)uVar3;
        uVar6 = param_1[4];
        if ((int)uVar6 <= iVar8) goto LAB_00d6e56f;
        (*(uint *)&gen_args[3]) = F_00d88640(param_1[0x1d],param_1[0x11],(*(uint *)(gen_frame + 0x14)),
                               *((undefined4 *)GEN_TOP((param_1[0x17] + (uVar6 * (*(uint *)(gen_frame + 0x14)) + iVar8) * 4))));
        iVar4 = param_1[0x1d];
        iVar5 = param_1[0x11];
        pbVar7 = ((byte *)GEN_TOP(F_00d88640(iVar4,iVar5,(*(uint *)(gen_frame + 0x14)),iVar8 * 4)));
        bVar2 = *pbVar7;
        F_00d6dc90(param_1 GEN_EDX_ARG,fVar1,(*(undefined4 *)(gen_frame + 0xc)),(uint)pbVar7[1],bVar2 & 3,&(*(uint *)&gen_args[3]),puVar9 - 8);
        F_00d6dc40(param_1 GEN_EDX_ARG,fVar1,(*(undefined4 *)(gen_frame + 0xc)),(uint)pbVar7[2],bVar2 >> 2 & 0xf,&(*(uint *)&gen_args[3]),puVar9 - 4);
        uVar6 = F_00d6dd20(param_1 GEN_EDX_ARG,fVar1,(*(undefined4 *)(gen_frame + 0xc)),(uint)pbVar7[3],(uint)(bVar2 >> 6),&(*(uint *)&gen_args[3]),
                             puVar9);
      }
      uVar10 = uVar10 + 1;
      puVar9 = puVar9 + 0xc;
    } while (uVar10 < (*(uint *)&gen_args[2]));
  }
  return uVar6;
}

/* ref: hkaSplineCompressedAnimation::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d6e5a0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4)
{
  GEN_ENTER(0xd6e5a0u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  unsigned int gen_args[4];
  memcpy(&gen_args[0], &gen_a1, sizeof gen_a1);
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  memcpy(&gen_args[3], &gen_a4, sizeof gen_a4);
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  float fVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte * pbVar8;
  int iVar9;
  float10 fVar10;
  float10 fVar11;
  
  uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x1c))))(param_1 GEN_EDX_FWD);
  fVar10 = (float10)(int)(uVar6 - 1);
  if ((int)(uVar6 - 1) < 0) {
    fVar10 = GEN_X87(fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110));
  }
  fVar10 = GEN_X87(fVar10 * ((float10)(*(float *)&gen_args[0]) / ((float10)GEN_TOD(gen_bits2f(param_1[3])))));
  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x8)) + 0)) = gen_x87_cw | 0xc00;
  uVar6 = uVar6 - 2;
  gen_set_x87_cw((unsigned short)(ushort)(*(uint *)(gen_frame + 0x8)));
  (*(uint *)(gen_frame + 0x0)) = (uint)(longlong)TRUNC(fVar10);
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  (*(float *)&gen_args[0]) = REFG(float, 0x1087f04);
  if ((*(uint *)(gen_frame + 0x0)) <= uVar6) {
    fVar11 = (float10)(int)(*(uint *)(gen_frame + 0x0));
    if ((int)(*(uint *)(gen_frame + 0x0)) < 0) {
      fVar11 = GEN_X87(fVar11 + (float10)*(float *)&REFG(undefined, 0x1088110));
    }
    fVar10 = GEN_X87(fVar10 - fVar11);
    (*(float *)&gen_args[0]) = (float)fVar10;
    uVar6 = (*(uint *)(gen_frame + 0x0));
    if (fVar10 < (float10)0) {
      (*(float *)&gen_args[0]) = 0.0;
    }
    else if (REFG(float, 0x1087f04) < (*(float *)&gen_args[0])) {
      (*(float *)&gen_args[0]) = REFG(float, 0x1087f04);
    }
  }
  uVar7 = uVar6 / (param_1[0xc] - 1U);
  if ((int)uVar7 < 1) {
    uVar7 = 0;
  }
  if ((int)(param_1[0xb] - 1U) <= (int)uVar7) {
    uVar7 = param_1[0xb] - 1U;
  }
  iVar9 = uVar6 - (param_1[0xc] - 1) * uVar7;
  fVar10 = (float10)iVar9;
  if (iVar9 < 0) {
    fVar10 = GEN_X87(fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110));
  }
  (*(uint *)(gen_frame + 0x8)) = 0;
  fVar1 = ((float)GEN_TOF(((fVar10 + (float10)(*(float *)&gen_args[0])) * ((float10)GEN_TOD(gen_bits2f(param_1[0x10]))))));
  uVar6 = (uint)((gen_bits2f(param_1[0xf]) * fVar1) * (float)(param_1[0xc] - 1));
  gen_piece_set(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3, (unsigned long long)((undefined3)((uint)iVar9 >> 8)));
  *(undefined5 *)&(*(uint *)(gen_frame + 0x0)) = CONCAT14((char)uVar6,(*(uint *)(gen_frame + 0x0)));
  if ((*(uint *)&gen_args[2]) != 0) {
    (*(float *)&gen_args[0]) = (*(float *)&gen_args[3]);
    do {
      uVar2 = *((ushort *)GEN_TOP(((*(int *)&gen_args[1]) + (*(uint *)(gen_frame + 0x8)) * 2)));
      uVar6 = (uint)uVar2;
      if ((short)uVar2 < 0) {
LAB_00d6e742: ;
        *((undefined4 *)(uintptr_t)gen_fl2bits((float)((*(float *)&gen_args[0])))) = 0;
      }
      else {
        iVar9 = (int)(short)uVar2;
        uVar6 = param_1[5];
        if ((int)uVar6 <= iVar9) goto LAB_00d6e742;
        (*(float *)&gen_args[3]) = gen_bits2f(F_00d88640(param_1[0x1d],param_1[0x11],uVar7,
                                          *((undefined4 *)GEN_TOP((param_1[0x1a] + (uVar6 * uVar7 + iVar9) * 4)))));
        iVar3 = param_1[4];
        iVar4 = param_1[0x1d];
        iVar5 = param_1[0x11];
        pbVar8 = ((byte *)GEN_TOP(F_00d88640(iVar4,iVar5,uVar7,iVar9 + iVar3 * 4)));
        uVar6 = F_00d6ddb0(param_1 GEN_EDX_ARG,fVar1,(*(undefined4 *)(gen_frame + 0x4)),(uint)(*pbVar8 & 0xf9),*pbVar8 >> 1 & 3,
                             &(*(float *)&gen_args[3]),(undefined4)gen_fl2bits((*(float *)&gen_args[0])));
      }
      (*(float *)&gen_args[0]) = gen_bits2f((int)gen_fl2bits((*(float *)&gen_args[0])) + 4);
      (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) + 1;
    } while ((*(uint *)(gen_frame + 0x8)) < (*(uint *)&gen_args[2]));
  }
  return uVar6;
}

/* ref: FUN_00d6e770 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d6e770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd6e770u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x113541c));
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x7c)));
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x74))),uVar1 & 0x3fffffff);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0x80000000;
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x70)));
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x68))),uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = 0x80000000;
  uVar1 = *((uint *)GEN_TOP(((int)this + 100)));
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x5c))),uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0x80000000;
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x58)));
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x50))),uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0x80000000;
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x4c)));
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x44))),uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0x80000000;
  uVar1 = F_00d3e6d0(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00d6e890 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d6e890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd6e890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(int *)this + param_1 * 0x1c;
}

/* ref: FUN_00d6e8c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d6e8c0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd6e8c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00d6e8f0 */
GEN_LIB GEN_FRAME unsigned int F_00d6e8f0(GEN_P(byte param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd6e8f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(byte param_1 = (byte)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = (int)~(uint)param_1 >> 4 & ~(uint)param_1;
  if ((param_1 & 1) == 0) {
    if ((uVar2 & 1) != 0) {
      uVar1 = *param_3;
      goto LAB_00d6e922;
    }
  }
  else {
    uVar1 = *param_2;
LAB_00d6e922: ;
    *param_4 = uVar1;
  }
  if ((param_1 & 2) == 0) {
    if ((uVar2 & 2) != 0) {
      uVar1 = param_3[1];
      goto LAB_00d6e935;
    }
  }
  else {
    uVar1 = param_2[1];
LAB_00d6e935: ;
    param_4[1] = uVar1;
  }
  if ((param_1 & 4) == 0) {
    if ((uVar2 & 4) == 0) goto LAB_00d6e94c;
    uVar1 = param_3[2];
  }
  else {
    uVar1 = param_2[2];
  }
  param_4[2] = uVar1;
LAB_00d6e94c: ;
  if ((param_1 & 8) != 0) {
    param_4[3] = param_2[3];
    return 0;
  }
  if ((uVar2 & 8) != 0) {
    param_4[3] = param_3[3];
  }
  return 0;
}

/* ref: FUN_00d6e970 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d6e970(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(uint * param_4, unsigned int gen_a3), GEN_P(float * param_5, unsigned int gen_a4), GEN_P(undefined1 * param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xd6e970u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(uint * param_4 = (uint *)(uintptr_t)gen_a3;)
  GEN_PIN(float * param_5 = (float *)(uintptr_t)gen_a4;)
  GEN_PIN(undefined1 * param_6 = (undefined1 *)(uintptr_t)gen_a5;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  
  uVar1 = param_2 / (*((int *)GEN_TOP((param_1 + 0x30))) - 1U);
  uVar1 = ((int)uVar1 < 1) - 1 & uVar1;
  *param_4 = uVar1;
  uVar2 = *((int *)GEN_TOP((param_1 + 0x2c))) - 1;
  if ((int)uVar1 < (int)uVar2) {
    uVar2 = uVar1;
  }
  *param_4 = uVar2;
  iVar3 = param_2 - (*((int *)GEN_TOP((param_1 + 0x30))) - 1) * uVar2;
  fVar4 = (float10)iVar3;
  if (iVar3 < 0) {
    fVar4 = GEN_X87(fVar4 + (float10)*(float *)&REFG(undefined, 0x1088110));
  }
  fVar4 = GEN_X87((fVar4 + (float10)param_3) * (float10)*((float *)GEN_TOP((param_1 + 0x40))));
  *param_5 = (float)fVar4;
  *param_6 = (char)(int)((*((float *)GEN_TOP((param_1 + 0x3c))) * (float)fVar4) *
                        ((float)GEN_TOF((*((int *)GEN_TOP((param_1 + 0x30))) - 1))));
  return (uint)param_6;
}

/* ref: FUN_00d6e9f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d6e9f0(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd6e9f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *in_ecx = param_2;
  in_ecx[1] = 0x84;
  return param_2;
}

/* ref: FUN_00d6ea10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d6ea10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd6ea10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  *(undefined4 *)this = param_1;
  *((int *)GEN_TOP(((int)this + 4))) = param_2 * 4;
  return param_2 * 4;
}

/* ref: FUN_00d6ea30 */
GEN_LIB GEN_FRAME uint F_00d6ea30(GEN_P(float param_1, float gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xd6ea30u, gen_trace_f(gen_a0), gen_a1, gen_a2, gen_a3);
  GEN_PIN(float param_1 = (float)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(&REFG(undefined, 0x13512bc) + param_2 * 4))
                    ((undefined4)gen_fl2bits(param_1),param_2,param_3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_00d6eaa0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d6eaa0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd6eaa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10abe98)));
  *in_ecx = GEN_FLT_TO(*in_ecx, REFG(float, 0x10abe98));
  in_ecx[1] = uVar1;
  in_ecx[2] = uVar1;
  in_ecx[3] = uVar1;
  in_ecx[4] = uVar1;
  in_ecx[5] = 0;
  in_ecx[6] = uVar1;
  in_ecx[7] = uVar1;
  return (uint)in_ecx;
}

/* ref: hkaPredictiveCompressedAnimation::vf8 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d6eaf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd6eaf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return 4;
}

/* ref: hkaPredictiveCompressedAnimation::vf6 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d6eb00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xd6eb00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  return;
}

/* ref: hkaPredictiveCompressedAnimation::vf5 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d6eb10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xd6eb10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  return;
}

/* ref: hkaPredictiveCompressedAnimation::vf7 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d6eb20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd6eb20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x84)));
}

/* ref: hkaPredictiveCompressedAnimation::vf16 */
GEN_LIB GEN_NOFRAME byte F_00d6eb30(void)
{
  GEN_ENTER(0xd6eb30u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: hkaPredictiveCompressedAnimation::vf17 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d6eb40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd6eb40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x8c)));
}

/* ref: hkaPredictiveCompressedAnimation::vf18 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d6eb50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd6eb50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x8c))) = param_2;
  return param_2;
}

/* ref: FUN_00d6eb70 */
GEN_LIB GEN_FRAME float F_00d6eb70(GEN_P(float in_xmm0, float gen_a0), GEN_P(float in_xmm1, float gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xd6eb70u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  GEN_PIN(float in_xmm0 = (float)gen_a0;)
  GEN_PIN(float in_xmm1 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  if ((!(in_xmm1 < in_xmm0)) && (in_xmm0 = param_3, !(param_3 < in_xmm1))) {
    in_xmm0 = in_xmm1;
  }
  return in_xmm0;
}

/* ref: FUN_00d6eb90 */
GEN_LIB GEN_FRAME unsigned int F_00d6eb90(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(int in_ecx, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd6eb90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(int in_ecx = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if ((in_ecx != 0) && (0 < in_eax)) {
    iVar3 = (in_eax - 1U >> 4) + 1;
    do {
      uVar2 = (uint)*((ushort *)GEN_TOP(*param_3));
      *param_3 = ((ushort *)GEN_TOP(*param_3)) + 1;
      iVar4 = in_eax;
      if (0xf < in_eax) {
        iVar4 = 0x10;
      }
      iVar1 = 0;
      if (0 < iVar4) {
        do {
          *((byte *)GEN_TOP((in_ecx + iVar1))) = *((byte *)GEN_TOP((in_ecx + iVar1))) & -((byte)uVar2 & 1);
          iVar1 = iVar1 + 1;
          uVar2 = (int)uVar2 >> 1;
        } while (iVar1 < iVar4);
      }
      in_eax = in_eax - 0x10;
      in_ecx = in_ecx + 0x10;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  return 0;
}

/* ref: FUN_00d6ec00 */
GEN_LIB GEN_FRAME unsigned int F_00d6ec00(GEN_P(float * in_eax, unsigned int gen_a0), GEN_P(float * in_ecx, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(float * param_4, unsigned int gen_a3), GEN_P(float * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xd6ec00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(float * in_eax = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a3;)
  GEN_PIN(float * param_5 = (float *)(uintptr_t)gen_a4;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar1 = *in_ecx;
  fVar2 = in_ecx[1];
  fVar3 = in_ecx[2];
  fVar4 = in_ecx[3];
  fVar5 = *param_3;
  fVar6 = param_3[1];
  fVar7 = param_3[2];
  fVar8 = param_3[3];
  fVar9 = *param_4;
  fVar10 = param_4[1];
  fVar11 = param_4[2];
  fVar12 = param_4[3];
  *in_eax = fVar5 * fVar9;
  in_eax[1] = fVar6 * fVar10;
  in_eax[2] = fVar7 * fVar11;
  in_eax[3] = fVar8 * fVar12;
  fVar13 = param_5[1];
  fVar14 = param_5[2];
  fVar15 = param_5[3];
  *in_eax = *param_5 * fVar1 + fVar5 * fVar9;
  in_eax[1] = fVar13 * fVar2 + fVar6 * fVar10;
  in_eax[2] = fVar14 * fVar3 + fVar7 * fVar11;
  in_eax[3] = fVar15 * fVar4 + fVar8 * fVar12;
  return 0;
}

/* ref: hkaPredictiveCompressedAnimation::vf10 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d6ec30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd6ec30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  return (*(int *)(this + 0x68) * 4 + 0xfU & 0xfffffff0) +
         (*(int *)(this + 0x38) * 2 + 0xfU & 0xfffffff0) + 0xa0 +
         (*(int *)(this + 0x90) + 0x1fU & 0xfffffff0);
}

/* ref: hkaPredictiveCompressedAnimation::vf11 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d6ec60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd6ec60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = *((int *)GEN_TOP((*(int *)(this + 0x8c) + 0x1c))) + 3U & 0xfffffffc;
  uVar1 = *((int *)GEN_TOP((*(int *)(this + 0x8c) + 0x40))) + 3U & 0xfffffffc;
  return (uVar1 + 0xf & 0xfffffff0) + 0x100 + (uVar1 + uVar2 * 0x24) * 4 +
         (uVar2 + 0xf & 0xfffffff0);
}

/* ref: FUN_00d6eca0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d6eca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd6eca0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  return *((int *)GEN_TOP(((int)this + 0x2c))) +
         (*((int *)GEN_TOP(((int)this + 0x38))) + 0x4a + *((int *)GEN_TOP(((int)this + 0x68))) * 2) * 2;
}

/* ref: FUN_00d6ecc0 */
GEN_LIB GEN_FRAME uint F_00d6ecc0(GEN_P(short * in_eax, unsigned int gen_a0), GEN_P(float * in_ecx, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(float * param_4, unsigned int gen_a3), GEN_P(float * param_5, unsigned int gen_a4), GEN_P(float * param_6, unsigned int gen_a5), GEN_P(float * param_7, unsigned int gen_a6))
{
  GEN_ENTER(0xd6ecc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(short * in_eax = (short *)(uintptr_t)gen_a0;)
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a3;)
  GEN_PIN(float * param_5 = (float *)(uintptr_t)gen_a4;)
  GEN_PIN(float * param_6 = (float *)(uintptr_t)gen_a5;)
  GEN_PIN(float * param_7 = (float *)(uintptr_t)gen_a6;)
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  sVar1 = in_eax[1];
  sVar2 = in_eax[2];
  sVar3 = in_eax[3];
  sVar4 = in_eax[4];
  sVar5 = in_eax[5];
  sVar6 = in_eax[6];
  sVar7 = in_eax[7];
  fVar8 = in_ecx[1];
  fVar9 = in_ecx[2];
  fVar10 = in_ecx[3];
  fVar11 = param_4[1];
  fVar12 = param_4[2];
  fVar13 = param_4[3];
  *param_6 = (float)(int)*in_eax * *in_ecx + *param_4;
  param_6[1] = (float)(int)sVar1 * fVar8 + fVar11;
  param_6[2] = (float)(int)sVar2 * fVar9 + fVar12;
  param_6[3] = (float)(int)sVar3 * fVar10 + fVar13;
  fVar8 = param_3[1];
  fVar9 = param_3[2];
  fVar10 = param_3[3];
  fVar11 = param_5[1];
  fVar12 = param_5[2];
  fVar13 = param_5[3];
  *param_7 = (float)(int)sVar4 * *param_3 + *param_5;
  param_7[1] = (float)(int)sVar5 * fVar8 + fVar11;
  param_7[2] = (float)(int)sVar6 * fVar9 + fVar12;
  param_7[3] = (float)(int)sVar7 * fVar10 + fVar13;
  return (uint)param_7;
}

/* ref: FUN_00d6ed20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d6ed20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd6ed20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  int iVar1;
  uint uVar2;
  
  uVar2 = param_1 / 0xf;
  *param_2 = 0;
  if (uVar2 != 0) {
    iVar1 = *((int *)GEN_TOP(((int)this + 0x34))) + *((int *)GEN_TOP(((int)this + 0x40))) * 2;
    *param_2 = CONCAT22(*((undefined2 *)GEN_TOP((iVar1 - 2 + uVar2 * 4))),
                        *((undefined2 *)GEN_TOP((iVar1 - 4 + uVar2 * 4))));
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x34))) + *((int *)GEN_TOP(((int)this + 0x40))) * 2;
  *param_3 = CONCAT22(*((undefined2 *)GEN_TOP((iVar1 + 2 + uVar2 * 4))),*((undefined2 *)GEN_TOP((iVar1 + uVar2 * 4))));
  return (uint)param_3;
}

/* ref: hkaPredictiveCompressedAnimation::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d6ed80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd6ed80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[4];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  int iVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 uVar4;
  
  puVar3 = (*(undefined4 * PTR32 *)&gen_args[2]);
  *(*(undefined4 * PTR32 *)&gen_args[2]) = this;
  (*(undefined4 * PTR32 *)&gen_args[2])[1] = 0x94;
  F_00d6ed20(this GEN_EDX_FWD,(*(int *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[2]),&(*(int *)&gen_args[0]));
  puVar3[2] = *(int *)(this + 0x28) + (int)(*(undefined4 * PTR32 *)&gen_args[2]);
  puVar3[3] = (*(int *)&gen_args[0]) - (int)(*(undefined4 * PTR32 *)&gen_args[2]);
  iVar1 = *(int *)(this + 0x38);
  if (iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(this + 0x34);
  }
  puVar3[4] = uVar4;
  puVar3[5] = iVar1 * 2;
  uVar2 = *(uint *)(this + 0x68);
  if (uVar2 == 0) {
    puVar3[6] = 0;
    puVar3[7] = 0;
    return uVar2;
  }
  puVar3[6] = *(undefined4 *)(this + 100);
  puVar3[7] = uVar2 * 4;
  return uVar2;
}

/* ref: FUN_00d6f5e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d6f5e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd6f5e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *((uint *)GEN_TOP((param_1 + 0xc)));
  uVar1 = *((undefined4 *)GEN_TOP((param_1 + 8)));
  *((uint *)GEN_TOP(((int)this + 0x2c))) = uVar2;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = uVar1;
  *((uint *)GEN_TOP(((int)this + 0x30))) = uVar2 | 0x80000000;
  uVar1 = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
  uVar2 = *((uint *)GEN_TOP((param_1 + 0x14))) >> 1;
  *((uint *)GEN_TOP(((int)this + 0x38))) = uVar2;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = uVar1;
  *((uint *)GEN_TOP(((int)this + 0x3c))) = uVar2 | 0x80000000;
  uVar2 = *((uint *)GEN_TOP((param_1 + 0x18)));
  uVar3 = *((uint *)GEN_TOP((param_1 + 0x1c))) >> 2;
  *((uint *)GEN_TOP(((int)this + 0x68))) = uVar3;
  *((uint *)GEN_TOP(((int)this + 100))) = uVar2;
  *((uint *)GEN_TOP(((int)this + 0x6c))) = uVar3 | 0x80000000;
  return uVar2;
}

/* ref: FUN_00d6f630 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d6f630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd6f630u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  undefined8 * puVar1;
  undefined8 * puVar2;
  
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  puVar1 = ((undefined8 *)GEN_TOP(F_00d6eaa0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD)));
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,0x20);
  }
  puVar2 = ((undefined8 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) * 0x20 + *(int *)this)));
  if (puVar2 != ((undefined8 *)GEN_TOP(0x0))) {
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    puVar2[2] = puVar1[2];
    puVar2[3] = puVar1[3];
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)this;
}

/* ref: FUN_00d6f6c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d6f6c0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(float param_5, float gen_a4), GEN_P(float param_6, float gen_a5), GEN_P(float param_7, float gen_a6), GEN_P(float param_8, float gen_a7), GEN_P(float param_9, float gen_a8))
{
  GEN_ENTER(0xd6f6c0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  GEN_PIN(float param_6 = (float)gen_a5;)
  GEN_PIN(float param_7 = (float)gen_a6;)
  GEN_PIN(float param_8 = (float)gen_a7;)
  GEN_PIN(float param_9 = (float)gen_a8;)
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  uint uVar1;
  undefined8 * puVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = ((int)0x80000000);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = ((int)0x80000000);
  param_1[8] = ((int)0x80000000);
  param_1[6] = 0;
  param_1[7] = 0;
  F_00d6eaa0(&(*(float *)(gen_frame + 0x0)) GEN_EDX_FWD);
  uVar1 = param_1[2];
  (*(float *)(gen_frame + 0x0)) = param_2;
  (*(float *)(gen_frame + 0x4)) = param_3;
  (*(float *)(gen_frame + 0x8)) = param_4;
  (*(float *)(gen_frame + 0xc)) = param_5;
  (*(float *)(gen_frame + 0x10)) = param_6;
  (*(float *)(gen_frame + 0x14)) = param_7;
  (*(float *)(gen_frame + 0x18)) = param_8;
  (*(float *)(gen_frame + 0x1c)) = param_9;
  if (param_1[1] == (uVar1 & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_1,0x20);
  }
  puVar2 = ((undefined8 *)GEN_TOP((param_1[1] * 0x20 + *param_1)));
  if (puVar2 != ((undefined8 *)GEN_TOP(0x0))) {
    *puVar2 = CONCAT44((uint)gen_fl2bits((*(float *)(gen_frame + 0x4))),(uint)gen_fl2bits((*(float *)(gen_frame + 0x0))));
    puVar2[1] = CONCAT44((uint)gen_fl2bits((*(float *)(gen_frame + 0xc))),(uint)gen_fl2bits((*(float *)(gen_frame + 0x8))));
    puVar2[2] = CONCAT44((uint)gen_fl2bits((*(float *)(gen_frame + 0x14))),(uint)gen_fl2bits((*(float *)(gen_frame + 0x10))));
    puVar2[3] = CONCAT44((uint)gen_fl2bits((*(float *)(gen_frame + 0x1c))),(uint)gen_fl2bits((*(float *)(gen_frame + 0x18))));
  }
  param_1[1] = param_1[1] + 1;
  return (uint)param_1;
}

/* ref: FUN_00d6f800 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d6f800(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(uint param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5), GEN_P(undefined4 * param_7, unsigned int gen_a6), GEN_P(undefined4 * param_8, unsigned int gen_a7), GEN_P(int param_9, unsigned int gen_a8), GEN_P(int param_10, unsigned int gen_a9), GEN_P(int param_11, unsigned int gen_a10), GEN_P(int param_12, unsigned int gen_a11))
{
  GEN_ENTER(0xd6f800u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  GEN_PIN(undefined4 * param_7 = (undefined4 *)(uintptr_t)gen_a6;)
  GEN_PIN(undefined4 * param_8 = (undefined4 *)(uintptr_t)gen_a7;)
  GEN_PIN(int param_9 = (int)gen_a8;)
  GEN_PIN(int param_10 = (int)gen_a9;)
  GEN_PIN(int param_11 = (int)gen_a10;)
  GEN_PIN(int param_12 = (int)gen_a11;)
  GEN_FRAME_DECL(0x3e0, 0);
  int * piVar1;
  int * piVar2;
  undefined4 * puVar3;
  float * pfVar4;
  float * pfVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ushort uVar20;
  short * psVar21;
  undefined8 uVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  short sVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined1 auVar38 [4];
  LPVOID pvVar39;
  short * psVar40;
  int iVar41;
  undefined4 * puVar42;
  float * pfVar43;
  int iVar44;
  float * pfVar45;
  LPVOID pvVar46;
  undefined4 * puVar47;
  uint uVar48;
  gen_v16 * pauVar49;
  float * pfVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  int iVar54;
  uint uVar55;
  ushort * puVar56;
  ushort * puVar57;
  ushort * puVar58;
  uint uVar59;
  uint uVar60;
  uint uVar61;
  float fVar62;
  float fVar63;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  uint uVar78;
  uint uVar86;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  float fVar87;
  float fVar88;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  uint uVar95;
  float fVar96;
  float fVar97;
  uint uVar98;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  float fVar99;
  float fVar106;
  float fVar107;
  float fVar108;
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  float fVar109;
  float fVar118;
  float fVar119;
  float fVar120;
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  float fVar126;
  float fVar133;
  float fVar134;
  float fVar135;
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  float fVar136;
  float fVar137;
  float fVar138;
  float fVar139;
  
  (*(ushort * PTR32 *)(gen_frame + 0x390)) = param_1;
  pvVar39 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar47 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar39 + 4)));
  if (puVar47 < *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar39 + 0xc)))) {
    *puVar47 = ((char *)REFP(0x1137718));
    puVar47[3] = ((char *)REFP(0x1137710));
    uVar22 = rdtsc();
    (*(undefined4 *)(gen_frame + 0x268)) = (int)uVar22;
    puVar47[1] = (int)uVar22;
    *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar39 + 4))) = puVar47 + 4;
  }
  if (param_4 == 0) {
    F_00d6ed20(param_1 GEN_EDX_ARG,param_2,&(*(int *)(gen_frame + 0x19c)),((undefined1 *)(gen_frame + 0x128)));
    param_4 = *((int *)GEN_TOP(((int)param_1 + 0x28))) + (*(int *)(gen_frame + 0x19c));
  }
  iVar54 = *((int *)GEN_TOP(((int)param_1 + 0x34))) + *((int *)GEN_TOP(((int)param_1 + 0x44))) * 2;
  uVar51 = param_2 / 0xf;
  param_2 = param_2 % 0xf;
  (*(uint *)(gen_frame + 0x26c)) = (int)CONCAT22(*((undefined2 *)GEN_TOP((iVar54 + 2 + uVar51 * 4))),
                            *((undefined2 *)GEN_TOP((iVar54 + uVar51 * 4)))) + param_4;
  (*(uint *)(gen_frame + 0x2dc)) = param_4;
  fVar62 = REFG(float, 0x1087f04);
  if (param_3 < REFG(float, 0x10947f8)) {
    (*(char *)(gen_frame + 0x3cb)) = '\x01';
  }
  else if (*(float *)&REFG(undefined, 0x113770c) < param_3) {
    param_2 = param_2 + 1;
    (*(char *)(gen_frame + 0x3cb)) = '\x01';
  }
  else {
    (*(char *)(gen_frame + 0x3cb)) = '\0';
    fVar62 = REFG(float, 0x1087f04) - param_3;
  }
  (*(float *)(gen_frame + 0x2b0)) = fVar62;
  (*(float *)(gen_frame + 0x2b4)) = fVar62;
  (*(float *)(gen_frame + 0x2b8)) = fVar62;
  (*(float *)(gen_frame + 0x2bc)) = fVar62;
  (*(float *)(gen_frame + 0x1a0)) = param_3;
  (*(float *)(gen_frame + 0x1a4)) = param_3;
  (*(float *)(gen_frame + 0x1a8)) = param_3;
  (*(float *)(gen_frame + 0x1ac)) = param_3;
  iVar54 = *((int *)GEN_TOP(((int)param_1 + 100)));
  (*(float * PTR32 *)(gen_frame + 0x3c0)) = ((float *)GEN_TOP((iVar54 + *((int *)GEN_TOP(((int)param_1 + 0x74))) * 4)));
  (*(float * PTR32 *)(gen_frame + 0x3bc)) = ((float *)GEN_TOP((iVar54 + *((int *)GEN_TOP(((int)param_1 + 0x78))) * 4)));
  (*(ushort * PTR32 *)(gen_frame + 0x3a8)) = ((ushort *)GEN_TOP((iVar54 + *((int *)GEN_TOP(((int)param_1 + 0x70))) * 4)));
  (*(ushort * PTR32 *)(gen_frame + 0x3b4)) = ((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 0x34))) + *((int *)GEN_TOP(((int)param_1 + 0x48))) * 2)));
  (*(float *)(gen_frame + 0x180)) = param_3;
  (*(float *)(gen_frame + 0x184)) = param_3;
  (*(float *)(gen_frame + 0x188)) = param_3;
  (*(float *)(gen_frame + 0x18c)) = param_3;
  (*(float *)(gen_frame + 0x170)) = gen_bits2f((uint)gen_fl2bits(param_3) ^ *(uint *)&REFG(undefined, 0x10ab9c0));
  (*(float *)(gen_frame + 0x174)) = gen_bits2f((uint)gen_fl2bits(param_3) ^ *(uint *)&REFG(undefined, 0x10ab9c4));
  (*(float *)(gen_frame + 0x178)) = gen_bits2f((uint)gen_fl2bits(param_3) ^ *(uint *)&REFG(undefined, 0x10ab9c8));
  (*(float *)(gen_frame + 0x17c)) = gen_bits2f((uint)gen_fl2bits(param_3) ^ *(uint *)&REFG(undefined, 0x10ab9cc));
  (*(ushort * PTR32 *)(gen_frame + 0x36c)) = ((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 0x34))) + *((int *)GEN_TOP(((int)param_1 + 0x4c))) * 2)));
  pvVar39 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  psVar21 = *((short * PTR32 *)GEN_TOP(((int)pvVar39 + 0xc)));
  psVar40 = psVar21 + 0x40;
  if ((*((int *)GEN_TOP(((int)pvVar39 + 8))) < 0x80) || (*((short * PTR32 *)GEN_TOP(((int)pvVar39 + 0x10))) < psVar40)) {
    psVar40 = ((short *)GEN_TOP(F_00d94390(pvVar39 GEN_EDX_ARG,0x80)));
    (*(short * PTR32 *)(gen_frame + 0x3a4)) = psVar40;
  }
  else {
    *((short * PTR32 *)GEN_TOP(((int)pvVar39 + 0xc))) = psVar40;
    (*(short * PTR32 *)(gen_frame + 0x3a4)) = psVar21;
  }
  pvVar39 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  pfVar45 = *((float * PTR32 *)GEN_TOP(((int)pvVar39 + 0xc)));
  pfVar43 = pfVar45 + 0x40;
  if ((*((int *)GEN_TOP(((int)pvVar39 + 8))) < 0x100) || (*((float * PTR32 *)GEN_TOP(((int)pvVar39 + 0x10))) < pfVar43)) {
    pfVar43 = ((float *)GEN_TOP(F_00d94390(pvVar39 GEN_EDX_ARG,0x100)));
    (*(float * PTR32 *)(gen_frame + 0x3ac)) = pfVar43;
  }
  else {
    *((float * PTR32 *)GEN_TOP(((int)pvVar39 + 0xc))) = pfVar43;
    (*(float * PTR32 *)(gen_frame + 0x3ac)) = pfVar45;
  }
  if ((param_11 != 0) && (0 < (int)param_7)) {
    (*(ushort * PTR32 *)(gen_frame + 0x3c4)) = (ushort *)param_7;
    (*(uint *)(gen_frame + 0x38c)) = ((int)param_7 - 1U >> 4) + 1;
    iVar54 = param_11;
    do {
      uVar51 = (uint)*(*(ushort * PTR32 *)(gen_frame + 0x3b4));
      (*(ushort * PTR32 *)(gen_frame + 0x3b4)) = (*(ushort * PTR32 *)(gen_frame + 0x3b4)) + 1;
      puVar57 = (*(ushort * PTR32 *)(gen_frame + 0x3c4));
      if (0xf < (int)(*(ushort * PTR32 *)(gen_frame + 0x3c4))) {
        puVar57 = ((ushort *)GEN_TOP(0x10));
      }
      iVar41 = 0;
      if (0 < (int)puVar57) {
        do {
          *((byte *)GEN_TOP((iVar41 + iVar54))) = *((byte *)GEN_TOP((iVar41 + iVar54))) & -((byte)uVar51 & 1);
          iVar41 = iVar41 + 1;
          uVar51 = (int)uVar51 >> 1;
        } while (iVar41 < (int)puVar57);
      }
      (*(ushort * PTR32 *)(gen_frame + 0x3c4)) = ((ushort *)GEN_TOP(((int)(*(ushort * PTR32 *)(gen_frame + 0x3c4)) - 0x10)));
      iVar54 = iVar54 + 0x10;
      uVar51 = (*(uint *)(gen_frame + 0x38c)) - 1;
      (*(uint *)(gen_frame + 0x38c)) = uVar51;
    } while (uVar51 != 0);
  }
  if ((param_12 != 0) && (0 < (int)param_8)) {
    (*(ushort * PTR32 *)(gen_frame + 0x3c4)) = (ushort *)param_8;
    (*(uint *)(gen_frame + 0x38c)) = ((int)param_8 - 1U >> 4) + 1;
    iVar54 = param_12;
    do {
      uVar51 = (uint)*(*(ushort * PTR32 *)(gen_frame + 0x3b4));
      (*(ushort * PTR32 *)(gen_frame + 0x3b4)) = (*(ushort * PTR32 *)(gen_frame + 0x3b4)) + 1;
      puVar57 = (*(ushort * PTR32 *)(gen_frame + 0x3c4));
      if (0xf < (int)(*(ushort * PTR32 *)(gen_frame + 0x3c4))) {
        puVar57 = ((ushort *)GEN_TOP(0x10));
      }
      iVar41 = 0;
      if (0 < (int)puVar57) {
        do {
          *((byte *)GEN_TOP((iVar41 + iVar54))) = *((byte *)GEN_TOP((iVar41 + iVar54))) & -((byte)uVar51 & 1);
          iVar41 = iVar41 + 1;
          uVar51 = (int)uVar51 >> 1;
        } while (iVar41 < (int)puVar57);
      }
      (*(ushort * PTR32 *)(gen_frame + 0x3c4)) = ((ushort *)GEN_TOP(((int)(*(ushort * PTR32 *)(gen_frame + 0x3c4)) - 0x10)));
      iVar54 = iVar54 + 0x10;
      uVar51 = (*(uint *)(gen_frame + 0x38c)) - 1;
      (*(uint *)(gen_frame + 0x38c)) = uVar51;
    } while (uVar51 != 0);
  }
  if (0 < (int)param_7) {
    (*(int *)(gen_frame + 0x398)) = (int)((int)(uintptr_t)param_7) * 0xc;
    pvVar39 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar51 = *((uint *)GEN_TOP(((int)pvVar39 + 0xc)));
    uVar55 = ((int)param_7 + 3U & 0xfffffffc) * 0x30 + 0x7f & 0xffffff80;
    (*(ushort * PTR32 *)(gen_frame + 0x39c)) = ((ushort *)GEN_TOP(uVar55));
    if ((*((int *)GEN_TOP(((int)pvVar39 + 8))) < (int)uVar55) ||
       (*((uint *)GEN_TOP(((int)pvVar39 + 0x10))) < uVar51 + uVar55)) {
      uVar51 = F_00d94390(pvVar39 GEN_EDX_ARG,uVar55);
      (*(uint *)(gen_frame + 0x38c)) = uVar51;
    }
    else {
      *((uint *)GEN_TOP(((int)pvVar39 + 0xc))) = uVar51 + uVar55;
      (*(uint *)(gen_frame + 0x38c)) = uVar51;
    }
    (*(uint *)(gen_frame + 0x38c)) = uVar51;
    pvVar39 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    puVar47 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar39 + 0xc)));
    uVar52 = (int)puVar47 + uVar55;
    if ((*((int *)GEN_TOP(((int)pvVar39 + 8))) < (int)uVar55) || (*((uint *)GEN_TOP(((int)pvVar39 + 0x10))) < uVar52)) {
      puVar47 = ((undefined4 *)GEN_TOP(F_00d94390(pvVar39 GEN_EDX_ARG,uVar55)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x3cc)) = puVar47;
    }
    else {
      *((uint *)GEN_TOP(((int)pvVar39 + 0xc))) = uVar52;
      (*(undefined4 * PTR32 *)(gen_frame + 0x3cc)) = puVar47;
    }
    puVar57 = (*(ushort * PTR32 *)(gen_frame + 0x390));
    iVar54 = *((int *)GEN_TOP(((int)(*(ushort * PTR32 *)(gen_frame + 0x390)) + 0x34)));
    (*(ushort * PTR32 *)(gen_frame + 0x348)) = ((ushort *)GEN_TOP((iVar54 + *((int *)GEN_TOP(((int)(*(ushort * PTR32 *)(gen_frame + 0x390)) + 0x50))) * 2)));
    (*(ushort * PTR32 *)(gen_frame + 0x3b8)) = ((ushort *)GEN_TOP((iVar54 + *((int *)GEN_TOP(((int)(*(ushort * PTR32 *)(gen_frame + 0x390)) + 0x58))) * 2)));
    (*(ushort * PTR32 *)(gen_frame + 0x3b4)) = ((ushort *)GEN_TOP((iVar54 + *((int *)GEN_TOP(((int)(*(ushort * PTR32 *)(gen_frame + 0x390)) + 0x60))) * 2)));
    pvVar39 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
    puVar47 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar39 + 4)));
    (*(undefined4 * PTR32 *)(gen_frame + 0x3a0)) = puVar47;
    if (puVar47 < *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar39 + 0xc)))) {
      *puVar47 = ((char *)REFP(0x11376f8));
      uVar22 = rdtsc();
      (*(undefined4 *)(gen_frame + 0x2a8)) = (int)uVar22;
      puVar47[1] = (int)uVar22;
      *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar39 + 4))) = puVar47 + 3;
    }
    if (0 < (int)param_7) {
      (*(int *)(gen_frame + 0x1bc)) = param_9 - param_5;
      (*(float * PTR32 *)(gen_frame + 0x2d8)) = ((float *)GEN_TOP((uVar51 - param_5)));
      (*(float * PTR32 *)(gen_frame + 0x3b0)) = ((float *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x3cc)) - param_5)));
      (*(ushort * PTR32 *)(gen_frame + 0x3c4)) = (ushort *)(*(undefined4 * PTR32 *)(gen_frame + 0x3cc));
      puVar47 = ((undefined4 *)GEN_TOP((param_5 + 0x20)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x3a0)) = ((undefined4 *)GEN_TOP((param_9 - uVar51)));
      (*(float * PTR32 *)(gen_frame + 0x34c)) = ((float *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x3cc)) - uVar51)));
      puVar42 = ((undefined4 *)GEN_TOP((uVar51 + 0x10)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x394)) = param_7;
      do {
        puVar57 = (*(ushort * PTR32 *)(gen_frame + 0x3c4));
        uVar6 = puVar47[-8];
        uVar27 = puVar47[-7];
        uVar28 = puVar47[-6];
        uVar29 = puVar47[-5];
        uVar30 = puVar47[-4];
        uVar31 = puVar47[-3];
        uVar32 = puVar47[-2];
        uVar33 = puVar47[-1];
        uVar34 = *puVar47;
        uVar35 = puVar47[1];
        uVar36 = puVar47[2];
        uVar37 = puVar47[3];
        puVar3 = ((undefined4 *)GEN_TOP(((param_9 - (int)(*(undefined4 * PTR32 *)(gen_frame + 0x3cc))) + (int)(*(ushort * PTR32 *)(gen_frame + 0x3c4)))));
        *puVar3 = uVar6;
        puVar3[1] = uVar27;
        puVar3[2] = uVar28;
        puVar3[3] = uVar29;
        puVar3 = ((undefined4 *)GEN_TOP(((int)(param_9 - uVar51) + (int)puVar42)));
        *puVar3 = uVar30;
        puVar3[1] = uVar31;
        puVar3[2] = uVar32;
        puVar3[3] = uVar33;
        puVar3 = ((undefined4 *)GEN_TOP(((param_9 - param_5) + (int)puVar47)));
        *puVar3 = uVar34;
        puVar3[1] = uVar35;
        puVar3[2] = uVar36;
        puVar3[3] = uVar37;
        puVar42[-4] = uVar6;
        puVar42[-3] = uVar27;
        puVar42[-2] = uVar28;
        puVar42[-1] = uVar29;
        *puVar42 = uVar30;
        puVar42[1] = uVar31;
        puVar42[2] = uVar32;
        puVar42[3] = uVar33;
        puVar3 = ((undefined4 *)GEN_TOP(((int)(uVar51 - param_5) + (int)puVar47)));
        *puVar3 = uVar34;
        puVar3[1] = uVar35;
        puVar3[2] = uVar36;
        puVar3[3] = uVar37;
        (*(ushort * PTR32 *)(gen_frame + 0x3c4)) = ((ushort *)GEN_TOP(((int)(*(ushort * PTR32 *)(gen_frame + 0x3c4)) + 0x30)));
        *(undefined4 *)puVar57 = uVar6;
        *((undefined4 *)GEN_TOP(((int)puVar57 + 4))) = uVar27;
        *((undefined4 *)GEN_TOP(((int)puVar57 + 8))) = uVar28;
        *((undefined4 *)GEN_TOP(((int)puVar57 + 0xc))) = uVar29;
        puVar3 = ((undefined4 *)GEN_TOP(((int)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x3cc)) - uVar51) + (int)puVar42)));
        *puVar3 = uVar30;
        puVar3[1] = uVar31;
        puVar3[2] = uVar32;
        puVar3[3] = uVar33;
        puVar3 = ((undefined4 *)GEN_TOP((((int)(*(undefined4 * PTR32 *)(gen_frame + 0x3cc)) - param_5) + (int)puVar47)));
        *puVar3 = uVar34;
        puVar3[1] = uVar35;
        puVar3[2] = uVar36;
        puVar3[3] = uVar37;
        puVar47 = puVar47 + 0xc;
        puVar42 = puVar42 + 0xc;
        puVar3 = ((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x394)) - 1)));
        (*(undefined4 * PTR32 *)(gen_frame + 0x394)) = puVar3;
        puVar57 = (*(ushort * PTR32 *)(gen_frame + 0x390));
      } while (puVar3 != ((undefined4 *)GEN_TOP(0x0)));
    }
    puVar42 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
    puVar47 = ((undefined4 *)GEN_TOP(puVar42[1]));
    (*(float * PTR32 *)(gen_frame + 0x3b0)) = (float *)puVar42;
    if (puVar47 < ((undefined4 *)GEN_TOP(puVar42[3]))) {
      *puVar47 = ((char *)REFP(0x11376e4));
      uVar22 = rdtsc();
      (*(undefined4 *)(gen_frame + 0x28c)) = (int)uVar22;
      puVar47[1] = (int)uVar22;
      puVar42[1] = puVar47 + 3;
    }
    iVar54 = *((int *)GEN_TOP(((int)puVar57 + 0x5c))) - *((int *)GEN_TOP(((int)puVar57 + 0x58)));
    (*(ushort * PTR32 *)(gen_frame + 0x3c4)) = ((ushort *)GEN_TOP(iVar54));
    if (0 < iVar54) {
      uVar55 = (uint)*(*(ushort * PTR32 *)(gen_frame + 0x3b8));
      iVar41 = 0;
      (*(float * PTR32 *)(gen_frame + 0x3b0)) = (float *)(*(ushort * PTR32 *)(gen_frame + 0x3a8));
      puVar57 = (*(ushort * PTR32 *)(gen_frame + 0x3a8));
      if (iVar54 != 1 && -1 < iVar54 - 1) {
        do {
          if ((*(int *)(gen_frame + 0x398)) <= (int)uVar55) goto LAB_00d6fce2;
          uVar6 = *(undefined4 *)puVar57;
          *((undefined4 *)GEN_TOP((uVar55 * 4 + param_9))) = uVar6;
          *((undefined4 *)GEN_TOP((uVar55 * 4 + uVar51))) = uVar6;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3cc))[uVar55] = uVar6;
          uVar55 = (uint)(*(ushort * PTR32 *)(gen_frame + 0x3b8))[iVar41 + 1];
          iVar41 = iVar41 + 1;
          puVar57 = ((ushort *)GEN_TOP(((int)puVar57 + 4)));
        } while (iVar41 < iVar54 - 1);
      }
      if ((int)uVar55 < (*(int *)(gen_frame + 0x398))) {
        uVar6 = *(undefined4 *)puVar57;
        *((undefined4 *)GEN_TOP((uVar55 * 4 + param_9))) = uVar6;
        *((undefined4 *)GEN_TOP((uVar55 * 4 + uVar51))) = uVar6;
        (*(undefined4 * PTR32 *)(gen_frame + 0x3cc))[uVar55] = uVar6;
      }
LAB_00d6fce2: ;
      (*(ushort * PTR32 *)(gen_frame + 0x3a8)) = ((ushort *)GEN_TOP(((int)(*(ushort * PTR32 *)(gen_frame + 0x3a8)) + iVar54 * 4)));
      puVar57 = (*(ushort * PTR32 *)(gen_frame + 0x390));
    }
    pfVar43 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
    puVar47 = ((undefined4 *)(uintptr_t)gen_fl2bits((float)(pfVar43[1])));
    (*(float * PTR32 *)(gen_frame + 0x3b0)) = pfVar43;
    if (puVar47 < ((undefined4 *)(uintptr_t)gen_fl2bits((float)(pfVar43[3])))) {
      *puVar47 = ((char *)REFP(0x11376d0));
      uVar22 = rdtsc();
      (*(undefined4 *)(gen_frame + 0x270)) = (int)uVar22;
      puVar47[1] = (int)uVar22;
      pfVar43[1] = ((float)gen_bits2f((unsigned int)(uintptr_t)((puVar47 + 3))));
    }
    iVar54 = *((int *)GEN_TOP(((int)puVar57 + 0x54))) - *((int *)GEN_TOP(((int)puVar57 + 0x50)));
    (*(undefined4 * PTR32 *)(gen_frame + 0x3a0)) = ((undefined4 *)GEN_TOP(iVar54));
    (*(ushort * PTR32 *)(gen_frame + 0x3c4)) = ((ushort *)GEN_TOP(0x0));
    if (0 < iVar54) {
      do {
        (*(undefined4 * PTR32 *)(gen_frame + 0x394)) = ((undefined4 *)GEN_TOP((uint)(*(ushort * PTR32 *)(gen_frame + 0x348))[(int)(*(ushort * PTR32 *)(gen_frame + 0x3c4))]));
        if ((*(int *)(gen_frame + 0x398)) <= (int)(uint)(*(ushort * PTR32 *)(gen_frame + 0x348))[(int)(*(ushort * PTR32 *)(gen_frame + 0x3c4))]) break;
        (*(uint *)(gen_frame + 0x2dc)) = param_4;
        pvVar39 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
        puVar47 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar39 + 4)));
        if (puVar47 < *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar39 + 0xc)))) {
          *puVar47 = ((char *)REFP(0x1137660));
          puVar47[3] = ((char *)REFP(0x1137650));
          uVar22 = rdtsc();
          (*(undefined4 *)(gen_frame + 0x290)) = (int)uVar22;
          puVar47[1] = (int)uVar22;
          *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar39 + 4))) = puVar47 + 4;
        }
        if ((*(char *)(gen_frame + 0x3cb)) == '\0') {
          param_4 = F_00d8a500(param_4,param_2,(*(short * PTR32 *)(gen_frame + 0x3a4)));
        }
        else {
          param_4 = F_00d8a4f0(param_4,param_2,(*(short * PTR32 *)(gen_frame + 0x3a4)));
        }
        pvVar39 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
        puVar47 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar39 + 4)));
        if (puVar47 < *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar39 + 0xc)))) {
          *puVar47 = ((char *)REFP(0x1137640));
          uVar22 = rdtsc();
          (*(undefined4 *)(gen_frame + 0x278)) = (int)uVar22;
          puVar47[1] = (int)uVar22;
          *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar39 + 4))) = puVar47 + 3;
        }
        (*(float *)(gen_frame + 0x160)) = *(float *)&REFG(undefined, 0x1137630);
        (*(undefined4 *)(gen_frame + 0x164)) = *(undefined4 *)&REFG(undefined, 0x1137634);
        (*(undefined4 *)(gen_frame + 0x168)) = *(undefined4 *)&REFG(undefined, 0x1137638);
        (*(undefined4 *)(gen_frame + 0x16c)) = *(undefined4 *)&REFG(undefined, 0x113763c);
        (*(undefined4 *)(gen_frame + 0x140)) = 0;
        (*(undefined4 *)(gen_frame + 0x144)) = 0;
        (*(undefined4 *)(gen_frame + 0x148)) = 0;
        (*(undefined4 *)(gen_frame + 0x14c)) = 0;
        (*(ushort * PTR32 *)(gen_frame + 0x3b8)) = ((ushort *)GEN_TOP((uint)*(*(ushort * PTR32 *)(gen_frame + 0x36c))));
        (*(ushort * PTR32 *)(gen_frame + 0x36c)) = (*(ushort * PTR32 *)(gen_frame + 0x36c)) + 1;
        iVar54 = 0;
        pfVar43 = (*(float * PTR32 *)(gen_frame + 0x3c0));
        pfVar45 = (*(float * PTR32 *)(gen_frame + 0x3bc));
        do {
          if (((uint)(*(ushort * PTR32 *)(gen_frame + 0x3b8)) & 1) == 0) {
            fVar62 = *pfVar43;
            pfVar43 = pfVar43 + 1;
            *((float *)GEN_TOP(((int)((float *)(gen_frame + 0x40)) + iVar54))) = fVar62;
            pfVar50 = pfVar45 + 1;
            *((float *)GEN_TOP(((int)((float *)(gen_frame + 0x90)) + iVar54))) = *pfVar45;
          }
          else {
            *((float *)GEN_TOP(((int)((float *)(gen_frame + 0x40)) + iVar54))) = *(float *)&REFG(undefined, 0x1137630);
            *((undefined4 *)GEN_TOP(((int)((float *)(gen_frame + 0x90)) + iVar54))) = 0;
            pfVar50 = pfVar45;
          }
          uVar20 = (ushort)((int)(uintptr_t)(*(ushort * PTR32 *)(gen_frame + 0x3b8))) >> 1;
          (*(undefined2 *)((char *)&(*(ushort * PTR32 *)(gen_frame + 0x3b8)) + 0)) = uVar20;
          (*(ushort * PTR32 *)(gen_frame + 0x3b8)) = ((ushort *)GEN_TOP((uint)uVar20));
          iVar54 = iVar54 + 4;
          pfVar45 = pfVar50;
        } while (iVar54 < 0x10);
        (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2c0)) + 0)) = ((float *)(gen_frame + 0x40))[0];
        (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2c0)) + 4)) = ((float *)(gen_frame + 0x40))[1];
        (*(undefined8 *)(gen_frame + 0x2c0)) = CONCAT44((uint)gen_fl2bits(((float *)(gen_frame + 0x40))[1]),(uint)gen_fl2bits(((float *)(gen_frame + 0x40))[0]));
        (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2c8)) + 0)) = ((float *)(gen_frame + 0x40))[2];
        (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2c8)) + 4)) = ((float *)(gen_frame + 0x40))[3];
        (*(undefined8 *)(gen_frame + 0x2c8)) = CONCAT44((uint)gen_fl2bits(((float *)(gen_frame + 0x40))[3]),(uint)gen_fl2bits(((float *)(gen_frame + 0x40))[2]));
        *(undefined4 *)((undefined1 *)(gen_frame + 0x370)) = gen_fl2bits(((float *)(gen_frame + 0x90))[0]);
        (*(float *)(gen_frame + 0x374)) = ((float *)(gen_frame + 0x90))[1];
        (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x378)) + 0)) = ((float *)(gen_frame + 0x90))[2];
        (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x378)) + 4)) = ((float *)(gen_frame + 0x90))[3];
        iVar54 = 0;
        do {
          if (((uint)(*(ushort * PTR32 *)(gen_frame + 0x3b8)) & 1) == 0) {
            fVar62 = *pfVar43;
            pfVar43 = pfVar43 + 1;
            *((float *)GEN_TOP(((int)((float *)(gen_frame + 0x80)) + iVar54))) = fVar62;
            pfVar45 = pfVar50 + 1;
            *((float *)GEN_TOP(((int)((float *)(gen_frame + 0x60)) + iVar54))) = *pfVar50;
          }
          else {
            *((float *)GEN_TOP(((int)((float *)(gen_frame + 0x80)) + iVar54))) = *(float *)&REFG(undefined, 0x1137630);
            *((undefined4 *)GEN_TOP(((int)((float *)(gen_frame + 0x60)) + iVar54))) = 0;
            pfVar45 = pfVar50;
          }
          uVar20 = (ushort)((int)(uintptr_t)(*(ushort * PTR32 *)(gen_frame + 0x3b8))) >> 1;
          (*(undefined2 *)((char *)&(*(ushort * PTR32 *)(gen_frame + 0x3b8)) + 0)) = uVar20;
          (*(ushort * PTR32 *)(gen_frame + 0x3b8)) = ((ushort *)GEN_TOP((uint)uVar20));
          iVar54 = iVar54 + 4;
          pfVar50 = pfVar45;
        } while (iVar54 < 0x10);
        (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1d0)) + 0)) = ((float *)(gen_frame + 0x60))[0];
        (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1d0)) + 4)) = ((float *)(gen_frame + 0x60))[1];
        (*(undefined8 *)(gen_frame + 0x1d0)) = CONCAT44((uint)gen_fl2bits(((float *)(gen_frame + 0x60))[1]),(uint)gen_fl2bits(((float *)(gen_frame + 0x60))[0]));
        (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1d8)) + 0)) = ((float *)(gen_frame + 0x60))[2];
        (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1d8)) + 4)) = ((float *)(gen_frame + 0x60))[3];
        (*(undefined8 *)(gen_frame + 0x1d8)) = CONCAT44((uint)gen_fl2bits(((float *)(gen_frame + 0x60))[3]),(uint)gen_fl2bits(((float *)(gen_frame + 0x60))[2]));
        iVar54 = 0;
        do {
          if (((uint)(*(ushort * PTR32 *)(gen_frame + 0x3b8)) & 1) == 0) {
            fVar62 = *pfVar43;
            pfVar43 = pfVar43 + 1;
            *((float *)GEN_TOP(((int)((float *)(gen_frame + 0xf0)) + iVar54))) = fVar62;
            pfVar50 = pfVar45 + 1;
            *((float *)GEN_TOP(((int)((float *)(gen_frame + 0x70)) + iVar54))) = *pfVar45;
          }
          else {
            *((float *)GEN_TOP(((int)((float *)(gen_frame + 0xf0)) + iVar54))) = *(float *)&REFG(undefined, 0x1137630);
            *((undefined4 *)GEN_TOP(((int)((float *)(gen_frame + 0x70)) + iVar54))) = 0;
            pfVar50 = pfVar45;
          }
          uVar20 = (ushort)((int)(uintptr_t)(*(ushort * PTR32 *)(gen_frame + 0x3b8))) >> 1;
          (*(undefined2 *)((char *)&(*(ushort * PTR32 *)(gen_frame + 0x3b8)) + 0)) = uVar20;
          (*(ushort * PTR32 *)(gen_frame + 0x3b8)) = ((ushort *)GEN_TOP((uint)uVar20));
          iVar54 = iVar54 + 4;
          pfVar45 = pfVar50;
        } while (iVar54 < 0x10);
        (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x300)) + 0)) = ((float *)(gen_frame + 0x70))[0];
        (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x300)) + 4)) = ((float *)(gen_frame + 0x70))[1];
        (*(undefined8 *)(gen_frame + 0x300)) = CONCAT44((uint)gen_fl2bits(((float *)(gen_frame + 0x70))[1]),(uint)gen_fl2bits(((float *)(gen_frame + 0x70))[0]));
        (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x308)) + 0)) = ((float *)(gen_frame + 0x70))[2];
        (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x308)) + 4)) = ((float *)(gen_frame + 0x70))[3];
        (*(undefined8 *)(gen_frame + 0x308)) = CONCAT44((uint)gen_fl2bits(((float *)(gen_frame + 0x70))[3]),(uint)gen_fl2bits(((float *)(gen_frame + 0x70))[2]));
        iVar54 = 0;
        do {
          if (((uint)(*(ushort * PTR32 *)(gen_frame + 0x3b8)) & 1) == 0) {
            fVar62 = *pfVar43;
            pfVar43 = pfVar43 + 1;
            *((float *)GEN_TOP(((int)((float *)(gen_frame + 0xd0)) + iVar54))) = fVar62;
            pfVar45 = pfVar50 + 1;
            *((float *)GEN_TOP(((int)((float *)(gen_frame + 0x30)) + iVar54))) = *pfVar50;
          }
          else {
            *((float *)GEN_TOP(((int)((float *)(gen_frame + 0xd0)) + iVar54))) = *(float *)&REFG(undefined, 0x1137630);
            *((undefined4 *)GEN_TOP(((int)((float *)(gen_frame + 0x30)) + iVar54))) = 0;
            pfVar45 = pfVar50;
          }
          uVar20 = (ushort)((int)(uintptr_t)(*(ushort * PTR32 *)(gen_frame + 0x3b8))) >> 1;
          (*(undefined2 *)((char *)&(*(ushort * PTR32 *)(gen_frame + 0x3b8)) + 0)) = uVar20;
          (*(ushort * PTR32 *)(gen_frame + 0x3b8)) = ((ushort *)GEN_TOP((uint)uVar20));
          iVar54 = iVar54 + 4;
          pfVar50 = pfVar45;
        } while (iVar54 < 0x10);
        (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x350)) + 0)) = (undefined4)gen_fl2bits(((float *)(gen_frame + 0xd0))[0]);
        (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x350)) + 4)) = (undefined4)gen_fl2bits(((float *)(gen_frame + 0xd0))[1]);
        (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x358)) + 0)) = ((float *)(gen_frame + 0xd0))[2];
        (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x358)) + 4)) = ((float *)(gen_frame + 0xd0))[3];
        (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2e0)) + 0)) = ((float *)(gen_frame + 0x30))[0];
        (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2e0)) + 4)) = ((float *)(gen_frame + 0x30))[1];
        (*(undefined8 *)(gen_frame + 0x2e0)) = CONCAT44((uint)gen_fl2bits(((float *)(gen_frame + 0x30))[1]),(uint)gen_fl2bits(((float *)(gen_frame + 0x30))[0]));
        (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2e8)) + 0)) = ((float *)(gen_frame + 0x30))[2];
        (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2e8)) + 4)) = ((float *)(gen_frame + 0x30))[3];
        (*(undefined8 *)(gen_frame + 0x2e8)) = CONCAT44((uint)gen_fl2bits(((float *)(gen_frame + 0x30))[3]),(uint)gen_fl2bits(((float *)(gen_frame + 0x30))[2]));
        fVar126 = (float)(int)*(*(short * PTR32 *)(gen_frame + 0x3a4)) * ((float *)(gen_frame + 0x40))[0] + ((float *)(gen_frame + 0x90))[0];
        fVar133 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[1] * ((float *)(gen_frame + 0x40))[1] + ((float *)(gen_frame + 0x90))[1];
        fVar134 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[2] * ((float *)(gen_frame + 0x40))[2] + ((float *)(gen_frame + 0x90))[2];
        fVar135 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[3] * ((float *)(gen_frame + 0x40))[3] + ((float *)(gen_frame + 0x90))[3];
        (*(float * PTR32 *)(gen_frame + 0x3c0)) = pfVar43;
        fVar136 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[4] * ((float *)(gen_frame + 0x80))[0] + ((float *)(gen_frame + 0x60))[0];
        fVar137 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[5] * ((float *)(gen_frame + 0x80))[1] + ((float *)(gen_frame + 0x60))[1];
        fVar138 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[6] * ((float *)(gen_frame + 0x80))[2] + ((float *)(gen_frame + 0x60))[2];
        fVar139 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[7] * ((float *)(gen_frame + 0x80))[3] + ((float *)(gen_frame + 0x60))[3];
        fVar62 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[0xc] * ((float *)(gen_frame + 0xd0))[0] + ((float *)(gen_frame + 0x30))[0];
        fVar72 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[0xd] * ((float *)(gen_frame + 0xd0))[1] + ((float *)(gen_frame + 0x30))[1];
        fVar74 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[0xe] * ((float *)(gen_frame + 0xd0))[2] + ((float *)(gen_frame + 0x30))[2];
        fVar76 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[0xf] * ((float *)(gen_frame + 0xd0))[3] + ((float *)(gen_frame + 0x30))[3];
        fVar87 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[8] * ((float *)(gen_frame + 0xf0))[0] + ((float *)(gen_frame + 0x70))[0];
        fVar91 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[9] * ((float *)(gen_frame + 0xf0))[1] + ((float *)(gen_frame + 0x70))[1];
        fVar93 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[10] * ((float *)(gen_frame + 0xf0))[2] + ((float *)(gen_frame + 0x70))[2];
        fVar96 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[0xb] * ((float *)(gen_frame + 0xf0))[3] + ((float *)(gen_frame + 0x70))[3];
        (*(float * PTR32 *)(gen_frame + 0x3bc)) = pfVar45;
        (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x330)) + 0)) = fVar87;
        (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x330)) + 4)) = fVar91;
        (*(undefined8 *)(gen_frame + 0x330)) = CONCAT44((uint)gen_fl2bits(fVar91),(uint)gen_fl2bits(fVar87));
        (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x338)) + 0)) = fVar93;
        (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x338)) + 4)) = fVar96;
        (*(undefined8 *)(gen_frame + 0x338)) = CONCAT44((uint)gen_fl2bits(fVar96),(uint)gen_fl2bits(fVar93));
        (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x320)) + 0)) = fVar62;
        (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x320)) + 4)) = fVar72;
        (*(undefined8 *)(gen_frame + 0x320)) = CONCAT44((uint)gen_fl2bits(fVar72),(uint)gen_fl2bits(fVar62));
        (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x328)) + 0)) = fVar74;
        (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x328)) + 4)) = fVar76;
        (*(undefined8 *)(gen_frame + 0x328)) = CONCAT44((uint)gen_fl2bits(fVar76),(uint)gen_fl2bits(fVar74));
        if ((*(char *)(gen_frame + 0x3cb)) == '\0') {
          *(*(float * PTR32 *)(gen_frame + 0x3ac)) = fVar126;
          (*(float * PTR32 *)(gen_frame + 0x3ac))[1] = fVar133;
          (*(float * PTR32 *)(gen_frame + 0x3ac))[2] = fVar134;
          (*(float * PTR32 *)(gen_frame + 0x3ac))[3] = fVar135;
          (*(float * PTR32 *)(gen_frame + 0x3ac))[4] = fVar136;
          (*(float * PTR32 *)(gen_frame + 0x3ac))[5] = fVar137;
          (*(float * PTR32 *)(gen_frame + 0x3ac))[6] = fVar138;
          (*(float * PTR32 *)(gen_frame + 0x3ac))[7] = fVar139;
          (*(float * PTR32 *)(gen_frame + 0x3ac))[8] = fVar87;
          (*(float * PTR32 *)(gen_frame + 0x3ac))[9] = fVar91;
          (*(float * PTR32 *)(gen_frame + 0x3ac))[10] = fVar93;
          (*(float * PTR32 *)(gen_frame + 0x3ac))[0xb] = fVar96;
          (*(float * PTR32 *)(gen_frame + 0x3ac))[0xc] = fVar62;
          (*(float * PTR32 *)(gen_frame + 0x3ac))[0xd] = fVar72;
          (*(float * PTR32 *)(gen_frame + 0x3ac))[0xe] = fVar74;
          (*(float * PTR32 *)(gen_frame + 0x3ac))[0xf] = fVar76;
          fVar99 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[0x14] * ((float *)(gen_frame + 0x80))[0] + ((float *)(gen_frame + 0x60))[0];
          fVar106 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[0x15] * ((float *)(gen_frame + 0x80))[1] + ((float *)(gen_frame + 0x60))[1];
          fVar107 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[0x16] * ((float *)(gen_frame + 0x80))[2] + ((float *)(gen_frame + 0x60))[2];
          fVar108 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[0x17] * ((float *)(gen_frame + 0x80))[3] + ((float *)(gen_frame + 0x60))[3];
          fVar88 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[0x10] * ((float *)(gen_frame + 0x40))[0] + ((float *)(gen_frame + 0x90))[0];
          fVar92 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[0x11] * ((float *)(gen_frame + 0x40))[1] + ((float *)(gen_frame + 0x90))[1];
          fVar94 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[0x12] * ((float *)(gen_frame + 0x40))[2] + ((float *)(gen_frame + 0x90))[2];
          fVar97 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[0x13] * ((float *)(gen_frame + 0x40))[3] + ((float *)(gen_frame + 0x90))[3];
          fVar109 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[0x18] * ((float *)(gen_frame + 0xf0))[0] + ((float *)(gen_frame + 0x70))[0];
          fVar118 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[0x19] * ((float *)(gen_frame + 0xf0))[1] + ((float *)(gen_frame + 0x70))[1];
          fVar119 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[0x1a] * ((float *)(gen_frame + 0xf0))[2] + ((float *)(gen_frame + 0x70))[2];
          fVar120 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[0x1b] * ((float *)(gen_frame + 0xf0))[3] + ((float *)(gen_frame + 0x70))[3];
          fVar63 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[0x1c] * ((float *)(gen_frame + 0xd0))[0] + ((float *)(gen_frame + 0x30))[0];
          fVar73 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[0x1d] * ((float *)(gen_frame + 0xd0))[1] + ((float *)(gen_frame + 0x30))[1];
          fVar75 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[0x1e] * ((float *)(gen_frame + 0xd0))[2] + ((float *)(gen_frame + 0x30))[2];
          fVar77 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[0x1f] * ((float *)(gen_frame + 0xd0))[3] + ((float *)(gen_frame + 0x30))[3];
          (*(float * PTR32 *)(gen_frame + 0x3ac))[0x10] = fVar88;
          (*(float * PTR32 *)(gen_frame + 0x3ac))[0x11] = fVar92;
          (*(float * PTR32 *)(gen_frame + 0x3ac))[0x12] = fVar94;
          (*(float * PTR32 *)(gen_frame + 0x3ac))[0x13] = fVar97;
          (*(float * PTR32 *)(gen_frame + 0x3ac))[0x14] = fVar99;
          (*(float * PTR32 *)(gen_frame + 0x3ac))[0x15] = fVar106;
          (*(float * PTR32 *)(gen_frame + 0x3ac))[0x16] = fVar107;
          (*(float * PTR32 *)(gen_frame + 0x3ac))[0x17] = fVar108;
          (*(float * PTR32 *)(gen_frame + 0x3ac))[0x18] = fVar109;
          (*(float * PTR32 *)(gen_frame + 0x3ac))[0x19] = fVar118;
          (*(float * PTR32 *)(gen_frame + 0x3ac))[0x1a] = fVar119;
          (*(float * PTR32 *)(gen_frame + 0x3ac))[0x1b] = fVar120;
          (*(float * PTR32 *)(gen_frame + 0x3ac))[0x1c] = fVar63;
          (*(float * PTR32 *)(gen_frame + 0x3ac))[0x1d] = fVar73;
          (*(float * PTR32 *)(gen_frame + 0x3ac))[0x1e] = fVar75;
          (*(float * PTR32 *)(gen_frame + 0x3ac))[0x1f] = fVar77;
          (*(float * PTR32 *)(gen_frame + 0x3ac))[0x20] = (*(float *)(gen_frame + 0x2b0)) * fVar126 + (*(float *)(gen_frame + 0x1a0)) * fVar88;
          (*(float * PTR32 *)(gen_frame + 0x3ac))[0x21] = (*(float *)(gen_frame + 0x2b4)) * fVar133 + (*(float *)(gen_frame + 0x1a4)) * fVar92;
          (*(float * PTR32 *)(gen_frame + 0x3ac))[0x22] = (*(float *)(gen_frame + 0x2b8)) * fVar134 + (*(float *)(gen_frame + 0x1a8)) * fVar94;
          (*(float * PTR32 *)(gen_frame + 0x3ac))[0x23] = (*(float *)(gen_frame + 0x2bc)) * fVar135 + (*(float *)(gen_frame + 0x1ac)) * fVar97;
          (*(float * PTR32 *)(gen_frame + 0x3ac))[0x24] = (*(float *)(gen_frame + 0x2b0)) * fVar136 + (*(float *)(gen_frame + 0x1a0)) * fVar99;
          (*(float * PTR32 *)(gen_frame + 0x3ac))[0x25] = (*(float *)(gen_frame + 0x2b4)) * fVar137 + (*(float *)(gen_frame + 0x1a4)) * fVar106;
          (*(float * PTR32 *)(gen_frame + 0x3ac))[0x26] = (*(float *)(gen_frame + 0x2b8)) * fVar138 + (*(float *)(gen_frame + 0x1a8)) * fVar107;
          (*(float * PTR32 *)(gen_frame + 0x3ac))[0x27] = (*(float *)(gen_frame + 0x2bc)) * fVar139 + (*(float *)(gen_frame + 0x1ac)) * fVar108;
          (*(float * PTR32 *)(gen_frame + 0x3ac))[0x28] = (*(float *)(gen_frame + 0x2b0)) * fVar87 + (*(float *)(gen_frame + 0x1a0)) * fVar109;
          (*(float * PTR32 *)(gen_frame + 0x3ac))[0x29] = (*(float *)(gen_frame + 0x2b4)) * fVar91 + (*(float *)(gen_frame + 0x1a4)) * fVar118;
          (*(float * PTR32 *)(gen_frame + 0x3ac))[0x2a] = (*(float *)(gen_frame + 0x2b8)) * fVar93 + (*(float *)(gen_frame + 0x1a8)) * fVar119;
          (*(float * PTR32 *)(gen_frame + 0x3ac))[0x2b] = (*(float *)(gen_frame + 0x2bc)) * fVar96 + (*(float *)(gen_frame + 0x1ac)) * fVar120;
          (*(float * PTR32 *)(gen_frame + 0x3ac))[0x2c] = (*(float *)(gen_frame + 0x2b0)) * fVar62 + (*(float *)(gen_frame + 0x1a0)) * fVar63;
          (*(float * PTR32 *)(gen_frame + 0x3ac))[0x2d] = (*(float *)(gen_frame + 0x2b4)) * fVar72 + (*(float *)(gen_frame + 0x1a4)) * fVar73;
          (*(float * PTR32 *)(gen_frame + 0x3ac))[0x2e] = (*(float *)(gen_frame + 0x2b8)) * fVar74 + (*(float *)(gen_frame + 0x1a8)) * fVar75;
          (*(float * PTR32 *)(gen_frame + 0x3ac))[0x2f] = (*(float *)(gen_frame + 0x2bc)) * fVar76 + (*(float *)(gen_frame + 0x1ac)) * fVar77;
        }
        else {
          (*(float * PTR32 *)(gen_frame + 0x3ac))[0x20] = fVar126;
          (*(float * PTR32 *)(gen_frame + 0x3ac))[0x21] = fVar133;
          (*(float * PTR32 *)(gen_frame + 0x3ac))[0x22] = fVar134;
          (*(float * PTR32 *)(gen_frame + 0x3ac))[0x23] = fVar135;
          (*(float * PTR32 *)(gen_frame + 0x3ac))[0x24] = fVar136;
          (*(float * PTR32 *)(gen_frame + 0x3ac))[0x25] = fVar137;
          (*(float * PTR32 *)(gen_frame + 0x3ac))[0x26] = fVar138;
          (*(float * PTR32 *)(gen_frame + 0x3ac))[0x27] = fVar139;
          (*(float * PTR32 *)(gen_frame + 0x3ac))[0x28] = fVar87;
          (*(float * PTR32 *)(gen_frame + 0x3ac))[0x29] = fVar91;
          (*(float * PTR32 *)(gen_frame + 0x3ac))[0x2a] = fVar93;
          (*(float * PTR32 *)(gen_frame + 0x3ac))[0x2b] = fVar96;
          (*(float * PTR32 *)(gen_frame + 0x3ac))[0x2c] = fVar62;
          (*(float * PTR32 *)(gen_frame + 0x3ac))[0x2d] = fVar72;
          (*(float * PTR32 *)(gen_frame + 0x3ac))[0x2e] = fVar74;
          (*(float * PTR32 *)(gen_frame + 0x3ac))[0x2f] = fVar76;
        }
        pvVar39 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
        puVar47 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar39 + 4)));
        if (puVar47 < *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar39 + 0xc)))) {
          *puVar47 = &REFG(undefined, 0x1134dd0);
          uVar22 = rdtsc();
          (*(undefined4 *)(gen_frame + 0x288)) = (int)uVar22;
          puVar47[1] = (int)uVar22;
          *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar39 + 4))) = puVar47 + 3;
        }
        puVar47 = ((undefined4 *)GEN_TOP(((int)(*(ushort * PTR32 *)(gen_frame + 0x3c4)) + 0x10)));
        if ((int)(*(undefined4 * PTR32 *)(gen_frame + 0x3a0)) <= (int)puVar47) {
          puVar47 = (*(undefined4 * PTR32 *)(gen_frame + 0x3a0));
        }
        pfVar43 = ((float *)GEN_TOP(((int)puVar47 - 1)));
        iVar54 = 0;
        (*(float * PTR32 *)(gen_frame + 0x3b0)) = pfVar43;
        if ((int)(*(ushort * PTR32 *)(gen_frame + 0x3c4)) < (int)pfVar43) {
          pfVar45 = (*(float * PTR32 *)(gen_frame + 0x3ac)) + 0x20;
          do {
            uVar55 = (uint)(*(undefined4 * PTR32 *)(gen_frame + 0x394)) & 0xffff;
            if ((*(int *)(gen_frame + 0x398)) <= (int)uVar55) break;
            fVar62 = pfVar45[-0x20];
            fVar72 = pfVar45[-0x10];
            *((float *)GEN_TOP((uVar55 * 4 + param_9))) = *pfVar45;
            *((float *)GEN_TOP((uVar51 + uVar55 * 4))) = fVar62;
            (*(undefined4 * PTR32 *)(gen_frame + 0x3cc))[uVar55] = (undefined4)gen_fl2bits(fVar72);
            iVar41 = (int)(*(ushort * PTR32 *)(gen_frame + 0x3c4)) + 1;
            iVar44 = (int)(*(ushort * PTR32 *)(gen_frame + 0x3c4)) + 1;
            iVar54 = iVar54 + 1;
            pfVar45 = pfVar45 + 1;
            (*(ushort * PTR32 *)(gen_frame + 0x3c4)) = ((ushort *)GEN_TOP(iVar44));
            (*(undefined4 * PTR32 *)(gen_frame + 0x394)) = ((undefined4 *)GEN_TOP((uint)(*(ushort * PTR32 *)(gen_frame + 0x348))[iVar41]));
          } while (iVar44 < (int)pfVar43);
        }
        uVar55 = (uint)(*(undefined4 * PTR32 *)(gen_frame + 0x394)) & 0xffff;
        if ((int)uVar55 < (*(int *)(gen_frame + 0x398))) {
          fVar62 = (*(float * PTR32 *)(gen_frame + 0x3ac))[iVar54];
          fVar72 = (*(float * PTR32 *)(gen_frame + 0x3ac))[iVar54 + 0x10];
          *((float *)GEN_TOP((uVar55 * 4 + param_9))) = (*(float * PTR32 *)(gen_frame + 0x3ac))[iVar54 + 0x20];
          *((float *)GEN_TOP((uVar51 + uVar55 * 4))) = fVar62;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3cc))[uVar55] = (undefined4)gen_fl2bits(fVar72);
          (*(ushort * PTR32 *)(gen_frame + 0x3c4)) = ((ushort *)GEN_TOP(((int)(*(ushort * PTR32 *)(gen_frame + 0x3c4)) + 1)));
        }
      } while ((int)(*(ushort * PTR32 *)(gen_frame + 0x3c4)) < (int)(*(undefined4 * PTR32 *)(gen_frame + 0x3a0)));
    }
    pvVar39 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
    puVar47 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar39 + 4)));
    if (puVar47 < *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar39 + 0xc)))) {
      *puVar47 = ((char *)REFP(0x11376b4));
      uVar22 = rdtsc();
      (*(undefined4 *)(gen_frame + 0x29c)) = (int)uVar22;
      puVar47[1] = (int)uVar22;
      *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar39 + 4))) = puVar47 + 3;
    }
    iVar54 = *((int *)GEN_TOP(((int)(*(ushort * PTR32 *)(gen_frame + 0x390)) + 0x38))) - *((int *)GEN_TOP(((int)(*(ushort * PTR32 *)(gen_frame + 0x390)) + 0x60)));
    puVar57 = ((ushort *)GEN_TOP((iVar54 - 8)));
    (*(ushort * PTR32 *)(gen_frame + 0x3c4)) = puVar57;
    if (0 < (int)puVar57) {
      pfVar43 = ((float *)GEN_TOP((((uint)puVar57 & 0xfffffffc) - 4)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x3a0)) = ((undefined4 *)GEN_TOP(0x0));
      if ((*(char *)(gen_frame + 0x3cb)) == '\0') {
        (*(float * PTR32 *)(gen_frame + 0x3b0)) = pfVar43;
        if (0 < (int)pfVar43) {
          uVar20 = (*(ushort * PTR32 *)(gen_frame + 0x3b4))[3];
          (*(ushort * PTR32 *)(gen_frame + 0x348)) = (*(ushort * PTR32 *)(gen_frame + 0x3b4)) + 2;
          do {
            uVar55 = (uint)uVar20;
            if ((*(int *)(gen_frame + 0x398)) <= (int)uVar55) break;
            uVar52 = (uint)(*(ushort * PTR32 *)(gen_frame + 0x348))[-2];
            uVar48 = (uint)(*(ushort * PTR32 *)(gen_frame + 0x348))[-1];
            uVar53 = (uint)*(*(ushort * PTR32 *)(gen_frame + 0x348));
            uVar22 = *((undefined8 *)GEN_TOP((uVar51 + 0x10 + uVar52 * 0x30)));
            *(undefined8 *)((undefined1 *)(gen_frame + 0x350)) = uVar22;
            uVar7 = *((undefined8 *)GEN_TOP((uVar51 + 0x18 + uVar52 * 0x30)));
            (*(undefined8 *)(gen_frame + 0x358)) = uVar7;
            (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x350)) + 0)) = (undefined4)uVar22;
            (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x350)) + 4)) = (undefined4)((ulonglong)uVar22 >> 0x20);
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x358)) + 0)) = gen_bits2f((uint)uVar7);
            uVar22 = *((undefined8 *)GEN_TOP((uVar51 + 0x10 + uVar48 * 0x30)));
            (*(undefined8 *)(gen_frame + 0x300)) = uVar22;
            uVar7 = *((undefined8 *)GEN_TOP((uVar51 + 0x18 + uVar48 * 0x30)));
            (*(undefined8 *)(gen_frame + 0x308)) = uVar7;
            uVar8 = *((undefined8 *)GEN_TOP((uVar51 + 0x10 + uVar53 * 0x30)));
            (*(undefined8 *)(gen_frame + 0x1d0)) = uVar8;
            uVar9 = *((undefined8 *)GEN_TOP((uVar51 + 0x18 + uVar53 * 0x30)));
            (*(undefined8 *)(gen_frame + 0x1d8)) = uVar9;
            uVar10 = *((undefined8 *)GEN_TOP((uVar51 + 0x10 + uVar55 * 0x30)));
            (*(undefined8 *)(gen_frame + 0x2c0)) = uVar10;
            uVar11 = *((undefined8 *)GEN_TOP((uVar51 + 0x18 + uVar55 * 0x30)));
            (*(undefined8 *)(gen_frame + 0x2c8)) = uVar11;
            uVar12 = *(undefined8 *)((*(undefined4 * PTR32 *)(gen_frame + 0x3cc)) + uVar52 * 0xc + 4);
            *(undefined8 *)((undefined1 *)(gen_frame + 0x370)) = uVar12;
            uVar13 = *(undefined8 *)((*(undefined4 * PTR32 *)(gen_frame + 0x3cc)) + uVar52 * 0xc + 6);
            (*(undefined8 *)(gen_frame + 0x378)) = uVar13;
            uVar14 = *(undefined8 *)((*(undefined4 * PTR32 *)(gen_frame + 0x3cc)) + uVar48 * 0xc + 4);
            (*(undefined8 *)(gen_frame + 0x320)) = uVar14;
            uVar15 = *(undefined8 *)((*(undefined4 * PTR32 *)(gen_frame + 0x3cc)) + uVar48 * 0xc + 6);
            (*(undefined8 *)(gen_frame + 0x328)) = uVar15;
            uVar16 = *(undefined8 *)((*(undefined4 * PTR32 *)(gen_frame + 0x3cc)) + uVar53 * 0xc + 4);
            (*(undefined8 *)(gen_frame + 0x330)) = uVar16;
            uVar17 = *(undefined8 *)((*(undefined4 * PTR32 *)(gen_frame + 0x3cc)) + uVar53 * 0xc + 6);
            (*(undefined8 *)(gen_frame + 0x338)) = uVar17;
            uVar18 = *(undefined8 *)((*(undefined4 * PTR32 *)(gen_frame + 0x3cc)) + uVar55 * 0xc + 4);
            (*(undefined8 *)(gen_frame + 0x2e0)) = uVar18;
            uVar19 = *(undefined8 *)((*(undefined4 * PTR32 *)(gen_frame + 0x3cc)) + uVar55 * 0xc + 6);
            (*(undefined8 *)(gen_frame + 0x2e8)) = uVar19;
            fVar72 = ABS(gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x350)) + 0))));
            fVar74 = ABS(gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x350)) + 4))));
            fVar87 = ABS((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x358)) + 0)));
            fVar62 = (float)REFG(float, 0x1138af0);
            fVar76 = (*(float *)((char *)&REFG(float, 0x1138af0) + 12));
            fVar96 = (*(float *)((char *)&REFG(float, 0x1138af0) + 8));
            (*(float *)((char *)&auVar113 + 0)) = fVar62 - ((fVar74 + fVar72) + fVar87);
            fVar75 = (*(float *)((char *)&REFG(float, 0x1138af0) + 4));
            (*(float *)((char *)&auVar113 + 4)) = fVar75 - ((fVar74 + fVar72) + fVar87);
            (*(float *)((char *)&auVar113 + 8)) = fVar96 - ((fVar74 + fVar72) + fVar87);
            (*(float *)((char *)&auVar113 + 12)) = fVar76 - ((fVar74 + fVar72) + fVar87);
            gen_maxps(&(auVar121), &(*(gen_v16 *)&REFG(undefined8, 0x1138ae0)), &(auVar113));
            gen_minps(&(auVar114), &(*(gen_v16 *)&REFG(float, 0x1138af0)), &(auVar121));
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x300)) + 0)) = gen_bits2f((uint)uVar22);
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x300)) + 4)) = gen_bits2f((uint)((ulonglong)uVar22 >> 0x20));
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x308)) + 0)) = gen_bits2f((uint)uVar7);
            fVar72 = ABS((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x300)) + 0)));
            fVar74 = ABS((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x300)) + 4)));
            fVar87 = ABS((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x308)) + 0)));
            (*(float *)((char *)&auVar121 + 0)) = fVar62 - ((fVar74 + fVar72) + fVar87);
            (*(float *)((char *)&auVar121 + 4)) = fVar75 - ((fVar74 + fVar72) + fVar87);
            (*(float *)((char *)&auVar121 + 8)) = fVar96 - ((fVar74 + fVar72) + fVar87);
            (*(float *)((char *)&auVar121 + 12)) = fVar76 - ((fVar74 + fVar72) + fVar87);
            gen_maxps(&(auVar121), &(*(gen_v16 *)&REFG(undefined8, 0x1138ae0)), &(auVar121));
            gen_minps(&(auVar121), &(*(gen_v16 *)&REFG(float, 0x1138af0)), &(auVar121));
            fVar136 = (*(float *)((char *)&auVar121 + 12));
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1d0)) + 0)) = gen_bits2f((uint)uVar8);
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1d0)) + 4)) = gen_bits2f((uint)((ulonglong)uVar8 >> 0x20));
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1d8)) + 0)) = gen_bits2f((uint)uVar9);
            fVar72 = ABS((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1d0)) + 0)));
            fVar74 = ABS((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1d0)) + 4)));
            fVar87 = ABS((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1d8)) + 0)));
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x308)) + 4)) = fVar136;
            (*(float *)((char *)&auVar102 + 0)) = fVar62 - ((fVar74 + fVar72) + fVar87);
            (*(float *)((char *)&auVar102 + 4)) = fVar75 - ((fVar74 + fVar72) + fVar87);
            (*(float *)((char *)&auVar102 + 8)) = fVar96 - ((fVar74 + fVar72) + fVar87);
            (*(float *)((char *)&auVar102 + 12)) = fVar76 - ((fVar74 + fVar72) + fVar87);
            gen_maxps(&(auVar121), &(*(gen_v16 *)&REFG(undefined8, 0x1138ae0)), &(auVar102));
            gen_minps(&(auVar121), &(*(gen_v16 *)&REFG(float, 0x1138af0)), &(auVar121));
            fVar137 = (*(float *)((char *)&auVar121 + 12));
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2c0)) + 0)) = gen_bits2f((uint)uVar10);
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2c0)) + 4)) = gen_bits2f((uint)((ulonglong)uVar10 >> 0x20));
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2c8)) + 0)) = gen_bits2f((uint)uVar11);
            fVar72 = ABS((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2c0)) + 0)));
            fVar74 = ABS((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2c0)) + 4)));
            fVar87 = ABS((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2c8)) + 0)));
            (*(float *)((char *)&auVar125 + 0)) = fVar62 - ((fVar74 + fVar72) + fVar87);
            (*(float *)((char *)&auVar125 + 4)) = fVar75 - ((fVar74 + fVar72) + fVar87);
            (*(float *)((char *)&auVar125 + 8)) = fVar96 - ((fVar74 + fVar72) + fVar87);
            (*(float *)((char *)&auVar125 + 12)) = fVar76 - ((fVar74 + fVar72) + fVar87);
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1d8)) + 4)) = fVar137;
            gen_maxps(&(auVar121), &(*(gen_v16 *)&REFG(undefined8, 0x1138ae0)), &(auVar125));
            gen_minps(&(auVar121), &(*(gen_v16 *)&REFG(float, 0x1138af0)), &(auVar121));
            fVar138 = (*(float *)((char *)&auVar121 + 12));
            fVar72 = gen_bits2f((uint)uVar12);
            fVar74 = gen_bits2f((uint)((ulonglong)uVar12 >> 0x20));
            fVar134 = gen_bits2f((uint)uVar13);
            fVar87 = ABS(fVar72);
            fVar91 = ABS(fVar74);
            fVar93 = ABS(fVar134);
            (*(float *)((char *)&auVar82 + 0)) = fVar62 - ((fVar91 + fVar87) + fVar93);
            (*(float *)((char *)&auVar82 + 4)) = fVar75 - ((fVar91 + fVar87) + fVar93);
            (*(float *)((char *)&auVar82 + 8)) = fVar96 - ((fVar91 + fVar87) + fVar93);
            (*(float *)((char *)&auVar82 + 12)) = fVar76 - ((fVar91 + fVar87) + fVar93);
            gen_maxps(&(auVar121), &(*(gen_v16 *)&REFG(undefined8, 0x1138ae0)), &(auVar82));
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2c8)) + 4)) = fVar138;
            gen_minps(&(auVar121), &(*(gen_v16 *)&REFG(float, 0x1138af0)), &(auVar121));
            fVar139 = (*(float *)((char *)&auVar121 + 12));
            gen_piece_set(&auVar123, 0, 12, (unsigned long long)(GEN_PIECE(((undefined1 *)(gen_frame + 0x370)), 0, 12)));
            (*(undefined4 *)((char *)&auVar123 + 12)) = (undefined4)gen_fl2bits(fVar139);
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x320)) + 0)) = gen_bits2f((uint)uVar14);
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x320)) + 4)) = gen_bits2f((uint)((ulonglong)uVar14 >> 0x20));
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x328)) + 0)) = gen_bits2f((uint)uVar15);
            fVar91 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x328)) + 0));
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x328)) + 4)) = gen_bits2f((uint)((ulonglong)uVar15 >> 0x20));
            fVar87 = ABS((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x320)) + 0)));
            fVar93 = ABS((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x320)) + 4)));
            fVar126 = ABS((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x328)) + 0)));
            memcpy(&(*(gen_v16 *)((undefined1 *)(gen_frame + 0x370))), &(auVar123), sizeof(auVar123) < sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x370))) ? sizeof(auVar123) : sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x370))));
            (*(float *)(gen_frame + 0x250)) = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x320)) + 0));
            (*(float *)(gen_frame + 0x254)) = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x320)) + 4));
            (*(float *)(gen_frame + 0x258)) = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x328)) + 0));
            (*(float *)(gen_frame + 0x25c)) = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x328)) + 4));
            (*(float *)((char *)&auVar83 + 0)) = fVar62 - ((fVar93 + fVar87) + fVar126);
            (*(float *)((char *)&auVar83 + 4)) = fVar75 - ((fVar93 + fVar87) + fVar126);
            (*(float *)((char *)&auVar83 + 8)) = fVar96 - ((fVar93 + fVar87) + fVar126);
            (*(float *)((char *)&auVar83 + 12)) = fVar76 - ((fVar93 + fVar87) + fVar126);
            gen_maxps(&(auVar121), &(*(gen_v16 *)&REFG(undefined8, 0x1138ae0)), &(auVar83));
            gen_minps(&(auVar121), &(*(gen_v16 *)&REFG(float, 0x1138af0)), &(auVar121));
            fVar63 = (*(float *)((char *)&auVar121 + 12));
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x330)) + 0)) = gen_bits2f((uint)uVar16);
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x330)) + 4)) = gen_bits2f((uint)((ulonglong)uVar16 >> 0x20));
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x338)) + 0)) = gen_bits2f((uint)uVar17);
            fVar93 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x338)) + 0));
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x338)) + 4)) = gen_bits2f((uint)((ulonglong)uVar17 >> 0x20));
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x328)) + 4)) = fVar63;
            (*(undefined8 *)(gen_frame + 0x328)) = CONCAT44((uint)gen_fl2bits(fVar63),(uint)gen_fl2bits(fVar91));
            fVar87 = ABS((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x330)) + 0)));
            fVar126 = ABS((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x330)) + 4)));
            fVar133 = ABS((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x338)) + 0)));
            (*(float *)((char *)&auVar84 + 0)) = fVar62 - ((fVar126 + fVar87) + fVar133);
            (*(float *)((char *)&auVar84 + 4)) = fVar75 - ((fVar126 + fVar87) + fVar133);
            (*(float *)((char *)&auVar84 + 8)) = fVar96 - ((fVar126 + fVar87) + fVar133);
            (*(float *)((char *)&auVar84 + 12)) = fVar76 - ((fVar126 + fVar87) + fVar133);
            gen_maxps(&(auVar121), &(*(gen_v16 *)&REFG(undefined8, 0x1138ae0)), &(auVar84));
            gen_minps(&(auVar121), &(*(gen_v16 *)&REFG(float, 0x1138af0)), &(auVar121));
            (*(float *)(gen_frame + 0x250)) = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x330)) + 0));
            (*(float *)(gen_frame + 0x254)) = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x330)) + 4));
            (*(float *)(gen_frame + 0x258)) = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x338)) + 0));
            (*(float *)(gen_frame + 0x25c)) = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x338)) + 4));
            fVar73 = (*(float *)((char *)&auVar121 + 12));
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2e0)) + 0)) = gen_bits2f((uint)uVar18);
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2e0)) + 4)) = gen_bits2f((uint)((ulonglong)uVar18 >> 0x20));
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2e8)) + 0)) = gen_bits2f((uint)uVar19);
            fVar87 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2e8)) + 0));
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2e8)) + 4)) = gen_bits2f((uint)((ulonglong)uVar19 >> 0x20));
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x338)) + 4)) = fVar73;
            (*(undefined8 *)(gen_frame + 0x338)) = CONCAT44((uint)gen_fl2bits(fVar73),(uint)gen_fl2bits(fVar93));
            fVar126 = ABS((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2e0)) + 0)));
            fVar133 = ABS((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2e0)) + 4)));
            fVar135 = ABS((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2e8)) + 0)));
            (*(float *)((char *)&auVar85 + 0)) = fVar62 - ((fVar133 + fVar126) + fVar135);
            (*(float *)((char *)&auVar85 + 4)) = fVar75 - ((fVar133 + fVar126) + fVar135);
            (*(float *)((char *)&auVar85 + 8)) = fVar96 - ((fVar133 + fVar126) + fVar135);
            (*(float *)((char *)&auVar85 + 12)) = fVar76 - ((fVar133 + fVar126) + fVar135);
            gen_maxps(&(auVar121), &(*(gen_v16 *)&REFG(undefined8, 0x1138ae0)), &(auVar85));
            gen_minps(&(auVar121), &(*(gen_v16 *)&REFG(float, 0x1138af0)), &(auVar121));
            (*(float *)(gen_frame + 0x250)) = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2e0)) + 0));
            (*(float *)(gen_frame + 0x254)) = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2e0)) + 4));
            (*(float *)(gen_frame + 0x258)) = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2e8)) + 0));
            (*(float *)(gen_frame + 0x25c)) = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2e8)) + 4));
            fVar76 = (*(float *)((char *)&auVar121 + 12));
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2e8)) + 4)) = fVar76;
            (*(undefined8 *)(gen_frame + 0x2e8)) = CONCAT44((uint)gen_fl2bits(fVar76),(uint)gen_fl2bits(fVar87));
            uVar51 = -(uint)((fVar139 * (*(float *)((char *)&auVar114 + 12)) + fVar134 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x358)) + 0))) +
                             (fVar74 * gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x350)) + 4))) +
                             fVar72 * gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x350)) + 0)))) < 0.0);
            uVar59 = -(uint)((fVar63 * fVar136 + fVar91 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x308)) + 0))) +
                             ((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x320)) + 4)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x300)) + 4)) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x320)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x300)) + 0)))
                            < 0.0);
            uVar60 = -(uint)((fVar73 * fVar137 + fVar93 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1d8)) + 0))) +
                             ((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x330)) + 4)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1d0)) + 4)) +
                             (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x330)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1d0)) + 0))) < 0.0);
            uVar61 = -(uint)((fVar76 * fVar138 + fVar87 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2c8)) + 0))) +
                             ((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2e0)) + 4)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2c0)) + 4)) +
                             (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2e0)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2c0)) + 0))) < 0.0);
            uVar51 = ~uVar51 & (uint)gen_fl2bits((*(float *)(gen_frame + 0x180))) | (uint)gen_fl2bits((*(float *)(gen_frame + 0x170))) & uVar51;
            uVar59 = ~uVar59 & (uint)gen_fl2bits((*(float *)(gen_frame + 0x184))) |
                     (uint)gen_fl2bits((*(float *)(gen_frame + 0x174))) & uVar59;
            uVar60 = ~uVar60 & (uint)gen_fl2bits((*(float *)(gen_frame + 0x188))) |
                     (uint)gen_fl2bits((*(float *)(gen_frame + 0x178))) & uVar60;
            uVar61 = ~uVar61 & (uint)gen_fl2bits((*(float *)(gen_frame + 0x18c))) |
                     (uint)gen_fl2bits((*(float *)(gen_frame + 0x17c))) & uVar61;
            uVar78 = uVar60 & *(uint *)&REFG(undefined, 0x1134d28) | uVar51 & *(uint *)&REFG(undefined, 0x1134d20);
            uVar86 = uVar61 & *(uint *)&REFG(undefined, 0x1134d2c) | uVar59 & *(uint *)&REFG(undefined, 0x1134d24);
            uVar95 = uVar51 & *(uint *)&REFG(undefined, 0x1134d20) | uVar60 & *(uint *)&REFG(undefined, 0x1134d28);
            uVar98 = uVar59 & *(uint *)&REFG(undefined, 0x1134d24) | uVar61 & *(uint *)&REFG(undefined, 0x1134d2c);
            fVar62 = gen_bits2f(uVar86 | uVar78) * fVar72 + (*(float *)(gen_frame + 0x2b0)) * gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x350)) + 0)));
            fVar72 = gen_bits2f(uVar78 | uVar86) * fVar74 + (*(float *)(gen_frame + 0x2b4)) * gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x350)) + 4)));
            fVar74 = gen_bits2f(uVar98 | uVar95) * fVar134 + (*(float *)(gen_frame + 0x2b8)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x358)) + 0));
            fVar96 = gen_bits2f(uVar95 | uVar98) * fVar139 + (*(float *)(gen_frame + 0x2bc)) * (*(float *)((char *)&auVar114 + 12));
            fVar126 = fVar74 * fVar74 + fVar62 * fVar62;
            fVar133 = fVar96 * fVar96 + fVar72 * fVar72;
            fVar134 = fVar62 * fVar62 + fVar74 * fVar74;
            fVar135 = fVar72 * fVar72 + fVar96 * fVar96;
            (*(float *)((char *)&auVar114 + 0)) = fVar133 + fVar126;
            (*(float *)((char *)&auVar114 + 4)) = fVar126 + fVar133;
            (*(float *)((char *)&auVar114 + 8)) = fVar135 + fVar134;
            (*(float *)((char *)&auVar114 + 12)) = fVar134 + fVar135;
            gen_rsqrtps(&(auVar121), &(auVar123), &(auVar114));
            fVar126 = (*(float *)((char *)&auVar121 + 0));
            fVar133 = (*(float *)((char *)&auVar121 + 4));
            fVar134 = (*(float *)((char *)&auVar121 + 8));
            fVar135 = (*(float *)((char *)&auVar121 + 12));
            (*(float *)((char *)&auVar115 + 0)) = gen_bits2f(~-(uint)((*(float *)((char *)&auVar114 + 0)) <= 0.0) & (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1137610) - (fVar126 * (*(float *)((char *)&auVar114 + 0))) * fVar126) * (fVar126 * *(float *)&REFG(undefined, 0x1137620)))) * fVar62;
            (*(float *)((char *)&auVar115 + 4)) = gen_bits2f(~-(uint)((*(float *)((char *)&auVar114 + 4)) <= 0.0) & (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1137614) - (fVar133 * (*(float *)((char *)&auVar114 + 4))) * fVar133) * (fVar133 * *(float *)&REFG(undefined, 0x1137624)))) * fVar72;
            (*(float *)((char *)&auVar115 + 8)) = gen_bits2f(~-(uint)((*(float *)((char *)&auVar114 + 8)) <= 0.0) & (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1137618) - (fVar134 * (*(float *)((char *)&auVar114 + 8))) * fVar134) * (fVar134 * *(float *)&REFG(undefined, 0x1137628)))) * fVar74;
            (*(float *)((char *)&auVar115 + 12)) = gen_bits2f(~-(uint)((*(float *)((char *)&auVar114 + 12)) <= 0.0) & (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x113761c) - (fVar135 * (*(float *)((char *)&auVar114 + 12))) * fVar135) * (fVar135 * *(float *)&REFG(undefined, 0x113762c)))) * fVar96;
            uVar78 = uVar60 & *(uint *)&REFG(undefined, 0x1134d38) | uVar51 & *(uint *)&REFG(undefined, 0x1134d30);
            uVar86 = uVar61 & *(uint *)&REFG(undefined, 0x1134d3c) | uVar59 & *(uint *)&REFG(undefined, 0x1134d34);
            uVar95 = uVar51 & *(uint *)&REFG(undefined, 0x1134d30) | uVar60 & *(uint *)&REFG(undefined, 0x1134d38);
            uVar98 = uVar59 & *(uint *)&REFG(undefined, 0x1134d34) | uVar61 & *(uint *)&REFG(undefined, 0x1134d3c);
            fVar96 = gen_bits2f(uVar86 | uVar78) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x320)) + 0)) + (*(float *)(gen_frame + 0x2b0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x300)) + 0));
            fVar126 = gen_bits2f(uVar78 | uVar86) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x320)) + 4)) + (*(float *)(gen_frame + 0x2b4)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x300)) + 4));
            fVar134 = gen_bits2f(uVar98 | uVar95) * fVar91 + (*(float *)(gen_frame + 0x2b8)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x308)) + 0));
            fVar135 = gen_bits2f(uVar95 | uVar98) * fVar63 + (*(float *)(gen_frame + 0x2bc)) * fVar136;
            fVar62 = fVar134 * fVar134 + fVar96 * fVar96;
            fVar72 = fVar135 * fVar135 + fVar126 * fVar126;
            fVar74 = fVar96 * fVar96 + fVar134 * fVar134;
            fVar91 = fVar126 * fVar126 + fVar135 * fVar135;
            (*(float *)((char *)&auVar124 + 0)) = fVar72 + fVar62;
            (*(float *)((char *)&auVar124 + 4)) = fVar62 + fVar72;
            (*(float *)((char *)&auVar124 + 8)) = fVar91 + fVar74;
            (*(float *)((char *)&auVar124 + 12)) = fVar74 + fVar91;
            memcpy(&(*(gen_v16 *)((undefined1 *)(gen_frame + 0x350))), &(auVar115), sizeof(auVar115) < sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x350))) ? sizeof(auVar115) : sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x350))));
            gen_rsqrtps(&(auVar121), &(auVar115), &(auVar124));
            fVar62 = (*(float *)((char *)&auVar121 + 0));
            fVar72 = (*(float *)((char *)&auVar121 + 4));
            fVar74 = (*(float *)((char *)&auVar121 + 8));
            fVar91 = (*(float *)((char *)&auVar121 + 12));
            fVar96 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar124 + 0)) <= 0.0) & (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1137610) - (fVar62 * (*(float *)((char *)&auVar124 + 0))) * fVar62) * (fVar62 * *(float *)&REFG(undefined, 0x1137620)))) * fVar96;
            fVar126 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar124 + 4)) <= 0.0) & (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1137614) - (fVar72 * (*(float *)((char *)&auVar124 + 4))) * fVar72) * (fVar72 * *(float *)&REFG(undefined, 0x1137624)))) * fVar126;
            fVar134 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar124 + 8)) <= 0.0) & (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1137618) - (fVar74 * (*(float *)((char *)&auVar124 + 8))) * fVar74) * (fVar74 * *(float *)&REFG(undefined, 0x1137628)))) * fVar134;
            fVar135 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar124 + 12)) <= 0.0) & (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x113761c) - (fVar91 * (*(float *)((char *)&auVar124 + 12))) * fVar91) * (fVar91 * *(float *)&REFG(undefined, 0x113762c)))) * fVar135;
            uVar78 = uVar60 & *(uint *)&REFG(undefined, 0x1134d48) | uVar51 & *(uint *)&REFG(undefined, 0x1134d40);
            uVar86 = uVar61 & *(uint *)&REFG(undefined, 0x1134d4c) | uVar59 & *(uint *)&REFG(undefined, 0x1134d44);
            uVar95 = uVar51 & *(uint *)&REFG(undefined, 0x1134d40) | uVar60 & *(uint *)&REFG(undefined, 0x1134d48);
            uVar98 = uVar59 & *(uint *)&REFG(undefined, 0x1134d44) | uVar61 & *(uint *)&REFG(undefined, 0x1134d4c);
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x300)) + 0)) = fVar96;
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x300)) + 4)) = fVar126;
            (*(undefined8 *)(gen_frame + 0x300)) = CONCAT44((uint)gen_fl2bits(fVar126),(uint)gen_fl2bits(fVar96));
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x308)) + 0)) = fVar134;
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x308)) + 4)) = fVar135;
            (*(undefined8 *)(gen_frame + 0x308)) = CONCAT44((uint)gen_fl2bits(fVar135),(uint)gen_fl2bits(fVar134));
            fVar91 = gen_bits2f(uVar86 | uVar78) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x330)) + 0)) + (*(float *)(gen_frame + 0x2b0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1d0)) + 0));
            fVar133 = gen_bits2f(uVar78 | uVar86) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x330)) + 4)) + (*(float *)(gen_frame + 0x2b4)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1d0)) + 4));
            fVar93 = gen_bits2f(uVar98 | uVar95) * fVar93 + (*(float *)(gen_frame + 0x2b8)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1d8)) + 0));
            fVar136 = gen_bits2f(uVar95 | uVar98) * fVar73 + (*(float *)(gen_frame + 0x2bc)) * fVar137;
            (*(float *)((char *)&auVar116 + 0)) = fVar91 * fVar91;
            (*(float *)((char *)&auVar116 + 4)) = fVar133 * fVar133;
            (*(float *)((char *)&auVar116 + 8)) = fVar93 * fVar93;
            (*(float *)((char *)&auVar116 + 12)) = fVar136 * fVar136;
            (*(float *)((char *)&auVar131 + 0)) =
                 ((*(float *)((char *)&auVar116 + 12)) + (*(float *)((char *)&auVar116 + 4))) + ((*(float *)((char *)&auVar116 + 8)) + (*(float *)((char *)&auVar116 + 0)));
            (*(float *)((char *)&auVar131 + 4)) =
                 ((*(float *)((char *)&auVar116 + 8)) + (*(float *)((char *)&auVar116 + 0))) + ((*(float *)((char *)&auVar116 + 12)) + (*(float *)((char *)&auVar116 + 4)));
            (*(float *)((char *)&auVar131 + 8)) =
                 ((*(float *)((char *)&auVar116 + 4)) + (*(float *)((char *)&auVar116 + 12))) + ((*(float *)((char *)&auVar116 + 0)) + (*(float *)((char *)&auVar116 + 8)));
            (*(float *)((char *)&auVar131 + 12)) =
                 ((*(float *)((char *)&auVar116 + 0)) + (*(float *)((char *)&auVar116 + 8))) + ((*(float *)((char *)&auVar116 + 4)) + (*(float *)((char *)&auVar116 + 12)));
            gen_rsqrtps(&(auVar121), &(auVar116), &(auVar131));
            fVar62 = (*(float *)((char *)&auVar121 + 0));
            fVar72 = (*(float *)((char *)&auVar121 + 4));
            fVar74 = (*(float *)((char *)&auVar121 + 8));
            fVar137 = (*(float *)((char *)&auVar121 + 12));
            fVar91 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar131 + 0)) <= 0.0) & (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1137610) - (fVar62 * (*(float *)((char *)&auVar131 + 0))) * fVar62) * (fVar62 * *(float *)&REFG(undefined, 0x1137620)))) * fVar91;
            fVar133 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar131 + 4)) <= 0.0) & (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1137614) - (fVar72 * (*(float *)((char *)&auVar131 + 4))) * fVar72) * (fVar72 * *(float *)&REFG(undefined, 0x1137624)))) * fVar133;
            fVar93 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar131 + 8)) <= 0.0) & (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1137618) - (fVar74 * (*(float *)((char *)&auVar131 + 8))) * fVar74) * (fVar74 * *(float *)&REFG(undefined, 0x1137628)))) * fVar93;
            fVar136 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar131 + 12)) <= 0.0) & (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x113761c) - (fVar137 * (*(float *)((char *)&auVar131 + 12))) * fVar137) * (fVar137 * *(float *)&REFG(undefined, 0x113762c)))) * fVar136;
            uVar78 = uVar60 & *(uint *)&REFG(undefined, 0x1134d58) | uVar51 & *(uint *)&REFG(undefined, 0x1134d50);
            uVar86 = uVar61 & *(uint *)&REFG(undefined, 0x1134d5c) | uVar59 & *(uint *)&REFG(undefined, 0x1134d54);
            uVar51 = uVar51 & *(uint *)&REFG(undefined, 0x1134d50) | uVar60 & *(uint *)&REFG(undefined, 0x1134d58);
            uVar59 = uVar59 & *(uint *)&REFG(undefined, 0x1134d54) | uVar61 & *(uint *)&REFG(undefined, 0x1134d5c);
            fVar62 = gen_bits2f(uVar86 | uVar78) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2e0)) + 0)) + (*(float *)(gen_frame + 0x2b0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2c0)) + 0));
            fVar72 = gen_bits2f(uVar78 | uVar86) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2e0)) + 4)) + (*(float *)(gen_frame + 0x2b4)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2c0)) + 4));
            fVar74 = gen_bits2f(uVar59 | uVar51) * fVar87 + (*(float *)(gen_frame + 0x2b8)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2c8)) + 0));
            fVar76 = gen_bits2f(uVar51 | uVar59) * fVar76 + (*(float *)(gen_frame + 0x2bc)) * fVar138;
            (*(float *)((char *)&auVar117 + 0)) = fVar62 * fVar62;
            (*(float *)((char *)&auVar117 + 4)) = fVar72 * fVar72;
            (*(float *)((char *)&auVar117 + 8)) = fVar74 * fVar74;
            (*(float *)((char *)&auVar117 + 12)) = fVar76 * fVar76;
            (*(float *)((char *)&auVar132 + 0)) =
                 ((*(float *)((char *)&auVar117 + 12)) + (*(float *)((char *)&auVar117 + 4))) + ((*(float *)((char *)&auVar117 + 8)) + (*(float *)((char *)&auVar117 + 0)));
            (*(float *)((char *)&auVar132 + 4)) =
                 ((*(float *)((char *)&auVar117 + 8)) + (*(float *)((char *)&auVar117 + 0))) + ((*(float *)((char *)&auVar117 + 12)) + (*(float *)((char *)&auVar117 + 4)));
            (*(float *)((char *)&auVar132 + 8)) =
                 ((*(float *)((char *)&auVar117 + 4)) + (*(float *)((char *)&auVar117 + 12))) + ((*(float *)((char *)&auVar117 + 0)) + (*(float *)((char *)&auVar117 + 8)));
            (*(float *)((char *)&auVar132 + 12)) =
                 ((*(float *)((char *)&auVar117 + 0)) + (*(float *)((char *)&auVar117 + 8))) + ((*(float *)((char *)&auVar117 + 4)) + (*(float *)((char *)&auVar117 + 12)));
            gen_rsqrtps(&(auVar121), &(auVar117), &(auVar132));
            fVar87 = (*(float *)((char *)&auVar121 + 0));
            fVar137 = (*(float *)((char *)&auVar121 + 4));
            fVar138 = (*(float *)((char *)&auVar121 + 8));
            fVar139 = (*(float *)((char *)&auVar121 + 12));
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1d0)) + 0)) = fVar91;
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1d0)) + 4)) = fVar133;
            (*(undefined8 *)(gen_frame + 0x1d0)) = CONCAT44((uint)gen_fl2bits(fVar133),(uint)gen_fl2bits(fVar91));
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1d8)) + 0)) = fVar93;
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1d8)) + 4)) = fVar136;
            (*(undefined8 *)(gen_frame + 0x1d8)) = CONCAT44((uint)gen_fl2bits(fVar136),(uint)gen_fl2bits(fVar93));
            fVar62 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar132 + 0)) <= 0.0) & (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1137610) - (fVar87 * (*(float *)((char *)&auVar132 + 0))) * fVar87) * (fVar87 * *(float *)&REFG(undefined, 0x1137620)))) * fVar62;
            fVar72 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar132 + 4)) <= 0.0) & (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1137614) - (fVar137 * (*(float *)((char *)&auVar132 + 4))) * fVar137) * (fVar137 * *(float *)&REFG(undefined, 0x1137624)))) * fVar72;
            fVar74 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar132 + 8)) <= 0.0) & (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1137618) - (fVar138 * (*(float *)((char *)&auVar132 + 8))) * fVar138) * (fVar138 * *(float *)&REFG(undefined, 0x1137628)))) * fVar74;
            fVar76 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar132 + 12)) <= 0.0) & (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x113761c) - (fVar139 * (*(float *)((char *)&auVar132 + 12))) * fVar139) * (fVar139 * *(float *)&REFG(undefined, 0x113762c)))) * fVar76;
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2c0)) + 0)) = fVar62;
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2c0)) + 4)) = fVar72;
            (*(undefined8 *)(gen_frame + 0x2c0)) = CONCAT44((uint)gen_fl2bits(fVar72),(uint)gen_fl2bits(fVar62));
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2c8)) + 0)) = fVar74;
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2c8)) + 4)) = fVar76;
            (*(undefined8 *)(gen_frame + 0x2c8)) = CONCAT44((uint)gen_fl2bits(fVar76),(uint)gen_fl2bits(fVar74));
            pfVar45 = ((float *)GEN_TOP((param_9 + 0x10 + uVar52 * 0x30)));
            *pfVar45 = (*(float *)((char *)&auVar115 + 0));
            pfVar45[1] = (*(float *)((char *)&auVar115 + 4));
            pfVar45[2] = (*(float *)((char *)&auVar115 + 8));
            pfVar45[3] = (*(float *)((char *)&auVar115 + 12));
            pfVar45 = ((float *)GEN_TOP((param_9 + 0x10 + uVar48 * 0x30)));
            *pfVar45 = fVar96;
            pfVar45[1] = fVar126;
            pfVar45[2] = fVar134;
            pfVar45[3] = fVar135;
            pfVar45 = ((float *)GEN_TOP((param_9 + 0x10 + uVar53 * 0x30)));
            *pfVar45 = fVar91;
            pfVar45[1] = fVar133;
            pfVar45[2] = fVar93;
            pfVar45[3] = fVar136;
            iVar41 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x3a0)) + 4;
            puVar57 = (*(ushort * PTR32 *)(gen_frame + 0x348)) + 4;
            pfVar45 = ((float *)GEN_TOP((param_9 + 0x10 + uVar55 * 0x30)));
            *pfVar45 = fVar62;
            pfVar45[1] = fVar72;
            pfVar45[2] = fVar74;
            pfVar45[3] = fVar76;
            uVar20 = (*(ushort * PTR32 *)(gen_frame + 0x348))[5];
            (*(undefined4 * PTR32 *)(gen_frame + 0x3a0)) = ((undefined4 *)GEN_TOP(iVar41));
            (*(ushort * PTR32 *)(gen_frame + 0x348)) = puVar57;
            uVar51 = (*(uint *)(gen_frame + 0x38c));
          } while (iVar41 < (int)pfVar43);
        }
        uVar20 = (*(ushort * PTR32 *)(gen_frame + 0x3b4))[(int)(*(undefined4 * PTR32 *)(gen_frame + 0x3a0))];
        memcpy(&(auVar121), &(*(gen_v16 *)((undefined1 *)(gen_frame + 0x350))), sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x350))) < sizeof(auVar121) ? sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x350))) : sizeof(auVar121));
        memcpy(&(auVar102), &(*(gen_v16 *)((undefined1 *)(gen_frame + 0x370))), sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x370))) < sizeof(auVar102) ? sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x370))) : sizeof(auVar102));
        puVar47 = (*(undefined4 * PTR32 *)(gen_frame + 0x3a0));
        while( true ) {
          uVar55 = (uint)uVar20;
          fVar74 = (float)REFG(float, 0x1138af0);
          fVar62 = (*(float *)((char *)&REFG(float, 0x1138af0) + 4));
          fVar76 = (*(float *)((char *)&REFG(float, 0x1138af0) + 8));
          fVar72 = (*(float *)((char *)&REFG(float, 0x1138af0) + 12));
          memcpy(&(*(gen_v16 *)((undefined1 *)(gen_frame + 0x350))), &(auVar121), sizeof(auVar121) < sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x350))) ? sizeof(auVar121) : sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x350))));
          memcpy(&(*(gen_v16 *)((undefined1 *)(gen_frame + 0x370))), &(auVar102), sizeof(auVar102) < sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x370))) ? sizeof(auVar102) : sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x370))));
          if (iVar54 - 9 <= (int)puVar47) break;
          if ((*(int *)(gen_frame + 0x398)) <= (int)uVar55) goto LAB_00d71234;
          uVar22 = *((undefined8 *)GEN_TOP((uVar51 + 0x10 + uVar55 * 0x30)));
          *(undefined8 *)((undefined1 *)(gen_frame + 0x350)) = uVar22;
          uVar7 = *((undefined8 *)GEN_TOP((uVar51 + 0x18 + uVar55 * 0x30)));
          (*(undefined8 *)(gen_frame + 0x358)) = uVar7;
          uVar8 = *(undefined8 *)((*(undefined4 * PTR32 *)(gen_frame + 0x3cc)) + uVar55 * 0xc + 4);
          (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x350)) + 0)) = (undefined4)uVar22;
          (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x350)) + 4)) = (undefined4)((ulonglong)uVar22 >> 0x20);
          (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x358)) + 0)) = gen_bits2f((uint)uVar7);
          *(undefined8 *)((undefined1 *)(gen_frame + 0x370)) = uVar8;
          (*(undefined8 *)(gen_frame + 0x378)) = *(undefined8 *)((*(undefined4 * PTR32 *)(gen_frame + 0x3cc)) + uVar55 * 0xc + 6);
          fVar87 = ABS(gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x350)) + 0))));
          fVar91 = ABS(gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x350)) + 4))));
          fVar93 = ABS((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x358)) + 0)));
          (*(float *)((char *)&auVar68 + 0)) = fVar74 - ((fVar91 + fVar87) + fVar93);
          (*(float *)((char *)&auVar68 + 4)) = fVar62 - ((fVar91 + fVar87) + fVar93);
          (*(float *)((char *)&auVar68 + 8)) = fVar76 - ((fVar91 + fVar87) + fVar93);
          (*(float *)((char *)&auVar68 + 12)) = fVar72 - ((fVar91 + fVar87) + fVar93);
          gen_maxps(&(auVar121), &(*(gen_v16 *)&REFG(undefined8, 0x1138ae0)), &(auVar68));
          gen_minps(&(auVar121), &(*(gen_v16 *)&REFG(float, 0x1138af0)), &(auVar121));
          { unsigned int gen_ac = (unsigned int)(SUB84(uVar8,0)); memcpy(((undefined1 *)(gen_frame + 0x370)), &gen_ac, 4); }
          { unsigned int gen_ac = (unsigned int)((*(unsigned int *)((undefined1 *)(gen_frame + 0x370)))); memcpy(auVar38, &gen_ac, 4); }
          (*(float *)(gen_frame + 0x374)) = gen_bits2f((uint)((ulonglong)uVar8 >> 0x20));
          fVar87 = (*(float *)(gen_frame + 0x374));
          (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x378)) + 0)) = gen_bits2f((uint)*(undefined8 *)((*(undefined4 * PTR32 *)(gen_frame + 0x3cc)) + uVar55 * 0xc + 6));
          fVar91 = ABS(gen_bits2f(((undefined1 *)(gen_frame + 0x370))));
          fVar93 = ABS((*(float *)(gen_frame + 0x374)));
          fVar96 = ABS((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x378)) + 0)));
          (*(float *)((char *)&auVar69 + 0)) = fVar74 - ((fVar93 + fVar91) + fVar96);
          (*(float *)((char *)&auVar69 + 4)) = fVar62 - ((fVar93 + fVar91) + fVar96);
          (*(float *)((char *)&auVar69 + 8)) = fVar76 - ((fVar93 + fVar91) + fVar96);
          (*(float *)((char *)&auVar69 + 12)) = fVar72 - ((fVar93 + fVar91) + fVar96);
          gen_maxps(&(auVar102), &(*(gen_v16 *)&REFG(undefined8, 0x1138ae0)), &(auVar69));
          gen_minps(&(auVar102), &(*(gen_v16 *)&REFG(float, 0x1138af0)), &(auVar102));
          fVar72 = (*(float *)((char *)&auVar102 + 12));
          fVar62 = ((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x378)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x358)) + 0)) +
                   gen_bits2f(((undefined1 *)(gen_frame + 0x370))) * gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x350)) + 0)))) +
                   (fVar72 * (*(float *)((char *)&auVar121 + 12)) + (*(float *)(gen_frame + 0x374)) * gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x350)) + 4))));
          unsigned char gen_vx0[64];
          gen_vcat(gen_vx0, (&(unsigned long long){(unsigned long long)((uint)gen_fl2bits((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x378)) + 0))))}), 4, (&(unsigned long long){(unsigned long long)(*(undefined8 *)((undefined1 *)(gen_frame + 0x370)))}), 8);
          gen_vset((*(gen_v12 *)((undefined1 *)(gen_frame + 0x370))), 12, gen_vx0, 12);
          (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x378)) + 4)) = fVar72;
          (*(float *)(gen_frame + 0x124)) = fVar62;
          if (fVar62 < 0.0) {
            (*(float *)(gen_frame + 0x10)) = 0.0 - (*(float *)(gen_frame + 0x1a0));
            (*(float *)(gen_frame + 0x14)) = 0.0 - (*(float *)(gen_frame + 0x1a4));
            (*(float *)(gen_frame + 0x18)) = 0.0 - (*(float *)(gen_frame + 0x1a8));
            (*(float *)(gen_frame + 0x1c)) = 0.0 - (*(float *)(gen_frame + 0x1ac));
            pfVar43 = &(*(float *)(gen_frame + 0x10));
          }
          else {
            pfVar43 = &(*(float *)(gen_frame + 0x1a0));
          }
          uVar22 = *(undefined8 *)pfVar43;
          (*(undefined8 *)(gen_frame + 0x2e0)) = uVar22;
          uVar22 = (*(undefined8 *)(gen_frame + 0x2e0));
          uVar7 = *(undefined8 *)(pfVar43 + 2);
          (*(undefined8 *)(gen_frame + 0x2e8)) = uVar7;
          uVar7 = (*(undefined8 *)(gen_frame + 0x2e8));
          (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2e0)) + 0)) = gen_bits2f((uint)uVar22);
          (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2e0)) + 4)) = gen_bits2f((uint)((ulonglong)uVar22 >> 0x20));
          (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2e8)) + 0)) = gen_bits2f((uint)uVar7);
          (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2e8)) + 4)) = gen_bits2f((uint)((ulonglong)uVar7 >> 0x20));
          fVar91 = gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x350)) + 0))) * (*(float *)(gen_frame + 0x2b0)) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2e0)) + 0)) * gen_bits2f(auVar38);
          fVar87 = gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x350)) + 4))) * (*(float *)(gen_frame + 0x2b4)) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2e0)) + 4)) * fVar87;
          fVar93 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x358)) + 0)) * (*(float *)(gen_frame + 0x2b8)) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2e8)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x378)) + 0));
          fVar96 = (*(float *)((char *)&auVar121 + 12)) * (*(float *)(gen_frame + 0x2bc)) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2e8)) + 4)) * fVar72;
          fVar62 = fVar93 * fVar93 + fVar91 * fVar91;
          fVar72 = fVar96 * fVar96 + fVar87 * fVar87;
          fVar74 = fVar91 * fVar91 + fVar93 * fVar93;
          fVar76 = fVar87 * fVar87 + fVar96 * fVar96;
          (*(float *)((char *)&auVar89 + 0)) = fVar72 + fVar62;
          (*(float *)((char *)&auVar89 + 4)) = fVar62 + fVar72;
          (*(float *)((char *)&auVar89 + 8)) = fVar76 + fVar74;
          (*(float *)((char *)&auVar89 + 12)) = fVar74 + fVar76;
          memset(&auVar104, 0, 12);
          (*(undefined4 *)((char *)&auVar104 + 12)) = 0;
          gen_rsqrtps(&(auVar121), &(auVar104), &(auVar89));
          fVar76 = (*(float *)((char *)&auVar121 + 0));
          fVar126 = (*(float *)((char *)&auVar121 + 4));
          fVar133 = (*(float *)((char *)&auVar121 + 8));
          fVar134 = (*(float *)((char *)&auVar121 + 12));
          fVar62 = *(float *)&REFG(undefined, 0x1137614) - (fVar126 * (*(float *)((char *)&auVar89 + 4))) * fVar126;
          fVar72 = *(float *)&REFG(undefined, 0x1137618) - (fVar133 * (*(float *)((char *)&auVar89 + 8))) * fVar133;
          fVar74 = *(float *)&REFG(undefined, 0x113761c) - (fVar134 * (*(float *)((char *)&auVar89 + 12))) * fVar134;
          fVar126 = *(float *)&REFG(undefined, 0x1137624) * fVar126;
          fVar133 = *(float *)&REFG(undefined, 0x1137628) * fVar133;
          fVar134 = *(float *)&REFG(undefined, 0x113762c) * fVar134;
          (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x350)) + 0)) = (undefined4)gen_fl2bits(fVar91);
          (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x350)) + 4)) = (undefined4)gen_fl2bits(fVar87);
          (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x358)) + 0)) = fVar93;
          (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x358)) + 4)) = fVar96;
          pfVar43 = ((float *)GEN_TOP((param_9 + 0x10 + uVar55 * 0x30)));
          *pfVar43 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar89 + 0)) <= 0.0) & (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1137610) - (fVar76 * (*(float *)((char *)&auVar89 + 0))) * fVar76) * (*(float *)&REFG(undefined, 0x1137620) * fVar76))) * fVar91;
          pfVar43[1] = gen_bits2f(~-(uint)((*(float *)((char *)&auVar89 + 4)) <= 0.0) & (uint)gen_fl2bits(fVar62 * fVar126)) * fVar87;
          pfVar43[2] = gen_bits2f(~-(uint)((*(float *)((char *)&auVar89 + 8)) <= 0.0) & (uint)gen_fl2bits(fVar72 * fVar133)) * fVar93;
          pfVar43[3] = gen_bits2f(~-(uint)((*(float *)((char *)&auVar89 + 12)) <= 0.0) & (uint)gen_fl2bits(fVar74 * fVar134)) * fVar96;
          uVar20 = (*(ushort * PTR32 *)(gen_frame + 0x3b4))[(int)puVar47 + 1];
          puVar47 = ((undefined4 *)GEN_TOP(((int)puVar47 + 1)));
          (*(undefined8 *)(gen_frame + 0x2e0)) = uVar22;
          (*(undefined8 *)(gen_frame + 0x2e8)) = uVar7;
          memcpy(&(auVar121), &(*(gen_v16 *)((undefined1 *)(gen_frame + 0x350))), sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x350))) < sizeof(auVar121) ? sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x350))) : sizeof(auVar121));
          memcpy(&(auVar102), &(*(gen_v16 *)((undefined1 *)(gen_frame + 0x370))), sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x370))) < sizeof(auVar102) ? sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x370))) : sizeof(auVar102));
        }
        if ((int)uVar55 < (*(int *)(gen_frame + 0x398))) {
          uVar22 = *((undefined8 *)GEN_TOP((uVar51 + 0x10 + uVar55 * 0x30)));
          *(undefined8 *)((undefined1 *)(gen_frame + 0x370)) = uVar22;
          uVar7 = *((undefined8 *)GEN_TOP((uVar51 + 0x18 + uVar55 * 0x30)));
          (*(undefined8 *)(gen_frame + 0x378)) = uVar7;
          uVar8 = *(undefined8 *)((*(undefined4 * PTR32 *)(gen_frame + 0x3cc)) + uVar55 * 0xc + 4);
          { unsigned int gen_ac = (unsigned int)(SUB84(uVar22,0)); memcpy(((undefined1 *)(gen_frame + 0x370)), &gen_ac, 4); }
          (*(float *)(gen_frame + 0x374)) = gen_bits2f((uint)((ulonglong)uVar22 >> 0x20));
          (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x378)) + 0)) = gen_bits2f((uint)uVar7);
          *(undefined8 *)((undefined1 *)(gen_frame + 0x350)) = uVar8;
          uVar22 = *(undefined8 *)((*(undefined4 * PTR32 *)(gen_frame + 0x3cc)) + uVar55 * 0xc + 6);
          (*(undefined8 *)(gen_frame + 0x358)) = uVar22;
          memcpy(&(auVar121), &(*(gen_v16 *)((undefined1 *)(gen_frame + 0x350))), sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x350))) < sizeof(auVar121) ? sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x350))) : sizeof(auVar121));
          fVar87 = ABS(gen_bits2f(((undefined1 *)(gen_frame + 0x370))));
          fVar91 = ABS((*(float *)(gen_frame + 0x374)));
          fVar93 = ABS((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x378)) + 0)));
          (*(float *)((char *)&auVar70 + 0)) = fVar74 - ((fVar91 + fVar87) + fVar93);
          (*(float *)((char *)&auVar70 + 4)) = fVar62 - ((fVar91 + fVar87) + fVar93);
          (*(float *)((char *)&auVar70 + 8)) = fVar76 - ((fVar91 + fVar87) + fVar93);
          (*(float *)((char *)&auVar70 + 12)) = fVar72 - ((fVar91 + fVar87) + fVar93);
          gen_maxps(&(auVar102), &(*(gen_v16 *)&REFG(undefined8, 0x1138ae0)), &(auVar70));
          gen_minps(&(auVar102), &(*(gen_v16 *)&REFG(float, 0x1138af0)), &(auVar102));
          (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x350)) + 0)) = (undefined4)uVar8;
          (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x350)) + 4)) = (undefined4)((ulonglong)uVar8 >> 0x20);
          (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x358)) + 0)) = gen_bits2f((uint)uVar22);
          fVar87 = ABS(gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x350)) + 0))));
          fVar91 = ABS(gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x350)) + 4))));
          fVar93 = ABS((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x358)) + 0)));
          (*(float *)((char *)&auVar71 + 0)) = fVar74 - ((fVar91 + fVar87) + fVar93);
          (*(float *)((char *)&auVar71 + 4)) = fVar62 - ((fVar91 + fVar87) + fVar93);
          (*(float *)((char *)&auVar71 + 8)) = fVar76 - ((fVar91 + fVar87) + fVar93);
          (*(float *)((char *)&auVar71 + 12)) = fVar72 - ((fVar91 + fVar87) + fVar93);
          gen_maxps(&(auVar125), &(*(gen_v16 *)&REFG(undefined8, 0x1138ae0)), &(auVar71));
          gen_minps(&(auVar125), &(*(gen_v16 *)&REFG(float, 0x1138af0)), &(auVar125));
          fVar62 = ((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x358)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x378)) + 0)) +
                   gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x350)) + 0))) * gen_bits2f(((undefined1 *)(gen_frame + 0x370)))) +
                   ((*(float *)((char *)&auVar125 + 12)) * (*(float *)((char *)&auVar102 + 12)) + gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x350)) + 4))) * (*(float *)(gen_frame + 0x374)));
          (*(float *)(gen_frame + 0x12c)) = fVar62;
          if (fVar62 < 0.0) {
            (*(float *)(gen_frame + 0x0)) = 0.0 - (*(float *)(gen_frame + 0x1a0));
            (*(float *)(gen_frame + 0x4)) = 0.0 - (*(float *)(gen_frame + 0x1a4));
            (*(float *)(gen_frame + 0x8)) = 0.0 - (*(float *)(gen_frame + 0x1a8));
            (*(float *)(gen_frame + 0xc)) = 0.0 - (*(float *)(gen_frame + 0x1ac));
            pauVar49 = (gen_v16 *)&(*(float *)(gen_frame + 0x0));
          }
          else {
            pauVar49 = (gen_v16 *)&(*(float *)(gen_frame + 0x1a0));
          }
          uVar22 = *((undefined8 *)GEN_TOP(*pauVar49));
          fVar62 = gen_bits2f(((undefined1 *)(gen_frame + 0x370))) * (*(float *)(gen_frame + 0x2b0));
          fVar72 = (*(float *)(gen_frame + 0x374)) * (*(float *)(gen_frame + 0x2b4));
          fVar74 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x378)) + 0)) * (*(float *)(gen_frame + 0x2b8));
          *(undefined8 *)((undefined1 *)(gen_frame + 0x370)) = uVar22;
          uVar7 = *((undefined8 *)GEN_TOP((*pauVar49 + 8)));
          memcpy(&(auVar82), &(*pauVar49), sizeof(*pauVar49) < sizeof(auVar82) ? sizeof(*pauVar49) : sizeof(auVar82));
          (*(undefined8 *)(gen_frame + 0x378)) = uVar7;
          { unsigned int gen_ac = (unsigned int)(SUB84(uVar22,0)); memcpy(((undefined1 *)(gen_frame + 0x370)), &gen_ac, 4); }
          (*(float *)(gen_frame + 0x374)) = gen_bits2f((uint)((ulonglong)uVar22 >> 0x20));
          (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x378)) + 0)) = gen_bits2f((uint)uVar7);
          (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x378)) + 4)) = gen_bits2f((uint)((ulonglong)uVar7 >> 0x20));
          fVar62 = gen_bits2f(((undefined1 *)(gen_frame + 0x370))) * gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x350)) + 0))) + fVar62;
          fVar72 = (*(float *)(gen_frame + 0x374)) * gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x350)) + 4))) + fVar72;
          fVar74 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x378)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x358)) + 0)) + fVar74;
          fVar76 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x378)) + 4)) * (*(float *)((char *)&auVar125 + 12)) + (*(float *)((char *)&auVar102 + 12)) * (*(float *)(gen_frame + 0x2bc));
          fVar87 = fVar74 * fVar74 + fVar62 * fVar62;
          fVar91 = fVar76 * fVar76 + fVar72 * fVar72;
          fVar93 = fVar62 * fVar62 + fVar74 * fVar74;
          fVar96 = fVar72 * fVar72 + fVar76 * fVar76;
          (*(float *)((char *)&auVar90 + 0)) = fVar91 + fVar87;
          (*(float *)((char *)&auVar90 + 4)) = fVar87 + fVar91;
          (*(float *)((char *)&auVar90 + 8)) = fVar96 + fVar93;
          (*(float *)((char *)&auVar90 + 12)) = fVar93 + fVar96;
          memset(&auVar105, 0, 12);
          (*(undefined4 *)((char *)&auVar105 + 12)) = 0;
          gen_rsqrtps(&(auVar102), &(auVar105), &(auVar90));
          fVar96 = (*(float *)((char *)&auVar102 + 0));
          fVar126 = (*(float *)((char *)&auVar102 + 4));
          fVar133 = (*(float *)((char *)&auVar102 + 8));
          fVar134 = (*(float *)((char *)&auVar102 + 12));
          fVar87 = *(float *)&REFG(undefined, 0x1137614) - (fVar126 * (*(float *)((char *)&auVar90 + 4))) * fVar126;
          fVar91 = *(float *)&REFG(undefined, 0x1137618) - (fVar133 * (*(float *)((char *)&auVar90 + 8))) * fVar133;
          fVar93 = *(float *)&REFG(undefined, 0x113761c) - (fVar134 * (*(float *)((char *)&auVar90 + 12))) * fVar134;
          fVar126 = *(float *)&REFG(undefined, 0x1137624) * fVar126;
          fVar133 = *(float *)&REFG(undefined, 0x1137628) * fVar133;
          fVar134 = *(float *)&REFG(undefined, 0x113762c) * fVar134;
          pfVar43 = ((float *)GEN_TOP((param_9 + 0x10 + uVar55 * 0x30)));
          *pfVar43 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar90 + 0)) <= 0.0) & (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1137610) - (fVar96 * (*(float *)((char *)&auVar90 + 0))) * fVar96) * (*(float *)&REFG(undefined, 0x1137620) * fVar96))) * fVar62;
          pfVar43[1] = gen_bits2f(~-(uint)((*(float *)((char *)&auVar90 + 4)) <= 0.0) & (uint)gen_fl2bits(fVar87 * fVar126)) * fVar72;
          pfVar43[2] = gen_bits2f(~-(uint)((*(float *)((char *)&auVar90 + 8)) <= 0.0) & (uint)gen_fl2bits(fVar91 * fVar133)) * fVar74;
          pfVar43[3] = gen_bits2f(~-(uint)((*(float *)((char *)&auVar90 + 12)) <= 0.0) & (uint)gen_fl2bits(fVar93 * fVar134)) * fVar76;
          memcpy(&(*(gen_v16 *)((undefined1 *)(gen_frame + 0x350))), &(auVar121), sizeof(auVar121) < sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x350))) ? sizeof(auVar121) : sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x350))));
          memcpy(&(*(gen_v16 *)((undefined1 *)(gen_frame + 0x370))), &(auVar82), sizeof(auVar82) < sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x370))) ? sizeof(auVar82) : sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x370))));
        }
      }
      else {
        (*(float * PTR32 *)(gen_frame + 0x2d8)) = pfVar43;
        if (0 < (int)pfVar43) {
          (*(undefined4 * PTR32 *)(gen_frame + 0x394)) = ((undefined4 *)GEN_TOP((uint)(*(ushort * PTR32 *)(gen_frame + 0x3b4))[3]));
          puVar58 = (*(ushort * PTR32 *)(gen_frame + 0x3b4)) + 2;
          do {
            puVar57 = (*(ushort * PTR32 *)(gen_frame + 0x3c4));
            if ((*(int *)(gen_frame + 0x398)) <= (int)(*(undefined4 * PTR32 *)(gen_frame + 0x394))) break;
            uVar55 = (uint)puVar58[-2];
            (*(float * PTR32 *)(gen_frame + 0x3b0)) = ((float *)GEN_TOP((uint)puVar58[-1]));
            uVar52 = (uint)*puVar58;
            (*(float * PTR32 *)(gen_frame + 0x34c)) = ((float *)GEN_TOP(uVar52));
            pfVar45 = ((float *)GEN_TOP((param_9 + 0x10 + (uint)puVar58[-1] * 0x30)));
            uVar22 = *((undefined8 *)GEN_TOP((param_9 + 0x10 + uVar55 * 0x30)));
            (*(undefined8 *)(gen_frame + 0x320)) = uVar22;
            uVar7 = *((undefined8 *)GEN_TOP((param_9 + 0x18 + uVar55 * 0x30)));
            (*(undefined8 *)(gen_frame + 0x328)) = uVar7;
            uVar8 = *(undefined8 *)pfVar45;
            (*(undefined8 *)(gen_frame + 0x2c0)) = uVar8;
            (*(undefined8 *)(gen_frame + 0x2c8)) = *(undefined8 *)(pfVar45 + 2);
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x320)) + 0)) = gen_bits2f((uint)uVar22);
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x320)) + 4)) = gen_bits2f((uint)((ulonglong)uVar22 >> 0x20));
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x328)) + 0)) = gen_bits2f((uint)uVar7);
            pfVar50 = ((float *)GEN_TOP((param_9 + 0x10 + uVar55 * 0x30)));
            (*(float * PTR32 *)(gen_frame + 0x3b0)) = pfVar45;
            uVar22 = *((undefined8 *)GEN_TOP((param_9 + 0x10 + uVar52 * 0x30)));
            (*(undefined8 *)(gen_frame + 0x330)) = uVar22;
            uVar7 = *((undefined8 *)GEN_TOP((param_9 + 0x18 + uVar52 * 0x30)));
            pfVar4 = ((float *)GEN_TOP((param_9 + 0x10 + uVar52 * 0x30)));
            (*(undefined8 *)(gen_frame + 0x338)) = uVar7;
            (*(float * PTR32 *)(gen_frame + 0x34c)) = pfVar4;
            uVar9 = *((undefined8 *)GEN_TOP((param_9 + 0x10 + (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x394))) * 0x30)));
            (*(undefined8 *)(gen_frame + 0x300)) = uVar9;
            uVar10 = *((undefined8 *)GEN_TOP((param_9 + 0x18 + (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x394))) * 0x30)));
            (*(undefined8 *)(gen_frame + 0x308)) = uVar10;
            pfVar5 = ((float *)GEN_TOP((param_9 + 0x10 + (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x394))) * 0x30)));
            fVar76 = ABS((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x320)) + 0)));
            fVar87 = ABS((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x320)) + 4)));
            fVar91 = ABS((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x328)) + 0)));
            fVar62 = (float)REFG(float, 0x1138af0);
            fVar72 = (*(float *)((char *)&REFG(float, 0x1138af0) + 4));
            fVar74 = (*(float *)((char *)&REFG(float, 0x1138af0) + 12));
            fVar135 = (*(float *)((char *)&REFG(float, 0x1138af0) + 8));
            (*(float *)((char *)&auVar64 + 0)) = fVar62 - ((fVar87 + fVar76) + fVar91);
            (*(float *)((char *)&auVar64 + 4)) = fVar72 - ((fVar87 + fVar76) + fVar91);
            (*(float *)((char *)&auVar64 + 8)) = fVar135 - ((fVar87 + fVar76) + fVar91);
            (*(float *)((char *)&auVar64 + 12)) = fVar74 - ((fVar87 + fVar76) + fVar91);
            gen_maxps(&(auVar121), &(*(gen_v16 *)&REFG(undefined8, 0x1138ae0)), &(auVar64));
            gen_minps(&(auVar121), &(*(gen_v16 *)&REFG(float, 0x1138af0)), &(auVar121));
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2c0)) + 0)) = gen_bits2f((uint)uVar8);
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2c0)) + 4)) = gen_bits2f((uint)((ulonglong)uVar8 >> 0x20));
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2c8)) + 0)) = gen_bits2f((uint)*(undefined8 *)(pfVar45 + 2));
            fVar133 = (*(float *)((char *)&auVar121 + 12));
            fVar76 = ABS((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2c0)) + 0)));
            fVar87 = ABS((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2c0)) + 4)));
            fVar91 = ABS((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2c8)) + 0)));
            (*(float *)((char *)&auVar65 + 0)) = fVar62 - ((fVar87 + fVar76) + fVar91);
            (*(float *)((char *)&auVar65 + 4)) = fVar72 - ((fVar87 + fVar76) + fVar91);
            (*(float *)((char *)&auVar65 + 8)) = fVar135 - ((fVar87 + fVar76) + fVar91);
            (*(float *)((char *)&auVar65 + 12)) = fVar74 - ((fVar87 + fVar76) + fVar91);
            gen_maxps(&(auVar121), &(*(gen_v16 *)&REFG(undefined8, 0x1138ae0)), &(auVar65));
            gen_minps(&(auVar121), &(*(gen_v16 *)&REFG(float, 0x1138af0)), &(auVar121));
            fVar134 = (*(float *)((char *)&auVar121 + 12));
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x330)) + 0)) = gen_bits2f((uint)uVar22);
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x330)) + 4)) = gen_bits2f((uint)((ulonglong)uVar22 >> 0x20));
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x338)) + 0)) = gen_bits2f((uint)uVar7);
            fVar76 = ABS((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x330)) + 0)));
            fVar87 = ABS((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x330)) + 4)));
            fVar91 = ABS((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x338)) + 0)));
            (*(float *)((char *)&auVar66 + 0)) = fVar62 - ((fVar87 + fVar76) + fVar91);
            (*(float *)((char *)&auVar66 + 4)) = fVar72 - ((fVar87 + fVar76) + fVar91);
            (*(float *)((char *)&auVar66 + 8)) = fVar135 - ((fVar87 + fVar76) + fVar91);
            (*(float *)((char *)&auVar66 + 12)) = fVar74 - ((fVar87 + fVar76) + fVar91);
            gen_maxps(&(auVar121), &(*(gen_v16 *)&REFG(undefined8, 0x1138ae0)), &(auVar66));
            gen_minps(&(auVar121), &(*(gen_v16 *)&REFG(float, 0x1138af0)), &(auVar121));
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x300)) + 0)) = gen_bits2f((uint)uVar9);
            fVar76 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x300)) + 0));
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x300)) + 4)) = gen_bits2f((uint)((ulonglong)uVar9 >> 0x20));
            fVar87 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x300)) + 4));
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x308)) + 0)) = gen_bits2f((uint)uVar10);
            fVar91 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x308)) + 0));
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x308)) + 4)) = gen_bits2f((uint)((ulonglong)uVar10 >> 0x20));
            fVar63 = (*(float *)((char *)&auVar121 + 12));
            fVar93 = ABS((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x300)) + 0)));
            fVar96 = ABS((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x300)) + 4)));
            fVar126 = ABS((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x308)) + 0)));
            *(undefined4 *)((undefined1 *)(gen_frame + 0x370)) = gen_fl2bits((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x300)) + 0)));
            (*(float *)(gen_frame + 0x374)) = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x300)) + 4));
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x378)) + 0)) = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x308)) + 0));
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x378)) + 4)) = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x308)) + 4));
            (*(float *)((char *)&auVar127 + 0)) = (fVar96 + fVar93) + fVar126;
            (*(float *)((char *)&auVar127 + 4)) = (fVar96 + fVar93) + fVar126;
            (*(float *)((char *)&auVar127 + 8)) = (fVar96 + fVar93) + fVar126;
            (*(float *)((char *)&auVar127 + 12)) = (fVar96 + fVar93) + fVar126;
            (*(float *)((char *)&auVar67 + 0)) = fVar62 - (*(float *)((char *)&auVar127 + 0));
            (*(float *)((char *)&auVar67 + 4)) = fVar72 - (*(float *)((char *)&auVar127 + 4));
            (*(float *)((char *)&auVar67 + 8)) = fVar135 - (*(float *)((char *)&auVar127 + 8));
            (*(float *)((char *)&auVar67 + 12)) = fVar74 - (*(float *)((char *)&auVar127 + 12));
            gen_maxps(&(auVar121), &(*(gen_v16 *)&REFG(undefined8, 0x1138ae0)), &(auVar67));
            gen_minps(&(auVar121), &(*(gen_v16 *)&REFG(float, 0x1138af0)), &(auVar121));
            fVar96 = (*(float *)((char *)&auVar121 + 12));
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x308)) + 4)) = fVar96;
            fVar62 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x328)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x328)) + 0)) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x320)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x320)) + 0));
            fVar72 = fVar133 * fVar133 + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x320)) + 4)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x320)) + 4));
            fVar74 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x320)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x320)) + 0)) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x328)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x328)) + 0));
            fVar93 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x320)) + 4)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x320)) + 4)) + fVar133 * fVar133;
            (*(float *)((char *)&auVar79 + 0)) = fVar72 + fVar62;
            (*(float *)((char *)&auVar79 + 4)) = fVar62 + fVar72;
            (*(float *)((char *)&auVar79 + 8)) = fVar93 + fVar74;
            (*(float *)((char *)&auVar79 + 12)) = fVar74 + fVar93;
            gen_rsqrtps(&(auVar121), &(auVar127), &(auVar79));
            fVar62 = (*(float *)((char *)&auVar121 + 0));
            fVar72 = (*(float *)((char *)&auVar121 + 4));
            fVar74 = (*(float *)((char *)&auVar121 + 8));
            fVar93 = (*(float *)((char *)&auVar121 + 12));
            *(undefined4 *)((undefined1 *)(gen_frame + 0x370)) = 0x0;
            (*(float *)(gen_frame + 0x374)) = 0.0;
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x378)) + 0)) = 0.0;
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x378)) + 4)) = 0.0;
            (*(float *)((char *)&auVar128 + 0)) = fVar62 * *(float *)&REFG(undefined, 0x1137620);
            (*(float *)((char *)&auVar128 + 4)) = fVar72 * *(float *)&REFG(undefined, 0x1137624);
            (*(float *)((char *)&auVar128 + 8)) = fVar74 * *(float *)&REFG(undefined, 0x1137628);
            (*(float *)((char *)&auVar128 + 12)) = fVar93 * *(float *)&REFG(undefined, 0x113762c);
            fVar126 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar79 + 0)) <= 0.0) & (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1137610) - (fVar62 * (*(float *)((char *)&auVar79 + 0))) * fVar62) * (*(float *)((char *)&auVar128 + 0)))) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x320)) + 0));
            fVar135 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar79 + 4)) <= 0.0) & (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1137614) - (fVar72 * (*(float *)((char *)&auVar79 + 4))) * fVar72) * (*(float *)((char *)&auVar128 + 4)))) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x320)) + 4));
            fVar137 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar79 + 8)) <= 0.0) & (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1137618) - (fVar74 * (*(float *)((char *)&auVar79 + 8))) * fVar74) * (*(float *)((char *)&auVar128 + 8)))) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x328)) + 0));
            fVar133 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar79 + 12)) <= 0.0) & (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x113761c) - (fVar93 * (*(float *)((char *)&auVar79 + 12))) * fVar93) * (*(float *)((char *)&auVar128 + 12)))) * fVar133;
            fVar62 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2c8)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2c8)) + 0)) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2c0)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2c0)) + 0));
            fVar72 = fVar134 * fVar134 + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2c0)) + 4)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2c0)) + 4));
            fVar74 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2c0)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2c0)) + 0)) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2c8)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2c8)) + 0));
            fVar93 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2c0)) + 4)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2c0)) + 4)) + fVar134 * fVar134;
            (*(float *)((char *)&auVar100 + 0)) = fVar72 + fVar62;
            (*(float *)((char *)&auVar100 + 4)) = fVar62 + fVar72;
            (*(float *)((char *)&auVar100 + 8)) = fVar93 + fVar74;
            (*(float *)((char *)&auVar100 + 12)) = fVar74 + fVar93;
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x320)) + 0)) = fVar126;
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x320)) + 4)) = fVar135;
            (*(undefined8 *)(gen_frame + 0x320)) = CONCAT44((uint)gen_fl2bits(fVar135),(uint)gen_fl2bits(fVar126));
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x328)) + 0)) = fVar137;
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x328)) + 4)) = fVar133;
            (*(undefined8 *)(gen_frame + 0x328)) = CONCAT44((uint)gen_fl2bits(fVar133),(uint)gen_fl2bits(fVar137));
            gen_rsqrtps(&(auVar121), &(auVar128), &(auVar100));
            fVar136 = (*(float *)((char *)&auVar121 + 0));
            fVar138 = (*(float *)((char *)&auVar121 + 4));
            fVar139 = (*(float *)((char *)&auVar121 + 8));
            fVar73 = (*(float *)((char *)&auVar121 + 12));
            fVar62 = (fVar136 * (*(float *)((char *)&auVar100 + 0))) * fVar136;
            fVar72 = (fVar138 * (*(float *)((char *)&auVar100 + 4))) * fVar138;
            fVar74 = (fVar139 * (*(float *)((char *)&auVar100 + 8))) * fVar139;
            fVar93 = (fVar73 * (*(float *)((char *)&auVar100 + 12))) * fVar73;
            (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x350)) + 0)) = (undefined4)gen_fl2bits(fVar62);
            (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x350)) + 4)) = (undefined4)gen_fl2bits(fVar72);
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x358)) + 0)) = fVar74;
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x358)) + 4)) = fVar93;
            (*(float *)((char *)&auVar129 + 0)) = fVar136 * *(float *)&REFG(undefined, 0x1137620);
            (*(float *)((char *)&auVar129 + 4)) = fVar138 * *(float *)&REFG(undefined, 0x1137624);
            (*(float *)((char *)&auVar129 + 8)) = fVar139 * *(float *)&REFG(undefined, 0x1137628);
            (*(float *)((char *)&auVar129 + 12)) = fVar73 * *(float *)&REFG(undefined, 0x113762c);
            fVar62 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar100 + 0)) <= 0.0) & (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1137610) - fVar62) * (*(float *)((char *)&auVar129 + 0)))) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2c0)) + 0));
            fVar72 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar100 + 4)) <= 0.0) & (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1137614) - fVar72) * (*(float *)((char *)&auVar129 + 4)))) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2c0)) + 4));
            fVar74 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar100 + 8)) <= 0.0) & (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1137618) - fVar74) * (*(float *)((char *)&auVar129 + 8)))) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2c8)) + 0));
            fVar134 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar100 + 12)) <= 0.0) & (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x113761c) - fVar93) * (*(float *)((char *)&auVar129 + 12)))) * fVar134;
            fVar93 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x338)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x338)) + 0)) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x330)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x330)) + 0));
            fVar136 = fVar63 * fVar63 + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x330)) + 4)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x330)) + 4));
            fVar138 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x330)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x330)) + 0)) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x338)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x338)) + 0));
            fVar139 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x330)) + 4)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x330)) + 4)) + fVar63 * fVar63;
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2c0)) + 0)) = fVar62;
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2c0)) + 4)) = fVar72;
            (*(undefined8 *)(gen_frame + 0x2c0)) = CONCAT44((uint)gen_fl2bits(fVar72),(uint)gen_fl2bits(fVar62));
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2c8)) + 0)) = fVar74;
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2c8)) + 4)) = fVar134;
            (*(undefined8 *)(gen_frame + 0x2c8)) = CONCAT44((uint)gen_fl2bits(fVar134),(uint)gen_fl2bits(fVar74));
            (*(float *)((char *)&auVar110 + 0)) = fVar136 + fVar93;
            (*(float *)((char *)&auVar110 + 4)) = fVar93 + fVar136;
            (*(float *)((char *)&auVar110 + 8)) = fVar139 + fVar138;
            (*(float *)((char *)&auVar110 + 12)) = fVar138 + fVar139;
            gen_rsqrtps(&(auVar121), &(auVar129), &(auVar110));
            fVar73 = (*(float *)((char *)&auVar121 + 0));
            fVar75 = (*(float *)((char *)&auVar121 + 4));
            fVar77 = (*(float *)((char *)&auVar121 + 8));
            fVar88 = (*(float *)((char *)&auVar121 + 12));
            fVar93 = (fVar73 * (*(float *)((char *)&auVar110 + 0))) * fVar73;
            fVar136 = (fVar75 * (*(float *)((char *)&auVar110 + 4))) * fVar75;
            fVar138 = (fVar77 * (*(float *)((char *)&auVar110 + 8))) * fVar77;
            fVar139 = (fVar88 * (*(float *)((char *)&auVar110 + 12))) * fVar88;
            *(undefined4 *)((undefined1 *)(gen_frame + 0x370)) = gen_fl2bits(fVar93);
            (*(float *)(gen_frame + 0x374)) = fVar136;
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x378)) + 0)) = fVar138;
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x378)) + 4)) = fVar139;
            (*(float *)((char *)&auVar130 + 0)) = fVar73 * *(float *)&REFG(undefined, 0x1137620);
            (*(float *)((char *)&auVar130 + 4)) = fVar75 * *(float *)&REFG(undefined, 0x1137624);
            (*(float *)((char *)&auVar130 + 8)) = fVar77 * *(float *)&REFG(undefined, 0x1137628);
            (*(float *)((char *)&auVar130 + 12)) = fVar88 * *(float *)&REFG(undefined, 0x113762c);
            fVar93 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar110 + 0)) <= 0.0) & (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1137610) - fVar93) * (*(float *)((char *)&auVar130 + 0)))) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x330)) + 0));
            fVar136 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar110 + 4)) <= 0.0) & (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1137614) - fVar136) * (*(float *)((char *)&auVar130 + 4)))) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x330)) + 4));
            fVar138 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar110 + 8)) <= 0.0) & (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1137618) - fVar138) * (*(float *)((char *)&auVar130 + 8)))) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x338)) + 0));
            fVar63 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar110 + 12)) <= 0.0) & (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x113761c) - fVar139) * (*(float *)((char *)&auVar130 + 12)))) * fVar63;
            fVar139 = fVar91 * fVar91 + fVar76 * fVar76;
            fVar73 = fVar96 * fVar96 + fVar87 * fVar87;
            fVar75 = fVar76 * fVar76 + fVar91 * fVar91;
            fVar77 = fVar87 * fVar87 + fVar96 * fVar96;
            (*(float *)((char *)&auVar122 + 0)) = fVar73 + fVar139;
            (*(float *)((char *)&auVar122 + 4)) = fVar139 + fVar73;
            (*(float *)((char *)&auVar122 + 8)) = fVar77 + fVar75;
            (*(float *)((char *)&auVar122 + 12)) = fVar75 + fVar77;
            gen_rsqrtps(&(auVar121), &(auVar130), &(auVar122));
            fVar139 = (*(float *)((char *)&auVar121 + 0));
            fVar73 = (*(float *)((char *)&auVar121 + 4));
            fVar75 = (*(float *)((char *)&auVar121 + 8));
            fVar77 = (*(float *)((char *)&auVar121 + 12));
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x330)) + 0)) = fVar93;
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x330)) + 4)) = fVar136;
            (*(undefined8 *)(gen_frame + 0x330)) = CONCAT44((uint)gen_fl2bits(fVar136),(uint)gen_fl2bits(fVar93));
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x338)) + 0)) = fVar138;
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x338)) + 4)) = fVar63;
            (*(undefined8 *)(gen_frame + 0x338)) = CONCAT44((uint)gen_fl2bits(fVar63),(uint)gen_fl2bits(fVar138));
            fVar76 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar122 + 0)) <= 0.0) & (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1137610) - (fVar139 * (*(float *)((char *)&auVar122 + 0))) * fVar139) * (fVar139 * *(float *)&REFG(undefined, 0x1137620)))) * fVar76;
            fVar87 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar122 + 4)) <= 0.0) & (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1137614) - (fVar73 * (*(float *)((char *)&auVar122 + 4))) * fVar73) * (fVar73 * *(float *)&REFG(undefined, 0x1137624)))) * fVar87;
            fVar91 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar122 + 8)) <= 0.0) & (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1137618) - (fVar75 * (*(float *)((char *)&auVar122 + 8))) * fVar75) * (fVar75 * *(float *)&REFG(undefined, 0x1137628)))) * fVar91;
            fVar96 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar122 + 12)) <= 0.0) & (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x113761c) - (fVar77 * (*(float *)((char *)&auVar122 + 12))) * fVar77) * (fVar77 * *(float *)&REFG(undefined, 0x113762c)))) * fVar96;
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x300)) + 0)) = fVar76;
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x300)) + 4)) = fVar87;
            (*(undefined8 *)(gen_frame + 0x300)) = CONCAT44((uint)gen_fl2bits(fVar87),(uint)gen_fl2bits(fVar76));
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x308)) + 0)) = fVar91;
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x308)) + 4)) = fVar96;
            (*(undefined8 *)(gen_frame + 0x308)) = CONCAT44((uint)gen_fl2bits(fVar96),(uint)gen_fl2bits(fVar91));
            *pfVar50 = fVar126;
            pfVar50[1] = fVar135;
            pfVar50[2] = fVar137;
            pfVar50[3] = fVar133;
            *pfVar45 = fVar62;
            pfVar45[1] = fVar72;
            pfVar45[2] = fVar74;
            pfVar45[3] = fVar134;
            *pfVar4 = fVar93;
            pfVar4[1] = fVar136;
            pfVar4[2] = fVar138;
            pfVar4[3] = fVar63;
            *pfVar5 = fVar76;
            pfVar5[1] = fVar87;
            pfVar5[2] = fVar91;
            pfVar5[3] = fVar96;
            iVar54 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x3a0)) + 4;
            (*(undefined4 * PTR32 *)(gen_frame + 0x3a0)) = ((undefined4 *)GEN_TOP(iVar54));
            (*(undefined4 * PTR32 *)(gen_frame + 0x394)) = ((undefined4 *)GEN_TOP((uint)puVar58[5]));
            puVar58 = puVar58 + 4;
          } while (iVar54 < (int)pfVar43);
        }
        uVar20 = (*(ushort * PTR32 *)(gen_frame + 0x3b4))[(int)(*(undefined4 * PTR32 *)(gen_frame + 0x3a0))];
        memcpy(&(auVar121), &(*(gen_v16 *)((undefined1 *)(gen_frame + 0x350))), sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x350))) < sizeof(auVar121) ? sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x350))) : sizeof(auVar121));
        puVar47 = (*(undefined4 * PTR32 *)(gen_frame + 0x3a0));
        while( true ) {
          uVar55 = (uint)uVar20;
          memcpy(&(*(gen_v16 *)((undefined1 *)(gen_frame + 0x350))), &(auVar121), sizeof(auVar121) < sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x350))) ? sizeof(auVar121) : sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x350))));
          if ((int)puVar57 - 1 <= (int)puVar47) break;
          if ((*(int *)(gen_frame + 0x398)) <= (int)uVar55) goto LAB_00d71234;
          uVar22 = *((undefined8 *)GEN_TOP((param_9 + 0x10 + uVar55 * 0x30)));
          *(undefined8 *)((undefined1 *)(gen_frame + 0x350)) = uVar22;
          uVar7 = *((undefined8 *)GEN_TOP((param_9 + 0x18 + uVar55 * 0x30)));
          (*(undefined8 *)(gen_frame + 0x358)) = uVar7;
          (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x350)) + 0)) = (undefined4)uVar22;
          uVar6 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x350)) + 0));
          (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x350)) + 4)) = (undefined4)((ulonglong)uVar22 >> 0x20);
          uVar27 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x350)) + 4));
          (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x358)) + 0)) = gen_bits2f((uint)uVar7);
          pfVar43 = ((float *)GEN_TOP((param_9 + 0x10 + uVar55 * 0x30)));
          fVar62 = ABS(gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x350)) + 0))));
          fVar72 = ABS(gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x350)) + 4))));
          fVar74 = ABS((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x358)) + 0)));
          (*(float *)((char *)&auVar111 + 0)) = (float)REFG(float, 0x1138af0) - ((fVar72 + fVar62) + fVar74);
          (*(float *)((char *)&auVar111 + 4)) = (*(float *)((char *)&REFG(float, 0x1138af0) + 4)) - ((fVar72 + fVar62) + fVar74);
          (*(float *)((char *)&auVar111 + 8)) = (*(float *)((char *)&REFG(float, 0x1138af0) + 8)) - ((fVar72 + fVar62) + fVar74);
          (*(float *)((char *)&auVar111 + 12)) = (*(float *)((char *)&REFG(float, 0x1138af0) + 12)) - ((fVar72 + fVar62) + fVar74);
          gen_maxps(&(auVar121), &(*(gen_v16 *)&REFG(undefined8, 0x1138ae0)), &(auVar111));
          gen_minps(&(auVar121), &(*(gen_v16 *)&REFG(float, 0x1138af0)), &(auVar121));
          fVar76 = (*(float *)((char *)&auVar121 + 12));
          fVar62 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x358)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x358)) + 0)) +
                   gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x350)) + 0))) * gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x350)) + 0)));
          fVar72 = fVar76 * fVar76 + gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x350)) + 4))) * gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x350)) + 4)));
          fVar74 = gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x350)) + 0))) * gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x350)) + 0))) +
                   (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x358)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x358)) + 0));
          fVar87 = gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x350)) + 4))) * gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x350)) + 4))) + fVar76 * fVar76;
          (*(float *)((char *)&auVar80 + 0)) = fVar72 + fVar62;
          (*(float *)((char *)&auVar80 + 4)) = fVar62 + fVar72;
          (*(float *)((char *)&auVar80 + 8)) = fVar87 + fVar74;
          (*(float *)((char *)&auVar80 + 12)) = fVar74 + fVar87;
          memset(&auVar101, 0, 12);
          (*(undefined4 *)((char *)&auVar101 + 12)) = 0;
          gen_rsqrtps(&(auVar121), &(auVar101), &(auVar80));
          fVar87 = (*(float *)((char *)&auVar121 + 0));
          fVar91 = (*(float *)((char *)&auVar121 + 4));
          fVar93 = (*(float *)((char *)&auVar121 + 8));
          fVar96 = (*(float *)((char *)&auVar121 + 12));
          fVar62 = *(float *)&REFG(undefined, 0x1137614) - (fVar91 * (*(float *)((char *)&auVar80 + 4))) * fVar91;
          fVar72 = *(float *)&REFG(undefined, 0x1137618) - (fVar93 * (*(float *)((char *)&auVar80 + 8))) * fVar93;
          fVar74 = *(float *)&REFG(undefined, 0x113761c) - (fVar96 * (*(float *)((char *)&auVar80 + 12))) * fVar96;
          fVar91 = *(float *)&REFG(undefined, 0x1137624) * fVar91;
          fVar93 = *(float *)&REFG(undefined, 0x1137628) * fVar93;
          fVar96 = *(float *)&REFG(undefined, 0x113762c) * fVar96;
          unsigned char gen_vx1[64];
          gen_vcat(gen_vx1, (&(unsigned long long){(unsigned long long)((uint)gen_fl2bits((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x358)) + 0))))}), 4, (&(unsigned long long){(unsigned long long)(((undefined1 *)(gen_frame + 0x350)))}), 8);
          gen_vset((*(gen_v12 *)((undefined1 *)(gen_frame + 0x350))), 12, gen_vx1, 12);
          (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x358)) + 4)) = fVar76;
          *pfVar43 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar80 + 0)) <= 0.0) & (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1137610) - (fVar87 * (*(float *)((char *)&auVar80 + 0))) * fVar87) * (*(float *)&REFG(undefined, 0x1137620) * fVar87))) * gen_bits2f(uVar6);
          pfVar43[1] = gen_bits2f(~-(uint)((*(float *)((char *)&auVar80 + 4)) <= 0.0) & (uint)gen_fl2bits(fVar62 * fVar91)) * gen_bits2f(uVar27);
          pfVar43[2] = gen_bits2f(~-(uint)((*(float *)((char *)&auVar80 + 8)) <= 0.0) & (uint)gen_fl2bits(fVar72 * fVar93)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x358)) + 0));
          pfVar43[3] = gen_bits2f(~-(uint)((*(float *)((char *)&auVar80 + 12)) <= 0.0) & (uint)gen_fl2bits(fVar74 * fVar96)) * fVar76;
          uVar20 = (*(ushort * PTR32 *)(gen_frame + 0x3b4))[(int)puVar47 + 1];
          puVar47 = ((undefined4 *)GEN_TOP(((int)puVar47 + 1)));
          memcpy(&(auVar121), &(*(gen_v16 *)((undefined1 *)(gen_frame + 0x350))), sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x350))) < sizeof(auVar121) ? sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x350))) : sizeof(auVar121));
        }
        if ((int)uVar55 < (*(int *)(gen_frame + 0x398))) {
          uVar22 = *((undefined8 *)GEN_TOP((param_9 + 0x10 + uVar55 * 0x30)));
          *(undefined8 *)((undefined1 *)(gen_frame + 0x370)) = uVar22;
          uVar7 = *((undefined8 *)GEN_TOP((param_9 + 0x18 + uVar55 * 0x30)));
          (*(undefined8 *)(gen_frame + 0x378)) = uVar7;
          memcpy(&(auVar121), &(*(gen_v16 *)((undefined1 *)(gen_frame + 0x370))), sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x370))) < sizeof(auVar121) ? sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x370))) : sizeof(auVar121));
          { unsigned int gen_ac = (unsigned int)(SUB84(uVar22,0)); memcpy(((undefined1 *)(gen_frame + 0x370)), &gen_ac, 4); }
          (*(float *)(gen_frame + 0x374)) = gen_bits2f((uint)((ulonglong)uVar22 >> 0x20));
          (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x378)) + 0)) = gen_bits2f((uint)uVar7);
          pfVar43 = ((float *)GEN_TOP((param_9 + 0x10 + uVar55 * 0x30)));
          fVar62 = ABS(gen_bits2f(((undefined1 *)(gen_frame + 0x370))));
          fVar72 = ABS((*(float *)(gen_frame + 0x374)));
          fVar74 = ABS((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x378)) + 0)));
          (*(float *)((char *)&auVar112 + 0)) = (float)REFG(float, 0x1138af0) - ((fVar72 + fVar62) + fVar74);
          (*(float *)((char *)&auVar112 + 4)) = (*(float *)((char *)&REFG(float, 0x1138af0) + 4)) - ((fVar72 + fVar62) + fVar74);
          (*(float *)((char *)&auVar112 + 8)) = (*(float *)((char *)&REFG(float, 0x1138af0) + 8)) - ((fVar72 + fVar62) + fVar74);
          (*(float *)((char *)&auVar112 + 12)) = (*(float *)((char *)&REFG(float, 0x1138af0) + 12)) - ((fVar72 + fVar62) + fVar74);
          gen_maxps(&(auVar102), &(*(gen_v16 *)&REFG(undefined8, 0x1138ae0)), &(auVar112));
          gen_minps(&(auVar102), &(*(gen_v16 *)&REFG(float, 0x1138af0)), &(auVar102));
          fVar76 = (*(float *)((char *)&auVar102 + 12));
          fVar62 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x378)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x378)) + 0)) + gen_bits2f(((undefined1 *)(gen_frame + 0x370))) * gen_bits2f(((undefined1 *)(gen_frame + 0x370)))
          ;
          fVar72 = fVar76 * fVar76 + (*(float *)(gen_frame + 0x374)) * (*(float *)(gen_frame + 0x374));
          fVar74 = gen_bits2f(((undefined1 *)(gen_frame + 0x370))) * gen_bits2f(((undefined1 *)(gen_frame + 0x370))) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x378)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x378)) + 0))
          ;
          fVar87 = (*(float *)(gen_frame + 0x374)) * (*(float *)(gen_frame + 0x374)) + fVar76 * fVar76;
          (*(float *)((char *)&auVar81 + 0)) = fVar72 + fVar62;
          (*(float *)((char *)&auVar81 + 4)) = fVar62 + fVar72;
          (*(float *)((char *)&auVar81 + 8)) = fVar87 + fVar74;
          (*(float *)((char *)&auVar81 + 12)) = fVar74 + fVar87;
          memset(&auVar103, 0, 12);
          (*(undefined4 *)((char *)&auVar103 + 12)) = 0;
          gen_rsqrtps(&(auVar102), &(auVar103), &(auVar81));
          fVar87 = (*(float *)((char *)&auVar102 + 0));
          fVar91 = (*(float *)((char *)&auVar102 + 4));
          fVar93 = (*(float *)((char *)&auVar102 + 8));
          fVar96 = (*(float *)((char *)&auVar102 + 12));
          fVar62 = *(float *)&REFG(undefined, 0x1137614) - (fVar91 * (*(float *)((char *)&auVar81 + 4))) * fVar91;
          fVar72 = *(float *)&REFG(undefined, 0x1137618) - (fVar93 * (*(float *)((char *)&auVar81 + 8))) * fVar93;
          fVar74 = *(float *)&REFG(undefined, 0x113761c) - (fVar96 * (*(float *)((char *)&auVar81 + 12))) * fVar96;
          fVar91 = *(float *)&REFG(undefined, 0x1137624) * fVar91;
          fVar93 = *(float *)&REFG(undefined, 0x1137628) * fVar93;
          fVar96 = *(float *)&REFG(undefined, 0x113762c) * fVar96;
          *pfVar43 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar81 + 0)) <= 0.0) & (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1137610) - (fVar87 * (*(float *)((char *)&auVar81 + 0))) * fVar87) * (*(float *)&REFG(undefined, 0x1137620) * fVar87))) * gen_bits2f(((undefined1 *)(gen_frame + 0x370)));
          pfVar43[1] = gen_bits2f(~-(uint)((*(float *)((char *)&auVar81 + 4)) <= 0.0) & (uint)gen_fl2bits(fVar62 * fVar91)) * (*(float *)(gen_frame + 0x374));
          pfVar43[2] = gen_bits2f(~-(uint)((*(float *)((char *)&auVar81 + 8)) <= 0.0) & (uint)gen_fl2bits(fVar72 * fVar93)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x378)) + 0));
          pfVar43[3] = gen_bits2f(~-(uint)((*(float *)((char *)&auVar81 + 12)) <= 0.0) & (uint)gen_fl2bits(fVar74 * fVar96)) * fVar76;
          memcpy(&(*(gen_v16 *)((undefined1 *)(gen_frame + 0x370))), &(auVar121), sizeof(auVar121) < sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x370))) ? sizeof(auVar121) : sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x370))));
        }
      }
    }
LAB_00d71234: ;
    pvVar39 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar55 = (int)(*(ushort * PTR32 *)(gen_frame + 0x39c)) + 0xfU & 0xfffffff0;
    if (((*((int *)GEN_TOP(((int)pvVar39 + 8))) < (int)(*(ushort * PTR32 *)(gen_frame + 0x39c))) ||
        (uVar55 + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x3cc)) != *((int *)GEN_TOP(((int)pvVar39 + 0xc))))) ||
       (*((undefined4 * PTR32 *)GEN_TOP(((int)pvVar39 + 0x14))) == (*(undefined4 * PTR32 *)(gen_frame + 0x3cc)))) {
      F_00d945c0(pvVar39 GEN_EDX_ARG,(*(undefined4 * PTR32 *)(gen_frame + 0x3cc)),uVar55);
    }
    else {
      *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar39 + 0xc))) = (*(undefined4 * PTR32 *)(gen_frame + 0x3cc));
    }
    pvVar39 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    if (((*((int *)GEN_TOP(((int)pvVar39 + 8))) < (int)(*(ushort * PTR32 *)(gen_frame + 0x39c))) ||
        (uVar55 + uVar51 != *((int *)GEN_TOP(((int)pvVar39 + 0xc))))) ||
       (*((uint *)GEN_TOP(((int)pvVar39 + 0x14))) == uVar51)) {
      F_00d945c0(pvVar39 GEN_EDX_ARG,uVar51,uVar55);
    }
    else {
      *((uint *)GEN_TOP(((int)pvVar39 + 0xc))) = uVar51;
    }
  }
  pvVar39 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar47 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar39 + 4)));
  if (puVar47 < *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar39 + 0xc)))) {
    *puVar47 = ((char *)REFP(0x113769c));
    uVar22 = rdtsc();
    (*(undefined4 *)(gen_frame + 0x284)) = (int)uVar22;
    puVar47[1] = (int)uVar22;
    *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar39 + 4))) = puVar47 + 3;
  }
  uVar51 = 0;
  if (3 < (int)param_8) {
    iVar54 = ((uint)(param_8 - 1) >> 2) + 1;
    uVar51 = iVar54 * 4;
    (*(ushort * PTR32 *)(gen_frame + 0x39c)) = ((ushort *)GEN_TOP(uVar51));
    puVar47 = ((undefined4 *)GEN_TOP((param_10 + 4)));
    puVar42 = ((undefined4 *)GEN_TOP((param_6 + 0xc)));
    do {
      puVar47[-1] = puVar42[-3];
      iVar54 = iVar54 - 1;
      *puVar47 = *((undefined4 *)GEN_TOP(((param_6 - param_10) - 0x10 + (int)(puVar47 + 4))));
      puVar47[1] = puVar42[-1];
      puVar47[2] = *puVar42;
      puVar47 = puVar47 + 4;
      puVar42 = puVar42 + 4;
    } while (iVar54 != 0);
  }
  if ((int)uVar51 < (int)param_8) {
    iVar54 = (int)param_8 - uVar51;
    puVar47 = ((undefined4 *)GEN_TOP((param_10 + uVar51 * 4)));
    do {
      iVar54 = iVar54 - 1;
      *puVar47 = *((undefined4 *)GEN_TOP(((int)puVar47 + (param_6 - param_10))));
      puVar47 = puVar47 + 1;
    } while (iVar54 != 0);
  }
  pvVar39 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar57 = (*(ushort * PTR32 *)(gen_frame + 0x390));
  puVar47 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar39 + 4)));
  if (puVar47 < *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar39 + 0xc)))) {
    *puVar47 = ((char *)REFP(0x1137688));
    uVar22 = rdtsc();
    (*(undefined4 *)(gen_frame + 0x27c)) = (int)uVar22;
    puVar47[1] = (int)uVar22;
    *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar39 + 4))) = puVar47 + 3;
  }
  piVar1 = ((int *)GEN_TOP(((int)(*(ushort * PTR32 *)(gen_frame + 0x390)) + 0x34)));
  piVar2 = ((int *)GEN_TOP(((int)(*(ushort * PTR32 *)(gen_frame + 0x390)) + 0x5c)));
  (*(ushort * PTR32 *)(gen_frame + 0x390)) = ((ushort *)GEN_TOP((*piVar1 + *((int *)GEN_TOP(((int)(*(ushort * PTR32 *)(gen_frame + 0x390)) + 0x54))) * 2)));
  iVar54 = *((int *)GEN_TOP(((int)puVar57 + 0x60))) - *piVar2;
  puVar58 = ((ushort *)GEN_TOP((*piVar1 + *piVar2 * 2)));
  (*(ushort * PTR32 *)(gen_frame + 0x39c)) = puVar58;
  if (0 < iVar54) {
    uVar51 = (uint)*puVar58;
    pfVar43 = ((float *)GEN_TOP((iVar54 - 1)));
    iVar54 = 0;
    (*(float * PTR32 *)(gen_frame + 0x3b0)) = pfVar43;
    if (0 < (int)pfVar43) {
      do {
        if ((int)param_8 <= (int)uVar51) goto LAB_00d713dd;
        iVar54 = iVar54 + 1;
        *((undefined4 *)GEN_TOP((param_10 + uVar51 * 4))) = *(undefined4 *)(*(ushort * PTR32 *)(gen_frame + 0x3a8));
        (*(ushort * PTR32 *)(gen_frame + 0x3a8)) = ((ushort *)GEN_TOP(((int)(*(ushort * PTR32 *)(gen_frame + 0x3a8)) + 4)));
        uVar51 = (uint)puVar58[iVar54];
      } while (iVar54 < (int)pfVar43);
    }
    if ((int)uVar51 < (int)param_8) {
      *((undefined4 *)GEN_TOP((param_10 + uVar51 * 4))) = *(undefined4 *)(*(ushort * PTR32 *)(gen_frame + 0x3a8));
    }
  }
LAB_00d713dd: ;
  pvVar39 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar47 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar39 + 4)));
  if (puVar47 < *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar39 + 0xc)))) {
    *puVar47 = ((char *)REFP(0x1137670));
    uVar22 = rdtsc();
    (*(undefined4 *)(gen_frame + 0x274)) = (int)uVar22;
    puVar47[1] = (int)uVar22;
    *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar39 + 4))) = puVar47 + 3;
  }
  pfVar43 = (*(float * PTR32 *)(gen_frame + 0x3c0));
  if ((*(uint *)(gen_frame + 0x2dc)) != (*(uint *)(gen_frame + 0x26c))) {
    param_4 = (*(uint *)(gen_frame + 0x26c));
    pfVar43 = ((float *)GEN_TOP((*((int *)GEN_TOP(((int)puVar57 + 100))) +
                       (*((int *)GEN_TOP(((int)puVar57 + 0x74))) + *((int *)GEN_TOP(((int)puVar57 + 0x88)))) * 4)));
    (*(float * PTR32 *)(gen_frame + 0x3bc)) = ((float *)GEN_TOP((*((int *)GEN_TOP(((int)puVar57 + 100))) +
                        (*((int *)GEN_TOP(((int)puVar57 + 0x78))) + *((int *)GEN_TOP(((int)puVar57 + 0x88)))) * 4)));
    (*(ushort * PTR32 *)(gen_frame + 0x36c)) = ((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)puVar57 + 0x34))) +
               (*((int *)GEN_TOP(((int)puVar57 + 0x4c))) +
               (*((int *)GEN_TOP(((int)puVar57 + 0x54))) - *((int *)GEN_TOP(((int)puVar57 + 0x50))) >> 4)) * 2)));
  }
  (*(ushort * PTR32 *)(gen_frame + 0x3a8)) = ((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)puVar57 + 0x58))) - *((int *)GEN_TOP(((int)puVar57 + 0x54))))));
  (*(ushort * PTR32 *)(gen_frame + 0x3c4)) = (*(ushort * PTR32 *)(gen_frame + 0x3a8));
  uVar51 = *((int *)GEN_TOP(((int)puVar57 + 0x54))) - *((int *)GEN_TOP(((int)puVar57 + 0x50))) & 0x8000000f;
  if ((int)uVar51 < 0) {
    uVar51 = (uVar51 - 1 | 0xfffffff0) + 1;
  }
  puVar57 = ((ushort *)GEN_TOP((0x10 - uVar51)));
  (*(ushort * PTR32 *)(gen_frame + 0x39c)) = ((ushort *)GEN_TOP(uVar51));
  if ((int)puVar57 < (int)(*(ushort * PTR32 *)(gen_frame + 0x3a8))) {
    (*(ushort * PTR32 *)(gen_frame + 0x3a8)) = puVar57;
  }
  else {
  }
  if (0 < (int)(*(ushort * PTR32 *)(gen_frame + 0x3a8))) {
    if ((*(uint *)(gen_frame + 0x2dc)) != (*(uint *)(gen_frame + 0x26c))) {
      pvVar39 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
      puVar47 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar39 + 4)));
      if (puVar47 < *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar39 + 0xc)))) {
        *puVar47 = ((char *)REFP(0x1137660));
        puVar47[3] = ((char *)REFP(0x1137650));
        uVar22 = rdtsc();
        (*(undefined4 *)(gen_frame + 0x264)) = (int)uVar22;
        puVar47[1] = (int)uVar22;
        *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar39 + 4))) = puVar47 + 4;
      }
      if ((*(char *)(gen_frame + 0x3cb)) == '\0') {
        param_4 = F_00d8a500(param_4,param_2,(*(short * PTR32 *)(gen_frame + 0x3a4)));
      }
      else {
        param_4 = F_00d8a4f0(param_4,param_2,(*(short * PTR32 *)(gen_frame + 0x3a4)));
      }
      pvVar39 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
      puVar47 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar39 + 4)));
      if (puVar47 < *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar39 + 0xc)))) {
        *puVar47 = ((char *)REFP(0x1137640));
        uVar22 = rdtsc();
        (*(undefined4 *)(gen_frame + 0x2a0)) = (int)uVar22;
        puVar47[1] = (int)uVar22;
        *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar39 + 4))) = puVar47 + 3;
      }
      (*(float *)(gen_frame + 0x310)) = *(float *)&REFG(undefined, 0x1137630);
      (*(undefined4 *)(gen_frame + 0x314)) = *(undefined4 *)&REFG(undefined, 0x1137634);
      (*(undefined4 *)(gen_frame + 0x318)) = *(undefined4 *)&REFG(undefined, 0x1137638);
      (*(undefined4 *)(gen_frame + 0x31c)) = *(undefined4 *)&REFG(undefined, 0x113763c);
      (*(undefined4 *)(gen_frame + 0x2f0)) = 0;
      (*(undefined4 *)(gen_frame + 0x2f4)) = 0;
      (*(undefined4 *)(gen_frame + 0x2f8)) = 0;
      (*(undefined4 *)(gen_frame + 0x2fc)) = 0;
      uVar20 = *(*(ushort * PTR32 *)(gen_frame + 0x36c));
      (*(ushort * PTR32 *)(gen_frame + 0x36c)) = (*(ushort * PTR32 *)(gen_frame + 0x36c)) + 1;
      (*(undefined4 * PTR32 *)(gen_frame + 0x3cc)) = ((undefined4 *)GEN_TOP((uint)uVar20));
      if ((uVar20 & 1) == 0) {
        (*(float *)(gen_frame + 0x230)) = *pfVar43;
        fVar62 = *(*(float * PTR32 *)(gen_frame + 0x3bc));
        pfVar43 = pfVar43 + 1;
        (*(float * PTR32 *)(gen_frame + 0x3bc)) = (*(float * PTR32 *)(gen_frame + 0x3bc)) + 1;
      }
      else {
        (*(float *)(gen_frame + 0x230)) = *(float *)&REFG(undefined, 0x1137630);
        fVar62 = 0.0;
      }
      (*(undefined2 *)((char *)&(*(undefined4 * PTR32 *)(gen_frame + 0x3cc)) + 0)) = uVar20 >> 1;
      (*(float *)(gen_frame + 0x210)) = fVar62;
      if ((uVar20 >> 1 & 1) == 0) {
        (*(float *)(gen_frame + 0x234)) = *pfVar43;
        fVar72 = *(*(float * PTR32 *)(gen_frame + 0x3bc));
        pfVar43 = pfVar43 + 1;
        (*(float * PTR32 *)(gen_frame + 0x3bc)) = (*(float * PTR32 *)(gen_frame + 0x3bc)) + 1;
      }
      else {
        (*(float *)(gen_frame + 0x234)) = *(float *)&REFG(undefined, 0x1137630);
        fVar72 = 0.0;
      }
      (*(undefined2 *)((char *)&(*(undefined4 * PTR32 *)(gen_frame + 0x3cc)) + 0)) = uVar20 >> 2;
      (*(float *)(gen_frame + 0x214)) = fVar72;
      if ((uVar20 >> 2 & 1) == 0) {
        (*(float *)(gen_frame + 0x238)) = *pfVar43;
        fVar74 = *(*(float * PTR32 *)(gen_frame + 0x3bc));
        pfVar43 = pfVar43 + 1;
        (*(float * PTR32 *)(gen_frame + 0x3bc)) = (*(float * PTR32 *)(gen_frame + 0x3bc)) + 1;
      }
      else {
        (*(float *)(gen_frame + 0x238)) = *(float *)&REFG(undefined, 0x1137630);
        fVar74 = 0.0;
      }
      (*(undefined2 *)((char *)&(*(undefined4 * PTR32 *)(gen_frame + 0x3cc)) + 0)) = uVar20 >> 3;
      (*(float *)(gen_frame + 0x218)) = fVar74;
      if ((uVar20 >> 3 & 1) == 0) {
        (*(float *)(gen_frame + 0x23c)) = *pfVar43;
        fVar76 = *(*(float * PTR32 *)(gen_frame + 0x3bc));
        pfVar43 = pfVar43 + 1;
        (*(float * PTR32 *)(gen_frame + 0x3bc)) = (*(float * PTR32 *)(gen_frame + 0x3bc)) + 1;
      }
      else {
        (*(float *)(gen_frame + 0x23c)) = *(float *)&REFG(undefined, 0x1137630);
        fVar76 = 0.0;
      }
      (*(undefined2 *)((char *)&(*(undefined4 * PTR32 *)(gen_frame + 0x3cc)) + 0)) = uVar20 >> 4;
      (*(float *)(gen_frame + 0x21c)) = fVar76;
      (*(float *)(gen_frame + 0x170)) = (*(float *)(gen_frame + 0x230));
      (*(float *)(gen_frame + 0x174)) = (*(float *)(gen_frame + 0x234));
      (*(float *)(gen_frame + 0x178)) = (*(float *)(gen_frame + 0x238));
      (*(float *)(gen_frame + 0x17c)) = (*(float *)(gen_frame + 0x23c));
      *(undefined4 *)((undefined1 *)(gen_frame + 0x370)) = gen_fl2bits(fVar62);
      (*(float *)(gen_frame + 0x374)) = fVar72;
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x378)) + 0)) = fVar74;
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x378)) + 4)) = fVar76;
      if ((uVar20 >> 4 & 1) == 0) {
        (*(float *)(gen_frame + 0x1c0)) = *pfVar43;
        fVar87 = *(*(float * PTR32 *)(gen_frame + 0x3bc));
        pfVar43 = pfVar43 + 1;
        (*(float * PTR32 *)(gen_frame + 0x3bc)) = (*(float * PTR32 *)(gen_frame + 0x3bc)) + 1;
      }
      else {
        (*(float *)(gen_frame + 0x1c0)) = *(float *)&REFG(undefined, 0x1137630);
        fVar87 = 0.0;
      }
      (*(undefined2 *)((char *)&(*(undefined4 * PTR32 *)(gen_frame + 0x3cc)) + 0)) = uVar20 >> 5;
      (*(float *)(gen_frame + 0x1f0)) = fVar87;
      if ((uVar20 >> 5 & 1) == 0) {
        (*(float *)(gen_frame + 0x1c4)) = *pfVar43;
        fVar91 = *(*(float * PTR32 *)(gen_frame + 0x3bc));
        pfVar43 = pfVar43 + 1;
        (*(float * PTR32 *)(gen_frame + 0x3bc)) = (*(float * PTR32 *)(gen_frame + 0x3bc)) + 1;
      }
      else {
        (*(float *)(gen_frame + 0x1c4)) = *(float *)&REFG(undefined, 0x1137630);
        fVar91 = 0.0;
      }
      (*(undefined2 *)((char *)&(*(undefined4 * PTR32 *)(gen_frame + 0x3cc)) + 0)) = uVar20 >> 6;
      (*(float *)(gen_frame + 0x1f4)) = fVar91;
      if ((uVar20 >> 6 & 1) == 0) {
        (*(float *)(gen_frame + 0x1c8)) = *pfVar43;
        fVar93 = *(*(float * PTR32 *)(gen_frame + 0x3bc));
        pfVar43 = pfVar43 + 1;
        (*(float * PTR32 *)(gen_frame + 0x3bc)) = (*(float * PTR32 *)(gen_frame + 0x3bc)) + 1;
      }
      else {
        (*(float *)(gen_frame + 0x1c8)) = *(float *)&REFG(undefined, 0x1137630);
        fVar93 = 0.0;
      }
      (*(undefined2 *)((char *)&(*(undefined4 * PTR32 *)(gen_frame + 0x3cc)) + 0)) = uVar20 >> 7;
      (*(float *)(gen_frame + 0x1f8)) = fVar93;
      if ((uVar20 >> 7 & 1) == 0) {
        (*(float *)(gen_frame + 0x1cc)) = *pfVar43;
        fVar96 = *(*(float * PTR32 *)(gen_frame + 0x3bc));
        pfVar43 = pfVar43 + 1;
        (*(float * PTR32 *)(gen_frame + 0x3bc)) = (*(float * PTR32 *)(gen_frame + 0x3bc)) + 1;
      }
      else {
        (*(float *)(gen_frame + 0x1cc)) = *(float *)&REFG(undefined, 0x1137630);
        fVar96 = 0.0;
      }
      (*(undefined2 *)((char *)&(*(undefined4 * PTR32 *)(gen_frame + 0x3cc)) + 0)) = uVar20 >> 8;
      (*(float *)(gen_frame + 0x1fc)) = fVar96;
      (*(float *)(gen_frame + 0x180)) = fVar87;
      (*(float *)(gen_frame + 0x184)) = fVar91;
      (*(float *)(gen_frame + 0x188)) = fVar93;
      (*(float *)(gen_frame + 0x18c)) = fVar96;
      if ((uVar20 >> 8 & 1) == 0) {
        (*(float *)(gen_frame + 0x240)) = *pfVar43;
        fVar126 = *(*(float * PTR32 *)(gen_frame + 0x3bc));
        pfVar43 = pfVar43 + 1;
        (*(float * PTR32 *)(gen_frame + 0x3bc)) = (*(float * PTR32 *)(gen_frame + 0x3bc)) + 1;
      }
      else {
        (*(float *)(gen_frame + 0x240)) = *(float *)&REFG(undefined, 0x1137630);
        fVar126 = 0.0;
      }
      (*(undefined2 *)((char *)&(*(undefined4 * PTR32 *)(gen_frame + 0x3cc)) + 0)) = uVar20 >> 9;
      (*(float *)(gen_frame + 0x200)) = fVar126;
      if ((uVar20 >> 9 & 1) == 0) {
        (*(float *)(gen_frame + 0x244)) = *pfVar43;
        fVar133 = *(*(float * PTR32 *)(gen_frame + 0x3bc));
        pfVar43 = pfVar43 + 1;
        (*(float * PTR32 *)(gen_frame + 0x3bc)) = (*(float * PTR32 *)(gen_frame + 0x3bc)) + 1;
      }
      else {
        (*(float *)(gen_frame + 0x244)) = *(float *)&REFG(undefined, 0x1137630);
        fVar133 = 0.0;
      }
      (*(undefined2 *)((char *)&(*(undefined4 * PTR32 *)(gen_frame + 0x3cc)) + 0)) = uVar20 >> 10;
      (*(float *)(gen_frame + 0x204)) = fVar133;
      if ((uVar20 >> 10 & 1) == 0) {
        (*(float *)(gen_frame + 0x248)) = *pfVar43;
        fVar134 = *(*(float * PTR32 *)(gen_frame + 0x3bc));
        pfVar43 = pfVar43 + 1;
        (*(float * PTR32 *)(gen_frame + 0x3bc)) = (*(float * PTR32 *)(gen_frame + 0x3bc)) + 1;
      }
      else {
        (*(float *)(gen_frame + 0x248)) = *(float *)&REFG(undefined, 0x1137630);
        fVar134 = 0.0;
      }
      (*(undefined2 *)((char *)&(*(undefined4 * PTR32 *)(gen_frame + 0x3cc)) + 0)) = uVar20 >> 0xb;
      (*(float *)(gen_frame + 0x208)) = fVar134;
      if ((uVar20 >> 0xb & 1) == 0) {
        (*(float *)(gen_frame + 0x24c)) = *pfVar43;
        fVar135 = *(*(float * PTR32 *)(gen_frame + 0x3bc));
        pfVar43 = pfVar43 + 1;
        (*(float * PTR32 *)(gen_frame + 0x3bc)) = (*(float * PTR32 *)(gen_frame + 0x3bc)) + 1;
      }
      else {
        (*(float *)(gen_frame + 0x24c)) = *(float *)&REFG(undefined, 0x1137630);
        fVar135 = 0.0;
      }
      (*(undefined2 *)((char *)&(*(undefined4 * PTR32 *)(gen_frame + 0x3cc)) + 0)) = uVar20 >> 0xc;
      (*(float *)(gen_frame + 0x20c)) = fVar135;
      (*(float *)(gen_frame + 0x250)) = fVar126;
      (*(float *)(gen_frame + 0x254)) = fVar133;
      (*(float *)(gen_frame + 0x258)) = fVar134;
      (*(float *)(gen_frame + 0x25c)) = fVar135;
      if ((uVar20 >> 0xc & 1) == 0) {
        (*(float *)(gen_frame + 0x1e0)) = *pfVar43;
        fVar136 = *(*(float * PTR32 *)(gen_frame + 0x3bc));
        pfVar43 = pfVar43 + 1;
        (*(float * PTR32 *)(gen_frame + 0x3bc)) = (*(float * PTR32 *)(gen_frame + 0x3bc)) + 1;
      }
      else {
        (*(float *)(gen_frame + 0x1e0)) = *(float *)&REFG(undefined, 0x1137630);
        fVar136 = 0.0;
      }
      (*(undefined2 *)((char *)&(*(undefined4 * PTR32 *)(gen_frame + 0x3cc)) + 0)) = uVar20 >> 0xd;
      (*(float *)(gen_frame + 0x220)) = fVar136;
      if ((uVar20 >> 0xd & 1) == 0) {
        (*(float *)(gen_frame + 0x1e4)) = *pfVar43;
        fVar137 = *(*(float * PTR32 *)(gen_frame + 0x3bc));
        pfVar43 = pfVar43 + 1;
        (*(float * PTR32 *)(gen_frame + 0x3bc)) = (*(float * PTR32 *)(gen_frame + 0x3bc)) + 1;
      }
      else {
        (*(float *)(gen_frame + 0x1e4)) = *(float *)&REFG(undefined, 0x1137630);
        fVar137 = 0.0;
      }
      uVar20 = uVar20 >> 0xe;
      (*(undefined2 *)((char *)&(*(undefined4 * PTR32 *)(gen_frame + 0x3cc)) + 0)) = uVar20;
      (*(undefined4 * PTR32 *)(gen_frame + 0x3cc)) = ((undefined4 *)GEN_TOP((uint)uVar20));
      (*(float *)(gen_frame + 0x224)) = fVar137;
      if ((uVar20 & 1) == 0) {
        (*(float *)(gen_frame + 0x1e8)) = *pfVar43;
        fVar138 = *(*(float * PTR32 *)(gen_frame + 0x3bc));
        pfVar43 = pfVar43 + 1;
        (*(float * PTR32 *)(gen_frame + 0x3bc)) = (*(float * PTR32 *)(gen_frame + 0x3bc)) + 1;
      }
      else {
        (*(float *)(gen_frame + 0x1e8)) = *(float *)&REFG(undefined, 0x1137630);
        fVar138 = 0.0;
      }
      (*(float *)(gen_frame + 0x228)) = fVar138;
      if ((uVar20 & 2) == 0) {
        (*(float *)(gen_frame + 0x1ec)) = *pfVar43;
        fVar139 = *(*(float * PTR32 *)(gen_frame + 0x3bc));
        pfVar43 = pfVar43 + 1;
        (*(float * PTR32 *)(gen_frame + 0x3bc)) = (*(float * PTR32 *)(gen_frame + 0x3bc)) + 1;
      }
      else {
        (*(float *)(gen_frame + 0x1ec)) = *(float *)&REFG(undefined, 0x1137630);
        fVar139 = 0.0;
      }
      (*(float *)(gen_frame + 0x22c)) = fVar139;
      (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x350)) + 0)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x1e0)));
      (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x350)) + 4)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x1e4)));
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x358)) + 0)) = (*(float *)(gen_frame + 0x1e8));
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x358)) + 4)) = (*(float *)(gen_frame + 0x1ec));
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2e0)) + 0)) = fVar136;
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2e0)) + 4)) = fVar137;
      (*(undefined8 *)(gen_frame + 0x2e0)) = CONCAT44((uint)gen_fl2bits(fVar137),(uint)gen_fl2bits(fVar136));
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2e8)) + 0)) = fVar138;
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2e8)) + 4)) = fVar139;
      (*(undefined8 *)(gen_frame + 0x2e8)) = CONCAT44((uint)gen_fl2bits(fVar139),(uint)gen_fl2bits(fVar138));
      fVar99 = (float)(int)*(*(short * PTR32 *)(gen_frame + 0x3a4)) * (*(float *)(gen_frame + 0x230)) + fVar62;
      fVar106 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[1] * (*(float *)(gen_frame + 0x234)) + fVar72;
      fVar107 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[2] * (*(float *)(gen_frame + 0x238)) + fVar74;
      fVar108 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[3] * (*(float *)(gen_frame + 0x23c)) + fVar76;
      fVar109 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[4] * (*(float *)(gen_frame + 0x1c0)) + fVar87;
      fVar118 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[5] * (*(float *)(gen_frame + 0x1c4)) + fVar91;
      fVar119 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[6] * (*(float *)(gen_frame + 0x1c8)) + fVar93;
      fVar120 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[7] * (*(float *)(gen_frame + 0x1cc)) + fVar96;
      fVar63 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[0xc] * (*(float *)(gen_frame + 0x1e0)) + fVar136;
      fVar73 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[0xd] * (*(float *)(gen_frame + 0x1e4)) + fVar137;
      fVar75 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[0xe] * (*(float *)(gen_frame + 0x1e8)) + fVar138;
      fVar77 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[0xf] * (*(float *)(gen_frame + 0x1ec)) + fVar139;
      fVar88 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[8] * (*(float *)(gen_frame + 0x240)) + fVar126;
      fVar92 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[9] * (*(float *)(gen_frame + 0x244)) + fVar133;
      fVar94 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[10] * (*(float *)(gen_frame + 0x248)) + fVar134;
      fVar97 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[0xb] * (*(float *)(gen_frame + 0x24c)) + fVar135;
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x330)) + 0)) = fVar88;
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x330)) + 4)) = fVar92;
      (*(undefined8 *)(gen_frame + 0x330)) = CONCAT44((uint)gen_fl2bits(fVar92),(uint)gen_fl2bits(fVar88));
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x338)) + 0)) = fVar94;
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x338)) + 4)) = fVar97;
      (*(undefined8 *)(gen_frame + 0x338)) = CONCAT44((uint)gen_fl2bits(fVar97),(uint)gen_fl2bits(fVar94));
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x320)) + 0)) = fVar63;
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x320)) + 4)) = fVar73;
      (*(undefined8 *)(gen_frame + 0x320)) = CONCAT44((uint)gen_fl2bits(fVar73),(uint)gen_fl2bits(fVar63));
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x328)) + 0)) = fVar75;
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x328)) + 4)) = fVar77;
      (*(undefined8 *)(gen_frame + 0x328)) = CONCAT44((uint)gen_fl2bits(fVar77),(uint)gen_fl2bits(fVar75));
      if ((*(char *)(gen_frame + 0x3cb)) == '\0') {
        *(*(float * PTR32 *)(gen_frame + 0x3ac)) = fVar99;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[1] = fVar106;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[2] = fVar107;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[3] = fVar108;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[4] = fVar109;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[5] = fVar118;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[6] = fVar119;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[7] = fVar120;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[8] = fVar88;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[9] = fVar92;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[10] = fVar94;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0xb] = fVar97;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0xc] = fVar63;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0xd] = fVar73;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0xe] = fVar75;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0xf] = fVar77;
        sVar23 = (*(short * PTR32 *)(gen_frame + 0x3a4))[0x18];
        sVar24 = (*(short * PTR32 *)(gen_frame + 0x3a4))[0x19];
        sVar25 = (*(short * PTR32 *)(gen_frame + 0x3a4))[0x1a];
        sVar26 = (*(short * PTR32 *)(gen_frame + 0x3a4))[0x1b];
        fVar87 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[0x14] * (*(float *)(gen_frame + 0x1c0)) + fVar87;
        fVar91 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[0x15] * (*(float *)(gen_frame + 0x1c4)) + fVar91;
        fVar93 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[0x16] * (*(float *)(gen_frame + 0x1c8)) + fVar93;
        fVar96 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[0x17] * (*(float *)(gen_frame + 0x1cc)) + fVar96;
        fVar62 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[0x10] * (*(float *)(gen_frame + 0x230)) + fVar62;
        fVar72 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[0x11] * (*(float *)(gen_frame + 0x234)) + fVar72;
        fVar74 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[0x12] * (*(float *)(gen_frame + 0x238)) + fVar74;
        fVar76 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[0x13] * (*(float *)(gen_frame + 0x23c)) + fVar76;
        fVar136 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[0x1c] * (*(float *)(gen_frame + 0x1e0)) + fVar136;
        fVar137 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[0x1d] * (*(float *)(gen_frame + 0x1e4)) + fVar137;
        fVar138 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[0x1e] * (*(float *)(gen_frame + 0x1e8)) + fVar138;
        fVar139 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[0x1f] * (*(float *)(gen_frame + 0x1ec)) + fVar139;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x10] = fVar62;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x11] = fVar72;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x12] = fVar74;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x13] = fVar76;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x14] = fVar87;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x15] = fVar91;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x16] = fVar93;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x17] = fVar96;
        fVar126 = (float)(int)sVar23 * (*(float *)(gen_frame + 0x240)) + fVar126;
        fVar133 = (float)(int)sVar24 * (*(float *)(gen_frame + 0x244)) + fVar133;
        fVar134 = (float)(int)sVar25 * (*(float *)(gen_frame + 0x248)) + fVar134;
        fVar135 = (float)(int)sVar26 * (*(float *)(gen_frame + 0x24c)) + fVar135;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x18] = fVar126;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x19] = fVar133;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x1a] = fVar134;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x1b] = fVar135;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x1c] = fVar136;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x1d] = fVar137;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x1e] = fVar138;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x1f] = fVar139;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x20] = fVar62 * (*(float *)(gen_frame + 0x1a0)) + (*(float *)(gen_frame + 0x2b0)) * fVar99;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x21] = fVar72 * (*(float *)(gen_frame + 0x1a4)) + (*(float *)(gen_frame + 0x2b4)) * fVar106;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x22] = fVar74 * (*(float *)(gen_frame + 0x1a8)) + (*(float *)(gen_frame + 0x2b8)) * fVar107;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x23] = fVar76 * (*(float *)(gen_frame + 0x1ac)) + (*(float *)(gen_frame + 0x2bc)) * fVar108;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x24] = fVar87 * (*(float *)(gen_frame + 0x1a0)) + (*(float *)(gen_frame + 0x2b0)) * fVar109;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x25] = fVar91 * (*(float *)(gen_frame + 0x1a4)) + (*(float *)(gen_frame + 0x2b4)) * fVar118;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x26] = fVar93 * (*(float *)(gen_frame + 0x1a8)) + (*(float *)(gen_frame + 0x2b8)) * fVar119;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x27] = fVar96 * (*(float *)(gen_frame + 0x1ac)) + (*(float *)(gen_frame + 0x2bc)) * fVar120;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x28] = fVar126 * (*(float *)(gen_frame + 0x1a0)) + (*(float *)(gen_frame + 0x2b0)) * fVar88;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x29] = fVar133 * (*(float *)(gen_frame + 0x1a4)) + (*(float *)(gen_frame + 0x2b4)) * fVar92;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x2a] = fVar134 * (*(float *)(gen_frame + 0x1a8)) + (*(float *)(gen_frame + 0x2b8)) * fVar94;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x2b] = fVar135 * (*(float *)(gen_frame + 0x1ac)) + (*(float *)(gen_frame + 0x2bc)) * fVar97;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x2c] = fVar136 * (*(float *)(gen_frame + 0x1a0)) + (*(float *)(gen_frame + 0x2b0)) * fVar63;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x2d] = fVar137 * (*(float *)(gen_frame + 0x1a4)) + (*(float *)(gen_frame + 0x2b4)) * fVar73;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x2e] = fVar138 * (*(float *)(gen_frame + 0x1a8)) + (*(float *)(gen_frame + 0x2b8)) * fVar75;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x2f] = fVar139 * (*(float *)(gen_frame + 0x1ac)) + (*(float *)(gen_frame + 0x2bc)) * fVar77;
      }
      else {
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x20] = fVar99;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x21] = fVar106;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x22] = fVar107;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x23] = fVar108;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x24] = fVar109;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x25] = fVar118;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x26] = fVar119;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x27] = fVar120;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x28] = fVar88;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x29] = fVar92;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x2a] = fVar94;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x2b] = fVar97;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x2c] = fVar63;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x2d] = fVar73;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x2e] = fVar75;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x2f] = fVar77;
      }
      pvVar39 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
      puVar47 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar39 + 4)));
      if (puVar47 < *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar39 + 0xc)))) {
        *puVar47 = &REFG(undefined, 0x1134dd0);
        uVar22 = rdtsc();
        (*(undefined4 *)(gen_frame + 0x294)) = (int)uVar22;
        puVar47[1] = (int)uVar22;
        *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar39 + 4))) = puVar47 + 3;
      }
    }
    uVar51 = (uint)*(*(ushort * PTR32 *)(gen_frame + 0x390));
    iVar54 = 0;
    if ((*(ushort * PTR32 *)(gen_frame + 0x3a8)) != ((ushort *)GEN_TOP(0x1)) && -1 < (int)(*(ushort * PTR32 *)(gen_frame + 0x3a8)) - 1) {
      do {
        if ((int)param_8 <= (int)uVar51) goto LAB_00d71c3c;
        *((float *)GEN_TOP((param_10 + uVar51 * 4))) = (*(float * PTR32 *)(gen_frame + 0x3ac))[(int)(*(ushort * PTR32 *)(gen_frame + 0x39c)) + iVar54 + 0x20];
        uVar51 = (uint)(*(ushort * PTR32 *)(gen_frame + 0x390))[iVar54 + 1];
        iVar54 = iVar54 + 1;
      } while (iVar54 < (int)(*(ushort * PTR32 *)(gen_frame + 0x3a8)) - 1);
    }
    if ((int)uVar51 < (int)param_8) {
      *((float *)GEN_TOP((param_10 + uVar51 * 4))) = (*(float * PTR32 *)(gen_frame + 0x3ac))[iVar54 + (int)(*(ushort * PTR32 *)(gen_frame + 0x39c)) + 0x20];
    }
  }
LAB_00d71c3c: ;
  if ((int)(*(ushort * PTR32 *)(gen_frame + 0x3a8)) < (int)(*(ushort * PTR32 *)(gen_frame + 0x3c4))) {
    (*(ushort * PTR32 *)(gen_frame + 0x3b4)) = (*(ushort * PTR32 *)(gen_frame + 0x3a8));
    do {
      (*(ushort * PTR32 *)(gen_frame + 0x3a8)) = ((ushort *)GEN_TOP((uint)(*(ushort * PTR32 *)(gen_frame + 0x390))[(int)(*(ushort * PTR32 *)(gen_frame + 0x3b4))]));
      if ((int)param_8 <= (int)(uint)(*(ushort * PTR32 *)(gen_frame + 0x390))[(int)(*(ushort * PTR32 *)(gen_frame + 0x3b4))]) break;
      pvVar39 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
      puVar47 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar39 + 4)));
      if (puVar47 < *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar39 + 0xc)))) {
        *puVar47 = ((char *)REFP(0x1137660));
        puVar47[3] = ((char *)REFP(0x1137650));
        uVar22 = rdtsc();
        (*(undefined4 *)(gen_frame + 0x2ac)) = (int)uVar22;
        puVar47[1] = (int)uVar22;
        *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar39 + 4))) = puVar47 + 4;
      }
      if ((*(char *)(gen_frame + 0x3cb)) == '\0') {
        param_4 = F_00d8a500(param_4,param_2,(*(short * PTR32 *)(gen_frame + 0x3a4)));
      }
      else {
        param_4 = F_00d8a4f0(param_4,param_2,(*(short * PTR32 *)(gen_frame + 0x3a4)));
      }
      pvVar39 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
      puVar47 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar39 + 4)));
      if (puVar47 < *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar39 + 0xc)))) {
        *puVar47 = ((char *)REFP(0x1137640));
        uVar22 = rdtsc();
        (*(undefined4 *)(gen_frame + 0x2a4)) = (int)uVar22;
        puVar47[1] = (int)uVar22;
        *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar39 + 4))) = puVar47 + 3;
      }
      (*(float *)(gen_frame + 0x150)) = *(float *)&REFG(undefined, 0x1137630);
      (*(undefined4 *)(gen_frame + 0x154)) = *(undefined4 *)&REFG(undefined, 0x1137634);
      (*(undefined4 *)(gen_frame + 0x158)) = *(undefined4 *)&REFG(undefined, 0x1137638);
      (*(undefined4 *)(gen_frame + 0x15c)) = *(undefined4 *)&REFG(undefined, 0x113763c);
      (*(undefined4 *)(gen_frame + 0x130)) = 0;
      (*(undefined4 *)(gen_frame + 0x134)) = 0;
      (*(undefined4 *)(gen_frame + 0x138)) = 0;
      (*(undefined4 *)(gen_frame + 0x13c)) = 0;
      (*(ushort * PTR32 *)(gen_frame + 0x3b8)) = ((ushort *)GEN_TOP((uint)*(*(ushort * PTR32 *)(gen_frame + 0x36c))));
      (*(ushort * PTR32 *)(gen_frame + 0x36c)) = (*(ushort * PTR32 *)(gen_frame + 0x36c)) + 1;
      iVar54 = 0;
      pfVar45 = (*(float * PTR32 *)(gen_frame + 0x3bc));
      do {
        if (((uint)(*(ushort * PTR32 *)(gen_frame + 0x3b8)) & 1) == 0) {
          fVar62 = *pfVar43;
          pfVar43 = pfVar43 + 1;
          *((float *)GEN_TOP(((int)((float *)(gen_frame + 0xb0)) + iVar54))) = fVar62;
          pfVar50 = pfVar45 + 1;
          *((float *)GEN_TOP(((int)((float *)(gen_frame + 0x50)) + iVar54))) = *pfVar45;
        }
        else {
          *((float *)GEN_TOP(((int)((float *)(gen_frame + 0xb0)) + iVar54))) = *(float *)&REFG(undefined, 0x1137630);
          *((undefined4 *)GEN_TOP(((int)((float *)(gen_frame + 0x50)) + iVar54))) = 0;
          pfVar50 = pfVar45;
        }
        uVar20 = (ushort)((int)(uintptr_t)(*(ushort * PTR32 *)(gen_frame + 0x3b8))) >> 1;
        (*(undefined2 *)((char *)&(*(ushort * PTR32 *)(gen_frame + 0x3b8)) + 0)) = uVar20;
        (*(ushort * PTR32 *)(gen_frame + 0x3b8)) = ((ushort *)GEN_TOP((uint)uVar20));
        iVar54 = iVar54 + 4;
        pfVar45 = pfVar50;
      } while (iVar54 < 0x10);
      (*(float *)(gen_frame + 0x170)) = ((float *)(gen_frame + 0xb0))[0];
      (*(float *)(gen_frame + 0x174)) = ((float *)(gen_frame + 0xb0))[1];
      (*(float *)(gen_frame + 0x178)) = ((float *)(gen_frame + 0xb0))[2];
      (*(float *)(gen_frame + 0x17c)) = ((float *)(gen_frame + 0xb0))[3];
      *(undefined4 *)((undefined1 *)(gen_frame + 0x370)) = gen_fl2bits(((float *)(gen_frame + 0x50))[0]);
      (*(float *)(gen_frame + 0x374)) = ((float *)(gen_frame + 0x50))[1];
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x378)) + 0)) = ((float *)(gen_frame + 0x50))[2];
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x378)) + 4)) = ((float *)(gen_frame + 0x50))[3];
      iVar54 = 0;
      do {
        if (((uint)(*(ushort * PTR32 *)(gen_frame + 0x3b8)) & 1) == 0) {
          fVar62 = *pfVar43;
          pfVar43 = pfVar43 + 1;
          *((float *)GEN_TOP(((int)((float *)(gen_frame + 0x110)) + iVar54))) = fVar62;
          pfVar45 = pfVar50 + 1;
          *((float *)GEN_TOP(((int)((float *)(gen_frame + 0x20)) + iVar54))) = *pfVar50;
        }
        else {
          *((float *)GEN_TOP(((int)((float *)(gen_frame + 0x110)) + iVar54))) = *(float *)&REFG(undefined, 0x1137630);
          *((undefined4 *)GEN_TOP(((int)((float *)(gen_frame + 0x20)) + iVar54))) = 0;
          pfVar45 = pfVar50;
        }
        uVar20 = (ushort)((int)(uintptr_t)(*(ushort * PTR32 *)(gen_frame + 0x3b8))) >> 1;
        (*(undefined2 *)((char *)&(*(ushort * PTR32 *)(gen_frame + 0x3b8)) + 0)) = uVar20;
        (*(ushort * PTR32 *)(gen_frame + 0x3b8)) = ((ushort *)GEN_TOP((uint)uVar20));
        iVar54 = iVar54 + 4;
        pfVar50 = pfVar45;
      } while (iVar54 < 0x10);
      (*(float *)(gen_frame + 0x180)) = ((float *)(gen_frame + 0x20))[0];
      (*(float *)(gen_frame + 0x184)) = ((float *)(gen_frame + 0x20))[1];
      (*(float *)(gen_frame + 0x188)) = ((float *)(gen_frame + 0x20))[2];
      (*(float *)(gen_frame + 0x18c)) = ((float *)(gen_frame + 0x20))[3];
      iVar54 = 0;
      do {
        if (((uint)(*(ushort * PTR32 *)(gen_frame + 0x3b8)) & 1) == 0) {
          fVar62 = *pfVar43;
          pfVar43 = pfVar43 + 1;
          *((float *)GEN_TOP(((int)((float *)(gen_frame + 0x100)) + iVar54))) = fVar62;
          pfVar50 = pfVar45 + 1;
          *((float *)GEN_TOP(((int)((float *)(gen_frame + 0xe0)) + iVar54))) = *pfVar45;
        }
        else {
          *((float *)GEN_TOP(((int)((float *)(gen_frame + 0x100)) + iVar54))) = *(float *)&REFG(undefined, 0x1137630);
          *((undefined4 *)GEN_TOP(((int)((float *)(gen_frame + 0xe0)) + iVar54))) = 0;
          pfVar50 = pfVar45;
        }
        uVar20 = (ushort)((int)(uintptr_t)(*(ushort * PTR32 *)(gen_frame + 0x3b8))) >> 1;
        (*(undefined2 *)((char *)&(*(ushort * PTR32 *)(gen_frame + 0x3b8)) + 0)) = uVar20;
        (*(ushort * PTR32 *)(gen_frame + 0x3b8)) = ((ushort *)GEN_TOP((uint)uVar20));
        iVar54 = iVar54 + 4;
        pfVar45 = pfVar50;
      } while (iVar54 < 0x10);
      (*(float *)(gen_frame + 0x250)) = ((float *)(gen_frame + 0xe0))[0];
      (*(float *)(gen_frame + 0x254)) = ((float *)(gen_frame + 0xe0))[1];
      (*(float *)(gen_frame + 0x258)) = ((float *)(gen_frame + 0xe0))[2];
      (*(float *)(gen_frame + 0x25c)) = ((float *)(gen_frame + 0xe0))[3];
      iVar54 = 0;
      do {
        if (((uint)(*(ushort * PTR32 *)(gen_frame + 0x3b8)) & 1) == 0) {
          fVar62 = *pfVar43;
          pfVar43 = pfVar43 + 1;
          *((float *)GEN_TOP(((int)((float *)(gen_frame + 0xc0)) + iVar54))) = fVar62;
          pfVar45 = pfVar50 + 1;
          *((float *)GEN_TOP(((int)((float *)(gen_frame + 0xa0)) + iVar54))) = *pfVar50;
        }
        else {
          *((float *)GEN_TOP(((int)((float *)(gen_frame + 0xc0)) + iVar54))) = *(float *)&REFG(undefined, 0x1137630);
          *((undefined4 *)GEN_TOP(((int)((float *)(gen_frame + 0xa0)) + iVar54))) = 0;
          pfVar45 = pfVar50;
        }
        uVar20 = (ushort)((int)(uintptr_t)(*(ushort * PTR32 *)(gen_frame + 0x3b8))) >> 1;
        (*(undefined2 *)((char *)&(*(ushort * PTR32 *)(gen_frame + 0x3b8)) + 0)) = uVar20;
        (*(ushort * PTR32 *)(gen_frame + 0x3b8)) = ((ushort *)GEN_TOP((uint)uVar20));
        iVar54 = iVar54 + 4;
        pfVar50 = pfVar45;
      } while (iVar54 < 0x10);
      (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x350)) + 0)) = (undefined4)gen_fl2bits(((float *)(gen_frame + 0xc0))[0]);
      (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x350)) + 4)) = (undefined4)gen_fl2bits(((float *)(gen_frame + 0xc0))[1]);
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x358)) + 0)) = ((float *)(gen_frame + 0xc0))[2];
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x358)) + 4)) = ((float *)(gen_frame + 0xc0))[3];
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2e0)) + 0)) = ((float *)(gen_frame + 0xa0))[0];
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2e0)) + 4)) = ((float *)(gen_frame + 0xa0))[1];
      (*(undefined8 *)(gen_frame + 0x2e0)) = CONCAT44((uint)gen_fl2bits(((float *)(gen_frame + 0xa0))[1]),(uint)gen_fl2bits(((float *)(gen_frame + 0xa0))[0]));
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2e8)) + 0)) = ((float *)(gen_frame + 0xa0))[2];
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x2e8)) + 4)) = ((float *)(gen_frame + 0xa0))[3];
      (*(undefined8 *)(gen_frame + 0x2e8)) = CONCAT44((uint)gen_fl2bits(((float *)(gen_frame + 0xa0))[3]),(uint)gen_fl2bits(((float *)(gen_frame + 0xa0))[2]));
      (*(float * PTR32 *)(gen_frame + 0x3bc)) = pfVar45;
      fVar126 = (float)(int)*(*(short * PTR32 *)(gen_frame + 0x3a4)) * ((float *)(gen_frame + 0xb0))[0] + ((float *)(gen_frame + 0x50))[0];
      fVar133 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[1] * ((float *)(gen_frame + 0xb0))[1] + ((float *)(gen_frame + 0x50))[1];
      fVar134 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[2] * ((float *)(gen_frame + 0xb0))[2] + ((float *)(gen_frame + 0x50))[2];
      fVar135 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[3] * ((float *)(gen_frame + 0xb0))[3] + ((float *)(gen_frame + 0x50))[3];
      fVar136 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[4] * ((float *)(gen_frame + 0x110))[0] + ((float *)(gen_frame + 0x20))[0];
      fVar137 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[5] * ((float *)(gen_frame + 0x110))[1] + ((float *)(gen_frame + 0x20))[1];
      fVar138 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[6] * ((float *)(gen_frame + 0x110))[2] + ((float *)(gen_frame + 0x20))[2];
      fVar139 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[7] * ((float *)(gen_frame + 0x110))[3] + ((float *)(gen_frame + 0x20))[3];
      fVar62 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[0xc] * ((float *)(gen_frame + 0xc0))[0] + ((float *)(gen_frame + 0xa0))[0];
      fVar72 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[0xd] * ((float *)(gen_frame + 0xc0))[1] + ((float *)(gen_frame + 0xa0))[1];
      fVar74 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[0xe] * ((float *)(gen_frame + 0xc0))[2] + ((float *)(gen_frame + 0xa0))[2];
      fVar76 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[0xf] * ((float *)(gen_frame + 0xc0))[3] + ((float *)(gen_frame + 0xa0))[3];
      fVar87 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[8] * ((float *)(gen_frame + 0x100))[0] + ((float *)(gen_frame + 0xe0))[0];
      fVar91 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[9] * ((float *)(gen_frame + 0x100))[1] + ((float *)(gen_frame + 0xe0))[1];
      fVar93 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[10] * ((float *)(gen_frame + 0x100))[2] + ((float *)(gen_frame + 0xe0))[2];
      fVar96 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[0xb] * ((float *)(gen_frame + 0x100))[3] + ((float *)(gen_frame + 0xe0))[3];
      (*(float * PTR32 *)(gen_frame + 0x3c0)) = pfVar43;
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x330)) + 0)) = fVar87;
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x330)) + 4)) = fVar91;
      (*(undefined8 *)(gen_frame + 0x330)) = CONCAT44((uint)gen_fl2bits(fVar91),(uint)gen_fl2bits(fVar87));
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x338)) + 0)) = fVar93;
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x338)) + 4)) = fVar96;
      (*(undefined8 *)(gen_frame + 0x338)) = CONCAT44((uint)gen_fl2bits(fVar96),(uint)gen_fl2bits(fVar93));
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x320)) + 0)) = fVar62;
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x320)) + 4)) = fVar72;
      (*(undefined8 *)(gen_frame + 0x320)) = CONCAT44((uint)gen_fl2bits(fVar72),(uint)gen_fl2bits(fVar62));
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x328)) + 0)) = fVar74;
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x328)) + 4)) = fVar76;
      (*(undefined8 *)(gen_frame + 0x328)) = CONCAT44((uint)gen_fl2bits(fVar76),(uint)gen_fl2bits(fVar74));
      if ((*(char *)(gen_frame + 0x3cb)) == '\0') {
        *(*(float * PTR32 *)(gen_frame + 0x3ac)) = fVar126;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[1] = fVar133;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[2] = fVar134;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[3] = fVar135;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[4] = fVar136;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[5] = fVar137;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[6] = fVar138;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[7] = fVar139;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[8] = fVar87;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[9] = fVar91;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[10] = fVar93;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0xb] = fVar96;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0xc] = fVar62;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0xd] = fVar72;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0xe] = fVar74;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0xf] = fVar76;
        sVar23 = (*(short * PTR32 *)(gen_frame + 0x3a4))[0x18];
        sVar24 = (*(short * PTR32 *)(gen_frame + 0x3a4))[0x19];
        sVar25 = (*(short * PTR32 *)(gen_frame + 0x3a4))[0x1a];
        sVar26 = (*(short * PTR32 *)(gen_frame + 0x3a4))[0x1b];
        fVar99 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[0x14] * ((float *)(gen_frame + 0x110))[0] + ((float *)(gen_frame + 0x20))[0];
        fVar106 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[0x15] * ((float *)(gen_frame + 0x110))[1] + ((float *)(gen_frame + 0x20))[1];
        fVar107 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[0x16] * ((float *)(gen_frame + 0x110))[2] + ((float *)(gen_frame + 0x20))[2];
        fVar108 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[0x17] * ((float *)(gen_frame + 0x110))[3] + ((float *)(gen_frame + 0x20))[3];
        fVar88 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[0x10] * ((float *)(gen_frame + 0xb0))[0] + ((float *)(gen_frame + 0x50))[0];
        fVar92 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[0x11] * ((float *)(gen_frame + 0xb0))[1] + ((float *)(gen_frame + 0x50))[1];
        fVar94 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[0x12] * ((float *)(gen_frame + 0xb0))[2] + ((float *)(gen_frame + 0x50))[2];
        fVar97 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[0x13] * ((float *)(gen_frame + 0xb0))[3] + ((float *)(gen_frame + 0x50))[3];
        fVar63 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[0x1c] * ((float *)(gen_frame + 0xc0))[0] + ((float *)(gen_frame + 0xa0))[0];
        fVar73 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[0x1d] * ((float *)(gen_frame + 0xc0))[1] + ((float *)(gen_frame + 0xa0))[1];
        fVar75 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[0x1e] * ((float *)(gen_frame + 0xc0))[2] + ((float *)(gen_frame + 0xa0))[2];
        fVar77 = (float)(int)(*(short * PTR32 *)(gen_frame + 0x3a4))[0x1f] * ((float *)(gen_frame + 0xc0))[3] + ((float *)(gen_frame + 0xa0))[3];
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x10] = fVar88;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x11] = fVar92;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x12] = fVar94;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x13] = fVar97;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x14] = fVar99;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x15] = fVar106;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x16] = fVar107;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x17] = fVar108;
        fVar109 = (float)(int)sVar23 * ((float *)(gen_frame + 0x100))[0] + ((float *)(gen_frame + 0xe0))[0];
        fVar118 = (float)(int)sVar24 * ((float *)(gen_frame + 0x100))[1] + ((float *)(gen_frame + 0xe0))[1];
        fVar119 = (float)(int)sVar25 * ((float *)(gen_frame + 0x100))[2] + ((float *)(gen_frame + 0xe0))[2];
        fVar120 = (float)(int)sVar26 * ((float *)(gen_frame + 0x100))[3] + ((float *)(gen_frame + 0xe0))[3];
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x18] = fVar109;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x19] = fVar118;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x1a] = fVar119;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x1b] = fVar120;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x1c] = fVar63;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x1d] = fVar73;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x1e] = fVar75;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x1f] = fVar77;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x20] = (*(float *)(gen_frame + 0x1a0)) * fVar88 + (*(float *)(gen_frame + 0x2b0)) * fVar126;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x21] = (*(float *)(gen_frame + 0x1a4)) * fVar92 + (*(float *)(gen_frame + 0x2b4)) * fVar133;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x22] = (*(float *)(gen_frame + 0x1a8)) * fVar94 + (*(float *)(gen_frame + 0x2b8)) * fVar134;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x23] = (*(float *)(gen_frame + 0x1ac)) * fVar97 + (*(float *)(gen_frame + 0x2bc)) * fVar135;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x24] = (*(float *)(gen_frame + 0x1a0)) * fVar99 + (*(float *)(gen_frame + 0x2b0)) * fVar136;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x25] = (*(float *)(gen_frame + 0x1a4)) * fVar106 + (*(float *)(gen_frame + 0x2b4)) * fVar137;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x26] = (*(float *)(gen_frame + 0x1a8)) * fVar107 + (*(float *)(gen_frame + 0x2b8)) * fVar138;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x27] = (*(float *)(gen_frame + 0x1ac)) * fVar108 + (*(float *)(gen_frame + 0x2bc)) * fVar139;
        fVar62 = (*(float *)(gen_frame + 0x1a0)) * fVar63 + (*(float *)(gen_frame + 0x2b0)) * fVar62;
        fVar72 = (*(float *)(gen_frame + 0x1a4)) * fVar73 + (*(float *)(gen_frame + 0x2b4)) * fVar72;
        fVar74 = (*(float *)(gen_frame + 0x1a8)) * fVar75 + (*(float *)(gen_frame + 0x2b8)) * fVar74;
        fVar76 = (*(float *)(gen_frame + 0x1ac)) * fVar77 + (*(float *)(gen_frame + 0x2bc)) * fVar76;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x28] = (*(float *)(gen_frame + 0x1a0)) * fVar109 + (*(float *)(gen_frame + 0x2b0)) * fVar87;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x29] = (*(float *)(gen_frame + 0x1a4)) * fVar118 + (*(float *)(gen_frame + 0x2b4)) * fVar91;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x2a] = (*(float *)(gen_frame + 0x1a8)) * fVar119 + (*(float *)(gen_frame + 0x2b8)) * fVar93;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x2b] = (*(float *)(gen_frame + 0x1ac)) * fVar120 + (*(float *)(gen_frame + 0x2bc)) * fVar96;
      }
      else {
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x20] = fVar126;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x21] = fVar133;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x22] = fVar134;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x23] = fVar135;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x24] = fVar136;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x25] = fVar137;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x26] = fVar138;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x27] = fVar139;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x28] = fVar87;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x29] = fVar91;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x2a] = fVar93;
        (*(float * PTR32 *)(gen_frame + 0x3ac))[0x2b] = fVar96;
      }
      (*(float * PTR32 *)(gen_frame + 0x3ac))[0x2c] = fVar62;
      (*(float * PTR32 *)(gen_frame + 0x3ac))[0x2d] = fVar72;
      (*(float * PTR32 *)(gen_frame + 0x3ac))[0x2e] = fVar74;
      (*(float * PTR32 *)(gen_frame + 0x3ac))[0x2f] = fVar76;
      pvVar39 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
      puVar47 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar39 + 4)));
      if (puVar47 < *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar39 + 0xc)))) {
        *puVar47 = &REFG(undefined, 0x1134dd0);
        uVar22 = rdtsc();
        (*(undefined4 *)(gen_frame + 0x280)) = (int)uVar22;
        puVar47[1] = (int)uVar22;
        *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar39 + 4))) = puVar47 + 3;
      }
      puVar57 = (*(ushort * PTR32 *)(gen_frame + 0x3c4));
      if ((int)((*(ushort * PTR32 *)(gen_frame + 0x3b4)) + 8) < (int)(*(ushort * PTR32 *)(gen_frame + 0x3c4))) {
        puVar57 = (*(ushort * PTR32 *)(gen_frame + 0x3b4)) + 8;
      }
      iVar54 = 0;
      if ((int)(*(ushort * PTR32 *)(gen_frame + 0x3b4)) < (int)puVar57 - 1) {
        pfVar45 = (*(float * PTR32 *)(gen_frame + 0x3ac)) + 0x20;
        puVar58 = (*(ushort * PTR32 *)(gen_frame + 0x3a8));
        do {
          pfVar43 = (*(float * PTR32 *)(gen_frame + 0x3c0));
          if ((int)param_8 <= (int)puVar58) goto LAB_00d7212f;
          *((float *)GEN_TOP((param_10 + (int)((int)(uintptr_t)puVar58) * 4))) = *pfVar45;
          puVar58 = ((ushort *)GEN_TOP((uint)(*(ushort * PTR32 *)(gen_frame + 0x390))[(int)(*(ushort * PTR32 *)(gen_frame + 0x3b4)) + 1]));
          puVar56 = ((ushort *)GEN_TOP(((int)(*(ushort * PTR32 *)(gen_frame + 0x3b4)) + 1)));
          iVar54 = iVar54 + 1;
          pfVar45 = pfVar45 + 1;
          (*(ushort * PTR32 *)(gen_frame + 0x3b4)) = puVar56;
        } while ((int)puVar56 < (int)puVar57 - 1);
        (*(ushort * PTR32 *)(gen_frame + 0x3a8)) = puVar58;
      }
      if ((int)(*(ushort * PTR32 *)(gen_frame + 0x3a8)) < (int)param_8) {
        (*(ushort * PTR32 *)(gen_frame + 0x3b4)) = ((ushort *)GEN_TOP(((int)(*(ushort * PTR32 *)(gen_frame + 0x3b4)) + 1)));
        *((float *)GEN_TOP((param_10 + (int)((int)(uintptr_t)(*(ushort * PTR32 *)(gen_frame + 0x3a8))) * 4))) = (*(float * PTR32 *)(gen_frame + 0x3ac))[iVar54 + 0x20];
      }
LAB_00d7212f: ;
    } while ((int)(*(ushort * PTR32 *)(gen_frame + 0x3b4)) < (int)(*(ushort * PTR32 *)(gen_frame + 0x3c4)));
  }
  pvVar39 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if (((*((int *)GEN_TOP(((int)pvVar39 + 8))) < 0x100) || ((*(float * PTR32 *)(gen_frame + 0x3ac)) + 0x40 != *((float * PTR32 *)GEN_TOP(((int)pvVar39 + 0xc)))))
     || (*((float * PTR32 *)GEN_TOP(((int)pvVar39 + 0x14))) == (*(float * PTR32 *)(gen_frame + 0x3ac)))) {
    F_00d945c0(pvVar39 GEN_EDX_ARG,(*(float * PTR32 *)(gen_frame + 0x3ac)),0x100);
  }
  else {
    *((float * PTR32 *)GEN_TOP(((int)pvVar39 + 0xc))) = (*(float * PTR32 *)(gen_frame + 0x3ac));
  }
  pvVar39 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if (((*((int *)GEN_TOP(((int)pvVar39 + 8))) < 0x80) || ((*(short * PTR32 *)(gen_frame + 0x3a4)) + 0x40 != *((short * PTR32 *)GEN_TOP(((int)pvVar39 + 0xc)))))
     || (*((short * PTR32 *)GEN_TOP(((int)pvVar39 + 0x14))) == (*(short * PTR32 *)(gen_frame + 0x3a4)))) {
    F_00d945c0(pvVar39 GEN_EDX_ARG,(*(short * PTR32 *)(gen_frame + 0x3a4)),0x80);
  }
  else {
    *((short * PTR32 *)GEN_TOP(((int)pvVar39 + 0xc))) = (*(short * PTR32 *)(gen_frame + 0x3a4));
  }
  pvVar46 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar47 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar46 + 4)));
  pvVar39 = pvVar46;
  if (puVar47 < *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar46 + 0xc)))) {
    *puVar47 = &REFG(undefined, 0x1134dd0);
    uVar22 = rdtsc();
    pvVar39 = (LPVOID)uVar22;
    (*(LPVOID *)(gen_frame + 0x298)) = pvVar39;
    puVar47[1] = pvVar39;
    *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar46 + 4))) = puVar47 + 3;
  }
  return (uint)pvVar39;
}

/* ref: FUN_00d721f0 */
GEN_LIB GEN_FRAME uint F_00d721f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(float param_2, float gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(int * param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7), GEN_P(undefined4 * param_9, unsigned int gen_a8), GEN_P(undefined4 * param_10, unsigned int gen_a9))
{
  GEN_ENTER(0xd721f0u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(int * param_7 = (int *)(uintptr_t)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 * param_9 = (undefined4 *)(uintptr_t)gen_a8;)
  GEN_PIN(undefined4 * param_10 = (undefined4 *)(uintptr_t)gen_a9;)
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  LPVOID pvVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined4 * local_1c;
  uint local_18;
  uint local_14;
  uint local_c;
  uint local_8;
  
  iVar11 = *param_7;
  iVar1 = *((int *)GEN_TOP((iVar11 + 0x80)));
  iVar12 = *((int *)GEN_TOP((iVar11 + 0x7c)));
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  local_18 = *((uint *)GEN_TOP(((int)pvVar5 + 0xc)));
  uVar13 = (iVar12 + 3U & 0xfffffffc) * 0x30 + 0x7f & 0xffffff80;
  if ((*((int *)GEN_TOP(((int)pvVar5 + 8))) < (int)uVar13) ||
     (*((uint *)GEN_TOP(((int)pvVar5 + 0x10))) < local_18 + uVar13)) {
    local_18 = F_00d94390(pvVar5 GEN_EDX_ARG,uVar13);
  }
  else {
    *((uint *)GEN_TOP(((int)pvVar5 + 0xc))) = local_18 + uVar13;
  }
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  local_14 = *((uint *)GEN_TOP(((int)pvVar5 + 0xc)));
  uVar9 = (iVar1 + 3U & 0xfffffffc) * 4 + 0x7f & 0xffffff80;
  if ((*((int *)GEN_TOP(((int)pvVar5 + 8))) < (int)uVar9) || (*((uint *)GEN_TOP(((int)pvVar5 + 0x10))) < local_14 + uVar9)
     ) {
    local_14 = F_00d94390(pvVar5 GEN_EDX_ARG,uVar9);
  }
  else {
    *((uint *)GEN_TOP(((int)pvVar5 + 0xc))) = local_14 + uVar9;
  }
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  local_c = *((uint *)GEN_TOP(((int)pvVar5 + 0xc)));
  uVar10 = (iVar12 + 0xfU & 0xfffffff0) + 0x7f & 0xffffff80;
  if ((*((int *)GEN_TOP(((int)pvVar5 + 8))) < (int)uVar10) ||
     (*((uint *)GEN_TOP(((int)pvVar5 + 0x10))) < local_c + uVar10)) {
    local_c = F_00d94390(pvVar5 GEN_EDX_ARG,uVar10);
  }
  else {
    *((uint *)GEN_TOP(((int)pvVar5 + 0xc))) = local_c + uVar10;
  }
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  local_8 = *((uint *)GEN_TOP(((int)pvVar5 + 0xc)));
  uVar14 = (iVar1 + 0xfU & 0xfffffff0) + 0x7f & 0xffffff80;
  if ((*((int *)GEN_TOP(((int)pvVar5 + 8))) < (int)uVar14) ||
     (*((uint *)GEN_TOP(((int)pvVar5 + 0x10))) < local_8 + uVar14)) {
    local_8 = F_00d94390(pvVar5 GEN_EDX_ARG,uVar14);
  }
  else {
    *((uint *)GEN_TOP(((int)pvVar5 + 0xc))) = local_8 + uVar14;
  }
  F_00da1030(local_c,0xff,iVar12);
  F_00da1030(local_8,0xff,iVar1);
  F_00d6f800(iVar11 GEN_EDX_ARG,param_1,param_2,param_7[2],param_5,param_6,iVar12,iVar1,local_18,local_14,
               local_c,local_8);
  iVar11 = 0;
  param_7 = ((int *)GEN_TOP(0x0));
  puVar8 = param_9;
  if (3 < iVar12) {
    puVar6 = ((undefined4 *)GEN_TOP((local_18 + 0x50)));
    do {
      if (param_3 <= iVar11) goto LAB_00d72508;
      puVar7 = puVar8;
      if (0.0 < (float)*((byte *)GEN_TOP((local_c + (int)param_7)))) {
        uVar2 = puVar6[-0x13];
        uVar3 = puVar6[-0x12];
        uVar4 = puVar6[-0x11];
        *puVar8 = puVar6[-0x14];
        puVar8[1] = uVar2;
        puVar8[2] = uVar3;
        puVar8[3] = uVar4;
        uVar2 = puVar6[-0xf];
        uVar3 = puVar6[-0xe];
        uVar4 = puVar6[-0xd];
        puVar8[4] = puVar6[-0x10];
        puVar8[5] = uVar2;
        puVar8[6] = uVar3;
        puVar8[7] = uVar4;
        uVar2 = puVar6[-0xb];
        uVar3 = puVar6[-10];
        uVar4 = puVar6[-9];
        puVar7 = puVar8 + 0xc;
        puVar8[8] = puVar6[-0xc];
        puVar8[9] = uVar2;
        puVar8[10] = uVar3;
        puVar8[0xb] = uVar4;
        iVar11 = iVar11 + 1;
      }
      if (param_3 <= iVar11) goto LAB_00d72508;
      puVar8 = puVar7;
      if (0.0 < (float)*((byte *)GEN_TOP((local_c + 1 + (int)param_7)))) {
        uVar2 = puVar6[-7];
        uVar3 = puVar6[-6];
        uVar4 = puVar6[-5];
        *puVar7 = puVar6[-8];
        puVar7[1] = uVar2;
        puVar7[2] = uVar3;
        puVar7[3] = uVar4;
        uVar2 = puVar6[-3];
        uVar3 = puVar6[-2];
        uVar4 = puVar6[-1];
        puVar7[4] = puVar6[-4];
        puVar7[5] = uVar2;
        puVar7[6] = uVar3;
        puVar7[7] = uVar4;
        uVar2 = puVar6[1];
        uVar3 = puVar6[2];
        uVar4 = puVar6[3];
        puVar8 = puVar7 + 0xc;
        puVar7[8] = *puVar6;
        puVar7[9] = uVar2;
        puVar7[10] = uVar3;
        puVar7[0xb] = uVar4;
        iVar11 = iVar11 + 1;
      }
      if (param_3 <= iVar11) goto LAB_00d72508;
      puVar7 = puVar8;
      if (0.0 < (float)*((byte *)GEN_TOP((local_c + 2 + (int)param_7)))) {
        uVar2 = puVar6[5];
        uVar3 = puVar6[6];
        uVar4 = puVar6[7];
        *puVar8 = puVar6[4];
        puVar8[1] = uVar2;
        puVar8[2] = uVar3;
        puVar8[3] = uVar4;
        uVar2 = puVar6[9];
        uVar3 = puVar6[10];
        uVar4 = puVar6[0xb];
        puVar8[4] = puVar6[8];
        puVar8[5] = uVar2;
        puVar8[6] = uVar3;
        puVar8[7] = uVar4;
        uVar2 = puVar6[0xd];
        uVar3 = puVar6[0xe];
        uVar4 = puVar6[0xf];
        puVar7 = puVar8 + 0xc;
        puVar8[8] = puVar6[0xc];
        puVar8[9] = uVar2;
        puVar8[10] = uVar3;
        puVar8[0xb] = uVar4;
        iVar11 = iVar11 + 1;
      }
      if (param_3 <= iVar11) goto LAB_00d72508;
      puVar8 = puVar7;
      if (0.0 < (float)*((byte *)GEN_TOP((local_c + 3 + (int)param_7)))) {
        uVar2 = puVar6[0x11];
        uVar3 = puVar6[0x12];
        uVar4 = puVar6[0x13];
        *puVar7 = puVar6[0x10];
        puVar7[1] = uVar2;
        puVar7[2] = uVar3;
        puVar7[3] = uVar4;
        uVar2 = puVar6[0x15];
        uVar3 = puVar6[0x16];
        uVar4 = puVar6[0x17];
        puVar7[4] = puVar6[0x14];
        puVar7[5] = uVar2;
        puVar7[6] = uVar3;
        puVar7[7] = uVar4;
        uVar2 = puVar6[0x19];
        uVar3 = puVar6[0x1a];
        uVar4 = puVar6[0x1b];
        puVar8 = puVar7 + 0xc;
        puVar7[8] = puVar6[0x18];
        puVar7[9] = uVar2;
        puVar7[10] = uVar3;
        puVar7[0xb] = uVar4;
        iVar11 = iVar11 + 1;
      }
      param_7 = ((int *)GEN_TOP(((int)param_7 + 4)));
      puVar6 = puVar6 + 0x30;
    } while ((int)param_7 < iVar12 - 3);
  }
  if ((int)param_7 < iVar12) {
    local_1c = ((undefined4 *)GEN_TOP((local_18 + 0x20 + (int)((int)(uintptr_t)param_7) * 0x30)));
    do {
      if (param_3 <= iVar11) break;
      puVar6 = puVar8;
      if (0.0 < (float)*((byte *)GEN_TOP((local_c + (int)param_7)))) {
        uVar2 = local_1c[-7];
        uVar3 = local_1c[-6];
        uVar4 = local_1c[-5];
        *puVar8 = local_1c[-8];
        puVar8[1] = uVar2;
        puVar8[2] = uVar3;
        puVar8[3] = uVar4;
        uVar2 = local_1c[-3];
        uVar3 = local_1c[-2];
        uVar4 = local_1c[-1];
        puVar8[4] = local_1c[-4];
        puVar8[5] = uVar2;
        puVar8[6] = uVar3;
        puVar8[7] = uVar4;
        uVar2 = local_1c[1];
        uVar3 = local_1c[2];
        uVar4 = local_1c[3];
        puVar6 = puVar8 + 0xc;
        puVar8[8] = *local_1c;
        puVar8[9] = uVar2;
        puVar8[10] = uVar3;
        puVar8[0xb] = uVar4;
        iVar11 = iVar11 + 1;
      }
      param_7 = ((int *)GEN_TOP(((int)param_7 + 1)));
      local_1c = local_1c + 0xc;
      puVar8 = puVar6;
    } while ((int)param_7 < iVar12);
  }
LAB_00d72508: ;
  iVar11 = 0;
  iVar12 = 0;
  puVar8 = param_10;
  if (3 < iVar1) {
    puVar6 = ((undefined4 *)GEN_TOP((local_14 + 8)));
    do {
      if (param_4 <= iVar11) goto LAB_00d725fc;
      puVar7 = puVar8;
      if (0.0 < (float)*((byte *)GEN_TOP((local_8 + iVar12)))) {
        puVar7 = puVar8 + 1;
        *puVar8 = puVar6[-2];
        iVar11 = iVar11 + 1;
      }
      if (param_4 <= iVar11) goto LAB_00d725fc;
      puVar8 = puVar7;
      if (0.0 < (float)*((byte *)GEN_TOP((local_8 + 1 + iVar12)))) {
        puVar8 = puVar7 + 1;
        *puVar7 = puVar6[-1];
        iVar11 = iVar11 + 1;
      }
      if (param_4 <= iVar11) goto LAB_00d725fc;
      puVar7 = puVar8;
      if (0.0 < (float)*((byte *)GEN_TOP((local_8 + 2 + iVar12)))) {
        puVar7 = puVar8 + 1;
        *puVar8 = *puVar6;
        iVar11 = iVar11 + 1;
      }
      if (param_4 <= iVar11) goto LAB_00d725fc;
      puVar8 = puVar7;
      if (0.0 < (float)*((byte *)GEN_TOP((local_8 + 3 + iVar12)))) {
        puVar8 = puVar7 + 1;
        *puVar7 = puVar6[1];
        iVar11 = iVar11 + 1;
      }
      iVar12 = iVar12 + 4;
      puVar6 = puVar6 + 4;
    } while (iVar12 < iVar1 - 3);
  }
  while ((iVar12 < iVar1 && (iVar11 < param_4))) {
    puVar6 = puVar8;
    if (0.0 < (float)*((byte *)GEN_TOP((local_8 + iVar12)))) {
      puVar6 = puVar8 + 1;
      *puVar8 = *((undefined4 *)GEN_TOP((local_14 + iVar12 * 4)));
      iVar11 = iVar11 + 1;
    }
    iVar12 = iVar12 + 1;
    puVar8 = puVar6;
  }
LAB_00d725fc: ;
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if (((*((int *)GEN_TOP(((int)pvVar5 + 8))) < (int)uVar14) ||
      (uVar14 + local_8 != *((int *)GEN_TOP(((int)pvVar5 + 0xc))))) ||
     (*((uint *)GEN_TOP(((int)pvVar5 + 0x14))) == local_8)) {
    F_00d945c0(pvVar5 GEN_EDX_ARG,local_8,uVar14);
  }
  else {
    *((uint *)GEN_TOP(((int)pvVar5 + 0xc))) = local_8;
  }
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if (((*((int *)GEN_TOP(((int)pvVar5 + 8))) < (int)uVar10) ||
      (uVar10 + local_c != *((int *)GEN_TOP(((int)pvVar5 + 0xc))))) ||
     (*((uint *)GEN_TOP(((int)pvVar5 + 0x14))) == local_c)) {
    F_00d945c0(pvVar5 GEN_EDX_ARG,local_c,uVar10);
  }
  else {
    *((uint *)GEN_TOP(((int)pvVar5 + 0xc))) = local_c;
  }
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if (((*((int *)GEN_TOP(((int)pvVar5 + 8))) < (int)uVar9) || (uVar9 + local_14 != *((int *)GEN_TOP(((int)pvVar5 + 0xc))))
      ) || (*((uint *)GEN_TOP(((int)pvVar5 + 0x14))) == local_14)) {
    F_00d945c0(pvVar5 GEN_EDX_ARG,local_14,uVar9);
  }
  else {
    *((uint *)GEN_TOP(((int)pvVar5 + 0xc))) = local_14;
  }
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if ((((int)uVar13 <= *((int *)GEN_TOP(((int)pvVar5 + 8)))) &&
      (uVar13 + local_18 == *((int *)GEN_TOP(((int)pvVar5 + 0xc))))) &&
     (*((uint *)GEN_TOP(((int)pvVar5 + 0x14))) != local_18)) {
    *((uint *)GEN_TOP(((int)pvVar5 + 0xc))) = local_18;
    return (uint)pvVar5;
  }
  uVar13 = F_00d945c0(pvVar5 GEN_EDX_ARG,local_18,uVar13);
  return uVar13;
}

/* ref: hkaPredictiveCompressedAnimation::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d726e0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd726e0u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  LPVOID pvVar4;
  uint uVar5;
  undefined4 * puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 * puVar9;
  undefined4 * puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  float10 fVar15;
  float10 fVar16;
  float fVar17;
  uint local_30;
  ushort uStack_2c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  iVar13 = *((int *)GEN_TOP((param_1[0x23] + 0x28)));
  iVar14 = param_1[0x1f];
  if (iVar13 <= param_1[0x1f]) {
    iVar14 = iVar13;
  }
  iVar13 = *((int *)GEN_TOP((param_1[0x23] + 0x34)));
  local_8 = param_1[0x20];
  if (iVar13 <= param_1[0x20]) {
    local_8 = iVar13;
  }
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  local_18 = *((uint *)GEN_TOP(((int)pvVar4 + 0xc)));
  uVar7 = iVar14 * 0x30 + 0x7fU & 0xffffff80;
  if ((*((int *)GEN_TOP(((int)pvVar4 + 8))) < (int)uVar7) || (*((uint *)GEN_TOP(((int)pvVar4 + 0x10))) < uVar7 + local_18)
     ) {
    local_18 = F_00d94390(pvVar4 GEN_EDX_ARG,uVar7);
  }
  else {
    *((uint *)GEN_TOP(((int)pvVar4 + 0xc))) = uVar7 + local_18;
  }
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  local_10 = *((uint *)GEN_TOP(((int)pvVar4 + 0xc)));
  uVar11 = local_8 * 4 + 0x7fU & 0xffffff80;
  if ((*((int *)GEN_TOP(((int)pvVar4 + 8))) < (int)uVar11) ||
     (*((uint *)GEN_TOP(((int)pvVar4 + 0x10))) < uVar11 + local_10)) {
    local_10 = F_00d94390(pvVar4 GEN_EDX_ARG,uVar11);
  }
  else {
    *((uint *)GEN_TOP(((int)pvVar4 + 0xc))) = uVar11 + local_10;
  }
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  local_c = *((uint *)GEN_TOP(((int)pvVar4 + 0xc)));
  uVar8 = iVar14 + 0x7fU & 0xffffff80;
  if ((*((int *)GEN_TOP(((int)pvVar4 + 8))) < (int)uVar8) || (*((uint *)GEN_TOP(((int)pvVar4 + 0x10))) < uVar8 + local_c))
  {
    local_c = F_00d94390(pvVar4 GEN_EDX_ARG,uVar8);
  }
  else {
    *((uint *)GEN_TOP(((int)pvVar4 + 0xc))) = uVar8 + local_c;
  }
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  local_14 = *((uint *)GEN_TOP(((int)pvVar4 + 0xc)));
  uVar12 = local_8 + 0x7fU & 0xffffff80;
  if ((*((int *)GEN_TOP(((int)pvVar4 + 8))) < (int)uVar12) ||
     (*((uint *)GEN_TOP(((int)pvVar4 + 0x10))) < uVar12 + local_14)) {
    local_14 = F_00d94390(pvVar4 GEN_EDX_ARG,uVar12);
  }
  else {
    *((uint *)GEN_TOP(((int)pvVar4 + 0xc))) = uVar12 + local_14;
  }
  F_00da1030(local_c,0xff,iVar14);
  F_00da1030(local_14,0xff,local_8);
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x1c))))(param_1 GEN_EDX_ARG);
  fVar15 = (float10)(int)(uVar5 - 1);
  if ((int)(uVar5 - 1) < 0) {
    fVar15 = GEN_X87(fVar15 + (float10)*(float *)&REFG(undefined, 0x1088110));
  }
  fVar15 = GEN_X87(fVar15 * ((float10)param_2 / ((float10)GEN_TOD(gen_bits2f(param_1[3])))));
  uStack_2c = gen_x87_cw | 0xc00;
  uVar5 = uVar5 - 2;
  gen_set_x87_cw((unsigned short)uStack_2c);
  local_30 = (uint)(longlong)TRUNC(fVar15);
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  fVar17 = REFG(float, 0x1087f04);
  if (local_30 <= uVar5) {
    fVar16 = (float10)(int)local_30;
    if ((int)local_30 < 0) {
      fVar16 = GEN_X87(fVar16 + (float10)*(float *)&REFG(undefined, 0x1088110));
    }
    fVar15 = GEN_X87(fVar15 - fVar16);
    fVar17 = (float)fVar15;
    uVar5 = local_30;
    if (fVar15 < (float10)0) {
      fVar17 = 0.0;
    }
    else if (REFG(float, 0x1087f04) < fVar17) {
      fVar17 = REFG(float, 0x1087f04);
    }
  }
  F_00d6f800(param_1 GEN_EDX_ARG,uVar5,fVar17,0,*((undefined4 *)GEN_TOP((param_1[0x23] + 0x24))),
               *((undefined4 *)GEN_TOP((param_1[0x23] + 0x30))),iVar14,local_8,local_18,local_10,local_c,
               local_14);
  iVar13 = 0;
  if (0 < iVar14) {
    puVar6 = ((undefined4 *)GEN_TOP((local_18 + 0x20)));
    puVar10 = param_3;
    do {
      puVar9 = puVar10;
      if (*((char *)GEN_TOP((local_c + iVar13))) != '\0') {
        uVar1 = puVar6[-7];
        uVar2 = puVar6[-6];
        uVar3 = puVar6[-5];
        *puVar10 = puVar6[-8];
        puVar10[1] = uVar1;
        puVar10[2] = uVar2;
        puVar10[3] = uVar3;
        uVar1 = puVar6[-3];
        uVar2 = puVar6[-2];
        uVar3 = puVar6[-1];
        puVar10[4] = puVar6[-4];
        puVar10[5] = uVar1;
        puVar10[6] = uVar2;
        puVar10[7] = uVar3;
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        uVar3 = puVar6[3];
        puVar9 = puVar10 + 0xc;
        puVar10[8] = *puVar6;
        puVar10[9] = uVar1;
        puVar10[10] = uVar2;
        puVar10[0xb] = uVar3;
      }
      iVar13 = iVar13 + 1;
      puVar6 = puVar6 + 0xc;
      puVar10 = puVar9;
    } while (iVar13 < iVar14);
  }
  iVar13 = 0;
  puVar10 = param_4;
  if (3 < local_8) {
    puVar6 = ((undefined4 *)GEN_TOP((local_10 + 8)));
    do {
      puVar9 = puVar10;
      if (*((char *)GEN_TOP((local_14 + iVar13))) != '\0') {
        puVar9 = puVar10 + 1;
        *puVar10 = puVar6[-2];
      }
      puVar10 = puVar9;
      if (*((char *)GEN_TOP((local_14 + 1 + iVar13))) != '\0') {
        puVar10 = puVar9 + 1;
        *puVar9 = puVar6[-1];
      }
      puVar9 = puVar10;
      if (*((char *)GEN_TOP((local_14 + 2 + iVar13))) != '\0') {
        puVar9 = puVar10 + 1;
        *puVar10 = *puVar6;
      }
      puVar10 = puVar9;
      if (*((char *)GEN_TOP((local_14 + 3 + iVar13))) != '\0') {
        puVar10 = puVar9 + 1;
        *puVar9 = puVar6[1];
      }
      iVar13 = iVar13 + 4;
      puVar6 = puVar6 + 4;
    } while (iVar13 < local_8 - 3);
  }
  for (; iVar13 < local_8; iVar13 = iVar13 + 1) {
    puVar6 = puVar10;
    if (*((char *)GEN_TOP((local_14 + iVar13))) != '\0') {
      puVar6 = puVar10 + 1;
      *puVar10 = *((undefined4 *)GEN_TOP((local_10 + iVar13 * 4)));
    }
    puVar10 = puVar6;
  }
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if (((*((int *)GEN_TOP(((int)pvVar4 + 8))) < (int)uVar12) ||
      (uVar12 + local_14 != *((int *)GEN_TOP(((int)pvVar4 + 0xc))))) ||
     (*((uint *)GEN_TOP(((int)pvVar4 + 0x14))) == local_14)) {
    F_00d945c0(pvVar4 GEN_EDX_ARG,local_14,uVar12);
  }
  else {
    *((uint *)GEN_TOP(((int)pvVar4 + 0xc))) = local_14;
  }
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if (((*((int *)GEN_TOP(((int)pvVar4 + 8))) < (int)uVar8) || (uVar8 + local_c != *((int *)GEN_TOP(((int)pvVar4 + 0xc)))))
     || (*((uint *)GEN_TOP(((int)pvVar4 + 0x14))) == local_c)) {
    F_00d945c0(pvVar4 GEN_EDX_ARG,local_c,uVar8);
  }
  else {
    *((uint *)GEN_TOP(((int)pvVar4 + 0xc))) = local_c;
  }
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if (((*((int *)GEN_TOP(((int)pvVar4 + 8))) < (int)uVar11) ||
      (uVar11 + local_10 != *((int *)GEN_TOP(((int)pvVar4 + 0xc))))) ||
     (*((uint *)GEN_TOP(((int)pvVar4 + 0x14))) == local_10)) {
    F_00d945c0(pvVar4 GEN_EDX_ARG,local_10,uVar11);
  }
  else {
    *((uint *)GEN_TOP(((int)pvVar4 + 0xc))) = local_10;
  }
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if ((((int)uVar7 <= *((int *)GEN_TOP(((int)pvVar4 + 8)))) &&
      (uVar7 + local_18 == *((int *)GEN_TOP(((int)pvVar4 + 0xc))))) &&
     (*((uint *)GEN_TOP(((int)pvVar4 + 0x14))) != local_18)) {
    *((uint *)GEN_TOP(((int)pvVar4 + 0xc))) = local_18;
    return (uint)pvVar4;
  }
  uVar7 = F_00d945c0(pvVar4 GEN_EDX_ARG,local_18,uVar7);
  return uVar7;
}

/* ref: FUN_00d72ac0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d72ac0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0xd72ac0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  uint uVar1;
  float10 fVar2;
  float10 fVar3;
  float fVar4;
  uint local_c;
  ushort uStack_8;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x1c))))(param_1 GEN_EDX_FWD);
  fVar2 = (float10)(int)(uVar1 - 1);
  if ((int)(uVar1 - 1) < 0) {
    fVar2 = GEN_X87(fVar2 + (float10)*(float *)&REFG(undefined, 0x1088110));
  }
  fVar2 = GEN_X87(fVar2 * ((float10)param_4 / ((float10)GEN_TOD(gen_bits2f(param_1[3])))));
  uStack_8 = gen_x87_cw | 0xc00;
  uVar1 = uVar1 - 2;
  gen_set_x87_cw((unsigned short)uStack_8);
  local_c = (uint)(longlong)TRUNC(fVar2);
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  fVar4 = REFG(float, 0x1087f04);
  if (local_c <= uVar1) {
    fVar3 = (float10)(int)local_c;
    if ((int)local_c < 0) {
      fVar3 = GEN_X87(fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110));
    }
    fVar2 = GEN_X87(fVar2 - fVar3);
    fVar4 = (float)fVar2;
    uVar1 = local_c;
    if (fVar2 < (float10)0) {
      fVar4 = 0.0;
    }
    else if (REFG(float, 0x1087f04) < fVar4) {
      fVar4 = REFG(float, 0x1087f04);
    }
  }
  uVar1 = F_00d6f800(param_1 GEN_EDX_ARG,uVar1,fVar4,0,*((undefined4 *)GEN_TOP((param_1[0x23] + 0x24))),
                       *((undefined4 *)GEN_TOP((param_1[0x23] + 0x30))),param_1[0x1f],param_1[0x20],param_2,
                       param_3,0,0);
  return uVar1;
}

/* ref: FUN_00d72bf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d72bf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(gen_v16 * param_1, unsigned int gen_a1), GEN_P(gen_v16 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd72bf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(gen_v16 * param_1 = (gen_v16 *)(uintptr_t)gen_a1;)
  GEN_PIN(gen_v16 * param_2 = (gen_v16 *)(uintptr_t)gen_a2;)
  undefined1 auVar1 [16];
  
  gen_minps(&(auVar1), &(*param_1), &(*param_2));
  memcpy(&(*(gen_v16 *)this), &(auVar1), sizeof(auVar1) < sizeof(*(gen_v16 *)this) ? sizeof(auVar1) : sizeof(*(gen_v16 *)this));
  return (uint)param_1;
}

/* ref: FUN_00d72c10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d72c10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(gen_v16 * param_1, unsigned int gen_a1), GEN_P(gen_v16 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd72c10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(gen_v16 * param_1 = (gen_v16 *)(uintptr_t)gen_a1;)
  GEN_PIN(gen_v16 * param_2 = (gen_v16 *)(uintptr_t)gen_a2;)
  undefined1 auVar1 [16];
  
  gen_maxps(&(auVar1), &(*param_1), &(*param_2));
  memcpy(&(*(gen_v16 *)this), &(auVar1), sizeof(auVar1) < sizeof(*(gen_v16 *)this) ? sizeof(auVar1) : sizeof(*(gen_v16 *)this));
  return (uint)param_1;
}

/* ref: FUN_00d72c30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d72c30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd72c30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 << 5);
  return uVar1;
}

/* ref: FUN_00d72c50 */
GEN_LIB GEN_FRAME uint F_00d72c50(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd72c50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + param_1;
}

/* ref: FUN_00d72c60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d72c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd72c60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3;
  return param_3;
}

/* ref: FUN_00d72c90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d72c90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd72c90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3;
  return param_3;
}

/* ref: FUN_00d72cb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d72cb0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd72cb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = in_ecx[1];
  iVar2 = in_ecx[2];
  iVar3 = in_ecx[3];
  *param_2 = (float)*in_ecx;
  param_2[1] = (float)iVar1;
  param_2[2] = (float)iVar2;
  param_2[3] = (float)iVar3;
  return (uint)param_2;
}

/* ref: FUN_00d72cd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d72cd0(GEN_P(gen_v16 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(gen_v16 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd72cd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(gen_v16 * in_ecx = (gen_v16 *)(uintptr_t)gen_a0;)
  GEN_PIN(gen_v16 * param_2 = (gen_v16 *)(uintptr_t)gen_a1;)
  undefined1 auVar1 [16];
  undefined1 auVar2 [14];
  undefined1 auVar3 [14];
  undefined1 auVar4 [14];
  undefined1 auVar5 [16];
  
  memcpy(&(auVar1), &(*param_2), sizeof(*param_2) < sizeof(auVar1) ? sizeof(*param_2) : sizeof(auVar1));
  (*(undefined2 *)((char *)&auVar2 + 10)) = 0;
  gen_piece_set(&auVar2, 0, 10, (unsigned long long)(GEN_PIECE(&auVar1, 0, 10)));
  (*(undefined2 *)((char *)&auVar2 + 12)) = (*(undefined2 *)((char *)&auVar1 + 6));
  (*(undefined2 *)((char *)&auVar3 + 8)) = (*(undefined2 *)((char *)&auVar1 + 4));
  (*(undefined8 *)((char *)&auVar3 + 0)) = (*(undefined8 *)((char *)&auVar1 + 0));
  (*(undefined4 *)((char *)&auVar3 + 10)) = (*(undefined4 *)((char *)&auVar2 + 10));
  (*(undefined8 *)((char *)&auVar4 + 6)) = 0;
  gen_piece_set(&auVar4, 0, 6, (unsigned long long)(GEN_PIECE(&auVar3, 8, 6)));
  unsigned char gen_vx0[64];
  gen_vshift(gen_vx0, auVar4, 14, (int)(0x40), 0);
  (*(unsigned long long *)((unsigned char *)(auVar5) + 6)) = (longlong)((unsigned long long)gen_vbits(gen_vx0, 14, 48, 8));
  (*(undefined2 *)((char *)&auVar5 + 4)) = (*(undefined2 *)((char *)&auVar1 + 2));
  (*(undefined2 *)((char *)&auVar5 + 0)) = (*(undefined2 *)((char *)&auVar1 + 0));
  (*(undefined2 *)((char *)&auVar5 + 2)) = 0;
  (*(undefined2 *)((char *)&auVar5 + 14)) = 0;
  memcpy(&(*in_ecx), &(auVar5), sizeof(auVar5) < sizeof(*in_ecx) ? sizeof(auVar5) : sizeof(*in_ecx));
  return (uint)param_2;
}

/* ref: FUN_00d72cf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d72cf0(GEN_P(gen_v16 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd72cf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(gen_v16 * in_ecx = (gen_v16 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined1 auVar1 [16];
  
  (*(undefined2 *)((char *)&auVar1 + 2)) = 0;
  (*(undefined2 *)((char *)&auVar1 + 0)) = *((ushort *)GEN_TOP((param_2 + 8)));
  (*(undefined2 *)((char *)&auVar1 + 4)) = *((undefined2 *)GEN_TOP((param_2 + 10)));
  (*(undefined2 *)((char *)&auVar1 + 6)) = 0;
  (*(undefined2 *)((char *)&auVar1 + 8)) = *((undefined2 *)GEN_TOP((param_2 + 0xc)));
  (*(undefined2 *)((char *)&auVar1 + 10)) = 0;
  (*(undefined2 *)((char *)&auVar1 + 12)) = *((undefined2 *)GEN_TOP((param_2 + 0xe)));
  (*(undefined2 *)((char *)&auVar1 + 14)) = 0;
  memcpy(&(*in_ecx), &(auVar1), sizeof(auVar1) < sizeof(*in_ecx) ? sizeof(auVar1) : sizeof(*in_ecx));
  return param_2;
}

/* ref: FUN_00d72d10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d72d10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd72d10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar1 = *((undefined4 *)GEN_TOP((param_2 + 0xc)));
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = uVar2;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = uVar3;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00d72d30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d72d30(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd72d30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *in_ecx = *param_2 & 0x7fffffff;
  in_ecx[1] = uVar1 & 0x7fffffff;
  in_ecx[2] = uVar2 & 0x7fffffff;
  in_ecx[3] = uVar3 & 0x7fffffff;
  return (uint)param_2;
}

/* ref: FUN_00d72d50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d72d50(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd72d50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2[1];
  iVar2 = param_2[2];
  iVar3 = param_2[3];
  *in_ecx = *param_2 << 0x10;
  in_ecx[1] = iVar1 << 0x10;
  in_ecx[2] = iVar2 << 0x10;
  in_ecx[3] = iVar3 << 0x10;
  return (uint)param_2;
}

/* ref: FUN_00d72d70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d72d70(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd72d70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2[1];
  iVar2 = param_2[2];
  iVar3 = param_2[3];
  *in_ecx = *param_2 >> 0x10;
  in_ecx[1] = iVar1 >> 0x10;
  in_ecx[2] = iVar2 >> 0x10;
  in_ecx[3] = iVar3 >> 0x10;
  return (uint)param_2;
}

/* ref: FUN_00d72d90 */
GEN_LIB GEN_FRAME uint F_00d72d90(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd72d90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = (*(undefined4 *)((char *)&REFG(undefined8, 0x1138ae8) + 4));
  uVar2 = (undefined4)REFG(undefined8, 0x1138ae8);
  uVar1 = (*(undefined4 *)((char *)&REFG(undefined8, 0x1138ae0) + 4));
  *param_1 = (undefined4)REFG(undefined8, 0x1138ae0);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return (uint)param_1;
}

/* ref: FUN_00d72db0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d72db0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd72db0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((int *)GEN_TOP(((int)this + 0x34))) + *((int *)GEN_TOP(((int)this + param_1 * 4 + 0x40))) * 2;
}

/* ref: FUN_00d72dd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d72dd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd72dd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((int *)GEN_TOP(((int)this + 100))) + *((int *)GEN_TOP(((int)this + param_1 * 4 + 0x70))) * 4;
}

/* ref: FUN_00d72df0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d72df0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd72df0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP(((int)this + param_1 * 4 + 0x40)));
  if (param_1 == 8) {
    return (*((int *)GEN_TOP(((int)this + 0x38))) - 8) - iVar1;
  }
  return *((int *)GEN_TOP(((int)this + param_1 * 4 + 0x44))) - iVar1;
}

/* ref: FUN_00d72e40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d72e40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd72e40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x34))) + *((int *)GEN_TOP(((int)this + 0x40))) * 2;
  return CONCAT22(*((undefined2 *)GEN_TOP((iVar1 + 2 + param_1 * 4))),*((undefined2 *)GEN_TOP((iVar1 + param_1 * 4))));
}

/* ref: FUN_00d72e70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d72e70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd72e70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x34))) + *((int *)GEN_TOP(((int)this + 0x44))) * 2;
  return CONCAT22(*((undefined2 *)GEN_TOP((iVar1 + 2 + param_1 * 4))),*((undefined2 *)GEN_TOP((iVar1 + param_1 * 4))));
}

/* ref: FUN_00d72ea0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d72ea0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd72ea0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *in_ecx;
  fVar2 = in_ecx[1];
  fVar3 = in_ecx[2];
  *param_2 = (fVar2 + fVar1) + fVar3;
  param_2[1] = (fVar2 + fVar1) + fVar3;
  param_2[2] = (fVar2 + fVar1) + fVar3;
  param_2[3] = (fVar2 + fVar1) + fVar3;
  return (uint)param_2;
}

/* ref: FUN_00d72ed0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d72ed0(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd72ed0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *in_ecx = param_2;
  in_ecx[1] = 0x94;
  return param_2;
}

/* ref: FUN_00d72ef0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d72ef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd72ef0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  if (param_1[1] == 0) {
    *(undefined4 *)this = 0;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    return 0;
  }
  uVar1 = param_1[1] * 2;
  *(undefined4 *)this = *param_1;
  *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  return uVar1;
}

/* ref: FUN_00d72f20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d72f20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd72f20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  if (param_1[1] == 0) {
    *(undefined4 *)this = 0;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    return 0;
  }
  uVar1 = param_1[1] * 4;
  *(undefined4 *)this = *param_1;
  *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  return uVar1;
}

/* ref: FUN_00d72f50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d72f50(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd72f50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2;
}

/* ref: FUN_00d72f60 */
GEN_LIB GEN_FRAME unsigned int F_00d72f60(GEN_P(undefined8 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined8 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd72f60u, gen_a0, gen_a1, gen_a2, 0u);
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
        puVar1[2] = param_3[2];
        puVar1[3] = param_3[3];
      }
      puVar1 = puVar1 + 4;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00d72fb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d72fb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xd72fb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3;
  return param_3;
}

/* ref: FUN_00d72fd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d72fd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xd72fd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3;
  return param_3;
}

/* ref: FUN_00d73000 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d73000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xd73000u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3;
  return param_3;
}

/* ref: FUN_00d73040 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d73040(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(short * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd73040u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(short * param_2 = (short *)(uintptr_t)gen_a1;)
  short sVar1;
  short sVar2;
  short sVar3;
  
  sVar1 = param_2[1];
  sVar2 = param_2[2];
  sVar3 = param_2[3];
  *in_ecx = (int)*param_2;
  in_ecx[1] = (int)sVar1;
  in_ecx[2] = (int)sVar2;
  in_ecx[3] = (int)sVar3;
  return (uint)param_2;
}

/* ref: FUN_00d73070 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d73070(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd73070u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  short sVar1;
  short sVar2;
  short sVar3;
  
  sVar1 = *((short *)GEN_TOP((param_2 + 10)));
  sVar2 = *((short *)GEN_TOP((param_2 + 0xc)));
  sVar3 = *((short *)GEN_TOP((param_2 + 0xe)));
  *in_ecx = (int)*((short *)GEN_TOP((param_2 + 8)));
  in_ecx[1] = (int)sVar1;
  in_ecx[2] = (int)sVar2;
  in_ecx[3] = (int)sVar3;
  return param_2;
}

/* ref: FUN_00d730a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d730a0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd730a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *in_ecx;
  fVar2 = in_ecx[1];
  fVar3 = in_ecx[2];
  *param_2 = (fVar2 + fVar1) + fVar3;
  param_2[1] = (fVar2 + fVar1) + fVar3;
  param_2[2] = (fVar2 + fVar1) + fVar3;
  param_2[3] = (fVar2 + fVar1) + fVar3;
  return (uint)param_2;
}

/* ref: FUN_00d730d0 */
GEN_LIB GEN_FRAME uint F_00d730d0(GEN_P(float * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd730d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  
  fVar1 = ABS(*param_1);
  fVar2 = ABS(param_1[1]);
  fVar3 = ABS(param_1[2]);
  (*(undefined4 *)((char *)&auVar4 + 4)) = (undefined4)gen_fl2bits((*(float *)((char *)&REFG(float, 0x1138af0) + 4)) - ((fVar2 + fVar1) + fVar3));
  (*(undefined4 *)((char *)&auVar4 + 0)) = (undefined4)gen_fl2bits((float)REFG(float, 0x1138af0) - ((fVar2 + fVar1) + fVar3));
  (*(undefined4 *)((char *)&auVar4 + 8)) = (undefined4)gen_fl2bits((*(float *)((char *)&REFG(float, 0x1138af0) + 8)) - ((fVar2 + fVar1) + fVar3));
  (*(undefined4 *)((char *)&auVar4 + 12)) = (undefined4)gen_fl2bits((*(float *)((char *)&REFG(float, 0x1138af0) + 12)) - ((fVar2 + fVar1) + fVar3));
  gen_maxps(&(auVar4), &(*(gen_v16 *)&REFG(undefined8, 0x1138ae0)), &(auVar4));
  gen_minps(&(auVar4), &(*(gen_v16 *)&REFG(float, 0x1138af0)), &(auVar4));
  *param_1 = *param_1;
  param_1[1] = param_1[1];
  param_1[2] = param_1[2];
  param_1[3] = (*(float *)((char *)&auVar4 + 12));
  return (uint)param_1;
}

/* ref: FUN_00d73130 */
GEN_LIB GEN_FRAME uint F_00d73130(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(float * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd73130u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a3;)
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  
  fVar4 = ABS(*param_1);
  fVar5 = ABS(param_1[1]);
  fVar6 = ABS(param_1[2]);
  (*(undefined4 *)((char *)&auVar7 + 4)) = (undefined4)gen_fl2bits((*(float *)((char *)&REFG(float, 0x1138af0) + 4)) - ((fVar5 + fVar4) + fVar6));
  (*(undefined4 *)((char *)&auVar7 + 0)) = (undefined4)gen_fl2bits((float)REFG(float, 0x1138af0) - ((fVar5 + fVar4) + fVar6));
  (*(undefined4 *)((char *)&auVar7 + 8)) = (undefined4)gen_fl2bits((*(float *)((char *)&REFG(float, 0x1138af0) + 8)) - ((fVar5 + fVar4) + fVar6));
  (*(undefined4 *)((char *)&auVar7 + 12)) = (undefined4)gen_fl2bits((*(float *)((char *)&REFG(float, 0x1138af0) + 12)) - ((fVar5 + fVar4) + fVar6));
  gen_maxps(&(auVar7), &(*(gen_v16 *)&REFG(undefined8, 0x1138ae0)), &(auVar7));
  gen_minps(&(auVar7), &(*(gen_v16 *)&REFG(float, 0x1138af0)), &(auVar7));
  *param_1 = *param_1;
  param_1[1] = param_1[1];
  param_1[2] = param_1[2];
  param_1[3] = (*(float *)((char *)&auVar7 + 12));
  fVar4 = ABS(*param_2);
  fVar5 = ABS(param_2[1]);
  fVar6 = ABS(param_2[2]);
  (*(undefined4 *)((char *)&auVar1 + 4)) = (undefined4)gen_fl2bits((*(float *)((char *)&REFG(float, 0x1138af0) + 4)) - ((fVar5 + fVar4) + fVar6));
  (*(undefined4 *)((char *)&auVar1 + 0)) = (undefined4)gen_fl2bits((float)REFG(float, 0x1138af0) - ((fVar5 + fVar4) + fVar6));
  (*(undefined4 *)((char *)&auVar1 + 8)) = (undefined4)gen_fl2bits((*(float *)((char *)&REFG(float, 0x1138af0) + 8)) - ((fVar5 + fVar4) + fVar6));
  (*(undefined4 *)((char *)&auVar1 + 12)) = (undefined4)gen_fl2bits((*(float *)((char *)&REFG(float, 0x1138af0) + 12)) - ((fVar5 + fVar4) + fVar6));
  gen_maxps(&(auVar7), &(*(gen_v16 *)&REFG(undefined8, 0x1138ae0)), &(auVar1));
  gen_minps(&(auVar7), &(*(gen_v16 *)&REFG(float, 0x1138af0)), &(auVar7));
  *param_2 = *param_2;
  param_2[1] = param_2[1];
  param_2[2] = param_2[2];
  param_2[3] = (*(float *)((char *)&auVar7 + 12));
  fVar4 = ABS(*param_3);
  fVar5 = ABS(param_3[1]);
  fVar6 = ABS(param_3[2]);
  (*(undefined4 *)((char *)&auVar2 + 4)) = (undefined4)gen_fl2bits((*(float *)((char *)&REFG(float, 0x1138af0) + 4)) - ((fVar5 + fVar4) + fVar6));
  (*(undefined4 *)((char *)&auVar2 + 0)) = (undefined4)gen_fl2bits((float)REFG(float, 0x1138af0) - ((fVar5 + fVar4) + fVar6));
  (*(undefined4 *)((char *)&auVar2 + 8)) = (undefined4)gen_fl2bits((*(float *)((char *)&REFG(float, 0x1138af0) + 8)) - ((fVar5 + fVar4) + fVar6));
  (*(undefined4 *)((char *)&auVar2 + 12)) = (undefined4)gen_fl2bits((*(float *)((char *)&REFG(float, 0x1138af0) + 12)) - ((fVar5 + fVar4) + fVar6));
  gen_maxps(&(auVar7), &(*(gen_v16 *)&REFG(undefined8, 0x1138ae0)), &(auVar2));
  gen_minps(&(auVar7), &(*(gen_v16 *)&REFG(float, 0x1138af0)), &(auVar7));
  *param_3 = *param_3;
  param_3[1] = param_3[1];
  param_3[2] = param_3[2];
  param_3[3] = (*(float *)((char *)&auVar7 + 12));
  fVar4 = ABS(*param_4);
  fVar5 = ABS(param_4[1]);
  fVar6 = ABS(param_4[2]);
  (*(undefined4 *)((char *)&auVar3 + 4)) = (undefined4)gen_fl2bits((*(float *)((char *)&REFG(float, 0x1138af0) + 4)) - ((fVar5 + fVar4) + fVar6));
  (*(undefined4 *)((char *)&auVar3 + 0)) = (undefined4)gen_fl2bits((float)REFG(float, 0x1138af0) - ((fVar5 + fVar4) + fVar6));
  (*(undefined4 *)((char *)&auVar3 + 8)) = (undefined4)gen_fl2bits((*(float *)((char *)&REFG(float, 0x1138af0) + 8)) - ((fVar5 + fVar4) + fVar6));
  (*(undefined4 *)((char *)&auVar3 + 12)) = (undefined4)gen_fl2bits((*(float *)((char *)&REFG(float, 0x1138af0) + 12)) - ((fVar5 + fVar4) + fVar6));
  gen_maxps(&(auVar7), &(*(gen_v16 *)&REFG(undefined8, 0x1138ae0)), &(auVar3));
  gen_minps(&(auVar7), &(*(gen_v16 *)&REFG(float, 0x1138af0)), &(auVar7));
  *param_4 = *param_4;
  param_4[1] = param_4[1];
  param_4[2] = param_4[2];
  param_4[3] = (*(float *)((char *)&auVar7 + 12));
  return (uint)param_4;
}

/* ref: FUN_00d73290 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d73290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd73290u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x34))) + *((int *)GEN_TOP(((int)this + 0x44))) * 2;
  return CONCAT22(*((undefined2 *)GEN_TOP((iVar1 + 2 + (param_1 / 0xf) * 4))),
                  *((undefined2 *)GEN_TOP((iVar1 + (param_1 / 0xf) * 4))));
}

/* ref: FUN_00d732c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d732c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined8 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd732c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a2;)
  undefined8 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,0x20);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) * 0x20 + *(int *)this)));
  if (puVar1 != ((undefined8 *)GEN_TOP(0x0))) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    puVar1[2] = param_2[2];
    puVar1[3] = param_2[3];
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00d73320 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d73320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd73320u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3 | 0x80000000;
  return param_3 | 0x80000000;
}

/* ref: FUN_00d73340 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d73340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd73340u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3 | 0x80000000;
  return param_3 | 0x80000000;
}

/* ref: FUN_00d73360 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d73360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd73360u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 << 5);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d733a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d733a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd733a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3 | 0x80000000;
  return param_3 | 0x80000000;
}

/* ref: FUN_00d733c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d733c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined8 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd733c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a1;)
  undefined8 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,0x20);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) * 0x20 + *(int *)this)));
  if (puVar1 != ((undefined8 *)GEN_TOP(0x0))) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
    puVar1[2] = param_1[2];
    puVar1[3] = param_1[3];
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00d73420 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d73420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd73420u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined4 *)this;
  uVar2 = *((uint *)GEN_TOP(((int)this + 4))) >> 1;
  param_1[1] = uVar2;
  uVar2 = uVar2 | 0x80000000;
  *param_1 = uVar1;
  param_1[2] = uVar2;
  return uVar2;
}

/* ref: FUN_00d73440 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d73440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd73440u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined4 *)this;
  uVar2 = *((uint *)GEN_TOP(((int)this + 4))) >> 2;
  param_1[1] = uVar2;
  uVar2 = uVar2 | 0x80000000;
  *param_1 = uVar1;
  param_1[2] = uVar2;
  return uVar2;
}

/* ref: FUN_00d73460 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d73460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd73460u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 5);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d734a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d734a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd734a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 5);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d73540 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d73540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd73540u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  F_00d91540(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_1 + 1);
  return (uint)this;
}

/* ref: hkaAnimation::vf8 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d73560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd73560u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return 0;
}

/* ref: hkaAnimation::vf10 */
GEN_LIB GEN_NOFRAME uint F_00d73570(void)
{
  GEN_ENTER(0xd73570u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: hkaAnimation::vf11 */
GEN_LIB GEN_NOFRAME uint F_00d73580(void)
{
  GEN_ENTER(0xd73580u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: hkaAnimation::vf16 */
GEN_LIB GEN_NOFRAME byte F_00d73590(void)
{
  GEN_ENTER(0xd73590u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: hkaAnimation::vf17 */
GEN_LIB GEN_NOFRAME uint F_00d735a0(void)
{
  GEN_ENTER(0xd735a0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: hkaAnimation::vf18 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d735b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd735b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: hkaAnimation::vf14 */
GEN_LIB GEN_FRAME int GEN_THISCALL F_00d735c0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xd735c0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float * pfVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  
  fVar2 = param_2;
  fVar9 = param_2 + param_3;
  fVar10 = REFG(float, 0x1136e98);
  if (*((float *)GEN_TOP((param_1 + 0xc))) < fVar9) {
    fVar10 = fVar9 - *((float *)GEN_TOP((param_1 + 0xc)));
  }
  param_2 = *((float *)GEN_TOP((param_1 + 0x20)));
  iVar3 = 0;
  if (0 < (int)gen_fl2bits(param_2)) {
    iVar6 = *((int *)GEN_TOP((param_1 + 0x1c)));
    do {
      iVar7 = *((int *)GEN_TOP((iVar6 + 8)));
      iVar8 = 0;
      if (3 < iVar7) {
        pfVar5 = ((float *)GEN_TOP((*((int *)GEN_TOP((iVar6 + 4))) + 0x10)));
        iVar4 = (iVar7 - 4U >> 2) + 1;
        iVar8 = iVar4 * 4;
        do {
          fVar1 = pfVar5[-4];
          if (((fVar2 <= fVar1) && ((!GEN_ISNAN(fVar9) && !GEN_ISNAN(fVar1)) && !(fVar9 <= fVar1))) ||
             (fVar1 < fVar10)) {
            iVar3 = iVar3 + 1;
          }
          fVar1 = pfVar5[-2];
          if (((fVar2 <= fVar1) && ((!GEN_ISNAN(fVar9) && !GEN_ISNAN(fVar1)) && !(fVar9 <= fVar1))) ||
             (fVar1 < fVar10)) {
            iVar3 = iVar3 + 1;
          }
          fVar1 = *pfVar5;
          if (((fVar2 <= fVar1) && ((!GEN_ISNAN(fVar9) && !GEN_ISNAN(fVar1)) && !(fVar9 <= fVar1))) ||
             (fVar1 < fVar10)) {
            iVar3 = iVar3 + 1;
          }
          fVar1 = pfVar5[2];
          if (((fVar2 <= fVar1) && ((!GEN_ISNAN(fVar9) && !GEN_ISNAN(fVar1)) && !(fVar9 <= fVar1))) ||
             (fVar1 < fVar10)) {
            iVar3 = iVar3 + 1;
          }
          pfVar5 = pfVar5 + 8;
          iVar4 = iVar4 - 1;
        } while (iVar4 != 0);
      }
      if (iVar8 < iVar7) {
        pfVar5 = ((float *)GEN_TOP((*((int *)GEN_TOP((iVar6 + 4))) + iVar8 * 8)));
        iVar7 = iVar7 - iVar8;
        do {
          fVar1 = *pfVar5;
          if (((fVar2 <= fVar1) && ((!GEN_ISNAN(fVar9) && !GEN_ISNAN(fVar1)) && !(fVar9 <= fVar1))) ||
             (fVar1 < fVar10)) {
            iVar3 = iVar3 + 1;
          }
          pfVar5 = pfVar5 + 2;
          iVar7 = iVar7 - 1;
        } while (iVar7 != 0);
      }
      iVar6 = iVar6 + 0x10;
      param_2 = gen_bits2f((int)gen_fl2bits(param_2) - 1);
    } while (param_2 != 0.0);
  }
  return iVar3;
}

/* ref: hkaAnimation::vf15 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d736c0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd736c0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  unsigned int gen_args[4];
  memcpy(&gen_args[0], &gen_a1, sizeof gen_a1);
  memcpy(&gen_args[1], &gen_a2, sizeof gen_a2);
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 * puVar8;
  float fVar9;
  float fVar10;
  int local_c;
  
  uVar5 = 0;
  if ((*(uint *)&gen_args[3]) == 0) {
    return uVar5;
  }
  fVar9 = (*(float *)&gen_args[0]) + (*(float *)&gen_args[1]);
  fVar10 = REFG(float, 0x1136e98);
  if (*((float *)GEN_TOP((param_1 + 0xc))) < fVar9) {
    fVar10 = fVar9 - *((float *)GEN_TOP((param_1 + 0xc)));
  }
  iVar2 = *((int *)GEN_TOP((param_1 + 0x20)));
  uVar7 = 0;
  (*(float *)&gen_args[1]) = 0.0;
  if (0 < iVar2) {
    do {
      iVar6 = uVar5 * 0x10 + *((int *)GEN_TOP((param_1 + 0x1c)));
      iVar3 = *((int *)GEN_TOP((iVar6 + 8)));
      local_c = 0;
      if (0 < iVar3) {
        puVar8 = ((undefined4 *)GEN_TOP(((*(int *)&gen_args[2]) + 4 + uVar7 * 0xc)));
        do {
          fVar1 = *((float *)GEN_TOP((*((int *)GEN_TOP((iVar6 + 4))) + local_c * 8)));
          if ((((*(float *)&gen_args[0]) <= fVar1) && ((!GEN_ISNAN(fVar9) && !GEN_ISNAN(fVar1)) && !(fVar9 <= fVar1))) ||
             (fVar1 < fVar10)) {
            *(undefined2 *)(puVar8 - 1) = (*(undefined2 *)((char *)&(*(float *)&gen_args[1]) + 0));
            iVar4 = *((int *)GEN_TOP((iVar6 + 4)));
            *puVar8 = *((undefined4 *)GEN_TOP((iVar4 + local_c * 8)));
            F_00d91540(puVar8 + 1 GEN_EDX_FWD,iVar4 + local_c * 8 + 4);
            uVar7 = uVar7 + 1;
            puVar8 = puVar8 + 3;
            if (uVar7 == (*(uint *)&gen_args[3])) {
              return uVar7;
            }
          }
          local_c = local_c + 1;
        } while (local_c < iVar3);
      }
      (*(float *)&gen_args[1]) = gen_bits2f((int)gen_fl2bits((*(float *)&gen_args[1])) + 1);
      uVar5 = (uint)gen_fl2bits((*(float *)&gen_args[1])) & 0xffff;
    } while ((int)uVar5 < iVar2);
  }
  return uVar7;
}

/* ref: hkaAnimation::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d737c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xd737c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0x210, 0, 4);
  code * pcVar1;
  uint uVar2;
  
  F_00da0a80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)),0x200);
  F_00d9fe80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,((char *)REFP(0x1137748)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                    (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,3,0x54e32124,((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x113772c)),0x77);
  if (uVar2 != 0) {
    pcVar1 = ((code *)GEN_TOP(swi(3)));
    uVar2 = (*pcVar1)();
    return uVar2;
  }
  uVar2 = F_00d9fda0(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG);
  return uVar2;
}

/* ref: hkaAnimation::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d73820(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xd73820u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  LPVOID pvVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 * local_c;
  uint local_8;
  
  iVar7 = param_1[4];
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  local_8 = *((uint *)GEN_TOP(((int)pvVar4 + 0xc)));
  uVar8 = iVar7 * 0x30 + 0x7fU & 0xffffff80;
  if ((*((int *)GEN_TOP(((int)pvVar4 + 8))) < (int)uVar8) || (*((uint *)GEN_TOP(((int)pvVar4 + 0x10))) < local_8 + uVar8))
  {
    local_8 = F_00d94390(pvVar4 GEN_EDX_ARG,uVar8);
  }
  else {
    *((uint *)GEN_TOP(((int)pvVar4 + 0xc))) = local_8 + uVar8;
  }
  iVar7 = param_1[5];
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  local_c = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar4 + 0xc)));
  uVar9 = iVar7 * 4 + 0x7fU & 0xffffff80;
  if ((*((int *)GEN_TOP(((int)pvVar4 + 8))) < (int)uVar9) ||
     (*((uint *)GEN_TOP(((int)pvVar4 + 0x10))) < (int)local_c + uVar9)) {
    local_c = ((undefined4 *)GEN_TOP(F_00d94390(pvVar4 GEN_EDX_ARG,uVar9)));
  }
  else {
    *((uint *)GEN_TOP(((int)pvVar4 + 0xc))) = (int)local_c + uVar9;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xc))))(param_1 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),local_8,local_c);
  param_2 = gen_bits2f(param_3 * 3);
  if (0 < (int)gen_fl2bits(param_2)) {
    puVar6 = ((undefined4 *)GEN_TOP((local_8 + 0xc)));
    puVar5 = ((undefined4 *)GEN_TOP((param_4 + 8)));
    do {
      uVar1 = puVar6[-2];
      uVar2 = *((undefined4 *)GEN_TOP(((local_8 - param_4) + (int)puVar5)));
      uVar3 = *puVar6;
      puVar5[-2] = puVar6[-3];
      puVar5[-1] = uVar1;
      *puVar5 = uVar2;
      puVar5[1] = uVar3;
      puVar6 = puVar6 + 4;
      puVar5 = puVar5 + 4;
      param_2 = gen_bits2f((int)gen_fl2bits(param_2) - 1);
    } while (param_2 != 0.0);
  }
  if (0 < param_5) {
    puVar6 = local_c;
    iVar7 = param_5;
    do {
      *((undefined4 *)GEN_TOP(((param_6 - (int)local_c) + (int)puVar6))) = *puVar6;
      puVar6 = puVar6 + 1;
      iVar7 = iVar7 - 1;
    } while (iVar7 != 0);
  }
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if (((*((int *)GEN_TOP(((int)pvVar4 + 8))) < (int)uVar9) ||
      (uVar9 + (int)local_c != *((int *)GEN_TOP(((int)pvVar4 + 0xc))))) ||
     (*((undefined4 * PTR32 *)GEN_TOP(((int)pvVar4 + 0x14))) == local_c)) {
    F_00d945c0(pvVar4 GEN_EDX_ARG,local_c,uVar9);
  }
  else {
    *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar4 + 0xc))) = local_c;
  }
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if ((((int)uVar8 <= *((int *)GEN_TOP(((int)pvVar4 + 8)))) && (uVar8 + local_8 == *((int *)GEN_TOP(((int)pvVar4 + 0xc))))
      ) && (*((uint *)GEN_TOP(((int)pvVar4 + 0x14))) != local_8)) {
    *((uint *)GEN_TOP(((int)pvVar4 + 0xc))) = local_8;
    return (uint)pvVar4;
  }
  uVar8 = F_00d945c0(pvVar4 GEN_EDX_ARG,local_8,uVar8);
  return uVar8;
}

/* ref: FUN_00d739c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d739c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd739c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined * pvVar6;
  int * piVar7;
  int iVar8;
  int local_10;
  int local_8;
  
  iVar5 = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x11353cc));
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = *((undefined4 *)GEN_TOP((param_1 + 0x14)));
  if (*((undefined * PTR32 *)GEN_TOP((param_1 + 0x18))) != ((undefined *)GEN_TOP(0x0))) {
    F_00d919e0(*((undefined * PTR32 *)GEN_TOP((param_1 + 0x18))) GEN_EDX_FWD);
  }
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x18))) != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = *((undefined4 *)GEN_TOP((param_1 + 0x18)));
  iVar8 = *((int *)GEN_TOP(((int)this + 0x20)));
  iVar1 = *((int *)GEN_TOP((param_1 + 0x20)));
  local_8 = iVar8;
  if (iVar1 <= iVar8) {
    local_8 = iVar1;
  }
  uVar4 = *((uint *)GEN_TOP(((int)this + 0x24))) & 0x3fffffff;
  if ((int)uVar4 < iVar1) {
    iVar2 = uVar4 * 2;
    iVar3 = iVar1;
    if (iVar1 < iVar2) {
      iVar3 = iVar2;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),((int *)GEN_TOP(((int)this + 0x1c))),iVar3,0x10);
  }
  local_10 = (iVar8 - iVar1) - 1;
  if (-1 < local_10) {
    piVar7 = ((int *)GEN_TOP((iVar1 * 0x10 + *((int *)GEN_TOP(((int)this + 0x1c))) + 4 + local_10 * 0x10)));
    do {
      iVar8 = piVar7[1] - 1;
      if (-1 < iVar8) {
        pvVar6 = ((undefined *)GEN_TOP((*piVar7 + 4 + iVar8 * 8)));
        do {
          F_00d91510(pvVar6 GEN_EDX_ARG);
          pvVar6 = ((undefined *)GEN_TOP(((int)pvVar6 - 8)));
          iVar8 = iVar8 - 1;
        } while (-1 < iVar8);
      }
      iVar8 = piVar7[2];
      piVar7[1] = 0;
      if (-1 < iVar8) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*piVar7,iVar8 * 8);
      }
      *piVar7 = 0;
      piVar7[2] = ((int)0x80000000);
      F_00d91510(piVar7 - 1 GEN_EDX_ARG);
      local_10 = local_10 - 1;
      piVar7 = piVar7 - 4;
    } while (-1 < local_10);
  }
  pvVar6 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x1c)));
  if (0 < local_8) {
    iVar8 = *((int *)GEN_TOP((param_1 + 0x1c))) - (int)pvVar6;
    param_1 = local_8;
    do {
      F_00d73fe0(pvVar6 GEN_EDX_ARG,iVar8 + (int)pvVar6);
      pvVar6 = ((undefined *)GEN_TOP(((int)pvVar6 + 0x10)));
      param_1 = param_1 - 1;
    } while (param_1 != 0);
  }
  pvVar6 = ((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + local_8 * 0x10)));
  iVar8 = iVar1 - local_8;
  if (iVar8 < 1) {
    *((int *)GEN_TOP(((int)this + 0x20))) = iVar1;
    return (uint)this;
  }
  iVar5 = (*((int *)GEN_TOP((iVar5 + 0x1c))) + local_8 * 0x10) - (int)pvVar6;
  do {
    if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
      F_00d87850(pvVar6 GEN_EDX_ARG,iVar5 + (int)pvVar6);
    }
    pvVar6 = ((undefined *)GEN_TOP(((int)pvVar6 + 0x10)));
    iVar8 = iVar8 - 1;
  } while (iVar8 != 0);
  *((int *)GEN_TOP(((int)this + 0x20))) = iVar1;
  return (uint)this;
}

/* ref: FUN_00d73b90 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d73b90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd73b90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  if (((undefined *)GEN_TOP(*param_1)) != ((undefined *)GEN_TOP(0x0))) {
    F_00d919e0(((undefined *)GEN_TOP(*param_1)) GEN_EDX_FWD);
  }
  if (*(undefined * PTR32 *)this != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_ARG);
    *(undefined4 *)this = *param_1;
    return;
  }
  *(undefined4 *)this = *param_1;
  return;
}

/* ref: FUN_00d73bd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d73bd0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd73bd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00d73bf0 */
GEN_LIB GEN_FRAME unsigned int F_00d73bf0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd73bf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  undefined * this;
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_3) {
    this = ((undefined *)GEN_TOP((param_1 + 4)));
    do {
      *((undefined4 *)GEN_TOP(((int)this - 4))) = *((undefined4 *)GEN_TOP((param_2 + iVar1 * 8)));
      F_00d91540(this GEN_EDX_ARG,(param_2 - param_1) + (int)this);
      iVar1 = iVar1 + 1;
      this = ((undefined *)GEN_TOP(((int)this + 8)));
    } while (iVar1 < param_3);
  }
  return;
}

/* ref: FUN_00d73c40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d73c40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd73c40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  F_00d914e0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_1 + 1);
  return (uint)this;
}

/* ref: FUN_00d73c90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d73c90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd73c90u, gen_a0, gen_a1, gen_a2, 0u);
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
    bVar1 = F_00d95690(param_1,this,iVar3,0x10);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00d73cd0 */
GEN_LIB GEN_FRAME unsigned int F_00d73cd0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd73cd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  undefined * this;
  int iVar1;
  
  if (0 < param_2) {
    this = param_1;
    iVar1 = param_2;
    do {
      if (this != ((undefined *)GEN_TOP(0x0))) {
        F_00d87850(this GEN_EDX_ARG,(param_3 - (int)param_1) + (int)this);
      }
      this = ((undefined *)GEN_TOP(((int)this + 0x10)));
      iVar1 = iVar1 - 1;
    } while (iVar1 != 0);
  }
  return;
}

/* ref: FUN_00d73d00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d73d00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd73d00u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00d73d40 */
GEN_LIB GEN_FRAME unsigned int F_00d73d40(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd73d40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  
  if (0 < param_2) {
    iVar1 = param_2;
    puVar2 = param_1;
    do {
      if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar2 = *((undefined4 *)GEN_TOP(((param_3 - (int)param_1) + (int)puVar2)));
        F_00d914e0(puVar2 + 1 GEN_EDX_ARG,(param_3 - (int)param_1) + (int)(puVar2 + 1));
      }
      puVar2 = puVar2 + 2;
      iVar1 = iVar1 - 1;
    } while (iVar1 != 0);
  }
  return;
}

/* ref: FUN_00d73da0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d73da0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd73da0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  int iVar4;
  undefined * pvVar5;
  int iVar6;
  int iVar7;
  int local_8;
  
  iVar1 = param_2[1];
  iVar4 = *((int *)GEN_TOP(((int)this + 4)));
  local_8 = iVar4;
  if (iVar1 <= iVar4) {
    local_8 = iVar1;
  }
  uVar3 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar3 < iVar1) {
    iVar7 = uVar3 * 2;
    iVar6 = iVar1;
    if (iVar1 < iVar7) {
      iVar6 = iVar7;
    }
    F_00d95690(param_1,this,iVar6,8);
  }
  iVar4 = (iVar4 - iVar1) - 1;
  if (-1 < iVar4) {
    pvVar5 = ((undefined *)GEN_TOP((*(int *)this + iVar1 * 8 + 4 + iVar4 * 8)));
    do {
      F_00d91510(pvVar5 GEN_EDX_ARG);
      pvVar5 = ((undefined *)GEN_TOP(((int)pvVar5 - 8)));
      iVar4 = iVar4 - 1;
    } while (-1 < iVar4);
  }
  iVar4 = *param_2;
  iVar7 = *(int *)this;
  iVar6 = 0;
  if (0 < local_8) {
    pvVar5 = ((undefined *)GEN_TOP((iVar7 + 4)));
    do {
      *((undefined4 *)GEN_TOP(((int)pvVar5 - 4))) = *((undefined4 *)GEN_TOP((iVar4 + iVar6 * 8)));
      F_00d91540(pvVar5 GEN_EDX_ARG,(iVar4 - iVar7) + (int)pvVar5);
      iVar6 = iVar6 + 1;
      pvVar5 = ((undefined *)GEN_TOP(((int)pvVar5 + 8)));
    } while (iVar6 < local_8);
  }
  puVar2 = ((undefined4 *)GEN_TOP((*(int *)this + local_8 * 8)));
  iVar4 = iVar1 - local_8;
  if (iVar4 < 1) {
    *((int *)GEN_TOP(((int)this + 4))) = iVar1;
    return (uint)this;
  }
  iVar7 = (*param_2 + local_8 * 8) - (int)puVar2;
  do {
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar2 = *((undefined4 *)GEN_TOP((iVar7 + (int)puVar2)));
      F_00d914e0(puVar2 + 1 GEN_EDX_ARG,iVar7 + (int)(puVar2 + 1));
    }
    puVar2 = puVar2 + 2;
    iVar4 = iVar4 - 1;
  } while (iVar4 != 0);
  *((int *)GEN_TOP(((int)this + 4))) = iVar1;
  return (uint)this;
}

/* ref: FUN_00d73ec0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d73ec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd73ec0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  int iVar4;
  undefined * pvVar5;
  int iVar6;
  int iVar7;
  int local_8;
  
  iVar1 = param_1[1];
  iVar4 = *((int *)GEN_TOP(((int)this + 4)));
  local_8 = iVar4;
  if (iVar1 <= iVar4) {
    local_8 = iVar1;
  }
  uVar3 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar3 < iVar1) {
    iVar7 = uVar3 * 2;
    iVar6 = iVar1;
    if (iVar1 < iVar7) {
      iVar6 = iVar7;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar6,8);
  }
  iVar4 = (iVar4 - iVar1) - 1;
  if (-1 < iVar4) {
    pvVar5 = ((undefined *)GEN_TOP((*(int *)this + iVar1 * 8 + 4 + iVar4 * 8)));
    do {
      F_00d91510(pvVar5 GEN_EDX_ARG);
      pvVar5 = ((undefined *)GEN_TOP(((int)pvVar5 - 8)));
      iVar4 = iVar4 - 1;
    } while (-1 < iVar4);
  }
  iVar4 = *param_1;
  iVar7 = *(int *)this;
  iVar6 = 0;
  if (0 < local_8) {
    pvVar5 = ((undefined *)GEN_TOP((iVar7 + 4)));
    do {
      *((undefined4 *)GEN_TOP(((int)pvVar5 - 4))) = *((undefined4 *)GEN_TOP((iVar4 + iVar6 * 8)));
      F_00d91540(pvVar5 GEN_EDX_ARG,(iVar4 - iVar7) + (int)pvVar5);
      iVar6 = iVar6 + 1;
      pvVar5 = ((undefined *)GEN_TOP(((int)pvVar5 + 8)));
    } while (iVar6 < local_8);
  }
  puVar2 = ((undefined4 *)GEN_TOP((*(int *)this + local_8 * 8)));
  iVar4 = iVar1 - local_8;
  if (iVar4 < 1) {
    *((int *)GEN_TOP(((int)this + 4))) = iVar1;
    return (uint)this;
  }
  iVar7 = (*param_1 + local_8 * 8) - (int)puVar2;
  do {
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar2 = *((undefined4 *)GEN_TOP((iVar7 + (int)puVar2)));
      F_00d914e0(puVar2 + 1 GEN_EDX_ARG,iVar7 + (int)(puVar2 + 1));
    }
    puVar2 = puVar2 + 2;
    iVar4 = iVar4 - 1;
  } while (iVar4 != 0);
  *((int *)GEN_TOP(((int)this + 4))) = iVar1;
  return (uint)this;
}

/* ref: FUN_00d73fe0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d73fe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd73fe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined * pvVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_8;
  
  F_00d91540(this GEN_EDX_FWD,param_1);
  iVar5 = *((int *)GEN_TOP(((int)this + 8)));
  iVar1 = *((int *)GEN_TOP((param_1 + 8)));
  local_8 = iVar5;
  if (iVar1 <= iVar5) {
    local_8 = iVar1;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 0xc))) & 0x3fffffff;
  if ((int)uVar2 < iVar1) {
    iVar7 = uVar2 * 2;
    iVar6 = iVar1;
    if (iVar1 < iVar7) {
      iVar6 = iVar7;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 4,iVar6,8);
  }
  iVar5 = (iVar5 - iVar1) - 1;
  if (-1 < iVar5) {
    pvVar4 = ((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + iVar1 * 8 + 4 + iVar5 * 8)));
    do {
      F_00d91510(pvVar4 GEN_EDX_ARG);
      pvVar4 = ((undefined *)GEN_TOP(((int)pvVar4 - 8)));
      iVar5 = iVar5 - 1;
    } while (-1 < iVar5);
  }
  iVar5 = *((int *)GEN_TOP(((int)this + 4)));
  iVar7 = *((int *)GEN_TOP((param_1 + 4)));
  iVar6 = 0;
  if (0 < local_8) {
    pvVar4 = ((undefined *)GEN_TOP((iVar5 + 4)));
    do {
      *((undefined4 *)GEN_TOP(((int)pvVar4 - 4))) = *((undefined4 *)GEN_TOP((iVar7 + iVar6 * 8)));
      F_00d91540(pvVar4 GEN_EDX_ARG,(iVar7 - iVar5) + (int)pvVar4);
      iVar6 = iVar6 + 1;
      pvVar4 = ((undefined *)GEN_TOP(((int)pvVar4 + 8)));
    } while (iVar6 < local_8);
  }
  puVar3 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + local_8 * 8)));
  iVar5 = iVar1 - local_8;
  if (iVar5 < 1) {
    *((int *)GEN_TOP(((int)this + 8))) = iVar1;
    return (uint)this;
  }
  iVar7 = (*((int *)GEN_TOP((param_1 + 4))) + local_8 * 8) - (int)puVar3;
  do {
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar3 = *((undefined4 *)GEN_TOP((iVar7 + (int)puVar3)));
      F_00d914e0(puVar3 + 1 GEN_EDX_ARG,iVar7 + (int)(puVar3 + 1));
    }
    puVar3 = puVar3 + 2;
    iVar5 = iVar5 - 1;
  } while (iVar5 != 0);
  *((int *)GEN_TOP(((int)this + 8))) = iVar1;
  return (uint)this;
}

/* ref: FUN_00d74100 */
GEN_LIB GEN_FRAME unsigned int F_00d74100(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd74100u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int * piVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  int * piVar5;
  undefined * this;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_14;
  int local_10;
  undefined * local_8;
  
  if (0 < param_3) {
    local_10 = param_2;
    iVar6 = param_2 - param_1;
    piVar5 = ((int *)GEN_TOP((param_1 + 4)));
    local_14 = param_3;
    do {
      F_00d91540(piVar5 - 1 GEN_EDX_ARG,local_10);
      piVar1 = ((int *)GEN_TOP((iVar6 + 4 + (int)piVar5)));
      iVar7 = *((int *)GEN_TOP(((int)piVar1 + (param_1 - param_2))));
      iVar2 = *piVar1;
      param_3 = iVar7;
      if (iVar2 <= iVar7) {
        param_3 = iVar2;
      }
      if ((int)(piVar5[2] & 0x3fffffffU) < iVar2) {
        iVar3 = (piVar5[2] & 0x3fffffffU) * 2;
        if (iVar3 <= iVar2) {
          iVar3 = iVar2;
        }
        F_00d95690(&REFG(undefined * PTR32, 0x13516ac),piVar5,iVar3,8);
      }
      iVar7 = (iVar7 - iVar2) - 1;
      if (-1 < iVar7) {
        local_8 = ((undefined *)GEN_TOP((*piVar5 + iVar2 * 8 + 4 + iVar7 * 8)));
        do {
          F_00d91510(local_8 GEN_EDX_ARG);
          local_8 = ((undefined *)GEN_TOP(((int)local_8 - 8)));
          iVar7 = iVar7 - 1;
        } while (-1 < iVar7);
      }
      iVar7 = *((int *)GEN_TOP((iVar6 + (int)piVar5)));
      iVar3 = *piVar5;
      iVar8 = 0;
      if (0 < param_3) {
        this = ((undefined *)GEN_TOP((iVar3 + 4)));
        do {
          *((undefined4 *)GEN_TOP(((int)this - 4))) = *((undefined4 *)GEN_TOP((iVar7 + iVar8 * 8)));
          F_00d91540(this GEN_EDX_ARG,(iVar7 - iVar3) + (int)this);
          iVar8 = iVar8 + 1;
          this = ((undefined *)GEN_TOP(((int)this + 8)));
        } while (iVar8 < param_3);
      }
      iVar7 = param_3 * 8;
      puVar4 = ((undefined4 *)GEN_TOP((*piVar5 + iVar7)));
      param_3 = iVar2 - param_3;
      if (0 < param_3) {
        iVar7 = (*((int *)GEN_TOP((iVar6 + (int)piVar5))) + iVar7) - (int)puVar4;
        do {
          if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
            *puVar4 = *((undefined4 *)GEN_TOP((iVar7 + (int)puVar4)));
            F_00d914e0(puVar4 + 1 GEN_EDX_ARG,iVar7 + (int)(puVar4 + 1));
          }
          puVar4 = puVar4 + 2;
          param_3 = param_3 - 1;
        } while (param_3 != 0);
      }
      local_10 = local_10 + 0x10;
      piVar5[1] = iVar2;
      piVar5 = piVar5 + 4;
      local_14 = local_14 - 1;
    } while (local_14 != 0);
  }
  return;
}

/* ref: FUN_00d74250 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d74250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd74250u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  int iVar1;
  uint uVar2;
  undefined * pvVar3;
  int * piVar4;
  int iVar5;
  int iVar6;
  int local_8;
  
  iVar1 = param_2[1];
  iVar5 = *((int *)GEN_TOP(((int)this + 4)));
  local_8 = iVar5;
  if (iVar1 <= iVar5) {
    local_8 = iVar1;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < iVar1) {
    iVar6 = uVar2 * 2;
    if (iVar6 <= iVar1) {
      iVar6 = iVar1;
    }
    F_00d95690(param_1,this,iVar6,0x10);
  }
  param_1 = (iVar5 - iVar1) - 1;
  if (-1 < param_1) {
    piVar4 = ((int *)GEN_TOP((iVar1 * 0x10 + *(int *)this + 4 + param_1 * 0x10)));
    do {
      iVar5 = piVar4[1] - 1;
      if (-1 < iVar5) {
        pvVar3 = ((undefined *)GEN_TOP((*piVar4 + 4 + iVar5 * 8)));
        do {
          F_00d91510(pvVar3 GEN_EDX_ARG);
          pvVar3 = ((undefined *)GEN_TOP(((int)pvVar3 - 8)));
          iVar5 = iVar5 - 1;
        } while (-1 < iVar5);
      }
      iVar5 = piVar4[2];
      piVar4[1] = 0;
      if (-1 < iVar5) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*piVar4,iVar5 * 8);
      }
      *piVar4 = 0;
      piVar4[2] = ((int)0x80000000);
      F_00d91510(piVar4 - 1 GEN_EDX_ARG);
      param_1 = param_1 - 1;
      piVar4 = piVar4 - 4;
    } while (-1 < param_1);
  }
  pvVar3 = *(undefined * PTR32 *)this;
  if (0 < local_8) {
    iVar6 = *param_2 - (int)pvVar3;
    iVar5 = local_8;
    do {
      F_00d73fe0(pvVar3 GEN_EDX_ARG,iVar6 + (int)pvVar3);
      pvVar3 = ((undefined *)GEN_TOP(((int)pvVar3 + 0x10)));
      iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
  }
  pvVar3 = ((undefined *)GEN_TOP((*(int *)this + local_8 * 0x10)));
  iVar5 = iVar1 - local_8;
  if (iVar5 < 1) {
    *((int *)GEN_TOP(((int)this + 4))) = iVar1;
    return (uint)this;
  }
  iVar6 = (*param_2 + local_8 * 0x10) - (int)pvVar3;
  do {
    if (pvVar3 != ((undefined *)GEN_TOP(0x0))) {
      F_00d87850(pvVar3 GEN_EDX_ARG,iVar6 + (int)pvVar3);
    }
    pvVar3 = ((undefined *)GEN_TOP(((int)pvVar3 + 0x10)));
    iVar5 = iVar5 - 1;
  } while (iVar5 != 0);
  *((int *)GEN_TOP(((int)this + 4))) = iVar1;
  return (uint)this;
}

/* ref: FUN_00d743b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d743b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd743b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  uint uVar2;
  undefined * pvVar3;
  int * piVar4;
  int iVar5;
  int iVar6;
  int local_14;
  int local_8;
  
  iVar1 = param_1[1];
  iVar5 = *((int *)GEN_TOP(((int)this + 4)));
  local_8 = iVar5;
  if (iVar1 <= iVar5) {
    local_8 = iVar1;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < iVar1) {
    iVar6 = uVar2 * 2;
    if (iVar6 <= iVar1) {
      iVar6 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar6,0x10);
  }
  local_14 = (iVar5 - iVar1) - 1;
  if (-1 < local_14) {
    piVar4 = ((int *)GEN_TOP((iVar1 * 0x10 + *(int *)this + 4 + local_14 * 0x10)));
    do {
      iVar5 = piVar4[1] - 1;
      if (-1 < iVar5) {
        pvVar3 = ((undefined *)GEN_TOP((*piVar4 + 4 + iVar5 * 8)));
        do {
          F_00d91510(pvVar3 GEN_EDX_ARG);
          pvVar3 = ((undefined *)GEN_TOP(((int)pvVar3 - 8)));
          iVar5 = iVar5 - 1;
        } while (-1 < iVar5);
      }
      iVar5 = piVar4[2];
      piVar4[1] = 0;
      if (-1 < iVar5) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*piVar4,iVar5 * 8);
      }
      *piVar4 = 0;
      piVar4[2] = ((int)0x80000000);
      F_00d91510(piVar4 - 1 GEN_EDX_ARG);
      local_14 = local_14 - 1;
      piVar4 = piVar4 - 4;
    } while (-1 < local_14);
  }
  pvVar3 = *(undefined * PTR32 *)this;
  if (0 < local_8) {
    iVar6 = *param_1 - (int)pvVar3;
    iVar5 = local_8;
    do {
      F_00d73fe0(pvVar3 GEN_EDX_ARG,iVar6 + (int)pvVar3);
      pvVar3 = ((undefined *)GEN_TOP(((int)pvVar3 + 0x10)));
      iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
  }
  pvVar3 = ((undefined *)GEN_TOP((*(int *)this + local_8 * 0x10)));
  iVar5 = iVar1 - local_8;
  if (iVar5 < 1) {
    *((int *)GEN_TOP(((int)this + 4))) = iVar1;
    return (uint)this;
  }
  iVar6 = (*param_1 + local_8 * 0x10) - (int)pvVar3;
  do {
    if (pvVar3 != ((undefined *)GEN_TOP(0x0))) {
      F_00d87850(pvVar3 GEN_EDX_ARG,iVar6 + (int)pvVar3);
    }
    pvVar3 = ((undefined *)GEN_TOP(((int)pvVar3 + 0x10)));
    iVar5 = iVar5 - 1;
  } while (iVar5 != 0);
  *((int *)GEN_TOP(((int)this + 4))) = iVar1;
  return (uint)this;
}

/* ref: FUN_00d74510 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d74510(GEN_P(undefined2 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd74510u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined2 * in_ecx = (undefined2 *)(uintptr_t)gen_a0;)
  *in_ecx = 0x100;
  *(undefined1 *)(in_ecx + 1) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00d74590 */
GEN_LIB GEN_FRAME uint F_00d74590(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd74590u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  return (param_3 << 4 | param_2) * 4 | param_1;
}

/* ref: FUN_00d745b0 */
GEN_LIB GEN_FRAME byte F_00d745b0(GEN_P(byte param_1, unsigned int gen_a0), GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd745b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(byte param_1 = (byte)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  return param_2 * '\x02' | param_1;
}

/* ref: FUN_00d745d0 */
GEN_LIB GEN_FRAME uint F_00d745d0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd745d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x13512dc))[(int)(param_1)])))(param_2,param_3);
  return uVar1;
}

/* ref: FUN_00d745f0 */
GEN_LIB GEN_FRAME byte F_00d745f0(GEN_P(float param_1, float gen_a0), GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd745f0u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(float param_1 = (float)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  return (byte)(int)(((param_3 - param_1) / (param_2 - param_1)) * REFG(float, 0x10a0d8c));
}

/* ref: FUN_00d74620 */
GEN_LIB GEN_FRAME ushort F_00d74620(GEN_P(float param_1, float gen_a0), GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd74620u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(float param_1 = (float)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  return (ushort)(int)(((param_3 - param_1) / (param_2 - param_1)) * *(float *)&REFG(undefined, 0x11377e0));
}

/* ref: FUN_00d74650 */
GEN_LIB GEN_FRAME uint F_00d74650(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd74650u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x13512f4))[(int)(param_1)])))(param_2);
  return uVar1;
}

/* ref: FUN_00d74670 */
GEN_LIB GEN_FRAME unsigned int F_00d74670(GEN_P(byte param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(uint * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd74670u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(byte param_1 = (byte)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(uint * param_4 = (uint *)(uintptr_t)gen_a3;)
  uint uVar1;
  int iVar2;
  
  if (param_1 != 0) {
    uVar1 = (*param_4 - 1) + *(int *)(&REFG(undefined, 0x1137300) + param_3 * 4) &
            ~(*(int *)(&REFG(undefined, 0x1137300) + param_3 * 4) - 1U);
    *param_4 = uVar1;
    if ((param_1 & 0xf0) == 0) {
      F_00d74650(param_3,uVar1);
      *param_4 = *param_4 + *(int *)(&REFG(undefined, 0x1137318) + param_3 * 4);
    }
    else if (-1 < param_2) {
      iVar2 = param_2 + 1;
      do {
        F_00d74650(param_3,*param_4);
        *param_4 = *param_4 + *(int *)(&REFG(undefined, 0x1137318) + param_3 * 4);
        iVar2 = iVar2 - 1;
      } while (iVar2 != 0);
      return;
    }
  }
  return;
}

/* ref: FUN_00d74700 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d74700(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd74700u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10947f8)));
  in_ecx[3] = GEN_FLT_TO(in_ecx[3], REFG(float, 0x10947f8));
  in_ecx[2] = uVar1;
  in_ecx[1] = uVar1;
  *in_ecx = uVar1;
  in_ecx[5] = 0x30003;
  in_ecx[4] = 0x30003;
  in_ecx[6] = 0x1010101;
  return (uint)in_ecx;
}

/* ref: FUN_00d74740 */
GEN_LIB GEN_FRAME unsigned int F_00d74740(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(int * param_6, unsigned int gen_a5), GEN_P(int * param_7, unsigned int gen_a6), GEN_P(int * param_8, unsigned int gen_a7))
{
  GEN_ENTER(0xd74740u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(int * param_6 = (int *)(uintptr_t)gen_a5;)
  GEN_PIN(int * param_7 = (int *)(uintptr_t)gen_a6;)
  GEN_PIN(int * param_8 = (int *)(uintptr_t)gen_a7;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 * puVar6;
  int iVar7;
  int iVar8;
  
  if (0 < param_3) {
    iVar7 = 0;
    puVar6 = ((undefined4 *)GEN_TOP((param_1 + 8 + (param_2 * param_4 + param_5) * 0x30)));
    iVar8 = param_3;
    do {
      uVar3 = *puVar6;
      uVar4 = puVar6[-1];
      iVar7 = iVar7 + 0x10;
      puVar1 = ((undefined4 *)GEN_TOP((*param_6 - 0x10 + iVar7)));
      *puVar1 = puVar6[-2];
      puVar1[1] = uVar4;
      puVar1[2] = uVar3;
      puVar1[3] = 0;
      uVar3 = puVar6[3];
      uVar4 = puVar6[4];
      uVar5 = puVar6[5];
      puVar1 = ((undefined4 *)GEN_TOP((*param_7 - 0x10 + iVar7)));
      *puVar1 = puVar6[2];
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      puVar1 = puVar6 + 6;
      uVar3 = puVar6[7];
      uVar4 = puVar6[8];
      puVar6 = puVar6 + param_2 * 0xc;
      iVar8 = iVar8 - 1;
      puVar2 = ((undefined4 *)GEN_TOP((*param_8 - 0x10 + iVar7)));
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = 0;
    } while (iVar8 != 0);
  }
  return;
}

/* ref: FUN_00d747f0 */
GEN_LIB GEN_FRAME unsigned int F_00d747f0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(int * param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xd747f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(int * param_6 = (int *)(uintptr_t)gen_a5;)
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  int iVar4;
  int iVar5;
  
  if (0 < param_3) {
    iVar4 = 0;
    puVar3 = ((undefined4 *)GEN_TOP((param_1 + (param_2 * param_4 + param_5) * 4)));
    iVar5 = param_3;
    do {
      uVar2 = *puVar3;
      puVar3 = puVar3 + param_2;
      iVar4 = iVar4 + 0x10;
      iVar5 = iVar5 - 1;
      puVar1 = ((undefined4 *)GEN_TOP((*param_6 - 0x10 + iVar4)));
      *puVar1 = uVar2;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
    } while (iVar5 != 0);
  }
  return;
}

/* ref: FUN_00d74850 */
GEN_LIB GEN_NOFRAME byte F_00d74850(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xd74850u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  float * pfVar1;
  int iVar2;
  int iVar3;
  float * pfVar4;
  float fVar5;
  byte local_11;
  
  iVar3 = 0;
  local_11 = 0;
  pfVar4 = param_1;
  do {
    fVar5 = *pfVar4;
    pfVar1 = ((float *)GEN_TOP(((param_3 - (int)param_1) + (int)pfVar4)));
    if ((ABS(fVar5 - *((float *)GEN_TOP(((int)pfVar1 + (param_2 - param_3))))) <= param_4) &&
       (ABS(fVar5 - *pfVar1) <= param_4)) {
      fVar5 = ABS(fVar5 - *((float *)GEN_TOP(((param_5 - (int)param_1) + (int)pfVar4))));
      iVar2 = iVar3;
      if ((!(fVar5 <= param_4)) || (!(fVar5 <= param_4))) goto LAB_00d74917;
    }
    else {
      iVar2 = iVar3 + 4;
LAB_00d74917: ;
      local_11 = local_11 | '\x01' << GEN_SHC((byte)iVar2, (unsigned int)(uintptr_t)iVar2);
    }
    iVar3 = iVar3 + 1;
    pfVar4 = pfVar4 + 1;
    if (3 < iVar3) {
      return local_11;
    }
  } while( true );
}

/* ref: FUN_00d74940 */
GEN_LIB GEN_FRAME unsigned int F_00d74940(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd74940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  float fVar2;
  float * pfVar3;
  float * pfVar4;
  float * pfVar5;
  float * pfVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  iVar1 = param_2[1];
  *param_1 = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  if (0 < iVar1) {
    pfVar6 = ((float *)GEN_TOP(*param_2));
    fVar8 = *param_1;
    fVar9 = param_1[1];
    fVar10 = param_1[2];
    fVar11 = param_1[3];
    iVar7 = iVar1;
    do {
      fVar2 = *pfVar6;
      pfVar3 = pfVar6 + 1;
      pfVar4 = pfVar6 + 2;
      pfVar5 = pfVar6 + 3;
      pfVar6 = pfVar6 + 4;
      iVar7 = iVar7 - 1;
      fVar8 = fVar2 + fVar8;
      fVar9 = *pfVar3 + fVar9;
      fVar10 = *pfVar4 + fVar10;
      fVar11 = *pfVar5 + fVar11;
    } while (iVar7 != 0);
    *param_1 = fVar8;
    param_1[1] = fVar9;
    param_1[2] = fVar10;
    param_1[3] = fVar11;
  }
  fVar8 = REFG(float, 0x1087f04) / (float)iVar1;
  *param_1 = fVar8 * *param_1;
  param_1[1] = fVar8 * param_1[1];
  param_1[2] = fVar8 * param_1[2];
  param_1[3] = fVar8 * param_1[3];
  return 0;
}

/* ref: FUN_00d749a0 */
GEN_LIB GEN_FRAME uint F_00d749a0(GEN_P(gen_v16 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd749a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(gen_v16 * param_1 = (gen_v16 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  gen_v16 * pauVar1;
  int iVar2;
  undefined1 auVar3 [16];
  
  pauVar1 = ((gen_v16 *)GEN_TOP(*param_2));
  iVar2 = param_2[1];
  *((undefined8 *)GEN_TOP(*param_1)) = *((undefined8 *)GEN_TOP(*pauVar1));
  *((undefined8 *)GEN_TOP((*param_1 + 8))) = *((undefined8 *)GEN_TOP((*pauVar1 + 8)));
  if (1 < iVar2) {
    iVar2 = iVar2 - 1;
    do {
      pauVar1 = pauVar1 + 1;
      gen_minps(&(auVar3), &(*param_1), &(*pauVar1));
      iVar2 = iVar2 - 1;
      memcpy(&(*param_1), &(auVar3), sizeof(auVar3) < sizeof(*param_1) ? sizeof(auVar3) : sizeof(*param_1));
    } while (iVar2 != 0);
  }
  return (uint)param_1;
}

/* ref: FUN_00d749f0 */
GEN_LIB GEN_FRAME uint F_00d749f0(GEN_P(gen_v16 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd749f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(gen_v16 * param_1 = (gen_v16 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  gen_v16 * pauVar1;
  int iVar2;
  undefined1 auVar3 [16];
  
  pauVar1 = ((gen_v16 *)GEN_TOP(*param_2));
  iVar2 = param_2[1];
  *((undefined8 *)GEN_TOP(*param_1)) = *((undefined8 *)GEN_TOP(*pauVar1));
  *((undefined8 *)GEN_TOP((*param_1 + 8))) = *((undefined8 *)GEN_TOP((*pauVar1 + 8)));
  if (1 < iVar2) {
    iVar2 = iVar2 - 1;
    do {
      pauVar1 = pauVar1 + 1;
      gen_maxps(&(auVar3), &(*param_1), &(*pauVar1));
      iVar2 = iVar2 - 1;
      memcpy(&(*param_1), &(auVar3), sizeof(auVar3) < sizeof(*param_1) ? sizeof(auVar3) : sizeof(*param_1));
    } while (iVar2 != 0);
  }
  return (uint)param_1;
}

/* ref: FUN_00d74a40 */
GEN_LIB GEN_FRAME uint F_00d74a40(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd74a40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  undefined1 uVar1;
  undefined1 * puVar2;
  uint uVar3;
  
  if (param_1 == 1) {
    *param_2 = *param_2 + 1;
    return (uint)param_2;
  }
  if (param_1 == 2) {
    puVar2 = ((undefined1 *)GEN_TOP(*param_2));
    uVar1 = *puVar2;
    *puVar2 = puVar2[1];
    puVar2[1] = uVar1;
    *param_2 = *param_2 + 2;
    return (uint)puVar2;
  }
  if (param_1 == 4) {
    puVar2 = ((undefined1 *)GEN_TOP(*param_2));
    uVar1 = *puVar2;
    *puVar2 = puVar2[3];
    puVar2[3] = uVar1;
    uVar3 = *param_2;
    uVar1 = *((undefined1 *)GEN_TOP((uVar3 + 1)));
    *((undefined1 *)GEN_TOP((uVar3 + 1))) = *((undefined1 *)GEN_TOP((uVar3 + 2)));
    *((undefined1 *)GEN_TOP((uVar3 + 2))) = uVar1;
    *param_2 = *param_2 + 4;
    return uVar3;
  }
  *param_2 = *param_2 + param_1;
  return (uint)param_2;
}

/* ref: FUN_00d74ab0 */
GEN_LIB GEN_FRAME uint F_00d74ab0(GEN_P(byte param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd74ab0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(byte param_1 = (byte)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  ushort uVar1;
  byte * pbVar2;
  
  if ((param_1 & 0xf0) != 0) {
    F_00d74a40(2,param_2);
    pbVar2 = ((byte *)GEN_TOP(*param_2));
    uVar1 = *(ushort *)(pbVar2 - 2);
    *param_2 = (int)(pbVar2 + (uint)uVar1 + *pbVar2 + 3);
    return (uint)uVar1;
  }
  return 0xffffffff;
}

/* ref: FUN_00d74af0 */
GEN_LIB GEN_FRAME uint F_00d74af0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(uint * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd74af0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(uint * param_4 = (uint *)(uintptr_t)gen_a3;)
  uint uVar1;
  undefined4 in_EAX = 0;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint local_8;
  
  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),(byte)param_1);
  if ((byte)param_1 != 0) {
    uVar1 = (uint)(byte)param_1;
    iVar3 = 0;
    *param_4 = *param_4 + 3 & 0xfffffffc;
    uVar4 = 1;
    param_1 = 3;
    do {
      if ((uVar1 & (uVar4 << 4 | uVar4 >> 0x1c)) == 0) {
        uVar2 = uVar1;
        if ((uVar4 & uVar1) != 0) {
          uVar2 = F_00d74a40(4,param_4);
        }
      }
      else {
        F_00d74a40(4,param_4);
        uVar2 = F_00d74a40(4,param_4);
        iVar3 = iVar3 + 1;
      }
      uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
      param_1 = param_1 - 1;
    } while (param_1 != 0);
    if ((iVar3 != 0) && (uVar2 = param_2, -1 < (int)param_2)) {
      uVar2 = param_2 + 1;
      local_8 = uVar2;
      do {
        iVar5 = iVar3;
        if (0 < iVar3) {
          do {
            uVar2 = F_00d74a40((param_3 != 0) + 1,param_4);
            iVar5 = iVar5 - 1;
          } while (iVar5 != 0);
        }
        local_8 = local_8 - 1;
      } while (local_8 != 0);
    }
  }
  return uVar2;
}

/* ref: FUN_00d74ba0 */
GEN_LIB GEN_FRAME unsigned int F_00d74ba0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0xd74ba0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  int iVar1;
  float * pfVar2;
  float * pfVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  pfVar3 = ((float *)GEN_TOP(*param_2));
  iVar1 = 1;
  *pfVar3 = param_3;
  pfVar3[param_1] = param_4;
  if (1 < param_1) {
    if (3 < param_1 - 1) {
      fVar6 = (float)param_1;
      fVar5 = param_4 - param_3;
      iVar4 = 3;
      pfVar2 = pfVar3 + 3;
      do {
        pfVar2[-2] = ((float)iVar1 / fVar6) * fVar5 + param_3;
        pfVar2[-1] = ((float)(iVar4 - 1) / fVar6) * fVar5 + param_3;
        *pfVar2 = ((float)iVar4 / fVar6) * fVar5 + param_3;
        pfVar2[1] = ((float)(iVar4 + 1) / fVar6) * fVar5 + param_3;
        iVar1 = iVar1 + 4;
        pfVar2 = pfVar2 + 4;
        iVar4 = iVar4 + 4;
      } while (iVar1 < param_1 - 3);
    }
    if (iVar1 < param_1) {
      pfVar3 = pfVar3 + iVar1;
      do {
        *pfVar3 = ((float)iVar1 / (float)param_1) * (param_4 - param_3) + param_3;
        iVar1 = iVar1 + 1;
        pfVar3 = pfVar3 + 1;
      } while (iVar1 < param_1);
    }
  }
  return 0;
}

/* ref: FUN_00d74cb0 */
GEN_LIB GEN_FRAME unsigned int F_00d74cb0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(uint * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd74cb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  if ((char)param_1 != '\0') {
    uVar1 = F_00d74ab0((char)param_1,param_3);
    F_00d74af0(param_1,uVar1,param_2,param_3);
    *param_3 = *param_3 + 3 & 0xfffffffc;
  }
  return;
}

/* ref: FUN_00d74cf0 */
GEN_LIB GEN_FRAME unsigned int F_00d74cf0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(uint * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd74cf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  if ((char)param_1 != '\0') {
    uVar1 = F_00d74ab0((char)param_1,param_3);
    F_00d74670((char)param_1,uVar1,param_2,param_3);
    *param_3 = *param_3 + 3 & 0xfffffffc;
  }
  return;
}

/* ref: FUN_00d74d30 */
GEN_LIB GEN_FRAME uint F_00d74d30(GEN_P(undefined1 param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd74d30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 param_1 = (undefined1)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  
  if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_2,1);
  }
  iVar1 = *param_2;
  iVar2 = param_2[1];
  *((undefined1 *)GEN_TOP((iVar1 + iVar2))) = param_1;
  param_2[1] = param_2[1] + 1;
  return (uint)(iVar1 + iVar2);
}

/* ref: FUN_00d74d70 */
GEN_LIB GEN_FRAME unsigned int F_00d74d70(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd74d70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_2,1);
      }
      *((undefined1 *)GEN_TOP((param_2[1] + *param_2))) = 0;
      param_2[1] = param_2[1] + 1;
      iVar1 = iVar1 - 1;
    } while (iVar1 != 0);
  }
  return;
}

/* ref: FUN_00d74db0 */
GEN_LIB GEN_FRAME unsigned int F_00d74db0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd74db0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = param_2[1];
  while ((uVar1 & param_1 - 1U) != 0) {
    if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_2,1);
    }
    *((undefined1 *)GEN_TOP((*param_2 + param_2[1]))) = 0;
    param_2[1] = param_2[1] + 1;
    uVar1 = param_2[1];
  }
  return;
}

/* ref: FUN_00d74e00 */
GEN_LIB GEN_FRAME unsigned int F_00d74e00(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd74e00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = param_2[1] & *(uint *)(&REFG(undefined, 0x11377e4) + param_1 * 4);
  while (uVar1 != 0) {
    if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_2,1);
    }
    *((undefined1 *)GEN_TOP((*param_2 + param_2[1]))) = 0;
    param_2[1] = param_2[1] + 1;
    uVar1 = param_2[1] & *(uint *)(&REFG(undefined, 0x11377e4) + param_1 * 4);
  }
  return 0;
}

/* ref: FUN_00d74e60 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d74e60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd74e60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  byte bVar1;
  byte * pbVar2;
  int iVar3;
  
  if (*((int *)GEN_TOP(((int)this + 0x80))) != 0) {
    (*(int *)(gen_frame + 0x0)) = 0;
    if (0 < *((int *)GEN_TOP(((int)this + 0x2c)))) {
      do {
        pbVar2 = ((byte *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x44))) + (*(int *)(gen_frame + 0x0)) * 4))) +
                         *((int *)GEN_TOP(((int)this + 0x74))))));
        iVar3 = *((int *)GEN_TOP(((int)this + 0x10)));
        (*(byte * PTR32 *)(gen_frame + 0x8)) = pbVar2 + *((int *)GEN_TOP(((int)this + 0x34)));
        (*(int *)(gen_frame + 0x4)) = 0;
        if (0 < iVar3) {
          do {
            bVar1 = *pbVar2;
            F_00d74cb0((uint)pbVar2[1],bVar1 & 3,&(*(byte * PTR32 *)(gen_frame + 0x8)));
            F_00d74cf0((uint)pbVar2[2],bVar1 >> 2 & 0xf,&(*(byte * PTR32 *)(gen_frame + 0x8)));
            F_00d74cb0((uint)pbVar2[3],(uint)(bVar1 >> 6),&(*(byte * PTR32 *)(gen_frame + 0x8)));
            (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + 1;
            pbVar2 = pbVar2 + 4;
          } while ((*(int *)(gen_frame + 0x4)) < *((int *)GEN_TOP(((int)this + 0x10))));
        }
        iVar3 = 0;
        if (0 < *((int *)GEN_TOP(((int)this + 0x14)))) {
          do {
            bVar1 = *pbVar2;
            pbVar2 = pbVar2 + 1;
            F_00d74cb0((uint)(bVar1 & 0xf9),bVar1 >> 1 & 3,&(*(byte * PTR32 *)(gen_frame + 0x8)));
            iVar3 = iVar3 + 1;
          } while (iVar3 < *((int *)GEN_TOP(((int)this + 0x14))));
        }
        (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
      } while ((*(int *)(gen_frame + 0x0)) < *((int *)GEN_TOP(((int)this + 0x2c))));
    }
    *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0;
  }
  return;
}

/* ref: FUN_00d74f50 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d74f50(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(float * param_4, unsigned int gen_a3), GEN_P(uint param_5, unsigned int gen_a4), GEN_P(int * param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xd74f50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a3;)
  GEN_PIN(uint param_5 = (uint)gen_a4;)
  GEN_PIN(int * param_6 = (int *)(uintptr_t)gen_a5;)
  GEN_FRAME_DECL(0x50, 0);
  float * pfVar1;
  int iVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 in_EAX = 0;
  uint uVar8;
  int * piVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar17;
  float fVar18;
  undefined1 in_XMM3 [16] = {0};
  float fVar19;
  undefined1 auVar16 [16];
  
  uVar8 = CONCAT31((int3)((uint)in_EAX >> 8),param_2);
  (*(int *)(gen_frame + 0x34)) = param_1;
  if ((param_2 & 0xf0) == 0) {
    if ((param_2 & 0xf) != 0) {
      piVar9 = ((int *)GEN_TOP((param_1 + 0x74)));
      F_00d74e00(param_3,piVar9);
      fVar4 = *param_4;
      fVar5 = param_4[1];
      fVar6 = param_4[2];
      fVar7 = param_4[3];
      iVar10 = *(int *)(&REFG(undefined, 0x1137318) + param_3 * 4);
      fVar11 = fVar6 * fVar6 + fVar4 * fVar4;
      fVar12 = fVar7 * fVar7 + fVar5 * fVar5;
      fVar13 = fVar4 * fVar4 + fVar6 * fVar6;
      fVar14 = fVar5 * fVar5 + fVar7 * fVar7;
      fVar15 = fVar12 + fVar11;
      fVar11 = fVar11 + fVar12;
      fVar12 = fVar14 + fVar13;
      fVar13 = fVar13 + fVar14;
      (*(undefined4 *)((char *)&auVar16 + 4)) = (undefined4)gen_fl2bits(fVar11);
      (*(undefined4 *)((char *)&auVar16 + 0)) = (undefined4)gen_fl2bits(fVar15);
      (*(undefined4 *)((char *)&auVar16 + 8)) = (undefined4)gen_fl2bits(fVar12);
      (*(undefined4 *)((char *)&auVar16 + 12)) = (undefined4)gen_fl2bits(fVar13);
      gen_rsqrtps(&(auVar16), &(in_XMM3), &(auVar16));
      fVar14 = (*(float *)((char *)&auVar16 + 0));
      fVar17 = (*(float *)((char *)&auVar16 + 4));
      fVar18 = (*(float *)((char *)&auVar16 + 8));
      fVar19 = (*(float *)((char *)&auVar16 + 12));
      (*(int *)(gen_frame + 0x34)) = iVar10;
      (*(float *)(gen_frame + 0x0)) = ((*(float *)&REFG(undefined, 0x1137790) - (fVar14 * fVar15) * fVar14) *
                 (*(float *)&REFG(undefined, 0x11377a0) * fVar14)) * fVar4;
      (*(float *)(gen_frame + 0x4)) = ((*(float *)&REFG(undefined, 0x1137794) - (fVar17 * fVar11) * fVar17) *
                  (*(float *)&REFG(undefined, 0x11377a4) * fVar17)) * fVar5;
      (*(float *)(gen_frame + 0x8)) = ((*(float *)&REFG(undefined, 0x1137798) - (fVar18 * fVar12) * fVar18) *
                  (*(float *)&REFG(undefined, 0x11377a8) * fVar18)) * fVar6;
      (*(float *)(gen_frame + 0xc)) = ((*(float *)&REFG(undefined, 0x113779c) - (fVar19 * fVar13) * fVar19) *
                  (*(float *)&REFG(undefined, 0x11377ac) * fVar19)) * fVar7;
      F_00d74d70(iVar10,piVar9);
      uVar8 = F_00d745d0(param_3,&(*(float *)(gen_frame + 0x0)),(*((int *)GEN_TOP((param_1 + 0x78))) - (*(int *)(gen_frame + 0x34))) + *piVar9);
    }
  }
  else {
    piVar9 = ((int *)GEN_TOP((param_1 + 0x74)));
    F_00d74e00(param_3,piVar9);
    (*(int *)(gen_frame + 0x3c)) = *(int *)(&REFG(undefined, 0x1137318) + param_3 * 4);
    uVar8 = param_5;
    if (-1 < (int)param_5) {
      iVar10 = 0;
      (*(float *)(gen_frame + 0x20)) = *(float *)&REFG(undefined, 0x1137790);
      (*(float *)(gen_frame + 0x24)) = *(float *)&REFG(undefined, 0x1137794);
      (*(float *)(gen_frame + 0x28)) = *(float *)&REFG(undefined, 0x1137798);
      (*(float *)(gen_frame + 0x2c)) = *(float *)&REFG(undefined, 0x113779c);
      (*(float *)(gen_frame + 0x10)) = *(float *)&REFG(undefined, 0x11377a0);
      (*(float *)(gen_frame + 0x14)) = *(float *)&REFG(undefined, 0x11377a4);
      (*(float *)(gen_frame + 0x18)) = *(float *)&REFG(undefined, 0x11377a8);
      (*(float *)(gen_frame + 0x1c)) = *(float *)&REFG(undefined, 0x11377ac);
      (*(int *)(gen_frame + 0x38)) = param_5 + 1;
      do {
        pfVar1 = ((float *)GEN_TOP((*param_6 + iVar10)));
        fVar4 = *pfVar1;
        fVar5 = pfVar1[1];
        fVar6 = pfVar1[2];
        fVar7 = pfVar1[3];
        fVar11 = fVar6 * fVar6 + fVar4 * fVar4;
        fVar12 = fVar7 * fVar7 + fVar5 * fVar5;
        fVar13 = fVar4 * fVar4 + fVar6 * fVar6;
        fVar14 = fVar5 * fVar5 + fVar7 * fVar7;
        fVar15 = fVar12 + fVar11;
        fVar11 = fVar11 + fVar12;
        fVar12 = fVar14 + fVar13;
        fVar13 = fVar13 + fVar14;
        (*(undefined4 *)((char *)&auVar3 + 4)) = (undefined4)gen_fl2bits(fVar11);
        (*(undefined4 *)((char *)&auVar3 + 0)) = (undefined4)gen_fl2bits(fVar15);
        (*(undefined4 *)((char *)&auVar3 + 8)) = (undefined4)gen_fl2bits(fVar12);
        (*(undefined4 *)((char *)&auVar3 + 12)) = (undefined4)gen_fl2bits(fVar13);
        gen_rsqrtps(&(in_XMM3), &(in_XMM3), &(auVar3));
        fVar14 = (*(float *)((char *)&in_XMM3 + 0));
        fVar17 = (*(float *)((char *)&in_XMM3 + 4));
        fVar18 = (*(float *)((char *)&in_XMM3 + 8));
        fVar19 = (*(float *)((char *)&in_XMM3 + 12));
        (*(float *)(gen_frame + 0x0)) = (((*(float *)(gen_frame + 0x20)) - (fVar14 * fVar15) * fVar14) * ((*(float *)(gen_frame + 0x10)) * fVar14)) * fVar4;
        (*(float *)(gen_frame + 0x4)) = (((*(float *)(gen_frame + 0x24)) - (fVar17 * fVar11) * fVar17) * ((*(float *)(gen_frame + 0x14)) * fVar17)) * fVar5;
        (*(float *)(gen_frame + 0x8)) = (((*(float *)(gen_frame + 0x28)) - (fVar18 * fVar12) * fVar18) * ((*(float *)(gen_frame + 0x18)) * fVar18)) * fVar6;
        (*(float *)(gen_frame + 0xc)) = (((*(float *)(gen_frame + 0x2c)) - (fVar19 * fVar13) * fVar19) * ((*(float *)(gen_frame + 0x1c)) * fVar19)) * fVar7;
        F_00d74d70((*(int *)(gen_frame + 0x3c)),piVar9);
        uVar8 = F_00d745d0(param_3,&(*(float *)(gen_frame + 0x0)),(*((int *)GEN_TOP(((*(int *)(gen_frame + 0x34)) + 0x78))) - (*(int *)(gen_frame + 0x3c))) + *piVar9);
        iVar10 = iVar10 + 0x10;
        iVar2 = (*(int *)(gen_frame + 0x38)) - 1;
        (*(int *)(gen_frame + 0x38)) = iVar2;
      } while (iVar2 != 0);
      return uVar8;
    }
  }
  return uVar8;
}

/* ref: FUN_00d750e0 */
GEN_LIB GEN_FRAME uint F_00d750e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd750e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  F_00d74d70(2,param_2);
  uVar1 = param_2[1];
  *((undefined2 *)GEN_TOP(((uVar1 - 2) + *param_2))) = (undefined2)param_1;
  return uVar1;
}

/* ref: FUN_00d75110 */
GEN_LIB GEN_FRAME uint F_00d75110(GEN_P(float param_1, float gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd75110u, gen_trace_f(gen_a0), gen_a1, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  F_00d74d70(4,param_2);
  uVar1 = param_2[1];
  *((float *)GEN_TOP(((uVar1 - 4) + *param_2))) = param_1;
  return uVar1;
}

/* ref: FUN_00d75140 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d75140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3), GEN_P(float * param_4, unsigned int gen_a4), GEN_P(float * param_5, unsigned int gen_a5), GEN_P(int param_6, unsigned int gen_a6), GEN_P(int * param_7, unsigned int gen_a7))
{
  GEN_ENTER(0xd75140u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a4;)
  GEN_PIN(float * param_5 = (float *)(uintptr_t)gen_a5;)
  GEN_PIN(int param_6 = (int)gen_a6;)
  GEN_PIN(int * param_7 = (int *)(uintptr_t)gen_a7;)
  int iVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  float * pfVar8;
  float fVar9;
  int iVar10;
  
  iVar1 = (int)this + 0x74;
  F_00d74db0(4,iVar1);
  uVar5 = param_1 & 0xff;
  iVar6 = param_3 - (int)param_5;
  uVar7 = 1;
  param_3 = 3;
  pfVar8 = param_5;
  do {
    if ((uVar5 & (uVar7 << 4 | uVar7 >> 0x1c)) == 0) {
      uVar4 = (int)param_4 - (int)param_5;
      if ((uVar7 & uVar5) != 0) {
        fVar9 = *((float *)GEN_TOP((iVar6 + (int)pfVar8)));
        goto LAB_00d751b5;
      }
    }
    else {
      F_00d75110(GEN_ARGF(*((float *)GEN_TOP((((int)param_4 - (int)param_5) + (int)pfVar8)))),iVar1);
      fVar9 = *pfVar8;
LAB_00d751b5: ;
      uVar4 = F_00d75110(fVar9,iVar1);
    }
    pfVar8 = pfVar8 + 1;
    uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
    param_3 = param_3 - 1;
    if (param_3 == 0) {
      if ((param_1 & 0xf0) != 0) {
        uVar4 = 0;
        param_3 = 0;
        if (-1 < param_6) {
          do {
            iVar6 = 0;
            param_1 = 1;
            pfVar8 = param_4;
            do {
              if ((uVar5 & (param_1 << 4 | param_1 >> 0x1c)) != 0) {
                if (param_2 == 0) {
                  iVar10 = iVar1;
                  bVar2 = F_00d745f0(*pfVar8,GEN_ARGF(*((float *)GEN_TOP((((int)param_5 - (int)param_4) +
                                                         (int)pfVar8)))),GEN_ARGF(*((float *)GEN_TOP((*param_7 + (iVar6 + param_3 * 4) * 4)))),iVar1);
                  F_00d74d30(bVar2,iVar10);
                }
                else {
                  iVar10 = iVar1;
                  uVar3 = F_00d74620(*pfVar8,GEN_ARGF(*((float *)GEN_TOP((((int)param_5 - (int)param_4) +
                                                         (int)pfVar8)))),GEN_ARGF(*((float *)GEN_TOP((*param_7 + (iVar6 + param_3 * 4) * 4)))),iVar1);
                  F_00d750e0((uint)uVar3,iVar10);
                }
              }
              iVar6 = iVar6 + 1;
              pfVar8 = pfVar8 + 1;
              param_1 = param_1 << 1 | (uint)((int)param_1 < 0);
            } while (iVar6 < 3);
            uVar4 = param_3 + 1;
            param_3 = uVar4;
          } while ((int)uVar4 <= param_6);
        }
      }
      return uVar4;
    }
  } while( true );
}

/* ref: FUN_00d752d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d752d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd752d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  int * piVar1;
  int iVar2;
  undefined1 * puVar3;
  int iVar4;
  float fVar5;
  
  piVar1 = ((int *)GEN_TOP(((int)this + 0x74)));
  iVar2 = param_1 + 1 + param_2;
  F_00d750e0(param_1,piVar1);
  puVar3 = ((undefined1 *)GEN_TOP(F_00d74d30((char)param_2,piVar1)));
  iVar4 = 0;
  if (-1 < iVar2) {
    do {
      fVar5 = (*((float *)GEN_TOP((*param_3 + iVar4 * 4))) / *((float *)GEN_TOP(((int)this + 0xc)))) *
              ((float)GEN_TOF((*((int *)GEN_TOP(((int)this + 0x28))) - 1))) + REFG(float, 0x1088068);
      if (*((uint *)GEN_TOP(((int)this + 0x78))) == (*((uint *)GEN_TOP(((int)this + 0x7c))) & 0x3fffffff)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar1,1);
      }
      puVar3 = ((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x78))) + *piVar1)));
      *puVar3 = (char)(int)fVar5;
      *((int *)GEN_TOP(((int)this + 0x78))) = *((int *)GEN_TOP(((int)this + 0x78))) + 1;
      iVar4 = iVar4 + 1;
    } while (iVar4 <= iVar2);
  }
  return (uint)puVar3;
}

/* ref: FUN_00d75370 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d75370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(ushort * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd75370u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(ushort * param_3 = (ushort *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL(0x3a0, 0);
  int * piVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 * puVar11;
  undefined * pvVar12;
  int iVar13;
  int * piVar14;
  int iVar15;
  float * pfVar16;
  uint * puVar17;
  float10 fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar26;
  float fVar27;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar28;
  char * pcVar29;
  char * pcVar30;
  undefined * puVar31;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 3;
  *((uint *)GEN_TOP(((int)this + 0x30))) = (uint)*param_3;
  (*(char *)(gen_frame + 0x36a)) = (char)param_3[1];
  (*(int * PTR32 *)(gen_frame + 0x38c)) = this;
  uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x1c))))(param_1 GEN_EDX_FWD);
  iVar15 = *((int *)GEN_TOP(((int)this + 0x30))) - 1;
  iVar8 = (int)(*((int *)GEN_TOP(((int)this + 0x30))) - 3 + uVar7) / iVar15;
  *((uint *)GEN_TOP(((int)this + 0x28))) = uVar7;
  if (iVar8 < 1) {
    iVar8 = 1;
  }
  iVar9 = *((int *)GEN_TOP(((int)this + 0x10)));
  fVar19 = *((float *)GEN_TOP(((int)this + 0xc))) / (float)(int)(uVar7 - 1);
  iVar13 = *((int *)GEN_TOP(((int)this + 0x14)));
  fVar21 = (float)iVar15 * fVar19;
  fVar23 = REFG(float, 0x1087f04) / fVar21;
  *((int *)GEN_TOP(((int)this + 0x2c))) = iVar8;
  *((float *)GEN_TOP(((int)this + 0x38))) = fVar21;
  *((float *)GEN_TOP(((int)this + 0x3c))) = fVar23;
  *((float *)GEN_TOP(((int)this + 0x40))) = fVar19;
  (*(int *)(gen_frame + 0x350)) = 0;
  *((uint *)GEN_TOP(((int)this + 0x34))) = iVar13 + 3 + iVar9 * 4 & 0xfffffffc;
  (*(int *)(gen_frame + 0x344)) = 0;
  if (0 < iVar8) {
    do {
      piVar14 = (*(int * PTR32 *)(gen_frame + 0x38c));
      piVar1 = (*(int * PTR32 *)(gen_frame + 0x38c)) + 0x11;
      (*(int * PTR32 *)(gen_frame + 0x360)) = ((int *)GEN_TOP((*(int * PTR32 *)(gen_frame + 0x38c))[0x1e]));
      if ((*(int * PTR32 *)(gen_frame + 0x38c))[0x12] == ((*(int * PTR32 *)(gen_frame + 0x38c))[0x13] & 0x3fffffffU)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar1,4);
      }
      *((int * PTR32 *)GEN_TOP((*piVar1 + piVar14[0x12] * 4))) = (*(int * PTR32 *)(gen_frame + 0x360));
      piVar14[0x12] = piVar14[0x12] + 1;
      iVar15 = piVar14[0xc];
      (*(int *)(gen_frame + 0x370)) = piVar14[10] - (*(int *)(gen_frame + 0x350));
      if (iVar15 < (*(int *)(gen_frame + 0x370))) {
        (*(int *)(gen_frame + 0x370)) = iVar15;
      }
      else {
      }
      (*(float *)(gen_frame + 0x334)) = (gen_bits2f(piVar14[3]) / (float)(piVar14[10] - 1)) * (float)((*(int *)(gen_frame + 0x370)) - 1);
      (*(int *)(gen_frame + 0x348)) = piVar14[0x1e];
      F_00d74d70(piVar14[0xd],piVar14 + 0x1d);
      (*(int *)(gen_frame + 0x384)) = 0;
      do {
        piVar1 = (*(int * PTR32 *)(gen_frame + 0x38c));
        if ((*(int *)(gen_frame + 0x384)) == 0) {
          (*(int *)(gen_frame + 0x32c)) = (*(int * PTR32 *)(gen_frame + 0x38c))[4];
        }
        else {
          (*(int *)(gen_frame + 0x32c)) = (*(int * PTR32 *)(gen_frame + 0x38c))[5];
        }
        (*(int *)(gen_frame + 0x328)) = (uint)((*(int *)(gen_frame + 0x384)) == 0) * 2 + 1;
        if ((*(int *)(gen_frame + 0x384)) == 1) {
          iVar15 = (*(int * PTR32 *)(gen_frame + 0x38c))[0x1e];
          iVar8 = *((int *)GEN_TOP(((*(int * PTR32 *)(gen_frame + 0x38c))[0x11] + (*(int *)(gen_frame + 0x344)) * 4)));
          piVar14 = (*(int * PTR32 *)(gen_frame + 0x38c)) + 0x14;
          if ((*(int * PTR32 *)(gen_frame + 0x38c))[0x15] == ((*(int * PTR32 *)(gen_frame + 0x38c))[0x16] & 0x3fffffffU)) {
            F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar14,4);
          }
          *((int *)GEN_TOP((*piVar14 + piVar1[0x15] * 4))) = iVar15 - iVar8;
          piVar1 = piVar1 + 0x15;
          *piVar1 = *piVar1 + 1;
        }
        (*(int *)(gen_frame + 0x364)) = 0;
        if (0 < (*(int *)(gen_frame + 0x32c))) {
          do {
            piVar1 = (*(int * PTR32 *)(gen_frame + 0x38c));
            if ((*(char *)(gen_frame + 0x36a)) == '\0') {
LAB_00d755d0: ;
              if ((*(int *)(gen_frame + 0x384)) == 0) {
                iVar15 = param_2[3];
              }
              else {
                iVar15 = param_2[6];
              }
            }
            else {
              iVar15 = (*(int * PTR32 *)(gen_frame + 0x38c))[0x1e];
              if ((*(int *)(gen_frame + 0x384)) != 0) {
                iVar8 = *((int *)GEN_TOP(((*(int * PTR32 *)(gen_frame + 0x38c))[0x11] + (*(int *)(gen_frame + 0x344)) * 4)));
                piVar14 = (*(int * PTR32 *)(gen_frame + 0x38c)) + 0x1a;
                if ((*(int * PTR32 *)(gen_frame + 0x38c))[0x1b] == ((*(int * PTR32 *)(gen_frame + 0x38c))[0x1c] & 0x3fffffffU)) {
                  F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar14,4);
                }
                *((int *)GEN_TOP((*piVar14 + piVar1[0x1b] * 4))) = iVar15 - iVar8;
                piVar1[0x1b] = piVar1[0x1b] + 1;
                goto LAB_00d755d0;
              }
              iVar8 = *((int *)GEN_TOP(((*(int * PTR32 *)(gen_frame + 0x38c))[0x11] + (*(int *)(gen_frame + 0x344)) * 4)));
              piVar14 = (*(int * PTR32 *)(gen_frame + 0x38c)) + 0x17;
              if ((*(int * PTR32 *)(gen_frame + 0x38c))[0x18] == ((*(int * PTR32 *)(gen_frame + 0x38c))[0x19] & 0x3fffffffU)) {
                F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar14,4);
              }
              *((int *)GEN_TOP((*piVar14 + piVar1[0x18] * 4))) = iVar15 - iVar8;
              piVar1[0x18] = piVar1[0x18] + 1;
              iVar15 = param_2[3];
            }
            iVar8 = (*(int *)(gen_frame + 0x370));
            (*(undefined4 * PTR32 *)(gen_frame + 0x380)) = ((undefined4 *)GEN_TOP((*param_2 + *((int *)GEN_TOP((iVar15 + (*(int *)(gen_frame + 0x364)) * 4))) * 0x1c)));
            ((int *)(gen_frame + 0x2e8))[2] = 0x80000000;
            ((int *)(gen_frame + 0x2e8))[5] = 0x80000000;
            ((int *)(gen_frame + 0x2e8))[8] = 0x80000000;
            ((int *)(gen_frame + 0x2a8))[2] = 0x80000000;
            ((int *)(gen_frame + 0x2a8))[5] = 0x80000000;
            ((int *)(gen_frame + 0x2a8))[8] = 0x80000000;
            ((int *)(gen_frame + 0x2e8))[0] = 0;
            ((int *)(gen_frame + 0x2e8))[1] = 0;
            ((int *)(gen_frame + 0x2e8))[3] = 0;
            ((int *)(gen_frame + 0x2e8))[4] = 0;
            ((int *)(gen_frame + 0x2e8))[6] = 0;
            ((int *)(gen_frame + 0x2e8))[7] = 0;
            ((int *)(gen_frame + 0x2a8))[0] = 0;
            ((int *)(gen_frame + 0x2a8))[1] = 0;
            ((int *)(gen_frame + 0x2a8))[3] = 0;
            ((int *)(gen_frame + 0x2a8))[4] = 0;
            ((int *)(gen_frame + 0x2a8))[6] = 0;
            ((int *)(gen_frame + 0x2a8))[7] = 0;
            if (0 < (*(int *)(gen_frame + 0x328))) {
              iVar15 = 0;
              (*(int *)(gen_frame + 0x388)) = (*(int *)(gen_frame + 0x328));
              do {
                uVar7 = *((uint *)GEN_TOP(((int)((int *)(gen_frame + 0x2e8)) + iVar15 + 8))) & 0x3fffffff;
                if ((int)uVar7 < iVar8) {
                  iVar9 = uVar7 * 2;
                  if (iVar9 <= iVar8) {
                    iVar9 = iVar8;
                  }
                  F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)((int *)(gen_frame + 0x2e8)) + iVar15,iVar9,0x10);
                }
                uVar7 = *((uint *)GEN_TOP(((int)((int *)(gen_frame + 0x2a8)) + iVar15 + 8))) & 0x3fffffff;
                *((int *)GEN_TOP(((int)((int *)(gen_frame + 0x2e8)) + iVar15 + 4))) = iVar8;
                if ((int)uVar7 < iVar8) {
                  iVar9 = uVar7 * 2;
                  if (iVar9 <= iVar8) {
                    iVar9 = iVar8;
                  }
                  F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)((int *)(gen_frame + 0x2a8)) + iVar15,iVar9,4);
                }
                fVar19 = (*(float *)(gen_frame + 0x334));
                *((int *)GEN_TOP(((int)((int *)(gen_frame + 0x2a8)) + iVar15 + 4))) = iVar8;
                F_00d74ba0(iVar8 - 1,(int)((int *)(gen_frame + 0x2a8)) + iVar15,0.0,fVar19);
                iVar15 = iVar15 + 0xc;
                iVar9 = (*(int *)(gen_frame + 0x388)) - 1;
                (*(int *)(gen_frame + 0x388)) = iVar9;
              } while (iVar9 != 0);
            }
            if ((*(int *)(gen_frame + 0x384)) == 0) {
              fVar19 = gen_bits2f((*(undefined4 * PTR32 *)(gen_frame + 0x380))[1]);
              uVar2 = *(ushort *)((*(undefined4 * PTR32 *)(gen_frame + 0x380)) + 4);
              ((uint *)(gen_frame + 0x310))[0] = (uint)*((ushort *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x380)) + 0x12)));
              ((uint *)(gen_frame + 0x310))[2] = (uint)*(ushort *)((*(undefined4 * PTR32 *)(gen_frame + 0x380)) + 5);
              ((float *)(gen_frame + 0x338))[0] = fVar19;
              ((float *)(gen_frame + 0x338))[1] = gen_bits2f(*(*(undefined4 * PTR32 *)(gen_frame + 0x380)));
              ((uint *)(gen_frame + 0x310))[1] = (uint)uVar2;
              ((float *)(gen_frame + 0x338))[2] = gen_bits2f((*(undefined4 * PTR32 *)(gen_frame + 0x380))[2]);
              F_00d74740(param_1[10],(*(int * PTR32 *)(gen_frame + 0x38c))[4],iVar8,(*(int *)(gen_frame + 0x350)),(*(int *)(gen_frame + 0x364)),((int *)(gen_frame + 0x2e8)),((int *)(gen_frame + 0x2e8)) + 3,
                           ((int *)(gen_frame + 0x2e8)) + 6);
            }
            else {
              fVar19 = gen_bits2f((*(undefined4 * PTR32 *)(gen_frame + 0x380))[3]);
              iVar15 = (*(int * PTR32 *)(gen_frame + 0x38c))[5];
              ((uint *)(gen_frame + 0x310))[0] = (uint)*((ushort *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x380)) + 0x16)));
              iVar9 = param_1[0xd];
              ((float *)(gen_frame + 0x338))[0] = fVar19;
              F_00d747f0(iVar9,iVar15,iVar8,(*(int *)(gen_frame + 0x350)),(*(int *)(gen_frame + 0x364)),((int *)(gen_frame + 0x2e8)));
            }
            (*(int *)(gen_frame + 0x388)) = 0;
            if (0 < (*(int *)(gen_frame + 0x328))) {
              (*(undefined4 *)(gen_frame + 0x260)) = *(undefined4 *)&REFG(undefined, 0x11377b0);
              (*(undefined4 *)(gen_frame + 0x264)) = *(undefined4 *)&REFG(undefined, 0x11377b4);
              (*(undefined4 *)(gen_frame + 0x268)) = *(undefined4 *)&REFG(undefined, 0x11377b8);
              (*(undefined4 *)(gen_frame + 0x26c)) = *(undefined4 *)&REFG(undefined, 0x11377bc);
              (*(undefined4 *)(gen_frame + 0x270)) = *(undefined4 *)&REFG(undefined, 0x11377c0);
              (*(undefined4 *)(gen_frame + 0x274)) = *(undefined4 *)&REFG(undefined, 0x11377c4);
              (*(undefined4 *)(gen_frame + 0x278)) = *(undefined4 *)&REFG(undefined, 0x11377c8);
              (*(undefined4 *)(gen_frame + 0x27c)) = *(undefined4 *)&REFG(undefined, 0x11377cc);
              (*(undefined4 *)(gen_frame + 0x250)) = *(undefined4 *)&REFG(undefined, 0x11377d0);
              (*(undefined4 *)(gen_frame + 0x254)) = *(undefined4 *)&REFG(undefined, 0x11377d4);
              (*(undefined4 *)(gen_frame + 0x258)) = *(undefined4 *)&REFG(undefined, 0x11377d8);
              (*(undefined4 *)(gen_frame + 0x25c)) = *(undefined4 *)&REFG(undefined, 0x11377dc);
              ((uint *)(gen_frame + 0x310))[3] = (*(int *)(gen_frame + 0x370)) * 3;
              do {
                iVar15 = (*(int *)(gen_frame + 0x388));
                piVar1 = ((int *)(gen_frame + 0x2e8)) + (*(int *)(gen_frame + 0x388)) * 3;
                (*(int * PTR32 *)(gen_frame + 0x360)) = piVar1;
                F_00d74940(&(*(float *)(gen_frame + 0x2d0)),piVar1);
                F_00d749a0(&(*(undefined4 *)(gen_frame + 0x280)),piVar1);
                F_00d749f0(&(*(undefined4 *)(gen_frame + 0x290)),piVar1);
                iVar8 = (*(int *)(gen_frame + 0x388));
                if ((*(int *)(gen_frame + 0x388)) == 1) {
                  fVar19 = (*(float *)(gen_frame + 0x2d8)) * (*(float *)(gen_frame + 0x2d8)) + (*(float *)(gen_frame + 0x2d0)) * (*(float *)(gen_frame + 0x2d0));
                  fVar21 = (*(float *)(gen_frame + 0x2dc)) * (*(float *)(gen_frame + 0x2dc)) + (*(float *)(gen_frame + 0x2d4)) * (*(float *)(gen_frame + 0x2d4));
                  fVar23 = (*(float *)(gen_frame + 0x2d0)) * (*(float *)(gen_frame + 0x2d0)) + (*(float *)(gen_frame + 0x2d8)) * (*(float *)(gen_frame + 0x2d8));
                  fVar20 = (*(float *)(gen_frame + 0x2d4)) * (*(float *)(gen_frame + 0x2d4)) + (*(float *)(gen_frame + 0x2dc)) * (*(float *)(gen_frame + 0x2dc));
                  fVar22 = fVar21 + fVar19;
                  fVar19 = fVar19 + fVar21;
                  fVar21 = fVar20 + fVar23;
                  fVar23 = fVar23 + fVar20;
                  memset(&auVar24, 0, 12);
                  (*(undefined4 *)((char *)&auVar24 + 12)) = 0;
                  (*(undefined4 *)((char *)&auVar25 + 4)) = (undefined4)gen_fl2bits(fVar19);
                  (*(undefined4 *)((char *)&auVar25 + 0)) = (undefined4)gen_fl2bits(fVar22);
                  (*(undefined4 *)((char *)&auVar25 + 8)) = (undefined4)gen_fl2bits(fVar21);
                  (*(undefined4 *)((char *)&auVar25 + 12)) = (undefined4)gen_fl2bits(fVar23);
                  gen_rsqrtps(&(auVar25), &(auVar24), &(auVar25));
                  fVar20 = (*(float *)((char *)&auVar25 + 0));
                  fVar26 = (*(float *)((char *)&auVar25 + 4));
                  fVar27 = (*(float *)((char *)&auVar25 + 8));
                  fVar28 = (*(float *)((char *)&auVar25 + 12));
                  (*(float *)(gen_frame + 0x2d0)) = gen_bits2f(~-(uint)(fVar22 <= 0.0) &
                                        (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1137790) -
                                                          (fVar20 * fVar22) * fVar20) *
                                                          (*(float *)&REFG(undefined, 0x11377a0) * fVar20))) *
                             (*(float *)(gen_frame + 0x2d0));
                  (*(float *)(gen_frame + 0x2d4)) = gen_bits2f(~-(uint)(fVar19 <= 0.0) &
                                         (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1137794) -
                                                           (fVar26 * fVar19) * fVar26) *
                                                           (*(float *)&REFG(undefined, 0x11377a4) * fVar26))) *
                              (*(float *)(gen_frame + 0x2d4));
                  (*(float *)(gen_frame + 0x2d8)) = gen_bits2f(~-(uint)(fVar21 <= 0.0) &
                                         (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1137798) -
                                                           (fVar27 * fVar21) * fVar27) *
                                                           (*(float *)&REFG(undefined, 0x11377a8) * fVar27))) *
                              (*(float *)(gen_frame + 0x2d8));
                  (*(float *)(gen_frame + 0x2dc)) = gen_bits2f(~-(uint)(fVar23 <= 0.0) &
                                         (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x113779c) -
                                                           (fVar28 * fVar23) * fVar28) *
                                                           (*(float *)&REFG(undefined, 0x11377ac) * fVar28))) *
                              (*(float *)(gen_frame + 0x2dc));
                }
                ((undefined4 *)(gen_frame + 0x220))[0] = (*(undefined4 *)(gen_frame + 0x260));
                ((undefined4 *)(gen_frame + 0x220))[1] = (*(undefined4 *)(gen_frame + 0x264));
                ((undefined4 *)(gen_frame + 0x220))[2] = (*(undefined4 *)(gen_frame + 0x268));
                ((undefined4 *)(gen_frame + 0x220))[3] = (*(undefined4 *)(gen_frame + 0x26c));
                (*(undefined4 *)(gen_frame + 0x230)) = (*(undefined4 *)(gen_frame + 0x270));
                (*(undefined4 *)(gen_frame + 0x234)) = (*(undefined4 *)(gen_frame + 0x274));
                (*(undefined4 *)(gen_frame + 0x238)) = (*(undefined4 *)(gen_frame + 0x278));
                (*(undefined4 *)(gen_frame + 0x23c)) = (*(undefined4 *)(gen_frame + 0x27c));
                (*(undefined4 *)(gen_frame + 0x240)) = (*(undefined4 *)(gen_frame + 0x250));
                (*(undefined4 *)(gen_frame + 0x244)) = (*(undefined4 *)(gen_frame + 0x254));
                (*(undefined4 *)(gen_frame + 0x248)) = (*(undefined4 *)(gen_frame + 0x258));
                (*(undefined4 *)(gen_frame + 0x24c)) = (*(undefined4 *)(gen_frame + 0x25c));
                (*(float *)(gen_frame + 0x320)) = ((float *)(gen_frame + 0x338))[(int)((*(int *)(gen_frame + 0x388)))];
                bVar6 = F_00d74850(&(*(float *)(gen_frame + 0x2d0)),&(*(undefined4 *)(gen_frame + 0x280)),&(*(undefined4 *)(gen_frame + 0x290)),((float *)(gen_frame + 0x338))[(int)((*(int *)(gen_frame + 0x388)))],
                                     ((undefined4 *)(gen_frame + 0x220)) + (*(int *)(gen_frame + 0x388)) * 4);
                (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x34c)) + 0)) = bVar6;
                (*(uint *)(gen_frame + 0x34c)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x34c)), 1, 3),bVar6);
                if ((*(int *)(gen_frame + 0x384)) == 1) {
                  if (bVar6 == 0) {
                    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x34c)) + 0)) = 1;
                    (*(uint *)(gen_frame + 0x34c)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x34c)), 1, 3),1);
                  }
LAB_00d7592d: ;
                  bVar6 = F_00d745b0((char)(*(uint *)(gen_frame + 0x34c)),*((undefined1 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x380)) + 0x1b))));
                  *((byte *)GEN_TOP(((*(int *)(gen_frame + 0x348)) + (*(int * PTR32 *)(gen_frame + 0x38c))[0x1d]))) = bVar6;
                  iVar8 = (*(int *)(gen_frame + 0x348));
                }
                else {
                  if ((*(int *)(gen_frame + 0x384)) != 0) goto LAB_00d7592d;
                  if (iVar8 == 0) {
                    uVar7 = F_00d74590((uint)*((byte *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x380)) + 0x19))),
                                         (uint)*(byte *)((*(undefined4 * PTR32 *)(gen_frame + 0x380)) + 6),
                                         (uint)*((byte *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x380)) + 0x1a))));
                    *((char *)GEN_TOP(((*(int *)(gen_frame + 0x348)) + (*(int * PTR32 *)(gen_frame + 0x38c))[0x1d]))) = (char)uVar7;
                    iVar8 = (*(int *)(gen_frame + 0x348)) + 1;
                    *((byte *)GEN_TOP((iVar8 + (*(int * PTR32 *)(gen_frame + 0x38c))[0x1d]))) = bVar6;
                  }
                  else {
                    *((byte *)GEN_TOP(((*(int *)(gen_frame + 0x348)) + (*(int * PTR32 *)(gen_frame + 0x38c))[0x1d]))) = bVar6;
                    iVar8 = (*(int *)(gen_frame + 0x348));
                  }
                }
                (*(int *)(gen_frame + 0x348)) = iVar8 + 1;
                uVar7 = 0;
                (*(uint *)(gen_frame + 0x374)) = 0;
                (*(int *)(gen_frame + 0x378)) = 0;
                (*(uint *)(gen_frame + 0x37c)) = 0x80000000;
                if (((uint *)(gen_frame + 0x310))[3] == 0) {
LAB_00d75993: ;
                  uVar10 = 0x80000000;
                }
                else {
                  (*(int *)(gen_frame + 0x36c)) = ((uint *)(gen_frame + 0x310))[3] << 4;
                  uVar7 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x36c)))
                  ;
                  uVar10 = (int)((*(int *)(gen_frame + 0x36c)) + ((*(int *)(gen_frame + 0x36c)) >> 0x1f & 0xfU)) >> 4;
                  if (uVar10 == 0) goto LAB_00d75993;
                }
                (*(uint *)(gen_frame + 0x374)) = uVar7;
                (*(uint *)(gen_frame + 0x37c)) = uVar10;
                iVar8 = ((uint *)(gen_frame + 0x310))[3] + 2;
                (*(int *)(gen_frame + 0x378)) = ((uint *)(gen_frame + 0x310))[3];
                (*(uint *)(gen_frame + 0x354)) = 0;
                (*(int *)(gen_frame + 0x358)) = 0;
                (*(uint *)(gen_frame + 0x35c)) = 0x80000000;
                if (iVar8 == 0) {
                  uVar7 = 0;
LAB_00d759ef: ;
                  uVar10 = 0x80000000;
                }
                else {
                  (*(int *)(gen_frame + 0x36c)) = iVar8 * 4;
                  uVar7 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x36c)))
                  ;
                  uVar10 = (int)((*(int *)(gen_frame + 0x36c)) + ((*(int *)(gen_frame + 0x36c)) >> 0x1f & 3U)) >> 2;
                  if (uVar10 == 0) goto LAB_00d759ef;
                }
                (*(uint *)(gen_frame + 0x35c)) = uVar10;
                (*(uint *)(gen_frame + 0x354)) = uVar7;
                (*(int *)(gen_frame + 0x358)) = iVar8;
                (*(byte *)(gen_frame + 0x36b)) = (byte)(*(uint *)(gen_frame + 0x34c)) & 0xf0;
                if (((*(uint *)(gen_frame + 0x34c)) & 0xf0) != 0) {
                  F_00d8fce0((*(int *)(gen_frame + 0x370)),((int *)(gen_frame + 0x2a8))[(int)(iVar15 * 3)],*(*(int * PTR32 *)(gen_frame + 0x360)),((uint *)(gen_frame + 0x310))[(int)((*(int *)(gen_frame + 0x388)))],(*(float *)(gen_frame + 0x320)),
                               &(*(int *)(gen_frame + 0x324)),uVar7,&(*(int *)(gen_frame + 0x330)),(*(uint *)(gen_frame + 0x374)));
                  iVar8 = (*(int *)(gen_frame + 0x324));
                  if ((int)((*(uint *)(gen_frame + 0x35c)) & 0x3fffffff) < (*(int *)(gen_frame + 0x324))) {
                    iVar9 = ((*(uint *)(gen_frame + 0x35c)) & 0x3fffffff) * 2;
                    iVar13 = (*(int *)(gen_frame + 0x324));
                    if ((*(int *)(gen_frame + 0x324)) < iVar9) {
                      iVar13 = iVar9;
                    }
                    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(uint *)(gen_frame + 0x354)),iVar13,4);
                  }
                  iVar9 = (*(int *)(gen_frame + 0x330));
                  (*(int *)(gen_frame + 0x358)) = iVar8;
                  if ((int)((*(uint *)(gen_frame + 0x37c)) & 0x3fffffff) < (*(int *)(gen_frame + 0x330))) {
                    iVar8 = ((*(uint *)(gen_frame + 0x37c)) & 0x3fffffff) * 2;
                    iVar13 = (*(int *)(gen_frame + 0x330));
                    if ((*(int *)(gen_frame + 0x330)) < iVar8) {
                      iVar13 = iVar8;
                    }
                    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(uint *)(gen_frame + 0x374)),iVar13,0x10);
                  }
                  uVar10 = (*(uint *)(gen_frame + 0x374));
                  iVar8 = (*(int *)(gen_frame + 0x370));
                  uVar7 = (*(uint *)(gen_frame + 0x354));
                  fVar19 = (*(float *)(gen_frame + 0x320));
                  (*(int *)(gen_frame + 0x378)) = iVar9;
                  if ((*(int *)(gen_frame + 0x370)) < iVar9) {
                    ((uint *)(gen_frame + 0x310))[(int)((*(int *)(gen_frame + 0x388)))] = 1;
                    F_00d8fce0(iVar8,((int *)(gen_frame + 0x2a8))[(int)(iVar15 * 3)],*(*(int * PTR32 *)(gen_frame + 0x360)),1,fVar19,&(*(int *)(gen_frame + 0x324)),uVar7,
                                 &(*(int *)(gen_frame + 0x330)),uVar10);
                    iVar15 = (*(int *)(gen_frame + 0x324));
                    if ((int)((*(uint *)(gen_frame + 0x35c)) & 0x3fffffff) < (*(int *)(gen_frame + 0x324))) {
                      iVar8 = ((*(uint *)(gen_frame + 0x35c)) & 0x3fffffff) * 2;
                      iVar9 = (*(int *)(gen_frame + 0x324));
                      if ((*(int *)(gen_frame + 0x324)) < iVar8) {
                        iVar9 = iVar8;
                      }
                      F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(uint *)(gen_frame + 0x354)),iVar9,4);
                    }
                    iVar9 = (*(int *)(gen_frame + 0x330));
                    (*(int *)(gen_frame + 0x358)) = iVar15;
                    if ((int)((*(uint *)(gen_frame + 0x37c)) & 0x3fffffff) < (*(int *)(gen_frame + 0x330))) {
                      iVar15 = ((*(uint *)(gen_frame + 0x37c)) & 0x3fffffff) * 2;
                      iVar8 = (*(int *)(gen_frame + 0x330));
                      if ((*(int *)(gen_frame + 0x330)) < iVar15) {
                        iVar8 = iVar15;
                      }
                      F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(uint *)(gen_frame + 0x374)),iVar8,0x10);
                    }
                    (*(int *)(gen_frame + 0x378)) = iVar9;
                  }
                  (*(int *)(gen_frame + 0x378)) = iVar9;
                  F_00d752d0((*(int * PTR32 *)(gen_frame + 0x38c)) GEN_EDX_ARG,iVar9 - 1,((*(int *)(gen_frame + 0x358)) - iVar9) - 1,&(*(uint *)(gen_frame + 0x354)));
                }
                if ((*(int *)(gen_frame + 0x388)) == 1) {
                  F_00d74f50((*(int * PTR32 *)(gen_frame + 0x38c)) GEN_EDX_ARG,(char)(*(uint *)(gen_frame + 0x34c)),(uint)*(byte *)((*(undefined4 * PTR32 *)(gen_frame + 0x380)) + 6),&(*(float *)(gen_frame + 0x2d0)),
                               (*(int *)(gen_frame + 0x378)) - 1,&(*(uint *)(gen_frame + 0x374)));
                }
                else {
                  if ((*(byte *)(gen_frame + 0x36b)) != 0) {
                    puVar11 = ((undefined4 *)GEN_TOP(F_00d749a0(((undefined1 *)(gen_frame + 0x200)),&(*(uint *)(gen_frame + 0x374)))));
                    uVar3 = puVar11[1];
                    uVar4 = puVar11[2];
                    uVar5 = puVar11[3];
                    (*(undefined4 *)(gen_frame + 0x280)) = *puVar11;
                    (*(undefined4 *)(gen_frame + 0x284)) = uVar3;
                    (*(undefined4 *)(gen_frame + 0x288)) = uVar4;
                    (*(undefined4 *)(gen_frame + 0x28c)) = uVar5;
                    puVar11 = ((undefined4 *)GEN_TOP(F_00d749f0(((undefined1 *)(gen_frame + 0x210)),&(*(uint *)(gen_frame + 0x374)))));
                    uVar3 = puVar11[1];
                    uVar4 = puVar11[2];
                    uVar5 = puVar11[3];
                    (*(undefined4 *)(gen_frame + 0x290)) = *puVar11;
                    (*(undefined4 *)(gen_frame + 0x294)) = uVar3;
                    (*(undefined4 *)(gen_frame + 0x298)) = uVar4;
                    (*(undefined4 *)(gen_frame + 0x29c)) = uVar5;
                  }
                  if ((*(int *)(gen_frame + 0x384)) == 0) {
                    if ((*(int *)(gen_frame + 0x388)) == 0) {
                      uVar7 = (uint)*((byte *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x380)) + 0x19)));
                    }
                    else {
                      uVar7 = (uint)*((byte *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x380)) + 0x1a)));
                    }
                  }
                  else {
                    uVar7 = (uint)*((byte *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x380)) + 0x1b)));
                  }
                  F_00d75140((*(int * PTR32 *)(gen_frame + 0x38c)) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x34c)),uVar7,&(*(float *)(gen_frame + 0x2d0)),&(*(undefined4 *)(gen_frame + 0x280)),&(*(undefined4 *)(gen_frame + 0x290)),(*(int *)(gen_frame + 0x378)) - 1
                               ,&(*(uint *)(gen_frame + 0x374)));
                }
                F_00d74db0(4,(*(int * PTR32 *)(gen_frame + 0x38c)) + 0x1d);
                (*(int *)(gen_frame + 0x358)) = 0;
                if (((*(uint *)(gen_frame + 0x35c)) & 0x80000000) == 0) {
                  ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                            (&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0x354)),(*(uint *)(gen_frame + 0x35c)) * 4);
                }
                (*(uint *)(gen_frame + 0x354)) = 0;
                (*(uint *)(gen_frame + 0x35c)) = 0x80000000;
                (*(int *)(gen_frame + 0x378)) = 0;
                if (((*(uint *)(gen_frame + 0x37c)) & 0x80000000) == 0) {
                  ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                            (&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0x374)),(*(uint *)(gen_frame + 0x37c)) << 4);
                }
                iVar15 = (*(int *)(gen_frame + 0x388)) + 1;
                (*(uint *)(gen_frame + 0x374)) = 0;
                (*(uint *)(gen_frame + 0x37c)) = 0x80000000;
                (*(int *)(gen_frame + 0x388)) = iVar15;
              } while (iVar15 < (*(int *)(gen_frame + 0x328)));
            }
            iVar15 = 2;
            pfVar16 = &(*(float *)(gen_frame + 0x2d4));
            do {
              pfVar16[-4] = 0.0;
              if (-1 < (int)gen_fl2bits(pfVar16[-3])) {
                ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                          (&REFG(undefined * PTR32, 0x13516ac),(undefined4)gen_fl2bits(pfVar16[-5]),
                           (int)gen_fl2bits(pfVar16[-3]) * 4);
              }
              iVar15 = iVar15 - 1;
              pfVar16[-5] = 0.0;
              pfVar16[-3] = -0.0;
              pfVar16 = pfVar16 - 3;
            } while (-1 < iVar15);
            iVar15 = 2;
            puVar17 = ((uint *)(gen_frame + 0x310)) + 1;
            do {
              puVar17[-4] = 0;
              if (-1 < (int)puVar17[-3]) {
                ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                          (&REFG(undefined * PTR32, 0x13516ac),puVar17[-5],puVar17[-3] << 4);
              }
              iVar15 = iVar15 - 1;
              puVar17[-5] = 0;
              puVar17[-3] = 0x80000000;
              puVar17 = puVar17 - 3;
            } while (-1 < iVar15);
            iVar15 = (*(int *)(gen_frame + 0x364)) + 1;
            (*(int *)(gen_frame + 0x364)) = iVar15;
          } while (iVar15 < (*(int *)(gen_frame + 0x32c)));
        }
        piVar1 = (*(int * PTR32 *)(gen_frame + 0x38c));
        iVar15 = (*(int *)(gen_frame + 0x384)) + 1;
        (*(int *)(gen_frame + 0x384)) = iVar15;
      } while (iVar15 < 2);
      (*(int *)(gen_frame + 0x350)) = (*(int *)(gen_frame + 0x350)) - 1 + (*(int *)(gen_frame + 0x370));
      F_00d74db0(0x10,(*(int * PTR32 *)(gen_frame + 0x38c)) + 0x1d);
      iVar15 = (*(int *)(gen_frame + 0x344)) + 1;
      (*(int *)(gen_frame + 0x344)) = iVar15;
    } while (iVar15 < piVar1[0xb]);
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0x1c))))(REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,0x36118e94,((char *)REFP(0x11378cc)));
  F_00da0a80(((float *)(gen_frame + 0x338)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
  piVar1 = (*(int * PTR32 *)(gen_frame + 0x38c));
  iVar15 = (*(int * PTR32 *)(gen_frame + 0x38c))[0xb];
  pvVar12 = ((undefined *)GEN_TOP(F_00d9fe80(((float *)(gen_frame + 0x338)) GEN_EDX_ARG,((char *)REFP(0x11378b8)))));
  F_00d9ff40(pvVar12 GEN_EDX_ARG,iVar15);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             ((char *)REFP(0x1137878)),0x17e);
  F_00d9fda0(((float *)(gen_frame + 0x338)) GEN_EDX_ARG);
  F_00da0a80(((float *)(gen_frame + 0x338)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
  pcVar29 = ((char *)REFP(0x1137870));
  uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x28))))(piVar1 GEN_EDX_ARG);
  pvVar12 = ((undefined *)GEN_TOP(F_00d9fe80(((float *)(gen_frame + 0x338)) GEN_EDX_ARG,((char *)REFP(0x1137840)))));
  pvVar12 = ((undefined *)GEN_TOP(F_00d9ff40(pvVar12 GEN_EDX_ARG,uVar7)));
  F_00d9fe80(pvVar12 GEN_EDX_ARG,pcVar29);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             ((char *)REFP(0x1137878)),0x17f);
  F_00d9fda0(((float *)(gen_frame + 0x338)) GEN_EDX_ARG);
  iVar15 = (param_1[0xb] * 0x10 + param_1[0xe]) * 4;
  F_00da0a80(((float *)(gen_frame + 0x338)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
  pcVar30 = ((char *)REFP(0x1137870));
  uVar7 = F_00d6d110(piVar1 GEN_EDX_ARG);
  pcVar29 = ((char *)REFP(0x1137824));
  iVar8 = iVar15;
  pvVar12 = ((undefined *)GEN_TOP(F_00d9fe80(((float *)(gen_frame + 0x338)) GEN_EDX_ARG,((char *)REFP(0x1137814)))));
  pvVar12 = ((undefined *)GEN_TOP(F_00d9ff90(pvVar12 GEN_EDX_ARG,iVar8)));
  pvVar12 = ((undefined *)GEN_TOP(F_00d9fe80(pvVar12 GEN_EDX_ARG,pcVar29)));
  pvVar12 = ((undefined *)GEN_TOP(F_00d9ff40(pvVar12 GEN_EDX_ARG,uVar7)));
  F_00d9fe80(pvVar12 GEN_EDX_ARG,pcVar30);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             ((char *)REFP(0x1137878)),0x184);
  F_00d9fda0(((float *)(gen_frame + 0x338)) GEN_EDX_ARG);
  F_00da0a80(((float *)(gen_frame + 0x338)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
  (*(float *)(gen_frame + 0x334)) = gen_bits2f(iVar15);
  fVar18 = (float10)iVar15;
  puVar31 = &REFG(undefined, 0x1137810);
  if (iVar15 < 0) {
    fVar18 = GEN_X87(fVar18 + (float10)*(float *)&REFG(undefined, 0x1088110));
  }
  (*(int * PTR32 *)(gen_frame + 0x360)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)fVar18)));
  uVar7 = F_00d6d110(piVar1 GEN_EDX_ARG);
  (*(float *)(gen_frame + 0x334)) = gen_bits2f(uVar7);
  fVar19 = (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x360))))) / (float10)(int)uVar7);
  uVar7 = F_00d9fe80(((float *)(gen_frame + 0x338)) GEN_EDX_ARG,((char *)REFP(0x11377fc)));
  pvVar12 = ((undefined *)GEN_TOP(F_00d9ffe0(uVar7 GEN_EDX_ARG,fVar19)));
  F_00d9fe80(pvVar12 GEN_EDX_ARG,puVar31);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             ((char *)REFP(0x1137878)),0x185);
  F_00d9fda0(((float *)(gen_frame + 0x338)) GEN_EDX_ARG);
  uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0x20))))(REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG);
  return uVar7;
}

/* ref: FUN_00d75ff0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d75ff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined8 * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd75ff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x2c, 4, 4);
  undefined8 * puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  (*(undefined4 *)(gen_frame + 0x8)) = 0x80000000;
  (*(uint *)(gen_frame + 0x14)) = 0x80000000;
  (*(uint *)(gen_frame + 0x20)) = 0x80000000;
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = this;
  (*(int *)(gen_frame + 0x0)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x18)) = 0;
  (*(int *)(gen_frame + 0x1c)) = 0;
  F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x0)),0x1c);
  puVar1 = ((undefined8 *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + (*(int *)(gen_frame + 0x4)) * 0x1c)));
  if (puVar1 != ((undefined8 *)GEN_TOP(0x0))) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    puVar1[2] = param_2[2];
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_2 + 3);
  }
  (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + 1;
  iVar3 = *((int *)GEN_TOP((param_1 + 0x10)));
  if ((int)((*(uint *)(gen_frame + 0x14)) & 0x3fffffff) < iVar3) {
    iVar2 = ((*(uint *)(gen_frame + 0x14)) & 0x3fffffff) * 2;
    if (iVar2 <= iVar3) {
      iVar2 = iVar3;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0xc)),iVar2,4);
  }
  (*(int *)(gen_frame + 0x10)) = iVar3;
  iVar3 = *((int *)GEN_TOP((param_1 + 0x14)));
  if ((int)((*(uint *)(gen_frame + 0x20)) & 0x3fffffff) < iVar3) {
    iVar2 = ((*(uint *)(gen_frame + 0x20)) & 0x3fffffff) * 2;
    if (iVar2 <= iVar3) {
      iVar2 = iVar3;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x18)),iVar2,4);
  }
  iVar2 = 0;
  (*(int *)(gen_frame + 0x1c)) = iVar3;
  if (0 < *((int *)GEN_TOP((param_1 + 0x10)))) {
    do {
      *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + iVar2 * 4))) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *((int *)GEN_TOP((param_1 + 0x10))));
  }
  iVar3 = 0;
  if (0 < *((int *)GEN_TOP((param_1 + 0x14)))) {
    do {
      *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x18)) + iVar3 * 4))) = 0;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *((int *)GEN_TOP((param_1 + 0x14))));
  }
  F_00d75370((*(undefined * PTR32 *)(gen_frame + 0x24)) GEN_EDX_ARG,param_1,&(*(int *)(gen_frame + 0x0)),param_3);
  uVar4 = F_00d76ae0(&(*(int *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar4;
}

/* ref: FUN_00d76120 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d76120(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd76120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  undefined4 uVar1;
  
  uVar1 = (*(undefined4 *)&gen_args[0]);
  F_00d739c0(this GEN_EDX_FWD,(*(undefined4 *)&gen_args[0]));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x113541c));
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0;
  F_00d74700(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00d74510(&(*(undefined4 *)&gen_args[0]) GEN_EDX_ARG);
  F_00d75ff0(this GEN_EDX_ARG,uVar1,((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)&gen_args[0]));
  return (uint)this;
}

/* ref: FUN_00d761a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d761a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd761a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  F_00d739c0(this GEN_EDX_FWD,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x113541c));
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0x80000000;
  F_00d75ff0(this GEN_EDX_ARG,param_1,param_2,param_3);
  return (uint)this;
}

/* ref: FUN_00d76210 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d76210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd76210u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  F_00d739c0(this GEN_EDX_FWD,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x113541c));
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0x80000000;
  F_00d75370(this GEN_EDX_ARG,param_1,param_2,param_3);
  return (uint)this;
}

/* ref: FUN_00d76290 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d76290(GEN_P(byte * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd76290u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(byte * in_ecx = (byte *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00d762b0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d762b0(GEN_P(byte * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd762b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(byte * in_ecx = (byte *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00d762f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d762f0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd762f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00d76340 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d76340(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd76340u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00d76350 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d76350(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd76350u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00d76380 */
GEN_LIB GEN_FRAME uint F_00d76380(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd76380u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  undefined1 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00d763b0 */
GEN_LIB GEN_FRAME unsigned int F_00d763b0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd763b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *((undefined4 *)GEN_TOP((param_1 + iVar1 * 4))) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return 0;
}

/* ref: FUN_00d763e0 */
GEN_LIB GEN_FRAME unsigned int F_00d763e0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined1 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd763e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;)
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *((undefined1 *)GEN_TOP((iVar1 + param_1))) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return 0;
}

/* ref: FUN_00d76410 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d76410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd76410u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3;
  return param_3;
}

/* ref: FUN_00d76440 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d76440(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd76440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  code * pcVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0xc)));
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) << 4)));
  uVar3 = (*pcVar1)(this,&(*(int * PTR32 *)&gen_args[0]));
  *piVar2 = (int)((int)(*(int * PTR32 *)&gen_args[0]) + ((int)(*(int * PTR32 *)&gen_args[0]) >> 0x1f & 0xfU)) >> 4;
  return uVar3;
}

/* ref: FUN_00d76480 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d76480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd76480u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 0x1c);
  return uVar1;
}

/* ref: FUN_00d764b0 */
GEN_LIB GEN_FRAME uint F_00d764b0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd764b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + param_1;
}

/* ref: FUN_00d76530 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d76530(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd76530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  code * pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = (*(int *)&gen_args[0]);
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  if ((*(int *)&gen_args[0]) == 0) {
    uVar3 = 0;
  }
  else {
    (*(int *)&gen_args[0]) = (*(int *)&gen_args[0]) * 4;
    pcVar1 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc)));
    uVar3 = (*pcVar1)(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[0]));
    iVar4 = (int)((*(int *)&gen_args[0]) + ((*(int *)&gen_args[0]) >> 0x1f & 3U)) >> 2;
    if (iVar4 != 0) goto LAB_00d76586;
  }
  iVar4 = ((int)0x80000000);
LAB_00d76586: ;
  *((int *)GEN_TOP(((int)this + 4))) = iVar2;
  *((int *)GEN_TOP(((int)this + 8))) = iVar4;
  *(uint *)this = uVar3;
  return (uint)this;
}

/* ref: FUN_00d765a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d765a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd765a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 4)));
  *puVar1 = *param_2;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00d765e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d765e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd765e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  undefined1 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,1);
  }
  puVar1 = ((undefined1 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))))));
  *puVar1 = *param_2;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00d76620 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d76620(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd76620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  code * pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = (*(int *)&gen_args[0]);
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  if ((*(int *)&gen_args[0]) == 0) {
    uVar3 = 0;
  }
  else {
    (*(int *)&gen_args[0]) = (*(int *)&gen_args[0]) << 4;
    pcVar1 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc)));
    uVar3 = (*pcVar1)(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[0]));
    iVar4 = (int)((*(int *)&gen_args[0]) + ((*(int *)&gen_args[0]) >> 0x1f & 0xfU)) >> 4;
    if (iVar4 != 0) goto LAB_00d76675;
  }
  iVar4 = ((int)0x80000000);
LAB_00d76675: ;
  *((int *)GEN_TOP(((int)this + 4))) = iVar2;
  *((int *)GEN_TOP(((int)this + 8))) = iVar4;
  *(uint *)this = uVar3;
  return (uint)this;
}

/* ref: FUN_00d76690 */
GEN_LIB GEN_FRAME unsigned int F_00d76690(GEN_P(undefined8 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined8 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd76690u, gen_a0, gen_a1, gen_a2, 0u);
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
        puVar1[2] = param_3[2];
        *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_3 + 3);
      }
      puVar1 = ((undefined8 *)GEN_TOP(((int)puVar1 + 0x1c)));
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00d766d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d766d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd766d0u, gen_a0, gen_a1, gen_a2, 0u);
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
    bVar1 = F_00d95690(param_1,this,iVar3,4);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00d76710 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d76710(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd76710u, gen_a0, gen_a1, gen_a2, 0u);
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
    bVar1 = F_00d95690(param_1,this,iVar3,0x10);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00d76760 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d76760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd76760u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 4)));
  *puVar1 = *param_1;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00d767a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d767a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd767a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  undefined1 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,1);
  }
  puVar1 = ((undefined1 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))))));
  *puVar1 = *param_1;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00d767e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d767e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined8 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd767e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a2;)
  undefined8 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,0x1c);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 0x1c)));
  if (puVar1 != ((undefined8 *)GEN_TOP(0x0))) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    puVar1[2] = param_2[2];
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_2 + 3);
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00d76850 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d76850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd76850u, gen_a0, gen_a1, gen_a2, 0u);
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
    bVar1 = F_00d95690(param_1,this,iVar3,4);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_2;
  return uVar2;
}

/* ref: FUN_00d76890 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d76890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd76890u, gen_a0, gen_a1, gen_a2, 0u);
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
    bVar1 = F_00d95690(param_1,this,iVar3,0x10);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_2;
  return uVar2;
}

/* ref: FUN_00d768d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d768d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd768d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))
                      (param_1 GEN_EDX_ARG,*(undefined4 *)this,(uVar1 * 8 - (uVar1 & 0x3fffffff)) * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d76920 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d76920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined8 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd76920u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a1;)
  undefined8 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,0x1c);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 0x1c)));
  if (puVar1 != ((undefined8 *)GEN_TOP(0x0))) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
    puVar1[2] = param_1[2];
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 3);
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00d76990 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d76990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd76990u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,4);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  return uVar2;
}

/* ref: FUN_00d769d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d769d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd769d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,0x10);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  return uVar2;
}

/* ref: FUN_00d76a10 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d76a10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd76a10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,
                       (uVar1 * 8 - (uVar1 & 0x3fffffff)) * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d76a60 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d76a60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd76a60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,
                       (uVar1 * 8 - (uVar1 & 0x3fffffff)) * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d76ae0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d76ae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd76ae0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x20)));
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x18))),uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0x80000000;
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x14)));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0xc))),uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0x80000000;
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,
                       (uVar1 * 8 - (uVar1 & 0x3fffffff)) * 4);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  return uVar1;
}

/* ref: FUN_00d76bb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d76bb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd76bb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(int *)this = param_1 + 0x28;
  *((int *)GEN_TOP(((int)this + 4))) = param_1 + 0x34;
  *((int *)GEN_TOP(((int)this + 8))) = param_1 + 0x38;
  *((int *)GEN_TOP(((int)this + 0xc))) = param_1 + 8;
  return (uint)this;
}

/* ref: FUN_00d76be0 */
GEN_LIB GEN_FRAME uint F_00d76be0(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xd76be0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  float fVar1;
  float * pfVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  iVar4 = 0;
  pfVar2 = param_3;
  fVar5 = REFG(float, 0x1136e98);
  fVar6 = REFG(float, 0x1136c54);
  if (3 < param_5) {
    iVar3 = (param_5 - 4U >> 2) + 1;
    iVar4 = iVar3 * 4;
    do {
      fVar1 = *pfVar2;
      if (fVar1 < fVar6) {
        fVar6 = fVar1;
      }
      if (fVar5 < fVar1) {
        fVar5 = fVar1;
      }
      fVar1 = pfVar2[param_4];
      if (fVar1 < fVar6) {
        fVar6 = fVar1;
      }
      if (fVar5 < fVar1) {
        fVar5 = fVar1;
      }
      fVar1 = pfVar2[param_4 * 2];
      if (fVar1 < fVar6) {
        fVar6 = fVar1;
      }
      if (fVar5 < fVar1) {
        fVar5 = fVar1;
      }
      fVar1 = pfVar2[param_4 * 3];
      pfVar2 = pfVar2 + param_4 * 4;
      if (fVar1 < fVar6) {
        fVar6 = fVar1;
      }
      if (fVar5 < fVar1) {
        fVar5 = fVar1;
      }
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  if (iVar4 < param_5) {
    iVar4 = param_5 - iVar4;
    do {
      fVar1 = *pfVar2;
      if (fVar1 < fVar6) {
        fVar6 = fVar1;
      }
      if (fVar5 < fVar1) {
        fVar5 = fVar1;
      }
      pfVar2 = pfVar2 + param_4;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  *param_1 = fVar6;
  *param_2 = fVar5 - fVar6;
  return (uint)param_1;
}

/* ref: FUN_00d76cc0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d76cc0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd76cc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10abe98)));
  in_ecx[3] = GEN_FLT_TO(in_ecx[3], REFG(float, 0x10abe98));
  in_ecx[2] = uVar1;
  in_ecx[1] = uVar1;
  *in_ecx = uVar1;
  return (uint)in_ecx;
}

/* ref: FUN_00d76ce0 */
GEN_LIB GEN_FRAME uint F_00d76ce0(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd76ce0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *param_1 = (*param_1 - 1) + param_2 & ~(param_2 - 1U);
  return (uint)param_1;
}

/* ref: FUN_00d76d00 */
GEN_LIB GEN_FRAME ushort F_00d76d00(GEN_P(float param_1, float gen_a0), GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd76d00u, gen_trace_f(gen_a0), gen_a1, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  return (ushort)(int)(((param_1 - *param_2) / param_2[1]) * *(float *)&REFG(undefined, 0x11377e0));
}

/* ref: FUN_00d76d30 */
GEN_LIB GEN_FRAME uint F_00d76d30(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd76d30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00d87f90(param_2,param_1);
  return uVar1;
}

/* ref: FUN_00d76d50 */
GEN_LIB GEN_FRAME uint F_00d76d50(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd76d50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00d76be0(param_1,param_1 + 4,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00d76d80 */
GEN_LIB GEN_FRAME unsigned int F_00d76d80(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd76d80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_2) {
    do {
      uVar1 = *((undefined1 *)GEN_TOP((param_1 + iVar2 * 2)));
      *((undefined1 *)GEN_TOP((param_1 + iVar2 * 2))) = *((undefined1 *)GEN_TOP((param_1 + 1 + iVar2 * 2)));
      *((undefined1 *)GEN_TOP((param_1 + 1 + iVar2 * 2))) = uVar1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_2);
  }
  return 0;
}

/* ref: FUN_00d76db0 */
GEN_LIB GEN_FRAME unsigned int F_00d76db0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd76db0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined1 uVar1;
  undefined1 * puVar2;
  int iVar3;
  
  if (0 < param_2) {
    puVar2 = ((undefined1 *)GEN_TOP((param_1 + 2)));
    iVar3 = param_2;
    do {
      uVar1 = puVar2[-2];
      puVar2[-2] = puVar2[1];
      puVar2[1] = uVar1;
      uVar1 = puVar2[-1];
      puVar2[-1] = *puVar2;
      *puVar2 = uVar1;
      puVar2 = puVar2 + 4;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  return;
}

/* ref: FUN_00d76e00 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00d76e00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd76e00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined1 uVar1;
  byte bVar2;
  
  F_00d76d80(this,0x14);
  uVar1 = *((undefined1 *)GEN_TOP(((int)this + 8)));
  *((undefined1 *)GEN_TOP(((int)this + 8))) = *((undefined1 *)GEN_TOP(((int)this + 10)));
  *((undefined1 *)GEN_TOP(((int)this + 10))) = uVar1;
  bVar2 = *((byte *)GEN_TOP(((int)this + 9)));
  *((undefined1 *)GEN_TOP(((int)this + 9))) = *((undefined1 *)GEN_TOP(((int)this + 0xb)));
  *((byte *)GEN_TOP(((int)this + 0xb))) = bVar2;
  return bVar2;
}

/* ref: FUN_00d76e30 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d76e30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd76e30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  ushort * puVar2;
  int iVar3;
  
  if (*((int *)GEN_TOP(((int)this + 0x34))) != 0) {
    F_00d76e00(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x28))) GEN_EDX_FWD);
    iVar3 = *((int *)GEN_TOP(((int)this + 0x28)));
    F_00d76d80((uint)*((ushort *)GEN_TOP((iVar3 + 0x1e))) + iVar3,
                 (uint)*((ushort *)GEN_TOP((iVar3 + 0x12))) + (uint)*((ushort *)GEN_TOP((iVar3 + 0x10))) +
                 (uint)*((ushort *)GEN_TOP((iVar3 + 0xe))) + (uint)*((ushort *)GEN_TOP((iVar3 + 0xc))));
    iVar1 = *((int *)GEN_TOP(((int)this + 0x28)));
    F_00d76d80((uint)*((ushort *)GEN_TOP((iVar1 + 0x20))) + iVar3,
                 (uint)*((ushort *)GEN_TOP((iVar1 + 0x1a))) + (uint)*((ushort *)GEN_TOP((iVar1 + 0x18))) +
                 (uint)*((ushort *)GEN_TOP((iVar1 + 0x16))) + (uint)*((ushort *)GEN_TOP((iVar1 + 0x14))));
    iVar1 = *((int *)GEN_TOP(((int)this + 0x28)));
    F_00d76db0((uint)*((ushort *)GEN_TOP((iVar1 + 0x22))) + iVar3,
                 (uint)*((ushort *)GEN_TOP((iVar1 + 0x10))) + (uint)*((ushort *)GEN_TOP((iVar1 + 0xc))));
    iVar1 = *((int *)GEN_TOP(((int)this + 0x28)));
    F_00d76d80((uint)*((ushort *)GEN_TOP((iVar1 + 0x22))) + iVar3 +
                 ((uint)*((ushort *)GEN_TOP((iVar1 + 0x10))) + (uint)*((ushort *)GEN_TOP((iVar1 + 0xc)))) * 4,
                 (uint)*((ushort *)GEN_TOP((iVar1 + 0xe))) * 3);
    iVar1 = *((int *)GEN_TOP(((int)this + 0x28)));
    F_00d76db0((uint)*((ushort *)GEN_TOP((iVar1 + 0x22))) +
                 ((uint)*((ushort *)GEN_TOP((iVar1 + 0xe))) * 6 + 0xf +
                  ((uint)*((ushort *)GEN_TOP((iVar1 + 0x10))) + (uint)*((ushort *)GEN_TOP((iVar1 + 0xc)))) * 4 &
                 0xfffffff0) + iVar3,(uint)*((ushort *)GEN_TOP((iVar1 + 0x12))));
    iVar1 = *((int *)GEN_TOP(((int)this + 0x28)));
    F_00d76db0((uint)*((ushort *)GEN_TOP((iVar1 + 0x24))) + iVar3,
                 (uint)*((ushort *)GEN_TOP((iVar1 + 0x18))) + (uint)*((ushort *)GEN_TOP((iVar1 + 0x14))));
    iVar1 = *((int *)GEN_TOP(((int)this + 0x28)));
    F_00d76db0((uint)*((ushort *)GEN_TOP((iVar1 + 0x24))) +
                 (((uint)*((ushort *)GEN_TOP((iVar1 + 0x18))) + (uint)*((ushort *)GEN_TOP((iVar1 + 0x14)))) * 4 + 0xf &
                 0xfffffff0) + iVar3,(uint)*((ushort *)GEN_TOP((iVar1 + 0x1a))));
    iVar1 = *((int *)GEN_TOP(((int)this + 0x28)));
    F_00d76db0((uint)*((ushort *)GEN_TOP((iVar1 + 0x26))) + iVar3,
                 (uint)*((ushort *)GEN_TOP((iVar1 + 0x18))) + (uint)*((ushort *)GEN_TOP((iVar1 + 0x14))));
    iVar1 = *((int *)GEN_TOP(((int)this + 0x28)));
    F_00d76db0((uint)*((ushort *)GEN_TOP((iVar1 + 0x26))) +
                 (((uint)*((ushort *)GEN_TOP((iVar1 + 0x18))) + (uint)*((ushort *)GEN_TOP((iVar1 + 0x14)))) * 4 + 0xf &
                 0xfffffff0) + iVar3,(uint)*((ushort *)GEN_TOP((iVar1 + 0x1a))));
    iVar3 = 0;
    if (*((short *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x28))) + 6))) != 0) {
      do {
        puVar2 = *((ushort * PTR32 *)GEN_TOP(((int)this + 0x28)));
        F_00d76d80((int)puVar2 + (uint)*puVar2 + (uint)puVar2[0xe] * iVar3,
                     (uint)puVar2[0xb] * 3 + (uint)puVar2[0xd] + (uint)puVar2[0xc] +
                     (uint)puVar2[10]);
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)(uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x28))) + 6))));
    }
    *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  }
  return;
}

/* ref: FUN_00d76ff0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d76ff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd76ff0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_1[1]) {
    do {
      piVar1 = *(int * PTR32 *)this;
      iVar2 = *param_1;
      if (piVar1[1] == (piVar1[2] & 0x3fffffffU)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar1,1);
      }
      *((undefined1 *)GEN_TOP((*piVar1 + piVar1[1]))) = *((undefined1 *)GEN_TOP((iVar2 + iVar3)));
      piVar1[1] = piVar1[1] + 1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  return;
}

/* ref: FUN_00d77050 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d77050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd77050u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  undefined1 * puVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP((*(int *)this + 4)));
  puVar2 = ((undefined1 *)GEN_TOP((iVar3 - 1 + param_1 & ~(param_1 - 1U))));
  if (iVar3 < (int)puVar2) {
    iVar3 = (int)puVar2 - iVar3;
    do {
      piVar1 = *(int * PTR32 *)this;
      if (piVar1[1] == (piVar1[2] & 0x3fffffffU)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar1,1);
      }
      puVar2 = ((undefined1 *)GEN_TOP((*piVar1 + piVar1[1])));
      *puVar2 = 0;
      piVar1[1] = piVar1[1] + 1;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  return (uint)puVar2;
}

/* ref: FUN_00d770b0 */
GEN_LIB GEN_FRAME uint F_00d770b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(float param_5, float gen_a4), GEN_P(int * param_6, unsigned int gen_a5), GEN_P(int * param_7, unsigned int gen_a6))
{
  GEN_ENTER(0xd770b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  GEN_PIN(int * param_6 = (int *)(uintptr_t)gen_a5;)
  GEN_PIN(int * param_7 = (int *)(uintptr_t)gen_a6;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  float * pfVar1;
  undefined8 uVar2;
  undefined8 * puVar3;
  int * piVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar7 = *((float *)GEN_TOP((param_3 + 4 + (uint)(ushort)param_1 * 8)));
  pfVar1 = ((float *)GEN_TOP((param_3 + (uint)(ushort)param_1 * 8)));
  if (fVar7 <= param_5 * REFG(float, 0x10928e4)) {
    if (param_4 != 0) {
      fVar5 = *((float *)GEN_TOP((param_4 + (uint)(ushort)param_2 * 4)));
      if ((fVar5 - param_5 <= *pfVar1) &&
         (fVar6 = *pfVar1 + fVar7, fVar5 = fVar5 + param_5,
         (!GEN_ISNAN(fVar5) && !GEN_ISNAN(fVar6)) && !(fVar5 < fVar6))) {
        return (uint)pfVar1;
      }
    }
    fVar7 = fVar7 * REFG(float, 0x1088068);
    fVar5 = *pfVar1;
    (*(float *)(gen_frame + 0x0)) = gen_bits2f(CONCAT22((*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x0)) + 2)),(ushort)param_2));
    if (param_6[1] == (param_6[2] & 0x3fffffffU)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_6,8);
    }
    pfVar1 = ((float *)GEN_TOP((*param_6 + param_6[1] * 8)));
    puVar3 = ((undefined8 *)GEN_TOP(0x0));
    piVar4 = param_6;
    if (pfVar1 != ((float *)GEN_TOP(0x0))) {
      *pfVar1 = fVar7 + fVar5;
      pfVar1[1] = (*(float *)(gen_frame + 0x0));
      param_6[1] = param_6[1] + 1;
      return (uint)pfVar1;
    }
  }
  else {
    uVar2 = *(undefined8 *)pfVar1;
    if (param_7[1] == (param_7[2] & 0x3fffffffU)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_7,0xc);
    }
    puVar3 = ((undefined8 *)GEN_TOP((*param_7 + param_7[1] * 0xc)));
    piVar4 = param_7;
    if (puVar3 != ((undefined8 *)GEN_TOP(0x0))) {
      *puVar3 = uVar2;
      *(uint *)(puVar3 + 1) = CONCAT22((ushort)param_2,(ushort)param_1);
    }
  }
  piVar4[1] = piVar4[1] + 1;
  return (uint)puVar3;
}

/* ref: FUN_00d771d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d771d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd771d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  F_00d77050(this GEN_EDX_FWD,param_2);
  iVar1 = *(int *)this;
  iVar4 = *((int *)GEN_TOP((iVar1 + 4))) + param_2;
  uVar2 = *((uint *)GEN_TOP((iVar1 + 8))) & 0x3fffffff;
  if ((int)uVar2 < iVar4) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= iVar4) {
      iVar3 = iVar4;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),iVar1,iVar3,1);
  }
  *((int *)GEN_TOP((iVar1 + 4))) = iVar4;
  uVar2 = F_00da1010(((*(int * PTR32 *)this)[1] - param_2) + **(int * PTR32 *)this,param_1,param_2);
  return uVar2;
}

/* ref: FUN_00d77240 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d77240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd77240u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  F_00d77050(this GEN_EDX_FWD,4);
  uVar1 = F_00d771d0(this GEN_EDX_ARG,param_1,4);
  return uVar1;
}

/* ref: FUN_00d77260 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d77260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd77260u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00d771d0(this GEN_EDX_FWD,param_1,2);
  return uVar1;
}

/* ref: FUN_00d77280 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d77280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd77280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00d771d0(this GEN_EDX_FWD,param_1,4);
  return uVar1;
}

/* ref: FUN_00d772a0 */
GEN_LIB GEN_NOFRAME uint F_00d772a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(float param_5, float gen_a4), GEN_P(int * param_6, unsigned int gen_a5), GEN_P(int * param_7, unsigned int gen_a6))
{
  GEN_ENTER(0xd772a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  GEN_PIN(int * param_6 = (int *)(uintptr_t)gen_a5;)
  GEN_PIN(int * param_7 = (int *)(uintptr_t)gen_a6;)
  GEN_FRAME_DECL(0x4e, 2);
  undefined4 * puVar1;
  uint uVar2;
  undefined2 uVar3;
  bool bVar4;
  float * pfVar5;
  undefined8 * puVar6;
  short sVar7;
  int iVar8;
  float * pfVar9;
  int * piVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  
  iVar8 = 0;
  pfVar9 = ((float *)GEN_TOP((param_4 + 0x10 + (uint)(ushort)param_1 * 0x30)));
  ((char *)(gen_frame + 0x36))[0] = '\0';
  ((char *)(gen_frame + 0x36))[1] = '\0';
  ((char *)(gen_frame + 0x36))[2] = '\0';
  ((char *)(gen_frame + 0x36))[3] = '\0';
  (*(undefined4 *)(gen_frame + 0x32)) = 0;
  pfVar5 = ((float *)GEN_TOP(((uint)(ushort)param_1 * 0x60 + 0x20 + param_3)));
  do {
    fVar11 = pfVar5[1];
    fVar12 = *pfVar5;
    ((float *)(gen_frame + 0xe))[(int)(iVar8)] = fVar12;
    ((float *)(gen_frame + 0x1e))[(int)(iVar8)] = fVar11;
    if (!(fVar11 <= param_5 * REFG(float, 0x10928e4))) {
      bVar4 = true;
      goto LAB_00d7737a;
    }
    fVar11 = *pfVar9;
    if ((fVar11 - param_5 <= fVar12) && (fVar12 + pfVar5[1] <= fVar11 + param_5)) {
      ((char *)(gen_frame + 0x36))[(int)(iVar8)] = '\x01';
    }
    if ((gen_bits2f((uint)gen_fl2bits(fVar11) ^ REFG(uint, 0x10920d0)) - param_5 <= fVar12) &&
       (fVar12 + pfVar5[1] <= param_5 - fVar11)) {
      *((undefined1 *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0x32)) + iVar8))) = 1;
    }
    iVar8 = iVar8 + 1;
    pfVar5 = pfVar5 + 2;
    pfVar9 = pfVar9 + 1;
  } while (iVar8 < 4);
  bVar4 = false;
LAB_00d7737a: ;
  uVar2 = param_2 * 3 + 1;
  uVar3 = (undefined2)uVar2;
  if (bVar4) {
    sVar7 = (ushort)param_1 * 3 + 1;
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x32)) + 2)) = uVar3;
    uVar2 = param_7[2];
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x32)) + 0)) = sVar7;
    (*(undefined4 *)(gen_frame + 0x32)) = CONCAT22(uVar3,sVar7);
    if (param_7[1] == (uVar2 & 0x3fffffff)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_7,4);
    }
    puVar1 = ((undefined4 *)GEN_TOP((*param_7 + param_7[1] * 4)));
    puVar6 = ((undefined8 *)GEN_TOP(0x0));
    piVar10 = param_7;
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = (*(undefined4 *)(gen_frame + 0x32));
      param_7[1] = param_7[1] + 1;
      return (uint)puVar1;
    }
  }
  else {
    if ((((((char *)(gen_frame + 0x36))[0] != '\0') && (((char *)(gen_frame + 0x36))[1] != '\0')) && (((char *)(gen_frame + 0x36))[2] != '\0')) &&
       (((char *)(gen_frame + 0x36))[3] != '\0')) {
      return uVar2;
    }
    if ((((char)(*(undefined4 *)(gen_frame + 0x32)) != '\0') && ((*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x32)) + 1)) != '\0')) &&
       (((*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x32)) + 2)) != '\0' && ((*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x32)) + 3)) != '\0')))) {
      return uVar2;
    }
    fVar11 = *(float *)&REFG(undefined, 0x11378f0) * ((float *)(gen_frame + 0x1e))[0] + ((float *)(gen_frame + 0xe))[0];
    fVar12 = *(float *)&REFG(undefined, 0x11378f4) * ((float *)(gen_frame + 0x1e))[1] + ((float *)(gen_frame + 0xe))[1];
    fVar13 = *(float *)&REFG(undefined, 0x11378f8) * ((float *)(gen_frame + 0x1e))[2] + ((float *)(gen_frame + 0xe))[2];
    fVar14 = *(float *)&REFG(undefined, 0x11378fc) * ((float *)(gen_frame + 0x1e))[3] + ((float *)(gen_frame + 0xe))[3];
    fVar15 = fVar13 * fVar13 + fVar11 * fVar11;
    fVar16 = fVar14 * fVar14 + fVar12 * fVar12;
    fVar17 = fVar11 * fVar11 + fVar13 * fVar13;
    fVar18 = fVar12 * fVar12 + fVar14 * fVar14;
    fVar19 = fVar16 + fVar15;
    fVar15 = fVar15 + fVar16;
    fVar20 = fVar18 + fVar17;
    fVar17 = fVar17 + fVar18;
    memset(&auVar27, 0, 12);
    (*(undefined4 *)((char *)&auVar27 + 12)) = 0;
    (*(undefined4 *)((char *)&auVar28 + 4)) = (undefined4)gen_fl2bits(fVar15);
    (*(undefined4 *)((char *)&auVar28 + 0)) = (undefined4)gen_fl2bits(fVar19);
    (*(undefined4 *)((char *)&auVar28 + 8)) = (undefined4)gen_fl2bits(fVar20);
    (*(undefined4 *)((char *)&auVar28 + 12)) = (undefined4)gen_fl2bits(fVar17);
    gen_rsqrtps(&(auVar28), &(auVar27), &(auVar28));
    fVar23 = (*(float *)((char *)&auVar28 + 0));
    fVar24 = (*(float *)((char *)&auVar28 + 4));
    fVar25 = (*(float *)((char *)&auVar28 + 8));
    fVar26 = (*(float *)((char *)&auVar28 + 12));
    fVar16 = *(float *)&REFG(undefined, 0x11378e0) - (fVar23 * fVar19) * fVar23;
    fVar18 = *(float *)&REFG(undefined, 0x11378e4) - (fVar24 * fVar15) * fVar24;
    fVar21 = *(float *)&REFG(undefined, 0x11378e8) - (fVar25 * fVar20) * fVar25;
    fVar22 = *(float *)&REFG(undefined, 0x11378ec) - (fVar26 * fVar17) * fVar26;
    fVar23 = *(float *)&REFG(undefined, 0x11378f0) * fVar23;
    fVar24 = *(float *)&REFG(undefined, 0x11378f4) * fVar24;
    fVar25 = *(float *)&REFG(undefined, 0x11378f8) * fVar25;
    fVar26 = *(float *)&REFG(undefined, 0x11378fc) * fVar26;
    if (param_6[1] == (param_6[2] & 0x3fffffffU)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_6,0x20);
    }
    puVar6 = ((undefined8 *)GEN_TOP((param_6[1] * 0x20 + *param_6)));
    piVar10 = param_6;
    if (puVar6 != ((undefined8 *)GEN_TOP(0x0))) {
      *puVar6 = CONCAT44((uint)gen_fl2bits(gen_bits2f(~-(uint)(fVar15 <= 0.0) &
                                                      (uint)gen_fl2bits(fVar18 * fVar24)) * fVar12),
                         (uint)gen_fl2bits(gen_bits2f(~-(uint)(fVar19 <= 0.0) &
                                                      (uint)gen_fl2bits(fVar16 * fVar23)) * fVar11))
      ;
      puVar6[1] = CONCAT44((uint)gen_fl2bits(gen_bits2f(~-(uint)(fVar17 <= 0.0) &
                                                        (uint)gen_fl2bits(fVar22 * fVar26)) * fVar14
                                            ),
                           (uint)gen_fl2bits(gen_bits2f(~-(uint)(fVar20 <= 0.0) &
                                                        (uint)gen_fl2bits(fVar21 * fVar25)) * fVar13
                                            ));
      puVar6[2] = CONCAT62((*(undefined6 *)(gen_frame + 0x0)),uVar3);
      puVar6[3] = (*(undefined8 *)(gen_frame + 0x6));
    }
  }
  piVar10[1] = piVar10[1] + 1;
  return (uint)puVar6;
}

/* ref: FUN_00d774d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d774d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd774d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  int iVar2;
  
  uVar1 = F_00d77050(this GEN_EDX_FWD,2);
  iVar2 = 0;
  if (0 < param_1[1]) {
    do {
      uVar1 = F_00d77260(this GEN_EDX_ARG,*param_1 + 4 + iVar2 * 8);
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1[1]);
  }
  return uVar1;
}

/* ref: FUN_00d77510 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d77510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd77510u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = F_00d77050(this GEN_EDX_FWD,2);
  iVar3 = 0;
  if (0 < param_1[1]) {
    iVar2 = 0;
    do {
      uVar1 = F_00d77260(this GEN_EDX_ARG,*param_1 + 0x10 + iVar2);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x20;
    } while (iVar3 < param_1[1]);
  }
  return uVar1;
}

/* ref: FUN_00d77560 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d77560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd77560u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = F_00d77050(this GEN_EDX_FWD,2);
  iVar3 = 0;
  if (0 < param_1[1]) {
    iVar2 = 0;
    do {
      uVar1 = F_00d77260(this GEN_EDX_ARG,*param_1 + 10 + iVar2);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0xc;
    } while (iVar3 < param_1[1]);
  }
  return uVar1;
}

/* ref: FUN_00d775b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d775b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd775b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  int iVar2;
  
  uVar1 = F_00d77050(this GEN_EDX_FWD,2);
  iVar2 = 0;
  if (0 < param_1[1]) {
    do {
      uVar1 = F_00d77260(this GEN_EDX_ARG,*param_1 + 2 + iVar2 * 4);
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1[1]);
  }
  return uVar1;
}

/* ref: FUN_00d775f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d775f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd775f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  int iVar2;
  
  uVar1 = F_00d77050(this GEN_EDX_FWD,4);
  iVar2 = 0;
  if (0 < param_1[1]) {
    do {
      uVar1 = F_00d77280(this GEN_EDX_ARG,*param_1 + iVar2 * 8);
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1[1]);
  }
  return uVar1;
}

/* ref: FUN_00d77630 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d77630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd77630u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int * piVar1;
  int iVar2;
  
  piVar1 = param_1;
  iVar2 = 0;
  if (0 < param_1[1]) {
    param_1 = ((int *)GEN_TOP(0x0));
    do {
      F_00d76d30(((undefined1 *)(gen_frame + 0x0)),*piVar1 + (int)param_1);
      F_00d77260(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
      F_00d77260(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x2)));
      F_00d77260(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
      param_1 = ((int *)GEN_TOP(((int)param_1 + 0x20)));
      iVar2 = iVar2 + 1;
    } while (iVar2 < piVar1[1]);
  }
  return;
}

/* ref: FUN_00d77690 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d77690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd77690u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = F_00d77050(this GEN_EDX_FWD,4);
  iVar3 = 0;
  if (0 < param_1[1]) {
    iVar2 = 0;
    do {
      uVar1 = F_00d77280(this GEN_EDX_ARG,*param_1 + iVar2);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0xc;
    } while (iVar3 < param_1[1]);
  }
  return uVar1;
}

/* ref: FUN_00d776d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d776d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd776d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = F_00d77050(param_1 GEN_EDX_FWD,4);
  uVar1 = (*(uint *)&gen_args[0]);
  iVar4 = 0;
  if (0 < *((int *)GEN_TOP(((*(uint *)&gen_args[0]) + 4)))) {
    iVar3 = 0;
    do {
      (*(uint *)&gen_args[0]) = (uint)gen_fl2bits(*((float *)GEN_TOP((*((int *)GEN_TOP(uVar1)) + 4 + iVar3))) * REFG(float, 0x1137338));
      uVar2 = F_00d77280(param_1 GEN_EDX_ARG,&(*(uint *)&gen_args[0]));
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0xc;
    } while (iVar4 < *((int *)GEN_TOP((uVar1 + 4))));
  }
  return uVar2;
}

/* ref: FUN_00d77730 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d77730(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd77730u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  int * piVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = (*(int * PTR32 *)&gen_args[0]);
  iVar5 = 0;
  if (0 < (*(int * PTR32 *)&gen_args[0])[1]) {
    iVar4 = 0;
    do {
      iVar3 = *piVar1 + iVar4;
      uVar2 = F_00d76d00(GEN_ARGF(*((float *)GEN_TOP(((*(int *)&gen_args[1]) + (uint)*((ushort *)GEN_TOP((iVar3 + 8))) * 4)))),iVar3);
      (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((uint)uVar2));
      F_00d77260(this GEN_EDX_ARG,&(*(int * PTR32 *)&gen_args[0]));
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0xc;
    } while (iVar5 < piVar1[1]);
  }
  return;
}

/* ref: FUN_00d77790 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d77790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd77790u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_1[1]) {
    do {
      F_00d76d30(((undefined1 *)(gen_frame + 0x0)),(uint)*((ushort *)GEN_TOP((*param_1 + iVar1 * 4))) * 0x10 + param_2);
      F_00d77260(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
      F_00d77260(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x2)));
      F_00d77260(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_1[1]);
  }
  return;
}

/* ref: FUN_00d777f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d777f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd777f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[4];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  GEN_FRAME_DECL_TOP(0x2d0, 0, 4);
  int * piVar1;
  code * pcVar2;
  ushort uVar3;
  uint uVar4;
  float * pfVar5;
  int iVar6;
  undefined * pvVar7;
  uint uVar8;
  int iVar9;
  int * _Size;
  float fVar10;
  int iVar11;
  undefined * puVar12;
  undefined4 uVar13;
  
  **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = 0;
  **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xc))) = 4;
  **((uint * PTR32 *)GEN_TOP(((int)this + 8))) = (uint)(*(undefined * PTR32 *)&gen_args[1]);
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 0xc)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x1c))))(piVar1 GEN_EDX_FWD);
  (*(uint *)(gen_frame + 0x294)) = uVar4;
  uVar4 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0x40)));
  (*(int *)(gen_frame + 0x24c)) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0x1c)));
  (*(undefined4 *)(gen_frame + 0x260)) = 0;
  (*(int *)(gen_frame + 0x264)) = 0;
  (*(uint *)(gen_frame + 0x268)) = 0x80000000;
  (*(undefined4 *)(gen_frame + 0x250)) = 0;
  (*(int *)(gen_frame + 0x254)) = 0;
  (*(uint *)(gen_frame + 0x258)) = 0x80000000;
  (*(undefined4 *)(gen_frame + 0x284)) = 0;
  (*(int *)(gen_frame + 0x288)) = 0;
  (*(uint *)(gen_frame + 0x28c)) = 0x80000000;
  (*(undefined4 *)(gen_frame + 0x29c)) = 0;
  (*(int *)(gen_frame + 0x2a0)) = 0;
  (*(uint *)(gen_frame + 0x2a4)) = 0x80000000;
  (*(undefined4 *)(gen_frame + 0x278)) = 0;
  (*(int *)(gen_frame + 0x27c)) = 0;
  (*(uint *)(gen_frame + 0x280)) = 0x80000000;
  (*(undefined4 *)(gen_frame + 0x2a8)) = 0;
  (*(int *)(gen_frame + 0x2ac)) = 0;
  (*(uint *)(gen_frame + 0x2b0)) = 0x80000000;
  iVar6 = piVar1[4];
  (*(uint *)(gen_frame + 0x298)) = uVar4;
  (*(undefined4 *)(gen_frame + 0x200)) = 0;
  (*(undefined4 *)(gen_frame + 0x204)) = 0;
  (*(undefined4 *)(gen_frame + 0x208)) = 0x80000000;
  (*(undefined4 *)(gen_frame + 0x234)) = 0;
  (*(undefined4 *)(gen_frame + 0x238)) = 0;
  (*(undefined4 *)(gen_frame + 0x23c)) = 0x80000000;
  if (iVar6 * 0xc == 0) {
    (*(float * PTR32 *)(gen_frame + 0x2b4)) = ((float *)GEN_TOP(0x0));
LAB_00d778e9: ;
    (*(int *)(gen_frame + 0x274)) = ((int)0x80000000);
  }
  else {
    (*(int *)(gen_frame + 0x240)) = iVar6 * 0x60;
    pfVar5 = ((float *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x240)))));
    (*(float * PTR32 *)(gen_frame + 0x2b4)) = pfVar5;
    iVar6 = (int)((*(int *)(gen_frame + 0x240)) + ((*(int *)(gen_frame + 0x240)) >> 0x1f & 7U)) >> 3;
    (*(int *)(gen_frame + 0x274)) = iVar6;
    if (iVar6 == 0) goto LAB_00d778e9;
  }
  if (piVar1[5] == 0) {
    (*(uint *)(gen_frame + 0x26c)) = 0;
LAB_00d77940: ;
    (*(int *)(gen_frame + 0x270)) = ((int)0x80000000);
  }
  else {
    (*(int *)(gen_frame + 0x244)) = piVar1[5] * 8;
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x244)));
    (*(uint *)(gen_frame + 0x26c)) = uVar4;
    iVar6 = (int)((*(int *)(gen_frame + 0x244)) + ((*(int *)(gen_frame + 0x244)) >> 0x1f & 7U)) >> 3;
    if (iVar6 == 0) goto LAB_00d77940;
    (*(int *)(gen_frame + 0x270)) = iVar6;
  }
  (*(uint *)(gen_frame + 0x25c)) = piVar1[0xd];
  iVar6 = piVar1[4] * 0xc;
  (*(undefined4 *)(gen_frame + 0x248)) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0x24)));
  if (0 < iVar6) {
    (*(float * PTR32 *)(gen_frame + 0x2b8)) = (*(float * PTR32 *)(gen_frame + 0x2b4));
    (*(int *)(gen_frame + 0x2bc)) = iVar6;
    (*(undefined * PTR32 *)&gen_args[1]) = ((undefined *)GEN_TOP(piVar1[10]));
    do {
      F_00d76d50((*(float * PTR32 *)(gen_frame + 0x2b8)),(*(undefined * PTR32 *)&gen_args[1]),iVar6,(*(uint *)(gen_frame + 0x294)));
      (*(undefined * PTR32 *)&gen_args[1]) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 4)));
      (*(float * PTR32 *)(gen_frame + 0x2b8)) = (*(float * PTR32 *)(gen_frame + 0x2b8)) + 2;
      iVar11 = (*(int *)(gen_frame + 0x2bc)) - 1;
      (*(int *)(gen_frame + 0x2bc)) = iVar11;
    } while (iVar11 != 0);
  }
  if (0 < piVar1[5]) {
    (*(undefined * PTR32 *)&gen_args[1]) = ((undefined *)GEN_TOP((*(uint *)(gen_frame + 0x26c))));
    (*(int *)(gen_frame + 0x2bc)) = piVar1[5];
    uVar4 = (*(uint *)(gen_frame + 0x25c));
    do {
      F_00d76d50((*(undefined * PTR32 *)&gen_args[1]),uVar4,piVar1[5],(*(uint *)(gen_frame + 0x294)));
      (*(undefined * PTR32 *)&gen_args[1]) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 8)));
      uVar4 = uVar4 + 4;
      iVar6 = (*(int *)(gen_frame + 0x2bc)) - 1;
      (*(int *)(gen_frame + 0x2bc)) = iVar6;
    } while (iVar6 != 0);
  }
  uVar4 = 0;
  (*(uint *)(gen_frame + 0x25c)) = 0;
  if (0 < piVar1[4]) {
    (*(undefined * PTR32 *)&gen_args[1]) = ((undefined *)GEN_TOP(0x0));
    do {
      uVar8 = (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 0x10))) + uVar4 * 2)));
      iVar6 = 0;
      (*(float * PTR32 *)(gen_frame + 0x2b8)) = ((float *)GEN_TOP((uVar4 * 0x10 + *(*(int * PTR32 *)&gen_args[2]))));
      (*(int * PTR32 *)(gen_frame + 0x290)) = ((int *)GEN_TOP(uVar8));
      (*(int *)(gen_frame + 0x2bc)) = uVar8 * 0xc;
      do {
        F_00d770b0((int)(*(undefined * PTR32 *)&gen_args[1]) + iVar6,iVar6 + (*(int *)(gen_frame + 0x2bc)),(*(float * PTR32 *)(gen_frame + 0x2b4)),(*(undefined4 *)(gen_frame + 0x248)),(*(float * PTR32 *)(gen_frame + 0x2b8))[1],&(*(undefined4 *)(gen_frame + 0x260)),
                     &(*(undefined4 *)(gen_frame + 0x29c)));
        iVar6 = iVar6 + 1;
      } while ((ushort)iVar6 < 3);
      iVar6 = 8;
      do {
        F_00d770b0((int)(*(undefined * PTR32 *)&gen_args[1]) + iVar6,iVar6 + (*(int *)(gen_frame + 0x2bc)),(*(float * PTR32 *)(gen_frame + 0x2b4)),(*(undefined4 *)(gen_frame + 0x248)),(*(float * PTR32 *)(gen_frame + 0x2b8))[2],&(*(undefined4 *)(gen_frame + 0x260)),
                     &(*(undefined4 *)(gen_frame + 0x29c)));
        uVar8 = (*(uint *)(gen_frame + 0x25c));
        iVar6 = iVar6 + 1;
      } while ((ushort)iVar6 < 0xb);
      F_00d772a0((*(uint *)(gen_frame + 0x25c)),(*(int * PTR32 *)(gen_frame + 0x290)),(*(float * PTR32 *)(gen_frame + 0x2b4)),(*(undefined4 *)(gen_frame + 0x248)),*(*(float * PTR32 *)(gen_frame + 0x2b8)),&(*(undefined4 *)(gen_frame + 0x250)),&(*(undefined4 *)(gen_frame + 0x278)));
      (*(undefined * PTR32 *)&gen_args[1]) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0xc)));
      uVar4 = uVar8 + 1 & 0xffff;
      (*(uint *)(gen_frame + 0x25c)) = uVar8 + 1;
    } while ((int)uVar4 < piVar1[4]);
  }
  uVar4 = 0;
  if (0 < piVar1[5]) {
    uVar8 = 0;
    do {
      F_00d770b0(uVar4,(uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 0x1c))) + uVar8 * 2))),(*(uint *)(gen_frame + 0x26c)),0,GEN_ARGF(*((float *)GEN_TOP((uVar8 * 0x10 + 0xc + *(*(int * PTR32 *)&gen_args[3]))))),&(*(undefined4 *)(gen_frame + 0x284)),&(*(undefined4 *)(gen_frame + 0x2a8)));
      uVar4 = uVar4 + 1;
      uVar8 = uVar4 & 0xffff;
    } while ((int)uVar8 < piVar1[5]);
  }
  if (-1 < (*(int *)(gen_frame + 0x270))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0x26c)),(*(int *)(gen_frame + 0x270)) * 8);
  }
  if (-1 < (*(int *)(gen_frame + 0x274))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(float * PTR32 *)(gen_frame + 0x2b4)),(*(int *)(gen_frame + 0x274)) * 8);
  }
  _Size = ((int *)GEN_TOP(((*(uint *)(gen_frame + 0x298)) + (*(int *)(gen_frame + 0x24c)))));
  (*(int * PTR32 *)(gen_frame + 0x290)) = _Size;
  if (_Size == ((int *)GEN_TOP(0x0))) {
    (*(undefined * PTR32 *)&gen_args[1]) = ((undefined *)GEN_TOP(0x0));
  }
  else {
    pcVar2 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc)));
    (*(int * PTR32 *)&gen_args[2]) = _Size;
    (*(undefined * PTR32 *)&gen_args[1]) = ((undefined *)GEN_TOP((*pcVar2)(&REFG(undefined * PTR32, 0x13516ac),&(*(int * PTR32 *)&gen_args[2]))));
    if ((*(int * PTR32 *)&gen_args[2]) != ((int *)GEN_TOP(0x0))) {
      (*(int * PTR32 *)&gen_args[3]) = (*(int * PTR32 *)&gen_args[2]);
      goto LAB_00d77bb3;
    }
  }
  (*(int * PTR32 *)&gen_args[3]) = ((int *)GEN_TOP(0x80000000));
LAB_00d77bb3: ;
  (*(undefined * PTR32 *)(gen_frame + 0x2c0)) = (*(undefined * PTR32 *)&gen_args[1]);
  (*(int * PTR32 *)(gen_frame + 0x2c4)) = _Size;
  (*(int * PTR32 *)(gen_frame + 0x2c8)) = (*(int * PTR32 *)&gen_args[3]);
  if (0 < (int)_Size) {
    F_00c48350((*(undefined * PTR32 *)&gen_args[1]),0,(gen_size32)_Size);
  }
  (*(int * PTR32 *)&gen_args[2]) = ((int *)GEN_TOP(0x0));
  if (0 < *((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 0x14)))) {
    do {
      *((undefined1 *)GEN_TOP(((int)*((short *)GEN_TOP((*((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 0x10))) + (int)(*(int * PTR32 *)&gen_args[2]) * 2))) + (int)(*(undefined * PTR32 *)&gen_args[1])))) = 0xff;
      (*(int * PTR32 *)&gen_args[2]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 1)));
    } while ((int)(*(int * PTR32 *)&gen_args[2]) < *((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 0x14))));
  }
  iVar6 = 0;
  if (0 < *((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 0x20)))) {
    do {
      iVar11 = iVar6 * 2;
      iVar6 = iVar6 + 1;
      *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + (*(int *)(gen_frame + 0x24c)) + *((short *)GEN_TOP((*((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 0x1c))) + iVar11))))))
           = 0xff;
      _Size = (*(int * PTR32 *)(gen_frame + 0x290));
    } while (iVar6 < *((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 0x20))));
  }
  (*(undefined2 *)(gen_frame + 0x210)) = (undefined2)(*(uint *)(gen_frame + 0x298));
  (*(undefined2 *)(gen_frame + 0x20e)) = (undefined2)(*(int *)(gen_frame + 0x24c));
  (*(undefined2 *)(gen_frame + 0x212)) = (undefined2)(*(uint *)(gen_frame + 0x294));
  (*(undefined2 *)(gen_frame + 0x21a)) = (undefined2)(*(int *)(gen_frame + 0x254));
  (*(undefined2 *)(gen_frame + 0x21c)) = 0;
  (*(undefined2 *)(gen_frame + 0x218)) = (undefined2)(*(int *)(gen_frame + 0x264));
  (*(undefined2 *)(gen_frame + 0x220)) = (undefined2)(*(int *)(gen_frame + 0x2a0));
  (*(undefined2 *)(gen_frame + 0x222)) = (undefined2)(*(int *)(gen_frame + 0x27c));
  (*(undefined2 *)(gen_frame + 0x21e)) = (undefined2)(*(int *)(gen_frame + 0x288));
  (*(int * PTR32 *)&gen_args[0]) = _Size + 10;
  (*(int *)(gen_frame + 0x214)) = piVar1[3];
  (*(undefined2 *)(gen_frame + 0x224)) = 0;
  (*(undefined2 *)(gen_frame + 0x226)) = (undefined2)(*(int *)(gen_frame + 0x2ac));
  F_00d76ce0(&(*(int * PTR32 *)&gen_args[0]),2);
  iVar6 = (*(int *)(gen_frame + 0x254));
  (*(undefined2 *)(gen_frame + 0x22a)) = (short)(*(int * PTR32 *)&gen_args[0]);
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + ((*(int *)(gen_frame + 0x264)) + (*(int *)(gen_frame + 0x288)) + (*(int *)(gen_frame + 0x254))) * 2)));
  F_00d76ce0(&(*(int * PTR32 *)&gen_args[0]),2);
  (*(undefined2 *)(gen_frame + 0x22c)) = (short)(*(int * PTR32 *)&gen_args[0]);
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + ((*(int *)(gen_frame + 0x2ac)) + (*(int *)(gen_frame + 0x27c)) + (*(int *)(gen_frame + 0x2a0))) * 2)));
  F_00d76ce0(&(*(int * PTR32 *)&gen_args[0]),0x10);
  (*(undefined2 *)(gen_frame + 0x22e)) = (short)(*(int * PTR32 *)&gen_args[0]);
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + (*(int *)(gen_frame + 0x264)) * 4 + iVar6 * 6)));
  F_00d76ce0(&(*(int * PTR32 *)&gen_args[0]),0x10);
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + (*(int *)(gen_frame + 0x288)) * 4)));
  F_00d76ce0(&(*(int * PTR32 *)&gen_args[0]),0x10);
  iVar6 = (*(int *)(gen_frame + 0x2a0)) * 4;
  (*(undefined2 *)(gen_frame + 0x230)) = (short)(*(int * PTR32 *)&gen_args[0]);
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + iVar6)));
  F_00d76ce0(&(*(int * PTR32 *)&gen_args[0]),0x10);
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + (*(int *)(gen_frame + 0x2ac)) * 4)));
  F_00d76ce0(&(*(int * PTR32 *)&gen_args[0]),0x10);
  (*(undefined2 *)(gen_frame + 0x232)) = (short)(*(int * PTR32 *)&gen_args[0]);
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + iVar6)));
  F_00d76ce0(&(*(int * PTR32 *)&gen_args[0]),0x10);
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + (*(int *)(gen_frame + 0x2ac)) * 4)));
  F_00d76ce0(&(*(int * PTR32 *)&gen_args[0]),0x10);
  uVar4 = (*(uint *)(gen_frame + 0x294));
  (*(undefined2 *)(gen_frame + 0x20c)) = (short)(*(int * PTR32 *)&gen_args[0]);
  uVar3 = ((short)(*(int *)(gen_frame + 0x2a0)) + (short)(*(int *)(gen_frame + 0x27c)) * 3 + (short)(*(int *)(gen_frame + 0x2ac))) * 2 + 0xfU & 0xfff0;
  (*(ushort *)(gen_frame + 0x228)) = uVar3;
  iVar6 = (uint)uVar3 * ((*(uint *)(gen_frame + 0x294)) & 0xffff) + ((uint)(*(int * PTR32 *)&gen_args[0]) & 0xffff);
  uVar8 = *((uint *)GEN_TOP((*(int *)this + 8))) & 0x3fffffff;
  if ((int)uVar8 < iVar6) {
    iVar11 = uVar8 * 2;
    if (iVar6 < iVar11) {
      iVar6 = iVar11;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),*(int *)this,iVar6,1);
  }
  F_00d771d0(this GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0x20c)),0x28);
  F_00d76ff0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x2c0)));
  F_00d774d0(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x260)));
  F_00d774d0(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x200)));
  F_00d77510(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x250)));
  F_00d774d0(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x284)));
  F_00d77560(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x29c)));
  F_00d77560(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x234)));
  F_00d775b0(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x278)));
  F_00d77560(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x2a8)));
  F_00d77050(this GEN_EDX_ARG,0x10);
  F_00d775f0(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x260)));
  F_00d775f0(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x200)));
  F_00d77630(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x250)));
  F_00d77050(this GEN_EDX_ARG,0x10);
  F_00d775f0(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x284)));
  F_00d77050(this GEN_EDX_ARG,0x10);
  F_00d77690(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x29c)));
  F_00d77690(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x234)));
  F_00d77050(this GEN_EDX_ARG,0x10);
  F_00d77690(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x2a8)));
  F_00d77050(this GEN_EDX_ARG,0x10);
  F_00d776d0(this GEN_EDX_ARG,(uint)&(*(undefined4 *)(gen_frame + 0x29c)));
  F_00d776d0(this GEN_EDX_ARG,(uint)&(*(undefined4 *)(gen_frame + 0x234)));
  F_00d77050(this GEN_EDX_ARG,0x10);
  F_00d776d0(this GEN_EDX_ARG,(uint)&(*(undefined4 *)(gen_frame + 0x2a8)));
  F_00d77050(this GEN_EDX_ARG,0x10);
  if (uVar4 != 0) {
    uVar4 = piVar1[10];
    (*(int *)(gen_frame + 0x274)) = piVar1[4] * 0x30;
    (*(int * PTR32 *)(gen_frame + 0x290)) = ((int *)GEN_TOP((piVar1[4] * 0x30)));
    (*(int * PTR32 *)&gen_args[2]) = ((int *)GEN_TOP(piVar1[0xd]));
    (*(int *)(gen_frame + 0x270)) = piVar1[5] * 4;
    (*(uint *)(gen_frame + 0x298)) = (*(uint *)(gen_frame + 0x294));
    (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(uVar4));
    do {
      F_00d77050(this GEN_EDX_ARG,0x10);
      F_00d77730(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x29c)),uVar4);
      F_00d77730(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x234)),uVar4);
      F_00d77790(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x278)),(*(int * PTR32 *)&gen_args[0]));
      F_00d77730(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x2a8)),(*(int * PTR32 *)&gen_args[2]));
      F_00d77050(this GEN_EDX_ARG,0x10);
      uVar4 = uVar4 + (int)(*(int * PTR32 *)(gen_frame + 0x290));
      (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + (*(int *)(gen_frame + 0x274)))));
      (*(int * PTR32 *)&gen_args[2]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + (*(int *)(gen_frame + 0x270)))));
      uVar8 = (*(uint *)(gen_frame + 0x298)) - 1;
      (*(uint *)(gen_frame + 0x298)) = uVar8;
    } while (uVar8 != 0);
  }
  F_00d77050(this GEN_EDX_ARG,0x10);
  F_00d77050(this GEN_EDX_ARG,0x40);
  iVar6 = ((piVar1[0xb] + 1) * 0x10 + piVar1[0xe]) * 4;
  iVar9 = *((int *)GEN_TOP((*(int *)this + 4))) + 0x3c;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0x1c))))(REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,0x1e663ab1,((char *)REFP(0x11378cc)));
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
  iVar11 = iVar6;
  pvVar7 = ((undefined *)GEN_TOP(F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG,((char *)REFP(0x1137a7c)))));
  F_00d9ff40(pvVar7 GEN_EDX_ARG,iVar11);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             ((char *)REFP(0x1137a48)),0x18b);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG);
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
  iVar11 = iVar9;
  pvVar7 = ((undefined *)GEN_TOP(F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG,((char *)REFP(0x1137a34)))));
  F_00d9ff40(pvVar7 GEN_EDX_ARG,iVar11);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             ((char *)REFP(0x1137a48)),0x18c);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG);
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
  puVar12 = &REFG(undefined, 0x1137a30);
  fVar10 = (float)iVar6 / (float)iVar9;
  uVar4 = F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG,((char *)REFP(0x11377fc)));
  pvVar7 = ((undefined *)GEN_TOP(F_00d9ffe0(uVar4 GEN_EDX_ARG,fVar10)));
  F_00d9fe80(pvVar7 GEN_EDX_ARG,puVar12);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             ((char *)REFP(0x1137a48)),0x18d);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG);
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
  iVar6 = (piVar1[0xb] * 3 - (*(int *)(gen_frame + 0x264))) - (*(int *)(gen_frame + 0x2a0));
  pvVar7 = ((undefined *)GEN_TOP(F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG,((char *)REFP(0x1137a14)))));
  F_00d9ff40(pvVar7 GEN_EDX_ARG,iVar6);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             ((char *)REFP(0x1137a48)),399);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG);
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
  iVar6 = (piVar1[0xb] * 3 - (*(int *)(gen_frame + 0x27c))) - (*(int *)(gen_frame + 0x254));
  pvVar7 = ((undefined *)GEN_TOP(F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG,((char *)REFP(0x11379f8)))));
  F_00d9ff40(pvVar7 GEN_EDX_ARG,iVar6);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             ((char *)REFP(0x1137a48)),400);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG);
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
  iVar6 = piVar1[0xb] * 3;
  pvVar7 = ((undefined *)GEN_TOP(F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG,((char *)REFP(0x11379dc)))));
  F_00d9ff40(pvVar7 GEN_EDX_ARG,iVar6);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             ((char *)REFP(0x1137a48)),0x191);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG);
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
  iVar6 = (piVar1[0xe] - (*(int *)(gen_frame + 0x2ac))) - (*(int *)(gen_frame + 0x288));
  pvVar7 = ((undefined *)GEN_TOP(F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG,((char *)REFP(0x11379c0)))));
  F_00d9ff40(pvVar7 GEN_EDX_ARG,iVar6);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             ((char *)REFP(0x1137a48)),0x192);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG);
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
  iVar6 = (*(int *)(gen_frame + 0x264));
  pvVar7 = ((undefined *)GEN_TOP(F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG,((char *)REFP(0x11379a8)))));
  F_00d9ff40(pvVar7 GEN_EDX_ARG,iVar6);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             ((char *)REFP(0x1137a48)),0x194);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG);
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
  iVar6 = (*(int *)(gen_frame + 0x254));
  pvVar7 = ((undefined *)GEN_TOP(F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG,((char *)REFP(0x1137990)))));
  F_00d9ff40(pvVar7 GEN_EDX_ARG,iVar6);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             ((char *)REFP(0x1137a48)),0x195);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG);
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
  uVar13 = 0;
  pvVar7 = ((undefined *)GEN_TOP(F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG,((char *)REFP(0x1137978)))));
  F_00d9ff40(pvVar7 GEN_EDX_ARG,uVar13);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             ((char *)REFP(0x1137a48)),0x196);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG);
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
  iVar6 = (*(int *)(gen_frame + 0x288));
  pvVar7 = ((undefined *)GEN_TOP(F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG,((char *)REFP(0x1137960)))));
  F_00d9ff40(pvVar7 GEN_EDX_ARG,iVar6);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             ((char *)REFP(0x1137a48)),0x197);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG);
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
  iVar6 = (*(int *)(gen_frame + 0x2a0));
  pvVar7 = ((undefined *)GEN_TOP(F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG,((char *)REFP(0x1137948)))));
  F_00d9ff40(pvVar7 GEN_EDX_ARG,iVar6);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             ((char *)REFP(0x1137a48)),0x199);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG);
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
  iVar6 = (*(int *)(gen_frame + 0x27c));
  pvVar7 = ((undefined *)GEN_TOP(F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG,((char *)REFP(0x1137930)))));
  F_00d9ff40(pvVar7 GEN_EDX_ARG,iVar6);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             ((char *)REFP(0x1137a48)),0x19a);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG);
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
  uVar13 = 0;
  pvVar7 = ((undefined *)GEN_TOP(F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG,((char *)REFP(0x1137918)))));
  F_00d9ff40(pvVar7 GEN_EDX_ARG,uVar13);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             ((char *)REFP(0x1137a48)),0x19b);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG);
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
  iVar6 = (*(int *)(gen_frame + 0x2ac));
  pvVar7 = ((undefined *)GEN_TOP(F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG,((char *)REFP(0x1137900)))));
  F_00d9ff40(pvVar7 GEN_EDX_ARG,iVar6);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             ((char *)REFP(0x1137a48)),0x19c);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0x20))))(REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG);
  if (((uint)(*(int * PTR32 *)&gen_args[3]) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),(*(undefined * PTR32 *)&gen_args[1]),(uint)(*(int * PTR32 *)&gen_args[3]) & 0x3fffffff);
  }
  (*(int *)(gen_frame + 0x2ac)) = 0;
  if (((*(uint *)(gen_frame + 0x2b0)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 *)(gen_frame + 0x2a8)),((*(uint *)(gen_frame + 0x2b0)) & 0x3fffffff) * 0xc);
  }
  (*(undefined4 *)(gen_frame + 0x2a8)) = 0;
  (*(uint *)(gen_frame + 0x2b0)) = 0x80000000;
  (*(int *)(gen_frame + 0x27c)) = 0;
  if (((*(uint *)(gen_frame + 0x280)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 *)(gen_frame + 0x278)),(*(uint *)(gen_frame + 0x280)) * 4);
  }
  (*(undefined4 *)(gen_frame + 0x278)) = 0;
  (*(uint *)(gen_frame + 0x280)) = 0x80000000;
  (*(int *)(gen_frame + 0x2a0)) = 0;
  if (((*(uint *)(gen_frame + 0x2a4)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 *)(gen_frame + 0x29c)),((*(uint *)(gen_frame + 0x2a4)) & 0x3fffffff) * 0xc);
  }
  (*(undefined4 *)(gen_frame + 0x29c)) = 0;
  (*(uint *)(gen_frame + 0x2a4)) = 0x80000000;
  (*(int *)(gen_frame + 0x288)) = 0;
  if (((*(uint *)(gen_frame + 0x28c)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 *)(gen_frame + 0x284)),(*(uint *)(gen_frame + 0x28c)) * 8);
  }
  (*(undefined4 *)(gen_frame + 0x284)) = 0;
  (*(uint *)(gen_frame + 0x28c)) = 0x80000000;
  (*(int *)(gen_frame + 0x254)) = 0;
  if (((*(uint *)(gen_frame + 0x258)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 *)(gen_frame + 0x250)),(*(uint *)(gen_frame + 0x258)) << 5);
  }
  (*(uint *)(gen_frame + 0x258)) = 0x80000000;
  (*(undefined4 *)(gen_frame + 0x250)) = 0;
  (*(int *)(gen_frame + 0x264)) = 0;
  uVar4 = (*(uint *)(gen_frame + 0x268));
  if (((*(uint *)(gen_frame + 0x268)) & 0x80000000) == 0) {
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 *)(gen_frame + 0x260)),(*(uint *)(gen_frame + 0x268)) * 8);
  }
  return uVar4;
}

/* ref: FUN_00d78690 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d78690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined8 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd78690u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined8 * param_3 = (undefined8 *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_TOP(0x3c, 4, 4);
  undefined8 * puVar1;
  int iVar2;
  int iVar3;
  
  F_00d739c0(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP((param_1 + 0xc))));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x1135b5c));
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0x80000000;
  iVar3 = *((int *)GEN_TOP((param_1 + 0x14)));
  if (iVar3 == 0) {
    (*(undefined8 * PTR32 *)(gen_frame + 0x2c)) = ((undefined8 *)GEN_TOP(0x0));
LAB_00d786fb: ;
    (*(int *)(gen_frame + 0x30)) = ((int)0x80000000);
  }
  else {
    (*(undefined8 * PTR32 *)(gen_frame + 0x34)) = ((undefined8 *)GEN_TOP((iVar3 << 4)));
    puVar1 = ((undefined8 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined8 * PTR32 *)(gen_frame + 0x34)))))
    ;
    iVar2 = (int)((int)(*(undefined8 * PTR32 *)(gen_frame + 0x34)) + ((int)((int)(uintptr_t)(*(undefined8 * PTR32 *)(gen_frame + 0x34))) >> 0x1f & 0xfU)) >> 4;
    (*(undefined8 * PTR32 *)(gen_frame + 0x2c)) = puVar1;
    (*(int *)(gen_frame + 0x30)) = iVar2;
    if (iVar2 == 0) goto LAB_00d786fb;
  }
  (*(undefined8 * PTR32 *)(gen_frame + 0x10)) = (*(undefined8 * PTR32 *)(gen_frame + 0x2c));
  (*(int *)(gen_frame + 0x14)) = iVar3;
  (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x30));
  puVar1 = (*(undefined8 * PTR32 *)(gen_frame + 0x2c));
  if (0 < iVar3) {
    do {
      if (puVar1 != ((undefined8 *)GEN_TOP(0x0))) {
        *puVar1 = *param_3;
        puVar1[1] = param_3[1];
      }
      puVar1 = puVar1 + 2;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  iVar3 = *((int *)GEN_TOP((param_1 + 0x20)));
  if (iVar3 == 0) {
    (*(undefined8 * PTR32 *)(gen_frame + 0x34)) = ((undefined8 *)GEN_TOP(0x0));
  }
  else {
    (*(int *)(gen_frame + 0x28)) = iVar3 << 4;
    puVar1 = ((undefined8 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x28)))));
    iVar2 = (int)((*(int *)(gen_frame + 0x28)) + ((*(int *)(gen_frame + 0x28)) >> 0x1f & 0xfU)) >> 4;
    (*(undefined8 * PTR32 *)(gen_frame + 0x34)) = puVar1;
    if (iVar2 != 0) goto LAB_00d78776;
  }
  iVar2 = ((int)0x80000000);
LAB_00d78776: ;
  (*(undefined8 * PTR32 *)(gen_frame + 0x1c)) = (*(undefined8 * PTR32 *)(gen_frame + 0x34));
  (*(int *)(gen_frame + 0x20)) = iVar3;
  (*(int *)(gen_frame + 0x24)) = iVar2;
  puVar1 = (*(undefined8 * PTR32 *)(gen_frame + 0x34));
  if (0 < iVar3) {
    do {
      if (puVar1 != ((undefined8 *)GEN_TOP(0x0))) {
        *puVar1 = *param_3;
        puVar1[1] = param_3[1];
      }
      puVar1 = puVar1 + 2;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  F_00d76bb0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,this);
  F_00d777f0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1,param_2,&(*(undefined8 * PTR32 *)(gen_frame + 0x10)),&(*(undefined8 * PTR32 *)(gen_frame + 0x1c)));
  if (-1 < iVar2) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined8 * PTR32 *)(gen_frame + 0x34)),iVar2 << 4);
  }
  if (-1 < (*(int *)(gen_frame + 0x30))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined8 * PTR32 *)(gen_frame + 0x2c)),(*(int *)(gen_frame + 0x30)) << 4);
  }
  return (uint)this;
}

/* ref: FUN_00d78830 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d78830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd78830u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_TOP(0x44, 12, 4);
  undefined8 * puVar1;
  int iVar2;
  int iVar3;
  undefined8 * puVar4;
  int iVar5;
  int iVar6;
  
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = this;
  F_00d739c0(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP((param_1 + 0xc))));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x1135b5c));
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0x80000000;
  iVar6 = *((int *)GEN_TOP((param_1 + 0x14)));
  if (iVar6 == 0) {
    (*(undefined8 * PTR32 *)(gen_frame + 0x38)) = ((undefined8 *)GEN_TOP(0x0));
LAB_00d7889e: ;
    (*(int *)(gen_frame + 0x30)) = ((int)0x80000000);
  }
  else {
    (*(int *)(gen_frame + 0x34)) = iVar6 << 4;
    puVar1 = ((undefined8 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x34)))));
    iVar2 = (int)((*(int *)(gen_frame + 0x34)) + ((*(int *)(gen_frame + 0x34)) >> 0x1f & 0xfU)) >> 4;
    (*(undefined8 * PTR32 *)(gen_frame + 0x38)) = puVar1;
    (*(int *)(gen_frame + 0x30)) = iVar2;
    if (iVar2 == 0) goto LAB_00d7889e;
  }
  (*(undefined8 * PTR32 *)(gen_frame + 0x10)) = (*(undefined8 * PTR32 *)(gen_frame + 0x38));
  (*(int *)(gen_frame + 0x14)) = iVar6;
  (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x30));
  puVar1 = (*(undefined8 * PTR32 *)(gen_frame + 0x38));
  iVar2 = iVar6;
  if (0 < iVar6) {
    do {
      iVar3 = 0;
      if (puVar1 != ((undefined8 *)GEN_TOP(0x0))) {
        F_00d76cc0(puVar1 GEN_EDX_ARG);
        iVar3 = ((int)(uint)(puVar1));
      }
      puVar1 = ((undefined8 *)GEN_TOP((iVar3 + 0x10)));
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  iVar2 = *((int *)GEN_TOP((param_1 + 0x20)));
  if (iVar2 == 0) {
    (*(undefined8 * PTR32 *)(gen_frame + 0x3c)) = ((undefined8 *)GEN_TOP(0x0));
  }
  else {
    (*(int *)(gen_frame + 0x2c)) = iVar2 << 4;
    puVar1 = ((undefined8 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x2c)))));
    iVar3 = (int)((*(int *)(gen_frame + 0x2c)) + ((*(int *)(gen_frame + 0x2c)) >> 0x1f & 0xfU)) >> 4;
    (*(undefined8 * PTR32 *)(gen_frame + 0x3c)) = puVar1;
    (*(int *)(gen_frame + 0x34)) = iVar3;
    if (iVar3 != 0) goto LAB_00d7890c;
  }
  (*(int *)(gen_frame + 0x34)) = ((int)0x80000000);
LAB_00d7890c: ;
  (*(undefined8 * PTR32 *)(gen_frame + 0x1c)) = (*(undefined8 * PTR32 *)(gen_frame + 0x3c));
  (*(int *)(gen_frame + 0x20)) = iVar2;
  (*(int *)(gen_frame + 0x24)) = (*(int *)(gen_frame + 0x34));
  puVar1 = (*(undefined8 * PTR32 *)(gen_frame + 0x3c));
  iVar3 = iVar2;
  if (0 < iVar2) {
    do {
      iVar5 = 0;
      if (puVar1 != ((undefined8 *)GEN_TOP(0x0))) {
        F_00d76cc0(puVar1 GEN_EDX_ARG);
        iVar5 = ((int)(uint)(puVar1));
      }
      puVar1 = ((undefined8 *)GEN_TOP((iVar5 + 0x10)));
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  iVar3 = 0;
  puVar1 = (*(undefined8 * PTR32 *)(gen_frame + 0x38));
  if (0 < iVar6) {
    do {
      puVar4 = ((undefined8 *)GEN_TOP((*((int *)GEN_TOP((param_3[3] + iVar3 * 4))) * 0x10 + *param_3)));
      iVar3 = iVar3 + 1;
      *puVar1 = *puVar4;
      puVar1[1] = puVar4[1];
      puVar1 = puVar1 + 2;
      this = (*(undefined * PTR32 *)(gen_frame + 0x28));
    } while (iVar3 < iVar6);
  }
  iVar6 = 0;
  puVar1 = (*(undefined8 * PTR32 *)(gen_frame + 0x3c));
  if (0 < iVar2) {
    do {
      puVar4 = ((undefined8 *)GEN_TOP((*((int *)GEN_TOP((param_3[6] + iVar6 * 4))) * 0x10 + *param_3)));
      iVar6 = iVar6 + 1;
      *puVar1 = *puVar4;
      puVar1[1] = puVar4[1];
      puVar1 = puVar1 + 2;
      this = (*(undefined * PTR32 *)(gen_frame + 0x28));
    } while (iVar6 < iVar2);
  }
  F_00d76bb0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,this);
  F_00d777f0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1,param_2,&(*(undefined8 * PTR32 *)(gen_frame + 0x10)),&(*(undefined8 * PTR32 *)(gen_frame + 0x1c)));
  if (-1 < (*(int *)(gen_frame + 0x34))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined8 * PTR32 *)(gen_frame + 0x3c)),(*(int *)(gen_frame + 0x34)) << 4);
  }
  if (-1 < (*(int *)(gen_frame + 0x30))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined8 * PTR32 *)(gen_frame + 0x38)),(*(int *)(gen_frame + 0x30)) << 4);
  }
  return (uint)this;
}

/* ref: FUN_00d78a30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d78a30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xd78a30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[8];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  gen_args[4] = gen_a5;
  gen_args[5] = gen_a6;
  gen_args[6] = gen_a7;
  gen_args[7] = gen_a8;
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  
  F_00d739c0(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((*(int *)&gen_args[0]) + 0xc))));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x1135b5c));
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0x80000000;
  F_00d76bb0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,this);
  F_00d777f0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(int *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)&gen_args[5]));
  (*(undefined4 *)&gen_args[3]) = 0;
  if (-1 < (*(int *)&gen_args[4])) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 *)&gen_args[2]),(*(int *)&gen_args[4]) << 4);
  }
  (*(undefined4 *)&gen_args[2]) = 0;
  (*(int *)&gen_args[4]) = 0x80000000;
  (*(undefined4 *)&gen_args[6]) = 0;
  if (-1 < (*(int *)&gen_args[7])) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 *)&gen_args[5]),(*(int *)&gen_args[7]) << 4);
  }
  return (uint)this;
}

/* ref: FUN_00d78ae0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d78ae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd78ae0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x1135b5c));
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x30)));
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x28))),uVar1 & 0x3fffffff);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0x80000000;
  uVar1 = F_00d3e6d0(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00d78b30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d78b30(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd78b30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00d78b40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d78b40(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd78b40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00d78bb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d78bb0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd78bb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00d78c00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d78c00(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd78c00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x20 + *in_ecx;
}

/* ref: FUN_00d78c50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d78c50(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd78c50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_00d78cb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d78cb0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd78cb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00d78cd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d78cd0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd78cd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00d78cf0 */
GEN_LIB GEN_FRAME uint F_00d78cf0(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd78cf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  undefined1 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00d78d40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d78d40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd78d40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3;
  return param_3;
}

/* ref: FUN_00d78d60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d78d60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd78d60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  code * pcVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0xc)));
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) << 4)));
  uVar3 = (*pcVar1)(this,&(*(int * PTR32 *)&gen_args[0]));
  *piVar2 = (int)((int)(*(int * PTR32 *)&gen_args[0]) + ((int)(*(int * PTR32 *)&gen_args[0]) >> 0x1f & 0xfU)) >> 4;
  return uVar3;
}

/* ref: FUN_00d78da0 */
GEN_LIB GEN_FRAME unsigned int F_00d78da0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd78da0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int in_ecx;
  int iVar2;
  int iVar1;
  
  in_ecx = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      iVar1 = 0;
      if (in_ecx != 0) {
        F_00d76cc0(in_ecx GEN_EDX_ARG);
        iVar1 = ((int)(uint)(in_ecx));
      }
      in_ecx = iVar1 + 0x10;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00d78de0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d78de0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd78de0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  code * pcVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  puVar2 = (*(undefined4 * PTR32 *)&gen_args[0]);
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0xc)));
  (*(undefined4 * PTR32 *)&gen_args[0]) = ((undefined4 *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0])));
  uVar3 = (*pcVar1)(this,&(*(undefined4 * PTR32 *)&gen_args[0]));
  *puVar2 = (*(undefined4 * PTR32 *)&gen_args[0]);
  return uVar3;
}

/* ref: FUN_00d78e80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d78e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd78e80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3;
  return param_3;
}

/* ref: FUN_00d78ea0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d78ea0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd78ea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  code * pcVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0xc)));
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) * 8)));
  uVar3 = (*pcVar1)(this,&(*(int * PTR32 *)&gen_args[0]));
  *piVar2 = (int)((int)(*(int * PTR32 *)&gen_args[0]) + ((int)(*(int * PTR32 *)&gen_args[0]) >> 0x1f & 7U)) >> 3;
  return uVar3;
}

/* ref: FUN_00d78f00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d78f00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd78f00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 << 4);
  return uVar1;
}

/* ref: FUN_00d78f20 */
GEN_LIB GEN_FRAME uint F_00d78f20(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd78f20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + param_1;
}

/* ref: FUN_00d78f30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d78f30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd78f30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00d78f50 */
GEN_LIB GEN_FRAME uint F_00d78f50(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd78f50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + param_1;
}

/* ref: FUN_00d78f60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d78f60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd78f60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 << 5);
  return uVar1;
}

/* ref: FUN_00d78f80 */
GEN_LIB GEN_FRAME uint F_00d78f80(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd78f80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + param_1;
}

/* ref: FUN_00d78f90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d78f90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd78f90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 0xc);
  return uVar1;
}

/* ref: FUN_00d78fb0 */
GEN_LIB GEN_FRAME uint F_00d78fb0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd78fb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + param_1;
}

/* ref: FUN_00d78fc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d78fc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd78fc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00d78fe0 */
GEN_LIB GEN_FRAME uint F_00d78fe0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd78fe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + param_1;
}

/* ref: FUN_00d79000 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d79000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd79000u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00d79110 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d79110(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd79110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  code * pcVar1;
  uint in_ecx;
  int iVar2;
  int iVar3;
  
  iVar3 = (*(int *)&gen_args[0]);
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  if ((*(int *)&gen_args[0]) == 0) {
    in_ecx = 0;
  }
  else {
    (*(int *)&gen_args[0]) = (*(int *)&gen_args[0]) << 4;
    pcVar1 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc)));
    in_ecx = (*pcVar1)(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[0]));
    iVar2 = (int)((*(int *)&gen_args[0]) + ((*(int *)&gen_args[0]) >> 0x1f & 0xfU)) >> 4;
    if (iVar2 != 0) goto LAB_00d79165;
  }
  iVar2 = ((int)0x80000000);
LAB_00d79165: ;
  *(uint *)this = in_ecx;
  *((int *)GEN_TOP(((int)this + 4))) = iVar3;
  *((int *)GEN_TOP(((int)this + 8))) = iVar2;
  if (0 < iVar3) {
    do {
      iVar2 = 0;
      if (in_ecx != 0) {
        F_00d76cc0(in_ecx GEN_EDX_FWD);
        iVar2 = ((int)(uint)(in_ecx));
      }
      in_ecx = iVar2 + 0x10;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  return (uint)this;
}

/* ref: FUN_00d79190 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d79190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd79190u, gen_a0, gen_a1, gen_a2, 0u);
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
    bVar1 = F_00d95690(param_1,this,iVar3,1);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00d791d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d791d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd791d0u, gen_a0, gen_a1, gen_a2, 0u);
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
    bVar1 = F_00d95690(param_1,this,iVar3,1);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_2;
  return uVar2;
}

/* ref: FUN_00d79210 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d79210(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd79210u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = (*(int *)&gen_args[0]);
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  if ((*(int *)&gen_args[0]) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[0]));
    iVar3 = (*(int *)&gen_args[0]);
    if ((*(int *)&gen_args[0]) != 0) goto LAB_00d79255;
  }
  iVar3 = ((int)0x80000000);
LAB_00d79255: ;
  *((int *)GEN_TOP(((int)this + 8))) = iVar3;
  iVar3 = 0;
  *(uint *)this = uVar2;
  *((int *)GEN_TOP(((int)this + 4))) = iVar1;
  if (0 < iVar1) {
    do {
      *((undefined1 *)GEN_TOP((iVar3 + uVar2))) = *(*(undefined1 * PTR32 *)&gen_args[1]);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return (uint)this;
}

/* ref: FUN_00d79280 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d79280(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd79280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  code * pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = (*(int *)&gen_args[0]);
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  if ((*(int *)&gen_args[0]) == 0) {
    uVar3 = 0;
  }
  else {
    (*(int *)&gen_args[0]) = (*(int *)&gen_args[0]) * 8;
    pcVar1 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc)));
    uVar3 = (*pcVar1)(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[0]));
    iVar4 = (int)((*(int *)&gen_args[0]) + ((*(int *)&gen_args[0]) >> 0x1f & 7U)) >> 3;
    if (iVar4 != 0) goto LAB_00d792d8;
  }
  iVar4 = ((int)0x80000000);
LAB_00d792d8: ;
  *((int *)GEN_TOP(((int)this + 4))) = iVar2;
  *((int *)GEN_TOP(((int)this + 8))) = iVar4;
  *(uint *)this = uVar3;
  return (uint)this;
}

/* ref: FUN_00d792f0 */
GEN_LIB GEN_FRAME unsigned int F_00d792f0(GEN_P(undefined8 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined8 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd792f0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00d79320 */
GEN_LIB GEN_FRAME unsigned int F_00d79320(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd79320u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = *param_3;
        puVar1[1] = param_3[1];
      }
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00d79350 */
GEN_LIB GEN_FRAME unsigned int F_00d79350(GEN_P(undefined8 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined8 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd79350u, gen_a0, gen_a1, gen_a2, 0u);
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
        puVar1[2] = param_3[2];
        puVar1[3] = param_3[3];
      }
      puVar1 = puVar1 + 4;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00d793a0 */
GEN_LIB GEN_FRAME unsigned int F_00d793a0(GEN_P(undefined8 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined8 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd793a0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00d793d0 */
GEN_LIB GEN_FRAME unsigned int F_00d793d0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd793d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = *param_3;
      }
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00d79460 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d79460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd79460u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,1);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00d794a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d794a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd794a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,1);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  return uVar2;
}

/* ref: FUN_00d794e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d794e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd794e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  code * pcVar1;
  undefined8 * puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (*(int *)&gen_args[0]);
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  if ((*(int *)&gen_args[0]) == 0) {
    puVar2 = ((undefined8 *)GEN_TOP(0x0));
  }
  else {
    (*(int *)&gen_args[0]) = (*(int *)&gen_args[0]) << 4;
    pcVar1 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc)));
    puVar2 = ((undefined8 *)GEN_TOP((*pcVar1)(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[0]))));
    iVar3 = (int)((*(int *)&gen_args[0]) + ((*(int *)&gen_args[0]) >> 0x1f & 0xfU)) >> 4;
    if (iVar3 != 0) goto LAB_00d79535;
  }
  iVar3 = ((int)0x80000000);
LAB_00d79535: ;
  *(undefined8 * PTR32 *)this = puVar2;
  *((int *)GEN_TOP(((int)this + 4))) = iVar4;
  *((int *)GEN_TOP(((int)this + 8))) = iVar3;
  if (0 < iVar4) {
    do {
      if (puVar2 != ((undefined8 *)GEN_TOP(0x0))) {
        *puVar2 = *(*(undefined8 * PTR32 *)&gen_args[1]);
        puVar2[1] = (*(undefined8 * PTR32 *)&gen_args[1])[1];
      }
      puVar2 = puVar2 + 2;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  return (uint)this;
}

/* ref: FUN_00d79570 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d79570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd79570u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 8)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00d795c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d795c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined8 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd795c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a2;)
  undefined8 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,0x20);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) * 0x20 + *(int *)this)));
  if (puVar1 != ((undefined8 *)GEN_TOP(0x0))) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    puVar1[2] = param_2[2];
    puVar1[3] = param_2[3];
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00d79620 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d79620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined8 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd79620u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00d79670 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d79670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd79670u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 4)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = *param_2;
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00d796b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d796b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd796b0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d796f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d796f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd796f0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d79730 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d79730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd79730u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 << 5);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d79770 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d79770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd79770u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d797b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d797b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd797b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d797f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d797f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd797f0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d79830 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d79830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd79830u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 8)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00d79880 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d79880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined8 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd79880u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a1;)
  undefined8 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,0x20);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) * 0x20 + *(int *)this)));
  if (puVar1 != ((undefined8 *)GEN_TOP(0x0))) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
    puVar1[2] = param_1[2];
    puVar1[3] = param_1[3];
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00d798e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d798e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined8 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd798e0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d79930 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d79930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd79930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 4)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = *param_1;
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00d79970 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d79970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd79970u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d799b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d799b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd799b0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d799f0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d799f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd799f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 5);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d79a30 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d79a30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd79a30u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d79a70 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d79a70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd79a70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d79ab0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d79ab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd79ab0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d79af0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d79af0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd79af0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d79b30 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d79b30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd79b30u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d79b70 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d79b70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd79b70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 5);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d79bb0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d79bb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd79bb0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d79bf0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d79bf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd79bf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d79c30 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d79c30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd79c30u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d79c70 */
GEN_LIB GEN_FRAME uint F_00d79c70(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd79c70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 - param_1;
}

/* ref: FUN_00d79c80 */
GEN_LIB GEN_FRAME uint F_00d79c80(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd79c80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 - param_1;
}

/* ref: FUN_00d79c90 */
GEN_LIB GEN_FRAME uint F_00d79c90(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd79c90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1 - 1U | param_1 - 1U >> 0x10;
  uVar1 = uVar1 | uVar1 >> 8;
  uVar1 = uVar1 | uVar1 >> 4;
  uVar1 = uVar1 | uVar1 >> 2;
  return (uVar1 >> 1 | uVar1) + 1;
}

/* ref: FUN_00d79cc0 */
GEN_LIB GEN_FRAME uint F_00d79cc0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd79cc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return ((1 << ((byte)param_1 & 0x1f)) - (param_1 >> 5 & 1U)) - 1;
}

/* ref: FUN_00d79ce0 */
GEN_LIB GEN_FRAME uint F_00d79ce0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd79ce0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  if ((param_1 != 2) && (param_1 != 3)) {
    return 0;
  }
  return 1;
}

