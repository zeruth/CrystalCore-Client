#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00dfdec0 */
uint F_00dfdec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfdec0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00dfd680(this,param_1,param_2);
  return (uint)this;
}

/* ref: FUN_00dfdee0 */
uint F_00dfdee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfdee0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dfd370(this,param_1,param_2);
  if ((int)uVar1 <= *(int *)((int)this + 8)) {
    F_00dfd470(this,uVar1);
    return 0;
  }
  return 1;
}

/* ref: FUN_00dfdf20 */
uint F_00dfdf20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfdf20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int * piVar8;
  
  iVar7 = param_2;
  if (param_2 < 9) {
    iVar7 = 8;
  }
  uVar1 = *(uint *)((int)this + 4);
  piVar2 = *(int * PTR32 *)this;
  iVar6 = *(int *)((int)this + 8) + 1;
  uVar3 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1,iVar7 * 0xc);
  if (uVar3 != 0) {
    *(uint *)this = uVar3;
    if (0 < iVar7) {
      iVar4 = 0;
      iVar5 = iVar7;
      do {
        *(undefined4 *)(iVar4 + *(int *)this) = 0xffffffff;
        iVar4 = iVar4 + 0xc;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    *(undefined4 *)((int)this + 4) = 0;
    *(int *)((int)this + 8) = iVar7 + -1;
    piVar8 = piVar2;
    param_2 = iVar6;
    if (0 < iVar6) {
      do {
        if (*piVar8 != -1) {
          F_00dfd2c0(this,param_1,*piVar8,piVar8[1],piVar8[2]);
        }
        iVar7 = param_2 + -1;
        piVar8 = piVar8 + 3;
        param_2 = iVar7;
      } while (iVar7 != 0);
    }
    if ((uVar1 & 0x80000000) == 0) {
      ((code *)*(gen_code32 *)(*param_1 + 8))(param_1,piVar2,iVar6 * 0xc);
    }
    return 0;
  }
  return 1;
}

/* ref: FUN_00dfdff0 */
uint F_00dfdff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfdff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 4)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  iVar2 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar2 + 1;
  return *(int *)this + iVar2 * 4;
}

/* ref: FUN_00dfe040 */
unsigned int F_00dfe040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfe040u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *param_3;
        puVar1[1] = param_3[1];
      }
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00dfe070 */
unsigned int F_00dfe070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfe070u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *param_3;
      }
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00dfe0a0 */
uint F_00dfe0a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfe0a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar1 << 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dfe0e0 */
uint F_00dfe0e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfe0e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
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

/* ref: FUN_00dfe130 */
uint F_00dfe130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfe130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this,4);
  }
  return (uint)this;
}

/* ref: FUN_00dfe160 */
uint F_00dfe160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfe160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,1);
  }
  puVar1 = ((undefined1 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4))));
  *puVar1 = *param_1;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00dfe1a0 */
uint F_00dfe1a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfe1a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00dfdec0(this,param_1,param_2);
  return (uint)this;
}

/* ref: FUN_00dfe1c0 */
uint F_00dfe1c0(unsigned int gen_a0)
{
  GEN_ENTER(0xdfe1c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 4)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  iVar2 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar2 + 1;
  return *(int *)this + iVar2 * 4;
}

/* ref: FUN_00dfe200 */
uint F_00dfe200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xdfe200u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint * param_5 = (uint *)(uintptr_t)gen_a5;
  uint uVar1;
  
  if (*(int *)((int)this + 8) < *(int *)((int)this + 4) * 2) {
    uVar1 = F_00dfdf20(this,param_1,*(int *)((int)this + 8) * 2 + 2);
    *param_5 = uVar1;
    if (uVar1 != 0) {
      return 0;
    }
  }
  else {
    *param_5 = 0;
  }
  uVar1 = F_00dfd2c0(this,param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00dfe260 */
unsigned int F_00dfe260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xdfe260u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int * piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 8) < *(int *)((int)this + 4) * 2) {
    F_00dfdf20(this,param_1,*(int *)((int)this + 8) * 2 + 2);
  }
  iVar2 = *(int *)this;
  uVar4 = (param_2 >> 4) * -0x61c8864f;
  while( true ) {
    uVar4 = uVar4 & *(uint *)((int)this + 8);
    piVar1 = (int *)(iVar2 + uVar4 * 0xc);
    if ((*(uint *)(iVar2 + uVar4 * 0xc) == param_2) && (piVar1[1] == param_3)) break;
    if (*piVar1 == -1) {
      iVar3 = uVar4 * 0xc;
      *(uint *)(iVar2 + iVar3) = param_2;
      *(int *)(iVar2 + 4 + iVar3) = param_3;
      *(undefined4 *)(iVar3 + 8 + *(int *)this) = param_4;
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
      return 0;
    }
    uVar4 = uVar4 + 1;
  }
  return 0;
}

/* ref: FUN_00dfe2e0 */
uint F_00dfe2e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfe2e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = 8;
  if (8 < param_2 * 2) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_2 * 2);
  }
  uVar2 = F_00dfdf20(this,param_1,iVar1);
  return uVar2;
}

/* ref: FUN_00dfe310 */
unsigned int F_00dfe310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfe310u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 8)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return 0;
}

/* ref: FUN_00dfe360 */
unsigned int F_00dfe360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfe360u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 4)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return 0;
}

/* ref: FUN_00dfe3a0 */
unsigned int F_00dfe3a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfe3a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  uVar1 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar3 = uVar1 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    F_00d95690(param_1,this,iVar3,0x10);
  }
  iVar3 = param_2 - *(int *)((int)this + 4);
  if (0 < iVar3) {
    puVar2 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 4) * 0x10 + *(int *)this + 8)));
    do {
      if (puVar2 != (undefined4 *)0x8) {
        puVar2[-2] = 0;
        puVar2[-1] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      puVar2 = puVar2 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(int *)((int)this + 4) = param_2;
  return 0;
}

/* ref: FUN_00dfe410 */
uint F_00dfe410(unsigned int gen_a0)
{
  GEN_ENTER(0xdfe410u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 << 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dfe450 */
uint F_00dfe450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfe450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dfe4a0 */
uint F_00dfe4a0(unsigned int gen_a0)
{
  GEN_ENTER(0xdfe4a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 * puVar5;
  int iVar6;
  uint uVar7;
  
  uVar7 = *(int *)((int)this + 0xc) + *(int *)((int)this + 4);
  uVar3 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar3 < (int)uVar7) {
    uVar3 = uVar3 * 2;
    if ((int)uVar3 <= (int)uVar7) {
      uVar3 = uVar7;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,uVar3,1);
  }
  iVar1 = *(int *)((int)this + 4);
  iVar2 = *(int *)this;
  iVar4 = uVar7 - iVar1;
  iVar6 = 0;
  if (0 < iVar4) {
    do {
      *(undefined1 *)(iVar6 + iVar2 + iVar1) = *(undefined1 *)((int)this + 0x10);
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar4);
  }
  *(uint *)((int)this + 4) = uVar7;
  if (uVar7 == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,1);
  }
  puVar5 = ((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + *(int *)this)));
  *puVar5 = 0;
  *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  return (uint)puVar5;
}

/* ref: FUN_00dfe520 */
uint F_00dfe520(unsigned int gen_a0)
{
  GEN_ENTER(0xdfe520u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  int iVar4;
  
  *((undefined1 *)GEN_TOP(((*(int *)((int)this + 4) - *(int *)((int)this + 0xc)) + *(int *)this))) = 0;
  iVar4 = *(int *)((int)this + 4) - *(int *)((int)this + 0xc);
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < iVar4) {
    iVar3 = uVar2 * 2;
    if ((int)(uVar2 * 2) <= iVar4) {
      iVar3 = iVar4;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,1);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = iVar4;
  return uVar2;
}

/* ref: FUN_00dfe570 */
uint F_00dfe570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfe570u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  int * piVar4;
  int * piVar5;
  
  piVar1 = (*(int * PTR32 *)&gen_args[2]);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) + 0xc))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))),&(*(int * PTR32 *)&gen_args[2]),(*(int * PTR32 *)&gen_args[2]));
    ((int *)(gen_frame + 0x24))[0] = 0;
    ((int *)(gen_frame + 0x24))[1] = 0;
    if ((*(int * PTR32 *)&gen_args[2]) == (int *)0x0) {
      piVar5 = ((int *)(gen_frame + 0x24));
    }
    else {
      piVar5 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 4))))((*(int * PTR32 *)&gen_args[2]),((undefined1 *)(gen_frame + 0x14)))));
    }
    iVar3 = *piVar5;
    piVar4 = (int *)*piVar1;
    (*(int *)(gen_frame + 0x20)) = piVar5[1];
    ((int *)(gen_frame + 0x24))[0] = 0;
    ((int *)(gen_frame + 0x24))[1] = 0;
    if (piVar4 == (int *)0x0) {
      piVar5 = ((int *)(gen_frame + 0x24));
    }
    else {
      piVar5 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 4))(piVar4,((undefined1 *)(gen_frame + 0xc)))));
    }
    if ((iVar3 != *piVar5) || ((*(int *)(gen_frame + 0x20)) != piVar5[1])) {
      piVar1 = ((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c)));
      if (*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) == (*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) & 0x3fffffff)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar1,4);
      }
      puVar2 = ((undefined4 *)GEN_TOP((*piVar1 + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) * 4)));
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 0;
      }
      piVar1 = ((int *)GEN_TOP((*piVar1 + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) * 4)));
      *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) + 1;
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)0x0) {
        *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 6))) + 1;
        (*(int * PTR32 *)&gen_args[2])[2] = (*(int * PTR32 *)&gen_args[2])[2] + 1;
      }
      puVar2 = (undefined4 *)*piVar1;
      if (puVar2 != (undefined4 *)0x0) {
        *(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + -1;
        piVar5 = puVar2 + 2;
        *piVar5 = *piVar5 + -1;
        if (*piVar5 == 0) {
          ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
        }
      }
      *piVar1 = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[1]) = (int)(*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)0x0) {
        *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 6))) + 1;
        (*(int * PTR32 *)&gen_args[2])[2] = (*(int * PTR32 *)&gen_args[2])[2] + 1;
        if ((*(int * PTR32 *)&gen_args[2]) != (int *)0x0) {
          *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 6))) + -1;
          piVar1 = (*(int * PTR32 *)&gen_args[2]) + 2;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            ((code *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[2]))))((*(int * PTR32 *)&gen_args[2]),1);
          }
        }
      }
      return (uint)(*(int * PTR32 *)&gen_args[1]);
    }
    if ((*(int * PTR32 *)&gen_args[2]) != (int *)0x0) {
      *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 6))) + -1;
      piVar5 = (*(int * PTR32 *)&gen_args[2]) + 2;
      *piVar5 = *piVar5 + -1;
      if (*piVar5 == 0) {
        ((code *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[2]))))((*(int * PTR32 *)&gen_args[2]),1);
      }
    }
  }
  iVar3 = *piVar1;
  *(*(int * PTR32 *)&gen_args[1]) = iVar3;
  if (iVar3 != 0) {
    *(short *)(iVar3 + 6) = *(short *)(iVar3 + 6) + 1;
    *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
  }
  return (uint)(*(int * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00dfe6e0 */
uint F_00dfe6e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfe6e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  char * param_2 = (char *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int * piVar5;
  char * pcVar6;
  int iVar7;
  undefined3 extraout_var = 0;
  int iVar8;
  
  uVar1 = param_2;
  (*(uint *)(gen_frame + 0x18)) = 0;
  F_00dfe4a0(this);
  uVar3 = ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x14))((int *)*param_1);
  uVar4 = ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x18))((int *)*param_1,uVar3);
  do {
    if (uVar4 == 0) {
      *((undefined1 *)GEN_TOP(((*(int *)((int)this + 4) - *(int *)((int)this + 0xc)) + *(int *)this))) = 0;
      iVar8 = *(int *)((int)this + 4) - *(int *)((int)this + 0xc);
      uVar3 = *(uint *)((int)this + 8) & 0x3fffffff;
      if ((int)uVar3 < iVar8) {
        iVar7 = uVar3 * 2;
        if ((int)(uVar3 * 2) <= iVar8) {
          iVar7 = iVar8;
        }
        bVar2 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar7,1);
        uVar3 = CONCAT31(extraout_var,bVar2);
      }
      *(int *)((int)this + 4) = iVar8;
      return uVar3;
    }
    ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x24))((int *)*param_1,&(*(int * PTR32 *)(gen_frame + 0x8)),uVar3);
    piVar5 = (int *)F_00e1cd10(&(*(int * PTR32 *)(gen_frame + 0x8)));
    uVar4 = F_00dfcdb0(&(*(int * PTR32 *)(gen_frame + 0x8)));
    if (uVar4 != 0) {
      iVar8 = *piVar5;
      if ((iVar8 == 8) ||
         ((iVar8 == 9 &&
          ((*(int *)piVar5[1] != 3 ||
           ((((iVar7 = piVar5[2], iVar7 != 4 && (iVar7 != 8)) && (iVar7 != 0xc)) && (iVar7 != 0x10))
           )))))) {
        param_2 = "tuple";
        if (iVar8 == 9) {
          pcVar6 = (char *)F_00e19c70(piVar5);
        }
        else {
          (*(uint *)(gen_frame + 0x18)) = (*(uint *)(gen_frame + 0x18)) | 1;
          param_2 = "array";
          piVar5 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x28))((*(int * PTR32 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)))));
          (*(int * PTR32 *)(gen_frame + 0x10)) = piVar5;
          if (piVar5 != (int *)0x0) {
            *(short *)((int)piVar5 + 6) = *(short *)((int)piVar5 + 6) + 1;
            piVar5[2] = piVar5[2] + 1;
          }
          pcVar6 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar5 + 0x14))(piVar5)));
        }
        (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar6;
        if ((((*(uint *)(gen_frame + 0x18)) & 1) != 0) && ((*(uint *)(gen_frame + 0x18)) = (*(uint *)(gen_frame + 0x18)) & 0xfffffffe, (*(int * PTR32 *)(gen_frame + 0x10)) != (int *)0x0)) {
          *(short *)((int)(*(int * PTR32 *)(gen_frame + 0x10)) + 6) = *(short *)((int)(*(int * PTR32 *)(gen_frame + 0x10)) + 6) + -1;
          piVar5 = (*(int * PTR32 *)(gen_frame + 0x10)) + 2;
          *piVar5 = *piVar5 + -1;
          if (*piVar5 == 0) {
            ((code *)*(gen_code32 *)*(*(int * PTR32 *)(gen_frame + 0x10)))((*(int * PTR32 *)(gen_frame + 0x10)),1);
          }
        }
        uVar4 = ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x20))((int *)*param_1,uVar3);
        F_00da00e0(uVar1,"\n%s<%s name=\"%s\" size=\"%i\">",*(undefined4 *)this,param_2,uVar4,
                     (*(char * PTR32 *)(gen_frame + 0x14)));
        F_00dfffc0(this,&(*(int * PTR32 *)(gen_frame + 0x8)),uVar1);
        pcVar6 = param_2;
      }
      else {
        pcVar6 = (char *)F_00dfca90(piVar5);
        (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar6;
        if ((*piVar5 == 5) &&
           (uVar4 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x2c))((*(int * PTR32 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc))), uVar4 == 0)) {
          uVar4 = ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x20))((int *)*param_1,uVar3);
          F_00da00e0(uVar1,"\n%s<null name=\"%s\"/>",*(undefined4 *)this,uVar4);
          goto LAB_00dfe8b2;
        }
        uVar4 = ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x20))((int *)*param_1,uVar3);
        F_00da00e0(uVar1,"\n%s<%s name=\"%s\">",*(undefined4 *)this,(*(char * PTR32 *)(gen_frame + 0x14)),uVar4);
        F_00dfffc0(this,&(*(int * PTR32 *)(gen_frame + 0x8)),uVar1);
        pcVar6 = (*(char * PTR32 *)(gen_frame + 0x14));
      }
      F_00da00e0(uVar1,"</%s>",pcVar6);
    }
LAB_00dfe8b2: ;
    uVar3 = ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x1c))((int *)*param_1,uVar3);
    uVar4 = ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x18))((int *)*param_1,uVar3);
  } while( true );
}

/* ref: FUN_00dfe930 */
uint F_00dfe930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfe930u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  
  piVar3 = (int *)*param_1;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  if (piVar3 == (int *)0x0) {
    puVar1 = &(*(undefined4 *)(gen_frame + 0x14));
  }
  else {
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3,((undefined1 *)(gen_frame + 0xc)))));
  }
  uVar2 = F_00dfd3d0((undefined *)((int)this + 0x14),*puVar1,puVar1[1],0xffffffff);
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*param_1 + 8))((int *)*param_1)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3);
  F_00da00e0(param_2,"\n%s<object id=\"#%04i\" type=\"%s\">",*(undefined4 *)this,uVar2,uVar4);
  F_00dfe6e0(this,param_1,param_2);
  uVar2 = F_00da00e0(param_2,"\n%s</object>",*(undefined4 *)this);
  return uVar2;
}

/* ref: FUN_00dfe9c0 */
uint F_00dfe9c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xdfe9c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_00dfe200(this,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00dfe9f0 */
unsigned int F_00dfe9f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdfe9f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00dfe260(this,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2,param_3);
  return 0;
}

/* ref: FUN_00dfea10 */
uint F_00dfea10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfea10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00dfe2e0(this,&REFG(undefined * PTR32, 0x13516ac),param_1);
  return uVar1;
}

/* ref: FUN_00dfea30 */
unsigned int F_00dfea30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfea30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 8)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return 0;
}

/* ref: FUN_00dfea80 */
unsigned int F_00dfea80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfea80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 4)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return 0;
}

/* ref: FUN_00dfeac0 */
unsigned int F_00dfeac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfeac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  uVar1 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar1 < param_1) {
    iVar3 = uVar1 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar3,0x10);
  }
  iVar3 = param_1 - *(int *)((int)this + 4);
  if (0 < iVar3) {
    puVar2 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 4) * 0x10 + *(int *)this + 8)));
    do {
      if (puVar2 != (undefined4 *)0x8) {
        puVar2[-2] = 0;
        puVar2[-1] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      puVar2 = puVar2 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(int *)((int)this + 4) = param_1;
  return 0;
}

/* ref: FUN_00dfeb30 */
uint F_00dfeb30(unsigned int gen_a0)
{
  GEN_ENTER(0xdfeb30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 << 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dfeb70 */
uint F_00dfeb70(unsigned int gen_a0)
{
  GEN_ENTER(0xdfeb70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dfebc0 */
uint F_00dfebc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfebc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)((int)this + 0xc) = param_1;
  *(undefined1 *)((int)this + 0x10) = (undefined1)param_2;
  F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,1);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + *(int *)this))) = 0;
  *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  return (uint)this;
}

/* ref: FUN_00dfec10 */
uint F_00dfec10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfec10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint uVar2;
  undefined4 * puVar3;
  int * in_ecx;
  int * piVar4;
  int iVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = this;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)*param_1 + 8))((int *)*param_1);
  uVar1 = F_00da4190((undefined *)((int)this + 0x34),uVar1,0xffffffff);
  if (uVar1 == 0xffffffff) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x10))((int *)*param_1);
    if (uVar1 != 0) {
      uVar1 = ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x10))((int *)*param_1);
      (*(uint *)(gen_frame + 0x14)) = uVar1;
      F_00dfec10(this,&(*(uint *)(gen_frame + 0x14)));
    }
    (*(uint *)(gen_frame + 0x14)) = *(uint *)((int)this + 0x2c);
    uVar1 = ((code *)*(gen_code32 *)(*(int *)*param_1 + 8))((int *)*param_1);
    F_00da3a20((undefined *)((int)this + 0x34),uVar1,(*(uint *)(gen_frame + 0x14)));
    if (*(uint *)((int)this + 0x2c) == (*(uint *)((int)this + 0x30) & 0x3fffffff)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),(int *)((int)this + 0x28),4);
    }
    puVar3 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x28) + *(int *)((int)this + 0x2c) * 4)));
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
    *(int *)((int)this + 0x2c) = *(int *)((int)this + 0x2c) + 1;
    (*(int *)(gen_frame + 0x0)) = 0;
    (*(uint *)(gen_frame + 0x4)) = 0;
    (*(uint *)(gen_frame + 0x8)) = 0x80000000;
    uVar1 = ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x18))((int *)*param_1);
    if ((int)((*(uint *)(gen_frame + 0x8)) & 0x3fffffff) < (int)uVar1) {
      uVar2 = ((*(uint *)(gen_frame + 0x8)) & 0x3fffffff) * 2;
      if ((int)uVar2 <= (int)uVar1) {
        uVar2 = uVar1;
      }
      F_00d95690(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0x0)),uVar2,0x10);
    }
    iVar5 = uVar1 - (*(uint *)(gen_frame + 0x4));
    if (0 < iVar5) {
      puVar3 = (undefined4 *)((*(uint *)(gen_frame + 0x4)) * 0x10 + (*(int *)(gen_frame + 0x0)) + 8);
      do {
        if (puVar3 != (undefined4 *)0x8) {
          puVar3[-2] = 0;
          puVar3[-1] = 0;
          *puVar3 = 0;
          puVar3[1] = 0;
        }
        puVar3 = puVar3 + 4;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    (*(uint *)(gen_frame + 0x4)) = uVar1;
    F_00e1ce00(param_1,&(*(int *)(gen_frame + 0x0)));
    (*(int *)(gen_frame + 0x18)) = 0;
    if (0 < (int)(*(uint *)(gen_frame + 0x4))) {
      (*(uint *)(gen_frame + 0x14)) = 0;
      do {
        in_ecx = (int *)F_00e19d40(*(undefined4 *)((*(uint *)(gen_frame + 0x14)) + 8 + (*(int *)(gen_frame + 0x0))));
        if (*in_ecx == 6) {
          piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*param_1 + 4))((int *)*param_1)));
          iVar5 = *piVar4;
          uVar1 = F_00e19c80(in_ecx);
          uVar1 = ((code *)*(gen_code32 *)(iVar5 + 0x24))(piVar4,uVar1);
          (*(uint *)(gen_frame + 0x10)) = uVar1;
          F_00dfec10((*(undefined * PTR32 *)(gen_frame + 0xc)),&(*(uint *)(gen_frame + 0x10)));
        }
        iVar5 = (*(int *)(gen_frame + 0x18)) + 1;
        (*(int *)(gen_frame + 0x18)) = iVar5;
        (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x14)) + 0x10;
      } while (iVar5 < (int)(*(uint *)(gen_frame + 0x4)));
    }
    (*(uint *)(gen_frame + 0x4)) = 0;
    uVar1 = (*(uint *)(gen_frame + 0x8));
    if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                        (&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) << 4);
    }
  }
  return uVar1;
}

/* ref: FUN_00dfede0 */
uint F_00dfede0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfede0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  undefined4 * puVar5;
  int iVar6;
  int iVar7;
  
  (*(int * PTR32 *)(gen_frame + 0xc)) = this;
  ((code *)*(gen_code32 *)(*(int *)*param_1 + 0xc))((int *)*param_1);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)*param_1 + 0xc))((int *)*param_1);
  uVar3 = ((code *)*(gen_code32 *)(*(int *)*param_1 + 8))((int *)*param_1);
  F_00da00e0(param_2,"%s<class name=\"%s\" version=\"%i\"",*(undefined4 *)this,uVar3,uVar2);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x10))((int *)*param_1);
  if (uVar2 != 0) {
    piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*param_1 + 0x10))((int *)*param_1)));
    uVar2 = ((code *)*(gen_code32 *)(*piVar4 + 8))(piVar4);
    F_00da00e0(param_2," parent=\"%s\"",uVar2);
  }
  F_00da00e0(param_2,&REFG(undefined, 0x114d124));
  F_00dfe4a0(this);
  (*(int *)(gen_frame + 0x0)) = 0;
  (*(uint *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0x80000000;
  uVar2 = ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x18))((int *)*param_1);
  if ((int)((*(uint *)(gen_frame + 0x8)) & 0x3fffffff) < (int)uVar2) {
    uVar3 = ((*(uint *)(gen_frame + 0x8)) & 0x3fffffff) * 2;
    if ((int)uVar3 <= (int)uVar2) {
      uVar3 = uVar2;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0x0)),uVar3,0x10);
  }
  iVar7 = uVar2 - (*(uint *)(gen_frame + 0x4));
  if (0 < iVar7) {
    puVar5 = (undefined4 *)((*(uint *)(gen_frame + 0x4)) * 0x10 + (*(int *)(gen_frame + 0x0)) + 8);
    do {
      if (puVar5 != (undefined4 *)0x8) {
        puVar5[-2] = 0;
        puVar5[-1] = 0;
        *puVar5 = 0;
        puVar5[1] = 0;
      }
      puVar5 = puVar5 + 4;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  (*(uint *)(gen_frame + 0x4)) = uVar2;
  F_00e1ce00(param_1,&(*(int *)(gen_frame + 0x0)));
  (*(int *)(gen_frame + 0x10)) = 0;
  if (0 < (int)(*(uint *)(gen_frame + 0x4))) {
    (*(int *)(gen_frame + 0x18)) = 0;
    do {
      puVar5 = (undefined4 *)((*(int *)(gen_frame + 0x18)) + (*(int *)(gen_frame + 0x0)));
      bVar1 = false;
      piVar4 = (int *)puVar5[2];
      (*(uint *)(gen_frame + 0x14)) = 0;
      if (*piVar4 == 8) {
        bVar1 = true;
LAB_00dfef4f: ;
        piVar4 = (int *)piVar4[1];
      }
      else if ((*piVar4 == 9) &&
              ((*(int *)piVar4[1] != 3 ||
               ((((iVar7 = piVar4[2], iVar7 != 4 && (iVar7 != 8)) && (iVar7 != 0xc)) &&
                (iVar7 != 0x10)))))) {
        uVar2 = F_00e19c70(piVar4);
        (*(uint *)(gen_frame + 0x14)) = uVar2;
        goto LAB_00dfef4f;
      }
      iVar7 = *(int *)this;
      uVar2 = F_00dfca90(piVar4);
      F_00da00e0(param_2,"%s<member name=\"%s\" type=\"%s\"",iVar7,*puVar5,uVar2);
      if (bVar1) {
        F_00da00e0(param_2," array=\"true\"");
      }
      if ((*(uint *)(gen_frame + 0x14)) != 0) {
        F_00da00e0(param_2," count=\"%i\"",(*(uint *)(gen_frame + 0x14)));
      }
      piVar4 = (int *)F_00e19d40(piVar4);
      if (*piVar4 == 6) {
        uVar2 = F_00e19c80(piVar4);
        F_00da00e0(param_2," class=\"%s\"",uVar2);
      }
      F_00da00e0(param_2,&REFG(undefined, 0x114d0d8));
      (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) + 0x10;
      iVar7 = (*(int *)(gen_frame + 0x10)) + 1;
      (*(int *)(gen_frame + 0x10)) = iVar7;
      this = (*(int * PTR32 *)(gen_frame + 0xc));
    } while (iVar7 < (int)(*(uint *)(gen_frame + 0x4)));
  }
  *((undefined1 *)GEN_TOP(((*(int *)((int)this + 4) - *(int *)((int)this + 0xc)) + *(int *)this))) = 0;
  iVar7 = *(int *)((int)this + 4) - *(int *)((int)this + 0xc);
  if ((int)(*(uint *)((int)this + 8) & 0x3fffffff) < iVar7) {
    iVar6 = (*(uint *)((int)this + 8) & 0x3fffffff) * 2;
    if (iVar6 <= iVar7) {
      iVar6 = iVar7;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar6,1);
  }
  *(int *)((int)this + 4) = iVar7;
  F_00da00e0(param_2,"%s</class>\n",*(int *)this);
  (*(uint *)(gen_frame + 0x4)) = 0;
  uVar2 = (*(uint *)(gen_frame + 0x8));
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) << 4)
    ;
  }
  return uVar2;
}

/* ref: FUN_00dff070 */
uint F_00dff070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdff070u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  F_00d9fd70(((undefined1 *)(gen_frame + 0xc)),(*(int * PTR32 *)&gen_args[2]));
  F_00da00e0(((undefined1 *)(gen_frame + 0xc)),"<?xml version=\"1.0\" encoding=\"ascii\"?>");
  F_00da00e0(((undefined1 *)(gen_frame + 0xc)),"\n<hktagfile version=\"%d\">\n",1);
  F_00dfe4a0((*(undefined * PTR32 *)&gen_args[0]));
  iVar6 = 0;
  if (0 < *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40)))) {
    do {
      F_00dfede0((*(undefined * PTR32 *)&gen_args[0]),*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))) + iVar6 * 4,((undefined1 *)(gen_frame + 0xc)));
      iVar6 = iVar6 + 1;
    } while (iVar6 < *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))));
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) + 8))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))))));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1)));
  (*(int * PTR32 *)(gen_frame + 0x28)) = piVar1;
  (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)0x1;
  if (1 < *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24)))) {
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    do {
      ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x28)) + 0x28))((*(int * PTR32 *)(gen_frame + 0x28)),&(*(int * PTR32 *)&gen_args[2]),*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) + (int)(*(undefined4 * PTR32 *)&gen_args[1]) * 8)
      ;
      if ((*(int * PTR32 *)&gen_args[2]) == (int *)0x0) {
        puVar2 = &(*(undefined4 *)(gen_frame + 0x20));
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 4))))((*(int * PTR32 *)&gen_args[2]),((undefined1 *)(gen_frame + 0x18)))));
      }
      piVar1 = (*(int * PTR32 *)&gen_args[2]);
      uVar3 = F_00dfd3d0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))),*puVar2,puVar2[1],0xffffffff);
      piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1)));
      uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
      F_00da00e0(((undefined1 *)(gen_frame + 0xc)),"\n%s<object id=\"#%04i\" type=\"%s\">",*(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]),uVar3,uVar4)
      ;
      F_00dfe6e0((*(undefined * PTR32 *)&gen_args[0]),&(*(int * PTR32 *)&gen_args[2]),((undefined1 *)(gen_frame + 0xc)));
      F_00da00e0(((undefined1 *)(gen_frame + 0xc)),"\n%s</object>",*(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]));
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)0x0) {
        *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 6))) + -1;
        piVar1 = (*(int * PTR32 *)&gen_args[2]) + 2;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          ((code *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[2]))))((*(int * PTR32 *)&gen_args[2]),1);
        }
      }
      (*(undefined4 * PTR32 *)&gen_args[1]) = ((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[1]) + 1)));
    } while ((int)(*(undefined4 * PTR32 *)&gen_args[1]) < *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))));
  }
  *((undefined1 *)GEN_TOP(((*(int *)(*(undefined * PTR32 *)&gen_args[0]) - *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc)))) + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) = 0;
  iVar6 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) - *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc)));
  uVar3 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) & 0x3fffffff;
  if ((int)uVar3 < iVar6) {
    iVar5 = uVar3 * 2;
    if (iVar5 <= iVar6) {
      iVar5 = iVar6;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(*(undefined * PTR32 *)&gen_args[0]),iVar5,1);
  }
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = iVar6;
  F_00da00e0(((undefined1 *)(gen_frame + 0xc)),"\n</hktagfile>\n");
  uVar3 = F_00d9fda0(((undefined1 *)(gen_frame + 0xc)));
  return uVar3;
}

/* ref: FUN_00dff230 */
uint F_00dff230(unsigned int gen_a0)
{
  GEN_ENTER(0xdff230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dff270 */
uint F_00dff270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdff270u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0xffffffff;
  if (param_1 != 0) {
    F_00dfe2e0(this,&REFG(undefined * PTR32, 0x13516ac),param_1);
  }
  return (uint)this;
}

/* ref: FUN_00dff2b0 */
uint F_00dff2b0(unsigned int gen_a0)
{
  GEN_ENTER(0xdff2b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dff2f0 */
uint F_00dff2f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdff2f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dff330 */
unsigned int F_00dff330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdff330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 * puVar1;
  uint uVar2;
  int * piVar3;
  
  piVar3 = (int *)*param_1;
  if (piVar3 != (int *)0x0) {
    ((int *)(gen_frame + 0x14))[0] = 0;
    ((int *)(gen_frame + 0x14))[1] = 0;
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3,((int *)(gen_frame + 0x14)) + 2)));
    uVar2 = F_00dfd3d0(this,*puVar1,puVar1[1],0xffffffff);
    if (uVar2 == 0xffffffff) {
      F_00dfe570(this,&(*(int * PTR32 *)(gen_frame + 0x28)),param_1);
      if (*param_1 == 0) {
        if ((*(int * PTR32 *)(gen_frame + 0x28)) != (int *)0x0) {
          *(short *)((int)(*(int * PTR32 *)(gen_frame + 0x28)) + 6) = *(short *)((int)(*(int * PTR32 *)(gen_frame + 0x28)) + 6) + -1;
          piVar3 = (*(int * PTR32 *)(gen_frame + 0x28)) + 2;
          *piVar3 = *piVar3 + -1;
          if (*piVar3 == 0) {
            ((code *)*(gen_code32 *)*(*(int * PTR32 *)(gen_frame + 0x28)))((*(int * PTR32 *)(gen_frame + 0x28)),1);
            return 0;
          }
        }
      }
      else {
        uVar2 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x28)) + 8))((*(int * PTR32 *)(gen_frame + 0x28)));
        ((int *)(gen_frame + 0x14))[4] = uVar2;
        F_00dfec10(this,((int *)(gen_frame + 0x14)) + 4);
        ((int *)(gen_frame + 0x14))[4] = *(undefined4 *)((int)this + 0x10);
        ((int *)(gen_frame + 0x14))[0] = 0;
        ((int *)(gen_frame + 0x14))[1] = 0;
        puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x28)) + 4))((*(int * PTR32 *)(gen_frame + 0x28)),((undefined1 *)(gen_frame + 0xc)))));
        ((int *)(gen_frame + 0x14))[2] = *puVar1;
        ((int *)(gen_frame + 0x14))[3] = puVar1[1];
        if (*(uint *)((int)this + 0x10) == (*(uint *)((int)this + 0x14) & 0x3fffffff)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516ac),(int *)((int)this + 0xc),8);
        }
        puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + *(int *)((int)this + 0x10) * 8)));
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = ((int *)(gen_frame + 0x14))[2];
          puVar1[1] = ((int *)(gen_frame + 0x14))[3];
        }
        *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
        piVar3 = (int *)*param_1;
        ((int *)(gen_frame + 0x14))[2] = 0;
        ((int *)(gen_frame + 0x14))[3] = 0;
        if (piVar3 == (int *)0x0) {
          piVar3 = ((int *)(gen_frame + 0x14)) + 2;
        }
        else {
          piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3,((undefined1 *)(gen_frame + 0xc)))));
        }
        F_00dfd2c0(this,&REFG(undefined * PTR32, 0x13516ac),*piVar3,piVar3[1],((int *)(gen_frame + 0x14))[4]);
        piVar3 = (int *)*param_1;
        ((int *)(gen_frame + 0x14))[0] = 0;
        ((int *)(gen_frame + 0x14))[1] = 0;
        if (piVar3 == (int *)0x0) {
          piVar3 = ((int *)(gen_frame + 0x14));
        }
        else {
          piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3,((undefined1 *)(gen_frame + 0xc)))));
        }
        ((int *)(gen_frame + 0x14))[2] = *piVar3;
        ((int *)(gen_frame + 0x14))[3] = piVar3[1];
        ((int *)(gen_frame + 0x14))[0] = 0;
        ((int *)(gen_frame + 0x14))[1] = 0;
        piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x28)) + 4))((*(int * PTR32 *)(gen_frame + 0x28)),((undefined1 *)(gen_frame + 0x4)))));
        if ((*piVar3 != ((int *)(gen_frame + 0x14))[2]) || (piVar3[1] != ((int *)(gen_frame + 0x14))[3])) {
          ((int *)(gen_frame + 0x14))[0] = 0;
          ((int *)(gen_frame + 0x14))[1] = 0;
          puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x28)) + 4))((*(int * PTR32 *)(gen_frame + 0x28)),((undefined1 *)(gen_frame + 0x4)))));
          F_00dfd2c0(this,&REFG(undefined * PTR32, 0x13516ac),*puVar1,puVar1[1],((int *)(gen_frame + 0x14))[4]);
        }
        F_00dfdae0(this,&(*(int * PTR32 *)(gen_frame + 0x28)));
        *(short *)((int)(*(int * PTR32 *)(gen_frame + 0x28)) + 6) = *(short *)((int)(*(int * PTR32 *)(gen_frame + 0x28)) + 6) + -1;
        piVar3 = (*(int * PTR32 *)(gen_frame + 0x28)) + 2;
        *piVar3 = *piVar3 + -1;
        if (*piVar3 == 0) {
          ((code *)*(gen_code32 *)*(*(int * PTR32 *)(gen_frame + 0x28)))((*(int * PTR32 *)(gen_frame + 0x28)),1);
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_00dff510 */
unsigned int F_00dff510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdff510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00dff330((undefined *)((int)this + 0x14),param_1);
  return 0;
}

/* ref: FUN_00dff520 */
uint F_00dff520(unsigned int gen_a0)
{
  GEN_ENTER(0xdff520u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dff560 */
uint F_00dff560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdff560u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  uint uVar1;
  
  (*(undefined1 * PTR32 *)(gen_frame + 0x90)) = ((undefined1 *)(gen_frame + 0x9c));
  (*(uint *)(gen_frame + 0x98)) = 0x80000080;
  (*(undefined4 *)(gen_frame + 0x94)) = 1;
  ((undefined1 *)(gen_frame + 0x9c))[0] = 0;
  if (*(char *)(param_1 + 0x58) == '\0') {
    F_00e1ded0(GEN_TOF(gen_bits2f(param_3)),&(*(undefined1 * PTR32 *)(gen_frame + 0x90)));
  }
  else {
    F_00da4890(&(*(undefined1 * PTR32 *)(gen_frame + 0x90)),"x%08x",param_3);
    if (*(char *)(param_1 + 0x59) != '\0') {
      (*(undefined1 * PTR32 *)(gen_frame + 0x4)) = ((undefined1 *)(gen_frame + 0x10));
      (*(uint *)(gen_frame + 0xc)) = 0x80000080;
      (*(undefined4 *)(gen_frame + 0x8)) = 1;
      ((undefined1 *)(gen_frame + 0x10))[0] = 0;
      F_00e1ded0(GEN_TOF(gen_bits2f(param_3)),&(*(undefined1 * PTR32 *)(gen_frame + 0x4)));
      F_00da4bf0(&(*(undefined1 * PTR32 *)(gen_frame + 0x90))," <!-- ",0xffffffff);
      F_00da4bf0(&(*(undefined1 * PTR32 *)(gen_frame + 0x90)),(*(undefined1 * PTR32 *)(gen_frame + 0x4)),0xffffffff);
      F_00da4bf0(&(*(undefined1 * PTR32 *)(gen_frame + 0x90)),&REFG(undefined, 0x114d1ac),0xffffffff);
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      if (-1 < (int)(*(uint *)(gen_frame + 0xc))) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516a4),(*(undefined1 * PTR32 *)(gen_frame + 0x4)),(*(uint *)(gen_frame + 0xc)) & 0x3fffffff);
      }
    }
  }
  F_00da0140(param_2);
  (*(undefined4 *)(gen_frame + 0x94)) = 0;
  uVar1 = (*(uint *)(gen_frame + 0x98));
  if (-1 < (int)(*(uint *)(gen_frame + 0x98))) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),(*(undefined1 * PTR32 *)(gen_frame + 0x90)),(*(uint *)(gen_frame + 0x98)) & 0x3fffffff);
  }
  return uVar1;
}

/* ref: FUN_00dff6d0 */
uint F_00dff6d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdff6d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x130];
  float fVar1;
  uint in_EAX = 0;
  int iVar2;
  
  iVar2 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x124)) = this;
  if (0 < param_3) {
    do {
      if (iVar2 != 0) {
        F_00da00e0(param_1,&REFG(undefined, 0x10919e8));
      }
      fVar1 = *(float *)(param_2 + iVar2 * 4);
      (*(float *)(gen_frame + 0x128)) = fVar1;
      (*(undefined1 * PTR32 *)(gen_frame + 0x98)) = ((undefined1 *)(gen_frame + 0xa4));
      (*(uint *)(gen_frame + 0xa0)) = 0x80000080;
      (*(undefined4 *)(gen_frame + 0x9c)) = 1;
      ((undefined1 *)(gen_frame + 0xa4))[0] = 0;
      if (*(char *)((int)(*(undefined * PTR32 *)(gen_frame + 0x124)) + 0x58) == '\0') {
        F_00e1ded0(fVar1,&(*(undefined1 * PTR32 *)(gen_frame + 0x98)));
      }
      else {
        F_00da4890(&(*(undefined1 * PTR32 *)(gen_frame + 0x98)),"x%08x",(undefined4)gen_fl2bits(fVar1));
        if (*(char *)((int)(*(undefined * PTR32 *)(gen_frame + 0x124)) + 0x59) != '\0') {
          (*(undefined1 * PTR32 *)(gen_frame + 0xc)) = ((undefined1 *)(gen_frame + 0x18));
          (*(uint *)(gen_frame + 0x14)) = 0x80000080;
          (*(undefined4 *)(gen_frame + 0x10)) = 1;
          ((undefined1 *)(gen_frame + 0x18))[0] = 0;
          F_00e1ded0((*(float *)(gen_frame + 0x128)),&(*(undefined1 * PTR32 *)(gen_frame + 0xc)));
          F_00da4bf0(&(*(undefined1 * PTR32 *)(gen_frame + 0x98))," <!-- ",0xffffffff);
          F_00da4bf0(&(*(undefined1 * PTR32 *)(gen_frame + 0x98)),(*(undefined1 * PTR32 *)(gen_frame + 0xc)),0xffffffff);
          F_00da4bf0(&(*(undefined1 * PTR32 *)(gen_frame + 0x98)),&REFG(undefined, 0x114d1ac),0xffffffff);
          (*(undefined4 *)(gen_frame + 0x10)) = 0;
          if (-1 < (int)(*(uint *)(gen_frame + 0x14))) {
            ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),(*(undefined1 * PTR32 *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x14)) & 0x3fffffff);
          }
        }
      }
      F_00da0140(param_1);
      (*(undefined4 *)(gen_frame + 0x9c)) = 0;
      in_EAX = (*(uint *)(gen_frame + 0xa0));
      if (-1 < (int)(*(uint *)(gen_frame + 0xa0))) {
        in_EAX = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                           (&REFG(undefined * PTR32, 0x13516a4),(*(undefined1 * PTR32 *)(gen_frame + 0x98)),(*(uint *)(gen_frame + 0xa0)) & 0x3fffffff);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_3);
  }
  return in_EAX;
}

/* ref: FUN_00dff880 */
uint F_00dff880(unsigned int gen_a0)
{
  GEN_ENTER(0xdff880u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dffcb0 */
uint F_00dffcb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdffcb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0xffffffff;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(uint *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0x80000000;
  param_1 = param_1 & 0xffffff00;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0x80000000;
  F_00da3de0((undefined *)((int)this + 0x34),param_1);
  if (*(uint *)((int)this + 0x10) == (*(uint *)((int)this + 0x14) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),(int *)((int)this + 0xc),8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + *(int *)((int)this + 0x10) * 8)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  F_00dfd2c0(this,&REFG(undefined * PTR32, 0x13516ac),0,0,0);
  return (uint)this;
}

/* ref: FUN_00dffd50 */
uint F_00dffd50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdffd50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 * puVar1;
  int * in_eax;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char * pcVar5;
  
  puVar1 = param_1;
  (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = this;
  in_eax = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*param_1 + 4))((int *)*param_1)));
  (*(int * PTR32 *)(gen_frame + 0x1c)) = in_eax;
  uVar2 = F_00dfcb50(in_eax);
  (*(uint *)(gen_frame + 0x20)) = uVar2;
  (*(uint *)(gen_frame + 0x28)) = 1;
  uVar2 = ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x14))((int *)*param_1);
  (*(uint *)(gen_frame + 0x18)) = uVar2;
  uVar3 = F_00dfca90(in_eax);
  iVar4 = *in_eax;
  if (((iVar4 == 4) || (iVar4 == 3)) || (param_1 = (undefined4 *)uVar3, iVar4 == 2)) {
    param_1 = (undefined4 *)0x0;
  }
  iVar4 = 0;
  if (0 < (int)uVar2) {
    do {
      uVar2 = (*(uint *)(gen_frame + 0x28)) - 1;
      (*(uint *)(gen_frame + 0x28)) = uVar2;
      if (uVar2 == 0) {
        F_00da00e0(param_2,(*(undefined * PTR32 (*)[1])REFP(0x114d200)),*(*(undefined4 * PTR32 *)(gen_frame + 0x24)));
        (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x20));
      }
      if (param_1 == (undefined4 *)0x0) {
        (*(undefined4 *)(gen_frame + 0x8)) = *puVar1;
        (*(int *)(gen_frame + 0xc)) = iVar4;
        F_00dff8c0((*(undefined4 * PTR32 *)(gen_frame + 0x24)),&(*(undefined4 *)(gen_frame + 0x8)),param_2);
        pcVar5 = " ";
LAB_00dffe57: ;
        uVar3 = F_00da00e0(param_2,pcVar5);
      }
      else {
        if ((*(*(int * PTR32 *)(gen_frame + 0x1c)) == 5) &&
           (uVar2 = ((code *)*(gen_code32 *)(*(int *)*puVar1 + 0x34))((int *)*puVar1,iVar4), uVar2 == 0)) {
          pcVar5 = "<null/>";
          goto LAB_00dffe57;
        }
        F_00da00e0(param_2,&REFG(undefined, 0x114d214),param_1);
        (*(undefined4 *)(gen_frame + 0x10)) = *puVar1;
        (*(int *)(gen_frame + 0x14)) = iVar4;
        F_00dff8c0((*(undefined4 * PTR32 *)(gen_frame + 0x24)),&(*(undefined4 *)(gen_frame + 0x10)),param_2);
        uVar3 = F_00da00e0(param_2,"</%s>",param_1);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(*(uint *)(gen_frame + 0x18)));
  }
  return uVar3;
}

/* ref: FUN_00dffe80 */
uint F_00dffe80(unsigned int gen_a0)
{
  GEN_ENTER(0xdffe80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  uint uVar5;
  
  F_00da3e20((undefined *)((int)this + 0x34));
  *(undefined4 *)((int)this + 0x2c) = 0;
  if (-1 < *(int *)((int)this + 0x30)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x28),
               *(int *)((int)this + 0x30) * 4);
  }
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x30) = 0x80000000;
  iVar2 = *(int *)((int)this + 0x20);
  iVar3 = *(int *)((int)this + 0x1c);
  while (iVar2 = iVar2 + -1, -1 < iVar2) {
    puVar4 = *(undefined4 * PTR32 *)(iVar3 + iVar2 * 4);
    if (puVar4 != (undefined4 *)0x0) {
      *(short *)((int)puVar4 + 6) = *(short *)((int)puVar4 + 6) + -1;
      piVar1 = puVar4 + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        ((code *)*(gen_code32 *)*puVar4)(puVar4,1);
      }
    }
  }
  *(undefined4 *)((int)this + 0x20) = 0;
  if ((*(uint *)((int)this + 0x24) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x1c),
               *(uint *)((int)this + 0x24) * 4);
  }
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0x80000000;
  *(undefined4 *)((int)this + 0x10) = 0;
  if ((*(uint *)((int)this + 0x14) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0xc),
               *(uint *)((int)this + 0x14) * 8);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  uVar5 = F_00dfd5f0(this,&REFG(undefined * PTR32, 0x13516ac));
  return uVar5;
}

/* ref: FUN_00dfff70 */
uint F_00dfff70(unsigned int gen_a0)
{
  GEN_ENTER(0xdfff70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00dffe80((undefined *)((int)this + 0x14));
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e003a0 */
uint F_00e003a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe003a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)((int)this + 0xc) = 2;
  *(undefined1 *)((int)this + 0x10) = 0x20;
  F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,1);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + *(int *)this))) = 0;
  *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  F_00dffcb0((undefined *)((int)this + 0x14),param_1);
  *(undefined1 *)((int)this + 0x58) = param_2[1];
  *(undefined1 *)((int)this + 0x59) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e00410 */
uint F_00e00410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe00410u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = *in_ecx == 1;
  return param_2;
}

/* ref: FUN_00e00450 */
uint F_00e00450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xe00450u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x30))))
                    (*(int * PTR32 *)this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00e00460 */
uint F_00e00460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe00460u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0xc))))(*(int * PTR32 *)this,param_1,param_2);
  return param_1;
}

/* ref: FUN_00e00490 */
uint F_00e00490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe00490u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return (*(*(uint * PTR32 *)&gen_args[0]) >> 4) * -0x61c8864f & (*(uint *)&gen_args[1]);
}

/* ref: FUN_00e004b0 */
uint F_00e004b0(unsigned int gen_a0)
{
  GEN_ENTER(0xe004b0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  *param_1 = 0xffffffff;
  return (uint)param_1;
}

/* ref: FUN_00e004c0 */
byte F_00e004c0(unsigned int gen_a0)
{
  GEN_ENTER(0xe004c0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  return *param_1 != -1;
}

/* ref: FUN_00e004d0 */
uint F_00e004d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe004d0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00e00500 */
uint F_00e00500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe00500u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (((*(uint *)&gen_args[1]) == 0) && ((*(uint *)&gen_args[2]) == ((int)0x80000000))) {
    F_00da6940((*(undefined * PTR32 *)&gen_args[0]),0x81);
    uVar2 = 0;
    uVar3 = 0x2000000;
  }
  else if (((int)(*(uint *)&gen_args[2]) < 1) && ((int)(*(uint *)&gen_args[2]) < 0)) {
    uVar3 = ((*(uint *)&gen_args[2]) + ((*(uint *)&gen_args[1]) != 0)) * -2 | -(*(uint *)&gen_args[1]) >> 0x1f;
    uVar2 = (*(uint *)&gen_args[1]) * -2 | 1;
  }
  else {
    uVar3 = (*(uint *)&gen_args[2]) << 1 | (*(uint *)&gen_args[1]) >> 0x1f;
    uVar2 = (*(uint *)&gen_args[1]) * 2;
  }
  bVar1 = (byte)uVar2;
  uVar2 = uVar2 >> 7 | uVar3 << 0x19;
  uVar3 = uVar3 >> 7;
  (*(uint *)&gen_args[2]) = CONCAT31(GEN_PIECE(&(*(uint *)&gen_args[2]), 1, 3),bVar1) & 0xffffff7f;
  if (uVar2 != 0 || uVar3 != 0) {
    do {
      F_00da6940((*(undefined * PTR32 *)&gen_args[0]),(uint)(bVar1 & 0x7f | 0x80));
      bVar1 = (byte)uVar2;
      uVar2 = uVar2 >> 7 | uVar3 << 0x19;
      uVar3 = uVar3 >> 7;
    } while (uVar2 != 0 || uVar3 != 0);
    (*(uint *)&gen_args[2]) = CONCAT31(GEN_PIECE(&(*(uint *)&gen_args[2]), 1, 3),bVar1) & 0xffffff7f;
  }
  uVar2 = F_00da6940((*(undefined * PTR32 *)&gen_args[0]),(*(uint *)&gen_args[2]));
  return uVar2;
}

/* ref: FUN_00e005a0 */
uint F_00e005a0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xe005a0u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = F_00da6cd0(param_1,(undefined4)gen_fl2bits(param_2));
  return uVar1;
}

/* ref: FUN_00e005c0 */
uint F_00e005c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe005c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00da6e10(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e005d0 */
uint F_00e005d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe005d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  *(undefined4 *)this = *param_1;
  uVar1 = param_1[1];
  *(uint *)((int)this + 4) = uVar1;
  *(undefined4 *)((int)this + 8) = param_2;
  return uVar1;
}

/* ref: FUN_00e005f0 */
uint F_00e005f0(unsigned int gen_a0)
{
  GEN_ENTER(0xe005f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * piVar1;
  
  piVar1 = (int *)F_00e19d40(param_1);
  return (uint)(*piVar1 == 6);
}

/* ref: FUN_00e00640 */
uint F_00e00640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe00640u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00e00650 */
uint F_00e00650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe00650u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00e00680 */
uint F_00e00680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe00680u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00e00690 */
uint F_00e00690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe00690u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00e00720 */
uint F_00e00720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe00720u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = (*(uint *)(in_ecx + 4) & 0x80000000) == 0;
  return param_2;
}

/* ref: FUN_00e00740 */
uint F_00e00740(unsigned int gen_a0)
{
  GEN_ENTER(0xe00740u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  return (uint)(((*(uint *)&gen_args[0]) - 1 & (*(uint *)&gen_args[0])) == 0);
}

/* ref: FUN_00e00760 */
uint F_00e00760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe00760u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3 | 0x80000000;
  return (uint)this;
}

/* ref: FUN_00e00800 */
uint F_00e00800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe00800u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*(int *)this + 4 + param_2 * 0xc);
  *param_1 = *(undefined4 *)(*(int *)this + param_2 * 0xc);
  param_1[1] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00e00820 */
uint F_00e00820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe00820u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(*in_ecx + 8 + param_2 * 0xc);
}

/* ref: FUN_00e00840 */
uint F_00e00840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe00840u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)(*(int *)this + 8 + param_1 * 0xc) = param_2;
  return param_1 * 3;
}

/* ref: FUN_00e00860 */
unsigned int F_00e00860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe00860u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  
  iVar1 = param_1 + 1;
  if (iVar1 <= *(int *)((int)this + 8)) {
    piVar2 = (int *)(*(int *)this + iVar1 * 0xc);
    do {
      if (*piVar2 != -1) {
        return 0;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 3;
    } while (iVar1 <= *(int *)((int)this + 8));
  }
  return 0;
}

/* ref: FUN_00e00890 */
uint F_00e00890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe00890u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  *(bool *)param_2 = param_3 <= *(int *)(in_ecx + 8);
  return param_2;
}

/* ref: FUN_00e008b0 */
uint F_00e008b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe008b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (*(int *)((int)this + 8) < *(int *)((int)this + 4) * 2) {
    F_00e01480(this,param_1,*(int *)((int)this + 8) * 2 + 2);
  }
  iVar1 = *(int *)this;
  uVar3 = (param_2 >> 4) * -0x61c8864f & *(uint *)((int)this + 8);
  iVar4 = uVar3 * 0xc;
  uVar2 = 1;
  if (*(int *)(iVar1 + iVar4) != -1) {
    do {
      if ((*(uint *)(iVar1 + iVar4) == param_2) && (*(int *)(iVar1 + 4 + iVar4) == param_3)) {
        uVar2 = 0;
        goto LAB_00e00926;
      }
      uVar3 = uVar3 + 1 & *(uint *)((int)this + 8);
      iVar4 = uVar3 * 0xc;
    } while (*(int *)(iVar4 + iVar1) != -1);
    uVar2 = 1;
  }
LAB_00e00926: ;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + uVar2;
  iVar4 = uVar3 * 0xc;
  *(uint *)(iVar1 + iVar4) = param_2;
  *(int *)(iVar1 + 4 + iVar4) = param_3;
  *(undefined4 *)(iVar4 + 8 + *(int *)this) = param_4;
  return uVar2;
}

/* ref: FUN_00e00960 */
uint F_00e00960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe00960u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint * puVar5;
  
  uVar1 = *(uint *)((int)this + 8);
  if (0 < (int)uVar1) {
    iVar2 = *(int *)this;
    uVar4 = (param_1 >> 4) * -0x61c8864f & uVar1;
    iVar3 = *(int *)(iVar2 + uVar4 * 0xc);
    while (iVar3 != -1) {
      puVar5 = (uint *)(iVar2 + uVar4 * 0xc);
      if ((*puVar5 == param_1) && (puVar5[1] == param_2)) {
        return uVar4;
      }
      uVar4 = uVar4 + 1 & uVar1;
      iVar3 = *(int *)(iVar2 + uVar4 * 0xc);
    }
  }
  return uVar1 + 1;
}

/* ref: FUN_00e009c0 */
uint F_00e009c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe009c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint * puVar5;
  
  uVar1 = *(uint *)((int)this + 8);
  if (0 < (int)uVar1) {
    iVar2 = *(int *)this;
    uVar4 = (param_1 >> 4) * -0x61c8864f & uVar1;
    iVar3 = *(int *)(iVar2 + uVar4 * 0xc);
    while (iVar3 != -1) {
      puVar5 = (uint *)(iVar2 + uVar4 * 0xc);
      if ((*puVar5 == param_1) && (puVar5[1] == param_2)) {
        return *(uint *)(iVar2 + 8 + uVar4 * 0xc);
      }
      uVar4 = uVar4 + 1 & uVar1;
      iVar3 = *(int *)(iVar2 + uVar4 * 0xc);
    }
  }
  return param_3;
}

/* ref: FUN_00e00a20 */
uint F_00e00a20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe00a20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  uint uVar1;
  
  uVar1 = F_00e00960(this,param_1,param_2);
  if ((int)uVar1 <= *(int *)((int)this + 8)) {
    *param_3 = *(undefined4 *)(*(int *)this + 8 + uVar1 * 0xc);
    return 0;
  }
  return 1;
}

/* ref: FUN_00e00a60 */
unsigned int F_00e00a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe00a60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  *(undefined4 *)(*(int *)this + param_1 * 0xc) = 0xffffffff;
  uVar7 = *(uint *)((int)this + 8);
  uVar5 = uVar7 + param_1 & uVar7;
  iVar1 = *(int *)(*(int *)this + uVar5 * 0xc);
  while (iVar1 != -1) {
    uVar5 = uVar5 + uVar7 & uVar7;
    iVar1 = *(int *)(*(int *)this + uVar5 * 0xc);
  }
  uVar6 = uVar5 + 1 & uVar7;
  uVar5 = param_1 + 1 & uVar7;
  iVar2 = uVar5 * 0xc;
  iVar1 = *(int *)(*(int *)this + iVar2);
  uVar4 = param_1;
  while (iVar1 != -1) {
    iVar1 = *(int *)this;
    uVar7 = (*(uint *)(iVar1 + iVar2) >> 4) * -0x61c8864f & uVar7;
    param_1 = uVar4;
    if ((((uVar5 < uVar6) || (uVar7 <= uVar4)) &&
        ((uVar4 <= uVar5 || ((uVar7 <= uVar4 && (uVar5 < uVar7)))))) &&
       ((uVar7 <= uVar4 || (uVar6 <= uVar7)))) {
      iVar3 = uVar4 * 0xc;
      *(undefined4 *)(iVar3 + iVar1) = *(undefined4 *)(iVar1 + iVar2);
      *(undefined4 *)(iVar3 + 4 + iVar1) = *(undefined4 *)(iVar1 + 4 + iVar2);
      *(undefined4 *)(iVar3 + 8 + *(int *)this) = *(undefined4 *)(*(int *)this + 8 + iVar2);
      *(undefined4 *)(iVar2 + *(int *)this) = 0xffffffff;
      param_1 = uVar5;
    }
    uVar7 = *(uint *)((int)this + 8);
    uVar5 = uVar5 + 1 & uVar7;
    iVar2 = uVar5 * 0xc;
    uVar4 = param_1;
    iVar1 = *(int *)(iVar2 + *(int *)this);
  }
  return 0;
}

/* ref: FUN_00e00b50 */
uint F_00e00b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe00b50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  uint uVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  uint * puVar5;
  int local_8;
  
  uVar1 = *(uint *)((int)this + 8);
  if (-1 < (int)uVar1) {
    puVar2 = *(uint * PTR32 *)this;
    local_8 = uVar1 + 1;
    puVar5 = puVar2;
    do {
      uVar3 = *puVar5;
      if (uVar3 != 0xffffffff) {
        uVar4 = (uVar3 >> 4) * -0x61c8864f;
        while( true ) {
          uVar4 = uVar4 & uVar1;
          if ((puVar2[uVar4 * 3] == uVar3) && (puVar2[uVar4 * 3 + 1] == puVar5[1])) break;
          uVar4 = uVar4 + 1;
        }
      }
      puVar5 = puVar5 + 3;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00e00bb0 */
uint F_00e00bb0(unsigned int gen_a0)
{
  GEN_ENTER(0xe00bb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 8) + 1;
  if (0 < iVar1) {
    in_EAX = 0;
    do {
      *(undefined4 *)(in_EAX + *(int *)this) = 0xffffffff;
      in_EAX = in_EAX + 0xc;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) & 0x80000000;
  return in_EAX;
}

/* ref: FUN_00e00be0 */
uint F_00e00be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe00be0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00e00bb0(this);
  if ((*(uint *)((int)this + 4) & 0x80000000) == 0) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))
                      (param_1,*(undefined4 *)this,(*(int *)((int)this + 8) * 3 + 3) * 4);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0xffffffff;
  return uVar1;
}

/* ref: FUN_00e00c30 */
uint F_00e00c30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe00c30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  *(undefined4 *)this = param_1;
  *(uint *)((int)this + 4) = param_2 | 0x80000000;
  *(uint *)((int)this + 8) = param_3 - 1U;
  return param_3 - 1U;
}

/* ref: FUN_00e00c50 */
uint F_00e00c50(unsigned int gen_a0)
{
  GEN_ENTER(0xe00c50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  
  iVar1 = 8;
  if (8 < param_1 * 2) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_1 * 2);
  }
  return iVar1 * 0xc;
}

/* ref: FUN_00e00c70 */
unsigned int F_00e00c70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe00c70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  uint uVar2;
  
  uVar2 = param_2 / 0xc;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = 0x80000000;
  *(uint *)((int)this + 8) = uVar2 - 1;
  if (uVar2 != 0) {
    iVar1 = 0;
    do {
      *(undefined4 *)(iVar1 + *(int *)this) = 0xffffffff;
      iVar1 = iVar1 + 0xc;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00e00cc0 */
unsigned int F_00e00cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe00cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)this;
  *(undefined4 *)this = *param_1;
  uVar2 = *(undefined4 *)((int)this + 4);
  *(undefined4 *)((int)this + 4) = param_1[1];
  uVar3 = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)this + 8) = param_1[2];
  param_1[2] = uVar3;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return 0;
}

/* ref: FUN_00e00d20 */
uint F_00e00d20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe00d20u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00e00d70 */
uint F_00e00d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe00d70u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00e00f10 */
uint F_00e00f10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe00f10u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  char cVar1;
  char * pcVar2;
  
  F_00e03cf0(((undefined1 *)(gen_frame + 0x0)),(*(int * PTR32 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]));
  F_00e03fc0(((undefined1 *)(gen_frame + 0x0)),(*(undefined4 *)&gen_args[1]));
  ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 0x14))))((*(int * PTR32 *)&gen_args[2]));
  pcVar2 = ((char *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 0xc))))((*(int * PTR32 *)&gen_args[2]),(int)&(*(undefined4 *)&gen_args[4]) + 3)));
  cVar1 = *pcVar2;
  F_00e03e60(((undefined1 *)(gen_frame + 0x0)));
  return (uint)(cVar1 == '\0');
}

/* ref: FUN_00e00fb0 */
uint F_00e00fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe00fb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3;
  return param_3;
}

/* ref: FUN_00e00fd0 */
uint F_00e00fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe00fd0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) << 4)));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))))((*(undefined * PTR32 *)&gen_args[0]),&(*(int * PTR32 *)&gen_args[1]));
  *piVar1 = (int)((int)(*(int * PTR32 *)&gen_args[1]) + ((int)(*(int * PTR32 *)&gen_args[1]) >> 0x1f & 0xfU)) >> 4;
  return uVar2;
}

/* ref: FUN_00e01020 */
uint F_00e01020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe01020u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 0xc);
  return uVar1;
}

/* ref: FUN_00e01040 */
uint F_00e01040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe01040u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00e01060 */
uint F_00e01060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe01060u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 << 4);
  return uVar1;
}

/* ref: FUN_00e010a0 */
uint F_00e010a0(unsigned int gen_a0)
{
  GEN_ENTER(0xe010a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  return uVar2;
}

/* ref: FUN_00e010c0 */
uint F_00e010c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe010c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (int *)*param_1;
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  uVar2 = F_00da4190((undefined *)((int)this + 0x20),uVar2,0xffffffff);
  return uVar2;
}

/* ref: FUN_00e01110 */
uint F_00e01110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe01110u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2;
}

/* ref: FUN_00e01120 */
uint F_00e01120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe01120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  piVar1 = (int *)*param_1;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  if (piVar1 == (int *)0x0) {
    puVar2 = &(*(undefined4 *)(gen_frame + 0x14));
  }
  else {
    puVar2 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,((undefined1 *)(gen_frame + 0xc)))));
  }
  uVar3 = F_00e009c0((undefined *)((int)this + 0x34),*puVar2,puVar2[1],0xffffffff);
  uVar3 = F_00e03a70(this,param_1,uVar3 * 0x10 + *(int *)((int)this + 0x4c));
  return uVar3;
}

/* ref: FUN_00e01180 */
unsigned int F_00e01180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe01180u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  int iVar4;
  
  if ((*(int *)this != 0) && (piVar1 = (int *)*param_2, piVar1 != (int *)0x0)) {
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    puVar2 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,((undefined1 *)(gen_frame + 0xc)))));
    uVar3 = F_00e009c0((undefined *)((int)this + 4),*puVar2,puVar2[1],0xffffffff);
    if (uVar3 != 0xffffffff) {
      iVar4 = **((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + uVar3 * 4)));
      goto LAB_00e011d3;
    }
  }
  iVar4 = *param_2;
LAB_00e011d3: ;
  *param_1 = iVar4;
  if (iVar4 != 0) {
    *(short *)(iVar4 + 6) = *(short *)(iVar4 + 6) + 1;
    *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
  }
  return 0;
}

/* ref: FUN_00e011f0 */
uint F_00e011f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe011f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3 | 0x80000000;
  return (uint)this;
}

/* ref: FUN_00e01210 */
uint F_00e01210(unsigned int gen_a0)
{
  GEN_ENTER(0xe01210u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  return uVar2;
}

/* ref: FUN_00e01230 */
unsigned int F_00e01230(unsigned int gen_a0)
{
  GEN_ENTER(0xe01230u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0xc);
  }
  return 0;
}

/* ref: FUN_00e01280 */
uint F_00e01280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe01280u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00e008b0(this,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00e012a0 */
uint F_00e012a0(unsigned int gen_a0)
{
  GEN_ENTER(0xe012a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  return uVar2;
}

/* ref: FUN_00e012c0 */
unsigned int F_00e012c0(unsigned int gen_a0)
{
  GEN_ENTER(0xe012c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0xc);
  }
  return 0;
}

/* ref: FUN_00e012f0 */
uint F_00e012f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe012f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00e00960(this,param_2,param_3);
  *(bool *)param_1 = (int)uVar1 <= *(int *)((int)this + 8);
  return param_1;
}

/* ref: FUN_00e01390 */
uint F_00e01390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe01390u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(int *)(in_ecx + 4) = *(int *)(in_ecx + 4) - param_2;
  return param_2;
}

/* ref: FUN_00e013a0 */
uint F_00e013a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe013a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,0xc);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00e013e0 */
uint F_00e013e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe013e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,0xc);
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return *(int *)this + iVar1 * 0xc;
}

/* ref: FUN_00e01420 */
uint F_00e01420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe01420u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00e00c70(this,param_1,param_2);
  return (uint)this;
}

/* ref: FUN_00e01440 */
uint F_00e01440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe01440u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00e00960(this,param_1,param_2);
  if ((int)uVar1 <= *(int *)((int)this + 8)) {
    F_00e00a60(this,uVar1);
    return 0;
  }
  return 1;
}

/* ref: FUN_00e01480 */
uint F_00e01480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe01480u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int * piVar8;
  
  iVar7 = param_2;
  if (param_2 < 9) {
    iVar7 = 8;
  }
  uVar1 = *(uint *)((int)this + 4);
  piVar2 = *(int * PTR32 *)this;
  iVar6 = *(int *)((int)this + 8) + 1;
  uVar3 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1,iVar7 * 0xc);
  if (uVar3 != 0) {
    *(uint *)this = uVar3;
    if (0 < iVar7) {
      iVar4 = 0;
      iVar5 = iVar7;
      do {
        *(undefined4 *)(iVar4 + *(int *)this) = 0xffffffff;
        iVar4 = iVar4 + 0xc;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    *(undefined4 *)((int)this + 4) = 0;
    *(int *)((int)this + 8) = iVar7 + -1;
    piVar8 = piVar2;
    param_2 = iVar6;
    if (0 < iVar6) {
      do {
        if (*piVar8 != -1) {
          F_00e008b0(this,param_1,*piVar8,piVar8[1],piVar8[2]);
        }
        iVar7 = param_2 + -1;
        piVar8 = piVar8 + 3;
        param_2 = iVar7;
      } while (iVar7 != 0);
    }
    if ((uVar1 & 0x80000000) == 0) {
      ((code *)*(gen_code32 *)(*param_1 + 8))(param_1,piVar2,iVar6 * 0xc);
    }
    return 0;
  }
  return 1;
}

/* ref: FUN_00e01550 */
uint F_00e01550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe01550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,4);
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return *(int *)this + iVar1 * 4;
}

/* ref: FUN_00e01590 */
uint F_00e01590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe01590u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
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

/* ref: FUN_00e015d0 */
uint F_00e015d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe015d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,0x10);
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return iVar1 * 0x10 + *(int *)this;
}

/* ref: FUN_00e01610 */
uint F_00e01610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe01610u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  int iVar4;
  
  iVar4 = (*(int *)&gen_args[1]);
  *(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0x80000000;
  if ((*(int *)&gen_args[1]) == 0) {
    uVar1 = 0;
  }
  else {
    (*(int *)&gen_args[1]) = (*(int *)&gen_args[1]) << 4;
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0xc))))(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)&gen_args[1]));
    iVar2 = (int)((*(int *)&gen_args[1]) + ((*(int *)&gen_args[1]) >> 0x1f & 0xfU)) >> 4;
    if (iVar2 != 0) goto LAB_00e01660;
  }
  iVar2 = ((int)0x80000000);
LAB_00e01660: ;
  *(uint *)(*(undefined * PTR32 *)&gen_args[0]) = uVar1;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = iVar4;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = iVar2;
  if (0 < iVar4) {
    puVar3 = (undefined4 *)(uVar1 + 8);
    do {
      if (puVar3 != (undefined4 *)0x8) {
        puVar3[-2] = 0;
        puVar3[-1] = 0;
        *puVar3 = 0;
        puVar3[1] = 0;
      }
      puVar3 = puVar3 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00e017e0 */
uint F_00e017e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe017e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e01840 */
uint F_00e01840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe01840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  if (param_1 == 0) {
    uVar1 = F_00da6940(this,3);
    return uVar1;
  }
  uVar1 = F_00da4190((undefined *)((int)this + 0x10),param_1,0xffffffff);
  if (uVar1 == 0xffffffff) {
    uVar1 = F_00da0e60(param_1);
    F_00e00500(this,uVar1,(int)uVar1 >> 0x1f);
    F_00da6ae0(this);
    uVar1 = F_00da3a20((undefined *)((int)this + 0x10),param_1,*(int *)((int)this + 0x14) + 1);
    return uVar1;
  }
  uVar1 = F_00e00500(this,-uVar1,(int)-uVar1 >> 0x1f);
  return uVar1;
}

/* ref: FUN_00e018c0 */
uint F_00e018c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe018c0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  int iVar2;
  int * piVar3;
  undefined4 * puVar4;
  uint uVar5;
  
  F_00e01180(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58))),&(*(int * PTR32 *)&gen_args[1]),(*(int * PTR32 *)&gen_args[1]));
  piVar3 = (*(int * PTR32 *)&gen_args[1]);
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
    puVar4 = &(*(undefined4 *)(gen_frame + 0x14));
  }
  else {
    puVar4 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 4))))((*(int * PTR32 *)&gen_args[1]),((undefined1 *)(gen_frame + 0xc)))));
  }
  uVar5 = F_00e009c0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))),*puVar4,puVar4[1],0xffffffff);
  iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))) + 0xc + uVar5 * 0x10)));
  uVar5 = F_00e00500((*(undefined * PTR32 *)&gen_args[0]),iVar2,iVar2 >> 0x1f);
  if (piVar3 != (int *)0x0) {
    *(short *)((int)piVar3 + 6) = *(short *)((int)piVar3 + 6) + -1;
    piVar1 = piVar3 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      uVar5 = ((code *)*(gen_code32 *)*piVar3)(piVar3,1);
    }
  }
  return uVar5;
}

/* ref: FUN_00e01940 */
uint F_00e01940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe01940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar3,1);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00e01980 */
unsigned int F_00e01980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe01980u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar3,1);
  }
  iVar3 = *(int *)((int)this + 4);
  iVar1 = *(int *)this;
  iVar4 = param_1 - iVar3;
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      *(undefined1 *)(iVar5 + iVar1 + iVar3) = *param_2;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  *(int *)((int)this + 4) = param_1;
  return 0;
}

/* ref: FUN_00e019e0 */
uint F_00e019e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe019e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = *(int *)((int)this + 4);
  iVar1 = iVar2 + param_1;
  uVar3 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar3 < iVar1) {
    iVar4 = uVar3 * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar4,1);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + param_1;
  return *(int *)this + iVar2;
}

/* ref: FUN_00e01a30 */
uint F_00e01a30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe01a30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00e01420(this,param_1,param_2);
  return (uint)this;
}

/* ref: FUN_00e01a50 */
uint F_00e01a50(unsigned int gen_a0)
{
  GEN_ENTER(0xe01a50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516a4),this,4);
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return *(int *)this + iVar1 * 4;
}

/* ref: FUN_00e01a80 */
uint F_00e01a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe01a80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar3,0x10);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00e01ac0 */
uint F_00e01ac0(unsigned int gen_a0)
{
  GEN_ENTER(0xe01ac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516a4),this,0x10);
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return iVar1 * 0x10 + *(int *)this;
}

/* ref: FUN_00e01af0 */
uint F_00e01af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe01af0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar3,0xc);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00e01b30 */
uint F_00e01b30(unsigned int gen_a0)
{
  GEN_ENTER(0xe01b30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516a4),this,0xc);
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return *(int *)this + iVar1 * 0xc;
}

/* ref: FUN_00e01b70 */
uint F_00e01b70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xe01b70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint * param_5 = (uint *)(uintptr_t)gen_a5;
  uint uVar1;
  
  if (*(int *)((int)this + 8) < *(int *)((int)this + 4) * 2) {
    uVar1 = F_00e01480(this,param_1,*(int *)((int)this + 8) * 2 + 2);
    *param_5 = uVar1;
    if (uVar1 != 0) {
      return 0;
    }
  }
  else {
    *param_5 = 0;
  }
  uVar1 = F_00e008b0(this,param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00e01bd0 */
unsigned int F_00e01bd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe01bd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int * piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 8) < *(int *)((int)this + 4) * 2) {
    F_00e01480(this,param_1,*(int *)((int)this + 8) * 2 + 2);
  }
  iVar2 = *(int *)this;
  uVar4 = (param_2 >> 4) * -0x61c8864f;
  while( true ) {
    uVar4 = uVar4 & *(uint *)((int)this + 8);
    piVar1 = (int *)(iVar2 + uVar4 * 0xc);
    if ((*(uint *)(iVar2 + uVar4 * 0xc) == param_2) && (piVar1[1] == param_3)) break;
    if (*piVar1 == -1) {
      iVar3 = uVar4 * 0xc;
      *(uint *)(iVar2 + iVar3) = param_2;
      *(int *)(iVar2 + 4 + iVar3) = param_3;
      *(undefined4 *)(iVar3 + 8 + *(int *)this) = param_4;
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
      return 0;
    }
    uVar4 = uVar4 + 1;
  }
  return 0;
}

/* ref: FUN_00e01c50 */
uint F_00e01c50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe01c50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = 8;
  if (8 < param_2 * 2) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_2 * 2);
  }
  uVar2 = F_00e01480(this,param_1,iVar1);
  return uVar2;
}

/* ref: FUN_00e01c80 */
uint F_00e01c80(unsigned int gen_a0)
{
  GEN_ENTER(0xe01c80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e01cc0 */
uint F_00e01cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe01cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e01d00 */
uint F_00e01d00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe01d00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar1 << 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e01d40 */
uint F_00e01d40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe01d40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  byte bVar2;
  uint uVar3;
  gen_size32 _Size;
  undefined3 extraout_var = 0;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar1 = *(int *)((int)this + 4);
  uVar5 = iVar1 + 7U & 0xfffffff8;
  uVar3 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar3 < (int)uVar5) {
    uVar3 = uVar3 * 2;
    if ((int)uVar3 <= (int)uVar5) {
      uVar3 = uVar5;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,uVar3,1);
  }
  _Size = uVar5 - *(int *)((int)this + 4);
  if (0 < (int)_Size) {
    F_00c48350(((undefined *)GEN_TOP((*(int *)this + *(int *)((int)this + 4)))),0,_Size);
  }
  *(uint *)((int)this + 4) = uVar5;
  iVar4 = 0;
  iVar6 = 0;
  if (0 < param_2) {
    do {
      bVar2 = *(byte *)(iVar6 + param_1);
      *(byte *)(iVar4 + *(int *)this) = bVar2 & 1;
      *(byte *)(*(int *)this + 1 + iVar4) = bVar2 >> 1 & 1;
      *(byte *)(*(int *)this + 2 + iVar4) = bVar2 >> 2 & 1;
      *(byte *)(*(int *)this + 3 + iVar4) = bVar2 >> 3 & 1;
      *(byte *)(*(int *)this + 4 + iVar4) = bVar2 >> 4 & 1;
      *(byte *)(*(int *)this + 5 + iVar4) = bVar2 >> 5 & 1;
      *(byte *)(*(int *)this + 6 + iVar4) = bVar2 >> 6 & 1;
      *(byte *)(*(int *)this + 7 + iVar4) = bVar2 >> 7;
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 8;
    } while (iVar6 < param_2);
  }
  uVar3 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar3 < iVar1) {
    iVar4 = uVar3 * 2;
    if ((int)(uVar3 * 2) <= iVar1) {
      iVar4 = iVar1;
    }
    bVar2 = F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar4,1);
    uVar3 = CONCAT31(extraout_var,bVar2);
  }
  *(int *)((int)this + 4) = iVar1;
  return uVar3;
}

/* ref: FUN_00e01e50 */
uint F_00e01e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe01e50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  char * pcVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  gen_size32 _Size;
  byte * pbVar5;
  undefined3 extraout_var = 0;
  int iVar6;
  uint uVar7;
  byte * pbVar8;
  
  iVar2 = *(int *)((int)this + 4);
  uVar7 = iVar2 + 7U & 0xfffffff8;
  uVar4 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar4 < (int)uVar7) {
    uVar4 = uVar4 * 2;
    if ((int)uVar4 <= (int)uVar7) {
      uVar4 = uVar7;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,uVar4,1);
  }
  _Size = uVar7 - *(int *)((int)this + 4);
  if (0 < (int)_Size) {
    F_00c48350(((undefined *)GEN_TOP((*(int *)this + *(int *)((int)this + 4)))),0,_Size);
  }
  *(uint *)((int)this + 4) = uVar7;
  if (0 < (int)uVar7) {
    iVar6 = 0;
    pbVar8 = param_1;
    do {
      pcVar1 = (char *)(*(int *)this + 7 + iVar6);
      pbVar5 = (byte *)(*(int *)this + iVar6);
      iVar6 = iVar6 + 8;
      *pbVar8 = ((((((*pcVar1 * '\x02' | pbVar5[6]) * '\x02' | pbVar5[5]) * '\x02' | pbVar5[4]) *
                   '\x02' | pbVar5[3]) * '\x02' | pbVar5[2]) * '\x02' | pbVar5[1]) * '\x02' |
                *pbVar5;
      pbVar8 = pbVar8 + 1;
    } while (iVar6 < *(int *)((int)this + 4));
  }
  uVar4 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar4 < iVar2) {
    iVar6 = uVar4 * 2;
    if ((int)(uVar4 * 2) <= iVar2) {
      iVar6 = iVar2;
    }
    bVar3 = F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar6,1);
    uVar4 = CONCAT31(extraout_var,bVar3);
  }
  *(int *)((int)this + 4) = iVar2;
  return uVar4;
}

/* ref: FUN_00e01f30 */
uint F_00e01f30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe01f30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 * puVar1;
  uint uVar2;
  int * piVar3;
  LPVOID pvVar4;
  int iVar5;
  
  if ((*(int *)this != 0) && (piVar3 = (int *)*param_2, piVar3 != (int *)0x0)) {
    ((int *)(gen_frame + 0x18))[0] = 0;
    ((int *)(gen_frame + 0x18))[1] = 0;
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3,((undefined1 *)(gen_frame + 0x10)))));
    ((int *)(gen_frame + 0x18))[2] = *puVar1;
    (*(undefined4 *)(gen_frame + 0x24)) = puVar1[1];
    uVar2 = F_00e009c0((undefined *)((int)this + 4),*puVar1,puVar1[1],0xffffffff);
    if (uVar2 != 0xffffffff) {
      iVar5 = **((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + uVar2 * 4)));
      goto LAB_00e020cf;
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0xc))))(*(int * PTR32 *)this,&(*(int * PTR32 *)(gen_frame + 0x28)),param_2);
    ((int *)(gen_frame + 0x18))[0] = 0;
    ((int *)(gen_frame + 0x18))[1] = 0;
    if ((*(int * PTR32 *)(gen_frame + 0x28)) == (int *)0x0) {
      piVar3 = ((int *)(gen_frame + 0x18));
    }
    else {
      piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x28)) + 4))((*(int * PTR32 *)(gen_frame + 0x28)),((undefined1 *)(gen_frame + 0x8)))));
    }
    iVar5 = *piVar3;
    (*(int *)(gen_frame + 0x14)) = piVar3[1];
    piVar3 = (int *)*param_2;
    ((int *)(gen_frame + 0x18))[0] = 0;
    ((int *)(gen_frame + 0x18))[1] = 0;
    if (piVar3 == (int *)0x0) {
      piVar3 = ((int *)(gen_frame + 0x18));
    }
    else {
      piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3,((undefined1 *)(gen_frame + 0x0)))));
    }
    if ((iVar5 != *piVar3) || ((*(int *)(gen_frame + 0x14)) != piVar3[1])) {
      F_00e008b0((undefined *)((int)this + 4),&REFG(undefined * PTR32, 0x13516ac),((int *)(gen_frame + 0x18))[2],(*(undefined4 *)(gen_frame + 0x24)),
                   *(undefined4 *)((int)this + 0x14));
      pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      puVar1 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar4 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar4 + 0x2c),4)));
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        *puVar1 = (*(int * PTR32 *)(gen_frame + 0x28));
        if ((*(int * PTR32 *)(gen_frame + 0x28)) != (int *)0x0) {
          *(short *)((int)(*(int * PTR32 *)(gen_frame + 0x28)) + 6) = *(short *)((int)(*(int * PTR32 *)(gen_frame + 0x28)) + 6) + 1;
          (*(int * PTR32 *)(gen_frame + 0x28))[2] = (*(int * PTR32 *)(gen_frame + 0x28))[2] + 1;
        }
      }
      if (*(uint *)((int)this + 0x14) == (*(uint *)((int)this + 0x18) & 0x3fffffff)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516a4),(int *)((int)this + 0x10),4);
      }
      iVar5 = *(int *)((int)this + 0x14);
      *(int *)((int)this + 0x14) = iVar5 + 1;
      *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + iVar5 * 4))) = puVar1;
      *param_1 = (int)(*(int * PTR32 *)(gen_frame + 0x28));
      if ((*(int * PTR32 *)(gen_frame + 0x28)) != (int *)0x0) {
        *(short *)((int)(*(int * PTR32 *)(gen_frame + 0x28)) + 6) = *(short *)((int)(*(int * PTR32 *)(gen_frame + 0x28)) + 6) + 1;
        (*(int * PTR32 *)(gen_frame + 0x28))[2] = (*(int * PTR32 *)(gen_frame + 0x28))[2] + 1;
        if ((*(int * PTR32 *)(gen_frame + 0x28)) != (int *)0x0) {
          *(short *)((int)(*(int * PTR32 *)(gen_frame + 0x28)) + 6) = *(short *)((int)(*(int * PTR32 *)(gen_frame + 0x28)) + 6) + -1;
          piVar3 = (*(int * PTR32 *)(gen_frame + 0x28)) + 2;
          *piVar3 = *piVar3 + -1;
          if (*piVar3 == 0) {
            ((code *)*(gen_code32 *)*(*(int * PTR32 *)(gen_frame + 0x28)))((*(int * PTR32 *)(gen_frame + 0x28)),1);
          }
        }
      }
      return (uint)param_1;
    }
    if ((*(int * PTR32 *)(gen_frame + 0x28)) != (int *)0x0) {
      *(short *)((int)(*(int * PTR32 *)(gen_frame + 0x28)) + 6) = *(short *)((int)(*(int * PTR32 *)(gen_frame + 0x28)) + 6) + -1;
      piVar3 = (*(int * PTR32 *)(gen_frame + 0x28)) + 2;
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        ((code *)*(gen_code32 *)*(*(int * PTR32 *)(gen_frame + 0x28)))((*(int * PTR32 *)(gen_frame + 0x28)),1);
      }
    }
  }
  iVar5 = *param_2;
LAB_00e020cf: ;
  *param_1 = iVar5;
  if (iVar5 != 0) {
    *(short *)(iVar5 + 6) = *(short *)(iVar5 + 6) + 1;
    *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
  }
  return (uint)param_1;
}

/* ref: FUN_00e02100 */
uint F_00e02100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe02100u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_00e01b70(this,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00e02130 */
unsigned int F_00e02130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe02130u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00e01bd0(this,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2,param_3);
  return 0;
}

/* ref: FUN_00e02150 */
uint F_00e02150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe02150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00e01c50(this,&REFG(undefined * PTR32, 0x13516ac),param_1);
  return uVar1;
}

/* ref: FUN_00e02170 */
uint F_00e02170(unsigned int gen_a0)
{
  GEN_ENTER(0xe02170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e021b0 */
uint F_00e021b0(unsigned int gen_a0)
{
  GEN_ENTER(0xe021b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e021f0 */
uint F_00e021f0(unsigned int gen_a0)
{
  GEN_ENTER(0xe021f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 << 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e02230 */
uint F_00e02230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe02230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  gen_size32 _Size;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_1 + 7U & 0xfffffff8;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x80000000;
  if (0 < (int)uVar3) {
    F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,((int)uVar3 < 0) - 1 & uVar3,1);
  }
  _Size = uVar3 - *(int *)((int)this + 4);
  if (0 < (int)_Size) {
    F_00c48350(((undefined *)GEN_TOP((*(int *)this + *(int *)((int)this + 4)))),0,_Size);
  }
  uVar1 = *(uint *)((int)this + 8) & 0x3fffffff;
  *(uint *)((int)this + 4) = uVar3;
  if ((int)uVar1 < param_1) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_1) {
      iVar2 = param_1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar2,1);
  }
  *(int *)((int)this + 4) = param_1;
  return (uint)this;
}

/* ref: FUN_00e022d0 */
uint F_00e022d0(unsigned int gen_a0)
{
  GEN_ENTER(0xe022d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e02310 */
uint F_00e02310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe02310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0xffffffff;
  if (param_1 != 0) {
    F_00e01c50(this,&REFG(undefined * PTR32, 0x13516ac),param_1);
  }
  return (uint)this;
}

/* ref: FUN_00e02350 */
uint F_00e02350(unsigned int gen_a0)
{
  GEN_ENTER(0xe02350u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e02390 */
uint F_00e02390(unsigned int gen_a0)
{
  GEN_ENTER(0xe02390u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 << 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e023d0 */
uint F_00e023d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe023d0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  int * this_00;
  uint uVar2;
  int * piVar3;
  int iVar4;
  undefined4 * puVar5;
  
  this_00 = (*(int * PTR32 *)&gen_args[1]);
  piVar3 = ((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1])));
  if (piVar3 == (int *)0x0) {
    return 0;
  }
  uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3);
  uVar2 = F_00da4190(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))),uVar2,0xffffffff);
  if (-1 < (int)uVar2) {
    return uVar2;
  }
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*this_00 + 0x10))((int *)*this_00)));
  piVar3 = (int *)F_00e023d0((*(undefined * PTR32 *)&gen_args[0]),(int *)&(*(int * PTR32 *)&gen_args[1]));
  (*(int * PTR32 *)(gen_frame + 0x20)) = piVar3;
  uVar2 = ((code *)*(gen_code32 *)(*(int *)*this_00 + 8))((int *)*this_00);
  uVar2 = F_00da4190(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))),uVar2,0xffffffff);
  if (uVar2 != 0xffffffff) {
    return uVar2;
  }
  (*(uint *)(gen_frame + 0x28)) = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24)));
  uVar2 = ((code *)*(gen_code32 *)(*(int *)*this_00 + 8))((int *)*this_00);
  F_00da3a20(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))),uVar2,(*(uint *)(gen_frame + 0x28)));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*this_00 + 0x18))((int *)*this_00)));
  (*(int * PTR32 *)(gen_frame + 0x18)) = piVar3;
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(int * PTR32 *)(gen_frame + 0x10)) = (int *)0x0;
  (*(int *)(gen_frame + 0x14)) = 0x80000000;
  if (piVar3 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    (*(int * PTR32 *)&gen_args[1]) = (int *)((int)((int)(uintptr_t)piVar3) << 4);
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0xc))))(&REFG(undefined * PTR32, 0x13516a4),&(*(int * PTR32 *)&gen_args[1]));
    iVar4 = (int)((int)(*(int * PTR32 *)&gen_args[1]) + ((int)(*(int * PTR32 *)&gen_args[1]) >> 0x1f & 0xfU)) >> 4;
    if (iVar4 != 0) goto LAB_00e024b4;
  }
  iVar4 = ((int)0x80000000);
LAB_00e024b4: ;
  (*(uint *)(gen_frame + 0xc)) = uVar2;
  (*(int * PTR32 *)(gen_frame + 0x10)) = piVar3;
  (*(int *)(gen_frame + 0x14)) = iVar4;
  if (0 < (int)piVar3) {
    puVar5 = (undefined4 *)(uVar2 + 8);
    (*(int * PTR32 *)(gen_frame + 0x24)) = piVar3;
    do {
      if (puVar5 != (undefined4 *)0x8) {
        puVar5[-2] = 0;
        puVar5[-1] = 0;
        *puVar5 = 0;
        puVar5[1] = 0;
      }
      puVar5 = puVar5 + 4;
      piVar1 = (int *)((int)(*(int * PTR32 *)(gen_frame + 0x24)) + -1);
      (*(int * PTR32 *)(gen_frame + 0x24)) = piVar1;
    } while (piVar1 != (int *)0x0);
  }
  F_00e1ce00(this_00,&(*(uint *)(gen_frame + 0xc)));
  F_00e00500((*(undefined * PTR32 *)&gen_args[0]),2,0);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)*this_00 + 8))((int *)*this_00);
  F_00e01840((*(undefined * PTR32 *)&gen_args[0]),uVar2);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)*this_00 + 0xc))((int *)*this_00);
  F_00e00500((*(undefined * PTR32 *)&gen_args[0]),uVar2,(int)uVar2 >> 0x1f);
  ((code *)*(gen_code32 *)(*(int *)*this_00 + 0xc))((int *)*this_00);
  F_00e00500((*(undefined * PTR32 *)&gen_args[0]),(*(int * PTR32 *)(gen_frame + 0x20)),(int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x20))) >> 0x1f);
  F_00e00500((*(undefined * PTR32 *)&gen_args[0]),piVar3,(int)((int)(uintptr_t)piVar3) >> 0x1f);
  if (0 < (int)piVar3) {
    (*(int * PTR32 *)&gen_args[1]) = (int *)0x0;
    (*(int * PTR32 *)(gen_frame + 0x20)) = piVar3;
    do {
      puVar5 = ((undefined4 *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + (*(uint *)(gen_frame + 0xc)))));
      F_00e01840((*(undefined * PTR32 *)&gen_args[0]),*puVar5);
      uVar2 = F_00e1a1c0(puVar5[2],&(*(int * PTR32 *)(gen_frame + 0x24)),&(*(int * PTR32 *)(gen_frame + 0x1c)));
      F_00e00500((*(undefined * PTR32 *)&gen_args[0]),uVar2,(int)uVar2 >> 0x1f);
      if ((uVar2 & 0x20) != 0) {
        F_00e00500((*(undefined * PTR32 *)&gen_args[0]),(*(int * PTR32 *)(gen_frame + 0x1c)),(int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x1c))) >> 0x1f);
      }
      if (((uVar2 & 0xf) == 9) || ((uVar2 & 0xf) == 8)) {
        if ((*(int * PTR32 *)(gen_frame + 0x24)) == (int *)0x0) {
          F_00da6940((*(undefined * PTR32 *)&gen_args[0]),3);
        }
        else {
          piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*this_00 + 4))((int *)*this_00)));
          piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,(*(int * PTR32 *)(gen_frame + 0x24)))));
          uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3);
          F_00e01840((*(undefined * PTR32 *)&gen_args[0]),uVar2);
        }
      }
      (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x10)));
      piVar3 = (int *)((int)(*(int * PTR32 *)(gen_frame + 0x20)) + -1);
      (*(int * PTR32 *)(gen_frame + 0x20)) = piVar3;
    } while (piVar3 != (int *)0x0);
    if (0 < (int)(*(int * PTR32 *)(gen_frame + 0x18))) {
      (*(int * PTR32 *)&gen_args[1]) = (int *)0x0;
      (*(int * PTR32 *)(gen_frame + 0x20)) = (*(int * PTR32 *)(gen_frame + 0x18));
      do {
        piVar3 = (int *)F_00e19d40(*((undefined4 *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 8U + (*(uint *)(gen_frame + 0xc))))));
        (*(int * PTR32 *)(gen_frame + 0x18)) = piVar3;
        if (*piVar3 == 6) {
          piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*this_00 + 4))((int *)*this_00)));
          iVar4 = *piVar3;
          (*(int * PTR32 *)(gen_frame + 0x1c)) = piVar3;
          uVar2 = F_00e19c80((*(int * PTR32 *)(gen_frame + 0x18)));
          piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(iVar4 + 0x24))((*(int * PTR32 *)(gen_frame + 0x1c)),uVar2)));
          (*(int * PTR32 *)(gen_frame + 0x24)) = piVar3;
          F_00e023d0((*(undefined * PTR32 *)&gen_args[0]),(int *)&(*(int * PTR32 *)(gen_frame + 0x24)));
        }
        (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x10)));
        piVar3 = (int *)((int)(*(int * PTR32 *)(gen_frame + 0x20)) + -1);
        (*(int * PTR32 *)(gen_frame + 0x20)) = piVar3;
      } while (piVar3 != (int *)0x0);
    }
  }
  (*(int * PTR32 *)(gen_frame + 0x10)) = (int *)0x0;
  uVar2 = (*(uint *)(gen_frame + 0x28));
  if (-1 < (*(int *)(gen_frame + 0x14))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(uint *)(gen_frame + 0xc)),(*(int *)(gen_frame + 0x14)) << 4);
    uVar2 = (*(uint *)(gen_frame + 0x28));
  }
  return uVar2;
}

/* ref: FUN_00e02d20 */
uint F_00e02d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe02d20u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int * piVar1;
  undefined8 uVar2;
  int * piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined * pvVar7;
  undefined4 * puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined4 * puVar13;
  bool bVar14;
  
  (*(undefined * PTR32 *)(gen_frame + 0x68)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(int *)(gen_frame + 0x18)) = 0;
  (*(uint *)(gen_frame + 0x1c)) = 0;
  (*(uint *)(gen_frame + 0x20)) = 0x80000000;
  F_00d95690(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0x18)),0x80,0xc);
  piVar3 = ((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[2])));
  (*(undefined4 *)(gen_frame + 0x5c)) = 0;
  (*(int *)(gen_frame + 0x60)) = 0;
  if (piVar3 == (int *)0x0) {
    puVar8 = &(*(undefined4 *)(gen_frame + 0x5c));
  }
  else {
    puVar8 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3,&(*(undefined4 *)(gen_frame + 0x3c)))));
  }
  uVar4 = *puVar8;
  uVar5 = puVar8[1];
  uVar10 = (*(uint *)(gen_frame + 0x1c));
  if ((*(uint *)(gen_frame + 0x1c)) == ((*(uint *)(gen_frame + 0x20)) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0x18)),0xc);
    uVar10 = (*(uint *)(gen_frame + 0x1c));
  }
  uVar11 = uVar10 + 1;
  (*(uint *)(gen_frame + 0x1c)) = uVar11;
  puVar8 = (undefined4 *)((*(int *)(gen_frame + 0x18)) + uVar10 * 0xc);
  puVar8[1] = uVar5;
  *puVar8 = uVar4;
  puVar8[2] = (*(int * PTR32 *)&gen_args[3]);
  uVar10 = (*(uint *)(gen_frame + 0x20));
  while ((*(uint *)(gen_frame + 0x20)) = uVar10, uVar11 != 0) {
    uVar2 = *(undefined8 *)((*(int *)(gen_frame + 0x18)) + -0xc + uVar11 * 0xc);
    (*(undefined8 *)(gen_frame + 0x0)) = uVar2;
    uVar2 = (*(undefined8 *)(gen_frame + 0x0));
    (*(int *)(gen_frame + 0x8)) = *(int *)((*(int *)(gen_frame + 0x18)) + uVar11 * 0xc + -4);
    (*(uint *)(gen_frame + 0x1c)) = uVar11 + -1;
    (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x0)) + 0)) = (int)uVar2;
    (*(undefined8 *)(gen_frame + 0x0)) = uVar2;
    if (((int)(*(undefined8 *)(gen_frame + 0x0)) != 0) ||
       ((*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x0)) + 4)) = (int)((ulonglong)uVar2 >> 0x20), bVar14 = (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x0)) + 4)) != 0,
       uVar11 = (*(uint *)(gen_frame + 0x1c)), bVar14)) {
      ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x28))))((*(int * PTR32 *)&gen_args[1]),&(*(int * PTR32 *)&gen_args[2]),&(*(undefined8 *)(gen_frame + 0x0)));
      F_00e01f30(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58))),&(*(int * PTR32 *)(gen_frame + 0x64)),&(*(int * PTR32 *)&gen_args[2]));
      piVar3 = (*(int * PTR32 *)(gen_frame + 0x64));
      if ((*(int * PTR32 *)(gen_frame + 0x64)) == (int *)0x0) {
        uVar11 = (*(uint *)(gen_frame + 0x1c));
        uVar10 = (*(uint *)(gen_frame + 0x20));
        if ((*(int * PTR32 *)&gen_args[2]) != (int *)0x0) {
          *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 6))) + -1;
          piVar3 = (*(int * PTR32 *)&gen_args[2]) + 2;
          *piVar3 = *piVar3 + -1;
          if (*piVar3 == 0) {
            ((code *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[2]))))((*(int * PTR32 *)&gen_args[2]),1);
            uVar11 = (*(uint *)(gen_frame + 0x1c));
            uVar10 = (*(uint *)(gen_frame + 0x20));
          }
        }
      }
      else {
        (*(undefined4 *)(gen_frame + 0x54)) = 0;
        (*(undefined4 *)(gen_frame + 0x58)) = 0;
        puVar8 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x64)) + 4))((*(int * PTR32 *)(gen_frame + 0x64)),((undefined1 *)(gen_frame + 0x34)))));
        uVar10 = F_00e009c0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))),*puVar8,puVar8[1],0xffffffff);
        if (uVar10 == 0xffffffff) {
          (*(int * PTR32 *)&gen_args[3]) = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3)));
          F_00e023d0((*(undefined * PTR32 *)&gen_args[0]),&(*(int * PTR32 *)&gen_args[3]));
          uVar10 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[3]) + 0x24))))((*(int * PTR32 *)&gen_args[3]));
          F_00e02230(&(*(int *)(gen_frame + 0xc)),uVar10);
          uVar10 = ((code *)*(gen_code32 *)(*piVar3 + 0x14))(piVar3);
          uVar11 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,uVar10);
          while (uVar11 != 0) {
            ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,((undefined1 *)(gen_frame + 0x4c)),uVar10);
            uVar11 = F_00e016a0(((undefined1 *)(gen_frame + 0x4c)));
            if (uVar11 != 0) {
              uVar11 = ((code *)*(gen_code32 *)(*piVar3 + 0x20))(piVar3,uVar10);
              uVar11 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[3]) + 0x2c))))((*(int * PTR32 *)&gen_args[3]),uVar11);
              *(undefined1 *)((*(int *)(gen_frame + 0xc)) + uVar11) = 1;
            }
            uVar10 = ((code *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3,uVar10);
            uVar11 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,uVar10);
          }
          uVar10 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38)));
          (*(undefined4 *)(gen_frame + 0x44)) = 0;
          (*(undefined4 *)(gen_frame + 0x48)) = 0;
          puVar8 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3,((undefined1 *)(gen_frame + 0x2c)))));
          F_00e008b0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))),&REFG(undefined * PTR32, 0x13516ac),*puVar8,puVar8[1],
                       uVar10 & 0x7fffffff);
          if (*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) == (*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54))) & 0x3fffffff)) {
            F_00d95710(&REFG(undefined * PTR32, 0x13516a4),((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))),0x10);
          }
          iVar9 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50)));
          *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) = iVar9 + 1;
          puVar13 = ((undefined4 *)GEN_TOP((iVar9 * 0x10 + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))))));
          (*(undefined4 *)(gen_frame + 0x3c)) = 0;
          (*(undefined4 *)(gen_frame + 0x40)) = 0;
          puVar8 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3,((undefined1 *)(gen_frame + 0x24)))));
          pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x68));
          *puVar13 = *puVar8;
          puVar13[1] = puVar8[1];
          puVar13[2] = *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x68)) + 0x44);
          if ((*(int *)(gen_frame + 0x8)) == 0) {
            iVar9 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x68)) + 0x30);
            *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x68)) + 0x30) = iVar9 + 1;
          }
          else {
            iVar9 = -1;
          }
          puVar13[3] = iVar9;
          piVar1 = (int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x68)) + 0x40);
          iVar12 = (int)(((int)((*(int *)(gen_frame + 0x10)) + 7U) >> 0x1f & 7U) + ((*(int *)(gen_frame + 0x10)) + 7U & 0xfffffff8)) >> 3;
          iVar9 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x68)) + 0x44) + iVar12;
          uVar10 = *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x68)) + 0x48) & 0x3fffffff;
          (*(int *)(gen_frame + 0x60)) = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x68)) + 0x44);
          if ((int)uVar10 < iVar9) {
            iVar6 = uVar10 * 2;
            if (iVar9 < iVar6) {
              iVar9 = iVar6;
            }
            F_00d95690(&REFG(undefined * PTR32, 0x13516a4),piVar1,iVar9,1);
          }
          iVar9 = *piVar1;
          *(int *)((int)pvVar7 + 0x44) = *(int *)((int)pvVar7 + 0x44) + iVar12;
          F_00e01e50(&(*(int *)(gen_frame + 0xc)),iVar9 + (*(int *)(gen_frame + 0x60)));
          F_00e02aa0((*(undefined * PTR32 *)(gen_frame + 0x68)),&(*(int * PTR32 *)(gen_frame + 0x64)),&(*(int *)(gen_frame + 0x18)),0);
          (*(int *)(gen_frame + 0x10)) = 0;
          if (-1 < (int)(*(uint *)(gen_frame + 0x14))) {
            ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x14)) & 0x3fffffff);
          }
          (*(int *)(gen_frame + 0xc)) = 0;
          (*(uint *)(gen_frame + 0x14)) = 0x80000000;
          *(short *)((int)piVar3 + 6) = *(short *)((int)piVar3 + 6) + -1;
          piVar1 = piVar3 + 2;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            ((code *)*(gen_code32 *)*piVar3)(piVar3,1);
          }
          uVar11 = (*(uint *)(gen_frame + 0x1c));
          (*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 *)(gen_frame + 0x68));
          uVar10 = (*(uint *)(gen_frame + 0x20));
          if ((*(int * PTR32 *)&gen_args[2]) != (int *)0x0) {
            *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 6))) + -1;
            piVar3 = (*(int * PTR32 *)&gen_args[2]) + 2;
            *piVar3 = *piVar3 + -1;
            if (*piVar3 == 0) {
              ((code *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[2]))))((*(int * PTR32 *)&gen_args[2]),1);
              uVar11 = (*(uint *)(gen_frame + 0x1c));
              (*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 *)(gen_frame + 0x68));
              uVar10 = (*(uint *)(gen_frame + 0x20));
            }
          }
        }
        else {
          *(short *)((int)piVar3 + 6) = *(short *)((int)piVar3 + 6) + -1;
          piVar1 = piVar3 + 2;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            ((code *)*(gen_code32 *)*piVar3)(piVar3,1);
          }
          uVar11 = (*(uint *)(gen_frame + 0x1c));
          uVar10 = (*(uint *)(gen_frame + 0x20));
          if ((*(int * PTR32 *)&gen_args[2]) != (int *)0x0) {
            *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 6))) + -1;
            piVar3 = (*(int * PTR32 *)&gen_args[2]) + 2;
            *piVar3 = *piVar3 + -1;
            if (*piVar3 == 0) {
              ((code *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[2]))))((*(int * PTR32 *)&gen_args[2]),1);
              uVar11 = (*(uint *)(gen_frame + 0x1c));
              uVar10 = (*(uint *)(gen_frame + 0x20));
            }
          }
        }
      }
    }
  }
  (*(uint *)(gen_frame + 0x1c)) = 0;
  if (-1 < (int)uVar10) {
    uVar10 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                       (&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0x18)),(uVar10 & 0x3fffffff) * 0xc);
  }
  return uVar10;
}

/* ref: FUN_00e03a70 */
uint F_00e03a70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe03a70u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  int iVar6;
  
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = (*(undefined * PTR32 *)&gen_args[0]);
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) + 8))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))))));
  (*(int * PTR32 *)(gen_frame + 0x20)) = piVar1;
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1);
  (*(uint *)(gen_frame + 0x24)) = uVar2;
  F_00e02230(((byte *)(gen_frame + 0x4)),uVar2);
  iVar6 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))) + *(int *)((*(int *)&gen_args[2]) + 8);
  uVar2 = (int)(((int)((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)) + 7) >> 0x1f & 7U) + ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)) + 7 & 0xfffffff8)) >> 3;
  F_00da6ae0((*(undefined * PTR32 *)(gen_frame + 0x28)));
  F_00e01d40(((byte *)(gen_frame + 0x4)),iVar6,uVar2);
  if (-1 < (int)(uVar2 | 0x80000000)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),iVar6,uVar2 & 0x3fffffff);
  }
  uVar2 = (*(uint *)(gen_frame + 0x24));
  iVar6 = 0;
  (*(uint *)(gen_frame + 0x10)) = 0;
  (*(uint *)(gen_frame + 0x14)) = 0;
  (*(int *)(gen_frame + 0x18)) = 0x80000000;
  if ((*(uint *)(gen_frame + 0x24)) == 0) {
    uVar3 = 0;
  }
  else {
    (*(int *)&gen_args[2]) = (*(uint *)(gen_frame + 0x24)) << 4;
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0xc))))(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)&gen_args[2]));
    iVar4 = (int)((*(int *)&gen_args[2]) + ((*(int *)&gen_args[2]) >> 0x1f & 0xfU)) >> 4;
    if (iVar4 != 0) goto LAB_00e03b40;
  }
  iVar4 = ((int)0x80000000);
LAB_00e03b40: ;
  (*(uint *)(gen_frame + 0x10)) = uVar3;
  (*(uint *)(gen_frame + 0x14)) = uVar2;
  (*(int *)(gen_frame + 0x18)) = iVar4;
  if (0 < (int)uVar2) {
    puVar5 = (undefined4 *)(uVar3 + 8);
    uVar3 = uVar2;
    do {
      if (puVar5 != (undefined4 *)0x8) {
        puVar5[-2] = 0;
        puVar5[-1] = 0;
        *puVar5 = 0;
        puVar5[1] = 0;
      }
      puVar5 = puVar5 + 4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x20)) + 0x30))((*(int * PTR32 *)(gen_frame + 0x20)),&(*(uint *)(gen_frame + 0x10)));
  if (0 < (int)uVar2) {
    iVar4 = 0;
    do {
      puVar5 = (undefined4 *)(iVar4 + (*(uint *)(gen_frame + 0x10)));
      if (*((char *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 0)) + iVar6))) != '\0') {
        ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) + 0xc))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))),((undefined1 *)(gen_frame + 0x1c)),*puVar5);
        F_00e03740((*(undefined * PTR32 *)(gen_frame + 0x28)),((undefined1 *)(gen_frame + 0x1c)),(uint)puVar5);
      }
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 0x10;
    } while (iVar6 < (int)(*(uint *)(gen_frame + 0x24)));
  }
  (*(uint *)(gen_frame + 0x14)) = 0;
  if (-1 < (*(int *)(gen_frame + 0x18))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(uint *)(gen_frame + 0x10)),(*(int *)(gen_frame + 0x18)) << 4);
  }
  (*(uint *)(gen_frame + 0x10)) = 0;
  ((byte *)(gen_frame + 0x4))[4] = 0;
  ((byte *)(gen_frame + 0x4))[5] = 0;
  ((byte *)(gen_frame + 0x4))[6] = 0;
  ((byte *)(gen_frame + 0x4))[7] = 0;
  (*(int *)(gen_frame + 0x18)) = 0x80000000;
  uVar2 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8));
  if (-1 < (int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8))) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 0)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) & 0x3fffffff);
  }
  return uVar2;
}

/* ref: FUN_00e03c20 */
unsigned int F_00e03c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe03c20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0xffffffff;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0x80000000;
  return 0;
}

/* ref: FUN_00e03c50 */
uint F_00e03c50(unsigned int gen_a0)
{
  GEN_ENTER(0xe03c50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  undefined4 * puVar3;
  LPVOID pvVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = 0;
  if (0 < *(int *)((int)this + 0x14)) {
    do {
      piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + iVar6 * 4)));
      if (piVar2 != (int *)0x0) {
        puVar3 = (undefined4 *)*piVar2;
        if (puVar3 != (undefined4 *)0x0) {
          *(short *)((int)puVar3 + 6) = *(short *)((int)puVar3 + 6) + -1;
          piVar1 = puVar3 + 2;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
          }
        }
        pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar4 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar4 + 0x2c),piVar2,4);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)((int)this + 0x14));
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  if (-1 < *(int *)((int)this + 0x18)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)((int)this + 0x10),
               *(int *)((int)this + 0x18) * 4);
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = 0x80000000;
  uVar5 = F_00e00be0((undefined *)((int)this + 4),&REFG(undefined * PTR32, 0x13516ac));
  return uVar5;
}

/* ref: FUN_00e03cf0 */
uint F_00e03cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe03cf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  F_00da68d0(this,param_1,(uint)this & 0xffffff00);
  uVar2 = param_1 >> 8;
  param_1 = uVar2 << 8;
  F_00da3de0((undefined *)((int)this + 0x10),param_1);
  param_1 = uVar2 << 8;
  F_00da3de0((undefined *)((int)this + 0x20),param_1);
  *(undefined4 *)((int)this + 0x30) = 1;
  *(undefined4 *)((int)this + 0x3c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0x80000000;
  *(undefined4 *)((int)this + 0x54) = 0x80000000;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x58) = param_2;
  piVar1 = (int *)((int)this + 0x4c);
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0xffffffff;
  *(undefined4 *)((int)this + 0x70) = 0x80000000;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined1 *)((int)this + 0x78) = *(undefined1 *)(param_3 + 2);
  F_00da3a20((undefined *)((int)this + 0x20),&REFG(undefined1, 0x107fc63),0);
  F_00da3a20((undefined *)((int)this + 0x10),&REFG(undefined1, 0x107fc63),0);
  F_00e008b0((undefined *)((int)this + 0x34),&REFG(undefined * PTR32, 0x13516ac),0,0,0);
  uVar2 = *(uint *)((int)this + 0x48) & 0x3fffffff;
  if (uVar2 < 0x200) {
    uVar3 = uVar2 * 2;
    if (uVar2 == 0x100 || uVar3 < 0x200) {
      uVar3 = 0x200;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516a4),(int)this + 0x40,uVar3,1);
  }
  uVar2 = *(uint *)((int)this + 0x54) & 0x3fffffff;
  if (uVar2 < 0x80) {
    uVar3 = uVar2 * 2;
    if (uVar2 == 0x40 || uVar3 < 0x80) {
      uVar3 = 0x80;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516a4),piVar1,uVar3,0x10);
  }
  if (*(uint *)((int)this + 0x50) == (*(uint *)((int)this + 0x54) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516a4),piVar1,0x10);
  }
  puVar4 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x50) * 0x10 + *piVar1)));
  *(int *)((int)this + 0x50) = *(int *)((int)this + 0x50) + 1;
  puVar4[2] = 0xffffffff;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[3] = 0;
  return (uint)this;
}

/* ref: FUN_00e03e60 */
uint F_00e03e60(unsigned int gen_a0)
{
  GEN_ENTER(0xe03e60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00e03c50((undefined *)((int)this + 0x58));
  *(undefined4 *)((int)this + 0x50) = 0;
  if (-1 < *(int *)((int)this + 0x54)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)((int)this + 0x4c),
               *(int *)((int)this + 0x54) << 4);
  }
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x54) = 0x80000000;
  *(undefined4 *)((int)this + 0x44) = 0;
  if (-1 < (int)*(uint *)((int)this + 0x48)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)((int)this + 0x40),
               *(uint *)((int)this + 0x48) & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x48) = 0x80000000;
  F_00e00be0((undefined *)((int)this + 0x34),&REFG(undefined * PTR32, 0x13516ac));
  F_00da3e20((undefined *)((int)this + 0x20));
  F_00da3e20((undefined *)((int)this + 0x10));
  uVar1 = F_00da6900(this);
  return uVar1;
}

/* ref: FUN_00e03f00 */
uint F_00e03f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe03f00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  
  F_00e01180((undefined *)((int)this + 0x58),&(*(int * PTR32 *)(gen_frame + 0x18)),param_1);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  if ((*(int * PTR32 *)(gen_frame + 0x18)) == (int *)0x0) {
    puVar2 = &(*(undefined4 *)(gen_frame + 0xc));
  }
  else {
    puVar2 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x18)) + 4))((*(int * PTR32 *)(gen_frame + 0x18)),((undefined1 *)(gen_frame + 0x14)))));
  }
  uVar3 = F_00e009c0((undefined *)((int)this + 0x34),*puVar2,puVar2[1],0xffffffff);
  iVar1 = *(int *)((int)this + 0x4c);
  F_00da6940(this,8);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x18)) + 8))((*(int * PTR32 *)(gen_frame + 0x18)))));
  uVar5 = 0;
  if (piVar4 != (int *)0x0) {
    uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 8))(piVar4);
    uVar5 = F_00da4190((undefined *)((int)this + 0x20),uVar5,0xffffffff);
  }
  F_00e00500(this,uVar5,(int)uVar5 >> 0x1f);
  F_00e03a70(this,param_1,uVar3 * 0x10 + iVar1);
  uVar5 = 0xffffffff;
  *(short *)((int)(*(int * PTR32 *)(gen_frame + 0x18)) + 6) = *(short *)((int)(*(int * PTR32 *)(gen_frame + 0x18)) + 6) + -1;
  piVar4 = (*(int * PTR32 *)(gen_frame + 0x18)) + 2;
  *piVar4 = *piVar4 + -1;
  if (*piVar4 == 0) {
    uVar5 = ((code *)*(gen_code32 *)*(*(int * PTR32 *)(gen_frame + 0x18)))((*(int * PTR32 *)(gen_frame + 0x18)),1);
  }
  return uVar5;
}

/* ref: FUN_00e03fc0 */
uint F_00e03fc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe03fc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = this;
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*param_1 + 8))((int *)*param_1)));
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2)));
  F_00da6c50(this,0xcab00d1e);
  F_00da6c50(this,0xd011face);
  F_00da6940(this,2);
  F_00da6940(this,6);
  F_00e02d20(this,piVar2,param_1,0);
  iVar4 = 1;
  if (1 < *(int *)((int)this + 0x50)) {
    param_1 = (undefined4 *)0x10;
    do {
      iVar3 = *(int *)((int)this + 0x4c) + (int)param_1;
      if (*(int *)(iVar3 + 0xc) != -1) {
        ((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2,&(*(undefined4 * PTR32 *)(gen_frame + 0x8)),iVar3);
        F_00e03f00(this,&(*(undefined4 * PTR32 *)(gen_frame + 0x8)));
        if ((*(undefined4 * PTR32 *)(gen_frame + 0x8)) != (undefined4 *)0x0) {
          *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x8)) + 6) = *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x8)) + 6) + -1;
          piVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0x8)) + 2;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            ((code *)*(gen_code32 *)*(*(undefined4 * PTR32 *)(gen_frame + 0x8)))((*(undefined4 * PTR32 *)(gen_frame + 0x8)),1);
          }
        }
      }
      param_1 = (undefined4 *)((int)param_1 + 0x10);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)((int)this + 0x50));
  }
  F_00da6940(this,0xe);
  return 0;
}

/* ref: hkObjectResource::vf4 */
unsigned int F_00e04100(void)
{
  GEN_ENTER(0xe04100u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00e04110 */
uint F_00e04110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe04110u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  uint uVar1;
  
  if (param_1 == (int *)0x0) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = "Pointer is null";
    }
    return 1;
  }
  F_00da1030(&(*(undefined4 *)(gen_frame + 0xc)),0xffffffff,0x40);
  (*(undefined4 *)(gen_frame + 0xc)) = 0x57e0e057;
  (*(undefined4 *)(gen_frame + 0x10)) = 0x10c0c010;
  (*(undefined1 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  if ((*param_1 != 0x57e0e057) || (param_1[1] != 0x10c0c010)) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = "Missing packfile magic header. Is this from a binary file?";
    }
    return 1;
  }
  if ((char)param_1[4] != (char)REFG(undefined4, 0x135491c)) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = "Trying to process a binary file with a different pointer size than this platform."
      ;
    }
    return 1;
  }
  if (*(char *)((int)param_1 + 0x11) != (char)((uint)REFG(undefined4, 0x135491c) >> 8)) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = "Trying to process a binary file with a different endian than this platform.";
    }
    return 1;
  }
  if (*(char *)((int)param_1 + 0x12) != (*(undefined1 *)((char *)&REFG(undefined4, 0x135491c) + 2))) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = 
      "Trying to process a binary file with a different padding optimization than this platform.";
    }
    return 1;
  }
  if (*(char *)((int)param_1 + 0x13) != (*(undefined1 *)((char *)&REFG(undefined4, 0x135491c) + 3))) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = 
      "Trying to process a binary file with a different empty base class optimization than this platform."
      ;
    }
    return 1;
  }
  if (((uint)param_1 & 3) != 0) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = "Packfile data source needs to be 4 byte aligned";
    }
    return 1;
  }
  if ((char)param_1[10] == -1) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = "Packfile file format is too old";
    }
    return 1;
  }
  uVar1 = F_00e05450();
  uVar1 = F_00da0d20(param_1 + 10,uVar1);
  if (uVar1 != 0) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = "Packfile contents are not up to date";
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_00e04270 */
uint F_00e04270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe04270u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int iVar1;
  int iVar2;
  int * piVar3;
  int iVar4;
  int iVar5;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar4 = 0;
  iVar1 = *(int *)(param_1 + 0x14);
  local_18 = 0;
  local_14 = 0;
  if (iVar1 < 1) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 0x40;
  }
  iVar2 = 0;
  local_8 = 0;
  local_10 = 0;
  local_c = 0;
  if (1 < iVar1) {
    piVar3 = (int *)(param_1 + 0x54);
    iVar5 = (iVar1 - 2U >> 1) + 1;
    iVar2 = iVar5 * 2;
    do {
      iVar4 = iVar4 + (piVar3[-0xc] - piVar3[-0xd]) / 0xc;
      local_10 = local_10 + ((piVar3[-0xf] + piVar3[-10]) - piVar3[-0xc]);
      local_8 = local_8 + (*piVar3 - piVar3[-1]) / 0xc;
      local_c = local_c + ((piVar3[-3] + piVar3[2]) - *piVar3);
      piVar3 = piVar3 + 0x18;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (iVar2 < iVar1) {
    iVar2 = iVar2 * 0x30;
    iVar5 = param_1 + iVar2;
    local_14 = (*(int *)(param_1 + 0x24 + iVar2) - *(int *)(param_1 + 0x20 + iVar2)) / 0xc;
    local_18 = (*(int *)(iVar5 + 0x2c) + *(int *)(iVar5 + 0x18)) - *(int *)(iVar5 + 0x24);
  }
  return local_c + (local_8 + (iVar1 * 3 + 3) * 2 + iVar4 + local_14) * 8 + local_10 + local_18;
}

/* ref: FUN_00e04370 */
uint F_00e04370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe04370u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if ((((param_1 != (int *)0x0) && (0x3f < param_2)) && (*param_1 == 0x57e0e057)) &&
     (((param_1[1] == 0x10c0c010 && (0 < param_1[5])) &&
      ((param_1[5] * 0x30 + 0x40 <= param_2 &&
       (param_1[param_1[8] * 0xc + 0x15] + param_1[9] <= param_2)))))) {
    return (int)param_1 + param_1[param_1[8] * 0xc + 0x15] + param_1[9];
  }
  return 0;
}

/* ref: FUN_00e043d0 */
uint F_00e043d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe043d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_eax = (int)gen_a0;
  int in_ecx = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  if (*(int *)(in_ecx + 0x18 + in_eax * 0x30) != 0) {
    return *(int *)(in_ecx + 0x14 + in_eax * 0x30) + param_3 + param_4;
  }
  return 0;
}

/* ref: FUN_00e043f0 */
uint F_00e043f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe043f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_esi = (int)gen_a0;
  int in_edi = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  F_00da1010(in_edi,in_esi,0x13);
  *(undefined1 *)(in_edi + 0x13) = *(undefined1 *)(in_esi + 0x13);
  *(int *)(in_edi + 0x14) = param_3;
  *(undefined4 *)(in_edi + 0x18) = *(undefined4 *)(in_esi + 0x18);
  *(undefined4 *)(in_edi + 0x1c) = *(undefined4 *)(in_esi + 0x18);
  *(undefined4 *)(in_edi + 0x20) = *(undefined4 *)(in_esi + 0x18);
  iVar1 = param_3 + param_5;
  *(undefined4 *)(in_edi + 0x24) = *(undefined4 *)(in_esi + 0x18);
  *(int *)(in_edi + 0x28) =
       (*(int *)(in_esi + 0x18) - *(int *)(in_esi + 0x24)) + *(int *)(in_esi + 0x28);
  *(int *)(in_edi + 0x2c) =
       (*(int *)(in_esi + 0x18) - *(int *)(in_esi + 0x24)) + *(int *)(in_esi + 0x2c);
  iVar3 = *(int *)(in_esi + 0x14) + param_4;
  F_00da1010(iVar1,iVar3,*(undefined4 *)(in_esi + 0x18));
  F_00da1010(*(int *)(in_edi + 0x24) + iVar1,*(int *)(in_esi + 0x24) + iVar3,
               *(int *)(in_esi + 0x28) - *(int *)(in_esi + 0x24));
  uVar2 = F_00da1010(*(int *)(in_edi + 0x28) + iVar1,*(int *)(in_esi + 0x28) + iVar3,
                       *(int *)(in_esi + 0x2c) - *(int *)(in_esi + 0x28));
  return uVar2;
}

/* ref: FUN_00e04490 */
unsigned int F_00e04490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe04490u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_eax = (int)gen_a0;
  int in_ecx = (int)gen_a1;
  int in_edi = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(in_edi + 0x1c) - *(int *)(in_edi + 0x18);
  iVar2 = *(int *)(in_edi + 0x14) + *(int *)(in_edi + 0x18) + param_4;
  iVar3 = 0;
  if (0 < (int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2) {
    do {
      iVar1 = *(int *)(iVar2 + iVar3 * 4);
      if (iVar1 != -1) {
        *(int *)(iVar1 + in_ecx + in_eax) = *(int *)(iVar2 + 4 + iVar3 * 4) + in_ecx + in_eax;
      }
      iVar1 = *(int *)(in_edi + 0x1c) - *(int *)(in_edi + 0x18);
      iVar3 = iVar3 + 2;
    } while (iVar3 < (int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2);
  }
  return 0;
}

/* ref: FUN_00e044f0 */
unsigned int F_00e044f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe044f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_eax = (int)gen_a0;
  int in_esi = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  int iVar1;
  int iVar2;
  int * piVar3;
  int iVar4;
  
  iVar1 = *(int *)(in_eax + 0x14);
  iVar2 = *(int *)(in_esi + 0x20) - *(int *)(in_esi + 0x1c);
  iVar4 = 0;
  if (0 < (int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2) {
    piVar3 = ((int *)GEN_TOP((*(int *)(in_esi + 0x14) + *(int *)(in_esi + 0x1c) + param_3 + 8)));
    do {
      if (piVar3[-2] != -1) {
        if (*(int *)(param_5 + 0x18 + piVar3[-1] * 0x30) == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(param_5 + 0x14 + piVar3[-1] * 0x30) + *piVar3 + param_4;
        }
        *(int *)(piVar3[-2] + iVar1 + param_4) = iVar2;
      }
      iVar2 = *(int *)(in_esi + 0x20) - *(int *)(in_esi + 0x1c);
      iVar4 = iVar4 + 3;
      piVar3 = piVar3 + 3;
    } while (iVar4 < (int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2);
  }
  return 0;
}

/* ref: FUN_00e04570 */
unsigned int F_00e04570(unsigned int gen_a0)
{
  GEN_ENTER(0xe04570u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined * this;
  int iVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  int local_8;
  
  if (*(int *)(param_1 + 0x14) < 1) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_1 + 0x40;
  }
  local_8 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    piVar2 = (int *)(iVar1 + 0x24);
    do {
      iVar1 = *piVar2 - piVar2[-1];
      if (iVar1 != 0) {
        iVar3 = piVar2[-4] + piVar2[-1] + param_1;
        iVar4 = 0;
        if (0 < (int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2) {
          do {
            iVar1 = *(int *)(iVar3 + iVar4 * 4);
            if ((iVar1 != -1) && (this = *(undefined * PTR32 *)(iVar3 + 8 + iVar4 * 4), this != (undefined *)0x0)) {
              F_00dc2610(this,piVar2[-4] + iVar1 + param_1);
            }
            iVar4 = iVar4 + 3;
          } while (iVar4 < (int)((*piVar2 - piVar2[-1]) + (*piVar2 - piVar2[-1] >> 0x1f & 3U)) >> 2)
          ;
        }
      }
      local_8 = local_8 + 1;
      piVar2 = piVar2 + 0xc;
    } while (local_8 < *(int *)(param_1 + 0x14));
  }
  return 0;
}

/* ref: FUN_00e04610 */
unsigned int F_00e04610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe04610u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  undefined * this;
  int iVar2;
  int local_8;
  
  iVar1 = param_1;
  local_8 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    param_1 = 0;
    do {
      this = ((undefined *)GEN_TOP((*(int *)(iVar1 + 0x14) + param_1)));
      iVar2 = *(int *)((int)this + 0x14) + iVar1;
      F_00e1e080(this,iVar2,param_2);
      F_00e1e120(this,iVar2,param_3);
      param_1 = param_1 + 0x30;
      local_8 = local_8 + 1;
    } while (local_8 < *(int *)(iVar1 + 0x18));
  }
  return 0;
}

/* ref: FUN_00e04670 */
uint F_00e04670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe04670u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined * this;
  
  if (*(int *)(param_1 + 0x14) < 1) {
    this = (undefined *)0x0;
  }
  else {
    this = (undefined *)(param_1 + 0x40);
  }
  iVar2 = 0;
  uVar1 = param_1;
  if (0 < *(int *)(param_1 + 0x14)) {
    do {
      iVar3 = *(int *)((int)this + 0x14) + param_1;
      F_00e1e080(this,iVar3,param_2);
      uVar1 = F_00e1e120(this,iVar3,param_3);
      iVar2 = iVar2 + 1;
      this = (undefined *)((int)this + 0x30);
    } while (iVar2 < *(int *)(param_1 + 0x14));
  }
  return uVar1;
}

/* ref: FUN_00e046c0 */
unsigned int F_00e046c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xe046c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  int * param_6 = (int *)(uintptr_t)gen_a5;
  int * param_7 = (int *)(uintptr_t)gen_a6;
  int * param_8 = (int *)(uintptr_t)gen_a7;
  int * param_9 = (int *)(uintptr_t)gen_a8;
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 * puVar8;
  undefined * this;
  uint uVar9;
  int iVar10;
  int * piVar11;
  int local_10;
  
  iVar4 = *(int *)(param_2 + 0x14);
  iVar5 = *(int *)(param_4 + 4);
  iVar6 = *(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20);
  iVar10 = *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x20) + param_3;
  local_10 = 0;
  if (0 < (int)(iVar6 + (iVar6 >> 0x1f & 3U)) >> 2) {
    piVar11 = (int *)(iVar10 + 8);
    param_3 = 8;
    do {
      iVar6 = piVar11[-2];
      if (iVar6 != -1) {
        if (*(int *)(param_5 + 0x18 + piVar11[-1] * 0x30) == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(param_5 + 0x14 + piVar11[-1] * 0x30) + param_4 + *piVar11;
        }
        iVar1 = iVar6 + iVar4 + param_4;
        puVar8 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*param_7 + 0x10))(param_7,iVar1,iVar7)));
        if (puVar8 != (undefined4 *)0x0) {
          if (param_6 == (int *)0x0) {
            iVar6 = *(int *)(param_2 + 0x20) + param_4 + *(int *)(param_2 + 0x14);
            *((undefined4 *)GEN_TOP(((int)piVar11 + iVar6 + (-4 - iVar10)))) = 0;
            *(undefined4 * PTR32 *)(param_3 + iVar6) = puVar8;
          }
          else {
            iVar7 = *(int *)(param_2 + 0x14);
            if (param_6[1] == (param_6[2] & 0x3fffffffU)) {
              F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_6,8);
            }
            puVar2 = (undefined4 *)(*param_6 + param_6[1] * 8);
            if (puVar2 != (undefined4 *)0x0) {
              *puVar2 = puVar8;
              puVar2[1] = iVar7 + iVar6;
            }
            param_6[1] = param_6[1] + 1;
            if (iVar1 == iVar5 + param_4) {
              *(undefined4 * PTR32 *)(param_4 + 0x20) = puVar8;
            }
          }
          if (((param_8 != (int *)0x0) &&
              (this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*param_8 + 0x10))(param_8,*puVar8))), this != (undefined *)0x0))
             && (uVar9 = F_00d92c00(this,"hk.PostFinish"), uVar9 != 0)) {
            if (param_9[1] == (param_9[2] & 0x3fffffffU)) {
              F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_9,8);
            }
            piVar3 = (int *)(*param_9 + param_9[1] * 8);
            *piVar3 = iVar1;
            piVar3[1] = (int)this;
            param_9[1] = param_9[1] + 1;
          }
        }
      }
      iVar6 = *(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20);
      param_3 = param_3 + 0xc;
      local_10 = local_10 + 3;
      piVar11 = piVar11 + 3;
    } while (local_10 < (int)(iVar6 + (iVar6 >> 0x1f & 3U)) >> 2);
  }
  return 0;
}

/* ref: FUN_00e04870 */
uint F_00e04870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe04870u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  uint param_5 = (uint)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  undefined4 * puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 * puVar6;
  int iVar7;
  int iVar8;
  int * piVar9;
  
  puVar2 = param_3;
  iVar7 = param_1;
  if (*(int *)(param_1 + 0x14) < 1) {
    (*(int *)(gen_frame + 0x18)) = 0;
  }
  else {
    (*(int *)(gen_frame + 0x18)) = param_1 + 0x40;
  }
  *param_3 = 0xd5109142;
  if (param_3 + 5 != (undefined4 *)0x0) {
    uVar4 = *(uint *)(param_1 + 0x14);
    param_3[6] = uVar4;
    param_3[5] = param_3 + 0xc;
    param_3[7] = uVar4 | 0x80000000;
  }
  piVar9 = (int *)(param_1 + 0x14);
  param_1 = (*piVar9 * 3 + 3) * 0x10;
  (*(int *)(gen_frame + 0x14)) = 0;
  if (0 < *piVar9) {
    (*(int * PTR32 *)(gen_frame + 0x10)) = (int *)0x0;
    iVar8 = (*(int *)(gen_frame + 0x18));
    do {
      (*(int *)(gen_frame + 0xc)) = param_3[5] + (int)(*(int * PTR32 *)(gen_frame + 0x10));
      F_00e043f0(iVar8,param_3[5] + (int)(*(int * PTR32 *)(gen_frame + 0x10)),param_1,iVar7,param_3);
      if ((*(int *)(gen_frame + 0x14)) == *(int *)(iVar7 + 0x18)) {
        param_3[1] = *(int *)(iVar7 + 0x1c) + param_1;
      }
      F_00e04490(param_3,param_1,iVar8,iVar7);
      param_1 = param_1 + *(int *)((*(int *)(gen_frame + 0xc)) + 0x2c);
      (*(int * PTR32 *)(gen_frame + 0x10)) = (*(int * PTR32 *)(gen_frame + 0x10)) + 0xc;
      iVar3 = (*(int *)(gen_frame + 0x14)) + 1;
      iVar8 = iVar8 + 0x30;
      (*(int *)(gen_frame + 0x14)) = iVar3;
    } while (iVar3 < *(int *)(iVar7 + 0x14));
  }
  param_3 = (undefined4 *)0x0;
  if (0 < *(int *)(iVar7 + 0x14)) {
    (*(int * PTR32 *)(gen_frame + 0x10)) = (int *)((*(int *)(gen_frame + 0x18)) + 0x1c);
    iVar8 = -0x1c - (*(int *)(gen_frame + 0x18));
    (*(int *)(gen_frame + 0xc)) = iVar8;
    do {
      if ((*(int * PTR32 *)(gen_frame + 0x10))[1] != *(*(int * PTR32 *)(gen_frame + 0x10))) {
        F_00e044f0((int)(*(int * PTR32 *)(gen_frame + 0x10)) + puVar2[5] + iVar8,(*(int * PTR32 *)(gen_frame + 0x10)) + -7,iVar7,puVar2,puVar2[5]);
        iVar8 = (*(int *)(gen_frame + 0xc));
      }
      param_3 = (undefined4 *)((int)param_3 + 1);
      (*(int * PTR32 *)(gen_frame + 0x10)) = (*(int * PTR32 *)(gen_frame + 0x10)) + 0xc;
    } while ((int)param_3 < *(int *)(iVar7 + 0x14));
  }
  if (puVar2 + 2 != (int *)0x0) {
    puVar2[2] = param_1 + (int)puVar2;
    puVar2[3] = 0;
    puVar2[4] = param_4 - param_1 | 0x80000000;
  }
  uVar4 = param_5;
  if (param_5 == 0) {
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e3738) + 0xc))))(REFG(undefined4, 0x15e3738));
  }
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e3738) + 0x10))))(REFG(undefined4, 0x15e3738));
  puVar2[8] = 0;
  (*(int *)(gen_frame + 0x0)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(int *)(gen_frame + 0x8)) = ((int)0x80000000);
  param_1 = 0;
  if (0 < *(int *)(iVar7 + 0x14)) {
    piVar9 = (int *)((*(int *)(gen_frame + 0x18)) + 0x20);
    iVar8 = -0x20 - (*(int *)(gen_frame + 0x18));
    (*(int *)(gen_frame + 0xc)) = iVar8;
    do {
      if (piVar9[1] != *piVar9) {
        F_00e046c0(piVar9 + -8,(int)piVar9 + puVar2[5] + iVar8,iVar7,puVar2,puVar2[5],puVar2 + 2,
                     uVar4,uVar5,&(*(int *)(gen_frame + 0x0)));
        iVar8 = (*(int *)(gen_frame + 0xc));
      }
      param_1 = param_1 + 1;
      piVar9 = piVar9 + 0xc;
    } while (param_1 < *(int *)(iVar7 + 0x14));
  }
  iVar7 = 0;
  if (0 < (*(int *)(gen_frame + 0x4))) {
    do {
      uVar1 = *(undefined4 *)((*(int *)(gen_frame + 0x0)) + iVar7 * 8);
      puVar6 = (undefined4 *)F_00d92c00(*(undefined * PTR32 *)((*(int *)(gen_frame + 0x0)) + 4 + iVar7 * 8),"hk.PostFinish");
      ((code *)*(gen_code32 *)*puVar6)(uVar1);
      iVar7 = iVar7 + 1;
    } while (iVar7 < (*(int *)(gen_frame + 0x4)));
  }
  iVar7 = puVar2[1];
  (*(int *)(gen_frame + 0x4)) = 0;
  if (-1 < (*(int *)(gen_frame + 0x8))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x0)),(*(int *)(gen_frame + 0x8)) * 8);
  }
  return iVar7 + (int)puVar2;
}

/* ref: FUN_00e04ab0 */
uint F_00e04ab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe04ab0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  uint uVar2;
  undefined4 * puVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  uVar2 = F_00e04110(param_1,param_4);
  if (uVar2 == 0) {
    if (*(int *)(param_1 + 0x14) < 1) {
      param_4 = (undefined4 *)0x0;
    }
    else {
      param_4 = (undefined4 *)(param_1 + 0x40);
    }
    if ((*(uint *)(param_1 + 0x38) & 1) == 0) {
      *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 1;
      (*(int *)(gen_frame + 0x14)) = -1;
      iVar5 = (int)param_4;
      if (0 < *(int *)(param_1 + 0x14)) {
        do {
          (*(uint *)(gen_frame + 0x18)) = *(int *)(iVar5 + 0x14);
          F_00da0d20(iVar5,"__types__");
          if (iVar4 == *(int *)(param_1 + 0x18)) {
            (*(int *)(gen_frame + 0x14)) = *(int *)(param_1 + 0x1c) + (*(uint *)(gen_frame + 0x18));
          }
          F_00e04490(param_1,(*(uint *)(gen_frame + 0x18)),iVar5,param_1);
          iVar4 = iVar4 + 1;
          iVar5 = iVar5 + 0x30;
        } while (iVar4 < *(int *)(param_1 + 0x14));
      }
      iVar5 = 0;
      iVar4 = (int)param_4;
      if (0 < *(int *)(param_1 + 0x14)) {
        do {
          if (*(int *)(iVar4 + 0x20) != *(int *)(iVar4 + 0x1c)) {
            F_00e044f0(iVar4,iVar4,param_1,param_1,param_4);
          }
          iVar5 = iVar5 + 1;
          iVar4 = iVar4 + 0x30;
        } while (iVar5 < *(int *)(param_1 + 0x14));
      }
      uVar2 = param_3;
      if (param_3 == 0) {
        uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e3738) + 0xc))))(REFG(undefined4, 0x15e3738));
      }
      (*(uint *)(gen_frame + 0x18)) = uVar2;
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e3738) + 0x10))))(REFG(undefined4, 0x15e3738));
      iVar5 = 0;
      (*(uint *)(gen_frame + 0x10)) = uVar2;
      (*(int *)(gen_frame + 0x4)) = 0;
      (*(int *)(gen_frame + 0x8)) = 0;
      (*(int *)(gen_frame + 0xc)) = ((int)0x80000000);
      iVar4 = (int)param_4;
      if (0 < *(int *)(param_1 + 0x14)) {
        do {
          if (*(int *)(iVar4 + 0x24) != *(int *)(iVar4 + 0x20)) {
            F_00e046c0(iVar4,iVar4,param_1,param_1,param_4,0,(*(uint *)(gen_frame + 0x18)),(*(uint *)(gen_frame + 0x10)),&(*(int *)(gen_frame + 0x4)));
          }
          iVar5 = iVar5 + 1;
          iVar4 = iVar4 + 0x30;
        } while (iVar5 < *(int *)(param_1 + 0x14));
      }
      iVar4 = 0;
      if (0 < (*(int *)(gen_frame + 0x8))) {
        do {
          uVar1 = *(undefined4 *)((*(int *)(gen_frame + 0x4)) + iVar4 * 8);
          puVar3 = (undefined4 *)F_00d92c00(*(undefined * PTR32 *)((*(int *)(gen_frame + 0x4)) + 4 + iVar4 * 8),"hk.PostFinish");
          ((code *)*(gen_code32 *)*puVar3)(uVar1);
          iVar4 = iVar4 + 1;
        } while (iVar4 < (*(int *)(gen_frame + 0x8)));
      }
      uVar2 = param_1 + (*(int *)(gen_frame + 0x14));
      (*(int *)(gen_frame + 0x8)) = 0;
      if (-1 < (*(int *)(gen_frame + 0xc))) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x4)),(*(int *)(gen_frame + 0xc)) * 8);
      }
      return uVar2;
    }
  }
  return 0;
}

/* ref: FUN_00e04c50 */
uint F_00e04c50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe04c50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  uint uVar2;
  LPVOID pvVar3;
  undefined4 * puVar4;
  
  (*(int *)(gen_frame + 0x0)) = 0;
  (*(uint *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0x80000000;
  uVar2 = F_00e04270(param_1,param_2);
  if (0 < (int)uVar2) {
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x0)),((int)uVar2 < 0) - 1 & uVar2,1);
  }
  (*(uint *)(gen_frame + 0x4)) = uVar2;
  uVar2 = F_00e04870(param_1,param_2,(*(int *)(gen_frame + 0x0)),uVar2,param_3);
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  puVar4 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar3 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar3 + 0x2c),0x1c)));
  *(undefined2 *)(puVar4 + 1) = 0x1c;
  uVar1 = **(undefined4 * PTR32 *)((*(int *)(gen_frame + 0x0)) + 0x20);
  *(undefined2 *)((int)puVar4 + 6) = 1;
  *puVar4 = (*(undefined * PTR32 (*)[8])REFP(0x114d474));
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = 0x80000000;
  puVar4[5] = uVar2;
  puVar4[6] = uVar1;
  F_00e04ea0(puVar4 + 2,&(*(int *)(gen_frame + 0x0)));
  (*(uint *)(gen_frame + 0x4)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) & 0x3fffffff);
  }
  return (uint)puVar4;
}

/* ref: FUN_00e04d40 */
uint F_00e04d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe04d40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  undefined4 * puVar2;
  
  *param_1 = 0;
  puVar2 = (undefined4 *)param_1[2];
  if (puVar2 < puVar2 + param_1[3] * 2) {
    do {
      F_00dc2610((undefined *)*puVar2,puVar2[1] + (int)param_1);
      puVar2 = puVar2 + 2;
    } while (puVar2 < (undefined4 *)(param_1[2] + param_1[3] * 8));
  }
  param_1[6] = 0;
  if ((param_1[7] & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),param_1[5],(param_1[7] & 0x3fffffff) * 0x30);
  }
  param_1[5] = 0;
  param_1[7] = 0x80000000;
  uVar1 = param_1[4];
  param_1[3] = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),param_1[2],uVar1 * 8);
  }
  param_1[4] = 0x80000000;
  param_1[2] = 0;
  return uVar1;
}

/* ref: FUN_00e04df0 */
uint F_00e04df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe04df0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00e04e00 */
uint F_00e04e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe04e00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00e04e10 */
uint F_00e04e10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe04e10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3 | 0x80000000;
  return (uint)this;
}

/* ref: FUN_00e04e60 */
uint F_00e04e60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe04e60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3 | 0x80000000;
  return (uint)this;
}

/* ref: FUN_00e04e80 */
uint F_00e04e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe04e80u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x30 + *in_ecx;
}

/* ref: FUN_00e04ea0 */
unsigned int F_00e04ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe04ea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)this;
  *(undefined4 *)this = *param_1;
  *param_1 = uVar1;
  uVar1 = *(undefined4 *)((int)this + 4);
  *(undefined4 *)((int)this + 4) = param_1[1];
  param_1[1] = uVar1;
  uVar1 = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)this + 8) = param_1[2];
  param_1[2] = uVar1;
  return 0;
}

/* ref: FUN_00e04ed0 */
uint F_00e04ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe04ed0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00e04f00 */
uint F_00e04f00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe04f00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00e04f20 */
uint F_00e04f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe04f20u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00e04f50 */
uint F_00e04f50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe04f50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3 | 0x80000000;
  return (uint)this;
}

/* ref: FUN_00e04f70 */
uint F_00e04f70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe04f70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3 | 0x80000000;
  return (uint)this;
}

/* ref: FUN_00e04f90 */
unsigned int F_00e04f90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe04f90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *param_3;
        puVar1[1] = param_3[1];
      }
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00e04fd0 */
uint F_00e04fd0(unsigned int gen_a0)
{
  GEN_ENTER(0xe04fd0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  *(short *)(uVar2 + 4) = (short)param_1;
  return uVar2;
}

/* ref: FUN_00e05000 */
uint F_00e05000(unsigned int gen_a0)
{
  GEN_ENTER(0xe05000u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00e05030 */
uint F_00e05030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe05030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)((int)this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00e05070 */
unsigned int F_00e05070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe05070u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 8)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return 0;
}

/* ref: FUN_00e050c0 */
uint F_00e050c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe050c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e05100 */
unsigned int F_00e05100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe05100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 8)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return 0;
}

/* ref: FUN_00e05150 */
uint F_00e05150(unsigned int gen_a0)
{
  GEN_ENTER(0xe05150u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e05190 */
uint F_00e05190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe05190u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x114d474));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x80000000;
  *(undefined4 *)((int)this + 0x14) = param_2;
  *(undefined4 *)((int)this + 0x18) = param_3;
  F_00e04ea0((undefined4 *)((int)this + 8),param_1);
  return (uint)this;
}

/* ref: LOCALNAMESPACE::hkNativeResource::vf3 */
uint F_00e051e0(void)
{
  GEN_ENTER(0xe051e0u, 0u, 0u, 0u, 0u);
  return 0x114d494;
}

/* ref: LOCALNAMESPACE::hkNativeResource::vf7 */
uint F_00e051f0(unsigned int gen_a0)
{
  GEN_ENTER(0xe051f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x18);
}

/* ref: LOCALNAMESPACE::hkNativeResource::vf6 */
uint F_00e05200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe05200u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  int * piVar2;
  uint uVar3;
  undefined * this_00;
  char * pcVar4;
  
  iVar1 = (*(int *)&gen_args[1]);
  if ((*(int *)&gen_args[1]) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e3738) + 0x10))))(REFG(undefined4, 0x15e3738))));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2,*((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18))));
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2,iVar1)));
    if (((uVar3 != 0) && (this_00 != (undefined *)0x0)) &&
       (pcVar4 = (char *)F_00d92650(this_00,(int)&(*(int *)&gen_args[1]) + 3,uVar3), *pcVar4 == '\0')) {
      return 0;
    }
  }
  return *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x14)));
}

/* ref: LOCALNAMESPACE::hkNativeResource::vf5 */
unsigned int F_00e05270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe05270u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00e04610(*(undefined4 *)(this + 8),param_2,param_1);
  return 0;
}

/* ref: FUN_00e05290 */
uint F_00e05290(unsigned int gen_a0)
{
  GEN_ENTER(0xe05290u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e052d0 */
uint F_00e052d0(unsigned int gen_a0)
{
  GEN_ENTER(0xe052d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x18) = 0;
  if (-1 < (int)*(uint *)((int)this + 0x1c)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x14),
               (*(uint *)((int)this + 0x1c) & 0x3fffffff) * 0x30);
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0x80000000;
  uVar1 = *(uint *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0xc) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 8),uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x80000000;
  return uVar1;
}

/* ref: FUN_00e05350 */
uint F_00e05350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe05350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00e052d0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: LOCALNAMESPACE::hkNativeResource::vf4 */
unsigned int F_00e05380(unsigned int gen_a0)
{
  GEN_ENTER(0xe05380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)(this + 0x14) != 0) {
    F_00e04d40(*(undefined4 *)(this + 8),*(undefined4 *)(this + 0xc));
    *(undefined4 *)(this + 0x14) = 0;
    *(undefined4 *)(this + 0x18) = 0;
  }
  return 0;
}

/* ref: FUN_00e053b0 */
uint F_00e053b0(unsigned int gen_a0)
{
  GEN_ENTER(0xe053b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x114d474));
  if (*(int *)((int)this + 0x14) != 0) {
    F_00e04d40(*(undefined4 *)((int)this + 8),*(undefined4 *)((int)this + 0xc));
    *(undefined4 *)((int)this + 0x14) = 0;
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  uVar1 = *(uint *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0xc) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 8),uVar1 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: LOCALNAMESPACE::hkNativeResource::vf0 */
uint F_00e05410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe05410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00e053b0(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00e05450 */
uint F_00e05450(void)
{
  GEN_ENTER(0xe05450u, 0u, 0u, 0u, 0u);
  return 0x113cdcc;
}

/* ref: FUN_00e05460 */
uint F_00e05460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe05460u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char * pcVar1;
  undefined * this;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  F_0105a6d0(((undefined1 *)(gen_frame + 0x8)),param_1,param_2);
  F_0105a6d0(((undefined1 *)(gen_frame + 0x10)),param_3,param_4);
  pcVar1 = (char *)F_0105a720(((undefined1 *)(gen_frame + 0x8)),&(*(undefined1 *)(gen_frame + 0x1b)));
  if (*pcVar1 != '\0') {
    pcVar1 = (char *)F_0105a720(((undefined1 *)(gen_frame + 0x10)),&(*(undefined1 *)(gen_frame + 0x1b)));
    if (*pcVar1 != '\0') {
      this = (undefined *)F_0105a8f0(((undefined1 *)(gen_frame + 0x10)));
      uVar2 = F_00da6030(this);
      uVar3 = F_0105a740(((undefined1 *)(gen_frame + 0x8)));
      uVar4 = F_0105a740(((undefined1 *)(gen_frame + 0x10)));
      pcVar1 = (char *)F_00da1010(uVar4,uVar3,uVar2);
    }
  }
  return (uint)pcVar1;
}

/* ref: FUN_00e054e0 */
uint F_00e054e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe054e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  uVar1 = F_00d929c0(param_3);
  F_00dba580(((undefined1 *)(gen_frame + 0x0)),param_1,uVar1,uVar4);
  iVar3 = 0;
  uVar1 = F_00d927e0(param_3);
  if (0 < (int)uVar1) {
    do {
      puVar2 = (undefined4 *)F_00d92800(param_3,iVar3);
      uVar1 = F_00d928d0(param_2,*puVar2);
      if (uVar1 == 0) {
        F_00dba4e0(((undefined1 *)(gen_frame + 0x0)),(uint)*(ushort *)((int)puVar2 + 0x12),0);
        F_00d92b10(param_3,iVar3,((undefined1 *)(gen_frame + 0x0)));
      }
      iVar3 = iVar3 + 1;
      uVar1 = F_00d927e0(param_3);
    } while (iVar3 < (int)uVar1);
  }
  uVar1 = F_00dba640(((undefined1 *)(gen_frame + 0x0)));
  return uVar1;
}

/* ref: FUN_00e05570 */
uint F_00e05570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe05570u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  F_0105ae50((*(int * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]));
  F_00e05630(&(*(int * PTR32 *)&gen_args[0]));
  iVar1 = *piVar2;
  iVar4 = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  for (; iVar1 != 0; iVar1 = piVar2[iVar1]) {
    F_00e05b60(&(*(int * PTR32 *)&gen_args[0]),iVar1,&(*(undefined4 *)(gen_frame + 0x0)),1);
    iVar1 = iVar4 + 1;
    iVar4 = iVar4 + 1;
  }
  uVar3 = F_00dbdb20(&(*(undefined4 *)(gen_frame + 0x0)),&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
  return uVar3;
}

/* ref: FUN_00e05630 */
uint F_00e05630(unsigned int gen_a0)
{
  GEN_ENTER(0xe05630u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = REFG(undefined4, 0x135491c);
  return (uint)in_ecx;
}

/* ref: FUN_00e05640 */
uint F_00e05640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe05640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00e05660 */
ushort F_00e05660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe05660u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x12) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00e05670 */
uint F_00e05670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe05670u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  code * pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  switch((unsigned int)(uintptr_t)(param_3)) {
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
  case 0x18: ;
  case 0x1f: ;
  case 0x20: ;
    uVar3 = F_00da6030(param_1);
    return uVar3;
  case 0x13: ;
    uVar3 = F_00e05670(param_1,param_2,(uint)*(byte *)((int)param_1 + 0xd));
    return uVar3;
  case 0x14: ;
  case 0x15: ;
  case 0x1d: ;
  case 0x1e: ;
  case 0x21: ;
    uVar3 = (uint)*param_2;
    break;
  case 0x16: ;
    iVar4 = 4;
  case 0x1a: ;
    return iVar4 + 4 + (uint)*param_2;
  case 0x17: ;
    return 0;
  case 0x19: ;
    uVar3 = F_00da5fc0(param_1);
    uVar3 = F_00d929c0(uVar3);
    break;
  case 0x1b: ;
    return (uint)*param_2 * 2 + 4;
  case 0x1c: ;
    return (uint)*param_2 * 2;
  case 0x22: ;
    return 4;
  default: ;
    F_00da0a80(((undefined1 *)(gen_frame + 0x200)),((undefined1 *)(gen_frame + 0x0)),0x200);
    F_00d9fe80(((undefined1 *)(gen_frame + 0x200)),"Unknown class member type in structureLayout::getMemberSize().");
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                      (REFG(undefined4, 0x15dff78),3,0x50a18b58,((undefined1 *)(gen_frame + 0x0)),"Util\\hkStructureLayout.cpp",0xcd);
    if (uVar3 == 0) {
      F_00d9fda0(((undefined1 *)(gen_frame + 0x200)));
      return 0;
    }
    pcVar1 = ((code *)GEN_TOP(swi(3)));
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  uVar2 = F_00da5ff0(param_1);
  if (uVar2 != 0) {
    uVar2 = F_00da5ff0(param_1);
    return uVar2 * uVar3;
  }
  return uVar3;
}

/* ref: FUN_00e05800 */
uint F_00e05800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe05800u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  undefined * this;
  uint uVar2;
  int iVar3;
  
  uVar1 = 0xffffffff;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
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
  case 0x18: ;
  case 0x1f: ;
  case 0x20: ;
  case 0x22: ;
    uVar1 = F_00da6140(param_1);
    break;
  case 0x13: ;
    uVar1 = F_00e05800(param_1,(uint)*(byte *)((int)param_1 + 0xd),param_3);
    break;
  case 0x14: ;
  case 0x15: ;
  case 0x16: ;
  case 0x1a: ;
  case 0x1b: ;
  case 0x1c: ;
  case 0x1d: ;
  case 0x1e: ;
  case 0x21: ;
    uVar1 = param_3;
    break;
  case 0x19: ;
    uVar1 = 1;
    this = (undefined *)F_00da5fc0(param_1);
    iVar3 = 0;
    uVar2 = F_00d927e0(this);
    if (0 < (int)uVar2) {
      do {
        uVar2 = F_00d92800(this,iVar3);
        uVar2 = F_00e05800((undefined *)uVar2,(uint)*(byte *)(uVar2 + 0xc),param_3);
        if ((int)uVar1 < (int)uVar2) {
          uVar1 = uVar2;
        }
        iVar3 = iVar3 + 1;
        uVar2 = F_00d927e0(this);
      } while (iVar3 < (int)uVar2);
    }
  }
  if (((*(ushort *)((int)param_1 + 0x10) & 0x180) != 0) &&
     (uVar2 = (uint)((*(ushort *)((int)param_1 + 0x10) & 0x180) == 0x100) * 8 + 8,
     (int)uVar1 < (int)uVar2)) {
    uVar1 = uVar2;
  }
  return uVar1;
}

/* ref: FUN_00e05900 */
uint F_00e05900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe05900u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 in_ecx;
  uint uVar1;
  uint uVar2;
  undefined * this;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte * pbVar6;
  undefined * pvVar7;
  
  this = (*(undefined * PTR32 *)&gen_args[0]);
  F_00dbd8b0((*(undefined * PTR32 *)&gen_args[2]),&REFG(undefined * PTR32, 0x13516ac),(*(undefined * PTR32 *)&gen_args[0]),0);
  if ((*(undefined * PTR32 *)&gen_args[3]) != (undefined *)0x0) {
    uVar1 = F_00d927e0((*(undefined * PTR32 *)&gen_args[0]));
    (*(uint *)(gen_frame + 0x14)) = uVar1;
    (*(undefined * PTR32 *)&gen_args[0]) = (undefined *)0x0;
    if (0 < (int)uVar1) {
      do {
        uVar1 = F_00d92840(this,(*(undefined * PTR32 *)&gen_args[0]));
        if (*(int *)(uVar1 + 4) != 0) {
          uVar2 = F_00da5fc0(uVar1);
          uVar2 = F_00dbd930((*(undefined * PTR32 *)&gen_args[2]),uVar2);
          if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[2]) + 8))) < (int)uVar2) {
            pbVar6 = (*(byte * PTR32 *)&gen_args[1]);
            pvVar7 = (*(undefined * PTR32 *)&gen_args[2]);
            iVar5 = (int)(*(undefined * PTR32 *)&gen_args[3]);
            uVar1 = F_00da5fc0(uVar1);
            F_00e05900((undefined *)uVar1,pbVar6,pvVar7,(undefined *)iVar5);
          }
        }
        (*(undefined * PTR32 *)&gen_args[0]) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 1)));
      } while ((int)(*(undefined * PTR32 *)&gen_args[0]) < (int)(*(uint *)(gen_frame + 0x14)));
    }
  }
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(int *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0xc)) = 0x80000000;
  F_00d95690(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0x4)),0x10,4);
  for (; this != (undefined *)0x0; this = (undefined *)F_00d92620(this)) {
    (*(undefined * PTR32 *)&gen_args[3]) = this;
    F_00e05e90(&(*(int *)(gen_frame + 0x4)),&REFG(undefined * PTR32, 0x13516a4),0,&(*(undefined * PTR32 *)&gen_args[3]));
  }
  uVar1 = 0;
  (*(undefined * PTR32 *)&gen_args[3]) = (undefined *)0x1;
  (*(uint *)(gen_frame + 0x10)) = (uint)*(*(byte * PTR32 *)&gen_args[1]);
  (*(int *)(gen_frame + 0x18)) = 0;
  if (0 < (*(int *)(gen_frame + 0x8))) {
    do {
      uVar2 = (*(uint *)(gen_frame + 0x10));
      in_ecx = *(undefined4 *)((*(int *)(gen_frame + 0x4)) + (*(int *)(gen_frame + 0x18)) * 4);
      (*(uint *)(gen_frame + 0x14)) = 0;
      uVar3 = F_00d926f0(in_ecx);
      if (0 < (int)uVar3) {
        do {
          if ((int)uVar1 % (int)uVar2 != 0) {
            uVar1 = uVar1 + (uVar2 - (int)uVar1 % (int)uVar2);
          }
          uVar1 = uVar1 + uVar2;
          if ((int)(*(undefined * PTR32 *)&gen_args[3]) < (int)uVar2) {
            (*(undefined * PTR32 *)&gen_args[3]) = (undefined *)uVar2;
          }
          (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x14)) + 1;
          uVar3 = F_00d926f0(in_ecx);
        } while ((int)(*(uint *)(gen_frame + 0x14)) < (int)uVar3);
      }
      iVar5 = 0;
      uVar2 = F_00d92850(in_ecx);
      if (0 < (int)uVar2) {
        do {
          uVar2 = F_00d92860(in_ecx,iVar5);
          if (((uVar1 == 0) && ((*(int *)(gen_frame + 0x18)) != 0)) && ((*(byte * PTR32 *)&gen_args[1])[3] == 0)) {
            uVar1 = 1;
          }
          uVar3 = F_00e05800(uVar2,(uint)*(byte *)(uVar2 + 0xc),(uint)*(*(byte * PTR32 *)&gen_args[1]));
          if ((int)(*(undefined * PTR32 *)&gen_args[3]) < (int)uVar3) {
            (*(undefined * PTR32 *)&gen_args[3]) = (undefined *)uVar3;
          }
          if ((int)uVar1 % (int)uVar3 != 0) {
            uVar1 = uVar1 + (uVar3 - (int)uVar1 % (int)uVar3);
          }
          if (*(ushort *)(uVar2 + 0x12) != uVar1) {
            F_00e05660(uVar2,uVar1);
          }
          uVar2 = F_00e05670(uVar2,(*(byte * PTR32 *)&gen_args[1]),(uint)*(byte *)(uVar2 + 0xc));
          uVar1 = uVar1 + uVar2;
          iVar5 = iVar5 + 1;
          uVar2 = F_00d92850(in_ecx);
        } while (iVar5 < (int)uVar2);
      }
      uVar2 = uVar1;
      if ((int)uVar1 % (int)(*(undefined * PTR32 *)&gen_args[3]) != 0) {
        uVar2 = ((int)(*(undefined * PTR32 *)&gen_args[3]) - (int)uVar1 % (int)(*(undefined * PTR32 *)&gen_args[3])) + uVar1;
      }
      uVar3 = uVar2;
      if (uVar2 == 0) {
        uVar3 = 1;
      }
      uVar4 = F_00d929c0(in_ecx);
      if (uVar4 != uVar3) {
        F_00d929d0(in_ecx,uVar3);
      }
      if ((*(byte * PTR32 *)&gen_args[1])[2] == 0) {
        uVar1 = uVar2;
      }
      iVar5 = (*(int *)(gen_frame + 0x18)) + 1;
      (*(int *)(gen_frame + 0x18)) = iVar5;
    } while (iVar5 < (*(int *)(gen_frame + 0x8)));
  }
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = (*(uint *)(gen_frame + 0xc));
  if (-1 < (int)(*(uint *)(gen_frame + 0xc))) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0x4)),(*(uint *)(gen_frame + 0xc)) * 4);
  }
  return uVar1;
}

/* ref: FUN_00e05b60 */
uint F_00e05b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe05b60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00dbd930(param_2,param_1);
  if (*(int *)((int)param_2 + 8) < (int)uVar1) {
    uVar1 = F_00e05900(param_1,this,param_2,param_3);
  }
  return uVar1;
}

/* ref: FUN_00e05ba0 */
uint F_00e05ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe05ba0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return *(*(ushort * PTR32 *)&gen_args[0]) & (*(uint *)&gen_args[1]);
}

/* ref: FUN_00e05be0 */
uint F_00e05be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe05be0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00e05c10 */
uint F_00e05c10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe05c10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00e05c40 */
unsigned int F_00e05c40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe05c40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  if (0 < param_2) {
    puVar1 = param_1;
    iVar2 = param_2;
    do {
      *puVar1 = *((undefined4 *)GEN_TOP(((param_3 - (int)param_1) + (int)puVar1)));
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00e05c70 */
ushort F_00e05c70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe05c70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x12) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00e05c80 */
uint F_00e05c80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe05c80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = *(int *)(in_ecx + 4) != 0;
  return param_2;
}

/* ref: FUN_00e05cc0 */
uint F_00e05cc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe05cc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
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

/* ref: FUN_00e05d10 */
unsigned int F_00e05d10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xe05d10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  int param_5 = (int)gen_a5;
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)((int)this + 4);
  iVar5 = (iVar4 - param_3) + param_5;
  uVar1 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar1 < iVar5) {
    iVar3 = uVar1 * 2;
    if (iVar3 <= iVar5) {
      iVar3 = iVar5;
    }
    F_00d95690(param_1,this,iVar3,4);
  }
  F_00da38f0(*(int *)this + (param_2 + param_5) * 4,*(int *)this + (param_3 + param_2) * 4,
               ((iVar4 - param_2) - param_3) * 4);
  puVar2 = (undefined4 *)(*(int *)this + param_2 * 4);
  if (0 < param_5) {
    iVar3 = param_4 - (int)puVar2;
    iVar4 = param_5;
    do {
      *puVar2 = *(undefined4 *)(iVar3 + (int)puVar2);
      puVar2 = puVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *(int *)((int)this + 4) = iVar5;
  return 0;
}

/* ref: FUN_00e05db0 */
uint F_00e05db0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe05db0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbd8b0(this,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e05dd0 */
uint F_00e05dd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe05dd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbd930(this,param_2);
  *(bool *)param_1 = (int)uVar1 <= *(int *)((int)this + 8);
  return param_1;
}

/* ref: FUN_00e05df0 */
uint F_00e05df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe05df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar3,4);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00e05e30 */
uint F_00e05e30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe05e30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e05e70 */
unsigned int F_00e05e70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe05e70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00e05d10(this,param_1,param_2,0,param_3,param_4);
  return 0;
}

/* ref: FUN_00e05e90 */
unsigned int F_00e05e90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe05e90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00e05e70(this,param_1,param_2,param_3,1);
  return 0;
}

/* ref: FUN_00e05eb0 */
uint F_00e05eb0(unsigned int gen_a0)
{
  GEN_ENTER(0xe05eb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e05ef0 */
unsigned int F_00e05ef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe05ef0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00e05e90(this,&REFG(undefined * PTR32, 0x13516a4),param_1,param_2);
  return 0;
}

/* ref: FUN_00e05f10 */
uint F_00e05f10(unsigned int gen_a0)
{
  GEN_ENTER(0xe05f10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e05f60 */
uint F_00e05f60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe05f60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  if ((*(int *)this == *param_1) && (*(int *)((int)this + 4) == param_1[1])) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00e05f90 */
uint F_00e05f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe05f90u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return (*(*(uint * PTR32 *)&gen_args[0]) >> 4) * -0x61c8864f & (*(uint *)&gen_args[1]);
}

/* ref: FUN_00e05fb0 */
uint F_00e05fb0(unsigned int gen_a0)
{
  GEN_ENTER(0xe05fb0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  *param_1 = 0xffffffff;
  return (uint)param_1;
}

/* ref: FUN_00e05fc0 */
byte F_00e05fc0(unsigned int gen_a0)
{
  GEN_ENTER(0xe05fc0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  return *param_1 != -1;
}

/* ref: FUN_00e05fd0 */
uint F_00e05fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe05fd0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00e06010 */
uint F_00e06010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe06010u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: FUN_00e06040 */
uint F_00e06040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe06040u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  return (uint)this;
}

/* ref: FUN_00e06080 */
uint F_00e06080(unsigned int gen_a0)
{
  GEN_ENTER(0xe06080u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  char * pcVar2;
  
  uVar1 = (*(undefined4 *)&gen_args[0]);
  pcVar2 = (char *)F_00d929e0((*(undefined4 *)&gen_args[0]),(int)&(*(undefined4 *)&gen_args[0]) + 3);
  if (*pcVar2 != '\0') {
    pcVar2 = (char *)F_00d92650(&REFG(undefined, 0x15da420),&(*(undefined1 *)(gen_frame + 0xb)),uVar1);
    if (*pcVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00e060d0 */
uint F_00e060d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe060d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  uint uVar1;
  
  switch((unsigned int)(uintptr_t)((&REFG(undefined, 0x114d578))[param_2 * 4])) {
  case 1: ;
    return *((uint *)GEN_TOP(((int)param_1 + (uint)(byte)(&REFG(undefined, 0x114d579))[param_2 * 4] * 4 + 0xc)));
  default: ;
    return 0;
  case 4: ;
    uVar1 = F_00e1a6a0(param_1,*((undefined4 *)GEN_TOP(((int)param_1 + (uint)(byte)(&REFG(undefined, 0x114d579))[param_2 * 4] * 4 + 0xc
                                  ))),(uint)(byte)(&REFG(undefined, 0x114d57a))[param_2 * 4]);
    return uVar1;
  case 5: ;
    if (param_3 != 0) {
      uVar1 = F_00e1a240(param_1,param_3);
      uVar1 = F_00e1a640(param_1,uVar1);
      return uVar1;
    }
switchD_00e060e4_caseD_7: ;
    uVar1 = F_00e1a640(param_1,*(undefined4 *)((int)param_1 + 8));
    return uVar1;
  case 6: ;
    uVar1 = F_00e1a240(param_1,param_3);
    return uVar1;
  case 7: ;
    goto switchD_00e060e4_caseD_7;
  }
}

/* ref: FUN_00e06180 */
uint F_00e06180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe06180u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = 0;
  switch((unsigned int)(uintptr_t)((&REFG(undefined, 0x114d578))[param_2 * 4])) {
  case 1: ;
    uVar1 = *((uint *)GEN_TOP(((int)param_1 + (uint)(byte)(&REFG(undefined, 0x114d579))[param_2 * 4] * 4 + 0xc)));
    break;
  case 2: ;
    if (param_3 == 0x19) {
      uVar1 = F_00e1a240(param_1,param_4);
    }
    else {
      uVar1 = F_00e060d0(param_1,param_3,param_4);
    }
    if (param_5 != 0) {
      uVar1 = F_00e1a6a0(param_1,uVar1,param_5);
    }
    uVar1 = F_00e1a670(param_1,uVar1);
    return uVar1;
  case 3: ;
    uVar3 = 0;
    iVar2 = param_3;
    goto LAB_00e0623b;
  case 4: ;
    uVar1 = F_00e1a6a0(param_1,*((undefined4 *)GEN_TOP(((int)param_1 + (uint)(byte)(&REFG(undefined, 0x114d579))[param_2 * 4] * 4 + 0xc
                                  ))),(uint)(byte)(&REFG(undefined, 0x114d57a))[param_2 * 4]);
    break;
  case 5: ;
    uVar1 = F_00e060d0(param_1,param_3,param_4);
    uVar1 = F_00e1a640(param_1,uVar1);
    break;
  case 6: ;
  case 7: ;
    iVar2 = param_2;
    uVar3 = param_4;
LAB_00e0623b: ;
    uVar1 = F_00e060d0(param_1,iVar2,uVar3);
  }
  if (param_5 != 0) {
    uVar1 = F_00e1a6a0(param_1,uVar1,param_5);
  }
  return uVar1;
}

/* ref: FUN_00e06280 */
uint F_00e06280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe06280u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int param_4 = (int)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  
  if (param_4 != 0) {
    uVar1 = F_00d92610(param_4);
    uVar1 = F_00e06180(param_1,param_2,param_3,uVar1,param_5);
    return uVar1;
  }
  uVar1 = F_00e06180(param_1,param_2,param_3,0,param_5);
  return uVar1;
}

/* ref: FUN_00e062e0 */
uint F_00e062e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe062e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  uint uVar2;
  undefined4 * in_ecx;
  int * piVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = 0;
  (*(uint *)(gen_frame + 0x18)) = 0;
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar2 = F_00d927e0(param_1);
  if (0 < (int)uVar2) {
    do {
      in_ecx = (undefined4 *)F_00d92800(param_1,iVar5);
      if (*(char *)(in_ecx + 3) == '\"') {
        ((code *)*(gen_code32 *)(*(int *)*param_2 + 0xc))((int *)*param_2,&(*(int * PTR32 *)(gen_frame + 0xc)),*in_ecx);
        piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0xc)) + 0x28))((*(int * PTR32 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)))));
        if (piVar3 != (int *)0x0) {
          *(short *)((int)piVar3 + 6) = *(short *)((int)piVar3 + 6) + 1;
          piVar3[2] = piVar3[2] + 1;
        }
        uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x14))(piVar3);
        uVar4 = F_00da61f0(in_ecx);
        (*(uint *)(gen_frame + 0x18)) = (*(uint *)(gen_frame + 0x18)) + (uVar4 * uVar2 + 0xf & 0xfffffff0);
        *(short *)((int)piVar3 + 6) = *(short *)((int)piVar3 + 6) + -1;
        piVar1 = piVar3 + 2;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          ((code *)*(gen_code32 *)*piVar3)(piVar3,1);
        }
      }
      iVar5 = (*(int *)(gen_frame + 0x14)) + 1;
      (*(int *)(gen_frame + 0x14)) = iVar5;
      uVar2 = F_00d927e0(param_1);
    } while (iVar5 < (int)uVar2);
    return (*(uint *)(gen_frame + 0x18));
  }
  return 0;
}

/* ref: FUN_00e063b0 */
uint F_00e063b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe063b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00e1f040(((undefined1 *)(gen_frame + 0x8)),param_1,param_2);
  uVar1 = F_00e1f710(this);
  F_00e06bd0(((undefined1 *)(gen_frame + 0x10)),&REFG(undefined * PTR32, 0x13516ac));
  return uVar1;
}

/* ref: FUN_00e063f0 */
uint F_00e063f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe063f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00e08930(((undefined1 *)(gen_frame + 0x0)),param_2,1,param_4);
  uVar1 = F_00e09020(this,param_1,param_3);
  F_00e089b0(((undefined1 *)(gen_frame + 0x0)));
  return uVar1;
}

/* ref: FUN_00e06430 */
uint F_00e06430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe06430u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  undefined4 in_ecx;
  undefined * this;
  LPVOID pvVar1;
  undefined * pvVar2;
  undefined * pvVar3;
  uint uVar4;
  
  this = (undefined *)F_00e08930(((undefined1 *)(gen_frame + 0x8)),param_2,0,param_3);
  if (*param_1 == 0) {
    F_00e089b0(((undefined1 *)(gen_frame + 0x8)));
    return 0;
  }
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))
                             (*(int * PTR32 *)((int)pvVar1 + 0x2c),0x70)));
  *(undefined2 *)((int)pvVar2 + 4) = 0x70;
  pvVar3 = (undefined *)F_00e24780(pvVar2,*(undefined4 *)((int)this + 0x4c));
  pvVar2 = *(undefined * PTR32 *)((int)this + 0x50);
  if ((pvVar2 != (undefined *)0x0) && (pvVar2 != pvVar3)) {
    F_00d91a80(pvVar2);
  }
  *(undefined * PTR32 *)((int)this + 0x50) = pvVar3;
  F_00e08de0(this,&(*(int *)(gen_frame + 0x64)),param_1);
  if (((*(int *)(gen_frame + 0x64)) != 0) && ((*(int *)(gen_frame + 0x68)) != 0)) {
    F_00e086b0(this,*(undefined4 *)((int)this + 0x50));
    in_ecx = *(undefined4 *)((int)this + 0x50);
    uVar4 = F_00d92610((*(int *)(gen_frame + 0x68)));
    F_00e242a0(in_ecx,(*(int *)(gen_frame + 0x64)),uVar4);
    pvVar2 = *(undefined * PTR32 *)((int)this + 0x50);
    F_00d919e0(pvVar2);
    if (*(undefined * PTR32 *)((int)this + 0x50) != (undefined *)0x0) {
      F_00d91a80(*(undefined * PTR32 *)((int)this + 0x50));
    }
    *(undefined4 *)((int)this + 0x50) = 0;
    F_00e089b0(((undefined1 *)(gen_frame + 0x8)));
    return (uint)pvVar2;
  }
  if (*(undefined * PTR32 *)((int)this + 0x50) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 0x50));
  }
  *(undefined4 *)((int)this + 0x50) = 0;
  F_00e089b0(((undefined1 *)(gen_frame + 0x8)));
  return 0;
}

/* ref: FUN_00e06540 */
uint F_00e06540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe06540u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  piVar1 = REFG(undefined4, 0x15e3738);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e3738) + 0xc))))(REFG(undefined4, 0x15e3738));
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
  uVar2 = F_00e063f0(param_1,uVar3,uVar2,param_2);
  return uVar2;
}

/* ref: FUN_00e06580 */
uint F_00e06580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe06580u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e3738) + 0x10))))(REFG(undefined4, 0x15e3738));
  uVar1 = F_00e06430(param_1,uVar1,param_2);
  return uVar1;
}

/* ref: FUN_00e065b0 */
uint F_00e065b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe065b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00e065c0 */
uint F_00e065c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe065c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00e065f0 */
uint F_00e065f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe065f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00e06600 */
uint F_00e06600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe06600u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00e06690 */
uint F_00e06690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe06690u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = (*(uint *)(in_ecx + 4) & 0x80000000) == 0;
  return param_2;
}

/* ref: FUN_00e066b0 */
uint F_00e066b0(unsigned int gen_a0)
{
  GEN_ENTER(0xe066b0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  return (uint)(((*(uint *)&gen_args[0]) - 1 & (*(uint *)&gen_args[0])) == 0);
}

/* ref: FUN_00e06740 */
uint F_00e06740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe06740u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00e06790 */
uint F_00e06790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe06790u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00e067a0 */
uint F_00e067a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe067a0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00e067f0 */
unsigned int F_00e067f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe067f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*(int *)this + 4 + param_2 * 0x10);
  *param_1 = *(undefined4 *)(*(int *)this + param_2 * 0x10);
  param_1[1] = uVar1;
  return 0;
}

/* ref: FUN_00e06810 */
unsigned int F_00e06810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe06810u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*(int *)this + 0xc + param_2 * 0x10);
  *param_1 = *(undefined4 *)(*(int *)this + 8 + param_2 * 0x10);
  param_1[1] = uVar1;
  return 0;
}

/* ref: FUN_00e06830 */
uint F_00e06830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe06830u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  
  iVar1 = *(int *)this;
  *(undefined4 *)(iVar1 + 8 + param_1 * 0x10) = param_2;
  *(undefined4 *)(iVar1 + 0xc + param_1 * 0x10) = param_3;
  return param_1 * 2;
}

/* ref: FUN_00e06850 */
unsigned int F_00e06850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe06850u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  
  iVar1 = param_1 + 1;
  if (iVar1 <= *(int *)((int)this + 8)) {
    piVar2 = (int *)(iVar1 * 0x10 + *(int *)this);
    do {
      if (*piVar2 != -1) {
        return 0;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 4;
    } while (iVar1 <= *(int *)((int)this + 8));
  }
  return 0;
}

/* ref: FUN_00e06880 */
uint F_00e06880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe06880u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  *(bool *)param_2 = param_3 <= *(int *)(in_ecx + 8);
  return param_2;
}

/* ref: FUN_00e068a0 */
uint F_00e068a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xe068a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (*(int *)((int)this + 8) < *(int *)((int)this + 4) * 2) {
    F_00e07a00(this,param_1,*(int *)((int)this + 8) * 2 + 2);
  }
  iVar1 = *(int *)this;
  uVar3 = (param_2 >> 4) * -0x61c8864f & *(uint *)((int)this + 8);
  iVar4 = uVar3 * 0x10;
  uVar2 = 1;
  if (*(int *)(iVar1 + iVar4) != -1) {
    do {
      if ((*(uint *)(iVar1 + iVar4) == param_2) && (*(int *)(iVar1 + 4 + iVar4) == param_3)) {
        uVar2 = 0;
        goto LAB_00e06912;
      }
      uVar3 = uVar3 + 1 & *(uint *)((int)this + 8);
      iVar4 = uVar3 * 0x10;
    } while (*(int *)(iVar4 + iVar1) != -1);
    uVar2 = 1;
  }
LAB_00e06912: ;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + uVar2;
  *(uint *)(iVar1 + uVar3 * 0x10) = param_2;
  *(int *)(iVar1 + 4 + uVar3 * 0x10) = param_3;
  iVar1 = *(int *)this;
  *(undefined4 *)(iVar1 + 8 + uVar3 * 0x10) = param_4;
  *(undefined4 *)(iVar1 + 0xc + uVar3 * 0x10) = param_5;
  return uVar2;
}

/* ref: FUN_00e06940 */
uint F_00e06940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe06940u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint * puVar4;
  
  uVar1 = *(uint *)((int)this + 8);
  if (0 < (int)uVar1) {
    uVar3 = (param_1 >> 4) * -0x61c8864f & uVar1;
    puVar4 = (uint *)(uVar3 * 0x10 + *(int *)this);
    uVar2 = *puVar4;
    while (uVar2 != 0xffffffff) {
      if ((*puVar4 == param_1) && (puVar4[1] == param_2)) {
        return uVar3;
      }
      uVar3 = uVar3 + 1 & uVar1;
      puVar4 = (uint *)(uVar3 * 0x10 + *(int *)this);
      uVar2 = *puVar4;
    }
  }
  return uVar1 + 1;
}

/* ref: FUN_00e069a0 */
uint F_00e069a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xe069a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint * puVar6;
  
  uVar1 = *(uint *)((int)this + 8);
  if (0 < (int)uVar1) {
    iVar2 = *(int *)this;
    uVar5 = (param_2 >> 4) * -0x61c8864f & uVar1;
    puVar6 = (uint *)(uVar5 * 0x10 + iVar2);
    uVar3 = *puVar6;
    while (uVar3 != 0xffffffff) {
      if ((*puVar6 == param_2) && (puVar6[1] == param_3)) {
        uVar4 = *(undefined4 *)(iVar2 + 0xc + uVar5 * 0x10);
        *param_1 = *(undefined4 *)(iVar2 + 8 + uVar5 * 0x10);
        param_1[1] = uVar4;
        return (uint)param_1;
      }
      uVar5 = uVar5 + 1 & uVar1;
      puVar6 = (uint *)(uVar5 * 0x10 + iVar2);
      uVar3 = *puVar6;
    }
  }
  *param_1 = param_4;
  param_1[1] = param_5;
  return (uint)param_1;
}

/* ref: FUN_00e06a20 */
uint F_00e06a20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe06a20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int iVar1;
  uint uVar2;
  
  uVar2 = F_00e06940(this,param_1,param_2);
  if ((int)uVar2 <= *(int *)((int)this + 8)) {
    iVar1 = *(int *)this;
    *param_3 = *(undefined4 *)(iVar1 + 8 + uVar2 * 0x10);
    param_3[1] = *(undefined4 *)(iVar1 + 0xc + uVar2 * 0x10);
    return 0;
  }
  return 1;
}

/* ref: FUN_00e06a60 */
unsigned int F_00e06a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe06a60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  *(undefined4 *)(*(int *)this + param_1 * 0x10) = 0xffffffff;
  uVar6 = *(uint *)((int)this + 8);
  uVar2 = uVar6 + param_1 & uVar6;
  iVar1 = *(int *)(*(int *)this + uVar2 * 0x10);
  while (iVar1 != -1) {
    uVar2 = uVar2 + uVar6 & uVar6;
    iVar1 = *(int *)(*(int *)this + uVar2 * 0x10);
  }
  uVar3 = uVar2 + 1 & uVar6;
  uVar2 = param_1 + 1 & uVar6;
  iVar4 = uVar2 * 0x10;
  iVar1 = *(int *)(*(int *)this + iVar4);
  uVar5 = param_1;
  while (iVar1 != -1) {
    uVar6 = (*(uint *)(*(int *)this + iVar4) >> 4) * -0x61c8864f & uVar6;
    if ((((uVar2 < uVar3) || (uVar6 <= uVar5)) &&
        ((uVar5 <= uVar2 || ((uVar6 <= uVar5 && (uVar2 < uVar6)))))) &&
       ((uVar6 <= uVar5 || (uVar3 <= uVar6)))) {
      iVar1 = *(int *)this;
      *(undefined4 *)(iVar1 + uVar5 * 0x10) = *(undefined4 *)(iVar1 + iVar4);
      *(undefined4 *)(iVar1 + 4 + uVar5 * 0x10) = *(undefined4 *)(iVar1 + 4 + iVar4);
      iVar1 = *(int *)this;
      *(undefined4 *)(iVar1 + 8 + uVar5 * 0x10) = *(undefined4 *)(iVar1 + 8 + iVar4);
      *(undefined4 *)(iVar1 + 0xc + uVar5 * 0x10) = *(undefined4 *)(iVar1 + 0xc + iVar4);
      *(undefined4 *)(iVar4 + *(int *)this) = 0xffffffff;
      uVar5 = uVar2;
    }
    uVar6 = *(uint *)((int)this + 8);
    uVar2 = uVar2 + 1 & uVar6;
    iVar4 = uVar2 * 0x10;
    iVar1 = *(int *)(iVar4 + *(int *)this);
  }
  return 0;
}

/* ref: FUN_00e06b40 */
uint F_00e06b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe06b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  uint uVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  uint * puVar5;
  int local_8;
  
  uVar1 = *(uint *)((int)this + 8);
  if (-1 < (int)uVar1) {
    puVar2 = *(uint * PTR32 *)this;
    local_8 = uVar1 + 1;
    puVar5 = puVar2;
    do {
      uVar3 = *puVar5;
      if (uVar3 != 0xffffffff) {
        uVar4 = (uVar3 >> 4) * -0x61c8864f;
        while ((uVar4 = uVar4 & uVar1, puVar2[uVar4 * 4] != uVar3 ||
               (puVar2[uVar4 * 4 + 1] != puVar5[1]))) {
          uVar4 = uVar4 + 1;
        }
      }
      puVar5 = puVar5 + 4;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00e06ba0 */
uint F_00e06ba0(unsigned int gen_a0)
{
  GEN_ENTER(0xe06ba0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 8) + 1;
  if (0 < iVar1) {
    in_EAX = 0;
    do {
      *(undefined4 *)(in_EAX + *(int *)this) = 0xffffffff;
      in_EAX = in_EAX + 0x10;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) & 0x80000000;
  return in_EAX;
}

/* ref: FUN_00e06bd0 */
uint F_00e06bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe06bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00e06ba0(this);
  if ((*(uint *)((int)this + 4) & 0x80000000) == 0) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))
                      (param_1,*(undefined4 *)this,(*(int *)((int)this + 8) + 1) * 0x10);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0xffffffff;
  return uVar1;
}

/* ref: FUN_00e06c20 */
uint F_00e06c20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe06c20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  *(undefined4 *)this = param_1;
  *(uint *)((int)this + 4) = param_2 | 0x80000000;
  *(uint *)((int)this + 8) = param_3 - 1U;
  return param_3 - 1U;
}

/* ref: FUN_00e06c40 */
uint F_00e06c40(unsigned int gen_a0)
{
  GEN_ENTER(0xe06c40u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  
  iVar1 = 8;
  if (8 < param_1 * 2) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_1 * 2);
  }
  return iVar1 << 4;
}

/* ref: FUN_00e06c60 */
unsigned int F_00e06c60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe06c60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  uint uVar2;
  
  uVar2 = param_2 >> 4;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = 0x80000000;
  *(uint *)((int)this + 8) = uVar2 - 1;
  if (uVar2 != 0) {
    iVar1 = 0;
    do {
      *(undefined4 *)(iVar1 + *(int *)this) = 0xffffffff;
      iVar1 = iVar1 + 0x10;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00e06ca0 */
unsigned int F_00e06ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe06ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)this;
  *(undefined4 *)this = *param_1;
  uVar2 = *(undefined4 *)((int)this + 4);
  *(undefined4 *)((int)this + 4) = param_1[1];
  uVar3 = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)this + 8) = param_1[2];
  param_1[2] = uVar3;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return 0;
}

/* ref: FUN_00e06cd0 */
uint F_00e06cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe06cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00d919e0(param_1);
  }
  *(undefined * PTR32 *)this = param_1;
  return (uint)this;
}

/* ref: FUN_00e06d20 */
uint F_00e06d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe06d20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  int * piVar2;
  int iVar3;
  
  iVar3 = param_3;
  if (param_3 < 0) {
    iVar3 = *(int *)((int)this + 4);
  }
  if ((int)param_2 < iVar3) {
    piVar2 = (int *)(*(int *)this + param_2 * 8);
    uVar1 = param_2;
    do {
      if ((*piVar2 == *param_1) && (piVar2[1] == param_1[1])) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 2;
    } while ((int)uVar1 < iVar3);
  }
  return 0xffffffff;
}

/* ref: FUN_00e06d90 */
uint F_00e06d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe06d90u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_00e06df0 */
uint F_00e06df0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe06df0u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = *in_ecx;
  *param_2 = *(undefined8 *)(iVar1 + 8 + param_3 * 0x18);
  param_2[1] = *(undefined8 *)(iVar1 + param_3 * 0x18 + 0x10);
  return (uint)param_2;
}

/* ref: FUN_00e06e20 */
uint F_00e06e20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xe06e20u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined8 * puVar1;
  
  puVar1 = (undefined8 *)(*in_ecx + 8 + param_2 * 0x18);
  *puVar1 = CONCAT44(param_4,param_3);
  puVar1[1] = CONCAT44(param_6,param_5);
  return (uint)puVar1;
}

/* ref: FUN_00e06e50 */
unsigned int F_00e06e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe06e50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  
  iVar1 = param_1 + 1;
  if (iVar1 <= *(int *)((int)this + 8)) {
    piVar2 = (int *)(*(int *)this + iVar1 * 0x18);
    do {
      if (*piVar2 != -1) {
        return 0;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 6;
    } while (iVar1 <= *(int *)((int)this + 8));
  }
  return 0;
}

/* ref: FUN_00e06e80 */
uint F_00e06e80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe06e80u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  *(bool *)param_2 = param_3 <= *(int *)(in_ecx + 8);
  return param_2;
}

/* ref: FUN_00e06ea0 */
unsigned int F_00e06ea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xe06ea0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined8 * puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  if (*(int *)((int)this + 8) < *(int *)((int)this + 4) * 2) {
    F_00e074f0(this,param_1,*(int *)((int)this + 8) * 2 + 2);
  }
  iVar2 = *(int *)this;
  uVar4 = (param_2 >> 4) * -0x61c8864f & *(uint *)((int)this + 8);
  iVar5 = uVar4 * 0x18;
  iVar3 = 1;
  if (*(int *)(iVar2 + iVar5) != -1) {
    do {
      if ((*(uint *)(iVar2 + iVar5) == param_2) && (*(int *)(iVar2 + 4 + iVar5) == param_3)) {
        iVar3 = 0;
        goto LAB_00e06f1a;
      }
      uVar4 = uVar4 + 1 & *(uint *)((int)this + 8);
      iVar5 = uVar4 * 0x18;
    } while (*(int *)(iVar5 + iVar2) != -1);
    iVar3 = 1;
  }
LAB_00e06f1a: ;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + iVar3;
  iVar3 = uVar4 * 0x18;
  *(uint *)(iVar2 + iVar3) = param_2;
  *(int *)(iVar2 + 4 + iVar3) = param_3;
  puVar1 = (undefined8 *)(iVar3 + 8 + *(int *)this);
  *puVar1 = CONCAT44(param_5,param_4);
  puVar1[1] = CONCAT44(param_7,param_6);
  return 0;
}

/* ref: FUN_00e06f60 */
uint F_00e06f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe06f60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint * puVar5;
  
  uVar1 = *(uint *)((int)this + 8);
  if (0 < (int)uVar1) {
    iVar2 = *(int *)this;
    uVar4 = (param_1 >> 4) * -0x61c8864f & uVar1;
    iVar3 = *(int *)(iVar2 + uVar4 * 0x18);
    while (iVar3 != -1) {
      puVar5 = (uint *)(iVar2 + uVar4 * 0x18);
      if ((*puVar5 == param_1) && (puVar5[1] == param_2)) {
        return uVar4;
      }
      uVar4 = uVar4 + 1 & uVar1;
      iVar3 = *(int *)(iVar2 + uVar4 * 0x18);
    }
  }
  return uVar1 + 1;
}

/* ref: FUN_00e06fc0 */
uint F_00e06fc0(unsigned int gen_a0)
{
  GEN_ENTER(0xe06fc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 8) + 1;
  if (0 < iVar1) {
    in_EAX = 0;
    do {
      *(undefined4 *)(in_EAX + *(int *)this) = 0xffffffff;
      in_EAX = in_EAX + 0x18;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) & 0x80000000;
  return in_EAX;
}

/* ref: FUN_00e06ff0 */
uint F_00e06ff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe06ff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00e06fc0(this);
  if ((*(uint *)((int)this + 4) & 0x80000000) == 0) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))
                      (param_1,*(undefined4 *)this,(*(int *)((int)this + 8) * 3 + 3) * 8);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0xffffffff;
  return uVar1;
}

/* ref: FUN_00e07050 */
unsigned int F_00e07050(unsigned int gen_a0)
{
  GEN_ENTER(0xe07050u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00e07070 */
unsigned int F_00e07070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe07070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00d919e0(param_1);
  }
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined * PTR32 *)this = param_1;
  return 0;
}

/* ref: FUN_00e070c0 */
unsigned int F_00e070c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe070c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)this;
  if (this_00 != (undefined *)0x0) {
    if (this_00 != param_1) {
      F_00d91a80(this_00);
    }
    *(undefined * PTR32 *)this = param_1;
    return 0;
  }
  *(undefined * PTR32 *)this = param_1;
  return 0;
}

/* ref: FUN_00e07160 */
uint F_00e07160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe07160u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_00e07180 */
uint F_00e07180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe07180u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(*in_ecx + 8 + param_2 * 0xc);
}

/* ref: FUN_00e071a0 */
uint F_00e071a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe071a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (*(int *)((int)this + 8) < *(int *)((int)this + 4) * 2) {
    F_00e07420(this,param_1,*(int *)((int)this + 8) * 2 + 2);
  }
  iVar1 = *(int *)this;
  uVar3 = (param_2 >> 4) * -0x61c8864f & *(uint *)((int)this + 8);
  iVar4 = uVar3 * 0xc;
  uVar2 = 1;
  if (*(int *)(iVar1 + iVar4) != -1) {
    do {
      if ((*(uint *)(iVar1 + iVar4) == param_2) && (*(int *)(iVar1 + 4 + iVar4) == param_3)) {
        uVar2 = 0;
        goto LAB_00e07216;
      }
      uVar3 = uVar3 + 1 & *(uint *)((int)this + 8);
      iVar4 = uVar3 * 0xc;
    } while (*(int *)(iVar4 + iVar1) != -1);
    uVar2 = 1;
  }
LAB_00e07216: ;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + uVar2;
  iVar4 = uVar3 * 0xc;
  *(uint *)(iVar1 + iVar4) = param_2;
  *(int *)(iVar1 + 4 + iVar4) = param_3;
  *(undefined4 *)(iVar4 + 8 + *(int *)this) = param_4;
  return uVar2;
}

/* ref: FUN_00e07250 */
uint F_00e07250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe07250u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint * puVar5;
  
  uVar1 = *(uint *)((int)this + 8);
  if (0 < (int)uVar1) {
    iVar2 = *(int *)this;
    uVar4 = (param_1 >> 4) * -0x61c8864f & uVar1;
    iVar3 = *(int *)(iVar2 + uVar4 * 0xc);
    while (iVar3 != -1) {
      puVar5 = (uint *)(iVar2 + uVar4 * 0xc);
      if ((*puVar5 == param_1) && (puVar5[1] == param_2)) {
        return uVar4;
      }
      uVar4 = uVar4 + 1 & uVar1;
      iVar3 = *(int *)(iVar2 + uVar4 * 0xc);
    }
  }
  return uVar1 + 1;
}

/* ref: FUN_00e072b0 */
uint F_00e072b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe072b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint * puVar5;
  
  uVar1 = *(uint *)((int)this + 8);
  if (0 < (int)uVar1) {
    iVar2 = *(int *)this;
    uVar4 = (param_1 >> 4) * -0x61c8864f & uVar1;
    iVar3 = *(int *)(iVar2 + uVar4 * 0xc);
    while (iVar3 != -1) {
      puVar5 = (uint *)(iVar2 + uVar4 * 0xc);
      if ((*puVar5 == param_1) && (puVar5[1] == param_2)) {
        return *(uint *)(iVar2 + 8 + uVar4 * 0xc);
      }
      uVar4 = uVar4 + 1 & uVar1;
      iVar3 = *(int *)(iVar2 + uVar4 * 0xc);
    }
  }
  return param_3;
}

/* ref: FUN_00e07310 */
uint F_00e07310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe07310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  *(undefined4 *)(*(int *)this + param_1 * 0xc) = 0xffffffff;
  uVar7 = *(uint *)((int)this + 8);
  uVar4 = uVar7 + param_1 & uVar7;
  iVar1 = *(int *)(*(int *)this + uVar4 * 0xc);
  while (iVar1 != -1) {
    uVar4 = uVar4 + uVar7 & uVar7;
    iVar1 = *(int *)(*(int *)this + uVar4 * 0xc);
  }
  uVar5 = uVar4 + 1 & uVar7;
  uVar6 = param_1 + 1 & uVar7;
  uVar4 = uVar6 * 0xc;
  iVar1 = *(int *)(*(int *)this + uVar4);
  uVar3 = param_1;
  while (iVar1 != -1) {
    iVar1 = *(int *)this;
    uVar7 = (*(uint *)(iVar1 + uVar4) >> 4) * -0x61c8864f & uVar7;
    param_1 = uVar3;
    if ((((uVar6 < uVar5) || (uVar7 <= uVar3)) &&
        ((uVar3 <= uVar6 || ((uVar7 <= uVar3 && (uVar6 < uVar7)))))) &&
       ((uVar7 <= uVar3 || (uVar5 <= uVar7)))) {
      iVar2 = uVar3 * 0xc;
      *(undefined4 *)(iVar2 + iVar1) = *(undefined4 *)(iVar1 + uVar4);
      *(undefined4 *)(iVar2 + 4 + iVar1) = *(undefined4 *)(iVar1 + 4 + uVar4);
      *(undefined4 *)(iVar2 + 8 + *(int *)this) = *(undefined4 *)(*(int *)this + 8 + uVar4);
      *(undefined4 *)(uVar4 + *(int *)this) = 0xffffffff;
      param_1 = uVar6;
    }
    uVar7 = *(uint *)((int)this + 8);
    uVar6 = uVar6 + 1 & uVar7;
    uVar4 = uVar6 * 0xc;
    uVar3 = param_1;
    iVar1 = *(int *)(uVar4 + *(int *)this);
  }
  return uVar4;
}

/* ref: FUN_00e073f0 */
uint F_00e073f0(unsigned int gen_a0)
{
  GEN_ENTER(0xe073f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 8) + 1;
  if (0 < iVar1) {
    in_EAX = 0;
    do {
      *(undefined4 *)(in_EAX + *(int *)this) = 0xffffffff;
      in_EAX = in_EAX + 0xc;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) & 0x80000000;
  return in_EAX;
}

/* ref: FUN_00e07420 */
uint F_00e07420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe07420u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int * piVar8;
  
  iVar7 = param_2;
  if (param_2 < 9) {
    iVar7 = 8;
  }
  uVar1 = *(uint *)((int)this + 4);
  piVar2 = *(int * PTR32 *)this;
  iVar6 = *(int *)((int)this + 8) + 1;
  uVar3 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1,iVar7 * 0xc);
  if (uVar3 != 0) {
    *(uint *)this = uVar3;
    if (0 < iVar7) {
      iVar4 = 0;
      iVar5 = iVar7;
      do {
        *(undefined4 *)(iVar4 + *(int *)this) = 0xffffffff;
        iVar4 = iVar4 + 0xc;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    *(undefined4 *)((int)this + 4) = 0;
    *(int *)((int)this + 8) = iVar7 + -1;
    piVar8 = piVar2;
    param_2 = iVar6;
    if (0 < iVar6) {
      do {
        if (*piVar8 != -1) {
          F_00e071a0(this,param_1,*piVar8,piVar8[1],piVar8[2]);
        }
        iVar7 = param_2 + -1;
        piVar8 = piVar8 + 3;
        param_2 = iVar7;
      } while (iVar7 != 0);
    }
    if ((uVar1 & 0x80000000) == 0) {
      ((code *)*(gen_code32 *)(*param_1 + 8))(param_1,piVar2,iVar6 * 0xc);
    }
    return 0;
  }
  return 1;
}

/* ref: FUN_00e074f0 */
uint F_00e074f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe074f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int * piVar8;
  
  iVar7 = param_2;
  if (param_2 < 9) {
    iVar7 = 8;
  }
  uVar1 = *(uint *)((int)this + 4);
  piVar2 = *(int * PTR32 *)this;
  iVar6 = *(int *)((int)this + 8) + 1;
  uVar3 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1,iVar7 * 0x18);
  if (uVar3 != 0) {
    *(uint *)this = uVar3;
    if (0 < iVar7) {
      iVar4 = 0;
      iVar5 = iVar7;
      do {
        *(undefined4 *)(iVar4 + *(int *)this) = 0xffffffff;
        iVar4 = iVar4 + 0x18;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    *(undefined4 *)((int)this + 4) = 0;
    *(int *)((int)this + 8) = iVar7 + -1;
    piVar8 = piVar2;
    param_2 = iVar6;
    if (0 < iVar6) {
      do {
        if (*piVar8 != -1) {
          F_00e06ea0(this,param_1,*piVar8,piVar8[1],(int)*(undefined8 *)(piVar8 + 2),
                       (int)((ulonglong)*(undefined8 *)(piVar8 + 2) >> 0x20),
                       (int)*(undefined8 *)(piVar8 + 4),
                       (int)((ulonglong)*(undefined8 *)(piVar8 + 4) >> 0x20));
        }
        iVar7 = param_2 + -1;
        piVar8 = piVar8 + 6;
        param_2 = iVar7;
      } while (iVar7 != 0);
    }
    if ((uVar1 & 0x80000000) == 0) {
      ((code *)*(gen_code32 *)(*param_1 + 8))(param_1,piVar2,iVar6 * 0x18);
    }
    return 0;
  }
  return 1;
}

/* ref: FUN_00e075e0 */
uint F_00e075e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe075e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 << 4);
  return uVar1;
}

/* ref: FUN_00e07600 */
uint F_00e07600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe07600u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00e07620 */
uint F_00e07620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe07620u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00e07660 */
uint F_00e07660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe07660u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 0xc);
  return uVar1;
}

/* ref: FUN_00e07690 */
uint F_00e07690(unsigned int gen_a0)
{
  GEN_ENTER(0xe07690u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  *(short *)(uVar2 + 4) = (short)param_1;
  return uVar2;
}

/* ref: FUN_00e076c0 */
uint F_00e076c0(unsigned int gen_a0)
{
  GEN_ENTER(0xe076c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  *(short *)(uVar2 + 4) = (short)param_1;
  return uVar2;
}

/* ref: FUN_00e076f0 */
unsigned int F_00e076f0(unsigned int gen_a0)
{
  GEN_ENTER(0xe076f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 0x40);
  if (puVar3 < puVar3 + *(int *)((int)this + 0x44) * 2) {
    do {
      uVar1 = *puVar3;
      puVar2 = (undefined4 *)F_00d92c00((undefined *)puVar3[1],"hk.PostFinish");
      ((code *)*(gen_code32 *)*puVar2)(uVar1);
      puVar3 = puVar3 + 2;
    } while (puVar3 < ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x40) + *(int *)((int)this + 0x44) * 8))));
  }
  return 0;
}

/* ref: FUN_00e07770 */
uint F_00e07770(unsigned int gen_a0)
{
  GEN_ENTER(0xe07770u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  return uVar2;
}

/* ref: FUN_00e07790 */
unsigned int F_00e07790(unsigned int gen_a0)
{
  GEN_ENTER(0xe07790u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0xc);
  }
  return 0;
}

/* ref: FUN_00e077e0 */
uint F_00e077e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe077e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_00e068a0(this,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00e07810 */
uint F_00e07810(unsigned int gen_a0)
{
  GEN_ENTER(0xe07810u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  return uVar2;
}

/* ref: FUN_00e07830 */
unsigned int F_00e07830(unsigned int gen_a0)
{
  GEN_ENTER(0xe07830u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0xc);
  }
  return 0;
}

/* ref: FUN_00e07860 */
uint F_00e07860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe07860u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00e06940(this,param_2,param_3);
  *(bool *)param_1 = (int)uVar1 <= *(int *)((int)this + 8);
  return param_1;
}

/* ref: FUN_00e07890 */
uint F_00e07890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe07890u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_00e078b0 */
uint F_00e078b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe078b0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(*in_ecx + 8 + param_2 * 0xc);
}

/* ref: FUN_00e078e0 */
unsigned int F_00e078e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xe078e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  F_00e06ea0(this,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2,param_3,param_4,param_5,param_6);
  return 0;
}

/* ref: FUN_00e07950 */
uint F_00e07950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe07950u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
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

/* ref: FUN_00e079a0 */
uint F_00e079a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe079a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00e06c60(this,param_1,param_2);
  return (uint)this;
}

/* ref: FUN_00e079c0 */
uint F_00e079c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe079c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00e06940(this,param_1,param_2);
  if ((int)uVar1 <= *(int *)((int)this + 8)) {
    F_00e06a60(this,uVar1);
    return 0;
  }
  return 1;
}

/* ref: FUN_00e07a00 */
uint F_00e07a00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe07a00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int * piVar8;
  
  iVar7 = param_2;
  if (param_2 < 9) {
    iVar7 = 8;
  }
  uVar1 = *(uint *)((int)this + 4);
  piVar2 = *(int * PTR32 *)this;
  iVar6 = *(int *)((int)this + 8) + 1;
  uVar3 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1,iVar7 << 4);
  if (uVar3 != 0) {
    *(uint *)this = uVar3;
    if (0 < iVar7) {
      iVar4 = 0;
      iVar5 = iVar7;
      do {
        *(undefined4 *)(iVar4 + *(int *)this) = 0xffffffff;
        iVar4 = iVar4 + 0x10;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    *(undefined4 *)((int)this + 4) = 0;
    *(int *)((int)this + 8) = iVar7 + -1;
    piVar8 = piVar2;
    param_2 = iVar6;
    if (0 < iVar6) {
      do {
        if (*piVar8 != -1) {
          F_00e068a0(this,param_1,*piVar8,piVar8[1],piVar8[2],piVar8[3]);
        }
        iVar7 = param_2 + -1;
        piVar8 = piVar8 + 4;
        param_2 = iVar7;
      } while (iVar7 != 0);
    }
    if ((uVar1 & 0x80000000) == 0) {
      ((code *)*(gen_code32 *)(*param_1 + 8))(param_1,piVar2,iVar6 * 0x10);
    }
    return 0;
  }
  return 1;
}

/* ref: FUN_00e07ae0 */
uint F_00e07ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe07ae0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(int *)(in_ecx + 4) = *(int *)(in_ecx + 4) - param_2;
  return param_2;
}

/* ref: FUN_00e07af0 */
uint F_00e07af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe07af0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00e073f0(this);
  if ((*(uint *)((int)this + 4) & 0x80000000) == 0) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))
                      (param_1,*(undefined4 *)this,(*(int *)((int)this + 8) * 3 + 3) * 4);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0xffffffff;
  return uVar1;
}

/* ref: FUN_00e07b40 */
uint F_00e07b40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe07b40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = 8;
  if (8 < param_2 * 2) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_2 * 2);
  }
  uVar2 = F_00e07420(this,param_1,iVar1);
  return uVar2;
}

/* ref: FUN_00e07b70 */
uint F_00e07b70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe07b70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00e072b0((undefined *)((int)this + 0xc),param_1,param_2,0xffffffff);
  return uVar1;
}

/* ref: FUN_00e07b90 */
uint F_00e07b90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe07b90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = F_00e07250((undefined *)((int)this + 0xc),param_1,param_2);
  iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0xc) + 8 + uVar6 * 0xc)));
  uVar6 = F_00e07310((undefined *)((int)this + 0xc),uVar6);
  if (iVar1 != -1) {
    iVar2 = *(int *)this;
    iVar5 = iVar1 * 0xc;
    iVar3 = *(int *)(iVar5 + 8 + iVar2);
    iVar4 = iVar1;
    while (iVar3 != -1) {
      iVar4 = *(int *)(iVar2 + 8 + iVar5);
      iVar5 = iVar4 * 0xc;
      iVar3 = *(int *)(iVar2 + 8 + iVar5);
    }
    uVar6 = iVar4 * 3;
    *(undefined4 *)(iVar2 + 8 + iVar4 * 0xc) = *(undefined4 *)((int)this + 0x18);
    *(int *)((int)this + 0x18) = iVar1;
  }
  return uVar6;
}

/* ref: FUN_00e07c00 */
uint F_00e07c00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe07c00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = 8;
  if (8 < param_2 * 2) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_2 * 2);
  }
  uVar2 = F_00e074f0(this,param_1,iVar1);
  return uVar2;
}

/* ref: FUN_00e07c30 */
uint F_00e07c30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe07c30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00e071a0(this,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00e07c50 */
uint F_00e07c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe07c50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar1 << 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e07c90 */
uint F_00e07c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe07c90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e07cd0 */
unsigned int F_00e07cd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe07cd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined8 * param_3 = (undefined8 *)(uintptr_t)gen_a2;
  undefined8 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = *param_3;
        *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_3 + 1);
      }
      puVar1 = (undefined8 *)((int)puVar1 + 0xc);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00e07d10 */
uint F_00e07d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe07d10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e07d70 */
unsigned int F_00e07d70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe07d70u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  int * this_00;
  uint uVar1;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 in_ecx;
  int iVar4;
  byte bVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  uint uVar8;
  char * pcVar9;
  uint local_8;
  
  puVar6 = (*(undefined4 * PTR32 *)&gen_args[1]);
  this_00 = ((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc)));
  local_8 = 0;
  uVar8 = F_00e07b70(this_00,*(*(undefined4 * PTR32 *)&gen_args[1]),(*(undefined4 * PTR32 *)&gen_args[1])[1]);
  puVar7 = (*(undefined4 * PTR32 *)&gen_args[2]);
  uVar1 = local_8;
  while (uVar8 != 0xffffffff) {
    iVar4 = uVar8 * 0xc;
    puVar2 = *(undefined4 * PTR32 *)(*this_00 + iVar4);
    uVar3 = *(undefined4 *)(*this_00 + 4 + iVar4);
    *puVar2 = *(*(undefined4 * PTR32 *)&gen_args[2]);
    if ((char)uVar3 != '\0') {
      puVar2[1] = (*(undefined4 * PTR32 *)&gen_args[2])[1];
    }
    uVar1 = uVar1 + ((char)((uint)uVar3 >> 8) != '\0');
    uVar8 = *(uint *)(*this_00 + 8 + iVar4);
  }
  F_00e07b90(this_00,*puVar6,puVar6[1]);
  uVar3 = *puVar7;
  in_ecx = puVar7[1];
  pcVar9 = (char *)F_00d929e0(in_ecx,(int)&(*(undefined4 * PTR32 *)&gen_args[2]) + 3);
  if ((*pcVar9 == '\0') ||
     (pcVar9 = (char *)F_00d92650(&REFG(undefined, 0x15da420),(int)&(*(undefined4 * PTR32 *)&gen_args[1]) + 3,in_ecx), *pcVar9 == '\0')) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  F_00e06ea0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))),&REFG(undefined * PTR32, 0x13516ac),*puVar6,puVar6[1],uVar3,in_ecx,
               -(uint)bVar5 & uVar1,(*(undefined4 *)&gen_args[3]));
  return 0;
}

/* ref: FUN_00e07e80 */
uint F_00e07e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe07e80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar3,0x10);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00e07ec0 */
uint F_00e07ec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe07ec0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00e079a0(this,param_1,param_2);
  return (uint)this;
}

/* ref: FUN_00e07ef0 */
uint F_00e07ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe07ef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00e07c00(this,&REFG(undefined * PTR32, 0x13516ac),param_1);
  return uVar1;
}

/* ref: FUN_00e07f10 */
uint F_00e07f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe07f10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00e07b40(this,&REFG(undefined * PTR32, 0x13516ac),param_1);
  return uVar1;
}

/* ref: FUN_00e07f30 */
uint F_00e07f30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xe07f30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint * param_6 = (uint *)(uintptr_t)gen_a6;
  uint uVar1;
  
  if (*(int *)((int)this + 8) < *(int *)((int)this + 4) * 2) {
    uVar1 = F_00e07a00(this,param_1,*(int *)((int)this + 8) * 2 + 2);
    *param_6 = uVar1;
    if (uVar1 != 0) {
      return 0;
    }
  }
  else {
    *param_6 = 0;
  }
  uVar1 = F_00e068a0(this,param_1,param_2,param_3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_00e07fa0 */
unsigned int F_00e07fa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xe07fa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int iVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 8) < *(int *)((int)this + 4) * 2) {
    F_00e07a00(this,param_1,*(int *)((int)this + 8) * 2 + 2);
  }
  iVar1 = *(int *)this;
  uVar2 = (param_2 >> 4) * -0x61c8864f;
  while ((uVar2 = uVar2 & *(uint *)((int)this + 8), *(uint *)(iVar1 + uVar2 * 0x10) != param_2 ||
         (*(int *)(iVar1 + 4 + uVar2 * 0x10) != param_3))) {
    if (*(int *)(iVar1 + uVar2 * 0x10) == -1) {
      *(uint *)(iVar1 + uVar2 * 0x10) = param_2;
      *(int *)(iVar1 + 4 + uVar2 * 0x10) = param_3;
      iVar1 = *(int *)this;
      *(undefined4 *)(iVar1 + 8 + uVar2 * 0x10) = param_4;
      *(undefined4 *)(iVar1 + 0xc + uVar2 * 0x10) = param_5;
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
      return 0;
    }
    uVar2 = uVar2 + 1;
  }
  return 0;
}

/* ref: FUN_00e08020 */
uint F_00e08020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe08020u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = 8;
  if (8 < param_2 * 2) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_2 * 2);
  }
  uVar2 = F_00e07a00(this,param_1,iVar1);
  return uVar2;
}

/* ref: FUN_00e08050 */
unsigned int F_00e08050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe08050u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a2;
  undefined8 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,0xc);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 0xc)));
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_2;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_2 + 1);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return 0;
}

/* ref: FUN_00e080a0 */
uint F_00e080a0(unsigned int gen_a0)
{
  GEN_ENTER(0xe080a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  uVar1 = F_00e073f0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x18) = 0xffffffff;
  return uVar1;
}

/* ref: FUN_00e080c0 */
uint F_00e080c0(unsigned int gen_a0)
{
  GEN_ENTER(0xe080c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 << 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e08100 */
uint F_00e08100(unsigned int gen_a0)
{
  GEN_ENTER(0xe08100u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e08140 */
uint F_00e08140(unsigned int gen_a0)
{
  GEN_ENTER(0xe08140u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e08180 */
unsigned int F_00e08180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe08180u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      if (iVar1 != 0) {
        *(undefined4 *)(iVar1 + 8) = 0xffffffff;
      }
      iVar1 = iVar1 + 0xc;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00e081a0 */
uint F_00e081a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe081a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 0x38) == (*(uint *)((int)this + 0x3c) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),(int *)((int)this + 0x34),4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x34) + *(int *)((int)this + 0x38) * 4)));
  *puVar1 = param_1;
  *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00e081e0 */
unsigned int F_00e081e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe081e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int * piVar6;
  
  iVar3 = *(int *)((int)this + 0x30);
  iVar4 = 0;
  if (-1 < iVar3) {
    piVar6 = *(int * PTR32 *)((int)this + 0x28);
    do {
      if (*piVar6 != -1) break;
      iVar4 = iVar4 + 1;
      piVar6 = piVar6 + 6;
    } while (iVar4 <= iVar3);
  }
  if (iVar4 <= iVar3) {
    do {
      uVar1 = *((undefined8 *)GEN_TOP((*(int *)((int)this + 0x28) + 8 + iVar4 * 0x18)));
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)((ulonglong)uVar1 >> 0x20);
      lVar2 = *((longlong *)GEN_TOP((*(int *)((int)this + 0x28) + iVar4 * 0x18 + 0x10)));
      uVar5 = F_00d92c00((*(undefined * PTR32 *)(gen_frame + 0x8)),"hk.PostFinish");
      (*(int *)(gen_frame + 0x4)) = (int)uVar1;
      if (uVar5 != 0) {
        if (*(uint *)((int)this + 0x44) == (*(uint *)((int)this + 0x48) & 0x3fffffff)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516ac),(int *)((int)this + 0x40),8);
        }
        piVar6 = ((int *)GEN_TOP((*(int *)((int)this + 0x40) + *(int *)((int)this + 0x44) * 8)));
        *piVar6 = (*(int *)(gen_frame + 0x4));
        piVar6[1] = (int)(*(undefined * PTR32 *)(gen_frame + 0x8));
        *(int *)((int)this + 0x44) = *(int *)((int)this + 0x44) + 1;
      }
      (*(short *)(gen_frame + 0xc)) = (short)lVar2;
      if (0 < (*(short *)(gen_frame + 0xc))) {
        if (lVar2 < 0) {
          uVar5 = F_00d929c0((*(undefined * PTR32 *)(gen_frame + 0x8)));
          *(short *)((*(int *)(gen_frame + 0x4)) + 4) = (short)uVar5;
        }
        else {
          (*(undefined2 *)(gen_frame + 0x10)) = (undefined2)((ulonglong)lVar2 >> 0x20);
          *(undefined2 *)((*(int *)(gen_frame + 0x4)) + 4) = (*(undefined2 *)(gen_frame + 0x10));
        }
        *(short *)((*(int *)(gen_frame + 0x4)) + 6) = (*(short *)(gen_frame + 0xc));
      }
      iVar3 = *param_1;
      uVar5 = F_00d92610((*(undefined * PTR32 *)(gen_frame + 0x8)));
      ((code *)*(gen_code32 *)(iVar3 + 0x10))(param_1,(*(int *)(gen_frame + 0x4)),uVar5);
      F_00d929e0((*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined1 *)(gen_frame + 0x1b)));
      iVar3 = *(int *)((int)this + 0x30);
      iVar4 = iVar4 + 1;
      if (iVar4 <= iVar3) {
        piVar6 = ((int *)GEN_TOP((*(int *)((int)this + 0x28) + iVar4 * 0x18)));
        do {
          if (*piVar6 != -1) break;
          iVar4 = iVar4 + 1;
          piVar6 = piVar6 + 6;
        } while (iVar4 <= iVar3);
      }
    } while (iVar4 <= iVar3);
  }
  return 0;
}

/* ref: FUN_00e08320 */
uint F_00e08320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe08320u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  F_00e080a0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 4) = 0;
  F_00e06fc0((undefined *)((int)this + 0x28));
  *param_1 = 0;
  param_1[1] = 0;
  return (uint)param_1;
}

/* ref: FUN_00e08360 */
uint F_00e08360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xe08360u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint uVar1;
  
  uVar1 = F_00e07f30(this,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2,param_3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_00e08390 */
unsigned int F_00e08390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe08390u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00e07fa0(this,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2,param_3,param_4);
  return 0;
}

/* ref: FUN_00e083c0 */
uint F_00e083c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe083c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00e08020(this,&REFG(undefined * PTR32, 0x13516ac),param_1);
  return uVar1;
}

/* ref: FUN_00e083e0 */
uint F_00e083e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe083e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbd8b0(this,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e08400 */
unsigned int F_00e08400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe08400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a1;
  undefined8 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,0xc);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 0xc)));
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_1;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 1);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return 0;
}

/* ref: FUN_00e08450 */
uint F_00e08450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe08450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0xffffffff;
  if (param_1 != 0) {
    F_00e07c00(this,&REFG(undefined * PTR32, 0x13516ac),param_1);
  }
  return (uint)this;
}

/* ref: FUN_00e08490 */
uint F_00e08490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe08490u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0xffffffff;
  if (param_1 != 0) {
    F_00e07b40(this,&REFG(undefined * PTR32, 0x13516ac),param_1);
  }
  return (uint)this;
}

/* ref: FUN_00e084d0 */
uint F_00e084d0(unsigned int gen_a0)
{
  GEN_ENTER(0xe084d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 << 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e08510 */
uint F_00e08510(unsigned int gen_a0)
{
  GEN_ENTER(0xe08510u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e08550 */
uint F_00e08550(unsigned int gen_a0)
{
  GEN_ENTER(0xe08550u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e08590 */
uint F_00e08590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe08590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,0xc);
  }
  iVar1 = *(int *)this + *(int *)((int)this + 4) * 0xc;
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 8) = 0xffffffff;
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return *(int *)this + iVar1 * 0xc;
}

/* ref: FUN_00e08630 */
unsigned int F_00e08630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe08630u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined8 * puVar1;
  
  if (*(uint *)((int)this + 0x44) == (*(uint *)((int)this + 0x48) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),(int *)((int)this + 0x40),0xc);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*(int *)((int)this + 0x40) + *(int *)((int)this + 0x44) * 0xc)));
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = CONCAT44(param_2,param_1);
    *(undefined4 *)(puVar1 + 1) = param_3;
  }
  *(int *)((int)this + 0x44) = *(int *)((int)this + 0x44) + 1;
  return 0;
}

/* ref: FUN_00e08690 */
uint F_00e08690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe08690u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbd8b0((undefined *)((int)this + 0x10),&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e086b0 */
unsigned int F_00e086b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe086b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  int iVar6;
  undefined4 local_18;
  undefined * pvStack_14;
  
  iVar3 = *(int *)((int)this + 0x30);
  iVar6 = 0;
  if (-1 < iVar3) {
    piVar5 = *(int * PTR32 *)((int)this + 0x28);
    do {
      if (*piVar5 != -1) break;
      iVar6 = iVar6 + 1;
      piVar5 = piVar5 + 6;
    } while (iVar6 <= iVar3);
  }
  if (iVar6 <= iVar3) {
    do {
      uVar2 = *((undefined8 *)GEN_TOP((*(int *)((int)this + 0x28) + 8 + iVar6 * 0x18)));
      pvStack_14 = (undefined *)((ulonglong)uVar2 >> 0x20);
      uVar4 = F_00d92610(pvStack_14);
      local_18 = (undefined4)uVar2;
      F_00dbd8b0((undefined *)(param_1 + 0x10),&REFG(undefined * PTR32, 0x13516ac),local_18,uVar4);
      uVar4 = F_00d92c00(pvStack_14,"hk.PostFinish");
      if (uVar4 != 0) {
        if (*(uint *)(param_1 + 0x68) == (*(uint *)(param_1 + 0x6c) & 0x3fffffff)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516ac),(int *)(param_1 + 100),8);
        }
        puVar1 = ((undefined4 *)GEN_TOP((*(int *)(param_1 + 100) + *(int *)(param_1 + 0x68) * 8)));
        *puVar1 = local_18;
        puVar1[1] = pvStack_14;
        *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
      }
      iVar3 = *(int *)((int)this + 0x30);
      iVar6 = iVar6 + 1;
      if (iVar6 <= iVar3) {
        piVar5 = ((int *)GEN_TOP((*(int *)((int)this + 0x28) + iVar6 * 0x18)));
        do {
          if (*piVar5 != -1) break;
          iVar6 = iVar6 + 1;
          piVar5 = piVar5 + 6;
        } while (iVar6 <= iVar3);
      }
    } while (iVar6 <= iVar3);
  }
  return 0;
}

/* ref: FUN_00e087b0 */
uint F_00e087b0(unsigned int gen_a0)
{
  GEN_ENTER(0xe087b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00e07af0((undefined *)((int)this + 0xc),&REFG(undefined * PTR32, 0x13516ac));
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e08800 */
uint F_00e08800(unsigned int gen_a0)
{
  GEN_ENTER(0xe08800u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x10) = 0;
  if (-1 < *(int *)((int)this + 0x14)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)((int)this + 0xc),*(int *)((int)this + 0x14) * 8
              );
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 << 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e08880 */
uint F_00e08880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe08880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0xffffffff;
  if (param_1 != 0) {
    F_00e08020(this,&REFG(undefined * PTR32, 0x13516ac),param_1);
  }
  return (uint)this;
}

/* ref: FUN_00e088e0 */
uint F_00e088e0(unsigned int gen_a0)
{
  GEN_ENTER(0xe088e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,0xc);
  }
  iVar1 = *(int *)this + *(int *)((int)this + 4) * 0xc;
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 8) = 0xffffffff;
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return *(int *)this + iVar1 * 0xc;
}

/* ref: FUN_00e08930 */
uint F_00e08930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe08930u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0xffffffff;
  *(undefined4 *)((int)this + 0x24) = 0xffffffff;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0xffffffff;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0x80000000;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0x80000000;
  if (param_1 != (undefined *)0x0) {
    F_00d919e0(param_1);
  }
  *(undefined * PTR32 *)((int)this + 0x4c) = param_1;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = param_2;
  *(undefined4 *)((int)this + 0x58) = param_3;
  return (uint)this;
}

/* ref: FUN_00e089b0 */
uint F_00e089b0(unsigned int gen_a0)
{
  GEN_ENTER(0xe089b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x50) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 0x50));
  }
  *(undefined4 *)((int)this + 0x50) = 0;
  if (*(undefined * PTR32 *)((int)this + 0x4c) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 0x4c));
  }
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  if ((*(uint *)((int)this + 0x48) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x40),
               *(uint *)((int)this + 0x48) * 8);
  }
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x48) = 0x80000000;
  *(undefined4 *)((int)this + 0x38) = 0;
  if ((*(uint *)((int)this + 0x3c) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x34),
               *(uint *)((int)this + 0x3c) * 8);
  }
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0x80000000;
  F_00e06ff0((undefined *)((int)this + 0x28),&REFG(undefined * PTR32, 0x13516ac));
  F_00e07af0((undefined *)((int)this + 0x18),&REFG(undefined * PTR32, 0x13516ac));
  *(undefined4 *)((int)this + 0x10) = 0;
  if ((*(uint *)((int)this + 0x14) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0xc),
               (*(uint *)((int)this + 0x14) & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 8) = 0x80000000;
  return uVar1;
}

/* ref: FUN_00e08ac0 */
uint F_00e08ac0(unsigned int gen_a0)
{
  GEN_ENTER(0xe08ac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 0x18);
  if (uVar2 != 0xffffffff) {
    *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(*(int *)this + 8 + uVar2 * 0xc);
    return uVar2;
  }
  uVar2 = *(uint *)((int)this + 4);
  if (uVar2 == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,0xc);
  }
  iVar1 = *(int *)this + *(int *)((int)this + 4) * 0xc;
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 8) = 0xffffffff;
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return uVar2;
}

/* ref: FUN_00e08b20 */
uint F_00e08b20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe08b20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_00e072b0((undefined *)((int)this + 0xc),param_1,param_2,0xffffffff);
  uVar3 = F_00e08ac0(this);
  puVar1 = (undefined4 *)(*(int *)this + uVar3 * 0xc);
  *puVar1 = *param_3;
  puVar1[1] = param_3[1];
  puVar1[2] = uVar2;
  uVar2 = F_00e071a0((undefined *)((int)this + 0xc),&REFG(undefined * PTR32, 0x13516ac),param_1,param_2,uVar3);
  return uVar2;
}

/* ref: FUN_00e08b80 */
uint F_00e08b80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe08b80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined8 * puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined4 * puVar5;
  int iVar6;
  int * piVar7;
  uint uVar8;
  int iVar9;
  
  if ((*(int *)((int)this + 0x54) != 0) && (*(char *)((int)param_1 + 5) != '\0')) {
    iVar9 = 0;
    if (0 < *(int *)((int)this + 0x38)) {
      piVar7 = *(int * PTR32 *)((int)this + 0x34);
      do {
        if ((*piVar7 == *param_2) && (piVar7[1] == param_2[1])) {
          if (iVar9 != -1) {
            return 1;
          }
          break;
        }
        iVar9 = iVar9 + 1;
        piVar7 = piVar7 + 2;
      } while (iVar9 < *(int *)((int)this + 0x38));
    }
  }
  piVar7 = (int *)((int)this + 0x28);
  uVar8 = F_00e06f60(piVar7,*param_2,param_2[1]);
  if ((int)uVar8 <= *(int *)((int)this + 0x30)) {
    iVar9 = uVar8 * 0x18;
    uVar2 = *(undefined8 *)(*piVar7 + 8 + iVar9);
    uVar3 = *(undefined8 *)(*piVar7 + 0x10 + iVar9);
    puVar5 = (undefined4 *)*param_1;
    iVar6 = param_1[1];
    (*(undefined4 *)(gen_frame + 0xc)) = (undefined4)uVar2;
    *puVar5 = (*(undefined4 *)(gen_frame + 0xc));
    if ((char)iVar6 != '\0') {
      (*(undefined4 *)(gen_frame + 0x10)) = (undefined4)((ulonglong)uVar2 >> 0x20);
      puVar5[1] = (*(undefined4 *)(gen_frame + 0x10));
    }
    cVar4 = *(char *)((int)param_1 + 5);
    puVar1 = (undefined8 *)(*piVar7 + 8 + iVar9);
    *puVar1 = uVar2;
    (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x14)) + 0)) = (int)uVar3;
    (*(undefined8 *)(gen_frame + 0x14)) = CONCAT44((int)((ulonglong)uVar3 >> 0x20),(int)(*(undefined8 *)(gen_frame + 0x14)) + (uint)(cVar4 != '\0'));
    puVar1[1] = (*(undefined8 *)(gen_frame + 0x14));
    return 0;
  }
  uVar8 = F_00e08b20((undefined *)((int)this + 0xc),*param_2,param_2[1],param_1);
  if ((uVar8 != 0) && (*(char *)((int)param_1 + 5) != '\0')) {
    if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
    }
    piVar7 = ((int *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 8)));
    if (piVar7 != (int *)0x0) {
      *piVar7 = *param_2;
      piVar7[1] = param_2[1];
    }
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  }
  return 0;
}

/* ref: FUN_00e08cc0 */
uint F_00e08cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe08cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  undefined8 * puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int * piVar10;
  int iVar11;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  if (0 < param_1[4]) {
    do {
      iVar8 = *(int *)((int)this + 0x50);
      puVar1 = (undefined4 *)(param_1[3] + (*(int *)(gen_frame + 0x8)) * 8);
      iVar11 = puVar1[1];
      if (iVar11 == -1) {
        uVar5 = *puVar1;
        piVar10 = (int *)(iVar8 + 0x34);
        if (*(uint *)(iVar8 + 0x38) == (*(uint *)(iVar8 + 0x3c) & 0x3fffffff)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar10,4);
        }
        *((undefined4 *)GEN_TOP((*piVar10 + *(int *)(iVar8 + 0x38) * 4))) = uVar5;
      }
      else {
        uVar5 = *puVar1;
        piVar10 = (int *)(iVar8 + 0x40);
        if (*(uint *)(iVar8 + 0x44) == (*(uint *)(iVar8 + 0x48) & 0x3fffffff)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar10,0xc);
        }
        puVar2 = ((undefined8 *)GEN_TOP((*piVar10 + *(int *)(iVar8 + 0x44) * 0xc)));
        if (puVar2 != (undefined8 *)0x0) {
          *puVar2 = CONCAT44(iVar11,uVar5);
          *(undefined4 *)(puVar2 + 1) = 6;
        }
      }
      piVar10[1] = piVar10[1] + 1;
      iVar8 = (*(int *)(gen_frame + 0x8)) + 1;
      (*(int *)(gen_frame + 0x8)) = iVar8;
    } while (iVar8 < param_1[4]);
  }
  iVar8 = 0;
  if (0 < param_1[1]) {
    iVar11 = 0;
    do {
      iVar7 = (*(int *)(gen_frame + 0x8));
      iVar6 = *param_1;
      uVar3 = *(undefined1 *)(iVar6 + 0xc + iVar11);
      (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(iVar6 + 8 + iVar11);
      uVar4 = *(undefined1 *)(iVar6 + iVar11 + 0xd);
      (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x8)) + 0)) = uVar3;
      (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x8)) + 2)) = SUB42(iVar7,2);
      (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x8)) + 1)) = uVar4;
      (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x8)) + 0)) = CONCAT11(uVar4,uVar3);
      uVar9 = F_00e08b80(this,&(*(undefined4 *)(gen_frame + 0x4)),iVar6 + iVar11);
      if (uVar9 == 1) {
        return 1;
      }
      iVar8 = iVar8 + 1;
      iVar11 = iVar11 + 0x10;
    } while (iVar8 < param_1[1]);
  }
  return 0;
}

/* ref: FUN_00e08de0 */
uint F_00e08de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe08de0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int iVar1;
  undefined4 * puVar2;
  int iVar3;
  int * piVar4;
  int * piVar5;
  uint uVar6;
  undefined4 uVar7;
  
  piVar5 = (*(int * PTR32 *)&gen_args[2]);
  piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[2]))) + 8))))(((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[2]))))));
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 4))(piVar4)));
  (*(int * PTR32 *)(gen_frame + 0x48)) = piVar4;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x80000000;
  (*(undefined4 *)(gen_frame + 0x14)) = 0x80000000;
  (*(undefined4 *)(gen_frame + 0x28)) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c)));
  (*(undefined4 *)(gen_frame + 0x2c)) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54)));
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  F_00d95690(&REFG(undefined * PTR32, 0x13516a4),&(*(undefined4 *)(gen_frame + 0x0)),0x20,0x10);
  (*(undefined4 * PTR32 *)(gen_frame + 0x40)) = &(*(undefined4 *)(gen_frame + 0x38));
  piVar5 = (int *)*piVar5;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x44)) + 0)) = 0x101;
  (*(int *)(gen_frame + 0x44)) = CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x44)) + 2)),0x101);
  (*(int *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  if (piVar5 == (int *)0x0) {
    piVar5 = &(*(int *)(gen_frame + 0x30));
  }
  else {
    piVar5 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar5 + 4))(piVar5,((undefined1 *)(gen_frame + 0x18)))));
  }
  (*(int *)(gen_frame + 0x20)) = *piVar5;
  (*(int *)(gen_frame + 0x24)) = piVar5[1];
  F_00e08b80((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)(gen_frame + 0x40)),&(*(int *)(gen_frame + 0x20)));
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  do {
    if (iVar1 == 0) {
      *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(undefined4 *)(gen_frame + 0x38));
      (*(undefined4 * PTR32 *)&gen_args[1])[1] = (*(undefined4 *)(gen_frame + 0x3c));
LAB_00e08fba: ;
      F_00e08800(&(*(undefined4 *)(gen_frame + 0x0)));
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + -8 + iVar1 * 8)));
    (*(undefined4 * PTR32 *)(gen_frame + 0x40)) = puVar2;
    (*(int *)(gen_frame + 0x44)) = *((int *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + -4 + iVar1 * 8)));
    if (puVar2 != (undefined4 *)0x0) {
      if (*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))) == (*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))) & 0x3fffffff)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))),8);
      }
      piVar5 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))) + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))) * 8)));
      if (piVar5 != (int *)0x0) {
        *piVar5 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x40));
        piVar5[1] = (*(int *)(gen_frame + 0x44));
      }
      *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))) + 1;
      iVar1 = *(int *)(*(undefined * PTR32 *)&gen_args[0]);
      iVar3 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
      *(undefined4 *)(iVar1 + -8 + iVar3 * 8) = 0;
      *(undefined4 *)(iVar1 + -4 + iVar3 * 8) = 0;
      ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x48)) + 0x28))((*(int * PTR32 *)(gen_frame + 0x48)),&(*(int * PTR32 *)&gen_args[2]),&(*(undefined4 * PTR32 *)(gen_frame + 0x40)));
      F_00e20280(&(*(undefined4 *)(gen_frame + 0x28)),&(*(int *)(gen_frame + 0x30)),&(*(int * PTR32 *)&gen_args[2]),&(*(undefined4 *)(gen_frame + 0x0)));
      if ((*(int *)(gen_frame + 0x30)) != 0) {
        uVar7 = 0xffffffff;
        if (*(int *)((*(int *)(gen_frame + 0xc)) + -8 + (*(int *)(gen_frame + 0x10)) * 8) == (*(int *)(gen_frame + 0x30))) {
          uVar7 = *(undefined4 *)((*(int *)(gen_frame + 0xc)) + -4 + (*(int *)(gen_frame + 0x10)) * 8);
        }
        F_00e07d70((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)(gen_frame + 0x40)),&(*(int *)(gen_frame + 0x30)),uVar7);
        F_00e22120(&(*(undefined4 *)(gen_frame + 0x28)),(*(int *)(gen_frame + 0x30)),&(*(int * PTR32 *)&gen_args[2]),&(*(undefined4 *)(gen_frame + 0x0)));
        uVar6 = F_00e08cc0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x0)));
        if (uVar6 == 0) {
          (*(int *)(gen_frame + 0x10)) = 0;
          (*(undefined4 *)(gen_frame + 0x4)) = 0;
          if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58))) != 0) {
            ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 0x70))))((*(int * PTR32 *)&gen_args[2]));
          }
          if ((*(int * PTR32 *)&gen_args[2]) != (int *)0x0) {
            *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 6))) + -1;
            piVar5 = (*(int * PTR32 *)&gen_args[2]) + 2;
            *piVar5 = *piVar5 + -1;
            if (*piVar5 == 0) {
              ((code *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[2]))))((*(int * PTR32 *)&gen_args[2]),1);
            }
          }
          goto LAB_00e08fa3;
        }
      }
      F_00e080a0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))));
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = 0;
      F_00e06fc0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))));
      *(*(undefined4 * PTR32 *)&gen_args[1]) = 0;
      (*(undefined4 * PTR32 *)&gen_args[1])[1] = 0;
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)0x0) {
        *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 6))) + -1;
        piVar5 = (*(int * PTR32 *)&gen_args[2]) + 2;
        *piVar5 = *piVar5 + -1;
        if (*piVar5 == 0) {
          ((code *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[2]))))((*(int * PTR32 *)&gen_args[2]),1);
          F_00e08800(&(*(undefined4 *)(gen_frame + 0x0)));
          return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
        }
      }
      goto LAB_00e08fba;
    }
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = iVar1 + -1;
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))) + -1;
LAB_00e08fa3: ;
    iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  } while( true );
}

/* ref: FUN_00e09020 */
uint F_00e09020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe09020u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  LPVOID pvVar2;
  undefined * pvVar3;
  undefined * pvVar4;
  
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 4))))
                             (*(int * PTR32 *)((int)pvVar2 + 0x2c),0x70)));
  *(undefined2 *)((int)pvVar3 + 4) = 0x70;
  pvVar4 = (undefined *)F_00e24780(pvVar3,0);
  pvVar3 = *(undefined * PTR32 *)((int)this + 0x50);
  if ((pvVar3 != (undefined *)0x0) && (pvVar3 != pvVar4)) {
    F_00d91a80(pvVar3);
  }
  *(undefined * PTR32 *)((int)this + 0x50) = pvVar4;
  F_00e08de0(this,((int *)(gen_frame + 0x4)),param_1);
  if (((int *)(gen_frame + 0x4))[0] == 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x50) + 0x30))) = 0;
    if (*(undefined * PTR32 *)((int)this + 0x50) != (undefined *)0x0) {
      F_00d91a80(*(undefined * PTR32 *)((int)this + 0x50));
    }
    *(undefined4 *)((int)this + 0x50) = 0;
    return 0;
  }
  F_00e081e0(this,param_2);
  F_00e076f0(this);
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 4))))
                             (*(int * PTR32 *)((int)pvVar2 + 0x2c),0x18)));
  *(undefined2 *)((int)pvVar3 + 4) = 0x18;
  pvVar3 = (undefined *)F_00e24000(pvVar3,((int *)(gen_frame + 0x4)));
  F_00e23fa0(pvVar3,*(undefined4 *)((int)this + 0x4c));
  F_00e23fd0(pvVar3,param_2);
  iVar1 = *(int *)((int)this + 0x50);
  *(undefined4 *)(iVar1 + 0x30) = 0;
  *(undefined4 *)(iVar1 + 0x38) = 0;
  *(undefined4 *)(iVar1 + 0x44) = 0;
  if (*(undefined * PTR32 *)((int)this + 0x50) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 0x50));
  }
  *(undefined4 *)((int)this + 0x50) = 0;
  return (uint)pvVar3;
}

/* ref: FUN_00e09120 */
uint F_00e09120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe09120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 in_ecx;
  LPVOID pvVar1;
  undefined * pvVar2;
  undefined * pvVar3;
  uint uVar4;
  
  if (*param_1 == 0) {
    return 0;
  }
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))
                             (*(int * PTR32 *)((int)pvVar1 + 0x2c),0x70)));
  *(undefined2 *)((int)pvVar2 + 4) = 0x70;
  pvVar3 = (undefined *)F_00e24780(pvVar2,*(undefined4 *)((int)this + 0x4c));
  pvVar2 = *(undefined * PTR32 *)((int)this + 0x50);
  if ((pvVar2 != (undefined *)0x0) && (pvVar2 != pvVar3)) {
    F_00d91a80(pvVar2);
  }
  *(undefined * PTR32 *)((int)this + 0x50) = pvVar3;
  F_00e08de0(this,&(*(int *)(gen_frame + 0x4)),param_1);
  if (((*(int *)(gen_frame + 0x4)) != 0) && ((*(int *)(gen_frame + 0x8)) != 0)) {
    F_00e086b0(this,*(undefined4 *)((int)this + 0x50));
    in_ecx = *(undefined4 *)((int)this + 0x50);
    uVar4 = F_00d92610((*(int *)(gen_frame + 0x8)));
    F_00e242a0(in_ecx,(*(int *)(gen_frame + 0x4)),uVar4);
    pvVar2 = *(undefined * PTR32 *)((int)this + 0x50);
    F_00d919e0(pvVar2);
    if (*(undefined * PTR32 *)((int)this + 0x50) != (undefined *)0x0) {
      F_00d91a80(*(undefined * PTR32 *)((int)this + 0x50));
    }
    *(undefined4 *)((int)this + 0x50) = 0;
    return (uint)pvVar2;
  }
  if (*(undefined * PTR32 *)((int)this + 0x50) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 0x50));
  }
  *(undefined4 *)((int)this + 0x50) = 0;
  return 0;
}

/* ref: FUN_00e09200 */
byte F_00e09200(unsigned int gen_a0)
{
  GEN_ENTER(0xe09200u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_0105aec0(this,(int)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3,1,1);
  return (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3));
}

/* ref: FUN_00e09220 */
uint F_00e09220(unsigned int gen_a0)
{
  GEN_ENTER(0xe09220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_0105aec0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),4,1);
  return (uint)(*(undefined * PTR32 *)(gen_frame + 0x8));
}

/* ref: FUN_00e09240 */
float F_00e09240(unsigned int gen_a0)
{
  GEN_ENTER(0xe09240u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_0105aec0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),4,1);
  return ((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x8)))));
}

/* ref: FUN_00e09260 */
float F_00e09260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe09260u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  float fVar1;
  
  fVar1 = F_0105aec0(this,param_1,1,param_2);
  return fVar1;
}

/* ref: FUN_00e09280 */
float F_00e09280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe09280u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  float fVar1;
  
  fVar1 = F_0105aec0(this,param_1,4,param_2);
  return fVar1;
}

/* ref: FUN_00e092a0 */
uint F_00e092a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xe092a0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x74))))
                    (*(int * PTR32 *)this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00e092b0 */
uint F_00e092b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xe092b0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x8c))))
                    (*(int * PTR32 *)this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00e092e0 */
uint F_00e092e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xe092e0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x20))))
                    (*(int * PTR32 *)this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00e092f0 */
uint F_00e092f0(unsigned int gen_a0)
{
  GEN_ENTER(0xe092f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  ulonglong uVar2;
  byte bVar3;
  uint uVar4;
  
  F_0105aec0((undefined *)((int)this + 4),&(*(byte *)(gen_frame + 0xb)),1,1);
  bVar3 = (*(byte *)(gen_frame + 0xb)) & 1;
  uVar4 = (*(byte *)(gen_frame + 0xb)) >> 1 & 0xffffffbf;
  bVar1 = 6;
  while (((*(byte *)(gen_frame + 0xb)) & 0x80) != 0) {
    F_0105aec0((undefined *)((int)this + 4),&(*(byte *)(gen_frame + 0xb)),1,1);
    uVar2 = (ulonglong)bVar1;
    bVar1 = bVar1 + 7;
    uVar4 = uVar4 | (uint)(uVar2 < 0x40) * (((*(byte *)(gen_frame + 0xb)) & 0xffffff7f) << uVar2);
  }
  if (bVar3 != 0) {
    uVar4 = -uVar4;
  }
  return uVar4;
}

/* ref: FUN_00e093a0 */
float F_00e093a0(unsigned int gen_a0)
{
  GEN_ENTER(0xe093a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_0105aec0((undefined *)((int)this + 4),&(*(undefined * PTR32 *)(gen_frame + 0x8)),4,1);
  return ((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x8)))));
}

/* ref: FUN_00e093c0 */
uint F_00e093c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe093c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00dbd930(this,param_1);
  return uVar1;
}

/* ref: FUN_00e093d0 */
uint F_00e093d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe093d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00dbd9f0(this,param_1);
  return uVar1;
}

/* ref: FUN_00e093e0 */
uint F_00e093e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe093e0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = in_ecx[3] != *in_ecx;
  return param_2;
}

/* ref: FUN_00e09400 */
uint F_00e09400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe09400u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = in_ecx[3] != *in_ecx;
  return param_2;
}

/* ref: FUN_00e09420 */
uint F_00e09420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe09420u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = in_ecx[3] != *in_ecx;
  return param_2;
}

/* ref: FUN_00e09440 */
uint F_00e09440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe09440u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_00e09480 */
uint F_00e09480(unsigned int gen_a0)
{
  GEN_ENTER(0xe09480u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  
  F_0105aec0((undefined *)((int)this + 4),&(*(byte *)(gen_frame + 0xb)),1,1);
  bVar2 = (*(byte *)(gen_frame + 0xb)) & 1;
  uVar3 = (*(byte *)(gen_frame + 0xb)) >> 1 & 0x7fffffbf;
  bVar4 = 6;
  while ((char)(*(byte *)(gen_frame + 0xb)) < '\0') {
    F_0105aec0((undefined *)((int)this + 4),&(*(byte *)(gen_frame + 0xb)),1,1);
    bVar1 = bVar4 & 0x1f;
    bVar4 = bVar4 + 7;
    uVar3 = uVar3 | ((*(byte *)(gen_frame + 0xb)) & 0xffffff7f) << bVar1;
  }
  if (bVar2 != 0) {
    uVar3 = -uVar3;
  }
  return uVar3;
}

/* ref: FUN_00e09500 */
uint F_00e09500(unsigned int gen_a0)
{
  GEN_ENTER(0xe09500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  
  F_0105aec0((undefined *)((int)this + 4),&(*(byte *)(gen_frame + 0xb)),1,1);
  bVar2 = (*(byte *)(gen_frame + 0xb)) & 1;
  uVar3 = (*(byte *)(gen_frame + 0xb)) >> 1 & 0x7fffffbf;
  bVar4 = 6;
  while ((char)(*(byte *)(gen_frame + 0xb)) < '\0') {
    F_0105aec0((undefined *)((int)this + 4),&(*(byte *)(gen_frame + 0xb)),1,1);
    bVar1 = bVar4 & 0x1f;
    bVar4 = bVar4 + 7;
    uVar3 = uVar3 | ((*(byte *)(gen_frame + 0xb)) & 0xffffff7f) << bVar1;
  }
  if (bVar2 != 0) {
    uVar3 = -uVar3;
  }
  return uVar3;
}

/* ref: FUN_00e095b0 */
uint F_00e095b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe095b0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00e095c0 */
uint F_00e095c0(unsigned int gen_a0)
{
  GEN_ENTER(0xe095c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  
  F_0105aec0((undefined *)((int)this + 4),&(*(byte *)(gen_frame + 0xb)),1,1);
  bVar2 = (*(byte *)(gen_frame + 0xb)) & 1;
  uVar3 = (*(byte *)(gen_frame + 0xb)) >> 1 & 0x7fffffbf;
  bVar4 = 6;
  while ((char)(*(byte *)(gen_frame + 0xb)) < '\0') {
    F_0105aec0((undefined *)((int)this + 4),&(*(byte *)(gen_frame + 0xb)),1,1);
    bVar1 = bVar4 & 0x1f;
    bVar4 = bVar4 + 7;
    uVar3 = uVar3 | ((*(byte *)(gen_frame + 0xb)) & 0xffffff7f) << bVar1;
  }
  if (bVar2 != 0) {
    uVar3 = -uVar3;
  }
  return uVar3;
}

/* ref: FUN_00e09640 */
unsigned int F_00e09640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe09640u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *(undefined4 *)(param_1 + iVar1 * 4) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return 0;
}

/* ref: FUN_00e09670 */
uint F_00e09670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe09670u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
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

/* ref: FUN_00e096b0 */
unsigned int F_00e096b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe096b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  if (0 < param_2) {
    puVar1 = param_1;
    iVar2 = param_2;
    do {
      *puVar1 = *((undefined4 *)GEN_TOP(((param_3 - (int)param_1) + (int)puVar1)));
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00e09710 */
uint F_00e09710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe09710u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00e09730 */
uint F_00e09730(unsigned int gen_a0)
{
  GEN_ENTER(0xe09730u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  return uVar2;
}

/* ref: FUN_00e09750 */
unsigned int F_00e09750(unsigned int gen_a0)
{
  GEN_ENTER(0xe09750u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0x18);
  }
  return 0;
}

