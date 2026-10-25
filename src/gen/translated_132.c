#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00b812b0 */
unsigned int F_00b812b0(unsigned int gen_a0)
{
  GEN_ENTER(0xb812b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  iVar3 = *(int *)((int)this + 8);
  if (iVar3 != 0) {
    iVar2 = 0;
    iVar4 = iVar3;
    do {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 0x10 + iVar2)));
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8 + iVar2)));
      }
      iVar2 = iVar2 + 0x14;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    if (iVar3 != 0) {
      iVar4 = 0;
      do {
        iVar2 = *(int *)((int)this + 4);
        *(undefined4 *)(iVar2 + 8 + iVar4) = 8;
        *(undefined4 *)(iVar2 + 0x10 + iVar4) = 0;
        iVar4 = iVar4 + 0x14;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  piVar5 = (int *)((int)this + 0x1c);
  iVar3 = 0x10;
  do {
    if (*piVar5 != 0) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),*piVar5);
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)((int)this + 0x5c) = 0;
  return 0;
}

/* ref: FUN_00b81340 */
byte F_00b81340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb81340u, gen_a0, gen_a1, 0u, 0u);
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
  *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = piVar8;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = 0;
  (*(int * PTR32 *)&gen_args[1]) = piVar8;
  if (piVar8 == (int *)0x0) {
    puVar2 = (uint *)F_00406a50(4);
  }
  else {
    (*(int * PTR32 *)(gen_frame + 0x18)) = *(int * PTR32 *)(REFG(int, 0x1371270) + 4);
    (*(int *)(gen_frame + 0x14)) = *(*(int * PTR32 *)(gen_frame + 0x18));
    uVar5 = -(uint)((int)(ZEXT48(piVar8) * 0x14 >> 0x20) != 0) | (uint)(ZEXT48(piVar8) * 0x14);
    puVar2 = ((uint *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x18)) + 8))
                               ((*(int * PTR32 *)(gen_frame + 0x18)),-(uint)(0xfffffffb < uVar5) | uVar5 + 4,0x10)));
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
      *puVar2 = (uint)(*(undefined * PTR32 (*)[1])REFP(0x10f62e8));
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2 = puVar2 + 5;
    }
  }
  *((uint * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = puVar3;
  if (piVar8 != (int *)0x0) {
    iVar6 = 0;
    piVar7 = piVar8;
    do {
      iVar4 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + iVar6;
      iVar6 = iVar6 + 0x14;
      piVar7 = (int *)((int)piVar7 - 1);
      *(undefined4 *)(iVar4 + 4) = 0;
      *(undefined4 *)(iVar4 + 8) = 8;
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
    (*(gen_code32 *)(gen_frame + 0x4)) = ((code *)REFP(0xb80780));
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(gen_code32 *)(gen_frame + 0xc)) = ((code *)REFP(0xb80e80));
    uVar5 = F_004a0c60(this_00,&(*(gen_code32 *)(gen_frame + 0x4)),0,(int)piVar8 - 1);
  }
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = uVar5;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) = 0;
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
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) = 0;
  return 1;
}

/* ref: FUN_00b814a0 */
uint F_00b814a0(unsigned int gen_a0)
{
  GEN_ENTER(0xb814a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int * piVar5;
  ulonglong uVar6;
  int local_8;
  
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  piVar5 = (int *)((int)this + 0x1c);
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
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x10);
  if (puVar1 != (undefined4 *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  iVar4 = *(int *)((int)this + 8);
  if (iVar4 != 0) {
    uVar3 = 0;
    do {
      iVar2 = *(int *)((int)this + 4);
      *(undefined4 *)(uVar3 + 0x10 + iVar2) = 0;
      *(undefined4 *)(uVar3 + 0xc + iVar2) = 0;
      uVar3 = uVar3 + 0x14;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] != 0) {
      uVar3 = ((code *)*(gen_code32 *)*puVar1)(puVar1,3);
      *(undefined4 *)((int)this + 4) = 0;
      *(undefined4 *)((int)this + 8) = 0;
      return uVar3;
    }
    uVar6 = F_00406b30(puVar1 + -1);
    uVar3 = (uint)uVar6;
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined4 *)((int)this + 8) = 0;
  return uVar3;
}

/* ref: FUN_00b81550 */
unsigned int F_00b81550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb81550u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  iVar3 = *(int *)((int)this + 8);
  if (iVar3 != 0) {
    iVar2 = 0;
    iVar4 = iVar3;
    do {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 0x10 + iVar2)));
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8 + iVar2)));
      }
      iVar2 = iVar2 + 0x14;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *(undefined4 *)((int)this + 0x14) = param_1;
  *(undefined4 *)((int)this + 0x18) = param_2;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  if (*(int *)((int)this + 0x5c) != 0) {
    F_004a1460(REFG(undefined4, 0x13728ac),*(undefined4 *)((int)this + 0x10));
    F_00b809d0(this);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x10) + 0xc))))(*(int * PTR32 *)((int)this + 0x10));
  }
  iVar4 = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    iVar2 = *(int *)((int)this + 4);
    *(undefined4 *)(iVar2 + 8 + iVar4) = 8;
    *(undefined4 *)(iVar2 + 0x10 + iVar4) = 0;
    iVar4 = iVar4 + 0x14;
  }
  if ((char)param_3 != '\0') {
    piVar5 = (int *)((int)this + 0x1c);
    iVar3 = 0x10;
    do {
      if (*piVar5 != 0) {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),*piVar5);
        *piVar5 = 0;
      }
      piVar5 = piVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    *(undefined4 *)((int)this + 0x5c) = 0;
  }
  return 0;
}

/* ref: FUN_00b81620 */
unsigned int F_00b81620(unsigned int gen_a0)
{
  GEN_ENTER(0xb81620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  iVar3 = *(int *)((int)this + 8);
  if (iVar3 != 0) {
    iVar2 = 0;
    iVar4 = iVar3;
    do {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 0x10 + iVar2)));
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8 + iVar2)));
      }
      iVar2 = iVar2 + 0x14;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    if (iVar3 != 0) {
      iVar4 = 0;
      do {
        iVar2 = *(int *)((int)this + 4);
        *(undefined4 *)(iVar2 + 8 + iVar4) = 8;
        *(undefined4 *)(iVar2 + 0x10 + iVar4) = 0;
        iVar4 = iVar4 + 0x14;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  piVar5 = (int *)((int)this + 0x1c);
  iVar3 = 0x10;
  do {
    if (*piVar5 != 0) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),*piVar5);
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)((int)this + 0x5c) = 0;
  return 0;
}

/* ref: FUN_00b816b0 */
byte F_00b816b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb816b0u, gen_a0, gen_a1, 0u, 0u);
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
  *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = piVar8;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = 0;
  (*(int * PTR32 *)&gen_args[1]) = piVar8;
  if (piVar8 == (int *)0x0) {
    puVar2 = (uint *)F_00406a50(4);
  }
  else {
    (*(int * PTR32 *)(gen_frame + 0x18)) = *(int * PTR32 *)(REFG(int, 0x1371270) + 4);
    (*(int *)(gen_frame + 0x14)) = *(*(int * PTR32 *)(gen_frame + 0x18));
    uVar5 = -(uint)((int)(ZEXT48(piVar8) * 0x14 >> 0x20) != 0) | (uint)(ZEXT48(piVar8) * 0x14);
    puVar2 = ((uint *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x18)) + 8))
                               ((*(int * PTR32 *)(gen_frame + 0x18)),-(uint)(0xfffffffb < uVar5) | uVar5 + 4,0x10)));
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
      *puVar2 = (uint)(*(undefined * PTR32 (*)[1])REFP(0x10f62f0));
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2 = puVar2 + 5;
    }
  }
  *((uint * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = puVar3;
  if (piVar8 != (int *)0x0) {
    iVar6 = 0;
    piVar7 = piVar8;
    do {
      iVar4 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + iVar6;
      iVar6 = iVar6 + 0x14;
      piVar7 = (int *)((int)piVar7 - 1);
      *(undefined4 *)(iVar4 + 4) = 0;
      *(undefined4 *)(iVar4 + 8) = 8;
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
    (*(gen_code32 *)(gen_frame + 0x4)) = ((code *)REFP(0xb807a0));
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(gen_code32 *)(gen_frame + 0xc)) = ((code *)REFP(0xb80ed0));
    uVar5 = F_004a0c60(this_00,&(*(gen_code32 *)(gen_frame + 0x4)),0,(int)piVar8 - 1);
  }
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = uVar5;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) = 0;
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
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) = 0;
  return 1;
}

/* ref: FUN_00b81810 */
uint F_00b81810(unsigned int gen_a0)
{
  GEN_ENTER(0xb81810u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int * piVar5;
  ulonglong uVar6;
  int local_8;
  
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  piVar5 = (int *)((int)this + 0x1c);
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
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x10);
  if (puVar1 != (undefined4 *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  iVar4 = *(int *)((int)this + 8);
  if (iVar4 != 0) {
    uVar3 = 0;
    do {
      iVar2 = *(int *)((int)this + 4);
      *(undefined4 *)(uVar3 + 0x10 + iVar2) = 0;
      *(undefined4 *)(uVar3 + 0xc + iVar2) = 0;
      uVar3 = uVar3 + 0x14;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] != 0) {
      uVar3 = ((code *)*(gen_code32 *)*puVar1)(puVar1,3);
      *(undefined4 *)((int)this + 4) = 0;
      *(undefined4 *)((int)this + 8) = 0;
      return uVar3;
    }
    uVar6 = F_00406b30(puVar1 + -1);
    uVar3 = (uint)uVar6;
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined4 *)((int)this + 8) = 0;
  return uVar3;
}

/* ref: FUN_00b818c0 */
byte F_00b818c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb818c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int * piVar7;
  
  iVar5 = *(int *)((int)this + 8);
  if (iVar5 != 0) {
    iVar4 = 0;
    iVar6 = iVar5;
    do {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 0x10 + iVar4)));
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8 + iVar4)));
      }
      iVar4 = iVar4 + 0x14;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  *(undefined4 *)((int)this + 0x14) = param_1;
  *(uint *)((int)this + 0x18) = param_2;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  if (*(int *)((int)this + 0x5c) != 0) {
    F_004a1460(REFG(undefined4, 0x13728ac),*(undefined4 *)((int)this + 0x10));
    F_00b80ac0(this);
    param_2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x10) + 0xc))))(*(int * PTR32 *)((int)this + 0x10));
  }
  iVar6 = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  for (; iVar5 != 0; iVar5 = iVar5 + -1) {
    param_2 = *(uint *)((int)this + 4);
    *(undefined4 *)(param_2 + 8 + iVar6) = 8;
    *(undefined4 *)(param_2 + 0x10 + iVar6) = 0;
    iVar6 = iVar6 + 0x14;
  }
  bVar2 = (byte)param_2;
  if ((char)param_3 != '\0') {
    piVar7 = (int *)((int)this + 0x1c);
    iVar5 = 0x10;
    do {
      bVar2 = 0;
      if (*piVar7 != 0) {
        uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))
                          (*(int * PTR32 *)(REFG(int, 0x1371270) + 4),*piVar7);
        bVar2 = (byte)uVar3;
        *piVar7 = 0;
      }
      piVar7 = piVar7 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    *(undefined4 *)((int)this + 0x5c) = 0;
  }
  return bVar2;
}

/* ref: FUN_00b81990 */
unsigned int F_00b81990(unsigned int gen_a0)
{
  GEN_ENTER(0xb81990u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  iVar3 = *(int *)((int)this + 8);
  if (iVar3 != 0) {
    iVar2 = 0;
    iVar4 = iVar3;
    do {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 0x10 + iVar2)));
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8 + iVar2)));
      }
      iVar2 = iVar2 + 0x14;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    if (iVar3 != 0) {
      iVar4 = 0;
      do {
        iVar2 = *(int *)((int)this + 4);
        *(undefined4 *)(iVar2 + 8 + iVar4) = 8;
        *(undefined4 *)(iVar2 + 0x10 + iVar4) = 0;
        iVar4 = iVar4 + 0x14;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  piVar5 = (int *)((int)this + 0x1c);
  iVar3 = 0x10;
  do {
    if (*piVar5 != 0) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),*piVar5);
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)((int)this + 0x5c) = 0;
  return 0;
}

/* ref: JobQueue_JobSystem_VBonePhysicsUpdater_Physics_Graphics_Client::vf0 */
uint F_00b81a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb81a20u, gen_a0, gen_a1, 0u, 0u);
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
      *puVar3 = (*(undefined * PTR32 (*)[1])REFP(0x10f62e0));
    }
    if (((param_1 & 1) != 0) && (uVar1 != 0)) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),uVar1);
    }
    return uVar1;
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10f62e0));
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),this);
  }
  return (uint)this;
}

/* ref: JobQueue_JobSystem_VBonePhysicsUpdater_Physics_Graphics_Client::vf0_00b81a90 */
uint F_00b81a90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb81a90u, gen_a0, gen_a1, 0u, 0u);
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
      *puVar3 = (*(undefined * PTR32 (*)[1])REFP(0x10f62e8));
    }
    if (((param_1 & 1) != 0) && (uVar1 != 0)) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),uVar1);
    }
    return uVar1;
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10f62e8));
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),this);
  }
  return (uint)this;
}

/* ref: JobQueue_JobSystem_VBonePhysicsUpdater_Physics_Graphics_Client::vf0_00b81b00 */
uint F_00b81b00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb81b00u, gen_a0, gen_a1, 0u, 0u);
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
      *puVar3 = (*(undefined * PTR32 (*)[1])REFP(0x10f62f0));
    }
    if (((param_1 & 1) != 0) && (uVar1 != 0)) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),uVar1);
    }
    return uVar1;
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10f62f0));
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),this);
  }
  return (uint)this;
}

/* ref: FUN_00b81b70 */
uint F_00b81b70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb81b70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint * puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if ((param_1 & 0x1f) != 0) {
    piVar1 = ((int *)GEN_TOP(((int)this + (param_1 >> 5) * 4 + 0x1c)));
    do {
      LOCK();
      iVar3 = *piVar1;
      *piVar1 = *piVar1;
      UNLOCK();
    } while (iVar3 == 0);
    return (uint)piVar1;
  }
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),0x600,0x10);
  puVar2 = ((uint *)GEN_TOP(((int)this + (param_1 >> 5) * 4 + 0x1c)));
  LOCK();
  uVar4 = *puVar2;
  *puVar2 = uVar5;
  UNLOCK();
  return uVar4;
}

/* ref: FUN_00b81bc0 */
uint F_00b81bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb81bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint * puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if ((param_1 & 0x1f) != 0) {
    piVar1 = ((int *)GEN_TOP(((int)this + (param_1 >> 5) * 4 + 0x1c)));
    do {
      LOCK();
      iVar3 = *piVar1;
      *piVar1 = *piVar1;
      UNLOCK();
    } while (iVar3 == 0);
    return (uint)piVar1;
  }
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),0xa00,0x10);
  puVar2 = ((uint *)GEN_TOP(((int)this + (param_1 >> 5) * 4 + 0x1c)));
  LOCK();
  uVar4 = *puVar2;
  *puVar2 = uVar5;
  UNLOCK();
  return uVar4;
}

/* ref: FUN_00b81c10 */
uint F_00b81c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb81c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint * puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if ((param_1 & 0x1f) != 0) {
    piVar1 = ((int *)GEN_TOP(((int)this + (param_1 >> 5) * 4 + 0x1c)));
    do {
      LOCK();
      iVar3 = *piVar1;
      *piVar1 = *piVar1;
      UNLOCK();
    } while (iVar3 == 0);
    return (uint)piVar1;
  }
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),0x600,0x10);
  puVar2 = ((uint *)GEN_TOP(((int)this + (param_1 >> 5) * 4 + 0x1c)));
  LOCK();
  uVar4 = *puVar2;
  *puVar2 = uVar5;
  UNLOCK();
  return uVar4;
}

/* ref: FUN_00b81c60 */
uint F_00b81c60(unsigned int gen_a0)
{
  GEN_ENTER(0xb81c60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  puVar1 = (uint *)((int)this + 0x5c);
  LOCK();
  uVar3 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  uVar6 = uVar3 >> 5;
  if (*(int *)((int)this + uVar6 * 4 + 0x1c) == 0) {
    if ((uVar3 & 0x1f) != 0) {
      piVar2 = (int *)((int)this + uVar6 * 4 + 0x1c);
      do {
        LOCK();
        iVar4 = *piVar2;
        *piVar2 = *piVar2;
        UNLOCK();
      } while (iVar4 == 0);
      return (uVar3 & 0x1f) * 0x30 + *(int *)((int)this + uVar6 * 4 + 0x1c);
    }
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),0x600,0x10);
    LOCK();
    *(uint *)((int)this + uVar6 * 4 + 0x1c) = uVar5;
    UNLOCK();
  }
  return (uVar3 & 0x1f) * 0x30 + *(int *)((int)this + uVar6 * 4 + 0x1c);
}

/* ref: FUN_00b81cd0 */
uint F_00b81cd0(unsigned int gen_a0)
{
  GEN_ENTER(0xb81cd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  puVar1 = (uint *)((int)this + 0x5c);
  LOCK();
  uVar3 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  uVar6 = uVar3 >> 5;
  if (*(int *)((int)this + uVar6 * 4 + 0x1c) == 0) {
    if ((uVar3 & 0x1f) != 0) {
      piVar2 = (int *)((int)this + uVar6 * 4 + 0x1c);
      do {
        LOCK();
        iVar4 = *piVar2;
        *piVar2 = *piVar2;
        UNLOCK();
      } while (iVar4 == 0);
      return (uVar3 & 0x1f) * 0x50 + *(int *)((int)this + uVar6 * 4 + 0x1c);
    }
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),0xa00,0x10);
    LOCK();
    *(uint *)((int)this + uVar6 * 4 + 0x1c) = uVar5;
    UNLOCK();
  }
  return (uVar3 & 0x1f) * 0x50 + *(int *)((int)this + uVar6 * 4 + 0x1c);
}

/* ref: FUN_00b81d40 */
uint F_00b81d40(unsigned int gen_a0)
{
  GEN_ENTER(0xb81d40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  puVar1 = (uint *)((int)this + 0x5c);
  LOCK();
  uVar3 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  uVar6 = uVar3 >> 5;
  if (*(int *)((int)this + uVar6 * 4 + 0x1c) == 0) {
    if ((uVar3 & 0x1f) != 0) {
      piVar2 = (int *)((int)this + uVar6 * 4 + 0x1c);
      do {
        LOCK();
        iVar4 = *piVar2;
        *piVar2 = *piVar2;
        UNLOCK();
      } while (iVar4 == 0);
      return (uVar3 & 0x1f) * 0x30 + *(int *)((int)this + uVar6 * 4 + 0x1c);
    }
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),0x600,0x10);
    LOCK();
    *(uint *)((int)this + uVar6 * 4 + 0x1c) = uVar5;
    UNLOCK();
  }
  return (uVar3 & 0x1f) * 0x30 + *(int *)((int)this + uVar6 * 4 + 0x1c);
}

/* ref: FUN_00b81db0 */
uint F_00b81db0(unsigned int gen_a0)
{
  GEN_ENTER(0xb81db0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  if (7 < *(uint *)((int)this + 8)) {
    if (*(uint * PTR32 *)((int)this + 0x10) != (uint *)0x0) {
      **(uint * PTR32 *)((int)this + 0x10) = *(uint *)((int)this + 8);
    }
    uVar2 = F_00b81c60(*(undefined * PTR32 *)((int)this + 0xc));
    *(uint *)((int)this + 0x10) = uVar2;
    *(uint *)((int)this + 4) = uVar2 + 0x10;
    *(undefined4 *)((int)this + 8) = 0;
  }
  iVar1 = *(int *)((int)this + 8);
  *(int *)((int)this + 8) = iVar1 + 1;
  return *(int *)((int)this + 4) + iVar1 * 4;
}

/* ref: FUN_00b81df0 */
uint F_00b81df0(unsigned int gen_a0)
{
  GEN_ENTER(0xb81df0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  if (7 < *(uint *)((int)this + 8)) {
    if (*(uint * PTR32 *)((int)this + 0x10) != (uint *)0x0) {
      **(uint * PTR32 *)((int)this + 0x10) = *(uint *)((int)this + 8);
    }
    uVar2 = F_00b81cd0(*(undefined * PTR32 *)((int)this + 0xc));
    *(uint *)((int)this + 0x10) = uVar2;
    *(uint *)((int)this + 4) = uVar2 + 0x10;
    *(undefined4 *)((int)this + 8) = 0;
  }
  iVar1 = *(int *)((int)this + 8);
  *(int *)((int)this + 8) = iVar1 + 1;
  return *(int *)((int)this + 4) + iVar1 * 8;
}

/* ref: FUN_00b81e30 */
uint F_00b81e30(unsigned int gen_a0)
{
  GEN_ENTER(0xb81e30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  if (7 < *(uint *)((int)this + 8)) {
    if (*(uint * PTR32 *)((int)this + 0x10) != (uint *)0x0) {
      **(uint * PTR32 *)((int)this + 0x10) = *(uint *)((int)this + 8);
    }
    uVar2 = F_00b81d40(*(undefined * PTR32 *)((int)this + 0xc));
    *(uint *)((int)this + 0x10) = uVar2;
    *(uint *)((int)this + 4) = uVar2 + 0x10;
    *(undefined4 *)((int)this + 8) = 0;
  }
  iVar1 = *(int *)((int)this + 8);
  *(int *)((int)this + 8) = iVar1 + 1;
  return *(int *)((int)this + 4) + iVar1 * 4;
}

/* ref: FUN_00b81e70 */
unsigned int F_00b81e70(void)
{
  GEN_ENTER(0xb81e70u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00b81e80 */
uint F_00b81e80(unsigned int gen_a0)
{
  GEN_ENTER(0xb81e80u, gen_a0, 0u, 0u, 0u);
  undefined2 * in_ecx = (undefined2 *)(uintptr_t)gen_a0;
  *(undefined1 *)(in_ecx + 1) = 0;
  *(undefined4 *)(in_ecx + 2) = 0;
  *in_ecx = 0xffff;
  *(undefined1 *)((int)in_ecx + 3) = 0xff;
  *(undefined4 *)(in_ecx + 4) = 0xffffffff;
  *(undefined4 *)(in_ecx + 6) = 0x3ffff;
  return 0xffff;
}

/* ref: FUN_00b81eb0 */
uint F_00b81eb0(unsigned int gen_a0)
{
  GEN_ENTER(0xb81eb0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  *(undefined4 *)(in_ecx + 8) = 0xffffffff;
  *(undefined4 *)(in_ecx + 0xc) = 0x3ffff;
  return in_ecx;
}

/* ref: FUN_00b81ed0 */
uint F_00b81ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb81ed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b141b0(REFG(undefined4, 0x1370c1c),this,param_1);
  return uVar1;
}

/* ref: FUN_00b81ef0 */
uint F_00b81ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb81ef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b14280(REFG(undefined4, 0x1370c1c),this,param_1);
  return uVar1;
}

/* ref: FUN_00b81f10 */
uint F_00b81f10(unsigned int gen_a0)
{
  GEN_ENTER(0xb81f10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  return ((uint)*(ushort *)((int)(uintptr_t)this) * 0x100 + 8 + (uint)*(byte *)((int)this + 3)) * 0x10 +
         *(int *)(REFG(int, 0x1370c1c) + 0x3930);
}

/* ref: FUN_00b81f30 */
uint F_00b81f30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb81f30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b81fb0(((undefined *)GEN_TOP(((uint)*(ushort *)((int)(uintptr_t)this) * 0x1000 + 0x80 + *(int *)(REFG(int, 0x1370c1c) + 0x3930)))),
               param_1,(uint)*(byte *)((int)this + 3));
  return param_1;
}

/* ref: FUN_00b81f70 */
ushort F_00b81f70(unsigned int gen_a0)
{
  GEN_ENTER(0xb81f70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort uVar1;
  
  uVar1 = F_00bcb330(*(undefined * PTR32 *)(REFG(int, 0x1370c1c) + 0x3930),this);
  return uVar1;
}

/* ref: FUN_00b81fb0 */
unsigned int F_00b81fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb81fb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  
  uVar3 = (uint)(ushort)param_2;
  iVar4 = uVar3 + 0x78;
  fVar5 = (float10)*(float *)((int)this + uVar3 * 0x10);
  fVar6 = (float10)*(float *)((int)this + iVar4 * 0x10);
  fVar7 = (float10)*(float *)((int)this + uVar3 * 0x10 + 4);
  fVar8 = (float10)*(float *)((int)this + iVar4 * 0x10 + 4);
  fVar1 = *(float *)((int)this + uVar3 * 0x10 + 8);
  fVar2 = *(float *)((int)this + iVar4 * 0x10 + 8);
  *param_1 = (float)(fVar5 - fVar6);
  fVar9 = (float10)fVar1;
  param_1[1] = (float)(fVar7 - fVar8);
  fVar10 = (float10)fVar2;
  param_1[2] = (float)(fVar9 - fVar10);
  param_1[4] = (float)(fVar6 + fVar5);
  param_1[5] = (float)(fVar8 + fVar7);
  param_1[6] = (float)(fVar10 + fVar9);
  return 0;
}

/* ref: FUN_00b82080 */
uint F_00b82080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb82080u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  F_00b81fb0((undefined *)(param_2 * 0x1000 + 0x80 + (int)this),param_1,param_3 & 0xff);
  return param_1;
}

/* ref: FUN_00b820b0 */
uint F_00b820b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb820b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  F_00b81fb0(((undefined *)GEN_TOP((*(int *)((int)this + 0x3930) + 0x80 + param_2 * 0x1000))),param_1,
               param_3 & 0xff);
  return param_1;
}

/* ref: FUN_00b820e0 */
uint F_00b820e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb820e0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0xffffffff;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0xffffffff;
  return (uint)in_ecx;
}

/* ref: FUN_00b82100 */
unsigned int F_00b82100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb82100u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = param_4;
  return 0;
}

/* ref: FUN_00b82120 */
byte F_00b82120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb82120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  if (((*(int *)this == *param_1) && (*(int *)((int)this + 4) == param_1[1])) &&
     (*(int *)((int)this + 8) == param_1[2])) {
    return *(int *)((int)this + 0xc) == param_1[3];
  }
  return 0;
}

/* ref: FUN_00b82190 */
uint F_00b82190(unsigned int gen_a0)
{
  GEN_ENTER(0xb82190u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_009f7cb0((undefined *)*param_1,&REFG(undefined, 0x14a2434));
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *param_1 = 0;
  }
  return uVar2;
}

/* ref: FUN_00b821d0 */
unsigned int F_00b821d0(unsigned int gen_a0)
{
  GEN_ENTER(0xb821d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4);
  if (iVar2 != 0) {
    iVar1 = 0;
    do {
      F_009f9140(((undefined *)GEN_TOP((*(int *)((int)this + 8) + iVar1))));
      iVar1 = iVar1 + 0x94;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00b82200 */
uint F_00b82200(unsigned int gen_a0)
{
  GEN_ENTER(0xb82200u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  uint uVar2;
  int iVar3;
  int local_8;
  
  local_8 = *(int *)(in_ecx + 4);
  uVar2 = 0;
  if (local_8 != 0) {
    iVar3 = 0;
    do {
      uVar1 = F_009f1410(*(int *)(in_ecx + 8) + iVar3);
      uVar2 = uVar2 + uVar1;
      iVar3 = iVar3 + 0x94;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return uVar2;
}

/* ref: FUN_00b82240 */
uint F_00b82240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb82240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = *(uint *)((int)this + 4);
  if (((*(int *)((int)this + 8) != 0) && (uVar1 != 0)) && (uVar4 = 0, uVar1 != 0)) {
    iVar3 = 0;
    do {
      uVar2 = F_009f0ab0(((undefined *)GEN_TOP((*(int *)((int)this + 8) + iVar3))),param_1);
      if (uVar2 != 0) {
        return uVar2;
      }
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 0x94;
    } while (uVar4 < uVar1);
  }
  return 0;
}

/* ref: FUN_00b82290 */
unsigned int F_00b82290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb82290u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  int iVar2;
  
  if ((*param_1 == 1) && (uVar1 = 0, *(int *)((int)this + 4) != 0)) {
    iVar2 = 0;
    do {
      F_009f9490(((undefined *)GEN_TOP((*(int *)((int)this + 8) + iVar2))));
      F_009f1450(((undefined *)GEN_TOP((*(int *)((int)this + 8) + iVar2))),param_2);
      F_009f7700(((undefined *)GEN_TOP((*(int *)((int)this + 8) + iVar2))));
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + 0x94;
    } while (uVar1 < *(uint *)((int)this + 4));
  }
  return 0;
}

/* ref: FUN_00b822f0 */
uint F_00b822f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb822f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *param_1 - 1;
  if ((uVar1 == 0) && (uVar3 = 0, *(int *)((int)this + 4) != 0)) {
    iVar2 = 0;
    do {
      uVar1 = F_009f0a70(((undefined *)GEN_TOP((*(int *)((int)this + 8) + iVar2))));
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0x94;
    } while (uVar3 < *(uint *)((int)this + 4));
  }
  return uVar1;
}

/* ref: FUN_00b82330 */
uint F_00b82330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb82330u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = *param_1 - 1;
  if (uVar1 == 0) {
    uVar1 = F_009f1490(((undefined *)GEN_TOP((param_1[2] * 0x94 + *(int *)((int)this + 8)))),param_2);
  }
  return uVar1;
}

/* ref: FUN_00b82360 */
uint F_00b82360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb82360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *param_1 - 1;
  if (uVar1 == 0) {
    uVar1 = F_009f0a90(((undefined *)GEN_TOP((param_1[2] * 0x94 + *(int *)((int)this + 8)))));
  }
  return uVar1;
}

/* ref: FUN_00b82390 */
uint F_00b82390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb82390u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  if (*(int *)((int)this + 8) != 0) {
    F_009f1420(((undefined *)GEN_TOP((param_2 * 0x94 + *(int *)((int)this + 8)))),param_1,param_3);
    return (uint)param_1;
  }
  *param_1 = REFG(undefined4, 0x1302e54);
  param_1[1] = REFG(undefined4, 0x1302e58);
  param_1[2] = REFG(undefined4, 0x1302e5c);
  param_1[3] = REFG(undefined4, 0x1302e60);
  return (uint)param_1;
}

/* ref: FUN_00b823f0 */
uint F_00b823f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb823f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 0) {
    uVar1 = F_009f0a50(((undefined *)GEN_TOP((param_1 * 0x94 + *(int *)((int)this + 8)))),param_2);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00b82420 */
uint F_00b82420(unsigned int gen_a0)
{
  GEN_ENTER(0xb82420u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00b82430 */
uint F_00b82430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb82430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint * puVar1;
  uint uVar2;
  uint * this_00;
  
  *(uint *)((int)this + 4) = param_1;
  uVar2 = -(uint)((int)((ulonglong)param_1 * 0x94 >> 0x20) != 0) | (uint)((ulonglong)param_1 * 0x94)
  ;
  puVar1 = (uint *)F_00406bb0(-(uint)(0xfffffffb < uVar2) | uVar2 + 4,0,0);
  if (puVar1 != (uint *)0x0) {
    *puVar1 = param_1;
    puVar1 = puVar1 + 1;
    this_00 = puVar1;
    while (param_1 = param_1 - 1, -1 < (int)param_1) {
      F_009f9010(this_00);
      this_00 = this_00 + 0x25;
    }
    *(uint *)this = *(uint *)this | 2;
    *(uint * PTR32 *)((int)this + 8) = puVar1;
    return (uint)puVar1;
  }
  *(uint *)this = *(uint *)this | 2;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_00b824b0 */
unsigned int F_00b824b0(unsigned int gen_a0)
{
  GEN_ENTER(0xb824b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 8);
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] != 0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,3);
      *(uint *)this = *(uint *)this & 0xfffffffd;
      *(undefined4 *)((int)this + 8) = 0;
      *(undefined4 *)((int)this + 4) = 0;
      return 0;
    }
    F_00406b30(puVar1 + -1);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(uint *)this = *(uint *)this & 0xfffffffd;
  *(undefined4 *)((int)this + 4) = 0;
  return 0;
}

/* ref: FUN_00b82500 */
unsigned int F_00b82500(unsigned int gen_a0)
{
  GEN_ENTER(0xb82500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)((int)this + 0xc) != (undefined *)0x0) {
    F_0061eec0(*(undefined * PTR32 *)((int)this + 0xc),5);
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  *(uint *)this = *(uint *)this & 0xfffffffe;
  return 0;
}

/* ref: FUN_00b82530 */
uint F_00b82530(unsigned int gen_a0)
{
  GEN_ENTER(0xb82530u, gen_a0, 0u, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  return *in_ecx >> 1 & 1;
}

/* ref: FUN_00b82540 */
unsigned int F_00b82540(unsigned int gen_a0)
{
  GEN_ENTER(0xb82540u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 8);
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] == 0) {
      F_00406b30(puVar1 + -1);
    }
    else {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,3);
    }
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(uint *)this = *(uint *)this & 0xfffffffd;
  *(undefined4 *)((int)this + 4) = 0;
  if (*(undefined * PTR32 *)((int)this + 0xc) != (undefined *)0x0) {
    F_0061eec0(*(undefined * PTR32 *)((int)this + 0xc),5);
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  *(uint *)this = *(uint *)this & 0xfffffffe;
  return 0;
}

/* ref: FUN_00b825a0 */
unsigned int F_00b825a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb825a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(undefined * PTR32 *)((int)this + 0xc) != (undefined *)0x0) {
    F_0061eec0(*(undefined * PTR32 *)((int)this + 0xc),5);
    *(uint *)this = *(uint *)this | 1;
    *(undefined4 *)((int)this + 0xc) = 0;
    *(undefined4 *)((int)this + 0xc) = param_1;
    return 0;
  }
  *(uint *)this = *(uint *)this | 1;
  *(undefined4 *)((int)this + 0xc) = param_1;
  return 0;
}

/* ref: FUN_00b825e0 */
uint F_00b825e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb825e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (*param_1 == 0) {
    pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 8))))
                               (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),0x20,0x10)));
    if (pvVar1 == (undefined *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = F_009f92d0(pvVar1);
    }
    *param_1 = uVar2;
  }
  pvVar1 = *(undefined * PTR32 *)(REFG(int, 0x137129c) + 0x60);
  uVar2 = F_00500af0(pvVar1,param_2);
  uVar2 = F_00500ae0(pvVar1,uVar2 & 0xffff);
  uVar2 = *(uint *)(uVar2 + 8) >> 4;
  if ((uVar2 & 1) == 0) {
    if (*(undefined * PTR32 *)((int)this + 0xc) != (undefined *)0x0) {
      uVar2 = F_0063a2f0(*(undefined * PTR32 *)((int)this + 0xc),param_2,param_3,param_1);
      return uVar2;
    }
  }
  else {
    uVar4 = 0;
    if (*(int *)((int)this + 4) != 0) {
      iVar5 = 0;
      do {
        uVar3 = F_009f7970(*(int *)((int)this + 8) + iVar5,param_2,param_3);
        uVar2 = 0;
        if (uVar3 != 0) {
          uVar2 = F_009f7d80((undefined *)*param_1,uVar3);
        }
        uVar4 = uVar4 + 1;
        iVar5 = iVar5 + 0x94;
      } while (uVar4 < *(uint *)((int)this + 4));
    }
  }
  return uVar2;
}

/* ref: FUN_00b826a0 */
unsigned int F_00b826a0(unsigned int gen_a0)
{
  GEN_ENTER(0xb826a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 8);
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] == 0) {
      F_00406b30(puVar1 + -1);
    }
    else {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,3);
    }
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(uint *)this = *(uint *)this & 0xfffffffd;
  *(undefined4 *)((int)this + 4) = 0;
  if (*(undefined * PTR32 *)((int)this + 0xc) != (undefined *)0x0) {
    F_0061eec0(*(undefined * PTR32 *)((int)this + 0xc),5);
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  *(uint *)this = *(uint *)this & 0xfffffffe;
  return 0;
}

/* ref: FUN_00b82700 */
unsigned int F_00b82700(unsigned int gen_a0)
{
  GEN_ENTER(0xb82700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 8);
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] == 0) {
      F_00406b30(puVar1 + -1);
    }
    else {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,3);
    }
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(uint *)this = *(uint *)this & 0xfffffffd;
  *(undefined4 *)((int)this + 4) = 0;
  if (*(undefined * PTR32 *)((int)this + 0xc) != (undefined *)0x0) {
    F_0061eec0(*(undefined * PTR32 *)((int)this + 0xc),5);
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  *(uint *)this = *(uint *)this & 0xfffffffe;
  return 0;
}

/* ref: Client::Graphics::Animation::MaterialAnimationModule::vf0 */
uint F_00b82760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb82760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pMVar1;
  int iVar2;
  undefined * this_00;
  
  if ((param_1 & 2) == 0) {
    F_009f9cd0(this);
    if ((param_1 & 1) != 0) {
      F_00406ad0(this);
    }
  }
  else {
    pMVar1 = this + -4;
    iVar2 = *(int *)pMVar1;
    this_00 = this + iVar2 * 0x94;
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      this_00 = this_00 + -0x94;
      F_009f9cd0(this_00);
    }
    this = pMVar1;
    if ((param_1 & 1) != 0) {
      F_00406b30(pMVar1);
      return (uint)pMVar1;
    }
  }
  return (uint)this;
}

/* ref: FUN_00b827f0 */
uint F_00b827f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb827f0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00b82800 */
uint F_00b82800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb82800u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00b82820 */
uint F_00b82820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb82820u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00b82830 */
uint F_00b82830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb82830u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00b82850 */
uint F_00b82850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb82850u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 2;
}

/* ref: FUN_00b82860 */
uint F_00b82860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb82860u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00b82870 */
uint F_00b82870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb82870u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00b82890 */
uint F_00b82890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb82890u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b828f0 */
uint F_00b828f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb828f0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b82950 */
uint F_00b82950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb82950u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b829a0 */
uint F_00b829a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb829a0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b829f0 */
uint F_00b829f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb829f0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b82a70 */
uint F_00b82a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb82a70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0xd5);
  return (uint)uVar1;
}

/* ref: FUN_00b82ad0 */
uint F_00b82ad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb82ad0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0xd5);
  return (uint)uVar1;
}

/* ref: FUN_00b82b40 */
uint F_00b82b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb82b40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 2,0xd9);
  return (uint)uVar1;
}

/* ref: FUN_00b82ba0 */
uint F_00b82ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb82ba0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0xd9);
  return (uint)uVar1;
}

/* ref: FUN_00b82c10 */
uint F_00b82c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb82c10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0xd9);
  return (uint)uVar1;
}

/* ref: FUN_00b82c40 */
uint F_00b82c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb82c40u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0xd5);
  return uVar1;
}

/* ref: FUN_00b82c80 */
uint F_00b82c80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb82c80u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0xd5);
  return uVar1;
}

/* ref: FUN_00b82cc0 */
uint F_00b82cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb82cc0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 2,param_2,0xd9);
  return uVar1;
}

/* ref: FUN_00b82cf0 */
uint F_00b82cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb82cf0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0xd9);
  return uVar1;
}

/* ref: FUN_00b82d30 */
uint F_00b82d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb82d30u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0xd9);
  return uVar1;
}

/* ref: FUN_00b82d70 */
uint F_00b82d70(unsigned int gen_a0)
{
  GEN_ENTER(0xb82d70u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b82d80 */
uint F_00b82d80(unsigned int gen_a0)
{
  GEN_ENTER(0xb82d80u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b82d90 */
uint F_00b82d90(unsigned int gen_a0)
{
  GEN_ENTER(0xb82d90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b82da0 */
uint F_00b82da0(unsigned int gen_a0)
{
  GEN_ENTER(0xb82da0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b82dd0 */
unsigned int F_00b82dd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb82dd0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  if (param_1 != param_2) {
    do {
      if (*param_1 == *param_3) {
        return 0;
      }
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b82df0 */
unsigned int F_00b82df0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb82df0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  if (param_1 != param_2) {
    do {
      if (*param_1 == *param_3) {
        return 0;
      }
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b82e10 */
uint F_00b82e10(unsigned int gen_a0)
{
  GEN_ENTER(0xb82e10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b82e20 */
uint F_00b82e20(unsigned int gen_a0)
{
  GEN_ENTER(0xb82e20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b82e30 */
uint F_00b82e30(unsigned int gen_a0)
{
  GEN_ENTER(0xb82e30u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b82e40 */
uint F_00b82e40(unsigned int gen_a0)
{
  GEN_ENTER(0xb82e40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b82e50 */
uint F_00b82e50(unsigned int gen_a0)
{
  GEN_ENTER(0xb82e50u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b82e70 */
uint F_00b82e70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb82e70u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00b82eb0 */
uint F_00b82eb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb82eb0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00b82f40 */
uint F_00b82f40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb82f40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b82f60 */
uint F_00b82f60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb82f60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b82fe0 */
uint F_00b82fe0(unsigned int gen_a0)
{
  GEN_ENTER(0xb82fe0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b82ff0 */
uint F_00b82ff0(unsigned int gen_a0)
{
  GEN_ENTER(0xb82ff0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b83020 */
uint F_00b83020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb83020u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *(int *)(in_ecx + 0x28) + (uint)(ushort)param_2 * 0x24;
}

/* ref: FUN_00b83040 */
uint F_00b83040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb83040u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (uint)(ushort)param_2 * 0x54 + *(int *)(in_ecx + 0x2c);
}

/* ref: FUN_00b83150 */
uint F_00b83150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb83150u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *(int *)(in_ecx + 0x28) + (uint)(byte)param_2 * 0x24;
}

/* ref: FUN_00b83170 */
uint F_00b83170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb83170u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *(int *)(in_ecx + 0x2c) + (uint)(byte)param_2 * 0x24;
}

/* ref: FUN_00b83190 */
uint F_00b83190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb83190u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (uint)(byte)param_2 * 0x30 + *(int *)(in_ecx + 0x30);
}

/* ref: FUN_00b831b0 */
uint F_00b831b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb831b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (uint)(byte)param_2 * 0x20 + *(int *)(in_ecx + 0x34);
}

/* ref: FUN_00b831d0 */
uint F_00b831d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb831d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (uint)(byte)param_2 * 0x34 + *(int *)(in_ecx + 0x38);
}

/* ref: FUN_00b831f0 */
uint F_00b831f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb831f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (uint)(byte)param_2 * 0x30 + *(int *)(in_ecx + 0x3c);
}

/* ref: FUN_00b83210 */
uint F_00b83210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb83210u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (uint)(byte)param_2 * 0x10 + *(int *)(in_ecx + 0x40);
}

/* ref: FUN_00b83230 */
uint F_00b83230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb83230u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *(int *)(in_ecx + 0x44) + (uint)(byte)param_2 * 0x24;
}

/* ref: FUN_00b83300 */
uint F_00b83300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb83300u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *(int *)(in_ecx + 4) + (uint)(byte)param_2 * 0x48;
}

/* ref: FUN_00b83370 */
uint F_00b83370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb83370u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (uint)(byte)param_2 * 0x7c + *(int *)(in_ecx + 8);
}

/* ref: FUN_00b83390 */
uint F_00b83390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb83390u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (uint)(byte)param_2 * 0x74 + *(int *)(in_ecx + 0xc);
}

/* ref: FUN_00b833b0 */
uint F_00b833b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb833b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (uint)(byte)param_2 * 0x5c + *(int *)(in_ecx + 0x10);
}

/* ref: FUN_00b833d0 */
uint F_00b833d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb833d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (uint)(byte)param_2 * 0xa8 + *(int *)(in_ecx + 0x14);
}

/* ref: FUN_00b833f0 */
uint F_00b833f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb833f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (uint)(byte)param_2 * 0x50 + *(int *)(in_ecx + 0x18);
}

/* ref: FUN_00b83490 */
byte F_00b83490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb83490u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0xba) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00b834a0 */
unsigned int F_00b834a0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xb834a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xac) = param_2;
  return 0;
}

/* ref: FUN_00b834c0 */
unsigned int F_00b834c0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xb834c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xb0) = param_2;
  return 0;
}

/* ref: FUN_00b834e0 */
unsigned int F_00b834e0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xb834e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xa0) = param_2;
  return 0;
}

/* ref: FUN_00b83500 */
unsigned int F_00b83500(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xb83500u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xa4) = (float)((float10)1 - (float10)param_2);
  return 0;
}

/* ref: FUN_00b83520 */
unsigned int F_00b83520(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xb83520u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xa8) = param_2;
  return 0;
}

/* ref: FUN_00b83540 */
uint F_00b83540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb83540u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 in_EAX = 0;
  uint * puVar1;
  
  puVar1 = ((uint *)GEN_TOP(CONCAT22((short)((uint)in_EAX >> 0x10),(ushort)param_2)));
  if ((ushort)param_2 < *(ushort *)((int)this + 0xb8)) {
    puVar1 = ((uint *)GEN_TOP(((uint)(ushort)param_2 * 0xa0 + 0x80 + *(int *)((int)this + 0x1c))));
    *puVar1 = *puVar1 | 1 << ((byte)param_1 & 0x1f);
  }
  return (uint)puVar1;
}

/* ref: FUN_00b83580 */
uint F_00b83580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb83580u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 in_EAX = 0;
  uint * puVar1;
  
  puVar1 = ((uint *)GEN_TOP(CONCAT22((short)((uint)in_EAX >> 0x10),(ushort)param_2)));
  if ((ushort)param_2 < *(ushort *)((int)this + 0xb8)) {
    puVar1 = ((uint *)GEN_TOP(((uint)(ushort)param_2 * 0xa0 + 0x80 + *(int *)((int)this + 0x1c))));
    *puVar1 = *puVar1 & ~(1 << ((byte)param_1 & 0x1f));
  }
  return (uint)puVar1;
}

/* ref: FUN_00b835c0 */
uint F_00b835c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb835c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 in_EAX = 0;
  uint * puVar1;
  
  puVar1 = ((uint *)GEN_TOP(CONCAT22((short)((uint)in_EAX >> 0x10),(ushort)param_2)));
  if ((ushort)param_2 < *(ushort *)((int)this + 0xb8)) {
    puVar1 = ((uint *)GEN_TOP(((uint)(ushort)param_2 * 0xa0 + 0x84 + *(int *)((int)this + 0x1c))));
    *puVar1 = *puVar1 | 1 << ((byte)param_1 & 0x1f);
  }
  return (uint)puVar1;
}

/* ref: FUN_00b83600 */
uint F_00b83600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb83600u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 in_EAX = 0;
  uint * puVar1;
  
  puVar1 = ((uint *)GEN_TOP(CONCAT22((short)((uint)in_EAX >> 0x10),(ushort)param_2)));
  if ((ushort)param_2 < *(ushort *)((int)this + 0xb8)) {
    puVar1 = ((uint *)GEN_TOP(((uint)(ushort)param_2 * 0xa0 + 0x84 + *(int *)((int)this + 0x1c))));
    *puVar1 = *puVar1 & ~(1 << ((byte)param_1 & 0x1f));
  }
  return (uint)puVar1;
}

/* ref: FUN_00b83640 */
uint F_00b83640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb83640u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x10) = param_2;
  return param_2;
}

/* ref: FUN_00b83650 */
uint F_00b83650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb83650u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x30) = *param_2;
  *(undefined4 *)(in_ecx + 0x34) = param_2[1];
  *(undefined4 *)(in_ecx + 0x38) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_00b83670 */
ushort F_00b83670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb83670u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x6c) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00b83680 */
ushort F_00b83680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb83680u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x6e) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00b83720 */
uint F_00b83720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb83720u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00b83740 */
uint F_00b83740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb83740u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x20 + *in_ecx;
}

/* ref: FUN_00b83750 */
byte F_00b83750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb83750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  undefined4 uVar2;
  
  if (param_1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  uVar2 = REFG(float, 0x1087f04);
  *(int * PTR32 *)((int)this + 0x98) = param_1;
  *(undefined4 *)((int)this + 0x10) = uVar2;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = uVar2;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = uVar2;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x50) = uVar2;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = uVar2;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = uVar2;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  return 1;
}

/* ref: FUN_00b83820 */
uint F_00b83820(unsigned int gen_a0)
{
  GEN_ENTER(0xb83820u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  int local_c;
  
  piVar2 = (int *)((int)this + 0x9c);
  local_c = 5;
  do {
    uVar4 = piVar2[1] - *piVar2 >> 2;
    if (uVar4 != 0) {
      iVar1 = *piVar2;
      uVar3 = 0;
      do {
        this_00 = *(undefined * PTR32 *)(iVar1 + uVar3 * 4);
        if (*(char *)((int)this_00 + 0xc4) != '\0') {
          F_00bbcca0(this_00);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
    piVar2 = piVar2 + 4;
    local_c = local_c + -1;
  } while (local_c != 0);
  return (uint)piVar2;
}

/* ref: FUN_00b83880 */
uint F_00b83880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb83880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  byte bVar1;
  byte * pbVar2;
  int iVar3;
  int * piVar4;
  byte * pbVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  uint local_8;
  
  piVar4 = (int *)((int)this + 0xec);
  local_8 = 0;
  do {
    uVar7 = piVar4[1] - *piVar4 >> 2;
    if (uVar7 != 0) {
      uVar6 = 0;
      do {
        pbVar2 = ((byte *)GEN_TOP((*(int *)(*piVar4 + uVar6 * 4) + 8)));
        pbVar5 = param_1;
        do {
          bVar1 = *pbVar2;
          bVar8 = bVar1 < *pbVar5;
          if (bVar1 != *pbVar5) {
LAB_00b838e0: ;
            iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_00b838e5;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar2[1];
          bVar8 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_00b838e0;
          pbVar2 = pbVar2 + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_00b838e5: ;
        if (iVar3 == 0) {
          return *(uint *)(*piVar4 + uVar6 * 4);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar7);
    }
    local_8 = local_8 + 1;
    piVar4 = piVar4 + 4;
    if (4 < local_8) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_00b83920 */
uint F_00b83920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb83920u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  byte bVar1;
  int iVar2;
  byte * pbVar3;
  int iVar4;
  byte * pbVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  
  if (4 < param_2) {
    return 0;
  }
  uVar7 = *(int *)((int)this + param_2 * 0x10 + 0xf0) - *(int *)((int)this + param_2 * 0x10 + 0xec)
          >> 2;
  if (uVar7 != 0) {
    iVar2 = *(int *)((int)this + param_2 * 0x10 + 0xec);
    uVar6 = 0;
    do {
      pbVar3 = ((byte *)GEN_TOP((*(int *)(iVar2 + uVar6 * 4) + 8)));
      pbVar5 = param_1;
      do {
        bVar1 = *pbVar3;
        bVar8 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00b83980: ;
          iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_00b83985;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar8 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00b83980;
        pbVar3 = pbVar3 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_00b83985: ;
      if (iVar4 == 0) {
        return *(uint *)(iVar2 + uVar6 * 4);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar7);
  }
  return 0;
}

/* ref: FUN_00b839b0 */
uint F_00b839b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb839b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  if (param_1 < 5) {
    if (param_2 < (uint)(*(int *)((int)this + param_1 * 0x10 + 0xa0) -
                         *(int *)((int)this + param_1 * 0x10 + 0x9c) >> 2)) {
      return *((uint *)GEN_TOP((*(int *)((int)this + param_1 * 0x10 + 0x9c) + param_2 * 4)));
    }
  }
  return 0;
}

/* ref: FUN_00b839f0 */
uint F_00b839f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb839f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (4 < param_1) {
    return 0;
  }
  piVar1 = (int *)((int)this + param_1 * 0x10 + 0x9c);
  uVar3 = piVar1[1] - *piVar1 >> 2;
  if (uVar3 != 0) {
    uVar4 = 0;
    do {
      uVar2 = *(uint *)(*piVar1 + uVar4 * 4);
      if (param_2 == *(int *)(uVar2 + 0x10)) {
        return uVar2;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  return 0;
}

/* ref: FUN_00b83a40 */
uint F_00b83a40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb83a40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int * piVar1;
  
  if (4 < param_2) {
    return 0;
  }
  piVar1 = (int *)(in_ecx + 0x9c + param_2 * 0x10);
  return piVar1[1] - *piVar1 >> 2;
}

/* ref: FUN_00b83a70 */
uint F_00b83a70(unsigned int gen_a0)
{
  GEN_ENTER(0xb83a70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  bool bVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  int local_14;
  int local_c;
  
  bVar2 = false;
  piVar4 = (int *)((int)this + 0x9c);
  local_c = 5;
  uVar3 = REFG(undefined4, 0x1487c64);
  do {
    uVar6 = piVar4[1] - *piVar4 >> 2;
    if (uVar6 != 0) {
      iVar1 = *piVar4;
      uVar5 = 0;
      do {
        uVar3 = *(uint *)(iVar1 + uVar5 * 4);
        if (*(char *)(uVar3 + 0xc4) != '\0') {
          uVar3 = F_00b80480(uVar3,this);
          bVar2 = true;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar6);
    }
    piVar4 = piVar4 + 4;
    local_c = local_c + -1;
  } while (local_c != 0);
  if (bVar2) {
    piVar4 = (int *)((int)this + 0xec);
    local_14 = 5;
    do {
      uVar3 = piVar4[1] - *piVar4 >> 2;
      if (uVar3 != 0) {
        iVar1 = *piVar4;
        uVar6 = 0;
        do {
          F_00b80420(*(undefined4 *)(iVar1 + uVar6 * 4));
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar3);
      }
      piVar4 = piVar4 + 4;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
    uVar3 = F_00b804e0(this);
  }
  return uVar3;
}

/* ref: FUN_00b83b40 */
uint F_00b83b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb83b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  byte * pbVar1;
  int * piVar2;
  uint * puVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  byte bVar12;
  uint in_EAX = 0;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ushort * puVar16;
  byte bVar17;
  byte bVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  uint local_40;
  int local_34;
  int local_30;
  int local_2c;
  uint local_24;
  uint local_1c;
  uint local_10;
  byte local_9;
  byte local_8;
  
  if (param_1 < 5) {
    local_24 = 0;
    do {
      if ((local_24 != param_1) && (iVar7 = *(int *)((int)this + local_24 * 4 + 0x13c), iVar7 != 0))
      {
        piVar2 = (int *)((int)this + local_24 * 0x10 + 0x9c);
        iVar8 = *piVar2;
        uVar13 = piVar2[1] - iVar8 >> 2;
        if (uVar13 != 0) {
          local_10 = 0;
          do {
            pbVar1 = ((byte *)GEN_TOP((*(int *)(iVar7 + 0xb4) + (local_10 & 0xff) * 0x48)));
            bVar18 = pbVar1[1];
            bVar4 = *pbVar1;
            bVar5 = pbVar1[2];
            bVar6 = pbVar1[3];
            local_8 = 0;
            if (bVar4 != 0) {
              bVar12 = 0;
              local_34 = 0;
              do {
                iVar9 = *(int *)(pbVar1 + 0x28);
                uVar14 = F_00b83920(this,iVar9 + local_34,param_1);
                if (uVar14 != 0) {
                  uVar14 = F_00bbef80(*(undefined * PTR32 *)(iVar8 + local_10 * 4),uVar14,
                                        *(undefined4 *)(iVar9 + local_34 + 0x20),(uint)local_8,1,0);
                  uVar15 = 1 << (bVar12 & 0x1f);
                  local_9 = 0;
                  bVar17 = (byte)uVar14;
                  if (bVar5 != 0) {
                    local_2c = 0;
                    do {
                      iVar9 = *(int *)(pbVar1 + 0x30);
                      iVar22 = *(int *)(iVar8 + local_10 * 4);
                      uVar14 = (uint)local_9;
                      if (uVar14 < (uint)(*(int *)(iVar22 + 0x78) - *(int *)(iVar22 + 0x74) >> 2)) {
                        uVar19 = (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar22 + 0x74) + uVar14 * 4))) + 0xb8)));
                      }
                      else {
                        uVar19 = 0;
                      }
                      local_1c = 0;
                      if (uVar19 != 0) {
                        do {
                          uVar20 = local_1c & 0xffff;
                          iVar22 = uVar20 * 0x54 + *(int *)(iVar9 + local_2c + 0x2c);
                          if ((*(uint *)(iVar22 + 0x4c) & uVar15) == 0) {
                            iVar10 = *(int *)(iVar8 + local_10 * 4);
                            if ((uVar14 < (uint)(*(int *)(iVar10 + 0x78) - *(int *)(iVar10 + 0x74)
                                                >> 2)) &&
                               (iVar10 = *((int *)GEN_TOP((*(int *)(iVar10 + 0x74) + uVar14 * 4))),
                               (ushort)local_1c < *(ushort *)(iVar10 + 0xb8))) {
                              puVar3 = ((uint *)GEN_TOP((uVar20 * 0xa0 + 0x80 + *(int *)(iVar10 + 0x1c))));
                              *puVar3 = *puVar3 & ~(1 << (bVar17 & 0x1f));
                            }
                          }
                          else {
                            iVar10 = *(int *)(iVar8 + local_10 * 4);
                            if ((uVar14 < (uint)(*(int *)(iVar10 + 0x78) - *(int *)(iVar10 + 0x74)
                                                >> 2)) &&
                               (iVar10 = *((int *)GEN_TOP((*(int *)(iVar10 + 0x74) + uVar14 * 4))),
                               (ushort)local_1c < *(ushort *)(iVar10 + 0xb8))) {
                              puVar3 = ((uint *)GEN_TOP((uVar20 * 0xa0 + 0x80 + *(int *)(iVar10 + 0x1c))));
                              *puVar3 = *puVar3 | 1 << (bVar17 & 0x1f);
                            }
                          }
                          if ((*(uint *)(iVar22 + 0x50) & uVar15) == 0) {
                            iVar22 = *(int *)(iVar8 + local_10 * 4);
                            if ((uVar14 < (uint)(*(int *)(iVar22 + 0x78) - *(int *)(iVar22 + 0x74)
                                                >> 2)) &&
                               (iVar22 = *((int *)GEN_TOP((*(int *)(iVar22 + 0x74) + uVar14 * 4))),
                               (ushort)local_1c < *(ushort *)(iVar22 + 0xb8))) {
                              puVar3 = ((uint *)GEN_TOP((uVar20 * 0xa0 + 0x84 + *(int *)(iVar22 + 0x1c))));
                              *puVar3 = *puVar3 & ~(1 << (bVar17 & 0x1f));
                            }
                          }
                          else {
                            iVar22 = *(int *)(iVar8 + local_10 * 4);
                            if ((uVar14 < (uint)(*(int *)(iVar22 + 0x78) - *(int *)(iVar22 + 0x74)
                                                >> 2)) &&
                               (iVar22 = *((int *)GEN_TOP((*(int *)(iVar22 + 0x74) + uVar14 * 4))),
                               (ushort)local_1c < *(ushort *)(iVar22 + 0xb8))) {
                              puVar3 = ((uint *)GEN_TOP((uVar20 * 0xa0 + 0x84 + *(int *)(iVar22 + 0x1c))));
                              *puVar3 = *puVar3 | 1 << (bVar17 & 0x1f);
                            }
                          }
                          local_1c = local_1c + 1;
                        } while (local_1c < uVar19);
                      }
                      local_2c = local_2c + 0x30;
                      local_9 = local_9 + 1;
                    } while (local_9 < bVar5);
                  }
                  uVar14 = 0;
                  local_9 = 0;
                  if (bVar6 != 0) {
                    local_2c = 0;
                    do {
                      iVar9 = *(int *)(pbVar1 + 0x34);
                      iVar22 = *(int *)(iVar8 + local_10 * 4);
                      if ((*(uint *)(iVar9 + local_2c + 0x18) & uVar15) == 0) {
                        if (uVar14 < (uint)(*(int *)(iVar22 + 0xb8) - *(int *)(iVar22 + 0xb4) >> 5))
                        {
                          puVar3 = ((uint *)GEN_TOP((uVar14 * 0x20 + 8 + *(int *)(iVar22 + 0xb4))));
                          *puVar3 = *puVar3 & ~(1 << (bVar17 & 0x1f));
                        }
                      }
                      else if (uVar14 < (uint)(*(int *)(iVar22 + 0xb8) - *(int *)(iVar22 + 0xb4) >>
                                              5)) {
                        puVar3 = ((uint *)GEN_TOP((uVar14 * 0x20 + 8 + *(int *)(iVar22 + 0xb4))));
                        *puVar3 = *puVar3 | 1 << (bVar17 & 0x1f);
                      }
                      iVar22 = *(int *)(iVar8 + local_10 * 4);
                      if ((*(uint *)(iVar9 + local_2c + 0x1c) & uVar15) == 0) {
                        if (uVar14 < (uint)(*(int *)(iVar22 + 0xb8) - *(int *)(iVar22 + 0xb4) >> 5))
                        {
                          puVar3 = ((uint *)GEN_TOP((uVar14 * 0x20 + 0xc + *(int *)(iVar22 + 0xb4))));
                          *puVar3 = *puVar3 & ~(1 << (bVar17 & 0x1f));
                        }
                      }
                      else if (uVar14 < (uint)(*(int *)(iVar22 + 0xb8) - *(int *)(iVar22 + 0xb4) >>
                                              5)) {
                        puVar3 = ((uint *)GEN_TOP((uVar14 * 0x20 + 0xc + *(int *)(iVar22 + 0xb4))));
                        *puVar3 = *puVar3 | 1 << (bVar17 & 0x1f);
                      }
                      local_2c = local_2c + 0x20;
                      local_9 = local_9 + 1;
                      uVar14 = (uint)local_9;
                    } while (local_9 < bVar6);
                  }
                }
                bVar12 = bVar12 + 1;
                local_34 = local_34 + 0x24;
                local_8 = local_8 + 1;
              } while (local_8 < bVar4);
            }
            local_8 = 0;
            if (bVar18 != 0) {
              cVar11 = '\0';
              local_2c = 0;
              do {
                iVar9 = *(int *)(pbVar1 + 0x2c);
                uVar14 = F_00b83920(this,iVar9 + local_2c,param_1);
                if (uVar14 != 0) {
                  uVar14 = F_00bbf070(*(undefined * PTR32 *)(iVar8 + local_10 * 4),uVar14,
                                        *(undefined4 *)(iVar9 + local_2c + 0x20),
                                        (uint)(ushort)((ushort)local_8 + (ushort)bVar4),1,0);
                  uVar15 = 1 << (bVar4 + cVar11 & 0x1f);
                  bVar12 = 0;
                  if (bVar6 != 0) {
                    local_34 = 0;
                    do {
                      iVar9 = *(int *)(pbVar1 + 0x34);
                      iVar22 = *(int *)(iVar8 + local_10 * 4);
                      uVar19 = (uint)bVar12;
                      bVar17 = (byte)uVar14;
                      if ((*(uint *)(iVar9 + local_34 + 0x18) & uVar15) == 0) {
                        if (uVar19 < (uint)(*(int *)(iVar22 + 0xb8) - *(int *)(iVar22 + 0xb4) >> 5))
                        {
                          puVar3 = ((uint *)GEN_TOP((uVar19 * 0x20 + 8 + *(int *)(iVar22 + 0xb4))));
                          *puVar3 = *puVar3 & ~(1 << (bVar17 & 0x1f));
                        }
                      }
                      else if (uVar19 < (uint)(*(int *)(iVar22 + 0xb8) - *(int *)(iVar22 + 0xb4) >>
                                              5)) {
                        puVar3 = ((uint *)GEN_TOP((uVar19 * 0x20 + 8 + *(int *)(iVar22 + 0xb4))));
                        *puVar3 = *puVar3 | 1 << (bVar17 & 0x1f);
                      }
                      iVar22 = *(int *)(iVar8 + local_10 * 4);
                      if ((*(uint *)(iVar9 + local_34 + 0x1c) & uVar15) == 0) {
                        if (uVar19 < (uint)(*(int *)(iVar22 + 0xb8) - *(int *)(iVar22 + 0xb4) >> 5))
                        {
                          puVar3 = ((uint *)GEN_TOP((uVar19 * 0x20 + 0xc + *(int *)(iVar22 + 0xb4))));
                          *puVar3 = *puVar3 & ~(1 << (bVar17 & 0x1f));
                        }
                      }
                      else if (uVar19 < (uint)(*(int *)(iVar22 + 0xb8) - *(int *)(iVar22 + 0xb4) >>
                                              5)) {
                        puVar3 = ((uint *)GEN_TOP((uVar19 * 0x20 + 0xc + *(int *)(iVar22 + 0xb4))));
                        *puVar3 = *puVar3 | 1 << (bVar17 & 0x1f);
                      }
                      local_34 = local_34 + 0x20;
                      bVar12 = bVar12 + 1;
                    } while (bVar12 < bVar6);
                  }
                }
                cVar11 = cVar11 + '\x01';
                local_2c = local_2c + 0x24;
                local_8 = local_8 + 1;
              } while (local_8 < bVar18);
            }
            local_8 = 0;
            if (bVar5 != 0) {
              local_2c = 0;
              do {
                puVar16 = ((ushort *)GEN_TOP((*(int *)(pbVar1 + 0x30) + local_2c)));
                local_40 = (uint)*puVar16;
                if (*puVar16 != 0) {
                  cVar11 = '\0';
                  local_30 = 0;
                  do {
                    iVar9 = *(int *)(puVar16 + 0x14);
                    uVar14 = F_00b83920(this,iVar9 + local_30,param_1);
                    if (uVar14 != 0) {
                      uVar19 = (uint)local_8;
                      uVar14 = F_00bbcd30(*(undefined * PTR32 *)(iVar8 + local_10 * 4),uVar14,
                                            *(undefined4 *)(iVar9 + local_30 + 0x20),uVar19,
                                            (uint)(ushort)((ushort)bVar4 + (ushort)local_8),1,0);
                      uVar15 = 1 << (bVar4 + cVar11 & 0x1f);
                      iVar9 = *(int *)(iVar8 + local_10 * 4);
                      if (uVar19 < (uint)(*(int *)(iVar9 + 0x78) - *(int *)(iVar9 + 0x74) >> 2)) {
                        uVar20 = (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar9 + 0x74) + uVar19 * 4))) + 0xb8)));
                      }
                      else {
                        uVar20 = 0;
                      }
                      local_1c = 0;
                      if (uVar20 != 0) {
                        do {
                          uVar21 = local_1c & 0xffff;
                          iVar22 = uVar21 * 0x54 + *(int *)(puVar16 + 0x16);
                          iVar9 = *(int *)(iVar8 + local_10 * 4);
                          bVar18 = (byte)uVar14;
                          if ((*(uint *)(iVar22 + 0x4c) & uVar15) == 0) {
                            if ((uVar19 < (uint)(*(int *)(iVar9 + 0x78) - *(int *)(iVar9 + 0x74) >>
                                                2)) &&
                               (iVar9 = *((int *)GEN_TOP((*(int *)(iVar9 + 0x74) + uVar19 * 4))),
                               (ushort)local_1c < *(ushort *)(iVar9 + 0xb8))) {
                              puVar3 = ((uint *)GEN_TOP((*(int *)(iVar9 + 0x1c) + 0x80 + uVar21 * 0xa0)));
                              *puVar3 = *puVar3 & ~(1 << (bVar18 & 0x1f));
                            }
                          }
                          else if ((uVar19 < (uint)(*(int *)(iVar9 + 0x78) - *(int *)(iVar9 + 0x74)
                                                   >> 2)) &&
                                  (iVar9 = *((int *)GEN_TOP((*(int *)(iVar9 + 0x74) + uVar19 * 4))),
                                  (ushort)local_1c < *(ushort *)(iVar9 + 0xb8))) {
                            puVar3 = ((uint *)GEN_TOP((*(int *)(iVar9 + 0x1c) + 0x80 + uVar21 * 0xa0)));
                            *puVar3 = *puVar3 | 1 << (bVar18 & 0x1f);
                          }
                          iVar9 = *(int *)(iVar8 + local_10 * 4);
                          if ((*(uint *)(iVar22 + 0x50) & uVar15) == 0) {
                            if ((uVar19 < (uint)(*(int *)(iVar9 + 0x78) - *(int *)(iVar9 + 0x74) >>
                                                2)) &&
                               (iVar9 = *((int *)GEN_TOP((*(int *)(iVar9 + 0x74) + uVar19 * 4))),
                               (ushort)local_1c < *(ushort *)(iVar9 + 0xb8))) {
                              puVar3 = ((uint *)GEN_TOP((*(int *)(iVar9 + 0x1c) + 0x84 + uVar21 * 0xa0)));
                              *puVar3 = *puVar3 & ~(1 << (bVar18 & 0x1f));
                            }
                          }
                          else if ((uVar19 < (uint)(*(int *)(iVar9 + 0x78) - *(int *)(iVar9 + 0x74)
                                                   >> 2)) &&
                                  (iVar9 = *((int *)GEN_TOP((*(int *)(iVar9 + 0x74) + uVar19 * 4))),
                                  (ushort)local_1c < *(ushort *)(iVar9 + 0xb8))) {
                            puVar3 = ((uint *)GEN_TOP((*(int *)(iVar9 + 0x1c) + 0x84 + uVar21 * 0xa0)));
                            *puVar3 = *puVar3 | 1 << (bVar18 & 0x1f);
                          }
                          local_1c = local_1c + 1;
                        } while (local_1c < uVar20);
                      }
                    }
                    local_30 = local_30 + 0x24;
                    cVar11 = cVar11 + '\x01';
                    local_40 = local_40 - 1;
                  } while (local_40 != 0);
                }
                local_2c = local_2c + 0x30;
                local_8 = local_8 + 1;
              } while (local_8 < bVar5);
            }
            local_10 = local_10 + 1;
          } while (local_10 < uVar13);
        }
      }
      in_EAX = local_24 + 1;
      local_24 = in_EAX;
    } while (in_EAX < 5);
  }
  return in_EAX;
}

/* ref: FUN_00b84310 */
uint F_00b84310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb84310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  float10 fVar1;
  uint uVar2;
  int iVar3;
  float * pfVar4;
  float * pfVar5;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  fVar1 = (float10)0;
  (*(float *)(gen_frame + 0x30)) = (float)fVar1;
  (*(float *)(gen_frame + 0x34)) = (float)fVar1;
  (*(float *)(gen_frame + 0x38)) = (float)fVar1;
  ((float *)(gen_frame + 0x0))[0] = param_1[8];
  ((float *)(gen_frame + 0x0))[1] = 0.0;
  ((float *)(gen_frame + 0x0))[2] = 0.0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(float *)(gen_frame + 0x14)) = param_1[9];
  (*(float *)(gen_frame + 0x28)) = param_1[10];
  F_004efe70(((float *)(gen_frame + 0x0)),(uint)(param_1 + 4));
  (*(float *)(gen_frame + 0x30)) = (float)((float10)*param_1 + (float10)(*(float *)(gen_frame + 0x30)));
  (*(float *)(gen_frame + 0x34)) = (float)((float10)param_1[1] + (float10)(*(float *)(gen_frame + 0x34)));
  (*(float *)(gen_frame + 0x38)) = (float)((float10)param_1[2] + (float10)(*(float *)(gen_frame + 0x38)));
  pfVar4 = ((float *)(gen_frame + 0x0));
  pfVar5 = (float *)((int)this + 0x10);
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar5 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pfVar5 = pfVar5 + 1;
  }
  uVar2 = F_004f45d0((int)this + 0x50,(float *)((int)this + 0x10));
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50));
  return uVar2;
}

/* ref: FUN_00b843f0 */
unsigned int F_00b843f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb843f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  uVar4 = 0;
  piVar2 = (int *)((int)this + 0xa0);
  do {
    piVar1 = (int *)*piVar2;
    piVar3 = (int *)piVar2[-1];
    if (piVar3 != piVar1) {
      do {
        if ((int *)*piVar3 == param_1) break;
        piVar3 = piVar3 + 1;
      } while (piVar3 != piVar1);
      if (piVar3 != piVar1) {
        ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
        ((code *)*(gen_code32 *)*param_1)(param_1,1);
        piVar2 = (int *)((int)this + uVar4 * 0x10 + 0x9c);
        *piVar3 = *((int *)GEN_TOP((*(int *)((int)this + uVar4 * 0x10 + 0x9c) + -4 +
                          (*(int *)((int)this + uVar4 * 0x10 + 0xa0) -
                           *(int *)((int)this + uVar4 * 0x10 + 0x9c) >> 2) * 4)));
        if (*piVar2 == piVar2[1]) {
          return 0;
        }
        piVar2[1] = piVar2[1] + -4;
        return 0;
      }
    }
    uVar4 = uVar4 + 1;
    piVar2 = piVar2 + 4;
    if (4 < uVar4) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_00b844a0 */
unsigned int F_00b844a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb844a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  uint uVar6;
  int local_c;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  piVar3 = (int *)((int)this + 0x9c);
  local_c = 5;
  do {
    uVar6 = piVar3[1] - *piVar3 >> 2;
    if (uVar6 != 0) {
      iVar1 = *piVar3;
      uVar4 = 0;
      do {
        F_00bbe500(*(undefined * PTR32 *)(iVar1 + uVar4 * 4),param_1);
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar6);
    }
    piVar3 = piVar3 + 4;
    local_c = local_c + -1;
  } while (local_c != 0);
  uVar6 = 0;
  piVar3 = (int *)((int)this + 0xf0);
  do {
    piVar2 = (int *)*piVar3;
    piVar5 = (int *)piVar3[-1];
    if (piVar5 != piVar2) {
      do {
        if ((int *)*piVar5 == param_1) break;
        piVar5 = piVar5 + 1;
      } while (piVar5 != piVar2);
      if (piVar5 != piVar2) {
        ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1);
        ((code *)*(gen_code32 *)*param_1)(param_1,1);
        piVar3 = (int *)((int)this + uVar6 * 0x10 + 0xec);
        *piVar5 = *((int *)GEN_TOP((*(int *)((int)this + uVar6 * 0x10 + 0xec) + -4 +
                          (*(int *)((int)this + uVar6 * 0x10 + 0xf0) -
                           *(int *)((int)this + uVar6 * 0x10 + 0xec) >> 2) * 4)));
        if (*piVar3 == piVar3[1]) {
          return 0;
        }
        piVar3[1] = piVar3[1] + -4;
        return 0;
      }
    }
    uVar6 = uVar6 + 1;
    piVar3 = piVar3 + 4;
    if (4 < uVar6) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_00b845a0 */
uint F_00b845a0(unsigned int gen_a0)
{
  GEN_ENTER(0xb845a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  ulonglong uVar5;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10f6318));
  iVar3 = 4;
  puVar4 = (undefined4 *)((int)this + 0x13c);
  do {
    iVar1 = puVar4[-4];
    if (iVar1 != 0) {
      F_00429760(iVar1,(puVar4[-2] - iVar1 >> 2) * 4,0xd5);
    }
    iVar3 = iVar3 + -1;
    puVar4[-4] = 0;
    puVar4[-3] = 0;
    puVar4[-2] = 0;
    puVar4 = puVar4 + -4;
  } while (-1 < iVar3);
  iVar3 = 4;
  puVar4 = (undefined4 *)((int)this + 0xec);
  do {
    iVar1 = puVar4[-4];
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar5 = F_00429760(iVar1,(puVar4[-2] - iVar1 >> 2) * 4,0xd5);
      uVar2 = (uint)uVar5;
    }
    iVar3 = iVar3 + -1;
    puVar4[-4] = 0;
    puVar4[-3] = 0;
    puVar4[-2] = 0;
    puVar4 = puVar4 + -4;
  } while (-1 < iVar3);
  return uVar2;
}

/* ref: FUN_00b84640 */
uint F_00b84640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb84640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int iVar2;
  int * piVar3;
  undefined4 * puVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_1 < &REFG(undefined, 0x5)) {
    piVar1 = (int *)((int)this + (int)((int)(uintptr_t)param_1) * 0x10 + 0x9c);
    uVar5 = piVar1[1] - *piVar1 >> 2;
    param_1 = piVar1;
    if (uVar5 != 0) {
      iVar2 = *piVar1;
      uVar6 = 0;
      do {
        piVar3 = *(int * PTR32 *)(iVar2 + uVar6 * 4);
        param_1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3)));
        puVar4 = *(undefined4 * PTR32 *)(iVar2 + uVar6 * 4);
        if (puVar4 != (undefined4 *)0x0) {
          param_1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)*puVar4)(puVar4,1)));
          *(undefined4 *)(iVar2 + uVar6 * 4) = 0;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar5);
      iVar2 = *piVar1;
      if (iVar2 != piVar1[1]) {
        param_1 = (int *)F_00c46e20(iVar2,piVar1[1],0);
        piVar1[1] = iVar2;
      }
    }
  }
  return (uint)param_1;
}

/* ref: FUN_00b846d0 */
uint F_00b846d0(unsigned int gen_a0)
{
  GEN_ENTER(0xb846d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  undefined4 * puVar3;
  uint uVar4;
  uint uVar5;
  int * piVar6;
  uint uVar7;
  int local_8;
  
  piVar6 = (int *)((int)this + 0xa0);
  local_8 = 5;
  do {
    uVar4 = *piVar6 - piVar6[-1] >> 2;
    uVar5 = 0;
    if (uVar4 != 0) {
      iVar1 = piVar6[-1];
      uVar7 = 0;
      do {
        piVar2 = *(int * PTR32 *)(iVar1 + uVar7 * 4);
        uVar5 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
        puVar3 = *(undefined4 * PTR32 *)(iVar1 + uVar7 * 4);
        if (puVar3 != (undefined4 *)0x0) {
          uVar5 = ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
          *(undefined4 *)(iVar1 + uVar7 * 4) = 0;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar4);
      iVar1 = piVar6[-1];
      if (iVar1 != *piVar6) {
        uVar5 = F_00c46e20(iVar1,*piVar6,0);
        *piVar6 = iVar1;
      }
    }
    piVar6 = piVar6 + 4;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return uVar5;
}

/* ref: FUN_00b84760 */
uint F_00b84760(unsigned int gen_a0)
{
  GEN_ENTER(0xb84760u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  int * piVar4;
  int * piVar5;
  uint uVar6;
  uint uVar7;
  int local_14;
  int local_c;
  
  piVar4 = (int *)((int)this + 0xf0);
  local_14 = 5;
  do {
    uVar3 = *piVar4 - piVar4[-1] >> 2;
    if (uVar3 != 0) {
      piVar5 = (int *)((int)this + 0x9c);
      local_c = 5;
      do {
        uVar7 = piVar5[1] - *piVar5 >> 2;
        if (uVar7 != 0) {
          iVar1 = *piVar5;
          uVar6 = 0;
          do {
            F_00bbeae0(*(undefined * PTR32 *)(iVar1 + uVar6 * 4));
            uVar6 = uVar6 + 1;
          } while (uVar6 < uVar7);
        }
        piVar5 = piVar5 + 4;
        local_c = local_c + -1;
      } while (local_c != 0);
      iVar1 = piVar4[-1];
      uVar6 = 0;
      uVar7 = uVar3;
      if (uVar3 != 0) {
        do {
          piVar5 = *(int * PTR32 *)(iVar1 + uVar6 * 4);
          uVar7 = ((code *)*(gen_code32 *)(*piVar5 + 0x10))(piVar5);
          puVar2 = *(undefined4 * PTR32 *)(iVar1 + uVar6 * 4);
          if (puVar2 != (undefined4 *)0x0) {
            uVar7 = ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
            *(undefined4 *)(iVar1 + uVar6 * 4) = 0;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar3);
      }
      uVar3 = uVar7;
      iVar1 = piVar4[-1];
      if (iVar1 != *piVar4) {
        uVar3 = F_00c46e20(iVar1,*piVar4,0);
        *piVar4 = iVar1;
      }
    }
    piVar4 = piVar4 + 4;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  return uVar3;
}

/* ref: FUN_00b84860 */
uint F_00b84860(unsigned int gen_a0)
{
  GEN_ENTER(0xb84860u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10f6318));
  in_ecx[0x26] = 0;
  in_ecx[0x24] = GEN_FLT_TO(in_ecx[0x24], REFG(float, 0x1087f04));
  in_ecx[0x27] = 0;
  in_ecx[0x28] = 0;
  in_ecx[0x29] = 0;
  in_ecx[0x2b] = 0;
  in_ecx[0x2c] = 0;
  in_ecx[0x2d] = 0;
  in_ecx[0x2f] = 0;
  in_ecx[0x30] = 0;
  in_ecx[0x31] = 0;
  in_ecx[0x33] = 0;
  in_ecx[0x34] = 0;
  in_ecx[0x35] = 0;
  in_ecx[0x37] = 0;
  in_ecx[0x38] = 0;
  in_ecx[0x39] = 0;
  in_ecx[0x3b] = 0;
  in_ecx[0x3c] = 0;
  in_ecx[0x3d] = 0;
  in_ecx[0x3f] = 0;
  in_ecx[0x40] = 0;
  in_ecx[0x41] = 0;
  in_ecx[0x43] = 0;
  in_ecx[0x44] = 0;
  in_ecx[0x45] = 0;
  in_ecx[0x47] = 0;
  in_ecx[0x48] = 0;
  in_ecx[0x49] = 0;
  in_ecx[0x4b] = 0;
  in_ecx[0x4c] = 0;
  in_ecx[0x4d] = 0;
  in_ecx[0x4f] = 0;
  in_ecx[0x50] = 0;
  in_ecx[0x51] = 0;
  in_ecx[0x52] = 0;
  in_ecx[0x53] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00b84960 */
uint F_00b84960(unsigned int gen_a0)
{
  GEN_ENTER(0xb84960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  int * piVar3;
  
  F_00b846d0(this);
  F_00b84760(this);
  piVar3 = (int *)((int)this + 0x13c);
  iVar2 = 5;
  do {
    uVar1 = 0;
    if (*piVar3 != 0) {
      uVar1 = F_0050c620(*piVar3,0,0);
      *piVar3 = 0;
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  piVar3 = *(int * PTR32 *)((int)this + 0x98);
  if (piVar3 != (int *)0x0) {
    uVar1 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  return uVar1;
}

/* ref: FUN_00b849c0 */
uint F_00b849c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb849c0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  undefined * this_00;
  
  uVar1 = (*(uint *)&gen_args[1]);
  if ((*(uint *)&gen_args[1]) < 5) {
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 8))))
                                (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c),0xd0,0x10)));
    if (this_00 != (undefined *)0x0) {
      (*(uint *)&gen_args[1]) = F_00bbec00(this_00);
      if ((*(uint *)&gen_args[1]) != 0) {
        F_00b87640(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + uVar1 * 0x10 + 0x9c))),&(*(uint *)&gen_args[1]));
      }
      return (*(uint *)&gen_args[1]);
    }
  }
  return 0;
}

/* ref: FUN_00b84a20 */
uint F_00b84a20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb84a20u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  undefined * this_00;
  uint uVar2;
  
  uVar1 = (*(uint *)&gen_args[2]);
  uVar2 = 0;
  if ((*(uint *)&gen_args[2]) < 5) {
    switch((unsigned int)(uintptr_t)((*(undefined4 *)&gen_args[1]))) {
    case 0: ;
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 8))))
                        (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c),0x110,0x10);
      if (uVar2 == 0) {
        return 0;
      }
      (*(uint *)&gen_args[2]) = F_00bf6750(uVar2);
      break;
    case 1: ;
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 8))))
                        (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c),0x150,0x10);
      if (uVar2 == 0) {
        return 0;
      }
      (*(uint *)&gen_args[2]) = F_00bf5250(uVar2);
      break;
    case 2: ;
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 8))))
                        (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c),0x100,0x10);
      if (uVar2 == 0) {
        return 0;
      }
      (*(uint *)&gen_args[2]) = F_00bf36f0(uVar2);
      break;
    case 3: ;
      this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 8))))
                                  (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c),0x110,0x10)));
      if (this_00 == (undefined *)0x0) {
        return 0;
      }
      (*(uint *)&gen_args[2]) = F_00bf3780(this_00);
      break;
    case 4: ;
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 8))))
                        (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c),0xc0,0x10);
      if (uVar2 == 0) {
        return 0;
      }
      (*(uint *)&gen_args[2]) = F_00bf1640(uVar2);
      break;
    default: ;
      goto switchD_00b84a41_default;
    }
    uVar2 = (*(uint *)&gen_args[2]);
    if ((*(uint *)&gen_args[2]) != 0) {
      F_00b876b0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + uVar1 * 0x10 + 0xec))),&(*(uint *)&gen_args[2]));
      uVar2 = (*(uint *)&gen_args[2]);
    }
  }
switchD_00b84a41_default: ;
  return uVar2;
}

/* ref: FUN_00b84b40 */
unsigned int F_00b84b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb84b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int * piVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int * piVar12;
  uint local_14;
  uint local_10;
  int * local_c;
  
  if (param_1 < 5) {
    iVar6 = param_1 * 0x10;
    uVar9 = *(int *)(iVar6 + 0xf0 + (int)this) - *(int *)(iVar6 + 0xec + (int)this) >> 2;
    if (uVar9 != 0) {
      local_c = *(int * PTR32 *)((int)this + iVar6 + 0xec);
      uVar11 = *(int *)((int)this + iVar6 + 0xa0) - *(int *)((int)this + iVar6 + 0x9c) >> 2;
      if (uVar11 != 0) {
        iVar7 = *(int *)((int)this + iVar6 + 0x9c);
        uVar10 = 0;
        do {
          F_00bbeae0(*(undefined * PTR32 *)(iVar7 + uVar10 * 4));
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar11);
      }
      local_14 = 0;
      if (uVar9 != 0) {
        do {
          bVar4 = true;
          local_10 = 0;
          piVar12 = (int *)((int)this + 0xf0);
          do {
            if (4 < local_10) {
              if (bVar4) {
                ((code *)*(gen_code32 *)(*(int *)*local_c + 0x10))((int *)*local_c);
                puVar2 = (undefined4 *)*local_c;
                if (puVar2 != (undefined4 *)0x0) {
                  ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
                  *local_c = 0;
                }
              }
              break;
            }
            if ((local_10 != param_1) &&
               (uVar11 = piVar12[-0x14] - piVar12[-0x15] >> 2, uVar11 != 0)) {
              iVar7 = piVar12[-0x15];
              uVar10 = 0;
              do {
                bVar5 = F_00bbd8e0(*(undefined * PTR32 *)(iVar7 + uVar10 * 4),*local_c);
                if (bVar5 != 0) {
                  piVar8 = (int *)*piVar12;
                  if ((local_c < piVar8) && (piVar1 = (int *)piVar12[-1], piVar1 <= local_c)) {
                    if (piVar8 == (int *)piVar12[1]) {
                      iVar7 = (int)piVar8 - (int)((int)(uintptr_t)piVar1) >> 2;
                      if (iVar7 == -1) {
LAB_00b84d7e: ;
                    
                        F_00c4579a("vector<T> too long");
                      }
                      uVar10 = iVar7 + 1;
                      uVar11 = piVar12[1] - (int)((int)(uintptr_t)piVar1) >> 2;
                      if (uVar11 < uVar10) {
                        if (-(uVar11 >> 1) - 1 < uVar11) {
                          uVar11 = 0;
                        }
                        else {
                          uVar11 = uVar11 + (uVar11 >> 1);
                        }
                        if (uVar11 < uVar10) {
                          uVar11 = uVar10;
                        }
                        F_00b87160(piVar12 + -1,uVar11);
                      }
                    }
                    piVar8 = (int *)*piVar12;
                    if (piVar8 != (int *)0x0) {
                      iVar7 = *((int *)GEN_TOP((piVar12[-1] + ((int)local_c - (int)((int)(uintptr_t)piVar1) >> 2) * 4)));
LAB_00b84ce6: ;
                      *piVar8 = iVar7;
                    }
                  }
                  else {
                    if (piVar8 == (int *)piVar12[1]) {
                      iVar7 = (int)piVar8 - piVar12[-1] >> 2;
                      if (iVar7 == -1) goto LAB_00b84d7e;
                      uVar10 = iVar7 + 1;
                      uVar11 = piVar12[1] - piVar12[-1] >> 2;
                      if (uVar11 < uVar10) {
                        if (-(uVar11 >> 1) - 1 < uVar11) {
                          uVar11 = 0;
                        }
                        else {
                          uVar11 = uVar11 + (uVar11 >> 1);
                        }
                        if (uVar11 < uVar10) {
                          uVar11 = uVar10;
                        }
                        F_00b87160(piVar12 + -1,uVar11);
                      }
                    }
                    piVar8 = (int *)*piVar12;
                    if (piVar8 != (int *)0x0) {
                      iVar7 = *local_c;
                      goto LAB_00b84ce6;
                    }
                  }
                  *piVar12 = *piVar12 + 4;
                  bVar4 = false;
                  break;
                }
                uVar10 = uVar10 + 1;
              } while (uVar10 < uVar11);
            }
            local_10 = local_10 + 1;
            piVar12 = piVar12 + 4;
          } while (bVar4);
          local_c = local_c + 1;
          local_14 = local_14 + 1;
        } while (local_14 < uVar9);
      }
      iVar7 = *(int *)((int)this + iVar6 + 0xf0);
      iVar3 = *(int *)((int)this + iVar6 + 0xec);
      if (iVar3 != iVar7) {
        F_00c46e20(iVar3,iVar7,0);
        *(int *)((int)this + iVar6 + 0xf0) = iVar3;
      }
    }
  }
  return 0;
}

/* ref: FUN_00b84d90 */
uint F_00b84d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb84d90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  uint in_EAX = 0;
  
  if (param_1 < 5) {
    F_00b84640(this,param_1);
    F_00b84b40(this,param_1);
    iVar1 = *(int *)((int)this + param_1 * 4 + 0x13c);
    in_EAX = 0;
    if (iVar1 != 0) {
      in_EAX = F_0050c620(iVar1,0,0);
      *(undefined4 *)((int)this + param_1 * 4 + 0x13c) = 0;
    }
  }
  return in_EAX;
}

/* ref: FUN_00b84de0 */
uint F_00b84de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb84de0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xf0];
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  uint * PTR32 * ppuVar4;
  byte * pbVar5;
  uint uVar6;
  undefined * pvVar7;
  undefined * PTR32 * ppvVar8;
  uint * puVar9;
  uint3 extraout_var = 0;
  undefined * PTR32 * ppvVar10;
  ushort * puVar11;
  int iVar12;
  byte * pbVar13;
  int iVar14;
  uint uVar15;
  
  (*(uint *)(gen_frame + 0xdc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xe0);
  uVar6 = *(uint *)((int)this + param_2 * 4 + 0x13c);
  (*(undefined * PTR32 *)(gen_frame + 0x68)) = this;
  (*(uint *)(gen_frame + 0x70)) = param_1;
  (*(uint *)(gen_frame + 0x6c)) = param_2;
  if (uVar6 != param_1) {
    if ((uVar6 != 0) && (param_2 < 5)) {
      F_00b84640(this,param_2);
      F_00b84b40(this,param_2);
      iVar14 = *(int *)((int)this + param_2 * 4 + 0x13c);
      if (iVar14 != 0) {
        F_0050c620(iVar14,0,0);
        *(undefined4 *)((int)this + param_2 * 4 + 0x13c) = 0;
      }
    }
    *(uint *)((int)this + param_2 * 4 + 0x13c) = (*(uint *)(gen_frame + 0x70));
    F_00513f60((*(uint *)(gen_frame + 0x70)),0,0);
    (*(byte *)(gen_frame + 0x5d)) = *(byte *)((*(uint *)(gen_frame + 0x70)) + 0xb8);
    pvVar7 = *(undefined * PTR32 *)((int)this + 0x98);
    (*(undefined * PTR32 *)(gen_frame + 0x60)) = pvVar7;
    if ((*(byte *)(gen_frame + 0x5d)) != 0) {
      (*(byte * PTR32 *)(gen_frame + 0x7c)) = (byte *)0x0;
      ((undefined * PTR32 *)(gen_frame + 0x74))[1] = (undefined *)(uint)(*(byte *)(gen_frame + 0x5d));
      do {
        pbVar13 = (*(byte * PTR32 *)(gen_frame + 0x7c)) + *(int *)((*(uint *)(gen_frame + 0x70)) + 0xc0);
        uVar6 = F_00623160(pvVar7,pbVar13 + 0x20);
        ((undefined * PTR32 *)(gen_frame + 0x74))[0] = (undefined *)(uVar6 & 0xffff);
        uVar6 = F_00623160(pvVar7,pbVar13 + 0x40);
        (*(uint * PTR32 *)(gen_frame + 0x88)) = (uint *)(uVar6 & 0xffff);
        if (((short)((undefined * PTR32 *)(gen_frame + 0x74))[0] != -1) && ((short)uVar6 != -1)) {
          if ((*(uint *)(gen_frame + 0x6c)) < 5) {
            uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 8))))
                              (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c),0x110,0x10);
            if (uVar6 == 0) {
              uVar6 = 0;
            }
            else {
              (*(uint *)(gen_frame + 0x80)) = F_00bf6750(uVar6);
              uVar6 = (*(uint *)(gen_frame + 0x80));
              if ((*(uint *)(gen_frame + 0x80)) != 0) {
                F_00b876b0((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x68)) + (*(uint *)(gen_frame + 0x6c)) * 0x10 + 0xec),&(*(uint *)(gen_frame + 0x80)));
                uVar6 = (*(uint *)(gen_frame + 0x80));
              }
            }
          }
          else {
            uVar6 = 0;
          }
          (*(undefined4 *)(gen_frame + 0x30)) = *(undefined4 *)(pbVar13 + 0x60);
          (*(undefined4 *)(gen_frame + 0x34)) = *(undefined4 *)(pbVar13 + 100);
          (*(undefined4 *)(gen_frame + 0x38)) = *(undefined4 *)(pbVar13 + 0x68);
          (*(undefined4 *)(gen_frame + 0x40)) = *(undefined4 *)(pbVar13 + 0x6c);
          (*(undefined4 *)(gen_frame + 0x44)) = *(undefined4 *)(pbVar13 + 0x70);
          (*(float *)(gen_frame + 0x48)) = *(float *)(pbVar13 + 0x74);
          F_00bf68b0(uVar6,pvVar7,pbVar13,((undefined * PTR32 *)(gen_frame + 0x74))[0],(*(uint * PTR32 *)(gen_frame + 0x88)),&(*(undefined4 *)(gen_frame + 0x30)),&(*(undefined4 *)(gen_frame + 0x40)),
                       *(float *)(pbVar13 + 0x78));
        }
        (*(byte * PTR32 *)(gen_frame + 0x7c)) = (*(byte * PTR32 *)(gen_frame + 0x7c)) + 0x7c;
        ((undefined * PTR32 *)(gen_frame + 0x74))[1] = (undefined *)((int)((undefined * PTR32 *)(gen_frame + 0x74))[1] - 1);
      } while (((undefined * PTR32 *)(gen_frame + 0x74))[1] != (undefined *)0x0);
    }
    (*(byte *)(gen_frame + 0x5f)) = *(byte *)((*(uint *)(gen_frame + 0x70)) + 0xb9);
    if ((*(byte *)(gen_frame + 0x5f)) != 0) {
      (*(byte * PTR32 *)(gen_frame + 0x7c)) = (byte *)0x0;
      ((undefined * PTR32 *)(gen_frame + 0x74))[1] = (undefined *)(uint)(*(byte *)(gen_frame + 0x5f));
      do {
        pbVar13 = (*(byte * PTR32 *)(gen_frame + 0x7c)) + *(int *)((*(uint *)(gen_frame + 0x70)) + 0xc4);
        uVar6 = F_00623160(pvVar7,pbVar13 + 0x20);
        (*(uint *)(gen_frame + 0x80)) = uVar6 & 0xffff;
        if ((short)uVar6 != -1) {
          if ((*(uint *)(gen_frame + 0x6c)) < 5) {
            uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 8))))
                              (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c),0x150,0x10);
            if (uVar6 == 0) {
              (*(uint * PTR32 *)(gen_frame + 0x88)) = (uint *)0x0;
              puVar9 = (*(uint * PTR32 *)(gen_frame + 0x88));
              pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x60));
            }
            else {
              (*(uint * PTR32 *)(gen_frame + 0x88)) = (uint *)F_00bf5250(uVar6);
              puVar9 = (*(uint * PTR32 *)(gen_frame + 0x88));
              pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x60));
              if ((*(uint * PTR32 *)(gen_frame + 0x88)) != (uint *)0x0) {
                puVar9 = (uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x68)) + (*(uint *)(gen_frame + 0x6c)) * 0x10 + 0xec);
                ppuVar4 = (uint * PTR32 *)puVar9[1];
                if ((&(*(uint * PTR32 *)(gen_frame + 0x88)) < ppuVar4) && ((uint * PTR32 *)*puVar9 <= &(*(uint * PTR32 *)(gen_frame + 0x88)))) {
                  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84)) = (undefined * PTR32 *)((int)&(*(uint * PTR32 *)(gen_frame + 0x88)) - (int)*puVar9 >> 2);
                  if (ppuVar4 == (uint * PTR32 *)puVar9[2]) {
                    F_00b87480(puVar9,1);
                  }
                  if ((undefined4 *)puVar9[1] != (undefined4 *)0x0) {
                    *(undefined4 *)puVar9[1] = *(undefined4 *)(*puVar9 + (int)((int)(uintptr_t)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84))) * 4);
                  }
                }
                else {
                  if (ppuVar4 == (uint * PTR32 *)puVar9[2]) {
                    F_00b87480(puVar9,1);
                  }
                  if ((undefined4 *)puVar9[1] != (undefined4 *)0x0) {
                    *(undefined4 *)puVar9[1] = (*(uint * PTR32 *)(gen_frame + 0x88));
                  }
                }
                puVar9[1] = puVar9[1] + 4;
                puVar9 = (*(uint * PTR32 *)(gen_frame + 0x88));
                pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x60));
              }
            }
          }
          else {
            puVar9 = (uint *)0x0;
          }
          (*(undefined4 *)(gen_frame + 0x90)) = *(undefined4 *)(pbVar13 + 0x40);
          (*(undefined4 *)(gen_frame + 0x94)) = *(undefined4 *)(pbVar13 + 0x44);
          (*(undefined4 *)(gen_frame + 0x98)) = *(undefined4 *)(pbVar13 + 0x48);
          (*(undefined4 *)(gen_frame + 0xa0)) = *(undefined4 *)(pbVar13 + 0x4c);
          (*(undefined4 *)(gen_frame + 0xa4)) = *(undefined4 *)(pbVar13 + 0x50);
          (*(undefined4 *)(gen_frame + 0xa8)) = *(undefined4 *)(pbVar13 + 0x54);
          (*(undefined4 *)(gen_frame + 0xb0)) = *(undefined4 *)(pbVar13 + 0x58);
          (*(undefined4 *)(gen_frame + 0xb4)) = *(undefined4 *)(pbVar13 + 0x5c);
          (*(undefined4 *)(gen_frame + 0xb8)) = *(undefined4 *)(pbVar13 + 0x60);
          (*(undefined4 *)(gen_frame + 0xc0)) = *(undefined4 *)(pbVar13 + 100);
          (*(undefined4 *)(gen_frame + 0xc4)) = *(undefined4 *)(pbVar13 + 0x68);
          (*(undefined4 *)(gen_frame + 0xc8)) = *(undefined4 *)(pbVar13 + 0x6c);
          F_00bf51e0(puVar9,pvVar7,pbVar13,(*(uint *)(gen_frame + 0x80)),&(*(undefined4 *)(gen_frame + 0x90)),*(float *)(pbVar13 + 0x70));
        }
        (*(byte * PTR32 *)(gen_frame + 0x7c)) = (*(byte * PTR32 *)(gen_frame + 0x7c)) + 0x74;
        ((undefined * PTR32 *)(gen_frame + 0x74))[1] = (undefined *)((int)((undefined * PTR32 *)(gen_frame + 0x74))[1] - 1);
      } while (((undefined * PTR32 *)(gen_frame + 0x74))[1] != (undefined *)0x0);
    }
    (*(byte *)(gen_frame + 0x64)) = *(byte *)((*(uint *)(gen_frame + 0x70)) + 0xba);
    (*(byte *)(gen_frame + 0x8f)) = 0;
    pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x60));
    if (*(byte *)((*(uint *)(gen_frame + 0x70)) + 0xba) != 0) {
      do {
        iVar14 = (uint)(*(byte *)(gen_frame + 0x8f)) * 0x5c + *(int *)((*(uint *)(gen_frame + 0x70)) + 200);
        uVar6 = F_00623160(pvVar7,iVar14 + 0x20);
        (*(uint *)(gen_frame + 0x80)) = uVar6 & 0xffff;
        if ((short)uVar6 != -1) {
          if ((*(uint *)(gen_frame + 0x6c)) < 5) {
            uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 8))))
                              (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c),0x100,0x10);
            if (uVar6 == 0) {
              (*(uint * PTR32 *)(gen_frame + 0x88)) = (uint *)0x0;
              puVar9 = (*(uint * PTR32 *)(gen_frame + 0x88));
              pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x60));
            }
            else {
              (*(uint * PTR32 *)(gen_frame + 0x88)) = (uint *)F_00bf36f0(uVar6);
              puVar9 = (*(uint * PTR32 *)(gen_frame + 0x88));
              pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x60));
              if ((*(uint * PTR32 *)(gen_frame + 0x88)) != (uint *)0x0) {
                puVar9 = (uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x68)) + (*(uint *)(gen_frame + 0x6c)) * 0x10 + 0xec);
                ppuVar4 = (uint * PTR32 *)puVar9[1];
                if ((&(*(uint * PTR32 *)(gen_frame + 0x88)) < ppuVar4) && ((uint * PTR32 *)*puVar9 <= &(*(uint * PTR32 *)(gen_frame + 0x88)))) {
                  ((undefined * PTR32 *)(gen_frame + 0x74))[1] = (undefined *)((int)&(*(uint * PTR32 *)(gen_frame + 0x88)) - (int)*puVar9 >> 2);
                  if (ppuVar4 == (uint * PTR32 *)puVar9[2]) {
                    iVar12 = (int)((int)ppuVar4 - *puVar9) >> 2;
                    if (iVar12 == -1) goto LAB_00b853e3;
                    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84)) = (undefined * PTR32 *)(iVar12 + 1);
                    ppvVar10 = ((undefined * PTR32 *)GEN_TOP(((int)((int)puVar9[2] - *puVar9) >> 2)));
                    if (ppvVar10 < (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84))) {
                      if (((undefined * PTR32 *)GEN_TOP((-((uint)((int)(uintptr_t)ppvVar10) >> 1) - 1))) < ppvVar10) {
                        ppvVar10 = (undefined * PTR32 *)0x0;
                      }
                      else {
                        ppvVar10 = ((undefined * PTR32 *)GEN_TOP(((int)ppvVar10 + ((uint)((int)(uintptr_t)ppvVar10) >> 1))));
                      }
                      if (ppvVar10 < (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84))) {
                        ppvVar10 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84));
                      }
                      F_00b87160(puVar9,ppvVar10);
                    }
                  }
                  if ((undefined4 *)puVar9[1] != (undefined4 *)0x0) {
                    *(undefined4 *)puVar9[1] = *(undefined4 *)(*puVar9 + (int)((undefined * PTR32 *)(gen_frame + 0x74))[1] * 4);
                  }
                }
                else {
                  if (ppuVar4 == (uint * PTR32 *)puVar9[2]) {
                    iVar12 = (int)((int)ppuVar4 - *puVar9) >> 2;
                    if (iVar12 == -1) goto LAB_00b853e3;
                    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84)) = (undefined * PTR32 *)(iVar12 + 1);
                    ppvVar10 = ((undefined * PTR32 *)GEN_TOP(((int)((int)puVar9[2] - *puVar9) >> 2)));
                    if (ppvVar10 < (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84))) {
                      if (((undefined * PTR32 *)GEN_TOP((-((uint)((int)(uintptr_t)ppvVar10) >> 1) - 1))) < ppvVar10) {
                        ppvVar10 = (undefined * PTR32 *)0x0;
                      }
                      else {
                        ppvVar10 = ((undefined * PTR32 *)GEN_TOP(((int)ppvVar10 + ((uint)((int)(uintptr_t)ppvVar10) >> 1))));
                      }
                      if (ppvVar10 < (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84))) {
                        ppvVar10 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84));
                      }
                      F_00b87160(puVar9,ppvVar10);
                    }
                  }
                  if ((undefined4 *)puVar9[1] != (undefined4 *)0x0) {
                    *(undefined4 *)puVar9[1] = (*(uint * PTR32 *)(gen_frame + 0x88));
                  }
                }
                puVar9[1] = puVar9[1] + 4;
                puVar9 = (*(uint * PTR32 *)(gen_frame + 0x88));
                pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x60));
              }
            }
          }
          else {
            puVar9 = (uint *)0x0;
          }
          (*(undefined4 *)(gen_frame + 0x40)) = *(undefined4 *)(iVar14 + 0x40);
          (*(undefined4 *)(gen_frame + 0x44)) = *(undefined4 *)(iVar14 + 0x44);
          (*(float *)(gen_frame + 0x48)) = *(float *)(iVar14 + 0x48);
          (*(undefined4 *)(gen_frame + 0x30)) = *(undefined4 *)(iVar14 + 0x4c);
          (*(undefined4 *)(gen_frame + 0x34)) = *(undefined4 *)(iVar14 + 0x50);
          (*(undefined4 *)(gen_frame + 0x38)) = *(undefined4 *)(iVar14 + 0x54);
          F_00bf3840(puVar9,pvVar7,iVar14,(*(uint *)(gen_frame + 0x80)),&(*(undefined4 *)(gen_frame + 0x40)),&(*(undefined4 *)(gen_frame + 0x30)),*(float *)(iVar14 + 0x58));
        }
        (*(byte *)(gen_frame + 0x8f)) = (*(byte *)(gen_frame + 0x8f)) + 1;
      } while ((*(byte *)(gen_frame + 0x8f)) < (*(byte *)(gen_frame + 0x64)));
    }
    (*(byte *)(gen_frame + 0x67)) = *(byte *)((*(uint *)(gen_frame + 0x70)) + 0xbb);
    (*(byte *)(gen_frame + 0x8f)) = 0;
    pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x60));
    if (*(byte *)((*(uint *)(gen_frame + 0x70)) + 0xbb) != 0) {
      do {
        iVar14 = (uint)(*(byte *)(gen_frame + 0x8f)) * 0xa8 + *(int *)((*(uint *)(gen_frame + 0x70)) + 0xcc);
        uVar6 = F_00623160(pvVar7,iVar14 + 0x20);
        (*(byte * PTR32 *)(gen_frame + 0x7c)) = (byte *)(uVar6 & 0xffff);
        uVar6 = F_00623160(pvVar7,iVar14 + 0x40);
        (*(uint *)(gen_frame + 0x80)) = uVar6 & 0xffff;
        uVar6 = F_00623160(pvVar7,iVar14 + 0x60);
        ((undefined * PTR32 *)(gen_frame + 0x74))[0] = (undefined *)(uVar6 & 0xffff);
        if ((((short)(*(byte * PTR32 *)(gen_frame + 0x7c)) != -1) && ((short)(*(uint *)(gen_frame + 0x80)) != -1)) && ((short)uVar6 != -1)) {
          if ((*(uint *)(gen_frame + 0x6c)) < 5) {
            pvVar7 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 8))))
                                       (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c),0x110,0x10)));
            if (pvVar7 == (undefined *)0x0) {
              (*(uint * PTR32 *)(gen_frame + 0x88)) = (uint *)0x0;
              puVar9 = (*(uint * PTR32 *)(gen_frame + 0x88));
              pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x60));
            }
            else {
              (*(uint * PTR32 *)(gen_frame + 0x88)) = (uint *)F_00bf3780(pvVar7);
              puVar9 = (*(uint * PTR32 *)(gen_frame + 0x88));
              pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x60));
              if ((*(uint * PTR32 *)(gen_frame + 0x88)) != (uint *)0x0) {
                puVar9 = (uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x68)) + (*(uint *)(gen_frame + 0x6c)) * 0x10 + 0xec);
                ppuVar4 = (uint * PTR32 *)puVar9[1];
                if ((&(*(uint * PTR32 *)(gen_frame + 0x88)) < ppuVar4) && ((uint * PTR32 *)*puVar9 <= &(*(uint * PTR32 *)(gen_frame + 0x88)))) {
                  ((undefined * PTR32 *)(gen_frame + 0x74))[1] = (undefined *)((int)&(*(uint * PTR32 *)(gen_frame + 0x88)) - (int)*puVar9 >> 2);
                  if (ppuVar4 == (uint * PTR32 *)puVar9[2]) {
                    iVar12 = (int)((int)ppuVar4 - *puVar9) >> 2;
                    if (iVar12 == -1) goto LAB_00b853e3;
                    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84)) = (undefined * PTR32 *)(iVar12 + 1);
                    ppvVar10 = ((undefined * PTR32 *)GEN_TOP(((int)((int)puVar9[2] - *puVar9) >> 2)));
                    if (ppvVar10 < (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84))) {
                      if (((undefined * PTR32 *)GEN_TOP((-((uint)((int)(uintptr_t)ppvVar10) >> 1) - 1))) < ppvVar10) {
                        ppvVar10 = (undefined * PTR32 *)0x0;
                      }
                      else {
                        ppvVar10 = ((undefined * PTR32 *)GEN_TOP(((int)ppvVar10 + ((uint)((int)(uintptr_t)ppvVar10) >> 1))));
                      }
                      if (ppvVar10 < (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84))) {
                        ppvVar10 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84));
                      }
                      F_00b87160(puVar9,ppvVar10);
                    }
                  }
                  if ((undefined4 *)puVar9[1] != (undefined4 *)0x0) {
                    *(undefined4 *)puVar9[1] = *(undefined4 *)(*puVar9 + (int)((undefined * PTR32 *)(gen_frame + 0x74))[1] * 4);
                  }
                }
                else {
                  if (ppuVar4 == (uint * PTR32 *)puVar9[2]) {
                    iVar12 = (int)((int)ppuVar4 - *puVar9) >> 2;
                    if (iVar12 == -1) goto LAB_00b853e3;
                    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84)) = (undefined * PTR32 *)(iVar12 + 1);
                    ppvVar10 = ((undefined * PTR32 *)GEN_TOP(((int)((int)puVar9[2] - *puVar9) >> 2)));
                    if (ppvVar10 < (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84))) {
                      if (((undefined * PTR32 *)GEN_TOP((-((uint)((int)(uintptr_t)ppvVar10) >> 1) - 1))) < ppvVar10) {
                        ppvVar10 = (undefined * PTR32 *)0x0;
                      }
                      else {
                        ppvVar10 = ((undefined * PTR32 *)GEN_TOP(((int)ppvVar10 + ((uint)((int)(uintptr_t)ppvVar10) >> 1))));
                      }
                      if (ppvVar10 < (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84))) {
                        ppvVar10 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84));
                      }
                      F_00b87160(puVar9,ppvVar10);
                    }
                  }
                  if ((undefined4 *)puVar9[1] != (undefined4 *)0x0) {
                    *(undefined4 *)puVar9[1] = (*(uint * PTR32 *)(gen_frame + 0x88));
                  }
                }
                puVar9[1] = puVar9[1] + 4;
                puVar9 = (*(uint * PTR32 *)(gen_frame + 0x88));
                pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x60));
              }
            }
          }
          else {
            puVar9 = (uint *)0x0;
          }
          (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)(iVar14 + 0x80);
          (*(undefined4 *)(gen_frame + 0x24)) = *(undefined4 *)(iVar14 + 0x84);
          (*(undefined4 *)(gen_frame + 0x28)) = *(undefined4 *)(iVar14 + 0x88);
          (*(undefined4 *)(gen_frame + 0x40)) = *(undefined4 *)(iVar14 + 0x8c);
          (*(undefined4 *)(gen_frame + 0x44)) = *(undefined4 *)(iVar14 + 0x90);
          (*(float *)(gen_frame + 0x48)) = *(float *)(iVar14 + 0x94);
          (*(undefined4 *)(gen_frame + 0x30)) = *(undefined4 *)(iVar14 + 0x98);
          (*(undefined4 *)(gen_frame + 0x34)) = *(undefined4 *)(iVar14 + 0x9c);
          (*(undefined4 *)(gen_frame + 0x38)) = *(undefined4 *)(iVar14 + 0xa0);
          F_00bf38d0(puVar9,pvVar7,iVar14,(*(byte * PTR32 *)(gen_frame + 0x7c)),(*(uint *)(gen_frame + 0x80)),((undefined * PTR32 *)(gen_frame + 0x74))[0],&(*(undefined4 *)(gen_frame + 0x20)),&(*(undefined4 *)(gen_frame + 0x40)),
                       &(*(undefined4 *)(gen_frame + 0x30)),*(float *)(iVar14 + 0xa4));
        }
        (*(byte *)(gen_frame + 0x8f)) = (*(byte *)(gen_frame + 0x8f)) + 1;
      } while ((*(byte *)(gen_frame + 0x8f)) < (*(byte *)(gen_frame + 0x67)));
    }
    (*(byte *)(gen_frame + 0x66)) = *(byte *)((*(uint *)(gen_frame + 0x70)) + 0xbc);
    (*(byte *)(gen_frame + 0x8f)) = 0;
    pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x60));
    if (*(byte *)((*(uint *)(gen_frame + 0x70)) + 0xbc) != 0) {
      do {
        pbVar13 = ((byte *)GEN_TOP(((uint)(*(byte *)(gen_frame + 0x8f)) * 0x50 + *(int *)((*(uint *)(gen_frame + 0x70)) + 0xd0))));
        (*(byte * PTR32 *)(gen_frame + 0x7c)) = pbVar13;
        uVar6 = F_00623160(pvVar7,pbVar13 + 0x20);
        ((undefined * PTR32 *)(gen_frame + 0x74))[1] = (undefined *)(uVar6 & 0xffff);
        if ((short)uVar6 != -1) {
          if ((*(uint *)(gen_frame + 0x6c)) < 5) {
            uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 8))))
                              (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c),0xc0,0x10);
            if (uVar6 == 0) {
              (*(uint * PTR32 *)(gen_frame + 0x88)) = (uint *)0x0;
              puVar9 = (*(uint * PTR32 *)(gen_frame + 0x88));
              pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x60));
            }
            else {
              (*(uint * PTR32 *)(gen_frame + 0x88)) = (uint *)F_00bf1640(uVar6);
              puVar9 = (*(uint * PTR32 *)(gen_frame + 0x88));
              pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x60));
              if ((*(uint * PTR32 *)(gen_frame + 0x88)) != (uint *)0x0) {
                puVar9 = (uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x68)) + (*(uint *)(gen_frame + 0x6c)) * 0x10 + 0xec);
                ppuVar4 = (uint * PTR32 *)puVar9[1];
                if ((&(*(uint * PTR32 *)(gen_frame + 0x88)) < ppuVar4) && ((uint * PTR32 *)*puVar9 <= &(*(uint * PTR32 *)(gen_frame + 0x88)))) {
                  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84)) = (undefined * PTR32 *)((int)&(*(uint * PTR32 *)(gen_frame + 0x88)) - (int)*puVar9 >> 2);
                  if (ppuVar4 == (uint * PTR32 *)puVar9[2]) {
                    iVar14 = (int)((int)ppuVar4 - *puVar9) >> 2;
                    if (iVar14 == -1) goto LAB_00b853e3;
                    uVar15 = iVar14 + 1;
                    uVar6 = (int)((int)puVar9[2] - *puVar9) >> 2;
                    pbVar13 = (*(byte * PTR32 *)(gen_frame + 0x7c));
                    if (uVar6 < uVar15) {
                      if (-(uVar6 >> 1) - 1 < uVar6) {
                        uVar6 = 0;
                      }
                      else {
                        uVar6 = uVar6 + (uVar6 >> 1);
                      }
                      if (uVar6 < uVar15) {
                        uVar6 = uVar15;
                      }
                      F_00b87160(puVar9,uVar6);
                      pbVar13 = (*(byte * PTR32 *)(gen_frame + 0x7c));
                    }
                  }
                  if ((undefined4 *)puVar9[1] != (undefined4 *)0x0) {
                    *(undefined4 *)puVar9[1] = *(undefined4 *)(*puVar9 + (int)((int)(uintptr_t)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84))) * 4);
                  }
                }
                else {
                  if (ppuVar4 == (uint * PTR32 *)puVar9[2]) {
                    iVar14 = (int)((int)ppuVar4 - *puVar9) >> 2;
                    if (iVar14 == -1) goto LAB_00b853e3;
                    uVar15 = iVar14 + 1;
                    uVar6 = (int)((int)puVar9[2] - *puVar9) >> 2;
                    if (uVar6 < uVar15) {
                      if (-(uVar6 >> 1) - 1 < uVar6) {
                        uVar6 = 0;
                      }
                      else {
                        uVar6 = uVar6 + (uVar6 >> 1);
                      }
                      if (uVar6 < uVar15) {
                        uVar6 = uVar15;
                      }
                      F_00b87160(puVar9,uVar6);
                      pbVar13 = (*(byte * PTR32 *)(gen_frame + 0x7c));
                    }
                  }
                  if ((undefined4 *)puVar9[1] != (undefined4 *)0x0) {
                    *(undefined4 *)puVar9[1] = (*(uint * PTR32 *)(gen_frame + 0x88));
                  }
                }
                puVar9[1] = puVar9[1] + 4;
                puVar9 = (*(uint * PTR32 *)(gen_frame + 0x88));
                pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x60));
              }
            }
          }
          else {
            puVar9 = (uint *)0x0;
          }
          (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)(pbVar13 + 0x40);
          (*(undefined4 *)(gen_frame + 0x24)) = *(undefined4 *)(pbVar13 + 0x44);
          (*(undefined4 *)(gen_frame + 0x28)) = *(undefined4 *)(pbVar13 + 0x48);
          F_00bf1710(puVar9,pvVar7,pbVar13,((undefined * PTR32 *)(gen_frame + 0x74))[1],&(*(undefined4 *)(gen_frame + 0x20)),*(float *)(pbVar13 + 0x4c));
        }
        (*(byte *)(gen_frame + 0x8f)) = (*(byte *)(gen_frame + 0x8f)) + 1;
      } while ((*(byte *)(gen_frame + 0x8f)) < (*(byte *)(gen_frame + 0x66)));
    }
    param_1 = (*(uint *)(gen_frame + 0x70)) & 0xffffff00;
    (*(byte *)(gen_frame + 0x5e)) = *(byte *)((*(uint *)(gen_frame + 0x70)) + 0xb0);
    (*(byte *)(gen_frame + 0x65)) = 0;
    if (*(byte *)((*(uint *)(gen_frame + 0x70)) + 0xb0) != 0) {
      do {
        iVar14 = *(int *)((*(uint *)(gen_frame + 0x70)) + 0xb4);
        pbVar13 = ((byte *)GEN_TOP((iVar14 + (param_1 & 0xff) * 0x48)));
        (*(byte * PTR32 *)(gen_frame + 0x7c)) = pbVar13;
        (*(byte *)(gen_frame + 0x5c)) = pbVar13[2];
        if ((*(uint *)(gen_frame + 0x6c)) < 5) {
          pvVar7 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 8))))
                                     (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c),0xd0,0x10)));
          iVar14 = 0;
          if (pvVar7 != (undefined *)0x0) {
            pvVar7 = (undefined *)F_00bbec00(pvVar7);
            ((undefined * PTR32 *)(gen_frame + 0x74))[0] = pvVar7;
            iVar14 = 0;
            if (pvVar7 != (undefined *)0x0) {
              (*(uint * PTR32 *)(gen_frame + 0x88)) = (uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x68)) + (*(uint *)(gen_frame + 0x6c)) * 0x10 + 0x9c);
              ppvVar10 = (undefined * PTR32 *)(*(uint * PTR32 *)(gen_frame + 0x88))[1];
              if (((undefined * PTR32 *)(gen_frame + 0x74)) < ppvVar10) {
                (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84)) = (undefined * PTR32 *)*(*(uint * PTR32 *)(gen_frame + 0x88));
                if (((undefined * PTR32 *)(gen_frame + 0x74)) < (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84))) goto LAB_00b858ab;
                ((undefined * PTR32 *)(gen_frame + 0x74))[1] = (undefined *)((int)((undefined * PTR32 *)(gen_frame + 0x74)) - (int)((int)(uintptr_t)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84))) >> 2);
                if (ppvVar10 == (undefined * PTR32 *)(*(uint * PTR32 *)(gen_frame + 0x88))[2]) {
                  iVar14 = (int)ppvVar10 - (int)((int)(uintptr_t)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84))) >> 2;
                  if (iVar14 == -1) goto LAB_00b853e3;
                  ppvVar8 = (undefined * PTR32 *)(iVar14 + 1);
                  ppvVar10 = (undefined * PTR32 *)((int)(*(uint * PTR32 *)(gen_frame + 0x88))[2] - (int)((int)(uintptr_t)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84))) >> 2);
                  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84)) = ppvVar8;
                  if (ppvVar10 < ppvVar8) {
                    if (((undefined * PTR32 *)GEN_TOP((-((uint)((int)(uintptr_t)ppvVar10) >> 1) - 1))) < ppvVar10) {
                      ppvVar10 = (undefined * PTR32 *)0x0;
                    }
                    else {
                      ppvVar10 = ((undefined * PTR32 *)GEN_TOP(((int)ppvVar10 + ((uint)((int)(uintptr_t)ppvVar10) >> 1))));
                    }
                    if (ppvVar10 < ppvVar8) {
                      ppvVar10 = ppvVar8;
                    }
                    F_00b870b0((*(uint * PTR32 *)(gen_frame + 0x88)),ppvVar10);
                  }
                }
                if ((undefined4 *)(*(uint * PTR32 *)(gen_frame + 0x88))[1] != (undefined4 *)0x0) {
                  *(undefined4 *)(*(uint * PTR32 *)(gen_frame + 0x88))[1] = *(undefined4 *)(*(*(uint * PTR32 *)(gen_frame + 0x88)) + (int)((undefined * PTR32 *)(gen_frame + 0x74))[1] * 4);
                }
                (*(uint * PTR32 *)(gen_frame + 0x88))[1] = (*(uint * PTR32 *)(gen_frame + 0x88))[1] + 4;
              }
              else {
LAB_00b858ab: ;
                if (ppvVar10 == (undefined * PTR32 *)(*(uint * PTR32 *)(gen_frame + 0x88))[2]) {
                  iVar14 = (int)((int)ppvVar10 - *(*(uint * PTR32 *)(gen_frame + 0x88))) >> 2;
                  if (iVar14 == -1) {
LAB_00b853e3: ;
                    
                    F_00c4579a("vector<T> too long");
                  }
                  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84)) = (undefined * PTR32 *)(iVar14 + 1);
                  ppvVar10 = ((undefined * PTR32 *)GEN_TOP(((int)((int)(*(uint * PTR32 *)(gen_frame + 0x88))[2] - *(*(uint * PTR32 *)(gen_frame + 0x88))) >> 2)));
                  if (ppvVar10 < (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84))) {
                    if (((undefined * PTR32 *)GEN_TOP((-((uint)((int)(uintptr_t)ppvVar10) >> 1) - 1))) < ppvVar10) {
                      ppvVar10 = (undefined * PTR32 *)0x0;
                    }
                    else {
                      ppvVar10 = ((undefined * PTR32 *)GEN_TOP(((int)ppvVar10 + ((uint)((int)(uintptr_t)ppvVar10) >> 1))));
                    }
                    if (ppvVar10 < (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84))) {
                      ppvVar10 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84));
                    }
                    F_00b870b0((*(uint * PTR32 *)(gen_frame + 0x88)),ppvVar10);
                  }
                }
                if ((undefined4 *)(*(uint * PTR32 *)(gen_frame + 0x88))[1] != (undefined4 *)0x0) {
                  *(undefined4 *)(*(uint * PTR32 *)(gen_frame + 0x88))[1] = pvVar7;
                }
                (*(uint * PTR32 *)(gen_frame + 0x88))[1] = (*(uint * PTR32 *)(gen_frame + 0x88))[1] + 4;
              }
              F_00bbd9a0(pvVar7,(*(undefined * PTR32 *)(gen_frame + 0x60)));
              *(uint *)((int)pvVar7 + 0x10) = (uint)pbVar13[0x25];
              uVar1 = *(undefined4 *)(pbVar13 + 0xc);
              uVar2 = *(undefined4 *)(pbVar13 + 0x10);
              *(undefined4 *)((int)pvVar7 + 0x30) = *(undefined4 *)(pbVar13 + 8);
              *(undefined4 *)((int)pvVar7 + 0x34) = uVar1;
              *(undefined4 *)((int)pvVar7 + 0x38) = uVar2;
              (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)(pbVar13 + 0x14);
              (*(undefined4 *)(gen_frame + 0x24)) = *(undefined4 *)(pbVar13 + 0x18);
              (*(undefined4 *)(gen_frame + 0x28)) = *(undefined4 *)(pbVar13 + 0x1c);
              F_00a05ee0(pvVar7,(uint)&(*(undefined4 *)(gen_frame + 0x20)));
              *(undefined2 *)((int)pvVar7 + 0x6c) = *(undefined2 *)(pbVar13 + 0x20);
              *(undefined2 *)((int)pvVar7 + 0x6e) = *(undefined2 *)(pbVar13 + 0x22);
              *(byte *)((int)pvVar7 + 0xc4) = pbVar13[0x24] & 1;
              *(byte *)((int)pvVar7 + 0xc6) = pbVar13[0x24] >> 1 & 1;
              *(byte *)((int)pvVar7 + 200) = pbVar13[0x24] >> 2 & 1;
              *(byte *)((int)pvVar7 + 199) = pbVar13[0x24] >> 3 & 1;
              *(byte *)((int)pvVar7 + 0xc9) = pbVar13[0x24] >> 4 & 1;
              (*(byte *)(gen_frame + 0x8f)) = *pbVar13;
              if ((*(byte *)(gen_frame + 0x5c)) != 0) {
                (*(uint *)(gen_frame + 0x80)) = 0;
                (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84)) = (undefined * PTR32 *)(uint)(*(byte *)(gen_frame + 0x5c));
                do {
                  puVar11 = ((ushort *)GEN_TOP((*(int *)(pbVar13 + 0x30) + (*(uint *)(gen_frame + 0x80)))));
                  ((undefined * PTR32 *)(gen_frame + 0x74))[1] = (undefined *)F_00b87870((*(undefined * PTR32 *)(gen_frame + 0x68)),((undefined * PTR32 *)(gen_frame + 0x74))[0],puVar11);
                  if (((undefined * PTR32 *)(gen_frame + 0x74))[1] != (undefined *)0x0) {
                    *(undefined4 *)((int)((undefined * PTR32 *)(gen_frame + 0x74))[1] + 0xac) = *(undefined4 *)(puVar11 + 2);
                    *(undefined4 *)((int)((undefined * PTR32 *)(gen_frame + 0x74))[1] + 0xb0) = *(undefined4 *)(puVar11 + 4);
                    *(undefined4 *)((int)((undefined * PTR32 *)(gen_frame + 0x74))[1] + 0xa0) = *(undefined4 *)(puVar11 + 6);
                    *(float *)((int)((undefined * PTR32 *)(gen_frame + 0x74))[1] + 0xa4) =
                         ((float)GEN_TOF(((float10)1 - (float10)*(float *)(puVar11 + 8))));
                    *(undefined4 *)((int)((undefined * PTR32 *)(gen_frame + 0x74))[1] + 0xa8) = *(undefined4 *)(puVar11 + 10);
                    *(char *)((int)((undefined * PTR32 *)(gen_frame + 0x74))[1] + 0xba) = (char)puVar11[0x12];
                    (*(uint * PTR32 *)(gen_frame + 0x88)) = (uint *)(*puVar11 - 1);
                    while (-1 < (int)(*(uint * PTR32 *)(gen_frame + 0x88))) {
                      uVar15 = (uint)(*(uint * PTR32 *)(gen_frame + 0x88)) & 0xffff;
                      (*(int *)(gen_frame + 0x1c)) = *(int *)(puVar11 + 0x14) + uVar15 * 0x24;
                      uVar6 = F_00b83880((*(undefined * PTR32 *)(gen_frame + 0x68)),(*(int *)(gen_frame + 0x1c)));
                      if (uVar6 == 0) {
                        F_00bf97a0(((undefined * PTR32 *)(gen_frame + 0x74))[1],uVar15 + (*(byte *)(gen_frame + 0x8f)));
                      }
                      else {
                        F_00bff3f0(((undefined * PTR32 *)(gen_frame + 0x74))[1],uVar6,*(undefined4 *)((*(int *)(gen_frame + 0x1c)) + 0x20),0,
                                     uVar15 + (*(byte *)(gen_frame + 0x8f)),0,0);
                      }
                      (*(uint * PTR32 *)(gen_frame + 0x88)) = (uint *)((int)(*(uint * PTR32 *)(gen_frame + 0x88)) + -1);
                      pbVar13 = (*(byte * PTR32 *)(gen_frame + 0x7c));
                    }
                  }
                  (*(uint *)(gen_frame + 0x80)) = (*(uint *)(gen_frame + 0x80)) + 0x30;
                  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84)) = (undefined * PTR32 *)((int)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84)) - 1);
                } while ((*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84)) != (undefined * PTR32 *)0x0);
              }
              if (pbVar13[3] != 0) {
                iVar14 = 0;
                uVar6 = (uint)pbVar13[3];
                do {
                  iVar12 = *(int *)((*(byte * PTR32 *)(gen_frame + 0x7c)) + 0x34);
                  (*(undefined4 *)(gen_frame + 0x44)) = *(undefined4 *)(iVar12 + 0xc + iVar14);
                  puVar11 = (ushort *)(iVar12 + iVar14);
                  (*(float *)(gen_frame + 0x48)) = ((float)GEN_TOF(((float10)1 - (float10)*(float *)(iVar12 + 0x10 + iVar14))));
                  (*(undefined4 *)(gen_frame + 0x4c)) = *(undefined4 *)(puVar11 + 10);
                  F_00bbed50(((undefined * PTR32 *)(gen_frame + 0x74))[0],(uint)*puVar11,(uint)puVar11[1],(uint)puVar11[2],
                               (uint)puVar11[3],*(float *)(puVar11 + 4),(*(undefined4 *)(gen_frame + 0x44)),
                               (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x48))),*(undefined4 *)(puVar11 + 10),
                               *(undefined4 *)(iVar12 + 0x18 + iVar14),
                               *(undefined4 *)(iVar12 + 0x1c + iVar14));
                  iVar14 = iVar14 + 0x20;
                  uVar6 = uVar6 - 1;
                } while (uVar6 != 0);
              }
              (*(uint * PTR32 *)(gen_frame + 0x88)) = (uint *)((*(byte * PTR32 *)(gen_frame + 0x7c))[1] - 1);
              if (-1 < (int)(*(uint * PTR32 *)(gen_frame + 0x88))) {
                uVar6 = (uint)(*(byte *)(gen_frame + 0x8f));
                do {
                  iVar14 = *(int *)((*(byte * PTR32 *)(gen_frame + 0x7c)) + 0x2c) + ((uint)(*(uint * PTR32 *)(gen_frame + 0x88)) & 0xff) * 0x24;
                  uVar15 = F_00b83880((*(undefined * PTR32 *)(gen_frame + 0x68)),iVar14);
                  if (uVar15 == 0) {
                    F_00bbcf80(((undefined * PTR32 *)(gen_frame + 0x74))[0],uVar6 + (int)(*(uint * PTR32 *)(gen_frame + 0x88)));
                  }
                  else {
                    F_00bbf070(((undefined * PTR32 *)(gen_frame + 0x74))[0],uVar15,*(undefined4 *)(iVar14 + 0x20),
                                 uVar6 + (int)(*(uint * PTR32 *)(gen_frame + 0x88)),0,0);
                  }
                  (*(uint * PTR32 *)(gen_frame + 0x88)) = (uint *)((int)(*(uint * PTR32 *)(gen_frame + 0x88)) - 1);
                } while (-1 < (int)(*(uint * PTR32 *)(gen_frame + 0x88)));
              }
              pbVar5 = (*(byte * PTR32 *)(gen_frame + 0x7c));
              (*(uint * PTR32 *)(gen_frame + 0x88)) = (uint *)((*(byte *)(gen_frame + 0x8f)) - 1);
              puVar9 = (*(uint * PTR32 *)(gen_frame + 0x88));
              pbVar13 = (*(byte * PTR32 *)(gen_frame + 0x7c));
              while ((*(byte * PTR32 *)(gen_frame + 0x7c)) = pbVar13, -1 < (int)(*(uint * PTR32 *)(gen_frame + 0x88))) {
                iVar14 = *(int *)(pbVar5 + 0x28) + ((uint)(*(uint * PTR32 *)(gen_frame + 0x88)) & 0xff) * 0x24;
                uVar6 = F_00b83880((*(undefined * PTR32 *)(gen_frame + 0x68)),iVar14);
                if (uVar6 == 0) {
                  puVar9 = (uint *)F_00bbde90(((undefined * PTR32 *)(gen_frame + 0x74))[0],(*(uint * PTR32 *)(gen_frame + 0x88)));
                }
                else {
                  puVar9 = (uint *)F_00bbef80(((undefined * PTR32 *)(gen_frame + 0x74))[0],uVar6,*(undefined4 *)(iVar14 + 0x20),
                                                (*(uint * PTR32 *)(gen_frame + 0x88)),0,0);
                }
                (*(uint * PTR32 *)(gen_frame + 0x88)) = (uint *)((int)(*(uint * PTR32 *)(gen_frame + 0x88)) + -1);
                pbVar13 = (*(byte * PTR32 *)(gen_frame + 0x7c));
              }
              bVar3 = pbVar13[5];
              uVar6 = CONCAT31((int3)((uint)((int)(uintptr_t)puVar9) >> 8),bVar3);
              if (bVar3 != 0) {
                (*(uint *)(gen_frame + 0x80)) = 0;
                (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84)) = (undefined * PTR32 *)(uint)bVar3;
                do {
                  iVar14 = *(int *)(pbVar13 + 0x3c) + (*(uint *)(gen_frame + 0x80));
                  uVar15 = F_00623160((*(undefined * PTR32 *)(gen_frame + 0x60)),iVar14);
                  uVar6 = uVar15 & 0xffff;
                  if ((short)uVar15 != -1) {
                    (*(undefined4 *)(gen_frame + 0x30)) = *(undefined4 *)(iVar14 + 0x20);
                    (*(undefined4 *)(gen_frame + 0x34)) = *(undefined4 *)(iVar14 + 0x24);
                    (*(undefined4 *)(gen_frame + 0x38)) = *(undefined4 *)(iVar14 + 0x28);
                    uVar6 = F_00bbf2a0(((undefined * PTR32 *)(gen_frame + 0x74))[0],uVar6,&(*(undefined4 *)(gen_frame + 0x30)),
                                         (uint)*(ushort *)(iVar14 + 0x2c),
                                         (uint)*(ushort *)(iVar14 + 0x2e));
                  }
                  (*(uint *)(gen_frame + 0x80)) = (*(uint *)(gen_frame + 0x80)) + 0x30;
                  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84)) = (undefined * PTR32 *)((int)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84)) - 1);
                } while ((*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84)) != (undefined * PTR32 *)0x0);
              }
              bVar3 = pbVar13[4];
              uVar6 = CONCAT31((int3)(uVar6 >> 8),bVar3);
              if (bVar3 != 0) {
                (*(uint *)(gen_frame + 0x80)) = 0;
                (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84)) = (undefined * PTR32 *)(uint)bVar3;
                do {
                  iVar14 = *(int *)(pbVar13 + 0x38) + (*(uint *)(gen_frame + 0x80));
                  uVar15 = F_00623160((*(undefined * PTR32 *)(gen_frame + 0x60)),iVar14);
                  uVar6 = uVar15 & 0xffff;
                  if ((short)uVar15 != -1) {
                    (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)(iVar14 + 0x20);
                    (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(iVar14 + 0x24);
                    (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(iVar14 + 0x28);
                    uVar6 = F_00bbf1f0(((undefined * PTR32 *)(gen_frame + 0x74))[0],uVar6,&(*(undefined4 *)(gen_frame + 0x0)),
                                         (uint)*(ushort *)(iVar14 + 0x2c),
                                         (uint)*(ushort *)(iVar14 + 0x2e),*(float *)(iVar14 + 0x30))
                    ;
                  }
                  (*(uint *)(gen_frame + 0x80)) = (*(uint *)(gen_frame + 0x80)) + 0x34;
                  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84)) = (undefined * PTR32 *)((int)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84)) - 1);
                } while ((*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84)) != (undefined * PTR32 *)0x0);
              }
              bVar3 = pbVar13[6];
              uVar6 = CONCAT31((int3)(uVar6 >> 8),bVar3);
              if (bVar3 != 0) {
                iVar14 = 0;
                (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84)) = (undefined * PTR32 *)(uint)bVar3;
                do {
                  iVar12 = *(int *)(pbVar13 + 0x40);
                  puVar11 = (ushort *)(iVar12 + iVar14);
                  uVar6 = F_00bbf360(((undefined * PTR32 *)(gen_frame + 0x74))[0],(uint)*puVar11,(uint)puVar11[1],
                                       (uint)*(ushort *)(iVar12 + 4 + iVar14),
                                       (uint)*(ushort *)(iVar12 + 6 + iVar14),
                                       *(float *)(puVar11 + 4),*(float *)(iVar12 + 0xc + iVar14));
                  iVar14 = iVar14 + 0x10;
                  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84)) = (undefined * PTR32 *)((int)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84)) - 1);
                } while ((*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84)) != (undefined * PTR32 *)0x0);
              }
              bVar3 = pbVar13[7];
              iVar14 = CONCAT31((int3)(uVar6 >> 8),bVar3);
              if (bVar3 != 0) {
                (*(uint *)(gen_frame + 0x80)) = 0;
                (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84)) = (undefined * PTR32 *)(uint)bVar3;
                do {
                  iVar12 = *(int *)(pbVar13 + 0x44) + (*(uint *)(gen_frame + 0x80));
                  uVar6 = F_00b83880((*(undefined * PTR32 *)(gen_frame + 0x68)),iVar12);
                  iVar14 = 0;
                  if (uVar6 != 0) {
                    F_00bbcd90(((undefined * PTR32 *)(gen_frame + 0x74))[0],uVar6,(uint)*(ushort *)(iVar12 + 0x20),
                                 (uint)*(ushort *)(iVar12 + 0x22));
                    iVar14 = (uint)extraout_var << 8;
                  }
                  (*(uint *)(gen_frame + 0x80)) = (*(uint *)(gen_frame + 0x80)) + 0x24;
                  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84)) = (undefined * PTR32 *)((int)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84)) - 1);
                } while ((*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84)) != (undefined * PTR32 *)0x0);
              }
            }
          }
        }
        (*(byte *)(gen_frame + 0x65)) = (*(byte *)(gen_frame + 0x65)) + 1;
        param_1 = CONCAT31((int3)((uint)iVar14 >> 8),(*(byte *)(gen_frame + 0x65)));
      } while ((*(byte *)(gen_frame + 0x65)) < (*(byte *)(gen_frame + 0x5e)));
    }
    if (((((*(byte *)(gen_frame + 0x5d)) != 0) || ((*(byte *)(gen_frame + 0x66)) != 0)) || ((*(byte *)(gen_frame + 0x5f)) != 0)) ||
       (((*(byte *)(gen_frame + 0x64)) != 0 || ((*(byte *)(gen_frame + 0x67)) != 0)))) {
      param_1 = F_00b83b40((*(undefined * PTR32 *)(gen_frame + 0x68)),(*(uint *)(gen_frame + 0x6c)));
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xdc)) ^ (uint)(uint)(gen_frame + 0xe0));
  return param_1;
}

/* ref: FUN_00b85e50 */
byte F_00b85e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb85e50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00b85ee0 */
uint F_00b85ee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb85ee0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00b85f20 */
uint F_00b85f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb85f20u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00b85f50 */
uint F_00b85f50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb85f50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b85f70 */
uint F_00b85f70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb85f70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 1;
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

/* ref: FUN_00b85fb0 */
uint F_00b85fb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb85fb0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00b85ff0 */
uint F_00b85ff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb85ff0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00b86040 */
uint F_00b86040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb86040u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00b86070 */
uint F_00b86070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb86070u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00b860f0 */
unsigned int F_00b860f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb860f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return 0;
}

/* ref: FUN_00b86110 */
unsigned int F_00b86110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb86110u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return 0;
}

/* ref: FUN_00b86130 */
unsigned int F_00b86130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb86130u, gen_a0, gen_a1, 0u, 0u);
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined2 *)0x0) {
    *param_1 = *param_2;
  }
  return 0;
}

/* ref: FUN_00b86150 */
unsigned int F_00b86150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb86150u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return 0;
}

/* ref: FUN_00b86170 */
unsigned int F_00b86170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb86170u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return 0;
}

/* ref: FUN_00b86190 */
uint F_00b86190(unsigned int gen_a0)
{
  GEN_ENTER(0xb86190u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b861a0 */
uint F_00b861a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb861a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b861b0 */
uint F_00b861b0(unsigned int gen_a0)
{
  GEN_ENTER(0xb861b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b861c0 */
uint F_00b861c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb861c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b861d0 */
unsigned int F_00b861d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb861d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_00b861f0 */
unsigned int F_00b861f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb861f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_00b86210 */
unsigned int F_00b86210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb86210u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;
  undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined2 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_00b86250 */
unsigned int F_00b86250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb86250u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_00b86280 */
uint F_00b86280(unsigned int gen_a0)
{
  GEN_ENTER(0xb86280u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c),param_1,0x10);
  return uVar1;
}

/* ref: FUN_00b862a0 */
uint F_00b862a0(unsigned int gen_a0)
{
  GEN_ENTER(0xb862a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c),param_1,0x10);
  return uVar1;
}

/* ref: FUN_00b862c0 */
uint F_00b862c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb862c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if ((uint)(*(int *)((int)this + 0x78) - *(int *)((int)this + 0x74) >> 2) <= (uint)(ushort)param_1)
  {
    return 0;
  }
  return (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x74) + (uint)(ushort)param_1 * 4))) + 0xb8)));
}

/* ref: FUN_00b862f0 */
uint F_00b862f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb862f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  uint * puVar2;
  
  puVar2 = (uint *)(uint)(ushort)param_1;
  if (puVar2 < ((uint *)GEN_TOP((*(int *)((int)this + 0x78) - *(int *)((int)this + 0x74) >> 2)))) {
    iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x74) + (int)((int)(uintptr_t)puVar2) * 4)));
    puVar2 = (uint *)(uint)(ushort)param_2;
    if ((ushort)param_2 < *(ushort *)(iVar1 + 0xb8)) {
      puVar2 = ((uint *)GEN_TOP(((uint)(ushort)param_2 * 0xa0 + 0x80 + *(int *)(iVar1 + 0x1c))));
      *puVar2 = *puVar2 | 1 << ((byte)param_3 & 0x1f);
    }
  }
  return (uint)puVar2;
}

/* ref: FUN_00b86340 */
uint F_00b86340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb86340u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  uint * puVar2;
  
  puVar2 = (uint *)(uint)(ushort)param_1;
  if (puVar2 < ((uint *)GEN_TOP((*(int *)((int)this + 0x78) - *(int *)((int)this + 0x74) >> 2)))) {
    iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x74) + (int)((int)(uintptr_t)puVar2) * 4)));
    puVar2 = (uint *)(uint)(ushort)param_2;
    if ((ushort)param_2 < *(ushort *)(iVar1 + 0xb8)) {
      puVar2 = ((uint *)GEN_TOP(((uint)(ushort)param_2 * 0xa0 + 0x80 + *(int *)(iVar1 + 0x1c))));
      *puVar2 = *puVar2 & ~(1 << ((byte)param_3 & 0x1f));
    }
  }
  return (uint)puVar2;
}

/* ref: FUN_00b86390 */
uint F_00b86390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb86390u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  uint * puVar2;
  
  puVar2 = (uint *)(uint)(ushort)param_1;
  if (puVar2 < ((uint *)GEN_TOP((*(int *)((int)this + 0x78) - *(int *)((int)this + 0x74) >> 2)))) {
    iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x74) + (int)((int)(uintptr_t)puVar2) * 4)));
    puVar2 = (uint *)(uint)(ushort)param_2;
    if ((ushort)param_2 < *(ushort *)(iVar1 + 0xb8)) {
      puVar2 = ((uint *)GEN_TOP(((uint)(ushort)param_2 * 0xa0 + 0x84 + *(int *)(iVar1 + 0x1c))));
      *puVar2 = *puVar2 | 1 << ((byte)param_3 & 0x1f);
    }
  }
  return (uint)puVar2;
}

/* ref: FUN_00b863e0 */
uint F_00b863e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb863e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  uint * puVar2;
  
  puVar2 = (uint *)(uint)(ushort)param_1;
  if (puVar2 < ((uint *)GEN_TOP((*(int *)((int)this + 0x78) - *(int *)((int)this + 0x74) >> 2)))) {
    iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x74) + (int)((int)(uintptr_t)puVar2) * 4)));
    puVar2 = (uint *)(uint)(ushort)param_2;
    if ((ushort)param_2 < *(ushort *)(iVar1 + 0xb8)) {
      puVar2 = ((uint *)GEN_TOP(((uint)(ushort)param_2 * 0xa0 + 0x84 + *(int *)(iVar1 + 0x1c))));
      *puVar2 = *puVar2 & ~(1 << ((byte)param_3 & 0x1f));
    }
  }
  return (uint)puVar2;
}

/* ref: FUN_00b86430 */
uint F_00b86430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb86430u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint * puVar1;
  
  puVar1 = (uint *)(uint)(ushort)param_1;
  if (puVar1 < ((uint *)GEN_TOP((*(int *)((int)this + 0xb8) - *(int *)((int)this + 0xb4) >> 5)))) {
    puVar1 = ((uint *)GEN_TOP(((int)((int)(uintptr_t)puVar1) * 0x20 + 8 + *(int *)((int)this + 0xb4))));
    *puVar1 = *puVar1 | 1 << ((byte)param_2 & 0x1f);
  }
  return (uint)puVar1;
}

/* ref: FUN_00b86470 */
uint F_00b86470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb86470u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint * puVar1;
  
  puVar1 = (uint *)(uint)(ushort)param_1;
  if (puVar1 < ((uint *)GEN_TOP((*(int *)((int)this + 0xb8) - *(int *)((int)this + 0xb4) >> 5)))) {
    puVar1 = ((uint *)GEN_TOP(((int)((int)(uintptr_t)puVar1) * 0x20 + 8 + *(int *)((int)this + 0xb4))));
    *puVar1 = *puVar1 & ~(1 << ((byte)param_2 & 0x1f));
  }
  return (uint)puVar1;
}

/* ref: FUN_00b864b0 */
uint F_00b864b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb864b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint * puVar1;
  
  puVar1 = (uint *)(uint)(ushort)param_1;
  if (puVar1 < ((uint *)GEN_TOP((*(int *)((int)this + 0xb8) - *(int *)((int)this + 0xb4) >> 5)))) {
    puVar1 = ((uint *)GEN_TOP(((int)((int)(uintptr_t)puVar1) * 0x20 + 0xc + *(int *)((int)this + 0xb4))));
    *puVar1 = *puVar1 | 1 << ((byte)param_2 & 0x1f);
  }
  return (uint)puVar1;
}

/* ref: FUN_00b864f0 */
uint F_00b864f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb864f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint * puVar1;
  
  puVar1 = (uint *)(uint)(ushort)param_1;
  if (puVar1 < ((uint *)GEN_TOP((*(int *)((int)this + 0xb8) - *(int *)((int)this + 0xb4) >> 5)))) {
    puVar1 = ((uint *)GEN_TOP(((int)((int)(uintptr_t)puVar1) * 0x20 + 0xc + *(int *)((int)this + 0xb4))));
    *puVar1 = *puVar1 & ~(1 << ((byte)param_2 & 0x1f));
  }
  return (uint)puVar1;
}

/* ref: FUN_00b86580 */
byte F_00b86580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb86580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00b865d0 */
uint F_00b865d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb865d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b865e0 */
uint F_00b865e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb865e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b865f0 */
uint F_00b865f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb865f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b86610 */
uint F_00b86610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb86610u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b86660 */
uint F_00b86660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb86660u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  if (param_2 != param_3) {
    do {
      if (*param_2 == *param_4) break;
      param_2 = param_2 + 1;
    } while (param_2 != param_3);
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b86690 */
uint F_00b86690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb86690u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  if (param_2 != param_3) {
    do {
      if (*param_2 == *param_4) break;
      param_2 = param_2 + 1;
    } while (param_2 != param_3);
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b866c0 */
unsigned int F_00b866c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb866c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_00b866e0 */
unsigned int F_00b866e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb866e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_00b86700 */
unsigned int F_00b86700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb86700u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_00b86720 */
unsigned int F_00b86720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb86720u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_00b86740 */
unsigned int F_00b86740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb86740u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;
  undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined2 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_00b86760 */
unsigned int F_00b86760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb86760u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;
  undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined2 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_00b86780 */
unsigned int F_00b86780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb86780u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_00b867a0 */
unsigned int F_00b867a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb867a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_00b867c0 */
unsigned int F_00b867c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb867c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_00b867e0 */
unsigned int F_00b867e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb867e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_00b86800 */
unsigned int F_00b86800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb86800u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_00b86820 */
unsigned int F_00b86820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb86820u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
    }
    param_3 = param_3 + 1;
  }
  return 0;
}

/* ref: FUN_00b86850 */
unsigned int F_00b86850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb86850u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
    }
    param_3 = param_3 + 1;
  }
  return 0;
}

/* ref: FUN_00b86880 */
unsigned int F_00b86880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb86880u, gen_a0, gen_a1, gen_a2, 0u);
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;
  undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (undefined2 *)0x0) {
      *param_3 = *param_1;
    }
    param_3 = param_3 + 1;
  }
  return 0;
}

/* ref: FUN_00b868b0 */
unsigned int F_00b868b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb868b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
    }
    param_3 = param_3 + 1;
  }
  return 0;
}

/* ref: FUN_00b868e0 */
unsigned int F_00b868e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb868e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
    }
    param_3 = param_3 + 1;
  }
  return 0;
}

/* ref: FUN_00b86910 */
uint F_00b86910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb86910u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00b86920 */
uint F_00b86920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb86920u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00b86930 */
uint F_00b86930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb86930u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00b86940 */
uint F_00b86940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb86940u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00b86950 */
uint F_00b86950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb86950u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00b869b0 */
uint F_00b869b0(unsigned int gen_a0)
{
  GEN_ENTER(0xb869b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0xd5);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00b869f0 */
uint F_00b869f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb869f0u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00b86a50 */
uint F_00b86a50(unsigned int gen_a0)
{
  GEN_ENTER(0xb86a50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0xd5);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00b86a90 */
uint F_00b86a90(unsigned int gen_a0)
{
  GEN_ENTER(0xb86a90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 1) * 2,0xd9);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00b86ad0 */
uint F_00b86ad0(unsigned int gen_a0)
{
  GEN_ENTER(0xb86ad0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0xd9);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00b86b10 */
uint F_00b86b10(unsigned int gen_a0)
{
  GEN_ENTER(0xb86b10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0xd9);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00b86b50 */
unsigned int F_00b86b50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb86b50u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(iVar1 + (int)param_3);
      }
      param_3 = param_3 + 1;
    } while (iVar1 + (int)param_3 != param_2);
  }
  return 0;
}

/* ref: FUN_00b86b80 */
unsigned int F_00b86b80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb86b80u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(iVar1 + (int)param_3);
      }
      param_3 = param_3 + 1;
    } while (iVar1 + (int)param_3 != param_2);
  }
  return 0;
}

/* ref: FUN_00b86bb0 */
unsigned int F_00b86bb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb86bb0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined2 *)0x0) {
        *param_3 = *(undefined2 *)(iVar1 + (int)param_3);
      }
      param_3 = param_3 + 1;
    } while (iVar1 + (int)param_3 != param_2);
  }
  return 0;
}

/* ref: FUN_00b86be0 */
unsigned int F_00b86be0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb86be0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(iVar1 + (int)param_3);
      }
      param_3 = param_3 + 1;
    } while (iVar1 + (int)param_3 != param_2);
  }
  return 0;
}

/* ref: FUN_00b86c10 */
unsigned int F_00b86c10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb86c10u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(iVar1 + (int)param_3);
      }
      param_3 = param_3 + 1;
    } while (iVar1 + (int)param_3 != param_2);
  }
  return 0;
}

/* ref: FUN_00b86c40 */
uint F_00b86c40(unsigned int gen_a0)
{
  GEN_ENTER(0xb86c40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0xd5);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00b86c80 */
unsigned int F_00b86c80(unsigned int gen_a0)
{
  GEN_ENTER(0xb86c80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != *(int *)((int)this + 4)) {
    F_00c46e20(iVar1,*(int *)((int)this + 4),0);
    *(int *)((int)this + 4) = iVar1;
  }
  return 0;
}

/* ref: FUN_00b86cb0 */
uint F_00b86cb0(unsigned int gen_a0)
{
  GEN_ENTER(0xb86cb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0xd5);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00b86cf0 */
unsigned int F_00b86cf0(unsigned int gen_a0)
{
  GEN_ENTER(0xb86cf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != *(int *)((int)this + 4)) {
    F_00c46e20(iVar1,*(int *)((int)this + 4),0);
    *(int *)((int)this + 4) = iVar1;
  }
  return 0;
}

/* ref: FUN_00b86d20 */
uint F_00b86d20(unsigned int gen_a0)
{
  GEN_ENTER(0xb86d20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 1) * 2,0xd9);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00b86d60 */
uint F_00b86d60(unsigned int gen_a0)
{
  GEN_ENTER(0xb86d60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0xd9);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00b86da0 */
uint F_00b86da0(unsigned int gen_a0)
{
  GEN_ENTER(0xb86da0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0xd9);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00b86de0 */
unsigned int F_00b86de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb86de0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(iVar1 + (int)param_3);
      }
      param_3 = param_3 + 1;
    } while (iVar1 + (int)param_3 != param_2);
  }
  return 0;
}

/* ref: FUN_00b86e10 */
unsigned int F_00b86e10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb86e10u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(iVar1 + (int)param_3);
      }
      param_3 = param_3 + 1;
    } while (iVar1 + (int)param_3 != param_2);
  }
  return 0;
}

/* ref: FUN_00b86e40 */
unsigned int F_00b86e40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb86e40u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined2 *)0x0) {
        *param_3 = *(undefined2 *)(iVar1 + (int)param_3);
      }
      param_3 = param_3 + 1;
    } while (iVar1 + (int)param_3 != param_2);
  }
  return 0;
}

/* ref: FUN_00b86e70 */
unsigned int F_00b86e70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb86e70u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(iVar1 + (int)param_3);
      }
      param_3 = param_3 + 1;
    } while (iVar1 + (int)param_3 != param_2);
  }
  return 0;
}

/* ref: FUN_00b86ea0 */
unsigned int F_00b86ea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb86ea0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(iVar1 + (int)param_3);
      }
      param_3 = param_3 + 1;
    } while (iVar1 + (int)param_3 != param_2);
  }
  return 0;
}

/* ref: FUN_00b86ee0 */
uint F_00b86ee0(unsigned int gen_a0)
{
  GEN_ENTER(0xb86ee0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0xd5);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00b86f30 */
uint F_00b86f30(unsigned int gen_a0)
{
  GEN_ENTER(0xb86f30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0xd5);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00b86f70 */
uint F_00b86f70(unsigned int gen_a0)
{
  GEN_ENTER(0xb86f70u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c),param_1);
  }
  return uVar1;
}

/* ref: FUN_00b86f90 */
unsigned int F_00b86f90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb86f90u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(iVar1 + (int)param_3);
      }
      param_3 = param_3 + 1;
    } while (iVar1 + (int)param_3 != param_2);
  }
  return 0;
}

/* ref: FUN_00b86fc0 */
unsigned int F_00b86fc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb86fc0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(iVar1 + (int)param_3);
      }
      param_3 = param_3 + 1;
    } while (iVar1 + (int)param_3 != param_2);
  }
  return 0;
}

/* ref: FUN_00b86ff0 */
unsigned int F_00b86ff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb86ff0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined2 *)0x0) {
        *param_3 = *(undefined2 *)(iVar1 + (int)param_3);
      }
      param_3 = param_3 + 1;
    } while (iVar1 + (int)param_3 != param_2);
  }
  return 0;
}

/* ref: FUN_00b87020 */
unsigned int F_00b87020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb87020u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(iVar1 + (int)param_3);
      }
      param_3 = param_3 + 1;
    } while (iVar1 + (int)param_3 != param_2);
  }
  return 0;
}

/* ref: FUN_00b87050 */
unsigned int F_00b87050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb87050u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(iVar1 + (int)param_3);
      }
      param_3 = param_3 + 1;
    } while (iVar1 + (int)param_3 != param_2);
  }
  return 0;
}

/* ref: Client::Graphics::Physics::BonePhysicsModule::vf0 */
uint F_00b87080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb87080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b845a0(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c),this);
  }
  return (uint)this;
}

/* ref: FUN_00b870b0 */
uint F_00b870b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb870b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  if (((undefined4 *)GEN_TOP((*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2))) < param_1) {
    puVar4 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,0xd5);
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar6 = puVar4;
    for (puVar5 = *(undefined4 * PTR32 *)this; puVar5 != puVar1; puVar5 = puVar5 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar5;
      }
      puVar6 = puVar6 + 1;
    }
    iVar2 = *(int *)this;
    iVar3 = *(int *)((int)this + 4);
    if (iVar2 != 0) {
      F_00429760(iVar2,(*(int *)((int)this + 8) - iVar2 >> 2) * 4,0xd5);
    }
    param_1 = puVar4 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar4;
    *(undefined4 * PTR32 *)((int)this + 8) = param_1;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar4 + (iVar3 - iVar2 >> 2);
  }
  return (uint)param_1;
}

/* ref: FUN_00b87160 */
uint F_00b87160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb87160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  if (((undefined4 *)GEN_TOP((*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2))) < param_1) {
    puVar4 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,0xd5);
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar6 = puVar4;
    for (puVar5 = *(undefined4 * PTR32 *)this; puVar5 != puVar1; puVar5 = puVar5 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar5;
      }
      puVar6 = puVar6 + 1;
    }
    iVar2 = *(int *)this;
    iVar3 = *(int *)((int)this + 4);
    if (iVar2 != 0) {
      F_00429760(iVar2,(*(int *)((int)this + 8) - iVar2 >> 2) * 4,0xd5);
    }
    param_1 = puVar4 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar4;
    *(undefined4 * PTR32 *)((int)this + 8) = param_1;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar4 + (iVar3 - iVar2 >> 2);
  }
  return (uint)param_1;
}

/* ref: FUN_00b87210 */
uint F_00b87210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb87210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined2 * puVar1;
  int iVar2;
  int iVar3;
  undefined2 * puVar4;
  undefined2 * puVar5;
  undefined2 * puVar6;
  
  if (((undefined2 *)GEN_TOP((*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 1))) < param_1) {
    puVar4 = (undefined2 *)F_004296a0((int)((int)(uintptr_t)param_1) * 2,0,0xd9);
    puVar1 = *(undefined2 * PTR32 *)((int)this + 4);
    puVar6 = puVar4;
    for (puVar5 = *(undefined2 * PTR32 *)this; puVar5 != puVar1; puVar5 = puVar5 + 1) {
      if (puVar6 != (undefined2 *)0x0) {
        *puVar6 = *puVar5;
      }
      puVar6 = puVar6 + 1;
    }
    iVar2 = *(int *)this;
    iVar3 = *(int *)((int)this + 4);
    if (iVar2 != 0) {
      F_00429760(iVar2,(*(int *)((int)this + 8) - iVar2 >> 1) * 2,0xd9);
    }
    param_1 = puVar4 + (int)param_1;
    *(undefined2 * PTR32 *)this = puVar4;
    *(undefined2 * PTR32 *)((int)this + 8) = param_1;
    *(undefined2 * PTR32 *)((int)this + 4) = puVar4 + (iVar3 - iVar2 >> 1);
  }
  return (uint)param_1;
}

/* ref: FUN_00b872b0 */
uint F_00b872b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb872b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  if (((undefined4 *)GEN_TOP((*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2))) < param_1) {
    puVar4 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,0xd9);
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar6 = puVar4;
    for (puVar5 = *(undefined4 * PTR32 *)this; puVar5 != puVar1; puVar5 = puVar5 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar5;
      }
      puVar6 = puVar6 + 1;
    }
    iVar2 = *(int *)this;
    iVar3 = *(int *)((int)this + 4);
    if (iVar2 != 0) {
      F_00429760(iVar2,(*(int *)((int)this + 8) - iVar2 >> 2) * 4,0xd9);
    }
    param_1 = puVar4 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar4;
    *(undefined4 * PTR32 *)((int)this + 8) = param_1;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar4 + (iVar3 - iVar2 >> 2);
  }
  return (uint)param_1;
}

/* ref: FUN_00b87360 */
uint F_00b87360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb87360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  if (((undefined4 *)GEN_TOP((*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2))) < param_1) {
    puVar4 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,0xd9);
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar6 = puVar4;
    for (puVar5 = *(undefined4 * PTR32 *)this; puVar5 != puVar1; puVar5 = puVar5 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar5;
      }
      puVar6 = puVar6 + 1;
    }
    iVar2 = *(int *)this;
    iVar3 = *(int *)((int)this + 4);
    if (iVar2 != 0) {
      F_00429760(iVar2,(*(int *)((int)this + 8) - iVar2 >> 2) * 4,0xd9);
    }
    param_1 = puVar4 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar4;
    *(undefined4 * PTR32 *)((int)this + 8) = param_1;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar4 + (iVar3 - iVar2 >> 2);
  }
  return (uint)param_1;
}

/* ref: FUN_00b87410 */
uint F_00b87410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb87410u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_00b870b0(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00b870b0(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00b87480 */
uint F_00b87480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb87480u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_00b87160(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00b87160(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00b874f0 */
uint F_00b874f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb874f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 1;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 1;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00b87210(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00b87210(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00b87560 */
uint F_00b87560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb87560u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_00b872b0(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00b872b0(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00b875d0 */
uint F_00b875d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb875d0u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_00b87360(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00b87360(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00b87640 */
unsigned int F_00b87640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb87640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00b87410(this,1);
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
      F_00b87410(this,1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return 0;
}

/* ref: FUN_00b876b0 */
unsigned int F_00b876b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb876b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00b87480(this,1);
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
      F_00b87480(this,1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return 0;
}

/* ref: FUN_00b87720 */
unsigned int F_00b87720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb87720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined2 * puVar1;
  undefined2 * puVar2;
  
  puVar1 = *(undefined2 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined2 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined2 * PTR32 *)((int)this + 8)) {
      F_00b874f0(this,1);
    }
    if (*(undefined2 * PTR32 *)((int)this + 4) != (undefined2 *)0x0) {
      **(undefined2 * PTR32 *)((int)this + 4) =
           *((undefined2 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar2) >> 1) * 2)));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 2;
      return 0;
    }
  }
  else {
    if (puVar1 == *(undefined2 * PTR32 *)((int)this + 8)) {
      F_00b874f0(this,1);
    }
    if (*(undefined2 * PTR32 *)((int)this + 4) != (undefined2 *)0x0) {
      **(undefined2 * PTR32 *)((int)this + 4) = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 2;
  return 0;
}

/* ref: FUN_00b87790 */
unsigned int F_00b87790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb87790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00b87560(this,1);
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
      F_00b87560(this,1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return 0;
}

/* ref: FUN_00b87800 */
unsigned int F_00b87800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb87800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00b875d0(this,1);
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
      F_00b875d0(this,1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return 0;
}

/* ref: FUN_00b87870 */
uint F_00b87870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb87870u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x100];
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  if (param_1 == (undefined *)0x0) {
    return 0;
  }
  (*(undefined * PTR32 *)(gen_frame + 0x40)) = *(undefined * PTR32 *)((int)this + 0x98);
  (*(int *)(gen_frame + 0x3c)) = *(ushort *)(param_2 + 2) - 1;
  puVar7 = (undefined4 *)0x0;
  (*(uint * PTR32 *)(gen_frame + 0x4c)) = (uint *)0x0;
  (*(uint * PTR32 *)(gen_frame + 0x50)) = (uint *)0x0;
  (*(uint * PTR32 *)(gen_frame + 0x54)) = (uint *)0x0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x60)) = (undefined4 *)0x0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x64)) = (undefined4 *)0x0;
  (*(undefined4 * PTR32 *)(gen_frame + 0xbc)) = (undefined4 *)0x0;
  (*(undefined4 * PTR32 *)(gen_frame + 0xc0)) = (undefined4 *)0x0;
  (*(undefined4 * PTR32 *)(gen_frame + 0xc4)) = (undefined4 *)0x0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x6c)) = (undefined4 *)0x0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x70)) = (undefined4 *)0x0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x74)) = (undefined4 *)0x0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x7c)) = (undefined4 *)0x0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x80)) = (undefined4 *)0x0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x84)) = (undefined4 *)0x0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x8c)) = (undefined4 *)0x0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x90)) = (undefined4 *)0x0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x94)) = (undefined4 *)0x0;
  (*(undefined4 * PTR32 *)(gen_frame + 0xcc)) = (undefined4 *)0x0;
  (*(undefined4 * PTR32 *)(gen_frame + 0xd0)) = (undefined4 *)0x0;
  (*(undefined4 * PTR32 *)(gen_frame + 0xd4)) = (undefined4 *)0x0;
  (*(undefined4 * PTR32 *)(gen_frame + 0xdc)) = (undefined4 *)0x0;
  (*(undefined4 * PTR32 *)(gen_frame + 0xe0)) = (undefined4 *)0x0;
  (*(undefined4 * PTR32 *)(gen_frame + 0xe4)) = (undefined4 *)0x0;
  (*(undefined4 * PTR32 *)(gen_frame + 0xac)) = (undefined4 *)0x0;
  (*(undefined4 * PTR32 *)(gen_frame + 0xb0)) = (undefined4 *)0x0;
  (*(undefined4 * PTR32 *)(gen_frame + 0xb4)) = (undefined4 *)0x0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x9c)) = (undefined4 *)0x0;
  (*(undefined4 * PTR32 *)(gen_frame + 0xa0)) = (undefined4 *)0x0;
  (*(undefined4 * PTR32 *)(gen_frame + 0xa4)) = (undefined4 *)0x0;
  (*(uint *)(gen_frame + 0x38)) = (uint)*(ushort *)(param_2 + 2);
  (*(uint *)(gen_frame + 0x44)) = 0;
  if (0 < (*(int *)(gen_frame + 0x3c))) {
    uVar2 = 0;
    do {
      (*(int *)(gen_frame + 0xec)) = uVar2 * 0x54 + *(int *)(param_2 + 0x2c);
      uVar2 = F_00623160((*(undefined * PTR32 *)(gen_frame + 0x40)),(*(int *)(gen_frame + 0xec)));
      (*(uint *)(gen_frame + 0x48)) = uVar2 & 0xffff;
      if ((short)uVar2 == -1) break;
      if ((&(*(uint *)(gen_frame + 0x48)) < (*(uint * PTR32 *)(gen_frame + 0x50))) && ((*(uint * PTR32 *)(gen_frame + 0x4c)) <= &(*(uint *)(gen_frame + 0x48)))) {
        iVar5 = (int)&(*(uint *)(gen_frame + 0x48)) - (int)(*(uint * PTR32 *)(gen_frame + 0x4c));
        if ((*(uint * PTR32 *)(gen_frame + 0x50)) == (*(uint * PTR32 *)(gen_frame + 0x54))) {
          F_00b874f0(&(*(uint * PTR32 *)(gen_frame + 0x4c)),1);
        }
        if ((*(uint * PTR32 *)(gen_frame + 0x50)) != (uint *)0x0) {
          *(undefined2 *)(*(uint * PTR32 *)(gen_frame + 0x50)) = *((undefined2 *)GEN_TOP(((int)(*(uint * PTR32 *)(gen_frame + 0x4c)) + (iVar5 >> 1) * 2)));
        }
      }
      else {
        if ((*(uint * PTR32 *)(gen_frame + 0x50)) == (*(uint * PTR32 *)(gen_frame + 0x54))) {
          F_00b874f0(&(*(uint * PTR32 *)(gen_frame + 0x4c)),1);
        }
        if ((*(uint * PTR32 *)(gen_frame + 0x50)) != (uint *)0x0) {
          *(short *)(*(uint * PTR32 *)(gen_frame + 0x50)) = (short)uVar2;
        }
      }
      (*(uint * PTR32 *)(gen_frame + 0x50)) = (uint *)((int)(*(uint * PTR32 *)(gen_frame + 0x50)) + 2);
      puVar6 = (undefined4 *)((*(int *)(gen_frame + 0xec)) + 0x24);
      if ((puVar6 < (*(undefined4 * PTR32 *)(gen_frame + 0x60))) && ((*(undefined4 * PTR32 *)(gen_frame + 0x5c)) <= puVar6)) {
        iVar5 = (int)puVar6 - (int)(*(undefined4 * PTR32 *)(gen_frame + 0x5c));
        if ((*(undefined4 * PTR32 *)(gen_frame + 0x60)) == (*(undefined4 * PTR32 *)(gen_frame + 0x64))) {
          F_00b87560(&(*(undefined4 * PTR32 *)(gen_frame + 0x5c)),1);
        }
        if ((*(undefined4 * PTR32 *)(gen_frame + 0x60)) != (undefined4 *)0x0) {
          uVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0x5c))[iVar5 >> 2];
LAB_00b87a54: ;
          *(*(undefined4 * PTR32 *)(gen_frame + 0x60)) = uVar1;
        }
      }
      else {
        if ((*(undefined4 * PTR32 *)(gen_frame + 0x60)) == (*(undefined4 * PTR32 *)(gen_frame + 0x64))) {
          F_00b87560(&(*(undefined4 * PTR32 *)(gen_frame + 0x5c)),1);
        }
        if ((*(undefined4 * PTR32 *)(gen_frame + 0x60)) != (undefined4 *)0x0) {
          uVar1 = *puVar6;
          goto LAB_00b87a54;
        }
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0x60)) = (*(undefined4 * PTR32 *)(gen_frame + 0x60)) + 1;
      puVar6 = (undefined4 *)((*(int *)(gen_frame + 0xec)) + 0x20);
      if ((puVar6 < (*(undefined4 * PTR32 *)(gen_frame + 0xc0))) && ((*(undefined4 * PTR32 *)(gen_frame + 0xbc)) <= puVar6)) {
        iVar5 = (int)puVar6 - (int)(*(undefined4 * PTR32 *)(gen_frame + 0xbc));
        if ((*(undefined4 * PTR32 *)(gen_frame + 0xc0)) == (*(undefined4 * PTR32 *)(gen_frame + 0xc4))) {
          F_00b87560(&(*(undefined4 * PTR32 *)(gen_frame + 0xbc)),1);
        }
        if ((*(undefined4 * PTR32 *)(gen_frame + 0xc0)) != (undefined4 *)0x0) {
          uVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0xbc))[iVar5 >> 2];
LAB_00b87aae: ;
          *(*(undefined4 * PTR32 *)(gen_frame + 0xc0)) = uVar1;
        }
      }
      else {
        if ((*(undefined4 * PTR32 *)(gen_frame + 0xc0)) == (*(undefined4 * PTR32 *)(gen_frame + 0xc4))) {
          F_00b87560(&(*(undefined4 * PTR32 *)(gen_frame + 0xbc)),1);
        }
        if ((*(undefined4 * PTR32 *)(gen_frame + 0xc0)) != (undefined4 *)0x0) {
          uVar1 = *puVar6;
          goto LAB_00b87aae;
        }
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0xc0)) = (*(undefined4 * PTR32 *)(gen_frame + 0xc0)) + 1;
      puVar6 = (undefined4 *)((*(int *)(gen_frame + 0xec)) + 0x28);
      if ((puVar6 < (*(undefined4 * PTR32 *)(gen_frame + 0x70))) && ((*(undefined4 * PTR32 *)(gen_frame + 0x6c)) <= puVar6)) {
        iVar5 = (int)puVar6 - (int)(*(undefined4 * PTR32 *)(gen_frame + 0x6c));
        if ((*(undefined4 * PTR32 *)(gen_frame + 0x70)) == (*(undefined4 * PTR32 *)(gen_frame + 0x74))) {
          F_00b87560(&(*(undefined4 * PTR32 *)(gen_frame + 0x6c)),1);
        }
        if ((*(undefined4 * PTR32 *)(gen_frame + 0x70)) != (undefined4 *)0x0) {
          uVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0x6c))[iVar5 >> 2];
LAB_00b87b11: ;
          *(*(undefined4 * PTR32 *)(gen_frame + 0x70)) = uVar1;
        }
      }
      else {
        if ((*(undefined4 * PTR32 *)(gen_frame + 0x70)) == (*(undefined4 * PTR32 *)(gen_frame + 0x74))) {
          F_00b87560(&(*(undefined4 * PTR32 *)(gen_frame + 0x6c)),1);
        }
        if ((*(undefined4 * PTR32 *)(gen_frame + 0x70)) != (undefined4 *)0x0) {
          uVar1 = *puVar6;
          goto LAB_00b87b11;
        }
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0x70)) = (*(undefined4 * PTR32 *)(gen_frame + 0x70)) + 1;
      puVar6 = (undefined4 *)((*(int *)(gen_frame + 0xec)) + 0x2c);
      if ((puVar6 < (*(undefined4 * PTR32 *)(gen_frame + 0x80))) && ((*(undefined4 * PTR32 *)(gen_frame + 0x7c)) <= puVar6)) {
        iVar5 = (int)puVar6 - (int)(*(undefined4 * PTR32 *)(gen_frame + 0x7c));
        if ((*(undefined4 * PTR32 *)(gen_frame + 0x80)) == (*(undefined4 * PTR32 *)(gen_frame + 0x84))) {
          F_00b87560(&(*(undefined4 * PTR32 *)(gen_frame + 0x7c)),1);
        }
        if ((*(undefined4 * PTR32 *)(gen_frame + 0x80)) != (undefined4 *)0x0) {
          uVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0x7c))[iVar5 >> 2];
LAB_00b87b68: ;
          *(*(undefined4 * PTR32 *)(gen_frame + 0x80)) = uVar1;
        }
      }
      else {
        if ((*(undefined4 * PTR32 *)(gen_frame + 0x80)) == (*(undefined4 * PTR32 *)(gen_frame + 0x84))) {
          F_00b87560(&(*(undefined4 * PTR32 *)(gen_frame + 0x7c)),1);
        }
        if ((*(undefined4 * PTR32 *)(gen_frame + 0x80)) != (undefined4 *)0x0) {
          uVar1 = *puVar6;
          goto LAB_00b87b68;
        }
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0x80)) = (*(undefined4 * PTR32 *)(gen_frame + 0x80)) + 1;
      puVar6 = (undefined4 *)((*(int *)(gen_frame + 0xec)) + 0x30);
      if ((puVar6 < (*(undefined4 * PTR32 *)(gen_frame + 0x90))) && ((*(undefined4 * PTR32 *)(gen_frame + 0x8c)) <= puVar6)) {
        iVar5 = (int)puVar6 - (int)(*(undefined4 * PTR32 *)(gen_frame + 0x8c));
        if ((*(undefined4 * PTR32 *)(gen_frame + 0x90)) == (*(undefined4 * PTR32 *)(gen_frame + 0x94))) {
          F_00b87560(&(*(undefined4 * PTR32 *)(gen_frame + 0x8c)),1);
        }
        if ((*(undefined4 * PTR32 *)(gen_frame + 0x90)) != (undefined4 *)0x0) {
          uVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0x8c))[iVar5 >> 2];
LAB_00b87bbf: ;
          *(*(undefined4 * PTR32 *)(gen_frame + 0x90)) = uVar1;
        }
      }
      else {
        if ((*(undefined4 * PTR32 *)(gen_frame + 0x90)) == (*(undefined4 * PTR32 *)(gen_frame + 0x94))) {
          F_00b87560(&(*(undefined4 * PTR32 *)(gen_frame + 0x8c)),1);
        }
        if ((*(undefined4 * PTR32 *)(gen_frame + 0x90)) != (undefined4 *)0x0) {
          uVar1 = *puVar6;
          goto LAB_00b87bbf;
        }
      }
      puVar6 = (undefined4 *)((*(int *)(gen_frame + 0xec)) + 0x34);
      (*(undefined4 * PTR32 *)(gen_frame + 0x90)) = (*(undefined4 * PTR32 *)(gen_frame + 0x90)) + 1;
      if ((puVar6 < puVar7) && ((*(undefined4 * PTR32 *)(gen_frame + 0xcc)) <= puVar6)) {
        iVar5 = (int)puVar6 - (int)(*(undefined4 * PTR32 *)(gen_frame + 0xcc));
        if (puVar7 == (*(undefined4 * PTR32 *)(gen_frame + 0xd4))) {
          F_00b87560(&(*(undefined4 * PTR32 *)(gen_frame + 0xcc)),1);
          puVar7 = (*(undefined4 * PTR32 *)(gen_frame + 0xd0));
        }
        if (puVar7 != (undefined4 *)0x0) {
          uVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0xcc))[iVar5 >> 2];
LAB_00b87c16: ;
          *puVar7 = uVar1;
        }
      }
      else {
        if (puVar7 == (*(undefined4 * PTR32 *)(gen_frame + 0xd4))) {
          F_00b87560(&(*(undefined4 * PTR32 *)(gen_frame + 0xcc)),1);
          puVar7 = (*(undefined4 * PTR32 *)(gen_frame + 0xd0));
        }
        if (puVar7 != (undefined4 *)0x0) {
          uVar1 = *puVar6;
          goto LAB_00b87c16;
        }
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0xd0)) = puVar7 + 1;
      puVar7 = (undefined4 *)((*(int *)(gen_frame + 0xec)) + 0x38);
      if ((puVar7 < (*(undefined4 * PTR32 *)(gen_frame + 0xd0))) && ((*(undefined4 * PTR32 *)(gen_frame + 0xcc)) <= puVar7)) {
        iVar5 = (int)puVar7 - (int)(*(undefined4 * PTR32 *)(gen_frame + 0xcc));
        if ((*(undefined4 * PTR32 *)(gen_frame + 0xd0)) == (*(undefined4 * PTR32 *)(gen_frame + 0xd4))) {
          F_00b87560(&(*(undefined4 * PTR32 *)(gen_frame + 0xcc)),1);
        }
        if ((*(undefined4 * PTR32 *)(gen_frame + 0xd0)) != (undefined4 *)0x0) {
          uVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0xcc))[iVar5 >> 2];
LAB_00b87c6a: ;
          *(*(undefined4 * PTR32 *)(gen_frame + 0xd0)) = uVar1;
        }
      }
      else {
        if ((*(undefined4 * PTR32 *)(gen_frame + 0xd0)) == (*(undefined4 * PTR32 *)(gen_frame + 0xd4))) {
          F_00b87560(&(*(undefined4 * PTR32 *)(gen_frame + 0xcc)),1);
        }
        if ((*(undefined4 * PTR32 *)(gen_frame + 0xd0)) != (undefined4 *)0x0) {
          uVar1 = *puVar7;
          goto LAB_00b87c6a;
        }
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0xd0)) = (*(undefined4 * PTR32 *)(gen_frame + 0xd0)) + 1;
      puVar7 = (undefined4 *)((*(int *)(gen_frame + 0xec)) + 0x3c);
      if ((puVar7 < (*(undefined4 * PTR32 *)(gen_frame + 0xd0))) && ((*(undefined4 * PTR32 *)(gen_frame + 0xcc)) <= puVar7)) {
        iVar5 = (int)puVar7 - (int)(*(undefined4 * PTR32 *)(gen_frame + 0xcc));
        if ((*(undefined4 * PTR32 *)(gen_frame + 0xd0)) == (*(undefined4 * PTR32 *)(gen_frame + 0xd4))) {
          F_00b87560(&(*(undefined4 * PTR32 *)(gen_frame + 0xcc)),1);
        }
        if ((*(undefined4 * PTR32 *)(gen_frame + 0xd0)) != (undefined4 *)0x0) {
          uVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0xcc))[iVar5 >> 2];
LAB_00b87cbb: ;
          *(*(undefined4 * PTR32 *)(gen_frame + 0xd0)) = uVar1;
        }
      }
      else {
        if ((*(undefined4 * PTR32 *)(gen_frame + 0xd0)) == (*(undefined4 * PTR32 *)(gen_frame + 0xd4))) {
          F_00b87560(&(*(undefined4 * PTR32 *)(gen_frame + 0xcc)),1);
        }
        if ((*(undefined4 * PTR32 *)(gen_frame + 0xd0)) != (undefined4 *)0x0) {
          uVar1 = *puVar7;
          goto LAB_00b87cbb;
        }
      }
      puVar7 = (*(undefined4 * PTR32 *)(gen_frame + 0xd0)) + 1;
      puVar6 = (undefined4 *)((*(int *)(gen_frame + 0xec)) + 0x40);
      (*(undefined4 * PTR32 *)(gen_frame + 0xd0)) = puVar7;
      if ((puVar6 < (*(undefined4 * PTR32 *)(gen_frame + 0xe0))) && ((*(undefined4 * PTR32 *)(gen_frame + 0xdc)) <= puVar6)) {
        iVar5 = (int)puVar6 - (int)(*(undefined4 * PTR32 *)(gen_frame + 0xdc));
        if ((*(undefined4 * PTR32 *)(gen_frame + 0xe0)) == (*(undefined4 * PTR32 *)(gen_frame + 0xe4))) {
          F_00b87560(&(*(undefined4 * PTR32 *)(gen_frame + 0xdc)),1);
        }
        if ((*(undefined4 * PTR32 *)(gen_frame + 0xe0)) != (undefined4 *)0x0) {
          uVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0xdc))[iVar5 >> 2];
LAB_00b87d15: ;
          *(*(undefined4 * PTR32 *)(gen_frame + 0xe0)) = uVar1;
        }
      }
      else {
        if ((*(undefined4 * PTR32 *)(gen_frame + 0xe0)) == (*(undefined4 * PTR32 *)(gen_frame + 0xe4))) {
          F_00b87560(&(*(undefined4 * PTR32 *)(gen_frame + 0xdc)),1);
        }
        if ((*(undefined4 * PTR32 *)(gen_frame + 0xe0)) != (undefined4 *)0x0) {
          uVar1 = *puVar6;
          goto LAB_00b87d15;
        }
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0xe0)) = (*(undefined4 * PTR32 *)(gen_frame + 0xe0)) + 1;
      puVar6 = (undefined4 *)((*(int *)(gen_frame + 0xec)) + 0x44);
      if ((puVar6 < (*(undefined4 * PTR32 *)(gen_frame + 0xe0))) && ((*(undefined4 * PTR32 *)(gen_frame + 0xdc)) <= puVar6)) {
        iVar5 = (int)puVar6 - (int)(*(undefined4 * PTR32 *)(gen_frame + 0xdc));
        if ((*(undefined4 * PTR32 *)(gen_frame + 0xe0)) == (*(undefined4 * PTR32 *)(gen_frame + 0xe4))) {
          F_00b87560(&(*(undefined4 * PTR32 *)(gen_frame + 0xdc)),1);
        }
        if ((*(undefined4 * PTR32 *)(gen_frame + 0xe0)) != (undefined4 *)0x0) {
          uVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0xdc))[iVar5 >> 2];
LAB_00b87d69: ;
          *(*(undefined4 * PTR32 *)(gen_frame + 0xe0)) = uVar1;
        }
      }
      else {
        if ((*(undefined4 * PTR32 *)(gen_frame + 0xe0)) == (*(undefined4 * PTR32 *)(gen_frame + 0xe4))) {
          F_00b87560(&(*(undefined4 * PTR32 *)(gen_frame + 0xdc)),1);
        }
        if ((*(undefined4 * PTR32 *)(gen_frame + 0xe0)) != (undefined4 *)0x0) {
          uVar1 = *puVar6;
          goto LAB_00b87d69;
        }
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0xe0)) = (*(undefined4 * PTR32 *)(gen_frame + 0xe0)) + 1;
      puVar6 = (undefined4 *)((*(int *)(gen_frame + 0xec)) + 0x48);
      if ((puVar6 < (*(undefined4 * PTR32 *)(gen_frame + 0xe0))) && ((*(undefined4 * PTR32 *)(gen_frame + 0xdc)) <= puVar6)) {
        iVar5 = (int)puVar6 - (int)(*(undefined4 * PTR32 *)(gen_frame + 0xdc));
        if ((*(undefined4 * PTR32 *)(gen_frame + 0xe0)) == (*(undefined4 * PTR32 *)(gen_frame + 0xe4))) {
          F_00b87560(&(*(undefined4 * PTR32 *)(gen_frame + 0xdc)),1);
        }
        if ((*(undefined4 * PTR32 *)(gen_frame + 0xe0)) != (undefined4 *)0x0) {
          uVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0xdc))[iVar5 >> 2];
LAB_00b87dba: ;
          *(*(undefined4 * PTR32 *)(gen_frame + 0xe0)) = uVar1;
        }
      }
      else {
        if ((*(undefined4 * PTR32 *)(gen_frame + 0xe0)) == (*(undefined4 * PTR32 *)(gen_frame + 0xe4))) {
          F_00b87560(&(*(undefined4 * PTR32 *)(gen_frame + 0xdc)),1);
        }
        if ((*(undefined4 * PTR32 *)(gen_frame + 0xe0)) != (undefined4 *)0x0) {
          uVar1 = *puVar6;
          goto LAB_00b87dba;
        }
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0xe0)) = (*(undefined4 * PTR32 *)(gen_frame + 0xe0)) + 1;
      puVar6 = (undefined4 *)((*(int *)(gen_frame + 0xec)) + 0x4c);
      if ((puVar6 < (*(undefined4 * PTR32 *)(gen_frame + 0xb0))) && ((*(undefined4 * PTR32 *)(gen_frame + 0xac)) <= puVar6)) {
        iVar5 = (int)puVar6 - (int)(*(undefined4 * PTR32 *)(gen_frame + 0xac));
        if ((*(undefined4 * PTR32 *)(gen_frame + 0xb0)) == (*(undefined4 * PTR32 *)(gen_frame + 0xb4))) {
          F_00b875d0(&(*(undefined4 * PTR32 *)(gen_frame + 0xac)),1);
        }
        if ((*(undefined4 * PTR32 *)(gen_frame + 0xb0)) != (undefined4 *)0x0) {
          *(*(undefined4 * PTR32 *)(gen_frame + 0xb0)) = (*(undefined4 * PTR32 *)(gen_frame + 0xac))[iVar5 >> 2];
        }
      }
      else {
        if ((*(undefined4 * PTR32 *)(gen_frame + 0xb0)) == (*(undefined4 * PTR32 *)(gen_frame + 0xb4))) {
          F_00b875d0(&(*(undefined4 * PTR32 *)(gen_frame + 0xac)),1);
        }
        if ((*(undefined4 * PTR32 *)(gen_frame + 0xb0)) != (undefined4 *)0x0) {
          *(*(undefined4 * PTR32 *)(gen_frame + 0xb0)) = *puVar6;
        }
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0xb0)) = (*(undefined4 * PTR32 *)(gen_frame + 0xb0)) + 1;
      puVar6 = (undefined4 *)((*(int *)(gen_frame + 0xec)) + 0x50);
      if ((puVar6 < (*(undefined4 * PTR32 *)(gen_frame + 0xa0))) && ((*(undefined4 * PTR32 *)(gen_frame + 0x9c)) <= puVar6)) {
        iVar5 = (int)puVar6 - (int)(*(undefined4 * PTR32 *)(gen_frame + 0x9c));
        if ((*(undefined4 * PTR32 *)(gen_frame + 0xa0)) == (*(undefined4 * PTR32 *)(gen_frame + 0xa4))) {
          F_00b875d0(&(*(undefined4 * PTR32 *)(gen_frame + 0x9c)),1);
        }
        if ((*(undefined4 * PTR32 *)(gen_frame + 0xa0)) != (undefined4 *)0x0) {
          *(*(undefined4 * PTR32 *)(gen_frame + 0xa0)) = (*(undefined4 * PTR32 *)(gen_frame + 0x9c))[iVar5 >> 2];
        }
      }
      else {
        if ((*(undefined4 * PTR32 *)(gen_frame + 0xa0)) == (*(undefined4 * PTR32 *)(gen_frame + 0xa4))) {
          F_00b875d0(&(*(undefined4 * PTR32 *)(gen_frame + 0x9c)),1);
        }
        if ((*(undefined4 * PTR32 *)(gen_frame + 0xa0)) != (undefined4 *)0x0) {
          *(*(undefined4 * PTR32 *)(gen_frame + 0xa0)) = *puVar6;
        }
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0xa0)) = (*(undefined4 * PTR32 *)(gen_frame + 0xa0)) + 1;
      (*(uint *)(gen_frame + 0x44)) = (*(uint *)(gen_frame + 0x44)) + 1;
      uVar2 = (*(uint *)(gen_frame + 0x44)) & 0xffff;
    } while ((int)uVar2 < (*(int *)(gen_frame + 0x3c)));
  }
  (*(int *)(gen_frame + 0xec)) = ((*(uint *)(gen_frame + 0x38)) - 1 & 0xffff) * 0x54 + *(int *)(param_2 + 0x2c);
  puVar6 = (undefined4 *)((*(int *)(gen_frame + 0xec)) + 0x24);
  if ((puVar6 < (*(undefined4 * PTR32 *)(gen_frame + 0x60))) && ((*(undefined4 * PTR32 *)(gen_frame + 0x5c)) <= puVar6)) {
    iVar5 = (int)puVar6 - (int)(*(undefined4 * PTR32 *)(gen_frame + 0x5c));
    if ((*(undefined4 * PTR32 *)(gen_frame + 0x60)) == (*(undefined4 * PTR32 *)(gen_frame + 0x64))) {
      iVar3 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x60)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x5c))) >> 2;
      if (iVar3 == -1) {
                    
        F_00c4579a("vector<T> too long");
      }
      uVar4 = iVar3 + 1;
      uVar2 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x64)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x5c))) >> 2;
      if (uVar2 < uVar4) {
        if (-(uVar2 >> 1) - 1 < uVar2) {
          uVar2 = 0;
        }
        else {
          uVar2 = uVar2 + (uVar2 >> 1);
        }
        if (uVar2 < uVar4) {
          uVar2 = uVar4;
        }
        F_00b872b0(&(*(undefined4 * PTR32 *)(gen_frame + 0x5c)),uVar2);
        puVar7 = (*(undefined4 * PTR32 *)(gen_frame + 0xd0));
      }
    }
    if ((*(undefined4 * PTR32 *)(gen_frame + 0x60)) != (undefined4 *)0x0) {
      uVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0x5c))[iVar5 >> 2];
LAB_00b87f95: ;
      *(*(undefined4 * PTR32 *)(gen_frame + 0x60)) = uVar1;
    }
  }
  else {
    if ((*(undefined4 * PTR32 *)(gen_frame + 0x60)) == (*(undefined4 * PTR32 *)(gen_frame + 0x64))) {
      iVar5 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x60)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x5c))) >> 2;
      if (iVar5 == -1) {
                    
        F_00c4579a("vector<T> too long");
      }
      uVar4 = iVar5 + 1;
      uVar2 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x64)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x5c))) >> 2;
      if (uVar2 < uVar4) {
        if (-(uVar2 >> 1) - 1 < uVar2) {
          uVar2 = 0;
        }
        else {
          uVar2 = uVar2 + (uVar2 >> 1);
        }
        if (uVar2 < uVar4) {
          uVar2 = uVar4;
        }
        F_00b872b0(&(*(undefined4 * PTR32 *)(gen_frame + 0x5c)),uVar2);
        puVar7 = (*(undefined4 * PTR32 *)(gen_frame + 0xd0));
      }
    }
    if ((*(undefined4 * PTR32 *)(gen_frame + 0x60)) != (undefined4 *)0x0) {
      uVar1 = *puVar6;
      goto LAB_00b87f95;
    }
  }
  puVar6 = (undefined4 *)((*(int *)(gen_frame + 0xec)) + 0x20);
  if ((puVar6 < (*(undefined4 * PTR32 *)(gen_frame + 0xc0))) && ((*(undefined4 * PTR32 *)(gen_frame + 0xbc)) <= puVar6)) {
    iVar5 = (int)puVar6 - (int)(*(undefined4 * PTR32 *)(gen_frame + 0xbc));
    if ((*(undefined4 * PTR32 *)(gen_frame + 0xc0)) == (*(undefined4 * PTR32 *)(gen_frame + 0xc4))) {
      iVar3 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0xc0)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0xbc))) >> 2;
      if (iVar3 == -1) {
                    
        F_00c4579a("vector<T> too long");
      }
      uVar4 = iVar3 + 1;
      uVar2 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0xc4)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0xbc))) >> 2;
      if (uVar2 < uVar4) {
        if (-(uVar2 >> 1) - 1 < uVar2) {
          uVar2 = 0;
        }
        else {
          uVar2 = uVar2 + (uVar2 >> 1);
        }
        if (uVar2 < uVar4) {
          uVar2 = uVar4;
        }
        F_00b872b0(&(*(undefined4 * PTR32 *)(gen_frame + 0xbc)),uVar2);
        puVar7 = (*(undefined4 * PTR32 *)(gen_frame + 0xd0));
      }
    }
    if ((*(undefined4 * PTR32 *)(gen_frame + 0xc0)) != (undefined4 *)0x0) {
      uVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0xbc))[iVar5 >> 2];
LAB_00b88064: ;
      *(*(undefined4 * PTR32 *)(gen_frame + 0xc0)) = uVar1;
    }
  }
  else {
    if ((*(undefined4 * PTR32 *)(gen_frame + 0xc0)) == (*(undefined4 * PTR32 *)(gen_frame + 0xc4))) {
      iVar5 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0xc0)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0xbc))) >> 2;
      if (iVar5 == -1) {
                    
        F_00c4579a("vector<T> too long");
      }
      uVar4 = iVar5 + 1;
      uVar2 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0xc4)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0xbc))) >> 2;
      if (uVar2 < uVar4) {
        if (-(uVar2 >> 1) - 1 < uVar2) {
          uVar2 = 0;
        }
        else {
          uVar2 = uVar2 + (uVar2 >> 1);
        }
        if (uVar2 < uVar4) {
          uVar2 = uVar4;
        }
        F_00b872b0(&(*(undefined4 * PTR32 *)(gen_frame + 0xbc)),uVar2);
        puVar7 = (*(undefined4 * PTR32 *)(gen_frame + 0xd0));
      }
    }
    if ((*(undefined4 * PTR32 *)(gen_frame + 0xc0)) != (undefined4 *)0x0) {
      uVar1 = *puVar6;
      goto LAB_00b88064;
    }
  }
  puVar6 = (undefined4 *)((*(int *)(gen_frame + 0xec)) + 0x28);
  if ((puVar6 < (*(undefined4 * PTR32 *)(gen_frame + 0x70))) && ((*(undefined4 * PTR32 *)(gen_frame + 0x6c)) <= puVar6)) {
    iVar5 = (int)puVar6 - (int)(*(undefined4 * PTR32 *)(gen_frame + 0x6c));
    if ((*(undefined4 * PTR32 *)(gen_frame + 0x70)) == (*(undefined4 * PTR32 *)(gen_frame + 0x74))) {
      iVar3 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x70)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x6c))) >> 2;
      if (iVar3 == -1) {
                    
        F_00c4579a("vector<T> too long");
      }
      uVar4 = iVar3 + 1;
      uVar2 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x74)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x6c))) >> 2;
      if (uVar2 < uVar4) {
        if (-(uVar2 >> 1) - 1 < uVar2) {
          uVar2 = 0;
        }
        else {
          uVar2 = uVar2 + (uVar2 >> 1);
        }
        if (uVar2 < uVar4) {
          uVar2 = uVar4;
        }
        F_00b872b0(&(*(undefined4 * PTR32 *)(gen_frame + 0x6c)),uVar2);
        puVar7 = (*(undefined4 * PTR32 *)(gen_frame + 0xd0));
      }
    }
    if ((*(undefined4 * PTR32 *)(gen_frame + 0x70)) != (undefined4 *)0x0) {
      uVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0x6c))[iVar5 >> 2];
LAB_00b88141: ;
      *(*(undefined4 * PTR32 *)(gen_frame + 0x70)) = uVar1;
    }
  }
  else {
    if ((*(undefined4 * PTR32 *)(gen_frame + 0x70)) == (*(undefined4 * PTR32 *)(gen_frame + 0x74))) {
      iVar5 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x70)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x6c))) >> 2;
      if (iVar5 == -1) {
                    
        F_00c4579a("vector<T> too long");
      }
      uVar4 = iVar5 + 1;
      uVar2 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x74)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x6c))) >> 2;
      if (uVar2 < uVar4) {
        if (-(uVar2 >> 1) - 1 < uVar2) {
          uVar2 = 0;
        }
        else {
          uVar2 = uVar2 + (uVar2 >> 1);
        }
        if (uVar2 < uVar4) {
          uVar2 = uVar4;
        }
        F_00b872b0(&(*(undefined4 * PTR32 *)(gen_frame + 0x6c)),uVar2);
        puVar7 = (*(undefined4 * PTR32 *)(gen_frame + 0xd0));
      }
    }
    if ((*(undefined4 * PTR32 *)(gen_frame + 0x70)) != (undefined4 *)0x0) {
      uVar1 = *puVar6;
      goto LAB_00b88141;
    }
  }
  puVar6 = (undefined4 *)((*(int *)(gen_frame + 0xec)) + 0x2c);
  if ((puVar6 < (*(undefined4 * PTR32 *)(gen_frame + 0x80))) && ((*(undefined4 * PTR32 *)(gen_frame + 0x7c)) <= puVar6)) {
    iVar5 = (int)puVar6 - (int)(*(undefined4 * PTR32 *)(gen_frame + 0x7c));
    if ((*(undefined4 * PTR32 *)(gen_frame + 0x80)) == (*(undefined4 * PTR32 *)(gen_frame + 0x84))) {
      iVar3 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x80)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x7c))) >> 2;
      if (iVar3 == -1) {
                    
        F_00c4579a("vector<T> too long");
      }
      uVar4 = iVar3 + 1;
      uVar2 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x84)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x7c))) >> 2;
      if (uVar2 < uVar4) {
        if (-(uVar2 >> 1) - 1 < uVar2) {
          uVar2 = 0;
        }
        else {
          uVar2 = uVar2 + (uVar2 >> 1);
        }
        if (uVar2 < uVar4) {
          uVar2 = uVar4;
        }
        F_00b872b0(&(*(undefined4 * PTR32 *)(gen_frame + 0x7c)),uVar2);
        puVar7 = (*(undefined4 * PTR32 *)(gen_frame + 0xd0));
      }
    }
    if ((*(undefined4 * PTR32 *)(gen_frame + 0x80)) != (undefined4 *)0x0) {
      uVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0x7c))[iVar5 >> 2];
LAB_00b8820e: ;
      *(*(undefined4 * PTR32 *)(gen_frame + 0x80)) = uVar1;
    }
  }
  else {
    if ((*(undefined4 * PTR32 *)(gen_frame + 0x80)) == (*(undefined4 * PTR32 *)(gen_frame + 0x84))) {
      iVar5 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x80)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x7c))) >> 2;
      if (iVar5 == -1) {
                    
        F_00c4579a("vector<T> too long");
      }
      uVar4 = iVar5 + 1;
      uVar2 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x84)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x7c))) >> 2;
      if (uVar2 < uVar4) {
        if (-(uVar2 >> 1) - 1 < uVar2) {
          uVar2 = 0;
        }
        else {
          uVar2 = uVar2 + (uVar2 >> 1);
        }
        if (uVar2 < uVar4) {
          uVar2 = uVar4;
        }
        F_00b872b0(&(*(undefined4 * PTR32 *)(gen_frame + 0x7c)),uVar2);
        puVar7 = (*(undefined4 * PTR32 *)(gen_frame + 0xd0));
      }
    }
    if ((*(undefined4 * PTR32 *)(gen_frame + 0x80)) != (undefined4 *)0x0) {
      uVar1 = *puVar6;
      goto LAB_00b8820e;
    }
  }
  puVar6 = (undefined4 *)((*(int *)(gen_frame + 0xec)) + 0x30);
  if ((puVar6 < (*(undefined4 * PTR32 *)(gen_frame + 0x90))) && ((*(undefined4 * PTR32 *)(gen_frame + 0x8c)) <= puVar6)) {
    iVar5 = (int)puVar6 - (int)(*(undefined4 * PTR32 *)(gen_frame + 0x8c));
    if ((*(undefined4 * PTR32 *)(gen_frame + 0x90)) == (*(undefined4 * PTR32 *)(gen_frame + 0x94))) {
      iVar3 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x90)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x8c))) >> 2;
      if (iVar3 == -1) {
                    
        F_00c4579a("vector<T> too long");
      }
      uVar4 = iVar3 + 1;
      uVar2 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x94)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x8c))) >> 2;
      if (uVar2 < uVar4) {
        if (-(uVar2 >> 1) - 1 < uVar2) {
          uVar2 = 0;
        }
        else {
          uVar2 = uVar2 + (uVar2 >> 1);
        }
        if (uVar2 < uVar4) {
          uVar2 = uVar4;
        }
        F_00b872b0(&(*(undefined4 * PTR32 *)(gen_frame + 0x8c)),uVar2);
        puVar7 = (*(undefined4 * PTR32 *)(gen_frame + 0xd0));
      }
    }
    if ((*(undefined4 * PTR32 *)(gen_frame + 0x90)) != (undefined4 *)0x0) {
      uVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0x8c))[iVar5 >> 2];
LAB_00b882dd: ;
      *(*(undefined4 * PTR32 *)(gen_frame + 0x90)) = uVar1;
    }
  }
  else {
    if ((*(undefined4 * PTR32 *)(gen_frame + 0x90)) == (*(undefined4 * PTR32 *)(gen_frame + 0x94))) {
      iVar5 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x90)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x8c))) >> 2;
      if (iVar5 == -1) {
                    
        F_00c4579a("vector<T> too long");
      }
      uVar4 = iVar5 + 1;
      uVar2 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x94)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x8c))) >> 2;
      if (uVar2 < uVar4) {
        if (-(uVar2 >> 1) - 1 < uVar2) {
          uVar2 = 0;
        }
        else {
          uVar2 = uVar2 + (uVar2 >> 1);
        }
        if (uVar2 < uVar4) {
          uVar2 = uVar4;
        }
        F_00b872b0(&(*(undefined4 * PTR32 *)(gen_frame + 0x8c)),uVar2);
        puVar7 = (*(undefined4 * PTR32 *)(gen_frame + 0xd0));
      }
    }
    if ((*(undefined4 * PTR32 *)(gen_frame + 0x90)) != (undefined4 *)0x0) {
      uVar1 = *puVar6;
      goto LAB_00b882dd;
    }
  }
  puVar6 = (undefined4 *)((*(int *)(gen_frame + 0xec)) + 0x34);
  if ((puVar6 < puVar7) && ((*(undefined4 * PTR32 *)(gen_frame + 0xcc)) <= puVar6)) {
    iVar5 = (int)puVar6 - (int)(*(undefined4 * PTR32 *)(gen_frame + 0xcc));
    if (puVar7 == (*(undefined4 * PTR32 *)(gen_frame + 0xd4))) {
      iVar3 = (int)puVar7 - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0xcc))) >> 2;
      if (iVar3 == -1) {
                    
        F_00c4579a("vector<T> too long");
      }
      uVar4 = iVar3 + 1;
      uVar2 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0xd4)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0xcc))) >> 2;
      if (uVar2 < uVar4) {
        if (-(uVar2 >> 1) - 1 < uVar2) {
          uVar2 = 0;
        }
        else {
          uVar2 = uVar2 + (uVar2 >> 1);
        }
        if (uVar2 < uVar4) {
          uVar2 = uVar4;
        }
        F_00b872b0(&(*(undefined4 * PTR32 *)(gen_frame + 0xcc)),uVar2);
        puVar7 = (*(undefined4 * PTR32 *)(gen_frame + 0xd0));
      }
    }
    if (puVar7 != (undefined4 *)0x0) {
      uVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0xcc))[iVar5 >> 2];
LAB_00b883a5: ;
      *puVar7 = uVar1;
    }
  }
  else {
    if (puVar7 == (*(undefined4 * PTR32 *)(gen_frame + 0xd4))) {
      iVar5 = (int)puVar7 - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0xcc))) >> 2;
      if (iVar5 == -1) {
                    
        F_00c4579a("vector<T> too long");
      }
      uVar4 = iVar5 + 1;
      uVar2 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0xd4)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0xcc))) >> 2;
      if (uVar2 < uVar4) {
        if (-(uVar2 >> 1) - 1 < uVar2) {
          uVar2 = 0;
        }
        else {
          uVar2 = uVar2 + (uVar2 >> 1);
        }
        if (uVar2 < uVar4) {
          uVar2 = uVar4;
        }
        F_00b872b0(&(*(undefined4 * PTR32 *)(gen_frame + 0xcc)),uVar2);
        puVar7 = (*(undefined4 * PTR32 *)(gen_frame + 0xd0));
      }
    }
    if (puVar7 != (undefined4 *)0x0) {
      uVar1 = *puVar6;
      goto LAB_00b883a5;
    }
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0xd0)) = puVar7 + 1;
  puVar7 = (undefined4 *)((*(int *)(gen_frame + 0xec)) + 0x38);
  if ((puVar7 < (*(undefined4 * PTR32 *)(gen_frame + 0xd0))) && ((*(undefined4 * PTR32 *)(gen_frame + 0xcc)) <= puVar7)) {
    iVar5 = (int)puVar7 - (int)(*(undefined4 * PTR32 *)(gen_frame + 0xcc));
    if ((*(undefined4 * PTR32 *)(gen_frame + 0xd0)) == (*(undefined4 * PTR32 *)(gen_frame + 0xd4))) {
      iVar3 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0xd0)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0xcc))) >> 2;
      if (iVar3 == -1) {
                    
        F_00c4579a("vector<T> too long");
      }
      uVar4 = iVar3 + 1;
      uVar2 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0xd4)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0xcc))) >> 2;
      if (uVar2 < uVar4) {
        if (-(uVar2 >> 1) - 1 < uVar2) {
          uVar2 = 0;
        }
        else {
          uVar2 = uVar2 + (uVar2 >> 1);
        }
        if (uVar2 < uVar4) {
          uVar2 = uVar4;
        }
        F_00b872b0(&(*(undefined4 * PTR32 *)(gen_frame + 0xcc)),uVar2);
      }
    }
    if ((*(undefined4 * PTR32 *)(gen_frame + 0xd0)) != (undefined4 *)0x0) {
      uVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0xcc))[iVar5 >> 2];
LAB_00b88477: ;
      *(*(undefined4 * PTR32 *)(gen_frame + 0xd0)) = uVar1;
    }
  }
  else {
    if ((*(undefined4 * PTR32 *)(gen_frame + 0xd0)) == (*(undefined4 * PTR32 *)(gen_frame + 0xd4))) {
      iVar5 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0xd0)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0xcc))) >> 2;
      if (iVar5 == -1) {
                    
        F_00c4579a("vector<T> too long");
      }
      uVar4 = iVar5 + 1;
      uVar2 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0xd4)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0xcc))) >> 2;
      if (uVar2 < uVar4) {
        if (-(uVar2 >> 1) - 1 < uVar2) {
          uVar2 = 0;
        }
        else {
          uVar2 = uVar2 + (uVar2 >> 1);
        }
        if (uVar2 < uVar4) {
          uVar2 = uVar4;
        }
        F_00b872b0(&(*(undefined4 * PTR32 *)(gen_frame + 0xcc)),uVar2);
      }
    }
    if ((*(undefined4 * PTR32 *)(gen_frame + 0xd0)) != (undefined4 *)0x0) {
      uVar1 = *puVar7;
      goto LAB_00b88477;
    }
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0xd0)) = (*(undefined4 * PTR32 *)(gen_frame + 0xd0)) + 1;
  puVar7 = (undefined4 *)((*(int *)(gen_frame + 0xec)) + 0x3c);
  if ((puVar7 < (*(undefined4 * PTR32 *)(gen_frame + 0xd0))) && ((*(undefined4 * PTR32 *)(gen_frame + 0xcc)) <= puVar7)) {
    iVar5 = (int)puVar7 - (int)(*(undefined4 * PTR32 *)(gen_frame + 0xcc));
    if ((*(undefined4 * PTR32 *)(gen_frame + 0xd0)) == (*(undefined4 * PTR32 *)(gen_frame + 0xd4))) {
      iVar3 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0xd0)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0xcc))) >> 2;
      if (iVar3 == -1) {
                    
        F_00c4579a("vector<T> too long");
      }
      uVar4 = iVar3 + 1;
      uVar2 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0xd4)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0xcc))) >> 2;
      if (uVar2 < uVar4) {
        if (-(uVar2 >> 1) - 1 < uVar2) {
          uVar2 = 0;
        }
        else {
          uVar2 = uVar2 + (uVar2 >> 1);
        }
        if (uVar2 < uVar4) {
          uVar2 = uVar4;
        }
        F_00b872b0(&(*(undefined4 * PTR32 *)(gen_frame + 0xcc)),uVar2);
      }
    }
    if ((*(undefined4 * PTR32 *)(gen_frame + 0xd0)) != (undefined4 *)0x0) {
      uVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0xcc))[iVar5 >> 2];
LAB_00b88549: ;
      *(*(undefined4 * PTR32 *)(gen_frame + 0xd0)) = uVar1;
    }
  }
  else {
    if ((*(undefined4 * PTR32 *)(gen_frame + 0xd0)) == (*(undefined4 * PTR32 *)(gen_frame + 0xd4))) {
      iVar5 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0xd0)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0xcc))) >> 2;
      if (iVar5 == -1) {
                    
        F_00c4579a("vector<T> too long");
      }
      uVar4 = iVar5 + 1;
      uVar2 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0xd4)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0xcc))) >> 2;
      if (uVar2 < uVar4) {
        if (-(uVar2 >> 1) - 1 < uVar2) {
          uVar2 = 0;
        }
        else {
          uVar2 = uVar2 + (uVar2 >> 1);
        }
        if (uVar2 < uVar4) {
          uVar2 = uVar4;
        }
        F_00b872b0(&(*(undefined4 * PTR32 *)(gen_frame + 0xcc)),uVar2);
      }
    }
    if ((*(undefined4 * PTR32 *)(gen_frame + 0xd0)) != (undefined4 *)0x0) {
      uVar1 = *puVar7;
      goto LAB_00b88549;
    }
  }
  puVar7 = (undefined4 *)((*(int *)(gen_frame + 0xec)) + 0x40);
  if ((puVar7 < (*(undefined4 * PTR32 *)(gen_frame + 0xe0))) && ((*(undefined4 * PTR32 *)(gen_frame + 0xdc)) <= puVar7)) {
    iVar5 = (int)puVar7 - (int)(*(undefined4 * PTR32 *)(gen_frame + 0xdc));
    if ((*(undefined4 * PTR32 *)(gen_frame + 0xe0)) == (*(undefined4 * PTR32 *)(gen_frame + 0xe4))) {
      iVar3 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0xe0)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0xdc))) >> 2;
      if (iVar3 == -1) {
                    
        F_00c4579a("vector<T> too long");
      }
      uVar4 = iVar3 + 1;
      uVar2 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0xe4)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0xdc))) >> 2;
      if (uVar2 < uVar4) {
        if (-(uVar2 >> 1) - 1 < uVar2) {
          uVar2 = 0;
        }
        else {
          uVar2 = uVar2 + (uVar2 >> 1);
        }
        if (uVar2 < uVar4) {
          uVar2 = uVar4;
        }
        F_00b872b0(&(*(undefined4 * PTR32 *)(gen_frame + 0xdc)),uVar2);
      }
    }
    if ((*(undefined4 * PTR32 *)(gen_frame + 0xe0)) != (undefined4 *)0x0) {
      *(*(undefined4 * PTR32 *)(gen_frame + 0xe0)) = (*(undefined4 * PTR32 *)(gen_frame + 0xdc))[iVar5 >> 2];
    }
  }
  else {
    if ((*(undefined4 * PTR32 *)(gen_frame + 0xe0)) == (*(undefined4 * PTR32 *)(gen_frame + 0xe4))) {
      iVar5 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0xe0)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0xdc))) >> 2;
      if (iVar5 == -1) {
                    
        F_00c4579a("vector<T> too long");
      }
      uVar4 = iVar5 + 1;
      uVar2 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0xe4)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0xdc))) >> 2;
      if (uVar2 < uVar4) {
        if (-(uVar2 >> 1) - 1 < uVar2) {
          uVar2 = 0;
        }
        else {
          uVar2 = uVar2 + (uVar2 >> 1);
        }
        if (uVar2 < uVar4) {
          uVar2 = uVar4;
        }
        F_00b872b0(&(*(undefined4 * PTR32 *)(gen_frame + 0xdc)),uVar2);
      }
    }
    if ((*(undefined4 * PTR32 *)(gen_frame + 0xe0)) != (undefined4 *)0x0) {
      *(*(undefined4 * PTR32 *)(gen_frame + 0xe0)) = *puVar7;
    }
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0xe0)) = (*(undefined4 * PTR32 *)(gen_frame + 0xe0)) + 1;
  puVar7 = (undefined4 *)((*(int *)(gen_frame + 0xec)) + 0x44);
  if ((puVar7 < (*(undefined4 * PTR32 *)(gen_frame + 0xe0))) && ((*(undefined4 * PTR32 *)(gen_frame + 0xdc)) <= puVar7)) {
    iVar5 = (int)puVar7 - (int)(*(undefined4 * PTR32 *)(gen_frame + 0xdc));
    if ((*(undefined4 * PTR32 *)(gen_frame + 0xe0)) == (*(undefined4 * PTR32 *)(gen_frame + 0xe4))) {
      iVar3 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0xe0)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0xdc))) >> 2;
      if (iVar3 == -1) {
                    
        F_00c4579a("vector<T> too long");
      }
      uVar4 = iVar3 + 1;
      uVar2 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0xe4)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0xdc))) >> 2;
      if (uVar2 < uVar4) {
        if (-(uVar2 >> 1) - 1 < uVar2) {
          uVar2 = 0;
        }
        else {
          uVar2 = uVar2 + (uVar2 >> 1);
        }
        if (uVar2 < uVar4) {
          uVar2 = uVar4;
        }
        F_00b872b0(&(*(undefined4 * PTR32 *)(gen_frame + 0xdc)),uVar2);
      }
    }
    if ((*(undefined4 * PTR32 *)(gen_frame + 0xe0)) != (undefined4 *)0x0) {
      *(*(undefined4 * PTR32 *)(gen_frame + 0xe0)) = (*(undefined4 * PTR32 *)(gen_frame + 0xdc))[iVar5 >> 2];
    }
  }
  else {
    if ((*(undefined4 * PTR32 *)(gen_frame + 0xe0)) == (*(undefined4 * PTR32 *)(gen_frame + 0xe4))) {
      iVar5 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0xe0)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0xdc))) >> 2;
      if (iVar5 == -1) {
                    
        F_00c4579a("vector<T> too long");
      }
      uVar4 = iVar5 + 1;
      uVar2 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0xe4)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0xdc))) >> 2;
      if (uVar2 < uVar4) {
        if (-(uVar2 >> 1) - 1 < uVar2) {
          uVar2 = 0;
        }
        else {
          uVar2 = uVar2 + (uVar2 >> 1);
        }
        if (uVar2 < uVar4) {
          uVar2 = uVar4;
        }
        F_00b872b0(&(*(undefined4 * PTR32 *)(gen_frame + 0xdc)),uVar2);
      }
    }
    if ((*(undefined4 * PTR32 *)(gen_frame + 0xe0)) != (undefined4 *)0x0) {
      *(*(undefined4 * PTR32 *)(gen_frame + 0xe0)) = *puVar7;
    }
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0xe0)) = (*(undefined4 * PTR32 *)(gen_frame + 0xe0)) + 1;
  puVar7 = (undefined4 *)((*(int *)(gen_frame + 0xec)) + 0x48);
  if ((puVar7 < (*(undefined4 * PTR32 *)(gen_frame + 0xe0))) && ((*(undefined4 * PTR32 *)(gen_frame + 0xdc)) <= puVar7)) {
    iVar5 = (int)puVar7 - (int)(*(undefined4 * PTR32 *)(gen_frame + 0xdc));
    if ((*(undefined4 * PTR32 *)(gen_frame + 0xe0)) == (*(undefined4 * PTR32 *)(gen_frame + 0xe4))) {
      iVar3 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0xe0)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0xdc))) >> 2;
      if (iVar3 == -1) {
                    
        F_00c4579a("vector<T> too long");
      }
      uVar4 = iVar3 + 1;
      uVar2 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0xe4)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0xdc))) >> 2;
      if (uVar2 < uVar4) {
        if (-(uVar2 >> 1) - 1 < uVar2) {
          uVar2 = 0;
        }
        else {
          uVar2 = uVar2 + (uVar2 >> 1);
        }
        if (uVar2 < uVar4) {
          uVar2 = uVar4;
        }
        F_00b872b0(&(*(undefined4 * PTR32 *)(gen_frame + 0xdc)),uVar2);
      }
    }
    if ((*(undefined4 * PTR32 *)(gen_frame + 0xe0)) == (undefined4 *)0x0) goto LAB_00b887a8;
    uVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0xdc))[iVar5 >> 2];
  }
  else {
    if ((*(undefined4 * PTR32 *)(gen_frame + 0xe0)) == (*(undefined4 * PTR32 *)(gen_frame + 0xe4))) {
      iVar5 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0xe0)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0xdc))) >> 2;
      if (iVar5 == -1) {
                    
        F_00c4579a("vector<T> too long");
      }
      uVar4 = iVar5 + 1;
      uVar2 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0xe4)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0xdc))) >> 2;
      if (uVar2 < uVar4) {
        if (-(uVar2 >> 1) - 1 < uVar2) {
          uVar2 = 0;
        }
        else {
          uVar2 = uVar2 + (uVar2 >> 1);
        }
        if (uVar2 < uVar4) {
          uVar2 = uVar4;
        }
        F_00b872b0(&(*(undefined4 * PTR32 *)(gen_frame + 0xdc)),uVar2);
      }
    }
    if ((*(undefined4 * PTR32 *)(gen_frame + 0xe0)) == (undefined4 *)0x0) goto LAB_00b887a8;
    uVar1 = *puVar7;
  }
  *(*(undefined4 * PTR32 *)(gen_frame + 0xe0)) = uVar1;
LAB_00b887a8: ;
  puVar7 = (undefined4 *)((*(int *)(gen_frame + 0xec)) + 0x4c);
  if ((puVar7 < (*(undefined4 * PTR32 *)(gen_frame + 0xb0))) && ((*(undefined4 * PTR32 *)(gen_frame + 0xac)) <= puVar7)) {
    iVar5 = (int)puVar7 - (int)(*(undefined4 * PTR32 *)(gen_frame + 0xac));
    if ((*(undefined4 * PTR32 *)(gen_frame + 0xb0)) == (*(undefined4 * PTR32 *)(gen_frame + 0xb4))) {
      iVar3 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0xb0)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0xac))) >> 2;
      if (iVar3 == -1) {
                    
        F_00c4579a("vector<T> too long");
      }
      uVar4 = iVar3 + 1;
      uVar2 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0xb4)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0xac))) >> 2;
      if (uVar2 < uVar4) {
        if (-(uVar2 >> 1) - 1 < uVar2) {
          uVar2 = 0;
        }
        else {
          uVar2 = uVar2 + (uVar2 >> 1);
        }
        if (uVar2 < uVar4) {
          uVar2 = uVar4;
        }
        F_00b87360(&(*(undefined4 * PTR32 *)(gen_frame + 0xac)),uVar2);
      }
    }
    if ((*(undefined4 * PTR32 *)(gen_frame + 0xb0)) != (undefined4 *)0x0) {
      *(*(undefined4 * PTR32 *)(gen_frame + 0xb0)) = (*(undefined4 * PTR32 *)(gen_frame + 0xac))[iVar5 >> 2];
    }
  }
  else {
    if ((*(undefined4 * PTR32 *)(gen_frame + 0xb0)) == (*(undefined4 * PTR32 *)(gen_frame + 0xb4))) {
      iVar5 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0xb0)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0xac))) >> 2;
      if (iVar5 == -1) {
                    
        F_00c4579a("vector<T> too long");
      }
      uVar4 = iVar5 + 1;
      uVar2 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0xb4)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0xac))) >> 2;
      if (uVar2 < uVar4) {
        if (-(uVar2 >> 1) - 1 < uVar2) {
          uVar2 = 0;
        }
        else {
          uVar2 = uVar2 + (uVar2 >> 1);
        }
        if (uVar2 < uVar4) {
          uVar2 = uVar4;
        }
        F_00b87360(&(*(undefined4 * PTR32 *)(gen_frame + 0xac)),uVar2);
      }
    }
    if ((*(undefined4 * PTR32 *)(gen_frame + 0xb0)) != (undefined4 *)0x0) {
      *(*(undefined4 * PTR32 *)(gen_frame + 0xb0)) = *puVar7;
    }
  }
  puVar7 = (undefined4 *)((*(int *)(gen_frame + 0xec)) + 0x50);
  if ((puVar7 < (*(undefined4 * PTR32 *)(gen_frame + 0xa0))) && ((*(undefined4 * PTR32 *)(gen_frame + 0x9c)) <= puVar7)) {
    iVar5 = (int)puVar7 - (int)(*(undefined4 * PTR32 *)(gen_frame + 0x9c));
    if ((*(undefined4 * PTR32 *)(gen_frame + 0xa0)) == (*(undefined4 * PTR32 *)(gen_frame + 0xa4))) {
      iVar3 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0xa0)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x9c))) >> 2;
      if (iVar3 == -1) {
                    
        F_00c4579a("vector<T> too long");
      }
      uVar4 = iVar3 + 1;
      uVar2 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0xa4)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x9c))) >> 2;
      if (uVar2 < uVar4) {
        if (-(uVar2 >> 1) - 1 < uVar2) {
          uVar2 = 0;
        }
        else {
          uVar2 = uVar2 + (uVar2 >> 1);
        }
        if (uVar2 < uVar4) {
          uVar2 = uVar4;
        }
        F_00b87360(&(*(undefined4 * PTR32 *)(gen_frame + 0x9c)),uVar2);
      }
    }
    if ((*(undefined4 * PTR32 *)(gen_frame + 0xa0)) != (undefined4 *)0x0) {
      *(*(undefined4 * PTR32 *)(gen_frame + 0xa0)) = (*(undefined4 * PTR32 *)(gen_frame + 0x9c))[iVar5 >> 2];
    }
  }
  else {
    if ((*(undefined4 * PTR32 *)(gen_frame + 0xa0)) == (*(undefined4 * PTR32 *)(gen_frame + 0xa4))) {
      iVar5 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0xa0)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x9c))) >> 2;
      if (iVar5 == -1) {
                    
        F_00c4579a("vector<T> too long");
      }
      uVar4 = iVar5 + 1;
      uVar2 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0xa4)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x9c))) >> 2;
      if (uVar2 < uVar4) {
        if (-(uVar2 >> 1) - 1 < uVar2) {
          uVar2 = 0;
        }
        else {
          uVar2 = uVar2 + (uVar2 >> 1);
        }
        if (uVar2 < uVar4) {
          uVar2 = uVar4;
        }
        F_00b87360(&(*(undefined4 * PTR32 *)(gen_frame + 0x9c)),uVar2);
      }
    }
    if ((*(undefined4 * PTR32 *)(gen_frame + 0xa0)) != (undefined4 *)0x0) {
      *(*(undefined4 * PTR32 *)(gen_frame + 0xa0)) = *puVar7;
    }
  }
  puVar7 = (*(undefined4 * PTR32 *)(gen_frame + 0x9c));
  iVar5 = (int)(*(uint * PTR32 *)(gen_frame + 0x50)) - (int)((int)(uintptr_t)(*(uint * PTR32 *)(gen_frame + 0x4c))) >> 1;
  if (iVar5 == 0) {
    if ((*(undefined4 * PTR32 *)(gen_frame + 0x9c)) != (undefined4 *)0x0) {
      F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x9c)),((int)(*(undefined4 * PTR32 *)(gen_frame + 0xa4)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x9c))) >> 2) * 4,0xd9);
    }
    if ((*(undefined4 * PTR32 *)(gen_frame + 0xac)) != (undefined4 *)0x0) {
      F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0xac)),((int)(*(undefined4 * PTR32 *)(gen_frame + 0xb4)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0xac))) >> 2) * 4,0xd9);
    }
    if ((*(undefined4 * PTR32 *)(gen_frame + 0xdc)) != (undefined4 *)0x0) {
      F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0xdc)),((int)(*(undefined4 * PTR32 *)(gen_frame + 0xe4)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0xdc))) >> 2) * 4,0xd9);
    }
    if ((*(undefined4 * PTR32 *)(gen_frame + 0xcc)) != (undefined4 *)0x0) {
      F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0xcc)),((int)(*(undefined4 * PTR32 *)(gen_frame + 0xd4)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0xcc))) >> 2) * 4,0xd9);
    }
    if ((*(undefined4 * PTR32 *)(gen_frame + 0x8c)) != (undefined4 *)0x0) {
      F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x8c)),((int)(*(undefined4 * PTR32 *)(gen_frame + 0x94)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x8c))) >> 2) * 4,0xd9);
    }
    if ((*(undefined4 * PTR32 *)(gen_frame + 0x7c)) != (undefined4 *)0x0) {
      F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x7c)),((int)(*(undefined4 * PTR32 *)(gen_frame + 0x84)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x7c))) >> 2) * 4,0xd9);
    }
    if ((*(undefined4 * PTR32 *)(gen_frame + 0x6c)) != (undefined4 *)0x0) {
      F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x6c)),((int)(*(undefined4 * PTR32 *)(gen_frame + 0x74)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x6c))) >> 2) * 4,0xd9);
    }
    if ((*(undefined4 * PTR32 *)(gen_frame + 0xbc)) != (undefined4 *)0x0) {
      F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0xbc)),((int)(*(undefined4 * PTR32 *)(gen_frame + 0xc4)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0xbc))) >> 2) * 4,0xd9);
    }
    if ((*(undefined4 * PTR32 *)(gen_frame + 0x5c)) != (undefined4 *)0x0) {
      F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x5c)),((int)(*(undefined4 * PTR32 *)(gen_frame + 0x64)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x5c))) >> 2) * 4,0xd9);
    }
    if ((*(uint * PTR32 *)(gen_frame + 0x4c)) != (uint *)0x0) {
      F_00429760((*(uint * PTR32 *)(gen_frame + 0x4c)),((int)(*(uint * PTR32 *)(gen_frame + 0x54)) - (int)((int)(uintptr_t)(*(uint * PTR32 *)(gen_frame + 0x4c))) >> 1) * 2,0xd9);
    }
    return 0;
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = (*(undefined4 * PTR32 *)(gen_frame + 0xbc));
  (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = (*(undefined4 * PTR32 *)(gen_frame + 0x7c));
  (*(undefined4 * PTR32 *)(gen_frame + 0x14)) = (*(undefined4 * PTR32 *)(gen_frame + 0x5c));
  (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = (*(undefined4 * PTR32 *)(gen_frame + 0xcc));
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = (*(undefined4 * PTR32 *)(gen_frame + 0x6c));
  (*(undefined4 * PTR32 *)(gen_frame + 0x30)) = (*(undefined4 * PTR32 *)(gen_frame + 0xac));
  (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = (*(undefined4 * PTR32 *)(gen_frame + 0x8c));
  (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)(param_2 + 0x18);
  (*(undefined4 * PTR32 *)(gen_frame + 0x2c)) = (*(undefined4 * PTR32 *)(gen_frame + 0xdc));
  (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(param_2 + 0x1c);
  (*(undefined4 * PTR32 *)(gen_frame + 0x34)) = (*(undefined4 * PTR32 *)(gen_frame + 0x9c));
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(param_2 + 0x20);
  uVar2 = F_00bbf180(param_1,iVar5,(*(uint * PTR32 *)(gen_frame + 0x4c)),&(*(undefined4 *)(gen_frame + 0x0)),&(*(undefined4 * PTR32 *)(gen_frame + 0x14)));
  if (puVar7 != (undefined4 *)0x0) {
    F_00429760(puVar7,((int)(*(undefined4 * PTR32 *)(gen_frame + 0xa4)) - (int)((int)(uintptr_t)puVar7) >> 2) * 4,0xd9);
  }
  if ((*(undefined4 * PTR32 *)(gen_frame + 0xac)) != (undefined4 *)0x0) {
    F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0xac)),((int)(*(undefined4 * PTR32 *)(gen_frame + 0xb4)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0xac))) >> 2) * 4,0xd9);
  }
  if ((*(undefined4 * PTR32 *)(gen_frame + 0xdc)) != (undefined4 *)0x0) {
    F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0xdc)),((int)(*(undefined4 * PTR32 *)(gen_frame + 0xe4)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0xdc))) >> 2) * 4,0xd9);
  }
  if ((*(undefined4 * PTR32 *)(gen_frame + 0xcc)) != (undefined4 *)0x0) {
    F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0xcc)),((int)(*(undefined4 * PTR32 *)(gen_frame + 0xd4)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0xcc))) >> 2) * 4,0xd9);
  }
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x8c)) != (undefined4 *)0x0) {
    F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x8c)),((int)(*(undefined4 * PTR32 *)(gen_frame + 0x94)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x8c))) >> 2) * 4,0xd9);
  }
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x7c)) != (undefined4 *)0x0) {
    F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x7c)),((int)(*(undefined4 * PTR32 *)(gen_frame + 0x84)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x7c))) >> 2) * 4,0xd9);
  }
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x6c)) != (undefined4 *)0x0) {
    F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x6c)),((int)(*(undefined4 * PTR32 *)(gen_frame + 0x74)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x6c))) >> 2) * 4,0xd9);
  }
  if ((*(undefined4 * PTR32 *)(gen_frame + 0xbc)) != (undefined4 *)0x0) {
    F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0xbc)),((int)(*(undefined4 * PTR32 *)(gen_frame + 0xc4)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0xbc))) >> 2) * 4,0xd9);
  }
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x5c)) != (undefined4 *)0x0) {
    F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x5c)),((int)(*(undefined4 * PTR32 *)(gen_frame + 0x64)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x5c))) >> 2) * 4,0xd9);
  }
  if ((*(uint * PTR32 *)(gen_frame + 0x4c)) != (uint *)0x0) {
    F_00429760((*(uint * PTR32 *)(gen_frame + 0x4c)),((int)(*(uint * PTR32 *)(gen_frame + 0x54)) - (int)((int)(uintptr_t)(*(uint * PTR32 *)(gen_frame + 0x4c))) >> 1) * 2,0xd9);
  }
  return uVar2;
}

/* ref: FUN_00b88ce0 */
byte F_00b88ce0(unsigned int gen_a0)
{
  GEN_ENTER(0xb88ce0u, gen_a0, 0u, 0u, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  byte bVar1;
  byte bVar2;
  int iVar3;
  
  if (4 < *param_1 - 1) {
    return 0;
  }
  bVar1 = param_1[1];
  if (((1 < bVar1) || (param_1[2] != 1)) || (100 < param_1[3])) {
    return 0;
  }
  if ((*param_1 - 1 == param_1[4] - 1 >> 1) &&
     (iVar3 = ((bVar1 - 2) + (uint)param_1[4] * 2) * 0x32,
     param_1[5] - 1 < (uint)(byte)(&REFG(undefined, 0x10f6320))[iVar3])) {
    bVar2 = param_1[6];
    if (bVar2 < 0x32) {
      if ((uint)(byte)(&REFG(undefined, 0x10f6327))[iVar3] <= bVar2 - 1) {
        return 0;
      }
    }
    else if (bVar2 < 100) {
      if ((uint)(byte)(&REFG(undefined, 0x10f6328))[iVar3] <= bVar2 - 0x33) {
        return 0;
      }
    }
    else if ((uint)(byte)(&REFG(undefined, 0x10f6329))[iVar3] <= bVar2 - 0x65) {
      return 0;
    }
    if (((param_1[0xe] <= (byte)(&REFG(undefined, 0x10f6321))[iVar3]) &&
        ((param_1[0x10] & 0x7f) <= (byte)(&REFG(undefined, 0x10f6323))[iVar3])) &&
       ((param_1[0x11] <= (byte)(&REFG(undefined, 0x10f6324))[iVar3] &&
        (((param_1[0x12] <= (byte)(&REFG(undefined, 0x10f6325))[iVar3] &&
          ((param_1[0x13] & 0x7f) <= (byte)(&REFG(undefined, 0x10f6326))[iVar3])) && (param_1[0x15] < 0x65)))))) {
      bVar2 = *param_1;
      if (1 < bVar2) {
        if (bVar2 < 4) {
          if (3 < param_1[0x16] - 1) {
            return 0;
          }
        }
        else if ((bVar2 == 4) && (7 < param_1[0x16] - 1)) {
          return 0;
        }
      }
      if ((bVar1 != 1) || (param_1[0x17] < 0x65)) {
        return (param_1[0x18] & 0x7f) < 0x1b;
      }
    }
  }
  return 0;
}

/* ref: FUN_00b88e00 */
uint F_00b88e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb88e00u, gen_a0, gen_a1, 0u, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte * pbVar4;
  undefined3 extraout_var = 0;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  
  iVar7 = 0x1a;
  pbVar4 = param_1;
  do {
    *pbVar4 = pbVar4[param_2 - (int)param_1];
    pbVar4 = pbVar4 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  bVar3 = F_00b88ce0(param_2);
  if (bVar3 != 0) {
    return CONCAT31(extraout_var,bVar3);
  }
  bVar3 = *param_1;
  if (4 < bVar3 - 1) {
    *param_1 = 1;
  }
  if (1 < param_1[1]) {
    param_1[1] = 0;
  }
  if (param_1[2] != 1) {
    param_1[2] = 1;
  }
  if (100 < param_1[3]) {
    param_1[3] = 0x32;
  }
  bVar2 = *param_1;
  uVar5 = CONCAT31((int3)(bVar3 - 1 >> 8),bVar2);
  if (bVar2 - 1 != param_1[4] - 1 >> 1) {
    param_1[4] = bVar2 * '\x02' - (param_1[4] & 1);
  }
  iVar1 = ((uint)param_1[1] + (uint)param_1[4] * 2) * 5 + -0xb + (uint)param_1[2];
  iVar7 = iVar1 * 10;
  if ((uint)(byte)(&REFG(undefined, 0x10f6320))[iVar1 * 10] <= param_1[5] - 1) {
    param_1[5] = 1;
  }
  bVar3 = param_1[6];
  if (bVar3 < 0x32) {
    uVar8 = (uint)(byte)(&REFG(undefined, 0x10f6327))[iVar7];
    uVar6 = bVar3 - 1;
  }
  else if (bVar3 < 100) {
    uVar8 = (uint)(byte)(&REFG(undefined, 0x10f6328))[iVar7];
    uVar6 = bVar3 - 0x33;
  }
  else {
    uVar8 = (uint)(byte)(&REFG(undefined, 0x10f6329))[iVar7];
    uVar6 = bVar3 - 0x65;
  }
  if (uVar8 <= uVar6) {
    param_1[6] = 1;
  }
  if ((byte)(&REFG(undefined, 0x10f6321))[iVar7] < param_1[0xe]) {
    param_1[0xe] = 0;
  }
  if ((byte)(&REFG(undefined, 0x10f6323))[iVar7] < (param_1[0x10] & 0x7f)) {
    param_1[0x10] = param_1[0x10] & 0x80;
  }
  if ((byte)(&REFG(undefined, 0x10f6324))[iVar7] < param_1[0x11]) {
    param_1[0x11] = 0;
  }
  if ((byte)(&REFG(undefined, 0x10f6325))[iVar7] < param_1[0x12]) {
    param_1[0x12] = 0;
  }
  if ((byte)(&REFG(undefined, 0x10f6326))[iVar7] < (param_1[0x13] & 0x7f)) {
    param_1[0x13] = param_1[0x13] & 0x80;
  }
  if (100 < param_1[0x15]) {
    param_1[0x15] = 0x32;
  }
  if (1 < bVar2) {
    if (bVar2 < 4) {
      bVar9 = param_1[0x16] - 1 < 4;
    }
    else {
      if (bVar2 != 4) goto LAB_00b88f6c;
      uVar5 = param_1[0x16] - 1;
      bVar9 = uVar5 < 8;
    }
    if (!bVar9) {
      param_1[0x16] = 1;
    }
  }
LAB_00b88f6c: ;
  if ((param_1[1] == 1) && (100 < param_1[0x17])) {
    param_1[0x17] = 0x32;
  }
  if (0x1a < (param_1[0x18] & 0x7f)) {
    param_1[0x18] = param_1[0x18] & 0x80;
  }
  return uVar5 & 0xffffff00;
}

/* ref: FUN_00b88fa0 */
uint F_00b88fa0(unsigned int gen_a0)
{
  GEN_ENTER(0xb88fa0u, gen_a0, 0u, 0u, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  int iVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  
  uVar3 = (uint)(4 < *param_1 - 1);
  if (1 < param_1[1]) {
    uVar3 = uVar3 | 2;
  }
  if (4 < param_1[2] - 1) {
    uVar3 = uVar3 | 4;
  }
  if ((100 < param_1[3]) && (param_1[3] != 0xff)) {
    uVar3 = uVar3 | 8;
  }
  if (*param_1 - 1 != param_1[4] - 1 >> 1) {
    uVar3 = uVar3 | 0x10;
  }
  iVar1 = (((uint)param_1[1] + (uint)param_1[4] * 2) * 5 + -0xb + (uint)param_1[2]) * 10;
  if (param_1[5] == 0) {
    uVar3 = uVar3 | 0x20;
  }
  if (param_1[6] == 0) {
    uVar3 = uVar3 | 0x40;
  }
  if ((byte)(&REFG(undefined, 0x10f6321))[iVar1] < param_1[0xe]) {
    uVar3 = uVar3 | 0x4000;
  }
  if ((byte)(&REFG(undefined, 0x10f6323))[iVar1] < (param_1[0x10] & 0x7f)) {
    uVar3 = uVar3 | 0x10000;
  }
  if ((byte)(&REFG(undefined, 0x10f6324))[iVar1] < param_1[0x11]) {
    uVar3 = uVar3 | 0x20000;
  }
  if ((byte)(&REFG(undefined, 0x10f6325))[iVar1] < param_1[0x12]) {
    uVar3 = uVar3 | 0x40000;
  }
  if ((byte)(&REFG(undefined, 0x10f6326))[iVar1] < (param_1[0x13] & 0x7f)) {
    uVar3 = uVar3 | 0x80000;
  }
  if (100 < param_1[0x15]) {
    uVar3 = uVar3 | 0x200000;
  }
  bVar2 = *param_1;
  if (1 < bVar2) {
    if (bVar2 < 4) {
      bVar4 = param_1[0x16] - 1 < 4;
    }
    else {
      if (bVar2 != 4) goto LAB_00b89098;
      bVar4 = param_1[0x16] - 1 < 8;
    }
    if (!bVar4) {
      uVar3 = uVar3 | 0x400000;
    }
  }
LAB_00b89098: ;
  if ((param_1[1] == 1) && (100 < param_1[0x17])) {
    uVar3 = uVar3 | 0x800000;
  }
  if (0x1a < (param_1[0x18] & 0x7f)) {
    uVar3 = uVar3 | 0x1000000;
  }
  return uVar3;
}

/* ref: FUN_00b890c0 */
undefined1 F_00b890c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb890c0u, gen_a0, gen_a1, 0u, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  byte bVar1;
  byte * pbVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  
  iVar4 = 0x1a;
  pbVar2 = param_1;
  do {
    *pbVar2 = pbVar2[param_2 - (int)param_1];
    pbVar2 = pbVar2 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  uVar3 = F_00b88fa0(param_2);
  if (uVar3 == 0) {
    return 1;
  }
  if (4 < *param_1 - 1) {
    *param_1 = 1;
  }
  if (1 < param_1[1]) {
    param_1[1] = 0;
  }
  if (4 < param_1[2] - 1) {
    param_1[2] = 1;
  }
  if (100 < param_1[3]) {
    param_1[3] = 0xff;
  }
  bVar1 = *param_1;
  if (bVar1 - 1 != param_1[4] - 1 >> 1) {
    param_1[4] = bVar1 * '\x02' - (param_1[4] & 1);
  }
  iVar4 = (((uint)param_1[1] + (uint)param_1[4] * 2) * 5 + -0xb + (uint)param_1[2]) * 10;
  if (param_1[5] == 0) {
    param_1[5] = 1;
  }
  if (param_1[6] == 0) {
    param_1[6] = 1;
  }
  if ((byte)(&REFG(undefined, 0x10f6321))[iVar4] < param_1[0xe]) {
    param_1[0xe] = 0;
  }
  if ((byte)(&REFG(undefined, 0x10f6323))[iVar4] < (param_1[0x10] & 0x7f)) {
    param_1[0x10] = 0;
  }
  if ((byte)(&REFG(undefined, 0x10f6324))[iVar4] < param_1[0x11]) {
    param_1[0x11] = 0;
  }
  if ((byte)(&REFG(undefined, 0x10f6325))[iVar4] < param_1[0x12]) {
    param_1[0x12] = 0;
  }
  if ((byte)(&REFG(undefined, 0x10f6326))[iVar4] < (param_1[0x13] & 0x7f)) {
    param_1[0x13] = 0;
  }
  if (100 < param_1[0x15]) {
    param_1[0x15] = 0x32;
  }
  if (1 < bVar1) {
    if (bVar1 < 4) {
      bVar5 = param_1[0x16] - 1 < 4;
    }
    else {
      if (bVar1 != 4) goto LAB_00b891fe;
      bVar5 = param_1[0x16] - 1 < 8;
    }
    if (!bVar5) {
      param_1[0x16] = 1;
    }
  }
LAB_00b891fe: ;
  if ((param_1[1] == 1) && (100 < param_1[0x17])) {
    param_1[0x17] = 0x32;
  }
  if (0x1a < (param_1[0x18] & 0x7f)) {
    param_1[0x18] = 0;
  }
  return 0;
}

/* ref: FUN_00b89230 */
uint F_00b89230(unsigned int gen_a0)
{
  GEN_ENTER(0xb89230u, gen_a0, 0u, 0u, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00a4b840();
  *param_1 = (char)((int)((uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f)) % 5) + '\x01';
  uVar1 = F_00a4b840();
  uVar1 = (uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f) & 0x80000001;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
  }
  param_1[1] = (char)uVar1;
  param_1[2] = '\x01';
  uVar1 = F_00a4b840();
  param_1[3] = (char)((int)((uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f)) % 0x65);
  uVar1 = F_00a4b840();
  uVar1 = (uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f) & 0x80000001;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
  }
  param_1[4] = (char)uVar1 + *param_1 * '\x02' + -1;
  uVar1 = F_00a4b840();
  uVar1 = (uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f) & 0x80000003;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
  }
  param_1[5] = (char)uVar1 + '\x01';
  uVar1 = F_00a4b840();
  uVar1 = (uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f) & 0x80000003;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
  }
  param_1[6] = (char)uVar1 + '\x01';
  uVar1 = F_00a4b840();
  uVar1 = (uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f) & 0x80000003;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
  }
  param_1[7] = (char)uVar1 + '\x01';
  uVar1 = F_00a4b840();
  param_1[8] = (char)((int)((uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f)) % 0xc0);
  uVar1 = F_00a4b840();
  param_1[9] = (char)((int)((uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f)) % 0xc0);
  uVar1 = F_00a4b840();
  param_1[10] = (char)((int)((uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f)) % 0xc0);
  uVar1 = F_00a4b840();
  param_1[0xb] = (char)((int)((uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f)) % 0xc0);
  uVar1 = F_00a4b840();
  param_1[0xc] = (char)((int)((uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f)) % 0xc0);
  uVar1 = F_00a4b840();
  param_1[0xd] = (char)((int)((uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f)) % 0xc0);
  uVar1 = F_00a4b840();
  param_1[0xe] = (char)((int)((uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f)) % 6);
  uVar1 = F_00a4b840();
  param_1[0xf] = (char)((int)((uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f)) % 0xc0);
  uVar1 = F_00a4b840();
  param_1[0x10] = (char)((int)((uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f)) % 6);
  uVar1 = F_00a4b840();
  param_1[0x11] = (char)((int)((uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f)) % 6);
  uVar1 = F_00a4b840();
  uVar1 = (uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f) & 0x80000003;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
  }
  param_1[0x12] = (char)uVar1;
  uVar1 = F_00a4b840();
  uVar1 = (uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f) & 0x80000003;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
  }
  param_1[0x13] = (char)uVar1;
  uVar1 = F_00a4b840();
  uVar1 = (uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f) & 0x80000007;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffff8) + 1;
  }
  param_1[0x14] = (char)uVar1;
  uVar1 = F_00a4b840();
  param_1[0x16] = '\x01';
  param_1[0x15] = (char)((int)((uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f)) % 0x65);
  uVar1 = F_00a4b840();
  param_1[0x17] = (char)((int)((uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f)) % 0x65);
  uVar1 = F_00a4b840();
  uVar1 = (uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f) & 0x80000007;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffff8) + 1;
  }
  param_1[0x18] = (char)uVar1;
  uVar1 = F_00a4b840();
  param_1[0x19] = (char)((int)((uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f)) % 0xc0);
  uVar1 = F_00b88e00(param_1,param_1);
  return uVar1;
}

/* ref: FUN_00b89480 */
byte F_00b89480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xb89480u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_ecx = (int)gen_a0;
  uint * in_edx = (uint *)(uintptr_t)gen_a1;
  uint in_ebx = (uint)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  int param_6 = (int)gen_a5;
  int param_7 = (int)gen_a6;
  uint uVar1;
  
  uVar1 = *(int *)(param_7 + in_ecx * 4) + param_6;
  if ((int)uVar1 < param_4) {
    *in_edx = *in_edx | 1 << ((byte)in_ecx & 0x1f);
    uVar1 = in_ebx;
  }
  if (param_5 < (int)uVar1) {
    *in_edx = *in_edx | 1 << ((byte)in_ecx & 0x1f);
    uVar1 = in_ebx & 0xff;
  }
  return (byte)uVar1;
}

/* ref: FUN_00b894b0 */
uint F_00b894b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb894b0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  byte bVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint local_38;
  int local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  uint local_10;
  uint local_c;
  char local_6;
  byte local_5;
  
  piVar3 = (*(int * PTR32 *)&gen_args[2]);
  iVar5 = 1;
  local_c = 0;
  local_5 = 1;
  local_6 = '\0';
  switch((unsigned int)(uintptr_t)((*(int *)&gen_args[1]))) {
  case 1: ;
    iVar5 = 1;
    local_5 = 1;
    local_6 = '\0';
    break;
  case 2: ;
    iVar5 = 2;
    local_5 = 1;
    local_6 = '\x01';
    break;
  case 3: ;
    iVar5 = 9;
    local_5 = 2;
    local_6 = '\0';
    break;
  case 4: ;
    iVar5 = 3;
    local_5 = 3;
    local_6 = '\0';
    break;
  case 5: ;
    iVar5 = 4;
    local_5 = 3;
    local_6 = '\x01';
    break;
  case 6: ;
    iVar5 = 3;
    local_5 = 4;
    local_6 = '\0';
    break;
  case 7: ;
    iVar5 = 4;
    local_5 = 4;
    local_6 = '\x01';
    break;
  case 8: ;
    iVar5 = 5;
    local_5 = 5;
    local_6 = '\0';
    break;
  case 9: ;
    iVar5 = 6;
    local_5 = 5;
    local_6 = '\x01';
    break;
  case 10: ;
    iVar5 = 5;
    local_5 = 6;
    local_6 = '\0';
    break;
  case 0xb: ;
    iVar5 = 6;
    local_5 = 6;
    local_6 = '\x01';
    break;
  case 0xc: ;
    iVar5 = 8;
    local_5 = 7;
    local_6 = '\x01';
    break;
  case 0xd: ;
    iVar5 = 8;
    local_5 = 8;
    local_6 = '\x01';
    break;
  case 0xe: ;
    iVar5 = 7;
    local_5 = 9;
    local_6 = '\0';
    break;
  case 0xf: ;
    iVar5 = 7;
    local_5 = 10;
    local_6 = '\0';
    break;
  default: ;
    (*(int *)&gen_args[1]) = 1;
    local_c = 0x40000;
  }
  iVar7 = (local_5 - 1 & 1) * -0x32;
  local_14 = *(*(int * PTR32 *)&gen_args[2]);
  if ((local_14 < 0) || (4 < local_14)) {
    local_c = local_c | 1;
    local_14 = 2;
  }
  local_20 = (*(int * PTR32 *)&gen_args[2])[2] + iVar7;
  if (((int)local_20 < 1) || (0x10 < (int)local_20)) {
    local_c = local_c | 4;
    local_20 = 1;
  }
  local_24 = (*(int * PTR32 *)&gen_args[2])[7] + iVar7;
  if (((int)local_24 < 1) || (0x10 < (int)local_24)) {
    local_c = local_c | 0x80;
    local_24 = 1;
  }
  local_10 = (*(int * PTR32 *)&gen_args[2])[8];
  if (((int)local_10 < 1) || (8 < (int)local_10)) {
    local_c = local_c | 0x100;
    local_10 = 1;
  }
  uVar4 = (*(int * PTR32 *)&gen_args[2])[0x10];
  if (((int)uVar4 < 0) || (0x1f < (int)uVar4)) {
    uVar4 = 0;
    local_c = local_c | 0x10000;
  }
  local_30 = (*(int * PTR32 *)&gen_args[2])[0x11];
  bVar2 = 0;
  if (((int)local_30 < 0) || (3 < (int)local_30)) {
    local_c = local_c | 0x20000;
    local_30 = 0;
  }
  local_34 = (*(int * PTR32 *)&gen_args[2])[0xb];
  if ((local_34 < 0) || (1 < local_34)) {
    local_c = local_c | 0x800;
    local_34 = 0;
  }
  local_38 = (*(int * PTR32 *)&gen_args[2])[0xe];
  if (((int)local_38 < 0) || (2 < (int)local_38)) {
    local_c = local_c | 0x4000;
    local_38 = 0;
  }
  local_18 = (*(int * PTR32 *)&gen_args[2])[3];
  if (((int)local_18 < 1) || (9 < (int)local_18)) {
    local_c = local_c | 8;
    local_18 = 1;
  }
  local_1c = (*(int * PTR32 *)&gen_args[2])[6];
  if (((int)local_1c < 0) || (3 < (int)local_1c)) {
    local_c = local_c | 0x40;
    local_1c = 0;
  }
  local_28 = (*(int * PTR32 *)&gen_args[2])[4] + iVar7;
  if (((int)local_28 < 1) || (0x20 < (int)local_28)) {
    local_c = local_c | 0x10;
    local_28 = 1;
  }
  local_2c = (*(int * PTR32 *)&gen_args[2])[5];
  if (((int)local_2c < 0) || (0x1f < (int)local_2c)) {
    local_c = local_c | 0x20;
    local_2c = 0;
  }
  iVar6 = (*(int *)&gen_args[1]) * 0x70;
  bVar1 = (&REFG(undefined1, 0x10f73f8))[uVar4 & 0xff];
  iVar7 = (((local_10 & 0xff) - 9) + iVar5 * 8) * 0x12;
  if ((bVar1 & 0x10) != 0) {
    bVar2 = (&REFG(undefined, 0x10f6709))[iVar7];
  }
  (*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[2]) + 3)))) = bVar2;
  if ((bVar1 & 8) != 0) {
    (*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[2]) + 3)))) = bVar2 | (&REFG(undefined, 0x10f670a))[iVar7];
  }
  if ((bVar1 & 4) != 0) {
    (*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[2]) + 3)))) = (*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[2]) + 3)))) | (&REFG(undefined, 0x10f670b))[iVar7];
  }
  if ((bVar1 & 2) != 0) {
    (*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[2]) + 3)))) = (*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[2]) + 3)))) | (&REFG(undefined, 0x10f670c))[iVar7];
  }
  if ((bVar1 & 1) != 0) {
    (*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[2]) + 3)))) = (*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[2]) + 3)))) | (&REFG(undefined, 0x10f670d))[iVar7];
  }
  if ((char)iVar5 == '\x06') {
    if ((char)local_10 == '\a') {
      (*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[2]) + 3)))) = (*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[2]) + 3)))) | 4;
    }
    else if ((char)local_10 == '\b') {
      (*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[2]) + 3)))) = (*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[2]) + 3)))) ^ 1 | 4;
    }
  }
  else if (((char)iVar5 == '\a') && ((char)local_10 == '\b')) {
    (*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[2]) + 3)))) = (*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[2]) + 3)))) | 1;
  }
  (*(char * PTR32 *)&gen_args[0])[1] = local_6;
  *(*(char * PTR32 *)&gen_args[0]) = (char)((int)(local_5 - 1) / 2) + '\x01';
  (*(char * PTR32 *)&gen_args[0])[3] = (char)local_14 * '\x19';
  (*(char * PTR32 *)&gen_args[0])[4] = local_5;
  (*(char * PTR32 *)&gen_args[0])[2] = '\x01';
  (*(char * PTR32 *)&gen_args[0])[5] = (&REFG(undefined, 0x10f6708))[iVar7];
  (*(char * PTR32 *)&gen_args[0])[6] = (&REFG(undefined, 0x10f6bf0))[(iVar5 * 9 + (local_18 & 0xff)) * 4 + (local_1c & 0xff)];
  (*(char * PTR32 *)&gen_args[0])[7] = -((char)piVar3[5] != '\0') & 0x80;
  (*(char * PTR32 *)&gen_args[0])[8] = (&REFG(undefined, 0x10f6cf8))[((local_20 & 0xff) - 1) + iVar6];
  (*(char * PTR32 *)&gen_args[0])[9] = (&REFG(undefined, 0x10f6d06))[(local_24 & 0xff) * 2 + iVar6];
  (*(char * PTR32 *)&gen_args[0])[10] = (&REFG(undefined, 0x10f6cf8))[(local_28 & 0xff) + 0x2f + iVar6];
  (*(char * PTR32 *)&gen_args[0])[0xb] = (&REFG(undefined, 0x10f6cf8))[(local_2c & 0xff) + 0x50 + iVar6];
  (*(char * PTR32 *)&gen_args[0])[0xc] = (*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[2]) + 3))));
  (*(char * PTR32 *)&gen_args[0])[0xd] = (&REFG(undefined, 0x10f6708) + iVar7)[(local_30 & 0xff) + 6];
  (*(char * PTR32 *)&gen_args[0])[0xe] = *(byte *)(piVar3 + 9) & 3;
  (*(char * PTR32 *)&gen_args[0])[0xf] = (&REFG(undefined, 0x10f6d07))[(local_24 & 0xff) * 2 + iVar6];
  (*(char * PTR32 *)&gen_args[0])[0x10] = ((&REFG(undefined, 0x10f6712))[iVar7] ^ (byte)local_34) * -0x80 + (*(byte *)(piVar3 + 10) & 7);
  (*(char * PTR32 *)&gen_args[0])[0x11] = *(byte *)(piVar3 + 0xc) & 7;
  (*(char * PTR32 *)&gen_args[0])[0x12] = *(byte *)(piVar3 + 0xf) & 3;
  (*(char * PTR32 *)&gen_args[0])[0x13] = *(byte *)(piVar3 + 0xd) & 3;
  (*(char * PTR32 *)&gen_args[0])[0x14] = '+';
  (*(char * PTR32 *)&gen_args[0])[0x15] = (&REFG(undefined, 0x10f6713))[(local_38 & 0xff) * 2 + iVar7];
  (*(char * PTR32 *)&gen_args[0])[0x16] = (&REFG(undefined, 0x10f6714))[(local_38 & 0xff) * 2 + iVar7];
  (*(char * PTR32 *)&gen_args[0])[0x17] = (&REFG(undefined, 0x10f6719))[iVar7];
  (*(char * PTR32 *)&gen_args[0])[0x18] = '\0';
  (*(char * PTR32 *)&gen_args[0])[0x19] = '$';
  if ((*(char * PTR32 *)&gen_args[0])[5] == '\0') {
    (*(char * PTR32 *)&gen_args[0])[5] = '\x01';
    local_c = local_c | 0x100;
  }
  return local_c;
}

/* ref: FUN_00b89900 */
uint F_00b89900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb89900u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 2: ;
    iVar4 = *(int *)(param_2 + 0xc);
    if ((iVar4 < 1) || (9 < iVar4)) {
      iVar4 = 1;
    }
    iVar2 = *(int *)(param_2 + 0x18);
    if ((iVar2 < 0) || (3 < iVar2)) {
      iVar2 = 0;
    }
    if (((char)iVar4 == '\x01') && ((char)iVar2 == '\x03')) {
      return 1;
    }
    break;
  case 0xb: ;
    iVar4 = *(int *)(param_2 + 0x20);
    if ((0 < iVar4) && (iVar4 < 9)) {
      cVar1 = (char)iVar4;
      if (cVar1 == '\x03') {
        uVar3 = *(uint *)(param_2 + 0x40);
        if (((int)uVar3 < 0) || (0x1f < (int)uVar3)) {
          uVar3 = 0;
        }
        if (((&REFG(undefined1, 0x10f7418))[uVar3 & 0xff] & 4) != 0) {
          return 2;
        }
      }
      else if (cVar1 == '\x04') {
        uVar3 = *(uint *)(param_2 + 0x40);
        if (((int)uVar3 < 0) || (0x1f < (int)uVar3)) {
          uVar3 = 0;
        }
        if (((&REFG(undefined1, 0x10f7418))[uVar3 & 0xff] & 4) != 0) {
          return 3;
        }
      }
      else if ((cVar1 == '\a') || (cVar1 == '\b')) {
        return 4;
      }
    }
  }
  return 0;
}

/* ref: FUN_00b89a00 */
uint F_00b89a00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb89a00u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  return (uint)(byte)(&REFG(undefined, 0x10f6320))[((param_2 + param_1 * 2) * 5 + -0xb + param_3) * 10];
}

/* ref: FUN_00b89a30 */
uint F_00b89a30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb89a30u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  return (uint)(byte)(&REFG(undefined, 0x10f6327))[((param_2 + param_1 * 2) * 5 + -0xb + param_3) * 10];
}

/* ref: FUN_00b89a60 */
uint F_00b89a60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb89a60u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  return (uint)(byte)(&REFG(undefined, 0x10f6328))[((param_2 + param_1 * 2) * 5 + -0xb + param_3) * 10];
}

/* ref: FUN_00b89a90 */
uint F_00b89a90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb89a90u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  return (uint)(byte)(&REFG(undefined, 0x10f6329))[((param_2 + param_1 * 2) * 5 + -0xb + param_3) * 10];
}

/* ref: FUN_00b89ae0 */
byte F_00b89ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb89ae0u, gen_a0, gen_a1, 0u, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  uint uVar2;
  
  if (param_2 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_2 + 8))(param_2,"ClassJob")));
    if (piVar1 != (int *)0x0) {
      piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,(uint)*param_1)));
      if (piVar1 != (int *)0x0) {
        uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
        if (uVar2 != 0) {
          return *((byte *)GEN_TOP((*(int *)(uVar2 + 4) + 0x40)));
        }
      }
    }
  }
  *param_1 = 4;
  return 2;
}

/* ref: FUN_00b89b90 */
unsigned int F_00b89b90(void)
{
  GEN_ENTER(0xb89b90u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00b89ba0 */
uint F_00b89ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb89ba0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00b89bb0 */
uint F_00b89bb0(unsigned int gen_a0)
{
  GEN_ENTER(0xb89bb0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0xffffffff;
  in_ecx[1] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00b89bc0 */
unsigned int F_00b89bc0(unsigned int gen_a0)
{
  GEN_ENTER(0xb89bc0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x10f7448));
  in_ecx[1] = 0x617774;
  in_ecx[2] = 0x1000300;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0xffffffff;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  return 0;
}

/* ref: Client::Graphics::Resource::AnimationWorkTable::vf1 */
uint F_00b89bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb89bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  uint * puVar4;
  uint uVar5;
  undefined4 uVar6;
  
  *(undefined4 *)(this + 4) = *param_1;
  *(undefined4 *)(this + 8) = param_1[1];
  *(undefined4 *)(this + 0xc) = param_1[2];
  *(undefined4 *)(this + 0x10) = param_1[3];
  if (*(int *)(this + 4) != 0x617774) {
    return 0;
  }
  uVar1 = *(uint *)(this + 0xc);
  *(undefined4 *)(this + 0x14) = param_1[4];
  *(undefined4 *)(this + 0x18) = param_1[5];
  uVar2 = 0x18;
  if (uVar1 != 0) {
    uVar6 = 0;
    uVar2 = F_00404250();
    uVar5 = -(uint)((int)((ulonglong)uVar1 * 8 >> 0x20) != 0) | (uint)((ulonglong)uVar1 * 8);
    puVar3 = (uint *)F_00406c00(-(uint)(0xfffffffb < uVar5) | uVar5 + 4,0,uVar2,uVar6);
    if (puVar3 == (uint *)0x0) {
      puVar3 = (uint *)0x0;
    }
    else {
      *puVar3 = uVar1;
      puVar3 = puVar3 + 1;
      puVar4 = puVar3;
      while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
        *puVar4 = 0xffffffff;
        puVar4[1] = 0;
        puVar4 = puVar4 + 2;
      }
    }
    *(uint * PTR32 *)(this + 0x1c) = puVar3;
    F_00c46aa0(puVar3,param_1 + 6,*(int *)(this + 0xc) * 8);
    uVar2 = *(int *)(this + 0xc) * 8 + 0x18;
  }
  return uVar2;
}

/* ref: FUN_00b89cc0 */
uint F_00b89cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb89cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int * piVar2;
  
  uVar1 = 0;
  if (*(uint *)((int)this + 0xc) != 0) {
    piVar2 = *(int * PTR32 *)((int)this + 0x1c);
    do {
      if (param_1 == *piVar2) {
        return (uint)(*(int * PTR32 *)((int)this + 0x1c) + uVar1 * 2);
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 2;
    } while (uVar1 < *(uint *)((int)this + 0xc));
  }
  return (int)this + 0x14;
}

/* ref: FUN_00b89d00 */
uint F_00b89d00(unsigned int gen_a0)
{
  GEN_ENTER(0xb89d00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10f7448));
  uVar1 = 0;
  if (*(int *)((int)this + 0x1c) != 0) {
    uVar2 = F_00406b30(*(int *)((int)this + 0x1c) + -4);
    uVar1 = (uint)uVar2;
    *(undefined4 *)((int)this + 0x1c) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10f743c));
  return uVar1;
}

/* ref: Client::Graphics::Animation::Iserialization::vf0 */
uint F_00b89d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb89d50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10f743c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b89d80 */
uint F_00b89d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb89d80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((param_1 & 2) == 0) {
    if ((param_1 & 1) != 0) {
      F_00406ad0(this);
    }
  }
  else {
    this = (undefined *)((int)this - 4);
    if ((param_1 & 1) != 0) {
      F_00406b30(this);
      return (uint)this;
    }
  }
  return (uint)this;
}

/* ref: Client::Graphics::Resource::AnimationWorkTable::vf0 */
uint F_00b89dc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb89dc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10f7448));
  if (*(int *)(this + 0x1c) != 0) {
    F_00406b30(*(int *)(this + 0x1c) + -4);
    *(undefined4 *)(this + 0x1c) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10f743c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b89e20 */
float10 F_00b89e20(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xb89e20u, gen_a0, gen_a1, 0u, 0u);
  uint in_eax = (uint)gen_a0;
  int * in_edi = (int *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  int iVar1;
  
  iVar1 = *in_edi;
  if (((iVar1 == 0) || (iVar1 == 1)) && (0x14 < in_eax)) {
    return (float10)0;
  }
  return (float10)((float)GEN_TOF((((float10)((float)GEN_TOF((&REFG(float, 0x10f7450))
                                           [iVar1 + ((in_edi[1] + in_eax) % 0x3d) * 4])) *
                          (float10)param_3) * ((float10)GEN_TOD(gen_bits2f(in_edi[2]))))));
}

/* ref: FUN_00b89e70 */
unsigned int F_00b89e70(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xb89e70u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  float * pfVar2;
  float10 fVar3;
  float10 fVar4;
  uint local_20;
  int local_18;
  uint local_10;
  float local_c;
  float local_8;
  
  if ((*(int *)(param_1 + 0x114) != 0) &&
     ((*(char *)(param_1 + 0x118) != '\0' || (*(char *)(param_1 + 0x119) != '\0')))) {
    local_8 = REFG(float, 0x1087f04);
    local_c = REFG(float, 0x1087f04);
    local_10 = (uint)(*(char *)(param_1 + 0x119) != '\0');
    fVar3 = (float10)*(double *)&REFG(double, 0x10f7830);
    pfVar2 = (float *)(param_1 + 0x18);
    local_18 = 7;
    do {
      if (*(char *)(pfVar2 + -3) != '\0') {
        fVar4 = (float10)pfVar2[4];
        if (fVar4 < (float10)pfVar2[5]) {
          fVar1 = pfVar2[-2];
          local_20 = (uint)(longlong)TRUNC(fVar4 * fVar3);
          if (((fVar1 == 0.0) || (fVar1 == 1.4013e-45)) && (0x14 < local_20)) {
            local_8 = 0.0;
          }
          else {
            local_8 = ((float)GEN_TOF((((float10)((float)GEN_TOF((&REFG(float, 0x10f7450))
                                               [(int)gen_fl2bits(fVar1) +
                                                (((int)gen_fl2bits(pfVar2[-1]) + local_20) % 0x3d) *
                                                4])) * (float10)local_8) * (float10)*pfVar2)));
          }
          fVar1 = pfVar2[1];
          if (((fVar1 == 0.0) || (fVar1 == 1.4013e-45)) && (0x14 < local_20)) {
            local_10 = local_10 + 1;
            local_c = 0.0;
            pfVar2[4] = (float)(fVar4 + (float10)param_2);
          }
          else {
            local_10 = local_10 + 1;
            local_c = ((float)GEN_TOF((((float10)((float)GEN_TOF((&REFG(float, 0x10f7450))
                                               [(int)gen_fl2bits(fVar1) +
                                                (((int)gen_fl2bits(pfVar2[2]) + local_20) % 0x3d) *
                                                4])) * (float10)local_c) * (float10)pfVar2[3])));
            pfVar2[4] = (float)(fVar4 + (float10)param_2);
          }
        }
        else {
          *(undefined1 *)(pfVar2 + -3) = 0;
        }
      }
      pfVar2 = pfVar2 + 9;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
    if (local_10 == 0) {
      *(int *)(param_1 + 0x11c) = *(int *)(param_1 + 0x11c) + 1;
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0x108) = 0;
      *(undefined4 *)(param_1 + 0x10c) = 0;
      if (3 < *(uint *)(param_1 + 0x11c)) {
        *(undefined2 *)(param_1 + 0x118) = 0;
        *(undefined4 *)(param_1 + 0x11c) = 0;
        return 0;
      }
    }
    else {
      if (*(int *)(param_1 + 0x114) == 1) {
        *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_1 + 4);
        fVar3 = (float10)*(float *)(param_1 + 8);
      }
      else {
        if ((*(int *)(param_1 + 0x114) != 2) && (*(char *)(param_1 + 0x119) != '\0')) {
          local_8 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 4) * (float10)local_8)));
          local_c = ((float)GEN_TOF(((float10)*(float *)(param_1 + 8) * (float10)local_c)));
        }
        fVar3 = (float10)*(double *)&REFG(undefined, 0x1088118);
        *(float *)(param_1 + 0x108) = (float)((float10)local_8 * fVar3);
        fVar3 = fVar3 * (float10)local_c;
      }
      *(float *)(param_1 + 0x10c) = (float)fVar3;
      *(undefined1 *)(param_1 + 0x119) = 0;
    }
  }
  return 0;
}

/* ref: FUN_00b8a090 */
byte F_00b8a090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb8a090u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if ((*(char *)(in_ecx + 0x118) == '\0') && (*(char *)(in_ecx + 0x119) == '\0')) {
    *param_2 = 0;
    param_2[1] = 0;
    return 0;
  }
  *param_2 = *(undefined4 *)(in_ecx + 0x108);
  param_2[1] = *(undefined4 *)(in_ecx + 0x10c);
  return 1;
}

/* ref: FUN_00b8a0e0 */
uint F_00b8a0e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb8a0e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  *(undefined4 *)(in_ecx + 4) = *param_2;
  uVar1 = param_2[1];
  *(undefined1 *)(in_ecx + 0x119) = 1;
  *(undefined4 *)(in_ecx + 8) = uVar1;
  return (uint)param_2;
}

/* ref: FUN_00b8a100 */
uint F_00b8a100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb8a100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  char * pcVar2;
  
  *(undefined1 *)((int)this + 0x118) = 1;
  uVar1 = 0;
  pcVar2 = (char *)((int)this + 0xc);
  do {
    if (*pcVar2 == '\0') {
      *(undefined1 *)((int)this + uVar1 * 0x24 + 0xc) = 1;
      *(undefined4 *)((int)this + uVar1 * 0x24 + 0x10) = *param_1;
      *(undefined4 *)((int)this + uVar1 * 0x24 + 0x14) = param_1[1];
      *(undefined4 *)((int)this + uVar1 * 0x24 + 0x18) = param_1[2];
      *(undefined4 *)((int)this + uVar1 * 0x24 + 0x1c) = param_1[3];
      *(undefined4 *)((int)this + uVar1 * 0x24 + 0x20) = param_1[4];
      *(undefined4 *)((int)this + uVar1 * 0x24 + 0x24) = param_1[5];
      *(undefined4 *)((int)this + uVar1 * 0x24 + 0x28) = 0;
      *(undefined4 *)((int)this + uVar1 * 0x24 + 0x2c) = param_1[6];
      return 1;
    }
    uVar1 = uVar1 + 1;
    pcVar2 = pcVar2 + 0x24;
  } while (uVar1 < 7);
  return 0;
}

/* ref: FUN_00b8a1b0 */
uint F_00b8a1b0(unsigned int gen_a0)
{
  GEN_ENTER(0xb8a1b0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10f782c));
  in_ecx[0x44] = 0;
  in_ecx[0x45] = 3;
  *(undefined1 *)((int)in_ecx + 0x119) = 0;
  in_ecx[0x47] = 0;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  *(undefined1 *)(in_ecx + 3) = 0;
  *(undefined1 *)(in_ecx + 0xc) = 0;
  *(undefined1 *)(in_ecx + 0x15) = 0;
  *(undefined1 *)(in_ecx + 0x1e) = 0;
  *(undefined1 *)(in_ecx + 0x27) = 0;
  *(undefined1 *)(in_ecx + 0x30) = 0;
  *(undefined1 *)(in_ecx + 0x39) = 0;
  in_ecx[0x42] = 0;
  in_ecx[0x43] = 0;
  *(undefined1 *)(in_ecx + 0x46) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00b8a220 */
byte F_00b8a220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb8a220u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x118) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00b8a240 */
byte F_00b8a240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb8a240u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x119) = (byte)param_2;
  return (byte)param_2;
}

/* ref: Client::System::Input::VibrationControl::vf0 */
uint F_00b8a260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb8a260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10f782c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Input::MouseDevice::vf5 */
uint F_00b8a2a0(void)
{
  GEN_ENTER(0xb8a2a0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c58d4) = 0;
  *(undefined4 *)&REFG(undefined, 0x14c58dc) = 0;
  *(undefined4 *)&REFG(undefined, 0x14c58d8) = 0;
  *(undefined4 *)&REFG(undefined, 0x14c58cc) = 0;
  return 0;
}

/* ref: Client::System::Input::MouseDevice::vf6 */
unsigned int F_00b8a2c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb8a2c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  
  if (*(int *)(this + 0x18) != 0) {
    piVar1 = *(int * PTR32 *)(this + 0x18);
    if ((char)param_1 != '\0') {
      ((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1);
      return 0;
    }
    ((code *)*(gen_code32 *)(*piVar1 + 0x20))(piVar1);
  }
  return 0;
}

/* ref: FUN_00b8a2f0 */
uint F_00b8a2f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb8a2f0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  REFG(undefined4, 0x14c58bc) = param_1;
  REFG(undefined4, 0x14c58c0) = param_2;
  REFG(undefined1, 0x14c58b9) = 1;
  return param_1;
}

/* ref: FUN_00b8a310 */
uint F_00b8a310(unsigned int gen_a0)
{
  GEN_ENTER(0xb8a310u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  HWND hWnd;
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  if ((char)param_1 != '\0') {
    hWnd = gen_imp_GetActiveWindow();
    gen_imp_GetClientRect(hWnd,&(*(tagRECT *)(gen_frame + 0x8)));
    gen_imp_ClientToScreen(hWnd,&(*(tagRECT *)(gen_frame + 0x8)));
    gen_imp_ClientToScreen(hWnd,&(*(tagRECT *)(gen_frame + 0x8)).right);
    uVar1 = gen_imp_ClipCursor(&(*(tagRECT *)(gen_frame + 0x8)));
    F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
    return uVar1;
  }
  uVar1 = gen_imp_ClipCursor((RECT *)0x0);
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar1;
}

/* ref: FUN_00b8a380 */
uint F_00b8a380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb8a380u, gen_a0, gen_a1, gen_a2, gen_a3);
  HWND param_1 = (HWND)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  HWND pHVar1;
  uint uVar2;
  int iVar3;
  
  REFG(undefined1, 0x14c58b8) = 1;
  pHVar1 = gen_imp_GetActiveWindow();
  if (param_1 != pHVar1) goto switchD_00b8a3b6_default;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0x200: ;
    gen_imp_GetCursorPos(&(*(tagPOINT *)(gen_frame + 0x4)));
    gen_imp_ScreenToClient(param_1,&(*(tagPOINT *)(gen_frame + 0x4)));
    *(LONG *)&REFG(undefined, 0x14c58c4) = (*(tagPOINT *)(gen_frame + 0x4)).x;
    *(LONG *)&REFG(undefined, 0x14c58c8) = (*(tagPOINT *)(gen_frame + 0x4)).y;
    break;
  case 0x201: ;
    uVar2 = 1;
    goto LAB_00b8a3c2;
  case 0x202: ;
    REFG(undefined4, 0x14c58d0) = REFG(undefined4, 0x14c58d0) & 0xfffffffe;
    *(uint *)&REFG(undefined, 0x14c58dc) = *(uint *)&REFG(undefined, 0x14c58dc) | 1;
    gen_imp_ReleaseCapture();
    break;
  case 0x203: ;
    REFG(undefined4, 0x14c58d0) = REFG(undefined4, 0x14c58d0) | 1;
    *(uint *)&REFG(undefined, 0x14c58d8) = *(uint *)&REFG(undefined, 0x14c58d8) | 1;
    break;
  case 0x204: ;
    uVar2 = 4;
    goto LAB_00b8a3c2;
  case 0x205: ;
    REFG(undefined4, 0x14c58d0) = REFG(undefined4, 0x14c58d0) & 0xfffffffb;
    *(uint *)&REFG(undefined, 0x14c58dc) = *(uint *)&REFG(undefined, 0x14c58dc) | 4;
    gen_imp_ReleaseCapture();
    break;
  case 0x206: ;
    REFG(undefined4, 0x14c58d0) = REFG(undefined4, 0x14c58d0) | 4;
    *(uint *)&REFG(undefined, 0x14c58d8) = *(uint *)&REFG(undefined, 0x14c58d8) | 4;
    break;
  case 0x207: ;
    uVar2 = 2;
    goto LAB_00b8a3c2;
  case 0x208: ;
    REFG(undefined4, 0x14c58d0) = REFG(undefined4, 0x14c58d0) & 0xfffffffd;
    *(uint *)&REFG(undefined, 0x14c58dc) = *(uint *)&REFG(undefined, 0x14c58dc) | 2;
    gen_imp_ReleaseCapture();
    break;
  case 0x209: ;
    REFG(undefined4, 0x14c58d0) = REFG(undefined4, 0x14c58d0) | 2;
    *(uint *)&REFG(undefined, 0x14c58d8) = *(uint *)&REFG(undefined, 0x14c58d8) | 2;
    break;
  case 0x20a: ;
    iVar3 = REFG(int, 0x14c58b4) + (short)(param_3 >> 0x10);
    *(int *)&REFG(undefined, 0x14c58cc) = iVar3 / 0x78;
    REFG(int, 0x14c58b4) = iVar3 % 0x78;
    break;
  case 0x20b: ;
    uVar2 = 8;
    if (param_3 >> 0x10 != 1) {
      uVar2 = 0x10;
    }
LAB_00b8a3c2: ;
    REFG(undefined4, 0x14c58d0) = REFG(undefined4, 0x14c58d0) | uVar2;
    *(uint *)&REFG(undefined, 0x14c58d4) = *(uint *)&REFG(undefined, 0x14c58d4) | uVar2;
    gen_imp_SetCapture(param_1);
    break;
  case 0x20c: ;
    if (param_3 >> 0x10 == 1) {
      REFG(undefined4, 0x14c58d0) = REFG(undefined4, 0x14c58d0) & 0xfffffff7;
      *(uint *)&REFG(undefined, 0x14c58dc) = *(uint *)&REFG(undefined, 0x14c58dc) | 8;
      gen_imp_ReleaseCapture();
    }
    else {
      REFG(undefined4, 0x14c58d0) = REFG(undefined4, 0x14c58d0) & 0xffffffef;
      *(uint *)&REFG(undefined, 0x14c58dc) = *(uint *)&REFG(undefined, 0x14c58dc) | 0x10;
      gen_imp_ReleaseCapture();
    }
    break;
  case 0x20d: ;
    if (param_3 >> 0x10 == 1) {
      REFG(undefined4, 0x14c58d0) = REFG(undefined4, 0x14c58d0) | 8;
      *(uint *)&REFG(undefined, 0x14c58d8) = *(uint *)&REFG(undefined, 0x14c58d8) | 8;
    }
    else {
      REFG(undefined4, 0x14c58d0) = REFG(undefined4, 0x14c58d0) | 0x10;
      *(uint *)&REFG(undefined, 0x14c58d8) = *(uint *)&REFG(undefined, 0x14c58d8) | 0x10;
    }
  }
switchD_00b8a3b6_default: ;
  if (param_2 == 6) {
    if ((short)param_3 != 0) {
      return 0;
    }
  }
  else if ((param_2 != 0x211) && (param_2 != 0x231)) {
    return 0;
  }
  *(uint *)&REFG(undefined, 0x14c58dc) = *(uint *)&REFG(undefined, 0x14c58dc) | REFG(undefined4, 0x14c58d0);
  REFG(undefined4, 0x14c58d0) = 0;
  return 0;
}

/* ref: FUN_00b8a620 */
uint F_00b8a620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb8a620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x10f783c));
  F_00b105f0((undefined *)((int)this + 4),5,1);
  F_00b10a80((undefined *)((int)this + 0x14));
  *(undefined4 *)((int)this + 0x1c) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x10f786c));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x10f7864));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x14) = (*(undefined * PTR32 (*)[1])REFP(0x10f785c));
  *(undefined4 *)((int)this + 0x18) = 0;
  return (uint)this;
}

/* ref: Client::System::Input::MouseDevice::vf2 */
uint F_00b8a750(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xb8a750u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  BOOL BVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = (int *)(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c));
  (*(int * PTR32 *)(gen_frame + 0x28)) = piVar1;
  if (REFG(char, 0x14c58b8) == '\x01') {
    piVar1 = (int *)(REFG(int, 0x137104c) + 0x1274);
    LOCK();
    iVar3 = *piVar1;
    *piVar1 = *piVar1;
    UNLOCK();
    if (iVar3 == 0) {
      if (REFG(char, 0x14c58b9) != '\0') {
        (*(tagPOINT *)(gen_frame + 0xc)).x = REFG(int, 0x14c58bc);
        (*(tagPOINT *)(gen_frame + 0xc)).y = REFG(int, 0x14c58c0);
        BVar2 = gen_imp_ClientToScreen(*((HWND *)GEN_TOP((*(int *)(param_1 + 0x1c) + 8))),&(*(tagPOINT *)(gen_frame + 0xc)));
        if (BVar2 != 0) {
          gen_imp_SetCursorPos((*(tagPOINT *)(gen_frame + 0xc)).x,(*(tagPOINT *)(gen_frame + 0xc)).y);
        }
        REFG(char, 0x14c58b9) = '\0';
      }
      gen_imp_GetCursorPos(&(*(tagPOINT *)(gen_frame + 0x4)));
      gen_imp_ScreenToClient(*((HWND *)GEN_TOP((*(int *)(param_1 + 0x1c) + 8))),&(*(tagPOINT *)(gen_frame + 0x4)));
      iVar3 = (*(tagPOINT *)(gen_frame + 0x4)).y - *(int *)&REFG(undefined, 0x14c58c8);
      *(int *)&REFG(undefined, 0x14c58c8) = (*(tagPOINT *)(gen_frame + 0x4)).y;
      iVar4 = (*(tagPOINT *)(gen_frame + 0x4)).x - *(int *)&REFG(undefined, 0x14c58c4);
      *(int *)&REFG(undefined, 0x14c58c4) = (*(tagPOINT *)(gen_frame + 0x4)).x;
      *(uint *)&REFG(undefined, 0x14c58e0) = F_00b10660(param_1 + 4,param_2,REFG(undefined4, 0x14c58d0),0);
      piVar1 = (int *)0x0;
      *(int *)&REFG(undefined, 0x14c58e4) = iVar4;
      *(int *)&REFG(undefined, 0x14c58e8) = iVar3;
      if (*(int *)(param_1 + 0x18) != 0) {
        *(int *)&REFG(undefined, 0x14c58e4) = 0;
        *(int *)&REFG(undefined, 0x14c58e8) = 0;
        do {
          (*(tagPOINT *)(gen_frame + 0xc)).y = 1;
          piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x18) + 0x28))))
                                    (*(int * PTR32 *)(param_1 + 0x18),0x14,&(*(int *)(gen_frame + 0x14)),&(*(tagPOINT *)(gen_frame + 0xc)).y,0)));
          if (piVar1 == (int *)0x8007001e) {
            ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x18) + 0x1c))))(*(int * PTR32 *)(param_1 + 0x18));
          }
          else if (((int)piVar1 < 0) || ((*(tagPOINT *)(gen_frame + 0xc)).y == 0)) break;
          if ((*(int *)(gen_frame + 0x14)) == 0) {
            *(int *)&REFG(undefined, 0x14c58e4) = *(int *)&REFG(undefined, 0x14c58e4) + (*(int *)(gen_frame + 0x18));
          }
          else if ((*(int *)(gen_frame + 0x14)) == 4) {
            *(int *)&REFG(undefined, 0x14c58e8) = *(int *)&REFG(undefined, 0x14c58e8) + (*(int *)(gen_frame + 0x18));
          }
        } while( true );
      }
    }
  }
  F_00c47745((uint)(*(int * PTR32 *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return (uint)piVar1;
}

/* ref: Client::System::Input::MouseDeviceInterface::vf6 */
unsigned int F_00b8a9a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb8a9a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::System::Input::MouseDeviceInterface::vf0 */
uint F_00b8a9b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb8a9b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x10f783c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b8a9e0 */
uint F_00b8a9e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb8a9e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b8aa10((undefined *)((int)this + -4),param_1);
  return uVar1;
}

/* ref: FUN_00b8a9f0 */
uint F_00b8a9f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb8a9f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b8aa10((undefined *)((int)this + -0x14),param_1);
  return uVar1;
}

/* ref: Client::System::Input::MouseDevice::vf4 */
uint F_00b8aa00(void)
{
  GEN_ENTER(0xb8aa00u, 0u, 0u, 0u, 0u);
  return 0x14c58c4;
}

/* ref: Client::System::Input::MouseDevice::vf0 */
uint F_00b8aa10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb8aa10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b8a910(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b8aa50 */
unsigned int F_00b8aa50(float gen_a0)
{
  GEN_ENTER(0xb8aa50u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00b8aa70 */
unsigned int F_00b8aa70(float gen_a0)
{
  GEN_ENTER(0xb8aa70u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00b8aab0 */
uint F_00b8aab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb8aab0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0x20) = param_1;
  *(undefined1 *)((int)this + 0x24) = (undefined1)param_2;
  *(undefined2 *)((int)this + 0x25) = 0;
  return param_1;
}

/* ref: FUN_00b8ab00 */
uint F_00b8ab00(unsigned int gen_a0)
{
  GEN_ENTER(0xb8ab00u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (uint)(&REFG(undefined * PTR32, 0x10f8534))[param_1];
}

/* ref: Client::Game::InstanceContent::InstanceContentDirector::vf143 */
uint F_00b8ab10(unsigned int gen_a0)
{
  GEN_ENTER(0xb8ab10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_006c4fa0((undefined *)this);
  uVar1 = F_00a51200(0x4c,0,0,0,0);
  return uVar1;
}

/* ref: FUN_00b8ab30 */
uint F_00b8ab30(unsigned int gen_a0)
{
  GEN_ENTER(0xb8ab30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x2ac))(this);
  if ((char)uVar1 == '\x01') {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x27c))(this);
    if ((char)uVar1 == '\x01') {
      uVar1 = F_006bccd0(this);
      return uVar1;
    }
  }
  else {
    uVar1 = F_00a51200(0x4c,4,0,0,0);
  }
  return uVar1;
}

/* ref: Client::Game::InstanceContent::InstanceContentDirector::vf144 */
uint F_00b8ab70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb8ab70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  if ((char)param_1 == '\x01') {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x2ac))(this);
    if ((char)uVar1 != '\x01') {
      uVar1 = F_00a51200(0x4c,4,0,0,0);
      return uVar1;
    }
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x27c))(this);
    if ((char)uVar1 == '\x01') {
      uVar1 = F_006bccd0(this);
      return uVar1;
    }
  }
  else {
    uVar1 = F_00a51200(0x4c,5,0,0,0);
  }
  return uVar1;
}

/* ref: Client::Game::InstanceContent::InstanceContentDirector::vf172 */
unsigned int F_00b8abe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb8abe0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Client::Game::InstanceContent::InstanceContentDirector::vf159 */
byte F_00b8abf0(void)
{
  GEN_ENTER(0xb8abf0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::Game::InstanceContent::InstanceContentDirector::vf39 */
uint F_00b8ac00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb8ac00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_006e90c0((undefined *)this,param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00b8ac20 */
uint F_00b8ac20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb8ac20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0x954) = param_1;
  *(undefined1 *)((int)this + 0x99e) = (undefined1)param_2;
  return param_1;
}

/* ref: FUN_00b8ac70 */
uint F_00b8ac70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb8ac70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)(&REFG(undefined, 0x10f8550) + ((uint)*(byte *)((int)this + 0x98c) + param_1 * 6) * 4) != 0) {
    uVar1 = F_006c6500(*(int *)(&REFG(undefined, 0x10f8550) +
                                 ((uint)*(byte *)((int)this + 0x98c) + param_1 * 6) * 4));
  }
  return uVar1;
}

/* ref: FUN_00b8aca0 */
uint F_00b8aca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb8aca0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 < 7) {
    return param_2 * 0x54 + 0x6f4 + in_ecx;
  }
  return (param_2 - *(int *)(in_ecx + 0x97c)) * 0x54 + *(int *)(in_ecx + 0x94c);
}

/* ref: FUN_00b8acd0 */
uint F_00b8acd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb8acd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_006bd080(this,param_1,param_2,param_3);
  return uVar1;
}

/* ref: Client::Game::InstanceContent::InstanceContentDirector::vf162 */
unsigned int F_00b8ace0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb8ace0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: FUN_00b8acf0 */
uint F_00b8acf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb8acf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint in_EAX = 0;
  
  if (param_1 == 0) {
    F_00ab6b60();
    *(undefined2 *)((int)this + 0x988) = 0;
    return 0;
  }
  if (param_1 != *(ushort *)((int)this + 0x988)) {
    in_EAX = F_00ab6ad0(param_1);
    *(short *)((int)this + 0x988) = (short)param_1;
  }
  return in_EAX;
}

/* ref: FUN_00b8ad40 */
uint F_00b8ad40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb8ad40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  uint uVar2;
  
  if (param_2 < 7) {
    iVar1 = param_2 * 0x54 + 0x6f4 + (int)this;
  }
  else {
    iVar1 = (param_2 - *(int *)((int)this + 0x97c)) * 0x54 + *(int *)((int)this + 0x94c);
  }
  uVar2 = F_007143e0(this,iVar1,param_3,param_1 * 0x54 + 0x400 + (int)this);
  return uVar2;
}

/* ref: Client::Game::InstanceContent::InstanceContentDirector::vf163 */
uint F_00b8ad90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb8ad90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_006bccd0(this);
  return uVar1;
}

/* ref: FUN_00b8ada0 */
uint F_00b8ada0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb8ada0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + param_1 * 4 + 0x958);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = F_006df830(this,iVar1);
    *(undefined4 *)((int)this + param_1 * 4 + 0x958) = 0;
  }
  return uVar2;
}

/* ref: Client::Game::InstanceContent::InstanceContentDirector::vf167 */
byte F_00b8add0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb8add0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00b8ade0 */
uint F_00b8ade0(unsigned int gen_a0)
{
  GEN_ENTER(0xb8ade0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_005f3270(6,param_1,0);
  return uVar1;
}

/* ref: FUN_00b8ae00 */
uint F_00b8ae00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb8ae00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_005f3270(6,param_1,0);
  uVar1 = 0;
  if (this != (undefined *)0x0) {
    uVar1 = F_005f51d0(this,param_2,param_3);
  }
  return uVar1;
}

/* ref: FUN_00b8ae30 */
byte F_00b8ae30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb8ae30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  
  iVar1 = param_1 * 0x28;
  *(undefined4 *)((int)this + iVar1 + 900) = param_2;
  *(undefined1 *)((int)this + iVar1 + 0x388) = (undefined1)param_3;
  *(undefined2 *)((int)this + iVar1 + 0x389) = 0;
  *(byte *)(param_1 + 0x99f + (int)this) = (byte)param_4;
  return (byte)param_4;
}

/* ref: FUN_00b8ae70 */
byte F_00b8ae70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb8ae70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined4 *)((int)this + 0x3f4) = param_1;
  *(undefined1 *)((int)this + 0x3f8) = (undefined1)param_2;
  *(undefined1 *)((int)this + 0x3f9) = (undefined1)param_3;
  *(undefined1 *)((int)this + 0x3fa) = (undefined1)param_4;
  *(undefined2 *)((int)this + 0x3fb) = 0;
  *(undefined1 *)((int)this + 0x3fd) = 0;
  return 0;
}

/* ref: FUN_00b8aeb0 */
uint F_00b8aeb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb8aeb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  gen_size32 param_2 = (gen_size32)gen_a2;
  if (param_2 != 0) {
    F_00c48350((undefined *)((int)this + 0x98e),0,param_2);
  }
  *(char *)((int)this + 0x98d) = (char)param_2;
  *(uint *)((int)this + 0x950) = param_1;
  *(undefined1 *)((int)this + 0x9a2) = 0;
  return param_1;
}

/* ref: Client::Game::InstanceContent::InstanceContentDirector::vf122 */
uint F_00b8aef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb8aef0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  undefined * pIVar2;
  int iVar3;
  uint local_8;
  
  if (*(int *)(this + 0x950) != 0) {
    local_8 = 0;
    if (this[0x98d] != (undefined1)0x0) {
      puVar1 = (undefined4 *)(param_1 + 0xc);
      iVar3 = 0;
      pIVar2 = this + 0x98e;
      do {
        if (*pIVar2 != (undefined1)0x0) {
          puVar1[-3] = *((undefined4 *)GEN_TOP((iVar3 + *(int *)(this + 0x950))));
          puVar1[-2] = (uint)(byte)*pIVar2;
          *puVar1 = 0;
          puVar1 = puVar1 + 4;
          local_8 = local_8 + 1;
        }
        pIVar2 = pIVar2 + 1;
        iVar3 = iVar3 + 8;
      } while ((int)(pIVar2 + (-0x98e - (int)this)) < (int)(uint)(byte)this[0x98d]);
    }
    return local_8;
  }
  return 0;
}

/* ref: Client::Game::InstanceContent::InstanceContentDirector::vf17 */
byte F_00b8af80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb8af80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 1;
}

/* ref: Client::Game::InstanceContent::InstanceContentDirector::vf96 */
uint F_00b8af90(unsigned int gen_a0)
{
  GEN_ENTER(0xb8af90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  undefined * pIVar3;
  int iVar4;
  
  this[0x9a3] = (undefined1)0x1;
  pIVar3 = this + 0x388;
  iVar4 = 2;
  do {
    if ((*(int *)(pIVar3 + -4) != 0) && (iVar1 = 0, *pIVar3 != (undefined1)0x0)) {
      do {
        *(undefined4 *)(pIVar3 + iVar1 * 4 + -0x24) = 0;
        iVar1 = iVar1 + 1;
      } while (iVar1 < (int)(uint)(byte)*pIVar3);
    }
    pIVar3 = pIVar3 + 0x28;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if ((*(int *)(this + 0x3f4) != 0) && (iVar4 = 0, this[0x3f8] != (undefined1)0x0)) {
    pIVar3 = this + 0x3d4;
    do {
      *(undefined4 *)(pIVar3 + -0x20) = 0;
      *(undefined4 *)pIVar3 = 0;
      iVar4 = iVar4 + 1;
      pIVar3 = pIVar3 + 4;
    } while (iVar4 < (int)(uint)(byte)this[0x3f8]);
  }
  uVar2 = F_006fa760((undefined *)this);
  return uVar2;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonTotorak::vf159 */
byte F_00b8b000(unsigned int gen_a0)
{
  GEN_ENTER(0xb8b000u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined * PTR32 *)(in_ecx + 0x954) = &REFG(undefined, 0x10f85b8);
  *(undefined1 *)(in_ecx + 0x99e) = 5;
  *(undefined1 *)(in_ecx + 0x98e) = 0;
  *(undefined1 *)(in_ecx + 0x9a2) = 0;
  *(undefined * PTR32 *)(in_ecx + 0x950) = &REFG(undefined, 0x10f85b0);
  *(undefined1 *)(in_ecx + 0x98d) = 1;
  return 1;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonTamtara::vf159 */
byte F_00b8b040(unsigned int gen_a0)
{
  GEN_ENTER(0xb8b040u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined * PTR32 *)(in_ecx + 0x954) = &REFG(undefined, 0x10f862c);
  *(undefined1 *)(in_ecx + 0x99e) = 4;
  *(undefined1 *)(in_ecx + 0x38a) = 0;
  *(undefined * PTR32 *)(in_ecx + 900) = &REFG(undefined, 0x10f85fc);
  *(undefined2 *)(in_ecx + 0x388) = 6;
  *(undefined1 *)(in_ecx + 0x99f) = 0;
  *(undefined1 *)(in_ecx + 0x98e) = 0;
  *(undefined1 *)(in_ecx + 0x9a2) = 0;
  *(undefined * PTR32 *)(in_ecx + 0x950) = &REFG(undefined, 0x10f85f4);
  *(undefined1 *)(in_ecx + 0x98d) = 1;
  return 1;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonCopperBell::vf159 */
byte F_00b8b0a0(unsigned int gen_a0)
{
  GEN_ENTER(0xb8b0a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined * PTR32 *)(in_ecx + 0x954) = &REFG(undefined, 0x10f866c);
  *(undefined1 *)(in_ecx + 0x99e) = 5;
  *(undefined2 *)(in_ecx + 0x98e) = 0;
  *(undefined1 *)(in_ecx + 0x9a2) = 0;
  *(undefined * PTR32 *)(in_ecx + 0x950) = &REFG(undefined, 0x10f865c);
  *(undefined1 *)(in_ecx + 0x98d) = 2;
  return 1;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonShposhae::vf159 */
byte F_00b8b0e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb8b0e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined * PTR32 *)(in_ecx + 0x954) = &REFG(undefined, 0x10f86c0);
  *(undefined1 *)(in_ecx + 0x99e) = 5;
  *(undefined2 *)(in_ecx + 0x98e) = 0;
  *(undefined1 *)(in_ecx + 0x990) = 0;
  *(undefined1 *)(in_ecx + 0x9a2) = 0;
  *(undefined * PTR32 *)(in_ecx + 0x950) = &REFG(undefined, 0x10f86a8);
  *(undefined1 *)(in_ecx + 0x98d) = 3;
  return 1;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonAurumVale::vf159 */
byte F_00b8b120(unsigned int gen_a0)
{
  GEN_ENTER(0xb8b120u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined * PTR32 *)(in_ecx + 0x954) = &REFG(undefined, 0x10f8088);
  *(undefined1 *)(in_ecx + 0x99e) = 5;
  return 1;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonResidence::vf159 */
byte F_00b8b140(unsigned int gen_a0)
{
  GEN_ENTER(0xb8b140u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined * PTR32 *)(in_ecx + 0x954) = &REFG(undefined, 0x10f871c);
  *(undefined1 *)(in_ecx + 0x99e) = 5;
  *(undefined4 *)(in_ecx + 0x98e) = 0;
  *(undefined1 *)(in_ecx + 0x9a2) = 0;
  *(undefined * PTR32 *)(in_ecx + 0x950) = &REFG(undefined, 0x10f86fc);
  *(undefined1 *)(in_ecx + 0x98d) = 4;
  return 1;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonBrayflox::vf159 */
byte F_00b8b180(unsigned int gen_a0)
{
  GEN_ENTER(0xb8b180u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined * PTR32 *)(in_ecx + 0x954) = &REFG(undefined, 0x10f8760);
  *(undefined1 *)(in_ecx + 0x99e) = 5;
  *(undefined1 *)(in_ecx + 0x98e) = 0;
  *(undefined1 *)(in_ecx + 0x9a2) = 0;
  *(undefined * PTR32 *)(in_ecx + 0x950) = &REFG(undefined, 0x10f8758);
  *(undefined1 *)(in_ecx + 0x98d) = 1;
  return 1;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonHalatali::vf159 */
byte F_00b8b1c0(unsigned int gen_a0)
{
  GEN_ENTER(0xb8b1c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined * PTR32 *)(in_ecx + 0x954) = &REFG(undefined, 0x10f80c4);
  *(undefined1 *)(in_ecx + 0x99e) = 4;
  return 1;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonQarn::vf163 */
unsigned int F_00b8b220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb8b220u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(int *)(this + 0x9a8) = *(int *)(this + 0x9a8) + 1;
  if (*(int *)(this + 0x9a8) == 5) {
    F_006bccd0(this);
  }
  return 0;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonWandererPalace::vf159 */
byte F_00b8b240(unsigned int gen_a0)
{
  GEN_ENTER(0xb8b240u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined * PTR32 *)(in_ecx + 0x954) = &REFG(undefined, 0x10f87f8);
  *(undefined1 *)(in_ecx + 0x99e) = 5;
  return 1;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonDzemael::vf159 */
byte F_00b8b260(unsigned int gen_a0)
{
  GEN_ENTER(0xb8b260u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined * PTR32 *)(in_ecx + 0x954) = &REFG(undefined, 0x10f8834);
  *(undefined1 *)(in_ecx + 0x99e) = 4;
  return 1;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonStoneVigil::vf159 */
byte F_00b8b280(unsigned int gen_a0)
{
  GEN_ENTER(0xb8b280u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined * PTR32 *)(in_ecx + 0x954) = &REFG(undefined, 0x10f8864);
  *(undefined1 *)(in_ecx + 0x99e) = 3;
  return 1;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonCuttersCry::vf159 */
byte F_00b8b2a0(unsigned int gen_a0)
{
  GEN_ENTER(0xb8b2a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined * PTR32 *)(in_ecx + 0x954) = &REFG(undefined, 0x10f8888);
  *(undefined1 *)(in_ecx + 0x99e) = 5;
  return 1;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonTheOldCastleAmidapool::vf159 */
byte F_00b8b2c0(unsigned int gen_a0)
{
  GEN_ENTER(0xb8b2c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined * PTR32 *)(in_ecx + 0x954) = &REFG(undefined, 0x10f88c4);
  *(undefined1 *)(in_ecx + 0x99e) = 3;
  return 1;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonEmpiresBaseKeep::vf159 */
byte F_00b8b2e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb8b2e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined * PTR32 *)(in_ecx + 0x954) = &REFG(undefined, 0x10f88f0);
  *(undefined1 *)(in_ecx + 0x99e) = 8;
  *(undefined1 *)(in_ecx + 0x98e) = 0;
  *(undefined1 *)(in_ecx + 0x9a2) = 0;
  *(undefined * PTR32 *)(in_ecx + 0x950) = &REFG(undefined, 0x10f88e8);
  *(undefined1 *)(in_ecx + 0x98d) = 1;
  return 1;
}

/* ref: Client::Game::InstanceContent::InstanceContentBattleTitan::vf159 */
byte F_00b8b320(unsigned int gen_a0)
{
  GEN_ENTER(0xb8b320u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined * PTR32 *)(in_ecx + 0x3f4) = &REFG(undefined, 0x10f8950);
  *(undefined4 *)(in_ecx + 0x3f8) = 0x10006;
  *(undefined2 *)(in_ecx + 0x3fc) = 0;
  return 1;
}

/* ref: Client::Game::InstanceContent::InstanceContentRaidSeaBahamut001::vf159 */
byte F_00b8b340(unsigned int gen_a0)
{
  GEN_ENTER(0xb8b340u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(in_ecx + 0x99e) = 3;
  *(undefined * PTR32 *)(in_ecx + 0x954) = &REFG(undefined, 0x10f8998);
  *(undefined1 *)(in_ecx + 0x388) = 3;
  *(undefined * PTR32 * PTR32 *)(in_ecx + 900) = (*(undefined * PTR32 (*)[1])REFP(0x10f8980));
  *(undefined2 *)(in_ecx + 0x389) = 0;
  *(undefined1 *)(in_ecx + 0x99f) = 0;
  return 1;
}

/* ref: Client::Game::InstanceContent::InstanceContentRaidSeaBahamut002::vf159 */
byte F_00b8b380(unsigned int gen_a0)
{
  GEN_ENTER(0xb8b380u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined * PTR32 *)(in_ecx + 0x954) = &REFG(undefined, 0x10f89bc);
  *(undefined1 *)(in_ecx + 0x99e) = 1;
  return 1;
}

/* ref: Client::Game::InstanceContent::InstanceContentRaidSeaBahamut003::vf159 */
byte F_00b8b3a0(unsigned int gen_a0)
{
  GEN_ENTER(0xb8b3a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined * PTR32 *)(in_ecx + 0x954) = &REFG(undefined, 0x10f89e0);
  *(undefined1 *)(in_ecx + 0x99e) = 2;
  *(undefined1 *)(in_ecx + 0x38a) = 0;
  *(undefined * PTR32 * PTR32 *)(in_ecx + 900) = (*(undefined * PTR32 (*)[1])REFP(0x10f89c8));
  *(undefined2 *)(in_ecx + 0x388) = 3;
  *(undefined1 *)(in_ecx + 0x99f) = 0;
  return 1;
}

/* ref: Client::Game::InstanceContent::InstanceContentRaidSeaBahamut004::vf159 */
byte F_00b8b3e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb8b3e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined * PTR32 *)(in_ecx + 0x954) = &REFG(undefined, 0x10f89f8);
  *(undefined1 *)(in_ecx + 0x99e) = 1;
  return 1;
}

/* ref: Client::Game::InstanceContent::InstanceContentRaidSeaBahamut004::vf43 */
unsigned int F_00b8b400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb8b400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::InstanceContent::InstanceContentRaidSeaBahamut005::vf159 */
byte F_00b8b410(unsigned int gen_a0)
{
  GEN_ENTER(0xb8b410u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined * PTR32 *)(in_ecx + 0x954) = &REFG(undefined, 0x10f8a04);
  *(undefined1 *)(in_ecx + 0x99e) = 1;
  return 1;
}

/* ref: FUN_00b8b430 */
uint F_00b8b430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb8b430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 in_EAX = 0;
  uint uVar1;
  
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),(char)param_1);
  REFG(char, 0x14ab2dc) = (char)param_1;
  if (*(char *)((int)this + 0x9ac) != (char)param_1) {
    *(char *)((int)this + 0x9ac) = (char)param_1;
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x284))(this);
    F_00a69750(&REFG(undefined4, 0x14b119c));
  }
  return uVar1;
}

/* ref: FUN_00b8b470 */
uint F_00b8b470(unsigned int gen_a0)
{
  GEN_ENTER(0xb8b470u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(short *)((int)this + 0x54) != -1) {
    F_006f3a50(this,0,0);
  }
  uVar1 = F_006bd080(this,0,0,0);
  return uVar1;
}

/* ref: FUN_00b8b4a0 */
uint F_00b8b4a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb8b4a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  if (param_4 == 0) {
    if (*(short *)((int)this + -0x954) != -1) {
      F_006f3a50((undefined *)((int)this + -0x9a8),0,0);
    }
    F_006bd080((undefined *)((int)this + -0x9a8),0,0,0);
  }
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 0;
  return (uint)param_1;
}

/* ref: FUN_00b8b4f0 */
unsigned int F_00b8b4f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb8b4f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00b8b500 */
byte F_00b8b500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb8b500u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  char * param_3 = (char *)(uintptr_t)gen_a2;
  undefined1 * param_4 = (undefined1 *)(uintptr_t)gen_a3;
  uint uVar1;
  
  *param_2 = 0;
  *param_3 = '\0';
  *param_4 = 0;
  if (param_1 - 1U < 0x10) {
    *param_2 = param_1 - 1;
    *param_4 = 2;
    uVar1 = 0x12;
  }
  else if (param_1 - 0x2711U < 0xe) {
    *param_2 = param_1 - 0x2711;
    *param_4 = 3;
    uVar1 = 10;
  }
  else if (param_1 - 0x4e21U < 10) {
    *param_2 = param_1 - 0x4e21;
    *param_4 = 4;
    uVar1 = 6;
  }
  else if (param_1 - 0x7531U < 6) {
    *param_2 = param_1 - 0x7531;
    *param_4 = 1;
    uVar1 = 0x1c;
  }
  else {
    if (2 < param_1 - 0x9c41U) {
      return 0;
    }
    *param_2 = param_1 - 0x9c41;
    *param_4 = 5;
    uVar1 = 2;
  }
  *param_3 = '\x01' << ((byte)*param_2 & 7);
  *param_2 = *param_2 >> 3;
  return *param_2 < uVar1;
}

/* ref: FUN_00b8b5d0 */
byte F_00b8b5d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb8b5d0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  byte bVar1;
  
  bVar1 = 0;
  switch((unsigned int)(uintptr_t)((undefined1)param_3)) {
  case 1: ;
    return *(byte *)(param_1 + 0x20c8 + param_2);
  case 2: ;
    return *(byte *)(param_1 + 0x20e4 + param_2);
  case 3: ;
    return *(byte *)(param_1 + 0x20f6 + param_2);
  case 4: ;
    return *(byte *)(param_1 + 0x2100 + param_2);
  case 5: ;
    bVar1 = *(byte *)(param_1 + 0x2106 + param_2);
  }
  return bVar1;
}

/* ref: FUN_00b8b650 */
byte F_00b8b650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb8b650u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  byte bVar1;
  
  bVar1 = 0;
  switch((unsigned int)(uintptr_t)((undefined1)param_3)) {
  case 1: ;
    return *(byte *)(param_1 + 0x2088 + param_2);
  case 2: ;
    return *(byte *)(param_1 + 0x20a4 + param_2);
  case 3: ;
    return *(byte *)(param_1 + 0x20b6 + param_2);
  case 4: ;
    return *(byte *)(param_1 + 0x20c0 + param_2);
  case 5: ;
    bVar1 = *(byte *)(param_1 + 0x20c6 + param_2);
  }
  return bVar1;
}

/* ref: FUN_00b8b6d0 */
uint F_00b8b6d0(unsigned int gen_a0)
{
  GEN_ENTER(0xb8b6d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  if ((param_1 != 0) && (param_1 < 0xf)) {
    return param_1 + 10000;
  }
  return 10000;
}

/* ref: FUN_00b8b6f0 */
uint F_00b8b6f0(unsigned int gen_a0)
{
  GEN_ENTER(0xb8b6f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (param_1 - 0x2711U < 0xe) {
    return param_1 - 10000;
  }
  return 0;
}

/* ref: FUN_00b8b710 */
unsigned int F_00b8b710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb8b710u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  *(undefined1 *)((int)param_3 + 0x12) = 0;
  *(undefined2 *)(param_3 + 4) = 0;
  *(undefined2 *)(param_3 + 9) = 0;
  param_3[5] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  param_3[8] = 0;
  *(undefined1 *)((int)param_3 + 0x26) = 0;
  *(undefined2 *)(param_3 + 0xe) = 0;
  param_3[10] = 0;
  param_3[0xb] = 0;
  param_3[0xc] = 0;
  param_3[0xd] = 0;
  *(undefined1 *)((int)param_3 + 0x3a) = 0;
  param_3[5] = *(int *)(param_1 + 0x14);
  param_3[6] = *(int *)(param_1 + 0x1c);
  param_3[7] = *(int *)(param_1 + 0x24);
  param_3[8] = *(int *)(param_1 + 0x2c);
  *(undefined2 *)(param_3 + 9) = *(undefined2 *)(param_1 + 0x32);
  *(undefined1 *)((int)param_3 + 0x26) = *(undefined1 *)(param_1 + 0x35);
  if ((char)param_2 == '\0') {
    if ((((uint)param_3[5] <= *(uint *)(param_1 + 0x10)) &&
        ((uint)param_3[6] <= *(uint *)(param_1 + 0x18))) &&
       ((uint)param_3[7] <= *(uint *)(param_1 + 0x20))) {
      param_3[10] = *(uint *)(param_1 + 0x10) - param_3[5];
      param_3[0xb] = *(int *)(param_1 + 0x18) - param_3[6];
      param_3[0xc] = *(int *)(param_1 + 0x20) - param_3[7];
    }
    param_3[0xd] = *(int *)(param_1 + 0x28);
    *(undefined2 *)(param_3 + 0xe) = *(undefined2 *)(param_1 + 0x30);
    *(undefined1 *)((int)param_3 + 0x3a) = *(undefined1 *)(param_1 + 0x34);
  }
  *param_3 = param_3[10] + param_3[5];
  param_3[1] = param_3[0xb] + param_3[6];
  param_3[2] = param_3[0xc] + param_3[7];
  return 0;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrderDirector::vf164 */
uint F_00b8b800(unsigned int gen_a0)
{
  GEN_ENTER(0xb8b800u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_006e90a0(this,3000,0);
  *(uint *)(this + 0xce0) = uVar1;
  return uVar1;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrderDirector::vf162 */
uint F_00b8b820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb8b820u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  if (param_1 == 0) {
    uVar1 = F_00a6e080(&REFG(undefined, 0x14a9e40),param_2,0,0);
  }
  else {
    uVar1 = param_1 - 1;
    if (uVar1 == 0) {
      uVar1 = F_006e90a0(this,0,0);
      *(uint *)(this + 0xcec) = uVar1;
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrderDirector::vf157 */
uint F_00b8b860(void)
{
  GEN_ENTER(0xb8b860u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00a6e080(&REFG(undefined, 0x14a9e40),0x4a,0,0);
  return uVar1;
}

/* ref: FUN_00b8b890 */
uint F_00b8b890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb8b890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 - 0x514U < 9) {
    return param_1 * 0x54 + -0x1a0a4 + (int)this;
  }
  if (param_1 < 7) {
    return param_1 * 0x54 + 0x6f4 + (int)this;
  }
  return (param_1 - *(int *)((int)this + 0x97c)) * 0x54 + *(int *)((int)this + 0x94c);
}

/* ref: FUN_00b8b910 */
uint F_00b8b910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb8b910u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  if (param_2 - 0x514U < 9) {
    iVar2 = param_1 * 0x54 + 0x400 + (int)this;
    uVar1 = F_00b8b890(this,param_2);
    uVar1 = F_007143e0(this_00,uVar1,param_3,iVar2);
    return uVar1;
  }
  if (param_2 < 7) {
    iVar2 = param_2 * 0x54 + 0x6f4 + (int)this;
  }
  else {
    iVar2 = (param_2 - *(int *)((int)this + 0x97c)) * 0x54 + *(int *)((int)this + 0x94c);
  }
  uVar1 = F_007143e0(this,iVar2,param_3,param_1 * 0x54 + 0x400 + (int)this);
  return uVar1;
}

/* ref: FUN_00b8b980 */
uint F_00b8b980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb8b980u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  uint uVar1;
  undefined * this_00;
  uint * puVar2;
  
  *(int *)this = param_1;
  *(ushort *)((int)this + 4) = (ushort)*(byte *)(param_2 + 0x31);
  *(undefined1 *)((int)this + 6) = *(undefined1 *)(param_2 + 0x34);
  *(undefined2 *)((int)this + 8) = *(undefined2 *)(param_2 + 0x28);
  *(undefined4 *)((int)this + 0xc) = 0xeffa;
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_2 + 0x10);
  F_0042e430((undefined *)((int)this + 0x14),(*param_3 & 0xffffff) + (int)param_3);
  this_00 = (undefined *)((int)this + 0x68);
  param_1 = 2;
  puVar2 = param_3;
  do {
    puVar2 = puVar2 + 1;
    F_0042e430(this_00,(*puVar2 & 0xffffff) + (int)puVar2);
    this_00 = (undefined *)((int)this_00 + 0x54);
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  uVar1 = F_0042e430((undefined *)((int)this + 0x110),(*param_3 & 0xffffff) + (int)param_3);
  return uVar1;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder001::vf163 */
unsigned int F_00b8ba20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb8ba20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  this[0xe60] = (undefined1)((char)this[0xe60] + '\x01');
  if (this[0xe60] == (undefined1)0x2) {
    F_006bccd0(this);
  }
  return 0;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder001::vf173 */
uint F_00b8ba40(unsigned int gen_a0)
{
  GEN_ENTER(0xb8ba40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0042a990(this + 0xa40);
  uVar1 = F_0042e430(this + 0x23c,uVar1);
  return uVar1;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder001::vf175 */
uint F_00b8ba60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb8ba60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  undefined * in_ecx;
  
  iVar1 = (int)(char)param_1;
  if (iVar1 == 1) {
    in_ecx = ((undefined *)GEN_TOP(((0x578 - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c))));
  }
  else if (iVar1 == 2) {
    in_ecx = this + 0x400;
  }
  else {
    if (iVar1 - 3U != 0) {
      return iVar1 - 3U;
    }
    in_ecx = this + 0x454;
  }
  uVar2 = F_0042a990(in_ecx);
  uVar2 = F_0042e430(this + 0x290,uVar2);
  return uVar2;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder002::vf163 */
unsigned int F_00b8bab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb8bab0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  this[0xe60] = (undefined1)((char)this[0xe60] + '\x01');
  if (this[0xe60] == (undefined1)0x2) {
    F_006bccd0(this);
  }
  return 0;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder002::vf173 */
uint F_00b8bad0(unsigned int gen_a0)
{
  GEN_ENTER(0xb8bad0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0042a990(this + 0x400);
  uVar1 = F_0042e430(this + 0x23c,uVar1);
  return uVar1;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder002::vf175 */
uint F_00b8baf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb8baf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = (int)(char)param_1 - 1;
  if (uVar1 == 0) {
    uVar1 = F_0042a990(this + 0x454);
    uVar1 = F_0042e430(this + 0x290,uVar1);
  }
  return uVar1;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder003::vf163 */
unsigned int F_00b8bb20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb8bb20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  this[0xe60] = (undefined1)((char)this[0xe60] + '\x01');
  if (this[0xe60] == (undefined1)0x3) {
    F_006bccd0(this);
  }
  return 0;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder003::vf176 */
unsigned int F_00b8bb40(void)
{
  GEN_ENTER(0xb8bb40u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder003::vf173 */
uint F_00b8bb50(unsigned int gen_a0)
{
  GEN_ENTER(0xb8bb50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0042a990(this + 0x400);
  uVar1 = F_0042e430(this + 0x23c,uVar1);
  return uVar1;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder003::vf175 */
uint F_00b8bb70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb8bb70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  undefined * in_ecx;
  
  iVar1 = (int)(char)param_1;
  if (iVar1 == 1) {
    in_ecx = this + 0x454;
  }
  else if (iVar1 == 2) {
    in_ecx = ((undefined *)GEN_TOP(((0x641 - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c))));
  }
  else {
    if (iVar1 - 3U != 0) {
      return iVar1 - 3U;
    }
    in_ecx = this + 0x4a8;
  }
  uVar2 = F_0042a990(in_ecx);
  uVar2 = F_0042e430(this + 0x290,uVar2);
  return uVar2;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder004::vf163 */
unsigned int F_00b8bbc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb8bbc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  this[0xe60] = (undefined1)((char)this[0xe60] + '\x01');
  if (this[0xe60] == (undefined1)0x2) {
    F_006bccd0(this);
  }
  return 0;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder004::vf176 */
unsigned int F_00b8bbe0(void)
{
  GEN_ENTER(0xb8bbe0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder004::vf173 */
uint F_00b8bbf0(unsigned int gen_a0)
{
  GEN_ENTER(0xb8bbf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0042a990(this + 0x400);
  uVar1 = F_0042e430(this + 0x23c,uVar1);
  return uVar1;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder004::vf175 */
uint F_00b8bc10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb8bc10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  undefined * in_ecx;
  
  if ((char)param_1 == 1) {
    in_ecx = this + 0x454;
  }
  else {
    uVar1 = (int)(char)param_1 - 2;
    if (uVar1 != 0) {
      return uVar1;
    }
    in_ecx = ((undefined *)GEN_TOP(((0x6a5 - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c))));
  }
  uVar1 = F_0042a990(in_ecx);
  uVar1 = F_0042e430(this + 0x290,uVar1);
  return uVar1;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder005::vf163 */
uint F_00b8bc60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb8bc60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_006bccd0(this);
  return uVar1;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder005::vf173 */
uint F_00b8bc70(unsigned int gen_a0)
{
  GEN_ENTER(0xb8bc70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0042a990(this + 0x400);
  uVar1 = F_0042e430(this + 0x23c,uVar1);
  return uVar1;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder005::vf175 */
uint F_00b8bc90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb8bc90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int iVar2;
  
  if ((char)param_1 == 1) {
    iVar2 = 0x708;
  }
  else {
    uVar1 = (int)(char)param_1 - 2;
    if (uVar1 != 0) {
      return uVar1;
    }
    iVar2 = 0x709;
  }
  uVar1 = F_0042a990((iVar2 - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c));
  uVar1 = F_0042e430(this + 0x290,uVar1);
  return uVar1;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder006::vf163 */
uint F_00b8bce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb8bce0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_006bccd0(this);
  return uVar1;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder006::vf173 */
uint F_00b8bcf0(unsigned int gen_a0)
{
  GEN_ENTER(0xb8bcf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0042a990(this + 0x400);
  uVar1 = F_0042e430(this + 0x23c,uVar1);
  return uVar1;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder006::vf175 */
uint F_00b8bd10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb8bd10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)(char)param_1;
  if (iVar1 == 1) {
    iVar1 = 0x76c;
  }
  else if (iVar1 == 2) {
    iVar1 = 0x76d;
  }
  else {
    if (iVar1 - 3U != 0) {
      return iVar1 - 3U;
    }
    iVar1 = 0x76e;
  }
  uVar2 = F_0042a990((iVar1 - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c));
  uVar2 = F_0042e430(this + 0x290,uVar2);
  return uVar2;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder007::vf173 */
uint F_00b8bd60(unsigned int gen_a0)
{
  GEN_ENTER(0xb8bd60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0042a990(this + 0x400);
  uVar1 = F_0042e430(this + 0x23c,uVar1);
  return uVar1;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder007::vf175 */
uint F_00b8bd80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb8bd80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int iVar2;
  
  if ((char)param_1 == 1) {
    iVar2 = 0x7d1;
  }
  else {
    uVar1 = (int)(char)param_1 - 2;
    if (uVar1 != 0) {
      return uVar1;
    }
    iVar2 = 0x7d2;
  }
  uVar1 = F_0042a990((iVar2 - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c));
  uVar1 = F_0042e430(this + 0x290,uVar1);
  return uVar1;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder008::vf173 */
uint F_00b8bdd0(unsigned int gen_a0)
{
  GEN_ENTER(0xb8bdd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0042a990(this + 0xa40);
  uVar1 = F_0042e430(this + 0x23c,uVar1);
  return uVar1;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder008::vf175 */
uint F_00b8bdf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb8bdf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int iVar2;
  
  if ((char)param_1 == 1) {
    iVar2 = 0x834;
  }
  else {
    uVar1 = (int)(char)param_1 - 2;
    if (uVar1 != 0) {
      return uVar1;
    }
    iVar2 = 0x835;
  }
  uVar1 = F_0042a990((iVar2 - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c));
  uVar1 = F_0042e430(this + 0x290,uVar1);
  return uVar1;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder009::vf163 */
uint F_00b8be40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb8be40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_006bccd0(this);
  return uVar1;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder009::vf173 */
uint F_00b8be50(unsigned int gen_a0)
{
  GEN_ENTER(0xb8be50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0042a990(this + 0x400);
  uVar1 = F_0042e430(this + 0x23c,uVar1);
  return uVar1;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder009::vf175 */
uint F_00b8be70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb8be70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int iVar2;
  
  if ((char)param_1 == 1) {
    iVar2 = 0x898;
  }
  else {
    uVar1 = (int)(char)param_1 - 2;
    if (uVar1 != 0) {
      return uVar1;
    }
    iVar2 = 0x899;
  }
  uVar1 = F_0042a990((iVar2 - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c));
  uVar1 = F_0042e430(this + 0x290,uVar1);
  return uVar1;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder010::vf163 */
unsigned int F_00b8bec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb8bec0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  this[0xe60] = (undefined1)((char)this[0xe60] + '\x01');
  if (this[0xe60] == (undefined1)0x1) {
    F_006bccd0(this);
  }
  return 0;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder010::vf173 */
uint F_00b8bee0(unsigned int gen_a0)
{
  GEN_ENTER(0xb8bee0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0042a990(this + 0xa40);
  uVar1 = F_0042e430(this + 0x23c,uVar1);
  return uVar1;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder010::vf175 */
uint F_00b8bf00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb8bf00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  undefined * in_ecx;
  
  iVar1 = (int)(char)param_1;
  if (iVar1 == 1) {
    iVar1 = 0x8fc;
  }
  else {
    if (iVar1 == 2) {
      in_ecx = this + 0x400;
      goto LAB_00b8bf36;
    }
    if (iVar1 - 3U != 0) {
      return iVar1 - 3U;
    }
    iVar1 = 0x8fe;
  }
  in_ecx = ((undefined *)GEN_TOP(((iVar1 - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c))));
LAB_00b8bf36: ;
  uVar2 = F_0042a990(in_ecx);
  uVar2 = F_0042e430(this + 0x290,uVar2);
  return uVar2;
}

