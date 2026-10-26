#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf94 */
uint F_006f3030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f3030u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  uint uVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  F_00a02210(((byte *)(gen_frame + 0x8)),(*(undefined4 * PTR32 *)&gen_args[1]));
  uVar4 = 0;
  uVar2 = F_00a019d0(((byte *)(gen_frame + 0x8)));
  if (1 < (int)uVar2) {
    uVar4 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2);
  }
  (*(int *)(gen_frame + 0x28)) = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4)));
  puVar3 = (undefined4 *)F_00406b90(100,0,0);
  uVar1 = REFG(float, 0x1087f04);
  if (puVar3 == (undefined4 *)0x0) {
    (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)0x0;
  }
  else {
    *puVar3 = (*(undefined * PTR32 (*)[6])REFP(0x10b8c3c));
    *(undefined2 *)(puVar3 + 1) = 0;
    puVar3[2] = uVar1;
    puVar3[3] = uVar4;
    F_0042cc20(puVar3 + 4,&REFG(undefined, 0x10b3a4a),REFG(undefined4, 0x108cc50));
    (*(undefined4 * PTR32 *)&gen_args[1]) = puVar3;
  }
  F_00754690((undefined *)((*(int *)(gen_frame + 0x28)) + 0x4c),&(*(undefined4 * PTR32 *)&gen_args[1]));
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0xd1))) = 0;
  uVar2 = F_00a02290(((byte *)(gen_frame + 0x8)),0);
  F_00a02240(((byte *)(gen_frame + 0x8)));
  return uVar2;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf103 */
uint F_006f3100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f3100u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  
  F_00a02210(((undefined1 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)&gen_args[1]));
  iVar1 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4)));
  (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)F_00406b90(0x10,0,0);
  if ((*(undefined4 * PTR32 *)&gen_args[1]) == (undefined4 *)0x0) {
    (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)0x0;
  }
  else {
    *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(undefined * PTR32 (*)[6])REFP(0x10b8b60));
    (*(undefined4 * PTR32 *)&gen_args[1])[1] = 0;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 3))) = 0;
  }
  F_00754690((undefined *)(iVar1 + 0x4c),&(*(undefined4 * PTR32 *)&gen_args[1]));
  uVar2 = F_00a02290(((undefined1 *)(gen_frame + 0xc)),0);
  F_00a02240(((undefined1 *)(gen_frame + 0xc)));
  return uVar2;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf107 */
uint F_006f3170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f3170u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  undefined * this;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  float10 fVar5;
  
  F_00a02210(((byte *)(gen_frame + 0x4)),param_2);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0x4)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),1,uVar2);
  uVar1 = *(undefined4 *)(*piVar3 + 4);
  (*(undefined4 *)(gen_frame + 0x24)) = uVar1;
  uVar2 = F_00a019d0(((byte *)(gen_frame + 0x4)));
  if (uVar2 == 2) {
    uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),2);
    F_006f1a00(*(undefined * PTR32 *)(param_1 + 4),uVar1,uVar2);
  }
  else {
    uVar2 = F_00a019d0(((byte *)(gen_frame + 0x4)));
    if ((int)uVar2 < 4) {
      F_00a02240(((byte *)(gen_frame + 0x4)));
      return 0;
    }
    uVar2 = F_00a01d20(((byte *)(gen_frame + 0x4)),2);
    piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),2,uVar2);
    this = *(undefined * PTR32 *)(*piVar3 + 4);
    uVar2 = F_00a5feb0(this);
    fVar5 = F_00a01dd0(((byte *)(gen_frame + 0x4)),4);
    (*(float *)(gen_frame + 0x28)) = (float)fVar5;
    uVar4 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),3);
    param_2 = *(uint *)((int)this + 0xb0);
    if ((char)uVar4 == '\x04') {
      param_2 = *(uint *)((int)this + 0x20);
      uVar4 = 0;
    }
    F_006f1a70(*(undefined4 *)(param_1 + 4),(*(undefined4 *)(gen_frame + 0x24)),uVar2,GEN_TOF(gen_bits2f(param_2)),uVar4 & 0xff,(*(float *)(gen_frame + 0x28))
                );
  }
  uVar2 = F_00a02290(((byte *)(gen_frame + 0x4)),0);
  F_00a02240(((byte *)(gen_frame + 0x4)));
  return uVar2;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf133 */
uint F_006f3290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f3290u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  
  F_00a02210(((byte *)(gen_frame + 0x8)),(*(undefined4 *)&gen_args[1]));
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar2);
  uVar1 = *(undefined4 *)(*piVar3 + 0x60);
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2);
  uVar4 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),3);
  (*(uint *)(gen_frame + 0x28)) = uVar4;
  uVar4 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),4);
  (*(undefined4 *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(undefined4 *)&gen_args[1]), 1, 3),(char)uVar4);
  F_006f2390(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))),uVar1,uVar2,(*(uint *)(gen_frame + 0x28)),(*(undefined4 *)&gen_args[1]));
  uVar2 = F_00a02290(((byte *)(gen_frame + 0x8)),0);
  F_00a02240(((byte *)(gen_frame + 0x8)));
  return uVar2;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf115 */
uint F_006f3320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f3320u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar4 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar3);
  iVar1 = *piVar4;
  uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  bVar2 = F_006f1b10(*(undefined * PTR32 *)(this + 4),*(undefined4 *)(iVar1 + 0x60),uVar3);
  if (bVar2 != 0) {
    uVar3 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
    F_00a02240(((byte *)(gen_frame + 0xc)));
    return uVar3;
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf117 */
uint F_006f33a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f33a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  uVar1 = F_006f1bb0(*(undefined * PTR32 *)(this + 4),*(undefined4 *)(*piVar2 + 0x60));
  if ((char)uVar1 != '\0') {
    uVar1 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
    F_00a02240(((byte *)(gen_frame + 0xc)));
    return uVar1;
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf120 */
uint F_006f3410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f3410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  bVar1 = F_006f1cc0(*(undefined * PTR32 *)(this + 4),*(undefined4 *)(*piVar3 + 0x60));
  if (bVar1 != 0) {
    uVar2 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
    F_00a02240(((byte *)(gen_frame + 0xc)));
    return uVar2;
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf122 */
uint F_006f3480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f3480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  uVar1 = F_006f1db0(*(undefined * PTR32 *)(this + 4),*(undefined4 *)(*piVar2 + 0x60));
  if ((char)uVar1 != '\0') {
    uVar1 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
    F_00a02240(((byte *)(gen_frame + 0xc)));
    return uVar1;
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf127 */
uint F_006f34f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f34f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  bVar1 = F_006f2280(*(undefined * PTR32 *)(this + 4),*(undefined4 *)(*piVar3 + 0x60));
  if (bVar1 != 0) {
    uVar2 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
    F_00a02240(((byte *)(gen_frame + 0xc)));
    return uVar2;
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf135 */
uint F_006f3560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f3560u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined4 * puVar4;
  uint uVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = (*(undefined * PTR32 *)&gen_args[0]);
  F_00a02210(((byte *)(gen_frame + 0x8)),(*(undefined4 * PTR32 *)&gen_args[1]));
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar3);
  (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2);
  uVar5 = 1;
  bVar2 = 0;
  uVar3 = F_00a019d0(((byte *)(gen_frame + 0x8)));
  if (2 < (int)uVar3) {
    uVar5 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),3);
  }
  if (3 < (int)uVar3) {
    bVar2 = F_00a01e10(((byte *)(gen_frame + 0x8)),4);
  }
  iVar1 = *(int *)((*(undefined * PTR32 *)(gen_frame + 0x28)) + 4);
  puVar4 = (undefined4 *)F_00406b90(0x10,0,0);
  if (puVar4 == (undefined4 *)0x0) {
    (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)0x0;
  }
  else {
    *puVar4 = (*(undefined * PTR32 (*)[6])REFP(0x10b8b44));
    puVar4[1] = (*(undefined4 * PTR32 *)&gen_args[1]);
    puVar4[2] = uVar5;
    *(byte *)(puVar4 + 3) = bVar2;
    *(undefined1 *)((int)puVar4 + 0xd) = 0;
    (*(undefined4 * PTR32 *)&gen_args[1]) = puVar4;
  }
  F_00754690((undefined *)(iVar1 + 0x4c),&(*(undefined4 * PTR32 *)&gen_args[1]));
  uVar3 = F_00a02290(((byte *)(gen_frame + 0x8)),0);
  F_00a02240(((byte *)(gen_frame + 0x8)));
  return uVar3;
}

/* ref: Client::Game::Event::PlayCutSceneTask::vf3 */
byte F_006f3920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6f3920u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  int * piVar2;
  
  if (this[0x6c] == (undefined1)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_0042a990(this + 4);
  }
  F_006f1fa0(param_1,2,uVar1);
  if (param_2 != (int *)0x0) {
    if ((*(uint *)((int)param_1 + 0x6c) & 0x400) != 0) {
      piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      ((code *)*(gen_code32 *)(*piVar2 + 0xa8))(piVar2,0,0xf,1);
    }
    ((code *)*(gen_code32 *)(*param_2 + 0x14c))(param_2,param_2[0x18]);
  }
  return 1;
}

/* ref: Client::Game::Event::LuaActorModule::vf1 */
uint F_006f3990(unsigned int gen_a0)
{
  GEN_ENTER(0x6f3990u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_006ed930(this,0);
  return uVar1;
}

/* ref: Client::Game::Event::EventHandler::vf36 */
byte F_006f39a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6f39a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * pEVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  
  if (*(int *)(this + 0x78) != 0) {
    *(int *)(this + 0xe4) = *(int *)(this + 0xe4) + param_2;
    bVar5 = F_006cda10(this);
    if (bVar5 != 0) {
      return 1;
    }
    puVar2 = *(undefined4 * PTR32 *)(this + 0x74);
    *(undefined4 *)(this + 0xe4) = 0;
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)(this + 0x74) = 0;
    }
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x78) + 0x50))))(*(int * PTR32 *)(this + 0x78));
    if (uVar6 == 1) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x78) + 0x18))))(*(int * PTR32 *)(this + 0x78));
    }
    pEVar1 = this + 0xd0;
    *(undefined4 *)(this + 0x78) = 0;
    if (pEVar1 != ((undefined1 *)(gen_frame + 0xc))) {
      iVar3 = *(int *)pEVar1;
      *(int *)pEVar1 = 0;
      *(undefined4 *)(this + 0xd4) = 0;
      iVar4 = *(int *)(this + 0xd8);
      *(undefined4 *)(this + 0xd8) = 0;
      if (iVar3 != 0) {
        F_00429760(iVar3,(iVar4 - iVar3 >> 2) * 4,800);
      }
    }
  }
  return 0;
}

/* ref: FUN_006f3a50 */
uint F_006f3a50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6f3a50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  uint uVar2;
  
  uVar2 = 0xffff;
  if (*(short *)((int)this + 0x54) != -1) {
    bVar1 = *(byte *)((int)this + 0x5c);
    uVar2 = CONCAT31(0xff,bVar1);
    if ((bVar1 & 4) == 0) {
      *(byte *)((int)this + 0x5c) = bVar1 | 4;
      uVar2 = F_006f15b0(*(undefined * PTR32 *)((int)this + 4),param_1,param_2);
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: Client::Game::Event::EventHandler::vf53 */
unsigned int F_006f3a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f3a80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (((*(int *)(this + 0x60) != 0) && (*(short *)(this + 0x54) != -1)) &&
     (((byte)this[0x5c] & 4) == 0)) {
    this[0x5c] = (undefined1)((byte)this[0x5c] | 4);
    F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf54 */
unsigned int F_006f3ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f3ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (((*(int *)(this + 0x60) != 0) && (*(short *)(this + 0x54) != -1)) &&
     (((byte)this[0x5c] & 4) == 0)) {
    this[0x5c] = (undefined1)((byte)this[0x5c] | 4);
    F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf55 */
unsigned int F_006f3ae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6f3ae0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (((*(int *)(this + 0x60) != 0) && (*(short *)(this + 0x54) != -1)) &&
     (((byte)this[0x5c] & 4) == 0)) {
    this[0x5c] = (undefined1)((byte)this[0x5c] | 4);
    F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf56 */
unsigned int F_006f3b10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6f3b10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (((*(int *)(this + 0x60) != 0) && (*(short *)(this + 0x54) != -1)) &&
     (((byte)this[0x5c] & 4) == 0)) {
    this[0x5c] = (undefined1)((byte)this[0x5c] | 4);
    F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf57 */
unsigned int F_006f3b40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6f3b40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (((*(int *)(this + 0x60) != 0) && (*(short *)(this + 0x54) != -1)) &&
     (((byte)this[0x5c] & 4) == 0)) {
    this[0x5c] = (undefined1)((byte)this[0x5c] | 4);
    F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf58 */
unsigned int F_006f3b70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f3b70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (((*(int *)(this + 0x60) != 0) && (*(short *)(this + 0x54) != -1)) &&
     (((byte)this[0x5c] & 4) == 0)) {
    this[0x5c] = (undefined1)((byte)this[0x5c] | 4);
    F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf59 */
unsigned int F_006f3ba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6f3ba0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  if (((*(int *)(this + 0x60) != 0) && (*(short *)(this + 0x54) != -1)) &&
     (((byte)this[0x5c] & 4) == 0)) {
    this[0x5c] = (undefined1)((byte)this[0x5c] | 4);
    F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf61 */
unsigned int F_006f3bd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6f3bd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (((*(int *)(this + 0x60) != 0) && (*(short *)(this + 0x54) != -1)) &&
     (((byte)this[0x5c] & 4) == 0)) {
    this[0x5c] = (undefined1)((byte)this[0x5c] | 4);
    F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf60 */
unsigned int F_006f3c00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6f3c00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  if (((*(int *)(this + 0x60) != 0) && (*(short *)(this + 0x54) != -1)) &&
     (((byte)this[0x5c] & 4) == 0)) {
    this[0x5c] = (undefined1)((byte)this[0x5c] | 4);
    F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf62 */
unsigned int F_006f3c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f3c30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (((*(int *)(this + 0x60) != 0) && (*(short *)(this + 0x54) != -1)) &&
     (((byte)this[0x5c] & 4) == 0)) {
    this[0x5c] = (undefined1)((byte)this[0x5c] | 4);
    F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf63 */
unsigned int F_006f3c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f3c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (((*(int *)(this + 0x60) != 0) && (*(short *)(this + 0x54) != -1)) &&
     (((byte)this[0x5c] & 4) == 0)) {
    this[0x5c] = (undefined1)((byte)this[0x5c] | 4);
    F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf64 */
unsigned int F_006f3c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f3c90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (((*(int *)(this + 0x60) != 0) && (*(short *)(this + 0x54) != -1)) &&
     (((byte)this[0x5c] & 4) == 0)) {
    this[0x5c] = (undefined1)((byte)this[0x5c] | 4);
    F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf65 */
unsigned int F_006f3cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f3cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (((*(int *)(this + 0x60) != 0) && (*(short *)(this + 0x54) != -1)) &&
     (((byte)this[0x5c] & 4) == 0)) {
    this[0x5c] = (undefined1)((byte)this[0x5c] | 4);
    F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf66 */
unsigned int F_006f3cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f3cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (((*(int *)(this + 0x60) != 0) && (*(short *)(this + 0x54) != -1)) &&
     (((byte)this[0x5c] & 4) == 0)) {
    this[0x5c] = (undefined1)((byte)this[0x5c] | 4);
    F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf67 */
unsigned int F_006f3d20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f3d20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (((*(int *)(this + 0x60) != 0) && (*(short *)(this + 0x54) != -1)) &&
     (((byte)this[0x5c] & 4) == 0)) {
    this[0x5c] = (undefined1)((byte)this[0x5c] | 4);
    F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf68 */
unsigned int F_006f3d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f3d50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (((*(int *)(this + 0x60) != 0) && (*(short *)(this + 0x54) != -1)) &&
     (((byte)this[0x5c] & 4) == 0)) {
    this[0x5c] = (undefined1)((byte)this[0x5c] | 4);
    F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf69 */
unsigned int F_006f3d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f3d80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (((*(int *)(this + 0x60) != 0) && (*(short *)(this + 0x54) != -1)) &&
     (((byte)this[0x5c] & 4) == 0)) {
    this[0x5c] = (undefined1)((byte)this[0x5c] | 4);
    F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf70 */
unsigned int F_006f3db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f3db0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (((*(int *)(this + 0x60) != 0) && (*(short *)(this + 0x54) != -1)) &&
     (((byte)this[0x5c] & 4) == 0)) {
    this[0x5c] = (undefined1)((byte)this[0x5c] | 4);
    F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf71 */
unsigned int F_006f3de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f3de0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (((*(int *)(this + 0x60) != 0) && (*(short *)(this + 0x54) != -1)) &&
     (((byte)this[0x5c] & 4) == 0)) {
    this[0x5c] = (undefined1)((byte)this[0x5c] | 4);
    F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf72 */
unsigned int F_006f3e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f3e10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (((*(int *)(this + 0x60) != 0) && (*(short *)(this + 0x54) != -1)) &&
     (((byte)this[0x5c] & 4) == 0)) {
    this[0x5c] = (undefined1)((byte)this[0x5c] | 4);
    F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf73 */
unsigned int F_006f3e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f3e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (((*(int *)(this + 0x60) != 0) && (*(short *)(this + 0x54) != -1)) &&
     (((byte)this[0x5c] & 4) == 0)) {
    this[0x5c] = (undefined1)((byte)this[0x5c] | 4);
    F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf74 */
unsigned int F_006f3e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f3e70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (((*(int *)(this + 0x60) != 0) && (*(short *)(this + 0x54) != -1)) &&
     (((byte)this[0x5c] & 4) == 0)) {
    this[0x5c] = (undefined1)((byte)this[0x5c] | 4);
    F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf75 */
unsigned int F_006f3ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f3ea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (((*(int *)(this + 0x60) != 0) && (*(short *)(this + 0x54) != -1)) &&
     (((byte)this[0x5c] & 4) == 0)) {
    this[0x5c] = (undefined1)((byte)this[0x5c] | 4);
    F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf76 */
unsigned int F_006f3ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f3ed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (((*(int *)(this + 0x60) != 0) && (*(short *)(this + 0x54) != -1)) &&
     (((byte)this[0x5c] & 4) == 0)) {
    this[0x5c] = (undefined1)((byte)this[0x5c] | 4);
    F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf77 */
unsigned int F_006f3f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f3f00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (((*(int *)(this + 0x60) != 0) && (*(short *)(this + 0x54) != -1)) &&
     (((byte)this[0x5c] & 4) == 0)) {
    this[0x5c] = (undefined1)((byte)this[0x5c] | 4);
    F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf78 */
unsigned int F_006f3f30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6f3f30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (((*(int *)(this + 0x60) != 0) && (*(short *)(this + 0x54) != -1)) &&
     (((byte)this[0x5c] & 4) == 0)) {
    this[0x5c] = (undefined1)((byte)this[0x5c] | 4);
    F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf79 */
unsigned int F_006f3f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6f3f60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (((*(int *)(this + 0x60) != 0) && (*(short *)(this + 0x54) != -1)) &&
     (((byte)this[0x5c] & 4) == 0)) {
    this[0x5c] = (undefined1)((byte)this[0x5c] | 4);
    F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf80 */
unsigned int F_006f3f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f3f90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (((*(int *)(this + 0x60) != 0) && (*(short *)(this + 0x54) != -1)) &&
     (((byte)this[0x5c] & 4) == 0)) {
    this[0x5c] = (undefined1)((byte)this[0x5c] | 4);
    F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf83 */
uint F_006f3fc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f3fc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined1 EVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  
  bVar2 = F_006e6ba0(*(undefined * PTR32 *)(this + 4),this,0);
  uVar3 = CONCAT31(extraout_var,bVar2);
  if ((bVar2 == 0) && (uVar3 = 0xffff, *(short *)(this + 0x54) != -1)) {
    EVar1 = this[0x5c];
    uVar3 = CONCAT31(0xff,EVar1);
    if (((byte)EVar1 & 4) == 0) {
      this[0x5c] = (undefined1)((byte)EVar1 | 4);
      uVar3 = F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
    }
  }
  return uVar3;
}

/* ref: FUN_006f4000 */
uint F_006f4000(unsigned int gen_a0)
{
  GEN_ENTER(0x6f4000u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x410];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint * puVar4;
  int iVar5;
  
  (*(uint *)(gen_frame + 0x408)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x40c);
  uVar3 = (*(uint *)(gen_frame + 0x8)) >> 8;
  (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) & 0xffffff00;
  if ((*(int *)((int)this + 0x60) == 0) &&
     (uVar2 = F_00a022b0(*(undefined4 *)((int)this + 0x1d0)), uVar2 == 0)) {
    uVar2 = F_00a019d0(*(undefined4 *)((int)this + 0x1d0));
    (*(uint *)(gen_frame + 0x8)) = CONCAT31((int3)uVar3,(char)uVar2);
    if ((char)uVar2 != '\0') {
      (*(uint *)(gen_frame + 0x4)) = uVar2 & 0xff;
      puVar4 = ((uint *)(gen_frame + 0xc));
      iVar5 = 1;
      do {
        bVar1 = F_00a01f40(*(undefined * PTR32 *)((int)this + 0x1d0),iVar5);
        if (bVar1 == 0) {
          bVar1 = F_00a01f80(*(undefined * PTR32 *)((int)this + 0x1d0),iVar5);
          if (bVar1 == 0) {
            *puVar4 = 0;
          }
          else {
            bVar1 = F_00a01fa0(*(undefined * PTR32 *)((int)this + 0x1d0),iVar5);
            *puVar4 = (uint)(bVar1 != 0);
          }
        }
        else {
          uVar3 = F_00b9ab70(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1d0) + 8))),iVar5);
          *puVar4 = uVar3;
        }
        iVar5 = iVar5 + 1;
        puVar4 = puVar4 + 1;
        (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) - 1;
      } while ((*(uint *)(gen_frame + 0x4)) != 0);
    }
    F_00a01a00(*(undefined * PTR32 *)((int)this + 0x1d0),uVar2);
  }
  if (*(int *)((int)this + 0x1d0) != 0) {
    F_006b8e20(REFG(undefined4, 0x1488344),(int)this + 0x1d0);
  }
  uVar3 = 0xffff;
  if (*(short *)((int)this + 0x54) != -1) {
    bVar1 = *(byte *)((int)this + 0x5c);
    uVar3 = CONCAT31(0xff,bVar1);
    if ((bVar1 & 4) == 0) {
      *(byte *)((int)this + 0x5c) = bVar1 | 4;
      uVar3 = F_006f15b0(*(undefined * PTR32 *)((int)this + 4),((uint *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x8)));
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x408)) ^ (uint)(uint)(gen_frame + 0x40c));
  return uVar3;
}

/* ref: FUN_006f4150 */
unsigned int F_006f4150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f4150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  
  if (param_1 != 1) {
    bVar1 = F_00a02270(param_1);
    if (bVar1 != 0) {
      *(int *)((int)this + 0x60) = param_1;
    }
    F_006f4000(this);
  }
  return 0;
}

/* ref: Client::Game::Event::LuaEventHandler::vf36 */
uint F_006f4180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6f4180u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x180];
  uint * puVar1;
  undefined4 uVar2;
  undefined * pLVar3;
  byte bVar4;
  undefined4 * puVar5;
  undefined3 extraout_var = 0;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  (*(uint *)(gen_frame + 0x178)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x17c);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = this;
  (*(int *)(gen_frame + 0xc)) = param_1;
  (*(int *)(gen_frame + 0x10)) = param_3;
  (*(uint *)(gen_frame + 0x14)) = 0;
  iVar6 = param_3;
  iVar9 = param_1;
  if (param_2 != 0) {
    iVar8 = 0;
    do {
      puVar1 = *((uint * PTR32 *)GEN_TOP((*(int *)(iVar9 + (*(uint *)(gen_frame + 0x14)) * 4) + 4)));
      uVar7 = (*(uint *)(gen_frame + 0x14));
      if (puVar1 != (uint *)0x0) {
        uVar2 = *((undefined4 *)GEN_TOP((iVar8 + *(int *)(iVar6 + 0xc))));
        uVar7 = puVar1[1];
        F_0042cc20(((undefined1 *)(gen_frame + 0xcc)),(*puVar1 & 0xffffff) + (int)puVar1,REFG(undefined4, 0x108cc50));
        F_0042cc20(((undefined1 *)(gen_frame + 0x120)),(int)puVar1 + (uVar7 & 0xffffff) + 4,REFG(undefined4, 0x108cc50));
        (*(undefined1 *)(gen_frame + 0x174)) = 1;
        (*(undefined4 *)(gen_frame + 0x1c)) = uVar2;
        F_0042cbc0(((undefined1 *)(gen_frame + 0x20)),((undefined1 *)(gen_frame + 0xcc)));
        F_0042cbc0(((undefined1 *)(gen_frame + 0x74)),((undefined1 *)(gen_frame + 0x120)));
        pLVar3 = (*(undefined * PTR32 *)(gen_frame + 0x18));
        (*(undefined1 *)(gen_frame + 0xc8)) = (*(undefined1 *)(gen_frame + 0x174));
        puVar5 = (undefined4 *)F_004296a0(0xc0,0,800);
        *puVar5 = *(undefined4 *)(pLVar3 + 0x1c4);
        puVar5[1] = *(undefined4 *)(pLVar3 + 0x1c4);
        puVar5[2] = *(undefined4 *)(pLVar3 + 0x1c4);
        *(undefined2 *)(puVar5 + 0x2f) = 0;
        F_00748140(pLVar3 + 0x1cd,puVar5 + 3,&(*(undefined4 *)(gen_frame + 0x1c)));
        F_00750050(((undefined1 *)(gen_frame + 0x4)),puVar5,0);
        F_0042c880(((undefined1 *)(gen_frame + 0x74)));
        F_0042c880(((undefined1 *)(gen_frame + 0x20)));
        F_0042c880(((undefined1 *)(gen_frame + 0x120)));
        F_0042c880(((undefined1 *)(gen_frame + 0xcc)));
        iVar6 = (*(int *)(gen_frame + 0x10));
        uVar7 = (*(uint *)(gen_frame + 0x14));
        iVar9 = (*(int *)(gen_frame + 0xc));
      }
      iVar8 = iVar8 + 0x10;
      (*(uint *)(gen_frame + 0x14)) = uVar7 + 1;
    } while (uVar7 + 1 < param_2);
  }
  bVar4 = F_006f39a0((undefined *)(*(undefined * PTR32 *)(gen_frame + 0x18)),iVar9,param_2,iVar6);
  F_00c47745((*(uint *)(gen_frame + 0x178)) ^ (uint)(uint)(gen_frame + 0x17c));
  return CONCAT31(extraout_var,bVar4);
}

/* ref: Client::Game::Event::LuaEventHandler::vf83 */
uint F_006f4330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f4330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  bVar1 = F_006e6ba0(*(undefined * PTR32 *)(this + 4),this,0);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 == 0) {
    uVar2 = F_006f4000(this);
  }
  return uVar2;
}

/* ref: Client::Game::Event::AetheryteEventHandler::vf36 */
byte F_006f4350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6f4350u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar1 = F_006f4180((undefined *)(*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(int * PTR32 *)&gen_args[3]));
  if ((char)uVar1 != '\0') {
    return 1;
  }
  this_00 = *((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xf8)));
  uVar1 = F_00b9a750(*(undefined4 *)((int)this_00 + 8));
  uVar2 = F_0042a990((*(undefined * PTR32 *)&gen_args[0]) + 0x118);
  F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar2);
  F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
  uVar2 = F_00b9a940(*(undefined4 *)((int)this_00 + 8),0xffffffff);
  if (uVar2 != 0) {
    (*(int * PTR32 *)&gen_args[3]) = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))));
    if ((*(int * PTR32 *)&gen_args[3]) != *((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))) {
      do {
        uVar3 = *((undefined4 *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[3]) + 0xc)));
        uVar2 = F_0042a990((int)(*(int * PTR32 *)&gen_args[3]) + 0x10);
        F_00a01c80(this_00,uVar1 + 1,uVar2,uVar3);
        F_00732c70(&(*(int * PTR32 *)&gen_args[3]));
      } while ((*(int * PTR32 *)&gen_args[3]) != (int *)*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c4))));
    }
  }
  F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
  F_00735bf0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined * PTR32 *)&gen_args[0]));
  (*(undefined * PTR32 *)&gen_args[0])[0x1c] = (undefined1)((byte)(*(undefined * PTR32 *)&gen_args[0])[0x1c] & 0xfd);
  if (((byte)(*(undefined * PTR32 *)&gen_args[0])[0x1c] & 1) == 0) {
    (*(undefined * PTR32 *)&gen_args[0])[0x1c] = (undefined1)((byte)(*(undefined * PTR32 *)&gen_args[0])[0x1c] | 1);
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x23c))))((*(undefined * PTR32 *)&gen_args[0]));
  }
  return 0;
}

/* ref: FUN_006f4440 */
uint F_006f4440(unsigned int gen_a0)
{
  GEN_ENTER(0x6f4440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  cVar1 = *((char *)GEN_TOP((*(int *)((int)this + 0x2d4) + 0x32)));
  uVar6 = CONCAT31((int3)((uint)*(int *)((int)this + 0x2d4) >> 8),cVar1);
  (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3)) = (byte)((uint)((int)(uintptr_t)this) >> 0x18);
  (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 2)) = cVar1;
  gen_piece_set(&(*(undefined * PTR32 *)(gen_frame + 0x8)), 0, 3, (unsigned long long)(CONCAT12(cVar1,(short)this)));
  if (cVar1 != '\0') {
    uVar3 = F_00aafe10();
    uVar6 = (uint)(*(undefined * PTR32 *)(gen_frame + 0x8));
    (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3)) = 0;
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)(uVar6 & 0xffffff);
    uVar6 = 0;
    if (uVar3 != 0) {
      do {
        uVar4 = F_00ab2690((uint)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x8))) >> 0x18);
        uVar6 = uVar4;
        if ((uVar4 != 0) && (*(char *)(uVar4 + 0x32) == (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 2)))) {
          uVar5 = F_00ab1c90((uint)*(ushort *)(uVar4 + 0x28));
          uVar6 = 0;
          if (uVar5 != 0) {
            if (*(char *)(uVar5 + 0x2a) == '\0') {
              uVar6 = F_00756760((undefined *)((int)this + 0x2f8),(int)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3);
              if (*(char *)(uVar4 + 0x35) != '\0') {
                *(byte *)((int)this + 0x318) = (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3));
              }
            }
            else {
              uVar6 = F_00756760((undefined *)((int)this + 0x308),(int)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3);
            }
          }
        }
        bVar2 = (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3)) + 1;
        uVar6 = CONCAT31((int3)(uVar6 >> 8),bVar2);
        (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3)) = bVar2;
        (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)GEN_TOP(CONCAT13(bVar2,GEN_PIECE(&(*(undefined * PTR32 *)(gen_frame + 0x8)), 0, 3))));
      } while (bVar2 < uVar3);
    }
  }
  return uVar6;
}

/* ref: Client::Game::Event::ArrayEventHandler::vf1 */
uint F_006f44f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6f44f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * this_00;
  
  uVar1 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8));
  *(uint *)(this + 0x138) = uVar1;
  this_00 = (undefined4 *)F_00406b90(0x20,0,0);
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(this_00,1,0);
    this_00[5] = 1;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10b917c));
    this_00[6] = this;
    this_00[7] = ((code *)REFP(0x6edb10));
  }
  *(undefined4 * PTR32 *)(this + 0x13c) = this_00;
  F_00cb4540(this_00,0,*(undefined4 *)(this + 8));
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x138) + 0x48))))
                    (*(int * PTR32 *)(this + 0x138),*(undefined4 *)(this + 0x13c));
  this[0x1c] = (undefined1)((byte)this[0x1c] | 2);
  return uVar1;
}

/* ref: Client::Game::Event::GuildleveAssignmentEventHandler::vf54 */
unsigned int F_006f4580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f4580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (((*(int *)(this + 0x60) != 0) && (*(short *)(this + 0x54) != -1)) &&
     (((byte)this[0x5c] & 4) == 0)) {
    this[0x5c] = (undefined1)((byte)this[0x5c] | 4);
    F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
  }
  return 0;
}

/* ref: Client::Game::Event::GuildleveAssignmentEventHandler::vf36 */
byte F_006f45b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6f45b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar1 = F_006f4180((undefined *)(*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(int * PTR32 *)&gen_args[3]));
  if ((char)uVar1 == '\0') {
    this_00 = *((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xf8)));
    uVar1 = F_00b9a750(*(undefined4 *)((int)this_00 + 8));
    uVar2 = F_0042a990((*(undefined * PTR32 *)&gen_args[0]) + 0x118);
    F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar2);
    F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
    uVar2 = F_00b9a940(*(undefined4 *)((int)this_00 + 8),0xffffffff);
    if (uVar2 != 0) {
      (*(int * PTR32 *)&gen_args[3]) = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))));
      if ((*(int * PTR32 *)&gen_args[3]) != *((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))) {
        do {
          uVar3 = *((undefined4 *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[3]) + 0xc)));
          uVar2 = F_0042a990((int)(*(int * PTR32 *)&gen_args[3]) + 0x10);
          F_00a01c80(this_00,uVar1 + 1,uVar2,uVar3);
          F_00732c70(&(*(int * PTR32 *)&gen_args[3]));
        } while ((*(int * PTR32 *)&gen_args[3]) != (int *)*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c4))));
      }
    }
    F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
    F_006d86b0((*(undefined * PTR32 *)&gen_args[0]));
  }
  return 1;
}

/* ref: Client::Game::Event::GuildleveAssignmentEventHandler::vf83 */
uint F_006f4680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f4680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  bVar1 = F_006e6ba0(*(undefined * PTR32 *)(this + 4),this,0);
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  piVar3 = piVar2;
  if (REFG(undefined4, 0x132410c) == this) {
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,REFG(undefined4, 0x1324110),0)));
    bVar1 = 1;
  }
  if (REFG(undefined4, 0x132411c) == this) {
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,REFG(undefined4, 0x1324120),0);
    return uVar4;
  }
  if (bVar1 == 0) {
    piVar3 = (int *)F_006f4000(this);
  }
  return (uint)piVar3;
}

/* ref: Client::Game::Event::CompanyLeveOfficerEventHandler::vf36 */
byte F_006f4700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6f4700u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_006f4180((undefined *)this,param_1,param_2,param_3);
  if ((char)uVar2 != '\0') {
    return 1;
  }
  bVar1 = F_006d8320((undefined *)this);
  F_006db910(this,(uint)bVar1);
  bVar1 = F_006d8320((undefined *)this);
  if (bVar1 == 0) {
    F_00735d50(this,this);
    this[0x1c] = (undefined1)((byte)this[0x1c] & 0xfd);
    if (((byte)this[0x1c] & 1) == 0) {
      this[0x1c] = (undefined1)((byte)this[0x1c] | 1);
      ((code *)*(gen_code32 *)(*(int *)this + 0x23c))(this);
    }
  }
  return 0;
}

/* ref: FUN_006f4770 */
uint F_006f4770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6f4770u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint uVar2;
  
  uVar2 = 0xffff;
  if (*(short *)((int)this + 0x54) != -1) {
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = (undefined2)param_2;
    bVar1 = *(byte *)((int)this + 0x5c);
    uVar2 = (uint)CONCAT11((char)((uint)param_2 >> 8),bVar1);
    (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)((int)this + 0x138);
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 2)) = (undefined2)param_1;
    (*(undefined4 *)(gen_frame + 0x8)) = CONCAT22((undefined2)param_1,(undefined2)param_2);
    if ((bVar1 & 4) == 0) {
      *(byte *)((int)this + 0x5c) = bVar1 | 4;
      uVar2 = F_006f15b0(*(undefined * PTR32 *)((int)this + 4),&(*(undefined4 *)(gen_frame + 0x4)),2);
    }
  }
  return uVar2;
}

/* ref: Client::Game::Event::CustomTalkEventHandler::vf1 */
uint F_006f47d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6f47d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * this_00;
  
  uVar1 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8));
  *(uint *)(this + 0x2d4) = uVar1;
  this_00 = (undefined4 *)F_00406b90(0x20,0,0);
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(this_00,1,0);
    this_00[5] = 1;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10b91c0));
    this_00[6] = this;
    this_00[7] = ((code *)REFP(0x6ee590));
  }
  *(undefined4 * PTR32 *)(this + 0x2d8) = this_00;
  F_00cb4540(this_00,0,*(undefined4 *)(this + 8));
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x2d4) + 0x48))))
                    (*(int * PTR32 *)(this + 0x2d4),*(undefined4 *)(this + 0x2d8));
  this[0x1c] = (undefined1)((byte)this[0x1c] | 2);
  return uVar1;
}

/* ref: Client::Game::Event::CustomTalkEventHandler::vf83 */
uint F_006f4860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f4860u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  undefined4 uVar4;
  
  bVar1 = F_006e6ba0(*(undefined * PTR32 *)(this + 4),this,0);
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar4 = 0x3c;
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
  piVar2 = (int *)F_00763050(uVar3,uVar4);
  uVar3 = 0;
  if (piVar2 != (int *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2);
    if ((char)uVar3 != '\0') {
      uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
      return uVar3;
    }
  }
  if (bVar1 == 0) {
    uVar3 = F_006f4000(this);
  }
  return uVar3;
}

/* ref: Client::Game::Event::CustomTalkEventHandler::vf36 */
byte F_006f48d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6f48d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar2 = F_006f4180((undefined *)this,param_1,param_2,param_3);
  if ((char)uVar2 != '\0') {
    return 1;
  }
  bVar1 = F_006d8320((undefined *)this);
  F_006e99a0(this,(uint)bVar1);
  uVar3 = 0;
  uVar2 = F_0042a990(this + 0x280);
  F_00754440(this + 0xfc,REFG(undefined * PTR32, 0x1323724),uVar2,uVar3);
  return 0;
}

/* ref: Client::Game::Event::DefaultTalkEventHandler::vf83 */
uint F_006f4930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f4930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined1 DVar1;
  int * piVar2;
  undefined4 * puVar3;
  byte bVar4;
  undefined3 extraout_var = 0;
  uint uVar5;
  
  if (*(int *)(this + 0xfc) != 0) {
    piVar2 = *(int * PTR32 *)(this + 0x100);
    if (piVar2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar2 + 0x4c))(piVar2,*(int *)(this + 0xfc));
    }
    puVar3 = *(undefined4 * PTR32 *)(this + 0xfc);
    if (puVar3 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
      *(undefined4 *)(this + 0xfc) = 0;
    }
  }
  bVar4 = F_006e6ba0(*(undefined * PTR32 *)(this + 4),this,0);
  uVar5 = CONCAT31(extraout_var,bVar4);
  if ((bVar4 == 0) && (*(short *)(this + 0x54) != -1)) {
    DVar1 = this[0x5c];
    uVar5 = CONCAT31(extraout_var,DVar1);
    if (((byte)DVar1 & 4) == 0) {
      this[0x5c] = (undefined1)((byte)DVar1 | 4);
      uVar5 = F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
    }
  }
  return uVar5;
}

/* ref: FUN_006f49b0 */
uint F_006f49b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6f49b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint param_4 = (uint)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xf0];
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xec);
  (*(uint *)(gen_frame + 0xe8)) = uVar2;
  if (((*(byte *)((int)this + 0x184) & 8) != 0) ||
     (uVar2 = 0xffff, *(short *)((int)this + 0x54) == -1)) goto LAB_006f4bb8;
  F_00c48350(&(*(undefined4 *)(gen_frame + 0x8)),0,0xe0);
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    (*(uint *)(gen_frame + 0xc)) = (uint)REFG(undefined1, 0x14ab7dc);
    (*(uint *)(gen_frame + 0x2c)) = (uint)REFG(undefined1, 0x14ab7dd);
    (*(uint *)(gen_frame + 0x10)) = (uint)REFG(undefined1, 0x14ab7e8);
    (*(uint *)(gen_frame + 0x30)) = (uint)REFG(undefined1, 0x14ab7e9);
    (*(uint *)(gen_frame + 0x14)) = (uint)REFG(undefined1, 0x14ab7f4);
    (*(uint *)(gen_frame + 0x34)) = (uint)REFG(undefined1, 0x14ab7f5);
    (*(uint *)(gen_frame + 0x18)) = (uint)REFG(undefined1, 0x14ab800);
    (*(uint *)(gen_frame + 0x38)) = (uint)REFG(undefined1, 0x14ab801);
    (*(uint *)(gen_frame + 0x1c)) = (uint)REFG(undefined1, 0x14ab80c);
    (*(uint *)(gen_frame + 0x3c)) = (uint)REFG(undefined1, 0x14ab80d);
    (*(uint *)(gen_frame + 0x20)) = (uint)REFG(undefined1, 0x14ab818);
    (*(uint *)(gen_frame + 0x40)) = (uint)REFG(undefined1, 0x14ab819);
    (*(uint *)(gen_frame + 0x24)) = (uint)REFG(undefined1, 0x14ab824);
    uVar2 = (uint)REFG(undefined1, 0x14ab831);
    (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),0x11);
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(uint *)(gen_frame + 0x44)) = (uint)REFG(undefined1, 0x14ab825);
    (*(uint *)(gen_frame + 0x28)) = (uint)REFG(undefined1, 0x14ab830);
    (*(uint *)(gen_frame + 0x48)) = uVar2;
    break;
  case 1: ;
    bVar1 = F_006d06b0(this,&(*(undefined4 *)(gen_frame + 0x8)));
    uVar2 = CONCAT31(extraout_var,bVar1);
    if (bVar1 == 0) {
      (*(undefined4 *)(gen_frame + 0x8)) = 2;
      (*(uint *)(gen_frame + 0xc)) = param_2;
      goto LAB_006f4b7c;
    }
    (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),0x38);
    (*(undefined4 *)(gen_frame + 0x8)) = 1;
    break;
  default: ;
    (*(undefined4 *)(gen_frame + 0x8)) = param_1;
    (*(uint *)(gen_frame + 0xc)) = param_2;
    (*(uint *)(gen_frame + 0x10)) = param_3;
    (*(uint *)(gen_frame + 0x14)) = param_4;
    uVar2 = param_4;
LAB_006f4b7c: ;
    (*(uint *)(gen_frame + 0xc)) = param_2;
    (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),4);
    break;
  case 0xd: ;
  case 0xe: ;
    bVar1 = F_006d06b0(this,&(*(undefined4 *)(gen_frame + 0x8)));
    uVar2 = CONCAT31(extraout_var_00,bVar1);
    if (bVar1 == 0) {
      (*(undefined4 *)(gen_frame + 0xe4)) = 0;
    }
    (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),0x38);
    (*(undefined4 *)(gen_frame + 0x8)) = param_1;
  }
  *(byte *)((int)this + 0x184) = *(byte *)((int)this + 0x184) | 8;
  if (*(short *)((int)this + 0x54) != -1) {
    bVar1 = *(byte *)((int)this + 0x5c);
    uVar2 = CONCAT31((int3)(uVar2 >> 8),bVar1);
    if ((bVar1 & 4) == 0) {
      *(byte *)((int)this + 0x5c) = bVar1 | 4;
      uVar2 = F_006f15b0(*(undefined * PTR32 *)((int)this + 4),&(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x4)));
    }
  }
LAB_006f4bb8: ;
  F_00c47745((*(uint *)(gen_frame + 0xe8)) ^ (uint)(uint)(gen_frame + 0xec));
  return uVar2;
}

/* ref: Client::Game::Event::QuestEventHandler::vf83 */
uint F_006f4bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f4bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  bool bVar1;
  byte bVar2;
  int * piVar3;
  int * piVar4;
  undefined3 extraout_var = 0;
  uint uVar5;
  
  bVar1 = false;
  piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  if (REFG(undefined4, 0x1324160) == this) {
    if (REFG(int, 0x1324164) == 0) {
      REFG(undefined4, 0x1324160) = (undefined *)0x0;
      REFG(int, 0x1324164) = 0;
      *(undefined4 *)&REFG(undefined, 0x1324168) = 0;
    }
    else {
      piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3)));
      ((code *)*(gen_code32 *)(*piVar4 + 0x54))(piVar4,REFG(int, 0x1324164),0);
      bVar1 = true;
    }
  }
  if (REFG(undefined4, 0x1324170) == this) {
    if (REFG(int, 0x1324174) == 0) {
      REFG(undefined4, 0x1324170) = (undefined *)0x0;
      REFG(int, 0x1324174) = 0;
      *(undefined4 *)&REFG(undefined, 0x1324178) = 0;
    }
    else {
      piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3)));
      ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,REFG(int, 0x1324174),0);
      bVar1 = true;
    }
  }
  bVar2 = F_006e6ba0(*(undefined * PTR32 *)(this + 4),this,0);
  uVar5 = CONCAT31(extraout_var,bVar2);
  if ((bVar2 == 0) && (!bVar1)) {
    uVar5 = F_006f4000(this);
  }
  return uVar5;
}

/* ref: Client::Game::Event::QuestEventHandler::vf40 */
unsigned int F_006f4cb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6f4cb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pQVar1;
  uint uVar2;
  undefined4 uVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x368))) != 0) {
    F_00748d80((*(undefined * PTR32 *)&gen_args[0]) + 0x1c0,&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[3]));
    F_0042ccf0((*(undefined * PTR32 *)(gen_frame + 0x8)) + 100,(*(undefined4 *)&gen_args[2]));
    pQVar1 = (*(undefined * PTR32 *)&gen_args[0]) + 0x368;
    *(int *)pQVar1 = *(int *)pQVar1 + -1;
    if (*(int *)pQVar1 == 0) {
      F_006e9ff0((*(undefined * PTR32 *)&gen_args[0]));
      uVar3 = 0;
      uVar2 = F_0042a990((*(undefined * PTR32 *)&gen_args[0]) + 0x280);
      F_00754440((*(undefined * PTR32 *)&gen_args[0]) + 0xfc,REFG(undefined * PTR32, 0x132372c),uVar2,uVar3);
    }
  }
  return 0;
}

/* ref: FUN_006f4d20 */
uint F_006f4d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6f4d20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  uint uVar2;
  
  uVar2 = 0xffff;
  *(undefined1 *)((int)this + 0x1bf9) = 1;
  if (*(short *)((int)this + 0x54) != -1) {
    bVar1 = *(byte *)((int)this + 0x5c);
    uVar2 = CONCAT31(0xff,bVar1);
    if ((bVar1 & 4) == 0) {
      *(byte *)((int)this + 0x5c) = bVar1 | 4;
      uVar2 = F_006f15b0(*(undefined * PTR32 *)((int)this + 4),param_1,param_2);
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: Client::Game::Event::ShopEventHandler::vf53 */
uint F_006f4d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f4d50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x400];
  undefined1 SVar1;
  undefined * pvVar2;
  
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  pvVar2 = F_00c48350(((undefined1 *)(gen_frame + 0x4)),0,0x3f8);
  this[0x1bf9] = (undefined1)0x1;
  if (*(short *)(this + 0x54) != -1) {
    SVar1 = this[0x5c];
    pvVar2 = ((undefined *)GEN_TOP(CONCAT31((int3)((uint)((int)(uintptr_t)pvVar2) >> 8),SVar1)));
    if (((byte)SVar1 & 4) == 0) {
      this[0x5c] = (undefined1)((byte)SVar1 | 4);
      pvVar2 = (undefined *)F_006f15b0(*(undefined * PTR32 *)(this + 4),&(*(undefined4 *)(gen_frame + 0x0)),0);
    }
  }
  return (uint)pvVar2;
}

/* ref: FUN_006f4dc0 */
byte F_006f4dc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f4dc0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  byte bVar2;
  char cVar3;
  
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x60))) != 0) {
    *(undefined4 *)&REFG(undefined, 0x1324184) = 0;
    return 1;
  }
  if (*((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54))) != 0) {
    *(undefined4 *)&REFG(undefined, 0x1324184) = 0;
    return 1;
  }
  if ((*(int *)&gen_args[1]) == 0) {
    (*(int *)&gen_args[1]) = 1;
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1bf2))) = 0;
  }
  else if ((*(int *)&gen_args[1]) == 1) {
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1bf2))) = 0;
  }
  else {
    if ((*(int *)&gen_args[1]) == 2) {
      cVar3 = '\0';
      bVar2 = 0;
      if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1bd4))) != 0) {
        uVar1 = 0;
        do {
          if (*((int *)GEN_TOP(((uVar1 + 0x21) * 0xa8 + (int)(*(undefined * PTR32 *)&gen_args[0])))) == *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)))) {
            cVar3 = cVar3 + '\x01';
          }
          bVar2 = bVar2 + 1;
          uVar1 = (uint)bVar2;
        } while (uVar1 < *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1bd4))));
        if (cVar3 != '\0') {
          (*(int *)&gen_args[1]) = 1;
          *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1bf2))) = 1;
          goto LAB_006f4e61;
        }
      }
    }
    else if (((*(int *)&gen_args[1]) < 3) && ((*(int *)&gen_args[1]) != -1)) goto LAB_006f4e61;
    (*(int *)&gen_args[1]) = 0;
  }
LAB_006f4e61: ;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1bf9))) = 1;
  if ((*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) & 4) == 0) {
    *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) = *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) | 4;
    F_006f15b0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),&(*(int *)&gen_args[1]),1);
  }
  *(undefined4 *)&REFG(undefined, 0x1324184) = 0;
  return 1;
}

/* ref: FUN_006f4e90 */
byte F_006f4e90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6f4e90u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x400];
  uint uVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = (*(uint *)&gen_args[1]);
  if ((*(uint *)&gen_args[1]) == 0x400) {
    F_006c1270((*(undefined * PTR32 *)&gen_args[0]));
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1bf2))) = 0;
    return 0;
  }
  if ((*(uint *)&gen_args[1]) == 0x401) {
    F_006c1990((*(undefined * PTR32 *)&gen_args[0]));
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1bf2))) = 1;
    return 0;
  }
  if ((*(uint *)&gen_args[1]) == 0x402) {
    F_006c2180((*(undefined * PTR32 *)&gen_args[0]));
    return 0;
  }
  if ((((*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1bf9))) != '\0') || (REFG(int, 0x13241b4) != 0)) || (REFG(int, 0x13241c4) != 0)) ||
     (REFG(int, 0x13241a4) != 0)) {
    return 0;
  }
  if ((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x60))) == 0) && (*((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54))) == 0x28)) {
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    F_00c48350(((undefined1 *)(gen_frame + 0x4)),0,0x3f8);
    if ((uVar5 != 0xffffffff) && (uVar5 != 0xfffffffe)) {
      if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1bf2))) == '\0') {
        *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xfc))) = *((undefined4 *)GEN_TOP((uVar5 * 0x7c + 0x164 + (int)(*(undefined * PTR32 *)&gen_args[0]))));
        uVar2 = (*(undefined4 *)&gen_args[2]);
      }
      else {
        if (*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1bd4))) <= uVar5) {
          return 0;
        }
        uVar4 = 0;
        bVar3 = 0;
        if (*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1bd4))) != 0) {
          uVar1 = 0;
          do {
            if (*((int *)GEN_TOP(((uVar1 + 0x21) * 0xa8 + (int)(*(undefined * PTR32 *)&gen_args[0])))) == *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)))) {
              if (uVar4 == uVar5) {
                uVar5 = (uint)bVar3;
                break;
              }
              uVar4 = (uint)(byte)((char)uVar4 + 1);
            }
            bVar3 = bVar3 + 1;
            uVar1 = (uint)bVar3;
          } while (uVar1 < *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1bd4))));
        }
        *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xfc))) = *((undefined4 *)GEN_TOP((uVar5 * 0xa8 + 0x1538 + (int)(*(undefined * PTR32 *)&gen_args[0]))));
        uVar2 = *((undefined4 *)GEN_TOP((uVar5 * 0xa8 + 0x153c + (int)(*(undefined * PTR32 *)&gen_args[0]))));
      }
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1bcc))) = uVar2;
      (*(uint *)&gen_args[1]) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xfc)));
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1bd8))) = uVar5;
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1be0))) = 1;
      *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1bed))) = 1;
      if (1000000 < (int)(*(uint *)&gen_args[1])) {
        (*(uint *)&gen_args[1]) = (*(uint *)&gen_args[1]) + -1000000;
      }
      F_006cd8f0((*(undefined * PTR32 *)&gen_args[0]),&(*(uint *)&gen_args[1]),1,0);
      return 0;
    }
    (*(undefined4 *)(gen_frame + 0x0)) = 1;
    uVar5 = F_00753350(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))));
    if (uVar5 != 0) {
      F_006f4d20((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x0)),1);
    }
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1bf2))) = 0;
  }
  REFG(undefined4, 0x1324194) = 0;
  return 1;
}

/* ref: FUN_006f5080 */
uint F_006f5080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f5080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x400];
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  
  F_00c48350(&(*(undefined4 *)(gen_frame + 0x4)),0,0x3f8);
  (*(int *)(gen_frame + 0xc)) = *(int *)((int)this + 0x1bd8);
  uVar2 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1bd8) * 0x7c + 0x168 + (int)this)));
  (*(undefined4 *)(gen_frame + 0x4)) = 1;
  *(undefined1 *)((int)this + 0x1bf9) = 1;
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)((int)this + 0x104);
  (*(undefined4 *)(gen_frame + 0x10)) = uVar2;
  uVar3 = *(uint *)((int)this + 0xfc);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = param_1;
  (*(uint *)(gen_frame + 0x18)) = uVar3;
  if (*(short *)((int)this + 0x54) != -1) {
    bVar1 = *(byte *)((int)this + 0x5c);
    uVar3 = CONCAT31((int3)(uVar3 >> 8),bVar1);
    if ((bVar1 & 4) == 0) {
      *(byte *)((int)this + 0x5c) = bVar1 | 4;
      uVar3 = F_006f15b0(*(undefined * PTR32 *)((int)this + 4),&(*(undefined4 *)(gen_frame + 0x0)),0xff);
    }
  }
  return uVar3;
}

/* ref: FUN_006f5130 */
uint F_006f5130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f5130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x400];
  uint uVar1;
  
  F_00c48350(&(*(undefined4 *)(gen_frame + 0x4)),0,0x3f8);
  (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)((int)this + 0x14c8);
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)((int)this + 0x104);
  (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)((int)this + 0x100);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 2;
  (*(undefined4 *)(gen_frame + 0x14)) = param_1;
  (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)((int)this + 0xfc);
  *(undefined1 *)((int)this + 0x1bf9) = 1;
  if ((*(short *)((int)this + 0x54) != -1) && ((*(byte *)((int)this + 0x5c) & 4) == 0)) {
    *(byte *)((int)this + 0x5c) = *(byte *)((int)this + 0x5c) | 4;
    F_006f15b0(*(undefined * PTR32 *)((int)this + 4),&(*(undefined4 *)(gen_frame + 0x0)),0xff);
  }
  uVar1 = F_00a3d7c0(&REFG(undefined, 0x14a4230),*(undefined4 *)((int)this + 0x104),
                       (uint)*(ushort *)((int)this + 0x100));
  *(undefined1 *)((int)this + 0x1bf2) = 1;
  return uVar1;
}

/* ref: FUN_006f5200 */
uint F_006f5200(unsigned int gen_a0)
{
  GEN_ENTER(0x6f5200u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x400];
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  F_00c48350(&(*(undefined4 *)(gen_frame + 0x4)),0,0x3f8);
  (*(int *)(gen_frame + 0x8)) = *(int *)((int)this + 0x1bd8);
  iVar2 = *(int *)((int)this + 0x1bd8) * 0xa8;
  uVar3 = 0xffff;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(iVar2 + 0x153c + (int)this);
  (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(iVar2 + 0x1540 + (int)this);
  *(undefined1 *)((int)this + 0x1bf9) = 1;
  if (*(short *)((int)this + 0x54) != -1) {
    bVar1 = *(byte *)((int)this + 0x5c);
    uVar3 = CONCAT31(0xff,bVar1);
    if ((bVar1 & 4) == 0) {
      *(byte *)((int)this + 0x5c) = bVar1 | 4;
      uVar3 = F_006f15b0(*(undefined * PTR32 *)((int)this + 4),&(*(undefined4 *)(gen_frame + 0x0)),5);
    }
  }
  return uVar3;
}

/* ref: Client::Game::Event::ShopEventHandler::vf83 */
uint F_006f52a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f52a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined1 SVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  this[0x1bf9] = (undefined1)0x0;
  F_006e6ba0(*(undefined * PTR32 *)(this + 4),this,0);
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  if (piVar2 != (int *)0x0) {
    F_006c21d0();
    if (REFG(int, 0x13241b4) != 0) {
      piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
      ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,REFG(int, 0x13241b4),0);
    }
    if (REFG(int, 0x13241c4) != 0) {
      piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
      ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,REFG(int, 0x13241c4),0);
    }
    if (REFG(int, 0x13241a4) != 0) {
      piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
      ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,REFG(int, 0x13241a4),0);
    }
    if (REFG(int, 0x1324194) != 0) {
      piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
      ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,REFG(int, 0x1324194),0);
    }
  }
  uVar4 = 0xffff;
  if (*(short *)(this + 0x54) != -1) {
    SVar1 = this[0x5c];
    uVar4 = CONCAT31(0xff,SVar1);
    if (((byte)SVar1 & 4) == 0) {
      this[0x5c] = (undefined1)((byte)SVar1 | 4);
      uVar4 = F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
    }
  }
  this[0x1bf2] = (undefined1)0x0;
  return uVar4;
}

/* ref: Client::Game::Event::CraftLeveClientEventHandler::vf128 */
uint F_006f5390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6f5390u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pCVar1;
  uint uVar2;
  uint uVar3;
  ushort * puVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  pCVar1 = (*(undefined * PTR32 *)&gen_args[0]) + 0x334;
  F_006ee830((*(undefined * PTR32 *)&gen_args[0]),(*(uint *)&gen_args[3]),pCVar1);
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x338))) - *(int *)((int)(uintptr_t)pCVar1) >> 1 == 0) {
    return 0;
  }
  uVar2 = F_00a4ffd0();
  puVar4 = *(ushort * PTR32 *)pCVar1;
  if (puVar4 != *((ushort * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x338)))) {
    do {
      uVar3 = F_006dd140((*(undefined * PTR32 *)&gen_args[0]),(uint)*puVar4);
      if ((char)uVar3 != '\0') {
        return 0xece5;
      }
      (*(uint *)&gen_args[3]) = (uint)*puVar4;
      F_00744670((*(undefined * PTR32 *)&gen_args[0]) + 0x344,&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(uint *)&gen_args[3]));
      if (9 < *((byte *)GEN_TOP((uVar2 + 0x168a + *(int *)((*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x94) * 0x10)))) {
        return 0xece5;
      }
      puVar4 = puVar4 + 1;
    } while (puVar4 != *((ushort * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x338))));
  }
  return 0xecef;
}

/* ref: Client::Game::Event::CraftLeveClientEventHandler::vf5 */
uint F_006f5440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f5440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * pCVar1;
  
  pCVar1 = this + 0x334;
  F_006ee830(this,*(undefined4 *)(param_1 + 0x78),pCVar1);
  if ((*(int *)(this + 0x338) - *(int *)pCVar1 & 0xfffffffeU) == 2) {
    *(undefined2 *)(this + 0x1d4) = **(undefined2 * PTR32 *)pCVar1;
  }
  return (uint)(*(int *)(this + 0x338) - *(int *)((int)(uintptr_t)pCVar1) >> 1 != 0);
}

/* ref: Client::Game::Event::CraftLeveClientEventHandler::vf36 */
byte F_006f5490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6f5490u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar1 = F_006f4180((undefined *)(*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(int * PTR32 *)&gen_args[3]));
  if ((char)uVar1 != '\0') {
    return 1;
  }
  this_00 = *((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xf8)));
  uVar1 = F_00b9a750(*(undefined4 *)((int)this_00 + 8));
  uVar2 = F_0042a990((*(undefined * PTR32 *)&gen_args[0]) + 0x118);
  F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar2);
  F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
  uVar2 = F_00b9a940(*(undefined4 *)((int)this_00 + 8),0xffffffff);
  if (uVar2 != 0) {
    (*(int * PTR32 *)&gen_args[3]) = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))));
    if ((*(int * PTR32 *)&gen_args[3]) != *((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))) {
      do {
        uVar3 = *((undefined4 *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[3]) + 0xc)));
        uVar2 = F_0042a990((int)(*(int * PTR32 *)&gen_args[3]) + 0x10);
        F_00a01c80(this_00,uVar1 + 1,uVar2,uVar3);
        F_00732c70(&(*(int * PTR32 *)&gen_args[3]));
      } while ((*(int * PTR32 *)&gen_args[3]) != (int *)*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c4))));
    }
  }
  F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
  F_00735f60((*(undefined * PTR32 *)&gen_args[0]),(*(undefined * PTR32 *)&gen_args[0]));
  (*(undefined * PTR32 *)&gen_args[0])[0x1c] = (undefined1)((byte)(*(undefined * PTR32 *)&gen_args[0])[0x1c] & 0xfd);
  if (((byte)(*(undefined * PTR32 *)&gen_args[0])[0x1c] & 1) == 0) {
    (*(undefined * PTR32 *)&gen_args[0])[0x1c] = (undefined1)((byte)(*(undefined * PTR32 *)&gen_args[0])[0x1c] | 1);
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x23c))))((*(undefined * PTR32 *)&gen_args[0]));
  }
  return 0;
}

/* ref: Client::Game::Event::CraftLeveClientEventHandler::vf83 */
uint F_006f5580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f5580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  
  bVar2 = F_006e6ba0(*(undefined * PTR32 *)(this + 4),this,0);
  piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  if (REFG(undefined4, 0x13241d0) == this) {
    piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar1 = REFG(undefined4, 0x13241d4);
    if ((piVar3 != (int *)0x0) && (REFG(undefined4, 0x13241d0) == this)) {
      piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3)));
      uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,uVar1,0);
      REFG(undefined4, 0x13241d0) = (undefined *)0x0;
      return uVar4;
    }
  }
  else if (bVar2 == 0) {
    piVar3 = (int *)F_006f4000(this);
  }
  return (uint)piVar3;
}

/* ref: Client::Game::Event::FishingEventHandler::vf41 */
uint F_006f5600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6f5600u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined1 FVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = param_3;
  if ((param_3 == 1) || (param_3 == 2)) {
    iVar3 = *(int *)((int)param_1 + 0x2dd8);
    if ((iVar3 != 0) && (iVar3 != param_2)) {
      *(undefined4 *)((int)param_1 + 0x2dd8) = 0;
      iVar4 = REFG(int, 0x1488344);
      F_00aa4270(param_1,iVar3,0,0);
      (*(undefined * PTR32 *)(gen_frame + 0x10)) = this + 0x28;
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = param_1;
      (*(int *)(gen_frame + 0xc)) = iVar3;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      (*(undefined2 *)(gen_frame + 0x18)) = 0;
      F_00746770((undefined4 *)(iVar4 + 0x6f0),*(undefined4 *)(iVar4 + 0x6f0),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
      uVar5 = 0xffff;
      if (*(short *)(this + 0x54) != -1) {
        FVar1 = this[0x5c];
        uVar5 = CONCAT31(0xff,FVar1);
        if (((byte)FVar1 & 4) == 0) {
          this[0x5c] = (undefined1)((byte)FVar1 | 4);
          uVar5 = F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
        }
      }
    }
  }
  else {
    if (param_3 == 6) {
      iVar3 = *(int *)((int)param_1 + 0x2dd8);
      if ((iVar3 != 0) && (iVar3 != param_2)) {
        *(undefined4 *)((int)param_1 + 0x2dd8) = 0;
        uVar5 = F_006df740(this,param_1,iVar3,6);
        return uVar5;
      }
      uVar5 = 0xffff;
      sVar2 = *(short *)(this + 0x54);
    }
    else {
      if (param_3 != 3) {
        return param_3;
      }
      sVar2 = *(short *)(this + 0x54);
    }
    if (sVar2 != -1) {
      FVar1 = this[0x5c];
      uVar5 = CONCAT31((int3)(uVar5 >> 8),FVar1);
      if (((byte)FVar1 & 4) == 0) {
        this[0x5c] = (undefined1)((byte)FVar1 | 4);
        uVar5 = F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
        return uVar5;
      }
    }
  }
  return uVar5;
}

/* ref: FUN_006f5720 */
byte F_006f5720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6f5720u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  int iVar2;
  
  iVar1 = REFG(int, 0x1488344);
  if ((char)param_4 != '\x01') {
    if ((*(short *)((int)this + 0x54) != -1) && ((*(byte *)((int)this + 0x5c) & 4) == 0)) {
      *(byte *)((int)this + 0x5c) = *(byte *)((int)this + 0x5c) | 4;
      F_006f15b0(*(undefined * PTR32 *)((int)this + 4),0,0);
    }
    return 0;
  }
  if (*param_3 == 0) {
    F_00aa4270(param_1,0x10f,0,0);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = param_1;
    (*(int *)(gen_frame + 0xc)) = 0x10f;
    (*(int *)(gen_frame + 0x10)) = (int)this + 0x28;
    (*(uint *)(gen_frame + 0x14)) = 0;
    (*(undefined2 *)(gen_frame + 0x18)) = 0;
    F_00746770((undefined *)(iVar1 + 0x6f0),*(undefined4 *)(iVar1 + 0x6f0),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
    return 0;
  }
  *(undefined4 *)((int)param_1 + 0x2dd8) = 0x10f;
  iVar2 = REFG(int, 0x1488344);
  iVar1 = *param_3;
  F_00aa4270(param_1,iVar1,0,0);
  (*(uint *)(gen_frame + 0x14)) = param_2 & 0xffff;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = param_1;
  (*(int *)(gen_frame + 0xc)) = iVar1;
  (*(int *)(gen_frame + 0x10)) = (int)this + 0x28;
  (*(undefined2 *)(gen_frame + 0x18)) = 0;
  F_00746770((undefined *)(iVar2 + 0x6f0),*(undefined4 *)(iVar2 + 0x6f0),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  return 1;
}

/* ref: FUN_006f5820 */
byte F_006f5820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6f5820u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  if ((char)param_4 == '\x02') {
    *(bool *)((int)this + 0x109) = *(int *)(param_3 + 4) == 1;
    F_00a4a760(&REFG(undefined, 0x14a7360),0x1a,0);
    F_00a4a760(&REFG(undefined, 0x14a7360),0x1b,0);
  }
  else if ((*(short *)((int)this + 0x54) != -1) && ((*(byte *)((int)this + 0x5c) & 4) == 0)) {
    *(byte *)((int)this + 0x5c) = *(byte *)((int)this + 0x5c) | 4;
    F_006f15b0(*(undefined * PTR32 *)((int)this + 4),0,0);
    return 0;
  }
  return 0;
}

/* ref: FUN_006f5890 */
byte F_006f5890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6f5890u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = REFG(int, 0x1488344);
  if ((char)param_4 == '\x01') {
    uVar1 = *param_3;
    F_00aa4270(param_1,uVar1,0,0);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = param_1;
    (*(undefined4 *)(gen_frame + 0xc)) = uVar1;
    (*(int *)(gen_frame + 0x10)) = (int)this + 0x28;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined2 *)(gen_frame + 0x18)) = 0;
    F_00746770((undefined *)(iVar2 + 0x6f0),*(undefined4 *)(iVar2 + 0x6f0),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  }
  else if ((*(short *)((int)this + 0x54) != -1) && ((*(byte *)((int)this + 0x5c) & 4) == 0)) {
    *(byte *)((int)this + 0x5c) = *(byte *)((int)this + 0x5c) | 4;
    F_006f15b0(*(undefined * PTR32 *)((int)this + 4),0,0);
    return 0;
  }
  return 0;
}

/* ref: FUN_006f5930 */
byte F_006f5930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6f5930u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = REFG(int, 0x1488344);
  if ((char)param_4 != '\x02') {
    if ((*(short *)((int)this + 0x54) != -1) && ((*(byte *)((int)this + 0x5c) & 4) == 0)) {
      *(byte *)((int)this + 0x5c) = *(byte *)((int)this + 0x5c) | 4;
      F_006f15b0(*(undefined * PTR32 *)((int)this + 4),0,0);
    }
    return 0;
  }
  uVar1 = *param_3;
  F_00aa4270(param_1,uVar1,0,0);
  (*(uint *)(gen_frame + 0x14)) = param_2 & 0xffff;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = param_1;
  (*(undefined4 *)(gen_frame + 0xc)) = uVar1;
  (*(int *)(gen_frame + 0x10)) = (int)this + 0x28;
  (*(undefined2 *)(gen_frame + 0x18)) = 0;
  F_00746770((undefined4 *)(iVar2 + 0x6f0),*(undefined4 *)(iVar2 + 0x6f0),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  *(undefined4 *)((int)param_1 + 0x2dd8) = param_3[1];
  return 1;
}

/* ref: FUN_006f59d0 */
byte F_006f59d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6f59d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = REFG(int, 0x1488344);
  if ((char)param_4 != '\x01') {
    if ((*(short *)((int)this + 0x54) != -1) && ((*(byte *)((int)this + 0x5c) & 4) == 0)) {
      *(byte *)((int)this + 0x5c) = *(byte *)((int)this + 0x5c) | 4;
      F_006f15b0(*(undefined * PTR32 *)((int)this + 4),0,0);
    }
    return 0;
  }
  uVar1 = *param_3;
  F_00aa4270(param_1,uVar1,0,0);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = param_1;
  (*(uint *)(gen_frame + 0x14)) = param_2 & 0xffff;
  (*(undefined4 *)(gen_frame + 0xc)) = uVar1;
  (*(int *)(gen_frame + 0x10)) = (int)this + 0x28;
  (*(undefined2 *)(gen_frame + 0x18)) = 0;
  F_00746770((undefined4 *)(iVar2 + 0x6f0),*(undefined4 *)(iVar2 + 0x6f0),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  return 1;
}

/* ref: Client::Game::Event::GCShopEventHandler::vf53 */
uint F_006f5a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f5a60u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined1 GVar1;
  uint uVar2;
  
  if ((((*(uint *)&gen_args[1]) == 0xfffffffe) || ((*(uint *)&gen_args[1]) == 0xffffffff)) || (uVar2 = (*(uint *)&gen_args[1]), (*(uint *)&gen_args[1]) == 0)) {
    uVar2 = 0xffff;
    (*(uint *)&gen_args[1]) = 1;
    if (*((short *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x54))) != -1) {
      GVar1 = (*(undefined * PTR32 *)&gen_args[0])[0x5c];
      uVar2 = CONCAT31(0xff,GVar1);
      if (((byte)GVar1 & 4) == 0) {
        (*(undefined * PTR32 *)&gen_args[0])[0x5c] = (undefined1)((byte)GVar1 | 4);
        uVar2 = F_006f15b0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))),&(*(uint *)&gen_args[1]),1);
      }
    }
  }
  return uVar2;
}

/* ref: Client::Game::Event::GCShopEventHandler::vf83 */
uint F_006f5ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f5ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined1 GVar1;
  byte bVar2;
  byte bVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  
  bVar2 = F_006e6ba0(*(undefined * PTR32 *)(this + 4),this,0);
  bVar3 = F_006d1bb0(0);
  uVar4 = CONCAT31(extraout_var,bVar3);
  if (((bVar3 == 0) && (bVar2 == 0)) && (uVar4 = 0xffff, *(short *)(this + 0x54) != -1)) {
    GVar1 = this[0x5c];
    uVar4 = CONCAT31(0xff,GVar1);
    if (((byte)GVar1 & 4) == 0) {
      this[0x5c] = (undefined1)((byte)GVar1 | 4);
      uVar4 = F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
    }
  }
  return uVar4;
}

/* ref: FUN_006f5b00 */
byte F_006f5b00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f5b00u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)(*(int * PTR32 *)&gen_args[1]);
  *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10d))) = 0;
  if (((*(int * PTR32 *)&gen_args[1]) == (int *)0xffffffff) || ((*(int * PTR32 *)&gen_args[1]) == (int *)0xfffffffe)) {
    (*(int * PTR32 *)&gen_args[1]) = (int *)0x1;
  }
  else {
    (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x100)))));
    uVar2 = 0;
    if ((*(int * PTR32 *)&gen_args[1]) == *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x100)))) {
LAB_006f5b76: ;
      (*(int * PTR32 *)&gen_args[1]) = (int *)0x0;
    }
    else {
      do {
        if (uVar1 == uVar2) {
          *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10d))) = *((undefined1 *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0xc)));
          *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x120))) = 0;
          *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x124))) = 0xffffffff;
          REFG(undefined4, 0x1488768) = (*(undefined * PTR32 *)&gen_args[0]);
          goto LAB_006f5b76;
        }
        uVar2 = (uint)(byte)((char)uVar2 + 1);
        F_00732f60(&(*(int * PTR32 *)&gen_args[1]));
      } while ((*(int * PTR32 *)&gen_args[1]) != (int *)*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x100))));
      (*(int * PTR32 *)&gen_args[1]) = (int *)0x0;
    }
  }
  if ((*((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54))) != -1) && ((*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) & 4) == 0)) {
    *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) = *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) | 4;
    F_006f15b0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),&(*(int * PTR32 *)&gen_args[1]),1);
  }
  return 1;
}

/* ref: FUN_006f5bc0 */
uint F_006f5bc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6f5bc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  puVar1 = *(uint * PTR32 *)(*param_1 + 4);
  *(uint *)((int)this + 0x1d8) = puVar1[2];
  *(undefined2 *)((int)this + 0x1dc) = *(undefined2 *)((int)puVar1 + 0x1a);
  *(short *)((int)this + 0x1de) = (short)puVar1[6];
  F_0042e430((undefined *)((int)this + 0x1e0),(*puVar1 & 0xffffff) + (int)puVar1);
  F_0042e430((undefined *)((int)this + 0x264),(int)puVar1 + (puVar1[1] & 0xffffff) + 4);
  uVar3 = puVar1[3];
  *(uint *)((int)this + 0x250) = uVar3;
  *(uint *)((int)this + 0x254) = puVar1[4];
  *(uint *)((int)this + 600) = puVar1[5];
  if (uVar3 != 0) {
    F_006eda10(this,uVar3);
  }
  iVar2 = *(int *)((int)this + 0x254);
  if ((iVar2 != 0) && (iVar2 != *(int *)((int)this + 0x250))) {
    F_006eda10(this,iVar2);
  }
  iVar2 = *(int *)((int)this + 600);
  if (((iVar2 != 0) && (iVar2 != *(int *)((int)this + 0x250))) &&
     (iVar2 != *(int *)((int)this + 0x254))) {
    F_006eda10(this,iVar2);
  }
  puVar4 = *(undefined4 * PTR32 *)((int)this + 0x238);
  *(short *)((int)this + 0x25c) = (short)puVar1[7];
  *(undefined2 *)((int)this + 0x25e) = *(undefined2 *)((int)puVar1 + 0x1e);
  if (puVar4 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar4)(puVar4,1);
    *(undefined4 *)((int)this + 0x238) = 0;
  }
  uVar3 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8));
  *(uint *)((int)this + 0x234) = uVar3;
  puVar4 = (undefined4 *)F_00406b90(0x20,0,0);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(puVar4,1,0);
    puVar4[5] = 1;
    *puVar4 = (*(undefined * PTR32 (*)[2])REFP(0x10b9264));
    puVar4[6] = this;
    puVar4[7] = ((code *)REFP(0x6ee940));
  }
  *(undefined4 * PTR32 *)((int)this + 0x238) = puVar4;
  F_00cb4540(puVar4,0,(uint)*(ushort *)((int)this + 0x1dc));
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x234) + 0x48))))
                    (*(int * PTR32 *)((int)this + 0x234),*(undefined4 *)((int)this + 0x238));
  return uVar3;
}

/* ref: Client::Game::Event::WarpEventHandler::vf36 */
byte F_006f5d40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6f5d40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar2 = F_006f4180((undefined *)this,param_1,param_2,param_3);
  if ((char)uVar2 != '\0') {
    return 1;
  }
  bVar1 = F_006d8320((undefined *)this);
  F_006ea850(this,(uint)bVar1);
  uVar3 = 0;
  uVar2 = F_0042a990(this + 0x118);
  F_00754440(this + 0xfc,REFG(undefined * PTR32, 0x132373c),uVar2,uVar3);
  return 0;
}

/* ref: FUN_006f5da0 */
uint F_006f5da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f5da0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort * param_1 = (ushort *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  ushort uVar1;
  undefined2 * puVar2;
  uint uVar3;
  undefined2 * puVar4;
  undefined2 * puVar5;
  ushort * puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  (*(uint *)(gen_frame + 0x98)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = this;
  (*(ushort * PTR32 *)(gen_frame + 0x14)) = param_1;
  F_007523f0((undefined *)((int)this + 0x244),&(*(uint *)(gen_frame + 0xc)),*(undefined4 *)((int)this + 0x244),
               *(undefined4 *)((int)this + 0x248));
  uVar7 = 0;
  (*(ushort * PTR32 *)(gen_frame + 0x20)) = param_1 + 0xb2;
  (*(uint *)(gen_frame + 0x18)) = 0;
LAB_006f5df5: ;
  uVar3 = 0;
  puVar6 = (*(ushort * PTR32 *)(gen_frame + 0x20)) + -0x10;
  do {
    if (*(int *)puVar6 != 0) goto LAB_006f5e26;
    uVar3 = uVar3 + 1;
    puVar6 = puVar6 + 2;
  } while (uVar3 < 3);
  uVar3 = 0;
  puVar6 = (*(ushort * PTR32 *)(gen_frame + 0x20)) + -10;
  do {
    if (*(int *)puVar6 != 0) goto LAB_006f5e26;
    uVar3 = uVar3 + 1;
    puVar6 = puVar6 + 2;
  } while (uVar3 < 3);
  goto LAB_006f6057;
LAB_006f5e26: ;
  uVar1 = *(*(ushort * PTR32 *)(gen_frame + 0x20));
  if (uVar1 <= (ushort)uVar7) goto LAB_006f6057;
  (*(uint *)(gen_frame + 0xc)) = (uint)uVar1;
  puVar4 = (undefined2 *)F_00720190(((undefined1 *)(gen_frame + 0x24)),(uint)uVar1,(*(ushort * PTR32 *)(gen_frame + 0x20)) + -0x12);
  puVar5 = *(undefined2 * PTR32 *)((int)this + 0x248);
  if ((puVar4 < puVar5) && (puVar2 = *(undefined2 * PTR32 *)((int)this + 0x244), puVar2 <= puVar4)) {
    if (puVar5 == *(undefined2 * PTR32 *)((int)this + 0x24c)) {
      iVar8 = ((int)puVar5 - (int)puVar2) / 0x74;
      if (iVar8 == -1) {
LAB_006f60ff: ;
                    
        F_00c4579a("vector<T> too long");
      }
      uVar7 = ((int)*(undefined2 * PTR32 *)((int)this + 0x24c) - (int)puVar2) / 0x74;
      uVar3 = iVar8 + 1;
      if (uVar7 < uVar3) {
        if (-(uVar7 >> 1) - 1 < uVar7) {
          uVar7 = 0;
        }
        else {
          uVar7 = uVar7 + (uVar7 >> 1);
        }
        if (uVar7 < uVar3) {
          uVar7 = uVar3;
        }
        F_00752ae0((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0x244),uVar7);
      }
    }
    puVar4 = ((undefined2 *)GEN_TOP(((((int)puVar4 - (int)puVar2) / 0x74) * 0x74 + *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0x244))));
    puVar5 = *(undefined2 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0x248);
    this = (*(undefined * PTR32 *)(gen_frame + 0x1c));
    if (puVar5 != (undefined2 *)0x0) {
      *puVar5 = *puVar4;
      *(undefined1 *)(puVar5 + 1) = *(undefined1 *)(puVar4 + 1);
      *(undefined4 *)(puVar5 + 2) = *(undefined4 *)(puVar4 + 2);
      puVar5[4] = puVar4[4];
      *(undefined4 *)(puVar5 + 5) = *(undefined4 *)(puVar4 + 5);
      puVar5[7] = puVar4[7];
      *(undefined1 *)(puVar5 + 8) = *(undefined1 *)(puVar4 + 8);
      *(undefined2 *)((int)puVar5 + 0x11) = *(undefined2 *)((int)puVar4 + 0x11);
      *(undefined1 *)((int)puVar5 + 0x13) = *(undefined1 *)((int)puVar4 + 0x13);
      *(undefined4 *)(puVar5 + 10) = *(undefined4 *)(puVar4 + 10);
      *(undefined4 *)(puVar5 + 0xc) = *(undefined4 *)(puVar4 + 0xc);
      *(undefined1 *)(puVar5 + 0xe) = *(undefined1 *)(puVar4 + 0xe);
      *(undefined1 *)((int)puVar5 + 0x1d) = *(undefined1 *)((int)puVar4 + 0x1d);
LAB_006f6034: ;
      F_0042cbc0(puVar5 + 0x10,puVar4 + 0x10);
    }
  }
  else {
    if (puVar5 == *(undefined2 * PTR32 *)((int)this + 0x24c)) {
      iVar8 = ((int)puVar5 - *(int *)((int)this + 0x244)) / 0x74;
      if (iVar8 == -1) goto LAB_006f60ff;
      uVar7 = ((int)*(undefined2 * PTR32 *)((int)this + 0x24c) - *(int *)((int)this + 0x244)) / 0x74;
      uVar3 = iVar8 + 1;
      if (uVar7 < uVar3) {
        if (-(uVar7 >> 1) - 1 < uVar7) {
          uVar7 = 0;
        }
        else {
          uVar7 = uVar7 + (uVar7 >> 1);
        }
        if (uVar7 < uVar3) {
          uVar7 = uVar3;
        }
        F_00752ae0((undefined *)((int)this + 0x244),uVar7);
      }
    }
    puVar5 = *(undefined2 * PTR32 *)((int)this + 0x248);
    if (puVar5 != (undefined2 *)0x0) {
      *puVar5 = *puVar4;
      *(undefined1 *)(puVar5 + 1) = *(undefined1 *)(puVar4 + 1);
      *(undefined4 *)(puVar5 + 2) = *(undefined4 *)(puVar4 + 2);
      puVar5[4] = puVar4[4];
      *(undefined4 *)(puVar5 + 5) = *(undefined4 *)(puVar4 + 5);
      puVar5[7] = puVar4[7];
      *(undefined1 *)(puVar5 + 8) = *(undefined1 *)(puVar4 + 8);
      *(undefined2 *)((int)puVar5 + 0x11) = *(undefined2 *)((int)puVar4 + 0x11);
      *(undefined1 *)((int)puVar5 + 0x13) = *(undefined1 *)((int)puVar4 + 0x13);
      *(undefined4 *)(puVar5 + 10) = *(undefined4 *)(puVar4 + 10);
      *(undefined4 *)(puVar5 + 0xc) = *(undefined4 *)(puVar4 + 0xc);
      *(undefined1 *)(puVar5 + 0xe) = *(undefined1 *)(puVar4 + 0xe);
      *(undefined1 *)((int)puVar5 + 0x1d) = *(undefined1 *)((int)puVar4 + 0x1d);
      goto LAB_006f6034;
    }
  }
  *(int *)((int)this + 0x248) = *(int *)((int)this + 0x248) + 0x74;
  F_0042c880(((undefined1 *)(gen_frame + 0x44)));
  uVar7 = (*(uint *)(gen_frame + 0xc));
  this = (*(undefined * PTR32 *)(gen_frame + 0x1c));
LAB_006f6057: ;
  uVar3 = (*(uint *)(gen_frame + 0x18)) + 1;
  (*(ushort * PTR32 *)(gen_frame + 0x20)) = (*(ushort * PTR32 *)(gen_frame + 0x20)) + 0x16;
  (*(uint *)(gen_frame + 0x18)) = uVar3;
  if (0x45 < uVar3) goto code_r0x006f6073;
  goto LAB_006f5df5;
code_r0x006f6073: ;
  F_007448d0((undefined *)((int)this + 0x254));
  uVar7 = 0;
  puVar6 = (*(ushort * PTR32 *)(gen_frame + 0x14)) + 0x6a7;
  do {
    uVar3 = 0;
    if (*(int *)(puVar6 + -3) == 0) break;
    (*(undefined2 *)((char *)&(*(ushort * PTR32 *)(gen_frame + 0x20)) + 2)) = *puVar6;
    (*(int *)(gen_frame + 0x10)) = *(int *)(puVar6 + -3);
    (*(undefined2 *)((char *)&(*(ushort * PTR32 *)(gen_frame + 0x20)) + 0)) = puVar6[-1];
    (*(ushort * PTR32 *)(gen_frame + 0x20)) = ((ushort *)GEN_TOP(CONCAT22(*puVar6,puVar6[-1])));
    (*(ushort * PTR32 *)(gen_frame + 0x14)) = (*(ushort * PTR32 *)(gen_frame + 0x20));
    uVar3 = F_00750850((undefined *)((int)this + 0x254),((undefined1 *)(gen_frame + 0x8)),&(*(int *)(gen_frame + 0x10)));
    uVar7 = uVar7 + 1;
    puVar6 = puVar6 + 4;
  } while (uVar7 < 0x3c);
  if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 8) == 0x1a0001) {
    uVar3 = *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0x244);
    iVar8 = 0;
    if (uVar3 != *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0x248)) {
      do {
        iVar9 = *(int *)(uVar3 + 0x14);
        if (iVar9 == 0) {
          *(int *)(uVar3 + 0x14) = iVar8;
          iVar9 = iVar8;
        }
        uVar3 = uVar3 + 0x74;
        iVar8 = iVar9;
      } while (uVar3 != *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0x248));
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
  return uVar3;
}

/* ref: FUN_006f6130 */
uint F_006f6130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6f6130u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  char * pcVar1;
  int iVar2;
  char cVar3;
  char * pcVar4;
  undefined4 * puVar5;
  uint uVar6;
  uint * puVar7;
  uint * puVar8;
  ulonglong uVar9;
  
  (*(uint *)(gen_frame + 0xd8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xdc);
  puVar7 = *(uint * PTR32 *)(*param_1 + 4);
  (*(uint * PTR32 *)(gen_frame + 0x1c)) = puVar7;
  F_0042e430((undefined *)((int)this + 0x1d8),(int)puVar7 + (puVar7[0x3ca] & 0xffffff) + 0xf28);
  F_0042ccf0((undefined *)((int)this + 0x118),(undefined *)((int)this + 0x1d8));
  (*(uint * PTR32 *)(gen_frame + 0x24)) = puVar7;
  (*(int *)(gen_frame + 0x28)) = 0x28;
  puVar8 = puVar7;
  do {
    pcVar4 = ((char *)GEN_TOP(((*puVar7 & 0xffffff) + (int)puVar7)));
    (*(char * PTR32 *)(gen_frame + 0x20)) = pcVar4;
    pcVar1 = pcVar4 + 1;
    do {
      cVar3 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar3 != '\0');
    if (pcVar4 != pcVar1) {
      (*(uint *)(gen_frame + 0x14)) = puVar7[1];
      (*(uint * PTR32 *)(gen_frame + 0x24)) = puVar7;
      puVar5 = (undefined4 *)F_004296a0(0x68,0,800);
      *puVar5 = *(undefined4 *)((int)this + 0x238);
      puVar5[1] = *(undefined4 *)((int)this + 0x238);
      puVar5[2] = *(undefined4 *)((int)this + 0x238);
      *(undefined2 *)(puVar5 + 0x19) = 0;
      F_0042cc20(((undefined1 *)(gen_frame + 0x80)),(*(char * PTR32 *)(gen_frame + 0x20)),REFG(undefined4, 0x108cc50));
      (*(uint *)(gen_frame + 0xd4)) = (*(uint *)(gen_frame + 0x14));
      if (puVar5 + 3 != (undefined4 *)0x0) {
        F_0042cbc0(puVar5 + 3,((undefined1 *)(gen_frame + 0x80)));
        puVar5[0x18] = (*(uint *)(gen_frame + 0xd4));
      }
      F_0042c880(((undefined1 *)(gen_frame + 0x80)));
      F_007502b0((undefined *)((int)this + 0x234),((undefined1 *)(gen_frame + 0x8)),puVar5,0);
      puVar7 = (*(uint * PTR32 *)(gen_frame + 0x24));
      puVar8 = (*(uint * PTR32 *)(gen_frame + 0x1c));
    }
    puVar7 = puVar7 + 2;
    iVar2 = (*(int *)(gen_frame + 0x28)) + -1;
    (*(int *)(gen_frame + 0x28)) = iVar2;
    (*(uint * PTR32 *)(gen_frame + 0x24)) = puVar7;
  } while (iVar2 != 0);
  F_006f5da0(this,puVar8);
  uVar6 = F_0042a990((int)this + 0x1d8);
  F_0042ce40(((undefined1 *)(gen_frame + 0x2c)),"%s/%s",REFG(undefined * PTR32, 0x1323744),uVar6);
  uVar6 = F_0042a990(((undefined1 *)(gen_frame + 0x2c)));
  F_0042e430((undefined *)((int)this + 0x7c),uVar6);
  F_006e8f60(this,0,0xffffffff);
  puVar5 = *(undefined4 * PTR32 *)((int)this + 0x230);
  if (puVar5 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar5)(puVar5,1);
    *(undefined4 *)((int)this + 0x230) = 0;
  }
  uVar9 = F_0042c880(((undefined1 *)(gen_frame + 0x2c)));
  F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
  return (uint)uVar9;
}

/* ref: Client::Game::Event::StoryEventHandler::vf36 */
byte F_006f62f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6f62f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar2 = F_006f4180((undefined *)this,param_1,param_2,param_3);
  if ((char)uVar2 != '\0') {
    return 1;
  }
  bVar1 = F_006d8320((undefined *)this);
  F_006eab00(this,(uint)bVar1);
  uVar3 = 0;
  uVar2 = F_0042a990(this + 0x1d8);
  F_00754440(this + 0xfc,REFG(undefined * PTR32, 0x1323744),uVar2,uVar3);
  return 0;
}

/* ref: FUN_006f6350 */
uint F_006f6350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f6350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  F_006e44c0(this,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[144])REFP(0x10ba704));
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined1 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  uVar1 = F_004296a0(0x70,0,800);
  *(uint *)((int)this + 0x110) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x110) + 4))) = *(int *)((int)this + 0x110);
  *((int *)GEN_TOP((*(int *)((int)this + 0x110) + 8))) = *(int *)((int)this + 0x110);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x110) + 0x6c))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x110) + 0x6d))) = 1;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  F_0042cc20((undefined *)((int)this + 0x144),&REFG(undefined, 0x10b3a6f),REFG(undefined4, 0x108cc50));
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined1 *)((int)this + 0x1a0) = 0;
  return (uint)this;
}

/* ref: FUN_006f6430 */
uint F_006f6430(unsigned int gen_a0)
{
  GEN_ENTER(0x6f6430u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  uint uVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[144])REFP(0x10ba704));
  if (REFG(undefined4, 0x148876c) == this) {
    REFG(undefined4, 0x148876c) = (undefined *)0x0;
  }
  if (*(int *)((int)this + 0x13c) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x140);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,*(int *)((int)this + 0x13c));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x13c);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x13c) = 0;
    }
  }
  F_0042c880((undefined *)((int)this + 0x144));
  iVar3 = *(int *)((int)this + 300);
  if (iVar3 != 0) {
    F_00429760(iVar3,(*(int *)((int)this + 0x134) - iVar3 >> 2) * 4,800);
  }
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  iVar3 = *(int *)((int)this + 0x11c);
  if (iVar3 != 0) {
    F_00429760(iVar3,(*(int *)((int)this + 0x124) - iVar3 >> 2) * 4,800);
  }
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  F_0074f310((undefined *)((int)this + 0x10c),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x110),
               *(undefined4 * PTR32 *)((int)this + 0x110));
  F_00429760(*(undefined4 *)((int)this + 0x110),0x70,800);
  F_007552d0((undefined *)((int)this + 0xf8));
  uVar4 = F_006df660(this);
  return uVar4;
}

/* ref: Client::Game::Event::SpecialShopEventHandler::vf83 */
uint F_006f6550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f6550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined1 SVar1;
  int * piVar2;
  uint uVar3;
  undefined4 uVar4;
  
  this[0x1a0] = (undefined1)0x0;
  F_006e6ba0(*(undefined * PTR32 *)(this + 4),this,0);
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar4 = 99;
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
  piVar2 = (int *)F_00763050(uVar3,uVar4);
  uVar3 = 0;
  if (piVar2 != (int *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2);
    if ((char)uVar3 != '\0') {
      uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    }
  }
  if (*(int *)(this + 0x198) == 2) {
    uVar3 = F_00a48ae0(&REFG(undefined, 0x14a4230));
  }
  if (*(short *)(this + 0x54) != -1) {
    SVar1 = this[0x5c];
    uVar3 = CONCAT31((int3)(uVar3 >> 8),SVar1);
    if (((byte)SVar1 & 4) == 0) {
      this[0x5c] = (undefined1)((byte)SVar1 | 4);
      uVar3 = F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
    }
  }
  return uVar3;
}

/* ref: FUN_006f65e0 */
uint F_006f65e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f65e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  byte * pbVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  pbVar2 = ((byte *)GEN_TOP((param_1 * 0x1b0 + *(int *)((int)this + 0xf8))));
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(uint *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(uint *)(gen_frame + 0x0)) = (uint)*pbVar2;
  (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(pbVar2 + 0xec);
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(pbVar2 + 0xf0);
  (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(pbVar2 + 0xdc);
  (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(pbVar2 + 0xe0);
  uVar3 = *(uint *)(pbVar2 + 0xd8);
  (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(pbVar2 + 0xe4);
  (*(uint *)(gen_frame + 0x18)) = uVar3;
  *(undefined1 *)((int)this + 0x1a0) = 1;
  if (*(short *)((int)this + 0x54) != -1) {
    bVar1 = *(byte *)((int)this + 0x5c);
    uVar3 = CONCAT31((int3)(uVar3 >> 8),bVar1);
    if ((bVar1 & 4) == 0) {
      *(byte *)((int)this + 0x5c) = bVar1 | 4;
      uVar3 = F_006f15b0(*(undefined * PTR32 *)((int)this + 4),&(*(uint *)(gen_frame + 0x0)),7);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar3;
}

/* ref: Client::Game::Event::SpecialShopEventHandler::vf59 */
unsigned int F_006f66a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6f66a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  if (param_1 == 0) {
    F_006f65e0(this,*(undefined4 *)(this + 0x19c));
  }
  return 0;
}

/* ref: Client::Game::Event::LeveDirector::vf36 */
byte F_006f66c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6f66c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  undefined * this_00;
  undefined * puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  
  uVar3 = F_006f4180((undefined *)(*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(int * PTR32 *)&gen_args[2]),(*(int * PTR32 *)&gen_args[3]));
  if ((char)uVar3 == '\0') {
    bVar2 = F_006d8320((undefined *)(*(undefined * PTR32 *)&gen_args[0]));
    this_00 = *((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xf8)));
    if (bVar2 != 0) {
      (*(int * PTR32 *)&gen_args[2]) = (int *)F_00b9a750(*(undefined4 *)((int)this_00 + 8));
      uVar3 = F_0042a990((*(undefined * PTR32 *)&gen_args[0]) + 0x118);
      puVar1 = REFG(undefined * PTR32, 0x1323748);
      (*(int * PTR32 *)&gen_args[3]) = (int *)uVar3;
      F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar3);
      F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
      uVar4 = F_00b9a940(*(undefined4 *)((int)this_00 + 8),0xffffffff);
      if (uVar4 != 0) {
        F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
        return 1;
      }
      F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
      F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar3);
      F_00b9b150(*(undefined4 *)((int)this_00 + 8),0,0);
      iVar5 = (int)(*(int * PTR32 *)&gen_args[2]) + 2;
      F_00a01c40(this_00,iVar5,"className",(*(int * PTR32 *)&gen_args[3]));
      F_00a01c80(this_00,iVar5,"referenceCount",0);
      (*(int * PTR32 *)&gen_args[2]) = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))));
      if ((*(int * PTR32 *)&gen_args[2]) != *((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))) {
        do {
          uVar6 = *((undefined4 *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0xc)));
          uVar3 = F_0042a990((int)(*(int * PTR32 *)&gen_args[2]) + 0x10);
          F_00a01c80(this_00,iVar5,uVar3,uVar6);
          F_00732c70(&(*(int * PTR32 *)&gen_args[2]));
        } while ((*(int * PTR32 *)&gen_args[2]) != (int *)*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c4))));
      }
      F_00b9bc00(*(undefined4 *)((int)this_00 + 8),(*(int * PTR32 *)&gen_args[3]));
      F_00b9a910(*(undefined4 *)((int)this_00 + 8),iVar5);
      if (puVar1 == (undefined *)0x0) {
        F_00b9b290(*(undefined4 *)((int)this_00 + 8),0xfffffffe,"__index");
        F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
        F_00b9b2f0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
        return 1;
      }
      F_00b9b290(*(undefined4 *)((int)this_00 + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
      F_00b9ae60(*(undefined4 *)((int)this_00 + 8),puVar1);
      F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
      F_00b9b290(*(undefined4 *)((int)this_00 + 8),iVar5,"__index");
      F_00b9a910(*(undefined4 *)((int)this_00 + 8),iVar5);
      F_00b9b3d0(*(undefined4 *)((int)this_00 + 8),iVar5);
      F_00b9b2f0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
      F_00a01ad0(this_00,puVar1);
      return 1;
    }
    uVar3 = F_00b9a750(*(undefined4 *)((int)this_00 + 8));
    F_00b9ae60(*(undefined4 *)((int)this_00 + 8),REFG(undefined * PTR32, 0x1323748));
    F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
    uVar4 = F_00b9a940(*(undefined4 *)((int)this_00 + 8),0xffffffff);
    if (uVar4 != 0) {
      (*(int * PTR32 *)&gen_args[3]) = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))));
      if ((*(int * PTR32 *)&gen_args[3]) != *((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))) {
        do {
          uVar6 = *((undefined4 *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[3]) + 0xc)));
          uVar4 = F_0042a990((int)(*(int * PTR32 *)&gen_args[3]) + 0x10);
          F_00a01c80(this_00,uVar3 + 1,uVar4,uVar6);
          F_00732c70(&(*(int * PTR32 *)&gen_args[3]));
        } while ((*(int * PTR32 *)&gen_args[3]) != (int *)*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c4))));
      }
    }
    F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
  }
  return 1;
}

/* ref: FUN_006f6940 */
uint F_006f6940(unsigned int gen_a0)
{
  GEN_ENTER(0x6f6940u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  undefined * puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0xf8);
  uVar2 = F_00b9a750(*(undefined4 *)((int)this_00 + 8));
  uVar3 = F_0042a990((int)this + 0x118);
  puVar1 = REFG(undefined * PTR32, 0x1323750);
  F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar3);
  F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
  uVar4 = F_00b9a940(*(undefined4 *)((int)this_00 + 8),0xffffffff);
  if (uVar4 != 0) {
    uVar2 = F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
    return uVar2;
  }
  F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
  F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar3);
  F_00b9b150(*(undefined4 *)((int)this_00 + 8),0,0);
  iVar5 = uVar2 + 2;
  F_00a01c40(this_00,iVar5,"className",uVar3);
  F_00a01c80(this_00,iVar5,"referenceCount",0);
  F_00a01cc0(this_00,iVar5,"GetVariation",((code *)REFP(0x6d2c00)));
  F_00a01cc0(this_00,iVar5,"GetBattleLeveEntryParameter",((code *)REFP(0x6d2c50)));
  F_00a01cc0(this_00,iVar5,"GetDropEventItemId",((code *)REFP(0x6d2ce0)));
  F_00a01cc0(this_00,iVar5,"SetListenEmote",((code *)REFP(0x6d2d60)));
  F_00a01cc0(this_00,iVar5,"SetUsableEventItem",((code *)REFP(0x6ef2a0)));
  F_00a01cc0(this_00,iVar5,"ChangeUsableEventItemToEOBJ",((code *)REFP(0x6d2dc0)));
  if (puVar1 == (undefined *)0x0) {
    F_00b9bc00(*(undefined4 *)((int)this_00 + 8),uVar3);
    F_00b9a910(*(undefined4 *)((int)this_00 + 8),iVar5);
    F_00b9b290(*(undefined4 *)((int)this_00 + 8),0xfffffffe,"__index");
    F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
    uVar2 = F_00b9b2f0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
    return uVar2;
  }
  F_00b9bc00(*(undefined4 *)((int)this_00 + 8),uVar3);
  F_00b9a910(*(undefined4 *)((int)this_00 + 8),iVar5);
  F_00b9b290(*(undefined4 *)((int)this_00 + 8),0xfffffffe,"__index");
  F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
  F_00b9ae60(*(undefined4 *)((int)this_00 + 8),puVar1);
  F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
  F_00b9b290(*(undefined4 *)((int)this_00 + 8),iVar5,"__index");
  F_00b9a910(*(undefined4 *)((int)this_00 + 8),iVar5);
  F_00b9b3d0(*(undefined4 *)((int)this_00 + 8),iVar5);
  F_00b9b2f0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
  uVar2 = F_00a01ad0(this_00,puVar1);
  return uVar2;
}

/* ref: FUN_006f6b40 */
uint F_006f6b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f6b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  undefined4 * puVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  int iVar7;
  ulonglong uVar8;
  
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = this;
  if (*(int *)((int)this + 0x34c) != 0) {
    piVar6 = *(int * PTR32 *)((int)this + 0x348);
    if (piVar6 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar6 + 0x4c))(piVar6,*(int *)((int)this + 0x34c));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x34c);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x34c) = 0;
    }
  }
  uVar1 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8));
  *(uint *)((int)this + 0x348) = uVar1;
  uVar5 = 0;
  if (uVar1 != 0) {
    (*(int * PTR32 *)(gen_frame + 0xc)) = (int *)0x0;
    (*(int * PTR32 *)(gen_frame + 0x10)) = (int *)0x0;
    (*(int * PTR32 *)(gen_frame + 0x14)) = (int *)0x0;
    F_0074cbd0(&(*(int * PTR32 *)(gen_frame + 0xc)),4);
    (*(uint *)(gen_frame + 0x1c)) = 0;
    piVar6 = (*(int * PTR32 *)(gen_frame + 0x10));
    do {
      uVar5 = (*(uint *)(gen_frame + 0x1c));
      iVar7 = *(int *)(param_1 + (*(uint *)(gen_frame + 0x1c)) * 4);
      if (((iVar7 != 0) && (puVar2 = (undefined4 *)F_00ab2d80(iVar7), puVar2 != (undefined4 *)0x0)
          ) && (piVar3 = (int *)F_00ab2db0(*puVar2), piVar3 != (int *)0x0)) {
        (*(int *)(gen_frame + 0x20)) = 8;
        do {
          piVar3 = piVar3 + 1;
          iVar7 = *piVar3;
          piVar4 = (*(int * PTR32 *)(gen_frame + 0xc));
          if (iVar7 != 0) {
            for (; piVar4 != piVar6; piVar4 = piVar4 + 1) {
              if (*piVar4 == iVar7) {
                if (piVar4 != piVar6) goto LAB_006f6c76;
                break;
              }
            }
            (*(int *)(gen_frame + 0x24)) = iVar7;
            if ((&(*(int *)(gen_frame + 0x24)) < piVar6) && ((*(int * PTR32 *)(gen_frame + 0xc)) <= &(*(int *)(gen_frame + 0x24)))) {
              iVar7 = (int)&(*(int *)(gen_frame + 0x24)) - (int)(*(int * PTR32 *)(gen_frame + 0xc));
              if (piVar6 == (*(int * PTR32 *)(gen_frame + 0x14))) {
                F_0074d4f0(&(*(int * PTR32 *)(gen_frame + 0xc)),1);
                piVar6 = (*(int * PTR32 *)(gen_frame + 0x10));
              }
              if (piVar6 != (int *)0x0) {
                *piVar6 = (*(int * PTR32 *)(gen_frame + 0xc))[iVar7 >> 2];
              }
            }
            else {
              if (piVar6 == (*(int * PTR32 *)(gen_frame + 0x14))) {
                F_0074d4f0(&(*(int * PTR32 *)(gen_frame + 0xc)),1);
                piVar6 = (*(int * PTR32 *)(gen_frame + 0x10));
              }
              if (piVar6 != (int *)0x0) {
                *piVar6 = iVar7;
              }
            }
            piVar6 = piVar6 + 1;
            (*(int * PTR32 *)(gen_frame + 0x10)) = piVar6;
          }
LAB_006f6c76: ;
          iVar7 = (*(int *)(gen_frame + 0x20)) + -1;
          (*(int *)(gen_frame + 0x20)) = iVar7;
          uVar5 = (*(uint *)(gen_frame + 0x1c));
        } while (iVar7 != 0);
      }
      (*(uint *)(gen_frame + 0x1c)) = uVar5 + 1;
    } while (uVar5 + 1 < 10);
    iVar7 = (int)piVar6 - (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0xc))) >> 2;
    puVar2 = (undefined4 *)F_00406b90(0x20,0,0);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      F_00cb4700(puVar2,iVar7,0);
      puVar2[5] = iVar7;
      *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x10b92b0));
      puVar2[6] = (*(undefined * PTR32 *)(gen_frame + 0x28));
      puVar2[7] = ((code *)REFP(0x6ef320));
    }
    *(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x34c) = puVar2;
    iVar7 = 0;
    for (piVar3 = (*(int * PTR32 *)(gen_frame + 0xc)); piVar3 != piVar6; piVar3 = piVar3 + 1) {
      F_00cb4540(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x34c),iVar7,*piVar3);
      iVar7 = iVar7 + 1;
    }
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x348) + 0x48))))
                      (*(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x348),*(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x34c));
    if ((*(int * PTR32 *)(gen_frame + 0xc)) != (int *)0x0) {
      uVar8 = F_00429760((*(int * PTR32 *)(gen_frame + 0xc)),((int)(*(int * PTR32 *)(gen_frame + 0x14)) - (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0xc))) >> 2) * 4,800);
      uVar5 = (uint)uVar8;
    }
  }
  return uVar5;
}

/* ref: FUN_006f6d40 */
uint F_006f6d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f6d40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)this + 8;
  uVar2 = F_006f0080(*(undefined4 *)((int)this + 4),iVar1);
  *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + uVar2;
  uVar2 = F_006eedf0(*(undefined4 *)((int)this + 4),iVar1);
  *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + uVar2;
  uVar2 = F_006ef0b0(*(undefined4 *)((int)this + 4),iVar1);
  *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + uVar2;
  uVar2 = F_006ef540(*(undefined4 *)((int)this + 4),iVar1);
  *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + uVar2;
  uVar2 = F_006efa40(*(undefined4 *)((int)this + 4),iVar1);
  *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + uVar2;
  uVar2 = F_00b912c0(*(undefined4 *)((int)this + 4),iVar1);
  *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + uVar2;
  uVar2 = F_006f0710(*(undefined4 *)((int)this + 4),iVar1);
  *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + uVar2;
  uVar2 = F_006ef6e0(*(undefined4 *)((int)this + 4),iVar1);
  *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + uVar2;
  return uVar2;
}

/* ref: FUN_006f6dc0 */
byte F_006f6dc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6f6dc0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int * piVar2;
  uint uVar3;
  
  uVar1 = (*(uint *)&gen_args[1]);
  if (((REFG(int, 0x1379694) != 0) && (REFG(int, 0x1379c70) == 2)) &&
     ((REFG(int, 0x14bcc80) == 0 || ((REFG(int, 0x14bcc80) == 1 || (REFG(int, 0x14bcc80) == 6)))))) {
    piVar2 = (int *)F_006d9ad0((*(undefined * PTR32 *)&gen_args[0]),(*(uint *)&gen_args[1]),(*(int * PTR32 *)&gen_args[2]));
    if (piVar2 != (int *)0x0) {
      F_00a51200(0x4c,1,0,0,0);
      ((code *)*(gen_code32 *)(*piVar2 + 0x234))(piVar2,0);
      return 1;
    }
    (*(uint *)&gen_args[1]) = uVar1 >> 0x10;
    F_00749050(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))),&(*(int * PTR32 *)(gen_frame + 0x8)),&(*(uint *)&gen_args[1]));
    if ((*(int * PTR32 *)(gen_frame + 0x8)) != *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40)))) {
      (*(int * PTR32 *)&gen_args[2]) = ((int *)GEN_TOP((*(code *)(*(int * PTR32 *)(gen_frame + 0x8))[4])(uVar1,(*(int * PTR32 *)&gen_args[2]))));
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)0x0) {
        F_00756a20(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))),&(*(int * PTR32 *)&gen_args[2]));
        piVar2 = (*(int * PTR32 *)&gen_args[2]);
        ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 0x234))))((*(int * PTR32 *)&gen_args[2]),0);
        uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x24c))(piVar2);
        if (((char)uVar3 != '\0') && (REFG(int, 0x1379694) != 0)) {
          F_00a5f530(REFG(int, 0x1379694),uVar1);
        }
        ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
        F_00a35580(uVar1);
        return 1;
      }
    }
    F_00a51200(0x4c,2,0,0,0);
    return 0;
  }
  (*(int * PTR32 *)(gen_frame + 0x8)) = (*(int * PTR32 *)&gen_args[2]);
  (*(uint *)(gen_frame + 0x4)) = (*(uint *)&gen_args[1]);
  F_007510b0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))),&(*(uint *)(gen_frame + 0x4)));
  return 0;
}

/* ref: Client::Game::Event::DirectorModule::vf4 */
uint F_006f6f00(unsigned int gen_a0)
{
  GEN_ENTER(0x6f6f00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int * piVar3;
  
  uVar2 = F_006f6d40(this,1);
  piVar3 = *(int * PTR32 *)(this + 0x2c);
  if (piVar3 != *(int * PTR32 *)(this + 0x30)) {
    do {
      piVar1 = (int *)*piVar3;
      if (piVar1 != (int *)0x0) {
        uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x84))(piVar1);
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != *(int * PTR32 *)(this + 0x30));
  }
  return uVar2;
}

/* ref: FUN_006f6f30 */
unsigned int F_006f6f30(unsigned int gen_a0)
{
  GEN_ENTER(0x6f6f30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  code * pcVar4;
  int iVar5;
  int * piVar6;
  
  piVar6 = *(int * PTR32 *)((int)this + 0x2c);
  if (piVar6 != *(int * PTR32 *)((int)this + 0x30)) {
    do {
      piVar1 = (int *)*piVar6;
      if (piVar1 != (int *)0x0) {
        uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
        iVar5 = *(int *)*piVar6;
        if ((char)uVar2 == '\0') {
          pcVar4 = *(gen_code32 *)(iVar5 + 0x260);
        }
        else {
          pcVar4 = *(gen_code32 *)(iVar5 + 0x264);
        }
        (*pcVar4)((int *)*piVar6);
      }
      piVar6 = piVar6 + 1;
    } while (piVar6 != *(int * PTR32 *)((int)this + 0x30));
  }
  if ((((*(int *)((int)this + 0x5c) != 0) && (REFG(int, 0x1379694) != 0)) && (REFG(int, 0x1379c70) == 2)) &&
     (((REFG(int, 0x14bcc80) == 0 || (REFG(int, 0x14bcc80) == 1)) || (REFG(int, 0x14bcc80) == 6)))) {
    do {
      if (*(int * PTR32 *)((int)this + 0x4c) == (int *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = **(int * PTR32 *)((int)this + 0x4c);
      }
      uVar2 = *(uint *)((int)this + 0x58) >> 1;
      uVar3 = *(uint *)((int)this + 0x58) & 1;
      if (*(uint *)(iVar5 + 8) <= uVar2) {
        uVar2 = uVar2 - *(uint *)(iVar5 + 8);
      }
      iVar5 = *((int *)GEN_TOP((*(int *)(iVar5 + 4) + uVar2 * 4)));
      F_006f6dc0(this,*(undefined4 *)(iVar5 + uVar3 * 8),*(undefined4 *)(iVar5 + uVar3 * 8 + 4));
      if (*(int *)((int)this + 0x5c) != 0) {
        *(int *)((int)this + 0x58) = *(int *)((int)this + 0x58) + 1;
        if ((uint)(*(int *)((int)this + 0x54) * 2) <= *(uint *)((int)this + 0x58)) {
          *(undefined4 *)((int)this + 0x58) = 0;
        }
        iVar5 = *(int *)((int)this + 0x5c) + -1;
        *(int *)((int)this + 0x5c) = iVar5;
        if (iVar5 == 0) {
          *(undefined4 *)((int)this + 0x58) = 0;
        }
      }
    } while (*(int *)((int)this + 0x5c) != 0);
  }
  return 0;
}

/* ref: Client::Game::Event::OpeningEventHandler::vf36 */
byte F_006f7010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6f7010u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar2 = F_006f4180((undefined *)this,param_1,param_2,param_3);
  if ((char)uVar2 != '\0') {
    return 1;
  }
  bVar1 = F_006d8320((undefined *)this);
  F_006eb820(this,(uint)bVar1);
  uVar3 = 0;
  uVar2 = F_0042a990(this + 0x1dc);
  F_00754440(this + 0xfc,REFG(undefined * PTR32, 0x1323774),uVar2,uVar3);
  return 0;
}

/* ref: Client::Game::Event::ExitRangeEventHandler::vf36 */
byte F_006f7070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6f7070u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar1 = F_006f4180((undefined *)(*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(int * PTR32 *)&gen_args[3]));
  if ((char)uVar1 != '\0') {
    return 1;
  }
  this_00 = *((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xf8)));
  uVar1 = F_00b9a750(*(undefined4 *)((int)this_00 + 8));
  uVar2 = F_0042a990((*(undefined * PTR32 *)&gen_args[0]) + 0x118);
  F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar2);
  F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
  uVar2 = F_00b9a940(*(undefined4 *)((int)this_00 + 8),0xffffffff);
  if (uVar2 != 0) {
    (*(int * PTR32 *)&gen_args[3]) = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))));
    if ((*(int * PTR32 *)&gen_args[3]) != *((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))) {
      do {
        uVar3 = *((undefined4 *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[3]) + 0xc)));
        uVar2 = F_0042a990((int)(*(int * PTR32 *)&gen_args[3]) + 0x10);
        F_00a01c80(this_00,uVar1 + 1,uVar2,uVar3);
        F_00732c70(&(*(int * PTR32 *)&gen_args[3]));
      } while ((*(int * PTR32 *)&gen_args[3]) != (int *)*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c4))));
    }
  }
  F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
  F_00736520((*(undefined * PTR32 *)&gen_args[0]),(*(undefined * PTR32 *)&gen_args[0]));
  (*(undefined * PTR32 *)&gen_args[0])[0x1c] = (undefined1)((byte)(*(undefined * PTR32 *)&gen_args[0])[0x1c] & 0xfd);
  if (((byte)(*(undefined * PTR32 *)&gen_args[0])[0x1c] & 1) == 0) {
    (*(undefined * PTR32 *)&gen_args[0])[0x1c] = (undefined1)((byte)(*(undefined * PTR32 *)&gen_args[0])[0x1c] | 1);
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x23c))))((*(undefined * PTR32 *)&gen_args[0]));
  }
  return 0;
}

/* ref: Client::Game::Event::ChocoboTaxiStandEventHandler::vf36 */
byte F_006f7160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6f7160u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar1 = F_006f4180((undefined *)(*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(int * PTR32 *)&gen_args[3]));
  if ((char)uVar1 != '\0') {
    return 1;
  }
  this_00 = *((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xf8)));
  uVar1 = F_00b9a750(*(undefined4 *)((int)this_00 + 8));
  uVar2 = F_0042a990((*(undefined * PTR32 *)&gen_args[0]) + 0x118);
  F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar2);
  F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
  uVar2 = F_00b9a940(*(undefined4 *)((int)this_00 + 8),0xffffffff);
  if (uVar2 != 0) {
    (*(int * PTR32 *)&gen_args[3]) = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))));
    if ((*(int * PTR32 *)&gen_args[3]) != *((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))) {
      do {
        uVar3 = *((undefined4 *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[3]) + 0xc)));
        uVar2 = F_0042a990((int)(*(int * PTR32 *)&gen_args[3]) + 0x10);
        F_00a01c80(this_00,uVar1 + 1,uVar2,uVar3);
        F_00732c70(&(*(int * PTR32 *)&gen_args[3]));
      } while ((*(int * PTR32 *)&gen_args[3]) != (int *)*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c4))));
    }
  }
  F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
  F_007365d0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined * PTR32 *)&gen_args[0]));
  (*(undefined * PTR32 *)&gen_args[0])[0x1c] = (undefined1)((byte)(*(undefined * PTR32 *)&gen_args[0])[0x1c] & 0xfd);
  if (((byte)(*(undefined * PTR32 *)&gen_args[0])[0x1c] & 1) == 0) {
    (*(undefined * PTR32 *)&gen_args[0])[0x1c] = (undefined1)((byte)(*(undefined * PTR32 *)&gen_args[0])[0x1c] | 1);
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x23c))))((*(undefined * PTR32 *)&gen_args[0]));
  }
  return 0;
}

/* ref: FUN_006f72c0 */
uint F_006f72c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f72c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  undefined4 * this_00;
  
  uVar1 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8));
  *(uint *)((int)this + 0x310) = uVar1;
  this_00 = (undefined4 *)F_00406b90(0x20,0,0);
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(this_00,1,0);
    this_00[5] = 1;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10b92d4));
    this_00[6] = this;
    this_00[7] = ((code *)REFP(0x6f0b80));
  }
  *(undefined4 * PTR32 *)((int)this + 0x314) = this_00;
  F_00cb4540(this_00,0,param_1);
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x310) + 0x48))))
                    (*(int * PTR32 *)((int)this + 0x310),*(undefined4 *)((int)this + 0x314));
  return uVar1;
}

/* ref: Client::Game::Event::QuestBattleDirector::vf36 */
byte F_006f7350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6f7350u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_006f4180((undefined *)this,param_1,param_2,param_3);
  if ((char)uVar1 == '\0') {
    F_006f0940(this);
  }
  return 1;
}

/* ref: FUN_006f7380 */
unsigned int F_006f7380(unsigned int gen_a0)
{
  GEN_ENTER(0x6f7380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  undefined * this_00;
  ulonglong uVar3;
  
  F_00a69770(&REFG(undefined4, 0x14b119c));
  uVar2 = F_0042a990((int)this + 0x3bc);
  F_006f7250(this,uVar2);
  this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  if (this_00 == (undefined *)0x0) {
    uVar3 = F_0046ff40();
    uVar2 = (uint)(uVar3 / 1000);
  }
  else {
    uVar2 = F_00975680(this_00);
  }
  uVar1 = (uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0x3b8) + 0x324))) * 0x3c;
  *(uint *)((int)this + 0x2e8) = uVar2;
  *(undefined4 *)((int)this + 0x2ec) = 0;
  *(uint *)((int)this + 0x2f0) = uVar1 + uVar2;
  *(uint *)((int)this + 0x2f4) = (uint)CARRY4(uVar1,uVar2);
  *(undefined4 *)((int)this + 0x3c) = 0xeda3;
  return 0;
}

/* ref: FUN_006f7410 */
uint F_006f7410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6f7410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  byte bVar1;
  int * in_EAX;
  int * piVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  undefined * this_00;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  
  uVar3 = REFG(undefined4, 0x1379694);
  if (REFG(undefined4, 0x1379694) != 0) {
    if ((((REFG(int, 0x13238f8) == 0) && (*(int *)((int)this + 0x238) == 0)) &&
        (*(int *)((int)this + 0x224) == 0)) && (*(int *)((int)this + 0x738) == 0)) {
      bVar1 = F_006c5310(REFG(undefined4, 0x1379694),(uint)param_1,1,1);
      in_EAX = ((int *)GEN_TOP(CONCAT31(extraout_var,bVar1)));
      if (bVar1 != 0) {
        if (((char)param_2 != '\0') && (bVar1 = F_00538870(&REFG(undefined4, 0x1375bc0),param_1,0), bVar1 == 0))
        {
          piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
          uVar6 = 0x523;
          this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2)));
          uVar3 = F_0046a630(this_00,uVar6);
          return uVar3;
        }
        if ((*(char *)((int)param_1 + 0x8a) == '\x02') &&
           (uVar4 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1), uVar4 == 3)) {
          uVar4 = F_00a5f290(param_1);
          uVar4 = F_00a9fbf0(uVar4);
          if ((char)uVar4 != '\0') {
            return uVar4;
          }
        }
        F_00af2090();
        uVar4 = F_00a5f3d0(param_1,((undefined1 *)(gen_frame + 0x8)));
        in_EAX = (int *)F_006d48f0(this,uVar3,param_1,((undefined1 *)(gen_frame + 0x8)),uVar4);
        if (REFG(int, 0x13238f8) != 0) {
          REFG(undefined4, 0x1323874) = param_1;
          REFG(undefined1, 0x13238fc) = 1;
          REFG(undefined4, 0x1323900) = 0;
          in_EAX = (int *)F_006f11c0(this);
        }
      }
    }
    else {
      in_EAX = (int *)F_006de750(this);
      if (in_EAX != param_1) {
        if (REFG(int, 0x13238f8) != 0) {
          piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
          piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
          ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,REFG(undefined4, 0x1323904),0);
        }
        in_EAX = (int *)F_006d9f00(this);
        if ((char)in_EAX == '\0') {
          if (*(int *)((int)this + 0x224) != 0) {
            piVar2 = *(int * PTR32 *)((int)this + 0x214);
            uVar3 = *(uint *)((int)this + 0x220);
            if (piVar2 == (int *)0x0) {
              iVar5 = 0;
            }
            else {
              iVar5 = *piVar2;
            }
            uVar4 = uVar3;
            if (*(uint *)(iVar5 + 8) <= uVar3) {
              uVar4 = uVar3 - *(uint *)(iVar5 + 8);
            }
            if (*((char *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar5 + 4) + uVar4 * 4))) + 0x2c))) != '\0') {
              return uVar3;
            }
            if (piVar2 == (int *)0x0) {
              iVar5 = 0;
            }
            else {
              iVar5 = *piVar2;
            }
            if (*(uint *)(iVar5 + 8) <= uVar3) {
              uVar3 = uVar3 - *(uint *)(iVar5 + 8);
            }
            uVar3 = *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar5 + 4) + uVar3 * 4))) + 8)));
            in_EAX = (int *)0x0;
            if (uVar3 != 0) {
              if ((uVar3 & 0x80000000) == 0x80000000) {
                in_EAX = (int *)F_00748af0((undefined *)((int)this + 0x5c),uVar3);
              }
              else {
                in_EAX = (int *)F_006dda70(this,uVar3);
              }
              if ((in_EAX != (int *)0x0) && ((short)in_EAX[0x15] != -1)) {
                uVar3 = F_00743a80((undefined *)((int)this + 0x214));
                if (*(char *)(uVar3 + 0x2c) == '\0') {
                  *(undefined1 *)(uVar3 + 0x2c) = 1;
                }
                uVar3 = ((code *)*(gen_code32 *)(*in_EAX + 0x98))(in_EAX,0x32);
                return uVar3;
              }
            }
          }
          if ((*(int *)((int)this + 0x238) != 0) && (*(char *)((int)this + 0x25c) == '\0')) {
            *(undefined1 *)((int)this + 0x25c) = 1;
            return (uint)in_EAX;
          }
        }
      }
    }
  }
  return (uint)in_EAX;
}

/* ref: FUN_006f8dd0 */
uint F_006f8dd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x6f8dd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  
  uVar2 = 0;
  if ((*(uint *)&gen_args[2]) != 0) {
    if (((*(uint *)&gen_args[2]) & 0x80000000) == 0x80000000) {
      this_00 = (undefined *)F_00748af0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))),(*(uint *)&gen_args[2]));
    }
    else {
      this_00 = (undefined *)F_006dda70((*(undefined * PTR32 *)&gen_args[0]),(*(uint *)&gen_args[2]));
    }
    piVar1 = (*(int * PTR32 *)&gen_args[1]);
    uVar2 = 0;
    if (this_00 != (undefined *)0x0) {
      if (((*(int * PTR32 *)&gen_args[1]) != (int *)0x0) && ((*((byte *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x8e))) & 0x40) == 0)) {
        ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x54))))((*(int * PTR32 *)&gen_args[1]),1);
        F_0074a590(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6c0))),((undefined1 *)(gen_frame + 0x4)),&(*(int * PTR32 *)&gen_args[1]));
      }
      F_006bcf50(this_00,piVar1,(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[5]),(*(undefined4 *)&gen_args[6]));
      uVar2 = F_006f1520(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x100))),(*(undefined4 *)&gen_args[4]));
    }
  }
  return uVar2;
}

/* ref: FUN_006f8e70 */
uint F_006f8e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f8e70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x15);
  if (uVar2 != 0xffff) {
    *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) | 2;
  }
  uVar3 = *(uint *)((int)this + 0x220);
  if (*(int * PTR32 *)((int)this + 0x214) == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = **(int * PTR32 *)((int)this + 0x214);
  }
  if (*(uint *)(iVar4 + 8) <= uVar3) {
    uVar3 = uVar3 - *(uint *)(iVar4 + 8);
  }
  if (*((char *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar4 + 4) + uVar3 * 4))) + 0x2c))) == '\0') {
    uVar3 = ((code *)*(gen_code32 *)(*param_1 + 0x60))
                      (param_1,param_1[0x16],(uint)uVar2,&REFG(undefined4, 0x1488348),(uint)REFG(undefined1, 0x1488342));
    return uVar3;
  }
  uVar3 = 0xffff;
  param_1[0x18] = 0x39;
  if (uVar2 != 0xffff) {
    bVar1 = *(byte *)(param_1 + 0x17);
    uVar3 = CONCAT31(0xff,bVar1);
    if ((bVar1 & 4) == 0) {
      *(byte *)(param_1 + 0x17) = bVar1 | 4;
      uVar3 = F_006f15b0((undefined *)param_1[1],0,0);
    }
  }
  return uVar3;
}

/* ref: FUN_006f8f10 */
uint F_006f8f10(unsigned int gen_a0)
{
  GEN_ENTER(0x6f8f10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int * piVar6;
  undefined4 * puVar7;
  int * piVar8;
  int * piVar9;
  uint uVar10;
  int * piVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int * piVar15;
  int iVar16;
  
  uVar10 = *(uint *)((int)this + 0x220);
  iVar16 = 0;
  if (*(int * PTR32 *)((int)this + 0x214) != (int *)0x0) {
    iVar16 = **(int * PTR32 *)((int)this + 0x214);
  }
  if (*(uint *)(iVar16 + 8) <= uVar10) {
    uVar10 = uVar10 - *(uint *)(iVar16 + 8);
  }
  iVar16 = *((int *)GEN_TOP((*(int *)(iVar16 + 4) + uVar10 * 4)));
  bVar1 = *(byte *)(iVar16 + 0x18);
  uVar3 = *(undefined4 *)(iVar16 + 0x1c);
  uVar4 = *(undefined4 *)(iVar16 + 0x10);
  uVar10 = *(uint *)(iVar16 + 8);
  ((byte *)(gen_frame + 0x8))[0x24] = bVar1;
  uVar5 = *(undefined4 *)(iVar16 + 0x14);
  uVar14 = *(uint *)(iVar16 + 0x28);
  uVar13 = *(uint *)(iVar16 + 0x24);
  if (uVar10 == 0) {
    return uVar14;
  }
  if ((uVar10 & 0x80000000) == 0x80000000) {
    piVar11 = (int *)F_00748af0((undefined *)((int)this + 0x5c),uVar10);
  }
  else {
    piVar11 = (int *)F_006dda70(this,uVar10);
  }
  piVar8 = REFG(undefined4, 0x1379694);
  if (piVar11 == (int *)0x0) {
    return 0;
  }
  F_006e6740((undefined *)((int)this + 0x100));
  if (*(int *)((int)this + 0x224) == 1) {
    piVar15 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x6c4)));
    if (piVar15 != *(int * PTR32 *)((int)this + 0x6c4)) {
      do {
        piVar6 = (int *)piVar15[3];
        if ((*(byte *)((int)piVar6 + 0x8e) & 0x40) != 0) {
          uVar12 = ((code *)*(gen_code32 *)(*piVar6 + 0xb8))(piVar6);
          if ((char)uVar12 != '\0') {
            F_00aa4310((undefined *)piVar15[3]);
          }
          ((code *)*(gen_code32 *)(*(int *)piVar15[3] + 0x54))((int *)piVar15[3],0);
        }
        if (*(char *)((int)piVar15 + 0x11) == '\0') {
          piVar6 = (int *)piVar15[2];
          if (*(char *)((int)piVar6 + 0x11) == '\0') {
            cVar2 = *(char *)(*piVar6 + 0x11);
            piVar15 = piVar6;
            piVar6 = (int *)*piVar6;
            while (cVar2 == '\0') {
              cVar2 = *(char *)(*piVar6 + 0x11);
              piVar15 = piVar6;
              piVar6 = (int *)*piVar6;
            }
          }
          else {
            cVar2 = *(char *)(piVar15[1] + 0x11);
            piVar9 = (int *)piVar15[1];
            piVar6 = piVar15;
            while ((piVar15 = piVar9, cVar2 == '\0' && (piVar6 == (int *)piVar15[2]))) {
              cVar2 = *(char *)(piVar15[1] + 0x11);
              piVar9 = (int *)piVar15[1];
              piVar6 = piVar15;
            }
          }
        }
      } while (piVar15 != *(int * PTR32 *)((int)this + 0x6c4));
    }
    F_00743520((undefined *)((int)this + 0x6c0));
    if (piVar8 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar8 + 0x54))(piVar8,0);
    }
    *(undefined4 *)((int)this + 0x260) = 0;
  }
  if (((uVar14 == 0x3d) && (uVar13 != 0)) && (uVar13 < 9)) {
    F_00a4a760(&REFG(undefined, 0x14a7360),uVar13,0);
  }
  uVar13 = ((code *)*(gen_code32 *)(*piVar11 + 0x21c))(piVar11);
  if ((char)uVar13 != '\0') {
    *(undefined4 *)((int)this + 0x740) = uVar4;
    *(undefined4 *)((int)this + 0x744) = uVar5;
  }
  F_00751470((undefined *)((int)this + 0x728),iVar16);
  ((code *)*(gen_code32 *)(*piVar11 + 0x9c))(piVar11,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 36)),uVar3,uVar14);
  if ((uVar10 & 0x80000000) == 0x80000000) {
    *(undefined1 *)((int)this + 0xc0) = 1;
    F_006de430((undefined *)((int)this + 0x5c));
  }
  else {
    F_006e5450(this,uVar10,piVar8);
  }
  iVar16 = 0;
  if (*(int *)((int)this + 0x224) != 0) {
    puVar7 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x218) + *(int *)((int)this + 0x220) * 4)));
    ((code *)*(gen_code32 *)*puVar7)(puVar7,0);
    *(int *)((int)this + 0x220) = *(int *)((int)this + 0x220) + 1;
    if (*(uint *)((int)this + 0x21c) <= *(uint *)((int)this + 0x220)) {
      *(undefined4 *)((int)this + 0x220) = 0;
    }
    piVar11 = (int *)((int)this + 0x224);
    *piVar11 = *piVar11 + -1;
    if (*piVar11 == 0) {
      *(undefined4 *)((int)this + 0x220) = 0;
    }
  }
  if (*(int *)((int)this + 0x224) == 0) {
    if (*(char *)((int)this + 0x7a8) != '\0') {
      *(undefined1 *)((int)this + 0x7a8) = 0;
    }
    uVar10 = 0;
  }
  else {
    piVar11 = *(int * PTR32 *)((int)this + 0x214);
    uVar10 = *(uint *)((int)this + 0x220);
    if (piVar11 != (int *)0x0) {
      iVar16 = *piVar11;
    }
    uVar14 = uVar10;
    if (*(uint *)(iVar16 + 8) <= uVar10) {
      uVar14 = uVar10 - *(uint *)(iVar16 + 8);
    }
    if (*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar16 + 4) + uVar14 * 4))) + 0x28))) != 0) {
      if (piVar11 == (int *)0x0) {
        iVar16 = 0;
      }
      else {
        iVar16 = *piVar11;
      }
      if (*(uint *)(iVar16 + 8) <= uVar10) {
        uVar10 = uVar10 - *(uint *)(iVar16 + 8);
      }
      iVar16 = *((int *)GEN_TOP((*(int *)(iVar16 + 4) + uVar10 * 4)));
      uVar10 = F_006fd010(this,*(undefined4 *)(iVar16 + 8),(uint)*(byte *)(iVar16 + 0x18),
                            *(undefined4 *)(iVar16 + 0x1c),*(undefined4 *)(iVar16 + 0x28));
      goto LAB_006f927a;
    }
  }
  if (*(int *)((int)this + 0x224) != 0) {
    return uVar10;
  }
  uVar10 = 0;
  if (*(int *)((int)this + 0x288) != 0) {
    F_006f0be0(this,*(int *)((int)this + 0x288),*(undefined4 *)((int)this + 0x290),
                 *(undefined4 *)((int)this + 0x294),(uint)*(byte *)((int)this + 0x298),
                 *(undefined4 *)((int)this + 0x29c),(uint)*(byte *)((int)this + 0x2a0));
    if (*(short *)((int)this + 0x2b8) != -1) {
      if (*(int *)((int)this + 0x2b0) == -0x20000000) {
        uVar10 = 0;
      }
      else {
        uVar10 = F_00a354d0(&REFG(undefined4, 0x14a31f0),*(int *)((int)this + 0x2b0),
                              *(undefined4 *)((int)this + 0x2b4));
      }
      F_006f8dd0(this,uVar10,*(undefined4 *)((int)this + 0x288),
                   (uint)*(ushort *)((int)this + 0x2b8),*(undefined4 *)((int)this + 700),
                   (int)this + 0x2c0,(uint)*(byte *)((int)this + 0x6bc));
    }
    uVar10 = F_0072df00((undefined *)((int)this + 0x280));
  }
LAB_006f927a: ;
  if ((*(int *)((int)this + 0x224) == 0) && (bVar1 == 0xf)) {
    uVar10 = F_00ab60c0(&REFG(undefined4, 0x14bcc80));
  }
  return uVar10;
}

/* ref: FUN_006f92a0 */
uint F_006f92a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6f92a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  F_006f6dc0((undefined *)((int)this + 0x5c),param_1,param_2);
  uVar1 = F_006de0e0(this,0xffff);
  return uVar1;
}

/* ref: Client::Game::Event::InitializeSceneTask::vf2 */
uint F_006f95e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6f95e0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined * this_00;
  byte bVar1;
  char cVar2;
  int * piVar3;
  undefined * pvVar4;
  undefined4 * puVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  
  this_00 = (*(undefined * PTR32 *)&gen_args[1]);
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0x6c))) = *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if ((*((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) & 0x1000) == 0) {
    if (((byte)(*(undefined * PTR32 *)&gen_args[0])[4] & 1) == 0) {
      if ((REFG(int, 0x1375bbc) == 0) && (bVar1 = F_005374c0(&REFG(undefined4, 0x1375bc0)), bVar1 == 0)) {
        if (REFG(int, 0x1375bbc) == -1) {
          iVar7 = 0;
        }
        else {
          iVar7 = (&REFG(undefined4, 0x1375b90))[REFG(int, 0x1375bbc)];
        }
        *(undefined1 *)(iVar7 + 0x198) = 1;
      }
      if ((REFG(undefined4, 0x1379694) != (undefined *)0x0) && (*(int *)((*(int *)&gen_args[2]) + 0x50) != 0)) {
        F_006da750(this_00,REFG(undefined4, 0x1379694),*(int *)((*(int *)&gen_args[2]) + 0x50),1);
      }
    }
  }
  else if (REFG(int, 0x1375bbc) != 1) {
    F_00b70d10(&REFG(undefined4, 0x1375b90),1);
  }
  if ((*((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) & 0x800) == 0) {
    if ((*((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) & 0x2000) != 0) {
      if (*(char *)((int)this_00 + 0xd6) != '\0') {
        *(undefined1 *)((int)this_00 + 0xd6) = 0;
        uVar8 = 2;
        if (*(char *)((int)this_00 + 0xd7) != '\0') {
          *(undefined1 *)((int)this_00 + 0xd7) = 0;
          uVar8 = 6;
        }
        piVar3 = (int *)F_00424750(REFG(int, 0x137104c));
        if (piVar3 != (int *)0x0) {
          ((code *)*(gen_code32 *)(*piVar3 + 0xb0))(piVar3,uVar8,1,1);
        }
      }
      if (*(char *)((int)this_00 + 0xdb) == '\0') {
        *(undefined1 *)((int)this_00 + 0xdb) = 1;
        piVar3 = (int *)F_00424750(REFG(int, 0x137104c));
        if (piVar3 != (int *)0x0) {
          ((code *)*(gen_code32 *)(*piVar3 + 0xb0))(piVar3,0x10,0,1);
        }
      }
    }
  }
  else {
    F_006c5600(this_00,0x16);
  }
  if (*(int *)((int)REFG(undefined4, 0x1488344) + 0x224) == 0) {
    if (*(int *)((int)REFG(undefined4, 0x1488344) + 0x238) == 0) goto LAB_006f979f;
    cVar2 = *(char *)((int)REFG(undefined4, 0x1488344) + 0x248);
  }
  else {
    uVar6 = *(uint *)((int)REFG(undefined4, 0x1488344) + 0x220);
    if (*(int * PTR32 *)((int)REFG(undefined4, 0x1488344) + 0x214) == (int *)0x0) {
      iVar7 = 0;
    }
    else {
      iVar7 = **(int * PTR32 *)((int)REFG(undefined4, 0x1488344) + 0x214);
    }
    if (*(uint *)(iVar7 + 8) <= uVar6) {
      uVar6 = uVar6 - *(uint *)(iVar7 + 8);
    }
    cVar2 = *((char *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar7 + 4) + uVar6 * 4))) + 0x18)));
  }
  if (cVar2 == '\x0f') {
    uVar8 = *(undefined4 *)(REFG(int, 0x137104c) + 0x25f8);
    if ((*((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) & 0x8000) == 0) {
      F_004e7f70(uVar8,(float)(float10)1);
    }
    if ((*((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) & 0x10000) == 0) {
      F_00ab05b0();
    }
    if ((*((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) & 0x20000) == 0) {
      F_004e7cc0(uVar8,(float)(float10)1);
    }
  }
LAB_006f979f: ;
  if ((*((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) & 0x400) != 0) {
    F_009d53f0(REFG(undefined4, 0x1487c90),1);
    F_00984b30(1);
    pvVar4 = REFG(undefined4, 0x1379694);
    if (REFG(undefined4, 0x1379694) != (undefined *)0x0) {
      F_00aa3410(REFG(undefined4, 0x1379694),0xffffffff);
      piVar3 = *(int * PTR32 *)((int)pvVar4 + 0x2e04);
      if (piVar3 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,1,0);
      }
    }
    F_00a06560(0);
    F_004d1650(REFG(undefined4, 0x1370c18));
    piVar3 = (int *)F_00424750(REFG(int, 0x137104c));
    if (piVar3 != (int *)0x0) {
      pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3)));
      F_00449620(pvVar4);
    }
  }
  pvVar4 = REFG(undefined4, 0x1379694);
  if (REFG(undefined4, 0x1379694) != (undefined *)0x0) {
    uVar8 = *(undefined4 *)((int)REFG(undefined4, 0x1379694) + 0xb0);
    puVar5 = (undefined4 *)F_00a5feb0(REFG(undefined4, 0x1379694));
    F_006d7550(&(*(undefined * PTR32 *)&gen_args[1]),pvVar4);
    if ((*(undefined * PTR32 *)&gen_args[1]) != *(undefined * PTR32 *)((int)this_00 + 0x30)) {
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0x58))) = *puVar5;
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0x5c))) = puVar5[1];
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0x60))) = puVar5[2];
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 100))) = uVar8;
    }
  }
  uVar6 = F_006f8e70(REFG(undefined4, 0x1488344),(*(int *)&gen_args[2]));
  return uVar6;
}

/* ref: Client::Game::Event::EventHandler::vf24 */
uint F_006f9890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6f9890u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined1 EVar1;
  uint uVar2;
  
  uVar2 = 0xffff;
  if (*(short *)(this + 0x54) != -1) {
    EVar1 = this[0x5c];
    uVar2 = CONCAT31(0xff,EVar1);
    if (((byte)EVar1 & 4) == 0) {
      this[0x5c] = (undefined1)((byte)EVar1 | 4);
      uVar2 = F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
    }
  }
  return uVar2;
}

/* ref: Client::Game::Event::EventHandler::vf27 */
uint F_006f98c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6f98c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined1 EVar1;
  uint uVar2;
  
  uVar2 = 0xffff;
  if (*(short *)(this + 0x54) != -1) {
    EVar1 = this[0x5c];
    uVar2 = CONCAT31(0xff,EVar1);
    if (((byte)EVar1 & 4) == 0) {
      this[0x5c] = (undefined1)((byte)EVar1 | 4);
      uVar2 = F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
    }
  }
  return uVar2;
}

/* ref: Client::Game::Event::EventHandler::vf26 */
uint F_006f98f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6f98f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined1 EVar1;
  uint uVar2;
  
  uVar2 = 0xffff;
  if (*(short *)(this + 0x54) != -1) {
    EVar1 = this[0x5c];
    uVar2 = CONCAT31(0xff,EVar1);
    if (((byte)EVar1 & 4) == 0) {
      this[0x5c] = (undefined1)((byte)EVar1 | 4);
      uVar2 = F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
    }
  }
  return uVar2;
}

/* ref: FUN_006f9920 */
byte F_006f9920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x6f9920u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = REFG(int, 0x1488344);
  if (*(int *)(REFG(int, 0x1488344) + 0x208) == 0) {
    *(undefined4 *)(REFG(int, 0x1488344) + 0x208) = *(undefined4 *)((int)this + 8);
    iVar2 = iVar2 + 0x1e8;
  }
  else {
    iVar2 = 0;
  }
  *(int *)((int)this + 0x1d0) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((int)this + 0x60) = 0x35;
    return 0;
  }
  if (param_3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = F_0042a990(param_3 + 8);
  }
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = F_0042a990(param_2 + 8);
  }
  uVar5 = F_0042a990((int)this + 0x16c);
  uVar3 = F_00a03750(*(undefined * PTR32 *)((int)this + 0x1d0),param_1,uVar5,uVar4,uVar3,param_4,param_5);
  if (uVar3 != 1) {
    bVar1 = F_00a02270(uVar3);
    if (bVar1 != 0) {
      *(uint *)((int)this + 0x60) = uVar3;
    }
    F_006f4000(this);
  }
  return 1;
}

/* ref: FUN_006f99e0 */
uint F_006f99e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6f99e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_00a03900(*(undefined * PTR32 *)((int)this + 0x1d0),param_1,param_2);
  uVar3 = 1;
  if (uVar2 != 1) {
    bVar1 = F_00a02270(uVar2);
    if (bVar1 != 0) {
      *(uint *)((int)this + 0x60) = uVar2;
    }
    uVar3 = F_006f4000(this);
  }
  return uVar3;
}

/* ref: FUN_006f9a30 */
uint F_006f9a30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6f9a30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_00a03ae0(*(undefined * PTR32 *)((int)this + 0x1d0),param_1,param_2,param_3);
  uVar3 = 1;
  if (uVar2 != 1) {
    bVar1 = F_00a02270(uVar2);
    if (bVar1 != 0) {
      *(uint *)((int)this + 0x60) = uVar2;
    }
    uVar3 = F_006f4000(this);
  }
  return uVar3;
}

/* ref: FUN_006f9a80 */
uint F_006f9a80(unsigned int gen_a0)
{
  GEN_ENTER(0x6f9a80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_00a03710(*(undefined * PTR32 *)((int)this + 0x1d0));
  if (uVar2 != 1) {
    bVar1 = F_00a02270(uVar2);
    if (bVar1 != 0) {
      *(uint *)((int)this + 0x60) = uVar2;
    }
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  return 1;
}

/* ref: FUN_006f9ac0 */
uint F_006f9ac0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6f9ac0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_00a039e0(*(undefined * PTR32 *)((int)this + 0x1d0),param_1,param_2);
  uVar3 = 1;
  if (uVar2 != 1) {
    bVar1 = F_00a02270(uVar2);
    if (bVar1 != 0) {
      *(uint *)((int)this + 0x60) = uVar2;
    }
    uVar3 = F_006f4000(this);
  }
  return uVar3;
}

/* ref: Client::Game::Event::LuaEventHandler::vf53 */
uint F_006f9b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f9b10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x60) != 0) {
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  uVar3 = F_00a03710(*(undefined * PTR32 *)(this + 0x1d0));
  uVar2 = 1;
  if (uVar3 != 1) {
    bVar1 = F_00a02270(uVar3);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar3;
    }
    uVar2 = F_006f4000(this);
  }
  return uVar2;
}

/* ref: Client::Game::Event::LuaEventHandler::vf54 */
uint F_006f9b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f9b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x60) != 0) {
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  uVar3 = F_00a038b0(*(undefined * PTR32 *)(this + 0x1d0),param_1);
  uVar2 = 1;
  if (uVar3 != 1) {
    bVar1 = F_00a02270(uVar3);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar3;
    }
    uVar2 = F_006f4000(this);
  }
  return uVar2;
}

/* ref: Client::Game::Event::LuaEventHandler::vf55 */
uint F_006f9bb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6f9bb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x60) != 0) {
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  uVar3 = F_00a03850(*(undefined * PTR32 *)(this + 0x1d0),(uint)(param_1 == 0));
  uVar2 = 1;
  if (uVar3 != 1) {
    bVar1 = F_00a02270(uVar3);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar3;
    }
    uVar2 = F_006f4000(this);
  }
  return uVar2;
}

/* ref: Client::Game::Event::LuaEventHandler::vf56 */
uint F_006f9c10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6f9c10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x60) != 0) {
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  uVar3 = F_00a038b0(*(undefined * PTR32 *)(this + 0x1d0),param_1 + 1);
  uVar2 = 1;
  if (uVar3 != 1) {
    bVar1 = F_00a02270(uVar3);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar3;
    }
    uVar2 = F_006f4000(this);
  }
  return uVar2;
}

/* ref: Client::Game::Event::LuaEventHandler::vf57 */
uint F_006f9c60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6f9c60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x60) != 0) {
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  uVar3 = F_00a038b0(*(undefined * PTR32 *)(this + 0x1d0),param_1 + 1);
  uVar2 = 1;
  if (uVar3 != 1) {
    bVar1 = F_00a02270(uVar3);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar3;
    }
    uVar2 = F_006f4000(this);
  }
  return uVar2;
}

/* ref: Client::Game::Event::LuaEventHandler::vf58 */
uint F_006f9cb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f9cb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x60) != 0) {
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  uVar3 = F_00a038b0(*(undefined * PTR32 *)(this + 0x1d0),param_1 + 1);
  uVar2 = 1;
  if (uVar3 != 1) {
    bVar1 = F_00a02270(uVar3);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar3;
    }
    uVar2 = F_006f4000(this);
  }
  return uVar2;
}

/* ref: Client::Game::Event::LuaEventHandler::vf59 */
uint F_006f9d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6f9d00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x60) != 0) {
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  uVar3 = F_00a03900(*(undefined * PTR32 *)(this + 0x1d0),param_2,param_3);
  uVar2 = 1;
  if (uVar3 != 1) {
    bVar1 = F_00a02270(uVar3);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar3;
    }
    uVar2 = F_006f4000(this);
  }
  return uVar2;
}

/* ref: Client::Game::Event::LuaEventHandler::vf61 */
uint F_006f9d60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6f9d60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x60) != 0) {
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  uVar3 = F_00a03970(*(undefined * PTR32 *)(this + 0x1d0),param_2);
  uVar2 = 1;
  if (uVar3 != 1) {
    bVar1 = F_00a02270(uVar3);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar3;
    }
    uVar2 = F_006f4000(this);
  }
  return uVar2;
}

/* ref: Client::Game::Event::LuaEventHandler::vf60 */
uint F_006f9db0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6f9db0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x60) != 0) {
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  uVar3 = F_00a039e0(*(undefined * PTR32 *)(this + 0x1d0),param_2,param_3);
  uVar2 = 1;
  if (uVar3 != 1) {
    bVar1 = F_00a02270(uVar3);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar3;
    }
    uVar2 = F_006f4000(this);
  }
  return uVar2;
}

/* ref: Client::Game::Event::LuaEventHandler::vf62 */
uint F_006f9e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f9e10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x60) != 0) {
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  uVar3 = F_00a03710(*(undefined * PTR32 *)(this + 0x1d0));
  uVar2 = 1;
  if (uVar3 != 1) {
    bVar1 = F_00a02270(uVar3);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar3;
    }
    uVar2 = F_006f4000(this);
  }
  return uVar2;
}

/* ref: Client::Game::Event::LuaEventHandler::vf63 */
uint F_006f9e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f9e60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x60) != 0) {
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  uVar3 = F_00a03710(*(undefined * PTR32 *)(this + 0x1d0));
  uVar2 = 1;
  if (uVar3 != 1) {
    bVar1 = F_00a02270(uVar3);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar3;
    }
    uVar2 = F_006f4000(this);
  }
  return uVar2;
}

/* ref: Client::Game::Event::LuaEventHandler::vf64 */
uint F_006f9eb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f9eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x60) != 0) {
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  uVar3 = F_00a038b0(*(undefined * PTR32 *)(this + 0x1d0),param_1);
  uVar2 = 1;
  if (uVar3 != 1) {
    bVar1 = F_00a02270(uVar3);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar3;
    }
    uVar2 = F_006f4000(this);
  }
  return uVar2;
}

/* ref: Client::Game::Event::LuaEventHandler::vf65 */
uint F_006f9f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f9f00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x60) != 0) {
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  uVar3 = F_00a03710(*(undefined * PTR32 *)(this + 0x1d0));
  uVar2 = 1;
  if (uVar3 != 1) {
    bVar1 = F_00a02270(uVar3);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar3;
    }
    uVar2 = F_006f4000(this);
  }
  return uVar2;
}

/* ref: Client::Game::Event::LuaEventHandler::vf66 */
uint F_006f9f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f9f50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x60) != 0) {
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  uVar3 = F_00a03710(*(undefined * PTR32 *)(this + 0x1d0));
  uVar2 = 1;
  if (uVar3 != 1) {
    bVar1 = F_00a02270(uVar3);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar3;
    }
    uVar2 = F_006f4000(this);
  }
  return uVar2;
}

/* ref: Client::Game::Event::LuaEventHandler::vf67 */
uint F_006f9fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f9fa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x60) != 0) {
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  uVar3 = F_00a03710(*(undefined * PTR32 *)(this + 0x1d0));
  uVar2 = 1;
  if (uVar3 != 1) {
    bVar1 = F_00a02270(uVar3);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar3;
    }
    uVar2 = F_006f4000(this);
  }
  return uVar2;
}

/* ref: Client::Game::Event::LuaEventHandler::vf68 */
uint F_006f9ff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f9ff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x60) != 0) {
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  uVar3 = F_00a03710(*(undefined * PTR32 *)(this + 0x1d0));
  uVar2 = 1;
  if (uVar3 != 1) {
    bVar1 = F_00a02270(uVar3);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar3;
    }
    uVar2 = F_006f4000(this);
  }
  return uVar2;
}

/* ref: Client::Game::Event::LuaEventHandler::vf69 */
uint F_006fa040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fa040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x60) != 0) {
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  uVar3 = F_00a038b0(*(undefined * PTR32 *)(this + 0x1d0),param_1);
  uVar2 = 1;
  if (uVar3 != 1) {
    bVar1 = F_00a02270(uVar3);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar3;
    }
    uVar2 = F_006f4000(this);
  }
  return uVar2;
}

/* ref: Client::Game::Event::LuaEventHandler::vf70 */
uint F_006fa090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fa090u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x60) != 0) {
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  uVar3 = F_00a038b0(*(undefined * PTR32 *)(this + 0x1d0),param_1);
  uVar2 = 1;
  if (uVar3 != 1) {
    bVar1 = F_00a02270(uVar3);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar3;
    }
    uVar2 = F_006f4000(this);
  }
  return uVar2;
}

/* ref: Client::Game::Event::LuaEventHandler::vf71 */
uint F_006fa0e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fa0e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x60) != 0) {
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  uVar3 = F_00a038b0(*(undefined * PTR32 *)(this + 0x1d0),param_1);
  uVar2 = 1;
  if (uVar3 != 1) {
    bVar1 = F_00a02270(uVar3);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar3;
    }
    uVar2 = F_006f4000(this);
  }
  return uVar2;
}

/* ref: Client::Game::Event::LuaEventHandler::vf72 */
uint F_006fa130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fa130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x60) != 0) {
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  uVar3 = F_00a038b0(*(undefined * PTR32 *)(this + 0x1d0),param_1);
  uVar2 = 1;
  if (uVar3 != 1) {
    bVar1 = F_00a02270(uVar3);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar3;
    }
    uVar2 = F_006f4000(this);
  }
  return uVar2;
}

/* ref: Client::Game::Event::LuaEventHandler::vf73 */
uint F_006fa180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fa180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x60) != 0) {
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  uVar3 = F_00a038b0(*(undefined * PTR32 *)(this + 0x1d0),param_1);
  uVar2 = 1;
  if (uVar3 != 1) {
    bVar1 = F_00a02270(uVar3);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar3;
    }
    uVar2 = F_006f4000(this);
  }
  return uVar2;
}

/* ref: Client::Game::Event::LuaEventHandler::vf74 */
uint F_006fa1d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fa1d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x60) != 0) {
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  uVar3 = F_00a03710(*(undefined * PTR32 *)(this + 0x1d0));
  uVar2 = 1;
  if (uVar3 != 1) {
    bVar1 = F_00a02270(uVar3);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar3;
    }
    uVar2 = F_006f4000(this);
  }
  return uVar2;
}

/* ref: Client::Game::Event::LuaEventHandler::vf75 */
uint F_006fa220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fa220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x60) != 0) {
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  uVar3 = F_00a03710(*(undefined * PTR32 *)(this + 0x1d0));
  uVar2 = 1;
  if (uVar3 != 1) {
    bVar1 = F_00a02270(uVar3);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar3;
    }
    uVar2 = F_006f4000(this);
  }
  return uVar2;
}

/* ref: Client::Game::Event::LuaEventHandler::vf76 */
uint F_006fa270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fa270u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x60) != 0) {
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  uVar3 = F_00a038b0(*(undefined * PTR32 *)(this + 0x1d0),param_1 + 1);
  uVar2 = 1;
  if (uVar3 != 1) {
    bVar1 = F_00a02270(uVar3);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar3;
    }
    uVar2 = F_006f4000(this);
  }
  return uVar2;
}

/* ref: Client::Game::Event::LuaEventHandler::vf77 */
uint F_006fa2c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fa2c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x60) != 0) {
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  uVar3 = F_00a03850(*(undefined * PTR32 *)(this + 0x1d0),(uint)(param_1 == 0));
  uVar2 = 1;
  if (uVar3 != 1) {
    bVar1 = F_00a02270(uVar3);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar3;
    }
    uVar2 = F_006f4000(this);
  }
  return uVar2;
}

/* ref: Client::Game::Event::LuaEventHandler::vf78 */
uint F_006fa320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6fa320u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x60) != 0) {
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  uVar3 = F_00a03900(*(undefined * PTR32 *)(this + 0x1d0),param_1,param_2);
  uVar2 = 1;
  if (uVar3 != 1) {
    bVar1 = F_00a02270(uVar3);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar3;
    }
    uVar2 = F_006f4000(this);
  }
  return uVar2;
}

/* ref: Client::Game::Event::LuaEventHandler::vf79 */
uint F_006fa380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6fa380u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x60) != 0) {
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  uVar3 = F_00a03900(*(undefined * PTR32 *)(this + 0x1d0),param_1,param_2);
  uVar2 = 1;
  if (uVar3 != 1) {
    bVar1 = F_00a02270(uVar3);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar3;
    }
    uVar2 = F_006f4000(this);
  }
  return uVar2;
}

/* ref: Client::Game::Event::LuaEventHandler::vf80 */
uint F_006fa3e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fa3e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x60) != 0) {
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  uVar3 = F_00a038b0(*(undefined * PTR32 *)(this + 0x1d0),param_1);
  uVar2 = 1;
  if (uVar3 != 1) {
    bVar1 = F_00a02270(uVar3);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar3;
    }
    uVar2 = F_006f4000(this);
  }
  return uVar2;
}

/* ref: Client::Game::Event::LuaEventHandler::vf84 */
uint F_006fa430(unsigned int gen_a0)
{
  GEN_ENTER(0x6fa430u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_00a03710(*(undefined * PTR32 *)(this + 0x1d0));
  if (uVar2 != 1) {
    bVar1 = F_00a02270(uVar2);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar2;
    }
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  return 1;
}

/* ref: Client::Game::Event::LuaEventHandler::vf85 */
uint F_006fa470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fa470u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  (*(uint *)&gen_args[1]) = F_0042a990(*(int *)((*(uint *)&gen_args[1]) + 0x174) + 8);
  uVar2 = F_00a03a70(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1d0))),&(*(uint *)&gen_args[1]));
  uVar3 = 1;
  if (uVar2 != 1) {
    bVar1 = F_00a02270(uVar2);
    if (bVar1 != 0) {
      *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x60))) = uVar2;
    }
    uVar3 = F_006f4000((*(undefined * PTR32 *)&gen_args[0]));
  }
  return uVar3;
}

/* ref: Client::Game::Event::LuaEventHandler::vf86 */
uint F_006fa4d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fa4d0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  (*(uint *)&gen_args[1]) = F_0042a990(*(int *)((*(uint *)&gen_args[1]) + 0x174) + 8);
  uVar2 = F_00a03a70(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1d0))),&(*(uint *)&gen_args[1]));
  uVar3 = 1;
  if (uVar2 != 1) {
    bVar1 = F_00a02270(uVar2);
    if (bVar1 != 0) {
      *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x60))) = uVar2;
    }
    uVar3 = F_006f4000((*(undefined * PTR32 *)&gen_args[0]));
  }
  return uVar3;
}

/* ref: Client::Game::Event::LuaEventHandler::vf87 */
uint F_006fa530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fa530u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if ((*(uint *)&gen_args[1]) != 0) {
    (*(uint *)&gen_args[1]) = F_0042a990(*(int *)((*(uint *)&gen_args[1]) + 0x174) + 8);
    uVar2 = F_00a03a70(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1d0))),&(*(uint *)&gen_args[1]));
    uVar3 = 1;
    if (uVar2 != 1) {
      bVar1 = F_00a02270(uVar2);
      if (bVar1 != 0) {
        *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x60))) = uVar2;
      }
      uVar3 = F_006f4000((*(undefined * PTR32 *)&gen_args[0]));
    }
    return uVar3;
  }
  *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x60))) = 0x3a;
  uVar3 = F_006f4000((*(undefined * PTR32 *)&gen_args[0]));
  return uVar3;
}

/* ref: Client::Game::Event::LuaEventHandler::vf88 */
uint F_006fa5a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6fa5a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_00a03710(*(undefined * PTR32 *)(this + 0x1d0));
  if (uVar2 != 1) {
    bVar1 = F_00a02270(uVar2);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar2;
    }
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  return 1;
}

/* ref: Client::Game::Event::LuaEventHandler::vf89 */
uint F_006fa5e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6fa5e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_00a03710(*(undefined * PTR32 *)(this + 0x1d0));
  if (uVar2 != 1) {
    bVar1 = F_00a02270(uVar2);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar2;
    }
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  return 1;
}

/* ref: Client::Game::Event::LuaEventHandler::vf90 */
uint F_006fa620(unsigned int gen_a0)
{
  GEN_ENTER(0x6fa620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_00a03710(*(undefined * PTR32 *)(this + 0x1d0));
  if (uVar2 != 1) {
    bVar1 = F_00a02270(uVar2);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar2;
    }
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  return 1;
}

/* ref: Client::Game::Event::LuaEventHandler::vf91 */
uint F_006fa660(unsigned int gen_a0)
{
  GEN_ENTER(0x6fa660u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_00a03710(*(undefined * PTR32 *)(this + 0x1d0));
  if (uVar2 != 1) {
    bVar1 = F_00a02270(uVar2);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar2;
    }
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  return 1;
}

/* ref: Client::Game::Event::LuaEventHandler::vf92 */
uint F_006fa6a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6fa6a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_00a03710(*(undefined * PTR32 *)(this + 0x1d0));
  if (uVar2 != 1) {
    bVar1 = F_00a02270(uVar2);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar2;
    }
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  return 1;
}

/* ref: Client::Game::Event::LuaEventHandler::vf93 */
uint F_006fa6e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6fa6e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_00a03710(*(undefined * PTR32 *)(this + 0x1d0));
  if (uVar2 != 1) {
    bVar1 = F_00a02270(uVar2);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar2;
    }
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  return 1;
}

/* ref: Client::Game::Event::LuaEventHandler::vf95 */
uint F_006fa720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fa720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_00a038b0(*(undefined * PTR32 *)(this + 0x1d0),param_1);
  uVar3 = 1;
  if (uVar2 != 1) {
    bVar1 = F_00a02270(uVar2);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar2;
    }
    uVar3 = F_006f4000(this);
  }
  return uVar3;
}

/* ref: Client::Game::Event::LuaEventHandler::vf96 */
uint F_006fa760(unsigned int gen_a0)
{
  GEN_ENTER(0x6fa760u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_00a03710(*(undefined * PTR32 *)(this + 0x1d0));
  if (uVar2 != 1) {
    bVar1 = F_00a02270(uVar2);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar2;
    }
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  return 1;
}

/* ref: Client::Game::Event::LuaEventHandler::vf97 */
unsigned int F_006fa7a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6fa7a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  if ((*(undefined * PTR32 *)(this + 0x1d0) != (undefined *)0x0) &&
     (uVar2 = F_00a03710(*(undefined * PTR32 *)(this + 0x1d0)), uVar2 != 1)) {
    bVar1 = F_00a02270(uVar2);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar2;
    }
    F_006f4000(this);
    return 0;
  }
  return 0;
}

/* ref: Client::Game::Event::LuaEventHandler::vf98 */
uint F_006fa7e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6fa7e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_00a03710(*(undefined * PTR32 *)(this + 0x1d0));
  if (uVar2 != 1) {
    bVar1 = F_00a02270(uVar2);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar2;
    }
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  return 1;
}

/* ref: Client::Game::Event::LuaEventHandler::vf99 */
uint F_006fa820(unsigned int gen_a0)
{
  GEN_ENTER(0x6fa820u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_00a03710(*(undefined * PTR32 *)(this + 0x1d0));
  if (uVar2 != 1) {
    bVar1 = F_00a02270(uVar2);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar2;
    }
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  return 1;
}

/* ref: Client::Game::Event::LuaEventHandler::vf100 */
uint F_006fa860(unsigned int gen_a0)
{
  GEN_ENTER(0x6fa860u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_00a03710(*(undefined * PTR32 *)(this + 0x1d0));
  if (uVar2 != 1) {
    bVar1 = F_00a02270(uVar2);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar2;
    }
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  return 1;
}

/* ref: Client::Game::Event::LuaEventHandler::vf101 */
uint F_006fa8a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6fa8a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_00a03710(*(undefined * PTR32 *)(this + 0x1d0));
  if (uVar2 != 1) {
    bVar1 = F_00a02270(uVar2);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar2;
    }
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  return 1;
}

/* ref: Client::Game::Event::LuaEventHandler::vf102 */
uint F_006fa8e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6fa8e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_00a03710(*(undefined * PTR32 *)(this + 0x1d0));
  if (uVar2 != 1) {
    bVar1 = F_00a02270(uVar2);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar2;
    }
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  return 1;
}

/* ref: Client::Game::Event::LuaEventHandler::vf103 */
uint F_006fa920(unsigned int gen_a0)
{
  GEN_ENTER(0x6fa920u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_00a03710(*(undefined * PTR32 *)(this + 0x1d0));
  if (uVar2 != 1) {
    bVar1 = F_00a02270(uVar2);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar2;
    }
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  return 1;
}

/* ref: Client::Game::Event::LuaEventHandler::vf108 */
uint F_006fa960(unsigned int gen_a0)
{
  GEN_ENTER(0x6fa960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_00a03710(*(undefined * PTR32 *)(this + 0x1d0));
  if (uVar2 != 1) {
    bVar1 = F_00a02270(uVar2);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar2;
    }
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  return 1;
}

/* ref: Client::Game::Event::LuaEventHandler::vf109 */
uint F_006fa9a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6fa9a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_00a03710(*(undefined * PTR32 *)(this + 0x1d0));
  if (uVar2 != 1) {
    bVar1 = F_00a02270(uVar2);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar2;
    }
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  return 1;
}

/* ref: Client::Game::Event::LuaEventHandler::vf40 */
unsigned int F_006fa9e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6fa9e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  uint uVar2;
  
  if ((char)param_1 != '\0') {
    uVar2 = F_0042a990(param_2);
    uVar2 = F_00a03970(*(undefined * PTR32 *)(this + 0x1d0),uVar2);
    if (uVar2 != 1) {
      bVar1 = F_00a02270(uVar2);
      if (bVar1 != 0) {
        *(uint *)(this + 0x60) = uVar2;
      }
      F_006f4000(this);
    }
  }
  return 0;
}

/* ref: Client::Game::Event::LuaEventHandler::vf104 */
uint F_006faa30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6faa30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_00a03710(*(undefined * PTR32 *)(this + 0x1d0));
  uVar3 = 1;
  if (uVar2 != 1) {
    bVar1 = F_00a02270(uVar2);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar2;
    }
    uVar3 = F_006f4000(this);
  }
  return uVar3;
}

/* ref: Client::Game::Event::LuaEventHandler::vf105 */
uint F_006faa70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6faa70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_00a03710(*(undefined * PTR32 *)(this + 0x1d0));
  uVar3 = 1;
  if (uVar2 != 1) {
    bVar1 = F_00a02270(uVar2);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar2;
    }
    uVar3 = F_006f4000(this);
  }
  return uVar3;
}

/* ref: Client::Game::Event::LuaEventHandler::vf106 */
uint F_006faab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6faab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_00a03850(*(undefined * PTR32 *)(this + 0x1d0),param_1);
  uVar3 = 1;
  if (uVar2 != 1) {
    bVar1 = F_00a02270(uVar2);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar2;
    }
    uVar3 = F_006f4000(this);
  }
  return uVar3;
}

/* ref: Client::Game::Event::LuaEventHandler::vf107 */
uint F_006faaf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6faaf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_00a038b0(*(undefined * PTR32 *)(this + 0x1d0),param_1);
  uVar3 = 1;
  if (uVar2 != 1) {
    bVar1 = F_00a02270(uVar2);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar2;
    }
    uVar3 = F_006f4000(this);
  }
  return uVar3;
}

/* ref: Client::Game::Event::LuaEventHandler::vf27 */
uint F_006fab30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6fab30u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  undefined1 LVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = (*(uint *)&gen_args[2]) & 0xff;
  if ((uVar3 == 1) || (uVar3 == 2)) {
    (*(uint *)&gen_args[2]) = CONCAT31(GEN_PIECE(&(*(uint *)&gen_args[2]), 1, 3),*(*(int * PTR32 *)&gen_args[3]) == 1);
    uVar3 = F_00a03850(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1d0))),(*(uint *)&gen_args[2]));
  }
  else {
    if (uVar3 != 3) {
      if (*((short *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x54))) == -1) {
        return 0xffff;
      }
      LVar1 = (*(undefined * PTR32 *)&gen_args[0])[0x5c];
      if (((byte)LVar1 & 4) != 0) {
        return CONCAT31(0xff,LVar1);
      }
      (*(undefined * PTR32 *)&gen_args[0])[0x5c] = (undefined1)((byte)LVar1 | 4);
      uVar3 = F_006f15b0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))),0,0);
      return uVar3;
    }
    uVar3 = F_00a03710(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1d0))));
  }
  uVar4 = 1;
  if (uVar3 != 1) {
    bVar2 = F_00a02270(uVar3);
    if (bVar2 != 0) {
      *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x60))) = uVar3;
    }
    uVar4 = F_006f4000((*(undefined * PTR32 *)&gen_args[0]));
  }
  return uVar4;
}

/* ref: Client::Game::Event::LuaEventHandler::vf26 */
uint F_006fabc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6fabc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined1 LVar1;
  uint uVar2;
  
  uVar2 = 0xffff;
  if (*(short *)(this + 0x54) != -1) {
    LVar1 = this[0x5c];
    uVar2 = CONCAT31(0xff,LVar1);
    if (((byte)LVar1 & 4) == 0) {
      this[0x5c] = (undefined1)((byte)LVar1 | 4);
      uVar2 = F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
    }
  }
  return uVar2;
}

/* ref: Client::Game::Event::AetheryteEventHandler::vf56 */
uint F_006fabf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6fabf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 == 0xfffffffe) {
    if (*(int *)(this + 0x60) == 0) {
      uVar3 = F_00a038b0(*(undefined * PTR32 *)(this + 0x1d0),0xffffffff);
      uVar2 = 1;
      if (uVar3 != 1) {
        bVar1 = F_00a02270(uVar3);
        if (bVar1 != 0) {
          *(uint *)(this + 0x60) = uVar3;
        }
        uVar2 = F_006f4000(this);
      }
      return uVar2;
    }
  }
  else {
    if (param_2 == 1) {
      uVar2 = param_1;
      if ((-1 < (int)param_1) && (*((char *)GEN_TOP((*(int *)(this + 0x2d4) + 0x32))) == '\0')) {
        uVar2 = param_1 + 1;
      }
      uVar2 = F_006f9c10((undefined *)this,uVar2,1);
      return uVar2;
    }
    if (param_2 != 3) {
      uVar2 = F_006f9c10((undefined *)this,param_1,param_2);
      return uVar2;
    }
    uVar2 = param_1;
    if (-1 < (int)param_1) {
      if (param_1 < (uint)(*(int *)(this + 0x2ec) - *(int *)(this + 0x2e8))) {
        uVar2 = (uint)*((byte *)GEN_TOP((param_1 + *(int *)(this + 0x2e8))));
      }
      else {
        uVar2 = 0xffffffff;
      }
    }
    if (*(int *)(this + 0x60) == 0) {
      uVar2 = F_00757760(this,uVar2);
      return uVar2;
    }
  }
  uVar2 = F_006f4000(this);
  return uVar2;
}

/* ref: FUN_006facc0 */
byte F_006facc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6facc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  if (((*(byte *)((int)this + 0x5c) & 1) != 0) && (param_1 != -2)) {
    return 0;
  }
  if (*(int *)((int)this + 0x60) != 0) {
    F_006f4000(this);
    return 1;
  }
  if (param_1 == 6) {
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,REFG(undefined4, 0x1324110),0);
    return 1;
  }
  uVar3 = F_00a03710(*(undefined * PTR32 *)((int)this + 0x1d0));
  if (uVar3 != 1) {
    bVar1 = F_00a02270(uVar3);
    if (bVar1 != 0) {
      *(uint *)((int)this + 0x60) = uVar3;
    }
    F_006f4000(this);
  }
  return 1;
}

/* ref: FUN_006fad60 */
byte F_006fad60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6fad60u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  byte bVar1;
  uint uVar2;
  
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x60))) != 0) {
    F_006f4000((*(undefined * PTR32 *)&gen_args[0]));
    return 1;
  }
  if ((*(uint *)&gen_args[1]) == 0) {
    (*(uint *)&gen_args[1]) = (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x574))) + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5a4))) * 4)));
    if ((*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) & 1) == 0) {
      F_00a50880(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))),(uint)*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54))),2,&(*(uint *)&gen_args[1]),1);
      *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) = *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) | 1;
      return 1;
    }
  }
  else {
    uVar2 = F_00a03ae0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1d0))),0,0,0);
    if (uVar2 != 1) {
      bVar1 = F_00a02270(uVar2);
      if (bVar1 != 0) {
        *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x60))) = uVar2;
      }
      F_006f4000((*(undefined * PTR32 *)&gen_args[0]));
    }
  }
  return 1;
}

/* ref: FUN_006fae00 */
byte F_006fae00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6fae00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  if ((*param_1 & 0xf) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 4);
    if (iVar3 == 0x80) {
      REFG(undefined1, 0x1324138) = 1;
      if (REFG(char, 0x1324139) == '\0') {
        REFG(undefined1, 0x1324138) = 1;
        return 0;
      }
      F_006ce950(this);
      return 0;
    }
  }
  if (*(short *)((int)this + 0x54) != -1) {
    if (iVar3 == -2) {
      F_00a4a760(&REFG(undefined, 0x14a7360),0x1a,1);
      F_006f4770(this,1,0);
      return 1;
    }
    if (iVar3 == -1) {
      F_00a4a760(&REFG(undefined, 0x14a7360),0x1a,1);
      F_006f4770(this,0,0);
      return 1;
    }
    piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1);
    *(char *)(uVar2 + 0x2db64) = (char)iVar3;
    if ((*(byte *)((int)this + 0x14c) & 1) == 0) {
      F_006be2c0(this,1);
      F_006f4770(this,2,iVar3);
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_006faee0 */
byte F_006faee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6faee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  if (*(short *)((int)this + 0x54) == -1) {
    return 0;
  }
  F_006be2c0(this,1);
  if (*(short *)((int)this + 0x54) != -1) {
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = (undefined2)param_1;
    (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)((int)this + 0x138);
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 2)) = 3;
    (*(undefined4 *)(gen_frame + 0x8)) = CONCAT22(3,(undefined2)param_1);
    if ((*(byte *)((int)this + 0x5c) & 4) == 0) {
      *(byte *)((int)this + 0x5c) = *(byte *)((int)this + 0x5c) | 4;
      F_006f15b0(*(undefined * PTR32 *)((int)this + 4),&(*(undefined4 *)(gen_frame + 0x4)),2);
    }
  }
  return 1;
}

/* ref: Client::Game::Event::GatheringEventHandler::vf83 */
uint F_006faf60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6faf60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined1 GVar1;
  int * piVar2;
  uint uVar3;
  
  if ((REFG(undefined4, 0x132412c) == this) && (REFG(int, 0x1324130) != 0)) {
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    if (piVar2 != (int *)0x0) {
      piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
      uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,REFG(int, 0x1324130),0);
      return uVar3;
    }
  }
  F_00a4a760(&REFG(undefined, 0x14a7360),0x1a,1);
  uVar3 = 0xffff;
  if (*(short *)(this + 0x54) != -1) {
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    GVar1 = this[0x5c];
    uVar3 = (uint)(byte)GVar1;
    (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(this + 0x138);
    (*(undefined4 *)(gen_frame + 0x8)) = 0x10000;
    if (((byte)GVar1 & 4) == 0) {
      this[0x5c] = (undefined1)((byte)GVar1 | 4);
      uVar3 = F_006f15b0(*(undefined * PTR32 *)(this + 4),&(*(undefined4 *)(gen_frame + 0x4)),2);
    }
  }
  return uVar3;
}

/* ref: FUN_006fb010 */
uint F_006fb010(unsigned int gen_a0)
{
  GEN_ENTER(0x6fb010u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x220];
  byte bVar1;
  int * piVar2;
  uint uVar3;
  undefined * pvVar4;
  undefined3 extraout_var = 0;
  undefined4 * puVar5;
  int iVar6;
  uint * this_00;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined * PTR32 * ppuVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  (*(uint *)(gen_frame + 0x218)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x21c);
  *(byte *)((int)this + 0x14c) = *(byte *)((int)this + 0x14c) & 0xfe;
  REFG(undefined1, 0x1324138) = 0;
  REFG(undefined4, 0x132412c) = this;
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  if (piVar2 == (int *)0x0) {
    uVar3 = 0xffff;
    if (*(short *)((int)this + 0x54) != -1) {
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      bVar1 = *(byte *)((int)this + 0x5c);
      uVar3 = (uint)bVar1;
      (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)((int)this + 0x138);
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if ((bVar1 & 4) == 0) {
        *(byte *)((int)this + 0x5c) = bVar1 | 4;
        uVar3 = F_006f15b0(*(undefined * PTR32 *)((int)this + 4),&(*(undefined4 *)(gen_frame + 0x0)),2);
        F_00c47745((*(uint *)(gen_frame + 0x218)) ^ (uint)(uint)(gen_frame + 0x21c));
        return uVar3;
      }
    }
  }
  else {
    pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
    bVar1 = F_007c9500(pvVar4);
    uVar3 = CONCAT31(extraout_var,bVar1);
    if (bVar1 == 0) {
      puVar5 = ((undefined4 *)(gen_frame + 0x8));
      iVar6 = 0x41;
      do {
        *puVar5 = 0;
        puVar5 = puVar5 + 2;
        iVar6 = iVar6 + -1;
      } while (-1 < iVar6);
      uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2);
      bVar1 = *(byte *)(uVar3 + 0x2db64);
      F_005a2710(((undefined1 *)(gen_frame + 0x208)),4);
      (*(uint *)(gen_frame + 0x20c)) = (uint)bVar1;
      F_006be3d0(this,((undefined4 *)(gen_frame + 0x8)));
      uVar12 = 4;
      uVar11 = 0;
      uVar10 = 0;
      ppuVar9 = &REFG(undefined * PTR32, 0x1324128);
      puVar5 = ((undefined4 *)(gen_frame + 0x8));
      uVar8 = 0x42;
      uVar7 = 0x17;
      pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
      REFG(undefined4, 0x1324130) = F_008668b0(pvVar4,uVar7,uVar8,puVar5,ppuVar9,uVar10,uVar11,uVar12);
      this_00 = &(*(uint *)(gen_frame + 0x218));
      iVar6 = 0x41;
      do {
        this_00 = this_00 + -2;
        uVar3 = F_005a2670(this_00);
        iVar6 = iVar6 + -1;
      } while (-1 < iVar6);
    }
    else if (*(short *)((int)this + 0x54) != -1) {
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      bVar1 = *(byte *)((int)this + 0x5c);
      uVar3 = (uint)bVar1;
      (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)((int)this + 0x138);
      if ((bVar1 & 4) == 0) {
        *(byte *)((int)this + 0x5c) = bVar1 | 4;
        uVar3 = F_006f15b0(*(undefined * PTR32 *)((int)this + 4),&(*(undefined4 *)(gen_frame + 0x0)),2);
        F_00c47745((*(uint *)(gen_frame + 0x218)) ^ (uint)(uint)(gen_frame + 0x21c));
        return uVar3;
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x218)) ^ (uint)(uint)(gen_frame + 0x21c));
  return uVar3;
}

/* ref: Client::Game::Event::CustomTalkEventHandler::vf26 */
uint F_006fb1c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6fb1c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined1 CVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  if ((char)param_2 == '5') {
    uVar4 = F_00a03970(*(undefined * PTR32 *)(this + 0x1d0),param_3);
    uVar3 = 1;
    if (uVar4 != 1) {
      bVar2 = F_00a02270(uVar4);
      if (bVar2 != 0) {
        *(uint *)(this + 0x60) = uVar4;
      }
      uVar3 = F_006f4000(this);
    }
  }
  else {
    uVar3 = 0xffff;
    if (*(short *)(this + 0x54) != -1) {
      CVar1 = this[0x5c];
      uVar3 = CONCAT31(0xff,CVar1);
      if (((byte)CVar1 & 4) == 0) {
        this[0x5c] = (undefined1)((byte)CVar1 | 4);
        uVar3 = F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
        return uVar3;
      }
    }
  }
  return uVar3;
}

/* ref: FUN_006fb230 */
uint F_006fb230(unsigned int gen_a0)
{
  GEN_ENTER(0x6fb230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xf0];
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined * pvVar4;
  
  pvVar4 = REFG(undefined4, 0x1379694);
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xec);
  (*(uint *)(gen_frame + 0xe8)) = uVar3;
  if (REFG(undefined4, 0x1379694) != (undefined *)0x0) {
    F_00aa2900(REFG(undefined4, 0x1379694),0);
    F_00aa80c0(pvVar4,1,0,0);
    uVar3 = F_00aa80c0(pvVar4,2,0,0);
  }
  bVar1 = *(byte *)((int)this + 0x184);
  if (((bVar1 & 8) == 0) && (uVar3 = 0xffff, *(short *)((int)this + 0x54) != -1)) {
    pvVar4 = F_00c48350(&(*(undefined4 *)(gen_frame + 0x8)),0,0xe0);
    bVar2 = *(byte *)((int)this + 0x5c);
    uVar3 = CONCAT31((int3)((uint)((int)(uintptr_t)pvVar4) >> 8),bVar2);
    (*(undefined4 *)(gen_frame + 0x8)) = 7;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    *(byte *)((int)this + 0x184) = bVar1 | 8;
    if ((bVar2 & 4) == 0) {
      *(byte *)((int)this + 0x5c) = bVar2 | 4;
      uVar3 = F_006f15b0(*(undefined * PTR32 *)((int)this + 4),&(*(undefined4 *)(gen_frame + 0x8)),4);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xe8)) ^ (uint)(uint)(gen_frame + 0xec));
  return uVar3;
}

/* ref: FUN_006fb300 */
uint F_006fb300(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6fb300u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xf0];
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined * pvVar4;
  
  (*(uint *)(gen_frame + 0xe8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xec);
  if (param_1 == 2) {
    bVar1 = *(byte *)((int)this + 0x184);
    uVar3 = 0;
    if (((bVar1 & 8) != 0) || (*(short *)((int)this + 0x54) == -1)) goto LAB_006fb420;
    pvVar4 = F_00c48350(&(*(undefined4 *)(gen_frame + 0x8)),0,0xe0);
    bVar2 = *(byte *)((int)this + 0x5c);
    uVar3 = CONCAT31((int3)((uint)((int)(uintptr_t)pvVar4) >> 8),bVar2);
    (*(undefined4 *)(gen_frame + 0x8)) = 5;
    (*(undefined4 *)(gen_frame + 0xc)) = param_2;
    (*(undefined4 *)(gen_frame + 0x10)) = param_3;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    *(byte *)((int)this + 0x184) = bVar1 | 8;
    if ((bVar2 & 4) != 0) goto LAB_006fb420;
    *(byte *)((int)this + 0x5c) = bVar2 | 4;
  }
  else {
    uVar3 = param_1 - 3;
    if (((uVar3 != 0) || (bVar1 = *(byte *)((int)this + 0x184), (bVar1 & 8) != 0)) ||
       (uVar3 = 0xffff, *(short *)((int)this + 0x54) == -1)) goto LAB_006fb420;
    F_00c48350(&(*(undefined4 *)(gen_frame + 0x8)),0,0xe0);
    (*(undefined4 *)(gen_frame + 0x10)) = param_3;
    bVar2 = *(byte *)((int)this + 0x5c);
    uVar3 = CONCAT31((int3)((uint)param_3 >> 8),bVar2);
    (*(undefined4 *)(gen_frame + 0x8)) = 6;
    (*(undefined4 *)(gen_frame + 0xc)) = param_2;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    *(byte *)((int)this + 0x184) = bVar1 | 8;
    if ((bVar2 & 4) != 0) goto LAB_006fb420;
    *(byte *)((int)this + 0x5c) = bVar2 | 4;
  }
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = param_3;
  (*(undefined4 *)(gen_frame + 0xc)) = param_2;
  uVar3 = F_006f15b0(*(undefined * PTR32 *)((int)this + 4),&(*(undefined4 *)(gen_frame + 0x8)),4);
LAB_006fb420: ;
  F_00c47745((*(uint *)(gen_frame + 0xe8)) ^ (uint)(uint)(gen_frame + 0xec));
  return uVar3;
}

/* ref: FUN_006fb440 */
uint F_006fb440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fb440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xf0];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xec);
  (*(uint *)(gen_frame + 0xe8)) = uVar2;
  uVar3 = uVar2;
  if (((*(byte *)((int)this + 0x184) & 8) == 0) &&
     (uVar3 = 0xffff, *(short *)((int)this + 0x54) != -1)) {
    uVar3 = F_00a4a760(&REFG(undefined, 0x14a7360),0x18,1);
    *(byte *)((int)this + 0x184) = *(byte *)((int)this + 0x184) | 1;
    bVar1 = *(byte *)((int)this + 0x184);
    *(undefined4 *)((int)this + 0x118) = param_1;
    if (((bVar1 & 8) == 0) && (*(short *)((int)this + 0x54) != -1)) {
      F_00c48350(&(*(undefined4 *)(gen_frame + 0x8)),0,0xe0);
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      uVar3 = 0;
      (*(undefined4 *)(gen_frame + 0x8)) = 10;
      (*(undefined4 *)(gen_frame + 0xc)) = param_1;
      *(byte *)((int)this + 0x184) = bVar1 | 8;
      if ((*(byte *)((int)this + 0x5c) & 4) == 0) {
        *(byte *)((int)this + 0x5c) = *(byte *)((int)this + 0x5c) | 4;
        uVar3 = F_006f15b0(*(undefined * PTR32 *)((int)this + 4),&(*(undefined4 *)(gen_frame + 0x8)),4);
      }
    }
    F_00c47745((*(uint *)(gen_frame + 0xe8)) ^ (uint)(uint)(gen_frame + 0xec));
    return CONCAT31((int3)(uVar3 >> 8),1);
  }
  F_00c47745(uVar2 ^ (uint)(uint)(gen_frame + 0xec));
  return uVar3 & 0xffffff00;
}

/* ref: FUN_006fb530 */
uint F_006fb530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fb530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xf0];
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xec);
  (*(uint *)(gen_frame + 0xe8)) = uVar3;
  uVar4 = uVar3;
  if (((*(byte *)((int)this + 0x184) & 8) == 0) &&
     (uVar4 = 0xffff, *(short *)((int)this + 0x54) != -1)) {
    uVar4 = F_00a4a760(&REFG(undefined, 0x14a7360),0x18,1);
    *(byte *)((int)this + 0x184) = *(byte *)((int)this + 0x184) | 1;
    bVar1 = *(byte *)((int)this + 0x184);
    if (((bVar1 & 8) == 0) && (*(short *)((int)this + 0x54) != -1)) {
      F_00c48350(&(*(undefined4 *)(gen_frame + 0x8)),0,0xe0);
      (*(undefined4 *)(gen_frame + 0xc)) = param_1;
      bVar2 = *(byte *)((int)this + 0x5c);
      uVar4 = CONCAT31((int3)((uint)param_1 >> 8),bVar2);
      (*(undefined4 *)(gen_frame + 0x8)) = 9;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      *(byte *)((int)this + 0x184) = bVar1 | 8;
      if ((bVar2 & 4) == 0) {
        *(byte *)((int)this + 0x5c) = bVar2 | 4;
        uVar4 = F_006f15b0(*(undefined * PTR32 *)((int)this + 4),&(*(undefined4 *)(gen_frame + 0x8)),4);
      }
    }
    F_00c47745((*(uint *)(gen_frame + 0xe8)) ^ (uint)(uint)(gen_frame + 0xec));
    return CONCAT31((int3)(uVar4 >> 8),1);
  }
  F_00c47745(uVar3 ^ (uint)(uint)(gen_frame + 0xec));
  return uVar4 & 0xffffff00;
}

/* ref: FUN_006fb610 */
uint F_006fb610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6fb610u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xf0];
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  undefined * pvVar5;
  undefined4 uVar6;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xec);
  (*(uint *)(gen_frame + 0xe8)) = uVar3;
  if (((char)param_1 != '\0') || ((char)param_3 != '\0')) {
    piVar4 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar3 = 0;
    if (piVar4 != (int *)0x0) {
      uVar6 = 0x14;
      uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x48))(piVar4);
      piVar4 = (int *)F_00763050(uVar3,uVar6);
      uVar3 = 0;
      if ((piVar4 != (int *)0x0) &&
         (uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x10))(piVar4), (char)uVar3 != '\0')) {
        uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4);
        bVar1 = *(byte *)((int)this + 0x184);
        if (((bVar1 & 8) == 0) && (*(short *)((int)this + 0x54) != -1)) {
          pvVar5 = F_00c48350(&(*(undefined4 *)(gen_frame + 0x8)),0,0xe0);
          bVar2 = *(byte *)((int)this + 0x5c);
          uVar3 = CONCAT31((int3)((uint)((int)(uintptr_t)pvVar5) >> 8),bVar2);
          (*(undefined4 *)(gen_frame + 0x8)) = 8;
          (*(undefined4 *)(gen_frame + 0xc)) = 0;
          (*(undefined4 *)(gen_frame + 0x10)) = 0;
          (*(undefined4 *)(gen_frame + 0x14)) = 0;
          *(byte *)((int)this + 0x184) = bVar1 | 8;
          if ((bVar2 & 4) == 0) {
            *(byte *)((int)this + 0x5c) = bVar2 | 4;
            uVar3 = F_006f15b0(*(undefined * PTR32 *)((int)this + 4),&(*(undefined4 *)(gen_frame + 0x8)),4);
          }
        }
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xe8)) ^ (uint)(uint)(gen_frame + 0xec));
  return uVar3;
}

/* ref: Client::Game::Event::CraftEventHandler::vf41 */
uint F_006fb710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6fb710u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xf0];
  undefined1 CVar1;
  undefined1 CVar2;
  uint uVar3;
  undefined * pvVar4;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xec);
  (*(uint *)(gen_frame + 0xe8)) = uVar3;
  if ((param_3 == this) &&
     (((uVar3 = 0, param_2 == 0xee || (uVar3 = param_2 - 0xf5, uVar3 == 0)) &&
      (*(char *)((int)REFG(undefined4, 0x1379694) + 0x188) == '\x05')))) {
    uVar3 = F_00aaa5b0(REFG(undefined4, 0x1379694),1);
    if (((byte)this[0x184] & 2) != 0) {
      uVar3 = F_006befa0();
      this[0x184] = (undefined1)((byte)this[0x184] & 0xfd);
    }
    CVar1 = this[0x184];
    if ((((byte)CVar1 & 8) == 0) && (uVar3 = 0xffff, *(short *)(this + 0x54) != -1)) {
      pvVar4 = F_00c48350(&(*(undefined4 *)(gen_frame + 0x8)),0,0xe0);
      CVar2 = this[0x5c];
      uVar3 = CONCAT31((int3)((uint)((int)(uintptr_t)pvVar4) >> 8),CVar2);
      (*(undefined4 *)(gen_frame + 0x8)) = 8;
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      this[0x184] = (undefined1)((byte)CVar1 | 8);
      if (((byte)CVar2 & 4) == 0) {
        this[0x5c] = (undefined1)((byte)CVar2 | 4);
        uVar3 = F_006f15b0(*(undefined * PTR32 *)(this + 4),&(*(undefined4 *)(gen_frame + 0x8)),4);
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xe8)) ^ (uint)(uint)(gen_frame + 0xec));
  return uVar3;
}

/* ref: Client::Game::Event::CraftEventHandler::vf83 */
uint F_006fb800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fb800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xf0];
  undefined1 CVar1;
  undefined1 CVar2;
  uint uVar3;
  int * piVar4;
  undefined * pvVar5;
  bool bVar6;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xec);
  (*(uint *)(gen_frame + 0xe8)) = uVar3;
  bVar6 = REFG(int, 0x1324144) != 0;
  if (bVar6) {
    piVar4 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x1c))(piVar4)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x54))(piVar4,REFG(int, 0x1324144),0);
  }
  if (REFG(int, 0x1324154) == 0) {
    uVar3 = uVar3 & 0xffffff00;
  }
  else {
    piVar4 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar3 = 0;
    if (piVar4 != (int *)0x0) {
      piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x1c))(piVar4)));
      uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x54))(piVar4,REFG(int, 0x1324154),0);
    }
    uVar3 = CONCAT31((int3)(uVar3 >> 8),1);
  }
  if ((!bVar6) && ((char)uVar3 == '\0')) {
    this[0x184] = (undefined1)((byte)this[0x184] & 0xf7);
    CVar1 = this[0x184];
    if ((((byte)CVar1 & 8) == 0) && (uVar3 = 0xffff, *(short *)(this + 0x54) != -1)) {
      pvVar5 = F_00c48350(&(*(undefined4 *)(gen_frame + 0x8)),0,0xe0);
      CVar2 = this[0x5c];
      uVar3 = CONCAT31((int3)((uint)((int)(uintptr_t)pvVar5) >> 8),CVar2);
      (*(undefined4 *)(gen_frame + 0x8)) = 8;
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      this[0x184] = (undefined1)((byte)CVar1 | 8);
      if (((byte)CVar2 & 4) == 0) {
        this[0x5c] = (undefined1)((byte)CVar2 | 4);
        uVar3 = F_006f15b0(*(undefined * PTR32 *)(this + 4),&(*(undefined4 *)(gen_frame + 0x8)),4);
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xe8)) ^ (uint)(uint)(gen_frame + 0xec));
  return uVar3;
}

/* ref: FUN_006fb930 */
byte F_006fb930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fb930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  short * psVar2;
  int * piVar3;
  undefined * this_00;
  int iVar4;
  byte bVar5;
  undefined4 uVar6;
  
  bVar5 = 0;
  uVar1 = F_00a4ffd0();
  psVar2 = (short *)(uVar1 + 0x13b8);
  iVar4 = 0x1e;
  do {
    if (*psVar2 != 0) {
      bVar5 = bVar5 + 1;
    }
    psVar2 = psVar2 + 8;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if (*(int *)((int)this + 0x60) != 0) {
    F_006f4000(this);
    return 1;
  }
  if (bVar5 < 0x1e) {
    uVar1 = (uint)(param_1 == 3);
  }
  else {
    if (param_1 == 3) {
      piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      uVar6 = 0x6a0;
      this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3)));
      F_0046a630(this_00,uVar6);
    }
    uVar1 = 0;
  }
  uVar1 = F_00a03850(*(undefined * PTR32 *)((int)this + 0x1d0),uVar1);
  if (uVar1 != 1) {
    bVar5 = F_00a02270(uVar1);
    if (bVar5 != 0) {
      *(uint *)((int)this + 0x60) = uVar1;
    }
    F_006f4000(this);
  }
  return 1;
}

/* ref: FUN_006fb9e0 */
uint F_006fb9e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6fb9e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  byte bVar5;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  *(byte *)((int)this + 800) = *(byte *)((int)this + 800) & 0xdf;
  if (*(int *)((int)this + 0x60) != 0) {
    uVar2 = F_006f4000(this);
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
    return CONCAT31((int3)(uVar2 >> 8),1);
  }
  F_00a6a680(&REFG(undefined, 0x14afd38),param_2);
  uVar2 = F_00a6a660(&REFG(undefined, 0x14afd38));
  (*(undefined4 *)(gen_frame + 0x10)) = param_2;
  if (param_1 == 0) {
    uVar3 = 0;
    if (*(byte *)(uVar2 + 0x158) != 0) {
      (*(uint *)(gen_frame + 0xc)) = (uint)*(byte *)(uVar2 + 0x158);
      piVar4 = (int *)(uVar2 + 0x15c);
      do {
        iVar1 = *piVar4;
        if (((iVar1 == 2) || (iVar1 == 4)) || (iVar1 == 6)) {
          ((int *)(gen_frame + 0x14))[(int)(uVar3)] = piVar4[0x18];
          uVar3 = (uint)(byte)((char)uVar3 + 1);
        }
        piVar4 = piVar4 + 0x1a;
        (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) - 1;
      } while ((*(uint *)(gen_frame + 0xc)) != 0);
    }
    bVar5 = (byte)uVar3;
    if (*(int *)(uVar2 + 0x570) != -1) {
      ((int *)(gen_frame + 0x14))[(int)(uVar3)] = *(int *)(uVar2 + 0x56c);
      bVar5 = bVar5 + 1;
    }
    if (bVar5 == 0) {
      *(byte *)((int)this + 800) = *(byte *)((int)this + 800) | 0x20;
      uVar3 = F_00a03ae0(*(undefined * PTR32 *)((int)this + 0x1d0),1,&(*(undefined4 *)(gen_frame + 0x10)),1);
      uVar2 = 0;
      if (uVar3 != 1) {
        bVar5 = F_00a02270(uVar3);
        if (bVar5 != 0) {
          *(uint *)((int)this + 0x60) = uVar3;
        }
        uVar2 = F_006f4000(this);
      }
    }
    else {
      uVar2 = F_006cd8f0(this,((int *)(gen_frame + 0x14)),(uint)bVar5,0);
    }
  }
  else {
    uVar3 = F_00a03ae0(*(undefined * PTR32 *)((int)this + 0x1d0),0,&(*(undefined4 *)(gen_frame + 0x10)),1);
    uVar2 = 0;
    if (uVar3 != 1) {
      bVar5 = F_00a02270(uVar3);
      if (bVar5 != 0) {
        *(uint *)((int)this + 0x60) = uVar3;
      }
      uVar2 = F_006f4000(this);
      F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
      return CONCAT31((int3)(uVar2 >> 8),1);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return CONCAT31((int3)(uVar2 >> 8),1);
}

/* ref: Client::Game::Event::QuestEventHandler::vf34 */
uint F_006fbb50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6fbb50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  undefined4 * puVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  undefined * this_00;
  uint uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined1 * puVar8;
  undefined4 uVar9;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  uVar3 = F_00a6a660(&REFG(undefined, 0x14afd38));
  (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(uVar3 + 0x56c);
  uVar3 = F_006bfb60(uVar3,1);
  if ((char)uVar3 == '\0') {
    uVar7 = 0;
  }
  else {
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = this[0x44];
    (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),this[0x44]);
    bVar2 = F_006dc7f0(this,REFG(undefined4, 0x1379694),*(undefined4 *)(this + 0x50),(*(undefined4 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x8)));
    if (bVar2 == 0) {
      piVar4 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      F_0042e170(((undefined1 *)(gen_frame + 0x64)),&REFG(undefined, 0x10b6a60));
      uVar9 = 0;
      puVar8 = ((undefined1 *)(gen_frame + 0x64));
      uVar3 = F_0042cc20(((undefined1 *)(gen_frame + 0x10)),&REFG(undefined, 0x10b3a5e),REFG(undefined4, 0x108cc50));
      uVar7 = 0x3c;
      this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
      F_00459b00(this_00,uVar7,uVar3,puVar8,uVar9);
      F_0042c880(((undefined1 *)(gen_frame + 0x10)));
      uVar3 = F_00a03ae0(*(undefined * PTR32 *)(this + 0x1d0),0,&(*(undefined4 *)(gen_frame + 0xc)),1);
      if (uVar3 != 1) {
        bVar2 = F_00a02270(uVar3);
        if (bVar2 != 0) {
          *(uint *)(this + 0x60) = uVar3;
        }
        F_006f4000(this);
      }
      uVar6 = F_0042c880(((undefined1 *)(gen_frame + 0x64)));
      uVar3 = (uint)uVar6;
      goto LAB_006fbca0;
    }
    this[800] = (undefined1)((byte)this[800] | 0x20);
    uVar7 = 1;
  }
  uVar5 = F_00a03ae0(*(undefined * PTR32 *)(this + 0x1d0),uVar7,&(*(undefined4 *)(gen_frame + 0xc)),1);
  uVar3 = 1;
  if (uVar5 != 1) {
    bVar2 = F_00a02270(uVar5);
    if (bVar2 != 0) {
      *(uint *)(this + 0x60) = uVar5;
    }
    uVar3 = F_006f4000(this);
  }
LAB_006fbca0: ;
  puVar1 = *(undefined4 * PTR32 *)(this + 100);
  if (puVar1 != (undefined4 *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)(this + 100) = 0;
  }
  *(undefined4 *)(this + 0x68) = 0;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return uVar3;
}

/* ref: Client::Game::Event::QuestEventHandler::vf55 */
uint F_006fbcd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6fbcd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x60) != 0) {
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  uVar3 = F_00a03850(*(undefined * PTR32 *)(this + 0x1d0),(uint)(param_1 == 0));
  uVar2 = 1;
  if (uVar3 != 1) {
    bVar1 = F_00a02270(uVar3);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar3;
    }
    uVar2 = F_006f4000(this);
  }
  return uVar2;
}

/* ref: FUN_006fbd30 */
byte F_006fbd30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fbd30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x400];
  
  if ((*(int *)((int)this + 0x60) == 0) && (*(short *)((int)this + 0x54) == 0x28)) {
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    F_00c48350(((undefined1 *)(gen_frame + 0x4)),0,0x3f8);
    if (param_1 == 0) {
      if (*(int *)((int)this + 0x1be0) == 1) {
        F_006f5080(this,*(undefined4 *)((int)this + 0x1bcc));
        REFG(undefined4, 0x13241a4) = 0;
        return 1;
      }
      if (*(int *)((int)this + 0x1be0) == 2) {
        F_006f5130(this,*(undefined4 *)((int)this + 0x1bcc));
        REFG(undefined4, 0x13241a4) = 0;
        return 1;
      }
      F_006f4d20(this,&(*(undefined4 *)(gen_frame + 0x0)),0);
    }
  }
  REFG(undefined4, 0x13241a4) = 0;
  return 1;
}

/* ref: FUN_006fbde0 */
uint F_006fbde0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fbde0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_006f5080(this,param_1);
  return uVar1;
}

/* ref: FUN_006fbdf0 */
byte F_006fbdf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fbdf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * pvVar1;
  
  F_00a3d7c0(&REFG(undefined, 0x14a4230),*(undefined4 *)((int)this + 0x104),(uint)*(ushort *)((int)this + 0x100)
              );
  pvVar1 = *(undefined * PTR32 *)&REFG(undefined, 0x1324190);
  if (((*(int *)((int)this + 0x60) == 0) && (*(short *)((int)this + 0x54) == 0x28)) &&
     (pvVar1 = this, param_1 == 0)) {
    if (*(int *)((int)this + 0x1be0) == 1) {
      if (*(char *)((int)this + 0x1bf3) == '\0') {
        F_006f5080(this,*(undefined4 *)((int)this + 0x1bcc));
        REFG(undefined4, 0x13241c4) = 0;
        return 1;
      }
      F_006f5200(this);
      REFG(undefined4, 0x13241c4) = 0;
      return 1;
    }
    pvVar1 = this;
    if (*(int *)((int)this + 0x1be0) == 2) {
      F_006f5130(this,*(undefined4 *)((int)this + 0x1bcc));
      REFG(undefined4, 0x13241c4) = 0;
      return 1;
    }
  }
  *(undefined * PTR32 *)&REFG(undefined, 0x1324190) = pvVar1;
  REFG(undefined4, 0x13241c4) = 0;
  return 1;
}

/* ref: FUN_006fbeb0 */
byte F_006fbeb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6fbeb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  short sVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if (param_1 == 0) {
    F_006e1f70(this,(uint)*(ushort *)((int)this + 0x1d4),(int)this + 0x244);
    sVar1 = *(short *)((int)this + 0x54);
    uVar4 = 1;
    if (((sVar1 == 3) || (sVar1 == 2)) || (sVar1 == 5)) {
      bVar2 = F_006e1e90(this);
      if (1 < bVar2) {
        uVar4 = 0;
      }
    }
    (*(uint *)(gen_frame + 0x4)) = (uint)*(ushort *)((int)this + 0x1d4);
    (*(undefined4 *)(gen_frame + 0x8)) = uVar4;
    if ((*(byte *)((int)this + 0x5c) & 1) == 0) {
      F_00a50880(*(undefined4 *)((int)this + 8),(uint)*(ushort *)((int)this + 0x54),1,&(*(uint *)(gen_frame + 0x4)),2);
      *(byte *)((int)this + 0x5c) = *(byte *)((int)this + 0x5c) | 1;
      return 1;
    }
  }
  else {
    uVar3 = F_00a03ae0(*(undefined * PTR32 *)((int)this + 0x1d0),0,0,0);
    if (uVar3 != 1) {
      bVar2 = F_00a02270(uVar3);
      if (bVar2 != 0) {
        *(uint *)((int)this + 0x60) = uVar3;
      }
      F_006f4000(this);
    }
  }
  return 1;
}

/* ref: Client::Game::Event::CraftLeveClientEventHandler::vf55 */
uint F_006fbf80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6fbf80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint uVar2;
  int * piVar3;
  undefined4 uVar4;
  
  if (param_1 == 0) {
    uVar2 = (uint)*(ushort *)(this + 0x54);
    uVar4 = 1;
    if (((uVar2 == 3) || (uVar2 == 2)) || (uVar2 == 5)) {
      uVar4 = 0;
    }
    (*(uint *)(gen_frame + 0x4)) = (uint)*(ushort *)(this + 0x1d4);
    (*(undefined4 *)(gen_frame + 0x8)) = uVar4;
    if (((byte)this[0x5c] & 1) == 0) {
      F_00a50880(*(undefined4 *)(this + 8),uVar2,1,&(*(uint *)(gen_frame + 0x4)),2);
      this[0x5c] = (undefined1)((byte)this[0x5c] | 1);
    }
  }
  else {
    uVar2 = F_00a03ae0(*(undefined * PTR32 *)(this + 0x1d0),0,0,0);
    if (uVar2 != 1) {
      bVar1 = F_00a02270(uVar2);
      if (bVar1 != 0) {
        *(uint *)(this + 0x60) = uVar2;
      }
      F_006f4000(this);
    }
  }
  piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar4 = REFG(undefined4, 0x13241d4);
  if ((piVar3 != (int *)0x0) && (REFG(undefined4, 0x13241d0) == this)) {
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3)));
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,uVar4,0)));
    REFG(undefined4, 0x13241d0) = (undefined *)0x0;
  }
  return (uint)piVar3;
}

/* ref: Client::Game::Event::CraftLeveClientEventHandler::vf59 */
uint F_006fc050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6fc050u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined1 CVar1;
  undefined4 * puVar2;
  byte bVar3;
  undefined * this_00;
  undefined * pvVar4;
  uint uVar5;
  undefined * PTR32 * ppCVar6;
  uint uVar7;
  undefined * pCVar8;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  ((undefined * PTR32 *)(gen_frame + 0x14))[0] = this;
  if (param_1 == (undefined *)0x0) {
    this_00 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),0x7d5);
    if (1 < param_3) {
      uVar7 = 0;
      (*(int *)(gen_frame + 0xc)) = param_3 - 1;
      ppCVar6 = ((undefined * PTR32 *)(gen_frame + 0x14));
      puVar2 = param_2;
      do {
        ppCVar6 = (undefined * PTR32 *)((int)ppCVar6 + 4);
        (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar2 + 1;
        if (uVar7 % 3 == 2) {
          pvVar4 = (undefined *)F_00a37da0(this_00,uVar7 / 3);
          pCVar8 = (undefined *)0x0;
          if (pvVar4 != (undefined *)0x0) {
            if (*(char *)((int)pvVar4 + 6) == '\0') {
              uVar5 = *(uint *)((int)pvVar4 + 8);
              if ((*(byte *)((int)pvVar4 + 0x14) & 1) != 0) {
                uVar5 = uVar5 + 1000000;
              }
            }
            else {
              pvVar4 = (undefined *)F_00a3a860(pvVar4);
              uVar5 = F_0046e5e0(pvVar4);
            }
            if (uVar5 - 1000000 < 1000000) {
              pCVar8 = (undefined *)0x1;
            }
          }
          *ppCVar6 = pCVar8;
          this = ((undefined * PTR32 *)(gen_frame + 0x14))[0];
        }
        else {
          *ppCVar6 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x10));
        }
        uVar7 = uVar7 + 1;
        (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + -1;
        puVar2 = (*(undefined4 * PTR32 *)(gen_frame + 0x10));
      } while ((*(int *)(gen_frame + 0xc)) != 0);
    }
    CVar1 = this[0x5c];
    ((undefined * PTR32 *)(gen_frame + 0x14))[(int)(param_3)] = (undefined *)(uint)*(ushort *)(this + 0x1d4);
    uVar7 = param_3;
    if (((byte)CVar1 & 1) == 0) {
      uVar7 = F_00a50880(*(undefined4 *)(this + 8),(uint)*(ushort *)(this + 0x54),0,((undefined * PTR32 *)(gen_frame + 0x14)) + 1,
                           param_3);
      this[0x5c] = (undefined1)((byte)this[0x5c] | 1);
      F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
      return uVar7;
    }
  }
  else {
    ((undefined * PTR32 *)(gen_frame + 0x14))[0] = param_1;
    uVar5 = F_00a03900(*(undefined * PTR32 *)(this + 0x1d0),((undefined * PTR32 *)(gen_frame + 0x14)),1);
    uVar7 = 1;
    if (uVar5 != 1) {
      bVar3 = F_00a02270(uVar5);
      if (bVar3 != 0) {
        *(uint *)(this + 0x60) = uVar5;
      }
      uVar7 = F_006f4000(this);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar7;
}

/* ref: Client::Game::Event::CraftLeveClientEventHandler::vf57 */
uint F_006fc1b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6fc1b0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined1 CVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  
  if (*((short *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x54))) == 7) {
    if (((int)(*(uint *)&gen_args[1]) < 0) ||
       ((uint)(*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x338))) - *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x334))) >> 1) <= (*(uint *)&gen_args[1]))) {
      uVar3 = 0;
    }
    else {
      uVar3 = *((ushort *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x334))) + (*(uint *)&gen_args[1]) * 2)));
    }
    *((ushort *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1d4))) = uVar3;
    (*(uint *)&gen_args[1]) = (uint)uVar3;
    CVar1 = (*(undefined * PTR32 *)&gen_args[0])[0x5c];
    uVar4 = (uint)CONCAT11((char)(uVar3 >> 8),CVar1);
    if (((byte)CVar1 & 4) == 0) {
      (*(undefined * PTR32 *)&gen_args[0])[0x5c] = (undefined1)((byte)CVar1 | 4);
      uVar4 = F_006f15b0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))),&(*(uint *)&gen_args[1]),1);
      return uVar4;
    }
  }
  else {
    if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x60))) != 0) {
      uVar4 = F_006f4000((*(undefined * PTR32 *)&gen_args[0]));
      return uVar4;
    }
    uVar5 = F_00a038b0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1d0))),(*(uint *)&gen_args[1]) + 1);
    uVar4 = 1;
    if (uVar5 != 1) {
      bVar2 = F_00a02270(uVar5);
      if (bVar2 != 0) {
        *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x60))) = uVar5;
      }
      uVar4 = F_006f4000((*(undefined * PTR32 *)&gen_args[0]));
    }
  }
  return uVar4;
}

/* ref: Client::Game::Event::FishingEventHandler::vf24 */
uint F_006fc260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6fc260u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined1 FVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  undefined3 extraout_var_02 = 0;
  undefined3 extraout_var_03 = 0;
  undefined3 extraout_var_04 = 0;
  
  uVar3 = F_00a5f290(param_1);
  if (uVar3 != 0) {
    *(uint *)(this + 0xfc) = (uint)(ushort)param_2;
    if ((ushort)param_2 == 1) {
      bVar2 = F_006e2150(this,uVar3,1,param_3,param_4);
      uVar3 = CONCAT31(extraout_var,bVar2);
    }
    else if ((ushort)param_2 == 2) {
      bVar2 = F_006f5720(this,uVar3,2,param_3,param_4);
      uVar3 = CONCAT31(extraout_var_00,bVar2);
    }
    else if ((ushort)param_2 == 4) {
      bVar2 = F_006f5820(this,uVar3,4,param_3,param_4);
      uVar3 = CONCAT31(extraout_var_01,bVar2);
    }
    else if ((ushort)param_2 == 5) {
      bVar2 = F_006f5890(this,uVar3,5,param_3,param_4);
      uVar3 = CONCAT31(extraout_var_02,bVar2);
    }
    else if ((ushort)param_2 == 6) {
      bVar2 = F_006f5930(this,uVar3,6,param_3,param_4);
      uVar3 = CONCAT31(extraout_var_03,bVar2);
    }
    else {
      if ((ushort)param_2 != 3) goto LAB_006fc324;
      bVar2 = F_006f59d0(this,uVar3,3,param_3,param_4);
      uVar3 = CONCAT31(extraout_var_04,bVar2);
    }
    if ((char)uVar3 != '\0') {
      return uVar3;
    }
  }
LAB_006fc324: ;
  uVar3 = 0xffff;
  if (*(short *)(this + 0x54) != -1) {
    FVar1 = this[0x5c];
    uVar3 = CONCAT31(0xff,FVar1);
    if (((byte)FVar1 & 4) == 0) {
      this[0x5c] = (undefined1)((byte)FVar1 | 4);
      uVar3 = F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
    }
  }
  return uVar3;
}

/* ref: Client::Game::Event::WarpEventHandler::vf1 */
uint F_006fc350(unsigned int gen_a0)
{
  GEN_ENTER(0x6fc350u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  if (*(int *)(this + 0x238) != 0) {
    piVar1 = *(int * PTR32 *)(this + 0x234);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,*(int *)(this + 0x238));
    }
    puVar3 = *(undefined4 * PTR32 *)(this + 0x238);
    if (puVar3 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
      *(undefined4 *)(this + 0x238) = 0;
    }
  }
  uVar2 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8));
  *(uint *)(this + 0x234) = uVar2;
  puVar3 = (undefined4 *)F_00406b90(0x20,0,0);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(puVar3,1,0);
    puVar3[5] = 1;
    *puVar3 = (*(undefined * PTR32 (*)[2])REFP(0x10b9264));
    puVar3[6] = this;
    puVar3[7] = ((code *)REFP(0x6f5bc0));
  }
  *(undefined4 * PTR32 *)(this + 0x238) = puVar3;
  F_00cb4540(puVar3,0,*(undefined4 *)(this + 8));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x234) + 0x48))))
                    (*(int * PTR32 *)(this + 0x234),*(undefined4 *)(this + 0x238));
  this[0x1c] = (undefined1)((byte)this[0x1c] | 2);
  return uVar2;
}

/* ref: Client::Game::Event::StoryEventHandler::vf1 */
uint F_006fc410(unsigned int gen_a0)
{
  GEN_ENTER(0x6fc410u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * this_00;
  
  uVar1 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8));
  *(uint *)(this + 0x22c) = uVar1;
  this_00 = (undefined4 *)F_00406b90(0x20,0,0);
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(this_00,1,0);
    this_00[5] = 1;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10b9270));
    this_00[6] = this;
    this_00[7] = ((code *)REFP(0x6f6130));
  }
  *(undefined4 * PTR32 *)(this + 0x230) = this_00;
  F_00cb4540(this_00,0,*(undefined4 *)(this + 0x1d4));
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x22c) + 0x48))))
                    (*(int * PTR32 *)(this + 0x22c),*(undefined4 *)(this + 0x230));
  this[0x1c] = (undefined1)((byte)this[0x1c] | 2);
  return uVar1;
}

/* ref: FUN_006fc4a0 */
uint F_006fc4a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6fc4a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00406b90(0x1a4,0,0);
  if (this != (undefined *)0x0) {
    uVar1 = F_006f6350(this,param_1 & 0xffff | 0x1b0000);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_006fc4d0 */
uint F_006fc4d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6fc4d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x2a0];
  byte bVar1;
  uint * puVar2;
  undefined4 * puVar3;
  int iVar4;
  uint uVar5;
  uint * puVar6;
  int iVar7;
  int iVar8;
  undefined1 * in_ecx;
  uint * puVar9;
  uint * puVar10;
  
  (*(uint *)(gen_frame + 0x298)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x29c);
  puVar2 = *(uint * PTR32 *)(*param_1 + 4);
  iVar8 = *(int *)((int)this + 0xfc);
  if (*(int *)((int)this + 0xf8) != iVar8) {
    uVar5 = F_007413b0(iVar8,iVar8,*(int *)((int)this + 0xf8),this);
    F_0074c430(uVar5,*(undefined4 *)((int)this + 0xfc),(int)this + 0x104,this);
    *(uint *)((int)this + 0xfc) = uVar5;
  }
  iVar8 = *(int *)((int)this + 0x11c);
  if (iVar8 != *(int *)((int)this + 0x120)) {
    F_00c46e20(iVar8,*(int *)((int)this + 0x120),0);
    *(int *)((int)this + 0x120) = iVar8;
  }
  iVar8 = *(int *)((int)this + 300);
  if (iVar8 != *(int *)((int)this + 0x130)) {
    F_00c46e20(iVar8,*(int *)((int)this + 0x130),0);
    *(int *)((int)this + 0x130) = iVar8;
  }
  if (puVar2 != (uint *)0x0) {
    (*(char *)(gen_frame + 0x17)) = '\0';
    (*(uint *)(gen_frame + 0x8)) = 0;
    puVar10 = puVar2 + 6;
    do {
      if (puVar10[-2] != 0) {
        (*(uint *)(gen_frame + 0x10)) = 1;
        in_ecx = ((undefined1 *)(gen_frame + 0x1e0));
        do {
          F_0042b630(in_ecx);
          in_ecx = in_ecx + 0x5c;
          uVar5 = (*(uint *)(gen_frame + 0x10)) - 1;
          (*(uint *)(gen_frame + 0x10)) = uVar5;
        } while (-1 < (int)uVar5);
        (*(uint *)(gen_frame + 0x1cc)) = puVar10[-1];
        (*(uint *)(gen_frame + 0x1d0)) = *puVar10;
        ((undefined1 *)(gen_frame + 0xe4))[0] = (undefined1)(*(uint *)(gen_frame + 0x8));
        (*(uint *)(gen_frame + 0x1d4)) = puVar10[1];
        (*(uint *)(gen_frame + 0x1c4)) = puVar10[-3];
        (*(uint *)(gen_frame + 0x1c0)) = puVar10[-4];
        (*(uint *)(gen_frame + 0x1bc)) = puVar10[-5];
        (*(uint *)(gen_frame + 0x1c8)) = puVar10[-2];
        F_00757610((undefined *)((int)this + 0xf8),((undefined1 *)(gen_frame + 0xe4)));
        if ((char)puVar2[0x461] != '\0') {
          puVar9 = *(uint * PTR32 *)((int)this + 0x120);
          puVar6 = *(uint * PTR32 *)((int)this + 0x11c);
          if (puVar6 != puVar9) {
            do {
              if (*puVar6 == (*(uint *)(gen_frame + 0x1cc))) break;
              puVar6 = puVar6 + 1;
            } while (puVar6 != puVar9);
            if (puVar6 != puVar9) goto LAB_006fc6c8;
          }
          (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x1cc));
          F_00750f70((undefined *)((int)this + 0x11c),&(*(uint *)(gen_frame + 0x10)));
          (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x1d0));
          F_00750f70((undefined *)((int)this + 300),&(*(uint *)(gen_frame + 0x10)));
        }
LAB_006fc6c8: ;
        if (((*(char *)(gen_frame + 0x17)) == '\0') &&
           (((((*(uint *)(gen_frame + 0x1d0)) == 0x165c || ((*(uint *)(gen_frame + 0x1d0)) == 0x165d)) || ((*(uint *)(gen_frame + 0x1d0)) == 0x165e)) ||
            ((*(uint *)(gen_frame + 0x1d0)) == 0x165f)))) {
          (*(char *)(gen_frame + 0x17)) = '\x01';
        }
        iVar8 = 1;
        puVar9 = &(*(uint *)(gen_frame + 0x298));
        do {
          puVar9 = puVar9 + -0x17;
          F_0042c880(puVar9);
          iVar8 = iVar8 + -1;
        } while (-1 < iVar8);
      }
      (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) + 1;
      puVar10 = puVar10 + 7;
    } while ((*(uint *)(gen_frame + 0x8)) < 0xa0);
    if ((char)puVar2[0x461] == '\0') {
      *(undefined4 *)((int)this + 0x198) = 2;
    }
    else {
      *(uint *)((int)this + 0x198) = (uint)((*(char *)(gen_frame + 0x17)) != '\0');
    }
    F_0042e430((undefined *)((int)this + 0x144),(*puVar2 & 0xffffff) + (int)puVar2);
  }
  puVar3 = *(undefined4 * PTR32 *)((int)this + 0x13c);
  if (puVar3 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
    *(undefined4 *)((int)this + 0x13c) = 0;
  }
  iVar8 = *(int *)((int)this + 0xf8);
  iVar7 = 0;
  if (iVar8 != *(int *)((int)this + 0xfc)) {
    iVar4 = *(int *)((int)this + 0xfc);
    do {
      ((undefined4 *)(gen_frame + 0x18))[(int)(iVar7)] = *(undefined4 *)(iVar8 + 0xe4);
      iVar8 = iVar8 + 0x1b0;
      iVar7 = iVar7 + 1;
    } while (iVar8 != iVar4);
    if (iVar7 != 0) {
      *(undefined1 *)((int)this + 0x108) = 0;
      uVar5 = F_006cd8f0(this,((undefined4 *)(gen_frame + 0x18)),iVar7,0);
      goto LAB_006fc812;
    }
  }
  *(byte *)((int)this + 0x1c) = *(byte *)((int)this + 0x1c) & 0xfd;
  bVar1 = *(byte *)((int)this + 0x1c);
  uVar5 = CONCAT31((int3)((uint)iVar8 >> 8),bVar1);
  if ((bVar1 & 1) == 0) {
    *(byte *)((int)this + 0x1c) = bVar1 | 1;
    uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x23c))(this);
    F_00c47745((*(uint *)(gen_frame + 0x298)) ^ (uint)(uint)(gen_frame + 0x29c));
    return uVar5;
  }
LAB_006fc812: ;
  F_00c47745((*(uint *)(gen_frame + 0x298)) ^ (uint)(uint)(gen_frame + 0x29c));
  return uVar5;
}

/* ref: Client::Game::Event::LeveDirector::vf157 */
uint F_006fc830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6fc830u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint * puVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  undefined * this_00;
  ulonglong uVar5;
  
  puVar1 = *(uint * PTR32 *)(*param_1 + 4);
  uVar4 = F_00ab32a0(puVar1[0xe]);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(uVar4 + 4);
  F_006f7250(this,(*puVar1 & 0xffffff) + (int)puVar1);
  uVar4 = F_00ab3390((uint)*(byte *)((int)puVar1 + 0x56));
  *(undefined4 *)(this + 0x314) = *(undefined4 *)(uVar4 + 4);
  uVar4 = F_00ab3390((uint)*(byte *)((int)puVar1 + 0x57));
  *(undefined4 *)(this + 0x318) = *(undefined4 *)(uVar4 + 4);
  *(uint *)(this + 0x31c) = puVar1[0x11];
  *(short *)(this + 800) = (short)puVar1[0x14];
  *(uint *)(this + 0x338) = (uint)(byte)puVar1[0x15];
  *(undefined4 *)(this + 0x33c) = 0;
  *(uint *)(this + 0x340) = (uint)(byte)puVar1[0x15];
  *(undefined4 *)(this + 0x344) = 0;
  this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  if (this_00 == (undefined *)0x0) {
    uVar5 = F_0046ff40();
    uVar4 = (uint)(uVar5 / 1000);
  }
  else {
    uVar4 = F_00975680(this_00);
  }
  uVar3 = (uint)(byte)puVar1[0x15] * 0x3c;
  *(uint *)(this + 0x2e8) = uVar4;
  *(undefined4 *)(this + 0x2ec) = 0;
  *(uint *)(this + 0x2f0) = uVar3 + uVar4;
  *(uint *)(this + 0x2f4) = (uint)CARRY4(uVar3,uVar4);
  *(uint *)(this + 0x324) = (uint)*(byte *)((int)puVar1 + 0x56);
  *(uint *)(this + 0x328) = (uint)*(byte *)((int)puVar1 + 0x57);
  uVar4 = F_00ab6ad0((uint)*(ushort *)((int)puVar1 + 0x52));
  puVar2 = *(undefined4 * PTR32 *)(this + 0x330);
  if (puVar2 != (undefined4 *)0x0) {
    uVar4 = ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    *(undefined4 *)(this + 0x330) = 0;
  }
  *(undefined4 *)(this + 0x32c) = 0;
  return uVar4;
}

/* ref: FUN_006fc970 */
uint F_006fc970(unsigned int gen_a0)
{
  GEN_ENTER(0x6fc970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  uVar2 = 0xffff;
  if ((*(short *)((int)this + 0x54) != -1) && (*(int *)((int)this + 0x60) == 0)) {
    uVar2 = F_00a03710(*(undefined * PTR32 *)((int)this + 0x1d0));
    if (uVar2 != 1) {
      bVar1 = F_00a02270(uVar2);
      if (bVar1 != 0) {
        *(uint *)((int)this + 0x60) = uVar2;
      }
      uVar2 = F_006f4000(this);
      return uVar2;
    }
    uVar2 = 1;
  }
  return uVar2;
}

/* ref: Client::Game::Event::BattleLeveDirector::vf157 */
uint F_006fc9c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6fc9c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  F_006d2b30(this,*((undefined4 *)GEN_TOP((*(int *)(*param_1 + 4) + 0x48))));
  uVar1 = F_006fc830((undefined *)this,param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_006fc9f0 */
uint F_006fc9f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6fc9f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar3 = *(undefined4 * PTR32 *)(*param_1 + 4);
  puVar4 = (undefined4 *)((int)this + 900);
  for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = *(undefined4 * PTR32 *)((int)this + 0x34c);
  if (puVar3 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
    *(undefined4 *)((int)this + 0x34c) = 0;
  }
  *(undefined4 *)((int)this + 0x348) = 0;
  uVar1 = F_006f6b40(this,(int)this + 900);
  return uVar1;
}

/* ref: Client::Game::Event::DirectorModule::vf1 */
uint F_006fca50(unsigned int gen_a0)
{
  GEN_ENTER(0x6fca50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_006f6d40(this,0);
  return uVar1;
}

/* ref: Client::Game::Event::ChocoboTaxiStandEventHandler::vf56 */
uint F_006fca60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6fca60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  if (param_1 == 0xfffffffe) {
    if (*(int *)(this + 0x60) == 0) {
      uVar4 = 0xffffffff;
      goto LAB_006fcb0d;
    }
  }
  else {
    if (param_2 != 1) {
      uVar3 = F_006f9c10((undefined *)this,param_1,param_2);
      F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
      return uVar3;
    }
    if (((-1 < (int)param_1) && (param_1 < *(uint *)(this + 0x22c))) && (param_1 < 0x10)) {
      (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(this + param_1 * 0x10 + 0x234);
      (*(undefined4 *)(gen_frame + 0x8)) = *((undefined4 *)GEN_TOP((this + (param_1 + 0x23) * 0x10)));
      (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(this + param_1 * 0x10 + 0x238);
      (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(this + param_1 * 0x10 + 0x23c);
      uVar3 = F_006f99e0(this,&(*(undefined4 *)(gen_frame + 0x8)),4);
      F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
      return uVar3;
    }
    uVar4 = 0;
LAB_006fcb0d: ;
    uVar2 = F_00a038b0(*(undefined * PTR32 *)(this + 0x1d0),uVar4);
    uVar3 = 1;
    if (uVar2 == 1) goto LAB_006fcb39;
    bVar1 = F_00a02270(uVar2);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar2;
    }
  }
  uVar3 = F_006f4000(this);
LAB_006fcb39: ;
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar3;
}

/* ref: Client::Game::Event::QuestBattleDirector::vf152 */
uint F_006fcb50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x6fcb50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  undefined1 QVar1;
  int * piVar2;
  uint in_EAX = 0;
  uint uVar3;
  undefined4 * puVar4;
  
  if (((byte)this[0x1c] & 1) == 0) {
LAB_006fcb83: ;
    if ((this[0x318] != (undefined1)0x0) &&
       (piVar2 = *(int * PTR32 *)(this + 0x4b8), piVar2 != (int *)0x0)) {
      in_EAX = ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2);
      if ((char)in_EAX != '\0') {
        F_006f7380(this);
        uVar3 = F_00a51200(0x4c,0,0,0,0);
        this[0x1c] = (undefined1)((byte)this[0x1c] & 0xfd);
        QVar1 = this[0x1c];
        in_EAX = CONCAT31((int3)(uVar3 >> 8),QVar1);
        if (((byte)QVar1 & 1) == 0) {
          this[0x1c] = (undefined1)((byte)QVar1 | 1);
          uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x23c))
                            (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
          return uVar3;
        }
      }
    }
  }
  else {
    puVar4 = *(undefined4 * PTR32 *)(this + 0xe8);
    if (puVar4 != *(undefined4 * PTR32 *)(this + 0xec)) {
      do {
        in_EAX = ((code *)*(gen_code32 *)(*(int *)*puVar4 + 8))((int *)*puVar4);
        if ((char)in_EAX == '\0') goto LAB_006fcb83;
        puVar4 = puVar4 + 1;
      } while (puVar4 != *(undefined4 * PTR32 *)(this + 0xec));
    }
  }
  return in_EAX;
}

/* ref: FUN_006fcbe0 */
uint F_006fcbe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6fcbe0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint * puVar1;
  undefined4 * puVar2;
  undefined4 uVar3;
  uint uVar4;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  puVar1 = *(uint * PTR32 *)(*param_1 + 4);
  F_0042e430((undefined *)((int)this + 0x3bc),(*puVar1 & 0xffffff) + (int)puVar1);
  F_0042e430((undefined *)((int)this + 0x410),(int)puVar1 + (puVar1[0x2d5] & 0xffffff) + 0xb54);
  uVar3 = REFG(undefined4, 0x108cc50);
  uVar4 = F_0042a990((int)this + 0x410);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),uVar4,uVar3);
  F_006ebda0(((undefined1 *)(gen_frame + 0x4)),(uint)*((byte *)GEN_TOP((*(int *)((int)this + 0x3b8) + 0x328))),(int)this + 0x464,
               (int)this + 0x118);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x314);
  if (puVar2 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    *(undefined4 *)((int)this + 0x314) = 0;
  }
  *(undefined4 *)((int)this + 0x310) = 0;
  if (*(int *)((int)this + 0x4bc) != 0) {
    uVar4 = F_006f72c0(this,*(int *)((int)this + 0x4bc));
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return uVar4;
  }
  uVar4 = F_006ebec0(this);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar4;
}

/* ref: FUN_006fce70 */
uint F_006fce70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6fce70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint in_EAX = 0;
  uint uVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0x224) != 0) {
    uVar1 = *(uint *)((int)this + 0x220);
    if (*(int * PTR32 *)((int)this + 0x214) == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = **(int * PTR32 *)((int)this + 0x214);
    }
    if (*(uint *)(iVar2 + 8) <= uVar1) {
      uVar1 = uVar1 - *(uint *)(iVar2 + 8);
    }
    in_EAX = *((uint *)GEN_TOP((*(int *)(iVar2 + 4) + uVar1 * 4)));
    if ((*(int *)(in_EAX + 8) == 0xa0001) && (*(undefined * PTR32 *)((int)this + 0x4c) != (undefined *)0x0)) {
      uVar1 = F_006fb440(*(undefined * PTR32 *)((int)this + 0x4c),param_1);
      return uVar1;
    }
  }
  return in_EAX & 0xffffff00;
}

/* ref: FUN_006fced0 */
uint F_006fced0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6fced0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  undefined * in_EAX;
  uint uVar2;
  undefined3 extraout_var = 0;
  int iVar3;
  
  if (*(int *)((int)this + 0x224) != 0) {
    uVar2 = *(uint *)((int)this + 0x220);
    if (*(int * PTR32 *)((int)this + 0x214) == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = **(int * PTR32 *)((int)this + 0x214);
    }
    if (*(uint *)(iVar3 + 8) <= uVar2) {
      uVar2 = uVar2 - *(uint *)(iVar3 + 8);
    }
    uVar2 = *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar3 + 4) + uVar2 * 4))) + 8)));
    in_EAX = (undefined *)0x0;
    if (uVar2 != 0) {
      if ((uVar2 & 0x80000000) == 0x80000000) {
        in_EAX = (undefined *)F_00748af0((undefined *)((int)this + 0x5c),uVar2);
      }
      else {
        in_EAX = (undefined *)F_006dda70(this,uVar2);
      }
      if (in_EAX != (undefined *)0x0) {
        if (*(short *)((int)in_EAX + 10) == 3) {
          bVar1 = F_006faee0(in_EAX,param_1);
          return CONCAT31(extraout_var,bVar1);
        }
        if (*(short *)((int)in_EAX + 10) == 10) {
          uVar2 = F_006fb530(in_EAX,param_1);
          return uVar2;
        }
      }
    }
  }
  return (uint)in_EAX & 0xffffff00;
}

/* ref: FUN_006fd010 */
uint F_006fd010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6fd010u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  int param_4 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  undefined * this_00;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined3 extraout_var = 0;
  int iVar6;
  
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = this;
  if (((char)param_2 == '\n') && (param_4 == 0x3c)) {
    uVar3 = F_005f3270(0x31,param_3,0);
    this = (*(undefined * PTR32 *)(gen_frame + 0x18));
    (*(uint *)(gen_frame + 0x14)) = uVar3;
    if (uVar3 != 0) {
      F_0073d9b0((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x6fc),&(*(undefined4 *)(gen_frame + 0xc)),&(*(uint *)(gen_frame + 0x14)));
      F_00745550((undefined *)((int)this + 0x6fc),&(*(uint *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)));
    }
  }
  uVar3 = *(uint *)((int)this + 0x220);
  piVar1 = *(int * PTR32 *)((int)this + 0x214);
  uVar4 = *(int *)((int)this + 0x224) + uVar3;
  (*(uint *)(gen_frame + 0x14)) = uVar4;
  do {
    if (uVar3 == uVar4) {
LAB_006fd132: ;
      uVar4 = *(uint *)((int)this + 0x288);
      if (((uVar4 != 0) && (uVar4 == param_1)) &&
         ((*(char *)((int)this + 0x298) == (char)param_2 &&
          (uVar4 = param_3, *(uint *)((int)this + 0x29c) == param_3)))) {
        uVar3 = F_0072df00((undefined *)((int)this + 0x280));
        return uVar3;
      }
      if (param_1 != 0) {
        if ((param_1 & 0x80000000) == 0x80000000) {
          uVar5 = F_00748af0((undefined *)((int)this + 0x5c),param_1);
        }
        else {
          uVar5 = F_006dda70(this,param_1);
        }
        this_00 = (*(undefined * PTR32 *)(gen_frame + 0x18));
        uVar4 = 0;
        if (uVar5 != 0) {
          if (piVar1 == (int *)0x0) {
            iVar6 = 0;
          }
          else {
            iVar6 = *piVar1;
          }
          uVar4 = uVar3;
          if (*(uint *)(iVar6 + 8) <= uVar3) {
            uVar4 = uVar3 - *(uint *)(iVar6 + 8);
          }
          *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar6 + 4) + uVar4 * 4))) + 0x28))) = param_4;
          uVar4 = *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x220);
          iVar6 = 0;
          if (*(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x214) != (int *)0x0) {
            iVar6 = **(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x214);
          }
          if (*(uint *)(iVar6 + 8) <= uVar4) {
            uVar4 = uVar4 - *(uint *)(iVar6 + 8);
          }
          uVar4 = *((uint *)GEN_TOP((*(int *)(iVar6 + 4) + uVar4 * 4)));
          if (piVar1 == (int *)0x0) {
            iVar6 = 0;
          }
          else {
            iVar6 = *piVar1;
          }
          if (*(uint *)(iVar6 + 8) <= uVar3) {
            uVar3 = uVar3 - *(uint *)(iVar6 + 8);
          }
          if (uVar4 == *((uint *)GEN_TOP((*(int *)(iVar6 + 4) + uVar3 * 4)))) {
            if (((*(byte *)(uVar4 + 0x20) & 2) == 0) && (param_4 - 10U < 0x13)) {
              bVar2 = F_006e3100((*(undefined * PTR32 *)(gen_frame + 0x18)),0x33,1);
              if (bVar2 != 0) {
                return CONCAT31(extraout_var,bVar2);
              }
            }
            uVar4 = F_006f8f10(this_00);
          }
        }
      }
      return uVar4;
    }
    if (piVar1 == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *piVar1;
    }
    uVar5 = uVar3;
    if (*(uint *)(iVar6 + 8) <= uVar3) {
      uVar5 = uVar3 - *(uint *)(iVar6 + 8);
    }
    this = (*(undefined * PTR32 *)(gen_frame + 0x18));
    if (*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar6 + 4) + uVar5 * 4))) + 0x28))) == 0) {
      if (piVar1 == (int *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *piVar1;
      }
      uVar5 = uVar3;
      if (*(uint *)(iVar6 + 8) <= uVar3) {
        uVar5 = uVar3 - *(uint *)(iVar6 + 8);
      }
      iVar6 = *((int *)GEN_TOP((*(int *)(iVar6 + 4) + uVar5 * 4)));
      if (((*(uint *)(iVar6 + 8) != param_1) || (*(char *)(iVar6 + 0x18) != (char)param_2)) ||
         (*(uint *)(iVar6 + 0x1c) != param_3)) {
        uVar3 = uVar4;
      }
      goto LAB_006fd132;
    }
    if (piVar1 == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *piVar1;
    }
    uVar5 = uVar3;
    if (*(uint *)(iVar6 + 8) <= uVar3) {
      uVar5 = uVar3 - *(uint *)(iVar6 + 8);
    }
    iVar6 = *((int *)GEN_TOP((*(int *)(iVar6 + 4) + uVar5 * 4)));
    if (((*(uint *)(iVar6 + 8) == param_1) && (*(char *)(iVar6 + 0x18) == (char)param_2)) &&
       (*(uint *)(iVar6 + 0x1c) == param_3)) goto LAB_006fd132;
    uVar3 = uVar3 + 1;
  } while( true );
}

/* ref: FUN_006fd230 */
uint F_006fd230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fd230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10ba978));
  *(undefined4 *)((int)this + 4) = param_1;
  F_00509590((undefined *)((int)this + 8));
  *(undefined4 *)((int)this + 0xc) = param_1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[5])REFP(0x10ba948));
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  uVar1 = F_004296a0(0x68,0,800);
  *(uint *)((int)this + 0x18) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x18) + 4))) = *(int *)((int)this + 0x18);
  *((int *)GEN_TOP((*(int *)((int)this + 0x18) + 8))) = *(int *)((int)this + 0x18);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x18) + 100))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x65))) = 1;
  *(undefined1 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined * PTR32 *)((int)this + 0x10) = this;
  return (uint)this;
}

/* ref: FUN_006fd2b0 */
uint F_006fd2b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fd2b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  F_006fd230(this,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10ba994));
  *(undefined4 *)((int)this + 0x34) = 0;
  uVar1 = F_004296a0(0x28,0,0x322);
  *(uint *)((int)this + 0x30) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x30) + 4))) = *(int *)((int)this + 0x30);
  *((int *)GEN_TOP((*(int *)((int)this + 0x30) + 8))) = *(int *)((int)this + 0x30);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x30) + 0x20))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x30) + 0x21))) = 1;
  return (uint)this;
}

/* ref: FUN_006fd310 */
uint F_006fd310(unsigned int gen_a0)
{
  GEN_ENTER(0x6fd310u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10ba994));
  F_00744fa0((undefined *)((int)this + 0x2c),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x30),
               *(undefined4 * PTR32 *)((int)this + 0x30));
  F_00429760(*(undefined4 *)((int)this + 0x30),0x28,0x322);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10ba978));
  uVar1 = F_00757fb0((undefined *)((int)this + 8));
  return uVar1;
}

/* ref: Client::Game::Event::EventHandler::vf28 */
uint F_006fd360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6fd360u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(this + 0x60);
  if (((*(int *)((int)REFG(undefined4, 0x1488344) + 0x288) == *(int *)(this + 8)) &&
      (*(short *)((int)REFG(undefined4, 0x1488344) + 0x2b8) != -1)) || (bVar2 = true, iVar1 == 0x34)) {
    bVar2 = false;
  }
  if (((byte)this[0x4c] & 2) != 0) {
    uVar3 = F_006fd010(REFG(undefined4, 0x1488344),*(int *)(this + 8),(uint)(byte)this[0x44],
                         *(undefined4 *)(this + 0x48),1);
    goto LAB_006fd434;
  }
  if (iVar1 == 0x34) {
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x230))(this);
    goto LAB_006fd434;
  }
  if (iVar1 == 0x33) {
    uVar3 = F_006f8f10(REFG(undefined4, 0x1488344));
    goto LAB_006fd434;
  }
  if (iVar1 == 0x36) {
    uVar4 = 0x520;
LAB_006fd3fb: ;
    ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this,uVar4,0,0);
  }
  else {
    if (iVar1 == 0x39) {
      uVar4 = 0x526;
      goto LAB_006fd3fb;
    }
    if (iVar1 == 0x3a) {
      uVar4 = 0x527;
      goto LAB_006fd3fb;
    }
  }
  uVar3 = (uint)*(ushort *)(this + 0x54);
  if (*(ushort *)(this + 0x54) != 0xffff) {
    uVar3 = F_00a50640(*(undefined4 *)(this + 8),uVar3,*(undefined4 *)(this + 0x60),param_1,
                         param_2);
  }
LAB_006fd434: ;
  if (bVar2) {
    uVar3 = 0;
    this[0x5c] = (undefined1)((byte)this[0x5c] & 0xf8);
    *(undefined2 *)(this + 0x54) = 0xffff;
    *(undefined4 *)(this + 0x58) = 0;
    *(undefined4 *)(this + 0x60) = 0;
  }
  return uVar3;
}

/* ref: FUN_006fd460 */
uint F_006fd460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fd460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  uint uVar2;
  
  F_006e44c0(this,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[145])REFP(0x10ba9b4));
  *(undefined4 *)((int)this + 0xf8) = *(undefined4 *)(REFG(int, 0x1488344) + 0x1e4);
  uVar1 = *(undefined4 *)(REFG(int, 0x1488344) + 0x1e4);
  F_00509590((undefined *)((int)this + 0xfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xfc) =
       (*(undefined * PTR32 (*)[5])REFP(0x10ba960));
  *(undefined4 *)((int)this + 0x100) = uVar1;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  uVar2 = F_004296a0(0x68,0,800);
  *(uint *)((int)this + 0x10c) = uVar2;
  *(uint *)uVar2 = uVar2;
  *((int *)GEN_TOP((*(int *)((int)this + 0x10c) + 4))) = *(int *)((int)this + 0x10c);
  *((int *)GEN_TOP((*(int *)((int)this + 0x10c) + 8))) = *(int *)((int)this + 0x10c);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x10c) + 100))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x10c) + 0x65))) = 1;
  F_0042b630((int)this + 0x118);
  F_0042b630((int)this + 0x16c);
  *(undefined4 *)((int)this + 0x1c8) = 0;
  uVar2 = F_004296a0(0xc0,0,800);
  *(uint *)((int)this + 0x1c4) = uVar2;
  *(uint *)uVar2 = uVar2;
  *((int *)GEN_TOP((*(int *)((int)this + 0x1c4) + 4))) = *(int *)((int)this + 0x1c4);
  *((int *)GEN_TOP((*(int *)((int)this + 0x1c4) + 8))) = *(int *)((int)this + 0x1c4);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x1c4) + 0xbc))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x1c4) + 0xbd))) = 1;
  *(undefined4 *)((int)this + 0x1d0) = 0;
  *(undefined * PTR32 *)((int)this + 0x104) = this;
  return (uint)this;
}

/* ref: FUN_006fd580 */
uint F_006fd580(unsigned int gen_a0)
{
  GEN_ENTER(0x6fd580u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[145])REFP(0x10ba9b4));
  F_006bd340(this);
  F_00a036e0(*(undefined * PTR32 *)((int)this + 0xf8));
  F_00752540((undefined *)((int)this + 0x1c0),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x1c4),
               *(undefined4 * PTR32 *)((int)this + 0x1c4));
  F_00429760(*(undefined4 *)((int)this + 0x1c4),0xc0,800);
  F_0042c880((undefined *)((int)this + 0x16c));
  F_0042c880((undefined *)((int)this + 0x118));
  F_007581c0((undefined *)((int)this + 0xfc));
  uVar1 = F_006df660(this);
  return uVar1;
}

/* ref: Client::Game::Event::LuaEventHandler::vf24 */
uint F_006fd600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6fd600u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint param_4 = (uint)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  undefined1 LVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  undefined4 uVar4;
  int iVar5;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  iVar5 = 0;
  uVar4 = 0;
  if (REFG(undefined4, 0x1379694) != (int *)0x0) {
    iVar5 = REFG(int * PTR32, 0x1379694)[0x5d];
    if (iVar5 != 0) {
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1379694) + 4))))(REFG(undefined4, 0x1379694));
      if (uVar3 == 1) goto LAB_006fd650;
    }
    iVar5 = 0;
  }
LAB_006fd650: ;
  if (param_1 != 0) {
    uVar4 = *(undefined4 *)(param_1 + 0x174);
  }
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x80,"OnScene%05u",param_2 & 0xffff);
  bVar2 = F_006f9920(this,((undefined1 *)(gen_frame + 0x8)),iVar5,uVar4,param_3,param_4 & 0xff);
  uVar3 = CONCAT31(extraout_var,bVar2);
  if ((bVar2 == 0) && (uVar3 = 0xffff, *(short *)(this + 0x54) != -1)) {
    LVar1 = this[0x5c];
    uVar3 = CONCAT31(0xff,LVar1);
    if (((byte)LVar1 & 4) == 0) {
      this[0x5c] = (undefined1)((byte)LVar1 | 4);
      uVar3 = F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return uVar3;
}

/* ref: FUN_006fd6e0 */
uint F_006fd6e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fd6e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  undefined4 uVar2;
  
  F_006fd460(this,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[145])REFP(0x10babfc));
  *(char *)((int)this + 0x1d4) = (char)param_1;
  F_0042b630((int)this + 0x1d8);
  F_0042b630((int)this + 0x22c);
  F_0042b630((int)this + 0x280);
  uVar1 = F_00ab2690((uint)*(byte *)((int)this + 0x1d4));
  *(uint *)((int)this + 0x2d4) = uVar1;
  *(undefined4 *)((int)this + 0x2d8) = 0;
  *(undefined4 *)((int)this + 0x2dc) = 0;
  *(undefined4 *)((int)this + 0x2e0) = 0;
  *(undefined4 *)((int)this + 0x2e8) = 0;
  *(undefined4 *)((int)this + 0x2ec) = 0;
  *(undefined4 *)((int)this + 0x2f0) = 0;
  *(undefined4 *)((int)this + 0x2f8) = 0;
  *(undefined4 *)((int)this + 0x2fc) = 0;
  *(undefined4 *)((int)this + 0x300) = 0;
  *(undefined4 *)((int)this + 0x308) = 0;
  *(undefined4 *)((int)this + 0x30c) = 0;
  *(undefined4 *)((int)this + 0x310) = 0;
  *(undefined1 *)((int)this + 0x318) = 0;
  F_0042e430((undefined *)((int)this + 0x118),REFG(undefined * PTR32, 0x1323708));
  if (*((char *)GEN_TOP((*(int *)((int)this + 0x2d4) + 0x35))) == '\0') {
    uVar2 = 0xaa2;
  }
  else {
    uVar2 = 0xa9a;
  }
  F_00ab0230(uVar2,(int)this + 0x1d8);
  uVar1 = F_00ab2690((uint)*(byte *)((int)this + 0x1d4));
  if (uVar1 == 0) {
    F_0042aca0((int)this + 0x22c);
  }
  else {
    F_00ab9240(0x18fb2,(uint)*(ushort *)(uVar1 + 0x24),(int)this + 0x22c);
  }
  uVar1 = F_00ab2690((uint)*(byte *)((int)this + 0x1d4));
  if (uVar1 != 0) {
    F_00ab9240(0x18fb3,(uint)*(ushort *)(uVar1 + 0x26),(int)this + 0x280);
    F_006f4440(this);
    return (uint)this;
  }
  F_0042aca0((int)this + 0x280);
  F_006f4440(this);
  return (uint)this;
}

/* ref: FUN_006fd840 */
uint F_006fd840(unsigned int gen_a0)
{
  GEN_ENTER(0x6fd840u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[145])REFP(0x10babfc));
  iVar1 = *(int *)((int)this + 0x308);
  if (iVar1 != 0) {
    F_00429760(iVar1,*(int *)((int)this + 0x310) - iVar1,0x323);
  }
  *(undefined4 *)((int)this + 0x308) = 0;
  *(undefined4 *)((int)this + 0x30c) = 0;
  *(undefined4 *)((int)this + 0x310) = 0;
  iVar1 = *(int *)((int)this + 0x2f8);
  if (iVar1 != 0) {
    F_00429760(iVar1,*(int *)((int)this + 0x300) - iVar1,0x323);
  }
  *(undefined4 *)((int)this + 0x2f8) = 0;
  *(undefined4 *)((int)this + 0x2fc) = 0;
  *(undefined4 *)((int)this + 0x300) = 0;
  iVar1 = *(int *)((int)this + 0x2e8);
  if (iVar1 != 0) {
    F_00429760(iVar1,*(int *)((int)this + 0x2f0) - iVar1,0x323);
  }
  *(undefined4 *)((int)this + 0x2e8) = 0;
  *(undefined4 *)((int)this + 0x2ec) = 0;
  *(undefined4 *)((int)this + 0x2f0) = 0;
  F_004876d0((undefined *)((int)this + 0x2d8));
  F_0042c880((undefined *)((int)this + 0x280));
  F_0042c880((undefined *)((int)this + 0x22c));
  F_0042c880((undefined *)((int)this + 0x1d8));
  uVar2 = F_006fd580(this);
  return uVar2;
}

/* ref: FUN_006fd920 */
uint F_006fd920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6fd920u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  ushort uVar1;
  int iVar2;
  undefined4 * puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  
  (*(uint *)(gen_frame + 0x208)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x20c);
  if (*(int *)((int)this + 0x574) != *(int *)((int)this + 0x578)) {
    *(int *)((int)this + 0x578) = *(int *)((int)this + 0x574);
  }
  F_0074e1b0((undefined *)((int)this + 0x584),*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x588) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 0x588) + 4))) = *(int *)((int)this + 0x588);
  *(undefined4 *)*(undefined4 *)((int)this + 0x588) = *(undefined4 *)((int)this + 0x588);
  *((int *)GEN_TOP((*(int *)((int)this + 0x588) + 8))) = *(int *)((int)this + 0x588);
  *(undefined4 *)((int)this + 0x58c) = 0;
  (*(uint *)(gen_frame + 0x18)) = 0;
  if (param_2 != 0) {
    (*(int *)(gen_frame + 0x20)) = 0;
    do {
      uVar1 = *((ushort *)GEN_TOP(((*(int *)(gen_frame + 0x20)) + *((int *)GEN_TOP((*(int *)((int)this + 0x570) + 0xc))))));
      uVar4 = (*(uint *)(gen_frame + 0x18));
      if ((uVar1 != 0) && (iVar2 = *(int *)(param_1 + (*(uint *)(gen_frame + 0x18)) * 4), iVar2 != 0)) {
        iVar2 = *(int *)(iVar2 + 4);
        iVar5 = (int)*(short *)(iVar2 + 0x4a);
        (*(int *)(gen_frame + 0x14)) = iVar5;
        if ((*(char *)((int)this + 0x265) == '\0') &&
           ((*(char *)((int)this + 0x266) == '\0' && (*(char *)((int)this + 0x267) == '\0')))) {
          if ((iVar5 == 1) || (iVar5 == 2)) {
LAB_006fda10: ;
            (*(ushort *)(gen_frame + 0x1c)) = uVar1;
            (*(undefined1 *)(gen_frame + 0x1e)) = *(undefined1 *)(iVar2 + 0x28);
            F_00751770((undefined *)((int)this + 0x574),&(*(ushort *)(gen_frame + 0x1c)));
            F_0071db50(((undefined1 *)(gen_frame + 0x118)));
            F_006d8740((uint)uVar1,(*(int *)(gen_frame + 0x14)),((undefined1 *)(gen_frame + 0x118)));
            ((ushort *)(gen_frame + 0x24))[0] = uVar1;
            F_00720450(((undefined1 *)(gen_frame + 0x28)),((undefined1 *)(gen_frame + 0x118)));
            uVar6 = 0;
            uVar4 = F_0074bd60((undefined *)((int)this + 0x584),((ushort *)(gen_frame + 0x24)));
            F_007504b0((undefined *)((int)this + 0x584),((undefined1 *)(gen_frame + 0xc)),uVar4,uVar6);
            F_0042c880(((undefined1 *)(gen_frame + 0xc4)));
            F_0042c880(((undefined1 *)(gen_frame + 0x60)));
            F_0042c880(((undefined1 *)(gen_frame + 0x1b4)));
            F_0042c880(((undefined1 *)(gen_frame + 0x150)));
            uVar4 = (*(uint *)(gen_frame + 0x18));
          }
        }
        else if (iVar5 == 3) goto LAB_006fda10;
      }
      (*(uint *)(gen_frame + 0x18)) = uVar4 + 1;
      (*(int *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0x20)) + 0x10;
    } while (uVar4 + 1 < param_2);
  }
  puVar3 = *(undefined4 * PTR32 *)((int)this + 0x570);
  if (puVar3 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
    *(undefined4 *)((int)this + 0x570) = 0;
  }
  *(undefined4 *)((int)this + 0x56c) = 0;
  uVar4 = F_006fd600(this,*(undefined4 *)((int)this + 0x58),(uint)*(ushort *)((int)this + 0x54),
                     &REFG(undefined4, 0x1488348),(uint)REFG(undefined1, 0x1488342));
  F_00c47745((*(uint *)(gen_frame + 0x208)) ^ (uint)(uint)(gen_frame + 0x20c));
  return uVar4;
}

/* ref: FUN_006fdb50 */
uint F_006fdb50(unsigned int gen_a0)
{
  GEN_ENTER(0x6fdb50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * this_00;
  ushort * puVar2;
  uint uVar3;
  
  uVar1 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8));
  *(uint *)((int)this + 0x56c) = uVar1;
  uVar1 = F_00a4ffd0();
  this_00 = (undefined4 *)F_00406b90(0x20,0,0);
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(this_00,0x10,0);
    this_00[5] = 0x10;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10b9198));
    this_00[6] = this;
    this_00[7] = ((code *)REFP(0x6fd920));
  }
  uVar3 = 0;
  *(undefined4 * PTR32 *)((int)this + 0x570) = this_00;
  if (this_00[5] != 0) {
    puVar2 = (ushort *)(uVar1 + 0x1688);
    do {
      if ((char)puVar2[1] == -1) {
        uVar1 = (uint)*puVar2;
      }
      else {
        uVar1 = 0;
      }
      F_00cb4540(*(undefined * PTR32 *)((int)this + 0x570),uVar3,uVar1);
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 8;
    } while (uVar3 < *((uint *)GEN_TOP((*(int *)((int)this + 0x570) + 0x14))));
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x56c) + 0x48))))
                    (*(int * PTR32 *)((int)this + 0x56c),*(undefined4 *)((int)this + 0x570));
  return uVar1;
}

/* ref: FUN_006fdc10 */
uint F_006fdc10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fdc10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_006fd460(this,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[145])REFP(0x10bae44));
  uVar1 = F_0042ce40(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x10b64bc),REFG(undefined * PTR32, 0x1323718),param_1);
  F_0042ccf0((undefined *)((int)this + 0x118),uVar1);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return (uint)this;
}

/* ref: Client::Game::Event::CompanyLeveOfficerEventHandler::vf24 */
uint F_006fdc90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6fdc90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_006fd600((undefined *)this,param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_006fdcc0 */
uint F_006fdcc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fdcc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  F_006fd460(this,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[145])REFP(0x10bb08c));
  *(short *)((int)this + 0x1d4) = (short)param_1;
  F_0042b630((int)this + 0x1d8);
  F_0042b630((int)this + 0x22c);
  F_0042b630((int)this + 0x280);
  *(undefined4 *)((int)this + 0x2d4) = 0;
  *(undefined4 *)((int)this + 0x2d8) = 0;
  *(undefined4 *)((int)this + 0x2e4) = 0;
  uVar1 = F_004296a0(0x68,0,800);
  *(uint *)((int)this + 0x2e0) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x2e0) + 4))) = *(int *)((int)this + 0x2e0);
  *((int *)GEN_TOP((*(int *)((int)this + 0x2e0) + 8))) = *(int *)((int)this + 0x2e0);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x2e0) + 100))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x2e0) + 0x65))) = 1;
  *(byte *)((int)this + 0x2f0) = *(byte *)((int)this + 0x2f0) & 0xf0;
  *(undefined4 *)((int)this + 0x2ec) = 0;
  return (uint)this;
}

/* ref: FUN_006fdd70 */
uint F_006fdd70(unsigned int gen_a0)
{
  GEN_ENTER(0x6fdd70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[145])REFP(0x10bb08c));
  if (*(int *)((int)this + 0x2d8) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x2d4);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,*(int *)((int)this + 0x2d8));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x2d8);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x2d8) = 0;
    }
  }
  F_007528f0((undefined *)((int)this + 0x2dc),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x2e0),
               *(undefined4 * PTR32 *)((int)this + 0x2e0));
  F_00429760(*(undefined4 *)((int)this + 0x2e0),0x68,800);
  F_0042c880((undefined *)((int)this + 0x280));
  F_0042c880((undefined *)((int)this + 0x22c));
  F_0042c880((undefined *)((int)this + 0x1d8));
  uVar3 = F_006fd580(this);
  return uVar3;
}

/* ref: Client::Game::Event::CustomTalkEventHandler::vf6 */
uint F_006fde20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fde20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  undefined * this_00;
  
  F_006db1d0((undefined *)this,param_1);
  uVar1 = F_006dbc50(this_00,param_1);
  if (((byte)this[0x4c] & 2) != 0) {
    uVar1 = F_006fcf60(REFG(undefined4, 0x1488344),*(undefined4 *)(this + 0x50),*(undefined4 *)(this + 8),0,0,0,0
                        );
  }
  return uVar1;
}

/* ref: Client::Game::Event::CustomTalkEventHandler::vf18 */
uint F_006fde60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fde60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  F_006db430((undefined *)this,param_1);
  uVar1 = F_006dbc50(this,REFG(undefined4, 0x1379694));
  if (((byte)this[0x4c] & 2) != 0) {
    uVar1 = F_006fcf60(REFG(undefined4, 0x1488344),*(undefined4 *)(this + 0x50),*(undefined4 *)(this + 8),0,1,0,0
                        );
  }
  return uVar1;
}

/* ref: Client::Game::Event::DefaultTalkEventHandler::vf6 */
uint F_006fdeb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fdeb0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  F_006db1d0((undefined *)(*(undefined * PTR32 *)&gen_args[0]),(*(int *)&gen_args[1]));
  iVar2 = REFG(int, 0x1379694);
  if (REFG(int, 0x1379694) != 0) {
    iVar1 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4)));
    F_006d7550(&(*(int *)&gen_args[1]),REFG(int, 0x1379694));
    if ((*(int *)&gen_args[1]) != *(int *)(iVar1 + 0x30)) {
      *(undefined1 *)((*(int *)&gen_args[1]) + 0x7e) = 0;
    }
    iVar1 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4)));
    F_006d7550(&(*(int *)&gen_args[1]),iVar2);
    if ((*(int *)&gen_args[1]) != *(int *)(iVar1 + 0x30)) {
      *(undefined1 *)((*(int *)&gen_args[1]) + 0x7f) = 0;
    }
  }
  F_00a4a760(&REFG(undefined, 0x14a7360),0xf,1);
  uVar3 = F_006fcf60(REFG(undefined4, 0x1488344),*((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x50))),*((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8))),0,0x2001,
                       0,0);
  return uVar3;
}

/* ref: Client::Game::Event::QuestEventHandler::vf24 */
uint F_006fdf40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6fdf40u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  undefined1 QVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char * pcVar5;
  
  iVar3 = (*(int *)&gen_args[1]);
  iVar2 = REFG(int, 0x1488344);
  pcVar5 = *((char * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x16c)));
  if (*pcVar5 != '\0') {
    if (((*(int *)&gen_args[1]) != 0) && (*(char *)((*(int *)&gen_args[1]) + 0x8a) == '\a')) {
      F_006d7550(&(*(int *)&gen_args[1]),(*(int *)&gen_args[1]));
      if ((*(int *)&gen_args[1]) != *(int *)(iVar2 + 0x130)) {
        *(undefined1 *)((*(int *)&gen_args[1]) + 0x83) = 0;
      }
    }
    uVar4 = F_006fd600((undefined *)(*(undefined * PTR32 *)&gen_args[0]),iVar3,(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]));
    return uVar4;
  }
  *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x60))) = 0x3c;
  if (*((short *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x54))) != -1) {
    QVar1 = (*(undefined * PTR32 *)&gen_args[0])[0x5c];
    pcVar5 = ((char *)GEN_TOP(CONCAT31((int3)((uint)((int)(uintptr_t)pcVar5) >> 8),QVar1)));
    if (((byte)QVar1 & 4) == 0) {
      (*(undefined * PTR32 *)&gen_args[0])[0x5c] = (undefined1)((byte)QVar1 | 4);
      pcVar5 = (char *)F_006f15b0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))),0,0);
    }
  }
  return (uint)pcVar5;
}

/* ref: FUN_006fdfe0 */
uint F_006fdfe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fdfe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 0x8001;
  if (*(short *)((int)this + 0x36c) == -0x7fff) {
    uVar1 = F_006fcf60(REFG(undefined4, 0x1488344),param_1,*(undefined4 *)((int)this + 8),0x8001,1,0,0);
  }
  return uVar1;
}

/* ref: FUN_006fe010 */
uint F_006fe010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fe010u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  F_006fd460(this,param_1);
  *(undefined2 *)((int)this + 0x1d4) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[145])REFP(0x10bb2d4));
  *(undefined4 *)((int)this + 0x1d8) = 0;
  *(undefined4 *)((int)this + 0x1dc) = 0;
  *(undefined4 *)((int)this + 0x1e0) = 0;
  *(undefined4 *)((int)this + 0x1e4) = 0;
  F_0042b630((int)this + 0x1e8);
  *(undefined4 *)((int)this + 0x23c) = 0;
  *(undefined4 *)((int)this + 0x240) = 0;
  F_0071db50((undefined *)((int)this + 0x244));
  *(undefined4 *)((int)this + 0x334) = 0;
  *(undefined4 *)((int)this + 0x338) = 0;
  *(undefined4 *)((int)this + 0x33c) = 0;
  *(undefined4 *)((int)this + 0x34c) = 0;
  uVar1 = F_004296a0(0xa0,0,0x324);
  *(uint *)((int)this + 0x348) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x348) + 4))) = *(int *)((int)this + 0x348);
  *((int *)GEN_TOP((*(int *)((int)this + 0x348) + 8))) = *(int *)((int)this + 0x348);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x348) + 0x9c))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x348) + 0x9d))) = 1;
  *(undefined4 *)((int)this + 0x354) = 0;
  F_0042e430((undefined *)((int)this + 0x118),REFG(undefined * PTR32, 0x1323730));
  F_007516d0((undefined *)((int)this + 0x334),0x10);
  *(undefined4 *)((int)this + 0x358) = 0;
  *(undefined4 *)((int)this + 0x35c) = 0;
  *(undefined4 *)((int)this + 0x360) = 0;
  *(undefined4 *)((int)this + 0x364) = 0;
  *(undefined4 *)((int)this + 0x368) = 0;
  *(undefined4 *)((int)this + 0x36c) = 0;
  *(undefined4 *)((int)this + 0x370) = 0;
  *(undefined4 *)((int)this + 0x374) = 0;
  *(undefined4 *)((int)this + 0x378) = 0;
  *(undefined4 *)((int)this + 0x37c) = 0;
  *(undefined4 *)((int)this + 0x380) = 0;
  *(undefined4 *)((int)this + 900) = 0;
  *(undefined4 *)((int)this + 0x388) = 0;
  *(undefined4 *)((int)this + 0x38c) = 0;
  *(undefined4 *)((int)this + 0x390) = 0;
  *(undefined4 *)((int)this + 0x394) = 0;
  return (uint)this;
}

/* ref: FUN_006fe160 */
uint F_006fe160(unsigned int gen_a0)
{
  GEN_ENTER(0x6fe160u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  undefined4 * puVar2;
  int * piVar3;
  int iVar4;
  uint uVar5;
  int * piVar6;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[145])REFP(0x10bb2d4));
  if (*(int *)((int)this + 0x1dc) != 0) {
    piVar6 = *(int * PTR32 *)((int)this + 0x1d8);
    if (piVar6 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar6 + 0x4c))(piVar6,*(int *)((int)this + 0x1dc));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x1dc);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x1dc) = 0;
    }
  }
  if (*(int *)((int)this + 0x1e4) != 0) {
    piVar6 = *(int * PTR32 *)((int)this + 0x1e0);
    if (piVar6 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar6 + 0x4c))(piVar6,*(int *)((int)this + 0x1e4));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x1e4);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x1e4) = 0;
    }
  }
  piVar6 = (int *)((int)this + 0x358);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x10;
  do {
    if (*piVar6 != 0) {
      piVar3 = *(int * PTR32 *)((int)this + 0x354);
      if (piVar3 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar3 + 0x4c))(piVar3,*piVar6);
      }
      puVar2 = (undefined4 *)*piVar6;
      if (puVar2 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
        *piVar6 = 0;
      }
    }
    piVar6 = piVar6 + 1;
    pvVar1 = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + -1);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar1;
  } while (pvVar1 != (undefined *)0x0);
  F_00755030((undefined *)((int)this + 0x344),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x348),
               *(undefined4 * PTR32 *)((int)this + 0x348));
  F_00429760(*(undefined4 *)((int)this + 0x348),0xa0,0x324);
  iVar4 = *(int *)((int)this + 0x334);
  if (iVar4 != 0) {
    F_00429760(iVar4,(*(int *)((int)this + 0x33c) - iVar4 >> 1) * 2,800);
  }
  *(undefined4 *)((int)this + 0x334) = 0;
  *(undefined4 *)((int)this + 0x338) = 0;
  *(undefined4 *)((int)this + 0x33c) = 0;
  F_0042c880((undefined *)((int)this + 0x2e0));
  F_0042c880((undefined *)((int)this + 0x27c));
  F_0042c880((undefined *)((int)this + 0x1e8));
  uVar5 = F_006fd580(this);
  return uVar5;
}

/* ref: FUN_006fe2b0 */
uint F_006fe2b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6fe2b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x1e4);
  *(undefined4 *)((int)this + 0x240) = *(undefined4 *)(*param_1 + 4);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0x1e4) = 0;
  }
  uVar2 = F_006fd600(this,*(undefined4 *)((int)this + 0x58),(uint)*(ushort *)((int)this + 0x54),
                     &REFG(undefined4, 0x1488348),(uint)REFG(undefined1, 0x1488342));
  return uVar2;
}

/* ref: FUN_006fe310 */
uint F_006fe310(unsigned int gen_a0)
{
  GEN_ENTER(0x6fe310u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  undefined4 * this_00;
  
  (*(uint *)(gen_frame + 0x8)) = (uint)*(ushort *)((int)this + 0x1d4);
  F_00744670((undefined *)((int)this + 0x344),&(*(int *)(gen_frame + 0x4)),&(*(uint *)(gen_frame + 0x8)));
  if (*(int *)((int)this + 0x1e0) == 0) {
    uVar1 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8));
    *(uint *)((int)this + 0x1e0) = uVar1;
  }
  this_00 = (undefined4 *)F_00406b90(0x20,0,0);
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(this_00,1,0);
    this_00[5] = 1;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10b923c));
    this_00[6] = this;
    this_00[7] = ((code *)REFP(0x6fe2b0));
  }
  *(undefined4 * PTR32 *)((int)this + 0x1e4) = this_00;
  F_00cb4540(this_00,0,*(undefined4 *)((*(int *)(gen_frame + 0x4)) + 0x14));
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1e0) + 0x48))))
                    (*(int * PTR32 *)((int)this + 0x1e0),*(undefined4 *)((int)this + 0x1e4));
  return uVar1;
}

/* ref: FUN_006fe3d0 */
uint F_006fe3d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fe3d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  F_006fd460(this,param_1);
  *(int *)((int)this + 0x1d4) = (int)this + 8;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[146])REFP(0x10bb51c));
  *(undefined4 *)((int)this + 0x1d8) = 0;
  *(undefined4 *)((int)this + 0x1dc) = 0;
  F_0042b630((int)this + 0x1e0);
  *(undefined4 *)((int)this + 0x234) = 0;
  *(undefined4 *)((int)this + 0x238) = 0;
  *(undefined4 *)((int)this + 0x244) = 0;
  uVar1 = F_004296a0(0x68,0,800);
  *(uint *)((int)this + 0x240) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x240) + 4))) = *(int *)((int)this + 0x240);
  *((int *)GEN_TOP((*(int *)((int)this + 0x240) + 8))) = *(int *)((int)this + 0x240);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x240) + 100))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x240) + 0x65))) = 1;
  *(undefined1 *)((int)this + 0x24c) = 0;
  *(undefined4 *)((int)this + 0x250) = 0;
  *(undefined4 *)((int)this + 0x254) = 0;
  *(undefined4 *)((int)this + 600) = 0;
  *(undefined4 *)((int)this + 0x25c) = 0;
  *(undefined4 *)((int)this + 0x260) = 0;
  F_0042b630((int)this + 0x264);
  F_0042b630((int)this + 0x2b8);
  F_0042b630((int)this + 0x30c);
  *(undefined2 *)((int)this + 0x36c) = 0;
  *(undefined1 *)((int)this + 0x364) = 0;
  *(undefined4 *)((int)this + 0x370) = 0;
  *(undefined1 *)((int)this + 0x374) = 0;
  *(undefined4 *)((int)this + 0x360) = 0;
  *(undefined4 *)((int)this + 0x366) = 0;
  *(undefined2 *)((int)this + 0x36a) = 0;
  return (uint)this;
}

/* ref: FUN_006fe4f0 */
uint F_006fe4f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6fe4f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[146])REFP(0x10bb51c));
  if (*(int *)((int)this + 0x238) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x234);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,*(int *)((int)this + 0x238));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x238);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x238) = 0;
    }
  }
  F_0042c880((undefined *)((int)this + 0x30c));
  F_0042c880((undefined *)((int)this + 0x2b8));
  F_0042c880((undefined *)((int)this + 0x264));
  F_007528f0((undefined *)((int)this + 0x23c),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x240),
               *(undefined4 * PTR32 *)((int)this + 0x240));
  F_00429760(*(undefined4 *)((int)this + 0x240),0x68,800);
  F_0042c880((undefined *)((int)this + 0x1e0));
  uVar3 = F_006fd580(this);
  return uVar3;
}

/* ref: FUN_006fe5a0 */
uint F_006fe5a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fe5a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  F_006fd460(this,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[145])REFP(0x10bb76c));
  *(undefined4 *)((int)this + 0x1d4) = param_1;
  F_0042b630((int)this + 0x1d8);
  *(undefined4 *)((int)this + 0x22c) = 0;
  *(undefined4 *)((int)this + 0x230) = 0;
  *(undefined4 *)((int)this + 0x23c) = 0;
  uVar1 = F_004296a0(0x68,0,800);
  *(uint *)((int)this + 0x238) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x238) + 4))) = *(int *)((int)this + 0x238);
  *((int *)GEN_TOP((*(int *)((int)this + 0x238) + 8))) = *(int *)((int)this + 0x238);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x238) + 100))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x238) + 0x65))) = 1;
  *(undefined4 *)((int)this + 0x244) = 0;
  *(undefined4 *)((int)this + 0x248) = 0;
  *(undefined4 *)((int)this + 0x24c) = 0;
  *(undefined4 *)((int)this + 0x25c) = 0;
  uVar1 = F_004296a0(0x18,0,800);
  *(uint *)((int)this + 600) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 600) + 4))) = *(int *)((int)this + 600);
  *((int *)GEN_TOP((*(int *)((int)this + 600) + 8))) = *(int *)((int)this + 600);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 600) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 600) + 0x15))) = 1;
  F_0042e430((undefined *)((int)this + 0x118),REFG(undefined * PTR32, 0x1323740));
  *(uint *)((int)this + 0x38) = *(uint *)((int)this + 0x38) & 0xfffffffd;
  return (uint)this;
}

/* ref: FUN_006fe690 */
uint F_006fe690(unsigned int gen_a0)
{
  GEN_ENTER(0x6fe690u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[145])REFP(0x10bb76c));
  if (*(int *)((int)this + 0x230) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x22c);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,*(int *)((int)this + 0x230));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x230);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x230) = 0;
    }
  }
  F_00746240((undefined *)((int)this + 0x254),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 600),
               *(undefined4 * PTR32 *)((int)this + 600));
  F_00429760(*(undefined4 *)((int)this + 600),0x18,800);
  F_00752460((undefined *)((int)this + 0x244));
  F_007528f0((undefined *)((int)this + 0x234),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x238),
               *(undefined4 * PTR32 *)((int)this + 0x238));
  F_00429760(*(undefined4 *)((int)this + 0x238),0x68,800);
  F_0042c880((undefined *)((int)this + 0x1d8));
  uVar3 = F_006fd580(this);
  return uVar3;
}

/* ref: FUN_006fe760 */
uint F_006fe760(unsigned int gen_a0)
{
  GEN_ENTER(0x6fe760u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * this_00;
  uint uVar2;
  
  this_00 = (undefined4 *)F_00406b90(0x20,0,0);
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(this_00,1,0);
    this_00[5] = 1;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10b928c));
    this_00[6] = this;
    this_00[7] = ((code *)REFP(0x6fc4d0));
  }
  *(undefined4 * PTR32 *)((int)this + 0x13c) = this_00;
  if (*(int *)((int)this + 0x140) == 0) {
    uVar2 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8));
    *(uint *)((int)this + 0x140) = uVar2;
  }
  uVar2 = F_00cb4540(*(undefined * PTR32 *)((int)this + 0x13c),0,*(undefined4 *)((int)this + 8));
  piVar1 = *(int * PTR32 *)((int)this + 0x140);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1,*(undefined4 *)((int)this + 0x13c));
  }
  return uVar2;
}

/* ref: FUN_006fe800 */
uint F_006fe800(unsigned int gen_a0)
{
  GEN_ENTER(0x6fe800u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x10bb9b4));
  F_00749bf0((undefined *)((int)this + 0x3c),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x40),
               *(undefined4 * PTR32 *)((int)this + 0x40));
  F_00429760(*(undefined4 *)((int)this + 0x40),0x1c,800);
  F_00744dc0((undefined *)((int)this + 0x2c),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x30),
               *(undefined4 * PTR32 *)((int)this + 0x30));
  F_00429760(*(undefined4 *)((int)this + 0x30),0x18,800);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10ba978));
  uVar1 = F_00757fb0((undefined *)((int)this + 8));
  return uVar1;
}

/* ref: Client::Game::Event::LeveDirector::vf24 */
uint F_006fe870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6fe870u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  if ((param_2 & 0xffff) == 2) {
    F_00ab6b60();
  }
  uVar1 = F_006fd600((undefined *)this,param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_006fe8b0 */
uint F_006fe8b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fe8b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 0x34c) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x348);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,*(int *)((int)this + 0x34c));
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 0x34c);
    if (puVar3 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
      *(undefined4 *)((int)this + 0x34c) = 0;
    }
  }
  uVar2 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8));
  *(uint *)((int)this + 0x348) = uVar2;
  uVar4 = 0;
  if (uVar2 != 0) {
    puVar3 = (undefined4 *)F_00406b90(0x20,0,0);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      F_00cb4700(puVar3,1,0);
      puVar3[5] = 1;
      *puVar3 = (*(undefined * PTR32 (*)[2])REFP(0x10b92b0));
      puVar3[6] = this;
      puVar3[7] = ((code *)REFP(0x6fc9f0));
    }
    *(undefined4 * PTR32 *)((int)this + 0x34c) = puVar3;
    F_00cb4540(puVar3,0,param_1);
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x348) + 0x48))))
                      (*(int * PTR32 *)((int)this + 0x348),*(undefined4 *)((int)this + 0x34c));
  }
  return uVar4;
}

/* ref: FUN_006fe980 */
uint F_006fe980(unsigned int gen_a0)
{
  GEN_ENTER(0x6fe980u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10bb9d4));
  F_00745180((undefined *)((int)this + 0x4c));
  F_00429760(*(undefined4 *)((int)this + 0x4c),8,800);
  *(undefined4 *)((int)this + 0x4c) = 0;
  F_00749c90((undefined *)((int)this + 0x3c),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x40),
               *(undefined4 * PTR32 *)((int)this + 0x40));
  F_00429760(*(undefined4 *)((int)this + 0x40),0x18,800);
  iVar1 = *(int *)((int)this + 0x2c);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0x34) - iVar1 >> 2) * 4,800);
  }
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10ba978));
  uVar2 = F_00757fb0((undefined *)((int)this + 8));
  return uVar2;
}

/* ref: FUN_006fea30 */
uint F_006fea30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fea30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  F_006fd460(this,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[145])REFP(0x10bb9f4));
  *(undefined4 *)((int)this + 0x1d4) = param_1;
  *(undefined2 *)((int)this + 0x1d8) = 0;
  F_0042b630((int)this + 0x1dc);
  *(undefined4 *)((int)this + 0x230) = 0;
  *(undefined4 *)((int)this + 0x234) = 0;
  *(undefined4 *)((int)this + 0x240) = 0;
  uVar1 = F_004296a0(0x68,0,800);
  *(uint *)((int)this + 0x23c) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x23c) + 4))) = *(int *)((int)this + 0x23c);
  *((int *)GEN_TOP((*(int *)((int)this + 0x23c) + 8))) = *(int *)((int)this + 0x23c);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x23c) + 100))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x23c) + 0x65))) = 1;
  F_0042e430((undefined *)((int)this + 0x118),REFG(undefined * PTR32, 0x1323770));
  *(uint *)((int)this + 0x38) = *(uint *)((int)this + 0x38) | 0x8c00;
  return (uint)this;
}

/* ref: FUN_006feae0 */
uint F_006feae0(unsigned int gen_a0)
{
  GEN_ENTER(0x6feae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[145])REFP(0x10bb9f4));
  if (*(int *)((int)this + 0x234) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x230);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,*(int *)((int)this + 0x234));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x234);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x234) = 0;
    }
  }
  F_007528f0((undefined *)((int)this + 0x238),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x23c),
               *(undefined4 * PTR32 *)((int)this + 0x23c));
  F_00429760(*(undefined4 *)((int)this + 0x23c),0x68,800);
  F_0042c880((undefined *)((int)this + 0x1dc));
  uVar3 = F_006fd580(this);
  return uVar3;
}

/* ref: FUN_006feb70 */
uint F_006feb70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6feb70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_006fd460(this,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[145])REFP(0x10bbc3c));
  *(undefined1 *)((int)this + 0x1d4) = 0;
  F_0042e430((undefined *)((int)this + 0x118),REFG(undefined * PTR32, 0x1323778));
  *(uint *)((int)this + 0x38) = *(uint *)((int)this + 0x38) | 0x400;
  return (uint)this;
}

/* ref: FUN_006febc0 */
uint F_006febc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6febc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  F_006fd460(this,param_1);
  *(int *)((int)this + 0x1d4) = (int)this + 8;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[145])REFP(0x10bbe84));
  F_0042b630((int)this + 0x1d8);
  *(undefined4 *)((int)this + 0x22c) = 0;
  puVar1 = (undefined4 *)((int)this + 0x230);
  iVar2 = 0xf;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1 = puVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  F_0042e430((undefined *)((int)this + 0x118),REFG(undefined * PTR32, 0x1323780));
  F_00ab0230(0x18fed,(int)this + 0x1d8);
  return (uint)this;
}

/* ref: FUN_006fec40 */
uint F_006fec40(unsigned int gen_a0)
{
  GEN_ENTER(0x6fec40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[145])REFP(0x10bbe84));
  F_0042c880((undefined *)((int)this + 0x1d8));
  uVar1 = F_006fd580(this);
  return uVar1;
}

/* ref: FUN_006fec60 */
uint F_006fec60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6fec60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_006fd460(this,param_1);
  *(int *)((int)this + 0x1d4) = (int)this + 8;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[157])REFP(0x10bc0cc));
  *(undefined4 *)((int)this + 0x1d8) = param_2;
  *(undefined2 *)((int)this + 0x1dc) = 0;
  F_0042b630((int)this + 0x1e8);
  F_0042b630((int)this + 0x23c);
  F_0042b630((int)this + 0x290);
  *(undefined4 *)((int)this + 0x2e8) = 0;
  *(undefined4 *)((int)this + 0x2ec) = 0;
  *(undefined4 *)((int)this + 0x2f0) = 0;
  *(undefined4 *)((int)this + 0x2f4) = 0;
  *(undefined4 *)((int)this + 0x2f8) = 0;
  *(undefined4 *)((int)this + 0x2fc) = 0;
  *(undefined4 *)((int)this + 0x300) = 0;
  *(undefined4 *)((int)this + 0x308) = 0;
  *(undefined4 *)((int)this + 0x30c) = 0;
  *(undefined4 *)((int)this + 0x1de) = 0;
  *(undefined4 *)((int)this + 0x1e2) = 0;
  *(undefined2 *)((int)this + 0x1e6) = 0;
  F_007567c0((undefined4 *)((int)this + 0x2f8),8);
  return (uint)this;
}

/* ref: FUN_006fed10 */
uint F_006fed10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fed10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 in_edi = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  *in_ecx = (*(undefined * PTR32 (*)[157])REFP(0x10bc0cc));
  if (REFG(undefined4, 0x14b119c) == in_ecx) {
    F_00a79840(&REFG(undefined4, 0x14b119c),0);
  }
  if (REFG(undefined4, 0x14b26a8) == in_ecx) {
    F_00a84350(&REFG(undefined, 0x14b1258),0);
  }
  if ((REFG(int, 0x1379694) != 0) && (*(int *)(REFG(int, 0x1379694) + 0xe4) == *(int *)in_ecx[0x75])) {
    piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1)));
    uVar2 = F_0042cc20(((undefined4 *)(gen_frame + 0x4)),&REFG(undefined, 0x10b3a7f),REFG(undefined4, 0x108cc50));
    pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,0x37)));
    pvVar3 = (undefined *)F_00484010(pvVar3,uVar2);
    F_00490f90(pvVar3,in_edi);
    F_0042c880(((undefined4 *)(gen_frame + 0x4)));
  }
  F_00751db0(in_ecx + 0xbe);
  F_0042c880(in_ecx + 0xa4);
  F_0042c880(in_ecx + 0x8f);
  F_0042c880(in_ecx + 0x7a);
  uVar2 = F_006fd580(in_ecx);
  ((undefined4 *)(gen_frame + 0x4))[0] = 0x6fedf6;
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar2;
}

/* ref: FUN_006fee00 */
uint F_006fee00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6fee00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_006fec60(this,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[157])REFP(0x10bc344));
  *(undefined4 *)((int)this + 0x310) = 0;
  *(undefined4 *)((int)this + 0x314) = 0;
  *(undefined1 *)((int)this + 0x318) = 0;
  F_00ba0ed0((int)this + 0x31c,this);
  *(undefined4 *)((int)this + 0x3b8) = 0;
  F_0042b630((int)this + 0x3bc);
  F_0042b630((int)this + 0x410);
  F_0042b630((int)this + 0x464);
  *(uint *)((int)this + 0x38) = *(uint *)((int)this + 0x38) | 0x8004;
  *(undefined4 *)((int)this + 0x4b8) = 0;
  *(undefined4 *)((int)this + 0x4bc) = 0;
  *(undefined4 *)((int)this + 0x4c0) = 0;
  *(undefined4 *)((int)this + 0x4c4) = 0;
  *(undefined4 *)((int)this + 0x4c8) = 0;
  *(undefined4 *)((int)this + 0x4cc) = 0;
  return (uint)this;
}

/* ref: FUN_006feea0 */
uint F_006feea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6feea0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 in_edi = (undefined4)gen_a1;
  uint uVar1;
  
  *in_ecx = (*(undefined * PTR32 (*)[157])REFP(0x10bc344));
  if ((in_ecx[0x12e] != 0) && (in_ecx[0xee] != 0)) {
    F_006e5450(REFG(undefined4, 0x1488344),*(undefined4 *)(in_ecx[0xee] + 800),0);
  }
  F_00a69720(&REFG(undefined, 0x14ab380));
  F_00ab6b60();
  F_0042c880(in_ecx + 0x119);
  F_0042c880(in_ecx + 0x104);
  F_0042c880(in_ecx + 0xef);
  F_00ba0f80(in_ecx + 199);
  uVar1 = F_006fed10(in_ecx,in_edi);
  return uVar1;
}

/* ref: Client::Game::Event::QuestBattleDirector::vf24 */
uint F_006fef20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6fef20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_006fd600((undefined *)this,param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Client::Game::Event::QuestBattleDirector::vf28 */
uint F_006fef30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6fef30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_006fd360((undefined *)this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_006fef40 */
uint F_006fef40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fef40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  undefined4 * this_00;
  
  uVar1 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8));
  *(uint *)((int)this + 0x310) = uVar1;
  this_00 = (undefined4 *)F_00406b90(0x20,0,0);
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(this_00,1,0);
    this_00[5] = 1;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10b92d4));
    this_00[6] = this;
    this_00[7] = ((code *)REFP(0x6fcbe0));
  }
  *(undefined4 * PTR32 *)((int)this + 0x314) = this_00;
  F_00cb4540(this_00,0,param_1);
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x310) + 0x48))))
                    (*(int * PTR32 *)((int)this + 0x310),*(undefined4 *)((int)this + 0x314));
  return uVar1;
}

/* ref: FUN_006fefd0 */
uint F_006fefd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x6fefd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[9];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  gen_args[8] = gen_a8;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  
  if (999999 < (*(uint *)&gen_args[1])) {
    (*(uint *)&gen_args[1]) = (*(uint *)&gen_args[1]) - 1000000;
    (*(undefined4 *)&gen_args[2]) = CONCAT31(GEN_PIECE(&(*(undefined4 *)&gen_args[2]), 1, 3),1);
  }
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x78c)));
  uVar5 = F_00745750(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x78c))),&(*(int *)(gen_frame + 0xc)),&(*(uint *)&gen_args[1]));
  uVar2 = (*(undefined4 *)&gen_args[6]);
  uVar1 = (*(undefined4 *)&gen_args[5]);
  (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0xc));
  if ((*(int *)(gen_frame + 0xc)) != (*(int *)(gen_frame + 0x10))) {
    while (iVar3 = (*(int *)(gen_frame + 0x18)),
          bVar4 = F_006b92d0((undefined *)((*(int *)(gen_frame + 0x18)) + 0x18),(*(uint *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]),uVar1,uVar2,
                               (*(undefined4 *)&gen_args[7])), bVar4 == 0) {
      uVar5 = F_00724e40(&(*(int *)(gen_frame + 0x18)));
      if ((*(int *)(gen_frame + 0x18)) == (*(int *)(gen_frame + 0x10))) {
        return uVar5;
      }
    }
    (*(uint *)&gen_args[1]) = (*(undefined4 *)&gen_args[8]);
    F_0073cae0((undefined *)(iVar3 + 0x74),&(*(int *)(gen_frame + 0xc)),&(*(uint *)&gen_args[1]));
    uVar5 = F_007496b0((undefined *)(iVar3 + 0x74),&(*(uint *)&gen_args[1]),(*(int *)(gen_frame + 0xc)),(*(int *)(gen_frame + 0x10)));
    if (*(int *)(iVar3 + 0x7c) == 0) {
      uVar5 = F_00759160((*(undefined * PTR32 *)(gen_frame + 0x14)),&(*(uint *)&gen_args[1]),iVar3);
    }
  }
  return uVar5;
}

/* ref: FUN_006ff0a0 */
uint F_006ff0a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ff0a0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  
  piVar3 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x790)));
  piVar5 = (int *)*piVar3;
  if (piVar5 != piVar3) {
    do {
      F_0073cae0(piVar5 + 0x1d,&(*(undefined4 *)(gen_frame + 0xc)),&(*(undefined4 *)&gen_args[1]));
      piVar3 = (int *)F_007496b0(piVar5 + 0x1d,((undefined1 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)));
      if (piVar5[0x1f] == 0) {
        piVar4 = piVar5;
        if (*(char *)((int)piVar5 + 0x89) == '\0') {
          piVar4 = (int *)piVar5[2];
          if (*(char *)((int)piVar4 + 0x89) == '\0') {
            cVar1 = *(char *)(*piVar4 + 0x89);
            piVar3 = (int *)*piVar4;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*piVar3 + 0x89);
              piVar4 = piVar3;
              piVar3 = (int *)*piVar3;
            }
          }
          else {
            cVar1 = *(char *)(piVar5[1] + 0x89);
            piVar2 = (int *)piVar5[1];
            piVar3 = piVar5;
            while ((piVar4 = piVar2, cVar1 == '\0' && (piVar3 == (int *)piVar4[2]))) {
              cVar1 = *(char *)(piVar4[1] + 0x89);
              piVar2 = (int *)piVar4[1];
              piVar3 = piVar4;
            }
          }
        }
        piVar3 = (int *)F_00759160(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x78c))),((undefined1 *)(gen_frame + 0x14)),piVar5);
        piVar5 = piVar4;
      }
      else if (*(char *)((int)piVar5 + 0x89) == '\0') {
        piVar4 = (int *)piVar5[2];
        if (*(char *)((int)piVar4 + 0x89) == '\0') {
          cVar1 = *(char *)(*piVar4 + 0x89);
          piVar3 = (int *)*piVar4;
          while (piVar5 = piVar4, cVar1 == '\0') {
            cVar1 = *(char *)(*piVar3 + 0x89);
            piVar4 = piVar3;
            piVar3 = (int *)*piVar3;
          }
        }
        else {
          cVar1 = *(char *)(piVar5[1] + 0x89);
          piVar2 = (int *)piVar5[1];
          piVar4 = piVar5;
          while ((piVar3 = piVar2, piVar5 = piVar3, cVar1 == '\0' && (piVar4 == (int *)piVar3[2])))
          {
            cVar1 = *(char *)(piVar3[1] + 0x89);
            piVar2 = (int *)piVar3[1];
            piVar4 = piVar3;
          }
        }
      }
    } while (piVar5 != *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x790))));
  }
  return (uint)piVar3;
}

/* ref: Client::Game::Event::EventHandler::vf4 */
uint F_006ff1d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ff1d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  int * piVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined * pvVar5;
  undefined4 * puVar6;
  undefined4 * PTR32 * ppuVar7;
  uint uVar8;
  undefined4 * puVar9;
  
  pvVar5 = REFG(undefined4, 0x1488344);
  F_006da0a0(REFG(undefined4, 0x1488344),this + 0x20);
  F_006da0f0(pvVar5,this + 0x28);
  F_006de8d0(pvVar5,this,0);
  F_006ff0a0(pvVar5,this + 0x30);
  F_006debf0(pvVar5,this);
  (*(int * PTR32 *)(gen_frame + 0x18)) = *(int * PTR32 *)(this + 0xe8);
  if ((*(int * PTR32 *)(gen_frame + 0x18)) != *(int * PTR32 *)(this + 0xec)) {
    do {
      pvVar5 = REFG(undefined4, 0x1488344);
      uVar8 = *(uint *)(*(*(int * PTR32 *)(gen_frame + 0x18)) + 8);
      puVar9 = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)((int)REFG(undefined4, 0x1488344) + 0x30))[1]));
      cVar1 = *(char *)((int)puVar9 + 0x15);
      (*(uint *)(gen_frame + 0xc)) = uVar8;
      puVar3 = *(undefined4 * PTR32 *)((int)REFG(undefined4, 0x1488344) + 0x30);
      while (cVar1 == '\0') {
        if ((uint)puVar9[3] < uVar8) {
          puVar6 = (undefined4 *)puVar9[2];
          puVar9 = puVar3;
        }
        else {
          puVar6 = (undefined4 *)*puVar9;
        }
        puVar3 = puVar9;
        puVar9 = puVar6;
        cVar1 = *(char *)((int)puVar6 + 0x15);
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0x14)) = puVar3;
      if ((puVar3 == *(undefined4 * PTR32 *)((int)REFG(undefined4, 0x1488344) + 0x30)) || (uVar8 < (uint)puVar3[3])) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = *(undefined4 * PTR32 *)((int)REFG(undefined4, 0x1488344) + 0x30);
        ppuVar7 = &(*(undefined4 * PTR32 *)(gen_frame + 0x10));
      }
      else {
        ppuVar7 = &(*(undefined4 * PTR32 *)(gen_frame + 0x14));
      }
      puVar9 = *ppuVar7;
      if (((puVar9 != *(undefined4 * PTR32 *)((int)REFG(undefined4, 0x1488344) + 0x30)) &&
          (piVar2 = (int *)puVar9[4], piVar2 != (int *)0x0)) &&
         (uVar8 = ((code *)*(gen_code32 *)(*piVar2 + 0x238))(piVar2,0), uVar8 == 0)) {
        ((code *)*(gen_code32 *)(*(int *)puVar9[4] + 0x10))((int *)puVar9[4]);
        puVar3 = (undefined4 *)puVar9[4];
        if (puVar3 != (undefined4 *)0x0) {
          ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
          puVar9[4] = 0;
        }
        F_0073d240((undefined *)((int)pvVar5 + 0x2c),&(*(undefined4 *)(gen_frame + 0x0)),&(*(uint *)(gen_frame + 0xc)));
        F_00744dc0((undefined *)((int)pvVar5 + 0x2c),((undefined1 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)));
      }
      (*(int * PTR32 *)(gen_frame + 0x18)) = (*(int * PTR32 *)(gen_frame + 0x18)) + 1;
    } while ((*(int * PTR32 *)(gen_frame + 0x18)) != *(int * PTR32 *)(this + 0xec));
  }
  iVar4 = *(int *)(this + 0xe8);
  if (iVar4 != *(int *)(this + 0xec)) {
    F_00c46e20(iVar4,*(int *)(this + 0xec),0);
    *(int *)(this + 0xec) = iVar4;
  }
  F_0042aca0(this + 0x7c);
  uVar8 = F_006bcd10(this);
  this[0x1c] = (undefined1)((byte)this[0x1c] & 0xfe);
  return uVar8;
}

/* ref: FUN_006ff350 */
uint F_006ff350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x6ff350u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_006fefd0(REFG(undefined4, 0x1488344),param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                       (int)this + 0x30);
  return uVar1;
}

/* ref: Client::Game::Event::LuaEventHandler::vf4 */
uint F_006ff3a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ff3a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 uVar2;
  
  if (**(char * PTR32 *)(this + 0x16c) != '\0') {
    uVar2 = 0;
    uVar1 = F_0042a990(this + 0x16c);
    F_00a024d0(*(undefined * PTR32 *)(this + 0xf8),"OnTerminate",uVar1,uVar2);
  }
  F_006bd340(this);
  uVar1 = F_006ff1d0((undefined *)this);
  return uVar1;
}

/* ref: FUN_006ff3e0 */
uint F_006ff3e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ff3e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  undefined * this;
  
  uVar1 = F_00ab2690(param_1 & 0xffff);
  if (uVar1 != 0) {
    this = (undefined *)F_00406b90(0x31c,0,0);
    if (this != (undefined *)0x0) {
      uVar1 = F_006fd6e0(this,param_1 & 0xffff | 0x50000);
      return uVar1;
    }
  }
  return 0;
}

/* ref: Client::Game::Event::ArrayEventHandler::vf4 */
uint F_006ff420(unsigned int gen_a0)
{
  GEN_ENTER(0x6ff420u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  char cVar2;
  int * piVar3;
  undefined4 * puVar4;
  int * piVar5;
  undefined4 * puVar6;
  undefined4 * PTR32 * ppuVar7;
  uint uVar8;
  undefined4 * puVar9;
  int * piVar10;
  
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = this;
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = this + 0xf8;
  (*(int *)(gen_frame + 0x20)) = 0x10;
  do {
    if ((*(int *)(*(undefined * PTR32 *)(gen_frame + 0x28)) != 0) &&
       (piVar10 = ((int *)GEN_TOP(**(int * PTR32 *)(this + 0x10))), piVar10 != *(int * PTR32 *)(this + 0x10))) {
      do {
        iVar1 = REFG(int, 0x1488344);
        uVar8 = *(uint *)(*(int *)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 8);
        (*(int *)(gen_frame + 0x14)) = piVar10[3];
        puVar9 = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)(REFG(int, 0x1488344) + 0x30))[1]));
        cVar2 = *(char *)((int)puVar9 + 0x15);
        (*(uint *)(gen_frame + 0x10)) = uVar8;
        puVar4 = *(undefined4 * PTR32 *)(REFG(int, 0x1488344) + 0x30);
        while (cVar2 == '\0') {
          if ((uint)puVar9[3] < uVar8) {
            puVar6 = (undefined4 *)puVar9[2];
            puVar9 = puVar4;
          }
          else {
            puVar6 = (undefined4 *)*puVar9;
          }
          puVar4 = puVar9;
          puVar9 = puVar6;
          cVar2 = *(char *)((int)puVar6 + 0x15);
        }
        (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = puVar4;
        if ((puVar4 == *(undefined4 * PTR32 *)(REFG(int, 0x1488344) + 0x30)) || (uVar8 < (uint)puVar4[3])) {
          (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = *(undefined4 * PTR32 *)(REFG(int, 0x1488344) + 0x30);
          ppuVar7 = &(*(undefined4 * PTR32 *)(gen_frame + 0x18));
        }
        else {
          ppuVar7 = &(*(undefined4 * PTR32 *)(gen_frame + 0x1c));
        }
        puVar9 = *ppuVar7;
        if (((puVar9 != *(undefined4 * PTR32 *)(REFG(int, 0x1488344) + 0x30)) &&
            (piVar3 = (int *)puVar9[4], piVar3 != (int *)0x0)) &&
           (uVar8 = ((code *)*(gen_code32 *)(*piVar3 + 0x238))(piVar3,piVar10[3]), uVar8 == 0)) {
          ((code *)*(gen_code32 *)(*(int *)puVar9[4] + 0x10))((int *)puVar9[4]);
          puVar4 = (undefined4 *)puVar9[4];
          if (puVar4 != (undefined4 *)0x0) {
            ((code *)*(gen_code32 *)*puVar4)(puVar4,1);
            puVar9[4] = 0;
          }
          F_0073d240((undefined *)(iVar1 + 0x2c),&(*(undefined4 *)(gen_frame + 0x4)),&(*(uint *)(gen_frame + 0x10)));
          F_00744dc0((undefined *)(iVar1 + 0x2c),((undefined1 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
        }
        *(int *)(*(undefined * PTR32 *)(gen_frame + 0x28)) = 0;
        if (*(char *)((int)piVar10 + 0x11) == '\0') {
          piVar3 = (int *)piVar10[2];
          if (*(char *)((int)piVar3 + 0x11) == '\0') {
            cVar2 = *(char *)(*piVar3 + 0x11);
            piVar10 = piVar3;
            piVar3 = (int *)*piVar3;
            while (cVar2 == '\0') {
              cVar2 = *(char *)(*piVar3 + 0x11);
              piVar10 = piVar3;
              piVar3 = (int *)*piVar3;
            }
          }
          else {
            cVar2 = *(char *)(piVar10[1] + 0x11);
            piVar5 = (int *)piVar10[1];
            piVar3 = piVar10;
            while ((piVar10 = piVar5, cVar2 == '\0' && (piVar3 == (int *)piVar10[2]))) {
              cVar2 = *(char *)(piVar10[1] + 0x11);
              piVar5 = (int *)piVar10[1];
              piVar3 = piVar10;
            }
          }
        }
        this = (*(undefined * PTR32 *)(gen_frame + 0x24));
      } while (piVar10 != *(int * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x10));
    }
    (*(undefined * PTR32 *)(gen_frame + 0x28)) = (*(undefined * PTR32 *)(gen_frame + 0x28)) + 4;
    iVar1 = (*(int *)(gen_frame + 0x20)) + -1;
    (*(int *)(gen_frame + 0x20)) = iVar1;
  } while (iVar1 != 0);
  uVar8 = F_006ff1d0((undefined *)this);
  return uVar8;
}

/* ref: FUN_006ff590 */
uint F_006ff590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6ff590u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x570);
  *(undefined4 *)((int)this + 0x268) = *(undefined4 *)(*param_1 + 4);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0x570) = 0;
  }
  *(undefined4 *)((int)this + 0x56c) = 0;
  uVar2 = F_006fdb50(this);
  return uVar2;
}

/* ref: FUN_006ff5e0 */
uint F_006ff5e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ff5e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * this_00;
  
  uVar1 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8));
  *(uint *)((int)this + 0x56c) = uVar1;
  this_00 = (undefined4 *)F_00406b90(0x20,0,0);
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(this_00,1,0);
    this_00[5] = 1;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10b9198));
    this_00[6] = this;
    this_00[7] = ((code *)REFP(0x6ff590));
  }
  *(undefined4 * PTR32 *)((int)this + 0x570) = this_00;
  F_00cb4540(this_00,0,*(undefined4 *)((int)this + 600));
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x56c) + 0x48))))
                    (*(int * PTR32 *)((int)this + 0x56c),*(undefined4 *)((int)this + 0x570));
  return uVar1;
}

/* ref: FUN_006ff670 */
uint F_006ff670(unsigned int gen_a0)
{
  GEN_ENTER(0x6ff670u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined4 * this;
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  this = (undefined4 *)F_00406b90(0x1d4,0,0);
  if (this != (undefined4 *)0x0) {
    uVar1 = param_1 & 0xffff | 0xc0000;
    F_006fd460(this,uVar1);
    *this = (*(undefined * PTR32 (*)[145])REFP(0x10bae44));
    uVar1 = F_0042ce40(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x10b64bc),REFG(undefined * PTR32, 0x1323718),uVar1);
    F_0042ccf0(this + 0x46,uVar1);
    F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return (uint)this;
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return 0;
}

/* ref: FUN_006ff710 */
uint F_006ff710(unsigned int gen_a0)
{
  GEN_ENTER(0x6ff710u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00406b90(0x2f4,0,0);
  if (this != (undefined *)0x0) {
    uVar1 = F_006fdcc0(this,param_1 & 0xffff | 0xb0000);
    return uVar1;
  }
  return 0;
}

/* ref: Client::Game::Event::QuestEventHandler::vf6 */
uint F_006ff740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ff740u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (*(uint *)&gen_args[1]);
  F_006db1d0((undefined *)(*(undefined * PTR32 *)&gen_args[0]),(*(uint *)&gen_args[1]));
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x21c))))();
  if ((char)uVar3 == '\0') {
    iVar1 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4)));
    F_006d7550(&(*(uint *)&gen_args[1]),REFG(undefined4, 0x1379694));
    uVar3 = (*(uint *)&gen_args[1]);
    if ((*(uint *)&gen_args[1]) != *(uint *)(iVar1 + 0x30)) {
      *(undefined1 *)((*(uint *)&gen_args[1]) + 0x81) = 0;
    }
  }
  if ((((byte)(*(undefined * PTR32 *)&gen_args[0])[0x4c] & 2) != 0) && (*((short *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x36c))) == -0x7fff)) {
    uVar3 = F_006fcf60(REFG(undefined4, 0x1488344),uVar2,*((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8))),0x8001,1,0,0);
  }
  return uVar3;
}

/* ref: Client::Game::Event::QuestEventHandler::vf8 */
uint F_006ff7c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6ff7c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  int iVar2;
  
  this[0x44] = (undefined1)0x2;
  *(uint *)(this + 0x48) = param_2 & 0xff;
  *(undefined4 *)(this + 0x50) = param_1;
  if (*(int *)((int)REFG(undefined4, 0x1488344) + 0x224) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)((int)REFG(undefined4, 0x1488344) + 0x220);
    if (*(int * PTR32 *)((int)REFG(undefined4, 0x1488344) + 0x214) == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = **(int * PTR32 *)((int)REFG(undefined4, 0x1488344) + 0x214);
    }
    if (*(uint *)(iVar2 + 8) <= uVar1) {
      uVar1 = uVar1 - *(uint *)(iVar2 + 8);
    }
    iVar2 = *((int *)GEN_TOP((*(int *)(iVar2 + 4) + uVar1 * 4)));
    uVar1 = CONCAT31((int3)((uint)iVar2 >> 8),*(undefined1 *)(iVar2 + 0x20));
  }
  this[0x4c] = SUB41(uVar1,0);
  if (((uVar1 & 2) != 0) && (*(short *)(this + 0x36c) == -0x7fff)) {
    uVar1 = F_006fcf60(REFG(undefined4, 0x1488344),param_1,*(undefined4 *)(this + 8),0x8001,1,0,0);
  }
  return uVar1;
}

/* ref: Client::Game::Event::QuestEventHandler::vf20 */
uint F_006ff940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6ff940u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  int iVar2;
  
  this[0x44] = (undefined1)0x12;
  *(uint *)(this + 0x48) = param_2;
  *(undefined4 *)(this + 0x50) = param_1;
  if (*(int *)((int)REFG(undefined4, 0x1488344) + 0x224) == 0) {
    uVar1 = param_2 & 0xffffff00;
  }
  else {
    uVar1 = *(uint *)((int)REFG(undefined4, 0x1488344) + 0x220);
    if (*(int * PTR32 *)((int)REFG(undefined4, 0x1488344) + 0x214) == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = **(int * PTR32 *)((int)REFG(undefined4, 0x1488344) + 0x214);
    }
    if (*(uint *)(iVar2 + 8) <= uVar1) {
      uVar1 = uVar1 - *(uint *)(iVar2 + 8);
    }
    iVar2 = *((int *)GEN_TOP((*(int *)(iVar2 + 4) + uVar1 * 4)));
    uVar1 = CONCAT31((int3)((uint)iVar2 >> 8),*(undefined1 *)(iVar2 + 0x20));
  }
  this[0x4c] = SUB41(uVar1,0);
  if (((uVar1 & 2) != 0) && (*(short *)(this + 0x36c) == -0x7fff)) {
    uVar1 = F_006fcf60(REFG(undefined4, 0x1488344),param_1,*(undefined4 *)(this + 8),0x8001,1,0,0);
  }
  return uVar1;
}

/* ref: FUN_006ff9d0 */
uint F_006ff9d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ff9d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined * this;
  uint uVar1;
  
  if ((param_1 & 0xffff | 0xe0000) == 0xe0000) {
    this = (undefined *)F_00406b90(0x398,0,0);
    if (this != (undefined *)0x0) {
      uVar1 = F_006fe010(this,0xe0000);
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_006ffa10 */
uint F_006ffa10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ffa10u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  uint uVar2;
  int iVar3;
  undefined * this_00;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  this_00 = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x344)));
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x16)) = 0;
  (*(undefined4 *)(gen_frame + 0x1a)) = 0;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x20)) + 0)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(uint *)(gen_frame + 0x24)) = (*(uint *)(gen_frame + 0x24)) & 0xffffff00;
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = this_00;
  F_007445f0(this_00,&(*(int * PTR32 *)(gen_frame + 0x10)),&(*(undefined4 *)&gen_args[1]));
  piVar1 = (*(int * PTR32 *)(gen_frame + 0x10));
  if ((*(int * PTR32 *)(gen_frame + 0x10)) != *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x348)))) {
    iVar3 = 0;
    (*(int * PTR32 *)(gen_frame + 0x10)) = (*(int * PTR32 *)(gen_frame + 0x10)) + 6;
    do {
      if (*(*(int * PTR32 *)(gen_frame + 0x10)) != 0) {
        F_006fefd0(REFG(undefined4, 0x1488344),*(*(int * PTR32 *)(gen_frame + 0x10)),(uint)*(byte *)(iVar3 + 0x31 + (int)piVar1),0,1,
                     &(*(undefined2 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0x20)),0,(int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30);
      }
      (*(int * PTR32 *)(gen_frame + 0x10)) = (*(int * PTR32 *)(gen_frame + 0x10)) + 1;
      iVar3 = iVar3 + 1;
      this_00 = (*(undefined * PTR32 *)(gen_frame + 0xc));
    } while (iVar3 < 4);
  }
  F_0073dda0(this_00,&(*(undefined4 *)(gen_frame + 0x20)),&(*(undefined4 *)&gen_args[1]));
  uVar2 = F_00755030(this_00,&(*(undefined * PTR32 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x20)),(*(uint *)(gen_frame + 0x24)));
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar2;
}

/* ref: FUN_006ffae0 */
uint F_006ffae0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ffae0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00406b90(0x378,0,0);
  if (this != (undefined *)0x0) {
    uVar1 = F_006fe3d0(this,param_1 & 0xffff | 0x20000);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_006ffb10 */
uint F_006ffb10(unsigned int gen_a0)
{
  GEN_ENTER(0x6ffb10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00406b90(0x264,0,0);
  if (this != (undefined *)0x0) {
    uVar1 = F_006fe5a0(this,param_1 & 0xffff | 0x1a0000);
    return uVar1;
  }
  return 0;
}

/* ref: Client::Game::Event::SpecialShopEventHandler::vf1 */
uint F_006ffb40(unsigned int gen_a0)
{
  GEN_ENTER(0x6ffb40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_006fe760(this);
  this[0x1c] = (undefined1)((byte)this[0x1c] | 2);
  return uVar1;
}

/* ref: FUN_006ffb50 */
uint F_006ffb50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6ffb50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_006fec60(this,param_1,(uint)(ushort)param_2);
  *(ushort *)((int)this + 0x310) = (ushort)param_2;
  *(undefined4 *)((int)this + 0x314) = 0;
  *(undefined4 *)((int)this + 0x318) = 0;
  *(undefined4 *)((int)this + 0x31c) = 0;
  *(undefined1 *)((int)this + 0x322) = 0;
  *(undefined4 *)((int)this + 0x32c) = 0;
  *(undefined4 *)((int)this + 0x330) = 0;
  *(undefined4 *)((int)this + 0x338) = 0;
  *(undefined4 *)((int)this + 0x33c) = 0;
  *(undefined4 *)((int)this + 0x340) = 0;
  *(undefined4 *)((int)this + 0x344) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[159])REFP(0x10bc5bc));
  *(undefined2 *)((int)this + 800) = 0;
  *(undefined4 *)((int)this + 0x324) = 0;
  *(undefined4 *)((int)this + 0x328) = 0;
  return (uint)this;
}

/* ref: FUN_006ffbe0 */
uint F_006ffbe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ffbe0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 in_edi = (undefined4)gen_a1;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  *in_ecx = (*(undefined * PTR32 (*)[159])REFP(0x10bc5bc));
  if (in_ecx[0xcc] != 0) {
    piVar1 = (int *)in_ecx[0xcb];
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,in_ecx[0xcc]);
    }
    puVar2 = (undefined4 *)in_ecx[0xcc];
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      in_ecx[0xcc] = 0;
    }
  }
  F_00ab6b60();
  F_00a69720(&REFG(undefined, 0x14ab380));
  uVar3 = F_006fed10(in_ecx,in_edi);
  return uVar3;
}

/* ref: FUN_006ffc40 */
uint F_006ffc40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6ffc40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_006ffb50(this,param_1,param_2);
  *(undefined4 *)((int)this + 0x348) = 0;
  *(undefined4 *)((int)this + 0x34c) = 0;
  *(undefined1 *)((int)this + 0x4f8) = 0;
  *(undefined1 *)((int)this + 0x500) = 0;
  *(undefined4 *)((int)this + 0x504) = 0;
  *(undefined4 *)((int)this + 0x508) = 0;
  *(undefined4 *)((int)this + 0x50c) = 0;
  *(undefined2 *)((int)this + 0x510) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[160])REFP(0x10bc83c));
  *(undefined4 *)((int)this + 0x4fc) = 2;
  return (uint)this;
}

/* ref: FUN_006ffca0 */
uint F_006ffca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ffca0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 in_edi = (undefined4)gen_a1;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  *in_ecx = (*(undefined * PTR32 (*)[160])REFP(0x10bc83c));
  if (in_ecx[0xd3] != 0) {
    piVar1 = (int *)in_ecx[0xd2];
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,in_ecx[0xd3]);
    }
    puVar2 = (undefined4 *)in_ecx[0xd3];
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      in_ecx[0xd3] = 0;
    }
  }
  uVar3 = F_006ffbe0(in_ecx,in_edi);
  return uVar3;
}

/* ref: FUN_006ffcf0 */
uint F_006ffcf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6ffcf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_006ffb50(this,param_1,param_2);
  *(undefined4 *)((int)this + 0x348) = 0;
  *(undefined4 *)((int)this + 0x34c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[159])REFP(0x10bcac4));
  *(undefined4 *)((int)this + 0x3d4) = 0;
  *(undefined4 *)((int)this + 0x3d8) = 0;
  *(undefined4 *)((int)this + 0x3dc) = 0;
  return (uint)this;
}

/* ref: FUN_006ffd40 */
uint F_006ffd40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ffd40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 in_edi = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  
  *in_ecx = (*(undefined * PTR32 (*)[159])REFP(0x10bcac4));
  iVar1 = in_ecx[0xf5];
  if (iVar1 != 0) {
    F_00429760(iVar1,(in_ecx[0xf7] - iVar1 >> 2) * 4,800);
  }
  in_ecx[0xf5] = 0;
  in_ecx[0xf6] = 0;
  in_ecx[0xf7] = 0;
  uVar2 = F_006ffbe0(in_ecx,in_edi);
  return uVar2;
}

/* ref: FUN_006ffda0 */
uint F_006ffda0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6ffda0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  ushort uVar1;
  uint * puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  int iVar8;
  
  puVar6 = *(undefined4 * PTR32 *)(*param_1 + 4);
  puVar7 = (undefined4 *)((int)this + 0x350);
  for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  if ((*(ushort *)((int)this + 0x378) != 0) &&
     (puVar2 = (uint *)F_00ab33c0((uint)*(ushort *)((int)this + 0x378)), puVar2 != (uint *)0x0)) {
    F_0042e430((undefined *)((int)this + 0x23c),(*puVar2 & 0xffffff) + (int)puVar2);
  }
  if ((*(int *)((int)this + 0x370) == 3) &&
     (puVar2 = (uint *)F_00ab33c0(0xf), puVar2 != (uint *)0x0)) {
    F_0042e430((undefined *)((int)this + 0x290),(*puVar2 & 0xffffff) + (int)puVar2);
  }
  puVar6 = *(undefined4 * PTR32 *)((int)this + 0x34c);
  if (puVar6 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar6)(puVar6,1);
    *(undefined4 *)((int)this + 0x34c) = 0;
  }
  uVar1 = *(ushort *)((int)this + 0x1d8);
  *(undefined4 *)((int)this + 0x348) = 0;
  uVar3 = F_00a4ffd0();
  iVar5 = 0;
  iVar4 = uVar3 + 0x1684;
  do {
    iVar8 = iVar4;
    if (*(ushort *)(iVar4 + 4) == uVar1) break;
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 0x10;
    iVar8 = 0;
  } while (iVar5 < 0x10);
  uVar3 = F_006d3910((int)this + 0x350,(uint)uVar1,(uint)*(ushort *)(iVar8 + 10));
  uVar3 = F_006fe8b0(this,uVar3);
  return uVar3;
}

/* ref: FUN_006ffe90 */
uint F_006ffe90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6ffe90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_006ffb50(this,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[159])REFP(0x10bcd44));
  *(undefined4 *)((int)this + 0x348) = 0;
  *(undefined4 *)((int)this + 0x34c) = 0;
  F_00ba0ed0((int)this + 0x4f0,this);
  *(uint *)((int)this + 0x38) = *(uint *)((int)this + 0x38) | 4;
  return (uint)this;
}

/* ref: FUN_006ffed0 */
uint F_006ffed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ffed0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 in_edi = (undefined4)gen_a1;
  uint uVar1;
  
  *in_ecx = (*(undefined * PTR32 (*)[159])REFP(0x10bcd44));
  F_00ba0f80(in_ecx + 0x13c);
  uVar1 = F_006ffbe0(in_ecx,in_edi);
  return uVar1;
}

/* ref: FUN_006ffef0 */
uint F_006ffef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6ffef0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_006fec60(this,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[157])REFP(0x10bcfc4));
  F_0042e430((undefined *)((int)this + 0x118),"Tst00001Dir");
  return (uint)this;
}

/* ref: FUN_006fff40 */
uint F_006fff40(unsigned int gen_a0)
{
  GEN_ENTER(0x6fff40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00406b90(0x248,0,0);
  if (this != (undefined *)0x0) {
    uVar1 = F_006fea30(this,param_1 & 0xffff | 0x130000);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_006fff70 */
uint F_006fff70(unsigned int gen_a0)
{
  GEN_ENTER(0x6fff70u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 * this;
  
  this = (undefined4 *)F_00406b90(0x1d8,0,0);
  if (this != (undefined4 *)0x0) {
    F_006fd460(this,param_1 & 0xffff | 0x140000);
    *this = (*(undefined * PTR32 (*)[145])REFP(0x10bbc3c));
    *(undefined1 *)(this + 0x75) = 0;
    F_0042e430(this + 0x46,REFG(undefined * PTR32, 0x1323778));
    this[0xe] = this[0xe] | 0x400;
    return (uint)this;
  }
  return 0;
}

/* ref: FUN_006fffd0 */
uint F_006fffd0(unsigned int gen_a0)
{
  GEN_ENTER(0x6fffd0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  undefined * this;
  uint uVar2;
  
  uVar2 = param_1 & 0xffff | 0x120000;
  uVar1 = F_00ab3e80(uVar2);
  if (uVar1 != 0) {
    this = (undefined *)F_00406b90(0x330,0,0);
    if (this != (undefined *)0x0) {
      uVar1 = F_006febc0(this,uVar2);
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_00700010 */
uint F_00700010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x700010u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00406b90(0x4d0,0,0);
  if (this != (undefined *)0x0) {
    uVar1 = F_006fee00(this,param_1 & 0xffff | 0x80060000,param_2);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_0070002f */
uint F_0070002f(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x70002fu, gen_a0, gen_a1, gen_a2, 0u);
  undefined * in_eax = (undefined *)(uintptr_t)gen_a0;
  undefined4 in_ecx = (undefined4)gen_a1;
  uint in_edx = (uint)gen_a2;
  uint uVar1;
  
  uVar1 = F_006fee00(in_eax,in_edx | 0x80060000,in_ecx);
  return uVar1;
}

/* ref: FUN_00700053 */
uint F_00700053(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x700053u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 in_ecx = (undefined4)gen_a0;
  int in_ebp = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 * puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  short * psVar5;
  uint uVar6;
  undefined * this;
  
  *(undefined4 *)(in_ebp + -4) = in_ecx;
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP((**(int * PTR32 *)(in_ebp + 8) + 4)));
  *(undefined4 *)(in_ebp + 8) = *puVar1;
  uVar3 = F_00a4ffd0();
  uVar6 = 0;
  do {
    if (puVar1[uVar6] != 0) {
      iVar4 = 0;
      psVar5 = (short *)(uVar3 + 0x13b8);
      do {
        if (*psVar5 == *(short *)(puVar1 + uVar6)) {
          this = *(undefined * PTR32 *)(in_ebp + -4);
          *(undefined4 *)((int)this + 0x4bc) = puVar1[uVar6];
          goto LAB_00700099;
        }
        iVar4 = iVar4 + 1;
        psVar5 = psVar5 + 8;
      } while (iVar4 < 0x1e);
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 0x10);
  this = *(undefined * PTR32 *)(in_ebp + -4);
LAB_00700099: ;
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x314);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0x314) = 0;
  }
  uVar2 = *(undefined4 *)(in_ebp + 8);
  *(undefined4 *)((int)this + 0x310) = 0;
  uVar3 = F_006fef40(this,uVar2);
  return uVar3;
}

/* ref: FUN_007000f0 */
uint F_007000f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7000f0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00406b90(0x518,0,0);
  if (this != (undefined *)0x0) {
    uVar1 = F_006ffc40(this,param_1 & 0xffff | 0x80010000,param_2);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00700130 */
uint F_00700130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x700130u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * this;
  
  this = (undefined4 *)F_00406b90(1000,0,0);
  if (this != (undefined4 *)0x0) {
    F_006ffb50(this,param_1 & 0xffff | 0x80020000,param_2);
    this[0xd2] = 0;
    this[0xd3] = 0;
    *this = (*(undefined * PTR32 (*)[159])REFP(0x10bcac4));
    this[0xf5] = 0;
    this[0xf6] = 0;
    this[0xf7] = 0;
    return (uint)this;
  }
  return 0;
}

/* ref: FUN_007001a0 */
uint F_007001a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7001a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 0x34c) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x348);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,*(int *)((int)this + 0x34c));
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 0x34c);
    if (puVar3 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
      *(undefined4 *)((int)this + 0x34c) = 0;
    }
  }
  uVar2 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8));
  *(uint *)((int)this + 0x348) = uVar2;
  uVar4 = 0;
  if (uVar2 != 0) {
    puVar3 = (undefined4 *)F_00406b90(0x20,0,0);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      F_00cb4700(puVar3,1,0);
      puVar3[5] = 1;
      *puVar3 = (*(undefined * PTR32 (*)[2])REFP(0x10b92b0));
      puVar3[6] = this;
      puVar3[7] = ((code *)REFP(0x6ffda0));
    }
    *(undefined4 * PTR32 *)((int)this + 0x34c) = puVar3;
    F_00cb4540(puVar3,0,param_1);
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x348) + 0x48))))
                      (*(int * PTR32 *)((int)this + 0x348),*(undefined4 *)((int)this + 0x34c));
  }
  return uVar4;
}

/* ref: FUN_00700270 */
uint F_00700270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x700270u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * this;
  
  this = (undefined4 *)F_00406b90(0x590,0,0);
  if (this != (undefined4 *)0x0) {
    F_006ffb50(this,param_1 & 0xffff | 0x80070000,param_2);
    *this = (*(undefined * PTR32 (*)[159])REFP(0x10bcd44));
    this[0xd2] = 0;
    this[0xd3] = 0;
    F_00ba0ed0(this + 0x13c,this);
    this[0xe] = this[0xe] | 4;
    return (uint)this;
  }
  return 0;
}

/* ref: FUN_007002e0 */
uint F_007002e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7002e0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * this;
  
  this = (undefined4 *)F_00406b90(0x310,0,0);
  if (this != (undefined4 *)0x0) {
    F_006fec60(this,param_1 & 0xffff | 0xf0010000,param_2);
    *this = (*(undefined * PTR32 (*)[157])REFP(0x10bcfc4));
    F_0042e430(this + 0x46,"Tst00001Dir");
    return (uint)this;
  }
  return 0;
}

/* ref: FUN_00700340 */
uint F_00700340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x700340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  undefined4 * this_00;
  
  uVar1 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8));
  *(uint *)((int)this + 0x310) = uVar1;
  this_00 = (undefined4 *)F_00406b90(0x20,0,0);
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(this_00,1,0);
    this_00[5] = 1;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10b92d4));
    this_00[6] = this;
    this_00[7] = ((code *)REFP(0x700050));
  }
  *(undefined4 * PTR32 *)((int)this + 0x314) = this_00;
  F_00cb4540(this_00,0,param_1);
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x310) + 0x48))))
                    (*(int * PTR32 *)((int)this + 0x310),*(undefined4 *)((int)this + 0x314));
  return uVar1;
}

/* ref: FUN_007003d0 */
uint F_007003d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7003d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined * pvVar4;
  uint uVar5;
  int * piVar6;
  int * piVar7;
  undefined * this_00;
  
  *(undefined4 *)((int)this + 0x228) = 0;
  *(undefined4 *)((int)this + 0x22c) = 0;
  *(undefined4 *)((int)this + 0x230) = 0;
  *(undefined4 *)((int)this + 0x234) = 0;
  *(undefined4 *)((int)this + 0x238) = 0;
  *(undefined4 *)((int)this + 0x23c) = 0;
  *(undefined4 *)((int)this + 0x240) = 0;
  *(undefined4 *)((int)this + 0x244) = 0;
  piVar6 = *(int * PTR32 *)((int)this + 0x538);
  *(undefined2 *)((int)this + 0x52e) = 0;
  *(undefined4 *)((int)this + 0x534) = 0;
  if (piVar6 != *(int * PTR32 *)((int)this + 0x53c)) {
    do {
      piVar7 = (int *)*piVar6;
      if (piVar7 != (int *)piVar6[1]) {
        do {
          iVar1 = piVar7[1];
          if (*piVar7 != iVar1) {
            pvVar4 = (undefined *)F_00757950(iVar1,iVar1,*piVar7,this);
            pvVar2 = (undefined *)piVar7[1];
            for (this_00 = pvVar4; this_00 != pvVar2; this_00 = (undefined *)((int)this_00 + 0x10)) {
              F_00750930(this_00);
            }
            piVar7[1] = (int)pvVar4;
          }
          piVar7[4] = 0;
          piVar7 = piVar7 + 5;
        } while (piVar7 != (int *)piVar6[1]);
      }
      piVar6 = piVar6 + 4;
    } while (piVar6 != *(int * PTR32 *)((int)this + 0x53c));
  }
  F_0074e060((undefined *)((int)this + 0x548),*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x54c) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 0x54c) + 4))) = *(int *)((int)this + 0x54c);
  *(undefined4 *)*(undefined4 *)((int)this + 0x54c) = *(undefined4 *)((int)this + 0x54c);
  *((int *)GEN_TOP((*(int *)((int)this + 0x54c) + 8))) = *(int *)((int)this + 0x54c);
  *(undefined4 *)((int)this + 0x550) = 0;
  uVar3 = *(uint *)((int)this + 0x558);
  uVar5 = *(uint *)((int)this + 0x55c);
  if (uVar3 != uVar5) {
    uVar5 = F_00c46e20(uVar3,uVar5,0);
    *(uint *)((int)this + 0x55c) = uVar3;
  }
  *(undefined4 *)((int)this + 0x568) = 0;
  *(undefined4 *)((int)this + 0x270) = 0;
  *(undefined4 *)((int)this + 0x528) = 0;
  *(undefined2 *)((int)this + 0x52c) = 0;
  *(undefined1 *)((int)this + 0x5a8) = 0;
  return uVar5;
}

/* ref: FUN_00700520 */
uint F_00700520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x700520u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x650];
  char cVar1;
  undefined1 * puVar2;
  int iVar3;
  int * piVar4;
  int * piVar5;
  byte bVar6;
  int * piVar7;
  uint uVar8;
  undefined4 * puVar9;
  undefined * this_00;
  int iVar10;
  int * piVar11;
  int iVar12;
  undefined4 uVar13;
  
  (*(uint *)(gen_frame + 0x648)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x64c);
  (*(undefined * PTR32 *)(gen_frame + 0x48)) = this;
  (*(int *)(gen_frame + 0x2c)) = param_1;
  piVar7 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar13 = 0x4f;
  uVar8 = ((code *)*(gen_code32 *)(*piVar7 + 0x48))(piVar7);
  piVar7 = (int *)F_00763050(uVar8,uVar13);
  (*(int * PTR32 *)(gen_frame + 0x50)) = piVar7;
  (*(uint *)(gen_frame + 0x44)) = 0;
  if (param_2 != 0) {
    (*(int *)(gen_frame + 0x4c)) = 0;
    do {
      puVar2 = *((undefined1 * PTR32 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x2c)) + (*(uint *)(gen_frame + 0x44)) * 4) + 4)));
      iVar12 = *(int *)(puVar2 + 8);
      uVar8 = (*(uint *)(gen_frame + 0x44));
      if ((iVar12 != 0) &&
         ((((iVar12 != 0x1781 && (iVar12 != 0x1782)) && (iVar12 != 0x1783)) ||
          ((REFG(undefined1, 0x14b4ec2) & 2) == 0)))) {
        (*(undefined1 *)(gen_frame + 0x57)) = puVar2[0x10];
        (*(undefined1 *)(gen_frame + 0x56)) = puVar2[0x10];
        piVar7 = (int *)F_00749570((undefined *)((int)this + 0xfc),((undefined1 *)(gen_frame + 0x18)),&(*(undefined1 *)(gen_frame + 0x56)));
        if (*piVar7 == *(int *)((int)this + 0x100)) {
          (*(undefined4 *)(gen_frame + 0x1c)) = 0;
          (*(undefined4 *)(gen_frame + 0x20)) = 0;
          (*(undefined4 *)(gen_frame + 0x24)) = 0;
          puVar9 = (undefined4 *)F_00754bb0(((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x1c)));
          ((undefined1 *)(gen_frame + 0x30))[0] = (*(undefined1 *)(gen_frame + 0x57));
          (*(undefined4 *)(gen_frame + 0x34)) = 0;
          (*(undefined4 *)(gen_frame + 0x38)) = 0;
          (*(undefined4 *)(gen_frame + 0x3c)) = 0;
          if (&(*(undefined4 *)(gen_frame + 0x34)) != puVar9) {
            F_00752390(&(*(undefined4 *)(gen_frame + 0x34)));
            (*(undefined4 *)(gen_frame + 0x34)) = *puVar9;
            (*(undefined4 *)(gen_frame + 0x38)) = puVar9[1];
            (*(undefined4 *)(gen_frame + 0x3c)) = puVar9[2];
            *puVar9 = 0;
            puVar9[1] = 0;
            puVar9[2] = 0;
          }
          F_00752390(((undefined1 *)(gen_frame + 0x0)));
          this = (*(undefined * PTR32 *)(gen_frame + 0x48));
          uVar13 = 0;
          uVar8 = F_0075aa30((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x48)) + 0xfc),((undefined1 *)(gen_frame + 0x30)));
          F_00759c00((undefined *)((int)this + 0xfc),((undefined1 *)(gen_frame + 0x10)),uVar8,uVar13);
          F_00752390(&(*(undefined4 *)(gen_frame + 0x34)));
          F_00752390(&(*(undefined4 *)(gen_frame + 0x1c)));
        }
        F_0042b630(((undefined1 *)(gen_frame + 0x74)));
        (*(undefined4 *)(gen_frame + 0x58)) = 0;
        (*(undefined4 *)(gen_frame + 0x5c)) = 0;
        (*(byte *)(gen_frame + 0x60)) = 0;
        (*(undefined4 *)(gen_frame + 0x64)) = 0;
        (*(undefined2 *)(gen_frame + 0x68)) = 0;
        (*(undefined4 *)(gen_frame + 0x6c)) = 0;
        (*(undefined4 *)(gen_frame + 0x70)) = 0;
        F_0042e430(((undefined1 *)(gen_frame + 0x74)),&REFG(undefined1, 0x107fc63));
        (*(undefined4 *)(gen_frame + 0x5c)) = *(undefined4 *)(puVar2 + 8);
        (*(undefined4 *)(gen_frame + 0x64)) = *(undefined4 *)(puVar2 + 4);
        (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x68)) + 0)) = puVar2[0x10];
        (*(undefined2 *)(gen_frame + 0x68)) = CONCAT11((*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x68)) + 1)),puVar2[0x10]);
        (*(byte *)(gen_frame + 0x60)) = puVar2[0xc];
        bVar6 = F_007796c0((uint)(byte)puVar2[0xc]);
        (*(byte *)(gen_frame + 0x6a)) = bVar6;
        (*(undefined4 *)(gen_frame + 0x58)) = *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x4c)) + *((int *)GEN_TOP((*(int *)((int)this + 0x118) + 0xc))))));
        (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x68)) + 1)) = *puVar2;
        (*(undefined2 *)(gen_frame + 0x68)) = CONCAT11(*puVar2,(undefined1)(*(undefined2 *)(gen_frame + 0x68)));
        cVar1 = *(char *)((int)this + 0x10c);
        if (cVar1 == '\x01') {
          uVar8 = F_00ab3fa0((uint)(*(byte *)(gen_frame + 0x60)));
          (*(undefined4 *)(gen_frame + 0x6c)) = *(undefined4 *)(uVar8 + 8);
        }
        else if (cVar1 == '\x02') {
          uVar8 = F_00ab3fa0((uint)(*(byte *)(gen_frame + 0x60)));
          (*(undefined4 *)(gen_frame + 0x6c)) = *(undefined4 *)(uVar8 + 0xc);
        }
        else if (cVar1 == '\x03') {
          uVar8 = F_00ab3fa0((uint)(*(byte *)(gen_frame + 0x60)));
          (*(undefined4 *)(gen_frame + 0x6c)) = *(undefined4 *)(uVar8 + 0x10);
        }
        puVar9 = &(*(undefined4 *)(gen_frame + 0x58));
        (*(undefined1 *)(gen_frame + 0x57)) = puVar2[0x10];
        this_00 = (undefined *)F_0075ae90((undefined *)((int)this + 0xfc),&(*(undefined1 *)(gen_frame + 0x57)));
        F_00756c50(this_00,puVar9);
        F_0042c880(((undefined1 *)(gen_frame + 0x74)));
        uVar8 = (*(uint *)(gen_frame + 0x44));
      }
      (*(int *)(gen_frame + 0x4c)) = (*(int *)(gen_frame + 0x4c)) + 0x10;
      (*(uint *)(gen_frame + 0x44)) = uVar8 + 1;
    } while (uVar8 + 1 < param_2);
  }
  puVar9 = *(undefined4 * PTR32 *)((int)this + 0x118);
  if (puVar9 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar9)(puVar9,1);
    *(undefined4 *)((int)this + 0x118) = 0;
  }
  if ((*(int *)((int)this + 0x114) - *(int *)((int)this + 0x110)) - 1U <=
      (uint)*(byte *)((int)this + 0x128)) {
    (*(undefined4 *)(gen_frame + 0x198)) = 0;
    F_00c48350(((undefined1 *)(gen_frame + 0x19c)),0,0x4ac);
    piVar7 = *(int * PTR32 *)((int)this + 0x100);
    piVar11 = (int *)*piVar7;
    iVar12 = 0;
    if (piVar11 != piVar7) {
      (*(int * PTR32 *)(gen_frame + 0x50)) = piVar7;
      do {
        iVar3 = piVar11[5];
        for (iVar10 = piVar11[4]; iVar10 != iVar3; iVar10 = iVar10 + 0x140) {
          *(undefined4 *)(((undefined1 *)(gen_frame + 0x19c)) + iVar12 * 4 + -4) = *(undefined4 *)(iVar10 + 4);
          iVar12 = iVar12 + 1;
          this = (*(undefined * PTR32 *)(gen_frame + 0x48));
        }
        if (*(char *)((int)piVar11 + 0x21) == '\0') {
          piVar4 = (int *)piVar11[2];
          if (*(char *)((int)piVar4 + 0x21) == '\0') {
            cVar1 = *(char *)(*piVar4 + 0x21);
            piVar11 = piVar4;
            piVar4 = (int *)*piVar4;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*piVar4 + 0x21);
              piVar11 = piVar4;
              piVar4 = (int *)*piVar4;
            }
          }
          else {
            cVar1 = *(char *)(piVar11[1] + 0x21);
            piVar5 = (int *)piVar11[1];
            piVar4 = piVar11;
            while ((piVar11 = piVar5, cVar1 == '\0' && (piVar4 == (int *)piVar11[2]))) {
              cVar1 = *(char *)(piVar11[1] + 0x21);
              piVar5 = (int *)piVar11[1];
              piVar4 = piVar11;
            }
          }
        }
      } while (piVar11 != piVar7);
    }
    uVar8 = F_006cd8f0(this,&(*(undefined4 *)(gen_frame + 0x198)),iVar12,0);
    F_00c47745((*(uint *)(gen_frame + 0x648)) ^ (uint)(uint)(gen_frame + 0x64c));
    return uVar8;
  }
  uVar8 = F_006d1aa0(this);
  F_00c47745((*(uint *)(gen_frame + 0x648)) ^ (uint)(uint)(gen_frame + 0x64c));
  return uVar8;
}

/* ref: FUN_00700910 */
uint F_00700910(unsigned int gen_a0)
{
  GEN_ENTER(0x700910u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x1000];
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  int * piVar5;
  uint uVar6;
  undefined * this_00;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint * this_01;
  undefined4 uVar10;
  
  (*(uint *)(gen_frame + 0xff8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xffc);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = this;
  *(undefined * PTR32 *)&REFG(undefined, 0x13241f0) = this;
  uVar3 = F_00424750(REFG(undefined4, 0x137104c));
  uVar6 = 0;
  if (uVar3 != 0) {
    puVar4 = ((undefined4 *)(gen_frame + 0x38));
    iVar8 = 0x1f7;
    do {
      *puVar4 = 0;
      puVar4 = puVar4 + 2;
      iVar8 = iVar8 + -1;
    } while (-1 < iVar8);
    piVar5 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar10 = 0x4f;
    uVar6 = ((code *)*(gen_code32 *)(*piVar5 + 0x48))(piVar5);
    this_00 = (undefined *)F_00763050(uVar6,uVar10);
    (*(undefined * PTR32 *)(gen_frame + 0x1c)) = this_00;
    if (*(char *)((int)this + 0x120) == '\0') {
      REFG(undefined4, 0x13241f4) = F_00779620(this_00,&REFG(undefined * PTR32, 0x13241ec),(uint)*(byte *)((int)this + 0x10c));
      *(undefined1 *)((int)this + 0x120) = 1;
    }
    *(char *)((int)this + 0x10d) = *(char *)((int)this_00 + 0x12) + '\x01';
    *(undefined1 *)((int)this + 0x10e) = *(undefined1 *)((int)this_00 + 0x11);
    uVar6 = F_0075ae90((undefined *)((int)this + 0xfc),(char *)((int)this + 0x10d));
    F_00754bb0(&(*(int *)(gen_frame + 0x8)),uVar6);
    uVar3 = ((*(int *)(gen_frame + 0xc)) - (*(int *)(gen_frame + 0x8))) / 0x140;
    uVar6 = 0;
    (*(uint *)(gen_frame + 0x20)) = 0;
    (*(uint *)(gen_frame + 0x28)) = 0;
    (*(uint *)(gen_frame + 0x24)) = uVar3;
    if (uVar3 != 0) {
      do {
        if (0x31 < (ushort)uVar6) break;
        iVar8 = ((*(uint *)(gen_frame + 0x28)) & 0xffff) * 0x140 + (*(int *)(gen_frame + 0x8));
        if (*(char *)((int)this + 0x10e) == *(char *)(iVar8 + 0x12)) {
          uVar3 = F_00a41080(&REFG(undefined, 0x14a4230),*(undefined4 *)(iVar8 + 4),0,1,1);
          uVar7 = F_00ab25d0((uint)*(byte *)(iVar8 + 0x111));
          uVar9 = uVar6 & 0xffff;
          iVar2 = uVar9 * 8;
          (*(uint *)(gen_frame + 0x2c)) = *(undefined4 *)(uVar7 + 4);
          *(uint *)(iVar8 + 0x18) = uVar3;
          (*(undefined1 * PTR32 *)(gen_frame + 0x30)) = (undefined1 *)*(undefined4 *)(iVar8 + 4);
          (*(undefined1 * PTR32 *)(gen_frame + 0x34)) = ((undefined1 *)(gen_frame + 0xa10)) + iVar2;
          F_005a2710(((undefined1 *)(gen_frame + 0xa10)) + iVar2,4);
          *(undefined1 * PTR32 *)((*(undefined1 * PTR32 *)(gen_frame + 0x34)) + 4) = (*(undefined1 * PTR32 *)(gen_frame + 0x30));
          uVar6 = F_0042a990(iVar8 + 0x1c);
          (*(undefined1 * PTR32 *)(gen_frame + 0x34)) = (undefined1 *)uVar6;
          (*(undefined1 * PTR32 *)(gen_frame + 0x30)) = ((undefined1 *)(gen_frame + 0xb0)) + iVar2;
          F_005a2710(((undefined1 *)(gen_frame + 0xb0)) + iVar2,6);
          *(undefined1 * PTR32 *)((*(undefined1 * PTR32 *)(gen_frame + 0x30)) + 4) = (*(undefined1 * PTR32 *)(gen_frame + 0x34));
          (*(undefined1 * PTR32 *)(gen_frame + 0x34)) = (undefined1 *)*(undefined4 *)(iVar8 + 0xc);
          (*(undefined1 * PTR32 *)(gen_frame + 0x30)) = ((undefined1 *)(gen_frame + 0x240)) + iVar2;
          F_005a2710(((undefined1 *)(gen_frame + 0x240)) + iVar2,4);
          *(undefined1 * PTR32 *)((*(undefined1 * PTR32 *)(gen_frame + 0x30)) + 4) = (*(undefined1 * PTR32 *)(gen_frame + 0x34));
          (*(undefined1 * PTR32 *)(gen_frame + 0x34)) = ((undefined1 *)(gen_frame + 0x3d0)) + iVar2;
          F_005a2710(((undefined1 *)(gen_frame + 0x3d0)) + iVar2,4);
          *(uint *)((*(undefined1 * PTR32 *)(gen_frame + 0x34)) + 4) = uVar3;
          F_005a2710(((undefined1 *)(gen_frame + 0x560)) + iVar2,4);
          ((undefined4 *)(gen_frame + 0x564))[(int)(uVar9 * 2)] = (*(uint *)(gen_frame + 0x2c));
          (*(uint *)(gen_frame + 0x2c)) = (uint)*(byte *)(iVar8 + 0x11);
          F_005a2710(((undefined1 *)(gen_frame + 0x880)) + iVar2,4);
          ((uint *)(gen_frame + 0x884))[(int)(uVar9 * 2)] = (*(uint *)(gen_frame + 0x2c));
          uVar6 = F_00434d10((uint)*(byte *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x10c),(uint)*(byte *)(iVar8 + 8),2)
          ;
          (*(uint *)(gen_frame + 0x2c)) = uVar6;
          F_005a2710(((undefined1 *)(gen_frame + 0xba0)) + iVar2,4);
          ((uint *)(gen_frame + 0xba4))[(int)(uVar9 * 2)] = (*(uint *)(gen_frame + 0x2c));
          if (*(byte *)(iVar8 + 8) == 0) {
            iVar8 = 0;
          }
          else {
            iVar8 = *(byte *)(iVar8 + 8) - 1;
          }
          F_005a2710(((undefined1 *)(gen_frame + 0xd30)) + iVar2,4);
          uVar6 = (*(uint *)(gen_frame + 0x20)) + 1;
          (*(uint *)(gen_frame + 0x20)) = uVar6;
          ((int *)(gen_frame + 0xd34))[(int)(uVar9 * 2)] = iVar8;
          uVar3 = (*(uint *)(gen_frame + 0x24));
          this = (*(undefined * PTR32 *)(gen_frame + 0x18));
        }
        uVar7 = (*(uint *)(gen_frame + 0x28)) + 1;
        (*(uint *)(gen_frame + 0x28)) = uVar7;
        this_00 = (*(undefined * PTR32 *)(gen_frame + 0x1c));
      } while ((uVar7 & 0xffff) < uVar3);
    }
    uVar3 = F_00a3ad50(&REFG(undefined, 0x14a4230),(uint)*(byte *)((int)this + 0x10c));
    bVar1 = *(byte *)((int)this + 0x10e);
    (*(uint *)(gen_frame + 0x24)) = uVar3;
    F_005a2710(((undefined1 *)(gen_frame + 0x48)),4);
    (*(uint *)(gen_frame + 0x4c)) = (uint)bVar1;
    F_005a2710(((undefined1 *)(gen_frame + 0x40)),4);
    (*(uint *)(gen_frame + 0x44)) = uVar6 & 0xffff;
    F_005a2710(((undefined1 *)(gen_frame + 0x80)),4);
    (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x24));
    F_00779690(this_00,((undefined4 *)(gen_frame + 0x38)),0x1f8,uVar6 & 0xffff);
    iVar8 = (*(int *)(gen_frame + 0x8));
    if ((*(int *)(gen_frame + 0x8)) != 0) {
      for (; iVar8 != (*(int *)(gen_frame + 0xc)); iVar8 = iVar8 + 0x140) {
        F_0042c880((undefined *)(iVar8 + 0x1c));
      }
      F_00429760((*(int *)(gen_frame + 0x8)),(((*(int *)(gen_frame + 0x10)) - (*(int *)(gen_frame + 0x8))) / 0x140) * 0x140,800);
    }
    this_01 = &(*(uint *)(gen_frame + 0xff8));
    iVar8 = 0x1f7;
    do {
      this_01 = this_01 + -2;
      uVar6 = F_005a2670(this_01);
      iVar8 = iVar8 + -1;
    } while (-1 < iVar8);
  }
  F_00c47745((*(uint *)(gen_frame + 0xff8)) ^ (uint)(uint)(gen_frame + 0xffc));
  return uVar6;
}

/* ref: FUN_00700cf0 */
uint F_00700cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x700cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x160];
  int iVar1;
  uint uVar2;
  int * piVar3;
  ulonglong uVar4;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x15c);
  (*(uint *)(gen_frame + 0x158)) = uVar2;
  if (param_1 == 0) {
    iVar1 = *(int *)((int)this + 0x124);
    piVar3 = (int *)F_0075ae90((undefined *)((int)this + 0xfc),(int)this + 0x10d);
    F_00720120(&(*(undefined4 *)(gen_frame + 0x18)),iVar1 * 0x140 + *piVar3);
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(uint *)(gen_frame + 0x10)) = 0;
    (*(uint *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x4)) = (*(undefined4 *)(gen_frame + 0x18));
    (*(undefined4 *)(gen_frame + 0x8)) = (*(undefined4 *)(gen_frame + 0x1c));
    (*(undefined4 *)(gen_frame + 0xc)) = (*(undefined4 *)(gen_frame + 0x24));
    (*(uint *)(gen_frame + 0x10)) = (uint)*(byte *)((int)this + 0x10c);
    (*(uint *)(gen_frame + 0x14)) = (uint)(*(byte *)(gen_frame + 0x29));
    if ((*(short *)((int)this + 0x54) != -1) && ((*(byte *)((int)this + 0x5c) & 4) == 0)) {
      *(byte *)((int)this + 0x5c) = *(byte *)((int)this + 0x5c) | 4;
      F_006f15b0(*(undefined * PTR32 *)((int)this + 4),&(*(undefined4 *)(gen_frame + 0x0)),6);
    }
    uVar4 = F_0042c880(((undefined1 *)(gen_frame + 0x34)));
    uVar2 = (uint)uVar4;
  }
  REFG(undefined4, 0x1324204) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x158)) ^ (uint)(uint)(gen_frame + 0x15c));
  return CONCAT31((int3)(uVar2 >> 8),1);
}

/* ref: FUN_00700e00 */
uint F_00700e00(unsigned int gen_a0)
{
  GEN_ENTER(0x700e00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x150];
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  (*(uint *)(gen_frame + 0x148)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x14c);
  iVar1 = *(int *)((int)this + 0x124);
  uVar8 = 4;
  piVar3 = (int *)F_0075ae90((undefined *)((int)this + 0xfc),(int)this + 0x10d);
  F_00720120(((byte *)(gen_frame + 0x8)),iVar1 * 0x140 + *piVar3);
  uVar4 = F_00a3ad50(&REFG(undefined, 0x14a4230),(uint)*(byte *)((int)this + 0x10c));
  uVar5 = F_00a40f50(&REFG(undefined, 0x14a4230),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4)),0);
  uVar6 = F_00a41080(&REFG(undefined, 0x14a4230),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4)),1,1,1);
  uVar7 = F_00a41080(&REFG(undefined, 0x14a4230),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4)),0,1,1);
  if (REFG(char, 0x14ab29a) == *(char *)((int)this + 0x10c)) {
    bVar2 = F_00a68940(&REFG(undefined1, 0x14ab070));
    if (bVar2 < ((byte *)(gen_frame + 0x8))[8]) {
      uVar8 = 8;
    }
    else if (uVar4 < (uint)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 12))) {
      uVar8 = 7;
    }
    else if (uVar5 < ((byte *)(gen_frame + 0x8))[0x11]) {
      uVar8 = 6;
    }
    else if (((*(char *)(gen_frame + 0x136)) != '\0') && (uVar6 + uVar7 != 0)) {
      uVar8 = 5;
    }
  }
  else {
    uVar8 = 9;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x24)));
  F_00c47745((*(uint *)(gen_frame + 0x148)) ^ (uint)(uint)(gen_frame + 0x14c));
  return uVar8;
}

/* ref: FUN_00700f40 */
byte F_00700f40(unsigned int gen_a0)
{
  GEN_ENTER(0x700f40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  int * piVar2;
  uint uVar3;
  int iVar4;
  
  if (*(short *)((int)this + 0x54) == 10) {
    iVar1 = (int)this + 0x10d;
    this_00 = (undefined *)((int)this + 0xfc);
    piVar2 = (int *)F_0075ae90(this_00,iVar1);
    iVar4 = *piVar2;
    uVar3 = F_0075ae90(this_00,iVar1);
    if (iVar4 != *(int *)(uVar3 + 4)) {
      do {
        uVar3 = F_00a41080(&REFG(undefined, 0x14a4230),*(undefined4 *)(iVar4 + 4),0,1,1);
        if (*(uint *)(iVar4 + 0x18) != uVar3) {
          uVar3 = F_00a41080(&REFG(undefined, 0x14a4230),*(undefined4 *)(iVar4 + 4),0,1,1);
          *(uint *)(iVar4 + 0x18) = uVar3;
          return 1;
        }
        iVar4 = iVar4 + 0x140;
        uVar3 = F_0075ae90(this_00,iVar1);
      } while (iVar4 != *(int *)(uVar3 + 4));
    }
  }
  return 0;
}

/* ref: FUN_00700fc0 */
uint F_00700fc0(unsigned int gen_a0)
{
  GEN_ENTER(0x700fc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  int * piVar2;
  uint uVar3;
  
  if (REFG(int, 0x13241f4) != 0) {
    bVar1 = F_00700f40(this);
    in_EAX = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      if (REFG(int, 0x1324204) != 0) {
        piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
        ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,REFG(int, 0x1324204),0);
        *(undefined4 *)&REFG(undefined, 0x1324200) = 0;
      }
      uVar3 = F_00700910(this);
      return uVar3;
    }
  }
  return in_EAX;
}

/* ref: FUN_00701020 */
uint F_00701020(void)
{
  GEN_ENTER(0x701020u, 0u, 0u, 0u, 0u);
  uint in_EAX = 0;
  uint uVar1;
  
  if (REFG(undefined4, 0x1488768) != (undefined *)0x0) {
    uVar1 = F_00700fc0(REFG(undefined4, 0x1488768));
    return uVar1;
  }
  return in_EAX;
}

/* ref: Client::Game::Event::GatheringLeveDirector::vf157 */
uint F_00701030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x701030u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  F_007001a0(this,*((undefined4 *)GEN_TOP((*(int *)(*param_1 + 4) + 0x48))));
  uVar1 = F_006fc830((undefined *)this,param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00701060 */
uint F_00701060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x701060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  F_006fd230(this,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10bb9d4));
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  uVar1 = F_004296a0(0x18,0,800);
  *(uint *)((int)this + 0x40) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x40) + 4))) = *(int *)((int)this + 0x40);
  *((int *)GEN_TOP((*(int *)((int)this + 0x40) + 8))) = *(int *)((int)this + 0x40);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x40) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x40) + 0x15))) = 1;
  puVar3 = (undefined4 *)((int)this + 0x4c);
  *puVar3 = 0;
  puVar2 = (undefined4 *)F_004296a0(8,0,800);
  *puVar3 = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *(undefined4 * PTR32 *)*puVar3 = puVar3;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined1 *)((int)this + 100) = 1;
  puVar3 = (undefined4 *)F_004296a0(0x18,0,800);
  *puVar3 = *(undefined4 *)((int)this + 0x40);
  puVar3[1] = *(undefined4 *)((int)this + 0x40);
  puVar3[2] = *(undefined4 *)((int)this + 0x40);
  *(undefined2 *)(puVar3 + 5) = 0;
  if (puVar3 + 3 != (undefined4 *)0x0) {
    *(undefined2 *)(puVar3 + 3) = 0xf001;
    puVar3[4] = ((code *)REFP(0x7002e0));
  }
  F_00747000((undefined *)((int)this + 0x3c),((undefined1 *)(gen_frame + 0x4)),puVar3,0);
  puVar3 = (undefined4 *)F_004296a0(0x18,0,800);
  *puVar3 = *(undefined4 *)((int)this + 0x40);
  puVar3[1] = *(undefined4 *)((int)this + 0x40);
  puVar3[2] = *(undefined4 *)((int)this + 0x40);
  *(undefined2 *)(puVar3 + 5) = 0;
  if (puVar3 + 3 != (undefined4 *)0x0) {
    *(undefined2 *)(puVar3 + 3) = 0x8001;
    puVar3[4] = ((code *)REFP(0x7000f0));
  }
  F_00747000((undefined *)((int)this + 0x3c),((undefined1 *)(gen_frame + 0x4)),puVar3,0);
  puVar3 = (undefined4 *)F_004296a0(0x18,0,800);
  *puVar3 = *(undefined4 *)((int)this + 0x40);
  puVar3[1] = *(undefined4 *)((int)this + 0x40);
  puVar3[2] = *(undefined4 *)((int)this + 0x40);
  *(undefined2 *)(puVar3 + 5) = 0;
  if (puVar3 + 3 != (undefined4 *)0x0) {
    *(undefined2 *)(puVar3 + 3) = 0x8002;
    puVar3[4] = ((code *)REFP(0x700130));
  }
  F_00747000((undefined *)((int)this + 0x3c),((undefined1 *)(gen_frame + 0x4)),puVar3,0);
  puVar3 = (undefined4 *)F_004296a0(0x18,0,800);
  *puVar3 = *(undefined4 *)((int)this + 0x40);
  puVar3[1] = *(undefined4 *)((int)this + 0x40);
  puVar3[2] = *(undefined4 *)((int)this + 0x40);
  *(undefined2 *)(puVar3 + 5) = 0;
  if (puVar3 + 3 != (undefined4 *)0x0) {
    *(undefined2 *)(puVar3 + 3) = 0x8003;
    puVar3[4] = ((code *)REFP(0xb91a10));
  }
  F_00747000((undefined *)((int)this + 0x3c),((undefined1 *)(gen_frame + 0x4)),puVar3,0);
  puVar3 = (undefined4 *)F_004296a0(0x18,0,800);
  *puVar3 = *(undefined4 *)((int)this + 0x40);
  puVar3[1] = *(undefined4 *)((int)this + 0x40);
  puVar3[2] = *(undefined4 *)((int)this + 0x40);
  *(undefined2 *)(puVar3 + 5) = 0;
  if (puVar3 + 3 != (undefined4 *)0x0) {
    *(undefined2 *)(puVar3 + 3) = 0x8006;
    puVar3[4] = ((code *)REFP(0x700010));
  }
  F_00747000((undefined *)((int)this + 0x3c),((undefined1 *)(gen_frame + 0x4)),puVar3,0);
  puVar3 = (undefined4 *)F_004296a0(0x18,0,800);
  *puVar3 = *(undefined4 *)((int)this + 0x40);
  puVar3[1] = *(undefined4 *)((int)this + 0x40);
  puVar3[2] = *(undefined4 *)((int)this + 0x40);
  *(undefined2 *)(puVar3 + 5) = 0;
  if (puVar3 + 3 != (undefined4 *)0x0) {
    *(undefined2 *)(puVar3 + 3) = 0x8007;
    puVar3[4] = ((code *)REFP(0x700270));
  }
  F_00747000((undefined *)((int)this + 0x3c),((undefined1 *)(gen_frame + 0x4)),puVar3,0);
  puVar3 = (undefined4 *)F_004296a0(0x18,0,800);
  *puVar3 = *(undefined4 *)((int)this + 0x40);
  puVar3[1] = *(undefined4 *)((int)this + 0x40);
  puVar3[2] = *(undefined4 *)((int)this + 0x40);
  *(undefined2 *)(puVar3 + 5) = 0;
  if (puVar3 + 3 != (undefined4 *)0x0) {
    *(undefined2 *)(puVar3 + 3) = 0x801a;
    puVar3[4] = ((code *)REFP(0xb07c00));
  }
  F_00747000((undefined *)((int)this + 0x3c),((undefined1 *)(gen_frame + 0x4)),puVar3,0);
  return (uint)this;
}

/* ref: FUN_00701320 */
uint F_00701320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x701320u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  iVar1 = *(int *)(*param_1 + 4);
  uVar3 = 0;
  if (iVar1 != 0) {
    *(int *)((int)this + 0x3b8) = iVar1;
    uVar3 = F_006eb2d0(REFG(undefined4, 0x1488344),*(undefined4 *)(iVar1 + 800),0);
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x314);
    *(uint *)((int)this + 0x4b8) = uVar3;
    *(uint *)((int)this + 0x4c0) = (uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0x3b8) + 0x324)));
    *(undefined4 *)((int)this + 0x4c4) = 0;
    *(uint *)((int)this + 0x4c8) = (uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0x3b8) + 0x324)));
    *(undefined4 *)((int)this + 0x4cc) = 0;
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x314) = 0;
    }
    *(undefined4 *)((int)this + 0x310) = 0;
    if (*((short *)GEN_TOP((*(int *)((int)this + 0x4b8) + 10))) == 1) {
      uVar3 = F_006fef40(this,*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x3b8) + 800))));
      return uVar3;
    }
    uVar3 = F_00700340(this,*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x3b8) + 800))));
  }
  return uVar3;
}

/* ref: FUN_007013f0 */
uint F_007013f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x7013f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint param_9 = (uint)gen_a9;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  byte bVar1;
  uint uVar2;
  undefined4 * puVar3;
  uint uVar4;
  ulonglong uVar5;
  
  (*(uint *)(gen_frame + 0x118)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x11c);
  ((byte *)(gen_frame + 0x4))[0x20] = (byte)param_2;
  ((byte *)(gen_frame + 0x4))[0x10] = (byte)param_3;
  ((byte *)(gen_frame + 0x4))[0x14] = (byte)param_4;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 28)) = param_6;
  ((byte *)(gen_frame + 0x4))[8] = (byte)param_7;
  (*(uint *)(gen_frame + 0x2c)) = param_1;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 24)) = param_8;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 12)) = param_9;
  uVar4 = param_9;
  if (param_1 != 0) {
    uVar4 = param_1;
    if (999999 < param_1) {
      uVar4 = param_1 - 1000000;
      (*(uint *)(gen_frame + 0x2c)) = uVar4;
      ((byte *)(gen_frame + 0x4))[0x20] = 1;
      ((byte *)(gen_frame + 0x4))[0x20] = 1;
    }
    (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)((int)this + 0x78c);
    (*(uint *)(gen_frame + 0x2c)) = uVar4;
    F_00745750((undefined *)((int)this + 0x78c),((byte *)(gen_frame + 0x4)),&(*(uint *)(gen_frame + 0x2c)));
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x2c)) + 0)) = ((byte *)(gen_frame + 0x4))[0];
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x2c)) + 1)) = ((byte *)(gen_frame + 0x4))[1];
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x2c)) + 2)) = ((byte *)(gen_frame + 0x4))[2];
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x2c)) + 3)) = ((byte *)(gen_frame + 0x4))[3];
    if ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 0)) != (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4))) {
      do {
        uVar2 = (*(uint *)(gen_frame + 0x2c));
        bVar1 = F_006b92d0((undefined *)((*(uint *)(gen_frame + 0x2c)) + 0x18),uVar4,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 32)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 16)),
                             (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 20)),param_5,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 28)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)));
        if (bVar1 != 0) {
          puVar3 = (undefined4 *)F_004296a0(0x18,0,800);
          *puVar3 = *(undefined4 *)(uVar2 + 0x78);
          puVar3[1] = *(undefined4 *)(uVar2 + 0x78);
          puVar3[2] = *(undefined4 *)(uVar2 + 0x78);
          *(undefined2 *)(puVar3 + 5) = 0;
          if ((byte *)(puVar3 + 3) != (byte *)0x0) {
            puVar3[3] = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 24));
            puVar3[4] = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 12));
          }
          uVar4 = F_00746b20((undefined *)(uVar2 + 0x74),((byte *)(gen_frame + 0x4)),puVar3,0);
          F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c));
          return uVar4;
        }
        F_00724e40(&(*(uint *)(gen_frame + 0x2c)));
      } while ((*(uint *)(gen_frame + 0x2c)) != (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)));
    }
    uVar2 = F_006e6520(((undefined1 *)(gen_frame + 0x30)),uVar4,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 32)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 16)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 20)),param_5,
                         (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 28)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 24)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 12)));
    ((uint *)(gen_frame + 0xa0))[0] = uVar4;
    F_00757150(((undefined1 *)(gen_frame + 0xa8)),uVar2);
    F_0075b8e0((*(undefined * PTR32 *)(gen_frame + 0x28)),&(*(undefined * PTR32 *)(gen_frame + 0x28)),((uint *)(gen_frame + 0xa0)));
    F_007496b0(((undefined1 *)(gen_frame + 0x104)),&(*(undefined * PTR32 *)(gen_frame + 0x28)),*(*(undefined4 * PTR32 *)(gen_frame + 0x108)),(*(undefined4 * PTR32 *)(gen_frame + 0x108)));
    F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x108)),0x18,800);
    F_007496b0(((undefined1 *)(gen_frame + 0x8c)),&(*(undefined * PTR32 *)(gen_frame + 0x28)),*(*(undefined4 * PTR32 *)(gen_frame + 0x90)),(*(undefined4 * PTR32 *)(gen_frame + 0x90)));
    uVar5 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x90)),0x18,800);
    uVar4 = (uint)uVar5;
  }
  F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c));
  return uVar4;
}

/* ref: FUN_00701640 */
uint F_00701640(void)
{
  GEN_ENTER(0x701640u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  int * piVar2;
  undefined * this;
  ulonglong uVar3;
  undefined4 uVar4;
  int * PTR32 * ppiVar5;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  (*(int * PTR32 *)(gen_frame + 0x4)) = (int *)0x0;
  piVar2 = (int *)F_004296a0(8,0,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0x4)) = piVar2;
  if (piVar2 != (int *)0x0) {
    *piVar2 = 0;
    piVar2[1] = 0;
  }
  ppiVar5 = &(*(int * PTR32 *)(gen_frame + 0x4));
  *piVar2 = (int)ppiVar5;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  uVar4 = 0x51f;
  this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
  F_0046aa70(this,uVar4,ppiVar5);
  F_00ab6d10();
  F_00ab6e10();
  ((code *)*(gen_code32 *)(*piVar1 + 0xa4))(piVar1,1,0x18,1);
  ((code *)*(gen_code32 *)(*piVar1 + 0xa4))(piVar1,0,0x18,1);
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x4)));
  uVar3 = F_00429760((*(int * PTR32 *)(gen_frame + 0x4)),8,0x2c4);
  return (uint)uVar3;
}

/* ref: FUN_00701700 */
uint F_00701700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x701700u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = F_007013f0(REFG(undefined4, 0x1488344),param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                       (int)this + 0x30,param_8);
  return uVar1;
}

/* ref: Client::Game::Event::GuildleveAssignmentEventHandler::vf24 */
uint F_00701740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x701740u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  F_007003d0(this);
  F_006e95f0(this);
  uVar1 = F_006ff5e0(this);
  return uVar1;
}

/* ref: FUN_00701760 */
uint F_00701760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x701760u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  
  F_007003d0((*(undefined * PTR32 *)&gen_args[0]));
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5a8))) = (undefined1)(*(int *)&gen_args[2]);
  F_006bdad0((*(undefined * PTR32 *)&gen_args[0]));
  (*(int *)&gen_args[2]) = ((*(uint *)&gen_args[1]) << 8 | *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + (*(uint *)&gen_args[1]) * 4 + 0x22c)))) << 0x10;
  uVar1 = (*(uint *)&gen_args[1]);
  if ((*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) & 1) == 0) {
    uVar1 = F_00a50880(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))),(uint)*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54))),0,
                         &(*(int *)&gen_args[2]),1);
    *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) = *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) | 1;
  }
  return uVar1;
}

/* ref: FUN_007017c0 */
uint F_007017c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7017c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this;
  byte bVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  F_00a02210(((byte *)(gen_frame + 0x4)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0x4)),1);
  puVar3 = (undefined4 *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),1,uVar2);
  this = (undefined *)*puVar3;
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),2);
  bVar1 = F_00a01e10(((byte *)(gen_frame + 0x4)),3);
  ((byte *)(gen_frame + 0x4))[0x20] = bVar1;
  if ((this != (undefined *)0x0) && ((*(byte *)((int)this + 0x5c) & 1) == 0)) {
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    F_006bdbc0(uVar2,&(*(undefined4 *)(gen_frame + 0x28)));
    F_00701760(this,(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 32)));
    uVar2 = F_00a02290(((byte *)(gen_frame + 0x4)),0);
    F_00a02240(((byte *)(gen_frame + 0x4)));
    return uVar2;
  }
  F_00a02240(((byte *)(gen_frame + 0x4)));
  return 0;
}

/* ref: FUN_00701870 */
uint F_00701870(unsigned int gen_a0)
{
  GEN_ENTER(0x701870u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  uint uVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[145])REFP(0x10bd23c));
  if (*(int *)((int)this + 0x34c) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x348);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,*(int *)((int)this + 0x34c));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x34c);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x34c) = 0;
    }
  }
  iVar3 = *(int *)((int)this + 0x358);
  if (iVar3 != 0) {
    F_00429760(iVar3,((*(int *)((int)this + 0x360) - iVar3) / 0x28) * 0x28,800);
  }
  *(undefined4 *)((int)this + 0x358) = 0;
  *(undefined4 *)((int)this + 0x35c) = 0;
  *(undefined4 *)((int)this + 0x360) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x350) = (*(undefined * PTR32 (*)[2])REFP(0x10b8168));
  F_007528f0((undefined *)((int)this + 0x338),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x33c),
               *(undefined4 * PTR32 *)((int)this + 0x33c));
  F_00429760(*(undefined4 *)((int)this + 0x33c),0x68,800);
  F_0075a740((undefined *)((int)this + 0x328),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x32c),
               *(undefined4 * PTR32 *)((int)this + 0x32c));
  F_00429760(*(undefined4 *)((int)this + 0x32c),0x24,800);
  F_0042c880((undefined *)((int)this + 0x280));
  F_0042c880((undefined *)((int)this + 0x22c));
  F_0042c880((undefined *)((int)this + 0x1d8));
  uVar4 = F_006fd580(this);
  return uVar4;
}

/* ref: Client::Game::Event::QuestEventHandler::vf39 */
uint F_007019a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7019a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  int iVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  undefined * this_00;
  int iVar6;
  byte bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  if (REFG(undefined4, 0x1324160) == this) {
    REFG(undefined4, 0x1324160) = (undefined *)0x0;
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
    ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,REFG(undefined4, 0x1324164),0);
  }
  if (REFG(undefined4, 0x1324170) == this) {
    REFG(undefined4, 0x1324170) = (undefined *)0x0;
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,REFG(undefined4, 0x1324174),0);
  }
  if (((byte)this[800] & 0x20) != 0) {
    this[800] = (undefined1)((byte)this[800] & 0xdf);
    uVar4 = F_00a6a660(&REFG(undefined, 0x14afd38));
    piVar2 = REFG(undefined4, 0x1379694);
    F_0042cc20(((undefined1 *)(gen_frame + 0x24)),&REFG(undefined, 0x10b3a5a),REFG(undefined4, 0x108cc50));
    if (piVar2 != (int *)0x0) {
      uVar5 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
      F_0042e430(((undefined1 *)(gen_frame + 0x24)),uVar5);
    }
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    (*(int * PTR32 *)(gen_frame + 0xc)) = (int *)0x0;
    piVar3 = (int *)F_004296a0(8,0,0x2c4);
    (*(int * PTR32 *)(gen_frame + 0xc)) = piVar3;
    if (piVar3 != (int *)0x0) {
      *piVar3 = 0;
      piVar3[1] = 0;
    }
    *piVar3 = (int)&(*(int * PTR32 *)(gen_frame + 0xc));
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    uVar5 = 0;
    if (*(char *)(uVar4 + 0x158) != '\0') {
      do {
        F_00492c50(&(*(int * PTR32 *)(gen_frame + 0xc)));
        iVar6 = uVar5 * 0x68;
        iVar1 = *(int *)(iVar6 + 0x15c + uVar4);
        if (iVar1 == 2) {
          uVar8 = *(undefined4 *)(iVar6 + 0x1b8 + uVar4);
          uVar9 = 0x645;
          this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2)));
          F_0046a6b0(this_00,uVar9,uVar8);
        }
        else if (iVar1 == 9) {
          F_00a6bcb0(*(undefined4 *)(iVar6 + 0x1bc + uVar4));
        }
        bVar7 = (char)uVar5 + 1;
        uVar5 = (uint)bVar7;
      } while (bVar7 < *(byte *)(uVar4 + 0x158));
    }
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0xc)));
    F_00429760((*(int * PTR32 *)(gen_frame + 0xc)),8,0x2c4);
    (*(int * PTR32 *)(gen_frame + 0xc)) = (int *)0x0;
    F_0042c880(((undefined1 *)(gen_frame + 0x24)));
  }
  *(undefined2 *)(this + 0x36c) = 0xffff;
  F_00a036e0(*(undefined * PTR32 *)(this + 0xf8));
  F_006e6ba0(*(undefined * PTR32 *)(this + 4),this,1);
  this[0x44] = (undefined1)0x0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  this[0x4c] = (undefined1)0x0;
  if (param_3 == 0xb) {
    uVar8 = 0x522;
  }
  else {
    uVar4 = param_3 - 0xc;
    if (uVar4 != 0) goto LAB_00701b91;
    uVar8 = 0x521;
  }
  uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this,uVar8,0,0);
LAB_00701b91: ;
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return uVar4;
}

/* ref: FUN_00701bb0 */
uint F_00701bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x701bb0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  uint uVar6;
  uint uVar7;
  int * piVar8;
  int iVar9;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  piVar5 = (int *)F_006ff0a0(REFG(undefined4, 0x1488344),(int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30);
  piVar4 = REFG(undefined4, 0x1379694);
  if ((REFG(undefined4, 0x1379694) != (int *)0x0) &&
     (F_00744460(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x328))),&(*(int * PTR32 *)(gen_frame + 0x10)),&(*(undefined4 *)&gen_args[1])), piVar5 = (*(int * PTR32 *)(gen_frame + 0x10)),
     (*(int * PTR32 *)(gen_frame + 0x10)) != *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x32c))))) {
    piVar5 = (int *)(*(int * PTR32 *)(gen_frame + 0x10))[5];
    piVar8 = (int *)*piVar5;
    (*(bool *)(gen_frame + 0x1b)) = **((char * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x16c))) != '\0';
    (*(int * PTR32 *)(gen_frame + 0x1c)) = piVar8;
    if (piVar8 != piVar5) {
      do {
        if (((((*(byte *)(piVar8 + 8) & 0x10) != 0) && ((*(bool *)(gen_frame + 0x1b)) != false)) &&
            (iVar9 = piVar4[0x5d], iVar9 != 0)) &&
           (uVar6 = ((code *)*(gen_code32 *)(*piVar4 + 4))(piVar4), uVar6 == 1)) {
          F_00a019d0(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8))));
          uVar6 = F_0042a990(iVar9 + 8);
          uVar7 = F_0042a990((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x16c);
          uVar6 = F_00a028c0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8))),"GetListenItems",uVar7,uVar6,piVar8[3],
                               0x41);
          if (uVar6 == 0) {
            (*(int *)(gen_frame + 0xc)) = 5;
            do {
              uVar6 = (*(uint *)(gen_frame + 0x17));
              iVar9 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8)));
              (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x17)) + 0)) = 0;
              (*(uint *)(gen_frame + 0x17)) = uVar6 & 0xffffff00;
              (*(uint *)(gen_frame + 0x0)) = 0;
              (*(undefined4 *)(gen_frame + 0x30)) = 0;
              (*(undefined1 *)(gen_frame + 0x34)) = 0;
              uVar6 = (*(uint *)(gen_frame + 0x4)) >> 8;
              (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) & 0xffffff00;
              (*(undefined4 *)(gen_frame + 0x24)) = 0;
              (*(undefined4 *)(gen_frame + 0x28)) = 0;
              (*(undefined2 *)(gen_frame + 0x2c)) = 0;
              uVar7 = F_00b9a9b0(*(undefined4 *)(iVar9 + 8),0xffffffff);
              if (uVar7 != 0) {
                uVar7 = F_00b9ab70(*(undefined4 *)(iVar9 + 8),0xffffffff);
                (*(uint *)(gen_frame + 0x4)) = CONCAT31((int3)uVar6,(char)uVar7);
              }
              F_00b9a760(*(undefined4 *)(iVar9 + 8),0xfffffffe);
              iVar9 = 4;
              do {
                iVar2 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8)));
                uVar6 = F_00b9a9b0(*(undefined4 *)(iVar2 + 8),0xffffffff);
                if (uVar6 != 0) {
                  uVar6 = F_00b9ab70(*(undefined4 *)(iVar2 + 8),0xffffffff);
                  *(char *)((int)&(*(undefined4 *)(gen_frame + 0x30)) + iVar9) = (char)uVar6;
                }
                F_00b9a760(*(undefined4 *)(iVar2 + 8),0xfffffffe);
                iVar2 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8)));
                uVar6 = F_00b9a9b0(*(undefined4 *)(iVar2 + 8),0xffffffff);
                if (uVar6 != 0) {
                  uVar6 = F_00b9ab70(*(undefined4 *)(iVar2 + 8),0xffffffff);
                  *(short *)((int)&(*(undefined4 *)(gen_frame + 0x24)) + iVar9 * 2) = (short)uVar6;
                }
                F_00b9a760(*(undefined4 *)(iVar2 + 8),0xfffffffe);
                iVar9 = iVar9 + -1;
              } while (-1 < iVar9);
              F_00a01d80(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8))),&(*(uint *)(gen_frame + 0x17)));
              iVar9 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8)));
              (*(char *)(gen_frame + 0x23)) = '\x01';
              uVar6 = F_00b9a9b0(*(undefined4 *)(iVar9 + 8),0xffffffff);
              if (uVar6 == 0) {
                (*(char *)(gen_frame + 0x23)) = '\0';
                uVar6 = (*(uint *)(gen_frame + 0x0));
              }
              else {
                uVar6 = F_00b9ab70(*(undefined4 *)(iVar9 + 8),0xffffffff);
              }
              F_00b9a760(*(undefined4 *)(iVar9 + 8),0xfffffffe);
              if (((*(char *)(gen_frame + 0x23)) != '\0') && (uVar6 != 0)) {
                F_007013f0(REFG(undefined4, 0x1488344),uVar6,(*(uint *)(gen_frame + 0x17)),0,1,&(*(undefined4 *)(gen_frame + 0x24)),&(*(undefined4 *)(gen_frame + 0x30)),(*(uint *)(gen_frame + 0x4)),
                             (int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30,(uint)*(byte *)((*(int * PTR32 *)(gen_frame + 0x1c)) + 4));
              }
              (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + -1;
              piVar8 = (*(int * PTR32 *)(gen_frame + 0x1c));
            } while ((*(int *)(gen_frame + 0xc)) != 0);
          }
        }
        if (*(char *)((int)piVar8 + 0x25) == '\0') {
          piVar5 = (int *)piVar8[2];
          if (*(char *)((int)piVar5 + 0x25) == '\0') {
            cVar1 = *(char *)(*piVar5 + 0x25);
            piVar8 = (int *)*piVar5;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*piVar8 + 0x25);
              piVar5 = piVar8;
              piVar8 = (int *)*piVar8;
            }
            (*(int * PTR32 *)(gen_frame + 0x1c)) = piVar5;
            piVar8 = (*(int * PTR32 *)(gen_frame + 0x1c));
          }
          else {
            cVar1 = *(char *)(piVar8[1] + 0x25);
            piVar5 = (int *)piVar8[1];
            while ((piVar3 = piVar5, cVar1 == '\0' && (piVar8 == (int *)piVar3[2]))) {
              (*(int * PTR32 *)(gen_frame + 0x1c)) = piVar3;
              cVar1 = *(char *)(piVar3[1] + 0x25);
              piVar5 = (int *)piVar3[1];
              piVar8 = piVar3;
            }
            (*(int * PTR32 *)(gen_frame + 0x1c)) = piVar3;
            piVar8 = (*(int * PTR32 *)(gen_frame + 0x1c));
          }
        }
        piVar5 = (*(int * PTR32 *)(gen_frame + 0x10));
      } while (piVar8 != (int *)(*(int * PTR32 *)(gen_frame + 0x10))[5]);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return (uint)piVar5;
}

/* ref: FUN_00701e90 */
uint F_00701e90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x701e90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  byte * pbVar1;
  byte bVar2;
  byte bVar3;
  undefined2 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined * pvVar9;
  uint uVar10;
  byte bVar11;
  byte * pbVar12;
  
  F_007596f0((undefined *)((int)this + 0x328),*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x32c) + 4))));
  uVar6 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 40));
  *((int *)GEN_TOP((*(int *)((int)this + 0x32c) + 4))) = *(int *)((int)this + 0x32c);
  *(undefined4 *)*(undefined4 *)((int)this + 0x32c) = *(undefined4 *)((int)this + 0x32c);
  *((int *)GEN_TOP((*(int *)((int)this + 0x32c) + 8))) = *(int *)((int)this + 0x32c);
  *(undefined4 *)((int)this + 0x330) = 0;
  iVar5 = *(int *)(param_1 + 0xb78);
  uVar10 = 0;
  if (iVar5 != 0) {
    uVar4 = *(undefined2 *)(param_1 + 0xb8a);
    ((byte *)(gen_frame + 0xc))[0x28] = ((byte *)(gen_frame + 0xc))[0x28] & 0x80;
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 40)) = uVar6 & 0xffffff80;
    ((byte *)(gen_frame + 0xc))[0] = (char)iVar5;
    ((byte *)(gen_frame + 0xc))[1] = (char)((uint)iVar5 >> 8);
    ((byte *)(gen_frame + 0xc))[2] = (char)((uint)iVar5 >> 0x10);
    ((byte *)(gen_frame + 0xc))[3] = (char)((uint)iVar5 >> 0x18);
    ((byte *)(gen_frame + 0xc))[0x18] = 0xff;
    ((byte *)(gen_frame + 0xc))[0x19] = 1;
    ((byte *)(gen_frame + 0xc))[0x18] = 0xff;
    ((byte *)(gen_frame + 0xc))[0x19] = 1;
    uVar6 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 24));
    ((byte *)(gen_frame + 0xc))[0x26] = (byte)uVar4;
    ((byte *)(gen_frame + 0xc))[0x27] = SUB21(uVar4,1);
    ((byte *)(gen_frame + 0xc))[0x26] = (byte)uVar4;
    ((byte *)(gen_frame + 0xc))[0x27] = SUB21(uVar4,1);
    ((byte *)(gen_frame + 0xc))[0xc] = 0;
    ((byte *)(gen_frame + 0xc))[0xd] = 0;
    ((byte *)(gen_frame + 0xc))[0xe] = 0;
    ((byte *)(gen_frame + 0xc))[0xf] = 0;
    ((byte *)(gen_frame + 0xc))[0x24] = 3;
    ((byte *)(gen_frame + 0xc))[0x24] = 3;
    uVar7 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 36));
    ((byte *)(gen_frame + 0xc))[4] = 0xff;
    ((byte *)(gen_frame + 0xc))[5] = 1;
    ((byte *)(gen_frame + 0xc))[6] = ((byte *)(gen_frame + 0xc))[0x1a];
    ((byte *)(gen_frame + 0xc))[7] = ((byte *)(gen_frame + 0xc))[0x1b];
    ((byte *)(gen_frame + 0xc))[0x10] = 3;
    ((byte *)(gen_frame + 0xc))[0x11] = ((byte *)(gen_frame + 0xc))[0x25];
    ((byte *)(gen_frame + 0xc))[0x12] = ((byte *)(gen_frame + 0xc))[0x26];
    ((byte *)(gen_frame + 0xc))[0x13] = ((byte *)(gen_frame + 0xc))[0x27];
    (*(byte *)(gen_frame + 0x4b)) = 0;
    ((byte *)(gen_frame + 0xc))[8] = 0;
    ((byte *)(gen_frame + 0xc))[9] = 0;
    ((byte *)(gen_frame + 0xc))[10] = 0;
    ((byte *)(gen_frame + 0xc))[0xb] = 0;
    ((byte *)(gen_frame + 0xc))[0x14] = ((byte *)(gen_frame + 0xc))[0x28];
    ((byte *)(gen_frame + 0xc))[0x15] = ((byte *)(gen_frame + 0xc))[0x29];
    ((byte *)(gen_frame + 0xc))[0x16] = ((byte *)(gen_frame + 0xc))[0x2a];
    ((byte *)(gen_frame + 0xc))[0x17] = ((byte *)(gen_frame + 0xc))[0x2b];
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 24)) = uVar6;
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 36)) = uVar7;
    pvVar9 = (undefined *)F_0075b590((undefined *)((int)this + 0x328),&(*(byte *)(gen_frame + 0x4b)));
    uVar10 = F_007507e0(pvVar9,((undefined1 *)(gen_frame + 0x40)),((byte *)(gen_frame + 0xc)));
  }
  (*(uint *)(gen_frame + 0x44)) = 0;
  pbVar12 = (byte *)(param_1 + 0x19f);
  do {
    uVar6 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 24));
    if (*(int *)(pbVar12 + -0xb) == 0) {
      return uVar10;
    }
    bVar2 = *pbVar12;
    if ((bVar2 == 0xff) || (0x17 < bVar2)) {
      (*(byte *)(gen_frame + 0x4b)) = pbVar12[-1];
    }
    else {
      (*(byte *)(gen_frame + 0x4b)) = *(byte *)(param_1 + 0x7b4 + (uint)bVar2 * 0x24);
    }
    uVar4 = *(undefined2 *)(pbVar12 + -3);
    ((byte *)(gen_frame + 0xc))[0x26] = (byte)uVar4;
    ((byte *)(gen_frame + 0xc))[0x27] = SUB21(uVar4,1);
    ((byte *)(gen_frame + 0xc))[0x26] = (byte)uVar4;
    ((byte *)(gen_frame + 0xc))[0x27] = SUB21(uVar4,1);
    ((byte *)(gen_frame + 0xc))[0x18] = bVar2;
    bVar3 = pbVar12[1];
    (*(undefined2 *)((char *)((byte *)(gen_frame + 0xc)) + 26)) = SUB42(uVar6,2);
    ((byte *)(gen_frame + 0xc))[0x19] = bVar3;
    uVar6 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 24));
    uVar10 = (uint)pbVar12[2];
    bVar11 = ((((((pbVar12[10] & 1) * '\x02' | pbVar12[9] & 1) * '\x02' | pbVar12[8] & 1) * '\x02' |
               pbVar12[7] & 1) * '\x02' | pbVar12[6] & 1) * '\x02' | pbVar12[5] & 1) * '\x02' |
             pbVar12[4] & 1 | ((byte *)(gen_frame + 0xc))[0x28] & 0x80;
    ((byte *)(gen_frame + 0xc))[0x28] = bVar11;
    uVar8 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 40));
    ((byte *)(gen_frame + 0xc))[8] = (char)uVar10;
    ((byte *)(gen_frame + 0xc))[9] = (char)(uVar10 >> 8);
    ((byte *)(gen_frame + 0xc))[10] = (char)(uVar10 >> 0x10);
    ((byte *)(gen_frame + 0xc))[0xb] = (char)(uVar10 >> 0x18);
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) = *(undefined4 *)(pbVar12 + -0xb);
    ((byte *)(gen_frame + 0xc))[4] = bVar2;
    ((byte *)(gen_frame + 0xc))[5] = bVar3;
    ((byte *)(gen_frame + 0xc))[6] = ((byte *)(gen_frame + 0xc))[0x1a];
    ((byte *)(gen_frame + 0xc))[7] = ((byte *)(gen_frame + 0xc))[0x1b];
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 12)) = *(undefined4 *)(pbVar12 + -7);
    ((byte *)(gen_frame + 0xc))[0x24] = 3;
    ((byte *)(gen_frame + 0xc))[0x24] = 3;
    uVar7 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 36));
    ((byte *)(gen_frame + 0xc))[0x14] = bVar11;
    ((byte *)(gen_frame + 0xc))[0x15] = ((byte *)(gen_frame + 0xc))[0x29];
    ((byte *)(gen_frame + 0xc))[0x16] = ((byte *)(gen_frame + 0xc))[0x2a];
    ((byte *)(gen_frame + 0xc))[0x17] = ((byte *)(gen_frame + 0xc))[0x2b];
    ((byte *)(gen_frame + 0xc))[0x10] = 3;
    ((byte *)(gen_frame + 0xc))[0x11] = ((byte *)(gen_frame + 0xc))[0x25];
    ((byte *)(gen_frame + 0xc))[0x12] = ((byte *)(gen_frame + 0xc))[0x26];
    ((byte *)(gen_frame + 0xc))[0x13] = ((byte *)(gen_frame + 0xc))[0x27];
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 24)) = uVar6;
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 36)) = uVar7;
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 40)) = uVar8;
    pvVar9 = (undefined *)F_0075b6d0((undefined *)((int)this + 0x328),&(*(byte *)(gen_frame + 0x4b)));
    F_007507e0(pvVar9,((undefined1 *)(gen_frame + 0x38)),((byte *)(gen_frame + 0xc)));
    pbVar1 = pbVar12 + 1;
    pbVar12 = pbVar12 + 0x18;
    *(uint *)((int)this + 0x38) = *(uint *)((int)this + 0x38) | 1 << (*pbVar1 & 0x1f);
    uVar10 = (*(uint *)(gen_frame + 0x44)) + 1;
    (*(uint *)(gen_frame + 0x44)) = uVar10;
  } while (uVar10 < 0x40);
  return uVar10;
}

/* ref: FUN_00702050 */
uint F_00702050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x702050u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int * piVar5;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0xc)) = param_3 & 0xffff;
  puVar3 = *(undefined4 * PTR32 *)(*param_1 + 4);
  (*(uint *)(gen_frame + 0x8)) = param_3 >> 0x10;
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar3;
  F_007445f0((undefined *)((int)this + 0x344),&(*(int *)(gen_frame + 0x20)),&(*(uint *)(gen_frame + 0x8)));
  uVar1 = (*(uint *)(gen_frame + 0xc));
  puVar4 = (undefined4 *)((*(int *)(gen_frame + 0x20)) + 0x10);
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined1 *)((*(int *)(gen_frame + 0x20)) + 0x98) = 1;
  puVar3 = *(undefined4 * PTR32 *)((int)this + (*(uint *)(gen_frame + 0xc)) * 4 + 0x358);
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x16)) = 0;
  (*(undefined4 *)(gen_frame + 0x1a)) = 0;
  (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x20)) + 0)) = 0;
  (*(int *)(gen_frame + 0x20)) = 0;
  (*(undefined1 *)(gen_frame + 0x24)) = 0;
  if (puVar3 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
    *(undefined4 *)((int)this + uVar1 * 4 + 0x358) = 0;
  }
  iVar2 = 0;
  piVar5 = (*(undefined4 * PTR32 *)(gen_frame + 0x10)) + 2;
  do {
    uVar1 = 0;
    if (*piVar5 != 0) {
      uVar1 = F_007013f0(REFG(undefined4, 0x1488344),*piVar5,(uint)*(byte *)(iVar2 + 0x21 + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x10))),0,1,
                           &(*(undefined2 *)(gen_frame + 0x14)),&(*(int *)(gen_frame + 0x20)),0,(int)this + 0x30,0);
    }
    iVar2 = iVar2 + 1;
    piVar5 = piVar5 + 1;
  } while (iVar2 < 4);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar1;
}

/* ref: Client::Game::Event::SpecialShopEventHandler::vf34 */
uint F_00702130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x702130u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x6d0];
  undefined * this_00;
  char cVar1;
  undefined1 SVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 * puVar6;
  int * piVar7;
  int iVar8;
  undefined * pSVar9;
  int * piVar10;
  uint uVar11;
  int * piVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  
  (*(uint *)(gen_frame + 0x6c8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6cc);
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
  if (this[0x108] == (undefined1)0x0) {
    iVar4 = *(int *)(this + 0xf8);
    if (iVar4 != *(int *)(this + 0xfc)) {
      (*(int * PTR32 *)(gen_frame + 0x6c0)) = (int *)(iVar4 + 8);
      piVar7 = param_1;
      do {
        piVar12 = (*(int * PTR32 *)(gen_frame + 0x6c0));
        iVar3 = *piVar7;
        (*(int * PTR32 *)(gen_frame + 0x6c0)) = (*(int * PTR32 *)(gen_frame + 0x6c0)) + 0x6c;
        iVar4 = iVar4 + 0x1b0;
        piVar7 = piVar7 + 1;
        piVar10 = *(int * PTR32 *)(iVar3 + 4);
        for (iVar8 = 0x34; iVar8 != 0; iVar8 = iVar8 + -1) {
          *piVar12 = *piVar10;
          piVar10 = piVar10 + 1;
          piVar12 = piVar12 + 1;
        }
      } while (iVar4 != *(int *)(this + 0xfc));
    }
    puVar6 = *(undefined4 * PTR32 *)(this + 100);
    uVar11 = 0;
    if (puVar6 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar6)(puVar6,1);
      *(undefined4 *)(this + 100) = 0;
    }
    *(undefined4 *)(this + 0x68) = 0;
    (*(int *)(gen_frame + 0x18c)) = 0;
    F_00c48350(((undefined1 *)(gen_frame + 0x190)),0,0x4fc);
    this_00 = this + 0x10c;
    piVar7 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x110) + 4)));
    cVar1 = *(char *)((int)piVar7 + 0x6d);
    (*(int * PTR32 *)(gen_frame + 0x6c0)) = piVar7;
    pSVar9 = (*(undefined * PTR32 *)(gen_frame + 0x10));
    while ((*(undefined * PTR32 *)(gen_frame + 0x10)) = pSVar9, cVar1 == '\0') {
      (*(int * PTR32 *)(gen_frame + 0x6c0)) = piVar7;
      F_00749b70(this_00,piVar7[2]);
      piVar7 = (int *)*piVar7;
      F_0042c880((*(int * PTR32 *)(gen_frame + 0x6c0)) + 6);
      F_00429760((*(int * PTR32 *)(gen_frame + 0x6c0)),0x70,800);
      cVar1 = *(char *)((int)piVar7 + 0x6d);
      (*(int * PTR32 *)(gen_frame + 0x6c0)) = piVar7;
      pSVar9 = (*(undefined * PTR32 *)(gen_frame + 0x10));
    }
    *((int *)GEN_TOP((*(int *)(this + 0x110) + 4))) = *(int *)(this + 0x110);
    *(undefined4 *)*(undefined4 *)(this + 0x110) = *(undefined4 *)(this + 0x110);
    uVar5 = *(uint *)(this + 0x110);
    *(uint *)(uVar5 + 8) = uVar5;
    *(undefined4 *)(this + 0x114) = 0;
    piVar7 = *(int * PTR32 *)(pSVar9 + 0xf8);
    (*(int * PTR32 *)(gen_frame + 0x6c0)) = piVar7;
    if (piVar7 != *(int * PTR32 *)(pSVar9 + 0xfc)) {
      do {
        iVar4 = piVar7[0x3b];
        (*(int * PTR32 *)(gen_frame + 0x6c0)) = piVar7;
        if (iVar4 != 0) {
          uVar5 = 0;
          if (uVar11 != 0) {
            do {
              if (*(int *)(((undefined1 *)(gen_frame + 0x190)) + uVar5 * 4 + -4) == iVar4) goto LAB_007023cb;
              uVar5 = uVar5 + 1;
            } while (uVar5 < uVar11);
          }
          *(int *)(((undefined1 *)(gen_frame + 0x190)) + uVar11 * 4 + -4) = iVar4;
          F_0042b630(((undefined1 *)(gen_frame + 0x1c)));
          iVar4 = piVar7[0x3b];
          (*(uint *)(gen_frame + 0x14)) = uVar11;
          (*(uint *)(gen_frame + 0x70)) = uVar11;
          (*(undefined4 *)(gen_frame + 0x74)) = (*(undefined4 *)(gen_frame + 0x18));
          F_0042cbc0(((undefined1 *)(gen_frame + 0x78)),((undefined1 *)(gen_frame + 0x1c)));
          (*(uint *)(gen_frame + 0x130)) = (*(uint *)(gen_frame + 0x70));
          (*(int *)(gen_frame + 0x12c)) = iVar4;
          (*(undefined4 *)(gen_frame + 0x134)) = (*(undefined4 *)(gen_frame + 0x74));
          F_0042cbc0(((undefined1 *)(gen_frame + 0x138)),((undefined1 *)(gen_frame + 0x78)));
          F_0042c880(((undefined1 *)(gen_frame + 0x78)));
          puVar6 = (undefined4 *)F_004296a0(0x70,0,800);
          *puVar6 = *(undefined4 *)(this + 0x110);
          puVar6[1] = *(undefined4 *)(this + 0x110);
          puVar6[2] = *(undefined4 *)(this + 0x110);
          *(undefined2 *)(puVar6 + 0x1b) = 0;
          (*(int *)(gen_frame + 0xcc)) = (*(int *)(gen_frame + 0x12c));
          (*(uint *)(gen_frame + 0xd0)) = (*(uint *)(gen_frame + 0x130));
          (*(undefined4 *)(gen_frame + 0xd4)) = (*(undefined4 *)(gen_frame + 0x134));
          F_0042cbc0(((undefined1 *)(gen_frame + 0xd8)),((undefined1 *)(gen_frame + 0x138)));
          if (puVar6 + 3 != (int *)0x0) {
            puVar6[3] = (*(int *)(gen_frame + 0xcc));
            puVar6[4] = (*(uint *)(gen_frame + 0xd0));
            puVar6[5] = (*(undefined4 *)(gen_frame + 0xd4));
            F_0042cbc0(puVar6 + 6,((undefined1 *)(gen_frame + 0xd8)));
          }
          F_0042c880(((undefined1 *)(gen_frame + 0xd8)));
          F_0074abb0(this_00,((undefined1 *)(gen_frame + 0x8)),puVar6,0);
          F_0042c880(((undefined1 *)(gen_frame + 0x138)));
          uVar11 = uVar11 + 1;
          uVar13 = F_0042c880(((undefined1 *)(gen_frame + 0x1c)));
          uVar5 = (uint)uVar13;
          pSVar9 = (*(undefined * PTR32 *)(gen_frame + 0x10));
        }
LAB_007023cb: ;
        piVar7 = (*(int * PTR32 *)(gen_frame + 0x6c0));
        iVar4 = (*(int * PTR32 *)(gen_frame + 0x6c0))[0x3c];
        if (iVar4 != 0) {
          uVar5 = 0;
          if (uVar11 != 0) {
            do {
              if (*(int *)(((undefined1 *)(gen_frame + 0x190)) + uVar5 * 4 + -4) == iVar4) goto LAB_00702538;
              uVar5 = uVar5 + 1;
            } while (uVar5 < uVar11);
          }
          *(int *)(((undefined1 *)(gen_frame + 0x190)) + uVar11 * 4 + -4) = iVar4;
          F_0042b630(((undefined1 *)(gen_frame + 0x1c)));
          iVar4 = piVar7[0x3c];
          (*(uint *)(gen_frame + 0x14)) = uVar11;
          (*(uint *)(gen_frame + 0x70)) = uVar11;
          (*(undefined4 *)(gen_frame + 0x74)) = (*(undefined4 *)(gen_frame + 0x18));
          F_0042cbc0(((undefined1 *)(gen_frame + 0x78)),((undefined1 *)(gen_frame + 0x1c)));
          (*(int *)(gen_frame + 0xcc)) = iVar4;
          (*(uint *)(gen_frame + 0xd0)) = (*(uint *)(gen_frame + 0x70));
          (*(undefined4 *)(gen_frame + 0xd4)) = (*(undefined4 *)(gen_frame + 0x74));
          F_0042cbc0(((undefined1 *)(gen_frame + 0xd8)),((undefined1 *)(gen_frame + 0x78)));
          F_0042c880(((undefined1 *)(gen_frame + 0x78)));
          puVar6 = (undefined4 *)F_004296a0(0x70,0,800);
          *puVar6 = *(undefined4 *)(this + 0x110);
          puVar6[1] = *(undefined4 *)(this + 0x110);
          puVar6[2] = *(undefined4 *)(this + 0x110);
          *(undefined2 *)(puVar6 + 0x1b) = 0;
          (*(int *)(gen_frame + 0x12c)) = (*(int *)(gen_frame + 0xcc));
          (*(undefined4 *)(gen_frame + 0x134)) = (*(undefined4 *)(gen_frame + 0xd4));
          (*(uint *)(gen_frame + 0x130)) = (*(uint *)(gen_frame + 0xd0));
          F_0042cbc0(((undefined1 *)(gen_frame + 0x138)),((undefined1 *)(gen_frame + 0xd8)));
          if (puVar6 + 3 != (int *)0x0) {
            puVar6[3] = (*(int *)(gen_frame + 0x12c));
            puVar6[4] = (*(uint *)(gen_frame + 0x130));
            puVar6[5] = (*(undefined4 *)(gen_frame + 0x134));
            F_0042cbc0(puVar6 + 6,((undefined1 *)(gen_frame + 0x138)));
          }
          F_0042c880(((undefined1 *)(gen_frame + 0x138)));
          F_0074abb0(this_00,&(*(undefined2 *)(gen_frame + 0x6b4)),puVar6,0);
          F_0042c880(((undefined1 *)(gen_frame + 0xd8)));
          uVar11 = uVar11 + 1;
          uVar13 = F_0042c880(((undefined1 *)(gen_frame + 0x1c)));
          uVar5 = (uint)uVar13;
          pSVar9 = (*(undefined * PTR32 *)(gen_frame + 0x10));
          piVar7 = (*(int * PTR32 *)(gen_frame + 0x6c0));
        }
LAB_00702538: ;
        piVar7 = piVar7 + 0x6c;
        (*(int * PTR32 *)(gen_frame + 0x6c0)) = piVar7;
      } while (piVar7 != *(int * PTR32 *)(pSVar9 + 0xfc));
      if (uVar11 != 0) {
        piVar7 = (int *)F_0052fba0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8));
        ((code *)*(gen_code32 *)(*piVar7 + 0x14))(piVar7);
        (*(undefined * PTR32 *)(gen_frame + 0x10))[0x108] = (undefined1)0x1;
        uVar11 = F_006cd8f0((*(undefined * PTR32 *)(gen_frame + 0x10)),&(*(int *)(gen_frame + 0x18c)),uVar11,0);
        F_00c47745((*(uint *)(gen_frame + 0x6c8)) ^ (uint)(uint)(gen_frame + 0x6cc));
        return uVar11;
      }
    }
    pSVar9[0x1c] = (undefined1)((byte)pSVar9[0x1c] & 0xfd);
    SVar2 = pSVar9[0x1c];
    uVar11 = CONCAT31((int3)(uVar5 >> 8),SVar2);
    if (((byte)SVar2 & 1) == 0) {
      pSVar9[0x1c] = (undefined1)((byte)SVar2 | 1);
      uVar11 = ((code *)*(gen_code32 *)(*(int *)pSVar9 + 0x23c))(pSVar9);
      F_00c47745((*(uint *)(gen_frame + 0x6c8)) ^ (uint)(uint)(gen_frame + 0x6cc));
      return uVar11;
    }
  }
  else {
    piVar7 = ((int *)GEN_TOP(**(int * PTR32 *)(this + 0x110)));
    if (piVar7 != *(int * PTR32 *)(this + 0x110)) {
      do {
        iVar4 = *((int *)GEN_TOP((param_1[piVar7[4]] + 4)));
        if (iVar4 != 0) {
          piVar7[5] = (uint)*(ushort *)(iVar4 + 0x7c);
          uVar11 = F_00ab6240(piVar7[3],0,iVar4);
          F_0042e430(piVar7 + 6,uVar11);
        }
        if (*(char *)((int)piVar7 + 0x6d) == '\0') {
          piVar12 = (int *)piVar7[2];
          if (*(char *)((int)piVar12 + 0x6d) == '\0') {
            cVar1 = *(char *)(*piVar12 + 0x6d);
            piVar7 = piVar12;
            piVar12 = (int *)*piVar12;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*piVar12 + 0x6d);
              piVar7 = piVar12;
              piVar12 = (int *)*piVar12;
            }
          }
          else {
            cVar1 = *(char *)(piVar7[1] + 0x6d);
            piVar10 = (int *)piVar7[1];
            piVar12 = piVar7;
            while ((piVar7 = piVar10, cVar1 == '\0' && (piVar12 == (int *)piVar7[2]))) {
              cVar1 = *(char *)(piVar7[1] + 0x6d);
              piVar10 = (int *)piVar7[1];
              piVar12 = piVar7;
            }
          }
        }
      } while (piVar7 != *(int * PTR32 *)(this + 0x110));
    }
    this[0x1c] = (undefined1)((byte)this[0x1c] & 0xfd);
    if (((byte)this[0x1c] & 1) == 0) {
      this[0x1c] = (undefined1)((byte)this[0x1c] | 1);
      ((code *)*(gen_code32 *)(*(int *)this + 0x23c))(this);
    }
    puVar6 = *(undefined4 * PTR32 *)(this + 100);
    if (puVar6 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar6)(puVar6,1);
      *(undefined4 *)(this + 100) = 0;
    }
    *(undefined4 *)(this + 0x68) = 0;
    if (*(int *)(this + 8) == 0x1b000c) {
      ((undefined4 *)(gen_frame + 0x68c))[0] = 0x68b;
      ((undefined4 *)(gen_frame + 0x68c))[1] = 0x6d2;
      ((undefined4 *)(gen_frame + 0x68c))[2] = 0x718;
      ((undefined4 *)(gen_frame + 0x68c))[3] = 0x75d;
      ((undefined4 *)(gen_frame + 0x68c))[4] = 0x7a3;
      ((undefined4 *)(gen_frame + 0x68c))[5] = 0x804;
      ((undefined4 *)(gen_frame + 0x68c))[6] = 0x85c;
      ((undefined4 *)(gen_frame + 0x68c))[7] = 0x8a5;
      ((undefined4 *)(gen_frame + 0x68c))[8] = 0x8a6;
      ((undefined4 *)(gen_frame + 0x68c))[9] = 0x902;
      (*(undefined2 *)(gen_frame + 0x6b4)) = 0;
      (*(undefined4 *)(gen_frame + 0x6b6)) = 0;
      (*(undefined4 *)(gen_frame + 0x6ba)) = 0;
      (*(undefined1 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x6c0)) + 0)) = 0;
      (*(int * PTR32 *)(gen_frame + 0x6c0)) = (int *)0x0;
      (*(undefined1 *)(gen_frame + 0x6c4)) = 0;
      uVar11 = 0;
      do {
        F_007013f0(REFG(undefined4, 0x1488344),((undefined4 *)(gen_frame + 0x68c))[(int)(uVar11)],0,1,1,&(*(undefined2 *)(gen_frame + 0x6b4)),&(*(int * PTR32 *)(gen_frame + 0x6c0)),0,this + 0x30,0);
        uVar11 = uVar11 + 1;
      } while (uVar11 < 10);
    }
    piVar7 = (int *)F_00424750(REFG(int, 0x137104c));
    uVar11 = 0;
    if (piVar7 != (int *)0x0) {
      uVar14 = 99;
      uVar11 = ((code *)*(gen_code32 *)(*piVar7 + 0x48))(piVar7);
      piVar7 = (int *)F_00763050(uVar11,uVar14);
      uVar11 = 0;
      if ((piVar7 != (int *)0x0) &&
         (uVar11 = ((code *)*(gen_code32 *)(*piVar7 + 0x10))(piVar7), (char)uVar11 != '\0')) {
        F_0077a340(piVar7);
        uVar11 = F_007de190(piVar7);
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x6c8)) ^ (uint)(uint)(gen_frame + 0x6cc));
  return uVar11;
}

/* ref: FUN_00702780 */
uint F_00702780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x702780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  undefined4 * this_00;
  
  uVar1 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8));
  *(uint *)((int)this + 0x310) = uVar1;
  this_00 = (undefined4 *)F_00406b90(0x20,0,0);
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(this_00,1,0);
    this_00[5] = 1;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10b92d4));
    this_00[6] = this;
    this_00[7] = ((code *)REFP(0x701320));
  }
  *(undefined4 * PTR32 *)((int)this + 0x314) = this_00;
  F_00cb4540(this_00,0,param_1);
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x310) + 0x48))))
                    (*(int * PTR32 *)((int)this + 0x310),*(undefined4 *)((int)this + 0x314));
  return uVar1;
}

/* ref: FUN_00702810 */
uint F_00702810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x702810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  F_006fd460(this,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[145])REFP(0x10bd23c));
  *(short *)((int)this + 0x1d4) = (short)param_1;
  F_0042b630((int)this + 0x1d8);
  F_0042b630((int)this + 0x22c);
  F_0042b630((int)this + 0x280);
  *(undefined1 *)((int)this + 0x2d4) = 0;
  *(undefined1 *)((int)this + 0x2dc) = 0;
  *(undefined4 *)((int)this + 0x2e4) = 0;
  *(undefined2 *)((int)this + 0x2e8) = 0;
  *(undefined4 *)((int)this + 0x2ec) = 0;
  *(byte *)((int)this + 800) = *(byte *)((int)this + 800) & 0xc0;
  *(undefined2 *)((int)this + 0x2f0) = 0;
  *(undefined1 *)((int)this + 0x2f2) = 0;
  *(undefined4 *)((int)this + 0x2f4) = 0;
  *(undefined2 *)((int)this + 0x2f8) = 0xff00;
  *(undefined1 *)((int)this + 0x2fa) = 0;
  *(undefined4 *)((int)this + 0x2fc) = 0;
  *(undefined1 *)((int)this + 0x300) = 0;
  *(undefined4 *)((int)this + 0x310) = 0;
  *(undefined2 *)((int)this + 0x314) = 0;
  *(undefined4 *)((int)this + 0x318) = 0;
  *(undefined4 *)((int)this + 0x31c) = 0;
  *(undefined4 *)((int)this + 0x324) = 0;
  *(undefined4 *)((int)this + 0x330) = 0;
  uVar1 = F_004296a0(0x24,0,800);
  *(uint *)((int)this + 0x32c) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x32c) + 4))) = *(int *)((int)this + 0x32c);
  *((int *)GEN_TOP((*(int *)((int)this + 0x32c) + 8))) = *(int *)((int)this + 0x32c);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x32c) + 0x20))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x32c) + 0x21))) = 1;
  *(undefined4 *)((int)this + 0x340) = 0;
  uVar1 = F_004296a0(0x68,0,800);
  *(uint *)((int)this + 0x33c) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x33c) + 4))) = *(int *)((int)this + 0x33c);
  *((int *)GEN_TOP((*(int *)((int)this + 0x33c) + 8))) = *(int *)((int)this + 0x33c);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x33c) + 100))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x33c) + 0x65))) = 1;
  *(undefined4 *)((int)this + 0x348) = 0;
  *(undefined4 *)((int)this + 0x34c) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x350) = (*(undefined * PTR32 (*)[2])REFP(0x10b92fc));
  *(undefined * PTR32 *)((int)this + 0x354) = this;
  *(undefined4 *)((int)this + 0x358) = 0;
  *(undefined4 *)((int)this + 0x35c) = 0;
  *(undefined4 *)((int)this + 0x360) = 0;
  *(byte *)((int)this + 0x36e) = *(byte *)((int)this + 0x36e) & 0xf8;
  *(undefined2 *)((int)this + 0x36c) = 0xffff;
  *(undefined4 *)((int)this + 0x368) = 0;
  *(undefined4 *)((int)this + 0x2d6) = 0;
  *(undefined2 *)((int)this + 0x2da) = 0;
  *(undefined4 *)((int)this + 0x2de) = 0;
  *(undefined4 *)((int)this + 0x304) = 0;
  *(undefined4 *)((int)this + 0x308) = 0;
  *(undefined4 *)((int)this + 0x30c) = 0;
  return (uint)this;
}

/* ref: FUN_007029e0 */
uint F_007029e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7029e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x100];
  uint * puVar1;
  char cVar2;
  short sVar3;
  int * piVar4;
  int * piVar5;
  byte bVar6;
  uint uVar7;
  uint * puVar8;
  int iVar9;
  int * piVar10;
  undefined4 * puVar11;
  uint * puVar12;
  int iVar13;
  char * pcVar14;
  uint uVar15;
  int * piVar16;
  ulonglong uVar17;
  
  (*(uint *)(gen_frame + 0xf8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xfc);
  (*(char * PTR32 *)(gen_frame + 0x14)) = REFG(undefined4, 0x1379694);
  piVar10 = param_1;
  if (REFG(undefined4, 0x1379694) != (char *)0x0) {
    puVar12 = *(uint * PTR32 *)(*param_1 + 4);
    *(byte *)((int)this + 0x36e) = *(byte *)((int)this + 0x36e) | 2;
    (*(uint * PTR32 *)(gen_frame + 0x18)) = puVar12;
    F_0042e430((undefined *)((int)this + 0x22c),(int)puVar12 + (puVar12[0x2d5] & 0xffffff) + 0xb54);
    F_006ea2d0((undefined *)((int)this + 0x22c),(int)this + 0x280,(int)this + 0x118);
    F_0042e430((undefined *)((int)this + 0x1d8),(*puVar12 & 0xffffff) + (int)puVar12);
    *(undefined1 *)((int)this + 0x2d4) = *(undefined1 *)((int)puVar12 + 0xb93);
    *(short *)((int)this + 0x2d6) = (short)puVar12[0x2d6];
    *(short *)((int)this + 0x2d8) = (short)puVar12[0x2d7];
    *(short *)((int)this + 0x2da) = (short)puVar12[0x2d8];
    *(char *)((int)this + 0x2dc) = (char)puVar12[0x2e5];
    *(short *)((int)this + 0x2de) = (short)puVar12[0x2d9];
    *(short *)((int)this + 0x2e0) = (short)puVar12[0x2da];
    *(undefined1 *)((int)this + 0x300) = *(undefined1 *)((int)puVar12 + 0xb9a);
    *(uint *)((int)this + 0x304) = puVar12[0x2db];
    *(uint *)((int)this + 0x308) = puVar12[0x2dc];
    *(uint *)((int)this + 0x30c) = puVar12[0x2dd];
    *(ushort *)((int)this + 0x310) = (ushort)*(byte *)((int)puVar12 + 0xb9b);
    *(ushort *)((int)this + 0x312) = (ushort)(byte)puVar12[0x2e7];
    *(ushort *)((int)this + 0x314) = (ushort)*(byte *)((int)puVar12 + 0xb9d);
    *(uint *)((int)this + 0x318) = puVar12[0x2de];
    *(uint *)((int)this + 0x31c) = puVar12[0x2df];
    *(byte *)((int)this + 800) =
         *(byte *)((int)this + 800) ^
         (*(byte *)((int)puVar12 + 0xba1) ^ *(byte *)((int)this + 800)) & 1;
    *(byte *)((int)this + 800) =
         (*(char *)((int)puVar12 + 0xba2) * '\x02' ^ *(byte *)((int)this + 800)) & 2 ^
         *(byte *)((int)this + 800);
    *(short *)((int)this + 0x2e8) = (short)puVar12[0x2e1];
    *(undefined2 *)((int)this + 0x2f0) = *(undefined2 *)((int)puVar12 + 0xb86);
    *(undefined1 *)((int)this + 0x2f2) = *(undefined1 *)((int)puVar12 + 0xb96);
    *(uint *)((int)this + 0x2f4) = (uint)*(byte *)((int)puVar12 + 0xb97);
    *(undefined1 *)((int)this + 0x2fa) = *(undefined1 *)((int)puVar12 + 0xb95);
    *(char *)((int)this + 0x2f8) = (char)puVar12[0x2e6];
    *(undefined1 *)((int)this + 0x2f9) = *(undefined1 *)((int)puVar12 + 0xb99);
    *(uint *)((int)this + 0x2fc) = (uint)(ushort)puVar12[0x2e2];
    *(byte *)((int)this + 800) =
         *(byte *)((int)this + 800) ^
         (*(char *)((int)puVar12 + 0xba3) * '\x04' ^ *(byte *)((int)this + 800)) & 4;
    *(byte *)((int)this + 800) =
         ((char)puVar12[0x2e9] * '\b' ^ *(byte *)((int)this + 800)) & 8 ^ *(byte *)((int)this + 800)
    ;
    uVar7 = F_00ab3110((uint)(byte)puVar12[0x2e8]);
    *(uint *)((int)this + 0x324) = uVar7;
    uVar7 = puVar12[0x2e4];
    *(undefined4 *)((int)this + 0x2e4) = 0;
    uVar7 = F_00ab21d0((uint)(byte)uVar7);
    if (uVar7 != 0) {
      uVar15 = 0;
      do {
        if (*(char *)(uVar7 + 4 + uVar15) != '\0') {
          if (0x1c < uVar15) goto LAB_00702eed;
          puVar8 = ((uint *)GEN_TOP(((int)this + (uVar15 >> 5) * 4 + 0x2e4)));
          (*(uint * PTR32 *)(gen_frame + 0x10)) = puVar8;
          *puVar8 = *puVar8 | 1 << ((byte)uVar15 & 0x1f);
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 < 0x1d);
    }
    bVar6 = *(byte *)((int)puVar12 + 0xb92);
    *(undefined4 *)((int)this + 0x2ec) = 0;
    puVar8 = (uint *)F_00ab21d0((uint)bVar6);
    (*(uint * PTR32 *)(gen_frame + 0x10)) = puVar8;
    if (puVar8 != (uint *)0x0) {
      uVar7 = 0;
      do {
        if (*(char *)(uVar7 + 4 + (int)puVar8) != '\0') {
          if (0x1c < uVar7) {
LAB_00702eed: ;
                    
            F_00c457e7("invalid bitset<N> position");
          }
          puVar1 = ((uint *)GEN_TOP(((int)this + (uVar7 >> 5) * 4 + 0x2ec)));
          *puVar1 = *puVar1 | 1 << ((byte)uVar7 & 0x1f);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < 0x1d);
    }
    F_007596f0((undefined *)((int)this + 0x328),*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x32c) + 4))));
    *((int *)GEN_TOP((*(int *)((int)this + 0x32c) + 4))) = *(int *)((int)this + 0x32c);
    *(undefined4 *)*(undefined4 *)((int)this + 0x32c) = *(undefined4 *)((int)this + 0x32c);
    *((int *)GEN_TOP((*(int *)((int)this + 0x32c) + 8))) = *(int *)((int)this + 0x32c);
    *(undefined4 *)((int)this + 0x330) = 0;
    puVar8 = *((uint * PTR32 *)GEN_TOP((*(int *)((int)this + 0x33c) + 4)));
    cVar2 = *(char *)((int)puVar8 + 0x65);
    (*(uint * PTR32 *)(gen_frame + 0x20)) = puVar8;
    while ((*(uint * PTR32 *)(gen_frame + 0x20)) = puVar8, cVar2 == '\0') {
      F_0074df70((undefined *)((int)this + 0x338),puVar8[2]);
      puVar8 = (uint *)*puVar8;
      F_0042c880((*(uint * PTR32 *)(gen_frame + 0x20)) + 3);
      F_00429760((*(uint * PTR32 *)(gen_frame + 0x20)),0x68,800);
      cVar2 = *(char *)((int)puVar8 + 0x65);
      (*(uint * PTR32 *)(gen_frame + 0x20)) = puVar8;
    }
    *((int *)GEN_TOP((*(int *)((int)this + 0x33c) + 4))) = *(int *)((int)this + 0x33c);
    *(undefined4 *)*(undefined4 *)((int)this + 0x33c) = *(undefined4 *)((int)this + 0x33c);
    *((int *)GEN_TOP((*(int *)((int)this + 0x33c) + 8))) = *(int *)((int)this + 0x33c);
    *(undefined4 *)((int)this + 0x340) = 0;
    puVar8 = *(uint * PTR32 *)((int)this + 0x358);
    if (puVar8 != *(uint * PTR32 *)((int)this + 0x35c)) {
      (*(uint * PTR32 *)(gen_frame + 0x20)) = puVar8;
      *(uint * PTR32 *)((int)this + 0x35c) = puVar8;
      puVar12 = (*(uint * PTR32 *)(gen_frame + 0x18));
    }
    F_0042aca0((int)this + 0x7c);
    F_0074d7c0((undefined *)((int)this + 0x1c0),*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1c4) + 4))));
    *((int *)GEN_TOP((*(int *)((int)this + 0x1c4) + 4))) = *(int *)((int)this + 0x1c4);
    *(undefined4 *)*(undefined4 *)((int)this + 0x1c4) = *(undefined4 *)((int)this + 0x1c4);
    *((int *)GEN_TOP((*(int *)((int)this + 0x1c4) + 8))) = *(int *)((int)this + 0x1c4);
    *(undefined4 *)((int)this + 0x1c8) = 0;
    sVar3 = *(short *)((int)this + 0x1d4);
    uVar7 = F_00a4ffd0();
    iVar13 = 0;
    iVar9 = uVar7 + 0x13b4;
    do {
      if (*(short *)(iVar9 + 4) == sVar3) {
        if (-1 < iVar13) {
          (*(char *)(gen_frame + 0x1f)) = *(char *)(iVar9 + 6);
          goto LAB_00702e5d;
        }
        break;
      }
      iVar13 = iVar13 + 1;
      iVar9 = iVar9 + 0x10;
    } while (iVar13 < 0x1e);
    (*(char *)(gen_frame + 0x1f)) = '\0';
LAB_00702e5d: ;
    F_00701e90(this,puVar12);
    if (((*(char *)(gen_frame + 0x1f)) == '\0') &&
       ((bVar6 = F_006dbfa0(this), bVar6 == 0 ||
        ((uVar7 = F_006d8b60(this,(*(char * PTR32 *)(gen_frame + 0x14))), uVar7 != 0 &&
         ((((*(byte *)((int)this + 800) & 2) == 0 || ((uVar7 & 0x500) != 0)) ||
          ((uVar7 & 0x70) != 0)))))))) {
      piVar10 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x32c)));
      if (piVar10 != *(int * PTR32 *)((int)this + 0x32c)) {
        do {
          if ((char)piVar10[3] == '\0') {
            if (*(char *)((int)piVar10 + 0x21) == '\0') {
              piVar16 = (int *)piVar10[2];
              if (*(char *)((int)piVar16 + 0x21) == '\0') {
                cVar2 = *(char *)(*piVar16 + 0x21);
                piVar10 = piVar16;
                piVar16 = (int *)*piVar16;
                while (cVar2 == '\0') {
                  cVar2 = *(char *)(*piVar16 + 0x21);
                  piVar10 = piVar16;
                  piVar16 = (int *)*piVar16;
                }
              }
              else {
                cVar2 = *(char *)(piVar10[1] + 0x21);
                piVar4 = (int *)piVar10[1];
                piVar16 = piVar10;
                while ((piVar10 = piVar4, cVar2 == '\0' && (piVar16 == (int *)piVar10[2]))) {
                  cVar2 = *(char *)(piVar10[1] + 0x21);
                  piVar4 = (int *)piVar10[1];
                  piVar16 = piVar10;
                }
              }
            }
          }
          else {
            piVar16 = piVar10;
            if (*(char *)((int)piVar10 + 0x21) == '\0') {
              piVar16 = (int *)piVar10[2];
              if (*(char *)((int)piVar16 + 0x21) == '\0') {
                cVar2 = *(char *)(*piVar16 + 0x21);
                piVar4 = (int *)*piVar16;
                while (cVar2 == '\0') {
                  cVar2 = *(char *)(*piVar4 + 0x21);
                  piVar16 = piVar4;
                  piVar4 = (int *)*piVar4;
                }
              }
              else {
                cVar2 = *(char *)(piVar10[1] + 0x21);
                piVar5 = (int *)piVar10[1];
                piVar4 = piVar10;
                while ((piVar16 = piVar5, cVar2 == '\0' && (piVar4 == (int *)piVar16[2]))) {
                  cVar2 = *(char *)(piVar16[1] + 0x21);
                  piVar5 = (int *)piVar16[1];
                  piVar4 = piVar16;
                }
              }
            }
            F_00759470((undefined *)((int)this + 0x328),&(*(char * PTR32 *)(gen_frame + 0x14)),piVar10);
            piVar10 = piVar16;
          }
        } while (piVar10 != *(int * PTR32 *)((int)this + 0x32c));
      }
      if (**(char * PTR32 *)((int)this + 0x16c) != '\0') {
        uVar7 = F_0042a990((int)this + 0x16c);
        uVar7 = F_00a023f0(*(undefined * PTR32 *)((int)this + 0xf8),uVar7);
        if ((int)uVar7 < 1) {
          uVar7 = F_0042a990((int)this + 0x118);
          F_00a01bf0(*(undefined * PTR32 *)((int)this + 0xf8),uVar7);
          F_0042aca0((int)this + 0x118);
        }
        F_0042aca0((int)this + 0x16c);
        if (**(char * PTR32 *)((int)this + 0x118) == '\0') {
          *(byte *)((int)this + 0x36e) = *(byte *)((int)this + 0x36e) & 0xfe;
        }
        ((code *)*(gen_code32 *)(*(int *)this + 0x1c8))(this);
        ((code *)*(gen_code32 *)(*(int *)this + 0x1f8))(this);
        ((code *)*(gen_code32 *)(*(int *)this + 0x1e0))(this);
        ((code *)*(gen_code32 *)(*(int *)this + 0x1e4))(this);
      }
      piVar10 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 8))(this)));
      if ((char)piVar10 == '\0') {
        *(byte *)((int)this + 0x1c) = *(byte *)((int)this + 0x1c) & 0xfd;
        bVar6 = *(byte *)((int)this + 0x1c);
        piVar10 = ((int *)GEN_TOP(CONCAT31((int3)((uint)((int)(uintptr_t)piVar10) >> 8),bVar6)));
        if ((bVar6 & 1) == 0) {
          *(byte *)((int)this + 0x1c) = bVar6 | 1;
          piVar10 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x23c))(this)));
        }
      }
      *(byte *)((int)this + 0x36e) = *(byte *)((int)this + 0x36e) & 0xfb;
    }
    else {
      (*(uint * PTR32 *)(gen_frame + 0x20)) = puVar12 + 1;
      (*(uint * PTR32 *)(gen_frame + 0x18)) = (uint *)0x32;
      do {
        pcVar14 = ((char *)GEN_TOP(((*(*(uint * PTR32 *)(gen_frame + 0x20)) & 0xffffff) + (int)(*(uint * PTR32 *)(gen_frame + 0x20)))));
        (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar14;
        if (*pcVar14 != '\0') {
          (*(uint * PTR32 *)(gen_frame + 0x10)) = (uint *)(*(uint * PTR32 *)(gen_frame + 0x20))[1];
          puVar11 = (undefined4 *)F_004296a0(0x68,0,800);
          *puVar11 = *(undefined4 *)((int)this + 0x33c);
          puVar11[1] = *(undefined4 *)((int)this + 0x33c);
          puVar11[2] = *(undefined4 *)((int)this + 0x33c);
          *(undefined2 *)(puVar11 + 0x19) = 0;
          F_0042cc20(((undefined1 *)(gen_frame + 0x78)),(*(char * PTR32 *)(gen_frame + 0x14)),0xffffffff);
          (*(uint *)(gen_frame + 0xcc)) = (uint)(*(uint * PTR32 *)(gen_frame + 0x10));
          if (puVar11 != (undefined4 *)0xfffffff4) {
            F_0042cbc0(puVar11 + 3,((undefined1 *)(gen_frame + 0x78)));
            puVar11[0x18] = (*(uint *)(gen_frame + 0xcc));
          }
          F_0042c880(((undefined1 *)(gen_frame + 0x78)));
          F_007502b0((undefined *)((int)this + 0x338),((undefined1 *)(gen_frame + 0x4)),puVar11,0);
        }
        (*(uint * PTR32 *)(gen_frame + 0x20)) = (*(uint * PTR32 *)(gen_frame + 0x20)) + 2;
        puVar8 = (uint *)((int)(*(uint * PTR32 *)(gen_frame + 0x18)) + -1);
        (*(uint * PTR32 *)(gen_frame + 0x18)) = puVar8;
      } while (puVar8 != (uint *)0x0);
      (*(uint * PTR32 *)(gen_frame + 0x10)) = (uint *)0x0;
      (*(uint * PTR32 *)(gen_frame + 0x20)) = puVar12 + 0x1ed;
      do {
        if ((char)*(*(uint * PTR32 *)(gen_frame + 0x20)) == '\0') break;
        puVar12 = ((uint *)(gen_frame + 0xd0));
        (*(undefined1 *)((char *)&((uint *)(gen_frame + 0xd0))[0] + 0)) = (char)*(*(uint * PTR32 *)(gen_frame + 0x20));
        (*(undefined1 *)(gen_frame + 0xf4)) = 0;
        puVar8 = (*(uint * PTR32 *)(gen_frame + 0x20)) + -8;
        for (iVar9 = 8; puVar12 = puVar12 + 1, iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar12 = *puVar8;
          puVar8 = puVar8 + 1;
        }
        uVar7 = 0;
        do {
          if (((uint *)(gen_frame + 0xd0))[(int)(uVar7 + 1)] == 0) break;
          uVar15 = F_00ab37e0(((uint *)(gen_frame + 0xd0))[(int)(uVar7 + 1)]);
          if ((uVar15 != 0) && (*(int *)(uVar15 + 0x24) == 0x33)) {
            (*(undefined1 *)(gen_frame + 0xf4)) = 1;
            break;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < 8);
        puVar12 = *(uint * PTR32 *)((int)this + 0x35c);
        if (((uint *)(gen_frame + 0xd0)) < puVar12) {
          puVar8 = *(uint * PTR32 *)((int)this + 0x358);
          (*(uint * PTR32 *)(gen_frame + 0x18)) = puVar8;
          if (((uint *)(gen_frame + 0xd0)) < puVar8) goto LAB_00703299;
          if (puVar12 == *(uint * PTR32 *)((int)this + 0x360)) {
            iVar9 = ((int)puVar12 - (int)puVar8) / 0x28;
            if (iVar9 == -1) goto LAB_0070338f;
            uVar7 = ((int)*(uint * PTR32 *)((int)this + 0x360) - (int)puVar8) / 0x28;
            uVar15 = iVar9 + 1;
            if (uVar7 < uVar15) {
              if (-(uVar7 >> 1) - 1 < uVar7) {
                uVar7 = 0;
              }
              else {
                uVar7 = uVar7 + (uVar7 >> 1);
              }
              if (uVar7 < uVar15) {
                uVar7 = uVar15;
              }
              F_0074e790((undefined *)((int)this + 0x358),uVar7);
            }
          }
          puVar12 = *(uint * PTR32 *)((int)this + 0x35c);
          puVar8 = ((uint *)GEN_TOP((*(int *)((int)this + 0x358) +
                           (((int)((uint *)(gen_frame + 0xd0)) - (int)puVar8) / 0x28) * 0x28)));
          if (puVar12 != (uint *)0x0) goto LAB_0070330e;
        }
        else {
LAB_00703299: ;
          if (puVar12 == *(uint * PTR32 *)((int)this + 0x360)) {
            iVar9 = ((int)puVar12 - *(int *)((int)this + 0x358)) / 0x28;
            if (iVar9 == -1) {
LAB_0070338f: ;
                    
              F_00c4579a("vector<T> too long");
            }
            uVar7 = ((int)*(uint * PTR32 *)((int)this + 0x360) - *(int *)((int)this + 0x358)) / 0x28;
            uVar15 = iVar9 + 1;
            if (uVar7 < uVar15) {
              if (-(uVar7 >> 1) - 1 < uVar7) {
                uVar7 = 0;
              }
              else {
                uVar7 = uVar7 + (uVar7 >> 1);
              }
              if (uVar7 < uVar15) {
                uVar7 = uVar15;
              }
              F_0074e790((undefined *)((int)this + 0x358),uVar7);
            }
          }
          puVar12 = *(uint * PTR32 *)((int)this + 0x35c);
          if (puVar12 != (uint *)0x0) {
            puVar8 = ((uint *)(gen_frame + 0xd0));
LAB_0070330e: ;
            for (iVar9 = 10; iVar9 != 0; iVar9 = iVar9 + -1) {
              *puVar12 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar12 = puVar12 + 1;
            }
          }
        }
        *(int *)((int)this + 0x35c) = *(int *)((int)this + 0x35c) + 0x28;
        (*(uint * PTR32 *)(gen_frame + 0x20)) = (*(uint * PTR32 *)(gen_frame + 0x20)) + 9;
        puVar12 = (uint *)((int)(*(uint * PTR32 *)(gen_frame + 0x10)) + 1);
        (*(uint * PTR32 *)(gen_frame + 0x10)) = puVar12;
      } while (puVar12 < (uint *)0x18);
      uVar7 = F_0042a990((int)this + 0x280);
      F_0042ce40(((undefined1 *)(gen_frame + 0x24)),"%s/%s",REFG(undefined * PTR32, 0x132372c),uVar7);
      uVar7 = F_0042a990(((undefined1 *)(gen_frame + 0x24)));
      F_0042e430((undefined *)((int)this + 0x7c),uVar7);
      F_006e8f60(this,0,0xffffffff);
      uVar17 = F_0042c880(((undefined1 *)(gen_frame + 0x24)));
      piVar10 = (int *)uVar17;
    }
    puVar11 = *(undefined4 * PTR32 *)((int)this + 0x34c);
    if (puVar11 != (undefined4 *)0x0) {
      piVar10 = ((int *)GEN_TOP(((code *)*(gen_code32 *)*puVar11)(puVar11,1)));
      *(undefined4 *)((int)this + 0x34c) = 0;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xf8)) ^ (uint)(uint)(gen_frame + 0xfc));
  return (uint)piVar10;
}

/* ref: Client::Game::Event::QuestEventHandler::vf144 */
unsigned int F_007033a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7033a0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  byte bVar1;
  uint uVar2;
  
  (*(undefined * PTR32 *)&gen_args[0])[0x36e] = (undefined1)((byte)(*(undefined * PTR32 *)&gen_args[0])[0x36e] & 0xfb);
  if ((char)(*(undefined4 *)&gen_args[1]) != '\0') {
    uVar2 = F_00735eb0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined * PTR32 *)&gen_args[0]));
    if ((char)uVar2 == '\0') {
      if (*((short *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x54))) != -1) {
        F_006e3100(REFG(undefined4, 0x1488344),0x34,1);
      }
    }
    else {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 8))))((*(undefined * PTR32 *)&gen_args[0]));
      if ((char)uVar2 != '\0') {
        ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c8))))((*(undefined * PTR32 *)&gen_args[0]));
        ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x1f8))))((*(undefined * PTR32 *)&gen_args[0]));
        ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x1f0))))((*(undefined * PTR32 *)&gen_args[0]));
        ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x1e0))))((*(undefined * PTR32 *)&gen_args[0]));
        ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x1e4))))((*(undefined * PTR32 *)&gen_args[0]));
        bVar1 = F_006bf6b0((uint)*((ushort *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1d4))));
        (*(undefined4 *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(undefined4 *)&gen_args[1]), 1, 3),bVar1);
        F_00701bb0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]));
        return 0;
      }
      (*(undefined * PTR32 *)&gen_args[0])[0x1c] = (undefined1)((byte)(*(undefined * PTR32 *)&gen_args[0])[0x1c] & 0xfd);
      if (((byte)(*(undefined * PTR32 *)&gen_args[0])[0x1c] & 1) == 0) {
        (*(undefined * PTR32 *)&gen_args[0])[0x1c] = (undefined1)((byte)(*(undefined * PTR32 *)&gen_args[0])[0x1c] | 1);
        ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x23c))))((*(undefined * PTR32 *)&gen_args[0]));
        return 0;
      }
    }
  }
  return 0;
}

/* ref: Client::Game::Event::QuestEventHandler::vf143 */
uint F_00703480(unsigned int gen_a0)
{
  GEN_ENTER(0x703480u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  short sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  ((code *)*(gen_code32 *)(*(int *)this + 0x1f0))();
  ((code *)*(gen_code32 *)(*(int *)this + 0x1f8))(this);
  if (**(char * PTR32 *)(this + 0x16c) != '\0') {
    uVar5 = 0;
    uVar2 = F_0042a990(this + 0x16c);
    F_00a024d0(*(undefined * PTR32 *)(this + 0xf8),"OnInitialize",uVar2,uVar5);
  }
  sVar1 = *(short *)(this + 0x1d4);
  uVar2 = F_00a4ffd0();
  iVar4 = 0;
  iVar3 = uVar2 + 0x13b4;
  do {
    gen_piece_set(&(*(int *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((uint3)((uint)((int)(uintptr_t)this) >> 8)));
    if (*(short *)(iVar3 + 4) == sVar1) {
      if (-1 < iVar4) {
        (*(int *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x8)), 1, 3),*(undefined1 *)(iVar3 + 6));
        goto LAB_007034f3;
      }
      break;
    }
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 0x10;
  } while (iVar4 < 0x1e);
  (*(int *)(gen_frame + 0x8)) = (uint)GEN_PIECE(&(*(int *)(gen_frame + 0x8)), 1, 3) << 8;
LAB_007034f3: ;
  F_006dbea0(this,(*(int *)(gen_frame + 0x8)));
  uVar2 = F_00701bb0(this,(*(int *)(gen_frame + 0x8)));
  return uVar2;
}

/* ref: FUN_00703520 */
uint F_00703520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x703520u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  if ((char)uVar1 != '\0') {
    F_006dbea0(this,param_2);
    uVar1 = F_00701bb0(this,param_2);
  }
  return uVar1;
}

/* ref: FUN_00703550 */
uint F_00703550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x703550u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  undefined4 * this_00;
  int * piVar2;
  
  if (*(int *)((int)this + 0x354) == 0) {
    uVar1 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8));
    *(uint *)((int)this + 0x354) = uVar1;
  }
  uVar1 = 0;
  piVar2 = (int *)((int)this + 0x358);
  do {
    if (*piVar2 == 0) {
      if (-1 < (int)uVar1) {
        this_00 = (undefined4 *)F_00406b90(0x20,0,0);
        if (this_00 == (undefined4 *)0x0) {
          this_00 = (undefined4 *)0x0;
        }
        else {
          F_00cb4700(this_00,1,param_2 << 0x10 | uVar1 & 0xffff);
          this_00[5] = 1;
          *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10b923c));
          this_00[6] = this;
          this_00[7] = ((code *)REFP(0x702050));
        }
        *(undefined4 * PTR32 *)((int)this + uVar1 * 4 + 0x358) = this_00;
        F_00cb4540(this_00,0,param_1);
        piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x354) + 0x48))))
                                  (*(int * PTR32 *)((int)this + 0x354),
                                   *(undefined4 *)((int)this + uVar1 * 4 + 0x358))));
      }
      return (uint)piVar2;
    }
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 1;
  } while ((int)uVar1 < 0x10);
  return (uint)piVar2;
}

/* ref: FUN_00703620 */
uint F_00703620(unsigned int gen_a0)
{
  GEN_ENTER(0x703620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[144])REFP(0x10bd494));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xf8) = (*(undefined * PTR32 (*)[2])REFP(0x10bd484));
  if (REFG(undefined4, 0x1488768) == this) {
    REFG(undefined4, 0x1488768) = (undefined *)0x0;
  }
  if (*(int *)((int)this + 0x118) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x11c);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,*(int *)((int)this + 0x118));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x118);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x118) = 0;
    }
  }
  F_0075b0d0((undefined *)((int)this + 0xfc),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x100),
               *(undefined4 * PTR32 *)((int)this + 0x100));
  F_00429760(*(undefined4 *)((int)this + 0x100),0x24,800);
  *(undefined * PTR32 * PTR32 *)((int)this + 0xf8) =
       (*(undefined * PTR32 (*)[2])REFP(0x10b815c));
  uVar3 = F_006df660(this);
  return uVar3;
}

/* ref: Client::Game::Event::QuestBattleDirector::vf1 */
uint F_007036d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7036d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00ab1c90(*(undefined4 *)&REFG(undefined2, 0x1379c78));
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = F_00702780(this,(uint)*(ushort *)(uVar1 + 0x26));
  }
  this[0x1c] = (undefined1)((byte)this[0x1c] | 2);
  return uVar2;
}

/* ref: FUN_00703700 */
uint F_00703700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x703700u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  uint param_4 = (uint)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  undefined * pvVar6;
  undefined4 * puVar7;
  ulonglong uVar8;
  int iVar9;
  undefined4 uVar10;
  int * PTR32 * ppiVar11;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  if (param_1 != 0) {
    if ((param_1 & 0x80000000) == 0x80000000) {
      piVar2 = (int *)F_00748af0((undefined *)((int)this + 0x5c),param_1);
    }
    else {
      piVar2 = (int *)F_006dda70(this,param_1);
    }
    if (piVar2 != (int *)0x0) {
      uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x7c))(piVar2,param_2,param_3,param_4);
      F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
      return uVar3;
    }
  }
  (*(int *)(gen_frame + 0xc)) = REFG(int, 0x1379694);
  uVar3 = 0;
  if (REFG(int, 0x1379694) != 0) {
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    (*(int * PTR32 *)(gen_frame + 0x8)) = piVar2;
    (*(int * PTR32 *)(gen_frame + 0x14)) = (int *)0x0;
    piVar4 = (int *)F_004296a0(8,0,0x2c4);
    (*(int * PTR32 *)(gen_frame + 0x14)) = piVar4;
    if (piVar4 != (int *)0x0) {
      *piVar4 = 0;
      piVar4[1] = 0;
    }
    *piVar4 = (int)&(*(int * PTR32 *)(gen_frame + 0x14));
    (*(int *)(gen_frame + 0x18)) = 0;
    (*(uint *)(gen_frame + 0x1c)) = 0;
    (*(int *)(gen_frame + 0x20)) = 0;
    (*(int *)(gen_frame + 0x24)) = 0;
    if ((char)param_4 != '\0') {
      (*(uint *)(gen_frame + 0x10)) = param_4 & 0xff;
      puVar7 = param_3;
      do {
        (*(undefined4 *)(gen_frame + 0x2c)) = 0;
        (*(undefined4 *)(gen_frame + 0x2c)) = *puVar7;
        (*(undefined4 * PTR32 *)(gen_frame + 0x30)) = &(*(undefined4 *)(gen_frame + 0x2c));
        (*(char *)(gen_frame + 0x34)) = '\0';
        if ((*(uint *)(gen_frame + 0x1c)) <= (*(int *)(gen_frame + 0x24)) + 1U) {
          F_00486f80(&(*(int * PTR32 *)(gen_frame + 0x14)),1);
        }
        uVar3 = (*(int *)(gen_frame + 0x20)) + (*(int *)(gen_frame + 0x24));
        if ((*(uint *)(gen_frame + 0x1c)) <= uVar3) {
          uVar3 = uVar3 - (*(uint *)(gen_frame + 0x1c));
        }
        if (*(int *)((*(int *)(gen_frame + 0x18)) + uVar3 * 4) == 0) {
          uVar5 = F_004296a0(0xc,0,0x2c4);
          *(uint *)((*(int *)(gen_frame + 0x18)) + uVar3 * 4) = uVar5;
        }
        puVar1 = *(undefined4 * PTR32 *)((*(int *)(gen_frame + 0x18)) + uVar3 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined1 *)(puVar1 + 2) = 0xff;
          if (((*(char *)(gen_frame + 0x34)) != -1) && (puVar1 != &(*(undefined4 *)(gen_frame + 0x2c)))) {
            (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = puVar1;
            (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (*(undefined4 * PTR32 *)(gen_frame + 0x30));
            if ((*(char *)(gen_frame + 0x34)) == '\0') {
              F_004919b0(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)));
            }
            else if ((*(char *)(gen_frame + 0x34)) == '\x01') {
              F_00491a60(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)));
            }
          }
        }
        (*(int *)(gen_frame + 0x24)) = (*(int *)(gen_frame + 0x24)) + 1;
        if ((*(undefined4 * PTR32 *)(gen_frame + 0x30)) != (undefined4 *)0x0) {
          if (((*(char *)(gen_frame + 0x34)) != '\0') && ((*(char *)(gen_frame + 0x34)) == '\x01')) {
            pvVar6 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x30));
            *(int *)((int)pvVar6 + 0x54) = *(int *)((int)pvVar6 + 0x54) + -1;
            if (*(int *)((int)pvVar6 + 0x54) < 1) {
              F_0042c880(pvVar6);
              F_00406ad0(pvVar6);
            }
          }
          (*(undefined4 * PTR32 *)(gen_frame + 0x30)) = (undefined4 *)0x0;
          (*(char *)(gen_frame + 0x34)) = -1;
        }
        puVar7 = puVar7 + 1;
        uVar3 = (*(uint *)(gen_frame + 0x10)) - 1;
        (*(uint *)(gen_frame + 0x10)) = uVar3;
        piVar2 = (*(int * PTR32 *)(gen_frame + 0x8));
      } while (uVar3 != 0);
    }
    ppiVar11 = &(*(int * PTR32 *)(gen_frame + 0x14));
    uVar10 = 0;
    iVar9 = (*(int *)(gen_frame + 0xc));
    pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2)));
    F_0046abb0(pvVar6,param_2,iVar9,uVar10,ppiVar11);
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x14)));
    uVar8 = F_00429760((*(int * PTR32 *)(gen_frame + 0x14)),8,0x2c4);
    uVar3 = (uint)uVar8;
  }
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar3;
}

/* ref: FUN_00703900 */
uint F_00703900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x703900u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  undefined1 uVar4;
  int * piVar5;
  undefined * this_00;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  undefined4 uVar9;
  
  iVar3 = (*(int *)&gen_args[2]);
  uVar1 = *(ushort *)((*(int *)&gen_args[1]) + 4);
  uVar7 = (uint)uVar1;
  uVar2 = *(ushort *)((*(int *)&gen_args[2]) + 4);
  (*(uint *)(gen_frame + 0x8)) = (uint)uVar2;
  if (uVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined1 *)((*(int *)&gen_args[1]) + 6);
  }
  (*(int *)&gen_args[2]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[2]), 1, 3),uVar4);
  if (uVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined1 *)(iVar3 + 6);
  }
  (*(int *)&gen_args[1]) = CONCAT13(uVar4,(undefined3)(*(int *)&gen_args[1]));
  if (uVar1 == 0) {
    if (uVar2 == 0) {
      return 0;
    }
    F_006de0e0((*(undefined * PTR32 *)&gen_args[0]),0x3b);
    (*(uint *)(gen_frame + 0x4)) = uVar2 | 0x10000;
    F_00748ea0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))),&(*(int *)&gen_args[1]),&(*(uint *)(gen_frame + 0x4)));
    if ((*(int *)&gen_args[1]) != *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30)))) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)&gen_args[1]) + 0x10) + 0x22c))))(*(int * PTR32 *)((*(int *)&gen_args[1]) + 0x10));
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)&gen_args[1]) + 0x10) + 0x1f0))))(*(int * PTR32 *)((*(int *)&gen_args[1]) + 0x10));
    }
    if ((ushort)(*(uint *)&gen_args[3]) < 0x1e) {
      F_00a83f80(&REFG(undefined, 0x14b1258),(*(uint *)&gen_args[3]) & 0xffff);
    }
    piVar5 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar9 = 1;
    uVar6 = (*(uint *)(gen_frame + 0x8));
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar5 + 0x1c))(piVar5)));
    F_008229a0(this_00,uVar6,uVar9);
    piVar5 = (int *)F_006dda70((*(undefined * PTR32 *)&gen_args[0]),uVar2 | 0x10000);
    bVar8 = piVar5 == (int *)0x0;
  }
  else {
    F_006e2e40((*(undefined * PTR32 *)&gen_args[0]),0,uVar7,(*(uint *)&gen_args[3]));
    piVar5 = (int *)F_006dda70((*(undefined * PTR32 *)&gen_args[0]),uVar7 | 0x10000);
    if (piVar5 == (int *)0x0) goto LAB_00703a2f;
    bVar8 = (*(undefined1 *)((char *)&(*(int *)&gen_args[1]) + 3)) == (char)(*(int *)&gen_args[2]);
  }
  if ((!bVar8) && (uVar6 = ((code *)*(gen_code32 *)(*piVar5 + 8))(piVar5), (char)uVar6 != '\0')) {
    F_006dbea0(piVar5,(*(int *)&gen_args[2]));
    F_00701bb0(piVar5,(*(int *)&gen_args[2]));
  }
LAB_00703a2f: ;
  uVar6 = (*(uint *)(gen_frame + 0x8));
  if ((short)(*(uint *)(gen_frame + 0x8)) == 0) {
    if (uVar1 != 0) {
      uVar7 = F_006eb2d0((*(undefined * PTR32 *)&gen_args[0]),uVar7 | 0x10000,0);
      return uVar7;
    }
  }
  else if (uVar1 == 0) {
    uVar6 = F_006e5450((*(undefined * PTR32 *)&gen_args[0]),(*(uint *)(gen_frame + 0x8)) & 0xffff | 0x10000,0);
  }
  return uVar6;
}

/* ref: FUN_00703a80 */
uint F_00703a80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x703a80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint * puVar1;
  undefined * pvVar2;
  undefined4 * puVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = param_1;
  (*(int *)(gen_frame + 0x14)) = param_2;
  iVar7 = param_2;
  while ((*(int *)(gen_frame + 0x14)) = iVar7, iVar7 <= param_3) {
    bVar4 = F_00a01f40((*(undefined * PTR32 *)(gen_frame + 0x18)),iVar7);
    if (bVar4 == 0) {
      bVar4 = F_00a01f60((*(undefined * PTR32 *)(gen_frame + 0x18)),iVar7);
      if (bVar4 != 0) {
        uVar5 = F_00a01e40((*(undefined * PTR32 *)(gen_frame + 0x18)),iVar7);
        uVar5 = F_0042cc20(((undefined1 *)(gen_frame + 0x1c)),uVar5,REFG(undefined4, 0x108cc50));
        (*(undefined4 *)(gen_frame + 0x70)) = 0;
        (*(undefined4 * PTR32 *)(gen_frame + 0x74)) = (undefined4 *)0x0;
        (*(char *)(gen_frame + 0x78)) = -1;
        F_00490f90(&(*(undefined4 *)(gen_frame + 0x70)),uVar5);
        if (*(uint *)((int)param_4 + 8) <= *(int *)((int)param_4 + 0x10) + 1U) {
          F_00486f80(param_4,1);
        }
        uVar5 = *(int *)((int)param_4 + 0xc) + *(int *)((int)param_4 + 0x10);
        if (*(uint *)((int)param_4 + 8) <= uVar5) {
          uVar5 = uVar5 - *(uint *)((int)param_4 + 8);
        }
        if (*((int *)GEN_TOP((*(int *)((int)param_4 + 4) + uVar5 * 4))) == 0) {
          uVar6 = F_004296a0(0xc,0,0x2c4);
          *((uint *)GEN_TOP((*(int *)((int)param_4 + 4) + uVar5 * 4))) = uVar6;
        }
        puVar3 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)param_4 + 4) + uVar5 * 4)));
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = 0;
          puVar3[1] = 0;
          *(undefined1 *)(puVar3 + 2) = 0xff;
          if (((*(char *)(gen_frame + 0x78)) != -1) && (puVar3 != &(*(undefined4 *)(gen_frame + 0x70)))) {
            (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = puVar3;
            (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (*(undefined4 * PTR32 *)(gen_frame + 0x74));
            if ((*(char *)(gen_frame + 0x78)) == '\0') {
              F_004919b0(&(*(undefined4 * PTR32 *)(gen_frame + 0xc)));
            }
            else if ((*(char *)(gen_frame + 0x78)) == '\x01') {
              F_00491a60(&(*(undefined4 * PTR32 *)(gen_frame + 0xc)));
            }
          }
        }
        *(int *)((int)param_4 + 0x10) = *(int *)((int)param_4 + 0x10) + 1;
        if ((*(undefined4 * PTR32 *)(gen_frame + 0x74)) != (undefined4 *)0x0) {
          if (((*(char *)(gen_frame + 0x78)) != '\0') && ((*(char *)(gen_frame + 0x78)) == '\x01')) {
            pvVar2 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x74));
            *(int *)((int)pvVar2 + 0x54) = *(int *)((int)pvVar2 + 0x54) + -1;
            if (*(int *)((int)pvVar2 + 0x54) < 1) {
              F_0042c880(pvVar2);
              F_00406ad0(pvVar2);
            }
          }
          (*(undefined4 * PTR32 *)(gen_frame + 0x74)) = (undefined4 *)0x0;
          (*(char *)(gen_frame + 0x78)) = -1;
        }
        F_0042c880(((undefined1 *)(gen_frame + 0x1c)));
        iVar7 = (*(int *)(gen_frame + 0x14));
      }
    }
    else {
      uVar5 = F_00b9c9b0(*(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 8),iVar7);
      (*(uint *)(gen_frame + 0x7c)) = 0;
      (*(uint *)(gen_frame + 0x7c)) = uVar5;
      (*(uint * PTR32 *)(gen_frame + 0x80)) = &(*(uint *)(gen_frame + 0x7c));
      (*(char *)(gen_frame + 0x84)) = '\0';
      if (*(uint *)((int)param_4 + 8) <= *(int *)((int)param_4 + 0x10) + 1U) {
        F_00486f80(param_4,1);
      }
      uVar5 = *(int *)((int)param_4 + 0xc) + *(int *)((int)param_4 + 0x10);
      if (*(uint *)((int)param_4 + 8) <= uVar5) {
        uVar5 = uVar5 - *(uint *)((int)param_4 + 8);
      }
      if (*((int *)GEN_TOP((*(int *)((int)param_4 + 4) + uVar5 * 4))) == 0) {
        uVar6 = F_004296a0(0xc,0,0x2c4);
        *((uint *)GEN_TOP((*(int *)((int)param_4 + 4) + uVar5 * 4))) = uVar6;
      }
      puVar1 = *((uint * PTR32 *)GEN_TOP((*(int *)((int)param_4 + 4) + uVar5 * 4)));
      if (puVar1 != (uint *)0x0) {
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined1 *)(puVar1 + 2) = 0xff;
        if (((*(char *)(gen_frame + 0x84)) != -1) && (puVar1 != &(*(uint *)(gen_frame + 0x7c)))) {
          (*(uint * PTR32 *)(gen_frame + 0x4)) = puVar1;
          (*(uint * PTR32 *)(gen_frame + 0x8)) = (*(uint * PTR32 *)(gen_frame + 0x80));
          if ((*(char *)(gen_frame + 0x84)) == '\0') {
            F_004919b0(&(*(uint * PTR32 *)(gen_frame + 0x4)));
          }
          else if ((*(char *)(gen_frame + 0x84)) == '\x01') {
            F_00491a60(&(*(uint * PTR32 *)(gen_frame + 0x4)));
          }
        }
      }
      *(int *)((int)param_4 + 0x10) = *(int *)((int)param_4 + 0x10) + 1;
      iVar7 = (*(int *)(gen_frame + 0x14));
      if ((*(uint * PTR32 *)(gen_frame + 0x80)) != (uint *)0x0) {
        if (((*(char *)(gen_frame + 0x84)) != '\0') && ((*(char *)(gen_frame + 0x84)) == '\x01')) {
          pvVar2 = (undefined *)*(*(uint * PTR32 *)(gen_frame + 0x80));
          *(int *)((int)pvVar2 + 0x54) = *(int *)((int)pvVar2 + 0x54) + -1;
          if (*(int *)((int)pvVar2 + 0x54) < 1) {
            F_0042c880(pvVar2);
            F_00406ad0(pvVar2);
          }
        }
        (*(uint * PTR32 *)(gen_frame + 0x80)) = (uint *)0x0;
        (*(char *)(gen_frame + 0x84)) = -1;
        iVar7 = (*(int *)(gen_frame + 0x14));
      }
    }
    iVar7 = iVar7 + 1;
    (*(int *)(gen_frame + 0x14)) = iVar7;
  }
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf47 */
uint F_00703ce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x703ce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  uint * puVar1;
  undefined4 * puVar2;
  byte bVar3;
  uint uVar4;
  int * piVar5;
  uint uVar6;
  undefined * pvVar7;
  int iVar8;
  int * PTR32 * ppiVar9;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  F_00a01860(((byte *)(gen_frame + 0x0)),param_1);
  uVar4 = F_00a01d20(((byte *)(gen_frame + 0x0)),1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),1,uVar4);
  uVar4 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),2);
  (*(uint *)(gen_frame + 0x20)) = uVar4;
  (*(int * PTR32 *)(gen_frame + 0x34)) = (int *)0x0;
  piVar5 = (int *)F_004296a0(8,0,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0x34)) = piVar5;
  if (piVar5 != (int *)0x0) {
    *piVar5 = 0;
    piVar5[1] = 0;
  }
  *piVar5 = (int)&(*(int * PTR32 *)(gen_frame + 0x34));
  (*(int *)(gen_frame + 0x38)) = 0;
  (*(uint *)(gen_frame + 0x3c)) = 0;
  (*(int *)(gen_frame + 0x40)) = 0;
  (*(int *)(gen_frame + 0x44)) = 0;
  iVar8 = 3;
  uVar6 = F_00a019d0(((byte *)(gen_frame + 0x0)));
  if (2 < (int)uVar6) {
    do {
      bVar3 = F_00a01f40(((byte *)(gen_frame + 0x0)),iVar8);
      if (bVar3 == 0) {
        bVar3 = F_00a01f60(((byte *)(gen_frame + 0x0)),iVar8);
        if (bVar3 != 0) {
          uVar4 = F_00a01e40(((byte *)(gen_frame + 0x0)),iVar8);
          uVar4 = F_0042cc20(((undefined1 *)(gen_frame + 0x4c)),uVar4,REFG(undefined4, 0x108cc50));
          (*(undefined4 *)(gen_frame + 0xa0)) = 0;
          (*(undefined4 * PTR32 *)(gen_frame + 0xa4)) = (undefined4 *)0x0;
          (*(char *)(gen_frame + 0xa8)) = -1;
          F_00490f90(&(*(undefined4 *)(gen_frame + 0xa0)),uVar4);
          if ((*(uint *)(gen_frame + 0x3c)) <= (*(int *)(gen_frame + 0x44)) + 1U) {
            F_00486f80(&(*(int * PTR32 *)(gen_frame + 0x34)),1);
          }
          uVar4 = (*(int *)(gen_frame + 0x40)) + (*(int *)(gen_frame + 0x44));
          if ((*(uint *)(gen_frame + 0x3c)) <= uVar4) {
            uVar4 = uVar4 - (*(uint *)(gen_frame + 0x3c));
          }
          if (*(int *)((*(int *)(gen_frame + 0x38)) + uVar4 * 4) == 0) {
            uVar6 = F_004296a0(0xc,0,0x2c4);
            *(uint *)((*(int *)(gen_frame + 0x38)) + uVar4 * 4) = uVar6;
          }
          puVar2 = *(undefined4 * PTR32 *)((*(int *)(gen_frame + 0x38)) + uVar4 * 4);
          if (puVar2 != (undefined4 *)0x0) {
            *puVar2 = 0;
            puVar2[1] = 0;
            *(undefined1 *)(puVar2 + 2) = 0xff;
            if (((*(char *)(gen_frame + 0xa8)) != -1) && (puVar2 != &(*(undefined4 *)(gen_frame + 0xa0)))) {
              (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = puVar2;
              (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = (*(undefined4 * PTR32 *)(gen_frame + 0xa4));
              if ((*(char *)(gen_frame + 0xa8)) == '\0') {
                F_004919b0(&(*(undefined4 * PTR32 *)(gen_frame + 0x24)));
              }
              else if ((*(char *)(gen_frame + 0xa8)) == '\x01') {
                F_00491a60(&(*(undefined4 * PTR32 *)(gen_frame + 0x24)));
              }
            }
          }
          (*(int *)(gen_frame + 0x44)) = (*(int *)(gen_frame + 0x44)) + 1;
          if ((*(undefined4 * PTR32 *)(gen_frame + 0xa4)) != (undefined4 *)0x0) {
            if (((*(char *)(gen_frame + 0xa8)) != '\0') && ((*(char *)(gen_frame + 0xa8)) == '\x01')) {
              pvVar7 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0xa4));
              *(int *)((int)pvVar7 + 0x54) = *(int *)((int)pvVar7 + 0x54) + -1;
              if (*(int *)((int)pvVar7 + 0x54) < 1) {
                F_0042c880(pvVar7);
                F_00406ad0(pvVar7);
              }
            }
            (*(undefined4 * PTR32 *)(gen_frame + 0xa4)) = (undefined4 *)0x0;
            (*(char *)(gen_frame + 0xa8)) = -1;
          }
          F_0042c880(((undefined1 *)(gen_frame + 0x4c)));
        }
      }
      else {
        uVar4 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),iVar8);
        (*(uint *)(gen_frame + 0xac)) = 0;
        (*(uint *)(gen_frame + 0xac)) = uVar4;
        (*(uint * PTR32 *)(gen_frame + 0xb0)) = &(*(uint *)(gen_frame + 0xac));
        (*(char *)(gen_frame + 0xb4)) = '\0';
        if ((*(uint *)(gen_frame + 0x3c)) <= (*(int *)(gen_frame + 0x44)) + 1U) {
          F_00486f80(&(*(int * PTR32 *)(gen_frame + 0x34)),1);
        }
        uVar4 = (*(int *)(gen_frame + 0x40)) + (*(int *)(gen_frame + 0x44));
        if ((*(uint *)(gen_frame + 0x3c)) <= uVar4) {
          uVar4 = uVar4 - (*(uint *)(gen_frame + 0x3c));
        }
        if (*(int *)((*(int *)(gen_frame + 0x38)) + uVar4 * 4) == 0) {
          uVar6 = F_004296a0(0xc,0,0x2c4);
          *(uint *)((*(int *)(gen_frame + 0x38)) + uVar4 * 4) = uVar6;
        }
        puVar1 = *(uint * PTR32 *)((*(int *)(gen_frame + 0x38)) + uVar4 * 4);
        if (puVar1 != (uint *)0x0) {
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined1 *)(puVar1 + 2) = 0xff;
          if (((*(char *)(gen_frame + 0xb4)) != -1) && (puVar1 != &(*(uint *)(gen_frame + 0xac)))) {
            (*(uint * PTR32 *)(gen_frame + 0x2c)) = puVar1;
            (*(uint * PTR32 *)(gen_frame + 0x30)) = (*(uint * PTR32 *)(gen_frame + 0xb0));
            if ((*(char *)(gen_frame + 0xb4)) == '\0') {
              F_004919b0(&(*(uint * PTR32 *)(gen_frame + 0x2c)));
            }
            else if ((*(char *)(gen_frame + 0xb4)) == '\x01') {
              F_00491a60(&(*(uint * PTR32 *)(gen_frame + 0x2c)));
            }
          }
        }
        (*(int *)(gen_frame + 0x44)) = (*(int *)(gen_frame + 0x44)) + 1;
        if ((*(uint * PTR32 *)(gen_frame + 0xb0)) != (uint *)0x0) {
          if (((*(char *)(gen_frame + 0xb4)) != '\0') && ((*(char *)(gen_frame + 0xb4)) == '\x01')) {
            pvVar7 = (undefined *)*(*(uint * PTR32 *)(gen_frame + 0xb0));
            *(int *)((int)pvVar7 + 0x54) = *(int *)((int)pvVar7 + 0x54) + -1;
            if (*(int *)((int)pvVar7 + 0x54) < 1) {
              F_0042c880(pvVar7);
              F_00406ad0(pvVar7);
            }
          }
          (*(uint * PTR32 *)(gen_frame + 0xb0)) = (uint *)0x0;
          (*(char *)(gen_frame + 0xb4)) = -1;
        }
      }
      iVar8 = iVar8 + 1;
      uVar6 = F_00a019d0(((byte *)(gen_frame + 0x0)));
      uVar4 = (*(uint *)(gen_frame + 0x20));
    } while (iVar8 <= (int)uVar6);
  }
  if (uVar4 != 0) {
    piVar5 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    ppiVar9 = &(*(int * PTR32 *)(gen_frame + 0x34));
    pvVar7 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar5 + 0x28))(piVar5)));
    F_0046aa70(pvVar7,uVar4,ppiVar9);
  }
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x34)));
  F_00429760((*(int * PTR32 *)(gen_frame + 0x34)),8,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0x34)) = (int *)0x0;
  F_00a01890(((byte *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf31 */
uint F_00704070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x704070u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined4 * puVar1;
  uint uVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  undefined * pvVar6;
  undefined4 * puVar7;
  ulonglong uVar8;
  int iVar9;
  int * PTR32 * ppiVar10;
  
  iVar9 = REFG(int, 0x1379694);
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(uint *)(gen_frame + 0x38)) = uVar2;
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = this;
  if (REFG(int, 0x1379694) != 0) {
    piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    (*(int * PTR32 *)(gen_frame + 0x8)) = piVar3;
    (*(int * PTR32 *)(gen_frame + 0x14)) = (int *)0x0;
    piVar4 = (int *)F_004296a0(8,0,0x2c4);
    (*(int * PTR32 *)(gen_frame + 0x14)) = piVar4;
    if (piVar4 != (int *)0x0) {
      *piVar4 = 0;
      piVar4[1] = 0;
    }
    *piVar4 = (int)&(*(int * PTR32 *)(gen_frame + 0x14));
    (*(int *)(gen_frame + 0x18)) = 0;
    (*(uint *)(gen_frame + 0x1c)) = 0;
    (*(int *)(gen_frame + 0x20)) = 0;
    (*(int *)(gen_frame + 0x24)) = 0;
    if ((byte)param_3 != 0) {
      (*(uint *)(gen_frame + 0x10)) = (uint)(byte)param_3;
      puVar7 = param_2;
      do {
        (*(undefined4 *)(gen_frame + 0x2c)) = 0;
        (*(undefined4 *)(gen_frame + 0x2c)) = *puVar7;
        (*(undefined4 * PTR32 *)(gen_frame + 0x30)) = &(*(undefined4 *)(gen_frame + 0x2c));
        (*(char *)(gen_frame + 0x34)) = '\0';
        if ((*(uint *)(gen_frame + 0x1c)) <= (*(int *)(gen_frame + 0x24)) + 1U) {
          F_00486f80(&(*(int * PTR32 *)(gen_frame + 0x14)),1);
        }
        uVar2 = (*(int *)(gen_frame + 0x24)) + (*(int *)(gen_frame + 0x20));
        if ((*(uint *)(gen_frame + 0x1c)) <= uVar2) {
          uVar2 = uVar2 - (*(uint *)(gen_frame + 0x1c));
        }
        if (*(int *)((*(int *)(gen_frame + 0x18)) + uVar2 * 4) == 0) {
          uVar5 = F_004296a0(0xc,0,0x2c4);
          *(uint *)((*(int *)(gen_frame + 0x18)) + uVar2 * 4) = uVar5;
        }
        puVar1 = *(undefined4 * PTR32 *)((*(int *)(gen_frame + 0x18)) + uVar2 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined1 *)(puVar1 + 2) = 0xff;
          if (((*(char *)(gen_frame + 0x34)) != -1) && (puVar1 != &(*(undefined4 *)(gen_frame + 0x2c)))) {
            (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = puVar1;
            (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (*(undefined4 * PTR32 *)(gen_frame + 0x30));
            if ((*(char *)(gen_frame + 0x34)) == '\0') {
              F_004919b0(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)));
            }
            else if ((*(char *)(gen_frame + 0x34)) == '\x01') {
              F_00491a60(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)));
            }
          }
        }
        (*(int *)(gen_frame + 0x24)) = (*(int *)(gen_frame + 0x24)) + 1;
        if ((*(undefined4 * PTR32 *)(gen_frame + 0x30)) != (undefined4 *)0x0) {
          if (((*(char *)(gen_frame + 0x34)) != '\0') && ((*(char *)(gen_frame + 0x34)) == '\x01')) {
            pvVar6 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x30));
            *(int *)((int)pvVar6 + 0x54) = *(int *)((int)pvVar6 + 0x54) + -1;
            if (*(int *)((int)pvVar6 + 0x54) < 1) {
              F_0042c880(pvVar6);
              F_00406ad0(pvVar6);
            }
          }
          (*(undefined4 * PTR32 *)(gen_frame + 0x30)) = (undefined4 *)0x0;
          (*(char *)(gen_frame + 0x34)) = -1;
        }
        puVar7 = puVar7 + 1;
        uVar2 = (*(uint *)(gen_frame + 0x10)) - 1;
        (*(uint *)(gen_frame + 0x10)) = uVar2;
        piVar3 = (*(int * PTR32 *)(gen_frame + 0x8));
      } while (uVar2 != 0);
    }
    if (*(undefined * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x50) == (undefined *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = F_00a5f290(*(undefined * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x50));
    }
    ppiVar10 = &(*(int * PTR32 *)(gen_frame + 0x14));
    pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3)));
    F_0046abb0(pvVar6,param_1,iVar9,uVar2,ppiVar10);
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x14)));
    uVar8 = F_00429760((*(int * PTR32 *)(gen_frame + 0x14)),8,0x2c4);
    uVar2 = (uint)uVar8;
  }
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar2;
}

/* ref: FUN_00704240 */
uint F_00704240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x704240u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  int * piVar1;
  int * piVar2;
  undefined4 uVar3;
  undefined * pvVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int * PTR32 * ppiVar10;
  
  (*(uint *)(gen_frame + 0x98)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  (*(undefined * PTR32 *)(gen_frame + 0x40)) = this;
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  (*(int * PTR32 *)(gen_frame + 0x28)) = (int *)0x0;
  piVar2 = (int *)F_004296a0(8,0,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0x28)) = piVar2;
  if (piVar2 != (int *)0x0) {
    *piVar2 = 0;
    piVar2[1] = 0;
  }
  *piVar2 = (int)&(*(int * PTR32 *)(gen_frame + 0x28));
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(int * PTR32 *)(gen_frame + 0xc)) = (int *)0x0;
  piVar2 = (int *)F_004296a0(8,0,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0xc)) = piVar2;
  if (piVar2 != (int *)0x0) {
    *piVar2 = 0;
    piVar2[1] = 0;
  }
  *piVar2 = (int)&(*(int * PTR32 *)(gen_frame + 0xc));
  uVar8 = REFG(undefined4, 0x1379694);
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    switch((unsigned int)(uintptr_t)(*(undefined1 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x40)) + 0x145))) {
    case 0: ;
      ppiVar10 = &(*(int * PTR32 *)(gen_frame + 0x28));
      iVar7 = 0x427;
      break;
    case 1: ;
      ppiVar10 = &(*(int * PTR32 *)(gen_frame + 0x28));
      iVar7 = 0x428;
      break;
    case 2: ;
      ppiVar10 = &(*(int * PTR32 *)(gen_frame + 0x28));
      iVar7 = 0x429;
      break;
    case 3: ;
      ppiVar10 = &(*(int * PTR32 *)(gen_frame + 0x28));
      iVar7 = 0x42a;
      break;
    default: ;
      goto switchD_007042f9_caseD_b;
    }
    break;
  case 1: ;
    switch((unsigned int)(uintptr_t)(*(undefined1 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x40)) + 0x145))) {
    case 0: ;
      ppiVar10 = &(*(int * PTR32 *)(gen_frame + 0x28));
      uVar3 = 0;
      iVar7 = 0x442;
      pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,0x442,REFG(undefined4, 0x1379694),0,ppiVar10)));
      goto LAB_007046a0;
    case 1: ;
      ppiVar10 = &(*(int * PTR32 *)(gen_frame + 0x28));
      iVar7 = 0x443;
      break;
    case 2: ;
      ppiVar10 = &(*(int * PTR32 *)(gen_frame + 0x28));
      iVar7 = 0x444;
      break;
    case 3: ;
      ppiVar10 = &(*(int * PTR32 *)(gen_frame + 0x28));
      iVar7 = 0x445;
      break;
    default: ;
      goto switchD_007042f9_caseD_b;
    }
    break;
  case 2: ;
    if (*(char *)((int)(*(undefined * PTR32 *)(gen_frame + 0x40)) + 0x145) == '\x01') {
      ppiVar10 = &(*(int * PTR32 *)(gen_frame + 0x28));
      iVar7 = 0x440;
      break;
    }
    if (*(char *)((int)(*(undefined * PTR32 *)(gen_frame + 0x40)) + 0x145) != '\x03') goto switchD_007042f9_caseD_b;
    ppiVar10 = &(*(int * PTR32 *)(gen_frame + 0x28));
    uVar3 = 0;
    iVar7 = 0x441;
    pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,0x441,REFG(undefined4, 0x1379694),0,ppiVar10)));
    goto LAB_007046a0;
  case 3: ;
    goto LAB_00704400;
  case 4: ;
  case 5: ;
    switch((unsigned int)(uintptr_t)(*(undefined1 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x40)) + 0x145))) {
    case 0: ;
      ppiVar10 = &(*(int * PTR32 *)(gen_frame + 0x28));
      uVar3 = 0;
      iVar7 = 0x42b;
      pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,0x42b,REFG(undefined4, 0x1379694),0,ppiVar10)));
      goto LAB_007046a0;
    case 1: ;
      ppiVar10 = &(*(int * PTR32 *)(gen_frame + 0x28));
      iVar7 = 0x42c;
      break;
    case 2: ;
      ppiVar10 = &(*(int * PTR32 *)(gen_frame + 0x28));
      iVar7 = 0x42d;
      break;
    case 3: ;
      ppiVar10 = &(*(int * PTR32 *)(gen_frame + 0x28));
      iVar7 = 0x42e;
      break;
    default: ;
      goto switchD_007042f9_caseD_b;
    }
    break;
  case 6: ;
    iVar7 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x40)) + 0x10c) + 8 + param_2 * 0x74;
    (*(int *)(gen_frame + 0x24)) = iVar7;
    (*(undefined * PTR32 *)(gen_frame + 0x40)) = *(undefined * PTR32 *)(iVar7 + 0x60);
    if ((char)param_3 != '\0') {
      (*(undefined * PTR32 *)(gen_frame + 0x40)) = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x40)) + 1000000);
    }
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x6c)) = &(*(undefined * PTR32 *)(gen_frame + 0x68));
    (*(undefined * PTR32 *)(gen_frame + 0x68)) = (undefined *)0x0;
    (*(undefined * PTR32 *)(gen_frame + 0x68)) = (*(undefined * PTR32 *)(gen_frame + 0x40));
    (*(undefined1 *)(gen_frame + 0x70)) = 0;
    F_00493bc0(&(*(int * PTR32 *)(gen_frame + 0x28)),&(*(undefined * PTR32 *)(gen_frame + 0x68)));
    F_004917c0(&(*(undefined * PTR32 *)(gen_frame + 0x68)));
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84)) = &(*(undefined * PTR32 *)(gen_frame + 0x80));
    (*(undefined * PTR32 *)(gen_frame + 0x80)) = (undefined *)0x0;
    (*(undefined * PTR32 *)(gen_frame + 0x80)) = (*(undefined * PTR32 *)(gen_frame + 0x40));
    (*(undefined1 *)(gen_frame + 0x88)) = 0;
    F_00493bc0(&(*(int * PTR32 *)(gen_frame + 0xc)),&(*(undefined * PTR32 *)(gen_frame + 0x80)));
    F_004917c0(&(*(undefined * PTR32 *)(gen_frame + 0x80)));
    if (*(byte *)((*(int *)(gen_frame + 0x24)) + 0x6d) == 1) {
      uVar3 = 0x419;
      (*(int *)(gen_frame + 0x24)) = 0x41d;
    }
    else {
      (*(uint * PTR32 *)(gen_frame + 0x78)) = &(*(uint *)(gen_frame + 0x74));
      (*(uint *)(gen_frame + 0x74)) = 0;
      (*(uint *)(gen_frame + 0x74)) = (uint)*(byte *)((*(int *)(gen_frame + 0x24)) + 0x6d);
      (*(undefined1 *)(gen_frame + 0x7c)) = 0;
      F_00493b50(&(*(int * PTR32 *)(gen_frame + 0x28)),&(*(uint *)(gen_frame + 0x74)));
      F_004917c0(&(*(uint *)(gen_frame + 0x74)));
      (*(uint * PTR32 *)(gen_frame + 0x90)) = &(*(uint *)(gen_frame + 0x8c));
      (*(uint *)(gen_frame + 0x8c)) = 0;
      (*(uint *)(gen_frame + 0x8c)) = (uint)*(byte *)((*(int *)(gen_frame + 0x24)) + 0x6d);
      (*(undefined1 *)(gen_frame + 0x94)) = 0;
      F_00493b50(&(*(int * PTR32 *)(gen_frame + 0xc)),&(*(uint *)(gen_frame + 0x8c)));
      F_004917c0(&(*(uint *)(gen_frame + 0x8c)));
      uVar3 = 0x41a;
      (*(int *)(gen_frame + 0x24)) = 0x41e;
    }
    ppiVar10 = &(*(int * PTR32 *)(gen_frame + 0x28));
    uVar9 = 0;
    uVar6 = uVar8;
    pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
    F_0046abb0(pvVar4,uVar3,uVar6,uVar9,ppiVar10);
    ppiVar10 = &(*(int * PTR32 *)(gen_frame + 0xc));
    uVar3 = 0;
    iVar7 = (*(int *)(gen_frame + 0x24));
    pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,(*(int *)(gen_frame + 0x24)),uVar8,0,ppiVar10)));
    goto LAB_007046a0;
  case 7: ;
LAB_00704400: ;
    ppiVar10 = &(*(int * PTR32 *)(gen_frame + 0x28));
    uVar9 = 0;
    uVar6 = 0x41b;
    uVar3 = REFG(undefined4, 0x1379694);
    pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
    F_0046abb0(pvVar4,uVar6,uVar3,uVar9,ppiVar10);
    ppiVar10 = &(*(int * PTR32 *)(gen_frame + 0xc));
    iVar7 = 0x41f;
    break;
  case 8: ;
    ppiVar10 = &(*(int * PTR32 *)(gen_frame + 0x28));
    iVar7 = 0x439;
    break;
  case 9: ;
    ppiVar10 = &(*(int * PTR32 *)(gen_frame + 0x28));
    iVar7 = 0x421;
    break;
  case 10: ;
    (*(undefined4 * PTR32 *)(gen_frame + 0x60)) = &(*(undefined4 *)(gen_frame + 0x5c));
    (*(undefined4 *)(gen_frame + 0x5c)) = 0;
    (*(undefined4 *)(gen_frame + 0x5c)) = *((undefined4 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x40)) + 0x10c) + 0x68 + param_2 * 0x74)));
    (*(undefined1 *)(gen_frame + 0x64)) = 0;
    F_00493bc0(&(*(int * PTR32 *)(gen_frame + 0x28)),&(*(undefined4 *)(gen_frame + 0x5c)));
    F_004917c0(&(*(undefined4 *)(gen_frame + 0x5c)));
    ppiVar10 = &(*(int * PTR32 *)(gen_frame + 0x28));
    iVar7 = 0x426;
    break;
  default: ;
    goto switchD_007042f9_caseD_b;
  case 0xc: ;
    (*(undefined4 * PTR32 *)(gen_frame + 0x48)) = &(*(undefined4 *)(gen_frame + 0x44));
    (*(undefined4 *)(gen_frame + 0x44)) = 0;
    (*(undefined4 *)(gen_frame + 0x44)) = *((undefined4 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x40)) + 0x10c) + 0x68 + param_2 * 0x74)));
    (*(undefined1 *)(gen_frame + 0x4c)) = 0;
    F_00493bc0(&(*(int * PTR32 *)(gen_frame + 0x28)),&(*(undefined4 *)(gen_frame + 0x44)));
    F_004917c0(&(*(undefined4 *)(gen_frame + 0x44)));
    ppiVar10 = &(*(int * PTR32 *)(gen_frame + 0x28));
    iVar7 = 0x42f;
    break;
  case 0xd: ;
    (*(undefined4 * PTR32 *)(gen_frame + 0x54)) = &(*(undefined4 *)(gen_frame + 0x50));
    (*(undefined4 *)(gen_frame + 0x50)) = 0;
    (*(undefined4 *)(gen_frame + 0x50)) = *((undefined4 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x40)) + 0x10c) + 0x68 + param_2 * 0x74)));
    (*(undefined1 *)(gen_frame + 0x58)) = 0;
    F_00493bc0(&(*(int * PTR32 *)(gen_frame + 0x28)),&(*(undefined4 *)(gen_frame + 0x50)));
    F_004917c0(&(*(undefined4 *)(gen_frame + 0x50)));
    ppiVar10 = &(*(int * PTR32 *)(gen_frame + 0x28));
    iVar7 = 0x430;
  }
  uVar3 = 0;
  pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
LAB_007046a0: ;
  F_0046abb0(pvVar4,iVar7,uVar8,uVar3,ppiVar10);
switchD_007042f9_caseD_b: ;
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0xc)));
  F_00429760((*(int * PTR32 *)(gen_frame + 0xc)),8,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0xc)) = (int *)0x0;
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x28)));
  uVar5 = F_00429760((*(int * PTR32 *)(gen_frame + 0x28)),8,0x2c4);
  F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
  return (uint)uVar5;
}

/* ref: Client::Game::Event::CraftEventHandler::vf31 */
uint F_00704770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x704770u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 * puVar1;
  undefined * pCVar2;
  uint uVar3;
  
  if (param_1 == 0x492) {
    uVar3 = 0x492;
    if ((byte)param_3 < 0x15) {
      if ((byte)param_3 != 0) {
        pCVar2 = this + 0x198;
        uVar3 = param_3 & 0xff;
        puVar1 = param_2;
        do {
          *(undefined4 *)pCVar2 = *puVar1;
          puVar1 = puVar1 + 1;
          pCVar2 = pCVar2 + 4;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      *(uint *)(this + 0x1e8) = param_3 & 0xff;
      return param_3 & 0xff;
    }
  }
  else {
    uVar3 = F_00704070((undefined *)this,param_1,param_2,param_3);
  }
  return uVar3;
}

/* ref: FUN_007047e0 */
uint F_007047e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7047e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  int * piVar1;
  int * piVar2;
  undefined * this;
  uint uVar3;
  undefined4 * this_00;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int * PTR32 * ppiVar7;
  
  (*(uint *)(gen_frame + 0x98)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar3 = 0;
  if (piVar1 == (int *)0x0) {
LAB_00704a61: ;
    F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
    return uVar3;
  }
  (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
  piVar2 = (int *)F_004296a0(8,0,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0x8)) = piVar2;
  if (piVar2 != (int *)0x0) {
    *piVar2 = 0;
    piVar2[1] = 0;
  }
  *piVar2 = (int)&(*(int * PTR32 *)(gen_frame + 0x8));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0x47e: ;
  case 0x484: ;
  case 0x486: ;
    (*(undefined4 * PTR32 *)(gen_frame + 0x60)) = &(*(undefined4 *)(gen_frame + 0x5c));
    (*(undefined4 *)(gen_frame + 0x5c)) = 0;
    (*(undefined4 *)(gen_frame + 0x5c)) = *param_2;
    (*(undefined1 *)(gen_frame + 0x64)) = 0;
    F_00493bc0(&(*(int * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x5c)));
    this_00 = &(*(undefined4 *)(gen_frame + 0x5c));
    break;
  case 0x47f: ;
  case 0x485: ;
  case 0x487: ;
  case 0x490: ;
    uVar5 = param_2[1];
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = *param_2;
    (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = &(*(undefined4 *)(gen_frame + 0x38));
    (*(undefined1 *)(gen_frame + 0x40)) = 0;
    F_00493bc0(&(*(int * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x38)));
    F_004917c0(&(*(undefined4 *)(gen_frame + 0x38)));
    (*(undefined4 *)(gen_frame + 0x8c)) = 0;
    (*(undefined4 *)(gen_frame + 0x8c)) = uVar5;
    (*(undefined4 * PTR32 *)(gen_frame + 0x90)) = &(*(undefined4 *)(gen_frame + 0x8c));
    (*(undefined1 *)(gen_frame + 0x94)) = 0;
    F_00493bc0(&(*(int * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x8c)));
    this_00 = &(*(undefined4 *)(gen_frame + 0x8c));
    break;
  case 0x480: ;
  case 0x481: ;
  case 0x482: ;
  case 0x483: ;
    (*(undefined4 * PTR32 *)(gen_frame + 0x78)) = &(*(undefined4 *)(gen_frame + 0x74));
    (*(undefined4 *)(gen_frame + 0x74)) = 0;
    (*(undefined4 *)(gen_frame + 0x74)) = *param_2;
    (*(undefined1 *)(gen_frame + 0x7c)) = 0;
    F_00493bc0(&(*(int * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x74)));
    this_00 = &(*(undefined4 *)(gen_frame + 0x74));
    break;
  case 0x488: ;
  case 0x489: ;
  case 0x491: ;
  case 0x492: ;
  case 0x493: ;
  case 0x494: ;
  case 0x495: ;
    goto switchD_00704879_caseD_488;
  case 0x48a: ;
  case 0x48b: ;
  case 0x48c: ;
  case 0x48d: ;
  case 0x48e: ;
  case 0x48f: ;
    (*(undefined4 * PTR32 *)(gen_frame + 0x48)) = &(*(undefined4 *)(gen_frame + 0x44));
    (*(undefined4 *)(gen_frame + 0x44)) = 0;
    (*(undefined4 *)(gen_frame + 0x44)) = *param_2;
    (*(undefined1 *)(gen_frame + 0x4c)) = 0;
    F_00493bc0(&(*(int * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x44)));
    this_00 = &(*(undefined4 *)(gen_frame + 0x44));
    break;
  case 0x496: ;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = *param_2;
    (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = &(*(undefined4 *)(gen_frame + 0x20));
    (*(undefined1 *)(gen_frame + 0x28)) = 0;
    F_00493bc0(&(*(int * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x20)));
    F_004917c0(&(*(undefined4 *)(gen_frame + 0x20)));
    (*(undefined4 *)(gen_frame + 0x2c)) = 0;
    (*(undefined4 *)(gen_frame + 0x2c)) = param_2[1];
    (*(undefined4 * PTR32 *)(gen_frame + 0x30)) = &(*(undefined4 *)(gen_frame + 0x2c));
    (*(undefined1 *)(gen_frame + 0x34)) = 0;
    F_00493bc0(&(*(int * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x2c)));
    this_00 = &(*(undefined4 *)(gen_frame + 0x2c));
    break;
  case 0x497: ;
    (*(undefined4 *)(gen_frame + 0x80)) = 0;
    (*(undefined4 *)(gen_frame + 0x80)) = *param_2;
    (*(undefined4 * PTR32 *)(gen_frame + 0x84)) = &(*(undefined4 *)(gen_frame + 0x80));
    (*(undefined1 *)(gen_frame + 0x88)) = 0;
    F_00493bc0(&(*(int * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x80)));
    this_00 = &(*(undefined4 *)(gen_frame + 0x80));
    break;
  case 0x498: ;
    (*(undefined4 *)(gen_frame + 0x68)) = 0;
    (*(undefined4 *)(gen_frame + 0x68)) = *param_2;
    (*(undefined4 * PTR32 *)(gen_frame + 0x6c)) = &(*(undefined4 *)(gen_frame + 0x68));
    (*(undefined1 *)(gen_frame + 0x70)) = 0;
    F_00493bc0(&(*(int * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x68)));
    F_004917c0(&(*(undefined4 *)(gen_frame + 0x68)));
    (*(undefined4 *)(gen_frame + 0x50)) = 0;
    (*(undefined4 *)(gen_frame + 0x50)) = param_2[1];
    (*(undefined4 * PTR32 *)(gen_frame + 0x54)) = &(*(undefined4 *)(gen_frame + 0x50));
    (*(undefined1 *)(gen_frame + 0x58)) = 0;
    F_00493bc0(&(*(int * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x50)));
    this_00 = &(*(undefined4 *)(gen_frame + 0x50));
    break;
  default: ;
switchD_00704879_default: ;
    ppiVar7 = &(*(int * PTR32 *)(gen_frame + 0x8));
    uVar6 = 0;
    uVar5 = REFG(undefined4, 0x1379694);
    this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
    F_0046abb0(this,param_1,uVar5,uVar6,ppiVar7);
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x8)));
    uVar4 = F_00429760((*(int * PTR32 *)(gen_frame + 0x8)),8,0x2c4);
    uVar3 = (uint)uVar4;
    goto LAB_00704a61;
  }
  F_004917c0(this_00);
switchD_00704879_caseD_488: ;
  goto switchD_00704879_default;
}

/* ref: FUN_00704ab0 */
uint F_00704ab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x704ab0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x100];
  byte bVar1;
  byte * pbVar2;
  int * piVar3;
  int * piVar4;
  undefined * pvVar5;
  uint uVar6;
  byte bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int * PTR32 * ppiVar11;
  
  (*(uint *)(gen_frame + 0xf8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xfc);
  pbVar2 = param_1;
  if ((*param_1 & 0xf) == 0) {
LAB_00704aec: ;
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xfc) ^ (uint)(uint)(gen_frame + 0xfc));
    return (uint)pbVar2 & 0xffffff00;
  }
  pbVar2 = *(byte * PTR32 *)(param_1 + 4);
  if (pbVar2 == (byte *)0xfffffffe) {
    bVar7 = *(byte *)((int)this + 0x184) & 0xf7;
    *(byte *)((int)this + 0x184) = bVar7 | 0x10;
    uVar6 = 0xfffffffe;
    if (*(short *)((int)this + 0x54) != -1) {
      pvVar5 = F_00c48350(&(*(undefined4 *)(gen_frame + 0x18)),0,0xe0);
      bVar1 = *(byte *)((int)this + 0x5c);
      uVar6 = CONCAT31((int3)((uint)((int)(uintptr_t)pvVar5) >> 8),bVar1);
      (*(undefined4 *)(gen_frame + 0x18)) = 7;
      (*(undefined4 *)(gen_frame + 0x1c)) = 1;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
      *(byte *)((int)this + 0x184) = bVar7 | 0x18;
      if ((bVar1 & 4) == 0) {
        *(byte *)((int)this + 0x5c) = bVar1 | 4;
        uVar6 = F_006f15b0(*(undefined * PTR32 *)((int)this + 4),&(*(undefined4 *)(gen_frame + 0x18)),4);
      }
    }
  }
  else {
    if (((pbVar2 != (byte *)0xffffffff) ||
        (pbVar2 = (byte *)0xffff, *(short *)((int)this + 0x54) == -1)) ||
       ((*(byte *)((int)this + 0x184) & 1) != 0)) goto LAB_00704aec;
    F_00a4a760(&REFG(undefined, 0x14a7360),0x18,1);
    *(byte *)((int)this + 0x184) = *(byte *)((int)this + 0x184) | 3;
    REFG(undefined4, 0x14ac17c) = 1;
    piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    if (piVar3 != (int *)0x0) {
      (*(int * PTR32 *)(gen_frame + 0x0)) = (int *)0x0;
      piVar4 = (int *)F_004296a0(8,0,0x2c4);
      (*(int * PTR32 *)(gen_frame + 0x0)) = piVar4;
      if (piVar4 != (int *)0x0) {
        *piVar4 = 0;
        piVar4[1] = 0;
      }
      ppiVar11 = &(*(int * PTR32 *)(gen_frame + 0x0));
      *piVar4 = (int)ppiVar11;
      uVar10 = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      uVar8 = 0x489;
      uVar9 = REFG(undefined4, 0x1379694);
      pvVar5 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3)));
      F_0046abb0(pvVar5,uVar8,uVar9,uVar10,ppiVar11);
      F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x0)));
      F_00429760((*(int * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
    }
    F_006bf390();
    uVar6 = F_006f49b0(this,7,1,0,0);
  }
  F_00c47745((*(uint *)(gen_frame + 0xf8)) ^ (uint)(uint)(gen_frame + 0xfc));
  return CONCAT31((int3)(uVar6 >> 8),1);
}

/* ref: Client::Game::Event::CraftEventHandler::vf39 */
uint F_00704c80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x704c80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int * piVar1;
  undefined4 * puVar2;
  undefined * this_00;
  uint uVar3;
  undefined * pvVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 * PTR32 * ppuVar8;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  F_006e6ba0(*(undefined * PTR32 *)(this + 4),this,1);
  this[0x44] = (undefined1)0x0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  this[0x4c] = (undefined1)0x0;
  if (param_3 == 0xb) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this,0x522,0,0);
  }
  else if (param_3 == 0xc) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this,0x521,0,0);
  }
  else if ((param_3 < 10) || (0x1c < param_3)) goto LAB_00704d83;
  if (REFG(int, 0x1324144) != 0) {
    *(undefined4 *)&REFG(undefined, 0x1324140) = 0;
    piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1)));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,REFG(int, 0x1324144),0);
  }
  if (REFG(int, 0x1324154) != 0) {
    *(undefined4 *)&REFG(undefined, 0x1324150) = 0;
    piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    if (piVar1 != (int *)0x0) {
      piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1)));
      ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,REFG(int, 0x1324154),0);
    }
  }
  pvVar4 = REFG(undefined4, 0x1379694);
  if (REFG(undefined4, 0x1379694) != (undefined *)0x0) {
    F_00aa2900(REFG(undefined4, 0x1379694),0);
    F_00aa80c0(pvVar4,1,0,0);
    F_00aa80c0(pvVar4,2,0,0);
  }
LAB_00704d83: ;
  if (*(int *)(this + 0x1e8) != 0) {
    if (((byte)this[0x184] & 4) != 0) {
      piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = (undefined4 *)0x0;
      puVar2 = (undefined4 *)F_004296a0(8,0,0x2c4);
      (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = puVar2;
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      *puVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x18));
      (*(int *)(gen_frame + 0x1c)) = 0;
      (*(uint *)(gen_frame + 0x20)) = 0;
      (*(int *)(gen_frame + 0x24)) = 0;
      (*(int *)(gen_frame + 0x28)) = 0;
      F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x18)));
      ppuVar8 = &(*(undefined4 * PTR32 *)(gen_frame + 0x18));
      uVar7 = 0;
      uVar6 = 0x492;
      pvVar4 = REFG(undefined4, 0x1379694);
      this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
      F_0046abb0(this_00,uVar6,pvVar4,uVar7,ppuVar8);
      (*(uint *)(gen_frame + 0x10)) = 0;
      if (*(int *)(this + 0x1e8) != 0) {
        (*(undefined * PTR32 *)(gen_frame + 0x14)) = this + 0x19c;
        do {
          F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x18)));
          (*(undefined4 *)(gen_frame + 0x3c)) = 0;
          (*(undefined4 *)(gen_frame + 0x3c)) = *(undefined4 *)((*(undefined * PTR32 *)(gen_frame + 0x14)) + -4);
          (*(undefined4 * PTR32 *)(gen_frame + 0x40)) = &(*(undefined4 *)(gen_frame + 0x3c));
          (*(char *)(gen_frame + 0x44)) = '\0';
          if ((*(uint *)(gen_frame + 0x20)) <= (*(int *)(gen_frame + 0x28)) + 1U) {
            F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x18)),1);
          }
          uVar5 = (*(int *)(gen_frame + 0x24)) + (*(int *)(gen_frame + 0x28));
          if ((*(uint *)(gen_frame + 0x20)) <= uVar5) {
            uVar5 = uVar5 - (*(uint *)(gen_frame + 0x20));
          }
          if (*(int *)((*(int *)(gen_frame + 0x1c)) + uVar5 * 4) == 0) {
            uVar3 = F_004296a0(0xc,0,0x2c4);
            *(uint *)((*(int *)(gen_frame + 0x1c)) + uVar5 * 4) = uVar3;
          }
          puVar2 = *(undefined4 * PTR32 *)((*(int *)(gen_frame + 0x1c)) + uVar5 * 4);
          if (puVar2 != (undefined4 *)0x0) {
            *puVar2 = 0;
            puVar2[1] = 0;
            *(undefined1 *)(puVar2 + 2) = 0xff;
            if (((*(char *)(gen_frame + 0x44)) != -1) && (puVar2 != &(*(undefined4 *)(gen_frame + 0x3c)))) {
              (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar2;
              (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = (*(undefined4 * PTR32 *)(gen_frame + 0x40));
              if ((*(char *)(gen_frame + 0x44)) == '\0') {
                F_004919b0(&(*(undefined4 * PTR32 *)(gen_frame + 0x8)));
              }
              else if ((*(char *)(gen_frame + 0x44)) == '\x01') {
                F_00491a60(&(*(undefined4 * PTR32 *)(gen_frame + 0x8)));
              }
            }
          }
          (*(int *)(gen_frame + 0x28)) = (*(int *)(gen_frame + 0x28)) + 1;
          if ((*(undefined4 * PTR32 *)(gen_frame + 0x40)) != (undefined4 *)0x0) {
            if (((*(char *)(gen_frame + 0x44)) != '\0') && ((*(char *)(gen_frame + 0x44)) == '\x01')) {
              pvVar4 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x40));
              *(int *)((int)pvVar4 + 0x54) = *(int *)((int)pvVar4 + 0x54) + -1;
              if (*(int *)((int)pvVar4 + 0x54) < 1) {
                F_0042c880(pvVar4);
                F_00406ad0(pvVar4);
              }
            }
            (*(undefined4 * PTR32 *)(gen_frame + 0x40)) = (undefined4 *)0x0;
            (*(char *)(gen_frame + 0x44)) = -1;
          }
          (*(undefined4 *)(gen_frame + 0x30)) = 0;
          (*(undefined4 *)(gen_frame + 0x30)) = *(undefined4 *)(*(undefined * PTR32 *)(gen_frame + 0x14));
          (*(undefined4 * PTR32 *)(gen_frame + 0x34)) = &(*(undefined4 *)(gen_frame + 0x30));
          (*(char *)(gen_frame + 0x38)) = '\0';
          if ((*(uint *)(gen_frame + 0x20)) <= (*(int *)(gen_frame + 0x28)) + 1U) {
            F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x18)),1);
          }
          uVar5 = (*(int *)(gen_frame + 0x24)) + (*(int *)(gen_frame + 0x28));
          if ((*(uint *)(gen_frame + 0x20)) <= uVar5) {
            uVar5 = uVar5 - (*(uint *)(gen_frame + 0x20));
          }
          if (*(int *)((*(int *)(gen_frame + 0x1c)) + uVar5 * 4) == 0) {
            uVar3 = F_004296a0(0xc,0,0x2c4);
            *(uint *)((*(int *)(gen_frame + 0x1c)) + uVar5 * 4) = uVar3;
          }
          puVar2 = *(undefined4 * PTR32 *)((*(int *)(gen_frame + 0x1c)) + uVar5 * 4);
          if (puVar2 != (undefined4 *)0x0) {
            *puVar2 = 0;
            puVar2[1] = 0;
            *(undefined1 *)(puVar2 + 2) = 0xff;
            if (((*(char *)(gen_frame + 0x38)) != -1) && (puVar2 != &(*(undefined4 *)(gen_frame + 0x30)))) {
              (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = puVar2;
              (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (*(undefined4 * PTR32 *)(gen_frame + 0x34));
              if ((*(char *)(gen_frame + 0x38)) == '\0') {
                F_004919b0(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)));
              }
              else if ((*(char *)(gen_frame + 0x38)) == '\x01') {
                F_00491a60(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)));
              }
            }
          }
          (*(int *)(gen_frame + 0x28)) = (*(int *)(gen_frame + 0x28)) + 1;
          if ((*(undefined4 * PTR32 *)(gen_frame + 0x34)) != (undefined4 *)0x0) {
            if (((*(char *)(gen_frame + 0x38)) != '\0') && ((*(char *)(gen_frame + 0x38)) == '\x01')) {
              pvVar4 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x34));
              *(int *)((int)pvVar4 + 0x54) = *(int *)((int)pvVar4 + 0x54) + -1;
              if (*(int *)((int)pvVar4 + 0x54) < 1) {
                F_0042c880(pvVar4);
                F_00406ad0(pvVar4);
              }
            }
            (*(undefined4 * PTR32 *)(gen_frame + 0x34)) = (undefined4 *)0x0;
            (*(char *)(gen_frame + 0x38)) = -1;
          }
          ppuVar8 = &(*(undefined4 * PTR32 *)(gen_frame + 0x18));
          uVar6 = 0x490;
          pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
          F_0046aa70(pvVar4,uVar6,ppuVar8);
          (*(undefined * PTR32 *)(gen_frame + 0x14)) = (*(undefined * PTR32 *)(gen_frame + 0x14)) + 8;
          uVar5 = (*(uint *)(gen_frame + 0x10)) + 2;
          (*(uint *)(gen_frame + 0x10)) = uVar5;
        } while (uVar5 < *(uint *)(this + 0x1e8));
      }
      F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x18)));
      F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x18)),8,0x2c4);
    }
    *(undefined4 *)(this + 0x1e8) = 0;
  }
  *(undefined4 *)(this + 0x18a) = 0;
  this[0x192] = (undefined1)0x0;
  *(undefined2 *)(this + 0x194) = 0;
  this[0x196] = (undefined1)0x0;
  *(undefined4 *)(this + 0x186) = 0;
  *(undefined4 *)(this + 0x18e) = 0;
  this[0x184] = (undefined1)((byte)this[0x184] & 0xf3);
  *(undefined4 *)(this + 0x180) = 0;
  REFG(undefined4, 0x14ac17c) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 0;
}

/* ref: FUN_00705080 */
uint F_00705080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x705080u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int iVar1;
  int * piVar2;
  int * piVar3;
  undefined * pvVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int * PTR32 * ppiVar11;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = this;
  (*(int *)(gen_frame + 0x28)) = param_1;
  iVar6 = param_1;
  if ((char)param_2 == '\0') {
    if ((*(byte *)(param_1 + 0x40) & 8) == 0) {
      uVar5 = *(uint *)(param_1 + 0x10);
      piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      iVar6 = (*(int *)(gen_frame + 0x28));
      if (piVar2 != (int *)0x0) {
        (*(int * PTR32 *)(gen_frame + 0x34)) = (int *)0x0;
        piVar3 = (int *)F_004296a0(8,0,0x2c4);
        (*(int * PTR32 *)(gen_frame + 0x34)) = piVar3;
        if (piVar3 != (int *)0x0) {
          *piVar3 = 0;
          piVar3[1] = 0;
        }
        *piVar3 = (int)&(*(int * PTR32 *)(gen_frame + 0x34));
        (*(uint *)(gen_frame + 0x4c)) = 0;
        (*(undefined4 *)(gen_frame + 0x38)) = 0;
        (*(undefined4 *)(gen_frame + 0x3c)) = 0;
        (*(undefined4 *)(gen_frame + 0x40)) = 0;
        (*(undefined4 *)(gen_frame + 0x44)) = 0;
        (*(uint *)(gen_frame + 0x4c)) = uVar5;
        (*(uint * PTR32 *)(gen_frame + 0x50)) = &(*(uint *)(gen_frame + 0x4c));
        (*(undefined1 *)(gen_frame + 0x54)) = 0;
        F_00493bc0(&(*(int * PTR32 *)(gen_frame + 0x34)),&(*(uint *)(gen_frame + 0x4c)));
        F_004917c0(&(*(uint *)(gen_frame + 0x4c)));
        ppiVar11 = &(*(int * PTR32 *)(gen_frame + 0x34));
        uVar10 = 0;
        uVar8 = 0x483;
        uVar9 = REFG(undefined4, 0x1379694);
        pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2)));
        F_0046abb0(pvVar4,uVar8,uVar9,uVar10,ppiVar11);
        F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x34)));
        F_00429760((*(int * PTR32 *)(gen_frame + 0x34)),8,0x2c4);
        iVar6 = (*(int *)(gen_frame + 0x28));
      }
    }
    else {
      (*(uint *)(gen_frame + 0x2c)) = *(uint *)(param_1 + 0x10);
      piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      if (piVar2 != (int *)0x0) {
        (*(int * PTR32 *)(gen_frame + 0x34)) = (int *)0x0;
        piVar3 = (int *)F_004296a0(8,0,0x2c4);
        (*(int * PTR32 *)(gen_frame + 0x34)) = piVar3;
        if (piVar3 != (int *)0x0) {
          *piVar3 = 0;
          piVar3[1] = 0;
        }
        *piVar3 = (int)&(*(int * PTR32 *)(gen_frame + 0x34));
        (*(uint *)(gen_frame + 0x4c)) = 0;
        (*(undefined4 *)(gen_frame + 0x38)) = 0;
        (*(undefined4 *)(gen_frame + 0x3c)) = 0;
        (*(undefined4 *)(gen_frame + 0x40)) = 0;
        (*(undefined4 *)(gen_frame + 0x44)) = 0;
        (*(uint *)(gen_frame + 0x4c)) = (*(uint *)(gen_frame + 0x2c));
        (*(uint * PTR32 *)(gen_frame + 0x50)) = &(*(uint *)(gen_frame + 0x4c));
        (*(undefined1 *)(gen_frame + 0x54)) = 0;
        F_00493bc0(&(*(int * PTR32 *)(gen_frame + 0x34)),&(*(uint *)(gen_frame + 0x4c)));
        F_004917c0(&(*(uint *)(gen_frame + 0x4c)));
        ppiVar11 = &(*(int * PTR32 *)(gen_frame + 0x34));
        uVar10 = 0;
        uVar8 = 0x482;
        uVar9 = REFG(undefined4, 0x1379694);
        pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2)));
        F_0046abb0(pvVar4,uVar8,uVar9,uVar10,ppiVar11);
        F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x34)));
        F_00429760((*(int * PTR32 *)(gen_frame + 0x34)),8,0x2c4);
      }
    }
  }
  iVar1 = *(int *)(iVar6 + 0x20);
  if (iVar1 != 0) {
    if (iVar1 < 1) {
      (*(int *)(gen_frame + 0x30)) = -iVar1;
      uVar9 = 0x48b;
    }
    else {
      (*(int *)(gen_frame + 0x30)) = iVar1;
      uVar9 = 0x48a;
    }
    F_007047e0(uVar9,&(*(int *)(gen_frame + 0x30)),1);
    F_0046c080(REFG(undefined4, 0x1379694),0x13,iVar1);
  }
  iVar1 = *(int *)(iVar6 + 0x28);
  if (iVar1 != 0) {
    if (iVar1 < 1) {
      (*(int *)(gen_frame + 0x30)) = -iVar1;
      uVar9 = 0x48d;
    }
    else {
      (*(int *)(gen_frame + 0x30)) = iVar1;
      uVar9 = 0x48c;
    }
    F_007047e0(uVar9,&(*(int *)(gen_frame + 0x30)),1);
    F_0046c080(REFG(undefined4, 0x1379694),0x14,iVar1);
  }
  iVar1 = *(int *)(iVar6 + 0x34);
  if (iVar1 != 0) {
    if (iVar1 < 1) {
      piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      iVar6 = (*(int *)(gen_frame + 0x28));
      if (piVar2 == (int *)0x0) goto LAB_007053c6;
      F_004816e0(((int * PTR32 *)(gen_frame + 0xc)));
      (*(int *)(gen_frame + 0x30)) = -iVar1;
      (*(uint *)(gen_frame + 0x4c)) = 0;
      (*(uint * PTR32 *)(gen_frame + 0x50)) = (uint *)0x0;
      (*(undefined1 *)(gen_frame + 0x54)) = 0xff;
      F_00490f30(&(*(uint *)(gen_frame + 0x4c)),&(*(int *)(gen_frame + 0x30)));
      F_00493bc0(((int * PTR32 *)(gen_frame + 0xc)),&(*(uint *)(gen_frame + 0x4c)));
      F_004917c0(&(*(uint *)(gen_frame + 0x4c)));
      ppiVar11 = ((int * PTR32 *)(gen_frame + 0xc));
      uVar10 = 0;
      uVar8 = 0x48f;
      uVar9 = REFG(undefined4, 0x1379694);
      pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2)));
      F_0046abb0(pvVar4,uVar8,uVar9,uVar10,ppiVar11);
      F_00492c50(((int * PTR32 *)(gen_frame + 0xc)));
      piVar2 = ((int * PTR32 *)(gen_frame + 0xc))[0];
    }
    else {
      piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      iVar6 = (*(int *)(gen_frame + 0x28));
      if (piVar2 == (int *)0x0) goto LAB_007053c6;
      (*(int * PTR32 *)(gen_frame + 0x34)) = (int *)0x0;
      piVar3 = (int *)F_004296a0(8,0,0x2c4);
      (*(int * PTR32 *)(gen_frame + 0x34)) = piVar3;
      if (piVar3 != (int *)0x0) {
        *piVar3 = 0;
        piVar3[1] = 0;
      }
      *piVar3 = (int)&(*(int * PTR32 *)(gen_frame + 0x34));
      (*(undefined4 *)(gen_frame + 0x38)) = 0;
      (*(undefined4 *)(gen_frame + 0x3c)) = 0;
      (*(undefined4 *)(gen_frame + 0x40)) = 0;
      (*(undefined4 *)(gen_frame + 0x44)) = 0;
      (*(int *)(gen_frame + 0x30)) = iVar1;
      (*(uint *)(gen_frame + 0x4c)) = 0;
      (*(uint * PTR32 *)(gen_frame + 0x50)) = (uint *)0x0;
      (*(undefined1 *)(gen_frame + 0x54)) = 0xff;
      F_00490f30(&(*(uint *)(gen_frame + 0x4c)),&(*(int *)(gen_frame + 0x30)));
      F_00493bc0(&(*(int * PTR32 *)(gen_frame + 0x34)),&(*(uint *)(gen_frame + 0x4c)));
      F_004917c0(&(*(uint *)(gen_frame + 0x4c)));
      ppiVar11 = &(*(int * PTR32 *)(gen_frame + 0x34));
      uVar10 = 0;
      uVar8 = 0x48e;
      uVar9 = REFG(undefined4, 0x1379694);
      pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2)));
      F_0046abb0(pvVar4,uVar8,uVar9,uVar10,ppiVar11);
      F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x34)));
      piVar2 = (*(int * PTR32 *)(gen_frame + 0x34));
    }
    F_00429760(piVar2,8,0x2c4);
    iVar6 = (*(int *)(gen_frame + 0x28));
  }
LAB_007053c6: ;
  uVar5 = *(uint *)(iVar6 + 0x14);
  if (0 < (int)uVar5) {
    (*(uint *)(gen_frame + 0x2c)) = uVar5;
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar5 = 0;
    if (piVar2 != (int *)0x0) {
      F_004816e0(((int * PTR32 *)(gen_frame + 0xc)));
      (*(uint *)(gen_frame + 0x4c)) = 0;
      (*(uint * PTR32 *)(gen_frame + 0x50)) = (uint *)0x0;
      (*(undefined1 *)(gen_frame + 0x54)) = 0xff;
      F_00490f30(&(*(uint *)(gen_frame + 0x4c)),&(*(uint *)(gen_frame + 0x2c)));
      F_00493bc0(((int * PTR32 *)(gen_frame + 0xc)),&(*(uint *)(gen_frame + 0x4c)));
      F_004917c0(&(*(uint *)(gen_frame + 0x4c)));
      F_004918f0(&(*(undefined4 *)(gen_frame + 0x40)),&(*(int *)(gen_frame + 0x30)));
      F_00493bc0(((int * PTR32 *)(gen_frame + 0xc)),&(*(undefined4 *)(gen_frame + 0x40)));
      F_004917c0(&(*(undefined4 *)(gen_frame + 0x40)));
      ppiVar11 = ((int * PTR32 *)(gen_frame + 0xc));
      uVar10 = 0;
      uVar8 = 0x496;
      uVar9 = REFG(undefined4, 0x1379694);
      pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2)));
      F_0046abb0(pvVar4,uVar8,uVar9,uVar10,ppiVar11);
      F_00492c50(((int * PTR32 *)(gen_frame + 0xc)));
      uVar7 = F_00429760(((int * PTR32 *)(gen_frame + 0xc))[0],8,0x2c4);
      uVar5 = (uint)uVar7;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar5;
}

/* ref: FUN_00705490 */
uint F_00705490(unsigned int gen_a0)
{
  GEN_ENTER(0x705490u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00406b90(0x370,0,0);
  if (this != (undefined *)0x0) {
    uVar1 = F_00702810(this,param_1 & 0xffff | 0x10000);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_007054c0 */
uint F_007054c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7054c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  uint uVar1;
  undefined4 * this_00;
  
  if ((*(byte *)((int)this + 0x36e) & 4) == 0) {
    if (*(int *)((int)this + 0x348) == 0) {
      uVar1 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8));
      *(uint *)((int)this + 0x348) = uVar1;
    }
    *(byte *)((int)this + 0x36e) = *(byte *)((int)this + 0x36e) | 4;
    this_00 = (undefined4 *)F_00406b90(0x20,0,0);
    if (this_00 == (undefined4 *)0x0) {
      this_00 = (undefined4 *)0x0;
    }
    else {
      F_00cb4700(this_00,1,0);
      this_00[5] = 1;
      *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10b9204));
      this_00[6] = this;
      this_00[7] = ((code *)REFP(0x7029e0));
    }
    *(undefined4 * PTR32 *)((int)this + 0x34c) = this_00;
    F_00cb4540(this_00,0,*(undefined4 *)((int)this + 8));
    in_EAX = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x348) + 0x48))))
                       (*(int * PTR32 *)((int)this + 0x348),*(undefined4 *)((int)this + 0x34c));
  }
  return in_EAX;
}

/* ref: Client::Game::Event::QuestEventHandler::vf139 */
uint F_00705d80(unsigned int gen_a0)
{
  GEN_ENTER(0x705d80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short sVar1;
  int iVar2;
  byte bVar3;
  char * pcVar4;
  uint uVar5;
  int iVar6;
  
  pcVar4 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 8))(this)));
  iVar2 = REFG(int, 0x1379694);
  if (((char)pcVar4 != '\0') && (REFG(int, 0x1379694) != 0)) {
    sVar1 = *(short *)(this + 0x1d4);
    uVar5 = F_00a4ffd0();
    iVar6 = 0;
    pcVar4 = (char *)(uVar5 + 0x13b4);
    do {
      if (*(short *)(pcVar4 + 4) == sVar1) {
        if ((-1 < iVar6) && (pcVar4[6] != '\0')) goto LAB_00705df8;
        break;
      }
      iVar6 = iVar6 + 1;
      pcVar4 = pcVar4 + 0x10;
    } while (iVar6 < 0x1e);
    bVar3 = F_006dbfa0(this);
    if ((bVar3 == 0) || (pcVar4 = (char *)F_006e17b0(this,iVar2), (char)pcVar4 == '\0')) {
      pcVar4 = *(char * PTR32 *)(this + 0x16c);
      if (*pcVar4 != '\0') {
        uVar5 = F_007054c0(this);
        return uVar5;
      }
    }
    else {
LAB_00705df8: ;
      if (**(char * PTR32 *)(this + 0x16c) == '\0') {
        uVar5 = F_007054c0(this);
        return uVar5;
      }
    }
  }
  return (uint)pcVar4;
}

/* ref: FUN_00705e20 */
unsigned int F_00705e20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x705e20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x2a0];
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  undefined * pvVar4;
  uint uVar5;
  uint * this_00;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined * PTR32 * ppuVar9;
  undefined4 uVar10;
  undefined1 * puVar11;
  undefined4 uVar12;
  undefined1 * puVar13;
  undefined4 uVar14;
  
  (*(uint *)(gen_frame + 0x298)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x29c);
  *(undefined * PTR32 *)&REFG(undefined, 0x13241a0) = this;
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  F_0042cbc0(((undefined1 *)(gen_frame + 0x218)),param_1);
  F_0042b630(((undefined1 *)(gen_frame + 0xc8)));
  F_0042b630(((undefined1 *)(gen_frame + 0x170)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (undefined4 *)0x0;
  puVar2 = (undefined4 *)F_004296a0(8,0,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *puVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x8));
  (*(int *)(gen_frame + 0x26c)) = 0;
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(uint *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x14)) = 0;
  (*(int *)(gen_frame + 0x18)) = 0;
  (*(int *)(gen_frame + 0x26c)) = *(int *)((int)this + 0x1be8);
  (*(int * PTR32 *)(gen_frame + 0x270)) = &(*(int *)(gen_frame + 0x26c));
  (*(char *)(gen_frame + 0x274)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x8)),1);
  uVar5 = (*(int *)(gen_frame + 0x18)) + (*(int *)(gen_frame + 0x14));
  if ((*(uint *)(gen_frame + 0x10)) <= uVar5) {
    uVar5 = uVar5 - (*(uint *)(gen_frame + 0x10));
  }
  if (*(int *)((*(int *)(gen_frame + 0xc)) + uVar5 * 4) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *(uint *)((*(int *)(gen_frame + 0xc)) + uVar5 * 4) = uVar3;
  }
  pvVar4 = *(undefined * PTR32 *)((*(int *)(gen_frame + 0xc)) + uVar5 * 4);
  if (pvVar4 != (undefined *)0x0) {
    F_00492f50(pvVar4,&(*(int *)(gen_frame + 0x26c)));
  }
  (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) + 1;
  if ((((*(int * PTR32 *)(gen_frame + 0x270)) != (int *)0x0) && ((*(char *)(gen_frame + 0x274)) != '\0')) && ((*(char *)(gen_frame + 0x274)) == '\x01')) {
    pvVar4 = (undefined *)*(*(int * PTR32 *)(gen_frame + 0x270));
    *(int *)((int)pvVar4 + 0x54) = *(int *)((int)pvVar4 + 0x54) + -1;
    if (*(int *)((int)pvVar4 + 0x54) < 1) {
      F_0042c880(pvVar4);
      F_00406ad0(pvVar4);
    }
  }
  (*(int *)(gen_frame + 0x26c)) = 0;
  (*(int *)(gen_frame + 0x26c)) = *(int *)((int)this + 0x1bcc);
  (*(int * PTR32 *)(gen_frame + 0x270)) = &(*(int *)(gen_frame + 0x26c));
  (*(char *)(gen_frame + 0x274)) = '\0';
  if ((*(uint *)(gen_frame + 0x10)) <= (*(int *)(gen_frame + 0x18)) + 1U) {
    F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x8)),1);
  }
  uVar5 = (*(int *)(gen_frame + 0x18)) + (*(int *)(gen_frame + 0x14));
  if ((*(uint *)(gen_frame + 0x10)) <= uVar5) {
    uVar5 = uVar5 - (*(uint *)(gen_frame + 0x10));
  }
  if (*(int *)((*(int *)(gen_frame + 0xc)) + uVar5 * 4) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *(uint *)((*(int *)(gen_frame + 0xc)) + uVar5 * 4) = uVar3;
  }
  pvVar4 = *(undefined * PTR32 *)((*(int *)(gen_frame + 0xc)) + uVar5 * 4);
  if (pvVar4 != (undefined *)0x0) {
    F_00492f50(pvVar4,&(*(int *)(gen_frame + 0x26c)));
  }
  (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) + 1;
  if ((((*(int * PTR32 *)(gen_frame + 0x270)) != (int *)0x0) && ((*(char *)(gen_frame + 0x274)) != '\0')) && ((*(char *)(gen_frame + 0x274)) == '\x01')) {
    pvVar4 = (undefined *)*(*(int * PTR32 *)(gen_frame + 0x270));
    *(int *)((int)pvVar4 + 0x54) = *(int *)((int)pvVar4 + 0x54) + -1;
    if (*(int *)((int)pvVar4 + 0x54) < 1) {
      F_0042c880(pvVar4);
      F_00406ad0(pvVar4);
    }
  }
  (*(int *)(gen_frame + 0x26c)) = 0;
  (*(int *)(gen_frame + 0x26c)) = *(int *)((int)this + 0x1bcc) * *(int *)((int)this + 0x1be8);
  (*(int * PTR32 *)(gen_frame + 0x270)) = &(*(int *)(gen_frame + 0x26c));
  (*(char *)(gen_frame + 0x274)) = '\0';
  if ((*(uint *)(gen_frame + 0x10)) <= (*(int *)(gen_frame + 0x18)) + 1U) {
    F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x8)),1);
  }
  uVar5 = (*(int *)(gen_frame + 0x18)) + (*(int *)(gen_frame + 0x14));
  if ((*(uint *)(gen_frame + 0x10)) <= uVar5) {
    uVar5 = uVar5 - (*(uint *)(gen_frame + 0x10));
  }
  if (*(int *)((*(int *)(gen_frame + 0xc)) + uVar5 * 4) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *(uint *)((*(int *)(gen_frame + 0xc)) + uVar5 * 4) = uVar3;
  }
  pvVar4 = *(undefined * PTR32 *)((*(int *)(gen_frame + 0xc)) + uVar5 * 4);
  if (pvVar4 != (undefined *)0x0) {
    F_00492f50(pvVar4,&(*(int *)(gen_frame + 0x26c)));
  }
  (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) + 1;
  if ((((*(int * PTR32 *)(gen_frame + 0x270)) != (int *)0x0) && ((*(char *)(gen_frame + 0x274)) != '\0')) && ((*(char *)(gen_frame + 0x274)) == '\x01')) {
    pvVar4 = (undefined *)*(*(int * PTR32 *)(gen_frame + 0x270));
    *(int *)((int)pvVar4 + 0x54) = *(int *)((int)pvVar4 + 0x54) + -1;
    if (*(int *)((int)pvVar4 + 0x54) < 1) {
      F_0042c880(pvVar4);
      F_00406ad0(pvVar4);
    }
  }
  F_00ab3200(0xf31,&(*(undefined4 * PTR32 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0xc8)));
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x8)));
  (*(int *)(gen_frame + 0x26c)) = 0;
  (*(int *)(gen_frame + 0x26c)) = param_2;
  (*(int * PTR32 *)(gen_frame + 0x270)) = &(*(int *)(gen_frame + 0x26c));
  (*(char *)(gen_frame + 0x274)) = '\0';
  if ((*(uint *)(gen_frame + 0x10)) <= (*(int *)(gen_frame + 0x18)) + 1U) {
    F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x8)),1);
  }
  uVar5 = (*(int *)(gen_frame + 0x18)) + (*(int *)(gen_frame + 0x14));
  if ((*(uint *)(gen_frame + 0x10)) <= uVar5) {
    uVar5 = uVar5 - (*(uint *)(gen_frame + 0x10));
  }
  if (*(int *)((*(int *)(gen_frame + 0xc)) + uVar5 * 4) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *(uint *)((*(int *)(gen_frame + 0xc)) + uVar5 * 4) = uVar3;
  }
  pvVar4 = *(undefined * PTR32 *)((*(int *)(gen_frame + 0xc)) + uVar5 * 4);
  if (pvVar4 != (undefined *)0x0) {
    F_00492f50(pvVar4,&(*(int *)(gen_frame + 0x26c)));
  }
  (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) + 1;
  if ((((*(int * PTR32 *)(gen_frame + 0x270)) != (int *)0x0) && ((*(char *)(gen_frame + 0x274)) != '\0')) && ((*(char *)(gen_frame + 0x274)) == '\x01')) {
    pvVar4 = (undefined *)*(*(int * PTR32 *)(gen_frame + 0x270));
    *(int *)((int)pvVar4 + 0x54) = *(int *)((int)pvVar4 + 0x54) + -1;
    if (*(int *)((int)pvVar4 + 0x54) < 1) {
      F_0042c880(pvVar4);
      F_00406ad0(pvVar4);
    }
  }
  (*(int *)(gen_frame + 0x26c)) = 0;
  (*(int *)(gen_frame + 0x26c)) = *(int *)((int)this + 0x1bcc);
  (*(int * PTR32 *)(gen_frame + 0x270)) = &(*(int *)(gen_frame + 0x26c));
  (*(char *)(gen_frame + 0x274)) = '\0';
  if ((*(uint *)(gen_frame + 0x10)) <= (*(int *)(gen_frame + 0x18)) + 1U) {
    F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x8)),1);
  }
  uVar5 = (*(int *)(gen_frame + 0x18)) + (*(int *)(gen_frame + 0x14));
  if ((*(uint *)(gen_frame + 0x10)) <= uVar5) {
    uVar5 = uVar5 - (*(uint *)(gen_frame + 0x10));
  }
  if (*(int *)((*(int *)(gen_frame + 0xc)) + uVar5 * 4) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *(uint *)((*(int *)(gen_frame + 0xc)) + uVar5 * 4) = uVar3;
  }
  pvVar4 = *(undefined * PTR32 *)((*(int *)(gen_frame + 0xc)) + uVar5 * 4);
  if (pvVar4 != (undefined *)0x0) {
    F_00492f50(pvVar4,&(*(int *)(gen_frame + 0x26c)));
  }
  (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) + 1;
  if ((((*(int * PTR32 *)(gen_frame + 0x270)) != (int *)0x0) && ((*(char *)(gen_frame + 0x274)) != '\0')) && ((*(char *)(gen_frame + 0x274)) == '\x01')) {
    pvVar4 = (undefined *)*(*(int * PTR32 *)(gen_frame + 0x270));
    *(int *)((int)pvVar4 + 0x54) = *(int *)((int)pvVar4 + 0x54) + -1;
    if (*(int *)((int)pvVar4 + 0x54) < 1) {
      F_0042c880(pvVar4);
      F_00406ad0(pvVar4);
    }
  }
  (*(int *)(gen_frame + 0x26c)) = 0;
  (*(int *)(gen_frame + 0x26c)) = *(int *)((int)this + 0x1bcc) * param_2;
  (*(int * PTR32 *)(gen_frame + 0x270)) = &(*(int *)(gen_frame + 0x26c));
  (*(char *)(gen_frame + 0x274)) = '\0';
  if ((*(uint *)(gen_frame + 0x10)) <= (*(int *)(gen_frame + 0x18)) + 1U) {
    F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x8)),1);
  }
  uVar5 = (*(int *)(gen_frame + 0x18)) + (*(int *)(gen_frame + 0x14));
  if ((*(uint *)(gen_frame + 0x10)) <= uVar5) {
    uVar5 = uVar5 - (*(uint *)(gen_frame + 0x10));
  }
  if (*(int *)((*(int *)(gen_frame + 0xc)) + uVar5 * 4) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *(uint *)((*(int *)(gen_frame + 0xc)) + uVar5 * 4) = uVar3;
  }
  pvVar4 = *(undefined * PTR32 *)((*(int *)(gen_frame + 0xc)) + uVar5 * 4);
  if (pvVar4 != (undefined *)0x0) {
    F_00492f50(pvVar4,&(*(int *)(gen_frame + 0x26c)));
  }
  (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) + 1;
  if ((((*(int * PTR32 *)(gen_frame + 0x270)) != (int *)0x0) && ((*(char *)(gen_frame + 0x274)) != '\0')) && ((*(char *)(gen_frame + 0x274)) == '\x01')) {
    pvVar4 = (undefined *)*(*(int * PTR32 *)(gen_frame + 0x270));
    *(int *)((int)pvVar4 + 0x54) = *(int *)((int)pvVar4 + 0x54) + -1;
    if (*(int *)((int)pvVar4 + 0x54) < 1) {
      F_0042c880(pvVar4);
      F_00406ad0(pvVar4);
    }
  }
  F_00ab3200(0xf32,&(*(undefined4 * PTR32 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0x170)));
  puVar13 = ((undefined1 *)(gen_frame + 0xc8));
  puVar11 = ((undefined1 *)(gen_frame + 0x20));
  pvVar4 = (undefined *)F_0042cdb0(((undefined1 *)(gen_frame + 0x218)),((undefined1 *)(gen_frame + 0x11c)),&REFG(undefined, 0x10b6f38));
  uVar5 = F_0042cd30(pvVar4,puVar11,puVar13);
  F_0042ccf0(((undefined1 *)(gen_frame + 0x218)),uVar5);
  F_0042c880(((undefined1 *)(gen_frame + 0x20)));
  F_0042c880(((undefined1 *)(gen_frame + 0x11c)));
  puVar13 = ((undefined1 *)(gen_frame + 0x170));
  puVar11 = ((undefined1 *)(gen_frame + 0x11c));
  pvVar4 = (undefined *)F_0042cdb0(((undefined1 *)(gen_frame + 0x218)),((undefined1 *)(gen_frame + 0x20)),&REFG(undefined, 0x10b6f3c));
  uVar5 = F_0042cd30(pvVar4,puVar11,puVar13);
  F_0042ccf0(((undefined1 *)(gen_frame + 0x218)),uVar5);
  F_0042c880(((undefined1 *)(gen_frame + 0x11c)));
  F_0042c880(((undefined1 *)(gen_frame + 0x20)));
  F_0042b630(((undefined1 *)(gen_frame + 0x1c4)));
  F_00ab0230(0xd49,((undefined1 *)(gen_frame + 0x1c4)));
  F_0042b630(((undefined1 *)(gen_frame + 0x74)));
  F_00ab0230(0xd4a,((undefined1 *)(gen_frame + 0x74)));
  (*(undefined4 *)(gen_frame + 0x278)) = 0;
  (*(undefined4 *)(gen_frame + 0x280)) = 0;
  (*(undefined4 *)(gen_frame + 0x288)) = 0;
  (*(undefined4 *)(gen_frame + 0x290)) = 0;
  uVar5 = F_0042a990(((undefined1 *)(gen_frame + 0x218)));
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x278)),6);
  (*(uint *)(gen_frame + 0x27c)) = uVar5;
  uVar5 = F_0042a990(((undefined1 *)(gen_frame + 0x1c4)));
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x280)),6);
  (*(uint *)(gen_frame + 0x284)) = uVar5;
  uVar5 = F_0042a990(((undefined1 *)(gen_frame + 0x74)));
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x288)),6);
  (*(uint *)(gen_frame + 0x28c)) = uVar5;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x290)),3);
  uVar14 = 4;
  uVar10 = 0;
  ppuVar9 = &REFG(undefined * PTR32, 0x132419c);
  puVar2 = &(*(undefined4 *)(gen_frame + 0x278));
  (*(undefined4 *)(gen_frame + 0x294)) = 0;
  uVar8 = 4;
  uVar7 = 9;
  uVar12 = REFG(undefined4, 0x1324194);
  pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1)));
  REFG(undefined4, 0x13241a4) = F_008668b0(pvVar4,uVar7,uVar8,puVar2,ppuVar9,uVar10,uVar12,uVar14);
  F_00a6e080(&REFG(undefined, 0x14a9e40),0x15,0x32,0);
  this_00 = &(*(uint *)(gen_frame + 0x298));
  iVar6 = 3;
  do {
    this_00 = this_00 + -2;
    F_005a2670(this_00);
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  F_0042c880(((undefined1 *)(gen_frame + 0x74)));
  F_0042c880(((undefined1 *)(gen_frame + 0x1c4)));
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x8)));
  F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x8)),8,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (undefined4 *)0x0;
  F_0042c880(((undefined1 *)(gen_frame + 0x170)));
  F_0042c880(((undefined1 *)(gen_frame + 0xc8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x218)));
  F_00c47745((*(uint *)(gen_frame + 0x298)) ^ (uint)(uint)(gen_frame + 0x29c));
  return 0;
}

/* ref: FUN_00706553 */
unsigned int F_00706553(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x706553u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 in_ecx = (undefined4)gen_a0;
  undefined4 in_ebp = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  F_00c47745(in_ecx);
  return 0;
}

/* ref: FUN_00706560 */
uint F_00706560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x706560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  undefined4 in_ecx;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  if (((param_1 < 1) || (*(int *)((int)this + 0x60) != 0)) || (*(short *)((int)this + 0x54) != 0x28)
     ) {
    REFG(undefined4, 0x13241b4) = 0;
    uVar2 = F_00a3d7c0(&REFG(undefined, 0x14a4230),*(undefined4 *)((int)this + 0x104),
                         (uint)*(ushort *)((int)this + 0x100));
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
    return uVar2;
  }
  in_ecx = *(undefined4 *)(REFG(int, 0x137104c) + 0x10);
  uVar2 = F_00414500(in_ecx,0x17d);
  if (*(int *)(uVar2 + 0x14) != 0) {
    uVar2 = F_00414500(in_ecx,0x17f);
    (*(uint *)(gen_frame + 0x20)) = uVar2;
    uVar2 = F_00414500(in_ecx,0x17e);
    (*(uint *)(gen_frame + 0x24)) = uVar2;
    uVar2 = F_00414500(in_ecx,0x180);
    if ((*(int *)((*(uint *)(gen_frame + 0x24)) + 0x14) == 0) || (*(char *)((int)this + 0x1bfb) == '\0')) {
      if ((*(int *)(uVar2 + 0x14) == 0) || (*(char *)((int)this + 0x1bfc) == '\0')) {
        if ((*(int *)((*(uint *)(gen_frame + 0x20)) + 0x14) == 0) ||
           ((*(char *)((int)this + 0x14d8) == '\0' && (*(char *)((int)this + 0x1bfa) == '\0'))))
        goto LAB_00706754;
        (*(uint *)(gen_frame + 0x24)) = 399;
      }
      else {
        (*(uint *)(gen_frame + 0x24)) = 0x18e;
      }
    }
    else {
      (*(uint *)(gen_frame + 0x24)) = 0x18d;
    }
    *(int *)((int)this + 0x1bcc) = param_1;
    *(undefined4 *)((int)this + 0x1be0) = 2;
    F_0042b630(((undefined1 *)(gen_frame + 0x28)));
    iVar1 = *(int *)((int)this + 0x14c8);
    (*(uint *)(gen_frame + 0x20)) = *(int *)((int)this + 0xfc);
    F_004816e0(((undefined4 *)(gen_frame + 0x8)));
    (*(int *)(gen_frame + 0x7c)) = 0;
    (*(int *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x20));
    (*(int * PTR32 *)(gen_frame + 0x80)) = &(*(int *)(gen_frame + 0x7c));
    (*(undefined1 *)(gen_frame + 0x84)) = 0;
    F_00493bc0(((undefined4 *)(gen_frame + 0x8)),&(*(int *)(gen_frame + 0x7c)));
    F_004917c0(&(*(int *)(gen_frame + 0x7c)));
    (*(int *)(gen_frame + 0x7c)) = 0;
    (*(int *)(gen_frame + 0x7c)) = *(int *)((int)this + 0x1bcc);
    (*(int * PTR32 *)(gen_frame + 0x80)) = &(*(int *)(gen_frame + 0x7c));
    (*(undefined1 *)(gen_frame + 0x84)) = 0;
    F_00493bc0(((undefined4 *)(gen_frame + 0x8)),&(*(int *)(gen_frame + 0x7c)));
    F_004917c0(&(*(int *)(gen_frame + 0x7c)));
    (*(int *)(gen_frame + 0x7c)) = 0;
    (*(int *)(gen_frame + 0x7c)) = *(int *)((int)this + 0x1bcc) * iVar1;
    (*(int * PTR32 *)(gen_frame + 0x80)) = &(*(int *)(gen_frame + 0x7c));
    (*(undefined1 *)(gen_frame + 0x84)) = 0;
    F_00493b50(((undefined4 *)(gen_frame + 0x8)),&(*(int *)(gen_frame + 0x7c)));
    F_004917c0(&(*(int *)(gen_frame + 0x7c)));
    F_00ab3200((*(uint *)(gen_frame + 0x24)),((undefined4 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0x28)));
    F_006c1210(this,((undefined1 *)(gen_frame + 0x28)));
    F_00492c50(((undefined4 *)(gen_frame + 0x8)));
    F_00429760(((undefined4 *)(gen_frame + 0x8))[0],8,0x2c4);
    ((undefined4 *)(gen_frame + 0x8))[0] = 0;
    uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x28)));
    REFG(undefined4, 0x13241b4) = 0;
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
    return (uint)uVar3;
  }
LAB_00706754: ;
  uVar2 = F_006f5130(this,param_1);
  REFG(undefined4, 0x13241b4) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return uVar2;
}

/* ref: Client::Game::Event::ShopEventHandler::vf31 */
uint F_007067b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7067b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 * puVar1;
  int * piVar2;
  undefined * pvVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined4 * PTR32 * ppuVar6;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  if ((((param_1 == 0x697) || (param_1 == 0x699)) || (param_1 == 0x698)) && (2 < (byte)param_3)) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)0x0;
    puVar1 = (undefined4 *)F_004296a0(8,0,0x2c4);
    (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
    }
    *puVar1 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = *param_2;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = &(*(undefined4 *)(gen_frame + 0x1c));
    (*(char *)(gen_frame + 0x24)) = '\0';
    F_00493b50(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x1c)));
    if ((((*(undefined4 * PTR32 *)(gen_frame + 0x20)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0x24)) != '\0')) && ((*(char *)(gen_frame + 0x24)) == '\x01')) {
      pvVar3 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x20));
      *(int *)((int)pvVar3 + 0x54) = *(int *)((int)pvVar3 + 0x54) + -1;
      if (*(int *)((int)pvVar3 + 0x54) < 1) {
        F_0042c880(pvVar3);
        F_00406ad0(pvVar3);
      }
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = &(*(undefined4 *)(gen_frame + 0x1c));
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = param_2[1];
    (*(char *)(gen_frame + 0x24)) = '\0';
    F_00493b50(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x1c)));
    if ((((*(undefined4 * PTR32 *)(gen_frame + 0x20)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0x24)) != '\0')) && ((*(char *)(gen_frame + 0x24)) == '\x01')) {
      pvVar3 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x20));
      *(int *)((int)pvVar3 + 0x54) = *(int *)((int)pvVar3 + 0x54) + -1;
      if (*(int *)((int)pvVar3 + 0x54) < 1) {
        F_0042c880(pvVar3);
        F_00406ad0(pvVar3);
      }
    }
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = param_2[2];
    (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = &(*(undefined4 *)(gen_frame + 0x1c));
    (*(char *)(gen_frame + 0x24)) = '\0';
    F_00493b50(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x1c)));
    if ((((*(undefined4 * PTR32 *)(gen_frame + 0x20)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0x24)) != '\0')) && ((*(char *)(gen_frame + 0x24)) == '\x01')) {
      pvVar3 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x20));
      *(int *)((int)pvVar3 + 0x54) = *(int *)((int)pvVar3 + 0x54) + -1;
      if (*(int *)((int)pvVar3 + 0x54) < 1) {
        F_0042c880(pvVar3);
        F_00406ad0(pvVar3);
      }
    }
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    ppuVar6 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
    pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2)));
    F_0046aa70(pvVar3,param_1,ppuVar6);
    F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
    uVar5 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x4)),8,0x2c4);
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
    return (uint)uVar5;
  }
  uVar4 = F_00704070((undefined *)this,param_1,param_2,param_3);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar4;
}

/* ref: Client::Game::Event::CraftLeveClientEventHandler::vf27 */
uint F_00706970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x706970u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  ushort uVar1;
  ushort uVar2;
  byte bVar3;
  uint uVar4;
  undefined * this_00;
  int * piVar5;
  int iVar6;
  bool bVar7;
  undefined4 uVar8;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  if ((char)param_2 == '\0') {
    if (*param_3 == 1) {
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      uVar4 = F_00a03900(*(undefined * PTR32 *)(this + 0x1d0),&(*(undefined4 *)(gen_frame + 0x18)),1);
    }
    else {
      (*(undefined4 *)(gen_frame + 0x18)) = 1;
      uVar4 = F_00a03900(*(undefined * PTR32 *)(this + 0x1d0),&(*(undefined4 *)(gen_frame + 0x18)),1);
    }
  }
  else {
    if ((char)param_2 == '\x01') {
      bVar7 = *param_3 == 1;
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x18)) + 0)) = bVar7;
      (*(undefined4 *)(gen_frame + 0x18)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x18)), 1, 3),bVar7);
      if (bVar7) {
        F_004816e0(((undefined4 *)(gen_frame + 0x0)));
        uVar1 = *(ushort *)(this + 0x26e);
        uVar2 = *(ushort *)(this + 0x254);
        if ((*(ushort *)(this + 0x252) != 0) && ((uint)uVar1 + (uint)uVar2 != 0)) {
          (*(uint *)(gen_frame + 0x1c)) = 0;
          (*(uint *)(gen_frame + 0x1c)) = (uint)*(ushort *)(this + 0x252);
          (*(uint * PTR32 *)(gen_frame + 0x20)) = &(*(uint *)(gen_frame + 0x1c));
          (*(undefined1 *)(gen_frame + 0x24)) = 0;
          F_00493b50(((undefined4 *)(gen_frame + 0x0)),&(*(uint *)(gen_frame + 0x1c)));
          F_004917c0(&(*(uint *)(gen_frame + 0x1c)));
          (*(uint *)(gen_frame + 0x1c)) = 0;
          (*(uint *)(gen_frame + 0x1c)) = (uint)uVar1 + (uint)uVar2;
          (*(uint * PTR32 *)(gen_frame + 0x20)) = &(*(uint *)(gen_frame + 0x1c));
          (*(undefined1 *)(gen_frame + 0x24)) = 0;
          F_00493bc0(((undefined4 *)(gen_frame + 0x0)),&(*(uint *)(gen_frame + 0x1c)));
          F_004917c0(&(*(uint *)(gen_frame + 0x1c)));
          F_006c5ef0(0x554,((undefined4 *)(gen_frame + 0x0)));
        }
        piVar5 = (int *)F_00424750(REFG(undefined4, 0x137104c));
        iVar6 = *(int *)(this + 0x264) + *(int *)(this + 0x248);
        if (iVar6 != 0) {
          uVar8 = 0x645;
          this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar5 + 0x28))(piVar5)));
          F_0046a6b0(this_00,uVar8,iVar6);
        }
        F_00492c50(((undefined4 *)(gen_frame + 0x0)));
        F_00429760(((undefined4 *)(gen_frame + 0x0))[0],8,0x2c4);
      }
    }
    else {
      piVar5 = param_3;
      if ((char)param_2 != '\x02') goto LAB_00706af3;
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x18)) + 0)) = *param_3 == 1;
      (*(undefined4 *)(gen_frame + 0x18)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x18)), 1, 3),*param_3 == 1);
    }
    uVar4 = F_00a03ae0(*(undefined * PTR32 *)(this + 0x1d0),(*(undefined4 *)(gen_frame + 0x18)),0,0);
  }
  piVar5 = (int *)0x1;
  if (uVar4 != 1) {
    bVar3 = F_00a02270(uVar4);
    if (bVar3 != 0) {
      *(uint *)(this + 0x60) = uVar4;
    }
    piVar5 = (int *)F_006f4000(this);
  }
LAB_00706af3: ;
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return (uint)piVar5;
}

/* ref: FUN_00706b10 */
uint F_00706b10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x706b10u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x130];
  uint * puVar1;
  undefined * this_00;
  undefined2 uVar2;
  uint * puVar3;
  uint uVar4;
  int iVar5;
  uint * puVar6;
  undefined4 uVar7;
  
  puVar1 = (*(uint * PTR32 *)&gen_args[2]);
  (*(uint *)(gen_frame + 0x128)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x12c);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  puVar3 = (uint *)F_007445f0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x344))),((undefined1 *)(gen_frame + 0x4)),&(*(undefined4 *)&gen_args[1]));
  uVar4 = *puVar3;
  if (uVar4 == *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x348)))) {
    ((uint *)(gen_frame + 0x9c))[10] = puVar1[7];
    (*(undefined2 *)(gen_frame + 0xc8)) = (short)puVar1[0x14];
    F_0042cc20(((undefined1 *)(gen_frame + 0xcc)),(*puVar1 & 0xffffff) + (int)puVar1,REFG(undefined4, 0x108cc50));
    uVar2 = (*(undefined2 *)(gen_frame + 0xc8));
    ((uint *)(gen_frame + 0x9c))[0] = 0;
    ((uint *)(gen_frame + 0x9c))[1] = 0;
    ((uint *)(gen_frame + 0x9c))[2] = 0;
    ((uint *)(gen_frame + 0x9c))[3] = 0;
    ((uint *)(gen_frame + 0x9c))[4] = 0;
    ((uint *)(gen_frame + 0x9c))[5] = 0;
    ((uint *)(gen_frame + 0x9c))[6] = 0;
    ((uint *)(gen_frame + 0x9c))[7] = 0;
    ((uint *)(gen_frame + 0x9c))[8] = 0;
    ((uint *)(gen_frame + 0x9c))[9] = 0;
    (*(undefined4 *)(gen_frame + 0x120)) = (*(undefined4 *)&gen_args[3]);
    ((undefined2 *)(gen_frame + 0xc))[0] = (undefined2)(*(undefined4 *)&gen_args[1]);
    (*(undefined1 *)(gen_frame + 0x124)) = 0;
    puVar3 = ((uint *)(gen_frame + 0x9c));
    puVar6 = ((uint *)(gen_frame + 0x10));
    for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    (*(uint *)(gen_frame + 0x38)) = ((uint *)(gen_frame + 0x9c))[10];
    (*(undefined2 *)(gen_frame + 0x3c)) = uVar2;
    F_0042cbc0(((undefined1 *)(gen_frame + 0x40)),((undefined1 *)(gen_frame + 0xcc)));
    this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
    uVar7 = 0;
    (*(undefined4 *)(gen_frame + 0x94)) = (*(undefined4 *)(gen_frame + 0x120));
    (*(undefined1 *)(gen_frame + 0x98)) = (*(undefined1 *)(gen_frame + 0x124));
    uVar4 = F_0074bea0((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x344),((undefined2 *)(gen_frame + 0xc)));
    F_007505b0((undefined *)((int)this_00 + 0x344),((undefined1 *)(gen_frame + 0x0)),uVar4,uVar7);
    F_0042c880(((undefined1 *)(gen_frame + 0x40)));
    F_0042c880(((undefined1 *)(gen_frame + 0xcc)));
    uVar4 = F_00703550(this_00,puVar1[0x12],(*(undefined4 *)&gen_args[1]));
  }
  F_00c47745((*(uint *)(gen_frame + 0x128)) ^ (uint)(uint)(gen_frame + 0x12c));
  return uVar4;
}

/* ref: FUN_00706c70 */
uint F_00706c70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x706c70u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int * piVar1;
  int * piVar2;
  undefined * pvVar3;
  uint * puVar4;
  byte bVar5;
  undefined1 uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  uint * puVar10;
  int * PTR32 * ppiVar11;
  undefined4 * puVar12;
  
  puVar10 = REFG(undefined4, 0x1379694);
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  (*(uint * PTR32 *)(gen_frame + 0x4c)) = REFG(undefined4, 0x1379694);
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  if ((piVar1 != (int *)0x0) && (puVar10 != (uint *)0x0)) {
    (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),(char)(param_2 >> 8));
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x48)) + 0)) = (byte)param_3 & 1;
    (*(uint *)(gen_frame + 0x48)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x48)), 1, 3),(byte)param_3) & 0xffffff01;
    bVar5 = (byte)(param_3 >> 1);
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x44)) + 0)) = bVar5 & 1;
    (*(uint *)(gen_frame + 0x44)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x44)), 1, 3),bVar5) & 0xffffff01;
    (*(uint *)(gen_frame + 0xc)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0xc)), 1, 3),(char)(param_3 >> 2)) & 0xffffff01;
    bVar5 = (byte)(param_3 >> 3);
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x40)) + 0)) = bVar5 & 1;
    (*(uint *)(gen_frame + 0x40)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x40)), 1, 3),bVar5) & 0xffffff01;
    (*(byte *)(gen_frame + 0x5b)) = (byte)(param_3 >> 8);
    uVar7 = param_2 >> 0x10;
    (*(uint *)(gen_frame + 0x50)) = param_1;
    uVar6 = (undefined1)(param_3 >> 0x10);
    (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x54)) + 0)) = uVar6;
    (*(undefined * PTR32 *)(gen_frame + 0x54)) = ((undefined *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(undefined * PTR32 *)(gen_frame + 0x54)), 1, 3),uVar6)));
    if ((param_3 >> 4 & 1) != 0) {
      (*(uint *)(gen_frame + 0x50)) = param_1 + 1000000;
    }
    ((code *)*(gen_code32 *)(*piVar1 + 0xd0))
              (piVar1,(*(uint *)(gen_frame + 0x50)),uVar7,(*(undefined * PTR32 *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x8)),0,(*(uint *)(gen_frame + 0x48)),(*(uint *)(gen_frame + 0x44)),(*(uint *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x40)));
    (*(int * PTR32 *)(gen_frame + 0x10)) = (int *)0x0;
    piVar2 = (int *)F_004296a0(8,0,0x2c4);
    (*(int * PTR32 *)(gen_frame + 0x10)) = piVar2;
    if (piVar2 != (int *)0x0) {
      *piVar2 = 0;
      piVar2[1] = 0;
    }
    *piVar2 = (int)&(*(int * PTR32 *)(gen_frame + 0x10));
    (*(uint *)(gen_frame + 0x5c)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(uint *)(gen_frame + 0x5c)) = (*(uint *)(gen_frame + 0x50));
    (*(uint * PTR32 *)(gen_frame + 0x60)) = &(*(uint *)(gen_frame + 0x5c));
    (*(char *)(gen_frame + 0x64)) = '\0';
    F_00493b50(&(*(int * PTR32 *)(gen_frame + 0x10)),&(*(uint *)(gen_frame + 0x5c)));
    if ((((*(uint * PTR32 *)(gen_frame + 0x60)) != (uint *)0x0) && ((*(char *)(gen_frame + 0x64)) != '\0')) && ((*(char *)(gen_frame + 0x64)) == '\x01')) {
      pvVar3 = (undefined *)*(*(uint * PTR32 *)(gen_frame + 0x60));
      *(int *)((int)pvVar3 + 0x54) = *(int *)((int)pvVar3 + 0x54) + -1;
      (*(undefined * PTR32 *)(gen_frame + 0x54)) = pvVar3;
      if (*(int *)((int)pvVar3 + 0x54) < 1) {
        F_0042c880(pvVar3);
        F_00406ad0((*(undefined * PTR32 *)(gen_frame + 0x54)));
      }
    }
    (*(uint *)(gen_frame + 0x5c)) = 0;
    (*(char *)(gen_frame + 0x64)) = '\0';
    (*(undefined * PTR32 *)(gen_frame + 0x54)) = (undefined *)(uVar7 % 10);
    (*(uint *)(gen_frame + 0x5c)) = uVar7 / 10;
    (*(uint * PTR32 *)(gen_frame + 0x60)) = &(*(uint *)(gen_frame + 0x5c));
    F_00493b50(&(*(int * PTR32 *)(gen_frame + 0x10)),&(*(uint *)(gen_frame + 0x5c)));
    if ((((*(uint * PTR32 *)(gen_frame + 0x60)) != (uint *)0x0) && ((*(char *)(gen_frame + 0x64)) != '\0')) && ((*(char *)(gen_frame + 0x64)) == '\x01')) {
      pvVar3 = (undefined *)*(*(uint * PTR32 *)(gen_frame + 0x60));
      *(int *)((int)pvVar3 + 0x54) = *(int *)((int)pvVar3 + 0x54) + -1;
      if (*(int *)((int)pvVar3 + 0x54) < 1) {
        F_0042c880(pvVar3);
        F_00406ad0(pvVar3);
      }
    }
    (*(uint *)(gen_frame + 0x5c)) = 0;
    (*(uint *)(gen_frame + 0x5c)) = (uint)(*(undefined * PTR32 *)(gen_frame + 0x54));
    (*(uint * PTR32 *)(gen_frame + 0x60)) = &(*(uint *)(gen_frame + 0x5c));
    (*(char *)(gen_frame + 0x64)) = '\0';
    F_00493b50(&(*(int * PTR32 *)(gen_frame + 0x10)),&(*(uint *)(gen_frame + 0x5c)));
    if ((((*(uint * PTR32 *)(gen_frame + 0x60)) != (uint *)0x0) && ((*(char *)(gen_frame + 0x64)) != '\0')) && ((*(char *)(gen_frame + 0x64)) == '\x01')) {
      pvVar3 = (undefined *)*(*(uint * PTR32 *)(gen_frame + 0x60));
      *(int *)((int)pvVar3 + 0x54) = *(int *)((int)pvVar3 + 0x54) + -1;
      if (*(int *)((int)pvVar3 + 0x54) < 1) {
        F_0042c880(pvVar3);
        F_00406ad0(pvVar3);
      }
    }
    puVar10 = (*(uint * PTR32 *)(gen_frame + 0x4c));
    ppiVar11 = &(*(int * PTR32 *)(gen_frame + 0x10));
    uVar9 = 0xdb8;
    puVar4 = (*(uint * PTR32 *)(gen_frame + 0x4c));
    pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
    F_0046ab30(pvVar3,uVar9,puVar4,ppiVar11);
    if ((byte)(*(uint *)(gen_frame + 0x44)) != '\0') {
      F_004816e0(((undefined4 *)(gen_frame + 0x28)));
      (*(uint *)(gen_frame + 0x5c)) = 0;
      (*(uint *)(gen_frame + 0x5c)) = (*(uint *)(gen_frame + 0x50));
      (*(uint * PTR32 *)(gen_frame + 0x60)) = &(*(uint *)(gen_frame + 0x5c));
      (*(char *)(gen_frame + 0x64)) = '\0';
      F_00493b50(((undefined4 *)(gen_frame + 0x28)),&(*(uint *)(gen_frame + 0x5c)));
      F_004917c0(&(*(uint *)(gen_frame + 0x5c)));
      puVar12 = ((undefined4 *)(gen_frame + 0x28));
      uVar9 = 0x45a;
      puVar4 = puVar10;
      pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
      F_0046ab30(pvVar3,uVar9,puVar4,puVar12);
      F_00492c50(((undefined4 *)(gen_frame + 0x28)));
      F_00429760(((undefined4 *)(gen_frame + 0x28))[0],8,0x2c4);
    }
    if ((byte)(*(uint *)(gen_frame + 0x40)) != '\0') {
      puVar4 = (uint *)F_00ab3080((uint)(*(byte *)(gen_frame + 0x5b)));
      (*(uint * PTR32 *)(gen_frame + 0x4c)) = puVar4;
      if (puVar4 != (uint *)0x0) {
        F_004816e0(((undefined4 *)(gen_frame + 0x28)));
        (*(uint *)(gen_frame + 0x5c)) = 0;
        (*(uint *)(gen_frame + 0x5c)) = *(*(uint * PTR32 *)(gen_frame + 0x4c));
        (*(uint * PTR32 *)(gen_frame + 0x60)) = &(*(uint *)(gen_frame + 0x5c));
        (*(char *)(gen_frame + 0x64)) = '\0';
        F_00493bc0(((undefined4 *)(gen_frame + 0x28)),&(*(uint *)(gen_frame + 0x5c)));
        F_004917c0(&(*(uint *)(gen_frame + 0x5c)));
        puVar12 = ((undefined4 *)(gen_frame + 0x28));
        uVar9 = 0xdba;
        puVar4 = puVar10;
        pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
        F_0046ab30(pvVar3,uVar9,puVar4,puVar12);
        F_00492c50(((undefined4 *)(gen_frame + 0x28)));
        F_00429760(((undefined4 *)(gen_frame + 0x28))[0],8,0x2c4);
      }
    }
    if ((byte)(*(uint *)(gen_frame + 0x48)) != '\0') {
      F_004816e0(((undefined4 *)(gen_frame + 0x28)));
      (*(uint *)(gen_frame + 0x5c)) = 0;
      (*(uint *)(gen_frame + 0x5c)) = (*(uint *)(gen_frame + 0x50));
      (*(uint * PTR32 *)(gen_frame + 0x60)) = &(*(uint *)(gen_frame + 0x5c));
      (*(char *)(gen_frame + 0x64)) = '\0';
      F_00493b50(((undefined4 *)(gen_frame + 0x28)),&(*(uint *)(gen_frame + 0x5c)));
      F_004917c0(&(*(uint *)(gen_frame + 0x5c)));
      puVar12 = ((undefined4 *)(gen_frame + 0x28));
      uVar9 = 0xdb6;
      pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
      F_0046ab30(pvVar3,uVar9,puVar10,puVar12);
      F_00492c50(((undefined4 *)(gen_frame + 0x28)));
      F_00429760(((undefined4 *)(gen_frame + 0x28))[0],8,0x2c4);
    }
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x10)));
    uVar8 = F_00429760((*(int * PTR32 *)(gen_frame + 0x10)),8,0x2c4);
    piVar1 = (int *)uVar8;
  }
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return (uint)piVar1;
}

/* ref: FUN_00706ff0 */
uint F_00706ff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x706ff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  undefined4 * puVar2;
  
  F_006e44c0(this,param_1);
  *(undefined * PTR32 * PTR32 *)((int)this + 0xf8) =
       (*(undefined * PTR32 (*)[2])REFP(0x10b815c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[144])REFP(0x10bd494));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xf8) = (*(undefined * PTR32 (*)[2])REFP(0x10bd484));
  *(undefined4 *)((int)this + 0x104) = 0;
  uVar1 = F_004296a0(0x24,0,800);
  *(uint *)((int)this + 0x100) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x100) + 4))) = *(int *)((int)this + 0x100);
  *((int *)GEN_TOP((*(int *)((int)this + 0x100) + 8))) = *(int *)((int)this + 0x100);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x100) + 0x20))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x100) + 0x21))) = 1;
  *(undefined1 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined1 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x124) = 0xffffffff;
  *(undefined1 *)((int)this + 0x128) = 0;
  if (param_1 == 0x160001) {
    *(undefined1 *)((int)this + 0x10c) = 1;
  }
  else if (param_1 == 0x160002) {
    *(undefined1 *)((int)this + 0x10c) = 2;
  }
  else if (param_1 == 0x160003) {
    *(undefined1 *)((int)this + 0x10c) = 3;
  }
  puVar2 = (undefined4 *)F_00ab4070(param_1);
  *(undefined4 *)((int)this + 0x110) = *puVar2;
  uVar1 = F_00ab4070(param_1);
  *(undefined4 *)((int)this + 0x114) = *(undefined4 *)(uVar1 + 4);
  return (uint)this;
}

/* ref: FUN_007070f0 */
uint F_007070f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7070f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x1c0];
  int iVar1;
  int * piVar2;
  undefined4 * puVar3;
  uint uVar4;
  undefined * pvVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined * PTR32 * ppuVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  
  (*(uint *)(gen_frame + 0x1b8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1bc);
  *(undefined * PTR32 *)&REFG(undefined, 0x1324200) = this;
  F_0042b630(((undefined1 *)(gen_frame + 0x158)));
  iVar1 = *(int *)((int)this + 0x124);
  piVar2 = (int *)F_0075ae90((undefined *)((int)this + 0xfc),(int)this + 0x10d);
  F_00720120(((undefined1 *)(gen_frame + 0x18)),iVar1 * 0x140 + *piVar2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = (undefined4 *)0x0;
  puVar3 = (undefined4 *)F_004296a0(8,0,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = puVar3;
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = 0;
    puVar3[1] = 0;
  }
  *puVar3 = &(*(undefined4 * PTR32 *)(gen_frame + 0x0));
  (*(uint * PTR32 *)(gen_frame + 0x1b0)) = &(*(uint *)(gen_frame + 0x1ac));
  (*(uint *)(gen_frame + 0x1ac)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(uint *)(gen_frame + 0x1ac)) = (*(uint *)(gen_frame + 0x1c));
  (*(char *)(gen_frame + 0x1b4)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)),1);
  uVar6 = (*(int *)(gen_frame + 0x10)) + (*(int *)(gen_frame + 0xc));
  if ((*(uint *)(gen_frame + 0x8)) <= uVar6) {
    uVar6 = uVar6 - (*(uint *)(gen_frame + 0x8));
  }
  if (*(int *)((*(int *)(gen_frame + 0x4)) + uVar6 * 4) == 0) {
    uVar4 = F_004296a0(0xc,0,0x2c4);
    *(uint *)((*(int *)(gen_frame + 0x4)) + uVar6 * 4) = uVar4;
  }
  pvVar5 = *(undefined * PTR32 *)((*(int *)(gen_frame + 0x4)) + uVar6 * 4);
  if (pvVar5 != (undefined *)0x0) {
    F_00492f50(pvVar5,&(*(uint *)(gen_frame + 0x1ac)));
  }
  (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 1;
  if ((((*(uint * PTR32 *)(gen_frame + 0x1b0)) != (uint *)0x0) && ((*(char *)(gen_frame + 0x1b4)) != '\0')) && ((*(char *)(gen_frame + 0x1b4)) == '\x01')) {
    pvVar5 = (undefined *)*(*(uint * PTR32 *)(gen_frame + 0x1b0));
    *(int *)((int)pvVar5 + 0x54) = *(int *)((int)pvVar5 + 0x54) + -1;
    if (*(int *)((int)pvVar5 + 0x54) < 1) {
      F_0042c880(pvVar5);
      F_00406ad0(pvVar5);
    }
  }
  (*(uint *)(gen_frame + 0x1ac)) = 0;
  (*(uint *)(gen_frame + 0x1ac)) = (uint)(*(byte *)(gen_frame + 0x29));
  (*(uint * PTR32 *)(gen_frame + 0x1b0)) = &(*(uint *)(gen_frame + 0x1ac));
  (*(char *)(gen_frame + 0x1b4)) = '\0';
  if ((*(uint *)(gen_frame + 0x8)) <= (*(int *)(gen_frame + 0x10)) + 1U) {
    F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)),1);
  }
  uVar6 = (*(int *)(gen_frame + 0x10)) + (*(int *)(gen_frame + 0xc));
  if ((*(uint *)(gen_frame + 0x8)) <= uVar6) {
    uVar6 = uVar6 - (*(uint *)(gen_frame + 0x8));
  }
  if (*(int *)((*(int *)(gen_frame + 0x4)) + uVar6 * 4) == 0) {
    uVar4 = F_004296a0(0xc,0,0x2c4);
    *(uint *)((*(int *)(gen_frame + 0x4)) + uVar6 * 4) = uVar4;
  }
  pvVar5 = *(undefined * PTR32 *)((*(int *)(gen_frame + 0x4)) + uVar6 * 4);
  if (pvVar5 != (undefined *)0x0) {
    F_00492f50(pvVar5,&(*(uint *)(gen_frame + 0x1ac)));
  }
  (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 1;
  if ((((*(uint * PTR32 *)(gen_frame + 0x1b0)) != (uint *)0x0) && ((*(char *)(gen_frame + 0x1b4)) != '\0')) && ((*(char *)(gen_frame + 0x1b4)) == '\x01')) {
    pvVar5 = (undefined *)*(*(uint * PTR32 *)(gen_frame + 0x1b0));
    *(int *)((int)pvVar5 + 0x54) = *(int *)((int)pvVar5 + 0x54) + -1;
    if (*(int *)((int)pvVar5 + 0x54) < 1) {
      F_0042c880(pvVar5);
      F_00406ad0(pvVar5);
    }
  }
  (*(uint *)(gen_frame + 0x1ac)) = 0;
  (*(uint *)(gen_frame + 0x1ac)) = (*(uint *)(gen_frame + 0x24));
  (*(uint * PTR32 *)(gen_frame + 0x1b0)) = &(*(uint *)(gen_frame + 0x1ac));
  (*(char *)(gen_frame + 0x1b4)) = '\0';
  if ((*(uint *)(gen_frame + 0x8)) <= (*(int *)(gen_frame + 0x10)) + 1U) {
    F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)),1);
  }
  uVar6 = (*(int *)(gen_frame + 0x10)) + (*(int *)(gen_frame + 0xc));
  if ((*(uint *)(gen_frame + 0x8)) <= uVar6) {
    uVar6 = uVar6 - (*(uint *)(gen_frame + 0x8));
  }
  if (*(int *)((*(int *)(gen_frame + 0x4)) + uVar6 * 4) == 0) {
    uVar4 = F_004296a0(0xc,0,0x2c4);
    *(uint *)((*(int *)(gen_frame + 0x4)) + uVar6 * 4) = uVar4;
  }
  pvVar5 = *(undefined * PTR32 *)((*(int *)(gen_frame + 0x4)) + uVar6 * 4);
  if (pvVar5 != (undefined *)0x0) {
    F_00492f50(pvVar5,&(*(uint *)(gen_frame + 0x1ac)));
  }
  (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 1;
  if ((((*(uint * PTR32 *)(gen_frame + 0x1b0)) != (uint *)0x0) && ((*(char *)(gen_frame + 0x1b4)) != '\0')) && ((*(char *)(gen_frame + 0x1b4)) == '\x01')) {
    pvVar5 = (undefined *)*(*(uint * PTR32 *)(gen_frame + 0x1b0));
    *(int *)((int)pvVar5 + 0x54) = *(int *)((int)pvVar5 + 0x54) + -1;
    if (*(int *)((int)pvVar5 + 0x54) < 1) {
      F_0042c880(pvVar5);
      F_00406ad0(pvVar5);
    }
  }
  F_00ab3200(0xcda,&(*(undefined4 * PTR32 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x158)));
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar21 = 0;
  uVar20 = 0;
  uVar19 = 1;
  uVar18 = 0;
  uVar17 = 0;
  uVar16 = 0;
  uVar15 = 0;
  uVar14 = 4;
  uVar12 = 0;
  uVar11 = 0;
  ppuVar10 = &REFG(undefined * PTR32, 0x13241fc);
  uVar9 = 0;
  uVar8 = 0;
  uVar13 = REFG(undefined4, 0x13241f4);
  uVar6 = F_0042a990(((undefined1 *)(gen_frame + 0x158)));
  pvVar5 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
  REFG(undefined4, 0x1324204) = F_00866a60(pvVar5,uVar6,uVar8,uVar9,ppuVar10,uVar11,uVar12,uVar13,uVar14,uVar15,
                              uVar16,uVar17,uVar18,uVar19,uVar20,uVar21);
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)));
  F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = (undefined4 *)0x0;
  F_0042c880(((undefined1 *)(gen_frame + 0x34)));
  uVar7 = F_0042c880(((undefined1 *)(gen_frame + 0x158)));
  F_00c47745((*(uint *)(gen_frame + 0x1b8)) ^ (uint)(uint)(gen_frame + 0x1bc));
  return (uint)uVar7;
}

/* ref: Client::Game::Event::GCShopEventHandler::vf31 */
uint F_00707450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x707450u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 * puVar1;
  int * piVar2;
  undefined * pvVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined4 * PTR32 * ppuVar7;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  if ((param_1 == 0x697) && (2 < (byte)param_3)) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)0x0;
    puVar1 = (undefined4 *)F_004296a0(8,0,0x2c4);
    (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
    }
    *puVar1 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = *param_2;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = &(*(undefined4 *)(gen_frame + 0x1c));
    (*(char *)(gen_frame + 0x24)) = '\0';
    F_00493b50(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x1c)));
    if ((((*(undefined4 * PTR32 *)(gen_frame + 0x20)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0x24)) != '\0')) && ((*(char *)(gen_frame + 0x24)) == '\x01')) {
      pvVar3 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x20));
      *(int *)((int)pvVar3 + 0x54) = *(int *)((int)pvVar3 + 0x54) + -1;
      if (*(int *)((int)pvVar3 + 0x54) < 1) {
        F_0042c880(pvVar3);
        F_00406ad0(pvVar3);
      }
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = &(*(undefined4 *)(gen_frame + 0x1c));
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = param_2[1];
    (*(char *)(gen_frame + 0x24)) = '\0';
    F_00493b50(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x1c)));
    if ((((*(undefined4 * PTR32 *)(gen_frame + 0x20)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0x24)) != '\0')) && ((*(char *)(gen_frame + 0x24)) == '\x01')) {
      pvVar3 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x20));
      *(int *)((int)pvVar3 + 0x54) = *(int *)((int)pvVar3 + 0x54) + -1;
      if (*(int *)((int)pvVar3 + 0x54) < 1) {
        F_0042c880(pvVar3);
        F_00406ad0(pvVar3);
      }
    }
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = param_2[2];
    (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = &(*(undefined4 *)(gen_frame + 0x1c));
    (*(char *)(gen_frame + 0x24)) = '\0';
    F_00493b50(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x1c)));
    if ((((*(undefined4 * PTR32 *)(gen_frame + 0x20)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0x24)) != '\0')) && ((*(char *)(gen_frame + 0x24)) == '\x01')) {
      pvVar3 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x20));
      *(int *)((int)pvVar3 + 0x54) = *(int *)((int)pvVar3 + 0x54) + -1;
      if (*(int *)((int)pvVar3 + 0x54) < 1) {
        F_0042c880(pvVar3);
        F_00406ad0(pvVar3);
      }
    }
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    ppuVar7 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
    uVar6 = 0x697;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2)));
    F_0046aa70(pvVar3,uVar6,ppuVar7);
    F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
    uVar5 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x4)),8,0x2c4);
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
    return (uint)uVar5;
  }
  uVar4 = F_00704070((undefined *)this,param_1,param_2,param_3);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar4;
}

/* ref: FUN_00707610 */
uint F_00707610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x707610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  undefined * pvVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  int * PTR32 * ppiVar5;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  (*(int * PTR32 *)(gen_frame + 0x18)) = piVar1;
  (*(int * PTR32 *)(gen_frame + 0x0)) = (int *)0x0;
  piVar1 = (int *)F_004296a0(8,0,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0x0)) = piVar1;
  if (piVar1 != (int *)0x0) {
    *piVar1 = 0;
    piVar1[1] = 0;
  }
  *piVar1 = (int)&(*(int * PTR32 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  if (param_1 == 0x18) {
    uVar3 = 0x794;
  }
  else if (param_1 == 8) {
    if (*(int *)((int)this + 0x198) == 2) {
      uVar3 = 0x795;
    }
    else {
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      uVar3 = 0x796;
      (*(undefined4 *)(gen_frame + 0x1c)) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x19c) * 0x1b0 + *(int *)((int)this + 0xf8) + 0xec)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = &(*(undefined4 *)(gen_frame + 0x1c));
      (*(undefined1 *)(gen_frame + 0x24)) = 0;
      F_00493bc0(&(*(int * PTR32 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x1c)));
      F_004917c0(&(*(undefined4 *)(gen_frame + 0x1c)));
      if ((*(int *)(gen_frame + 0x10)) != 0) {
        ppiVar5 = &(*(int * PTR32 *)(gen_frame + 0x0));
        uVar3 = 0x796;
        pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x18)) + 0x28))((*(int * PTR32 *)(gen_frame + 0x18)))));
        F_0046aa70(pvVar2,uVar3,ppiVar5);
        goto LAB_0070768b;
      }
    }
  }
  else if (param_1 == 0x1b) {
    uVar3 = 0x797;
  }
  else {
    if (param_1 != 0x1c) goto LAB_0070768b;
    uVar3 = 0x798;
  }
  pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x18)) + 0x28))((*(int * PTR32 *)(gen_frame + 0x18)))));
  F_0046a630(pvVar2,uVar3);
LAB_0070768b: ;
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x0)));
  uVar4 = F_00429760((*(int * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return (uint)uVar4;
}

/* ref: Client::Game::Event::LeveDirector::vf153 */
uint F_00707760(unsigned int gen_a0)
{
  GEN_ENTER(0x707760u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  uint uVar3;
  undefined * this_00;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar2;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  uVar3 = *(uint *)(this + 0x2e8) | *(uint *)(this + 0x2ec);
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = this;
  if ((uVar3 != 0) && ((byte)this[0x1dc] < 0xfe)) {
    this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
    if (this_00 == (undefined *)0x0) {
      uVar7 = F_0046ff40();
      uVar3 = (uint)(uVar7 / 1000);
    }
    else {
      uVar3 = F_00975680(this_00);
    }
    uVar6 = *(uint *)(this + 0x2f0) - uVar3;
    iVar5 = *(int *)(this + 0x2f4) - (uint)(*(uint *)(this + 0x2f0) < uVar3);
    if ((iVar5 < 1) && (iVar5 < 0)) {
      uVar6 = 0;
      iVar5 = 0;
    }
    lVar2 = (longlong)CONCAT44(iVar5,uVar6) / 0x3c;
    uVar1 = (uint)lVar2;
    iVar4 = (int)((ulonglong)lVar2 >> 0x20);
    (*(longlong *)(gen_frame + 0x24)) = lVar2;
    uVar3 = uVar1;
    if (((-1 < iVar5) &&
        ((((0 < iVar5 || (uVar6 != 0)) &&
          (uVar6 + uVar1 * -0x3c == 0 &&
           iVar5 - ((((iVar4 << 4 | uVar1 >> 0x1c) - iVar4) - (uint)(uVar1 * 0x10 < uVar1)) * 4 |
                   uVar1 * 0xf >> 0x1e) == (uint)(uVar6 < uVar1 * 0x3c))) &&
         (iVar4 <= *(int *)((*(undefined * PTR32 *)(gen_frame + 0x20)) + 0x344))))) &&
       ((iVar4 < *(int *)((*(undefined * PTR32 *)(gen_frame + 0x20)) + 0x344) || (uVar3 = *(uint *)((*(undefined * PTR32 *)(gen_frame + 0x20)) + 0x340), uVar1 < uVar3))
       )) {
      uVar3 = (uint)(*(longlong *)((*(undefined * PTR32 *)(gen_frame + 0x20)) + 0x338) / 2);
      if (lVar2 <= *(longlong *)((*(undefined * PTR32 *)(gen_frame + 0x20)) + 0x338) / 2) {
        if (((lVar2 != 0x1e) && (lVar2 != 10)) && (lVar2 != 5)) {
          if (lVar2 == 3) {
            if (-1 < *(int *)((*(undefined * PTR32 *)(gen_frame + 0x20)) + 0x33c)) {
              if (0 < *(int *)((*(undefined * PTR32 *)(gen_frame + 0x20)) + 0x33c)) goto LAB_0070792a;
              if (9 < *(uint *)((*(undefined * PTR32 *)(gen_frame + 0x20)) + 0x338)) {
                F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
                return uVar3;
              }
            }
          }
          else if (lVar2 != 1) goto LAB_0070792a;
        }
        *(longlong *)((*(undefined * PTR32 *)(gen_frame + 0x20)) + 0x340) = lVar2;
        F_004816e0(((undefined1 *)(gen_frame + 0x8)));
        (*(undefined4 *)(gen_frame + 0x2c)) = 0;
        (*(undefined4 *)(gen_frame + 0x2c)) = (undefined4)(*(longlong *)(gen_frame + 0x24));
        (*(undefined4 * PTR32 *)(gen_frame + 0x30)) = &(*(undefined4 *)(gen_frame + 0x2c));
        (*(undefined1 *)(gen_frame + 0x34)) = 0;
        F_00493b50(((undefined1 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x2c)));
        F_004917c0(&(*(undefined4 *)(gen_frame + 0x2c)));
        F_006c5ef0(0x5fc,((undefined1 *)(gen_frame + 0x8)));
        uVar3 = F_00493180(((undefined1 *)(gen_frame + 0x8)));
      }
    }
  }
LAB_0070792a: ;
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar3;
}

/* ref: Client::Game::Event::BattleLeveDirector::vf155 */
uint F_00707940(unsigned int gen_a0)
{
  GEN_ENTER(0x707940u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x7d0];
  longlong lVar1;
  undefined1 BVar2;
  double dVar3;
  byte bVar4;
  uint uVar5;
  undefined * pBVar6;
  undefined3 extraout_var = 0;
  uint * puVar7;
  uint uVar8;
  undefined * pBVar9;
  int iVar10;
  uint uVar11;
  undefined * pBVar12;
  undefined1 * puVar13;
  int iVar14;
  float10 fVar15;
  float10 fVar16;
  ulonglong uVar17;
  undefined4 uVar18;
  
  (*(uint *)(gen_frame + 0x7c8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7cc);
  uVar18 = 0;
  uVar5 = F_0042a990(this + 0x16c);
  F_00a024d0(*(undefined * PTR32 *)(this + 0xf8),"OnSynchronize",uVar5,uVar18);
  pBVar6 = ((undefined *)GEN_TOP((*(int *)(this + 0x4e8) + -1)));
  switch((unsigned int)(uintptr_t)(pBVar6)) {
  case (undefined *)0x0: ;
    pBVar9 = ((undefined *)GEN_TOP(((*(int *)(this + 0x2fc) - *(int *)(this + 0x2f8)) / 0x140)));
    (*(undefined * PTR32 *)(gen_frame + 0x2c)) = pBVar9;
    pBVar12 = (undefined *)0x0;
    pBVar6 = (undefined *)0x0;
    if (pBVar9 != (undefined *)0x0) {
      pBVar6 = this + 0x364;
      (*(undefined * PTR32 *)(gen_frame + 0x38)) = (undefined *)0x0;
      (*(undefined * PTR32 *)(gen_frame + 0x34)) = pBVar6;
      do {
        puVar13 = ((undefined1 *)GEN_TOP((*(int *)(this + 0x2f8) + (int)(*(undefined * PTR32 *)(gen_frame + 0x38)))));
        if ((pBVar12 < (undefined *)0x8) && (*(int *)((*(undefined * PTR32 *)(gen_frame + 0x34)) + 0x18) != 0)) {
          uVar5 = F_006d2e10(this,pBVar12);
          *(undefined4 *)(puVar13 + 100) = *(undefined4 *)(*(undefined * PTR32 *)(gen_frame + 0x34));
          *puVar13 = 1;
          *(undefined4 *)(puVar13 + 4) = 1;
          *(uint *)(puVar13 + 0x60) = uVar5;
          pBVar6 = (undefined *)F_006c39b0(this,pBVar12);
          if (pBVar6 != (undefined *)0x0) {
            F_0042cc20(((undefined1 *)(gen_frame + 0x678)),pBVar6,REFG(undefined4, 0x108cc50));
            F_0075c020(puVar13,((undefined1 *)(gen_frame + 0x678)));
            uVar17 = F_0042c880(((undefined1 *)(gen_frame + 0x678)));
            pBVar6 = (undefined *)uVar17;
          }
        }
        else {
          *puVar13 = 0;
        }
        (*(undefined * PTR32 *)(gen_frame + 0x38)) = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x38)) + 0x140);
        (*(undefined * PTR32 *)(gen_frame + 0x34)) = (*(undefined * PTR32 *)(gen_frame + 0x34)) + 0x30;
        pBVar12 = pBVar12 + 1;
      } while (pBVar12 < (*(undefined * PTR32 *)(gen_frame + 0x2c)));
      F_00c47745((*(uint *)(gen_frame + 0x7c8)) ^ (uint)(uint)(gen_frame + 0x7cc));
      return (uint)pBVar6;
    }
    break;
  case (undefined *)0x1: ;
    F_00754cc0(&(*(undefined4 *)(gen_frame + 0x18)));
    pBVar6 = this + 0x364;
    (*(undefined * PTR32 *)(gen_frame + 0x30)) = (undefined *)0x8;
    do {
      pBVar9 = *(undefined * PTR32 *)(pBVar6 + 0x1c);
      (*(undefined * PTR32 *)(gen_frame + 0x2c)) = pBVar9;
      if (pBVar9 != (undefined *)0x0) {
        F_00749600(&(*(undefined4 *)(gen_frame + 0x18)),&(*(undefined * PTR32 *)(gen_frame + 0x28)),&(*(undefined * PTR32 *)(gen_frame + 0x2c)));
        iVar14 = *(int *)pBVar6;
        if ((*(undefined * PTR32 *)(gen_frame + 0x28)) == (*(undefined * PTR32 *)(gen_frame + 0x1c))) {
          (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x8)) + 4)) = (undefined *)iVar14;
          (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x8)) + 0)) = pBVar9;
          (*(longlong *)(gen_frame + 0x8)) = CONCAT44(iVar14,pBVar9);
          F_0074fc90(&(*(undefined4 *)(gen_frame + 0x18)),((undefined1 *)(gen_frame + 0x10)),&(*(longlong *)(gen_frame + 0x8)));
        }
        else {
          *(int *)((*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x10) = *(int *)((*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x10) + iVar14;
        }
      }
      pBVar6 = pBVar6 + 0x30;
      pBVar9 = (*(undefined * PTR32 *)(gen_frame + 0x30)) + -1;
      (*(undefined * PTR32 *)(gen_frame + 0x30)) = pBVar9;
    } while (pBVar9 != (undefined *)0x0);
    pBVar6 = *(undefined * PTR32 *)(*(undefined * PTR32 *)(gen_frame + 0x1c));
    pBVar9 = ((undefined *)GEN_TOP(((*(int *)(this + 0x2fc) - *(int *)(this + 0x2f8)) / 0x140)));
    (*(undefined * PTR32 *)(gen_frame + 0x30)) = pBVar6;
    if (pBVar9 != (undefined *)0x0) {
      (*(undefined * PTR32 *)(gen_frame + 0x34)) = (undefined *)0x0;
      (*(undefined * PTR32 *)(gen_frame + 0x38)) = pBVar9;
      do {
        pBVar9 = (*(undefined * PTR32 *)(gen_frame + 0x34)) + *(int *)(this + 0x2f8);
        if (pBVar6 == (*(undefined * PTR32 *)(gen_frame + 0x1c))) {
          *pBVar9 = (undefined1)0x0;
        }
        else {
          uVar5 = F_006d2e90(this,*(int *)(pBVar6 + 0xc));
          iVar14 = *(int *)(pBVar6 + 0x10);
          *pBVar9 = (undefined1)0x1;
          *(undefined4 *)(pBVar9 + 4) = 1;
          *(uint *)(pBVar9 + 0x60) = uVar5;
          *(int *)(pBVar9 + 100) = iVar14;
          uVar18 = REFG(undefined4, 0x108cc50);
          uVar5 = F_00463610(1,*(int *)(pBVar6 + 0xc),0);
          F_0042cc20(((undefined1 *)(gen_frame + 0x330)),uVar5,uVar18);
          F_0042ccf0(pBVar9 + 8,((undefined1 *)(gen_frame + 0x330)));
          F_0042c880(((undefined1 *)(gen_frame + 0x330)));
          F_00732040(&(*(undefined * PTR32 *)(gen_frame + 0x30)));
          pBVar6 = (*(undefined * PTR32 *)(gen_frame + 0x30));
        }
        (*(undefined * PTR32 *)(gen_frame + 0x34)) = (*(undefined * PTR32 *)(gen_frame + 0x34)) + 0x140;
        pBVar9 = (*(undefined * PTR32 *)(gen_frame + 0x38)) + -1;
        (*(undefined * PTR32 *)(gen_frame + 0x38)) = pBVar9;
      } while (pBVar9 != (undefined *)0x0);
    }
    REFG(undefined4, 0x14a458f) = 1;
    F_00749ea0(&(*(undefined4 *)(gen_frame + 0x18)),(int)&(*(longlong *)(gen_frame + 0x8)) + 4,*(int *)(*(undefined * PTR32 *)(gen_frame + 0x1c)),(*(undefined * PTR32 *)(gen_frame + 0x1c)));
    uVar17 = F_00429760((*(undefined * PTR32 *)(gen_frame + 0x1c)),0x18,800);
    F_00c47745((*(uint *)(gen_frame + 0x7c8)) ^ (uint)(uint)(gen_frame + 0x7cc));
    return (uint)uVar17;
  case (undefined *)0x2: ;
    pBVar6 = (undefined *)0x0;
    (*(undefined * PTR32 *)(gen_frame + 0x30)) = (undefined *)0x0;
    uVar5 = F_0042a990(this + 0x16c);
    uVar5 = F_00a024d0(*(undefined * PTR32 *)(this + 0xf8),"getObjective",uVar5,1);
    if (uVar5 == 0) {
      F_007275e0(*(undefined * PTR32 *)(this + 0xf8),&(*(undefined * PTR32 *)(gen_frame + 0x30)));
      pBVar6 = (*(undefined * PTR32 *)(gen_frame + 0x30)) + -1;
    }
    F_006c3aa0(this,pBVar6);
    pBVar9 = ((undefined *)GEN_TOP(((*(int *)(this + 0x2fc) - *(int *)(this + 0x2f8)) / 0x140)));
    uVar5 = 0;
    (*(undefined * PTR32 *)(gen_frame + 0x30)) = pBVar9;
    (*(undefined * PTR32 *)(gen_frame + 0x34)) = (undefined *)0x0;
    (*(undefined * PTR32 *)(gen_frame + 0x38)) = (undefined *)0x0;
    do {
      pBVar6 = (undefined *)F_006d2fc0(this,uVar5);
      (*(undefined * PTR32 *)(gen_frame + 0x2c)) = pBVar6;
      if ((pBVar6 != (undefined *)0x0) && ((*(undefined * PTR32 *)(gen_frame + 0x34)) < pBVar9)) {
        pBVar12 = (*(undefined * PTR32 *)(gen_frame + 0x38)) + *(int *)(this + 0x2f8);
        uVar8 = F_006d2f40(this,uVar5);
        (*(undefined * PTR32 *)(gen_frame + 0x38)) = (*(undefined * PTR32 *)(gen_frame + 0x38)) + 0x140;
        (*(undefined * PTR32 *)(gen_frame + 0x34)) = (*(undefined * PTR32 *)(gen_frame + 0x34)) + 1;
        *(undefined4 *)(pBVar12 + 4) = 1;
        *pBVar12 = (undefined1)0x1;
        *(uint *)(pBVar12 + 0x60) = uVar8;
        *(undefined * PTR32 *)(pBVar12 + 100) = (*(undefined * PTR32 *)(gen_frame + 0x2c));
        uVar8 = F_006c39b0(this,uVar5);
        pBVar6 = (undefined *)0x0;
        pBVar9 = (*(undefined * PTR32 *)(gen_frame + 0x30));
        if (uVar8 != 0) {
          F_0042cc20(((undefined1 *)(gen_frame + 0x5d0)),uVar8,REFG(undefined4, 0x108cc50));
          F_0075c020(pBVar12,((undefined1 *)(gen_frame + 0x5d0)));
          uVar17 = F_0042c880(((undefined1 *)(gen_frame + 0x5d0)));
          pBVar6 = (undefined *)uVar17;
          pBVar9 = (*(undefined * PTR32 *)(gen_frame + 0x30));
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 8);
    if ((*(undefined * PTR32 *)(gen_frame + 0x34)) < pBVar9) {
      uVar5 = (int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x34))) * 0x140;
      iVar14 = (int)pBVar9 - (int)(*(undefined * PTR32 *)(gen_frame + 0x34));
      do {
        *((undefined1 *)GEN_TOP((uVar5 + *(int *)(this + 0x2f8)))) = 0;
        uVar5 = uVar5 + 0x140;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
      F_00c47745((*(uint *)(gen_frame + 0x7c8)) ^ (uint)(uint)(gen_frame + 0x7cc));
      return uVar5;
    }
    break;
  case (undefined *)0x3: ;
    puVar13 = *(undefined1 * PTR32 *)(this + 0x2f8);
    (*(undefined * PTR32 *)(gen_frame + 0x2c)) = ((undefined *)GEN_TOP(((*(int *)(this + 0x2fc) - *(int *)(this + 0x2f8)) / 0x140)));
    *puVar13 = 1;
    *(undefined4 *)(puVar13 + 4) = 4;
    (*(undefined * PTR32 *)(gen_frame + 0x34)) = (undefined *)0x1;
    (*(undefined * PTR32 *)(gen_frame + 0x30)) = (undefined *)0x0;
    uVar5 = F_0042a990(this + 0x16c);
    uVar5 = F_00a024d0(*(undefined * PTR32 *)(this + 0xf8),"getTimerState",uVar5,1);
    if (uVar5 == 0) {
      F_007275e0(*(undefined * PTR32 *)(this + 0xf8),&(*(undefined * PTR32 *)(gen_frame + 0x34)));
    }
    uVar5 = F_0042a990(this + 0x16c);
    uVar5 = F_00a024d0(*(undefined * PTR32 *)(this + 0xf8),"getTimeLimit",uVar5,1);
    if (uVar5 == 0) {
      F_007275e0(*(undefined * PTR32 *)(this + 0xf8),&(*(undefined * PTR32 *)(gen_frame + 0x30)));
    }
    uVar5 = F_00476000();
    *(undefined * PTR32 *)(puVar13 + 0x68) = (*(undefined * PTR32 *)(gen_frame + 0x30)) + uVar5;
    *(uint *)(puVar13 + 0x60) = uVar5;
    *(undefined4 *)(puVar13 + 100) = 0;
    *(uint *)(puVar13 + 0x6c) = ((int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x30))) >> 0x1f) + (uint)CARRY4((uint)(*(undefined * PTR32 *)(gen_frame + 0x30)),uVar5);
    if ((*(undefined * PTR32 *)(gen_frame + 0x34)) == (undefined *)0x1) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x480)),"survive[stop] timeLimit",REFG(undefined4, 0x108cc50));
      F_0042ccf0(puVar13 + 8,((undefined1 *)(gen_frame + 0x480)));
      puVar13 = ((undefined1 *)(gen_frame + 0x480));
    }
    else if ((*(undefined * PTR32 *)(gen_frame + 0x34)) == (undefined *)0x2) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x288)),"survive[update] timeLimit",REFG(undefined4, 0x108cc50));
      F_0042ccf0(puVar13 + 8,((undefined1 *)(gen_frame + 0x288)));
      puVar13 = ((undefined1 *)(gen_frame + 0x288));
    }
    else if ((*(undefined * PTR32 *)(gen_frame + 0x34)) == (undefined *)0x3) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x528)),"survive[pause] timeLimit",REFG(undefined4, 0x108cc50));
      F_0042ccf0(puVar13 + 8,((undefined1 *)(gen_frame + 0x528)));
      puVar13 = ((undefined1 *)(gen_frame + 0x528));
    }
    else {
      F_0042cc20(((undefined1 *)(gen_frame + 0x90)),"survive[unknown] timeLimit",REFG(undefined4, 0x108cc50));
      F_0042ccf0(puVar13 + 8,((undefined1 *)(gen_frame + 0x90)));
      puVar13 = ((undefined1 *)(gen_frame + 0x90));
    }
    F_0042c880(puVar13);
    if ((undefined *)0x1 < (*(undefined * PTR32 *)(gen_frame + 0x2c))) {
      iVar14 = 0x140;
      pBVar6 = (*(undefined * PTR32 *)(gen_frame + 0x2c)) + -1;
      do {
        *((undefined1 *)GEN_TOP((iVar14 + *(int *)(this + 0x2f8)))) = 0;
        iVar14 = iVar14 + 0x140;
        pBVar6 = pBVar6 + -1;
      } while (pBVar6 != (undefined *)0x0);
    }
    (*(undefined * PTR32 *)(gen_frame + 0x34)) = (undefined *)0x0;
    (*(undefined * PTR32 *)(gen_frame + 0x38)) = (undefined *)0x140;
    do {
      pBVar6 = (*(undefined * PTR32 *)(gen_frame + 0x34));
      uVar8 = F_006d30a0(this,(*(undefined * PTR32 *)(gen_frame + 0x34)));
      uVar5 = F_006d3120(this,pBVar6);
      if (0 < (int)uVar5) {
        puVar13 = ((undefined1 *)GEN_TOP((*(int *)(this + 0x2f8) + (int)(*(undefined * PTR32 *)(gen_frame + 0x38)))));
        *(uint *)(puVar13 + 100) = uVar5;
        *puVar13 = 1;
        *(undefined4 *)(puVar13 + 4) = 1;
        *(uint *)(puVar13 + 0x60) = uVar8;
        uVar5 = 0;
        pBVar6 = this + 0x364;
        do {
          if (*(undefined * PTR32 *)pBVar6 == (*(undefined * PTR32 *)(gen_frame + 0x34)) + 1) {
            if (uVar5 != 0) {
              iVar14 = uVar5 * 3 + 0x36;
              iVar10 = *(int *)(this + iVar14 * 0x10);
              if (iVar10 == 0) {
                F_00ab22f0(*(undefined4 *)(this + iVar14 * 0x10 + 0x1c));
              }
              uVar8 = F_00463610(0,iVar10,2);
              uVar5 = 0;
              if (uVar8 != 0) {
                F_0042cc20(((undefined1 *)(gen_frame + 0x774)),uVar8,REFG(undefined4, 0x108cc50));
                F_0075c020(puVar13,((undefined1 *)(gen_frame + 0x774)));
                uVar17 = F_0042c880(((undefined1 *)(gen_frame + 0x774)));
                uVar5 = (uint)uVar17;
              }
              (*(undefined * PTR32 *)(gen_frame + 0x38)) = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x38)) + 0x140);
            }
            break;
          }
          uVar5 = uVar5 + 1;
          pBVar6 = pBVar6 + 0x30;
        } while (uVar5 < 8);
      }
      pBVar6 = (*(undefined * PTR32 *)(gen_frame + 0x34)) + 1;
      (*(undefined * PTR32 *)(gen_frame + 0x34)) = pBVar6;
      if ((undefined *)0x6 < pBVar6) {
        F_00c47745((*(uint *)(gen_frame + 0x7c8)) ^ (uint)(uint)(gen_frame + 0x7cc));
        return uVar5;
      }
    } while( true );
  case (undefined *)0x4: ;
    pBVar9 = ((undefined *)GEN_TOP(((*(int *)(this + 0x2fc) - *(int *)(this + 0x2f8)) / 0x140)));
    (*(undefined * PTR32 *)(gen_frame + 0x14)) = pBVar9;
    (*(undefined * PTR32 *)(gen_frame + 0x38)) = (undefined *)0x0;
    (*(undefined * PTR32 *)(gen_frame + 0x34)) = (undefined *)0x0;
    (*(undefined * PTR32 *)(gen_frame + 0x30)) = this + 0x37c;
    uVar5 = 0;
    do {
      if (*(int *)(*(undefined * PTR32 *)(gen_frame + 0x30)) != 0) {
        (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0x0;
        (*(undefined * PTR32 *)(gen_frame + 0x2c)) = (undefined *)(uVar5 + 1);
        uVar8 = F_0042a990(this + 0x16c);
        uVar8 = F_00a02570(*(undefined * PTR32 *)(this + 0xf8),"getConciliateNum",uVar8,&(*(undefined * PTR32 *)(gen_frame + 0x2c)),1,1);
        if (uVar8 == 0) {
          F_00727410(*(undefined * PTR32 *)(this + 0xf8),&(*(undefined * PTR32 *)(gen_frame + 0x28)));
        }
        uVar8 = F_006d31a0(this,uVar5);
        if ((uVar8 != 0) && ((*(undefined * PTR32 *)(gen_frame + 0x38)) < pBVar9)) {
          pBVar6 = (*(undefined * PTR32 *)(gen_frame + 0x34)) + *(int *)(this + 0x2f8);
          *(undefined * PTR32 *)(pBVar6 + 0x60) = (*(undefined * PTR32 *)(gen_frame + 0x28));
          *pBVar6 = (undefined1)0x1;
          *(undefined4 *)(pBVar6 + 4) = 1;
          *(uint *)(pBVar6 + 100) = uVar8;
          uVar8 = F_006c39b0(this,uVar5);
          if (uVar8 != 0) {
            F_0042cc20(((undefined1 *)(gen_frame + 0x138)),uVar8,REFG(undefined4, 0x108cc50));
            F_0075c020(pBVar6,((undefined1 *)(gen_frame + 0x138)));
            F_0042c880(((undefined1 *)(gen_frame + 0x138)));
          }
          (*(undefined * PTR32 *)(gen_frame + 0x38)) = (*(undefined * PTR32 *)(gen_frame + 0x38)) + 1;
          (*(undefined * PTR32 *)(gen_frame + 0x34)) = (*(undefined * PTR32 *)(gen_frame + 0x34)) + 0x140;
          pBVar9 = (*(undefined * PTR32 *)(gen_frame + 0x14));
        }
      }
      (*(undefined * PTR32 *)(gen_frame + 0x30)) = (*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x30;
      uVar5 = uVar5 + 1;
    } while (uVar5 < 8);
    REFG(undefined4, 0x14a458f) = 1;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (undefined *)0x0;
    (*(undefined1 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    pBVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x1e8))(this,&(*(undefined4 *)(gen_frame + 0x18)),1)));
    if ((char)pBVar6 == '\0') {
      *(undefined4 *)(this + 0x308) = 0;
      *(undefined4 *)(this + 0x30c) = 0;
    }
    else {
      pBVar6 = (undefined *)F_006d6e70(this,(*(undefined4 *)(gen_frame + 0x18)));
      if (pBVar9 <= (*(undefined * PTR32 *)(gen_frame + 0x38))) break;
      puVar13 = ((undefined1 *)GEN_TOP(((int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x38))) * 0x140 + *(int *)(this + 0x2f8))));
      *puVar13 = 1;
      uVar18 = REFG(undefined4, 0x108cc50);
      uVar5 = F_00463610(1,(*(undefined4 *)(gen_frame + 0x18)),0);
      F_0042cc20(((undefined1 *)(gen_frame + 0x3d8)),uVar5,uVar18);
      F_0042ccf0(puVar13 + 8,((undefined1 *)(gen_frame + 0x3d8)));
      uVar17 = F_0042c880(((undefined1 *)(gen_frame + 0x3d8)));
      pBVar6 = (undefined *)uVar17;
      (*(undefined * PTR32 *)(gen_frame + 0x38)) = (*(undefined * PTR32 *)(gen_frame + 0x38)) + 1;
      *(undefined4 *)(puVar13 + 4) = 0;
    }
    if ((*(undefined * PTR32 *)(gen_frame + 0x38)) < pBVar9) {
      uVar5 = (int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x38))) * 0x140;
      iVar14 = (int)pBVar9 - (int)(*(undefined * PTR32 *)(gen_frame + 0x38));
      do {
        *((undefined1 *)GEN_TOP((uVar5 + *(int *)(this + 0x2f8)))) = 0;
        uVar5 = uVar5 + 0x140;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
      F_00c47745((*(uint *)(gen_frame + 0x7c8)) ^ (uint)(uint)(gen_frame + 0x7cc));
      return uVar5;
    }
    break;
  case (undefined *)0x5: ;
    puVar13 = *(undefined1 * PTR32 *)(this + 0x2f8);
    uVar5 = (*(int *)(this + 0x2fc) - *(int *)(this + 0x2f8)) / 0x140;
    pBVar6 = (undefined *)F_006d3240(this);
    (*(undefined * PTR32 *)(gen_frame + 0x28)) = pBVar6;
    BVar2 = this[0x4f6];
    (*(undefined * PTR32 *)(gen_frame + 0x34)) = (undefined *)0x0;
    if (BVar2 == (undefined1)0x1) {
      (*(undefined * PTR32 *)(gen_frame + 0x34)) = *(undefined * PTR32 *)(this + 0x368);
      uVar18 = REFG(undefined4, 0x108cc50);
      uVar8 = F_00463610(1,*(undefined4 *)(this + 0x380),0);
      F_0042cc20(((undefined1 *)(gen_frame + 0x624)),uVar8,uVar18);
      F_0042ccf0(puVar13 + 8,((undefined1 *)(gen_frame + 0x624)));
      F_0042c880(((undefined1 *)(gen_frame + 0x624)));
      REFG(undefined4, 0x14a458f) = 1;
    }
    else if (BVar2 == (undefined1)0x2) {
      (*(undefined * PTR32 *)(gen_frame + 0x34)) = *(undefined * PTR32 *)(this + 0x368);
      puVar7 = (uint *)F_00ab33c0(0x15);
      if (puVar7 != (uint *)0x0) {
        F_0042cc20(((undefined1 *)(gen_frame + 0x6cc)),(*puVar7 & 0xffffff) + (int)puVar7,REFG(undefined4, 0x108cc50));
        F_0042ccf0(puVar13 + 8,((undefined1 *)(gen_frame + 0x6cc)));
        F_0042c880(((undefined1 *)(gen_frame + 0x6cc)));
      }
    }
    else if (BVar2 == (undefined1)0x3) {
      (*(undefined * PTR32 *)(gen_frame + 0x34)) = *(undefined * PTR32 *)(this + 0x368);
      puVar7 = (uint *)F_00ab33c0(0x15);
      if (puVar7 != (uint *)0x0) {
        F_0042cc20(((undefined1 *)(gen_frame + 0x720)),(*puVar7 & 0xffffff) + (int)puVar7,REFG(undefined4, 0x108cc50));
        F_0042ccf0(puVar13 + 8,((undefined1 *)(gen_frame + 0x720)));
        F_0042c880(((undefined1 *)(gen_frame + 0x720)));
      }
    }
    fVar15 = (float10)(int)(*(undefined * PTR32 *)(gen_frame + 0x28));
    if ((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) < 0) {
      fVar15 = fVar15 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    fVar16 = (float10)(int)(*(undefined * PTR32 *)(gen_frame + 0x34));
    if ((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) < 0) {
      fVar16 = fVar16 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    pBVar6 = ((undefined *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((fVar15 * (float10)*(double *)&REFG(undefined, 0x1088118)) / fVar16))))));
    (*(undefined * PTR32 *)(gen_frame + 0x14)) = pBVar6;
    dVar3 = (double)((float)gen_bits2f((unsigned int)(uintptr_t)(pBVar6)));
    fVar15 = F_00c4d2a0((uint)(ulonglong)gen_d2bits(dVar3),
                          (int)((ulonglong)gen_d2bits(dVar3) >> 0x20));
    (*(undefined2 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x38)) + 2)) = ((undefined2)0x27f);
    (*(undefined * PTR32 *)(gen_frame + 0x38)) = ((undefined *)GEN_TOP(CONCAT22(((undefined2)0x27f),(*(undefined2 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x38)) + 0)))));
    (*(undefined * PTR32 *)(gen_frame + 0x14)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)fVar15)));
    (*(undefined * PTR32 *)(gen_frame + 0x14)) = (undefined *)(((undefined2)0x27f) | 0xc00);
    *puVar13 = 1;
    *(undefined4 *)(puVar13 + 4) = 1;
    lVar1 = (longlong)TRUNC((float10)(float)fVar15);
    (*(longlong *)(gen_frame + 0x8)) = lVar1;
    lVar1 = (*(longlong *)(gen_frame + 0x8));
    (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x8)) + 0)) = (undefined *)lVar1;
    *(undefined * PTR32 *)(puVar13 + 0x60) = (undefined *)(*(longlong *)(gen_frame + 0x8));
    if (this[0x4f6] == (undefined1)0x3) {
      *(undefined4 *)(puVar13 + 100) = 100;
      pBVar6 = (undefined *)(*(longlong *)(gen_frame + 0x8));
    }
    else {
      *(undefined * PTR32 *)(puVar13 + 100) = (*(undefined * PTR32 *)(gen_frame + 0x34));
      pBVar6 = (*(undefined * PTR32 *)(gen_frame + 0x28));
    }
    *(undefined * PTR32 *)(puVar13 + 0x60) = pBVar6;
    (*(longlong *)(gen_frame + 0x8)) = lVar1;
    if (1 < uVar5) {
      uVar8 = 0x140;
      iVar14 = uVar5 - 1;
      do {
        *((undefined1 *)GEN_TOP((uVar8 + *(int *)(this + 0x2f8)))) = 0;
        uVar8 = uVar8 + 0x140;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
      F_00c47745((*(uint *)(gen_frame + 0x7c8)) ^ (uint)(uint)(gen_frame + 0x7cc));
      return uVar8;
    }
    break;
  case (undefined *)0x6: ;
    pBVar9 = ((undefined *)GEN_TOP(((*(int *)(this + 0x2fc) - *(int *)(this + 0x2f8)) / 0x140)));
    uVar5 = 0;
    (*(undefined * PTR32 *)(gen_frame + 0x2c)) = pBVar9;
    (*(undefined * PTR32 *)(gen_frame + 0x38)) = (undefined *)0x0;
    (*(undefined * PTR32 *)(gen_frame + 0x30)) = (undefined *)0x0;
    do {
      if (((*((int *)GEN_TOP((this + (uVar5 & 0xff) * 0x30 + 0x364))) == 3) &&
          ((*(undefined * PTR32 *)(gen_frame + 0x14)) = *((undefined * PTR32 *)GEN_TOP((this + (uVar5 & 0xff) * 0x30 + 0x368))),
          0 < (int)*((undefined * PTR32 *)GEN_TOP((this + (uVar5 & 0xff) * 0x30 + 0x368))))) &&
         ((*(undefined * PTR32 *)(gen_frame + 0x38)) < pBVar9)) {
        pBVar6 = (*(undefined * PTR32 *)(gen_frame + 0x30)) + *(int *)(this + 0x2f8);
        uVar18 = REFG(undefined4, 0x108cc50);
        uVar8 = F_006c39b0(this,uVar5);
        F_0042cc20(((undefined1 *)(gen_frame + 0x57c)),uVar8,uVar18);
        F_0075c020(pBVar6,((undefined1 *)(gen_frame + 0x57c)));
        F_0042c880(((undefined1 *)(gen_frame + 0x57c)));
        uVar8 = F_006d3320(this,uVar5);
        *(uint *)(pBVar6 + 0x60) = uVar8;
        (*(undefined * PTR32 *)(gen_frame + 0x38)) = (*(undefined * PTR32 *)(gen_frame + 0x38)) + 1;
        (*(undefined * PTR32 *)(gen_frame + 0x30)) = (*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x140;
        *pBVar6 = (undefined1)0x1;
        *(undefined4 *)(pBVar6 + 4) = 1;
        *(undefined * PTR32 *)(pBVar6 + 100) = (*(undefined * PTR32 *)(gen_frame + 0x14));
        pBVar9 = (*(undefined * PTR32 *)(gen_frame + 0x2c));
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 8);
    REFG(undefined4, 0x14a458f) = 1;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (undefined *)0x0;
    (*(undefined1 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    pBVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x1e8))(this,&(*(undefined4 *)(gen_frame + 0x18)),1)));
    if ((char)pBVar6 == '\0') {
      *(undefined4 *)(this + 0x308) = 0;
      *(undefined4 *)(this + 0x30c) = 0;
    }
    else {
      pBVar6 = (undefined *)F_006d6e70(this,(*(undefined4 *)(gen_frame + 0x18)));
      if (pBVar9 <= (*(undefined * PTR32 *)(gen_frame + 0x38))) break;
      puVar13 = ((undefined1 *)GEN_TOP(((int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x38))) * 0x140 + *(int *)(this + 0x2f8))));
      uVar18 = REFG(undefined4, 0x108cc50);
      uVar5 = F_00463610(1,(*(undefined4 *)(gen_frame + 0x18)),0);
      F_0042cc20(((undefined1 *)(gen_frame + 0x4d4)),uVar5,uVar18);
      F_0042ccf0(puVar13 + 8,((undefined1 *)(gen_frame + 0x4d4)));
      uVar17 = F_0042c880(((undefined1 *)(gen_frame + 0x4d4)));
      pBVar6 = (undefined *)uVar17;
      (*(undefined * PTR32 *)(gen_frame + 0x38)) = (*(undefined * PTR32 *)(gen_frame + 0x38)) + 1;
      *puVar13 = 1;
      *(undefined4 *)(puVar13 + 4) = 2;
      *(undefined * PTR32 *)(puVar13 + 0x60) = (*(undefined * PTR32 *)(gen_frame + 0x1c));
    }
    if ((*(undefined * PTR32 *)(gen_frame + 0x38)) < pBVar9) {
      uVar5 = (int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x38))) * 0x140;
      iVar14 = (int)pBVar9 - (int)(*(undefined * PTR32 *)(gen_frame + 0x38));
      do {
        *((undefined1 *)GEN_TOP((uVar5 + *(int *)(this + 0x2f8)))) = 0;
        uVar5 = uVar5 + 0x140;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
      F_00c47745((*(uint *)(gen_frame + 0x7c8)) ^ (uint)(uint)(gen_frame + 0x7cc));
      return uVar5;
    }
    break;
  case (undefined *)0x7: ;
    (*(undefined * PTR32 *)(gen_frame + 0x28)) = ((undefined *)GEN_TOP(((*(int *)(this + 0x2fc) - *(int *)(this + 0x2f8)) / 0x140)));
    uVar5 = F_006d33a0(this);
    pBVar6 = (undefined *)F_006d3410(this);
    puVar13 = *(undefined1 * PTR32 *)(this + 0x2f8);
    (*(undefined * PTR32 *)(gen_frame + 0x14)) = pBVar6;
    puVar7 = (uint *)F_00ab33c0(0x16);
    if (puVar7 != (uint *)0x0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x42c)),(*puVar7 & 0xffffff) + (int)puVar7,REFG(undefined4, 0x108cc50));
      F_0042ccf0(puVar13 + 8,((undefined1 *)(gen_frame + 0x42c)));
      F_0042c880(((undefined1 *)(gen_frame + 0x42c)));
    }
    *puVar13 = 1;
    *(undefined4 *)(puVar13 + 4) = 1;
    *(uint *)(puVar13 + 0x60) = uVar5;
    *(undefined * PTR32 *)(puVar13 + 100) = (*(undefined * PTR32 *)(gen_frame + 0x14));
    (*(undefined * PTR32 *)(gen_frame + 0x34)) = (undefined *)0x1;
    pBVar9 = (undefined *)0x0;
    (*(undefined * PTR32 *)(gen_frame + 0x38)) = (undefined *)0x140;
    do {
      pBVar12 = pBVar9 + 1;
      (*(undefined * PTR32 *)(gen_frame + 0x30)) = (undefined *)0x0;
      (*(undefined * PTR32 *)(gen_frame + 0x2c)) = pBVar12;
      (*(undefined * PTR32 *)(gen_frame + 0x14)) = pBVar12;
      uVar5 = F_0042a990(this + 0x16c);
      pBVar6 = (undefined *)
               F_00a02570(*(undefined * PTR32 *)(this + 0xf8),"getTargetNum",uVar5,&(*(undefined * PTR32 *)(gen_frame + 0x14)),1,1);
      if (pBVar6 == (undefined *)0x0) {
        bVar4 = F_007275e0(*(undefined * PTR32 *)(this + 0xf8),&(*(undefined * PTR32 *)(gen_frame + 0x30)));
        pBVar6 = ((undefined *)GEN_TOP(CONCAT31(extraout_var,bVar4)));
        if ((0 < (int)(*(undefined * PTR32 *)(gen_frame + 0x30))) && ((*(undefined * PTR32 *)(gen_frame + 0x34)) < (*(undefined * PTR32 *)(gen_frame + 0x28)))) {
          pBVar12 = (*(undefined * PTR32 *)(gen_frame + 0x38)) + *(int *)(this + 0x2f8);
          uVar18 = REFG(undefined4, 0x108cc50);
          uVar5 = F_006c39b0(this,pBVar9);
          F_0042cc20(((undefined1 *)(gen_frame + 0x384)),uVar5,uVar18);
          F_0075c020(pBVar12,((undefined1 *)(gen_frame + 0x384)));
          F_0042c880(((undefined1 *)(gen_frame + 0x384)));
          pBVar6 = (undefined *)F_006d3480(this,pBVar9);
          (*(undefined * PTR32 *)(gen_frame + 0x34)) = (*(undefined * PTR32 *)(gen_frame + 0x34)) + 1;
          (*(undefined * PTR32 *)(gen_frame + 0x38)) = (*(undefined * PTR32 *)(gen_frame + 0x38)) + 0x140;
          *pBVar12 = (undefined1)0x1;
          *(undefined4 *)(pBVar12 + 4) = 1;
          *(undefined * PTR32 *)(pBVar12 + 0x60) = pBVar6;
          *(undefined * PTR32 *)(pBVar12 + 100) = (*(undefined * PTR32 *)(gen_frame + 0x30));
          pBVar12 = (*(undefined * PTR32 *)(gen_frame + 0x2c));
        }
      }
      pBVar9 = pBVar12;
    } while (pBVar9 < (undefined *)0x8);
    if ((*(undefined * PTR32 *)(gen_frame + 0x34)) < (*(undefined * PTR32 *)(gen_frame + 0x28))) {
      uVar5 = (int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x34))) * 0x140;
      iVar14 = (int)(*(undefined * PTR32 *)(gen_frame + 0x28)) - (int)(*(undefined * PTR32 *)(gen_frame + 0x34));
      do {
        *((undefined1 *)GEN_TOP((uVar5 + *(int *)(this + 0x2f8)))) = 0;
        uVar5 = uVar5 + 0x140;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
      F_00c47745((*(uint *)(gen_frame + 0x7c8)) ^ (uint)(uint)(gen_frame + 0x7cc));
      return uVar5;
    }
    break;
  case (undefined *)0x8: ;
    uVar5 = (*(int *)(this + 0x2fc) - *(int *)(this + 0x2f8)) / 0x140;
    (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0x0;
    uVar8 = F_0042a990(this + 0x16c);
    uVar8 = F_00a024d0(*(undefined * PTR32 *)(this + 0xf8),"getReachPercent",uVar8,1);
    if (uVar8 == 0) {
      F_007275e0(*(undefined * PTR32 *)(this + 0xf8),&(*(undefined * PTR32 *)(gen_frame + 0x28)));
    }
    puVar13 = *(undefined1 * PTR32 *)(this + 0x2f8);
    puVar7 = (uint *)F_00ab33c0(0x15);
    if (puVar7 != (uint *)0x0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x2dc)),(*puVar7 & 0xffffff) + (int)puVar7,REFG(undefined4, 0x108cc50));
      F_0042ccf0(puVar13 + 8,((undefined1 *)(gen_frame + 0x2dc)));
      F_0042c880(((undefined1 *)(gen_frame + 0x2dc)));
    }
    *(undefined * PTR32 *)(puVar13 + 0x60) = (*(undefined * PTR32 *)(gen_frame + 0x28));
    *puVar13 = 1;
    *(undefined4 *)(puVar13 + 4) = 1;
    *(undefined4 *)(puVar13 + 100) = 100;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (undefined *)0x0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    uVar11 = 1;
    REFG(undefined4, 0x14a458f) = 1;
    (*(undefined1 *)(gen_frame + 0x20)) = 0;
    uVar8 = ((code *)*(gen_code32 *)(*(int *)this + 0x1e8))(this,&(*(undefined4 *)(gen_frame + 0x18)),1);
    if ((char)uVar8 == '\0') {
      pBVar6 = (undefined *)0x0;
      *(undefined4 *)(this + 0x308) = 0;
      *(undefined4 *)(this + 0x30c) = 0;
    }
    else {
      pBVar6 = (undefined *)F_006d6e70(this,(*(undefined4 *)(gen_frame + 0x18)));
      if (1 < uVar5) {
        iVar14 = *(int *)(this + 0x2f8);
        *(undefined1 *)(iVar14 + 0x140) = 1;
        uVar18 = REFG(undefined4, 0x108cc50);
        uVar8 = F_00463610(1,(*(undefined4 *)(gen_frame + 0x18)),0);
        F_0042cc20(((undefined1 *)(gen_frame + 0x234)),uVar8,uVar18);
        F_0042ccf0((undefined *)(iVar14 + 0x148),((undefined1 *)(gen_frame + 0x234)));
        uVar17 = F_0042c880(((undefined1 *)(gen_frame + 0x234)));
        pBVar6 = (undefined *)uVar17;
        *(undefined4 *)(iVar14 + 0x144) = 0;
        uVar11 = 2;
      }
    }
    if (uVar11 < uVar5) {
      uVar8 = uVar11 * 0x140;
      iVar14 = uVar5 - uVar11;
      do {
        *((undefined1 *)GEN_TOP((uVar8 + *(int *)(this + 0x2f8)))) = 0;
        uVar8 = uVar8 + 0x140;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
      F_00c47745((*(uint *)(gen_frame + 0x7c8)) ^ (uint)(uint)(gen_frame + 0x7cc));
      return uVar8;
    }
    break;
  case (undefined *)0x9: ;
    pBVar9 = ((undefined *)GEN_TOP(((*(int *)(this + 0x2fc) - *(int *)(this + 0x2f8)) / 0x140)));
    (*(undefined * PTR32 *)(gen_frame + 0x2c)) = pBVar9;
    (*(undefined * PTR32 *)(gen_frame + 0x38)) = (undefined *)0x0;
    (*(undefined * PTR32 *)(gen_frame + 0x34)) = (undefined *)0x0;
    (*(undefined * PTR32 *)(gen_frame + 0x30)) = this + 0x380;
    iVar14 = 0;
    do {
      pBVar6 = (undefined *)F_006d3500(this,(*(undefined * PTR32 *)(gen_frame + 0x34)));
      (*(undefined * PTR32 *)(gen_frame + 0x14)) = pBVar6;
      uVar5 = F_006d3580(this,(*(undefined * PTR32 *)(gen_frame + 0x34)));
      (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x8)) + 4)) = (undefined *)uVar5;
      (*(longlong *)(gen_frame + 0x8)) = CONCAT44(uVar5,(undefined *)(*(longlong *)(gen_frame + 0x8)));
      iVar10 = iVar14;
      if (0 < (int)uVar5) {
        puVar13 = ((undefined1 *)GEN_TOP((*(int *)(this + 0x2f8) + iVar14)));
        uVar18 = REFG(undefined4, 0x108cc50);
        uVar5 = F_00463610(1,*(int *)(*(undefined * PTR32 *)(gen_frame + 0x30)),0);
        F_0042cc20(((undefined1 *)(gen_frame + 0x18c)),uVar5,uVar18);
        F_0042ccf0(puVar13 + 8,((undefined1 *)(gen_frame + 0x18c)));
        F_0042c880(((undefined1 *)(gen_frame + 0x18c)));
        (*(undefined * PTR32 *)(gen_frame + 0x38)) = (*(undefined * PTR32 *)(gen_frame + 0x38)) + 1;
        iVar10 = iVar14 + 0x140;
        *puVar13 = 1;
        *(undefined4 *)(puVar13 + 4) = 1;
        *(undefined * PTR32 *)(puVar13 + 0x60) = (*(undefined * PTR32 *)(gen_frame + 0x14));
        *(undefined * PTR32 *)(puVar13 + 100) = (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x8)) + 4));
        pBVar9 = (*(undefined * PTR32 *)(gen_frame + 0x2c));
        if ((*(undefined * PTR32 *)(gen_frame + 0x14)) == (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x8)) + 4))) {
          bVar4 = F_006d3700(this,(*(undefined * PTR32 *)(gen_frame + 0x34)));
          (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0)) = bVar4;
          (*(undefined * PTR32 *)(gen_frame + 0x28)) = ((undefined *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(undefined * PTR32 *)(gen_frame + 0x28)), 1, 3),bVar4)));
          pBVar6 = (*(undefined * PTR32 *)(gen_frame + 0x28));
          uVar5 = F_006d3600(this,(*(undefined * PTR32 *)(gen_frame + 0x28)));
          (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x8)) + 4)) = (undefined *)uVar5;
          (*(longlong *)(gen_frame + 0x8)) = CONCAT44(uVar5,(undefined *)(*(longlong *)(gen_frame + 0x8)));
          pBVar6 = (undefined *)F_006d3680(this,pBVar6);
          (*(undefined * PTR32 *)(gen_frame + 0x14)) = pBVar6;
          pBVar9 = (*(undefined * PTR32 *)(gen_frame + 0x2c));
          if (0 < (int)pBVar6) {
            uVar17 = CONCAT44(REFG(undefined4, 0x108cc50),(*(undefined * PTR32 *)(gen_frame + 0x28))) & 0xffffffff000000ff;
            puVar13 = ((undefined1 *)GEN_TOP((*(int *)(this + 0x2f8) + iVar10)));
            uVar5 = F_006c39b0(this,(int)uVar17);
            F_0042cc20(((undefined1 *)(gen_frame + 0xe4)),uVar5,(int)(uVar17 >> 0x20));
            F_0075c020(puVar13,((undefined1 *)(gen_frame + 0xe4)));
            F_0042c880(((undefined1 *)(gen_frame + 0xe4)));
            (*(undefined * PTR32 *)(gen_frame + 0x38)) = (*(undefined * PTR32 *)(gen_frame + 0x38)) + 1;
            *puVar13 = 1;
            *(undefined4 *)(puVar13 + 4) = 1;
            *(undefined * PTR32 *)(puVar13 + 0x60) = (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x8)) + 4));
            *(undefined * PTR32 *)(puVar13 + 100) = (*(undefined * PTR32 *)(gen_frame + 0x14));
            iVar10 = iVar14 + 0x280;
            pBVar9 = (*(undefined * PTR32 *)(gen_frame + 0x2c));
          }
        }
      }
      (*(undefined * PTR32 *)(gen_frame + 0x30)) = (*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x30;
      pBVar6 = (*(undefined * PTR32 *)(gen_frame + 0x34)) + 1;
      (*(undefined * PTR32 *)(gen_frame + 0x34)) = pBVar6;
      iVar14 = iVar10;
    } while (pBVar6 < (undefined *)0x8);
    if ((*(undefined * PTR32 *)(gen_frame + 0x38)) < pBVar9) {
      pBVar6 = (undefined *)((int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x38))) * 0x140);
      iVar14 = (int)pBVar9 - (int)(*(undefined * PTR32 *)(gen_frame + 0x38));
      do {
        pBVar6[*(int *)(this + 0x2f8)] = (undefined1)0x0;
        pBVar6 = pBVar6 + 0x140;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
    }
    goto LAB_00708db2;
  case (undefined *)0xa: ;
    puVar13 = *(undefined1 * PTR32 *)(this + 0x2f8);
    uVar5 = (*(int *)(this + 0x2fc) - *(int *)(this + 0x2f8)) / 0x140;
    uVar8 = F_006d3780(this);
    (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x8)) + 4)) = (undefined *)uVar8;
    (*(longlong *)(gen_frame + 0x8)) = CONCAT44(uVar8,(undefined *)(*(longlong *)(gen_frame + 0x8)));
    uVar8 = F_006d37f0(this);
    *puVar13 = 1;
    *(undefined4 *)(puVar13 + 4) = 1;
    *(undefined * PTR32 *)(puVar13 + 0x60) = (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x8)) + 4));
    *(uint *)(puVar13 + 100) = uVar8;
    uVar8 = F_006c39b0(this,1);
    if (uVar8 != 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x3c)),uVar8,REFG(undefined4, 0x108cc50));
      F_0075c020(puVar13,((undefined1 *)(gen_frame + 0x3c)));
      F_0042c880(((undefined1 *)(gen_frame + 0x3c)));
    }
    uVar11 = 1;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (undefined *)0x0;
    (*(undefined1 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    uVar8 = ((code *)*(gen_code32 *)(*(int *)this + 0x1e8))(this,&(*(undefined4 *)(gen_frame + 0x18)),1);
    if ((char)uVar8 == '\0') {
      pBVar6 = (undefined *)0x0;
      *(undefined4 *)(this + 0x308) = 0;
      *(undefined4 *)(this + 0x30c) = 0;
    }
    else {
      pBVar6 = (undefined *)F_006d6e70(this,(*(undefined4 *)(gen_frame + 0x18)));
      if (1 < uVar5) {
        iVar14 = *(int *)(this + 0x2f8);
        *(undefined1 *)(iVar14 + 0x140) = 1;
        uVar18 = REFG(undefined4, 0x108cc50);
        uVar8 = F_00463610(1,(*(undefined4 *)(gen_frame + 0x18)),0);
        F_0042cc20(((undefined1 *)(gen_frame + 0x1e0)),uVar8,uVar18);
        F_0042ccf0((undefined *)(iVar14 + 0x148),((undefined1 *)(gen_frame + 0x1e0)));
        uVar17 = F_0042c880(((undefined1 *)(gen_frame + 0x1e0)));
        pBVar6 = (undefined *)uVar17;
        *(undefined4 *)(iVar14 + 0x144) = 2;
        *(undefined * PTR32 *)(iVar14 + 0x1a0) = (*(undefined * PTR32 *)(gen_frame + 0x1c));
        uVar11 = 2;
      }
    }
    if (uVar11 < uVar5) {
      pBVar6 = (undefined *)(uVar11 * 0x140);
      iVar14 = uVar5 - uVar11;
      do {
        pBVar6[*(int *)(this + 0x2f8)] = (undefined1)0x0;
        pBVar6 = pBVar6 + 0x140;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
    }
LAB_00708db2: ;
    REFG(undefined4, 0x14a458f) = 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x7c8)) ^ (uint)(uint)(gen_frame + 0x7cc));
  return (uint)pBVar6;
}

/* ref: Client::Game::Event::BattleLeveDirector::vf31 */
uint F_00708e00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x708e00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  int * piVar5;
  uint uVar6;
  undefined * pvVar7;
  ulonglong uVar8;
  int iVar9;
  int * PTR32 * ppiVar10;
  
  iVar9 = REFG(int, 0x1379694);
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x24)) + 0)) = (byte)param_3;
  (*(uint *)(gen_frame + 0x24)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x24)), 1, 3),(byte)param_3);
  if ((param_1 != 0x71d) && (param_1 != 0x723)) {
    uVar3 = F_00704070((undefined *)this,param_1,param_2,(*(uint *)(gen_frame + 0x24)));
    F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
    return uVar3;
  }
  uVar3 = F_00a64450(&REFG(undefined, 0x14a9a18),*(undefined4 *)(param_2 + -4 + (uint)(byte)param_3 * 4));
  (*(uint *)(gen_frame + 0x24)) = uVar3;
  if ((iVar9 != 0) && (uVar3 != 0)) {
    piVar4 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    (*(int * PTR32 *)(gen_frame + 0xc)) = (int *)0x0;
    piVar5 = (int *)F_004296a0(8,0,0x2c4);
    (*(int * PTR32 *)(gen_frame + 0xc)) = piVar5;
    if (piVar5 != (int *)0x0) {
      *piVar5 = 0;
      piVar5[1] = 0;
    }
    *piVar5 = (int)&(*(int * PTR32 *)(gen_frame + 0xc));
    iVar1 = (byte)param_3 - 1;
    (*(int *)(gen_frame + 0x10)) = 0;
    (*(uint *)(gen_frame + 0x14)) = 0;
    (*(int *)(gen_frame + 0x18)) = 0;
    (*(int *)(gen_frame + 0x1c)) = 0;
    (*(byte *)(gen_frame + 0x2b)) = 0;
    if (0 < iVar1) {
      uVar3 = 0;
      do {
        (*(undefined4 *)(gen_frame + 0x2c)) = 0;
        (*(undefined4 *)(gen_frame + 0x2c)) = *(undefined4 *)(param_2 + uVar3 * 4);
        (*(undefined4 * PTR32 *)(gen_frame + 0x30)) = &(*(undefined4 *)(gen_frame + 0x2c));
        (*(char *)(gen_frame + 0x34)) = '\0';
        if ((*(uint *)(gen_frame + 0x14)) <= (*(int *)(gen_frame + 0x1c)) + 1U) {
          F_00486f80(&(*(int * PTR32 *)(gen_frame + 0xc)),1);
        }
        uVar3 = (*(int *)(gen_frame + 0x18)) + (*(int *)(gen_frame + 0x1c));
        if ((*(uint *)(gen_frame + 0x14)) <= uVar3) {
          uVar3 = uVar3 - (*(uint *)(gen_frame + 0x14));
        }
        if (*(int *)((*(int *)(gen_frame + 0x10)) + uVar3 * 4) == 0) {
          uVar6 = F_004296a0(0xc,0,0x2c4);
          *(uint *)((*(int *)(gen_frame + 0x10)) + uVar3 * 4) = uVar6;
        }
        pvVar7 = *(undefined * PTR32 *)((*(int *)(gen_frame + 0x10)) + uVar3 * 4);
        if (pvVar7 != (undefined *)0x0) {
          F_00492f50(pvVar7,&(*(undefined4 *)(gen_frame + 0x2c)));
        }
        (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0x1c)) + 1;
        if ((*(undefined4 * PTR32 *)(gen_frame + 0x30)) != (undefined4 *)0x0) {
          if (((*(char *)(gen_frame + 0x34)) != '\0') && ((*(char *)(gen_frame + 0x34)) == '\x01')) {
            pvVar7 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x30));
            *(int *)((int)pvVar7 + 0x54) = *(int *)((int)pvVar7 + 0x54) + -1;
            if (*(int *)((int)pvVar7 + 0x54) < 1) {
              F_0042c880(pvVar7);
              F_00406ad0(pvVar7);
            }
          }
          (*(undefined4 * PTR32 *)(gen_frame + 0x30)) = (undefined4 *)0x0;
          (*(char *)(gen_frame + 0x34)) = -1;
        }
        bVar2 = (*(byte *)(gen_frame + 0x2b)) + 1;
        (*(byte *)(gen_frame + 0x2b)) = bVar2;
        uVar3 = (uint)bVar2;
      } while ((int)uVar3 < iVar1);
    }
    ppiVar10 = &(*(int * PTR32 *)(gen_frame + 0xc));
    uVar3 = (*(uint *)(gen_frame + 0x24));
    pvVar7 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
    F_0046abb0(pvVar7,param_1,iVar9,uVar3,ppiVar10);
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0xc)));
    uVar8 = F_00429760((*(int * PTR32 *)(gen_frame + 0xc)),8,0x2c4);
    uVar3 = (uint)uVar8;
  }
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar3;
}

/* ref: Client::Game::Event::BattleLeveDirector::vf37 */
uint F_00708fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x708fe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  undefined * pvVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  int * PTR32 * ppiVar6;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  if (param_1 == *(uint *)(this + 0x504)) {
    *(undefined4 *)(this + 0x504) = 0;
    uVar5 = *(undefined4 *)(this + 0x380);
    (*(int * PTR32 *)(gen_frame + 0x4)) = (int *)0x0;
    piVar1 = (int *)F_004296a0(8,0,0x2c4);
    (*(int * PTR32 *)(gen_frame + 0x4)) = piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar1 = 0;
      piVar1[1] = 0;
    }
    *piVar1 = (int)&(*(int * PTR32 *)(gen_frame + 0x4));
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = uVar5;
    (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = &(*(undefined4 *)(gen_frame + 0x1c));
    (*(char *)(gen_frame + 0x24)) = '\0';
    F_00493b50(&(*(int * PTR32 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x1c)));
    if ((((*(undefined4 * PTR32 *)(gen_frame + 0x20)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0x24)) != '\0')) && ((*(char *)(gen_frame + 0x24)) == '\x01')) {
      pvVar2 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x20));
      *(int *)((int)pvVar2 + 0x54) = *(int *)((int)pvVar2 + 0x54) + -1;
      if (*(int *)((int)pvVar2 + 0x54) < 1) {
        F_0042c880(pvVar2);
        F_00406ad0(pvVar2);
      }
    }
    piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    ppiVar6 = &(*(int * PTR32 *)(gen_frame + 0x4));
    uVar5 = 0x726;
    pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
    F_0046aa70(pvVar2,uVar5,ppiVar6);
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x4)));
    uVar4 = F_00429760((*(int * PTR32 *)(gen_frame + 0x4)),8,0x2c4);
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
    return (uint)(uint3)(uVar4 >> 8) << 8;
  }
  uVar3 = param_1;
  if (param_1 == *(uint *)(this + 0x508)) {
    *(undefined4 *)(this + 0x508) = 0;
    (*(int * PTR32 *)(gen_frame + 0x4)) = (int *)0x0;
    piVar1 = (int *)F_004296a0(8,0,0x2c4);
    (*(int * PTR32 *)(gen_frame + 0x4)) = piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar1 = 0;
      piVar1[1] = 0;
    }
    *piVar1 = (int)&(*(int * PTR32 *)(gen_frame + 0x4));
    uVar5 = *(undefined4 *)(this + 0x50c);
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    ppiVar6 = &(*(int * PTR32 *)(gen_frame + 0x4));
    pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
    F_0046aa70(pvVar2,uVar5,ppiVar6);
    *(undefined4 *)(this + 0x50c) = 0;
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x4)));
    uVar4 = F_00429760((*(int * PTR32 *)(gen_frame + 0x4)),8,0x2c4);
    uVar3 = (uint)uVar4;
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar3 & 0xffffff00;
}

/* ref: FUN_00709190 */
uint F_00709190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x709190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  uint * puVar1;
  int * piVar2;
  uint uVar3;
  undefined4 * this_00;
  ulonglong uVar4;
  
  (*(uint *)(gen_frame + 0x98)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  if (*(ushort *)(param_1 + 4) != 0) {
    puVar1 = (uint *)F_00ab33c0((uint)*(ushort *)(param_1 + 4));
    if (puVar1 != (uint *)0x0) {
      (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
      piVar2 = (int *)F_004296a0(8,0,0x2c4);
      (*(int * PTR32 *)(gen_frame + 0x8)) = piVar2;
      if (piVar2 != (int *)0x0) {
        *piVar2 = 0;
        piVar2[1] = 0;
      }
      *piVar2 = (int)&(*(int * PTR32 *)(gen_frame + 0x8));
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      if (*(int *)((int)this + 0x4e8) == 3) {
        (*(uint *)(gen_frame + 0x8c)) = 0;
        (*(uint *)(gen_frame + 0x8c)) = *(uint *)((int)this + 0x380);
        (*(uint * PTR32 *)(gen_frame + 0x90)) = &(*(uint *)(gen_frame + 0x8c));
        (*(undefined1 *)(gen_frame + 0x94)) = 0;
        F_00493bc0(&(*(int * PTR32 *)(gen_frame + 0x8)),&(*(uint *)(gen_frame + 0x8c)));
        F_004917c0(&(*(uint *)(gen_frame + 0x8c)));
      }
      F_0042cc20(((undefined1 *)(gen_frame + 0x20)),(*puVar1 & 0xffffff) + (int)puVar1,REFG(undefined4, 0x108cc50));
      F_00ba0d20((undefined *)((int)this + 0x4f0),((undefined1 *)(gen_frame + 0x20)),&(*(int * PTR32 *)(gen_frame + 0x8)));
      F_0042c880(((undefined1 *)(gen_frame + 0x20)));
      F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x8)));
      F_00429760((*(int * PTR32 *)(gen_frame + 0x8)),8,0x2c4);
    }
  }
  uVar3 = (uint)*(ushort *)(param_1 + 6);
  if (*(ushort *)(param_1 + 6) == 0) goto LAB_00709402;
  puVar1 = (uint *)F_00ab33c0(uVar3);
  uVar3 = 0;
  if (puVar1 == (uint *)0x0) goto LAB_00709402;
  (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
  piVar2 = (int *)F_004296a0(8,0,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0x8)) = piVar2;
  if (piVar2 != (int *)0x0) {
    *piVar2 = 0;
    piVar2[1] = 0;
  }
  *piVar2 = (int)&(*(int * PTR32 *)(gen_frame + 0x8));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  if (*(int *)((int)this + 0x4e8) == 1) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x78)) = &(*(undefined4 *)(gen_frame + 0x74));
    (*(undefined4 *)(gen_frame + 0x74)) = 0;
    (*(undefined4 *)(gen_frame + 0x74)) = *(undefined4 *)((int)this + 0x368);
    (*(undefined1 *)(gen_frame + 0x7c)) = 0;
    F_00493b50(&(*(int * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x74)));
    this_00 = &(*(undefined4 *)(gen_frame + 0x74));
LAB_007093a5: ;
    F_004917c0(this_00);
  }
  else if (*(int *)((int)this + 0x4e8) == 3) {
    (*(uint *)(gen_frame + 0x8c)) = 0;
    (*(uint *)(gen_frame + 0x8c)) = (uint)*(byte *)((int)this + 0x4ec);
    (*(uint * PTR32 *)(gen_frame + 0x90)) = &(*(uint *)(gen_frame + 0x8c));
    (*(undefined1 *)(gen_frame + 0x94)) = 0;
    F_00493b50(&(*(int * PTR32 *)(gen_frame + 0x8)),&(*(uint *)(gen_frame + 0x8c)));
    F_004917c0(&(*(uint *)(gen_frame + 0x8c)));
    (*(undefined4 *)(gen_frame + 0x80)) = 0;
    (*(undefined4 *)(gen_frame + 0x80)) = *(undefined4 *)((int)this + 0x380);
    (*(undefined4 * PTR32 *)(gen_frame + 0x84)) = &(*(undefined4 *)(gen_frame + 0x80));
    (*(undefined1 *)(gen_frame + 0x88)) = 0;
    F_00493bc0(&(*(int * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x80)));
    this_00 = &(*(undefined4 *)(gen_frame + 0x80));
    goto LAB_007093a5;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x20)),(*puVar1 & 0xffffff) + (int)puVar1,REFG(undefined4, 0x108cc50));
  F_00ba0d50((undefined *)((int)this + 0x4f0),((undefined1 *)(gen_frame + 0x20)),&(*(int * PTR32 *)(gen_frame + 0x8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x20)));
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x8)));
  uVar4 = F_00429760((*(int * PTR32 *)(gen_frame + 0x8)),8,0x2c4);
  uVar3 = (uint)uVar4;
LAB_00709402: ;
  F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
  return uVar3;
}

/* ref: FUN_00709420 */
uint F_00709420(unsigned int gen_a0)
{
  GEN_ENTER(0x709420u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * pvVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)0x0;
  puVar2 = (undefined4 *)F_004296a0(8,0,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *puVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
  (*(uint *)(gen_frame + 0x1c)) = 0;
  (*(int *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x14)) = 0;
  (*(uint *)(gen_frame + 0x1c)) = (uint)*(ushort *)((int)this + 0xac);
  (*(uint * PTR32 *)(gen_frame + 0x20)) = &(*(uint *)(gen_frame + 0x1c));
  (*(char *)(gen_frame + 0x24)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),1);
  uVar4 = (*(int *)(gen_frame + 0x14)) + (*(int *)(gen_frame + 0x10));
  if ((*(uint *)(gen_frame + 0xc)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0xc));
  }
  if (*(int *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *(uint *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) = uVar3;
  }
  pvVar1 = *(undefined * PTR32 *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4);
  if (pvVar1 != (undefined *)0x0) {
    F_00492f50(pvVar1,&(*(uint *)(gen_frame + 0x1c)));
  }
  (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 1;
  if ((((*(uint * PTR32 *)(gen_frame + 0x20)) != (uint *)0x0) && ((*(char *)(gen_frame + 0x24)) != '\0')) && ((*(char *)(gen_frame + 0x24)) == '\x01')) {
    pvVar1 = (undefined *)*(*(uint * PTR32 *)(gen_frame + 0x20));
    *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
    if (*(int *)((int)pvVar1 + 0x54) < 1) {
      F_0042c880(pvVar1);
      F_00406ad0(pvVar1);
    }
  }
  F_00ab3200(0x23,&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),(int)this + 0x58);
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
  uVar5 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x4)),8,0x2c4);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return (uint)uVar5;
}

/* ref: FUN_00709540 */
uint F_00709540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x709540u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * pvVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  F_0042aca0(param_2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)0x0;
  puVar2 = (undefined4 *)F_004296a0(8,0,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *puVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(int *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = param_1;
  (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = &(*(undefined4 *)(gen_frame + 0x1c));
  (*(char *)(gen_frame + 0x24)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),1);
  uVar4 = (*(int *)(gen_frame + 0x14)) + (*(int *)(gen_frame + 0x10));
  if ((*(uint *)(gen_frame + 0xc)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0xc));
  }
  if (*(int *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *(uint *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) = uVar3;
  }
  pvVar1 = *(undefined * PTR32 *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4);
  if (pvVar1 != (undefined *)0x0) {
    F_00492f50(pvVar1,&(*(undefined4 *)(gen_frame + 0x1c)));
  }
  (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 1;
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x20)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0x24)) != '\0')) && ((*(char *)(gen_frame + 0x24)) == '\x01')) {
    pvVar1 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x20));
    *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
    if (*(int *)((int)pvVar1 + 0x54) < 1) {
      F_0042c880(pvVar1);
      F_00406ad0(pvVar1);
    }
  }
  F_00ab3200(0x261,&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),param_2);
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
  uVar5 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x4)),8,0x2c4);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return (uint)uVar5;
}

/* ref: FUN_00709660 */
uint F_00709660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x709660u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * pvVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  F_0042aca0(param_2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)0x0;
  puVar2 = (undefined4 *)F_004296a0(8,0,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *puVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
  (*(uint *)(gen_frame + 0x1c)) = 0;
  (*(int *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x14)) = 0;
  (*(uint *)(gen_frame + 0x1c)) = (uint)*(byte *)((int)this + 0x1c8);
  (*(uint * PTR32 *)(gen_frame + 0x20)) = &(*(uint *)(gen_frame + 0x1c));
  (*(char *)(gen_frame + 0x24)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),1);
  uVar4 = (*(int *)(gen_frame + 0x14)) + (*(int *)(gen_frame + 0x10));
  if ((*(uint *)(gen_frame + 0xc)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0xc));
  }
  if (*(int *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *(uint *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) = uVar3;
  }
  pvVar1 = *(undefined * PTR32 *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4);
  if (pvVar1 != (undefined *)0x0) {
    F_00492f50(pvVar1,&(*(uint *)(gen_frame + 0x1c)));
  }
  (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 1;
  if ((((*(uint * PTR32 *)(gen_frame + 0x20)) != (uint *)0x0) && ((*(char *)(gen_frame + 0x24)) != '\0')) && ((*(char *)(gen_frame + 0x24)) == '\x01')) {
    pvVar1 = (undefined *)*(*(uint * PTR32 *)(gen_frame + 0x20));
    *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
    if (*(int *)((int)pvVar1 + 0x54) < 1) {
      F_0042c880(pvVar1);
      F_00406ad0(pvVar1);
    }
  }
  F_00ab3200(0x25b,&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),param_2);
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
  uVar5 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x4)),8,0x2c4);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return (uint)uVar5;
}

/* ref: FUN_00709790 */
uint F_00709790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x709790u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint * puVar1;
  int * piVar2;
  undefined * pvVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte * pbVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  (*(uint * PTR32 *)(gen_frame + 0x20)) = this;
  uVar4 = param_1;
  if (*(uint *)((int)this + 0x2a8) < 5) {
    (*(int * PTR32 *)(gen_frame + 0x24)) = (int *)0x0;
    piVar2 = (int *)F_004296a0(8,0,0x2c4);
    (*(int * PTR32 *)(gen_frame + 0x24)) = piVar2;
    if (piVar2 != (int *)0x0) {
      *piVar2 = 0;
      piVar2[1] = 0;
    }
    *piVar2 = (int)&(*(int * PTR32 *)(gen_frame + 0x24));
    (*(int *)(gen_frame + 0x28)) = 0;
    (*(uint *)(gen_frame + 0x2c)) = 0;
    (*(int *)(gen_frame + 0x30)) = 0;
    (*(int *)(gen_frame + 0x34)) = 0;
    (*(uint *)(gen_frame + 0x14)) = 0;
    if (*(int *)((int)this + 0x2a8) != 0) {
      pbVar7 = (byte *)((int)this + 0x74);
      do {
        if ((*pbVar7 & 1) == 0) {
          if (pbVar7[-0xe] == 0) {
            uVar4 = *(uint *)(pbVar7 + -0xc);
          }
          else {
            pvVar3 = (undefined *)F_00a3a860(pbVar7 + -0x14);
            uVar4 = F_0046e5e0(pvVar3);
          }
        }
        else if (pbVar7[-0xe] == 0) {
          uVar4 = *(int *)(pbVar7 + -0xc) + 2000000;
        }
        else {
          pvVar3 = (undefined *)F_00a3a860(pbVar7 + -0x14);
          uVar4 = F_0046e5e0(pvVar3);
          uVar4 = uVar4 + 1000000;
        }
        (*(uint *)(gen_frame + 0x3c)) = 0;
        (*(uint *)(gen_frame + 0x3c)) = uVar4;
        (*(uint * PTR32 *)(gen_frame + 0x40)) = &(*(uint *)(gen_frame + 0x3c));
        ((char *)(gen_frame + 0x44))[0] = '\0';
        if ((*(uint *)(gen_frame + 0x2c)) <= (*(int *)(gen_frame + 0x34)) + 1U) {
          F_00486f80(&(*(int * PTR32 *)(gen_frame + 0x24)),1);
        }
        uVar4 = (*(int *)(gen_frame + 0x30)) + (*(int *)(gen_frame + 0x34));
        if ((*(uint *)(gen_frame + 0x2c)) <= uVar4) {
          uVar4 = uVar4 - (*(uint *)(gen_frame + 0x2c));
        }
        if (*(int *)((*(int *)(gen_frame + 0x28)) + uVar4 * 4) == 0) {
          uVar5 = F_004296a0(0xc,0,0x2c4);
          *(uint *)((*(int *)(gen_frame + 0x28)) + uVar4 * 4) = uVar5;
        }
        puVar1 = *(uint * PTR32 *)((*(int *)(gen_frame + 0x28)) + uVar4 * 4);
        if (puVar1 != (uint *)0x0) {
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined1 *)(puVar1 + 2) = 0xff;
          if ((((char *)(gen_frame + 0x44))[0] != -1) && (puVar1 != &(*(uint *)(gen_frame + 0x3c)))) {
            (*(uint * PTR32 *)(gen_frame + 0xc)) = puVar1;
            (*(uint * PTR32 *)(gen_frame + 0x10)) = (*(uint * PTR32 *)(gen_frame + 0x40));
            if (((char *)(gen_frame + 0x44))[0] == '\0') {
              F_004919b0(&(*(uint * PTR32 *)(gen_frame + 0xc)));
            }
            else if (((char *)(gen_frame + 0x44))[0] == '\x01') {
              F_00491a60(&(*(uint * PTR32 *)(gen_frame + 0xc)));
            }
          }
        }
        (*(int *)(gen_frame + 0x34)) = (*(int *)(gen_frame + 0x34)) + 1;
        if ((*(uint * PTR32 *)(gen_frame + 0x40)) != (uint *)0x0) {
          if ((((char *)(gen_frame + 0x44))[0] != '\0') && (((char *)(gen_frame + 0x44))[0] == '\x01')) {
            pvVar3 = (undefined *)*(*(uint * PTR32 *)(gen_frame + 0x40));
            *(int *)((int)pvVar3 + 0x54) = *(int *)((int)pvVar3 + 0x54) + -1;
            if (*(int *)((int)pvVar3 + 0x54) < 1) {
              F_0042c880(pvVar3);
              F_00406ad0(pvVar3);
            }
          }
          (*(uint * PTR32 *)(gen_frame + 0x40)) = (uint *)0x0;
          ((char *)(gen_frame + 0x44))[0] = -1;
        }
        uVar5 = F_00a3a8a0(pbVar7 + -0x14);
        uVar4 = (*(uint *)(gen_frame + 0x54));
        (*(uint *)(gen_frame + 0x4c)) = 0;
        (*(uint *)(gen_frame + 0x4c)) = uVar5;
        (*(uint * PTR32 *)(gen_frame + 0x50)) = &(*(uint *)(gen_frame + 0x4c));
        (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x54)) + 0)) = 0;
        (*(uint *)(gen_frame + 0x54)) = uVar4 & 0xffffff00;
        if ((*(uint *)(gen_frame + 0x2c)) <= (*(int *)(gen_frame + 0x34)) + 1U) {
          F_00486f80(&(*(int * PTR32 *)(gen_frame + 0x24)),1);
        }
        uVar4 = (*(int *)(gen_frame + 0x30)) + (*(int *)(gen_frame + 0x34));
        if ((*(uint *)(gen_frame + 0x2c)) <= uVar4) {
          uVar4 = uVar4 - (*(uint *)(gen_frame + 0x2c));
        }
        if (*(int *)((*(int *)(gen_frame + 0x28)) + uVar4 * 4) == 0) {
          uVar5 = F_004296a0(0xc,0,0x2c4);
          *(uint *)((*(int *)(gen_frame + 0x28)) + uVar4 * 4) = uVar5;
        }
        puVar1 = *(uint * PTR32 *)((*(int *)(gen_frame + 0x28)) + uVar4 * 4);
        if (puVar1 != (uint *)0x0) {
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined1 *)(puVar1 + 2) = 0xff;
          if (((char)(*(uint *)(gen_frame + 0x54)) != -1) && (puVar1 != &(*(uint *)(gen_frame + 0x4c)))) {
            (*(uint * PTR32 *)(gen_frame + 0x18)) = puVar1;
            (*(uint * PTR32 *)(gen_frame + 0x1c)) = (*(uint * PTR32 *)(gen_frame + 0x50));
            if ((char)(*(uint *)(gen_frame + 0x54)) == '\0') {
              F_004919b0(&(*(uint * PTR32 *)(gen_frame + 0x18)));
            }
            else if ((char)(*(uint *)(gen_frame + 0x54)) == '\x01') {
              F_00491a60(&(*(uint * PTR32 *)(gen_frame + 0x18)));
            }
          }
        }
        (*(int *)(gen_frame + 0x34)) = (*(int *)(gen_frame + 0x34)) + 1;
        if ((*(uint * PTR32 *)(gen_frame + 0x50)) != (uint *)0x0) {
          if (((char)(*(uint *)(gen_frame + 0x54)) != '\0') && ((char)(*(uint *)(gen_frame + 0x54)) == '\x01')) {
            pvVar3 = (undefined *)*(*(uint * PTR32 *)(gen_frame + 0x50));
            *(int *)((int)pvVar3 + 0x54) = *(int *)((int)pvVar3 + 0x54) + -1;
            if (*(int *)((int)pvVar3 + 0x54) < 1) {
              F_0042c880(pvVar3);
              F_00406ad0(pvVar3);
            }
          }
          (*(uint * PTR32 *)(gen_frame + 0x50)) = (uint *)0x0;
          (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x54)) + 0)) = 0xff;
          (*(uint *)(gen_frame + 0x54)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x54)), 1, 3),0xff);
        }
        uVar4 = (*(uint *)(gen_frame + 0x14)) + 1;
        pbVar7 = pbVar7 + 0xa8;
        (*(uint *)(gen_frame + 0x14)) = uVar4;
        this = (*(uint * PTR32 *)(gen_frame + 0x20));
      } while (uVar4 < (*(uint * PTR32 *)(gen_frame + 0x20))[0xaa]);
    }
    uVar4 = (*(uint *)(gen_frame + 0x54));
    (*(uint *)(gen_frame + 0x4c)) = 0;
    (*(uint *)(gen_frame + 0x4c)) = *(uint *)this;
    (*(uint * PTR32 *)(gen_frame + 0x50)) = &(*(uint *)(gen_frame + 0x4c));
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x54)) + 0)) = 0;
    (*(uint *)(gen_frame + 0x54)) = uVar4 & 0xffffff00;
    if ((*(uint *)(gen_frame + 0x2c)) <= (*(int *)(gen_frame + 0x34)) + 1U) {
      F_00486f80(&(*(int * PTR32 *)(gen_frame + 0x24)),1);
    }
    uVar4 = (*(int *)(gen_frame + 0x30)) + (*(int *)(gen_frame + 0x34));
    if ((*(uint *)(gen_frame + 0x2c)) <= uVar4) {
      uVar4 = uVar4 - (*(uint *)(gen_frame + 0x2c));
    }
    if (*(int *)((*(int *)(gen_frame + 0x28)) + uVar4 * 4) == 0) {
      uVar5 = F_004296a0(0xc,0,0x2c4);
      *(uint *)((*(int *)(gen_frame + 0x28)) + uVar4 * 4) = uVar5;
    }
    puVar1 = *(uint * PTR32 *)((*(int *)(gen_frame + 0x28)) + uVar4 * 4);
    if (puVar1 != (uint *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined1 *)(puVar1 + 2) = 0xff;
      if (((char)(*(uint *)(gen_frame + 0x54)) != -1) && (puVar1 != &(*(uint *)(gen_frame + 0x4c)))) {
        (*(uint * PTR32 *)(gen_frame + 0x18)) = puVar1;
        (*(uint * PTR32 *)(gen_frame + 0x1c)) = (*(uint * PTR32 *)(gen_frame + 0x50));
        if ((char)(*(uint *)(gen_frame + 0x54)) == '\0') {
          F_004919b0(&(*(uint * PTR32 *)(gen_frame + 0x18)));
        }
        else if ((char)(*(uint *)(gen_frame + 0x54)) == '\x01') {
          F_00491a60(&(*(uint * PTR32 *)(gen_frame + 0x18)));
        }
      }
    }
    (*(int *)(gen_frame + 0x34)) = (*(int *)(gen_frame + 0x34)) + 1;
    if ((((*(uint * PTR32 *)(gen_frame + 0x50)) != (uint *)0x0) && ((char)(*(uint *)(gen_frame + 0x54)) != '\0')) && ((char)(*(uint *)(gen_frame + 0x54)) == '\x01')) {
      pvVar3 = (undefined *)*(*(uint * PTR32 *)(gen_frame + 0x50));
      *(int *)((int)pvVar3 + 0x54) = *(int *)((int)pvVar3 + 0x54) + -1;
      if (*(int *)((int)pvVar3 + 0x54) < 1) {
        F_0042c880(pvVar3);
        F_00406ad0(pvVar3);
      }
    }
    iVar6 = 0;
    (*(undefined4 *)(gen_frame + 0x48)) = 0x18f3e;
    (*(uint *)(gen_frame + 0x4c)) = 0x18f3f;
    (*(uint * PTR32 *)(gen_frame + 0x50)) = (uint *)0x18f40;
    (*(uint *)(gen_frame + 0x54)) = 0x18f41;
    uVar8 = *(undefined4 *)(((char *)(gen_frame + 0x44)) + (*(uint * PTR32 *)(gen_frame + 0x20))[0xaa] * 4);
    if (((*(uint * PTR32 *)(gen_frame + 0x20))[0xaa] == 1) &&
       (uVar5 = F_00a3a8a0((*(uint * PTR32 *)(gen_frame + 0x20)) + 0x18), uVar4 = (*(uint *)(gen_frame + 0x54)), uVar5 != 0)) {
      (*(uint *)(gen_frame + 0x4c)) = 0;
      (*(uint *)(gen_frame + 0x4c)) = (*(uint * PTR32 *)(gen_frame + 0x20))[0x2b];
      (*(uint * PTR32 *)(gen_frame + 0x50)) = &(*(uint *)(gen_frame + 0x4c));
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x54)) + 0)) = 0;
      (*(uint *)(gen_frame + 0x54)) = uVar4 & 0xffffff00;
      F_00493b50(&(*(int * PTR32 *)(gen_frame + 0x24)),&(*(uint *)(gen_frame + 0x4c)));
      if (((*(uint * PTR32 *)(gen_frame + 0x50)) != (uint *)0x0) && (((char)(*(uint *)(gen_frame + 0x54)) != '\0' && ((char)(*(uint *)(gen_frame + 0x54)) == '\x01')))) {
        pvVar3 = (undefined *)*(*(uint * PTR32 *)(gen_frame + 0x50));
        *(int *)((int)pvVar3 + 0x54) = *(int *)((int)pvVar3 + 0x54) + -1;
        if (*(int *)((int)pvVar3 + 0x54) < 1) {
          F_0042c880(pvVar3);
          F_00406ad0(pvVar3);
        }
      }
      uVar8 = 0x18f42;
      iVar6 = 0x18f43;
    }
    F_00ab3200(uVar8,&(*(int * PTR32 *)(gen_frame + 0x24)),param_1);
    if (iVar6 != 0) {
      F_00ab3200(iVar6,&(*(int * PTR32 *)(gen_frame + 0x24)),param_2);
    }
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x24)));
    uVar9 = F_00429760((*(int * PTR32 *)(gen_frame + 0x24)),8,0x2c4);
    uVar4 = (uint)uVar9;
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar4;
}

/* ref: FUN_00709be0 */
uint F_00709be0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x709be0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  uint * PTR32 * PTR32 * PTR32 * param_5 = (uint * PTR32 * PTR32 * PTR32 *)(uintptr_t)gen_a4;
  int param_6 = (int)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  short sVar1;
  uint * PTR32 * PTR32 * pppuVar2;
  int * piVar3;
  undefined * pvVar4;
  uint uVar5;
  uint * PTR32 * PTR32 * PTR32 * ppppuVar6;
  undefined4 * puVar7;
  uint uVar8;
  ushort * puVar9;
  int iVar10;
  bool bVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  (*(uint *)(gen_frame + 0x98)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  (*(ushort * PTR32 *)(gen_frame + 0x30)) = param_2;
  (*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x24)) = (uint * PTR32 * PTR32 *)param_5;
  puVar9 = param_2;
  if ((param_2 == (ushort *)0x0) || (param_3 == 0)) goto LAB_0070aa91;
  piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  (*(int * PTR32 *)(gen_frame + 0x34)) = piVar3;
  if (param_1 == 0) {
    F_005a2710((undefined *)(param_4 + 0x2708),4);
    *(undefined4 *)(param_4 + 0x270c) = 2;
    uVar12 = 0x1cc;
LAB_00709c79: ;
    uVar14 = 0;
    uVar13 = 0;
    pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3)));
    uVar5 = F_0043bd00(pvVar4,uVar12,uVar13,uVar14);
    (*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x2c)) = (uint * PTR32 * PTR32 *)uVar5;
    F_005a2710((undefined *)(param_4 + 0x2a40),6);
    uVar14 = 0;
    *(uint * PTR32 * PTR32 * PTR32 *)(param_4 + 0x2a44) = (*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x2c));
    uVar13 = 0;
    uVar12 = 0x1cd;
    pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3)));
    ppppuVar6 = (uint * PTR32 * PTR32 * PTR32 *)F_0043bd00(pvVar4,uVar12,uVar13,uVar14);
    (*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x2c)) = (uint * PTR32 * PTR32 *)ppppuVar6;
    F_005a2710((undefined *)(param_4 + 0x2a48),6);
    *(uint * PTR32 * PTR32 * PTR32 *)(param_4 + 0x2a4c) = (*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x2c));
  }
  else if (param_1 == 1) {
    F_005a2710((undefined *)(param_4 + 0x2708),4);
    *(undefined4 *)(param_4 + 0x270c) = 3;
    uVar12 = 0x1d6;
    goto LAB_00709c79;
  }
  uVar5 = F_0042a990((*(ushort * PTR32 *)(gen_frame + 0x30)) + 2);
  (*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x2c)) = (uint * PTR32 * PTR32 *)uVar5;
  F_005a2710((undefined *)(param_4 + 0x2720),6);
  *(uint * PTR32 * PTR32 * PTR32 *)(param_4 + 0x2724) = (*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x2c));
  uVar5 = F_0042a990((*(ushort * PTR32 *)(gen_frame + 0x30)) + 0x2c);
  (*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x2c)) = (uint * PTR32 * PTR32 *)uVar5;
  F_005a2710((undefined *)(param_4 + 10000),6);
  *(uint * PTR32 * PTR32 * PTR32 *)(param_4 + 0x2714) = (*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x2c));
  F_005a2710((undefined *)(param_4 + 0x2718),4);
  *(undefined4 *)(param_4 + 0x271c) = 1;
  (*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x2c)) = (uint * PTR32 * PTR32 *)(uint)*(*(ushort * PTR32 *)(gen_frame + 0x30));
  F_005a2710((undefined *)(param_4 + 0x2a30),4);
  *(uint * PTR32 * PTR32 * PTR32 *)(param_4 + 0x2a34) = (*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x2c));
  (*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x2c)) = (uint * PTR32 * PTR32 *)*(undefined4 *)(param_3 + 0x1a4);
  F_005a2710((undefined *)(param_4 + 0x2730),4);
  *(uint * PTR32 * PTR32 * PTR32 *)(param_4 + 0x2734) = (*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x2c));
  (*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x2c)) = (uint * PTR32 * PTR32 *)*(undefined4 *)(param_3 + 0x1a8);
  F_005a2710((undefined *)(param_4 + 0x2a20),4);
  *(uint * PTR32 * PTR32 * PTR32 *)(param_4 + 0x2a24) = (*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x2c));
  (*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x2c)) = (uint * PTR32 * PTR32 *)*(undefined4 *)(param_3 + 0x1ac);
  F_005a2710((undefined *)(param_4 + 0x2a38),4);
  *(uint * PTR32 * PTR32 * PTR32 *)(param_4 + 0x2a3c) = (*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x2c));
  (*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x2c)) = (uint * PTR32 * PTR32 *)*(undefined4 *)(param_3 + 0x1b0);
  F_005a2710((undefined *)(param_4 + 0x2b68),4);
  *(uint * PTR32 * PTR32 * PTR32 *)(param_4 + 0x2b6c) = (*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x2c));
  (*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x2c)) = (uint * PTR32 * PTR32 *)*(uint * PTR32 * PTR32 * PTR32 * PTR32 *)(param_3 + 0x1b4);
  F_005a2710((undefined *)(param_4 + 0x2a28),4);
  *(uint * PTR32 * PTR32 * PTR32 *)(param_4 + 0x2a2c) = (*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x2c));
  F_005a2710((undefined *)(param_4 + 0x2728),4);
  *(undefined4 *)(param_4 + 0x272c) = 0xefee;
  F_005a2710((undefined *)(param_4 + 0x29a0),4);
  *(undefined4 *)(param_4 + 0x29a4) = 1;
  F_0042aca0(&REFG(undefined, 0x1489eb8));
  if (*(char *)(param_3 + 0x1bc) == '\x04') {
LAB_00709f96: ;
    F_0042b630(((undefined1 *)(gen_frame + 0x38)));
    F_00709790((*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x24)),&REFG(undefined, 0x1489eb8),((undefined1 *)(gen_frame + 0x38)));
    F_0042e360(&REFG(undefined, 0x1489eb8),((undefined1 *)(gen_frame + 0x38)));
    F_0042c880(((undefined1 *)(gen_frame + 0x38)));
  }
  else {
    uVar5 = F_00ab3510(2);
    iVar10 = 0;
    do {
      if (*(uint *)(uVar5 + iVar10 * 4) == (uint)*(byte *)(param_3 + 0x1bc)) goto LAB_00709f96;
      iVar10 = iVar10 + 1;
    } while (iVar10 < 8);
    uVar5 = F_00ab3510(1);
    iVar10 = 0;
    do {
      if (*(uint *)(uVar5 + iVar10 * 4) == (uint)*(byte *)(param_3 + 0x1bc)) {
        if ((param_6 == 0) || (*(char *)(param_6 + 0x32) == '\0')) {
          (*(ushort * PTR32 *)(gen_frame + 0x30)) = (ushort *)0x18fce;
        }
        else {
          (*(ushort * PTR32 *)(gen_frame + 0x30)) = (ushort *)0x18fcf;
        }
        goto LAB_00709e86;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < 8);
    (*(ushort * PTR32 *)(gen_frame + 0x30)) = (ushort *)0x18f39;
LAB_00709e86: ;
    (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (undefined4 *)0x0;
    (*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x24)) = (uint * PTR32 * PTR32 *)(uint)(*(byte *)(param_3 + 0x1bc) == 2);
    puVar7 = (undefined4 *)F_004296a0(8,0,0x2c4);
    (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = 0;
      puVar7[1] = 0;
    }
    *puVar7 = &(*(undefined4 * PTR32 *)(gen_frame + 0x8));
    (*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8c)) = (uint * PTR32 * PTR32 *)0x0;
    (*(int *)(gen_frame + 0xc)) = 0;
    (*(uint *)(gen_frame + 0x10)) = 0;
    (*(int *)(gen_frame + 0x14)) = 0;
    (*(int *)(gen_frame + 0x18)) = 0;
    (*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8c)) = *(uint * PTR32 * PTR32 * PTR32 *)(param_3 + 0x1c0);
    (*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x90)) = (uint * PTR32 * PTR32 *)&(*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8c));
    (*(char *)(gen_frame + 0x94)) = '\0';
    F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x8)),1);
    uVar5 = (*(int *)(gen_frame + 0x18)) + (*(int *)(gen_frame + 0x14));
    if ((*(uint *)(gen_frame + 0x10)) <= uVar5) {
      uVar5 = uVar5 - (*(uint *)(gen_frame + 0x10));
    }
    if (*(int *)((*(int *)(gen_frame + 0xc)) + uVar5 * 4) == 0) {
      uVar8 = F_004296a0(0xc,0,0x2c4);
      *(uint *)((*(int *)(gen_frame + 0xc)) + uVar5 * 4) = uVar8;
    }
    ppppuVar6 = *(uint * PTR32 * PTR32 * PTR32 * PTR32 *)((*(int *)(gen_frame + 0xc)) + uVar5 * 4);
    if (ppppuVar6 != (uint * PTR32 * PTR32 * PTR32 *)0x0) {
      *ppppuVar6 = (uint * PTR32 * PTR32 *)0x0;
      ppppuVar6[1] = (uint * PTR32 * PTR32 *)0x0;
      *(undefined1 *)(ppppuVar6 + 2) = 0xff;
      if (((*(char *)(gen_frame + 0x94)) != -1) && (ppppuVar6 != &(*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8c)))) {
        (*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x28)) = (uint * PTR32 * PTR32 *)ppppuVar6;
        (*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x2c)) = (*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x90));
        if ((*(char *)(gen_frame + 0x94)) == '\0') {
          F_004919b0(&(*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x28)));
        }
        else if ((*(char *)(gen_frame + 0x94)) == '\x01') {
          F_00491a60(&(*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x28)));
        }
      }
    }
    (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) + 1;
    if ((((uint * PTR32 * PTR32 * PTR32 *)(*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x90)) != (uint * PTR32 * PTR32 * PTR32 *)0x0) && ((*(char *)(gen_frame + 0x94)) != '\0')) && ((*(char *)(gen_frame + 0x94)) == '\x01')) {
      pppuVar2 = (uint * PTR32 * PTR32 *)*(*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x90));
      pppuVar2[0x15] = (uint * PTR32 *)((int)pppuVar2[0x15] + -1);
      if ((int)pppuVar2[0x15] < 1) {
        F_0042c880(pppuVar2);
        F_00406ad0(pppuVar2);
      }
    }
    (*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8c)) = (uint * PTR32 * PTR32 *)0x0;
    (*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8c)) = (*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x24));
    (*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x90)) = (uint * PTR32 * PTR32 *)&(*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8c));
    (*(char *)(gen_frame + 0x94)) = '\0';
    if ((*(uint *)(gen_frame + 0x10)) <= (*(int *)(gen_frame + 0x18)) + 1U) {
      F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x8)),1);
    }
    uVar5 = (*(int *)(gen_frame + 0x18)) + (*(int *)(gen_frame + 0x14));
    if ((*(uint *)(gen_frame + 0x10)) <= uVar5) {
      uVar5 = uVar5 - (*(uint *)(gen_frame + 0x10));
    }
    if (*(int *)((*(int *)(gen_frame + 0xc)) + uVar5 * 4) == 0) {
      uVar8 = F_004296a0(0xc,0,0x2c4);
      *(uint *)((*(int *)(gen_frame + 0xc)) + uVar5 * 4) = uVar8;
    }
    ppppuVar6 = *(uint * PTR32 * PTR32 * PTR32 * PTR32 *)((*(int *)(gen_frame + 0xc)) + uVar5 * 4);
    if (ppppuVar6 != (uint * PTR32 * PTR32 * PTR32 *)0x0) {
      *ppppuVar6 = (uint * PTR32 * PTR32 *)0x0;
      ppppuVar6[1] = (uint * PTR32 * PTR32 *)0x0;
      *(undefined1 *)(ppppuVar6 + 2) = 0xff;
      if (((*(char *)(gen_frame + 0x94)) != -1) && (ppppuVar6 != &(*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8c)))) {
        (*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x20)) = (uint * PTR32 * PTR32 *)ppppuVar6;
        (*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x24)) = (*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x90));
        if ((*(char *)(gen_frame + 0x94)) == '\0') {
          F_004919b0(&(*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x20)));
        }
        else if ((*(char *)(gen_frame + 0x94)) == '\x01') {
          F_00491a60(&(*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x20)));
        }
      }
    }
    (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) + 1;
    if ((((uint * PTR32 * PTR32 * PTR32 *)(*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x90)) != (uint * PTR32 * PTR32 * PTR32 *)0x0) && ((*(char *)(gen_frame + 0x94)) != '\0')) && ((*(char *)(gen_frame + 0x94)) == '\x01')) {
      pppuVar2 = (uint * PTR32 * PTR32 *)*(*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x90));
      pppuVar2[0x15] = (uint * PTR32 *)((int)pppuVar2[0x15] + -1);
      if ((int)pppuVar2[0x15] < 1) {
        F_0042c880(pppuVar2);
        F_00406ad0(pppuVar2);
      }
    }
    F_00ab3200((*(ushort * PTR32 *)(gen_frame + 0x30)),&(*(undefined4 * PTR32 *)(gen_frame + 0x8)),&REFG(undefined, 0x1489eb8));
    F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x8)));
    F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x8)),8,0x2c4);
  }
  uVar5 = F_0042a990(&REFG(undefined, 0x1489eb8));
  (*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x24)) = (uint * PTR32 * PTR32 *)uVar5;
  F_005a2710((undefined *)(param_4 + 0x29a8),6);
  *(uint * PTR32 * PTR32 * PTR32 *)(param_4 + 0x29ac) = (*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x24));
  F_005a2710((undefined *)(param_4 + 0x29d0),4);
  *(undefined4 *)(param_4 + 0x29d4) = 0;
  F_005a2710((undefined *)(param_4 + 0x29f8),6);
  *(undefined * PTR32 *)(param_4 + 0x29fc) = &REFG(undefined, 0x10b3a7e);
  uVar5 = F_0042a990(param_3);
  (*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x24)) = (uint * PTR32 * PTR32 *)uVar5;
  F_005a2710((undefined *)(param_4 + 0x2738),6);
  *(uint * PTR32 * PTR32 * PTR32 *)(param_4 + 0x273c) = (*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x24));
  ppppuVar6 = (uint * PTR32 * PTR32 * PTR32 *)F_0042a990(param_3 + 0x54);
  (*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x24)) = (uint * PTR32 * PTR32 *)ppppuVar6;
  F_005a2710((undefined *)(param_4 + 0x2740),6);
  uVar14 = 0;
  *(uint * PTR32 * PTR32 * PTR32 *)(param_4 + 0x2744) = (*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x24));
  uVar13 = 0;
  uVar12 = 0x259;
  pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x34)) + 0x18))((*(int * PTR32 *)(gen_frame + 0x34)))));
  uVar5 = F_0043bd00(pvVar4,uVar12,uVar13,uVar14);
  (*(int * PTR32 *)(gen_frame + 0x34)) = (int *)uVar5;
  F_005a2710((undefined *)(param_4 + 0x2748),6);
  *(int * PTR32 *)(param_4 + 0x274c) = (*(int * PTR32 *)(gen_frame + 0x34));
  bVar11 = *(char *)(param_3 + 0x1c8) != '\0';
  if (bVar11) {
    uVar5 = F_0042a990(param_3 + 0x150);
    (*(int * PTR32 *)(gen_frame + 0x34)) = (int *)uVar5;
    F_005a2710((undefined *)(param_4 + 0x2b28),6);
    *(int * PTR32 *)(param_4 + 0x2b2c) = (*(int * PTR32 *)(gen_frame + 0x34));
  }
  uVar8 = (uint)bVar11;
  uVar5 = F_0042a990(param_3 + 0xfc);
  (*(int * PTR32 *)(gen_frame + 0x34)) = (int *)uVar5;
  F_005a2710((undefined *)(param_4 + 0x2b28 + uVar8 * 8),6);
  *(int * PTR32 *)(param_4 + 0x2b2c + uVar8 * 8) = (*(int * PTR32 *)(gen_frame + 0x34));
  F_005a2710((undefined *)(param_4 + 0x2b20),4);
  *(uint *)(param_4 + 0x2b24) = uVar8 + 1;
  bVar11 = *(int *)(param_3 + 0x1cc) != 0;
  if (bVar11) {
    F_005a2710((undefined *)(param_4 + 0x2758),4);
    *(undefined4 *)(param_4 + 0x275c) = 2;
    F_005a2710((undefined *)(param_4 + 0x2780),4);
    *(undefined4 *)(param_4 + 0x2784) = 0;
    F_005a2710((undefined *)(param_4 + 0x27a8),4);
    *(undefined4 *)(param_4 + 0x27ac) = 0xf01f;
    (*(int * PTR32 *)(gen_frame + 0x34)) = (int *)*(undefined4 *)(param_3 + 0x1cc);
    F_005a2710((undefined *)(param_4 + 0x27f8),4);
    *(int * PTR32 *)(param_4 + 0x27fc) = (*(int * PTR32 *)(gen_frame + 0x34));
    uVar5 = F_0042a990(&REFG(undefined, 0x1489e08));
    (*(int * PTR32 *)(gen_frame + 0x34)) = (int *)uVar5;
    F_005a2710((undefined *)(param_4 + 0x2820),6);
    *(int * PTR32 *)(param_4 + 0x2824) = (*(int * PTR32 *)(gen_frame + 0x34));
  }
  uVar5 = (uint)bVar11;
  if (*(int *)(param_3 + 0x1d0) != 0) {
    F_005a2710((undefined *)(param_4 + 0x2758 + uVar5 * 8),4);
    *(undefined4 *)(param_4 + 0x275c + uVar5 * 8) = 2;
    F_005a2710((undefined *)(param_4 + 0x2780 + uVar5 * 8),4);
    *(undefined4 *)(param_4 + 0x2784 + uVar5 * 8) = 0;
    F_005a2710((undefined *)(param_4 + 0x27a8 + uVar5 * 8),4);
    *(undefined4 *)(param_4 + 0x27ac + uVar5 * 8) = 0xf020;
    (*(int * PTR32 *)(gen_frame + 0x34)) = (int *)*(undefined4 *)(param_3 + 0x1d0);
    F_005a2710((undefined *)(param_4 + 0x27f8 + uVar5 * 8),4);
    *(int * PTR32 *)(param_4 + 0x27fc + uVar5 * 8) = (*(int * PTR32 *)(gen_frame + 0x34));
    uVar8 = F_0042a990(&REFG(undefined, 0x1489e60));
    (*(int * PTR32 *)(gen_frame + 0x34)) = (int *)uVar8;
    F_005a2710((undefined *)(param_4 + 0x2820 + uVar5 * 8),6);
    *(int * PTR32 *)(param_4 + 0x2824 + uVar5 * 8) = (*(int * PTR32 *)(gen_frame + 0x34));
    uVar5 = uVar5 + 1;
  }
  if ((*(int *)(param_3 + 0x1e0) != 0) && (*(int *)(param_3 + 0x1e4) != 0)) {
    puVar9 = (ushort *)F_00ab24a0(*(int *)(param_3 + 0x1e0));
    (*(ushort * PTR32 *)(gen_frame + 0x30)) = puVar9;
    F_005a2710((undefined *)(param_4 + 0x2758 + uVar5 * 8),4);
    *(undefined4 *)(param_4 + 0x275c + uVar5 * 8) = 2;
    (*(int * PTR32 *)(gen_frame + 0x34)) = (int *)*(undefined4 *)(param_3 + 0x1e0);
    F_005a2710((undefined *)(param_4 + 0x2780 + uVar5 * 8),4);
    *(int * PTR32 *)(param_4 + 0x2784 + uVar5 * 8) = (*(int * PTR32 *)(gen_frame + 0x34));
    uVar8 = F_00ab65a0(*(undefined4 *)(param_3 + 0x1e0),(*(ushort * PTR32 *)(gen_frame + 0x30)));
    (*(int * PTR32 *)(gen_frame + 0x34)) = (int *)uVar8;
    F_005a2710((undefined *)(param_4 + 0x27a8 + uVar5 * 8),4);
    *(int * PTR32 *)(param_4 + 0x27ac + uVar5 * 8) = (*(int * PTR32 *)(gen_frame + 0x34));
    (*(int * PTR32 *)(gen_frame + 0x34)) = (int *)*(undefined4 *)(param_3 + 0x1e4);
    F_005a2710((undefined *)(param_4 + 0x27f8 + uVar5 * 8),4);
    *(int * PTR32 *)(param_4 + 0x27fc + uVar5 * 8) = (*(int * PTR32 *)(gen_frame + 0x34));
    uVar8 = F_00ab6240(*(undefined4 *)(param_3 + 0x1e0),0,(*(ushort * PTR32 *)(gen_frame + 0x30)));
    (*(int * PTR32 *)(gen_frame + 0x34)) = (int *)uVar8;
    F_005a2710((undefined *)(param_4 + 0x2820 + uVar5 * 8),6);
    *(int * PTR32 *)(param_4 + 0x2824 + uVar5 * 8) = (*(int * PTR32 *)(gen_frame + 0x34));
    uVar5 = uVar5 + 1;
  }
  if (*(short *)(param_3 + 0x1dc) != 0) {
    ppppuVar6 = (uint * PTR32 * PTR32 * PTR32 *)F_00ab3570((uint)*(ushort *)(param_3 + 0x1da));
    (*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x24)) = (uint * PTR32 * PTR32 *)ppppuVar6;
    F_005a2710((undefined *)(param_4 + 0x2758 + uVar5 * 8),4);
    *(undefined4 *)(param_4 + 0x275c + uVar5 * 8) = 2;
    F_005a2710((undefined *)(param_4 + 0x2780 + uVar5 * 8),4);
    *(undefined4 *)(param_4 + 0x2784 + uVar5 * 8) = 0;
    sVar1 = *(short *)(param_3 + 0x1da);
    if (sVar1 == 1) {
      (*(ushort * PTR32 *)(gen_frame + 0x30)) = (ushort *)0xf025;
    }
    else if (sVar1 == 2) {
      (*(ushort * PTR32 *)(gen_frame + 0x30)) = (ushort *)0xf026;
    }
    else if (sVar1 == 3) {
      (*(ushort * PTR32 *)(gen_frame + 0x30)) = (ushort *)0xf027;
    }
    else {
      (*(ushort * PTR32 *)(gen_frame + 0x30)) = (ushort *)0x0;
    }
    F_005a2710((undefined *)(param_4 + 0x27a8 + uVar5 * 8),4);
    *(ushort * PTR32 *)(param_4 + 0x27ac + uVar5 * 8) = (*(ushort * PTR32 *)(gen_frame + 0x30));
    (*(int * PTR32 *)(gen_frame + 0x34)) = (int *)(uint)*(ushort *)(param_3 + 0x1dc);
    F_005a2710((undefined *)(param_4 + 0x27f8 + uVar5 * 8),4);
    *(int * PTR32 *)(param_4 + 0x27fc + uVar5 * 8) = (*(int * PTR32 *)(gen_frame + 0x34));
    (*(int * PTR32 *)(gen_frame + 0x34)) = ((int *)GEN_TOP((((uint)*(*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x24)) & 0xffffff) + (int)(*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x24)))));
    F_005a2710((undefined *)(param_4 + 0x2820 + uVar5 * 8),6);
    *(int * PTR32 *)(param_4 + 0x2824 + uVar5 * 8) = (*(int * PTR32 *)(gen_frame + 0x34));
    uVar5 = uVar5 + 1;
  }
  if ((*(int *)(param_3 + 0x1d4) != 0) && (*(short *)(param_3 + 0x1d8) != 0)) {
    puVar9 = (ushort *)F_00ab24a0(*(int *)(param_3 + 0x1d4));
    (*(ushort * PTR32 *)(gen_frame + 0x30)) = puVar9;
    F_005a2710((undefined *)(param_4 + 0x2758 + uVar5 * 8),4);
    *(undefined4 *)(param_4 + 0x275c + uVar5 * 8) = 0x81;
    (*(int * PTR32 *)(gen_frame + 0x34)) = (int *)*(undefined4 *)(param_3 + 0x1d4);
    F_005a2710((undefined *)(param_4 + 0x2780 + uVar5 * 8),4);
    *(int * PTR32 *)(param_4 + 0x2784 + uVar5 * 8) = (*(int * PTR32 *)(gen_frame + 0x34));
    uVar8 = F_00ab65a0(*(undefined4 *)(param_3 + 0x1d4),(*(ushort * PTR32 *)(gen_frame + 0x30)));
    (*(int * PTR32 *)(gen_frame + 0x34)) = (int *)uVar8;
    F_005a2710((undefined *)(param_4 + 0x27a8 + uVar5 * 8),4);
    *(int * PTR32 *)(param_4 + 0x27ac + uVar5 * 8) = (*(int * PTR32 *)(gen_frame + 0x34));
    (*(int * PTR32 *)(gen_frame + 0x34)) = (int *)(uint)*(ushort *)(param_3 + 0x1d8);
    F_005a2710((undefined *)(param_4 + 0x27f8 + uVar5 * 8),4);
    *(int * PTR32 *)(param_4 + 0x27fc + uVar5 * 8) = (*(int * PTR32 *)(gen_frame + 0x34));
    uVar8 = F_00ab6240(*(undefined4 *)(param_3 + 0x1d4),0,(*(ushort * PTR32 *)(gen_frame + 0x30)));
    (*(int * PTR32 *)(gen_frame + 0x34)) = (int *)uVar8;
    F_005a2710((undefined *)(param_4 + 0x2820 + uVar5 * 8),6);
    *(int * PTR32 *)(param_4 + 0x2824 + uVar5 * 8) = (*(int * PTR32 *)(gen_frame + 0x34));
    uVar5 = uVar5 + 1;
  }
  F_005a2710((undefined *)(param_4 + 0x2750),4);
  *(uint *)(param_4 + 0x2754) = uVar5;
  bVar11 = *(int *)(param_3 + 0x1e8) != 0;
  if (bVar11) {
    F_005a2710((undefined *)(param_4 + 0x2900),4);
    *(undefined4 *)(param_4 + 0x2904) = 2;
    F_005a2710((undefined *)(param_4 + 0x2920),4);
    *(undefined4 *)(param_4 + 0x2924) = 0;
    F_005a2710((undefined *)(param_4 + 0x2960),4);
    *(undefined4 *)(param_4 + 0x2964) = 0xf01f;
    (*(int * PTR32 *)(gen_frame + 0x34)) = (int *)*(undefined4 *)(param_3 + 0x1e8);
    F_005a2710((undefined *)(param_4 + 0x2980),4);
    *(int * PTR32 *)(param_4 + 0x2984) = (*(int * PTR32 *)(gen_frame + 0x34));
    uVar5 = F_0042a990(&REFG(undefined, 0x1489e08));
    (*(int * PTR32 *)(gen_frame + 0x34)) = (int *)uVar5;
    F_005a2710((undefined *)(param_4 + 0x2940),6);
    *(int * PTR32 *)(param_4 + 0x2944) = (*(int * PTR32 *)(gen_frame + 0x34));
  }
  uVar5 = (uint)bVar11;
  if (*(int *)(param_3 + 0x1ec) != 0) {
    F_005a2710((undefined *)(param_4 + 0x2900 + uVar5 * 8),4);
    *(undefined4 *)(param_4 + 0x2904 + uVar5 * 8) = 2;
    F_005a2710((undefined *)(param_4 + 0x2920 + uVar5 * 8),4);
    *(undefined4 *)(param_4 + 0x2924 + uVar5 * 8) = 0;
    F_005a2710((undefined *)(param_4 + 0x2960 + uVar5 * 8),4);
    *(undefined4 *)(param_4 + 0x2964 + uVar5 * 8) = 0xf020;
    (*(int * PTR32 *)(gen_frame + 0x34)) = (int *)*(undefined4 *)(param_3 + 0x1ec);
    F_005a2710((undefined *)(param_4 + 0x2980 + uVar5 * 8),4);
    *(int * PTR32 *)(param_4 + 0x2984 + uVar5 * 8) = (*(int * PTR32 *)(gen_frame + 0x34));
    uVar8 = F_0042a990(&REFG(undefined, 0x1489e60));
    (*(int * PTR32 *)(gen_frame + 0x34)) = (int *)uVar8;
    F_005a2710((undefined *)(param_4 + 0x2940 + uVar5 * 8),6);
    *(int * PTR32 *)(param_4 + 0x2944 + uVar5 * 8) = (*(int * PTR32 *)(gen_frame + 0x34));
    uVar5 = uVar5 + 1;
  }
  if (*(int *)(param_3 + 0x1fc) != 0) {
    puVar9 = (ushort *)F_00ab24a0(*(undefined4 *)(param_3 + 0x1e0));
    (*(ushort * PTR32 *)(gen_frame + 0x30)) = puVar9;
    F_005a2710((undefined *)(param_4 + 0x2900 + uVar5 * 8),4);
    *(undefined4 *)(param_4 + 0x2904 + uVar5 * 8) = 2;
    (*(int * PTR32 *)(gen_frame + 0x34)) = (int *)*(undefined4 *)(param_3 + 0x1e0);
    F_005a2710((undefined *)(param_4 + 0x2920 + uVar5 * 8),4);
    *(int * PTR32 *)(param_4 + 0x2924 + uVar5 * 8) = (*(int * PTR32 *)(gen_frame + 0x34));
    uVar8 = F_00ab65a0(*(undefined4 *)(param_3 + 0x1e0),(*(ushort * PTR32 *)(gen_frame + 0x30)));
    (*(int * PTR32 *)(gen_frame + 0x34)) = (int *)uVar8;
    F_005a2710((undefined *)(param_4 + 0x2960 + uVar5 * 8),4);
    *(int * PTR32 *)(param_4 + 0x2964 + uVar5 * 8) = (*(int * PTR32 *)(gen_frame + 0x34));
    (*(int * PTR32 *)(gen_frame + 0x34)) = (int *)*(undefined4 *)(param_3 + 0x1fc);
    F_005a2710((undefined *)(param_4 + 0x2980 + uVar5 * 8),4);
    *(int * PTR32 *)(param_4 + 0x2984 + uVar5 * 8) = (*(int * PTR32 *)(gen_frame + 0x34));
    uVar8 = F_00ab6240(*(undefined4 *)(param_3 + 0x1e0),0,(*(ushort * PTR32 *)(gen_frame + 0x30)));
    (*(int * PTR32 *)(gen_frame + 0x34)) = (int *)uVar8;
    F_005a2710((undefined *)(param_4 + 0x2940 + uVar5 * 8),6);
    *(int * PTR32 *)(param_4 + 0x2944 + uVar5 * 8) = (*(int * PTR32 *)(gen_frame + 0x34));
    uVar5 = uVar5 + 1;
  }
  if (*(short *)(param_3 + 0x1f6) != 0) {
    ppppuVar6 = (uint * PTR32 * PTR32 * PTR32 *)F_00ab3570((uint)*(ushort *)(param_3 + 0x1da));
    (*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x24)) = (uint * PTR32 * PTR32 *)ppppuVar6;
    F_005a2710((undefined *)(param_4 + 0x2900 + uVar5 * 8),4);
    *(undefined4 *)(param_4 + 0x2904 + uVar5 * 8) = 2;
    F_005a2710((undefined *)(param_4 + 0x2920 + uVar5 * 8),4);
    *(undefined4 *)(param_4 + 0x2924 + uVar5 * 8) = 0;
    sVar1 = *(short *)(param_3 + 0x1da);
    if (sVar1 == 1) {
      (*(ushort * PTR32 *)(gen_frame + 0x30)) = (ushort *)0xf025;
    }
    else if (sVar1 == 2) {
      (*(ushort * PTR32 *)(gen_frame + 0x30)) = (ushort *)0xf026;
    }
    else if (sVar1 == 3) {
      (*(ushort * PTR32 *)(gen_frame + 0x30)) = (ushort *)0xf027;
    }
    else {
      (*(ushort * PTR32 *)(gen_frame + 0x30)) = (ushort *)0x0;
    }
    F_005a2710((undefined *)(param_4 + 0x2960 + uVar5 * 8),4);
    *(ushort * PTR32 *)(param_4 + 0x2964 + uVar5 * 8) = (*(ushort * PTR32 *)(gen_frame + 0x30));
    (*(int * PTR32 *)(gen_frame + 0x34)) = (int *)(uint)*(ushort *)(param_3 + 0x1dc);
    F_005a2710((undefined *)(param_4 + 0x2980 + uVar5 * 8),4);
    *(int * PTR32 *)(param_4 + 0x2984 + uVar5 * 8) = (*(int * PTR32 *)(gen_frame + 0x34));
    (*(int * PTR32 *)(gen_frame + 0x34)) = ((int *)GEN_TOP((((uint)*(*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x24)) & 0xffffff) + (int)(*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x24)))));
    F_005a2710((undefined *)(param_4 + 0x2940 + uVar5 * 8),6);
    *(int * PTR32 *)(param_4 + 0x2944 + uVar5 * 8) = (*(int * PTR32 *)(gen_frame + 0x34));
    uVar5 = uVar5 + 1;
  }
  if ((*(int *)(param_3 + 0x1f0) != 0) && (*(short *)(param_3 + 500) != 0)) {
    puVar9 = (ushort *)F_00ab24a0(*(undefined4 *)(param_3 + 0x1d4));
    (*(ushort * PTR32 *)(gen_frame + 0x30)) = puVar9;
    F_005a2710((undefined *)(param_4 + 0x2900 + uVar5 * 8),4);
    *(undefined4 *)(param_4 + 0x2904 + uVar5 * 8) = 0x81;
    (*(int * PTR32 *)(gen_frame + 0x34)) = (int *)*(undefined4 *)(param_3 + 0x1d4);
    F_005a2710((undefined *)(param_4 + 0x2920 + uVar5 * 8),4);
    *(int * PTR32 *)(param_4 + 0x2924 + uVar5 * 8) = (*(int * PTR32 *)(gen_frame + 0x34));
    uVar8 = F_00ab65a0(*(undefined4 *)(param_3 + 0x1d4),(*(ushort * PTR32 *)(gen_frame + 0x30)));
    (*(int * PTR32 *)(gen_frame + 0x34)) = (int *)uVar8;
    F_005a2710((undefined *)(param_4 + 0x2960 + uVar5 * 8),4);
    *(int * PTR32 *)(param_4 + 0x2964 + uVar5 * 8) = (*(int * PTR32 *)(gen_frame + 0x34));
    (*(int * PTR32 *)(gen_frame + 0x34)) = (int *)(uint)*(ushort *)(param_3 + 0x1d8);
    F_005a2710((undefined *)(param_4 + 0x2980 + uVar5 * 8),4);
    *(int * PTR32 *)(param_4 + 0x2984 + uVar5 * 8) = (*(int * PTR32 *)(gen_frame + 0x34));
    uVar8 = F_00ab6240(*(undefined4 *)(param_3 + 0x1d4),0,(*(ushort * PTR32 *)(gen_frame + 0x30)));
    pvVar4 = (undefined *)(param_4 + 0x2940 + uVar5 * 8);
    (*(int * PTR32 *)(gen_frame + 0x34)) = (int *)uVar8;
    F_005a2710(pvVar4,6);
    *(int * PTR32 *)((int)pvVar4 + 4) = (*(int * PTR32 *)(gen_frame + 0x34));
    uVar5 = uVar5 + 1;
  }
  F_005a2710((undefined *)(param_4 + 0x28f0),4);
  *(uint *)(param_4 + 0x28f4) = uVar5;
  puVar9 = (ushort *)F_005a2710((undefined *)(param_4 + 0x2848),4);
  *(undefined4 *)(param_4 + 0x284c) = 0;
LAB_0070aa91: ;
  F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
  return (uint)puVar9;
}

/* ref: Client::Game::Event::QuestBattleDirector::vf153 */
uint F_0070aab0(unsigned int gen_a0)
{
  GEN_ENTER(0x70aab0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  uint uVar3;
  undefined * this_00;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar2;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  uVar3 = *(uint *)(this + 0x2e8) | *(uint *)(this + 0x2ec);
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = this;
  if ((uVar3 != 0) && ((byte)this[0x1dc] < 0xfe)) {
    this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
    if (this_00 == (undefined *)0x0) {
      uVar7 = F_0046ff40();
      uVar3 = (uint)(uVar7 / 1000);
    }
    else {
      uVar3 = F_00975680(this_00);
    }
    uVar6 = *(uint *)(this + 0x2f0) - uVar3;
    iVar5 = *(int *)(this + 0x2f4) - (uint)(*(uint *)(this + 0x2f0) < uVar3);
    if ((iVar5 < 1) && (iVar5 < 0)) {
      uVar6 = 0;
      iVar5 = 0;
    }
    lVar2 = (longlong)CONCAT44(iVar5,uVar6) / 0x3c;
    uVar1 = (uint)lVar2;
    iVar4 = (int)((ulonglong)lVar2 >> 0x20);
    (*(longlong *)(gen_frame + 0x24)) = lVar2;
    uVar3 = uVar1;
    if (((-1 < iVar5) &&
        ((((0 < iVar5 || (uVar6 != 0)) &&
          (uVar6 + uVar1 * -0x3c == 0 &&
           iVar5 - ((((iVar4 << 4 | uVar1 >> 0x1c) - iVar4) - (uint)(uVar1 * 0x10 < uVar1)) * 4 |
                   uVar1 * 0xf >> 0x1e) == (uint)(uVar6 < uVar1 * 0x3c))) &&
         (iVar4 <= *(int *)((*(undefined * PTR32 *)(gen_frame + 0x20)) + 0x4cc))))) &&
       ((iVar4 < *(int *)((*(undefined * PTR32 *)(gen_frame + 0x20)) + 0x4cc) || (uVar3 = *(uint *)((*(undefined * PTR32 *)(gen_frame + 0x20)) + 0x4c8), uVar1 < uVar3))
       )) {
      uVar3 = (uint)(*(longlong *)((*(undefined * PTR32 *)(gen_frame + 0x20)) + 0x4c0) / 2);
      if (lVar2 <= *(longlong *)((*(undefined * PTR32 *)(gen_frame + 0x20)) + 0x4c0) / 2) {
        if (((lVar2 != 0x1e) && (lVar2 != 10)) && (lVar2 != 5)) {
          if (lVar2 == 3) {
            if (-1 < *(int *)((*(undefined * PTR32 *)(gen_frame + 0x20)) + 0x4c4)) {
              if (0 < *(int *)((*(undefined * PTR32 *)(gen_frame + 0x20)) + 0x4c4)) goto LAB_0070ac7a;
              if (9 < *(uint *)((*(undefined * PTR32 *)(gen_frame + 0x20)) + 0x4c0)) {
                F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
                return uVar3;
              }
            }
          }
          else if (lVar2 != 1) goto LAB_0070ac7a;
        }
        *(longlong *)((*(undefined * PTR32 *)(gen_frame + 0x20)) + 0x4c8) = lVar2;
        F_004816e0(((undefined1 *)(gen_frame + 0x8)));
        (*(undefined4 *)(gen_frame + 0x2c)) = 0;
        (*(undefined4 *)(gen_frame + 0x2c)) = (undefined4)(*(longlong *)(gen_frame + 0x24));
        (*(undefined4 * PTR32 *)(gen_frame + 0x30)) = &(*(undefined4 *)(gen_frame + 0x2c));
        (*(undefined1 *)(gen_frame + 0x34)) = 0;
        F_00493b50(((undefined1 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x2c)));
        F_004917c0(&(*(undefined4 *)(gen_frame + 0x2c)));
        F_006c5ef0(0x5fc,((undefined1 *)(gen_frame + 0x8)));
        uVar3 = F_00493180(((undefined1 *)(gen_frame + 0x8)));
      }
    }
  }
LAB_0070ac7a: ;
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar3;
}

/* ref: FUN_0070ac90 */
uint F_0070ac90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x70ac90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  char cVar1;
  ushort uVar2;
  uint * puVar3;
  undefined4 * puVar4;
  undefined * this_00;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined3 extraout_var = 0;
  int iVar9;
  uint uVar10;
  
  uVar10 = (*(uint *)(gen_frame + 0xc));
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  uVar6 = *param_1;
  puVar3 = *(uint * PTR32 *)(uVar6 + 4);
  puVar4 = *(undefined4 * PTR32 *)((int)this + param_3 * 4 + 0x74c);
  if (puVar3 == (uint *)0x0) {
    if (puVar4 != (undefined4 *)0x0) {
      uVar6 = ((code *)*(gen_code32 *)*puVar4)(puVar4,1);
      *(undefined4 *)((int)this + param_3 * 4 + 0x74c) = 0;
      F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
      return uVar6;
    }
    goto LAB_0070ae8d;
  }
  uVar2 = *(ushort *)puVar4[3];
  uVar7 = (uint)uVar2;
  if (puVar4 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar4)(puVar4,1);
    *(undefined4 *)((int)this + param_3 * 4 + 0x74c) = 0;
  }
  (*(uint *)(gen_frame + 0x10)) = 0;
  uVar6 = F_00a4ffd0();
  iVar9 = 0;
  uVar6 = uVar6 + 0x1684;
  do {
    uVar8 = uVar6;
    if (*(ushort *)(uVar6 + 4) == uVar2) break;
    iVar9 = iVar9 + 1;
    uVar6 = uVar6 + 0x10;
    uVar8 = (*(uint *)(gen_frame + 0x10));
  } while (iVar9 < 0x10);
  (*(uint *)(gen_frame + 0x10)) = uVar8;
  if ((param_3 < 0) || ((*(uint *)(gen_frame + 0x10)) == 0)) goto LAB_0070ae8d;
  uVar6 = (uint)*(short *)((int)puVar3 + 0x4a);
  *((uint *)GEN_TOP((*(int *)((int)this + 0x7ac) + 4 + param_3 * 0x10))) = uVar6;
  *((uint *)GEN_TOP((*(int *)((int)this + 0x7ac) + 8 + param_3 * 0x10))) = puVar3[10];
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x7ac) + 0xc + param_3 * 0x10))) = 1;
  (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) & 0xffffff00;
  uVar8 = (*(uint *)(gen_frame + 0xc));
  if (uVar6 == 0) goto LAB_0070ae8d;
  gen_piece_set(&(*(uint *)(gen_frame + 0xc)), 1, 3, (unsigned long long)(SUB43(uVar10,1)));
  if (uVar6 < 4) {
    cVar1 = *(char *)((*(uint *)(gen_frame + 0x10)) + 6);
    if ((cVar1 == '\x01') || (cVar1 == '\x03')) {
      uVar10 = puVar3[8];
      (*(uint *)(gen_frame + 0x10)) = 0xebf9;
      (*(uint *)(gen_frame + 0xc)) = uVar8;
    }
    else {
      if (cVar1 != -1) {
        uVar6 = F_006d6fd0(this);
        F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
        return uVar6;
      }
      uVar10 = puVar3[7];
      (*(uint *)(gen_frame + 0xc)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0xc)), 1, 3),1);
      (*(uint *)(gen_frame + 0x10)) = 0xece5;
    }
  }
  else {
    if (uVar6 != 0xe) goto LAB_0070ae8d;
    this_00 = *(undefined * PTR32 *)((int)this + 0x50);
    F_00706b10(this_00,uVar7,puVar3,param_3);
    if (*(byte *)((*(uint *)(gen_frame + 0x10)) + 6) < 10) {
      uVar6 = F_006dd140(this_00,uVar7);
      (*(uint *)(gen_frame + 0x10)) = 0xecef;
      if ((char)uVar6 != '\0') goto LAB_0070adc3;
    }
    else {
LAB_0070adc3: ;
      (*(uint *)(gen_frame + 0x10)) = 0xece5;
    }
    uVar10 = puVar3[7];
    (*(uint *)(gen_frame + 0xc)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0xc)), 1, 3),1);
  }
  uVar8 = F_00ab37e0(uVar10);
  uVar6 = 0;
  if (uVar8 != 0) {
    if ((char)(*(uint *)(gen_frame + 0xc)) == '\0') {
      bVar5 = F_00a67a10(2,param_3);
      uVar6 = CONCAT31(extraout_var,bVar5);
      if (bVar5 == 0) goto LAB_0070ae8d;
    }
    uVar6 = F_0042cc20(((undefined1 *)(gen_frame + 0x14)),(*puVar3 & 0xffffff) + (int)puVar3,REFG(undefined4, 0x108cc50));
    F_00a6a890(&REFG(undefined, 0x14b1258),param_3,uVar7,uVar6);
    F_0042c880(((undefined1 *)(gen_frame + 0x14)));
    uVar6 = F_00a83fa0(&REFG(undefined, 0x14b1258),param_3,uVar10,(*(uint *)(gen_frame + 0x10)),uVar8,(*(uint *)(gen_frame + 0xc)));
  }
LAB_0070ae8d: ;
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return uVar6;
}

/* ref: FUN_0070aea0 */
uint F_0070aea0(unsigned int gen_a0)
{
  GEN_ENTER(0x70aea0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  short sVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  undefined4 * this_00;
  short * psVar5;
  uint uVar6;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  ((byte *)(gen_frame + 0x8))[0x60] = (char)uVar3;
  ((byte *)(gen_frame + 0x8))[0x61] = (char)(uVar3 >> 8);
  ((byte *)(gen_frame + 0x8))[0x62] = (char)(uVar3 >> 0x10);
  ((byte *)(gen_frame + 0x8))[99] = (char)(uVar3 >> 0x18);
  uVar3 = F_00a4ffd0();
  uVar6 = 0;
  ((byte *)(gen_frame + 0x8))[0x40] = 0;
  ((byte *)(gen_frame + 0x8))[0x41] = 0;
  ((byte *)(gen_frame + 0x8))[0x42] = 0;
  ((byte *)(gen_frame + 0x8))[0x43] = 0;
  ((byte *)(gen_frame + 0x8))[0x44] = 0;
  ((byte *)(gen_frame + 0x8))[0x45] = 0;
  ((byte *)(gen_frame + 0x8))[0x46] = 0;
  ((byte *)(gen_frame + 0x8))[0x47] = 0;
  ((byte *)(gen_frame + 0x8))[0x48] = 0;
  ((byte *)(gen_frame + 0x8))[0x49] = 0;
  ((byte *)(gen_frame + 0x8))[0x4a] = 0;
  ((byte *)(gen_frame + 0x8))[0x4b] = 0;
  ((byte *)(gen_frame + 0x8))[0x4c] = 0;
  ((byte *)(gen_frame + 0x8))[0x4d] = 0;
  ((byte *)(gen_frame + 0x8))[0x4e] = 0;
  ((byte *)(gen_frame + 0x8))[0x4f] = 0;
  ((byte *)(gen_frame + 0x8))[0x50] = 0;
  ((byte *)(gen_frame + 0x8))[0x51] = 0;
  ((byte *)(gen_frame + 0x8))[0x52] = 0;
  ((byte *)(gen_frame + 0x8))[0x53] = 0;
  ((byte *)(gen_frame + 0x8))[0x54] = 0;
  ((byte *)(gen_frame + 0x8))[0x55] = 0;
  ((byte *)(gen_frame + 0x8))[0x56] = 0;
  ((byte *)(gen_frame + 0x8))[0x57] = 0;
  ((byte *)(gen_frame + 0x8))[0x58] = 0;
  ((byte *)(gen_frame + 0x8))[0x59] = 0;
  ((byte *)(gen_frame + 0x8))[0x5a] = 0;
  ((byte *)(gen_frame + 0x8))[0x5b] = 0;
  ((byte *)(gen_frame + 0x8))[0x5c] = 0;
  ((byte *)(gen_frame + 0x8))[0x5d] = 0;
  ((byte *)(gen_frame + 0x8))[0x5e] = 0;
  ((byte *)(gen_frame + 0x8))[0x5f] = 0;
  ((byte *)(gen_frame + 0x8))[0] = 0;
  ((byte *)(gen_frame + 0x8))[1] = 0;
  ((byte *)(gen_frame + 0x8))[2] = 0;
  ((byte *)(gen_frame + 0x8))[3] = 0;
  F_00c48350(((byte *)(gen_frame + 0x8)) + 4,0,0x3c);
  psVar5 = (short *)(uVar3 + 0x1698);
  iVar4 = 2;
  do {
    sVar1 = psVar5[-8];
    if (sVar1 != 0) {
      *(int *)(((byte *)(gen_frame + 0x8)) + uVar6 * 4) = iVar4 + -2;
      *(short *)(((byte *)(gen_frame + 0x8)) + uVar6 * 2 + 0x40) = sVar1;
      uVar6 = uVar6 + 1;
    }
    sVar1 = *psVar5;
    if (sVar1 != 0) {
      *(int *)(((byte *)(gen_frame + 0x8)) + uVar6 * 4) = iVar4 + -1;
      *(short *)(((byte *)(gen_frame + 0x8)) + uVar6 * 2 + 0x40) = sVar1;
      uVar6 = uVar6 + 1;
    }
    sVar1 = psVar5[8];
    if (sVar1 != 0) {
      *(int *)(((byte *)(gen_frame + 0x8)) + uVar6 * 4) = iVar4;
      *(short *)(((byte *)(gen_frame + 0x8)) + uVar6 * 2 + 0x40) = sVar1;
      uVar6 = uVar6 + 1;
    }
    sVar1 = psVar5[0x10];
    if (sVar1 != 0) {
      *(int *)(((byte *)(gen_frame + 0x8)) + uVar6 * 4) = iVar4 + 1;
      *(short *)(((byte *)(gen_frame + 0x8)) + uVar6 * 2 + 0x40) = sVar1;
      uVar6 = uVar6 + 1;
    }
    uVar3 = iVar4 + 2;
    psVar5 = psVar5 + 0x20;
    iVar4 = iVar4 + 4;
  } while (uVar3 < 0x10);
  if (*(int *)((int)this + 0x748) == 0) {
    uVar3 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8));
    *(uint *)((int)this + 0x748) = uVar3;
  }
  uVar3 = 0;
  (*(uint *)(gen_frame + 0x0)) = 0;
  if (uVar6 != 0) {
    do {
      iVar4 = *(int *)(((byte *)(gen_frame + 0x8)) + (*(uint *)(gen_frame + 0x0)) * 4);
      if (*(int *)((int)this + iVar4 * 4 + 0x74c) == 0) {
        this_00 = (undefined4 *)F_00406b90(0x20,0,0);
        if (this_00 == (undefined4 *)0x0) {
          this_00 = (undefined4 *)0x0;
        }
        else {
          F_00cb4700(this_00,1,iVar4);
          this_00[5] = 1;
          *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10b90a8))
          ;
          this_00[6] = this;
          this_00[7] = ((code *)REFP(0x70ac90));
        }
        uVar2 = *(ushort *)(((byte *)(gen_frame + 0x8)) + (*(uint *)(gen_frame + 0x0)) * 2 + 0x40);
        *(undefined4 * PTR32 *)((int)this + iVar4 * 4 + 0x74c) = this_00;
        F_00cb4540(this_00,0,(uint)uVar2);
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x748) + 0x48))))
                  (*(int * PTR32 *)((int)this + 0x748),*(undefined4 *)((int)this + iVar4 * 4 + 0x74c));
      }
      uVar3 = (*(uint *)(gen_frame + 0x0)) + 1;
      (*(uint *)(gen_frame + 0x0)) = uVar3;
    } while (uVar3 < uVar6);
  }
  F_00c47745((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 96)) ^ (uint)(uint)(gen_frame + 0x6c));
  return uVar3;
}

/* ref: FUN_0070b040 */
uint F_0070b040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x70b040u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  byte bVar1;
  char cVar2;
  uint uVar3;
  bool bVar4;
  undefined4 * puVar5;
  uint uVar6;
  uint * puVar7;
  short * psVar8;
  ushort * puVar9;
  int * piVar10;
  undefined * pvVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 * puVar14;
  undefined4 * puVar15;
  undefined * pvVar16;
  undefined * pvVar17;
  ushort uVar18;
  uint uVar19;
  int iVar20;
  ushort * puVar21;
  int iVar22;
  uint * puVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined * local_30;
  undefined4 * local_2c;
  int local_28;
  uint local_1c;
  undefined * local_18;
  int local_14;
  int local_10;
  
  pvVar17 = (*(undefined * PTR32 *)&gen_args[5]);
  local_18 = (undefined *)0x0;
  if (((*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x265))) != '\0') || (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x266))) != '\0')) ||
     (bVar4 = false, *((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x267))) != '\0')) {
    bVar4 = true;
  }
  F_005a2710((*(undefined * PTR32 *)&gen_args[5]),4);
  *(undefined4 * PTR32 *)((int)pvVar17 + 4) = (*(undefined4 * PTR32 *)&gen_args[1]);
  F_005a2710((undefined *)((int)pvVar17 + 0x2708),4);
  *(undefined4 *)((int)pvVar17 + 0x270c) = 2;
  uVar6 = F_005a2710((undefined *)((int)pvVar17 + 8),4);
  if (bVar4) {
    *(undefined4 *)((int)pvVar17 + 0xc) = 1;
  }
  else {
    *(undefined4 *)((int)pvVar17 + 0xc) = 0;
  }
  if ((*(undefined4 * PTR32 *)&gen_args[1]) == (undefined4 *)0xff) {
    uVar6 = 0;
    local_2c = (*(undefined4 * PTR32 *)&gen_args[2]);
    if (bVar4) {
      uVar6 = (uint)(*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x265))) == '\0');
      if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x266))) == '\0') {
        uVar6 = uVar6 | 2;
      }
      if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x267))) == '\0') {
        uVar6 = uVar6 | 4;
      }
      local_2c = (*(undefined4 * PTR32 *)&gen_args[2]) + -1;
      uVar6 = uVar6 | (uint)REFG(undefined1, 0x14ab29a) << 4;
    }
    else {
      if ((REFG(undefined1, 0x14b4ec1) & 1) != 0) {
        uVar6 = 0x10;
      }
      if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5a8))) != '\0') {
        uVar6 = uVar6 | 0xe;
      }
    }
    F_005a2710((undefined *)((int)pvVar17 + 0x10),4);
    *(uint *)((int)pvVar17 + 0x14) = uVar6;
    uVar6 = F_005a2710((undefined *)((int)pvVar17 + 0x18),4);
    *(undefined4 * PTR32 *)((int)pvVar17 + 0x1c) = local_2c;
  }
  if (((uint)(*(undefined4 * PTR32 *)&gen_args[1]) & 2) != 0) {
    uVar19 = -(uint)(1 < (uint)(&REFG(undefined4, 0x1488744))[(int)(*(undefined4 * PTR32 *)&gen_args[2])]) & (&REFG(undefined4, 0x1488744))[(int)(*(undefined4 * PTR32 *)&gen_args[2])];
    F_005a2710((undefined *)((int)pvVar17 + 0xa8),4);
    *(uint *)((int)pvVar17 + 0xac) = uVar19 & 0xffff | (*(int *)&gen_args[3]) << 0x10;
    local_18 = (undefined *)F_00ab3510((*(undefined4 * PTR32 *)&gen_args[2]));
    local_1c = 0;
    uVar6 = (uint)local_18;
    if (uVar19 != 0) {
      puVar23 = (uint *)((int)pvVar17 + 0xf4);
      do {
        puVar7 = (uint *)F_00ab3540(*(undefined4 *)((int)local_18 + local_1c * 4));
        uVar6 = *puVar7;
        F_005a2710(puVar23 + -0x11,6);
        puVar23[-0x10] = (uVar6 & 0xffffff) + (int)puVar7;
        uVar3 = puVar7[1];
        F_005a2710(puVar23 + -1,4);
        uVar6 = local_1c + 1;
        *puVar23 = uVar3;
        puVar23 = puVar23 + 2;
        local_1c = uVar6;
      } while (uVar6 < uVar19);
    }
  }
  if (((uint)(*(undefined4 * PTR32 *)&gen_args[1]) & 8) != 0) {
    uVar6 = F_00a4ffd0();
    bVar1 = *(byte *)(uVar6 + 0x18b8);
    iVar22 = 0;
    F_005a2710((undefined *)((int)pvVar17 + 0x130),4);
    *(uint *)((int)pvVar17 + 0x134) = (uint)bVar1 << 0x10 | 100;
    psVar8 = (short *)(uVar6 + 0x1698);
    iVar12 = 4;
    do {
      if (psVar8[-8] != 0) {
        iVar22 = iVar22 + 1;
      }
      if (*psVar8 != 0) {
        iVar22 = iVar22 + 1;
      }
      if (psVar8[8] != 0) {
        iVar22 = iVar22 + 1;
      }
      if (psVar8[0x10] != 0) {
        iVar22 = iVar22 + 1;
      }
      psVar8 = psVar8 + 0x20;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
    F_005a2710((undefined *)((int)pvVar17 + 0x138),4);
    *(uint *)((int)pvVar17 + 0x13c) = iVar22 << 0x10 | 0x10;
    if (local_18 == (undefined *)0x0) {
      F_00ab3510((*(undefined4 * PTR32 *)&gen_args[2]));
    }
    uVar19 = F_00ab3540(0xd);
    uVar13 = *(undefined4 *)(uVar19 + 4);
    F_005a2710((undefined *)((int)pvVar17 + 0x140),4);
    *(undefined4 *)((int)pvVar17 + 0x144) = uVar13;
    uVar18 = *(ushort *)(uVar6 + 0x18c4);
    F_005a2710((undefined *)((int)pvVar17 + 0x148),4);
    *(uint *)((int)pvVar17 + 0x14c) = (uint)uVar18 << 0x10 | 1000;
    uVar19 = F_00ab3540(0xe);
    uVar13 = *(undefined4 *)(uVar19 + 4);
    F_005a2710((undefined *)((int)pvVar17 + 0x150),4);
    *(undefined4 *)((int)pvVar17 + 0x154) = uVar13;
    uVar18 = *(ushort *)(uVar6 + 0x18c6);
    F_005a2710((undefined *)((int)pvVar17 + 0x158),4);
    *(uint *)((int)pvVar17 + 0x15c) = (uint)uVar18 << 0x10 | 1000;
    uVar19 = F_00ab3540(0xf);
    uVar13 = *(undefined4 *)(uVar19 + 4);
    F_005a2710((undefined *)((int)pvVar17 + 0x160),4);
    *(undefined4 *)((int)pvVar17 + 0x164) = uVar13;
    uVar18 = *(ushort *)(uVar6 + 0x18c8);
    uVar6 = F_005a2710((undefined *)((int)pvVar17 + 0x168),4);
    *(uint *)((int)pvVar17 + 0x16c) = (uint)uVar18 << 0x10 | 1000;
  }
  if (((uint)(*(undefined4 * PTR32 *)&gen_args[1]) & 1) != 0) {
    local_28 = 0;
    local_18 = (undefined *)0x0;
    local_2c = (undefined *)0xffffffff;
    local_30 = (undefined *)0xffffffff;
    iVar20 = (int)(*(undefined4 * PTR32 *)&gen_args[2]) * 0x10;
    iVar12 = *((int *)GEN_TOP((iVar20 + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x538))))));
    iVar22 = (*(int *)&gen_args[3]) * 0x14;
    piVar10 = *(int * PTR32 *)(iVar12 + iVar22);
    local_10 = 0x2f;
    local_14 = 0x287;
    if (piVar10 != *(int * PTR32 *)(iVar12 + 4 + iVar22)) {
      local_1c = 0;
      do {
        pvVar11 = local_18;
        iVar12 = piVar10[1] - *piVar10 >> 0x1f;
        if ((piVar10[1] - *piVar10) / 0xb8 + iVar12 != iVar12) {
          local_2c = local_18;
          uVar6 = F_0042a990(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x594))) + local_1c);
          pvVar16 = (undefined *)((int)pvVar17 + local_14 * 8);
          F_005a2710(pvVar16,6);
          *(uint *)((int)pvVar16 + 4) = uVar6;
          pvVar16 = (undefined *)((int)pvVar17 + local_10 * 8);
          F_005a2710(pvVar16,4);
          local_18 = (undefined *)((int)local_18 + 1);
          local_10 = local_10 + 2;
          local_14 = local_14 + 2;
          *(undefined4 *)((int)pvVar16 + 4) = 2;
          puVar21 = (ushort *)*piVar10;
          puVar9 = (ushort *)piVar10[1];
          if (puVar21 != puVar9) {
            puVar23 = (uint *)((int)pvVar17 + local_14 * 8 + 4);
            pvVar16 = (undefined *)((int)pvVar17 + local_10 * 8 + 8);
            do {
              uVar13 = *(undefined4 *)(puVar21 + 0x58);
              F_005a2710(pvVar16,4);
              *(undefined4 *)((int)pvVar16 + 4) = uVar13;
              uVar6 = F_0042a990(puVar21 + 2);
              F_005a2710(puVar23 + -1,6);
              *puVar23 = uVar6;
              uVar6 = F_0042a990(puVar21 + 0x2c);
              F_005a2710(puVar23 + 1,6);
              puVar23[2] = uVar6;
              uVar18 = *puVar21;
              F_005a2710((undefined *)((int)pvVar16 + -8),4);
              puVar23 = puVar23 + 4;
              local_18 = (undefined *)((int)local_18 + 1);
              local_10 = local_10 + 2;
              local_14 = local_14 + 2;
              *(uint *)((int)pvVar16 + -4) = (uint)uVar18 << 4 | (uint)(puVar21 == puVar9 + -0x5c);
              pvVar16 = (undefined *)((int)pvVar16 + 0x10);
              if ((ushort)(*(undefined4 *)&gen_args[4]) == *puVar21) {
                local_30 = pvVar11;
              }
              puVar9 = (ushort *)piVar10[1];
              puVar21 = puVar21 + 0x5c;
              pvVar17 = (*(undefined * PTR32 *)&gen_args[5]);
            } while (puVar21 != puVar9);
          }
          local_28 = local_28 + 1 + (piVar10[1] - *piVar10) / 0xb8;
        }
        local_1c = local_1c + 0x54;
        piVar10 = piVar10 + 4;
      } while (piVar10 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar20 + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x538)))))) + 4 + iVar22))));
    }
    F_005a2710((undefined *)((int)pvVar17 + 0x170),4);
    *(int *)((int)pvVar17 + 0x174) = local_28;
    if ((int)local_30 < 0) {
      (*(undefined * PTR32 *)&gen_args[5]) = local_2c;
    }
    else {
      (*(undefined * PTR32 *)&gen_args[5]) = local_30;
    }
    F_005a2710((undefined *)((int)pvVar17 + 0x26f8),3);
    *(undefined * PTR32 *)((int)pvVar17 + 0x26fc) = (*(undefined * PTR32 *)&gen_args[5]);
    piVar10 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar13 = 0x25c;
    if (*((int *)GEN_TOP((*((int *)GEN_TOP((iVar20 + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x538)))))) + 0x10 + iVar22))) != 0) {
      uVar13 = 0x25d;
    }
    uVar25 = 0;
    uVar24 = 0;
    pvVar11 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar10 + 0x18))(piVar10)));
    uVar19 = F_0043bd00(pvVar11,uVar13,uVar24,uVar25);
    uVar6 = F_005a2710((undefined *)((int)pvVar17 + 0x2700),6);
    *(uint *)((int)pvVar17 + 0x2704) = uVar19;
  }
  if (((uint)(*(undefined4 * PTR32 *)&gen_args[1]) & 4) != 0) {
    uVar18 = (ushort)(*(undefined4 *)&gen_args[4]);
    if (uVar18 != 0) {
      uVar6 = F_006d8510((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[2]),(*(int *)&gen_args[3]),(*(undefined4 *)&gen_args[4]));
      puVar15 = ((undefined4 *)GEN_TOP((*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54c))))[1]));
      cVar2 = *(char *)((int)puVar15 + 0x2cd);
      puVar5 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54c)));
      while (cVar2 == '\0') {
        if (*(ushort *)(puVar15 + 3) < uVar18) {
          puVar14 = (undefined4 *)puVar15[2];
          puVar15 = puVar5;
        }
        else {
          puVar14 = (undefined4 *)*puVar15;
        }
        puVar5 = puVar15;
        puVar15 = puVar14;
        cVar2 = *(char *)((int)puVar14 + 0x2cd);
      }
      (*(undefined4 * PTR32 *)&gen_args[1]) = puVar5;
      if ((puVar5 == *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54c)))) || (uVar18 < *(ushort *)(puVar5 + 3))) {
        (*(undefined4 * PTR32 *)&gen_args[2]) = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54c)));
        piVar10 = (int *)&(*(undefined4 * PTR32 *)&gen_args[2]);
      }
      else {
        piVar10 = (int *)&(*(undefined4 * PTR32 *)&gen_args[1]);
      }
      if (*piVar10 == *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54c)))) {
        iVar12 = 0;
      }
      else {
        iVar12 = *piVar10 + 0x10;
      }
      if ((uVar6 != 0) && (iVar12 != 0)) {
        uVar6 = F_00709be0(0,uVar6,iVar12,pvVar17,(int)(*(undefined * PTR32 *)&gen_args[0]) + 0x278,
                             *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x528))));
        return uVar6;
      }
    }
    uVar6 = F_005a2710((undefined *)((int)pvVar17 + 0x2a30),4);
    *(undefined4 *)((int)pvVar17 + 0x2a34) = 0;
  }
  return uVar6;
}

/* ref: Client::Game::Event::GatheringEventHandler::vf5 */
uint F_0070b6e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x70b6e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  int * piVar2;
  int * piVar3;
  undefined * this_00;
  bool bVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int * PTR32 * ppiVar9;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  uVar1 = (uint)(byte)this[0x145];
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
  case 1: ;
    bVar4 = *(char *)(REFG(int, 0x1379694) + 0x1688) == '\x10';
    break;
  case 2: ;
  case 3: ;
    bVar4 = *(char *)(REFG(int, 0x1379694) + 0x1688) == '\x11';
    break;
  default: ;
    goto switchD_0070b705_default;
  }
  if (!bVar4) {
switchD_0070b705_default: ;
    uVar1 = F_00704240(this,1,0xffffffff,0);
    F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
    return uVar1 & 0xffffff00;
  }
                    
                    
  switch((unsigned int)(uintptr_t)(this[0x145])) {
  default: ;
switchD_0070b73e_caseD_0: ;
    F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
    return CONCAT31((int3)(uVar1 >> 8),1);
  case (undefined1)0x1: ;
  case (undefined1)0x3: ;
    uVar1 = F_00a3c850(&REFG(undefined, 0x14a4230),1);
    if (uVar1 != 0) goto switchD_0070b73e_caseD_0;
  }
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  (*(int * PTR32 *)(gen_frame + 0x20)) = (int *)0x0;
  piVar3 = (int *)F_004296a0(8,0,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0x20)) = piVar3;
  if (piVar3 != (int *)0x0) {
    *piVar3 = 0;
    piVar3[1] = 0;
  }
  *piVar3 = (int)&(*(int * PTR32 *)(gen_frame + 0x20));
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
  piVar3 = (int *)F_004296a0(8,0,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0x8)) = piVar3;
  if (piVar3 != (int *)0x0) {
    *piVar3 = 0;
    piVar3[1] = 0;
  }
  *piVar3 = (int)&(*(int * PTR32 *)(gen_frame + 0x8));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  iVar7 = REFG(int, 0x1379694);
  if (this[0x145] == (undefined1)0x1) {
    ppiVar9 = &(*(int * PTR32 *)(gen_frame + 0x20));
    uVar8 = 0;
    uVar6 = 0x440;
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2)));
  }
  else {
    if (this[0x145] != (undefined1)0x3) goto LAB_0070b81e;
    ppiVar9 = &(*(int * PTR32 *)(gen_frame + 0x20));
    uVar8 = 0;
    uVar6 = 0x441;
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2,0x441,REFG(int, 0x1379694),0,ppiVar9)));
  }
  F_0046abb0(this_00,uVar6,iVar7,uVar8,ppiVar9);
LAB_0070b81e: ;
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x8)));
  F_00429760((*(int * PTR32 *)(gen_frame + 0x8)),8,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x20)));
  uVar5 = F_00429760((*(int * PTR32 *)(gen_frame + 0x20)),8,0x2c4);
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return (uint)(uint3)(uVar5 >> 8) << 8;
}

/* ref: Client::Game::Event::GatheringEventHandler::vf41 */
uint F_0070b8a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x70b8a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte * pbVar1;
  undefined1 GVar2;
  undefined * pGVar3;
  int * piVar4;
  int * piVar5;
  undefined * this_00;
  uint uVar6;
  undefined4 uVar7;
  undefined * pvVar8;
  undefined4 uVar9;
  int * PTR32 * ppiVar10;
  
  pvVar8 = REFG(undefined4, 0x1379694);
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  if (param_3 != this) {
    pGVar3 = param_3;
    if (((short)param_3 == 1) &&
       (pGVar3 = (undefined *)0xffff, *(short *)(this + 0x54) != -1)) {
      (*(undefined4 *)(gen_frame + 0x30)) = 0;
      (*(undefined4 *)(gen_frame + 0x34)) = 0;
      GVar2 = this[0x5c];
      pGVar3 = (undefined *)(uint)(byte)GVar2;
      (*(undefined4 *)(gen_frame + 0x30)) = *(undefined4 *)(this + 0x138);
      (*(undefined4 *)(gen_frame + 0x34)) = 0x10000;
      if (((byte)GVar2 & 4) == 0) {
        this[0x5c] = (undefined1)((byte)GVar2 | 4);
        uVar6 = F_006f15b0(*(undefined * PTR32 *)(this + 4),&(*(undefined4 *)(gen_frame + 0x30)),2);
        F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
        return uVar6;
      }
    }
    goto LAB_0070ba1f;
  }
  pGVar3 = (undefined *)0x0;
  if (((param_2 != 0x101) &&
      (pGVar3 = (undefined *)(param_2 - 0x109), pGVar3 != (undefined *)0x0))
     || (*(char *)((int)REFG(undefined4, 0x1379694) + 0x188) != '\x06')) goto LAB_0070ba1f;
  F_00a4a760(&REFG(undefined, 0x14a7360),0x1a,0);
  F_00aaa5b0(pvVar8,1);
  pbVar1 = (byte *)((int)pvVar8 + 0x2dd2);
  *pbVar1 = *pbVar1 & 0xf7;
  piVar4 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)0x0;
  piVar5 = (int *)F_004296a0(8,0,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0x18)) = piVar5;
  if (piVar5 != (int *)0x0) {
    *piVar5 = 0;
    piVar5[1] = 0;
  }
  *piVar5 = (int)&(*(int * PTR32 *)(gen_frame + 0x18));
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(int * PTR32 *)(gen_frame + 0x0)) = (int *)0x0;
  piVar5 = (int *)F_004296a0(8,0,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0x0)) = piVar5;
  if (piVar5 != (int *)0x0) {
    *piVar5 = 0;
    piVar5[1] = 0;
  }
  *piVar5 = (int)&(*(int * PTR32 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  switch((unsigned int)(uintptr_t)(this[0x145])) {
  case (undefined1)0x0: ;
    uVar7 = 0x42b;
    break;
  case (undefined1)0x1: ;
    uVar7 = 0x42c;
    break;
  case (undefined1)0x2: ;
    uVar7 = 0x42d;
    break;
  case (undefined1)0x3: ;
    uVar7 = 0x42e;
    break;
  default: ;
    goto switchD_0070b991_default;
  }
  ppiVar10 = &(*(int * PTR32 *)(gen_frame + 0x18));
  uVar9 = 0;
  pvVar8 = REFG(undefined4, 0x1379694);
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
  F_0046abb0(this_00,uVar7,pvVar8,uVar9,ppiVar10);
switchD_0070b991_default: ;
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x0)));
  F_00429760((*(int * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0x0)) = (int *)0x0;
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x18)));
  F_00429760((*(int * PTR32 *)(gen_frame + 0x18)),8,0x2c4);
  pGVar3 = (undefined *)F_006f4770(this,1,0);
LAB_0070ba1f: ;
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return (uint)pGVar3;
}

/* ref: FUN_0070baa0 */
uint F_0070baa0(unsigned int gen_a0)
{
  GEN_ENTER(0x70baa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  int * piVar2;
  int * piVar3;
  undefined * pvVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int * PTR32 * ppiVar9;
  undefined4 uVar10;
  
  iVar7 = REFG(int, 0x1379694);
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  uVar1 = *((uint *)GEN_TOP((*(int *)((int)this + 0x10c) + 0x3a8)));
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
    F_00704240(this,0,0xffffffff,0);
    uVar8 = 6;
    break;
  case 1: ;
    uVar8 = 1;
    goto LAB_0070bb5f;
  case 2: ;
    uVar8 = 4;
LAB_0070bb5f: ;
    F_006f4770(this,uVar8,0);
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
    piVar3 = (int *)F_004296a0(8,0,0x2c4);
    (*(int * PTR32 *)(gen_frame + 0x8)) = piVar3;
    if (piVar3 != (int *)0x0) {
      *piVar3 = 0;
      piVar3[1] = 0;
    }
    *piVar3 = (int)&(*(int * PTR32 *)(gen_frame + 0x8));
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(int * PTR32 *)(gen_frame + 0x20)) = (int *)0x0;
    piVar3 = (int *)F_004296a0(8,0,0x2c4);
    (*(int * PTR32 *)(gen_frame + 0x20)) = piVar3;
    if (piVar3 != (int *)0x0) {
      *piVar3 = 0;
      piVar3[1] = 0;
    }
    *piVar3 = (int)&(*(int * PTR32 *)(gen_frame + 0x20));
    iVar7 = REFG(int, 0x1379694);
    ppiVar9 = &(*(int * PTR32 *)(gen_frame + 0x8));
    uVar10 = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x2c)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    uVar8 = 0x41b;
    iVar6 = REFG(int, 0x1379694);
    pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2)));
    F_0046abb0(pvVar4,uVar8,iVar6,uVar10,ppiVar9);
    ppiVar9 = &(*(int * PTR32 *)(gen_frame + 0x20));
    uVar10 = 0;
    uVar8 = 0x41f;
    pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2)));
    F_0046abb0(pvVar4,uVar8,iVar7,uVar10,ppiVar9);
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x20)));
    F_00429760((*(int * PTR32 *)(gen_frame + 0x20)),8,0x2c4);
    (*(int * PTR32 *)(gen_frame + 0x20)) = (int *)0x0;
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x8)));
    uVar5 = F_00429760((*(int * PTR32 *)(gen_frame + 0x8)),8,0x2c4);
    F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
    return (uint)uVar5;
  case 3: ;
  case 7: ;
    uVar8 = 4;
    break;
  case 4: ;
    F_006f4770(this,4,0);
    uVar1 = F_00704240(this,7,0xffffffff,0);
    F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
    return uVar1;
  case 5: ;
    F_006f4770(this,4,0);
    uVar8 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10c) + 0x3ac)));
    uVar10 = 0;
    goto LAB_0070bcba;
  case 6: ;
    F_006f4770(this,4,0);
    uVar8 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10c) + 0x3ac)));
    uVar10 = 1;
LAB_0070bcba: ;
    F_00704240(this,6,uVar8,uVar10);
    uVar1 = F_006be850(this);
    F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
    return uVar1;
  case 8: ;
    F_006f4770(this,4,0);
    uVar1 = F_00704240(this,8,0xffffffff,0);
    F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
    return uVar1;
  case 9: ;
    F_006f4770(this,4,0);
    uVar1 = F_00704240(this,9,0xffffffff,0);
    F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
    return uVar1;
  case 10: ;
    F_006f4770(this,4,0);
    uVar1 = F_00704240(this,10,*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10c) + 0x3ac))),0);
    F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
    return uVar1;
  case 0xb: ;
  case 0xc: ;
    uVar8 = 5;
    break;
  case 0xd: ;
    uVar1 = F_006be2c0(this,0);
    F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
    return uVar1;
  case 0xe: ;
  case 0xf: ;
  case 0x10: ;
    if ((*(byte *)(REFG(int, 0x1379694) + 0x2dd2) & 8) == 0) {
      *(undefined1 *)(REFG(int, 0x1379694) + 0x2dd5) = 0;
      uVar1 = F_006df740(this,iVar7,0x101,this);
      F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
      return uVar1;
    }
    *(undefined1 *)(REFG(int, 0x1379694) + 0x2dd5) = 1;
    uVar1 = F_006df740(this,iVar7,0x109,this);
    F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
    return uVar1;
  default: ;
    goto switchD_0070baca_default;
  }
  uVar1 = F_006f4770(this,uVar8,0);
switchD_0070baca_default: ;
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar1;
}

/* ref: Client::Game::Event::CraftEventHandler::vf24 */
uint F_0070bdd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x70bdd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x160];
  byte * pbVar1;
  undefined1 CVar2;
  ushort uVar3;
  bool bVar4;
  uint uVar5;
  undefined * pvVar6;
  int * piVar7;
  int * piVar8;
  undefined * pvVar9;
  undefined4 * puVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int * PTR32 * ppiVar14;
  
  uVar5 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x15c);
  (*(uint *)(gen_frame + 0x158)) = uVar5;
  this[0x184] = (undefined1)((byte)this[0x184] & 0xf7);
  *(undefined4 *)(this + 0x180) = 0;
  pvVar6 = REFG(undefined4, 0x1379694);
  if ((((byte)this[0x184] & 0x10) != 0) && (*param_3 != 6)) {
    if (REFG(undefined4, 0x1379694) != (undefined *)0x0) {
      F_00aa2900(REFG(undefined4, 0x1379694),0);
      F_00aa80c0(pvVar6,1,0,0);
      uVar5 = F_00aa80c0(pvVar6,2,0,0);
    }
    if ((((byte)this[0x184] & 8) == 0) && (uVar5 = 0xffff, *(short *)(this + 0x54) != -1)) {
      pvVar6 = F_00c48350(&(*(undefined4 *)(gen_frame + 0x30)),0,0xe0);
      this[0x184] = (undefined1)((byte)this[0x184] | 8);
      CVar2 = this[0x5c];
      uVar5 = CONCAT31((int3)((uint)((int)(uintptr_t)pvVar6) >> 8),CVar2);
      (*(undefined4 *)(gen_frame + 0x30)) = 7;
      (*(undefined4 *)(gen_frame + 0x34)) = 1;
      (*(undefined4 *)(gen_frame + 0x38)) = 0;
      (*(undefined4 *)(gen_frame + 0x3c)) = 0;
      if (((byte)CVar2 & 4) == 0) {
        this[0x5c] = (undefined1)((byte)CVar2 | 4);
        uVar5 = F_006f15b0(*(undefined * PTR32 *)(this + 4),&(*(undefined4 *)(gen_frame + 0x30)),4);
        F_00c47745((*(uint *)(gen_frame + 0x158)) ^ (uint)(uint)(gen_frame + 0x15c));
        return uVar5;
      }
    }
    goto switchD_0070bed7_default;
  }
  uVar5 = *param_3 - 1;
  switch((unsigned int)(uintptr_t)(uVar5)) {
  case 0: ;
    *(undefined4 *)(this + 0x18e) = 0;
    *(undefined4 *)(this + 0x186) = 0;
    *(undefined4 *)(this + 0x18a) = 0;
    this[0x192] = (undefined1)0x0;
    *(undefined2 *)(this + 0x194) = 0;
    this[0x196] = (undefined1)0x0;
    uVar12 = 0;
    break;
  case 1: ;
    *(short *)(this + 0x124) = (short)param_3[1];
    *(short *)(this + 0x122) = (short)param_3[2];
    this[0x121] = *(undefined *)(param_3 + 3);
    uVar12 = 1;
    break;
  case 2: ;
    (*(int * PTR32 *)(gen_frame + 0x2c)) = (int *)(uint)*(ushort *)(this + 0x124);
    uVar5 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8));
    *(uint *)(this + 0x108) = uVar5;
    puVar10 = (undefined4 *)F_00406b90(0x20,0,0);
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      F_00cb4700(puVar10,1,0);
      puVar10[5] = 1;
      *puVar10 = (*(undefined * PTR32 (*)[2])REFP(0x10b91e8));
      puVar10[6] = this;
      puVar10[7] = ((code *)REFP(0x70c7d0));
    }
    *(undefined4 * PTR32 *)(this + 0xf8) = puVar10;
    F_00cb4540(puVar10,0,(*(int * PTR32 *)(gen_frame + 0x2c)));
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x108) + 0x48))))
                      (*(int * PTR32 *)(this + 0x108),*(undefined4 *)(this + 0xf8));
    F_00c47745((*(uint *)(gen_frame + 0x158)) ^ (uint)(uint)(gen_frame + 0x15c));
    return uVar5;
  case 3: ;
    F_006bef40(1);
    F_006bf2e0(1);
    uVar5 = F_006befa0();
    F_00c47745((*(uint *)(gen_frame + 0x158)) ^ (uint)(uint)(gen_frame + 0x15c));
    return uVar5;
  case 4: ;
    F_006bef40(0);
    uVar5 = F_006befa0();
    F_00c47745((*(uint *)(gen_frame + 0x158)) ^ (uint)(uint)(gen_frame + 0x15c));
    return uVar5;
  case 5: ;
    pbVar1 = (byte *)((int)REFG(undefined4, 0x1379694) + 0x2dd2);
    *(undefined1 *)((int)REFG(undefined4, 0x1379694) + 0x2dd5) = 10;
    if ((*pbVar1 & 8) == 0) {
      uVar5 = F_006df740(this,pvVar6,0xee,this);
      F_00c47745((*(uint *)(gen_frame + 0x158)) ^ (uint)(uint)(gen_frame + 0x15c));
      return uVar5;
    }
    uVar5 = F_006df740(this,pvVar6,0xf5,this);
    F_00c47745((*(uint *)(gen_frame + 0x158)) ^ (uint)(uint)(gen_frame + 0x15c));
    return uVar5;
  case 7: ;
  case 8: ;
    *(int *)(this + 0x180) = param_3[0x10];
    (*(int * PTR32 *)(gen_frame + 0x24)) = (int *)param_3[1];
    if (param_3[3] != 0) {
      (*(int * PTR32 *)(gen_frame + 0x24)) = (*(int * PTR32 *)(gen_frame + 0x24)) + 250000;
    }
    if (param_3[2] == 1) {
      piVar8 = (int *)F_00424750(REFG(int, 0x137104c));
      if (piVar8 != (int *)0x0) {
        (*(int * PTR32 *)(gen_frame + 0x140)) = (int *)0x0;
        piVar7 = (int *)F_004296a0(8,0,0x2c4);
        (*(int * PTR32 *)(gen_frame + 0x140)) = piVar7;
        if (piVar7 != (int *)0x0) {
          *piVar7 = 0;
          piVar7[1] = 0;
        }
        *piVar7 = (int)&(*(int * PTR32 *)(gen_frame + 0x140));
        (*(int * PTR32 *)(gen_frame + 0x134)) = (int *)0x0;
        (*(undefined4 *)(gen_frame + 0x144)) = 0;
        (*(undefined4 *)(gen_frame + 0x148)) = 0;
        (*(undefined4 *)(gen_frame + 0x14c)) = 0;
        (*(undefined4 *)(gen_frame + 0x150)) = 0;
        (*(int * PTR32 *)(gen_frame + 0x134)) = (*(int * PTR32 *)(gen_frame + 0x24));
        (*(int * PTR32 * PTR32 *)(gen_frame + 0x138)) = &(*(int * PTR32 *)(gen_frame + 0x134));
        (*(undefined1 *)(gen_frame + 0x13c)) = 0;
        F_00493bc0(&(*(int * PTR32 *)(gen_frame + 0x140)),&(*(int * PTR32 *)(gen_frame + 0x134)));
        F_004917c0(&(*(int * PTR32 *)(gen_frame + 0x134)));
        ppiVar14 = &(*(int * PTR32 *)(gen_frame + 0x140));
        uVar13 = 0;
        uVar12 = 0x486;
        pvVar6 = REFG(undefined4, 0x1379694);
        pvVar9 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 0x28))(piVar8)));
        F_0046abb0(pvVar9,uVar12,pvVar6,uVar13,ppiVar14);
        F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x140)));
        F_00429760((*(int * PTR32 *)(gen_frame + 0x140)),8,0x2c4);
      }
      piVar8 = (int *)F_00424750(REFG(int, 0x137104c));
      if (piVar8 != (int *)0x0) {
        (*(int * PTR32 *)(gen_frame + 0x140)) = (int *)0x0;
        piVar7 = (int *)F_004296a0(8,0,0x2c4);
        (*(int * PTR32 *)(gen_frame + 0x140)) = piVar7;
        if (piVar7 != (int *)0x0) {
          *piVar7 = 0;
          piVar7[1] = 0;
        }
        *piVar7 = (int)&(*(int * PTR32 *)(gen_frame + 0x140));
        (*(int * PTR32 *)(gen_frame + 0x134)) = (int *)0x0;
        (*(undefined4 *)(gen_frame + 0x144)) = 0;
        (*(undefined4 *)(gen_frame + 0x148)) = 0;
        (*(undefined4 *)(gen_frame + 0x14c)) = 0;
        (*(undefined4 *)(gen_frame + 0x150)) = 0;
        (*(int * PTR32 *)(gen_frame + 0x134)) = (*(int * PTR32 *)(gen_frame + 0x24));
        (*(int * PTR32 * PTR32 *)(gen_frame + 0x138)) = &(*(int * PTR32 *)(gen_frame + 0x134));
        (*(undefined1 *)(gen_frame + 0x13c)) = 0;
        F_00493bc0(&(*(int * PTR32 *)(gen_frame + 0x140)),&(*(int * PTR32 *)(gen_frame + 0x134)));
        F_004917c0(&(*(int * PTR32 *)(gen_frame + 0x134)));
        ppiVar14 = &(*(int * PTR32 *)(gen_frame + 0x140));
        uVar13 = 0;
        uVar12 = 0x484;
        pvVar6 = REFG(undefined4, 0x1379694);
        pvVar9 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 0x28))(piVar8)));
        F_0046abb0(pvVar9,uVar12,pvVar6,uVar13,ppiVar14);
        F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x140)));
        F_00429760((*(int * PTR32 *)(gen_frame + 0x140)),8,0x2c4);
        uVar12 = 3;
        break;
      }
    }
    else {
      (*(uint *)(gen_frame + 0x1c)) = param_3[2];
      (*(int * PTR32 *)(gen_frame + 0x18)) = (*(int * PTR32 *)(gen_frame + 0x24));
      F_007047e0(0x487,&(*(int * PTR32 *)(gen_frame + 0x18)),2);
      F_007047e0(0x485,&(*(int * PTR32 *)(gen_frame + 0x18)),2);
    }
    uVar12 = 3;
    break;
  case 9: ;
    *(int *)(this + 0x180) = param_3[0x10];
    piVar8 = (int *)F_00424750(REFG(int, 0x137104c));
    (*(int * PTR32 *)(gen_frame + 0x2c)) = piVar8;
    if (piVar8 != (int *)0x0) {
      (*(int * PTR32 *)(gen_frame + 0x140)) = (int *)0x0;
      piVar8 = (int *)F_004296a0(8,0,0x2c4);
      (*(int * PTR32 *)(gen_frame + 0x140)) = piVar8;
      if (piVar8 != (int *)0x0) {
        *piVar8 = 0;
        piVar8[1] = 0;
      }
      ppiVar14 = &(*(int * PTR32 *)(gen_frame + 0x140));
      *piVar8 = (int)ppiVar14;
      uVar13 = 0;
      (*(undefined4 *)(gen_frame + 0x144)) = 0;
      (*(undefined4 *)(gen_frame + 0x148)) = 0;
      (*(undefined4 *)(gen_frame + 0x14c)) = 0;
      (*(undefined4 *)(gen_frame + 0x150)) = 0;
      uVar12 = 0x499;
      pvVar6 = REFG(undefined4, 0x1379694);
      pvVar9 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x2c)) + 0x28))((*(int * PTR32 *)(gen_frame + 0x2c)))));
      F_0046abb0(pvVar9,uVar12,pvVar6,uVar13,ppiVar14);
      F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x140)));
      F_00429760((*(int * PTR32 *)(gen_frame + 0x140)),8,0x2c4);
    }
    piVar8 = (int *)F_00424750(REFG(int, 0x137104c));
    (*(int * PTR32 *)(gen_frame + 0x2c)) = piVar8;
    if (piVar8 != (int *)0x0) {
      F_004816e0(((undefined4 *)(gen_frame + 0x0)));
      puVar10 = ((undefined4 *)(gen_frame + 0x0));
      uVar13 = 0;
      uVar12 = 0x488;
      pvVar6 = REFG(undefined4, 0x1379694);
      pvVar9 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x2c)) + 0x28))((*(int * PTR32 *)(gen_frame + 0x2c)))));
      F_0046abb0(pvVar9,uVar12,pvVar6,uVar13,puVar10);
      F_00492c50(((undefined4 *)(gen_frame + 0x0)));
      F_00429760(((undefined4 *)(gen_frame + 0x0))[0],8,0x2c4);
    }
    piVar8 = param_3 + 0xc;
    bVar4 = false;
    (*(int * PTR32 *)(gen_frame + 0x2c)) = piVar8;
    iVar11 = 2;
    do {
      if ((0 < piVar8[-8]) && ((0 < *piVar8 || (0 < piVar8[8])))) {
        bVar4 = true;
      }
      if ((0 < piVar8[-7]) && ((0 < piVar8[1] || (0 < piVar8[9])))) {
        bVar4 = true;
      }
      if ((0 < piVar8[-6]) && ((0 < piVar8[2] || (0 < piVar8[10])))) {
        bVar4 = true;
      }
      if ((0 < piVar8[-5]) && ((0 < piVar8[3] || (0 < piVar8[0xb])))) {
        bVar4 = true;
      }
      piVar8 = piVar8 + 4;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    if ((bVar4) && (piVar8 = (int *)F_00424750(REFG(int, 0x137104c)), piVar8 != (int *)0x0)) {
      F_004816e0(((undefined4 *)(gen_frame + 0x0)));
      puVar10 = ((undefined4 *)(gen_frame + 0x0));
      uVar13 = 0;
      uVar12 = 0x492;
      pvVar6 = REFG(undefined4, 0x1379694);
      pvVar9 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 0x28))(piVar8)));
      F_0046abb0(pvVar9,uVar12,pvVar6,uVar13,puVar10);
      F_00492c50(((undefined4 *)(gen_frame + 0x0)));
      F_00429760(((undefined4 *)(gen_frame + 0x0))[0],8,0x2c4);
    }
    (*(int * PTR32 *)(gen_frame + 0x24)) = (*(int * PTR32 *)(gen_frame + 0x2c));
    (*(int * PTR32 *)(gen_frame + 0x2c)) = (int *)0x8;
    do {
      uVar5 = (*(int * PTR32 *)(gen_frame + 0x24))[-8];
      if (0 < (int)uVar5) {
        (*(int * PTR32 * PTR32 *)(gen_frame + 0x20)) = (int * PTR32 *)*(*(int * PTR32 *)(gen_frame + 0x24));
        if ((0 < *(*(int * PTR32 *)(gen_frame + 0x24))) && (piVar8 = (int *)F_00424750(REFG(int, 0x137104c)), piVar8 != (int *)0x0))
        {
          F_004816e0(((undefined4 *)(gen_frame + 0x0)));
          (*(uint *)(gen_frame + 0x1c)) = uVar5;
          (*(undefined4 *)(gen_frame + 0x128)) = 0;
          (*(undefined4 *)(gen_frame + 0x12c)) = 0;
          (*(undefined1 *)(gen_frame + 0x130)) = 0xff;
          F_00490f30(&(*(undefined4 *)(gen_frame + 0x128)),&(*(uint *)(gen_frame + 0x1c)));
          F_00493bc0(((undefined4 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x128)));
          F_004917c0(&(*(undefined4 *)(gen_frame + 0x128)));
          (*(undefined4 *)(gen_frame + 0x11c)) = 0;
          (*(undefined4 *)(gen_frame + 0x120)) = 0;
          (*(undefined1 *)(gen_frame + 0x124)) = 0xff;
          F_00490f30(&(*(undefined4 *)(gen_frame + 0x11c)),&(*(int * PTR32 * PTR32 *)(gen_frame + 0x20)));
          F_00493bc0(((undefined4 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x11c)));
          F_004917c0(&(*(undefined4 *)(gen_frame + 0x11c)));
          puVar10 = ((undefined4 *)(gen_frame + 0x0));
          uVar13 = 0;
          uVar12 = 0x490;
          pvVar6 = REFG(undefined4, 0x1379694);
          pvVar9 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 0x28))(piVar8)));
          F_0046abb0(pvVar9,uVar12,pvVar6,uVar13,puVar10);
          F_00492c50(((undefined4 *)(gen_frame + 0x0)));
          F_00429760(((undefined4 *)(gen_frame + 0x0))[0],8,0x2c4);
        }
        (*(uint *)(gen_frame + 0x1c)) = (*(int * PTR32 *)(gen_frame + 0x24))[8];
        if (0 < (*(int * PTR32 *)(gen_frame + 0x24))[8]) {
          (*(int * PTR32 * PTR32 *)(gen_frame + 0x138)) = (int * PTR32 *)(uVar5 + 1000000);
          piVar8 = (int *)F_00424750(REFG(int, 0x137104c));
          if (piVar8 != (int *)0x0) {
            F_004816e0(((undefined4 *)(gen_frame + 0x0)));
            (*(int * PTR32 * PTR32 *)(gen_frame + 0x20)) = (*(int * PTR32 * PTR32 *)(gen_frame + 0x138));
            (*(undefined4 *)(gen_frame + 0x110)) = 0;
            (*(undefined4 *)(gen_frame + 0x114)) = 0;
            (*(undefined1 *)(gen_frame + 0x118)) = 0xff;
            F_00490f30(&(*(undefined4 *)(gen_frame + 0x110)),&(*(int * PTR32 * PTR32 *)(gen_frame + 0x20)));
            F_00493bc0(((undefined4 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x110)));
            F_004917c0(&(*(undefined4 *)(gen_frame + 0x110)));
            (*(undefined4 *)(gen_frame + 0x14c)) = 0;
            (*(undefined4 *)(gen_frame + 0x150)) = 0;
            (*(undefined1 *)(gen_frame + 0x154)) = 0xff;
            F_00490f30(&(*(undefined4 *)(gen_frame + 0x14c)),&(*(uint *)(gen_frame + 0x1c)));
            F_00493bc0(((undefined4 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x14c)));
            F_004917c0(&(*(undefined4 *)(gen_frame + 0x14c)));
            puVar10 = ((undefined4 *)(gen_frame + 0x0));
            uVar13 = 0;
            uVar12 = 0x490;
            pvVar6 = REFG(undefined4, 0x1379694);
            pvVar9 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 0x28))(piVar8)));
            F_0046abb0(pvVar9,uVar12,pvVar6,uVar13,puVar10);
            F_00492c50(((undefined4 *)(gen_frame + 0x0)));
            F_00429760(((undefined4 *)(gen_frame + 0x0))[0],8,0x2c4);
          }
        }
      }
      (*(int * PTR32 *)(gen_frame + 0x24)) = (*(int * PTR32 *)(gen_frame + 0x24)) + 1;
      iVar11 = (int)(*(int * PTR32 *)(gen_frame + 0x2c)) + -1;
      (*(int * PTR32 *)(gen_frame + 0x2c)) = (int *)iVar11;
    } while (iVar11 != 0);
    uVar12 = 4;
    break;
  case 10: ;
    *(int *)(this + 0x180) = param_3[0x10];
    F_006bee30(this,param_3);
    F_00705080(this,param_3,0);
    F_006bf3f0(param_3);
    if ((param_3[0x10] & 1U) == 0) {
      if ((param_3[0x10] & 4U) == 0) goto LAB_0070c06e;
      uVar12 = 0xc;
    }
    else {
      uVar12 = 0xb;
    }
    break;
  case 0xb: ;
    *(int *)(this + 0x180) = param_3[0x10];
    F_006bee30(this,param_3);
    F_00705080(this,param_3,1);
    F_006bf3f0(param_3);
  case 6: ;
  case 0xc: ;
LAB_0070c06e: ;
    uVar5 = F_00a4a760(&REFG(undefined, 0x14a7360),0x18,0);
    this[0x184] = (undefined1)((byte)this[0x184] & 0xfe);
    F_00c47745((*(uint *)(gen_frame + 0x158)) ^ (uint)(uint)(gen_frame + 0x15c));
    return uVar5;
  case 0xd: ;
    uVar3 = *(ushort *)(param_3 + 1);
    *(ushort *)(this + 0x124) = uVar3;
    this[0x120] = *(undefined *)(param_3 + 2);
    (*(uint *)(gen_frame + 0x1c)) = (uint)uVar3;
    uVar5 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8));
    *(uint *)(this + 0x110) = uVar5;
    puVar10 = (undefined4 *)F_00406b90(0x20,0,0);
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      F_00cb4700(puVar10,1,2);
      puVar10[5] = 1;
      *puVar10 = (*(undefined * PTR32 (*)[2])REFP(0x10b91e8));
      puVar10[6] = this;
      puVar10[7] = ((code *)REFP(0x70c7d0));
    }
    *(undefined4 * PTR32 *)(this + 0x100) = puVar10;
    F_00cb4540(puVar10,0,(*(uint *)(gen_frame + 0x1c)));
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x110) + 0x48))))
                      (*(int * PTR32 *)(this + 0x110),*(undefined4 *)(this + 0x100));
    F_00c47745((*(uint *)(gen_frame + 0x158)) ^ (uint)(uint)(gen_frame + 0x15c));
    return uVar5;
  case 0xe: ;
    uVar12 = 0xe;
    break;
  default: ;
    goto switchD_0070bed7_default;
  }
  uVar5 = F_006f49b0(this,uVar12,0,0,0);
switchD_0070bed7_default: ;
  F_00c47745((*(uint *)(gen_frame + 0x158)) ^ (uint)(uint)(gen_frame + 0x15c));
  return uVar5;
}

/* ref: FUN_0070c7d0 */
uint F_0070c7d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x70c7d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  byte bVar1;
  bool bVar2;
  int * piVar3;
  undefined * this_00;
  undefined * pvVar4;
  byte * pbVar5;
  undefined4 * puVar6;
  uint uVar7;
  int * piVar8;
  int iVar9;
  byte * pbVar10;
  undefined4 * puVar11;
  undefined4 * puVar12;
  undefined4 uVar13;
  byte * PTR32 * ppbVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int * PTR32 * ppiVar17;
  undefined4 * PTR32 * ppuVar18;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  (*(undefined * PTR32 *)(gen_frame + 0x34)) = this;
  piVar8 = param_1;
  switch((unsigned int)(uintptr_t)(param_3)) {
  case 0: ;
    pbVar5 = *(byte * PTR32 *)(*param_1 + 4);
    pbVar10 = pbVar5;
    puVar6 = (undefined4 *)((int)this + 0x128);
    for (iVar9 = 0x14; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar6 = *(undefined4 *)pbVar10;
      pbVar10 = pbVar10 + 4;
      puVar6 = puVar6 + 1;
    }
    (*(byte * PTR32 *)(gen_frame + 0x38)) = pbVar5;
    puVar6 = (undefined4 *)F_00ab2ed0((uint)pbVar5[0x3e]);
    *(undefined4 *)((int)this + 0x178) = *puVar6;
    *(undefined4 *)((int)this + 0x17c) = puVar6[1];
    (*(byte * PTR32 *)(gen_frame + 0x38)) = *(byte * PTR32 *)((*(byte * PTR32 *)(gen_frame + 0x38)) + 4);
    uVar7 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8));
    *(uint *)((int)this + 0x10c) = uVar7;
    puVar6 = (undefined4 *)F_00406b90(0x20,0,0);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      F_00cb4700(puVar6,1,1);
      puVar6[5] = 1;
      *puVar6 = (*(undefined * PTR32 (*)[2])REFP(0x10b91e8));
      puVar6[6] = (*(undefined * PTR32 *)(gen_frame + 0x34));
      puVar6[7] = ((code *)REFP(0x70c7d0));
    }
    pvVar4 = (*(undefined * PTR32 *)(gen_frame + 0x34));
    *(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 0xfc) = puVar6;
    F_00cb4540(puVar6,0,(*(byte * PTR32 *)(gen_frame + 0x38)));
    piVar8 = *(int * PTR32 *)((int)pvVar4 + 0x10c);
    uVar7 = ((code *)*(gen_code32 *)(*piVar8 + 0x48))(piVar8,*(undefined4 *)((int)pvVar4 + 0xfc));
    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
    return uVar7;
  case 1: ;
    (*(undefined4 * PTR32 *)(gen_frame + 0x14)) = (undefined4 *)*(undefined4 *)(*param_1 + 4);
    if (*(byte *)((int)this + 0x167) == 1) {
      uVar16 = 1;
      ppbVar14 = &(*(byte * PTR32 *)(gen_frame + 0x38));
      (*(byte * PTR32 *)(gen_frame + 0x38)) = *(byte * PTR32 *)((int)this + 300);
      uVar13 = 0x47e;
    }
    else {
      uVar16 = 2;
      ppbVar14 = &(*(byte * PTR32 *)(gen_frame + 0x8));
      (*(byte * PTR32 *)(gen_frame + 0x8)) = *(byte * PTR32 *)((int)this + 300);
      (*(uint *)(gen_frame + 0xc)) = (uint)*(byte *)((int)this + 0x167);
      uVar13 = 0x47f;
    }
    F_007047e0(uVar13,ppbVar14,uVar16);
    pvVar4 = (*(undefined * PTR32 *)(gen_frame + 0x34));
    bVar2 = false;
    if ((0 < REFG(int, 0x14ab834)) && (*(char *)((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 0x170) != '\0')) {
      bVar2 = true;
    }
    if ((0 < REFG(int, 0x14ab838)) && (*(char *)((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 0x171) != '\0')) {
      bVar2 = true;
    }
    if ((REFG(char, 0x14ab7dc) != '\0') || (REFG(char, 0x14ab7dd) != '\0')) {
      bVar2 = true;
    }
    if ((REFG(char, 0x14ab7e8) != '\0') || (REFG(char, 0x14ab7e9) != '\0')) {
      bVar2 = true;
    }
    if ((REFG(char, 0x14ab7f4) != '\0') || (REFG(char, 0x14ab7f5) != '\0')) {
      bVar2 = true;
    }
    if ((REFG(char, 0x14ab800) != '\0') || (REFG(char, 0x14ab801) != '\0')) {
      bVar2 = true;
    }
    if ((REFG(char, 0x14ab80c) != '\0') || (REFG(char, 0x14ab80d) != '\0')) {
      bVar2 = true;
    }
    if ((REFG(char, 0x14ab818) != '\0') || (REFG(char, 0x14ab819) != '\0')) {
      bVar2 = true;
    }
    if ((REFG(char, 0x14ab824) != '\0') || (REFG(char, 0x14ab825) != '\0')) {
      bVar2 = true;
    }
    if (((REFG(char, 0x14ab830) != '\0') || (REFG(char, 0x14ab831) != '\0')) || (bVar2)) {
      piVar8 = (int *)F_00424750(REFG(int, 0x137104c));
      if (piVar8 != (int *)0x0) {
        (*(int * PTR32 *)(gen_frame + 0x1c)) = (int *)0x0;
        piVar3 = (int *)F_004296a0(8,0,0x2c4);
        (*(int * PTR32 *)(gen_frame + 0x1c)) = piVar3;
        if (piVar3 != (int *)0x0) {
          *piVar3 = 0;
          piVar3[1] = 0;
        }
        ppiVar17 = &(*(int * PTR32 *)(gen_frame + 0x1c));
        *piVar3 = (int)ppiVar17;
        uVar15 = 0;
        (*(undefined4 *)(gen_frame + 0x20)) = 0;
        (*(undefined4 *)(gen_frame + 0x24)) = 0;
        (*(undefined4 *)(gen_frame + 0x28)) = 0;
        (*(undefined4 *)(gen_frame + 0x2c)) = 0;
        uVar16 = 0x491;
        uVar13 = REFG(undefined4, 0x1379694);
        this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 0x28))(piVar8)));
        F_0046abb0(this_00,uVar16,uVar13,uVar15,ppiVar17);
        F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x1c)));
        F_00429760((*(int * PTR32 *)(gen_frame + 0x1c)),8,0x2c4);
      }
      *(byte *)((int)pvVar4 + 0x184) = *(byte *)((int)pvVar4 + 0x184) | 4;
    }
    (*(uint * PTR32 *)(gen_frame + 0x18)) = (uint *)0x0;
    (*(byte * PTR32 *)(gen_frame + 0x38)) = (byte *)&REFG(int, 0x14ab834);
    do {
      iVar9 = *(int *)(*(byte * PTR32 *)(gen_frame + 0x38));
      bVar1 = *(byte *)((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + (int)(*(uint * PTR32 *)(gen_frame + 0x18)) + 0x170);
      if ((0 < iVar9) && (bVar1 != 0)) {
        (*(uint *)(gen_frame + 0xc)) = (uint)bVar1;
        piVar8 = (int *)F_00424750(REFG(int, 0x137104c));
        if (piVar8 != (int *)0x0) {
          (*(undefined4 * PTR32 *)(gen_frame + 0x48)) = (undefined4 *)0x0;
          puVar6 = (undefined4 *)F_004296a0(8,0,0x2c4);
          (*(undefined4 * PTR32 *)(gen_frame + 0x48)) = puVar6;
          if (puVar6 != (undefined4 *)0x0) {
            *puVar6 = 0;
            puVar6[1] = 0;
          }
          *puVar6 = &(*(undefined4 * PTR32 *)(gen_frame + 0x48));
          (*(int *)(gen_frame + 0x6c)) = 0;
          (*(undefined4 *)(gen_frame + 0x4c)) = 0;
          (*(undefined4 *)(gen_frame + 0x50)) = 0;
          (*(undefined4 *)(gen_frame + 0x54)) = 0;
          (*(undefined4 *)(gen_frame + 0x58)) = 0;
          (*(int *)(gen_frame + 0x6c)) = iVar9;
          (*(int * PTR32 *)(gen_frame + 0x70)) = &(*(int *)(gen_frame + 0x6c));
          (*(undefined1 *)(gen_frame + 0x74)) = 0;
          F_00493bc0(&(*(undefined4 * PTR32 *)(gen_frame + 0x48)),&(*(int *)(gen_frame + 0x6c)));
          F_004917c0(&(*(int *)(gen_frame + 0x6c)));
          (*(uint *)(gen_frame + 0x60)) = 0;
          (*(uint *)(gen_frame + 0x60)) = (*(uint *)(gen_frame + 0xc));
          (*(uint * PTR32 *)(gen_frame + 0x64)) = &(*(uint *)(gen_frame + 0x60));
          (*(undefined1 *)(gen_frame + 0x68)) = 0;
          F_00493bc0(&(*(undefined4 * PTR32 *)(gen_frame + 0x48)),&(*(uint *)(gen_frame + 0x60)));
          F_004917c0(&(*(uint *)(gen_frame + 0x60)));
          ppuVar18 = &(*(undefined4 * PTR32 *)(gen_frame + 0x48));
          uVar15 = 0;
          uVar16 = 0x490;
          uVar13 = REFG(undefined4, 0x1379694);
          pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 0x28))(piVar8)));
          F_0046abb0(pvVar4,uVar16,uVar13,uVar15,ppuVar18);
          F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x48)));
          F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x48)),8,0x2c4);
        }
      }
      (*(uint * PTR32 *)(gen_frame + 0x18)) = (uint *)((int)(*(uint * PTR32 *)(gen_frame + 0x18)) + 1);
      pbVar5 = (*(byte * PTR32 *)(gen_frame + 0x38)) + 4;
      (*(byte * PTR32 *)(gen_frame + 0x38)) = pbVar5;
    } while ((int)pbVar5 < 0x14ab83c);
    (*(uint * PTR32 *)(gen_frame + 0x18)) = (uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 0x130);
    (*(byte * PTR32 *)(gen_frame + 0x38)) = (byte *)&REFG(char, 0x14ab7dd);
    do {
      (*(uint *)(gen_frame + 0x10)) = (uint)(*(byte * PTR32 *)(gen_frame + 0x38))[-1];
      if ((*(byte * PTR32 *)(gen_frame + 0x38))[-1] != 0) {
        uVar7 = *(*(uint * PTR32 *)(gen_frame + 0x18));
        piVar8 = (int *)F_00424750(REFG(int, 0x137104c));
        if (piVar8 != (int *)0x0) {
          (*(int * PTR32 *)(gen_frame + 0x1c)) = (int *)0x0;
          piVar3 = (int *)F_004296a0(8,0,0x2c4);
          (*(int * PTR32 *)(gen_frame + 0x1c)) = piVar3;
          if (piVar3 != (int *)0x0) {
            *piVar3 = 0;
            piVar3[1] = 0;
          }
          *piVar3 = (int)&(*(int * PTR32 *)(gen_frame + 0x1c));
          (*(undefined4 *)(gen_frame + 0x20)) = 0;
          (*(undefined4 *)(gen_frame + 0x24)) = 0;
          (*(undefined4 *)(gen_frame + 0x28)) = 0;
          (*(undefined4 *)(gen_frame + 0x2c)) = 0;
          (*(uint *)(gen_frame + 0xc)) = uVar7;
          (*(uint *)(gen_frame + 0x60)) = 0;
          (*(uint * PTR32 *)(gen_frame + 0x64)) = (uint *)0x0;
          (*(undefined1 *)(gen_frame + 0x68)) = 0xff;
          F_00490f30(&(*(uint *)(gen_frame + 0x60)),&(*(uint *)(gen_frame + 0xc)));
          F_00493bc0(&(*(int * PTR32 *)(gen_frame + 0x1c)),&(*(uint *)(gen_frame + 0x60)));
          F_004917c0(&(*(uint *)(gen_frame + 0x60)));
          (*(int *)(gen_frame + 0x6c)) = 0;
          (*(int * PTR32 *)(gen_frame + 0x70)) = (int *)0x0;
          (*(undefined1 *)(gen_frame + 0x74)) = 0xff;
          F_00490f30(&(*(int *)(gen_frame + 0x6c)),&(*(uint *)(gen_frame + 0x10)));
          F_00493bc0(&(*(int * PTR32 *)(gen_frame + 0x1c)),&(*(int *)(gen_frame + 0x6c)));
          F_004917c0(&(*(int *)(gen_frame + 0x6c)));
          ppiVar17 = &(*(int * PTR32 *)(gen_frame + 0x1c));
          uVar15 = 0;
          uVar16 = 0x490;
          uVar13 = REFG(undefined4, 0x1379694);
          pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 0x28))(piVar8)));
          F_0046abb0(pvVar4,uVar16,uVar13,uVar15,ppiVar17);
          F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x1c)));
          F_00429760((*(int * PTR32 *)(gen_frame + 0x1c)),8,0x2c4);
        }
      }
      (*(uint *)(gen_frame + 0xc)) = (uint)*(*(byte * PTR32 *)(gen_frame + 0x38));
      if (*(*(byte * PTR32 *)(gen_frame + 0x38)) != 0) {
        uVar7 = *(*(uint * PTR32 *)(gen_frame + 0x18));
        piVar8 = (int *)F_00424750(REFG(int, 0x137104c));
        if (piVar8 != (int *)0x0) {
          (*(int * PTR32 *)(gen_frame + 0x1c)) = (int *)0x0;
          piVar3 = (int *)F_004296a0(8,0,0x2c4);
          (*(int * PTR32 *)(gen_frame + 0x1c)) = piVar3;
          if (piVar3 != (int *)0x0) {
            *piVar3 = 0;
            piVar3[1] = 0;
          }
          *piVar3 = (int)&(*(int * PTR32 *)(gen_frame + 0x1c));
          (*(undefined4 *)(gen_frame + 0x20)) = 0;
          (*(undefined4 *)(gen_frame + 0x24)) = 0;
          (*(undefined4 *)(gen_frame + 0x28)) = 0;
          (*(undefined4 *)(gen_frame + 0x2c)) = 0;
          (*(uint *)(gen_frame + 0x10)) = uVar7 + 1000000;
          (*(undefined4 *)(gen_frame + 0x3c)) = 0;
          (*(undefined4 *)(gen_frame + 0x40)) = 0;
          (*(undefined1 *)(gen_frame + 0x44)) = 0xff;
          F_00490f30(&(*(undefined4 *)(gen_frame + 0x3c)),&(*(uint *)(gen_frame + 0x10)));
          F_00493bc0(&(*(int * PTR32 *)(gen_frame + 0x1c)),&(*(undefined4 *)(gen_frame + 0x3c)));
          F_004917c0(&(*(undefined4 *)(gen_frame + 0x3c)));
          (*(undefined4 *)(gen_frame + 0x54)) = 0;
          (*(undefined4 *)(gen_frame + 0x58)) = 0;
          (*(undefined1 *)(gen_frame + 0x5c)) = 0xff;
          F_00490f30(&(*(undefined4 *)(gen_frame + 0x54)),&(*(uint *)(gen_frame + 0xc)));
          F_00493bc0(&(*(int * PTR32 *)(gen_frame + 0x1c)),&(*(undefined4 *)(gen_frame + 0x54)));
          F_004917c0(&(*(undefined4 *)(gen_frame + 0x54)));
          ppiVar17 = &(*(int * PTR32 *)(gen_frame + 0x1c));
          uVar15 = 0;
          uVar16 = 0x490;
          uVar13 = REFG(undefined4, 0x1379694);
          pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 0x28))(piVar8)));
          F_0046abb0(pvVar4,uVar16,uVar13,uVar15,ppiVar17);
          F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x1c)));
          F_00429760((*(int * PTR32 *)(gen_frame + 0x1c)),8,0x2c4);
        }
      }
      (*(uint * PTR32 *)(gen_frame + 0x18)) = (*(uint * PTR32 *)(gen_frame + 0x18)) + 1;
      pbVar5 = (*(byte * PTR32 *)(gen_frame + 0x38)) + 0xc;
      (*(byte * PTR32 *)(gen_frame + 0x38)) = pbVar5;
    } while ((int)pbVar5 < 0x14ab83d);
    break;
  case 2: ;
    puVar6 = *(undefined4 * PTR32 *)(*param_1 + 4);
    (*(undefined4 * PTR32 *)(gen_frame + 0x14)) = puVar6;
    puVar11 = puVar6;
    puVar12 = (undefined4 *)((int)this + 0x128);
    for (iVar9 = 0x14; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar12 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar12 = puVar12 + 1;
    }
    puVar6 = (undefined4 *)F_00ab2ed0((uint)*(byte *)((int)puVar6 + 0x3e));
    *(undefined4 *)((int)this + 0x178) = *puVar6;
    *(undefined4 *)((int)this + 0x17c) = puVar6[1];
    (*(undefined4 * PTR32 *)(gen_frame + 0x14)) = (undefined4 *)(*(undefined4 * PTR32 *)(gen_frame + 0x14))[1];
    uVar7 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8));
    *(uint *)((int)this + 0x114) = uVar7;
    puVar6 = (undefined4 *)F_00406b90(0x20,0,0);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      F_00cb4700(puVar6,1,3);
      puVar6[5] = 1;
      *puVar6 = (*(undefined * PTR32 (*)[2])REFP(0x10b91e8));
      puVar6[6] = (*(undefined * PTR32 *)(gen_frame + 0x34));
      puVar6[7] = ((code *)REFP(0x70c7d0));
    }
    pvVar4 = (*(undefined * PTR32 *)(gen_frame + 0x34));
    *(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 0x104) = puVar6;
    F_00cb4540(puVar6,0,(*(undefined4 * PTR32 *)(gen_frame + 0x14)));
    piVar8 = *(int * PTR32 *)((int)pvVar4 + 0x114);
    uVar7 = ((code *)*(gen_code32 *)(*piVar8 + 0x48))(piVar8,*(undefined4 *)((int)pvVar4 + 0x104));
    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
    return uVar7;
  case 3: ;
    F_006bf170(this,*(undefined4 *)(*param_1 + 4));
    *(byte *)((int)this + 0x184) = *(byte *)((int)this + 0x184) & 0xfe;
    piVar8 = (int *)F_006f49b0((*(undefined * PTR32 *)(gen_frame + 0x34)),0xd,0,0,0);
  default: ;
    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
    return (uint)piVar8;
  }
  switch((unsigned int)(uintptr_t)(*(undefined1 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 0x172))) {
  case 1: ;
    piVar8 = (int *)F_00424750(REFG(int, 0x137104c));
    if (piVar8 == (int *)0x0) goto switchD_0070cdb0_default;
    F_004816e0(&(*(int * PTR32 *)(gen_frame + 0x1c)));
    uVar13 = 0x49c;
    break;
  case 2: ;
    piVar8 = (int *)F_00424750(REFG(int, 0x137104c));
    if (piVar8 == (int *)0x0) goto switchD_0070cdb0_default;
    F_004816e0(&(*(int * PTR32 *)(gen_frame + 0x1c)));
    uVar13 = 0x49d;
    goto LAB_0070cef6;
  case 3: ;
    piVar8 = (int *)F_00424750(REFG(int, 0x137104c));
    if (piVar8 == (int *)0x0) goto switchD_0070cdb0_default;
    F_004816e0(&(*(int * PTR32 *)(gen_frame + 0x1c)));
    uVar13 = 0x49e;
    break;
  case 4: ;
    piVar8 = (int *)F_00424750(REFG(int, 0x137104c));
    if (piVar8 == (int *)0x0) goto switchD_0070cdb0_default;
    F_004816e0(&(*(int * PTR32 *)(gen_frame + 0x1c)));
    uVar13 = 0x49f;
    goto LAB_0070cef6;
  case 5: ;
    piVar8 = (int *)F_00424750(REFG(int, 0x137104c));
    if (piVar8 == (int *)0x0) goto switchD_0070cdb0_default;
    F_004816e0(&(*(int * PTR32 *)(gen_frame + 0x1c)));
    uVar13 = 0x4a0;
    break;
  case 6: ;
    piVar8 = (int *)F_00424750(REFG(int, 0x137104c));
    if (piVar8 == (int *)0x0) goto switchD_0070cdb0_default;
    F_004816e0(&(*(int * PTR32 *)(gen_frame + 0x1c)));
    uVar13 = 0x4a1;
LAB_0070cef6: ;
    ppiVar17 = &(*(int * PTR32 *)(gen_frame + 0x1c));
    uVar15 = 0;
    uVar16 = REFG(undefined4, 0x1379694);
    pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 0x28))(piVar8)));
    F_0046abb0(pvVar4,uVar13,uVar16,uVar15,ppiVar17);
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x1c)));
    goto LAB_0070cf19;
  default: ;
    goto switchD_0070cdb0_default;
  }
  ppiVar17 = &(*(int * PTR32 *)(gen_frame + 0x1c));
  uVar15 = 0;
  uVar16 = REFG(undefined4, 0x1379694);
  pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 0x28))(piVar8)));
  F_0046abb0(pvVar4,uVar13,uVar16,uVar15,ppiVar17);
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x1c)));
LAB_0070cf19: ;
  F_00429760((*(int * PTR32 *)(gen_frame + 0x1c)),8,0x2c4);
switchD_0070cdb0_default: ;
  pvVar4 = (*(undefined * PTR32 *)(gen_frame + 0x34));
  F_006d0230((*(undefined * PTR32 *)(gen_frame + 0x34)),(*(undefined4 * PTR32 *)(gen_frame + 0x14)));
  uVar7 = F_00a4a760(&REFG(undefined, 0x14a7360),0x18,0);
  *(byte *)((int)pvVar4 + 0x184) = *(byte *)((int)pvVar4 + 0x184) & 0xfe;
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return uVar7;
}

/* ref: Client::Game::Event::JournalCallback::vf1 */
byte F_0070d090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x70d090u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 in_ebx = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_3 == 0x13) {
    if ((*((byte *)GEN_TOP((*(int *)(in_ecx + 4) + 800))) & 0x10) != 0) {
      F_00a73a90(&REFG(undefined, 0x14afd38));
      return 1;
    }
    F_006bf760(*(int *)(in_ecx + 4),in_ebx);
    return 1;
  }
  if (param_3 != 0x14) {
    return 0;
  }
  F_00705560(*(undefined * PTR32 *)(in_ecx + 4));
  return 1;
}

/* ref: Client::Game::Event::QuestEventHandler::vf1 */
uint F_0070d0e0(unsigned int gen_a0)
{
  GEN_ENTER(0x70d0e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  if (((char)uVar3 == '\0') &&
     (uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this), iVar1 = REFG(int, 0x1379694), (char)uVar3 == '\0')) {
    bVar2 = F_005d4e70();
    uVar3 = CONCAT31(extraout_var,bVar2);
    if ((bVar2 != 0) || (iVar1 != 0)) {
      bVar2 = F_00a505f0();
      uVar3 = CONCAT31(extraout_var_00,bVar2);
      if (bVar2 != 0) {
        bVar2 = F_00a50610();
        uVar3 = CONCAT31(extraout_var_01,bVar2);
        if (bVar2 != 0) {
          this[0x1c] = (undefined1)((byte)this[0x1c] | 2);
          uVar3 = F_007054c0(this);
          return uVar3;
        }
      }
    }
  }
  return uVar3;
}

/* ref: Client::Game::Event::ShopEventHandler::vf34 */
uint F_0070d140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x70d140u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  undefined1 SVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  undefined * pvVar5;
  int iVar6;
  int * piVar7;
  int iVar8;
  undefined4 * puVar9;
  int iVar10;
  undefined * pSVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  
  uVar4 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  (*(uint *)(gen_frame + 0x88)) = uVar4;
  (*(int * PTR32 *)(gen_frame + 0x20)) = param_1;
  if (((byte)this[0x1c] & 1) == 0) {
LAB_0070d2de: ;
    (*(uint *)(gen_frame + 0x24)) = 0;
    if (param_2 != 0) {
      pSVar11 = this + 0x16c;
      piVar7 = param_1;
      do {
        iVar8 = *(int *)(piVar7[(*(uint *)(gen_frame + 0x24))] + 4);
        *(undefined4 *)(pSVar11 + 4) = *(undefined4 *)(iVar8 + 0x30);
        *pSVar11 = *(undefined *)(iVar8 + 0xae);
        if (pSVar11[0x6c] == (undefined1)0x0) {
          iVar10 = *(int *)(pSVar11 + -8);
        }
        else {
          iVar10 = *(int *)(pSVar11 + -8) + 1000000;
        }
        uVar4 = F_00ab6240(iVar10,0,iVar8);
        F_0042e430(pSVar11 + 0x18,uVar4);
        *(undefined4 *)(pSVar11 + 0xc) = *(undefined4 *)(iVar8 + 0x28);
        uVar4 = F_00ab25d0((uint)*(byte *)(iVar8 + 0xa1));
        if (uVar4 != 0) {
          uVar4 = F_00ab25d0((uint)*(byte *)(iVar8 + 0xa1));
          *(undefined4 *)(pSVar11 + 0x10) = *(undefined4 *)(uVar4 + 4);
        }
        uVar4 = (*(uint *)(gen_frame + 0x24)) + 1;
        pSVar11 = pSVar11 + 0x7c;
        (*(uint *)(gen_frame + 0x24)) = uVar4;
        piVar7 = (*(int * PTR32 *)(gen_frame + 0x20));
      } while (uVar4 < param_2);
    }
    this[0x1c] = (undefined1)((byte)this[0x1c] & 0xfd);
    SVar1 = this[0x1c];
    uVar4 = CONCAT31((int3)(uVar4 >> 8),SVar1);
    if (((byte)SVar1 & 1) == 0) {
      this[0x1c] = (undefined1)((byte)SVar1 | 1);
      uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x23c))(this);
    }
    goto LAB_0070d685;
  }
  puVar9 = *(undefined4 * PTR32 *)(this + 0xe8);
  if (puVar9 != *(undefined4 * PTR32 *)(this + 0xec)) {
    do {
      uVar4 = ((code *)*(gen_code32 *)(*(int *)*puVar9 + 8))((int *)*puVar9);
      if ((char)uVar4 == '\0') goto LAB_0070d2de;
      puVar9 = puVar9 + 1;
    } while (puVar9 != *(undefined4 * PTR32 *)(this + 0xec));
  }
  if (this[0x1bec] == (undefined1)0x0) {
    if (this[0x1bed] == (undefined1)0x0) {
      if (this[0x1bee] != (undefined1)0x0) {
        this[0x1bee] = (undefined1)0x0;
        (*(uint *)(gen_frame + 0x24)) = 0;
        if (param_2 != 0) {
          pSVar11 = this + 0x1538;
          piVar7 = param_1;
          do {
            iVar8 = *(int *)(piVar7[(*(uint *)(gen_frame + 0x24))] + 4);
            if (pSVar11[0x10] == (undefined1)0x0) {
              iVar10 = *(int *)pSVar11;
            }
            else {
              iVar10 = *(int *)pSVar11 + 1000000;
            }
            uVar4 = F_00ab6240(iVar10,0,iVar8);
            F_0042e430(pSVar11 + 0x14,uVar4);
            uVar4 = (uint)*(byte *)(iVar8 + 0xa1);
            (*(uint *)(gen_frame + 0x1c)) = uVar4;
            iVar8 = 0;
            uVar4 = F_00ab25d0(uVar4);
            if (uVar4 != 0) {
              uVar4 = F_00ab25d0((*(uint *)(gen_frame + 0x1c)));
              iVar8 = *(int *)(uVar4 + 4);
            }
            uVar4 = (*(uint *)(gen_frame + 0x24)) + 1;
            *(int *)(pSVar11 + 0x6c) = iVar8;
            pSVar11 = pSVar11 + 0xa8;
            (*(uint *)(gen_frame + 0x24)) = uVar4;
            piVar7 = (*(int * PTR32 *)(gen_frame + 0x20));
          } while (uVar4 < param_2);
        }
        uVar4 = F_006d0fd0();
      }
      goto LAB_0070d685;
    }
    this[0x1bed] = (undefined1)0x0;
    this[0x1bfa] = *((undefined *)GEN_TOP((*(int *)(*param_1 + 4) + 0xbe)));
    uVar4 = F_006c1f90(this);
    if (uVar4 == 0) {
      if (this[0x1bf2] == (undefined1)0x0) {
        F_0042b630(((undefined1 *)(gen_frame + 0x28)));
        if (this[0x1bf2] == (undefined1)0x0) {
          iVar6 = *(int *)(this + 0x1bd8) * 0x7c;
          iVar8 = *(int *)(this + iVar6 + 0x168);
          iVar10 = *(int *)(this + iVar6 + 0x164);
          SVar1 = this[iVar6 + 0x1d8];
        }
        else {
          iVar6 = *(int *)(this + 0x1bd8) * 0xa8;
          iVar8 = *(int *)(this + iVar6 + 0x1540);
          iVar10 = *(int *)(this + iVar6 + 0x1538);
          SVar1 = (undefined1)((byte)this[iVar6 + 0x1548] & 1);
        }
        if (SVar1 != (undefined1)0x0) {
          iVar10 = iVar10 + 1000000;
        }
        this[0x1bf3] = this[0x1bf2];
        F_004816e0(((undefined1 *)(gen_frame + 0x4)));
        (*(int * PTR32 *)(gen_frame + 0x80)) = &(*(int *)(gen_frame + 0x7c));
        (*(int *)(gen_frame + 0x7c)) = 0;
        (*(int *)(gen_frame + 0x7c)) = iVar10;
        (*(undefined1 *)(gen_frame + 0x84)) = 0;
        F_00493bc0(((undefined1 *)(gen_frame + 0x4)),&(*(int *)(gen_frame + 0x7c)));
        F_004917c0(&(*(int *)(gen_frame + 0x7c)));
        (*(int * PTR32 *)(gen_frame + 0x80)) = &(*(int *)(gen_frame + 0x7c));
        (*(int *)(gen_frame + 0x7c)) = 0;
        (*(int *)(gen_frame + 0x7c)) = *(int *)(this + 0x1bcc);
        (*(undefined1 *)(gen_frame + 0x84)) = 0;
        F_00493bc0(((undefined1 *)(gen_frame + 0x4)),&(*(int *)(gen_frame + 0x7c)));
        F_004917c0(&(*(int *)(gen_frame + 0x7c)));
        (*(int *)(gen_frame + 0x7c)) = 0;
        (*(int *)(gen_frame + 0x7c)) = *(int *)(this + 0x1bcc) * iVar8;
        (*(int * PTR32 *)(gen_frame + 0x80)) = &(*(int *)(gen_frame + 0x7c));
        (*(undefined1 *)(gen_frame + 0x84)) = 0;
        F_00493b50(((undefined1 *)(gen_frame + 0x4)),&(*(int *)(gen_frame + 0x7c)));
        F_004917c0(&(*(int *)(gen_frame + 0x7c)));
        if (this[0x1bf2] == (undefined1)0x0) {
          uVar13 = 0xd4e;
        }
        else {
          uVar13 = 0xf20;
        }
        F_00ab3200(uVar13,((undefined1 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x28)));
        F_006c1210(this,((undefined1 *)(gen_frame + 0x28)));
        F_00493180(((undefined1 *)(gen_frame + 0x4)));
        uVar12 = F_0042c880(((undefined1 *)(gen_frame + 0x28)));
        uVar4 = (uint)uVar12;
        *(undefined4 *)(this + 0x1bdc) = 0;
      }
      else {
        uVar4 = F_006f5200(this);
        *(undefined4 *)(this + 0x1bdc) = 0;
      }
      goto LAB_0070d685;
    }
    uVar4 = F_006c1f90(this);
  }
  else {
    this[0x1bec] = (undefined1)0x0;
    iVar8 = *(int *)(*param_1 + 4);
    *(undefined4 *)(this + 0x14c4) = *(undefined4 *)(iVar8 + 0x34);
    *(undefined4 *)(this + 0x14d0) = *(undefined4 *)(iVar8 + 0x30);
    *(undefined4 *)(this + 0x14d4) = *(undefined4 *)(iVar8 + 0x28);
    SVar1 = *(undefined *)(iVar8 + 0xae);
    this[0x14cc] = SVar1;
    uVar4 = F_006c0a30(*(undefined4 *)(this + 0x14d0),(uint)(byte)SVar1,
                         *(undefined4 *)(this + 0x104),*(undefined4 *)(this + 0x100));
    *(uint *)(this + 0x14c8) = uVar4;
    this[0x1bfa] = *(undefined *)(iVar8 + 0xbe);
    this[0x14d8] = *(undefined *)(iVar8 + 0xbf);
    *(uint *)(this + 0x1530) = (uint)*(byte *)(iVar8 + 0xa3);
    uVar4 = F_00ab6240(*(undefined4 *)(this + 0xfc),0,iVar8);
    F_0042e430(this + 0x14dc,uVar4);
    *(undefined2 *)(this + 0x1bfb) = 0;
    pvVar5 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),*(undefined4 *)(this + 0x104));
    if ((pvVar5 != (undefined *)0x0) &&
       (pvVar5 = (undefined *)F_00a37da0(pvVar5,*(undefined4 *)(this + 0x100)), pvVar5 != (undefined *)0x0))
    {
      if ((*(char *)(iVar8 + 0xa5) != '\0') && (bVar2 = F_00a3bef0(pvVar5), bVar2 != 0)) {
        this[0x1bfb] = (undefined1)0x1;
      }
      uVar3 = F_0071d210(pvVar5);
      if (9999 < uVar3) {
        this[0x1bfc] = (undefined1)0x1;
      }
    }
    uVar4 = F_006c20a0(this);
    if (uVar4 == 0) {
      if (((this[0x1bf0] == (undefined1)0x1) && (1 < *(int *)(this + 0x108))) ||
         (*(int *)(this + 0x104) == 0x7d1)) {
        if (1 < *(uint *)(this + 0x14d4)) {
          F_00a3d750(&REFG(undefined, 0x14a4230),*(undefined4 *)(this + 0x104),(uint)*(ushort *)(this + 0x100));
          uVar4 = F_006c0600(this);
          *(undefined4 *)(this + 0x1bdc) = 0;
          goto LAB_0070d685;
        }
        F_00a3d750(&REFG(undefined, 0x14a4230),*(undefined4 *)(this + 0x104),(uint)*(ushort *)(this + 0x100));
        uVar13 = *(undefined4 *)(this + 0x108);
      }
      else {
        uVar13 = *(undefined4 *)(this + 0x108);
      }
      uVar4 = F_00706560(this,uVar13);
      *(undefined4 *)(this + 0x1bdc) = 0;
      goto LAB_0070d685;
    }
    uVar4 = F_006c20a0(this);
  }
  *(uint *)(this + 0x1bdc) = uVar4;
  uVar4 = F_006c1e80(this);
  *(undefined4 *)(this + 0x1bdc) = 0;
LAB_0070d685: ;
  puVar9 = *(undefined4 * PTR32 *)(this + 100);
  if (puVar9 != (undefined4 *)0x0) {
    uVar4 = ((code *)*(gen_code32 *)*puVar9)(puVar9,1);
    *(undefined4 *)(this + 100) = 0;
  }
  *(undefined4 *)(this + 0x68) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return uVar4;
}

/* ref: FUN_0070d6b0 */
uint F_0070d6b0(unsigned int gen_a0)
{
  GEN_ENTER(0x70d6b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x410];
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  
  uVar3 = (*(uint *)(gen_frame + 0x404));
  (*(uint *)(gen_frame + 0x408)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x40c);
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x404)) + 0)) = 0;
  (*(uint *)(gen_frame + 0x404)) = uVar3 & 0xffffff00;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  F_00c48350(((undefined1 *)(gen_frame + 0xc)),0,0x3f8);
  uVar2 = *(ushort *)((int)this + 0x54);
  uVar3 = (uint)uVar2;
  if (uVar3 == 0) {
    (*(undefined4 *)(gen_frame + 0x8)) = 1;
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x404)) + 0)) = 1;
    (*(uint *)(gen_frame + 0x404)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x404)), 1, 3),1);
  }
  else if (uVar3 == 0x28) {
    if (*(char *)((int)this + 0x1bf2) == '\0') {
      if (*(char *)((int)this + 0x1bef) == '\0') {
        uVar3 = F_006c1620(this);
      }
      else {
        F_006c1270(this);
        uVar3 = F_006c2100(this,0);
      }
    }
    else {
      uVar3 = F_006c1990(this);
    }
    if (*(char *)((int)this + 0x1bc8) != '\0') {
      if (*(int *)((int)this + 0x1be0) == 1) {
        uVar3 = F_006f5080(this,*(undefined4 *)((int)this + 0x1bcc));
      }
      *(undefined1 *)((int)this + 0x1bc8) = 0;
      F_00c47745((*(uint *)(gen_frame + 0x408)) ^ (uint)(uint)(gen_frame + 0x40c));
      return uVar3;
    }
    goto LAB_0070d79c;
  }
  *(undefined1 *)((int)this + 0x1bf9) = 1;
  if (uVar2 != 0xffff) {
    bVar1 = *(byte *)((int)this + 0x5c);
    uVar3 = (uint)CONCAT11((char)(uVar2 >> 8),bVar1);
    if ((bVar1 & 4) == 0) {
      *(byte *)((int)this + 0x5c) = bVar1 | 4;
      uVar3 = F_006f15b0(*(undefined * PTR32 *)((int)this + 4),&(*(undefined4 *)(gen_frame + 0x8)),(*(uint *)(gen_frame + 0x404)));
    }
  }
LAB_0070d79c: ;
  F_00c47745((*(uint *)(gen_frame + 0x408)) ^ (uint)(uint)(gen_frame + 0x40c));
  return uVar3;
}

/* ref: FUN_0070d7b0 */
uint F_0070d7b0(unsigned int gen_a0)
{
  GEN_ENTER(0x70d7b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00406b90(300,0,0);
  if (this != (undefined *)0x0) {
    uVar1 = F_00706ff0(this,param_1 & 0xffff | 0x160000);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_0070d7e0 */
byte F_0070d7e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x70d7e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * this_00;
  int iVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  
  if ((param_1 == 0xffffffff) || (param_1 == 0xfffffffe)) {
    this_00 = *(undefined * PTR32 *)((int)this + 4);
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(int *)(gen_frame + 0x8)) = 0;
    (*(int *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x0)) = 1;
    if ((*(int *)((int)this_00 + 0x24) != 0) &&
       (((piVar4 = (int *)F_007512b0((undefined *)((int)this_00 + 0x14)), *piVar4 != 0 &&
         (*(short *)((int)this + 0x54) != -1)) && ((*(byte *)((int)this + 0x5c) & 4) == 0)))) {
      *(byte *)((int)this + 0x5c) = *(byte *)((int)this + 0x5c) | 4;
      F_006f15b0(this_00,&(*(undefined4 *)(gen_frame + 0x0)),6);
    }
    REFG(undefined4, 0x1488768) = 0;
    return 1;
  }
  if ((param_1 != 0x400) && (REFG(int, 0x1324204) == 0)) {
    *(uint *)((int)this + 0x124) = param_1;
    uVar3 = F_0075ae90((undefined *)((int)this + 0xfc),(int)this + 0x10d);
    F_00754bb0(&(*(int *)(gen_frame + 0x8)),uVar3);
    iVar1 = (*(int *)(gen_frame + 0xc)) - (*(int *)(gen_frame + 0x8)) >> 0x1f;
    iVar5 = ((*(int *)(gen_frame + 0xc)) - (*(int *)(gen_frame + 0x8))) / 0x140 + iVar1;
    uVar3 = 0;
    (*(uint *)(gen_frame + 0x18)) = 0;
    if (iVar5 != iVar1) {
      do {
        if (0x31 < (ushort)(*(uint *)(gen_frame + 0x18))) break;
        if (*(char *)((int)this + 0x10e) == *((char *)GEN_TOP(((uVar3 & 0xffff) * 0x140 + 0x12 + (*(int *)(gen_frame + 0x8)))))) {
          if (((*(uint *)(gen_frame + 0x18)) & 0xffff) == param_1) {
            *(uint *)((int)this + 0x124) = uVar3 & 0xffff;
            break;
          }
          (*(uint *)(gen_frame + 0x18)) = (*(uint *)(gen_frame + 0x18)) + 1;
        }
        uVar3 = uVar3 + 1;
      } while ((uVar3 & 0xffff) < (uint)(iVar5 - iVar1));
    }
    uVar3 = F_00700e00(this);
    bVar2 = F_006c2e90(this,uVar3);
    if (bVar2 != 0) {
      F_007070f0(this);
    }
    F_00752390(&(*(int *)(gen_frame + 0x8)));
  }
  return 0;
}

/* ref: Client::Game::Event::SpecialShopEventHandler::vf24 */
uint F_0070d930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x70d930u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined1 SVar1;
  uint uVar2;
  
  if ((short)param_2 == 0) {
    if ((char)param_4 == '\x01') {
      F_00707610(this,*param_3);
      if ((*param_3 != 0) && (*(int *)(this + 0x198) == 2)) {
        F_00a48ae0(&REFG(undefined, 0x14a4230));
      }
    }
    this[0x1a0] = (undefined1)0x0;
    uVar2 = F_006eaed0(this);
  }
  else {
    uVar2 = 0xffff;
    if (*(short *)(this + 0x54) != -1) {
      SVar1 = this[0x5c];
      uVar2 = CONCAT31(0xff,SVar1);
      if (((byte)SVar1 & 4) == 0) {
        this[0x5c] = (undefined1)((byte)SVar1 | 4);
        uVar2 = F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
        return uVar2;
      }
    }
  }
  return uVar2;
}

/* ref: FUN_0070d9b0 */
uint F_0070d9b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x70d9b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x170];
  byte bVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x16c);
  (*(uint *)(gen_frame + 0x168)) = uVar2;
  if (*(char *)((int)this + 0x1a0) == '\0') {
    if ((int)param_1 < 0) {
      uVar2 = 0xffff;
      (*(undefined4 *)(gen_frame + 0x0)) = 1;
      if (*(short *)((int)this + 0x54) != -1) {
        bVar1 = *(byte *)((int)this + 0x5c);
        uVar2 = CONCAT31(0xff,bVar1);
        if ((bVar1 & 4) == 0) {
          *(byte *)((int)this + 0x5c) = bVar1 | 4;
          uVar2 = F_006f15b0(*(undefined * PTR32 *)((int)this + 4),&(*(undefined4 *)(gen_frame + 0x0)),1);
          F_00c47745((*(uint *)(gen_frame + 0x168)) ^ (uint)(uint)(gen_frame + 0x16c));
          return uVar2;
        }
      }
    }
    else {
      uVar2 = (*(int *)((int)this + 0xfc) - *(int *)((int)this + 0xf8)) / 0x1b0;
      if (param_1 < uVar2) {
        uVar2 = *(uint *)((int)this + 0x198);
        iVar5 = param_1 * 0x1b0 + *(int *)((int)this + 0xf8);
        *(uint *)((int)this + 0x19c) = param_1;
        if (uVar2 == 2) {
          (*(undefined4 *)(gen_frame + 0x156)) = 0;
          (*(undefined4 *)(gen_frame + 0x15a)) = 0;
          (*(undefined1 *)(gen_frame + 0x160)) = 0;
          (*(undefined4 *)(gen_frame + 0x161)) = 0;
          (*(undefined2 *)(gen_frame + 0x154)) = 0;
          F_00ba0800(&REFG(undefined, 0x14b0f2c),0,*(undefined4 *)(iVar5 + 0xec),*(undefined4 *)(iVar5 + 0xdc),0
                       ,&(*(undefined2 *)(gen_frame + 0x154)),&(*(undefined1 *)(gen_frame + 0x160)),0);
          (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x0)) + 0)) = 1;
          (*(undefined4 *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x0)), 1, 3),1);
          if (*(int *)(iVar5 + 0xf0) != 0) {
            F_00ba0800(&REFG(undefined, 0x14b0f2c),1,*(int *)(iVar5 + 0xf0),*(undefined4 *)(iVar5 + 0xe0),0,
                         &(*(undefined2 *)(gen_frame + 0x154)),&(*(undefined1 *)(gen_frame + 0x160)),0);
            (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x0)) + 0)) = 2;
            (*(undefined4 *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x0)), 1, 3),2);
          }
          F_00b9f940(&REFG(undefined, 0x14b0f2c),(*(undefined4 *)(gen_frame + 0x0)),this);
          uVar2 = F_00ba05d0(&REFG(undefined, 0x14b0f2c));
          if ((char)uVar2 != '\0') {
            uVar2 = F_00a40f50(&REFG(undefined, 0x14a4230),*(undefined4 *)(iVar5 + 0xe4),0);
            if (*(uint *)(iVar5 + 0xd8) <= uVar2) {
              F_0042cc20(((undefined1 *)(gen_frame + 0xac)),&REFG(undefined, 0x10b3a72),REFG(undefined4, 0x108cc50));
              F_0042cc20(((undefined1 *)(gen_frame + 0x100)),&REFG(undefined, 0x10b3a73),REFG(undefined4, 0x108cc50));
              F_00ab0230(0xd53,((undefined1 *)(gen_frame + 0xac)));
              F_00ab0230(0xd54,((undefined1 *)(gen_frame + 0x100)));
              uVar7 = REFG(undefined4, 0x108cc50);
              uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x100)));
              F_0042cc20(((undefined1 *)(gen_frame + 0x4)),uVar2,uVar7);
              uVar7 = REFG(undefined4, 0x108cc50);
              uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0xac)));
              F_0042cc20(((undefined1 *)(gen_frame + 0x58)),uVar2,uVar7);
              piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
              uVar7 = 0x1d;
              uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x48))(piVar3);
              piVar3 = (int *)F_00763050(uVar2,uVar7);
              ((code *)*(gen_code32 *)(*piVar3 + 0x40))(piVar3,0,((undefined1 *)(gen_frame + 0x58)),((undefined1 *)(gen_frame + 0x4)),1);
              F_0042c880(((undefined1 *)(gen_frame + 0x58)));
              F_0042c880(((undefined1 *)(gen_frame + 0x4)));
              F_0042c880(((undefined1 *)(gen_frame + 0x100)));
              uVar6 = F_0042c880(((undefined1 *)(gen_frame + 0xac)));
              F_00c47745((*(uint *)(gen_frame + 0x168)) ^ (uint)(uint)(gen_frame + 0x16c));
              return (uint)uVar6;
            }
LAB_0070dc6f: ;
            uVar2 = F_00707610(this,0x18);
            F_00c47745((*(uint *)(gen_frame + 0x168)) ^ (uint)(uint)(gen_frame + 0x16c));
            return uVar2;
          }
        }
        else {
          if (uVar2 != 1) {
            if (uVar2 == 0) {
              uVar2 = F_00a3ded0(&REFG(undefined, 0x14a4230),*(undefined4 *)(iVar5 + 0xec),2000,0);
              if (uVar2 < *(uint *)(iVar5 + 0xdc)) goto LAB_0070dcd3;
              uVar2 = F_00a40f50(&REFG(undefined, 0x14a4230),*(undefined4 *)(iVar5 + 0xe4),0);
              if (uVar2 < *(uint *)(iVar5 + 0xd8)) {
                uVar2 = F_00707610(this,0x18);
                F_00c47745((*(uint *)(gen_frame + 0x168)) ^ (uint)(uint)(gen_frame + 0x16c));
                return uVar2;
              }
              uVar2 = F_006f65e0(this,param_1);
            }
            goto LAB_0070dd2e;
          }
          uVar4 = *(int *)(iVar5 + 0xdc) * param_2;
          uVar2 = F_00a41080(&REFG(undefined, 0x14a4230),*(undefined4 *)(iVar5 + 0xec),0,1,1);
          if (uVar4 <= uVar2) {
            uVar2 = F_00a40f50(&REFG(undefined, 0x14a4230),*(undefined4 *)(iVar5 + 0xe4),0);
            if ((uint)(*(int *)(iVar5 + 0xd8) * param_2) <= uVar2) {
              uVar2 = F_00a36a40(*(undefined4 *)(iVar5 + 0xe4),uVar4);
              F_00c47745((*(uint *)(gen_frame + 0x168)) ^ (uint)(uint)(gen_frame + 0x16c));
              return uVar2;
            }
            goto LAB_0070dc6f;
          }
        }
LAB_0070dcd3: ;
        uVar2 = F_00707610(this,8);
        F_00c47745((*(uint *)(gen_frame + 0x168)) ^ (uint)(uint)(gen_frame + 0x16c));
        return uVar2;
      }
    }
  }
LAB_0070dd2e: ;
  F_00c47745((*(uint *)(gen_frame + 0x168)) ^ (uint)(uint)(gen_frame + 0x16c));
  return uVar2;
}

/* ref: FUN_0070dd40 */
uint F_0070dd40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x70dd40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  byte bVar2;
  uint * puVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  puVar1 = *(undefined4 * PTR32 *)(*param_1 + 4);
  puVar6 = puVar1;
  puVar7 = (undefined4 *)((int)this + 0x350);
  for (iVar5 = 0x68; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  puVar3 = (uint *)F_00ab3450(puVar1[0x66]);
  uVar4 = 0;
  if (puVar3 != (uint *)0x0) {
    F_0042e430((undefined *)((int)this + 0x118),(*puVar3 & 0xffffff) + (int)puVar3);
    F_00709190(this,puVar3);
    bVar2 = F_006d8320(this);
    uVar4 = CONCAT31(extraout_var,bVar2);
    if (bVar2 == 0) {
      F_006c3d50(this);
      uVar4 = F_00754440((undefined *)((int)this + 0xfc),REFG(undefined * PTR32, 0x1323764),
                           (*puVar3 & 0xffffff) + (int)puVar3,0);
    }
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x34c);
  if (puVar1 != (undefined4 *)0x0) {
    uVar4 = ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0x34c) = 0;
  }
  *(undefined4 *)((int)this + 0x348) = 0;
  return uVar4;
}

/* ref: FUN_0070ddf0 */
uint F_0070ddf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x70ddf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint * puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  
  F_0042cc20(this,(*(uint *)(param_1 + 4) & 0xffffff) + param_1 + 4,REFG(undefined4, 0x108cc50));
  puVar1 = (uint *)F_00ab3480(*(undefined4 *)(param_1 + 0x24));
  F_0042cc20((undefined *)((int)this + 0x54),(*puVar1 & 0xffffff) + (int)puVar1,REFG(undefined4, 0x108cc50));
  puVar1 = (uint *)F_00ab21d0((uint)*(byte *)(param_1 + 0x55));
  if (puVar1 == (uint *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = (*puVar1 & 0xffffff) + (int)puVar1;
  }
  F_0042cc20((undefined *)((int)this + 0xa8),iVar4,REFG(undefined4, 0x108cc50));
  F_0042b630((int)this + 0xfc);
  F_0042b630((int)this + 0x150);
  *(undefined4 *)((int)this + 0x1a4) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  uVar3 = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined4 *)((int)this + 0x1b8) = 0;
  *(undefined4 *)((int)this + 0x1b0) = uVar3;
  *(undefined1 *)((int)this + 0x1bc) = *(undefined1 *)(param_1 + 0x28);
  *(undefined4 *)((int)this + 0x1c0) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)((int)this + 0x1c4) = *(undefined4 *)(param_1 + 0x48);
  *(undefined1 *)((int)this + 0x1c8) = *(undefined1 *)(param_1 + 0x54);
  *(undefined1 *)((int)this + 0x1c9) = *(undefined1 *)(param_1 + 0x30);
  *(undefined1 *)((int)this + 0x1ca) = *(undefined1 *)(param_1 + 0x59);
  F_00720450((undefined *)((int)this + 0x1cc),param_2);
  F_00709540(*(undefined4 *)(param_1 + 0x34),(int)this + 0xfc);
  F_00709660(this,(uint)*(byte *)((int)this + 0x1c8),(int)this + 0x150);
  uVar2 = F_00ab3390((uint)*(byte *)(param_1 + 0x56));
  if (uVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(uVar2 + 4);
  }
  *(undefined4 *)((int)this + 0x1a8) = uVar3;
  uVar2 = F_00ab3390((uint)*(byte *)(param_1 + 0x57));
  if (uVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(uVar2 + 4);
  }
  *(undefined4 *)((int)this + 0x1ac) = uVar3;
  uVar2 = F_00ab32a0(*(undefined4 *)(param_1 + 0x38));
  *(undefined4 *)((int)this + 0x1b4) = *(undefined4 *)(uVar2 + 4);
  uVar2 = F_00ab37e0(*(undefined4 *)(param_1 + 0x1c));
  if (uVar2 != 0) {
    *(undefined4 *)((int)this + 0x1b8) = *(undefined4 *)(uVar2 + 0x14);
    return (uint)this;
  }
  *(undefined4 *)((int)this + 0x1b8) = 0;
  return (uint)this;
}

/* ref: FUN_0070e450 */
unsigned int F_0070e450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x70e450u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  int * piVar5;
  undefined3 uVar6;
  int * piVar7;
  uint uVar8;
  ushort * puVar9;
  undefined4 * this_00;
  int * piVar10;
  undefined * this_01;
  uint uVar11;
  
  uVar2 = *(ushort *)(param_1 + 4);
  uVar3 = *(ushort *)(param_2 + 4);
  uVar8 = (uint)uVar3;
  if ((ushort)param_3 < 0x10) {
    puVar9 = ((ushort *)GEN_TOP((*(int *)((int)this + 0x7ac) + (uint)(ushort)param_3 * 0x10)));
    if (*puVar9 != uVar2) {
      *puVar9 = 0;
      puVar9[2] = 0;
      puVar9[3] = 0;
      puVar9[4] = 0;
      puVar9[5] = 0;
      *(undefined1 *)(puVar9 + 6) = 0;
      *((ushort *)GEN_TOP(((uint)(ushort)param_3 * 0x10 + *(int *)((int)this + 0x7ac)))) = uVar2;
    }
  }
  if (((uVar2 != 0) || (uVar3 != 0)) &&
     (piVar10 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x30))), piVar10 != *(int * PTR32 *)((int)this + 0x30))) {
    do {
      sVar4 = *(short *)(piVar10[4] + 10);
      uVar11 = 0;
      do {
        if (sVar4 == *(short *)((int)&REFG(undefined2, 0x10b4200) + uVar11)) {
          ((code *)*(gen_code32 *)(*(int *)piVar10[4] + 0x22c))((int *)piVar10[4]);
          ((code *)*(gen_code32 *)(*(int *)piVar10[4] + 0x1c8))((int *)piVar10[4]);
          ((code *)*(gen_code32 *)(*(int *)piVar10[4] + 0x1f8))((int *)piVar10[4]);
        }
        uVar11 = uVar11 + 2;
      } while (uVar11 < 4);
      if (*(char *)((int)piVar10 + 0x15) == '\0') {
        piVar5 = (int *)piVar10[2];
        if (*(char *)((int)piVar5 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar5 + 0x15);
          piVar10 = piVar5;
          piVar5 = (int *)*piVar5;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar5 + 0x15);
            piVar10 = piVar5;
            piVar5 = (int *)*piVar5;
          }
        }
        else {
          cVar1 = *(char *)(piVar10[1] + 0x15);
          piVar7 = (int *)piVar10[1];
          piVar5 = piVar10;
          while ((piVar10 = piVar7, cVar1 == '\0' && (piVar5 == (int *)piVar10[2]))) {
            cVar1 = *(char *)(piVar10[1] + 0x15);
            piVar7 = (int *)piVar10[1];
            piVar5 = piVar10;
          }
        }
      }
    } while (piVar10 != *(int * PTR32 *)((int)this + 0x30));
  }
  uVar6 = SUB43((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)),1);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)) & 0xffffff00;
  if (uVar2 == 0) {
    if (uVar3 != 0) {
      if ((ushort)param_3 < 0x10) {
        F_00a84160(&REFG(undefined, 0x14b1258),(uint)(ushort)param_3);
      }
      F_006ffa10(*(undefined * PTR32 *)((int)this + 0x50),uVar8);
      ((byte *)(gen_frame + 0x0))[0xd] = (char)uVar6;
      ((byte *)(gen_frame + 0x0))[0xe] = (char)((uint3)uVar6 >> 8);
      ((byte *)(gen_frame + 0x0))[0xf] = (char)((uint3)uVar6 >> 0x10);
      ((byte *)(gen_frame + 0x0))[0xc] = 1;
    }
  }
  else {
    if (uVar3 == uVar2) {
      if (*(char *)(param_1 + 6) == *(char *)(param_2 + 6)) goto LAB_0070e671;
      F_00a84160(&REFG(undefined, 0x14b1258),(uint)(ushort)param_3);
    }
    if (*(int *)((int)this + 0x748) == 0) {
      uVar11 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8));
      *(uint *)((int)this + 0x748) = uVar11;
    }
    uVar11 = (uint)(ushort)param_3;
    if (*(int *)((int)this + uVar11 * 4 + 0x74c) == 0) {
      this_00 = (undefined4 *)F_00406b90(0x20,0,0);
      if (this_00 == (undefined4 *)0x0) {
        this_00 = (undefined4 *)0x0;
      }
      else {
        F_00cb4700(this_00,1,uVar11);
        this_00[5] = 1;
        *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10b90a8));
        this_00[6] = this;
        this_00[7] = ((code *)REFP(0x70ac90));
      }
      *(undefined4 * PTR32 *)((int)this + uVar11 * 4 + 0x74c) = this_00;
      F_00cb4540(this_00,0,(uint)uVar2);
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x748) + 0x48))))
                (*(int * PTR32 *)((int)this + 0x748),*(undefined4 *)((int)this + uVar11 * 4 + 0x74c));
    }
  }
LAB_0070e671: ;
  piVar10 = (int *)F_00424750(REFG(int, 0x137104c));
  this_01 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar10 + 0x1c))(piVar10)));
  F_008229c0(this_01,uVar8,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)));
  return 0;
}

/* ref: FUN_0070e6a0 */
uint F_0070e6a0(unsigned int gen_a0)
{
  GEN_ENTER(0x70e6a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  char cVar2;
  short sVar3;
  int * piVar4;
  undefined4 * puVar5;
  int * piVar6;
  uint uVar7;
  undefined4 * puVar8;
  undefined4 * PTR32 * ppuVar9;
  undefined4 * puVar10;
  ushort * puVar11;
  int * piVar12;
  
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = this;
  uVar7 = F_00a4ffd0();
  puVar11 = (ushort *)(uVar7 + 0x13b8);
  (*(int *)(gen_frame + 0x18)) = 0x1e;
  do {
    if (*puVar11 != 0) {
      puVar10 = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)((int)this + 0x30))[1]));
      uVar7 = *puVar11 | 0x10000;
      cVar2 = *(char *)((int)puVar10 + 0x15);
      puVar5 = *(undefined4 * PTR32 *)((int)this + 0x30);
      while (cVar2 == '\0') {
        if ((uint)puVar10[3] < uVar7) {
          puVar8 = (undefined4 *)puVar10[2];
          puVar10 = puVar5;
        }
        else {
          puVar8 = (undefined4 *)*puVar10;
        }
        puVar5 = puVar10;
        puVar10 = puVar8;
        cVar2 = *(char *)((int)puVar8 + 0x15);
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar5;
      if ((puVar5 == *(undefined4 * PTR32 *)((int)this + 0x30)) || (uVar7 < (uint)puVar5[3])) {
        (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = *(undefined4 * PTR32 *)((int)this + 0x30);
        ppuVar9 = &(*(undefined4 * PTR32 *)(gen_frame + 0xc));
      }
      else {
        ppuVar9 = &(*(undefined4 * PTR32 *)(gen_frame + 0x10));
      }
      puVar10 = *ppuVar9;
      if (puVar10 != *(undefined4 * PTR32 *)((int)this + 0x30)) {
        ((code *)*(gen_code32 *)(*(int *)puVar10[4] + 0x22c))((int *)puVar10[4]);
        ((code *)*(gen_code32 *)(*(int *)puVar10[4] + 0x1f8))((int *)puVar10[4]);
      }
    }
    puVar11 = puVar11 + 8;
    iVar1 = (*(int *)(gen_frame + 0x18)) + -1;
    (*(int *)(gen_frame + 0x18)) = iVar1;
  } while (iVar1 != 0);
  piVar12 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x30)));
  if (piVar12 != *(int * PTR32 *)((int)this + 0x30)) {
    do {
      sVar3 = *(short *)(piVar12[4] + 10);
      uVar7 = 0;
      do {
        if (sVar3 == *(short *)((int)&REFG(undefined2, 0x10b4200) + uVar7)) {
          ((code *)*(gen_code32 *)(*(int *)piVar12[4] + 0x22c))((int *)piVar12[4]);
          ((code *)*(gen_code32 *)(*(int *)piVar12[4] + 0x1c8))((int *)piVar12[4]);
          ((code *)*(gen_code32 *)(*(int *)piVar12[4] + 0x1f8))((int *)piVar12[4]);
        }
        uVar7 = uVar7 + 2;
      } while (uVar7 < 4);
      if (*(char *)((int)piVar12 + 0x15) == '\0') {
        piVar4 = (int *)piVar12[2];
        if (*(char *)((int)piVar4 + 0x15) == '\0') {
          cVar2 = *(char *)(*piVar4 + 0x15);
          piVar12 = piVar4;
          piVar4 = (int *)*piVar4;
          while (cVar2 == '\0') {
            cVar2 = *(char *)(*piVar4 + 0x15);
            piVar12 = piVar4;
            piVar4 = (int *)*piVar4;
          }
        }
        else {
          cVar2 = *(char *)(piVar12[1] + 0x15);
          piVar6 = (int *)piVar12[1];
          piVar4 = piVar12;
          while ((piVar12 = piVar6, cVar2 == '\0' && (piVar4 == (int *)piVar12[2]))) {
            cVar2 = *(char *)(piVar12[1] + 0x15);
            piVar6 = (int *)piVar12[1];
            piVar4 = piVar12;
          }
        }
      }
      this = (*(undefined * PTR32 *)(gen_frame + 0x14));
    } while (piVar12 != *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x30));
  }
  uVar7 = F_0070aea0(this);
  return uVar7;
}

/* ref: FUN_0070e7f0 */
uint F_0070e7f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x70e7f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint param_4 = (uint)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x12c20];
  uint uVar1;
  undefined4 * puVar2;
  int * piVar3;
  int iVar4;
  short sVar5;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0x12c18)) = 0x70e7fd;
  (*(uint *)(gen_frame + 0x12c18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  sVar5 = (short)param_3;
  if (sVar5 == 0) goto LAB_0070e892;
  if (param_1 != 2) {
    if (param_1 != 1) goto LAB_0070e892;
    if (param_2 != 2) {
      if ((*(int *)((int)this + 0x528) == 0) || (*(short *)((int)this + 0x52c) != sVar5)) {
        uVar1 = F_006e01a0(this,1,param_2,param_3,param_4);
        F_00c47745((*(uint *)(gen_frame + 0x12c18)) ^ (uint)(uint)(gen_frame + 0x0));
        return uVar1;
      }
      goto LAB_0070e892;
    }
  }
  if ((*(uint * PTR32 *)((int)this + 0x270) == (uint *)0x0) ||
     (**(uint * PTR32 *)((int)this + 0x270) != (param_3 & 0xffff))) {
    uVar1 = F_006e94d0(this,param_1,param_2,param_3,param_4);
    F_00c47745((*(uint *)(gen_frame + 0x12c18)) ^ (uint)(uint)(gen_frame + 0x0));
    return uVar1;
  }
LAB_0070e892: ;
  if (*(int *)((int)this + 0x228) == param_1) {
    uVar1 = param_4;
    if (*((int *)GEN_TOP(((int)this + *(int *)((int)this + 0x228) * 4 + 0x22c))) != param_2) {
      uVar1 = param_4 | 1;
    }
  }
  else {
    uVar1 = param_4 | 3;
  }
  if (*(short *)((int)this + 0x52e) != sVar5) {
    uVar1 = uVar1 | 4;
  }
  puVar2 = ((undefined4 *)(gen_frame + 0x10008));
  iVar4 = 0x581;
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 2;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_0070b040(this,uVar1,param_1,param_2,param_3,((undefined4 *)(gen_frame + 0x10008)));
  *(int *)((int)this + 0x228) = param_1;
  if ((uVar1 & 4) != 0) {
    *(short *)((int)this + 0x52e) = sVar5;
  }
  piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  *(int *)((int)this + param_1 * 4 + 0x22c) = param_2;
  *(undefined2 *)((int)this + param_1 * 2 + 0x248) = *(undefined2 *)((int)this + 0x52e);
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3)));
  ((code *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3,REFG(undefined4, 0x1324110),0x582,((undefined4 *)(gen_frame + 0x10008)));
  this_00 = &(*(uint *)(gen_frame + 0x12c18));
  iVar4 = 0x581;
  do {
    this_00 = this_00 + -2;
    uVar1 = F_005a2670(this_00);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_00c47745((*(uint *)(gen_frame + 0x12c18)) ^ (uint)(uint)(gen_frame + 0x0));
  return uVar1;
}

/* ref: FUN_0070e980 */
uint F_0070e980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x70e980u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x12c20];
  undefined4 * puVar1;
  int * piVar2;
  undefined * this_00;
  uint uVar3;
  int iVar4;
  uint * this_01;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined * PTR32 * ppuVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  (*(uint *)(gen_frame + 0x12c18)) = 0x70e98d;
  (*(uint *)(gen_frame + 0x12c18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  REFG(undefined4, 0x132410c) = this;
  F_00a4ffd0();
  puVar1 = ((undefined4 *)(gen_frame + 0x10008));
  iVar4 = 0x581;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_0070b040(this,0xff,param_1,param_2,0,((undefined4 *)(gen_frame + 0x10008)));
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar10 = 4;
  uVar9 = 0;
  uVar8 = 0;
  ppuVar7 = &REFG(undefined * PTR32, 0x1324108);
  puVar1 = ((undefined4 *)(gen_frame + 0x10008));
  uVar6 = 0x582;
  uVar5 = 0x27;
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
  REFG(undefined4, 0x1324110) = F_008668b0(this_00,uVar5,uVar6,puVar1,ppuVar7,uVar8,uVar9,uVar10);
  *(int *)((int)this + 0x228) = param_1;
  *(undefined4 *)((int)this + param_1 * 4 + 0x22c) = param_2;
  F_00a6e080(&REFG(undefined, 0x14a9e40),0x21,0,0);
  this_01 = &(*(uint *)(gen_frame + 0x12c18));
  iVar4 = 0x581;
  do {
    this_01 = this_01 + -2;
    uVar3 = F_005a2670(this_01);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_00c47745((*(uint *)(gen_frame + 0x12c18)) ^ (uint)(uint)(gen_frame + 0x0));
  return uVar3;
}

/* ref: Client::Game::Event::GatheringEventHandler::vf24 */
uint F_0070ea60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x70ea60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined1 GVar1;
  int * piVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  undefined * pvVar6;
  uint uVar7;
  float * pfVar8;
  undefined4 * puVar9;
  undefined1 * puVar10;
  int iVar11;
  float fVar12;
  
  pvVar6 = REFG(undefined4, 0x1379694);
  (*(uint *)(gen_frame + 0x3c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x40);
  if ((short)param_2 == 1) {
    if (REFG(undefined4, 0x1379694) == (undefined *)0x0) {
      pvVar6 = param_1;
      if (*(short *)(this + 0x54) != -1) {
        GVar1 = this[0x5c];
        pvVar6 = ((undefined *)GEN_TOP(CONCAT31((int3)((uint)((int)(uintptr_t)param_1) >> 8),GVar1)));
        if (((byte)GVar1 & 4) == 0) {
          this[0x5c] = (undefined1)((byte)GVar1 | 4);
          pvVar6 = (undefined *)F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
        }
      }
    }
    else {
      fVar12 = gen_bits2f(param_3[1]);
      *(char *)((int)REFG(undefined4, 0x1379694) + 0x2dd5) = (char)*param_3;
      iVar11 = REFG(int, 0x1488344);
      F_00aa4270(pvVar6,(undefined4)gen_fl2bits(fVar12),0,0);
      uVar7 = (*(uint *)(gen_frame + 0x2c));
      (*(float *)(gen_frame + 0x20)) = fVar12;
      (*(undefined * PTR32 *)(gen_frame + 0x1c)) = pvVar6;
      (*(undefined * PTR32 *)(gen_frame + 0x24)) = this + 0x28;
      (*(float *)(gen_frame + 0x28)) = 1.4013e-45;
      (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x2c)) + 0)) = 0;
      (*(uint *)(gen_frame + 0x2c)) = uVar7 & 0xffff0000;
      pvVar6 = (undefined *)F_00746770((undefined4 *)(iVar11 + 0x6f0),*(undefined4 *)(iVar11 + 0x6f0),
                                    &(*(undefined * PTR32 *)(gen_frame + 0x1c)));
    }
    goto LAB_0070eefd;
  }
  if (*param_3 == 0) {
    iVar11 = *(int *)(this + 0x10c);
    (*(float * PTR32 *)(gen_frame + 0x38)) = (float *)iVar11;
    if (iVar11 != 0) {
      (*(int *)(gen_frame + 0x4)) = 7;
      pvVar6 = (undefined *)(iVar11 + 0x3b0);
      do {
        pvVar6 = (undefined *)((int)pvVar6 + -0x74);
        F_0042c880(pvVar6);
        (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + -1;
      } while (-1 < (*(int *)(gen_frame + 0x4)));
      F_00406ad0((*(float * PTR32 *)(gen_frame + 0x38)));
      *(undefined4 *)(this + 0x10c) = 0;
    }
    pvVar6 = (undefined *)F_00406b90(0x3b8,0,0);
    if (pvVar6 == (undefined *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = F_0072dfe0(pvVar6);
    }
    *(uint *)(this + 0x10c) = uVar7;
    pvVar6 = REFG(undefined4, 0x1379694);
    pfVar8 = (float *)F_00a5feb0(REFG(undefined4, 0x1379694));
    (*(float * PTR32 *)(gen_frame + 0x38)) = pfVar8;
    pfVar8 = (float *)F_00a5feb0(param_1);
    (*(float *)(gen_frame + 0x20)) = (float)((float10)*pfVar8 - (float10)*(*(float * PTR32 *)(gen_frame + 0x38)));
    (*(undefined * PTR32 *)(gen_frame + 0x24)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)((float10)pfVar8[1] - (float10)(*(float * PTR32 *)(gen_frame + 0x38))[1]))));
    (*(float *)(gen_frame + 0x28)) = (float)((float10)pfVar8[2] - (float10)(*(float * PTR32 *)(gen_frame + 0x38))[2]);
    fVar12 = F_00aae900(&(*(float *)(gen_frame + 0x20)));
    F_00a9f870(pvVar6,fVar12);
    bVar5 = F_006be920(this);
    if (bVar5 != 0) {
      F_00a6e080(&REFG(undefined, 0x14a9e40),0x36,0,0);
    }
  }
  *((int *)GEN_TOP((*(int *)(this + 0x10c) + 0x3a8))) = *param_3;
  *((undefined2 *)GEN_TOP((*(int *)(this + 0x10c) + 0x3b6))) = *(undefined2 *)((int)param_3 + 0xe);
  *((int *)GEN_TOP((*(int *)(this + 0x10c) + 0x3ac))) = param_3[1];
  *((int *)GEN_TOP((*(int *)(this + 0x10c) + 0x3b0))) = param_3[2];
  this[0x148] = *(undefined *)((int)param_3 + 0xe);
  this[0x149] = *(undefined *)(param_3 + 3);
  this[0x144] = *(undefined *)(param_3 + 0x24);
  if ((param_3[2] & 0x80000000U) != 0) {
    ((char *)(gen_frame + 0x34))[0] = -1;
    ((char *)(gen_frame + 0x34))[1] = -1;
    ((char *)(gen_frame + 0x34))[2] = -1;
    ((char *)(gen_frame + 0x34))[3] = -1;
    (*(float * PTR32 *)(gen_frame + 0x38)) = (float *)0xffffffff;
    uVar7 = 0;
    (*(int *)(gen_frame + 0xc)) = 0;
    ((int *)(gen_frame + 0x10))[0] = 0;
    ((int *)(gen_frame + 0x10))[1] = 0;
    ((int *)(gen_frame + 0x10))[2] = 0;
    (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (undefined *)0x0;
    (*(float *)(gen_frame + 0x20)) = 0.0;
    (*(undefined * PTR32 *)(gen_frame + 0x24)) = (undefined *)0x0;
    (*(float *)(gen_frame + 0x28)) = 0.0;
    (*(uint *)(gen_frame + 0x2c)) = 0;
    bVar4 = false;
    cVar3 = '\0';
    puVar10 = (undefined1 *)((int)param_3 + 0x1a);
    do {
      iVar11 = *(int *)(puVar10 + -10);
      if (0 < iVar11) {
        ((int *)(gen_frame + 0x10))[(int)((*(int *)(gen_frame + 0xc)))] = iVar11;
        ((char *)(gen_frame + 0x34))[(int)((*(int *)(gen_frame + 0xc)))] = cVar3;
        (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + 1;
        if (iVar11 != *((int *)GEN_TOP((*(int *)(this + 0x10c) + 100 + uVar7)))) {
          bVar4 = true;
        }
      }
      *((int *)GEN_TOP((*(int *)(this + 0x10c) + 100 + uVar7))) = iVar11;
      *((undefined1 *)GEN_TOP((*(int *)(this + 0x10c) + 0x72 + uVar7))) = *puVar10;
      *((undefined1 *)GEN_TOP((*(int *)(this + 0x10c) + 0x73 + uVar7))) = puVar10[1];
      *((undefined1 *)GEN_TOP((*(int *)(this + 0x10c) + 0x74 + uVar7))) = puVar10[2];
      *((undefined1 *)GEN_TOP((*(int *)(this + 0x10c) + 0x75 + uVar7))) = puVar10[3];
      cVar3 = cVar3 + '\x01';
      *((undefined1 *)GEN_TOP((*(int *)(this + 0x10c) + 0x76 + uVar7))) = puVar10[4];
      *((undefined1 *)GEN_TOP((*(int *)(this + 0x10c) + 0x77 + uVar7))) = puVar10[5];
      *((undefined2 *)GEN_TOP((*(int *)(this + 0x10c) + 0x70 + uVar7))) = *(undefined2 *)(puVar10 + -6);
      *((undefined1 *)GEN_TOP((*(int *)(this + 0x10c) + 0x78 + uVar7))) = puVar10[-1];
      uVar7 = uVar7 + 0x74;
      puVar10 = puVar10 + 0x10;
    } while (uVar7 < 0x3a0);
    if ((*(int *)(gen_frame + 0xc)) < 1) {
      if (REFG(int, 0x1324130) == 0) {
        F_006fb010(this);
        goto LAB_0070eef6;
      }
    }
    else if (bVar4) {
      **(undefined1 * PTR32 *)(this + 0x10c) = ((char *)(gen_frame + 0x34))[0];
      *((char *)GEN_TOP((*(int *)(this + 0x10c) + 1))) = ((char *)(gen_frame + 0x34))[1];
      *((char *)GEN_TOP((*(int *)(this + 0x10c) + 2))) = ((char *)(gen_frame + 0x34))[2];
      *((char *)GEN_TOP((*(int *)(this + 0x10c) + 3))) = ((char *)(gen_frame + 0x34))[3];
      *((char *)GEN_TOP((*(int *)(this + 0x10c) + 4))) = (char)(*(float * PTR32 *)(gen_frame + 0x38));
      *((char *)GEN_TOP((*(int *)(this + 0x10c) + 5))) = (char)((uint)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x38))) >> 8);
      *((undefined1 *)GEN_TOP((*(int *)(this + 0x10c) + 6))) = (*(undefined1 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x38)) + 2));
      *((undefined1 *)GEN_TOP((*(int *)(this + 0x10c) + 7))) = (*(undefined1 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x38)) + 3));
      if (*(int *)(this + 0x114) != 0) {
        piVar2 = *(int * PTR32 *)(this + 0x11c);
        if (piVar2 != (int *)0x0) {
          ((code *)*(gen_code32 *)(*piVar2 + 0x4c))(piVar2,*(int *)(this + 0x114));
        }
        puVar9 = *(undefined4 * PTR32 *)(this + 0x114);
        if (puVar9 != (undefined4 *)0x0) {
          ((code *)*(gen_code32 *)*puVar9)(puVar9,1);
          *(undefined4 *)(this + 0x114) = 0;
        }
      }
      if (*(int *)(this + 0x11c) == 0) {
        this[0x14a] = (undefined1)((char)this[0x14a] + '\x01');
        if (100 < (byte)this[0x14a]) {
          this[0x14a] = (undefined1)0x0;
        }
        uVar7 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8));
        *(uint *)(this + 0x11c) = uVar7;
      }
      puVar9 = (undefined4 *)F_00406b90(0x28,0,0);
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = (undefined4 *)0x0;
      }
      else {
        F_00cb4700(puVar9,(*(int *)(gen_frame + 0xc)),1);
        puVar9[5] = (*(int *)(gen_frame + 0xc));
        *puVar9 = (*(undefined * PTR32 (*)[2])REFP(0x10b91b4));
        puVar9[6] = this;
        puVar9[8] = ((code *)REFP(0x6d58f0));
        puVar9[9] = 0;
      }
      *(undefined4 * PTR32 *)(this + 0x114) = puVar9;
      iVar11 = 0;
      if (0 < (*(int *)(gen_frame + 0xc))) {
        do {
          F_00cb4540(*(undefined * PTR32 *)(this + 0x114),iVar11,((int *)(gen_frame + 0x10))[(int)(iVar11)]);
          iVar11 = iVar11 + 1;
        } while (iVar11 < (*(int *)(gen_frame + 0xc)));
      }
      pvVar6 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x11c) + 0x48))))
                                 (*(int * PTR32 *)(this + 0x11c),*(undefined4 *)(this + 0x114))));
      goto LAB_0070eefd;
    }
    F_006ce950(this);
  }
LAB_0070eef6: ;
  pvVar6 = (undefined *)F_0070baa0(this);
LAB_0070eefd: ;
  F_00c47745((*(uint *)(gen_frame + 0x3c)) ^ (uint)(uint)(gen_frame + 0x40));
  return (uint)pvVar6;
}

/* ref: Client::Game::Event::GatheringEventHandler::vf34 */
uint F_0070ef20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x70ef20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = (uint)(byte)this[0x14a];
  if (uVar3 == param_3) {
    param_3 = 0;
    if (param_2 != 0) {
      do {
        iVar1 = *((int *)GEN_TOP((*(int *)(param_1 + param_3 * 4) + 4)));
        if (iVar1 != 0) {
          iVar4 = *((char *)GEN_TOP((*(int *)(this + 0x10c) + param_3))) * 0x74;
          uVar3 = F_00ab6240(*((undefined4 *)GEN_TOP((iVar4 + 0x68 + *(int *)(this + 0x10c)))),0,iVar1);
          F_0042e430(((undefined *)GEN_TOP((*(int *)(this + 0x10c) + 0x10 + iVar4))),uVar3);
          *((uint *)GEN_TOP((*(int *)(this + 0x10c) + 0x6c + iVar4))) = (uint)*(ushort *)(iVar1 + 0x7c);
        }
        param_3 = param_3 + 1;
      } while (param_3 < param_2);
    }
    if (REFG(int, 0x1324130) == 0) {
      F_006fb010(this);
    }
    else {
      F_006ce950(this);
    }
    uVar3 = F_0070baa0(this);
  }
  puVar2 = *(undefined4 * PTR32 *)(this + 100);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    *(undefined4 *)(this + 100) = 0;
  }
  *(undefined4 *)(this + 0x68) = 0;
  return uVar3;
}

/* ref: Client::Game::Event::GatheringEventHandler::vf35 */
uint F_0070efe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x70efe0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = (uint)(byte)this[0x14a];
  if (uVar3 == param_3) {
    param_3 = 0;
    if (param_2 != 0) {
      do {
        iVar1 = *((int *)GEN_TOP((*(int *)(param_1 + param_3 * 4) + 4)));
        if (iVar1 != 0) {
          iVar4 = *((char *)GEN_TOP((*(int *)(this + 0x10c) + param_3))) * 0x74;
          uVar3 = F_00ab64e0(*((undefined4 *)GEN_TOP((iVar4 + 0x68 + *(int *)(this + 0x10c)))),0,iVar1);
          F_0042e430(((undefined *)GEN_TOP((*(int *)(this + 0x10c) + 0x10 + iVar4))),uVar3);
          *((uint *)GEN_TOP((*(int *)(this + 0x10c) + 0x6c + iVar4))) = (uint)*(ushort *)(iVar1 + 0x1c);
        }
        param_3 = param_3 + 1;
      } while (param_3 < param_2);
    }
    if (REFG(int, 0x1324130) == 0) {
      F_006fb010(this);
    }
    else {
      F_006ce950(this);
    }
    uVar3 = F_0070baa0(this);
  }
  puVar2 = *(undefined4 * PTR32 *)(this + 0x6c);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    *(undefined4 *)(this + 0x6c) = 0;
  }
  *(undefined4 *)(this + 0x70) = 0;
  return uVar3;
}

/* ref: Client::Game::Event::ShopEventHandler::vf24 */
uint F_0070f0a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x70f0a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xd0];
  float in_XMM1_Da = 0;
  float in_XMM2_Da = 0;
  float in_XMM3_Da = 0;
  float in_XMM7_Da = 0;
  ulonglong uVar1;
  
  (*(uint *)(gen_frame + 0xbc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc0);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = param_3;
  *(undefined * PTR32 *)&REFG(undefined, 0x1488764) = param_1;
  F_0042b630(((undefined1 *)(gen_frame + 0x60)));
  if (((short)param_2 == 0) && (param_1 != (undefined *)0x0)) {
    (*(undefined4 *)(gen_frame + 0x2c)) = REFG(float, 0x1087f04);
    (*(undefined4 *)(gen_frame + 0x30)) = REFG(float, 0x1375ac0);
    (*(undefined4 *)(gen_frame + 0x34)) = REFG(float, 0x1375ac4);
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x109c94c));
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = REFG(undefined4, 0x1323520);
    (*(undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
    (*(undefined4 *)(gen_frame + 0x38)) = REFG(float, 0x1375ac8);
    (*(undefined4 *)(gen_frame + 0x40)) = 0;
    F_00aa0000(param_1,0x2ff,0,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),0,0);
    F_006df030(*(undefined4 *)(this + 4),in_XMM1_Da,in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,param_1,
                 REFG(undefined4, 0x1379694),1);
  }
  if ((short)param_2 == 0) {
    if ((char)param_4 != '\0') {
      *(undefined4 *)(this + 0x1bd4) = *(*(undefined4 * PTR32 *)(gen_frame + 0x5c));
    }
    *(undefined4 *)(this + 0x1bdc) = 0;
    this[0x1bf8] = (undefined1)0x0;
    REFG(undefined4, 0x1488760) = this;
    this[0x1bf9] = (undefined1)0x0;
  }
  else if ((short)param_2 == 0x28) {
    this[0x1bef] = (undefined1)0x0;
    if ((char)param_4 != '\0') {
      F_006d1050(this,(*(undefined4 * PTR32 *)(gen_frame + 0x5c)),param_4);
    }
    REFG(undefined4, 0x1488760) = this;
    F_006c1e80(this);
    this[0x1bf9] = (undefined1)0x0;
  }
  F_0070d6b0(this);
  uVar1 = F_0042c880(((undefined1 *)(gen_frame + 0x60)));
  F_00c47745((*(uint *)(gen_frame + 0xbc)) ^ (uint)(uint)(gen_frame + 0xc0));
  return (uint)uVar1;
}

/* ref: FUN_0070f230 */
uint F_0070f230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x70f230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 0x34c) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x348);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,*(int *)((int)this + 0x34c));
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 0x34c);
    if (puVar3 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
      *(undefined4 *)((int)this + 0x34c) = 0;
    }
  }
  uVar2 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8));
  *(uint *)((int)this + 0x348) = uVar2;
  uVar4 = 0;
  if (uVar2 != 0) {
    puVar3 = (undefined4 *)F_00406b90(0x20,0,0);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      F_00cb4700(puVar3,1,0);
      puVar3[5] = 1;
      *puVar3 = (*(undefined * PTR32 (*)[2])REFP(0x10b92bc))
      ;
      puVar3[6] = this;
      puVar3[7] = ((code *)REFP(0x70dd40));
    }
    *(undefined4 * PTR32 *)((int)this + 0x34c) = puVar3;
    F_00cb4540(puVar3,0,param_1);
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x348) + 0x48))))
                      (*(int * PTR32 *)((int)this + 0x348),*(undefined4 *)((int)this + 0x34c));
  }
  return uVar4;
}

/* ref: FUN_0070f340 */
uint F_0070f340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x70f340u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  uint uVar2;
  
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5ac))) = 0xffffffff;
  uVar2 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + (*(uint *)&gen_args[1]) * 4 + 0x22c)));
  iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x538))) + (*(uint *)&gen_args[1]) * 0x10)));
  if (*(int *)(iVar1 + uVar2 * 0x14) == *(int *)(iVar1 + 4 + uVar2 * 0x14)) {
    (*(uint *)&gen_args[1]) = ((*(uint *)&gen_args[1]) << 8 | uVar2) << 0x10;
    if ((*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) & 1) == 0) {
      uVar2 = F_00a50880(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))),(uint)*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54))),0,
                           &(*(uint *)&gen_args[1]),1);
      *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) = *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) | 1;
      return uVar2;
    }
  }
  else {
    (*(uint *)&gen_args[1]) = F_0070e7f0((*(undefined * PTR32 *)&gen_args[0]),(*(uint *)&gen_args[1]),uVar2,(uint)*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + (*(uint *)&gen_args[1]) * 2 + 0x248))),0);
  }
  return (*(uint *)&gen_args[1]);
}

