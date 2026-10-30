#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_0045fdf0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0045fdf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x45fdf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x10917c4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[40])REFP(0x109171c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1ac))) = (*(undefined * PTR32 (*)[2])REFP(0x109170c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1b0))) = (*(undefined * PTR32 (*)[2])REFP(0x1091700));
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x484))) GEN_EDX_FWD);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x430))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x3dc))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x388))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x334))) GEN_EDX_ARG);
  F_00492c50(((undefined *)GEN_TOP(((int)this + 0x31c))) GEN_EDX_ARG);
  F_00429760(*((undefined4 *)GEN_TOP(((int)this + 0x31c))),8,0x2c4);
  *((undefined4 *)GEN_TOP(((int)this + 0x31c))) = 0;
  F_00492c50(((undefined *)GEN_TOP(((int)this + 0x304))) GEN_EDX_ARG);
  F_00429760(*((undefined4 *)GEN_TOP(((int)this + 0x304))),8,0x2c4);
  *((undefined4 *)GEN_TOP(((int)this + 0x304))) = 0;
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x2b0))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x25c))) GEN_EDX_ARG);
  F_00a29b20(((undefined *)GEN_TOP(((int)this + 0x1b8))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1b0))) = (*(undefined * PTR32 (*)[2])REFP(0x1090598));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1ac))) = (*(undefined * PTR32 (*)[2])REFP(0x10904f8));
  uVar1 = F_00a29dc0(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0045fee0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0045fee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x45fee0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined2 * _Dst;
  int iVar3;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[2])REFP(0x10909b4))
  ;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1091810));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[2])REFP(0x1091804));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x3c))) = 1;
  F_0042b630((int)this + 0x40 GEN_EDX_FWD);
  F_0042b630((int)this + 0x94 GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 0xe8))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0xec))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xf0))) = 0x15;
  puVar2 = ((undefined4 *)GEN_TOP(((int)this + 0xf4)));
  *puVar2 = 0;
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(8,0,0x2c4)));
  *puVar2 = puVar1;
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  *((undefined4 * PTR32 *)GEN_TOP(*puVar2)) = puVar2;
  *((undefined4 *)GEN_TOP(((int)this + 0xf8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xfc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x100))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x104))) = 0;
  F_0042b630((int)this + 0x10c GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 0x160))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x164))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x168))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x170))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x174))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x178))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x17c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x180))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x184))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x188))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 400))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x194))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x198))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x19c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1a0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1a4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1a8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1ac))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1b0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1b4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1b8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1bc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c0))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x1c4))) = 0;
  puVar2 = ((undefined4 *)GEN_TOP(((int)this + 0x1d8)));
  iVar3 = 0x14e;
  do {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2 = puVar2 + 6;
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  puVar2 = ((undefined4 *)GEN_TOP(((int)this + 0x2130)));
  iVar3 = 0x3ec;
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 2;
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  F_0042e430(((undefined *)GEN_TOP(((int)this + 0x40))) GEN_EDX_ARG,&REFG(undefined, 0x10902c8));
  F_0042e430(((undefined *)GEN_TOP(((int)this + 0x94))) GEN_EDX_ARG,&REFG(undefined, 0x10902d0));
  _Dst = ((undefined2 *)GEN_TOP(((int)this + 0x1c8)));
  *((undefined4 *)GEN_TOP(((int)this + 0x16a))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x16e))) = 0;
  F_00c48350(_Dst,0,0x1f68);
  iVar3 = 0x14f;
  do {
    *_Dst = 0xffff;
    _Dst = _Dst + 0xc;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  F_0044ed10(this GEN_EDX_ARG);
  *((undefined1 *)GEN_TOP(((int)this + 0x16a))) = 1;
  return (uint)this;
}

/* ref: FUN_004600d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004600d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4600d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  uint uVar2;
  undefined * this_00;
  ulonglong uVar3;
  int local_8;
  
  puVar1 = ((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1091810));
  *puVar1 = (*(undefined * PTR32 (*)[2])REFP(0x1091804));
  if (REFG(int, 0x137104c) != 0) {
    F_00414620(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x10))) GEN_EDX_FWD,puVar1);
  }
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x4098)));
  local_8 = 0x3ec;
  do {
    this_00 = ((undefined *)GEN_TOP(((int)this_00 - 8)));
    F_005a2670(this_00 GEN_EDX_ARG);
    local_8 = local_8 - 1;
  } while (-1 < local_8);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x10c))) GEN_EDX_ARG);
  F_00492c50(((undefined *)GEN_TOP(((int)this + 0xf4))) GEN_EDX_ARG);
  F_00429760(*((undefined4 *)GEN_TOP(((int)this + 0xf4))),8,0x2c4);
  *((undefined4 *)GEN_TOP(((int)this + 0xf4))) = 0;
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x94))) GEN_EDX_ARG);
  uVar3 = F_0042c880(((undefined *)GEN_TOP(((int)this + 0x40))) GEN_EDX_ARG);
  uVar2 = (uint)uVar3;
  *puVar1 = (*(undefined * PTR32 (*)[2])REFP(0x10909b4));
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) != ((undefined *)GEN_TOP(0x0))) {
    uVar2 = F_00414620(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,puVar1);
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: FUN_00460190 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00460190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x460190u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x109181c));
  F_00492d20(((undefined *)GEN_TOP(((int)this + 0x38))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x3c))),
               *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x3c))));
  F_00429760(*((undefined4 *)GEN_TOP(((int)this + 0x3c))),0x74,400);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x1090a64));
  uVar1 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x14))) != 0) {
    uVar1 = F_00406810(*((int *)GEN_TOP(((int)this + 0x14))));
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  }
  return uVar1;
}

/* ref: FUN_004601f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004601f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4601f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x1090a64));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x2c))) = 0;
  F_00c49908((int)this + 0x20,0xc,((char *)REFP(0x108eec4)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x109181c));
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = param_1;
  *((undefined1 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  uVar1 = F_004296a0(0x74,0,400);
  *((uint *)GEN_TOP(((int)this + 0x3c))) = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x3c))) + 4))) = *((int *)GEN_TOP(((int)this + 0x3c)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x3c))) + 8))) = *((int *)GEN_TOP(((int)this + 0x3c)));
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x3c))) + 0x70))) = 1;
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x3c))) + 0x71))) = 1;
  return (uint)this;
}

/* ref: FUN_00460270 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00460270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x460270u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_GS(0x68, 8, 4);
  undefined * this_00;
  int in_ecx;
  undefined * pvVar1;
  uint uVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x60)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x64));
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x304)));
  F_00492c50(this_00 GEN_EDX_FWD);
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = param_2;
  (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = &(*(undefined4 *)(gen_frame + 0x54));
  (*(char *)(gen_frame + 0x5c)) = '\0';
  F_00493bc0(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x54)));
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x58)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x5c)) != '\0')) && ((*(char *)(gen_frame + 0x5c)) == '\x01')) {
    pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x58))));
    *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
    }
  }
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = param_3;
  (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = &(*(undefined4 *)(gen_frame + 0x54));
  (*(char *)(gen_frame + 0x5c)) = '\0';
  F_00493bc0(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x54)));
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x58)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x5c)) != '\0')) && ((*(char *)(gen_frame + 0x5c)) == '\x01')) {
    pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x58))));
    *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
    }
  }
  in_ecx = (int)this + 0x334;
  F_0042aca0(in_ecx GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1,REFG(undefined4, 0x108cc50));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),this_00,in_ecx);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  if (uVar2 != 1) {
    return 0;
  }
  uVar2 = F_0042a990(in_ecx GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_004603b0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_004603b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2), GEN_P(undefined * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x4603b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_GS(0x68, 8, 4);
  undefined * this_00;
  int in_ecx;
  undefined * pvVar1;
  uint uVar2;
  undefined * puVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x60)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x64));
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x304)));
  F_00492c50(this_00 GEN_EDX_FWD);
  puVar3 = param_2;
  if (param_2 == ((undefined *)GEN_TOP(0x0))) {
    puVar3 = &REFG(undefined, 0x108d1e2);
  }
  uVar2 = F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,puVar3,REFG(undefined4, 0x108cc50));
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x0));
  (*(char *)(gen_frame + 0x5c)) = -1;
  F_00490f90(&(*(undefined4 *)(gen_frame + 0x54)) GEN_EDX_ARG,uVar2);
  F_00493b50(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x54)));
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x58)) != ((undefined4 *)GEN_TOP(0x0))) {
    if (((*(char *)(gen_frame + 0x5c)) != '\0') && ((*(char *)(gen_frame + 0x5c)) == '\x01')) {
      pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x58))));
      *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
        F_0042c880(pvVar1 GEN_EDX_ARG);
        F_00406ad0(pvVar1);
      }
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x0));
    (*(char *)(gen_frame + 0x5c)) = -1;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  puVar3 = param_3;
  if (param_3 == ((undefined *)GEN_TOP(0x0))) {
    puVar3 = &REFG(undefined, 0x108d1e3);
  }
  uVar2 = F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,puVar3,REFG(undefined4, 0x108cc50));
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x0));
  (*(char *)(gen_frame + 0x5c)) = -1;
  F_00490f90(&(*(undefined4 *)(gen_frame + 0x54)) GEN_EDX_ARG,uVar2);
  F_00493b50(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x54)));
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x58)) != ((undefined4 *)GEN_TOP(0x0))) {
    if (((*(char *)(gen_frame + 0x5c)) != '\0') && ((*(char *)(gen_frame + 0x5c)) == '\x01')) {
      pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x58))));
      *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
        F_0042c880(pvVar1 GEN_EDX_ARG);
        F_00406ad0(pvVar1);
      }
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x0));
    (*(char *)(gen_frame + 0x5c)) = -1;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  in_ecx = (int)this + 0x334;
  F_0042aca0(in_ecx GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1,REFG(undefined4, 0x108cc50));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),this_00,in_ecx);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  if (uVar2 == 1) {
    uVar2 = F_0042a990(in_ecx GEN_EDX_ARG);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_00460540 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00460540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x460540u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x68, 8, 4);
  undefined * this_00;
  undefined * this_01;
  uint uVar1;
  undefined * puVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x60)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x64));
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x304)));
  F_00492c50(this_00 GEN_EDX_FWD);
  puVar2 = param_2;
  if (param_2 == ((undefined *)GEN_TOP(0x0))) {
    puVar2 = &REFG(undefined, 0x108d1f5);
  }
  uVar1 = F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,puVar2,REFG(undefined4, 0x108cc50));
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x0));
  (*(char *)(gen_frame + 0x5c)) = -1;
  F_00490f90(&(*(undefined4 *)(gen_frame + 0x54)) GEN_EDX_ARG,uVar1);
  F_00493b50(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x54)));
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x58)) != ((undefined4 *)GEN_TOP(0x0))) {
    if (((*(char *)(gen_frame + 0x5c)) != '\0') && ((*(char *)(gen_frame + 0x5c)) == '\x01')) {
      this_01 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x58))));
      *((int *)GEN_TOP(((int)this_01 + 0x54))) = *((int *)GEN_TOP(((int)this_01 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)this_01 + 0x54))) < 1) {
        F_0042c880(this_01 GEN_EDX_ARG);
        F_00406ad0(this_01);
      }
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x0));
    (*(char *)(gen_frame + 0x5c)) = -1;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar1 = F_0043bbc0(this GEN_EDX_ARG,param_1,1,this_00,(int)this + 0x334,(int)this + 0x388);
  return uVar1;
}

/* ref: FUN_00460620 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00460620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x460620u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_GS(0x68, 8, 4);
  undefined * this_00;
  undefined * pvVar1;
  uint uVar2;
  undefined * puVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x60)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x64));
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x304)));
  F_00492c50(this_00 GEN_EDX_FWD);
  puVar3 = param_2;
  if (param_2 == ((undefined *)GEN_TOP(0x0))) {
    puVar3 = &REFG(undefined, 0x108d1f6);
  }
  uVar2 = F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,puVar3,REFG(undefined4, 0x108cc50));
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x0));
  (*(char *)(gen_frame + 0x5c)) = -1;
  F_00490f90(&(*(undefined4 *)(gen_frame + 0x54)) GEN_EDX_ARG,uVar2);
  F_00493b50(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x54)));
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x58)) != ((undefined4 *)GEN_TOP(0x0))) {
    if (((*(char *)(gen_frame + 0x5c)) != '\0') && ((*(char *)(gen_frame + 0x5c)) == '\x01')) {
      pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x58))));
      *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
        F_0042c880(pvVar1 GEN_EDX_ARG);
        F_00406ad0(pvVar1);
      }
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x0));
    (*(char *)(gen_frame + 0x5c)) = -1;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = &(*(undefined4 *)(gen_frame + 0x54));
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = param_3;
  (*(char *)(gen_frame + 0x5c)) = '\0';
  F_00493bc0(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x54)));
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x58)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x5c)) != '\0')) && ((*(char *)(gen_frame + 0x5c)) == '\x01')) {
    pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x58))));
    *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
    }
  }
  uVar2 = F_0043bbc0(this GEN_EDX_ARG,param_1,1,this_00,(int)this + 0x334,(int)this + 0x388);
  return uVar2;
}

/* ref: FUN_00460740 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00460740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x460740u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_GS(0x68, 8, 4);
  undefined * this_00;
  undefined * pvVar1;
  uint uVar2;
  undefined * puVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x60)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x64));
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x304)));
  F_00492c50(this_00 GEN_EDX_FWD);
  puVar3 = param_2;
  if (param_2 == ((undefined *)GEN_TOP(0x0))) {
    puVar3 = &REFG(undefined, 0x108d1f7);
  }
  uVar2 = F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,puVar3,REFG(undefined4, 0x108cc50));
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x0));
  (*(char *)(gen_frame + 0x5c)) = -1;
  F_00490f90(&(*(undefined4 *)(gen_frame + 0x54)) GEN_EDX_ARG,uVar2);
  F_00493b50(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x54)));
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x58)) != ((undefined4 *)GEN_TOP(0x0))) {
    if (((*(char *)(gen_frame + 0x5c)) != '\0') && ((*(char *)(gen_frame + 0x5c)) == '\x01')) {
      pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x58))));
      *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
        F_0042c880(pvVar1 GEN_EDX_ARG);
        F_00406ad0(pvVar1);
      }
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x0));
    (*(char *)(gen_frame + 0x5c)) = -1;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = &(*(undefined4 *)(gen_frame + 0x54));
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = param_3;
  (*(char *)(gen_frame + 0x5c)) = '\0';
  F_00493bc0(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x54)));
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x58)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x5c)) != '\0')) && ((*(char *)(gen_frame + 0x5c)) == '\x01')) {
    pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x58))));
    *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
    }
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = &(*(undefined4 *)(gen_frame + 0x54));
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = param_4;
  (*(char *)(gen_frame + 0x5c)) = '\0';
  F_00493bc0(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x54)));
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x58)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x5c)) != '\0')) && ((*(char *)(gen_frame + 0x5c)) == '\x01')) {
    pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x58))));
    *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
    }
  }
  uVar2 = F_0043bbc0(this GEN_EDX_ARG,param_1,1,this_00,(int)this + 0x334,(int)this + 0x388);
  return uVar2;
}

/* ref: FUN_004608b0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_004608b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2), GEN_P(undefined * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x4608b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_GS(0x68, 8, 4);
  undefined * this_00;
  undefined * pvVar1;
  uint uVar2;
  undefined * puVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x60)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x64));
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x304)));
  F_00492c50(this_00 GEN_EDX_FWD);
  puVar3 = param_2;
  if (param_2 == ((undefined *)GEN_TOP(0x0))) {
    puVar3 = &REFG(undefined, 0x108d21d);
  }
  uVar2 = F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,puVar3,REFG(undefined4, 0x108cc50));
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x0));
  (*(char *)(gen_frame + 0x5c)) = -1;
  F_00490f90(&(*(undefined4 *)(gen_frame + 0x54)) GEN_EDX_ARG,uVar2);
  F_00493b50(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x54)));
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x58)) != ((undefined4 *)GEN_TOP(0x0))) {
    if (((*(char *)(gen_frame + 0x5c)) != '\0') && ((*(char *)(gen_frame + 0x5c)) == '\x01')) {
      pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x58))));
      *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
        F_0042c880(pvVar1 GEN_EDX_ARG);
        F_00406ad0(pvVar1);
      }
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x0));
    (*(char *)(gen_frame + 0x5c)) = -1;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  puVar3 = param_3;
  if (param_3 == ((undefined *)GEN_TOP(0x0))) {
    puVar3 = &REFG(undefined, 0x108d21e);
  }
  uVar2 = F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,puVar3,REFG(undefined4, 0x108cc50));
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x0));
  (*(char *)(gen_frame + 0x5c)) = -1;
  F_00490f90(&(*(undefined4 *)(gen_frame + 0x54)) GEN_EDX_ARG,uVar2);
  F_00493b50(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x54)));
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x58)) != ((undefined4 *)GEN_TOP(0x0))) {
    if (((*(char *)(gen_frame + 0x5c)) != '\0') && ((*(char *)(gen_frame + 0x5c)) == '\x01')) {
      pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x58))));
      *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
        F_0042c880(pvVar1 GEN_EDX_ARG);
        F_00406ad0(pvVar1);
      }
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x0));
    (*(char *)(gen_frame + 0x5c)) = -1;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar2 = F_0043bbc0(this GEN_EDX_ARG,param_1,1,this_00,(int)this + 0x334,(int)this + 0x388);
  return uVar2;
}

/* ref: FUN_00460a00 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00460a00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2), GEN_P(undefined * param_3, unsigned int gen_a3), GEN_P(undefined * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x460a00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined * param_4 = (undefined *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL_GS(0x68, 8, 4);
  undefined * this_00;
  undefined * pvVar1;
  uint uVar2;
  undefined * puVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x60)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x64));
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x304)));
  F_00492c50(this_00 GEN_EDX_FWD);
  puVar3 = param_2;
  if (param_2 == ((undefined *)GEN_TOP(0x0))) {
    puVar3 = &REFG(undefined, 0x108d21f);
  }
  uVar2 = F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,puVar3,REFG(undefined4, 0x108cc50));
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x0));
  (*(char *)(gen_frame + 0x5c)) = -1;
  F_00490f90(&(*(undefined4 *)(gen_frame + 0x54)) GEN_EDX_ARG,uVar2);
  F_00493b50(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x54)));
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x58)) != ((undefined4 *)GEN_TOP(0x0))) {
    if (((*(char *)(gen_frame + 0x5c)) != '\0') && ((*(char *)(gen_frame + 0x5c)) == '\x01')) {
      pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x58))));
      *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
        F_0042c880(pvVar1 GEN_EDX_ARG);
        F_00406ad0(pvVar1);
      }
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x0));
    (*(char *)(gen_frame + 0x5c)) = -1;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  puVar3 = param_3;
  if (param_3 == ((undefined *)GEN_TOP(0x0))) {
    puVar3 = &REFG(undefined, 0x108d276);
  }
  uVar2 = F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,puVar3,REFG(undefined4, 0x108cc50));
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x0));
  (*(char *)(gen_frame + 0x5c)) = -1;
  F_00490f90(&(*(undefined4 *)(gen_frame + 0x54)) GEN_EDX_ARG,uVar2);
  F_00493b50(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x54)));
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x58)) != ((undefined4 *)GEN_TOP(0x0))) {
    if (((*(char *)(gen_frame + 0x5c)) != '\0') && ((*(char *)(gen_frame + 0x5c)) == '\x01')) {
      pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x58))));
      *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
        F_0042c880(pvVar1 GEN_EDX_ARG);
        F_00406ad0(pvVar1);
      }
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x0));
    (*(char *)(gen_frame + 0x5c)) = -1;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  puVar3 = param_4;
  if (param_4 == ((undefined *)GEN_TOP(0x0))) {
    puVar3 = &REFG(undefined, 0x108d277);
  }
  uVar2 = F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,puVar3,REFG(undefined4, 0x108cc50));
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x0));
  (*(char *)(gen_frame + 0x5c)) = -1;
  F_00490f90(&(*(undefined4 *)(gen_frame + 0x54)) GEN_EDX_ARG,uVar2);
  F_00493b50(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x54)));
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x58)) != ((undefined4 *)GEN_TOP(0x0))) {
    if (((*(char *)(gen_frame + 0x5c)) != '\0') && ((*(char *)(gen_frame + 0x5c)) == '\x01')) {
      pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x58))));
      *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
        F_0042c880(pvVar1 GEN_EDX_ARG);
        F_00406ad0(pvVar1);
      }
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x0));
    (*(char *)(gen_frame + 0x5c)) = -1;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar2 = F_0043bbc0(this GEN_EDX_ARG,param_1,1,this_00,(int)this + 0x334,(int)this + 0x388);
  return uVar2;
}

/* ref: FUN_00460bd0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00460bd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x460bd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x14, 12, 4);
  undefined * this_00;
  undefined * this_01;
  uint uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10));
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x304)));
  F_00492c50(this_00 GEN_EDX_FWD);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = param_2;
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = &(*(undefined4 *)(gen_frame + 0x0));
  (*(char *)(gen_frame + 0x8)) = '\0';
  F_00493bc0(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x4)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x8)) != '\0')) && ((*(char *)(gen_frame + 0x8)) == '\x01')) {
    this_01 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x4))));
    *((int *)GEN_TOP(((int)this_01 + 0x54))) = *((int *)GEN_TOP(((int)this_01 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)this_01 + 0x54))) < 1) {
      F_0042c880(this_01 GEN_EDX_ARG);
      F_00406ad0(this_01);
    }
  }
  uVar1 = F_0043bbc0(this GEN_EDX_ARG,param_1,1,this_00,(int)this + 0x334,(int)this + 0x388);
  return uVar1;
}

/* ref: FUN_00460c80 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00460c80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x460c80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_GS(0x14, 12, 4);
  undefined * this_00;
  undefined * pvVar1;
  uint uVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10));
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x304)));
  F_00492c50(this_00 GEN_EDX_FWD);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = param_2;
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = &(*(undefined4 *)(gen_frame + 0x0));
  (*(char *)(gen_frame + 0x8)) = '\0';
  F_00493bc0(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x4)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x8)) != '\0')) && ((*(char *)(gen_frame + 0x8)) == '\x01')) {
    pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x4))));
    *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
    }
  }
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = param_3;
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = &(*(undefined4 *)(gen_frame + 0x0));
  (*(char *)(gen_frame + 0x8)) = '\0';
  F_00493bc0(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x4)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x8)) != '\0')) && ((*(char *)(gen_frame + 0x8)) == '\x01')) {
    pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x4))));
    *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
    }
  }
  uVar2 = F_0043bbc0(this GEN_EDX_ARG,param_1,1,this_00,(int)this + 0x334,(int)this + 0x388);
  return uVar2;
}

/* ref: FUN_00460d80 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00460d80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x460d80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_GS(0x14, 12, 4);
  undefined * this_00;
  undefined * pvVar1;
  uint uVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10));
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x304)));
  F_00492c50(this_00 GEN_EDX_FWD);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = param_2;
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = &(*(undefined4 *)(gen_frame + 0x0));
  (*(char *)(gen_frame + 0x8)) = '\0';
  F_00493bc0(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x4)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x8)) != '\0')) && ((*(char *)(gen_frame + 0x8)) == '\x01')) {
    pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x4))));
    *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
    }
  }
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = param_3;
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = &(*(undefined4 *)(gen_frame + 0x0));
  (*(char *)(gen_frame + 0x8)) = '\0';
  F_00493bc0(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x4)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x8)) != '\0')) && ((*(char *)(gen_frame + 0x8)) == '\x01')) {
    pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x4))));
    *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
    }
  }
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = param_4;
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = &(*(undefined4 *)(gen_frame + 0x0));
  (*(char *)(gen_frame + 0x8)) = '\0';
  F_00493bc0(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x4)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x8)) != '\0')) && ((*(char *)(gen_frame + 0x8)) == '\x01')) {
    pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x4))));
    *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
    }
  }
  uVar2 = F_0043bbc0(this GEN_EDX_ARG,param_1,1,this_00,(int)this + 0x334,(int)this + 0x388);
  return uVar2;
}

/* ref: FUN_00460ed0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00460ed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x460ed0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_FRAME_DECL_GS(0x14, 12, 4);
  undefined * this_00;
  undefined * pvVar1;
  uint uVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10));
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x304)));
  F_00492c50(this_00 GEN_EDX_FWD);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = param_2;
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = &(*(undefined4 *)(gen_frame + 0x0));
  (*(char *)(gen_frame + 0x8)) = '\0';
  F_00493bc0(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x4)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x8)) != '\0')) && ((*(char *)(gen_frame + 0x8)) == '\x01')) {
    pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x4))));
    *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
    }
  }
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = param_3;
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = &(*(undefined4 *)(gen_frame + 0x0));
  (*(char *)(gen_frame + 0x8)) = '\0';
  F_00493bc0(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x4)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x8)) != '\0')) && ((*(char *)(gen_frame + 0x8)) == '\x01')) {
    pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x4))));
    *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
    }
  }
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = param_4;
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = &(*(undefined4 *)(gen_frame + 0x0));
  (*(char *)(gen_frame + 0x8)) = '\0';
  F_00493bc0(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x4)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x8)) != '\0')) && ((*(char *)(gen_frame + 0x8)) == '\x01')) {
    pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x4))));
    *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
    }
  }
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = param_5;
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = &(*(undefined4 *)(gen_frame + 0x0));
  (*(char *)(gen_frame + 0x8)) = '\0';
  F_00493bc0(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x4)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x8)) != '\0')) && ((*(char *)(gen_frame + 0x8)) == '\x01')) {
    pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x4))));
    *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
    }
  }
  uVar2 = F_0043bbc0(this GEN_EDX_ARG,param_1,1,this_00,(int)this + 0x334,(int)this + 0x388);
  return uVar2;
}

/* ref: FUN_00461060 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00461060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x461060u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_GS(0x68, 8, 4);
  undefined * this_00;
  undefined * pvVar1;
  undefined * puVar2;
  uint uVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x60)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x64));
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x304)));
  F_00492c50(this_00 GEN_EDX_FWD);
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = param_2;
  (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = &(*(undefined4 *)(gen_frame + 0x54));
  (*(char *)(gen_frame + 0x5c)) = '\0';
  F_00493bc0(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x54)));
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x58)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x5c)) != '\0')) && ((*(char *)(gen_frame + 0x5c)) == '\x01')) {
    pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x58))));
    *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
    }
  }
  puVar2 = param_3;
  if (param_3 == ((undefined *)GEN_TOP(0x0))) {
    puVar2 = &REFG(undefined, 0x108d29b);
  }
  uVar3 = F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,puVar2,REFG(undefined4, 0x108cc50));
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x0));
  (*(char *)(gen_frame + 0x5c)) = -1;
  F_00490f90(&(*(undefined4 *)(gen_frame + 0x54)) GEN_EDX_ARG,uVar3);
  F_00493b50(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x54)));
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x58)) != ((undefined4 *)GEN_TOP(0x0))) {
    if (((*(char *)(gen_frame + 0x5c)) != '\0') && ((*(char *)(gen_frame + 0x5c)) == '\x01')) {
      pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x58))));
      *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
        F_0042c880(pvVar1 GEN_EDX_ARG);
        F_00406ad0(pvVar1);
      }
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x0));
    (*(char *)(gen_frame + 0x5c)) = -1;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar3 = F_0043bbc0(this GEN_EDX_ARG,param_1,1,this_00,(int)this + 0x334,(int)this + 0x388);
  return uVar3;
}

/* ref: FUN_00461190 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00461190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x461190u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x68, 8, 4);
  undefined * this_00;
  undefined * this_01;
  uint uVar1;
  undefined * puVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x60)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x64));
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x304)));
  F_00492c50(this_00 GEN_EDX_FWD);
  puVar2 = param_2;
  if (param_2 == ((undefined *)GEN_TOP(0x0))) {
    puVar2 = &REFG(undefined, 0x108d2c1);
  }
  uVar1 = F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,puVar2,REFG(undefined4, 0x108cc50));
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x0));
  (*(char *)(gen_frame + 0x5c)) = -1;
  F_00490f90(&(*(undefined4 *)(gen_frame + 0x54)) GEN_EDX_ARG,uVar1);
  F_00493b50(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x54)));
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x58)) != ((undefined4 *)GEN_TOP(0x0))) {
    if (((*(char *)(gen_frame + 0x5c)) != '\0') && ((*(char *)(gen_frame + 0x5c)) == '\x01')) {
      this_01 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x58))));
      *((int *)GEN_TOP(((int)this_01 + 0x54))) = *((int *)GEN_TOP(((int)this_01 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)this_01 + 0x54))) < 1) {
        F_0042c880(this_01 GEN_EDX_ARG);
        F_00406ad0(this_01);
      }
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x0));
    (*(char *)(gen_frame + 0x5c)) = -1;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar1 = F_0043bbc0(this GEN_EDX_ARG,param_1,2,this_00,(int)this + 0x334,(int)this + 0x388);
  return uVar1;
}

/* ref: FUN_00461270 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00461270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x461270u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_GS(0x68, 8, 4);
  undefined * this_00;
  undefined * pvVar1;
  uint uVar2;
  undefined * puVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x60)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x64));
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x304)));
  F_00492c50(this_00 GEN_EDX_FWD);
  puVar3 = param_2;
  if (param_2 == ((undefined *)GEN_TOP(0x0))) {
    puVar3 = &REFG(undefined, 0x108d2c2);
  }
  uVar2 = F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,puVar3,REFG(undefined4, 0x108cc50));
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x0));
  (*(char *)(gen_frame + 0x5c)) = -1;
  F_00490f90(&(*(undefined4 *)(gen_frame + 0x54)) GEN_EDX_ARG,uVar2);
  F_00493b50(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x54)));
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x58)) != ((undefined4 *)GEN_TOP(0x0))) {
    if (((*(char *)(gen_frame + 0x5c)) != '\0') && ((*(char *)(gen_frame + 0x5c)) == '\x01')) {
      pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x58))));
      *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
        F_0042c880(pvVar1 GEN_EDX_ARG);
        F_00406ad0(pvVar1);
      }
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x0));
    (*(char *)(gen_frame + 0x5c)) = -1;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = &(*(undefined4 *)(gen_frame + 0x54));
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = param_3;
  (*(char *)(gen_frame + 0x5c)) = '\0';
  F_00493bc0(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x54)));
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x58)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x5c)) != '\0')) && ((*(char *)(gen_frame + 0x5c)) == '\x01')) {
    pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x58))));
    *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
    }
  }
  uVar2 = F_0043bbc0(this GEN_EDX_ARG,param_1,2,this_00,(int)this + 0x334,(int)this + 0x388);
  return uVar2;
}

/* ref: FUN_00461390 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00461390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x461390u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_GS(0x68, 8, 4);
  undefined * this_00;
  undefined * pvVar1;
  uint uVar2;
  undefined * puVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x60)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x64));
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x304)));
  F_00492c50(this_00 GEN_EDX_FWD);
  puVar3 = param_2;
  if (param_2 == ((undefined *)GEN_TOP(0x0))) {
    puVar3 = &REFG(undefined, 0x108d2c3);
  }
  uVar2 = F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,puVar3,REFG(undefined4, 0x108cc50));
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x0));
  (*(char *)(gen_frame + 0x5c)) = -1;
  F_00490f90(&(*(undefined4 *)(gen_frame + 0x54)) GEN_EDX_ARG,uVar2);
  F_00493b50(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x54)));
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x58)) != ((undefined4 *)GEN_TOP(0x0))) {
    if (((*(char *)(gen_frame + 0x5c)) != '\0') && ((*(char *)(gen_frame + 0x5c)) == '\x01')) {
      pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x58))));
      *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
        F_0042c880(pvVar1 GEN_EDX_ARG);
        F_00406ad0(pvVar1);
      }
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x0));
    (*(char *)(gen_frame + 0x5c)) = -1;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = &(*(undefined4 *)(gen_frame + 0x54));
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = param_3;
  (*(char *)(gen_frame + 0x5c)) = '\0';
  F_00493bc0(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x54)));
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x58)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x5c)) != '\0')) && ((*(char *)(gen_frame + 0x5c)) == '\x01')) {
    pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x58))));
    *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
    }
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = &(*(undefined4 *)(gen_frame + 0x54));
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = param_4;
  (*(char *)(gen_frame + 0x5c)) = '\0';
  F_00493bc0(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x54)));
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x58)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x5c)) != '\0')) && ((*(char *)(gen_frame + 0x5c)) == '\x01')) {
    pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x58))));
    *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
    }
  }
  uVar2 = F_0043bbc0(this GEN_EDX_ARG,param_1,2,this_00,(int)this + 0x334,(int)this + 0x388);
  return uVar2;
}

/* ref: FUN_00461500 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00461500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2), GEN_P(undefined * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x461500u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_GS(0x68, 8, 4);
  undefined * this_00;
  undefined * pvVar1;
  uint uVar2;
  undefined * puVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x60)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x64));
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x304)));
  F_00492c50(this_00 GEN_EDX_FWD);
  puVar3 = param_2;
  if (param_2 == ((undefined *)GEN_TOP(0x0))) {
    puVar3 = &REFG(undefined, 0x108d30e);
  }
  uVar2 = F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,puVar3,REFG(undefined4, 0x108cc50));
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x0));
  (*(char *)(gen_frame + 0x5c)) = -1;
  F_00490f90(&(*(undefined4 *)(gen_frame + 0x54)) GEN_EDX_ARG,uVar2);
  F_00493b50(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x54)));
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x58)) != ((undefined4 *)GEN_TOP(0x0))) {
    if (((*(char *)(gen_frame + 0x5c)) != '\0') && ((*(char *)(gen_frame + 0x5c)) == '\x01')) {
      pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x58))));
      *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
        F_0042c880(pvVar1 GEN_EDX_ARG);
        F_00406ad0(pvVar1);
      }
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x0));
    (*(char *)(gen_frame + 0x5c)) = -1;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  puVar3 = param_3;
  if (param_3 == ((undefined *)GEN_TOP(0x0))) {
    puVar3 = &REFG(undefined, 0x108d30f);
  }
  uVar2 = F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,puVar3,REFG(undefined4, 0x108cc50));
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x0));
  (*(char *)(gen_frame + 0x5c)) = -1;
  F_00490f90(&(*(undefined4 *)(gen_frame + 0x54)) GEN_EDX_ARG,uVar2);
  F_00493b50(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x54)));
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x58)) != ((undefined4 *)GEN_TOP(0x0))) {
    if (((*(char *)(gen_frame + 0x5c)) != '\0') && ((*(char *)(gen_frame + 0x5c)) == '\x01')) {
      pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x58))));
      *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
        F_0042c880(pvVar1 GEN_EDX_ARG);
        F_00406ad0(pvVar1);
      }
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x0));
    (*(char *)(gen_frame + 0x5c)) = -1;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar2 = F_0043bbc0(this GEN_EDX_ARG,param_1,2,this_00,(int)this + 0x334,(int)this + 0x388);
  return uVar2;
}

/* ref: FUN_00461650 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00461650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2), GEN_P(undefined * param_3, unsigned int gen_a3), GEN_P(undefined * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x461650u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined * param_4 = (undefined *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL_GS(0x68, 8, 4);
  undefined * this_00;
  undefined * pvVar1;
  uint uVar2;
  undefined * puVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x60)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x64));
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x304)));
  F_00492c50(this_00 GEN_EDX_FWD);
  puVar3 = param_2;
  if (param_2 == ((undefined *)GEN_TOP(0x0))) {
    puVar3 = &REFG(undefined, 0x108d33d);
  }
  uVar2 = F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,puVar3,REFG(undefined4, 0x108cc50));
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x0));
  (*(char *)(gen_frame + 0x5c)) = -1;
  F_00490f90(&(*(undefined4 *)(gen_frame + 0x54)) GEN_EDX_ARG,uVar2);
  F_00493b50(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x54)));
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x58)) != ((undefined4 *)GEN_TOP(0x0))) {
    if (((*(char *)(gen_frame + 0x5c)) != '\0') && ((*(char *)(gen_frame + 0x5c)) == '\x01')) {
      pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x58))));
      *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
        F_0042c880(pvVar1 GEN_EDX_ARG);
        F_00406ad0(pvVar1);
      }
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x0));
    (*(char *)(gen_frame + 0x5c)) = -1;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  puVar3 = param_3;
  if (param_3 == ((undefined *)GEN_TOP(0x0))) {
    puVar3 = &REFG(undefined, 0x108d33e);
  }
  uVar2 = F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,puVar3,REFG(undefined4, 0x108cc50));
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x0));
  (*(char *)(gen_frame + 0x5c)) = -1;
  F_00490f90(&(*(undefined4 *)(gen_frame + 0x54)) GEN_EDX_ARG,uVar2);
  F_00493b50(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x54)));
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x58)) != ((undefined4 *)GEN_TOP(0x0))) {
    if (((*(char *)(gen_frame + 0x5c)) != '\0') && ((*(char *)(gen_frame + 0x5c)) == '\x01')) {
      pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x58))));
      *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
        F_0042c880(pvVar1 GEN_EDX_ARG);
        F_00406ad0(pvVar1);
      }
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x0));
    (*(char *)(gen_frame + 0x5c)) = -1;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  puVar3 = param_4;
  if (param_4 == ((undefined *)GEN_TOP(0x0))) {
    puVar3 = &REFG(undefined, 0x108d33f);
  }
  uVar2 = F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,puVar3,REFG(undefined4, 0x108cc50));
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x0));
  (*(char *)(gen_frame + 0x5c)) = -1;
  F_00490f90(&(*(undefined4 *)(gen_frame + 0x54)) GEN_EDX_ARG,uVar2);
  F_00493b50(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x54)));
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x58)) != ((undefined4 *)GEN_TOP(0x0))) {
    if (((*(char *)(gen_frame + 0x5c)) != '\0') && ((*(char *)(gen_frame + 0x5c)) == '\x01')) {
      pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x58))));
      *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
        F_0042c880(pvVar1 GEN_EDX_ARG);
        F_00406ad0(pvVar1);
      }
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x0));
    (*(char *)(gen_frame + 0x5c)) = -1;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar2 = F_0043bbc0(this GEN_EDX_ARG,param_1,2,this_00,(int)this + 0x334,(int)this + 0x388);
  return uVar2;
}

/* ref: FUN_00461820 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00461820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2), GEN_P(undefined * param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x461820u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_GS(0x68, 8, 4);
  undefined * this_00;
  undefined * pvVar1;
  uint uVar2;
  undefined * puVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x60)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x64));
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x304)));
  F_00492c50(this_00 GEN_EDX_FWD);
  puVar3 = param_2;
  if (param_2 == ((undefined *)GEN_TOP(0x0))) {
    puVar3 = &REFG(undefined, 0x108d369);
  }
  uVar2 = F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,puVar3,REFG(undefined4, 0x108cc50));
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x0));
  (*(char *)(gen_frame + 0x5c)) = -1;
  F_00490f90(&(*(undefined4 *)(gen_frame + 0x54)) GEN_EDX_ARG,uVar2);
  F_00493b50(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x54)));
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x58)) != ((undefined4 *)GEN_TOP(0x0))) {
    if (((*(char *)(gen_frame + 0x5c)) != '\0') && ((*(char *)(gen_frame + 0x5c)) == '\x01')) {
      pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x58))));
      *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
        F_0042c880(pvVar1 GEN_EDX_ARG);
        F_00406ad0(pvVar1);
      }
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x0));
    (*(char *)(gen_frame + 0x5c)) = -1;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  puVar3 = param_3;
  if (param_3 == ((undefined *)GEN_TOP(0x0))) {
    puVar3 = &REFG(undefined, 0x108d36a);
  }
  uVar2 = F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,puVar3,REFG(undefined4, 0x108cc50));
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x0));
  (*(char *)(gen_frame + 0x5c)) = -1;
  F_00490f90(&(*(undefined4 *)(gen_frame + 0x54)) GEN_EDX_ARG,uVar2);
  F_00493b50(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x54)));
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x58)) != ((undefined4 *)GEN_TOP(0x0))) {
    if (((*(char *)(gen_frame + 0x5c)) != '\0') && ((*(char *)(gen_frame + 0x5c)) == '\x01')) {
      pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x58))));
      *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
        F_0042c880(pvVar1 GEN_EDX_ARG);
        F_00406ad0(pvVar1);
      }
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x0));
    (*(char *)(gen_frame + 0x5c)) = -1;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = param_4;
  (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = &(*(undefined4 *)(gen_frame + 0x54));
  (*(char *)(gen_frame + 0x5c)) = '\0';
  F_00493bc0(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x54)));
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x58)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x5c)) != '\0')) && ((*(char *)(gen_frame + 0x5c)) == '\x01')) {
    pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x58))));
    *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
    }
  }
  uVar2 = F_0043bbc0(this GEN_EDX_ARG,param_1,2,this_00,(int)this + 0x334,(int)this + 0x388);
  return uVar2;
}

/* ref: FUN_004619c0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_004619c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2), GEN_P(undefined * param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x4619c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_FRAME_DECL_GS(0x68, 8, 4);
  undefined * this_00;
  undefined * pvVar1;
  uint uVar2;
  undefined * puVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x60)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x64));
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x304)));
  F_00492c50(this_00 GEN_EDX_FWD);
  puVar3 = param_2;
  if (param_2 == ((undefined *)GEN_TOP(0x0))) {
    puVar3 = &REFG(undefined, 0x108d36b);
  }
  uVar2 = F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,puVar3,REFG(undefined4, 0x108cc50));
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x0));
  (*(char *)(gen_frame + 0x5c)) = -1;
  F_00490f90(&(*(undefined4 *)(gen_frame + 0x54)) GEN_EDX_ARG,uVar2);
  F_00493b50(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x54)));
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x58)) != ((undefined4 *)GEN_TOP(0x0))) {
    if (((*(char *)(gen_frame + 0x5c)) != '\0') && ((*(char *)(gen_frame + 0x5c)) == '\x01')) {
      pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x58))));
      *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
        F_0042c880(pvVar1 GEN_EDX_ARG);
        F_00406ad0(pvVar1);
      }
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x0));
    (*(char *)(gen_frame + 0x5c)) = -1;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  puVar3 = param_3;
  if (param_3 == ((undefined *)GEN_TOP(0x0))) {
    puVar3 = &REFG(undefined, 0x108d395);
  }
  uVar2 = F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,puVar3,REFG(undefined4, 0x108cc50));
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x0));
  (*(char *)(gen_frame + 0x5c)) = -1;
  F_00490f90(&(*(undefined4 *)(gen_frame + 0x54)) GEN_EDX_ARG,uVar2);
  F_00493b50(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x54)));
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x58)) != ((undefined4 *)GEN_TOP(0x0))) {
    if (((*(char *)(gen_frame + 0x5c)) != '\0') && ((*(char *)(gen_frame + 0x5c)) == '\x01')) {
      pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x58))));
      *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
        F_0042c880(pvVar1 GEN_EDX_ARG);
        F_00406ad0(pvVar1);
      }
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x0));
    (*(char *)(gen_frame + 0x5c)) = -1;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = param_4;
  (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = &(*(undefined4 *)(gen_frame + 0x54));
  (*(char *)(gen_frame + 0x5c)) = '\0';
  F_00493bc0(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x54)));
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x58)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x5c)) != '\0')) && ((*(char *)(gen_frame + 0x5c)) == '\x01')) {
    pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x58))));
    *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
    }
  }
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = param_5;
  (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = &(*(undefined4 *)(gen_frame + 0x54));
  (*(char *)(gen_frame + 0x5c)) = '\0';
  F_00493bc0(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x54)));
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x58)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x5c)) != '\0')) && ((*(char *)(gen_frame + 0x5c)) == '\x01')) {
    pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x58))));
    *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
    }
  }
  uVar2 = F_0043bbc0(this GEN_EDX_ARG,param_1,2,this_00,(int)this + 0x334,(int)this + 0x388);
  return uVar2;
}

/* ref: FUN_00461bb0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00461bb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x461bb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x14, 12, 4);
  undefined * this_00;
  undefined * this_01;
  uint uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10));
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x304)));
  F_00492c50(this_00 GEN_EDX_FWD);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = param_2;
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = &(*(undefined4 *)(gen_frame + 0x0));
  (*(char *)(gen_frame + 0x8)) = '\0';
  F_00493bc0(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x4)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x8)) != '\0')) && ((*(char *)(gen_frame + 0x8)) == '\x01')) {
    this_01 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x4))));
    *((int *)GEN_TOP(((int)this_01 + 0x54))) = *((int *)GEN_TOP(((int)this_01 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)this_01 + 0x54))) < 1) {
      F_0042c880(this_01 GEN_EDX_ARG);
      F_00406ad0(this_01);
    }
  }
  uVar1 = F_0043bbc0(this GEN_EDX_ARG,param_1,2,this_00,(int)this + 0x334,(int)this + 0x388);
  return uVar1;
}

/* ref: FUN_00461c60 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00461c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x461c60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_GS(0x14, 12, 4);
  undefined * this_00;
  undefined * pvVar1;
  uint uVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10));
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x304)));
  F_00492c50(this_00 GEN_EDX_FWD);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = param_2;
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = &(*(undefined4 *)(gen_frame + 0x0));
  (*(char *)(gen_frame + 0x8)) = '\0';
  F_00493bc0(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x4)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x8)) != '\0')) && ((*(char *)(gen_frame + 0x8)) == '\x01')) {
    pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x4))));
    *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
    }
  }
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = param_3;
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = &(*(undefined4 *)(gen_frame + 0x0));
  (*(char *)(gen_frame + 0x8)) = '\0';
  F_00493bc0(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x4)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x8)) != '\0')) && ((*(char *)(gen_frame + 0x8)) == '\x01')) {
    pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x4))));
    *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
    }
  }
  uVar2 = F_0043bbc0(this GEN_EDX_ARG,param_1,2,this_00,(int)this + 0x334,(int)this + 0x388);
  return uVar2;
}

/* ref: FUN_00461d60 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00461d60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x461d60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_GS(0x14, 12, 4);
  undefined * this_00;
  undefined * pvVar1;
  uint uVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10));
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x304)));
  F_00492c50(this_00 GEN_EDX_FWD);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = param_2;
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = &(*(undefined4 *)(gen_frame + 0x0));
  (*(char *)(gen_frame + 0x8)) = '\0';
  F_00493bc0(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x4)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x8)) != '\0')) && ((*(char *)(gen_frame + 0x8)) == '\x01')) {
    pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x4))));
    *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
    }
  }
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = param_3;
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = &(*(undefined4 *)(gen_frame + 0x0));
  (*(char *)(gen_frame + 0x8)) = '\0';
  F_00493bc0(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x4)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x8)) != '\0')) && ((*(char *)(gen_frame + 0x8)) == '\x01')) {
    pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x4))));
    *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
    }
  }
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = param_4;
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = &(*(undefined4 *)(gen_frame + 0x0));
  (*(char *)(gen_frame + 0x8)) = '\0';
  F_00493bc0(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x4)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x8)) != '\0')) && ((*(char *)(gen_frame + 0x8)) == '\x01')) {
    pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x4))));
    *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
    }
  }
  uVar2 = F_0043bbc0(this GEN_EDX_ARG,param_1,2,this_00,(int)this + 0x334,(int)this + 0x388);
  return uVar2;
}

/* ref: FUN_00461ea0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00461ea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x461ea0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_FRAME_DECL_GS(0x14, 12, 4);
  undefined * this_00;
  undefined * pvVar1;
  uint uVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10));
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x304)));
  F_00492c50(this_00 GEN_EDX_FWD);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = param_2;
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = &(*(undefined4 *)(gen_frame + 0x0));
  (*(char *)(gen_frame + 0x8)) = '\0';
  F_00493bc0(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x4)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x8)) != '\0')) && ((*(char *)(gen_frame + 0x8)) == '\x01')) {
    pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x4))));
    *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
    }
  }
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = param_3;
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = &(*(undefined4 *)(gen_frame + 0x0));
  (*(char *)(gen_frame + 0x8)) = '\0';
  F_00493bc0(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x4)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x8)) != '\0')) && ((*(char *)(gen_frame + 0x8)) == '\x01')) {
    pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x4))));
    *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
    }
  }
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = param_4;
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = &(*(undefined4 *)(gen_frame + 0x0));
  (*(char *)(gen_frame + 0x8)) = '\0';
  F_00493bc0(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x4)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x8)) != '\0')) && ((*(char *)(gen_frame + 0x8)) == '\x01')) {
    pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x4))));
    *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
    }
  }
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = param_5;
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = &(*(undefined4 *)(gen_frame + 0x0));
  (*(char *)(gen_frame + 0x8)) = '\0';
  F_00493bc0(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x4)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x8)) != '\0')) && ((*(char *)(gen_frame + 0x8)) == '\x01')) {
    pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x4))));
    *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
    }
  }
  uVar2 = F_0043bbc0(this GEN_EDX_ARG,param_1,2,this_00,(int)this + 0x334,(int)this + 0x388);
  return uVar2;
}

/* ref: FUN_00462030 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00462030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x462030u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_GS(0x68, 8, 4);
  undefined * this_00;
  undefined * pvVar1;
  undefined * puVar2;
  uint uVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x60)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x64));
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x304)));
  F_00492c50(this_00 GEN_EDX_FWD);
  (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = &(*(undefined4 *)(gen_frame + 0x54));
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = param_2;
  (*(char *)(gen_frame + 0x5c)) = '\0';
  F_00493bc0(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x54)));
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x58)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x5c)) != '\0')) && ((*(char *)(gen_frame + 0x5c)) == '\x01')) {
    pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x58))));
    *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
    }
  }
  puVar2 = param_3;
  if (param_3 == ((undefined *)GEN_TOP(0x0))) {
    puVar2 = &REFG(undefined, 0x108d396);
  }
  uVar3 = F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,puVar2,REFG(undefined4, 0x108cc50));
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x0));
  (*(char *)(gen_frame + 0x5c)) = -1;
  F_00490f90(&(*(undefined4 *)(gen_frame + 0x54)) GEN_EDX_ARG,uVar3);
  F_00493b50(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x54)));
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x58)) != ((undefined4 *)GEN_TOP(0x0))) {
    if (((*(char *)(gen_frame + 0x5c)) != '\0') && ((*(char *)(gen_frame + 0x5c)) == '\x01')) {
      pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x58))));
      *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
        F_0042c880(pvVar1 GEN_EDX_ARG);
        F_00406ad0(pvVar1);
      }
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x0));
    (*(char *)(gen_frame + 0x5c)) = -1;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar3 = F_0043bbc0(this GEN_EDX_ARG,param_1,2,this_00,(int)this + 0x334,(int)this + 0x388);
  return uVar3;
}

/* ref: FUN_00462160 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00462160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x462160u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined * param_4 = (undefined *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL_GS(0x68, 8, 4);
  undefined * this_00;
  undefined * pvVar1;
  undefined * puVar2;
  uint uVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x60)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x64));
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x304)));
  F_00492c50(this_00 GEN_EDX_FWD);
  (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = &(*(undefined4 *)(gen_frame + 0x54));
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = param_2;
  (*(char *)(gen_frame + 0x5c)) = '\0';
  F_00493bc0(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x54)));
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x58)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x5c)) != '\0')) && ((*(char *)(gen_frame + 0x5c)) == '\x01')) {
    pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x58))));
    *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
    }
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = &(*(undefined4 *)(gen_frame + 0x54));
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = param_3;
  (*(char *)(gen_frame + 0x5c)) = '\0';
  F_00493bc0(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x54)));
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x58)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x5c)) != '\0')) && ((*(char *)(gen_frame + 0x5c)) == '\x01')) {
    pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x58))));
    *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
    }
  }
  puVar2 = param_4;
  if (param_4 == ((undefined *)GEN_TOP(0x0))) {
    puVar2 = &REFG(undefined, 0x108d397);
  }
  uVar3 = F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,puVar2,REFG(undefined4, 0x108cc50));
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x0));
  (*(char *)(gen_frame + 0x5c)) = -1;
  F_00490f90(&(*(undefined4 *)(gen_frame + 0x54)) GEN_EDX_ARG,uVar3);
  F_00493b50(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x54)));
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x58)) != ((undefined4 *)GEN_TOP(0x0))) {
    if (((*(char *)(gen_frame + 0x5c)) != '\0') && ((*(char *)(gen_frame + 0x5c)) == '\x01')) {
      pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x58))));
      *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
        F_0042c880(pvVar1 GEN_EDX_ARG);
        F_00406ad0(pvVar1);
      }
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x0));
    (*(char *)(gen_frame + 0x5c)) = -1;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar3 = F_0043bbc0(this GEN_EDX_ARG,param_1,2,this_00,(int)this + 0x334,(int)this + 0x388);
  return uVar3;
}

/* ref: FUN_004622d0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_004622d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined * param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x4622d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_GS(0x68, 8, 4);
  undefined * this_00;
  undefined * pvVar1;
  undefined * puVar2;
  uint uVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x60)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x64));
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x304)));
  F_00492c50(this_00 GEN_EDX_FWD);
  (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = &(*(undefined4 *)(gen_frame + 0x54));
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = param_2;
  (*(char *)(gen_frame + 0x5c)) = '\0';
  F_00493bc0(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x54)));
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x58)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x5c)) != '\0')) && ((*(char *)(gen_frame + 0x5c)) == '\x01')) {
    pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x58))));
    *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
    }
  }
  puVar2 = param_3;
  if (param_3 == ((undefined *)GEN_TOP(0x0))) {
    puVar2 = &REFG(undefined, 0x108d3b2);
  }
  uVar3 = F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,puVar2,REFG(undefined4, 0x108cc50));
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x0));
  (*(char *)(gen_frame + 0x5c)) = -1;
  F_00490f90(&(*(undefined4 *)(gen_frame + 0x54)) GEN_EDX_ARG,uVar3);
  F_00493b50(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x54)));
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x58)) != ((undefined4 *)GEN_TOP(0x0))) {
    if (((*(char *)(gen_frame + 0x5c)) != '\0') && ((*(char *)(gen_frame + 0x5c)) == '\x01')) {
      pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x58))));
      *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
        F_0042c880(pvVar1 GEN_EDX_ARG);
        F_00406ad0(pvVar1);
      }
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x0));
    (*(char *)(gen_frame + 0x5c)) = -1;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = &(*(undefined4 *)(gen_frame + 0x54));
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = param_4;
  (*(char *)(gen_frame + 0x5c)) = '\0';
  F_00493bc0(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x54)));
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x58)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x5c)) != '\0')) && ((*(char *)(gen_frame + 0x5c)) == '\x01')) {
    pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x58))));
    *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
    }
  }
  uVar3 = F_0043bbc0(this GEN_EDX_ARG,param_1,2,this_00,(int)this + 0x334,(int)this + 0x388);
  return uVar3;
}

/* ref: FUN_00462440 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00462440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x462440u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL_GS(0x80, 0, 4);
  uint uVar1;
  int * piVar2;
  undefined * pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c));
  if (*((int *)GEN_TOP(((int)this + 600))) == 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x34))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x34))) GEN_EDX_FWD,((char *)REFP(0x108f870)));
    *((uint *)GEN_TOP(((int)this + 600))) = uVar1;
    if (uVar1 == 0) {
      return 0x12fd328;
    }
  }
  F_0042aca0((int)this + 0x334 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(((int)this + 0x304)));
  F_00492c50(pvVar3 GEN_EDX_ARG);
  if (param_2 == 0x21) {
    (*(uint *)(gen_frame + 0x6c)) = 0;
    (*(uint *)(gen_frame + 0x6c)) = param_1 / 0x3c;
    (*(uint * PTR32 *)(gen_frame + 0x70)) = &(*(uint *)(gen_frame + 0x6c));
    (*(char *)(gen_frame + 0x74)) = '\0';
    F_00493b50(pvVar3 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x6c)));
    if ((*(uint * PTR32 *)(gen_frame + 0x70)) != ((uint *)GEN_TOP(0x0))) {
      if (((*(char *)(gen_frame + 0x74)) != '\0') && ((*(char *)(gen_frame + 0x74)) == '\x01')) {
        pvVar3 = ((undefined *)GEN_TOP(*(*(uint * PTR32 *)(gen_frame + 0x70))));
        *((int *)GEN_TOP(((int)pvVar3 + 0x54))) = *((int *)GEN_TOP(((int)pvVar3 + 0x54))) - 1;
        if (*((int *)GEN_TOP(((int)pvVar3 + 0x54))) < 1) {
          F_0042c880(pvVar3 GEN_EDX_ARG);
          F_00406ad0(pvVar3);
        }
      }
      (*(uint * PTR32 *)(gen_frame + 0x70)) = ((uint *)GEN_TOP(0x0));
      (*(char *)(gen_frame + 0x74)) = -1;
    }
    (*(uint *)(gen_frame + 0x54)) = 0;
    (*(uint *)(gen_frame + 0x54)) = param_1 % 0x3c;
    (*(uint * PTR32 *)(gen_frame + 0x58)) = &(*(uint *)(gen_frame + 0x54));
    (*(char *)(gen_frame + 0x5c)) = '\0';
    F_00493b50(((undefined *)GEN_TOP(((int)this + 0x304))) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x54)));
    if ((((*(uint * PTR32 *)(gen_frame + 0x58)) == ((uint *)GEN_TOP(0x0))) || ((*(char *)(gen_frame + 0x5c)) == '\0')) || ((*(char *)(gen_frame + 0x5c)) != '\x01'))
    goto LAB_004625b1;
    pvVar3 = ((undefined *)GEN_TOP(*(*(uint * PTR32 *)(gen_frame + 0x58))));
  }
  else {
    (*(uint * PTR32 *)(gen_frame + 0x64)) = &(*(uint *)(gen_frame + 0x60));
    (*(uint *)(gen_frame + 0x60)) = 0;
    (*(uint *)(gen_frame + 0x60)) = param_1;
    (*(char *)(gen_frame + 0x68)) = '\0';
    F_00493b50(pvVar3 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x60)));
    if ((((*(uint * PTR32 *)(gen_frame + 0x64)) == ((uint *)GEN_TOP(0x0))) || ((*(char *)(gen_frame + 0x68)) == '\0')) || ((*(char *)(gen_frame + 0x68)) != '\x01'))
    goto LAB_004625b1;
    pvVar3 = ((undefined *)GEN_TOP(*(*(uint * PTR32 *)(gen_frame + 0x64))));
  }
  *((int *)GEN_TOP(((int)pvVar3 + 0x54))) = *((int *)GEN_TOP(((int)pvVar3 + 0x54))) - 1;
  if (*((int *)GEN_TOP(((int)pvVar3 + 0x54))) < 1) {
    F_0042c880(pvVar3 GEN_EDX_ARG);
    F_00406ad0(pvVar3);
  }
LAB_004625b1: ;
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 600))) + 0x24))))
                            (*((int * PTR32 *)GEN_TOP(((int)this + 600))) GEN_EDX_ARG,param_2)));
  uVar4 = 0;
  uVar5 = REFG(undefined4, 0x108cc50);
  pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG)));
  uVar1 = F_00cb0950(pvVar3 GEN_EDX_ARG,uVar4);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar1,uVar5);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),(int)this + 0x304,(int)this + 0x334U);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  if (uVar1 != 1) {
    return 0x12fd328;
  }
  return (int)this + 0x334U;
}

/* ref: FUN_00462630 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00462630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x462630u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x68, 8, 4);
  undefined * this_00;
  uint uVar1;
  int * piVar2;
  undefined * pvVar3;
  undefined * PTR32 * in_ecx;
  undefined4 uVar4;
  undefined4 uVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x60)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x64));
  if (*((int *)GEN_TOP(((int)this + 600))) == 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x34))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x34))) GEN_EDX_FWD,((char *)REFP(0x108f878)));
    *((uint *)GEN_TOP(((int)this + 600))) = uVar1;
  }
  in_ecx = ((undefined * PTR32 *)GEN_TOP(((int)this + 0x334)));
  F_0042aca0(in_ecx GEN_EDX_ARG);
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x304)));
  F_00492c50(this_00 GEN_EDX_ARG);
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = param_1;
  (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = &(*(undefined4 *)(gen_frame + 0x54));
  (*(char *)(gen_frame + 0x5c)) = '\0';
  F_00493b50(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x54)));
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x58)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x5c)) != '\0')) && ((*(char *)(gen_frame + 0x5c)) == '\x01')) {
    pvVar3 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x58))));
    *((int *)GEN_TOP(((int)pvVar3 + 0x54))) = *((int *)GEN_TOP(((int)pvVar3 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar3 + 0x54))) < 1) {
      F_0042c880(pvVar3 GEN_EDX_ARG);
      F_00406ad0(pvVar3);
    }
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 600))) + 0x24))))
                            (*((int * PTR32 *)GEN_TOP(((int)this + 600))) GEN_EDX_ARG,param_2)));
  uVar4 = 0;
  uVar5 = REFG(undefined4, 0x108cc50);
  pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG)));
  uVar1 = F_00cb0950(pvVar3 GEN_EDX_ARG,uVar4);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar1,uVar5);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),this_00,in_ecx);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  if (uVar1 != 1) {
    in_ecx = &REFG(undefined * PTR32, 0x12fd328);
  }
  return (uint)in_ecx;
}

/* ref: FUN_00462750 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00462750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x462750u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  int iVar2;
  
  if (param_1 <= param_2) {
    uVar1 = param_2 - param_1;
    iVar2 = param_3;
    while (iVar2 != 0) {
      if (iVar2 == 1) {
        if (uVar1 < 0xe10) goto LAB_0046278b;
        if (uVar1 < 0x15180) {
          uVar1 = F_00462630(this GEN_EDX_FWD,uVar1 / 0xe10,0x29);
          return uVar1;
        }
        goto LAB_004627f6;
      }
      if (iVar2 != 2) {
        return 0x12fd328;
      }
      if (uVar1 < 0x708) {
        uVar1 = F_00462630(this GEN_EDX_ARG,uVar1 / 0x3c,0x28);
        return uVar1;
      }
      if (uVar1 < 0xe10) {
        uVar1 = F_00462630(this GEN_EDX_ARG,1,0x29);
        return uVar1;
      }
      iVar2 = 1;
    }
    if (0x1517f < uVar1) {
LAB_004627f6: ;
      uVar1 = F_00462630(this GEN_EDX_ARG,uVar1 / 0x15180,0x2a);
      return uVar1;
    }
  }
LAB_0046278b: ;
  uVar1 = F_00462440(this GEN_EDX_ARG,param_1,0x1c);
  return uVar1;
}

/* ref: FUN_00462810 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00462810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x462810u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  if (param_2 <= param_3) {
    F_00461d60(this GEN_EDX_FWD,param_1,0,0,param_2);
    return (int)this + 0x334;
  }
  F_00461d60(this GEN_EDX_ARG,param_1,(param_2 - param_3) / 0xe10,((param_2 - param_3) % 0xe10) / 0x3c,param_2
              );
  return (int)this + 0x334;
}

/* ref: FUN_00462880 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00462880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x462880u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  double dVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    uVar2 = F_0042a990(&REFG(undefined * PTR32, 0x12fd328) GEN_EDX_FWD);
    return uVar2;
  }
  if (param_1 < 0x3c) {
    uVar2 = F_00460bd0(this GEN_EDX_ARG,0x2b,param_1);
    return uVar2;
  }
  if (param_1 < 0xe10) {
    dVar1 = (double)(int)param_1;
    if ((int)param_1 < 0) {
      dVar1 = GEN_X87(dVar1 + (double)*(float *)&REFG(undefined, 0x1088110));
    }
    uVar2 = F_00460bd0(this GEN_EDX_ARG,0x2c,(int)(dVar1 * *(double *)&REFG(undefined, 0x1091848)));
    return uVar2;
  }
  dVar1 = (double)(int)param_1;
  if ((int)param_1 < 0) {
    dVar1 = GEN_X87(dVar1 + (double)*(float *)&REFG(undefined, 0x1088110));
  }
  uVar2 = F_00460bd0(this GEN_EDX_ARG,0x2d,(int)(dVar1 * *(double *)&REFG(undefined, 0x1091840)));
  return uVar2;
}

/* ref: FUN_00462910 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00462910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x462910u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00460bd0(this GEN_EDX_FWD,0x7e9,param_1);
  return uVar1;
}

/* ref: FUN_00462930 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00462930(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(byte param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x462930u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(byte param_3 = (byte)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL(0x1c0, 0);
  int * this;
  undefined3 uVar5;
  uint uVar1;
  int * piVar2;
  undefined * pvVar3;
  int * piVar4;
  undefined1 * puVar6;
  bool bVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  
  (*(uint *)(gen_frame + 0x1b8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1bc);
  uVar5 = (undefined3)((REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1bc)) >> 8);
  if ((param_3 & 4) != 0) {
    if (param_1[0x96] == 0) {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_1[0xd])) + 8))))(((int *)GEN_TOP(param_1[0xd])) GEN_EDX_FWD,((char *)REFP(0x108f868)));
      param_1[0x96] = uVar1;
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_1[0x96])) + 0x24))))(((int *)GEN_TOP(param_1[0x96])) GEN_EDX_ARG,9)));
    uVar9 = 0;
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG)));
    uVar1 = F_00cb0950(pvVar3 GEN_EDX_ARG,uVar9);
    uVar1 = F_0042cdb0(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x158)),uVar1);
    F_0042ccf0(param_2 GEN_EDX_ARG,uVar1);
    uVar8 = F_0042c880(((undefined1 *)(gen_frame + 0x158)) GEN_EDX_ARG);
    uVar5 = (undefined3)(uVar8 >> 8);
  }
  uVar1 = CONCAT31(uVar5,param_3);
  if ((param_3 & 1) != 0) {
    (*(uint *)(gen_frame + 0x0)) = 1;
    if ((param_3 & 2) == 0) {
      uVar1 = F_00ab24a0(param_4);
      if ((uVar1 != 0) && ((*(uint *)(gen_frame + 0x0)) = (uint)*((byte *)GEN_TOP((uVar1 + 0xa3))), (*(uint *)(gen_frame + 0x0)) == 0)) {
        (*(uint *)(gen_frame + 0x0)) = 1;
      }
    }
    else {
      (*(uint *)(gen_frame + 0x0)) = 8;
    }
    piVar2 = param_1 + 0xac;
    if (*((char *)GEN_TOP(param_1[0xac])) == '\0') {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x20))))(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x158)),((char *)REFP(0x108f9bc)));
      F_0042ccf0(piVar2 GEN_EDX_ARG,uVar1);
      F_0042c880(((undefined1 *)(gen_frame + 0x158)) GEN_EDX_ARG);
    }
    F_00492c50(param_1 + 199 GEN_EDX_ARG);
    (*(uint * PTR32 *)(gen_frame + 0x1b0)) = &(*(uint *)(gen_frame + 0x1ac));
    (*(uint *)(gen_frame + 0x1ac)) = 0;
    (*(uint *)(gen_frame + 0x1ac)) = (*(uint *)(gen_frame + 0x0));
    (*(char *)(gen_frame + 0x1b4)) = '\0';
    F_00493bc0(param_1 + 199 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x1ac)));
    if ((((*(uint * PTR32 *)(gen_frame + 0x1b0)) != ((uint *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x1b4)) != '\0')) && ((*(char *)(gen_frame + 0x1b4)) == '\x01')) {
      pvVar3 = ((undefined *)GEN_TOP(*(*(uint * PTR32 *)(gen_frame + 0x1b0))));
      *((int *)GEN_TOP(((int)pvVar3 + 0x54))) = *((int *)GEN_TOP(((int)pvVar3 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)pvVar3 + 0x54))) < 1) {
        F_0042c880(pvVar3 GEN_EDX_ARG);
        F_00406ad0(pvVar3);
      }
    }
    (*(uint *)(gen_frame + 0x1ac)) = 0;
    (*(uint * PTR32 *)(gen_frame + 0x1b0)) = ((undefined4 *)GEN_TOP(0x0));
    (*(char *)(gen_frame + 0x1b4)) = -1;
    F_00490f90(&(*(uint *)(gen_frame + 0x1ac)) GEN_EDX_ARG,param_2);
    F_00493bc0(param_1 + 199 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x1ac)));
    if ((((*(uint * PTR32 *)(gen_frame + 0x1b0)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x1b4)) != '\0')) && ((*(char *)(gen_frame + 0x1b4)) == '\x01')) {
      pvVar3 = ((undefined *)GEN_TOP(*(*(uint * PTR32 *)(gen_frame + 0x1b0))));
      *((int *)GEN_TOP(((int)pvVar3 + 0x54))) = *((int *)GEN_TOP(((int)pvVar3 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)pvVar3 + 0x54))) < 1) {
        F_0042c880(pvVar3 GEN_EDX_ARG);
        F_00406ad0(pvVar3);
      }
    }
    this = param_1 + 0x97;
    uVar1 = F_0043bbc0(param_1 GEN_EDX_ARG,6,2,param_1 + 199,param_1 + 0x10c,param_1 + 0x121);
    F_0042e430(this GEN_EDX_ARG,uVar1);
    piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_1[0xd])) + 0xc))))(((int *)GEN_TOP(param_1[0xd])) GEN_EDX_ARG)));
    if (*piVar4 - 1U < 3) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x158)) GEN_EDX_ARG,&REFG(undefined, 0x108f9d0),REFG(undefined4, 0x108cc50));
      uVar1 = F_0042c8a0(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x158)),0);
      bVar7 = uVar1 != REFG(undefined4, 0x108cc50);
      F_0042c880(((undefined1 *)(gen_frame + 0x158)) GEN_EDX_ARG);
      if (bVar7) {
        F_0042d6c0(param_2 GEN_EDX_ARG,uVar1,2,this);
        uVar1 = F_0042d4d0(param_2 GEN_EDX_ARG,piVar2);
        return uVar1;
      }
      puVar6 = ((undefined1 *)(gen_frame + 0x104));
      pvVar3 = ((undefined *)GEN_TOP(F_0042cd30(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)),param_2)));
      uVar1 = F_0042cd30(pvVar3 GEN_EDX_ARG,puVar6,piVar2);
      F_0042ccf0(param_2 GEN_EDX_ARG,uVar1);
      F_0042c880(((undefined1 *)(gen_frame + 0x104)) GEN_EDX_ARG);
      puVar6 = ((undefined1 *)(gen_frame + 0x5c));
    }
    else {
      puVar6 = ((undefined1 *)(gen_frame + 0xb0));
      pvVar3 = ((undefined *)GEN_TOP(F_0042cd30(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)),param_2)));
      uVar1 = F_0042cd30(pvVar3 GEN_EDX_ARG,puVar6,piVar2);
      F_0042ccf0(param_2 GEN_EDX_ARG,uVar1);
      F_0042c880(((undefined1 *)(gen_frame + 0xb0)) GEN_EDX_ARG);
      puVar6 = ((undefined1 *)(gen_frame + 0x8));
    }
    uVar8 = F_0042c880(puVar6 GEN_EDX_ARG);
    uVar1 = (uint)uVar8;
  }
  return uVar1;
}

/* ref: FUN_00462c30 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00462c30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x462c30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined * param_4 = (undefined *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL_GS(0xe0, 0, 4);
  int * piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xd8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xdc));
  (*(undefined4 *)(gen_frame + 0x28)) = param_3;
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = param_4;
  F_0042b630(((undefined1 *)(gen_frame + 0x84)) GEN_EDX_FWD);
  uVar2 = F_00a23ff0(this GEN_EDX_ARG,param_1,param_3,((undefined1 *)(gen_frame + 0x84)),1);
  if (uVar2 != 0) {
    uVar3 = F_00a24d30(this GEN_EDX_ARG,param_1 + uVar2,(*(undefined4 *)(gen_frame + 0x28)),&(*(undefined4 *)(gen_frame + 0x2c)),1);
    if (uVar3 != 0) {
      uVar4 = F_00a24d30(this GEN_EDX_ARG,param_1 + uVar2 + uVar3,(*(undefined4 *)(gen_frame + 0x28)),&(*(undefined4 *)(gen_frame + 0x24)),1);
      if (uVar4 != 0) {
        iVar5 = uVar2 + uVar3 + uVar4;
        (*(int * PTR32 *)(gen_frame + 0x1c)) = ((int *)GEN_TOP(((int)this - 4)));
        uVar2 = F_0043c080(((undefined1 *)(gen_frame + 0x84)),&(*(undefined4 *)(gen_frame + 0x2c)),&(*(undefined4 *)(gen_frame + 0x24)));
        (*(uint *)(gen_frame + 0x20)) = uVar2;
        F_004816e0(((undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
        uVar2 = F_00a2a6c0(this GEN_EDX_ARG,param_1 + iVar5,param_2 - iVar5,(*(undefined4 *)(gen_frame + 0x28)),((undefined4 *)(gen_frame + 0x0)));
        F_0042b630(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG);
        piVar1 = (*(int * PTR32 *)(gen_frame + 0x1c));
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x1c)) + 0x18))))
                          ((*(int * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x84)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x24)),((undefined4 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x30)));
        if (uVar3 == 1) {
          F_00462930(piVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x30)),(char)(*(uint *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x2c)));
          F_0042d4d0((*(undefined * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x30)));
          F_0042c880(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG);
          F_00492c50(((undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
          F_00429760(((undefined4 *)(gen_frame + 0x0))[0],8,0x2c4);
          ((undefined4 *)(gen_frame + 0x0))[0] = 0;
          F_0042c880(((undefined1 *)(gen_frame + 0x84)) GEN_EDX_ARG);
          return iVar5 + uVar2;
        }
        F_0042c880(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG);
        F_00492c50(((undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
        F_00429760(((undefined4 *)(gen_frame + 0x0))[0],8,0x2c4);
        ((undefined4 *)(gen_frame + 0x0))[0] = 0;
      }
    }
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x84)) GEN_EDX_ARG);
  return 0;
}

/* ref: Client::UI::Misc::RaptureTextModule::vf14 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00462e30(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(char param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5), GEN_P(undefined * param_7, unsigned int gen_a6))
{
  GEN_ENTER(0x462e30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(char param_5 = (char)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  GEN_PIN(undefined * param_7 = (undefined *)(uintptr_t)gen_a6;)
  GEN_FRAME_DECL_GS(0x144, 12, 4);
  int * piVar1;
  ushort uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int * piVar7;
  int iVar8;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x13c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x140));
  (*(int * PTR32 *)(gen_frame + 0x24)) = param_1;
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = param_7;
  F_0042b630(((undefined1 *)(gen_frame + 0xd0)) GEN_EDX_FWD);
  uVar4 = F_00a23ff0(param_1 + 1 GEN_EDX_ARG,param_2,param_4,((undefined1 *)(gen_frame + 0xd0)),1);
  if ((uVar4 != 0) &&
     (uVar5 = F_00a24d30((*(int * PTR32 *)(gen_frame + 0x24)) + 1 GEN_EDX_ARG,param_2 + uVar4,param_4,((undefined1 *)(gen_frame + 0x130)),1), uVar5 != 0)) {
    uVar6 = F_00a24d30((*(int * PTR32 *)(gen_frame + 0x24)) + 1 GEN_EDX_ARG,param_2 + uVar4 + uVar5,param_4,&(*(undefined4 *)(gen_frame + 0x128)),1);
    if (uVar6 != 0) {
      iVar8 = uVar4 + uVar5 + uVar6;
      uVar4 = F_00a24d30((*(int * PTR32 *)(gen_frame + 0x24)) + 1 GEN_EDX_ARG,param_2 + iVar8,param_4,((undefined1 *)(gen_frame + 0x12c)),1);
      if (uVar4 != 0) {
        iVar8 = iVar8 + uVar4;
        if (param_5 != '\0') {
          uVar4 = F_00a24d30((*(int * PTR32 *)(gen_frame + 0x24)) + 1 GEN_EDX_ARG,param_2 + iVar8,param_4,&(*(int *)(gen_frame + 0x134)),1);
          if (uVar4 == 0) goto LAB_00463107;
          (*(int *)(gen_frame + 0x134)) = (*(int *)(gen_frame + 0x134)) - 1;
          iVar8 = iVar8 + uVar4;
        }
        uVar4 = F_00a24d30((*(int * PTR32 *)(gen_frame + 0x24)) + 1 GEN_EDX_ARG,param_2 + iVar8,param_4,&(*(int *)(gen_frame + 0x124)),1);
        if (uVar4 != 0) {
          (*(int *)(gen_frame + 0x124)) = (*(int *)(gen_frame + 0x124)) - 1;
          iVar8 = iVar8 + uVar4;
          (*(undefined4 *)(gen_frame + 0x18)) = 0xffff;
          uVar4 = F_0043c080(((undefined1 *)(gen_frame + 0xd0)),&(*(undefined4 *)(gen_frame + 0x128)),&(*(undefined4 *)(gen_frame + 0x18)));
          (*(uint *)(gen_frame + 0x20)) = uVar4;
          F_004816e0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
          uVar4 = F_00a2a6c0((*(int * PTR32 *)(gen_frame + 0x24)) + 1 GEN_EDX_ARG,param_2 + iVar8,param_3 - iVar8,param_4,((undefined1 *)(gen_frame + 0x0)));
          F_0042b630(((undefined1 *)(gen_frame + 0x7c)) GEN_EDX_ARG);
          piVar1 = (*(int * PTR32 *)(gen_frame + 0x24));
          piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int * PTR32 *)(gen_frame + 0x24))[0xd])) + 0xc))))(((int *)GEN_TOP((*(int * PTR32 *)(gen_frame + 0x24))[0xd])) GEN_EDX_ARG)));
          if (*piVar7 == param_6) {
            F_0042b630(((undefined1 *)(gen_frame + 0x28)) GEN_EDX_ARG);
            uVar2 = (*(ushort *)(gen_frame + 0x138));
            (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x138)) + 0)) = 0;
            (*(ushort *)(gen_frame + 0x138)) = uVar2 & 0xff00;
            if (((((*(uint *)(gen_frame + 0x20)) & 1) != 0) && (0 < param_6)) && (param_6 < 4)) {
              (*(ushort *)(gen_frame + 0x138)) = 0x2f2f;
              (*(undefined1 *)(gen_frame + 0x13a)) = 0;
            }
            bVar3 = F_00a227a0(piVar1 + 0xe GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xd0)),((undefined1 *)(gen_frame + 0x28)));
            if ((bVar3 != 0) &&
               (uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x28)),((undefined1 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x7c))),
               uVar5 == 1)) {
              F_00462930(piVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x7c)),(char)(*(uint *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x128)));
              F_0042d4d0((*(undefined * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x7c)));
              F_0042c880(((undefined1 *)(gen_frame + 0x28)) GEN_EDX_ARG);
              goto LAB_00463010;
            }
            F_0042c880(((undefined1 *)(gen_frame + 0x28)) GEN_EDX_ARG);
          }
          else {
            uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x18))))
                              (piVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xd0)),(*(undefined4 *)(gen_frame + 0x128)),(*(undefined4 *)(gen_frame + 0x18)),((undefined1 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x7c)));
            if (uVar5 == 1) {
              F_00462930(piVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x7c)),(char)(*(uint *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x128)));
              F_0042d4d0((*(undefined * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x7c)));
LAB_00463010: ;
              F_0042c880(((undefined1 *)(gen_frame + 0x7c)) GEN_EDX_ARG);
              F_00493180(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
              F_0042c880(((undefined1 *)(gen_frame + 0xd0)) GEN_EDX_ARG);
              return iVar8 + uVar4;
            }
          }
          F_0042c880(((undefined1 *)(gen_frame + 0x7c)) GEN_EDX_ARG);
          F_00493180(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
        }
      }
    }
  }
LAB_00463107: ;
  F_0042c880(((undefined1 *)(gen_frame + 0xd0)) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00463130 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00463130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x463130u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  undefined4 uVar3;
  
  F_0042b630(this GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = param_2;
  piVar1 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar3 = 0x17;
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x18))))(piVar1 GEN_EDX_ARG)));
    uVar2 = F_00461bb0(this_00 GEN_EDX_ARG,uVar3,param_3);
    F_0042e430(this GEN_EDX_ARG,uVar2);
    F_0042d160(this GEN_EDX_ARG,0x20);
    F_0042e360(this GEN_EDX_ARG,param_1);
    return (uint)this;
  }
  F_0042ccf0(this GEN_EDX_ARG,param_1);
  return (uint)this;
}

/* ref: FUN_004631a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004631a0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(char param_6, unsigned int gen_a5))
{
  GEN_ENTER(0x4631a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(char param_6 = (char)gen_a5;)
  int * piVar1;
  undefined * pvVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  F_0042b630(param_1 GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x54))) = param_3;
  piVar1 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    F_0042ccf0(param_1 GEN_EDX_ARG,param_2);
  }
  else {
    uVar5 = 0x17;
    pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x18))))(piVar1 GEN_EDX_ARG)));
    uVar3 = F_00461bb0(pvVar2 GEN_EDX_ARG,uVar5,param_4);
    F_0042e430(param_1 GEN_EDX_ARG,uVar3);
    F_0042d160(param_1 GEN_EDX_ARG,0x20);
    uVar3 = F_00560910(param_5);
    F_0042e370(param_1 GEN_EDX_ARG,uVar3);
    F_0042d160(param_1 GEN_EDX_ARG,0x20);
    if (param_6 != '\0') {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x18))))(piVar1 GEN_EDX_ARG);
      if (*((int *)GEN_TOP((uVar3 + 600))) == 0) {
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((uVar3 + 0x34))) + 8))))(*((int * PTR32 *)GEN_TOP((uVar3 + 0x34))) GEN_EDX_ARG,((char *)REFP(0x108f868)));
        *((uint *)GEN_TOP((uVar3 + 600))) = uVar4;
      }
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((uVar3 + 600))) + 0x24))))(*((int * PTR32 *)GEN_TOP((uVar3 + 600))) GEN_EDX_ARG,0x11c3)));
      uVar5 = 0;
      pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG)));
      uVar3 = F_00cb0950(pvVar2 GEN_EDX_ARG,uVar5);
      F_0042e370(param_1 GEN_EDX_ARG,uVar3);
      F_0042d160(param_1 GEN_EDX_ARG,0x20);
    }
    F_0042e360(param_1 GEN_EDX_ARG,param_2);
  }
  return (uint)param_1;
}

/* ref: FUN_004632c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004632c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4632c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined1 gen_out[0x4];
  uint uVar1;
  uint uVar2;
  int * piVar3;
  undefined * pvVar4;
  int iVar5;
  undefined4 uVar6;
  undefined * pvVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_out + 0x0);
  if ((REFG(int, 0x137104c) != 0) && (*((int *)GEN_TOP(((int)this + 0x1c))) != 0)) {
    if (param_1 == 0) {
      F_00447a10(this GEN_EDX_FWD);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x10))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG);
      uVar1 = F_00821e50();
      if (*((int *)GEN_TOP(((int)this + 0x1c))) != 0) {
        uVar1 = ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0x18))))
                          (*((undefined4 *)GEN_TOP(((int)this + 0x1c))),(int)this + 0x20,0,
                           *((undefined4 *)GEN_TOP(((int)this + 0x38))));
        *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
        return uVar1;
      }
    }
    else {
      pvVar7 = this;
      if (param_1 == 2) {
        uVar1 = F_00976940();
        piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 0x10)));
        uVar14 = 0;
        uVar12 = 1;
        uVar11 = 0;
        uVar10 = 5;
        uVar9 = 0;
        uVar8 = 1;
        uVar1 = uVar1 >> 10;
        uVar6 = 2;
        uVar13 = 0x17dd;
        pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG)));
        uVar1 = F_00460c80(pvVar4 GEN_EDX_ARG,uVar13,uVar1,uVar6);
        iVar5 = *piVar3;
      }
      else {
        uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x10))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG);
        if (*((int *)GEN_TOP((uVar1 + 600))) == 0) {
          uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((uVar1 + 0x34))) + 8))))(*((int * PTR32 *)GEN_TOP((uVar1 + 0x34))) GEN_EDX_ARG,((char *)REFP(0x108f868)));
          *((uint *)GEN_TOP((uVar1 + 600))) = uVar2;
        }
        piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((uVar1 + 600))) + 0x24))))(*((int * PTR32 *)GEN_TOP((uVar1 + 600))) GEN_EDX_ARG,0x17d6)))
        ;
        uVar13 = 0;
        pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 8))))(piVar3 GEN_EDX_ARG)));
        uVar1 = F_00cb0950(pvVar4 GEN_EDX_ARG,uVar13);
        piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 0x10)));
        iVar5 = *piVar3;
        uVar14 = 0;
        uVar12 = 1;
        uVar11 = 0;
        uVar10 = 5;
        uVar9 = 0;
        uVar8 = 1;
      }
      pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((iVar5 + 0x1c))))(piVar3)));
      uVar1 = F_00897360(pvVar4 GEN_EDX_ARG,uVar1,pvVar7,uVar8,uVar9,uVar10,uVar11,uVar12,uVar14);
      *((uint *)GEN_TOP(((int)this + 0x14))) = uVar1;
    }
  }
  return uVar1;
}

/* ref: FUN_00463410 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00463410(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x463410u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_FRAME_DECL_GS(0x14, 12, 4);
  undefined * this;
  undefined4 uVar1;
  uint uVar2;
  undefined * pvVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10));
  if (param_2 != '\0') {
    uVar2 = F_00a68280(&REFG(undefined1, 0x14ab070) GEN_EDX_FWD,0xffffffff,0);
    *((uint *)GEN_TOP((param_1 + 0xe8))) = uVar2 & 0xffff;
    *((uint *)GEN_TOP((param_1 + 0xec))) = (uint)REFG(undefined1, 0x14ab0d4);
    uVar2 = F_00ab1c90(*(undefined4 *)&REFG(undefined2, 0x1379c78));
    if (uVar2 != 0) {
      *((uint *)GEN_TOP((param_1 + 0xf0))) = (uint)*((ushort *)GEN_TOP((uVar2 + 0x20)));
    }
  }
  this = ((undefined *)GEN_TOP((param_1 + 0xf4)));
  F_00492c50(this GEN_EDX_ARG);
  uVar1 = *((undefined4 *)GEN_TOP((param_1 + 0xe8)));
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = uVar1;
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = &(*(undefined4 *)(gen_frame + 0x0));
  (*(char *)(gen_frame + 0x8)) = '\0';
  F_00493bc0(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x4)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x8)) != '\0')) && ((*(char *)(gen_frame + 0x8)) == '\x01')) {
    pvVar3 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x4))));
    *((int *)GEN_TOP(((int)pvVar3 + 0x54))) = *((int *)GEN_TOP(((int)pvVar3 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar3 + 0x54))) < 1) {
      F_0042c880(pvVar3 GEN_EDX_ARG);
      F_00406ad0(pvVar3);
    }
  }
  uVar1 = *((undefined4 *)GEN_TOP((param_1 + 0xec)));
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = uVar1;
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = &(*(undefined4 *)(gen_frame + 0x0));
  (*(char *)(gen_frame + 0x8)) = '\0';
  F_00493bc0(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x4)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x8)) != '\0')) && ((*(char *)(gen_frame + 0x8)) == '\x01')) {
    pvVar3 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x4))));
    *((int *)GEN_TOP(((int)pvVar3 + 0x54))) = *((int *)GEN_TOP(((int)pvVar3 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar3 + 0x54))) < 1) {
      F_0042c880(pvVar3 GEN_EDX_ARG);
      F_00406ad0(pvVar3);
    }
  }
  uVar1 = *((undefined4 *)GEN_TOP((param_1 + 0xf0)));
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = uVar1;
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = &(*(undefined4 *)(gen_frame + 0x0));
  (*(char *)(gen_frame + 0x8)) = '\0';
  F_00493bc0(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x4)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x8)) != '\0')) && ((*(char *)(gen_frame + 0x8)) == '\x01')) {
    pvVar3 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x4))));
    *((int *)GEN_TOP(((int)pvVar3 + 0x54))) = *((int *)GEN_TOP(((int)pvVar3 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar3 + 0x54))) < 1) {
      F_0042c880(pvVar3 GEN_EDX_ARG);
      F_00406ad0(pvVar3);
    }
  }
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = ((undefined4 *)GEN_TOP(0x0));
  (*(char *)(gen_frame + 0x8)) = -1;
  F_00490f90(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1 + 0x94);
  F_00493bc0(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x4)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x8)) != '\0')) && ((*(char *)(gen_frame + 0x8)) == '\x01')) {
    pvVar3 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x4))));
    *((int *)GEN_TOP(((int)pvVar3 + 0x54))) = *((int *)GEN_TOP(((int)pvVar3 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar3 + 0x54))) < 1) {
      F_0042c880(pvVar3 GEN_EDX_ARG);
      F_00406ad0(pvVar3);
    }
  }
  pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x10))) + 0x18))))(*((int * PTR32 *)GEN_TOP((param_1 + 0x10))) GEN_EDX_ARG)));
  uVar2 = F_0043bbc0(pvVar3 GEN_EDX_ARG,0x17dc,2,this,(int)pvVar3 + 0x334,(int)pvVar3 + 0x388);
  uVar2 = F_0042e430(((undefined *)GEN_TOP((param_1 + 0x10c))) GEN_EDX_ARG,uVar2);
  return uVar2;
}

/* ref: FUN_00463610 */
GEN_OWN GEN_FRAME uint F_00463610(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x463610u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  int * piVar1;
  undefined * this;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x18))))(piVar1 GEN_EDX_ARG)));
    if (param_1 == 0) {
      uVar2 = F_0043bf60(param_3,param_2);
      uVar2 = F_00460bd0(this GEN_EDX_ARG,0x7e9,uVar2);
      return uVar2;
    }
    if (param_1 == 1) {
      uVar2 = F_00460bd0(this GEN_EDX_ARG,0x7e5,param_2);
      return uVar2;
    }
    if (param_1 == 2) {
      if (param_3 < 0xe) {
        uVar2 = F_00460bd0(this GEN_EDX_ARG,0x7ea,param_3 * 1000000 + param_2);
        return uVar2;
      }
      uVar2 = F_00460bd0(this GEN_EDX_ARG,0x7ea,0);
      return uVar2;
    }
  }
  return 0x108ecf8;
}

/* ref: Client::UI::Info::InfoProxyCommonlist::vf9 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_004636b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(int param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x4636b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(int param_5 = (int)gen_a5;)
  GEN_FRAME_DECL_GS(0x20, 0, 4);
  uint * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int * piVar7;
  undefined * pvVar8;
  undefined * puVar9;
  int iVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined4 uVar13;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c));
  (*(int *)(gen_frame + 0x14)) = param_2;
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = this;
  (*(int *)(gen_frame + 0x8)) = param_5;
  uVar13 = *((undefined4 *)GEN_TOP((param_4 + 0xc)));
  uVar2 = *((undefined4 *)GEN_TOP((param_4 + 8)));
  (*(int *)(gen_frame + 0x10)) = param_3 * 5;
  uVar3 = *((undefined4 *)GEN_TOP((param_4 + 0x10)));
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = ((undefined *)GEN_TOP(0x0));
  uVar4 = F_007c9a80(uVar2,uVar13,uVar3,&(*(int *)(gen_frame + 0x0)),&(*(undefined * PTR32 *)(gen_frame + 0x4)));
  puVar1 = ((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + param_3 * 0x20)));
  if (*puVar1 != uVar4) {
    *puVar1 = uVar4;
    *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
  }
  if (*((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 4 + param_3 * 0x20))) != (uint)*((ushort *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + 0x22)))
     ) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 4 + param_3 * 0x20))) = (uint)*((ushort *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + 0x22)));
    *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
  }
  if (*((byte *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + 0x20))) == 0) {
    iVar5 = -1;
  }
  else {
    iVar5 = *((byte *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + 0x20))) + 62000;
  }
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 8 + param_3 * 0x20))) != iVar5) {
    *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 8 + param_3 * 0x20))) = iVar5;
    *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
  }
  if (*((byte *)GEN_TOP((param_4 + 0x16))) == 0) {
    iVar5 = -1;
  }
  else {
    iVar5 = *((byte *)GEN_TOP((param_4 + 0x16))) + 0xedc6;
  }
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0xc + param_3 * 0x20))) != iVar5) {
    *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0xc + param_3 * 0x20))) = iVar5;
    *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
  }
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x10 + param_3 * 0x20))) != (*(int *)(gen_frame + 0x0))) {
    *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x10 + param_3 * 0x20))) = (*(int *)(gen_frame + 0x0));
    *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
  }
  if (*((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x14 + param_3 * 0x20))) != (uint)*((byte *)GEN_TOP((param_4 + 0x18)))
     ) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x14 + param_3 * 0x20))) = (uint)*((byte *)GEN_TOP((param_4 + 0x18)));
    *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
  }
  if (*((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x18 + param_3 * 0x20))) != (uint)*((byte *)GEN_TOP((param_4 + 0x17)))
     ) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x18 + param_3 * 0x20))) = (uint)*((byte *)GEN_TOP((param_4 + 0x17)));
    *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x2c))))((*(undefined * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,(*(int *)(gen_frame + 0x8)));
  if (*((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x1c + param_3 * 0x20))) != uVar4) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x1c + param_3 * 0x20))) = uVar4;
    *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
  }
  if ((*((byte *)GEN_TOP((param_4 + 0x13))) & 1) == 0) {
    piVar7 = ((int *)GEN_TOP((*((int *)GEN_TOP(((*(int *)(gen_frame + 0x14)) + 0x20))) + (*(int *)(gen_frame + 0x10)) * 4)));
    if (param_4 + 0x1c != *piVar7) {
      *((undefined1 *)GEN_TOP(((*(int *)(gen_frame + 0x14)) + 0x1d))) = 1;
    }
    *piVar7 = param_4 + 0x1c;
    if (((uVar4 & 0x40) != 0) && (*((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 8 + param_3 * 0x20))) != 0xf24d)
       ) {
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 8 + param_3 * 0x20))) = 0xf24d;
      *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
    }
    uVar12 = 0;
    uVar13 = 1;
    uVar11 = 0;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x28))))((*(undefined * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,(*(int *)(gen_frame + 0x8)));
    F_00431250((*(int *)(gen_frame + 0x14)) GEN_EDX_ARG,(*(int *)(gen_frame + 0x10)) + 1,uVar4,uVar11,uVar13,uVar12);
    iVar10 = (*(int *)(gen_frame + 0x14));
    iVar5 = (*(int *)(gen_frame + 0x10));
  }
  else {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0xc)) + 4) + 0x18))))(*(int * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0xc)) + 4) GEN_EDX_ARG);
    if (*((int *)GEN_TOP((uVar4 + 600))) == 0) {
      uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((uVar4 + 0x34))) + 8))))(*((int * PTR32 *)GEN_TOP((uVar4 + 0x34))) GEN_EDX_ARG,((char *)REFP(0x108f868)));
      *((uint *)GEN_TOP((uVar4 + 600))) = uVar6;
    }
    piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((uVar4 + 600))) + 0x24))))(*((int * PTR32 *)GEN_TOP((uVar4 + 600))) GEN_EDX_ARG,0x3c4)));
    uVar13 = 0;
    pvVar8 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 8))))(piVar7 GEN_EDX_ARG)));
    uVar4 = F_00cb0950(pvVar8 GEN_EDX_ARG,uVar13);
    iVar10 = (*(int *)(gen_frame + 0x14));
    iVar5 = (*(int *)(gen_frame + 0x10));
    if (uVar4 != *((uint *)GEN_TOP((*((int *)GEN_TOP(((*(int *)(gen_frame + 0x14)) + 0x20))) + (*(int *)(gen_frame + 0x10)) * 4)))) {
      *((undefined1 *)GEN_TOP(((*(int *)(gen_frame + 0x14)) + 0x1d))) = 1;
    }
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((*(int *)(gen_frame + 0x14)) + 0x20))) + (*(int *)(gen_frame + 0x10)) * 4))) = uVar4;
    F_00431250((*(int *)(gen_frame + 0x14)) GEN_EDX_ARG,(*(int *)(gen_frame + 0x10)) + 1,&REFG(undefined, 0x108d03a),0,1,0);
  }
  if (param_4 + 0x3c != *((int *)GEN_TOP((*((int *)GEN_TOP((iVar10 + 0x20))) + 8 + iVar5 * 4)))) {
    *((undefined1 *)GEN_TOP((iVar10 + 0x1d))) = 1;
  }
  *((int *)GEN_TOP((*((int *)GEN_TOP((iVar10 + 0x20))) + 8 + iVar5 * 4))) = param_4 + 0x3c;
  puVar9 = (*(undefined * PTR32 *)(gen_frame + 0x4));
  if ((*(undefined * PTR32 *)(gen_frame + 0x4)) == ((undefined *)GEN_TOP(0x0))) {
    puVar9 = &REFG(undefined, 0x108d03b);
  }
  F_00431250(iVar10 GEN_EDX_ARG,iVar5 + 3,puVar9,0,1,0);
  if (*((byte *)GEN_TOP((param_4 + 0x16))) == 0) {
    puVar9 = &REFG(undefined, 0x108d04d);
  }
  else {
    uVar4 = (uint)*((byte *)GEN_TOP((param_4 + 0x16)));
    uVar13 = 0x7f1;
    pvVar8 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0xc)) + 4) + 0x18))))(*(int * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0xc)) + 4) GEN_EDX_ARG)));
    puVar9 = ((undefined *)GEN_TOP(F_00461bb0(pvVar8 GEN_EDX_ARG,uVar13,uVar4)));
  }
  uVar4 = F_00431250(iVar10 GEN_EDX_ARG,iVar5 + 4,puVar9,0,1,0);
  return uVar4;
}

/* ref: Client::UI::Info::InfoProxyDetail::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00463960(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x463960u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  undefined * this_00;
  longlong lVar1;
  ulonglong uVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  undefined * pIVar6;
  undefined * pvVar7;
  uint uVar8;
  undefined * puVar9;
  int iVar10;
  uint uVar11;
  ushort * puVar12;
  undefined1 uVar13;
  undefined4 uVar14;
  undefined1 uVar15;
  undefined * pIVar16;
  undefined4 uVar17;
  uint local_c;
  
  piVar3 = (*(int * PTR32 *)&gen_args[0]);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x24))))(piVar4 GEN_EDX_ARG,9);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
  pIVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x28))))(piVar4 GEN_EDX_ARG,8)));
  if ((((uVar5 != 0) && (pIVar6 != ((undefined *)GEN_TOP(0x0)))) && (*(*(int * PTR32 *)&gen_args[0]) == *(int *)(this + 0x10)))
     && ((*(int * PTR32 *)&gen_args[0])[1] == *(int *)(this + 0x14))) {
    (*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[0]) + 3)))) = *((byte *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0x9c)));
    if (3 < (*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[0]) + 3))))) {
      (*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[0]) + 3)))) = 0;
    }
    uVar17 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0x98)));
    iVar10 = (int)piVar3 + 0x21;
    this_00 = this + 0xf0;
    pvVar7 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x18))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
    uVar8 = F_004470e0(pvVar7 GEN_EDX_ARG,iVar10);
    F_0042e430(this_00 GEN_EDX_ARG,uVar8);
    pIVar16 = this_00;
    pvVar7 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x18))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
    F_0043be20(pvVar7 GEN_EDX_ARG,pIVar16);
    uVar15 = 0;
    uVar14 = 1;
    uVar13 = 0;
    uVar8 = F_0042a990(this_00 GEN_EDX_ARG);
    F_00431250(pIVar6 GEN_EDX_ARG,0x40,uVar8,uVar13,uVar14,uVar15);
    F_00431250(pIVar6 GEN_EDX_ARG,0x3f,(int)piVar3 + 0xe2,0,1,0);
    if ((*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[0]) + 3)))) == 0) {
      puVar9 = &REFG(undefined, 0x108d04f);
    }
    else {
      uVar8 = (uint)(*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[0]) + 3))));
      uVar11 = (uint)*((byte *)GEN_TOP((uVar8 + 0xf8 + (int)piVar3)));
      uVar14 = 0x38a;
      pvVar7 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x18))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
      puVar9 = ((undefined *)GEN_TOP(F_00461d60(pvVar7 GEN_EDX_ARG,uVar14,uVar8,uVar11,uVar17)));
    }
    F_00431250(pIVar6 GEN_EDX_ARG,0x41,puVar9,0,1,0);
    if ((*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[0]) + 3)))) == 0) {
      iVar10 = -1;
    }
    else {
      uVar8 = (uint)*((byte *)GEN_TOP(((*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[0]) + 3)))) + 0xf8 + (int)piVar3)));
      if ((*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[0]) + 3)))) != 1) {
        if ((*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[0]) + 3)))) == 2) {
          uVar8 = uVar8 + 0x32;
        }
        else if ((*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[0]) + 3)))) == 3) {
          uVar8 = uVar8 + 100;
        }
      }
      iVar10 = uVar8 + 0x10040;
    }
    if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0xa0))) != iVar10) {
      *((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0xa0))) = iVar10;
      *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
    }
    iVar10 = (int)(*(ulonglong *)(piVar3 + 6) >> 0x20);
    if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0xa4))) != iVar10) {
      *((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0xa4))) = iVar10;
      *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
    }
    if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0xa8))) != piVar3[6]) {
      *((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0xa8))) = piVar3[6];
      *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
    }
    local_c = 0;
    puVar12 = ((ushort *)GEN_TOP(((int)piVar3 + 0xfe)));
    do {
      uVar8 = (uint)*puVar12;
      uVar2 = (ulonglong)(byte)((byte)puVar12[-1] - 1);
      lVar1 = ((ulonglong)((uVar2 < 0x40) ? ((1L << uVar2)) : 0));
      if (((uint)lVar1 & piVar3[4]) != 0 || ((uint)((ulonglong)lVar1 >> 0x20) & piVar3[5]) != 0) {
        uVar8 = uVar8 | 0x10000;
      }
      uVar11 = (byte)puVar12[-1] + 0x2a;
      if (0x48 < uVar11) break;
      if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + uVar11 * 4))) != uVar8) {
        *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + uVar11 * 4))) = uVar8;
        *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
      }
      uVar8 = (uint)puVar12[2];
      uVar2 = (ulonglong)(byte)((byte)puVar12[1] - 1);
      lVar1 = ((ulonglong)((uVar2 < 0x40) ? ((1L << uVar2)) : 0));
      if (((uint)lVar1 & piVar3[4]) != 0 || ((uint)((ulonglong)lVar1 >> 0x20) & piVar3[5]) != 0) {
        uVar8 = uVar8 | 0x10000;
      }
      uVar11 = (byte)puVar12[1] + 0x2a;
      if (0x48 < uVar11) break;
      if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + uVar11 * 4))) != uVar8) {
        *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + uVar11 * 4))) = uVar8;
        *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
      }
      uVar8 = (uint)puVar12[4];
      uVar2 = (ulonglong)(byte)((byte)puVar12[3] - 1);
      lVar1 = ((ulonglong)((uVar2 < 0x40) ? ((1L << uVar2)) : 0));
      if (((uint)lVar1 & piVar3[4]) != 0 || ((uint)((ulonglong)lVar1 >> 0x20) & piVar3[5]) != 0) {
        uVar8 = uVar8 | 0x10000;
      }
      uVar11 = (byte)puVar12[3] + 0x2a;
      if (0x48 < uVar11) break;
      if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + uVar11 * 4))) != uVar8) {
        *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + uVar11 * 4))) = uVar8;
        *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
      }
      uVar8 = (uint)puVar12[6];
      uVar2 = (ulonglong)(byte)((byte)puVar12[5] - 1);
      lVar1 = ((ulonglong)((uVar2 < 0x40) ? ((1L << uVar2)) : 0));
      if (((uint)lVar1 & piVar3[4]) != 0 || ((uint)((ulonglong)lVar1 >> 0x20) & piVar3[5]) != 0) {
        uVar8 = uVar8 | 0x10000;
      }
      uVar11 = (byte)puVar12[5] + 0x2a;
      if (0x48 < uVar11) break;
      if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + uVar11 * 4))) != uVar8) {
        *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + uVar11 * 4))) = uVar8;
        *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
      }
      local_c = local_c + 4;
      puVar12 = puVar12 + 8;
    } while (local_c < 0x1c);
    *(undefined4 *)(this + 0x10) = 0;
    *(undefined4 *)(this + 0x14) = 0;
    pIVar6 = this;
  }
  return (uint)pIVar6;
}

/* ref: FUN_00463c90 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00463c90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x463c90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined * this_00;
  uint uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x28))))(piVar1 GEN_EDX_ARG,0x2c);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x24))))(piVar1 GEN_EDX_ARG,0x27);
  uVar4 = uVar3;
  if ((uVar2 != 0) && (uVar3 != 0)) {
    uVar5 = (uint)*((ushort *)GEN_TOP(((int)this + 0x42)));
    uVar4 = (uint)*((ushort *)GEN_TOP(((int)this + 0x40)));
    uVar9 = 0;
    uVar8 = 1;
    uVar7 = 0;
    uVar6 = 0xa05;
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    uVar4 = F_00461c60(this_00 GEN_EDX_ARG,uVar6,uVar4,uVar5);
    F_00431250(uVar2 GEN_EDX_ARG,3,uVar4,uVar7,uVar8,uVar9);
    uVar4 = (uint)*((ushort *)GEN_TOP(((int)this + 0x42)));
    if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) + 0x1904))) != uVar4) {
      *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) + 0x1904))) = uVar4;
      *((undefined1 *)GEN_TOP((uVar3 + 0x1d))) = 1;
    }
  }
  return uVar4;
}

/* ref: Client::UI::Info::InfoProxyFreeCompanyMember::vf9 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00463d20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x463d20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  uint uVar1;
  
  F_004636b0((undefined *)this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5);
  uVar1 = *((uint *)GEN_TOP((param_4 + 0x10))) >> 0xc & 0xff;
  if (*((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x1910 + param_3 * 4))) != uVar1) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x1910 + param_3 * 4))) = uVar1;
    *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
  }
  return uVar1;
}

/* ref: Client::UI::Info::InfoProxyFreeCompanyMember::vf10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00463d70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x463d70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  undefined * pvVar2;
  uint uVar3;
  uint * puVar4;
  uint uVar5;
  ulonglong uVar6;
  
  if (((*((uint *)GEN_TOP((param_1 + 0x1c))) & 8) != 0) || ((*((uint *)GEN_TOP((param_1 + 0x18))) & 0x800) != 0)) {
    uVar3 = F_00ab1c90((uint)*((ushort *)GEN_TOP((param_1 + 10))));
    if (uVar3 != 0) {
      puVar4 = ((uint *)GEN_TOP(F_00ab2750((uint)*((ushort *)GEN_TOP((uVar3 + 0x20))))));
      if (puVar4 != ((uint *)GEN_TOP(0x0))) {
        return (*puVar4 & 0xffffff) + (int)puVar4;
      }
    }
    return 0x108d04e;
  }
  pvVar2 = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
    uVar6 = F_0046ff40();
    uVar3 = (uint)(uVar6 / 1000);
  }
  else {
    uVar3 = F_00975680(pvVar2 GEN_EDX_ARG);
  }
  uVar1 = *((uint *)GEN_TOP((param_1 + 8)));
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x18))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
  if (uVar3 < uVar1) {
    uVar3 = F_00462440(pvVar2 GEN_EDX_ARG,uVar1,0x1c);
    uVar3 = F_0042a990(uVar3 GEN_EDX_ARG);
    return uVar3;
  }
  uVar5 = uVar3 - uVar1;
  if (uVar5 < 0x708) {
    uVar3 = F_00462630(pvVar2 GEN_EDX_ARG,uVar5 / 0x3c,0x28);
    uVar3 = F_0042a990(uVar3 GEN_EDX_ARG);
    return uVar3;
  }
  if (uVar5 < 0xe10) {
    uVar3 = F_00462630(pvVar2 GEN_EDX_ARG,1,0x29);
    uVar3 = F_0042a990(uVar3 GEN_EDX_ARG);
    return uVar3;
  }
  uVar3 = F_00462750(pvVar2 GEN_EDX_ARG,uVar1,uVar3,1);
  uVar3 = F_0042a990(uVar3 GEN_EDX_ARG);
  return uVar3;
}

/* ref: Client::UI::Info::InfoProxyItemSearch::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00463ea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x463ea0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined * pIVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  uint * puVar5;
  undefined * pvVar6;
  undefined * puVar7;
  undefined1 IVar8;
  uint uVar9;
  int iVar10;
  undefined4 * puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 uVar14;
  undefined4 uVar15;
  undefined1 uVar16;
  int local_14;
  int local_c;
  
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x24))))(piVar2 GEN_EDX_ARG,0x24);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x28))))(piVar2 GEN_EDX_ARG,0x21);
  if ((uVar3 != 0) && (uVar4 != 0)) {
    local_c = *(int *)(this + 8) * 5 + 0xcb;
    if (param_2 != 0) {
      puVar11 = ((undefined4 *)GEN_TOP((param_1 + 0x24)));
      local_14 = param_2;
      param_1 = local_c * 4 + 0xc;
      param_2 = *(int *)(this + 8) * 0x14 + 0x330;
      do {
        pIVar1 = this + *(int *)(this + 8) * 0x40 + 0x18;
        *(undefined4 *)pIVar1 = puVar11[-9];
        *(undefined4 *)(pIVar1 + 4) = puVar11[-8];
        *(undefined4 *)(pIVar1 + 8) = puVar11[-7];
        *(undefined4 *)(pIVar1 + 0xc) = puVar11[-6];
        *(undefined4 *)(pIVar1 + 0x18) = puVar11[-1];
        *(undefined4 *)(pIVar1 + 0x1c) = *puVar11;
        *(undefined4 *)(pIVar1 + 0x20) = puVar11[1];
        *(undefined4 *)(pIVar1 + 0x24) = puVar11[2];
        *(undefined2 *)(pIVar1 + 0x28) = *((undefined2 *)GEN_TOP(((int)puVar11 + 0x12)));
        *(undefined2 *)(pIVar1 + 0x2a) = *(undefined2 *)(puVar11 + 5);
        *(undefined2 *)(pIVar1 + 0x2c) = *((undefined2 *)GEN_TOP(((int)puVar11 + 0x16)));
        pIVar1[0x38] = *(undefined *)(puVar11 + 0x12);
        pIVar1[0x3a] = *((undefined *)GEN_TOP(((int)puVar11 + 0x4a)));
        *(undefined4 *)(pIVar1 + 0x10) = puVar11[-3];
        *(undefined4 *)(pIVar1 + 0x14) = puVar11[-2];
        IVar8 = *((undefined *)GEN_TOP(((int)puVar11 + 0x49)));
        pIVar1[0x39] = IVar8;
        if (5 < (byte)IVar8) {
          pIVar1[0x39] = (undefined1)0x5;
        }
        IVar8 = (undefined1)0x0;
        if (pIVar1[0x39] != (undefined1)0x0) {
          do {
            uVar9 = (uint)(byte)IVar8;
            IVar8 = (undefined1)((char)IVar8 + 1);
            *(undefined2 *)(pIVar1 + uVar9 * 2 + 0x2e) =
                 *((undefined2 *)GEN_TOP(((int)puVar11 + uVar9 * 2 + 0x18)));
          } while ((byte)IVar8 < (byte)pIVar1[0x39]);
        }
        pIVar1[0x3b] = *((undefined *)GEN_TOP(((int)puVar11 + 0x4b)));
        puVar5 = ((uint *)GEN_TOP(F_00ab3990((uint)*((byte *)GEN_TOP(((int)puVar11 + 0x4a))))));
        piVar2 = ((int *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) - 8 + param_2)));
        if (*piVar2 != puVar11[-1]) {
          *piVar2 = puVar11[-1];
          *((undefined1 *)GEN_TOP((uVar3 + 0x1d))) = 1;
        }
        if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) - 4 + param_2))) != puVar11[1]) {
          *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) - 4 + param_2))) = puVar11[1];
          *((undefined1 *)GEN_TOP((uVar3 + 0x1d))) = 1;
        }
        if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) + param_2))) != (uint)*(byte *)(puVar11 + 0x12)) {
          *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) + param_2))) = (uint)*(byte *)(puVar11 + 0x12);
          *((undefined1 *)GEN_TOP((uVar3 + 0x1d))) = 1;
        }
        if (puVar5 == ((uint *)GEN_TOP(0x0))) {
          uVar9 = 0xffffffff;
        }
        else {
          uVar9 = puVar5[1];
        }
        if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) + 4 + param_2))) != uVar9) {
          *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) + 4 + param_2))) = uVar9;
          *((undefined1 *)GEN_TOP((uVar3 + 0x1d))) = 1;
        }
        if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) + 8 + param_2))) != (uint)*((byte *)GEN_TOP(((int)puVar11 + 0x49))))
        {
          *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) + 8 + param_2))) = (uint)*((byte *)GEN_TOP(((int)puVar11 + 0x49)));
          *((undefined1 *)GEN_TOP((uVar3 + 0x1d))) = 1;
        }
        uVar13 = puVar11[-1];
        uVar16 = 0;
        uVar15 = 1;
        uVar14 = 0;
        uVar12 = 0x7c8;
        pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x18))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
        uVar9 = F_00461bb0(pvVar6 GEN_EDX_ARG,uVar12,uVar13);
        F_00431250(uVar4 GEN_EDX_ARG,local_c,uVar9,uVar14,uVar15,uVar16);
        iVar10 = puVar11[1] * puVar11[-1];
        uVar16 = 0;
        uVar12 = 1;
        uVar14 = 0;
        uVar13 = 0x7c9;
        pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x18))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
        uVar9 = F_00461bb0(pvVar6 GEN_EDX_ARG,uVar13,iVar10);
        F_00431250(uVar4 GEN_EDX_ARG,local_c + 1,uVar9,uVar14,uVar12,uVar16);
        uVar13 = puVar11[1];
        uVar16 = 0;
        uVar15 = 1;
        uVar14 = 0;
        uVar12 = 0x12;
        pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x18))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
        uVar9 = F_00461bb0(pvVar6 GEN_EDX_ARG,uVar12,uVar13);
        F_00431250(uVar4 GEN_EDX_ARG,local_c + 2,uVar9,uVar14,uVar15,uVar16);
        if (puVar5 == ((uint *)GEN_TOP(0x0))) {
          puVar7 = &REFG(undefined, 0x108d0c7);
        }
        else {
          puVar7 = ((undefined *)GEN_TOP(((*puVar5 & 0xffffff) + (int)puVar5)));
        }
        if (puVar7 != *((undefined * PTR32 *)GEN_TOP((param_1 + *((int *)GEN_TOP((uVar4 + 0x20))))))) {
          *((undefined * PTR32 *)GEN_TOP((param_1 + *((int *)GEN_TOP((uVar4 + 0x20)))))) = puVar7;
          *((undefined1 *)GEN_TOP((uVar4 + 0x1d))) = 1;
        }
        F_00431250(uVar4 GEN_EDX_ARG,local_c + 4,puVar11 + 10,0,1,0);
        local_c = local_c + 5;
        param_2 = param_2 + 0x14;
        param_1 = param_1 + 0x14;
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        puVar11 = puVar11 + 0x1c;
        local_14 = local_14 - 1;
      } while (local_14 != 0);
    }
    uVar4 = *(uint *)(this + 0x1918);
    if (*(uint *)(this + 8) < *(uint *)(this + 0x1918)) {
      uVar4 = *(uint *)(this + 8);
    }
    *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) + 0x324))) = uVar4;
    *((undefined1 *)GEN_TOP((uVar3 + 0x1d))) = 1;
  }
  return uVar4;
}

/* ref: FUN_00464170 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00464170(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(byte param_5, unsigned int gen_a4), GEN_P(uint param_6, unsigned int gen_a5))
{
  GEN_ENTER(0x464170u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(byte param_5 = (byte)gen_a4;)
  GEN_PIN(uint param_6 = (uint)gen_a5;)
  GEN_FRAME_DECL(0xc38, 8);
  byte bVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined * pvVar7;
  undefined3 extraout_var = 0;
  undefined1 uVar8;
  undefined4 uVar9;
  undefined1 uVar10;
  undefined4 uVar11;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_1[1])) + 0x1c))))(((int *)GEN_TOP(param_1[1])) GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x24))))(piVar2 GEN_EDX_ARG,0x24);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_1[1])) + 0x1c))))(((int *)GEN_TOP(param_1[1])) GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x28))))(piVar2 GEN_EDX_ARG,0x21);
  if (param_6 == 0) {
    if ((uVar3 != 0) && (uVar4 != 0)) {
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) + 0x324))) = 0;
      *((undefined1 *)GEN_TOP((uVar3 + 0x1d))) = 1;
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_1[1])) + 0x18))))(((int *)GEN_TOP(param_1[1])) GEN_EDX_ARG);
      if (*((int *)GEN_TOP((uVar3 + 600))) == 0) {
        uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((uVar3 + 0x34))) + 8))))(*((int * PTR32 *)GEN_TOP((uVar3 + 0x34))) GEN_EDX_ARG,((char *)REFP(0x108f868)));
        *((uint *)GEN_TOP((uVar3 + 600))) = uVar5;
      }
      piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((uVar3 + 600))) + 0x24))))(*((int * PTR32 *)GEN_TOP((uVar3 + 600))) GEN_EDX_ARG,0x7a7)));
      uVar11 = 0;
      pvVar7 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG)));
      uVar3 = F_00cb0950(pvVar7 GEN_EDX_ARG,uVar11);
      if (uVar3 != *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 0x324)))) {
        *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 0x324))) = uVar3;
        *((undefined1 *)GEN_TOP((uVar4 + 0x1d))) = 1;
      }
      uVar3 = (uint)param_5;
      uVar10 = 0;
      uVar9 = 1;
      uVar8 = 0;
      uVar11 = 0x7a6;
      pvVar7 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_1[1])) + 0x18))))(((int *)GEN_TOP(param_1[1])) GEN_EDX_ARG)));
      uVar3 = F_00461bb0(pvVar7 GEN_EDX_ARG,uVar11,uVar3);
      F_00431250(uVar4 GEN_EDX_ARG,0xca,uVar3,uVar8,uVar9,uVar10);
    }
  }
  else if ((((0x233c < param_6) && (param_6 < 0x233f)) && (uVar3 != 0)) && (uVar4 != 0)) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) + 0x324))) = 0;
    *((undefined1 *)GEN_TOP((uVar3 + 0x1d))) = 1;
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_1[1])) + 0x18))))(((int *)GEN_TOP(param_1[1])) GEN_EDX_ARG);
    if (*((int *)GEN_TOP((uVar5 + 600))) == 0) {
      uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((uVar5 + 0x34))) + 8))))(*((int * PTR32 *)GEN_TOP((uVar5 + 0x34))) GEN_EDX_ARG,((char *)REFP(0x108f868)));
      *((uint *)GEN_TOP((uVar5 + 600))) = uVar6;
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((uVar5 + 600))) + 0x24))))(*((int * PTR32 *)GEN_TOP((uVar5 + 600))) GEN_EDX_ARG,0x7ce)));
    uVar11 = 0;
    pvVar7 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG)));
    uVar5 = F_00cb0950(pvVar7 GEN_EDX_ARG,uVar11);
    if (uVar5 != *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 0x324)))) {
      *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 0x324))) = uVar5;
      *((undefined1 *)GEN_TOP((uVar4 + 0x1d))) = 1;
    }
    F_00431250(uVar4 GEN_EDX_ARG,0xca,&REFG(undefined, 0x108d0d6),0,1,0);
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) + 0x968))) = 0;
    *((undefined1 *)GEN_TOP((uVar3 + 0x1d))) = 1;
  }
  param_1[0x646] = (uint)param_5;
  if (param_5 == 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xc))))(param_1 GEN_EDX_ARG);
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x14))))(param_1 GEN_EDX_ARG);
  }
  else {
    pvVar7 = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    uVar3 = 0;
    if (pvVar7 != ((undefined *)GEN_TOP(0x0))) {
      *((char *)GEN_TOP(((int)param_1 + 0xd))) = (char)param_1[3];
      *(char *)(param_1 + 3) = (char)param_1[3] + '\x01';
      uVar8 = *((undefined1 *)GEN_TOP(((int)param_1 + 0xd)));
      (*(undefined4 *)(gen_frame + 0x0)) = 0x105;
      (*(undefined4 *)(gen_frame + 0x4)) = 0x18;
      (*(undefined1 *)(gen_frame + 0x18)) = 0;
      (*(undefined1 *)(gen_frame + 0x19)) = uVar8;
      bVar1 = F_00974da0(pvVar7 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),0,0);
      uVar3 = CONCAT31(extraout_var,bVar1);
    }
  }
  return uVar3;
}

/* ref: FUN_00464400 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00464400(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x464400u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  undefined * pvVar4;
  uint uVar5;
  int iVar6;
  byte * pbVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 uVar12;
  uint local_18;
  int local_10;
  int local_8;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x24))))(piVar1 GEN_EDX_ARG,0x24);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x28))))(piVar1 GEN_EDX_ARG,0x21);
  if ((uVar2 != 0) && (uVar3 != 0)) {
    local_10 = 0;
    local_18 = 0;
    if (param_3 != 0) {
      local_8 = 0x2c0;
      iVar6 = 0x974;
      pbVar7 = ((byte *)GEN_TOP((param_2 + 0x10)));
      do {
        if (*(int *)(pbVar7 - 0x10) == 0) break;
        if (*((int *)GEN_TOP((iVar6 - 8 + *((int *)GEN_TOP((uVar2 + 0x20)))))) != *(int *)(pbVar7 - 0xc)) {
          *((int *)GEN_TOP((iVar6 - 8 + *((int *)GEN_TOP((uVar2 + 0x20)))))) = *(int *)(pbVar7 - 0xc);
          *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
        }
        if (*((uint *)GEN_TOP((iVar6 - 4 + *((int *)GEN_TOP((uVar2 + 0x20)))))) != (uint)pbVar7[1]) {
          *((uint *)GEN_TOP((iVar6 - 4 + *((int *)GEN_TOP((uVar2 + 0x20)))))) = (uint)pbVar7[1];
          *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
        }
        if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + iVar6))) != (uint)*pbVar7) {
          *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + iVar6))) = (uint)*pbVar7;
          *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
        }
        if (*((int *)GEN_TOP((iVar6 + 4 + *((int *)GEN_TOP((uVar2 + 0x20)))))) != *(int *)(pbVar7 - 8)) {
          *((int *)GEN_TOP((iVar6 + 4 + *((int *)GEN_TOP((uVar2 + 0x20)))))) = *(int *)(pbVar7 - 8);
          *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
        }
        if (*((int *)GEN_TOP((iVar6 + 8 + *((int *)GEN_TOP((uVar2 + 0x20)))))) != *(int *)(pbVar7 - 0x10)) {
          *((int *)GEN_TOP((iVar6 + 8 + *((int *)GEN_TOP((uVar2 + 0x20)))))) = *(int *)(pbVar7 - 0x10);
          *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
        }
        uVar11 = *(undefined4 *)(pbVar7 - 0xc);
        uVar12 = 0;
        uVar10 = 1;
        uVar9 = 0;
        uVar8 = 0x7c8;
        pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_ARG)));
        uVar5 = F_00461bb0(pvVar4 GEN_EDX_ARG,uVar8,uVar11);
        F_00431250(uVar3 GEN_EDX_ARG,local_8 - 1,uVar5,uVar9,uVar10,uVar12);
        uVar12 = 0;
        uVar11 = 1;
        uVar9 = 0;
        if (param_4 == '\0') {
          uVar5 = F_00560910(*(undefined4 *)(pbVar7 - 4));
        }
        else {
          uVar8 = *(undefined4 *)(pbVar7 - 4);
          uVar10 = 0x12;
          uVar9 = 0;
          uVar12 = 0;
          pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_ARG)));
          uVar5 = F_00461bb0(pvVar4 GEN_EDX_ARG,uVar10,uVar8);
        }
        F_00431250(uVar3 GEN_EDX_ARG,local_8,uVar5,uVar9,uVar11,uVar12);
        F_00431250(uVar3 GEN_EDX_ARG,local_8 + 1,pbVar7 + 2,0,1,0);
        local_8 = local_8 + 5;
        local_10 = local_10 + 1;
        local_18 = local_18 + 1;
        iVar6 = iVar6 + 0x18;
        pbVar7 = pbVar7 + 0x34;
      } while (local_18 < param_3);
    }
    uVar3 = *((uint *)GEN_TOP((uVar2 + 0x20)));
    *((int *)GEN_TOP((uVar3 + 0x968))) = local_10;
    *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
  }
  return uVar3;
}

/* ref: FUN_004645b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004645b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4645b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint uVar1;
  undefined * this_00;
  undefined4 uVar2;
  
  uVar1 = param_2;
  if (param_2 < 0x15) {
    F_00464400(this GEN_EDX_FWD,param_1,param_2,0);
    uVar2 = 0x3c;
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x48))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
    this_00 = ((undefined *)GEN_TOP(F_00763050(uVar1 GEN_EDX_ARG,uVar2)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_007df2a0(this_00 GEN_EDX_ARG);
    }
    uVar2 = 0x37;
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x48))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
    uVar1 = F_00763050(uVar1 GEN_EDX_ARG,uVar2);
    if (uVar1 != 0) {
      F_00775af0(uVar1 GEN_EDX_ARG);
    }
  }
  return uVar1;
}

/* ref: Client::UI::Info::InfoProxyLetter::vf1 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00464610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x464610u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_FRAME_DECL_GS(0x78, 8, 4);
  int * piVar1;
  uint uVar2;
  uint uVar3;
  undefined * pvVar4;
  uint uVar5;
  uint uVar6;
  undefined * pIVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined * pIVar11;
  char cVar12;
  ulonglong uVar13;
  undefined1 uVar14;
  undefined4 uVar15;
  undefined1 uVar16;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x70)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x74));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x24))))(piVar1 GEN_EDX_ARG,0x12);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x28))))(piVar1 GEN_EDX_ARG,0x10);
  if ((uVar2 != 0) && (uVar3 != 0)) {
    (*(int * PTR32 *)(gen_frame + 0x8)) = param_1;
    (*(uint *)(gen_frame + 0x0)) = 0;
    if (param_2 != 0) {
      do {
        if (*(*(int * PTR32 *)(gen_frame + 0x8)) == 0 && (*(int * PTR32 *)(gen_frame + 0x8))[1] == 0) break;
        piVar1 = (*(int * PTR32 *)(gen_frame + 0x8));
        pIVar7 = this + *(int *)(this + 8) * 0xa0 + 0x20;
        for (iVar8 = 0x28; iVar8 != 0; iVar8 = iVar8 - 1) {
          *(int *)pIVar7 = *piVar1;
          piVar1 = piVar1 + 1;
          pIVar7 = pIVar7 + 4;
        }
        iVar8 = *(int *)(this + 8) * 0xa0;
        cVar12 = *(int *)(this + iVar8 + 0x58) != 0;
        if (*(int *)(this + iVar8 + 0x2c) != 0) {
          cVar12 = cVar12 + '\x01';
        }
        if (*(int *)(this + iVar8 + 0x34) != 0) {
          cVar12 = cVar12 + '\x01';
        }
        if (*(int *)(this + iVar8 + 0x3c) != 0) {
          cVar12 = cVar12 + '\x01';
        }
        if (*(int *)(this + iVar8 + 0x44) != 0) {
          cVar12 = cVar12 + '\x01';
        }
        if (*(int *)(this + iVar8 + 0x4c) != 0) {
          cVar12 = cVar12 + '\x01';
        }
        F_00431250(uVar3 GEN_EDX_ARG,*(int *)(this + 8),this + iVar8 + 0x5f,0,1,0);
        pvVar4 = ((undefined *)GEN_TOP(F_00424810(REFG(int, 0x137104c) GEN_EDX_ARG)));
        if (pvVar4 == ((undefined *)GEN_TOP(0x0))) {
          uVar13 = F_0046ff40();
          uVar5 = (uint)(uVar13 / 1000);
        }
        else {
          uVar5 = F_00975680(pvVar4 GEN_EDX_ARG);
        }
        uVar6 = *(uint *)(this + iVar8 + 0x28);
        pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x18))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
        if (uVar5 < uVar6) {
          uVar5 = F_00462440(pvVar4 GEN_EDX_ARG,uVar6,0x1c);
        }
        else {
          uVar10 = uVar5 - uVar6;
          if (uVar10 < 0x708) {
            uVar5 = F_00462630(pvVar4 GEN_EDX_ARG,uVar10 / 0x3c,0x28);
          }
          else if (uVar10 < 0xe10) {
            uVar5 = F_00462630(pvVar4 GEN_EDX_ARG,1,0x29);
          }
          else {
            uVar5 = F_00462750(pvVar4 GEN_EDX_ARG,uVar6,uVar5,1);
          }
        }
        iVar9 = *(int *)(this + 8);
        uVar16 = 0;
        uVar15 = 1;
        uVar14 = 0;
        uVar5 = F_0042a990(uVar5 GEN_EDX_ARG);
        F_00431250(uVar3 GEN_EDX_ARG,iVar9 + 0x82,uVar5,uVar14,uVar15,uVar16);
        pIVar7 = this + 0x5164;
        F_0042e430(pIVar7 GEN_EDX_ARG,this + iVar8 + 0x7f);
        uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x18))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG);
        uVar6 = F_00414500(*((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x10))) GEN_EDX_ARG,0x14b);
        if (*((int *)GEN_TOP((uVar6 + 0x14))) != 0) {
          if (uVar5 == 0) {
            iVar9 = 0;
          }
          else {
            iVar9 = uVar5 + 0x1ac;
          }
          uVar5 = F_00a27410(((undefined *)GEN_TOP((uVar5 + 0x1b8))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1c)),pIVar7,iVar9,0,0xffffffff);
          F_0042ccf0(pIVar7 GEN_EDX_ARG,uVar5);
          F_0042c880(((undefined1 *)(gen_frame + 0x1c)) GEN_EDX_ARG);
        }
        pIVar7 = ((undefined *)GEN_TOP(F_0042a990(pIVar7 GEN_EDX_ARG)));
        pIVar11 = this + iVar8 + 0x7f;
        for (iVar9 = 0xf; iVar9 != 0; iVar9 = iVar9 - 1) {
          *(undefined4 *)pIVar11 = *(undefined4 *)pIVar7;
          pIVar7 = pIVar7 + 4;
          pIVar11 = pIVar11 + 4;
        }
        uVar16 = 0;
        uVar15 = 1;
        *pIVar11 = *pIVar7;
        pIVar7 = this + iVar8 + 0x7f;
        uVar14 = 0;
        pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x18))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
        uVar5 = F_004470e0(pvVar4 GEN_EDX_ARG,pIVar7);
        F_00431250(uVar3 GEN_EDX_ARG,*(int *)(this + 8) + 0x104,uVar5,uVar14,uVar15,uVar16);
        uVar5 = *(uint *)(&REFG(undefined, 0x12fe5d4) + (uint)(byte)this[iVar8 + 0x5d] * 4);
        if ((this[iVar8 + 0x5d] == (undefined1)0x0) && (cVar12 != '\0')) {
          uVar5 = 0xeaa2;
        }
        else if (this[iVar8 + 0x5c] != (undefined1)0x0) {
          uVar5 = uVar5 | 0x1000000;
        }
        if (this[iVar8 + 0x5e] != (undefined1)0x0) {
          uVar5 = uVar5 | 0x2000000;
        }
        if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + *(int *)(this + 8) * 4))) != uVar5) {
          *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + *(int *)(this + 8) * 4))) = uVar5;
          *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
        }
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        (*(int * PTR32 *)(gen_frame + 0x8)) = (*(int * PTR32 *)(gen_frame + 0x8)) + 0x28;
        (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) + 1;
      } while ((*(uint *)(gen_frame + 0x0)) < param_2);
    }
    if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x208))) != *(int *)(this + 8)) {
      *((int *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x208))) = *(int *)(this + 8);
      *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
    }
    if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x20c))) != (uint)(byte)this[0x19]) {
      *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x20c))) = (uint)(byte)this[0x19];
      *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
    }
    if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x210))) != (uint)(byte)this[0x18]) {
      *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x210))) = (uint)(byte)this[0x18];
      *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
    }
    uVar3 = (uint)*(ushort *)(this + 0x14);
    if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x214))) != uVar3) {
      *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x214))) = uVar3;
      *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
    }
  }
  return uVar3;
}

/* ref: Client::UI::Info::InfoProxyLetter::vf2 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00464950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x464950u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  undefined * pIVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  undefined * pvVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined * pIVar10;
  undefined * pIVar11;
  char cVar12;
  ulonglong uVar13;
  undefined1 uVar14;
  undefined4 uVar15;
  undefined1 uVar16;
  uint local_c;
  
  uVar5 = param_1[1];
  local_c = 0;
  if (*(int *)(this + 8) != 0) {
    pIVar2 = this + 0x28;
    while (((*(int *)(pIVar2 - 8) != *param_1 || (*(uint *)(pIVar2 - 4) != uVar5)) ||
           (*(int *)pIVar2 != param_1[2]))) {
      local_c = local_c + 1;
      pIVar2 = pIVar2 + 0xa0;
      if (*(uint *)(this + 8) <= local_c) {
        return (uint)pIVar2;
      }
    }
    uVar5 = 0;
    if (this + local_c * 0xa0 != ((undefined *)GEN_TOP(0xffffffe0))) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x24))))(piVar3 GEN_EDX_ARG,0x12);
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
      uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x28))))(piVar3 GEN_EDX_ARG,0x10);
      if ((uVar4 != 0) && (uVar5 != 0)) {
        *(int *)(this + 8) = *(int *)(this + 8) - 1;
        if (local_c < *(uint *)(this + 8)) {
          pIVar2 = this + local_c * 0xa0 + 0x2c;
          do {
            pIVar10 = pIVar2 + 0x94;
            pIVar11 = pIVar2 - 0xc;
            for (iVar7 = 0x28; iVar7 != 0; iVar7 = iVar7 - 1) {
              *(int *)pIVar11 = *(int *)pIVar10;
              pIVar10 = pIVar10 + 4;
              pIVar11 = pIVar11 + 4;
            }
            cVar12 = *(int *)(pIVar2 + 0x2c) != 0;
            if (*(int *)pIVar2 != 0) {
              cVar12 = cVar12 + '\x01';
            }
            if (*(int *)(pIVar2 + 8) != 0) {
              cVar12 = cVar12 + '\x01';
            }
            if (*(int *)(pIVar2 + 0x10) != 0) {
              cVar12 = cVar12 + '\x01';
            }
            if (*(int *)(pIVar2 + 0x18) != 0) {
              cVar12 = cVar12 + '\x01';
            }
            if (*(int *)(pIVar2 + 0x20) != 0) {
              cVar12 = cVar12 + '\x01';
            }
            uVar8 = *(uint *)(&REFG(undefined, 0x12fe5d4) + (uint)(byte)pIVar2[0x31] * 4);
            if ((pIVar2[0x31] == (undefined1)0x0) && (cVar12 != '\0')) {
              uVar8 = 0xeaa2;
            }
            else if (pIVar2[0x30] != (undefined1)0x0) {
              uVar8 = uVar8 | 0x1000000;
            }
            if (pIVar2[0x32] != (undefined1)0x0) {
              uVar8 = uVar8 | 0x2000000;
            }
            if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + local_c * 4))) != uVar8) {
              *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + local_c * 4))) = uVar8;
              *((undefined1 *)GEN_TOP((uVar4 + 0x1d))) = 1;
            }
            F_00431250(uVar5 GEN_EDX_ARG,local_c,pIVar2 + 0x33,0,1,0);
            pvVar6 = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
            if (pvVar6 == ((undefined *)GEN_TOP(0x0))) {
              uVar13 = F_0046ff40();
              uVar8 = (uint)(uVar13 / 1000);
            }
            else {
              uVar8 = F_00975680(pvVar6 GEN_EDX_ARG);
            }
            uVar1 = *(uint *)(pIVar2 - 4);
            pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x18))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
            if (uVar8 < uVar1) {
              uVar8 = F_00462440(pvVar6 GEN_EDX_ARG,uVar1,0x1c);
            }
            else {
              uVar9 = uVar8 - uVar1;
              if (uVar9 < 0x708) {
                uVar8 = F_00462630(pvVar6 GEN_EDX_ARG,uVar9 / 0x3c,0x28);
              }
              else if (uVar9 < 0xe10) {
                uVar8 = F_00462630(pvVar6 GEN_EDX_ARG,1,0x29);
              }
              else {
                uVar8 = F_00462750(pvVar6 GEN_EDX_ARG,uVar1,uVar8,1);
              }
            }
            uVar16 = 0;
            uVar15 = 1;
            uVar14 = 0;
            uVar8 = F_0042a990(uVar8 GEN_EDX_ARG);
            F_00431250(uVar5 GEN_EDX_ARG,local_c + 0x82,uVar8,uVar14,uVar15,uVar16);
            uVar16 = 0;
            uVar15 = 1;
            pIVar10 = pIVar2 + 0x53;
            uVar14 = 0;
            pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x18))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
            uVar8 = F_004470e0(pvVar6 GEN_EDX_ARG,pIVar10);
            F_00431250(uVar5 GEN_EDX_ARG,local_c + 0x104,uVar8,uVar14,uVar15,uVar16);
            local_c = local_c + 1;
            pIVar2 = pIVar2 + 0xa0;
          } while (local_c < *(uint *)(this + 8));
        }
        if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 0x208))) != *(int *)(this + 8)) {
          *((int *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 0x208))) = *(int *)(this + 8);
          *((undefined1 *)GEN_TOP((uVar4 + 0x1d))) = 1;
        }
        if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 0x20c))) != (uint)(byte)this[0x19]) {
          *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 0x20c))) = (uint)(byte)this[0x19];
          *((undefined1 *)GEN_TOP((uVar4 + 0x1d))) = 1;
        }
        if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 0x210))) != (uint)(byte)this[0x18]) {
          *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 0x210))) = (uint)(byte)this[0x18];
          *((undefined1 *)GEN_TOP((uVar4 + 0x1d))) = 1;
        }
        uVar5 = (uint)*(ushort *)(this + 0x14);
        if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 0x214))) != uVar5) {
          *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 0x214))) = uVar5;
          *((undefined1 *)GEN_TOP((uVar4 + 0x1d))) = 1;
        }
      }
    }
  }
  return uVar5;
}

/* ref: Client::UI::Info::InfoProxyPartyMember::vf1 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00464c20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x464c20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined * this_00;
  int iVar5;
  int iVar6;
  undefined4 * puVar7;
  undefined4 uVar8;
  
  iVar6 = *(int *)(this + 8);
  F_00435b70((undefined *)this GEN_EDX_FWD,param_1,param_2);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x28))))(piVar1 GEN_EDX_ARG,(uint)(byte)this[0x11]);
  if ((uVar2 != 0) && (param_2 != 0)) {
    iVar5 = iVar6 * 0x48;
    iVar6 = iVar6 * 5;
    do {
      puVar7 = ((undefined4 *)GEN_TOP((*(int *)(this + 0x18) + iVar5)));
      if ((*((uint *)GEN_TOP((*(int *)(this + 0x18) + 0x10 + iVar5))) & 0xf0000000) == 0x20000000) {
        uVar3 = F_00439b10(this GEN_EDX_ARG,*puVar7,puVar7[1],1);
        if (uVar3 != 0) {
          iVar4 = uVar3 + 0x1c;
          puVar7 = puVar7 + 7;
          uVar8 = 0x135;
          this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x18))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
          uVar3 = F_004608b0(this_00 GEN_EDX_ARG,uVar8,puVar7,iVar4);
          F_00431250(uVar2 GEN_EDX_ARG,iVar6,uVar3,0,1,0);
        }
      }
      iVar5 = iVar5 + 0x48;
      iVar6 = iVar6 + 5;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  return 0;
}

/* ref: FUN_00464cf0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00464cf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x464cf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x3d8, 8, 4);
  undefined * this_00;
  bool bVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint * puVar6;
  undefined * pvVar7;
  int iVar8;
  undefined1 * puVar9;
  uint uVar10;
  int * piVar11;
  int * piVar12;
  undefined4 * puVar13;
  undefined1 * puVar14;
  char * pcVar15;
  undefined1 uVar16;
  undefined4 * puVar17;
  int * piVar18;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x3d0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3d4));
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x10)));
  (*(undefined * PTR32 *)(gen_frame + 0x2c)) = this;
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = param_1;
  F_0042aca0(this_00 GEN_EDX_FWD);
  uVar10 = 0;
  F_0042b630(((undefined1 *)(gen_frame + 0x328)) GEN_EDX_ARG);
  F_0042b630(((undefined1 *)(gen_frame + 0x280)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x37c)) GEN_EDX_ARG,((char *)REFP(0x108f594)),REFG(undefined4, 0x108cc50));
  uVar4 = F_0042c8a0(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x37c)),0);
  (*(bool *)(gen_frame + 0x33)) = uVar4 != REFG(undefined4, 0x108cc50);
  F_0042c880(((undefined1 *)(gen_frame + 0x37c)) GEN_EDX_ARG);
  while ((*(bool *)(gen_frame + 0x33)) != false) {
    uVar16 = 1;
    puVar9 = ((undefined1 *)(gen_frame + 0x328));
    uVar5 = F_0042d2f0((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x2d4)),uVar10,uVar4 - uVar10);
    F_00a27140((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x110 GEN_EDX_ARG,uVar5,puVar9,uVar16);
    F_0042c880(((undefined1 *)(gen_frame + 0x2d4)) GEN_EDX_ARG);
    F_0042d4d0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x328)));
    F_0042cc20(((undefined1 *)(gen_frame + 0x2d4)) GEN_EDX_ARG,((char *)REFP(0x108f5a0)),REFG(undefined4, 0x108cc50));
    uVar5 = F_0042c8a0((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x2d4)),uVar4);
    (*(uint *)(gen_frame + 0x10)) = uVar5;
    F_0042c880(((undefined1 *)(gen_frame + 0x2d4)) GEN_EDX_ARG);
    if ((*(uint *)(gen_frame + 0x10)) == REFG(undefined4, 0x108cc50)) break;
    bVar2 = false;
    bVar1 = false;
    uVar10 = F_0042d2f0((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x2d4)),uVar4,((*(uint *)(gen_frame + 0x10)) - uVar4) + 6);
    F_0042ccf0(((undefined1 *)(gen_frame + 0x328)) GEN_EDX_ARG,uVar10);
    F_0042c880(((undefined1 *)(gen_frame + 0x2d4)) GEN_EDX_ARG);
    uVar10 = F_0042a990(((undefined1 *)(gen_frame + 0x328)) GEN_EDX_ARG);
    switch((unsigned int)(uintptr_t)(*((undefined1 *)GEN_TOP((uVar10 + 9))))) {
    case 0x62: ;
      F_0042b630(((undefined1 *)(gen_frame + 0x37c)) GEN_EDX_ARG);
      uVar10 = F_0042a990(((undefined1 *)(gen_frame + 0x328)) GEN_EDX_ARG);
      pcVar15 = ((char *)GEN_TOP((uVar10 + 0xb)));
      cVar3 = *pcVar15;
      bVar1 = bVar2;
      if (cVar3 != '\0') {
        do {
          if (cVar3 == '\"') {
            bVar1 = false;
            if (*pcVar15 != '\0') {
              uVar10 = F_0042a990(((undefined1 *)(gen_frame + 0x37c)) GEN_EDX_ARG);
              uVar10 = F_0042ce40(((undefined1 *)(gen_frame + 0x88)),&REFG(undefined, 0x108f618),uVar10);
              F_0042d4d0(this_00 GEN_EDX_ARG,uVar10);
              F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
              bVar1 = true;
            }
            break;
          }
          F_0042d160(((undefined1 *)(gen_frame + 0x37c)) GEN_EDX_ARG,cVar3);
          cVar3 = pcVar15[1];
          pcVar15 = pcVar15 + 1;
        } while (cVar3 != '\0');
      }
      puVar9 = ((undefined1 *)(gen_frame + 0x37c));
      goto LAB_004651b1;
    case 0x6a: ;
      puVar17 = &(*(undefined4 *)(gen_frame + 0x8));
      puVar13 = &(*(undefined4 *)(gen_frame + 0x0));
      pcVar15 = ((char *)REFP(0x108f5f4));
      uVar10 = F_0042a990(((undefined1 *)(gen_frame + 0x328)) GEN_EDX_ARG);
      iVar8 = F_00c4c844(uVar10 + 0xb,pcVar15,puVar13,puVar17);
      if ((iVar8 != 2) || (puVar6 = ((uint *)GEN_TOP(F_00ab21a0((*(undefined4 *)(gen_frame + 0x0))))), puVar6 == ((uint *)GEN_TOP(0x0)))) break;
      uVar10 = F_0042ce40(((undefined1 *)(gen_frame + 0xdc)),((char *)REFP(0x108f600)),(*puVar6 & 0xffffff) + (int)puVar6,(*(undefined4 *)(gen_frame + 0x8)));
      F_0042d4d0(this_00 GEN_EDX_ARG,uVar10);
      F_0042c880(((undefined1 *)(gen_frame + 0xdc)) GEN_EDX_ARG);
      goto LAB_004651e9;
    case 0x6d: ;
      piVar18 = &(*(int *)(gen_frame + 0x18));
      piVar12 = &(*(int *)(gen_frame + 0x14));
      puVar6 = &(*(uint *)(gen_frame + 0x24));
      piVar11 = &(*(int *)(gen_frame + 0xc));
      pcVar15 = ((char *)REFP(0x108f5a8));
      uVar10 = F_0042a990(((undefined1 *)(gen_frame + 0x328)) GEN_EDX_ARG);
      iVar8 = F_00c4c844(uVar10 + 0xb,pcVar15,piVar11,puVar6,piVar12,piVar18);
      if (((iVar8 == 4) && (uVar10 = F_00ab1c90((*(int *)(gen_frame + 0xc))), uVar10 != 0)) &&
         (puVar6 = ((uint *)GEN_TOP(F_00ab2750((uint)*((ushort *)GEN_TOP((uVar10 + 0x20)))))), puVar6 != ((uint *)GEN_TOP(0x0)))) {
        F_0042b630(((undefined1 *)(gen_frame + 0x37c)) GEN_EDX_ARG);
        F_0042d000(((undefined1 *)(gen_frame + 0x37c)),((char *)REFP(0x108f5bc)),3,(*(int *)(gen_frame + 0xc)) * 0x10000 + ((*(uint *)(gen_frame + 0x24)) & 0xffff),
                     (*(int *)(gen_frame + 0x14)),(*(int *)(gen_frame + 0x18)));
        iVar8 = **((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 8)));
        uVar10 = F_0042a990(((undefined1 *)(gen_frame + 0x37c)) GEN_EDX_ARG);
        uVar10 = ((code *)*((gen_code32 *)GEN_TOP((iVar8 + 0x20))))(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 8))),((undefined1 *)(gen_frame + 0x130)),uVar10);
        F_0042d4d0(this_00 GEN_EDX_ARG,uVar10);
        F_0042c880(((undefined1 *)(gen_frame + 0x130)) GEN_EDX_ARG);
        uVar10 = *puVar6;
        (*(float *)(gen_frame + 0x20)) = (float)((float10)(*(int *)(gen_frame + 0x18)) * (float10)REFG(double, 0x1091858));
        F_00773350((*(uint *)(gen_frame + 0x24)),(float)((float10)(*(int *)(gen_frame + 0x18)) * (float10)REFG(double, 0x1091858)));
        (*(float *)(gen_frame + 0x20)) = (float)((float10)(*(int *)(gen_frame + 0x14)) * (float10)REFG(double, 0x1091858));
        uVar4 = F_00773350((*(uint *)(gen_frame + 0x24)),(float)((float10)(*(int *)(gen_frame + 0x14)) * (float10)REFG(double, 0x1091858)));
        uVar10 = F_0042ce40(((undefined1 *)(gen_frame + 0x1d8)),((char *)REFP(0x108f5d4)),(uVar10 & 0xffffff) + (int)puVar6,uVar4);
        F_0042d4d0(this_00 GEN_EDX_ARG,uVar10);
        F_0042c880(((undefined1 *)(gen_frame + 0x1d8)) GEN_EDX_ARG);
        F_0042d000(((undefined1 *)(gen_frame + 0x37c)),((char *)REFP(0x108f5e0)),0xce);
        pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x2c));
        iVar8 = **((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 8)));
        uVar10 = F_0042a990(((undefined1 *)(gen_frame + 0x37c)) GEN_EDX_ARG);
        uVar10 = ((code *)*((gen_code32 *)GEN_TOP((iVar8 + 0x20))))(*((undefined4 *)GEN_TOP(((int)pvVar7 + 8))),((undefined1 *)(gen_frame + 0x184)),uVar10);
        F_0042d4d0(this_00 GEN_EDX_ARG,uVar10);
        F_0042c880(((undefined1 *)(gen_frame + 0x184)) GEN_EDX_ARG);
        F_0042c880(((undefined1 *)(gen_frame + 0x37c)) GEN_EDX_ARG);
        goto LAB_004651e9;
      }
      break;
    case 0x6e: ;
      F_0042b630(((undefined1 *)(gen_frame + 0x2d4)) GEN_EDX_ARG);
      uVar10 = F_0042a990(((undefined1 *)(gen_frame + 0x328)) GEN_EDX_ARG);
      pcVar15 = ((char *)GEN_TOP((uVar10 + 0xb)));
      cVar3 = *pcVar15;
      if (cVar3 == '\0') {
LAB_0046534a: ;
        bVar1 = bVar2;
        puVar9 = ((undefined1 *)(gen_frame + 0x2d4));
      }
      else {
        do {
          if (cVar3 == '\"') {
            if (*pcVar15 != '\0') {
              F_0042b630(((undefined1 *)(gen_frame + 0x37c)) GEN_EDX_ARG);
              puVar9 = ((undefined1 *)(gen_frame + 0x37c));
              puVar14 = ((undefined1 *)(gen_frame + 0x2d4));
              pvVar7 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x1b0))) + 0x28))))
                                         (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x1b0))) GEN_EDX_ARG)));
              F_00446ec0(pvVar7 GEN_EDX_ARG,puVar14,puVar9);
              F_0042e360(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x37c)));
              F_0042c880(((undefined1 *)(gen_frame + 0x37c)) GEN_EDX_ARG);
              bVar2 = true;
            }
            goto LAB_0046534a;
          }
          F_0042d160(((undefined1 *)(gen_frame + 0x2d4)) GEN_EDX_ARG,cVar3);
          cVar3 = pcVar15[1];
          pcVar15 = pcVar15 + 1;
        } while (cVar3 != '\0');
        puVar9 = ((undefined1 *)(gen_frame + 0x2d4));
      }
LAB_004651b1: ;
      F_0042c880(puVar9 GEN_EDX_ARG);
      if (!bVar1) break;
      goto LAB_004651e9;
    case 0x6f: ;
      puVar17 = &(*(undefined4 *)(gen_frame + 0x4));
      pcVar15 = "%d\"></a>";
      uVar10 = F_0042a990(((undefined1 *)(gen_frame + 0x328)) GEN_EDX_ARG);
      iVar8 = F_00c4c844(uVar10 + 0xb,pcVar15,puVar17);
      if (iVar8 == 1) {
        uVar10 = F_00460bd0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 8))) GEN_EDX_ARG,0x7e9,(*(undefined4 *)(gen_frame + 0x4)));
        uVar10 = F_0042ce40(((undefined1 *)(gen_frame + 0x34)),&REFG(undefined, 0x108f614),uVar10);
        F_0042d4d0(this_00 GEN_EDX_ARG,uVar10);
        F_0042c880(((undefined1 *)(gen_frame + 0x34)) GEN_EDX_ARG);
        goto LAB_004651e9;
      }
      break;
    case 0x73: ;
      piVar18 = &(*(int *)(gen_frame + 0x1c));
      pcVar15 = "%d\"></a>";
      uVar10 = F_0042a990(((undefined1 *)(gen_frame + 0x328)) GEN_EDX_ARG);
      iVar8 = F_00c4c844(uVar10 + 0xb,pcVar15,piVar18);
      if (iVar8 == 1) {
        uVar10 = F_0042ce40(((undefined1 *)(gen_frame + 0x22c)),((char *)REFP(0x108f628)),(*(int *)(gen_frame + 0x1c)) + 1);
        F_0042d4d0(this_00 GEN_EDX_ARG,uVar10);
        F_0042c880(((undefined1 *)(gen_frame + 0x22c)) GEN_EDX_ARG);
        if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x1b4))) != '\0') {
          F_0043f8b0((*(int *)(gen_frame + 0x1c)) + 0x25);
        }
        goto LAB_004651e9;
      }
    }
    F_00a27140((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x110 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x328)),((undefined1 *)(gen_frame + 0x280)),1);
    F_0042d4d0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x280)));
LAB_004651e9: ;
    uVar10 = (*(uint *)(gen_frame + 0x10)) + 6;
    F_0042cc20(((undefined1 *)(gen_frame + 0x37c)) GEN_EDX_ARG,((char *)REFP(0x108f594)),REFG(undefined4, 0x108cc50));
    uVar4 = F_0042c8a0((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x37c)),uVar10);
    (*(bool *)(gen_frame + 0x33)) = uVar4 != REFG(undefined4, 0x108cc50);
    F_0042c880(((undefined1 *)(gen_frame + 0x37c)) GEN_EDX_ARG);
  }
  pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x28));
  uVar4 = F_0042b790((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG);
  if (uVar10 < uVar4) {
    uVar16 = 1;
    puVar9 = ((undefined1 *)(gen_frame + 0x328));
    uVar10 = F_0042d2f0(pvVar7 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x22c)),uVar10,REFG(undefined4, 0x108cc50));
    F_00a27140((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x110 GEN_EDX_ARG,uVar10,puVar9,uVar16);
    F_0042c880(((undefined1 *)(gen_frame + 0x22c)) GEN_EDX_ARG);
    F_0042d4d0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x328)));
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x280)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x328)) GEN_EDX_ARG);
  return (uint)this_00;
}

/* ref: Client::UI::Misc::PronounModule::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00465410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x465410u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  if (param_2 != 0) {
    uVar1 = F_00454650(this GEN_EDX_FWD,param_1,param_3);
    return uVar1;
  }
  uVar1 = F_00464cf0(this GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_00465440 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00465440(GEN_P(undefined1 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x465440u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 param_1 = (undefined1)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  byte bVar1;
  undefined * this;
  int * piVar2;
  uint uVar3;
  uint * puVar4;
  
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 2: ;
  case 0xe: ;
    uVar3 = F_00ab6240(param_2,0,0);
    if (uVar3 != 0) {
      return uVar3;
    }
    break;
  case 4: ;
    uVar3 = F_00ab2510(param_2);
    if (uVar3 != 0) {
      piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
      if (piVar2 == ((int *)GEN_TOP(0x0))) {
        return 0x108ecf8;
      }
      this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_ARG)));
      uVar3 = F_00460bd0(this GEN_EDX_ARG,0x7e5,param_2);
      return uVar3;
    }
    break;
  case 6: ;
    puVar4 = ((uint *)GEN_TOP(F_00ab28a0(param_2)));
    if (puVar4 != ((uint *)GEN_TOP(0x0))) {
      return (*puVar4 & 0xffffff) + (int)puVar4;
    }
    break;
  case 7: ;
    piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x2c))))(piVar2 GEN_EDX_ARG);
      uVar3 = F_0042a990(((param_2 >> 8 & 0xff) * 100 + (param_2 & 0xff)) * 0x544 + 0x40 + uVar3 GEN_EDX_ARG);
      return uVar3;
    }
  case 1: ;
    puVar4 = ((uint *)GEN_TOP(F_00ab1ed0(param_2)));
    if (puVar4 != ((uint *)GEN_TOP(0x0))) {
      return (*puVar4 & 0xffffff) + (int)puVar4;
    }
    break;
  case 8: ;
    puVar4 = ((uint *)GEN_TOP(F_00ab28d0(param_2)));
    if (puVar4 != ((uint *)GEN_TOP(0x0))) {
      return (*puVar4 & 0xffffff) + (int)puVar4;
    }
    break;
  case 9: ;
    puVar4 = ((uint *)GEN_TOP(F_00ab1f00(param_2)));
    if (puVar4 != ((uint *)GEN_TOP(0x0))) {
      return (*puVar4 & 0xffffff) + (int)puVar4;
    }
    break;
  case 10: ;
    puVar4 = ((uint *)GEN_TOP(F_00ab1f30(param_2)));
    if (puVar4 != ((uint *)GEN_TOP(0x0))) {
      return (*puVar4 & 0xffffff) + (int)puVar4;
    }
    break;
  case 0xb: ;
    puVar4 = ((uint *)GEN_TOP(F_00ab2c30(param_2)));
    if (puVar4 != ((uint *)GEN_TOP(0x0))) {
      return (*puVar4 & 0xffffff) + (int)puVar4;
    }
    break;
  case 0xc: ;
    puVar4 = ((uint *)GEN_TOP(F_00ab2cf0(param_2)));
    if (puVar4 != ((uint *)GEN_TOP(0x0))) {
      return (*puVar4 & 0xffffff) + (int)puVar4;
    }
    break;
  case 0xd: ;
    puVar4 = ((uint *)GEN_TOP(F_00ab2870(param_2)));
    if (puVar4 != ((uint *)GEN_TOP(0x0))) {
      return (*puVar4 & 0xffffff) + (int)puVar4;
    }
    break;
  case 0xf: ;
    piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x34))))(piVar2 GEN_EDX_ARG);
      bVar1 = F_0043b400(uVar3 GEN_EDX_ARG,param_2);
      if (bVar1 != 0) {
        uVar3 = F_0043b3e0(uVar3 GEN_EDX_ARG,param_2);
        return uVar3 + 4;
      }
    }
    break;
  case 0x10: ;
    puVar4 = ((uint *)GEN_TOP(F_00ab2d50(param_2)));
    if (puVar4 != ((uint *)GEN_TOP(0x0))) {
      return (*puVar4 & 0xffffff) + (int)puVar4;
    }
    break;
  case 0x11: ;
    puVar4 = ((uint *)GEN_TOP(F_00ab2840(param_2)));
    if (puVar4 != ((uint *)GEN_TOP(0x0))) {
      return (*puVar4 & 0xffffff) + (int)puVar4;
    }
  }
  return (uint)&REFG(undefined, 0x108d112);
}

/* ref: FUN_00465700 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00465700(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x465700u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  code * pcVar1;
  uint uVar2;
  int * piVar3;
  undefined * pvVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 1: ;
    uVar2 = F_00ab1ed0(param_3);
    if ((uVar2 == 0) ||
       (((*((char *)GEN_TOP((uVar2 + 0x22))) != '\x04' && (*((char *)GEN_TOP((uVar2 + 0x22))) != '\x06')) ||
        (piVar3 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG))), piVar3 == ((int *)GEN_TOP(0x0)))))) {
      return 0x108d12e;
    }
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x1c))))(piVar3 GEN_EDX_ARG);
    *((byte *)GEN_TOP((uVar2 + 0x230bf))) = *((byte *)GEN_TOP((uVar2 + 0x230bf))) | 2;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG);
    if (*((int *)GEN_TOP((uVar2 + 600))) == 0) {
      uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((uVar2 + 0x34))) + 8))))(*((int * PTR32 *)GEN_TOP((uVar2 + 0x34))) GEN_EDX_ARG,((char *)REFP(0x108f868)));
      *((uint *)GEN_TOP((uVar2 + 600))) = uVar5;
    }
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((uVar2 + 600))) + 0x24))))(*((int * PTR32 *)GEN_TOP((uVar2 + 600))) GEN_EDX_ARG,0x7fb)));
    goto LAB_0046580b;
  case 2: ;
  case 0xe: ;
    uVar2 = F_00ab24a0(param_3);
    if (uVar2 == 0) {
      return 0x108d113;
    }
    if (*((uint *)GEN_TOP((uVar2 + 0x28))) < 2) {
      return 0x108f6f8;
    }
    piVar3 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    if (piVar3 == ((int *)GEN_TOP(0x0))) {
      return 0x108d113;
    }
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x1c))))(piVar3 GEN_EDX_ARG);
    *((byte *)GEN_TOP((uVar2 + 0x230bf))) = *((byte *)GEN_TOP((uVar2 + 0x230bf))) | 2;
    if ((*((char *)GEN_TOP((param_1 + 8))) != '\0') && (*((int *)GEN_TOP((param_1 + 0xb8))) == -2)) {
      uVar2 = F_0043ae30(*((undefined1 *)GEN_TOP((param_1 + 9))),*((undefined4 *)GEN_TOP((param_1 + 4))));
      *((uint *)GEN_TOP((param_1 + 0xb8))) = uVar2;
      F_0042aca0(param_1 + 0xbc GEN_EDX_ARG);
    }
    iVar7 = *((int *)GEN_TOP((param_1 + 0xb8)));
    pcVar1 = *((gen_code32 *)GEN_TOP((*piVar3 + 0x18)));
    break;
  default: ;
    return 0x108d12f;
  case 4: ;
    uVar2 = F_00ab2510(param_3);
    if (((uVar2 == 0) || (*((byte *)GEN_TOP((uVar2 + 0x20))) < 2)) ||
       (piVar3 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG))), piVar3 == ((int *)GEN_TOP(0x0)))) {
      return 0x108d11f;
    }
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x1c))))(piVar3 GEN_EDX_ARG);
    *((byte *)GEN_TOP((uVar2 + 0x230bf))) = *((byte *)GEN_TOP((uVar2 + 0x230bf))) | 2;
    if ((*((char *)GEN_TOP((param_1 + 8))) != '\0') && (*((int *)GEN_TOP((param_1 + 0xb8))) == -2)) {
      uVar2 = F_0043ae30(*((undefined1 *)GEN_TOP((param_1 + 9))),*((undefined4 *)GEN_TOP((param_1 + 4))));
      *((uint *)GEN_TOP((param_1 + 0xb8))) = uVar2;
      F_0042aca0(param_1 + 0xbc GEN_EDX_ARG);
    }
    iVar7 = *((int *)GEN_TOP((param_1 + 0xb8)));
    pcVar1 = *((gen_code32 *)GEN_TOP((*piVar3 + 0x18)));
  }
  if (iVar7 < 10000) {
    uVar6 = 0x7f9;
    pvVar4 = ((undefined *)GEN_TOP((*pcVar1)(piVar3)));
    uVar2 = F_00460bd0(pvVar4 GEN_EDX_ARG,uVar6,iVar7);
    return uVar2;
  }
  uVar2 = (*pcVar1)();
  if (*((int *)GEN_TOP((uVar2 + 600))) == 0) {
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((uVar2 + 0x34))) + 8))))(*((int * PTR32 *)GEN_TOP((uVar2 + 0x34))) GEN_EDX_ARG,((char *)REFP(0x108f868)));
    *((uint *)GEN_TOP((uVar2 + 600))) = uVar5;
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((uVar2 + 600))) + 0x24))))(*((int * PTR32 *)GEN_TOP((uVar2 + 600))) GEN_EDX_ARG,0x7fa)));
LAB_0046580b: ;
  uVar6 = 0;
  pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 8))))(piVar3 GEN_EDX_ARG)));
  uVar2 = F_00cb0950(pvVar4 GEN_EDX_ARG,uVar6);
  return uVar2;
}

/* ref: FUN_004659c0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_004659c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4659c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  int * piVar1;
  undefined * pvVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  
  if (param_1 - 0x36U < 0x78) {
    uVar7 = (param_1 - 0x36U) / 0xc;
    uVar4 = (param_1 - 0x36U) % 0xc;
    uVar6 = (uint)*param_2;
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
    pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x1c))))(piVar1 GEN_EDX_FWD)));
    uVar6 = F_0075e940(pvVar2 GEN_EDX_ARG,uVar6);
    uVar3 = F_0043b300(param_2);
    uVar8 = 0x412;
    pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x18))))(piVar1 GEN_EDX_ARG)));
    uVar6 = F_00461060(pvVar2 GEN_EDX_ARG,uVar8,uVar3,uVar6);
    iVar5 = uVar7 * 0x10 + uVar4;
    F_0042e430(((undefined *)GEN_TOP(((int)this + iVar5 * 0x164 + 0x128))) GEN_EDX_ARG,uVar6);
    F_004467e0(((undefined *)GEN_TOP(((int)this + iVar5 * 0x164 + 0x18))) GEN_EDX_ARG,param_2);
    uVar8 = 3;
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x48))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
    pvVar2 = ((undefined *)GEN_TOP(F_00763050(uVar6 GEN_EDX_ARG,uVar8)));
    F_00770c80(pvVar2 GEN_EDX_ARG,uVar7,uVar4);
  }
  if (param_1 - 0xaeU < 0xc) {
    uVar6 = (uint)*param_2;
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
    iVar5 = param_1 - 0xae;
    pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x1c))))(piVar1 GEN_EDX_ARG)));
    uVar6 = F_0075e940(pvVar2 GEN_EDX_ARG,uVar6);
    uVar3 = F_0043b300(param_2);
    uVar8 = 0x412;
    pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x18))))(piVar1 GEN_EDX_ARG)));
    uVar6 = F_00461060(pvVar2 GEN_EDX_ARG,uVar8,uVar3,uVar6);
    F_0042e430(((undefined *)GEN_TOP(((int)this + iVar5 * 0x164 + 0x191a8))) GEN_EDX_ARG,uVar6);
    F_004467e0(((undefined *)GEN_TOP(((int)this + iVar5 * 0x164 + 0x19098))) GEN_EDX_ARG,param_2);
    uVar8 = 3;
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x48))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
    pvVar2 = ((undefined *)GEN_TOP(F_00763050(uVar6 GEN_EDX_ARG,uVar8)));
    F_00770d30(pvVar2 GEN_EDX_ARG,iVar5);
  }
  return;
}

/* ref: FUN_00465b20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00465b20(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(byte param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x465b20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(byte param_4 = (byte)gen_a3;)
  undefined * this;
  char * pcVar1;
  int iVar2;
  uint uVar3;
  
  this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x30))) + 0x18))))(*((int * PTR32 *)GEN_TOP((param_1 + 0x30))) GEN_EDX_FWD)));
  if (param_3 != 0) {
    pcVar1 = ((char *)GEN_TOP(F_00461c60(this GEN_EDX_ARG,0x1107,param_3,(uint)param_4)));
    iVar2 = F_00c4b813(pcVar1,((char *)GEN_TOP((param_2 + 4))),0x30);
    if (iVar2 != 0) {
      return CONCAT31((int3)((uint)iVar2 >> 8),iVar2 == 0);
    }
  }
  pcVar1 = ((char *)GEN_TOP(F_00461c60(this GEN_EDX_ARG,0x1107,*((undefined4 *)GEN_TOP((param_2 + 0x34))),
                                (uint)*((byte *)GEN_TOP((param_2 + 0x38))))));
  uVar3 = F_00c472af(((char *)GEN_TOP((param_2 + 4))),0x30,pcVar1);
  return uVar3;
}

/* ref: FUN_00465b90 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00465b90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(int * param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6))
{
  GEN_ENTER(0x465b90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_FRAME_DECL_GS(0xd4, 12, 4);
  undefined * this_00;
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xcc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xd0));
  if (*((int *)GEN_TOP(((int)this + 0x260))) != 0) {
    this_00 = ((undefined *)GEN_TOP(((int)this + 100)));
    F_0042aca0(this_00 GEN_EDX_FWD);
    (*(int * PTR32 *)(gen_frame + 0x0)) = ((int *)GEN_TOP(0x0));
    piVar1 = ((int *)GEN_TOP(F_004296a0(8,0,0x2c4)));
    (*(int * PTR32 *)(gen_frame + 0x0)) = piVar1;
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      *piVar1 = 0;
      piVar1[1] = 0;
    }
    *piVar1 = (int)&(*(int * PTR32 *)(gen_frame + 0x0));
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x5c))) + 0xc))))
                      (*((int * PTR32 *)GEN_TOP(((int)this + 0x5c))) GEN_EDX_ARG,param_3,&(*(int * PTR32 *)(gen_frame + 0x0)),this_00);
    if (uVar2 == 1) {
      (*(undefined4 *)(gen_frame + 0xc0)) = 0;
      (*(undefined4 * PTR32 *)(gen_frame + 0xc4)) = ((undefined4 *)GEN_TOP(0x0));
      (*(char *)(gen_frame + 0xc8)) = -1;
      F_00490f90(&(*(undefined4 *)(gen_frame + 0xc0)) GEN_EDX_ARG,param_2);
      F_00493bc0(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xc0)));
      if ((((*(undefined4 * PTR32 *)(gen_frame + 0xc4)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0xc8)) != '\0')) && ((*(char *)(gen_frame + 0xc8)) == '\x01')) {
        pvVar3 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0xc4))));
        *((int *)GEN_TOP(((int)pvVar3 + 0x54))) = *((int *)GEN_TOP(((int)pvVar3 + 0x54))) - 1;
        if (*((int *)GEN_TOP(((int)pvVar3 + 0x54))) < 1) {
          F_0042c880(pvVar3 GEN_EDX_ARG);
          F_00406ad0(pvVar3);
        }
      }
      (*(undefined4 *)(gen_frame + 0xc0)) = 0;
      (*(undefined4 * PTR32 *)(gen_frame + 0xc4)) = ((undefined4 *)GEN_TOP(0x0));
      (*(char *)(gen_frame + 0xc8)) = -1;
      F_00490f90(&(*(undefined4 *)(gen_frame + 0xc0)) GEN_EDX_ARG,this_00);
      F_00493bc0(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xc0)));
      if ((((*(undefined4 * PTR32 *)(gen_frame + 0xc4)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0xc8)) != '\0')) && ((*(char *)(gen_frame + 0xc8)) == '\x01')) {
        pvVar3 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0xc4))));
        *((int *)GEN_TOP(((int)pvVar3 + 0x54))) = *((int *)GEN_TOP(((int)pvVar3 + 0x54))) - 1;
        if (*((int *)GEN_TOP(((int)pvVar3 + 0x54))) < 1) {
          F_0042c880(pvVar3 GEN_EDX_ARG);
          F_00406ad0(pvVar3);
        }
      }
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x260))) + 0x24))))
                                (*((int * PTR32 *)GEN_TOP(((int)this + 0x260))) GEN_EDX_ARG,param_1)));
      F_0042aca0(this_00 GEN_EDX_ARG);
      uVar4 = 0;
      uVar5 = REFG(undefined4, 0x108cc50);
      pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG)));
      uVar2 = F_00cb0950(pvVar3 GEN_EDX_ARG,uVar4);
      F_0042cc20(((undefined1 *)(gen_frame + 0x6c)) GEN_EDX_ARG,uVar2,uVar5);
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x5c))) + 0xc))))
                        (*((int * PTR32 *)GEN_TOP(((int)this + 0x5c))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x6c)),&(*(int * PTR32 *)(gen_frame + 0x0)),this_00);
      F_0042c880(((undefined1 *)(gen_frame + 0x6c)) GEN_EDX_ARG);
      if (uVar2 == 1) {
        if ((*((char *)GEN_TOP(((int)this + 0x27ad))) != '\0') && (param_4 != ((int *)GEN_TOP(0x0)))) {
          if (*((char *)GEN_TOP(((int)this + 0x27ae))) != '\0') {
            uVar2 = F_00a1ae70();
            *param_4 = *param_4 + uVar2;
          }
          F_0042b630(((undefined1 *)(gen_frame + 0x6c)) GEN_EDX_ARG);
          if (*((char *)GEN_TOP(((int)this + 0x27af))) == '\0') {
            iVar6 = *param_4;
            uVar5 = 0x1ea0;
          }
          else {
            iVar6 = *param_4;
            uVar5 = 0x1ea1;
          }
          uVar2 = F_00461bb0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x5c))) GEN_EDX_ARG,uVar5,iVar6);
          F_0042e430(((undefined1 *)(gen_frame + 0x6c)) GEN_EDX_ARG,uVar2);
          uVar2 = F_0042cd30(((undefined1 *)(gen_frame + 0x6c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x18)),this_00);
          F_0042ccf0(this_00 GEN_EDX_ARG,uVar2);
          F_0042c880(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG);
          F_0042c880(((undefined1 *)(gen_frame + 0x6c)) GEN_EDX_ARG);
        }
        uVar2 = F_00580530(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x60))) GEN_EDX_ARG,param_6,this_00,param_5,0);
        F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
        F_00429760((*(int * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
        return uVar2;
      }
    }
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    F_00429760((*(int * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
  }
  return 0;
}

/* ref: FUN_00465e90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00465e90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x465e90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined * this_00;
  uint uVar2;
  undefined4 * puVar3;
  int * piVar4;
  int iVar5;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x14))))(param_1 GEN_EDX_FWD);
  F_00a29b60(this GEN_EDX_ARG,uVar2);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1ac))) = (*(undefined * PTR32 (*)[2])REFP(0x10904f8));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1b0))) = (*(undefined * PTR32 (*)[2])REFP(0x1090598));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x10917c4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[40])REFP(0x109171c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1ac))) = (*(undefined * PTR32 (*)[2])REFP(0x109170c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1b0))) = (*(undefined * PTR32 (*)[2])REFP(0x1091700));
  *((int * PTR32 *)GEN_TOP(((int)this + 0x1b4))) = param_1;
  F_00a29aa0(((undefined *)GEN_TOP(((int)this + 0x1b8))) GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 600))) = 0;
  F_0042b630((int)this + 0x25c GEN_EDX_ARG);
  F_0042b630((int)this + 0x2b0 GEN_EDX_ARG);
  puVar1 = ((undefined4 *)GEN_TOP(((int)this + 0x304)));
  *puVar1 = 0;
  puVar3 = ((undefined4 *)GEN_TOP(F_004296a0(8,0,0x2c4)));
  *puVar1 = puVar3;
  if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar3 = 0;
    puVar3[1] = 0;
  }
  *((undefined4 * PTR32 *)GEN_TOP(*puVar1)) = puVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x308))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x310))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x314))) = 0;
  puVar1 = ((undefined4 *)GEN_TOP(((int)this + 0x31c)));
  *puVar1 = 0;
  puVar3 = ((undefined4 *)GEN_TOP(F_004296a0(8,0,0x2c4)));
  *puVar1 = puVar3;
  if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar3 = 0;
    puVar3[1] = 0;
  }
  *((undefined4 * PTR32 *)GEN_TOP(*puVar1)) = puVar1;
  *((undefined4 *)GEN_TOP(((int)this + 800))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x324))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x328))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x32c))) = 0;
  F_0042b630((int)this + 0x334 GEN_EDX_ARG);
  F_0042b630((int)this + 0x388 GEN_EDX_ARG);
  F_0042b630((int)this + 0x3dc GEN_EDX_ARG);
  F_0042b630((int)this + 0x430 GEN_EDX_ARG);
  F_0042b630((int)this + 0x484 GEN_EDX_ARG);
  *((undefined2 *)GEN_TOP(((int)this + 0x4e6))) = 0xffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x4d8))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x4dc))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x4e0))) = 0xff010c00;
  *((undefined1 *)GEN_TOP(((int)this + 0x4e4))) = 0xff;
  *((undefined1 *)GEN_TOP(((int)this + 0x4e2))) = 0;
  F_00494140(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG,0x4b);
  piVar4 = ((int *)GEN_TOP(0x0));
  if ((*((int * PTR32 *)GEN_TOP(((int)this + 0x18))) != ((int *)GEN_TOP(0x0))) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 0x18))))), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    piVar4 = ((int *)GEN_TOP(*puVar1));
  }
  uVar2 = *((int *)GEN_TOP(((int)this + 0x24))) + 0x4a;
  if (((piVar4 == ((int *)GEN_TOP(0x0))) || (((int *)GEN_TOP(*piVar4)) == ((int *)GEN_TOP(0x0)))) ||
     (piVar4 = *((int * PTR32 *)GEN_TOP(*piVar4)), piVar4 == ((int *)GEN_TOP(0x0)))) {
    iVar5 = 0;
  }
  else {
    iVar5 = *piVar4;
  }
  if (*((uint *)GEN_TOP((iVar5 + 8))) <= uVar2) {
    uVar2 = uVar2 - *((uint *)GEN_TOP((iVar5 + 8)));
  }
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar5 + 4))) + uVar2 * 4)));
  if (((undefined4 *)GEN_TOP(puVar1[1])) != ((undefined4 *)GEN_TOP(0x0))) {
    if ((*(char *)(puVar1 + 2) != '\0') && (*(char *)(puVar1 + 2) == '\x01')) {
      this_00 = *((undefined * PTR32 *)GEN_TOP(puVar1[1]));
      *((int *)GEN_TOP(((int)this_00 + 0x54))) = *((int *)GEN_TOP(((int)this_00 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)this_00 + 0x54))) < 1) {
        F_0042c880(this_00 GEN_EDX_ARG);
        F_00406ad0(this_00);
      }
    }
    puVar1[1] = 0;
    *(undefined1 *)(puVar1 + 2) = 0xff;
  }
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  puVar1[1] = puVar1;
  return (uint)this;
}

/* ref: FUN_00466080 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00466080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x466080u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 in_ecx;
  undefined4 uVar1;
  undefined4 * puVar2;
  undefined * pvVar3;
  int * this_00;
  uint uVar4;
  undefined4 * puVar5;
  int * piVar6;
  int iVar7;
  int iVar8;
  int local_8;
  
  in_ecx = *((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x10)));
  this_00 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD)));
  F_00494140(this_00 GEN_EDX_ARG,0x4b);
  local_8 = 0xc;
  iVar8 = 0x153;
  do {
    uVar4 = F_00414500(in_ecx GEN_EDX_ARG,iVar8);
    uVar1 = *((undefined4 *)GEN_TOP((uVar4 + 0x14)));
    piVar6 = ((int *)GEN_TOP(0x0));
    if ((((int *)GEN_TOP(*this_00)) != ((int *)GEN_TOP(0x0))) &&
       (puVar2 = *((undefined4 * PTR32 *)GEN_TOP(*this_00)), puVar2 != ((undefined4 *)GEN_TOP(0x0)))) {
      piVar6 = ((int *)GEN_TOP(*puVar2));
    }
    uVar4 = local_8 + this_00[3];
    if (((piVar6 == ((int *)GEN_TOP(0x0))) || (((int *)GEN_TOP(*piVar6)) == ((int *)GEN_TOP(0x0)))) ||
       (piVar6 = *((int * PTR32 *)GEN_TOP(*piVar6)), piVar6 == ((int *)GEN_TOP(0x0)))) {
      iVar7 = 0;
    }
    else {
      iVar7 = *piVar6;
    }
    if (*((uint *)GEN_TOP((iVar7 + 8))) <= uVar4) {
      uVar4 = uVar4 - *((uint *)GEN_TOP((iVar7 + 8)));
    }
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar7 + 4))) + uVar4 * 4)));
    local_8 = local_8 + 1;
    if (((undefined4 *)GEN_TOP(puVar2[1])) != ((undefined4 *)GEN_TOP(0x0))) {
      if ((*(char *)(puVar2 + 2) != '\0') && (*(char *)(puVar2 + 2) == '\x01')) {
        pvVar3 = *((undefined * PTR32 *)GEN_TOP(puVar2[1]));
        *((int *)GEN_TOP(((int)pvVar3 + 0x54))) = *((int *)GEN_TOP(((int)pvVar3 + 0x54))) - 1;
        if (*((int *)GEN_TOP(((int)pvVar3 + 0x54))) < 1) {
          F_0042c880(pvVar3 GEN_EDX_ARG);
          F_00406ad0(pvVar3);
        }
      }
      puVar2[1] = 0;
      *(undefined1 *)(puVar2 + 2) = 0xff;
    }
    iVar8 = iVar8 + 1;
    *puVar2 = uVar1;
    puVar2[1] = puVar2;
    *(undefined1 *)(puVar2 + 2) = 0;
  } while (iVar8 < 0x174);
  local_8 = 0x38;
  iVar8 = 0x174;
  do {
    uVar4 = F_00414500(in_ecx GEN_EDX_ARG,iVar8);
    uVar1 = *((undefined4 *)GEN_TOP((uVar4 + 0x14)));
    piVar6 = ((int *)GEN_TOP(0x0));
    if ((((int *)GEN_TOP(*this_00)) != ((int *)GEN_TOP(0x0))) &&
       (puVar2 = *((undefined4 * PTR32 *)GEN_TOP(*this_00)), puVar2 != ((undefined4 *)GEN_TOP(0x0)))) {
      piVar6 = ((int *)GEN_TOP(*puVar2));
    }
    uVar4 = local_8 + this_00[3];
    if (((piVar6 == ((int *)GEN_TOP(0x0))) || (((int *)GEN_TOP(*piVar6)) == ((int *)GEN_TOP(0x0)))) ||
       (piVar6 = *((int * PTR32 *)GEN_TOP(*piVar6)), piVar6 == ((int *)GEN_TOP(0x0)))) {
      iVar7 = 0;
    }
    else {
      iVar7 = *piVar6;
    }
    if (*((uint *)GEN_TOP((iVar7 + 8))) <= uVar4) {
      uVar4 = uVar4 - *((uint *)GEN_TOP((iVar7 + 8)));
    }
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar7 + 4))) + uVar4 * 4)));
    puVar5 = ((undefined4 *)GEN_TOP(puVar2[1]));
    local_8 = local_8 + 1;
    if (puVar5 != ((undefined4 *)GEN_TOP(0x0))) {
      if ((*(char *)(puVar2 + 2) != '\0') && (*(char *)(puVar2 + 2) == '\x01')) {
        pvVar3 = ((undefined *)GEN_TOP(*puVar5));
        *((int *)GEN_TOP(((int)pvVar3 + 0x54))) = *((int *)GEN_TOP(((int)pvVar3 + 0x54))) - 1;
        if (*((int *)GEN_TOP(((int)pvVar3 + 0x54))) < 1) {
          F_0042c880(pvVar3 GEN_EDX_ARG);
          puVar5 = ((undefined4 *)GEN_TOP(F_00406ad0(pvVar3)));
        }
      }
      puVar2[1] = 0;
      *(undefined1 *)(puVar2 + 2) = 0xff;
    }
    iVar8 = iVar8 + 1;
    *puVar2 = uVar1;
    puVar2[1] = puVar2;
    *(undefined1 *)(puVar2 + 2) = 0;
  } while (iVar8 < 0x17d);
  return (uint)puVar5;
}

/* ref: FUN_00466220 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00466220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x466220u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_GS(0x94, 12, 4);
  byte bVar1;
  undefined4 uVar2;
  int * piVar3;
  undefined * this_00;
  uint uVar4;
  undefined1 * puVar5;
  int iVar6;
  __time64_t _Var7;
  undefined4 uVar8;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x8c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x90));
  F_00488e70(((undefined *)GEN_TOP(((int)this + 0x914))) GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x8)),*((undefined4 *)GEN_TOP(((int)this + 0x914))),
               *((undefined4 *)GEN_TOP(((int)this + 0x918))));
  F_00488e70(((undefined *)GEN_TOP(((int)this + 0x978))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x8)),*((undefined4 *)GEN_TOP(((int)this + 0x978))),
               *((undefined4 *)GEN_TOP(((int)this + 0x97c))));
  (*(uint *)(gen_frame + 0x0)) = (*((int *)GEN_TOP((param_1 + 0xac))) - *((int *)GEN_TOP((param_1 + 0xa8)))) / 0x170;
  if ((int)(*(uint *)(gen_frame + 0x0)) < 1) {
    *((undefined1 *)GEN_TOP(((int)this + 0x924))) = 1;
    *((undefined1 *)GEN_TOP(((int)this + 0x988))) = 1;
    return (*(uint *)(gen_frame + 0x0));
  }
  (*(int *)(gen_frame + 0xc)) = 0;
  do {
    iVar6 = *((int *)GEN_TOP((param_1 + 0xa8))) + (*(int *)(gen_frame + 0xc));
    bVar1 = F_0042b6a0(((undefined *)GEN_TOP((iVar6 + 8))) GEN_EDX_ARG,&REFG(undefined, 0x108fa54));
    if ((bVar1 == 0) && (**((char * PTR32 *)GEN_TOP((iVar6 + 8))) != '\0')) {
      (*(int *)(((char *)((undefined *)(gen_frame + 0x68)) + 20))) = *((ushort *)GEN_TOP((iVar6 + 0x114))) - 0x76c;
      (*(int *)(((char *)((undefined *)(gen_frame + 0x68)) + 16))) = *((byte *)GEN_TOP((iVar6 + 0x116))) - 1;
      (*(int *)(((char *)((undefined *)(gen_frame + 0x68)) + 12))) = (uint)*((byte *)GEN_TOP((iVar6 + 0x117)));
      (*(int *)(((char *)((undefined *)(gen_frame + 0x68)) + 8))) = (uint)*((byte *)GEN_TOP((iVar6 + 0x118)));
      (*(int *)(((char *)((undefined *)(gen_frame + 0x68)) + 4))) = (uint)*((byte *)GEN_TOP((iVar6 + 0x119)));
      (*(int *)((char *)((undefined *)(gen_frame + 0x68)))) = (uint)*((byte *)GEN_TOP((iVar6 + 0x11a)));
      _Var7 = F_00c4c109(((undefined *)(gen_frame + 0x68)));
      uVar2 = (undefined4)_Var7;
      (*(undefined4 *)(gen_frame + 0x8)) = *((undefined4 *)GEN_TOP((iVar6 + 0x5c)));
      F_0042b630(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
      (*(undefined4 *)(gen_frame + 0x64)) = 0;
      piVar3 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
      if (piVar3 == ((int *)GEN_TOP(0x0))) {
        F_0042ccf0(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,iVar6 + 0x60);
        puVar5 = ((undefined1 *)(gen_frame + 0x10));
      }
      else {
        uVar8 = 0x17;
        this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG)));
        uVar4 = F_00461bb0(this_00 GEN_EDX_ARG,uVar8,uVar2);
        F_0042e430(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,uVar4);
        F_0042d160(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,0x20);
        uVar4 = F_00560910((*(undefined4 *)(gen_frame + 0x8)));
        F_0042e370(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,uVar4);
        F_0042d160(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,0x20);
        F_0042e360(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,iVar6 + 0x60);
        puVar5 = ((undefined1 *)(gen_frame + 0x10));
      }
    }
    else {
      (*(int *)(((char *)((undefined *)(gen_frame + 0x68)) + 20))) = *((ushort *)GEN_TOP((iVar6 + 0x114))) - 0x76c;
      (*(int *)(((char *)((undefined *)(gen_frame + 0x68)) + 16))) = *((byte *)GEN_TOP((iVar6 + 0x116))) - 1;
      (*(int *)(((char *)((undefined *)(gen_frame + 0x68)) + 12))) = (uint)*((byte *)GEN_TOP((iVar6 + 0x117)));
      (*(int *)(((char *)((undefined *)(gen_frame + 0x68)) + 8))) = (uint)*((byte *)GEN_TOP((iVar6 + 0x118)));
      (*(int *)(((char *)((undefined *)(gen_frame + 0x68)) + 4))) = (uint)*((byte *)GEN_TOP((iVar6 + 0x119)));
      (*(int *)((char *)((undefined *)(gen_frame + 0x68)))) = (uint)*((byte *)GEN_TOP((iVar6 + 0x11a)));
      _Var7 = F_00c4c109(((undefined *)(gen_frame + 0x68)));
      uVar4 = F_004631a0(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,iVar6 + 0x60,0,(int)_Var7,*((undefined4 *)GEN_TOP((iVar6 + 0x5c))),1);
      F_00490cc0(((undefined *)GEN_TOP(((int)this + 0x914))) GEN_EDX_ARG,uVar4);
      F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
      (*(int *)(((char *)((undefined *)(gen_frame + 0x68)) + 20))) = *((ushort *)GEN_TOP((iVar6 + 0x114))) - 0x76c;
      (*(int *)(((char *)((undefined *)(gen_frame + 0x68)) + 16))) = *((byte *)GEN_TOP((iVar6 + 0x116))) - 1;
      (*(int *)(((char *)((undefined *)(gen_frame + 0x68)) + 12))) = (uint)*((byte *)GEN_TOP((iVar6 + 0x117)));
      (*(int *)(((char *)((undefined *)(gen_frame + 0x68)) + 8))) = (uint)*((byte *)GEN_TOP((iVar6 + 0x118)));
      (*(int *)(((char *)((undefined *)(gen_frame + 0x68)) + 4))) = (uint)*((byte *)GEN_TOP((iVar6 + 0x119)));
      (*(int *)((char *)((undefined *)(gen_frame + 0x68)))) = (uint)*((byte *)GEN_TOP((iVar6 + 0x11a)));
      _Var7 = F_00c4c109(((undefined *)(gen_frame + 0x68)));
      puVar5 = ((undefined1 *)GEN_TOP(F_004631a0(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,iVar6 + 0x60,0,(int)_Var7,*((undefined4 *)GEN_TOP((iVar6 + 0x5c))),1)));
    }
    F_00490cc0(((undefined *)GEN_TOP(((int)this + 0x978))) GEN_EDX_ARG,puVar5);
    F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
    (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + 0x170;
    (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) - 1;
  } while ((*(uint *)(gen_frame + 0x0)) != 0);
  *((undefined1 *)GEN_TOP(((int)this + 0x924))) = 1;
  *((undefined1 *)GEN_TOP(((int)this + 0x988))) = 1;
  return (uint)this;
}

/* ref: FUN_00466530 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00466530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x466530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_GS(0x98, 8, 4);
  undefined * pvVar1;
  int iVar2;
  undefined1 * puVar3;
  undefined1 * puVar4;
  undefined4 uVar5;
  int * piVar6;
  undefined * pvVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  __time64_t _Var12;
  undefined4 uVar13;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x90)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x94));
  pvVar1 = ((undefined *)GEN_TOP(((int)this + 0x928)));
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
  (*(int *)(gen_frame + 0x8)) = param_1;
  F_00488e70(pvVar1 GEN_EDX_FWD,&(*(int *)(gen_frame + 0x0)),*((undefined4 *)GEN_TOP(((int)this + 0x928))),
               *((undefined4 *)GEN_TOP(((int)this + 0x92c))));
  iVar10 = (*((int *)GEN_TOP((param_1 + 0xac))) - *((int *)GEN_TOP((param_1 + 0xa8)))) / 0x1b8;
  iVar11 = param_1;
  if (0 < iVar10) {
    (*(undefined * PTR32 *)(gen_frame + 0x10)) = ((undefined *)GEN_TOP(0x0));
    (*(undefined * PTR32 *)(gen_frame + 0xc)) = ((undefined *)GEN_TOP(iVar10));
    iVar10 = param_1;
    do {
      iVar10 = *((int *)GEN_TOP((iVar10 + 0xa8))) + (int)(*(undefined * PTR32 *)(gen_frame + 0x10));
      (*(int *)(((char *)((undefined *)(gen_frame + 0x6c)) + 20))) = *((ushort *)GEN_TOP((iVar10 + 0xb0))) - 0x76c;
      (*(int *)(((char *)((undefined *)(gen_frame + 0x6c)) + 16))) = *((byte *)GEN_TOP((iVar10 + 0xb2))) - 1;
      (*(int *)(((char *)((undefined *)(gen_frame + 0x6c)) + 12))) = (uint)*((byte *)GEN_TOP((iVar10 + 0xb3)));
      (*(int *)(((char *)((undefined *)(gen_frame + 0x6c)) + 8))) = (uint)*((byte *)GEN_TOP((iVar10 + 0xb4)));
      (*(int *)(((char *)((undefined *)(gen_frame + 0x6c)) + 4))) = (uint)*((byte *)GEN_TOP((iVar10 + 0xb5)));
      (*(int *)((char *)((undefined *)(gen_frame + 0x6c)))) = (uint)*((byte *)GEN_TOP((iVar10 + 0xb6)));
      _Var12 = F_00c4c109(((undefined *)(gen_frame + 0x6c)));
      uVar5 = (undefined4)_Var12;
      F_0042b630(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
      (*(undefined4 *)(gen_frame + 0x68)) = 0;
      piVar6 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
      if (piVar6 == ((int *)GEN_TOP(0x0))) {
        F_0042ccf0(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,iVar10);
      }
      else {
        uVar13 = 0x17;
        pvVar7 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x18))))(piVar6 GEN_EDX_ARG)));
        uVar8 = F_00461bb0(pvVar7 GEN_EDX_ARG,uVar13,uVar5);
        F_0042e430(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,uVar8);
        F_0042d160(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,0x20);
        F_0042e360(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,iVar10);
      }
      F_00490cc0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)));
      F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
      (*(undefined * PTR32 *)(gen_frame + 0x10)) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 0x1b8)));
      iVar2 = (int)(*(undefined * PTR32 *)(gen_frame + 0xc)) - 1;
      (*(undefined * PTR32 *)(gen_frame + 0xc)) = ((undefined *)GEN_TOP(iVar2));
      this = (*(undefined * PTR32 *)(gen_frame + 0x4));
      iVar10 = (*(int *)(gen_frame + 0x8));
      iVar11 = (*(int *)(gen_frame + 0x8));
    } while (iVar2 != 0);
  }
  *((undefined1 *)GEN_TOP(((int)this + 0x938))) = 1;
  pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x93c)));
  if (pvVar1 != *((undefined * PTR32 *)GEN_TOP(((int)this + 0x940)))) {
    (*(undefined * PTR32 *)(gen_frame + 0x10)) = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x940)));
    (*(undefined * PTR32 *)(gen_frame + 0xc)) = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x940)));
    pvVar7 = pvVar1;
    if (pvVar1 != *((undefined * PTR32 *)GEN_TOP(((int)this + 0x940)))) {
      do {
        F_0042c880(pvVar7 GEN_EDX_ARG);
        pvVar7 = ((undefined *)GEN_TOP(((int)pvVar7 + 0x58)));
      } while (pvVar7 != (*(undefined * PTR32 *)(gen_frame + 0xc)));
    }
    *((undefined * PTR32 *)GEN_TOP(((int)this + 0x940))) = pvVar1;
    iVar11 = (*(int *)(gen_frame + 0x8));
  }
  iVar10 = (*((int *)GEN_TOP((iVar11 + 0xcc))) - *((int *)GEN_TOP((iVar11 + 200)))) / 0x58;
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = ((undefined *)GEN_TOP(0x0));
  (*(int *)(gen_frame + 0x0)) = iVar10;
  if (0 < iVar10) {
    (*(undefined * PTR32 *)(gen_frame + 0x10)) = ((undefined *)GEN_TOP(0x0));
    do {
      iVar10 = *((int *)GEN_TOP((iVar11 + 200))) + (int)(*(undefined * PTR32 *)(gen_frame + 0x10));
      uVar5 = *((undefined4 *)GEN_TOP((iVar10 + 0x54)));
      F_0042cbc0(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,iVar10);
      puVar3 = *((undefined1 * PTR32 *)GEN_TOP(((int)this + 0x940)));
      (*(undefined4 *)(gen_frame + 0x68)) = uVar5;
      if ((((undefined1 *)(gen_frame + 0x14)) < puVar3) && (puVar4 = *((undefined1 * PTR32 *)GEN_TOP(((int)this + 0x93c))), puVar4 <= ((undefined1 *)(gen_frame + 0x14))))
      {
        if (puVar3 == *((undefined1 * PTR32 *)GEN_TOP(((int)this + 0x944)))) {
          iVar10 = ((int)puVar3 - *((int *)GEN_TOP(((int)this + 0x93c)))) / 0x58;
          if (iVar10 == -1) {
LAB_00466929: ;
                    
            F_00c4579a(((char *)REFP(0x108497c)));
          }
          uVar8 = ((int)*((undefined1 * PTR32 *)GEN_TOP(((int)this + 0x944))) - *((int *)GEN_TOP(((int)this + 0x93c)))) / 0x58;
          uVar9 = iVar10 + 1;
          if (uVar8 < uVar9) {
            if (-(uVar8 >> 1) - 1 < uVar8) {
              uVar8 = 0;
            }
            else {
              uVar8 = uVar8 + (uVar8 >> 1);
            }
            if (uVar8 < uVar9) {
              uVar8 = uVar9;
            }
            F_00489190(((undefined *)GEN_TOP(((int)this + 0x93c))) GEN_EDX_ARG,uVar8);
          }
        }
        pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x940)));
        iVar10 = (((int)((undefined1 *)(gen_frame + 0x14)) - (int)puVar4) / 0x58) * 0x58 + *((int *)GEN_TOP(((int)this + 0x93c)));
        if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
          F_0042cbc0(pvVar1 GEN_EDX_ARG,iVar10);
          *((undefined4 *)GEN_TOP(((int)pvVar1 + 0x54))) = *((undefined4 *)GEN_TOP((iVar10 + 0x54)));
        }
      }
      else {
        if (puVar3 == *((undefined1 * PTR32 *)GEN_TOP(((int)this + 0x944)))) {
          iVar10 = ((int)puVar3 - *((int *)GEN_TOP(((int)this + 0x93c)))) / 0x58;
          if (iVar10 == -1) goto LAB_00466929;
          uVar8 = ((int)*((undefined1 * PTR32 *)GEN_TOP(((int)this + 0x944))) - *((int *)GEN_TOP(((int)this + 0x93c)))) / 0x58;
          uVar9 = iVar10 + 1;
          if (uVar8 < uVar9) {
            if (-(uVar8 >> 1) - 1 < uVar8) {
              uVar8 = 0;
            }
            else {
              uVar8 = uVar8 + (uVar8 >> 1);
            }
            if (uVar8 < uVar9) {
              uVar8 = uVar9;
            }
            F_00489190(((undefined *)GEN_TOP(((int)this + 0x93c))) GEN_EDX_ARG,uVar8);
          }
        }
        pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x940)));
        if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
          F_0042cbc0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)));
          *((undefined4 *)GEN_TOP(((int)pvVar1 + 0x54))) = (*(undefined4 *)(gen_frame + 0x68));
        }
      }
      *((int *)GEN_TOP(((int)this + 0x940U))) = *((int *)GEN_TOP(((int)this + 0x940U))) + 0x58;
      F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
      (*(undefined * PTR32 *)(gen_frame + 0x10)) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 0x58)));
      iVar10 = (int)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 1;
      (*(undefined * PTR32 *)(gen_frame + 0xc)) = ((undefined *)GEN_TOP(iVar10));
      iVar11 = (*(int *)(gen_frame + 0x8));
    } while (iVar10 < (*(int *)(gen_frame + 0x0)));
  }
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 0x94c))) = 1;
  return (uint)(*(undefined * PTR32 *)(gen_frame + 0x4));
}

/* ref: FUN_00466940 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00466940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x466940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_GS(0x8c, 4, 4);
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined4 uVar3;
  int * piVar4;
  undefined * this_00;
  int iVar5;
  __time64_t _Var6;
  ulonglong uVar7;
  undefined4 uVar8;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x84)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x88));
  iVar5 = (*((int *)GEN_TOP((param_1 + 0xac))) - *((int *)GEN_TOP((param_1 + 0xa8)))) / 0x1b8;
  uVar2 = F_00488e70(((undefined *)GEN_TOP(((int)this + 0x950))) GEN_EDX_FWD,&(*(int *)(gen_frame + 0x4)),*((undefined4 *)GEN_TOP(((int)this + 0x950))),
                       *((undefined4 *)GEN_TOP(((int)this + 0x954))));
  if (0 < iVar5) {
    (*(int *)(gen_frame + 0x0)) = 0;
    (*(int *)(gen_frame + 0x4)) = iVar5;
    do {
      uVar2 = *((uint *)GEN_TOP(((int)this + 0xda8)));
      iVar5 = *((int *)GEN_TOP((param_1 + 0xa8))) + (*(int *)(gen_frame + 0x0));
      if ((uVar2 == 0) ||
         (((-1 < (int)uVar2 && ((int)uVar2 < 7)) &&
          (*((uint *)GEN_TOP((iVar5 + 0x1b4))) == (uint)(byte)(&REFG(undefined, 0x1372328))[(int)(uVar2)])))) {
        if (uVar2 == 2) {
          bVar1 = F_0042b740(((undefined *)GEN_TOP((iVar5 + 0x160))) GEN_EDX_ARG,"Important");
          uVar2 = CONCAT31(extraout_var_00,bVar1);
joined_r0x00466a2b: ;
          if (bVar1 != 0) goto LAB_00466afd;
        }
        else if (uVar2 == 3) {
          bVar1 = F_0042b6a0(((undefined *)GEN_TOP((iVar5 + 0x160))) GEN_EDX_ARG,"Important");
          uVar2 = CONCAT31(extraout_var,bVar1);
          goto joined_r0x00466a2b;
        }
        (*(int *)(((char *)((undefined *)(gen_frame + 0x60)) + 20))) = *((ushort *)GEN_TOP((iVar5 + 0xb0))) - 0x76c;
        (*(int *)(((char *)((undefined *)(gen_frame + 0x60)) + 16))) = *((byte *)GEN_TOP((iVar5 + 0xb2))) - 1;
        (*(int *)(((char *)((undefined *)(gen_frame + 0x60)) + 12))) = (uint)*((byte *)GEN_TOP((iVar5 + 0xb3)));
        (*(int *)(((char *)((undefined *)(gen_frame + 0x60)) + 8))) = (uint)*((byte *)GEN_TOP((iVar5 + 0xb4)));
        (*(int *)(((char *)((undefined *)(gen_frame + 0x60)) + 4))) = (uint)*((byte *)GEN_TOP((iVar5 + 0xb5)));
        (*(int *)((char *)((undefined *)(gen_frame + 0x60)))) = (uint)*((byte *)GEN_TOP((iVar5 + 0xb6)));
        _Var6 = F_00c4c109(((undefined *)(gen_frame + 0x60)));
        uVar3 = (undefined4)_Var6;
        F_0042b630(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
        (*(undefined4 *)(gen_frame + 0x5c)) = 0;
        piVar4 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
        if (piVar4 == ((int *)GEN_TOP(0x0))) {
          F_0042ccf0(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,iVar5);
        }
        else {
          uVar8 = 0x17;
          this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG)));
          uVar2 = F_00461bb0(this_00 GEN_EDX_ARG,uVar8,uVar3);
          F_0042e430(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,uVar2);
          F_0042d160(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,0x20);
          F_0042e360(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,iVar5);
        }
        F_00490cc0(((undefined *)GEN_TOP(((int)this + 0x950))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
        uVar7 = F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
        uVar2 = (uint)uVar7;
      }
LAB_00466afd: ;
      (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 0x1b8;
      iVar5 = (*(int *)(gen_frame + 0x4)) - 1;
      (*(int *)(gen_frame + 0x4)) = iVar5;
    } while (iVar5 != 0);
  }
  *((undefined1 *)GEN_TOP(((int)this + 0x960))) = 1;
  return uVar2;
}

/* ref: FUN_00466b30 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00466b30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x466b30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_GS(0x94, 12, 4);
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  __time64_t _Var4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x8c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x90));
  iVar3 = (*((int *)GEN_TOP((param_1 + 0xac))) - *((int *)GEN_TOP((param_1 + 0xa8)))) / 0x170;
  F_00488e70(((undefined *)GEN_TOP(((int)this + 0x978))) GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x0)),*((undefined4 *)GEN_TOP(((int)this + 0x978))),
               *((undefined4 *)GEN_TOP(((int)this + 0x97c))));
  if (0 < iVar3) {
    (*(int *)(gen_frame + 0xc)) = 0;
    (*(int *)(gen_frame + 0x4)) = iVar3;
    do {
      iVar3 = *((int *)GEN_TOP((param_1 + 0xa8))) + (*(int *)(gen_frame + 0xc));
      (*(int *)(((char *)((undefined *)(gen_frame + 0x68)) + 20))) = *((ushort *)GEN_TOP((iVar3 + 0x114))) - 0x76c;
      (*(int *)(((char *)((undefined *)(gen_frame + 0x68)) + 16))) = *((byte *)GEN_TOP((iVar3 + 0x116))) - 1;
      (*(int *)(((char *)((undefined *)(gen_frame + 0x68)) + 12))) = (uint)*((byte *)GEN_TOP((iVar3 + 0x117)));
      (*(int *)(((char *)((undefined *)(gen_frame + 0x68)) + 8))) = (uint)*((byte *)GEN_TOP((iVar3 + 0x118)));
      (*(int *)(((char *)((undefined *)(gen_frame + 0x68)) + 4))) = (uint)*((byte *)GEN_TOP((iVar3 + 0x119)));
      (*(int *)((char *)((undefined *)(gen_frame + 0x68)))) = (uint)*((byte *)GEN_TOP((iVar3 + 0x11a)));
      _Var4 = F_00c4c109(((undefined *)(gen_frame + 0x68)));
      (*(undefined4 *)(gen_frame + 0x0)) = (int)_Var4;
      F_0042b630(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
      (*(undefined4 *)(gen_frame + 0x64)) = 0;
      piVar1 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
      if (piVar1 == ((int *)GEN_TOP(0x0))) {
        F_0042ccf0(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,iVar3 + 0x60);
      }
      else {
        uVar6 = 0x17;
        uVar7 = (*(undefined4 *)(gen_frame + 0x0));
        this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x18))))(piVar1 GEN_EDX_ARG)));
        uVar2 = F_00461bb0(this_00 GEN_EDX_ARG,uVar6,uVar7);
        F_0042e430(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,uVar2);
        F_0042d160(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,0x20);
        F_0042e360(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,iVar3 + 0x60);
      }
      F_00490cc0(((undefined *)GEN_TOP(((int)this + 0x978))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)));
      uVar5 = F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
      (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + 0x170;
      iVar3 = (*(int *)(gen_frame + 0x4)) - 1;
      (*(int *)(gen_frame + 0x4)) = iVar3;
    } while (iVar3 != 0);
    *((undefined1 *)GEN_TOP(((int)this + 0x988))) = 1;
    return (uint)uVar5;
  }
  *((undefined1 *)GEN_TOP(((int)this + 0x988))) = 1;
  return (uint)this;
}

/* ref: FUN_00466cd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00466cd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x466cd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x80, 0, 4);
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  undefined * this_00;
  uint uVar5;
  int * piVar6;
  undefined * pvVar7;
  undefined3 extraout_var = 0;
  
  pvVar7 = REFG(void * PTR32, 0x137104c);
  uVar4 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  (*(uint *)(gen_frame + 0x78)) = uVar4;
  (*(undefined * PTR32 *)(gen_frame + 0x74)) = REFG(void * PTR32, 0x137104c);
  if ((REFG(void * PTR32, 0x137104c) != ((undefined *)GEN_TOP(0x0))) &&
     (uVar4 = 0, *((int *)GEN_TOP(((int)this + 0x160))) != 0 || *((int *)GEN_TOP(((int)this + 0x164))) != 0)) {
    (*(char * PTR32 *)(gen_frame + 0x50)) = ((char *)GEN_TOP(0x145));
    (*(gen_code32 * PTR32 *)(gen_frame + 0x4c)) = ((gen_code32 *)GEN_TOP(0x466d15));
    this_00 = ((undefined *)GEN_TOP(F_00414500(*((undefined4 *)GEN_TOP(((int)REFG(void * PTR32, 0x137104c) + 0x10))) GEN_EDX_FWD,0x145)));
    (*(char * PTR32 *)(gen_frame + 0x50)) = &REFG(undefined, 0x108d41d);
    (*(gen_code32 * PTR32 *)(gen_frame + 0x4c)) = ((gen_code32 *)GEN_TOP(0x466d24));
    bVar3 = F_0042b6a0(*((undefined * PTR32 *)GEN_TOP(((int)this_00 + 0x14))) GEN_EDX_ARG,&REFG(undefined, 0x108d41d));
    if (bVar3 != 0) {
      (*(char * PTR32 *)(gen_frame + 0x50)) = ((char *)GEN_TOP(0x466d36));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x10))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG);
      if (*((int *)GEN_TOP((uVar4 + 600))) == 0) {
        (*(char * PTR32 *)(gen_frame + 0x50)) = ((char *)REFP(0x108f868));
        (*(gen_code32 * PTR32 *)(gen_frame + 0x4c)) = ((gen_code32 *)GEN_TOP(0x466d50));
        uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((uVar4 + 0x34))) + 8))))(*((int * PTR32 *)GEN_TOP((uVar4 + 0x34))) GEN_EDX_ARG,((char *)REFP(0x108f868)));
        *((uint *)GEN_TOP((uVar4 + 600))) = uVar5;
      }
      (*(char * PTR32 *)(gen_frame + 0x50)) = ((char *)GEN_TOP(0x299));
      (*(gen_code32 * PTR32 *)(gen_frame + 0x4c)) = ((gen_code32 *)GEN_TOP(0x466d68));
      piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((uVar4 + 600))) + 0x24))))(*((int * PTR32 *)GEN_TOP((uVar4 + 600))) GEN_EDX_ARG,0x299)));
      (*(char * PTR32 *)(gen_frame + 0x50)) = ((char *)GEN_TOP(0x0));
      (*(gen_code32 * PTR32 *)(gen_frame + 0x4c)) = ((gen_code32 *)GEN_TOP(0x466d73));
      pvVar7 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 8))))(piVar6 GEN_EDX_ARG)));
      (*(gen_code32 * PTR32 *)(gen_frame + 0x4c)) = ((gen_code32 *)GEN_TOP(0x466d7a));
      uVar4 = F_00cb0950(pvVar7 GEN_EDX_ARG,(*(char * PTR32 *)(gen_frame + 0x50)));
      F_0042cc20((gen_frame + 0x0) GEN_EDX_ARG,uVar4,REFG(undefined4, 0x108cc50));
      F_00414b60(this_00 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),
                   (*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),
                   (*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(int *)(gen_frame + 0x44)),(*(undefined * PTR32 *)(gen_frame + 0x48)),(*(gen_code32 * PTR32 *)(gen_frame + 0x4c)),(*(char * PTR32 *)(gen_frame + 0x50)));
      (*(char * PTR32 *)(gen_frame + 0x50)) = ((char *)GEN_TOP(0x466d9d));
      piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x10))) + 0x58))))
                                (*((int * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG)));
      (*(int * PTR32 *)(gen_frame + 0x70)) = piVar6;
      pvVar7 = ((undefined *)GEN_TOP(((int)piVar6 + 0x15e)));
      (*(char * PTR32 *)(gen_frame + 0x50)) = ((char *)GEN_TOP(0x466db3));
      uVar4 = F_00424750(REFG(void * PTR32, 0x137104c) GEN_EDX_ARG);
      if (uVar4 != 0) {
        (*(char * PTR32 *)(gen_frame + 0x50)) = ((char *)GEN_TOP(0x97));
        (*(gen_code32 * PTR32 *)(gen_frame + 0x4c)) = ((gen_code32 *)GEN_TOP(0x0));
        (*(undefined * PTR32 *)(gen_frame + 0x48)) = pvVar7;
        (*(int *)(gen_frame + 0x44)) = 0x466dc4;
        F_00c48350(pvVar7,0,0x97);
        uVar4 = 0;
        do {
          (*(char * PTR32 *)(gen_frame + 0x50)) = ((char *)GEN_TOP(uVar4));
          (*(gen_code32 * PTR32 *)(gen_frame + 0x4c)) = ((gen_code32 *)GEN_TOP(0x466dd6));
          uVar5 = F_00ab3c30(uVar4);
          if (uVar5 == 0) {
            *((undefined1 *)GEN_TOP((uVar4 + (int)pvVar7))) = 0;
          }
          else {
            *((bool *)GEN_TOP((uVar4 + (int)pvVar7))) = (*((byte *)GEN_TOP((uVar5 + 0xd))) & 4) != 0;
          }
          uVar4 = uVar4 + 1;
          piVar6 = (*(int * PTR32 *)(gen_frame + 0x70));
        } while (uVar4 < 0x97);
      }
      (*(char * PTR32 *)(gen_frame + 0x50)) = ((char *)GEN_TOP(0x1));
      (*(gen_code32 * PTR32 *)(gen_frame + 0x4c)) = ((gen_code32 *)GEN_TOP(0x466e0b));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x20))))(piVar6 GEN_EDX_ARG,1);
      (*(char * PTR32 *)(gen_frame + 0x50)) = ((char *)GEN_TOP(0x466e12));
      F_00454290(piVar6 GEN_EDX_ARG);
      pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x74));
    }
    (*(char * PTR32 *)(gen_frame + 0x50)) = ((char *)GEN_TOP(0x0));
    (*(gen_code32 * PTR32 *)(gen_frame + 0x4c)) = ((gen_code32 *)GEN_TOP(0x466e1e));
    F_00463410(this GEN_EDX_ARG,0);
    (*(char * PTR32 *)(gen_frame + 0x50)) = ((char *)GEN_TOP(0x0));
    (*(undefined4 *)(gen_frame + 0x6c)) = 0;
    (*(gen_code32 * PTR32 *)(gen_frame + 0x4c)) = &(*(gen_code32 *)(gen_frame + 0x60));
    uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x164)));
    (*(undefined * PTR32 *)(gen_frame + 0x48)) = ((undefined *)GEN_TOP(((int)this + 0x10c)));
    uVar2 = *((undefined4 *)GEN_TOP(((int)this + 0x160)));
    (*(gen_code32 *)(gen_frame + 0x68)) = ((code *)REFP(0x4632c0));
    (*(int *)(gen_frame + 0x44)) = (int)this + 0x40;
    (*(undefined4 *)(gen_frame + 0x40)) = uVar1;
    (*(undefined4 *)(gen_frame + 0x3c)) = uVar2;
    (*(gen_code32 *)(gen_frame + 0x60)) = ((code *)REFP(0x474710));
    (*(undefined * PTR32 *)(gen_frame + 0x64)) = this;
    (*(undefined4 *)(gen_frame + 0x38)) = 0x466e5a;
    bVar3 = F_00976c10(pvVar7 GEN_EDX_ARG,uVar2,uVar1,(int)this + 0x40,(int)this + 0x10c,&(*(gen_code32 *)(gen_frame + 0x60)),0);
    uVar4 = CONCAT31(extraout_var,bVar3);
  }
  (*(undefined4 *)(gen_frame + 0x5c)) = 0x466e67;
  return uVar4;
}

/* ref: FUN_00466e70 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00466e70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x466e70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  if (*((int *)GEN_TOP(((int)this + 0x1c))) != 0) {
    if (param_1 != 0) {
      ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0x18))))
                (*((undefined4 *)GEN_TOP(((int)this + 0x1c))),(int)this + 0x20,2,
                 *((undefined4 *)GEN_TOP(((int)this + 0x38))));
      *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
      return;
    }
    F_00466cd0(this GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_00466eb0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00466eb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x466eb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  undefined4 uVar1;
  undefined4 uVar2;
  undefined * this_00;
  byte bVar3;
  
  this_00 = REFG(void * PTR32, 0x137104c);
  if ((REFG(void * PTR32, 0x137104c) != ((undefined *)GEN_TOP(0x0))) &&
     (*((int *)GEN_TOP(((int)this + 0x160))) != 0 || *((int *)GEN_TOP(((int)this + 0x164))) != 0)) {
    F_00463410(this GEN_EDX_FWD,1);
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x164)));
    uVar2 = *((undefined4 *)GEN_TOP(((int)this + 0x160)));
    (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)REFP(0x447d30));
    (*(gen_code32 *)(gen_frame + 0x0)) = ((code *)REFP(0x474710));
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
    bVar3 = F_00976c10(this_00 GEN_EDX_ARG,uVar2,uVar1,(int)this + 0x40,(int)this + 0x10c,&(*(gen_code32 *)(gen_frame + 0x0)),0);
    if (bVar3 == 0) {
      *((undefined1 *)GEN_TOP(((int)this + 0x16c))) = 1;
    }
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x160))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x164))) = 0;
  return 0;
}

/* ref: FUN_00466f40 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00466f40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x466f40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  undefined4 uVar1;
  undefined4 uVar2;
  undefined * this_00;
  byte bVar3;
  
  this_00 = REFG(void * PTR32, 0x137104c);
  if ((REFG(void * PTR32, 0x137104c) == ((undefined *)GEN_TOP(0x0))) ||
     (*((int *)GEN_TOP(((int)this + 0x160))) == 0 && *((int *)GEN_TOP(((int)this + 0x164))) == 0)) {
    return 0;
  }
  if ((REFG(void * PTR32, 0x137104c) != ((undefined *)GEN_TOP(0x0))) &&
     ((*((char *)GEN_TOP((*((int *)GEN_TOP(((int)REFG(void * PTR32, 0x137104c) + 0x10))) + 0xac))) != '\0' &&
      (bVar3 = F_00976910(REFG(void * PTR32, 0x137104c) GEN_EDX_FWD), bVar3 == 0)))) {
    *((undefined4 *)GEN_TOP(((int)this + 0x28))) = *param_1;
    *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = param_1[1];
    *((undefined4 *)GEN_TOP(((int)this + 0x30))) = param_1[2];
    *((undefined4 *)GEN_TOP(((int)this + 0x34))) = param_1[3];
    F_00463410(this GEN_EDX_ARG,1);
    (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)REFP(0x447d40));
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x164)));
    uVar2 = *((undefined4 *)GEN_TOP(((int)this + 0x160)));
    (*(gen_code32 *)(gen_frame + 0x0)) = ((code *)REFP(0x474710));
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
    F_00976c10(this_00 GEN_EDX_ARG,uVar2,uVar1,(int)this + 0x40,(int)this + 0x10c,&(*(gen_code32 *)(gen_frame + 0x0)),0);
    return 0;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x1b0))) = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1b4))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 0x1b8))) = param_1[2];
  *((undefined4 *)GEN_TOP(((int)this + 0x1bc))) = param_1[3];
  *((undefined1 *)GEN_TOP(((int)this + 0x16e))) = 1;
  return 0;
}

/* ref: Client::UI::Misc::ConfigModule::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00467030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x467030u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  int * piVar1;
  undefined1 uVar2;
  
  uVar2 = 0;
  if (param_4 == 0) {
    if (((*param_2 & 0xf) == 0) || (*(int *)(param_2 + 4) == 0)) {
      F_00466cd0(this GEN_EDX_FWD);
    }
    else if (*(int *)(this + 0x1c) != 0) {
      ((code *)*(gen_code32 *)(this + 0x18))
                (*(undefined4 *)(this + 0x1c),this + 0x20,1,*(undefined4 *)(this + 0x38));
      goto LAB_004670cc;
    }
LAB_004670d2: ;
    uVar2 = 1;
  }
  else {
    if (param_4 == 1) {
      if (*(int *)(this + 0x1c) != 0) {
        ((code *)*(gen_code32 *)(this + 0x18))
                  (*(undefined4 *)(this + 0x1c),this + 0x20,1,*(undefined4 *)(this + 0x38));
LAB_004670cc: ;
        *(undefined4 *)(this + 0x1c) = 0;
      }
      goto LAB_004670d2;
    }
    if (param_4 == 2) {
      if (*(int *)(this + 0x1c) != 0) {
        ((code *)*(gen_code32 *)(this + 0x18))
                  (*(undefined4 *)(this + 0x1c),this + 0x20,1,*(undefined4 *)(this + 0x38));
        goto LAB_004670cc;
      }
      goto LAB_004670d2;
    }
    if (*(int *)(this + 0x14) == 0) goto LAB_004670d7;
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x10) + 0x1c))))(*(int * PTR32 *)(this + 0x10) GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 0x14),0);
    uVar2 = 0;
  }
  *(undefined4 *)(this + 0x14) = 0;
LAB_004670d7: ;
  *(undefined1 *)(param_1 + 1) = uVar2;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: FUN_004670f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004670f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4670f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  int * piVar3;
  undefined4 uVar4;
  
  *((undefined2 *)GEN_TOP(((int)this + 0x40))) = (undefined2)param_2;
  if (*((int *)GEN_TOP(((int)this + 0x10))) == 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x44))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *((undefined4 *)GEN_TOP((uVar2 + 0x3c)));
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x10)));
  if (uVar2 != 0) {
    *((undefined2 *)GEN_TOP((uVar2 + 0x2e))) = (undefined2)param_2;
  }
  if (*((byte *)GEN_TOP(((int)this + 0x30))) < 3) {
    if (*((int *)GEN_TOP(((int)this + 0x14))) == 0) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x44))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
      *((undefined4 *)GEN_TOP(((int)this + 0x14))) = *((undefined4 *)GEN_TOP((uVar2 + 0x40)));
    }
    if (*((int *)GEN_TOP(((int)this + 0x14))) != 0) {
      bVar1 = F_00437160(*((int *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,param_1,1);
      return CONCAT31(extraout_var,bVar1);
    }
  }
  else {
    if (*((int *)GEN_TOP(((int)this + 0x10))) == 0) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x44))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
      *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *((undefined4 *)GEN_TOP((uVar2 + 0x3c)));
    }
    if (*((int *)GEN_TOP(((int)this + 0x10))) != 0) {
      F_00437920(*((int *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,param_1,1);
    }
    uVar4 = 0x3f;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x48))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
    piVar3 = ((int *)GEN_TOP(F_00763050(uVar2 GEN_EDX_ARG,uVar4)));
    uVar2 = 0;
    if (piVar3 != ((int *)GEN_TOP(0x0))) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x10))))(piVar3 GEN_EDX_ARG);
      if ((char)uVar2 != '\0') {
        uVar2 = F_00463c90(this GEN_EDX_ARG);
      }
    }
  }
  return uVar2;
}

/* ref: FUN_004671b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004671b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4671b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  int * piVar3;
  short sVar4;
  undefined4 uVar5;
  
  if (*((short *)GEN_TOP(((int)this + 0x40))) == 0) {
    sVar4 = 0;
  }
  else {
    sVar4 = *((short *)GEN_TOP(((int)this + 0x40))) - 1;
  }
  *((short *)GEN_TOP(((int)this + 0x40))) = sVar4;
  if (*((int *)GEN_TOP(((int)this + 0x10))) == 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x44))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *((undefined4 *)GEN_TOP((uVar2 + 0x3c)));
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x10)));
  if (uVar2 != 0) {
    *((short *)GEN_TOP((uVar2 + 0x2e))) = sVar4;
  }
  if (*((byte *)GEN_TOP(((int)this + 0x30))) < 3) {
    if (*((int *)GEN_TOP(((int)this + 0x14))) == 0) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x44))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
      *((undefined4 *)GEN_TOP(((int)this + 0x14))) = *((undefined4 *)GEN_TOP((uVar2 + 0x40)));
    }
    if (*((int *)GEN_TOP(((int)this + 0x14))) != 0) {
      bVar1 = F_00437160(*((int *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,param_1,0);
      return CONCAT31(extraout_var,bVar1);
    }
  }
  else {
    if (*((int *)GEN_TOP(((int)this + 0x10))) == 0) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x44))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
      *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *((undefined4 *)GEN_TOP((uVar2 + 0x3c)));
    }
    if (*((int *)GEN_TOP(((int)this + 0x10))) != 0) {
      F_00437920(*((int *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,param_1,0);
    }
    uVar5 = 0x3f;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x48))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
    piVar3 = ((int *)GEN_TOP(F_00763050(uVar2 GEN_EDX_ARG,uVar5)));
    uVar2 = 0;
    if (piVar3 != ((int *)GEN_TOP(0x0))) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x10))))(piVar3 GEN_EDX_ARG);
      if ((char)uVar2 != '\0') {
        uVar2 = F_00463c90(this GEN_EDX_ARG);
      }
    }
  }
  return uVar2;
}

/* ref: FUN_00467280 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00467280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x467280u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  byte bVar1;
  short sVar2;
  uint uVar3;
  int * piVar4;
  undefined3 extraout_var = 0;
  undefined4 uVar5;
  
  sVar2 = *((short *)GEN_TOP(((int)this + 0x40))) + 1;
  *((short *)GEN_TOP(((int)this + 0x40))) = sVar2;
  if (*((int *)GEN_TOP(((int)this + 0x10))) == 0) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x44))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *((undefined4 *)GEN_TOP((uVar3 + 0x3c)));
  }
  if (*((int *)GEN_TOP(((int)this + 0x10))) != 0) {
    *((short *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2e))) = sVar2;
  }
  *((short *)GEN_TOP(((int)this + 0x42))) = *((short *)GEN_TOP(((int)this + 0x42))) + 1;
  uVar5 = 0x3f;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x48))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
  piVar4 = ((int *)GEN_TOP(F_00763050(uVar3 GEN_EDX_ARG,uVar5)));
  uVar3 = 0;
  if (piVar4 != ((int *)GEN_TOP(0x0))) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x10))))(piVar4 GEN_EDX_ARG);
    if ((char)uVar3 != '\0') {
      F_00463c90(this GEN_EDX_ARG);
      bVar1 = F_00441d60();
      uVar3 = CONCAT31(extraout_var,bVar1);
    }
  }
  return uVar3;
}

/* ref: FUN_004672f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004672f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4672f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  short sVar1;
  uint uVar2;
  int * piVar3;
  undefined4 uVar4;
  
  sVar1 = *((short *)GEN_TOP(((int)this + 0x40))) - 1;
  *((short *)GEN_TOP(((int)this + 0x40))) = sVar1;
  if (*((int *)GEN_TOP(((int)this + 0x10))) == 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x44))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *((undefined4 *)GEN_TOP((uVar2 + 0x3c)));
  }
  if (*((int *)GEN_TOP(((int)this + 0x10))) != 0) {
    *((short *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2e))) = sVar1;
  }
  *((short *)GEN_TOP(((int)this + 0x42))) = *((short *)GEN_TOP(((int)this + 0x42))) - 1;
  uVar4 = 0x3f;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x48))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
  piVar3 = ((int *)GEN_TOP(F_00763050(uVar2 GEN_EDX_ARG,uVar4)));
  uVar2 = 0;
  if (piVar3 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x10))))(piVar3 GEN_EDX_ARG);
    if ((char)uVar2 != '\0') {
      F_00463c90(this GEN_EDX_ARG);
      F_00441d60();
      uVar2 = F_0044da80(this GEN_EDX_ARG);
    }
  }
  return uVar2;
}

/* ref: FUN_00467370 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00467370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x467370u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint uVar1;
  undefined * this_00;
  undefined4 uVar2;
  
  uVar1 = param_2;
  if (param_2 < 0x15) {
    F_00464400(this GEN_EDX_FWD,param_1,param_2,1);
    uVar2 = 0x3c;
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x48))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
    this_00 = ((undefined *)GEN_TOP(F_00763050(uVar1 GEN_EDX_ARG,uVar2)));
    uVar1 = 0;
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      uVar1 = F_007df2a0(this_00 GEN_EDX_ARG);
    }
  }
  return uVar1;
}

/* ref: FUN_004673b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004673b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4673b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * puVar1;
  uint uVar2;
  
  if ((*((char *)GEN_TOP(((int)this + 8))) != '\0') && (**((char * PTR32 *)GEN_TOP(((int)this + 0xc))) == '\0')) {
    puVar1 = ((undefined *)GEN_TOP(F_00465440(*((char *)GEN_TOP(((int)this + 8))),*(undefined4 *)this)));
    if (puVar1 == ((undefined *)GEN_TOP(0x0))) {
      puVar1 = &REFG(undefined, 0x108d111);
    }
    F_0042e430(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,puVar1);
    if ((**((char * PTR32 *)GEN_TOP(((int)this + 0xc))) != '\0') && (**((char * PTR32 *)GEN_TOP(((int)this + 0x60))) != '\0')) {
      F_0042d4d0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,(int)this + 0x60);
    }
  }
  uVar2 = F_0042a990((int)this + 0xc GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00467410 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00467410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x467410u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if ((*((char *)GEN_TOP(((int)this + 8))) != '\0') && (**((char * PTR32 *)GEN_TOP(((int)this + 0xbc))) == '\0')) {
    uVar1 = F_00465700(this GEN_EDX_FWD,*((undefined1 *)GEN_TOP(((int)this + 9))),*((undefined4 *)GEN_TOP(((int)this + 4))));
    F_0042e430(((undefined *)GEN_TOP(((int)this + 0xbc))) GEN_EDX_ARG,uVar1);
  }
  uVar1 = F_0042a990((int)this + 0xbc GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00467450 */
GEN_OWN_GS GEN_FRAME byte GEN_THISCALL F_00467450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x467450u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  undefined4 * puVar1;
  uint uVar2;
  int * piVar3;
  undefined * this_00;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  if ((*((int *)GEN_TOP(((int)this + 0x27a8))) != 0) && (param_1[4] != 0)) {
    uVar2 = param_1[3];
    iVar4 = 0;
    if (((int *)GEN_TOP(*param_1)) != ((int *)GEN_TOP(0x0))) {
      iVar4 = *((int *)GEN_TOP(*param_1));
    }
    if (*((uint *)GEN_TOP((iVar4 + 8))) <= uVar2) {
      uVar2 = uVar2 - *((uint *)GEN_TOP((iVar4 + 8)));
    }
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 4))) + uVar2 * 4)));
    F_0042aca0(param_2 GEN_EDX_FWD);
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x27a8))) + 0x24))))
                              (*((int * PTR32 *)GEN_TOP(((int)this + 0x27a8))) GEN_EDX_ARG,*puVar1)));
    uVar5 = 3;
    uVar6 = REFG(undefined4, 0x108cc50);
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 8))))(piVar3 GEN_EDX_ARG)));
    uVar2 = F_00cb0950(this_00 GEN_EDX_ARG,uVar5);
    F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar2,uVar6);
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x5c))) + 0xc))))
                      (*((int * PTR32 *)GEN_TOP(((int)this + 0x5c))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),puVar1 + 1,param_2);
    F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    if (uVar2 == 0xffffffff) {
      F_004945e0(param_1 GEN_EDX_ARG);
    }
    else if (uVar2 == 1) {
      F_004945e0(param_1 GEN_EDX_ARG);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG);
      return 1;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG);
  }
  return 0;
}

/* ref: FUN_00467560 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00467560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x467560u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL(0x34, 12);
  int iVar1;
  char cVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined * pvVar5;
  byte bVar6;
  uint uVar7;
  undefined4 * puVar8;
  uint uVar9;
  int * piVar10;
  int * piVar11;
  int * PTR32 * ppiVar12;
  uint uVar13;
  int iVar14;
  int * piVar15;
  undefined * pvVar16;
  int * piVar17;
  
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = this;
  if ((*((int *)GEN_TOP(((int)this + 0x60))) == 0) || (*((short *)GEN_TOP((param_1 + 0x720))) != 0)) {
    (*(int * PTR32 *)(gen_frame + 0x24)) = *((int * PTR32 *)GEN_TOP((param_1 + 0x730)));
    if ((-1 < *((int *)GEN_TOP((param_1 + 0x73c)))) && (-1 < *((int *)GEN_TOP((param_1 + 0x740))))) {
      (*(char *)(gen_frame + 0x2f)) = '\0';
      uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD);
      if (*((int *)GEN_TOP((param_1 + 0x73c))) < (int)uVar7) {
        *((uint *)GEN_TOP((param_1 + 0x73c))) = uVar7;
        (*(char *)(gen_frame + 0x2f)) = '\x01';
      }
      piVar15 = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP((param_1 + 0x730)))));
      (*(int * PTR32 *)(gen_frame + 0x14)) = ((int *)GEN_TOP(0x0));
      if (piVar15 != (*(int * PTR32 *)(gen_frame + 0x24))) {
        do {
          cVar2 = *((char *)GEN_TOP(((int)piVar15 + 0x69)));
          uVar7 = piVar15[3];
          (*(uint *)(gen_frame + 0x18)) = uVar7;
          if (cVar2 == '\0') {
            piVar17 = ((int *)GEN_TOP(piVar15[2]));
            if (*((char *)GEN_TOP(((int)piVar17 + 0x69))) == '\0') {
              cVar2 = *((char *)GEN_TOP((*piVar17 + 0x69)));
              piVar15 = piVar17;
              piVar17 = ((int *)GEN_TOP(*piVar17));
              while (cVar2 == '\0') {
                cVar2 = *((char *)GEN_TOP((*piVar17 + 0x69)));
                piVar15 = piVar17;
                piVar17 = ((int *)GEN_TOP(*piVar17));
              }
            }
            else {
              cVar2 = *((char *)GEN_TOP((piVar15[1] + 0x69)));
              piVar10 = ((int *)GEN_TOP(piVar15[1]));
              piVar17 = piVar15;
              while ((piVar15 = piVar10, cVar2 == '\0' && (piVar17 == ((int *)GEN_TOP(piVar15[2]))))) {
                cVar2 = *((char *)GEN_TOP((piVar15[1] + 0x69)));
                piVar10 = ((int *)GEN_TOP(piVar15[1]));
                piVar17 = piVar15;
              }
            }
          }
          if ((int)uVar7 < *((int *)GEN_TOP((param_1 + 0x73c)))) {
            F_0047f720(((undefined *)GEN_TOP((param_1 + 0x72c))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x1c)),&(*(uint *)(gen_frame + 0x18)));
            F_00488bc0(((undefined *)GEN_TOP((param_1 + 0x72c))) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x1c)),(*(uint *)(gen_frame + 0x20)));
            (*(int * PTR32 *)(gen_frame + 0x14)) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x14)) + 1)));
          }
          else if (*((int *)GEN_TOP((param_1 + 0x740))) < (int)uVar7) {
            F_0047f720(((undefined *)GEN_TOP((param_1 + 0x72c))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x4)),&(*(uint *)(gen_frame + 0x18)));
            F_00488bc0(((undefined *)GEN_TOP((param_1 + 0x72c))) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
          }
        } while (piVar15 != (*(int * PTR32 *)(gen_frame + 0x24)));
      }
      if (((*(char *)(gen_frame + 0x2f)) != '\0') && ((*(int * PTR32 *)(gen_frame + 0x14)) != ((int *)GEN_TOP(0x0)))) {
        F_0045a710(this GEN_EDX_ARG,param_1);
        return;
      }
    }
    (*(uint *)(gen_frame + 0x20)) = 0;
    if (-1 < *((int *)GEN_TOP((param_1 + 0x73c)))) {
      (*(int * PTR32 *)(gen_frame + 0x14)) = ((int *)GEN_TOP(0x3));
      puVar8 = ((undefined4 *)GEN_TOP(F_00484340(((undefined *)GEN_TOP((param_1 + 0x72c))) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0xc)),param_1 + 0x73c)));
      piVar15 = ((int *)GEN_TOP(*puVar8));
      (*(int * PTR32 *)(gen_frame + 0x10)) = piVar15;
      if (piVar15 != (*(int * PTR32 *)(gen_frame + 0x24))) {
        do {
          piVar15 = (*(int * PTR32 *)(gen_frame + 0x10));
          if (*((int *)GEN_TOP((param_1 + 0x744))) <= (*(int * PTR32 *)(gen_frame + 0x10))[3]) break;
          if ((*(int * PTR32 *)(gen_frame + 0x10))[4] == 0) {
            iVar14 = (int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x25c;
            iVar1 = (int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x1b4;
            bVar6 = F_004570d0((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,(*(int * PTR32 *)(gen_frame + 0x10))[3],&(*(uint *)(gen_frame + 0x18)),(int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x160,iVar1,iVar14);
            if (bVar6 != 0) {
              uVar7 = F_00465b90((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x18)) & 0x7f,(int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x160,iVar1,iVar14,
                                   param_1 + 0x71c,piVar15 + 5);
              piVar17 = ((int *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x14)) - 1)));
              (*(int * PTR32 *)(gen_frame + 0x14)) = piVar17;
              piVar15[4] = uVar7;
              if ((int)piVar17 < 0) break;
            }
          }
          F_0047c010(&(*(int * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG);
        } while ((*(int * PTR32 *)(gen_frame + 0x10)) != (*(int * PTR32 *)(gen_frame + 0x24)));
      }
    }
    if (-1 < *((int *)GEN_TOP((param_1 + 0x744)))) {
      piVar15 = *((int * PTR32 *)GEN_TOP((param_1 + 0x730)));
      if (*((char *)GEN_TOP((piVar15[1] + 0x69))) == '\0') {
        piVar17 = ((int *)GEN_TOP(piVar15[1]));
        do {
          if (piVar17[3] < *((int *)GEN_TOP((param_1 + 0x744)))) {
            piVar10 = ((int *)GEN_TOP(piVar17[2]));
          }
          else {
            piVar10 = ((int *)GEN_TOP(*piVar17));
            piVar15 = piVar17;
          }
          piVar17 = piVar10;
        } while (*((char *)GEN_TOP(((int)piVar10 + 0x69))) == '\0');
      }
      piVar17 = *((int * PTR32 *)GEN_TOP((param_1 + 0x730)));
      (*(int * PTR32 *)(gen_frame + 0x10)) = piVar15;
      if ((piVar15 == piVar17) || (*((int *)GEN_TOP((param_1 + 0x744))) < piVar15[3])) {
        (*(int * PTR32 *)(gen_frame + 0x14)) = piVar17;
        ppiVar12 = &(*(int * PTR32 *)(gen_frame + 0x14));
      }
      else {
        ppiVar12 = &(*(int * PTR32 *)(gen_frame + 0x10));
      }
      piVar15 = *ppiVar12;
      if (piVar15 != (*(int * PTR32 *)(gen_frame + 0x24))) {
        do {
          if (*((int *)GEN_TOP((param_1 + 0x748))) < piVar15[3]) break;
          if (piVar15[4] < 1) {
            iVar14 = (int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x25c;
            bVar6 = F_004570d0((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,piVar15[3],&(*(uint *)(gen_frame + 0x18)),(int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x160,
                                 (int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x1b4,iVar14);
            if (bVar6 == 0) goto LAB_00467850;
            uVar7 = F_00465b90((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x18)) & 0x7f,(int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x160,(int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x1b4,
                                 iVar14,param_1 + 0x71c,piVar15 + 5);
            if (0 < (int)uVar7) {
              piVar15[4] = uVar7;
              goto LAB_00467850;
            }
            piVar15[4] = piVar15[4] - 1;
            if (piVar15[4] < -5) {
              (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x20)) + 1;
              piVar15[4] = 1;
              F_0042e430(piVar15 + 5 GEN_EDX_ARG,&REFG(undefined, 0x108d1e1));
            }
          }
          else {
LAB_00467850: ;
            (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x20)) + 1;
          }
          if (*((char *)GEN_TOP(((int)piVar15 + 0x69))) == '\0') {
            piVar17 = ((int *)GEN_TOP(piVar15[2]));
            if (*((char *)GEN_TOP(((int)piVar17 + 0x69))) == '\0') {
              cVar2 = *((char *)GEN_TOP((*piVar17 + 0x69)));
              piVar15 = piVar17;
              piVar17 = ((int *)GEN_TOP(*piVar17));
              while (cVar2 == '\0') {
                cVar2 = *((char *)GEN_TOP((*piVar17 + 0x69)));
                piVar15 = piVar17;
                piVar17 = ((int *)GEN_TOP(*piVar17));
              }
            }
            else {
              cVar2 = *((char *)GEN_TOP((piVar15[1] + 0x69)));
              piVar10 = ((int *)GEN_TOP(piVar15[1]));
              piVar17 = piVar15;
              while ((piVar15 = piVar10, cVar2 == '\0' && (piVar17 == ((int *)GEN_TOP(piVar15[2]))))) {
                cVar2 = *((char *)GEN_TOP((piVar15[1] + 0x69)));
                piVar10 = ((int *)GEN_TOP(piVar15[1]));
                piVar17 = piVar15;
              }
            }
          }
        } while (piVar15 != (*(int * PTR32 *)(gen_frame + 0x24)));
      }
    }
    if (-1 < *((int *)GEN_TOP((param_1 + 0x748)))) {
      piVar15 = *((int * PTR32 *)GEN_TOP((param_1 + 0x730)));
      piVar17 = ((int *)GEN_TOP(piVar15[1]));
      cVar2 = *((char *)GEN_TOP(((int)piVar17 + 0x69)));
      (*(int * PTR32 *)(gen_frame + 0x14)) = ((int *)GEN_TOP(0x3));
      if (cVar2 == '\0') {
        do {
          if (piVar17[3] < *((int *)GEN_TOP((param_1 + 0x748)))) {
            piVar10 = ((int *)GEN_TOP(piVar17[2]));
          }
          else {
            piVar10 = ((int *)GEN_TOP(*piVar17));
            piVar15 = piVar17;
          }
          piVar17 = piVar10;
        } while (*((char *)GEN_TOP(((int)piVar10 + 0x69))) == '\0');
      }
      piVar17 = *((int * PTR32 *)GEN_TOP((param_1 + 0x730)));
      (*(int * PTR32 *)(gen_frame + 0x10)) = piVar15;
      if ((piVar15 == piVar17) || (*((int *)GEN_TOP((param_1 + 0x748))) < piVar15[3])) {
        (*(int * PTR32 *)(gen_frame + 0xc)) = piVar17;
        ppiVar12 = &(*(int * PTR32 *)(gen_frame + 0xc));
      }
      else {
        ppiVar12 = &(*(int * PTR32 *)(gen_frame + 0x10));
      }
      piVar15 = *ppiVar12;
      if (piVar15 != (*(int * PTR32 *)(gen_frame + 0x24))) {
        do {
          if ((*((int *)GEN_TOP((param_1 + 0x740))) < piVar15[3]) || ((int)(*(int * PTR32 *)(gen_frame + 0x14)) < 1)) break;
          if (piVar15[4] == 0) {
            iVar14 = (int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x25c;
            iVar1 = (int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x1b4;
            bVar6 = F_004570d0((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,piVar15[3],&(*(uint *)(gen_frame + 0x18)),(int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x160,iVar1,iVar14);
            if (bVar6 != 0) {
              uVar7 = F_00465b90((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x18)) & 0x7f,(int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x160,iVar1,iVar14,
                                   param_1 + 0x71c,piVar15 + 5);
              (*(int * PTR32 *)(gen_frame + 0x14)) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x14)) - 1)));
              piVar15[4] = uVar7;
            }
          }
          if (*((char *)GEN_TOP(((int)piVar15 + 0x69))) == '\0') {
            piVar17 = ((int *)GEN_TOP(piVar15[2]));
            if (*((char *)GEN_TOP(((int)piVar17 + 0x69))) == '\0') {
              cVar2 = *((char *)GEN_TOP((*piVar17 + 0x69)));
              piVar15 = piVar17;
              piVar17 = ((int *)GEN_TOP(*piVar17));
              while (cVar2 == '\0') {
                cVar2 = *((char *)GEN_TOP((*piVar17 + 0x69)));
                piVar15 = piVar17;
                piVar17 = ((int *)GEN_TOP(*piVar17));
              }
            }
            else {
              cVar2 = *((char *)GEN_TOP((piVar15[1] + 0x69)));
              piVar10 = ((int *)GEN_TOP(piVar15[1]));
              piVar17 = piVar15;
              while ((piVar15 = piVar10, cVar2 == '\0' && (piVar17 == ((int *)GEN_TOP(piVar15[2]))))) {
                cVar2 = *((char *)GEN_TOP((piVar15[1] + 0x69)));
                piVar10 = ((int *)GEN_TOP(piVar15[1]));
                piVar17 = piVar15;
              }
            }
          }
        } while (piVar15 != (*(int * PTR32 *)(gen_frame + 0x24)));
      }
    }
    if ((*((ushort *)GEN_TOP((param_1 + 0x700))) == 0) && (**((char * PTR32 *)GEN_TOP((param_1 + 0x54))) == '\0')) {
      *((undefined4 *)GEN_TOP((param_1 + 0x702))) = 0;
      F_0042e430(((undefined *)GEN_TOP((param_1 + 0x54))) GEN_EDX_ARG,&REFG(undefined, 0x108f7d4));
      *((ushort *)GEN_TOP((param_1 + 0x706))) =
           (*((ushort *)GEN_TOP((param_1 + 0x706))) & 0xfffe) + 2 ^ *((ushort *)GEN_TOP((param_1 + 0x706))) & 1;
      pvVar16 = (*(undefined * PTR32 *)(gen_frame + 0x28));
    }
    else {
      pvVar16 = (*(undefined * PTR32 *)(gen_frame + 0x28));
      if (((*(uint *)(gen_frame + 0x20)) != 0) &&
         (((*(uint *)(gen_frame + 0x20)) == *((ushort *)GEN_TOP((param_1 + 0x700))) && (**((char * PTR32 *)GEN_TOP((param_1 + 0x54))) == '\0')))) {
        *((undefined4 *)GEN_TOP((param_1 + 0x702))) = 0;
        if (-1 < *((int *)GEN_TOP((param_1 + 0x744)))) {
          piVar15 = *((int * PTR32 *)GEN_TOP((param_1 + 0x730)));
          if (*((char *)GEN_TOP((piVar15[1] + 0x69))) == '\0') {
            piVar17 = ((int *)GEN_TOP(piVar15[1]));
            do {
              if (piVar17[3] < *((int *)GEN_TOP((param_1 + 0x744)))) {
                piVar10 = ((int *)GEN_TOP(piVar17[2]));
              }
              else {
                piVar10 = ((int *)GEN_TOP(*piVar17));
                piVar15 = piVar17;
              }
              piVar17 = piVar10;
            } while (*((char *)GEN_TOP(((int)piVar10 + 0x69))) == '\0');
          }
          piVar17 = *((int * PTR32 *)GEN_TOP((param_1 + 0x730)));
          (*(int * PTR32 *)(gen_frame + 0xc)) = piVar15;
          if ((piVar15 == piVar17) || (*((int *)GEN_TOP((param_1 + 0x744))) < piVar15[3])) {
            (*(int * PTR32 *)(gen_frame + 0x10)) = piVar17;
            ppiVar12 = &(*(int * PTR32 *)(gen_frame + 0x10));
          }
          else {
            ppiVar12 = &(*(int * PTR32 *)(gen_frame + 0xc));
          }
          piVar15 = *ppiVar12;
          if (piVar15 != (*(int * PTR32 *)(gen_frame + 0x24))) {
            piVar17 = ((int *)GEN_TOP((param_1 + 0xa8)));
            uVar7 = 0;
            do {
              if ((*((int *)GEN_TOP((param_1 + 0x748))) < piVar15[3]) || (200 < uVar7)) break;
              if (*((char *)GEN_TOP(piVar15[5])) != '\0') {
                F_0042d4d0(((undefined *)GEN_TOP((param_1 + 0x54))) GEN_EDX_ARG,piVar15 + 5);
                F_0042d540(((undefined *)GEN_TOP((param_1 + 0x54))) GEN_EDX_ARG,&REFG(undefined, 0x108f7d8));
                *piVar17 = piVar15[3];
                piVar17[1] = piVar15[4];
                *((short *)GEN_TOP((param_1 + 0x702))) = *((short *)GEN_TOP((param_1 + 0x702))) + (short)piVar15[4];
                uVar7 = uVar7 + 2;
                piVar17 = piVar17 + 2;
                *((short *)GEN_TOP((param_1 + 0x704))) = *((short *)GEN_TOP((param_1 + 0x704))) + 1;
              }
              if (*((char *)GEN_TOP(((int)piVar15 + 0x69))) == '\0') {
                piVar10 = ((int *)GEN_TOP(piVar15[2]));
                if (*((char *)GEN_TOP(((int)piVar10 + 0x69))) == '\0') {
                  cVar2 = *((char *)GEN_TOP((*piVar10 + 0x69)));
                  piVar15 = piVar10;
                  piVar10 = ((int *)GEN_TOP(*piVar10));
                  while (cVar2 == '\0') {
                    cVar2 = *((char *)GEN_TOP((*piVar10 + 0x69)));
                    piVar15 = piVar10;
                    piVar10 = ((int *)GEN_TOP(*piVar10));
                  }
                }
                else {
                  cVar2 = *((char *)GEN_TOP((piVar15[1] + 0x69)));
                  piVar11 = ((int *)GEN_TOP(piVar15[1]));
                  piVar10 = piVar15;
                  while ((piVar15 = piVar11, cVar2 == '\0' && (piVar10 == ((int *)GEN_TOP(piVar15[2]))))) {
                    cVar2 = *((char *)GEN_TOP((piVar15[1] + 0x69)));
                    piVar11 = ((int *)GEN_TOP(piVar15[1]));
                    piVar10 = piVar15;
                  }
                }
              }
            } while (piVar15 != (*(int * PTR32 *)(gen_frame + 0x24)));
          }
        }
        *((ushort *)GEN_TOP((param_1 + 0x706))) =
             (*((ushort *)GEN_TOP((param_1 + 0x706))) & 0xfffe) + 2 ^ *((ushort *)GEN_TOP((param_1 + 0x706))) & 1;
        *((undefined4 *)GEN_TOP((param_1 + 0x6f8))) = 0;
        *((undefined4 *)GEN_TOP((param_1 + 0x6fc))) = 0;
        uVar7 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x2718)));
        uVar13 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x271c))) + uVar7;
        (*(int * PTR32 *)(gen_frame + 0x0)) = ((int *)GEN_TOP(0x0));
        pvVar16 = (*(undefined * PTR32 *)(gen_frame + 0x28));
        pvVar5 = (*(undefined * PTR32 *)(gen_frame + 0x28));
        if ((*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x270c))) != ((int *)GEN_TOP(0x0))) &&
           (puVar8 = ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x270c))))), puVar8 != ((undefined4 *)GEN_TOP(0x0))))
        {
          (*(int * PTR32 *)(gen_frame + 0x0)) = ((int *)GEN_TOP(*puVar8));
        }
        for (; (*(undefined * PTR32 *)(gen_frame + 0x28)) = pvVar5, uVar7 != uVar13; uVar7 = uVar7 + 1) {
          if ((*(int * PTR32 *)(gen_frame + 0x0)) == ((int *)GEN_TOP(0x0))) {
            iVar14 = 0;
          }
          else {
            iVar14 = *(*(int * PTR32 *)(gen_frame + 0x0));
          }
          uVar9 = uVar7;
          if (*((uint *)GEN_TOP((iVar14 + 8))) <= uVar7) {
            uVar9 = uVar7 - *((uint *)GEN_TOP((iVar14 + 8)));
          }
          uVar3 = **((ushort * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar14 + 4))) + uVar9 * 4)));
          if ((*((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x718))) + (uint)(uVar3 >> 5) * 4))) &
              1 << ((byte)uVar3 & 0x1f)) == 0) {
            if ((*(int * PTR32 *)(gen_frame + 0x0)) == ((int *)GEN_TOP(0x0))) {
              iVar14 = 0;
            }
            else {
              iVar14 = *(*(int * PTR32 *)(gen_frame + 0x0));
            }
            uVar9 = uVar7;
            if (*((uint *)GEN_TOP((iVar14 + 8))) <= uVar7) {
              uVar9 = uVar7 - *((uint *)GEN_TOP((iVar14 + 8)));
            }
            piVar15 = ((int *)GEN_TOP((uint)*((byte *)GEN_TOP((param_1 + 0x753)))));
            cVar2 = *((char *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((iVar14 + 4))) + uVar9 * 4))) + 8 + (int)piVar15)));
            (*(int * PTR32 *)(gen_frame + 0x14)) = piVar15;
            if (cVar2 == '\0') {
              if ((*(int * PTR32 *)(gen_frame + 0x0)) == ((int *)GEN_TOP(0x0))) {
                iVar14 = 0;
              }
              else {
                iVar14 = *(*(int * PTR32 *)(gen_frame + 0x0));
              }
              uVar9 = uVar7;
              if (*((uint *)GEN_TOP((iVar14 + 8))) <= uVar7) {
                uVar9 = uVar7 - *((uint *)GEN_TOP((iVar14 + 8)));
              }
              iVar14 = *((int *)GEN_TOP((*((int *)GEN_TOP((iVar14 + 4))) + uVar9 * 4)));
              piVar17 = *((int * PTR32 *)GEN_TOP((param_1 + 0x730)));
              if (*((char *)GEN_TOP((piVar17[1] + 0x69))) == '\0') {
                piVar10 = ((int *)GEN_TOP(piVar17[1]));
                do {
                  if (piVar10[3] < *((int *)GEN_TOP((iVar14 + 4)))) {
                    piVar11 = ((int *)GEN_TOP(piVar10[2]));
                  }
                  else {
                    piVar11 = ((int *)GEN_TOP(*piVar10));
                    piVar17 = piVar10;
                  }
                  piVar10 = piVar11;
                } while (*((char *)GEN_TOP(((int)piVar11 + 0x69))) == '\0');
              }
              piVar10 = *((int * PTR32 *)GEN_TOP((param_1 + 0x730)));
              (*(int * PTR32 *)(gen_frame + 0xc)) = piVar17;
              if ((piVar17 == piVar10) || (*((int *)GEN_TOP((iVar14 + 4))) < piVar17[3])) {
                (*(int * PTR32 *)(gen_frame + 0x10)) = piVar10;
                ppiVar12 = &(*(int * PTR32 *)(gen_frame + 0x10));
              }
              else {
                ppiVar12 = &(*(int * PTR32 *)(gen_frame + 0xc));
              }
              piVar17 = *ppiVar12;
              if ((piVar17 == *((int * PTR32 *)GEN_TOP((param_1 + 0x730)))) || (piVar17[4] == 0)) {
                if ((*(int * PTR32 *)(gen_frame + 0x0)) == ((int *)GEN_TOP(0x0))) {
                  iVar14 = 0;
                }
                else {
                  iVar14 = *(*(int * PTR32 *)(gen_frame + 0x0));
                }
                uVar9 = uVar7;
                if (*((uint *)GEN_TOP((iVar14 + 8))) <= uVar7) {
                  uVar9 = uVar7 - *((uint *)GEN_TOP((iVar14 + 8)));
                }
                uVar4 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((iVar14 + 4))) + uVar9 * 4))) + 4)));
                (*(uint *)(gen_frame + 0x20)) = (int)pvVar5 + 0x1b4;
                (*(int * PTR32 *)(gen_frame + 0x14)) = ((int *)GEN_TOP(((int)pvVar5 + 0x25c)));
                (*(int * PTR32 *)(gen_frame + 0x24)) = ((int *)GEN_TOP(((int)pvVar5 + 0x160)));
                bVar6 = F_004570d0(pvVar5 GEN_EDX_ARG,uVar4,&(*(uint *)(gen_frame + 0x18)),(int)pvVar5 + 0x160,(int)pvVar5 + 0x1b4,
                                     ((int *)GEN_TOP(((int)pvVar5 + 0x25c))));
                if (bVar6 != 0) {
                  F_0042aca0((int)pvVar5 + 0x200c GEN_EDX_ARG);
                  if ((*(int * PTR32 *)(gen_frame + 0x0)) == ((int *)GEN_TOP(0x0))) {
                    iVar14 = 0;
                  }
                  else {
                    iVar14 = *(*(int * PTR32 *)(gen_frame + 0x0));
                  }
                  uVar9 = uVar7;
                  if (*((uint *)GEN_TOP((iVar14 + 8))) <= uVar7) {
                    uVar9 = uVar7 - *((uint *)GEN_TOP((iVar14 + 8)));
                  }
                  iVar14 = *((int *)GEN_TOP((*((int *)GEN_TOP((iVar14 + 4))) + uVar9 * 4)));
                  uVar9 = F_00465b90((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x18)) & 0x7f,(*(int * PTR32 *)(gen_frame + 0x24)),(*(uint *)(gen_frame + 0x20)),(*(int * PTR32 *)(gen_frame + 0x14)),
                                       param_1 + 0x71c,(int)pvVar5 + 0x200c);
                  *((char *)GEN_TOP((*((byte *)GEN_TOP((param_1 + 0x753))) + 8 + iVar14))) = (char)uVar9;
                }
              }
              else {
                if ((*(int * PTR32 *)(gen_frame + 0x0)) == ((int *)GEN_TOP(0x0))) {
                  iVar14 = 0;
                }
                else {
                  iVar14 = *(*(int * PTR32 *)(gen_frame + 0x0));
                }
                uVar9 = uVar7;
                if (*((uint *)GEN_TOP((iVar14 + 8))) <= uVar7) {
                  uVar9 = uVar7 - *((uint *)GEN_TOP((iVar14 + 8)));
                }
                *((char *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((iVar14 + 4))) + uVar9 * 4))) + 8 + (int)piVar15))) =
                     (char)piVar17[4];
              }
            }
            if ((*(int * PTR32 *)(gen_frame + 0x0)) == ((int *)GEN_TOP(0x0))) {
              iVar14 = 0;
            }
            else {
              iVar14 = *(*(int * PTR32 *)(gen_frame + 0x0));
            }
            uVar9 = uVar7;
            if (*((uint *)GEN_TOP((iVar14 + 8))) <= uVar7) {
              uVar9 = uVar7 - *((uint *)GEN_TOP((iVar14 + 8)));
            }
            if (*((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((iVar14 + 4))) + uVar9 * 4))) + 4))) <=
                *((int *)GEN_TOP((param_1 + 0x744)))) {
              *((undefined4 *)GEN_TOP((param_1 + 0x6fc))) = *((undefined4 *)GEN_TOP((param_1 + 0x6f8)));
            }
            if ((*(int * PTR32 *)(gen_frame + 0x0)) == ((int *)GEN_TOP(0x0))) {
              iVar14 = 0;
            }
            else {
              iVar14 = *(*(int * PTR32 *)(gen_frame + 0x0));
            }
            uVar9 = uVar7;
            if (*((uint *)GEN_TOP((iVar14 + 8))) <= uVar7) {
              uVar9 = uVar7 - *((uint *)GEN_TOP((iVar14 + 8)));
            }
            *((int *)GEN_TOP((param_1 + 0x6f8))) =
                 *((int *)GEN_TOP((param_1 + 0x6f8))) +
                 (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((iVar14 + 4))) + uVar9 * 4))) + 8 +
                                (uint)*((byte *)GEN_TOP((param_1 + 0x753))))));
            pvVar16 = (*(undefined * PTR32 *)(gen_frame + 0x28));
          }
          pvVar5 = (*(undefined * PTR32 *)(gen_frame + 0x28));
        }
      }
    }
    if (*((int *)GEN_TOP((param_1 + 0x6f0))) < *((int *)GEN_TOP((param_1 + 0x6ec)))) {
      uVar7 = *((uint *)GEN_TOP(((int)pvVar16 + 0x2718)));
      uVar13 = *((int *)GEN_TOP(((int)pvVar16 + 0x271c))) + uVar7;
      (*(int * PTR32 *)(gen_frame + 0x0)) = ((int *)GEN_TOP(0x0));
      pvVar5 = (*(undefined * PTR32 *)(gen_frame + 0x28));
      if ((*((int * PTR32 *)GEN_TOP(((int)pvVar16 + 0x270c))) != ((int *)GEN_TOP(0x0))) &&
         (puVar8 = ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)pvVar16 + 0x270c))))), puVar8 != ((undefined4 *)GEN_TOP(0x0)))) {
        (*(int * PTR32 *)(gen_frame + 0x0)) = ((int *)GEN_TOP(*puVar8));
      }
      for (; uVar7 != uVar13; uVar7 = uVar7 + 1) {
        if ((*(int * PTR32 *)(gen_frame + 0x0)) == ((int *)GEN_TOP(0x0))) {
          iVar14 = 0;
        }
        else {
          iVar14 = *(*(int * PTR32 *)(gen_frame + 0x0));
        }
        uVar9 = uVar7;
        if (*((uint *)GEN_TOP((iVar14 + 8))) <= uVar7) {
          uVar9 = uVar7 - *((uint *)GEN_TOP((iVar14 + 8)));
        }
        (*(undefined * PTR32 *)(gen_frame + 0x28)) = pvVar5;
        if (*((int *)GEN_TOP((param_1 + 0x6f0))) <= *((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((iVar14 + 4))) + uVar9 * 4))) + 4)))) {
          if ((*(int * PTR32 *)(gen_frame + 0x0)) == ((int *)GEN_TOP(0x0))) {
            iVar14 = 0;
          }
          else {
            iVar14 = *(*(int * PTR32 *)(gen_frame + 0x0));
          }
          uVar9 = uVar7;
          if (*((uint *)GEN_TOP((iVar14 + 8))) <= uVar7) {
            uVar9 = uVar7 - *((uint *)GEN_TOP((iVar14 + 8)));
          }
          uVar3 = **((ushort * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar14 + 4))) + uVar9 * 4)));
          if ((*((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x718))) + (uint)(uVar3 >> 5) * 4))) &
              1 << ((byte)uVar3 & 0x1f)) == 0) {
            if ((*(int * PTR32 *)(gen_frame + 0x0)) == ((int *)GEN_TOP(0x0))) {
              iVar14 = 0;
            }
            else {
              iVar14 = *(*(int * PTR32 *)(gen_frame + 0x0));
            }
            uVar9 = uVar7;
            if (*((uint *)GEN_TOP((iVar14 + 8))) <= uVar7) {
              uVar9 = uVar7 - *((uint *)GEN_TOP((iVar14 + 8)));
            }
            piVar15 = ((int *)GEN_TOP((uint)*((byte *)GEN_TOP((param_1 + 0x753)))));
            cVar2 = *((char *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((iVar14 + 4))) + uVar9 * 4))) + 8 + (int)piVar15)));
            (*(int * PTR32 *)(gen_frame + 0x14)) = piVar15;
            if (cVar2 == '\0') {
              if ((*(int * PTR32 *)(gen_frame + 0x0)) == ((int *)GEN_TOP(0x0))) {
                iVar14 = 0;
              }
              else {
                iVar14 = *(*(int * PTR32 *)(gen_frame + 0x0));
              }
              uVar9 = uVar7;
              if (*((uint *)GEN_TOP((iVar14 + 8))) <= uVar7) {
                uVar9 = uVar7 - *((uint *)GEN_TOP((iVar14 + 8)));
              }
              iVar14 = *((int *)GEN_TOP((*((int *)GEN_TOP((iVar14 + 4))) + uVar9 * 4)));
              piVar17 = *((int * PTR32 *)GEN_TOP((param_1 + 0x730)));
              if (*((char *)GEN_TOP((piVar17[1] + 0x69))) == '\0') {
                piVar10 = ((int *)GEN_TOP(piVar17[1]));
                do {
                  if (piVar10[3] < *((int *)GEN_TOP((iVar14 + 4)))) {
                    piVar11 = ((int *)GEN_TOP(piVar10[2]));
                  }
                  else {
                    piVar11 = ((int *)GEN_TOP(*piVar10));
                    piVar17 = piVar10;
                  }
                  piVar10 = piVar11;
                } while (*((char *)GEN_TOP(((int)piVar11 + 0x69))) == '\0');
              }
              piVar10 = *((int * PTR32 *)GEN_TOP((param_1 + 0x730)));
              (*(int * PTR32 *)(gen_frame + 0xc)) = piVar17;
              if ((piVar17 == piVar10) || (*((int *)GEN_TOP((iVar14 + 4))) < piVar17[3])) {
                (*(int * PTR32 *)(gen_frame + 0x10)) = piVar10;
                ppiVar12 = &(*(int * PTR32 *)(gen_frame + 0x10));
              }
              else {
                ppiVar12 = &(*(int * PTR32 *)(gen_frame + 0xc));
              }
              piVar17 = *ppiVar12;
              if ((piVar17 == *((int * PTR32 *)GEN_TOP((param_1 + 0x730)))) || (piVar17[4] == 0)) {
                if ((*(int * PTR32 *)(gen_frame + 0x0)) == ((int *)GEN_TOP(0x0))) {
                  iVar14 = 0;
                }
                else {
                  iVar14 = *(*(int * PTR32 *)(gen_frame + 0x0));
                }
                uVar9 = uVar7;
                if (*((uint *)GEN_TOP((iVar14 + 8))) <= uVar7) {
                  uVar9 = uVar7 - *((uint *)GEN_TOP((iVar14 + 8)));
                }
                iVar14 = *((int *)GEN_TOP((*((int *)GEN_TOP((iVar14 + 4))) + uVar9 * 4)));
                (*(int * PTR32 *)(gen_frame + 0x14)) = ((int *)GEN_TOP(((int)pvVar5 + 0x25c)));
                (*(uint *)(gen_frame + 0x20)) = (int)pvVar5 + 0x1b4;
                uVar4 = *((undefined4 *)GEN_TOP((iVar14 + 4)));
                (*(int * PTR32 *)(gen_frame + 0x24)) = ((int *)GEN_TOP(((int)pvVar5 + 0x160)));
                bVar6 = F_004570d0(pvVar5 GEN_EDX_ARG,uVar4,&(*(uint *)(gen_frame + 0x18)),(int)pvVar5 + 0x160,(int)pvVar5 + 0x1b4,
                                     ((int *)GEN_TOP(((int)pvVar5 + 0x25c))));
                if (bVar6 != 0) {
                  F_0042aca0((int)pvVar5 + 0x200c GEN_EDX_ARG);
                  if ((*(int * PTR32 *)(gen_frame + 0x0)) == ((int *)GEN_TOP(0x0))) {
                    iVar14 = 0;
                  }
                  else {
                    iVar14 = *(*(int * PTR32 *)(gen_frame + 0x0));
                  }
                  uVar9 = uVar7;
                  if (*((uint *)GEN_TOP((iVar14 + 8))) <= uVar7) {
                    uVar9 = uVar7 - *((uint *)GEN_TOP((iVar14 + 8)));
                  }
                  iVar14 = *((int *)GEN_TOP((*((int *)GEN_TOP((iVar14 + 4))) + uVar9 * 4)));
                  uVar9 = F_00465b90((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x18)) & 0x7f,(*(int * PTR32 *)(gen_frame + 0x24)),(*(uint *)(gen_frame + 0x20)),(*(int * PTR32 *)(gen_frame + 0x14)),
                                       param_1 + 0x71c,(int)pvVar5 + 0x200c);
                  *((char *)GEN_TOP((*((byte *)GEN_TOP((param_1 + 0x753))) + 8 + iVar14))) = (char)uVar9;
                }
              }
              else {
                if ((*(int * PTR32 *)(gen_frame + 0x0)) == ((int *)GEN_TOP(0x0))) {
                  iVar14 = 0;
                }
                else {
                  iVar14 = *(*(int * PTR32 *)(gen_frame + 0x0));
                }
                uVar9 = uVar7;
                if (*((uint *)GEN_TOP((iVar14 + 8))) <= uVar7) {
                  uVar9 = uVar7 - *((uint *)GEN_TOP((iVar14 + 8)));
                }
                *((char *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((iVar14 + 4))) + uVar9 * 4))) + 8 + (int)piVar15))) =
                     (char)piVar17[4];
              }
              if ((*(int * PTR32 *)(gen_frame + 0x0)) == ((int *)GEN_TOP(0x0))) {
                iVar14 = 0;
              }
              else {
                iVar14 = *(*(int * PTR32 *)(gen_frame + 0x0));
              }
              uVar9 = uVar7;
              if (*((uint *)GEN_TOP((iVar14 + 8))) <= uVar7) {
                uVar9 = uVar7 - *((uint *)GEN_TOP((iVar14 + 8)));
              }
              if (*((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((iVar14 + 4))) + uVar9 * 4))) + 4))) <=
                  *((int *)GEN_TOP((param_1 + 0x744)))) {
                *((undefined4 *)GEN_TOP((param_1 + 0x6fc))) = *((undefined4 *)GEN_TOP((param_1 + 0x6f8)));
              }
              if ((*(int * PTR32 *)(gen_frame + 0x0)) == ((int *)GEN_TOP(0x0))) {
                iVar14 = 0;
              }
              else {
                iVar14 = *(*(int * PTR32 *)(gen_frame + 0x0));
              }
              uVar9 = uVar7;
              if (*((uint *)GEN_TOP((iVar14 + 8))) <= uVar7) {
                uVar9 = uVar7 - *((uint *)GEN_TOP((iVar14 + 8)));
              }
              *((int *)GEN_TOP((param_1 + 0x6f8))) =
                   *((int *)GEN_TOP((param_1 + 0x6f8))) +
                   (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((iVar14 + 4))) + uVar9 * 4))) + 8 +
                                  (uint)*((byte *)GEN_TOP((param_1 + 0x753))))));
            }
          }
        }
        pvVar5 = (*(undefined * PTR32 *)(gen_frame + 0x28));
      }
      *((undefined4 *)GEN_TOP((param_1 + 0x6f0))) = *((undefined4 *)GEN_TOP((param_1 + 0x6ec)));
    }
  }
  return;
}

/* ref: FUN_00468110 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00468110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x468110u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  uint uVar1;
  
  uVar1 = F_00465b90(this GEN_EDX_FWD,param_1,param_2,param_3,0,param_4,param_5);
  return uVar1;
}

/* ref: FUN_00468140 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00468140(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x468140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  __time64_t _Var1;
  ulonglong uVar2;
  
  if (-1 < (*(int *)&gen_args[0])) {
    *((int *)GEN_TOP(((int)this + 0xda8))) = (*(int *)&gen_args[0]);
    _Var1 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
    if (10 < (uint)((int)_Var1 - *((int *)GEN_TOP(((int)this + 0x1a0))))) {
      *((uint *)GEN_TOP(((int)this + 0x184))) = *((uint *)GEN_TOP(((int)this + 0x184))) | 2;
      F_00488e70(((undefined *)GEN_TOP(((int)this + 0x950))) GEN_EDX_ARG,&(*(int *)&gen_args[0]),*((undefined4 *)GEN_TOP(((int)this + 0x950))),
                   *((undefined4 *)GEN_TOP(((int)this + 0x954))));
      *((undefined1 *)GEN_TOP(((int)this + 0x960))) = 0;
      _Var1 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
      *((int *)GEN_TOP(((int)this + 0x1a0))) = (int)_Var1;
      uVar2 = F_00427d90();
      *((ulonglong *)GEN_TOP(((int)this + 0x1a8))) = uVar2;
      uVar2 = F_00427e30();
      *((ulonglong *)GEN_TOP(((int)this + 0x1b0))) = uVar2;
      return (int)this + 0x950;
    }
    if (*((char *)GEN_TOP(((int)this + 0x960))) != '\0') {
      F_00488e70(((undefined *)GEN_TOP(((int)this + 0x950))) GEN_EDX_ARG,&(*(int *)&gen_args[0]),*((undefined4 *)GEN_TOP(((int)this + 0x950))),
                   *((undefined4 *)GEN_TOP(((int)this + 0x954))));
      F_00466940(this GEN_EDX_ARG,(int)this + 0x3c4);
    }
  }
  return (int)this + 0x950;
}

/* ref: FUN_00468220 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00468220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x468220u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  undefined3 extraout_var_02 = 0;
  undefined3 extraout_var_03 = 0;
  undefined3 extraout_var_04 = 0;
  undefined3 extraout_var_05 = 0;
  int iVar4;
  int * local_8;
  
  iVar4 = 0;
  local_8 = ((int *)GEN_TOP(((int)this + 0x18)));
  do {
    uVar3 = *local_8 - 1;
    switch((unsigned int)(uintptr_t)(uVar3)) {
    case 0: ;
      iVar1 = (int)this + 0x1d0;
      bVar2 = F_00ad2ef0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,iVar4,iVar1,0x10c);
      uVar3 = CONCAT31(extraout_var,bVar2);
      if (bVar2 != 0) {
        F_0045d590(this GEN_EDX_ARG,iVar1);
        uVar3 = F_00466220(this GEN_EDX_ARG,iVar1);
        *((uint *)GEN_TOP(((int)this + 0x184))) = *((uint *)GEN_TOP(((int)this + 0x184))) & 0xffffdfff;
      }
      break;
    case 2: ;
      iVar1 = (int)this + 0x2dc;
      bVar2 = F_00ad2ef0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,iVar4,iVar1,0xe8);
      uVar3 = CONCAT31(extraout_var_00,bVar2);
      if (bVar2 != 0) {
        F_0045dde0(this GEN_EDX_ARG,iVar1);
        uVar3 = F_00466530(this GEN_EDX_ARG,iVar1);
      }
      break;
    case 3: ;
      bVar2 = F_00ad2ef0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,iVar4,(int)this + 0x3c4,0xb8);
      uVar3 = CONCAT31(extraout_var_01,bVar2);
      if (bVar2 != 0) {
        uVar3 = F_00466940(this GEN_EDX_ARG,(int)this + 0x3c4);
      }
      break;
    case 4: ;
      bVar2 = F_00ad2ef0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,iVar4,(int)this + 0x47c,0xb8);
      uVar3 = CONCAT31(extraout_var_02,bVar2);
      if (bVar2 != 0) {
        uVar3 = F_00466b30(this GEN_EDX_ARG,(int)this + 0x47c);
      }
      break;
    case 5: ;
      bVar2 = F_00ad2ef0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,iVar4,(int)this + 0x534,0xb8);
      uVar3 = CONCAT31(extraout_var_03,bVar2);
      if (bVar2 != 0) {
        uVar3 = F_0045d250(this GEN_EDX_ARG,(int)this + 0x534);
      }
      break;
    case 6: ;
      bVar2 = F_00ad2ef0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,iVar4,(int)this + 0x5ec,0x174);
      uVar3 = CONCAT31(extraout_var_04,bVar2);
      if (bVar2 != 0) {
        uVar3 = F_0045db40(this GEN_EDX_ARG,(int)this + 0x5ec);
      }
      break;
    case 7: ;
      bVar2 = F_00ad2ef0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,iVar4,(int)this + 0x760,0xfc);
      uVar3 = CONCAT31(extraout_var_05,bVar2);
      if (bVar2 != 0) {
        uVar3 = F_0045dcb0(this GEN_EDX_ARG,(int)this + 0x760);
        *((uint *)GEN_TOP(((int)this + 0x184))) = *((uint *)GEN_TOP(((int)this + 0x184))) & 0xffffffdf;
      }
    }
    local_8 = local_8 + 1;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 2);
  return uVar3;
}

/* ref: FUN_004683b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004683b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4683b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  uint uVar2;
  int * piVar3;
  undefined * pvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined4 uVar17;
  
  if (*((int *)GEN_TOP(((int)this + 0x1c))) == 0) {
    if (param_1 == 0) goto LAB_00468474;
    if (param_1 != 3) {
      return param_1;
    }
  }
  else {
    if (param_1 == 0) {
LAB_00468474: ;
      F_00447a10(this GEN_EDX_FWD);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x10))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG);
      uVar1 = F_00821e50();
      if (*((int *)GEN_TOP(((int)this + 0x1c))) == 0) {
        return uVar1;
      }
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0x18))))
                        (*((undefined4 *)GEN_TOP(((int)this + 0x1c))),(int)this + 0x20,0,
                         *((undefined4 *)GEN_TOP(((int)this + 0x38))));
      *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
      return uVar1;
    }
    if (param_1 != 3) {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x10))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG);
      if (*((int *)GEN_TOP((uVar1 + 600))) == 0) {
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((uVar1 + 0x34))) + 8))))(*((int * PTR32 *)GEN_TOP((uVar1 + 0x34))) GEN_EDX_ARG,((char *)REFP(0x108f868)));
        *((uint *)GEN_TOP((uVar1 + 600))) = uVar2;
      }
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((uVar1 + 600))) + 0x24))))(*((int * PTR32 *)GEN_TOP((uVar1 + 600))) GEN_EDX_ARG,0x17d4)));
      uVar17 = 0;
      pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 8))))(piVar3 GEN_EDX_ARG)));
      uVar1 = F_00cb0950(pvVar4 GEN_EDX_ARG,uVar17);
      uVar16 = 0;
      uVar15 = 0;
      uVar14 = 0;
      uVar13 = 0;
      uVar12 = 0;
      uVar11 = 0;
      uVar10 = 0;
      uVar9 = 4;
      uVar8 = 0;
      uVar7 = 0;
      uVar6 = 0;
      uVar5 = 0;
      uVar17 = 0;
      pvVar4 = this;
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x10))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG);
      uVar1 = F_00866a60(uVar2 GEN_EDX_ARG,uVar1,uVar17,uVar5,pvVar4,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,
                           uVar12,uVar13,uVar14,uVar15,uVar16);
      *((uint *)GEN_TOP(((int)this + 0x14))) = uVar1;
      return uVar1;
    }
  }
  uVar1 = F_00466cd0(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_004684e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004684e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4684e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  uVar2 = 0;
  if (REFG(void * PTR32, 0x137104c) != ((undefined *)GEN_TOP(0x0))) {
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
    (*(gen_code32 *)(gen_frame + 0x0)) = ((code *)REFP(0x474710));
    (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)REFP(0x466e70));
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    bVar1 = F_00976af0(REFG(void * PTR32, 0x137104c) GEN_EDX_ARG,&(*(gen_code32 *)(gen_frame + 0x0)),0);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  return uVar2;
}

/* ref: FUN_00468520 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00468520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x468520u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = param_2;
  if ((*(char *)(param_3 + 2) != '\0') && (param_3[0x2d] == 0)) {
    uVar1 = F_00446380(*((undefined1 *)GEN_TOP(((int)param_3 + 9))),param_3[1]);
    param_3[0x2d] = uVar1;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = param_3[0x2d];
  uVar1 = F_0043aa60(param_3 GEN_EDX_ARG);
  *((uint *)GEN_TOP(((int)this + 0x24))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = *param_3;
  uVar1 = F_004673b0((((undefined *)GEN_TOP((uint)(param_3)))) GEN_EDX_ARG);
  uVar1 = F_0042e430(((undefined *)GEN_TOP(((int)this + 0x30))) GEN_EDX_ARG,uVar1);
  return uVar1;
}

/* ref: FUN_00468590 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00468590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x468590u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = param_1;
  F_004949f0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_2);
  F_0042b630((int)this + 0x1c GEN_EDX_ARG);
  F_0042b630((int)this + 0x70 GEN_EDX_ARG);
  *((undefined2 *)GEN_TOP(((int)this + 0xc4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 200))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xcc))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0xd0))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0xc6))) = 0xff;
  *((undefined1 *)GEN_TOP(((int)this + 199))) = 0xff;
  return (uint)this;
}

/* ref: FUN_004685f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004685f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x4685f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  byte bVar1;
  undefined1 uVar2;
  undefined * puVar3;
  uint uVar4;
  
  *(undefined4 *)this = param_1;
  F_004949f0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_3);
  if (param_2 == ((int *)GEN_TOP(0x0))) {
    puVar3 = &REFG(undefined, 0x108d137);
  }
  else {
    puVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0xc))))(param_2 GEN_EDX_ARG)));
  }
  F_0042cc20(((undefined *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,puVar3,REFG(undefined4, 0x108cc50));
  F_0042b630((int)this + 0x70 GEN_EDX_ARG);
  bVar1 = F_00a69970(param_2);
  *((byte *)GEN_TOP(((int)this + 0xc4))) = bVar1;
  *((undefined1 *)GEN_TOP(((int)this + 0xc5))) = 0;
  if (param_2 == ((int *)GEN_TOP(0x0))) {
    uVar2 = 0xff;
  }
  else {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x1c))))(param_2 GEN_EDX_ARG);
    uVar2 = (undefined1)uVar4;
  }
  *((undefined1 *)GEN_TOP(((int)this + 0xc6))) = uVar2;
  *((undefined1 *)GEN_TOP(((int)this + 199))) = 0xff;
  uVar4 = F_0043bfd0(param_2);
  *((uint *)GEN_TOP(((int)this + 200))) = uVar4;
  *((undefined4 *)GEN_TOP(((int)this + 0xcc))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0xd0))) = 0;
  if (*((char *)GEN_TOP((REFG(int, 0x137104c) + 0x1d))) == '\x04') {
    if (param_2 != ((int *)GEN_TOP(0x0))) {
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 4))))(param_2 GEN_EDX_ARG);
      if (uVar4 == 1) {
        *((undefined1 *)GEN_TOP(((int)this + 0xd0))) = 1;
        return (uint)this;
      }
    }
  }
  else {
    *((undefined1 *)GEN_TOP(((int)this + 0xd0))) = 1;
  }
  return (uint)this;
}

/* ref: FUN_004686d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004686d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x4686d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  byte bVar1;
  undefined1 uVar2;
  undefined * puVar3;
  uint uVar4;
  
  *(undefined4 *)this = param_1;
  F_004949f0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_4);
  if (param_2 == ((int *)GEN_TOP(0x0))) {
    puVar3 = &REFG(undefined, 0x108d13d);
  }
  else {
    puVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0xc))))(param_2 GEN_EDX_ARG)));
  }
  F_0042cc20(((undefined *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,puVar3,REFG(undefined4, 0x108cc50));
  if (param_3 == ((int *)GEN_TOP(0x0))) {
    puVar3 = &REFG(undefined, 0x108d13e);
  }
  else {
    puVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_3 + 0xc))))(param_3 GEN_EDX_ARG)));
  }
  F_0042cc20(((undefined *)GEN_TOP(((int)this + 0x70))) GEN_EDX_ARG,puVar3,REFG(undefined4, 0x108cc50));
  bVar1 = F_00a69970(param_2);
  *((byte *)GEN_TOP(((int)this + 0xc4))) = bVar1;
  bVar1 = F_00a69970(param_3);
  *((byte *)GEN_TOP(((int)this + 0xc5))) = bVar1;
  if (param_2 == ((int *)GEN_TOP(0x0))) {
    uVar2 = 0xff;
  }
  else {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x1c))))(param_2 GEN_EDX_ARG);
    uVar2 = (undefined1)uVar4;
  }
  *((undefined1 *)GEN_TOP(((int)this + 0xc6))) = uVar2;
  if (param_3 == ((int *)GEN_TOP(0x0))) {
    uVar2 = 0xff;
  }
  else {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_3 + 0x1c))))(param_3 GEN_EDX_ARG);
    uVar2 = (undefined1)uVar4;
  }
  *((undefined1 *)GEN_TOP(((int)this + 199))) = uVar2;
  uVar4 = F_0043bfd0(param_2);
  *((uint *)GEN_TOP(((int)this + 200))) = uVar4;
  uVar4 = F_0043bfd0(param_3);
  *((uint *)GEN_TOP(((int)this + 0xcc))) = uVar4;
  *((undefined2 *)GEN_TOP(((int)this + 0xd0))) = 0;
  if (*((char *)GEN_TOP((REFG(int, 0x137104c) + 0x1d))) == '\x04') {
    if ((param_2 != ((int *)GEN_TOP(0x0))) && (uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 4))))(param_2 GEN_EDX_ARG), uVar4 == 1)) {
      *((undefined1 *)GEN_TOP(((int)this + 0xd0))) = 1;
    }
    if (param_3 != ((int *)GEN_TOP(0x0))) {
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_3 + 4))))(param_3 GEN_EDX_ARG);
      if (uVar4 == 1) {
        *((undefined1 *)GEN_TOP(((int)this + 0xd1))) = 1;
        return (uint)this;
      }
    }
  }
  else {
    *((undefined2 *)GEN_TOP(((int)this + 0xd0))) = 0x101;
  }
  return (uint)this;
}

/* ref: FUN_00468810 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00468810(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2), GEN_P(byte param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x468810u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(byte param_4 = (byte)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  byte bVar1;
  undefined * puVar2;
  
  *param_1 = param_2;
  F_004949f0(param_1 + 1 GEN_EDX_FWD,param_5);
  puVar2 = param_3;
  if (param_3 == ((undefined *)GEN_TOP(0x0))) {
    puVar2 = &REFG(undefined, 0x108d15a);
  }
  F_0042cc20(param_1 + 7 GEN_EDX_ARG,puVar2,REFG(undefined4, 0x108cc50));
  F_0042cc20(param_1 + 0x1c GEN_EDX_ARG,&REFG(undefined, 0x108d15b),REFG(undefined4, 0x108cc50));
  bVar1 = F_00a69a10(param_3);
  *(byte *)(param_1 + 0x31) = bVar1;
  *((byte *)GEN_TOP(((int)param_1 + 0xc6))) = param_4;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0xc5))) = 0;
  *((undefined1 *)GEN_TOP(((int)param_1 + 199))) = 0xff;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined2 *)(param_1 + 0x34) = 0;
  if (param_4 < 2) {
    *(undefined1 *)(param_1 + 0x34) = 1;
  }
  return (uint)param_1;
}

/* ref: FUN_004688b0 */
GEN_OWN_GS GEN_FRAME unsigned int GEN_THISCALL F_004688b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4688b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0xb0, 0, 4);
  byte bVar1;
  ushort uVar2;
  int iVar3;
  uint * puVar4;
  uint uVar5;
  int * piVar6;
  undefined * pvVar7;
  byte * pbVar8;
  ushort * puVar9;
  int * piVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac));
  if (*((int *)GEN_TOP(((int)this + 0x260))) == 0) {
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x58))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x58))) GEN_EDX_FWD,((char *)REFP(0x108f7b0)));
    *((uint *)GEN_TOP(((int)this + 0x260))) = uVar5;
  }
  if (*((int *)GEN_TOP(((int)this + 0x27a8))) == 0) {
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x58))) + 8))))
                      (*((int * PTR32 *)GEN_TOP(((int)this + 0x58))) GEN_EDX_ARG,((char *)REFP(0x108f7b8)));
    *((uint *)GEN_TOP(((int)this + 0x27a8))) = uVar5;
  }
  else {
    iVar11 = 10;
    if (*((int *)GEN_TOP(((int)this + 0x27a0))) != 0) {
      while (iVar11 = iVar11 - 1, 0 < iVar11) {
        uVar5 = *((uint *)GEN_TOP(((int)this + 0x279c)));
        iVar12 = 0;
        if (*((int * PTR32 *)GEN_TOP(((int)this + 0x2790))) != ((int *)GEN_TOP(0x0))) {
          iVar12 = **((int * PTR32 *)GEN_TOP(((int)this + 0x2790)));
        }
        if (*((uint *)GEN_TOP((iVar12 + 8))) <= uVar5) {
          uVar5 = uVar5 - *((uint *)GEN_TOP((iVar12 + 8)));
        }
        piVar10 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar12 + 4))) + uVar5 * 4)));
        piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x27a8))) + 0x24))))
                                  (*((int * PTR32 *)GEN_TOP(((int)this + 0x27a8))) GEN_EDX_ARG,*piVar10)));
        if (piVar6 == ((int *)GEN_TOP(0x0))) {
          iVar11 = *piVar10;
          if (REFG(int, 0x13725ac) == *piVar10) {
            REFG(int, 0x13725a8) = REFG(int, 0x13725a8) + 1;
            if (REFG(int, 0x13725a8) < 0x97) break;
            F_00494640(((undefined *)GEN_TOP(((int)this + 0x2790))) GEN_EDX_ARG);
            iVar11 = REFG(int, 0x13725ac);
          }
          REFG(int, 0x13725ac) = iVar11;
          REFG(int, 0x13725a8) = 0;
          break;
        }
        if (-1 < *((char *)GEN_TOP(((int)piVar10 + 0xc6)))) {
          if (((char)piVar10[0x34] == '\0') ||
             (((*((char *)GEN_TOP((REFG(int, 0x137104c) + 0x1d))) == '\x04' && ((char)piVar10[0x31] != '\x02')) &&
              ((char)piVar10[0x31] != '\x04')))) {
            F_0045ca80(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x5c))) GEN_EDX_ARG,piVar10 + 7,
                         (int)*((char *)GEN_TOP(((int)piVar10 + 0xc6))),piVar10[0x32]);
          }
          else {
            F_0042b630(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
            F_00446ec0(this GEN_EDX_ARG,piVar10 + 7,((undefined1 *)(gen_frame + 0x54)));
            F_0045ca80(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x5c))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x54)),(int)*((char *)GEN_TOP(((int)piVar10 + 0xc6))),
                         piVar10[0x32]);
            F_0042c880(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
          }
        }
        if (-1 < *((char *)GEN_TOP(((int)piVar10 + 199)))) {
          if ((*((char *)GEN_TOP(((int)piVar10 + 0xd1))) == '\0') ||
             (((*((char *)GEN_TOP((REFG(int, 0x137104c) + 0x1d))) == '\x04' &&
               (*((char *)GEN_TOP(((int)piVar10 + 0xc5))) != '\x02')) &&
              (*((char *)GEN_TOP(((int)piVar10 + 0xc5))) != '\x04')))) {
            F_0045ccd0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x5c))) GEN_EDX_ARG,piVar10 + 0x1c,
                         (int)*((char *)GEN_TOP(((int)piVar10 + 199))),piVar10[0x33]);
          }
          else {
            F_0042b630(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
            F_00446ec0(this GEN_EDX_ARG,piVar10 + 0x1c,((undefined1 *)(gen_frame + 0x54)));
            F_0045ccd0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x5c))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x54)),(int)*((char *)GEN_TOP(((int)piVar10 + 199))),
                         piVar10[0x33]);
            F_0042c880(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
          }
        }
        iVar12 = (int)this + 0xb8;
        F_0042aca0(iVar12 GEN_EDX_ARG);
        uVar13 = 3;
        uVar14 = REFG(undefined4, 0x108cc50);
        pvVar7 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 8))))(piVar6 GEN_EDX_ARG)));
        uVar5 = F_00cb0950(pvVar7 GEN_EDX_ARG,uVar13);
        F_0042cc20(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG,uVar5,uVar14);
        uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x5c))) + 0xc))))
                          (*((int * PTR32 *)GEN_TOP(((int)this + 0x5c))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x54)),piVar10 + 1,iVar12);
        F_0042c880(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
        if (uVar5 == 0xffffffff) {
          if (*((int *)GEN_TOP(((int)this + 0x27a0))) != 0) {
            iVar12 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x2794))) + *((int *)GEN_TOP(((int)this + 0x279c))) * 4)));
            F_0042c880(((undefined *)GEN_TOP((iVar12 + 0x70))) GEN_EDX_ARG);
            F_0042c880(((undefined *)GEN_TOP((iVar12 + 0x1c))) GEN_EDX_ARG);
            F_00492c50(((undefined *)GEN_TOP((iVar12 + 4))) GEN_EDX_ARG);
            F_00429760(*((undefined4 *)GEN_TOP((iVar12 + 4))),8,0x2c4);
            *((undefined4 *)GEN_TOP((iVar12 + 4))) = 0;
            *((int *)GEN_TOP(((int)this + 0x279c))) = *((int *)GEN_TOP(((int)this + 0x279c))) + 1;
            if (*((uint *)GEN_TOP(((int)this + 0x2798))) <= *((uint *)GEN_TOP(((int)this + 0x279c)))) {
              *((undefined4 *)GEN_TOP(((int)this + 0x279c))) = 0;
            }
            piVar10 = ((int *)GEN_TOP(((int)this + 0x27a0)));
            *piVar10 = *piVar10 - 1;
            if (*piVar10 == 0) {
              *((undefined4 *)GEN_TOP(((int)this + 0x279c))) = 0;
            }
          }
        }
        else {
          if (uVar5 == 1) {
            uVar14 = 1;
            pvVar7 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 8))))(piVar6 GEN_EDX_ARG)));
            pbVar8 = ((byte *)GEN_TOP(F_00cb0910(pvVar7 GEN_EDX_ARG,uVar14)));
            bVar1 = *pbVar8;
            if ((bVar1 & 1) != 0) {
              uVar14 = 0;
              pvVar7 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 8))))(piVar6 GEN_EDX_ARG)));
              puVar9 = ((ushort *)GEN_TOP(F_00cb0910(pvVar7 GEN_EDX_ARG,uVar14)));
              uVar2 = *puVar9;
              if (uVar2 == 0x1d) {
                F_00459b00(this GEN_EDX_ARG,0x1d,piVar10 + 7,iVar12,0);
              }
              else {
                F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x108d16d),REFG(undefined4, 0x108cc50));
                F_00459b00(this GEN_EDX_ARG,(uint)(ushort)(((ushort)(*(byte *)(piVar10 + 0x31) & 7) << 3 |
                                                 (ushort)(*((byte *)GEN_TOP(((int)piVar10 + 0xc5))) & 7)) << 7
                                                | uVar2 & 0x7f),((undefined1 *)(gen_frame + 0x0)),iVar12,0);
                F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
              }
            }
            if ((bVar1 & 4) != 0) {
              piVar10 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
              iVar3 = *piVar10;
              uVar15 = 1;
              uVar13 = 1;
              uVar14 = 5;
              uVar5 = F_0042a990(iVar12 GEN_EDX_ARG);
              ((code *)*((gen_code32 *)GEN_TOP((iVar3 + 0xe4))))(piVar10,uVar5,uVar14,uVar13,uVar15);
            }
            if ((bVar1 & 8) != 0) {
              piVar10 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
              iVar3 = *piVar10;
              uVar5 = F_0042a990(iVar12 GEN_EDX_ARG);
              ((code *)*((gen_code32 *)GEN_TOP((iVar3 + 0xe8))))(piVar10,uVar5);
            }
            if ((bVar1 & 0x10) != 0) {
              piVar10 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
              iVar3 = *piVar10;
              uVar16 = 0;
              uVar15 = 0;
              uVar13 = 0;
              uVar14 = 0;
              uVar5 = F_0042a990(iVar12 GEN_EDX_ARG);
              ((code *)*((gen_code32 *)GEN_TOP((iVar3 + 0xdc))))(piVar10,0,uVar5,uVar14,uVar13,uVar15,uVar16);
            }
            if ((bVar1 & 0x20) != 0) {
              piVar10 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
              iVar3 = *piVar10;
              uVar15 = 1;
              uVar13 = 0;
              uVar14 = 5;
              uVar5 = F_0042a990(iVar12 GEN_EDX_ARG);
              ((code *)*((gen_code32 *)GEN_TOP((iVar3 + 0xe4))))(piVar10,uVar5,uVar14,uVar13,uVar15);
            }
            if ((bVar1 & 0x40) != 0) {
              piVar10 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
              iVar3 = *piVar10;
              uVar15 = 0;
              uVar13 = 0;
              uVar14 = 5;
              uVar5 = F_0042a990(iVar12 GEN_EDX_ARG);
              ((code *)*((gen_code32 *)GEN_TOP((iVar3 + 0xe4))))(piVar10,uVar5,uVar14,uVar13,uVar15);
            }
          }
          else {
            REFG(int, 0x13725b0) = REFG(int, 0x13725b0) + 1;
            if (REFG(int, 0x13725b0) < 0x97) goto LAB_00468d63;
          }
          F_00494640(((undefined *)GEN_TOP(((int)this + 0x2790))) GEN_EDX_ARG);
          REFG(int, 0x13725b0) = 0;
        }
LAB_00468d63: ;
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 4))))(piVar6 GEN_EDX_ARG);
        if ((REFG(int, 0x13725b0) != 0) || (*((int *)GEN_TOP(((int)this + 0x27a0))) == 0)) break;
      }
    }
  }
  if (*((int *)GEN_TOP(((int)this + 0x60))) != 0) {
    if (*((int *)GEN_TOP(((int)this + 0x2734))) != 0) {
      uVar5 = *((uint *)GEN_TOP(((int)this + 0x2730)));
      iVar11 = 0;
      if (*((int * PTR32 *)GEN_TOP(((int)this + 0x2724))) != ((int *)GEN_TOP(0x0))) {
        iVar11 = **((int * PTR32 *)GEN_TOP(((int)this + 0x2724)));
      }
      if (*((uint *)GEN_TOP((iVar11 + 8))) <= uVar5) {
        uVar5 = uVar5 - *((uint *)GEN_TOP((iVar11 + 8)));
      }
      puVar4 = *((uint * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar11 + 4))) + uVar5 * 4)));
      pvVar7 = ((undefined *)GEN_TOP(((int)this + 0x200c)));
      uVar5 = F_00465b90(this GEN_EDX_ARG,*puVar4 & 0x7f,puVar4 + 1,puVar4 + 0x16,0,(int)this + 0x26d4,pvVar7)
      ;
      if (uVar5 != 0) {
        F_0042e370(pvVar7 GEN_EDX_ARG,&REFG(undefined, 0x108f7c4));
        F_00484420(((undefined *)GEN_TOP(((int)this + 0x2724))) GEN_EDX_ARG);
        F_0042aca0(pvVar7 GEN_EDX_ARG);
      }
    }
    iVar11 = (int)this + 0x268;
    iVar12 = 4;
    do {
      if (*((char *)GEN_TOP(((int)this + 0x27ac))) != '\0') {
        F_0045a710(this GEN_EDX_ARG,iVar11);
      }
      F_00467560(this GEN_EDX_ARG,iVar11);
      iVar11 = iVar11 + 0x754;
      iVar12 = iVar12 - 1;
    } while (iVar12 != 0);
    *((undefined1 *)GEN_TOP(((int)this + 0x27ac))) = 0;
  }
  return;
}

/* ref: FUN_00468e90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00468e90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x468e90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1091864));
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0xdac))) GEN_EDX_FWD);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0xd54))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0xcec))) GEN_EDX_ARG);
  F_00489280(((undefined *)GEN_TOP(((int)this + 0xcd8))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xcdc))),
               *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xcdc))));
  F_00429760(*((undefined4 *)GEN_TOP(((int)this + 0xcdc))),0x74,400);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0xc80))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0xc20))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0xbcc))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0xb78))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0xb18))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0xabc))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0xa64))) GEN_EDX_ARG);
  F_00488ef0(((undefined *)GEN_TOP(((int)this + 0xa48))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x9e4))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x990))) GEN_EDX_ARG);
  F_00488ef0(((undefined *)GEN_TOP(((int)this + 0x978))) GEN_EDX_ARG);
  F_00488ef0(((undefined *)GEN_TOP(((int)this + 0x964))) GEN_EDX_ARG);
  F_00488ef0(((undefined *)GEN_TOP(((int)this + 0x950))) GEN_EDX_ARG);
  F_00488ef0(((undefined *)GEN_TOP(((int)this + 0x93c))) GEN_EDX_ARG);
  F_00488ef0(((undefined *)GEN_TOP(((int)this + 0x928))) GEN_EDX_ARG);
  F_00488ef0(((undefined *)GEN_TOP(((int)this + 0x914))) GEN_EDX_ARG);
  F_0048a490(((undefined *)GEN_TOP(((int)this + 0x904))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x8b0))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x85c))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x808))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x7b4))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x760))) GEN_EDX_ARG);
  F_0048a3d0(((undefined *)GEN_TOP(((int)this + 0x750))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x6fc))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x694))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x640))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x5ec))) GEN_EDX_ARG);
  F_0048a3d0(((undefined *)GEN_TOP(((int)this + 0x5dc))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x588))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x534))) GEN_EDX_ARG);
  F_0048a360(((undefined *)GEN_TOP(((int)this + 0x524))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x4d0))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x47c))) GEN_EDX_ARG);
  F_0048a2f0(((undefined *)GEN_TOP(((int)this + 0x46c))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x418))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x3c4))) GEN_EDX_ARG);
  F_00488e10(((undefined *)GEN_TOP(((int)this + 0x3b4))) GEN_EDX_ARG);
  F_0048a430(((undefined *)GEN_TOP(((int)this + 0x3a4))) GEN_EDX_ARG);
  F_00493c70(((undefined *)GEN_TOP(((int)this + 0x394))) GEN_EDX_ARG);
  F_0048a2f0(((undefined *)GEN_TOP(((int)this + 900))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x330))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x2dc))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x288))) GEN_EDX_ARG);
  F_0048a360(((undefined *)GEN_TOP(((int)this + 0x278))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x224))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x1d0))) GEN_EDX_ARG);
  uVar1 = F_00ad0190(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00469100 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00469100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x469100u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_00acfc20(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
  F_00468220(this GEN_EDX_ARG);
  uVar1 = F_004475f0(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00469120 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00469120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x469120u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  byte bVar1;
  
  *((int *)GEN_TOP(((int)this + 0x160))) = param_1;
  *((int *)GEN_TOP(((int)this + 0x164))) = param_2;
  bVar1 = 0;
  if ((REFG(void * PTR32, 0x137104c) != ((undefined *)GEN_TOP(0x0))) && (param_1 != 0 || param_2 != 0)) {
    (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)REFP(0x4683b0));
    (*(gen_code32 *)(gen_frame + 0x0)) = ((code *)REFP(0x474710));
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    bVar1 = F_00976cb0(REFG(void * PTR32, 0x137104c) GEN_EDX_ARG,param_1,param_2,&(*(gen_code32 *)(gen_frame + 0x0)),0);
    if (bVar1 == 0) {
      *((undefined1 *)GEN_TOP(((int)this + 0x16b))) = 1;
    }
  }
  return bVar1;
}

/* ref: FUN_00469190 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00469190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x469190u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined * this_00;
  byte bVar5;
  uint uVar6;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x164))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x160))) = param_1;
  F_0042ccf0(((undefined *)GEN_TOP(((int)this + 0x40))) GEN_EDX_FWD,param_3);
  F_0042ccf0(((undefined *)GEN_TOP(((int)this + 0x94))) GEN_EDX_ARG,param_3 + 0x54);
  *((undefined4 *)GEN_TOP(((int)this + 0xe8))) = *((undefined4 *)GEN_TOP((param_3 + 0xa8)));
  uVar2 = *((undefined4 *)GEN_TOP((param_3 + 0xac)));
  *((undefined4 *)GEN_TOP(((int)this + 0xec))) = uVar2;
  iVar3 = *((int *)GEN_TOP((param_3 + 0xb0)));
  *((int *)GEN_TOP(((int)this + 0xf0))) = iVar3;
  if (iVar3 == 0) {
    uVar6 = F_00ab21a0(uVar2);
    if (uVar6 != 0) {
      cVar1 = *((char *)GEN_TOP((uVar6 + 0x40)));
      if (cVar1 == '\x01') {
        *((undefined4 *)GEN_TOP(((int)this + 0xf0))) = 0x1d;
      }
      else if (cVar1 == '\x02') {
        *((undefined4 *)GEN_TOP(((int)this + 0xf0))) = 0x34;
      }
      else if (cVar1 == '\x03') {
        *((undefined4 *)GEN_TOP(((int)this + 0xf0))) = 0x28;
      }
      else {
        *((undefined4 *)GEN_TOP(((int)this + 0xf0))) = 0x15;
      }
    }
  }
  this_00 = REFG(void * PTR32, 0x137104c);
  if ((REFG(void * PTR32, 0x137104c) == ((undefined *)GEN_TOP(0x0))) ||
     (*((int *)GEN_TOP(((int)this + 0x160))) == 0 && *((int *)GEN_TOP(((int)this + 0x164))) == 0)) {
    bVar5 = 0;
  }
  else {
    *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_4;
    *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_5;
    *((undefined4 *)GEN_TOP(((int)this + 0x20))) = param_6;
    *((undefined4 *)GEN_TOP(((int)this + 0x24))) = param_7;
    *((undefined4 *)GEN_TOP(((int)this + 0x38))) = param_8;
    (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)REFP(0x4683b0));
    uVar2 = *((undefined4 *)GEN_TOP(((int)this + 0x160)));
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    uVar4 = *((undefined4 *)GEN_TOP(((int)this + 0x164)));
    (*(gen_code32 *)(gen_frame + 0x0)) = ((code *)REFP(0x474710));
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
    bVar5 = F_00976cb0(this_00 GEN_EDX_ARG,uVar2,uVar4,&(*(gen_code32 *)(gen_frame + 0x0)),0);
    if (bVar5 == 0) {
      *((undefined1 *)GEN_TOP(((int)this + 0x16b))) = 1;
      return 0;
    }
  }
  return bVar5;
}

/* ref: FUN_004692c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004692c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4692c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  undefined * pvVar5;
  undefined * this_00;
  undefined3 extraout_var = 0;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x14);
  (*(uint *)(gen_frame + 0x10)) = uVar2;
  if (*((int *)GEN_TOP(((int)this + 0x1c))) != 0) {
    if (param_1 != 0) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x10))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD);
      if (*((int *)GEN_TOP((uVar2 + 600))) == 0) {
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((uVar2 + 0x34))) + 8))))(*((int * PTR32 *)GEN_TOP((uVar2 + 0x34))) GEN_EDX_ARG,((char *)REFP(0x108f868)));
        *((uint *)GEN_TOP((uVar2 + 600))) = uVar3;
      }
      piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((uVar2 + 600))) + 0x24))))(*((int * PTR32 *)GEN_TOP((uVar2 + 600))) GEN_EDX_ARG,0x17d6)));
      uVar10 = 0;
      pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 8))))(piVar4 GEN_EDX_ARG)));
      uVar2 = F_00cb0950(pvVar5 GEN_EDX_ARG,uVar10);
      uVar11 = 0;
      uVar9 = 1;
      uVar8 = 0;
      uVar7 = 5;
      uVar6 = 0;
      uVar10 = 1;
      pvVar5 = this;
      this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x10))) + 0x1c))))
                                  (*((int * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG)));
      uVar2 = F_00897360(this_00 GEN_EDX_ARG,uVar2,pvVar5,uVar10,uVar6,uVar7,uVar8,uVar9,uVar11);
      *((uint *)GEN_TOP(((int)this + 0x14))) = uVar2;
      return uVar2;
    }
    if (REFG(void * PTR32, 0x137104c) != ((undefined *)GEN_TOP(0x0))) {
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(gen_code32 *)(gen_frame + 0x0)) = ((code *)REFP(0x474710));
      (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
      (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)REFP(0x466e70));
      bVar1 = F_00976af0(REFG(void * PTR32, 0x137104c) GEN_EDX_ARG,&(*(gen_code32 *)(gen_frame + 0x0)),0);
      uVar2 = CONCAT31(extraout_var,bVar1);
    }
  }
  return uVar2;
}

/* ref: FUN_004693b0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_004693b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4693b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  int iVar2;
  
  if ((((*((char *)GEN_TOP(((int)this + 0x169))) != '\0') && (REFG(void * PTR32, 0x137104c) != ((undefined *)GEN_TOP(0x0)))) &&
      (*((char *)GEN_TOP((*((int *)GEN_TOP(((int)REFG(void * PTR32, 0x137104c) + 0x10))) + 0xac))) != '\0')) &&
     (bVar1 = F_00976910(REFG(void * PTR32, 0x137104c) GEN_EDX_FWD), bVar1 == 0)) {
    F_00469120(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x160))),*((undefined4 *)GEN_TOP(((int)this + 0x164))));
    *((undefined1 *)GEN_TOP(((int)this + 0x169))) = 0;
  }
  iVar2 = 0;
  do {
    if (((*((char *)GEN_TOP(((int)this + iVar2 + 0x16a))) != '\0') && (REFG(void * PTR32, 0x137104c) != ((undefined *)GEN_TOP(0x0)))) &&
       ((*((char *)GEN_TOP((*((int *)GEN_TOP(((int)REFG(void * PTR32, 0x137104c) + 0x10))) + 0xac))) != '\0' &&
        (bVar1 = F_00976910(REFG(void * PTR32, 0x137104c) GEN_EDX_ARG), bVar1 == 0)))) {
      *((undefined1 *)GEN_TOP(((int)this + iVar2 + 0x16a))) = 0;
      switch((unsigned int)(uintptr_t)(iVar2)) {
      case 0: ;
        F_0044d4a0(this GEN_EDX_ARG);
        break;
      case 1: ;
        F_00469120(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x160))),*((undefined4 *)GEN_TOP(((int)this + 0x164))));
        break;
      case 2: ;
        F_00466eb0(this GEN_EDX_ARG);
        break;
      case 3: ;
        F_0044d3f0(this GEN_EDX_ARG,(int)this + 0x1a0);
        break;
      case 4: ;
        F_00466f40(this GEN_EDX_ARG,(int)this + 0x1b0);
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 5);
  return;
}

/* ref: FUN_004694b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004694b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4694b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  undefined4 * puVar1;
  int iVar2;
  undefined * this_00;
  int * piVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[74])REFP(0x1091894));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[2])REFP(0x1091884));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[2])REFP(0x1091878));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) = (*(undefined * PTR32 (*)[2])REFP(0x109186c));
  F_005935e0(((undefined *)GEN_TOP(((int)this + 0x63df0))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x92530))) = (*(undefined * PTR32 (*)[2])REFP(0x1090754));
  REFG(undefined1, 0x12fdbd7) = 0;
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x92560))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x92530))) =
       (*(undefined * PTR32 (*)[2])REFP(0x10905bc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x924f8))) = (*(undefined * PTR32 (*)[9])REFP(0x1090a64));
  if (*((int *)GEN_TOP(((int)this + 0x9250c))) != 0) {
    F_00406810(*((int *)GEN_TOP(((int)this + 0x9250c))));
    *((undefined4 *)GEN_TOP(((int)this + 0x9250c))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x92510))) = 0;
  }
  F_00a34020(((undefined *)GEN_TOP(((int)this + 0x91ca8))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x91c50))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x91bfc))) GEN_EDX_ARG);
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x91ba8)));
  F_0042c880(this_00 GEN_EDX_ARG);
  iVar2 = 1;
  do {
    this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x54)));
    F_0042c880(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x91aac))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x91a50))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x91998))) = (*(undefined * PTR32 (*)[1])REFP(0x1090760));
  piVar3 = ((int *)GEN_TOP(((int)this + 0x919a0)));
  iVar2 = 0x10;
  do {
    puVar1 = ((undefined4 *)GEN_TOP(*piVar3));
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x919e8))) GEN_EDX_ARG);
  F_008ed970(((undefined *)GEN_TOP(((int)this + 0x63df0))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x5c2d0))) = (*(undefined * PTR32 (*)[1])REFP(0x109072c));
  F_00a4b160(((undefined *)GEN_TOP(((int)this + 0x63490))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x5c118))) = (*(undefined * PTR32 (*)[2])REFP(0x1090990));
  F_00a29b20(((undefined *)GEN_TOP(((int)this + 0x5c228))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x5c1d0))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x5c17c))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x5c128))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x5c118))) = (*(undefined * PTR32 (*)[2])REFP(0x10904f8));
  F_0043d770(((undefined *)GEN_TOP(((int)this + 0x5b8f0))) GEN_EDX_ARG);
  F_004600d0(((undefined *)GEN_TOP(((int)this + 0x57858))) GEN_EDX_ARG);
  F_004564b0(((undefined *)GEN_TOP(((int)this + 0x575b8))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x57580))) = (*(undefined * PTR32 (*)[9])REFP(0x1090a64));
  if (*((int *)GEN_TOP(((int)this + 0x57594))) != 0) {
    F_00406810(*((int *)GEN_TOP(((int)this + 0x57594))));
    *((undefined4 *)GEN_TOP(((int)this + 0x57594))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x57598))) = 0;
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x57538))) = (*(undefined * PTR32 (*)[9])REFP(0x109181c));
  F_00492d20(((undefined *)GEN_TOP(((int)this + 0x57570))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x57574))),
               *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x57574))));
  F_00429760(*((undefined4 *)GEN_TOP(((int)this + 0x57574))),0x74,400);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x57538))) = (*(undefined * PTR32 (*)[9])REFP(0x1090a64));
  if (*((int *)GEN_TOP(((int)this + 0x5754c))) != 0) {
    F_00406810(*((int *)GEN_TOP(((int)this + 0x5754c))));
    *((undefined4 *)GEN_TOP(((int)this + 0x5754c))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x57550))) = 0;
  }
  F_00482650(((undefined *)GEN_TOP(((int)this + 0x57518))) GEN_EDX_ARG);
  F_00429760(*((undefined4 *)GEN_TOP(((int)this + 0x57518))),8,400);
  *((undefined4 *)GEN_TOP(((int)this + 0x57518))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x574e8))) = (*(undefined * PTR32 (*)[9])REFP(0x1090a64));
  if (*((int *)GEN_TOP(((int)this + 0x574fc))) != 0) {
    F_00406810(*((int *)GEN_TOP(((int)this + 0x574fc))));
    *((undefined4 *)GEN_TOP(((int)this + 0x574fc))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x57500))) = 0;
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x501e8))) = (*(undefined * PTR32 (*)[9])REFP(0x1090a64));
  if (*((int *)GEN_TOP(((int)this + 0x501fc))) != 0) {
    F_00406810(*((int *)GEN_TOP(((int)this + 0x501fc))));
    *((undefined4 *)GEN_TOP(((int)this + 0x501fc))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x50200))) = 0;
  }
  F_004763e0(((undefined *)GEN_TOP(((int)this + 0x23f90))) GEN_EDX_ARG);
  F_00476380(((undefined *)GEN_TOP(((int)this + 0x30c0))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x30b0))) = (*(undefined * PTR32 (*)[5])REFP(0x10905a4));
  if (*((int *)GEN_TOP(((int)this + 0x30b4))) != 0) {
    F_0050c620(*((int *)GEN_TOP(((int)this + 0x30b4))),0,0);
  }
  F_005095f0(((undefined *)GEN_TOP(((int)this + 0x30b0))) GEN_EDX_ARG);
  F_00494f00(((undefined *)GEN_TOP(((int)this + 0x8f8))) GEN_EDX_ARG);
  F_00adb830(((undefined *)GEN_TOP(((int)this + 0x70c))) GEN_EDX_ARG);
  F_0045fdf0(((undefined *)GEN_TOP(((int)this + 0x224))) GEN_EDX_ARG);
  F_004878c0(((undefined *)GEN_TOP(((int)this + 500))) GEN_EDX_ARG);
  F_00429760(*((undefined4 *)GEN_TOP(((int)this + 500))),8,400);
  *((undefined4 *)GEN_TOP(((int)this + 500))) = 0;
  puVar1 = ((undefined4 *)GEN_TOP(((int)this + 0xc)));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1f0))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10904dc));
  *puVar1 = (*(undefined * PTR32 (*)[2])REFP(0x10909b4));
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x14))) != ((undefined *)GEN_TOP(0x0))) {
    puVar1 = ((undefined4 *)GEN_TOP(F_00414620(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,puVar1)));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[2])REFP(0x1090598));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[2])REFP(0x10904c4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[73])REFP(0x10905e4));
  return (uint)puVar1;
}

/* ref: FUN_00469810 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00469810(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x469810u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  code * pcVar1;
  int * piVar2;
  uint uVar3;
  undefined * pvVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  param_1[0x87] = param_1[0x87] + 1;
  F_0045cf20(param_1 + 0x89 GEN_EDX_FWD);
  F_00adc0f0(param_1 + 0x1c3 GEN_EDX_ARG,param_1 + 0x246ab,param_1 + 0x246c0,param_1 + 0x246d5,0);
  F_004583d0(param_1 + 0x170b4 GEN_EDX_ARG);
  F_0043d900(param_1 + 0x16e3c GEN_EDX_ARG);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_1[0x88])) + 0xc))))(((int *)GEN_TOP(param_1[0x88])) GEN_EDX_ARG)));
  if ((param_1[0x246aa] != *piVar2) &&
     (uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_1[0x88])) + 8))))(((int *)GEN_TOP(param_1[0x88])) GEN_EDX_ARG,((char *)REFP(0x108ec98))), uVar3 != 0)) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_1[0x88])) + 0xc))))(((int *)GEN_TOP(param_1[0x88])) GEN_EDX_ARG)));
    pcVar1 = *((gen_code32 *)GEN_TOP((*param_1 + 0x1c)));
    uVar9 = 0;
    uVar8 = 0xffffffff;
    param_1[0x246aa] = *piVar2;
    pvVar4 = ((undefined *)GEN_TOP((*pcVar1)(param_1)));
    F_005b6950(pvVar4 GEN_EDX_ARG,uVar3,uVar8,uVar9);
    if (param_1[0x11f] == 0) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_1[0x96])) + 8))))(((int *)GEN_TOP(param_1[0x96])) GEN_EDX_ARG,((char *)REFP(0x108f868)));
      param_1[0x11f] = uVar3;
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_1[0x11f])) + 0x24))))(((int *)GEN_TOP(param_1[0x11f])) GEN_EDX_ARG,4)));
    uVar8 = 0;
    pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG)));
    uVar3 = F_00cb0950(pvVar4 GEN_EDX_ARG,uVar8);
    if (param_1[0x11f] == 0) {
      uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_1[0x96])) + 8))))(((int *)GEN_TOP(param_1[0x96])) GEN_EDX_ARG,((char *)REFP(0x108f868)));
      param_1[0x11f] = uVar5;
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_1[0x11f])) + 0x24))))(((int *)GEN_TOP(param_1[0x11f])) GEN_EDX_ARG,3)));
    uVar8 = 0;
    pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG)));
    uVar5 = F_00cb0950(pvVar4 GEN_EDX_ARG,uVar8);
    if (param_1[0x11f] == 0) {
      uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_1[0x96])) + 8))))(((int *)GEN_TOP(param_1[0x96])) GEN_EDX_ARG,((char *)REFP(0x108f868)));
      param_1[0x11f] = uVar6;
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_1[0x11f])) + 0x24))))(((int *)GEN_TOP(param_1[0x11f])) GEN_EDX_ARG,2)));
    uVar8 = 0;
    pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG)));
    uVar6 = F_00cb0950(pvVar4 GEN_EDX_ARG,uVar8);
    if (param_1[0x11f] == 0) {
      uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_1[0x96])) + 8))))(((int *)GEN_TOP(param_1[0x96])) GEN_EDX_ARG,((char *)REFP(0x108f868)));
      param_1[0x11f] = uVar7;
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_1[0x11f])) + 0x24))))(((int *)GEN_TOP(param_1[0x11f])) GEN_EDX_ARG,1)));
    uVar8 = 0;
    pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG)));
    uVar7 = F_00cb0950(pvVar4 GEN_EDX_ARG,uVar8);
    pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x1c))))(param_1 GEN_EDX_ARG)));
    F_00567690(pvVar4 GEN_EDX_ARG,uVar7,uVar6,uVar5,uVar3);
  }
  F_004688b0(param_1 + 0x23e GEN_EDX_ARG);
  F_004693b0(param_1 + 0x15e16 GEN_EDX_ARG);
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x1c))))(param_1 GEN_EDX_ARG);
  F_0059ff80(uVar3 GEN_EDX_ARG,param_2);
  if ((char)param_1[0x8fef] != '\0') {
    ((code *)*((gen_code32 *)GEN_TOP((param_1[0x8fe4] + 0x20))))(param_1 + 0x8fe4,0);
  }
  if ((char)param_1[0x14085] != '\0') {
    ((code *)*((gen_code32 *)GEN_TOP((param_1[0x1407a] + 0x20))))(param_1 + 0x1407a,0);
  }
  if ((char)param_1[0x85] != '\0') {
    F_004246b0(REFG(void * PTR32, 0x137104c) GEN_EDX_ARG,1);
  }
  return (char)param_1[0x85] == '\0';
}

/* ref: FUN_00469aa0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00469aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x469aa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  char cVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  undefined * this_01;
  uint uVar5;
  uint in_ecx;
  undefined * this_02;
  int * piVar6;
  uint uVar7;
  undefined3 extraout_var = 0;
  uint uVar8;
  int iVar9;
  int local_c;
  
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x30))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  this_01 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x50))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x48))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
  in_ecx = F_00763050(uVar5 GEN_EDX_ARG,3);
  this_02 = ((undefined *)GEN_TOP(F_00763050(uVar5 GEN_EDX_ARG,0x56)));
  piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x24))))(piVar6 GEN_EDX_ARG,6);
  cVar1 = *((char *)GEN_TOP((uVar4 + 0x2c24c)));
  if (uVar5 == 0) {
    return 0;
  }
  uVar7 = F_00770c70(in_ecx GEN_EDX_ARG);
  local_c = 0xc5;
  uVar8 = uVar7;
  do {
    if (local_c < 0xcd) {
      bVar3 = *((byte *)GEN_TOP((uVar4 + 0x2c24c))) & 0x14;
    }
    else {
      bVar3 = *((byte *)GEN_TOP((uVar4 + 0x2c24c))) & 0x28;
    }
    uVar8 = CONCAT31((int3)(uVar8 >> 8),bVar3 != 0);
    if (bVar3 != 0) {
      bVar3 = F_00a34c40(this_01 GEN_EDX_ARG,local_c);
      uVar8 = CONCAT31(extraout_var,bVar3);
      if (bVar3 != 0) {
        if (cVar1 < '\0') {
          F_00a7d290(0x1c8,0,0,0,0,REFG(float, 0x10916ec));
          uVar8 = F_00a34270(this_01 GEN_EDX_ARG);
        }
        else {
          uVar8 = F_00770c70(in_ecx GEN_EDX_ARG);
          uVar8 = (uVar8 * 0x10 + local_c) * 0x164;
          this_00 = ((undefined *)GEN_TOP(((uVar8 - 0x111ac) + uVar4)));
          if (*((char *)GEN_TOP(((uVar8 - 0x111a4) + uVar4))) != '\0') {
            if (*((int *)GEN_TOP(((int)this_00 + 0xb4))) != 0) goto LAB_00469bec;
            uVar8 = F_00446380(*((undefined1 *)GEN_TOP(((int)this_00 + 9))),*((undefined4 *)GEN_TOP(((int)this_00 + 4)))
                                );
            *((uint *)GEN_TOP(((int)this_00 + 0xb4))) = uVar8;
          }
          if (*((int *)GEN_TOP(((int)this_00 + 0xb4))) != 0) {
LAB_00469bec: ;
            if ((*((char *)GEN_TOP(((int)this_00 + 8))) != '\0') && (*((int *)GEN_TOP(((int)this_00 + 0xb4))) == 0)) {
              uVar4 = F_00446380(*((undefined1 *)GEN_TOP(((int)this_00 + 9))),
                                   *((undefined4 *)GEN_TOP(((int)this_00 + 4))));
              *((uint *)GEN_TOP(((int)this_00 + 0xb4))) = uVar4;
            }
            uVar2 = *((undefined4 *)GEN_TOP(((int)this_00 + 0xb4)));
            uVar4 = F_004673b0(this_00 GEN_EDX_ARG);
            F_00778ba0(this_02 GEN_EDX_ARG,uVar2,uVar4);
            F_00468520(this GEN_EDX_ARG,local_c - 0xc5,uVar7,this_00);
            F_0043f8b0(2);
            iVar9 = *((int *)GEN_TOP(((int)this + 0x1c))) + 1;
            if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0x2d34))) != iVar9) {
              *((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0x2d34))) = iVar9;
              *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
            }
            *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 2;
            uVar4 = F_00a34270(this_01 GEN_EDX_ARG);
            return uVar4;
          }
        }
      }
    }
    local_c = local_c + 1;
    if (0xd4 < local_c) {
      return uVar8;
    }
  } while( true );
}

/* ref: FUN_00469c80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00469c80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x469c80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined1 * puVar3;
  int iVar4;
  int in_ecx;
  undefined * this_00;
  
  iVar4 = 0;
  F_00b003f0(this GEN_EDX_FWD,param_3,0);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10919c0));
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
  in_ecx = (int)this + 100;
  param_3 = 5;
  do {
    F_0042b630(in_ecx GEN_EDX_ARG);
    in_ecx = in_ecx + 0x54;
    param_3 = param_3 - 1;
  } while (-1 < param_3);
  *((undefined4 *)GEN_TOP(((int)this + 0x260))) = 0;
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x268)));
  param_3 = 4;
  do {
    F_00491230(this_00 GEN_EDX_ARG);
    this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x754)));
    param_3 = param_3 - 1;
  } while (-1 < param_3);
  puVar1 = ((undefined4 *)GEN_TOP(((int)this + 0x270c)));
  *puVar1 = 0;
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(8,0,0x192)));
  *puVar1 = puVar2;
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *((undefined4 * PTR32 *)GEN_TOP(*puVar1)) = puVar1;
  *((undefined4 *)GEN_TOP(((int)this + 10000))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2714))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2718))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x271c))) = 0;
  puVar1 = ((undefined4 *)GEN_TOP(((int)this + 0x2724)));
  *puVar1 = 0;
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(8,0,0x192)));
  *puVar1 = puVar2;
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *((undefined4 * PTR32 *)GEN_TOP(*puVar1)) = puVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x2728))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x272c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2730))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2734))) = 0;
  F_0042b630((int)this + 0x273c GEN_EDX_ARG);
  puVar1 = ((undefined4 *)GEN_TOP(((int)this + 0x2790)));
  *puVar1 = 0;
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(8,0,0x192)));
  *puVar1 = puVar2;
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *((undefined4 * PTR32 *)GEN_TOP(*puVar1)) = puVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x2794))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2798))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x279c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x27a0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x27a8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x27ac))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x27b0))) = 0;
  puVar3 = ((undefined1 *)GEN_TOP(((int)this + 0x9bb)));
  do {
    *puVar3 = (char)iVar4;
    iVar4 = iVar4 + 1;
    puVar3 = puVar3 + 0x754;
  } while (iVar4 < 5);
  return (uint)this;
}

/* ref: FUN_00469dd0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00469dd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x469dd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1091864));
  F_00acfad0((int)this + 8 GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x184))) = 0;
  F_00a1af40(((undefined *)GEN_TOP(((int)this + 0x188))) GEN_EDX_ARG);
  F_00a1af40(((undefined *)GEN_TOP(((int)this + 0x1a0))) GEN_EDX_ARG);
  F_00a1af40(((undefined *)GEN_TOP(((int)this + 0x1b8))) GEN_EDX_ARG);
  F_0042b630((int)this + 0x1d0 GEN_EDX_ARG);
  F_0042b630((int)this + 0x224 GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 0x278))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x27c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x280))) = 0;
  F_0042b630((int)this + 0x288 GEN_EDX_ARG);
  F_00494c80((int)this + 0x2dc GEN_EDX_ARG);
  F_0042b630((int)this + 0x3c4 GEN_EDX_ARG);
  F_0042b630((int)this + 0x418 GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 0x46c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x470))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x474))) = 0;
  F_0042b630((int)this + 0x47c GEN_EDX_ARG);
  F_0042b630((int)this + 0x4d0 GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 0x524))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x528))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x52c))) = 0;
  F_0042b630((int)this + 0x534 GEN_EDX_ARG);
  F_0042b630((int)this + 0x588 GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 0x5dc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5e0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5e4))) = 0;
  F_0042b630((int)this + 0x5ec GEN_EDX_ARG);
  F_0042b630((int)this + 0x640 GEN_EDX_ARG);
  F_0042b630((int)this + 0x694 GEN_EDX_ARG);
  F_0042b630((int)this + 0x6fc GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 0x750))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x754))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x758))) = 0;
  F_0042b630((int)this + 0x760 GEN_EDX_ARG);
  F_0042b630((int)this + 0x7b4 GEN_EDX_ARG);
  F_0042b630((int)this + 0x808 GEN_EDX_ARG);
  F_0042b630((int)this + 0x85c GEN_EDX_ARG);
  F_0042b630((int)this + 0x8b0 GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 0x904))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x908))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x90c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x914))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x918))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x91c))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x924))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x928))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x92c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x930))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x938))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x93c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x940))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x944))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x94c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x950))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x954))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x958))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x960))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x964))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x968))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x96c))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x974))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x978))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x97c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x980))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x988))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x98c))) = 0xffffffff;
  F_0042b630((int)this + 0x990 GEN_EDX_ARG);
  F_0042b630((int)this + 0x9e4 GEN_EDX_ARG);
  *((undefined1 *)GEN_TOP(((int)this + 0xa38))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0xa3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa48))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa4c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa50))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0xa58))) = 0;
  F_0042b630((int)this + 0xa64 GEN_EDX_ARG);
  F_0042b630((int)this + 0xabc GEN_EDX_ARG);
  F_0042b630((int)this + 0xb18 GEN_EDX_ARG);
  F_0042b630((int)this + 0xb78 GEN_EDX_ARG);
  F_0042b630((int)this + 0xbcc GEN_EDX_ARG);
  F_0042b630((int)this + 0xc20 GEN_EDX_ARG);
  *((undefined1 *)GEN_TOP(((int)this + 0xc74))) = 0;
  F_0042b630((int)this + 0xc80 GEN_EDX_ARG);
  *((undefined1 *)GEN_TOP(((int)this + 0xcd4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xce0))) = 0;
  uVar1 = F_004296a0(0x74,0,400);
  *((uint *)GEN_TOP(((int)this + 0xcdc))) = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xcdc))) + 4))) = *((int *)GEN_TOP(((int)this + 0xcdc)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xcdc))) + 8))) = *((int *)GEN_TOP(((int)this + 0xcdc)));
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xcdc))) + 0x70))) = 1;
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xcdc))) + 0x71))) = 1;
  F_0042b630((int)this + 0xcec GEN_EDX_ARG);
  F_0042b630((int)this + 0xd54 GEN_EDX_ARG);
  F_0042b630((int)this + 0xdac GEN_EDX_ARG);
  *(undefined4 *)&REFG(undefined, 0x1372328) = 0x10101ff;
  *(undefined2 *)&REFG(undefined, 0x137232c) = 0x302;
  REFG(undefined4, 0x137232e) = 4;
  return (uint)this;
}

/* ref: FUN_0046a100 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0046a100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x46a100u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_GS(0x64, 12, 4);
  int * this_00;
  undefined * this_01;
  undefined4 * puVar1;
  uint uVar2;
  uint in_ecx;
  int iVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[2])REFP(0x10904c4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[2])REFP(0x1090598));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) =
       (*(undefined * PTR32 (*)[2])REFP(0x10909b4));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[74])REFP(0x1091894));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[2])REFP(0x1091884));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[2])REFP(0x1091878));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) = (*(undefined * PTR32 (*)[2])REFP(0x109186c));
  F_008b6830(((undefined *)GEN_TOP(((int)this + 0x1f0))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x218))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x21c))) = 0;
  this_00 = ((int *)GEN_TOP(((int)this + 0x224)));
  *((undefined4 *)GEN_TOP(((int)this + 0x210))) = 0xffffffff;
  *((undefined1 *)GEN_TOP(((int)this + 0x214))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x220))) = param_1;
  F_00465e90(this_00 GEN_EDX_ARG,this);
  F_00adaf00(((undefined *)GEN_TOP(((int)this + 0x70c))) GEN_EDX_ARG,param_1,this_00);
  F_00469c80(((undefined *)GEN_TOP(((int)this + 0x8f8))) GEN_EDX_ARG,param_1,this_00,0);
  puVar1 = ((undefined4 *)GEN_TOP(((int)this + 0x30b0)));
  F_00509590(puVar1 GEN_EDX_ARG);
  *puVar1 = (*(undefined * PTR32 (*)[5])REFP(0x10905a4));
  *((undefined4 *)GEN_TOP(((int)this + 0x30b4))) = 0;
  F_0044c780(((undefined *)GEN_TOP(((int)this + 0x30c0))) GEN_EDX_ARG,this_00,(int)this + 0x3dc,puVar1);
  F_00446a20(((undefined *)GEN_TOP(((int)this + 0x23f90))) GEN_EDX_ARG,puVar1,this);
  F_00446cf0(((undefined *)GEN_TOP(((int)this + 0x501e8))) GEN_EDX_ARG,puVar1,this);
  F_00453fe0(((undefined *)GEN_TOP(((int)this + 0x574e8))) GEN_EDX_ARG,puVar1);
  F_004601f0(((undefined *)GEN_TOP(((int)this + 0x57538))) GEN_EDX_ARG,puVar1);
  puVar1 = ((undefined4 *)GEN_TOP(((int)this + 0x57580)));
  *((undefined4 *)GEN_TOP(((int)this + 0x57588))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5758c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x57594))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x57598))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5759c))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x575ac))) = 0;
  *puVar1 = (*(undefined * PTR32 (*)[9])REFP(0x1090a64));
  *((int *)GEN_TOP(((int)this + 0x57590))) = (int)this + 0x30b0;
  F_00c49908((int)this + 0x575a0,0xc,((char *)REFP(0x108f3c0)));
  *((undefined4 *)GEN_TOP(((int)this + 0x575b0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x575b4))) = 0;
  *puVar1 = (*(undefined * PTR32 (*)[9])REFP(0x1090bd4));
  F_00458cd0(((undefined *)GEN_TOP(((int)this + 0x575b8))) GEN_EDX_ARG,(int)this + 0x30b0);
  F_0045fee0(((undefined *)GEN_TOP(((int)this + 0x57858))) GEN_EDX_ARG,this);
  F_0045e090(((undefined *)GEN_TOP(((int)this + 0x5b8f0))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x220))),this_00,this);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x5c118))) = (*(undefined * PTR32 (*)[2])REFP(0x1090990));
  *((undefined4 *)GEN_TOP(((int)this + 0x5c11c))) = param_1;
  *((int * PTR32 *)GEN_TOP(((int)this + 0x5c120))) = this_00;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c124))) = 0;
  F_0042b630((int)this + 0x5c128 GEN_EDX_ARG);
  F_0042b630((int)this + 0x5c17c GEN_EDX_ARG);
  F_0042b630((int)this + 0x5c1d0 GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 0x5c224))) = 0;
  F_00a29aa0(((undefined *)GEN_TOP(((int)this + 0x5c228))) GEN_EDX_ARG);
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x5c2c8))) = this;
  F_0043e230(((undefined *)GEN_TOP(((int)this + 0x5c2d0))) GEN_EDX_ARG);
  F_008f2ca0(((undefined *)GEN_TOP(((int)this + 0x63df0))) GEN_EDX_ARG,param_3,this,*((undefined4 *)GEN_TOP(((int)this + 0x220))),this_00
               ,(int)this + 0x70c,(int)this + 0x8f8,(int)this + 0x23f90,(int)this + 0x57538,puVar1,
               param_2);
  F_0045b9d0(((undefined *)GEN_TOP(((int)this + 0x91998))) GEN_EDX_ARG,this);
  this_01 = ((undefined *)GEN_TOP(((int)this + 0x91a50)));
  F_0042b630(this_01 GEN_EDX_ARG);
  F_004142d0((int)this + 0x91aa8 GEN_EDX_ARG,0xffffffff);
  F_0042b630((int)this + 0x91aac GEN_EDX_ARG);
  (*(int *)(gen_frame + 0x4)) = (int)this + 0x91b00;
  (*(int *)(gen_frame + 0x0)) = 1;
  do {
    F_0042b630((*(int *)(gen_frame + 0x4)) GEN_EDX_ARG);
    (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + 0x54;
    (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) - 1;
  } while (-1 < (*(int *)(gen_frame + 0x0)));
  F_0042b630((int)this + 0x91ba8 GEN_EDX_ARG);
  F_0042b630((int)this + 0x91bfc GEN_EDX_ARG);
  F_0042b630((int)this + 0x91c50 GEN_EDX_ARG);
  F_0043e690(((undefined *)GEN_TOP(((int)this + 0x91ca8))) GEN_EDX_ARG,(int)this + 0x30b0);
  *((undefined4 *)GEN_TOP(((int)this + 0x9253c))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x92530))) = (*(undefined * PTR32 (*)[2])REFP(0x1090754));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x92534))) = this;
  *((undefined4 *)GEN_TOP(((int)this + 0x92538))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x92540))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x92544))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x92548))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9254c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x92550))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x92554))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x92558))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9255c))) = 0;
  F_0042b630((int)this + 0x92560 GEN_EDX_ARG);
  puVar1 = ((undefined4 *)GEN_TOP(((int)this + 0x18)));
  iVar3 = 0x3b;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = puVar1 + 2;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  F_0042e430(this_01 GEN_EDX_ARG,((char *)REFP(0x108ec64)));
  *((undefined4 *)GEN_TOP(((int)this + 0x91aa4))) = 0;
  F_00593470((int)this + 0x63df0 GEN_EDX_ARG,(uint)this_01);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x220))) + 0xc))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x220))) GEN_EDX_ARG);
  uVar2 = F_004143e0(uVar2 GEN_EDX_ARG);
  in_ecx = F_00559470((int)this + 0x63df0 GEN_EDX_ARG);
  F_0055f330(in_ecx GEN_EDX_ARG,uVar2);
  ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x63df0))) + 0x48))))((int)this + 0x63df0,(int)this + 4);
  ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x63df0))) + 0x8c))))((int)this + 0x63df0,(int)this + 0x1f0);
  uVar2 = F_00559470((int)this + 0x63df0 GEN_EDX_ARG);
  F_0045c990(((undefined *)GEN_TOP(((int)this + 0x8f8))) GEN_EDX_ARG,uVar2);
  *((gen_code32 *)GEN_TOP(((int)this + 0xa8))) = ((code *)REFP(0x434550));
  *((gen_code32 *)GEN_TOP(((int)this + 0xc0))) = ((code *)REFP(0x45b3b0));
  *((gen_code32 *)GEN_TOP(((int)this + 200))) = ((code *)REFP(0x45b410));
  *((gen_code32 *)GEN_TOP(((int)this + 0xb8))) = ((code *)REFP(0x4345f0));
  *((gen_code32 *)GEN_TOP(((int)this + 0x1b8))) = ((code *)REFP(0x45b510));
  *((gen_code32 *)GEN_TOP(((int)this + 0x140))) = ((code *)REFP(0x4493c0));
  *((undefined4 *)GEN_TOP(((int)this + 0xac))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xcc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xbc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1bc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x144))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x194))) = 0;
  *((gen_code32 *)GEN_TOP(((int)this + 400))) = ((code *)REFP(0x43ee10));
  F_0042e430(((undefined *)GEN_TOP(((int)this + 0x91aac))) GEN_EDX_ARG,((char *)REFP(0x108ec6c)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x20))))(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)),((char *)REFP(0x108ec78)));
  F_0042ccf0(((undefined *)GEN_TOP(((int)this + 0x91b00))) GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x20))))(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)),((char *)REFP(0x108ec84)));
  F_0042ccf0(((undefined *)GEN_TOP(((int)this + 0x91b54))) GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x20))))(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)),&REFG(undefined, 0x108ec90));
  F_0042ccf0(((undefined *)GEN_TOP(((int)this + 0x91ba8))) GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  F_00466080(this_00 GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_0046a5e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0046a5e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x46a5e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_0044d810(this GEN_EDX_FWD);
  uVar1 = *((int *)GEN_TOP(((int)this + 0x18))) - 1;
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
    uVar1 = F_00469aa0(this GEN_EDX_ARG);
    return uVar1;
  case 1: ;
    uVar1 = F_0045b5a0(this GEN_EDX_ARG);
    return uVar1;
  case 2: ;
    uVar1 = F_0044d930(this GEN_EDX_ARG);
    return uVar1;
  case 3: ;
    uVar1 = F_0045b840(this GEN_EDX_ARG);
    return uVar1;
  default: ;
    return uVar1;
  }
}

/* ref: FUN_0046a630 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0046a630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x46a630u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0xdc, 4, 4);
  uint uVar1;
  ulonglong uVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xd4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xd8));
  uVar1 = F_0045fb20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,param_1);
  F_004952c0(((undefined *)GEN_TOP(((int)this + 0x2790))) GEN_EDX_ARG,uVar1);
  F_0042c880(((undefined1 *)(gen_frame + 0x70)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x1c)) GEN_EDX_ARG);
  F_00492c50(((undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  uVar2 = F_00429760(((undefined4 *)(gen_frame + 0x4))[0],8,0x2c4);
  return (uint)uVar2;
}

/* ref: FUN_0046a6b0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0046a6b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x46a6b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x100, 0, 4);
  undefined * pvVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xf8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xfc));
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(0x0));
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(8,0,0x2c4)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = puVar2;
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *puVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0xec)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0xec)) = param_2;
  (*(undefined4 * PTR32 *)(gen_frame + 0xf0)) = &(*(undefined4 *)(gen_frame + 0xec));
  (*(char *)(gen_frame + 0xf4)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,1);
  uVar4 = (*(int *)(gen_frame + 0x10)) + (*(int *)(gen_frame + 0xc));
  if ((*(uint *)(gen_frame + 0x8)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0x8));
  }
  if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4))) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4))) = uVar3;
  }
  pvVar1 = *((undefined * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4)));
  if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
    F_00492f50(pvVar1 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xec)));
  }
  (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 1;
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0xf0)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0xf4)) != '\0')) && ((*(char *)(gen_frame + 0xf4)) == '\x01')) {
    pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0xf0))));
    *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
    }
  }
  (*(undefined4 *)(gen_frame + 0x18)) = param_1;
  F_004949f0(((undefined4 *)(gen_frame + 0x1c)) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0x0)));
  F_0042b630(((undefined1 *)(gen_frame + 0x34)) GEN_EDX_ARG);
  F_0042b630(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
  (*(undefined4 *)(gen_frame + 0xdc)) = 0xffff0000;
  (*(undefined4 *)(gen_frame + 0xe0)) = 0;
  (*(undefined4 *)(gen_frame + 0xe4)) = 0;
  (*(undefined2 *)(gen_frame + 0xe8)) = 0;
  F_004952c0(((undefined *)GEN_TOP(((int)this + 0x2790))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x18)));
  F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x34)) GEN_EDX_ARG);
  F_00492c50(((undefined4 *)(gen_frame + 0x1c)) GEN_EDX_ARG);
  F_00429760(((undefined4 *)(gen_frame + 0x1c))[0],8,0x2c4);
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar5 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
  return (uint)uVar5;
}

/* ref: FUN_0046a880 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0046a880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x46a880u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x100, 0, 4);
  undefined * pvVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xf8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xfc));
  (*(int * PTR32 *)(gen_frame + 0x0)) = ((int *)GEN_TOP(0x0));
  piVar2 = ((int *)GEN_TOP(F_004296a0(8,0,0x2c4)));
  (*(int * PTR32 *)(gen_frame + 0x0)) = piVar2;
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    *piVar2 = 0;
    piVar2[1] = 0;
  }
  *piVar2 = (int)&(*(int * PTR32 *)(gen_frame + 0x0));
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0xec)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0xf0)) = ((undefined4 *)GEN_TOP(0x0));
  (*(char *)(gen_frame + 0xf4)) = -1;
  F_00490f90(&(*(undefined4 *)(gen_frame + 0xec)) GEN_EDX_ARG,param_2);
  if ((*(uint *)(gen_frame + 0x8)) <= (*(int *)(gen_frame + 0x10)) + 1U) {
    F_00486f80(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,1);
  }
  uVar4 = (*(int *)(gen_frame + 0x10)) + (*(int *)(gen_frame + 0xc));
  if ((*(uint *)(gen_frame + 0x8)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0x8));
  }
  if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4))) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4))) = uVar3;
  }
  pvVar1 = *((undefined * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4)));
  if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
    F_00492f50(pvVar1 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xec)));
  }
  (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 1;
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0xf0)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0xf4)) != '\0')) && ((*(char *)(gen_frame + 0xf4)) == '\x01')) {
    pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0xf0))));
    *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
    }
  }
  (*(undefined4 *)(gen_frame + 0x18)) = param_1;
  F_004949f0(((undefined4 *)(gen_frame + 0x1c)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x0)));
  F_0042b630(((undefined1 *)(gen_frame + 0x34)) GEN_EDX_ARG);
  F_0042b630(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
  (*(undefined4 *)(gen_frame + 0xdc)) = 0xffff0000;
  (*(undefined4 *)(gen_frame + 0xe0)) = 0;
  (*(undefined4 *)(gen_frame + 0xe4)) = 0;
  (*(undefined2 *)(gen_frame + 0xe8)) = 0;
  F_004952c0(((undefined *)GEN_TOP(((int)this + 0x2790))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x18)));
  F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x34)) GEN_EDX_ARG);
  F_00492c50(((undefined4 *)(gen_frame + 0x1c)) GEN_EDX_ARG);
  F_00429760(((undefined4 *)(gen_frame + 0x1c))[0],8,0x2c4);
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar5 = F_00429760((*(int * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
  return (uint)uVar5;
}

/* ref: FUN_0046aa70 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0046aa70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x46aa70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0xdc, 4, 4);
  ulonglong uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xd4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xd8));
  (*(undefined4 *)(gen_frame + 0x0)) = param_1;
  F_004949f0(((undefined4 *)(gen_frame + 0x4)) GEN_EDX_FWD,param_2);
  F_0042b630(((undefined1 *)(gen_frame + 0x1c)) GEN_EDX_ARG);
  F_0042b630(((undefined1 *)(gen_frame + 0x70)) GEN_EDX_ARG);
  (*(undefined2 *)(gen_frame + 0xc4)) = 0;
  (*(undefined4 *)(gen_frame + 0xc8)) = 0;
  (*(undefined4 *)(gen_frame + 0xcc)) = 0;
  (*(undefined2 *)(gen_frame + 0xd0)) = 0;
  (*(undefined1 *)(gen_frame + 0xc6)) = 0xff;
  (*(undefined1 *)(gen_frame + 0xc7)) = 0xff;
  F_004952c0(((undefined *)GEN_TOP(((int)this + 0x2790))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x70)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x1c)) GEN_EDX_ARG);
  F_00492c50(((undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  uVar1 = F_00429760(((undefined4 *)(gen_frame + 0x4))[0],8,0x2c4);
  return (uint)uVar1;
}

/* ref: FUN_0046ab30 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0046ab30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x46ab30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_GS(0xdc, 4, 4);
  uint uVar1;
  ulonglong uVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xd4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xd8));
  uVar1 = F_004685f0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,param_1,param_2,param_3);
  F_004952c0(((undefined *)GEN_TOP(((int)this + 0x2790))) GEN_EDX_ARG,uVar1);
  F_0042c880(((undefined1 *)(gen_frame + 0x70)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x1c)) GEN_EDX_ARG);
  F_00492c50(((undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  uVar2 = F_00429760(((undefined4 *)(gen_frame + 0x4))[0],8,0x2c4);
  return (uint)uVar2;
}

/* ref: FUN_0046abb0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0046abb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x46abb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_GS(0xdc, 4, 4);
  uint uVar1;
  ulonglong uVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xd4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xd8));
  uVar1 = F_004686d0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,param_1,param_2,param_3,param_4);
  F_004952c0(((undefined *)GEN_TOP(((int)this + 0x2790))) GEN_EDX_ARG,uVar1);
  F_0042c880(((undefined1 *)(gen_frame + 0x70)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x1c)) GEN_EDX_ARG);
  F_00492c50(((undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  uVar2 = F_00429760(((undefined4 *)(gen_frame + 0x4))[0],8,0x2c4);
  return (uint)uVar2;
}

/* ref: FUN_0046ac40 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0046ac40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x46ac40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_GS(0xdc, 4, 4);
  uint uVar1;
  ulonglong uVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xd4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xd8));
  uVar1 = F_0045fbb0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,param_1,param_2,param_3);
  F_004952c0(((undefined *)GEN_TOP(((int)this + 0x2790))) GEN_EDX_ARG,uVar1);
  F_0042c880(((undefined1 *)(gen_frame + 0x70)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x1c)) GEN_EDX_ARG);
  F_00492c50(((undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  uVar2 = F_00429760(((undefined4 *)(gen_frame + 0x4))[0],8,0x2c4);
  return (uint)uVar2;
}

/* ref: FUN_0046acc0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0046acc0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined1 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0x46acc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined1 param_6 = (undefined1)gen_a5;)
  GEN_FRAME_DECL_GS(0xdc, 4, 4);
  uint uVar1;
  ulonglong uVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xd4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xd8));
  uVar1 = F_0045fd10(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,param_2,param_3,param_4,param_5,param_6);
  F_004952c0(((undefined *)GEN_TOP((param_1 + 0x2790))) GEN_EDX_ARG,uVar1);
  F_0042c880(((undefined1 *)(gen_frame + 0x70)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x1c)) GEN_EDX_ARG);
  F_00492c50(((undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  uVar2 = F_00429760(((undefined4 *)(gen_frame + 0x4))[0],8,0x2c4);
  return (uint)uVar2;
}

/* ref: FUN_0046ad60 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0046ad60(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x46ad60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_GS(0xdc, 4, 4);
  uint uVar1;
  ulonglong uVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xd4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xd8));
  uVar1 = F_00468810(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,param_2,param_3,param_4,param_5);
  F_004952c0(((undefined *)GEN_TOP((param_1 + 0x2790))) GEN_EDX_ARG,uVar1);
  F_0042c880(((undefined1 *)(gen_frame + 0x70)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x1c)) GEN_EDX_ARG);
  F_00492c50(((undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  uVar2 = F_00429760(((undefined4 *)(gen_frame + 0x4))[0],8,0x2c4);
  return (uint)uVar2;
}

/* ref: Client::UI::Shell::RaptureShellModule::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0046adf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(int * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x46adf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a4;)
  uint uVar1;
  undefined * this_00;
  undefined4 uVar2;
  undefined * puVar3;
  
  if ((*(uint *)&REFG(undefined, 0x137260c) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x137260c) = *(uint *)&REFG(undefined, 0x137260c) | 1;
    F_0042b630(&REFG(undefined, 0x13725b8) GEN_EDX_FWD);
    F_00c47de6(((code *)REFP(0x107bc10)));
  }
  if (param_1 == 1) {
    this[0x1cc] = (undefined1)0x1;
    return 1;
  }
  if (this[0x1cd] == (undefined1)0x0) {
    return param_1;
  }
  if (param_1 + 1 < 0xd) {
    uVar1 = (uint)(&REFG(byte, 0x46af79))[(int)(param_1)];
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 0: ;
      goto switchD_0046ae4f_caseD_0;
    default: ;
      goto switchD_0046ae4f_caseD_1;
    case 2: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_4 + 0x18))))(param_4 GEN_EDX_ARG);
      F_00a27140(uVar1 + 0x1b8 GEN_EDX_ARG,param_3,&REFG(undefined, 0x13725b8),1);
      uVar2 = 0x2d9;
      break;
    case 6: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_4 + 0x18))))(param_4 GEN_EDX_ARG);
      F_00a27140(uVar1 + 0x1b8 GEN_EDX_ARG,param_3,&REFG(undefined, 0x13725b8),1);
      uVar2 = 0x2d8;
      break;
    case 0xb: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_4 + 0x18))))(param_4 GEN_EDX_ARG);
      F_00a27140(uVar1 + 0x1b8 GEN_EDX_ARG,param_3,&REFG(undefined, 0x13725b8),1);
      uVar2 = 0x669;
      break;
    case 0xffffffff: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_4 + 0x18))))(param_4 GEN_EDX_ARG);
      F_00a27140(uVar1 + 0x1b8 GEN_EDX_ARG,param_3,&REFG(undefined, 0x13725b8),1);
      uVar2 = 0x2d5;
    }
  }
  else {
switchD_0046ae4f_caseD_1: ;
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_4 + 0x18))))(param_4 GEN_EDX_ARG);
    F_00a27140(uVar1 + 0x1b8 GEN_EDX_ARG,param_3,&REFG(undefined, 0x13725b8),1);
    uVar2 = 0x2d6;
  }
  puVar3 = &REFG(undefined, 0x13725b8);
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_4 + 0x28))))(param_4 GEN_EDX_ARG)));
  uVar1 = F_0046a880(this_00 GEN_EDX_ARG,uVar2,puVar3);
switchD_0046ae4f_caseD_0: ;
  this[0x1cd] = (undefined1)0x0;
  return uVar1;
}

/* ref: Client::UI::UIModule::vf31 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0046af90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x46af90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  undefined * this_00;
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = param_1;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 1: ;
    uVar1 = F_0045b210(this GEN_EDX_FWD,param_3);
    return uVar1;
  case 2: ;
    uVar1 = F_0045d840(this GEN_EDX_ARG,param_2);
    return uVar1;
  case 3: ;
    uVar1 = (uint)*(ushort *)(param_3 + 1);
    uVar2 = *param_3;
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG)));
    uVar1 = F_00763080(this_00 GEN_EDX_ARG,uVar2,uVar1);
    return uVar1;
  case 4: ;
    uVar1 = F_0046a630(this + 0x8f8 GEN_EDX_ARG,param_3[4]);
    return uVar1;
  case 5: ;
    uVar1 = F_0044d640(this GEN_EDX_ARG,param_3);
    return uVar1;
  case 6: ;
    uVar1 = F_0044d580(this GEN_EDX_ARG);
    return uVar1;
  case 7: ;
    uVar1 = F_00433ab0(this);
    return uVar1;
  case 8: ;
    uVar1 = F_00433b00(this);
  }
  return uVar1;
}

/* ref: Client::UI::UIModule::vf70 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0046b050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x46b050u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x280, 0, 4);
  uint uVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  undefined1 * puVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x278)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x27c));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x11c))))(this GEN_EDX_FWD,param_1);
  if ((char)uVar1 == '\0') {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x28))))(this GEN_EDX_ARG);
    uVar2 = F_0045fb20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,0x1c5);
    F_004952c0(((undefined *)GEN_TOP((uVar1 + 0x2790))) GEN_EDX_ARG,uVar2);
    F_0042c880(((undefined1 *)(gen_frame + 0x70)) GEN_EDX_ARG);
    F_0042c880(((undefined1 *)(gen_frame + 0x1c)) GEN_EDX_ARG);
    F_00492c50(((undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    uVar5 = F_00429760(((undefined4 *)(gen_frame + 0x4))[0],8,0x2c4);
    return (uint)uVar5;
  }
  pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG)));
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 1: ;
    pvVar3 = ((undefined *)GEN_TOP(F_00763050(pvVar3 GEN_EDX_ARG,3)));
    if (pvVar3 == ((undefined *)GEN_TOP(0x0))) {
      return 0;
    }
    uVar1 = F_0076ecb0(pvVar3 GEN_EDX_ARG,1);
    if ((char)uVar1 == '\0') {
      return uVar1;
    }
    if (REFG(char, 0x14ab058) == '\0') {
      F_0042cc20(((undefined1 *)(gen_frame + 0x17c)) GEN_EDX_ARG,((char *)REFP(0x108ecb0)),REFG(undefined4, 0x108cc50));
      puVar6 = ((undefined1 *)(gen_frame + 0x17c));
      pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x20))))(this GEN_EDX_ARG)));
      F_00abefa0(pvVar3 GEN_EDX_ARG,puVar6,this);
      uVar5 = F_0042c880(((undefined1 *)(gen_frame + 0x17c)) GEN_EDX_ARG);
      return (uint)uVar5;
    }
    F_0042cc20(((undefined1 *)(gen_frame + 0xd4)) GEN_EDX_ARG,((char *)REFP(0x108eca0)),REFG(undefined4, 0x108cc50));
    puVar6 = ((undefined1 *)(gen_frame + 0xd4));
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x20))))(this GEN_EDX_ARG)));
    F_00abefa0(pvVar3 GEN_EDX_ARG,puVar6,this);
    uVar5 = F_0042c880(((undefined1 *)(gen_frame + 0xd4)) GEN_EDX_ARG);
    return (uint)uVar5;
  case 2: ;
    uVar4 = 0x1e;
    break;
  case 3: ;
    uVar4 = 0x19;
    break;
  case 4: ;
    uVar4 = 0x18;
    break;
  case 5: ;
    uVar4 = 0x58;
    break;
  case 6: ;
    uVar4 = 0x55;
    break;
  case 7: ;
    uVar4 = 0x13;
    break;
  case 8: ;
    uVar4 = 0x3b;
    break;
  case 9: ;
    uVar4 = 0x14;
    break;
  case 10: ;
    pvVar3 = ((undefined *)GEN_TOP(F_00763050(pvVar3 GEN_EDX_ARG,5)));
    if (pvVar3 == ((undefined *)GEN_TOP(0x0))) {
      return 0;
    }
    uVar1 = F_0086e930(pvVar3 GEN_EDX_ARG,0);
    return uVar1;
  case 0xb: ;
    pvVar3 = ((undefined *)GEN_TOP(F_00763050(pvVar3 GEN_EDX_ARG,5)));
    if (pvVar3 == ((undefined *)GEN_TOP(0x0))) {
      return 0;
    }
    uVar1 = F_0089afa0(pvVar3 GEN_EDX_ARG,0);
    return uVar1;
  case 0xc: ;
    pvVar3 = ((undefined *)GEN_TOP(F_00763050(pvVar3 GEN_EDX_ARG,0x2a)));
    if (pvVar3 == ((undefined *)GEN_TOP(0x0))) {
      return 0;
    }
    uVar1 = F_00878990(pvVar3 GEN_EDX_ARG,0);
    return uVar1;
  case 0xd: ;
    pvVar3 = ((undefined *)GEN_TOP(F_00763050(pvVar3 GEN_EDX_ARG,0x2a)));
    if (pvVar3 == ((undefined *)GEN_TOP(0x0))) {
      return 0;
    }
    uVar1 = F_00878990(pvVar3 GEN_EDX_ARG,1);
    return uVar1;
  case 0xe: ;
    pvVar3 = ((undefined *)GEN_TOP(F_00763050(pvVar3 GEN_EDX_ARG,0x2a)));
    if (pvVar3 == ((undefined *)GEN_TOP(0x0))) {
      return 0;
    }
    uVar1 = F_00878990(pvVar3 GEN_EDX_ARG,2);
    return uVar1;
  case 0xf: ;
    pvVar3 = ((undefined *)GEN_TOP(F_00763050(pvVar3 GEN_EDX_ARG,0x2a)));
    if (pvVar3 == ((undefined *)GEN_TOP(0x0))) {
      return 0;
    }
    uVar1 = F_00878990(pvVar3 GEN_EDX_ARG,3);
    return uVar1;
  case 0x10: ;
    uVar4 = 0x1f;
    break;
  case 0x11: ;
    uVar4 = 0xf;
    break;
  case 0x12: ;
    uVar4 = 0x1a;
    break;
  case 0x13: ;
    uVar4 = 8;
    break;
  case 0x14: ;
    uVar4 = 0xb;
    break;
  case 0x15: ;
    uVar4 = 0x10;
    break;
  case 0x16: ;
    uVar4 = 0xe;
    break;
  case 0x17: ;
    F_0042cc20(((undefined1 *)(gen_frame + 0x224)) GEN_EDX_ARG,((char *)REFP(0x108ecc0)),REFG(undefined4, 0x108cc50));
    puVar6 = ((undefined1 *)(gen_frame + 0x224));
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x20))))(this GEN_EDX_ARG)));
    F_00abefa0(pvVar3 GEN_EDX_ARG,puVar6,this);
    uVar5 = F_0042c880(((undefined1 *)(gen_frame + 0x224)) GEN_EDX_ARG);
    return (uint)uVar5;
  case 0x18: ;
    F_0042cc20(((undefined1 *)(gen_frame + 0x1d0)) GEN_EDX_ARG,((char *)REFP(0x108ecc8)),REFG(undefined4, 0x108cc50));
    puVar6 = ((undefined1 *)(gen_frame + 0x1d0));
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x20))))(this GEN_EDX_ARG)));
    F_00abefa0(pvVar3 GEN_EDX_ARG,puVar6,this);
    uVar5 = F_0042c880(((undefined1 *)(gen_frame + 0x1d0)) GEN_EDX_ARG);
    return (uint)uVar5;
  case 0x19: ;
    uVar4 = 0x49;
    break;
  default: ;
    goto switchD_0046b0fe_caseD_1a;
  case 0x1b: ;
    uVar4 = 0x3f;
    break;
  case 0x1c: ;
    uVar4 = 0x2d;
    break;
  case 0x1d: ;
    uVar4 = 0x15;
    break;
  case 0x1e: ;
    uVar4 = 0x4a;
    break;
  case 0x1f: ;
    uVar4 = 0x5b;
    break;
  case 0x20: ;
    uVar4 = 0x51;
    break;
  case 0x21: ;
    uVar4 = 0x29;
    break;
  case 0x22: ;
    uVar4 = 0xc;
    break;
  case 0x23: ;
    uVar4 = 0x28;
    break;
  case 0x24: ;
    F_0042cc20(((undefined1 *)(gen_frame + 0x128)) GEN_EDX_ARG,((char *)REFP(0x108ecd4)),REFG(undefined4, 0x108cc50));
    puVar6 = ((undefined1 *)(gen_frame + 0x128));
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x20))))(this GEN_EDX_ARG)));
    F_00abefa0(pvVar3 GEN_EDX_ARG,puVar6,this);
    uVar5 = F_0042c880(((undefined1 *)(gen_frame + 0x128)) GEN_EDX_ARG);
    return (uint)uVar5;
  case 0x25: ;
    uVar4 = 0x57;
    break;
  case 0x27: ;
    uVar4 = 0x2a;
    break;
  case 0x29: ;
    uVar4 = 0x16;
    break;
  case 0x2a: ;
    uVar4 = 0x5c;
  }
  pvVar3 = ((undefined *)GEN_TOP(F_007cc180(pvVar3 GEN_EDX_ARG,uVar4)));
switchD_0046b0fe_caseD_1a: ;
  return (uint)pvVar3;
}

/* ref: FUN_0046b570 */
GEN_OWN GEN_FRAME uint F_0046b570(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x46b570u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int * piVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar4 = 0x78b;
  if (param_2 == 1) {
    uVar4 = 0x78d;
  }
  else if (param_2 != 0) {
    uVar4 = 0x78c;
  }
  piVar1 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  uVar3 = 0;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x28))))(piVar1 GEN_EDX_ARG)));
    F_0046a630(pvVar2 GEN_EDX_ARG,uVar4);
    uVar4 = 4;
    pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x1c))))(piVar1 GEN_EDX_ARG)));
    uVar3 = F_00760260(pvVar2 GEN_EDX_ARG,uVar4);
  }
  REFG(undefined1, 0x1372339) = 0x3c;
  REFG(undefined1, 0x12fdbd7) = 1;
  return uVar3;
}

/* ref: FUN_0046b5e0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0046b5e0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x46b5e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  int * piVar1;
  int * piVar2;
  undefined * this;
  int iVar3;
  
  piVar1 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  piVar2 = ((int *)GEN_TOP(F_00ab3930(param_1)));
  if (((piVar1 != ((int *)GEN_TOP(0x0))) && (piVar2 != ((int *)GEN_TOP(0x0)))) &&
     (iVar3 = *piVar2, piVar2 = ((int *)GEN_TOP(0x0)), iVar3 != 0)) {
    this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x28))))(piVar1 GEN_EDX_ARG)));
    piVar2 = ((int *)GEN_TOP(F_0046a630(this GEN_EDX_ARG,iVar3)));
  }
  return (uint)piVar2;
}

/* ref: FUN_0046b630 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0046b630(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x46b630u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  int * piVar1;
  int * piVar2;
  undefined * this;
  int iVar3;
  
  piVar1 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  piVar2 = ((int *)GEN_TOP(F_00ab3930(param_1)));
  if (((piVar1 != ((int *)GEN_TOP(0x0))) && (piVar2 != ((int *)GEN_TOP(0x0)))) &&
     (iVar3 = *piVar2, piVar2 = ((int *)GEN_TOP(0x0)), iVar3 != 0)) {
    this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x28))))(piVar1 GEN_EDX_ARG)));
    piVar2 = ((int *)GEN_TOP(F_0046a6b0(this GEN_EDX_ARG,iVar3,param_2)));
  }
  return (uint)piVar2;
}

/* ref: FUN_0046b680 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0046b680(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x46b680u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_FRAME_DECL(0xc38, 8);
  undefined3 uVar1;
  byte bVar2;
  undefined * pvVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  undefined1 uVar10;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  if ((param_2 == '\x03') &&
     ((*((char *)GEN_TOP((param_1 + 0x30))) == '\x01' || (*((char *)GEN_TOP((param_1 + 0x30))) == '\x02')))) {
    uVar10 = 0;
    iVar9 = param_1 + 0x44;
    uVar7 = 0;
    iVar6 = param_1 + 0x5a;
    uVar5 = 0xbf5;
    iVar8 = iVar9;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 0x28))))(*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_FWD);
    F_0046acc0(uVar4 GEN_EDX_ARG,uVar5,iVar6,uVar7,iVar8,uVar10);
    uVar10 = 0;
    uVar7 = 0;
    iVar6 = param_1 + 0x5a;
    uVar5 = 0xbf4;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 0x28))))(*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_ARG);
    F_0046acc0(uVar4 GEN_EDX_ARG,uVar5,iVar6,uVar7,iVar9,uVar10);
    *((undefined1 *)GEN_TOP((param_1 + 0x30))) = 3;
    pvVar3 = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    if (pvVar3 != ((undefined *)GEN_TOP(0x0))) {
      (*(undefined2 *)(gen_frame + 0x18)) = 3;
      (*(undefined4 *)(gen_frame + 0x0)) = 0x117;
      (*(undefined4 *)(gen_frame + 0x4)) = 0x18;
      bVar2 = F_00974da0(pvVar3 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),0,0);
      if (bVar2 != 0) {
        *((undefined1 *)GEN_TOP((param_1 + 0x48e))) = 1;
      }
    }
    if (*((int *)GEN_TOP((param_1 + 0x14))) == 0) {
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 0x44))))(*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_ARG);
      *((undefined4 *)GEN_TOP((param_1 + 0x14))) = *((undefined4 *)GEN_TOP((uVar4 + 0x40)));
    }
    uVar4 = F_00442980(*((undefined * PTR32 *)GEN_TOP((param_1 + 0x14))) GEN_EDX_ARG);
  }
  else {
    pvVar3 = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    uVar1 = 0;
    if (pvVar3 != ((undefined *)GEN_TOP(0x0))) {
      (*(undefined2 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x0)) = 0x117;
      (*(undefined4 *)(gen_frame + 0x4)) = 0x18;
      bVar2 = F_00974da0(pvVar3 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),0,0);
      uVar1 = extraout_var;
      if (bVar2 != 0) {
        *((undefined1 *)GEN_TOP((param_1 + 0x48e))) = 1;
      }
    }
    uVar4 = CONCAT31(uVar1,param_2);
    *((char *)GEN_TOP((param_1 + 0x30))) = param_2;
  }
  return uVar4;
}

/* ref: FUN_0046b7e0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_0046b7e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x46b7e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0xc90, 0);
  byte bVar1;
  undefined * pvVar2;
  int * piVar3;
  int iVar4;
  char * pcVar5;
  undefined4 * puVar6;
  undefined1 * puVar7;
  undefined4 uVar8;
  
  (*(uint *)(gen_frame + 0xc7c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc80);
  if (((param_1 != ((char *)GEN_TOP(0x0))) && (*param_1 != '\0')) &&
     (*((int *)GEN_TOP(((int)this + 0x18))) != 0 || *((int *)GEN_TOP(((int)this + 0x1c))) != 0)) {
    F_0042cc20(((undefined1 *)(gen_frame + 0xc20)) GEN_EDX_FWD,param_1,REFG(undefined4, 0x108cc50));
    puVar7 = ((undefined1 *)(gen_frame + 0xc20));
    pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x44))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    bVar1 = F_00453480(pvVar2 GEN_EDX_ARG,puVar7);
    F_0042c880(((undefined1 *)(gen_frame + 0xc20)) GEN_EDX_ARG);
    if (bVar1 == 0) {
      bVar1 = F_0043f660(param_1);
      if (bVar1 != 0) {
        pvVar2 = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
        if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
          return 0;
        }
        (*(undefined4 *)(gen_frame + 0x0)) = 0xc9;
        (*(undefined4 *)(gen_frame + 0x4)) = 0x38;
        (*(undefined1 *)(gen_frame + 0x18)) = 5;
        pcVar5 = param_1;
        puVar6 = ((undefined4 *)(gen_frame + 0x19));
        for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 - 1) {
          *puVar6 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          puVar6 = puVar6 + 1;
        }
        bVar1 = F_00974da0(pvVar2 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),0,0);
        if (bVar1 == 0) {
          return 0;
        }
        return 1;
      }
      piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
      uVar8 = 0xbd2;
    }
    else {
      piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
      uVar8 = 0xbdf;
    }
    pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x28))))(piVar3 GEN_EDX_ARG)));
    F_0046a630(pvVar2 GEN_EDX_ARG,uVar8);
  }
  return 0;
}

/* ref: FUN_0046b8f0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_0046b8f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x46b8f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0xc90, 0);
  byte bVar1;
  uint uVar2;
  undefined * pvVar3;
  int iVar4;
  char * pcVar5;
  undefined4 * puVar6;
  undefined1 * puVar7;
  undefined4 uVar8;
  
  (*(uint *)(gen_frame + 0xc7c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc80);
  if ((param_1 != ((char *)GEN_TOP(0x0))) && (*param_1 != '\0')) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x44))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
    iVar4 = *((int *)GEN_TOP((uVar2 + 0x34)));
    if ((iVar4 != 0) && (*((int *)GEN_TOP((iVar4 + 0x18))) != 0 || *((int *)GEN_TOP((iVar4 + 0x1c))) != 0)) {
      F_0042cc20(((undefined1 *)(gen_frame + 0xc20)) GEN_EDX_ARG,param_1,REFG(undefined4, 0x108cc50));
      puVar7 = ((undefined1 *)(gen_frame + 0xc20));
      pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x44))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
      bVar1 = F_00453480(pvVar3 GEN_EDX_ARG,puVar7);
      F_0042c880(((undefined1 *)(gen_frame + 0xc20)) GEN_EDX_ARG);
      if (bVar1 == 0) {
        pvVar3 = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
        if (pvVar3 != ((undefined *)GEN_TOP(0x0))) {
          (*(undefined4 *)(gen_frame + 0x0)) = 0xc9;
          (*(undefined4 *)(gen_frame + 0x4)) = 0x38;
          (*(undefined1 *)(gen_frame + 0x18)) = 4;
          pcVar5 = param_1;
          puVar6 = ((undefined4 *)(gen_frame + 0x19));
          for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 - 1) {
            *puVar6 = *(undefined4 *)pcVar5;
            pcVar5 = pcVar5 + 4;
            puVar6 = puVar6 + 1;
          }
          bVar1 = F_00974da0(pvVar3 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),0,0);
          if (bVar1 != 0) {
            return 1;
          }
        }
      }
      else {
        uVar8 = 0xbdf;
        pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x28))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
        F_0046a630(pvVar3 GEN_EDX_ARG,uVar8);
      }
    }
  }
  return 0;
}

/* ref: FUN_0046ba00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0046ba00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x46ba00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x3c, 4, 4);
  uint * puVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  
  (*(int *)(gen_frame + 0x30)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x34)) = this;
  uVar3 = F_00414500(*((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x10))) GEN_EDX_FWD,0x196);
  if (*((int *)GEN_TOP((uVar3 + 0x14))) != 0) {
    (*(undefined4 *)(gen_frame + 0x0)) = param_1;
    F_004949f0(((undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG,param_2);
    (*(ulonglong *)(gen_frame + 0x20)) = F_00427d90();
    F_00495240(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
    F_00492c50(((undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    F_00429760(((undefined4 *)(gen_frame + 0x4))[0],8,0x2c4);
  }
  uVar3 = *((uint *)GEN_TOP(((int)this + 0xc)));
  piVar2 = *(int * PTR32 *)this;
  uVar4 = *((int *)GEN_TOP(((int)this + 0x10))) + uVar3;
  if (uVar3 != uVar4) {
    if (piVar2 == ((int *)GEN_TOP(0x0))) {
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar2;
    }
    uVar4 = uVar3;
    if (*((uint *)GEN_TOP((iVar5 + 8))) <= uVar3) {
      uVar4 = uVar3 - *((uint *)GEN_TOP((iVar5 + 8)));
    }
    iVar5 = *((int *)GEN_TOP((*((int *)GEN_TOP((iVar5 + 4))) + uVar4 * 4)));
    uVar6 = F_00427d90();
    puVar1 = ((uint *)GEN_TOP((iVar5 + 0x20)));
    uVar4 = (uint)uVar6 - *puVar1;
    iVar5 = ((int)(uVar6 >> 0x20) - *((int *)GEN_TOP((iVar5 + 0x24)))) - (uint)((uint)uVar6 < *puVar1);
    (*(int *)(gen_frame + 0x30)) = iVar5;
    if ((iVar5 != 0) || (5000 < uVar4)) {
      uVar7 = 0;
      if ((piVar2 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*piVar2)) != ((undefined4 *)GEN_TOP(0x0)))) {
        uVar7 = *((undefined4 *)GEN_TOP(*piVar2));
      }
      uVar4 = F_00496950((*(undefined * PTR32 *)(gen_frame + 0x34)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x28)),uVar7,0,uVar3);
    }
  }
  return uVar4;
}

/* ref: FUN_0046baf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0046baf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x46baf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  uint * puVar1;
  undefined4 * puVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  int * piVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  uVar7 = *((uint *)GEN_TOP(((int)this + 0xc)));
  (*(int * PTR32 *)(gen_frame + 0xc)) = *(int * PTR32 *)this;
  while (uVar7 != *((int *)GEN_TOP(((int)this + 0x10))) + *((int *)GEN_TOP(((int)this + 0xc)))) {
    iVar5 = 0;
    if ((*(int * PTR32 *)(gen_frame + 0xc)) != ((int *)GEN_TOP(0x0))) {
      iVar5 = *(*(int * PTR32 *)(gen_frame + 0xc));
    }
    uVar3 = uVar7;
    if (*((uint *)GEN_TOP((iVar5 + 8))) <= uVar7) {
      uVar3 = uVar7 - *((uint *)GEN_TOP((iVar5 + 8)));
    }
    iVar5 = *((int *)GEN_TOP((*((int *)GEN_TOP((iVar5 + 4))) + uVar3 * 4)));
    uVar9 = F_00427d90();
    puVar1 = ((uint *)GEN_TOP((iVar5 + 0x20)));
    iVar5 = ((int)(uVar9 >> 0x20) - *((int *)GEN_TOP((iVar5 + 0x24)))) - (uint)((uint)uVar9 < *puVar1);
    (*(int *)(gen_frame + 0x1c)) = iVar5;
    if ((iVar5 == 0) && ((uint)uVar9 - *puVar1 < 0x1389)) {
      uVar7 = uVar7 + 1;
    }
    else {
      piVar6 = ((int *)GEN_TOP(0x0));
      if (((*(int * PTR32 *)(gen_frame + 0xc)) != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0xc)))) != ((undefined4 *)GEN_TOP(0x0)))) {
        piVar6 = *((int * PTR32 *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0xc))));
      }
      piVar4 = ((int *)GEN_TOP(0x0));
      if ((piVar6 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*piVar6)) != ((undefined4 *)GEN_TOP(0x0)))) {
        piVar4 = *((int * PTR32 *)GEN_TOP(*piVar6));
      }
      uVar11 = 0;
      if ((piVar4 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*piVar4)) != ((undefined4 *)GEN_TOP(0x0)))) {
        uVar11 = *((undefined4 *)GEN_TOP(*piVar4));
      }
      uVar10 = 0;
      if ((piVar6 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*piVar6)) != ((undefined4 *)GEN_TOP(0x0)))) {
        uVar10 = *((undefined4 *)GEN_TOP(*piVar6));
      }
      F_00495330(this GEN_EDX_ARG,((int * PTR32 *)(gen_frame + 0x0)),uVar10,0,uVar7,uVar11,0,uVar7 + 1);
      uVar7 = (*(uint *)(gen_frame + 0x8));
      if (((*(int * PTR32 *)(gen_frame + 0xc)) != ((int * PTR32 *)(gen_frame + 0x0))[0]) && (((undefined4 *)GEN_TOP(*((int * PTR32 *)(gen_frame + 0x0))[0])) != ((undefined4 *)GEN_TOP(0x0)))) {
        (*(int * PTR32 *)(gen_frame + 0xc)) = *((int * PTR32 *)GEN_TOP(*((int * PTR32 *)(gen_frame + 0x0))[0]));
      }
    }
  }
  if ((param_3 != 0) && (uVar7 = *((uint *)GEN_TOP(((int)this + 0x10))), param_3 < uVar7)) {
    uVar3 = *((uint *)GEN_TOP(((int)this + 0xc)));
    if (((*(int * PTR32 *)(gen_frame + 0xc)) != *(int * PTR32 *)this) &&
       (puVar2 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar2 != ((undefined4 *)GEN_TOP(0x0)))) {
      (*(int * PTR32 *)(gen_frame + 0xc)) = ((int *)GEN_TOP(*puVar2));
    }
    do {
      if (uVar3 == *((int *)GEN_TOP(((int)this + 0xc))) + uVar7) break;
      piVar6 = ((int *)GEN_TOP(0x0));
      if (((*(int * PTR32 *)(gen_frame + 0xc)) != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0xc)))) != ((undefined4 *)GEN_TOP(0x0)))) {
        piVar6 = *((int * PTR32 *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0xc))));
      }
      piVar4 = ((int *)GEN_TOP(0x0));
      if ((piVar6 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*piVar6)) != ((undefined4 *)GEN_TOP(0x0)))) {
        piVar4 = *((int * PTR32 *)GEN_TOP(*piVar6));
      }
      uVar11 = 0;
      if ((piVar4 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*piVar4)) != ((undefined4 *)GEN_TOP(0x0)))) {
        uVar11 = *((undefined4 *)GEN_TOP(*piVar4));
      }
      uVar10 = 0;
      if ((piVar6 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*piVar6)) != ((undefined4 *)GEN_TOP(0x0)))) {
        uVar10 = *((undefined4 *)GEN_TOP(*piVar6));
      }
      F_00495330(this GEN_EDX_ARG,((int * PTR32 *)(gen_frame + 0x0)),uVar10,0,uVar3,uVar11,0,uVar3 + 1);
      if (((*(int * PTR32 *)(gen_frame + 0xc)) != ((int * PTR32 *)(gen_frame + 0x0))[0]) && (((undefined4 *)GEN_TOP(*((int * PTR32 *)(gen_frame + 0x0))[0])) != ((undefined4 *)GEN_TOP(0x0)))) {
        (*(int * PTR32 *)(gen_frame + 0xc)) = *((int * PTR32 *)GEN_TOP(*((int * PTR32 *)(gen_frame + 0x0))[0]));
      }
      uVar7 = *((uint *)GEN_TOP(((int)this + 0x10)));
      uVar3 = (*(uint *)(gen_frame + 0x8));
    } while (param_3 < uVar7);
  }
  iVar5 = *((int *)GEN_TOP(((int)this + 0xc)));
  iVar8 = *((int *)GEN_TOP(((int)this + 0x10))) + iVar5;
  if ((*((int * PTR32 *)GEN_TOP(((int)this + 0x18))) != *(int * PTR32 *)this) &&
     (puVar2 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar2 != ((undefined4 *)GEN_TOP(0x0)))) {
    *((undefined4 *)GEN_TOP(((int)this + 0x18))) = *puVar2;
  }
  *((int *)GEN_TOP(((int)this + 0x20))) = iVar5;
  while( true ) {
    if (iVar5 == iVar8) {
      return 0;
    }
    if (*((int * PTR32 *)GEN_TOP(((int)this + 0x18))) == ((int *)GEN_TOP(0x0))) {
      iVar5 = 0;
    }
    else {
      iVar5 = **((int * PTR32 *)GEN_TOP(((int)this + 0x18)));
    }
    uVar7 = *((uint *)GEN_TOP(((int)this + 0x20)));
    if (*((uint *)GEN_TOP((iVar5 + 8))) <= uVar7) {
      uVar7 = uVar7 - *((uint *)GEN_TOP((iVar5 + 8)));
    }
    iVar5 = *((int *)GEN_TOP((*((int *)GEN_TOP((iVar5 + 4))) + uVar7 * 4)));
    uVar7 = *((uint *)GEN_TOP((iVar5 + 0x24)));
    if ((param_2 < uVar7) || ((param_2 <= uVar7 && (param_1 < *((uint *)GEN_TOP((iVar5 + 0x20))))))) break;
    *((int *)GEN_TOP(((int)this + 0x20))) = *((int *)GEN_TOP(((int)this + 0x20))) + 1;
    iVar5 = *((int *)GEN_TOP(((int)this + 0x20)));
  }
  if (*((int * PTR32 *)GEN_TOP(((int)this + 0x18))) == ((int *)GEN_TOP(0x0))) {
    iVar5 = 0;
  }
  else {
    iVar5 = **((int * PTR32 *)GEN_TOP(((int)this + 0x18)));
  }
  uVar7 = *((uint *)GEN_TOP(((int)this + 0x20)));
  if (*((uint *)GEN_TOP((iVar5 + 8))) <= uVar7) {
    uVar7 = uVar7 - *((uint *)GEN_TOP((iVar5 + 8)));
  }
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((iVar5 + 4))) + uVar7 * 4)));
}

/* ref: FUN_0046bd40 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0046bd40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x46bd40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_GS(0xdc, 4, 4);
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xd4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xd8));
  bVar1 = F_00a37c00(&REFG(undefined, 0x14a4230) GEN_EDX_FWD);
  if ((-1 < param_1) && (param_1 < (int)(uint)bVar1)) {
    iVar2 = param_1;
    if (100 < param_1) {
      iVar2 = 0;
    }
    if ((*((byte *)GEN_TOP((iVar2 * 0x120 + 0x6d + (int)this))) & 1) != 0) {
      uVar3 = F_0044bfc0(this GEN_EDX_ARG,param_1);
      return uVar3;
    }
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x30))) + 0x28))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x30))) GEN_EDX_ARG);
  uVar4 = F_0045fb20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,0x2fd);
  F_004952c0(((undefined *)GEN_TOP((uVar3 + 0x2790))) GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x70)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x1c)) GEN_EDX_ARG);
  F_00492c50(((undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00429760(((undefined4 *)(gen_frame + 0x4))[0],8,0x2c4);
  return 0xffffffff;
}

/* ref: FUN_0046be10 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0046be10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x46be10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_FRAME_DECL_GS(0x80, 0, 4);
  int * piVar1;
  undefined * pvVar2;
  ulonglong uVar3;
  int * PTR32 * ppiVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c));
  (*(int * PTR32 *)(gen_frame + 0x0)) = ((int *)GEN_TOP(0x0));
  piVar1 = ((int *)GEN_TOP(F_004296a0(8,0,0x2c4)));
  (*(int * PTR32 *)(gen_frame + 0x0)) = piVar1;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    *piVar1 = 0;
    piVar1[1] = 0;
  }
  *piVar1 = (int)&(*(int * PTR32 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  if (param_3 != 0) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG,param_3,REFG(undefined4, 0x108cc50));
    (*(int *)(gen_frame + 0x6c)) = 0;
    (*(int * PTR32 *)(gen_frame + 0x70)) = ((int *)GEN_TOP(0x0));
    (*(char *)(gen_frame + 0x74)) = -1;
    F_00490f90(&(*(int *)(gen_frame + 0x6c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x18)));
    F_00493bc0(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x6c)));
    if ((((*(int * PTR32 *)(gen_frame + 0x70)) != ((int *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x74)) != '\0')) && ((*(char *)(gen_frame + 0x74)) == '\x01')) {
      pvVar2 = ((undefined *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0x70))));
      *((int *)GEN_TOP(((int)pvVar2 + 0x54))) = *((int *)GEN_TOP(((int)pvVar2 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)pvVar2 + 0x54))) < 1) {
        F_0042c880(pvVar2 GEN_EDX_ARG);
        F_00406ad0(pvVar2);
      }
    }
    F_0042c880(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG);
  }
  if (param_2 != -1) {
    (*(int *)(gen_frame + 0x6c)) = 0;
    (*(int *)(gen_frame + 0x6c)) = param_2 + 1;
    (*(int * PTR32 *)(gen_frame + 0x70)) = &(*(int *)(gen_frame + 0x6c));
    (*(char *)(gen_frame + 0x74)) = '\0';
    F_00493b50(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x6c)));
    if ((((*(int * PTR32 *)(gen_frame + 0x70)) != ((int *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x74)) != '\0')) && ((*(char *)(gen_frame + 0x74)) == '\x01')) {
      pvVar2 = ((undefined *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0x70))));
      *((int *)GEN_TOP(((int)pvVar2 + 0x54))) = *((int *)GEN_TOP(((int)pvVar2 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)pvVar2 + 0x54))) < 1) {
        F_0042c880(pvVar2 GEN_EDX_ARG);
        F_00406ad0(pvVar2);
      }
    }
  }
  ppiVar4 = &(*(int * PTR32 *)(gen_frame + 0x0));
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x30))) + 0x28))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x30))) GEN_EDX_ARG)));
  F_0046aa70(pvVar2 GEN_EDX_ARG,param_1,ppiVar4);
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar3 = F_00429760((*(int * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
  return (uint)uVar3;
}

/* ref: FUN_0046bf70 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0046bf70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x46bf70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  uint in_ecx;
  undefined * pvVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (REFG(char, 0x12fdbd7) != '\x01') {
    return;
  }
  if ('\0' < REFG(char, 0x1372339)) {
    REFG(char, 0x1372339) = REFG(char, 0x1372339) - 1;
    return;
  }
  in_ecx = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  bVar1 = F_0075eb40(in_ecx GEN_EDX_ARG);
  if (bVar1 == 0) {
    return;
  }
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x50))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
  iVar3 = 0;
  bVar1 = F_00a34970(pvVar2 GEN_EDX_ARG,0x171);
  if (bVar1 == 0) {
    bVar1 = F_00a34b70(pvVar2 GEN_EDX_ARG,0x23);
    if ((bVar1 != 0) && (bVar1 = F_00a34c40(pvVar2 GEN_EDX_ARG,0x172), bVar1 != 0)) {
      bVar1 = *((byte *)GEN_TOP(((int)this + 0xc)));
      goto LAB_0046bff9;
    }
  }
  else {
    bVar1 = *((byte *)GEN_TOP(((int)this + 0xc)));
LAB_0046bff9: ;
    if ((bVar1 & 0xa4) == 0xa4) {
      REFG(char, 0x12fdbd7) = '\x02';
      goto LAB_0046c012;
    }
    iVar3 = 0x78f;
  }
  if (REFG(char, 0x12fdbd7) != '\x02') {
    if (iVar3 != 0) {
      pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x28))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
      F_0046a630(pvVar2 GEN_EDX_ARG,iVar3);
    }
    return;
  }
LAB_0046c012: ;
  bVar1 = F_00a00fa0(REFG(void * PTR32, 0x14a2444) GEN_EDX_ARG,((code *)REFP(0x46b570)),0);
  if (bVar1 == 0) {
    REFG(char, 0x12fdbd7) = 1;
    REFG(char, 0x1372339) = 0x3c;
    return;
  }
  uVar4 = 4;
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
  F_007601d0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0043f8b0(0x21);
  return;
}

/* ref: FUN_0046c080 */
GEN_OWN_GS GEN_FRAME uint F_0046c080(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x46c080u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x2c, 4, 4);
  undefined4 * puVar1;
  uint uVar2;
  undefined * pvVar3;
  ulonglong uVar4;
  undefined4 * PTR32 * ppuVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28));
  uVar2 = 0;
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(0x0));
    puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(8,0,0x2c4)));
    (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = puVar1;
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = 0;
      puVar1[1] = 0;
    }
    *puVar1 = &(*(undefined4 * PTR32 *)(gen_frame + 0x0));
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = &(*(undefined4 *)(gen_frame + 0x18));
    (*(char *)(gen_frame + 0x20)) = '\0';
    F_00493b50(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x18)));
    if ((((*(undefined4 * PTR32 *)(gen_frame + 0x1c)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x20)) != '\0')) && ((*(char *)(gen_frame + 0x20)) == '\x01')) {
      pvVar3 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x1c))));
      *((int *)GEN_TOP(((int)pvVar3 + 0x54))) = *((int *)GEN_TOP(((int)pvVar3 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)pvVar3 + 0x54))) < 1) {
        F_0042c880(pvVar3 GEN_EDX_ARG);
        F_00406ad0(pvVar3);
      }
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = &(*(undefined4 *)(gen_frame + 0x18));
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(char *)(gen_frame + 0x20)) = '\0';
    F_00493b50(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x18)));
    if ((((*(undefined4 * PTR32 *)(gen_frame + 0x1c)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x20)) != '\0')) && ((*(char *)(gen_frame + 0x20)) == '\x01')) {
      pvVar3 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x1c))));
      *((int *)GEN_TOP(((int)pvVar3 + 0x54))) = *((int *)GEN_TOP(((int)pvVar3 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)pvVar3 + 0x54))) < 1) {
        F_0042c880(pvVar3 GEN_EDX_ARG);
        F_00406ad0(pvVar3);
      }
    }
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = &(*(undefined4 *)(gen_frame + 0x18));
    (*(char *)(gen_frame + 0x20)) = '\0';
    F_00493b50(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x18)));
    if ((((*(undefined4 * PTR32 *)(gen_frame + 0x1c)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x20)) != '\0')) && ((*(char *)(gen_frame + 0x20)) == '\x01')) {
      pvVar3 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x1c))));
      *((int *)GEN_TOP(((int)pvVar3 + 0x54))) = *((int *)GEN_TOP(((int)pvVar3 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)pvVar3 + 0x54))) < 1) {
        F_0042c880(pvVar3 GEN_EDX_ARG);
        F_00406ad0(pvVar3);
      }
    }
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = &(*(undefined4 *)(gen_frame + 0x18));
    (*(char *)(gen_frame + 0x20)) = '\0';
    F_00493b50(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x18)));
    if ((((*(undefined4 * PTR32 *)(gen_frame + 0x1c)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x20)) != '\0')) && ((*(char *)(gen_frame + 0x20)) == '\x01')) {
      pvVar3 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x1c))));
      *((int *)GEN_TOP(((int)pvVar3 + 0x54))) = *((int *)GEN_TOP(((int)pvVar3 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)pvVar3 + 0x54))) < 1) {
        F_0042c880(pvVar3 GEN_EDX_ARG);
        F_00406ad0(pvVar3);
      }
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = &(*(undefined4 *)(gen_frame + 0x18));
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(char *)(gen_frame + 0x20)) = '\0';
    F_00493b50(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x18)));
    if ((((*(undefined4 * PTR32 *)(gen_frame + 0x1c)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x20)) != '\0')) && ((*(char *)(gen_frame + 0x20)) == '\x01')) {
      pvVar3 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x1c))));
      *((int *)GEN_TOP(((int)pvVar3 + 0x54))) = *((int *)GEN_TOP(((int)pvVar3 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)pvVar3 + 0x54))) < 1) {
        F_0042c880(pvVar3 GEN_EDX_ARG);
        F_00406ad0(pvVar3);
      }
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = &(*(undefined4 *)(gen_frame + 0x18));
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = param_3;
    (*(char *)(gen_frame + 0x20)) = '\0';
    F_00493bc0(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x18)));
    if ((((*(undefined4 * PTR32 *)(gen_frame + 0x1c)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x20)) != '\0')) && ((*(char *)(gen_frame + 0x20)) == '\x01')) {
      pvVar3 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x1c))));
      *((int *)GEN_TOP(((int)pvVar3 + 0x54))) = *((int *)GEN_TOP(((int)pvVar3 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)pvVar3 + 0x54))) < 1) {
        F_0042c880(pvVar3 GEN_EDX_ARG);
        F_00406ad0(pvVar3);
      }
    }
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = &(*(undefined4 *)(gen_frame + 0x18));
    (*(char *)(gen_frame + 0x20)) = '\0';
    F_00493b50(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x18)));
    if ((((*(undefined4 * PTR32 *)(gen_frame + 0x1c)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x20)) != '\0')) && ((*(char *)(gen_frame + 0x20)) == '\x01')) {
      pvVar3 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x1c))));
      *((int *)GEN_TOP(((int)pvVar3 + 0x54))) = *((int *)GEN_TOP(((int)pvVar3 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)pvVar3 + 0x54))) < 1) {
        F_0042c880(pvVar3 GEN_EDX_ARG);
        F_00406ad0(pvVar3);
      }
    }
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = &(*(undefined4 *)(gen_frame + 0x18));
    (*(char *)(gen_frame + 0x20)) = '\0';
    F_00493b50(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x18)));
    if ((((*(undefined4 * PTR32 *)(gen_frame + 0x1c)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x20)) != '\0')) && ((*(char *)(gen_frame + 0x20)) == '\x01')) {
      pvVar3 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x1c))));
      *((int *)GEN_TOP(((int)pvVar3 + 0x54))) = *((int *)GEN_TOP(((int)pvVar3 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)pvVar3 + 0x54))) < 1) {
        F_0042c880(pvVar3 GEN_EDX_ARG);
        F_00406ad0(pvVar3);
      }
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = &(*(undefined4 *)(gen_frame + 0x18));
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(char *)(gen_frame + 0x20)) = '\0';
    F_00493b50(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x18)));
    if ((((*(undefined4 * PTR32 *)(gen_frame + 0x1c)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x20)) != '\0')) && ((*(char *)(gen_frame + 0x20)) == '\x01')) {
      pvVar3 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x1c))));
      *((int *)GEN_TOP(((int)pvVar3 + 0x54))) = *((int *)GEN_TOP(((int)pvVar3 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)pvVar3 + 0x54))) < 1) {
        F_0042c880(pvVar3 GEN_EDX_ARG);
        F_00406ad0(pvVar3);
      }
    }
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xe0))))(param_1 GEN_EDX_ARG);
    if (uVar2 != 0) {
      ppuVar5 = &(*(undefined4 * PTR32 *)(gen_frame + 0x0));
      pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xe0))))(param_1 GEN_EDX_ARG)));
      F_0046ba00(pvVar3 GEN_EDX_ARG,param_2,ppuVar5);
    }
    F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    uVar4 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
    uVar2 = (uint)uVar4;
  }
  return uVar2;
}

/* ref: FUN_0046c3c0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0046c3c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x46c3c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int * piVar5;
  undefined * pvVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  float fVar11;
  int iVar12;
  undefined4 uVar13;
  
  pvVar6 = REFG(void * PTR32, 0x1379694);
  switch((unsigned int)(uintptr_t)((char)param_1[2])) {
  case '\x01': ;
    uVar4 = *param_1;
    uVar13 = 0;
    uVar10 = 0;
    uVar7 = F_00533b60(&REFG(undefined4, 0x1375bc0) GEN_EDX_FWD);
    uVar8 = 1;
    break;
  case '\x02': ;
  case '\x0e': ;
    uVar4 = *param_1;
    uVar13 = 0;
    uVar10 = 0;
    uVar7 = F_00533b60(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG);
    uVar8 = 2;
    break;
  default: ;
    return 0;
  case '\x04': ;
    uVar4 = *param_1;
    uVar13 = 0;
    uVar10 = 0;
    uVar7 = F_00533b60(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG);
    uVar8 = 3;
    break;
  case '\x06': ;
    if (REFG(void * PTR32, 0x1379694) != ((undefined *)GEN_TOP(0x0))) {
      bVar1 = F_00aa0f40(REFG(void * PTR32, 0x1379694) GEN_EDX_ARG);
      if (bVar1 == 0) {
        uVar4 = *param_1;
        uVar3 = F_0043ad70((char)param_1[2]);
        uVar4 = F_00ac6e80(&REFG(undefined, 0x14bcf40) GEN_EDX_ARG,uVar3,uVar4,0,0,1);
        if (uVar4 != 0) {
          uVar3 = *param_1;
          uVar10 = 0;
          uVar9 = 0;
          uVar8 = 0;
          fVar11 = REFG(float, 0x10916ec);
          uVar2 = F_0043ad70((char)param_1[2]);
          F_00a7d4b0(uVar4,pvVar6,0,uVar2,uVar3,uVar8,(int)uVar9,(int)((ulonglong)uVar9 >> 0x20),
                       uVar10,fVar11);
        }
      }
      F_00475f20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      (*(ulonglong *)(gen_frame + 0x8)) = F_00533c20(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG);
      (*(undefined2 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0xffffffff;
      (*(undefined4 *)(gen_frame + 0x18)) = 1;
      F_00aa0ed0(pvVar6 GEN_EDX_ARG,*param_1,((undefined1 *)(gen_frame + 0x0)));
    }
    goto LAB_0046c404;
  case '\a': ;
    uVar4 = *param_1;
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x34))) + 0x2c))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x34))) GEN_EDX_ARG);
    iVar12 = ((uVar4 >> 8 & 0xff) * 100 + (uVar4 & 0xff)) * 0x544 + 0x3c + uVar3;
    pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x34))) + 0x20))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x34))) GEN_EDX_ARG)))
    ;
    F_004484f0(pvVar6 GEN_EDX_ARG,iVar12);
    goto LAB_0046c404;
  case '\b': ;
    uVar8 = 0x1a;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x34))) + 0x48))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x34))) GEN_EDX_ARG);
    F_00763050(uVar4 GEN_EDX_ARG,uVar8);
    F_00774ac0(*param_1);
    goto LAB_0046c404;
  case '\t': ;
    uVar4 = *param_1;
    uVar13 = 0;
    uVar10 = 0;
    uVar7 = F_00538780(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG);
    uVar8 = 9;
    break;
  case '\n': ;
    uVar4 = *param_1;
    uVar13 = 0;
    uVar10 = 0;
    uVar7 = F_00538780(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG);
    uVar8 = 5;
    break;
  case '\v': ;
    uVar4 = *param_1;
    uVar13 = 0;
    uVar10 = 0;
    uVar7 = F_00538780(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG);
    uVar8 = 6;
    break;
  case '\f': ;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x34))) + 0x118))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x34))) GEN_EDX_ARG,*param_1);
    goto LAB_0046c404;
  case '\r': ;
    uVar4 = *param_1;
    uVar13 = 0;
    uVar10 = 0;
    uVar7 = F_00538780(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG);
    uVar8 = 8;
    break;
  case '\x0f': ;
    piVar5 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    if (piVar5 != ((int *)GEN_TOP(0x0))) {
      pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x34))))(piVar5 GEN_EDX_ARG)));
      bVar1 = F_0043b400(pvVar6 GEN_EDX_ARG,*param_1);
      if (bVar1 != 0) {
        F_0046bd40(pvVar6 GEN_EDX_ARG,*param_1);
      }
    }
    goto LAB_0046c404;
  case '\x10': ;
    uVar4 = *param_1;
    uVar13 = 0;
    uVar10 = 0;
    uVar7 = F_00533b60(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG);
    uVar8 = 0xb;
    break;
  case '\x11': ;
    uVar4 = *param_1;
    uVar13 = 0;
    uVar10 = 0;
    uVar7 = F_00538780(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG);
    uVar8 = 0xd;
  }
  F_00ac83b0(&REFG(undefined, 0x14bcf40) GEN_EDX_ARG,uVar8,uVar4,(int)uVar7,(int)(uVar7 >> 0x20),uVar10,uVar13);
LAB_0046c404: ;
  F_0043f8b0(0xc);
  return 1;
}

/* ref: FUN_0046c6a0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0046c6a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x46c6a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_FRAME_DECL_GS(0xdc, 4, 4);
  uint * puVar1;
  byte bVar2;
  uint uVar3;
  undefined * pvVar4;
  char * _Format;
  uint uVar5;
  uint * puVar6;
  int iVar7;
  undefined4 uVar8;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xd4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xd8));
  bVar2 = F_00a37c00(&REFG(undefined, 0x14a4230) GEN_EDX_FWD);
  if ((-1 < (int)param_1) && ((int)param_1 < (int)(uint)bVar2)) {
    uVar3 = F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,1000);
    if (uVar3 != 0) {
      puVar1 = ((uint *)GEN_TOP((param_1 * 0x120 + 0x34 + (int)this)));
      *((byte *)GEN_TOP(((int)puVar1 + 0x39))) = *((byte *)GEN_TOP((param_1 * 0x120 + 0x6d + (int)this))) & 0xfd | 1;
      *puVar1 = param_1;
      puVar6 = puVar1 + 0x10;
      iVar7 = 0xe;
      do {
        *(byte *)puVar6 = (byte)*puVar6 & 0xf8;
        puVar6 = puVar6 + 4;
        iVar7 = iVar7 - 1;
      } while (iVar7 != 0);
      F_0043b520(puVar1,uVar3);
      pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x30))) + 0x18))))
                                 (*((int * PTR32 *)GEN_TOP(((int)this + 0x30))) GEN_EDX_ARG)));
      _Format = ((char *)GEN_TOP(F_00461c60(pvVar4 GEN_EDX_ARG,0x1107,puVar1[0xd],(uint)(byte)puVar1[0xe])));
      F_00c472af((char *)(puVar1 + 1),0x30,_Format);
      if ((int)param_1 < 100) {
        *((uint *)GEN_TOP(((int)this + 0x71d4))) = param_1;
      }
      else {
        *((undefined4 *)GEN_TOP(((int)this + 0x71d4))) = 0xffffffff;
      }
      *((undefined1 *)GEN_TOP(((int)this + 0x71d8))) = 0;
      F_0046be10(this GEN_EDX_ARG,0x2f4,*puVar1,puVar1 + 1);
      uVar8 = 0x50;
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x30))) + 0x48))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x30))) GEN_EDX_ARG);
      pvVar4 = ((undefined *)GEN_TOP(F_00763050(uVar3 GEN_EDX_ARG,uVar8)));
      if (pvVar4 != ((undefined *)GEN_TOP(0x0))) {
        F_007d2430(pvVar4 GEN_EDX_ARG);
      }
      *((undefined1 *)GEN_TOP(((int)this + 0x2c))) = 1;
    }
    return param_1;
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x30))) + 0x28))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x30))) GEN_EDX_ARG);
  uVar5 = F_0045fb20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,0x2fe);
  F_004952c0(((undefined *)GEN_TOP((uVar3 + 0x2790))) GEN_EDX_ARG,uVar5);
  F_0042c880(((undefined1 *)(gen_frame + 0x70)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x1c)) GEN_EDX_ARG);
  F_00492c50(((undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00429760(((undefined4 *)(gen_frame + 0x4))[0],8,0x2c4);
  return 0xffffffff;
}

/* ref: FUN_0046c830 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0046c830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x46c830u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_FRAME_DECL_GS(0xdc, 4, 4);
  byte * pbVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xd4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xd8));
  bVar2 = F_00a37c00(&REFG(undefined, 0x14a4230) GEN_EDX_FWD);
  if ((-1 < (int)param_1) && ((int)param_1 < (int)(uint)bVar2)) {
    uVar3 = param_1;
    if (100 < (int)param_1) {
      uVar3 = 0;
    }
    if ((*((byte *)GEN_TOP((uVar3 * 0x120 + 0x6d + (int)this))) & 1) != 0) {
      iVar5 = param_1 * 0x120;
      pbVar1 = ((byte *)GEN_TOP((iVar5 + 0x6d + (int)this)));
      *pbVar1 = *pbVar1 & 0xfe;
      if (*((char *)GEN_TOP(((int)this + 0x71d8))) == '\0') {
        uVar3 = *((uint *)GEN_TOP(((int)this + 0x71d4)));
      }
      else {
        uVar3 = 0xffffffff;
      }
      if (param_1 == uVar3) {
        *((undefined4 *)GEN_TOP(((int)this + 0x71d4))) = 0xffffffff;
        *((undefined1 *)GEN_TOP(((int)this + 0x71d8))) = 0;
      }
      *((undefined1 *)GEN_TOP(((int)this + 0x2c))) = 1;
      F_0046be10(this GEN_EDX_ARG,0x2f5,*((undefined4 *)GEN_TOP(((int)this + iVar5 + 0x34))),(int)this + iVar5 + 0x38);
      return param_1;
    }
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x30))) + 0x28))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x30))) GEN_EDX_ARG);
  uVar4 = F_0045fb20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,0x300);
  F_004952c0(((undefined *)GEN_TOP((uVar3 + 0x2790))) GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x70)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x1c)) GEN_EDX_ARG);
  F_00492c50(((undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00429760(((undefined4 *)(gen_frame + 0x4))[0],8,0x2c4);
  return 0xffffffff;
}

/* ref: FUN_0046c950 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0046c950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x46c950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_FRAME_DECL_GS(0xdc, 4, 4);
  undefined4 * puVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  byte * pbVar7;
  int iVar8;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xd4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xd8));
  bVar4 = F_00a37c00(&REFG(undefined, 0x14a4230) GEN_EDX_FWD);
  if ((-1 < (int)param_1) && ((int)param_1 < (int)(uint)bVar4)) {
    uVar5 = param_1;
    if (100 < (int)param_1) {
      uVar5 = 0;
    }
    if ((*((byte *)GEN_TOP((uVar5 * 0x120 + 0x6d + (int)this))) & 1) != 0) {
      puVar1 = ((undefined4 *)GEN_TOP((param_1 * 0x120 + 0x34 + (int)this)));
      *((byte *)GEN_TOP(((int)puVar1 + 0x39))) = *((byte *)GEN_TOP((param_1 * 0x120 + 0x6d + (int)this))) & 0xfd | 1;
      pbVar7 = (byte *)(puVar1 + 0x10);
      iVar8 = 0xe;
      do {
        *pbVar7 = *pbVar7 & 0xf8;
        pbVar7 = pbVar7 + 0x10;
        iVar8 = iVar8 - 1;
      } while (iVar8 != 0);
      uVar5 = F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,1000);
      if (uVar5 != 0) {
        uVar3 = puVar1[0xd];
        uVar2 = *(undefined1 *)(puVar1 + 0xe);
        F_0043b520(puVar1,uVar5);
        F_00465b20(this GEN_EDX_ARG,puVar1,uVar3,uVar2);
        if ((int)param_1 < 100) {
          *((uint *)GEN_TOP(((int)this + 0x71d4))) = param_1;
        }
        else {
          *((undefined4 *)GEN_TOP(((int)this + 0x71d4))) = 0xffffffff;
        }
        *((undefined1 *)GEN_TOP(((int)this + 0x71d8))) = 0;
        *((undefined1 *)GEN_TOP(((int)this + 0x2c))) = 1;
        F_0046be10(this GEN_EDX_ARG,0x2f4,*puVar1,puVar1 + 1);
      }
      return param_1;
    }
  }
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x30))) + 0x28))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x30))) GEN_EDX_ARG);
  uVar6 = F_0045fb20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,0x2fe);
  F_004952c0(((undefined *)GEN_TOP((uVar5 + 0x2790))) GEN_EDX_ARG,uVar6);
  F_0042c880(((undefined1 *)(gen_frame + 0x70)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x1c)) GEN_EDX_ARG);
  F_00492c50(((undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00429760(((undefined4 *)(gen_frame + 0x4))[0],8,0x2c4);
  return 0xffffffff;
}

/* ref: FUN_0046cac0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0046cac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x46cac0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_FRAME_DECL_GS(0x128, 8, 4);
  uint * puVar1;
  uint * puVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint * puVar6;
  uint * puVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x120)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x124));
  bVar3 = F_00a37c00(&REFG(undefined, 0x14a4230) GEN_EDX_FWD);
  if ((-1 < (int)param_1) && ((int)param_1 < (int)(uint)bVar3)) {
    bVar3 = F_00a37c00(&REFG(undefined, 0x14a4230) GEN_EDX_ARG);
    if ((-1 < (int)param_2) && ((int)param_2 < (int)(uint)bVar3)) {
      uVar4 = param_2;
      if (100 < (int)param_2) {
        uVar4 = 0;
      }
      if ((*((byte *)GEN_TOP((uVar4 * 0x120 + 0x6d + (int)this))) & 1) != 0) {
        F_0046f830(((uint *)(gen_frame + 0x0)) GEN_EDX_ARG);
        puVar1 = ((uint *)GEN_TOP((param_1 * 0x120 + 0x34 + (int)this)));
        puVar2 = ((uint *)GEN_TOP((param_2 * 0x120 + 0x34 + (int)this)));
        puVar6 = puVar1;
        puVar7 = ((uint *)(gen_frame + 0x0));
        for (iVar5 = 0x48; iVar5 != 0; iVar5 = iVar5 - 1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        puVar6 = puVar2;
        puVar7 = puVar1;
        for (iVar5 = 0x48; iVar5 != 0; iVar5 = iVar5 - 1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        puVar6 = ((uint *)(gen_frame + 0x0));
        puVar7 = puVar2;
        for (iVar5 = 0x48; iVar5 != 0; iVar5 = iVar5 - 1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        *puVar1 = param_1;
        *puVar2 = param_2;
        if (param_2 == *((uint *)GEN_TOP(((int)this + 0x71d4)))) {
          *((uint *)GEN_TOP(((int)this + 0x71d4))) = param_1;
        }
        else if (param_1 == *((uint *)GEN_TOP(((int)this + 0x71d4)))) {
          *((uint *)GEN_TOP(((int)this + 0x71d4))) = param_2;
        }
        *((undefined1 *)GEN_TOP(((int)this + 0x2c))) = 1;
        F_0046be10(this GEN_EDX_ARG,0x770,*puVar1,puVar1 + 1);
        return param_1;
      }
    }
  }
  return 0xffffffff;
}

/* ref: FUN_0046cc00 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0046cc00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x46cc00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  
  bVar3 = F_00a37c00(&REFG(undefined, 0x14a4230) GEN_EDX_FWD);
  if ((-1 < param_1) && (param_1 < (int)(uint)bVar3)) {
    iVar4 = param_1;
    if (100 < param_1) {
      iVar4 = 0;
    }
    if ((*((byte *)GEN_TOP((iVar4 * 0x120 + 0x6d + (int)this))) & 1) != 0) {
      puVar2 = ((undefined4 *)GEN_TOP((param_1 * 0x120 + 0x34 + (int)this)));
      puVar1 = puVar2 + 1;
      uVar5 = F_0042a990(param_2 GEN_EDX_ARG);
      F_00c49908(puVar1,0x30,uVar5);
      *((undefined1 *)GEN_TOP(((int)this + 0x2c))) = 1;
      F_0046be10(this GEN_EDX_ARG,0x76f,*puVar2,puVar1);
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_0046cc80 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0046cc80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x46cc80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  
  bVar1 = F_0046c3c0(this GEN_EDX_FWD,(param_1 * 0x10 + param_2) * 0x164 + 0x48 + (int)this);
  return bVar1;
}

/* ref: FUN_0046cca0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0046cca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x46cca0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  
  bVar1 = F_0046c3c0(this GEN_EDX_FWD,param_1 * 0x164 + 0x190c8 + (int)this);
  return bVar1;
}

/* ref: FUN_0046ccc0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0046ccc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x46ccc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  
  bVar1 = F_0046c3c0(this GEN_EDX_FWD,param_1 * 0x164 + 0x1a708 + (int)this);
  return bVar1;
}

/* ref: FUN_0046cce0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0046cce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x46cce0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar5 = 3;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x34))) + 0x48))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x34))) GEN_EDX_FWD);
  uVar2 = F_00763050(uVar2 GEN_EDX_ARG,uVar5);
  bVar1 = *((byte *)GEN_TOP(((int)this + 0x2c24c)));
  if ((((bVar1 & 1) != 0) || ((bVar1 & 2) == 0)) || (uVar2 == 0)) {
    return 0;
  }
  if ((bVar1 & 4) == 0) {
    if ((bVar1 & 8) == 0) {
      return 0;
    }
    iVar4 = param_1 - 0xb5;
  }
  else {
    iVar4 = param_1 - 0xbd;
  }
  iVar3 = iVar4 * 0x164 + 0x1a708 + (int)this;
  if (*((char *)GEN_TOP((iVar3 + 8))) == '\0') {
    return 0;
  }
  F_0046c3c0(this GEN_EDX_ARG,iVar3);
  *((int *)GEN_TOP((uVar2 + 0xdc8))) = iVar4;
  return 1;
}

/* ref: FUN_0046cd80 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0046cd80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x46cd80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 3;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x34))) + 0x48))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x34))) GEN_EDX_FWD);
  uVar2 = F_00763050(uVar2 GEN_EDX_ARG,uVar4);
  bVar1 = *((byte *)GEN_TOP(((int)this + 0x2c24c)));
  if ((((bVar1 & 1) != 0) || ((bVar1 & 2) == 0)) || (uVar2 == 0)) {
    return 0;
  }
  if (param_1 < 0xcd) {
    if ((bVar1 & 0x10) == 0) {
      return 0;
    }
  }
  else if ((bVar1 & 0x20) == 0) {
    return 0;
  }
  iVar3 = (param_1 - 0xc5) * 0x164;
  if (*((char *)GEN_TOP((iVar3 + 0x1a710 + (int)this))) == '\0') {
    return 0;
  }
  F_0046c3c0(this GEN_EDX_ARG,iVar3 + 0x1a708 + (int)this);
  *((uint *)GEN_TOP((uVar2 + 0xdc8))) = param_1 - 0xc5;
  return 1;
}

/* ref: FUN_0046ce20 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0046ce20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x46ce20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar5 = 3;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x34))) + 0x48))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x34))) GEN_EDX_FWD);
  uVar3 = F_00763050(uVar3 GEN_EDX_ARG,uVar5);
  bVar1 = *((byte *)GEN_TOP(((int)this + 0x2c24c)));
  if ((((bVar1 & 1) != 0) || ((bVar1 & 2) == 0)) || (uVar3 == 0)) {
    return 0;
  }
  if ((bVar1 & 4) == 0) {
    if ((bVar1 & 8) == 0) {
      return 0;
    }
    iVar4 = param_2 - 0xb5;
    cVar2 = *((char *)GEN_TOP(((param_1 * 0x10 + iVar4) * 0x164 + 0x50 + (int)this)));
  }
  else {
    iVar4 = param_2 - 0xbd;
    cVar2 = *((char *)GEN_TOP(((param_1 * 0x10 + iVar4) * 0x164 + 0x50 + (int)this)));
  }
  if (cVar2 == '\0') {
    return 0;
  }
  F_0046cc80(this GEN_EDX_ARG,param_1,iVar4);
  *((int *)GEN_TOP((uVar3 + 0xdc8))) = iVar4;
  return 1;
}

/* ref: FUN_0046cec0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0046cec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x46cec0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar4 = 3;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x34))) + 0x48))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x34))) GEN_EDX_FWD);
  uVar3 = F_00763050(uVar3 GEN_EDX_ARG,uVar4);
  bVar2 = *((byte *)GEN_TOP(((int)this + 0x2c24c)));
  if ((((bVar2 & 1) != 0) || ((bVar2 & 2) == 0)) || (uVar3 == 0)) {
    return 0;
  }
  if (param_2 < 0xcd) {
    if ((bVar2 & 0x10) == 0) {
      return 0;
    }
  }
  else if ((bVar2 & 0x20) == 0) {
    return 0;
  }
  iVar1 = param_2 - 0xc5;
  if (*((char *)GEN_TOP(((param_1 * 0x10 + iVar1) * 0x164 + 0x50 + (int)this))) == '\0') {
    return 0;
  }
  F_0046cc80(this GEN_EDX_ARG,param_1,iVar1);
  *((int *)GEN_TOP((uVar3 + 0xdc8))) = iVar1;
  return 1;
}

/* ref: FUN_0046cf50 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0046cf50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x46cf50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0xdc, 4, 4);
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte * pbVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xd4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xd8));
  bVar1 = F_00a37c00(&REFG(undefined, 0x14a4230) GEN_EDX_FWD);
  iVar2 = 0;
  if (bVar1 != 0) {
    pbVar5 = ((byte *)GEN_TOP(((int)this + 0x6d)));
    do {
      if ((*pbVar5 & 1) == 0) {
        if (iVar2 != -1) {
          uVar3 = F_0046c6a0(this GEN_EDX_ARG,iVar2);
          return uVar3;
        }
        break;
      }
      iVar2 = iVar2 + 1;
      pbVar5 = pbVar5 + 0x120;
    } while (iVar2 < (int)(uint)bVar1);
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x30))) + 0x28))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x30))) GEN_EDX_ARG);
  uVar4 = F_0045fb20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,0x2ff);
  F_004952c0(((undefined *)GEN_TOP((uVar3 + 0x2790))) GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x70)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x1c)) GEN_EDX_ARG);
  F_00492c50(((undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00429760(((undefined4 *)(gen_frame + 0x4))[0],8,0x2c4);
  return 0xffffffff;
}

/* ref: FUN_0046d020 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0046d020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x46d020u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  undefined * this_00;
  undefined * this_01;
  undefined * this_02;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int local_18;
  int local_10;
  byte local_5;
  
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x24))))(piVar2 GEN_EDX_ARG,6);
  uVar7 = 3;
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x48))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
  this_00 = ((undefined *)GEN_TOP(F_00763050(uVar4 GEN_EDX_ARG,uVar7)));
  uVar4 = 0;
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    this_01 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x30))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    this_02 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x50))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    uVar6 = 0xffffffff;
    local_5 = 0;
    local_18 = -1;
    iVar5 = 0x36;
    do {
      bVar1 = F_00a34970(this_02 GEN_EDX_ARG,iVar5);
      if (bVar1 != 0) {
        uVar6 = F_00770c60(this_00 GEN_EDX_ARG);
        local_18 = iVar5 - 0x36;
        local_5 = F_0046c3c0(this_01 GEN_EDX_ARG,(uVar6 * 0x10 + iVar5) * 0x164 - 0x4ad0 + (int)this_01);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x42);
    iVar5 = 0x42;
    do {
      bVar1 = F_00a34970(this_02 GEN_EDX_ARG,iVar5);
      if (bVar1 != 0) {
        uVar6 = (iVar5 - 0x36) / 0xc;
        local_18 = (iVar5 - 0x42) % 0xc;
        local_5 = F_0046c3c0(this_01 GEN_EDX_ARG,(uVar6 * 0x10 + local_18) * 0x164 + 0x48 + (int)this_01);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0xae);
    local_10 = (int)this_01 + 0x190c8;
    iVar5 = 0xae;
    do {
      bVar1 = F_00a34970(this_02 GEN_EDX_ARG,iVar5);
      if (bVar1 != 0) {
        local_5 = F_0046c3c0(this_01 GEN_EDX_ARG,local_10);
      }
      local_10 = local_10 + 0x164;
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0xba);
    bVar1 = F_00a34970(this_02 GEN_EDX_ARG,0x2a);
    if (bVar1 != 0) {
      uVar4 = F_00770c60(this_00 GEN_EDX_ARG);
      F_007d5ab0(this_00 GEN_EDX_ARG,uVar4 + 1);
    }
    bVar1 = F_00a34970(this_02 GEN_EDX_ARG,0x2b);
    if (bVar1 != 0) {
      uVar4 = F_00770c60(this_00 GEN_EDX_ARG);
      F_007d5ab0(this_00 GEN_EDX_ARG,uVar4 - 1);
    }
    iVar5 = 0x2c;
    do {
      bVar1 = F_00a34970(this_02 GEN_EDX_ARG,iVar5);
      if (bVar1 != 0) {
        F_007d5ab0(this_00 GEN_EDX_ARG,iVar5 - 0x2c);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x36);
    uVar4 = uVar3;
    if ((uVar3 != 0) && (local_5 != 0)) {
      if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) + 0x2d44))) != uVar6) {
        *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) + 0x2d44))) = uVar6;
        *((undefined1 *)GEN_TOP((uVar3 + 0x1d))) = 1;
      }
      if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) + 0x2d48))) != local_18) {
        *((int *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) + 0x2d48))) = local_18;
        *((undefined1 *)GEN_TOP((uVar3 + 0x1d))) = 1;
      }
    }
  }
  return uVar4;
}

/* ref: FUN_0046d210 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0046d210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x46d210u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  undefined * this_00;
  undefined * this_01;
  undefined * this_02;
  undefined3 extraout_var = 0;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  
  uVar8 = 3;
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x48))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  this_00 = ((undefined *)GEN_TOP(F_00763050(uVar5 GEN_EDX_ARG,uVar8)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  this_01 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x30))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
  this_02 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x50))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
  cVar1 = *((char *)GEN_TOP(((int)this_01 + 0x2c24c)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
  bVar4 = F_005594b0(uVar5 GEN_EDX_ARG);
  if (bVar4 != 0) {
    return CONCAT31(extraout_var,bVar4);
  }
  uVar5 = F_00434920(this GEN_EDX_ARG);
  if (*((char *)GEN_TOP(((int)this + 0x13))) != '\0') {
    return uVar5;
  }
  uVar5 = F_00414500(*((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x10))) GEN_EDX_ARG,0xd9);
  iVar6 = *((int *)GEN_TOP((uVar5 + 0x14)));
  if ((iVar6 == 0) || (bVar3 = false, iVar6 == 2)) {
    bVar3 = true;
  }
  if ((iVar6 == 1) || (iVar6 == 2)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (!bVar3) {
    *((byte *)GEN_TOP(((int)this_01 + 0x2c24c))) = *((byte *)GEN_TOP(((int)this_01 + 0x2c24c))) & 0xcf;
  }
  if (!bVar2) {
    *((byte *)GEN_TOP(((int)this_01 + 0x2c24c))) = *((byte *)GEN_TOP(((int)this_01 + 0x2c24c))) & 0xf3;
  }
  bVar4 = F_00a34970(this_02 GEN_EDX_ARG,0xba);
  if ((bVar4 != 0) && (bVar2)) {
    *((undefined1 *)GEN_TOP(((int)this + 0xf))) = 1;
  }
  bVar4 = F_00a34b70(this_02 GEN_EDX_ARG,0xba);
  if (bVar4 == 0) {
    if (bVar2) {
      bVar4 = F_00a34de0(this_02 GEN_EDX_ARG,0xba);
      if ((bVar4 != 0) && ((*((byte *)GEN_TOP(((int)this_01 + 0x2c24c))) & 4) != 0)) {
        *((undefined1 *)GEN_TOP(((int)this + 0xf))) = 0;
        F_0046ed20(this_01 GEN_EDX_ARG);
      }
      if (*((char *)GEN_TOP(((int)this + 0xf))) != '\0') {
        *((undefined1 *)GEN_TOP(((int)this + 0xf))) = 0;
        F_0046ed20(this_01 GEN_EDX_ARG);
      }
    }
    if (bVar3) {
      *((byte *)GEN_TOP(((int)this_01 + 0x2c24c))) = *((byte *)GEN_TOP(((int)this_01 + 0x2c24c))) & 0xef;
    }
  }
  else if (bVar3) {
    *((byte *)GEN_TOP(((int)this_01 + 0x2c24c))) = *((byte *)GEN_TOP(((int)this_01 + 0x2c24c))) | 0x10;
  }
  bVar4 = F_00a34970(this_02 GEN_EDX_ARG,0xbb);
  if ((bVar4 != 0) && (bVar2)) {
    *((undefined1 *)GEN_TOP(((int)this + 0x10))) = 1;
  }
  bVar4 = F_00a34b70(this_02 GEN_EDX_ARG,0xbb);
  if (bVar4 == 0) {
    if (bVar2) {
      bVar4 = F_00a34de0(this_02 GEN_EDX_ARG,0xbb);
      if ((bVar4 != 0) && ((*((byte *)GEN_TOP(((int)this_01 + 0x2c24c))) & 8) != 0)) {
        *((undefined1 *)GEN_TOP(((int)this + 0x10))) = 0;
        F_0046ed60(this_01 GEN_EDX_ARG);
      }
      if (*((char *)GEN_TOP(((int)this + 0x10))) != '\0') {
        *((undefined1 *)GEN_TOP(((int)this + 0x10))) = 0;
        F_0046ed60(this_01 GEN_EDX_ARG);
      }
    }
    if (!bVar3) goto LAB_0046d404;
    *((byte *)GEN_TOP(((int)this_01 + 0x2c24c))) = *((byte *)GEN_TOP(((int)this_01 + 0x2c24c))) & 0xdf;
  }
  else {
    if (!bVar3) goto LAB_0046d404;
    *((byte *)GEN_TOP(((int)this_01 + 0x2c24c))) = *((byte *)GEN_TOP(((int)this_01 + 0x2c24c))) | 0x20;
  }
  bVar4 = F_00a34a70(this_02 GEN_EDX_ARG,0xba);
  if (bVar4 != 0) {
    *((undefined1 *)GEN_TOP(((int)this + 0xf))) = 0;
  }
  bVar4 = F_00a34a70(this_02 GEN_EDX_ARG,0xbb);
  if (bVar4 != 0) {
    *((undefined1 *)GEN_TOP(((int)this + 0x10))) = 0;
  }
LAB_0046d404: ;
  bVar4 = *((byte *)GEN_TOP(((int)this_01 + 0x2c24c)));
  if (((bVar4 & 0x14) != 0) && ((bVar4 & 0x28) != 0)) {
    *((byte *)GEN_TOP(((int)this_01 + 0x2c24c))) = bVar4 & 0xc3;
  }
  if (*((int *)GEN_TOP(((int)this + 0x18))) == 0) {
    iVar6 = 0xbd;
    do {
      bVar4 = F_00a34970(this_02 GEN_EDX_ARG,iVar6);
      if (bVar4 != 0) {
        if (cVar1 < '\0') {
          bVar4 = F_0046cce0(this_01 GEN_EDX_ARG,iVar6);
        }
        else {
          iVar7 = iVar6;
          uVar5 = F_00770c70(this_00 GEN_EDX_ARG);
          bVar4 = F_0046ce20(this_01 GEN_EDX_ARG,uVar5,iVar7);
        }
        if (bVar4 != 0) {
          F_00a34270(this_02 GEN_EDX_ARG);
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0xc5);
    iVar6 = 0xc5;
    do {
      if (iVar6 < 0xcd) {
        bVar4 = *((byte *)GEN_TOP(((int)this_01 + 0x2c24c))) & 0x14;
      }
      else {
        bVar4 = *((byte *)GEN_TOP(((int)this_01 + 0x2c24c))) & 0x28;
      }
      if ((bVar4 != 0) && (bVar4 = F_00a34c40(this_02 GEN_EDX_ARG,iVar6), bVar4 != 0)) {
        if (cVar1 < '\0') {
          F_0046cd80(this_01 GEN_EDX_ARG,iVar6);
        }
        else {
          iVar7 = iVar6;
          uVar5 = F_00770c70(this_00 GEN_EDX_ARG);
          F_0046cec0(this_01 GEN_EDX_ARG,uVar5,iVar7);
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0xd5);
  }
  bVar4 = F_00a34b70(this_02 GEN_EDX_ARG,0xc2);
  uVar5 = (uint)(bVar4 != 0);
  bVar4 = F_00a34b70(this_02 GEN_EDX_ARG,0xc3);
  if (bVar4 != 0) {
    uVar5 = uVar5 | 2;
  }
  bVar4 = F_00a34b70(this_02 GEN_EDX_ARG,0xc4);
  if (bVar4 != 0) {
    uVar5 = uVar5 | 4;
  }
  bVar4 = F_00a34b70(this_02 GEN_EDX_ARG,0xc1);
  if (bVar4 != 0) {
    uVar5 = uVar5 | 8;
  }
  bVar4 = F_00a34b70(this_02 GEN_EDX_ARG,0xbe);
  if (bVar4 != 0) {
    uVar5 = uVar5 | 0x10;
  }
  bVar4 = F_00a34b70(this_02 GEN_EDX_ARG,0xbf);
  if (bVar4 != 0) {
    uVar5 = uVar5 | 0x20;
  }
  bVar4 = F_00a34b70(this_02 GEN_EDX_ARG,0xc0);
  if (bVar4 != 0) {
    uVar5 = uVar5 | 0x40;
  }
  bVar4 = F_00a34b70(this_02 GEN_EDX_ARG,0xbd);
  if (bVar4 != 0) {
    uVar5 = uVar5 | 0x80;
  }
  F_00770dd0(this_00 GEN_EDX_ARG,uVar5);
  F_0044d810(this GEN_EDX_ARG);
  uVar5 = *((int *)GEN_TOP(((int)this + 0x18))) - 1;
  switch((unsigned int)(uintptr_t)(uVar5)) {
  case 0: ;
    uVar5 = F_00469aa0(this GEN_EDX_ARG);
    return uVar5;
  case 1: ;
    uVar5 = F_0045b5a0(this GEN_EDX_ARG);
    return uVar5;
  case 2: ;
    uVar5 = F_0044d930(this GEN_EDX_ARG);
    return uVar5;
  case 3: ;
    uVar5 = F_0045b840(this GEN_EDX_ARG);
  }
  return uVar5;
}

/* ref: FUN_0046d5e0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0046d5e0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x46d5e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  byte bVar1;
  uint uVar2;
  bool bVar3;
  
  if ((param_2 & 2) != 0) {
    return;
  }
  if (*((char *)GEN_TOP(((int)param_1 + 0x14))) == '\0') {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)param_1 + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)param_1 + 4))) GEN_EDX_FWD);
    bVar1 = F_0075e9d0(uVar2 GEN_EDX_ARG);
    if (bVar1 == 0) {
      bVar3 = (*((byte *)GEN_TOP(((int)param_1 + 0xc))) & 0xa4) == 0xa4;
      if (bVar3) {
        F_00434820(param_1 GEN_EDX_ARG);
      }
      goto LAB_0046d625;
    }
  }
  bVar3 = false;
LAB_0046d625: ;
  bVar1 = F_00434b10(param_1 GEN_EDX_ARG);
  if (bVar1 != 0) {
    F_0046d020(param_1 GEN_EDX_ARG);
  }
  if (*((char *)GEN_TOP(((int)param_1 + 0x14))) == '\0') {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)param_1 + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)param_1 + 4))) GEN_EDX_ARG);
    bVar1 = F_0075e990(uVar2 GEN_EDX_ARG);
    if (bVar1 == 0) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)param_1 + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)param_1 + 4))) GEN_EDX_ARG);
      bVar1 = F_0075e9d0(uVar2 GEN_EDX_ARG);
      if ((bVar1 == 0) && ((*((byte *)GEN_TOP(((int)param_1 + 0xc))) & 0xa4) == 0xa4)) {
        F_00449a30(param_1 GEN_EDX_ARG);
      }
    }
  }
  if (bVar3) {
    F_0043f410(param_1 GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_0046d690 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0046d690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x46d690u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x24))))(piVar4 GEN_EDX_ARG,6);
  if (uVar5 != 0) {
    if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0x2d44))) != -1) {
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0x2d44))) = 0xffffffff;
      *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
    }
    if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0x2d48))) != -1) {
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0x2d48))) = 0xffffffff;
      *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
    }
  }
  F_0043f130(this GEN_EDX_ARG);
  F_0046bf70(this GEN_EDX_ARG);
  uVar8 = 0xb;
  bVar2 = 0;
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x48))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
  uVar5 = F_00763050(uVar5 GEN_EDX_ARG,uVar8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
  uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x94))))(piVar4 GEN_EDX_ARG);
  if (((char)uVar6 == '\0') && ((uVar5 == 0 || (*((char *)GEN_TOP((uVar5 + 0x15a))) == '\0')))) {
    bVar1 = F_0043f220(this GEN_EDX_ARG);
    if (bVar1 == 0) {
      if (0 < *((int *)GEN_TOP(((int)this + 8)))) {
        *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
      }
      if (*((int *)GEN_TOP(((int)this + 8))) < 1) {
        piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
        uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x94))))(piVar4 GEN_EDX_ARG);
        if ((char)uVar5 == '\0') {
          bVar2 = F_00455250(this GEN_EDX_ARG);
        }
      }
      bVar1 = F_00434b60(this GEN_EDX_ARG);
      if (bVar1 == 0) {
        uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x30))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
        *((byte *)GEN_TOP((uVar5 + 0x2c24c))) = *((byte *)GEN_TOP((uVar5 + 0x2c24c))) & 0xc3;
      }
      else {
        F_0046d210(this GEN_EDX_ARG);
      }
      uVar7 = *((undefined1 *)GEN_TOP(((int)this + 0x13)));
      piVar4 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
      uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x50))))(piVar4 GEN_EDX_ARG);
      uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x1c))))(piVar4 GEN_EDX_ARG);
      bVar1 = F_005affd0(uVar6 GEN_EDX_ARG,uVar5,uVar7);
      bVar3 = F_00434b60(this GEN_EDX_ARG);
      if (bVar3 != 0) {
        F_00449740(this GEN_EDX_ARG);
      }
      bVar3 = F_0043f040(this GEN_EDX_ARG);
      bVar1 = bVar1 | bVar3;
      F_00449670(this GEN_EDX_ARG);
      if (*((int *)GEN_TOP(((int)this + 8))) < 1) {
        F_0046d5e0(this GEN_EDX_ARG,bVar1);
      }
      goto LAB_0046d82d;
    }
    bVar1 = 2;
  }
  else {
    uVar7 = *((undefined1 *)GEN_TOP(((int)this + 0x13)));
    piVar4 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x50))))(piVar4 GEN_EDX_ARG);
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x1c))))(piVar4 GEN_EDX_ARG);
    bVar1 = F_005affd0(uVar6 GEN_EDX_ARG,uVar5,uVar7);
    bVar1 = bVar1 | 2;
  }
  bVar2 = 1;
LAB_0046d82d: ;
  F_0043f390(this GEN_EDX_ARG,bVar1,bVar2);
  return 1;
}

/* ref: FUN_0046d850 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0046d850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6))
{
  GEN_ENTER(0x46d850u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  byte bVar1;
  
  ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x91ca8))) + 4))))
            ((int)this + 0x91ca8,param_1,param_2,param_3,param_4,param_5,param_6);
  if (*((char *)GEN_TOP(((int)this + 0x92543))) != '\0') {
    F_00a34040();
  }
  bVar1 = F_0046d690(((undefined *)GEN_TOP(((int)this + 0x92530))) GEN_EDX_ARG);
  return bVar1;
}

/* ref: Component::GUI2::AtkModuleEvent::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0046d8c0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x46d8c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10904c4));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Component::GUI2::AtkModuleInterface::AtkEventInterface::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0046d910(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x46d910u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Component::GUI2::AtkModuleInterface::AtkHistoryInterface::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0046d940(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x46d940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[6])REFP(0x10904dc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_0046d980 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0046d980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x46d980u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_0042a990(param_1 GEN_EDX_FWD);
  bVar1 = F_00a23c00(this GEN_EDX_ARG,uVar2,param_2,param_3);
  return bVar1;
}

/* ref: Component::Text::TextChecker::ExecNonMacroFunc::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0046d9c0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x46d9c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10904f8));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_0046d9f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0046d9f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x46d9f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  return *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + (param_1 >> 5) * 4))) & 1 << ((byte)param_1 & 0x1f);
}

/* ref: FUN_0046da20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0046da20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x46da20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint * puVar1;
  
  puVar1 = ((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + param_1 * 4)));
  *puVar1 = *puVar1 | 1 << GEN_SHC((byte)param_2, (unsigned int)(uintptr_t)param_2);
  *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) + 1;
  return (uint)this;
}

/* ref: FUN_0046da50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0046da50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x46da50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint * puVar1;
  
  puVar1 = ((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + (param_1 >> 5) * 4)));
  *puVar1 = *puVar1 | 1 << ((byte)param_1 & 0x1f);
  *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) + 1;
  return (uint)this;
}

/* ref: FUN_0046da80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0046da80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x46da80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint * puVar1;
  
  puVar1 = ((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + (param_1 >> 5) * 4)));
  *puVar1 = *puVar1 & ~(1 << ((byte)param_1 & 0x1f));
  *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
  return (uint)this;
}

/* ref: FUN_0046dab0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0046dab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x46dab0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pvVar1;
  
  pvVar1 = F_00c48350(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))),0,*((int *)GEN_TOP(((int)this + 0xc))) * 4);
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return (uint)pvVar1;
}

/* ref: FUN_0046dae0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0046dae0(GEN_P(undefined1 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3), GEN_P(undefined1 param_5, unsigned int gen_a4), GEN_P(undefined1 param_6, unsigned int gen_a5), GEN_P(undefined1 param_7, unsigned int gen_a6), GEN_P(undefined1 param_8, unsigned int gen_a7), GEN_P(undefined1 param_9, unsigned int gen_a8), GEN_P(undefined1 param_10, unsigned int gen_a9), GEN_P(undefined1 param_11, unsigned int gen_a10))
{
  GEN_ENTER(0x46dae0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  GEN_PIN(undefined1 param_5 = (undefined1)gen_a4;)
  GEN_PIN(undefined1 param_6 = (undefined1)gen_a5;)
  GEN_PIN(undefined1 param_7 = (undefined1)gen_a6;)
  GEN_PIN(undefined1 param_8 = (undefined1)gen_a7;)
  GEN_PIN(undefined1 param_9 = (undefined1)gen_a8;)
  GEN_PIN(undefined1 param_10 = (undefined1)gen_a9;)
  GEN_PIN(undefined1 param_11 = (undefined1)gen_a10;)
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = param_6;
  param_1[5] = param_7;
  param_1[6] = param_8;
  param_1[7] = param_9;
  param_1[8] = param_10;
  param_1[9] = param_11;
  param_1[10] = 0;
  return (uint)param_1;
}

/* ref: FUN_0046db40 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0046db40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x46db40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x837))) = param_2;
  return param_2;
}

/* ref: FUN_0046db50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0046db50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x46db50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x848))) = param_2;
  return param_2;
}

/* ref: Client::System::Input::InputData::InputCodeModifiedInterface::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0046db60(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x46db60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1090504));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_0046db90 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0046db90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x46db90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x14, 12, 4);
  uint uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10));
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x211;
  (*(undefined2 *)(gen_frame + 0x8)) = 0;
  (*(undefined1 *)(gen_frame + 0xa)) = 0;
  F_00a34390(this GEN_EDX_FWD,0,&(*(undefined4 *)(gen_frame + 0x0)));
  (*(undefined4 *)(gen_frame + 0x0)) = 0x60;
  (*(undefined4 *)(gen_frame + 0x4)) = 0xac;
  (*(undefined2 *)(gen_frame + 0x8)) = 0;
  (*(undefined1 *)(gen_frame + 0xa)) = 0;
  F_00a34390(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x0)));
  (*(undefined4 *)(gen_frame + 0x0)) = 0x6e;
  (*(undefined4 *)(gen_frame + 0x4)) = 0xaa;
  (*(undefined2 *)(gen_frame + 0x8)) = 0;
  (*(undefined1 *)(gen_frame + 0xa)) = 0;
  F_00a34390(this GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0x0)));
  (*(undefined4 *)(gen_frame + 0x0)) = 0x1b;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined2 *)(gen_frame + 0x8)) = 0;
  (*(undefined1 *)(gen_frame + 0xa)) = 0;
  F_00a34390(this GEN_EDX_ARG,3,&(*(undefined4 *)(gen_frame + 0x0)));
  (*(undefined4 *)(gen_frame + 0x0)) = 0x6a;
  (*(undefined4 *)(gen_frame + 0x4)) = 0xab;
  (*(undefined2 *)(gen_frame + 0x8)) = 0;
  (*(undefined1 *)(gen_frame + 0xa)) = 0;
  F_00a34390(this GEN_EDX_ARG,4,&(*(undefined4 *)(gen_frame + 0x0)));
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0xa9;
  (*(undefined2 *)(gen_frame + 0x8)) = 0;
  (*(undefined1 *)(gen_frame + 0xa)) = 0;
  F_00a34390(this GEN_EDX_ARG,5,&(*(undefined4 *)(gen_frame + 0x0)));
  (*(undefined4 *)(gen_frame + 0x0)) = 0x224;
  (*(undefined4 *)(gen_frame + 0x4)) = 0xb2;
  (*(undefined2 *)(gen_frame + 0x8)) = 0;
  (*(undefined1 *)(gen_frame + 0xa)) = 0;
  F_00a34390(this GEN_EDX_ARG,6,&(*(undefined4 *)(gen_frame + 0x0)));
  (*(undefined4 *)(gen_frame + 0x0)) = 100;
  (*(undefined4 *)(gen_frame + 0x4)) = 0xa7;
  (*(undefined2 *)(gen_frame + 0x8)) = 0;
  (*(undefined1 *)(gen_frame + 0xa)) = 0;
  F_00a34390(this GEN_EDX_ARG,7,&(*(undefined4 *)(gen_frame + 0x0)));
  (*(undefined4 *)(gen_frame + 0x0)) = 0x66;
  (*(undefined4 *)(gen_frame + 0x4)) = 0xa8;
  (*(undefined2 *)(gen_frame + 0x8)) = 0;
  (*(undefined1 *)(gen_frame + 0xa)) = 0;
  F_00a34390(this GEN_EDX_ARG,8,&(*(undefined4 *)(gen_frame + 0x0)));
  (*(undefined4 *)(gen_frame + 0x0)) = 0x68;
  (*(undefined4 *)(gen_frame + 0x4)) = 0xa5;
  (*(undefined2 *)(gen_frame + 0x8)) = 0;
  (*(undefined1 *)(gen_frame + 0xa)) = 0;
  F_00a34390(this GEN_EDX_ARG,9,&(*(undefined4 *)(gen_frame + 0x0)));
  (*(undefined4 *)(gen_frame + 0x0)) = 0x62;
  (*(undefined4 *)(gen_frame + 0x4)) = 0xa6;
  (*(undefined2 *)(gen_frame + 0x8)) = 0;
  (*(undefined1 *)(gen_frame + 0xa)) = 0;
  F_00a34390(this GEN_EDX_ARG,10,&(*(undefined4 *)(gen_frame + 0x0)));
  (*(undefined4 *)(gen_frame + 0x0)) = 0x69;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x2b0;
  (*(undefined2 *)(gen_frame + 0x8)) = 0;
  (*(undefined1 *)(gen_frame + 0xa)) = 0;
  F_00a34390(this GEN_EDX_ARG,0xf,&(*(undefined4 *)(gen_frame + 0x0)));
  (*(undefined4 *)(gen_frame + 0x0)) = 0x67;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x1ad;
  (*(undefined2 *)(gen_frame + 0x8)) = 0;
  (*(undefined1 *)(gen_frame + 0xa)) = 0;
  F_00a34390(this GEN_EDX_ARG,0x10,&(*(undefined4 *)(gen_frame + 0x0)));
  (*(undefined4 *)(gen_frame + 0x0)) = 0x81;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined2 *)(gen_frame + 0x8)) = 0;
  (*(undefined1 *)(gen_frame + 0xa)) = 0;
  F_00a34390(this GEN_EDX_ARG,0x12,&(*(undefined4 *)(gen_frame + 0x0)));
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0xac;
  (*(undefined2 *)(gen_frame + 0x8)) = 0;
  (*(undefined1 *)(gen_frame + 0xa)) = 0;
  F_00a34390(this GEN_EDX_ARG,0x1e,&(*(undefined4 *)(gen_frame + 0x0)));
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0xaa;
  (*(undefined2 *)(gen_frame + 0x8)) = 0;
  (*(undefined1 *)(gen_frame + 0xa)) = 0;
  F_00a34390(this GEN_EDX_ARG,0x1f,&(*(undefined4 *)(gen_frame + 0x0)));
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x40b4;
  (*(undefined2 *)(gen_frame + 0x8)) = 0;
  (*(undefined1 *)(gen_frame + 0xa)) = 0;
  F_00a34390(this GEN_EDX_ARG,0x20,&(*(undefined4 *)(gen_frame + 0x0)));
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x2a000a0;
  (*(undefined2 *)(gen_frame + 0x8)) = 0;
  (*(undefined1 *)(gen_frame + 0xa)) = 0;
  F_00a34390(this GEN_EDX_ARG,0x21,&(*(undefined4 *)(gen_frame + 0x0)));
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x2a200a2;
  (*(undefined2 *)(gen_frame + 0x8)) = 0;
  (*(undefined1 *)(gen_frame + 0xa)) = 0;
  F_00a34390(this GEN_EDX_ARG,0x22,&(*(undefined4 *)(gen_frame + 0x0)));
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x1ad;
  (*(undefined2 *)(gen_frame + 0x8)) = 0;
  (*(undefined1 *)(gen_frame + 0xa)) = 0;
  F_00a34390(this GEN_EDX_ARG,0x23,&(*(undefined4 *)(gen_frame + 0x0)));
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x4ae;
  (*(undefined2 *)(gen_frame + 0x8)) = 0;
  (*(undefined1 *)(gen_frame + 0xa)) = 0;
  F_00a34390(this GEN_EDX_ARG,0x24,&(*(undefined4 *)(gen_frame + 0x0)));
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x8b1;
  (*(undefined2 *)(gen_frame + 0x8)) = 0;
  (*(undefined1 *)(gen_frame + 0xa)) = 0;
  F_00a34390(this GEN_EDX_ARG,0x25,&(*(undefined4 *)(gen_frame + 0x0)));
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0xb3b3;
  (*(undefined2 *)(gen_frame + 0x8)) = 0;
  (*(undefined1 *)(gen_frame + 0xa)) = 0;
  F_00a34390(this GEN_EDX_ARG,0x26,&(*(undefined4 *)(gen_frame + 0x0)));
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x243;
  (*(undefined2 *)(gen_frame + 0x8)) = 0;
  (*(undefined1 *)(gen_frame + 0xa)) = 0;
  F_00a34390(this GEN_EDX_ARG,0x13,&(*(undefined4 *)(gen_frame + 0x0)));
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x30;
  (*(undefined2 *)(gen_frame + 0x8)) = 0;
  (*(undefined1 *)(gen_frame + 0xa)) = 0;
  F_00a34390(this GEN_EDX_ARG,0x14,&(*(undefined4 *)(gen_frame + 0x0)));
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x31;
  (*(undefined2 *)(gen_frame + 0x8)) = 0;
  (*(undefined1 *)(gen_frame + 0xa)) = 0;
  F_00a34390(this GEN_EDX_ARG,0x15,&(*(undefined4 *)(gen_frame + 0x0)));
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x32;
  (*(undefined2 *)(gen_frame + 0x8)) = 0;
  (*(undefined1 *)(gen_frame + 0xa)) = 0;
  F_00a34390(this GEN_EDX_ARG,0x16,&(*(undefined4 *)(gen_frame + 0x0)));
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x33;
  (*(undefined2 *)(gen_frame + 0x8)) = 0;
  (*(undefined1 *)(gen_frame + 0xa)) = 0;
  F_00a34390(this GEN_EDX_ARG,0x17,&(*(undefined4 *)(gen_frame + 0x0)));
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x34;
  (*(undefined2 *)(gen_frame + 0x8)) = 0;
  (*(undefined1 *)(gen_frame + 0xa)) = 0;
  F_00a34390(this GEN_EDX_ARG,0x18,&(*(undefined4 *)(gen_frame + 0x0)));
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x35;
  (*(undefined2 *)(gen_frame + 0x8)) = 0;
  (*(undefined1 *)(gen_frame + 0xa)) = 0;
  F_00a34390(this GEN_EDX_ARG,0x19,&(*(undefined4 *)(gen_frame + 0x0)));
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x36;
  (*(undefined2 *)(gen_frame + 0x8)) = 0;
  (*(undefined1 *)(gen_frame + 0xa)) = 0;
  F_00a34390(this GEN_EDX_ARG,0x1a,&(*(undefined4 *)(gen_frame + 0x0)));
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x37;
  (*(undefined2 *)(gen_frame + 0x8)) = 0;
  (*(undefined1 *)(gen_frame + 0xa)) = 0;
  F_00a34390(this GEN_EDX_ARG,0x1b,&(*(undefined4 *)(gen_frame + 0x0)));
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x38;
  (*(undefined2 *)(gen_frame + 0x8)) = 0;
  (*(undefined1 *)(gen_frame + 0xa)) = 0;
  F_00a34390(this GEN_EDX_ARG,0x1c,&(*(undefined4 *)(gen_frame + 0x0)));
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x39;
  (*(undefined2 *)(gen_frame + 0x8)) = 0;
  (*(undefined1 *)(gen_frame + 0xa)) = 0;
  uVar1 = F_00a34390(this GEN_EDX_ARG,0x1d,&(*(undefined4 *)(gen_frame + 0x0)));
  return uVar1;
}

/* ref: FUN_0046dfe0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0046dfe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x46dfe0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    if (uVar2 != 0x12) {
      uVar1 = F_00a343f0(this GEN_EDX_FWD,uVar2);
      F_00a34fd0(this GEN_EDX_ARG,uVar1);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x1e);
  return;
}

/* ref: FUN_0046e020 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0046e020(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x46e020u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x1090510));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: stdext::exception::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0046e050(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x46e050u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  char * pcVar1;
  
  pcVar1 = *((char * PTR32 *)GEN_TOP((in_ecx + 4)));
  if (pcVar1 == ((char *)GEN_TOP(0x0))) {
    pcVar1 = ((char *)REFP(0x109051c));
  }
  return (uint)pcVar1;
}

/* ref: FUN_0046e060 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0046e060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x46e060u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (REFG(undefined * PTR32, 0x15d6710) != ((code *)GEN_TOP(0x0))) {
    ((code *)REFG(gen_code32, 0x15d6710))(this);
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_ARG);
                    
  F_00c4c299(0,0,0,0,0);
}

/* ref: stdext::exception::vf2 */
GEN_OWN GEN_NOFRAME unsigned int F_0046e090(void)
{
  GEN_ENTER(0x46e090u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: stdext::exception::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0046e0a0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x46e0a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x1090510));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_0046e0d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0046e0d0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x46e0d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  in_ecx[1] = param_2;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
  return (uint)in_ecx;
}

/* ref: stdext::bad_alloc::vf2 */
GEN_OWN GEN_NOFRAME unsigned int F_0046e100(void)
{
  GEN_ENTER(0x46e100u, 0u, 0u, 0u, 0u);
                    
  F_00c4c299(0,0,0,0,0);
}

/* ref: stdext::bad_alloc::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0046e110(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x46e110u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x1090510));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_0046e170 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0046e170(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(char param_6, unsigned int gen_a5), GEN_P(undefined1 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8))
{
  GEN_ENTER(0x46e170u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(char param_6 = (char)gen_a5;)
  GEN_PIN(undefined1 param_7 = (undefined1)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a8;)
  char cVar1;
  short sVar2;
  
  *param_1 = param_5;
  sVar2 = (short)param_4;
  if ((short)param_4 == 0) {
    sVar2 = -1;
  }
  *(short *)(param_1 + 1) = sVar2;
  *(undefined1 *)(param_1 + 2) = param_2;
  *((undefined2 *)GEN_TOP(((int)param_1 + 6))) = (undefined2)param_8;
  *((undefined1 *)GEN_TOP(((int)param_1 + 9))) = param_3;
  *((undefined1 *)GEN_TOP(((int)param_1 + 10))) = 1;
  cVar1 = param_6;
  if (param_6 == '\0') {
    cVar1 = -1;
  }
  *((char *)GEN_TOP(((int)param_1 + 0xb))) = cVar1;
  *(undefined1 *)(param_1 + 3) = param_7;
  *((undefined2 *)GEN_TOP(((int)param_1 + 0xe))) = (undefined2)param_9;
  return 0;
}

/* ref: FUN_0046e230 */
GEN_OWN GEN_FRAME byte F_0046e230(GEN_P(byte param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x46e230u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(byte param_1 = (byte)gen_a0;)
  return param_1;
}

/* ref: FUN_0046e240 */
GEN_OWN GEN_FRAME ushort F_0046e240(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x46e240u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  return CONCAT11((char)(undefined2)param_1,(char)((ushort)(undefined2)param_1 >> 8));
}

/* ref: FUN_0046e280 */
GEN_OWN_GS GEN_FRAME uint F_0046e280(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x46e280u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  undefined * this;
  uint uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  this = ((undefined *)GEN_TOP(F_0042cbc0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_2)));
  uVar1 = F_0042e360(this GEN_EDX_ARG,param_3);
  F_0042cbc0(param_1 GEN_EDX_ARG,uVar1);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return (uint)param_1;
}

/* ref: FUN_0046e300 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0046e300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x46e300u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((uint *)GEN_TOP(((int)this + 8))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_2;
  return param_1;
}

/* ref: FUN_0046e320 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0046e320(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x46e320u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x10))) = param_2;
  return param_2;
}

/* ref: FUN_0046e330 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0046e330(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x46e330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x11))) = param_2;
  return param_2;
}

/* ref: FUN_0046e340 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0046e340(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x46e340u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x14))) = param_2;
  return param_2;
}

/* ref: FUN_0046e350 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0046e350(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x46e350u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x18))) = param_2;
  return param_2;
}

/* ref: Client::Game::Control::EmoteController::PlayEmoteOption::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0046e360(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x46e360u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1090544));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_0046e480 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0046e480(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x46e480u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((in_ecx + param_2 * 4)));
}

/* ref: FUN_0046e490 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0046e490(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x46e490u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((in_ecx + 0x10 + param_2 * 4)));
}

/* ref: FUN_0046e4a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0046e4a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x46e4a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00a354d0(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_0046e4c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0046e4c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x46e4c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00a35490(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_0046e4e0 */
GEN_OWN GEN_NOFRAME ulonglong GEN_THISCALL F_0046e4e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x46e4e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined4 extraout_EDX = 0;
  
  if (*((int *)GEN_TOP(((int)this + 0x7c))) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x7c))))))(*((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x7c))) GEN_EDX_FWD);
    return CONCAT44(extraout_EDX,uVar1);
  }
  return 0xe0000000;
}

/* ref: FUN_0046e550 */
GEN_OWN GEN_NOFRAME ulonglong GEN_THISCALL F_0046e550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x46e550u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined4 extraout_EDX = 0;
  
  if (*((int *)GEN_TOP(((int)this + 0x88))) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x88))))))(*((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x88))) GEN_EDX_FWD);
    return CONCAT44(extraout_EDX,uVar1);
  }
  return 0xe0000000;
}

/* ref: FUN_0046e570 */
GEN_OWN GEN_NOFRAME ulonglong GEN_THISCALL F_0046e570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x46e570u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined4 extraout_EDX = 0;
  
  if (*((int *)GEN_TOP(((int)this + 0x8c))) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x8c))))))(*((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x8c))) GEN_EDX_FWD);
    return CONCAT44(extraout_EDX,uVar1);
  }
  return 0xe0000000;
}

/* ref: FUN_0046e590 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_0046e590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x46e590u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  while( true ) {
    if (*((char *)GEN_TOP(((int)this + 6))) == '\0') break;
    uVar1 = F_00a3a860(this GEN_EDX_FWD);
    if (uVar1 == 0) break;
    this = ((undefined *)GEN_TOP(F_00a3a860(this GEN_EDX_ARG)));
  }
  return *((byte *)GEN_TOP(((int)this + 0x2f)));
}

/* ref: FUN_0046e5e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0046e5e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x46e5e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  uint uVar2;
  
  cVar1 = *((char *)GEN_TOP(((int)this + 6)));
  while (cVar1 != '\0') {
    this = ((undefined *)GEN_TOP(F_00a3a860(this GEN_EDX_FWD)));
    cVar1 = *((char *)GEN_TOP(((int)this + 6)));
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  if ((*((byte *)GEN_TOP(((int)this + 0x14))) & 1) != 0) {
    uVar2 = uVar2 + 1000000;
  }
  return uVar2;
}

/* ref: FUN_0046e610 */
GEN_OWN GEN_FRAME uint F_0046e610(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x46e610u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return (uint)(param_1 - 1000000U < 1000000);
}

/* ref: FUN_0046e630 */
GEN_OWN GEN_FRAME uint F_0046e630(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x46e630u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1;
  if (param_1 - 1000000 < 1000000) {
    uVar1 = param_1 - 1000000;
  }
  return uVar1;
}

/* ref: FUN_0046e680 */
GEN_OWN GEN_FRAME uint F_0046e680(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0x46e680u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  if (!GEN_ISNAN(param_1) && !(0.0 <= param_1)) {
    return (int)((double)param_1 - REFG(double, 0x1088108));
  }
  return (int)((double)param_1 + REFG(double, 0x1088108));
}

/* ref: FUN_0046e6b0 */
GEN_OWN GEN_FRAME uint F_0046e6b0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x46e6b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  double dVar1;
  uint uVar2;
  
  if ((int)param_1 < 1) {
    return 0;
  }
  if (param_2 == param_1) {
    return 100;
  }
  dVar1 = GEN_X87((double)((float)GEN_TOF((((float10)(int)param_1 * (float10)*(double *)&REFG(undefined, 0x1088118)) /
                         (float10)(int)param_2))));
  if (dVar1 < 0.0) {
    dVar1 = GEN_X87(dVar1 - REFG(double, 0x1088108));
  }
  else {
    dVar1 = GEN_X87(dVar1 + REFG(double, 0x1088108));
  }
  uVar2 = (uint)dVar1;
  if ((int)uVar2 < 1) {
    return 1;
  }
  if (99 < (int)uVar2) {
    uVar2 = 99;
  }
  return uVar2;
}

/* ref: FUN_0046e710 */
GEN_OWN GEN_FRAME uint F_0046e710(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x46e710u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  if (param_1 != 0) {
    return param_1 + 0xf550;
  }
  return 0;
}

/* ref: FUN_0046e730 */
GEN_OWN GEN_FRAME byte F_0046e730(GEN_P(char param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x46e730u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(char param_1 = (char)gen_a0;)
  return -(param_1 != '\0') & REFG(undefined1, 0x14a739c);
}

/* ref: FUN_0046e750 */
GEN_OWN GEN_FRAME uint F_0046e750(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x46e750u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00a4b780(param_1);
  return uVar1;
}

/* ref: FUN_0046e760 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0046e760(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x46e760u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = (*(undefined * PTR32 (*)[7])REFP(0x109054c));
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  return (uint)in_ecx;
}

/* ref: Client::UI::Info::InfoProxyInterface::vf2 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0046e790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x46e790u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: Client::UI::Info::InfoProxyInterface::vf4 */
GEN_OWN GEN_NOFRAME byte F_0046e7a0(void)
{
  GEN_ENTER(0x46e7a0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::UI::Info::InfoProxyInterface::vf5 */
GEN_OWN GEN_NOFRAME unsigned int F_0046e7b0(void)
{
  GEN_ENTER(0x46e7b0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::UI::Info::InfoProxyInterface::vf6 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0046e7c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x46e7c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 8)));
}

/* ref: Client::UI::Info::InfoProxyInterface::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0046e7d0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x46e7d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x109054c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_0046e810 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0046e810(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x46e810u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[8])REFP(0x109056c));
  *(undefined2 *)(in_ecx + 3) = 0;
  return (uint)in_ecx;
}

/* ref: Client::UI::Info::InfoProxyPageInterface::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0046e840(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x46e840u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x109054c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_0046e870 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0046e870(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x46e870u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1090590));
  in_ecx[1] = 0;
  *(undefined1 *)(in_ecx + 3) = 0;
  F_0042b630(in_ecx + 4 GEN_EDX_FWD);
  return (uint)in_ecx;
}

/* ref: FUN_0046e8b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0046e8b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x46e8b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (0 < *((int *)GEN_TOP(((int)this + 4)))) {
    *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
  }
  uVar1 = F_0042e430(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD,&REFG(undefined1, 0x107fc63));
  return uVar1;
}

/* ref: Client::UI::Info::InfoProxyInvitedInterface::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0046e8f0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x46e8f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1090590));
  F_0042c880(param_1 + 4 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Component::Excel::ExcelLanguageEvent::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0046e940(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x46e940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1090598));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_0046e970 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0046e970(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x46e970u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_0042b630(in_ecx GEN_EDX_FWD);
  return in_ecx;
}

/* ref: Component::Text::TextModule::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0046e9a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x46e9a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x18;
}

/* ref: FUN_0046e9b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0046e9b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x46e9b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_0042b630(this GEN_EDX_FWD);
  F_0042b630((int)this + 0x54 GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 0x6e8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x6ec))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x6f0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x6f8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x6fc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x700))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x6f4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x704))) = 0;
  return (uint)this;
}

/* ref: FUN_0046eaa0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0046eaa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x46eaa0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined2 *)this = (undefined2)param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return (uint)this;
}

/* ref: FUN_0046eac0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0046eac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x46eac0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_FWD);
  uVar1 = F_0042c880(this GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_0046eb60 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0046eb60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x46eb60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x2c))) = param_2;
  return param_2;
}

/* ref: FUN_0046eb70 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0046eb70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x46eb70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x2d))) = param_2;
  return param_2;
}

/* ref: FUN_0046eb90 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0046eb90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x46eb90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00509590(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10905a4));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  return (uint)this;
}

/* ref: FUN_0046ebb0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0046ebb0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x46ebb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = 0;
  *(undefined1 *)(in_ecx + 2) = 0;
  *((undefined1 *)GEN_TOP(((int)in_ecx + 10))) = 0xff;
  F_0042b630(in_ecx + 3 GEN_EDX_FWD);
  F_0042b630(in_ecx + 0x18 GEN_EDX_ARG);
  in_ecx[0x2d] = 0;
  in_ecx[0x2e] = 0xfffffffe;
  F_0042b630(in_ecx + 0x2f GEN_EDX_ARG);
  F_0042b630(in_ecx + 0x44 GEN_EDX_ARG);
  return (uint)in_ecx;
}

/* ref: FUN_0046ec30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0046ec30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x46ec30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0042e430(((undefined *)GEN_TOP(((int)this + 0x110))) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_0046ec40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0046ec40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x46ec40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x164 + 0x190c8 + in_ecx;
}

/* ref: FUN_0046ec60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0046ec60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x46ec60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x164 + 0x1a708 + in_ecx;
}

/* ref: FUN_0046ecb0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0046ecb0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x46ecb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  return (*((byte *)GEN_TOP((in_ecx + 0x2c24c))) & param_2) != 0;
}

/* ref: FUN_0046ecd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0046ecd0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x46ecd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return *((byte *)GEN_TOP((in_ecx + 0x2c24c))) & param_2;
}

/* ref: FUN_0046ecf0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0046ecf0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x46ecf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  if (param_3 != '\0') {
    *((byte *)GEN_TOP((param_1 + 0x2c24c))) = *((byte *)GEN_TOP((param_1 + 0x2c24c))) | param_2;
    return;
  }
  *((byte *)GEN_TOP((param_1 + 0x2c24c))) = *((byte *)GEN_TOP((param_1 + 0x2c24c))) & ~param_2;
  return;
}

/* ref: FUN_0046ed20 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_0046ed20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x46ed20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = *((byte *)GEN_TOP(((int)this + 0x2c24c)));
  if ((~(bVar1 >> 2) & 1) == 0) {
    bVar1 = bVar1 & 0xfb;
  }
  else {
    bVar1 = bVar1 | 4;
  }
  *((byte *)GEN_TOP(((int)this + 0x2c24c))) = bVar1;
  if ((bVar1 & 0xc) == 0xc) {
    bVar1 = bVar1 & 0xf7;
    *((byte *)GEN_TOP(((int)this + 0x2c24c))) = bVar1;
  }
  return bVar1;
}

/* ref: FUN_0046ed60 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_0046ed60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x46ed60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = *((byte *)GEN_TOP(((int)this + 0x2c24c)));
  if ((~(bVar1 >> 3) & 1) == 0) {
    bVar1 = bVar1 & 0xf7;
  }
  else {
    bVar1 = bVar1 | 8;
  }
  *((byte *)GEN_TOP(((int)this + 0x2c24c))) = bVar1;
  if ((bVar1 & 0xc) == 0xc) {
    bVar1 = bVar1 & 0xfb;
    *((byte *)GEN_TOP(((int)this + 0x2c24c))) = bVar1;
  }
  return bVar1;
}

/* ref: FUN_0046ee20 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0046ee20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x46ee20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  if (param_2 != '\0') {
    *((byte *)GEN_TOP((in_ecx + 0x2c24c))) = *((byte *)GEN_TOP((in_ecx + 0x2c24c))) | 1;
    return;
  }
  *((byte *)GEN_TOP((in_ecx + 0x2c24c))) = *((byte *)GEN_TOP((in_ecx + 0x2c24c))) & 0xfe;
  return;
}

/* ref: FUN_0046eea0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0046eea0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x46eea0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  if (param_2 != '\0') {
    *((byte *)GEN_TOP((in_ecx + 0x2c24c))) = *((byte *)GEN_TOP((in_ecx + 0x2c24c))) | 0x80;
    return;
  }
  *((byte *)GEN_TOP((in_ecx + 0x2c24c))) = *((byte *)GEN_TOP((in_ecx + 0x2c24c))) & 0x7f;
  return;
}

/* ref: FUN_0046eed0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0046eed0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x46eed0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: FUN_0046eef0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0046eef0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x46eef0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 8))) = param_2;
  return param_2;
}

/* ref: FUN_0046ef00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0046ef00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x46ef00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((undefined1 *)GEN_TOP((param_2 + 0x16a + in_ecx))) = 1;
  return param_2;
}

/* ref: Client::UI2::Agent::AgentContext::AgentContextUpdateChecker::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0046ef60(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x46ef60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10905bc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_0046efb0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0046efb0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x46efb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x230bf))) = *((byte *)GEN_TOP((in_ecx + 0x230bf))) | param_2;
  return param_2;
}

/* ref: FUN_0046efc0 */
GEN_OWN GEN_FRAME uint F_0046efc0(GEN_P(float param_1, float gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x46efc0u, gen_trace_f(gen_a0), gen_a1, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)REFG(double, 0x1088108);
  fVar2 = GEN_X87((float10)((float)GEN_TOF((((float10)(param_2 & 0xffff) * ((float10)param_1 + (float10)REFG(double, 0x1088130))
                           ) * fVar1))));
  if (fVar2 < (float10)0) {
    return (int)(fVar2 - fVar1);
  }
  return (int)(fVar2 + fVar1);
}

/* ref: FUN_0046f000 */
GEN_OWN GEN_FRAME uint F_0046f000(GEN_P(float param_1, float gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x46f000u, gen_trace_f(gen_a0), gen_a1, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)REFG(double, 0x1088108);
  fVar2 = GEN_X87((float10)((float)GEN_TOF((((float10)(param_2 & 0xffff) * ((float10)1 - (float10)param_1)) * fVar1))));
  if (fVar2 < (float10)0) {
    return (int)(fVar2 - fVar1);
  }
  return (int)(fVar2 + fVar1);
}

/* ref: FUN_0046f040 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0046f040(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0x46f040u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  in_ecx[2] = param_4;
  return (uint)in_ecx;
}

/* ref: FUN_0046f070 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0046f070(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x46f070u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  return (uint)in_ecx;
}

/* ref: FUN_0046f090 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0046f090(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0x46f090u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  in_ecx[2] = param_4;
  return (uint)in_ecx;
}

/* ref: FUN_0046f0c0 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_0046f0c0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x46f0c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  return GEN_X87((float10)(float)((float10)*in_ecx * (float10)*in_ecx +
                         (float10)in_ecx[2] * (float10)in_ecx[2]));
}

/* ref: FUN_0046f0e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0046f0e0(GEN_P(float * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x46f0e0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  uint in_EAX = 0;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = (float10)param_1[1];
  fVar2 = (float10)*param_1;
  fVar3 = (float10)param_1[2];
  fVar1 = GEN_X87((float10)((float)GEN_TOF((fVar3 * fVar3 + (fVar2 * fVar2 + fVar1 * fVar1)))));
  if (fVar1 <= (float10)REFG(float, 0x10905c4)) {
    *param_1 = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    return in_EAX;
  }
  fVar1 = GEN_X87((float10)(float)((float10)param_2 / (float10)((float)GEN_TOF(GEN_X87(SQRT(fVar1))))));
  *param_1 = (float)(fVar1 * (float10)*param_1);
  param_1[1] = (float)((float10)param_1[1] * fVar1);
  param_1[2] = (float)(fVar1 * (float10)param_1[2]);
  return in_EAX;
}

/* ref: FUN_0046f180 */
GEN_OWN GEN_FRAME uint F_0046f180(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x46f180u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 >> 0x18;
}

/* ref: FUN_0046f190 */
GEN_OWN GEN_FRAME uint F_0046f190(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x46f190u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1 & 0xffffff;
}

/* ref: FUN_0046f1a0 */
GEN_OWN GEN_FRAME uint F_0046f1a0(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x46f1a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  *param_1 = (float)((float10)*param_2 - (float10)*param_3);
  param_1[1] = (float)((float10)param_2[1] - (float10)param_3[1]);
  param_1[2] = (float)((float10)param_2[2] - (float10)param_3[2]);
  return (uint)param_1;
}

/* ref: Component::Shell::ShellCommandInterface::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0046f1e0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x46f1e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Component::Shell::DebugCommandInterface::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0046f220(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x46f220u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10905d8));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_0046f260 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0046f260(GEN_P(undefined1 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x46f260u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined1 * in_ecx = (undefined1 *)(uintptr_t)gen_a0;)
  *in_ecx = 0;
  return (uint)in_ecx;
}

/* ref: FUN_0046f2d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0046f2d0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x46f2d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  *in_ecx = (float)((float10)*param_2 + (float10)*in_ecx);
  in_ecx[1] = (float)((float10)param_2[1] + (float10)in_ecx[1]);
  in_ecx[2] = (float)((float10)param_2[2] + (float10)in_ecx[2]);
  return (uint)in_ecx;
}

/* ref: FUN_0046f310 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0046f310(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x46f310u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 8))) = param_2;
  return param_2;
}

/* ref: Client::UI::UIModuleInterface::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0046f330(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x46f330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[73])REFP(0x10905e4));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_0046f390 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0046f390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x46f390u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = (float10)*((float *)GEN_TOP(((int)this + 4)));
  fVar2 = (float10)*(float *)this;
  fVar3 = (float10)*((float *)GEN_TOP(((int)this + 8)));
  fVar1 = GEN_X87((float10)((float)GEN_TOF((fVar3 * fVar3 + (fVar2 * fVar2 + fVar1 * fVar1)))));
  if (fVar1 <= (float10)REFG(float, 0x10905c4)) {
    *(undefined4 *)this = 0;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
    return (uint)this;
  }
  fVar1 = GEN_X87((float10)(float)((float10)1 / (float10)((float)GEN_TOF(GEN_X87(SQRT(fVar1))))));
  *(float *)this = (float)(fVar1 * (float10)*(float *)this);
  *((float *)GEN_TOP(((int)this + 4))) = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 4))) * fVar1)));
  *((float *)GEN_TOP(((int)this + 8))) = ((float)GEN_TOF((fVar1 * (float10)*((float *)GEN_TOP(((int)this + 8))))));
  return (uint)this;
}

/* ref: FUN_0046f440 */
GEN_OWN GEN_FRAME float10 F_0046f440(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x46f440u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  return GEN_X87((float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 + 8))) * (float10)param_2[2] +
                         ((float10)*((float *)GEN_TOP(param_1)) * (float10)*param_2 +
                         (float10)*((float *)GEN_TOP((param_1 + 4))) * (float10)param_2[1])))));
}

/* ref: FUN_0046f480 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0046f480(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x46f480u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  return (uint)in_ecx;
}

/* ref: FUN_0046f4a0 */
GEN_OWN GEN_NOFRAME uint F_0046f4a0(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x46f4a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_2[1];
  fVar2 = param_3[1];
  fVar3 = param_2[2];
  fVar4 = param_3[2];
  *param_1 = (float)((float10)*param_2 - (float10)*param_3);
  param_1[1] = (float)((float10)fVar1 - (float10)fVar2);
  param_1[2] = (float)((float10)fVar3 - (float10)fVar4);
  return (uint)param_1;
}

/* ref: FUN_0046f500 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0046f500(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x46f500u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  *in_ecx = (float)((float10)*param_2 + (float10)*in_ecx);
  in_ecx[1] = (float)((float10)param_2[1] + (float10)in_ecx[1]);
  in_ecx[2] = (float)((float10)param_2[2] + (float10)in_ecx[2]);
  return (uint)in_ecx;
}

/* ref: FUN_0046f530 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0046f530(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0x46f530u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  undefined4 uVar1;
  
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  uVar1 = param_2[2];
  in_ecx[3] = (undefined4)gen_fl2bits(param_3);
  in_ecx[2] = uVar1;
  return (uint)in_ecx;
}

/* ref: FUN_0046f570 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0046f570(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x46f570u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  float10 fVar1;
  
  fVar1 = (float10)param_2;
  *in_ecx = (float)(fVar1 * (float10)*in_ecx);
  in_ecx[1] = (float)((float10)in_ecx[1] * fVar1);
  in_ecx[2] = (float)(fVar1 * (float10)in_ecx[2]);
  in_ecx[3] = (float)(fVar1 * (float10)in_ecx[3]);
  return (uint)in_ecx;
}

/* ref: FUN_0046f5a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0046f5a0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x46f5a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  float10 fVar1;
  
  fVar1 = (float10)param_2;
  *in_ecx = (float)(fVar1 * (float10)*in_ecx);
  in_ecx[1] = (float)((float10)in_ecx[1] * fVar1);
  in_ecx[2] = (float)(fVar1 * (float10)in_ecx[2]);
  in_ecx[3] = (float)(fVar1 * (float10)in_ecx[3]);
  return (uint)in_ecx;
}

/* ref: FUN_0046f5d0 */
GEN_OWN GEN_FRAME ulonglong GEN_THISCALL F_0046f5d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x46f5d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return CONCAT44(*((undefined4 *)GEN_TOP(((int)this + param_1 * 8 + 0xc))),
                  *((undefined4 *)GEN_TOP(((int)this + param_1 * 8 + 8))));
}

/* ref: FUN_0046f5f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0046f5f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x46f5f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((in_ecx + 0x78 + param_2 * 4)));
}

/* ref: FUN_0046f600 */
GEN_OWN GEN_FRAME uint F_0046f600(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x46f600u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00a4cf70(param_1,param_2);
  return uVar1;
}

/* ref: FUN_0046f610 */
GEN_OWN_GS GEN_FRAME uint F_0046f610(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x46f610u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  uint uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  uVar1 = F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1,REFG(undefined4, 0x108cc50));
  uVar1 = F_00a4cf70(uVar1,param_2);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0046f660 */
GEN_OWN GEN_FRAME float F_0046f660(GEN_P(char * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x46f660u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a0;)
  double dVar1;
  
  dVar1 = F_00c4acaa(param_1);
  return (float)dVar1;
}

/* ref: FUN_0046f680 */
GEN_OWN GEN_FRAME float F_0046f680(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x46f680u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  char * _String;
  double dVar1;
  
  _String = ((char *)GEN_TOP(F_0042a990(param_1 GEN_EDX_ARG)));
  dVar1 = F_00c4acaa(_String);
  return (float)dVar1;
}

/* ref: FUN_0046f740 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0046f740(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x46f740u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  if (param_3 == '\0') {
    *((ushort *)GEN_TOP((param_1 + 0xb078))) = *((ushort *)GEN_TOP((param_1 + 0xb078))) & ~(ushort)param_2;
  }
  else {
    *((ushort *)GEN_TOP((param_1 + 0xb078))) = *((ushort *)GEN_TOP((param_1 + 0xb078))) | (ushort)param_2;
  }
  if (param_4 != '\0') {
    F_00a51d60();
  }
  return;
}

/* ref: FUN_0046f780 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0046f780(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x46f780u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  return (*((ushort *)GEN_TOP((in_ecx + 0xb078))) & (ushort)param_2) == (ushort)param_2;
}

/* ref: FUN_0046f7b0 */
GEN_OWN GEN_FRAME uint F_0046f7b0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x46f7b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (*((byte *)GEN_TOP((param_1 + 0x42))) != *((byte *)GEN_TOP((param_2 + 0x42)))) {
    return (uint)(*((byte *)GEN_TOP((param_1 + 0x42))) < *((byte *)GEN_TOP((param_2 + 0x42))));
  }
  if ((float10)*((float *)GEN_TOP((param_1 + 0x30))) < (float10)*((float *)GEN_TOP((param_2 + 0x30)))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_0046f800 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0046f800(GEN_P(uint * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x46f800u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = param_3;
  return param_2;
}

/* ref: FUN_0046f820 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0046f820(GEN_P(byte * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x46f820u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(byte * in_ecx = (byte *)(uintptr_t)gen_a0;)
  *in_ecx = *in_ecx & 0xf8;
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  in_ecx[10] = 0;
  in_ecx[0xb] = 0;
  in_ecx[0xc] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_0046f830 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0046f830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x46f830u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined1 * puVar1;
  byte * pbVar2;
  int iVar3;
  
  *((byte *)GEN_TOP(((int)this + 0x39))) = *((byte *)GEN_TOP(((int)this + 0x39))) & 0xfc;
  pbVar2 = ((byte *)GEN_TOP(((int)this + 0x40)));
  *(undefined4 *)this = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x38))) = 0;
  puVar1 = ((undefined1 *)GEN_TOP(((int)this + 0x5c)));
  iVar3 = 7;
  do {
    *pbVar2 = *pbVar2 & 0xf8;
    *(undefined4 *)(puVar1 - 0x14) = 0;
    puVar1[-0x10] = 0;
    puVar1[-0xc] = puVar1[-0xc] & 0xf8;
    *(undefined4 *)(puVar1 - 4) = 0;
    *puVar1 = 0;
    pbVar2 = pbVar2 + 0x20;
    puVar1 = puVar1 + 0x20;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  F_00c48350(((undefined *)GEN_TOP(((int)this + 4))),0,0x30);
  return (uint)this;
}

/* ref: Client::System::Crypt::CryptInterface::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0046f8a0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x46f8a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x109073c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_0046f900 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0046f900(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x46f900u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((byte *)GEN_TOP((param_2 + in_ecx)));
}

/* ref: FUN_0046f930 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0046f930(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x46f930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0046f990 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0046f990(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x46f990u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0xdc8))) = param_2;
  return param_2;
}

/* ref: FUN_0046f9d0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_0046f9d0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x46f9d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  if ((*in_ecx != 0 || in_ecx[1] != 0) && ((in_ecx[4] & 0x700U) != 0x400)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_0046fa10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0046fa10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x46fa10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x14))) = param_2;
  return param_2;
}

/* ref: FUN_0046fa20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0046fa20(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x46fa20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  *(undefined1 *)(param_1 + 1) = param_2;
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x109074c));
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[4] = 0;
  return (uint)param_1;
}

/* ref: Client::UI::Info::InfoEvent::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0046fa60(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x46fa60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x109074c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_0046fa90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0046fa90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x46fa90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x1c))))(this GEN_EDX_FWD,param_1,1);
  return uVar1;
}

/* ref: FUN_0046fab0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0046fab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x46fab0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x1c))))(this GEN_EDX_FWD,param_1,0);
  return uVar1;
}

/* ref: FUN_0046fb00 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0046fb00(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x46fb00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_0042b630(in_ecx GEN_EDX_FWD);
  return in_ecx;
}

/* ref: FUN_0046fb20 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0046fb20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x46fb20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  int iVar1;
  ulonglong uVar2;
  
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x544)));
  iVar1 = 0xe;
  do {
    this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x54)));
    F_0042c880(this_00 GEN_EDX_FWD);
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  uVar2 = F_0042c880(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
  return (uint)uVar2;
}

/* ref: FUN_0046fb50 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0046fb50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x46fb50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x110))) GEN_EDX_FWD);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0xbc))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x60))) GEN_EDX_ARG);
  uVar1 = F_0042c880(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_0046fbf0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0046fbf0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x46fbf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_0042b630(in_ecx + 8 GEN_EDX_FWD);
  return in_ecx;
}

/* ref: FUN_0046fc10 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0046fc10(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x46fc10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx == param_2;
}

/* ref: FUN_0046fc30 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0046fc30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x46fc30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_0046fc60 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0046fc60(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x46fc60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_0042b630(in_ecx + 0x10 GEN_EDX_FWD);
  return in_ecx;
}

/* ref: FUN_0046fc80 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0046fc80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x46fc80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x10908b4));
  uVar1 = F_0042c880(((undefined *)GEN_TOP(((int)this + 0x5164))) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x109054c));
  return (uint)uVar1;
}

/* ref: Client::UI::Info::InfoProxyLetter::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0046fca0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x46fca0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[8])REFP(0x10908b4));
  F_0042c880(param_1 + 0x1459 GEN_EDX_FWD);
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x109054c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_0046fce0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0046fce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x46fce0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x10908e0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) = (*(undefined * PTR32 (*)[1])REFP(0x10908d8));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) = (*(undefined * PTR32 (*)[1])REFP(0x1090590));
  uVar1 = F_0042c880(((undefined *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x109054c));
  return (uint)uVar1;
}

/* ref: Client::UI::Info::InfoProxyLinkshell::vf5 */
GEN_OWN GEN_NOFRAME unsigned int F_0046fd10(void)
{
  GEN_ENTER(0x46fd10u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::UI::Info::InfoProxyLinkshell::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0046fd20(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x46fd20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[8])REFP(0x10908e0));
  param_1[3] = (*(undefined * PTR32 (*)[1])REFP(0x10908d8));
  param_1[3] = (*(undefined * PTR32 (*)[1])REFP(0x1090590));
  F_0042c880(param_1 + 7 GEN_EDX_FWD);
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x109054c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_0046fd60 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0046fd60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x46fd60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x14))) = (*(undefined * PTR32 (*)[1])REFP(0x1090590));
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x24))) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1090864));
  uVar1 = F_00406b30(*((undefined4 *)GEN_TOP(((int)this + 0x10))));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x109054c));
  return (uint)uVar1;
}

/* ref: Client::UI::Info::InfoProxyChat::vf1 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0046fd90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x46fd90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: FUN_0046fe00 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0046fe00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x46fe00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL(0x90, 0);
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  (*(uint *)(gen_frame + 0x7c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80);
  F_004f1790((uint)((undefined1 *)(gen_frame + 0x30)),(int)this + 0x80,*((int *)GEN_TOP(((int)this + 0xc0))) + 0x50);
  (*(undefined4 *)(gen_frame + 0x0)) = *param_2;
  (*(undefined4 *)(gen_frame + 0x4)) = param_2[1];
  (*(undefined4 *)(gen_frame + 0x8)) = param_2[2];
  (*(undefined4 *)(gen_frame + 0xc)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  F_004eed10(&(*(float *)(gen_frame + 0x20)),(uint)&(*(undefined4 *)(gen_frame + 0x0)),(uint)((undefined1 *)(gen_frame + 0x30)));
  (*(float *)(gen_frame + 0x1c)) = (float)((float10)1 / (float10)(*(float *)(gen_frame + 0x2c)));
  fVar2 = GEN_X87((float10)(float)((float10)1 / (float10)(*(float *)(gen_frame + 0x2c))));
  if (((GEN_ISNAN((float10)REFG(double, 0x10909a8)) || GEN_ISNAN(fVar2)) || (float10)REFG(double, 0x10909a8) <= fVar2) &&
     ((GEN_ISNAN(fVar2) || GEN_ISNAN((float10)REFG(double, 0x10909a0))) || fVar2 <= (float10)REFG(double, 0x10909a0))) {
    fVar3 = (float10)(*(float *)(gen_frame + 0x20));
    (*(float *)(gen_frame + 0x20)) = (float)(fVar3 * fVar2);
    fVar4 = (float10)(*(float *)(gen_frame + 0x24));
    (*(float *)(gen_frame + 0x24)) = (float)(fVar4 * fVar2);
    fVar1 = (float10)(*(float *)(gen_frame + 0x28));
    (*(float *)(gen_frame + 0x28)) = (float)(fVar2 * fVar1);
    *param_1 = (float)(fVar3 * fVar2);
    param_1[1] = (float)(fVar4 * fVar2);
    param_1[2] = (float)(fVar2 * fVar1);
  }
  else {
    *param_1 = 0.0;
    param_1[1] = 0.0;
    param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1090998));
  }
  return (uint)param_1;
}

/* ref: FUN_0046ff10 */
GEN_OWN GEN_FRAME uint F_0046ff10(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(uint * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x46ff10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a2;)
  *param_2 = *(undefined4 *)(&REFG(undefined, 0x12fe6d4) + ((int)param_1 >> 0x18) * 4);
  *param_3 = param_1 & 0xffffff;
  return param_1 & 0xffffff;
}

/* ref: FUN_0046ff40 */
GEN_OWN_GS GEN_FRAME ulonglong F_0046ff40(void)
{
  GEN_ENTER(0x46ff40u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL_GS(0x54, 12, 4);
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50));
  gen_imp_GetSystemTime(&(*(_SYSTEMTIME *)(gen_frame + 0x2c)));
  gen_imp_SystemTimeToFileTime(&(*(_SYSTEMTIME *)(gen_frame + 0x2c)),&(*(uint *)(gen_frame + 0x24)));
  (*(undefined2 *)(gen_frame + 0x4a)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0x107b2;
  (*(undefined4 *)(gen_frame + 0x42)) = 1;
  (*(undefined4 *)(gen_frame + 0x46)) = 0;
  (*(undefined2 *)(gen_frame + 0x40)) = 0;
  gen_imp_SystemTimeToFileTime(&(*(undefined4 *)(gen_frame + 0x3c)),&(*(uint *)(gen_frame + 0x1c)));
  (*(ulonglong *)(gen_frame + 0x0)) = CONCAT44(((*(int *)(gen_frame + 0x28)) - (*(int *)(gen_frame + 0x20))) - (uint)((*(uint *)(gen_frame + 0x24)) < (*(uint *)(gen_frame + 0x1c))),(*(uint *)(gen_frame + 0x24)) - (*(uint *)(gen_frame + 0x1c)));
  return (*(ulonglong *)(gen_frame + 0x0)) / 10000;
}

/* ref: FUN_00470000 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00470000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x470000u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = ((gen_lcode *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this,param_1);
  return (uint)((uVar1 / 0x15180) % (ulonglong)REFG(undefined4, 0x10e90e8));
}

/* ref: FUN_00470049 */
GEN_OWN GEN_NOFRAME unsigned int F_00470049(void)
{
  GEN_ENTER(0x470049u, 0u, 0u, 0u, 0u);
  code * pcVar1;
  
  pcVar1 = ((code *)GEN_TOP(swi(3)));
  (*pcVar1)();
  return 0;
}

/* ref: FUN_00470090 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00470090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x470090u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = ((gen_lcode *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this,param_1);
  return (uint)((uVar1 / 0xe10) % 0x18);
}

/* ref: FUN_004700d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004700d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4700d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = ((gen_lcode *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this,param_1);
  return (uint)((uVar1 / 0x3c) % 0x3c);
}

/* ref: Common::Configuration::ConfigBase::ChangeEventInterface::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00470180(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x470180u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10909b4));
  if (((undefined *)GEN_TOP(param_1[2])) != ((undefined *)GEN_TOP(0x0))) {
    F_00414620(((undefined *)GEN_TOP(param_1[2])) GEN_EDX_FWD,param_1);
  }
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_004701c0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_004701c0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4701c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  if (param_3 != '\0') {
    *((uint *)GEN_TOP((param_1 + 0x10))) = *((uint *)GEN_TOP((param_1 + 0x10))) | param_2;
    return;
  }
  *((uint *)GEN_TOP((param_1 + 0x10))) = *((uint *)GEN_TOP((param_1 + 0x10))) & ~param_2;
  return;
}

/* ref: FUN_004701e0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_004701e0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4701e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  if (param_3 != '\0') {
    *((uint *)GEN_TOP((param_1 + 0xc))) = *((uint *)GEN_TOP((param_1 + 0xc))) | param_2;
    return;
  }
  *((uint *)GEN_TOP((param_1 + 0xc))) = *((uint *)GEN_TOP((param_1 + 0xc))) & ~param_2;
  return;
}

/* ref: FUN_00470200 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00470200(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x470200u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  if (param_3 != '\0') {
    *((uint *)GEN_TOP((param_1 + 0x18))) = *((uint *)GEN_TOP((param_1 + 0x18))) | param_2;
    return;
  }
  *((uint *)GEN_TOP((param_1 + 0x18))) = *((uint *)GEN_TOP((param_1 + 0x18))) & ~param_2;
  return;
}

/* ref: FUN_00470220 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00470220(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x470220u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return *((uint *)GEN_TOP((in_ecx + 0x10))) & param_2;
}

/* ref: FUN_00470230 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00470230(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x470230u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return *((uint *)GEN_TOP((in_ecx + 0x14))) & param_2;
}

/* ref: FUN_00470240 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00470240(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x470240u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return *((uint *)GEN_TOP((in_ecx + 0x18))) & param_2;
}

/* ref: FUN_00470250 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00470250(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x470250u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((in_ecx + 4 + param_2 * 4))) & 1;
}

/* ref: FUN_00470270 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00470270(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x470270u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((in_ecx + 4 + param_2 * 4))) & 2;
}

/* ref: FUN_00470290 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00470290(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x470290u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((in_ecx + 4 + param_2 * 4))) & 4;
}

/* ref: FUN_004702b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004702b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4702b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((in_ecx + 4 + param_2 * 4))) & 8;
}

/* ref: FUN_004702e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004702e0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4702e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined1 *)(in_ecx + 6) = param_2;
  *in_ecx = 0xc9;
  in_ecx[1] = 0x38;
  puVar2 = param_3;
  puVar3 = ((undefined4 *)GEN_TOP(((int)in_ecx + 0x19)));
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)in_ecx;
}

/* ref: FUN_00470310 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00470310(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3), GEN_P(undefined1 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x470310u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  GEN_PIN(undefined1 param_5 = (undefined1)gen_a4;)
  param_1[6] = param_2;
  param_1[7] = param_3;
  *param_1 = 0xca;
  param_1[1] = 0x20;
  *(undefined1 *)(param_1 + 8) = param_4;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x21))) = param_5;
  return (uint)param_1;
}

/* ref: FUN_00470340 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00470340(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined1 param_5, unsigned int gen_a4), GEN_P(undefined1 param_6, unsigned int gen_a5), GEN_P(undefined1 param_7, unsigned int gen_a6))
{
  GEN_ENTER(0x470340u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined1 param_5 = (undefined1)gen_a4;)
  GEN_PIN(undefined1 param_6 = (undefined1)gen_a5;)
  GEN_PIN(undefined1 param_7 = (undefined1)gen_a6;)
  param_1[6] = param_2;
  param_1[7] = param_3;
  *(undefined2 *)(param_1 + 8) = (undefined2)param_4;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x22))) = param_5;
  *param_1 = 0xcb;
  param_1[1] = 0x20;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x23))) = param_6;
  *(undefined1 *)(param_1 + 9) = param_7;
  return (uint)param_1;
}

/* ref: FUN_00470380 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00470380(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined1 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0x470380u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined1 param_6 = (undefined1)gen_a5;)
  param_1[6] = param_2;
  param_1[7] = param_3;
  param_1[8] = param_4;
  *param_1 = 0xcc;
  param_1[1] = 0x28;
  param_1[9] = param_5;
  *(undefined1 *)(param_1 + 10) = param_6;
  return (uint)param_1;
}

/* ref: FUN_004703c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004703c0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined1 param_6, unsigned int gen_a5), GEN_P(undefined1 param_7, unsigned int gen_a6), GEN_P(undefined4 * param_8, unsigned int gen_a7))
{
  GEN_ENTER(0x4703c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined1 param_6 = (undefined1)gen_a5;)
  GEN_PIN(undefined1 param_7 = (undefined1)gen_a6;)
  GEN_PIN(undefined4 * param_8 = (undefined4 *)(uintptr_t)gen_a7;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  param_1[6] = param_2;
  param_1[7] = param_3;
  param_1[8] = param_4;
  param_1[9] = param_5;
  *(undefined1 *)(param_1 + 10) = param_6;
  *param_1 = 0xcd;
  param_1[1] = 0xe8;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x29))) = param_7;
  puVar2 = param_8;
  puVar3 = ((undefined4 *)GEN_TOP(((int)param_1 + 0x2a)));
  for (iVar1 = 0x30; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)puVar3 = *(undefined1 *)puVar2;
  return (uint)param_1;
}

/* ref: FUN_00470410 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00470410(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x470410u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = 0xce;
  in_ecx[1] = 0x18;
  in_ecx[6] = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00470430 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00470430(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x470430u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = 0xcf;
  in_ecx[1] = 0x18;
  in_ecx[6] = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00470450 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00470450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x470450u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = 0xd1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0x18;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_2;
  return (uint)this;
}

/* ref: FUN_00470480 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00470480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x470480u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = 0xd2;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0x18;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_2;
  return (uint)this;
}

/* ref: FUN_004704b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004704b0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4704b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = 0xdc;
  in_ecx[1] = 0x18;
  in_ecx[6] = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_004704d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004704d0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4704d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = 0xdd;
  in_ecx[1] = 0x18;
  in_ecx[6] = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_004704f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004704f0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4704f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *in_ecx = 0xde;
  in_ecx[1] = 0x30;
  puVar2 = param_2;
  puVar3 = in_ecx + 6;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)in_ecx;
}

/* ref: FUN_00470520 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00470520(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x470520u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *in_ecx = 0xdf;
  in_ecx[1] = 0x30;
  puVar2 = param_2;
  puVar3 = in_ecx + 6;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)in_ecx;
}

/* ref: FUN_00470550 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00470550(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x470550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *in_ecx = 0xe1;
  in_ecx[1] = 0x30;
  puVar2 = param_2;
  puVar3 = in_ecx + 6;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)in_ecx;
}

/* ref: FUN_00470580 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00470580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x470580u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1;
  *(undefined4 *)this = 0xe2;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0x38;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_2;
  puVar2 = param_3;
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x20)));
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_004705c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004705c0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4705c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  *param_1 = 0xe3;
  param_1[1] = 0x18;
  *(undefined1 *)(param_1 + 6) = param_2;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x19))) = param_3;
  return (uint)param_1;
}

/* ref: FUN_004705f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004705f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x4705f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1;
  *(undefined4 *)this = 0xe6;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0x38;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_2;
  puVar2 = param_3;
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x20)));
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00470630 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00470630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8), GEN_P(undefined4 param_9, unsigned int gen_a9), GEN_P(undefined4 param_10, unsigned int gen_a10), GEN_P(undefined4 * param_11, unsigned int gen_a11), GEN_P(undefined4 * param_12, unsigned int gen_a12))
{
  GEN_ENTER(0x470630u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a9;)
  GEN_PIN(undefined4 param_10 = (undefined4)gen_a10;)
  GEN_PIN(undefined4 * param_11 = (undefined4 *)(uintptr_t)gen_a11;)
  GEN_PIN(undefined4 * param_12 = (undefined4 *)(uintptr_t)gen_a12;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_2;
  *((undefined2 *)GEN_TOP(((int)this + 0x20))) = (undefined2)param_3;
  *((undefined2 *)GEN_TOP(((int)this + 0x22))) = (undefined2)param_4;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = param_5;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = param_6;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = param_7;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = param_8;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = param_9;
  *(undefined4 *)this = 0xeb;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0xc0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = param_10;
  puVar2 = param_11;
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x40)));
  for (iVar1 = 0x19; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = param_12;
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0xa4)));
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_004706b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004706b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x4706b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1;
  *(undefined4 *)this = 0xf0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0x38;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_2;
  puVar2 = param_3;
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x20)));
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_004706f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004706f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4706f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = 0xf1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0x18;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_2;
  return (uint)this;
}

/* ref: FUN_00470720 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00470720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x470720u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = 0xf2;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0x18;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_2;
  return (uint)this;
}

/* ref: FUN_00470750 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00470750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 * param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x470750u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = param_3;
  *(undefined4 *)this = 0xf4;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0x40;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = param_4;
  puVar2 = param_5;
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x28)));
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00470790 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00470790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 * param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x470790u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = param_3;
  *(undefined4 *)this = 0xf5;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0x40;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = param_4;
  puVar2 = param_5;
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x28)));
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_004707d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004707d0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4707d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = 0xf6;
  in_ecx[1] = 0x18;
  in_ecx[6] = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_004707f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004707f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 * param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x4707f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = param_3;
  *(undefined4 *)this = 0xf7;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0x40;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = param_4;
  puVar2 = param_5;
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x28)));
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00470830 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00470830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 * param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x470830u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = param_3;
  *(undefined4 *)this = 0xf8;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0x40;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = param_4;
  puVar2 = param_5;
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x28)));
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00470870 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00470870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x470870u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = 0xf9;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0x18;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_2;
  return (uint)this;
}

/* ref: FUN_004708a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004708a0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(undefined4 * param_5, unsigned int gen_a4), GEN_P(undefined1 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0x4708a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;)
  GEN_PIN(undefined1 param_6 = (undefined1)gen_a5;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  param_1[6] = param_2;
  *param_1 = 0xfa;
  param_1[1] = 0x2c0;
  param_1[7] = param_3;
  puVar2 = param_4;
  puVar3 = param_1 + 8;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = param_5;
  puVar3 = param_1 + 0x1a;
  for (iVar1 = 0x96; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)puVar3 = *(undefined1 *)puVar2;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x2c1))) = param_6;
  return (uint)param_1;
}

/* ref: FUN_004708f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004708f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x4708f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1;
  *(undefined4 *)this = 0xfb;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0x20;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = param_3;
  return (uint)this;
}

/* ref: FUN_00470920 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00470920(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x470920u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  *param_1 = 0xfc;
  param_1[1] = 0x18;
  *(undefined1 *)(param_1 + 6) = param_2;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x19))) = param_3;
  return (uint)param_1;
}

/* ref: FUN_00470950 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00470950(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined1 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x470950u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined1 param_5 = (undefined1)gen_a4;)
  param_1[6] = param_2;
  param_1[7] = param_3;
  *param_1 = 0xfd;
  param_1[1] = 0x20;
  param_1[8] = param_4;
  *(undefined1 *)(param_1 + 9) = param_5;
  return (uint)param_1;
}

/* ref: FUN_00470980 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00470980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x470980u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = param_3;
  *(undefined4 *)this = 0xff;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0x50;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_2;
  puVar2 = param_4;
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x24)));
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_004709c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004709c0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x4709c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  param_1[6] = param_2;
  *param_1 = 0x104;
  param_1[1] = 0x18;
  *(undefined1 *)(param_1 + 7) = param_3;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x1d))) = param_4;
  return (uint)param_1;
}

/* ref: FUN_004709f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004709f0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4709f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  *param_1 = 0x105;
  param_1[1] = 0x18;
  *(undefined1 *)(param_1 + 6) = param_2;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x19))) = param_3;
  return (uint)param_1;
}

/* ref: FUN_00470a20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00470a20(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x470a20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = 0x106;
  in_ecx[1] = 0x18;
  in_ecx[6] = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00470a40 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00470a40(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8), GEN_P(undefined4 param_10, unsigned int gen_a9), GEN_P(undefined1 param_11, unsigned int gen_a10), GEN_P(undefined1 param_12, unsigned int gen_a11))
{
  GEN_ENTER(0x470a40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a8;)
  GEN_PIN(undefined4 param_10 = (undefined4)gen_a9;)
  GEN_PIN(undefined1 param_11 = (undefined1)gen_a10;)
  GEN_PIN(undefined1 param_12 = (undefined1)gen_a11;)
  param_1[6] = param_2;
  param_1[7] = param_3;
  param_1[8] = param_4;
  param_1[9] = param_5;
  param_1[10] = param_6;
  param_1[0xb] = param_7;
  param_1[0xc] = param_8;
  param_1[0xd] = param_9;
  *(undefined2 *)(param_1 + 0xe) = (undefined2)param_10;
  *param_1 = 0x107;
  param_1[1] = 0x38;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x3a))) = param_11;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x3b))) = param_12;
  return 0;
}

/* ref: FUN_00470aa0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00470aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x470aa0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = 0x108;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0x18;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_2;
  return (uint)this;
}

/* ref: FUN_00470ad0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00470ad0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3), GEN_P(undefined1 param_5, unsigned int gen_a4), GEN_P(undefined1 param_6, unsigned int gen_a5), GEN_P(undefined1 param_7, unsigned int gen_a6), GEN_P(undefined1 param_8, unsigned int gen_a7), GEN_P(undefined4 * param_9, unsigned int gen_a8))
{
  GEN_ENTER(0x470ad0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  GEN_PIN(undefined1 param_5 = (undefined1)gen_a4;)
  GEN_PIN(undefined1 param_6 = (undefined1)gen_a5;)
  GEN_PIN(undefined1 param_7 = (undefined1)gen_a6;)
  GEN_PIN(undefined1 param_8 = (undefined1)gen_a7;)
  GEN_PIN(undefined4 * param_9 = (undefined4 *)(uintptr_t)gen_a8;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  param_1[6] = param_2;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x1d))) = param_4;
  *(undefined1 *)(param_1 + 7) = param_3;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x1f))) = param_6;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x1e))) = param_5;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x21))) = param_8;
  *param_1 = 0x109;
  param_1[1] = 0x98;
  *(undefined1 *)(param_1 + 8) = param_7;
  puVar2 = param_9;
  puVar3 = ((undefined4 *)GEN_TOP(((int)param_1 + 0x22)));
  for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)puVar3 = *(undefined1 *)puVar2;
  return (uint)param_1;
}

/* ref: FUN_00470b30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00470b30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x470b30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = 0x10e;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0x18;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_2;
  return (uint)this;
}

/* ref: FUN_00470b60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00470b60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 * param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x470b60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = param_3;
  *(undefined4 *)this = 0x10f;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0x40;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = param_4;
  puVar2 = param_5;
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x28)));
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00470ba0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00470ba0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3), GEN_P(undefined4 * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x470ba0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  GEN_PIN(undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  param_1[6] = param_2;
  *(undefined1 *)(param_1 + 8) = param_4;
  *param_1 = 0x111;
  param_1[1] = 0x48;
  param_1[7] = param_3;
  puVar2 = param_5;
  puVar3 = ((undefined4 *)GEN_TOP(((int)param_1 + 0x21)));
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)puVar2;
  return (uint)param_1;
}

/* ref: FUN_00470be0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00470be0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined1 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0x470be0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined1 param_6 = (undefined1)gen_a5;)
  param_1[6] = param_2;
  param_1[7] = param_3;
  param_1[8] = param_4;
  *param_1 = 0x112;
  param_1[1] = 0x28;
  param_1[9] = param_5;
  *(undefined1 *)(param_1 + 10) = param_6;
  return (uint)param_1;
}

/* ref: FUN_00470c20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00470c20(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined1 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0x470c20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined1 param_6 = (undefined1)gen_a5;)
  param_1[6] = param_2;
  param_1[7] = param_3;
  param_1[8] = param_4;
  *param_1 = 0x113;
  param_1[1] = 0x28;
  param_1[9] = param_5;
  *(undefined1 *)(param_1 + 10) = param_6;
  return (uint)param_1;
}

/* ref: FUN_00470c60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00470c60(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined1 param_6, unsigned int gen_a5), GEN_P(undefined4 * param_7, unsigned int gen_a6))
{
  GEN_ENTER(0x470c60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined1 param_6 = (undefined1)gen_a5;)
  GEN_PIN(undefined4 * param_7 = (undefined4 *)(uintptr_t)gen_a6;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  param_1[6] = param_2;
  param_1[8] = param_4;
  param_1[7] = param_3;
  *(undefined1 *)(param_1 + 10) = param_6;
  *param_1 = 0x114;
  param_1[1] = 0x50;
  param_1[9] = param_5;
  puVar2 = param_7;
  puVar3 = ((undefined4 *)GEN_TOP(((int)param_1 + 0x29)));
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)puVar2;
  return (uint)param_1;
}

/* ref: FUN_00470cb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00470cb0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x470cb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  param_1[6] = param_2;
  *param_1 = 0x115;
  param_1[1] = 0x20;
  param_1[7] = param_3;
  *(undefined1 *)(param_1 + 8) = param_4;
  return (uint)param_1;
}

/* ref: FUN_00470ce0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00470ce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x470ce0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1;
  *(undefined4 *)this = 0x116;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0x28;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = *param_3;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = param_3[1];
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = param_3[2];
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = param_3[3];
  return (uint)this;
}

/* ref: FUN_00470d20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00470d20(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x470d20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = 0x117;
  in_ecx[1] = 0x18;
  *(undefined2 *)(in_ecx + 6) = (undefined2)param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00470d40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00470d40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x470d40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = 0x118;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0x18;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_2;
  return (uint)this;
}

/* ref: FUN_00470d70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00470d70(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x470d70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = 0x119;
  in_ecx[1] = 0x18;
  in_ecx[6] = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00470d90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00470d90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x470d90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1;
  *(undefined4 *)this = 0x11a;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0x20;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = param_3;
  return (uint)this;
}

/* ref: FUN_00470dc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00470dc0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x470dc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = 0x11b;
  in_ecx[1] = 0x18;
  in_ecx[6] = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00470de0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00470de0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x470de0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *in_ecx = 0x11c;
  in_ecx[1] = 0xd8;
  puVar2 = param_2;
  puVar3 = in_ecx + 6;
  for (iVar1 = 0x30; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)puVar3 = *(undefined1 *)puVar2;
  return (uint)in_ecx;
}

/* ref: FUN_00470e10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00470e10(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x470e10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  *in_ecx = 0x11d;
  in_ecx[1] = 0x18;
  *(undefined1 *)(in_ecx + 6) = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00470e30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00470e30(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x470e30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  *in_ecx = 0x11e;
  in_ecx[1] = 0x18;
  *(undefined1 *)(in_ecx + 6) = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00470e50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00470e50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 * param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x470e50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = param_3;
  *(undefined4 *)this = 0x11f;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0x40;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = param_4;
  puVar2 = param_5;
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x28)));
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00470e90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00470e90(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x470e90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  *param_1 = 0x120;
  param_1[1] = 0x18;
  *(undefined2 *)(param_1 + 6) = (undefined2)param_2;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x1a))) = param_3;
  return (uint)param_1;
}

/* ref: FUN_00470ec0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00470ec0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x470ec0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *in_ecx = 0x121;
  in_ecx[1] = 0xd8;
  puVar2 = param_2;
  puVar3 = in_ecx + 6;
  for (iVar1 = 0x30; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)puVar3 = *(undefined1 *)puVar2;
  return (uint)in_ecx;
}

/* ref: FUN_00470ef0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00470ef0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x470ef0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  *in_ecx = 0x122;
  in_ecx[1] = 0x18;
  *(undefined1 *)(in_ecx + 6) = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00470f10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00470f10(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x470f10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = 0x123;
  in_ecx[1] = 0x18;
  in_ecx[6] = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00470f30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00470f30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x470f30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = 0x124;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0x18;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_2;
  return (uint)this;
}

/* ref: FUN_00470f60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00470f60(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x470f60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = 0x125;
  in_ecx[1] = 0x18;
  in_ecx[6] = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00470f80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00470f80(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x470f80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  param_1[6] = param_2;
  *param_1 = 0x126;
  param_1[1] = 0x18;
  *(undefined1 *)(param_1 + 7) = param_3;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x1d))) = param_4;
  return (uint)param_1;
}

/* ref: FUN_00470fb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00470fb0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x470fb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = 0x127;
  in_ecx[1] = 0x18;
  in_ecx[6] = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00470fd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00470fd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x470fd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  F_0042ccf0(this GEN_EDX_FWD,param_1);
  F_0042ccf0(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_ARG,param_1 + 0x54);
  puVar1 = ((undefined4 *)GEN_TOP(((int)this + 0xa8)));
  iVar2 = 400;
  do {
    *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)this) + (int)puVar1)));
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  *((undefined4 *)GEN_TOP(((int)this + 0x6e8))) = *((undefined4 *)GEN_TOP((param_1 + 0x6e8)));
  *((undefined4 *)GEN_TOP(((int)this + 0x6ec))) = *((undefined4 *)GEN_TOP((param_1 + 0x6ec)));
  *((undefined4 *)GEN_TOP(((int)this + 0x6f0))) = *((undefined4 *)GEN_TOP((param_1 + 0x6f0)));
  *((undefined2 *)GEN_TOP(((int)this + 0x6f4))) = *((undefined2 *)GEN_TOP((param_1 + 0x6f4)));
  *((undefined2 *)GEN_TOP(((int)this + 0x6f6))) = *((undefined2 *)GEN_TOP((param_1 + 0x6f6)));
  *((undefined4 *)GEN_TOP(((int)this + 0x6f8))) = *((undefined4 *)GEN_TOP((param_1 + 0x6f8)));
  *((undefined4 *)GEN_TOP(((int)this + 0x6fc))) = *((undefined4 *)GEN_TOP((param_1 + 0x6fc)));
  *((undefined2 *)GEN_TOP(((int)this + 0x700))) = *((undefined2 *)GEN_TOP((param_1 + 0x700)));
  *((undefined2 *)GEN_TOP(((int)this + 0x702))) = *((undefined2 *)GEN_TOP((param_1 + 0x702)));
  *((undefined2 *)GEN_TOP(((int)this + 0x704))) = *((undefined2 *)GEN_TOP((param_1 + 0x704)));
  *((ushort *)GEN_TOP(((int)this + 0x706))) =
       *((ushort *)GEN_TOP(((int)this + 0x706))) ^
       (*((ushort *)GEN_TOP(((int)this + 0x706))) ^ *((ushort *)GEN_TOP((param_1 + 0x706)))) & 1;
  *((ushort *)GEN_TOP(((int)this + 0x706))) =
       (*((ushort *)GEN_TOP((param_1 + 0x706))) ^ *((ushort *)GEN_TOP(((int)this + 0x706)))) & 1 ^
       *((ushort *)GEN_TOP((param_1 + 0x706)));
  return (uint)this;
}

/* ref: FUN_00471130 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00471130(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x471130u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  int in_ecx_00;
  int iVar1;
  
  F_0042b630(in_ecx + 4 GEN_EDX_FWD);
  in_ecx_00 = in_ecx + 0x58;
  iVar1 = 0xe;
  do {
    F_0042b630(in_ecx_00 GEN_EDX_ARG);
    in_ecx_00 = in_ecx_00 + 0x54;
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  return in_ecx;
}

/* ref: FUN_00471180 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00471180(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x471180u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10904f8));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_004711d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004711d0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4711d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10904f8));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00471220 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00471220(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x471220u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10904f8));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00471270 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00471270(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x471270u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10904f8));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Misc::UserFileManager::UserFileEvent::vf4 */
GEN_OWN GEN_NOFRAME uint F_004712b0(void)
{
  GEN_ENTER(0x4712b0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::UI::Misc::UserFileManager::UserFileEvent::vf5 */
GEN_OWN GEN_NOFRAME uint F_004712c0(void)
{
  GEN_ENTER(0x4712c0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::UI::Misc::UserFileManager::UserFileEvent::vf6 */
GEN_OWN GEN_NOFRAME uint F_004712d0(void)
{
  GEN_ENTER(0x4712d0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_004712e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004712e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4712e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_2 < 2) {
    return *((uint *)GEN_TOP((in_ecx + 0x10 + param_2 * 4)));
  }
  return 0;
}

/* ref: FUN_00471300 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00471300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x471300u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = param_2;
  return (uint)this;
}

/* ref: FUN_00471320 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00471320(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x471320u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  return param_1 << 0x10 | (uint)(ushort)param_2;
}

/* ref: FUN_00471340 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00471340(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x471340u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_0042b630(in_ecx GEN_EDX_FWD);
  F_0042b630(in_ecx + 0x54 GEN_EDX_ARG);
  return in_ecx;
}

/* ref: FUN_00471360 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00471360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x471360u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_FWD);
  uVar1 = F_0042c880(this GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00471380 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00471380(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x471380u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_0042b630(in_ecx + 8 GEN_EDX_FWD);
  return in_ecx;
}

/* ref: FUN_004713a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004713a0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4713a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_0042b630(in_ecx + 4 GEN_EDX_FWD);
  return in_ecx;
}

/* ref: FUN_004713c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004713c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4713c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x6c))) GEN_EDX_FWD);
  uVar1 = F_0042c880(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_004713e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004713e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4713e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_FWD);
  uVar1 = F_0042c880(this GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00471400 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00471400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x471400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  F_0042ccf0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_1 + 1);
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = param_1[0x16];
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = param_1[0x17];
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = param_1[0x18];
  *((undefined4 *)GEN_TOP(((int)this + 100))) = param_1[0x19];
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = param_1[0x1a];
  return (uint)this;
}

/* ref: FUN_00471450 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00471450(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x471450u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_0042b630(in_ecx GEN_EDX_FWD);
  F_0042b630(in_ecx + 0x54 GEN_EDX_ARG);
  return in_ecx;
}

/* ref: FUN_00471470 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00471470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x471470u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_FWD);
  uVar1 = F_0042c880(this GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00471490 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00471490(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x471490u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_0042b630(in_ecx GEN_EDX_FWD);
  return in_ecx;
}

