#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_009cb1b0 */
uint F_009cb1b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x9cb1b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint uVar1;
  int * piVar2;
  code * pcVar3;
  float10 extraout_ST0;
  
  F_009c2a20(this,param_1,param_2,param_3,param_4,param_5);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[34])REFP(0x10e03a4));
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x29c) + 0xa4))))(*(int * PTR32 *)((int)this + 0x29c));
  if ((char)uVar1 == '\0') {
    pcVar3 = ((code *)REFP(0x9c66f0));
  }
  else {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x29c) + 0xac))))
                              (*(int * PTR32 *)((int)this + 0x29c))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
    if ((char)uVar1 == '\0') {
      pcVar3 = ((code *)REFP(0x9c64c0));
    }
    else {
      pcVar3 = ((code *)REFP(0x9c6220));
    }
  }
  *(gen_code32 *)((int)this + 0x348) = pcVar3;
  *(undefined4 *)((int)this + 0x30c) = 0;
  *(undefined4 *)((int)this + 0x310) = REFG(float, 0x132f3f8);
  *(undefined4 *)((int)this + 0x314) = REFG(float, 0x132f3fc);
  *(undefined4 *)((int)this + 0x318) = REFG(float, 0x132f400);
  *(undefined4 *)((int)this + 0x31c) = REFG(float, 0x14a0a2c);
  *(undefined4 *)((int)this + 800) = REFG(float, 0x14a0a30);
  *(undefined4 *)((int)this + 0x324) = REFG(float, 0x14a0a34);
  *(undefined4 *)((int)this + 0x328) = REFG(float, 0x14a0a2c);
  *(undefined4 *)((int)this + 0x32c) = REFG(float, 0x14a0a30);
  *(undefined4 *)((int)this + 0x330) = REFG(float, 0x14a0a34);
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x29c) + 0xac))))(*(int * PTR32 *)((int)this + 0x29c))));
  uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  if ((char)uVar1 != '\0') {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x29c) + 0xac))))
                              (*(int * PTR32 *)((int)this + 0x29c))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2);
    *(uint *)((int)this + 0x340) = uVar1;
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x29c) + 0xac))))
                              (*(int * PTR32 *)((int)this + 0x29c))));
    extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(float *)((int)this + 0x344) = (float)extraout_ST0;
    F_0097ef70(this);
    return (uint)this;
  }
  *(undefined4 *)((int)this + 0x340) = 0xffffffff;
  *(undefined4 *)((int)this + 0x344) = 0;
  F_0097ef70(this);
  return (uint)this;
}

/* ref: Apricot::Engine::Instance::PolyLineParticleInstance::vf29 */
uint F_009cb350(unsigned int gen_a0)
{
  GEN_ENTER(0x9cb350u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int * piVar8;
  uint uVar9;
  int * piVar10;
  undefined4 * puVar11;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 extraout_ST0_02;
  float10 extraout_ST0_03;
  float10 extraout_ST0_04;
  float10 extraout_ST0_05;
  float10 extraout_ST0_06;
  float10 extraout_ST0_07;
  
  ((code *)*(gen_code32 *)(*(int *)this + 0x84))(this);
  piVar8 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x29c) + 0xc0))))(*(int * PTR32 *)(this + 0x29c))));
  fVar2 = *(float *)(this + 0x1a8);
  fVar3 = *(float *)(this + 0x1ac);
  uVar9 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1d8) + 0x10))))(*(int * PTR32 *)(this + 0x1d8));
  iVar5 = *(int *)(this + 0x31c);
  *(undefined4 *)(iVar5 + 0xe0) = *(undefined4 *)(uVar9 + 0x24);
  *(undefined4 *)(iVar5 + 0xe4) = *(undefined4 *)(uVar9 + 0x28);
  *(undefined4 *)(iVar5 + 0xe8) = *(undefined4 *)(uVar9 + 0x2c);
  puVar1 = ((uint *)GEN_TOP((*(int *)(this + 0x31c) + 0x128)));
  *puVar1 = *puVar1 ^ ((uint)(byte)this[0x315] * 4 ^ *((uint *)GEN_TOP((*(int *)(this + 0x31c) + 0x128)))) & 4;
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  uVar7 = REFG(undefined4, 0x13301e0);
  uVar9 = REFG(undefined4, 0x13301e8) << 0xb ^ REFG(undefined4, 0x13301e8);
  REFG(undefined4, 0x13301e8) = REFG(undefined4, 0x13301e4);
  REFG(undefined4, 0x13301e0) = REFG(undefined4, 0x13301dc);
  REFG(undefined4, 0x13301dc) = uVar9 ^ uVar9 >> 8 ^ REFG(undefined4, 0x13301dc) ^ REFG(undefined4, 0x13301dc) >> 0x13;
  REFG(undefined4, 0x13301e4) = uVar7;
  *((int *)GEN_TOP((*(int *)(this + 0x31c) + 0x158))) =
       (int)(REFG(undefined4, 0x13301dc) * 0x10000 + ((int)(REFG(undefined4, 0x13301dc) * 0x10000) >> 0x1f & 0xffffU)) >> 0x10;
  piVar10 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 0x40))(piVar8)));
  extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*piVar10 + 0x10))(piVar10,(undefined4)gen_fl2bits(fVar2));
  *((float *)GEN_TOP((*(int *)(this + 0x31c) + 0x130))) = (float)extraout_ST0;
  piVar10 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 0x2c))(piVar8)));
  extraout_ST0_00 = ((gen_fcode *)*(gen_code32 *)(*piVar10 + 0x10))(piVar10,(undefined4)gen_fl2bits(fVar2));
  *((float *)GEN_TOP((*(int *)(this + 0x31c) + 0x134))) = (float)extraout_ST0_00;
  piVar10 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 0x48))(piVar8)));
  extraout_ST0_01 = ((gen_fcode *)*(gen_code32 *)(*piVar10 + 0x10))(piVar10,(undefined4)gen_fl2bits(fVar2));
  *((float *)GEN_TOP((*(int *)(this + 0x31c) + 0x138))) = (float)extraout_ST0_01;
  piVar10 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 0x44))(piVar8)));
  extraout_ST0_02 = ((gen_fcode *)*(gen_code32 *)(*piVar10 + 0x10))(piVar10);
  *((float *)GEN_TOP((*(int *)(this + 0x31c) + 0x13c))) = (float)extraout_ST0_02;
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  iVar5 = *(int *)(this + 0x31c);
  iVar6 = *piVar8;
  *(undefined4 *)(iVar5 + 0xf8) = REFG(float, 0x14a0d94);
  *(undefined4 *)(iVar5 + 0xfc) = REFG(float, 0x14a0d98);
  *(undefined4 *)(iVar5 + 0x100) = REFG(float, 0x14a0d9c);
  piVar10 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(iVar6 + 0x30))(piVar8)));
  extraout_ST0_03 = ((gen_fcode *)*(gen_code32 *)(*piVar10 + 0x10))(piVar10,(undefined4)gen_fl2bits(fVar2));
  *((float *)GEN_TOP((*(int *)(this + 0x31c) + 0x140))) = (float)extraout_ST0_03;
  piVar10 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 0x34))(piVar8)));
  extraout_ST0_04 = ((gen_fcode *)*(gen_code32 *)(*piVar10 + 0x10))(piVar10,(undefined4)gen_fl2bits(fVar2));
  *((float *)GEN_TOP((*(int *)(this + 0x31c) + 0x144))) = (float)extraout_ST0_04;
  piVar10 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 0x3c))(piVar8)));
  extraout_ST0_05 = ((gen_fcode *)*(gen_code32 *)(*piVar10 + 0x10))(piVar10,(undefined4)gen_fl2bits(fVar2));
  *((float *)GEN_TOP((*(int *)(this + 0x31c) + 0x14c))) = (float)extraout_ST0_05;
  puVar11 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x18))(this)));
  iVar5 = *(int *)(this + 0x31c);
  *(undefined4 *)(iVar5 + 0xec) = *puVar11;
  *(undefined4 *)(iVar5 + 0xf0) = puVar11[1];
  *(undefined4 *)(iVar5 + 0xf4) = puVar11[2];
  fVar4 = *((float *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x1d4) + 0x1ec))) + 0x94)));
  extraout_ST0_06 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x29c) + 100))))(*(int * PTR32 *)(this + 0x29c));
  *((float *)GEN_TOP((*(int *)(this + 0x31c) + 300))) = (float)(extraout_ST0_06 + (float10)fVar4);
  F_0097f590(this,*(int *)(this + 0x31c) + 0x160,fVar2,fVar3);
  uVar9 = *((uint *)GEN_TOP((*(int *)(this + 0x31c) + 0x128)));
  if ((uVar9 & 0x10) == 0) {
    if ((uVar9 & 1) == 0) goto LAB_009cb71d;
    piVar10 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 0x38))(piVar8)));
  }
  else {
    if ((uVar9 & 1) == 0) goto LAB_009cb71d;
    piVar10 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 0x38))(piVar8)));
  }
  extraout_ST0_07 = ((gen_fcode *)*(gen_code32 *)(*piVar10 + 0x10))(piVar10,(undefined4)gen_fl2bits(fVar2));
  *((float *)GEN_TOP((*(int *)(this + 0x31c) + 0x148))) = (float)extraout_ST0_07;
LAB_009cb71d: ;
  if (*(int *)(this + 0x32c) == -2) {
    *((uint *)GEN_TOP((*(int *)(this + 0x31c) + 0x128))) =
         *((uint *)GEN_TOP((*(int *)(this + 0x31c) + 0x128))) & 0xfffffffd;
  }
  else {
    uVar9 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1d4) + 0x270))) + 0x10))))
                      (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1d4) + 0x270))),*(int *)(this + 0x32c));
    piVar10 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1d4) + 0x270)));
    iVar5 = *(int *)(this + 0x31c);
    iVar6 = *piVar10;
    uVar9 = ((code *)*(gen_code32 *)(*piVar8 + 0xc))(piVar8,uVar9);
    uVar9 = ((code *)*(gen_code32 *)(iVar6 + 0x1c))(piVar10,iVar5 + 0x104,iVar5 + 0x110,iVar5 + 0x11c,uVar9);
    puVar1 = ((uint *)GEN_TOP((*(int *)(this + 0x31c) + 0x128)));
    *puVar1 = *puVar1 ^ ((uVar9 & 0xff) * 2 ^ *((uint *)GEN_TOP((*(int *)(this + 0x31c) + 0x128)))) & 2;
  }
  if ((*((byte *)GEN_TOP((*(int *)(this + 0x31c) + 0x128))) & 0x10) != 0) {
    uVar9 = F_009c76d0(this);
    this[0x315] = (undefined1)0x0;
    return uVar9;
  }
  uVar9 = F_009c7800(this);
  this[0x315] = (undefined1)0x0;
  return uVar9;
}

/* ref: FUN_009cb7f0 */
byte F_009cb7f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9cb7f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_0042a990((int)this + 0xc);
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  uVar1 = F_009c8b10(&REFG(float, 0x14a0d58),this,uVar1,param_1,param_2,param_3);
  *(uint *)((int)this + 0x60) = uVar1;
  return uVar1 != 0;
}

/* ref: FUN_009cb860 */
uint F_009cb860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9cb860u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  undefined4 uVar2;
  undefined * pvVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  uVar2 = REFG(float, 0x1087f04);
  (*(undefined * PTR32 *)(gen_frame + 0x4c)) = this;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0x48) = param_1;
  *(undefined4 *)((int)this + 0x58) = uVar2;
  ((undefined4 *)(gen_frame + 0x0))[1] = 0;
  ((undefined4 *)(gen_frame + 0x0))[2] = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  *(undefined4 *)((int)this + 100) = REFG(float, 0x1090708);
  ((undefined4 *)(gen_frame + 0x0))[0] = uVar2;
  (*(undefined4 *)(gen_frame + 0x14)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x28)) = uVar2;
  puVar5 = ((undefined4 *)(gen_frame + 0x0));
  puVar6 = this;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined4 *)((int)this + 0x40) = param_2;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x70) = uVar2;
  *(undefined4 *)((int)this + 0x74) = uVar2;
  *(undefined4 *)((int)this + 0x78) = uVar2;
  *(undefined4 *)((int)this + 0x80) = uVar2;
  *(undefined4 *)((int)this + 0x84) = uVar2;
  *(undefined4 *)((int)this + 0x88) = uVar2;
  *(undefined4 *)((int)this + 0x8c) = uVar2;
  *(byte *)((int)this + 0x96) = *(byte *)((int)this + 0x96) & 0xe4 | 4;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  iVar4 = *(int *)((int)this + 0x40);
  piVar1 = (int *)(iVar4 + 4);
  LOCK();
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  F_00513f60(*(undefined4 *)(iVar4 + 100),0,0);
  pvVar3 = (*(undefined * PTR32 *)(gen_frame + 0x4c));
  F_009c8430((*(undefined * PTR32 *)(gen_frame + 0x4c)));
  return (uint)pvVar3;
}

/* ref: FUN_009cb980 */
uint F_009cb980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9cb980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10de6fc));
  puVar2 = param_1;
  puVar3 = (undefined4 *)((int)this + 0x10);
  for (iVar1 = 0x58; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x170) = (*(undefined * PTR32 (*)[3])REFP(0x10b2ad0))
  ;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10e0440));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x170) = (*(undefined * PTR32 (*)[3])REFP(0x10e0430));
  *(undefined4 *)((int)this + 0x174) = 0;
  *(undefined4 *)((int)this + 0x178) = 0;
  F_009c83c0(this);
  return (uint)this;
}

/* ref: FUN_009cb9e0 */
unsigned int F_009cb9e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9cb9e0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x14a0a8c));
  F_009e6340(&REFG(undefined, 0x14a0a6c),&(*(undefined4 *)(gen_frame + 0x4)),&(*(undefined4 *)&gen_args[0]));
  F_009e9d00(&REFG(undefined, 0x14a0a6c),&(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x14a0a8c));
  return 0;
}

/* ref: FUN_009cba30 */
unsigned int F_009cba30(unsigned int gen_a0)
{
  GEN_ENTER(0x9cba30u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x14a0aa4));
  F_009e6670(&REFG(undefined, 0x14a0a7c),&(*(undefined4 *)(gen_frame + 0x4)),&(*(undefined4 *)&gen_args[0]));
  F_009e9dc0(&REFG(undefined, 0x14a0a7c),&(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x14a0aa4));
  return 0;
}

/* ref: FUN_009cba80 */
uint F_009cba80(unsigned int gen_a0)
{
  GEN_ENTER(0x9cba80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[36])REFP(0x10de564));
  F_004cefe0((undefined *)((int)this + 4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[38])REFP(0x10e0304));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[6])REFP(0x10e02e8));
  *(undefined4 *)((int)this + 0x1c) = 0;
  gen_imp_InitializeCriticalSection((int)this + 0x20);
  gen_imp_InitializeCriticalSection((int)this + 0x38);
  F_00ba85b0((int)this + 0x50,0);
  F_00ba85b0((int)this + 0x78,0);
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  return (uint)this;
}

/* ref: FUN_009cbb20 */
uint F_009cbb20(unsigned int gen_a0)
{
  GEN_ENTER(0x9cbb20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10e0474));
  uVar1 = *(uint *)((int)this + 4);
  if ((uVar1 != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a18))(uVar1);
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10dd320));
  return uVar1;
}

/* ref: FUN_009cbb90 */
uint F_009cbb90(unsigned int gen_a0)
{
  GEN_ENTER(0x9cbb90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  code * pcVar2;
  
  pcVar2 = REFG(undefined * PTR32, 0x14a0a18);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x10e048c));
  if ((*(int *)((int)this + 0x14) != 0) && (pcVar2 != (code *)0x0)) {
    (*pcVar2)(*(int *)((int)this + 0x14));
    pcVar2 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  uVar1 = *(uint *)((int)this + 4);
  if ((uVar1 != 0) && (pcVar2 != (code *)0x0)) {
    uVar1 = (*pcVar2)(uVar1);
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x10dd338));
  return uVar1;
}

/* ref: FUN_009cbbf0 */
uint F_009cbbf0(unsigned int gen_a0)
{
  GEN_ENTER(0x9cbbf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 0x18);
  if (*(uint *)((int)this + 0x14) != uVar2) {
    uVar2 = F_009e3860(uVar2,uVar2,*(uint *)((int)this + 0x14),this);
    *(uint *)((int)this + 0x18) = uVar2;
  }
  uVar1 = *(uint *)((int)this + 8);
  if (*(uint *)((int)this + 4) != uVar1) {
    *(uint *)((int)this + 8) = *(uint *)((int)this + 4);
    uVar2 = uVar1;
  }
  return uVar2;
}

/* ref: FUN_009cbc60 */
uint F_009cbc60(unsigned int gen_a0)
{
  GEN_ENTER(0x9cbc60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e04ac));
  uVar1 = *(uint *)((int)this + 4);
  if ((uVar1 != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a18))(uVar1);
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10dd28c));
  return uVar1;
}

/* ref: FUN_009cbca0 */
uint F_009cbca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, float gen_a7, float gen_a8, float gen_a9, unsigned int gen_a10)
{
  GEN_ENTER(0x9cbca0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[11];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  memcpy(&gen_args[7], &gen_a7, sizeof gen_a7);
  memcpy(&gen_args[8], &gen_a8, sizeof gen_a8);
  memcpy(&gen_args[9], &gen_a9, sizeof gen_a9);
  gen_args[10] = gen_a10;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  code * pcVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int * piVar10;
  undefined * pvVar11;
  uint uVar12;
  int iVar13;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar14;
  
  uVar12 = (*(uint *)&gen_args[1]);
  uVar7 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1f8))) + 0x28))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1f8))));
  if ((0 < (int)uVar7) &&
     (uVar7 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1f8))) + 0x28))))
                        (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1f8)))),
     (int)uVar7 <= (int)(*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1d0))) >> 9 & 0x1ff))) {
    return uVar7;
  }
  if ((*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1d0))) >> 0x13 & 1) != 0) {
    return uVar7;
  }
  if ((*(uint *)((*(uint *)&gen_args[3]) + 0x18) & 0x20) == 0) {
    if ((*(uint *)((*(uint *)&gen_args[3]) + 0x18) & 0x40) == 0) {
      piVar10 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)(*(uint *)&gen_args[1]) + 8))((*(uint *)&gen_args[1]))));
      extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*piVar10 + 0xc))(piVar10);
      (*(uint *)&gen_args[1]) = (uint)gen_fl2bits((float)extraout_ST0);
    }
    else {
      iVar13 = *(int *)((*(uint *)&gen_args[3]) + 0x14);
      F_009a46a0();
      uVar7 = REFG(undefined4, 0x13301e4);
      uVar8 = REFG(undefined4, 0x13301e8) << 0xb ^ REFG(undefined4, 0x13301e8);
      REFG(undefined4, 0x13301e4) = REFG(undefined4, 0x13301e0);
      REFG(undefined4, 0x13301e0) = REFG(undefined4, 0x13301dc);
      REFG(undefined4, 0x13301dc) = REFG(undefined4, 0x13301dc) >> 0x13 ^ uVar8 ^ uVar8 >> 8 ^ REFG(undefined4, 0x13301dc);
      iVar9 = (iVar13 * 2 + 1) * (REFG(undefined4, 0x13301dc) & 0xffff);
      REFG(undefined4, 0x13301e8) = uVar7;
      (*(uint *)&gen_args[1]) = (uint)gen_fl2bits(((float)GEN_TOF(((((int)(iVar9 + (iVar9 >> 0x1f & 0xffffU)) >> 0x10) +
                                          *(int *)((*(uint *)&gen_args[3]) + 0x10)) - iVar13))));
    }
  }
  else {
    (*(uint *)&gen_args[1]) = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1b8)));
  }
  piVar10 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)uVar12 + 8))(uVar12)));
  extraout_ST0_00 = ((gen_fcode *)*(gen_code32 *)(*piVar10 + 4))(piVar10);
  fVar4 = (float)extraout_ST0_00;
  (*(float *)(gen_frame + 0x48)) = fVar4;
  if (((float10)0 < (float10)fVar4) && (0.0 < gen_bits2f((*(uint *)&gen_args[1])))) {
    fVar14 = (float10)fVar4 / ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[1]))));
  }
  else {
    fVar14 = (float10)1;
  }
  bVar5 = *(byte *)((*(uint *)&gen_args[3]) + 0x18);
  (*(float *)(gen_frame + 0x44)) = (float)fVar14;
  fVar1 = *(*(float * PTR32 *)&gen_args[5]);
  (*(float *)(gen_frame + 0x38)) = fVar1;
  fVar2 = (*(float * PTR32 *)&gen_args[5])[1];
  (*(float *)(gen_frame + 0x3c)) = fVar2;
  fVar3 = (*(float * PTR32 *)&gen_args[5])[2];
  (*(float *)(gen_frame + 0x40)) = fVar3;
  if ((bVar5 & 0x10) != 0) {
    (*(float *)(gen_frame + 0x38)) = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1fc))) + (float10)fVar1)));
    (*(float *)(gen_frame + 0x3c)) = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x200))) + (float10)fVar2)));
    (*(float *)(gen_frame + 0x40)) = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x204))) + (float10)fVar3)));
  }
  if ((*(int *)((*(uint *)&gen_args[3]) + 4) == 2) || ((*(undefined1 *)((char *)&(*(uint *)&gen_args[1]) + 3)) = 1, *(int *)((*(uint *)&gen_args[3]) + 4) == 3)) {
    (*(undefined1 *)((char *)&(*(uint *)&gen_args[1]) + 3)) = 0;
  }
  (*(undefined4 *)(gen_frame + 0xc)) = (*(undefined4 *)&gen_args[4]);
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(float * PTR32 *)(gen_frame + 0x10)) = &(*(float *)(gen_frame + 0x38));
  (*(undefined4 *)(gen_frame + 0x14)) = (*(undefined4 *)&gen_args[6]);
  pcVar6 = *(gen_code32 *)(*(int *)uVar12 + 0x84);
  (*(undefined4 *)(gen_frame + 0x18)) = (*(undefined4 *)&gen_args[10]);
  (*(float *)(gen_frame + 0x20)) = fVar4;
  (*(uint *)(gen_frame + 0x8)) = (*(uint *)&gen_args[3]);
  (*(float *)(gen_frame + 0x24)) = (float)fVar14;
  uVar7 = (*pcVar6)(uVar12);
  (*(uint *)(gen_frame + 0x28)) = uVar7;
  uVar7 = ((code *)*(gen_code32 *)(*(int *)uVar12 + 0x88))(uVar12);
  (*(uint *)(gen_frame + 0x2c)) = uVar7;
  uVar7 = ((code *)*(gen_code32 *)(*(int *)uVar12 + 0x34))(uVar12);
  (*(undefined1 *)(gen_frame + 0x31)) = (*(undefined1 *)((char *)&(*(uint *)&gen_args[1]) + 3));
  (*(undefined1 *)(gen_frame + 0x30)) = *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 (*)[2])REFP(0x10dd1e0)) + uVar7)));
  (*(undefined4 *)(gen_frame + 0x34)) = (*(undefined4 *)&gen_args[2]);
  uVar7 = ((code *)*(gen_code32 *)(*(int *)uVar12 + 0x30))(uVar12);
  uVar7 = uVar7 - 1;
  switch((unsigned int)(uintptr_t)(uVar7)) {
  case 0: ;
    pvVar11 = (undefined *)F_009df120(0x350);
    if (pvVar11 == (undefined *)0x0) {
      return 0;
    }
    piVar10 = (int *)F_009cb1b0(pvVar11,*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1d4))),(*(undefined * PTR32 *)&gen_args[0]),
                                  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1dc))),uVar12,&(*(uint *)(gen_frame + 0x8)));
    break;
  case 1: ;
    pvVar11 = (undefined *)F_009df120(0x318);
    if (pvVar11 == (undefined *)0x0) {
      return 0;
    }
    piVar10 = (int *)F_009c6860(pvVar11,*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1d4))),(*(undefined * PTR32 *)&gen_args[0]),
                                  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1dc))),uVar12,&(*(uint *)(gen_frame + 0x8)));
    break;
  case 2: ;
    pvVar11 = (undefined *)F_009df120(0x338);
    if (pvVar11 == (undefined *)0x0) {
      return 0;
    }
    piVar10 = (int *)F_009c5ea0(pvVar11,*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1d4))),(*(undefined * PTR32 *)&gen_args[0]),
                                  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1dc))),uVar12,&(*(uint *)(gen_frame + 0x8)));
    break;
  case 3: ;
    pvVar11 = (undefined *)F_009df120(0x328);
    if (pvVar11 == (undefined *)0x0) {
      return 0;
    }
    piVar10 = (int *)F_009c5b60(pvVar11,*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1d4))),(*(undefined * PTR32 *)&gen_args[0]),
                                  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1dc))),uVar12,&(*(uint *)(gen_frame + 0x8)));
    break;
  case 4: ;
    pvVar11 = (undefined *)F_009df120(0x308);
    if (pvVar11 == (undefined *)0x0) {
      return 0;
    }
    piVar10 = (int *)F_009c6ab0(pvVar11,*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1d4))),(*(undefined * PTR32 *)&gen_args[0]),
                                  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1dc))),uVar12,&(*(uint *)(gen_frame + 0x8)));
    break;
  case 5: ;
    pvVar11 = (undefined *)F_009df120(0x330);
    if (pvVar11 == (undefined *)0x0) {
      return 0;
    }
    piVar10 = (int *)F_009c7140(pvVar11,*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1d4))),(*(undefined * PTR32 *)&gen_args[0]),
                                  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1dc))),uVar12,&(*(uint *)(gen_frame + 0x8)),
                                  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20c))));
    break;
  default: ;
    goto switchD_009cbece_caseD_7;
  case 7: ;
    pvVar11 = (undefined *)F_009df120(0x2f8);
    if (pvVar11 == (undefined *)0x0) {
      return 0;
    }
    piVar10 = (int *)F_009c7920(pvVar11,*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1d4))),(*(undefined * PTR32 *)&gen_args[0]),
                                  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1dc))),uVar12,&(*(uint *)(gen_frame + 0x8)));
    break;
  case 8: ;
    pvVar11 = (undefined *)F_009df120(0x2f8);
    if (pvVar11 == (undefined *)0x0) {
      return 0;
    }
    piVar10 = (int *)F_009c6e80(pvVar11,*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1d4))),(*(undefined * PTR32 *)&gen_args[0]),
                                  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1dc))),uVar12,&(*(uint *)(gen_frame + 0x8)));
    break;
  case 9: ;
    pvVar11 = (undefined *)F_009df120(0x2f8);
    if (pvVar11 == (undefined *)0x0) {
      return 0;
    }
    piVar10 = (int *)F_009c7b10(pvVar11,*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1d4))),(*(undefined * PTR32 *)&gen_args[0]),
                                  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1dc))),uVar12,&(*(uint *)(gen_frame + 0x8)));
    break;
  case 10: ;
    pvVar11 = (undefined *)F_009df120(0x2f8);
    if (pvVar11 == (undefined *)0x0) {
      return 0;
    }
    piVar10 = (int *)F_009c7bd0(pvVar11,*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1d4))),(*(undefined * PTR32 *)&gen_args[0]),
                                  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1dc))),uVar12,&(*(uint *)(gen_frame + 0x8)));
    break;
  case 0xb: ;
    pvVar11 = (undefined *)F_009df120(0x308);
    if (pvVar11 == (undefined *)0x0) {
      return 0;
    }
    piVar10 = (int *)F_009c7cc0(pvVar11,*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1d4))),(*(undefined * PTR32 *)&gen_args[0]),
                                  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1dc))),uVar12,&(*(uint *)(gen_frame + 0x8)));
    break;
  case 0xc: ;
    pvVar11 = (undefined *)F_009df120(0x2f8);
    if (pvVar11 == (undefined *)0x0) {
      return 0;
    }
    piVar10 = (int *)F_009c6d40(pvVar11,*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1d4))),(*(undefined * PTR32 *)&gen_args[0]),
                                  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1dc))),uVar12,&(*(uint *)(gen_frame + 0x8)));
  }
  uVar7 = 0;
  if (piVar10 != (int *)0x0) {
    piVar10[0x54] = (int)gen_fl2bits((*(float *)&gen_args[7]));
    piVar10[0x55] = (int)gen_fl2bits((*(float *)&gen_args[8]));
    piVar10[0x56] = (int)gen_fl2bits((*(float *)&gen_args[9]));
    F_0097e5c0((*(undefined * PTR32 *)&gen_args[0]),piVar10);
    uVar7 = *(uint *)((*(uint *)&gen_args[3]) + 0xc);
    if (0 < (int)uVar7) {
      if ((*(byte *)((*(uint *)&gen_args[3]) + 0x18) & 1) == 0) {
        piVar10[0x6a] =
             (int)gen_fl2bits((float)(((float10)GEN_TOD(gen_bits2f(piVar10[0x6f]))) * (float10)(int)uVar7));
        piVar10[0x6b] =
             (int)gen_fl2bits((float)(((float10)GEN_TOD(gen_bits2f(piVar10[0x6f]))) * (float10)(int)uVar7));
      }
      else {
        iVar13 = 0;
        if (0 < (int)uVar7) {
          do {
            uVar12 = ((code *)*(gen_code32 *)(*piVar10 + 0x24))
                               (piVar10,(undefined4)gen_fl2bits((float)(float10)1));
            iVar13 = iVar13 + 1;
          } while (iVar13 < *(int *)((*(uint *)&gen_args[3]) + 0xc));
          return uVar12;
        }
      }
    }
  }
switchD_009cbece_caseD_7: ;
  return uVar7;
}

/* ref: FUN_009cc220 */
uint F_009cc220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6, float gen_a7, unsigned int gen_a8, unsigned int gen_a9, float gen_a10)
{
  GEN_ENTER(0x9cc220u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  float param_7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  float param_11 = (float)gen_a10;
  uint uVar1;
  int * piVar2;
  undefined4 * puVar3;
  float fVar4;
  
  fVar4 = param_11;
  uVar1 = ((code *)*(gen_code32 *)(*param_5 + 4))(param_5);
  F_009abc20(param_1,param_2,param_3,param_4,param_5,param_7,(float)(int)uVar1,fVar4);
  *(undefined * PTR32 * PTR32 *)param_1 = (*(undefined * PTR32 (*)[32])REFP(0x10deccc));
  *(undefined4 *)(param_1 + 0x270) = REFG(float, 0x132f428);
  *(undefined4 *)(param_1 + 0x274) = REFG(float, 0x132f42c);
  *(undefined4 *)(param_1 + 0x278) = REFG(float, 0x132f430);
  *(undefined4 *)(param_1 + 0x27c) = REFG(float, 0x132f434);
  *(undefined4 *)(param_1 + 0x280) = REFG(float, 0x132f438);
  *(undefined4 *)(param_1 + 0x284) = REFG(float, 0x132f43c);
  *(undefined4 *)(param_1 + 0x288) = REFG(float, 0x132f440);
  *(undefined4 *)(param_1 + 0x28c) = REFG(float, 0x132f444);
  *(undefined4 *)(param_1 + 0x290) = REFG(float, 0x132f448);
  *(undefined4 *)(param_1 + 0x294) = REFG(float, 0x132f44c);
  *(undefined4 *)(param_1 + 0x298) = REFG(float, 0x132f450);
  *(undefined4 *)(param_1 + 0x29c) = REFG(float, 0x132f454);
  *(undefined4 *)(param_1 + 0x2a0) = REFG(float, 0x132f3f8);
  *(undefined4 *)(param_1 + 0x2a4) = REFG(float, 0x132f3fc);
  *(undefined4 *)(param_1 + 0x2a8) = REFG(float, 0x132f400);
  *(undefined4 *)(param_1 + 0x2c4) = param_6;
  *(float *)(param_1 + 700) = param_8;
  *(undefined4 *)(param_1 + 0x2c0) = 0;
  *(undefined4 *)(param_1 + 0x2c8) = 0;
  *(undefined4 *)(param_1 + 0x2cc) = 0xffffffff;
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 500) + 0x24))))(*(int * PTR32 *)(param_1 + 500))));
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2)));
  uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2);
  param_1[0x2d0] = SUB41(uVar1,0);
  *(uint *)(param_1 + 0x1d0) =
       *(uint *)(param_1 + 0x1d0) & 0x20000000 ^ (*(uint *)(param_1 + 0x1d0) & 0xfffffe01 | 1);
  puVar3 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x1d4) + 0x18))))(*(int * PTR32 *)(param_1 + 0x1d4))));
  *(undefined4 *)(param_1 + 0x2a0) = *puVar3;
  *(undefined4 *)(param_1 + 0x2a4) = puVar3[1];
  *(undefined4 *)(param_1 + 0x2a8) = puVar3[2];
  *(undefined4 *)(param_1 + 0x274) = 0;
  *(undefined4 *)(param_1 + 0x270) = *(undefined4 *)(param_1 + 0x2a0);
  *(undefined4 *)(param_1 + 0x278) = 0;
  *(undefined4 *)(param_1 + 0x27c) = 0;
  *(undefined4 *)(param_1 + 0x280) = *(undefined4 *)(param_1 + 0x2a4);
  *(undefined4 *)(param_1 + 0x284) = 0;
  *(undefined4 *)(param_1 + 0x288) = 0;
  *(undefined4 *)(param_1 + 0x28c) = 0;
  *(undefined4 *)(param_1 + 0x290) = *(undefined4 *)(param_1 + 0x2a8);
  *(undefined4 *)(param_1 + 0x294) = 0;
  *(undefined4 *)(param_1 + 0x298) = 0;
  *(undefined4 *)(param_1 + 0x29c) = 0;
  *(undefined4 *)(param_1 + 0x2ac) = param_9;
  *(undefined4 *)(param_1 + 0x2b0) = param_10;
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 500) + 0x1c))))(*(int * PTR32 *)(param_1 + 500),0)));
  uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2);
  *(float *)(param_1 + 0x2b4) = (float)(int)uVar1;
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 500) + 0x1c))))(*(int * PTR32 *)(param_1 + 500),3)));
  uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2);
  *(float *)(param_1 + 0x2b8) = (float)(int)uVar1;
  if (param_11 <= 0.0) {
    F_009c9850(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_009cc4f0 */
uint F_009cc4f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, float gen_a7, float gen_a8, unsigned int gen_a9, unsigned int gen_a10, float gen_a11)
{
  GEN_ENTER(0x9cc4f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  float param_8 = (float)gen_a7;
  float param_9 = (float)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  undefined4 param_11 = (undefined4)gen_a10;
  float param_12 = (float)gen_a11;
  uint uVar1;
  int * piVar2;
  undefined4 * puVar3;
  float fVar4;
  
  fVar4 = param_12;
  uVar1 = ((code *)*(gen_code32 *)(*param_5 + 4))(param_5);
  F_009abc20(param_1,param_2,param_3,param_4,param_5,param_8,(float)(int)uVar1,fVar4);
  *(undefined * PTR32 * PTR32 *)param_1 = (*(undefined * PTR32 (*)[32])REFP(0x10deccc));
  *(undefined4 *)(param_1 + 0x270) = REFG(float, 0x132f428);
  *(undefined4 *)(param_1 + 0x274) = REFG(float, 0x132f42c);
  *(undefined4 *)(param_1 + 0x278) = REFG(float, 0x132f430);
  *(undefined4 *)(param_1 + 0x27c) = REFG(float, 0x132f434);
  *(undefined4 *)(param_1 + 0x280) = REFG(float, 0x132f438);
  *(undefined4 *)(param_1 + 0x284) = REFG(float, 0x132f43c);
  *(undefined4 *)(param_1 + 0x288) = REFG(float, 0x132f440);
  *(undefined4 *)(param_1 + 0x28c) = REFG(float, 0x132f444);
  *(undefined4 *)(param_1 + 0x290) = REFG(float, 0x132f448);
  *(undefined4 *)(param_1 + 0x294) = REFG(float, 0x132f44c);
  *(undefined4 *)(param_1 + 0x298) = REFG(float, 0x132f450);
  *(undefined4 *)(param_1 + 0x29c) = REFG(float, 0x132f454);
  *(undefined4 *)(param_1 + 0x2a0) = REFG(float, 0x132f3f8);
  *(undefined4 *)(param_1 + 0x2a4) = REFG(float, 0x132f3fc);
  *(undefined4 *)(param_1 + 0x2a8) = REFG(float, 0x132f400);
  *(undefined4 *)(param_1 + 0x2cc) = param_7;
  *(undefined4 *)(param_1 + 0x2c8) = param_6;
  *(float *)(param_1 + 700) = param_9;
  *(undefined4 *)(param_1 + 0x2c0) = 1;
  *(undefined4 *)(param_1 + 0x2c4) = 0;
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 500) + 0x24))))(*(int * PTR32 *)(param_1 + 500))));
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2)));
  uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2);
  param_1[0x2d0] = SUB41(uVar1,0);
  *(uint *)(param_1 + 0x1d0) =
       *(uint *)(param_1 + 0x1d0) & 0x20000000 ^ (*(uint *)(param_1 + 0x1d0) & 0xfffffe01 | 1);
  puVar3 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x1d4) + 0x18))))(*(int * PTR32 *)(param_1 + 0x1d4))));
  *(undefined4 *)(param_1 + 0x2a0) = *puVar3;
  *(undefined4 *)(param_1 + 0x2a4) = puVar3[1];
  *(undefined4 *)(param_1 + 0x2a8) = puVar3[2];
  *(undefined4 *)(param_1 + 0x274) = 0;
  *(undefined4 *)(param_1 + 0x270) = *(undefined4 *)(param_1 + 0x2a0);
  *(undefined4 *)(param_1 + 0x278) = 0;
  *(undefined4 *)(param_1 + 0x27c) = 0;
  *(undefined4 *)(param_1 + 0x280) = *(undefined4 *)(param_1 + 0x2a4);
  *(undefined4 *)(param_1 + 0x284) = 0;
  *(undefined4 *)(param_1 + 0x288) = 0;
  *(undefined4 *)(param_1 + 0x28c) = 0;
  *(undefined4 *)(param_1 + 0x290) = *(undefined4 *)(param_1 + 0x2a8);
  *(undefined4 *)(param_1 + 0x294) = 0;
  *(undefined4 *)(param_1 + 0x298) = 0;
  *(undefined4 *)(param_1 + 0x29c) = 0;
  *(undefined4 *)(param_1 + 0x2ac) = param_10;
  *(undefined4 *)(param_1 + 0x2b0) = param_11;
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 500) + 0x1c))))(*(int * PTR32 *)(param_1 + 500),0)));
  uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2);
  *(float *)(param_1 + 0x2b4) = (float)(int)uVar1;
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 500) + 0x1c))))(*(int * PTR32 *)(param_1 + 500),3)));
  uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2);
  *(float *)(param_1 + 0x2b8) = (float)(int)uVar1;
  if (param_12 <= 0.0) {
    F_009c9850(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_009cc7c0 */
uint F_009cc7c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6, float gen_a7, unsigned int gen_a8, float gen_a9)
{
  GEN_ENTER(0x9cc7c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  float param_7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  float param_10 = (float)gen_a9;
  uint uVar1;
  int * piVar2;
  float fVar3;
  
  fVar3 = param_10;
  uVar1 = ((code *)*(gen_code32 *)(*param_5 + 4))(param_5);
  F_009abc20(param_1,param_2,param_3,param_4,param_5,param_7,(float)(int)uVar1,fVar3);
  *(undefined * PTR32 * PTR32 *)param_1 = (*(undefined * PTR32 (*)[32])REFP(0x10ded54));
  *(undefined4 *)(param_1 + 0x210) = REFG(float, 0x132f428);
  *(undefined4 *)(param_1 + 0x214) = REFG(float, 0x132f42c);
  *(undefined4 *)(param_1 + 0x218) = REFG(float, 0x132f430);
  *(undefined4 *)(param_1 + 0x21c) = REFG(float, 0x132f434);
  *(undefined4 *)(param_1 + 0x220) = REFG(float, 0x132f438);
  *(undefined4 *)(param_1 + 0x224) = REFG(float, 0x132f43c);
  *(undefined4 *)(param_1 + 0x228) = REFG(float, 0x132f440);
  *(undefined4 *)(param_1 + 0x22c) = REFG(float, 0x132f444);
  *(undefined4 *)(param_1 + 0x230) = REFG(float, 0x132f448);
  *(undefined4 *)(param_1 + 0x234) = REFG(float, 0x132f44c);
  *(undefined4 *)(param_1 + 0x238) = REFG(float, 0x132f450);
  *(undefined4 *)(param_1 + 0x23c) = REFG(float, 0x132f454);
  *(undefined4 *)(param_1 + 0x240) = REFG(float, 0x132f428);
  *(undefined4 *)(param_1 + 0x244) = REFG(float, 0x132f42c);
  *(undefined4 *)(param_1 + 0x248) = REFG(float, 0x132f430);
  *(undefined4 *)(param_1 + 0x24c) = REFG(float, 0x132f434);
  *(undefined4 *)(param_1 + 0x250) = REFG(float, 0x132f438);
  *(undefined4 *)(param_1 + 0x254) = REFG(float, 0x132f43c);
  *(undefined4 *)(param_1 + 600) = REFG(float, 0x132f440);
  *(undefined4 *)(param_1 + 0x25c) = REFG(float, 0x132f444);
  *(undefined4 *)(param_1 + 0x260) = REFG(float, 0x132f448);
  *(undefined4 *)(param_1 + 0x264) = REFG(float, 0x132f44c);
  *(undefined4 *)(param_1 + 0x268) = REFG(float, 0x132f450);
  *(undefined4 *)(param_1 + 0x26c) = REFG(float, 0x132f454);
  *(undefined4 *)(param_1 + 0x270) = REFG(float, 0x132f3f8);
  *(undefined4 *)(param_1 + 0x274) = REFG(float, 0x132f3fc);
  *(undefined4 *)(param_1 + 0x278) = REFG(float, 0x132f400);
  *(undefined4 *)(param_1 + 0x28c) = param_6;
  *(undefined4 *)(param_1 + 0x27c) = param_9;
  *(float *)(param_1 + 0x284) = param_8;
  *(undefined4 *)(param_1 + 0x288) = 0;
  *(undefined4 *)(param_1 + 0x290) = 0;
  *(undefined4 *)(param_1 + 0x294) = 0xffffffff;
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 500) + 0x20))))(*(int * PTR32 *)(param_1 + 500))));
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2)));
  uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2);
  param_1[0x298] = SUB41(uVar1,0);
  *(uint *)(param_1 + 0x1d0) =
       *(uint *)(param_1 + 0x1d0) & 0x20000000 ^ (*(uint *)(param_1 + 0x1d0) & 0xfffffe01 | 1);
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 500) + 0x1c))))(*(int * PTR32 *)(param_1 + 500),0)));
  uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2);
  *(float *)(param_1 + 0x280) = (float)(int)uVar1;
  if (param_10 <= 0.0) {
    F_009c9d90(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_009cca90 */
uint F_009cca90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, float gen_a7, float gen_a8, unsigned int gen_a9, float gen_a10)
{
  GEN_ENTER(0x9cca90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  float param_8 = (float)gen_a7;
  float param_9 = (float)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  float param_11 = (float)gen_a10;
  uint uVar1;
  int * piVar2;
  float fVar3;
  
  fVar3 = param_11;
  uVar1 = ((code *)*(gen_code32 *)(*param_5 + 4))(param_5);
  F_009abc20(param_1,param_2,param_3,param_4,param_5,param_8,(float)(int)uVar1,fVar3);
  *(undefined * PTR32 * PTR32 *)param_1 = (*(undefined * PTR32 (*)[32])REFP(0x10ded54));
  *(undefined4 *)(param_1 + 0x210) = REFG(float, 0x132f428);
  *(undefined4 *)(param_1 + 0x214) = REFG(float, 0x132f42c);
  *(undefined4 *)(param_1 + 0x218) = REFG(float, 0x132f430);
  *(undefined4 *)(param_1 + 0x21c) = REFG(float, 0x132f434);
  *(undefined4 *)(param_1 + 0x220) = REFG(float, 0x132f438);
  *(undefined4 *)(param_1 + 0x224) = REFG(float, 0x132f43c);
  *(undefined4 *)(param_1 + 0x228) = REFG(float, 0x132f440);
  *(undefined4 *)(param_1 + 0x22c) = REFG(float, 0x132f444);
  *(undefined4 *)(param_1 + 0x230) = REFG(float, 0x132f448);
  *(undefined4 *)(param_1 + 0x234) = REFG(float, 0x132f44c);
  *(undefined4 *)(param_1 + 0x238) = REFG(float, 0x132f450);
  *(undefined4 *)(param_1 + 0x23c) = REFG(float, 0x132f454);
  *(undefined4 *)(param_1 + 0x240) = REFG(float, 0x132f428);
  *(undefined4 *)(param_1 + 0x244) = REFG(float, 0x132f42c);
  *(undefined4 *)(param_1 + 0x248) = REFG(float, 0x132f430);
  *(undefined4 *)(param_1 + 0x24c) = REFG(float, 0x132f434);
  *(undefined4 *)(param_1 + 0x250) = REFG(float, 0x132f438);
  *(undefined4 *)(param_1 + 0x254) = REFG(float, 0x132f43c);
  *(undefined4 *)(param_1 + 600) = REFG(float, 0x132f440);
  *(undefined4 *)(param_1 + 0x25c) = REFG(float, 0x132f444);
  *(undefined4 *)(param_1 + 0x260) = REFG(float, 0x132f448);
  *(undefined4 *)(param_1 + 0x264) = REFG(float, 0x132f44c);
  *(undefined4 *)(param_1 + 0x268) = REFG(float, 0x132f450);
  *(undefined4 *)(param_1 + 0x26c) = REFG(float, 0x132f454);
  *(undefined4 *)(param_1 + 0x270) = REFG(float, 0x132f3f8);
  *(undefined4 *)(param_1 + 0x274) = REFG(float, 0x132f3fc);
  *(undefined4 *)(param_1 + 0x278) = REFG(float, 0x132f400);
  *(undefined4 *)(param_1 + 0x290) = param_6;
  *(undefined4 *)(param_1 + 0x294) = param_7;
  *(undefined4 *)(param_1 + 0x27c) = param_10;
  *(float *)(param_1 + 0x284) = param_9;
  *(undefined4 *)(param_1 + 0x288) = 1;
  *(undefined4 *)(param_1 + 0x28c) = 0;
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 500) + 0x20))))(*(int * PTR32 *)(param_1 + 500))));
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2)));
  uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2);
  param_1[0x298] = SUB41(uVar1,0);
  *(uint *)(param_1 + 0x1d0) =
       *(uint *)(param_1 + 0x1d0) & 0x20000000 ^ (*(uint *)(param_1 + 0x1d0) & 0xfffffe01 | 1);
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 500) + 0x1c))))(*(int * PTR32 *)(param_1 + 500),0)));
  uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2);
  *(float *)(param_1 + 0x280) = (float)(int)uVar1;
  if (param_11 <= 0.0) {
    F_009c9d90(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_009ccd60 */
uint F_009ccd60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6, float gen_a7, unsigned int gen_a8, unsigned int gen_a9, float gen_a10)
{
  GEN_ENTER(0x9ccd60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  float param_7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  float param_11 = (float)gen_a10;
  uint uVar1;
  undefined * pSVar2;
  int * piVar3;
  undefined4 * puVar4;
  int * piVar5;
  int iVar6;
  float fVar7;
  
  fVar7 = param_11;
  uVar1 = ((code *)*(gen_code32 *)(*param_5 + 4))(param_5);
  F_009abc20(param_1,param_2,param_3,param_4,param_5,param_7,(float)(int)uVar1,fVar7);
  *(undefined * PTR32 * PTR32 *)param_1 = (*(undefined * PTR32 (*)[32])REFP(0x10deddc));
  *(undefined4 *)(param_1 + 0x270) = REFG(float, 0x132f428);
  *(undefined4 *)(param_1 + 0x274) = REFG(float, 0x132f42c);
  *(undefined4 *)(param_1 + 0x278) = REFG(float, 0x132f430);
  *(undefined4 *)(param_1 + 0x27c) = REFG(float, 0x132f434);
  *(undefined4 *)(param_1 + 0x280) = REFG(float, 0x132f438);
  *(undefined4 *)(param_1 + 0x284) = REFG(float, 0x132f43c);
  *(undefined4 *)(param_1 + 0x288) = REFG(float, 0x132f440);
  *(undefined4 *)(param_1 + 0x28c) = REFG(float, 0x132f444);
  *(undefined4 *)(param_1 + 0x290) = REFG(float, 0x132f448);
  *(undefined4 *)(param_1 + 0x294) = REFG(float, 0x132f44c);
  *(undefined4 *)(param_1 + 0x298) = REFG(float, 0x132f450);
  *(undefined4 *)(param_1 + 0x29c) = REFG(float, 0x132f454);
  *(undefined4 *)(param_1 + 0x2a0) = REFG(float, 0x132f3f8);
  *(undefined4 *)(param_1 + 0x2a4) = REFG(float, 0x132f3fc);
  *(undefined4 *)(param_1 + 0x2a8) = REFG(float, 0x132f400);
  pSVar2 = param_1 + 0x2dc;
  iVar6 = 2;
  do {
    *(undefined4 *)(pSVar2 + 0x20) = 0;
    *(undefined4 *)pSVar2 = 0;
    *(undefined4 *)(pSVar2 + 4) = 0;
    *(undefined4 *)(pSVar2 + 8) = 0;
    *(undefined4 *)(pSVar2 + 0xc) = 0;
    *(undefined4 *)(pSVar2 + 0x10) = 0;
    *(undefined4 *)(pSVar2 + 0x14) = 0;
    *(undefined4 *)(pSVar2 + 0x18) = 0;
    *(undefined4 *)(pSVar2 + 0x1c) = 0;
    pSVar2 = pSVar2 + 0x24;
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  *(undefined4 *)(param_1 + 0x350) = param_6;
  *(float *)(param_1 + 0x348) = param_8;
  *(undefined4 *)(param_1 + 0x34c) = 0;
  *(undefined4 *)(param_1 + 0x354) = 0;
  *(undefined4 *)(param_1 + 0x358) = 0xffffffff;
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 500) + 0x28))))(*(int * PTR32 *)(param_1 + 500))));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3)));
  uVar1 = ((code *)*(gen_code32 *)(*piVar3 + 0x14))(piVar3);
  param_1[0x35c] = SUB41(uVar1,0);
  *(uint *)(param_1 + 0x1d0) =
       *(uint *)(param_1 + 0x1d0) & 0x20000000 ^ (*(uint *)(param_1 + 0x1d0) & 0xfffffe01 | 1);
  puVar4 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x1d4) + 0x18))))(*(int * PTR32 *)(param_1 + 0x1d4))));
  *(undefined4 *)(param_1 + 0x2a0) = *puVar4;
  *(undefined4 *)(param_1 + 0x2a4) = puVar4[1];
  *(undefined4 *)(param_1 + 0x2a8) = puVar4[2];
  *(undefined4 *)(param_1 + 0x274) = 0;
  *(undefined4 *)(param_1 + 0x270) = *(undefined4 *)(param_1 + 0x2a0);
  *(undefined4 *)(param_1 + 0x278) = 0;
  *(undefined4 *)(param_1 + 0x27c) = 0;
  *(undefined4 *)(param_1 + 0x280) = *(undefined4 *)(param_1 + 0x2a4);
  *(undefined4 *)(param_1 + 0x284) = 0;
  *(undefined4 *)(param_1 + 0x288) = 0;
  *(undefined4 *)(param_1 + 0x28c) = 0;
  *(undefined4 *)(param_1 + 0x290) = *(undefined4 *)(param_1 + 0x2a8);
  *(undefined4 *)(param_1 + 0x294) = 0;
  *(undefined4 *)(param_1 + 0x298) = 0;
  *(undefined4 *)(param_1 + 0x29c) = 0;
  *(undefined4 *)(param_1 + 0x2c4) = param_9;
  *(undefined4 *)(param_1 + 0x2c8) = param_10;
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 500) + 0x1c))))(*(int * PTR32 *)(param_1 + 500),0)));
  uVar1 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3);
  *(float *)(param_1 + 0x2cc) = (float)(int)uVar1;
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 500) + 0x1c))))(*(int * PTR32 *)(param_1 + 500),3)));
  uVar1 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3);
  *(float *)(param_1 + 0x2d0) = (float)(int)uVar1;
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 500) + 0x1c))))(*(int * PTR32 *)(param_1 + 500),1)));
  piVar5 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 500) + 0x1c))))(*(int * PTR32 *)(param_1 + 500),2)));
  iVar6 = 2;
  uVar1 = ((code *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3);
  if ((char)uVar1 != '\0') {
    iVar6 = 3;
  }
  uVar1 = ((code *)*(gen_code32 *)(*piVar5 + 0x1c))(piVar5);
  if ((char)uVar1 != '\0') {
    iVar6 = iVar6 + 1;
  }
  *(int *)(param_1 + 0x2fc) = iVar6;
  *(int *)(param_1 + 800) = iVar6;
  *(int *)(param_1 + 0x344) = iVar6;
  if (param_11 <= 0.0) {
    F_009ca1c0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_009cd0c0 */
uint F_009cd0c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, float gen_a7, float gen_a8, unsigned int gen_a9, unsigned int gen_a10, float gen_a11)
{
  GEN_ENTER(0x9cd0c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  float param_8 = (float)gen_a7;
  float param_9 = (float)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  undefined4 param_11 = (undefined4)gen_a10;
  float param_12 = (float)gen_a11;
  uint uVar1;
  undefined * pSVar2;
  int * piVar3;
  undefined4 * puVar4;
  int * piVar5;
  int iVar6;
  float fVar7;
  
  fVar7 = param_12;
  uVar1 = ((code *)*(gen_code32 *)(*param_5 + 4))(param_5);
  F_009abc20(param_1,param_2,param_3,param_4,param_5,param_8,(float)(int)uVar1,fVar7);
  *(undefined * PTR32 * PTR32 *)param_1 = (*(undefined * PTR32 (*)[32])REFP(0x10deddc));
  *(undefined4 *)(param_1 + 0x270) = REFG(float, 0x132f428);
  *(undefined4 *)(param_1 + 0x274) = REFG(float, 0x132f42c);
  *(undefined4 *)(param_1 + 0x278) = REFG(float, 0x132f430);
  *(undefined4 *)(param_1 + 0x27c) = REFG(float, 0x132f434);
  *(undefined4 *)(param_1 + 0x280) = REFG(float, 0x132f438);
  *(undefined4 *)(param_1 + 0x284) = REFG(float, 0x132f43c);
  *(undefined4 *)(param_1 + 0x288) = REFG(float, 0x132f440);
  *(undefined4 *)(param_1 + 0x28c) = REFG(float, 0x132f444);
  *(undefined4 *)(param_1 + 0x290) = REFG(float, 0x132f448);
  *(undefined4 *)(param_1 + 0x294) = REFG(float, 0x132f44c);
  *(undefined4 *)(param_1 + 0x298) = REFG(float, 0x132f450);
  *(undefined4 *)(param_1 + 0x29c) = REFG(float, 0x132f454);
  *(undefined4 *)(param_1 + 0x2a0) = REFG(float, 0x132f3f8);
  *(undefined4 *)(param_1 + 0x2a4) = REFG(float, 0x132f3fc);
  *(undefined4 *)(param_1 + 0x2a8) = REFG(float, 0x132f400);
  pSVar2 = param_1 + 0x2dc;
  iVar6 = 2;
  do {
    *(undefined4 *)(pSVar2 + 0x20) = 0;
    *(undefined4 *)pSVar2 = 0;
    *(undefined4 *)(pSVar2 + 4) = 0;
    *(undefined4 *)(pSVar2 + 8) = 0;
    *(undefined4 *)(pSVar2 + 0xc) = 0;
    *(undefined4 *)(pSVar2 + 0x10) = 0;
    *(undefined4 *)(pSVar2 + 0x14) = 0;
    *(undefined4 *)(pSVar2 + 0x18) = 0;
    *(undefined4 *)(pSVar2 + 0x1c) = 0;
    pSVar2 = pSVar2 + 0x24;
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  *(undefined4 *)(param_1 + 0x358) = param_7;
  *(undefined4 *)(param_1 + 0x354) = param_6;
  *(float *)(param_1 + 0x348) = param_9;
  *(undefined4 *)(param_1 + 0x34c) = 1;
  *(undefined4 *)(param_1 + 0x350) = 0;
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 500) + 0x28))))(*(int * PTR32 *)(param_1 + 500))));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3)));
  uVar1 = ((code *)*(gen_code32 *)(*piVar3 + 0x14))(piVar3);
  param_1[0x35c] = SUB41(uVar1,0);
  *(uint *)(param_1 + 0x1d0) =
       *(uint *)(param_1 + 0x1d0) & 0x20000000 ^ (*(uint *)(param_1 + 0x1d0) & 0xfffffe01 | 1);
  puVar4 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x1d4) + 0x18))))(*(int * PTR32 *)(param_1 + 0x1d4))));
  *(undefined4 *)(param_1 + 0x2a0) = *puVar4;
  *(undefined4 *)(param_1 + 0x2a4) = puVar4[1];
  *(undefined4 *)(param_1 + 0x2a8) = puVar4[2];
  *(undefined4 *)(param_1 + 0x274) = 0;
  *(undefined4 *)(param_1 + 0x270) = *(undefined4 *)(param_1 + 0x2a0);
  *(undefined4 *)(param_1 + 0x278) = 0;
  *(undefined4 *)(param_1 + 0x27c) = 0;
  *(undefined4 *)(param_1 + 0x280) = *(undefined4 *)(param_1 + 0x2a4);
  *(undefined4 *)(param_1 + 0x284) = 0;
  *(undefined4 *)(param_1 + 0x288) = 0;
  *(undefined4 *)(param_1 + 0x28c) = 0;
  *(undefined4 *)(param_1 + 0x290) = *(undefined4 *)(param_1 + 0x2a8);
  *(undefined4 *)(param_1 + 0x294) = 0;
  *(undefined4 *)(param_1 + 0x298) = 0;
  *(undefined4 *)(param_1 + 0x29c) = 0;
  *(undefined4 *)(param_1 + 0x2c4) = param_10;
  *(undefined4 *)(param_1 + 0x2c8) = param_11;
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 500) + 0x1c))))(*(int * PTR32 *)(param_1 + 500),0)));
  uVar1 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3);
  *(float *)(param_1 + 0x2cc) = (float)(int)uVar1;
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 500) + 0x1c))))(*(int * PTR32 *)(param_1 + 500),3)));
  uVar1 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3);
  *(float *)(param_1 + 0x2d0) = (float)(int)uVar1;
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 500) + 0x1c))))(*(int * PTR32 *)(param_1 + 500),1)));
  piVar5 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 500) + 0x1c))))(*(int * PTR32 *)(param_1 + 500),2)));
  iVar6 = 2;
  uVar1 = ((code *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3);
  if ((char)uVar1 != '\0') {
    iVar6 = 3;
  }
  uVar1 = ((code *)*(gen_code32 *)(*piVar5 + 0x1c))(piVar5);
  if ((char)uVar1 != '\0') {
    iVar6 = iVar6 + 1;
  }
  *(int *)(param_1 + 0x2fc) = iVar6;
  *(int *)(param_1 + 800) = iVar6;
  *(int *)(param_1 + 0x344) = iVar6;
  if (param_12 <= 0.0) {
    F_009ca1c0(param_1);
  }
  return (uint)param_1;
}

/* ref: Apricot::Engine::Instance::ConeEmitterInstance::vf33 */
uint F_009cd8c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9cd8c0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 * puVar4;
  uint uVar5;
  float10 fVar6;
  
  puVar4 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x1f8) + 0x90))))(*(int * PTR32 *)(param_1 + 0x1f8),param_2)));
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x1dc) + 0x34))))(*(int * PTR32 *)(param_1 + 0x1dc),*puVar4);
  (*(uint *)(gen_frame + 0x30)) = uVar5;
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  uVar3 = REFG(undefined4, 0x13301e4);
  uVar5 = REFG(undefined4, 0x13301e8) << 0xb ^ REFG(undefined4, 0x13301e8);
  REFG(undefined4, 0x13301e4) = REFG(undefined4, 0x13301e0);
  REFG(undefined4, 0x13301e0) = REFG(undefined4, 0x13301dc);
  REFG(undefined4, 0x13301dc) = uVar5 ^ uVar5 >> 8 ^ REFG(undefined4, 0x13301dc) ^ REFG(undefined4, 0x13301dc) >> 0x13;
  REFG(undefined4, 0x13301e8) = uVar3;
  uVar5 = ((int)((REFG(undefined4, 0x13301dc) & 0xffff) * 100) >> 0x10) + 1;
  if ((int)uVar5 <= (int)puVar4[3]) {
    sVar2 = *(short *)(param_1 + 0x210 + param_2 * 2);
    fVar6 = (float10)(int)sVar2;
    (*(float *)(gen_frame + 0x34)) = (float)(((float10)GEN_TOD(gen_bits2f(puVar4[5]))) * fVar6);
    (*(float *)(gen_frame + 0x38)) = (float)(((float10)GEN_TOD(gen_bits2f(puVar4[6]))) * fVar6);
    fVar1 = gen_bits2f(puVar4[7]);
    *(short *)(param_1 + 0x210 + param_2 * 2) = sVar2 + 1;
    F_009b39b0(param_1,((undefined1 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x18)),(uint)((undefined1 *)(gen_frame + 0x24)),puVar4 + 10);
    uVar5 = F_009cbca0(param_1,(*(uint *)(gen_frame + 0x30)),param_3,(uint)(puVar4 + 10),((undefined1 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x18)),((undefined1 *)(gen_frame + 0x24)),
                         (*(float *)(gen_frame + 0x34)),(*(float *)(gen_frame + 0x38)),(float)(fVar6 * (float10)fVar1),0xffffffff);
  }
  return uVar5;
}

/* ref: Apricot::Engine::Instance::ConeModelEmitterInstance::vf33 */
uint F_009cdec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9cdec0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 * puVar4;
  uint uVar5;
  float10 fVar6;
  
  iVar3 = (*(int *)&gen_args[1]);
  puVar4 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1f8))) + 0x90))))(*((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1f8))),(*(int *)&gen_args[1]))));
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1dc))) + 0x34))))(*((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1dc))),*puVar4);
  (*(uint *)(gen_frame + 0x2c)) = uVar5;
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  uVar2 = REFG(undefined4, 0x13301e4);
  uVar5 = REFG(undefined4, 0x13301e8) << 0xb ^ REFG(undefined4, 0x13301e8);
  REFG(undefined4, 0x13301e4) = REFG(undefined4, 0x13301e0);
  REFG(undefined4, 0x13301e0) = REFG(undefined4, 0x13301dc);
  REFG(undefined4, 0x13301dc) = uVar5 ^ uVar5 >> 8 ^ REFG(undefined4, 0x13301dc) ^ REFG(undefined4, 0x13301dc) >> 0x13;
  REFG(undefined4, 0x13301e8) = uVar2;
  uVar5 = ((int)((REFG(undefined4, 0x13301dc) & 0xffff) * 100) >> 0x10) + 1;
  if ((int)uVar5 <= (int)puVar4[3]) {
    (*(int *)&gen_args[1]) = (int)*((short *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + iVar3 * 2 + 0x210)));
    fVar6 = (float10)(*(int *)&gen_args[1]);
    (*(float *)(gen_frame + 0x30)) = (float)(((float10)GEN_TOD(gen_bits2f(puVar4[5]))) * fVar6);
    (*(float *)(gen_frame + 0x34)) = (float)(((float10)GEN_TOD(gen_bits2f(puVar4[6]))) * fVar6);
    fVar1 = gen_bits2f(puVar4[7]);
    *((short *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + iVar3 * 2 + 0x210))) = *((short *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + iVar3 * 2 + 0x210))) + 1;
    (*(float *)(gen_frame + 0x38)) = (float)(fVar6 * (float10)fVar1);
    F_009be790((*(undefined * PTR32 *)&gen_args[0]),((undefined1 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0x14)),((undefined1 *)(gen_frame + 0x20)),puVar4 + 10,&(*(int *)&gen_args[1]));
    uVar5 = F_009cbca0((*(undefined * PTR32 *)&gen_args[0]),(*(uint *)(gen_frame + 0x2c)),(*(undefined4 *)&gen_args[2]),(uint)(puVar4 + 10),((undefined1 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0x14)),((undefined1 *)(gen_frame + 0x20)),
                         (*(float *)(gen_frame + 0x30)),(*(float *)(gen_frame + 0x34)),(*(float *)(gen_frame + 0x38)),(*(int *)&gen_args[1]));
  }
  return uVar5;
}

/* ref: Apricot::Engine::Instance::CylinderModelEmitterInstance::vf33 */
uint F_009ce4d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9ce4d0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 * puVar4;
  uint uVar5;
  float10 fVar6;
  
  iVar3 = (*(int *)&gen_args[1]);
  puVar4 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1f8))) + 0x90))))(*((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1f8))),(*(int *)&gen_args[1]))));
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1dc))) + 0x34))))(*((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1dc))),*puVar4);
  (*(uint *)(gen_frame + 0x2c)) = uVar5;
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  uVar2 = REFG(undefined4, 0x13301e4);
  uVar5 = REFG(undefined4, 0x13301e8) << 0xb ^ REFG(undefined4, 0x13301e8);
  REFG(undefined4, 0x13301e4) = REFG(undefined4, 0x13301e0);
  REFG(undefined4, 0x13301e0) = REFG(undefined4, 0x13301dc);
  REFG(undefined4, 0x13301dc) = uVar5 ^ uVar5 >> 8 ^ REFG(undefined4, 0x13301dc) ^ REFG(undefined4, 0x13301dc) >> 0x13;
  REFG(undefined4, 0x13301e8) = uVar2;
  uVar5 = ((int)((REFG(undefined4, 0x13301dc) & 0xffff) * 100) >> 0x10) + 1;
  if ((int)uVar5 <= (int)puVar4[3]) {
    (*(int *)&gen_args[1]) = (int)*((short *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + iVar3 * 2 + 0x210)));
    fVar6 = (float10)(*(int *)&gen_args[1]);
    (*(float *)(gen_frame + 0x30)) = (float)(((float10)GEN_TOD(gen_bits2f(puVar4[5]))) * fVar6);
    (*(float *)(gen_frame + 0x34)) = (float)(((float10)GEN_TOD(gen_bits2f(puVar4[6]))) * fVar6);
    fVar1 = gen_bits2f(puVar4[7]);
    *((short *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + iVar3 * 2 + 0x210))) = *((short *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + iVar3 * 2 + 0x210))) + 1;
    (*(float *)(gen_frame + 0x38)) = (float)(fVar6 * (float10)fVar1);
    F_009be890((*(undefined * PTR32 *)&gen_args[0]),((undefined1 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0x14)),((undefined1 *)(gen_frame + 0x20)),puVar4 + 10,&(*(int *)&gen_args[1]));
    uVar5 = F_009cbca0((*(undefined * PTR32 *)&gen_args[0]),(*(uint *)(gen_frame + 0x2c)),(*(undefined4 *)&gen_args[2]),(uint)(puVar4 + 10),((undefined1 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0x14)),((undefined1 *)(gen_frame + 0x20)),
                         (*(float *)(gen_frame + 0x30)),(*(float *)(gen_frame + 0x34)),(*(float *)(gen_frame + 0x38)),(*(int *)&gen_args[1]));
  }
  return uVar5;
}

/* ref: Apricot::Engine::Instance::ModelEmitterInstance::vf33 */
uint F_009ceae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9ceae0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 * puVar4;
  uint uVar5;
  float10 fVar6;
  
  iVar3 = (*(int *)&gen_args[1]);
  puVar4 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1f8))) + 0x90))))(*((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1f8))),(*(int *)&gen_args[1]))));
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1dc))) + 0x34))))(*((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1dc))),*puVar4);
  (*(uint *)(gen_frame + 0x2c)) = uVar5;
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  uVar2 = REFG(undefined4, 0x13301e4);
  uVar5 = REFG(undefined4, 0x13301e8) << 0xb ^ REFG(undefined4, 0x13301e8);
  REFG(undefined4, 0x13301e4) = REFG(undefined4, 0x13301e0);
  REFG(undefined4, 0x13301e0) = REFG(undefined4, 0x13301dc);
  REFG(undefined4, 0x13301dc) = uVar5 ^ uVar5 >> 8 ^ REFG(undefined4, 0x13301dc) ^ REFG(undefined4, 0x13301dc) >> 0x13;
  REFG(undefined4, 0x13301e8) = uVar2;
  uVar5 = ((int)((REFG(undefined4, 0x13301dc) & 0xffff) * 100) >> 0x10) + 1;
  if ((int)uVar5 <= (int)puVar4[3]) {
    (*(int *)&gen_args[1]) = (int)*((short *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + iVar3 * 2 + 0x210)));
    fVar6 = (float10)(*(int *)&gen_args[1]);
    (*(float *)(gen_frame + 0x30)) = (float)(((float10)GEN_TOD(gen_bits2f(puVar4[5]))) * fVar6);
    (*(float *)(gen_frame + 0x34)) = (float)(((float10)GEN_TOD(gen_bits2f(puVar4[6]))) * fVar6);
    fVar1 = gen_bits2f(puVar4[7]);
    *((short *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + iVar3 * 2 + 0x210))) = *((short *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + iVar3 * 2 + 0x210))) + 1;
    (*(float *)(gen_frame + 0x38)) = (float)(fVar6 * (float10)fVar1);
    F_009be990((*(undefined * PTR32 *)&gen_args[0]),((undefined1 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0x14)),((undefined1 *)(gen_frame + 0x20)),&(*(int *)&gen_args[1]),puVar4 + 10);
    uVar5 = F_009cbca0((*(undefined * PTR32 *)&gen_args[0]),(*(uint *)(gen_frame + 0x2c)),(*(undefined4 *)&gen_args[2]),(uint)(puVar4 + 10),((undefined1 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0x14)),((undefined1 *)(gen_frame + 0x20)),
                         (*(float *)(gen_frame + 0x30)),(*(float *)(gen_frame + 0x34)),(*(float *)(gen_frame + 0x38)),(*(int *)&gen_args[1]));
  }
  return uVar5;
}

/* ref: Apricot::Engine::Instance::PointEmitterInstance::vf33 */
uint F_009cf270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9cf270u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  float fVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 * puVar5;
  uint uVar6;
  float10 fVar7;
  
  puVar5 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x1f8) + 0x90))))(*(int * PTR32 *)(param_1 + 0x1f8),param_2)));
  uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x1dc) + 0x34))))(*(int * PTR32 *)(param_1 + 0x1dc),*puVar5);
  (*(uint *)(gen_frame + 0x50)) = uVar6;
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  uVar4 = REFG(undefined4, 0x13301e4);
  uVar6 = REFG(undefined4, 0x13301e8) << 0xb ^ REFG(undefined4, 0x13301e8);
  REFG(undefined4, 0x13301e4) = REFG(undefined4, 0x13301e0);
  REFG(undefined4, 0x13301e0) = REFG(undefined4, 0x13301dc);
  REFG(undefined4, 0x13301dc) = uVar6 ^ uVar6 >> 8 ^ REFG(undefined4, 0x13301dc) ^ REFG(undefined4, 0x13301dc) >> 0x13;
  REFG(undefined4, 0x13301e8) = uVar4;
  uVar6 = ((int)((REFG(undefined4, 0x13301dc) & 0xffff) * 100) >> 0x10) + 1;
  if ((int)uVar6 <= (int)puVar5[3]) {
    sVar2 = *(short *)(param_1 + 0x210 + param_2 * 2);
    fVar7 = (float10)(int)sVar2;
    (*(float *)(gen_frame + 0x54)) = (float)(((float10)GEN_TOD(gen_bits2f(puVar5[5]))) * fVar7);
    (*(float *)(gen_frame + 0x58)) = (float)(((float10)GEN_TOD(gen_bits2f(puVar5[6]))) * fVar7);
    fVar1 = gen_bits2f(puVar5[7]);
    *(short *)(param_1 + 0x210 + param_2 * 2) = sVar2 + 1;
    iVar3 = puVar5[0xb];
    (*(undefined4 *)(gen_frame + 0x38)) = *(undefined4 *)(param_1 + 0x28);
    (*(undefined4 *)(gen_frame + 0x3c)) = *(undefined4 *)(param_1 + 0x2c);
    (*(undefined4 *)(gen_frame + 0x40)) = *(undefined4 *)(param_1 + 0x30);
    (*(undefined4 *)(gen_frame + 0x44)) = REFG(float, 0x14a0a2c);
    (*(undefined4 *)(gen_frame + 0x48)) = REFG(float, 0x14a0a30);
    (*(undefined4 *)(gen_frame + 0x4c)) = REFG(float, 0x14a0a34);
    if (iVar3 - 2U < 2) {
      F_00981430(((undefined1 *)(gen_frame + 0x8)),param_1 + 4);
      F_00981170(&(*(undefined4 *)(gen_frame + 0x38)),(uint)&(*(undefined4 *)(gen_frame + 0x38)),(uint)((undefined1 *)(gen_frame + 0x8)));
      F_00981050(&(*(undefined4 *)(gen_frame + 0x44)),(uint)&(*(undefined4 *)(gen_frame + 0x44)),(uint)((undefined1 *)(gen_frame + 0x8)));
    }
    uVar6 = F_009cbca0(param_1,(*(uint *)(gen_frame + 0x50)),param_3,(uint)(puVar5 + 10),&(*(undefined4 *)(gen_frame + 0x38)),&(*(undefined4 *)(gen_frame + 0x44)),
                         param_1 + 0x15c,(*(float *)(gen_frame + 0x54)),(*(float *)(gen_frame + 0x58)),(float)(fVar7 * (float10)fVar1),0xffffffff)
    ;
  }
  return uVar6;
}

/* ref: Apricot::Engine::Instance::SphereModelEmitterInstance::vf33 */
uint F_009cf8e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9cf8e0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 * puVar4;
  uint uVar5;
  float10 fVar6;
  
  iVar3 = (*(int *)&gen_args[1]);
  puVar4 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1f8))) + 0x90))))(*((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1f8))),(*(int *)&gen_args[1]))));
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1dc))) + 0x34))))(*((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1dc))),*puVar4);
  (*(uint *)(gen_frame + 0x2c)) = uVar5;
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  uVar2 = REFG(undefined4, 0x13301e4);
  uVar5 = REFG(undefined4, 0x13301e8) << 0xb ^ REFG(undefined4, 0x13301e8);
  REFG(undefined4, 0x13301e4) = REFG(undefined4, 0x13301e0);
  REFG(undefined4, 0x13301e0) = REFG(undefined4, 0x13301dc);
  REFG(undefined4, 0x13301dc) = uVar5 ^ uVar5 >> 8 ^ REFG(undefined4, 0x13301dc) ^ REFG(undefined4, 0x13301dc) >> 0x13;
  REFG(undefined4, 0x13301e8) = uVar2;
  uVar5 = ((int)((REFG(undefined4, 0x13301dc) & 0xffff) * 100) >> 0x10) + 1;
  if ((int)uVar5 <= (int)puVar4[3]) {
    (*(int *)&gen_args[1]) = (int)*((short *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + iVar3 * 2 + 0x210)));
    fVar6 = (float10)(*(int *)&gen_args[1]);
    (*(float *)(gen_frame + 0x30)) = (float)(((float10)GEN_TOD(gen_bits2f(puVar4[5]))) * fVar6);
    (*(float *)(gen_frame + 0x34)) = (float)(((float10)GEN_TOD(gen_bits2f(puVar4[6]))) * fVar6);
    fVar1 = gen_bits2f(puVar4[7]);
    *((short *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + iVar3 * 2 + 0x210))) = *((short *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + iVar3 * 2 + 0x210))) + 1;
    (*(float *)(gen_frame + 0x38)) = (float)(fVar6 * (float10)fVar1);
    F_009beaa0((*(undefined * PTR32 *)&gen_args[0]),((undefined1 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0x14)),((undefined1 *)(gen_frame + 0x20)),puVar4 + 10,&(*(int *)&gen_args[1]));
    uVar5 = F_009cbca0((*(undefined * PTR32 *)&gen_args[0]),(*(uint *)(gen_frame + 0x2c)),(*(undefined4 *)&gen_args[2]),(uint)(puVar4 + 10),((undefined1 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0x14)),((undefined1 *)(gen_frame + 0x20)),
                         (*(float *)(gen_frame + 0x30)),(*(float *)(gen_frame + 0x34)),(*(float *)(gen_frame + 0x38)),(*(int *)&gen_args[1]));
  }
  return uVar5;
}

/* ref: FUN_009cfa30 */
uint F_009cfa30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9cfa30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00406b90(0xa0,0,0);
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_009cb860(this_00,param_1,this);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_009cfa70 */
unsigned int F_009cfa70(unsigned int gen_a0)
{
  GEN_ENTER(0x9cfa70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  int iVar2;
  
  F_009a4cc0(*(undefined4 *)((int)this + 0x50),*(undefined4 *)((int)this + 0x54));
  piVar1 = *(int * PTR32 *)((int)this + 0x44);
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,this);
  }
  iVar2 = *(int *)((int)this + 0x40);
  piVar1 = (int *)(iVar2 + 4);
  LOCK();
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  F_0050c620(*(undefined4 *)(iVar2 + 100),0,0);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x14a0aa4));
  F_009e6670(&REFG(undefined, 0x14a0a7c),&(*(undefined4 *)(gen_frame + 0x0)),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  F_009e9dc0(&REFG(undefined, 0x14a0a7c),&(*(undefined * PTR32 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x14a0aa4));
  return 0;
}

/* ref: FUN_009cfb10 */
unsigned int F_009cfb10(unsigned int gen_a0)
{
  GEN_ENTER(0x9cfb10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  undefined * this_00;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x178);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10e0440));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x170) = (*(undefined * PTR32 (*)[3])REFP(0x10e0430));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,this);
  }
  this_00 = *(undefined * PTR32 *)((int)this + 0x174);
  if (this_00 != (undefined *)0x0) {
    F_009cfa70(this_00);
    F_00406ad0(this_00);
    *(undefined4 *)((int)this + 0x174) = 0;
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x14a0a8c));
  F_009e6340(&REFG(undefined, 0x14a0a6c),&(*(undefined4 *)(gen_frame + 0x0)),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  F_009e9d00(&REFG(undefined, 0x14a0a6c),&(*(undefined * PTR32 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x14a0a8c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x170) = (*(undefined * PTR32 (*)[3])REFP(0x10b2ad0))
  ;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10b2a9c));
  return 0;
}

/* ref: FUN_009cfbc0 */
unsigned int F_009cfbc0(void)
{
  GEN_ENTER(0x9cfbc0u, 0u, 0u, 0u, 0u);
  undefined4 * puVar1;
  undefined * this;
  
  while (REFG(int, 0x14a0a74) != 0) {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*REFG(int * PTR32, 0x14a0a70) + 0xc)));
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    }
  }
  REFG(int, 0x14a0a74) = 0;
  while (REFG(int, 0x14a0a84) != 0) {
    this = *((undefined * PTR32 *)GEN_TOP((*REFG(int * PTR32, 0x14a0a80) + 0xc)));
    if (this != (undefined *)0x0) {
      F_009cfa70(this);
      F_00406ad0(this);
    }
  }
  return 0;
}

/* ref: FUN_009cfc30 */
uint F_009cfc30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9cfc30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined * pvVar4;
  uint uVar5;
  uint uVar6;
  
  uVar3 = F_00990ad0(param_1);
  pvVar4 = (undefined *)F_00406b90(0x180,0,0);
  if (pvVar4 == (undefined *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = F_009cb980(pvVar4,param_2);
  }
  pvVar4 = (undefined *)F_00406b90(0xa0,0,0);
  if (pvVar4 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = F_009cb860(pvVar4,uVar5,uVar3);
  }
  *(uint *)(uVar5 + 0x174) = uVar6;
  if (uVar6 != 0) {
    *(uint *)(uVar6 + 0x44) = uVar5 + 0x170;
  }
  uVar2 = REFG(float, 0x1087f04);
  iVar1 = *(int *)(uVar5 + 0x174);
  if (iVar1 != 0) {
    *(byte *)(iVar1 + 0x96) = *(byte *)(iVar1 + 0x96) & 0xfd | 1;
    *(undefined4 *)(iVar1 + 0x58) = uVar2;
    *(undefined1 *)(iVar1 + 0x94) = (undefined1)param_3;
    *(undefined1 *)(iVar1 + 0x95) = (undefined1)param_4;
    *(undefined4 *)(iVar1 + 0x5c) = 0;
  }
  LOCK();
  *(int *)(uVar3 + 4) = *(int *)(uVar3 + 4) + -1;
  UNLOCK();
  F_0050c620(*(undefined4 *)(uVar3 + 100),0,0);
  return uVar5;
}

/* ref: FUN_009cfd00 */
uint F_009cfd00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4, float gen_a5, float gen_a6, float gen_a7, float gen_a8, float gen_a9)
{
  GEN_ENTER(0x9cfd00u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  float param_9 = (float)gen_a8;
  float param_10 = (float)gen_a9;
  __declspec(align(16)) undefined1 gen_frame[0x180];
  uint uVar1;
  undefined4 * puVar2;
  undefined * this;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  (*(uint *)(gen_frame + 0x16c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x170);
  puVar2 = &REFG(float, 0x1302d00);
  puVar5 = ((undefined4 *)(gen_frame + 0x0));
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  F_00982d80(((undefined4 *)(gen_frame + 0x0)),0);
  uVar1 = F_00990ad0(param_1);
  puVar2 = (undefined4 *)F_00406b90(0x180,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar5 = ((undefined4 *)(gen_frame + 0x0));
    puVar6 = puVar2 + 4;
    for (iVar4 = 0x58; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar2[0x5c] = (*(undefined * PTR32 (*)[3])REFP(0x10b2ad0));
    *puVar2 = (*(undefined * PTR32 (*)[10])REFP(0x10e0440));
    puVar2[0x5c] = (*(undefined * PTR32 (*)[3])REFP(0x10e0430));
    puVar2[0x5d] = 0;
    puVar2[0x5e] = 0;
    F_009c83c0(puVar2);
  }
  this = (undefined *)F_00406b90(0xa0,0,0);
  if (this == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = F_009cb860(this,puVar2,uVar1);
  }
  puVar2[0x5d] = uVar3;
  if (uVar3 != 0) {
    *(undefined4 * PTR32 *)(uVar3 + 0x44) = puVar2 + 0x5c;
  }
  F_00983020(puVar2,param_2,param_3,(float)(float10)1,(float)(float10)0,param_4,param_5,param_6,
               param_7,param_8,param_9,param_10);
  LOCK();
  *(int *)(uVar1 + 4) = *(int *)(uVar1 + 4) + -1;
  UNLOCK();
  F_0050c620(*(undefined4 *)(uVar1 + 100),0,0);
  F_00c47745((*(uint *)(gen_frame + 0x16c)) ^ (uint)(uint)(gen_frame + 0x170));
  return (uint)puVar2;
}

/* ref: FUN_009cfe90 */
uint F_009cfe90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9cfe90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  char * pcVar2;
  int iVar3;
  uint uVar4;
  char * pcVar5;
  uint uVar6;
  
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = this;
  F_009ec380((undefined *)(param_2 + 4),0x40);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_009ed830((undefined *)(param_2 + 4),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
  (*(uint *)(gen_frame + 0x14)) = *(int *)(param_2 + 8) + -0xc;
  pcVar2 = (&REFG(undefined * PTR32, 0x132f220))[(int)(*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 4))];
  uVar4 = F_00b52710("DecodeDepthBuffer",0x11,0);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)uVar4;
  pcVar5 = pcVar2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar4 = F_00b52710(pcVar2,(int)pcVar5 - (int)(pcVar2 + 1),0);
  *(uint *)((*(uint *)(gen_frame + 0x14)) + 8) = uVar4;
  *(undefined * PTR32 *)((*(uint *)(gen_frame + 0x14)) + 4) = (*(undefined * PTR32 *)(gen_frame + 0x18));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_009ed830((undefined *)(param_2 + 4),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = ((undefined *)GEN_TOP((*(int *)(param_2 + 8) + -0xc)));
  pcVar2 = (&REFG(undefined * PTR32, 0x132f228))[(int)(*param_1 >> 3 & 1)];
  uVar4 = F_00b52710("ApplyToneMap_Table",0x12,0);
  (*(uint *)(gen_frame + 0x14)) = uVar4;
  pcVar5 = pcVar2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar4 = F_00b52710(pcVar2,(int)pcVar5 - (int)(pcVar2 + 1),0);
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 8) = uVar4;
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 4) = (*(uint *)(gen_frame + 0x14));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_009ed830((undefined *)(param_2 + 4),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = ((undefined *)GEN_TOP((*(int *)(param_2 + 8) + -0xc)));
  pcVar2 = (&REFG(undefined * PTR32, 0x132f230))[(int)(*param_1 >> 4 & 1)];
  uVar4 = F_00b52710("ApplyFog_Table",0xe,0);
  (*(uint *)(gen_frame + 0x14)) = uVar4;
  pcVar5 = pcVar2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar4 = F_00b52710(pcVar2,(int)pcVar5 - (int)(pcVar2 + 1),0);
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 8) = uVar4;
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 4) = (*(uint *)(gen_frame + 0x14));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_009ed830((undefined *)(param_2 + 4),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = ((undefined *)GEN_TOP((*(int *)(param_2 + 8) + -0xc)));
  pcVar2 = (&REFG(undefined * PTR32, 0x132f238))[(int)(*param_1 >> 6 & 3)];
  uVar4 = F_00b52710("ComputeFinalColorType_Table",0x1b,0);
  (*(uint *)(gen_frame + 0x14)) = uVar4;
  pcVar5 = pcVar2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar4 = F_00b52710(pcVar2,(int)pcVar5 - (int)(pcVar2 + 1),0);
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 8) = uVar4;
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 4) = (*(uint *)(gen_frame + 0x14));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_009ed830((undefined *)(param_2 + 4),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = ((undefined *)GEN_TOP((*(int *)(param_2 + 8) + -0xc)));
  pcVar2 = (&REFG(undefined * PTR32, 0x132f244))[(int)(*param_1 >> 5 & 1)];
  uVar4 = F_00b52710("ComputeSoftParticleType_Table",0x1d,0);
  (*(uint *)(gen_frame + 0x14)) = uVar4;
  pcVar5 = pcVar2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar4 = F_00b52710(pcVar2,(int)pcVar5 - (int)(pcVar2 + 1),0);
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 8) = uVar4;
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 4) = (*(uint *)(gen_frame + 0x14));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_009ed830((undefined *)(param_2 + 4),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = ((undefined *)GEN_TOP((*(int *)(param_2 + 8) + -0xc)));
  pcVar2 = (&REFG(undefined * PTR32, 0x132f24c))[(int)(param_1[3] >> 3 & 1)];
  uVar4 = F_00b52710("ApplyLightBufferType_Table",0x1a,0);
  (*(uint *)(gen_frame + 0x14)) = uVar4;
  pcVar5 = pcVar2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar4 = F_00b52710(pcVar2,(int)pcVar5 - (int)(pcVar2 + 1),0);
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 8) = uVar4;
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 4) = (*(uint *)(gen_frame + 0x14));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_009ed830((undefined *)(param_2 + 4),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = ((undefined *)GEN_TOP((*(int *)(param_2 + 8) + -0xc)));
  pcVar2 = (&REFG(undefined * PTR32, 0x132f254))[(int)(*param_1 >> 8 & 3)];
  uVar4 = F_00b52710("FresnelType_Table",0x11,0);
  (*(uint *)(gen_frame + 0x14)) = uVar4;
  pcVar5 = pcVar2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar4 = F_00b52710(pcVar2,(int)pcVar5 - (int)(pcVar2 + 1),0);
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 8) = uVar4;
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 4) = (*(uint *)(gen_frame + 0x14));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_009ed830((undefined *)(param_2 + 4),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = ((undefined *)GEN_TOP((*(int *)(param_2 + 8) + -0xc)));
  pcVar2 = (&REFG(undefined * PTR32, 0x132f264))[(int)(*param_1 >> 10 & 3)];
  uVar4 = F_00b52710("DirectionalLightType_Table",0x1a,0);
  (*(uint *)(gen_frame + 0x14)) = uVar4;
  pcVar5 = pcVar2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar4 = F_00b52710(pcVar2,(int)pcVar5 - (int)(pcVar2 + 1),0);
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 8) = uVar4;
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 4) = (*(uint *)(gen_frame + 0x14));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_009ed830((undefined *)(param_2 + 4),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = ((undefined *)GEN_TOP((*(int *)(param_2 + 8) + -0xc)));
  pcVar2 = (&REFG(undefined * PTR32, 0x132f270))[(int)(*param_1 >> 0xc & 3)];
  uVar4 = F_00b52710("PointLightType_Table",0x14,0);
  (*(uint *)(gen_frame + 0x14)) = uVar4;
  pcVar5 = pcVar2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar4 = F_00b52710(pcVar2,(int)pcVar5 - (int)(pcVar2 + 1),0);
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 8) = uVar4;
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 4) = (*(uint *)(gen_frame + 0x14));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_009ed830((undefined *)(param_2 + 4),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = ((undefined *)GEN_TOP((*(int *)(param_2 + 8) + -0xc)));
  pcVar2 = (&REFG(undefined * PTR32, 0x132f280))[(int)((*param_1 & 0x3000) == 0x3000)];
  uVar4 = F_00b52710("PointLightPositionType_Table",0x1c,0);
  (*(uint *)(gen_frame + 0x14)) = uVar4;
  pcVar5 = pcVar2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar4 = F_00b52710(pcVar2,(int)pcVar5 - (int)(pcVar2 + 1),0);
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 8) = uVar4;
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 4) = (*(uint *)(gen_frame + 0x14));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_009ed830((undefined *)(param_2 + 4),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = ((undefined *)GEN_TOP((*(int *)(param_2 + 8) + -0xc)));
  pcVar2 = (&REFG(undefined * PTR32, 0x132f288))[(int)(*param_1 >> 0xe & 7)];
  uVar4 = F_00b52710("UvSetCount_Table",0x10,0);
  (*(uint *)(gen_frame + 0x14)) = uVar4;
  pcVar5 = pcVar2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar4 = F_00b52710(pcVar2,(int)pcVar5 - (int)(pcVar2 + 1),0);
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 8) = uVar4;
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 4) = (*(uint *)(gen_frame + 0x14));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_009ed830((undefined *)(param_2 + 4),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = ((undefined *)GEN_TOP((*(int *)(param_2 + 8) + -0xc)));
  pcVar2 = (&REFG(undefined * PTR32, 0x132f29c))[(int)((byte)param_1[1])];
  uVar4 = F_00b52710("UvCompute0_Table",0x10,0);
  (*(uint *)(gen_frame + 0x14)) = uVar4;
  pcVar5 = pcVar2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar4 = F_00b52710(pcVar2,(int)pcVar5 - (int)(pcVar2 + 1),0);
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 8) = uVar4;
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 4) = (*(uint *)(gen_frame + 0x14));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_009ed830((undefined *)(param_2 + 4),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = ((undefined *)GEN_TOP((*(int *)(param_2 + 8) + -0xc)));
  pcVar2 = (&REFG(undefined * PTR32, 0x132f29c))[(int)(*(byte *)((int)param_1 + 5))];
  uVar4 = F_00b52710("UvCompute1_Table",0x10,0);
  (*(uint *)(gen_frame + 0x14)) = uVar4;
  pcVar5 = pcVar2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar4 = F_00b52710(pcVar2,(int)pcVar5 - (int)(pcVar2 + 1),0);
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 8) = uVar4;
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 4) = (*(uint *)(gen_frame + 0x14));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_009ed830((undefined *)(param_2 + 4),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = ((undefined *)GEN_TOP((*(int *)(param_2 + 8) + -0xc)));
  pcVar2 = (&REFG(undefined * PTR32, 0x132f29c))[(int)(*(byte *)((int)param_1 + 6))];
  uVar4 = F_00b52710("UvCompute2_Table",0x10,0);
  (*(uint *)(gen_frame + 0x14)) = uVar4;
  pcVar5 = pcVar2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar4 = F_00b52710(pcVar2,(int)pcVar5 - (int)(pcVar2 + 1),0);
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 8) = uVar4;
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 4) = (*(uint *)(gen_frame + 0x14));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_009ed830((undefined *)(param_2 + 4),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = ((undefined *)GEN_TOP((*(int *)(param_2 + 8) + -0xc)));
  pcVar2 = (&REFG(undefined * PTR32, 0x132f29c))[(int)(*(byte *)((int)param_1 + 7))];
  uVar4 = F_00b52710("UvCompute3_Table",0x10,0);
  (*(uint *)(gen_frame + 0x14)) = uVar4;
  pcVar5 = pcVar2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar4 = F_00b52710(pcVar2,(int)pcVar5 - (int)(pcVar2 + 1),0);
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 8) = uVar4;
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 4) = (*(uint *)(gen_frame + 0x14));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_009ed830((undefined *)(param_2 + 4),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = ((undefined *)GEN_TOP((*(int *)(param_2 + 8) + -0xc)));
  pcVar2 = (&REFG(undefined * PTR32, 0x132f2a4))[(int)(param_1[2] & 1)];
  uVar4 = F_00b52710("TextureColor1_Table",0x13,0);
  (*(uint *)(gen_frame + 0x14)) = uVar4;
  pcVar5 = pcVar2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar4 = F_00b52710(pcVar2,(int)pcVar5 - (int)(pcVar2 + 1),0);
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 8) = uVar4;
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 4) = (*(uint *)(gen_frame + 0x14));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_009ed830((undefined *)(param_2 + 4),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = ((undefined *)GEN_TOP((*(int *)(param_2 + 8) + -0xc)));
  pcVar2 = (&REFG(undefined * PTR32, 0x132f2ac))[(int)(param_1[2] >> 1 & 1)];
  uVar4 = F_00b52710("TextureColor1_Decode_Table",0x1a,0);
  (*(uint *)(gen_frame + 0x14)) = uVar4;
  pcVar5 = pcVar2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar4 = F_00b52710(pcVar2,(int)pcVar5 - (int)(pcVar2 + 1),0);
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 8) = uVar4;
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 4) = (*(uint *)(gen_frame + 0x14));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_009ed830((undefined *)(param_2 + 4),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = ((undefined *)GEN_TOP((*(int *)(param_2 + 8) + -0xc)));
  pcVar2 = (&REFG(undefined * PTR32, 0x132f2b4))[(int)(param_1[2] >> 2 & 1)];
  uVar4 = F_00b52710("TextureColor1_ColorToAlpha_Table",0x20,0);
  (*(uint *)(gen_frame + 0x14)) = uVar4;
  pcVar5 = pcVar2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar4 = F_00b52710(pcVar2,(int)pcVar5 - (int)(pcVar2 + 1),0);
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 8) = uVar4;
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 4) = (*(uint *)(gen_frame + 0x14));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_009ed830((undefined *)(param_2 + 4),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = ((undefined *)GEN_TOP((*(int *)(param_2 + 8) + -0xc)));
  pcVar2 = (&REFG(undefined * PTR32, 0x132f2bc))[(int)(param_1[2] >> 3 & 3)];
  uVar4 = F_00b52710("TextureColor1_UvNo_Table",0x18,0);
  (*(uint *)(gen_frame + 0x14)) = uVar4;
  pcVar5 = pcVar2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar4 = F_00b52710(pcVar2,(int)pcVar5 - (int)(pcVar2 + 1),0);
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 8) = uVar4;
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 4) = (*(uint *)(gen_frame + 0x14));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_009ed830((undefined *)(param_2 + 4),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = ((undefined *)GEN_TOP((*(int *)(param_2 + 8) + -0xc)));
  pcVar2 = (&REFG(undefined * PTR32, 0x132f2cc))[(int)(param_1[2] >> 5 & 1)];
  uVar4 = F_00b52710("TextureColor1_CalculateColor_Table",0x22,0);
  (*(uint *)(gen_frame + 0x14)) = uVar4;
  pcVar5 = pcVar2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar4 = F_00b52710(pcVar2,(int)pcVar5 - (int)(pcVar2 + 1),0);
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 8) = uVar4;
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 4) = (*(uint *)(gen_frame + 0x14));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_009ed830((undefined *)(param_2 + 4),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = ((undefined *)GEN_TOP((*(int *)(param_2 + 8) + -0xc)));
  pcVar2 = (&REFG(undefined * PTR32, 0x132f2d4))[(int)(param_1[2] >> 6 & 1)];
  uVar4 = F_00b52710("TextureColor1_CalculateAlpha_Table",0x22,0);
  (*(uint *)(gen_frame + 0x14)) = uVar4;
  pcVar5 = pcVar2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar4 = F_00b52710(pcVar2,(int)pcVar5 - (int)(pcVar2 + 1),0);
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 8) = uVar4;
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 4) = (*(uint *)(gen_frame + 0x14));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_009ed830((undefined *)(param_2 + 4),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = ((undefined *)GEN_TOP((*(int *)(param_2 + 8) + -0xc)));
  pcVar2 = (&REFG(undefined * PTR32, 0x132f2dc))[(int)(param_1[2] >> 7 & 1)];
  uVar4 = F_00b52710("TextureColor2_Table",0x13,0);
  (*(uint *)(gen_frame + 0x14)) = uVar4;
  pcVar5 = pcVar2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar4 = F_00b52710(pcVar2,(int)pcVar5 - (int)(pcVar2 + 1),0);
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 8) = uVar4;
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 4) = (*(uint *)(gen_frame + 0x14));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_009ed830((undefined *)(param_2 + 4),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = ((undefined *)GEN_TOP((*(int *)(param_2 + 8) + -0xc)));
  pcVar2 = (&REFG(undefined * PTR32, 0x132f2e4))[(int)(param_1[2] >> 8 & 1)];
  uVar4 = F_00b52710("TextureColor2_Decode_Table",0x1a,0);
  (*(uint *)(gen_frame + 0x14)) = uVar4;
  pcVar5 = pcVar2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar4 = F_00b52710(pcVar2,(int)pcVar5 - (int)(pcVar2 + 1),0);
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 8) = uVar4;
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 4) = (*(uint *)(gen_frame + 0x14));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_009ed830((undefined *)(param_2 + 4),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = ((undefined *)GEN_TOP((*(int *)(param_2 + 8) + -0xc)));
  pcVar2 = (&REFG(undefined * PTR32, 0x132f2ec))[(int)(param_1[2] >> 9 & 1)];
  uVar4 = F_00b52710("TextureColor2_ColorToAlpha_Table",0x20,0);
  (*(uint *)(gen_frame + 0x14)) = uVar4;
  pcVar5 = pcVar2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar4 = F_00b52710(pcVar2,(int)pcVar5 - (int)(pcVar2 + 1),0);
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 8) = uVar4;
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 4) = (*(uint *)(gen_frame + 0x14));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_009ed830((undefined *)(param_2 + 4),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = ((undefined *)GEN_TOP((*(int *)(param_2 + 8) + -0xc)));
  pcVar2 = (&REFG(undefined * PTR32, 0x132f2f4))[(int)(param_1[2] >> 10 & 3)];
  uVar4 = F_00b52710("TextureColor2_UvNo_Table",0x18,0);
  (*(uint *)(gen_frame + 0x14)) = uVar4;
  pcVar5 = pcVar2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar4 = F_00b52710(pcVar2,(int)pcVar5 - (int)(pcVar2 + 1),0);
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 8) = uVar4;
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 4) = (*(uint *)(gen_frame + 0x14));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_009ed830((undefined *)(param_2 + 4),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = ((undefined *)GEN_TOP((*(int *)(param_2 + 8) + -0xc)));
  pcVar2 = (&REFG(undefined * PTR32, 0x132f304))[(int)(param_1[2] >> 0xc & 7)];
  uVar4 = F_00b52710("TextureColor2_CalculateColor_Table",0x22,0);
  (*(uint *)(gen_frame + 0x14)) = uVar4;
  pcVar5 = pcVar2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar4 = F_00b52710(pcVar2,(int)pcVar5 - (int)(pcVar2 + 1),0);
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 8) = uVar4;
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 4) = (*(uint *)(gen_frame + 0x14));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_009ed830((undefined *)(param_2 + 4),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = ((undefined *)GEN_TOP((*(int *)(param_2 + 8) + -0xc)));
  pcVar2 = (&REFG(undefined * PTR32, 0x132f31c))[(int)(param_1[2] >> 0xf & 3)];
  uVar4 = F_00b52710("TextureColor2_CalculateAlpha_Table",0x22,0);
  (*(uint *)(gen_frame + 0x14)) = uVar4;
  pcVar5 = pcVar2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar4 = F_00b52710(pcVar2,(int)pcVar5 - (int)(pcVar2 + 1),0);
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 8) = uVar4;
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 4) = (*(uint *)(gen_frame + 0x14));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_009ed830((undefined *)(param_2 + 4),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = ((undefined *)GEN_TOP((*(int *)(param_2 + 8) + -0xc)));
  pcVar2 = (&REFG(undefined * PTR32, 0x132f32c))[(int)(param_1[2] >> 0x11 & 1)];
  uVar4 = F_00b52710("TextureDistortion_Table",0x17,0);
  (*(uint *)(gen_frame + 0x14)) = uVar4;
  pcVar5 = pcVar2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar4 = F_00b52710(pcVar2,(int)pcVar5 - (int)(pcVar2 + 1),0);
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 8) = uVar4;
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 4) = (*(uint *)(gen_frame + 0x14));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_009ed830((undefined *)(param_2 + 4),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = ((undefined *)GEN_TOP((*(int *)(param_2 + 8) + -0xc)));
  pcVar2 = (&REFG(undefined * PTR32, 0x132f334))[(int)(param_1[2] >> 0x12 & 3)];
  uVar4 = F_00b52710("TextureDistortion_UvNo_Table",0x1c,0);
  (*(uint *)(gen_frame + 0x14)) = uVar4;
  pcVar5 = pcVar2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar4 = F_00b52710(pcVar2,(int)pcVar5 - (int)(pcVar2 + 1),0);
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 8) = uVar4;
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 4) = (*(uint *)(gen_frame + 0x14));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_009ed830((undefined *)(param_2 + 4),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = ((undefined *)GEN_TOP((*(int *)(param_2 + 8) + -0xc)));
  pcVar2 = (&REFG(undefined * PTR32, 0x132f344))[(int)(param_1[2] >> 0x14 & 1)];
  uVar4 = F_00b52710("TextureDistortion_UvSet0_Table",0x1e,0);
  (*(uint *)(gen_frame + 0x14)) = uVar4;
  pcVar5 = pcVar2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar4 = F_00b52710(pcVar2,(int)pcVar5 - (int)(pcVar2 + 1),0);
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 8) = uVar4;
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 4) = (*(uint *)(gen_frame + 0x14));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_009ed830((undefined *)(param_2 + 4),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = ((undefined *)GEN_TOP((*(int *)(param_2 + 8) + -0xc)));
  pcVar2 = (&REFG(undefined * PTR32, 0x132f344))[(int)(param_1[2] >> 0x15 & 1)];
  uVar4 = F_00b52710("TextureDistortion_UvSet1_Table",0x1e,0);
  (*(uint *)(gen_frame + 0x14)) = uVar4;
  pcVar5 = pcVar2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar4 = F_00b52710(pcVar2,(int)pcVar5 - (int)(pcVar2 + 1),0);
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 8) = uVar4;
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 4) = (*(uint *)(gen_frame + 0x14));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_009ed830((undefined *)(param_2 + 4),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = ((undefined *)GEN_TOP((*(int *)(param_2 + 8) + -0xc)));
  pcVar2 = (&REFG(undefined * PTR32, 0x132f344))[(int)(param_1[2] >> 0x16 & 1)];
  uVar4 = F_00b52710("TextureDistortion_UvSet2_Table",0x1e,0);
  (*(uint *)(gen_frame + 0x14)) = uVar4;
  pcVar5 = pcVar2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar4 = F_00b52710(pcVar2,(int)pcVar5 - (int)(pcVar2 + 1),0);
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 8) = uVar4;
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 4) = (*(uint *)(gen_frame + 0x14));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_009ed830((undefined *)(param_2 + 4),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = ((undefined *)GEN_TOP((*(int *)(param_2 + 8) + -0xc)));
  pcVar2 = (&REFG(undefined * PTR32, 0x132f344))[(int)(param_1[2] >> 0x17 & 1)];
  uVar4 = F_00b52710("TextureDistortion_UvSet3_Table",0x1e,0);
  (*(uint *)(gen_frame + 0x14)) = uVar4;
  pcVar5 = pcVar2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar4 = F_00b52710(pcVar2,(int)pcVar5 - (int)(pcVar2 + 1),0);
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 8) = uVar4;
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 4) = (*(uint *)(gen_frame + 0x14));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_009ed830((undefined *)(param_2 + 4),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = ((undefined *)GEN_TOP((*(int *)(param_2 + 8) + -0xc)));
  pcVar2 = (&REFG(undefined * PTR32, 0x132f34c))[(int)(*(byte *)((int)param_1 + 0xb) & 1)];
  uVar4 = F_00b52710("TextureNormal_Table",0x13,0);
  (*(uint *)(gen_frame + 0x14)) = uVar4;
  pcVar5 = pcVar2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar4 = F_00b52710(pcVar2,(int)pcVar5 - (int)(pcVar2 + 1),0);
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 8) = uVar4;
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 4) = (*(uint *)(gen_frame + 0x14));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_009ed830((undefined *)(param_2 + 4),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = ((undefined *)GEN_TOP((*(int *)(param_2 + 8) + -0xc)));
  pcVar2 = (&REFG(undefined * PTR32, 0x132f354))[(int)(param_1[2] >> 0x19 & 3)];
  uVar4 = F_00b52710("TextureNormal_UvNo_Table",0x18,0);
  (*(uint *)(gen_frame + 0x14)) = uVar4;
  pcVar5 = pcVar2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar4 = F_00b52710(pcVar2,(int)pcVar5 - (int)(pcVar2 + 1),0);
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 8) = uVar4;
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 4) = (*(uint *)(gen_frame + 0x14));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_009ed830((undefined *)(param_2 + 4),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = ((undefined *)GEN_TOP((*(int *)(param_2 + 8) + -0xc)));
  pcVar2 = (&REFG(undefined * PTR32, 0x132f364))[(int)(param_1[2] >> 0x1b & 1)];
  uVar4 = F_00b52710("TexturePalette_Table",0x14,0);
  (*(uint *)(gen_frame + 0x14)) = uVar4;
  pcVar5 = pcVar2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar4 = F_00b52710(pcVar2,(int)pcVar5 - (int)(pcVar2 + 1),0);
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 8) = uVar4;
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 4) = (*(uint *)(gen_frame + 0x14));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_009ed830((undefined *)(param_2 + 4),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = ((undefined *)GEN_TOP((*(int *)(param_2 + 8) + -0xc)));
  pcVar2 = (&REFG(undefined * PTR32, 0x132f36c))[(int)(param_1[2] >> 0x1c & 1)];
  uVar4 = F_00b52710("TextureReflection_Table",0x17,0);
  (*(uint *)(gen_frame + 0x14)) = uVar4;
  pcVar5 = pcVar2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar4 = F_00b52710(pcVar2,(int)pcVar5 - (int)(pcVar2 + 1),0);
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 8) = uVar4;
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 4) = (*(uint *)(gen_frame + 0x14));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_009ed830((undefined *)(param_2 + 4),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = ((undefined *)GEN_TOP((*(int *)(param_2 + 8) + -0xc)));
  pcVar2 = (&REFG(undefined * PTR32, 0x132f374))[(int)(param_1[2] >> 0x1d)];
  uVar4 = F_00b52710("TextureReflection_CalculateColor_Table",0x26,0);
  (*(uint *)(gen_frame + 0x14)) = uVar4;
  pcVar5 = pcVar2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar4 = F_00b52710(pcVar2,(int)pcVar5 - (int)(pcVar2 + 1),0);
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 8) = uVar4;
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 4) = (*(uint *)(gen_frame + 0x14));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_009ed830((undefined *)(param_2 + 4),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = ((undefined *)GEN_TOP((*(int *)(param_2 + 8) + -0xc)));
  pcVar2 = (&REFG(undefined * PTR32, 0x132f388))[(int)(param_1[3] & 1)];
  uVar4 = F_00b52710("DirectionalLight_Table",0x16,0);
  (*(uint *)(gen_frame + 0x14)) = uVar4;
  pcVar5 = pcVar2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar4 = F_00b52710(pcVar2,(int)pcVar5 - (int)(pcVar2 + 1),0);
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 8) = uVar4;
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 4) = (*(uint *)(gen_frame + 0x14));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_009ed830((undefined *)(param_2 + 4),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
  iVar3 = *(int *)(param_2 + 8);
  pcVar2 = (&REFG(undefined * PTR32, 0x132f390))[(int)(param_1[3] >> 1 & 3)];
  uVar4 = F_00b52710("PointLightCount_Table",0x15,0);
  pcVar5 = pcVar2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar6 = F_00b52710(pcVar2,(int)pcVar5 - (int)(pcVar2 + 1),0);
  *(uint *)(iVar3 + -8) = uVar4;
  *(uint *)(iVar3 + -4) = uVar6;
  return uVar6;
}

/* ref: Apricot::ApricotDeviceListenner::vf3 */
byte F_009d10e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9d10e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  undefined * PTR32 * ppuVar1;
  undefined * pvVar2;
  undefined * pAVar3;
  uint * puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 * puVar7;
  code * pcVar8;
  int iVar9;
  int * piVar10;
  undefined4 uVar11;
  
  (*(uint *)(gen_frame + 0x98)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  (*(undefined4 *)(gen_frame + 0x58)) = param_4;
  (*(undefined * PTR32 *)(gen_frame + 0x54)) = this;
  (*(uint * PTR32 *)(gen_frame + 0x50)) = param_1;
  (*(undefined4 *)(gen_frame + 0x5c)) = param_3;
  (*(undefined * PTR32 *)(gen_frame + 0x4c)) = this + 0x270;
  F_009e9890(this + 0x270,&(*(int * PTR32 *)(gen_frame + 0x60)),param_2);
  if ((*(int * PTR32 *)(gen_frame + 0x60)) != *(int * PTR32 *)(this + 0x274)) {
    *param_1 = (*(int * PTR32 *)(gen_frame + 0x60))[7];
    param_1[1] = (*(int * PTR32 *)(gen_frame + 0x60))[8];
    param_1[2] = (*(int * PTR32 *)(gen_frame + 0x60))[9];
    goto LAB_009d15ad;
  }
  (*(int *)(gen_frame + 0x2c)) = 0;
  (*(int *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x28)) = (*(undefined * PTR32 (*)[1])REFP(0x10e046c));
  F_009cfe90(this,param_2,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x28)));
  uVar5 = F_00b52710("DefaultTechnique",0x10,0);
  (*(uint *)(gen_frame + 0x40)) = uVar5;
  uVar6 = F_00b52710("Default",7,0);
  uVar5 = *param_2;
  (*(uint *)(gen_frame + 0x44)) = uVar6;
  F_00668a10(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x64)),*(undefined4 *)(&REFG(undefined, 0x10e04b4) + (uVar5 & 7) * 4));
  piVar10 = ((int *)GEN_TOP((((*(int *)(gen_frame + 0x30)) - (*(int *)(gen_frame + 0x2c))) / 0xc)));
  if (piVar10 != (int *)0x0) {
    (*(int * PTR32 *)(gen_frame + 0x60)) = piVar10;
    iVar9 = (*(int *)(gen_frame + 0x2c));
    do {
      F_00667bd0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x64)),iVar9);
      iVar9 = iVar9 + 0xc;
      piVar10 = (int *)((int)(*(int * PTR32 *)(gen_frame + 0x60)) + -1);
      (*(int * PTR32 *)(gen_frame + 0x60)) = piVar10;
    } while (piVar10 != (int *)0x0);
  }
  piVar10 = (int *)0x0;
  if ((*(undefined * PTR32 *)(gen_frame + 0x68)) == (undefined *)0x0) {
LAB_009d1367: ;
    iVar9 = *(int *)(&REFG(undefined, 0x10e04cc) + (uVar5 & 7) * 4);
    (*(undefined * PTR32 *)(gen_frame + 0x84)) = (undefined *)0x0;
    (*(uint *)(gen_frame + 0x88)) = 0;
    (*(uint *)(gen_frame + 0x8c)) = 0;
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x80)) = (*(undefined * PTR32 (*)[1])REFP(0x10abb24));
    iVar9 = *(int *)(REFG(int, 0x137127c) + 0xaba0 + iVar9 * 4);
    if (iVar9 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined4 *)(iVar9 + 0x98);
    }
    F_00b52c10(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x80)),uVar11);
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
    uVar5 = F_00b52710("OutputType_Table",0x10,0);
    (*(uint *)(gen_frame + 0x20)) = uVar5;
    uVar5 = F_00b52710("OutputType_Release",0x12,0);
    (*(uint *)(gen_frame + 0x24)) = uVar5;
    F_00667bd0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x80)),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)));
    if ((*(undefined * PTR32 *)(gen_frame + 0x84)) == (undefined *)0x0) {
      uVar5 = 0;
    }
    else {
      (*(uint *)(gen_frame + 0x90)) = (*(uint *)(gen_frame + 0x40));
      (*(uint *)(gen_frame + 0x94)) = (*(uint *)(gen_frame + 0x44));
      uVar5 = F_00b52db0((*(undefined * PTR32 *)(gen_frame + 0x84)),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x80)));
    }
    if (*(int *)(uVar5 + 8) != 0) {
      iVar9 = *(int *)(uVar5 + 4);
      if (**(uint * PTR32 *)(uVar5 + 0x1c) < (uint)(*(int *)(iVar9 + 0x10) - *(int *)(iVar9 + 0xc) >> 2)) {
        piVar10 = *((int * PTR32 *)GEN_TOP((*(int *)(iVar9 + 0xc) + **(uint * PTR32 *)(uVar5 + 0x1c) * 4)));
      }
      else {
        piVar10 = (int *)0x0;
      }
    }
    if (*(int *)(uVar5 + 8) == 0) {
      (*(int * PTR32 *)(gen_frame + 0x60)) = (int *)0x0;
    }
    else {
      uVar6 = *((uint *)GEN_TOP((*(int *)(uVar5 + 0x1c) + 4)));
      iVar9 = *(int *)(uVar5 + 4);
      if (uVar6 < (uint)(*(int *)(iVar9 + 0x24) - *(int *)(iVar9 + 0x20) >> 2)) {
        (*(int * PTR32 *)(gen_frame + 0x60)) = *((int * PTR32 *)GEN_TOP((*(int *)(iVar9 + 0x20) + uVar6 * 4)));
      }
      else {
        (*(int * PTR32 *)(gen_frame + 0x60)) = (int *)0x0;
      }
    }
    if ((REFG(undefined * PTR32, 0x14a0a14) == (code *)0x0) ||
       (puVar7 = ((undefined4 *)GEN_TOP(((code *)REFG(gen_code32, 0x14a0a14))(0x10,4,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0))),
       puVar7 == (undefined4 *)0x0)) {
      puVar7 = (undefined4 *)0x0;
      pcVar8 = REFG(undefined * PTR32, 0x14a0a14);
    }
    else {
      *puVar7 = (*(undefined * PTR32 (*)[3])REFP(0x10de640));
      puVar7[1] = (*(undefined * PTR32 (*)[1])REFP(0x10de754));
      puVar7[2] = piVar10;
      puVar7[3] = 1;
      if (piVar10 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar10 + 8))(piVar10);
      }
      pcVar8 = REFG(undefined * PTR32, 0x14a0a14);
      *puVar7 = (*(undefined * PTR32 (*)[3])REFP(0x10deee4));
      puVar7[1] = (*(undefined * PTR32 (*)[1])REFP(0x10deedc));
    }
    puVar4 = (*(uint * PTR32 *)(gen_frame + 0x50));
    (*(uint * PTR32 *)(gen_frame + 0x50))[1] = (uint)puVar7;
    if ((pcVar8 == (code *)0x0) ||
       (puVar7 = ((undefined4 *)GEN_TOP((*pcVar8)(0x10,4,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0))),
       puVar7 == (undefined4 *)0x0)) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      *puVar7 = (*(undefined * PTR32 (*)[3])REFP(0x10de650));
      puVar7[1] = (*(undefined * PTR32 (*)[1])REFP(0x10de75c));
      puVar7[2] = (*(int * PTR32 *)(gen_frame + 0x60));
      puVar7[3] = 1;
      if ((*(int * PTR32 *)(gen_frame + 0x60)) != (int *)0x0) {
        ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x60)) + 8))((*(int * PTR32 *)(gen_frame + 0x60)));
      }
      *puVar7 = (*(undefined * PTR32 (*)[3])REFP(0x10deefc));
      puVar7[1] = (*(undefined * PTR32 (*)[1])REFP(0x10deef4));
    }
    puVar4[2] = (uint)puVar7;
    uVar6 = F_009a2220((*(undefined4 *)(gen_frame + 0x5c)),(*(undefined4 *)(gen_frame + 0x58)));
    pAVar3 = (*(undefined * PTR32 *)(gen_frame + 0x4c));
    *puVar4 = uVar6;
    uVar5 = param_2[1];
    (*(uint *)(gen_frame + 0x0)) = *param_2;
    (*(uint *)(gen_frame + 0x4)) = uVar5;
    (*(uint *)(gen_frame + 0x8)) = param_2[2];
    (*(uint *)(gen_frame + 0xc)) = param_2[3];
    (*(uint *)(gen_frame + 0x10)) = uVar6;
    uVar11 = 0;
    (*(uint *)(gen_frame + 0x18)) = puVar4[2];
    (*(uint *)(gen_frame + 0x14)) = puVar4[1];
    uVar5 = F_009e8c10((*(undefined * PTR32 *)(gen_frame + 0x4c)),&(*(uint *)(gen_frame + 0x0)));
    F_009ed1c0(pAVar3,((undefined1 *)(gen_frame + 0x48)),uVar5,uVar11);
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x80)) = (*(undefined * PTR32 (*)[1])REFP(0x10abb24));
    F_00b52cb0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x80)));
  }
  else {
    (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x40));
    (*(uint *)(gen_frame + 0x78)) = (*(uint *)(gen_frame + 0x44));
    uVar6 = F_00b52db0((*(undefined * PTR32 *)(gen_frame + 0x68)),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x64)));
    if (uVar6 == 0) goto LAB_009d1367;
    if (*(int *)(uVar6 + 8) != 0) {
      iVar9 = *(int *)(uVar6 + 4);
      if (**(uint * PTR32 *)(uVar6 + 0x1c) < (uint)(*(int *)(iVar9 + 0x10) - *(int *)(iVar9 + 0xc) >> 2)) {
        piVar10 = *((int * PTR32 *)GEN_TOP((*(int *)(iVar9 + 0xc) + **(uint * PTR32 *)(uVar6 + 0x1c) * 4)));
      }
      else {
        piVar10 = (int *)0x0;
      }
    }
    if (*(int *)(uVar6 + 8) == 0) {
      (*(int * PTR32 *)(gen_frame + 0x60)) = (int *)0x0;
    }
    else {
      uVar5 = *((uint *)GEN_TOP((*(int *)(uVar6 + 0x1c) + 4)));
      iVar9 = *(int *)(uVar6 + 4);
      if (uVar5 < (uint)(*(int *)(iVar9 + 0x24) - *(int *)(iVar9 + 0x20) >> 2)) {
        (*(int * PTR32 *)(gen_frame + 0x60)) = *((int * PTR32 *)GEN_TOP((*(int *)(iVar9 + 0x20) + uVar5 * 4)));
      }
      else {
        (*(int * PTR32 *)(gen_frame + 0x60)) = (int *)0x0;
      }
    }
    if ((REFG(undefined * PTR32, 0x14a0a14) == (code *)0x0) ||
       (puVar7 = ((undefined4 *)GEN_TOP(((code *)REFG(gen_code32, 0x14a0a14))(0x10,4,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0))),
       puVar7 == (undefined4 *)0x0)) {
      puVar7 = (undefined4 *)0x0;
      pcVar8 = REFG(undefined * PTR32, 0x14a0a14);
    }
    else {
      *puVar7 = (*(undefined * PTR32 (*)[3])REFP(0x10de640));
      puVar7[1] = (*(undefined * PTR32 (*)[1])REFP(0x10de754));
      puVar7[2] = piVar10;
      puVar7[3] = 1;
      if (piVar10 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar10 + 8))(piVar10);
      }
      pcVar8 = REFG(undefined * PTR32, 0x14a0a14);
      *puVar7 = (*(undefined * PTR32 (*)[3])REFP(0x10deee4));
      puVar7[1] = (*(undefined * PTR32 (*)[1])REFP(0x10deedc));
    }
    puVar4 = (*(uint * PTR32 *)(gen_frame + 0x50));
    (*(uint * PTR32 *)(gen_frame + 0x50))[1] = (uint)puVar7;
    if ((pcVar8 == (code *)0x0) ||
       (puVar7 = ((undefined4 *)GEN_TOP((*pcVar8)(0x10,4,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0))),
       puVar7 == (undefined4 *)0x0)) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      *puVar7 = (*(undefined * PTR32 (*)[3])REFP(0x10de650));
      puVar7[1] = (*(undefined * PTR32 (*)[1])REFP(0x10de75c));
      puVar7[2] = (*(int * PTR32 *)(gen_frame + 0x60));
      puVar7[3] = 1;
      if ((*(int * PTR32 *)(gen_frame + 0x60)) != (int *)0x0) {
        ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x60)) + 8))((*(int * PTR32 *)(gen_frame + 0x60)));
      }
      *puVar7 = (*(undefined * PTR32 (*)[3])REFP(0x10deefc));
      puVar7[1] = (*(undefined * PTR32 (*)[1])REFP(0x10deef4));
    }
    puVar4[2] = (uint)puVar7;
    uVar5 = F_009a2220((*(undefined4 *)(gen_frame + 0x5c)),(*(undefined4 *)(gen_frame + 0x58)));
    pAVar3 = (*(undefined * PTR32 *)(gen_frame + 0x4c));
    *puVar4 = uVar5;
    ppuVar1 = (undefined * PTR32 *)param_2[1];
    (*(uint *)(gen_frame + 0x7c)) = *param_2;
    pvVar2 = (undefined *)param_2[2];
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x80)) = ppuVar1;
    (*(undefined * PTR32 *)(gen_frame + 0x84)) = pvVar2;
    (*(uint *)(gen_frame + 0x88)) = param_2[3];
    (*(uint *)(gen_frame + 0x8c)) = uVar5;
    uVar11 = 0;
    (*(uint *)(gen_frame + 0x94)) = puVar4[2];
    (*(uint *)(gen_frame + 0x90)) = puVar4[1];
    uVar5 = F_009e8c10((*(undefined * PTR32 *)(gen_frame + 0x4c)),&(*(uint *)(gen_frame + 0x7c)));
    F_009ed1c0(pAVar3,((undefined1 *)(gen_frame + 0x48)),uVar5,uVar11);
  }
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x64)) = (*(undefined * PTR32 (*)[1])REFP(0x10abb24));
  F_00b52cb0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x64)));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x28)) = (*(undefined * PTR32 (*)[1])REFP(0x10e046c));
  F_009e9f10(&(*(int *)(gen_frame + 0x2c)));
LAB_009d15ad: ;
  F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
  return 1;
}

/* ref: FUN_009d15d0 */
uint F_009d15d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9d15d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  
  piVar5 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x274)));
  if (piVar5 != *(int * PTR32 *)((int)this + 0x274)) {
    do {
      piVar2 = (int *)piVar5[7];
      if (piVar2 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
      }
      piVar2 = (int *)piVar5[8];
      if (piVar2 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
      }
      piVar2 = (int *)piVar5[9];
      if (piVar2 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
      }
      piVar5[7] = 0;
      piVar5[8] = 0;
      piVar5[9] = 0;
      if (*(char *)((int)piVar5 + 0x29) == '\0') {
        piVar2 = (int *)piVar5[2];
        if (*(char *)((int)piVar2 + 0x29) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x29);
          piVar5 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x29);
            piVar5 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar5[1] + 0x29);
          piVar3 = (int *)piVar5[1];
          piVar2 = piVar5;
          while ((piVar5 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar5[2]))) {
            cVar1 = *(char *)(piVar5[1] + 0x29);
            piVar3 = (int *)piVar5[1];
            piVar2 = piVar5;
          }
        }
      }
    } while (piVar5 != *(int * PTR32 *)((int)this + 0x274));
  }
  uVar4 = F_009edc40((undefined *)((int)this + 0x270));
  return uVar4;
}

/* ref: FUN_009d1670 */
uint F_009d1670(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9d1670u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float param_1 = (float)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x200];
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  uint * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined * this_00;
  uint uVar7;
  int * piVar8;
  int iVar9;
  undefined4 * puVar10;
  float10 fVar11;
  undefined8 uVar12;
  
  (*(uint *)(gen_frame + 0x1ec)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1f0);
  (*(float *)(gen_frame + 0x5c)) = param_1;
  if (*(char *)((int)this + 0xb0) == '\0') {
    iVar9 = 0;
    this = (undefined *)((int)this + 0x70);
    (*(uint * PTR32 *)(gen_frame + 0x54)) = this;
    do {
      (*(uint * PTR32 *)(gen_frame + 0x54)) = this;
      if (*(uint *)this == 0) {
        puVar5 = (undefined4 *)F_00475fd0((undefined4)gen_fl2bits((*(float *)(gen_frame + 0x5c))));
        (*(undefined4 * PTR32 *)(gen_frame + 0x40)) = puVar5;
        if (puVar5 != (undefined4 *)0x0) {
          (*(float *)(gen_frame + 0x5c)) = gen_bits2f((uint)*param_2);
          fVar11 = (float10)*(double *)&REFG(undefined, 0x1088100);
          (*(float *)(gen_frame + 0x5c)) = gen_bits2f((uint)param_2[1]);
          (*(float *)(gen_frame + 0x48)) = (float)((float10)*param_2 / fVar11);
          (*(float *)(gen_frame + 0x5c)) = gen_bits2f((uint)param_2[2]);
          (*(float *)(gen_frame + 0x4c)) = (float)((float10)param_2[1] / fVar11);
          (*(float *)(gen_frame + 0x50)) = (float)((float10)param_2[2] / fVar11);
          (*(float *)(gen_frame + 0x5c)) = (float)(((float10)GEN_TOD(gen_bits2f(puVar5[0x30]))) + ((float10)GEN_TOD(gen_bits2f(puVar5[0x30]))))
          ;
          puVar6 = (undefined4 *)F_00a5feb0(puVar5);
          ((float *)(gen_frame + 0x160))[0] = (*(float *)(gen_frame + 0x5c));
          (*(float *)(gen_frame + 0x188)) = (*(float *)(gen_frame + 0x5c));
          fVar1 = gen_bits2f(puVar5[0x2c]);
          ((float *)(gen_frame + 0x160))[1] = 0.0;
          (*(float *)(gen_frame + 0x5c)) = fVar1;
          ((float *)(gen_frame + 0x160))[2] = 0.0;
          (*(undefined4 *)(gen_frame + 0x170)) = 0;
          (*(undefined4 *)(gen_frame + 0x174)) = REFG(float, 0x10928e4);
          (*(undefined4 *)(gen_frame + 0x178)) = 0;
          (*(undefined4 *)(gen_frame + 0x180)) = 0;
          (*(undefined4 *)(gen_frame + 0x184)) = 0;
          (*(undefined4 *)(gen_frame + 0x190)) = 0;
          (*(undefined4 *)(gen_frame + 0x194)) = 0;
          (*(undefined4 *)(gen_frame + 0x198)) = 0;
          fVar11 = ((float10)GEN_TOD(fsin((float10)fVar1)));
          fVar2 = (float)fVar11;
          (*(float *)(gen_frame + 0x58)) = fVar2;
          (*(float *)(gen_frame + 0x44)) = fVar2;
          fVar11 = ((float10)GEN_TOD(fcos((float10)fVar1)));
          fVar1 = (float)fVar11;
          (*(float *)(gen_frame + 0x58)) = fVar1;
          ((float *)(gen_frame + 0x1a0))[1] = 0.0;
          ((float *)(gen_frame + 0x1a0))[0] = fVar1;
          (*(undefined4 *)(gen_frame + 0x1b0)) = 0;
          (*(undefined4 *)(gen_frame + 0x1b4)) = REFG(float, 0x1087f04);
          (*(undefined4 *)(gen_frame + 0x1b8)) = 0;
          (*(undefined4 *)(gen_frame + 0x1c4)) = 0;
          ((float *)(gen_frame + 0x1a0))[2] = ((float)GEN_TOF(-(float10)fVar2));
          (*(undefined4 *)(gen_frame + 0x1d0)) = 0;
          (*(undefined4 *)(gen_frame + 0x1d4)) = 0;
          (*(float *)(gen_frame + 0x1c0)) = fVar2;
          (*(undefined4 *)(gen_frame + 0x1d8)) = 0;
          (*(undefined4 *)(gen_frame + 0x120)) = REFG(float, 0x1087f04);
          (*(float *)(gen_frame + 0x1c8)) = fVar1;
          (*(undefined4 *)(gen_frame + 0x124)) = 0;
          (*(undefined4 *)(gen_frame + 0x128)) = 0;
          (*(undefined4 *)(gen_frame + 0x130)) = 0;
          (*(undefined4 *)(gen_frame + 0x134)) = REFG(float, 0x1087f04);
          (*(undefined4 *)(gen_frame + 0x138)) = 0;
          (*(undefined4 *)(gen_frame + 0x140)) = 0;
          (*(undefined4 *)(gen_frame + 0x144)) = 0;
          (*(undefined4 *)(gen_frame + 0x148)) = REFG(float, 0x1087f04);
          (*(undefined4 *)(gen_frame + 0x150)) = *puVar6;
          (*(undefined4 *)(gen_frame + 0x154)) = puVar6[1];
          (*(undefined4 *)(gen_frame + 0x158)) = puVar6[2];
          puVar5 = (undefined4 *)F_004ef350(((undefined1 *)(gen_frame + 0x60)),(uint)((float *)(gen_frame + 0x160)),(uint)((float *)(gen_frame + 0x1a0)));
          puVar6 = ((undefined4 *)(gen_frame + 0xe0));
          for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          }
          puVar5 = (undefined4 *)F_004ef350(((undefined1 *)(gen_frame + 0xa0)),(uint)((undefined4 *)(gen_frame + 0xe0)),(uint)&(*(undefined4 *)(gen_frame + 0x120)));
          uVar3 = REFG(undefined4, 0x14a0728);
          puVar6 = ((undefined4 *)(gen_frame + 0x0));
          for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          }
          this_00 = (undefined *)F_00406b90(0xa0,0,0);
          if (this_00 == (undefined *)0x0) {
            uVar7 = 0;
          }
          else {
            uVar7 = F_009cb860(this_00,0,uVar3);
          }
          puVar4 = (*(uint * PTR32 *)(gen_frame + 0x54));
          *(*(uint * PTR32 *)(gen_frame + 0x54)) = uVar7;
          *(float *)(uVar7 + 0x80) = (*(float *)(gen_frame + 0x48));
          *(float *)(uVar7 + 0x84) = (*(float *)(gen_frame + 0x4c));
          *(float *)(uVar7 + 0x88) = (*(float *)(gen_frame + 0x50));
          *(undefined4 *)(uVar7 + 0x8c) = REFG(float, 0x1087f04);
          piVar8 = ((int *)GEN_TOP((*(int *)(uVar7 + 0x40) + 8)));
          LOCK();
          iVar9 = *piVar8;
          *piVar8 = *piVar8;
          UNLOCK();
          if (iVar9 == 1) {
            F_009a4f70(*(undefined4 *)(uVar7 + 0x50),*(undefined4 *)(uVar7 + 0x54),(*(float *)(gen_frame + 0x48)),
                         (*(float *)(gen_frame + 0x4c)),(*(float *)(gen_frame + 0x50)),(float)(float10)1);
          }
          uVar3 = REFG(float, 0x1087f04);
          puVar5 = (undefined4 *)*puVar4;
          puVar6 = ((undefined4 *)(gen_frame + 0x0));
          puVar10 = puVar5;
          for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar10 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar10 = puVar10 + 1;
          }
          *(byte *)((int)puVar5 + 0x96) = *(byte *)((int)puVar5 + 0x96) & 0xfd | 1;
          puVar5[0x16] = uVar3;
          *(undefined2 *)(puVar5 + 0x25) = 0x7f01;
          puVar5[0x17] = 0;
          uVar12 = ((gen_lcode *)*(gen_code32 *)*(*(undefined4 * PTR32 *)(gen_frame + 0x40)))((*(undefined4 * PTR32 *)(gen_frame + 0x40)));
          this = (undefined *)uVar12;
          *(undefined8 *)((*(uint * PTR32 *)(gen_frame + 0x54)) + 2) = uVar12;
          break;
        }
      }
      iVar9 = iVar9 + 1;
      this = (*(uint * PTR32 *)(gen_frame + 0x54)) + 4;
      (*(uint * PTR32 *)(gen_frame + 0x54)) = this;
    } while (iVar9 < 4);
  }
  F_00c47745((*(uint *)(gen_frame + 0x1ec)) ^ (uint)(uint)(gen_frame + 0x1f0));
  return (uint)this;
}

/* ref: FUN_009d1a30 */
uint F_009d1a30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9d1a30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x200];
  float fVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  float * pfVar11;
  int * piVar12;
  uint uVar13;
  undefined4 * puVar14;
  undefined * pvVar15;
  int iVar16;
  float * pfVar17;
  byte * pbVar18;
  undefined4 * puVar19;
  float * pfVar20;
  undefined4 * puVar21;
  float10 fVar22;
  float10 fVar23;
  float fVar24;
  ulonglong uVar25;
  
  (*(uint *)(gen_frame + 0x1ec)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1f0);
  pfVar11 = param_2;
  if (*(char *)((int)this + 0xb0) != '\0') goto LAB_009d2378;
  if (*(int *)((int)this + 0x18) == -0x20000000) {
    pfVar11 = (float *)0x0;
  }
  else {
    pfVar11 = (float *)F_00a354d0(&REFG(undefined4, 0x14a31f0),*(int *)((int)this + 0x18),
                                    *(undefined4 *)((int)this + 0x1c));
  }
  if (((*(int *)((int)this + 0x18) != param_1) || (*(float * PTR32 *)((int)this + 0x1c) != param_2)) ||
     (pfVar11 == (float *)0x0)) {
    pvVar15 = *(undefined * PTR32 *)((int)this + 0x50);
    if (pvVar15 != (undefined *)0x0) {
      F_009cfa70(pvVar15);
      F_00406ad0(pvVar15);
      *(undefined4 *)((int)this + 0x50) = 0;
    }
    pvVar15 = *(undefined * PTR32 *)((int)this + 0x54);
    if (pvVar15 != (undefined *)0x0) {
      F_009cfa70(pvVar15);
      F_00406ad0(pvVar15);
      *(undefined4 *)((int)this + 0x54) = 0;
    }
    puVar14 = (undefined4 *)((int)this + 0x30);
    puVar19 = (undefined4 *)((int)this + 0x50);
    for (iVar16 = 8; iVar16 != 0; iVar16 = iVar16 + -1) {
      *puVar19 = *puVar14;
      puVar14 = puVar14 + 1;
      puVar19 = puVar19 + 1;
    }
    if (*(int *)((int)this + 0x60) != 1) {
      *(undefined4 *)((int)this + 0x60) = 1;
    }
    puVar14 = (undefined4 *)((int)this + 0x10);
    puVar19 = (undefined4 *)((int)this + 0x30);
    for (iVar16 = 8; iVar16 != 0; iVar16 = iVar16 + -1) {
      *puVar19 = *puVar14;
      puVar14 = puVar14 + 1;
      puVar19 = puVar19 + 1;
    }
    if (*(int *)((int)this + 0x40) != 1) {
      *(undefined4 *)((int)this + 0x40) = 1;
    }
    fVar24 = REFG(float, 0x1087f04);
    *(undefined4 *)((int)this + 0x10) = 0;
    *(undefined4 *)((int)this + 0x14) = 0;
    *(int *)((int)this + 0x18) = param_1;
    *(float * PTR32 *)((int)this + 0x1c) = param_2;
    *(undefined4 *)((int)this + 0x20) = 0;
    *(float *)((int)this + 0x24) = fVar24;
    *(undefined4 *)((int)this + 0x28) = 0;
    *(undefined4 *)((int)this + 0x2c) = 0;
    pfVar11 = this;
    if (param_1 != -0x20000000) {
      piVar12 = (int *)F_00a354d0(&REFG(undefined4, 0x14a31f0),param_1,param_2);
      pfVar11 = (float *)0x0;
      if (piVar12 != (int *)0x0) {
        uVar13 = ((code *)*(gen_code32 *)(*piVar12 + 4))(piVar12);
        pfVar11 = (float *)(uVar13 - 1);
        if ((pfVar11 < (float *)0x3) && (piVar12[0x3b] != 0)) {
          fVar24 = (float)(((float10)GEN_TOD(gen_bits2f(piVar12[0x30]))) + ((float10)GEN_TOD(gen_bits2f(piVar12[0x30]))));
          puVar14 = (undefined4 *)F_00a5feb0(piVar12);
          ((float *)(gen_frame + 0x160))[0] = fVar24;
          (*(float *)(gen_frame + 0x174)) = fVar24;
          (*(float *)(gen_frame + 0x188)) = fVar24;
          ((float *)(gen_frame + 0x160))[1] = 0.0;
          ((float *)(gen_frame + 0x160))[2] = 0.0;
          (*(undefined4 *)(gen_frame + 0x170)) = 0;
          (*(undefined4 *)(gen_frame + 0x178)) = 0;
          (*(undefined4 *)(gen_frame + 0x180)) = 0;
          (*(undefined4 *)(gen_frame + 0x184)) = 0;
          (*(undefined4 *)(gen_frame + 0x190)) = 0;
          (*(undefined4 *)(gen_frame + 0x194)) = 0;
          (*(undefined4 *)(gen_frame + 0x198)) = 0;
          F_00518220(((undefined4 *)(gen_frame + 0xe0)),GEN_TOF(gen_bits2f(piVar12[0x2c])));
          ((float *)(gen_frame + 0x1a0))[0] = GEN_FLT_TO(((float *)(gen_frame + 0x1a0))[0], REFG(float, 0x1087f04));
          ((float *)(gen_frame + 0x1a0))[1] = 0.0;
          ((float *)(gen_frame + 0x1a0))[2] = 0.0;
          (*(undefined4 *)(gen_frame + 0x1b0)) = 0;
          (*(float *)(gen_frame + 0x1b4)) = REFG(float, 0x1087f04);
          (*(undefined4 *)(gen_frame + 0x1b8)) = 0;
          (*(float *)(gen_frame + 0x1c0)) = 0.0;
          (*(undefined4 *)(gen_frame + 0x1c4)) = 0;
          (*(float *)(gen_frame + 0x1c8)) = REFG(float, 0x1087f04);
          (*(undefined4 *)(gen_frame + 0x1d0)) = *puVar14;
          (*(undefined4 *)(gen_frame + 0x1d4)) = puVar14[1];
          (*(undefined4 *)(gen_frame + 0x1d8)) = puVar14[2];
          puVar14 = (undefined4 *)F_004ef350(((undefined1 *)(gen_frame + 0x60)),(uint)((float *)(gen_frame + 0x160)),(uint)((undefined4 *)(gen_frame + 0xe0)));
          puVar19 = ((undefined4 *)(gen_frame + 0xa0));
          for (iVar16 = 0x10; iVar16 != 0; iVar16 = iVar16 + -1) {
            *puVar19 = *puVar14;
            puVar14 = puVar14 + 1;
            puVar19 = puVar19 + 1;
          }
          pfVar11 = (float *)F_004ef350(((undefined1 *)(gen_frame + 0x20)),(uint)((undefined4 *)(gen_frame + 0xa0)),(uint)((float *)(gen_frame + 0x1a0)));
          uVar8 = REFG(undefined4, 0x14a0720);
          pfVar17 = ((float *)(gen_frame + 0x120));
          for (iVar16 = 0x10; iVar16 != 0; iVar16 = iVar16 + -1) {
            *pfVar17 = *pfVar11;
            pfVar11 = pfVar11 + 1;
            pfVar17 = pfVar17 + 1;
          }
          pvVar15 = (undefined *)F_00406b90(0xa0,0,0);
          if (pvVar15 == (undefined *)0x0) {
            pfVar11 = (float *)0x0;
          }
          else {
            pfVar11 = (float *)F_009cb860(pvVar15,0,uVar8);
          }
          fVar24 = REFG(float, 0x1087f04);
          *(float * PTR32 *)((int)this + 0x10) = pfVar11;
          bVar2 = *(byte *)((int)pfVar11 + 0x96);
          pfVar11[0x16] = fVar24;
          pfVar17 = ((float *)(gen_frame + 0x120));
          pfVar20 = pfVar11;
          for (iVar16 = 0x10; iVar16 != 0; iVar16 = iVar16 + -1) {
            *pfVar20 = *pfVar17;
            pfVar17 = pfVar17 + 1;
            pfVar20 = pfVar20 + 1;
          }
          *(byte *)((int)pfVar11 + 0x96) = bVar2 & 0xfd | 1;
          *(undefined2 *)(pfVar11 + 0x25) = 0x7f01;
          pfVar11[0x17] = 0.0;
          uVar8 = REFG(undefined4, 0x14a0724);
          pvVar15 = (undefined *)F_00406b90(0xa0,0,0);
          if (pvVar15 == (undefined *)0x0) {
            pfVar11 = (float *)0x0;
          }
          else {
            pfVar11 = (float *)F_009cb860(pvVar15,0,uVar8);
          }
          fVar24 = REFG(float, 0x1087f04);
          *(float * PTR32 *)((int)this + 0x14) = pfVar11;
          pfVar17 = ((float *)(gen_frame + 0x120));
          pfVar20 = pfVar11;
          for (iVar16 = 0x10; iVar16 != 0; iVar16 = iVar16 + -1) {
            *pfVar20 = *pfVar17;
            pfVar17 = pfVar17 + 1;
            pfVar20 = pfVar20 + 1;
          }
          pfVar11[0x16] = fVar24;
          *(byte *)((int)pfVar11 + 0x96) = *(byte *)((int)pfVar11 + 0x96) & 0xfd | 1;
          *(undefined2 *)(pfVar11 + 0x25) = 0x7f01;
          pfVar11[0x17] = 0.0;
          pvVar15 = *(undefined * PTR32 *)((int)this + 0x10);
          if (pvVar15 != (undefined *)0x0) {
            if (*(int *)((int)this + 0x14) != 0) goto LAB_009d1df3;
            F_009cfa70(pvVar15);
            pfVar11 = (float *)F_00406ad0(pvVar15);
            *(undefined4 *)((int)this + 0x10) = 0;
          }
          pvVar15 = *(undefined * PTR32 *)((int)this + 0x14);
          if (pvVar15 != (undefined *)0x0) {
            F_009cfa70(pvVar15);
            F_00406ad0(pvVar15);
            *(undefined4 *)((int)this + 0x14) = 0;
            pfVar11 = this;
          }
        }
      }
    }
  }
LAB_009d1df3: ;
  pbVar18 = (byte *)((int)this + 0x2d);
  (*(int *)(gen_frame + 0x8)) = 3;
  do {
    if ((*(int *)(pbVar18 + -0x1d) != 0) && (*(int *)(pbVar18 + -0x19) != 0)) {
      if (*(int *)(pbVar18 + -0x15) == -0x20000000) {
        pvVar15 = (undefined *)0x0;
      }
      else {
        pvVar15 = (undefined *)F_00a354d0(&REFG(undefined4, 0x14a31f0),*(int *)(pbVar18 + -0x15),
                                       *(undefined4 *)(pbVar18 + -0x11));
        if (pvVar15 != (undefined *)0x0) {
          pfVar11 = (float *)F_00a5feb0(pvVar15);
          fVar1 = *(float *)((int)pvVar15 + 0xb0);
          fVar24 = *(float *)((int)pvVar15 + 0xc0);
          ((float *)(gen_frame + 0x160))[0] = fVar24;
          ((float *)(gen_frame + 0x160))[1] = 0.0;
          ((float *)(gen_frame + 0x160))[2] = 0.0;
          (*(undefined4 *)(gen_frame + 0x170)) = 0;
          (*(float *)(gen_frame + 0x174)) = fVar24;
          (*(undefined4 *)(gen_frame + 0x178)) = 0;
          (*(undefined4 *)(gen_frame + 0x180)) = 0;
          (*(undefined4 *)(gen_frame + 0x184)) = 0;
          (*(float *)(gen_frame + 0x188)) = fVar24;
          (*(undefined4 *)(gen_frame + 0x190)) = 0;
          (*(undefined4 *)(gen_frame + 0x194)) = 0;
          (*(undefined4 *)(gen_frame + 0x198)) = 0;
          fVar23 = ((float10)GEN_TOD(fsin((float10)fVar1)));
          fVar22 = ((float10)GEN_TOD(fcos((float10)fVar1)));
          ((float *)(gen_frame + 0x1a0))[1] = 0.0;
          ((float *)(gen_frame + 0x1a0))[0] = (float)fVar22;
          (*(undefined4 *)(gen_frame + 0x1b0)) = 0;
          (*(undefined4 *)(gen_frame + 0x1b8)) = 0;
          (*(undefined4 *)(gen_frame + 0x1c4)) = 0;
          (*(undefined4 *)(gen_frame + 0x1d0)) = 0;
          ((float *)(gen_frame + 0x1a0))[2] = ((float)GEN_TOF(-(float10)(float)fVar23));
          (*(undefined4 *)(gen_frame + 0x1d4)) = 0;
          (*(undefined4 *)(gen_frame + 0x1d8)) = 0;
          (*(float *)(gen_frame + 0x1c0)) = (float)fVar23;
          (*(float *)(gen_frame + 0x1b4)) = REFG(float, 0x1087f04);
          (*(float *)(gen_frame + 0x1c8)) = (float)fVar22;
          fVar24 = pfVar11[2];
          ((float *)(gen_frame + 0x120))[1] = 0.0;
          ((float *)(gen_frame + 0x120))[2] = 0.0;
          (*(undefined4 *)(gen_frame + 0x130)) = 0;
          (*(undefined4 *)(gen_frame + 0x138)) = 0;
          (*(undefined4 *)(gen_frame + 0x140)) = 0;
          (*(undefined4 *)(gen_frame + 0x144)) = 0;
          (*(float *)(gen_frame + 0x150)) = (float)((float10)*pfVar11 + (float10)0);
          (*(float *)(gen_frame + 0x154)) = (float)((float10)pfVar11[1] + (float10)*(double *)&REFG(undefined, 0x1094878));
          ((float *)(gen_frame + 0x120))[0] = GEN_FLT_TO(((float *)(gen_frame + 0x120))[0], REFG(float, 0x1087f04));
          (*(float *)(gen_frame + 0x134)) = REFG(float, 0x1087f04);
          (*(float *)(gen_frame + 0x148)) = REFG(float, 0x1087f04);
          (*(float *)(gen_frame + 0x158)) = (float)((float10)0 + (float10)fVar24);
          puVar14 = (undefined4 *)F_004ef350(((undefined1 *)(gen_frame + 0x20)),(uint)((float *)(gen_frame + 0x160)),(uint)((float *)(gen_frame + 0x1a0)));
          puVar19 = ((undefined4 *)(gen_frame + 0xa0));
          for (iVar16 = 0x10; iVar16 != 0; iVar16 = iVar16 + -1) {
            *puVar19 = *puVar14;
            puVar14 = puVar14 + 1;
            puVar19 = puVar19 + 1;
          }
          puVar14 = (undefined4 *)F_004ef350(((undefined1 *)(gen_frame + 0x60)),(uint)((undefined4 *)(gen_frame + 0xa0)),(uint)((float *)(gen_frame + 0x120)));
          puVar19 = ((undefined4 *)(gen_frame + 0xe0));
          for (iVar16 = 0x10; iVar16 != 0; iVar16 = iVar16 + -1) {
            *puVar19 = *puVar14;
            puVar14 = puVar14 + 1;
            puVar19 = puVar19 + 1;
          }
          puVar14 = *(undefined4 * PTR32 *)(pbVar18 + -0x1d);
          puVar19 = ((undefined4 *)(gen_frame + 0xe0));
          puVar21 = puVar14;
          for (iVar16 = 0x10; iVar16 != 0; iVar16 = iVar16 + -1) {
            *puVar21 = *puVar19;
            puVar19 = puVar19 + 1;
            puVar21 = puVar21 + 1;
          }
          uVar8 = puVar14[0x14];
          uVar9 = puVar14[0x15];
          if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
            *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
            F_00994de0(&REFG(float, 0x14a0d58));
            F_00c47de6(((code *)REFP(0x107c350)));
          }
          F_009851b0(&REFG(float, 0x14a0d58),uVar8,uVar9,puVar14);
          puVar14 = *(undefined4 * PTR32 *)(pbVar18 + -0x19);
          puVar19 = ((undefined4 *)(gen_frame + 0xe0));
          puVar21 = puVar14;
          for (iVar16 = 0x10; iVar16 != 0; iVar16 = iVar16 + -1) {
            *puVar21 = *puVar19;
            puVar19 = puVar19 + 1;
            puVar21 = puVar21 + 1;
          }
          uVar8 = puVar14[0x14];
          uVar9 = puVar14[0x15];
          if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
            *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
            F_00994de0(&REFG(float, 0x14a0d58));
            F_00c47de6(((code *)REFP(0x107c350)));
          }
          F_009851b0(&REFG(float, 0x14a0d58),uVar8,uVar9,puVar14);
          uVar25 = F_007c9d00(pvVar15);
          *(ulonglong *)(pbVar18 + -5) = uVar25;
        }
      }
      bVar2 = pbVar18[-1];
      bVar3 = *pbVar18;
      fVar23 = (float10)*(double *)&REFG(undefined, 0x1088100);
      bVar4 = pbVar18[1];
      bVar5 = pbVar18[-5];
      bVar6 = pbVar18[-4];
      bVar7 = pbVar18[-3];
      if ((pvVar15 == (undefined *)0x0) || (*(int *)((int)pvVar15 + 0x11c) != 0)) {
        fVar24 = 0.0;
      }
      else {
        fVar24 = *(float *)(pbVar18 + -9);
      }
      iVar10 = *(int *)(pbVar18 + -0x1d);
      *(float *)(iVar10 + 0x80) = (float)((float10)bVar2 / fVar23);
      *(float *)(iVar10 + 0x84) = (float)((float10)bVar3 / fVar23);
      *(float *)(iVar10 + 0x88) = (float)((float10)bVar4 / fVar23);
      *(float *)(iVar10 + 0x8c) = fVar24;
      piVar12 = ((int *)GEN_TOP((*(int *)(iVar10 + 0x40) + 8)));
      LOCK();
      iVar16 = *piVar12;
      *piVar12 = *piVar12;
      UNLOCK();
      if (iVar16 == 1) {
        F_009a4f70(*(undefined4 *)(iVar10 + 0x50),*(undefined4 *)(iVar10 + 0x54),
                     (float)((float10)bVar2 / fVar23),(float)((float10)bVar3 / fVar23),
                     (float)((float10)bVar4 / fVar23),fVar24);
      }
      iVar10 = *(int *)(pbVar18 + -0x19);
      *(float *)(iVar10 + 0x80) = (float)((float10)bVar5 / fVar23);
      *(float *)(iVar10 + 0x84) = (float)((float10)bVar6 / fVar23);
      *(float *)(iVar10 + 0x88) = (float)((float10)bVar7 / fVar23);
      *(float *)(iVar10 + 0x8c) = fVar24;
      piVar12 = ((int *)GEN_TOP((*(int *)(iVar10 + 0x40) + 8)));
      LOCK();
      iVar16 = *piVar12;
      *piVar12 = *piVar12;
      UNLOCK();
      if (iVar16 == 1) {
        F_009a4f70(*(undefined4 *)(iVar10 + 0x50),*(undefined4 *)(iVar10 + 0x54),
                     (float)((float10)bVar5 / fVar23),(float)((float10)bVar6 / fVar23),
                     (float)((float10)bVar7 / fVar23),fVar24);
      }
      pfVar11 = ((float *)GEN_TOP((*(int *)(pbVar18 + -0xd) + -1)));
      if ((pfVar11 == (float *)0x0) &&
         (fVar24 = ((float)GEN_TOF(((float10)*(float *)(pbVar18 + -9) -
                          (float10)REFG(float, 0x14a0718) / (float10)*(double *)&REFG(undefined, 0x10947f0)))),
         *(float *)(pbVar18 + -9) = fVar24, (float10)fVar24 <= (float10)0)) {
        pvVar15 = *(undefined * PTR32 *)(pbVar18 + -0x1d);
        if (pvVar15 != (undefined *)0x0) {
          F_009cfa70(pvVar15);
          F_00406ad0(pvVar15);
          pbVar18[-0xffffffff0000001d] = 0;
          pbVar18[-0xffffffff0000001c] = 0;
          pbVar18[-0xffffffff0000001b] = 0;
          pbVar18[-0xffffffff0000001a] = 0;
        }
        pvVar15 = *(undefined * PTR32 *)(pbVar18 + -0x19);
        if (pvVar15 != (undefined *)0x0) {
          F_009cfa70(pvVar15);
          F_00406ad0(pvVar15);
          pbVar18[-0xffffffff00000019] = 0;
          pbVar18[-0xffffffff00000018] = 0;
          pbVar18[-0xffffffff00000017] = 0;
          pbVar18[-0xffffffff00000016] = 0;
        }
        pfVar11 = (float *)0x0;
        pbVar18[-0xffffffff0000001d] = 0;
        pbVar18[-0xffffffff0000001c] = 0;
        pbVar18[-0xffffffff0000001b] = 0;
        pbVar18[-0xffffffff0000001a] = 0;
        pbVar18[-0xffffffff00000019] = 0;
        pbVar18[-0xffffffff00000018] = 0;
        pbVar18[-0xffffffff00000017] = 0;
        pbVar18[-0xffffffff00000016] = 0;
        pbVar18[-0xffffffff0000000d] = 0;
        pbVar18[-0xffffffff0000000c] = 0;
        pbVar18[-0xffffffff0000000b] = 0;
        pbVar18[-0xffffffff0000000a] = 0;
        pbVar18[-0xffffffff00000009] = 0;
        pbVar18[-0xffffffff00000008] = 0;
        pbVar18[-0xffffffff00000007] = 0;
        pbVar18[-0xffffffff00000006] = 0;
        pbVar18[-0xffffffff00000005] = 0;
        pbVar18[-0xffffffff00000004] = 0;
        pbVar18[-0xffffffff00000003] = 0;
        pbVar18[-0xffffffff00000002] = 0;
        pbVar18[-0xffffffff00000001] = 0;
        pbVar18[0] = 0;
        pbVar18[1] = 0;
        pbVar18[2] = 0;
        pbVar18[-0xffffffff00000015] = 0;
        pbVar18[-0xffffffff00000014] = 0;
        pbVar18[-0xffffffff00000013] = 0;
        pbVar18[-0xffffffff00000012] = 0xe0;
        pbVar18[-0xffffffff00000011] = 0;
        pbVar18[-0xffffffff00000010] = 0;
        pbVar18[-0xffffffff0000000f] = 0;
        pbVar18[-0xffffffff0000000e] = 0;
      }
    }
    pbVar18 = pbVar18 + 0x20;
    (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + -1;
  } while ((*(int *)(gen_frame + 0x8)) != 0);
LAB_009d2378: ;
  F_00c47745((*(uint *)(gen_frame + 0x1ec)) ^ (uint)(uint)(gen_frame + 0x1f0));
  return (uint)pfVar11;
}

/* ref: FUN_009d2390 */
unsigned int F_009d2390(unsigned int gen_a0)
{
  GEN_ENTER(0x9d2390u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  uint uVar6;
  int * piVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  undefined4 * puVar12;
  undefined * this_00;
  int iVar13;
  int iVar14;
  float10 fVar15;
  float10 extraout_ST0;
  uint local_10;
  uint local_c;
  uint local_8;
  
  local_10 = (uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0x158) + 0x3a000)));
  local_8 = 0;
  if (local_10 != 0) {
    local_c = 0x39000;
    do {
      iVar14 = *(int *)((int)this + 0x158);
      uVar5 = *(ushort *)(local_c + iVar14);
      iVar13 = (uint)uVar5 * 0x68;
      iVar1 = iVar13 + 0x1000 + iVar14;
      if ((*(int *)(iVar13 + 0x103c + iVar14) != 4) && ((*(byte *)(iVar1 + 0x62) & 4) == 0)) {
        uVar6 = *(uint *)(iVar1 + 0x40);
        fVar11 = (float10)*(double *)&REFG(undefined, 0x10928e8);
        iVar14 = *((int *)GEN_TOP((*(int *)(iVar1 + 0x30) + 0x1ec)));
        if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
          *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
          F_00994de0(&REFG(float, 0x14a0d58));
          F_00c47de6(((code *)REFP(0x107c350)));
        }
        fVar2 = *(float *)(iVar14 + 0x8c);
        fVar9 = (float10)*(float *)&REFG(undefined, 0x14a0de4);
        piVar7 = *((int * PTR32 *)GEN_TOP((*(int *)(iVar1 + 0x30) + 0x1dc)));
        fVar15 = (float10)*(float *)&REFG(undefined, 0x14a0dd8);
        fVar3 = *(float *)(iVar14 + 0x88);
        fVar4 = *(float *)(iVar14 + 0x90);
        fVar10 = (float10)*(float *)&REFG(undefined, 0x14a0df0);
        fVar8 = (float10)*(float *)&REFG(undefined, 0x14a0dfc);
        extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*piVar7 + 0xe4))(piVar7);
        local_8 = local_8 + 1;
        *((float *)GEN_TOP((*(int *)((int)this + 0x158) + 0x34ff8 + local_8 * 8))) =
             ((float)GEN_TOF(((extraout_ST0 +
                     (float10)((float)GEN_TOF((((float10)fVar4 * fVar10 +
                                      (fVar15 * (float10)fVar3 + (float10)fVar2 * fVar9)) + fVar8))))
                     * (float10)REFG(double, 0x10944b8) + (float10)((float)GEN_TOF(((float10)(uVar6 % 1000) * fVar11))))));
        *((uint *)GEN_TOP((*(int *)((int)this + 0x158) + 0x34ffc + local_8 * 8))) = (uint)uVar5;
      }
      local_c = local_c + 2;
      local_10 = local_10 - 1;
    } while (local_10 != 0);
    if (local_8 != 0) {
      iVar1 = *(int *)((int)this + 0x158) + 0x35000 + local_8 * 8;
      iVar14 = *(int *)((int)this + 0x158) + 0x35000;
      F_009edfb0(iVar14,iVar1,iVar1 - iVar14 >> 3,0,0);
      local_c = 0;
      if (local_8 != 0) {
        do {
          iVar1 = *(int *)((int)this + 0x158);
          iVar13 = *(int *)(iVar1 + 0x35004 + local_c * 8) * 0x68;
          piVar7 = *(int * PTR32 *)(iVar13 + 0x1030 + iVar1);
          iVar14 = piVar7[0x7b];
          puVar12 = (undefined4 *)F_009a5550();
          if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
            *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
            F_00994de0(&REFG(float, 0x14a0d58));
            F_00c47de6(((code *)REFP(0x107c350)));
          }
          *(undefined4 *)&REFG(undefined, 0x14a0ea4) = 0;
          ((code *)*(gen_code32 *)(*(int *)*puVar12 + 0x5c))((int *)*puVar12,5,&REFG(undefined, 0x14a0e98),1);
          ((code *)*(gen_code32 *)(*(int *)*puVar12 + 0x5c))((int *)*puVar12,0xc,iVar14 + 0x30,1);
          *(ushort *)(piVar7 + 0xeb) =
               (ushort)(*(byte *)(iVar13 + iVar1 + 0x1062) >> 2 & 1) << 0xc |
               *(ushort *)(piVar7 + 0xeb) & 0xefff;
          ((code *)*(gen_code32 *)(*piVar7 + 0x7c))(piVar7);
          this_00 = (undefined *)F_009a5550();
          if (*(char *)((int)this_00 + 0x70) == '\0') {
            iVar1 = *(int *)((int)this_00 + 0x20);
            if (iVar1 == 1) {
              F_009a5720(this_00);
            }
            else if (iVar1 == 2) {
              F_009a5830(this_00);
            }
            else if (iVar1 == 3) {
              F_009a5960(this_00);
            }
            *(int *)((int)this_00 + 0x80) =
                 *(int *)((int)this_00 + 0x80) + *(int *)((int)this_00 + 0x7c);
            *(int *)((int)this_00 + 0x90) =
                 *(int *)((int)this_00 + 0x90) + *(int *)((int)this_00 + 0x8c);
            *(undefined4 *)((int)this_00 + 0x7c) = 0;
            *(undefined4 *)((int)this_00 + 0x94) = 0;
            *(undefined4 *)((int)this_00 + 0x8c) = 0;
            *(undefined4 *)((int)this_00 + 0x98) = 0;
          }
          local_c = local_c + 1;
        } while (local_c < local_8);
      }
    }
  }
  return 0;
}

/* ref: FUN_009d2670 */
uint F_009d2670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9d2670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  ushort * puVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  int iVar5;
  int * piVar6;
  uint uVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  undefined4 * puVar13;
  undefined * this_00;
  int iVar14;
  int iVar15;
  int iVar16;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float fVar17;
  uint local_10;
  uint local_c;
  uint local_8;
  
  local_10 = (uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0x158) + 0x46004 + param_1 * 2)));
  local_8 = 0;
  if (local_10 != 0) {
    iVar16 = param_1 * 0x1000 + 0x3b004;
    do {
      iVar5 = *(int *)((int)this + 0x158);
      uVar4 = *(ushort *)(iVar16 + iVar5);
      iVar14 = (uint)uVar4 * 0x68;
      iVar15 = iVar14 + 0x1000 + iVar5;
      if (*(int *)(iVar14 + 0x103c + iVar5) != 4) {
        if ((*(byte *)(iVar15 + 0x62) & 4) == 0) {
          uVar7 = *(uint *)(iVar15 + 0x40);
          fVar12 = (float10)*(double *)&REFG(undefined, 0x10928e8);
          iVar5 = *((int *)GEN_TOP((*(int *)(iVar15 + 0x30) + 0x1ec)));
          if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
            *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
            F_00994de0(&REFG(float, 0x14a0d58));
            F_00c47de6(((code *)REFP(0x107c350)));
          }
          fVar17 = *(float *)(iVar5 + 0x8c);
          fVar9 = (float10)*(float *)&REFG(undefined, 0x14a0de4);
          piVar6 = *((int * PTR32 *)GEN_TOP((*(int *)(iVar15 + 0x30) + 0x1dc)));
          fVar2 = *(float *)(iVar5 + 0x88);
          fVar10 = (float10)*(float *)&REFG(undefined, 0x14a0dd8);
          fVar3 = *(float *)(iVar5 + 0x90);
          fVar11 = (float10)*(float *)&REFG(undefined, 0x14a0df0);
          fVar8 = (float10)*(float *)&REFG(undefined, 0x14a0dfc);
          extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*piVar6 + 0xe4))(piVar6);
          local_8 = local_8 + 1;
          *((float *)GEN_TOP((*(int *)((int)this + 0x158) + 0x34ff8 + local_8 * 8))) =
               ((float)GEN_TOF(((extraout_ST0 +
                       (float10)((float)GEN_TOF((((float10)fVar3 * fVar11 +
                                        ((float10)fVar2 * fVar10 + (float10)fVar17 * fVar9)) + fVar8
                                       )))) * (float10)REFG(double, 0x10944b8) +
                      (float10)((float)GEN_TOF(((float10)(uVar7 % 1000) * fVar12))))));
          *((uint *)GEN_TOP((*(int *)((int)this + 0x158) + 0x34ffc + local_8 * 8))) = (uint)uVar4;
        }
        else {
          puVar1 = ((ushort *)GEN_TOP((*(int *)(iVar15 + 0x30) + 0x3ac)));
          *puVar1 = *puVar1 | 0x1000;
          ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar15 + 0x30) + 0x80))))(*(int * PTR32 *)(iVar15 + 0x30));
        }
      }
      iVar16 = iVar16 + 2;
      local_10 = local_10 - 1;
    } while (local_10 != 0);
    if (local_8 != 0) {
      iVar16 = *(int *)((int)this + 0x158) + 0x35000 + local_8 * 8;
      iVar15 = *(int *)((int)this + 0x158) + 0x35000;
      F_009edfb0(iVar15,iVar16,iVar16 - iVar15 >> 3,0,0);
      local_c = 0;
      if (local_8 != 0) {
        do {
          piVar6 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x158) + 0x35004 + local_c * 8))) * 0x68 +
                             0x1030 + *(int *)((int)this + 0x158))));
          fVar17 = gen_bits2f(piVar6[0xc6]);
          if (!(*(float *)&REFG(undefined, 0x1088114) < fVar17)) {
            extraout_ST0_00 = ((gen_fcode *)*(gen_code32 *)(*(int *)piVar6[0x77] + 0xe0))((int *)piVar6[0x77]);
            fVar17 = (float)extraout_ST0_00;
          }
          iVar16 = piVar6[0x7b];
          puVar13 = (undefined4 *)F_009a5550();
          if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
            *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
            F_00994de0(&REFG(float, 0x14a0d58));
            F_00c47de6(((code *)REFP(0x107c350)));
          }
          *(float *)&REFG(undefined, 0x14a0ea4) = fVar17;
          ((code *)*(gen_code32 *)(*(int *)*puVar13 + 0x5c))((int *)*puVar13,5,&REFG(undefined, 0x14a0e98),1);
          ((code *)*(gen_code32 *)(*(int *)*puVar13 + 0x5c))((int *)*puVar13,0xc,iVar16 + 0x30,1);
          *(ushort *)(piVar6 + 0xeb) = *(ushort *)(piVar6 + 0xeb) & 0xefff;
          ((code *)*(gen_code32 *)(*piVar6 + 0x80))(piVar6);
          this_00 = (undefined *)F_009a5550();
          if (*(char *)((int)this_00 + 0x70) == '\0') {
            iVar16 = *(int *)((int)this_00 + 0x20);
            if (iVar16 == 1) {
              F_009a5720(this_00);
            }
            else if (iVar16 == 2) {
              F_009a5830(this_00);
            }
            else if (iVar16 == 3) {
              F_009a5960(this_00);
            }
            *(int *)((int)this_00 + 0x80) =
                 *(int *)((int)this_00 + 0x80) + *(int *)((int)this_00 + 0x7c);
            *(int *)((int)this_00 + 0x90) =
                 *(int *)((int)this_00 + 0x90) + *(int *)((int)this_00 + 0x8c);
            *(undefined4 *)((int)this_00 + 0x7c) = 0;
            *(undefined4 *)((int)this_00 + 0x94) = 0;
            *(undefined4 *)((int)this_00 + 0x8c) = 0;
            *(undefined4 *)((int)this_00 + 0x98) = 0;
          }
          local_c = local_c + 1;
        } while (local_c < local_8);
      }
    }
  }
  uVar7 = *(uint *)((int)this + 0x158);
  *(undefined2 *)(uVar7 + 0x46004 + param_1 * 2) = 0;
  return uVar7;
}

/* ref: FUN_009d29d0 */
uint F_009d29d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9d29d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  uVar1 = F_009d2670(&REFG(float, 0x14a0d58),param_1);
  return uVar1;
}

/* ref: FUN_009d2a10 */
uint F_009d2a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9d2a10u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  if (REFG(undefined * PTR32, 0x14a0a14) != (code *)0x0) {
    puVar1 = ((undefined4 *)GEN_TOP(((code *)REFG(gen_code32, 0x14a0a14))(8,0x10,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0)));
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[1] = (*(undefined4 * PTR32 *)&gen_args[1]);
      *puVar1 = (*(undefined * PTR32 (*)[2])REFP(0x10dda64));
      (*(undefined4 * PTR32 *)&gen_args[1]) = puVar1;
      uVar2 = F_009ee830(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),&(*(undefined4 * PTR32 *)&gen_args[1]));
      return uVar2;
    }
  }
  (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)0x0;
  uVar2 = F_009ee830(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),&(*(undefined4 * PTR32 *)&gen_args[1]));
  return uVar2;
}

/* ref: FUN_009d2a70 */
uint F_009d2a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9d2a70u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  if (REFG(undefined * PTR32, 0x14a0a14) != (code *)0x0) {
    puVar1 = ((undefined4 *)GEN_TOP(((code *)REFG(gen_code32, 0x14a0a14))(8,0x10,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0)));
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[1] = (*(undefined4 * PTR32 *)&gen_args[1]);
      *puVar1 = (*(undefined * PTR32 (*)[2])REFP(0x10dda70));
      (*(undefined4 * PTR32 *)&gen_args[1]) = puVar1;
      uVar2 = F_009ee8a0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))),&(*(undefined4 * PTR32 *)&gen_args[1]));
      return uVar2;
    }
  }
  (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)0x0;
  uVar2 = F_009ee8a0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))),&(*(undefined4 * PTR32 *)&gen_args[1]));
  return uVar2;
}

/* ref: FUN_009d2ad0 */
uint F_009d2ad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x9d2ad0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  undefined * this_00;
  uint uVar1;
  
  if (REFG(undefined * PTR32, 0x14a0a14) != (code *)0x0) {
    this_00 = ((undefined *)GEN_TOP(((code *)REFG(gen_code32, 0x14a0a14))(0x8d8,0x10,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0)));
    if (this_00 != (undefined *)0x0) {
      (*(uint *)&gen_args[6]) = F_009a6440(this_00,(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]),(*(undefined4 *)&gen_args[5]),(*(uint *)&gen_args[6]));
      uVar1 = F_009ee910(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))),&(*(uint *)&gen_args[6]));
      return uVar1;
    }
  }
  (*(uint *)&gen_args[6]) = 0;
  uVar1 = F_009ee910(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))),&(*(uint *)&gen_args[6]));
  return uVar1;
}

/* ref: FUN_009d2b50 */
uint F_009d2b50(unsigned int gen_a0)
{
  GEN_ENTER(0x9d2b50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined2 * puVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10e0474));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  puVar2 = (undefined2 *)((int)this + 0x14);
  iVar1 = 2;
  do {
    *puVar2 = 1;
    puVar2[1] = 0xffff;
    puVar2[2] = 1;
    puVar2[3] = 0xffff;
    puVar2[4] = 1;
    puVar2[5] = 0xffff;
    puVar2[6] = 1;
    puVar2[7] = 0xffff;
    puVar2[8] = 1;
    puVar2[9] = 0xffff;
    puVar2[10] = 1;
    puVar2[0xb] = 0xffff;
    puVar2 = puVar2 + 0xc;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return (uint)this;
}

/* ref: FUN_009d2be0 */
uint F_009d2be0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9d2be0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  uint uVar1;
  
  (*(undefined4 *)&gen_args[1]) = CONCAT22((undefined2)(*(undefined4 *)&gen_args[2]),(ushort)((byte)(*(undefined4 *)&gen_args[1]) & 3) | (short)(*(undefined4 *)&gen_args[3]) * 4);
  uVar1 = F_009ee6a0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),&(*(undefined4 *)&gen_args[1]));
  return uVar1;
}

/* ref: FUN_009d2c20 */
uint F_009d2c20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9d2c20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x10e048c));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x24) = param_1;
  *(undefined4 *)((int)this + 0x28) = param_2;
  *(undefined4 *)((int)this + 0x2c) = param_3;
  return (uint)this;
}

/* ref: FUN_009d2c60 */
unsigned int F_009d2c60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x9d2c60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  undefined4 param_9 = (undefined4)gen_a9;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  F_009dafa0(((undefined1 *)(gen_frame + 0xc)),param_7,param_6,param_1,param_2,param_3,
               (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0xa4,param_4,param_5,param_8);
  F_009ee7a0((undefined *)((int)this + 0x14),((undefined1 *)(gen_frame + 0xc)));
  F_009ee720((undefined *)((int)this + 4),param_9);
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return 0;
}

/* ref: FUN_009d2ce0 */
uint F_009d2ce0(unsigned int gen_a0)
{
  GEN_ENTER(0x9d2ce0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * pcVar1;
  
  pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10e04e8));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x260) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x264) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x264));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x260) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x228) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x22c) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x22c));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x228) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1f0) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 500) != 0)) {
    (*pcVar1)(*(int *)((int)this + 500));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1f0) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1b8) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x1bc) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x1bc));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1b8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x180) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x184) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x184));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x180) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x148) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x14c) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x14c));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x148) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x110) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x114) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x114));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x110) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xd8) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0xdc) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0xdc));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0xd8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa0) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0xa4) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0xa4));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa0) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x68) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x6c) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x6c));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x68) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x30) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x34) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x34));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x30) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[2])REFP(0x10e04ac));
  if ((*(int *)((int)this + 8) != 0) && (pcVar1 != (code *)0x0)) {
    (*pcVar1)(*(int *)((int)this + 8));
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[2])REFP(0x10dd28c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10dd298));
  return 0;
}

/* ref: FUN_009d2ee0 */
uint F_009d2ee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9d2ee0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e04ac));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  bVar1 = F_009e6740((undefined *)((int)this + 4),(param_1[1] - *param_1) / 0x14);
  if (bVar1 != 0) {
    uVar2 = F_009e8fa0(*param_1,param_1[1],*(undefined4 *)((int)this + 4),(int)this + 0x10,param_1
                        );
    *(uint *)((int)this + 8) = uVar2;
  }
  *(int *)((int)this + 0x14) = (param_1[1] - *param_1) / 0x14;
  *(undefined4 *)((int)this + 0x18) = param_2;
  *(undefined4 *)((int)this + 0x1c) = param_3;
  return (uint)this;
}

/* ref: FUN_009d2f70 */
uint F_009d2f70(unsigned int gen_a0)
{
  GEN_ENTER(0x9d2f70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * pcVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10e0500));
  F_009d2ce0((undefined *)((int)this + 0x328));
  F_009d2ce0((undefined *)((int)this + 0x90));
  pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[6])REFP(0x10dda98))
  ;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x48) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x4c) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x4c));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x48) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x14) != 0)) {
    pcVar1 = ((code *)GEN_TOP((*pcVar1)(*(int *)((int)this + 0x14))));
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10dd4e8));
  return (uint)pcVar1;
}

/* ref: FUN_009d2ff0 */
uint F_009d2ff0(unsigned int gen_a0)
{
  GEN_ENTER(0x9d2ff0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * pcVar1;
  
  pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[14])REFP(0x10e0518));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x778) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x77c) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x77c));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x778) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x740) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x744) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x744));
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x740) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  F_009d2ce0((undefined *)((int)this + 0x4a8));
  F_009d2ce0((undefined *)((int)this + 0x210));
  F_00986ad0((undefined *)((int)this + 0xb0));
  pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x28) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x68) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x6c) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x6c));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x68) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x30) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x34) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x34));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x30) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x28) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  if ((*(int *)((int)this + 4) != 0) && (pcVar1 != (code *)0x0)) {
    (*pcVar1)(*(int *)((int)this + 4));
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[14])REFP(0x10dd5ac));
  return 0;
}

/* ref: FUN_009d30f0 */
uint F_009d30f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9d30f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * pcVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[25])REFP(0x10e0554));
  F_009d2ce0((undefined *)((int)this + 0x1108));
  F_009d2ce0((undefined *)((int)this + 0xe70));
  F_009d2ce0((undefined *)((int)this + 0xbd8));
  F_009d2ce0((undefined *)((int)this + 0x940));
  F_009d2ce0((undefined *)((int)this + 0x6a8));
  F_009d2ce0((undefined *)((int)this + 0x410));
  pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x3d8) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x3dc) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x3dc));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x3d8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x350) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x390) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x394) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x394));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x390) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x358) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x35c) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x35c));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x358) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x350) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2c8) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x308) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x30c) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x30c));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x308) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2d0) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x2d4) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x2d4));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2d0) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2c8) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x240) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x280) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x284) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x284));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x280) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x248) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x24c) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x24c));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x248) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x240) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1b8) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1f8) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x1fc) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x1fc));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1f8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1c0) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x1c4) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x1c4));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1c0) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1b8) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x130) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x170) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x174) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x174));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x170) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x138) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x13c) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x13c));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x138) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x130) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa8) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xe8) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0xec) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0xec));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0xe8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xb0) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0xb4) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0xb4));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0xb0) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa8) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x20) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x60) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 100) != 0)) {
    (*pcVar1)(*(int *)((int)this + 100));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x60) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x28) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x2c) != 0)) {
    pcVar1 = ((code *)GEN_TOP((*pcVar1)(*(int *)((int)this + 0x2c))));
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x28) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x20) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[25])REFP(0x10dd544));
  return (uint)pcVar1;
}

/* ref: FUN_009d33f0 */
uint F_009d33f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9d33f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * pcVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10e05bc));
  F_009d2ce0((undefined *)((int)this + 0x778));
  F_009d2ce0((undefined *)((int)this + 0x4e0));
  pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x458) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x498) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x49c) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x49c));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x498) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x460) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x464) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x464));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x460) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x458) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x3d0) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x410) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x414) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x414));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x410) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x3d8) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x3dc) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x3dc));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x3d8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x3d0) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x348) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x388) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x38c) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x38c));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x388) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x350) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x354) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x354));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x350) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x348) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2c0) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x300) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x304) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x304));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x300) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2c8) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x2cc) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x2cc));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2c8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2c0) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x238) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x278) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x27c) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x27c));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x278) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x240) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x244) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x244));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x240) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x238) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1b0) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1f0) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 500) != 0)) {
    (*pcVar1)(*(int *)((int)this + 500));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1f0) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1b8) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x1bc) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x1bc));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1b8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1b0) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x128) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x168) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x16c) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x16c));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x168) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x130) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x134) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x134));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x130) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x128) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa0) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xe0) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0xe4) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0xe4));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0xe0) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa8) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0xac) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0xac));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa0) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x58) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x5c) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x5c));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x58) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x20) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x24) != 0)) {
    pcVar1 = ((code *)GEN_TOP((*pcVar1)(*(int *)((int)this + 0x24))));
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x20) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10dd614));
  return (uint)pcVar1;
}

/* ref: FUN_009d3760 */
uint F_009d3760(unsigned int gen_a0)
{
  GEN_ENTER(0x9d3760u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * pfVar1;
  float * pfVar2;
  float * pfVar3;
  float * pfVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 * puVar9;
  undefined4 * puVar10;
  uint local_14;
  int local_c;
  
  local_14 = 0;
  local_c = 0;
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1dc) + 0xf4))))(*(int * PTR32 *)((int)this + 0x1dc));
  if ((uVar5 == 1) ||
     (uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1dc) + 0xf8))))(*(int * PTR32 *)((int)this + 0x1dc)),
     uVar5 == 1)) {
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58));
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x14a0ea8) + 0x48))))(REFG(int * PTR32, 0x14a0ea8));
    iVar8 = REFG(int, 0x14a09f8);
    local_c = (&REFG(undefined4, 0x14a0a08))[(int)(REFG(int, 0x14a09f8))] + *(int *)(&REFG(undefined, 0x14a0a00) + REFG(int, 0x14a09f8) * 4);
    uVar7 = *(int *)(&REFG(undefined, 0x14a0a00) + REFG(int, 0x14a09f8) * 4) + (uVar5 * 8 + 0xf & 0xfffffff0);
    *(uint *)(&REFG(undefined, 0x14a0a00) + REFG(int, 0x14a09f8) * 4) = uVar7;
    if (REFG(undefined4, 0x14a09fc) < uVar7) {
      local_c = 0;
    }
    else if (local_c != 0) {
      iVar6 = (&REFG(undefined4, 0x14a0a08))[(int)(iVar8)] + *(int *)(&REFG(undefined, 0x14a0a00) + iVar8 * 4);
      uVar7 = *(int *)(&REFG(undefined, 0x14a0a00) + iVar8 * 4) + uVar5 * 0x20;
      *(uint *)(&REFG(undefined, 0x14a0a00) + iVar8 * 4) = uVar7;
      if ((uVar7 <= REFG(undefined4, 0x14a09fc)) && (iVar6 != 0)) {
        iVar8 = 0;
        if (0 < (int)uVar5) {
          iVar6 = iVar6 + 0x10;
          do {
            uVar7 = *(uint *)&REFG(undefined, 0x14a22e8) & 1;
            *(int *)(local_c + 4 + iVar8 * 8) = iVar6 + -0x10;
            if (uVar7 == 0) {
              *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
              F_00994de0(&REFG(float, 0x14a0d58));
              F_00c47de6(((code *)REFP(0x107c350)));
            }
            ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x14a0ea8) + 0x4c))))
                      (REFG(int * PTR32, 0x14a0ea8),iVar8,iVar6 + -0x10,iVar6,iVar6 + -4,iVar6 + 0xc);
            pfVar1 = (float *)(iVar6 + -0xc);
            pfVar2 = (float *)(iVar6 + -0x10);
            pfVar3 = (float *)(iVar6 + -8);
            iVar8 = iVar8 + 1;
            pfVar4 = (float *)(iVar6 + 0xc);
            iVar6 = iVar6 + 0x20;
            *(float *)(local_c + -8 + iVar8 * 8) =
                 ((float)GEN_TOF(((float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)*pfVar3 *
                                                               (float10)*(float *)((int)this + 0x30)
                                                              + ((float10)*pfVar2 *
                                                                 (float10)*(float *)((int)this +
                                                                                    0x28) +
                                                                (float10)*pfVar1 *
                                                                (float10)*(float *)((int)this + 0x2c
                                                                                   )))))))) -
                        (float10)*pfVar4)));
          } while (iVar8 < (int)uVar5);
        }
        iVar8 = local_c + uVar5 * 8;
        F_009ee0b0(local_c,iVar8,iVar8 - local_c >> 3,0,0);
        local_14 = uVar5;
      }
    }
  }
  iVar8 = 0;
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1dc) + 0xf4))))(*(int * PTR32 *)((int)this + 0x1dc));
  if ((uVar5 == 1) && (0 < (int)local_14)) {
    puVar9 = *(undefined4 * PTR32 *)(local_c + 4);
    puVar10 = (undefined4 *)((int)this + 0x1f0);
    for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    iVar8 = 1;
  }
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1dc) + 0xf8))))(*(int * PTR32 *)((int)this + 0x1dc));
  if ((uVar5 - 1 == 0) && (iVar8 < (int)local_14)) {
    puVar9 = *(undefined4 * PTR32 *)(local_c + 4 + iVar8 * 8);
    puVar10 = (undefined4 *)((int)this + 0x210);
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
  }
  return uVar5 - 1;
}

/* ref: FUN_009d3990 */
uint F_009d3990(unsigned int gen_a0)
{
  GEN_ENTER(0x9d3990u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * pfVar1;
  float * pfVar2;
  float * pfVar3;
  float * pfVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 * puVar9;
  uint uVar10;
  undefined4 * puVar11;
  uint local_20;
  uint local_1c;
  undefined4 * local_18;
  uint local_14;
  uint local_10;
  undefined4 * local_c;
  uint local_8;
  
  if ((*(ushort *)((int)this + 0x3ac) & 0x800) != 0) {
    F_009d3760(this);
    *(ushort *)((int)this + 0x3ac) = *(ushort *)((int)this + 0x3ac) & 0xf7ff;
  }
  uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1dc) + 0xf4))))(*(int * PTR32 *)((int)this + 0x1dc));
  if ((uVar6 == 3) ||
     (uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1dc) + 0xf8))))(*(int * PTR32 *)((int)this + 0x1dc)),
     uVar6 == 3)) {
    local_1c = 0;
    if ((*(ushort *)((int)this + 0x3ac) & 0xff) != 0) {
      puVar9 = (undefined4 *)((int)this + 0x278);
      do {
        pfVar4 = (float *)*puVar9;
        local_1c = local_1c + 1;
        puVar9[-1] = (undefined4)
                     gen_fl2bits(((float)GEN_TOF(((float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)pfVar4[2] *
                                                                               (float10)*((float *)GEN_TOP(((
                                                  int)this + 0x30))) +
                                                  ((float10)*pfVar4 *
                                                   (float10)*(float *)((int)this + 0x28) +
                                                  (float10)pfVar4[1] *
                                                  (float10)*(float *)((int)this + 0x2c)))))))) -
                                        (float10)pfVar4[7]))));
        puVar9 = puVar9 + 2;
      } while (local_1c < (*(ushort *)((int)this + 0x3ac) & 0xff));
    }
    iVar7 = (int)this + (*(ushort *)((int)this + 0x3ac) & 0xff) * 8 + 0x274;
    F_009ee0b0((int)this + 0x274,iVar7,iVar7 - ((int)this + 0x274) >> 3,0,0);
  }
  local_8 = 0;
  local_18 = (undefined4 *)0x0;
  uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1dc) + 0xf4))))(*(int * PTR32 *)((int)this + 0x1dc));
  if ((uVar6 == 4) ||
     (uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1dc) + 0xf8))))(*(int * PTR32 *)((int)this + 0x1dc)),
     uVar6 == 4)) {
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58));
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    uVar6 = REFG(undefined4, 0x14a22c0);
    local_8 = REFG(undefined4, 0x14a22c0);
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58));
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    local_18 = &REFG(undefined4, 0x14a1ec0);
    if (uVar6 != 0) {
      local_1c = uVar6;
      puVar9 = &REFG(undefined4, 0x14a1ec4);
      do {
        pfVar4 = (float *)*puVar9;
        local_1c = local_1c - 1;
        puVar9[-1] = (undefined4)
                     gen_fl2bits(((float)GEN_TOF(((float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)pfVar4[2] *
                                                                               (float10)*((float *)GEN_TOP(((
                                                  int)this + 0x30))) +
                                                  ((float10)*pfVar4 *
                                                   (float10)*(float *)((int)this + 0x28) +
                                                  (float10)pfVar4[1] *
                                                  (float10)*(float *)((int)this + 0x2c)))))))) -
                                        (float10)pfVar4[7]))));
        puVar9 = puVar9 + 2;
      } while (local_1c != 0);
    }
    F_009ee0b0(&REFG(undefined4, 0x14a1ec0),&REFG(undefined4, 0x14a1ec0) + uVar6 * 2,(int)(uVar6 * 8) >> 3,0,0);
  }
  local_1c = 0;
  local_c = (undefined4 *)0x0;
  uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1dc) + 0xf4))))(*(int * PTR32 *)((int)this + 0x1dc));
  if ((uVar6 == 2) ||
     (uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1dc) + 0xf8))))(*(int * PTR32 *)((int)this + 0x1dc)),
     uVar6 == 2)) {
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58));
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x14a0ea8) + 0x48))))(REFG(int * PTR32, 0x14a0ea8));
    iVar7 = REFG(int, 0x14a09f8);
    local_c = ((undefined4 *)GEN_TOP(((&REFG(undefined4, 0x14a0a08))[(int)(REFG(int, 0x14a09f8))] + *(int *)(&REFG(undefined, 0x14a0a00) + REFG(int, 0x14a09f8) * 4))));
    uVar10 = *(int *)(&REFG(undefined, 0x14a0a00) + REFG(int, 0x14a09f8) * 4) + (uVar6 * 8 + 0xf & 0xfffffff0);
    *(uint *)(&REFG(undefined, 0x14a0a00) + REFG(int, 0x14a09f8) * 4) = uVar10;
    if (REFG(undefined4, 0x14a09fc) < uVar10) {
      local_c = (undefined4 *)0x0;
    }
    else if (local_c != (undefined4 *)0x0) {
      uVar10 = *(uint *)(&REFG(undefined, 0x14a0a00) + iVar7 * 4);
      iVar8 = (&REFG(undefined4, 0x14a0a08))[(int)(iVar7)] + uVar10;
      uVar10 = uVar10 + uVar6 * 0x20;
      *(uint *)(&REFG(undefined, 0x14a0a00) + iVar7 * 4) = uVar10;
      if ((uVar10 <= REFG(undefined4, 0x14a09fc)) && (iVar8 != 0)) {
        uVar10 = 0;
        if (uVar6 != 0) {
          iVar8 = iVar8 + 0x10;
          do {
            uVar5 = *(uint *)&REFG(undefined, 0x14a22e8) & 1;
            local_c[uVar10 * 2 + 1] = iVar8 + -0x10;
            if (uVar5 == 0) {
              *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
              F_00994de0(&REFG(float, 0x14a0d58));
              F_00c47de6(((code *)REFP(0x107c350)));
            }
            ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x14a0ea8) + 0x4c))))
                      (REFG(int * PTR32, 0x14a0ea8),uVar10,iVar8 + -0x10,iVar8,iVar8 + -4,iVar8 + 0xc);
            pfVar4 = (float *)(iVar8 + -0xc);
            pfVar1 = (float *)(iVar8 + -0x10);
            pfVar2 = (float *)(iVar8 + -8);
            pfVar3 = (float *)(iVar8 + 0xc);
            uVar10 = uVar10 + 1;
            iVar8 = iVar8 + 0x20;
            local_c[uVar10 * 2 + -2] =
                 (undefined4)
                 gen_fl2bits(((float)GEN_TOF(((float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)*pfVar2 *
                                                                           (float10)*(float *)((int)
                                                  this + 0x30) +
                                                  ((float10)*pfVar1 *
                                                   (float10)*(float *)((int)this + 0x28) +
                                                  (float10)*pfVar4 *
                                                  (float10)*(float *)((int)this + 0x2c)))))))) -
                                    (float10)*pfVar3))));
          } while (uVar10 < uVar6);
        }
        F_009ee0b0(local_c,local_c + uVar6 * 2,(int)(local_c + uVar6 * 2) - (int)((int)(uintptr_t)local_c) >> 3,0,0)
        ;
        local_1c = uVar6;
      }
    }
  }
  local_10 = 0;
  local_14 = 0;
  local_20 = 0;
  uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1dc) + 0xf4))))(*(int * PTR32 *)((int)this + 0x1dc));
  if (uVar6 == 2) {
    if (local_1c == 0) {
LAB_009d3de0: ;
      *(undefined4 *)((int)this + 0x208) = 0;
      *(undefined4 *)((int)this + 0x204) = 0;
      *(undefined4 *)((int)this + 0x200) = 0;
    }
    else {
      local_20 = 1;
      puVar9 = (undefined4 *)local_c[1];
      puVar11 = (undefined4 *)((int)this + 0x1f0);
      for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar11 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      }
    }
  }
  else if (uVar6 == 3) {
    if ((*(ushort *)((int)this + 0x3ac) & 0xff) == 0) goto LAB_009d3de0;
    local_10 = 1;
    puVar9 = *(undefined4 * PTR32 *)((int)this + 0x278);
    puVar11 = (undefined4 *)((int)this + 0x1f0);
    for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar11 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    }
  }
  else if (uVar6 == 4) {
    if (local_8 == 0) goto LAB_009d3de0;
    local_14 = 1;
    puVar9 = (undefined4 *)local_18[1];
    puVar11 = (undefined4 *)((int)this + 0x1f0);
    for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar11 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    }
  }
  uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1dc) + 0xf8))))(*(int * PTR32 *)((int)this + 0x1dc));
  if (uVar6 == 2) {
    uVar6 = local_20;
    puVar9 = local_c;
    if (local_20 < local_1c) {
LAB_009d3e5a: ;
      puVar9 = (undefined4 *)puVar9[uVar6 * 2 + 1];
      puVar11 = (undefined4 *)((int)this + 0x210);
      for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar11 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      }
      return uVar6;
    }
  }
  else if (uVar6 == 3) {
    uVar6 = local_10;
    if (local_10 < (*(ushort *)((int)this + 0x3ac) & 0xff)) {
      puVar9 = *(undefined4 * PTR32 *)((int)this + local_10 * 8 + 0x278);
      puVar11 = (undefined4 *)((int)this + 0x210);
      for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar11 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      }
      return local_10;
    }
  }
  else {
    if (uVar6 - 4 != 0) {
      return uVar6 - 4;
    }
    uVar6 = local_14;
    puVar9 = local_18;
    if (local_14 < local_8) goto LAB_009d3e5a;
  }
  *(undefined4 *)((int)this + 0x228) = 0;
  *(undefined4 *)((int)this + 0x224) = 0;
  *(undefined4 *)((int)this + 0x220) = 0;
  return uVar6;
}

/* ref: FUN_009d3ea0 */
uint F_009d3ea0(unsigned int gen_a0)
{
  GEN_ENTER(0x9d3ea0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  undefined4 * puVar5;
  int iVar6;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  short * local_8;
  
  local_8 = (short *)((int)this + 0x360);
  piVar4 = (int *)((int)this + 800);
  local_c = 0x10;
  do {
    iVar6 = (int)*local_8;
    iVar1 = *piVar4;
    iVar2 = iVar6 * 0x10 + iVar1;
    uVar3 = F_009ee1b0(iVar1,iVar2,iVar2 - iVar1 >> 4,local_1c,local_18,local_14,local_10);
    if (0 < iVar6) {
      puVar5 = (undefined4 *)(iVar1 + 8);
      do {
        uVar3 = ((code *)*(gen_code32 *)(*(int *)*puVar5 + 0x74))((int *)*puVar5);
        puVar5 = puVar5 + 4;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    local_8 = local_8 + 1;
    piVar4 = piVar4 + 1;
    local_c = local_c + -1;
  } while (local_c != 0);
  return uVar3;
}

/* ref: Apricot::Engine::Instance::DocumentInstance::vf32 */
uint F_009d3f30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x9d3f30u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if ((((*(ushort *)(this + 0x3ac) & 0x1000) == 0) && (*(int *)(this + 0x1ec) != 0)) &&
     (!(*((float *)GEN_TOP((*(int *)(this + 0x1ec) + 0x3c))) <= REFG(float, 0x10947f8)))) {
    F_009d3990(this);
    uVar1 = ((code *)*(gen_code32 *)(this + 0x3b0))
                      (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar1;
  }
  uVar1 = F_0097e2c0(this);
  return uVar1;
}

/* ref: FUN_009d3f70 */
uint F_009d3f70(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9d3f70u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  int * piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int * piVar5;
  int * piVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  piVar1 = param_5;
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)param_1 + 0x1dc) + 0x30))))
                    (*(int * PTR32 *)((int)param_1 + 0x1dc),(int)*(char *)(param_2 + 1));
  piVar5 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_5 + 0x1c))(param_5,0)));
  piVar6 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_5 + 0x1c))(param_5,3)));
  uVar7 = ((code *)*(gen_code32 *)(*param_5 + 0x18))(param_5);
  switch((unsigned int)(uintptr_t)(uVar7)) {
  case 0: ;
    uVar7 = ((code *)*(gen_code32 *)(*piVar5 + 0xc))(piVar5);
    if (uVar7 != 0) {
      if (uVar7 - 1 != 0) {
        return uVar7 - 1;
      }
      piVar6 = *((int * PTR32 *)GEN_TOP((*(int *)((int)param_1 + 0x1d4) + 0x270)));
      uVar7 = ((code *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6);
      param_5 = (int *)0x0;
      if ((int)uVar7 < 1) {
        return uVar7;
      }
      do {
        if (REFG(int, 0x14a09e8) == -1) {
LAB_009d4091: ;
          uVar8 = 0;
        }
        else {
          piVar6 = (int *)(REFG(int, 0x14a09e8) * 0x400 + REFG(int, 0x14a09f4));
          REFG(int, 0x14a09e8) = *piVar6;
          REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + -1;
          if (piVar6 == (int *)0x0) goto LAB_009d4091;
          uVar2 = *(undefined4 *)((int)param_1 + 0x1dc);
          uVar3 = *(undefined4 *)((int)param_1 + 0x1d4);
          uVar8 = ((code *)*(gen_code32 *)(*piVar5 + 0x14))(piVar5);
          uVar8 = F_009cc7c0(piVar6,uVar3,param_1,uVar2,piVar1,uVar4,param_3,param_4,param_5,
                               (float)(int)(uVar8 * (int)param_5));
        }
        F_0097e5c0(param_1,uVar8);
        param_5 = (int *)((int)param_5 + 1);
        if ((int)uVar7 <= (int)param_5) {
          return (uint)param_5;
        }
      } while( true );
    }
    uVar7 = F_009df120(0x29c);
    if (uVar7 != 0) {
      uVar2 = *(undefined4 *)((int)param_1 + 0x1dc);
      uVar3 = *(undefined4 *)((int)param_1 + 0x1d4);
      uVar8 = ((code *)*(gen_code32 *)(*piVar5 + 0x14))(piVar5);
      uVar4 = F_009cc7c0(uVar7,uVar3,param_1,uVar2,param_5,uVar4,param_3,param_4,0xffffffff,
                           (float)(int)uVar8);
      uVar4 = F_0097e5c0(param_1,uVar4);
      return uVar4;
    }
    break;
  case 1: ;
    uVar7 = ((code *)*(gen_code32 *)(*piVar5 + 0xc))(piVar5);
    if (uVar7 != 0) {
      if (uVar7 - 1 != 0) {
        return uVar7 - 1;
      }
      piVar6 = *((int * PTR32 *)GEN_TOP((*(int *)((int)param_1 + 0x1d4) + 0x270)));
      uVar7 = ((code *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6);
      param_5 = (int *)0x0;
      if ((int)uVar7 < 1) {
        return uVar7;
      }
      do {
        piVar6 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1,3)));
        uVar8 = ((code *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6);
        if (uVar8 == 0) {
          uVar8 = F_009df120(0x2d4);
          if (uVar8 == 0) {
            uVar8 = 0;
          }
          else {
            uVar2 = *(undefined4 *)((int)param_1 + 0x1dc);
            uVar3 = *(undefined4 *)((int)param_1 + 0x1d4);
            uVar9 = ((code *)*(gen_code32 *)(*piVar5 + 0x14))(piVar5);
            uVar8 = F_009cc220(uVar8,uVar3,param_1,uVar2,piVar1,uVar4,param_3,param_4,param_5,
                                 0xffffffff,(float)(int)(uVar9 * (int)param_5));
          }
          F_0097e5c0(param_1,uVar8);
        }
        else if (uVar8 == 1) {
          uVar8 = 0;
          do {
            if (param_5 != (int *)uVar8) {
              if (REFG(int, 0x14a09e8) == -1) {
LAB_009d4225: ;
                uVar9 = 0;
              }
              else {
                piVar6 = (int *)(REFG(int, 0x14a09e8) * 0x400 + REFG(int, 0x14a09f4));
                REFG(int, 0x14a09e8) = *piVar6;
                REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + -1;
                if (piVar6 == (int *)0x0) goto LAB_009d4225;
                uVar2 = *(undefined4 *)((int)param_1 + 0x1dc);
                uVar3 = *(undefined4 *)((int)param_1 + 0x1d4);
                uVar9 = ((code *)*(gen_code32 *)(*piVar5 + 0x14))(piVar5);
                uVar9 = F_009cc220(piVar6,uVar3,param_1,uVar2,piVar1,uVar4,param_3,param_4,param_5
                                     ,uVar8,(float)(int)(uVar9 * uVar8));
              }
              F_0097e5c0(param_1,uVar9);
            }
            uVar8 = uVar8 + 1;
          } while ((int)uVar8 < (int)uVar7);
        }
        param_5 = (int *)((int)param_5 + 1);
        if ((int)uVar7 <= (int)param_5) {
          return (uint)param_5;
        }
      } while( true );
    }
    uVar7 = ((code *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6);
    if (uVar7 != 0) {
      if (uVar7 - 1 != 0) {
        return uVar7 - 1;
      }
      piVar6 = *((int * PTR32 *)GEN_TOP((*(int *)((int)param_1 + 0x1d4) + 0x270)));
      uVar7 = ((code *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6);
      param_5 = (int *)0x0;
      if ((int)uVar7 < 1) {
        return uVar7;
      }
      do {
        uVar8 = F_009df120(0x2d4);
        if (uVar8 == 0) {
          uVar8 = 0;
        }
        else {
          uVar2 = *(undefined4 *)((int)param_1 + 0x1dc);
          uVar3 = *(undefined4 *)((int)param_1 + 0x1d4);
          uVar9 = ((code *)*(gen_code32 *)(*piVar5 + 0x14))(piVar5);
          uVar8 = F_009cc220(uVar8,uVar3,param_1,uVar2,piVar1,uVar4,param_3,param_4,0xffffffff,
                               param_5,(float)(int)(uVar9 * (int)param_5));
        }
        F_0097e5c0(param_1,uVar8);
        param_5 = (int *)((int)param_5 + 1);
      } while ((int)param_5 < (int)uVar7);
      return (uint)param_5;
    }
    uVar7 = F_009df120(0x2d4);
    if (uVar7 != 0) {
      uVar4 = F_009cc220(uVar7,*(undefined4 *)((int)param_1 + 0x1d4),param_1,
                           *(undefined4 *)((int)param_1 + 0x1dc),param_5,uVar4,param_3,param_4,
                           0xffffffff,0xffffffff,(float)(float10)0);
      uVar4 = F_0097e5c0(param_1,uVar4);
      return uVar4;
    }
    break;
  case 2: ;
    uVar7 = ((code *)*(gen_code32 *)(*piVar5 + 0xc))(piVar5);
    if (uVar7 != 0) {
      if (uVar7 - 1 != 0) {
        return uVar7 - 1;
      }
      piVar6 = *((int * PTR32 *)GEN_TOP((*(int *)((int)param_1 + 0x1d4) + 0x270)));
      uVar7 = ((code *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6);
      param_5 = (int *)0x0;
      if ((int)uVar7 < 1) {
        return uVar7;
      }
      do {
        piVar6 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1,3)));
        uVar8 = ((code *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6);
        if (uVar8 == 0) {
          uVar8 = F_009df120(0x360);
          if (uVar8 == 0) {
            uVar8 = 0;
          }
          else {
            uVar2 = *(undefined4 *)((int)param_1 + 0x1dc);
            uVar3 = *(undefined4 *)((int)param_1 + 0x1d4);
            uVar9 = ((code *)*(gen_code32 *)(*piVar5 + 0x14))(piVar5);
            uVar8 = F_009ccd60(uVar8,uVar3,param_1,uVar2,piVar1,uVar4,param_3,param_4,param_5,
                                 0xffffffff,(float)(int)(uVar9 * (int)param_5));
          }
          F_0097e5c0(param_1,uVar8);
        }
        else if (uVar8 == 1) {
          uVar8 = 0;
          do {
            if (param_5 != (int *)uVar8) {
              if (REFG(int, 0x14a09e8) == -1) {
LAB_009d44f5: ;
                uVar9 = 0;
              }
              else {
                piVar6 = (int *)(REFG(int, 0x14a09e8) * 0x400 + REFG(int, 0x14a09f4));
                REFG(int, 0x14a09e8) = *piVar6;
                REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + -1;
                if (piVar6 == (int *)0x0) goto LAB_009d44f5;
                uVar2 = *(undefined4 *)((int)param_1 + 0x1dc);
                uVar3 = *(undefined4 *)((int)param_1 + 0x1d4);
                uVar9 = ((code *)*(gen_code32 *)(*piVar5 + 0x14))(piVar5);
                uVar9 = F_009ccd60(piVar6,uVar3,param_1,uVar2,piVar1,uVar4,param_3,param_4,param_5
                                     ,uVar8,(float)(int)(uVar9 * uVar8));
              }
              F_0097e5c0(param_1,uVar9);
            }
            uVar8 = uVar8 + 1;
          } while ((int)uVar8 < (int)uVar7);
        }
        param_5 = (int *)((int)param_5 + 1);
        if ((int)uVar7 <= (int)param_5) {
          return (uint)param_5;
        }
      } while( true );
    }
    uVar7 = ((code *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6);
    if (uVar7 != 0) {
      if (uVar7 - 1 != 0) {
        return uVar7 - 1;
      }
      piVar6 = *((int * PTR32 *)GEN_TOP((*(int *)((int)param_1 + 0x1d4) + 0x270)));
      uVar7 = ((code *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6);
      param_5 = (int *)0x0;
      if ((int)uVar7 < 1) {
        return uVar7;
      }
      do {
        uVar8 = F_009df120(0x360);
        if (uVar8 == 0) {
          uVar8 = 0;
        }
        else {
          uVar2 = *(undefined4 *)((int)param_1 + 0x1dc);
          uVar3 = *(undefined4 *)((int)param_1 + 0x1d4);
          uVar9 = ((code *)*(gen_code32 *)(*piVar5 + 0x14))(piVar5);
          uVar8 = F_009ccd60(uVar8,uVar3,param_1,uVar2,piVar1,uVar4,param_3,param_4,0xffffffff,
                               param_5,(float)(int)(uVar9 * (int)param_5));
        }
        F_0097e5c0(param_1,uVar8);
        param_5 = (int *)((int)param_5 + 1);
      } while ((int)param_5 < (int)uVar7);
      return (uint)param_5;
    }
    uVar7 = F_009df120(0x360);
    if (uVar7 != 0) {
      uVar4 = F_009ccd60(uVar7,*(undefined4 *)((int)param_1 + 0x1d4),param_1,
                           *(undefined4 *)((int)param_1 + 0x1dc),param_5,uVar4,param_3,param_4,
                           0xffffffff,0xffffffff,(float)(float10)0);
      uVar4 = F_0097e5c0(param_1,uVar4);
      return uVar4;
    }
    break;
  case 3: ;
    if (REFG(int, 0x14a09e8) != -1) {
      piVar1 = (int *)(REFG(int, 0x14a09e8) * 0x400 + REFG(int, 0x14a09f4));
      REFG(int, 0x14a09e8) = *piVar1;
      REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + -1;
      if (piVar1 != (int *)0x0) {
        uVar4 = F_009c9570(piVar1,*(undefined4 *)((int)param_1 + 0x1d4),param_1,
                             *(undefined4 *)((int)param_1 + 0x1dc),param_5,uVar4,param_3,param_4);
        uVar4 = F_0097e5c0(param_1,uVar4);
        return uVar4;
      }
    }
    break;
  default: ;
    goto switchD_009d3fc3_default;
  }
  uVar7 = F_0097e5c0(param_1,0);
switchD_009d3fc3_default: ;
  return uVar7;
}

/* ref: FUN_009d4770 */
unsigned int F_009d4770(void)
{
  GEN_ENTER(0x9d4770u, 0u, 0u, 0u, 0u);
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined * pvVar7;
  int * piVar8;
  undefined4 * puVar9;
  float in_XMM3_Da = 0;
  float in_XMM5_Da = 0;
  float in_XMM6_Da = 0;
  
  if (REFG(char, 0x14a06d5) != '\0') {
    iVar1 = *((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
    F_009a3a70();
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58));
      F_00c47de6(((code *)REFP(0x107c350)));
      if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
        F_00994de0(&REFG(float, 0x14a0d58));
        F_00c47de6(((code *)REFP(0x107c350)));
      }
    }
    F_009bcf00(&REFG(float, 0x14a0d58));
    iVar6 = REFG(int, 0x1371288);
    iVar5 = REFG(int, 0x1370b90);
    piVar8 = (int *)(REFG(int, 0x1370b90) + 0x90);
    uVar4 = *(uint *)&REFG(undefined, 0x14a22e8) & 1;
    *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) & 0x7fffff | 0xf6000000;
    iVar2 = *(int *)(iVar6 + 0xf0);
    iVar3 = *(int *)(iVar6 + 0xec);
    if (uVar4 == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58));
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    *(float *)&REFG(undefined, 0x14a0e98) = (float)iVar3;
    *(float *)&REFG(undefined, 0x14a0e9c) = (float)iVar2;
    *(undefined4 *)(iVar1 + 8) = 0xf6480000;
    F_0062d050(REFG(void * PTR32, 0x13759f8));
    F_0063bb20(REFG(void * PTR32, 0x13759f8));
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58));
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    F_009d2670(&REFG(float, 0x14a0d58),7);
    iVar2 = *(int *)(iVar6 + 0xf0);
    iVar3 = *(int *)(iVar6 + 0xec);
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58));
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    *(float *)&REFG(undefined, 0x14a0e98) = (float)iVar3;
    *(float *)&REFG(undefined, 0x14a0e9c) = (float)iVar2;
    *(undefined4 *)(iVar1 + 8) = 0xf6480010;
    F_0062d050(REFG(void * PTR32, 0x13759f8));
    F_0063bb20(REFG(void * PTR32, 0x13759f8));
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58));
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    F_009d2670(&REFG(float, 0x14a0d58),6);
    iVar2 = *(int *)(iVar6 + 0xf0);
    iVar3 = *(int *)(iVar6 + 0xec);
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58));
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    *(float *)&REFG(undefined, 0x14a0e98) = (float)iVar3;
    *(float *)&REFG(undefined, 0x14a0e9c) = (float)iVar2;
    *(undefined4 *)(iVar1 + 8) = 0xf64ffffe;
    F_0062d050(REFG(void * PTR32, 0x13759f8));
    F_0063bb20(REFG(void * PTR32, 0x13759f8));
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58));
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    F_009d2670(&REFG(float, 0x14a0d58),5);
    iVar2 = *(int *)(iVar6 + 0xf0);
    iVar3 = *(int *)(iVar6 + 0xec);
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58));
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    *(float *)&REFG(undefined, 0x14a0e98) = (float)iVar3;
    *(float *)&REFG(undefined, 0x14a0e9c) = (float)iVar2;
    *(undefined4 *)(iVar1 + 8) = 0xf637fffe;
    F_0062d050(REFG(void * PTR32, 0x13759f8));
    F_0063bb20(REFG(void * PTR32, 0x13759f8));
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58));
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    F_009d2670(&REFG(float, 0x14a0d58),4);
    iVar2 = *(int *)(iVar6 + 0xf0);
    iVar3 = *(int *)(iVar6 + 0xec);
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58));
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    *(float *)&REFG(undefined, 0x14a0e98) = (float)iVar3;
    *(float *)&REFG(undefined, 0x14a0e9c) = (float)iVar2;
    *(undefined4 *)(iVar1 + 8) = 0xf647fffe;
    F_0062d050(REFG(void * PTR32, 0x13759f8));
    F_0063bb20(REFG(void * PTR32, 0x13759f8));
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58));
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    F_009d2670(&REFG(float, 0x14a0d58),10);
    iVar2 = *(int *)(iVar6 + 0xf0);
    iVar3 = *(int *)(iVar6 + 0xec);
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58));
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    *(float *)&REFG(undefined, 0x14a0e98) = (float)iVar3;
    *(float *)&REFG(undefined, 0x14a0e9c) = (float)iVar2;
    *(undefined4 *)(iVar1 + 8) = 0xf657fffe;
    F_0062d050(REFG(void * PTR32, 0x13759f8));
    F_0063bb20(REFG(void * PTR32, 0x13759f8));
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58));
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    F_009d2670(&REFG(float, 0x14a0d58),3);
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58));
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    puVar9 = (undefined4 *)F_009a5550();
    ((code *)*(gen_code32 *)(*(int *)*puVar9 + 0x30))((int *)*puVar9,1,puVar9[4]);
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58));
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    F_009d2670(&REFG(float, 0x14a0d58),2);
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58));
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    F_009d2670(&REFG(float, 0x14a0d58),1);
    iVar2 = *(int *)(iVar6 + 0xf0);
    iVar3 = *(int *)(iVar6 + 0xec);
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58));
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    *(float *)&REFG(undefined, 0x14a0e98) = (float)iVar3;
    *(float *)&REFG(undefined, 0x14a0e9c) = (float)iVar2;
    *(undefined4 *)(iVar1 + 8) = 0xf66bffff;
    F_0062d050(REFG(void * PTR32, 0x13759f8));
    F_0063bb20(REFG(void * PTR32, 0x13759f8));
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58));
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    if (*(short *)(REFG(int, 0x14a0eb0) + 0x46004) != 0) {
      F_009bd1d0();
    }
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58));
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    F_009d2670(&REFG(float, 0x14a0d58),0);
    iVar2 = *(int *)(iVar6 + 0xf0);
    iVar3 = *(int *)(iVar6 + 0xec);
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58));
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    *(float *)&REFG(undefined, 0x14a0e98) = (float)iVar3;
    *(float *)&REFG(undefined, 0x14a0e9c) = (float)iVar2;
    *(undefined4 *)(iVar1 + 8) = 0xf6780000;
    F_0062d050(REFG(void * PTR32, 0x13759f8));
    F_0063bb20(REFG(void * PTR32, 0x13759f8));
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58));
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    F_009d2670(&REFG(float, 0x14a0d58),8);
    iVar2 = *(int *)(iVar5 + 0x94);
    iVar3 = *piVar8;
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58));
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    *(float *)&REFG(undefined, 0x14a0e98) = (float)iVar3;
    *(float *)&REFG(undefined, 0x14a0e9c) = (float)iVar2;
    *(undefined4 *)(iVar1 + 8) = 0xff400003;
    F_0062d050(REFG(void * PTR32, 0x13759f8));
    F_0063bb20(REFG(void * PTR32, 0x13759f8));
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58));
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    F_009d2670(&REFG(float, 0x14a0d58),9);
    iVar2 = *(int *)(iVar6 + 0xf0);
    iVar3 = *(int *)(iVar6 + 0xec);
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58));
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    *(float *)&REFG(undefined, 0x14a0e98) = (float)iVar3;
    *(float *)&REFG(undefined, 0x14a0e9c) = (float)iVar2;
    *(undefined4 *)(iVar1 + 8) = 0xf633ffff;
    F_0062d050(REFG(void * PTR32, 0x13759f8));
    F_0063bb20(REFG(void * PTR32, 0x13759f8));
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58));
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    F_009d2390(&REFG(float, 0x14a0d58));
    uVar4 = *(uint *)&REFG(undefined, 0x14a22e8) & 1;
    *(undefined4 *)(iVar1 + 8) = 0xf67ffffe;
    if (uVar4 == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58));
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    F_009bd0e0();
    pvVar7 = REFG(void * PTR32, 0x14a0d28);
    F_009846c0(REFG(void * PTR32, 0x14a0d28));
    F_009a36c0(pvVar7);
    pvVar7 = REFG(void * PTR32, 0x1487c8c);
    F_009a2b10(REFG(void * PTR32, 0x1487c8c));
    F_009a2bc0(pvVar7,in_XMM3_Da,in_XMM5_Da,in_XMM6_Da);
  }
  return 0;
}

/* ref: FUN_009d4fd0 */
unsigned int F_009d4fd0(unsigned int gen_a0)
{
  GEN_ENTER(0x9d4fd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  undefined4 * puVar2;
  int local_8;
  
  puVar2 = (undefined4 *)((int)this + 0x14);
  local_8 = 3;
  do {
    pvVar1 = (undefined *)puVar2[-1];
    if (pvVar1 != (undefined *)0x0) {
      F_009cfa70(pvVar1);
      F_00406ad0(pvVar1);
      puVar2[-1] = 0;
    }
    pvVar1 = (undefined *)*puVar2;
    if (pvVar1 != (undefined *)0x0) {
      F_009cfa70(pvVar1);
      F_00406ad0(pvVar1);
      *puVar2 = 0;
    }
    puVar2[1] = 0xe0000000;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2 = puVar2 + 8;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  puVar2 = (undefined4 *)((int)this + 0x70);
  local_8 = 4;
  do {
    pvVar1 = (undefined *)*puVar2;
    if (pvVar1 != (undefined *)0x0) {
      F_009cfa70(pvVar1);
      F_00406ad0(pvVar1);
      *puVar2 = 0;
    }
    puVar2[2] = 0xe0000000;
    puVar2[3] = 0;
    puVar2 = puVar2 + 4;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return 0;
}

/* ref: FUN_009d5090 */
uint F_009d5090(unsigned int gen_a0)
{
  GEN_ENTER(0x9d5090u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x200];
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined * this_00;
  byte bVar5;
  undefined * this_01;
  undefined3 extraout_var = 0;
  undefined4 * puVar6;
  undefined4 * puVar7;
  int iVar8;
  int * piVar9;
  undefined4 * puVar10;
  float10 fVar11;
  ulonglong uVar12;
  
  (*(uint *)(gen_frame + 0x1ec)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1f0);
  uVar12 = F_00538780(&REFG(undefined4, 0x1375bc0));
  this_01 = (undefined *)F_009d1a30(this,(int)uVar12,(int)(uVar12 >> 0x20));
  piVar9 = (int *)((int)this + 0x70);
  (*(int * PTR32 *)(gen_frame + 0x58)) = piVar9;
  (*(int *)(gen_frame + 0x4c)) = 4;
  do {
    iVar8 = *piVar9;
    if (iVar8 != 0) {
      (*(int * PTR32 *)(gen_frame + 0x58)) = piVar9;
      bVar5 = F_009a4da0(*(undefined4 *)(iVar8 + 0x50),*(undefined4 *)(iVar8 + 0x54));
      this_01 = ((undefined *)GEN_TOP(CONCAT31(extraout_var,bVar5)));
      if ((bVar5 == 0) && ((*(byte *)(iVar8 + 0x96) & 1) == 0)) {
        this_00 = (undefined *)*piVar9;
        if (this_00 != (undefined *)0x0) {
          F_009cfa70(this_00);
          this_01 = (undefined *)F_00406ad0(this_00);
          *piVar9 = 0;
        }
        piVar9[2] = -0x20000000;
        piVar9[3] = 0;
      }
      else {
        this_01 = (undefined *)piVar9[2];
        if (this_01 != (undefined *)0xe0000000) {
          this_01 = (undefined *)F_00a354d0(&REFG(undefined4, 0x14a31f0),this_01,piVar9[3]);
          if (this_01 != (undefined *)0x0) {
            puVar6 = (undefined4 *)F_00a5feb0(this_01);
            fVar2 = *(float *)((int)this_01 + 0xb0);
            (*(float *)(gen_frame + 0x50)) = fVar2;
            uVar1 = *(undefined4 *)((int)this_01 + 0xc0);
            (*(undefined4 *)(gen_frame + 0x160)) = uVar1;
            (*(undefined4 *)(gen_frame + 0x164)) = 0;
            (*(undefined4 *)(gen_frame + 0x168)) = 0;
            (*(undefined4 *)(gen_frame + 0x170)) = 0;
            (*(undefined4 *)(gen_frame + 0x174)) = REFG(float, 0x10928e4);
            (*(undefined4 *)(gen_frame + 0x178)) = 0;
            (*(undefined4 *)(gen_frame + 0x180)) = 0;
            (*(undefined4 *)(gen_frame + 0x184)) = 0;
            (*(undefined4 *)(gen_frame + 0x188)) = uVar1;
            (*(undefined4 *)(gen_frame + 0x190)) = 0;
            (*(undefined4 *)(gen_frame + 0x194)) = 0;
            (*(undefined4 *)(gen_frame + 0x198)) = 0;
            fVar11 = ((float10)GEN_TOD(fsin((float10)fVar2)));
            fVar3 = (float)fVar11;
            (*(float *)(gen_frame + 0x5c)) = fVar3;
            (*(undefined4 * PTR32 *)(gen_frame + 0x54)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)(fVar3)));
            fVar11 = ((float10)GEN_TOD(fcos((float10)fVar2)));
            fVar2 = (float)fVar11;
            (*(float *)(gen_frame + 0x5c)) = fVar2;
            ((float *)(gen_frame + 0x1a0))[1] = 0.0;
            ((float *)(gen_frame + 0x1a0))[0] = fVar2;
            (*(undefined4 *)(gen_frame + 0x1b0)) = 0;
            (*(undefined4 *)(gen_frame + 0x1b4)) = REFG(float, 0x1087f04);
            (*(undefined4 *)(gen_frame + 0x1b8)) = 0;
            (*(undefined4 *)(gen_frame + 0x1c4)) = 0;
            ((float *)(gen_frame + 0x1a0))[2] = ((float)GEN_TOF(-(float10)fVar3));
            (*(undefined4 *)(gen_frame + 0x1d0)) = 0;
            (*(undefined4 *)(gen_frame + 0x1d4)) = 0;
            (*(float *)(gen_frame + 0x1c0)) = fVar3;
            (*(undefined4 *)(gen_frame + 0x1d8)) = 0;
            (*(undefined4 *)(gen_frame + 0x120)) = REFG(float, 0x1087f04);
            (*(float *)(gen_frame + 0x1c8)) = fVar2;
            (*(undefined4 *)(gen_frame + 0x124)) = 0;
            (*(undefined4 *)(gen_frame + 0x128)) = 0;
            (*(undefined4 *)(gen_frame + 0x130)) = 0;
            (*(undefined4 *)(gen_frame + 0x134)) = REFG(float, 0x1087f04);
            (*(undefined4 *)(gen_frame + 0x138)) = 0;
            (*(undefined4 *)(gen_frame + 0x140)) = 0;
            (*(undefined4 *)(gen_frame + 0x144)) = 0;
            (*(undefined4 *)(gen_frame + 0x148)) = REFG(float, 0x1087f04);
            (*(undefined4 *)(gen_frame + 0x150)) = *puVar6;
            (*(undefined4 *)(gen_frame + 0x154)) = puVar6[1];
            (*(undefined4 *)(gen_frame + 0x158)) = puVar6[2];
            puVar6 = (undefined4 *)F_004ef350(((undefined1 *)(gen_frame + 0x60)),(uint)&(*(undefined4 *)(gen_frame + 0x160)),(uint)((float *)(gen_frame + 0x1a0)));
            puVar7 = ((undefined4 *)(gen_frame + 0xe0));
            for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
              *puVar7 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar7 = puVar7 + 1;
            }
            puVar7 = (undefined4 *)F_004ef350(((undefined1 *)(gen_frame + 0xa0)),(uint)((undefined4 *)(gen_frame + 0xe0)),(uint)&(*(undefined4 *)(gen_frame + 0x120)));
            puVar6 = (undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x58));
            puVar10 = ((undefined4 *)(gen_frame + 0x0));
            for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
              *puVar10 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar10 = puVar10 + 1;
            }
            puVar7 = ((undefined4 *)(gen_frame + 0x0));
            puVar10 = puVar6;
            for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
              *puVar10 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar10 = puVar10 + 1;
            }
            uVar1 = puVar6[0x14];
            uVar4 = puVar6[0x15];
            (*(undefined4 * PTR32 *)(gen_frame + 0x54)) = puVar6;
            if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
              *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
              F_00994de0(&REFG(float, 0x14a0d58));
              F_00c47de6(((code *)REFP(0x107c350)));
            }
            this_01 = (undefined *)F_009851b0(&REFG(float, 0x14a0d58),uVar1,uVar4,(*(undefined4 * PTR32 *)(gen_frame + 0x54)));
            piVar9 = (*(int * PTR32 *)(gen_frame + 0x58));
          }
        }
      }
    }
    piVar9 = piVar9 + 4;
    iVar8 = (*(int *)(gen_frame + 0x4c)) + -1;
    (*(int *)(gen_frame + 0x4c)) = iVar8;
    (*(int * PTR32 *)(gen_frame + 0x58)) = piVar9;
  } while (iVar8 != 0);
  F_00c47745((*(uint *)(gen_frame + 0x1ec)) ^ (uint)(uint)(gen_frame + 0x1f0));
  return (uint)this_01;
}

/* ref: FUN_009d53c0 */
unsigned int F_009d53c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9d53c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if ((char)param_1 != '\0') {
    *(byte *)((int)this + 0xb0) = *(byte *)((int)this + 0xb0) | 1;
    F_009d4fd0(this);
    return 0;
  }
  *(byte *)((int)this + 0xb0) = *(byte *)((int)this + 0xb0) & 0xfe;
  return 0;
}

/* ref: FUN_009d53f0 */
unsigned int F_009d53f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9d53f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if ((char)param_1 != '\0') {
    *(byte *)((int)this + 0xb0) = *(byte *)((int)this + 0xb0) | 2;
    F_009d4fd0(this);
    return 0;
  }
  *(byte *)((int)this + 0xb0) = *(byte *)((int)this + 0xb0) & 0xfd;
  return 0;
}

/* ref: FUN_009d5420 */
uint F_009d5420(unsigned int gen_a0)
{
  GEN_ENTER(0x9d5420u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  uint uVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if (REFG(undefined * PTR32, 0x14a0a14) != (code *)0x0) {
    pvVar1 = ((undefined *)GEN_TOP(((code *)REFG(gen_code32, 0x14a0a14))(0x44,0x10,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0)));
    if (pvVar1 != (undefined *)0x0) {
      pvVar1 = (undefined *)F_009d2b50(pvVar1);
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar1;
      uVar2 = F_009ee980((undefined *)((int)this + 0x34),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
      return uVar2;
    }
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  uVar2 = F_009ee980((undefined *)((int)this + 0x34),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  return uVar2;
}

/* ref: FUN_009d5480 */
uint F_009d5480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9d5480u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  undefined4 * puVar1;
  uint uVar2;
  
  if (REFG(undefined * PTR32, 0x14a0a14) != (code *)0x0) {
    puVar1 = ((undefined4 *)GEN_TOP(((code *)REFG(gen_code32, 0x14a0a14))(0x30,0x10,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0)));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = (*(undefined * PTR32 (*)[7])REFP(0x10e048c));
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
      puVar1[9] = (*(undefined4 * PTR32 *)&gen_args[1]);
      puVar1[10] = (*(undefined4 *)&gen_args[2]);
      puVar1[0xb] = (*(undefined4 *)&gen_args[3]);
      (*(undefined4 * PTR32 *)&gen_args[1]) = puVar1;
      uVar2 = F_009ee9f0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))),&(*(undefined4 * PTR32 *)&gen_args[1]));
      return uVar2;
    }
  }
  (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)0x0;
  uVar2 = F_009ee9f0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))),&(*(undefined4 * PTR32 *)&gen_args[1]));
  return uVar2;
}

/* ref: FUN_009d5500 */
uint F_009d5500(unsigned int gen_a0)
{
  GEN_ENTER(0x9d5500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * pcVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[38])REFP(0x10e0604));
  F_009866c0((undefined *)((int)this + 0x1a80));
  F_00986480((undefined *)((int)this + 0x1738));
  F_00986850((undefined *)((int)this + 0x1478));
  F_00986240((undefined *)((int)this + 0x1130));
  F_00985fa0((undefined *)((int)this + 0xd70));
  pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  *(undefined * PTR32 * PTR32 *)((int)this + 0xd68) = (*(undefined * PTR32 (*)[1])REFP(0x10dd36c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xce0) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xd20) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0xd24) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0xd24));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0xd20) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xce8) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0xcec) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0xcec));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0xce8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xce0) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc58) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc98) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0xc9c) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0xc9c));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc98) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc60) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0xc64) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0xc64));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc60) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc58) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xbd0) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc10) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0xc14) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0xc14));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc10) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xbd8) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0xbdc) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0xbdc));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0xbd8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xbd0) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xb48) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xb88) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0xb8c) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0xb8c));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0xb88) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xb50) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0xb54) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0xb54));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0xb50) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xb48) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xac0) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xb00) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0xb04) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0xb04));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0xb00) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xac8) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0xacc) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0xacc));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0xac8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xac0) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa38) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa78) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0xa7c) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0xa7c));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa78) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa40) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0xa44) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0xa44));
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa40) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa38) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  F_00986ad0((undefined *)((int)this + 0x8d8));
  F_00986ad0((undefined *)((int)this + 0x778));
  F_00986ad0((undefined *)((int)this + 0x618));
  F_009d2ce0((undefined *)((int)this + 0x380));
  pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2f8) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x338) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x33c) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x33c));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x338) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x300) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x304) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x304));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x300) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2f8) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x270) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2b0) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x2b4) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x2b4));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2b0) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x278) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x27c) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x27c));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x278) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x270) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1e8) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x228) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x22c) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x22c));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x228) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1f0) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 500) != 0)) {
    (*pcVar1)(*(int *)((int)this + 500));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1f0) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1e8) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x160) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1a0) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x1a4) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x1a4));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1a0) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x168) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x16c) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x16c));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x168) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x160) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x14c) = (*(undefined * PTR32 (*)[4])REFP(0x10dd358));
  if ((*(int *)((int)this + 0x13c) != 0) && (pcVar1 != (code *)0x0)) {
    (*pcVar1)(*(int *)((int)this + 0x13c));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x144) = 0;
  if ((*(int *)((int)this + 300) != 0) && (pcVar1 != (code *)0x0)) {
    (*pcVar1)(*(int *)((int)this + 300));
  }
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[38])REFP(0x10dd44c));
  return 0;
}

/* ref: FUN_009d59a0 */
uint F_009d59a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9d59a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * pcVar1;
  int iVar2;
  undefined * this_00;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[64])REFP(0x10e06a4));
  F_009c08a0((undefined *)((int)this + 0x4330));
  F_009c0840((undefined *)((int)this + 0x42c8));
  F_009c07d0((undefined *)((int)this + 0x4270));
  F_009c0770((undefined *)((int)this + 0x4210));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x41e0) =
       (*(undefined * PTR32 (*)[12])REFP(0x10dfd9c));
  if ((*(int *)((int)this + 0x4200) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(*(int *)((int)this + 0x4200));
  }
  *(undefined4 *)((int)this + 0x4200) = 0;
  *(undefined4 *)((int)this + 0x4204) = 0;
  *(undefined4 *)((int)this + 0x4208) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x41e0) =
       (*(undefined * PTR32 (*)[11])REFP(0x10dd6b8));
  F_009c0690((undefined *)((int)this + 0x4128));
  this_00 = (undefined *)((int)this + 0x4128);
  iVar2 = 3;
  do {
    this_00 = (undefined *)((int)this_00 + -0x270);
    F_00987260(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  F_009d33f0((undefined *)((int)this + 0x2d58));
  F_0097a9e0((undefined *)((int)this + 0x2cc0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2cb8) = (*(undefined * PTR32 (*)[2])REFP(0x10dd5f4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2cb0) =
       (*(undefined * PTR32 (*)[2])REFP(0x10dd5e8));
  F_009d2ff0((undefined *)((int)this + 0x2500));
  F_009d30f0((undefined *)((int)this + 0x1160));
  F_0097a850((undefined *)((int)this + 0x1048));
  F_0097a930((undefined *)((int)this + 0xfb8));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xfb0) = (*(undefined * PTR32 (*)[1])REFP(0x10dd520));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xfa8) = (*(undefined * PTR32 (*)[2])REFP(0x10dd514))
  ;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xf98) = (*(undefined * PTR32 (*)[4])REFP(0x10dd500));
  F_009d2f70((undefined *)((int)this + 0x9d8));
  pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x950) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x990) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x994) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x994));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x990) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x958) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x95c) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x95c));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x958) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x950) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x8c8) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x908) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x90c) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x90c));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x908) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x8d0) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x8d4) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x8d4));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x8d0) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x8c8) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x840) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x880) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x884) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x884));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x880) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x848) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x84c) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x84c));
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x848) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x840) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  F_00986ad0((undefined *)((int)this + 0x6e0));
  F_00986ad0((undefined *)((int)this + 0x580));
  F_00986ad0((undefined *)((int)this + 0x420));
  F_009d2ce0((undefined *)((int)this + 0x188));
  pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x100) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x140) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x144) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x144));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x140) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x108) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x10c) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x10c));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x108) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x100) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x78) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xb8) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0xbc) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0xbc));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0xb8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x80) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x84) != 0)) {
    pcVar1 = ((code *)GEN_TOP((*pcVar1)(*(int *)((int)this + 0x84))));
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x80) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x78) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x68) = (*(undefined * PTR32 (*)[4])REFP(0x10dd358));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[63])REFP(0x10dd77c));
  return (uint)pcVar1;
}

/* ref: FUN_009d5ce0 */
uint F_009d5ce0(unsigned int gen_a0)
{
  GEN_ENTER(0x9d5ce0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * pcVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10e07a8));
  F_00986ad0((undefined *)((int)this + 0x5c0));
  pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x538) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x578) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x57c) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x57c));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x578) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x540) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x544) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x544));
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x540) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x538) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  F_009d2ce0((undefined *)((int)this + 0x2a0));
  uVar2 = F_009d2ce0((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10dd8b0));
  return uVar2;
}

/* ref: FUN_009d5d80 */
uint F_009d5d80(unsigned int gen_a0)
{
  GEN_ENTER(0x9d5d80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * pcVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[12])REFP(0x10e07c0));
  F_00986ad0((undefined *)((int)this + 0x438));
  F_00986ad0((undefined *)((int)this + 0x2d8));
  pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2a0) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x2a4) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x2a4));
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2a0) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  uVar2 = F_009d2ce0((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[12])REFP(0x10dd87c));
  return uVar2;
}

/* ref: FUN_009d5de0 */
unsigned int F_009d5de0(unsigned int gen_a0)
{
  GEN_ENTER(0x9d5de0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10e04e8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[2])REFP(0x10e04ac));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(gen_code32 *)((int)this + 0x40) = ((code *)REFP(0x979f10));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x30) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  *(gen_code32 *)((int)this + 0x48) = ((code *)REFP(0x979ff0));
  *(gen_code32 *)((int)this + 0x50) = ((code *)REFP(0x97a060));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x68) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(gen_code32 *)((int)this + 0x78) = ((code *)REFP(0x979f10));
  *(gen_code32 *)((int)this + 0x80) = ((code *)REFP(0x979ff0));
  *(gen_code32 *)((int)this + 0x88) = ((code *)REFP(0x97a060));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa0) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(gen_code32 *)((int)this + 0xb0) = ((code *)REFP(0x979f10));
  *(gen_code32 *)((int)this + 0xb8) = ((code *)REFP(0x979ff0));
  *(gen_code32 *)((int)this + 0xc0) = ((code *)REFP(0x97a060));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xd8) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(gen_code32 *)((int)this + 0xe8) = ((code *)REFP(0x979f10));
  *(gen_code32 *)((int)this + 0xf0) = ((code *)REFP(0x979ff0));
  *(gen_code32 *)((int)this + 0xf8) = ((code *)REFP(0x97a060));
  *(gen_code32 *)((int)this + 0x120) = ((code *)REFP(0x979f10));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x110) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(gen_code32 *)((int)this + 0x128) = ((code *)REFP(0x979ff0));
  *(gen_code32 *)((int)this + 0x130) = ((code *)REFP(0x97a060));
  *(gen_code32 *)((int)this + 0x158) = ((code *)REFP(0x979f10));
  *(gen_code32 *)((int)this + 0x160) = ((code *)REFP(0x979ff0));
  *(gen_code32 *)((int)this + 0x168) = ((code *)REFP(0x97a060));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x148) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  *(undefined4 *)((int)this + 0x14c) = 0;
  *(undefined4 *)((int)this + 0x15c) = 0;
  *(undefined4 *)((int)this + 0x164) = 0;
  *(undefined4 *)((int)this + 0x16c) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x180) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  *(undefined4 *)((int)this + 0x184) = 0;
  *(gen_code32 *)((int)this + 400) = ((code *)REFP(0x979f10));
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(gen_code32 *)((int)this + 0x198) = ((code *)REFP(0x979ff0));
  *(gen_code32 *)((int)this + 0x1a0) = ((code *)REFP(0x97a060));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1b8) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  *(undefined4 *)((int)this + 0x1bc) = 0;
  *(undefined4 *)((int)this + 0x1cc) = 0;
  *(undefined4 *)((int)this + 0x1d4) = 0;
  *(undefined4 *)((int)this + 0x1dc) = 0;
  *(gen_code32 *)((int)this + 0x1c8) = ((code *)REFP(0x979f10));
  *(gen_code32 *)((int)this + 0x1d0) = ((code *)REFP(0x979ff0));
  *(gen_code32 *)((int)this + 0x1d8) = ((code *)REFP(0x97a060));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1f0) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  *(undefined4 *)((int)this + 500) = 0;
  *(undefined4 *)((int)this + 0x204) = 0;
  *(undefined4 *)((int)this + 0x20c) = 0;
  *(undefined4 *)((int)this + 0x214) = 0;
  *(gen_code32 *)((int)this + 0x200) = ((code *)REFP(0x979f10));
  *(gen_code32 *)((int)this + 0x208) = ((code *)REFP(0x979ff0));
  *(gen_code32 *)((int)this + 0x210) = ((code *)REFP(0x97a060));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x228) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  *(gen_code32 *)((int)this + 0x238) = ((code *)REFP(0x979f10));
  *(undefined4 *)((int)this + 0x22c) = 0;
  *(undefined4 *)((int)this + 0x23c) = 0;
  *(undefined4 *)((int)this + 0x244) = 0;
  *(undefined4 *)((int)this + 0x24c) = 0;
  *(gen_code32 *)((int)this + 0x240) = ((code *)REFP(0x979ff0));
  *(gen_code32 *)((int)this + 0x248) = ((code *)REFP(0x97a060));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x260) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  *(gen_code32 *)((int)this + 0x270) = ((code *)REFP(0x979f10));
  *(gen_code32 *)((int)this + 0x278) = ((code *)REFP(0x979ff0));
  *(undefined4 *)((int)this + 0x264) = 0;
  *(undefined4 *)((int)this + 0x274) = 0;
  *(undefined4 *)((int)this + 0x27c) = 0;
  *(gen_code32 *)((int)this + 0x280) = ((code *)REFP(0x97a060));
  *(undefined4 *)((int)this + 0x284) = 0;
  return 0;
}

/* ref: FUN_009d60a0 */
uint F_009d60a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9d60a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10e0500));
  *(undefined4 *)((int)this + 4) = 0;
  F_00987100((undefined *)((int)this + 8));
  F_009d5de0((undefined *)((int)this + 0x90));
  F_009d5de0((undefined *)((int)this + 0x328));
  return (uint)this;
}

/* ref: FUN_009d60e0 */
uint F_009d60e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9d60e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[14])REFP(0x10e0518));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  F_00987100((undefined *)((int)this + 0x28));
  F_00995cb0((undefined *)((int)this + 0xb0));
  F_009d5de0((undefined *)((int)this + 0x210));
  F_009d5de0((undefined *)((int)this + 0x4a8));
  *(gen_code32 *)((int)this + 0x750) = ((code *)REFP(0x979f10));
  *(undefined4 *)((int)this + 0x744) = 0;
  *(gen_code32 *)((int)this + 0x758) = ((code *)REFP(0x979ff0));
  *(undefined4 *)((int)this + 0x754) = 0;
  *(undefined4 *)((int)this + 0x75c) = 0;
  *(undefined4 *)((int)this + 0x764) = 0;
  *(gen_code32 *)((int)this + 0x760) = ((code *)REFP(0x97a060));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x740) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  *(gen_code32 *)((int)this + 0x788) = ((code *)REFP(0x979f10));
  *(gen_code32 *)((int)this + 0x790) = ((code *)REFP(0x979ff0));
  *(undefined4 *)((int)this + 0x77c) = 0;
  *(undefined4 *)((int)this + 0x79c) = 0;
  *(gen_code32 *)((int)this + 0x798) = ((code *)REFP(0x97a060));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x778) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  *(undefined4 *)((int)this + 0x78c) = 0;
  *(undefined4 *)((int)this + 0x794) = 0;
  return (uint)this;
}

/* ref: FUN_009d61b0 */
uint F_009d61b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9d61b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[25])REFP(0x10e0554));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined1 *)((int)this + 0x18) = 0;
  F_00987100((undefined *)((int)this + 0x20));
  F_00987100((undefined *)((int)this + 0xa8));
  F_00987100((undefined *)((int)this + 0x130));
  F_00987100((undefined *)((int)this + 0x1b8));
  F_00987100((undefined *)((int)this + 0x240));
  F_00987100((undefined *)((int)this + 0x2c8));
  F_00987100((undefined *)((int)this + 0x350));
  *(gen_code32 *)((int)this + 1000) = ((code *)REFP(0x979f10));
  *(gen_code32 *)((int)this + 0x3f0) = ((code *)REFP(0x979ff0));
  *(undefined4 *)((int)this + 0x3ec) = 0;
  *(undefined4 *)((int)this + 0x3f4) = 0;
  *(undefined4 *)((int)this + 0x3fc) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x3d8) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  *(undefined4 *)((int)this + 0x3dc) = 0;
  *(gen_code32 *)((int)this + 0x3f8) = ((code *)REFP(0x97a060));
  F_009d5de0((undefined *)((int)this + 0x410));
  F_009d5de0((undefined *)((int)this + 0x6a8));
  F_009d5de0((undefined *)((int)this + 0x940));
  F_009d5de0((undefined *)((int)this + 0xbd8));
  F_009d5de0((undefined *)((int)this + 0xe70));
  F_009d5de0((undefined *)((int)this + 0x1108));
  return (uint)this;
}

/* ref: FUN_009d62a0 */
uint F_009d62a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9d62a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10e05bc));
  F_00987100((undefined *)((int)this + 0x18));
  F_00987100((undefined *)((int)this + 0xa0));
  F_00987100((undefined *)((int)this + 0x128));
  F_00987100((undefined *)((int)this + 0x1b0));
  F_00987100((undefined *)((int)this + 0x238));
  F_00987100((undefined *)((int)this + 0x2c0));
  F_00987100((undefined *)((int)this + 0x348));
  F_00987100((undefined *)((int)this + 0x3d0));
  F_00987100((undefined *)((int)this + 0x458));
  F_009d5de0((undefined *)((int)this + 0x4e0));
  F_009d5de0((undefined *)((int)this + 0x778));
  return (uint)this;
}

/* ref: FUN_009d6330 */
uint F_009d6330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x9d6330u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int in_ecx = (int)gen_a0;
  undefined4 in_ebx = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  float param_4 = (float)gen_a3;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  float fVar5;
  
  uVar2 = param_3;
  bVar1 = *(byte *)param_3 >> 1 & 1;
  if (bVar1 == 0) {
    param_3 = (uint)gen_fl2bits(((float)GEN_TOF(((int)*(short *)(param_3 + 8) - (int)*(short *)(param_3 + 6))))
                               );
  }
  else {
    param_3 = (uint)gen_fl2bits(REFG(float, 0x1090708));
  }
  if (-1 < *(char *)(uVar2 + 2)) {
    uVar2 = F_009c3430(in_ecx,in_ebx,uVar2,param_4,GEN_TOF(gen_bits2f(param_3)));
    return uVar2;
  }
  if (*(char *)(uVar2 + 1) < '\0') {
    uVar2 = F_009b0fa0(in_ecx,uVar2,param_4,GEN_TOF(gen_bits2f(param_3)));
    return uVar2;
  }
  fVar5 = REFG(float, 0x1090708);
  if (bVar1 == 0) {
    fVar5 = ((float)GEN_TOF(((int)*(short *)(uVar2 + 8) - (int)*(short *)(uVar2 + 6))));
  }
  if (-1 < *(char *)(uVar2 + 3)) {
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(in_ecx + 0x1dc) + 0x24))))
                              (*(int * PTR32 *)(in_ecx + 0x1dc),(int)*(char *)(uVar2 + 3))));
    if (*((int *)GEN_TOP((*(int *)(in_ecx + 0x1d4) + 0x270))) == 0) {
      uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3);
      if (uVar4 != 3) {
        uVar2 = F_009c9320(in_ecx,uVar2,param_4,fVar5);
        return uVar2;
      }
    }
    uVar2 = F_009d3f70(in_ecx,uVar2,param_4,fVar5,piVar3);
    return uVar2;
  }
  uVar2 = F_009c9320(in_ecx,uVar2,param_4,fVar5);
  return uVar2;
}

/* ref: FUN_009d6470 */
unsigned int F_009d6470(void)
{
  GEN_ENTER(0x9d6470u, 0u, 0u, 0u, 0u);
  int iVar1;
  int * piVar2;
  
  REFG(undefined1, 0x14a06d4) = 1;
  if (REFG(char, 0x14a06d5) != '\0') {
    if (REFG(undefined4 * PTR32, 0x1487c90) != (undefined4 *)0x0) {
      F_009d4fd0(REFG(undefined4 * PTR32, 0x1487c90));
    }
    F_009cfbc0();
    piVar2 = &REFG(undefined4, 0x14a0720);
    do {
      iVar1 = *piVar2;
      if (iVar1 != 0) {
        LOCK();
        *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + -1;
        UNLOCK();
        F_0050c620(*(undefined4 *)(iVar1 + 100),0,0);
        *piVar2 = 0;
      }
      piVar2 = piVar2 + 1;
    } while ((int)piVar2 < 0x14a09a0);
    F_00984ab0();
    if (REFG(undefined4 * PTR32, 0x1487c90) != (undefined4 *)0x0) {
      ((code *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x1487c90))))(REFG(undefined4 * PTR32, 0x1487c90),1);
      REFG(undefined4 * PTR32, 0x1487c90) = (undefined4 *)0x0;
    }
    if (REFG(undefined4 * PTR32, 0x14a0d28) != (undefined4 *)0x0) {
      F_00994410(REFG(undefined4 * PTR32, 0x14a0d28));
      if (REFG(undefined4 * PTR32, 0x14a0d28) != (undefined4 *)0x0) {
        ((code *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x14a0d28))))(REFG(undefined4 * PTR32, 0x14a0d28),1);
        REFG(undefined4 * PTR32, 0x14a0d28) = (undefined4 *)0x0;
      }
    }
    if (REFG(undefined4 * PTR32, 0x1487c8c) != (undefined4 *)0x0) {
      F_00993fa0(REFG(undefined4 * PTR32, 0x1487c8c));
      if (REFG(undefined4 * PTR32, 0x1487c8c) != (undefined4 *)0x0) {
        ((code *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x1487c8c))))(REFG(undefined4 * PTR32, 0x1487c8c),1);
        REFG(undefined4 * PTR32, 0x1487c8c) = (undefined4 *)0x0;
      }
    }
  }
  return 0;
}

/* ref: FUN_009d6550 */
unsigned int F_009d6550(void)
{
  GEN_ENTER(0x9d6550u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x90];
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  if (REFG(char, 0x14a06d5) != '\0') {
    F_009d5090(REFG(void * PTR32, 0x1487c90));
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58));
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    iVar2 = *(int *)(REFG(int, 0x137127c) + 0x66f4);
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    (*(undefined4 *)(gen_frame + 0x40)) = *(undefined4 *)(iVar2 + 0x10);
    (*(undefined4 *)(gen_frame + 0x44)) = *(undefined4 *)(iVar2 + 0x14);
    (*(undefined4 *)(gen_frame + 0x48)) = *(undefined4 *)(iVar2 + 0x18);
    (*(undefined4 *)(gen_frame + 0x50)) = uVar1;
    (*(undefined4 *)(gen_frame + 0x4c)) = 0;
    (*(undefined4 *)(gen_frame + 0x54)) = *(undefined4 *)(iVar2 + 0x24);
    (*(undefined4 *)(gen_frame + 0x5c)) = 0;
    (*(undefined4 *)(gen_frame + 0x6c)) = 0;
    (*(undefined4 *)(gen_frame + 0x58)) = *(undefined4 *)(iVar2 + 0x28);
    (*(undefined4 *)(gen_frame + 0x70)) = *(undefined4 *)(iVar2 + 0x40);
    (*(undefined4 *)(gen_frame + 0x60)) = *(undefined4 *)(iVar2 + 0x30);
    (*(undefined4 *)(gen_frame + 0x74)) = *(undefined4 *)(iVar2 + 0x44);
    (*(undefined4 *)(gen_frame + 0x64)) = *(undefined4 *)(iVar2 + 0x34);
    (*(undefined4 *)(gen_frame + 0x78)) = *(undefined4 *)(iVar2 + 0x48);
    (*(undefined4 *)(gen_frame + 0x68)) = *(undefined4 *)(iVar2 + 0x38);
    (*(undefined4 *)(gen_frame + 0x7c)) = REFG(float, 0x1087f04);
    puVar4 = (undefined4 *)(iVar2 + 0x50);
    puVar5 = ((undefined4 *)(gen_frame + 0x0));
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58));
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    F_00994ed0(&REFG(float, 0x14a0d58),&(*(undefined4 *)(gen_frame + 0x40)),((undefined4 *)(gen_frame + 0x0)));
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58));
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    F_00978ae0(&REFG(float, 0x14a0d58));
  }
  return 0;
}

/* ref: Apricot::ApricotListenner::vf30 */
uint F_009d66e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9d66e0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  
  if ((*(int *)&gen_args[1]) == 0) {
    (*(int *)&gen_args[1]) = 0;
  }
  else {
    (*(int *)&gen_args[1]) = (*(int *)&gen_args[1]) + -0x90;
  }
  F_00625bc0((*(int *)&gen_args[1]),0);
  uVar1 = F_009ef2d0((*(undefined * PTR32 *)&gen_args[0]) + 0xec,&(*(int *)&gen_args[1]));
  return uVar1;
}

/* ref: FUN_009d6720 */
uint F_009d6720(unsigned int gen_a0)
{
  GEN_ENTER(0x9d6720u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x10e07f4));
  F_00995890((undefined *)((int)this + 0x1380));
  F_00995690((undefined *)((int)this + 0xe10));
  F_00985ee0((undefined *)((int)this + 0xce8));
  F_009d5ce0((undefined *)((int)this + 0x5c8));
  uVar1 = F_009d5d80((undefined *)((int)this + 0x20));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x10dd92c));
  return uVar1;
}

/* ref: FUN_009d6770 */
uint F_009d6770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x9d6770u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  undefined4 param_9 = (undefined4)gen_a9;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 0xc) = param_3;
  *(undefined4 *)((int)this + 0x14) = param_5;
  *(undefined4 *)((int)this + 0x10) = param_4;
  *(undefined4 *)((int)this + 0x18) = param_6;
  *(undefined4 *)((int)this + 0x20) = param_8;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[38])REFP(0x10e0604));
  *(undefined4 *)((int)this + 0x1c) = param_7;
  *(undefined1 *)((int)this + 0x24) = (undefined1)param_9;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x144) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x14c) = (*(undefined * PTR32 (*)[4])REFP(0x10de914));
  *(undefined4 *)((int)this + 0x150) = 0;
  *(undefined4 *)((int)this + 0x154) = 0;
  *(undefined4 *)((int)this + 0x158) = 0;
  F_00987100((undefined *)((int)this + 0x160));
  F_00987100((undefined *)((int)this + 0x1e8));
  F_00987100((undefined *)((int)this + 0x270));
  F_00987100((undefined *)((int)this + 0x2f8));
  F_009d5de0((undefined *)((int)this + 0x380));
  F_00995cb0((undefined *)((int)this + 0x618));
  F_00995cb0((undefined *)((int)this + 0x778));
  F_00995cb0((undefined *)((int)this + 0x8d8));
  F_00987100((undefined *)((int)this + 0xa38));
  F_00987100((undefined *)((int)this + 0xac0));
  F_00987100((undefined *)((int)this + 0xb48));
  F_00987100((undefined *)((int)this + 0xbd0));
  F_00987100((undefined *)((int)this + 0xc58));
  F_00987100((undefined *)((int)this + 0xce0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xd68) = (*(undefined * PTR32 (*)[1])REFP(0x10de87c));
  F_009959d0((undefined *)((int)this + 0xd70));
  F_00995a30((undefined *)((int)this + 0x1130));
  F_00995b60((undefined *)((int)this + 0x1478));
  F_00995aa0((undefined *)((int)this + 0x1738));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1a80) = (*(undefined * PTR32 (*)[8])REFP(0x10de858));
  *(undefined4 *)((int)this + 0x1a84) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1a88) = 2;
  *(undefined4 *)((int)this + 0x1a8c) = 0;
  F_00987100((undefined *)((int)this + 0x1a90));
  F_00987100((undefined *)((int)this + 0x1b18));
  F_00987100((undefined *)((int)this + 0x1ba0));
  F_00987100((undefined *)((int)this + 0x1c28));
  F_00c48350((undefined *)((int)this + 0x25),0,0x100);
  *(undefined4 *)((int)this + 0x128) = 0;
  return (uint)this;
}

/* ref: FUN_009d6940 */
uint F_009d6940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12, unsigned int gen_a13, unsigned int gen_a14, unsigned int gen_a15, unsigned int gen_a16, unsigned int gen_a17)
{
  GEN_ENTER(0x9d6940u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  undefined4 param_9 = (undefined4)gen_a9;
  undefined4 param_10 = (undefined4)gen_a10;
  undefined4 param_11 = (undefined4)gen_a11;
  undefined4 param_12 = (undefined4)gen_a12;
  undefined4 param_13 = (undefined4)gen_a13;
  undefined4 param_14 = (undefined4)gen_a14;
  undefined4 param_15 = (undefined4)gen_a15;
  undefined4 param_16 = (undefined4)gen_a16;
  undefined4 param_17 = (undefined4)gen_a17;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  *(int *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(undefined4 *)((int)this + 0x10) = param_3;
  *(undefined4 *)((int)this + 0x14) = param_4;
  *(undefined4 *)((int)this + 0x18) = param_5;
  *(undefined4 *)((int)this + 0x1c) = param_6;
  *(undefined4 *)((int)this + 0x20) = param_11;
  *(undefined4 *)((int)this + 0x24) = param_13;
  *(undefined4 *)((int)this + 0x28) = param_7;
  *(undefined1 *)((int)this + 0x35) = (undefined1)param_16;
  *(undefined4 *)((int)this + 0x4c) = param_8;
  *(undefined4 *)((int)this + 0x50) = param_9;
  *(undefined4 *)((int)this + 0x54) = param_10;
  *(undefined4 *)((int)this + 0x58) = param_12;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[64])REFP(0x10e06a4));
  *(undefined4 *)((int)this + 0x5c) = param_14;
  *(undefined4 *)((int)this + 0x60) = param_15;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x68) = (*(undefined * PTR32 (*)[4])REFP(0x10de914));
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  F_00987100((undefined *)((int)this + 0x78));
  F_00987100((undefined *)((int)this + 0x100));
  F_009d5de0((undefined *)((int)this + 0x188));
  F_00995cb0((undefined *)((int)this + 0x420));
  F_00995cb0((undefined *)((int)this + 0x580));
  F_00995cb0((undefined *)((int)this + 0x6e0));
  F_00987100((undefined *)((int)this + 0x840));
  F_00987100((undefined *)((int)this + 0x8c8));
  F_00987100((undefined *)((int)this + 0x950));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x9d8) = (*(undefined * PTR32 (*)[5])REFP(0x10e0500));
  *(undefined4 *)((int)this + 0x9dc) = 0;
  F_00987100((undefined *)((int)this + 0x9e0));
  F_009d5de0((undefined *)((int)this + 0xa68));
  F_009d5de0((undefined *)((int)this + 0xd00));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xf98) = (*(undefined * PTR32 (*)[4])REFP(0x10de94c))
  ;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xfa8) =
       (*(undefined * PTR32 (*)[2])REFP(0x10de960));
  *(undefined4 *)((int)this + 0xfac) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xfb0) = (*(undefined * PTR32 (*)[1])REFP(0x10de96c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xfb8) =
       (*(undefined * PTR32 (*)[2])REFP(0x10ddac4));
  F_00987100((undefined *)((int)this + 0xfc0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1048) = (*(undefined * PTR32 (*)[3])REFP(0x10ddab4))
  ;
  F_00987100((undefined *)((int)this + 0x1050));
  F_00987100((undefined *)((int)this + 0x10d8));
  F_009d61b0((undefined *)((int)this + 0x1160));
  F_009d60e0((undefined *)((int)this + 0x2500));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2cb0) =
       (*(undefined * PTR32 (*)[2])REFP(0x10de940));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2cb8) = (*(undefined * PTR32 (*)[2])REFP(0x10de974))
  ;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2cc0) =
       (*(undefined * PTR32 (*)[4])REFP(0x10ddad0));
  F_00987100((undefined *)((int)this + 0x2cc8));
  F_009d62a0((undefined *)((int)this + 0x2d58));
  puVar1 = (undefined4 *)((int)this + 0x3768);
  param_1 = 3;
  puVar2 = (undefined4 *)((int)this + 0x3968);
  do {
    *puVar1 = (*(undefined * PTR32 (*)[5])REFP(0x10de928));
    F_00995bc0(puVar2 + -0x7e);
    F_00995bc0(puVar2 + -0x42);
    puVar2[-6] = (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
    *puVar2 = ((code *)REFP(0x979f10));
    puVar2[1] = 0;
    puVar1 = puVar1 + 0x9c;
    puVar2[2] = ((code *)REFP(0x979ff0));
    puVar2[3] = 0;
    puVar2[-3] = 0;
    puVar2[4] = ((code *)REFP(0x97a060));
    puVar2[5] = 0;
    puVar2[-4] = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
    puVar2[0xe] = ((code *)REFP(0x979f10));
    puVar2[0xf] = 0;
    puVar2[0x10] = ((code *)REFP(0x979ff0));
    puVar2[0x11] = 0;
    puVar2[0x12] = ((code *)REFP(0x97a060));
    puVar2[10] = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
    puVar2[0xb] = 0;
    puVar2[0x13] = 0;
    puVar2 = puVar2 + 0x9c;
    param_1 = param_1 + -1;
  } while (-1 < param_1);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x4128) =
       (*(undefined * PTR32 (*)[13])REFP(0x10dfd64));
  F_00987100((undefined *)((int)this + 0x4148));
  *(undefined4 *)((int)this + 0x41d0) = 0;
  *(undefined4 *)((int)this + 0x41d4) = 0;
  *(undefined4 *)((int)this + 0x41d8) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x41e0) =
       (*(undefined * PTR32 (*)[12])REFP(0x10dfd9c));
  *(undefined4 *)((int)this + 0x4200) = 0;
  *(undefined4 *)((int)this + 0x4204) = 0;
  *(undefined4 *)((int)this + 0x4208) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x4210) =
       (*(undefined * PTR32 (*)[8])REFP(0x10dfdd0));
  *(undefined4 *)((int)this + 0x422c) = 0;
  *(undefined4 *)((int)this + 0x423c) = 0;
  *(undefined4 *)((int)this + 0x4244) = 0;
  *(undefined4 *)((int)this + 0x424c) = 0;
  *(gen_code32 *)((int)this + 0x4238) = ((code *)REFP(0x979f10));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x4228) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c))
  ;
  *(gen_code32 *)((int)this + 0x4240) = ((code *)REFP(0x979ff0));
  *(gen_code32 *)((int)this + 0x4248) = ((code *)REFP(0x97a060));
  *(undefined4 *)((int)this + 0x4260) = 0;
  *(undefined4 *)((int)this + 0x4264) = 0;
  *(undefined4 *)((int)this + 17000) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x4270) =
       (*(undefined * PTR32 (*)[7])REFP(0x10dfdf4));
  *(undefined4 *)((int)this + 0x4280) = 0;
  *(undefined4 *)((int)this + 0x4284) = 0;
  *(undefined4 *)((int)this + 0x4288) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x4290) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c))
  ;
  *(undefined4 *)((int)this + 0x4294) = 0;
  *(undefined4 *)((int)this + 0x42a4) = 0;
  *(undefined4 *)((int)this + 0x42ac) = 0;
  *(undefined4 *)((int)this + 0x42b4) = 0;
  *(gen_code32 *)((int)this + 0x42a0) = ((code *)REFP(0x979f10));
  *(gen_code32 *)((int)this + 0x42a8) = ((code *)REFP(0x979ff0));
  *(gen_code32 *)((int)this + 0x42b0) = ((code *)REFP(0x97a060));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x42c8) =
       (*(undefined * PTR32 (*)[12])REFP(0x10dfe14));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x42e8) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c))
  ;
  *(undefined4 *)((int)this + 0x42ec) = 0;
  *(undefined4 *)((int)this + 0x42fc) = 0;
  *(undefined4 *)((int)this + 0x4304) = 0;
  *(undefined4 *)((int)this + 0x430c) = 0;
  *(gen_code32 *)((int)this + 0x42f8) = ((code *)REFP(0x979f10));
  *(gen_code32 *)((int)this + 0x4300) = ((code *)REFP(0x979ff0));
  *(gen_code32 *)((int)this + 0x4308) = ((code *)REFP(0x97a060));
  *(undefined4 *)((int)this + 0x4320) = 0;
  *(undefined4 *)((int)this + 0x4324) = 0;
  *(undefined4 *)((int)this + 0x4328) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x4330) =
       (*(undefined * PTR32 (*)[5])REFP(0x10dfe48));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x4340) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c))
  ;
  *(gen_code32 *)((int)this + 0x4350) = ((code *)REFP(0x979f10));
  *(undefined4 *)((int)this + 0x4344) = 0;
  *(undefined4 *)((int)this + 0x4354) = 0;
  *(undefined4 *)((int)this + 0x435c) = 0;
  *(undefined4 *)((int)this + 0x4364) = 0;
  *(gen_code32 *)((int)this + 0x4358) = ((code *)REFP(0x979ff0));
  *(gen_code32 *)((int)this + 0x4360) = ((code *)REFP(0x97a060));
  *(undefined4 *)((int)this + 0x4378) = 0;
  *(undefined4 *)((int)this + 0x437c) = 0;
  *(undefined4 *)((int)this + 0x4380) = 0;
  *(undefined4 *)((int)this + 0x4388) = param_17;
  *(undefined4 *)((int)this + 0x445c) = 0;
  *(undefined4 *)((int)this + 0x4460) = 0;
  *(undefined4 *)((int)this + 0x4464) = 0;
  return (uint)this;
}

/* ref: FUN_009d6da0 */
uint F_009d6da0(unsigned int gen_a0)
{
  GEN_ENTER(0x9d6da0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10e07a8));
  F_009d5de0((undefined *)((int)this + 8));
  F_009d5de0((undefined *)((int)this + 0x2a0));
  F_00987100((undefined *)((int)this + 0x538));
  F_00995cb0((undefined *)((int)this + 0x5c0));
  return (uint)this;
}

/* ref: FUN_009d6de0 */
uint F_009d6de0(unsigned int gen_a0)
{
  GEN_ENTER(0x9d6de0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[12])REFP(0x10e07c0));
  F_009d5de0((undefined *)((int)this + 8));
  *(gen_code32 *)((int)this + 0x2b0) = ((code *)REFP(0x979f10));
  *(gen_code32 *)((int)this + 0x2b8) = ((code *)REFP(0x979ff0));
  *(undefined4 *)((int)this + 0x2a4) = 0;
  *(undefined4 *)((int)this + 0x2b4) = 0;
  *(undefined4 *)((int)this + 700) = 0;
  *(undefined4 *)((int)this + 0x2c4) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2a0) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  *(gen_code32 *)((int)this + 0x2c0) = ((code *)REFP(0x97a060));
  F_00995cb0((undefined *)((int)this + 0x2d8));
  F_00995cb0((undefined *)((int)this + 0x438));
  return (uint)this;
}

/* ref: FUN_009d6e50 */
uint F_009d6e50(unsigned int gen_a0)
{
  GEN_ENTER(0x9d6e50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  float fVar2;
  byte * pbVar3;
  byte * pbVar4;
  byte * pbVar5;
  int in_ebx;
  uint uVar6;
  
  pbVar3 = ((byte *)GEN_TOP((*(uint *)((int)this + 0x1d0) >> 0x13)));
  if (((uint)pbVar3 & 1) == 0) {
    fVar1 = *(float *)((int)this + 0x1a8);
    pbVar4 = ((byte *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1f0) + 0xc))))
                               (*(int * PTR32 *)((int)this + 0x1f0))));
    in_ebx = 0;
    uVar6 = 1;
    pbVar3 = pbVar4;
    if (0 < (int)pbVar4) {
      do {
        if ((*(uint *)((int)this + 0x1f8) & uVar6) == 0) {
          pbVar5 = ((byte *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1f0) + 0x14))))
                                     (*(int * PTR32 *)((int)this + 0x1f0),in_ebx)));
          fVar2 = ((float)GEN_TOF(((float10)fVar1 - (float10)(int)*(short *)(pbVar5 + 6))));
          pbVar3 = pbVar5;
          if (!((float10)fVar2 < (float10)0)) {
            *(uint *)((int)this + 0x1f8) = *(uint *)((int)this + 0x1f8) | uVar6;
            if (*(int *)((int)this + 0x1f8) == -1) {
              pbVar3 = ((byte *)GEN_TOP((*(uint *)((int)this + 0x1d0) & 0xfffffe00)));
              *(gen_code32 *)((int)this + 0x1ec) = ((code *)REFP(0x97fcb0));
              *(uint *)((int)this + 0x1d0) = ((uint)pbVar3 ^ 0x20000000) & 0x20000000 ^ (uint)pbVar3
              ;
            }
            if ((*pbVar5 & 1) != 0) {
              pbVar3 = (byte *)F_009d6330(this,in_ebx,(uint)pbVar5,fVar2);
            }
          }
        }
        in_ebx = in_ebx + 1;
        uVar6 = uVar6 << 1 | (uint)((int)uVar6 < 0);
      } while (in_ebx < (int)pbVar4);
    }
  }
  return (uint)pbVar3;
}

/* ref: FUN_009d6f50 */
uint F_009d6f50(unsigned int gen_a0)
{
  GEN_ENTER(0x9d6f50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[35])REFP(0x10e082c));
  F_009d15d0(this);
  piVar4 = (int *)((int)this + 0x94);
  iVar3 = 0x30;
  do {
    piVar1 = (int *)*piVar4;
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      *piVar4 = 0;
    }
    piVar4 = piVar4 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  piVar4 = (int *)((int)this + 0x14);
  iVar3 = 0x10;
  do {
    piVar1 = (int *)*piVar4;
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      *piVar4 = 0;
    }
    piVar4 = piVar4 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  piVar4 = *(int * PTR32 *)((int)this + 0xc);
  if (piVar4 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4);
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  uVar2 = F_009eebb0((undefined *)((int)this + 0x270),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x274),
                       *(undefined4 * PTR32 *)((int)this + 0x274));
  if (*(int *)((int)this + 0x274) != 0) {
    uVar2 = F_00406810(*(int *)((int)this + 0x274));
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10de554));
  return uVar2;
}

/* ref: FUN_009d7000 */
uint F_009d7000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x9d7000u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[10];
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
  undefined * this_00;
  uint uVar1;
  
  if (REFG(undefined * PTR32, 0x14a0a14) != (code *)0x0) {
    this_00 = ((undefined *)GEN_TOP(((code *)REFG(gen_code32, 0x14a0a14))(0x1cb0,0x10,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0)));
    if (this_00 != (undefined *)0x0) {
      (*(uint *)&gen_args[9]) = F_009d6770(this_00,(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]),(*(undefined4 *)&gen_args[5]),(*(undefined4 *)&gen_args[6]),(*(undefined4 *)&gen_args[7]),(*(undefined4 *)&gen_args[8])
                             ,(*(uint *)&gen_args[9]));
      uVar1 = F_009eea60(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54))),&(*(uint *)&gen_args[9]));
      return uVar1;
    }
  }
  (*(uint *)&gen_args[9]) = 0;
  uVar1 = F_009eea60(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54))),&(*(uint *)&gen_args[9]));
  return uVar1;
}

/* ref: FUN_009d7090 */
uint F_009d7090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12, unsigned int gen_a13, unsigned int gen_a14, unsigned int gen_a15, unsigned int gen_a16)
{
  GEN_ENTER(0x9d7090u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[17];
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
  gen_args[13] = gen_a13;
  gen_args[14] = gen_a14;
  gen_args[15] = gen_a15;
  gen_args[16] = gen_a16;
  int iVar1;
  int iVar2;
  undefined * this_00;
  uint uVar3;
  
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa8)));
  iVar2 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa4)));
  if (REFG(undefined * PTR32, 0x14a0a14) != (code *)0x0) {
    this_00 = ((undefined *)GEN_TOP(((code *)REFG(gen_code32, 0x14a0a14))(0x4468,0x10,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0)));
    if (this_00 != (undefined *)0x0) {
      (*(uint *)&gen_args[16]) = F_009d6940(this_00,(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]),(*(undefined4 *)&gen_args[5]),(*(undefined4 *)&gen_args[6]),(*(undefined4 *)&gen_args[7]),
                              (*(undefined4 *)&gen_args[8]),(*(undefined4 *)&gen_args[9]),(*(undefined4 *)&gen_args[10]),(*(undefined4 *)&gen_args[11]),(*(undefined4 *)&gen_args[12]),(*(undefined4 *)&gen_args[13]),(*(undefined4 *)&gen_args[14]),(*(undefined4 *)&gen_args[15]),
                              (*(uint *)&gen_args[16]),-(uint)(iVar1 != 0) & 2 | (uint)(iVar2 != 0));
      uVar3 = F_009eead0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 100))),&(*(uint *)&gen_args[16]));
      return uVar3;
    }
  }
  (*(uint *)&gen_args[16]) = 0;
  uVar3 = F_009eead0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 100))),&(*(uint *)&gen_args[16]));
  return uVar3;
}

/* ref: FUN_009d7150 */
uint F_009d7150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x9d7150u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0xc) = param_3;
  *(undefined1 *)((int)this + 0x10) = (undefined1)param_4;
  *(undefined1 *)((int)this + 0x11) = (undefined1)param_5;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x10e07f4));
  *(undefined4 *)((int)this + 0x14) = param_6;
  *(undefined4 *)((int)this + 0x18) = param_7;
  F_009d6de0((undefined *)((int)this + 0x20));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x5c8) =
       (*(undefined * PTR32 (*)[5])REFP(0x10e07a8));
  F_009d5de0((undefined *)((int)this + 0x5d0));
  F_009d5de0((undefined *)((int)this + 0x868));
  F_00987100((undefined *)((int)this + 0xb00));
  F_00995cb0((undefined *)((int)this + 0xb88));
  F_00995570((undefined *)((int)this + 0xce8));
  F_009a6b20((undefined *)((int)this + 0xe10));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1380) =
       (*(undefined * PTR32 (*)[6])REFP(0x10df09c));
  F_00987100((undefined *)((int)this + 5000));
  F_00987100((undefined *)((int)this + 0x1410));
  F_00987100((undefined *)((int)this + 0x1498));
  F_00995cb0((undefined *)((int)this + 0x1520));
  F_00995cb0((undefined *)((int)this + 0x1680));
  return (uint)this;
}

/* ref: Apricot::Engine::Instance::TimelineInstance::vf24 */
uint F_009d7630(unsigned int gen_a0)
{
  GEN_ENTER(0x9d7630u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  *(undefined4 *)(this + 0x1f8) = 0xffffffff;
  *(gen_code32 *)(this + 0x1ec) = ((code *)REFP(0x9d6e50));
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1f0) + 0xc))))(*(int * PTR32 *)(this + 0x1f0));
  uVar2 = 1;
  if (0 < (int)uVar1) {
    uVar3 = *(uint *)(this + 0x1f8);
    do {
      uVar3 = uVar3 & ~uVar2;
      uVar2 = uVar2 << 1 | (uint)((int)uVar2 < 0);
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
    *(uint *)(this + 0x1f8) = uVar3;
  }
  uVar1 = *(uint *)(this + 0x1d0) & 0xfffffe01 | 1;
  *(uint *)(this + 0x1d0) = *(uint *)(this + 0x1d0) & 0x20000000 ^ uVar1;
  return uVar1;
}

/* ref: FUN_009d76b0 */
uint F_009d76b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, float gen_a7, float gen_a8)
{
  GEN_ENTER(0x9d76b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  uint param_6 = (uint)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  float param_8 = (float)gen_a7;
  float param_9 = (float)gen_a8;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  int * piVar2;
  float fVar3;
  
  fVar3 = (float)(float10)0;
  uVar1 = ((code *)*(gen_code32 *)(*param_5 + 4))(param_5);
  F_009abc20(param_1,param_2,param_3,param_4,param_5,param_8,(float)(int)uVar1,fVar3);
  *param_1 = (*(undefined * PTR32 (*)[32])REFP(0x10dec44));
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)param_1[0x7d] + 0x2c))((int *)param_1[0x7d])));
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2)));
  uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2);
  *(char *)(param_1 + 0x93) = (char)uVar1;
  F_009b1200(param_1,GEN_TOF(gen_bits2f(param_1[0x6a])),GEN_TOF(gen_bits2f(param_1[0x6b])));
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 2;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0xe;
  if (REFG(int, 0x14a09e8) != -1) {
    piVar2 = (int *)(REFG(int, 0x14a09e8) * 0x400 + REFG(int, 0x14a09f4));
    REFG(int, 0x14a09e8) = *piVar2;
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + -1;
    if (piVar2 != (int *)0x0) {
      uVar1 = F_009d7430(piVar2,param_1[0x75],param_1,param_1[0x77],param_6,param_8,param_9,
                           param_7,param_1 + 1,(uint)&(*(undefined4 *)(gen_frame + 0x0)));
      F_0097e5c0(param_1,uVar1);
      return (uint)param_1;
    }
  }
  F_0097e5c0(param_1,0);
  return (uint)param_1;
}

/* ref: FUN_009d77f0 */
uint F_009d77f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9d77f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  uint * puVar5;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[35])REFP(0x10e082c));
  *(undefined4 *)((int)this + 8) = 1;
  *(undefined4 *)((int)this + 0x278) = 0;
  piVar1 = (int *)F_00404230();
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,0x2c,4);
  *(uint *)((int)this + 0x274) = uVar2;
  *(uint *)uVar2 = uVar2;
  *((int *)GEN_TOP((*(int *)((int)this + 0x274) + 4))) = *(int *)((int)this + 0x274);
  *((int *)GEN_TOP((*(int *)((int)this + 0x274) + 8))) = *(int *)((int)this + 0x274);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x274) + 0x28))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x274) + 0x29))) = 1;
  *(undefined4 *)((int)this + 4) = 1;
  uVar2 = *(uint *)(REFG(int, 0x1370b90) + 0x34);
  if ((uVar2 >> 1 & 1) == 0) {
    if (((uVar2 >> 2 & 1) != 0) || ((uVar2 >> 4 & 1) != 0)) {
      *(undefined4 *)((int)this + 4) = 1;
    }
  }
  else {
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(uint *)((int)this + 0x240) = *(uint *)((int)this + 0x240) & 0xf00003ff;
  *(uint *)((int)this + 0x244) = *(uint *)((int)this + 0x244) & 0xf00003ff;
  *(uint *)((int)this + 0x248) = *(uint *)((int)this + 0x248) & 0xf00003ff;
  *(uint *)((int)this + 0x24c) = *(uint *)((int)this + 0x24c) & 0xf00003ff;
  *(uint *)((int)this + 0x250) = *(uint *)((int)this + 0x250) & 0xf00003ff;
  *(uint *)((int)this + 0x254) = *(uint *)((int)this + 0x254) & 0xf00003ff;
  *(uint *)((int)this + 600) = *(uint *)((int)this + 600) & 0xf00003ff;
  *(uint *)((int)this + 0x25c) = *(uint *)((int)this + 0x25c) & 0xf00003ff;
  *(uint *)((int)this + 0x260) = *(uint *)((int)this + 0x260) & 0xf00003ff;
  *(uint *)((int)this + 0x264) = *(uint *)((int)this + 0x264) & 0xf00003ff;
  (*(undefined4 *)(gen_frame + 0x14)) = 4;
  (*(undefined4 *)(gen_frame + 0x18)) = 4;
  pvVar3 = (undefined *)F_004dca20(&(*(undefined4 *)(gen_frame + 0x14)),1,0x1440,4,10);
  *(undefined * PTR32 *)((int)this + 0xc) = pvVar3;
  pvVar3 = (undefined *)F_004d5a50(pvVar3,0,0,((int *)(gen_frame + 0x8)),2);
  F_00c48350(pvVar3,0xff,((int *)(gen_frame + 0x8))[0] * 4);
  F_004d5b60(*(undefined * PTR32 *)((int)this + 0xc),0,0);
  *(undefined1 *)((int)this + 0x26e) = 1;
  F_00c48350((undefined *)((int)this + 0x10),0,0x80);
  F_00c48350((undefined *)((int)this + 0x90),0,0x180);
  puVar5 = (uint *)((int)this + 0x14);
  uVar2 = 0;
  do {
    if (*((int *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x10e0a90) + uVar2))) != 0) {
      uVar4 = F_004df8f0(*(undefined * PTR32 *)(REFG(int, 0x1370b90) + 0x1c),
                           *((int *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x10e0a90) + uVar2))));
      puVar5[-1] = uVar4;
      uVar4 = F_004dcd60(*(int *)((int)&REFG(undefined4, 0x10e0a94) + uVar2) << 4,2,10);
      *puVar5 = uVar4;
    }
    uVar2 = uVar2 + 8;
    puVar5 = puVar5 + 2;
  } while (uVar2 < 0x70);
  puVar5 = (uint *)((int)this + 0x94);
  uVar2 = 0;
  do {
    if (*((int *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x10e0980) + uVar2))) != 0) {
      uVar4 = F_004df8f0(*(undefined * PTR32 *)(REFG(int, 0x1370b90) + 0x1c),
                           *((int *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x10e0980) + uVar2))));
      puVar5[-1] = uVar4;
      uVar4 = F_004dcd60(*(int *)((int)&REFG(undefined4, 0x10e0984) + uVar2) << 4,2,10);
      *puVar5 = uVar4;
    }
    uVar2 = uVar2 + 8;
    puVar5 = puVar5 + 2;
  } while (uVar2 < 0x110);
  puVar5 = (uint *)((int)this + 0x210);
  uVar2 = 0;
  do {
    uVar4 = F_004df8f0(*(undefined * PTR32 *)(REFG(int, 0x1370b90) + 0x20),
                         *((undefined4 *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x10e0938) + uVar2))));
    *puVar5 = uVar4;
    uVar2 = uVar2 + 8;
    puVar5 = puVar5 + 1;
  } while (uVar2 < 0x48);
  *(undefined2 *)((int)this + 0x26c) = 0;
  *(undefined4 *)((int)this + 0x268) = 0;
  return (uint)this;
}

/* ref: FUN_009d7a30 */
uint F_009d7a30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x9d7a30u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[8];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  undefined * this_00;
  uint uVar1;
  
  if (REFG(undefined * PTR32, 0x14a0a14) != (code *)0x0) {
    this_00 = ((undefined *)GEN_TOP(((code *)REFG(gen_code32, 0x14a0a14))(0x17e0,0x10,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0)));
    if (this_00 != (undefined *)0x0) {
      (*(uint *)&gen_args[7]) = F_009d7150(this_00,(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]),(*(undefined4 *)&gen_args[5]),(*(undefined4 *)&gen_args[6]),(*(uint *)&gen_args[7]));
      uVar1 = F_009eeb40(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x74))),&(*(uint *)&gen_args[7]));
      return uVar1;
    }
  }
  (*(uint *)&gen_args[7]) = 0;
  uVar1 = F_009eeb40(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x74))),&(*(uint *)&gen_args[7]));
  return uVar1;
}

/* ref: FUN_009d7ab0 */
uint F_009d7ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9d7ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1f0) + 0x10))))(*(int * PTR32 *)((int)this + 0x1f0),param_1);
  uVar1 = *(ushort *)(uVar4 + 2);
  uVar5 = (uint)uVar1;
  if (-1 < (short)uVar1) {
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1dc) + 0x2c))))
                      (*(int * PTR32 *)((int)this + 0x1dc),(int)(short)uVar1);
    uVar5 = 0;
    if (uVar6 != 0) {
      uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1dc) + 0x2c))))
                        (*(int * PTR32 *)((int)this + 0x1dc),(int)*(short *)(uVar4 + 2));
      uVar4 = F_0097fa40(uVar5);
      if (REFG(int, 0x14a09e8) != -1) {
        iVar7 = REFG(int, 0x14a09e8) * 0x400;
        REFG(int, 0x14a09e8) = *(int *)(iVar7 + REFG(int, 0x14a09f4));
        REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + -1;
        iVar7 = iVar7 + REFG(int, 0x14a09f4);
        if (iVar7 != 0) {
          uVar2 = *(undefined4 *)((int)this + 0x1dc);
          uVar3 = *(undefined4 *)((int)this + 0x1d4);
          uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
          uVar5 = F_009d7230(iVar7,uVar3,this,uVar2,uVar5,(float)(float10)0,(float)(int)uVar4,
                               0xffffffff,uVar6);
          uVar5 = F_0097e5c0(this,uVar5);
          return uVar5;
        }
      }
      uVar5 = F_0097e5c0(this,0);
    }
  }
  return uVar5;
}

/* ref: FUN_009d7bb0 */
uint F_009d7bb0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x9d7bb0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int * piVar5;
  int * piVar6;
  int * piVar7;
  int * piVar8;
  uint uVar9;
  uint uVar10;
  uint local_10;
  uint local_c;
  
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)param_1 + 0x1f0) + 8))))
                    (*(int * PTR32 *)((int)param_1 + 0x1f0),param_2);
  piVar5 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)param_1 + 0x1dc) + 0x2c))))
                            (*(int * PTR32 *)((int)param_1 + 0x1dc),(int)*(short *)(uVar4 + 2))));
  piVar6 = *(int * PTR32 *)((int)param_1 + 0x1dc);
  iVar1 = *piVar6;
  uVar4 = ((code *)*(gen_code32 *)(*piVar5 + 0x10))(piVar5);
  piVar6 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(iVar1 + 0x24))(piVar6,uVar4)));
  piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar6 + 0x1c))(piVar6,0)));
  piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar6 + 0x1c))(piVar6,3)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar6 + 0x18))(piVar6);
  switch((unsigned int)(uintptr_t)(uVar4)) {
  case 0: ;
    uVar4 = ((code *)*(gen_code32 *)(*piVar7 + 0xc))(piVar7);
    if (uVar4 != 0) {
      if (uVar4 - 1 != 0) {
        return uVar4 - 1;
      }
      piVar8 = *((int * PTR32 *)GEN_TOP((*(int *)((int)param_1 + 0x1d4) + 0x270)));
      uVar4 = ((code *)*(gen_code32 *)(*piVar8 + 0xc))(piVar8);
      local_c = 0;
      if ((int)uVar4 < 1) {
        return uVar4;
      }
      do {
        if (REFG(int, 0x14a09e8) == -1) {
LAB_009d7cf5: ;
          uVar9 = 0;
        }
        else {
          piVar8 = (int *)(REFG(int, 0x14a09e8) * 0x400 + REFG(int, 0x14a09f4));
          REFG(int, 0x14a09e8) = *piVar8;
          REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + -1;
          if (piVar8 == (int *)0x0) goto LAB_009d7cf5;
          uVar2 = *(undefined4 *)((int)param_1 + 0x1dc);
          uVar3 = *(undefined4 *)((int)param_1 + 0x1d4);
          uVar9 = ((code *)*(gen_code32 *)(*piVar7 + 0x14))(piVar7);
          uVar9 = F_009cca90(piVar8,uVar3,param_1,uVar2,piVar6,piVar5,param_2,param_3,param_4,
                               local_c,(float)(int)(uVar9 * local_c));
        }
        F_0097e5c0(param_1,uVar9);
        local_c = local_c + 1;
        if ((int)uVar4 <= (int)local_c) {
          return local_c;
        }
      } while( true );
    }
    uVar4 = F_009df120(0x29c);
    if (uVar4 != 0) {
      uVar2 = *(undefined4 *)((int)param_1 + 0x1dc);
      uVar3 = *(undefined4 *)((int)param_1 + 0x1d4);
      uVar9 = ((code *)*(gen_code32 *)(*piVar7 + 0x14))(piVar7);
      uVar4 = F_009cca90(uVar4,uVar3,param_1,uVar2,piVar6,piVar5,param_2,param_3,param_4,
                           0xffffffff,(float)(int)uVar9);
      uVar4 = F_0097e5c0(param_1,uVar4);
      return uVar4;
    }
    break;
  case 1: ;
    uVar4 = ((code *)*(gen_code32 *)(*piVar7 + 0xc))(piVar7);
    if (uVar4 != 0) {
      if (uVar4 - 1 != 0) {
        return uVar4 - 1;
      }
      piVar8 = *((int * PTR32 *)GEN_TOP((*(int *)((int)param_1 + 0x1d4) + 0x270)));
      uVar4 = ((code *)*(gen_code32 *)(*piVar8 + 0xc))(piVar8);
      local_c = 0;
      if ((int)uVar4 < 1) {
        return uVar4;
      }
      do {
        piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar6 + 0x1c))(piVar6,3)));
        uVar9 = ((code *)*(gen_code32 *)(*piVar8 + 0xc))(piVar8);
        if (uVar9 == 0) {
          uVar9 = F_009df120(0x2d4);
          if (uVar9 == 0) {
            uVar9 = 0;
          }
          else {
            uVar2 = *(undefined4 *)((int)param_1 + 0x1dc);
            uVar3 = *(undefined4 *)((int)param_1 + 0x1d4);
            uVar10 = ((code *)*(gen_code32 *)(*piVar7 + 0x14))(piVar7);
            uVar9 = F_009cc4f0(uVar9,uVar3,param_1,uVar2,piVar6,piVar5,param_2,param_3,param_4,
                                 local_c,0xffffffff,(float)(int)(uVar10 * local_c));
          }
          F_0097e5c0(param_1,uVar9);
        }
        else if (uVar9 == 1) {
          uVar9 = 0;
          do {
            if (local_c != uVar9) {
              if (REFG(int, 0x14a09e8) == -1) {
LAB_009d7e92: ;
                uVar10 = 0;
              }
              else {
                piVar8 = (int *)(REFG(int, 0x14a09e8) * 0x400 + REFG(int, 0x14a09f4));
                REFG(int, 0x14a09e8) = *piVar8;
                REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + -1;
                if (piVar8 == (int *)0x0) goto LAB_009d7e92;
                uVar2 = *(undefined4 *)((int)param_1 + 0x1dc);
                uVar3 = *(undefined4 *)((int)param_1 + 0x1d4);
                uVar10 = ((code *)*(gen_code32 *)(*piVar7 + 0x14))(piVar7);
                uVar10 = F_009cc4f0(piVar8,uVar3,param_1,uVar2,piVar6,piVar5,param_2,param_3,
                                      param_4,local_c,uVar9,(float)(int)(uVar10 * uVar9));
              }
              F_0097e5c0(param_1,uVar10);
            }
            uVar9 = uVar9 + 1;
          } while ((int)uVar9 < (int)uVar4);
        }
        local_c = local_c + 1;
        if ((int)uVar4 <= (int)local_c) {
          return local_c;
        }
      } while( true );
    }
    uVar4 = ((code *)*(gen_code32 *)(*piVar8 + 0xc))(piVar8);
    if (uVar4 != 0) {
      if (uVar4 - 1 != 0) {
        return uVar4 - 1;
      }
      piVar8 = *((int * PTR32 *)GEN_TOP((*(int *)((int)param_1 + 0x1d4) + 0x270)));
      uVar4 = ((code *)*(gen_code32 *)(*piVar8 + 0xc))(piVar8);
      local_10 = 0;
      if ((int)uVar4 < 1) {
        return uVar4;
      }
      do {
        uVar9 = F_009df120(0x2d4);
        if (uVar9 == 0) {
          uVar9 = 0;
        }
        else {
          uVar2 = *(undefined4 *)((int)param_1 + 0x1dc);
          uVar3 = *(undefined4 *)((int)param_1 + 0x1d4);
          uVar10 = ((code *)*(gen_code32 *)(*piVar7 + 0x14))(piVar7);
          uVar9 = F_009cc4f0(uVar9,uVar3,param_1,uVar2,piVar6,piVar5,param_2,param_3,param_4,
                               0xffffffff,local_10,(float)(int)(uVar10 * local_10));
        }
        F_0097e5c0(param_1,uVar9);
        local_10 = local_10 + 1;
      } while ((int)local_10 < (int)uVar4);
      return local_10;
    }
    uVar4 = F_009df120(0x2d4);
    if (uVar4 != 0) {
      uVar4 = F_009cc4f0(uVar4,*(undefined4 *)((int)param_1 + 0x1d4),param_1,
                           *(undefined4 *)((int)param_1 + 0x1dc),piVar6,piVar5,param_2,param_3,
                           param_4,0xffffffff,0xffffffff,(float)(float10)0);
      uVar4 = F_0097e5c0(param_1,uVar4);
      return uVar4;
    }
    break;
  case 2: ;
    uVar4 = ((code *)*(gen_code32 *)(*piVar7 + 0xc))(piVar7);
    if (uVar4 != 0) {
      if (uVar4 - 1 != 0) {
        return uVar4 - 1;
      }
      piVar8 = *((int * PTR32 *)GEN_TOP((*(int *)((int)param_1 + 0x1d4) + 0x270)));
      uVar4 = ((code *)*(gen_code32 *)(*piVar8 + 0xc))(piVar8);
      local_c = 0;
      if ((int)uVar4 < 1) {
        return uVar4;
      }
      do {
        piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar6 + 0x1c))(piVar6,3)));
        uVar9 = ((code *)*(gen_code32 *)(*piVar8 + 0xc))(piVar8);
        if (uVar9 == 0) {
          uVar9 = F_009df120(0x360);
          if (uVar9 == 0) {
            uVar9 = 0;
          }
          else {
            uVar2 = *(undefined4 *)((int)param_1 + 0x1dc);
            uVar3 = *(undefined4 *)((int)param_1 + 0x1d4);
            uVar10 = ((code *)*(gen_code32 *)(*piVar7 + 0x14))(piVar7);
            uVar9 = F_009cd0c0(uVar9,uVar3,param_1,uVar2,piVar6,piVar5,param_2,param_3,param_4,
                                 local_c,0xffffffff,(float)(int)(uVar10 * local_c));
          }
          F_0097e5c0(param_1,uVar9);
        }
        else if (uVar9 == 1) {
          uVar9 = 0;
          do {
            if (local_c != uVar9) {
              if (REFG(int, 0x14a09e8) == -1) {
LAB_009d8172: ;
                uVar10 = 0;
              }
              else {
                piVar8 = (int *)(REFG(int, 0x14a09e8) * 0x400 + REFG(int, 0x14a09f4));
                REFG(int, 0x14a09e8) = *piVar8;
                REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + -1;
                if (piVar8 == (int *)0x0) goto LAB_009d8172;
                uVar2 = *(undefined4 *)((int)param_1 + 0x1dc);
                uVar3 = *(undefined4 *)((int)param_1 + 0x1d4);
                uVar10 = ((code *)*(gen_code32 *)(*piVar7 + 0x14))(piVar7);
                uVar10 = F_009cd0c0(piVar8,uVar3,param_1,uVar2,piVar6,piVar5,param_2,param_3,
                                      param_4,local_c,uVar9,(float)(int)(uVar10 * uVar9));
              }
              F_0097e5c0(param_1,uVar10);
            }
            uVar9 = uVar9 + 1;
          } while ((int)uVar9 < (int)uVar4);
        }
        local_c = local_c + 1;
        if ((int)uVar4 <= (int)local_c) {
          return local_c;
        }
      } while( true );
    }
    uVar4 = ((code *)*(gen_code32 *)(*piVar8 + 0xc))(piVar8);
    if (uVar4 != 0) {
      if (uVar4 - 1 != 0) {
        return uVar4 - 1;
      }
      piVar8 = *((int * PTR32 *)GEN_TOP((*(int *)((int)param_1 + 0x1d4) + 0x270)));
      uVar4 = ((code *)*(gen_code32 *)(*piVar8 + 0xc))(piVar8);
      local_10 = 0;
      if ((int)uVar4 < 1) {
        return uVar4;
      }
      do {
        uVar9 = F_009df120(0x360);
        if (uVar9 == 0) {
          uVar9 = 0;
        }
        else {
          uVar2 = *(undefined4 *)((int)param_1 + 0x1dc);
          uVar3 = *(undefined4 *)((int)param_1 + 0x1d4);
          uVar10 = ((code *)*(gen_code32 *)(*piVar7 + 0x14))(piVar7);
          uVar9 = F_009cd0c0(uVar9,uVar3,param_1,uVar2,piVar6,piVar5,param_2,param_3,param_4,
                               0xffffffff,local_10,(float)(int)(uVar10 * local_10));
        }
        F_0097e5c0(param_1,uVar9);
        local_10 = local_10 + 1;
      } while ((int)local_10 < (int)uVar4);
      return local_10;
    }
    uVar4 = F_009df120(0x360);
    if (uVar4 != 0) {
      uVar4 = F_009cd0c0(uVar4,*(undefined4 *)((int)param_1 + 0x1d4),param_1,
                           *(undefined4 *)((int)param_1 + 0x1dc),piVar6,piVar5,param_2,param_3,
                           param_4,0xffffffff,0xffffffff,(float)(float10)0);
      uVar4 = F_0097e5c0(param_1,uVar4);
      return uVar4;
    }
    break;
  case 3: ;
    if (REFG(int, 0x14a09e8) != -1) {
      piVar7 = (int *)(REFG(int, 0x14a09e8) * 0x400 + REFG(int, 0x14a09f4));
      REFG(int, 0x14a09e8) = *piVar7;
      REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + -1;
      if (piVar7 != (int *)0x0) {
        uVar4 = F_009d76b0(piVar7,*(undefined4 *)((int)param_1 + 0x1d4),param_1,
                             *(undefined4 *)((int)param_1 + 0x1dc),piVar6,piVar5,param_2,param_3,
                             param_4);
        uVar4 = F_0097e5c0(param_1,uVar4);
        return uVar4;
      }
    }
    break;
  default: ;
    goto switchD_009d7c29_default;
  }
  uVar4 = F_0097e5c0(param_1,0);
switchD_009d7c29_default: ;
  return uVar4;
}

/* ref: Apricot::Engine::Instance::RandomTriggerClipInstance::vf1 */
uint F_009d83e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x9d83e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  int iVar1;
  int * this_00;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = *((int *)GEN_TOP((*(int *)(this + 0x1f0) + 4)));
  iVar4 = *((int *)GEN_TOP((*(int *)(this + 0x1f0) + 8)));
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  uVar3 = REFG(undefined4, 0x13301e8) << 0xb ^ REFG(undefined4, 0x13301e8);
  uVar3 = REFG(undefined4, 0x13301dc) >> 0x13 ^ uVar3 ^ uVar3 >> 8 ^ REFG(undefined4, 0x13301dc);
  iVar4 = ((iVar4 - iVar1) + 1) * (uVar3 & 0xffff);
  this_00 = *(int * PTR32 *)(this + 0x1d8);
  uVar2 = REFG(undefined4, 0x13301e0);
  REFG(undefined4, 0x13301e0) = REFG(undefined4, 0x13301dc);
  REFG(undefined4, 0x13301dc) = uVar3;
  REFG(undefined4, 0x13301e8) = REFG(undefined4, 0x13301e4);
  while ((REFG(undefined4, 0x13301e4) = uVar2, this_00 != (int *)0x0 &&
         (uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x20))(this_00), uVar3 != 2))) {
    this_00 = (int *)this_00[0x76];
    uVar2 = REFG(undefined4, 0x13301e4);
  }
  F_009d7ab0(this_00,((int)((iVar4 >> 0x1f & 0xffffU) + iVar4) >> 0x10) + iVar1);
  uVar3 = *(uint *)(this + 0x1d0);
  if ((uVar3 & 0x40000) != 0) {
    return uVar3;
  }
  *(uint *)(this + 0x1d0) = uVar3 & 0xf81fffff | 0x40000;
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 8))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar3;
}

/* ref: Apricot::Engine::Instance::TriggerClipInstance::vf1 */
uint F_009d84d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x9d84d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  int * this_00;
  undefined4 uVar1;
  uint uVar2;
  
  this_00 = *(int * PTR32 *)(this + 0x1d8);
  uVar1 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x1f0) + 4)));
  while ((this_00 != (int *)0x0 && (uVar2 = ((code *)*(gen_code32 *)(*this_00 + 0x20))(this_00), uVar2 != 2))) {
    this_00 = (int *)this_00[0x76];
  }
  F_009d7ab0(this_00,uVar1);
  uVar2 = *(uint *)(this + 0x1d0);
  if ((uVar2 & 0x40000) != 0) {
    return uVar2;
  }
  *(uint *)(this + 0x1d0) = uVar2 & 0xf81fffff | 0x40000;
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 8))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar2;
}

/* ref: FUN_009d8540 */
uint F_009d8540(void)
{
  GEN_ENTER(0x9d8540u, 0u, 0u, 0u, 0u);
  undefined * pvVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  REFG(undefined1, 0x14a06d5) = 0;
  REFG(undefined1, 0x14a06d4) = 0;
  pvVar1 = (undefined *)F_004069f0(0x100);
  if (pvVar1 == (undefined *)0x0) {
    REFG(undefined4, 0x14a09a8) = 0;
  }
  else {
    REFG(undefined4, 0x14a09a8) = F_009cba80(pvVar1);
  }
  puVar2 = (undefined4 *)F_004069f0(0x170);
  if (puVar2 == (undefined4 *)0x0) {
    REFG(undefined4 * PTR32, 0x14a09a4) = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[10])REFP(0x10de6fc));
    puVar4 = &REFG(float, 0x1302d00);
    puVar5 = puVar2 + 4;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    F_00982d80(puVar2 + 4,0);
    *puVar2 = (*(undefined * PTR32 (*)[10])REFP(0x10defe0));
    REFG(undefined4 * PTR32, 0x14a09a4) = puVar2;
  }
  pvVar1 = (undefined *)F_004069f0(0x280);
  if (pvVar1 == (undefined *)0x0) {
    REFG(undefined4, 0x14a09a0) = 0;
  }
  else {
    REFG(undefined4, 0x14a09a0) = F_009d77f0(pvVar1);
  }
  pvVar1 = F_00c48350(&REFG(undefined4, 0x14a0720),0,0x280);
  return (uint)pvVar1;
}

/* ref: FUN_009d8600 */
uint F_009d8600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9d8600u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * this_00;
  uint uVar1;
  
  uVar1 = param_1;
  if ((-1 < (int)param_1) && (-1 < param_2)) {
    this_00 = *(undefined * PTR32 *)((int)this + 0x1e0);
    while (0 < (int)uVar1) {
      uVar1 = uVar1 - 1;
      if (this_00 == (undefined *)0x0) {
        return uVar1;
      }
      this_00 = *(undefined * PTR32 *)((int)this_00 + 0x1e8);
    }
    if (this_00 != (undefined *)0x0) {
      uVar1 = F_009d7ab0(this_00,param_2 + -1);
    }
  }
  return uVar1;
}

/* ref: FUN_009d8640 */
uint F_009d8640(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9d8640u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int param_4 = (int)gen_a3;
  int iVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  int * piVar6;
  int iVar7;
  
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)param_1[0x77] + 0x2c))
                            ((int *)param_1[0x77],(int)*(short *)(param_4 + 2))));
  uVar4 = F_0097fa40(piVar3);
  uVar5 = ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3);
  if (uVar5 != 0xffffffff) {
    piVar6 = (int *)param_1[0x77];
    iVar7 = *piVar6;
    uVar5 = ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3);
    piVar6 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(iVar7 + 0x24))(piVar6,uVar5)));
    if (*(int *)(param_1[0x75] + 0x270) == 0) {
      uVar5 = ((code *)*(gen_code32 *)(*piVar6 + 0x18))(piVar6);
      if (uVar5 != 3) {
        if (REFG(int, 0x14a09e8) != -1) {
          iVar7 = REFG(int, 0x14a09e8) * 0x400;
          REFG(int, 0x14a09e8) = *(int *)(iVar7 + REFG(int, 0x14a09f4));
          REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + -1;
          iVar7 = iVar7 + REFG(int, 0x14a09f4);
          if (iVar7 != 0) {
            iVar1 = param_1[0x77];
            iVar2 = param_1[0x75];
            uVar5 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1);
            uVar4 = F_009d7230(iVar7,iVar2,param_1,iVar1,(uint)piVar3,param_2,(float)(int)uVar4,
                                 param_3,uVar5);
            goto LAB_009d87d0;
          }
        }
        goto LAB_009d87ce;
      }
    }
    F_009d7bb0(param_1,param_3,param_2,(float)(int)uVar4);
    goto LAB_009d87d8;
  }
  if (REFG(int, 0x14a09e8) == -1) {
LAB_009d87ce: ;
    uVar4 = 0;
  }
  else {
    piVar6 = (int *)(REFG(int, 0x14a09e8) * 0x400 + REFG(int, 0x14a09f4));
    REFG(int, 0x14a09e8) = *piVar6;
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + -1;
    if (piVar6 == (int *)0x0) goto LAB_009d87ce;
    iVar7 = param_1[0x77];
    iVar1 = param_1[0x75];
    uVar5 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1);
    uVar4 = F_009d7230(piVar6,iVar1,param_1,iVar7,(uint)piVar3,param_2,(float)(int)uVar4,param_3,
                         uVar5);
  }
LAB_009d87d0: ;
  F_0097e5c0(param_1,uVar4);
LAB_009d87d8: ;
  uVar4 = param_1[0x74];
  uVar4 = (uVar4 - 1 ^ uVar4) & 0x1ff ^ uVar4;
  param_1[0x74] = ((uint)((uVar4 & 0x1ff) == 0) * 0x20000000 ^ uVar4) & 0x20000000 ^ uVar4;
  return uVar4;
}

/* ref: FUN_009d8820 */
uint F_009d8820(unsigned int gen_a0)
{
  GEN_ENTER(0x9d8820u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  byte * pbVar5;
  uint uVar6;
  int iVar7;
  
  uVar3 = *(uint *)((int)this + 0x1d0) >> 0x13;
  if ((uVar3 & 1) == 0) {
    fVar1 = *(float *)((int)this + 0x1a8);
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1f0) + 4))))(*(int * PTR32 *)((int)this + 0x1f0));
    iVar7 = 0;
    uVar6 = 1;
    uVar3 = uVar4;
    if (0 < (int)uVar4) {
      do {
        if ((*(uint *)((int)this + 500) & uVar6) == 0) {
          pbVar5 = ((byte *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1f0) + 8))))
                                     (*(int * PTR32 *)((int)this + 0x1f0),iVar7)));
          uVar3 = (uint)(*(short *)((int)(uintptr_t)pbVar5) >> 2);
          fVar2 = (float)((float10)fVar1 - (float10)(int)uVar3);
          if (!((float10)fVar2 < (float10)0)) {
            *(uint *)((int)this + 500) = *(uint *)((int)this + 500) | uVar6;
            if (*(int *)((int)this + 500) == -1) {
              *(gen_code32 *)((int)this + 0x1ec) = ((code *)REFP(0x97fac0));
            }
            if ((*pbVar5 & 3) != 0) {
              uVar3 = F_009d8640(this,fVar2,iVar7,pbVar5);
            }
          }
        }
        iVar7 = iVar7 + 1;
        uVar6 = uVar6 << 1 | (uint)((int)uVar6 < 0);
      } while (iVar7 < (int)uVar4);
    }
  }
  return uVar3;
}

/* ref: FUN_009d88e0 */
uint F_009d88e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, float gen_a5, float gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x9d88e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  undefined4 * param_8 = (undefined4 *)(uintptr_t)gen_a7;
  uint uVar1;
  byte * pbVar2;
  uint uVar3;
  int iVar4;
  
  F_0099a240(param_1,param_2,param_3,param_4,param_6,param_7,(float)(float10)1,(float)(float10)0,
               (float)(float10)0);
  param_1[0x7c] = param_5;
  *param_1 = (*(undefined * PTR32 (*)[31])REFP(0x10e0b04));
  param_1[0x7b] = ((code *)REFP(0x9d8820));
  param_1[0x7d] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x7e) = 0;
  param_1[1] = *param_8;
  param_1[2] = param_8[1];
  param_1[3] = param_8[2];
  param_1[4] = param_8[3];
  param_1[5] = param_8[4];
  param_1[6] = param_8[5];
  param_1[7] = param_8[6];
  param_1[8] = param_8[7];
  param_1[9] = param_8[8];
  param_1[10] = param_8[9];
  param_1[0xb] = param_8[10];
  param_1[0xc] = param_8[0xb];
  uVar1 = ((code *)*(gen_code32 *)(*(int *)param_1[0x7c] + 4))((int *)param_1[0x7c]);
  iVar4 = 0;
  param_7 = 0.0;
  uVar3 = 1;
  if (0 < (int)uVar1) {
    do {
      pbVar2 = ((byte *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)param_1[0x7c] + 8))((int *)param_1[0x7c],iVar4)));
      if ((*pbVar2 & 3) != 0) {
        param_1[0x7d] = param_1[0x7d] & ~uVar3;
        param_7 = gen_bits2f((int)gen_fl2bits(param_7) + 1);
      }
      iVar4 = iVar4 + 1;
      uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
    } while (iVar4 < (int)uVar1);
  }
  uVar3 = (param_1[0x74] ^ (uint)gen_fl2bits(param_7)) & 0x1ff ^ param_1[0x74];
  param_1[0x74] = ((uint)((uVar3 & 0x1ff) == 0) * 0x20000000 ^ uVar3) & 0x20000000 ^ uVar3;
  return (uint)param_1;
}

/* ref: FUN_009d8a20 */
uint F_009d8a20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9d8a20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  float10 fVar1;
  undefined4 uVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  
  fVar1 = (float10)0;
  F_0099a240(param_1,param_1,0,param_2,(float)fVar1,(float)fVar1,(float)(float10)1,(float)fVar1,
               (float)fVar1);
  uVar4 = REFG(float, 0x1090708);
  *(uint *)(param_1 + 0x270) = param_3;
  *(undefined4 *)(param_1 + 0x3a0) = param_4;
  *(undefined * PTR32 * PTR32 *)param_1 = (*(undefined * PTR32 (*)[33])REFP(0x10df79c));
  *(undefined4 *)(param_1 + 0x1ec) = 0;
  *(uint *)(param_1 + 0x318) = uVar4;
  *(undefined4 *)(param_1 + 0x3a4) = 0;
  *(ushort *)(param_1 + 0x3ac) = *(ushort *)(param_1 + 0x3ac) & 0x8bff | 0x800;
  if (REFG(int, 0x14a09e8) == -1) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)(REFG(int, 0x14a09e8) * 0x400 + REFG(int, 0x14a09f4));
    REFG(int, 0x14a09e8) = *piVar3;
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + -1;
  }
  *(int * PTR32 *)(param_1 + 0x1ec) = piVar3;
  if (piVar3 == (int *)0x0) {
    if ((*(uint *)(param_1 + 0x1d0) & 0x40000) == 0) {
      *(uint *)(param_1 + 0x1d0) = *(uint *)(param_1 + 0x1d0) & 0xf81fffff | 0x40000;
      return (uint)param_1;
    }
  }
  else {
    piVar3[0x25] = 0;
    extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*param_2 + 0xc0))(param_2);
    *((float *)GEN_TOP((*(int *)(param_1 + 0x1ec) + 0x30))) = (float)extraout_ST0;
    extraout_ST0_00 = ((gen_fcode *)*(gen_code32 *)(*param_2 + 0xc4))(param_2);
    *((float *)GEN_TOP((*(int *)(param_1 + 0x1ec) + 0x34))) = (float)extraout_ST0_00;
    extraout_ST0_01 = ((gen_fcode *)*(gen_code32 *)(*param_2 + 200))(param_2);
    uVar2 = REFG(float, 0x1087f04);
    *((float *)GEN_TOP((*(int *)(param_1 + 0x1ec) + 0x38))) = (float)extraout_ST0_01;
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x1ec) + 0x3c))) = uVar2;
    *(undefined4 *)(param_1 + 0x2f4) = 0;
    *(undefined4 *)(param_1 + 0x2f8) = 0;
    *(undefined4 *)(param_1 + 0x2fc) = 0;
    *(undefined4 *)(param_1 + 0x300) = 0;
    *(undefined4 *)(param_1 + 0x304) = 0;
    *(undefined4 *)(param_1 + 0x308) = 0;
    *(undefined4 *)(param_1 + 0x30c) = 0;
    *(undefined4 *)(param_1 + 0x310) = 0;
    *(undefined4 *)(param_1 + 0x314) = 0;
    F_00c48350(param_1 + 0x1f0,0,0x40);
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x1dc) + 0xec))))(*(int * PTR32 *)(param_1 + 0x1dc));
    if (uVar4 == 0) {
      *(gen_code32 *)(param_1 + 0x3b0) = ((code *)REFP(0x97e200));
    }
    else if (uVar4 == 1) {
      *(gen_code32 *)(param_1 + 0x3b0) = ((code *)REFP(0x97e260));
    }
    else if (uVar4 == 2) {
      *(gen_code32 *)(param_1 + 0x3b0) = ((code *)REFP(0x9d3ea0));
    }
    uVar2 = REFG(float, 0x1087f04);
    **(undefined4 * PTR32 *)(param_1 + 0x1ec) = REFG(float, 0x1087f04);
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x1ec) + 4))) = uVar2;
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x1ec) + 8))) = uVar2;
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x1ec) + 0xc))) = uVar2;
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x1ec) + 0x10))) = uVar2;
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x1ec) + 0x14))) = uVar2;
    F_009abfa0(param_1,param_5);
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x1dc) + 0x5c))))(*(int * PTR32 *)(param_1 + 0x1dc));
    param_2 = (int *)0x0;
    if (uVar4 != 0) {
      do {
        piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x1dc) + 0x28))))
                                  (*(int * PTR32 *)(param_1 + 0x1dc),param_2)));
        param_3 = 0;
        uVar7 = 0;
        do {
          uVar5 = ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3,uVar7);
          if (*(short *)(uVar5 + 2) != -1) {
            param_3 = REFG(float, 0x1090708);
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < 0xc);
        if (REFG(int, 0x14a09e8) != -1) {
          iVar6 = REFG(int, 0x14a09e8) * 0x400;
          REFG(int, 0x14a09e8) = *(int *)(REFG(int, 0x14a09f4) + iVar6);
          REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + -1;
          iVar6 = REFG(int, 0x14a09f4) + iVar6;
          if ((iVar6 != 0) &&
             (piVar3 = (int *)F_009d88e0(iVar6,*(undefined4 *)(param_1 + 0x1d4),param_1,
                                           *(undefined4 *)(param_1 + 0x1dc),piVar3,(float)(float10)0
                                           ,GEN_TOF(gen_bits2f(param_3)),param_1 + 4), piVar3 != (int *)0x0))
          {
            uVar7 = *(uint *)(param_1 + 0x1d0);
            *(uint *)(param_1 + 0x1d0) = ((uVar7 & 0xfffffe00) + 0x200 ^ uVar7) & 0x3fe00 ^ uVar7;
            if (*(int *)(param_1 + 0x1e4) == 0) {
              *(int * PTR32 *)(param_1 + 0x1e0) = piVar3;
            }
            else {
              *((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x1e4) + 0x1e8))) = piVar3;
            }
            *(int * PTR32 *)(param_1 + 0x1e4) = piVar3;
            ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3);
          }
        }
        param_2 = (int *)((int)param_2 + 1);
      } while (param_2 < uVar4);
    }
  }
  return (uint)param_1;
}

/* ref: FUN_009d8d50 */
uint F_009d8d50(unsigned int gen_a0)
{
  GEN_ENTER(0x9d8d50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short * psVar1;
  int iVar2;
  byte bVar3;
  undefined4 * puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ushort uVar8;
  uint local_c;
  int local_8;
  
  if (*((short *)GEN_TOP((*(int *)((int)this + 0x158) + 0x3a000))) != 0) {
    uVar8 = 0;
    do {
      iVar5 = *(int *)((int)this + 0x158);
      iVar2 = (uint)uVar8 * 2 + 0x39000;
      iVar7 = (uint)*(ushort *)(iVar5 + iVar2) * 0x68;
      if (*(int *)(iVar7 + 0x103c + iVar5) == 3) {
        puVar4 = *(undefined4 * PTR32 *)(iVar7 + iVar5 + 0x1030);
        if (puVar4 != (undefined4 *)0x0) {
          ((code *)*(gen_code32 *)*puVar4)(puVar4,1);
        }
        iVar5 = *(int *)((int)this + 0x158);
        *(undefined2 *)(iVar5 + iVar2) =
             *((undefined2 *)GEN_TOP((iVar5 + 0x38ffe + (uint)*(ushort *)(iVar5 + 0x3a000) * 2)));
        psVar1 = ((short *)GEN_TOP((*(int *)((int)this + 0x158) + 0x3a000)));
        *psVar1 = *psVar1 + -1;
      }
      else {
        uVar8 = uVar8 + 1;
      }
    } while (uVar8 < *((ushort *)GEN_TOP((*(int *)((int)this + 0x158) + 0x3a000))));
  }
  local_c = (uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0x158) + 0x3a000)));
  uVar6 = 0;
  if (local_c != 0) {
    local_8 = 0x39000;
    do {
      iVar5 = *(int *)((int)this + 0x158);
      uVar8 = *(ushort *)(local_8 + iVar5);
      iVar2 = (uint)uVar8 * 0x68 + 0x1000 + iVar5;
      bVar3 = *(byte *)(iVar2 + 0x62);
      uVar6 = CONCAT31((int3)((uint)iVar5 >> 8),bVar3);
      if ((bVar3 & 8) != 0) {
        if ((bVar3 & 4) == 0) {
          if (*(int *)(iVar2 + 0x3c) == 4) {
            puVar4 = *(undefined4 * PTR32 *)(iVar2 + 0x30);
            if (puVar4 != (undefined4 *)0x0) {
              ((code *)*(gen_code32 *)*puVar4)(puVar4,1);
            }
            if (REFG(int, 0x14a09e8) == -1) {
LAB_009d8e8f: ;
              uVar6 = 0;
            }
            else {
              iVar5 = REFG(int, 0x14a09e8) * 0x400;
              REFG(int, 0x14a09e8) = *(int *)(REFG(int, 0x14a09f4) + iVar5);
              REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + -1;
              iVar5 = REFG(int, 0x14a09f4) + iVar5;
              if (iVar5 == 0) goto LAB_009d8e8f;
              uVar6 = F_009d8a20(iVar5,*(undefined4 *)(iVar2 + 0x34),*(uint *)(iVar2 + 0x38),
                                   (uint)uVar8,iVar2);
            }
            *(uint *)(iVar2 + 0x30) = uVar6;
            uVar6 = F_0098b780(uVar6,iVar2 + 0x48);
            *(undefined4 *)(iVar2 + 0x3c) = 2;
            if ('\0' < (char)*(byte *)(iVar2 + 0x5e)) {
              *(short *)(iVar2 + 0x60) = 1 << (*(byte *)(iVar2 + 0x5e) & 0x1f);
            }
          }
        }
        else {
          *(undefined4 *)(iVar2 + 0x3c) = 4;
        }
      }
      local_8 = local_8 + 2;
      local_c = local_c - 1;
    } while (local_c != 0);
  }
  return uVar6;
}

/* ref: FUN_009d8ed0 */
uint F_009d8ed0(unsigned int gen_a0)
{
  GEN_ENTER(0x9d8ed0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort uVar1;
  undefined4 * puVar2;
  undefined * this_00;
  int * piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  float10 fVar8;
  uint local_c;
  int local_8;
  
  local_c = (uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0x158) + 0x3a000)));
  uVar5 = 0;
  if (local_c != 0) {
    local_8 = 0x39000;
    do {
      iVar4 = *(int *)((int)this + 0x158);
      uVar1 = *(ushort *)(local_8 + iVar4);
      iVar6 = (uint)uVar1 * 0x68;
      puVar2 = *(undefined4 * PTR32 *)(iVar6 + 0x1030 + iVar4);
      iVar6 = iVar6 + 0x1000 + iVar4;
      uVar5 = CONCAT22((short)((uint)iVar4 >> 0x10),*(ushort *)(puVar2 + 0xeb) >> 0xe);
      if ((*(ushort *)(puVar2 + 0xeb) >> 0xe & 1) != 0) {
        if (puVar2 != (undefined4 *)0x0) {
          ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
        }
        if (REFG(int, 0x14a09e8) == -1) {
LAB_009d8f74: ;
          uVar5 = 0;
        }
        else {
          iVar4 = REFG(int, 0x14a09e8) * 0x400;
          REFG(int, 0x14a09e8) = *(int *)(REFG(int, 0x14a09f4) + iVar4);
          REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + -1;
          iVar4 = REFG(int, 0x14a09f4) + iVar4;
          if (iVar4 == 0) goto LAB_009d8f74;
          uVar5 = F_009d8a20(iVar4,*(undefined4 *)(iVar6 + 0x34),*(uint *)(iVar6 + 0x38),
                               (uint)uVar1,iVar6);
        }
        *(uint *)(iVar6 + 0x30) = uVar5;
        uVar5 = F_0098b780(uVar5,iVar6 + 0x48);
        *(undefined1 *)(iVar6 + 0x5e) = 0;
        *(undefined2 *)(iVar6 + 0x60) = 0;
      }
      if (*(int *)(iVar6 + 0x3c) != 4) {
        if (*(short *)(iVar6 + 0x60) != 0) {
          uVar7 = 0;
          uVar5 = 1;
          do {
            if ((((uVar5 & *(ushort *)(iVar6 + 0x60)) != 0) && (-1 < (int)uVar7)) &&
               (this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)(iVar6 + 0x30) + 0x1e0))), this_00 != (undefined *)0x0)) {
              F_009d7ab0(this_00,uVar7 - 1);
            }
            uVar7 = uVar7 + 1;
            uVar5 = uVar5 << 1 | (uint)((int)uVar5 < 0);
          } while (uVar7 < 0x10);
          *(undefined2 *)(iVar6 + 0x60) = 0;
        }
        piVar3 = *(int * PTR32 *)(iVar6 + 0x30);
        if ((*(ushort *)(piVar3 + 0xeb) >> 10 & 1) == 0) {
          fVar8 = (float10)*(float *)((int)this + 0x160) * (float10)*(float *)(iVar6 + 0x58);
        }
        else {
          fVar8 = (float10)0;
        }
        uVar5 = ((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,(undefined4)gen_fl2bits((float)fVar8));
      }
      local_8 = local_8 + 2;
      local_c = local_c - 1;
    } while (local_c != 0);
  }
  return uVar5;
}

/* ref: FUN_009d9020 */
uint F_009d9020(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x9d9020u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float10 fVar1;
  uint uVar2;
  float10 fVar3;
  
  fVar1 = (float10)*(double *)&REFG(undefined, 0x10943d8);
  fVar3 = (float10)*(int *)((int)param_1 + 0x15c);
  if (*(int *)((int)param_1 + 0x15c) < 0) {
    fVar3 = fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  *(undefined4 *)((int)param_1 + 0x1568) = 0;
  *(undefined4 *)((int)param_1 + 0x1164) = 0;
  *(float *)((int)param_1 + 0x160) = ((float)GEN_TOF((((float10)param_2 * fVar1) / fVar3)));
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)param_1 + 0x150) + 0x68))))(*(int * PTR32 *)((int)param_1 + 0x150));
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)param_1 + 0x150) + 0x50))))(*(int * PTR32 *)((int)param_1 + 0x150));
  F_009789e0(param_1);
  F_009d8d50(param_1);
  uVar2 = F_009d8ed0(param_1);
  return uVar2;
}

/* ref: FUN_009d9090 */
uint F_009d9090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9d9090u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  short * psVar1;
  undefined4 * puVar2;
  byte * pbVar3;
  int * piVar4;
  undefined4 uVar5;
  int * piVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  piVar4 = *(int * PTR32 *)((int)this + 0x150);
  ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4);
  if (0xf < REFG(undefined4, 0x14a09f0)) {
    iVar9 = 0;
    piVar6 = ((int *)GEN_TOP((*(int *)((int)this + 0x158) + 0x1030)));
    do {
      if (*piVar6 == 0) {
        if (REFG(int, 0x14a09e8) != -1) {
          iVar7 = REFG(int, 0x14a09e8) * 0x400;
          REFG(int, 0x14a09e8) = *(int *)(REFG(int, 0x14a09f4) + iVar7);
          REFG(undefined4, 0x14a09f0) = REFG(undefined4, 0x14a09f0) - 1;
          iVar7 = REFG(int, 0x14a09f4) + iVar7;
          if (iVar7 != 0) {
            uVar8 = F_009d8a20(iVar7,param_1,param_2,iVar9,param_3);
            goto LAB_009d912f;
          }
        }
        uVar8 = 0;
LAB_009d912f: ;
        piVar6 = (int *)((int)this + 0x1570);
        *piVar6 = *piVar6 + 1;
        if (*piVar6 == 0) {
          *(undefined4 *)((int)this + 0x1570) = 1;
        }
        iVar10 = iVar9 * 0x68;
        *((uint *)GEN_TOP((*(int *)((int)this + 0x158) + 0x1030 + iVar10))) = uVar8;
        *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x158) + 0x1034 + iVar10))) = param_1;
        *((uint *)GEN_TOP((*(int *)((int)this + 0x158) + 0x1038 + iVar10))) = param_2;
        *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x158) + 0x103c + iVar10))) = 1;
        uVar5 = REFG(float, 0x1087f04);
        puVar2 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x158) + 0x1000 + iVar10)));
        *puVar2 = *param_3;
        puVar2[1] = param_3[1];
        puVar2[2] = param_3[2];
        puVar2[3] = param_3[3];
        puVar2[4] = param_3[4];
        puVar2[5] = param_3[5];
        puVar2[6] = param_3[6];
        puVar2[7] = param_3[7];
        puVar2[8] = param_3[8];
        puVar2[9] = param_3[9];
        puVar2[10] = param_3[10];
        puVar2[0xb] = param_3[0xb];
        *((undefined2 *)GEN_TOP((*(int *)((int)this + 0x158) + 0x1060 + iVar10))) = 0;
        *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x158) + 0x105e + iVar10))) = 0;
        *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x158) + 0x1058 + iVar10))) = uVar5;
        iVar7 = *(int *)((int)this + 0x158);
        *(undefined4 *)(iVar7 + 0x1048 + iVar10) = uVar5;
        *(undefined4 *)(iVar7 + 0x104c + iVar10) = uVar5;
        *(undefined4 *)(iVar7 + 0x1050 + iVar10) = uVar5;
        *(undefined4 *)(iVar7 + 0x1054 + iVar10) = uVar5;
        pbVar3 = ((byte *)GEN_TOP((*(int *)((int)this + 0x158) + 0x1062 + iVar10)));
        *pbVar3 = *pbVar3 | 1;
        pbVar3 = ((byte *)GEN_TOP((*(int *)((int)this + 0x158) + 0x1062 + iVar10)));
        *pbVar3 = *pbVar3 & 0xfd;
        pbVar3 = ((byte *)GEN_TOP((*(int *)((int)this + 0x158) + 0x1062 + iVar10)));
        *pbVar3 = *pbVar3 & 0xfb;
        uVar8 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar8 + 0x1dc) + 0xdc))))(*(int * PTR32 *)(uVar8 + 0x1dc));
        pbVar3 = ((byte *)GEN_TOP((*(int *)((int)this + 0x158) + 0x1062 + iVar10)));
        *pbVar3 = *pbVar3 ^ ((char)uVar8 << 3 ^
                            *((byte *)GEN_TOP((*(int *)((int)this + 0x158) + 0x1062 + iVar10)))) & 8;
        *((int *)GEN_TOP((*(int *)((int)this + 0x158) + 0x1044 + iVar10))) = iVar9;
        *((undefined4 *)GEN_TOP(((iVar9 + 0x28) * 0x68 + *(int *)((int)this + 0x158)))) =
             *(undefined4 *)((int)this + 0x1570);
        *((short *)GEN_TOP((*(int *)((int)this + 0x158) + 0x3a002 +
                  (uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0x158) + 0x3b002))) * 2))) = (short)iVar9;
        psVar1 = ((short *)GEN_TOP((*(int *)((int)this + 0x158) + 0x3b002)));
        *psVar1 = *psVar1 + 1;
        iVar9 = *(int *)((int)this + 0x158);
        ((code *)*(gen_code32 *)(*piVar4 + 0x10))(piVar4);
        return iVar9 + 0x1000 + iVar10;
      }
      iVar9 = iVar9 + 1;
      piVar6 = piVar6 + 0x1a;
    } while (iVar9 < 0x800);
  }
  ((code *)*(gen_code32 *)(*piVar4 + 0x10))(piVar4);
  return 0;
}

/* ref: FUN_009d9320 */
uint F_009d9320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, float gen_a5, float gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x9d9320u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int * piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (param_3 != 0) {
    if (param_5 == (undefined4 *)0x0) {
      (*(undefined4 *)(gen_frame + 0xc)) = REFG(float, 0x132f428);
      (*(undefined4 *)(gen_frame + 0x10)) = REFG(float, 0x132f42c);
      (*(undefined4 *)(gen_frame + 0x14)) = REFG(float, 0x132f430);
      (*(undefined4 *)(gen_frame + 0x18)) = REFG(float, 0x132f434);
      (*(undefined4 *)(gen_frame + 0x1c)) = REFG(float, 0x132f438);
      (*(undefined4 *)(gen_frame + 0x20)) = REFG(float, 0x132f43c);
      (*(undefined4 *)(gen_frame + 0x24)) = REFG(float, 0x132f440);
      (*(undefined4 *)(gen_frame + 0x28)) = REFG(float, 0x132f444);
      (*(undefined4 *)(gen_frame + 0x2c)) = REFG(float, 0x132f448);
      (*(undefined4 *)(gen_frame + 0x30)) = REFG(float, 0x132f44c);
      (*(undefined4 *)(gen_frame + 0x34)) = REFG(float, 0x132f450);
      uVar4 = REFG(float, 0x132f454);
    }
    else {
      (*(undefined4 *)(gen_frame + 0xc)) = *param_5;
      (*(undefined4 *)(gen_frame + 0x10)) = param_5[1];
      (*(undefined4 *)(gen_frame + 0x14)) = param_5[2];
      (*(undefined4 *)(gen_frame + 0x18)) = param_5[4];
      (*(undefined4 *)(gen_frame + 0x1c)) = param_5[5];
      (*(undefined4 *)(gen_frame + 0x20)) = param_5[6];
      (*(undefined4 *)(gen_frame + 0x24)) = param_5[8];
      (*(undefined4 *)(gen_frame + 0x28)) = param_5[9];
      (*(undefined4 *)(gen_frame + 0x2c)) = param_5[10];
      (*(undefined4 *)(gen_frame + 0x30)) = param_5[0xc];
      (*(undefined4 *)(gen_frame + 0x34)) = param_5[0xd];
      uVar4 = param_5[0xe];
    }
    (*(undefined4 *)(gen_frame + 0x38)) = uVar4;
    uVar2 = F_009d9090(param_1,param_3,param_4,&(*(undefined4 *)(gen_frame + 0xc)));
    if (uVar2 != 0) {
      *(float *)(uVar2 + 0x58) = param_6;
      *(undefined1 *)(uVar2 + 0x5c) = (undefined1)param_8;
      *(undefined1 *)(uVar2 + 0x5d) = (undefined1)param_9;
      if (*(int *)(uVar2 + 0x30) != 0) {
        piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(uVar2 + 0x30) + 0x270)));
        if (piVar1 != (int *)0x0) {
          ((code *)*(gen_code32 *)(*piVar1 + 0x20))(piVar1,uVar2);
        }
        iVar3 = (int)param_7;
        if (0 < iVar3) {
          do {
            ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x30) + 0x24))))
                      (*(int * PTR32 *)(uVar2 + 0x30),(undefined4)gen_fl2bits((float)(float10)1));
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
      uVar4 = *(undefined4 *)(uVar2 + 0x40);
      param_2[1] = *(undefined4 *)(uVar2 + 0x44);
      *param_2 = uVar4;
      return (uint)param_2;
    }
  }
  param_2[1] = 0;
  *param_2 = 0;
  return (uint)param_2;
}

/* ref: FUN_009d94e0 */
uint F_009d94e0(float gen_a0)
{
  GEN_ENTER(0x9d94e0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  uint uVar1;
  
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  uVar1 = F_009d9020(&REFG(float, 0x14a0d58),param_1);
  return uVar1;
}

/* ref: FUN_009d9520 */
ulonglong F_009d9520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x9d9520u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong * puVar1;
  
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  puVar1 = (ulonglong *)
           F_009d9320(&REFG(float, 0x14a0d58),((undefined1 *)(gen_frame + 0x4)),param_1,param_2,param_3,param_4,param_5,param_6,
                        param_7);
  return *puVar1;
}

/* ref: FUN_009d9590 */
unsigned int F_009d9590(unsigned int gen_a0)
{
  GEN_ENTER(0x9d9590u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  
  if ((*(byte *)((int)this + 0x96) & 1) != 0) {
    piVar1 = ((int *)GEN_TOP((*(int *)((int)this + 0x40) + 8)));
    LOCK();
    iVar3 = *piVar1;
    *piVar1 = *piVar1;
    UNLOCK();
    if (iVar3 == 1) {
      F_009a4cc0(*(undefined4 *)((int)this + 0x50),*(undefined4 *)((int)this + 0x54));
      uVar4 = F_009d9520(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x40) + 0x60))),
                           *(undefined4 *)((int)this + 0x48),this,*(float *)((int)this + 0x58),
                           *(float *)((int)this + 0x5c),(uint)*(byte *)((int)this + 0x94),
                           (uint)*(byte *)((int)this + 0x95));
      *(ulonglong *)((int)this + 0x50) = uVar4;
      F_009a4e20((int)uVar4,(int)(uVar4 >> 0x20),(uint)(*(byte *)((int)this + 0x96) >> 2 & 1));
      F_009a4e90(*(undefined4 *)((int)this + 0x50),*(undefined4 *)((int)this + 0x54),
                   (uint)(*(byte *)((int)this + 0x96) >> 3 & 1));
      F_009a4f70(*(undefined4 *)((int)this + 0x50),*(undefined4 *)((int)this + 0x54),
                   *(float *)((int)this + 0x80),*(float *)((int)this + 0x84),
                   *(float *)((int)this + 0x88),*(float *)((int)this + 0x8c));
      F_009a5020(*(undefined4 *)((int)this + 0x50),*(undefined4 *)((int)this + 0x54),
                   *(float *)((int)this + 0x60));
      F_009a50b0(*(undefined4 *)((int)this + 0x50),*(undefined4 *)((int)this + 0x54),
                   *(float *)((int)this + 100));
      if ((*(byte *)((int)this + 0x96) & 2) != 0) {
        F_009a4d50(*(undefined4 *)((int)this + 0x50),*(undefined4 *)((int)this + 0x54));
        *(byte *)((int)this + 0x96) = *(byte *)((int)this + 0x96) & 0xfd;
      }
      iVar3 = 0;
      uVar2 = 1;
      do {
        if ((*(uint *)((int)this + 0x90) & uVar2) != 0) {
          F_009a4f00(*(undefined4 *)((int)this + 0x50),*(undefined4 *)((int)this + 0x54),0,iVar3);
        }
        iVar3 = iVar3 + 1;
        uVar2 = uVar2 << 1 | (uint)((int)uVar2 < 0);
      } while (iVar3 < 0x20);
      piVar1 = *(int * PTR32 *)((int)this + 0x44);
      *(byte *)((int)this + 0x96) = *(byte *)((int)this + 0x96) & 0xfe;
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,this);
      }
    }
  }
  return 0;
}

/* ref: FUN_009d9700 */
uint F_009d9700(void)
{
  GEN_ENTER(0x9d9700u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x12020];
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  int * piVar4;
  undefined4 * puVar5;
  undefined * this;
  int * piVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int * piVar11;
  float10 fVar12;
  
  uVar8 = 0x2014;
  (*(int *)(gen_frame + 0x12018)) = 0x9d970d;
  if (REFG(char, 0x14a06d5) != '\0') {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x14a0a8c));
    piVar11 = ((int *)GEN_TOP(*REFG(int * PTR32, 0x14a0a70)));
    iVar9 = 0;
    (*(int *)(gen_frame + 0x12018)) = 0;
    if (piVar11 != REFG(int * PTR32, 0x14a0a70)) {
      do {
        iVar10 = *(int *)(piVar11[3] + 0x174);
        if (((iVar10 == 0) ||
            ((bVar7 = F_009a4da0(*(undefined4 *)(iVar10 + 0x50),*(undefined4 *)(iVar10 + 0x54)),
             iVar9 = (*(int *)(gen_frame + 0x12018)), bVar7 == 0 && ((*(byte *)(iVar10 + 0x96) & 1) == 0)))) &&
           (iVar9 < 0x800)) {
          ((int *)(gen_frame + 0x10008))[(int)(iVar9)] = piVar11[3];
          iVar9 = iVar9 + 1;
          (*(int *)(gen_frame + 0x12018)) = iVar9;
        }
        if (*(char *)((int)piVar11 + 0x11) == '\0') {
          piVar4 = (int *)piVar11[2];
          if (*(char *)((int)piVar4 + 0x11) == '\0') {
            cVar3 = *(char *)(*piVar4 + 0x11);
            piVar11 = piVar4;
            piVar4 = (int *)*piVar4;
            while (cVar3 == '\0') {
              cVar3 = *(char *)(*piVar4 + 0x11);
              piVar11 = piVar4;
              piVar4 = (int *)*piVar4;
            }
          }
          else {
            cVar3 = *(char *)(piVar11[1] + 0x11);
            piVar6 = (int *)piVar11[1];
            piVar4 = piVar11;
            while ((piVar11 = piVar6, cVar3 == '\0' && (piVar4 == (int *)piVar11[2]))) {
              cVar3 = *(char *)(piVar11[1] + 0x11);
              piVar6 = (int *)piVar11[1];
              piVar4 = piVar11;
            }
          }
        }
      } while (piVar11 != REFG(int * PTR32, 0x14a0a70));
    }
    iVar10 = 0;
    if (0 < iVar9) {
      do {
        puVar5 = (undefined4 *)((int *)(gen_frame + 0x10008))[(int)(iVar10)];
        if (puVar5 != (undefined4 *)0x0) {
          ((code *)*(gen_code32 *)*puVar5)(puVar5,1);
          iVar9 = (*(int *)(gen_frame + 0x12018));
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar9);
    }
    piVar11 = ((int *)GEN_TOP(*REFG(int * PTR32, 0x14a0a80)));
    (*(int *)(gen_frame + 0x12018)) = 0;
    if (piVar11 != REFG(int * PTR32, 0x14a0a80)) {
      do {
        F_009d9590((undefined *)piVar11[3]);
        iVar9 = piVar11[3];
        if ((*(byte *)(iVar9 + 0x96) & 0x10) != 0) {
          uVar8 = *(uint *)(iVar9 + 0x54);
          (*(float *)(gen_frame + 0x12010)) = gen_bits2f(iVar9);
          (*(int *)(gen_frame + 0x12008)) = *(int *)(iVar9 + 0x50);
          if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
            *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
            F_00994de0(&REFG(float, 0x14a0d58));
            F_00c47de6(((code *)REFP(0x107c350)));
          }
          if ((((((0x7ff < uVar8) || ((*(int *)(gen_frame + 0x12008)) == 0)) ||
                (iVar10 = uVar8 * 0x68, iVar9 = iVar10 + 0x1000 + REFG(int, 0x14a0eb0),
                *(int *)(iVar10 + 0x1040 + REFG(int, 0x14a0eb0)) != (*(int *)(gen_frame + 0x12008)))) ||
               (iVar10 = *(int *)(iVar9 + 0x3c), iVar10 == 3)) ||
              ((iVar10 != 4 &&
               ((iVar9 = *(int *)(iVar9 + 0x30), iVar9 == 0 ||
                (((*(uint *)(iVar9 + 0x1d0) & 0x40000) != 0 && (*(int *)(iVar9 + 0x1e0) == 0))))))))
             && ((*(byte *)((int)gen_fl2bits((*(float *)(gen_frame + 0x12010))) + 0x96) & 1) == 0)) {
            ((int *)(gen_frame + 0x10008))[(int)((*(int *)(gen_frame + 0x12018)))] = piVar11[3];
            (*(int *)(gen_frame + 0x12018)) = (*(int *)(gen_frame + 0x12018)) + 1;
          }
        }
        if (*(char *)((int)piVar11 + 0x11) == '\0') {
          piVar4 = (int *)piVar11[2];
          if (*(char *)((int)piVar4 + 0x11) == '\0') {
            cVar3 = *(char *)(*piVar4 + 0x11);
            piVar11 = piVar4;
            piVar4 = (int *)*piVar4;
            while (cVar3 == '\0') {
              cVar3 = *(char *)(*piVar4 + 0x11);
              piVar11 = piVar4;
              piVar4 = (int *)*piVar4;
            }
          }
          else {
            cVar3 = *(char *)(piVar11[1] + 0x11);
            piVar6 = (int *)piVar11[1];
            piVar4 = piVar11;
            while ((piVar11 = piVar6, cVar3 == '\0' && (piVar4 == (int *)piVar11[2]))) {
              cVar3 = *(char *)(piVar11[1] + 0x11);
              piVar6 = (int *)piVar11[1];
              piVar4 = piVar11;
            }
          }
        }
      } while (piVar11 != REFG(int * PTR32, 0x14a0a80));
    }
    iVar9 = 0;
    if (0 < (*(int *)(gen_frame + 0x12018))) {
      do {
        this = (undefined *)((int *)(gen_frame + 0x10008))[(int)(iVar9)];
        if (this != (undefined *)0x0) {
          F_009cfa70(this);
          F_00406ad0(this);
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < (*(int *)(gen_frame + 0x12018)));
    }
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x14a0a8c));
    (*(bool *)(gen_frame + 0x12014)) = *(int *)(REFG(int, 0x1371298) + 0x30) == 0;
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58));
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    iVar9 = REFG(int, 0x14a09a8);
    REFG(undefined1, 0x14a22cc) = (*(bool *)(gen_frame + 0x12014));
    if ((REFG(int, 0x137104c) != 0) &&
       (uVar8 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0x6f), iVar10 = REFG(int, 0x1371298),
       *(int *)(uVar8 + 0x14) != 0)) {
      uVar1 = *(undefined4 *)(iVar9 + 0xd8);
      uVar2 = *(undefined4 *)(iVar9 + 0xdc);
      *(undefined4 *)(REFG(int, 0x1371298) + 0x10) = *(undefined4 *)(iVar9 + 0xd4);
      *(undefined4 *)(iVar10 + 0x14) = uVar1;
      *(undefined4 *)(iVar10 + 0x18) = uVar2;
      iVar10 = REFG(int, 0x1371298);
      uVar1 = *(undefined4 *)(iVar9 + 0xe4);
      uVar2 = *(undefined4 *)(iVar9 + 0xe8);
      *(undefined4 *)(REFG(int, 0x1371298) + 0x20) = *(undefined4 *)(iVar9 + 0xe0);
      *(undefined4 *)(iVar10 + 0x24) = uVar1;
      *(undefined4 *)(iVar10 + 0x28) = uVar2;
    }
    (*(float *)(gen_frame + 0x12010)) = REFG(float, 0x14a0718);
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58));
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    fVar12 = (float10)REFG(int, 0x14a0eb4);
    if (REFG(int, 0x14a0eb4) < 0) {
      fVar12 = fVar12 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    REFG(undefined4, 0x14a22c0) = 0;
    REFG(undefined4, 0x14a1ebc) = 0;
    *(float *)&REFG(undefined, 0x14a0eb8) =
         ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0x12010)) * (float10)*(double *)&REFG(undefined, 0x10943d8)) / fVar12)));
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x14a0ea8) + 0x68))))(REFG(int * PTR32, 0x14a0ea8));
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x14a0ea8) + 0x50))))(REFG(int * PTR32, 0x14a0ea8));
    F_009789e0(&REFG(float, 0x14a0d58));
    F_009d8d50(&REFG(float, 0x14a0d58));
    uVar8 = F_009d8ed0(&REFG(float, 0x14a0d58));
  }
  return uVar8;
}

/* ref: Apricot::Engine::Data::Communicator::Model::vf1 */
uint F_009d9b20(unsigned int gen_a0)
{
  GEN_ENTER(0x9d9b20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: Apricot::Engine::Data::Communicator::Texture::vf1 */
uint F_009d9b60(unsigned int gen_a0)
{
  GEN_ENTER(0x9d9b60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: Apricot::Engine::Data::Communicator::FunctionCurve::vf1 */
uint F_009d9ce0(unsigned int gen_a0)
{
  GEN_ENTER(0x9d9ce0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)(in_ecx + 4);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = &REFG(undefined4, 0x14a0a38);
  }
  return (uint)puVar1;
}

/* ref: Apricot::Engine::Data::Communicator::FunctionCurve::vf2 */
uint F_009d9cf0(unsigned int gen_a0)
{
  GEN_ENTER(0x9d9cf0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(uint * PTR32 *)(in_ecx + 4) == (uint *)0x0) {
    return (REFG(undefined4, 0x14a0a38) >> 9 & 0xffff) * 8 + 0x13 & 0xfffffff0;
  }
  return (**(uint * PTR32 *)(in_ecx + 4) >> 9 & 0xffff) * 8 + 0x13 & 0xfffffff0;
}

/* ref: Apricot::Engine::Data::Communicator::ValueFunctionCurve::vf1 */
uint F_009d9d60(unsigned int gen_a0)
{
  GEN_ENTER(0x9d9d60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 8;
}

/* ref: Apricot::Engine::Data::Communicator::ValueFunctionCurve::vf2 */
uint F_009d9d70(unsigned int gen_a0)
{
  GEN_ENTER(0x9d9d70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x40;
}

/* ref: Apricot::Engine::Data::Communicator::LaserParticle::vf1 */
uint F_009d9e00(unsigned int gen_a0)
{
  GEN_ENTER(0x9d9e00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 8;
}

/* ref: Apricot::Engine::Data::Communicator::LaserParticle::vf2 */
uint F_009d9e10(unsigned int gen_a0)
{
  GEN_ENTER(0x9d9e10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x90;
}

/* ref: Apricot::Engine::Data::Communicator::PolygonParticle::vf1 */
uint F_009d9e60(unsigned int gen_a0)
{
  GEN_ENTER(0x9d9e60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 8;
}

/* ref: Apricot::Engine::Data::Communicator::DecalRingParticle::vf1 */
uint F_009d9ed0(unsigned int gen_a0)
{
  GEN_ENTER(0x9d9ed0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 8;
}

/* ref: Apricot::Engine::Data::Communicator::DecalRingParticle::vf2 */
unsigned int F_009d9ee0(unsigned int gen_a0)
{
  GEN_ENTER(0x9d9ee0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Communicator::DecalRingParticle::vf3 */
unsigned int F_009d9ef0(unsigned int gen_a0)
{
  GEN_ENTER(0x9d9ef0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::Binder::vf1 */
uint F_009d9f10(unsigned int gen_a0)
{
  GEN_ENTER(0x9d9f10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x14);
}

/* ref: Apricot::Engine::Data::Runtime::Binder::vf2 */
byte F_009d9f20(unsigned int gen_a0)
{
  GEN_ENTER(0x9d9f20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(char *)(in_ecx + 0x18) != '\0';
}

/* ref: Apricot::Engine::Data::Runtime::Binder::vf3 */
byte F_009d9f30(unsigned int gen_a0)
{
  GEN_ENTER(0x9d9f30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(char *)(in_ecx + 0x19) != '\0';
}

/* ref: Apricot::Engine::Data::Runtime::Binder::vf4 */
byte F_009d9f40(unsigned int gen_a0)
{
  GEN_ENTER(0x9d9f40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(char *)(in_ecx + 0x1a) != '\0';
}

/* ref: Apricot::Engine::Data::Runtime::Binder::vf5 */
uint F_009d9f50(unsigned int gen_a0)
{
  GEN_ENTER(0x9d9f50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 0x1b);
}

/* ref: Apricot::Engine::Data::Runtime::Binder::vf6 */
uint F_009d9f60(unsigned int gen_a0)
{
  GEN_ENTER(0x9d9f60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 0x1c);
}

/* ref: Apricot::Engine::Data::Runtime::Binder::vf7 */
uint F_009d9f70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9d9f70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 4 + param_2 * 4);
}

/* ref: Apricot::Engine::Data::Runtime::Binder::vf8 */
uint F_009d9f80(unsigned int gen_a0)
{
  GEN_ENTER(0x9d9f80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x20);
}

/* ref: Apricot::Engine::Data::Runtime::Binder::vf9 */
uint F_009d9f90(unsigned int gen_a0)
{
  GEN_ENTER(0x9d9f90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x20);
}

/* ref: Apricot::Engine::Data::Runtime::Binder::vf10 */
uint F_009d9fa0(unsigned int gen_a0)
{
  GEN_ENTER(0x9d9fa0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x20);
}

/* ref: Apricot::Engine::Data::Runtime::Binder::vf11 */
uint F_009d9fb0(unsigned int gen_a0)
{
  GEN_ENTER(0x9d9fb0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x20);
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf2 */
uint F_009d9fc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9d9fc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)(this + 4) = param_1;
  *(undefined4 *)(this + 8) = param_2;
  return param_1;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf3 */
uint F_009d9fe0(unsigned int gen_a0)
{
  GEN_ENTER(0x9d9fe0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf4 */
uint F_009d9ff0(unsigned int gen_a0)
{
  GEN_ENTER(0x9d9ff0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8);
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf17 */
uint F_009da000(unsigned int gen_a0)
{
  GEN_ENTER(0x9da000u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x9c);
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf18 */
unsigned int F_009da010(unsigned int gen_a0)
{
  GEN_ENTER(0x9da010u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(int *)(in_ecx + 0x9c) = *(int *)(in_ecx + 0x9c) + 1;
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf19 */
unsigned int F_009da020(unsigned int gen_a0)
{
  GEN_ENTER(0x9da020u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(int *)(in_ecx + 0x9c) = *(int *)(in_ecx + 0x9c) + -1;
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf33 */
unsigned int F_009da030(unsigned int gen_a0)
{
  GEN_ENTER(0x9da030u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf34 */
unsigned int F_009da040(unsigned int gen_a0)
{
  GEN_ENTER(0x9da040u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf35 */
unsigned int F_009da050(unsigned int gen_a0)
{
  GEN_ENTER(0x9da050u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf36 */
unsigned int F_009da060(unsigned int gen_a0)
{
  GEN_ENTER(0x9da060u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf37 */
unsigned int F_009da070(unsigned int gen_a0)
{
  GEN_ENTER(0x9da070u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf38 */
unsigned int F_009da080(unsigned int gen_a0)
{
  GEN_ENTER(0x9da080u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf39 */
unsigned int F_009da090(unsigned int gen_a0)
{
  GEN_ENTER(0x9da090u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf40 */
unsigned int F_009da0a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da0a0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf41 */
unsigned int F_009da0b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da0b0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf42 */
unsigned int F_009da0c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da0c0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf43 */
unsigned int F_009da0d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da0d0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf44 */
unsigned int F_009da0e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da0e0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf45 */
unsigned int F_009da0f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da0f0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf46 */
unsigned int F_009da100(unsigned int gen_a0)
{
  GEN_ENTER(0x9da100u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf47 */
unsigned int F_009da110(unsigned int gen_a0)
{
  GEN_ENTER(0x9da110u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf48 */
unsigned int F_009da120(unsigned int gen_a0)
{
  GEN_ENTER(0x9da120u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf49 */
unsigned int F_009da130(unsigned int gen_a0)
{
  GEN_ENTER(0x9da130u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf50 */
unsigned int F_009da140(unsigned int gen_a0)
{
  GEN_ENTER(0x9da140u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf28 */
uint F_009da150(unsigned int gen_a0)
{
  GEN_ENTER(0x9da150u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x38) & 1;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf29 */
unsigned int F_009da160(unsigned int gen_a0)
{
  GEN_ENTER(0x9da160u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf30 */
unsigned int F_009da170(unsigned int gen_a0)
{
  GEN_ENTER(0x9da170u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf31 */
unsigned int F_009da180(unsigned int gen_a0)
{
  GEN_ENTER(0x9da180u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf32 */
unsigned int F_009da190(unsigned int gen_a0)
{
  GEN_ENTER(0x9da190u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf51 */
uint F_009da1a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da1a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x38) >> 1 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf52 */
uint F_009da1b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da1b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x38) >> 2 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf53 */
uint F_009da1c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da1c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x38) >> 3 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf54 */
uint F_009da1d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da1d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x38) >> 4 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf55 */
uint F_009da1e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da1e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x38) >> 5 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf56 */
unsigned int F_009da1f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da1f0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf57 */
unsigned int F_009da200(unsigned int gen_a0)
{
  GEN_ENTER(0x9da200u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf58 */
uint F_009da210(unsigned int gen_a0)
{
  GEN_ENTER(0x9da210u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x38) >> 6 & 0x1f;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf59 */
uint F_009da220(unsigned int gen_a0)
{
  GEN_ENTER(0x9da220u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x38) >> 0xb & 0x1ff;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf60 */
uint F_009da230(unsigned int gen_a0)
{
  GEN_ENTER(0x9da230u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x38) >> 0x14 & 0xf;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf61 */
uint F_009da240(unsigned int gen_a0)
{
  GEN_ENTER(0x9da240u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x3b) & 0xf;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf62 */
uint F_009da250(unsigned int gen_a0)
{
  GEN_ENTER(0x9da250u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x38) >> 0x1c;
}

/* ref: Apricot::Engine::Data::Runtime::Effector::vf1 */
uint F_009da260(unsigned int gen_a0)
{
  GEN_ENTER(0x9da260u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 8);
}

/* ref: Apricot::Engine::Data::Runtime::Effector::vf2 */
uint F_009da270(unsigned int gen_a0)
{
  GEN_ENTER(0x9da270u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 9);
}

/* ref: Apricot::Engine::Data::Runtime::Effector::vf3 */
uint F_009da280(unsigned int gen_a0)
{
  GEN_ENTER(0x9da280u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 10);
}

/* ref: Apricot::Engine::Data::Runtime::Effector::vf4 */
byte F_009da290(unsigned int gen_a0)
{
  GEN_ENTER(0x9da290u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(char *)(in_ecx + 0xb) != '\0';
}

/* ref: Apricot::Engine::Data::Runtime::Effector::vf5 */
byte F_009da2a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da2a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(char *)(in_ecx + 0xc) != '\0';
}

/* ref: Apricot::Engine::Data::Runtime::Effector::vf6 */
uint F_009da2b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da2b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(short *)(in_ecx + 4);
}

/* ref: Apricot::Engine::Data::Runtime::Effector::vf7 */
uint F_009da2c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da2c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(short *)(in_ecx + 6);
}

/* ref: Apricot::Engine::Data::Runtime::Effector::vf8 */
uint F_009da2d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da2d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x10);
}

/* ref: Apricot::Engine::Data::Runtime::Effector::vf9 */
uint F_009da2e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da2e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x10);
}

/* ref: Apricot::Engine::Data::Runtime::Effector::vf10 */
uint F_009da2f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da2f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x10);
}

/* ref: Apricot::Engine::Data::Runtime::Effector::vf11 */
uint F_009da300(unsigned int gen_a0)
{
  GEN_ENTER(0x9da300u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x10);
}

/* ref: Apricot::Engine::Data::Runtime::Effector::vf12 */
uint F_009da310(unsigned int gen_a0)
{
  GEN_ENTER(0x9da310u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x10);
}

/* ref: Apricot::Engine::Data::Runtime::Model::vf1 */
uint F_009da320(unsigned int gen_a0)
{
  GEN_ENTER(0x9da320u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Apricot::Engine::Data::Runtime::Scheduler::vf1 */
uint F_009da330(unsigned int gen_a0)
{
  GEN_ENTER(0x9da330u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 0xc);
}

/* ref: Apricot::Engine::Data::Runtime::Scheduler::vf2 */
uint F_009da340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9da340u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 4) + param_2 * 4;
}

/* ref: Apricot::Engine::Data::Runtime::Scheduler::vf3 */
uint F_009da350(unsigned int gen_a0)
{
  GEN_ENTER(0x9da350u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 0xd);
}

/* ref: Apricot::Engine::Data::Runtime::Scheduler::vf4 */
uint F_009da360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9da360u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 8) + param_2 * 4;
}

/* ref: Apricot::Engine::Data::Runtime::Texture::vf1 */
uint F_009da370(unsigned int gen_a0)
{
  GEN_ENTER(0x9da370u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: Apricot::Engine::Data::Runtime::Timeline::vf1 */
uint F_009da380(unsigned int gen_a0)
{
  GEN_ENTER(0x9da380u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8) >> 0x10 | (*(uint *)(in_ecx + 0xc) & 0xff) << 0x10;
}

/* ref: Apricot::Engine::Data::Runtime::Timeline::vf2 */
uint F_009da3a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da3a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  return (uint)((ulonglong)*(undefined8 *)(this + 8) >> 0x28);
}

/* ref: Apricot::Engine::Data::Runtime::Timeline::vf3 */
uint F_009da3c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da3c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8) & 0xff;
}

/* ref: Apricot::Engine::Data::Runtime::Timeline::vf4 */
uint F_009da3d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da3d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 0x10);
}

/* ref: Apricot::Engine::Data::Runtime::Timeline::vf5 */
uint F_009da3e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9da3e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x2a + *(int *)(in_ecx + 0x14);
}

/* ref: Apricot::Engine::Data::Runtime::Timeline::vf6 */
uint F_009da3f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9da3f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0xa4 + *(int *)(in_ecx + 0x18);
}

/* ref: Apricot::Engine::Data::Runtime::FunctionCurve::vf1 */
uint F_009da410(unsigned int gen_a0)
{
  GEN_ENTER(0x9da410u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: Apricot::Engine::Data::Runtime::FunctionCurve::vf2 */
uint F_009da420(unsigned int gen_a0)
{
  GEN_ENTER(0x9da420u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (**(uint * PTR32 *)(in_ecx + 4) >> 9 & 0xffff) * 8 + 0x13 & 0xfffffff0;
}

/* ref: Apricot::Engine::Data::Runtime::Value::vf1 */
unsigned int F_009da450(unsigned int gen_a0)
{
  GEN_ENTER(0x9da450u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::Value::vf2 */
unsigned int F_009da460(unsigned int gen_a0)
{
  GEN_ENTER(0x9da460u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::ValueFunctionCurve::vf1 */
uint F_009da470(unsigned int gen_a0)
{
  GEN_ENTER(0x9da470u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Apricot::Engine::Data::Runtime::ValueFunctionCurve::vf2 */
uint F_009da480(unsigned int gen_a0)
{
  GEN_ENTER(0x9da480u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xc;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color1::vf3 */
uint F_009da490(unsigned int gen_a0)
{
  GEN_ENTER(0x9da490u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) & 1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color1::vf4 */
uint F_009da4a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da4a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 1 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color1::vf5 */
uint F_009da4b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da4b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 2 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color1::vf6 */
uint F_009da4c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da4c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 3 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color1::vf7 */
uint F_009da4d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da4d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 4 & 7;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color1::vf8 */
byte F_009da4e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da4e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (*(ushort *)(in_ecx + 4) & 0x380) != 0;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color1::vf9 */
byte F_009da500(unsigned int gen_a0)
{
  GEN_ENTER(0x9da500u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (*(ushort *)(in_ecx + 4) & 0xc00) != 0;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color1::vf10 */
uint F_009da520(unsigned int gen_a0)
{
  GEN_ENTER(0x9da520u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 0xc & 3;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color1::vf11 */
uint F_009da530(unsigned int gen_a0)
{
  GEN_ENTER(0x9da530u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)(*(ushort *)(in_ecx + 4) >> 0xe);
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color1::vf12 */
uint F_009da540(unsigned int gen_a0)
{
  GEN_ENTER(0x9da540u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 6) & 7;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color1::vf1 */
uint F_009da550(unsigned int gen_a0)
{
  GEN_ENTER(0x9da550u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x10;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color2::vf2 */
uint F_009da560(unsigned int gen_a0)
{
  GEN_ENTER(0x9da560u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) & 1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color2::vf3 */
uint F_009da570(unsigned int gen_a0)
{
  GEN_ENTER(0x9da570u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 1 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color2::vf4 */
uint F_009da580(unsigned int gen_a0)
{
  GEN_ENTER(0x9da580u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 2 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color2::vf11 */
uint F_009da590(unsigned int gen_a0)
{
  GEN_ENTER(0x9da590u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 3 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color2::vf5 */
uint F_009da5a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da5a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 4 & 7;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color2::vf6 */
uint F_009da5b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da5b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 7 & 7;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color2::vf7 */
uint F_009da5c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da5c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 10 & 3;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color2::vf8 */
uint F_009da5d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da5d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 0xc & 3;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color2::vf9 */
uint F_009da5e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da5e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)(*(ushort *)(in_ecx + 4) >> 0xe);
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color2::vf10 */
uint F_009da5f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da5f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 6) & 7;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Normal::vf2 */
uint F_009da600(unsigned int gen_a0)
{
  GEN_ENTER(0x9da600u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) & 1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Normal::vf3 */
uint F_009da610(unsigned int gen_a0)
{
  GEN_ENTER(0x9da610u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 1 & 7;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Normal::vf4 */
uint F_009da620(unsigned int gen_a0)
{
  GEN_ENTER(0x9da620u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 4 & 3;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Normal::vf5 */
uint F_009da630(unsigned int gen_a0)
{
  GEN_ENTER(0x9da630u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 6 & 3;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Normal::vf6 */
uint F_009da640(unsigned int gen_a0)
{
  GEN_ENTER(0x9da640u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 8 & 7;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Normal::vf7 */
uint F_009da650(unsigned int gen_a0)
{
  GEN_ENTER(0x9da650u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 8;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Reflection::vf2 */
uint F_009da660(unsigned int gen_a0)
{
  GEN_ENTER(0x9da660u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 4) & 1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Reflection::vf3 */
uint F_009da670(unsigned int gen_a0)
{
  GEN_ENTER(0x9da670u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 4) >> 1 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Reflection::vf4 */
uint F_009da680(unsigned int gen_a0)
{
  GEN_ENTER(0x9da680u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 4) >> 2 & 7;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Reflection::vf5 */
uint F_009da690(unsigned int gen_a0)
{
  GEN_ENTER(0x9da690u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)(*(byte *)(in_ecx + 4) >> 5);
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Reflection::vf6 */
uint F_009da6a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da6a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 8;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Distortion::vf2 */
uint F_009da6b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da6b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) & 1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Distortion::vf3 */
uint F_009da6c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da6c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 1 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Distortion::vf4 */
uint F_009da6d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da6d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 2 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Distortion::vf5 */
uint F_009da6e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da6e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 3 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Distortion::vf6 */
uint F_009da6f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da6f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 4 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Distortion::vf7 */
uint F_009da700(unsigned int gen_a0)
{
  GEN_ENTER(0x9da700u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 5 & 7;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Distortion::vf8 */
uint F_009da710(unsigned int gen_a0)
{
  GEN_ENTER(0x9da710u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 8 & 3;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Distortion::vf9 */
uint F_009da720(unsigned int gen_a0)
{
  GEN_ENTER(0x9da720u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 10 & 3;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Distortion::vf10 */
uint F_009da730(unsigned int gen_a0)
{
  GEN_ENTER(0x9da730u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 0xc & 7;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Distortion::vf11 */
uint F_009da740(unsigned int gen_a0)
{
  GEN_ENTER(0x9da740u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 8;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Palette::vf2 */
uint F_009da750(unsigned int gen_a0)
{
  GEN_ENTER(0x9da750u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 4) & 1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Palette::vf3 */
uint F_009da760(unsigned int gen_a0)
{
  GEN_ENTER(0x9da760u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 4) >> 1 & 7;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Palette::vf4 */
uint F_009da770(unsigned int gen_a0)
{
  GEN_ENTER(0x9da770u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 8;
}

/* ref: Apricot::Engine::Data::Runtime::LaserParticle::vf1 */
uint F_009da780(unsigned int gen_a0)
{
  GEN_ENTER(0x9da780u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Apricot::Engine::Data::Runtime::LaserParticle::vf2 */
uint F_009da790(unsigned int gen_a0)
{
  GEN_ENTER(0x9da790u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x1c;
}

/* ref: Apricot::Engine::Data::Runtime::LightModelParticle::vf1 */
uint F_009da7a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da7a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 4);
}

/* ref: Apricot::Engine::Data::Runtime::PolygonParticle::vf1 */
uint F_009da7b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da7b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Apricot::Engine::Data::Runtime::PowderParticle::vf1 */
byte F_009da7c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da7c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(char *)(in_ecx + 4) != '\0';
}

/* ref: Apricot::Engine::Data::Runtime::PowderParticle::vf2 */
uint F_009da7d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da7d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 5);
}

/* ref: Apricot::Engine::Data::Runtime::PowderParticle::vf3 */
unsigned int F_009da7e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da7e0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::WindmillParticle::vf1 */
uint F_009da7f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da7f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)*(byte *)(in_ecx + 4);
}

/* ref: Apricot::Engine::Data::Runtime::DecalParticle::vf1 */
unsigned int F_009da800(unsigned int gen_a0)
{
  GEN_ENTER(0x9da800u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::DecalRingParticle::vf1 */
uint F_009da810(unsigned int gen_a0)
{
  GEN_ENTER(0x9da810u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Apricot::Engine::Data::Runtime::DecalRingParticle::vf2 */
unsigned int F_009da820(unsigned int gen_a0)
{
  GEN_ENTER(0x9da820u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::DecalRingParticle::vf3 */
unsigned int F_009da830(unsigned int gen_a0)
{
  GEN_ENTER(0x9da830u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: FUN_009da840 */
uint F_009da840(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x9da840u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = REFG(float, 0x1087f04);
  fVar2 = ((float10)GEN_TOD(fsin((float10)param_2)));
  fVar3 = ((float10)GEN_TOD(fcos((float10)param_2)));
  *param_1 = (float)fVar3;
  param_1[8] = (float)fVar2;
  param_1[1] = 0.0;
  param_1[2] = ((float)GEN_TOF(-(float10)(float)fVar2));
  param_1[3] = 0.0;
  param_1[4] = 0.0;
  param_1[5] = fVar1;
  param_1[6] = 0.0;
  param_1[7] = 0.0;
  param_1[9] = 0.0;
  param_1[10] = (float)fVar3;
  param_1[0xb] = 0.0;
  param_1[0xc] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0xe] = 0.0;
  param_1[0xf] = fVar1;
  return (uint)param_1;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf1 */
unsigned int F_009da8e0(void)
{
  GEN_ENTER(0x9da8e0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf2 */
unsigned int F_009da8f0(void)
{
  GEN_ENTER(0x9da8f0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf8 */
uint F_009da900(void)
{
  GEN_ENTER(0x9da900u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf24 */
unsigned int F_009da910(void)
{
  GEN_ENTER(0x9da910u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf25 */
unsigned int F_009da920(void)
{
  GEN_ENTER(0x9da920u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf26 */
unsigned int F_009da930(void)
{
  GEN_ENTER(0x9da930u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf27 */
unsigned int F_009da940(void)
{
  GEN_ENTER(0x9da940u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf28 */
unsigned int F_009da950(void)
{
  GEN_ENTER(0x9da950u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf29 */
unsigned int F_009da960(void)
{
  GEN_ENTER(0x9da960u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf30 */
unsigned int F_009da970(void)
{
  GEN_ENTER(0x9da970u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::Engine::Instance::ParticleInstance::vf8 */
uint F_009da980(void)
{
  GEN_ENTER(0x9da980u, 0u, 0u, 0u, 0u);
  return 7;
}

/* ref: FUN_009da9c0 */
uint F_009da9c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9da9c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x58) = param_2;
  return param_2;
}

/* ref: Apricot::VfxLightInterface::vf0 */
uint F_009daa10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9daa10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10de540));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::InterfaceBase::vf0 */
uint F_009daa50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9daa50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10de554));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_009dab00 */
uint F_009dab00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dab00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return (uint)this;
}

/* ref: FUN_009dab30 */
uint F_009dab30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dab30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return (uint)this;
}

/* ref: FUN_009dab60 */
unsigned int F_009dab60(unsigned int gen_a0)
{
  GEN_ENTER(0x9dab60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)this;
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  }
  piVar1 = *(int * PTR32 *)((int)this + 4);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  }
  piVar1 = *(int * PTR32 *)((int)this + 8);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: Apricot::ILoaderListenner::vf0 */
uint F_009dabd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dabd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10de534));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::IListenner::vf1 */
byte F_009dac10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dac10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Apricot::IListenner::vf2 */
unsigned int F_009dac20(void)
{
  GEN_ENTER(0x9dac20u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::IListenner::vf3 */
unsigned int F_009dac30(void)
{
  GEN_ENTER(0x9dac30u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::IListenner::vf4 */
unsigned int F_009dac40(void)
{
  GEN_ENTER(0x9dac40u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::IListenner::vf5 */
unsigned int F_009dac50(void)
{
  GEN_ENTER(0x9dac50u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::IListenner::vf6 */
unsigned int F_009dac60(void)
{
  GEN_ENTER(0x9dac60u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::IListenner::vf7 */
unsigned int F_009dac70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dac70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Apricot::IListenner::vf8 */
uint F_009dac80(void)
{
  GEN_ENTER(0x9dac80u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::IListenner::vf9 */
uint F_009dac90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dac90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0x107fc63;
}

/* ref: Apricot::IListenner::vf10 */
byte F_009daca0(void)
{
  GEN_ENTER(0x9daca0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::IListenner::vf11 */
unsigned int F_009dacb0(void)
{
  GEN_ENTER(0x9dacb0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::IListenner::vf12 */
byte F_009dacc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9dacc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Apricot::IListenner::vf13 */
byte F_009dacd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9dacd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Apricot::IListenner::vf24 */
unsigned int F_009dace0(void)
{
  GEN_ENTER(0x9dace0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::IListenner::vf25 */
uint F_009dacf0(void)
{
  GEN_ENTER(0x9dacf0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::IListenner::vf0 */
uint F_009dad00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dad00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[36])REFP(0x10de564));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_009dad30 */
unsigned int F_009dad30(float gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x9dad30u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  return 0;
}

/* ref: FUN_009dad50 */
uint F_009dad50(float gen_a0)
{
  GEN_ENTER(0x9dad50u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (int)((double)param_1 * *(double *)&REFG(undefined, 0x1088118));
}

/* ref: FUN_009dad70 */
uint F_009dad70(unsigned int gen_a0)
{
  GEN_ENTER(0x9dad70u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return (int)(char)param_1;
}

/* ref: FUN_009dadc0 */
uint F_009dadc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dadc0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  return (uint)in_ecx;
}

/* ref: FUN_009dae00 */
uint F_009dae00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9dae00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(ushort *)this = (ushort)((byte)param_1 & 3) | (short)param_3 * 4;
  *(undefined2 *)((int)this + 2) = (undefined2)param_2;
  return (uint)this;
}

/* ref: FUN_009dae30 */
unsigned int F_009dae30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9dae30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  ushort * puVar2;
  int * piVar3;
  uint uVar4;
  
  uVar4 = 0;
  *(undefined2 *)((int)this + 2) = 0xffff;
  *(undefined2 *)this = 1;
  piVar3 = param_1;
  if (param_2 != 0) {
    do {
      iVar1 = *piVar3;
      puVar2 = (ushort *)(piVar3 + 2);
      if (iVar1 == 0x5374546d) {
        *(ushort *)this = *puVar2 * 4 | *(ushort *)this & 3;
      }
      else if (iVar1 == 0x546c4e6f) {
        *(ushort *)((int)this + 2) = *puVar2;
      }
      else if (iVar1 == 0x62456e61) {
        *(ushort *)this = *(ushort *)this ^ (*puVar2 ^ *(ushort *)this) & 3;
      }
      uVar4 = uVar4 + 8 + (piVar3[1] + 3U & 0xfffffffc);
      piVar3 = ((int *)GEN_TOP(((int)puVar2 + (piVar3[1] + 3U & 0xfffffffc))));
    } while (uVar4 < param_2);
  }
  return 0;
}

/* ref: FUN_009daec0 */
unsigned int F_009daec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9daec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  int iVar1;
  byte * pbVar2;
  undefined4 * puVar3;
  
  *(byte *)this = *(byte *)this ^ (*param_1 ^ *(byte *)this) & 1;
  *(byte *)this = (*param_1 ^ *(byte *)this) & 2 ^ *(byte *)this;
  *(byte *)((int)this + 1) = param_1[1];
  *(byte *)((int)this + 2) = param_1[2];
  *(byte *)((int)this + 3) = param_1[3];
  *(byte *)((int)this + 4) = param_1[4];
  *(undefined2 *)((int)this + 6) = *(undefined2 *)(param_1 + 6);
  *(undefined2 *)((int)this + 8) = *(undefined2 *)(param_1 + 8);
  pbVar2 = param_1 + 10;
  puVar3 = (undefined4 *)((int)this + 10);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pbVar2;
    pbVar2 = pbVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  return 0;
}

/* ref: FUN_009daf30 */
unsigned int F_009daf30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9daf30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  int iVar1;
  byte * pbVar2;
  undefined4 * puVar3;
  
  *(byte *)this = *(byte *)this ^ (*param_1 ^ *(byte *)this) & 1;
  *(byte *)this = (*param_1 ^ *(byte *)this) & 2 ^ *(byte *)this;
  *(byte *)((int)this + 1) = param_1[1];
  *(byte *)((int)this + 2) = param_1[2];
  *(byte *)((int)this + 3) = param_1[3];
  *(byte *)((int)this + 4) = param_1[4];
  *(undefined2 *)((int)this + 6) = *(undefined2 *)(param_1 + 6);
  *(undefined2 *)((int)this + 8) = *(undefined2 *)(param_1 + 8);
  pbVar2 = param_1 + 10;
  puVar3 = (undefined4 *)((int)this + 10);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pbVar2;
    pbVar2 = pbVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  return 0;
}

/* ref: FUN_009dafa0 */
uint F_009dafa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x9dafa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  undefined4 param_9 = (undefined4)gen_a9;
  *(undefined1 *)((int)this + 2) = (undefined1)param_4;
  *(byte *)this = ((byte)param_2 & 1) * '\x02' | *(byte *)this & 0xfc | (byte)param_1 & 1;
  *(undefined1 *)((int)this + 1) = (undefined1)param_3;
  *(undefined1 *)((int)this + 3) = (undefined1)param_5;
  *(undefined2 *)((int)this + 6) = (undefined2)param_7;
  *(undefined1 *)((int)this + 4) = (undefined1)param_6;
  *(undefined2 *)((int)this + 8) = (undefined2)param_8;
  *(undefined4 *)((int)this + 10) = 0;
  *(undefined4 *)((int)this + 0xe) = 0;
  *(undefined4 *)((int)this + 0x12) = 0;
  *(undefined4 *)((int)this + 0x16) = 0;
  *(undefined4 *)((int)this + 0x1a) = 0;
  *(undefined4 *)((int)this + 0x1e) = 0;
  *(undefined4 *)((int)this + 0x22) = 0;
  *(undefined4 *)((int)this + 0x26) = 0;
  F_00c49908((undefined4 *)((int)this + 10),0x20,param_9);
  return (uint)this;
}

/* ref: FUN_009db020 */
unsigned int F_009db020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9db020u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  uint * puVar2;
  uint * puVar3;
  uint uVar4;
  
  *(undefined4 *)((int)this + 1) = 0xffffffff;
  *(byte *)this = *(byte *)this & 0xfd | 1;
  *(undefined4 *)((int)this + 6) = 0;
  *(undefined4 *)((int)this + 10) = 0;
  *(undefined4 *)((int)this + 0xe) = 0;
  *(undefined4 *)((int)this + 0x12) = 0;
  *(undefined4 *)((int)this + 0x16) = 0;
  *(undefined4 *)((int)this + 0x1a) = 0;
  *(undefined4 *)((int)this + 0x1e) = 0;
  uVar4 = 0;
  *(undefined4 *)((int)this + 0x22) = 0;
  *(undefined4 *)((int)this + 0x26) = 0;
  puVar3 = param_1;
  if (param_2 != 0) {
    do {
      uVar1 = *puVar3;
      puVar2 = puVar3 + 2;
      if (uVar1 < 0x45664e70) {
        if (uVar1 == 0x45664e6f) {
          *(char *)((int)this + 2) = (char)*puVar2;
        }
        else if (uVar1 == 0x42644e6f) {
          *(char *)((int)this + 3) = (char)*puVar2;
        }
        else if (uVar1 == 0x436c4e6f) {
          *(char *)((int)this + 4) = (char)*puVar2;
        }
        else if (uVar1 == 0x4564546d) {
          uVar1 = *puVar2;
          *(short *)((int)this + 8) = (short)uVar1;
          *(byte *)this = *(byte *)this ^ (((short)uVar1 == -1) * '\x02' ^ *(byte *)this) & 2;
        }
      }
      else if (uVar1 == 0x456d4e6f) {
        *(char *)((int)this + 1) = (char)*puVar2;
      }
      else if (uVar1 == 0x5374546d) {
        *(short *)((int)this + 6) = (short)*puVar2;
      }
      else if (uVar1 == 0x62456e61) {
        *(byte *)this = *(byte *)this ^ (*puVar2 != 0 ^ *(byte *)this) & 1;
      }
      uVar4 = uVar4 + 8 + (puVar3[1] + 3 & 0xfffffffc);
      puVar3 = ((uint *)GEN_TOP(((int)puVar2 + (puVar3[1] + 3 & 0xfffffffc))));
    } while (uVar4 < param_2);
  }
  return 0;
}

/* ref: FUN_009db150 */
uint F_009db150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9db150u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[3];
  return (uint)in_ecx;
}

/* ref: FUN_009db180 */
uint F_009db180(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x9db180u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float10 fVar1;
  
  fVar1 = (float10)param_2;
  *in_ecx = (float)(fVar1 * (float10)*in_ecx);
  in_ecx[1] = (float)((float10)in_ecx[1] * fVar1);
  in_ecx[2] = (float)(fVar1 * (float10)in_ecx[2]);
  in_ecx[3] = (float)(fVar1 * (float10)in_ecx[3]);
  return (uint)in_ecx;
}

/* ref: FUN_009db1b0 */
uint F_009db1b0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x9db1b0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float10 fVar1;
  
  fVar1 = (float10)param_2;
  *in_ecx = (float)((float10)*in_ecx / fVar1);
  in_ecx[1] = (float)((float10)in_ecx[1] / fVar1);
  in_ecx[2] = (float)((float10)in_ecx[2] / fVar1);
  in_ecx[3] = (float)((float10)in_ecx[3] / fVar1);
  return (uint)in_ecx;
}

/* ref: FUN_009db1e0 */
uint F_009db1e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9db1e0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  *in_ecx = (float)((float10)*param_2 * (float10)*in_ecx);
  in_ecx[1] = (float)((float10)param_2[1] * (float10)in_ecx[1]);
  in_ecx[2] = (float)((float10)param_2[2] * (float10)in_ecx[2]);
  in_ecx[3] = (float)((float10)param_2[3] * (float10)in_ecx[3]);
  return (uint)in_ecx;
}

/* ref: FUN_009db210 */
uint F_009db210(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x9db210u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float10 fVar1;
  
  fVar1 = (float10)param_3;
  *param_2 = (float)(fVar1 * (float10)*in_ecx);
  param_2[1] = (float)((float10)in_ecx[1] * fVar1);
  param_2[2] = (float)((float10)in_ecx[2] * fVar1);
  param_2[3] = (float)(fVar1 * (float10)in_ecx[3]);
  return (uint)param_2;
}

/* ref: FUN_009db240 */
uint F_009db240(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x9db240u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float10 fVar1;
  
  fVar1 = (float10)param_3;
  *param_2 = (float)((float10)*in_ecx / fVar1);
  param_2[1] = (float)((float10)in_ecx[1] / fVar1);
  param_2[2] = (float)((float10)in_ecx[2] / fVar1);
  param_2[3] = (float)((float10)in_ecx[3] / fVar1);
  return (uint)param_2;
}

/* ref: FUN_009db270 */
uint F_009db270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9db270u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  *param_1 = (float)((float10)*param_2 + (float10)*(float *)this);
  param_1[1] = ((float)GEN_TOF(((float10)param_2[1] + (float10)*(float *)((int)this + 4))));
  param_1[2] = ((float)GEN_TOF(((float10)param_2[2] + (float10)*(float *)((int)this + 8))));
  param_1[3] = ((float)GEN_TOF(((float10)param_2[3] + (float10)*(float *)((int)this + 0xc))));
  return (uint)param_1;
}

/* ref: FUN_009db2a0 */
uint F_009db2a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9db2a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  *param_1 = (float)((float10)*(float *)this - (float10)*param_2);
  param_1[1] = ((float)GEN_TOF(((float10)*(float *)((int)this + 4) - (float10)param_2[1])));
  param_1[2] = ((float)GEN_TOF(((float10)*(float *)((int)this + 8) - (float10)param_2[2])));
  param_1[3] = ((float)GEN_TOF(((float10)*(float *)((int)this + 0xc) - (float10)param_2[3])));
  return (uint)param_1;
}

/* ref: FUN_009db2d0 */
uint F_009db2d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9db2d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  *param_1 = (float)((float10)*param_2 * (float10)*(float *)this);
  param_1[1] = ((float)GEN_TOF(((float10)param_2[1] * (float10)*(float *)((int)this + 4))));
  param_1[2] = ((float)GEN_TOF(((float10)param_2[2] * (float10)*(float *)((int)this + 8))));
  param_1[3] = ((float)GEN_TOF(((float10)param_2[3] * (float10)*(float *)((int)this + 0xc))));
  return (uint)param_1;
}

/* ref: FUN_009db320 */
uint F_009db320(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x9db320u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 uVar1;
  
  *param_2 = *in_ecx;
  uVar1 = in_ecx[1];
  param_2[3] = (undefined4)gen_fl2bits(param_3);
  param_2[1] = uVar1;
  param_2[2] = in_ecx[2];
  return (uint)param_2;
}

/* ref: FUN_009db350 */
uint F_009db350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9db350u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  return (uint)in_ecx;
}

/* ref: FUN_009db370 */
uint F_009db370(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x9db370u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float10 fVar1;
  
  fVar1 = (float10)param_2;
  *in_ecx = (float)(fVar1 * (float10)*in_ecx);
  in_ecx[1] = (float)((float10)in_ecx[1] * fVar1);
  in_ecx[2] = (float)(fVar1 * (float10)in_ecx[2]);
  return (uint)in_ecx;
}

/* ref: FUN_009db3a0 */
uint F_009db3a0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x9db3a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float10 fVar1;
  
  fVar1 = (float10)param_2;
  *in_ecx = (float)((float10)*in_ecx / fVar1);
  in_ecx[1] = (float)((float10)in_ecx[1] / fVar1);
  in_ecx[2] = (float)((float10)in_ecx[2] / fVar1);
  return (uint)in_ecx;
}

/* ref: FUN_009db3d0 */
uint F_009db3d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9db3d0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  *in_ecx = (float)((float10)*param_2 + (float10)*in_ecx);
  in_ecx[1] = (float)((float10)param_2[1] + (float10)in_ecx[1]);
  in_ecx[2] = (float)((float10)param_2[2] + (float10)in_ecx[2]);
  return (uint)in_ecx;
}

/* ref: FUN_009db400 */
uint F_009db400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9db400u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  *in_ecx = (float)((float10)*param_2 * (float10)*in_ecx);
  in_ecx[1] = (float)((float10)param_2[1] * (float10)in_ecx[1]);
  in_ecx[2] = (float)((float10)param_2[2] * (float10)in_ecx[2]);
  return (uint)in_ecx;
}

/* ref: FUN_009db430 */
uint F_009db430(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x9db430u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float10 fVar1;
  
  fVar1 = (float10)param_3;
  *param_2 = (float)(fVar1 * (float10)*in_ecx);
  param_2[1] = (float)((float10)in_ecx[1] * fVar1);
  param_2[2] = (float)(fVar1 * (float10)in_ecx[2]);
  return (uint)param_2;
}

/* ref: FUN_009db460 */
uint F_009db460(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x9db460u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float10 fVar1;
  
  fVar1 = (float10)param_3;
  *param_2 = (float)((float10)*in_ecx / fVar1);
  param_2[1] = (float)((float10)in_ecx[1] / fVar1);
  param_2[2] = (float)((float10)in_ecx[2] / fVar1);
  return (uint)param_2;
}

/* ref: FUN_009db490 */
uint F_009db490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9db490u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  *param_1 = (float)((float10)*param_2 + (float10)*(float *)this);
  param_1[1] = ((float)GEN_TOF(((float10)param_2[1] + (float10)*(float *)((int)this + 4))));
  param_1[2] = ((float)GEN_TOF(((float10)param_2[2] + (float10)*(float *)((int)this + 8))));
  return (uint)param_1;
}

/* ref: FUN_009db4c0 */
uint F_009db4c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9db4c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  *param_1 = (float)((float10)*(float *)this - (float10)*param_2);
  param_1[1] = ((float)GEN_TOF(((float10)*(float *)((int)this + 4) - (float10)param_2[1])));
  param_1[2] = ((float)GEN_TOF(((float10)*(float *)((int)this + 8) - (float10)param_2[2])));
  return (uint)param_1;
}

/* ref: FUN_009db4f0 */
uint F_009db4f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9db4f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  *param_1 = (float)((float10)*param_2 * (float10)*(float *)this);
  param_1[1] = ((float)GEN_TOF(((float10)param_2[1] * (float10)*(float *)((int)this + 4))));
  param_1[2] = ((float)GEN_TOF(((float10)param_2[2] * (float10)*(float *)((int)this + 8))));
  return (uint)param_1;
}

/* ref: FUN_009db520 */
uint F_009db520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9db520u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  *param_1 = (float)((float10)*(float *)((int)(uintptr_t)this) / (float10)*param_2);
  param_1[1] = ((float)GEN_TOF(((float10)*(float *)((int)this + 4) / (float10)param_2[1])));
  param_1[2] = ((float)GEN_TOF(((float10)*(float *)((int)this + 8) / (float10)param_2[2])));
  return (uint)param_1;
}

/* ref: FUN_009db550 */
unsigned int F_009db550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9db550u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[4];
  in_ecx[4] = param_2[5];
  in_ecx[5] = param_2[6];
  in_ecx[6] = param_2[8];
  in_ecx[7] = param_2[9];
  in_ecx[8] = param_2[10];
  in_ecx[9] = param_2[0xc];
  in_ecx[10] = param_2[0xd];
  in_ecx[0xb] = param_2[0xe];
  return 0;
}

/* ref: FUN_009db5b0 */
unsigned int F_009db5b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9db5b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[3];
  in_ecx[4] = param_2[4];
  in_ecx[5] = param_2[5];
  in_ecx[6] = param_2[6];
  in_ecx[7] = param_2[7];
  in_ecx[8] = param_2[8];
  in_ecx[9] = param_2[9];
  in_ecx[10] = param_2[10];
  in_ecx[0xb] = param_2[0xb];
  return 0;
}

/* ref: FUN_009db630 */
unsigned int F_009db630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9db630u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[3];
  in_ecx[4] = param_2[4];
  in_ecx[5] = param_2[5];
  in_ecx[6] = param_2[6];
  in_ecx[7] = param_2[7];
  in_ecx[8] = param_2[8];
  in_ecx[9] = param_2[9];
  in_ecx[10] = param_2[10];
  in_ecx[0xb] = param_2[0xb];
  in_ecx[0xc] = param_2[0xc];
  in_ecx[0xd] = param_2[0xd];
  in_ecx[0xe] = param_2[0xe];
  in_ecx[0xf] = param_2[0xf];
  return 0;
}

/* ref: FUN_009db6a0 */
unsigned int F_009db6a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9db6a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[3];
  in_ecx[4] = param_2[4];
  in_ecx[5] = param_2[5];
  in_ecx[6] = param_2[6];
  in_ecx[7] = param_2[7];
  in_ecx[8] = param_2[8];
  in_ecx[9] = param_2[9];
  in_ecx[10] = param_2[10];
  in_ecx[0xb] = param_2[0xb];
  in_ecx[0xc] = param_2[0xc];
  in_ecx[0xd] = param_2[0xd];
  in_ecx[0xe] = param_2[0xe];
  in_ecx[0xf] = param_2[0xf];
  return 0;
}

/* ref: FUN_009db720 */
uint F_009db720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9db720u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: FUN_009db740 */
uint F_009db740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9db740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  if ((*(int *)this == *param_1) && (*(int *)((int)this + 4) == param_1[1])) {
    return 0;
  }
  return 1;
}

/* ref: FUN_009db770 */
uint F_009db770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9db770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_009db790 */
uint F_009db790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9db790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_009db7b0 */
uint F_009db7b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10)
{
  GEN_ENTER(0x9db7b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  undefined4 param_9 = (undefined4)gen_a9;
  undefined4 param_10 = (undefined4)gen_a10;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = param_4;
  *(undefined4 *)((int)this + 0x10) = param_5;
  *(undefined4 *)((int)this + 0x14) = param_6;
  *(undefined4 *)((int)this + 0x18) = param_7;
  *(undefined4 *)((int)this + 0x1c) = param_8;
  *(undefined4 *)((int)this + 0x20) = param_9;
  *(undefined4 *)((int)this + 0x24) = param_10;
  return (uint)this;
}

/* ref: FUN_009db810 */
uint F_009db810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9db810u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0xc + param_2 * 4);
}

/* ref: FUN_009db820 */
uint F_009db820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9db820u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    piVar1 = (int *)F_00404230();
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,param_1,param_2);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_009db850 */
uint F_009db850(unsigned int gen_a0)
{
  GEN_ENTER(0x9db850u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_00406810(param_1);
  }
  return uVar1;
}

/* ref: FUN_009db890 */
uint F_009db890(unsigned int gen_a0)
{
  GEN_ENTER(0x9db890u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  if ((REFG(undefined * PTR32, 0x14a0a14) != (code *)0x0) && (param_1 != 0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a14))(param_1,4,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_009db8c0 */
unsigned int F_009db8c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9db8c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if ((REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0) && (param_1 != 0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(param_1);
  }
  return 0;
}

/* ref: Apricot::ApricotMemoryObject::vf0 */
uint F_009db8e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9db8e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de5f8));
  if (((param_1 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(this);
  }
  return (uint)this;
}

/* ref: Apricot::IVertexBuffer::vf0 */
uint F_009db930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9db930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10de554));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::IIndexBuffer::vf0 */
uint F_009db970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9db970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10de554));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::ITexture::vf0 */
uint F_009db9b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9db9b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10de554));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::IScreenCopyTexture::vf0 */
uint F_009db9f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9db9f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10de554));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::IVertexShader::vf0 */
uint F_009dba30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dba30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10de554));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::IPixelShader::vf0 */
uint F_009dba70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dba70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10de554));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_009dbaa0 */
byte F_009dbaa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dbaa0u, gen_a0, gen_a1, 0u, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  byte * pbVar3;
  byte * pbVar4;
  
  uVar1 = 0x10;
  pbVar3 = param_2;
  pbVar4 = param_1;
  do {
    if (*(int *)pbVar4 != *(int *)pbVar3) {
      iVar2 = (uint)*pbVar4 - (uint)*pbVar3;
      if (((iVar2 == 0) && (iVar2 = (uint)pbVar4[1] - (uint)pbVar3[1], iVar2 == 0)) &&
         (iVar2 = (uint)pbVar4[2] - (uint)pbVar3[2], iVar2 == 0)) {
        iVar2 = (uint)pbVar4[3] - (uint)pbVar3[3];
      }
      return (int)(iVar2 >> 0x1f | 1U) < 0;
    }
    uVar1 = uVar1 - 4;
    pbVar3 = pbVar3 + 4;
    pbVar4 = pbVar4 + 4;
  } while (3 < uVar1);
  return 0;
}

/* ref: FUN_009dbb30 */
uint F_009dbb30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dbb30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009dbb90 */
uint F_009dbb90(float gen_a0, float gen_a1)
{
  GEN_ENTER(0x9dbb90u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), 0u, 0u);
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c4f2dd();
  return uVar1;
}

/* ref: FUN_009dbbd0 */
uint F_009dbbd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dbbd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  if ((*(int *)this == *param_1) && (*(int *)((int)this + 4) == param_1[1])) {
    return 1;
  }
  return 0;
}

/* ref: FUN_009dbcd0 */
uint F_009dbcd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dbcd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x10) = *param_2;
  *(undefined4 *)(in_ecx + 0x14) = param_2[1];
  *(undefined4 *)(in_ecx + 0x18) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_009dbcf0 */
uint F_009dbcf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dbcf0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x20) = *param_2;
  *(undefined4 *)(in_ecx + 0x24) = param_2[1];
  *(undefined4 *)(in_ecx + 0x28) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_009dbd50 */
uint F_009dbd50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dbd50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10de554));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_009dbda0 */
uint F_009dbda0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dbda0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_009dbdc0 */
uint F_009dbdc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dbdc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_009dbde0 */
uint F_009dbde0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dbde0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de728));
  *(int * PTR32 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 1;
  if (param_1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  }
  return (uint)this;
}

/* ref: FUN_009dbe10 */
unsigned int F_009dbe10(unsigned int gen_a0)
{
  GEN_ENTER(0x9dbe10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de728));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de5f8));
  return 0;
}

/* ref: FUN_009dbe40 */
uint F_009dbe40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dbe40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de730));
  *(int * PTR32 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 1;
  if (param_1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  }
  return (uint)this;
}

/* ref: FUN_009dbe70 */
unsigned int F_009dbe70(unsigned int gen_a0)
{
  GEN_ENTER(0x9dbe70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de730));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de5f8));
  return 0;
}

/* ref: FUN_009dbea0 */
uint F_009dbea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dbea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de738));
  *(int * PTR32 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 1;
  if (param_1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  }
  return (uint)this;
}

/* ref: FUN_009dbed0 */
unsigned int F_009dbed0(unsigned int gen_a0)
{
  GEN_ENTER(0x9dbed0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de738));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de5f8));
  return 0;
}

/* ref: FUN_009dbf00 */
uint F_009dbf00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dbf00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de74c));
  *(int * PTR32 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 1;
  if (param_1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  }
  return (uint)this;
}

/* ref: FUN_009dbf30 */
unsigned int F_009dbf30(unsigned int gen_a0)
{
  GEN_ENTER(0x9dbf30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de74c));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de5f8));
  return 0;
}

/* ref: FUN_009dbf60 */
uint F_009dbf60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dbf60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de754));
  *(int * PTR32 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 1;
  if (param_1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  }
  return (uint)this;
}

/* ref: FUN_009dbf90 */
unsigned int F_009dbf90(unsigned int gen_a0)
{
  GEN_ENTER(0x9dbf90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de754));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de5f8));
  return 0;
}

/* ref: FUN_009dbfc0 */
uint F_009dbfc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dbfc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de75c));
  *(int * PTR32 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 1;
  if (param_1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  }
  return (uint)this;
}

/* ref: FUN_009dbff0 */
unsigned int F_009dbff0(unsigned int gen_a0)
{
  GEN_ENTER(0x9dbff0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de75c));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de5f8));
  return 0;
}

/* ref: FUN_009dc090 */
uint F_009dc090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc090u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: InterfaceHolder_VInputLayout_Kernel_Graphics_Client_Apricot::vf0 */
uint F_009dc0b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc0b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de728));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de5f8));
  if (((param_1 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(this);
  }
  return (uint)this;
}

/* ref: InterfaceHolder_VVertexBuffer_Kernel_Graphics_Client_Apricot::vf0 */
uint F_009dc100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de730));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de5f8));
  if (((param_1 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(this);
  }
  return (uint)this;
}

/* ref: InterfaceHolder_VIndexBuffer_Kernel_Graphics_Client_Apricot::vf0 */
uint F_009dc150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de738));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de5f8));
  if (((param_1 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(this);
  }
  return (uint)this;
}

/* ref: InterfaceHolder_VTexture_Kernel_Graphics_Client_Apricot::vf0 */
uint F_009dc1a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc1a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de74c));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de5f8));
  if (((param_1 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(this);
  }
  return (uint)this;
}

/* ref: InterfaceHolder_VVertexShader_Kernel_Graphics_Client_Apricot::vf0 */
uint F_009dc1f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc1f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de754));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de5f8));
  if (((param_1 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(this);
  }
  return (uint)this;
}

/* ref: InterfaceHolder_VPixelShader_Kernel_Graphics_Client_Apricot::vf0 */
uint F_009dc240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de75c));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de5f8));
  if (((param_1 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(this);
  }
  return (uint)this;
}

/* ref: Singleton_VUITargetLinkLineManager_Vfx_Graphics_Client_Graphics::vf0 */
uint F_009dc290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10de764));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Singleton_VChannelingLineManager_Vfx_Graphics_Client_Graphics::vf0 */
uint F_009dc2c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc2c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10de76c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Singleton_VTargetRingManager_Vfx_Graphics_Client_Graphics::vf0 */
uint F_009dc2f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc2f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10de774));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_009dc390 */
uint F_009dc390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc390u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_009dc430 */
uint F_009dc430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc430u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0x14;
}

/* ref: FUN_009dc4c0 */
uint F_009dc4c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc4c0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_009dc4f0 */
uint F_009dc4f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc4f0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2;
}

/* ref: FUN_009dc510 */
uint F_009dc510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc510u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_009dc530 */
uint F_009dc530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc530u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_009dc550 */
uint F_009dc550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc550u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_009dc570 */
uint F_009dc570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc570u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_009dc590 */
uint F_009dc590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc590u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_009dc5d0 */
uint F_009dc5d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc5d0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_009dc5f0 */
uint F_009dc5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc5f0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_009dc610 */
uint F_009dc610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc610u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_009dc640 */
uint F_009dc640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc640u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_00406810(param_1);
  }
  return uVar1;
}

/* ref: FUN_009dc680 */
uint F_009dc680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc680u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_009dc6a0 */
byte F_009dc6a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc6a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_009dbaa0(param_1,param_2);
  return bVar1;
}

/* ref: FUN_009dc6c0 */
uint F_009dc6c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc6c0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_009dc720 */
uint F_009dc720(unsigned int gen_a0)
{
  GEN_ENTER(0x9dc720u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_009dc760 */
uint F_009dc760(unsigned int gen_a0)
{
  GEN_ENTER(0x9dc760u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_009dc790 */
uint F_009dc790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc790u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_009dc7c0 */
uint F_009dc7c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc7c0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_009dc7f0 */
uint F_009dc7f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc7f0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

