#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00e05070 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e05070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe05070u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e050c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e050c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe050c0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e05100 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e05100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe05100u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e05150 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e05150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe05150u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e05190 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e05190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe05190u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x114d474));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_3;
  F_00e04ea0(((undefined4 *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: LOCALNAMESPACE::hkNativeResource::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e051e0(void)
{
  GEN_ENTER(0xe051e0u, 0u, 0u, 0u, 0u);
  return 0x114d494;
}

/* ref: LOCALNAMESPACE::hkNativeResource::vf7 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e051f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe051f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x18)));
}

/* ref: LOCALNAMESPACE::hkNativeResource::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e05200(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe05200u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  int iVar1;
  int * piVar2;
  uint uVar3;
  undefined * this_00;
  char * pcVar4;
  
  iVar1 = (*(int *)&gen_args[0]);
  if ((*(int *)&gen_args[0]) != 0) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e3738) + 0x10))))(REFG(int * PTR32, 0x15e3738) GEN_EDX_FWD)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x10))))(piVar2 GEN_EDX_ARG,*(undefined4 *)(this + 0x18));
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x10))))(piVar2 GEN_EDX_ARG,iVar1)));
    if (((uVar3 != 0) && (this_00 != ((undefined *)GEN_TOP(0x0)))) &&
       (pcVar4 = ((char *)GEN_TOP(F_00d92650(this_00 GEN_EDX_ARG,(int)&(*(int *)&gen_args[0]) + 3,uVar3))), *pcVar4 == '\0')) {
      return 0;
    }
  }
  return *(uint *)(this + 0x14);
}

/* ref: LOCALNAMESPACE::hkNativeResource::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e05270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe05270u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00e04610(*(undefined4 *)(this + 8),param_2,param_1);
  return;
}

/* ref: FUN_00e05290 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e05290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe05290u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e052d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e052d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe052d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x1c)));
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x14))),(uVar1 & 0x3fffffff) * 0x30);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0x80000000;
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x10)));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 8))),uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0x80000000;
  return uVar1;
}

/* ref: FUN_00e05350 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e05350(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe05350u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00e052d0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: LOCALNAMESPACE::hkNativeResource::vf4 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e05380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe05380u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(int *)(this + 0x14) != 0) {
    F_00e04d40(*(undefined4 *)(this + 8),*(undefined4 *)(this + 0xc));
    *(undefined4 *)(this + 0x14) = 0;
    *(undefined4 *)(this + 0x18) = 0;
  }
  return;
}

/* ref: FUN_00e053b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e053b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe053b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x114d474));
  if (*((int *)GEN_TOP(((int)this + 0x14))) != 0) {
    F_00e04d40(*((undefined4 *)GEN_TOP(((int)this + 8))),*((undefined4 *)GEN_TOP(((int)this + 0xc))));
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x10)));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 8))),uVar1 & 0x3fffffff);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: LOCALNAMESPACE::hkNativeResource::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e05410(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe05410u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00e053b0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: FUN_00e05450 */
GEN_LIB GEN_NOFRAME uint F_00e05450(void)
{
  GEN_ENTER(0xe05450u, 0u, 0u, 0u, 0u);
  return 0x113cdcc;
}

/* ref: FUN_00e05460 */
GEN_LIB GEN_FRAME uint F_00e05460(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xe05460u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL(0x18, 8);
  char * pcVar1;
  undefined * this;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  F_0105a6d0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1,param_2);
  F_0105a6d0(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,param_3,param_4);
  pcVar1 = ((char *)GEN_TOP(F_0105a720(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined1 *)(gen_frame + 0x13)))));
  if (*pcVar1 != '\0') {
    pcVar1 = ((char *)GEN_TOP(F_0105a720(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,&(*(undefined1 *)(gen_frame + 0x13)))));
    if (*pcVar1 != '\0') {
      this = ((undefined *)GEN_TOP(F_0105a8f0(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG)));
      uVar2 = F_00da6030(this GEN_EDX_ARG);
      uVar3 = F_0105a740(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      uVar4 = F_0105a740(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
      pcVar1 = ((char *)GEN_TOP(F_00da1010(uVar4,uVar3,uVar2)));
    }
  }
  return (uint)pcVar1;
}

/* ref: FUN_00e054e0 */
GEN_LIB GEN_FRAME uint F_00e054e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe054e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined1 uVar4;
  
  uVar4 = 0;
  uVar1 = F_00d929c0(param_3 GEN_EDX_ARG);
  F_00dba580(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1,uVar1,uVar4);
  iVar3 = 0;
  uVar1 = F_00d927e0(param_3 GEN_EDX_ARG);
  if (0 < (int)uVar1) {
    do {
      puVar2 = ((undefined4 *)GEN_TOP(F_00d92800(param_3 GEN_EDX_ARG,iVar3)));
      uVar1 = F_00d928d0(param_2 GEN_EDX_ARG,*puVar2);
      if (uVar1 == 0) {
        F_00dba4e0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)puVar2 + 0x12))),0);
        F_00d92b10(param_3 GEN_EDX_ARG,iVar3,((undefined1 *)(gen_frame + 0x0)));
      }
      iVar3 = iVar3 + 1;
      uVar1 = F_00d927e0(param_3 GEN_EDX_ARG);
    } while (iVar3 < (int)uVar1);
  }
  uVar1 = F_00dba640(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00e05570 */
GEN_LIB GEN_FRAME uint F_00e05570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe05570u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  int iVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  F_0105ae50((*(int * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]));
  F_00e05630(&(*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
  iVar1 = *piVar2;
  iVar4 = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  for (; iVar1 != 0; iVar1 = piVar2[iVar1]) {
    F_00e05b60(&(*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,iVar1,&(*(undefined4 *)(gen_frame + 0x0)),1);
    iVar1 = iVar4 + 1;
    iVar4 = iVar4 + 1;
  }
  uVar3 = F_00dbdb20(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
  return uVar3;
}

/* ref: FUN_00e05630 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e05630(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe05630u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = REFG(undefined4, 0x135491c);
  return (uint)in_ecx;
}

/* ref: FUN_00e05640 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e05640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe05640u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00e05660 */
GEN_LIB GEN_FRAME ushort F_00e05660(GEN_P(int in_ecx, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe05660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((ushort *)GEN_TOP((in_ecx + 0x12))) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00e05670 */
GEN_LIB GEN_FRAME uint F_00e05670(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(byte * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe05670u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x210, 0, 4);
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
    uVar3 = F_00da6030(param_1 GEN_EDX_ARG);
    return uVar3;
  case 0x13: ;
    uVar3 = F_00e05670(param_1,param_2,(uint)*((byte *)GEN_TOP(((int)param_1 + 0xd))));
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
    uVar3 = F_00da5fc0(param_1 GEN_EDX_ARG);
    uVar3 = F_00d929c0(uVar3 GEN_EDX_ARG);
    break;
  case 0x1b: ;
    return (uint)*param_2 * 2 + 4;
  case 0x1c: ;
    return (uint)*param_2 * 2;
  case 0x22: ;
    return 4;
  default: ;
    F_00da0a80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
    F_00d9fe80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,((char *)REFP(0x114d534)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                      (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,3,0x50a18b58,((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x114d518)),0xcd);
    if (uVar3 == 0) {
      F_00d9fda0(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG);
      return 0;
    }
    pcVar1 = ((code *)GEN_TOP(swi(3)));
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  uVar2 = F_00da5ff0(param_1 GEN_EDX_ARG);
  if (uVar2 != 0) {
    uVar2 = F_00da5ff0(param_1 GEN_EDX_ARG);
    return uVar2 * uVar3;
  }
  return uVar3;
}

/* ref: FUN_00e05800 */
GEN_LIB GEN_FRAME uint F_00e05800(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe05800u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
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
    uVar1 = F_00da6140(param_1 GEN_EDX_ARG);
    break;
  case 0x13: ;
    uVar1 = F_00e05800(param_1,(uint)*((byte *)GEN_TOP(((int)param_1 + 0xd))),param_3);
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
    this = ((undefined *)GEN_TOP(F_00da5fc0(param_1 GEN_EDX_ARG)));
    iVar3 = 0;
    uVar2 = F_00d927e0(this GEN_EDX_ARG);
    if (0 < (int)uVar2) {
      do {
        uVar2 = F_00d92800(this GEN_EDX_ARG,iVar3);
        uVar2 = F_00e05800(((undefined *)GEN_TOP(uVar2)),(uint)*((byte *)GEN_TOP((uVar2 + 0xc))),param_3);
        if ((int)uVar1 < (int)uVar2) {
          uVar1 = uVar2;
        }
        iVar3 = iVar3 + 1;
        uVar2 = F_00d927e0(this GEN_EDX_ARG);
      } while (iVar3 < (int)uVar2);
    }
  }
  if (((*((ushort *)GEN_TOP(((int)param_1 + 0x10))) & 0x180) != 0) &&
     (uVar2 = (uint)((*((ushort *)GEN_TOP(((int)param_1 + 0x10))) & 0x180) == 0x100) * 8 + 8,
     (int)uVar1 < (int)uVar2)) {
    uVar1 = uVar2;
  }
  return uVar1;
}

/* ref: FUN_00e05900 */
GEN_LIB GEN_FRAME uint F_00e05900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe05900u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  byte bVar1;
  undefined4 in_ecx;
  uint uVar2;
  uint uVar3;
  undefined * this;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte * pbVar7;
  undefined * pvVar8;
  
  this = (*(undefined * PTR32 *)&gen_args[0]);
  F_00dbd8b0((*(undefined * PTR32 *)&gen_args[2]) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),(*(undefined * PTR32 *)&gen_args[0]),0);
  if ((*(undefined * PTR32 *)&gen_args[3]) != ((undefined *)GEN_TOP(0x0))) {
    uVar2 = F_00d927e0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    (*(uint *)(gen_frame + 0x10)) = uVar2;
    (*(undefined * PTR32 *)&gen_args[0]) = ((undefined *)GEN_TOP(0x0));
    if (0 < (int)uVar2) {
      do {
        uVar2 = F_00d92840(this GEN_EDX_ARG,(*(undefined * PTR32 *)&gen_args[0]));
        if (*((int *)GEN_TOP((uVar2 + 4))) != 0) {
          uVar3 = F_00da5fc0(uVar2 GEN_EDX_ARG);
          uVar3 = F_00dbd930((*(undefined * PTR32 *)&gen_args[2]) GEN_EDX_ARG,uVar3);
          if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[2]) + 8))) < (int)uVar3) {
            pbVar7 = (*(byte * PTR32 *)&gen_args[1]);
            pvVar8 = (*(undefined * PTR32 *)&gen_args[2]);
            iVar6 = (int)(*(undefined * PTR32 *)&gen_args[3]);
            uVar2 = F_00da5fc0(uVar2 GEN_EDX_ARG);
            F_00e05900(((undefined *)GEN_TOP(uVar2)),pbVar7,pvVar8,((undefined *)GEN_TOP(iVar6)));
          }
        }
        (*(undefined * PTR32 *)&gen_args[0]) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 1)));
      } while ((int)(*(undefined * PTR32 *)&gen_args[0]) < (int)(*(uint *)(gen_frame + 0x10)));
    }
  }
  (*(int *)(gen_frame + 0x0)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0x80000000;
  F_00d95690(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0x0)),0x10,4);
  for (; this != ((undefined *)GEN_TOP(0x0)); this = ((undefined *)GEN_TOP(F_00d92620(this GEN_EDX_ARG)))) {
    (*(undefined * PTR32 *)&gen_args[3]) = this;
    F_00e05e90(&(*(int *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516a4),0,&(*(undefined * PTR32 *)&gen_args[3]));
  }
  bVar1 = *(*(byte * PTR32 *)&gen_args[1]);
  uVar2 = 0;
  (*(undefined * PTR32 *)&gen_args[3]) = ((undefined *)GEN_TOP(0x1));
  (*(uint *)(gen_frame + 0xc)) = (uint)bVar1;
  (*(int *)(gen_frame + 0x14)) = 0;
  if (0 < (*(int *)(gen_frame + 0x4))) {
    do {
      uVar3 = (*(uint *)(gen_frame + 0xc));
      in_ecx = *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + (*(int *)(gen_frame + 0x14)) * 4)));
      (*(uint *)(gen_frame + 0x10)) = 0;
      uVar4 = F_00d926f0(in_ecx GEN_EDX_ARG);
      if (0 < (int)uVar4) {
        do {
          if ((int)uVar2 % (int)uVar3 != 0) {
            uVar2 = uVar2 + (uVar3 - (int)uVar2 % (int)uVar3);
          }
          uVar2 = uVar2 + uVar3;
          if ((int)(*(undefined * PTR32 *)&gen_args[3]) < (int)uVar3) {
            (*(undefined * PTR32 *)&gen_args[3]) = ((undefined *)GEN_TOP(uVar3));
          }
          (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) + 1;
          uVar4 = F_00d926f0(in_ecx GEN_EDX_ARG);
        } while ((int)(*(uint *)(gen_frame + 0x10)) < (int)uVar4);
      }
      iVar6 = 0;
      uVar3 = F_00d92850(in_ecx GEN_EDX_ARG);
      if (0 < (int)uVar3) {
        do {
          uVar3 = F_00d92860(in_ecx GEN_EDX_ARG,iVar6);
          if (((uVar2 == 0) && ((*(int *)(gen_frame + 0x14)) != 0)) && ((*(byte * PTR32 *)&gen_args[1])[3] == 0)) {
            uVar2 = 1;
          }
          uVar4 = F_00e05800(uVar3,(uint)*((byte *)GEN_TOP((uVar3 + 0xc))),(uint)*(*(byte * PTR32 *)&gen_args[1]));
          if ((int)(*(undefined * PTR32 *)&gen_args[3]) < (int)uVar4) {
            (*(undefined * PTR32 *)&gen_args[3]) = ((undefined *)GEN_TOP(uVar4));
          }
          if ((int)uVar2 % (int)uVar4 != 0) {
            uVar2 = uVar2 + (uVar4 - (int)uVar2 % (int)uVar4);
          }
          if (*((ushort *)GEN_TOP((uVar3 + 0x12))) != uVar2) {
            F_00e05660(uVar3,uVar2);
          }
          uVar3 = F_00e05670(uVar3,(*(byte * PTR32 *)&gen_args[1]),(uint)*((byte *)GEN_TOP((uVar3 + 0xc))));
          uVar2 = uVar2 + uVar3;
          iVar6 = iVar6 + 1;
          uVar3 = F_00d92850(in_ecx GEN_EDX_ARG);
        } while (iVar6 < (int)uVar3);
      }
      uVar3 = uVar2;
      if ((int)uVar2 % (int)(*(undefined * PTR32 *)&gen_args[3]) != 0) {
        uVar3 = ((int)(*(undefined * PTR32 *)&gen_args[3]) - (int)uVar2 % (int)(*(undefined * PTR32 *)&gen_args[3])) + uVar2;
      }
      uVar4 = uVar3;
      if (uVar3 == 0) {
        uVar4 = 1;
      }
      uVar5 = F_00d929c0(in_ecx GEN_EDX_ARG);
      if (uVar5 != uVar4) {
        F_00d929d0(in_ecx GEN_EDX_ARG,uVar4);
      }
      if ((*(byte * PTR32 *)&gen_args[1])[2] == 0) {
        uVar2 = uVar3;
      }
      iVar6 = (*(int *)(gen_frame + 0x14)) + 1;
      (*(int *)(gen_frame + 0x14)) = iVar6;
    } while (iVar6 < (*(int *)(gen_frame + 0x4)));
  }
  (*(int *)(gen_frame + 0x4)) = 0;
  uVar2 = (*(uint *)(gen_frame + 0x8));
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) * 4);
  }
  return uVar2;
}

/* ref: FUN_00e05b60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e05b60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe05b60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00dbd930(param_2 GEN_EDX_FWD,param_1);
  if (*((int *)GEN_TOP(((int)param_2 + 8))) < (int)uVar1) {
    uVar1 = F_00e05900(param_1,this,param_2,param_3);
  }
  return uVar1;
}

/* ref: FUN_00e05ba0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e05ba0(GEN_P(ushort * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe05ba0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(ushort * in_ecx = (ushort *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return *in_ecx & param_2;
}

/* ref: FUN_00e05be0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e05be0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe05be0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00e05c10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e05c10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe05c10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00e05c40 */
GEN_LIB GEN_FRAME unsigned int F_00e05c40(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe05c40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  
  if (0 < param_2) {
    puVar1 = param_1;
    iVar2 = param_2;
    do {
      *puVar1 = *((undefined4 *)GEN_TOP(((param_3 - (int)param_1) + (int)puVar1)));
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00e05c70 */
GEN_LIB GEN_FRAME ushort GEN_THISCALL F_00e05c70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe05c70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((ushort *)GEN_TOP((in_ecx + 0x12))) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00e05c80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e05c80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe05c80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((bool *)GEN_TOP(param_2)) = *((int *)GEN_TOP((in_ecx + 4))) != 0;
  return param_2;
}

/* ref: FUN_00e05cc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e05cc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe05cc0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e05d10 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e05d10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(int param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xe05d10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(int param_5 = (int)gen_a5;)
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *((int *)GEN_TOP(((int)this + 4)));
  iVar5 = (iVar4 - param_3) + param_5;
  uVar1 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar1 < iVar5) {
    iVar3 = uVar1 * 2;
    if (iVar3 <= iVar5) {
      iVar3 = iVar5;
    }
    F_00d95690(param_1,this,iVar3,4);
  }
  F_00da38f0(*(int *)this + (param_2 + param_5) * 4,*(int *)this + (param_3 + param_2) * 4,
               ((iVar4 - param_2) - param_3) * 4);
  puVar2 = ((undefined4 *)GEN_TOP((*(int *)this + param_2 * 4)));
  if (0 < param_5) {
    iVar3 = param_4 - (int)puVar2;
    iVar4 = param_5;
    do {
      *puVar2 = *((undefined4 *)GEN_TOP((iVar3 + (int)puVar2)));
      puVar2 = puVar2 + 1;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  *((int *)GEN_TOP(((int)this + 4))) = iVar5;
  return 0;
}

/* ref: FUN_00e05db0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e05db0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe05db0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dbd8b0(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e05dd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e05dd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe05dd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dbd930(this GEN_EDX_FWD,param_2);
  *((bool *)GEN_TOP(param_1)) = (int)uVar1 <= *((int *)GEN_TOP(((int)this + 8)));
  return param_1;
}

/* ref: FUN_00e05df0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e05df0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe05df0u, gen_a0, gen_a1, 0u, 0u);
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
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar3,4);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00e05e30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e05e30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe05e30u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e05e70 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e05e70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xe05e70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  F_00e05d10(this GEN_EDX_FWD,param_1,param_2,0,param_3,param_4);
  return;
}

/* ref: FUN_00e05e90 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e05e90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe05e90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  F_00e05e70(this GEN_EDX_FWD,param_1,param_2,param_3,1);
  return;
}

/* ref: FUN_00e05eb0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e05eb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe05eb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e05ef0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e05ef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe05ef0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00e05e90(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516a4),param_1,param_2);
  return;
}

/* ref: FUN_00e05f10 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e05f10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe05f10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e05f60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e05f60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe05f60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  if ((*(int *)this == *param_1) && (*((int *)GEN_TOP(((int)this + 4))) == param_1[1])) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00e05f90 */
GEN_LIB GEN_FRAME uint F_00e05f90(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe05f90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return (*param_1 >> 4) * -0x61c8864f & param_2;
}

/* ref: FUN_00e05fb0 */
GEN_LIB GEN_FRAME uint F_00e05fb0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe05fb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  *param_1 = 0xffffffff;
  return (uint)param_1;
}

/* ref: FUN_00e05fc0 */
GEN_LIB GEN_FRAME byte F_00e05fc0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe05fc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  return *param_1 != -1;
}

/* ref: FUN_00e05fd0 */
GEN_LIB GEN_FRAME uint F_00e05fd0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe05fd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00e06010 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e06010(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe06010u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  return (uint)this;
}

/* ref: FUN_00e06040 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e06040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe06040u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_3;
  return (uint)this;
}

/* ref: FUN_00e06080 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e06080(unsigned int gen_a0)
{
  GEN_ENTER(0xe06080u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  GEN_FRAME_DECL(0x5, 11);
  undefined4 uVar1;
  char * pcVar2;
  
  uVar1 = (*(undefined4 *)&gen_args[0]);
  pcVar2 = ((char *)GEN_TOP(F_00d929e0((*(undefined4 *)&gen_args[0]) GEN_EDX_ARG,(int)&(*(undefined4 *)&gen_args[0]) + 3)));
  if (*pcVar2 != '\0') {
    pcVar2 = ((char *)GEN_TOP(F_00d92650(&REFG(undefined, 0x15da420) GEN_EDX_ARG,&(*(undefined1 *)(gen_frame + 0x0)),uVar1)));
    if (*pcVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00e060d0 */
GEN_LIB GEN_FRAME uint F_00e060d0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe060d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  uint uVar1;
  
  switch((unsigned int)(uintptr_t)((&REFG(undefined, 0x114d578))[(int)(param_2 * 4)])) {
  case 1: ;
    return *((uint *)GEN_TOP(((int)param_1 + (uint)(byte)(&REFG(undefined, 0x114d579))[(int)(param_2 * 4)] * 4 + 0xc)));
  default: ;
    return 0;
  case 4: ;
    uVar1 = F_00e1a6a0(param_1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)param_1 + (uint)(byte)(&REFG(undefined, 0x114d579))[(int)(param_2 * 4)] * 4 + 0xc
                                  ))),(uint)(byte)(&REFG(undefined, 0x114d57a))[(int)(param_2 * 4)]);
    return uVar1;
  case 5: ;
    if (param_3 != 0) {
      uVar1 = F_00e1a240(param_1 GEN_EDX_ARG,param_3);
      uVar1 = F_00e1a640(param_1 GEN_EDX_ARG,uVar1);
      return uVar1;
    }
switchD_00e060e4_caseD_7: ;
    uVar1 = F_00e1a640(param_1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)param_1 + 8))));
    return uVar1;
  case 6: ;
    uVar1 = F_00e1a240(param_1 GEN_EDX_ARG,param_3);
    return uVar1;
  case 7: ;
    goto switchD_00e060e4_caseD_7;
  }
}

/* ref: FUN_00e06180 */
GEN_LIB GEN_FRAME uint F_00e06180(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xe06180u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = 0;
  switch((unsigned int)(uintptr_t)((&REFG(undefined, 0x114d578))[(int)(param_2 * 4)])) {
  case 1: ;
    uVar1 = *((uint *)GEN_TOP(((int)param_1 + (uint)(byte)(&REFG(undefined, 0x114d579))[(int)(param_2 * 4)] * 4 + 0xc)));
    break;
  case 2: ;
    if (param_3 == 0x19) {
      uVar1 = F_00e1a240(param_1 GEN_EDX_ARG,param_4);
    }
    else {
      uVar1 = F_00e060d0(param_1,param_3,param_4);
    }
    if (param_5 != 0) {
      uVar1 = F_00e1a6a0(param_1 GEN_EDX_ARG,uVar1,param_5);
    }
    uVar1 = F_00e1a670(param_1 GEN_EDX_ARG,uVar1);
    return uVar1;
  case 3: ;
    uVar3 = 0;
    iVar2 = param_3;
    goto LAB_00e0623b;
  case 4: ;
    uVar1 = F_00e1a6a0(param_1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)param_1 + (uint)(byte)(&REFG(undefined, 0x114d579))[(int)(param_2 * 4)] * 4 + 0xc
                                  ))),(uint)(byte)(&REFG(undefined, 0x114d57a))[(int)(param_2 * 4)]);
    break;
  case 5: ;
    uVar1 = F_00e060d0(param_1,param_3,param_4);
    uVar1 = F_00e1a640(param_1 GEN_EDX_ARG,uVar1);
    break;
  case 6: ;
  case 7: ;
    iVar2 = param_2;
    uVar3 = param_4;
LAB_00e0623b: ;
    uVar1 = F_00e060d0(param_1,iVar2,uVar3);
  }
  if (param_5 != 0) {
    uVar1 = F_00e1a6a0(param_1 GEN_EDX_ARG,uVar1,param_5);
  }
  return uVar1;
}

/* ref: FUN_00e06280 */
GEN_LIB GEN_FRAME uint F_00e06280(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xe06280u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  uint uVar1;
  
  if (param_4 != 0) {
    uVar1 = F_00d92610(param_4 GEN_EDX_ARG);
    uVar1 = F_00e06180(param_1,param_2,param_3,uVar1,param_5);
    return uVar1;
  }
  uVar1 = F_00e06180(param_1,param_2,param_3,0,param_5);
  return uVar1;
}

/* ref: FUN_00e062e0 */
GEN_LIB GEN_FRAME uint F_00e062e0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe062e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  int * piVar1;
  uint uVar2;
  undefined4 * in_ecx;
  int * piVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = 0;
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar2 = F_00d927e0(param_1 GEN_EDX_ARG);
  if (0 < (int)uVar2) {
    do {
      in_ecx = ((undefined4 *)GEN_TOP(F_00d92800(param_1 GEN_EDX_ARG,iVar5)));
      if (*(char *)(in_ecx + 3) == '\"') {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_2)) + 0xc))))(((int *)GEN_TOP(*param_2)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x0)),*in_ecx);
        piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0x28))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x4)))));
        if (piVar3 != ((int *)GEN_TOP(0x0))) {
          *((short *)GEN_TOP(((int)piVar3 + 6))) = *((short *)GEN_TOP(((int)piVar3 + 6))) + 1;
          piVar3[2] = piVar3[2] + 1;
        }
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x14))))(piVar3 GEN_EDX_ARG);
        uVar4 = F_00da61f0(in_ecx GEN_EDX_ARG);
        (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) + (uVar4 * uVar2 + 0xf & 0xfffffff0);
        *((short *)GEN_TOP(((int)piVar3 + 6))) = *((short *)GEN_TOP(((int)piVar3 + 6))) - 1;
        piVar1 = piVar3 + 2;
        *piVar1 = *piVar1 - 1;
        if (*piVar1 == 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar3)))(piVar3 GEN_EDX_ARG,1);
        }
      }
      iVar5 = (*(int *)(gen_frame + 0x8)) + 1;
      (*(int *)(gen_frame + 0x8)) = iVar5;
      uVar2 = F_00d927e0(param_1 GEN_EDX_ARG);
    } while (iVar5 < (int)uVar2);
    return (*(uint *)(gen_frame + 0xc));
  }
  return 0;
}

/* ref: FUN_00e063b0 */
GEN_LIB GEN_FRAME uint F_00e063b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe063b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  undefined * this;
  uint uVar1;
  
  this = ((undefined *)GEN_TOP(F_00e1f040(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1,param_2)));
  uVar1 = F_00e1f710(this GEN_EDX_ARG);
  F_00e06bd0(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
  return uVar1;
}

/* ref: FUN_00e063f0 */
GEN_LIB GEN_FRAME uint F_00e063f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xe063f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x60, 0, 4);
  undefined * this;
  uint uVar1;
  
  this = ((undefined *)GEN_TOP(F_00e08930(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_2,1,param_4)));
  uVar1 = F_00e09020(this GEN_EDX_ARG,param_1,param_3);
  F_00e089b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00e06430 */
GEN_LIB GEN_FRAME uint F_00e06430(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe06430u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x68, 8, 4);
  undefined4 in_ecx;
  undefined * this;
  LPVOID pvVar1;
  undefined * pvVar2;
  undefined * pvVar3;
  uint uVar4;
  
  this = ((undefined *)GEN_TOP(F_00e08930(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_2,0,param_3)));
  if (*param_1 == 0) {
    F_00e089b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    return 0;
  }
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))
                             (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,0x70)));
  *((undefined2 *)GEN_TOP(((int)pvVar2 + 4))) = 0x70;
  pvVar3 = ((undefined *)GEN_TOP(F_00e24780(pvVar2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x4c))))));
  pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x50)));
  if ((pvVar2 != ((undefined *)GEN_TOP(0x0))) && (pvVar2 != pvVar3)) {
    F_00d91a80(pvVar2 GEN_EDX_ARG);
  }
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x50))) = pvVar3;
  F_00e08de0(this GEN_EDX_ARG,&(*(int *)(gen_frame + 0x5c)),param_1);
  if (((*(int *)(gen_frame + 0x5c)) != 0) && ((*(int *)(gen_frame + 0x60)) != 0)) {
    F_00e086b0(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x50))));
    in_ecx = *((undefined4 *)GEN_TOP(((int)this + 0x50)));
    uVar4 = F_00d92610((*(int *)(gen_frame + 0x60)) GEN_EDX_ARG);
    F_00e242a0(in_ecx GEN_EDX_ARG,(*(int *)(gen_frame + 0x5c)),uVar4);
    pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x50)));
    F_00d919e0(pvVar2 GEN_EDX_ARG);
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x50))) != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x50))) GEN_EDX_ARG);
    }
    *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
    F_00e089b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    return (uint)pvVar2;
  }
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x50))) != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x50))) GEN_EDX_ARG);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  F_00e089b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00e06540 */
GEN_LIB GEN_FRAME uint F_00e06540(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe06540u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  piVar1 = REFG(int * PTR32, 0x15e3738);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e3738) + 0xc))))(REFG(int * PTR32, 0x15e3738) GEN_EDX_ARG);
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_ARG);
  uVar2 = F_00e063f0(param_1,uVar3,uVar2,param_2);
  return uVar2;
}

/* ref: FUN_00e06580 */
GEN_LIB GEN_FRAME uint F_00e06580(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe06580u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e3738) + 0x10))))(REFG(int * PTR32, 0x15e3738) GEN_EDX_ARG);
  uVar1 = F_00e06430(param_1,uVar1,param_2);
  return uVar1;
}

/* ref: FUN_00e065b0 */
GEN_LIB GEN_FRAME uint F_00e065b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe065b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00e065c0 */
GEN_LIB GEN_FRAME uint F_00e065c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe065c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00e065f0 */
GEN_LIB GEN_FRAME uint F_00e065f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe065f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00e06600 */
GEN_LIB GEN_FRAME uint F_00e06600(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe06600u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00e06690 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e06690(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe06690u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((bool *)GEN_TOP(param_2)) = (*((uint *)GEN_TOP((in_ecx + 4))) & 0x80000000) == 0;
  return param_2;
}

/* ref: FUN_00e066b0 */
GEN_LIB GEN_FRAME uint F_00e066b0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe066b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return (uint)((param_1 - 1 & param_1) == 0);
}

/* ref: FUN_00e06740 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e06740(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe06740u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00e06790 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e06790(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe06790u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00e067a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e067a0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe067a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00e067f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e067f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe067f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 uVar1;
  
  uVar1 = *((undefined4 *)GEN_TOP((*(int *)this + 4 + param_2 * 0x10)));
  *param_1 = *((undefined4 *)GEN_TOP((*(int *)this + param_2 * 0x10)));
  param_1[1] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00e06810 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e06810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe06810u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 uVar1;
  
  uVar1 = *((undefined4 *)GEN_TOP((*(int *)this + 0xc + param_2 * 0x10)));
  *param_1 = *((undefined4 *)GEN_TOP((*(int *)this + 8 + param_2 * 0x10)));
  param_1[1] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00e06830 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e06830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe06830u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  int iVar1;
  
  iVar1 = *(int *)this;
  *((undefined4 *)GEN_TOP((iVar1 + 8 + param_1 * 0x10))) = param_2;
  *((undefined4 *)GEN_TOP((iVar1 + 0xc + param_1 * 0x10))) = param_3;
  return param_1 * 2;
}

/* ref: FUN_00e06850 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e06850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe06850u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int * piVar2;
  
  iVar1 = param_1 + 1;
  if (iVar1 <= *((int *)GEN_TOP(((int)this + 8)))) {
    piVar2 = ((int *)GEN_TOP((iVar1 * 0x10 + *(int *)this)));
    do {
      if (*piVar2 != -1) {
        return 0;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 4;
    } while (iVar1 <= *((int *)GEN_TOP(((int)this + 8))));
  }
  return 0;
}

/* ref: FUN_00e06880 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e06880(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe06880u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  *((bool *)GEN_TOP(param_2)) = param_3 <= *((int *)GEN_TOP((in_ecx + 8)));
  return param_2;
}

/* ref: FUN_00e068a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e068a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xe068a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (*((int *)GEN_TOP(((int)this + 8))) < *((int *)GEN_TOP(((int)this + 4))) * 2) {
    F_00e07a00(this GEN_EDX_FWD,param_1,*((int *)GEN_TOP(((int)this + 8))) * 2 + 2);
  }
  iVar1 = *(int *)this;
  uVar3 = (param_2 >> 4) * -0x61c8864f & *((uint *)GEN_TOP(((int)this + 8)));
  iVar4 = uVar3 * 0x10;
  uVar2 = 1;
  if (*((int *)GEN_TOP((iVar1 + iVar4))) != -1) {
    do {
      if ((*((uint *)GEN_TOP((iVar1 + iVar4))) == param_2) && (*((int *)GEN_TOP((iVar1 + 4 + iVar4))) == param_3)) {
        uVar2 = 0;
        goto LAB_00e06912;
      }
      uVar3 = uVar3 + 1 & *((uint *)GEN_TOP(((int)this + 8)));
      iVar4 = uVar3 * 0x10;
    } while (*((int *)GEN_TOP((iVar4 + iVar1))) != -1);
    uVar2 = 1;
  }
LAB_00e06912: ;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + uVar2;
  *((uint *)GEN_TOP((iVar1 + uVar3 * 0x10))) = param_2;
  *((int *)GEN_TOP((iVar1 + 4 + uVar3 * 0x10))) = param_3;
  iVar1 = *(int *)this;
  *((undefined4 *)GEN_TOP((iVar1 + 8 + uVar3 * 0x10))) = param_4;
  *((undefined4 *)GEN_TOP((iVar1 + 0xc + uVar3 * 0x10))) = param_5;
  return uVar2;
}

/* ref: FUN_00e06940 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e06940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe06940u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint * puVar4;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  if (0 < (int)uVar1) {
    uVar3 = (param_1 >> 4) * -0x61c8864f & uVar1;
    puVar4 = ((uint *)GEN_TOP((uVar3 * 0x10 + *(int *)this)));
    uVar2 = *puVar4;
    while (uVar2 != 0xffffffff) {
      if ((*puVar4 == param_1) && (puVar4[1] == param_2)) {
        return uVar3;
      }
      uVar3 = uVar3 + 1 & uVar1;
      puVar4 = ((uint *)GEN_TOP((uVar3 * 0x10 + *(int *)this)));
      uVar2 = *puVar4;
    }
  }
  return uVar1 + 1;
}

/* ref: FUN_00e069a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e069a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xe069a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint * puVar6;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  if (0 < (int)uVar1) {
    iVar2 = *(int *)this;
    uVar5 = (param_2 >> 4) * -0x61c8864f & uVar1;
    puVar6 = ((uint *)GEN_TOP((uVar5 * 0x10 + iVar2)));
    uVar3 = *puVar6;
    while (uVar3 != 0xffffffff) {
      if ((*puVar6 == param_2) && (puVar6[1] == param_3)) {
        uVar4 = *((undefined4 *)GEN_TOP((iVar2 + 0xc + uVar5 * 0x10)));
        *param_1 = *((undefined4 *)GEN_TOP((iVar2 + 8 + uVar5 * 0x10)));
        param_1[1] = uVar4;
        return (uint)param_1;
      }
      uVar5 = uVar5 + 1 & uVar1;
      puVar6 = ((uint *)GEN_TOP((uVar5 * 0x10 + iVar2)));
      uVar3 = *puVar6;
    }
  }
  *param_1 = param_4;
  param_1[1] = param_5;
  return (uint)param_1;
}

/* ref: FUN_00e06a20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e06a20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe06a20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  int iVar1;
  uint uVar2;
  
  uVar2 = F_00e06940(this GEN_EDX_FWD,param_1,param_2);
  if ((int)uVar2 <= *((int *)GEN_TOP(((int)this + 8)))) {
    iVar1 = *(int *)this;
    *param_3 = *((undefined4 *)GEN_TOP((iVar1 + 8 + uVar2 * 0x10)));
    param_3[1] = *((undefined4 *)GEN_TOP((iVar1 + 0xc + uVar2 * 0x10)));
    return 0;
  }
  return 1;
}

/* ref: FUN_00e06a60 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e06a60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe06a60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
  *((undefined4 *)GEN_TOP((*(int *)this + param_1 * 0x10))) = 0xffffffff;
  uVar6 = *((uint *)GEN_TOP(((int)this + 8)));
  uVar2 = uVar6 + param_1 & uVar6;
  iVar1 = *((int *)GEN_TOP((*(int *)this + uVar2 * 0x10)));
  while (iVar1 != -1) {
    uVar2 = uVar2 + uVar6 & uVar6;
    iVar1 = *((int *)GEN_TOP((*(int *)this + uVar2 * 0x10)));
  }
  uVar3 = uVar2 + 1 & uVar6;
  uVar2 = param_1 + 1 & uVar6;
  iVar4 = uVar2 * 0x10;
  iVar1 = *((int *)GEN_TOP((*(int *)this + iVar4)));
  uVar5 = param_1;
  while (iVar1 != -1) {
    uVar6 = (*((uint *)GEN_TOP((*(int *)this + iVar4))) >> 4) * -0x61c8864f & uVar6;
    if ((((uVar2 < uVar3) || (uVar6 <= uVar5)) &&
        ((uVar5 <= uVar2 || ((uVar6 <= uVar5 && (uVar2 < uVar6)))))) &&
       ((uVar6 <= uVar5 || (uVar3 <= uVar6)))) {
      iVar1 = *(int *)this;
      *((undefined4 *)GEN_TOP((iVar1 + uVar5 * 0x10))) = *((undefined4 *)GEN_TOP((iVar1 + iVar4)));
      *((undefined4 *)GEN_TOP((iVar1 + 4 + uVar5 * 0x10))) = *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar4)));
      iVar1 = *(int *)this;
      *((undefined4 *)GEN_TOP((iVar1 + 8 + uVar5 * 0x10))) = *((undefined4 *)GEN_TOP((iVar1 + 8 + iVar4)));
      *((undefined4 *)GEN_TOP((iVar1 + 0xc + uVar5 * 0x10))) = *((undefined4 *)GEN_TOP((iVar1 + 0xc + iVar4)));
      *((undefined4 *)GEN_TOP((iVar4 + *(int *)this))) = 0xffffffff;
      uVar5 = uVar2;
    }
    uVar6 = *((uint *)GEN_TOP(((int)this + 8)));
    uVar2 = uVar2 + 1 & uVar6;
    iVar4 = uVar2 * 0x10;
    iVar1 = *((int *)GEN_TOP((iVar4 + *(int *)this)));
  }
  return 0;
}

/* ref: FUN_00e06b40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e06b40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe06b40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  uint uVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  uint * puVar5;
  int local_8;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
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
      local_8 = local_8 - 1;
    } while (local_8 != 0);
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00e06ba0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e06ba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe06ba0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint in_EAX = 0;
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 8))) + 1;
  if (0 < iVar1) {
    in_EAX = 0;
    do {
      *((undefined4 *)GEN_TOP((in_EAX + *(int *)this))) = 0xffffffff;
      in_EAX = in_EAX + 0x10;
      iVar1 = iVar1 - 1;
    } while (iVar1 != 0);
  }
  *((uint *)GEN_TOP(((int)this + 4))) = *((uint *)GEN_TOP(((int)this + 4))) & 0x80000000;
  return in_EAX;
}

/* ref: FUN_00e06bd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e06bd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe06bd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00e06ba0(this GEN_EDX_FWD);
  if ((*((uint *)GEN_TOP(((int)this + 4))) & 0x80000000) == 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))
                      (param_1 GEN_EDX_ARG,*(undefined4 *)this,(*((int *)GEN_TOP(((int)this + 8))) + 1) * 0x10);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0xffffffff;
  return uVar1;
}

/* ref: FUN_00e06c20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e06c20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe06c20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  *(undefined4 *)this = param_1;
  *((uint *)GEN_TOP(((int)this + 4))) = param_2 | 0x80000000;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3 - 1U;
  return param_3 - 1U;
}

/* ref: FUN_00e06c40 */
GEN_LIB GEN_FRAME uint F_00e06c40(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe06c40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
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
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e06c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe06c60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int iVar1;
  uint uVar2;
  
  uVar2 = param_2 >> 4;
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0x80000000;
  *((uint *)GEN_TOP(((int)this + 8))) = uVar2 - 1;
  if (uVar2 != 0) {
    iVar1 = 0;
    do {
      *((undefined4 *)GEN_TOP((iVar1 + *(int *)this))) = 0xffffffff;
      iVar1 = iVar1 + 0x10;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00e06ca0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e06ca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe06ca0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)this;
  *(undefined4 *)this = *param_1;
  uVar2 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  uVar3 = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  param_1[2] = uVar3;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00e06cd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e06cd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe06cd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    F_00d919e0(param_1 GEN_EDX_FWD);
  }
  *(undefined * PTR32 *)this = param_1;
  return (uint)this;
}

/* ref: FUN_00e06d20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e06d20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe06d20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  int * piVar2;
  int iVar3;
  
  iVar3 = param_3;
  if (param_3 < 0) {
    iVar3 = *((int *)GEN_TOP(((int)this + 4)));
  }
  if ((int)param_2 < iVar3) {
    piVar2 = ((int *)GEN_TOP((*(int *)this + param_2 * 8)));
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
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e06d90(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe06d90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_00e06df0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e06df0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined8 * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe06df0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = *in_ecx;
  *param_2 = *((undefined8 *)GEN_TOP((iVar1 + 8 + param_3 * 0x18)));
  param_2[1] = *((undefined8 *)GEN_TOP((iVar1 + param_3 * 0x18 + 0x10)));
  return (uint)param_2;
}

/* ref: FUN_00e06e20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e06e20(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xe06e20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  undefined8 * puVar1;
  
  puVar1 = ((undefined8 *)GEN_TOP((*in_ecx + 8 + param_2 * 0x18)));
  *puVar1 = CONCAT44(param_4,param_3);
  puVar1[1] = CONCAT44(param_6,param_5);
  return (uint)puVar1;
}

/* ref: FUN_00e06e50 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e06e50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe06e50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int * piVar2;
  
  iVar1 = param_1 + 1;
  if (iVar1 <= *((int *)GEN_TOP(((int)this + 8)))) {
    piVar2 = ((int *)GEN_TOP((*(int *)this + iVar1 * 0x18)));
    do {
      if (*piVar2 != -1) {
        return 0;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 6;
    } while (iVar1 <= *((int *)GEN_TOP(((int)this + 8))));
  }
  return 0;
}

/* ref: FUN_00e06e80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e06e80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe06e80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  *((bool *)GEN_TOP(param_2)) = param_3 <= *((int *)GEN_TOP((in_ecx + 8)));
  return param_2;
}

/* ref: FUN_00e06ea0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e06ea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0xe06ea0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  undefined8 * puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (*((int *)GEN_TOP(((int)this + 8))) < *((int *)GEN_TOP(((int)this + 4))) * 2) {
    F_00e074f0(this GEN_EDX_FWD,param_1,*((int *)GEN_TOP(((int)this + 8))) * 2 + 2);
  }
  iVar2 = *(int *)this;
  uVar4 = (param_2 >> 4) * -0x61c8864f & *((uint *)GEN_TOP(((int)this + 8)));
  iVar5 = uVar4 * 0x18;
  uVar3 = 1;
  if (*((int *)GEN_TOP((iVar2 + iVar5))) != -1) {
    do {
      if ((*((uint *)GEN_TOP((iVar2 + iVar5))) == param_2) && (*((int *)GEN_TOP((iVar2 + 4 + iVar5))) == param_3)) {
        uVar3 = 0;
        goto LAB_00e06f1a;
      }
      uVar4 = uVar4 + 1 & *((uint *)GEN_TOP(((int)this + 8)));
      iVar5 = uVar4 * 0x18;
    } while (*((int *)GEN_TOP((iVar5 + iVar2))) != -1);
    uVar3 = 1;
  }
LAB_00e06f1a: ;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + uVar3;
  iVar5 = uVar4 * 0x18;
  *((uint *)GEN_TOP((iVar2 + iVar5))) = param_2;
  *((int *)GEN_TOP((iVar2 + 4 + iVar5))) = param_3;
  puVar1 = ((undefined8 *)GEN_TOP((iVar5 + 8 + *(int *)this)));
  *puVar1 = CONCAT44(param_5,param_4);
  puVar1[1] = CONCAT44(param_7,param_6);
  return uVar3;
}

/* ref: FUN_00e06f60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e06f60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe06f60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint * puVar5;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  if (0 < (int)uVar1) {
    iVar2 = *(int *)this;
    uVar4 = (param_1 >> 4) * -0x61c8864f & uVar1;
    iVar3 = *((int *)GEN_TOP((iVar2 + uVar4 * 0x18)));
    while (iVar3 != -1) {
      puVar5 = ((uint *)GEN_TOP((iVar2 + uVar4 * 0x18)));
      if ((*puVar5 == param_1) && (puVar5[1] == param_2)) {
        return uVar4;
      }
      uVar4 = uVar4 + 1 & uVar1;
      iVar3 = *((int *)GEN_TOP((iVar2 + uVar4 * 0x18)));
    }
  }
  return uVar1 + 1;
}

/* ref: FUN_00e06fc0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e06fc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe06fc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint in_EAX = 0;
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 8))) + 1;
  if (0 < iVar1) {
    in_EAX = 0;
    do {
      *((undefined4 *)GEN_TOP((in_EAX + *(int *)this))) = 0xffffffff;
      in_EAX = in_EAX + 0x18;
      iVar1 = iVar1 - 1;
    } while (iVar1 != 0);
  }
  *((uint *)GEN_TOP(((int)this + 4))) = *((uint *)GEN_TOP(((int)this + 4))) & 0x80000000;
  return in_EAX;
}

/* ref: FUN_00e06ff0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e06ff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe06ff0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00e06fc0(this GEN_EDX_FWD);
  if ((*((uint *)GEN_TOP(((int)this + 4))) & 0x80000000) == 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))
                      (param_1 GEN_EDX_ARG,*(undefined4 *)this,(*((int *)GEN_TOP(((int)this + 8))) * 3 + 3) * 8);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0xffffffff;
  return uVar1;
}

/* ref: FUN_00e07050 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e07050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe07050u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(undefined * PTR32 *)this != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00e07070 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e07070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe07070u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e070c0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e070c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe070c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)this;
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    if (this_00 != param_1) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    *(undefined * PTR32 *)this = param_1;
    return;
  }
  *(undefined * PTR32 *)this = param_1;
  return;
}

/* ref: FUN_00e07160 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e07160(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe07160u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_00e07180 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e07180(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe07180u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*in_ecx + 8 + param_2 * 0xc)));
}

/* ref: FUN_00e071a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e071a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xe071a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (*((int *)GEN_TOP(((int)this + 8))) < *((int *)GEN_TOP(((int)this + 4))) * 2) {
    F_00e07420(this GEN_EDX_FWD,param_1,*((int *)GEN_TOP(((int)this + 8))) * 2 + 2);
  }
  iVar1 = *(int *)this;
  uVar3 = (param_2 >> 4) * -0x61c8864f & *((uint *)GEN_TOP(((int)this + 8)));
  iVar4 = uVar3 * 0xc;
  uVar2 = 1;
  if (*((int *)GEN_TOP((iVar1 + iVar4))) != -1) {
    do {
      if ((*((uint *)GEN_TOP((iVar1 + iVar4))) == param_2) && (*((int *)GEN_TOP((iVar1 + 4 + iVar4))) == param_3)) {
        uVar2 = 0;
        goto LAB_00e07216;
      }
      uVar3 = uVar3 + 1 & *((uint *)GEN_TOP(((int)this + 8)));
      iVar4 = uVar3 * 0xc;
    } while (*((int *)GEN_TOP((iVar4 + iVar1))) != -1);
    uVar2 = 1;
  }
LAB_00e07216: ;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + uVar2;
  iVar4 = uVar3 * 0xc;
  *((uint *)GEN_TOP((iVar1 + iVar4))) = param_2;
  *((int *)GEN_TOP((iVar1 + 4 + iVar4))) = param_3;
  *((undefined4 *)GEN_TOP((iVar4 + 8 + *(int *)this))) = param_4;
  return uVar2;
}

/* ref: FUN_00e07250 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e07250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe07250u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint * puVar5;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  if (0 < (int)uVar1) {
    iVar2 = *(int *)this;
    uVar4 = (param_1 >> 4) * -0x61c8864f & uVar1;
    iVar3 = *((int *)GEN_TOP((iVar2 + uVar4 * 0xc)));
    while (iVar3 != -1) {
      puVar5 = ((uint *)GEN_TOP((iVar2 + uVar4 * 0xc)));
      if ((*puVar5 == param_1) && (puVar5[1] == param_2)) {
        return uVar4;
      }
      uVar4 = uVar4 + 1 & uVar1;
      iVar3 = *((int *)GEN_TOP((iVar2 + uVar4 * 0xc)));
    }
  }
  return uVar1 + 1;
}

/* ref: FUN_00e072b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e072b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe072b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint * puVar5;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  if (0 < (int)uVar1) {
    iVar2 = *(int *)this;
    uVar4 = (param_1 >> 4) * -0x61c8864f & uVar1;
    iVar3 = *((int *)GEN_TOP((iVar2 + uVar4 * 0xc)));
    while (iVar3 != -1) {
      puVar5 = ((uint *)GEN_TOP((iVar2 + uVar4 * 0xc)));
      if ((*puVar5 == param_1) && (puVar5[1] == param_2)) {
        return *((uint *)GEN_TOP((iVar2 + 8 + uVar4 * 0xc)));
      }
      uVar4 = uVar4 + 1 & uVar1;
      iVar3 = *((int *)GEN_TOP((iVar2 + uVar4 * 0xc)));
    }
  }
  return param_3;
}

/* ref: FUN_00e07310 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e07310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe07310u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
  *((undefined4 *)GEN_TOP((*(int *)this + param_1 * 0xc))) = 0xffffffff;
  uVar7 = *((uint *)GEN_TOP(((int)this + 8)));
  uVar4 = uVar7 + param_1 & uVar7;
  iVar1 = *((int *)GEN_TOP((*(int *)this + uVar4 * 0xc)));
  while (iVar1 != -1) {
    uVar4 = uVar4 + uVar7 & uVar7;
    iVar1 = *((int *)GEN_TOP((*(int *)this + uVar4 * 0xc)));
  }
  uVar5 = uVar4 + 1 & uVar7;
  uVar6 = param_1 + 1 & uVar7;
  uVar4 = uVar6 * 0xc;
  iVar1 = *((int *)GEN_TOP((*(int *)this + uVar4)));
  uVar3 = param_1;
  while (iVar1 != -1) {
    iVar1 = *(int *)this;
    uVar7 = (*((uint *)GEN_TOP((iVar1 + uVar4))) >> 4) * -0x61c8864f & uVar7;
    param_1 = uVar3;
    if ((((uVar6 < uVar5) || (uVar7 <= uVar3)) &&
        ((uVar3 <= uVar6 || ((uVar7 <= uVar3 && (uVar6 < uVar7)))))) &&
       ((uVar7 <= uVar3 || (uVar5 <= uVar7)))) {
      iVar2 = uVar3 * 0xc;
      *((undefined4 *)GEN_TOP((iVar2 + iVar1))) = *((undefined4 *)GEN_TOP((iVar1 + uVar4)));
      *((undefined4 *)GEN_TOP((iVar2 + 4 + iVar1))) = *((undefined4 *)GEN_TOP((iVar1 + 4 + uVar4)));
      *((undefined4 *)GEN_TOP((iVar2 + 8 + *(int *)this))) = *((undefined4 *)GEN_TOP((*(int *)this + 8 + uVar4)));
      *((undefined4 *)GEN_TOP((uVar4 + *(int *)this))) = 0xffffffff;
      param_1 = uVar6;
    }
    uVar7 = *((uint *)GEN_TOP(((int)this + 8)));
    uVar6 = uVar6 + 1 & uVar7;
    uVar4 = uVar6 * 0xc;
    uVar3 = param_1;
    iVar1 = *((int *)GEN_TOP((uVar4 + *(int *)this)));
  }
  return uVar4;
}

/* ref: FUN_00e073f0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e073f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe073f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint in_EAX = 0;
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 8))) + 1;
  if (0 < iVar1) {
    in_EAX = 0;
    do {
      *((undefined4 *)GEN_TOP((in_EAX + *(int *)this))) = 0xffffffff;
      in_EAX = in_EAX + 0xc;
      iVar1 = iVar1 - 1;
    } while (iVar1 != 0);
  }
  *((uint *)GEN_TOP(((int)this + 4))) = *((uint *)GEN_TOP(((int)this + 4))) & 0x80000000;
  return in_EAX;
}

/* ref: FUN_00e07420 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e07420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe07420u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
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
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  piVar2 = *(int * PTR32 *)this;
  iVar6 = *((int *)GEN_TOP(((int)this + 8))) + 1;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD,iVar7 * 0xc);
  if (uVar3 != 0) {
    *(uint *)this = uVar3;
    if (0 < iVar7) {
      iVar4 = 0;
      iVar5 = iVar7;
      do {
        *((undefined4 *)GEN_TOP((iVar4 + *(int *)this))) = 0xffffffff;
        iVar4 = iVar4 + 0xc;
        iVar5 = iVar5 - 1;
      } while (iVar5 != 0);
    }
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    *((int *)GEN_TOP(((int)this + 8))) = iVar7 - 1;
    piVar8 = piVar2;
    param_2 = iVar6;
    if (0 < iVar6) {
      do {
        if (*piVar8 != -1) {
          F_00e071a0(this GEN_EDX_ARG,param_1,*piVar8,piVar8[1],piVar8[2]);
        }
        iVar7 = param_2 - 1;
        piVar8 = piVar8 + 3;
        param_2 = iVar7;
      } while (iVar7 != 0);
    }
    if ((uVar1 & 0x80000000) == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_ARG,piVar2,iVar6 * 0xc);
    }
    return 0;
  }
  return 1;
}

/* ref: FUN_00e074f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e074f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe074f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
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
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  piVar2 = *(int * PTR32 *)this;
  iVar6 = *((int *)GEN_TOP(((int)this + 8))) + 1;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD,iVar7 * 0x18);
  if (uVar3 != 0) {
    *(uint *)this = uVar3;
    if (0 < iVar7) {
      iVar4 = 0;
      iVar5 = iVar7;
      do {
        *((undefined4 *)GEN_TOP((iVar4 + *(int *)this))) = 0xffffffff;
        iVar4 = iVar4 + 0x18;
        iVar5 = iVar5 - 1;
      } while (iVar5 != 0);
    }
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    *((int *)GEN_TOP(((int)this + 8))) = iVar7 - 1;
    piVar8 = piVar2;
    param_2 = iVar6;
    if (0 < iVar6) {
      do {
        if (*piVar8 != -1) {
          F_00e06ea0(this GEN_EDX_ARG,param_1,*piVar8,piVar8[1],(int)*(undefined8 *)(piVar8 + 2),
                       (int)((ulonglong)*(undefined8 *)(piVar8 + 2) >> 0x20),
                       (int)*(undefined8 *)(piVar8 + 4),
                       (int)((ulonglong)*(undefined8 *)(piVar8 + 4) >> 0x20));
        }
        iVar7 = param_2 - 1;
        piVar8 = piVar8 + 6;
        param_2 = iVar7;
      } while (iVar7 != 0);
    }
    if ((uVar1 & 0x80000000) == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_ARG,piVar2,iVar6 * 0x18);
    }
    return 0;
  }
  return 1;
}

/* ref: FUN_00e075e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e075e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe075e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 << 4);
  return uVar1;
}

/* ref: FUN_00e07600 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e07600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe07600u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00e07620 */
GEN_LIB GEN_FRAME uint F_00e07620(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe07620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + param_1;
}

/* ref: FUN_00e07660 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e07660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe07660u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 0xc);
  return uVar1;
}

/* ref: FUN_00e07690 */
GEN_LIB GEN_FRAME uint F_00e07690(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe07690u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  *((short *)GEN_TOP((uVar2 + 4))) = (short)param_1;
  return uVar2;
}

/* ref: FUN_00e076c0 */
GEN_LIB GEN_FRAME uint F_00e076c0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe076c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  *((short *)GEN_TOP((uVar2 + 4))) = (short)param_1;
  return uVar2;
}

/* ref: FUN_00e076f0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e076f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe076f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x40)));
  if (puVar3 < puVar3 + *((int *)GEN_TOP(((int)this + 0x44))) * 2) {
    do {
      uVar1 = *puVar3;
      puVar2 = ((undefined4 *)GEN_TOP(F_00d92c00(((undefined *)GEN_TOP(puVar3[1])) GEN_EDX_FWD,((char *)REFP(0x114d4a8)))));
      ((code *)*((gen_code32 *)GEN_TOP(*puVar2)))(uVar1);
      puVar3 = puVar3 + 2;
    } while (puVar3 < ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x40))) + *((int *)GEN_TOP(((int)this + 0x44))) * 8))));
  }
  return 0;
}

/* ref: FUN_00e07770 */
GEN_LIB GEN_FRAME uint F_00e07770(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe07770u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  return uVar2;
}

/* ref: FUN_00e07790 */
GEN_LIB GEN_FRAME unsigned int F_00e07790(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe07790u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0xc);
  }
  return;
}

/* ref: FUN_00e077e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e077e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xe077e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  uint uVar1;
  
  uVar1 = F_00e068a0(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00e07810 */
GEN_LIB GEN_FRAME uint F_00e07810(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe07810u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  return uVar2;
}

/* ref: FUN_00e07830 */
GEN_LIB GEN_FRAME unsigned int F_00e07830(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe07830u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0xc);
  }
  return;
}

/* ref: FUN_00e07860 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e07860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe07860u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00e06940(this GEN_EDX_FWD,param_2,param_3);
  *((bool *)GEN_TOP(param_1)) = (int)uVar1 <= *((int *)GEN_TOP(((int)this + 8)));
  return param_1;
}

/* ref: FUN_00e07890 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e07890(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe07890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_00e078b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e078b0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe078b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*in_ecx + 8 + param_2 * 0xc)));
}

/* ref: FUN_00e078e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e078e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6))
{
  GEN_ENTER(0xe078e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  uint uVar1;
  
  uVar1 = F_00e06ea0(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2,param_3,param_4,param_5,param_6);
  return uVar1;
}

/* ref: FUN_00e07950 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e07950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe07950u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e079a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e079a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe079a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00e06c60(this GEN_EDX_FWD,param_1,param_2);
  return (uint)this;
}

/* ref: FUN_00e079c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e079c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe079c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00e06940(this GEN_EDX_FWD,param_1,param_2);
  if ((int)uVar1 <= *((int *)GEN_TOP(((int)this + 8)))) {
    F_00e06a60(this GEN_EDX_ARG,uVar1);
    return 0;
  }
  return 1;
}

/* ref: FUN_00e07a00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e07a00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe07a00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
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
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  piVar2 = *(int * PTR32 *)this;
  iVar6 = *((int *)GEN_TOP(((int)this + 8))) + 1;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD,iVar7 << 4);
  if (uVar3 != 0) {
    *(uint *)this = uVar3;
    if (0 < iVar7) {
      iVar4 = 0;
      iVar5 = iVar7;
      do {
        *((undefined4 *)GEN_TOP((iVar4 + *(int *)this))) = 0xffffffff;
        iVar4 = iVar4 + 0x10;
        iVar5 = iVar5 - 1;
      } while (iVar5 != 0);
    }
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    *((int *)GEN_TOP(((int)this + 8))) = iVar7 - 1;
    piVar8 = piVar2;
    param_2 = iVar6;
    if (0 < iVar6) {
      do {
        if (*piVar8 != -1) {
          F_00e068a0(this GEN_EDX_ARG,param_1,*piVar8,piVar8[1],piVar8[2],piVar8[3]);
        }
        iVar7 = param_2 - 1;
        piVar8 = piVar8 + 4;
        param_2 = iVar7;
      } while (iVar7 != 0);
    }
    if ((uVar1 & 0x80000000) == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_ARG,piVar2,iVar6 * 0x10);
    }
    return 0;
  }
  return 1;
}

/* ref: FUN_00e07ae0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e07ae0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe07ae0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((int *)GEN_TOP((in_ecx + 4))) = *((int *)GEN_TOP((in_ecx + 4))) - param_2;
  return param_2;
}

/* ref: FUN_00e07af0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e07af0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe07af0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00e073f0(this GEN_EDX_FWD);
  if ((*((uint *)GEN_TOP(((int)this + 4))) & 0x80000000) == 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))
                      (param_1 GEN_EDX_ARG,*(undefined4 *)this,(*((int *)GEN_TOP(((int)this + 8))) * 3 + 3) * 4);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0xffffffff;
  return uVar1;
}

/* ref: FUN_00e07b40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e07b40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe07b40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  uint uVar2;
  
  iVar1 = 8;
  if (8 < param_2 * 2) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_2 * 2);
  }
  uVar2 = F_00e07420(this GEN_EDX_FWD,param_1,iVar1);
  return uVar2;
}

/* ref: FUN_00e07b70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e07b70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe07b70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00e072b0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD,param_1,param_2,0xffffffff);
  return uVar1;
}

/* ref: FUN_00e07b90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e07b90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe07b90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = F_00e07250(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD,param_1,param_2);
  iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 8 + uVar6 * 0xc)));
  uVar6 = F_00e07310(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,uVar6);
  if (iVar1 != -1) {
    iVar2 = *(int *)this;
    iVar5 = iVar1 * 0xc;
    iVar3 = *((int *)GEN_TOP((iVar5 + 8 + iVar2)));
    iVar4 = iVar1;
    while (iVar3 != -1) {
      iVar4 = *((int *)GEN_TOP((iVar2 + 8 + iVar5)));
      iVar5 = iVar4 * 0xc;
      iVar3 = *((int *)GEN_TOP((iVar2 + 8 + iVar5)));
    }
    uVar6 = iVar4 * 3;
    *((undefined4 *)GEN_TOP((iVar2 + 8 + iVar4 * 0xc))) = *((undefined4 *)GEN_TOP(((int)this + 0x18)));
    *((int *)GEN_TOP(((int)this + 0x18))) = iVar1;
  }
  return uVar6;
}

/* ref: FUN_00e07c00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e07c00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe07c00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  uint uVar2;
  
  iVar1 = 8;
  if (8 < param_2 * 2) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_2 * 2);
  }
  uVar2 = F_00e074f0(this GEN_EDX_FWD,param_1,iVar1);
  return uVar2;
}

/* ref: FUN_00e07c30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e07c30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe07c30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00e071a0(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00e07c50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e07c50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe07c50u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e07c90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e07c90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe07c90u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e07cd0 */
GEN_LIB GEN_FRAME unsigned int F_00e07cd0(GEN_P(undefined8 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined8 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe07cd0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e07d10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e07d10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe07d10u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e07d70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e07d70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe07d70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  int * this_00;
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 in_ecx;
  int iVar3;
  byte bVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  uint uVar7;
  char * pcVar8;
  uint uVar9;
  uint local_8;
  
  puVar5 = (*(undefined4 * PTR32 *)&gen_args[0]);
  this_00 = ((int *)GEN_TOP(((int)this + 0xc)));
  local_8 = 0;
  uVar7 = F_00e07b70(this_00 GEN_EDX_FWD,*(*(undefined4 * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[0])[1]);
  puVar6 = (*(undefined4 * PTR32 *)&gen_args[1]);
  uVar9 = local_8;
  while (uVar7 != 0xffffffff) {
    iVar3 = uVar7 * 0xc;
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*this_00 + iVar3)));
    uVar2 = *((undefined4 *)GEN_TOP((*this_00 + 4 + iVar3)));
    *puVar1 = *(*(undefined4 * PTR32 *)&gen_args[1]);
    if ((char)uVar2 != '\0') {
      puVar1[1] = (*(undefined4 * PTR32 *)&gen_args[1])[1];
    }
    uVar9 = uVar9 + ((char)((uint)uVar2 >> 8) != '\0');
    uVar7 = *((uint *)GEN_TOP((*this_00 + 8 + iVar3)));
  }
  F_00e07b90(this_00 GEN_EDX_ARG,*puVar5,puVar5[1]);
  uVar2 = *puVar6;
  in_ecx = puVar6[1];
  pcVar8 = ((char *)GEN_TOP(F_00d929e0(in_ecx GEN_EDX_ARG,(int)&(*(undefined4 * PTR32 *)&gen_args[1]) + 3)));
  if ((*pcVar8 == '\0') ||
     (pcVar8 = ((char *)GEN_TOP(F_00d92650(&REFG(undefined, 0x15da420) GEN_EDX_ARG,(int)&(*(undefined4 * PTR32 *)&gen_args[0]) + 3,in_ecx))), *pcVar8 == '\0')) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar9 = F_00e06ea0(((undefined *)GEN_TOP(((int)this + 0x28))) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),*puVar5,puVar5[1],uVar2,
                       in_ecx,-(uint)bVar4 & uVar9,(*(undefined4 *)&gen_args[2]));
  return uVar9;
}

/* ref: FUN_00e07e80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e07e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe07e80u, gen_a0, gen_a1, 0u, 0u);
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
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar3,0x10);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00e07ec0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e07ec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe07ec0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00e079a0(this GEN_EDX_FWD,param_1,param_2);
  return (uint)this;
}

/* ref: FUN_00e07ef0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e07ef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe07ef0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00e07c00(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1);
  return uVar1;
}

/* ref: FUN_00e07f10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e07f10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe07f10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00e07b40(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1);
  return uVar1;
}

/* ref: FUN_00e07f30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e07f30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(uint * param_6, unsigned int gen_a6))
{
  GEN_ENTER(0xe07f30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(uint * param_6 = (uint *)(uintptr_t)gen_a6;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 8))) < *((int *)GEN_TOP(((int)this + 4))) * 2) {
    uVar1 = F_00e07a00(this GEN_EDX_FWD,param_1,*((int *)GEN_TOP(((int)this + 8))) * 2 + 2);
    *param_6 = uVar1;
    if (uVar1 != 0) {
      return 0;
    }
  }
  else {
    *param_6 = 0;
  }
  uVar1 = F_00e068a0(this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_00e07fa0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e07fa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xe07fa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  int iVar1;
  uint uVar2;
  
  if (*((int *)GEN_TOP(((int)this + 8))) < *((int *)GEN_TOP(((int)this + 4))) * 2) {
    F_00e07a00(this GEN_EDX_FWD,param_1,*((int *)GEN_TOP(((int)this + 8))) * 2 + 2);
  }
  iVar1 = *(int *)this;
  uVar2 = (param_2 >> 4) * -0x61c8864f;
  while ((uVar2 = uVar2 & *((uint *)GEN_TOP(((int)this + 8))), *((uint *)GEN_TOP((iVar1 + uVar2 * 0x10))) != param_2 ||
         (*((int *)GEN_TOP((iVar1 + 4 + uVar2 * 0x10))) != param_3))) {
    if (*((int *)GEN_TOP((iVar1 + uVar2 * 0x10))) == -1) {
      *((uint *)GEN_TOP((iVar1 + uVar2 * 0x10))) = param_2;
      *((int *)GEN_TOP((iVar1 + 4 + uVar2 * 0x10))) = param_3;
      iVar1 = *(int *)this;
      *((undefined4 *)GEN_TOP((iVar1 + 8 + uVar2 * 0x10))) = param_4;
      *((undefined4 *)GEN_TOP((iVar1 + 0xc + uVar2 * 0x10))) = param_5;
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
      return 0;
    }
    uVar2 = uVar2 + 1;
  }
  return 0;
}

/* ref: FUN_00e08020 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e08020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe08020u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  uint uVar2;
  
  iVar1 = 8;
  if (8 < param_2 * 2) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_2 * 2);
  }
  uVar2 = F_00e07a00(this GEN_EDX_FWD,param_1,iVar1);
  return uVar2;
}

/* ref: FUN_00e08050 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e08050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined8 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe08050u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e080a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e080a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe080a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  uVar1 = F_00e073f0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0xffffffff;
  return uVar1;
}

/* ref: FUN_00e080c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e080c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe080c0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e08100 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e08100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe08100u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e08140 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e08140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe08140u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e08180 */
GEN_LIB GEN_FRAME unsigned int F_00e08180(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe08180u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      if (iVar1 != 0) {
        *((undefined4 *)GEN_TOP((iVar1 + 8))) = 0xffffffff;
      }
      iVar1 = iVar1 + 0xc;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00e081a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e081a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe081a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 0x38))) == (*((uint *)GEN_TOP(((int)this + 0x3c))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),((int *)GEN_TOP(((int)this + 0x34))),4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x34))) + *((int *)GEN_TOP(((int)this + 0x38))) * 4)));
  *puVar1 = param_1;
  *((int *)GEN_TOP(((int)this + 0x38))) = *((int *)GEN_TOP(((int)this + 0x38))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00e081e0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e081e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe081e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x1c, 4);
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int * piVar6;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 0x30)));
  iVar4 = 0;
  if (-1 < iVar3) {
    piVar6 = *((int * PTR32 *)GEN_TOP(((int)this + 0x28)));
    do {
      if (*piVar6 != -1) break;
      iVar4 = iVar4 + 1;
      piVar6 = piVar6 + 6;
    } while (iVar4 <= iVar3);
  }
  if (iVar4 <= iVar3) {
    do {
      uVar1 = *((undefined8 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x28))) + 8 + iVar4 * 0x18)));
      (*(undefined * PTR32 *)(gen_frame + 0x4)) = ((undefined *)GEN_TOP(((ulonglong)uVar1 >> 0x20)));
      lVar2 = *((longlong *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x28))) + iVar4 * 0x18 + 0x10)));
      uVar5 = F_00d92c00((*(undefined * PTR32 *)(gen_frame + 0x4)) GEN_EDX_FWD,((char *)REFP(0x114d4a8)));
      (*(int *)(gen_frame + 0x0)) = (int)uVar1;
      if (uVar5 != 0) {
        if (*((uint *)GEN_TOP(((int)this + 0x44))) == (*((uint *)GEN_TOP(((int)this + 0x48))) & 0x3fffffff)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516ac),((int *)GEN_TOP(((int)this + 0x40))),8);
        }
        piVar6 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x40))) + *((int *)GEN_TOP(((int)this + 0x44))) * 8)));
        *piVar6 = (*(int *)(gen_frame + 0x0));
        piVar6[1] = (int)(*(undefined * PTR32 *)(gen_frame + 0x4));
        *((int *)GEN_TOP(((int)this + 0x44))) = *((int *)GEN_TOP(((int)this + 0x44))) + 1;
      }
      (*(short *)(gen_frame + 0x8)) = (short)lVar2;
      if (0 < (*(short *)(gen_frame + 0x8))) {
        if (lVar2 < 0) {
          uVar5 = F_00d929c0((*(undefined * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
          *((short *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + 4))) = (short)uVar5;
        }
        else {
          (*(undefined2 *)(gen_frame + 0xc)) = (undefined2)((ulonglong)lVar2 >> 0x20);
          *((undefined2 *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + 4))) = (*(undefined2 *)(gen_frame + 0xc));
        }
        *((short *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + 6))) = (*(short *)(gen_frame + 0x8));
      }
      iVar3 = *param_1;
      uVar5 = F_00d92610((*(undefined * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
      ((code *)*((gen_code32 *)GEN_TOP((iVar3 + 0x10))))(param_1,(*(int *)(gen_frame + 0x0)),uVar5);
      F_00d929e0((*(undefined * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG,&(*(undefined1 *)(gen_frame + 0x17)));
      iVar3 = *((int *)GEN_TOP(((int)this + 0x30)));
      iVar4 = iVar4 + 1;
      if (iVar4 <= iVar3) {
        piVar6 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x28))) + iVar4 * 0x18)));
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
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e08320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe08320u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  F_00e080a0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  F_00e06fc0(((undefined *)GEN_TOP(((int)this + 0x28))) GEN_EDX_ARG);
  *param_1 = 0;
  param_1[1] = 0;
  return (uint)param_1;
}

/* ref: FUN_00e08360 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e08360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xe08360u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  uint uVar1;
  
  uVar1 = F_00e07f30(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2,param_3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_00e08390 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e08390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xe08390u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  F_00e07fa0(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2,param_3,param_4);
  return;
}

/* ref: FUN_00e083c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e083c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe083c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00e08020(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1);
  return uVar1;
}

/* ref: FUN_00e083e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e083e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe083e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dbd8b0(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e08400 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e08400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined8 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe08400u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e08450 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e08450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe08450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0xffffffff;
  if (param_1 != 0) {
    F_00e07c00(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1);
  }
  return (uint)this;
}

/* ref: FUN_00e08490 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e08490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe08490u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0xffffffff;
  if (param_1 != 0) {
    F_00e07b40(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1);
  }
  return (uint)this;
}

/* ref: FUN_00e084d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e084d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe084d0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e08510 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e08510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe08510u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e08550 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e08550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe08550u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e08590 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e08590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe08590u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,0xc);
  }
  iVar1 = *(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 0xc;
  if (iVar1 != 0) {
    *((undefined4 *)GEN_TOP((iVar1 + 8))) = 0xffffffff;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = iVar1 + 1;
  return *(int *)this + iVar1 * 0xc;
}

/* ref: FUN_00e08630 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e08630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe08630u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  undefined8 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 0x44))) == (*((uint *)GEN_TOP(((int)this + 0x48))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),((int *)GEN_TOP(((int)this + 0x40))),0xc);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x40))) + *((int *)GEN_TOP(((int)this + 0x44))) * 0xc)));
  if (puVar1 != ((undefined8 *)GEN_TOP(0x0))) {
    *puVar1 = CONCAT44(param_2,param_1);
    *(undefined4 *)(puVar1 + 1) = param_3;
  }
  *((int *)GEN_TOP(((int)this + 0x44))) = *((int *)GEN_TOP(((int)this + 0x44))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00e08690 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e08690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe08690u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dbd8b0(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e086b0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e086b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe086b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  int iVar6;
  undefined4 local_18;
  undefined * pvStack_14;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 0x30)));
  iVar6 = 0;
  if (-1 < iVar3) {
    piVar5 = *((int * PTR32 *)GEN_TOP(((int)this + 0x28)));
    do {
      if (*piVar5 != -1) break;
      iVar6 = iVar6 + 1;
      piVar5 = piVar5 + 6;
    } while (iVar6 <= iVar3);
  }
  if (iVar6 <= iVar3) {
    do {
      uVar2 = *((undefined8 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x28))) + 8 + iVar6 * 0x18)));
      pvStack_14 = ((undefined *)GEN_TOP(((ulonglong)uVar2 >> 0x20)));
      uVar4 = F_00d92610(pvStack_14 GEN_EDX_FWD);
      local_18 = (undefined4)uVar2;
      F_00dbd8b0(((undefined *)GEN_TOP((param_1 + 0x10))) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),local_18,uVar4);
      uVar4 = F_00d92c00(pvStack_14 GEN_EDX_ARG,((char *)REFP(0x114d4a8)));
      if (uVar4 != 0) {
        if (*((uint *)GEN_TOP((param_1 + 0x68))) == (*((uint *)GEN_TOP((param_1 + 0x6c))) & 0x3fffffff)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516ac),((int *)GEN_TOP((param_1 + 100))),8);
        }
        puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 100))) + *((int *)GEN_TOP((param_1 + 0x68))) * 8)));
        *puVar1 = local_18;
        puVar1[1] = pvStack_14;
        *((int *)GEN_TOP((param_1 + 0x68))) = *((int *)GEN_TOP((param_1 + 0x68))) + 1;
      }
      iVar3 = *((int *)GEN_TOP(((int)this + 0x30)));
      iVar6 = iVar6 + 1;
      if (iVar6 <= iVar3) {
        piVar5 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x28))) + iVar6 * 0x18)));
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
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e087b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe087b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_00e07af0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac));
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

/* ref: FUN_00e08800 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e08800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe08800u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x14)));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516a4),*((undefined4 *)GEN_TOP(((int)this + 0xc))),iVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0x80000000;
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar2 << 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00e08880 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e08880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe08880u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0xffffffff;
  if (param_1 != 0) {
    F_00e08020(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1);
  }
  return (uint)this;
}

/* ref: FUN_00e088e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e088e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe088e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,0xc);
  }
  iVar1 = *(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 0xc;
  if (iVar1 != 0) {
    *((undefined4 *)GEN_TOP((iVar1 + 8))) = 0xffffffff;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = iVar1 + 1;
  return *(int *)this + iVar1 * 0xc;
}

/* ref: FUN_00e08930 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e08930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe08930u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0x80000000;
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    F_00d919e0(param_1 GEN_EDX_FWD);
  }
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x4c))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = param_3;
  return (uint)this;
}

/* ref: FUN_00e089b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e089b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe089b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x50))) != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x50))) GEN_EDX_FWD);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x4c))) != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x4c))) GEN_EDX_ARG);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x48)));
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x40))),uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0x80000000;
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x3c)));
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x34))),uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0x80000000;
  F_00e06ff0(((undefined *)GEN_TOP(((int)this + 0x28))) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
  F_00e07af0(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x14)));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0xc))),(uVar1 & 0x3fffffff) * 0xc);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0x80000000;
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  return uVar1;
}

/* ref: FUN_00e08ac0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e08ac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe08ac0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x18)));
  if (uVar2 != 0xffffffff) {
    *((undefined4 *)GEN_TOP(((int)this + 0x18))) = *((undefined4 *)GEN_TOP((*(int *)this + 8 + uVar2 * 0xc)));
    return uVar2;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 4)));
  if (uVar2 == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,0xc);
  }
  iVar1 = *(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 0xc;
  if (iVar1 != 0) {
    *((undefined4 *)GEN_TOP((iVar1 + 8))) = 0xffffffff;
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return uVar2;
}

/* ref: FUN_00e08b20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e08b20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe08b20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_00e072b0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD,param_1,param_2,0xffffffff);
  uVar3 = F_00e08ac0(this GEN_EDX_ARG);
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + uVar3 * 0xc)));
  *puVar1 = *param_3;
  puVar1[1] = param_3[1];
  puVar1[2] = uVar2;
  uVar2 = F_00e071a0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2,uVar3);
  return uVar2;
}

/* ref: FUN_00e08b80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e08b80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe08b80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  undefined8 * puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined4 * puVar5;
  int iVar6;
  int * piVar7;
  uint uVar8;
  int iVar9;
  
  if ((*((int *)GEN_TOP(((int)this + 0x54))) != 0) && (*((char *)GEN_TOP(((int)param_1 + 5))) != '\0')) {
    iVar9 = 0;
    if (0 < *((int *)GEN_TOP(((int)this + 0x38)))) {
      piVar7 = *((int * PTR32 *)GEN_TOP(((int)this + 0x34)));
      do {
        if ((*piVar7 == *param_2) && (piVar7[1] == param_2[1])) {
          if (iVar9 != -1) {
            return 1;
          }
          break;
        }
        iVar9 = iVar9 + 1;
        piVar7 = piVar7 + 2;
      } while (iVar9 < *((int *)GEN_TOP(((int)this + 0x38))));
    }
  }
  piVar7 = ((int *)GEN_TOP(((int)this + 0x28)));
  uVar8 = F_00e06f60(piVar7 GEN_EDX_FWD,*param_2,param_2[1]);
  if ((int)uVar8 <= *((int *)GEN_TOP(((int)this + 0x30)))) {
    iVar9 = uVar8 * 0x18;
    uVar2 = *((undefined8 *)GEN_TOP((*piVar7 + 8 + iVar9)));
    uVar3 = *((undefined8 *)GEN_TOP((*piVar7 + 0x10 + iVar9)));
    puVar5 = ((undefined4 *)GEN_TOP(*param_1));
    iVar6 = param_1[1];
    (*(undefined4 *)(gen_frame + 0x0)) = (undefined4)uVar2;
    *puVar5 = (*(undefined4 *)(gen_frame + 0x0));
    if ((char)iVar6 != '\0') {
      (*(undefined4 *)(gen_frame + 0x4)) = (undefined4)((ulonglong)uVar2 >> 0x20);
      puVar5[1] = (*(undefined4 *)(gen_frame + 0x4));
    }
    cVar4 = *((char *)GEN_TOP(((int)param_1 + 5)));
    puVar1 = ((undefined8 *)GEN_TOP((*piVar7 + 8 + iVar9)));
    *puVar1 = uVar2;
    (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x8)) + 0)) = (int)uVar3;
    (*(undefined8 *)(gen_frame + 0x8)) = CONCAT44((int)((ulonglong)uVar3 >> 0x20),(int)(*(undefined8 *)(gen_frame + 0x8)) + (uint)(cVar4 != '\0'));
    puVar1[1] = (*(undefined8 *)(gen_frame + 0x8));
    return 0;
  }
  uVar8 = F_00e08b20(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,*param_2,param_2[1],param_1);
  if ((uVar8 != 0) && (*((char *)GEN_TOP(((int)param_1 + 5))) != '\0')) {
    if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
    }
    piVar7 = ((int *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 8)));
    if (piVar7 != ((int *)GEN_TOP(0x0))) {
      *piVar7 = *param_2;
      piVar7[1] = param_2[1];
    }
    *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  }
  return 0;
}

/* ref: FUN_00e08cc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e08cc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe08cc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
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
  
  (*(int *)(gen_frame + 0x4)) = 0;
  if (0 < param_1[4]) {
    do {
      iVar8 = *((int *)GEN_TOP(((int)this + 0x50)));
      puVar1 = ((undefined4 *)GEN_TOP((param_1[3] + (*(int *)(gen_frame + 0x4)) * 8)));
      iVar11 = puVar1[1];
      if (iVar11 == -1) {
        uVar5 = *puVar1;
        piVar10 = ((int *)GEN_TOP((iVar8 + 0x34)));
        if (*((uint *)GEN_TOP((iVar8 + 0x38))) == (*((uint *)GEN_TOP((iVar8 + 0x3c))) & 0x3fffffff)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar10,4);
        }
        *((undefined4 *)GEN_TOP((*piVar10 + *((int *)GEN_TOP((iVar8 + 0x38))) * 4))) = uVar5;
      }
      else {
        uVar5 = *puVar1;
        piVar10 = ((int *)GEN_TOP((iVar8 + 0x40)));
        if (*((uint *)GEN_TOP((iVar8 + 0x44))) == (*((uint *)GEN_TOP((iVar8 + 0x48))) & 0x3fffffff)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar10,0xc);
        }
        puVar2 = ((undefined8 *)GEN_TOP((*piVar10 + *((int *)GEN_TOP((iVar8 + 0x44))) * 0xc)));
        if (puVar2 != ((undefined8 *)GEN_TOP(0x0))) {
          *puVar2 = CONCAT44(iVar11,uVar5);
          *(undefined4 *)(puVar2 + 1) = 6;
        }
      }
      piVar10[1] = piVar10[1] + 1;
      iVar8 = (*(int *)(gen_frame + 0x4)) + 1;
      (*(int *)(gen_frame + 0x4)) = iVar8;
    } while (iVar8 < param_1[4]);
  }
  iVar8 = 0;
  if (0 < param_1[1]) {
    iVar11 = 0;
    do {
      iVar7 = (*(int *)(gen_frame + 0x4));
      iVar6 = *param_1;
      uVar3 = *((undefined1 *)GEN_TOP((iVar6 + 0xc + iVar11)));
      (*(undefined4 *)(gen_frame + 0x0)) = *((undefined4 *)GEN_TOP((iVar6 + 8 + iVar11)));
      uVar4 = *((undefined1 *)GEN_TOP((iVar6 + iVar11 + 0xd)));
      (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x4)) + 0)) = uVar3;
      (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x4)) + 2)) = SUB42(iVar7,2);
      (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x4)) + 1)) = uVar4;
      (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x4)) + 0)) = CONCAT11(uVar4,uVar3);
      uVar9 = F_00e08b80(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),iVar6 + iVar11);
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
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e08de0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe08de0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  GEN_FRAME_DECL_TOP(0x50, 0, 4);
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  int * piVar4;
  int * piVar5;
  uint uVar6;
  undefined4 uVar7;
  
  piVar5 = (*(int * PTR32 *)&gen_args[1]);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))) + 8))))(((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))) GEN_EDX_FWD)));
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG)));
  uVar7 = *((undefined4 *)GEN_TOP(((int)this + 0x54)));
  (*(int * PTR32 *)(gen_frame + 0x48)) = piVar4;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x80000000;
  (*(undefined4 *)(gen_frame + 0x14)) = 0x80000000;
  (*(undefined4 *)(gen_frame + 0x28)) = *((undefined4 *)GEN_TOP(((int)this + 0x4c)));
  (*(undefined4 *)(gen_frame + 0x2c)) = uVar7;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  F_00d95690(&REFG(undefined * PTR32, 0x13516a4),&(*(undefined4 *)(gen_frame + 0x0)),0x20,0x10);
  (*(undefined4 * PTR32 *)(gen_frame + 0x40)) = &(*(undefined4 *)(gen_frame + 0x38));
  piVar5 = ((int *)GEN_TOP(*piVar5));
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x44)) + 0)) = 0x101;
  (*(int *)(gen_frame + 0x44)) = CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x44)) + 2)),0x101);
  (*(int *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  if (piVar5 == ((int *)GEN_TOP(0x0))) {
    piVar5 = &(*(int *)(gen_frame + 0x30));
  }
  else {
    piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 4))))(piVar5 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x18)))));
  }
  iVar1 = piVar5[1];
  (*(int *)(gen_frame + 0x20)) = *piVar5;
  (*(int *)(gen_frame + 0x24)) = iVar1;
  F_00e08b80(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0x40)),&(*(int *)(gen_frame + 0x20)));
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  do {
    if (iVar1 == 0) {
      *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(undefined4 *)(gen_frame + 0x38));
      (*(undefined4 * PTR32 *)&gen_args[0])[1] = (*(undefined4 *)(gen_frame + 0x3c));
LAB_00e08fba: ;
      F_00e08800(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
    iVar1 = *((int *)GEN_TOP(((int)this + 4)));
    iVar2 = *(int *)this;
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP((iVar2 - 8 + iVar1 * 8)));
    (*(undefined4 * PTR32 *)(gen_frame + 0x40)) = puVar3;
    (*(int *)(gen_frame + 0x44)) = *((int *)GEN_TOP((iVar2 - 4 + iVar1 * 8)));
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      if (*((uint *)GEN_TOP(((int)this + 0x38))) == (*((uint *)GEN_TOP(((int)this + 0x3c))) & 0x3fffffff)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),((int *)GEN_TOP(((int)this + 0x34))),8);
      }
      piVar5 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x34))) + *((int *)GEN_TOP(((int)this + 0x38))) * 8)));
      if (piVar5 != ((int *)GEN_TOP(0x0))) {
        *piVar5 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x40));
        piVar5[1] = (*(int *)(gen_frame + 0x44));
      }
      *((int *)GEN_TOP(((int)this + 0x38))) = *((int *)GEN_TOP(((int)this + 0x38))) + 1;
      iVar1 = *(int *)this;
      iVar2 = *((int *)GEN_TOP(((int)this + 4)));
      *((undefined4 *)GEN_TOP((iVar1 - 8 + iVar2 * 8))) = 0;
      *((undefined4 *)GEN_TOP((iVar1 - 4 + iVar2 * 8))) = 0;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x48)) + 0x28))))((*(int * PTR32 *)(gen_frame + 0x48)) GEN_EDX_ARG,&(*(int * PTR32 *)&gen_args[1]),&(*(undefined4 * PTR32 *)(gen_frame + 0x40)));
      F_00e20280(&(*(undefined4 *)(gen_frame + 0x28)) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x30)),&(*(int * PTR32 *)&gen_args[1]),&(*(undefined4 *)(gen_frame + 0x0)));
      if ((*(int *)(gen_frame + 0x30)) != 0) {
        uVar7 = 0xffffffff;
        if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0xc)) - 8 + (*(int *)(gen_frame + 0x10)) * 8))) == (*(int *)(gen_frame + 0x30))) {
          uVar7 = *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) - 4 + (*(int *)(gen_frame + 0x10)) * 8)));
        }
        F_00e07d70(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0x40)),&(*(int *)(gen_frame + 0x30)),uVar7);
        F_00e22120(&(*(undefined4 *)(gen_frame + 0x28)) GEN_EDX_ARG,(*(int *)(gen_frame + 0x30)),&(*(int * PTR32 *)&gen_args[1]),&(*(undefined4 *)(gen_frame + 0x0)));
        uVar6 = F_00e08cc0(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
        if (uVar6 == 0) {
          (*(int *)(gen_frame + 0x10)) = 0;
          (*(undefined4 *)(gen_frame + 0x4)) = 0;
          if (*((int *)GEN_TOP(((int)this + 0x58))) != 0) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x70))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
          }
          if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(0x0))) {
            *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 6))) - 1;
            piVar5 = (*(int * PTR32 *)&gen_args[1]) + 2;
            *piVar5 = *piVar5 - 1;
            if (*piVar5 == 0) {
              ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG,1);
            }
          }
          goto LAB_00e08fa3;
        }
      }
      F_00e080a0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG);
      *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
      F_00e06fc0(((undefined *)GEN_TOP(((int)this + 0x28))) GEN_EDX_ARG);
      *(*(undefined4 * PTR32 *)&gen_args[0]) = 0;
      (*(undefined4 * PTR32 *)&gen_args[0])[1] = 0;
      if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(0x0))) {
        *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 6))) - 1;
        piVar5 = (*(int * PTR32 *)&gen_args[1]) + 2;
        *piVar5 = *piVar5 - 1;
        if (*piVar5 == 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG,1);
          F_00e08800(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
          return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
        }
      }
      goto LAB_00e08fba;
    }
    *((int *)GEN_TOP(((int)this + 4))) = iVar1 - 1;
    *((int *)GEN_TOP(((int)this + 0x38))) = *((int *)GEN_TOP(((int)this + 0x38))) - 1;
LAB_00e08fa3: ;
    iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  } while( true );
}

/* ref: FUN_00e09020 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e09020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe09020u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int iVar1;
  LPVOID pvVar2;
  undefined * pvVar3;
  undefined * pvVar4;
  
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 4))))
                             (*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,0x70)));
  *((undefined2 *)GEN_TOP(((int)pvVar3 + 4))) = 0x70;
  pvVar4 = ((undefined *)GEN_TOP(F_00e24780(pvVar3 GEN_EDX_ARG,0)));
  pvVar3 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x50)));
  if ((pvVar3 != ((undefined *)GEN_TOP(0x0))) && (pvVar3 != pvVar4)) {
    F_00d91a80(pvVar3 GEN_EDX_ARG);
  }
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x50))) = pvVar4;
  F_00e08de0(this GEN_EDX_ARG,((int *)(gen_frame + 0x0)),param_1);
  if (((int *)(gen_frame + 0x0))[0] == 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x50))) + 0x30))) = 0;
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x50))) != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x50))) GEN_EDX_ARG);
    }
    *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
    return 0;
  }
  F_00e081e0(this GEN_EDX_ARG,param_2);
  F_00e076f0(this GEN_EDX_ARG);
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 4))))
                             (*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,0x18)));
  *((undefined2 *)GEN_TOP(((int)pvVar3 + 4))) = 0x18;
  pvVar3 = ((undefined *)GEN_TOP(F_00e24000(pvVar3 GEN_EDX_ARG,((int *)(gen_frame + 0x0)))));
  F_00e23fa0(pvVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x4c))));
  F_00e23fd0(pvVar3 GEN_EDX_ARG,param_2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x50)));
  *((undefined4 *)GEN_TOP((iVar1 + 0x30))) = 0;
  *((undefined4 *)GEN_TOP((iVar1 + 0x38))) = 0;
  *((undefined4 *)GEN_TOP((iVar1 + 0x44))) = 0;
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x50))) != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x50))) GEN_EDX_ARG);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  return (uint)pvVar3;
}

/* ref: FUN_00e09120 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e09120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe09120u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 in_ecx;
  LPVOID pvVar1;
  undefined * pvVar2;
  undefined * pvVar3;
  uint uVar4;
  
  if (*param_1 == 0) {
    return 0;
  }
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))
                             (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,0x70)));
  *((undefined2 *)GEN_TOP(((int)pvVar2 + 4))) = 0x70;
  pvVar3 = ((undefined *)GEN_TOP(F_00e24780(pvVar2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x4c))))));
  pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x50)));
  if ((pvVar2 != ((undefined *)GEN_TOP(0x0))) && (pvVar2 != pvVar3)) {
    F_00d91a80(pvVar2 GEN_EDX_ARG);
  }
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x50))) = pvVar3;
  F_00e08de0(this GEN_EDX_ARG,&(*(int *)(gen_frame + 0x0)),param_1);
  if (((*(int *)(gen_frame + 0x0)) != 0) && ((*(int *)(gen_frame + 0x4)) != 0)) {
    F_00e086b0(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x50))));
    in_ecx = *((undefined4 *)GEN_TOP(((int)this + 0x50)));
    uVar4 = F_00d92610((*(int *)(gen_frame + 0x4)) GEN_EDX_ARG);
    F_00e242a0(in_ecx GEN_EDX_ARG,(*(int *)(gen_frame + 0x0)),uVar4);
    pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x50)));
    F_00d919e0(pvVar2 GEN_EDX_ARG);
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x50))) != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x50))) GEN_EDX_ARG);
    }
    *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
    return (uint)pvVar2;
  }
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x50))) != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x50))) GEN_EDX_ARG);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  return 0;
}

/* ref: FUN_00e09200 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e09200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe09200u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_0105aec0(this GEN_EDX_FWD,(int)&(*(undefined * PTR32 *)(gen_frame + 0x0)) + 3,1,1);
  return (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x0)) + 3));
}

/* ref: FUN_00e09220 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e09220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe09220u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_0105aec0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),4,1);
  return (uint)(*(undefined * PTR32 *)(gen_frame + 0x0));
}

/* ref: FUN_00e09240 */
GEN_LIB GEN_FRAME float GEN_THISCALL F_00e09240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe09240u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_0105aec0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),4,1);
  return ((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x0)))));
}

/* ref: FUN_00e09260 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e09260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe09260u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_0105aec0(this GEN_EDX_FWD,param_1,1,param_2);
  return;
}

/* ref: FUN_00e09280 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e09280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe09280u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_0105aec0(this GEN_EDX_FWD,param_1,4,param_2);
  return;
}

/* ref: FUN_00e092a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e092a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xe092a0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x74))))
                    (*(int * PTR32 *)this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00e092b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e092b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xe092b0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x8c))))
                    (*(int * PTR32 *)this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00e092e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e092e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xe092e0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x20))))
                    (*(int * PTR32 *)this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00e092f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e092f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe092f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x5, 11);
  byte bVar1;
  ulonglong uVar2;
  byte bVar3;
  uint uVar4;
  
  F_0105aec0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,&(*(byte *)(gen_frame + 0x0)),1,1);
  bVar3 = (*(byte *)(gen_frame + 0x0)) & 1;
  uVar4 = (*(byte *)(gen_frame + 0x0)) >> 1 & 0xffffffbf;
  bVar1 = 6;
  while (((*(byte *)(gen_frame + 0x0)) & 0x80) != 0) {
    F_0105aec0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x0)),1,1);
    uVar2 = (ulonglong)bVar1;
    bVar1 = bVar1 + 7;
    uVar4 = uVar4 | (uint)(uVar2 < 0x40) * (((*(byte *)(gen_frame + 0x0)) & 0xffffff7f) << uVar2);
  }
  if (bVar3 != 0) {
    uVar4 = -uVar4;
  }
  return uVar4;
}

/* ref: FUN_00e093a0 */
GEN_LIB GEN_FRAME float GEN_THISCALL F_00e093a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe093a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_0105aec0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),4,1);
  return ((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x0)))));
}

/* ref: FUN_00e093c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e093c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe093c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00dbd930(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00e093d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e093d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe093d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00dbd9f0(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00e093e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e093e0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe093e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((bool *)GEN_TOP(param_2)) = in_ecx[3] != *in_ecx;
  return param_2;
}

/* ref: FUN_00e09400 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e09400(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe09400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((bool *)GEN_TOP(param_2)) = in_ecx[3] != *in_ecx;
  return param_2;
}

/* ref: FUN_00e09420 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e09420(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe09420u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((bool *)GEN_TOP(param_2)) = in_ecx[3] != *in_ecx;
  return param_2;
}

/* ref: FUN_00e09440 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e09440(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe09440u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_00e09480 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e09480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe09480u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x5, 11);
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  
  F_0105aec0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,&(*(byte *)(gen_frame + 0x0)),1,1);
  bVar2 = (*(byte *)(gen_frame + 0x0)) & 1;
  uVar3 = (*(byte *)(gen_frame + 0x0)) >> 1 & 0x7fffffbf;
  bVar4 = 6;
  while ((char)(*(byte *)(gen_frame + 0x0)) < '\0') {
    F_0105aec0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x0)),1,1);
    bVar1 = bVar4 & 0x1f;
    bVar4 = bVar4 + 7;
    uVar3 = uVar3 | ((*(byte *)(gen_frame + 0x0)) & 0xffffff7f) << bVar1;
  }
  if (bVar2 != 0) {
    uVar3 = -uVar3;
  }
  return uVar3;
}

/* ref: FUN_00e09500 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e09500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe09500u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x5, 11);
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  
  F_0105aec0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,&(*(byte *)(gen_frame + 0x0)),1,1);
  bVar2 = (*(byte *)(gen_frame + 0x0)) & 1;
  uVar3 = (*(byte *)(gen_frame + 0x0)) >> 1 & 0x7fffffbf;
  bVar4 = 6;
  while ((char)(*(byte *)(gen_frame + 0x0)) < '\0') {
    F_0105aec0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x0)),1,1);
    bVar1 = bVar4 & 0x1f;
    bVar4 = bVar4 + 7;
    uVar3 = uVar3 | ((*(byte *)(gen_frame + 0x0)) & 0xffffff7f) << bVar1;
  }
  if (bVar2 != 0) {
    uVar3 = -uVar3;
  }
  return uVar3;
}

/* ref: FUN_00e095b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e095b0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe095b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00e095c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e095c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe095c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x5, 11);
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  
  F_0105aec0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,&(*(byte *)(gen_frame + 0x0)),1,1);
  bVar2 = (*(byte *)(gen_frame + 0x0)) & 1;
  uVar3 = (*(byte *)(gen_frame + 0x0)) >> 1 & 0x7fffffbf;
  bVar4 = 6;
  while ((char)(*(byte *)(gen_frame + 0x0)) < '\0') {
    F_0105aec0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x0)),1,1);
    bVar1 = bVar4 & 0x1f;
    bVar4 = bVar4 + 7;
    uVar3 = uVar3 | ((*(byte *)(gen_frame + 0x0)) & 0xffffff7f) << bVar1;
  }
  if (bVar2 != 0) {
    uVar3 = -uVar3;
  }
  return uVar3;
}

/* ref: FUN_00e09640 */
GEN_LIB GEN_FRAME unsigned int F_00e09640(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe09640u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e09670 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e09670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe09670u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e096b0 */
GEN_LIB GEN_FRAME unsigned int F_00e096b0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe096b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  
  if (0 < param_2) {
    puVar1 = param_1;
    iVar2 = param_2;
    do {
      *puVar1 = *((undefined4 *)GEN_TOP(((param_3 - (int)param_1) + (int)puVar1)));
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00e09710 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e09710(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe09710u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00e09730 */
GEN_LIB GEN_FRAME uint F_00e09730(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe09730u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  return uVar2;
}

/* ref: FUN_00e09750 */
GEN_LIB GEN_FRAME unsigned int F_00e09750(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe09750u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x18);
  }
  return;
}

/* ref: FUN_00e09780 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e09780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe09780u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  int * piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 4)))) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)this + iVar2 * 8)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x60))))(piVar1 GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*(int *)this + iVar2 * 8 + 4))),*param_1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *((int *)GEN_TOP(((int)this + 4))));
  }
  iVar2 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 0x10)))) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + iVar2 * 8)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x5c))))
                (piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + iVar2 * 8 + 4))),*param_1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *((int *)GEN_TOP(((int)this + 0x10))));
  }
  return;
}

/* ref: FUN_00e09800 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e09800(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe09800u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *((undefined2 *)GEN_TOP(((int)in_ecx + 6))) = 1;
  *in_ecx = (*(undefined * PTR32 (*)[4])REFP(0x114d60c));
  return (uint)in_ecx;
}

/* ref: hkBinaryTagfileReader::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e09820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe09820u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x54, 12, 4);
  
  F_00e0a980(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,param_2,param_3);
  F_00e0c7b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1);
  F_00e0aa80(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return param_1;
}

/* ref: FUN_00e09860 */
GEN_LIB GEN_FRAME uint F_00e09860(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe09860u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkBinaryTagfileReader::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e09890(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe09890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 1));
  }
  return (uint)param_1;
}

/* ref: FUN_00e09910 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e09910(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe09910u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*in_ecx + 4 + param_2 * 8)));
}

/* ref: FUN_00e09920 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e09920(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe09920u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  *((bool *)GEN_TOP(param_2)) = param_3 <= *((int *)GEN_TOP((in_ecx + 8)));
  return param_2;
}

/* ref: FUN_00e099a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e099a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe099a0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e099e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e099e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe099e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
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
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0xc))))(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)&gen_args[0]));
    iVar3 = (*(int *)&gen_args[0]);
    if ((*(int *)&gen_args[0]) != 0) goto LAB_00e09a25;
  }
  iVar3 = ((int)0x80000000);
LAB_00e09a25: ;
  *((int *)GEN_TOP(((int)this + 4))) = iVar1;
  *(uint *)this = uVar2;
  *((int *)GEN_TOP(((int)this + 8))) = iVar3;
  return (uint)this;
}

/* ref: FUN_00e09a40 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e09a40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe09a40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *((int *)GEN_TOP(((int)this + 4))) + param_3;
  uVar1 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar1 < iVar5) {
    iVar4 = uVar1 * 2;
    if (iVar4 <= iVar5) {
      iVar4 = iVar5;
    }
    F_00d95690(param_1,this,iVar4,4);
  }
  puVar2 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 4)));
  if (0 < param_3) {
    iVar3 = param_2 - (int)puVar2;
    iVar4 = param_3;
    do {
      *puVar2 = *((undefined4 *)GEN_TOP((iVar3 + (int)puVar2)));
      puVar2 = puVar2 + 1;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  *((int *)GEN_TOP(((int)this + 4))) = iVar5;
  return 0;
}

/* ref: FUN_00e09aa0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e09aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe09aa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  iVar2 = param_1 - *((int *)GEN_TOP(((int)this + 4)));
  if (0 < iVar2) {
    puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) * 0x10 + *(int *)this + 8)));
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x8))) {
        puVar1[-2] = 0;
        puVar1[-1] = 0;
        *puVar1 = 0;
        puVar1[1] = 0;
      }
      puVar1 = puVar1 + 4;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  return 0;
}

/* ref: FUN_00e09b00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e09b00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe09b00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: FUN_00e09b10 */
GEN_LIB GEN_FRAME uint F_00e09b10(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe09b10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  LPVOID this;
  uint uVar2;
  uint uVar3;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = *((uint *)GEN_TOP(((int)this + 0xc)));
  uVar3 = param_1 * 0x10 + 0x7fU & 0xffffff80;
  uVar2 = uVar1 + uVar3;
  if (((int)uVar3 <= *((int *)GEN_TOP(((int)this + 8)))) && (uVar2 <= *((uint *)GEN_TOP(((int)this + 0x10))))) {
    *((uint *)GEN_TOP(((int)this + 0xc))) = uVar2;
    return uVar1;
  }
  uVar2 = F_00d94390(this GEN_EDX_ARG,uVar3);
  return uVar2;
}

/* ref: FUN_00e09b50 */
GEN_LIB GEN_FRAME uint F_00e09b50(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe09b50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  LPVOID this;
  uint uVar1;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = param_2 * 0x10 + 0x7fU & 0xffffff80;
  if ((((int)uVar1 <= *((int *)GEN_TOP(((int)this + 8)))) && (uVar1 + param_1 == *((int *)GEN_TOP(((int)this + 0xc))))) &&
     (*((int *)GEN_TOP(((int)this + 0x14))) != param_1)) {
    *((int *)GEN_TOP(((int)this + 0xc))) = param_1;
    return (uint)this;
  }
  uVar1 = F_00d945c0(this GEN_EDX_ARG,param_1,uVar1);
  return uVar1;
}

/* ref: FUN_00e09ba0 */
GEN_LIB GEN_FRAME uint F_00e09ba0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe09ba0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  LPVOID this;
  uint uVar2;
  uint uVar3;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = *((uint *)GEN_TOP(((int)this + 0xc)));
  uVar3 = param_1 * 4 + 0x7fU & 0xffffff80;
  uVar2 = uVar1 + uVar3;
  if (((int)uVar3 <= *((int *)GEN_TOP(((int)this + 8)))) && (uVar2 <= *((uint *)GEN_TOP(((int)this + 0x10))))) {
    *((uint *)GEN_TOP(((int)this + 0xc))) = uVar2;
    return uVar1;
  }
  uVar2 = F_00d94390(this GEN_EDX_ARG,uVar3);
  return uVar2;
}

/* ref: FUN_00e09be0 */
GEN_LIB GEN_FRAME uint F_00e09be0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe09be0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  LPVOID this;
  uint uVar1;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = param_2 * 4 + 0x7fU & 0xffffff80;
  if ((((int)uVar1 <= *((int *)GEN_TOP(((int)this + 8)))) && (uVar1 + param_1 == *((int *)GEN_TOP(((int)this + 0xc))))) &&
     (*((int *)GEN_TOP(((int)this + 0x14))) != param_1)) {
    *((int *)GEN_TOP(((int)this + 0xc))) = param_1;
    return (uint)this;
  }
  uVar1 = F_00d945c0(this GEN_EDX_ARG,param_1,uVar1);
  return uVar1;
}

/* ref: FUN_00e09c30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e09c30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe09c30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dbe3b0(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e09c50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e09c50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe09c50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = *(uint *)this;
  *((undefined4 *)GEN_TOP((uVar1 + 4 + param_1 * 8))) = param_2;
  return uVar1;
}

/* ref: FUN_00e09c70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e09c70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe09c70u, gen_a0, gen_a1, gen_a2, 0u);
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
    bVar1 = F_00d95690(param_1,this,iVar3,0xc);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00e09cb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e09cb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe09cb0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e09cf0 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e09cf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe09cf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  byte * pbVar2;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = *(undefined4 *)this;
  F_0105aec0(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)this + 0x10))),1,*(undefined4 *)this);
  pbVar2 = *((byte * PTR32 *)GEN_TOP(((int)this + 0x10)));
  *((byte * PTR32 *)GEN_TOP(((int)this + 8))) = pbVar2;
  *((byte * PTR32 *)GEN_TOP(((int)this + 0xc))) = pbVar2 + *((int *)GEN_TOP(((int)this + 0x14)));
  bVar1 = *pbVar2;
  *((byte * PTR32 *)GEN_TOP(((int)this + 8))) = pbVar2 + 1;
  return bVar1;
}

/* ref: FUN_00e09d20 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e09d20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe09d20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  byte * pbVar2;
  
  pbVar2 = *((byte * PTR32 *)GEN_TOP(((int)this + 8)));
  if (*((byte * PTR32 *)GEN_TOP(((int)this + 0xc))) <= pbVar2) {
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = *(undefined4 *)this;
    F_0105aec0(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)this + 0x10))),1,*(undefined4 *)this);
    pbVar2 = *((byte * PTR32 *)GEN_TOP(((int)this + 0x10)));
    *((byte * PTR32 *)GEN_TOP(((int)this + 8))) = pbVar2;
    *((byte * PTR32 *)GEN_TOP(((int)this + 0xc))) = pbVar2 + *((int *)GEN_TOP(((int)this + 0x14)));
  }
  bVar1 = *pbVar2;
  *((byte * PTR32 *)GEN_TOP(((int)this + 8))) = pbVar2 + 1;
  return bVar1;
}

/* ref: FUN_00e09d60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e09d60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe09d60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte * pbVar4;
  byte bVar5;
  uint uVar6;
  
  pbVar4 = *((byte * PTR32 *)GEN_TOP(((int)this + 8)));
  if (*((byte * PTR32 *)GEN_TOP(((int)this + 0xc))) <= pbVar4) {
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = *(undefined4 *)this;
    F_0105aec0(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)this + 0x10))),1,*(undefined4 *)this);
    pbVar4 = *((byte * PTR32 *)GEN_TOP(((int)this + 0x10)));
    *((byte * PTR32 *)GEN_TOP(((int)this + 8))) = pbVar4;
    *((byte * PTR32 *)GEN_TOP(((int)this + 0xc))) = pbVar4 + *((int *)GEN_TOP(((int)this + 0x14)));
  }
  bVar1 = *pbVar4;
  *((byte * PTR32 *)GEN_TOP(((int)this + 8))) = pbVar4 + 1;
  bVar3 = bVar1 & 1;
  uVar6 = bVar1 >> 1 & 0x7fffffbf;
  bVar5 = 6;
  while ((char)bVar1 < '\0') {
    pbVar4 = *((byte * PTR32 *)GEN_TOP(((int)this + 8)));
    if (*((byte * PTR32 *)GEN_TOP(((int)this + 0xc))) <= pbVar4) {
      *((undefined4 *)GEN_TOP(((int)this + 0x14))) = *(undefined4 *)this;
      F_0105aec0(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x10))),1,*(undefined4 *)this
                  );
      pbVar4 = *((byte * PTR32 *)GEN_TOP(((int)this + 0x10)));
      *((byte * PTR32 *)GEN_TOP(((int)this + 8))) = pbVar4;
      *((byte * PTR32 *)GEN_TOP(((int)this + 0xc))) = pbVar4 + *((int *)GEN_TOP(((int)this + 0x14)));
    }
    bVar1 = *pbVar4;
    *((byte * PTR32 *)GEN_TOP(((int)this + 8))) = pbVar4 + 1;
    bVar2 = bVar5 & 0x1f;
    bVar5 = bVar5 + 7;
    uVar6 = uVar6 | (bVar1 & 0xffffff7f) << bVar2;
  }
  *(int *)this = *(int *)this - 1;
  if (bVar3 != 0) {
    uVar6 = -uVar6;
  }
  return uVar6;
}

/* ref: FUN_00e09e20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e09e20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe09e20u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e09e60 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e09e60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe09e60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00e09a40(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return;
}

/* ref: FUN_00e09ea0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e09ea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe09ea0u, gen_a0, gen_a1, gen_a2, 0u);
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
    bVar1 = F_00d95690(param_1,this,iVar3,0xc);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_2;
  return uVar2;
}

/* ref: FUN_00e09ee0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e09ee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe09ee0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e09f20 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e09f20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe09f20u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e09f60 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e09f60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe09f60u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e09fa0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e09fa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe09fa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x6, 10);
  undefined * this_00;
  byte bVar1;
  LPVOID pvVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  
  this_00 = ((undefined *)GEN_TOP(((int)this + 4)));
  F_0105aec0(this_00 GEN_EDX_FWD,&(*(byte *)(gen_frame + 0x1)),1,1);
  uVar4 = (*(byte *)(gen_frame + 0x1)) >> 1 & 0x7fffffbf;
  bVar5 = 6;
  bVar1 = (*(byte *)(gen_frame + 0x1));
  while ((char)bVar1 < '\0') {
    F_0105aec0(this_00 GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x0)),1,1);
    bVar1 = bVar5 & 0x1f;
    bVar5 = bVar5 + 7;
    uVar4 = uVar4 | ((*(byte *)(gen_frame + 0x0)) & 0xffffff7f) << bVar1;
    bVar1 = (*(byte *)(gen_frame + 0x0));
  }
  if (((*(byte *)(gen_frame + 0x1)) & 1) != 0) {
    uVar4 = -uVar4;
  }
  if (0 < (int)uVar4) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar3 = F_00d92460(*((undefined4 *)GEN_TOP(((int)pvVar2 + 0x2c))),uVar4 + 1);
    F_0105afb0(this_00 GEN_EDX_ARG,uVar3,uVar4);
    *((undefined1 *)GEN_TOP((uVar4 + uVar3))) = 0;
    if (*((uint *)GEN_TOP(((int)this + 0x2c))) == (*((uint *)GEN_TOP(((int)this + 0x30))) & 0x3fffffff)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),((int *)GEN_TOP(((int)this + 0x28))),4);
    }
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x28))) + *((int *)GEN_TOP(((int)this + 0x2c))) * 4))) = uVar3;
    *((int *)GEN_TOP(((int)this + 0x2c))) = *((int *)GEN_TOP(((int)this + 0x2c))) + 1;
    return uVar3;
  }
  return *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x28))) + uVar4 * -4)));
}

/* ref: FUN_00e0a0a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0a0a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe0a0a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0x48, 8, 4);
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = param_1 + 7U & 0xfffffff8;
  iVar4 = (int)(((int)(param_1 + 7U) >> 0x1f & 7U) + uVar5) >> 3;
  (*(undefined * PTR32 *)(gen_frame + 0x40)) = this;
  if ((int)(param_2[2] & 0x3fffffffU) < (int)uVar5) {
    uVar2 = (param_2[2] & 0x3fffffffU) * 2;
    if ((int)uVar2 <= (int)uVar5) {
      uVar2 = uVar5;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),param_2,uVar2,1);
  }
  param_2[1] = uVar5;
  F_0105aec0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x40)) + 4))) GEN_EDX_ARG,((byte *)(gen_frame + 0x0)),1,iVar4);
  iVar3 = 0;
  if (0 < iVar4) {
    do {
      bVar1 = ((byte *)(gen_frame + 0x0))[(int)(iVar3)];
      *((byte *)GEN_TOP((*param_2 + iVar3 * 8))) = bVar1 & 1;
      *((byte *)GEN_TOP((*param_2 + 1 + iVar3 * 8))) = bVar1 >> 1 & 1;
      *((byte *)GEN_TOP((*param_2 + 2 + iVar3 * 8))) = bVar1 >> 2 & 1;
      *((byte *)GEN_TOP((*param_2 + 3 + iVar3 * 8))) = bVar1 >> 3 & 1;
      *((byte *)GEN_TOP((*param_2 + 4 + iVar3 * 8))) = bVar1 >> 4 & 1;
      *((byte *)GEN_TOP((*param_2 + 5 + iVar3 * 8))) = bVar1 >> 5 & 1;
      *((byte *)GEN_TOP((*param_2 + 6 + iVar3 * 8))) = bVar1 >> 6 & 1;
      *((byte *)GEN_TOP((*param_2 + 7 + iVar3 * 8))) = bVar1 >> 7;
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar4);
  }
  uVar5 = param_2[2] & 0x3fffffff;
  if ((int)uVar5 < param_1) {
    iVar4 = uVar5 * 2;
    if (iVar4 <= param_1) {
      iVar4 = param_1;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),param_2,iVar4,1);
    uVar5 = CONCAT31(extraout_var,bVar1);
  }
  param_2[1] = param_1;
  return uVar5;
}

/* ref: FUN_00e0a1b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0a1b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe0a1b0u, gen_a0, gen_a1, 0u, 0u);
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
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,0xc);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  return uVar2;
}

/* ref: FUN_00e0a1f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0a1f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe0a1f0u, gen_a0, gen_a1, 0u, 0u);
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
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar3,4);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  return uVar2;
}

/* ref: FUN_00e0a230 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0a230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe0a230u, gen_a0, gen_a1, 0u, 0u);
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
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar3,4);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  return uVar2;
}

/* ref: FUN_00e0a270 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e0a270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe0a270u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e0a2b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e0a2b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe0a2b0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e0a2f0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e0a2f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe0a2f0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e0a330 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e0a330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe0a330u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e0a370 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0a370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe0a370u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  piVar1 = ((int *)GEN_TOP(((int)this + 0x10)));
  *(int *)this = param_2;
  *piVar1 = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0x80000000;
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x18))) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516a4),piVar1,iVar3,1);
  }
  *((int *)GEN_TOP(((int)this + 0x14))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((int *)GEN_TOP(((int)this + 8))) = *piVar1;
  *((int *)GEN_TOP(((int)this + 0xc))) = *piVar1 + *((int *)GEN_TOP(((int)this + 0x14)));
  return (uint)this;
}

/* ref: FUN_00e0a3e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0a3e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe0a3e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined * pvVar4;
  byte bVar5;
  byte * pbVar6;
  int iVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  
  uVar8 = *(uint *)this;
  (*(int *)(gen_frame + 0x0)) = 0;
  (*(uint *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0x80000000;
  (*(uint *)(gen_frame + 0x10)) = uVar8;
  if (0 < (int)uVar8) {
    F_00d95690(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0x0)),((int)uVar8 < 0) - 1 & uVar8,4);
  }
  (*(uint *)(gen_frame + 0x4)) = uVar8;
  (*(int *)(gen_frame + 0x14)) = 0;
  if (0 < (int)uVar8) {
    do {
      pbVar6 = *((byte * PTR32 *)GEN_TOP(((int)this + 8)));
      if (*((byte * PTR32 *)GEN_TOP(((int)this + 0xc))) <= pbVar6) {
        uVar2 = *(undefined4 *)this;
        uVar3 = *((undefined4 *)GEN_TOP(((int)this + 0x10)));
        pvVar4 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
        *((undefined4 *)GEN_TOP(((int)this + 0x14))) = uVar2;
        F_0105aec0(pvVar4 GEN_EDX_ARG,uVar3,1,uVar2);
        pbVar6 = *((byte * PTR32 *)GEN_TOP(((int)this + 0x10)));
        *((byte * PTR32 *)GEN_TOP(((int)this + 8))) = pbVar6;
        *((byte * PTR32 *)GEN_TOP(((int)this + 0xc))) = pbVar6 + *((int *)GEN_TOP(((int)this + 0x14)));
      }
      bVar1 = *pbVar6;
      *((byte * PTR32 *)GEN_TOP(((int)this + 8))) = pbVar6 + 1;
      uVar10 = bVar1 >> 1 & 0x7fffffbf;
      (*(uint *)(gen_frame + 0xc)) = bVar1 & 1;
      bVar9 = 6;
      uVar8 = (*(uint *)(gen_frame + 0x10));
      while ((*(uint *)(gen_frame + 0x10)) = uVar8, (char)bVar1 < '\0') {
        pbVar6 = *((byte * PTR32 *)GEN_TOP(((int)this + 8)));
        if (*((byte * PTR32 *)GEN_TOP(((int)this + 0xc))) <= pbVar6) {
          uVar2 = *(undefined4 *)this;
          pvVar4 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
          *((undefined4 *)GEN_TOP(((int)this + 0x14))) = uVar2;
          uVar3 = *((undefined4 *)GEN_TOP(((int)this + 0x10)));
          F_0105aec0(pvVar4 GEN_EDX_ARG,uVar3,1,uVar2);
          pbVar6 = *((byte * PTR32 *)GEN_TOP(((int)this + 0x10)));
          *((byte * PTR32 *)GEN_TOP(((int)this + 8))) = pbVar6;
          *((byte * PTR32 *)GEN_TOP(((int)this + 0xc))) = pbVar6 + *((int *)GEN_TOP(((int)this + 0x14)));
        }
        bVar1 = *pbVar6;
        *((byte * PTR32 *)GEN_TOP(((int)this + 8))) = pbVar6 + 1;
        bVar5 = bVar9 & 0x1f;
        bVar9 = bVar9 + 7;
        uVar10 = uVar10 | (bVar1 & 0xffffff7f) << bVar5;
        uVar8 = (*(uint *)(gen_frame + 0x10));
      }
      iVar7 = *(int *)this;
      *(int *)this = iVar7 - 1;
      if ((*(uint *)(gen_frame + 0xc)) != 0) {
        uVar10 = -uVar10;
      }
      *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + (*(int *)(gen_frame + 0x14)) * 4))) = uVar10;
      iVar7 = (*(int *)(gen_frame + 0x14)) + 1;
      (*(int *)(gen_frame + 0x14)) = iVar7;
    } while (iVar7 < (int)uVar8);
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0x80))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,(*(int *)(gen_frame + 0x0)),uVar8);
  (*(uint *)(gen_frame + 0x4)) = 0;
  uVar8 = (*(uint *)(gen_frame + 0x8));
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    uVar8 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) * 4);
  }
  return uVar8;
}

/* ref: FUN_00e0a540 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0a540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe0a540u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 0x10))) == (*((uint *)GEN_TOP(((int)this + 0x14))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),((int *)GEN_TOP(((int)this + 0xc))),8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + *((int *)GEN_TOP(((int)this + 0x10))) * 8)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
  }
  *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00e0a590 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0a590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe0a590u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 8)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00e0a5e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e0a5e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe0a5e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x18)));
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*((undefined4 *)GEN_TOP(((int)this + 0x10))),uVar1 & 0x3fffffff);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  return uVar1;
}

/* ref: FUN_00e0a620 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0a620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe0a620u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e0a690 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e0a690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe0a690u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e0a720 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0a720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe0a720u, gen_a0, gen_a1, 0u, 0u);
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
    uVar2 = param_1 * 0x10 + 0x7f & 0xffffff80;
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

/* ref: FUN_00e0a790 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e0a790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe0a790u, gen_a0, 0u, 0u, 0u);
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
  uVar3 = iVar2 * 0x10 + 0x7fU & 0xffffff80;
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
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar3 << 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar3;
}

/* ref: FUN_00e0a820 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0a820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe0a820u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e0a890 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e0a890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe0a890u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e0a920 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e0a920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe0a920u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e0a980 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0a980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe0a980u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int * piVar1;
  
  *(undefined4 *)this = 0xffffffff;
  F_0105b020((int)this + 4 GEN_EDX_FWD,param_1,0);
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  piVar1 = ((int *)GEN_TOP(((int)this + 0x28)));
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0xffffffff;
  if (*((uint *)GEN_TOP(((int)this + 0x20))) == (*((uint *)GEN_TOP(((int)this + 0x24))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),((int *)GEN_TOP(((int)this + 0x1c))),4);
  }
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + *((int *)GEN_TOP(((int)this + 0x20))) * 4))) = 0;
  *((int *)GEN_TOP(((int)this + 0x20))) = *((int *)GEN_TOP(((int)this + 0x20))) + 1;
  if (*((uint *)GEN_TOP(((int)this + 0x2c))) == (*((uint *)GEN_TOP(((int)this + 0x30))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar1,4);
  }
  *((undefined1 * PTR32 *)GEN_TOP((*piVar1 + *((int *)GEN_TOP(((int)this + 0x2c))) * 4))) = &REFG(undefined1, 0x107fc63);
  *((int *)GEN_TOP(((int)this + 0x2c))) = *((int *)GEN_TOP(((int)this + 0x2c))) + 1;
  if (*((uint *)GEN_TOP(((int)this + 0x2c))) == (*((uint *)GEN_TOP(((int)this + 0x30))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar1,4);
  }
  *((undefined4 *)GEN_TOP((*piVar1 + *((int *)GEN_TOP(((int)this + 0x2c))) * 4))) = 0;
  *((int *)GEN_TOP(((int)this + 0x2c))) = *((int *)GEN_TOP(((int)this + 0x2c))) + 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 2;
  return (uint)this;
}

/* ref: FUN_00e0aa80 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e0aa80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe0aa80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  uint uVar2;
  LPVOID pvVar3;
  int iVar4;
  
  iVar4 = *((int *)GEN_TOP(((int)this + 0x34)));
  if (iVar4 < *((int *)GEN_TOP(((int)this + 0x2c)))) {
    do {
      uVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x28))) + iVar4 * 4)));
      pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      F_00d924b0(*((undefined4 *)GEN_TOP(((int)pvVar3 + 0x2c))),uVar1);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *((int *)GEN_TOP(((int)this + 0x2c))));
  }
  F_00dbdb20(((undefined *)GEN_TOP(((int)this + 0x44))) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x40)));
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x38))),uVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0x80000000;
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x30)));
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x28))),uVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0x80000000;
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x24)));
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x1c))),uVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0x80000000;
  F_0105b090(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
  return;
}

/* ref: FUN_00e0ab70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0ab70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe0ab70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  uint uVar1;
  
  uVar1 = param_2;
  if (0 < (int)param_2) {
    F_00e0a370(((byte *)(gen_frame + 0x0)) GEN_EDX_FWD,(int)this + 4,param_2);
    F_00e0a3e0(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1);
    ((byte *)(gen_frame + 0x0))[0x14] = 0;
    ((byte *)(gen_frame + 0x0))[0x15] = 0;
    ((byte *)(gen_frame + 0x0))[0x16] = 0;
    ((byte *)(gen_frame + 0x0))[0x17] = 0;
    uVar1 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 24));
    if (-1 < (int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 24))) {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                        (&REFG(undefined * PTR32, 0x13516a4),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 24)) & 0x3fffffff);
    }
  }
  return uVar1;
}

/* ref: FUN_00e0abd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0abd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe0abd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x38, 8);
  code * pcVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  undefined * pvVar6;
  int iVar7;
  byte bVar8;
  uint * puVar9;
  undefined * pvVar10;
  uint uVar11;
  
  (*(undefined * PTR32 *)(gen_frame + 0x2c)) = this;
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(uint *)(gen_frame + 0x10)) = 0;
  (*(uint *)(gen_frame + 0x14)) = 0x80000000;
  uVar3 = F_00e09fa0(this GEN_EDX_FWD);
  (*(uint *)(gen_frame + 0x0)) = uVar3;
  pvVar10 = ((undefined *)GEN_TOP(((int)this + 4)));
  F_0105aec0(pvVar10 GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x33)),1,1);
  uVar3 = (*(byte *)(gen_frame + 0x33)) >> 1 & 0x7fffffbf;
  (*(uint *)(gen_frame + 0x1c)) = (*(byte *)(gen_frame + 0x33)) & 1;
  bVar8 = 6;
  bVar2 = (*(byte *)(gen_frame + 0x33));
  while ((char)bVar2 < '\0') {
    F_0105aec0(pvVar10 GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x32)),1,1);
    bVar2 = bVar8 & 0x1f;
    bVar8 = bVar8 + 7;
    uVar3 = uVar3 | ((*(byte *)(gen_frame + 0x32)) & 0xffffff7f) << bVar2;
    bVar2 = (*(byte *)(gen_frame + 0x32));
  }
  if ((*(uint *)(gen_frame + 0x1c)) != 0) {
    uVar3 = -uVar3;
  }
  piVar4 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x14)));
  (*(uint *)(gen_frame + 0x4)) = uVar3;
  pcVar1 = *((gen_code32 *)GEN_TOP((*piVar4 + 0x18)));
  piVar4 = ((int *)GEN_TOP((*pcVar1)(piVar4,&(*(uint * PTR32 *)(gen_frame + 0x18)))));
  if (*piVar4 == 0) {
    (*(uint *)(gen_frame + 0x10)) = 0;
    if (-1 < (int)(*(uint *)(gen_frame + 0x14))) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0xc)),((*(uint *)(gen_frame + 0x14)) & 0x3fffffff) * 0xc);
    }
    return 1;
  }
  F_0105aec0(pvVar10 GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x32)),1,1);
  uVar3 = (*(byte *)(gen_frame + 0x32)) >> 1 & 0x7fffffbf;
  (*(uint *)(gen_frame + 0x1c)) = (*(byte *)(gen_frame + 0x32)) & 1;
  bVar8 = 6;
  bVar2 = (*(byte *)(gen_frame + 0x32));
  while ((char)bVar2 < '\0') {
    F_0105aec0(pvVar10 GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x33)),1,1);
    bVar2 = bVar8 & 0x1f;
    bVar8 = bVar8 + 7;
    uVar3 = uVar3 | ((*(byte *)(gen_frame + 0x33)) & 0xffffff7f) << bVar2;
    bVar2 = (*(byte *)(gen_frame + 0x33));
  }
  if ((*(uint *)(gen_frame + 0x1c)) != 0) {
    uVar3 = -uVar3;
  }
  if (((int)uVar3 < 0) || (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x1c))) + uVar3 * 4))) == 0)) {
    (*(uint *)(gen_frame + 0x8)) = 0;
  }
  else {
    piVar4 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x1c))) + uVar3 * 4)));
    pcVar1 = *((gen_code32 *)GEN_TOP((*piVar4 + 8)));
    uVar3 = (*pcVar1)(piVar4);
    (*(uint *)(gen_frame + 0x8)) = uVar3;
  }
  F_0105aec0(pvVar10 GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x32)),1,1);
  uVar3 = (*(byte *)(gen_frame + 0x32)) >> 1 & 0x7fffffbf;
  (*(uint *)(gen_frame + 0x1c)) = (*(byte *)(gen_frame + 0x32)) & 1;
  bVar8 = 6;
  bVar2 = (*(byte *)(gen_frame + 0x32));
  while ((char)bVar2 < '\0') {
    F_0105aec0(pvVar10 GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x33)),1,1);
    bVar2 = bVar8 & 0x1f;
    bVar8 = bVar8 + 7;
    uVar3 = uVar3 | ((*(byte *)(gen_frame + 0x33)) & 0xffffff7f) << bVar2;
    bVar2 = (*(byte *)(gen_frame + 0x33));
  }
  if ((*(uint *)(gen_frame + 0x1c)) != 0) {
    uVar3 = -uVar3;
  }
  if ((int)((*(uint *)(gen_frame + 0x14)) & 0x3fffffff) < (int)uVar3) {
    uVar5 = ((*(uint *)(gen_frame + 0x14)) & 0x3fffffff) * 2;
    if ((int)uVar5 <= (int)uVar3) {
      uVar5 = uVar3;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0xc)),uVar5,0xc);
  }
  (*(uint *)(gen_frame + 0x10)) = uVar3;
  (*(uint *)(gen_frame + 0x1c)) = 0;
  if (0 < (int)uVar3) {
    (*(int *)(gen_frame + 0x24)) = 0;
    do {
      puVar9 = ((uint *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + (*(int *)(gen_frame + 0x24)))));
      (*(uint * PTR32 *)(gen_frame + 0x18)) = puVar9;
      uVar3 = F_00e09fa0((*(undefined * PTR32 *)(gen_frame + 0x2c)) GEN_EDX_ARG);
      *puVar9 = uVar3;
      F_0105aec0(pvVar10 GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x32)),1,1);
      uVar3 = (*(byte *)(gen_frame + 0x32)) >> 1 & 0x7fffffbf;
      (*(uint *)(gen_frame + 0x20)) = (*(byte *)(gen_frame + 0x32)) & 1;
      bVar8 = 6;
      bVar2 = (*(byte *)(gen_frame + 0x32));
      while ((char)bVar2 < '\0') {
        F_0105aec0(pvVar10 GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x33)),1,1);
        bVar2 = bVar8 & 0x1f;
        bVar8 = bVar8 + 7;
        uVar3 = uVar3 | ((*(byte *)(gen_frame + 0x33)) & 0xffffff7f) << bVar2;
        bVar2 = (*(byte *)(gen_frame + 0x33));
      }
      if ((*(uint *)(gen_frame + 0x20)) != 0) {
        uVar3 = -uVar3;
      }
      (*(uint *)(gen_frame + 0x28)) = uVar3;
      if ((uVar3 & 0x20) == 0) {
        (*(uint *)(gen_frame + 0x20)) = 0;
      }
      else {
        F_0105aec0(pvVar10 GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x31)),1,1);
        (*(uint *)(gen_frame + 0x20)) = (*(byte *)(gen_frame + 0x31)) & 1;
        uVar3 = (*(byte *)(gen_frame + 0x31)) >> 1 & 0x7fffffbf;
        bVar8 = 6;
        bVar2 = (*(byte *)(gen_frame + 0x31));
        while ((char)bVar2 < '\0') {
          F_0105aec0(pvVar10 GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x30)),1,1);
          bVar2 = bVar8 & 0x1f;
          bVar8 = bVar8 + 7;
          uVar3 = uVar3 | ((*(byte *)(gen_frame + 0x30)) & 0xffffff7f) << bVar2;
          bVar2 = (*(byte *)(gen_frame + 0x30));
        }
        if ((*(uint *)(gen_frame + 0x20)) != 0) {
          uVar3 = -uVar3;
        }
        (*(uint *)(gen_frame + 0x20)) = uVar3;
      }
      pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x2c));
      if ((((*(uint *)(gen_frame + 0x28)) & 0xf) == 9) || (((*(uint *)(gen_frame + 0x28)) & 0xf) == 8)) {
        uVar3 = F_00e09fa0((*(undefined * PTR32 *)(gen_frame + 0x2c)) GEN_EDX_ARG);
        if (uVar3 != 0) {
          piVar4 = *((int * PTR32 *)GEN_TOP(((int)pvVar6 + 0x14)));
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x24))))(piVar4 GEN_EDX_ARG,uVar3);
        }
      }
      else {
        uVar3 = 0;
      }
      piVar4 = *((int * PTR32 *)GEN_TOP(((int)pvVar6 + 0x14)));
      uVar5 = (*(uint *)(gen_frame + 0x28));
      uVar11 = (*(uint *)(gen_frame + 0x20));
      pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x2c))))(piVar4 GEN_EDX_ARG)));
      uVar3 = F_00e1aa20(pvVar6 GEN_EDX_ARG,uVar5,uVar3,uVar11);
      (*(int *)(gen_frame + 0x24)) = (*(int *)(gen_frame + 0x24)) + 0xc;
      (*(uint * PTR32 *)(gen_frame + 0x18))[1] = uVar3;
      iVar7 = (*(uint *)(gen_frame + 0x1c)) + 1;
      (*(uint *)(gen_frame + 0x1c)) = iVar7;
    } while (iVar7 < (int)(*(uint *)(gen_frame + 0x10)));
  }
  pvVar10 = (*(undefined * PTR32 *)(gen_frame + 0x2c));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x14))) + 0xc))))
                    (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x14))) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x0)));
  if (*((uint *)GEN_TOP(((int)pvVar10 + 0x20))) == (*((uint *)GEN_TOP(((int)pvVar10 + 0x24))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),((int *)GEN_TOP(((int)pvVar10 + 0x1c))),4);
  }
  *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar10 + 0x1c))) + *((int *)GEN_TOP(((int)pvVar10 + 0x20))) * 4))) = uVar3;
  *((int *)GEN_TOP(((int)pvVar10 + 0x20))) = *((int *)GEN_TOP(((int)pvVar10 + 0x20))) + 1;
  (*(uint *)(gen_frame + 0x10)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x14))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0xc)),((*(uint *)(gen_frame + 0x14)) & 0x3fffffff) * 0xc);
  }
  return 0;
}

/* ref: FUN_00e0afb0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e0afb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe0afb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x14)));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0xc))),iVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0x80000000;
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00e0b030 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0b030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe0b030u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0xc, 4);
  int * piVar1;
  undefined4 * puVar2;
  code * pcVar3;
  byte bVar4;
  undefined4 * puVar5;
  LPVOID pvVar6;
  int * piVar7;
  uint uVar8;
  int * piVar9;
  byte bVar10;
  
  if (*(int *)this < 2) {
    F_00e0c190(this GEN_EDX_FWD,&(*(undefined4 * PTR32 *)(gen_frame + 0x0)),0,0);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x60))))(param_1 GEN_EDX_ARG,param_2,(*(undefined4 * PTR32 *)(gen_frame + 0x0)));
    puVar5 = (*(undefined4 * PTR32 *)(gen_frame + 0x0));
    if ((*(undefined4 * PTR32 *)(gen_frame + 0x0)) != ((undefined4 *)GEN_TOP(0x0))) {
      *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) + 6))) = *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) + 6))) - 1;
      piVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0x0)) + 2;
      *piVar1 = *piVar1 - 1;
      if (*piVar1 == 0) {
        uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x0)))))((*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,1);
        return uVar8;
      }
    }
  }
  else {
    F_0105aec0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x7)),1,1);
    uVar8 = (*(byte *)(gen_frame + 0x7)) >> 1 & 0x7fffffbf;
    (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(((*(byte *)(gen_frame + 0x7)) & 1)));
    bVar10 = 6;
    bVar4 = (*(byte *)(gen_frame + 0x7));
    while ((char)bVar4 < '\0') {
      F_0105aec0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x6)),1,1);
      bVar4 = bVar10 & 0x1f;
      bVar10 = bVar10 + 7;
      uVar8 = uVar8 | ((*(byte *)(gen_frame + 0x6)) & 0xffffff7f) << bVar4;
      bVar4 = (*(byte *)(gen_frame + 0x6));
    }
    if ((*(undefined4 * PTR32 *)(gen_frame + 0x0)) != ((undefined4 *)GEN_TOP(0x0))) {
      uVar8 = -uVar8;
    }
    if (*((int *)GEN_TOP(((int)this + 0x3c))) <= (int)uVar8) {
      piVar1 = ((int *)GEN_TOP(((int)this + 0x44)));
      uVar8 = F_00dbe3b0(piVar1 GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),uVar8,0);
      piVar9 = *((int * PTR32 *)GEN_TOP((*piVar1 + 4 + uVar8 * 8)));
      if (piVar9 == ((int *)GEN_TOP(0x0))) {
        pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
        piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar6 + 0x2c))) + 4))))
                                  (*((int * PTR32 *)GEN_TOP(((int)pvVar6 + 0x2c))) GEN_EDX_ARG,0x18)));
        if (piVar7 != ((int *)GEN_TOP(0x0))) {
          *piVar7 = 0;
          piVar7[1] = 0;
          piVar7[2] = ((int)0x80000000);
          piVar7[3] = 0;
          piVar7[4] = 0;
          piVar7[5] = ((int)0x80000000);
          piVar9 = piVar7;
        }
        *((int * PTR32 *)GEN_TOP((*piVar1 + 4 + uVar8 * 8))) = piVar9;
      }
      if (piVar9[1] == (piVar9[2] & 0x3fffffffU)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar9,8);
      }
      puVar5 = ((undefined4 *)GEN_TOP((*piVar9 + piVar9[1] * 8)));
      if (puVar5 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar5 = param_1;
        puVar5[1] = param_2;
      }
      piVar9[1] = piVar9[1] + 1;
      return (uint)puVar5;
    }
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x38))) + uVar8 * 4)));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      *((short *)GEN_TOP(((int)puVar2 + 6))) = *((short *)GEN_TOP(((int)puVar2 + 6))) + 1;
      puVar2[2] = puVar2[2] + 1;
    }
    pcVar3 = *((gen_code32 *)GEN_TOP((*param_1 + 0x60)));
    puVar5 = ((undefined4 *)GEN_TOP((*pcVar3)(param_1,param_2,puVar2)));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      *((short *)GEN_TOP(((int)puVar2 + 6))) = *((short *)GEN_TOP(((int)puVar2 + 6))) - 1;
      piVar1 = puVar2 + 2;
      *piVar1 = *piVar1 - 1;
      if (*piVar1 == 0) {
        puVar5 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1)));
      }
    }
  }
  return (uint)puVar5;
}

/* ref: FUN_00e0b1e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0b1e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0b1e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  GEN_FRAME_DECL(0x88, 8);
  undefined4 uVar1;
  code * pcVar2;
  byte bVar3;
  longlong lVar4;
  int * piVar5;
  undefined * pvVar6;
  int * in_ecx;
  uint uVar7;
  int * piVar8;
  undefined4 * puVar9;
  undefined4 * puVar10;
  undefined1 * puVar11;
  LPVOID pvVar12;
  uint uVar13;
  undefined4 * puVar14;
  undefined4 * puVar15;
  int iVar16;
  uint uVar17;
  byte bVar18;
  int iVar19;
  undefined1 * puVar20;
  byte bVar21;
  bool bVar22;
  
  (*(undefined * PTR32 *)(gen_frame + 0x78)) = this;
  in_ecx = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0]))) + 4))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0]))) GEN_EDX_FWD)));
  piVar5 = (*(int * PTR32 *)&gen_args[1]);
  piVar8 = ((int *)GEN_TOP((*in_ecx - 2)));
  switch((unsigned int)(uintptr_t)(piVar8)) {
  case 0x0: ;
    (*(uint *)(gen_frame + 0x64)) = 0;
    (*(int * PTR32 *)(gen_frame + 0x68)) = ((int *)GEN_TOP(0x0));
    (*(int * PTR32 *)(gen_frame + 0x6c)) = ((int *)GEN_TOP(0x80000000));
    if ((*(int * PTR32 *)&gen_args[1]) == ((int *)GEN_TOP(0x0))) {
      uVar7 = 0;
LAB_00e0b24c: ;
      piVar8 = ((int *)GEN_TOP(0x80000000));
    }
    else {
      uVar7 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0xc))))(&REFG(undefined * PTR32, 0x13516a4),&(*(int * PTR32 *)&gen_args[1]));
      piVar8 = (*(int * PTR32 *)&gen_args[1]);
      if ((*(int * PTR32 *)&gen_args[1]) == ((int *)GEN_TOP(0x0))) goto LAB_00e0b24c;
    }
    (*(int * PTR32 *)(gen_frame + 0x6c)) = piVar8;
    (*(uint *)(gen_frame + 0x64)) = uVar7;
    (*(int * PTR32 *)(gen_frame + 0x68)) = piVar5;
    if ((int)((uint)piVar8 & 0x3fffffff) < (int)piVar5) {
      piVar8 = ((int *)GEN_TOP((((uint)piVar8 & 0x3fffffff) * 2)));
      if ((int)piVar8 <= (int)piVar5) {
        piVar8 = piVar5;
      }
      F_00d95690(&REFG(undefined * PTR32, 0x13516a4),&(*(uint *)(gen_frame + 0x64)),piVar8,1);
    }
    F_0105aec0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x78)) + 4))) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x64)),1,piVar5);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0]))) + 0x8c))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0]))) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x64)),piVar5);
    (*(int * PTR32 *)(gen_frame + 0x68)) = ((int *)GEN_TOP(0x0));
    piVar8 = (*(int * PTR32 *)(gen_frame + 0x6c));
    if (-1 < (int)(*(int * PTR32 *)(gen_frame + 0x6c))) {
      uVar7 = (uint)(*(int * PTR32 *)(gen_frame + 0x6c)) & 0x3fffffff;
LAB_00e0b2bd: ;
      (*(int * PTR32 *)(gen_frame + 0x68)) = ((int *)GEN_TOP(0x0));
      uVar7 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(uint *)(gen_frame + 0x64)),uVar7);
      return uVar7;
    }
    break;
  case 0x1: ;
    uVar7 = 0;
    (*(uint *)(gen_frame + 0x64)) = 0;
    (*(int * PTR32 *)(gen_frame + 0x68)) = ((int *)GEN_TOP(0x0));
    (*(int * PTR32 *)(gen_frame + 0x6c)) = ((int *)GEN_TOP(0x80000000));
    if ((*(int * PTR32 *)&gen_args[1]) == ((int *)GEN_TOP(0x0))) {
LAB_00e0b476: ;
      piVar8 = ((int *)GEN_TOP(0x80000000));
    }
    else {
      (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) * 4)));
      pcVar2 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0xc)));
      uVar7 = (*pcVar2)(&REFG(undefined * PTR32, 0x13516a4),&(*(int * PTR32 *)&gen_args[1]));
      piVar8 = ((int *)GEN_TOP(((int)((int)(*(int * PTR32 *)&gen_args[1]) + ((int)(*(int * PTR32 *)&gen_args[1]) >> 0x1f & 3U)) >> 2)));
      if (piVar8 == ((int *)GEN_TOP(0x0))) goto LAB_00e0b476;
    }
    (*(int * PTR32 *)(gen_frame + 0x6c)) = piVar8;
    (*(uint *)(gen_frame + 0x64)) = uVar7;
    (*(int * PTR32 *)(gen_frame + 0x68)) = piVar5;
    if ((int)((uint)piVar8 & 0x3fffffff) < (int)piVar5) {
      piVar8 = ((int *)GEN_TOP((((uint)piVar8 & 0x3fffffff) * 2)));
      if ((int)piVar8 <= (int)piVar5) {
        piVar8 = piVar5;
      }
      F_00d95690(&REFG(undefined * PTR32, 0x13516a4),&(*(uint *)(gen_frame + 0x64)),piVar8,4);
    }
    (*(int * PTR32 *)(gen_frame + 0x68)) = piVar5;
    F_0105aec0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x64)),4,piVar5);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0]))) + 0x70))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0]))) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x64)),(*(int * PTR32 *)(gen_frame + 0x68)));
    (*(int * PTR32 *)(gen_frame + 0x68)) = ((int *)GEN_TOP(0x0));
    if ((int)(*(int * PTR32 *)(gen_frame + 0x6c)) < 0) {
      return (uint)(*(int * PTR32 *)(gen_frame + 0x6c));
    }
    uVar7 = (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x6c))) * 4;
    goto LAB_00e0b2bd;
  case 0x2: ;
    if (2 < *(int *)this) {
      piVar8 = ((int *)GEN_TOP(((int)this + 4)));
      (*(int * PTR32 *)(gen_frame + 0x7c)) = piVar8;
      F_0105aec0(piVar8 GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x83)),1,1);
      uVar7 = (uint)(*(byte *)(gen_frame + 0x83));
      uVar17 = (*(byte *)(gen_frame + 0x83)) >> 1 & 0x7fffffbf;
      (*(undefined4 * PTR32 *)(gen_frame + 0x74)) = ((undefined4 *)GEN_TOP((uVar7 & 1)));
      bVar18 = 6;
      bVar21 = (*(byte *)(gen_frame + 0x83));
      while ((char)bVar21 < '\0') {
        F_0105aec0(piVar8 GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x82)),1,1);
        uVar7 = (uint)(*(byte *)(gen_frame + 0x82));
        bVar21 = bVar18 & 0x1f;
        bVar18 = bVar18 + 7;
        uVar17 = uVar17 | (uVar7 & 0xffffff7f) << bVar21;
        bVar21 = (*(byte *)(gen_frame + 0x82));
      }
      if ((*(undefined4 * PTR32 *)(gen_frame + 0x74)) != ((undefined4 *)GEN_TOP(0x0))) {
        uVar17 = -uVar17;
      }
      if (uVar17 != 4) {
        (*(int * PTR32 *)(gen_frame + 0x70)) = ((int *)GEN_TOP(0x0));
        if ((int)(*(int * PTR32 *)&gen_args[1]) < 1) {
          return uVar7;
        }
        do {
          F_0105aec0(piVar8 GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x82)),1,1);
          (*(undefined4 * PTR32 *)(gen_frame + 0x74)) = ((undefined4 *)GEN_TOP(((*(byte *)(gen_frame + 0x82)) & 1)));
          uVar7 = (*(byte *)(gen_frame + 0x82)) >> 1 & 0xffffffbf;
          uVar17 = 0;
          (*(uint *)(gen_frame + 0x58)) = 6;
          piVar5 = (*(int * PTR32 *)(gen_frame + 0x70));
          bVar18 = (*(byte *)(gen_frame + 0x82));
          while ((*(int * PTR32 *)(gen_frame + 0x70)) = piVar5, (bVar18 & 0x80) != 0) {
            F_0105aec0((*(int * PTR32 *)(gen_frame + 0x7c)) GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x83)),1,1);
            lVar4 = ((ulonglong)(((ulonglong)(byte)(*(uint *)(gen_frame + 0x58)) < 0x40) ? (((ulonglong)((*(byte *)(gen_frame + 0x83)) & 0xffffff7f) << (ulonglong)(byte)(*(uint *)(gen_frame + 0x58)))) : 0));
            (*(uint *)(gen_frame + 0x58)) = (*(uint *)(gen_frame + 0x58)) + 7;
            uVar7 = uVar7 | (uint)lVar4;
            uVar17 = uVar17 | (uint)((ulonglong)lVar4 >> 0x20);
            piVar5 = (*(int * PTR32 *)(gen_frame + 0x70));
            bVar18 = (*(byte *)(gen_frame + 0x83));
          }
          if ((*(undefined4 * PTR32 *)(gen_frame + 0x74)) != ((undefined4 *)GEN_TOP(0x0))) {
            bVar22 = uVar7 != 0;
            uVar7 = -uVar7;
            uVar17 = -(uVar17 + bVar22);
          }
          piVar8 = ((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0])));
          pcVar2 = *((gen_code32 *)GEN_TOP((*piVar8 + 0x58)));
          uVar7 = (*pcVar2)(piVar8,piVar5,uVar7,uVar17);
          (*(int * PTR32 *)(gen_frame + 0x70)) = ((int *)GEN_TOP(((int)piVar5 + 1)));
          piVar8 = (*(int * PTR32 *)(gen_frame + 0x7c));
        } while ((int)piVar5 + 1 < (int)(*(int * PTR32 *)&gen_args[1]));
        return uVar7;
      }
    }
    uVar7 = F_00e0ab70((*(undefined * PTR32 *)(gen_frame + 0x78)) GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[0]),(*(int * PTR32 *)&gen_args[1]));
    return uVar7;
  case 0x3: ;
    iVar19 = 0;
    if (0 < (int)(*(int * PTR32 *)&gen_args[1])) {
      do {
        uVar7 = F_00e09fa0((*(undefined * PTR32 *)(gen_frame + 0x78)) GEN_EDX_ARG);
        uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0]))) + 0x38))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0]))) GEN_EDX_ARG,iVar19,uVar7);
        iVar19 = iVar19 + 1;
      } while (iVar19 < (int)piVar5);
      return uVar7;
    }
    break;
  case 0x4: ;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0]))) + 0x10))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0]))) GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[1]));
    piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0]))) + 0x18))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0]))) GEN_EDX_ARG)));
    uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x24))))(piVar8 GEN_EDX_ARG);
    (*(uint *)(gen_frame + 0x58)) = uVar7;
    ((uint *)(gen_frame + 0x40))[0] = 0;
    ((uint *)(gen_frame + 0x40))[1] = 0;
    (*(int * PTR32 *)(gen_frame + 0x48)) = ((int *)GEN_TOP(0x80000000));
    (*(int *)(gen_frame + 0x50)) = 0x80;
    pvVar12 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar7 = *((uint *)GEN_TOP(((int)pvVar12 + 0xc)));
    if ((*((int *)GEN_TOP(((int)pvVar12 + 8))) < 0x80) || (*((uint *)GEN_TOP(((int)pvVar12 + 0x10))) < uVar7 + 0x80)) {
      uVar7 = F_00d94390(pvVar12 GEN_EDX_ARG,0x80);
    }
    else {
      *((uint *)GEN_TOP(((int)pvVar12 + 0xc))) = uVar7 + 0x80;
    }
    uVar17 = (*(uint *)(gen_frame + 0x58));
    ((uint *)(gen_frame + 0x40))[0] = uVar7;
    (*(int * PTR32 *)(gen_frame + 0x48)) = ((int *)GEN_TOP(0x80000080));
    (*(uint *)(gen_frame + 0x4c)) = uVar7;
    F_00e0a0a0(this GEN_EDX_ARG,(*(uint *)(gen_frame + 0x58)),((uint *)(gen_frame + 0x40)));
    uVar7 = 0;
    uVar13 = 0;
    (*(uint *)(gen_frame + 0x5c)) = 0;
    (*(uint *)(gen_frame + 0x60)) = 0;
    (*(uint *)(gen_frame + 0x64)) = 0x80000000;
    (*(int * PTR32 *)(gen_frame + 0x6c)) = ((int *)GEN_TOP(uVar17));
    if (uVar17 != 0) {
      pvVar12 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      uVar7 = *((uint *)GEN_TOP(((int)pvVar12 + 0xc)));
      uVar13 = uVar17 * 0x10 + 0x7f & 0xffffff80;
      if ((*((int *)GEN_TOP(((int)pvVar12 + 8))) < (int)uVar13) ||
         (*((uint *)GEN_TOP(((int)pvVar12 + 0x10))) < uVar7 + uVar13)) {
        uVar7 = F_00d94390(pvVar12 GEN_EDX_ARG,uVar13);
        uVar13 = (*(uint *)(gen_frame + 0x60));
      }
      else {
        *((uint *)GEN_TOP(((int)pvVar12 + 0xc))) = uVar7 + uVar13;
        uVar13 = (*(uint *)(gen_frame + 0x60));
      }
    }
    (*(uint *)(gen_frame + 0x64)) = uVar17 | 0x80000000;
    iVar19 = uVar17 - uVar13;
    (*(uint *)(gen_frame + 0x5c)) = uVar7;
    (*(int * PTR32 *)(gen_frame + 0x68)) = ((int *)GEN_TOP(uVar7));
    if (0 < iVar19) {
      puVar14 = ((undefined4 *)GEN_TOP((uVar13 * 0x10 + uVar7 + 8)));
      do {
        if (puVar14 != ((undefined4 *)GEN_TOP(0x8))) {
          puVar14[-2] = 0;
          puVar14[-1] = 0;
          *puVar14 = 0;
          puVar14[1] = 0;
        }
        puVar14 = puVar14 + 4;
        iVar19 = iVar19 - 1;
      } while (iVar19 != 0);
    }
    (*(uint *)(gen_frame + 0x60)) = uVar17;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x30))))(piVar8 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x5c)));
    (*(int *)(gen_frame + 0x54)) = 0;
    if (0 < (int)uVar17) {
      (*(int * PTR32 *)(gen_frame + 0x70)) = ((int *)GEN_TOP(0x0));
      do {
        puVar14 = ((undefined4 *)GEN_TOP(((*(uint *)(gen_frame + 0x5c)) + (int)(*(int * PTR32 *)(gen_frame + 0x70)))));
        if (*((char *)GEN_TOP((((uint *)(gen_frame + 0x40))[0] + (*(int *)(gen_frame + 0x54))))) != '\0') {
          piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0]))) + 0x28))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0]))) GEN_EDX_ARG,*puVar14)));
          (*(int * PTR32 *)(gen_frame + 0x7c)) = piVar8;
          if (piVar8 != ((int *)GEN_TOP(0x0))) {
            *((short *)GEN_TOP(((int)piVar8 + 6))) = *((short *)GEN_TOP(((int)piVar8 + 6))) + 1;
            piVar8[2] = piVar8[2] + 1;
          }
          piVar8 = ((int *)GEN_TOP(puVar14[2]));
          if ((*piVar8 == 9) &&
             ((*((int *)GEN_TOP(piVar8[1])) != 3 ||
              ((((iVar19 = piVar8[2], iVar19 != 4 && (iVar19 != 8)) && (iVar19 != 0xc)) &&
               (iVar19 != 0x10)))))) {
            iVar19 = 0;
            if (0 < (int)(*(int * PTR32 *)&gen_args[1])) {
              do {
                puVar14 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x7c)) + 100))))((*(int * PTR32 *)(gen_frame + 0x7c)) GEN_EDX_ARG,iVar19)));
                (*(undefined4 * PTR32 *)(gen_frame + 0x74)) = puVar14;
                if (puVar14 != ((undefined4 *)GEN_TOP(0x0))) {
                  *((short *)GEN_TOP(((int)puVar14 + 6))) = *((short *)GEN_TOP(((int)puVar14 + 6))) + 1;
                  puVar14[2] = puVar14[2] + 1;
                }
                uVar7 = F_00e19c70(piVar8 GEN_EDX_ARG);
                F_00e0b1e0((*(undefined * PTR32 *)(gen_frame + 0x78)) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0x74)),((int *)GEN_TOP(uVar7)));
                if ((*(undefined4 * PTR32 *)(gen_frame + 0x74)) != ((undefined4 *)GEN_TOP(0x0))) {
                  *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x74)) + 6))) = *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x74)) + 6))) - 1;
                  piVar5 = (*(undefined4 * PTR32 *)(gen_frame + 0x74)) + 2;
                  *piVar5 = *piVar5 - 1;
                  if (*piVar5 == 0) {
                    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x74)))))((*(undefined4 * PTR32 *)(gen_frame + 0x74)) GEN_EDX_ARG,1);
                  }
                }
                iVar19 = iVar19 + 1;
              } while (iVar19 < (int)(*(int * PTR32 *)&gen_args[1]));
            }
          }
          else {
            F_00e0b1e0((*(undefined * PTR32 *)(gen_frame + 0x78)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x7c)),(*(int * PTR32 *)&gen_args[1]));
          }
          if ((*(int * PTR32 *)(gen_frame + 0x7c)) != ((int *)GEN_TOP(0x0))) {
            *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x7c)) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x7c)) + 6))) - 1;
            piVar8 = (*(int * PTR32 *)(gen_frame + 0x7c)) + 2;
            *piVar8 = *piVar8 - 1;
            if (*piVar8 == 0) {
              ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0x7c)))))((*(int * PTR32 *)(gen_frame + 0x7c)) GEN_EDX_ARG,1);
            }
          }
        }
        (*(int * PTR32 *)(gen_frame + 0x70)) = (*(int * PTR32 *)(gen_frame + 0x70)) + 4;
        iVar19 = (*(int *)(gen_frame + 0x54)) + 1;
        (*(int *)(gen_frame + 0x54)) = iVar19;
      } while (iVar19 < (int)(*(uint *)(gen_frame + 0x58)));
    }
    piVar5 = (*(int * PTR32 *)(gen_frame + 0x6c));
    piVar8 = (*(int * PTR32 *)(gen_frame + 0x68));
    if ((*(int * PTR32 *)(gen_frame + 0x68)) == ((int *)GEN_TOP((*(uint *)(gen_frame + 0x5c))))) {
      (*(uint *)(gen_frame + 0x60)) = 0;
    }
    pvVar12 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar7 = (int)((int)(uintptr_t)piVar5) * 0x10 + 0x7fU & 0xffffff80;
    if (((*((int *)GEN_TOP(((int)pvVar12 + 8))) < (int)uVar7) ||
        (uVar7 + (int)piVar8 != *((int *)GEN_TOP(((int)pvVar12 + 0xc))))) ||
       (((int *)GEN_TOP(*((uint *)GEN_TOP(((int)pvVar12 + 0x14))))) == piVar8)) {
      F_00d945c0(pvVar12 GEN_EDX_ARG,piVar8,uVar7);
    }
    else {
      *((int * PTR32 *)GEN_TOP(((int)pvVar12 + 0xc))) = piVar8;
    }
    (*(uint *)(gen_frame + 0x60)) = 0;
    if (-1 < (int)(*(uint *)(gen_frame + 0x64))) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0x5c)),(*(uint *)(gen_frame + 0x64)) << 4);
    }
    iVar19 = (*(int *)(gen_frame + 0x50));
    uVar7 = (*(uint *)(gen_frame + 0x4c));
    (*(uint *)(gen_frame + 0x5c)) = 0;
    (*(uint *)(gen_frame + 0x64)) = 0x80000000;
    if ((*(uint *)(gen_frame + 0x4c)) == ((uint *)(gen_frame + 0x40))[0]) {
      ((uint *)(gen_frame + 0x40))[1] = 0;
    }
    pvVar12 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar17 = iVar19 + 0x7fU & 0xffffff80;
    if (((*((int *)GEN_TOP(((int)pvVar12 + 8))) < (int)uVar17) ||
        (uVar17 + uVar7 != *((int *)GEN_TOP(((int)pvVar12 + 0xc))))) ||
       (*((uint *)GEN_TOP(((int)pvVar12 + 0x14))) == uVar7)) {
      F_00d945c0(pvVar12 GEN_EDX_ARG,uVar7,uVar17);
    }
    else {
      *((uint *)GEN_TOP(((int)pvVar12 + 0xc))) = uVar7;
    }
    ((uint *)(gen_frame + 0x40))[1] = 0;
    piVar8 = (*(int * PTR32 *)(gen_frame + 0x48));
    if (-1 < (int)(*(int * PTR32 *)(gen_frame + 0x48))) {
      uVar7 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                        (&REFG(undefined * PTR32, 0x13516ac),((uint *)(gen_frame + 0x40))[0],(uint)(*(int * PTR32 *)(gen_frame + 0x48)) & 0x3fffffff);
      return uVar7;
    }
    break;
  case 0x5: ;
    iVar19 = 0;
    if (0 < (int)(*(int * PTR32 *)&gen_args[1])) {
      do {
        uVar7 = F_00e0b030((*(undefined * PTR32 *)(gen_frame + 0x78)) GEN_EDX_ARG,*(*(undefined4 * PTR32 *)&gen_args[0]),iVar19);
        iVar19 = iVar19 + 1;
      } while (iVar19 < (int)piVar5);
      return uVar7;
    }
    break;
  case 0x6: ;
    piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0]))) + 0x10))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0]))) GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[1]))));
    (*(undefined4 * PTR32 *)(gen_frame + 0x74)) = ((undefined4 *)GEN_TOP(0x0));
    if (0 < (int)piVar5) {
      do {
        F_0105aec0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x78)) + 4))) GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x82)),1,1);
        uVar7 = (*(byte *)(gen_frame + 0x82)) >> 1 & 0x7fffffbf;
        bVar18 = (*(byte *)(gen_frame + 0x82)) & 1;
        bVar21 = 6;
        puVar14 = (*(undefined4 * PTR32 *)(gen_frame + 0x74));
        bVar3 = (*(byte *)(gen_frame + 0x82));
        while ((*(undefined4 * PTR32 *)(gen_frame + 0x74)) = puVar14, (char)bVar3 < '\0') {
          F_0105aec0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x78)) + 4))) GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x83)),1,1);
          bVar3 = bVar21 & 0x1f;
          bVar21 = bVar21 + 7;
          uVar7 = uVar7 | ((*(byte *)(gen_frame + 0x83)) & 0xffffff7f) << bVar3;
          puVar14 = (*(undefined4 * PTR32 *)(gen_frame + 0x74));
          bVar3 = (*(byte *)(gen_frame + 0x83));
        }
        if (bVar18 != 0) {
          uVar7 = -uVar7;
        }
        piVar8 = ((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0])));
        pcVar2 = *((gen_code32 *)GEN_TOP((*piVar8 + 100)));
        piVar8 = ((int *)GEN_TOP((*pcVar2)(piVar8,puVar14)));
        (*(int * PTR32 *)(gen_frame + 0x70)) = piVar8;
        if (piVar8 != ((int *)GEN_TOP(0x0))) {
          *((short *)GEN_TOP(((int)piVar8 + 6))) = *((short *)GEN_TOP(((int)piVar8 + 6))) + 1;
          piVar8[2] = piVar8[2] + 1;
        }
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x10))))(piVar8 GEN_EDX_ARG,uVar7);
        F_00e0b1e0((*(undefined * PTR32 *)(gen_frame + 0x78)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x70)),((int *)GEN_TOP(uVar7)));
        piVar8 = (*(int * PTR32 *)(gen_frame + 0x70));
        if ((*(int * PTR32 *)(gen_frame + 0x70)) != ((int *)GEN_TOP(0x0))) {
          *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x70)) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x70)) + 6))) - 1;
          piVar5 = (*(int * PTR32 *)(gen_frame + 0x70)) + 2;
          *piVar5 = *piVar5 - 1;
          if (*piVar5 == 0) {
            piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0x70)))))((*(int * PTR32 *)(gen_frame + 0x70)) GEN_EDX_ARG,1)));
          }
        }
        (*(undefined4 * PTR32 *)(gen_frame + 0x74)) = ((undefined4 *)GEN_TOP(((int)puVar14 + 1)));
      } while ((int)puVar14 + 1 < (int)(*(int * PTR32 *)&gen_args[1]));
    }
    break;
  case 0x7: ;
    if (*in_ecx != 9) {
      return (uint)piVar8;
    }
    if (*((int *)GEN_TOP(in_ecx[1])) != 3) {
      return 7;
    }
    puVar11 = ((undefined1 *)GEN_TOP(in_ecx[2]));
    if ((((puVar11 != &REFG(undefined, 0x4)) && (puVar11 != ((undefined1 *)GEN_TOP(0x8)))) &&
        (puVar11 != ((undefined1 *)GEN_TOP(0xc)))) && (puVar11 != ((undefined1 *)GEN_TOP(0x10)))) {
      return (uint)puVar11;
    }
    uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0]))) + 0x20))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0]))) GEN_EDX_ARG,((uint *)(gen_frame + 0x40)));
    if (uVar7 != 0) {
      puVar11 = ((undefined1 *)GEN_TOP(F_00e19c70(in_ecx GEN_EDX_ARG)));
      pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x78));
      puVar20 = puVar11;
      if (puVar11 == &REFG(undefined, 0x4)) {
        (*(undefined4 *)(gen_frame + 0xc)) = 0;
        F_0105aec0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x78)) + 4))) GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x82)),1,1);
        puVar11 = ((undefined1 *)GEN_TOP((uint)(*(byte *)(gen_frame + 0x82))));
        puVar20 = ((undefined1 *)GEN_TOP(((*(byte *)(gen_frame + 0x82)) >> 1 & 0x7fffffbf)));
        (*(undefined4 * PTR32 *)(gen_frame + 0x74)) = ((undefined4 *)GEN_TOP(((uint)puVar11 & 1)));
        bVar18 = 6;
        bVar21 = (*(byte *)(gen_frame + 0x82));
        while ((char)bVar21 < '\0') {
          F_0105aec0(((undefined *)GEN_TOP(((int)pvVar6 + 4))) GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x83)),1,1);
          puVar11 = ((undefined1 *)GEN_TOP((uint)(*(byte *)(gen_frame + 0x83))));
          bVar21 = bVar18 & 0x1f;
          bVar18 = bVar18 + 7;
          puVar20 = ((undefined1 *)GEN_TOP(((uint)puVar20 | ((uint)puVar11 & 0xffffff7f) << bVar21)));
          bVar21 = (*(byte *)(gen_frame + 0x83));
        }
        if ((*(undefined4 * PTR32 *)(gen_frame + 0x74)) != ((undefined4 *)GEN_TOP(0x0))) {
          puVar20 = ((undefined1 *)GEN_TOP(-(int)puVar20));
        }
      }
      iVar19 = 0;
      if ((int)(*(int * PTR32 *)&gen_args[1]) < 1) {
        return (uint)puVar11;
      }
      (*(int * PTR32 *)(gen_frame + 0x7c)) = ((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x78)) + 4)));
      do {
        F_0105aec0((*(int * PTR32 *)(gen_frame + 0x7c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),4,puVar20);
        uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0]))) + 0x30))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0]))) GEN_EDX_ARG,iVar19,((undefined1 *)(gen_frame + 0x0)));
        iVar19 = iVar19 + 1;
      } while (iVar19 < (int)(*(int * PTR32 *)&gen_args[1]));
      return uVar7;
    }
    piVar8 = ((int *)GEN_TOP(F_00e19c70(in_ecx GEN_EDX_ARG)));
    pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x78));
    (*(int * PTR32 *)(gen_frame + 0x70)) = piVar8;
    (*(int * PTR32 *)(gen_frame + 0x7c)) = piVar8;
    if (piVar8 == (int *)&REFG(undefined, 0x4)) {
      F_0105aec0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x78)) + 4))) GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x82)),1,1);
      piVar8 = ((int *)GEN_TOP(((*(byte *)(gen_frame + 0x82)) >> 1 & 0x7fffffbf)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x74)) = ((undefined4 *)GEN_TOP(((*(byte *)(gen_frame + 0x82)) & 1)));
      bVar18 = 6;
      bVar21 = (*(byte *)(gen_frame + 0x82));
      while ((char)bVar21 < '\0') {
        F_0105aec0(((undefined *)GEN_TOP(((int)pvVar6 + 4))) GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x83)),1,1);
        bVar21 = bVar18 & 0x1f;
        bVar18 = bVar18 + 7;
        piVar8 = ((int *)GEN_TOP(((uint)piVar8 | ((*(byte *)(gen_frame + 0x83)) & 0xffffff7f) << bVar21)));
        bVar21 = (*(byte *)(gen_frame + 0x83));
      }
      if ((*(undefined4 * PTR32 *)(gen_frame + 0x74)) != ((undefined4 *)GEN_TOP(0x0))) {
        piVar8 = ((int *)GEN_TOP(-(int)piVar8));
      }
      (*(int * PTR32 *)(gen_frame + 0x7c)) = piVar8;
    }
    piVar5 = (*(int * PTR32 *)(gen_frame + 0x70));
    piVar8 = (*(int * PTR32 *)&gen_args[1]);
    uVar7 = (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x70))) * (int)(*(int * PTR32 *)&gen_args[1]);
    (*(uint *)(gen_frame + 0x64)) = 0;
    (*(int * PTR32 *)(gen_frame + 0x68)) = ((int *)GEN_TOP(0x0));
    (*(int * PTR32 *)(gen_frame + 0x6c)) = ((int *)GEN_TOP(0x80000000));
    if (0 < (int)uVar7) {
      F_00d95690(&REFG(undefined * PTR32, 0x13516a4),&(*(uint *)(gen_frame + 0x64)),((int)uVar7 < 0) - 1 & uVar7,4);
    }
    (*(int * PTR32 *)(gen_frame + 0x68)) = ((int *)GEN_TOP(uVar7));
    F_0105aec0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x78)) + 4))) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x64)),4,(int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x7c))) * (int)piVar8);
    if (piVar5 != (*(int * PTR32 *)(gen_frame + 0x7c))) {
      iVar19 = 0;
      puVar14 = ((undefined4 *)GEN_TOP(((*(uint *)(gen_frame + 0x64)) + (int)((int)piVar8 - 1) * (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x7c))) * 4)));
      puVar10 = ((undefined4 *)GEN_TOP(((*(uint *)(gen_frame + 0x64)) + ((int)piVar8 - 1) * (int)((int)(uintptr_t)piVar5) * 4)));
      if (3 < (int)piVar8) {
        iVar16 = ((uint)(piVar8 - 1) >> 2) + 1;
        iVar19 = iVar16 * 4;
        puVar9 = puVar10;
        puVar15 = puVar14;
        do {
          puVar9[3] = 0;
          puVar9[2] = puVar15[2];
          puVar14 = puVar15 - 0xc;
          puVar10 = puVar9 - 0x10;
          iVar16 = iVar16 - 1;
          puVar9[1] = puVar15[1];
          uVar1 = *puVar15;
          puVar9[-1] = 0;
          *puVar9 = uVar1;
          puVar9[-2] = puVar15[-1];
          puVar9[-3] = puVar15[-2];
          uVar1 = puVar15[-3];
          puVar9[-5] = 0;
          puVar9[-4] = uVar1;
          puVar9[-6] = puVar15[-4];
          puVar9[-7] = puVar15[-5];
          uVar1 = puVar15[-6];
          puVar9[-9] = 0;
          puVar9[-8] = uVar1;
          puVar9[-10] = puVar15[-7];
          puVar9[-0xb] = puVar15[-8];
          puVar9[-0xc] = puVar15[-9];
          puVar9 = puVar10;
          puVar15 = puVar14;
        } while (iVar16 != 0);
      }
      if (iVar19 < (int)piVar8) {
        iVar19 = (int)piVar8 - iVar19;
        puVar10 = puVar10 + 2;
        puVar14 = puVar14 + 1;
        do {
          puVar10[1] = 0;
          *puVar10 = puVar14[1];
          iVar19 = iVar19 - 1;
          puVar10[-1] = *puVar14;
          puVar10[-2] = puVar14[-1];
          puVar10 = puVar10 - 4;
          puVar14 = puVar14 - 3;
        } while (iVar19 != 0);
      }
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0]))) + 0x70))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0]))) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x64)),piVar8);
    (*(int * PTR32 *)(gen_frame + 0x68)) = ((int *)GEN_TOP(0x0));
    if ((int)(*(int * PTR32 *)(gen_frame + 0x6c)) < 0) {
      return (uint)(*(int * PTR32 *)(gen_frame + 0x6c));
    }
    uVar7 = (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x6c))) * 4;
    goto LAB_00e0b2bd;
  }
  return (uint)piVar8;
}

/* ref: FUN_00e0bc80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0bc80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe0bc80u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  GEN_FRAME_DECL(0x6c, 4);
  longlong lVar1;
  undefined4 * puVar2;
  uint uVar3;
  undefined * pvVar4;
  undefined4 * puVar5;
  float fVar6;
  int * piVar7;
  code * pcVar8;
  int * piVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  
  uVar3 = (*(uint *)&gen_args[2]);
  (*(int * PTR32 *)(gen_frame + 0x60)) = (*(int * PTR32 *)&gen_args[0]);
  if ((*(int * PTR32 *)&gen_args[0]) != ((int *)GEN_TOP(0x0))) {
    *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 6))) + 1;
    (*(int * PTR32 *)&gen_args[0])[2] = (*(int * PTR32 *)&gen_args[0])[2] + 1;
  }
  puVar5 = *((undefined4 * PTR32 *)GEN_TOP(((*(uint *)&gen_args[2]) + 8)));
  piVar7 = ((int *)GEN_TOP(*puVar5));
  if ((piVar7 == ((int *)GEN_TOP(0x9))) &&
     ((*((int *)GEN_TOP(puVar5[1])) != 3 ||
      ((((iVar11 = puVar5[2], iVar11 != 4 && (iVar11 != 8)) && (iVar11 != 0xc)) && (iVar11 != 0x10))
      )))) {
    puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x28))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_FWD,(*(undefined4 *)&gen_args[1]))));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      *((short *)GEN_TOP(((int)puVar2 + 6))) = *((short *)GEN_TOP(((int)puVar2 + 6))) + 1;
      puVar2[2] = puVar2[2] + 1;
    }
    (*(uint *)&gen_args[2]) = (uint)puVar2;
    uVar3 = F_00e19c70(puVar5 GEN_EDX_ARG);
    uVar3 = F_00e0b1e0(param_1 GEN_EDX_ARG,&(*(uint *)&gen_args[2]),uVar3);
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      *((short *)GEN_TOP(((int)puVar2 + 6))) = *((short *)GEN_TOP(((int)puVar2 + 6))) - 1;
      piVar7 = puVar2 + 2;
      *piVar7 = *piVar7 - 1;
      if (*piVar7 == 0) {
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      }
    }
    if ((*(int * PTR32 *)(gen_frame + 0x60)) == ((int *)GEN_TOP(0x0))) {
      return uVar3;
    }
    *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x60)) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x60)) + 6))) - 1;
    piVar7 = (*(int * PTR32 *)(gen_frame + 0x60)) + 2;
    *piVar7 = *piVar7 - 1;
    if (*piVar7 != 0) {
      return uVar3;
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0x60)))))((*(int * PTR32 *)(gen_frame + 0x60)) GEN_EDX_ARG,1);
    return uVar3;
  }
  if (piVar7 == ((int *)GEN_TOP(0x8))) {
    pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_1[5])) + 0x2c))))(((int *)GEN_TOP(param_1[5])) GEN_EDX_ARG)));
    (*(undefined8 *)(gen_frame + 0x40)) = *((undefined8 *)GEN_TOP(uVar3));
    (*(int * PTR32 *)(gen_frame + 0x50)) = pvVar4;
    (*(undefined8 *)(gen_frame + 0x48)) = *((undefined8 *)GEN_TOP((uVar3 + 8)));
    F_0105aec0(param_1 + 1 GEN_EDX_ARG,(int)&(*(uint *)&gen_args[2]) + 3,1,1);
    piVar7 = ((int *)GEN_TOP(((*(undefined1 *)((char *)&(*(uint *)&gen_args[2]) + 3)) & 1)));
    piVar9 = ((int *)GEN_TOP(((*(undefined1 *)((char *)&(*(uint *)&gen_args[2]) + 3)) >> 1 & 0x7fffffbf)));
    (*(int * PTR32 *)(gen_frame + 0x58)) = piVar7;
    (*(int *)(gen_frame + 0x5c)) = 6;
    if ((int)(*(uint *)&gen_args[2]) < 0) {
      do {
        F_0105aec0(param_1 + 1 GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x67)),1,1);
        iVar11 = (*(int *)(gen_frame + 0x5c));
        (*(int *)(gen_frame + 0x5c)) = (*(int *)(gen_frame + 0x5c)) + 7;
        piVar9 = ((int *)GEN_TOP(((uint)piVar9 | ((*(byte *)(gen_frame + 0x67)) & 0xffffff7f) << GEN_SHC((byte)iVar11, (unsigned int)(uintptr_t)iVar11))));
        piVar7 = (*(int * PTR32 *)(gen_frame + 0x58));
      } while ((char)(*(byte *)(gen_frame + 0x67)) < '\0');
    }
    if (piVar7 != ((int *)GEN_TOP(0x0))) {
      piVar9 = ((int *)GEN_TOP(-(int)piVar9));
    }
    (*(int * PTR32 *)(gen_frame + 0x58)) = piVar9;
    uVar3 = F_00e1cd10(&(*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    if ((**((int * PTR32 *)GEN_TOP((uVar3 + 4))) == 6) && (uVar3 = F_00e19c80(*((int * PTR32 *)GEN_TOP((uVar3 + 4))) GEN_EDX_ARG), uVar3 == 0)) {
      F_0105aec0(param_1 + 1 GEN_EDX_ARG,(int)&(*(uint *)&gen_args[2]) + 3,1,1);
      uVar3 = (*(undefined1 *)((char *)&(*(uint *)&gen_args[2]) + 3)) >> 1 & 0x7fffffbf;
      (*(uint *)(gen_frame + 0x54)) = (*(undefined1 *)((char *)&(*(uint *)&gen_args[2]) + 3)) & 1;
      (*(int *)(gen_frame + 0x5c)) = 6;
      if ((int)(*(uint *)&gen_args[2]) < 0) {
        do {
          F_0105aec0(param_1 + 1 GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x67)),1,1);
          iVar11 = (*(int *)(gen_frame + 0x5c));
          (*(int *)(gen_frame + 0x5c)) = (*(int *)(gen_frame + 0x5c)) + 7;
          uVar3 = uVar3 | ((*(byte *)(gen_frame + 0x67)) & 0xffffff7f) << GEN_SHC((byte)iVar11, (unsigned int)(uintptr_t)iVar11);
        } while ((char)(*(byte *)(gen_frame + 0x67)) < '\0');
      }
      if ((*(uint *)(gen_frame + 0x54)) != 0) {
        uVar3 = -uVar3;
      }
      piVar7 = *((int * PTR32 *)GEN_TOP((param_1[7] + uVar3 * 4)));
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 8))))(piVar7 GEN_EDX_ARG);
      piVar7 = (*(int * PTR32 *)(gen_frame + 0x50));
      uVar3 = F_00e1a240((*(int * PTR32 *)(gen_frame + 0x50)) GEN_EDX_ARG,uVar3);
      uVar3 = F_00e1a670(piVar7 GEN_EDX_ARG,uVar3);
      (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x48)) + 0)) = uVar3;
      (*(undefined8 *)(gen_frame + 0x48)) = CONCAT44((*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x48)) + 4)),uVar3);
    }
    piVar9 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_1[5])) + 0x14))))
                              (((int *)GEN_TOP(param_1[5])) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x60)),(*(undefined4 *)&gen_args[1]),&(*(undefined8 *)(gen_frame + 0x40)))));
    piVar7 = (*(int * PTR32 *)(gen_frame + 0x58));
    if (piVar9 != ((int *)GEN_TOP(0x0))) {
      *((short *)GEN_TOP(((int)piVar9 + 6))) = *((short *)GEN_TOP(((int)piVar9 + 6))) + 1;
      piVar9[2] = piVar9[2] + 1;
    }
    pcVar8 = *((gen_code32 *)GEN_TOP((*piVar9 + 0x10)));
    (*(uint *)&gen_args[2]) = (uint)piVar9;
    (*pcVar8)(piVar9,(*(int * PTR32 *)(gen_frame + 0x58)));
    uVar3 = F_00e0b1e0(param_1 GEN_EDX_ARG,&(*(uint *)&gen_args[2]),piVar7);
    *((short *)GEN_TOP(((int)piVar9 + 6))) = *((short *)GEN_TOP(((int)piVar9 + 6))) - 1;
    piVar7 = piVar9 + 2;
    *piVar7 = *piVar7 - 1;
    if (*piVar7 == 0) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar9)))(piVar9 GEN_EDX_ARG,1);
    }
    if ((*(int * PTR32 *)(gen_frame + 0x60)) == ((int *)GEN_TOP(0x0))) {
      return uVar3;
    }
    *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x60)) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x60)) + 6))) - 1;
    piVar7 = (*(int * PTR32 *)(gen_frame + 0x60)) + 2;
    *piVar7 = *piVar7 - 1;
    if (*piVar7 != 0) {
      return uVar3;
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0x60)))))((*(int * PTR32 *)(gen_frame + 0x60)) GEN_EDX_ARG,1);
    return uVar3;
  }
  switch((unsigned int)(uintptr_t)(piVar7)) {
  case 0x2: ;
    F_0105aec0(param_1 + 1 GEN_EDX_ARG,(int)&(*(uint *)&gen_args[2]) + 3,1,1);
    fVar6 = gen_bits2f((*(uint *)&gen_args[2]) >> 0x18);
    pcVar8 = *((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x44)));
    goto LAB_00e0c103;
  case 0x3: ;
    (*(uint *)&gen_args[2]) = (uint)gen_fl2bits(F_00e093a0(param_1 GEN_EDX_ARG));
    pcVar8 = *((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x50)));
    fVar6 = gen_bits2f((*(uint *)&gen_args[2]));
    goto LAB_00e0c103;
  case 0x4: ;
    piVar7 = param_1 + 1;
    (*(int * PTR32 *)(gen_frame + 0x50)) = piVar7;
    F_0105aec0(piVar7 GEN_EDX_ARG,(int)&(*(uint *)&gen_args[2]) + 3,1,1);
    uVar3 = (*(undefined1 *)((char *)&(*(uint *)&gen_args[2]) + 3)) >> 1 & 0xffffffbf;
    uVar10 = 0;
    (*(uint *)(gen_frame + 0x54)) = (*(undefined1 *)((char *)&(*(uint *)&gen_args[2]) + 3)) & 1;
    (*(int *)(gen_frame + 0x5c)) = 6;
    if (((*(uint *)&gen_args[2]) & 0x80000000) != 0) {
      do {
        F_0105aec0(piVar7 GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x67)),1,1);
        lVar1 = ((ulonglong)(((ulonglong)(byte)(*(int *)(gen_frame + 0x5c)) < 0x40) ? (((ulonglong)((*(byte *)(gen_frame + 0x67)) & 0xffffff7f) << (ulonglong)(byte)(*(int *)(gen_frame + 0x5c)))) : 0));
        (*(int *)(gen_frame + 0x5c)) = (*(int *)(gen_frame + 0x5c)) + 7;
        uVar3 = uVar3 | (uint)lVar1;
        uVar10 = uVar10 | (uint)((ulonglong)lVar1 >> 0x20);
        piVar7 = (*(int * PTR32 *)(gen_frame + 0x50));
      } while (((*(byte *)(gen_frame + 0x67)) & 0x80) != 0);
    }
    if ((*(uint *)(gen_frame + 0x54)) != 0) {
      bVar12 = uVar3 != 0;
      uVar3 = -uVar3;
      uVar10 = -(uVar10 + bVar12);
    }
    piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x40))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]),uVar3,uVar10)));
    break;
  case 0x5: ;
    fVar6 = gen_bits2f(F_00e09fa0(param_1 GEN_EDX_ARG));
    pcVar8 = *((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x54)));
LAB_00e0c103: ;
    piVar7 = ((int *)GEN_TOP((*pcVar8)((*(int * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(undefined4)gen_fl2bits(fVar6))));
    break;
  case 0x6: ;
    if (1 < *param_1) {
      iVar11 = *((int *)GEN_TOP(param_1[5]));
      uVar3 = F_00e19c80(puVar5 GEN_EDX_ARG);
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((iVar11 + 0x24))))(param_1[5],uVar3);
      puVar5 = ((undefined4 *)GEN_TOP(F_00e0c190(param_1 GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x58)),3,uVar3)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x5c))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]),*puVar5);
      piVar7 = (*(int * PTR32 *)(gen_frame + 0x58));
      if ((*(int * PTR32 *)(gen_frame + 0x58)) != ((int *)GEN_TOP(0x0))) {
        *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x58)) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x58)) + 6))) - 1;
        piVar9 = (*(int * PTR32 *)(gen_frame + 0x58)) + 2;
        *piVar9 = *piVar9 - 1;
        if (*piVar9 == 0) {
          piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0x58)))))((*(int * PTR32 *)(gen_frame + 0x58)) GEN_EDX_ARG,1)));
        }
      }
      break;
    }
  case 0x7: ;
    piVar7 = ((int *)GEN_TOP(F_00e0cc30(param_1 GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]))));
    break;
  case 0x9: ;
    if (((piVar7 == ((int *)GEN_TOP(0x9))) && (piVar7 = ((int *)GEN_TOP(puVar5[1])), *piVar7 == 3)) &&
       ((piVar7 = ((int *)GEN_TOP(puVar5[2])), piVar7 == (int *)&REFG(undefined, 0x4) ||
        (((piVar7 == ((int *)GEN_TOP(0x8)) || (piVar7 == ((int *)GEN_TOP(0xc)))) || (piVar7 == ((int *)GEN_TOP(0x10)))))))) {
      uVar3 = F_00e19c70(puVar5 GEN_EDX_ARG);
      iVar11 = 0;
      if (0 < (int)uVar3) {
        do {
          F_0105aec0(param_1 + 1 GEN_EDX_ARG,&(*(uint *)&gen_args[2]),4,1);
          ((uint *)(gen_frame + 0x0))[(int)(iVar11)] = (*(uint *)&gen_args[2]);
          iVar11 = iVar11 + 1;
        } while (iVar11 < (int)uVar3);
      }
      piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x48))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]),((uint *)(gen_frame + 0x0)),uVar3)));
    }
  }
  if ((*(int * PTR32 *)(gen_frame + 0x60)) != ((int *)GEN_TOP(0x0))) {
    piVar7 = ((int *)GEN_TOP(0xffffffff));
    *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x60)) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x60)) + 6))) - 1;
    piVar9 = (*(int * PTR32 *)(gen_frame + 0x60)) + 2;
    *piVar9 = *piVar9 - 1;
    if (*piVar9 == 0) {
      piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0x60)))))((*(int * PTR32 *)(gen_frame + 0x60)) GEN_EDX_ARG,1)));
    }
  }
  return (uint)piVar7;
}

/* ref: FUN_00e0c150 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0c150(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe0c150u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00e0afb0(param_1 GEN_EDX_FWD);
  if (((param_2 & 1) != 0) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x18);
  }
  return (uint)param_1;
}

/* ref: FUN_00e0c190 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0c190(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe0c190u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  GEN_FRAME_DECL(0x25c, 4);
  undefined * pvVar1;
  code * pcVar2;
  byte bVar3;
  int * piVar4;
  undefined * pvVar5;
  uint uVar6;
  LPVOID pvVar7;
  uint uVar8;
  undefined4 * puVar9;
  int iVar10;
  int iVar11;
  int * piVar12;
  uint uVar13;
  byte bVar14;
  
  (*(undefined * PTR32 *)(gen_frame + 0x250)) = this;
  if ((*(int * PTR32 *)&gen_args[1]) == ((int *)GEN_TOP(0x0))) {
    F_0105aec0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,(int)&(*(int * PTR32 *)&gen_args[1]) + 3,1,1);
    piVar12 = ((int *)GEN_TOP(((*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[1]) + 3)))) >> 1 & 0x7fffffbf)));
    (*(uint *)(gen_frame + 0x24c)) = (*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[1]) + 3)))) & 1;
    bVar14 = 6;
    if ((int)(*(int * PTR32 *)&gen_args[1]) < 0) {
      do {
        F_0105aec0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x257)),1,1);
        bVar3 = bVar14 & 0x1f;
        bVar14 = bVar14 + 7;
        piVar12 = ((int *)GEN_TOP(((uint)piVar12 | ((*(byte *)(gen_frame + 0x257)) & 0xffffff7f) << bVar3)));
      } while ((char)(*(byte *)(gen_frame + 0x257)) < '\0');
    }
    (*(int * PTR32 *)&gen_args[1]) = piVar12;
    if ((*(uint *)(gen_frame + 0x24c)) != 0) {
      (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(-(int)piVar12));
    }
  }
  pvVar1 = (*(undefined * PTR32 *)(gen_frame + 0x250));
  if ((*(int * PTR32 *)&gen_args[1]) == (int *)&REFG(undefined, 0x5)) {
    F_0105aec0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x250)) + 4))) GEN_EDX_ARG,(int)&(*(int * PTR32 *)&gen_args[1]) + 3,1,1);
    uVar13 = (*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[1]) + 3)))) >> 1 & 0x7fffffbf;
    (*(uint *)(gen_frame + 0x24c)) = (*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[1]) + 3)))) & 1;
    bVar14 = 6;
    piVar12 = (*(int * PTR32 *)&gen_args[1]);
    while ((int)piVar12 < 0) {
      F_0105aec0(((undefined *)GEN_TOP(((int)pvVar1 + 4))) GEN_EDX_ARG,(int)&(*(int * PTR32 *)&gen_args[2]) + 3,1,1);
      bVar3 = bVar14 & 0x1f;
      bVar14 = bVar14 + 7;
      uVar13 = uVar13 | ((uint)(*(int * PTR32 *)&gen_args[2]) >> 0x18 & 0x7f) << bVar3;
      piVar12 = (*(int * PTR32 *)&gen_args[2]);
    }
    if ((*(uint *)(gen_frame + 0x24c)) != 0) {
      uVar13 = -uVar13;
    }
    iVar10 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar1 + 0x38))) + uVar13 * 4)));
    *(*(int * PTR32 *)&gen_args[0]) = iVar10;
    if (iVar10 != 0) {
      *((short *)GEN_TOP((iVar10 + 6))) = *((short *)GEN_TOP((iVar10 + 6))) + 1;
      *((int *)GEN_TOP((iVar10 + 8))) = *((int *)GEN_TOP((iVar10 + 8))) + 1;
      return (uint)(*(int * PTR32 *)&gen_args[0]);
    }
  }
  else {
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)&REFG(undefined, 0x6)) {
      *(*(int * PTR32 *)&gen_args[0]) = 0;
      return (uint)(*(int * PTR32 *)&gen_args[0]);
    }
    piVar12 = (*(int * PTR32 *)&gen_args[2]);
    if ((*(int * PTR32 *)&gen_args[2]) == ((int *)GEN_TOP(0x0))) {
      F_0105aec0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x250)) + 4))) GEN_EDX_ARG,(int)&(*(int * PTR32 *)&gen_args[2]) + 3,1,1);
      uVar13 = (*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[2]) + 3)))) >> 1 & 0x7fffffbf;
      (*(uint *)(gen_frame + 0x24c)) = (*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[2]) + 3)))) & 1;
      bVar14 = 6;
      if ((int)(*(int * PTR32 *)&gen_args[2]) < 0) {
        do {
          F_0105aec0(((undefined *)GEN_TOP(((int)pvVar1 + 4))) GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x257)),1,1);
          bVar3 = bVar14 & 0x1f;
          bVar14 = bVar14 + 7;
          uVar13 = uVar13 | ((*(byte *)(gen_frame + 0x257)) & 0xffffff7f) << bVar3;
        } while ((char)(*(byte *)(gen_frame + 0x257)) < '\0');
      }
      if ((*(uint *)(gen_frame + 0x24c)) != 0) {
        uVar13 = -uVar13;
      }
      piVar12 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar1 + 0x1c))) + uVar13 * 4)));
    }
    piVar4 = (*(int * PTR32 *)&gen_args[1]);
    (*(int * PTR32 *)(gen_frame + 0x20c)) = piVar12;
    uVar13 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar12 + 0x24))))(piVar12 GEN_EDX_ARG);
    (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x14))) + 0x10))))
                               (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x14))) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x20c)),0)));
    if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(0x0))) {
      *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 6))) + 1;
      (*(int * PTR32 *)&gen_args[1])[2] = (*(int * PTR32 *)&gen_args[1])[2] + 1;
    }
    if (piVar4 != ((int *)GEN_TOP(0x3))) {
      if (piVar4 == (int *)&REFG(undefined, 0x4)) {
        (*(int * PTR32 *)&gen_args[2]) = *((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x3c)));
        if (*((uint *)GEN_TOP(((int)pvVar1 + 0x3c))) == (*((uint *)GEN_TOP(((int)pvVar1 + 0x40))) & 0x3fffffff)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516ac),((int *)GEN_TOP(((int)pvVar1 + 0x38))),4);
        }
        pvVar5 = (*(undefined * PTR32 *)(gen_frame + 0x250));
        *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar1 + 0x38))) + *((int *)GEN_TOP(((int)pvVar1 + 0x3c))) * 4))) = (*(int * PTR32 *)&gen_args[1]);
        *((int *)GEN_TOP(((int)pvVar1 + 0x3c))) = *((int *)GEN_TOP(((int)pvVar1 + 0x3c))) + 1;
        (*(int * PTR32 *)&gen_args[2]) = ((int *)GEN_TOP(F_00dbd930(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x250)) + 0x44))) GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[2]))));
        if ((int)(*(int * PTR32 *)&gen_args[2]) <= *((int *)GEN_TOP(((int)pvVar5 + 0x4c)))) {
          pvVar1 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar5 + 0x44))) + 4 + (int)(*(int * PTR32 *)&gen_args[2]) * 8)));
          F_00e09780(pvVar1 GEN_EDX_ARG,&(*(int * PTR32 *)&gen_args[1]));
          if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
            F_00e0afb0(pvVar1 GEN_EDX_ARG);
            pvVar7 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar7 + 0x2c))) + 8))))
                      (*((int * PTR32 *)GEN_TOP(((int)pvVar7 + 0x2c))) GEN_EDX_ARG,pvVar1,0x18);
          }
          F_00dbd9f0(((undefined *)GEN_TOP(((int)pvVar5 + 0x44))) GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[2]));
        }
      }
      else {
        F_00da0a80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
        F_00d9fe80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,((char *)REFP(0x114d648)));
        uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                          (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,3,0x484994d5,((undefined1 *)(gen_frame + 0x0)),
                           ((char *)REFP(0x114d61c)),0x28a);
        if (uVar6 != 0) {
          pcVar2 = ((code *)GEN_TOP(swi(3)));
          uVar13 = (*pcVar2)();
          return uVar13;
        }
        F_00d9fda0(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG);
      }
    }
    ((uint *)(gen_frame + 0x210))[0] = 0;
    ((uint *)(gen_frame + 0x210))[1] = 0;
    ((uint *)(gen_frame + 0x210))[2] = 0x80000000;
    (*(int *)(gen_frame + 0x220)) = 0x80;
    pvVar7 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar6 = *((uint *)GEN_TOP(((int)pvVar7 + 0xc)));
    if ((*((int *)GEN_TOP(((int)pvVar7 + 8))) < 0x80) || (*((uint *)GEN_TOP(((int)pvVar7 + 0x10))) < uVar6 + 0x80)) {
      uVar6 = F_00d94390(pvVar7 GEN_EDX_ARG,0x80);
    }
    else {
      *((uint *)GEN_TOP(((int)pvVar7 + 0xc))) = uVar6 + 0x80;
    }
    ((uint *)(gen_frame + 0x210))[0] = uVar6;
    ((uint *)(gen_frame + 0x210))[2] = 0x80000080;
    ((uint *)(gen_frame + 0x210))[3] = uVar6;
    F_00e0a0a0((*(undefined * PTR32 *)(gen_frame + 0x250)) GEN_EDX_ARG,uVar13,((uint *)(gen_frame + 0x210)));
    uVar6 = 0;
    uVar8 = 0;
    (*(uint *)(gen_frame + 0x238)) = 0;
    (*(uint *)(gen_frame + 0x23c)) = 0;
    (*(uint *)(gen_frame + 0x240)) = 0x80000000;
    (*(uint *)(gen_frame + 0x248)) = uVar13;
    if (uVar13 != 0) {
      pvVar7 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      uVar6 = *((uint *)GEN_TOP(((int)pvVar7 + 0xc)));
      uVar8 = uVar13 * 0x10 + 0x7f & 0xffffff80;
      if ((*((int *)GEN_TOP(((int)pvVar7 + 8))) < (int)uVar8) ||
         (*((uint *)GEN_TOP(((int)pvVar7 + 0x10))) < uVar6 + uVar8)) {
        uVar6 = F_00d94390(pvVar7 GEN_EDX_ARG,uVar8);
        uVar8 = (*(uint *)(gen_frame + 0x23c));
      }
      else {
        *((uint *)GEN_TOP(((int)pvVar7 + 0xc))) = uVar6 + uVar8;
        uVar8 = (*(uint *)(gen_frame + 0x23c));
      }
    }
    iVar10 = uVar13 - uVar8;
    (*(uint *)(gen_frame + 0x238)) = uVar6;
    (*(uint *)(gen_frame + 0x240)) = uVar13 | 0x80000000;
    (*(uint *)(gen_frame + 0x244)) = uVar6;
    if (0 < iVar10) {
      puVar9 = ((undefined4 *)GEN_TOP((uVar8 * 0x10 + uVar6 + 8)));
      do {
        if (puVar9 != ((undefined4 *)GEN_TOP(0x8))) {
          puVar9[-2] = 0;
          puVar9[-1] = 0;
          *puVar9 = 0;
          puVar9[1] = 0;
        }
        puVar9 = puVar9 + 4;
        iVar10 = iVar10 - 1;
      } while (iVar10 != 0);
    }
    (*(uint *)(gen_frame + 0x23c)) = uVar13;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x20c)) + 0x30))))((*(int * PTR32 *)(gen_frame + 0x20c)) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x238)));
    (*(uint *)(gen_frame + 0x224)) = 0;
    (*(uint *)(gen_frame + 0x228)) = 0;
    (*(uint *)(gen_frame + 0x22c)) = 0x80000000;
    (*(uint *)(gen_frame + 0x234)) = uVar13;
    if (uVar13 == 0) {
      uVar6 = 0;
    }
    else {
      pvVar7 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      uVar6 = *((uint *)GEN_TOP(((int)pvVar7 + 0xc)));
      uVar8 = uVar13 * 4 + 0x7f & 0xffffff80;
      if ((*((int *)GEN_TOP(((int)pvVar7 + 8))) < (int)uVar8) ||
         (*((uint *)GEN_TOP(((int)pvVar7 + 0x10))) < uVar6 + uVar8)) {
        uVar6 = F_00d94390(pvVar7 GEN_EDX_ARG,uVar8);
      }
      else {
        *((uint *)GEN_TOP(((int)pvVar7 + 0xc))) = uVar6 + uVar8;
      }
    }
    (*(uint *)(gen_frame + 0x224)) = uVar6;
    (*(uint *)(gen_frame + 0x230)) = uVar6;
    (*(uint *)(gen_frame + 0x22c)) = uVar13 | 0x80000000;
    (*(uint *)(gen_frame + 0x228)) = uVar13;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x74))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x224)));
    iVar10 = 0;
    if (0 < (int)uVar13) {
      iVar11 = 0;
      do {
        if (*((char *)GEN_TOP((((uint *)(gen_frame + 0x210))[0] + iVar10))) != '\0') {
          F_00e0bc80((*(undefined * PTR32 *)(gen_frame + 0x250)) GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[1]),*((undefined4 *)GEN_TOP(((*(uint *)(gen_frame + 0x224)) + iVar10 * 4))),iVar11 + (*(uint *)(gen_frame + 0x238)));
        }
        iVar10 = iVar10 + 1;
        iVar11 = iVar11 + 0x10;
      } while (iVar10 < (int)uVar13);
    }
    uVar6 = (*(uint *)(gen_frame + 0x234));
    uVar13 = (*(uint *)(gen_frame + 0x230));
    *(*(int * PTR32 *)&gen_args[0]) = (int)(*(int * PTR32 *)&gen_args[1]);
    *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 6))) + 1;
    (*(int * PTR32 *)&gen_args[1])[2] = (*(int * PTR32 *)&gen_args[1])[2] + 1;
    if ((*(uint *)(gen_frame + 0x230)) == (*(uint *)(gen_frame + 0x224))) {
      (*(uint *)(gen_frame + 0x228)) = 0;
    }
    pvVar7 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar6 = uVar6 * 4 + 0x7f & 0xffffff80;
    if (((*((int *)GEN_TOP(((int)pvVar7 + 8))) < (int)uVar6) || (uVar6 + uVar13 != *((int *)GEN_TOP(((int)pvVar7 + 0xc))))
        ) || (*((uint *)GEN_TOP(((int)pvVar7 + 0x14))) == uVar13)) {
      F_00d945c0(pvVar7 GEN_EDX_ARG,uVar13,uVar6);
    }
    else {
      *((uint *)GEN_TOP(((int)pvVar7 + 0xc))) = uVar13;
    }
    (*(uint *)(gen_frame + 0x228)) = 0;
    if (-1 < (int)(*(uint *)(gen_frame + 0x22c))) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0x224)),(*(uint *)(gen_frame + 0x22c)) * 4);
    }
    uVar6 = (*(uint *)(gen_frame + 0x248));
    uVar13 = (*(uint *)(gen_frame + 0x244));
    (*(uint *)(gen_frame + 0x224)) = 0;
    (*(uint *)(gen_frame + 0x22c)) = 0x80000000;
    if ((*(uint *)(gen_frame + 0x244)) == (*(uint *)(gen_frame + 0x238))) {
      (*(uint *)(gen_frame + 0x23c)) = 0;
    }
    pvVar7 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar6 = uVar6 * 0x10 + 0x7f & 0xffffff80;
    if (((*((int *)GEN_TOP(((int)pvVar7 + 8))) < (int)uVar6) || (uVar6 + uVar13 != *((int *)GEN_TOP(((int)pvVar7 + 0xc))))
        ) || (*((uint *)GEN_TOP(((int)pvVar7 + 0x14))) == uVar13)) {
      F_00d945c0(pvVar7 GEN_EDX_ARG,uVar13,uVar6);
    }
    else {
      *((uint *)GEN_TOP(((int)pvVar7 + 0xc))) = uVar13;
    }
    (*(uint *)(gen_frame + 0x23c)) = 0;
    if (-1 < (int)(*(uint *)(gen_frame + 0x240))) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0x238)),(*(uint *)(gen_frame + 0x240)) << 4);
    }
    iVar10 = (*(int *)(gen_frame + 0x220));
    uVar13 = ((uint *)(gen_frame + 0x210))[3];
    (*(uint *)(gen_frame + 0x238)) = 0;
    (*(uint *)(gen_frame + 0x240)) = 0x80000000;
    if (((uint *)(gen_frame + 0x210))[3] == ((uint *)(gen_frame + 0x210))[0]) {
      ((uint *)(gen_frame + 0x210))[1] = 0;
    }
    pvVar7 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar6 = iVar10 + 0x7fU & 0xffffff80;
    if (((*((int *)GEN_TOP(((int)pvVar7 + 8))) < (int)uVar6) || (uVar6 + uVar13 != *((int *)GEN_TOP(((int)pvVar7 + 0xc))))
        ) || (*((uint *)GEN_TOP(((int)pvVar7 + 0x14))) == uVar13)) {
      F_00d945c0(pvVar7 GEN_EDX_ARG,uVar13,uVar6);
    }
    else {
      *((uint *)GEN_TOP(((int)pvVar7 + 0xc))) = uVar13;
    }
    ((uint *)(gen_frame + 0x210))[1] = 0;
    if (-1 < (int)((uint *)(gen_frame + 0x210))[2]) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516ac),((uint *)(gen_frame + 0x210))[0],((uint *)(gen_frame + 0x210))[2] & 0x3fffffff);
    }
    ((uint *)(gen_frame + 0x210))[0] = 0;
    ((uint *)(gen_frame + 0x210))[2] = 0x80000000;
    *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 6))) - 1;
    piVar12 = (*(int * PTR32 *)&gen_args[1]) + 2;
    *piVar12 = *piVar12 - 1;
    if (*piVar12 == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG,1);
    }
  }
  return (uint)(*(int * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00e0c7b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0c7b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe0c7b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x224, 12);
  uint * this_00;
  int * piVar1;
  int iVar2;
  byte bVar3;
  uint * puVar4;
  undefined * pvVar5;
  byte bVar6;
  uint uVar7;
  
  pvVar5 = ((undefined *)GEN_TOP(((int)this + 4)));
  (*(uint * PTR32 *)(gen_frame + 0x210)) = this;
  F_0105aec0(pvVar5 GEN_EDX_FWD,&(*(undefined4 * PTR32 *)(gen_frame + 0x20c)),4,1);
  F_0105aec0(pvVar5 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x218)),4,1);
  if (((*(undefined4 * PTR32 *)(gen_frame + 0x20c)) != ((undefined4 *)GEN_TOP(0xcab00d1e))) || ((*(uint *)(gen_frame + 0x218)) != 0xd011face)) {
    F_00da0a80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
    F_00d9fe80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,((char *)REFP(0x114d658)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
              (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,1,0x2ab6036f,((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x114d61c)),
               0x2e4);
    F_00d9fda0(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG);
    *param_1 = 0;
    return (uint)param_1;
  }
  F_0105aec0(pvVar5 GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x21e)),1,1);
  uVar7 = (*(byte *)(gen_frame + 0x21e)) >> 1 & 0x7fffffbf;
  (*(uint *)(gen_frame + 0x218)) = (*(byte *)(gen_frame + 0x21e)) & 1;
  bVar6 = 6;
  bVar3 = (*(byte *)(gen_frame + 0x21e));
  while ((char)bVar3 < '\0') {
    F_0105aec0(pvVar5 GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x21f)),1,1);
    bVar3 = bVar6 & 0x1f;
    bVar6 = bVar6 + 7;
    uVar7 = uVar7 | ((*(byte *)(gen_frame + 0x21f)) & 0xffffff7f) << bVar3;
    bVar3 = (*(byte *)(gen_frame + 0x21f));
  }
  if ((*(uint *)(gen_frame + 0x218)) != 0) {
    uVar7 = -uVar7;
  }
  if (uVar7 != 0xffffffff) {
    do {
      puVar4 = (*(uint * PTR32 *)(gen_frame + 0x210));
      switch((unsigned int)(uintptr_t)(uVar7)) {
      case 1: ;
        F_0105aec0(pvVar5 GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x21f)),1,1);
        uVar7 = (*(byte *)(gen_frame + 0x21f)) >> 1 & 0x7fffffbf;
        (*(uint *)(gen_frame + 0x218)) = (*(byte *)(gen_frame + 0x21f)) & 1;
        bVar6 = 6;
        puVar4 = (*(uint * PTR32 *)(gen_frame + 0x210));
        bVar3 = (*(byte *)(gen_frame + 0x21f));
        while ((*(uint * PTR32 *)(gen_frame + 0x210)) = puVar4, (char)bVar3 < '\0') {
          F_0105aec0(pvVar5 GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x21e)),1,1);
          bVar3 = bVar6 & 0x1f;
          bVar6 = bVar6 + 7;
          uVar7 = uVar7 | ((*(byte *)(gen_frame + 0x21e)) & 0xffffff7f) << bVar3;
          puVar4 = (*(uint * PTR32 *)(gen_frame + 0x210));
          bVar3 = (*(byte *)(gen_frame + 0x21e));
        }
        if ((*(uint *)(gen_frame + 0x218)) != 0) {
          uVar7 = -uVar7;
        }
        *puVar4 = uVar7;
        switch((unsigned int)(uintptr_t)(uVar7)) {
        case 0: ;
          break;
        case 1: ;
          F_0105aec0(pvVar5 GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x216)),1,1);
          uVar7 = (*(byte *)(gen_frame + 0x216)) >> 1 & 0x7fffffbf;
          (*(uint *)(gen_frame + 0x218)) = (*(byte *)(gen_frame + 0x216)) & 1;
          bVar6 = 6;
          puVar4 = (*(uint * PTR32 *)(gen_frame + 0x210));
          bVar3 = (*(byte *)(gen_frame + 0x216));
          while ((*(uint * PTR32 *)(gen_frame + 0x210)) = puVar4, (char)bVar3 < '\0') {
            F_0105aec0(pvVar5 GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x214)),1,1);
            bVar3 = bVar6 & 0x1f;
            bVar6 = bVar6 + 7;
            uVar7 = uVar7 | ((*(byte *)(gen_frame + 0x214)) & 0xffffff7f) << bVar3;
            puVar4 = (*(uint * PTR32 *)(gen_frame + 0x210));
            bVar3 = (*(byte *)(gen_frame + 0x214));
          }
          if ((*(uint *)(gen_frame + 0x218)) != 0) {
            uVar7 = -uVar7;
          }
          if (uVar7 != 1) goto switchD_00e0c87f_caseD_5;
          this_00 = puVar4 + 10;
          puVar4[0xb] = 0;
          if (puVar4[0xb] == (puVar4[0xc] & 0x3fffffff)) {
            F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this_00,4);
          }
          *((undefined1 * PTR32 *)GEN_TOP((*this_00 + puVar4[0xb] * 4))) = &REFG(undefined1, 0x107fc63);
          puVar4[0xb] = puVar4[0xb] + 1;
          if (puVar4[0xb] == (puVar4[0xc] & 0x3fffffff)) {
            F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this_00,4);
          }
          *((undefined4 *)GEN_TOP((*this_00 + puVar4[0xb] * 4))) = 0;
          puVar4[0xb] = puVar4[0xb] + 1;
          F_00e09a40(this_00 GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),&REFG(undefined * PTR32, 0x1354f18),0x6d8);
          puVar4[0xd] = 0x6da;
          break;
        case 2: ;
        case 3: ;
          if (puVar4[0xf] == (puVar4[0x10] & 0x3fffffff)) {
            F_00d95710(&REFG(undefined * PTR32, 0x13516ac),puVar4 + 0xe,4);
          }
          *((undefined4 *)GEN_TOP((puVar4[0xe] + puVar4[0xf] * 4))) = 0;
          puVar4[0xf] = puVar4[0xf] + 1;
          break;
        default: ;
          F_00da0a80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
          uVar7 = *puVar4;
          pvVar5 = ((undefined *)GEN_TOP(F_00d9fe80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,((char *)REFP(0x114d69c)))));
          F_00d9ff40(pvVar5 GEN_EDX_ARG,uVar7);
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                    (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,1,0x2ab6036f,((undefined1 *)(gen_frame + 0x0)),
                     ((char *)REFP(0x114d61c)),0x313);
          F_00d9fda0(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG);
          goto switchD_00e0c87f_caseD_5;
        }
        break;
      case 2: ;
        uVar7 = F_00e0abd0((*(uint * PTR32 *)(gen_frame + 0x210)) GEN_EDX_ARG);
        if (uVar7 == 1) goto switchD_00e0c87f_caseD_5;
        break;
      case 3: ;
      case 4: ;
      case 6: ;
        F_00e0c190((*(uint * PTR32 *)(gen_frame + 0x210)) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0x20c)),uVar7,0);
        if ((int)*puVar4 < 2) {
          *param_1 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x20c));
          if ((*(undefined4 * PTR32 *)(gen_frame + 0x20c)) != ((undefined4 *)GEN_TOP(0x0))) {
            *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x20c)) + 6))) = *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x20c)) + 6))) + 1;
            (*(undefined4 * PTR32 *)(gen_frame + 0x20c))[2] = (*(undefined4 * PTR32 *)(gen_frame + 0x20c))[2] + 1;
            *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x20c)) + 6))) = *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x20c)) + 6))) - 1;
            piVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0x20c)) + 2;
            *piVar1 = *piVar1 - 1;
            if (*piVar1 == 0) {
              ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x20c)))))((*(undefined4 * PTR32 *)(gen_frame + 0x20c)) GEN_EDX_ARG,1);
            }
          }
          return (uint)param_1;
        }
        if ((*(undefined4 * PTR32 *)(gen_frame + 0x20c)) != ((undefined4 *)GEN_TOP(0x0))) {
          *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x20c)) + 6))) = *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x20c)) + 6))) - 1;
          piVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0x20c)) + 2;
          *piVar1 = *piVar1 - 1;
          if (*piVar1 == 0) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x20c)))))((*(undefined4 * PTR32 *)(gen_frame + 0x20c)) GEN_EDX_ARG,1);
          }
        }
        break;
      default: ;
        goto switchD_00e0c87f_caseD_5;
      case 7: ;
        iVar2 = *((int *)GEN_TOP(((*(uint * PTR32 *)(gen_frame + 0x210))[0xe] + 4)));
        *param_1 = iVar2;
        if (iVar2 == 0) {
          return (uint)param_1;
        }
        *((short *)GEN_TOP((iVar2 + 6))) = *((short *)GEN_TOP((iVar2 + 6))) + 1;
        *((int *)GEN_TOP((iVar2 + 8))) = *((int *)GEN_TOP((iVar2 + 8))) + 1;
        return (uint)param_1;
      }
      F_0105aec0(pvVar5 GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x215)),1,1);
      uVar7 = (*(byte *)(gen_frame + 0x215)) >> 1 & 0x7fffffbf;
      (*(uint *)(gen_frame + 0x218)) = (*(byte *)(gen_frame + 0x215)) & 1;
      bVar6 = 6;
      bVar3 = (*(byte *)(gen_frame + 0x215));
      while ((char)bVar3 < '\0') {
        F_0105aec0(pvVar5 GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x217)),1,1);
        bVar3 = bVar6 & 0x1f;
        bVar6 = bVar6 + 7;
        uVar7 = uVar7 | ((*(byte *)(gen_frame + 0x217)) & 0xffffff7f) << bVar3;
        bVar3 = (*(byte *)(gen_frame + 0x217));
      }
      if ((*(uint *)(gen_frame + 0x218)) != 0) {
        uVar7 = -uVar7;
      }
      if (uVar7 == 0xffffffff) {
        *param_1 = 0;
        return (uint)param_1;
      }
    } while( true );
  }
switchD_00e0c87f_caseD_5: ;
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00e0cc30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0cc30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe0cc30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0x10, 0);
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined4 uVar4;
  code * pcVar5;
  byte bVar6;
  LPVOID pvVar7;
  undefined4 * puVar8;
  uint uVar9;
  byte bVar10;
  
  iVar3 = *(int *)this;
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = this;
  if (iVar3 < 2) {
    F_00e0c190(this GEN_EDX_FWD,&(*(undefined4 * PTR32 *)(gen_frame + 0x0)),0,0);
    puVar8 = (*(undefined4 * PTR32 *)(gen_frame + 0x0));
    uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x5c))))(param_1 GEN_EDX_ARG,param_2,(*(undefined4 * PTR32 *)(gen_frame + 0x0)));
    if (puVar8 != ((undefined4 *)GEN_TOP(0x0))) {
      uVar9 = 0xffffffff;
      *((short *)GEN_TOP(((int)puVar8 + 6))) = *((short *)GEN_TOP(((int)puVar8 + 6))) - 1;
      piVar1 = puVar8 + 2;
      *piVar1 = *piVar1 - 1;
      if (*piVar1 == 0) {
        uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar8)))(puVar8 GEN_EDX_ARG,1);
        return uVar9;
      }
    }
  }
  else {
    F_0105aec0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,&(*(byte *)(gen_frame + 0xb)),1,1);
    uVar9 = (*(byte *)(gen_frame + 0xb)) >> 1 & 0x7fffffbf;
    (*(uint *)(gen_frame + 0x4)) = (*(byte *)(gen_frame + 0xb)) & 1;
    bVar10 = 6;
    bVar6 = (*(byte *)(gen_frame + 0xb));
    while ((char)bVar6 < '\0') {
      F_0105aec0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,&(*(byte *)(gen_frame + 0xa)),1,1);
      bVar6 = bVar10 & 0x1f;
      bVar10 = bVar10 + 7;
      uVar9 = uVar9 | ((*(byte *)(gen_frame + 0xa)) & 0xffffff7f) << bVar6;
      bVar6 = (*(byte *)(gen_frame + 0xa));
    }
    if ((*(uint *)(gen_frame + 0x4)) != 0) {
      uVar9 = -uVar9;
    }
    if ((int)(*(undefined4 * PTR32 *)(gen_frame + 0x0))[0xf] <= (int)uVar9) {
      piVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0x0)) + 0x11;
      uVar9 = F_00dbe3b0(piVar1 GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),uVar9,0);
      puVar8 = *((undefined4 * PTR32 *)GEN_TOP((*piVar1 + 4 + uVar9 * 8)));
      if (puVar8 == ((undefined4 *)GEN_TOP(0x0))) {
        pvVar7 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
        puVar8 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar7 + 0x2c))) + 4))))
                           (*((int * PTR32 *)GEN_TOP(((int)pvVar7 + 0x2c))) GEN_EDX_ARG,0x18)));
        if (puVar8 == ((undefined4 *)GEN_TOP(0x0))) {
          puVar8 = ((undefined4 *)GEN_TOP(0x0));
        }
        else {
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8[2] = 0x80000000;
          puVar8[3] = 0;
          puVar8[4] = 0;
          puVar8[5] = 0x80000000;
        }
        *((undefined4 * PTR32 *)GEN_TOP((*piVar1 + 4 + uVar9 * 8))) = puVar8;
      }
      if (puVar8[4] == (puVar8[5] & 0x3fffffff)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),puVar8 + 3,8);
      }
      puVar2 = ((undefined4 *)GEN_TOP((puVar8[3] + puVar8[4] * 8)));
      if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar2 = param_1;
        puVar2[1] = param_2;
      }
      puVar8[4] = puVar8[4] + 1;
      return (uint)puVar2;
    }
    uVar4 = *((undefined4 *)GEN_TOP(((*(undefined4 * PTR32 *)(gen_frame + 0x0))[0xe] + uVar9 * 4)));
    pcVar5 = *((gen_code32 *)GEN_TOP((*param_1 + 0x5c)));
    uVar9 = (*pcVar5)(param_1,param_2,uVar4);
  }
  return uVar9;
}

/* ref: FUN_00e0cde0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0cde0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe0cde0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x58))))
                    (*(int * PTR32 *)this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 4))),*param_1);
  return uVar1;
}

/* ref: FUN_00e0ce10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0ce10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe0ce10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return (uint)(*(int *)this == *param_1);
}

/* ref: FUN_00e0ce40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0ce40(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe0ce40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e0ce70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0ce70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe0ce70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x114d6c0));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = *param_1;
  return (uint)this;
}

/* ref: FUN_00e0ceb0 */
GEN_LIB GEN_FRAME uint F_00e0ceb0(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xe0ceb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  int * piVar1;
  undefined4 * puVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = *param_1;
  if ((uVar4 != 8) && (uVar4 != 9)) {
    if (uVar4 == 5) {
      iVar5 = 0;
      uVar4 = 0;
      if (0 < param_3) {
        do {
          uVar4 = F_00da11e0(param_2[iVar5 * 2]);
          param_2[iVar5 * 2] = 0;
          iVar5 = iVar5 + 1;
        } while (iVar5 < param_3);
        return uVar4;
      }
    }
    else if (uVar4 == 6) {
      iVar5 = 0;
      uVar4 = 0;
      if (0 < param_3) {
        uVar4 = 0;
        do {
          piVar3 = ((int *)GEN_TOP(param_2[iVar5 * 2]));
          param_2[iVar5 * 2] = 0;
          if (piVar3 != ((int *)GEN_TOP(0x0))) {
            if (param_4 != 0) {
              uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x70))))(piVar3 GEN_EDX_ARG);
            }
            piVar1 = piVar3 + 2;
            *piVar1 = *piVar1 - 1;
            if (*piVar1 == 0) {
              uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar3)))(piVar3 GEN_EDX_ARG,1);
            }
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < param_3);
        return uVar4;
      }
    }
    else {
      uVar4 = uVar4 - 7;
      if ((uVar4 == 0) && (iVar5 = 0, 0 < param_3)) {
        do {
          puVar2 = ((undefined4 *)GEN_TOP(param_2[iVar5 * 2]));
          param_2[iVar5 * 2] = 0;
          if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
            piVar3 = puVar2 + 2;
            *piVar3 = *piVar3 - 1;
            if (*piVar3 == 0) {
              uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
            }
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < param_3);
      }
    }
    return uVar4;
  }
  puVar2 = ((undefined4 *)GEN_TOP(*param_2));
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    piVar3 = puVar2 + 2;
    *piVar3 = *piVar3 - 1;
    if (*piVar3 == 0) {
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
    }
  }
  *param_2 = 0;
  return uVar4;
}

/* ref: FUN_00e0cfa0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0cfa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe0cfa0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00e0ceb0(param_1,this,1,param_2);
  return uVar1;
}

/* ref: FUN_00e0cfd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0cfd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe0cfd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_1[3];
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_1[4];
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_1[5];
  return (uint)this;
}

/* ref: FUN_00e0d010 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0d010(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe0d010u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x14))) = param_2;
  return param_2;
}

/* ref: FUN_00e0d020 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0d020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe0d020u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_3;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114d6d4));
  *((int *)GEN_TOP(((int)this + 0x10))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  if (param_2 != 0) {
    *((int *)GEN_TOP((param_2 + 8))) = *((int *)GEN_TOP((param_2 + 8))) + 1;
  }
  return (uint)this;
}

/* ref: FUN_00e0d060 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0d060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe0d060u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114d774));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_2;
  return (uint)this;
}

/* ref: ArrayOfTuplesImplementation::View::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e0d090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe0d090u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 4))))(*(int * PTR32 *)(this + 0xc) GEN_EDX_FWD);
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: ArrayOfTuplesImplementation::View::vf7 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e0d0a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xe0d0a0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x1c))))
                    (*(int * PTR32 *)(this + 0xc) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                     param_8);
  return uVar1;
}

/* ref: ArrayOfTuplesImplementation::View::vf6 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e0d0b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe0d0b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int * in_ecx;
  uint uVar2;
  
  in_ecx = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD)));
  if (*in_ecx == 6) {
    iVar1 = **((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0xc)));
    uVar2 = F_00e19c80(in_ecx GEN_EDX_ARG);
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0x24))))(*((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + 0xc))),uVar2);
    return uVar2;
  }
  return 0;
}

/* ref: ArrayOfTuplesImplementation::View::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e0d0f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xe0d0f0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) + 8))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,
                     param_6,param_7,param_8);
  return uVar1;
}

/* ref: ArrayOfTuplesImplementation::View::vf3 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e0d100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe0d100u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: ArrayOfTuplesImplementation::View::vf4 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e0d110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe0d110u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: ArrayOfTuplesImplementation::View::vf5 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e0d120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe0d120u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 4))))(*(int * PTR32 *)(this + 0xc) GEN_EDX_FWD);
  uVar1 = F_00e19c70(uVar1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: ArrayOfTuplesImplementation::View::vf35 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e0d140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe0d140u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) + 0x50))))
                (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) GEN_EDX_ARG,*(int *)(this + 0x10) + iVar1,
                 (uint)*((byte *)GEN_TOP((iVar1 + param_1))));
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return;
}

/* ref: ArrayOfTuplesImplementation::View::vf28 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e0d180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe0d180u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) + 0x40))))
                (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) GEN_EDX_ARG,*(int *)(this + 0x10) + iVar1,
                 *((undefined4 *)GEN_TOP((param_1 + iVar1 * 4))));
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return;
}

/* ref: ArrayOfTuplesImplementation::View::vf32 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e0d1c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe0d1c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) + 0x50))))
                (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) GEN_EDX_ARG,*(int *)(this + 0x10) + iVar1,
                 *((undefined4 *)GEN_TOP((param_1 + iVar1 * 4))));
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return;
}

/* ref: ArrayOfTuplesImplementation::View::vf8 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e0d200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe0d200u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 1;
}

/* ref: ArrayOfTuplesImplementation::View::vf11 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0d210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe0d210u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) + 0x2c))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) GEN_EDX_ARG,*(int *)(this + 0x10) + param_1);
  return uVar1;
}

/* ref: ArrayOfTuplesImplementation::View::vf12 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0d230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe0d230u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) + 0x30))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) GEN_EDX_ARG,*(int *)(this + 0x10) + param_1,param_2)
  ;
  return uVar1;
}

/* ref: ArrayOfTuplesImplementation::View::vf13 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0d260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe0d260u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) + 0x34))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) GEN_EDX_ARG,*(int *)(this + 0x10) + param_1);
  return uVar1;
}

/* ref: ArrayOfTuplesImplementation::View::vf14 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0d280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe0d280u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) + 0x38))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) GEN_EDX_ARG,*(int *)(this + 0x10) + param_1,param_2)
  ;
  return uVar1;
}

/* ref: ArrayOfTuplesImplementation::View::vf15 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0d2b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe0d2b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) + 0x3c))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) GEN_EDX_ARG,*(int *)(this + 0x10) + param_1);
  return uVar1;
}

/* ref: ArrayOfTuplesImplementation::View::vf16 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0d2d0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xe0d2d0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0xc))) + 0x10)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x40))))
                    (piVar1 GEN_EDX_ARG,*((int *)GEN_TOP((param_1 + 0x10))) + param_2,(undefined4)gen_fl2bits(param_3));
  return uVar2;
}

/* ref: ArrayOfTuplesImplementation::View::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0d300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe0d300u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) + 0x4c))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) GEN_EDX_ARG,*(int *)(this + 0x10) + param_1);
  return uVar1;
}

/* ref: ArrayOfTuplesImplementation::View::vf20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0d320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe0d320u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) + 0x50))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) GEN_EDX_ARG,*(int *)(this + 0x10) + param_1,param_2)
  ;
  return uVar1;
}

/* ref: ArrayOfTuplesImplementation::View::vf21 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0d350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe0d350u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) + 0x54))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) GEN_EDX_ARG,*(int *)(this + 0x10) + param_1);
  return uVar1;
}

/* ref: ArrayOfTuplesImplementation::View::vf22 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0d370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe0d370u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) + 0x58))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) GEN_EDX_ARG,*(int *)(this + 0x10) + param_1,param_2,
                     param_3);
  return uVar1;
}

/* ref: ArrayOfTuplesImplementation::View::vf23 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0d3a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe0d3a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) + 0x5c))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) GEN_EDX_ARG,*(int *)(this + 0x10) + param_1);
  return uVar1;
}

/* ref: ArrayOfTuplesImplementation::View::vf24 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0d3c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe0d3c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) + 0x60))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) GEN_EDX_ARG,*(int *)(this + 0x10) + param_1,param_2)
  ;
  return uVar1;
}

/* ref: ArrayOfTuplesImplementation::View::vf25 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0d3f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe0d3f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) + 100))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) GEN_EDX_ARG,*(int *)(this + 0x10) + param_1);
  return uVar1;
}

/* ref: ArrayOfTuplesImplementation::View::vf26 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0d410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe0d410u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) + 0x68))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) GEN_EDX_ARG,*(int *)(this + 0x10) + param_1,param_2)
  ;
  return uVar1;
}

/* ref: FUN_00e0d440 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e0d440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe0d440u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  undefined4 * puVar2;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x10)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114d6d4));
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    piVar1 = puVar2 + 2;
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_FWD,1);
    }
  }
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x18)));
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    piVar1 = puVar2 + 2;
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
    }
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  return;
}

/* ref: FUN_00e0d480 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e0d480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe0d480u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  undefined4 * puVar2;
  
  if (param_1 != 0) {
    *((int *)GEN_TOP((param_1 + 8))) = *((int *)GEN_TOP((param_1 + 8))) + 1;
  }
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x10)));
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    piVar1 = puVar2 + 2;
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_FWD,1);
    }
  }
  *((int *)GEN_TOP(((int)this + 0x10))) = param_1;
  return;
}

/* ref: ArrayOfTuplesImplementation::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e0d4b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe0d4b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * this_00;
  undefined4 uVar2;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x10) + 4))))(*(int * PTR32 *)(this + 0x10) GEN_EDX_FWD);
  uVar2 = *(undefined4 *)(this + 0x14);
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x2c))))(*(int * PTR32 *)(this + 0xc) GEN_EDX_ARG)));
  uVar1 = F_00e1a6a0(this_00 GEN_EDX_ARG,uVar1,uVar2);
  return uVar1;
}

/* ref: ArrayOfTuplesImplementation::vf7 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e0d4e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe0d4e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0xc)));
}

/* ref: ArrayOfTuplesImplementation::vf6 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e0d4f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe0d4f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int iVar2;
  int * in_ecx;
  uint uVar3;
  
  in_ecx = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD)));
  if (*in_ecx == 6) {
    piVar1 = *(int * PTR32 *)(this + 0xc);
    iVar2 = *piVar1;
    uVar3 = F_00e19c80(in_ecx GEN_EDX_ARG);
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((iVar2 + 0x24))))(piVar1,uVar3);
    return uVar3;
  }
  return 0;
}

/* ref: ArrayOfTuplesImplementation::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e0d520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xe0d520u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x10) + 8))))
                    (*(int * PTR32 *)(this + 0x10) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                     param_8);
  return uVar1;
}

/* ref: ArrayOfTuplesImplementation::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0d530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe0d530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x10) + 0xc))))
                    (*(int * PTR32 *)(this + 0x10) GEN_EDX_ARG,*(int *)(this + 0x14) * param_1);
  return uVar1;
}

/* ref: ArrayOfTuplesImplementation::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0d550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe0d550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x10) + 0x10))))
                    (*(int * PTR32 *)(this + 0x10) GEN_EDX_ARG,*(int *)(this + 0x14) * param_1);
  return uVar1;
}

/* ref: ArrayOfTuplesImplementation::vf5 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e0d570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe0d570u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x10) + 0x14))))(*(int * PTR32 *)(this + 0x10) GEN_EDX_FWD);
  return (int)uVar1 / *(int *)(this + 0x14);
}

/* ref: ArrayOfTuplesImplementation::vf8 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e0d590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe0d590u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 1;
}

/* ref: hkDataWorldDict::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0d5f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe0d5f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP((*(int *)(this + 8) + 0x30)));
  *param_1 = iVar1;
  if (iVar1 != 0) {
    *((short *)GEN_TOP((iVar1 + 6))) = *((short *)GEN_TOP((iVar1 + 6))) + 1;
    *((int *)GEN_TOP((iVar1 + 8))) = *((int *)GEN_TOP((iVar1 + 8))) + 1;
  }
  return (uint)param_1;
}

/* ref: hkDataWorldDict::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0d620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe0d620u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  
  iVar1 = *param_2;
  *param_1 = iVar1;
  if (iVar1 != 0) {
    *((short *)GEN_TOP((iVar1 + 6))) = *((short *)GEN_TOP((iVar1 + 6))) + 1;
    *((int *)GEN_TOP((iVar1 + 8))) = *((int *)GEN_TOP((iVar1 + 8))) + 1;
  }
  return (uint)param_1;
}

/* ref: hkDataWorldDict::vf14 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0d650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe0d650u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined4 *)GEN_TOP((*param_1 + 0x14))) = param_2;
  return (uint)param_1;
}

/* ref: FUN_00e0d670 */
GEN_LIB GEN_FRAME uint F_00e0d670(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe0d670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_2 <= *((int *)GEN_TOP((in_eax + 0x10)))) {
    return *((uint *)GEN_TOP((in_eax + 0xc)));
  }
  return 0;
}

/* ref: hkDataWorldDict::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0d690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe0d690u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: hkDataWorldDict::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0d6a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe0d6a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = F_00da4190(((undefined *)GEN_TOP((*(int *)(this + 8) + 4))) GEN_EDX_FWD,param_1,0);
    return uVar1;
  }
  return 0;
}

/* ref: hkDataWorldDict::vf17 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0d6d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe0d6d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  int iVar1;
  uint uVar2;
  int iVar3;
  uint * puVar4;
  
  iVar1 = *param_1;
  iVar3 = *(int *)(this + 8);
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = F_00da4190(((undefined *)GEN_TOP((iVar3 + 0x50))) GEN_EDX_FWD,param_2,0);
    if (uVar2 == 0) {
      uVar2 = F_00da1210(param_2);
      F_00da3a20(((undefined *)GEN_TOP((iVar3 + 0x50))) GEN_EDX_ARG,uVar2,uVar2);
    }
  }
  iVar3 = *((int *)GEN_TOP((iVar1 + 0x2c))) - 1;
  if (-1 < iVar3) {
    puVar4 = ((uint *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x28))) + iVar3 * 0x18)));
    do {
      if (*puVar4 == uVar2) goto LAB_00e0d732;
      puVar4 = puVar4 - 6;
      iVar3 = iVar3 - 1;
    } while (-1 < iVar3);
  }
  iVar3 = -1;
LAB_00e0d732: ;
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x28))) + 0x14 + iVar3 * 0x18))) = param_3;
  return iVar3 * 3;
}

/* ref: hkDataWorldDict::vf12 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0d750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe0d750u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 8))))(((int *)GEN_TOP(*param_1)) GEN_EDX_FWD);
  iVar1 = *(int *)(this + 8);
  if (uVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = F_00da4190(((undefined *)GEN_TOP((iVar1 + 0x50))) GEN_EDX_ARG,uVar2,0);
    if (uVar3 == 0) {
      uVar3 = F_00da1210(uVar2);
      F_00da3a20(((undefined *)GEN_TOP((iVar1 + 0x50))) GEN_EDX_ARG,uVar3,uVar3);
    }
  }
  F_00e1a550(this + 0x10 GEN_EDX_ARG,uVar3,param_2);
  uVar2 = F_00e12420(*(undefined * PTR32 *)(this + 8) GEN_EDX_ARG,uVar3,param_2);
  return uVar2;
}

/* ref: hkDataWorldDict::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0d7c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe0d7c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00e14d90(*(undefined * PTR32 *)(this + 8) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: hkDataWorldDict::vf16 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0d7d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3), GEN_P(uint param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xe0d7d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  GEN_PIN(uint param_4 = (uint)gen_a4;)
  uint * puVar1;
  int iVar2;
  int * this_00;
  uint uVar3;
  
  iVar2 = *(int *)(this + 8);
  this_00 = ((int *)GEN_TOP(*param_1));
  if (param_2 == 0) {
    param_1 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    param_1 = ((undefined4 *)GEN_TOP(F_00da4190(((undefined *)GEN_TOP((iVar2 + 0x50))) GEN_EDX_FWD,param_2,0)));
    if (param_1 == ((undefined4 *)GEN_TOP(0x0))) {
      param_1 = ((undefined4 *)GEN_TOP(F_00da1210(param_2)));
      F_00da3a20(((undefined *)GEN_TOP((iVar2 + 0x50))) GEN_EDX_ARG,param_1,param_1);
    }
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x20))))(this_00 GEN_EDX_ARG,param_2);
  if (uVar3 != 0xffffffff) {
    F_00e13930(this_00 GEN_EDX_ARG,param_1);
  }
  if (this_00[0xb] == (this_00[0xc] & 0x3fffffffU)) {
    F_00d95710(*((undefined4 *)GEN_TOP((this_00[3] + 0xc))),this_00 + 10,0x18);
  }
  puVar1 = ((uint *)GEN_TOP((this_00[10] + this_00[0xb] * 0x18)));
  if (puVar1 != ((uint *)GEN_TOP(0x0))) {
    *puVar1 = (uint)param_1;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[4] = param_3;
    puVar1[5] = param_4;
  }
  this_00[0xb] = this_00[0xb] + 1;
  return (uint)puVar1;
}

/* ref: hkDataWorldDict::vf18 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0d8a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe0d8a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  int * piVar1;
  int iVar2;
  undefined * this_00;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint * puVar6;
  uint * puVar7;
  int iVar8;
  int iVar9;
  
  iVar8 = *(int *)(this + 8);
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = this;
  (*(int *)(gen_frame + 0x18)) = *param_1;
  if (param_2 == 0) {
    param_2 = 0;
    uVar3 = param_2;
  }
  else {
    uVar3 = F_00da4190(((undefined *)GEN_TOP((iVar8 + 0x50))) GEN_EDX_FWD,param_2,0);
    if (uVar3 == 0) {
      uVar3 = F_00da1210(param_2);
      F_00da3a20(((undefined *)GEN_TOP((iVar8 + 0x50))) GEN_EDX_ARG,uVar3,uVar3);
    }
  }
  param_2 = uVar3;
  iVar8 = *(int *)((*(undefined * PTR32 *)(gen_frame + 0x1c)) + 8);
  if (param_3 == 0) {
    param_3 = 0;
    uVar3 = param_3;
  }
  else {
    uVar3 = F_00da4190(((undefined *)GEN_TOP((iVar8 + 0x50))) GEN_EDX_ARG,param_3,0);
    if (uVar3 == 0) {
      uVar3 = F_00da1210(param_3);
      F_00da3a20(((undefined *)GEN_TOP((iVar8 + 0x50))) GEN_EDX_ARG,uVar3,uVar3);
    }
  }
  param_3 = uVar3;
  piVar1 = ((int *)GEN_TOP(*param_1));
  (*(int *)(gen_frame + 0x0)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0x80000000;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  (*(int *)(gen_frame + 0x4)) = 0;
  F_00e14e20(*(undefined * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0x1c)) + 8) GEN_EDX_ARG,uVar3,1,0,&(*(int *)(gen_frame + 0x0)));
  iVar8 = (*(int *)(gen_frame + 0x18));
  iVar9 = 0;
  if (0 < (*(int *)(gen_frame + 0x4))) {
    do {
      iVar2 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + iVar9 * 4)));
      iVar5 = *((int *)GEN_TOP((iVar2 + 0x14)));
      iVar4 = 0;
      if (0 < iVar5) {
        puVar6 = *((uint * PTR32 *)GEN_TOP((iVar2 + 0x10)));
        puVar7 = puVar6;
        do {
          if (*puVar7 == param_2) {
            puVar6[iVar4 * 4] = param_3;
            break;
          }
          iVar4 = iVar4 + 1;
          puVar7 = puVar7 + 4;
        } while (iVar4 < iVar5);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < (*(int *)(gen_frame + 0x4)));
  }
  this_00 = *(undefined * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0x1c)) + 8);
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x14)) = ((int)0x80000000);
  F_00e14c90(this_00 GEN_EDX_ARG,(*(int *)(gen_frame + 0x18)),1,&(*(int *)(gen_frame + 0xc)));
  iVar9 = 0;
  if (0 < (*(int *)(gen_frame + 0x10))) {
    do {
      iVar8 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + iVar9 * 4)));
      iVar2 = *((int *)GEN_TOP((iVar8 + 0x10)));
      iVar5 = 0;
      if (0 < iVar2) {
        puVar6 = *((uint * PTR32 *)GEN_TOP((iVar8 + 0xc)));
        do {
          if (*puVar6 == param_2) {
            *puVar6 = param_3;
            break;
          }
          iVar5 = iVar5 + 1;
          puVar6 = puVar6 + 2;
        } while (iVar5 < iVar2);
      }
      iVar9 = iVar9 + 1;
      iVar8 = (*(int *)(gen_frame + 0x18));
    } while (iVar9 < (*(int *)(gen_frame + 0x10)));
  }
  iVar9 = *((int *)GEN_TOP((iVar8 + 0x2c))) - 1;
  if (-1 < iVar9) {
    puVar6 = ((uint *)GEN_TOP((*((int *)GEN_TOP((iVar8 + 0x28))) + iVar9 * 0x18)));
    do {
      if (*puVar6 == param_2) goto LAB_00e0da12;
      iVar9 = iVar9 - 1;
      puVar6 = puVar6 - 6;
    } while (-1 < iVar9);
  }
  iVar9 = -1;
LAB_00e0da12: ;
  *((uint *)GEN_TOP((*((int *)GEN_TOP((iVar8 + 0x28))) + iVar9 * 0x18))) = param_3;
  (*(int *)(gen_frame + 0x10)) = 0;
  if (-1 < (*(int *)(gen_frame + 0x14))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0xc)),(*(int *)(gen_frame + 0x14)) * 4);
  }
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(int *)(gen_frame + 0x14)) = 0x80000000;
  uVar3 = (*(uint *)(gen_frame + 0x8));
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) * 4);
  }
  return uVar3;
}

/* ref: hkDataWorldDict::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0da90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe0da90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  int * piVar1;
  undefined * this_00;
  int iVar2;
  uint uVar3;
  uint * puVar4;
  int iVar5;
  undefined4 * puVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = *(int *)(this + 8);
  (*(int *)(gen_frame + 0x18)) = *param_1;
  if (param_2 == 0) {
    param_2 = 0;
    uVar3 = param_2;
  }
  else {
    uVar3 = F_00da4190(((undefined *)GEN_TOP((iVar7 + 0x50))) GEN_EDX_FWD,param_2,0);
    if (uVar3 == 0) {
      uVar3 = F_00da1210(param_2);
      F_00da3a20(((undefined *)GEN_TOP((iVar7 + 0x50))) GEN_EDX_ARG,uVar3,uVar3);
    }
  }
  param_2 = uVar3;
  iVar7 = 0;
  piVar1 = ((int *)GEN_TOP(*param_1));
  (*(int *)(gen_frame + 0x0)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0x80000000;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  (*(int *)(gen_frame + 0x4)) = 0;
  F_00e14e20(*(undefined * PTR32 *)(this + 8) GEN_EDX_ARG,uVar3,1,0,&(*(int *)(gen_frame + 0x0)));
  if (0 < (*(int *)(gen_frame + 0x4))) {
    do {
      F_00e13c60(*((undefined * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + iVar7 * 4))) GEN_EDX_ARG,param_2);
      iVar7 = iVar7 + 1;
    } while (iVar7 < (*(int *)(gen_frame + 0x4)));
  }
  iVar7 = (*(int *)(gen_frame + 0x18));
  this_00 = *(undefined * PTR32 *)(this + 8);
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x14)) = ((int)0x80000000);
  F_00e14c90(this_00 GEN_EDX_ARG,(*(int *)(gen_frame + 0x18)),1,&(*(int *)(gen_frame + 0xc)));
  param_1 = ((int *)GEN_TOP(0x0));
  if (0 < (*(int *)(gen_frame + 0x10))) {
    do {
      iVar5 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + (int)((int)(uintptr_t)param_1) * 4)));
      iVar8 = 0;
      if (0 < *((int *)GEN_TOP((iVar5 + 0x10)))) {
        puVar4 = *((uint * PTR32 *)GEN_TOP((iVar5 + 0xc)));
        do {
          if (*puVar4 == param_2) {
            puVar6 = ((undefined4 *)GEN_TOP(puVar4[1]));
            piVar1 = puVar6 + 2;
            *piVar1 = *piVar1 - 1;
            if (*piVar1 == 0) {
              ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar6)))(puVar6 GEN_EDX_ARG,1);
            }
            *((int *)GEN_TOP((iVar5 + 0x10))) = *((int *)GEN_TOP((iVar5 + 0x10))) - 1;
            iVar2 = (*((int *)GEN_TOP((iVar5 + 0x10))) - iVar8) * 8;
            puVar6 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar5 + 0xc))) + iVar8 * 8)));
            if (0 < iVar2) {
              iVar5 = (iVar2 - 1U >> 2) + 1;
              do {
                *puVar6 = puVar6[2];
                puVar6 = puVar6 + 1;
                iVar5 = iVar5 - 1;
              } while (iVar5 != 0);
            }
            break;
          }
          iVar8 = iVar8 + 1;
          puVar4 = puVar4 + 2;
        } while (iVar8 < *((int *)GEN_TOP((iVar5 + 0x10))));
      }
      param_1 = ((int *)GEN_TOP(((int)param_1 + 1)));
    } while ((int)param_1 < (*(int *)(gen_frame + 0x10)));
  }
  iVar5 = *((int *)GEN_TOP((iVar7 + 0x2c))) - 1;
  if (-1 < iVar5) {
    puVar4 = ((uint *)GEN_TOP((*((int *)GEN_TOP((iVar7 + 0x28))) + iVar5 * 0x18)));
    do {
      if (*puVar4 == param_2) goto LAB_00e0dbe8;
      puVar4 = puVar4 - 6;
      iVar5 = iVar5 - 1;
    } while (-1 < iVar5);
  }
  iVar5 = -1;
LAB_00e0dbe8: ;
  *((int *)GEN_TOP((iVar7 + 0x2c))) = *((int *)GEN_TOP((iVar7 + 0x2c))) - 1;
  iVar8 = (*((int *)GEN_TOP((iVar7 + 0x2c))) - iVar5) * 0x18;
  puVar6 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar7 + 0x28))) + iVar5 * 0x18)));
  if (0 < iVar8) {
    iVar5 = (iVar8 - 1U >> 3) + 1;
    do {
      *puVar6 = puVar6[6];
      puVar6[1] = puVar6[7];
      puVar6 = puVar6 + 2;
      iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
  }
  do {
    iVar5 = 0;
    if (0 < *((int *)GEN_TOP((iVar7 + 0x2c)))) {
      puVar4 = *((uint * PTR32 *)GEN_TOP((iVar7 + 0x28)));
      do {
        if (*puVar4 == param_2) goto LAB_00e0dc48;
        iVar5 = iVar5 + 1;
        puVar4 = puVar4 + 6;
      } while (iVar5 < *((int *)GEN_TOP((iVar7 + 0x2c))));
    }
    iVar7 = *((int *)GEN_TOP((iVar7 + 0x18)));
  } while (iVar7 != 0);
LAB_00e0dc48: ;
  (*(int *)(gen_frame + 0x10)) = 0;
  if (-1 < (*(int *)(gen_frame + 0x14))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0xc)),(*(int *)(gen_frame + 0x14)) * 4);
  }
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(int *)(gen_frame + 0x14)) = 0x80000000;
  uVar3 = (*(uint *)(gen_frame + 0x8));
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) * 4);
  }
  return uVar3;
}

/* ref: hkDataWorldDict::vf21 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0dcb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe0dcb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined * this_00;
  uint uVar1;
  
  this_00 = *(undefined * PTR32 *)(this + 8);
  *((undefined4 *)GEN_TOP((param_2 + 4))) = 0;
  uVar1 = F_00e14e20(this_00 GEN_EDX_FWD,param_1,0,1,param_2);
  return uVar1;
}

/* ref: hkDataWorldDict::vf20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0dce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe0dce0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined * this_00;
  uint uVar1;
  
  this_00 = *(undefined * PTR32 *)(this + 8);
  *((undefined4 *)GEN_TOP((param_2 + 4))) = 0;
  uVar1 = F_00e14e20(this_00 GEN_EDX_FWD,param_1,1,1,param_2);
  return uVar1;
}

/* ref: FUN_00e0dd10 */
GEN_LIB GEN_FRAME uint F_00e0dd10(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe0dd10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  undefined4 in_ecx;
  int * piVar1;
  LPVOID pvVar2;
  undefined * pvVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  switch((unsigned int)(uintptr_t)(*param_2)) {
  case 2: ;
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 4))))
                               (*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,0x20)));
    *((undefined2 *)GEN_TOP(((int)pvVar3 + 4))) = 0x20;
    uVar4 = F_00e14220(pvVar3 GEN_EDX_ARG,param_1,param_2);
    return uVar4;
  case 3: ;
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 4))))
                               (*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,0x20)));
    *((undefined2 *)GEN_TOP(((int)pvVar3 + 4))) = 0x20;
    uVar4 = F_00e14390(pvVar3 GEN_EDX_ARG,param_1,param_2);
    return uVar4;
  case 4: ;
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 4))))
                               (*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,0x30)));
    *((undefined2 *)GEN_TOP(((int)pvVar3 + 4))) = 0x30;
    uVar4 = F_00e0ff60(pvVar3 GEN_EDX_ARG,param_1);
    return uVar4;
  case 5: ;
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 4))))
                               (*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,0x20)));
    *((undefined2 *)GEN_TOP(((int)pvVar3 + 4))) = 0x20;
    uVar4 = F_00e14670(pvVar3 GEN_EDX_ARG,param_1,param_2);
    return uVar4;
  case 6: ;
    iVar6 = *param_1;
    uVar4 = F_00e19c80(param_2 GEN_EDX_ARG);
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((iVar6 + 0x24))))(param_1,uVar4);
    if (uVar4 != 0) {
      pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 4))))
                                 (*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,0x28)));
      *((undefined2 *)GEN_TOP(((int)pvVar3 + 4))) = 0x28;
      uVar4 = F_00e153f0(pvVar3 GEN_EDX_ARG,param_1,param_2,uVar4,param_3);
      return uVar4;
    }
    break;
  case 7: ;
    in_ecx = param_2[1];
    uVar4 = F_00e19c80(in_ecx GEN_EDX_ARG);
    if (uVar4 != 0) {
      iVar6 = *param_1;
      uVar4 = F_00e19c80(in_ecx GEN_EDX_ARG);
      uVar4 = ((code *)*((gen_code32 *)GEN_TOP((iVar6 + 0x24))))(param_1,uVar4);
      if (uVar4 == 0) {
        return 0;
      }
    }
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 4))))
                               (*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,0x20)));
    *((undefined2 *)GEN_TOP(((int)pvVar3 + 4))) = 0x20;
    uVar4 = F_00e144e0(pvVar3 GEN_EDX_ARG,param_1,param_2);
    return uVar4;
  case 8: ;
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 4))))
                               (*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,0x20)));
    *((undefined2 *)GEN_TOP(((int)pvVar3 + 4))) = 0x20;
    piVar1 = ((int *)GEN_TOP(F_00e147e0(pvVar3 GEN_EDX_ARG,param_1,param_2)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_ARG,param_3);
    iVar6 = 0;
    if (0 < param_3) {
      do {
        uVar4 = F_00e0dd10(param_1,((undefined4 *)GEN_TOP(param_2[1])),0);
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x68))))(piVar1 GEN_EDX_ARG,iVar6,uVar4);
        iVar6 = iVar6 + 1;
      } while (iVar6 < param_3);
    }
    return (uint)piVar1;
  case 9: ;
    if (*((int *)GEN_TOP(param_2[1])) == 3) {
      pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 4))))
                                 (*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,0x20)));
      *((undefined2 *)GEN_TOP(((int)pvVar3 + 4))) = 0x20;
      uVar4 = F_00e10660(pvVar3 GEN_EDX_ARG,param_1,param_2);
      return uVar4;
    }
    uVar4 = F_00e0dd10(param_1,((int *)GEN_TOP(param_2[1])),0);
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 4))))
                               (*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,0x1c)));
    *((undefined2 *)GEN_TOP(((int)pvVar3 + 4))) = 0x1c;
    uVar5 = F_00e19c70(param_2 GEN_EDX_ARG);
    uVar4 = F_00e0d020(pvVar3 GEN_EDX_ARG,param_1,uVar4,uVar5);
    return uVar4;
  }
  return 0;
}

/* ref: hkDataWorldDict::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0dfc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe0dfc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((param_3 + 8)));
  if (*piVar1 == 9) {
    uVar2 = F_00e19c70(piVar1 GEN_EDX_FWD);
  }
  else {
    uVar2 = 0;
  }
  puVar3 = ((undefined4 *)GEN_TOP(F_00e0dd10(this,piVar1[1],uVar2)));
  piVar1 = ((int *)GEN_TOP(*param_1));
  if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
    *((short *)GEN_TOP(((int)puVar3 + 6))) = *((short *)GEN_TOP(((int)puVar3 + 6))) + 1;
    puVar3[2] = puVar3[2] + 1;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x58))))(piVar1 GEN_EDX_ARG,param_2,puVar3);
  if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
    *((short *)GEN_TOP(((int)puVar3 + 6))) = *((short *)GEN_TOP(((int)puVar3 + 6))) - 1;
    piVar1 = puVar3 + 2;
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar3)))(puVar3 GEN_EDX_ARG,1);
    }
  }
  return (uint)puVar3;
}

/* ref: FUN_00e0e030 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0e030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe0e030u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x254, 12);
  undefined4 uVar1;
  undefined4 * puVar2;
  LPVOID pvVar3;
  uint uVar4;
  uint uVar5;
  int * piVar6;
  undefined * pvVar7;
  int iVar8;
  int * piVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  char * pcVar13;
  char * pcVar14;
  
  uVar4 = *((uint *)GEN_TOP(((int)this + 0x38)));
  (*(undefined * PTR32 *)(gen_frame + 0x248)) = this;
  (*(uint *)(gen_frame + 0x234)) = 0;
  (*(uint *)(gen_frame + 0x238)) = 0;
  (*(uint *)(gen_frame + 0x23c)) = 0x80000000;
  (*(uint *)(gen_frame + 0x244)) = uVar4;
  if (uVar4 == 0) {
    uVar5 = 0;
  }
  else {
    pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar5 = *((uint *)GEN_TOP(((int)pvVar3 + 0xc)));
    uVar10 = uVar4 * 4 + 0x7f & 0xffffff80;
    if ((*((int *)GEN_TOP(((int)pvVar3 + 8))) < (int)uVar10) ||
       (*((uint *)GEN_TOP(((int)pvVar3 + 0x10))) < uVar10 + uVar5)) {
      uVar5 = F_00d94390(pvVar3 GEN_EDX_ARG,uVar10);
    }
    else {
      *((uint *)GEN_TOP(((int)pvVar3 + 0xc))) = uVar10 + uVar5;
    }
  }
  uVar10 = *((uint *)GEN_TOP(((int)this + 8)));
  (*(uint *)(gen_frame + 0x234)) = uVar5;
  (*(uint *)(gen_frame + 0x23c)) = uVar4 | 0x80000000;
  (*(uint *)(gen_frame + 0x240)) = uVar5;
  (*(uint *)(gen_frame + 0x214)) = uVar10;
  (*(int *)(gen_frame + 0x21c)) = 0;
  if (uVar10 == 0) {
    (*(uint *)(gen_frame + 0x218)) = 0;
  }
  else {
    pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar5 = *((uint *)GEN_TOP(((int)pvVar3 + 0xc)));
    uVar11 = uVar10 * 4 + 0x7f & 0xffffff80;
    uVar4 = uVar11 + uVar5;
    if ((*((int *)GEN_TOP(((int)pvVar3 + 8))) < (int)uVar11) || (*((uint *)GEN_TOP(((int)pvVar3 + 0x10))) < uVar4)) {
      uVar4 = F_00d94390(pvVar3 GEN_EDX_ARG,uVar11);
      (*(uint *)(gen_frame + 0x218)) = uVar4;
    }
    else {
      *((uint *)GEN_TOP(((int)pvVar3 + 0xc))) = uVar4;
      (*(uint *)(gen_frame + 0x218)) = uVar5;
    }
  }
  (*(uint *)(gen_frame + 0x220)) = uVar10 | 0x80000000;
  (*(undefined4 * PTR32 *)(gen_frame + 0x20c)) = ((undefined4 *)GEN_TOP(((int)this + 0x14)));
  F_00e12fa0(((undefined4 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG);
  pvVar7 = ((undefined *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x22c)) = pvVar7;
  uVar4 = F_00da3970(pvVar7 GEN_EDX_ARG);
  (*(uint *)(gen_frame + 0x230)) = uVar4;
  F_00da3e40(pvVar7 GEN_EDX_ARG,&(*(char *)(gen_frame + 0x24f)),uVar4);
  while ((*(char *)(gen_frame + 0x24f)) != '\0') {
    uVar5 = F_00da39b0(pvVar7 GEN_EDX_ARG,uVar4);
    *((uint *)GEN_TOP(((*(uint *)(gen_frame + 0x218)) + (*(int *)(gen_frame + 0x21c)) * 4))) = uVar5;
    (*(int *)(gen_frame + 0x21c)) = (*(int *)(gen_frame + 0x21c)) + 1;
    (*(uint *)(gen_frame + 0x210)) = uVar5;
    uVar5 = F_00e113a0(((undefined *)GEN_TOP(((int)this + 0x34))) GEN_EDX_ARG,uVar5);
    if (uVar5 != 0xffffffff) {
      do {
        uVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x34))) + uVar5 * 8)));
        if ((*(uint *)(gen_frame + 0x238)) == ((*(uint *)(gen_frame + 0x23c)) & 0x3fffffff)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(uint *)(gen_frame + 0x234)),4);
        }
        *((undefined4 *)GEN_TOP(((*(uint *)(gen_frame + 0x234)) + (*(uint *)(gen_frame + 0x238)) * 4))) = uVar1;
        (*(uint *)(gen_frame + 0x238)) = (*(uint *)(gen_frame + 0x238)) + 1;
        uVar5 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x34))) + 4 + uVar5 * 8)));
      } while (uVar5 != 0xffffffff);
      F_00e113c0(((undefined *)GEN_TOP(((int)this + 0x34))) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x210)));
      uVar4 = (*(uint *)(gen_frame + 0x230));
    }
    pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x22c));
    uVar4 = F_00da39f0((*(undefined * PTR32 *)(gen_frame + 0x22c)) GEN_EDX_ARG,uVar4);
    (*(uint *)(gen_frame + 0x230)) = uVar4;
    F_00da3e40(pvVar7 GEN_EDX_ARG,&(*(char *)(gen_frame + 0x24f)),uVar4);
    uVar4 = (*(uint *)(gen_frame + 0x230));
  }
  iVar12 = 0;
  (*(char *)(gen_frame + 0x24f)) = '\0';
  if (0 < (int)(*(uint *)(gen_frame + 0x238))) {
    do {
      piVar9 = *((int * PTR32 *)GEN_TOP(((*(uint *)(gen_frame + 0x234)) + iVar12 * 4)));
      if (0 < *((short *)GEN_TOP(((int)piVar9 + 6)))) {
        F_00da0a80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
        piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar9 + 8))))(piVar9 GEN_EDX_ARG)));
        iVar8 = (int)*((short *)GEN_TOP(((int)piVar9 + 6)));
        pcVar14 = ((char *)REFP(0x114e328));
        pcVar13 = 
        ((char *)REFP(0x114e2c0))
        ;
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 8))))(piVar6 GEN_EDX_ARG);
        pvVar7 = ((undefined *)GEN_TOP(F_00d9fe80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,((char *)REFP(0x114e2a4)))));
        pvVar7 = ((undefined *)GEN_TOP(F_00d9fe80(pvVar7 GEN_EDX_ARG,uVar4)));
        pvVar7 = ((undefined *)GEN_TOP(F_00d9fe80(pvVar7 GEN_EDX_ARG,pcVar13)));
        pvVar7 = ((undefined *)GEN_TOP(F_00d9ff40(pvVar7 GEN_EDX_ARG,iVar8)));
        F_00d9fe80(pvVar7 GEN_EDX_ARG,pcVar14);
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                  (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,1,0x760d3795,((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x114dd98)),0xab0);
        F_00d9fda0(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG);
      }
      F_00e13ac0(piVar9 GEN_EDX_ARG);
      iVar12 = iVar12 + 1;
    } while (iVar12 < (int)(*(uint *)(gen_frame + 0x238)));
  }
  iVar12 = 0;
  if (0 < (int)(*(uint *)(gen_frame + 0x238))) {
    do {
      puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((*(uint *)(gen_frame + 0x234)) + iVar12 * 4)));
      piVar9 = puVar2 + 2;
      *piVar9 = *piVar9 - 1;
      if (*piVar9 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < (int)(*(uint *)(gen_frame + 0x238)));
  }
  iVar12 = 0;
  if (0 < (*(int *)(gen_frame + 0x21c))) {
    do {
      puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((*(uint *)(gen_frame + 0x218)) + iVar12 * 4)));
      piVar9 = puVar2 + 2;
      *piVar9 = *piVar9 - 1;
      if (*piVar9 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < (*(int *)(gen_frame + 0x21c)));
  }
  uVar4 = F_00da3970(((undefined *)GEN_TOP(((int)this + 0x60))) GEN_EDX_ARG);
  F_00da3e40((int)this + 0x60 GEN_EDX_ARG,&(*(char *)(gen_frame + 0x24f)),uVar4);
  while ((*(char *)(gen_frame + 0x24f)) != '\0') {
    pvVar7 = ((undefined *)GEN_TOP(F_00da39b0((int)this + 0x60 GEN_EDX_ARG,uVar4)));
    F_00d91a80(pvVar7 GEN_EDX_ARG);
    uVar4 = F_00da39f0(((undefined *)GEN_TOP(((int)this + 0x60))) GEN_EDX_ARG,uVar4);
    F_00da3e40((int)this + 0x60 GEN_EDX_ARG,&(*(char *)(gen_frame + 0x24f)),uVar4);
  }
  uVar4 = F_00da3970(((undefined *)GEN_TOP(((int)this + 0x50))) GEN_EDX_ARG);
  F_00da3e40((int)this + 0x50 GEN_EDX_ARG,&(*(char *)(gen_frame + 0x24f)),uVar4);
  while ((*(char *)(gen_frame + 0x24f)) != '\0') {
    uVar5 = F_00da39b0((int)this + 0x50 GEN_EDX_ARG,uVar4);
    F_00da11e0(uVar5);
    uVar4 = F_00da39f0(((undefined *)GEN_TOP(((int)this + 0x50))) GEN_EDX_ARG,uVar4);
    F_00da3e40((int)this + 0x50 GEN_EDX_ARG,&(*(char *)(gen_frame + 0x24f)),uVar4);
  }
  iVar12 = 0;
  if (-1 < *((int *)GEN_TOP(((int)this + 0x78)))) {
    piVar9 = *((int * PTR32 *)GEN_TOP(((int)this + 0x70)));
    do {
      if (*piVar9 != -1) break;
      iVar12 = iVar12 + 1;
      piVar9 = piVar9 + 2;
    } while (iVar12 <= *((int *)GEN_TOP(((int)this + 0x78))));
  }
  if (iVar12 <= *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x248)) + 0x78)))) {
    do {
      pvVar7 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x70))) + 4 + iVar12 * 8)));
      if (pvVar7 != ((undefined *)GEN_TOP(0x0))) {
        F_00dbdb20(pvVar7 GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
        F_00dbd5e0();
        pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar3 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar3 + 0x2c))) GEN_EDX_ARG,pvVar7,0xc);
      }
      iVar12 = iVar12 + 1;
      if (iVar12 <= *((int *)GEN_TOP(((int)this + 0x78)))) {
        piVar9 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x70))) + iVar12 * 8)));
        do {
          if (*piVar9 != -1) break;
          iVar12 = iVar12 + 1;
          piVar9 = piVar9 + 2;
        } while (iVar12 <= *((int *)GEN_TOP(((int)this + 0x78))));
      }
    } while (iVar12 <= *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x248)) + 0x78))));
  }
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar4 = (*(uint *)(gen_frame + 0x218));
  uVar5 = (*(uint *)(gen_frame + 0x214)) * 4 + 0x7f & 0xffffff80;
  if (((*((int *)GEN_TOP(((int)pvVar3 + 8))) < (int)uVar5) || (uVar5 + (*(uint *)(gen_frame + 0x218)) != *((int *)GEN_TOP(((int)pvVar3 + 0xc))))
      ) || (*((uint *)GEN_TOP(((int)pvVar3 + 0x14))) == (*(uint *)(gen_frame + 0x218)))) {
    F_00d945c0(pvVar3 GEN_EDX_ARG,(*(uint *)(gen_frame + 0x218)),uVar5);
  }
  else {
    *((uint *)GEN_TOP(((int)pvVar3 + 0xc))) = (*(uint *)(gen_frame + 0x218));
  }
  if (-1 < (int)(*(uint *)(gen_frame + 0x220))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),uVar4,(*(uint *)(gen_frame + 0x220)) * 4);
  }
  uVar5 = (*(uint *)(gen_frame + 0x244));
  uVar4 = (*(uint *)(gen_frame + 0x240));
  if ((*(uint *)(gen_frame + 0x240)) == (*(uint *)(gen_frame + 0x234))) {
    (*(uint *)(gen_frame + 0x238)) = 0;
  }
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar5 = uVar5 * 4 + 0x7f & 0xffffff80;
  if (((*((int *)GEN_TOP(((int)pvVar3 + 8))) < (int)uVar5) || (uVar5 + uVar4 != *((int *)GEN_TOP(((int)pvVar3 + 0xc)))))
     || (*((uint *)GEN_TOP(((int)pvVar3 + 0x14))) == uVar4)) {
    F_00d945c0(pvVar3 GEN_EDX_ARG,uVar4,uVar5);
  }
  else {
    *((uint *)GEN_TOP(((int)pvVar3 + 0xc))) = uVar4;
  }
  (*(uint *)(gen_frame + 0x238)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x23c))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0x234)),(*(uint *)(gen_frame + 0x23c)) * 4);
  }
  F_00dbdb20(((undefined *)GEN_TOP(((int)this + 0x70))) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
  pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x248));
  F_00da3e20(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x248)) + 0x60))) GEN_EDX_ARG);
  F_00da3e20(((undefined *)GEN_TOP(((int)pvVar7 + 0x50))) GEN_EDX_ARG);
  F_00dbdb20(((undefined *)GEN_TOP(((int)pvVar7 + 0x40))) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
  iVar12 = *((int *)GEN_TOP(((int)pvVar7 + 0x3c)));
  *((undefined4 *)GEN_TOP(((int)pvVar7 + 0x38))) = 0;
  if (-1 < iVar12) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)pvVar7 + 0x34))),iVar12 * 8);
  }
  puVar2 = (*(undefined4 * PTR32 *)(gen_frame + 0x20c));
  *((undefined4 *)GEN_TOP(((int)pvVar7 + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)pvVar7 + 0x3c))) = 0x80000000;
  F_00dbdb20((*(undefined4 * PTR32 *)(gen_frame + 0x20c)) + 3 GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
  iVar12 = puVar2[2];
  puVar2[1] = 0;
  if (-1 < iVar12) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*puVar2,iVar12 * 8);
  }
  *puVar2 = 0;
  puVar2[2] = 0x80000000;
  uVar4 = F_00da3e20((*(undefined * PTR32 *)(gen_frame + 0x22c)) GEN_EDX_ARG);
  return uVar4;
}

/* ref: hkDataWorldDict::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0e5b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0e5b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  int iVar1;
  code * pcVar2;
  LPVOID pvVar3;
  int * piVar4;
  uint uVar5;
  
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar3 + 0x2c))) + 4))))
                            (*((int * PTR32 *)GEN_TOP(((int)pvVar3 + 0x2c))) GEN_EDX_ARG,0x20)));
  *(undefined2 *)(piVar4 + 1) = 0x20;
  iVar1 = *(*(int * PTR32 *)&gen_args[0]);
  *((undefined2 *)GEN_TOP(((int)piVar4 + 6))) = 0;
  piVar4[2] = 0;
  *piVar4 = (int)(*(undefined * PTR32 (*)[30])REFP(0x114d814));
  if (iVar1 != 0) {
    *((int *)GEN_TOP((iVar1 + 8))) = *((int *)GEN_TOP((iVar1 + 8))) + 1;
  }
  piVar4[3] = iVar1;
  piVar4[4] = 0;
  piVar4[5] = 0;
  piVar4[6] = ((int)0x80000000);
  piVar4[7] = (uint)(*(int * PTR32 *)&gen_args[1]) & 0xff;
  piVar4[2] = piVar4[2] + 1;
  pcVar2 = *((gen_code32 *)GEN_TOP((*piVar4 + 8)));
  iVar1 = *(int *)(this + 8);
  (*(int * PTR32 *)&gen_args[1]) = piVar4;
  uVar5 = (*pcVar2)(piVar4);
  F_00e16440(((undefined *)GEN_TOP((iVar1 + 0x34))) GEN_EDX_ARG,uVar5,&(*(int * PTR32 *)&gen_args[1]));
  if (*((int *)GEN_TOP((iVar1 + 0x30))) == 0) {
    *((int * PTR32 *)GEN_TOP((iVar1 + 0x30))) = piVar4;
  }
  return (uint)piVar4;
}

/* ref: hkDataWorldDict::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0e650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe0e650u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x14, 12);
  undefined4 * puVar1;
  int iVar2;
  code * pcVar3;
  LPVOID pvVar4;
  undefined * pvVar5;
  int * piVar6;
  uint uVar7;
  uint uVar8;
  int * piVar9;
  int * piVar10;
  
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar4 + 0x2c))) + 4))))
                             (*((int * PTR32 *)GEN_TOP(((int)pvVar4 + 0x2c))) GEN_EDX_ARG,0x40)));
  *((undefined2 *)GEN_TOP(((int)pvVar5 + 4))) = 0x40;
  piVar6 = ((int *)GEN_TOP(F_00e13540(pvVar5 GEN_EDX_ARG,this,*param_1,param_1[1])));
  if (param_1[2] != 0) {
    uVar7 = F_00da4190(((undefined *)GEN_TOP((*(int *)(this + 8) + 4))) GEN_EDX_ARG,param_1[2],0);
    if (uVar7 != 0) {
      *((int *)GEN_TOP((uVar7 + 8))) = *((int *)GEN_TOP((uVar7 + 8))) + 1;
    }
    puVar1 = ((undefined4 *)GEN_TOP(piVar6[6]));
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      piVar9 = puVar1 + 2;
      *piVar9 = *piVar9 - 1;
      if (*piVar9 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
      }
    }
    piVar6[6] = uVar7;
  }
  piVar6[2] = piVar6[2] + 1;
  iVar2 = *(int *)(this + 8);
  pcVar3 = *((gen_code32 *)GEN_TOP((*piVar6 + 0x10)));
  (*(int * PTR32 *)(gen_frame + 0x4)) = piVar6;
  (*(int *)(gen_frame + 0x8)) = iVar2;
  uVar7 = (*pcVar3)(piVar6);
  uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 8))))(piVar6 GEN_EDX_ARG);
  pvVar5 = ((undefined *)GEN_TOP((iVar2 + 4)));
  uVar8 = F_00da3ae0(pvVar5 GEN_EDX_ARG,uVar8);
  F_00da3e40(pvVar5 GEN_EDX_ARG,&(*(char *)(gen_frame + 0xf)),uVar8);
  if ((*(char *)(gen_frame + 0xf)) == '\0') {
    uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 8))))(piVar6 GEN_EDX_ARG);
    F_00da3a20(pvVar5 GEN_EDX_ARG,uVar8,piVar6);
    if (uVar7 != 0) {
      F_00e163b0(((undefined *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + 0x14))) GEN_EDX_ARG,uVar7,&(*(int * PTR32 *)(gen_frame + 0x4)));
    }
  }
  (*(int *)(gen_frame + 0x0)) = 0;
  if (0 < (int)param_1[4]) {
    (*(int *)(gen_frame + 0x8)) = 0;
    do {
      piVar10 = ((int *)GEN_TOP((param_1[3] + (*(int *)(gen_frame + 0x8)))));
      piVar9 = ((int *)GEN_TOP(*piVar10));
      iVar2 = *(int *)(this + 8);
      (*(int * PTR32 *)(gen_frame + 0x4)) = piVar9;
      if (piVar9 == ((int *)GEN_TOP(0x0))) {
        (*(int * PTR32 *)(gen_frame + 0x4)) = ((int *)GEN_TOP(0x0));
      }
      else {
        piVar9 = ((int *)GEN_TOP(F_00da4190(((undefined *)GEN_TOP((iVar2 + 0x50))) GEN_EDX_ARG,piVar9,0)));
        if (piVar9 == ((int *)GEN_TOP(0x0))) {
          piVar9 = ((int *)GEN_TOP(F_00da1210((*(int * PTR32 *)(gen_frame + 0x4)))));
          (*(int * PTR32 *)(gen_frame + 0x4)) = piVar9;
          F_00da3a20(((undefined *)GEN_TOP((iVar2 + 0x50))) GEN_EDX_ARG,piVar9,piVar9);
          piVar9 = (*(int * PTR32 *)(gen_frame + 0x4));
        }
        (*(int * PTR32 *)(gen_frame + 0x4)) = piVar9;
      }
      iVar2 = piVar10[1];
      if (piVar6[0xb] == (piVar6[0xc] & 0x3fffffffU)) {
        F_00d95710(*((undefined4 *)GEN_TOP((piVar6[3] + 0xc))),piVar6 + 10,0x18);
      }
      puVar1 = ((undefined4 *)GEN_TOP((piVar6[10] + piVar6[0xb] * 0x18)));
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = (*(int * PTR32 *)(gen_frame + 0x4));
        puVar1[2] = 0;
        puVar1[3] = 0;
        puVar1[4] = iVar2;
        puVar1[5] = 0;
      }
      piVar6[0xb] = piVar6[0xb] + 1;
      (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 0xc;
      (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
    } while ((*(int *)(gen_frame + 0x0)) < (int)param_1[4]);
  }
  F_00e1a240(this + 0x10 GEN_EDX_ARG,*param_1);
  return (uint)piVar6;
}

/* ref: FUN_00e0e830 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0e830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe0e830u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL(0x2c, 4);
  byte bVar1;
  undefined4 * puVar2;
  code * pcVar3;
  LPVOID pvVar4;
  undefined * pvVar5;
  uint uVar6;
  uint uVar7;
  int * piVar8;
  int * piVar9;
  uint * puVar10;
  undefined1 * in_ecx;
  int iVar11;
  
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = this;
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar4 + 0x2c))) + 4))))
                             (*((int * PTR32 *)GEN_TOP(((int)pvVar4 + 0x2c))) GEN_EDX_ARG,0x40)));
  *((undefined2 *)GEN_TOP(((int)pvVar5 + 4))) = 0x40;
  uVar6 = F_00d92a10(param_1 GEN_EDX_ARG);
  uVar7 = F_00d92610(param_1 GEN_EDX_ARG);
  piVar8 = ((int *)GEN_TOP(F_00e13540(pvVar5 GEN_EDX_ARG,this,uVar7,uVar6)));
  (*(int * PTR32 *)(gen_frame + 0x10)) = piVar8;
  uVar6 = F_00d92620(param_1 GEN_EDX_ARG);
  if (uVar6 == 0) goto LAB_00e0e8e5;
  uVar6 = F_00d92620(param_1 GEN_EDX_ARG);
  uVar6 = F_00d92610(uVar6 GEN_EDX_ARG);
  if (uVar6 == 0) {
LAB_00e0e8b5: ;
    uVar6 = F_00d92620(param_1 GEN_EDX_ARG);
    uVar6 = F_00e0e830((*(undefined * PTR32 *)(gen_frame + 0x20)) GEN_EDX_ARG,uVar6);
    if (uVar6 != 0) goto LAB_00e0e8cb;
  }
  else {
    uVar6 = F_00da4190(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x20)) + 8))) + 4))) GEN_EDX_ARG,uVar6,0);
    if (uVar6 == 0) goto LAB_00e0e8b5;
LAB_00e0e8cb: ;
    *((int *)GEN_TOP((uVar6 + 8))) = *((int *)GEN_TOP((uVar6 + 8))) + 1;
  }
  puVar2 = ((undefined4 *)GEN_TOP(piVar8[6]));
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    piVar9 = puVar2 + 2;
    *piVar9 = *piVar9 - 1;
    if (*piVar9 == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
    }
  }
  piVar8[6] = uVar6;
LAB_00e0e8e5: ;
  piVar8[2] = piVar8[2] + 1;
  iVar11 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x20)) + 8)));
  pcVar3 = *((gen_code32 *)GEN_TOP((*piVar8 + 0x10)));
  (*(int * PTR32 *)(gen_frame + 0x18)) = piVar8;
  uVar6 = (*pcVar3)(piVar8);
  (*(uint *)(gen_frame + 0x14)) = uVar6;
  uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG);
  uVar6 = F_00da3ae0(((undefined *)GEN_TOP((iVar11 + 4))) GEN_EDX_ARG,uVar6);
  F_00da3e40(iVar11 + 4 GEN_EDX_ARG,&(*(char *)(gen_frame + 0x27)),uVar6);
  if ((*(char *)(gen_frame + 0x27)) == '\0') {
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG);
    F_00da3a20(((undefined *)GEN_TOP((iVar11 + 4))) GEN_EDX_ARG,uVar6,piVar8);
    if ((*(uint *)(gen_frame + 0x14)) != 0) {
      F_00e163b0(((undefined *)GEN_TOP((iVar11 + 0x14))) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x14)),&(*(int * PTR32 *)(gen_frame + 0x18)));
    }
  }
  (*(int *)(gen_frame + 0x1c)) = 0;
  uVar6 = F_00d92850(param_1 GEN_EDX_ARG);
  if (0 < (int)uVar6) {
    do {
      piVar9 = ((int *)GEN_TOP(F_00d92860(param_1 GEN_EDX_ARG,(*(int *)(gen_frame + 0x1c)))));
      (*(uint *)(gen_frame + 0x14)) = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x20)) + 0x20)));
      if ((*(ushort *)(piVar9 + 4) & 0x400) != 0x400) {
        pvVar5 = ((undefined *)GEN_TOP(F_00da5fd0(piVar9 GEN_EDX_ARG)));
        uVar6 = 0;
        if (pvVar5 != ((undefined *)GEN_TOP(0x0))) {
          uVar6 = F_00d92610(pvVar5 GEN_EDX_ARG);
          uVar7 = F_00da6010(piVar9 GEN_EDX_ARG,REFG(undefined * PTR32, 0x1354944));
          if (uVar7 == 0) {
            uVar7 = F_00d92c00(pvVar5 GEN_EDX_ARG,REFG(undefined * PTR32, 0x1354944));
            if (uVar7 == 0) goto LAB_00e0e9f6;
            F_0105a6d0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar7,((char *)REFP(0x1139630)));
            in_ecx = ((undefined1 *)(gen_frame + 0x0));
          }
          else {
            F_0105a6d0(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,uVar7,((char *)REFP(0x1139630)));
            in_ecx = ((undefined1 *)(gen_frame + 0x8));
          }
          puVar10 = ((uint *)GEN_TOP(F_0105a770(in_ecx GEN_EDX_ARG,0)));
          uVar6 = *puVar10;
        }
LAB_00e0e9f6: ;
        bVar1 = *((byte *)GEN_TOP(((int)piVar9 + 0xd)));
        (*(uint *)(gen_frame + 0x14)) = (uint)*(byte *)(piVar9 + 3);
        uVar7 = F_00da5ff0(piVar9 GEN_EDX_ARG);
        uVar6 = F_00e06180((int)(*(undefined * PTR32 *)(gen_frame + 0x20)) + 0x10,(*(uint *)(gen_frame + 0x14)),(uint)bVar1,uVar6,uVar7);
        (*(uint *)(gen_frame + 0x14)) = uVar6;
        piVar8 = (*(int * PTR32 *)(gen_frame + 0x10));
      }
      iVar11 = *piVar9;
      if (iVar11 == 0) {
        (*(int * PTR32 *)(gen_frame + 0x18)) = ((int *)GEN_TOP(0x0));
      }
      else {
        piVar9 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x20)) + 8))) + 0x50)));
        (*(int * PTR32 *)(gen_frame + 0x18)) = piVar9;
        piVar9 = ((int *)GEN_TOP(F_00da4190(piVar9 GEN_EDX_ARG,iVar11,0)));
        if (piVar9 == ((int *)GEN_TOP(0x0))) {
          piVar9 = ((int *)GEN_TOP(F_00da1210(iVar11)));
          F_00da3a20((*(int * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,piVar9,piVar9);
        }
        (*(int * PTR32 *)(gen_frame + 0x18)) = piVar9;
      }
      if (piVar8[0xb] == (piVar8[0xc] & 0x3fffffffU)) {
        F_00d95710(*((undefined4 *)GEN_TOP((piVar8[3] + 0xc))),piVar8 + 10,0x18);
      }
      puVar2 = ((undefined4 *)GEN_TOP((piVar8[10] + piVar8[0xb] * 0x18)));
      if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar2 = (*(int * PTR32 *)(gen_frame + 0x18));
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[4] = (*(uint *)(gen_frame + 0x14));
        puVar2[5] = 0;
      }
      piVar8[0xb] = piVar8[0xb] + 1;
      iVar11 = (*(int *)(gen_frame + 0x1c)) + 1;
      (*(int *)(gen_frame + 0x1c)) = iVar11;
      uVar6 = F_00d92850(param_1 GEN_EDX_ARG);
    } while (iVar11 < (int)uVar6);
  }
  return (uint)piVar8;
}

/* ref: hkDataWorldDict::vf13 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0eae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe0eae0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 8))))(((int *)GEN_TOP(*param_1)) GEN_EDX_FWD);
  uVar3 = F_00e1a1a0(this + 0x10 GEN_EDX_ARG,uVar3);
  if (uVar3 != 0) {
    F_00e1ac10(this + 0x10 GEN_EDX_ARG,uVar3);
  }
  puVar2 = ((undefined4 *)GEN_TOP(*param_1));
  *param_1 = 0;
  uVar3 = F_00e16d40(*(undefined * PTR32 *)(this + 8) GEN_EDX_ARG,puVar2);
  piVar1 = puVar2 + 2;
  *piVar1 = *piVar1 - 1;
  if (*piVar1 == 0) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
  }
  return uVar3;
}

/* ref: hkDataWorldDict::vf15 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0eb40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe0eb40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int * piVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  uint uVar5;
  
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0x10))))(((int *)GEN_TOP(*param_1)) GEN_EDX_FWD);
  iVar2 = *param_1;
  iVar3 = *param_2;
  if (iVar3 != 0) {
    *((int *)GEN_TOP((iVar3 + 8))) = *((int *)GEN_TOP((iVar3 + 8))) + 1;
  }
  puVar4 = *((undefined4 * PTR32 *)GEN_TOP((iVar2 + 0x18)));
  if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
    piVar1 = puVar4 + 2;
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar4)))(puVar4 GEN_EDX_ARG,1);
    }
  }
  *((int *)GEN_TOP((iVar2 + 0x18))) = iVar3;
  uVar5 = F_00e16f50(*(undefined * PTR32 *)(this + 8) GEN_EDX_ARG,uVar5,*param_1);
  return uVar5;
}

/* ref: hkDataWorldDict::vf22 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0eba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe0eba0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00e16fc0(*(undefined * PTR32 *)(this + 8) GEN_EDX_FWD,*param_1,*param_2);
  return uVar1;
}

/* ref: FUN_00e0ebc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0ebc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe0ebc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_1;
  uVar1 = param_1 >> 8;
  param_1 = uVar1 << 8;
  *(uint *)this = uVar2;
  F_00da3de0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0x80000000;
  param_1 = uVar1 << 8;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0xffffffff;
  F_00da3de0(((undefined *)GEN_TOP(((int)this + 0x50))) GEN_EDX_ARG,param_1);
  param_1 = uVar1 << 8;
  F_00da3de0(((undefined *)GEN_TOP(((int)this + 0x60))) GEN_EDX_ARG,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0;
  return (uint)this;
}

/* ref: FUN_00e0ec50 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e0ec50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe0ec50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  LPVOID pvVar1;
  undefined * this_00;
  uint uVar2;
  
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[24])REFP(0x114e37c));
  F_00e1ae10(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD);
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = *((undefined4 *)GEN_TOP(((int)pvVar1 + 0x2c)));
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))
                              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,0x7c)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    uVar2 = F_00e0ebc0(this_00 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0xc))));
    *((uint *)GEN_TOP(((int)this + 8))) = uVar2;
    return (uint)this;
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return (uint)this;
}

/* ref: FUN_00e0ecc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0ecc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe0ecc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  LPVOID pvVar1;
  undefined * this_00;
  uint uVar2;
  
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[24])REFP(0x114e37c));
  F_00e1ae10(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_1;
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))
                              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,0x7c)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    uVar2 = F_00e0ebc0(this_00 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0xc))));
    *((uint *)GEN_TOP(((int)this + 8))) = uVar2;
    return (uint)this;
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return (uint)this;
}

/* ref: FUN_00e0ed30 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e0ed30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe0ed30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  LPVOID pvVar1;
  uint uVar2;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 8)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[24])REFP(0x114e37c));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    F_00e0e030(this_00 GEN_EDX_FWD);
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,this_00,0x7c);
  }
  uVar2 = F_00e1a370(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar2;
}

/* ref: hkDataWorldDict::vf23 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0ed80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0ed80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  GEN_FRAME_DECL_TOP(0x44, 12, 4);
  code * pcVar1;
  undefined4 uVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  int iVar6;
  undefined4 * puVar7;
  
  uVar2 = (*(int * PTR32 *)&gen_args[0]);
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24))))(this GEN_EDX_FWD,(*(int * PTR32 *)&gen_args[0]));
  if (uVar3 != 0) {
    return uVar3;
  }
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x24))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG,uVar2)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(uint *)(gen_frame + 0x14)) = 0x80000000;
  pcVar1 = *((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 8)));
  uVar3 = (*pcVar1)((*(int * PTR32 *)&gen_args[0]));
  (*(uint *)(gen_frame + 0x0)) = uVar3;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0xc))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
  (*(uint *)(gen_frame + 0x4)) = uVar3;
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x10))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG)));
  if (piVar4 == ((int *)GEN_TOP(0x0))) {
    (*(uint *)(gen_frame + 0x8)) = 0;
  }
  else {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 8))))(piVar4 GEN_EDX_ARG);
    (*(uint *)(gen_frame + 0x8)) = uVar3;
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24))))(this GEN_EDX_ARG,(*(uint *)(gen_frame + 0x0)));
    if (uVar3 != 0) {
      F_00df1580(&(*(uint *)(gen_frame + 0x0)) GEN_EDX_ARG);
      return uVar3;
    }
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x0)));
  (*(uint *)(gen_frame + 0x34)) = uVar3;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x18))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
  (*(uint *)(gen_frame + 0x18)) = 0;
  (*(uint *)(gen_frame + 0x1c)) = 0;
  (*(int *)(gen_frame + 0x20)) = 0x80000000;
  if (uVar3 == 0) {
    uVar5 = 0;
  }
  else {
    (*(int *)(gen_frame + 0x3c)) = uVar3 << 4;
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0xc))))(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0x3c)));
    iVar6 = (int)((*(int *)(gen_frame + 0x3c)) + ((*(int *)(gen_frame + 0x3c)) >> 0x1f & 0xfU)) >> 4;
    if (iVar6 != 0) goto LAB_00e0ee4b;
  }
  iVar6 = ((int)0x80000000);
LAB_00e0ee4b: ;
  (*(uint *)(gen_frame + 0x18)) = uVar5;
  (*(uint *)(gen_frame + 0x1c)) = uVar3;
  (*(int *)(gen_frame + 0x20)) = iVar6;
  if (0 < (int)uVar3) {
    puVar7 = ((undefined4 *)GEN_TOP((uVar5 + 8)));
    do {
      if (puVar7 != ((undefined4 *)GEN_TOP(0x8))) {
        puVar7[-2] = 0;
        puVar7[-1] = 0;
        *puVar7 = 0;
        puVar7[1] = 0;
      }
      puVar7 = puVar7 + 4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  F_00e1ce00(&(*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x18)));
  if ((int)((*(uint *)(gen_frame + 0x14)) & 0x3fffffff) < (int)(*(uint *)(gen_frame + 0x1c))) {
    uVar3 = ((*(uint *)(gen_frame + 0x14)) & 0x3fffffff) * 2;
    uVar5 = (*(uint *)(gen_frame + 0x1c));
    if ((int)(*(uint *)(gen_frame + 0x1c)) < (int)uVar3) {
      uVar5 = uVar3;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined4 *)(gen_frame + 0xc)),uVar5,0xc);
  }
  (*(uint *)(gen_frame + 0x24)) = (*(uint *)(gen_frame + 0x34));
  (*(int *)(gen_frame + 0x38)) = 0;
  if (0 < (int)(*(uint *)(gen_frame + 0x1c))) {
    (*(int *)(gen_frame + 0x3c)) = 0;
    do {
      puVar7 = ((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x3c)) + (*(uint *)(gen_frame + 0x18)))));
      (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar7;
      uVar3 = F_00e1aff0(this + 0x10 GEN_EDX_ARG,puVar7[2]);
      piVar4 = ((int *)GEN_TOP(F_00e19d40(uVar3 GEN_EDX_ARG)));
      (*(int * PTR32 *)(gen_frame + 0x2c)) = piVar4;
      if (*piVar4 == 6) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x30)) = ((undefined4 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x24)));
        uVar5 = F_00e19c80(uVar3 GEN_EDX_ARG);
        uVar5 = (*((code *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x30)))))((*(int * PTR32 *)&gen_args[1]),uVar5);
        if (uVar5 != 0) {
          iVar6 = *(int *)this;
          piVar4 = (*(int * PTR32 *)&gen_args[1]);
          uVar5 = F_00e19c80((*(int * PTR32 *)(gen_frame + 0x2c)) GEN_EDX_ARG);
          ((code *)*((gen_code32 *)GEN_TOP((iVar6 + 0x5c))))(this,uVar5,piVar4);
          puVar7 = (*(undefined4 * PTR32 *)(gen_frame + 0x28));
        }
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x40))))(this GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x24)),*puVar7,uVar3,0);
      (*(int *)(gen_frame + 0x3c)) = (*(int *)(gen_frame + 0x3c)) + 0x10;
      iVar6 = (*(int *)(gen_frame + 0x38)) + 1;
      (*(int *)(gen_frame + 0x38)) = iVar6;
    } while (iVar6 < (int)(*(uint *)(gen_frame + 0x1c)));
  }
  (*(uint *)(gen_frame + 0x1c)) = 0;
  if (-1 < (*(int *)(gen_frame + 0x20))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(uint *)(gen_frame + 0x18)),(*(int *)(gen_frame + 0x20)) << 4);
  }
  (*(uint *)(gen_frame + 0x18)) = 0;
  (*(int *)(gen_frame + 0x20)) = 0x80000000;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  uVar3 = (*(uint *)(gen_frame + 0x34));
  if (-1 < (int)(*(uint *)(gen_frame + 0x14))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 *)(gen_frame + 0xc)),((*(uint *)(gen_frame + 0x14)) & 0x3fffffff) * 0xc);
    uVar3 = (*(uint *)(gen_frame + 0x34));
  }
  return uVar3;
}

/* ref: FUN_00e0f010 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0f010(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe0f010u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint local_8;
  
  local_8 = (uint)this & 0xffffff00;
  F_00da3de0(this GEN_EDX_FWD,local_8);
  return (uint)this;
}

/* ref: FUN_00e0f030 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0f030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe0f030u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da3a20(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e0f040 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0f040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe0f040u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da4190(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e0f050 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0f050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe0f050u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00da3f00(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00e0f070 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0f070(GEN_P(undefined4 in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe0f070u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00da39b0(in_ecx GEN_EDX_FWD,param_2);
  return uVar1;
}

/* ref: FUN_00e0f080 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0f080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe0f080u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00da39f0(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00e0f090 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0f090(GEN_P(undefined4 in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe0f090u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  F_00da3e40(in_ecx GEN_EDX_FWD,param_2,param_3);
  return param_2;
}

/* ref: FUN_00e0f0b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0f0b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe0f0b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint local_8;
  
  local_8 = (uint)this & 0xffffff00;
  F_00da3de0(this GEN_EDX_FWD,local_8);
  return (uint)this;
}

/* ref: FUN_00e0f0d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0f0d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe0f0d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da3a20(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e0f0e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0f0e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe0f0e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da4190(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e0f0f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0f0f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe0f0f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00da3f00(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00e0f110 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0f110(GEN_P(undefined4 in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe0f110u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00da39b0(in_ecx GEN_EDX_FWD,param_2);
  return uVar1;
}

/* ref: FUN_00e0f120 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0f120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe0f120u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00da39f0(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00e0f130 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0f130(GEN_P(undefined4 in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe0f130u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  F_00da3e40(in_ecx GEN_EDX_FWD,param_2,param_3);
  return param_2;
}

/* ref: FUN_00e0f150 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0f150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe0f150u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dbd970(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e0f1b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0f1b0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe0f1b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((bool *)GEN_TOP(param_2)) = in_ecx[3] != *in_ecx;
  return param_2;
}

/* ref: FUN_00e0f1d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0f1d0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe0f1d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((bool *)GEN_TOP(param_2)) = in_ecx[3] != *in_ecx;
  return param_2;
}

/* ref: FUN_00e0f1f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0f1f0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe0f1f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_00e0f210 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0f210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe0f210u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  if (((undefined *)GEN_TOP(*param_1)) != ((undefined *)GEN_TOP(0x0))) {
    F_00d919e0(((undefined *)GEN_TOP(*param_1)) GEN_EDX_FWD);
  }
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00e0f250 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e0f250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe0f250u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(undefined * PTR32 *)this != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00e0f270 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e0f270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe0f270u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e0f2d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0f2d0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe0f2d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00e0f320 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0f320(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe0f320u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00e0f360 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0f360(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe0f360u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00e0f390 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0f390(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe0f390u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_2 != 0) {
    *((int *)GEN_TOP((param_2 + 8))) = *((int *)GEN_TOP((param_2 + 8))) + 1;
  }
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e0f3b0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e0f3b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe0f3b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  undefined4 * puVar2;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    piVar1 = puVar2 + 2;
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_FWD,1);
    }
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00e0f3d0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e0f3d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe0f3d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  undefined4 * puVar2;
  
  if (param_1 != 0) {
    *((int *)GEN_TOP((param_1 + 8))) = *((int *)GEN_TOP((param_1 + 8))) + 1;
  }
  puVar2 = *(undefined4 * PTR32 *)this;
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    piVar1 = puVar2 + 2;
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_FWD,1);
    }
  }
  *(int *)this = param_1;
  return;
}

/* ref: FUN_00e0f430 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0f430(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe0f430u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00e0f480 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0f480(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe0f480u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 0x18;
}

/* ref: FUN_00e0f4a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0f4a0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe0f4a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 0x18;
}

/* ref: FUN_00e0f4e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0f4e0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe0f4e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_2 != 0) {
    *((int *)GEN_TOP((param_2 + 8))) = *((int *)GEN_TOP((param_2 + 8))) + 1;
  }
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e0f500 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e0f500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe0f500u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  undefined4 * puVar2;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    piVar1 = puVar2 + 2;
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_FWD,1);
    }
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00e0f560 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0f560(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe0f560u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00e0f5e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0f5e0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe0f5e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00e0f630 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0f630(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe0f630u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00e0f680 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0f680(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe0f680u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00e0f6a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0f6a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe0f6a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dbd8b0(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e0f6c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0f6c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe0f6c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00dbd930(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00e0f6d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0f6d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe0f6d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dbd970(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e0f6e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0f6e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe0f6e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00dbd9f0(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00e0f6f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0f6f0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe0f6f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*in_ecx + 4 + param_2 * 8)));
}

/* ref: FUN_00e0f730 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0f730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe0f730u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00e0f760 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0f760(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe0f760u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00e0f770 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0f770(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe0f770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00e0f790 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0f790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe0f790u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00e0f7e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0f7e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe0f7e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00e0f820 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0f820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe0f820u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 0x18);
  return uVar1;
}

/* ref: FUN_00e0f860 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0f860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe0f860u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 << 4);
  return uVar1;
}

/* ref: FUN_00e0f890 */
GEN_LIB GEN_FRAME unsigned int F_00e0f890(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe0f890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  iVar2 = 2;
  puVar1 = param_1;
  do {
    *puVar1 = *((undefined4 *)GEN_TOP(((param_2 - (int)param_1) + (int)puVar1)));
    puVar1[1] = *((undefined4 *)GEN_TOP(((param_2 - (int)param_1) + 4 + (int)puVar1)));
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  return 0;
}

/* ref: FUN_00e0f900 */
GEN_LIB GEN_FRAME unsigned int F_00e0f900(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe0f900u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e0f950 */
GEN_LIB GEN_FRAME unsigned int F_00e0f950(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe0f950u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e0f9c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0f9c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe0f9c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00e0f9f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0f9f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe0f9f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00e0fa10 */
GEN_LIB GEN_FRAME uint F_00e0fa10(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe0fa10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + param_1;
}

/* ref: FUN_00e0fa20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e0fa20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe0fa20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

