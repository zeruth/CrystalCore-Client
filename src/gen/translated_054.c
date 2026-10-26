#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_006dfbe0 */
uint F_006dfbe0(unsigned int gen_a0)
{
  GEN_ENTER(0x6dfbe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[144])REFP(0x10b988c));
  if (*(int *)((int)this + 0x13c) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x138);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,*(int *)((int)this + 0x13c));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x13c);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x13c) = 0;
    }
  }
  uVar3 = F_006df660(this);
  return uVar3;
}

/* ref: Client::Game::Event::ArrayEventHandler::vf112 */
uint F_006dfc30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6dfc30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  ushort uVar2;
  uint uVar3;
  undefined * pAVar4;
  
  uVar2 = (*(ushort *)(gen_frame + 0x14));
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x14)) + 0)) = 0;
  (*(ushort *)(gen_frame + 0x14)) = uVar2 & 0xff00;
  pAVar4 = this + 0xf8;
  (*(int *)(gen_frame + 0x10)) = 0x10;
  do {
    if (*(int *)pAVar4 != 0) {
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar4 + 0x1c0))))(*(int * PTR32 *)pAVar4,param_1);
      iVar1 = REFG(int, 0x1488344);
      (*(uint *)(gen_frame + 0x8)) = uVar3;
      if (uVar3 == 0) {
LAB_006dfc9d: ;
        (*(ushort *)(gen_frame + 0x18)) = 1;
      }
      else {
        F_007491b0((undefined *)(REFG(int, 0x1488344) + 0x264),&(*(int *)(gen_frame + 0x4)),&(*(uint *)(gen_frame + 0x8)));
        if ((*(int *)(gen_frame + 0x4)) == *(int *)(iVar1 + 0x268)) goto LAB_006dfc9d;
        (*(ushort *)(gen_frame + 0x18)) = *(ushort *)((*(int *)(gen_frame + 0x4)) + 0x10);
      }
      if ((uVar3 != 0) && ((byte)(*(ushort *)(gen_frame + 0x14)) < (byte)(*(ushort *)(gen_frame + 0x18)))) {
        (*(uint *)(gen_frame + 0xc)) = uVar3;
        (*(ushort *)(gen_frame + 0x14)) = (*(ushort *)(gen_frame + 0x18));
      }
    }
    pAVar4 = pAVar4 + 4;
    iVar1 = (*(int *)(gen_frame + 0x10)) + -1;
    (*(int *)(gen_frame + 0x10)) = iVar1;
    if (iVar1 == 0) {
      return (*(uint *)(gen_frame + 0xc));
    }
  } while( true );
}

/* ref: Client::Game::Event::ArrayEventHandler::vf128 */
uint F_006dfcd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6dfcd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  ushort uVar2;
  uint uVar3;
  undefined * pAVar4;
  
  uVar2 = (*(ushort *)(gen_frame + 0x14));
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x14)) + 0)) = 0;
  (*(ushort *)(gen_frame + 0x14)) = uVar2 & 0xff00;
  pAVar4 = this + 0xf8;
  (*(int *)(gen_frame + 0x10)) = 0x10;
  do {
    if (*(int *)pAVar4 != 0) {
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar4 + 0x200))))
                        (*(int * PTR32 *)pAVar4,param_1,param_2,param_3,param_4);
      iVar1 = REFG(int, 0x1488344);
      (*(uint *)(gen_frame + 0x8)) = uVar3;
      if (uVar3 == 0) {
LAB_006dfd49: ;
        (*(ushort *)(gen_frame + 0x18)) = 1;
      }
      else {
        F_007491b0((undefined *)(REFG(int, 0x1488344) + 0x264),&(*(int *)(gen_frame + 0x4)),&(*(uint *)(gen_frame + 0x8)));
        if ((*(int *)(gen_frame + 0x4)) == *(int *)(iVar1 + 0x268)) goto LAB_006dfd49;
        (*(ushort *)(gen_frame + 0x18)) = *(ushort *)((*(int *)(gen_frame + 0x4)) + 0x10);
      }
      if ((uVar3 != 0) && ((byte)(*(ushort *)(gen_frame + 0x14)) < (byte)(*(ushort *)(gen_frame + 0x18)))) {
        (*(uint *)(gen_frame + 0xc)) = uVar3;
        (*(ushort *)(gen_frame + 0x14)) = (*(ushort *)(gen_frame + 0x18));
      }
    }
    pAVar4 = pAVar4 + 4;
    iVar1 = (*(int *)(gen_frame + 0x10)) + -1;
    (*(int *)(gen_frame + 0x10)) = iVar1;
    if (iVar1 == 0) {
      return (*(uint *)(gen_frame + 0xc));
    }
  } while( true );
}

/* ref: Client::Game::Event::ArrayEventHandler::vf127 */
uint F_006dfd80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6dfd80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  ushort uVar2;
  uint uVar3;
  undefined * pAVar4;
  
  uVar2 = (*(ushort *)(gen_frame + 0x14));
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x14)) + 0)) = 0;
  (*(ushort *)(gen_frame + 0x14)) = uVar2 & 0xff00;
  pAVar4 = this + 0xf8;
  (*(int *)(gen_frame + 0x10)) = 0x10;
  do {
    if (*(int *)pAVar4 != 0) {
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar4 + 0x1fc))))(*(int * PTR32 *)pAVar4,param_1);
      iVar1 = REFG(int, 0x1488344);
      (*(uint *)(gen_frame + 0x8)) = uVar3;
      if (uVar3 == 0) {
LAB_006dfded: ;
        (*(ushort *)(gen_frame + 0x18)) = 1;
      }
      else {
        F_007491b0((undefined *)(REFG(int, 0x1488344) + 0x264),&(*(int *)(gen_frame + 0x4)),&(*(uint *)(gen_frame + 0x8)));
        if ((*(int *)(gen_frame + 0x4)) == *(int *)(iVar1 + 0x268)) goto LAB_006dfded;
        (*(ushort *)(gen_frame + 0x18)) = *(ushort *)((*(int *)(gen_frame + 0x4)) + 0x10);
      }
      if ((uVar3 != 0) && ((byte)(*(ushort *)(gen_frame + 0x14)) < (byte)(*(ushort *)(gen_frame + 0x18)))) {
        (*(uint *)(gen_frame + 0xc)) = uVar3;
        (*(ushort *)(gen_frame + 0x14)) = (*(ushort *)(gen_frame + 0x18));
      }
    }
    pAVar4 = pAVar4 + 4;
    iVar1 = (*(int *)(gen_frame + 0x10)) + -1;
    (*(int *)(gen_frame + 0x10)) = iVar1;
    if (iVar1 == 0) {
      return (*(uint *)(gen_frame + 0xc));
    }
  } while( true );
}

/* ref: FUN_006dfe20 */
uint F_006dfe20(unsigned int gen_a0)
{
  GEN_ENTER(0x6dfe20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x2c0];
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
  
  (*(uint *)(gen_frame + 0x2b8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2bc);
  (*(uint *)(gen_frame + 0x8)) = (uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0x574) + *(int *)((int)this + 0x5a4) * 4)));
  F_007494c0((undefined *)((int)this + 0x584),&(*(int *)(gen_frame + 0xc)),&(*(uint *)(gen_frame + 0x8)));
  puVar1 = ((undefined4 *)(gen_frame + 0x10));
  iVar4 = 0x54;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  REFG(undefined4, 0x132411c) = this;
  F_006c4440((*(int *)(gen_frame + 0xc)) + 0x10,((undefined4 *)(gen_frame + 0x10)));
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar10 = 4;
  uVar9 = 0;
  uVar8 = 0;
  ppuVar7 = &REFG(undefined * PTR32, 0x1324118);
  puVar1 = ((undefined4 *)(gen_frame + 0x10));
  uVar6 = 0x55;
  uVar5 = 0x15;
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
  REFG(undefined4, 0x1324120) = F_008668b0(this_00,uVar5,uVar6,puVar1,ppuVar7,uVar8,uVar9,uVar10);
  this_01 = &(*(uint *)(gen_frame + 0x2b8));
  iVar4 = 0x54;
  do {
    this_01 = this_01 + -2;
    uVar3 = F_005a2670(this_01);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_00c47745((*(uint *)(gen_frame + 0x2b8)) ^ (uint)(uint)(gen_frame + 0x2bc));
  return uVar3;
}

/* ref: FUN_006dff00 */
uint F_006dff00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6dff00u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  F_00749410(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x548))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54c)))) {
    return (int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10;
  }
  return 0;
}

/* ref: FUN_006dff40 */
uint F_006dff40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6dff40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x570);
  *(undefined4 *)((int)this + 0x56c) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0x570) = 0;
  }
  uVar2 = F_006dfe20(this);
  return uVar2;
}

/* ref: FUN_006dff80 */
uint F_006dff80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6dff80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  uint uVar4;
  undefined4 * puVar5;
  undefined4 * PTR32 * ppuVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(uint *)(gen_frame + 0x1c)) = (uint)param_3 & 0xff;
  puVar8 = (undefined4 *)((uint)((int)(uintptr_t)param_3) >> 8 & 0xff);
  uVar4 = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = param_3;
  (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = puVar8;
  if (param_2 != 0) {
    puVar7 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x570) + 0xc)));
    do {
      ((int *)(gen_frame + 0xc))[(int)(uVar4)] = *((int *)GEN_TOP((*((int *)GEN_TOP(((param_1 - (int)((int *)(gen_frame + 0xc))) + (int)(((int *)(gen_frame + 0xc)) + uVar4)))) + 4)));
      ((undefined4 *)(gen_frame + 0x28))[(int)(uVar4)] = *puVar7;
      uVar4 = uVar4 + 1;
      puVar7 = puVar7 + 4;
      puVar8 = (*(undefined4 * PTR32 *)(gen_frame + 0x24));
    } while (uVar4 < param_2);
  }
  puVar3 = (*(undefined4 * PTR32 *)(gen_frame + 0x20));
  puVar7 = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)((int)this + 0x54c))[1]));
  cVar1 = *(char *)((int)puVar7 + 0x2cd);
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x54c);
  while (cVar1 == '\0') {
    if (*(ushort *)(puVar7 + 3) < **(ushort * PTR32 *)((int)this + 0x270)) {
      puVar5 = (undefined4 *)puVar7[2];
      puVar7 = puVar2;
    }
    else {
      puVar5 = (undefined4 *)*puVar7;
    }
    puVar2 = puVar7;
    puVar7 = puVar5;
    cVar1 = *(char *)((int)puVar5 + 0x2cd);
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = puVar2;
  if ((puVar2 == *(undefined4 * PTR32 *)((int)this + 0x54c)) ||
     (**(ushort * PTR32 *)((int)this + 0x270) < *(ushort *)(puVar2 + 3))) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = *(undefined4 * PTR32 *)((int)this + 0x54c);
    ppuVar6 = &(*(undefined4 * PTR32 *)(gen_frame + 0x20));
  }
  else {
    ppuVar6 = &(*(undefined4 * PTR32 *)(gen_frame + 0x24));
  }
  if (*ppuVar6 == *(undefined4 * PTR32 *)((int)this + 0x54c)) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7 = *ppuVar6 + 4;
  }
  F_006d42d0((undefined *)((int)this + 0x278),*(undefined4 *)((int)this + 0x270),puVar7[0x6e],((int *)(gen_frame + 0xc)),
               ((undefined4 *)(gen_frame + 0x28)),param_2);
  *(undefined4 *)((int)this + 0x56c) = 0;
  if (*(undefined4 * PTR32 *)((int)this + 0x570) != (undefined4 *)0x0) {
    ((code *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x570))))(1);
    *(undefined4 *)((int)this + 0x570) = 0;
  }
  uVar4 = F_0070e7f0(this,puVar8,(*(uint *)(gen_frame + 0x1c)),(uint)**(ushort * PTR32 *)((int)this + 0x270),
                       (uint)((int)(uintptr_t)puVar3) >> 0x10 & 0xff);
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar4;
}

/* ref: FUN_006e0028 */
uint F_006e0028(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x6e0028u, gen_a0, gen_a1, gen_a2, gen_a3);
  ushort in_cx = (ushort)gen_a0;
  int in_edx = (int)gen_a1;
  uint in_ebx = (uint)gen_a2;
  undefined * in_esi = (undefined *)(uintptr_t)gen_a3;
  undefined4 in_edi = (undefined4)gen_a4;
  uint in_ebp = (uint)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 * puVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)((int)in_esi + 0x54c);
  *(int *)(in_ebp - 0x18) = in_edx;
  if ((in_edx == iVar3) || (in_cx < *(ushort *)(in_edx + 0xc))) {
    *(int *)(in_ebp - 0x1c) = iVar3;
    piVar2 = (int *)(in_ebp - 0x1c);
  }
  else {
    piVar2 = (int *)(in_ebp - 0x18);
  }
  if (*piVar2 == *(int *)((int)in_esi + 0x54c)) {
    iVar3 = 0;
  }
  else {
    iVar3 = *piVar2 + 0x10;
  }
  F_006d42d0((undefined *)((int)in_esi + 0x278),*(undefined4 *)((int)in_esi + 0x270),
               *(undefined4 *)(iVar3 + 0x1b8),in_ebp - 0x30,in_ebp - 0x14,
               *(undefined4 *)(in_ebp + 0xc));
  puVar1 = *(undefined4 * PTR32 *)((int)in_esi + 0x570);
  *(undefined4 *)((int)in_esi + 0x56c) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)in_esi + 0x570) = 0;
  }
  uVar4 = F_0070e7f0(in_esi,in_edi,*(undefined4 *)(in_ebp - 0x20),
                       (uint)**(ushort * PTR32 *)((int)in_esi + 0x270),in_ebx >> 0x10 & 0xff);
  F_00c47745(*(uint *)(in_ebp - 4) ^ in_ebp);
  return uVar4;
}

/* ref: FUN_006e00e0 */
uint F_006e00e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e00e0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  undefined4 * this_00;
  undefined4 uVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  uVar1 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8));
  (*(uint *)&gen_args[1]) = (*(uint *)&gen_args[1]) & 0xffff;
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x56c))) = uVar1;
  uVar2 = 0;
  F_007494c0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x584))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(uint *)&gen_args[1]));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x588)))) {
    uVar2 = *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x18);
  }
  this_00 = (undefined4 *)F_00406b90(0x20,0,0);
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(this_00,1,0);
    this_00[5] = 1;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10b9198));
    this_00[6] = (*(undefined * PTR32 *)&gen_args[0]);
    this_00[7] = ((code *)REFP(0x6dff40));
  }
  *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x570))) = this_00;
  F_00cb4540(this_00,0,uVar2);
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x56c))) + 0x48))))
                    (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x56c))),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x570))));
  return uVar1;
}

/* ref: FUN_006e01a0 */
uint F_006e01a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6e01a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  int * piVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x570))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x56c)));
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x570))));
    }
    puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x570)));
    if (puVar4 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar4)(puVar4,1);
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x570))) = 0;
    }
  }
  uVar3 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8));
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x56c))) = uVar3;
  puVar4 = (undefined4 *)F_00406b90(0x20,0,0);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(puVar4,1,(((*(uint *)&gen_args[4]) & 0xff) << 8 | (*(uint *)&gen_args[1]) & 0xff) << 8 | (*(uint *)&gen_args[2]) & 0xff);
    puVar4[5] = 1;
    *puVar4 = (*(undefined * PTR32 (*)[2])REFP(0x10b9198));
    puVar4[6] = (*(undefined * PTR32 *)&gen_args[0]);
    puVar4[7] = ((code *)REFP(0x6bdc70));
  }
  uVar2 = (undefined2)(*(uint *)&gen_args[3]);
  (*(uint *)&gen_args[3]) = (*(uint *)&gen_args[3]) & 0xffff;
  *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x570))) = puVar4;
  F_00749410(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x548))),&(*(uint *)&gen_args[4]),&(*(uint *)&gen_args[3]));
  if ((*(uint *)&gen_args[4]) == *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54c)))) {
    iVar5 = 0;
  }
  else {
    iVar5 = (*(uint *)&gen_args[4]) + 0x10;
  }
  *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x52c))) = uVar2;
  F_00cb4540(puVar4,0,*(undefined4 *)(iVar5 + 0x1c4));
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x56c))) + 0x48))))
                    (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x56c))),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x570))));
  return uVar3;
}

/* ref: Client::Game::Event::GuildleveAssignmentEventHandler::vf115 */
uint F_006e02c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e02c0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  short sVar1;
  undefined * pvVar2;
  uint uVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  if (REFG(int, 0x1379694) == 0) {
    return 0;
  }
  sVar1 = *(short *)(REFG(int, 0x1379694) + 0xe6);
  if (((sVar1 == -0x7fff) || (sVar1 == -0x7ffe)) || (sVar1 == -0x7ff9)) {
    uVar3 = F_006d6fd0(REFG(undefined4, 0x1488344));
    if ((uVar3 != 0) && (*(byte *)(uVar3 + 0x1dc) < 0xfe)) {
      return 0xffff;
    }
  }
  (*(uint *)&gen_args[1]) = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c0))))((*(undefined * PTR32 *)&gen_args[0]),(*(uint *)&gen_args[1]));
  pvVar2 = REFG(undefined4, 0x1488344);
  if ((*(uint *)&gen_args[1]) != 0) {
    F_007491b0((undefined *)((int)REFG(undefined4, 0x1488344) + 0x264),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(uint *)&gen_args[1]));
    if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *(undefined * PTR32 *)((int)pvVar2 + 0x268)) {
      return (uint)(ushort)(*(ushort *)((*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10) << 8 | *(ushort *)((*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10) >> 8);
    }
  }
  return 0x100;
}

/* ref: FUN_006e03a0 */
uint F_006e03a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6e03a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined * pvVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[144])REFP(0x10b9adc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xf8) = (*(undefined * PTR32 (*)[2])REFP(0x10b9ad0));
  F_006be8d0(this);
  pvVar4 = *(undefined * PTR32 *)((int)this + 0x120);
  if (pvVar4 != (undefined *)0x0) {
    F_0042c880(pvVar4);
    F_00406ad0(pvVar4);
    *(undefined4 *)((int)this + 0x120) = 0;
  }
  pvVar4 = *(undefined * PTR32 *)((int)this + 0x124);
  if (pvVar4 != (undefined *)0x0) {
    F_0042c880(pvVar4);
    F_00406ad0(pvVar4);
    *(undefined4 *)((int)this + 0x124) = 0;
  }
  iVar1 = *(int *)((int)this + 0x10c);
  if (iVar1 != 0) {
    iVar3 = 7;
    pvVar4 = (undefined *)(iVar1 + 0x3b0);
    do {
      pvVar4 = (undefined *)((int)pvVar4 + -0x74);
      F_0042c880(pvVar4);
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
    F_00406ad0(iVar1);
    *(undefined4 *)((int)this + 0x10c) = 0;
  }
  F_00cb4870((undefined *)((int)this + 0xf8));
  uVar2 = F_006df660(this);
  return uVar2;
}

/* ref: FUN_006e0460 */
uint F_006e0460(unsigned int gen_a0)
{
  GEN_ENTER(0x6e0460u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[144])REFP(0x10b9d24));
  if (*(int *)((int)this + 0xfc) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x100);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,*(int *)((int)this + 0xfc));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0xfc);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0xfc) = 0;
    }
  }
  uVar3 = F_006df660(this);
  return uVar3;
}

/* ref: Client::Game::Event::DefaultTalkEventHandler::vf132 */
uint F_006e04b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6e04b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  if ((char)param_3 != '\a') {
    return 0xf;
  }
  uVar1 = F_006de7c0(REFG(undefined4, 0x1488344));
  return uVar1;
}

/* ref: FUN_006e04e0 */
uint F_006e04e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6e04e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  int * piVar2;
  undefined4 * puVar3;
  int iVar4;
  int * piVar5;
  ulonglong uVar6;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[144])REFP(0x10b9f6c));
  piVar5 = (int *)((int)this + 0xf8);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x4;
  do {
    if (*piVar5 != 0) {
      piVar2 = (int *)piVar5[4];
      if (piVar2 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar2 + 0x4c))(piVar2,*piVar5);
      }
      puVar3 = (undefined4 *)*piVar5;
      if (puVar3 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
        *piVar5 = 0;
      }
    }
    piVar5 = piVar5 + 1;
    pvVar1 = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + -1);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar1;
  } while (pvVar1 != (undefined *)0x0);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[144])REFP(0x10b9644));
  F_006bcd10(this);
  iVar4 = *(int *)((int)this + 0xe8);
  if (iVar4 != 0) {
    F_00429760(iVar4,(*(int *)((int)this + 0xf0) - iVar4 >> 2) * 4,800);
  }
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  iVar4 = *(int *)((int)this + 0xd0);
  if (iVar4 != 0) {
    F_00429760(iVar4,(*(int *)((int)this + 0xd8) - iVar4 >> 2) * 4,800);
  }
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  F_0042c880((undefined *)((int)this + 0x7c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x30) = (*(undefined * PTR32 (*)[3])REFP(0x10b8194));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x28) = (*(undefined * PTR32 (*)[3])REFP(0x10b8184))
  ;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x20) = (*(undefined * PTR32 (*)[3])REFP(0x10b8174));
  F_00744a50((undefined *)((int)this + 0xc),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x10),
               *(undefined4 * PTR32 *)((int)this + 0x10));
  uVar6 = F_00429760(*(undefined4 *)((int)this + 0x10),0x14,800);
  return (uint)uVar6;
}

/* ref: Client::Game::Event::QuestEventHandler::vf5 */
byte F_006e0600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e0600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  iVar2 = REFG(int, 0x1379694);
  if ((REFG(int, 0x1379694) != 0) && (**(char * PTR32 *)(this + 0x16c) != '\0')) {
    uVar4 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
    iVar1 = param_1[0x1e];
    iVar6 = param_1[0x20];
    (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),(char)uVar4);
    uVar5 = ((code *)*(gen_code32 *)(*param_1 + 0xa8))(param_1);
    if (((char)uVar4 == '\x01') && (iVar6 == 0)) {
      iVar6 = 0x4c7250;
    }
    bVar3 = F_006dc160(this,iVar2,(*(undefined4 *)(gen_frame + 0x8)),iVar6,iVar1,uVar5,1,0);
    if (bVar3 != 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: Client::Game::Event::QuestEventHandler::vf7 */
byte F_006e0690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e0690u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  iVar2 = REFG(int, 0x1379694);
  (*(int *)(gen_frame + 0x8)) = 0;
  if ((REFG(int, 0x1379694) != 0) && (**(char * PTR32 *)(this + 0x16c) != '\0')) {
    uVar4 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
    iVar1 = param_1[0x1e];
    iVar6 = param_1[0x20];
    (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),(char)uVar4);
    uVar5 = ((code *)*(gen_code32 *)(*param_1 + 0xa8))(param_1);
    if (((char)uVar4 == '\x01') && (iVar6 == 0)) {
      iVar6 = 0x4c7250;
    }
    bVar3 = F_006dc160(this,iVar2,(*(undefined4 *)(gen_frame + 0x4)),iVar6,iVar1,uVar5,2,&(*(int *)(gen_frame + 0x8)));
    if ((bVar3 != 0) && ((*(int *)(gen_frame + 0x8)) != 0)) {
      bVar3 = F_006dc600(iVar2,(*(int *)(gen_frame + 0x8)));
      if (bVar3 != 0) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: Client::Game::Event::QuestEventHandler::vf13 */
byte F_006e0740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e0740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  
  if (((REFG(int, 0x1379694) != 0) && (**(char * PTR32 *)(this + 0x16c) != '\0')) && (REFG(char, 0x14a7381) == '\0')) {
    bVar1 = F_006dc160(this,REFG(int, 0x1379694),0,5000000,*(undefined4 *)(param_1 + 0x14),0,10,0);
    return bVar1;
  }
  return 0;
}

/* ref: Client::Game::Event::QuestEventHandler::vf15 */
byte F_006e0790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e0790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined1 QVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  
  iVar2 = REFG(int, 0x1379694);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if (((REFG(int, 0x1379694) == 0) || (**(char * PTR32 *)(this + 0x16c) == '\0')) || (REFG(char, 0x14a7381) != '\0')) {
    return 0;
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  bVar3 = F_006dc160(this,REFG(int, 0x1379694),0,5000000,*(undefined4 *)(param_1 + 0x14),0,0xb,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  if (bVar3 != 0) {
    QVar1 = (*(undefined * PTR32 *)(gen_frame + 0x8))[1];
    iVar5 = 5000000;
    if (((QVar1 != (undefined1)0xa) && (QVar1 != (undefined1)0xb)) &&
       (QVar1 == (undefined1)0xf)) {
      iVar5 = 0x4c9960;
    }
    uVar4 = F_006d8e70(this,iVar2,0,iVar5,*(undefined4 *)(param_1 + 0x14),0,(*(undefined * PTR32 *)(gen_frame + 0x8)));
    if ((((uVar4 != 0) && (iVar5 != *(int *)(this + 0x31c))) &&
        (*(*(undefined * PTR32 *)(gen_frame + 0x8)) == (undefined1)0xff)) ||
       ((uVar4 == 0 ||
        (bVar3 = F_006dc160(this,iVar2,0,5000000,*(undefined4 *)(param_1 + 0x14),0,10,0),
        bVar3 == 0)))) {
      return 1;
    }
  }
  return 0;
}

/* ref: Client::Game::Event::QuestEventHandler::vf17 */
byte F_006e0880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e0880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  int * piVar2;
  byte bVar3;
  uint uVar4;
  undefined4 local_8;
  
  piVar2 = REFG(undefined4, 0x1379694);
  if ((REFG(undefined4, 0x1379694) != (int *)0x0) && (**(char * PTR32 *)(this + 0x16c) != '\0')) {
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1379694) + 4))))(REFG(undefined4, 0x1379694));
    iVar1 = piVar2[0x1e];
    local_8 = CONCAT31((int3)((uint)((int)(uintptr_t)this) >> 8),(char)uVar4);
    uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0xa8))(piVar2);
    bVar3 = F_006dc160(this,piVar2,local_8,0x4c9960,iVar1,uVar4,0xf,0);
    if (bVar3 != 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: Client::Game::Event::QuestEventHandler::vf19 */
byte F_006e08f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6e08f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  int * piVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  piVar3 = (*(int * PTR32 *)&gen_args[1]);
  iVar2 = REFG(int, 0x1379694);
  if (**((char * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x16c))) != '\0') {
    switch((unsigned int)(uintptr_t)((*(uint *)&gen_args[3]) & 0xff)) {
    case 3: ;
    case 4: ;
    case 5: ;
    case 6: ;
    case 10: ;
      if (REFG(int, 0x1379694) != 0) {
        uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 4))))((*(int * PTR32 *)&gen_args[1]));
        iVar1 = piVar3[0x1e];
        iVar8 = piVar3[0x20];
        (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),(char)uVar5);
        uVar6 = ((code *)*(gen_code32 *)(*piVar3 + 0xa8))(piVar3);
        if (((char)uVar5 == '\x01') && (iVar8 == 0)) {
          iVar8 = 0x4c7250;
        }
        bVar4 = F_006dc160((*(undefined * PTR32 *)&gen_args[0]),iVar2,(*(undefined4 *)(gen_frame + 0x8)),iVar8,iVar1,uVar6,0x12,0);
        if (bVar4 != 0) {
          uVar5 = F_006bcb60(iVar2);
          if ((uVar5 != 0) && (piVar3[0x5d] != 0)) {
            (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((uint)(*(int * PTR32 *)&gen_args[1]) & 0xffffff)));
            uVar6 = F_0042a990(piVar3[0x5d] + 8);
            uVar5 = F_0042a990(uVar5 + 8);
            uVar7 = F_0042a990((*(undefined * PTR32 *)&gen_args[0]) + 0x16c);
            uVar5 = F_00a030f0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xf8))),"OnPreActionResult",uVar7,uVar5,uVar6,
                                 (*(undefined4 *)&gen_args[2]),(*(uint *)&gen_args[3]) & 0xff,1);
            if (uVar5 == 0) {
              F_00a01d80(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xf8))),(int)&(*(int * PTR32 *)&gen_args[1]) + 3);
            }
            return (*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[1]) + 3))));
          }
        }
      }
    }
  }
  return 0;
}

/* ref: Client::Game::Event::QuestEventHandler::vf112 */
uint F_006e0a30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e0a30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = REFG(int, 0x1379694);
  if (REFG(int, 0x1379694) == 0) {
    return 0;
  }
  uVar3 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
  if ((((char)uVar3 != '\x02') && (bVar2 = F_006d9290(this,iVar1,0), bVar2 != 0)) &&
     (bVar2 = F_006d9430(this,param_1), bVar2 != 0)) {
    return 0;
  }
  bVar2 = F_006c0470(iVar1,param_1);
  if (bVar2 != 0) {
    return 0;
  }
  if (((char)uVar3 == '\x02') && (uVar3 = F_00a5f290(param_1), *(char *)(uVar3 + 0x188) == '\x02')
     ) {
    return 0;
  }
  iVar6 = param_1[0x1e];
  iVar5 = param_1[0x20];
  uVar3 = ((code *)*(gen_code32 *)(*param_1 + 0xa8))(param_1);
  uVar4 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
  uVar3 = F_006dc9e0(this,iVar1,uVar4,iVar5,iVar6,uVar3);
  return uVar3;
}

/* ref: Client::Game::Event::QuestEventHandler::vf128 */
uint F_006e0af0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6e0af0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined1 QVar1;
  short sVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar3 = REFG(int, 0x1379694);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if (REFG(int, 0x1379694) == 0) {
    return 0;
  }
  sVar2 = *(short *)(this + 0x1d4);
  uVar5 = F_00a4ffd0();
  iVar7 = 0;
  iVar6 = uVar5 + 0x13b4;
  do {
    if (*(short *)(iVar6 + 4) == sVar2) {
      if (-1 < iVar7) {
        if ((*(char *)(iVar6 + 6) != -1) && (bVar4 = F_00a67a10(1,iVar7), bVar4 == 0)) {
          return 0;
        }
        (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
        uVar5 = F_006dcaf0(this,iVar3,param_1,param_2,param_3,param_4,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
        if (((uVar5 != 0) && ((*(undefined * PTR32 *)(gen_frame + 0x8)) != (undefined *)0x0)) &&
           (QVar1 = *(*(undefined * PTR32 *)(gen_frame + 0x8)), (byte)QVar1 < 0x18)) {
          if ((((uint)(byte)QVar1 < (uint)((*(int *)(this + 0x35c) - *(int *)(this + 0x358)) / 0x28)
               ) && ((char)param_1 != '\x02')) &&
             (*((char *)GEN_TOP((*(int *)(this + 0x358) + 0x24 + (uint)(byte)QVar1 * 0x28))) != '\0')) {
            return 0;
          }
        }
        return uVar5;
      }
      break;
    }
    iVar7 = iVar7 + 1;
    iVar6 = iVar6 + 0x10;
  } while (iVar7 < 0x1e);
  uVar5 = F_006dcaf0(this,iVar3,param_1,param_2,param_3,param_4,0);
  return uVar5;
}

/* ref: Client::Game::Event::QuestEventHandler::vf129 */
uint F_006e0c00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6e0c00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  if (REFG(int, 0x1379694) == 0) {
    return 0;
  }
  uVar1 = F_006dcaf0(this,REFG(int, 0x1379694),param_1,param_2,param_3,param_4,0);
  return uVar1;
}

/* ref: Client::Game::Event::QuestEventHandler::vf115 */
uint F_006e0c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e0c30u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  short sVar1;
  int * piVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  piVar2 = (*(int * PTR32 *)&gen_args[1]);
  (*(int *)(gen_frame + 0x4)) = REFG(int, 0x1379694);
  if (REFG(int, 0x1379694) == 0) {
    return 0;
  }
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 4))))((*(int * PTR32 *)&gen_args[1]));
  iVar8 = piVar2[0x20];
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(int * PTR32 *)&gen_args[1]), 1, 3),(char)uVar4)));
  (*(int *)(gen_frame + 0x8)) = piVar2[0x1e];
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0xa8))(piVar2);
  if (((char)(*(int * PTR32 *)&gen_args[1]) == '\x01') && (iVar8 == 0)) {
    iVar8 = 0x4c7250;
  }
  bVar3 = F_006dc4a0((*(undefined * PTR32 *)&gen_args[0]),(*(int *)(gen_frame + 0x4)),(*(int * PTR32 *)&gen_args[1]),iVar8,(*(int *)(gen_frame + 0x8)),uVar4,0);
  if (bVar3 == 0) {
    return 0;
  }
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c0))))((*(undefined * PTR32 *)&gen_args[0]),piVar2);
  sVar1 = *((short *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1d4)));
  uVar5 = F_00a4ffd0();
  iVar8 = REFG(int, 0x1488344);
  iVar7 = 0;
  iVar6 = uVar5 + 0x13b4;
  do {
    if (*(short *)(iVar6 + 4) == sVar1) {
      if (((-1 < iVar7) && (*(char *)(iVar6 + 6) != '\0')) && (uVar4 == 0)) {
        return 0x2ff;
      }
      break;
    }
    iVar7 = iVar7 + 1;
    iVar6 = iVar6 + 0x10;
  } while (iVar7 < 0x1e);
  if (uVar4 != 0) {
    (*(int * PTR32 *)&gen_args[1]) = (int *)uVar4;
    F_007491b0((undefined *)(REFG(int, 0x1488344) + 0x264),&(*(int *)(gen_frame + 0x4)),&(*(int * PTR32 *)&gen_args[1]));
    if ((*(int *)(gen_frame + 0x4)) != *(int *)(iVar8 + 0x268)) {
      return (uint)(ushort)(*(ushort *)((*(int *)(gen_frame + 0x4)) + 0x10) << 8 | *(ushort *)((*(int *)(gen_frame + 0x4)) + 0x10) >> 8);
    }
  }
  return 0x100;
}

/* ref: FUN_006e0d70 */
byte F_006e0d70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x6e0d70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  byte * param_4 = (byte *)(uintptr_t)gen_a4;
  byte * param_5 = (byte *)(uintptr_t)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  byte bVar1;
  uint uVar2;
  byte bVar3;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  (*(byte * PTR32 *)(gen_frame + 0x10)) = param_4;
  if (**(char * PTR32 *)((int)this + 0x16c) != '\0') {
    (*(int *)(gen_frame + 0x8)) = (param_2 & 0xff) + 0x18;
    F_00748d80((undefined *)((int)this + 0x1c0),&(*(int *)(gen_frame + 0xc)),&(*(int *)(gen_frame + 0x8)));
    if ((*(int *)(gen_frame + 0xc)) != *(int *)((int)this + 0x1c4)) {
      F_0042aca0(param_3);
      F_0042ccf0(param_3,(*(int *)(gen_frame + 0xc)) + 100);
      F_006d0d30(this,param_1,param_2,(*(byte * PTR32 *)(gen_frame + 0x10)),param_5);
      bVar1 = *param_5;
      if (bVar1 != 0) {
        bVar3 = *(*(byte * PTR32 *)(gen_frame + 0x10));
        if (bVar1 < *(*(byte * PTR32 *)(gen_frame + 0x10))) {
          bVar3 = bVar1;
        }
        uVar2 = F_0042ce40(((undefined1 *)(gen_frame + 0x14))," %u/%u",(uint)bVar3,(uint)bVar1);
        F_0042e360(param_3,uVar2);
        F_0042c880(((undefined1 *)(gen_frame + 0x14)));
      }
      F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
      return 1;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return 0;
}

/* ref: Client::Game::Event::QuestEventHandler::vf116 */
byte F_006e0e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e0e60u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  int * piVar2;
  byte bVar3;
  uint uVar4;
  
  piVar2 = (*(int * PTR32 *)&gen_args[1]);
  iVar1 = REFG(int, 0x1379694);
  if ((~*((byte *)GEN_TOP(((*(int * PTR32 *)&gen_args[1]) + 0x1c))) & 1) != 0) {
    return 1;
  }
  if ((REFG(int, 0x1379694) != 0) && (bVar3 = F_006dc640((*(undefined * PTR32 *)&gen_args[0]),REFG(int, 0x1379694),(*(int * PTR32 *)&gen_args[1]),&(*(int * PTR32 *)&gen_args[1])), bVar3 != 0))
  {
    uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
    if ((uVar4 == 7) &&
       ((uVar4 = F_006bfcb0(piVar2), (char)uVar4 == '\0' &&
        (bVar3 = F_006dcc00((*(undefined * PTR32 *)&gen_args[0]),iVar1,piVar2,0), bVar3 != 0)))) {
      return 0;
    }
    return 1;
  }
  return 0;
}

/* ref: Client::Game::Event::QuestEventHandler::vf118 */
uint F_006e0ee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e0ee0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int * piVar2;
  int * piVar3;
  byte bVar4;
  uint uVar5;
  undefined2 extraout_var_00 = 0;
  undefined2 uVar8;
  uint uVar6;
  uint uVar7;
  uint3 extraout_var = 0;
  int iVar9;
  
  piVar3 = (*(int * PTR32 *)&gen_args[1]);
  piVar2 = REFG(undefined4, 0x1379694);
  if (REFG(undefined4, 0x1379694) == (int *)0x0) {
    return 0;
  }
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 4))))((*(int * PTR32 *)&gen_args[1]));
  iVar9 = piVar3[0x20];
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(int * PTR32 *)&gen_args[1]), 1, 3),(char)uVar5)));
  iVar1 = piVar3[0x1e];
  uVar5 = ((code *)*(gen_code32 *)(*piVar3 + 0xa8))(piVar3);
  if (((char)(*(int * PTR32 *)&gen_args[1]) == '\x01') && (iVar9 == 0)) {
    iVar9 = 0x4c7250;
  }
  bVar4 = F_006dc4a0((*(undefined * PTR32 *)&gen_args[0]),piVar2,(*(int * PTR32 *)&gen_args[1]),iVar9,iVar1,uVar5,&(*(int *)(gen_frame + 0x8)));
  if (bVar4 != 0) {
    uVar8 = extraout_var_00;
    if ((*(byte *)((*(int *)(gen_frame + 0x8)) + 0x10) & 0x20) != 0) {
      (*(int * PTR32 *)&gen_args[1]) = (int *)piVar2[0x5d];
      uVar5 = 0;
      if (((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) ||
         (uVar5 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2), iVar9 = (int)(*(int * PTR32 *)&gen_args[1]), uVar5 != 1)) {
        iVar9 = 0;
      }
      uVar8 = (undefined2)(uVar5 >> 0x10);
      if ((iVar9 != 0) && (piVar3[0x5d] != 0)) {
        (*(int * PTR32 *)&gen_args[1]) = (int *)0x0;
        uVar5 = F_0042a990(piVar3[0x5d] + 8);
        uVar6 = F_0042a990(iVar9 + 8);
        uVar7 = F_0042a990((*(undefined * PTR32 *)&gen_args[0]) + 0x16c);
        uVar5 = F_00a02e70(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xf8))),"GetBehavior",uVar7,uVar6,uVar5,
                             (uint)*(ushort *)((*(int *)(gen_frame + 0x8)) + 0xe),1);
        if (uVar5 == 0) {
          F_00727460(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xf8))),&(*(int * PTR32 *)&gen_args[1]));
          uVar5 = (uint)extraout_var << 8;
        }
        return CONCAT22((short)(uVar5 >> 0x10),(*((undefined2 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[1]) + 0)))));
      }
    }
    return CONCAT22(uVar8,*(undefined2 *)((*(int *)(gen_frame + 0x8)) + 0xe));
  }
  return 0;
}

/* ref: Client::Game::Event::QuestEventHandler::vf123 */
byte F_006e1020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e1020u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  int * piVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  piVar2 = (*(int * PTR32 *)&gen_args[1]);
  piVar1 = REFG(undefined4, 0x1379694);
  if (**((char * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x16c))) == '\0') {
    return 0;
  }
  if (REFG(undefined4, 0x1379694) != (int *)0x0) {
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 4))))((*(int * PTR32 *)&gen_args[1]));
    iVar8 = piVar2[0x1e];
    iVar7 = piVar2[0x20];
    (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),(char)uVar4);
    uVar5 = ((code *)*(gen_code32 *)(*piVar2 + 0xa8))(piVar2);
    if (((char)uVar4 == '\x01') && (iVar7 == 0)) {
      iVar7 = 0x4c7250;
    }
    bVar3 = F_006dc160((*(undefined * PTR32 *)&gen_args[0]),piVar1,(*(undefined4 *)(gen_frame + 0x4)),iVar7,iVar8,uVar5,8,0);
    if (bVar3 != 0) {
      iVar8 = piVar1[0x5d];
      if ((iVar8 == 0) || (uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1), uVar4 != 1)) {
        iVar8 = 0;
      }
      if ((iVar8 != 0) && (piVar2[0x5d] != 0)) {
        (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((uint)(*(int * PTR32 *)&gen_args[1]) & 0xffffff)));
        uVar4 = F_0042a990(piVar2[0x5d] + 8);
        uVar5 = F_0042a990(iVar8 + 8);
        uVar6 = F_0042a990((*(undefined * PTR32 *)&gen_args[0]) + 0x16c);
        uVar4 = F_00a02e70(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xf8))),"IsEventItemUsable",uVar6,uVar5,uVar4,(*(undefined4 *)&gen_args[2]),1
                            );
        if (uVar4 == 0) {
          F_00a01d80(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xf8))),(int)&(*(int * PTR32 *)&gen_args[1]) + 3);
        }
        return (*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[1]) + 3))));
      }
      return 0;
    }
    return 0;
  }
  return 0;
}

/* ref: Client::Game::Event::QuestEventHandler::vf126 */
uint F_006e1140(unsigned int gen_a0)
{
  GEN_ENTER(0x6e1140u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x150];
  char cVar1;
  int * piVar2;
  int * piVar3;
  byte bVar4;
  char * pcVar5;
  int * piVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  char * pcVar11;
  ulonglong uVar12;
  
  (*(uint *)(gen_frame + 0x148)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x14c);
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = this;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)) = REFG(int, 0x1379694);
  pcVar5 = (char *)0x0;
  if ((REFG(int, 0x1379694) != 0) && (pcVar5 = *(char * PTR32 *)(this + 0x16c), *pcVar5 != '\0')) {
    F_006d82c0((undefined *)this);
    (*(uint *)(gen_frame + 0x2c)) = (uint)*(ushort *)(this + 0x1d4);
    pcVar5 = (char *)F_00a4ffd0();
    uVar10 = 0;
    pcVar11 = pcVar5 + 0x13b4;
    while (*(short *)(pcVar11 + 4) != (short)(*(uint *)(gen_frame + 0x2c))) {
      uVar10 = uVar10 + 1;
      pcVar11 = pcVar11 + 0x10;
      if (0x1d < (int)uVar10) {
        F_00c47745((*(uint *)(gen_frame + 0x148)) ^ (uint)(uint)(gen_frame + 0x14c));
        return (uint)pcVar5;
      }
    }
    (*(uint *)(gen_frame + 0x1c)) = uVar10;
    if (-1 < (int)uVar10) {
      F_00a83f80(&REFG(undefined, 0x14b1258),uVar10);
      F_00a6a810(&REFG(undefined, 0x14b1258),uVar10,(uint)*(ushort *)(this + 0x1d4),this + 0x1d8);
      (*(char *)(gen_frame + 0x33)) = pcVar11[6];
      F_0042b630(((undefined1 *)(gen_frame + 0x34)));
      piVar6 = (int *)F_00744460(this + 0x328,((byte *)(gen_frame + 0x0)),&(*(char *)(gen_frame + 0x33)));
      iVar9 = *piVar6;
      ((byte *)(gen_frame + 0x0))[0xc] = (char)iVar9;
      ((byte *)(gen_frame + 0x0))[0xd] = (char)((uint)iVar9 >> 8);
      ((byte *)(gen_frame + 0x0))[0xe] = (char)((uint)iVar9 >> 0x10);
      ((byte *)(gen_frame + 0x0))[0xf] = (char)((uint)iVar9 >> 0x18);
      if (iVar9 != *(int *)(this + 0x32c)) {
        ((char *)(gen_frame + 0x88))[0] = '\0';
        F_00c48350(((char *)(gen_frame + 0x88)) + 1,0,0xbf);
        piVar6 = ((int *)GEN_TOP(**(int * PTR32 *)(iVar9 + 0x14)));
        if (piVar6 != *(int * PTR32 *)(iVar9 + 0x14)) {
          do {
            bVar4 = *(byte *)(piVar6 + 4);
            uVar10 = (uint)bVar4;
            ((byte *)(gen_frame + 0x0))[8] = bVar4;
            (*(uint *)(gen_frame + 0x2c)) = uVar10;
            if (uVar10 < (uint)((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x35c) - *(int *)(this + 0x358)) / 0x28)) {
              ((byte *)(gen_frame + 0x0))[4] = *(byte *)((int)piVar6 + 0x11);
              (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20)) = piVar6[3];
              (*(uint *)(gen_frame + 0x24)) = 0;
              (*(uint * PTR32 *)(gen_frame + 0x20)) = ((uint *)GEN_TOP((*(int *)(this + 0x358) + 4 + uVar10 * 0x28)));
              do {
                uVar10 = *(*(uint * PTR32 *)(gen_frame + 0x20));
                if (uVar10 == 0) break;
                uVar7 = F_00ab37e0(uVar10);
                if ((uVar7 != 0) && (((char *)(gen_frame + 0x88))[(int)((*(uint *)(gen_frame + 0x24)) + (*(uint *)(gen_frame + 0x2c)) * 8)] == '\0')) {
                  bVar4 = F_00a5f470(*(undefined4 *)(uVar7 + 0x24));
                  ((byte *)(gen_frame + 0x0))[0x18] = bVar4;
                  uVar8 = 0;
                  iVar9 = 0;
                  if (piVar6[5] == 1) {
                    iVar9 = piVar6[6];
                  }
                  else if (piVar6[5] == 3) {
                    uVar8 = piVar6[6];
                  }
                  if ((*(int *)(uVar7 + 0x24) == 9) || (*(int *)(uVar7 + 0x24) == 0x33)) {
                    bVar4 = F_006dc160((*(undefined * PTR32 *)(gen_frame + 0x28)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 24)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20)),
                                         uVar8,iVar9,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)),0);
                    if (bVar4 != 0) {
                      uVar8 = 0xebf9;
LAB_006e13a9: ;
                      F_00a83e20(&REFG(undefined, 0x14b1258),(*(uint *)(gen_frame + 0x1c)),uVar10,uVar8,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),uVar7,
                                   (uint)((*(char *)(gen_frame + 0x33)) == -1));
                    }
                  }
                  else {
                    if ((*(int *)(uVar7 + 0x14) != (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20))) ||
                       ((uVar8 != 0 && (uVar8 != uVar10)))) goto LAB_006e1369;
                    uVar8 = ((code *)*(gen_code32 *)(*(int *)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x204))
                                      ((*(undefined * PTR32 *)(gen_frame + 0x28)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 24)),*(undefined4 *)(uVar7 + 0x14),uVar10
                                       ,*(undefined4 *)(uVar7 + 0x14));
                    if (uVar8 != 0) goto LAB_006e13a9;
                  }
                  ((char *)(gen_frame + 0x88))[(int)((*(uint *)(gen_frame + 0x24)) + (*(uint *)(gen_frame + 0x2c)) * 8)] = '\x01';
                  break;
                }
LAB_006e1369: ;
                (*(uint * PTR32 *)(gen_frame + 0x20)) = (*(uint * PTR32 *)(gen_frame + 0x20)) + 1;
                uVar10 = (*(uint *)(gen_frame + 0x24)) + 1;
                (*(uint *)(gen_frame + 0x24)) = uVar10;
              } while (uVar10 < 8);
            }
            if (*(char *)((int)piVar6 + 0x25) == '\0') {
              piVar2 = (int *)piVar6[2];
              if (*(char *)((int)piVar2 + 0x25) == '\0') {
                cVar1 = *(char *)(*piVar2 + 0x25);
                piVar6 = piVar2;
                piVar2 = (int *)*piVar2;
                while (cVar1 == '\0') {
                  cVar1 = *(char *)(*piVar2 + 0x25);
                  piVar6 = piVar2;
                  piVar2 = (int *)*piVar2;
                }
              }
              else {
                cVar1 = *(char *)(piVar6[1] + 0x25);
                piVar3 = (int *)piVar6[1];
                piVar2 = piVar6;
                while ((piVar6 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar6[2]))) {
                  cVar1 = *(char *)(piVar6[1] + 0x25);
                  piVar3 = (int *)piVar6[1];
                  piVar2 = piVar6;
                }
              }
            }
            this = (*(undefined * PTR32 *)(gen_frame + 0x28));
          } while (piVar6 != *((int * PTR32 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)) + 0x14))));
        }
        REFG(undefined4, 0x14b0ee0) = 1;
        uVar10 = F_00a679e0(&REFG(undefined, 0x14ac288));
        if (uVar10 == 1) {
          *(undefined4 *)&REFG(undefined, 0x14afd2c) = 1;
        }
      }
      uVar12 = F_0042c880(((undefined1 *)(gen_frame + 0x34)));
      pcVar5 = (char *)uVar12;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x148)) ^ (uint)(uint)(gen_frame + 0x14c));
  return (uint)pcVar5;
}

/* ref: Client::Game::Event::QuestEventHandler::vf135 */
byte F_006e14b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6e14b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  iVar3 = REFG(int, 0x1379694);
  if (((this[0x44] == (undefined1)0x1) &&
      (piVar1 = *(int * PTR32 *)(this + 0x50), piVar1 != (int *)0x0)) && (REFG(int, 0x1379694) != 0)) {
    uVar5 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    iVar7 = piVar1[0x20];
    iVar2 = piVar1[0x1e];
    (*(undefined4 *)(gen_frame + 0xc)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0xc)), 1, 3),(char)uVar5);
    uVar6 = ((code *)*(gen_code32 *)(*piVar1 + 0xa8))(piVar1);
    if (((char)uVar5 == '\x01') && (iVar7 == 0)) {
      iVar7 = 0x4c7250;
    }
    bVar4 = F_006dc160(this,iVar3,(*(undefined4 *)(gen_frame + 0xc)),iVar7,iVar2,uVar6,2,0);
    if (bVar4 == 0) {
      uVar5 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
      iVar7 = piVar1[0x1e];
      iVar8 = piVar1[0x20];
      (*(undefined4 *)(gen_frame + 0x10)) = CONCAT31((int3)((uint)iVar2 >> 8),(char)uVar5);
      uVar6 = ((code *)*(gen_code32 *)(*piVar1 + 0xa8))(piVar1);
      if (((char)uVar5 == '\x01') && (iVar8 == 0)) {
        iVar8 = 0x4c7250;
      }
      bVar4 = F_006dc160(this,iVar3,(*(undefined4 *)(gen_frame + 0x10)),iVar8,iVar7,uVar6,8,0);
      if (bVar4 == 0) goto LAB_006e1591;
    }
    return 0;
  }
LAB_006e1591: ;
  return this[0x44] != (undefined1)0x7;
}

/* ref: FUN_006e15b0 */
uint F_006e15b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e15b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  undefined * this_01;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  uint uVar3;
  uint uVar4;
  undefined1 * puVar5;
  int iVar6;
  
  uVar2 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
  if (uVar2 == 7) {
    bVar1 = F_00ae20f0(param_1);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 == 3) && (this_00 = (undefined *)param_1[0x3c], this_00 != (undefined *)0x0)) {
      bVar1 = F_005d5fe0(this_00);
      uVar2 = CONCAT31(extraout_var_00,bVar1);
      if (bVar1 != 0) {
        (*(int *)(gen_frame + 0x8)) = REFG(int, 0x1379694);
        uVar2 = 0;
        if (REFG(int, 0x1379694) != 0) {
          (*(uint *)(gen_frame + 0x4)) = 0;
          if (param_1[0x47] == 0) {
            bVar1 = F_00a5f060(param_1);
            if ((bVar1 == 0) || (bVar1 = F_006dcc00(this,(*(int *)(gen_frame + 0x8)),param_1,0), bVar1 != 0)) {
              bVar1 = F_005dbc90(this_00,1);
              if (bVar1 != 0) {
                (*(uint *)(gen_frame + 0x4)) = 2;
              }
            }
            else {
              bVar1 = F_005dbc90(this_00,0);
              if (bVar1 != 0) {
                (*(uint *)(gen_frame + 0x4)) = 1;
              }
            }
            uVar2 = F_006bfcb0(param_1);
            if (((char)uVar2 != '\0') && (**(char * PTR32 *)((int)this + 0x16c) != '\0')) {
              uVar2 = F_006bcb60((*(int *)(gen_frame + 0x8)));
              if ((uVar2 != 0) && (param_1[0x5d] != 0)) {
                uVar3 = F_0042a990(param_1[0x5d] + 8);
                uVar2 = F_0042a990(uVar2 + 8);
                uVar4 = F_0042a990((int)this + 0x16c);
                uVar2 = F_00a02c60(*(undefined * PTR32 *)((int)this + 0xf8),"GetGimmickState",uVar4,uVar2,
                                     uVar3,2);
                if (uVar2 == 0) {
                  puVar5 = (undefined1 *)((int)&(*(int *)(gen_frame + 0x8)) + 1);
                  iVar6 = 2;
                  do {
                    this_01 = *(undefined * PTR32 *)((int)this + 0xf8);
                    *puVar5 = 0;
                    F_00a01d80(this_01,puVar5);
                    puVar5 = puVar5 + -1;
                    iVar6 = iVar6 + -1;
                  } while (iVar6 != 0);
                  uVar2 = 3;
                  iVar6 = 0;
                  do {
                    uVar3 = uVar2 - 1;
                    if (*(char *)((int)&(*(int *)(gen_frame + 0x8)) + iVar6) == '\0') {
                      uVar3 = uVar2;
                    }
                    bVar1 = F_005dbc90(this_00,uVar3);
                    if (bVar1 != 0) {
                      (*(uint *)(gen_frame + 0x4)) = (uint)(ushort)((ushort)(*(uint *)(gen_frame + 0x4)) | 1 << ((byte)uVar3 & 0x1f));
                    }
                    uVar2 = uVar2 + 2;
                    iVar6 = iVar6 + 1;
                  } while (uVar2 < 7);
                }
              }
            }
          }
          else {
            bVar1 = F_005dbc90(this_00,1);
            if (bVar1 != 0) {
              (*(uint *)(gen_frame + 0x4)) = 2;
            }
            bVar1 = F_005dbc90(this_00,3);
            if (bVar1 != 0) {
              (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) | 8;
            }
            bVar1 = F_005dbc90(this_00,5);
            if (bVar1 != 0) {
              uVar2 = F_00ae2030(param_1,(*(uint *)(gen_frame + 0x4)) | 0x20);
              return uVar2;
            }
          }
          uVar2 = F_00ae2030(param_1,(*(uint *)(gen_frame + 0x4)));
        }
      }
    }
  }
  return uVar2;
}

/* ref: FUN_006e17b0 */
uint F_006e17b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e17b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_006d8b60(this,param_1);
  if ((uVar1 != 0) &&
     ((((*(byte *)((int)this + 800) & 2) == 0 || ((uVar1 & 0x500) != 0)) || ((uVar1 & 0x70) != 0))))
  {
    return 0;
  }
  return 1;
}

/* ref: FUN_006e17f0 */
byte F_006e17f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6e17f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  int iVar1;
  int * piVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  piVar2 = (*(int * PTR32 *)&gen_args[2]);
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 4))))((*(int * PTR32 *)&gen_args[2]));
  ((code *)*(gen_code32 *)(*piVar2 + 0xa8))(piVar2);
  if ((char)uVar4 != '\a') {
    return (byte)(*(undefined4 *)&gen_args[3]);
  }
  (*(undefined4 *)&gen_args[3]) = CONCAT13(**((char * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x16c))) != '\0',(undefined3)(*(undefined4 *)&gen_args[3]));
  bVar3 = F_006d9290((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),1);
  if ((bVar3 != 0) && (bVar3 = F_006d9430((*(undefined * PTR32 *)&gen_args[0]),piVar2), bVar3 != 0)) {
    return 0;
  }
  (*(int * PTR32 *)&gen_args[2]) = (int *)0x0;
  bVar3 = F_006dc640((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),piVar2,&(*(int * PTR32 *)&gen_args[2]));
  if (bVar3 != 0) {
    if ((*((byte *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x10))) & 8) == 0) {
      return *(byte *)((int)piVar2 + 0x8e) & 1;
    }
    iVar1 = piVar2[0x5d];
    uVar4 = F_006bcb60((*(undefined4 *)&gen_args[1]));
    if ((((*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[3]) + 3)) != '\0') && (uVar4 != 0)) && (iVar1 != 0)) {
      uVar5 = F_0042a990(iVar1 + 8);
      uVar4 = F_0042a990(uVar4 + 8);
      uVar6 = F_0042a990((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x16c);
      uVar4 = F_00a02c60(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8))),"IsTargetingPossible",uVar6,uVar4,uVar5,1);
      if (uVar4 == 0) {
        (*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[3]) + 3)) = 0;
        bVar3 = F_00a01d80(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8))),(int)&(*(undefined4 *)&gen_args[3]) + 3);
        if (bVar3 != 0) {
          return (*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[3]) + 3));
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_006e1910 */
uint F_006e1910(unsigned int gen_a0)
{
  GEN_ENTER(0x6e1910u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  int iVar4;
  undefined * pvVar5;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[144])REFP(0x10ba1bc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xf8) = (*(undefined * PTR32 (*)[2])REFP(0x10ba1b0));
  if (REFG(undefined4, 0x1488760) == this) {
    REFG(undefined4, 0x1488760) = (undefined *)0x0;
  }
  if (*(int *)((int)this + 0x1c00) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x1c08);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,*(int *)((int)this + 0x1c00));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x1c00);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x1c00) = 0;
    }
  }
  if (*(int *)((int)this + 0x1c04) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x1c0c);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,*(int *)((int)this + 0x1c04));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x1c04);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x1c04) = 0;
    }
  }
  iVar4 = 9;
  pvVar5 = (undefined *)((int)this + 0x1bdc);
  do {
    pvVar5 = (undefined *)((int)pvVar5 + -0xa8);
    F_0042c880(pvVar5);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_0042c880((undefined *)((int)this + 0x14dc));
  iVar4 = 0x27;
  pvVar5 = (undefined *)((int)this + 0x14e4);
  do {
    pvVar5 = (undefined *)((int)pvVar5 + -0x7c);
    F_0042c880(pvVar5);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_0042c880((undefined *)((int)this + 0x10c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xf8) =
       (*(undefined * PTR32 (*)[2])REFP(0x10b815c));
  uVar3 = F_006df660(this);
  return uVar3;
}

/* ref: Client::Game::Event::ShopEventHandler::vf115 */
ushort F_006e1a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e1a10u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  int * piVar3;
  short sVar4;
  uint uVar5;
  byte bVar6;
  
  piVar3 = (*(int * PTR32 *)&gen_args[1]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  iVar1 = *(*(int * PTR32 *)&gen_args[1]);
  iVar2 = (*(int * PTR32 *)&gen_args[1])[0x1e];
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = *(undefined * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[0x20]));
  uVar5 = ((code *)*(gen_code32 *)(iVar1 + 0xa8))(piVar3);
  uVar5 = ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3,(*(int * PTR32 *)&gen_args[1]),iVar2,uVar5);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((code *)*(gen_code32 *)((*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x200))((*(undefined * PTR32 *)&gen_args[0]),uVar5)));
  iVar1 = REFG(int, 0x1488344);
  if ((*(int * PTR32 *)&gen_args[1]) != (int *)0x0) {
    F_007491b0((undefined *)(REFG(int, 0x1488344) + 0x264),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(int * PTR32 *)&gen_args[1]));
    if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *(undefined * PTR32 *)(iVar1 + 0x268)) {
      sVar4 = *(short *)((*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10);
      (*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[1]) + 1)))) = (byte)((ushort)sVar4 >> 8);
      bVar6 = (*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[1]) + 1))));
      goto LAB_006e1a92;
    }
  }
  sVar4 = 1;
  bVar6 = 0;
LAB_006e1a92: ;
  return sVar4 << 8 | (ushort)bVar6;
}

/* ref: FUN_006e1ab0 */
byte F_006e1ab0(unsigned int gen_a0)
{
  GEN_ENTER(0x6e1ab0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xf0];
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  undefined4 uVar5;
  
  (*(uint *)(gen_frame + 0xe8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xec);
  F_0042cc20(((undefined1 *)(gen_frame + 0x64)),&REFG(undefined, 0x10b3a6a),REFG(undefined4, 0x108cc50));
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)),&REFG(undefined, 0x10b3a6b),REFG(undefined4, 0x108cc50));
  F_00ab0230(0x18f48,((undefined1 *)(gen_frame + 0x64)));
  F_00ab0230(0x18f49,((undefined1 *)(gen_frame + 0x10)));
  (*(uint *)(gen_frame + 0x8)) = (uint)*(ushort *)((int)this + 0x1d4);
  F_00744670((undefined *)((int)this + 0x344),&(*(int *)(gen_frame + 0xc)),&(*(uint *)(gen_frame + 0x8)));
  iVar1 = *(int *)((*(int *)(gen_frame + 0xc)) + 0x18);
  if (iVar1 != 0) {
    ((int *)(gen_frame + 0xb8))[0] = iVar1;
    ((uint *)(gen_frame + 0xcc))[0] = (uint)*(ushort *)((*(int *)(gen_frame + 0xc)) + 0x28);
    ((undefined1 *)(gen_frame + 0xe0))[0] = *(undefined1 *)((*(int *)(gen_frame + 0xc)) + 0x31);
  }
  uVar4 = (uint)(iVar1 != 0);
  if (*(int *)((*(int *)(gen_frame + 0xc)) + 0x1c) != 0) {
    ((int *)(gen_frame + 0xb8))[(int)(uVar4)] = *(int *)((*(int *)(gen_frame + 0xc)) + 0x1c);
    ((uint *)(gen_frame + 0xcc))[(int)(uVar4)] = (uint)*(ushort *)((*(int *)(gen_frame + 0xc)) + 0x2a);
    ((undefined1 *)(gen_frame + 0xe0))[(int)(uVar4)] = *(undefined1 *)((*(int *)(gen_frame + 0xc)) + 0x32);
    uVar4 = uVar4 + 1;
  }
  if (*(int *)((*(int *)(gen_frame + 0xc)) + 0x20) != 0) {
    ((int *)(gen_frame + 0xb8))[(int)(uVar4)] = *(int *)((*(int *)(gen_frame + 0xc)) + 0x20);
    ((uint *)(gen_frame + 0xcc))[(int)(uVar4)] = (uint)*(ushort *)((*(int *)(gen_frame + 0xc)) + 0x2c);
    ((undefined1 *)(gen_frame + 0xe0))[(int)(uVar4)] = *(undefined1 *)((*(int *)(gen_frame + 0xc)) + 0x33);
    uVar4 = uVar4 + 1;
  }
  if (*(int *)((*(int *)(gen_frame + 0xc)) + 0x24) != 0) {
    ((int *)(gen_frame + 0xb8))[(int)(uVar4)] = *(int *)((*(int *)(gen_frame + 0xc)) + 0x24);
    ((uint *)(gen_frame + 0xcc))[(int)(uVar4)] = (uint)*(ushort *)((*(int *)(gen_frame + 0xc)) + 0x2e);
    ((undefined1 *)(gen_frame + 0xe0))[(int)(uVar4)] = *(undefined1 *)((*(int *)(gen_frame + 0xc)) + 0x34);
    uVar4 = uVar4 + 1;
  }
  F_00ba07c0(&REFG(undefined, 0x14b0f2c),((int *)(gen_frame + 0xb8)),((uint *)(gen_frame + 0xcc)),((undefined1 *)(gen_frame + 0xe0)),uVar4,this);
  bVar2 = F_00ba05d0(&REFG(undefined, 0x14b0f2c));
  if (bVar2 != 0) {
    F_00a6e080(&REFG(undefined, 0x14a9e40),0x44,0,0);
    piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar5 = 0x1d;
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x48))(piVar3);
    piVar3 = (int *)F_00763050(uVar4,uVar5);
    ((code *)*(gen_code32 *)(*piVar3 + 0x40))(piVar3,4,((undefined1 *)(gen_frame + 0x64)),((undefined1 *)(gen_frame + 0x10)),1);
    F_0042c880(((undefined1 *)(gen_frame + 0x10)));
    F_0042c880(((undefined1 *)(gen_frame + 0x64)));
    F_00c47745((*(uint *)(gen_frame + 0xe8)) ^ (uint)(uint)(gen_frame + 0xec));
    return 1;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x10)));
  F_0042c880(((undefined1 *)(gen_frame + 0x64)));
  F_00c47745((*(uint *)(gen_frame + 0xe8)) ^ (uint)(uint)(gen_frame + 0xec));
  return 0;
}

/* ref: FUN_006e1c70 */
uint F_006e1c70(unsigned int gen_a0)
{
  GEN_ENTER(0x6e1c70u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  puVar3 = (undefined4 *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  if ((undefined *)*puVar3 != (undefined *)0x0) {
    bVar1 = F_006e1ab0((undefined *)*puVar3);
    if (bVar1 != 0) {
      uVar2 = F_00a02290(((byte *)(gen_frame + 0xc)),1);
      F_00a02240(((byte *)(gen_frame + 0xc)));
      return uVar2;
    }
    F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006e1cf0 */
uint F_006e1cf0(unsigned int gen_a0)
{
  GEN_ENTER(0x6e1cf0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  undefined4 * puVar2;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  puVar2 = (undefined4 *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  if ((undefined *)*puVar2 != (undefined *)0x0) {
    F_006dd050((undefined *)*puVar2);
    uVar1 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
    F_00a02240(((byte *)(gen_frame + 0xc)));
    return uVar1;
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: FUN_006e1d50 */
uint F_006e1d50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6e1d50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  
  uVar1 = *(ushort *)((int)this + 0x1d4);
  uVar6 = F_00a4ffd0();
  uVar6 = uVar6 + 0x1684;
  iVar7 = 0;
  do {
    if (*(ushort *)(uVar6 + 4) == uVar1) {
      if (-1 < iVar7) {
        uVar6 = *(byte *)(uVar6 + 8) & 7;
        (*(uint *)(gen_frame + 0x8)) = (uint)uVar1;
        F_00744670((undefined *)((int)this + 0x344),&(*(int *)(gen_frame + 0x4)),&(*(uint *)(gen_frame + 0x8)));
        uVar1 = *(ushort *)((*(int *)(gen_frame + 0x4)) + 0x2c);
        uVar2 = *(ushort *)((*(int *)(gen_frame + 0x4)) + 0x2e);
        uVar3 = *(ushort *)((*(int *)(gen_frame + 0x4)) + 0x2a);
        uVar4 = *(ushort *)((*(int *)(gen_frame + 0x4)) + 0x28);
        *param_1 = uVar6;
        bVar5 = F_006c2400(uVar6,(uint)uVar2 + (uint)uVar1 + (uint)uVar3 + (uint)uVar4);
        *param_2 = (uint)bVar5;
        uVar6 = F_006c23a0((*(int *)(gen_frame + 0x4)) + 0x10);
        *param_3 = uVar6;
      }
      return uVar6;
    }
    iVar7 = iVar7 + 1;
    uVar6 = uVar6 + 0x10;
  } while (iVar7 < 0x10);
  return uVar6;
}

/* ref: FUN_006e1e00 */
uint F_006e1e00(unsigned int gen_a0)
{
  GEN_ENTER(0x6e1e00u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  undefined4 * puVar2;
  
  F_00a02210(((byte *)(gen_frame + 0x0)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0x0)),1);
  puVar2 = (undefined4 *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),1,uVar1);
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  if ((undefined *)*puVar2 != (undefined *)0x0) {
    F_006e1d50((undefined *)*puVar2,&(*(undefined4 *)(gen_frame + 0x28)),&(*(undefined4 *)(gen_frame + 0x24)),&(*(undefined4 *)(gen_frame + 0x20)));
  }
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),(*(undefined4 *)(gen_frame + 0x28)));
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),(*(undefined4 *)(gen_frame + 0x24)));
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),(*(undefined4 *)(gen_frame + 0x20)));
  F_00a02240(((byte *)(gen_frame + 0x0)));
  return 3;
}

/* ref: FUN_006e1e90 */
byte F_006e1e90(unsigned int gen_a0)
{
  GEN_ENTER(0x6e1e90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint * puVar4;
  int iVar5;
  byte bVar6;
  
  uVar1 = *(ushort *)((int)this + 0x1d4);
  bVar6 = 0;
  uVar2 = F_00a4ffd0();
  iVar5 = 0;
  iVar3 = uVar2 + 0x1684;
  do {
    if (*(ushort *)(iVar3 + 4) == uVar1) {
      if (-1 < iVar5) {
        bVar6 = *(byte *)(iVar3 + 8) >> 5;
      }
      break;
    }
    iVar5 = iVar5 + 1;
    iVar3 = iVar3 + 0x10;
  } while (iVar5 < 0x10);
  (*(uint *)(gen_frame + 0x8)) = (uint)uVar1;
  F_00744670((undefined *)((int)this + 0x344),&(*(uint *)(gen_frame + 0x4)),&(*(uint *)(gen_frame + 0x8)));
  uVar2 = ((uint)*(byte *)((*(uint *)(gen_frame + 0x4)) + 0x30) - (uint)bVar6) + 1;
  (*(uint *)(gen_frame + 0x4)) = uVar2;
  (*(uint *)(gen_frame + 0x8)) = 0;
  puVar4 = &(*(uint *)(gen_frame + 0x4));
  if ((int)uVar2 < 1) {
    puVar4 = &(*(uint *)(gen_frame + 0x8));
  }
  return (byte)*puVar4;
}

/* ref: FUN_006e1f10 */
uint F_006e1f10(unsigned int gen_a0)
{
  GEN_ENTER(0x6e1f10u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  puVar3 = (undefined4 *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  uVar2 = 0;
  if ((undefined *)*puVar3 != (undefined *)0x0) {
    bVar1 = F_006e1e90((undefined *)*puVar3);
    uVar2 = (uint)bVar1;
  }
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar2);
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006e1f70 */
uint F_006e1f70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e1f70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  char cVar2;
  ushort uVar3;
  double dVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 * puVar9;
  undefined4 * PTR32 * ppuVar10;
  int iVar11;
  undefined4 * puVar12;
  int iVar13;
  undefined4 * puVar14;
  ushort uVar15;
  float10 fVar16;
  
  (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = this;
  uVar6 = F_00a4ffd0();
  uVar7 = F_00ab3330(param_1 & 0xffff);
  uVar8 = 0;
  if (uVar7 != 0) {
    iVar11 = 0;
    iVar13 = uVar6 + 0x1684;
    while (uVar15 = (ushort)param_1, *(ushort *)(iVar13 + 4) != uVar15) {
      iVar11 = iVar11 + 1;
      iVar13 = iVar13 + 0x10;
      if (0xf < iVar11) {
        return uVar7;
      }
    }
    (*(uint *)(gen_frame + 0x14)) = 0;
    uVar8 = F_00ab21d0((uint)*(byte *)(uVar7 + 0x55));
    if (uVar8 != 0) {
      uVar6 = 0;
      do {
        if (*(char *)(uVar8 + 4 + uVar6) != '\0') {
          (*(uint *)(gen_frame + 0x14)) = uVar6;
          break;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < 0x1d);
    }
    uVar8 = F_00a68280(&REFG(undefined1, 0x14ab070),(*(uint *)(gen_frame + 0x14)),0);
    bVar1 = *(byte *)(iVar13 + 8);
    uVar3 = *(ushort *)(iVar13 + 10);
    (*(uint *)(gen_frame + 0xc)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0xc)), 1, 3),REFG(undefined1, 0x14b4ec1)) & 0xffffff01;
    puVar14 = ((undefined4 *)GEN_TOP(((undefined4 *)(*(undefined4 * PTR32 *)(gen_frame + 0x18))[0xd2])[1]));
    cVar2 = *(char *)((int)puVar14 + 0x9d);
    puVar12 = (undefined4 *)(*(undefined4 * PTR32 *)(gen_frame + 0x18))[0xd2];
    while (cVar2 == '\0') {
      if (*(ushort *)(puVar14 + 3) < uVar15) {
        puVar9 = (undefined4 *)puVar14[2];
        puVar14 = puVar12;
      }
      else {
        puVar9 = (undefined4 *)*puVar14;
      }
      puVar12 = puVar14;
      puVar14 = puVar9;
      cVar2 = *(char *)((int)puVar9 + 0x9d);
    }
    puVar14 = (*(undefined4 * PTR32 *)(gen_frame + 0x18)) + 0xd2;
    (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = puVar12;
    if ((puVar12 == (undefined4 *)*puVar14) || (uVar15 < *(ushort *)(puVar12 + 3))) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (undefined4 *)*puVar14;
      ppuVar10 = &(*(undefined4 * PTR32 *)(gen_frame + 0x10));
    }
    else {
      ppuVar10 = (undefined4 * PTR32 *)&(*(undefined4 * PTR32 *)(gen_frame + 0x18));
    }
    puVar14 = *ppuVar10;
    puVar14 = ((undefined4 *)GEN_TOP(((uint)*(ushort *)((int)puVar14 + 0x2e) + (uint)*(ushort *)(puVar14 + 0xb) +
               (uint)*(ushort *)((int)puVar14 + 0x2a) + (uint)*(ushort *)(puVar14 + 10))));
    uVar6 = F_00ab3300(0x25);
    if (uVar6 == 0) {
      bVar5 = 0;
    }
    else {
      bVar5 = *(byte *)(uVar6 + 4);
    }
    puVar12 = ((undefined4 *)GEN_TOP(((uint)bVar5 * (uint)(bVar1 & 7))));
    (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar12;
    (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar14;
    dVar4 = (double)(int)((int)(uintptr_t)puVar12) / (double)(int)puVar14;
    fVar16 = F_00c4ed10((uint)(ulonglong)gen_d2bits(dVar4),
                          (int)((ulonglong)gen_d2bits(dVar4) >> 0x20));
    (*(undefined2 *)((char *)&(*(undefined4 * PTR32 *)(gen_frame + 0x18)) + 2)) = ((undefined2)0x27f);
    (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = ((undefined4 *)GEN_TOP(CONCAT22(((undefined2)0x27f),(*(undefined2 *)((char *)&(*(undefined4 * PTR32 *)(gen_frame + 0x18)) + 0)))));
    (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (undefined4 *)(((undefined2)0x27f) | 0xc00);
    (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (undefined4 *)(int)TRUNC(fVar16);
    uVar8 = F_006d6580(param_1,(uint)uVar3,uVar8 & 0xffff,(*(uint *)(gen_frame + 0xc)),(uint)REFG(undefined1, 0x14ab29a),param_2,0,0,
                         0,0,(*(uint *)(gen_frame + 0x14)),0,(*(undefined4 * PTR32 *)(gen_frame + 0x10)),0);
  }
  return uVar8;
}

/* ref: FUN_006e2150 */
byte F_006e2150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6e2150u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  undefined4 uVar2;
  
  if ((char)(*(int *)&gen_args[4]) != '\x02') {
    return 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  F_006d7550(&(*(int *)&gen_args[4]),(*(undefined * PTR32 *)&gen_args[1]));
  if ((*(int *)&gen_args[4]) != *(int *)(iVar1 + 0x30)) {
    *(undefined1 *)((*(int *)&gen_args[4]) + 0x7e) = 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  F_006d7550(&(*(int *)&gen_args[4]),(*(undefined * PTR32 *)&gen_args[1]));
  if ((*(int *)&gen_args[4]) != *(int *)(iVar1 + 0x30)) {
    *(undefined1 *)((*(int *)&gen_args[4]) + 0x7f) = 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  F_006d7550(&(*(int *)&gen_args[4]),(*(undefined * PTR32 *)&gen_args[1]));
  if ((*(int *)&gen_args[4]) != *(int *)(iVar1 + 0x30)) {
    *(undefined1 *)((*(int *)&gen_args[4]) + 0x80) = 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  F_006d7550(&(*(int *)&gen_args[4]),(*(undefined * PTR32 *)&gen_args[1]));
  if ((*(int *)&gen_args[4]) != *(int *)(iVar1 + 0x30)) {
    *(undefined1 *)((*(int *)&gen_args[4]) + 0x81) = 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  F_006d7550(&(*(int *)&gen_args[4]),(*(undefined * PTR32 *)&gen_args[1]));
  if ((*(int *)&gen_args[4]) != *(int *)(iVar1 + 0x30)) {
    *(undefined1 *)((*(int *)&gen_args[4]) + 0x82) = 0;
  }
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0x2dd8))) = (*(undefined4 * PTR32 *)&gen_args[3])[1];
  uVar2 = *(*(undefined4 * PTR32 *)&gen_args[3]);
  (*(int *)&gen_args[4]) = REFG(int, 0x1488344);
  F_00aa4270((*(undefined * PTR32 *)&gen_args[1]),uVar2,0,0);
  (*(uint *)(gen_frame + 0x14)) = (*(uint *)&gen_args[2]) & 0xffff;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[1]);
  (*(undefined4 *)(gen_frame + 0xc)) = uVar2;
  (*(int *)(gen_frame + 0x10)) = (int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28;
  (*(undefined2 *)(gen_frame + 0x18)) = 0;
  F_00746770((undefined *)((*(int *)&gen_args[4]) + 0x6f0),*(undefined4 *)((*(int *)&gen_args[4]) + 0x6f0),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  return 1;
}

/* ref: Client::Game::Event::GCShopEventHandler::vf6 */
uint F_006e2260(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x6e2260u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  memcpy(&gen_args[3], &gen_a3, sizeof gen_a3);
  memcpy(&gen_args[4], &gen_a4, sizeof gen_a4);
  gen_args[5] = gen_a5;
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  
  uVar4 = (*(uint *)&gen_args[5]);
  F_006df030(*((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))),(*(float *)&gen_args[1]),(*(float *)&gen_args[2]),(*(float *)&gen_args[3]),(*(float *)&gen_args[4]),(*(uint *)&gen_args[5]),REFG(int, 0x1379694),1);
  bVar3 = F_006db1d0((*(undefined * PTR32 *)&gen_args[0]),uVar4);
  iVar2 = REFG(int, 0x1379694);
  uVar4 = CONCAT31(extraout_var,bVar3);
  if (REFG(int, 0x1379694) != 0) {
    iVar1 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4)));
    F_006d7550(&(*(uint *)&gen_args[5]),REFG(int, 0x1379694));
    if ((*(uint *)&gen_args[5]) != *(uint *)(iVar1 + 0x30)) {
      *(undefined1 *)((*(uint *)&gen_args[5]) + 0x7e) = 0;
    }
    iVar1 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4)));
    F_006d7550(&(*(uint *)&gen_args[5]),iVar2);
    uVar4 = (*(uint *)&gen_args[5]);
    if ((*(uint *)&gen_args[5]) != *(uint *)(iVar1 + 0x30)) {
      *(undefined1 *)((*(uint *)&gen_args[5]) + 0x7f) = 0;
    }
  }
  return uVar4;
}

/* ref: Client::Game::Event::WarpEventHandler::vf6 */
unsigned int F_006e22d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e22d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  
  F_006db1d0((undefined *)this,param_1);
  F_006dd780(this_00,param_1);
  return 0;
}

/* ref: Client::Game::Event::WarpEventHandler::vf18 */
unsigned int F_006e22f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e22f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  
  F_006db430((undefined *)this,param_1);
  F_006dd780(this_00,REFG(undefined4, 0x1379694));
  return 0;
}

/* ref: Client::Game::Event::StoryEventHandler::vf116 */
byte F_006e2310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e2310u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  ushort uVar5;
  
  if (REFG(int, 0x1379694) == 0) {
    return 0;
  }
  uVar5 = F_006dd800((*(undefined * PTR32 *)&gen_args[0]),REFG(int, 0x1379694));
  (*(int *)&gen_args[1]) = *(undefined4 *)((*(int *)&gen_args[1]) + 0x80);
  F_00745bd0((*(undefined * PTR32 *)&gen_args[0]) + 0x254,&(*(int * PTR32 *)(gen_frame + 0x4)),&(*(int *)&gen_args[1]));
  piVar3 = (*(int * PTR32 *)(gen_frame + 0x4));
  while( true ) {
    if (piVar3 == (*(int * PTR32 *)(gen_frame + 0x8))) {
      return 0;
    }
    if ((*(ushort *)(piVar3 + 4) <= uVar5) && (uVar5 < *(ushort *)((int)piVar3 + 0x12))) break;
    if (*(char *)((int)piVar3 + 0x15) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x15) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x15);
        piVar3 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          piVar3 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x15);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((piVar3 = piVar4, cVar1 == '\0' && (piVar2 == (int *)piVar3[2]))) {
          cVar1 = *(char *)(piVar3[1] + 0x15);
          piVar4 = (int *)piVar3[1];
          piVar2 = piVar3;
        }
      }
    }
  }
  return 1;
}

/* ref: Client::Game::Event::SpecialShopEventHandler::vf6 */
uint F_006e23d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e23d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int iVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  float in_XMM1_Da = 0;
  float in_XMM2_Da = 0;
  float in_XMM3_Da = 0;
  float in_XMM7_Da = 0;
  
  bVar2 = F_006db1d0((undefined *)this,param_1);
  iVar1 = REFG(int, 0x1379694);
  uVar3 = CONCAT31(extraout_var,bVar2);
  if (REFG(int, 0x1379694) != 0) {
    (*(int *)(gen_frame + 0x58)) = *(int *)(this + 4);
    F_006d7550(&(*(int *)(gen_frame + 0x5c)),REFG(int, 0x1379694));
    if ((*(int *)(gen_frame + 0x5c)) != *(int *)((*(int *)(gen_frame + 0x58)) + 0x30)) {
      *(undefined1 *)((*(int *)(gen_frame + 0x5c)) + 0x7e) = 0;
    }
    (*(int *)(gen_frame + 0x5c)) = *(int *)(this + 4);
    F_006d7550(&(*(int *)(gen_frame + 0x58)),iVar1);
    if ((*(int *)(gen_frame + 0x58)) != *(int *)((*(int *)(gen_frame + 0x5c)) + 0x30)) {
      *(undefined1 *)((*(int *)(gen_frame + 0x58)) + 0x7f) = 0;
    }
    uVar3 = ((code *)*(gen_code32 *)(*param_1 + 0xb8))(param_1);
    if ((char)uVar3 != '\0') {
      (*(undefined4 *)(gen_frame + 0x2c)) = REFG(float, 0x1087f04);
      (*(undefined4 *)(gen_frame + 0x30)) = REFG(float, 0x1375ac0);
      (*(undefined4 *)(gen_frame + 0x24)) = REFG(undefined4, 0x1323520);
      (*(undefined4 *)(gen_frame + 0x34)) = REFG(float, 0x1375ac4);
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x109c94c));
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
      (*(undefined4 *)(gen_frame + 0x38)) = REFG(float, 0x1375ac8);
      (*(undefined4 *)(gen_frame + 0x40)) = 0;
      F_00aa0000(param_1,0x2ff,0,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),0,0);
      uVar3 = F_006df030(*(undefined4 *)(this + 4),in_XMM1_Da,in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,
                           param_1,REFG(int, 0x1379694),1);
    }
  }
  return uVar3;
}

/* ref: Client::Game::Event::EventHandlerModule::vf6 */
byte F_006e24f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6e24f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  
  if ((short)param_2 == 7) {
    F_006de0e0(this,0xffff);
  }
  piVar5 = ((int *)GEN_TOP(**(int * PTR32 *)(this + 0x30)));
  if (piVar5 != *(int * PTR32 *)(this + 0x30)) {
    do {
      uVar4 = ((code *)*(gen_code32 *)(*(int *)piVar5[4] + 200))
                        ((int *)piVar5[4],param_1,param_2,param_3,param_4);
      if ((char)uVar4 != '\0') {
        return 1;
      }
      if (*(char *)((int)piVar5 + 0x15) == '\0') {
        piVar2 = (int *)piVar5[2];
        if (*(char *)((int)piVar2 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          piVar5 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x15);
            piVar5 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar5[1] + 0x15);
          piVar3 = (int *)piVar5[1];
          piVar2 = piVar5;
          while ((piVar5 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar5[2]))) {
            cVar1 = *(char *)(piVar5[1] + 0x15);
            piVar3 = (int *)piVar5[1];
            piVar2 = piVar5;
          }
        }
      }
    } while (piVar5 != *(int * PTR32 *)(this + 0x30));
  }
  return 0;
}

/* ref: FUN_006e25a0 */
uint F_006e25a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e25a0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  uint uVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  uVar2 = F_00748ea0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  pvVar1 = (*(undefined * PTR32 *)(gen_frame + 0x8));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30)))) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10) + 0x22c))))(*(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10));
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x10) + 0x1c8))))(*(int * PTR32 *)((int)pvVar1 + 0x10));
  }
  return uVar2;
}

/* ref: FUN_006e25f0 */
unsigned int F_006e25f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e25f0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  F_006ddc50((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)&gen_args[1]),1);
  return 0;
}

/* ref: FUN_006e2610 */
uint F_006e2610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e2610u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  uint uVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  uVar2 = F_00748ea0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  pvVar1 = (*(undefined * PTR32 *)(gen_frame + 0x8));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30)))) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10) + 0x22c))))(*(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10));
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x10) + 0x1e0))))(*(int * PTR32 *)((int)pvVar1 + 0x10));
  }
  return uVar2;
}

/* ref: FUN_006e2660 */
unsigned int F_006e2660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e2660u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  F_006ddd80((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)&gen_args[1]),1);
  return 0;
}

/* ref: FUN_006e2680 */
uint F_006e2680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e2680u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  uint uVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  uVar2 = F_00748ea0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  pvVar1 = (*(undefined * PTR32 *)(gen_frame + 0x8));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30)))) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10) + 0x22c))))(*(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10));
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x10) + 0x1f0))))(*(int * PTR32 *)((int)pvVar1 + 0x10));
  }
  return uVar2;
}

/* ref: FUN_006e26d0 */
uint F_006e26d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e26d0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  uint uVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  uVar2 = F_00748ea0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  pvVar1 = (*(undefined * PTR32 *)(gen_frame + 0x8));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30)))) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10) + 0x22c))))(*(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10));
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x10) + 0x1f8))))(*(int * PTR32 *)((int)pvVar1 + 0x10));
  }
  return uVar2;
}

/* ref: FUN_006e2720 */
uint F_006e2720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e2720u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  uint uVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  uVar2 = F_00748ea0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  pvVar1 = (*(undefined * PTR32 *)(gen_frame + 0x8));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30)))) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10) + 0x22c))))(*(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10));
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x10) + 0x1e4))))(*(int * PTR32 *)((int)pvVar1 + 0x10));
  }
  return uVar2;
}

/* ref: FUN_006e2770 */
unsigned int F_006e2770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e2770u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  F_006ddfb0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)&gen_args[1]),1);
  return 0;
}

/* ref: FUN_006e2790 */
uint F_006e2790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e2790u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  uint uVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  uVar2 = F_00748ea0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[2]));
  pvVar1 = (*(undefined * PTR32 *)(gen_frame + 0x8));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30)))) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10) + 0x22c))))(*(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10));
    if (((*(uint *)&gen_args[1]) & 1) != 0) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x10) + 0x1c8))))(*(int * PTR32 *)((int)pvVar1 + 0x10));
    }
    if (((*(uint *)&gen_args[1]) & 2) != 0) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x10) + 0x1e0))))(*(int * PTR32 *)((int)pvVar1 + 0x10));
    }
    if (((*(uint *)&gen_args[1]) & 4) != 0) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x10) + 0x1f0))))(*(int * PTR32 *)((int)pvVar1 + 0x10));
    }
    if (((*(uint *)&gen_args[1]) & 8) != 0) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x10) + 0x1f8))))(*(int * PTR32 *)((int)pvVar1 + 0x10));
    }
    if (((*(uint *)&gen_args[1]) & 0x10) != 0) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x10) + 500))))(*(int * PTR32 *)((int)pvVar1 + 0x10));
    }
    if (((*(uint *)&gen_args[1]) & 0x20) != 0) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x10) + 0x1e4))))(*(int * PTR32 *)((int)pvVar1 + 0x10));
    }
  }
  return uVar2;
}

/* ref: FUN_006e2840 */
uint F_006e2840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e2840u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  
  uVar1 = F_006de320((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)&gen_args[1]),1);
  return uVar1;
}

/* ref: Client::Game::Event::LeveDirector::vf154 */
uint F_006e2860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e2860u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  char cVar1;
  int * piVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  int * piVar7;
  uint uVar8;
  int * piVar9;
  undefined4 uVar10;
  
  uVar8 = param_1 & 0xff;
  uVar5 = (uint)(byte)param_2;
  uVar10 = 0;
  uVar6 = F_0042a990(this + 0x16c);
  piVar7 = (int *)F_00a02640(*(undefined * PTR32 *)(this + 0xf8),"OnSequence",uVar6,uVar8,uVar5,uVar10);
  if ((byte)param_2 == 0xfe) {
    F_00a6ddf0(&REFG(undefined, 0x14ab380));
    iVar3 = REFG(int, 0x1488344);
    piVar7 = *(int * PTR32 *)(REFG(int, 0x1488344) + 0x30);
    piVar9 = (int *)*piVar7;
    if (piVar9 != piVar7) {
      do {
        piVar2 = (int *)piVar9[4];
        if (*(short *)((int)piVar2 + 10) == 1) {
          ((code *)*(gen_code32 *)(*piVar2 + 0x22c))(piVar2);
          ((code *)*(gen_code32 *)(*(int *)piVar9[4] + 0x1c8))((int *)piVar9[4]);
          ((code *)*(gen_code32 *)(*(int *)piVar9[4] + 0x1f8))((int *)piVar9[4]);
          piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)piVar9[4] + 0x1e4))((int *)piVar9[4])));
        }
        if (*(char *)((int)piVar9 + 0x15) == '\0') {
          piVar2 = (int *)piVar9[2];
          if (*(char *)((int)piVar2 + 0x15) == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x15);
            piVar7 = (int *)*piVar2;
            while (piVar9 = piVar2, cVar1 == '\0') {
              cVar1 = *(char *)(*piVar7 + 0x15);
              piVar2 = piVar7;
              piVar7 = (int *)*piVar7;
            }
          }
          else {
            cVar1 = *(char *)(piVar9[1] + 0x15);
            piVar4 = (int *)piVar9[1];
            piVar2 = piVar9;
            while ((piVar7 = piVar4, piVar9 = piVar7, cVar1 == '\0' && (piVar2 == (int *)piVar7[2]))
                  ) {
              cVar1 = *(char *)(piVar7[1] + 0x15);
              piVar4 = (int *)piVar7[1];
              piVar2 = piVar7;
            }
          }
        }
      } while (piVar9 != *(int * PTR32 *)(iVar3 + 0x30));
    }
  }
  else if ((byte)param_2 == 0xff) {
    F_00a69720(&REFG(undefined, 0x14ab380));
    return (uint)piVar7;
  }
  return (uint)piVar7;
}

/* ref: Client::Game::Event::CompanyLeveDirector::vf154 */
uint F_006e2960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e2960u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_006e2860((undefined *)this,param_1,param_2);
  return uVar1;
}

/* ref: Client::Game::Event::DirectorModule::vf2 */
uint F_006e2970(unsigned int gen_a0)
{
  GEN_ENTER(0x6e2970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  
  piVar4 = *(int * PTR32 *)(this + 0x2c);
  if (piVar4 != *(int * PTR32 *)(this + 0x30)) {
    do {
      puVar1 = (undefined4 *)*piVar4;
      if (puVar1 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
        *piVar4 = 0;
      }
      piVar4 = piVar4 + 1;
    } while (piVar4 != *(int * PTR32 *)(this + 0x30));
  }
  iVar2 = *(int *)(this + 0x2c);
  if (iVar2 != *(int *)(this + 0x30)) {
    F_00c46e20(iVar2,*(int *)(this + 0x30),0);
    *(int *)(this + 0x30) = iVar2;
  }
  uVar3 = F_00745180(this + 0x4c);
  this[0x24] = (undefined1)0x0;
  return uVar3;
}

/* ref: FUN_006e29e0 */
byte F_006e29e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e29e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  bVar1 = F_006deae0(REFG(undefined4, 0x1488344),param_2,this,param_1);
  return bVar1;
}

/* ref: FUN_006e2a00 */
uint F_006e2a00(unsigned int gen_a0)
{
  GEN_ENTER(0x6e2a00u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  undefined4 * puVar4;
  uint uVar5;
  int iVar6;
  
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  puVar4 = (undefined4 *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar3);
  uVar1 = *puVar4;
  uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2);
  ((byte *)(gen_frame + 0x8))[0x20] = (byte)uVar3;
  uVar3 = F_00a019d0(((byte *)(gen_frame + 0x8)));
  iVar6 = 3;
  if (2 < (int)uVar3) {
    do {
      bVar2 = F_00a01f20(((byte *)(gen_frame + 0x8)),iVar6);
      if (bVar2 != 0) break;
      uVar5 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),iVar6);
      F_006deae0(REFG(undefined4, 0x1488344),uVar5,uVar1,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
      iVar6 = iVar6 + 1;
    } while (iVar6 <= (int)uVar3);
  }
  F_00a01890(((byte *)(gen_frame + 0x8)));
  return 0;
}

/* ref: FUN_006e2aa0 */
uint F_006e2aa0(unsigned int gen_a0)
{
  GEN_ENTER(0x6e2aa0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a01860(((byte *)(gen_frame + 0x4)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0x4)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),2);
  (*(uint *)(gen_frame + 0x28)) = uVar2;
  F_00748d80((undefined *)(iVar1 + 0x1c0),&(*(int *)(gen_frame + 0x24)),&(*(uint *)(gen_frame + 0x28)));
  if ((*(int *)(gen_frame + 0x24)) != *(int *)(iVar1 + 0x1c4)) {
    uVar2 = F_0042a990((*(int *)(gen_frame + 0x24)) + 100);
    if (uVar2 != 0) {
      F_0042e430((undefined *)(iVar1 + 0x23c),uVar2);
    }
  }
  F_00a01890(((byte *)(gen_frame + 0x4)));
  return 0;
}

/* ref: FUN_006e2b30 */
unsigned int F_006e2b30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6e2b30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  undefined * this_00;
  
  if (((((char)param_4 == '\x06') && (REFG(int, 0x1379694) != 0)) &&
      (*(char *)(REFG(int, 0x1379694) + 0x1688) == '\x12')) && (*(undefined * PTR32 *)((int)this + 0x54) != (undefined *)0x0)
     ) {
    uVar1 = F_006dd370(*(undefined * PTR32 *)((int)this + 0x54),REFG(int, 0x1379694));
    if (uVar1 == 0) {
      F_006d9810(this_00,this,299);
    }
  }
  return 0;
}

/* ref: FUN_006e2b70 */
uint F_006e2b70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6e2b70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x54) == (undefined *)0x0) {
    return (uint)this & 0xffffff00;
  }
  uVar1 = F_006d9810(*(undefined * PTR32 *)((int)this + 0x54),this,param_1);
  return uVar1;
}

/* ref: FUN_006e2b90 */
uint F_006e2b90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6e2b90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int * piVar1;
  
  piVar1 = (int *)0x0;
  if (param_1 != 0) {
    if ((param_1 & 0x80000000) == 0x80000000) {
      piVar1 = (int *)F_00748af0((undefined *)((int)this + 0x5c),param_1);
    }
    else {
      piVar1 = (int *)F_006dda70(this,param_1);
    }
    if ((piVar1 != (int *)0x0) && ((short)piVar1[0x15] == (short)param_2)) {
      piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 100))(piVar1,param_2,param_3,param_4)));
    }
  }
  return (uint)piVar1;
}

/* ref: FUN_006e2be0 */
uint F_006e2be0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x6e2be0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int * piVar1;
  
  piVar1 = (int *)0x0;
  if (param_1 != 0) {
    if ((param_1 & 0x80000000) == 0x80000000) {
      piVar1 = (int *)F_00748af0((undefined *)((int)this + 0x5c),param_1);
    }
    else {
      piVar1 = (int *)F_006dda70(this,param_1);
    }
    if (((piVar1 != (int *)0x0) && ((short)piVar1[0x15] == (short)param_2)) &&
       ((*(byte *)(piVar1 + 0x17) & 1) != 0)) {
      *(byte *)(piVar1 + 0x17) = *(byte *)(piVar1 + 0x17) & 0xfe;
      piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x6c))(piVar1,param_2,param_3,param_4,param_5)));
    }
  }
  return (uint)piVar1;
}

/* ref: FUN_006e2c50 */
uint F_006e2c50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6e2c50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int * piVar1;
  
  piVar1 = (int *)0x0;
  if (param_1 != 0) {
    if ((param_1 & 0x80000000) == 0x80000000) {
      piVar1 = (int *)F_00748af0((undefined *)((int)this + 0x5c),param_1);
    }
    else {
      piVar1 = (int *)F_006dda70(this,param_1);
    }
    if (((piVar1 != (int *)0x0) && ((short)piVar1[0x15] == (short)param_2)) &&
       ((*(byte *)(piVar1 + 0x17) & 1) != 0)) {
      *(byte *)(piVar1 + 0x17) = *(byte *)(piVar1 + 0x17) & 0xfe;
      piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x68))(piVar1,param_2,param_3,param_4)));
    }
  }
  return (uint)piVar1;
}

/* ref: FUN_006e2cb0 */
uint F_006e2cb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6e2cb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_1 != 0) {
    if ((param_1 & 0x80000000) == 0x80000000) {
      piVar1 = (int *)F_00748af0((undefined *)((int)this + 0x5c),param_1);
    }
    else {
      piVar1 = (int *)F_006dda70(this,param_1);
    }
    uVar2 = 0;
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x74))(piVar1,param_2,param_3,param_4);
    }
  }
  return uVar2;
}

/* ref: FUN_006e2d00 */
uint F_006e2d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x6e2d00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  undefined4 param_9 = (undefined4)gen_a9;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int iVar1;
  int * piVar2;
  uint uVar3;
  ulonglong uVar4;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar3 = 0;
  if (param_1 != 0) {
    if ((param_1 & 0x80000000) == 0x80000000) {
      piVar2 = (int *)F_00748af0((undefined *)((int)this + 0x5c),param_1);
    }
    else {
      piVar2 = (int *)F_006dda70(this,param_1);
    }
    uVar3 = 0;
    if (piVar2 != (int *)0x0) {
      F_0042b630(((undefined1 *)(gen_frame + 0x4)));
      if ((1 < (byte)param_4) && (((byte)param_4 < 4 || ((byte)param_4 == 7)))) {
        uVar3 = F_00463610(0,param_5,(uint)(byte)param_4);
        F_0042e430(((undefined1 *)(gen_frame + 0x4)),uVar3);
      }
      iVar1 = *piVar2;
      uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x4)));
      ((code *)*(gen_code32 *)(iVar1 + 0x78))(piVar2,uVar3,param_6,param_7,param_8,param_9);
      uVar4 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
      uVar3 = (uint)uVar4;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar3;
}

/* ref: FUN_006e2dc0 */
uint F_006e2dc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e2dc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  if (param_1 != 0) {
    if ((param_1 & 0x80000000) == 0x80000000) {
      piVar1 = (int *)F_00748af0((undefined *)((int)this + 0x5c),param_1);
    }
    else {
      piVar1 = (int *)F_006dda70(this,param_1);
    }
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x80))(piVar1,param_2);
      return uVar2;
    }
  }
  puVar3 = (undefined4 *)F_00ab3d50(param_2);
  uVar2 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xd8))
                      (piVar1,*puVar3,(uint)*(byte *)((int)puVar3 + 5),0,(int)*(char *)(puVar3 + 1))
    ;
  }
  return uVar2;
}

/* ref: FUN_006e2e40 */
uint F_006e2e40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6e2e40u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  undefined * pvVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = (*(uint *)&gen_args[2]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  uVar4 = (*(uint *)&gen_args[2]) & 0xffff | 0x10000;
  if ((*(int *)&gen_args[1]) == 0) {
    (*(uint *)&gen_args[3]) = uVar4;
    F_00748ea0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))),&(*(uint *)&gen_args[2]),&(*(uint *)&gen_args[3]));
    uVar4 = (*(uint *)&gen_args[2]);
    if ((*(uint *)&gen_args[2]) != *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30)))) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(uint *)&gen_args[2]) + 0x10) + 0x22c))))(*(int * PTR32 *)((*(uint *)&gen_args[2]) + 0x10));
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar4 + 0x10) + 0x1c8))))(*(int * PTR32 *)(uVar4 + 0x10));
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar4 + 0x10) + 0x1e0))))(*(int * PTR32 *)(uVar4 + 0x10));
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar4 + 0x10) + 0x1f0))))(*(int * PTR32 *)(uVar4 + 0x10));
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar4 + 0x10) + 0x1f8))))(*(int * PTR32 *)(uVar4 + 0x10));
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar4 + 0x10) + 500))))(*(int * PTR32 *)(uVar4 + 0x10));
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar4 + 0x10) + 0x1e4))))(*(int * PTR32 *)(uVar4 + 0x10));
    }
    (*(uint *)&gen_args[3]) = 0x1a;
    F_006ddd80((*(undefined * PTR32 *)&gen_args[0]),&(*(uint *)&gen_args[3]),1);
    if (REFG(int, 0x14b4eb4) < 1) {
      REFG(int, 0x14b4eb4) = 1;
    }
  }
  else if ((*(int *)&gen_args[1]) == 1) {
    F_006de0e0((*(undefined * PTR32 *)&gen_args[0]),0x3b);
    (*(uint *)&gen_args[2]) = uVar4;
    F_00748ea0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(uint *)&gen_args[2]));
    pvVar2 = (*(undefined * PTR32 *)(gen_frame + 0x8));
    if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30)))) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10) + 0x22c))))(*(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10));
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x10) + 0x1f0))))(*(int * PTR32 *)((int)pvVar2 + 0x10));
    }
    if ((ushort)(*(uint *)&gen_args[3]) < 0x1e) {
      F_00a83f80(&REFG(undefined, 0x14b1258),(*(uint *)&gen_args[3]) & 0xffff);
    }
  }
  else if ((*(int *)&gen_args[1]) == 2) {
    F_006de0e0((*(undefined * PTR32 *)&gen_args[0]),0xffff);
  }
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar4 = (uint)((*(int *)&gen_args[1]) == 1);
  pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1)));
  uVar3 = F_008229a0(pvVar2,uVar3,uVar4);
  return uVar3;
}

/* ref: FUN_006e2fa0 */
uint F_006e2fa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x6e2fa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = (*(uint *)&gen_args[1]);
  if ((((*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x238))) == (*(uint *)&gen_args[1])) && (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x240))) == (*(int *)&gen_args[2]))) &&
      (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x244))) == (*(int *)&gen_args[3]))) &&
     ((*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x248))) == (char)(*(undefined4 *)&gen_args[4]) && (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24c))) == (*(int *)&gen_args[5])))))
  {
    if ((char)(*(undefined4 *)&gen_args[4]) == '\n') {
      (*(uint *)&gen_args[1]) = F_005f3270(0x31,(*(int *)&gen_args[5]),0);
      if ((*(uint *)&gen_args[1]) != 0) {
        F_0073d9b0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6fc))),&(*(undefined4 *)(gen_frame + 0x4)),&(*(uint *)&gen_args[1]));
        F_00745550(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6fc))),&(*(uint *)&gen_args[1]),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
      }
    }
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x254))) != 0) {
      F_00a4a760(&REFG(undefined, 0x14a7360),*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x254))),0);
    }
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x238))) = 0;
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x240))) = 0xe0000000;
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x244))) = 0;
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x248))) = 0;
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24c))) = 0;
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x250))) = 0;
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x254))) = 0;
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 600))) = 0;
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x25c))) = 0;
  }
  if ((*(int *)&gen_args[2]) == -0x20000000) {
    uVar3 = 0xe0000000;
    uVar4 = 0;
  }
  else {
    uVar3 = F_00a354d0(&REFG(undefined4, 0x14a31f0),(*(int *)&gen_args[2]),(*(int *)&gen_args[3]));
    uVar4 = uVar3;
  }
  if (uVar1 != 0) {
    if ((uVar1 & 0x80000000) == 0x80000000) {
      piVar2 = (int *)F_00748af0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))),uVar1);
    }
    else {
      piVar2 = (int *)F_006dda70((*(undefined * PTR32 *)&gen_args[0]),uVar1);
    }
    uVar3 = 0;
    if (piVar2 != (int *)0x0) {
      uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xb8))(piVar2,uVar4,(*(undefined4 *)&gen_args[4]),(*(int *)&gen_args[5]),(*(undefined4 *)&gen_args[6]));
    }
  }
  return uVar3;
}

/* ref: FUN_006e3100 */
byte F_006e3100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e3100u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (REFG(int, 0x13238f8) != 0) {
    piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1)));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,REFG(undefined4, 0x1323904),0);
  }
  if (((char)param_2 == '\0') && (uVar2 = F_006d9f00(this), (char)uVar2 != '\0')) {
    return 0;
  }
  if (*(int *)((int)this + 0x224) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x214);
    uVar2 = *(uint *)((int)this + 0x220);
    if (piVar1 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar1;
    }
    uVar3 = uVar2;
    if (*(uint *)(iVar4 + 8) <= uVar2) {
      uVar3 = uVar2 - *(uint *)(iVar4 + 8);
    }
    if (*((char *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar4 + 4) + uVar3 * 4))) + 0x2c))) != '\0') {
      return 0;
    }
    if (piVar1 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar1;
    }
    if (*(uint *)(iVar4 + 8) <= uVar2) {
      uVar2 = uVar2 - *(uint *)(iVar4 + 8);
    }
    uVar2 = *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar4 + 4) + uVar2 * 4))) + 8)));
    if (uVar2 != 0) {
      if ((uVar2 & 0x80000000) == 0x80000000) {
        piVar1 = (int *)F_00748af0((undefined *)((int)this + 0x5c),uVar2);
      }
      else {
        piVar1 = (int *)F_006dda70(this,uVar2);
      }
      if ((piVar1 != (int *)0x0) && ((short)piVar1[0x15] != -1)) {
        uVar2 = F_00743a80((undefined *)((int)this + 0x214));
        if (*(char *)(uVar2 + 0x2c) == '\0') {
          *(undefined1 *)(uVar2 + 0x2c) = 1;
        }
        ((code *)*(gen_code32 *)(*piVar1 + 0x98))(piVar1,param_1);
        return 1;
      }
    }
  }
  if ((*(int *)((int)this + 0x238) != 0) && (*(char *)((int)this + 0x25c) == '\0')) {
    *(undefined1 *)((int)this + 0x25c) = 1;
  }
  return 0;
}

/* ref: FUN_006e3240 */
uint F_006e3240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e3240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 & 0x80000000) == 0x80000000) {
    uVar1 = F_00748af0((undefined *)((int)this + 0x5c),param_1);
    return uVar1;
  }
  uVar1 = F_006dda70(this,param_1);
  return uVar1;
}

/* ref: FUN_006e3280 */
byte F_006e3280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6e3280u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  ushort uVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  
  uVar2 = F_00a4ffd0();
  uVar1 = *((ushort *)GEN_TOP((uVar2 + (param_1 & 0xffff) * 0x10 + 0x13b8)));
  *param_4 = 0;
  *param_3 = 0;
  if (((uVar1 != 0) && (uVar2 = uVar1 | 0x10000, uVar2 != 0)) &&
     (piVar3 = (int *)F_006dda70(this,uVar2), piVar3 != (int *)0x0)) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3);
    if (((char)uVar4 == '\0') || (*(char *)piVar3[0x5b] == '\0')) {
      return 0;
    }
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x1e8))(piVar3,param_2,3);
    *param_4 = *param_4 + uVar4;
    *param_3 = uVar2;
  }
  return 1;
}

/* ref: FUN_006e3330 */
byte F_006e3330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e3330u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  uint uVar1;
  int * piVar2;
  
  this_00 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),0x7d4);
  uVar1 = F_00a3a8f0(this_00,param_2,0);
  if ((uVar1 != 0) && (uVar1 = *(uint *)(uVar1 + 0x3c), uVar1 != 0)) {
    if ((uVar1 & 0x80000000) == 0x80000000) {
      piVar2 = (int *)F_00748af0((undefined *)((int)this + 0x5c),uVar1);
    }
    else {
      piVar2 = (int *)F_006dda70(this,uVar1);
    }
    if (piVar2 != (int *)0x0) {
      uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x1ec))(piVar2,param_1,param_2);
      return (byte)uVar1;
    }
  }
  return 0;
}

/* ref: FUN_006e33b0 */
uint F_006e33b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6e33b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  byte bVar2;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar3;
  int iVar4;
  
  if (*(int *)((int)this + 0x224) != 0) {
    in_EAX = *(uint *)((int)this + 0x220);
    piVar1 = *(int * PTR32 *)((int)this + 0x214);
    if (piVar1 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar1;
    }
    uVar3 = in_EAX;
    if (*(uint *)(iVar4 + 8) <= in_EAX) {
      uVar3 = in_EAX - *(uint *)(iVar4 + 8);
    }
    if (*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar4 + 4) + uVar3 * 4))) + 8))) != 0) {
      if (REFG(int, 0x13238f8) == 0) {
        if (piVar1 == (int *)0x0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *piVar1;
        }
        if (*(uint *)(iVar4 + 8) <= in_EAX) {
          in_EAX = in_EAX - *(uint *)(iVar4 + 8);
        }
        uVar3 = *((uint *)GEN_TOP((*(int *)(iVar4 + 4) + in_EAX * 4)));
        if ((*(byte *)(uVar3 + 0x20) >> 1 & 1) == 0) {
          return uVar3;
        }
      }
      bVar2 = F_006e3100(this,0x37,1);
      in_EAX = CONCAT31(extraout_var,bVar2);
    }
  }
  return in_EAX;
}

/* ref: FUN_006e3430 */
uint F_006e3430(unsigned int gen_a0)
{
  GEN_ENTER(0x6e3430u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  uint uVar3;
  
  iVar1 = REFG(int, 0x1379694);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  bVar2 = F_005d4e70();
  uVar3 = CONCAT31(extraout_var,bVar2);
  if ((bVar2 != 0) || (iVar1 != 0)) {
    bVar2 = F_00a505f0();
    uVar3 = CONCAT31(extraout_var_00,bVar2);
    if (bVar2 != 0) {
      bVar2 = F_00a50610();
      uVar3 = CONCAT31(extraout_var_01,bVar2);
      if (bVar2 != 0) {
        (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x1;
        uVar3 = F_006de320(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),1);
      }
    }
  }
  return uVar3;
}

/* ref: FUN_006e3480 */
uint F_006e3480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e3480u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  int * in_EAX = 0;
  uint uVar2;
  undefined * this_00;
  undefined4 extraout_EDX = 0;
  ulonglong uVar3;
  
  if ((param_2 == 0) &&
     ((((REFG(int, 0x13238f8) != 0 || (*(int *)((int)this + 0x238) != 0)) ||
       (*(int *)((int)this + 0x224) != 0)) || (*(int *)((int)this + 0x738) != 0)))) {
    uVar2 = ((code *)*(gen_code32 *)*param_1)(param_1);
    uVar3 = F_006d9e70(this);
    in_EAX = (int *)uVar3;
    if ((uVar3 == CONCAT44(extraout_EDX,uVar2)) &&
       (in_EAX = (int *)F_006d9ec0(this_00), (char)in_EAX != '\0')) {
      in_EAX = (int *)F_006e33b0(this);
    }
  }
  if (param_1[0x39] != 0) {
    in_EAX = *(int * PTR32 *)((int)this + 0x88);
    if (in_EAX != *(int * PTR32 *)((int)this + 0x8c)) {
      while (**(int * PTR32 *)(*in_EAX + 0x1d4) != param_1[0x39]) {
        in_EAX = in_EAX + 1;
        if (in_EAX == *(int * PTR32 *)((int)this + 0x8c)) {
          return (uint)in_EAX;
        }
      }
      piVar1 = (int *)*in_EAX;
      in_EAX = (int *)0x0;
      if (piVar1 != (int *)0x0) {
        in_EAX = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x270))(piVar1,param_1,param_2)));
      }
    }
  }
  return (uint)in_EAX;
}

/* ref: FUN_006e35d0 */
uint F_006e35d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6e35d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_007496b0((undefined *)((int)this + 0x5c),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x60),
               *(undefined4 * PTR32 *)((int)this + 0x60));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 0x60),0x18,800);
  return (uint)uVar1;
}

/* ref: FUN_006e3610 */
uint F_006e3610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e3610u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)F_004296a0(0x18,0,800);
  *puVar1 = *(undefined4 *)((int)this + 0x60);
  puVar1[1] = *(undefined4 *)((int)this + 0x60);
  puVar1[2] = *(undefined4 *)((int)this + 0x60);
  *(undefined2 *)(puVar1 + 5) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = param_1;
    puVar1[4] = param_2;
  }
  uVar2 = F_00746b20((undefined *)((int)this + 0x5c),((undefined1 *)(gen_frame + 0x4)),puVar1,0);
  return uVar2;
}

/* ref: FUN_006e3670 */
uint F_006e3670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e3670u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  F_0073cae0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))),&(*(undefined4 *)(gen_frame + 0x4)),&(*(undefined4 *)&gen_args[1]));
  uVar1 = F_007496b0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))),&(*(undefined4 *)&gen_args[1]),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
  return uVar1;
}

/* ref: FUN_006e36b0 */
unsigned int F_006e36b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6e36b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  uint uVar8;
  undefined4 * puVar9;
  undefined4 * puVar10;
  undefined4 * local_8;
  
  uVar8 = 0;
  do {
    piVar1 = ((int *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[uVar8]));
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,1,0);
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 < 0x158);
  if ((REFG(int, 0x1379694) != 0) && (piVar1 = *(int * PTR32 *)(REFG(int, 0x1379694) + 0x2e04), piVar1 != (int *)0x0)) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,1,0);
  }
  puVar7 = *(undefined4 * PTR32 *)((int)this + 0x2c);
  local_8 = puVar7;
  if (puVar7 != *(undefined4 * PTR32 *)((int)this + 0x30)) {
    do {
      if (puVar7[5] == 7) {
        puVar2 = *(undefined4 * PTR32 *)((int)this + 0x30);
        puVar3 = puVar7;
        puVar4 = puVar7;
        while (puVar4 = puVar4 + 0x22, puVar4 != puVar2) {
          puVar6 = puVar3 + 0x22;
          puVar9 = puVar4;
          puVar10 = puVar3;
          for (iVar5 = 0x22; puVar3 = puVar6, puVar7 = local_8, iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar10 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar10 = puVar10 + 1;
          }
        }
        *(int *)((int)this + 0x30) = *(int *)((int)this + 0x30) + -0x88;
      }
      else {
        puVar7 = puVar7 + 0x22;
        local_8 = puVar7;
      }
    } while (puVar7 != *(undefined4 * PTR32 *)((int)this + 0x30));
  }
  return 0;
}

/* ref: FUN_006e3770 */
uint F_006e3770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6e3770u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint uVar2;
  undefined * puVar3;
  
  bVar1 = F_00a01f60(param_1,param_3);
  if (bVar1 != 0) {
    uVar2 = F_00a01e40(param_1,param_3);
    F_0042e430(param_4,uVar2);
    return 0;
  }
  bVar1 = F_00a01f40(param_1,param_3);
  if (bVar1 != 0) {
    uVar2 = F_00b9c9b0(*(undefined4 *)((int)param_1 + 8),param_3);
    (*(uint *)(gen_frame + 0x8)) = uVar2;
    F_00748d80((undefined *)(param_2 + 0x1c0),&(*(int *)(gen_frame + 0x4)),&(*(uint *)(gen_frame + 0x8)));
    if (((*(int *)(gen_frame + 0x4)) == *(int *)(param_2 + 0x1c4)) ||
       (puVar3 = (undefined *)F_0042a990((*(int *)(gen_frame + 0x4)) + 100), puVar3 == (undefined *)0x0)) {
      puVar3 = &REFG(undefined, 0x10b3a1f);
    }
    F_0042e430(param_4,puVar3);
    return 0;
  }
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf56 */
uint F_006e3800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e3800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x130];
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined * puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  (*(uint *)(gen_frame + 0x128)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x12c);
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  puVar3 = (undefined4 *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  this_00 = (undefined *)*puVar3;
  if (this_00 == (undefined *)0x0) {
    F_00a02240(((byte *)(gen_frame + 0xc)));
    F_00c47745((*(uint *)(gen_frame + 0x128)) ^ (uint)(uint)(gen_frame + 0x12c));
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x80)),&REFG(undefined, 0x10b3a26),REFG(undefined4, 0x108cc50));
  F_0042cc20(((undefined1 *)(gen_frame + 0x2c)),&REFG(undefined, 0x10b3a27),REFG(undefined4, 0x108cc50));
  F_0042cc20(((undefined1 *)(gen_frame + 0xd4)),&REFG(undefined, 0x10b3a2a),REFG(undefined4, 0x108cc50));
  bVar1 = F_00a01f60(((byte *)(gen_frame + 0xc)),2);
  if (bVar1 == 0) {
    bVar1 = F_00a01f40(((byte *)(gen_frame + 0xc)),2);
    if (bVar1 != 0) {
      uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
      puVar4 = (undefined *)F_006dfba0(this_00,uVar2);
      if (puVar4 == (undefined *)0x0) {
        puVar4 = &REFG(undefined, 0x10b3a2b);
      }
      goto LAB_006e38de;
    }
  }
  else {
    puVar4 = (undefined *)F_00a01e40(((byte *)(gen_frame + 0xc)),2);
LAB_006e38de: ;
    F_0042e430(((undefined1 *)(gen_frame + 0x80)),puVar4);
  }
  bVar1 = F_00a01f60(((byte *)(gen_frame + 0xc)),3);
  if (bVar1 == 0) {
    bVar1 = F_00a01f40(((byte *)(gen_frame + 0xc)),3);
    if (bVar1 != 0) {
      uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),3);
      puVar4 = (undefined *)F_006dfba0(this_00,uVar2);
      if (puVar4 == (undefined *)0x0) {
        puVar4 = &REFG(undefined, 0x10b3a2e);
      }
      goto LAB_006e3935;
    }
  }
  else {
    puVar4 = (undefined *)F_00a01e40(((byte *)(gen_frame + 0xc)),3);
LAB_006e3935: ;
    F_0042e430(((undefined1 *)(gen_frame + 0x2c)),puVar4);
  }
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),4);
  uVar5 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),5);
  uVar6 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),6);
  bVar1 = F_00a01f60(((byte *)(gen_frame + 0xc)),7);
  if (bVar1 == 0) {
    bVar1 = F_00a01f40(((byte *)(gen_frame + 0xc)),7);
    if (bVar1 == 0) goto LAB_006e39ce;
    uVar7 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),7);
    puVar4 = (undefined *)F_006dfba0(this_00,uVar7);
    if (puVar4 == (undefined *)0x0) {
      puVar4 = &REFG(undefined, 0x10b3a2f);
    }
  }
  else {
    puVar4 = (undefined *)F_00a01e40(((byte *)(gen_frame + 0xc)),7);
  }
  F_0042e430(((undefined1 *)(gen_frame + 0xd4)),puVar4);
LAB_006e39ce: ;
  *(undefined * PTR32 *)&REFG(undefined, 0x13240fc) = this_00;
  uVar7 = F_0042a990(((undefined1 *)(gen_frame + 0xd4)));
  uVar8 = F_0042a990(((undefined1 *)(gen_frame + 0x2c)));
  uVar9 = F_0042a990(((undefined1 *)(gen_frame + 0x80)));
  F_006c6380(uVar9,uVar8,uVar2,uVar5,uVar6,uVar7);
  uVar2 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0xd4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x2c)));
  F_0042c880(((undefined1 *)(gen_frame + 0x80)));
  F_00a02240(((byte *)(gen_frame + 0xc)));
  F_00c47745((*(uint *)(gen_frame + 0x128)) ^ (uint)(uint)(gen_frame + 0x12c));
  return uVar2;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf15 */
uint F_006e3a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e3a80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  int iVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  F_00a02210(((byte *)(gen_frame + 0x8)),param_1);
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar4 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar3);
  iVar1 = *piVar4;
  (*(int *)(gen_frame + 0x28)) = iVar1;
  if (iVar1 != 0) {
    (*(undefined4 *)(gen_frame + 0x4)) = 4;
    F_0042cc20(((undefined1 *)(gen_frame + 0x30)),&REFG(undefined, 0x10b3a32),REFG(undefined4, 0x108cc50));
    F_0042cc20(((undefined1 *)(gen_frame + 0x84)),&REFG(undefined, 0x10b3a33),REFG(undefined4, 0x108cc50));
    bVar2 = F_00a01f40(((byte *)(gen_frame + 0x8)),2);
    iVar7 = 5;
    if (bVar2 != 0) {
      uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2);
      if (uVar3 != 0) {
        (*(undefined4 *)(gen_frame + 0x4)) = 5;
      }
    }
    bVar2 = F_00a01f60(((byte *)(gen_frame + 0x8)),3);
    if (bVar2 == 0) {
      bVar2 = F_00a01f20(((byte *)(gen_frame + 0x8)),3);
      if (bVar2 == 0) {
        bVar2 = F_00a01f40(((byte *)(gen_frame + 0x8)),3);
        if (bVar2 != 0) {
          F_006e3770(((byte *)(gen_frame + 0x8)),iVar1,3,((undefined1 *)(gen_frame + 0x30)));
        }
      }
      else {
        F_00ab0230(0x18f48,((undefined1 *)(gen_frame + 0x30)));
      }
    }
    else {
      uVar3 = F_00a01e40(((byte *)(gen_frame + 0x8)),3);
      F_0042e430(((undefined1 *)(gen_frame + 0x30)),uVar3);
    }
    bVar2 = F_00a01f60(((byte *)(gen_frame + 0x8)),4);
    if (bVar2 == 0) {
      bVar2 = F_00a01f20(((byte *)(gen_frame + 0x8)),4);
      if (bVar2 == 0) {
        bVar2 = F_00a01f40(((byte *)(gen_frame + 0x8)),4);
        if (bVar2 != 0) {
          F_006e3770(((byte *)(gen_frame + 0x8)),iVar1,4,((undefined1 *)(gen_frame + 0x84)));
        }
      }
      else {
        F_00ab0230(0x18f49,((undefined1 *)(gen_frame + 0x84)));
      }
    }
    else {
      uVar3 = F_00a01e40(((byte *)(gen_frame + 0x8)),4);
      F_0042e430(((undefined1 *)(gen_frame + 0x84)),uVar3);
    }
    uVar3 = F_00a019d0(((byte *)(gen_frame + 0x8)));
    if (uVar3 == 5) {
      uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),5);
      (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x28)) + 0)) = (char)uVar3;
      (*(int *)(gen_frame + 0x28)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x28)), 1, 3),(char)uVar3);
      F_00b9f940(&REFG(undefined, 0x14b0f2c),(*(int *)(gen_frame + 0x28)),iVar1);
    }
    else if (5 < (int)uVar3) {
      (*(byte *)(gen_frame + 0x2f)) = (char)uVar3 - 4;
      do {
        uVar5 = iVar7 - 5;
        uVar6 = uVar5 / 3;
        if (uVar5 == uVar6 * 3) {
          bVar2 = F_00a01f40(((byte *)(gen_frame + 0x8)),iVar7);
          if (bVar2 != 0) {
            uVar5 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),iVar7);
            ((uint *)(gen_frame + 0xd8))[(int)(uVar6)] = uVar5;
          }
        }
        else if (uVar5 % 3 == 1) {
          bVar2 = F_00a01f40(((byte *)(gen_frame + 0x8)),iVar7);
          if (bVar2 != 0) {
            uVar5 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),iVar7);
            ((uint *)(gen_frame + 0xec))[(int)(uVar6)] = uVar5;
          }
        }
        else {
          bVar2 = F_00a01f80(((byte *)(gen_frame + 0x8)),iVar7);
          if (bVar2 != 0) {
            bVar2 = F_00a01e10(((byte *)(gen_frame + 0x8)),iVar7);
            ((byte *)(gen_frame + 0x100))[(int)(uVar6)] = bVar2;
          }
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 <= (int)uVar3);
      F_00ba07c0(&REFG(undefined, 0x14b0f2c),((uint *)(gen_frame + 0xd8)),((uint *)(gen_frame + 0xec)),((byte *)(gen_frame + 0x100)),(*(byte *)(gen_frame + 0x2f)) / 3,(*(int *)(gen_frame + 0x28)));
    }
    bVar2 = F_00ba05d0(&REFG(undefined, 0x14b0f2c));
    if (bVar2 != 0) {
      piVar4 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      uVar8 = 0x1d;
      uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x48))(piVar4);
      piVar4 = (int *)F_00763050(uVar3,uVar8);
      ((code *)*(gen_code32 *)(*piVar4 + 0x40))(piVar4,(*(undefined4 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x30)),((undefined1 *)(gen_frame + 0x84)),1);
      uVar3 = F_00a02290(((byte *)(gen_frame + 0x8)),0);
      F_0042c880(((undefined1 *)(gen_frame + 0x84)));
      F_0042c880(((undefined1 *)(gen_frame + 0x30)));
      F_00a02240(((byte *)(gen_frame + 0x8)));
      F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
      return uVar3;
    }
    F_0042c880(((undefined1 *)(gen_frame + 0x84)));
    F_0042c880(((undefined1 *)(gen_frame + 0x30)));
  }
  F_00a02240(((byte *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return 0;
}

/* ref: FUN_006e3e00 */
uint F_006e3e00(unsigned int gen_a0)
{
  GEN_ENTER(0x6e3e00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  F_006df450(this);
  F_006df4a0(this);
  iVar1 = *(int *)((int)this + 0x10);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0x18) - iVar1 >> 2) * 4,800);
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,800);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_006e3e70 */
unsigned int F_006e3e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e3e70u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  undefined * this;
  uint uVar2;
  int * piVar3;
  undefined4 in_ecx;
  
  this = (*(undefined * PTR32 *)&gen_args[0]);
  F_006df2c0((*(undefined * PTR32 *)&gen_args[0]));
  if (REFG(int, 0x1375bbc) == 1) {
    F_00b72010(REFG(undefined * PTR32, 0x01375b94),0);
  }
  F_00b6b970(&REFG(undefined, 0x1375b9c),(float)(float10)0,0);
  if (*(char *)((int)this + 0xd0) == '\0') {
    F_00ab6ca0();
  }
  else {
    uVar2 = F_00ab4c70();
    F_00ab6c00(uVar2,0,0,0,0,1);
  }
  if (REFG(int, 0x1375bbc) != 0) {
    F_00b70d10(&REFG(undefined4, 0x1375b90),0);
    piVar3 = (int *)F_006d7550(&(*(undefined * PTR32 *)&gen_args[0]),REFG(undefined4, 0x1379694));
    if ((*piVar3 != *(int *)((int)this + 0x30)) && (*(char *)(*piVar3 + 0x7e) == '\0')) {
      if (REFG(int, 0x1375bbc) == -1) {
        in_ecx = 0;
      }
      else {
        in_ecx = (&REFG(undefined4, 0x1375b90))[REFG(int, 0x1375bbc)];
      }
      F_00b6ffe0(in_ecx);
    }
  }
  piVar3 = (int *)F_00424750(REFG(int, 0x137104c));
  if ((*(uint *)((int)this + 0x6c) & 0x400) != 0) {
    F_004d1660(REFG(undefined4, 0x1370c18));
    F_009d53f0(REFG(undefined4, 0x1487c90),0);
    F_00984b30(0);
    F_00a06560(1);
    if (piVar3 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3);
      F_004347c0(uVar2);
    }
  }
  *(undefined4 *)((int)this + 0x6c) = 0;
  F_006e36b0(this);
  iVar1 = REFG(int, 0x1371290);
  if ((*(char *)(REFG(int, 0x1371290) + 0x30f) == '@') && (REFG(int, 0x1371290) + 0x274 != 0)) {
    F_004a4530(REFG(int, 0x1371290) + 0x274);
  }
  F_004adca0((undefined *)(iVar1 + 0x25c),7,0,0x40);
  F_00ab0600(1000);
  F_00b7c0f0(&REFG(undefined, 0x133e5c0),1);
  iVar1 = REFG(int, 0x137104c);
  *(undefined4 *)(REFG(int, 0x137104c) + 0x1248) = 0;
  *(undefined4 *)(iVar1 + 0x124c) = 0;
  if (*(char *)(iVar1 + 0x1230) != '\0') {
    *(undefined1 *)(iVar1 + 0x1230) = 0;
  }
  *(undefined1 *)((int)this + 0xd3) = 0;
  return 0;
}

/* ref: Client::Game::Event::CancelEventSceneTask::vf1 */
uint F_006e4000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e4000u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_006e3100(REFG(undefined4, 0x1488344),0x32,1);
  return 1;
}

/* ref: FUN_006e4020 */
uint F_006e4020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e4020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  undefined * this_00;
  
  uVar1 = param_1 & 0xffff | 0x10000;
  if ((uVar1 != 0) && (this_00 = (undefined *)F_006dda70(REFG(undefined4, 0x1488344),uVar1), this_00 != (undefined *)0x0))
  {
    uVar1 = F_006d8b60(this_00,*(undefined4 *)((int)this + 0x60));
    return (uint)(uVar1 == 0);
  }
  return 0;
}

/* ref: FUN_006e4080 */
uint F_006e4080(unsigned int gen_a0)
{
  GEN_ENTER(0x6e4080u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int * piVar4;
  undefined * this;
  
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar4 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar3);
  iVar1 = *piVar4;
  uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2);
  uVar3 = uVar3 & 0xffff | 0x10000;
  if ((uVar3 == 0) || (this = (undefined *)F_006dda70(REFG(undefined4, 0x1488344),uVar3), this == (undefined *)0x0)) {
    uVar2 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32));
    ((byte *)(gen_frame + 0x8))[0x20] = 0;
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)) = uVar2 & 0xffffff00;
  }
  else {
    uVar3 = F_006d8b60(this,*(undefined4 *)(iVar1 + 0x60));
    ((byte *)(gen_frame + 0x8))[0x20] = uVar3 == 0;
  }
  F_00a01ea0(((byte *)(gen_frame + 0x8)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
  F_00a01890(((byte *)(gen_frame + 0x8)));
  return 1;
}

/* ref: FUN_006e4130 */
byte F_006e4130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6e4130u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  byte bVar1;
  uint uVar2;
  undefined * this_00;
  
  uVar2 = param_3 & 0xffff | 0x10000;
  if ((uVar2 != 0) && (this_00 = (undefined *)F_006dda70(REFG(undefined4, 0x1488344),uVar2), this_00 != (undefined *)0x0))
  {
    bVar1 = F_006dc7f0(this_00,*(undefined4 *)((int)this + 0x60),param_1,param_2,0);
    return bVar1;
  }
  return 0;
}

/* ref: FUN_006e4190 */
uint F_006e4190(unsigned int gen_a0)
{
  GEN_ENTER(0x6e4190u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this;
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  undefined4 * puVar5;
  int * piVar6;
  
  F_00a01860(((byte *)(gen_frame + 0x4)),param_1);
  uVar4 = F_00a01d20(((byte *)(gen_frame + 0x4)),1);
  puVar5 = (undefined4 *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),1,uVar4);
  this = (undefined *)*puVar5;
  uVar4 = F_00a01d20(((byte *)(gen_frame + 0x4)),2);
  piVar6 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),2,uVar4);
  iVar1 = *piVar6;
  uVar4 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),3);
  bVar3 = (byte)uVar4;
  ((byte *)(gen_frame + 0x4))[0x20] = bVar3;
  uVar4 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),4);
  uVar2 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 36));
  ((byte *)(gen_frame + 0x4))[0x24] = 0;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 36)) = uVar2 & 0xffffff00;
  if (((iVar1 != 0) && (bVar3 != 0)) && ((short)uVar4 != 0)) {
    bVar3 = F_006e4130(this,*(undefined4 *)(iVar1 + 4),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 32)),uVar4 & 0xffff);
    ((byte *)(gen_frame + 0x4))[0x24] = bVar3;
  }
  F_00a01ea0(((byte *)(gen_frame + 0x4)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 36)));
  F_00a01890(((byte *)(gen_frame + 0x4)));
  return 1;
}

/* ref: FUN_006e44c0 */
uint F_006e44c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e44c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[144])REFP(0x10b9644));
  *(int *)((int)this + 4) = REFG(int, 0x1488344) + 0x100;
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0x14) = 0;
  uVar1 = F_004296a0(0x14,0,800);
  *(uint *)((int)this + 0x10) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 4))) = *(int *)((int)this + 0x10);
  *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 8))) = *(int *)((int)this + 0x10);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x11))) = 1;
  *(undefined1 *)((int)this + 0x1c) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x20) =
       (*(undefined * PTR32 (*)[3])REFP(0x10b9078));
  *(undefined * PTR32 *)((int)this + 0x24) = this;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x28) =
       (*(undefined * PTR32 (*)[3])REFP(0x10b9088));
  *(undefined * PTR32 *)((int)this + 0x2c) = this;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x30) =
       (*(undefined * PTR32 (*)[3])REFP(0x10b9098));
  *(undefined * PTR32 *)((int)this + 0x34) = this;
  *(undefined4 *)((int)this + 0x38) = 2;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined1 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined1 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined1 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined2 *)((int)this + 0x54) = 0xffff;
  *(undefined2 *)((int)this + 0x5d) = 0;
  *(undefined1 *)((int)this + 0x5f) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  F_0042b630((int)this + 0x7c);
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined1 *)((int)this + 0x1d) = 0;
  return (uint)this;
}

/* ref: Client::Game::Event::EventHandler::vf141 */
uint F_006e45c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e45c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined4 * puVar2;
  
  if (param_1 != 0) {
    puVar2 = (undefined4 *)F_004296a0(0x14,0,800);
    *puVar2 = *(undefined4 *)(this + 0x10);
    puVar2[1] = *(undefined4 *)(this + 0x10);
    puVar2[2] = *(undefined4 *)(this + 0x10);
    *(undefined2 *)(puVar2 + 4) = 0;
    if (puVar2 + 3 != (int *)0x0) {
      puVar2[3] = param_1;
    }
    F_00746c00(this + 0xc,((undefined1 *)(gen_frame + 0x4)),puVar2,0);
  }
  iVar1 = *(int *)(this + 0x40);
  *(uint *)(this + 0x40) = iVar1 + 1U;
  return iVar1 + 1U;
}

/* ref: Client::Game::Event::EventHandler::vf142 */
uint F_006e4630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e4630u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  
  iVar1 = (*(int *)&gen_args[1]);
  if ((*(int *)&gen_args[1]) != 0) {
    F_0073ce10((*(undefined * PTR32 *)&gen_args[0]) + 0xc,&(*(undefined4 *)(gen_frame + 0x4)),&(*(int *)&gen_args[1]));
    F_00744a50((*(undefined * PTR32 *)&gen_args[0]) + 0xc,&(*(int *)&gen_args[1]),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
    if (iVar1 == *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x50)))) {
      ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xbc))))((*(undefined * PTR32 *)&gen_args[0]),iVar1);
    }
  }
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x40))) != 0) {
    uVar2 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x40))) - 1;
    *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x40))) = uVar2;
    return uVar2;
  }
  return 0;
}

/* ref: Client::Game::Event::AetheryteEventHandler::vf33 */
uint F_006e46a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6e46a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  uVar2 = 0xffff;
  if (*(short *)(this + 0x54) != -1) {
    bVar1 = F_006e3100(REFG(undefined4, 0x1488344),0x34,1);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  return uVar2;
}

/* ref: FUN_006e46c0 */
uint F_006e46c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e46c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_006e44c0(this,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[144])REFP(0x10b988c));
  *(undefined4 *)((int)this + 0x138) = 0;
  *(undefined4 *)((int)this + 0x13c) = 0;
  F_00c48350((undefined *)((int)this + 0xf8),0,0x40);
  return (uint)this;
}

/* ref: FUN_006e4700 */
uint F_006e4700(unsigned int gen_a0)
{
  GEN_ENTER(0x6e4700u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  ushort * puVar1;
  ushort uVar2;
  undefined * this;
  uint uVar3;
  undefined4 * puVar4;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  puVar4 = (undefined4 *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar3);
  this = (undefined *)*puVar4;
  if (((*(uint *)((int)this + 0x5a4) <
        (uint)(*(int *)((int)this + 0x578) - *(int *)((int)this + 0x574) >> 2)) &&
      (puVar1 = ((ushort *)GEN_TOP((*(int *)((int)this + 0x574) + *(uint *)((int)this + 0x5a4) * 4))),
      puVar1 != (ushort *)0x0)) && (uVar2 = *puVar1, uVar2 != 0)) {
    F_006e00e0(this,(uint)uVar2);
    uVar3 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
    F_00a02240(((byte *)(gen_frame + 0xc)));
    return uVar3;
  }
  F_00a01ea0(((byte *)(gen_frame + 0xc)),0);
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006e47a0 */
uint F_006e47a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6e47a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  uint uVar2;
  undefined4 * this_00;
  uint uVar3;
  int * piVar4;
  int iVar5;
  int * piVar6;
  int * piVar7;
  
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = this;
  uVar2 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8));
  piVar7 = (int *)0x0;
  piVar6 = (int *)0x0;
  *(uint *)((int)this + 0x56c) = uVar2;
  piVar4 = (int *)0x0;
  (*(int * PTR32 *)(gen_frame + 0x0)) = (int *)0x0;
  (*(int * PTR32 *)(gen_frame + 0x4)) = (int *)0x0;
  (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
  (*(uint *)(gen_frame + 0x10)) = 8;
  do {
    iVar5 = *((int *)GEN_TOP(((*(uint *)(gen_frame + 0x10)) + *(int *)((int)this + 0x270))));
    (*(int *)(gen_frame + 0x14)) = iVar5;
    piVar1 = piVar7;
    if (iVar5 != 0) {
      for (; piVar1 != piVar6; piVar1 = piVar1 + 1) {
        if (*piVar1 == iVar5) goto LAB_006e48d6;
      }
      if ((&(*(int *)(gen_frame + 0x14)) < piVar6) && (piVar7 <= &(*(int *)(gen_frame + 0x14)))) {
        iVar5 = (int)&(*(int *)(gen_frame + 0x14)) - (int)piVar7;
        if (piVar6 == piVar4) {
          uVar2 = (int)piVar6 - (int)((int)(uintptr_t)piVar7) >> 2;
          if (0x3ffffffe < uVar2) {
LAB_006e494f: ;
                    
            F_00c4579a("vector<T> too long");
          }
          uVar2 = uVar2 + 1;
          uVar3 = (int)piVar4 - (int)((int)(uintptr_t)piVar7) >> 2;
          if (uVar3 < uVar2) {
            if (0x3fffffff - (uVar3 >> 1) < uVar3) {
              uVar3 = 0;
            }
            else {
              uVar3 = uVar3 + (uVar3 >> 1);
            }
            if (uVar3 < uVar2) {
              uVar3 = uVar2;
            }
            F_00746120(&(*(int * PTR32 *)(gen_frame + 0x0)),uVar3);
            piVar4 = (*(int * PTR32 *)(gen_frame + 0x8));
            piVar6 = (*(int * PTR32 *)(gen_frame + 0x4));
            piVar7 = (*(int * PTR32 *)(gen_frame + 0x0));
          }
        }
        if (piVar6 != (int *)0x0) {
          *piVar6 = piVar7[iVar5 >> 2];
        }
      }
      else {
        if (piVar6 == piVar4) {
          uVar2 = (int)piVar6 - (int)((int)(uintptr_t)piVar7) >> 2;
          if (0x3ffffffe < uVar2) goto LAB_006e494f;
          uVar2 = uVar2 + 1;
          uVar3 = (int)piVar4 - (int)((int)(uintptr_t)piVar7) >> 2;
          if (uVar3 < uVar2) {
            if (0x3fffffff - (uVar3 >> 1) < uVar3) {
              uVar3 = 0;
            }
            else {
              uVar3 = uVar3 + (uVar3 >> 1);
            }
            if (uVar3 < uVar2) {
              uVar3 = uVar2;
            }
            F_00746120(&(*(int * PTR32 *)(gen_frame + 0x0)),uVar3);
            piVar4 = (*(int * PTR32 *)(gen_frame + 0x8));
            piVar6 = (*(int * PTR32 *)(gen_frame + 0x4));
            piVar7 = (*(int * PTR32 *)(gen_frame + 0x0));
          }
        }
        if (piVar6 != (int *)0x0) {
          *piVar6 = iVar5;
        }
      }
      piVar6 = piVar6 + 1;
      (*(int * PTR32 *)(gen_frame + 0x4)) = piVar6;
    }
LAB_006e48d6: ;
    uVar2 = (*(uint *)(gen_frame + 0x10)) + 4;
    (*(uint *)(gen_frame + 0x10)) = uVar2;
    this = (*(undefined * PTR32 *)(gen_frame + 0x18));
    if (0x17 < uVar2) {
      this_00 = (undefined4 *)F_00406b90(0x20,0,0);
      if (this_00 == (undefined4 *)0x0) {
        this_00 = (undefined4 *)0x0;
      }
      else {
        uVar2 = (int)piVar6 - (int)((int)(uintptr_t)piVar7) >> 2;
        (*(uint *)(gen_frame + 0x10)) = uVar2;
        F_00cb4700(this_00,uVar2,((param_3 & 0xff) << 8 | param_1 & 0xff) << 8 | param_2 & 0xff);
        this_00[5] = (*(uint *)(gen_frame + 0x10));
        *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10b9198));
        this_00[6] = (*(undefined * PTR32 *)(gen_frame + 0x18));
        this_00[7] = ((code *)REFP(0x6dff80));
      }
      *(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x570) = this_00;
      param_3 = 0;
      iVar5 = param_3;
      for (piVar4 = piVar7; piVar4 != piVar6; piVar4 = piVar4 + 1) {
        F_00cb4540(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x570),iVar5,*piVar4);
        iVar5 = iVar5 + 1;
      }
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x56c) + 0x48))))
                        (*(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x56c),*(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x570));
      if (piVar7 != (int *)0x0) {
        uVar2 = F_00406ad0(piVar7);
      }
      return uVar2;
    }
  } while( true );
}

/* ref: FUN_006e49c0 */
byte F_006e49c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6e49c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ushort uVar1;
  int iVar2;
  short * psVar3;
  uint uVar4;
  ushort * puVar5;
  int iVar6;
  ushort * puVar7;
  
  for (psVar3 = *(short * PTR32 *)(REFG(int, 0x1488344) + 0x7ac); psVar3 != *(short * PTR32 *)(REFG(int, 0x1488344) + 0x7b0);
      psVar3 = psVar3 + 8) {
    if ((*psVar3 != 0) && ((char)psVar3[6] == '\0')) {
      return 0;
    }
  }
  (*(int *)(gen_frame + 0x8)) = *(int *)(REFG(int, 0x1488344) + 0x50);
  uVar4 = F_00a4ffd0();
  iVar6 = 0;
  puVar7 = (ushort *)(uVar4 + 0x1688);
  do {
    uVar1 = *puVar7;
    if (uVar1 != 0) {
      (*(uint *)(gen_frame + 0x4)) = (uint)uVar1;
      F_00744670((undefined *)((*(int *)(gen_frame + 0x8)) + 0x344),&(*(int *)(gen_frame + 0x0)),&(*(uint *)(gen_frame + 0x4)));
      if ((*(int *)(gen_frame + 0x0)) == *(int *)((*(int *)(gen_frame + 0x8)) + 0x348)) {
        for (puVar5 = *(ushort * PTR32 *)(REFG(int, 0x1488344) + 0x7ac);
            puVar5 != *(ushort * PTR32 *)(REFG(int, 0x1488344) + 0x7b0); puVar5 = puVar5 + 8) {
          if (*puVar5 == uVar1) {
            iVar2 = *(int *)(puVar5 + 2);
            if (((*(char *)((int)this + 0x265) == '\0') && (*(char *)((int)this + 0x266) == '\0'))
               && (*(char *)((int)this + 0x267) == '\0')) {
              if ((iVar2 != 1) && (iVar2 != 2)) break;
            }
            else if (iVar2 != 3) break;
            if ((char)puVar7[1] == -1) {
              return 1;
            }
            break;
          }
        }
      }
    }
    iVar6 = iVar6 + 1;
    puVar7 = puVar7 + 8;
    if (0xf < iVar6) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_006e4ad0 */
uint F_006e4ad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e4ad0u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_1;
  if (param_1 < 10) {
    (&REFG(undefined4, 0x1489d20))[param_1] = param_2;
    (&REFG(undefined1, 0x1489d98))[param_1] = (undefined1)param_3;
    uVar1 = param_2 & 0xffff | 0x30000;
    uVar2 = 0;
    if ((uVar1 != 0) && (uVar2 = F_006dda70(REFG(undefined4, 0x1488344),uVar1), uVar2 != 0)) {
      *(undefined1 *)(uVar2 + 0x148) = (undefined1)param_3;
    }
  }
  return uVar2;
}

/* ref: FUN_006e4b30 */
uint F_006e4b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e4b30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_006e44c0(this,param_1);
  F_00cb4700((undefined *)((int)this + 0xf8),8,0);
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x138) = 0;
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined4 *)((int)this + 0x144) = 0;
  *(undefined4 *)((int)this + 0x148) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[144])REFP(0x10b9adc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xf8) = (*(undefined * PTR32 (*)[2])REFP(0x10b9ad0));
  *(byte *)((int)this + 0x14c) = *(byte *)((int)this + 0x14c) & 0xfc;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  return (uint)this;
}

/* ref: Client::Game::Event::CustomTalkEventHandler::vf144 */
unsigned int F_006e4be0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e4be0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  if ((char)param_1 != '\0') {
    bVar1 = F_00735e00(this,this);
    if (bVar1 == 0) {
      if (*(short *)(this + 0x54) != -1) {
        F_006e3100(REFG(undefined4, 0x1488344),0x34,1);
      }
    }
    else {
      this[0x1c] = (undefined1)((byte)this[0x1c] & 0xfd);
      if (((byte)this[0x1c] & 1) == 0) {
        this[0x1c] = (undefined1)((byte)this[0x1c] | 1);
        ((code *)*(gen_code32 *)(*(int *)this + 0x23c))(this);
        return 0;
      }
    }
  }
  return 0;
}

/* ref: FUN_006e4c40 */
uint F_006e4c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e4c40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_006e44c0(this,param_1);
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined1 *)((int)this + 0x108) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[144])REFP(0x10b9d24));
  return (uint)this;
}

/* ref: FUN_006e4c80 */
uint F_006e4c80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e4c80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_006e44c0(this,param_1);
  *(byte *)((int)this + 0x184) = *(byte *)((int)this + 0x184) & 0xf0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[144])REFP(0x10b9f6c));
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined2 *)((int)this + 0x124) = 0;
  *(undefined4 *)((int)this + 0x18a) = 0;
  *(undefined1 *)((int)this + 0x192) = 0;
  *(undefined2 *)((int)this + 0x194) = 0;
  *(undefined1 *)((int)this + 0x196) = 0;
  *(undefined4 *)((int)this + 0x186) = 0;
  *(undefined4 *)((int)this + 0x18e) = 0;
  *(undefined4 *)((int)this + 0x1e8) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  F_00c48350((undefined *)((int)this + 0x128),0,0x50);
  *(undefined4 *)((int)this + 0x178) = 0;
  *(undefined4 *)((int)this + 0x17c) = 0;
  return (uint)this;
}

/* ref: Client::Game::Event::QuestEventHandler::vf117 */
byte F_006e4d50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e4d50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  if (REFG(int, 0x1379694) == 0) {
    return 0;
  }
  bVar1 = F_006e17f0(this,REFG(int, 0x1379694),param_1,param_2);
  return bVar1;
}

/* ref: FUN_006e4d80 */
byte F_006e4d80(void)
{
  GEN_ENTER(0x6e4d80u, 0u, 0u, 0u, 0u);
  undefined * this;
  uint uVar1;
  int * piVar2;
  ushort * puVar3;
  int iVar4;
  
  uVar1 = F_00a4ffd0();
  this = REFG(undefined4, 0x1488344);
  iVar4 = 0;
  puVar3 = (ushort *)(uVar1 + 0x13b8);
  while ((*puVar3 == 0 ||
         ((((uVar1 = *puVar3 | 0x10000, uVar1 != 0 &&
            (piVar2 = (int *)F_006dda70(this,uVar1), piVar2 != (int *)0x0)) &&
           (uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2), (char)uVar1 != '\0')) &&
          (*(char *)piVar2[0x5b] != '\0'))))) {
    iVar4 = iVar4 + 1;
    puVar3 = puVar3 + 8;
    if (0x1d < iVar4) {
      return 1;
    }
  }
  return 0;
}

/* ref: Client::Game::Event::QuestEventHandler::vf48 */
uint F_006e4e30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e4e30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_006e15b0(this,param_1);
  return uVar1;
}

/* ref: Client::Game::Event::QuestEventHandler::vf141 */
uint F_006e4e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e4e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int iVar2;
  byte bVar3;
  undefined4 * puVar4;
  uint uVar5;
  
  bVar3 = F_006dbfa0(this);
  (*(byte *)(gen_frame + 0xb)) = bVar3;
  if (param_1 != (int *)0x0) {
    puVar4 = (undefined4 *)F_004296a0(0x14,0,800);
    *puVar4 = *(undefined4 *)(this + 0x10);
    puVar4[1] = *(undefined4 *)(this + 0x10);
    puVar4[2] = *(undefined4 *)(this + 0x10);
    *(undefined2 *)(puVar4 + 4) = 0;
    if (puVar4 + 3 != (undefined4 *)0x0) {
      puVar4[3] = param_1;
    }
    F_00746c00(this + 0xc,((undefined1 *)(gen_frame + 0x0)),puVar4,0);
  }
  *(int *)(this + 0x40) = *(int *)(this + 0x40) + 1;
  iVar2 = REFG(int, 0x1379694);
  uVar1 = *(uint *)(this + 0x40);
  if ((param_1 != (int *)0x0) && (REFG(int, 0x1379694) != 0)) {
    uVar5 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
    if ((uVar5 == 2) &&
       ((param_1[0x21] != -0x20000000 && (bVar3 = F_006d9290(this,iVar2,0), bVar3 != 0)))) {
      ((code *)*(gen_code32 *)(*(int *)this + 0x1c8))(this);
      ((code *)*(gen_code32 *)(*(int *)this + 0x1f8))(this);
      ((code *)*(gen_code32 *)(*(int *)this + 0x1e0))(this);
    }
    if (((((byte)this[0x36e] & 2) != 0) && ((*(byte *)(gen_frame + 0xb)) == 0)) &&
       (bVar3 = F_006dc0c0(this,param_1), bVar3 != 0)) {
      ((code *)*(gen_code32 *)(*(int *)this + 0x22c))(this);
    }
  }
  return uVar1;
}

/* ref: Client::Game::Event::QuestEventHandler::vf142 */
uint F_006e4f40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e4f40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  byte bVar2;
  uint uVar3;
  
  iVar1 = REFG(int, 0x1379694);
  if ((param_1 != (int *)0x0) && (REFG(int, 0x1379694) != 0)) {
    uVar3 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
    if ((uVar3 == 2) && (param_1[0x21] != -0x20000000)) {
      bVar2 = F_006d9290(this,iVar1,0);
      if (bVar2 != 0) {
        ((code *)*(gen_code32 *)(*(int *)this + 0x1c8))(this);
        ((code *)*(gen_code32 *)(*(int *)this + 0x1f8))(this);
        ((code *)*(gen_code32 *)(*(int *)this + 0x1e0))(this);
        ((code *)*(gen_code32 *)(*(int *)this + 0x1e4))(this);
      }
    }
    uVar3 = F_006e4630((undefined *)this,param_1);
    if (((byte)this[0x36e] & 2) != 0) {
      bVar2 = F_006dbfa0(this);
      if (bVar2 == 0) {
        ((code *)*(gen_code32 *)(*(int *)this + 0x22c))(this);
      }
    }
    return uVar3;
  }
  uVar3 = F_006e4630((undefined *)this,param_1);
  return uVar3;
}

/* ref: FUN_006e5000 */
uint F_006e5000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e5000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  F_006e44c0(this,param_1);
  *(undefined * PTR32 * PTR32 *)((int)this + 0xf8) =
       (*(undefined * PTR32 (*)[2])REFP(0x10b815c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[144])REFP(0x10ba1bc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xf8) = (*(undefined * PTR32 (*)[2])REFP(0x10ba1b0));
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  F_0042cc20((undefined *)((int)this + 0x10c),&REFG(undefined, 0x10b3a62),REFG(undefined4, 0x108cc50));
  puVar1 = (undefined4 *)((int)this + 0x160);
  param_1 = 0x27;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0xfffffff;
    *(undefined1 *)(puVar1 + 3) = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    F_0042b630(puVar1 + 9);
    *(undefined1 *)(puVar1 + 0x1e) = 0;
    puVar1 = puVar1 + 0x1f;
    param_1 = param_1 + -1;
  } while (-1 < param_1);
  *(undefined4 *)((int)this + 0x14c0) = 0;
  *(undefined4 *)((int)this + 0x14c4) = 0xfffffff;
  *(undefined4 *)((int)this + 0x14c8) = 0;
  *(undefined1 *)((int)this + 0x14cc) = 0;
  *(undefined4 *)((int)this + 0x14d0) = 0;
  *(undefined4 *)((int)this + 0x14d4) = 0;
  *(undefined1 *)((int)this + 0x14d8) = 0;
  F_0042b630((int)this + 0x14dc);
  *(undefined4 *)((int)this + 0x1530) = 0;
  puVar1 = (undefined4 *)((int)this + 0x1538);
  param_1 = 9;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined1 *)(puVar1 + 4) = 0;
    F_0042b630(puVar1 + 5);
    *(undefined1 *)(puVar1 + 0x1a) = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1e] = 0;
    puVar1[0x1f] = 0;
    *(undefined4 *)((int)puVar1 + 0x9a) = 0;
    *(undefined1 *)((int)puVar1 + 0x9e) = 0;
    puVar1[0x28] = 0;
    puVar1 = puVar1 + 0x2a;
    param_1 = param_1 + -1;
  } while (-1 < param_1);
  *(undefined1 *)((int)this + 0x1bc8) = 0;
  *(undefined4 *)((int)this + 0x1bcc) = 0;
  *(undefined4 *)((int)this + 0x1bd0) = 0;
  *(undefined4 *)((int)this + 0x1bd4) = 0;
  *(undefined4 *)((int)this + 0x1bdc) = 0;
  *(undefined4 *)((int)this + 0x1be0) = 0;
  *(undefined4 *)((int)this + 0x1be4) = 0;
  *(undefined4 *)((int)this + 0x1be8) = 0;
  *(undefined4 *)((int)this + 0x1bec) = 0;
  *(undefined1 *)((int)this + 0x1bf0) = 0;
  *(undefined2 *)((int)this + 0x1bf2) = 0;
  *(undefined4 *)((int)this + 0x1bf4) = 0;
  *(undefined4 *)((int)this + 0x1bf8) = 0;
  *(undefined4 *)((int)this + 0x1c00) = 0;
  *(undefined4 *)((int)this + 0x1c04) = 0;
  *(undefined4 *)((int)this + 0x1c08) = 0;
  *(undefined4 *)((int)this + 0x1c0c) = 0;
  *(undefined4 *)((int)this + 0x1bd8) = 0xffffffff;
  *(undefined2 *)((int)this + 0x1bfc) = 0x100;
  return (uint)this;
}

/* ref: FUN_006e51b0 */
uint F_006e51b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6e51b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x3a0];
  undefined4 * puVar1;
  int * piVar2;
  undefined * this_00;
  int iVar3;
  uint * this_01;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined * PTR32 * ppuVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  (*(uint *)(gen_frame + 0x398)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x39c);
  REFG(undefined4, 0x13241d0) = this;
  F_0071db50(((undefined1 *)(gen_frame + 0x0)));
  F_006e1f70(this,(uint)*(ushort *)((int)this + 0x1d4),((undefined1 *)(gen_frame + 0x0)));
  puVar1 = ((undefined4 *)(gen_frame + 0xf0));
  iVar3 = 0x54;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  F_006c4440(((undefined1 *)(gen_frame + 0x0)),((undefined4 *)(gen_frame + 0xf0)));
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar10 = 4;
  uVar9 = 0;
  uVar8 = 0;
  ppuVar7 = &REFG(undefined * PTR32, 0x13241cc);
  puVar1 = ((undefined4 *)(gen_frame + 0xf0));
  uVar6 = 0x55;
  uVar5 = 0x15;
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
  REFG(undefined4, 0x13241d4) = F_008668b0(this_00,uVar5,uVar6,puVar1,ppuVar7,uVar8,uVar9,uVar10);
  this_01 = &(*(uint *)(gen_frame + 0x398));
  iVar3 = 0x54;
  do {
    this_01 = this_01 + -2;
    F_005a2670(this_01);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  F_0042c880(((undefined1 *)(gen_frame + 0x9c)));
  uVar4 = F_0042c880(((undefined1 *)(gen_frame + 0x38)));
  F_00c47745((*(uint *)(gen_frame + 0x398)) ^ (uint)(uint)(gen_frame + 0x39c));
  return (uint)uVar4;
}

/* ref: FUN_006e52a0 */
uint F_006e52a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e52a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_006e44c0(this,param_1);
  *(undefined * PTR32 * PTR32 *)((int)this + 0xf8) =
       (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined1 *)((int)this + 0x109) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[144])REFP(0x10ba404));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xf8) = (*(undefined * PTR32 (*)[2])REFP(0x10ba648));
  *(undefined4 *)((int)this + 0x104) = 0;
  return (uint)this;
}

/* ref: FUN_006e52f0 */
uint F_006e52f0(void)
{
  GEN_ENTER(0x6e52f0u, 0u, 0u, 0u, 0u);
  undefined4 * this;
  
  this = (undefined4 *)F_00406b90(0x10c,0,0);
  if (this != (undefined4 *)0x0) {
    F_006e44c0(this,0x150001);
    this[0x3e] = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
    *this = (*(undefined * PTR32 (*)[144])REFP(0x10ba404));
    this[0x3e] = (*(undefined * PTR32 (*)[2])REFP(0x10ba648));
    this[0x3f] = 0;
    this[0x41] = 0;
    *(undefined1 *)((int)this + 0x109) = 0;
    return (uint)this;
  }
  return 0;
}

/* ref: Client::Game::Event::WarpEventHandler::vf144 */
unsigned int F_006e5360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e5360u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  if ((char)param_1 != '\0') {
    bVar1 = F_00736010(this,this);
    if (bVar1 == 0) {
      if (*(short *)(this + 0x54) != -1) {
        F_006e3100(REFG(undefined4, 0x1488344),0x34,1);
      }
    }
    else {
      this[0x1c] = (undefined1)((byte)this[0x1c] & 0xfd);
      if (((byte)this[0x1c] & 1) == 0) {
        this[0x1c] = (undefined1)((byte)this[0x1c] | 1);
        ((code *)*(gen_code32 *)(*(int *)this + 0x23c))(this);
        return 0;
      }
    }
  }
  return 0;
}

/* ref: Client::Game::Event::WarpEventHandler::vf145 */
unsigned int F_006e53c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e53c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if ((this[0x24c] == (undefined1)0x0) && (*(short *)(this + 0x54) != -1)) {
    F_006e3100(REFG(undefined4, 0x1488344),0x34,1);
  }
  return 0;
}

/* ref: Client::Game::Event::StoryEventHandler::vf144 */
unsigned int F_006e53f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e53f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  if ((char)param_1 != '\0') {
    bVar1 = F_007360c0(this,this);
    if (bVar1 == 0) {
      if (*(short *)(this + 0x54) != -1) {
        F_006e3100(REFG(undefined4, 0x1488344),0x34,1);
      }
    }
    else {
      this[0x1c] = (undefined1)((byte)this[0x1c] & 0xfd);
      if (((byte)this[0x1c] & 1) == 0) {
        this[0x1c] = (undefined1)((byte)this[0x1c] | 1);
        ((code *)*(gen_code32 *)(*(int *)this + 0x23c))(this);
        return 0;
      }
    }
  }
  return 0;
}

/* ref: FUN_006e5450 */
uint F_006e5450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e5450u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  undefined4 * puVar2;
  undefined * pvVar3;
  uint uVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  uVar4 = F_00748ea0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  pvVar3 = (*(undefined * PTR32 *)(gen_frame + 0x8));
  if (((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30)))) &&
     (piVar1 = *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10), piVar1 != (int *)0x0)) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x238))(piVar1,(*(undefined4 *)&gen_args[2]));
    if (uVar4 == 0) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar3 + 0x10) + 0x10))))(*(int * PTR32 *)((int)pvVar3 + 0x10));
      puVar2 = *(undefined4 * PTR32 *)((int)pvVar3 + 0x10);
      if (puVar2 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
        *(undefined4 *)((int)pvVar3 + 0x10) = 0;
      }
      uVar4 = F_0074ccc0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))),&(*(undefined4 *)&gen_args[1]));
    }
  }
  return uVar4;
}

/* ref: FUN_006e54c0 */
byte F_006e54c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e54c0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  
  F_00748ea0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))),&(*(int *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  if ((*(int *)(gen_frame + 0x8)) == *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30)))) {
    puVar1 = (undefined4 *)F_004296a0(0x18,0,800);
    *puVar1 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30)));
    puVar1[1] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30)));
    puVar1[2] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30)));
    *(undefined2 *)(puVar1 + 5) = 0;
    if (puVar1 + 3 != (undefined4 *)0x0) {
      puVar1[3] = (*(undefined4 *)&gen_args[1]);
      puVar1[4] = (*(undefined4 *)&gen_args[2]);
    }
    F_00746d20(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))),((undefined1 *)(gen_frame + 0x4)),puVar1,0);
    return 1;
  }
  return 0;
}

/* ref: Client::Game::Event::BattleLeveDirector::vf144 */
uint F_006e5540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e5540u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined1 BVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  
  if ((char)param_1 == '\0') {
    bVar2 = F_006d8320((undefined *)this);
    uVar3 = CONCAT31(extraout_var,bVar2);
    if (bVar2 == 0) {
      uVar3 = F_00a51200(0x4c,5,0,0,0);
      return uVar3;
    }
  }
  else {
    bVar2 = F_007361b0(this,this);
    if (bVar2 == 0) {
      uVar3 = 0xffff;
      if (*(short *)(this + 0x54) != -1) {
        bVar2 = F_006e3100(REFG(undefined4, 0x1488344),0x34,1);
        uVar3 = CONCAT31(extraout_var_01,bVar2);
      }
    }
    else {
      bVar2 = F_006d8320((undefined *)this);
      uVar3 = CONCAT31(extraout_var_00,bVar2);
      if (bVar2 == 0) {
        F_006c3b30(this);
        uVar3 = F_00a51200(0x4c,0,0,0,0);
      }
      this[0x1c] = (undefined1)((byte)this[0x1c] & 0xfd);
      BVar1 = this[0x1c];
      uVar3 = CONCAT31((int3)(uVar3 >> 8),BVar1);
      if (((byte)BVar1 & 1) == 0) {
        this[0x1c] = (undefined1)((byte)BVar1 | 1);
        uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x23c))(this);
        return uVar3;
      }
    }
  }
  return uVar3;
}

/* ref: Client::Game::Event::GatheringLeveDirector::vf144 */
uint F_006e55e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e55e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined1 GVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  
  if ((char)param_1 == '\0') {
    bVar2 = F_006d8320((undefined *)this);
    uVar3 = CONCAT31(extraout_var,bVar2);
    if (bVar2 == 0) {
      uVar3 = F_00a51200(0x4c,5,0,0,0);
      return uVar3;
    }
  }
  else {
    bVar2 = F_00736260(this,this);
    if (bVar2 == 0) {
      uVar3 = 0xffff;
      if (*(short *)(this + 0x54) != -1) {
        bVar2 = F_006e3100(REFG(undefined4, 0x1488344),0x34,1);
        uVar3 = CONCAT31(extraout_var_01,bVar2);
      }
    }
    else {
      bVar2 = F_006d8320((undefined *)this);
      uVar3 = CONCAT31(extraout_var_00,bVar2);
      if (bVar2 == 0) {
        uVar3 = F_00a51200(0x4c,0,0,0,0);
      }
      this[0x1c] = (undefined1)((byte)this[0x1c] & 0xfd);
      GVar1 = this[0x1c];
      uVar3 = CONCAT31((int3)(uVar3 >> 8),GVar1);
      if (((byte)GVar1 & 1) == 0) {
        this[0x1c] = (undefined1)((byte)GVar1 | 1);
        uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x23c))(this);
        return uVar3;
      }
    }
  }
  return uVar3;
}

/* ref: Client::Game::Event::CompanyLeveDirector::vf144 */
uint F_006e5680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e5680u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined1 CVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  
  if ((char)param_1 == '\0') {
    bVar2 = F_006d8320((undefined *)this);
    uVar3 = CONCAT31(extraout_var,bVar2);
    if (bVar2 == 0) {
      uVar3 = F_00a51200(0x4c,5,0,0,0);
      return uVar3;
    }
  }
  else {
    bVar2 = F_00736310(this,this);
    if (bVar2 == 0) {
      uVar3 = 0xffff;
      if (*(short *)(this + 0x54) != -1) {
        bVar2 = F_006e3100(REFG(undefined4, 0x1488344),0x34,1);
        uVar3 = CONCAT31(extraout_var_01,bVar2);
      }
    }
    else {
      bVar2 = F_006d8320((undefined *)this);
      uVar3 = CONCAT31(extraout_var_00,bVar2);
      if (bVar2 == 0) {
        uVar3 = F_00a51200(0x4c,0,0,0,0);
      }
      this[0x1c] = (undefined1)((byte)this[0x1c] & 0xfd);
      CVar1 = this[0x1c];
      uVar3 = CONCAT31((int3)(uVar3 >> 8),CVar1);
      if (((byte)CVar1 & 1) == 0) {
        this[0x1c] = (undefined1)((byte)CVar1 | 1);
        uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x23c))(this);
        return uVar3;
      }
    }
  }
  return uVar3;
}

/* ref: FUN_006e5720 */
byte F_006e5720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e5720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  piVar4 = *(int * PTR32 *)((int)this + 0x2c);
  do {
    if (piVar4 == *(int * PTR32 *)((int)this + 0x30)) {
LAB_006e574f: ;
      uVar3 = *(uint *)((int)this + 0x58);
      piVar4 = *(int * PTR32 *)((int)this + 0x4c);
      (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)((int)this + 0x4c);
      ((int * PTR32 *)(gen_frame + 0xc))[0] = piVar4;
      uVar5 = *(int *)((int)this + 0x5c) + uVar3;
      piVar6 = piVar4;
      while( true ) {
        if (uVar3 == uVar5) {
          return 0;
        }
        if (piVar6 == (int *)0x0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *piVar6;
        }
        uVar2 = uVar3 >> 1;
        if (*(uint *)(iVar7 + 8) <= uVar2) {
          uVar2 = uVar2 - *(uint *)(iVar7 + 8);
        }
        if (*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar7 + 4) + uVar2 * 4))) + (uVar3 & 1) * 8))) == param_1) break;
        uVar3 = uVar3 + 1;
        piVar6 = ((int * PTR32 *)(gen_frame + 0xc))[0];
      }
      piVar6 = (int *)0x0;
      if ((piVar4 != (int *)0x0) && ((undefined4 *)*piVar4 != (undefined4 *)0x0)) {
        piVar6 = *(int * PTR32 *)*piVar4;
      }
      piVar4 = (int *)0x0;
      if ((piVar6 != (int *)0x0) && ((undefined4 *)*piVar6 != (undefined4 *)0x0)) {
        piVar4 = *(int * PTR32 *)*piVar6;
      }
      uVar9 = 0;
      if ((piVar4 != (int *)0x0) && ((undefined4 *)*piVar4 != (undefined4 *)0x0)) {
        uVar9 = *(undefined4 *)*piVar4;
      }
      uVar8 = 0;
      if ((piVar6 != (int *)0x0) && ((undefined4 *)*piVar6 != (undefined4 *)0x0)) {
        uVar8 = *(undefined4 *)*piVar6;
      }
      F_00749770((undefined *)((int)this + 0x4c),((int * PTR32 *)(gen_frame + 0xc)),uVar8,0,uVar3,uVar9,0,uVar3 + 1);
      return 1;
    }
    if ((*piVar4 != 0) && (**(int * PTR32 *)(*piVar4 + 0x1d4) == param_1)) {
      uVar3 = ((code *)*(gen_code32 *)(*(int *)*piVar4 + 0x238))((int *)*piVar4,0);
      if (uVar3 == 0) {
        if (*(char *)((int)this + 100) != '\0') {
          ((code *)*(gen_code32 *)(*(int *)*piVar4 + 0x10))((int *)*piVar4);
          puVar1 = (undefined4 *)*piVar4;
          if (puVar1 != (undefined4 *)0x0) {
            ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
            *piVar4 = 0;
          }
          F_00c46e20(piVar4,piVar4 + 1,(*(int *)((int)this + 0x30) - (int)(piVar4 + 1) >> 2) * 4);
          *(int *)((int)this + 0x30) = *(int *)((int)this + 0x30) + -4;
        }
        return 1;
      }
      goto LAB_006e574f;
    }
    piVar4 = piVar4 + 1;
  } while( true );
}

/* ref: FUN_006e5880 */
byte F_006e5880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e5880u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  piVar3 = *(int * PTR32 *)((int)this + 0x2c);
  do {
    if (piVar3 == *(int * PTR32 *)((int)this + 0x30)) {
LAB_006e58b6: ;
      uVar6 = *(uint *)((int)this + 0x58);
      piVar3 = *(int * PTR32 *)((int)this + 0x4c);
      (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)((int)this + 0x4c);
      uVar7 = *(int *)((int)this + 0x5c) + uVar6;
      (*(int * PTR32 *)(gen_frame + 0xc)) = piVar3;
      (*(uint *)(gen_frame + 0x8)) = uVar7;
      piVar5 = piVar3;
      do {
        if (uVar6 == uVar7) {
          return 0;
        }
        if (piVar5 == (int *)0x0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *piVar5;
        }
        uVar4 = uVar6 >> 1;
        uVar7 = uVar4;
        if (*(uint *)(iVar2 + 8) <= uVar4) {
          uVar7 = uVar4 - *(uint *)(iVar2 + 8);
        }
        if (*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar2 + 4) + uVar7 * 4))) + (uVar6 & 1) * 8))) == param_1) {
          if (piVar3 == (int *)0x0) {
            iVar2 = 0;
          }
          else {
            iVar2 = *piVar3;
          }
          if (*(uint *)(iVar2 + 8) <= uVar4) {
            uVar4 = uVar4 - *(uint *)(iVar2 + 8);
          }
          if (*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar2 + 4) + uVar4 * 4))) + 4 + (uVar6 & 1) * 8))) == param_2)
          {
            piVar5 = (int *)0x0;
            if ((piVar3 != (int *)0x0) && ((undefined4 *)*piVar3 != (undefined4 *)0x0)) {
              piVar5 = *(int * PTR32 *)*piVar3;
            }
            piVar3 = (int *)0x0;
            if ((piVar5 != (int *)0x0) && ((undefined4 *)*piVar5 != (undefined4 *)0x0)) {
              piVar3 = *(int * PTR32 *)*piVar5;
            }
            uVar9 = 0;
            if ((piVar3 != (int *)0x0) && ((undefined4 *)*piVar3 != (undefined4 *)0x0)) {
              uVar9 = *(undefined4 *)*piVar3;
            }
            uVar8 = 0;
            if ((piVar5 != (int *)0x0) && ((undefined4 *)*piVar5 != (undefined4 *)0x0)) {
              uVar8 = *(undefined4 *)*piVar5;
            }
            F_00749770((undefined *)((int)this + 0x4c),((undefined1 *)(gen_frame + 0x0)),uVar8,0,uVar6,uVar9,0,uVar6 + 1);
            return 1;
          }
        }
        uVar6 = uVar6 + 1;
        piVar5 = (*(int * PTR32 *)(gen_frame + 0xc));
        uVar7 = (*(uint *)(gen_frame + 0x8));
      } while( true );
    }
    piVar5 = (int *)*piVar3;
    if ((*(int *)piVar5[0x75] == param_1) && (piVar5[0x76] == param_2)) {
      uVar6 = ((code *)*(gen_code32 *)(*piVar5 + 0x238))(piVar5,0);
      if (uVar6 == 0) {
        if (*(char *)((int)this + 100) != '\0') {
          ((code *)*(gen_code32 *)(*(int *)*piVar3 + 0x10))((int *)*piVar3);
          puVar1 = (undefined4 *)*piVar3;
          if (puVar1 != (undefined4 *)0x0) {
            ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
            *piVar3 = 0;
          }
          F_00c46e20(piVar3,piVar3 + 1,(*(int *)((int)this + 0x30) - (int)(piVar3 + 1) >> 2) * 4);
          *(int *)((int)this + 0x30) = *(int *)((int)this + 0x30) + -4;
        }
        return 1;
      }
      goto LAB_006e58b6;
    }
    piVar3 = piVar3 + 1;
  } while( true );
}

/* ref: Client::Game::Event::TestDirector::vf144 */
uint F_006e5a10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e5a10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined1 TVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  
  if ((char)param_1 == '\0') {
    bVar2 = F_006d8320((undefined *)this);
    uVar3 = CONCAT31(extraout_var,bVar2);
    if (bVar2 == 0) {
      uVar3 = F_00a51200(0x4c,5,0,0,0);
      return uVar3;
    }
  }
  else {
    bVar2 = F_007363c0(this,this);
    if (bVar2 == 0) {
      uVar3 = 0xffff;
      if (*(short *)(this + 0x54) != -1) {
        bVar2 = F_006e3100(REFG(undefined4, 0x1488344),0x34,1);
        uVar3 = CONCAT31(extraout_var_01,bVar2);
      }
    }
    else {
      bVar2 = F_006d8320((undefined *)this);
      uVar3 = CONCAT31(extraout_var_00,bVar2);
      if (bVar2 == 0) {
        uVar3 = F_00a51200(0x4c,0,0,0,0);
      }
      this[0x1c] = (undefined1)((byte)this[0x1c] & 0xfd);
      TVar1 = this[0x1c];
      uVar3 = CONCAT31((int3)(uVar3 >> 8),TVar1);
      if (((byte)TVar1 & 1) == 0) {
        this[0x1c] = (undefined1)((byte)TVar1 | 1);
        uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x23c))(this);
        return uVar3;
      }
    }
  }
  return uVar3;
}

/* ref: Client::Game::Event::OpeningEventHandler::vf144 */
unsigned int F_006e5ab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e5ab0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  if ((char)param_1 != '\0') {
    bVar1 = F_00736470(this,this);
    if (bVar1 == 0) {
      if (*(short *)(this + 0x54) != -1) {
        F_006e3100(REFG(undefined4, 0x1488344),0x34,1);
      }
    }
    else {
      this[0x1c] = (undefined1)((byte)this[0x1c] & 0xfd);
      if (((byte)this[0x1c] & 1) == 0) {
        this[0x1c] = (undefined1)((byte)this[0x1c] | 1);
        ((code *)*(gen_code32 *)(*(int *)this + 0x23c))(this);
        return 0;
      }
    }
  }
  return 0;
}

/* ref: FUN_006e5b10 */
uint F_006e5b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e5b10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x130];
  char cVar1;
  int * piVar2;
  undefined4 * puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 * puVar6;
  undefined4 * PTR32 * ppuVar7;
  undefined * this_00;
  undefined4 * puVar8;
  undefined4 extraout_EDX = 0;
  uint uVar9;
  ulonglong uVar10;
  
  uVar4 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
  if (uVar4 != 1) {
    if ((((REFG(int, 0x13238f8) != 0) || (*(int *)((int)this + 0x238) != 0)) ||
        (*(int *)((int)this + 0x224) != 0)) || (*(int *)((int)this + 0x738) != 0)) {
      uVar4 = ((code *)*(gen_code32 *)*param_1)(param_1);
      uVar10 = F_006d9e70(this);
      if ((uVar10 == CONCAT44(extraout_EDX,uVar4)) &&
         (uVar4 = F_006d9ec0(this_00), (char)uVar4 != '\0')) {
        F_006e33b0(this);
      }
    }
    uVar4 = F_00a5f3d0(param_1,((undefined4 *)(gen_frame + 0x8)));
    uVar9 = 0;
    if (uVar4 != 0) {
      do {
        uVar5 = ((code *)*(gen_code32 *)(*(int *)((undefined4 *)(gen_frame + 0x8))[(int)(uVar9)] + 8))((int *)((undefined4 *)(gen_frame + 0x8))[(int)(uVar9)]);
        if ((char)uVar5 != '\0') {
          ((code *)*(gen_code32 *)(*(int *)((undefined4 *)(gen_frame + 0x8))[(int)(uVar9)] + 0xb4))((int *)((undefined4 *)(gen_frame + 0x8))[(int)(uVar9)],param_1);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar4);
    }
  }
  F_006e4420((undefined *)((int)this + 0xc4),param_1);
  (*(int *)(gen_frame + 0x8c)) = 0;
  F_00c48350(((undefined1 *)(gen_frame + 0x90)),0,0x7c);
  uVar4 = ((code *)*(gen_code32 *)(*param_1 + 0x60))(param_1,&(*(int *)(gen_frame + 0x8c)));
  (*(uint *)(gen_frame + 0x124)) = uVar4;
  (*(uint *)(gen_frame + 0x128)) = 0;
  ppuVar7 = (undefined4 * PTR32 *)0x0;
  if (uVar4 != 0) {
    do {
      ppuVar7 = (undefined4 * PTR32 *)0x0;
      if (*(int *)(((undefined1 *)(gen_frame + 0x90)) + (*(uint *)(gen_frame + 0x128)) * 4 + -4) != 0) {
        uVar4 = *((uint *)GEN_TOP((*(int *)(((undefined1 *)(gen_frame + 0x90)) + (*(uint *)(gen_frame + 0x128)) * 4 + -4) + 8)));
        puVar8 = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)((int)this + 0x30))[1]));
        cVar1 = *(char *)((int)puVar8 + 0x15);
        (*(uint *)(gen_frame + 0x120)) = uVar4;
        puVar3 = *(undefined4 * PTR32 *)((int)this + 0x30);
        while (cVar1 == '\0') {
          if ((uint)puVar8[3] < uVar4) {
            puVar6 = (undefined4 *)puVar8[2];
            puVar8 = puVar3;
          }
          else {
            puVar6 = (undefined4 *)*puVar8;
          }
          puVar3 = puVar8;
          puVar8 = puVar6;
          cVar1 = *(char *)((int)puVar6 + 0x15);
        }
        (*(undefined4 * PTR32 *)(gen_frame + 0x11c)) = puVar3;
        if ((puVar3 == *(undefined4 * PTR32 *)((int)this + 0x30)) || (uVar4 < (uint)puVar3[3])) {
          (*(undefined4 * PTR32 *)(gen_frame + 0x118)) = *(undefined4 * PTR32 *)((int)this + 0x30);
          ppuVar7 = &(*(undefined4 * PTR32 *)(gen_frame + 0x118));
        }
        else {
          ppuVar7 = &(*(undefined4 * PTR32 *)(gen_frame + 0x11c));
        }
        puVar8 = *ppuVar7;
        if (((puVar8 != *(undefined4 * PTR32 *)((int)this + 0x30)) &&
            (piVar2 = (int *)puVar8[4], piVar2 != (int *)0x0)) &&
           (ppuVar7 = ((undefined4 * PTR32 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x238))(piVar2,param_1))),
           ppuVar7 == (undefined4 * PTR32 *)0x0)) {
          ((code *)*(gen_code32 *)(*(int *)puVar8[4] + 0x10))((int *)puVar8[4]);
          puVar3 = (undefined4 *)puVar8[4];
          if (puVar3 != (undefined4 *)0x0) {
            ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
            puVar8[4] = 0;
          }
          F_0073d240((undefined *)((int)this + 0x2c),&(*(undefined4 *)(gen_frame + 0x110)),&(*(uint *)(gen_frame + 0x120)));
          ppuVar7 = (undefined4 * PTR32 *)
                    F_00744dc0((undefined *)((int)this + 0x2c),((undefined1 *)(gen_frame + 0x10c)),(*(undefined4 *)(gen_frame + 0x110)),(*(undefined4 *)(gen_frame + 0x114)));
        }
      }
      uVar4 = (*(uint *)(gen_frame + 0x128)) + 1;
      (*(uint *)(gen_frame + 0x128)) = uVar4;
    } while (uVar4 < (*(uint *)(gen_frame + 0x124)));
  }
  return (uint)ppuVar7;
}

/* ref: FUN_006e5cf0 */
uint F_006e5cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e5cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  undefined * this_00;
  int * piVar2;
  uint uVar3;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
  if ((char)uVar1 == '\x01') {
    piVar2 = REFG(undefined4, 0x1379694);
    if ((REFG(undefined4, 0x1379694) != (int *)0x0) && (REFG(undefined4, 0x1379694) == param_1)) {
      uVar1 = F_006e3430(this);
      return uVar1;
    }
  }
  else {
    if (((char)uVar1 == '\x02') &&
       (uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0xb8))(param_1), (char)uVar1 != '\0')) {
      this_00 = (undefined *)F_00a5f290(param_1);
      uVar1 = F_0071cee0(this_00);
      if ((char)uVar1 != '\0') {
        return uVar1;
      }
    }
    uVar1 = F_00a5f3d0(param_1,((undefined4 *)(gen_frame + 0x8)));
    uVar3 = 0;
    piVar2 = (int *)0x0;
    if (uVar1 != 0) {
      do {
        piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)((undefined4 *)(gen_frame + 0x8))[(int)(uVar3)] + 0xac))
                                  ((int *)((undefined4 *)(gen_frame + 0x8))[(int)(uVar3)],param_1)));
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar1);
    }
  }
  return (uint)piVar2;
}

/* ref: FUN_006e5e00 */
uint F_006e5e00(unsigned int gen_a0)
{
  GEN_ENTER(0x6e5e00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  uint uVar3;
  
  iVar1 = REFG(int, 0x1379694);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  bVar2 = F_005d4e70();
  uVar3 = CONCAT31(extraout_var,bVar2);
  if ((bVar2 != 0) || (iVar1 != 0)) {
    bVar2 = F_00a505f0();
    uVar3 = CONCAT31(extraout_var_00,bVar2);
    if (bVar2 != 0) {
      bVar2 = F_00a50610();
      uVar3 = CONCAT31(extraout_var_01,bVar2);
      if (bVar2 != 0) {
        (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x1;
        uVar3 = F_006de320(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),1);
      }
    }
  }
  return uVar3;
}

/* ref: FUN_006e5e50 */
uint F_006e5e50(unsigned int gen_a0)
{
  GEN_ENTER(0x6e5e50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  uint uVar3;
  
  iVar1 = REFG(int, 0x1379694);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  bVar2 = F_005d4e70();
  uVar3 = CONCAT31(extraout_var,bVar2);
  if ((bVar2 != 0) || (iVar1 != 0)) {
    bVar2 = F_00a505f0();
    uVar3 = CONCAT31(extraout_var_00,bVar2);
    if (bVar2 != 0) {
      bVar2 = F_00a50610();
      uVar3 = CONCAT31(extraout_var_01,bVar2);
      if (bVar2 != 0) {
        (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x1;
        uVar3 = F_006de320(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),1);
      }
    }
  }
  return uVar3;
}

/* ref: FUN_006e5ea0 */
uint F_006e5ea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6e5ea0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  uint in_EAX = 0;
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar3 = (*(uint *)&gen_args[1]);
  if ((char)(*(uint *)&gen_args[3]) != '\0') {
    uVar2 = (*(uint *)&gen_args[1]) & 0xffff;
    F_006de0e0((*(undefined * PTR32 *)&gen_args[0]),0x3b);
    (*(uint *)&gen_args[3]) = uVar2 | 0x10000;
    F_00748ea0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))),&(*(uint *)&gen_args[1]),&(*(uint *)&gen_args[3]));
    uVar2 = (*(uint *)&gen_args[1]);
    if ((*(uint *)&gen_args[1]) != *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30)))) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(uint *)&gen_args[1]) + 0x10) + 0x22c))))(*(int * PTR32 *)((*(uint *)&gen_args[1]) + 0x10));
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x10) + 0x1f0))))(*(int * PTR32 *)(uVar2 + 0x10));
    }
    piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar4 = 1;
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1)));
    in_EAX = F_008229a0(this_00,uVar3,uVar4);
  }
  return in_EAX;
}

/* ref: FUN_006e5f20 */
uint F_006e5f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e5f20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  bVar1 = F_006e5720((undefined *)((int)this + 0x5c),param_1);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 != 0) {
    if ((REFG(int, 0x1379694) != 0) && (*(int *)(REFG(int, 0x1379694) + 0xe4) == param_1)) {
      F_00a5f530(REFG(int, 0x1379694),0);
      F_00a35580(param_1);
    }
    REFG(undefined4, 0x14a458f) = 1;
    uVar2 = F_006de0e0(this,0xffff);
  }
  return uVar2;
}

/* ref: FUN_006e5f80 */
uint F_006e5f80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6e5f80u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6e0)));
  *piVar1 = *piVar1 + 1;
  if (*piVar1 == 0) {
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6e0))) = 1;
  }
  (*(ulonglong *)(gen_frame + 0x1c)) = F_00427d90();
  (*(undefined4 *)(gen_frame + 0x14)) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6e0)));
  (*(undefined4 *)(gen_frame + 0x28)) = (*(undefined4 *)&gen_args[3]);
  ((undefined4 *)(gen_frame + 0xc))[0] = (*(undefined4 *)&gen_args[1]);
  (*(undefined4 *)(gen_frame + 0x24)) = (*(undefined4 *)&gen_args[2]);
  F_007506b0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6d0))),&(*(undefined4 *)&gen_args[2]),((undefined4 *)(gen_frame + 0xc)));
  return *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6e0)));
}

/* ref: FUN_006e5ff0 */
uint F_006e5ff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e5ff0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_006e5450(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_006e6000 */
uint F_006e6000(unsigned int gen_a0)
{
  GEN_ENTER(0x6e6000u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined * this_00;
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int * piVar5;
  int iVar6;
  uint uVar7;
  int * piVar8;
  undefined4 * puVar9;
  uint uVar10;
  int * piVar11;
  int iVar12;
  ulonglong uVar13;
  
  (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = (undefined4 *)0x0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (undefined4 *)0x0;
  (*(int *)(gen_frame + 0x14)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x48)) = this;
  F_0074d270(&(*(undefined4 * PTR32 *)(gen_frame + 0xc)),*(undefined4 *)((int)this + 0x714));
  puVar9 = *(undefined4 * PTR32 *)((int)this + 0x710);
  puVar2 = (undefined4 *)*puVar9;
  while (puVar2 != puVar9) {
    F_00751840(&(*(undefined4 * PTR32 *)(gen_frame + 0xc)),puVar2 + 4);
    if (*(char *)((int)puVar2 + 0x1d) == '\0') {
      puVar3 = (undefined4 *)puVar2[2];
      if (*(char *)((int)puVar3 + 0x1d) == '\0') {
        cVar1 = *(char *)((int)*puVar3 + 0x1d);
        puVar2 = puVar3;
        puVar3 = (undefined4 *)*puVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar3 + 0x1d);
          puVar2 = puVar3;
          puVar3 = (undefined4 *)*puVar3;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar2[1] + 0x1d);
        puVar4 = (undefined4 *)puVar2[1];
        puVar3 = puVar2;
        while ((puVar2 = puVar4, cVar1 == '\0' && (puVar3 == (undefined4 *)puVar2[2]))) {
          cVar1 = *(char *)((int)puVar2[1] + 0x1d);
          puVar4 = (undefined4 *)puVar2[1];
          puVar3 = puVar2;
        }
      }
    }
  }
  this_00 = (undefined *)((int)this + 0x70c);
  F_007443b0(this_00);
  puVar9 = (*(undefined4 * PTR32 *)(gen_frame + 0xc));
  if ((*(undefined4 * PTR32 *)(gen_frame + 0xc)) != (*(undefined4 * PTR32 *)(gen_frame + 0x10))) {
    do {
      piVar5 = (int *)F_005f3270(0x31,puVar9[2],0);
      if (piVar5 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar5 + 0x90))(piVar5,1);
        (*(int * PTR32 *)(gen_frame + 0x20)) = (int *)*puVar9;
        (*(int * PTR32 *)(gen_frame + 0x24)) = (int *)puVar9[1];
        (*(int * PTR32 *)(gen_frame + 0x1c)) = piVar5;
        (*(undefined4 *)(gen_frame + 0x28)) = puVar9[2];
        F_00750720(this_00,((undefined1 *)(gen_frame + 0x40)),&(*(int * PTR32 *)(gen_frame + 0x1c)));
      }
      puVar9 = puVar9 + 3;
      this = (*(undefined * PTR32 *)(gen_frame + 0x48));
    } while (puVar9 != (*(undefined4 * PTR32 *)(gen_frame + 0x10)));
  }
  (*(int * PTR32 *)(gen_frame + 0x1c)) = (int *)0x0;
  (*(int * PTR32 *)(gen_frame + 0x20)) = (int *)0x0;
  (*(int * PTR32 *)(gen_frame + 0x24)) = (int *)0x0;
  F_0074d370(&(*(int * PTR32 *)(gen_frame + 0x1c)),*(undefined4 *)((int)this + 0x704));
  piVar5 = *(int * PTR32 *)((int)this + 0x700);
  piVar11 = (int *)*piVar5;
  (*(int * PTR32 *)(gen_frame + 0x44)) = piVar5;
  if (piVar11 != piVar5) {
    do {
      piVar5 = piVar11 + 4;
      piVar8 = (*(int * PTR32 *)(gen_frame + 0x20));
      if ((piVar5 < (*(int * PTR32 *)(gen_frame + 0x20))) && ((*(int * PTR32 *)(gen_frame + 0x1c)) <= piVar5)) {
        iVar12 = (int)piVar5 - (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x1c))) >> 3;
        if ((*(int * PTR32 *)(gen_frame + 0x20)) == (*(int * PTR32 *)(gen_frame + 0x24))) {
          iVar6 = (int)(*(int * PTR32 *)(gen_frame + 0x20)) - (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x1c))) >> 3;
          if (iVar6 == -1) {
LAB_006e6237: ;
                    
            F_00c4579a("vector<T> too long");
          }
          uVar7 = iVar6 + 1;
          uVar10 = (int)(*(int * PTR32 *)(gen_frame + 0x24)) - (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x1c))) >> 3;
          if (uVar10 < uVar7) {
            if (-(uVar10 >> 1) - 1 < uVar10) {
              uVar10 = 0;
            }
            else {
              uVar10 = uVar10 + (uVar10 >> 1);
            }
            if (uVar10 < uVar7) {
              uVar10 = uVar7;
            }
            F_0074d370(&(*(int * PTR32 *)(gen_frame + 0x1c)),uVar10);
            piVar8 = (*(int * PTR32 *)(gen_frame + 0x20));
          }
        }
        if (piVar8 != (int *)0x0) {
          *piVar8 = (*(int * PTR32 *)(gen_frame + 0x1c))[iVar12 * 2];
          iVar12 = (*(int * PTR32 *)(gen_frame + 0x1c))[iVar12 * 2 + 1];
LAB_006e61dd: ;
          piVar8[1] = iVar12;
        }
      }
      else {
        if ((*(int * PTR32 *)(gen_frame + 0x20)) == (*(int * PTR32 *)(gen_frame + 0x24))) {
          iVar12 = (int)(*(int * PTR32 *)(gen_frame + 0x20)) - (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x1c))) >> 3;
          if (iVar12 == -1) goto LAB_006e6237;
          uVar7 = iVar12 + 1;
          uVar10 = (int)(*(int * PTR32 *)(gen_frame + 0x24)) - (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x1c))) >> 3;
          if (uVar10 < uVar7) {
            if (-(uVar10 >> 1) - 1 < uVar10) {
              uVar10 = 0;
            }
            else {
              uVar10 = uVar10 + (uVar10 >> 1);
            }
            if (uVar10 < uVar7) {
              uVar10 = uVar7;
            }
            F_0074d370(&(*(int * PTR32 *)(gen_frame + 0x1c)),uVar10);
            piVar8 = (*(int * PTR32 *)(gen_frame + 0x20));
          }
        }
        if (piVar8 != (int *)0x0) {
          *piVar8 = *piVar5;
          iVar12 = piVar11[5];
          goto LAB_006e61dd;
        }
      }
      (*(int * PTR32 *)(gen_frame + 0x20)) = piVar8 + 2;
      if (*(char *)((int)piVar11 + 0x19) == '\0') {
        piVar5 = (int *)piVar11[2];
        if (*(char *)((int)piVar5 + 0x19) == '\0') {
          cVar1 = *(char *)(*piVar5 + 0x19);
          piVar11 = piVar5;
          piVar5 = (int *)*piVar5;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar5 + 0x19);
            piVar11 = piVar5;
            piVar5 = (int *)*piVar5;
          }
        }
        else {
          cVar1 = *(char *)(piVar11[1] + 0x19);
          piVar8 = (int *)piVar11[1];
          piVar5 = piVar11;
          while ((piVar11 = piVar8, cVar1 == '\0' && (piVar5 == (int *)piVar11[2]))) {
            cVar1 = *(char *)(piVar11[1] + 0x19);
            piVar8 = (int *)piVar11[1];
            piVar5 = piVar11;
          }
        }
      }
      this = (*(undefined * PTR32 *)(gen_frame + 0x48));
    } while (piVar11 != (*(int * PTR32 *)(gen_frame + 0x44)));
  }
  piVar5 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x700) + 4)));
  cVar1 = *(char *)((int)piVar5 + 0x19);
  piVar11 = (*(int * PTR32 *)(gen_frame + 0x1c));
  while ((*(int * PTR32 *)(gen_frame + 0x1c)) = piVar11, cVar1 == '\0') {
    F_0073c030((undefined *)((int)this + 0x6fc),piVar5[2]);
    piVar11 = (int *)*piVar5;
    F_00429760(piVar5,0x1c,800);
    cVar1 = *(char *)((int)piVar11 + 0x19);
    piVar5 = piVar11;
    piVar11 = (*(int * PTR32 *)(gen_frame + 0x1c));
  }
  *((int *)GEN_TOP((*(int *)((int)this + 0x700) + 4))) = *(int *)((int)this + 0x700);
  *(undefined4 *)*(undefined4 *)((int)this + 0x700) = *(undefined4 *)((int)this + 0x700);
  uVar10 = *(uint *)((int)this + 0x700);
  *(uint *)(uVar10 + 8) = uVar10;
  *(undefined4 *)((int)this + 0x704) = 0;
  piVar5 = piVar11;
  if (piVar11 != (*(int * PTR32 *)(gen_frame + 0x20))) {
    do {
      piVar8 = (int *)F_005f3270(0x31,*piVar5,0);
      (*(int * PTR32 *)(gen_frame + 0x44)) = piVar8;
      uVar10 = 0;
      if (piVar8 != (int *)0x0) {
        iVar12 = *piVar5;
        (*(int *)(gen_frame + 0x34)) = piVar5[1];
        puVar9 = (undefined4 *)F_004296a0(0x1c,0,800);
        *puVar9 = *(undefined4 *)((int)this + 0x700);
        puVar9[1] = *(undefined4 *)((int)this + 0x700);
        puVar9[2] = *(undefined4 *)((int)this + 0x700);
        *(undefined2 *)(puVar9 + 6) = 0;
        if (puVar9 + 3 != (int *)0x0) {
          puVar9[3] = (*(int * PTR32 *)(gen_frame + 0x44));
          puVar9[4] = iVar12;
          puVar9[5] = (*(int *)(gen_frame + 0x34));
        }
        uVar10 = F_007470e0((undefined *)((int)this + 0x6fc),((undefined1 *)(gen_frame + 0x38)),puVar9,0);
        piVar11 = (*(int * PTR32 *)(gen_frame + 0x1c));
      }
      piVar5 = piVar5 + 2;
    } while (piVar5 != (*(int * PTR32 *)(gen_frame + 0x20)));
  }
  *(undefined1 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x48)) + 0x71c) = 0;
  if (piVar11 != (int *)0x0) {
    uVar13 = F_00429760(piVar11,((int)(*(int * PTR32 *)(gen_frame + 0x24)) - (int)((int)(uintptr_t)piVar11) >> 3) * 8,800);
    uVar10 = (uint)uVar13;
  }
  if ((*(undefined4 * PTR32 *)(gen_frame + 0xc)) != (undefined4 *)0x0) {
    uVar13 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0xc)),(((*(int *)(gen_frame + 0x14)) - (int)(*(undefined4 * PTR32 *)(gen_frame + 0xc))) / 0xc) * 0xc,800);
    uVar10 = (uint)uVar13;
  }
  return uVar10;
}

/* ref: FUN_006e6390 */
byte F_006e6390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6e6390u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  
  piVar5 = (int *)F_005f3270(0x31,param_1,0);
  (*(int * PTR32 *)(gen_frame + 0x28)) = piVar5;
  if (piVar5 == (int *)0x0) {
    return 0;
  }
  F_00745670((undefined *)((int)this + 0x70c),&(*(int * PTR32 *)(gen_frame + 0x20)),&(*(int * PTR32 *)(gen_frame + 0x28)));
  piVar3 = (*(int * PTR32 *)(gen_frame + 0x20));
  while( true ) {
    if (piVar3 == (*(int * PTR32 *)(gen_frame + 0x24))) {
      ((code *)*(gen_code32 *)(*piVar5 + 0x90))(piVar5,1);
      (*(undefined1 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x20)) + 0)) = (char)param_3;
      (*(int * PTR32 *)(gen_frame + 0x20)) = ((int *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(int * PTR32 *)(gen_frame + 0x20)), 1, 3),(char)param_3)));
      (*(int *)(gen_frame + 0x10)) = param_2;
      (*(int * PTR32 *)(gen_frame + 0x14)) = (*(int * PTR32 *)(gen_frame + 0x20));
      (*(int * PTR32 *)(gen_frame + 0xc)) = piVar5;
      (*(undefined4 *)(gen_frame + 0x18)) = param_1;
      F_00750720((undefined *)((int)this + 0x70c),&(*(int * PTR32 *)(gen_frame + 0x20)),&(*(int * PTR32 *)(gen_frame + 0xc)));
      return 1;
    }
    if ((piVar3[4] == param_2) && ((char)piVar3[5] == (char)param_3)) break;
    if (*(char *)((int)piVar3 + 0x1d) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x1d) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x1d);
        piVar3 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x1d);
          piVar3 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x1d);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((piVar3 = piVar4, cVar1 == '\0' && (piVar2 == (int *)piVar3[2]))) {
          cVar1 = *(char *)(piVar3[1] + 0x1d);
          piVar4 = (int *)piVar3[1];
          piVar2 = piVar3;
        }
      }
    }
  }
  return 1;
}

/* ref: FUN_006e6520 */
uint F_006e6520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x6e6520u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int param_5 = (int)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  undefined4 param_9 = (undefined4)gen_a9;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined1 * puVar1;
  uint uVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  *(undefined4 *)this = 9999;
  *(undefined2 *)((int)this + 4) = 0;
  *(undefined1 *)((int)this + 6) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined1 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x75300000;
  *(undefined1 *)((int)this + 0x2f) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined2 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2a) = 0;
  *(undefined1 *)((int)this + 0x2e) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined1 *)((int)this + 0x38) = 0;
  F_00a35f30(this);
  *(undefined2 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined1 *)((int)this + 0x48) = (undefined1)param_3;
  *(undefined1 *)((int)this + 0x49) = (undefined1)param_4;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined1 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  uVar2 = F_004296a0(0x18,0,800);
  *(uint *)((int)this + 0x60) = uVar2;
  *(uint *)uVar2 = uVar2;
  *((int *)GEN_TOP((*(int *)((int)this + 0x60) + 4))) = *(int *)((int)this + 0x60);
  *((int *)GEN_TOP((*(int *)((int)this + 0x60) + 8))) = *(int *)((int)this + 0x60);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x60) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x60) + 0x15))) = 1;
  uVar2 = param_1;
  if (((char)param_2 != '\0') && (param_1 < 1000000)) {
    uVar2 = param_1 + 1000000;
  }
  F_00a35ee0(this,uVar2,1);
  *(undefined1 *)((int)this + 0x40) = (undefined1)param_7;
  *(bool *)((int)this + 0x41) = (char)param_2 == '\0';
  uVar2 = 0;
  do {
    uVar4 = uVar2 & 0xff;
    *(undefined2 *)((int)this + uVar4 * 2 + 0x20) = *(undefined2 *)(param_5 + uVar2 * 2);
    puVar1 = (undefined1 *)(uVar2 + param_6);
    uVar2 = uVar2 + 1;
    *(undefined1 *)(uVar4 + 0x2a + (int)this) = *puVar1;
  } while (uVar2 < 5);
  puVar3 = (undefined4 *)F_004296a0(0x18,0,800);
  *puVar3 = *(undefined4 *)((int)this + 0x60);
  puVar3[1] = *(undefined4 *)((int)this + 0x60);
  puVar3[2] = *(undefined4 *)((int)this + 0x60);
  *(undefined2 *)(puVar3 + 5) = 0;
  if (puVar3 + 3 != (undefined4 *)0x0) {
    puVar3[3] = param_8;
    puVar3[4] = param_9;
  }
  F_00746b20((undefined *)((int)this + 0x5c),((undefined1 *)(gen_frame + 0x4)),puVar3,0);
  uVar2 = F_00a411a0(&REFG(undefined, 0x14a4230),this,(uint)*(byte *)((int)this + 0x48),
                       (uint)*(byte *)((int)this + 0x49));
  *(uint *)((int)this + 0x4c) = uVar2;
  return (uint)this;
}

/* ref: FUN_006e6680 */
uint F_006e6680(unsigned int gen_a0)
{
  GEN_ENTER(0x6e6680u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  ulonglong uVar2;
  
  F_006e3e00((undefined *)((int)this + 0x4c));
  iVar1 = *(int *)((int)this + 0x3c);
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 0x44) - iVar1) / 0x14) * 0x14,800);
  }
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  iVar1 = *(int *)((int)this + 0x2c);
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 0x34) - iVar1) / 0x88) * 0x88,800);
  }
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  F_0073bdc0((undefined *)((int)this + 0x14));
  uVar2 = F_00429760(*(undefined4 *)((int)this + 0x14),8,800);
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[136])REFP(0x10b81b4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[136])REFP(0x10b81b4));
  return (uint)uVar2;
}

/* ref: FUN_006e6740 */
unsigned int F_006e6740(unsigned int gen_a0)
{
  GEN_ENTER(0x6e6740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  undefined * this_00;
  undefined4 uVar5;
  
  if (*(int *)((int)this + 0x24) != 0) {
    piVar2 = (int *)F_007512b0((undefined *)((int)this + 0x14));
    piVar2 = (int *)*piVar2;
    if (piVar2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar2 + 0x148))(piVar2);
    }
  }
  if ((*(int *)((int)this + 0x24) != 0) &&
     (iVar3 = *(int *)((int)this + 0x24) + -1, *(int *)((int)this + 0x24) = iVar3, iVar3 == 0)) {
    *(undefined4 *)((int)this + 0x20) = 0;
  }
  if (*(int *)((int)this + 0x24) == 0) {
    F_00a6ef50(&REFG(undefined, 0x14ab428));
    iVar1 = *(int *)((int)this + 0x30);
    for (iVar3 = *(int *)((int)this + 0x2c); iVar3 != iVar1; iVar3 = iVar3 + 0x88) {
      F_006da870(iVar3);
    }
    if (*(int *)((int)this + 0x2c) != *(int *)((int)this + 0x30)) {
      *(int *)((int)this + 0x30) = *(int *)((int)this + 0x2c);
    }
    iVar3 = *(int *)((int)this + 0x40);
    if (*(int *)((int)this + 0x3c) != iVar3) {
      uVar4 = F_0073f510(iVar3,iVar3,*(int *)((int)this + 0x3c));
      *(uint *)((int)this + 0x40) = uVar4;
    }
    if (REFG(int, 0x1375bbc) == 0) {
      *(undefined1 *)(REFG(int, 0x1375b90) + 0x198) = 0;
    }
    F_006c5860(this);
    F_004e7f70(*(undefined4 *)(REFG(int, 0x137104c) + 0x25f8),(float)(float10)1);
    piVar2 = (int *)F_00424750(REFG(int, 0x137104c));
    if (piVar2 != (int *)0x0) {
      uVar5 = 0x11;
      uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
      this_00 = (undefined *)F_00763050(uVar4,uVar5);
      if (this_00 != (undefined *)0x0) {
        F_00776f30(this_00,0);
      }
    }
    F_009d53f0(REFG(undefined4, 0x1487c90),0);
    F_006df450((undefined *)((int)this + 0x4c));
    F_006df4a0((undefined *)((int)this + 0x4c));
  }
  return 0;
}

/* ref: FUN_006e6890 */
unsigned int F_006e6890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e6890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  F_0071edf0(((undefined1 *)(gen_frame + 0x0)));
  (*(undefined4 *)(gen_frame + 0x14)) = 7;
  (*(undefined4 *)(gen_frame + 0x10)) = param_1;
  F_007511f0((undefined *)((int)this + 0x2c),((undefined1 *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return 0;
}

/* ref: FUN_006e68e0 */
unsigned int F_006e68e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6e68e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  int iVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  REFG(undefined4, 0x132390c) = 0;
  REFG(undefined4, 0x1323910) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323914) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323920) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323924) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323948) = 0;
  *(undefined4 *)&REFG(undefined, 0x132392c) = 0x3d;
  *(undefined4 *)&REFG(undefined, 0x1323930) = 0x276;
  *(undefined4 *)&REFG(undefined, 0x1323934) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323938) = 0;
  *(undefined4 *)&REFG(undefined, 0x132393c) = 0x10000;
  REFG(undefined4, 0x1323950) = 0;
  REFG(undefined4, 0x1323954) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323958) = 0;
  REFG(undefined4, 0x1323980) = 0;
  REFG(undefined4, 0x1323984) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323988) = 0;
  F_00487650(&REFG(undefined4, 0x1323994),&(*(undefined * PTR32 *)(gen_frame + 0x8)),REFG(undefined4, 0x1323994),REFG(undefined4, 0x1323998));
  *(undefined4 *)&REFG(undefined, 0x13239a4) = 0;
  *(undefined4 *)&REFG(undefined, 0x13239a8) = 0;
  *(undefined4 *)&REFG(undefined, 0x13239ac) = 0;
  *(undefined4 *)&REFG(undefined, 0x13239b0) = 0;
  REFG(undefined4, 0x13239b8) = 0;
  REFG(undefined4, 0x13239bc) = 0;
  *(undefined4 *)&REFG(undefined, 0x13239c0) = 0;
  F_00487650(&REFG(undefined4, 0x13239cc),&(*(undefined * PTR32 *)(gen_frame + 0x8)),REFG(undefined4, 0x13239cc),REFG(undefined4, 0x13239d0));
  *(undefined4 *)&REFG(undefined, 0x13239dc) = 0;
  *(undefined4 *)&REFG(undefined, 0x13239e0) = 0;
  *(undefined4 *)&REFG(undefined, 0x13239e4) = 0;
  *(undefined2 *)&REFG(undefined, 0x13239e8) = 0x100;
  REFG(undefined4, 0x13239ea) = 0;
  *(undefined4 *)&REFG(undefined, 0x13239ec) = 0;
  REFG(undefined4, 0x13239f4) = 0;
  REFG(undefined4, 0x13239f8) = 0;
  *(undefined4 *)&REFG(undefined, 0x13239fc) = 0;
  F_00487650(&REFG(undefined4, 0x1323a08),&(*(undefined * PTR32 *)(gen_frame + 0x8)),REFG(undefined4, 0x1323a08),REFG(undefined4, 0x1323a0c));
  *(undefined4 *)&REFG(undefined, 0x1323a18) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323a1c) = 0;
  REFG(undefined4, 0x1323a20) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323a24) = 0;
  REFG(undefined4, 0x1323a2c) = 0;
  REFG(undefined4, 0x1323a30) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323a34) = 0;
  F_00487650(&REFG(undefined4, 0x1323a40),&(*(undefined * PTR32 *)(gen_frame + 0x8)),REFG(undefined4, 0x1323a40),REFG(undefined4, 0x1323a44));
  *(undefined4 *)&REFG(undefined, 0x1323a50) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323a54) = 0;
  REFG(undefined4, 0x1323aac) = 0;
  REFG(undefined4, 0x1323ab0) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323ab4) = 0;
  puVar1 = &REFG(undefined4, 0x1488788);
  iVar2 = 0x20;
  do {
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined2 *)(puVar1 + 6) = 0x101;
    *(undefined1 *)((int)puVar1 + 0x1a) = 0;
    puVar1 = puVar1 + 9;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = &REFG(undefined4, 0x1488c08);
  iVar2 = 0x20;
  do {
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined1 *)(puVar1 + 0x1a) = 0;
    puVar1 = puVar1 + 0x1d;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  REFG(undefined4, 0x1323ad8) = 0;
  REFG(undefined4, 0x1323adc) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323ae0) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323ae8) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323aec) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323af0) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323af8) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323afc) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323b00) = 0;
  REFG(undefined4, 0x1323b08) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323b0c) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323b10) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323b58) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323b5c) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323b60) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323b68) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323b6c) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323b70) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323b78) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323b7c) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323b80) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323b88) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323b8c) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323b90) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323b98) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323b9c) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323ba0) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323bc8) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323bcc) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323bd0) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323ba8) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323bac) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323bb0) = 0;
  REFG(undefined4, 0x1323bb8) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323bbc) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323bc0) = 0;
  F_006c5c10(this);
  return 0;
}

/* ref: FUN_006e6ba0 */
byte F_006e6ba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e6ba0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int local_c;
  byte local_5;
  
  local_5 = 0;
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  iVar1 = (*(int *)&gen_args[1]);
  if (*(int *)((int)REFG(undefined4, 0x1488344) + 0x224) == 0) {
    local_c = 0;
  }
  else {
    uVar4 = *(uint *)((int)REFG(undefined4, 0x1488344) + 0x220);
    if (*(int * PTR32 *)((int)REFG(undefined4, 0x1488344) + 0x214) == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = **(int * PTR32 *)((int)REFG(undefined4, 0x1488344) + 0x214);
    }
    if (*(uint *)(iVar5 + 8) <= uVar4) {
      uVar4 = uVar4 - *(uint *)(iVar5 + 8);
    }
    local_c = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar5 + 4) + uVar4 * 4))) + 0x28)));
  }
  if (REFG(int, 0x132390c) == (*(int *)&gen_args[1])) {
    F_006da0a0(REFG(undefined4, 0x1488344),&REFG(undefined * PTR32, 0x1323918));
    if ((char)(*(undefined4 *)&gen_args[2]) != '\0') {
      REFG(int, 0x132390c) = 0;
    }
    if (REFG(int, 0x1323910) == 0) {
      REFG(int, 0x132390c) = 0;
      REFG(int, 0x1323910) = 0;
      *(undefined4 *)&REFG(undefined, 0x1323914) = 0;
      *(undefined4 *)&REFG(undefined, 0x1323920) = 0;
      *(undefined4 *)&REFG(undefined, 0x1323924) = 0;
      *(undefined4 *)&REFG(undefined, 0x1323948) = 0;
      *(undefined4 *)&REFG(undefined, 0x132392c) = 0x3d;
      *(undefined4 *)&REFG(undefined, 0x1323930) = 0x276;
      *(undefined4 *)&REFG(undefined, 0x1323934) = 0;
      *(undefined4 *)&REFG(undefined, 0x1323938) = 0;
      *(undefined4 *)&REFG(undefined, 0x132393c) = 0x10000;
    }
    else {
      piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
      ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,REFG(int, 0x1323910),0);
      local_5 = 1;
    }
  }
  if (REFG(int, 0x1323950) == iVar1) {
    F_006da0a0(REFG(undefined4, 0x1488344),&REFG(undefined * PTR32, 0x132395c));
    if ((char)(*(undefined4 *)&gen_args[2]) != '\0') {
      REFG(int, 0x1323950) = 0;
    }
    if (REFG(int, 0x1323954) == 0) {
      REFG(int, 0x1323950) = 0;
      REFG(int, 0x1323954) = 0;
      *(undefined4 *)&REFG(undefined, 0x1323958) = 0;
    }
    else {
      piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
      ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,REFG(int, 0x1323954),0);
      local_5 = 1;
    }
  }
  if (REFG(int, 0x1323980) == iVar1) {
    F_006da0a0(REFG(undefined4, 0x1488344),&REFG(undefined * PTR32, 0x132398c));
    if ((char)(*(undefined4 *)&gen_args[2]) != '\0') {
      REFG(int, 0x1323980) = 0;
    }
    if (REFG(int, 0x1323984) == 0) {
      REFG(int, 0x1323980) = 0;
      REFG(int, 0x1323984) = 0;
      *(undefined4 *)&REFG(undefined, 0x1323988) = 0;
      F_00487650(&REFG(undefined4, 0x1323994),&(*(int *)&gen_args[1]),REFG(undefined4, 0x1323994),REFG(undefined4, 0x1323998));
      *(undefined4 *)&REFG(undefined, 0x13239a4) = 0;
      *(undefined4 *)&REFG(undefined, 0x13239a8) = 0;
      *(undefined4 *)&REFG(undefined, 0x13239ac) = 0;
      *(undefined4 *)&REFG(undefined, 0x13239b0) = 0;
    }
    else {
      piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
      ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,REFG(int, 0x1323984),0);
      local_5 = 1;
    }
  }
  if (REFG(int, 0x13239b8) == iVar1) {
    F_006da0a0(REFG(undefined4, 0x1488344),&REFG(undefined * PTR32, 0x13239c4));
    if ((char)(*(undefined4 *)&gen_args[2]) != '\0') {
      REFG(int, 0x13239b8) = 0;
    }
    if (REFG(int, 0x13239bc) == 0) {
      REFG(int, 0x13239b8) = 0;
      REFG(int, 0x13239bc) = 0;
      *(undefined4 *)&REFG(undefined, 0x13239c0) = 0;
      F_00487650(&REFG(undefined4, 0x13239cc),&(*(int *)&gen_args[1]),REFG(undefined4, 0x13239cc),REFG(undefined4, 0x13239d0));
      *(undefined4 *)&REFG(undefined, 0x13239dc) = 0;
      *(undefined4 *)&REFG(undefined, 0x13239e0) = 0;
      *(undefined4 *)&REFG(undefined, 0x13239e4) = 0;
      *(undefined2 *)&REFG(undefined, 0x13239e8) = 0x100;
      REFG(undefined4, 0x13239ea) = 0;
      *(undefined4 *)&REFG(undefined, 0x13239ec) = 0;
    }
    else {
      piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
      ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,REFG(int, 0x13239bc),0);
      local_5 = 1;
    }
  }
  if (REFG(int, 0x13239f4) == iVar1) {
    F_006da0a0(REFG(undefined4, 0x1488344),&REFG(undefined * PTR32, 0x1323a00));
    if ((char)(*(undefined4 *)&gen_args[2]) != '\0') {
      REFG(int, 0x13239f4) = 0;
    }
    if (REFG(int, 0x13239f8) == 0) {
      REFG(int, 0x13239f4) = 0;
      REFG(int, 0x13239f8) = 0;
      *(undefined4 *)&REFG(undefined, 0x13239fc) = 0;
      F_00487650(&REFG(undefined4, 0x1323a08),&(*(int *)&gen_args[1]),REFG(undefined4, 0x1323a08),REFG(undefined4, 0x1323a0c));
      *(undefined4 *)&REFG(undefined, 0x1323a18) = 0;
      *(undefined4 *)&REFG(undefined, 0x1323a1c) = 0;
      REFG(undefined4, 0x1323a20) = 0;
      *(undefined4 *)&REFG(undefined, 0x1323a24) = 0;
    }
    else {
      piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
      ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,REFG(int, 0x13239f8),0);
      local_5 = 1;
    }
  }
  if (REFG(int, 0x1323aac) == iVar1) {
    F_006da0a0(REFG(undefined4, 0x1488344),&REFG(undefined * PTR32, 0x1323ab8));
    if ((char)(*(undefined4 *)&gen_args[2]) != '\0') {
      REFG(int, 0x1323aac) = 0;
    }
    if (REFG(int, 0x1323ab0) == 0) {
      REFG(int, 0x1323aac) = 0;
      REFG(int, 0x1323ab0) = 0;
      *(undefined4 *)&REFG(undefined, 0x1323ab4) = 0;
    }
    else {
      piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
      ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,REFG(int, 0x1323ab0),0);
      local_5 = 1;
    }
  }
  if (REFG(int, 0x1323a2c) == iVar1) {
    F_006da0a0(REFG(undefined4, 0x1488344),&REFG(undefined * PTR32, 0x1323a38));
    if ((char)(*(undefined4 *)&gen_args[2]) != '\0') {
      REFG(int, 0x1323a2c) = 0;
    }
    if (REFG(int, 0x1323a30) == 0) {
      REFG(int, 0x1323a2c) = 0;
      REFG(int, 0x1323a30) = 0;
      *(undefined4 *)&REFG(undefined, 0x1323a34) = 0;
      F_00487650(&REFG(undefined4, 0x1323a40),&(*(int *)&gen_args[1]),REFG(undefined4, 0x1323a40),REFG(undefined4, 0x1323a44));
      *(undefined4 *)&REFG(undefined, 0x1323a50) = 0;
      *(undefined4 *)&REFG(undefined, 0x1323a54) = 0;
    }
    else {
      piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
      ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,REFG(int, 0x1323a30),0);
      local_5 = 1;
    }
  }
  if (REFG(int, 0x1323ad8) == iVar1) {
    if ((char)(*(undefined4 *)&gen_args[2]) != '\0') {
      REFG(int, 0x1323ad8) = 0;
    }
    if (REFG(int, 0x1323adc) == 0) {
      REFG(int, 0x1323ad8) = 0;
      REFG(int, 0x1323adc) = 0;
      *(undefined4 *)&REFG(undefined, 0x1323ae0) = 0;
    }
    else {
      piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
      ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,REFG(int, 0x1323adc),0);
      local_5 = 1;
    }
  }
  uVar6 = 0x1d;
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
  piVar3 = (int *)F_00763050(uVar4,uVar6);
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3);
  if ((char)uVar4 != '\0') {
    if ((char)(*(undefined4 *)&gen_args[2]) != '\0') {
      *(undefined4 *)&REFG(undefined, 0x14b117c) = 0;
    }
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    local_5 = 1;
  }
  uVar6 = 0x21;
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
  piVar3 = (int *)F_00763050(uVar4,uVar6);
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3);
  if ((char)uVar4 != '\0') {
    if ((char)(*(undefined4 *)&gen_args[2]) != '\0') {
      *(undefined4 *)&REFG(undefined, 0x1323af8) = 0;
    }
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    local_5 = 1;
  }
  uVar6 = 0x3a;
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
  piVar3 = (int *)F_00763050(uVar4,uVar6);
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3);
  if ((char)uVar4 != '\0') {
    if ((char)(*(undefined4 *)&gen_args[2]) != '\0') {
      REFG(undefined4, 0x1323b08) = 0;
    }
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    F_00a6cdf0(1);
    local_5 = 1;
  }
  uVar6 = 0x22;
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
  piVar3 = (int *)F_00763050(uVar4,uVar6);
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3);
  if ((char)uVar4 != '\0') {
    if ((char)(*(undefined4 *)&gen_args[2]) != '\0') {
      *(undefined4 *)&REFG(undefined, 0x1323b58) = 0;
    }
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    local_5 = 1;
  }
  uVar6 = 0x4c;
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
  piVar3 = (int *)F_00763050(uVar4,uVar6);
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3);
  if ((char)uVar4 != '\0') {
    if ((char)(*(undefined4 *)&gen_args[2]) != '\0') {
      *(undefined4 *)&REFG(undefined, 0x1323b88) = 0;
    }
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    local_5 = 1;
  }
  uVar6 = 0x4b;
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
  piVar3 = (int *)F_00763050(uVar4,uVar6);
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3);
  if ((char)uVar4 != '\0') {
    if ((char)(*(undefined4 *)&gen_args[2]) != '\0') {
      *(undefined4 *)&REFG(undefined, 0x1323b98) = 0;
    }
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    local_5 = 1;
  }
  uVar6 = 0x37;
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
  piVar3 = (int *)F_00763050(uVar4,uVar6);
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3);
  if ((char)uVar4 != '\0') {
    if ((char)(*(undefined4 *)&gen_args[2]) != '\0') {
      *(undefined4 *)&REFG(undefined, 0x1323ba8) = 0;
    }
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    local_5 = 1;
  }
  uVar6 = 0x3c;
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
  piVar3 = (int *)F_00763050(uVar4,uVar6);
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3);
  if ((char)uVar4 != '\0') {
    if ((char)(*(undefined4 *)&gen_args[2]) != '\0') {
      REFG(undefined4, 0x1323bb8) = 0;
    }
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    local_5 = 1;
  }
  uVar6 = 0x32;
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
  piVar3 = (int *)F_00763050(uVar4,uVar6);
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3);
  if ((char)uVar4 != '\0') {
    if ((char)(*(undefined4 *)&gen_args[2]) != '\0') {
      *(undefined4 *)&REFG(undefined, 0x1323ae8) = 0;
    }
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    local_5 = 1;
  }
  if (((*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd2))) != '\0') && (local_c != 0)) && (local_c != 1)) {
    ((code *)*(gen_code32 *)(*piVar2 + 0x110))(piVar2);
  }
  return local_5;
}

/* ref: FUN_006e7290 */
uint F_006e7290(unsigned int gen_a0)
{
  GEN_ENTER(0x6e7290u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint in_ecx;
  undefined * this_00;
  uint * puVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar3 = 0x32;
  in_ecx = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
  this_00 = (undefined *)F_00763050(in_ecx,uVar3);
  *(uint *)&REFG(undefined, 0x1323aec) = F_0077bb10(this_00,&REFG(undefined * PTR32, 0x1323ae4));
  if (*(int *)((int)this + 0x24) == 0) {
    *(uint *)&REFG(undefined, 0x1323ae8) = 0;
    return 0;
  }
  puVar2 = (uint *)F_007512b0((undefined *)((int)this + 0x14));
  *(uint *)&REFG(undefined, 0x1323ae8) = *puVar2;
  return *puVar2;
}

/* ref: FUN_006e72f0 */
uint F_006e72f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10)
{
  GEN_ENTER(0x6e72f0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  int * piVar1;
  undefined4 * puVar2;
  undefined * this_00;
  uint uVar3;
  undefined * PTR32 * ppuVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  if (*(int *)((int)this + 0x24) == 0) {
    REFG(undefined4, 0x1323ad8) = 0;
  }
  else {
    puVar2 = (undefined4 *)F_007512b0((undefined *)((int)this + 0x14));
    REFG(undefined4, 0x1323ad8) = *puVar2;
  }
  uVar12 = 4;
  uVar11 = 0;
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  ppuVar4 = &REFG(undefined * PTR32, 0x1323ad4);
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1)));
  uVar3 = F_00866d10(this_00,param_1,param_2,param_3,param_5,param_8,param_9,param_10,param_4,
                       param_6,param_7,ppuVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12);
  REFG(undefined4, 0x1323adc) = uVar3;
  return uVar3;
}

/* ref: FUN_006e7380 */
uint F_006e7380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12)
{
  GEN_ENTER(0x6e7380u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
  ushort uVar1;
  int * piVar2;
  undefined4 * puVar3;
  uint uVar4;
  undefined * this_00;
  uint uVar5;
  undefined * PTR32 * ppuVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  if (*(int *)((int)this + 0x24) == 0) {
    REFG(undefined4, 0x1323ad8) = 0;
  }
  else {
    puVar3 = (undefined4 *)F_007512b0((undefined *)((int)this + 0x14));
    REFG(undefined4, 0x1323ad8) = *puVar3;
  }
  uVar1 = REFG(undefined2, 0x10be324);
  if (param_1 / 10 != 0) {
    uVar1 = REFG(undefined2, 0x10be31c);
  }
  uVar11 = 4;
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  ppuVar6 = &REFG(undefined * PTR32, 0x1323ad4);
  uVar4 = (uint)uVar1;
  uVar5 = param_1 % 10;
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
  uVar4 = F_00866d10(this_00,param_9,uVar5,uVar4,param_2,param_3,param_4,param_5,param_8,param_6,
                       param_7,ppuVar6,uVar7,param_12,param_10,param_11,uVar8,uVar9,uVar10,uVar11);
  REFG(undefined4, 0x1323adc) = uVar4;
  return uVar4;
}

/* ref: FUN_006e7480 */
uint F_006e7480(unsigned int gen_a0)
{
  GEN_ENTER(0x6e7480u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  int iVar3;
  undefined4 * puVar4;
  undefined4 uVar5;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar5 = 0x3a;
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
  this_00 = (undefined *)F_00763050(uVar2,uVar5);
  if (*(int *)((int)this + 0x24) == 0) {
    iVar3 = 0;
  }
  else {
    piVar1 = (int *)F_007512b0((undefined *)((int)this + 0x14));
    iVar3 = *piVar1;
  }
  if (REFG(int, 0x1323b08) == iVar3) {
    uVar2 = F_0089e970(this_00);
    return uVar2;
  }
  F_00a6cdf0(0);
  if (*(int *)((int)this + 0x24) == 0) {
    REFG(int, 0x1323b08) = 0;
    uVar2 = F_00877d70(this_00,&REFG(undefined * PTR32, 0x1323b04));
    return uVar2;
  }
  puVar4 = (undefined4 *)F_007512b0((undefined *)((int)this + 0x14));
  REFG(int, 0x1323b08) = *puVar4;
  uVar2 = F_00877d70(this_00,&REFG(undefined * PTR32, 0x1323b04));
  return uVar2;
}

/* ref: FUN_006e754a */
unsigned int F_006e754a(void)
{
  GEN_ENTER(0x6e754au, 0u, 0u, 0u, 0u);
  code * pcVar1;
  
  pcVar1 = ((code *)GEN_TOP(swi(3)));
  (*pcVar1)();
  return 0;
}

/* ref: FUN_006e7567 */
unsigned int F_006e7567(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e7567u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 in_eax = (undefined4)gen_a0;
  int in_ebp = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int * piVar1;
  undefined * this;
  undefined4 uVar2;
  undefined * PTR32 * ppuVar3;
  
  *(undefined4 *)&REFG(undefined, 0x1323b28) = in_eax;
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = *(undefined4 *)(in_ebp + 8);
  ppuVar3 = &REFG(undefined * PTR32, 0x1323b24);
  this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1)));
  F_008973a0(this,uVar2,ppuVar3);
  return 0;
}

/* ref: FUN_006e7620 */
uint F_006e7620(unsigned int gen_a0)
{
  GEN_ENTER(0x6e7620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  undefined * this_00;
  undefined4 uVar4;
  
  if (*(int *)((int)this + 0x24) == 0) {
    *(undefined4 *)&REFG(undefined, 0x1323b58) = 0;
  }
  else {
    puVar1 = (undefined4 *)F_007512b0((undefined *)((int)this + 0x14));
    *(undefined4 *)&REFG(undefined, 0x1323b58) = *puVar1;
  }
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar4 = 0x22;
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
  this_00 = (undefined *)F_00763050(uVar3,uVar4);
  *(undefined4 *)((int)this_00 + 0xc) = 2;
  uVar3 = F_008e9c10(this_00);
  *(undefined * PTR32 * PTR32 *)((int)this_00 + 0x18) = &REFG(undefined * PTR32, 0x1323b54);
  return uVar3;
}

/* ref: FUN_006e7670 */
uint F_006e7670(unsigned int gen_a0)
{
  GEN_ENTER(0x6e7670u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  undefined * this_00;
  undefined4 uVar4;
  
  if (*(int *)((int)this + 0x24) == 0) {
    *(undefined4 *)&REFG(undefined, 0x1323b68) = 0;
  }
  else {
    puVar1 = (undefined4 *)F_007512b0((undefined *)((int)this + 0x14));
    *(undefined4 *)&REFG(undefined, 0x1323b68) = *puVar1;
  }
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar4 = 0x22;
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
  this_00 = (undefined *)F_00763050(uVar3,uVar4);
  *(undefined4 *)((int)this_00 + 0xc) = 4;
  uVar3 = F_008e9c10(this_00);
  *(undefined * PTR32 * PTR32 *)((int)this_00 + 0x18) = &REFG(undefined * PTR32, 0x1323b64);
  return uVar3;
}

/* ref: FUN_006e76c0 */
uint F_006e76c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6e76c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  undefined * this_00;
  undefined4 uVar4;
  
  if (*(int *)((int)this + 0x24) == 0) {
    *(undefined4 *)&REFG(undefined, 0x1323b78) = 0;
  }
  else {
    puVar1 = (undefined4 *)F_007512b0((undefined *)((int)this + 0x14));
    *(undefined4 *)&REFG(undefined, 0x1323b78) = *puVar1;
  }
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar4 = 0x22;
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
  this_00 = (undefined *)F_00763050(uVar3,uVar4);
  *(undefined4 *)((int)this_00 + 0xc) = 7;
  uVar3 = F_008e9c10(this_00);
  *(undefined * PTR32 * PTR32 *)((int)this_00 + 0x18) = &REFG(undefined * PTR32, 0x1323b74);
  return uVar3;
}

/* ref: FUN_006e7710 */
uint F_006e7710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e7710u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  undefined * this_00;
  undefined4 uVar4;
  
  if (*(int *)((int)this + 0x24) == 0) {
    *(undefined4 *)&REFG(undefined, 0x1323ba8) = 0;
  }
  else {
    puVar1 = (undefined4 *)F_007512b0((undefined *)((int)this + 0x14));
    *(undefined4 *)&REFG(undefined, 0x1323ba8) = *puVar1;
  }
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar4 = 0x37;
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
  this_00 = (undefined *)F_00763050(uVar3,uVar4);
  uVar3 = F_00775920(this_00,&REFG(undefined * PTR32, 0x1323ba4),param_1);
  return uVar3;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf14 */
uint F_006e77b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e77b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  undefined * this_00;
  undefined4 * puVar4;
  undefined4 uVar5;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *(int *)(this + 4);
  piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar5 = 0x32;
  uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x48))(piVar3);
  this_00 = (undefined *)F_00763050(uVar2,uVar5);
  *(uint *)&REFG(undefined, 0x1323aec) = F_0077bb10(this_00,&REFG(undefined * PTR32, 0x1323ae4));
  if (*(int *)(iVar1 + 0x24) == 0) {
    *(undefined4 *)&REFG(undefined, 0x1323ae8) = 0;
  }
  else {
    puVar4 = (undefined4 *)F_007512b0((undefined *)(iVar1 + 0x14));
    *(undefined4 *)&REFG(undefined, 0x1323ae8) = *puVar4;
  }
  uVar2 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return uVar2;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf27 */
uint F_006e7850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e7850u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x230];
  undefined4 uVar1;
  uint uVar2;
  undefined4 * puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  (*(uint *)(gen_frame + 0x228)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x22c);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) = this;
  F_00a02210(((byte *)(gen_frame + 0x0)) + 0xc,param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0x0)) + 0xc,1);
  puVar3 = (undefined4 *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20)),1,uVar2);
  uVar1 = *puVar3;
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20)),2);
  ((byte *)(gen_frame + 0x0))[0] = (char)uVar2;
  ((byte *)(gen_frame + 0x0))[1] = (char)(uVar2 >> 8);
  ((byte *)(gen_frame + 0x0))[2] = (char)(uVar2 >> 0x10);
  ((byte *)(gen_frame + 0x0))[3] = (char)(uVar2 >> 0x18);
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20)),3);
  ((byte *)(gen_frame + 0x0))[8] = (char)uVar2;
  ((byte *)(gen_frame + 0x0))[9] = (char)(uVar2 >> 8);
  ((byte *)(gen_frame + 0x0))[10] = (char)(uVar2 >> 0x10);
  ((byte *)(gen_frame + 0x0))[0xb] = (char)(uVar2 >> 0x18);
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20)),4);
  ((byte *)(gen_frame + 0x0))[0x2c] = (char)uVar2;
  ((byte *)(gen_frame + 0x0))[0x2d] = (char)(uVar2 >> 8);
  ((byte *)(gen_frame + 0x0))[0x2e] = (char)(uVar2 >> 0x10);
  ((byte *)(gen_frame + 0x0))[0x2f] = (char)(uVar2 >> 0x18);
  uVar2 = F_00a019d0(((byte *)(gen_frame + 0x0)) + 0xc);
  uVar9 = 0;
  F_0042b630(((undefined1 *)(gen_frame + 0x12c)));
  F_0042b630(((undefined1 *)(gen_frame + 0x30)));
  F_0042b630(((undefined1 *)(gen_frame + 0xd8)));
  F_0042b630(((undefined1 *)(gen_frame + 0x180)));
  F_0042b630(((undefined1 *)(gen_frame + 0x84)));
  F_0042b630(((undefined1 *)(gen_frame + 0x1d4)));
  if (4 < (int)uVar2) {
    uVar9 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20)),5);
  }
  if (5 < (int)uVar2) {
    F_006e3770(((byte *)(gen_frame + 0x0)) + 0xc,uVar1,6,((undefined1 *)(gen_frame + 0x12c)));
  }
  if (6 < (int)uVar2) {
    F_006e3770(((byte *)(gen_frame + 0x0)) + 0xc,uVar1,7,((undefined1 *)(gen_frame + 0x30)));
  }
  if (7 < (int)uVar2) {
    F_006e3770(((byte *)(gen_frame + 0x0)) + 0xc,uVar1,8,((undefined1 *)(gen_frame + 0xd8)));
  }
  if (8 < (int)uVar2) {
    F_006e3770(((byte *)(gen_frame + 0x0)) + 0xc,uVar1,9,((undefined1 *)(gen_frame + 0x180)));
  }
  if (9 < (int)uVar2) {
    F_006e3770(((byte *)(gen_frame + 0x0)) + 0xc,uVar1,10,((undefined1 *)(gen_frame + 0x84)));
  }
  if (10 < (int)uVar2) {
    F_006e3770(((byte *)(gen_frame + 0x0)) + 0xc,uVar1,0xb,((undefined1 *)(gen_frame + 0x1d4)));
  }
  uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x1d4)));
  uVar4 = F_0042a990(((undefined1 *)(gen_frame + 0x84)));
  uVar5 = F_0042a990(((undefined1 *)(gen_frame + 0x180)));
  uVar6 = F_0042a990(((undefined1 *)(gen_frame + 0xd8)));
  uVar7 = F_0042a990(((undefined1 *)(gen_frame + 0x30)));
  uVar8 = F_0042a990(((undefined1 *)(gen_frame + 0x12c)));
  F_006e72f0(*((undefined * PTR32 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) + 4))),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 44)),uVar9,uVar8,
               uVar7,uVar6,uVar5,uVar4,uVar2);
  uVar2 = F_00a02290(((byte *)(gen_frame + 0x0)) + 0xc,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x1d4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x84)));
  F_0042c880(((undefined1 *)(gen_frame + 0x180)));
  F_0042c880(((undefined1 *)(gen_frame + 0xd8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x30)));
  F_0042c880(((undefined1 *)(gen_frame + 0x12c)));
  F_00a02240(((byte *)(gen_frame + 0x0)) + 0xc);
  F_00c47745((*(uint *)(gen_frame + 0x228)) ^ (uint)(uint)(gen_frame + 0x22c));
  return uVar2;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf28 */
uint F_006e7ad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e7ad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x330];
  int iVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  (*(uint *)(gen_frame + 0x328)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x32c);
  F_00a02210(((byte *)(gen_frame + 0x14)),param_1);
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0x14)),1);
  piVar4 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x14)) + 8)),1,uVar3);
  iVar1 = *piVar4;
  uVar3 = 0;
  if (iVar1 != 0) {
    (*(uint *)(gen_frame + 0xc)) = 0;
    F_0042cc20(((undefined1 *)(gen_frame + 0xdc)),&REFG(undefined, 0x10b3a37),REFG(undefined4, 0x108cc50));
    F_0042cc20(((undefined1 *)(gen_frame + 0x184)),&REFG(undefined, 0x10b3a3a),REFG(undefined4, 0x108cc50));
    F_0042cc20(((undefined1 *)(gen_frame + 0x130)),&REFG(undefined, 0x10b3a3b),REFG(undefined4, 0x108cc50));
    F_0042cc20(((undefined1 *)(gen_frame + 0x34)),&REFG(undefined, 0x10b3a3e),REFG(undefined4, 0x108cc50));
    F_0042cc20(((undefined1 *)(gen_frame + 0x88)),&REFG(undefined, 0x10b3a3f),REFG(undefined4, 0x108cc50));
    F_0042cc20(((undefined1 *)(gen_frame + 0x280)),&REFG(undefined, 0x10b3a42),REFG(undefined4, 0x108cc50));
    F_0042cc20(((undefined1 *)(gen_frame + 0x2d4)),&REFG(undefined, 0x10b3a43),REFG(undefined4, 0x108cc50));
    (*(uint *)(gen_frame + 0x10)) = 0x14;
    uVar13 = 0;
    F_0042cc20(((undefined1 *)(gen_frame + 0x1d8)),&REFG(undefined, 0x10b3a46),REFG(undefined4, 0x108cc50));
    F_0042cc20(((undefined1 *)(gen_frame + 0x22c)),&REFG(undefined, 0x10b3a47),REFG(undefined4, 0x108cc50));
    bVar2 = F_00a01f40(((byte *)(gen_frame + 0x14)),2);
    if (bVar2 != 0) {
      (*(uint *)(gen_frame + 0xc)) = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x14)) + 8)),2);
    }
    bVar2 = F_00a01f60(((byte *)(gen_frame + 0x14)),3);
    if (bVar2 == 0) {
      bVar2 = F_00a01f40(((byte *)(gen_frame + 0x14)),3);
      if (bVar2 != 0) {
        F_006e3770(((byte *)(gen_frame + 0x14)),iVar1,3,((undefined1 *)(gen_frame + 0xdc)));
      }
    }
    else {
      uVar5 = F_00a01e40(((byte *)(gen_frame + 0x14)),3);
      F_0042e430(((undefined1 *)(gen_frame + 0xdc)),uVar5);
    }
    bVar2 = F_00a01f60(((byte *)(gen_frame + 0x14)),4);
    if (bVar2 == 0) {
      bVar2 = F_00a01f40(((byte *)(gen_frame + 0x14)),4);
      if (bVar2 != 0) {
        F_006e3770(((byte *)(gen_frame + 0x14)),iVar1,4,((undefined1 *)(gen_frame + 0x184)));
      }
    }
    else {
      uVar5 = F_00a01e40(((byte *)(gen_frame + 0x14)),4);
      F_0042e430(((undefined1 *)(gen_frame + 0x184)),uVar5);
    }
    bVar2 = F_00a01f60(((byte *)(gen_frame + 0x14)),5);
    if (bVar2 == 0) {
      bVar2 = F_00a01f40(((byte *)(gen_frame + 0x14)),5);
      if (bVar2 != 0) {
        F_006e3770(((byte *)(gen_frame + 0x14)),iVar1,5,((undefined1 *)(gen_frame + 0x130)));
      }
    }
    else {
      uVar5 = F_00a01e40(((byte *)(gen_frame + 0x14)),5);
      F_0042e430(((undefined1 *)(gen_frame + 0x130)),uVar5);
    }
    F_006e3770(((byte *)(gen_frame + 0x14)),iVar1,6,((undefined1 *)(gen_frame + 0x34)));
    F_006e3770(((byte *)(gen_frame + 0x14)),iVar1,7,((undefined1 *)(gen_frame + 0x88)));
    bVar2 = F_00a01f60(((byte *)(gen_frame + 0x14)),8);
    if (bVar2 == 0) {
      bVar2 = F_00a01f40(((byte *)(gen_frame + 0x14)),8);
      if (bVar2 != 0) {
        F_006e3770(((byte *)(gen_frame + 0x14)),iVar1,8,((undefined1 *)(gen_frame + 0x280)));
      }
    }
    else {
      uVar5 = F_00a01e40(((byte *)(gen_frame + 0x14)),8);
      F_0042e430(((undefined1 *)(gen_frame + 0x280)),uVar5);
    }
    bVar2 = F_00a01f60(((byte *)(gen_frame + 0x14)),9);
    if (bVar2 == 0) {
      bVar2 = F_00a01f40(((byte *)(gen_frame + 0x14)),9);
      if (bVar2 != 0) {
        F_006e3770(((byte *)(gen_frame + 0x14)),iVar1,9,((undefined1 *)(gen_frame + 0x2d4)));
      }
    }
    else {
      uVar5 = F_00a01e40(((byte *)(gen_frame + 0x14)),9);
      F_0042e430(((undefined1 *)(gen_frame + 0x2d4)),uVar5);
    }
    bVar2 = F_00a01f40(((byte *)(gen_frame + 0x14)),10);
    if (bVar2 != 0) {
      (*(uint *)(gen_frame + 0x10)) = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x14)) + 8)),10);
    }
    bVar2 = F_00a01f40(((byte *)(gen_frame + 0x14)),0xb);
    if (bVar2 != 0) {
      uVar13 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x14)) + 8)),0xb);
    }
    bVar2 = F_00a01f60(((byte *)(gen_frame + 0x14)),0xc);
    if (bVar2 == 0) {
      bVar2 = F_00a01f40(((byte *)(gen_frame + 0x14)),0xc);
      if (bVar2 != 0) {
        F_006e3770(((byte *)(gen_frame + 0x14)),iVar1,0xc,((undefined1 *)(gen_frame + 0x1d8)));
      }
    }
    else {
      uVar5 = F_00a01e40(((byte *)(gen_frame + 0x14)),0xc);
      F_0042e430(((undefined1 *)(gen_frame + 0x1d8)),uVar5);
    }
    bVar2 = F_00a01f60(((byte *)(gen_frame + 0x14)),0xd);
    if (bVar2 == 0) {
      bVar2 = F_00a01f40(((byte *)(gen_frame + 0x14)),0xd);
      if (bVar2 != 0) {
        F_006e3770(((byte *)(gen_frame + 0x14)),iVar1,0xd,((undefined1 *)(gen_frame + 0x22c)));
      }
    }
    else {
      uVar5 = F_00a01e40(((byte *)(gen_frame + 0x14)),0xd);
      F_0042e430(((undefined1 *)(gen_frame + 0x22c)),uVar5);
    }
    bVar2 = F_00a01f40(((byte *)(gen_frame + 0x14)),0xe);
    if (bVar2 != 0) {
      uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x14)) + 8)),0xe);
    }
    uVar5 = F_0042a990(((undefined1 *)(gen_frame + 0x22c)));
    uVar6 = F_0042a990(((undefined1 *)(gen_frame + 0x1d8)));
    uVar7 = F_0042a990(((undefined1 *)(gen_frame + 0x2d4)));
    uVar8 = F_0042a990(((undefined1 *)(gen_frame + 0x280)));
    uVar9 = F_0042a990(((undefined1 *)(gen_frame + 0x88)));
    uVar10 = F_0042a990(((undefined1 *)(gen_frame + 0x34)));
    uVar11 = F_0042a990(((undefined1 *)(gen_frame + 0x130)));
    uVar12 = F_0042a990(((undefined1 *)(gen_frame + 0x184)));
    F_006e7380(*(undefined * PTR32 *)(this + 4),(*(uint *)(gen_frame + 0xc)),uVar12,uVar11,uVar10,uVar9,uVar8,uVar7,(*(uint *)(gen_frame + 0x10)),
                 uVar13,uVar6,uVar5,uVar3);
    uVar3 = F_00a02290(((byte *)(gen_frame + 0x14)),0);
    F_0042c880(((undefined1 *)(gen_frame + 0x22c)));
    F_0042c880(((undefined1 *)(gen_frame + 0x1d8)));
    F_0042c880(((undefined1 *)(gen_frame + 0x2d4)));
    F_0042c880(((undefined1 *)(gen_frame + 0x280)));
    F_0042c880(((undefined1 *)(gen_frame + 0x88)));
    F_0042c880(((undefined1 *)(gen_frame + 0x34)));
    F_0042c880(((undefined1 *)(gen_frame + 0x130)));
    F_0042c880(((undefined1 *)(gen_frame + 0x184)));
    F_0042c880(((undefined1 *)(gen_frame + 0xdc)));
    F_00a02240(((byte *)(gen_frame + 0x14)));
    F_00c47745((*(uint *)(gen_frame + 0x328)) ^ (uint)(uint)(gen_frame + 0x32c));
    return uVar3;
  }
  F_00a02240(((byte *)(gen_frame + 0x14)));
  F_00c47745((*(uint *)(gen_frame + 0x328)) ^ (uint)(uint)(gen_frame + 0x32c));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf29 */
uint F_006e8010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e8010u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  undefined4 * puVar3;
  undefined * this_00;
  undefined4 uVar4;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  if (*piVar2 != 0) {
    if (*((int *)GEN_TOP((*(int *)(this + 4) + 0x24))) == 0) {
      *(undefined4 *)&REFG(undefined, 0x1323af8) = 0;
    }
    else {
      puVar3 = (undefined4 *)F_007512b0(((undefined *)GEN_TOP((*(int *)(this + 4) + 0x14))));
      *(undefined4 *)&REFG(undefined, 0x1323af8) = *puVar3;
    }
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar4 = 0x21;
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
    this_00 = (undefined *)F_00763050(uVar1,uVar4);
    F_007756d0(this_00,0,&REFG(undefined * PTR32, 0x1323af4));
    uVar1 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
    F_00a02240(((byte *)(gen_frame + 0xc)));
    return uVar1;
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf30 */
uint F_006e80c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e80c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  if (*piVar2 != 0) {
    F_006e7480(*(undefined * PTR32 *)(this + 4));
    uVar1 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
    F_00a02240(((byte *)(gen_frame + 0xc)));
    return uVar1;
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf31 */
uint F_006e8130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e8130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  undefined4 * puVar3;
  undefined * this_00;
  undefined * PTR32 * ppuVar4;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  if (*piVar2 != 0) {
    if (*((int *)GEN_TOP((*(int *)(this + 4) + 0x24))) == 0) {
      *(undefined4 *)&REFG(undefined, 0x1323b18) = 0;
    }
    else {
      puVar3 = (undefined4 *)F_007512b0(((undefined *)GEN_TOP((*(int *)(this + 4) + 0x14))));
      *(undefined4 *)&REFG(undefined, 0x1323b18) = *puVar3;
    }
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    ppuVar4 = &REFG(undefined * PTR32, 0x1323b14);
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
    F_008b6eb0(this_00,ppuVar4);
    uVar1 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
    F_00a02240(((byte *)(gen_frame + 0xc)));
    return uVar1;
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf32 */
uint F_006e81d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e81d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  undefined4 * puVar3;
  undefined * this_00;
  undefined * PTR32 * ppuVar4;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  if (*piVar2 != 0) {
    uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
    if (*((int *)GEN_TOP((*(int *)(this + 4) + 0x24))) == 0) {
      *(undefined4 *)&REFG(undefined, 0x1323b28) = 0;
    }
    else {
      puVar3 = (undefined4 *)F_007512b0(((undefined *)GEN_TOP((*(int *)(this + 4) + 0x14))));
      *(undefined4 *)&REFG(undefined, 0x1323b28) = *puVar3;
    }
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    ppuVar4 = &REFG(undefined * PTR32, 0x1323b24);
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
    F_008973a0(this_00,uVar1,ppuVar4);
    uVar1 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
    F_00a02240(((byte *)(gen_frame + 0xc)));
    return uVar1;
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf33 */
uint F_006e8280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e8280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  undefined4 * puVar3;
  undefined * this_00;
  undefined * PTR32 * ppuVar4;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  if (*piVar2 != 0) {
    if (*((int *)GEN_TOP((*(int *)(this + 4) + 0x24))) == 0) {
      *(undefined4 *)&REFG(undefined, 0x1323b38) = 0;
    }
    else {
      puVar3 = (undefined4 *)F_007512b0(((undefined *)GEN_TOP((*(int *)(this + 4) + 0x14))));
      *(undefined4 *)&REFG(undefined, 0x1323b38) = *puVar3;
    }
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    ppuVar4 = &REFG(undefined * PTR32, 0x1323b34);
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
    F_008aa930(this_00,ppuVar4);
    uVar1 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
    F_00a02240(((byte *)(gen_frame + 0xc)));
    return uVar1;
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf34 */
uint F_006e8320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e8320u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  undefined4 * puVar3;
  undefined * this_00;
  undefined * PTR32 * ppuVar4;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  if (*piVar2 != 0) {
    if (*((int *)GEN_TOP((*(int *)(this + 4) + 0x24))) == 0) {
      *(undefined4 *)&REFG(undefined, 0x1323b48) = 0;
    }
    else {
      puVar3 = (undefined4 *)F_007512b0(((undefined *)GEN_TOP((*(int *)(this + 4) + 0x14))));
      *(undefined4 *)&REFG(undefined, 0x1323b48) = *puVar3;
    }
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    ppuVar4 = &REFG(undefined * PTR32, 0x1323b44);
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
    F_008973b0(this_00,ppuVar4);
    uVar1 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
    F_00a02240(((byte *)(gen_frame + 0xc)));
    return uVar1;
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf35 */
uint F_006e83c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e83c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  if (*piVar2 != 0) {
    F_006e7620(*(undefined * PTR32 *)(this + 4));
    uVar1 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
    F_00a02240(((byte *)(gen_frame + 0xc)));
    return uVar1;
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf36 */
uint F_006e8430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e8430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  if (*piVar2 != 0) {
    F_006e7670(*(undefined * PTR32 *)(this + 4));
    uVar1 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
    F_00a02240(((byte *)(gen_frame + 0xc)));
    return uVar1;
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf37 */
uint F_006e84a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e84a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  if (*piVar2 != 0) {
    F_006e76c0(*(undefined * PTR32 *)(this + 4));
    uVar1 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
    F_00a02240(((byte *)(gen_frame + 0xc)));
    return uVar1;
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf40 */
uint F_006e8510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e8510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  undefined4 * puVar3;
  uint in_ecx;
  undefined * this_00;
  undefined4 uVar4;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  if (*piVar2 != 0) {
    uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
    if (*((int *)GEN_TOP((*(int *)(this + 4) + 0x24))) == 0) {
      *(undefined4 *)&REFG(undefined, 0x1323ba8) = 0;
    }
    else {
      puVar3 = (undefined4 *)F_007512b0(((undefined *)GEN_TOP((*(int *)(this + 4) + 0x14))));
      *(undefined4 *)&REFG(undefined, 0x1323ba8) = *puVar3;
    }
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar4 = 0x37;
    in_ecx = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
    this_00 = (undefined *)F_00763050(in_ecx,uVar4);
    F_00775920(this_00,&REFG(undefined * PTR32, 0x1323ba4),uVar1);
    uVar1 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
    F_00a02240(((byte *)(gen_frame + 0xc)));
    return uVar1;
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf41 */
uint F_006e85d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e85d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  undefined4 * puVar3;
  undefined * this_00;
  undefined4 uVar4;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  if (*piVar2 != 0) {
    if (*((int *)GEN_TOP((*(int *)(this + 4) + 0x24))) == 0) {
      REFG(undefined4, 0x1323bb8) = 0;
    }
    else {
      puVar3 = (undefined4 *)F_007512b0(((undefined *)GEN_TOP((*(int *)(this + 4) + 0x14))));
      REFG(undefined4, 0x1323bb8) = *puVar3;
    }
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar4 = 0x3c;
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
    this_00 = (undefined *)F_00763050(uVar1,uVar4);
    F_0077ad50(this_00,&REFG(undefined * PTR32, 0x1323bb4));
    uVar1 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
    F_00a02240(((byte *)(gen_frame + 0xc)));
    return uVar1;
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf51 */
uint F_006e8680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e8680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  undefined4 * puVar3;
  undefined * this_00;
  undefined4 uVar4;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  if (*piVar2 != 0) {
    if (*((int *)GEN_TOP((*(int *)(this + 4) + 0x24))) == 0) {
      *(undefined4 *)&REFG(undefined, 0x1323bd8) = 0;
    }
    else {
      puVar3 = (undefined4 *)F_007512b0(((undefined *)GEN_TOP((*(int *)(this + 4) + 0x14))));
      *(undefined4 *)&REFG(undefined, 0x1323bd8) = *puVar3;
    }
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar4 = 0x4d;
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
    this_00 = (undefined *)F_00763050(uVar1,uVar4);
    F_00876770(this_00,&REFG(undefined * PTR32, 0x1323bd4));
    uVar1 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
    F_00a02240(((byte *)(gen_frame + 0xc)));
    return uVar1;
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf95 */
uint F_006e8730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e8730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  F_00a02210(((byte *)(gen_frame + 0x0)),param_1);
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),2);
  F_0071edf0(((undefined1 *)(gen_frame + 0x20)));
  (*(undefined4 *)(gen_frame + 0x34)) = 7;
  (*(uint *)(gen_frame + 0x30)) = uVar1;
  F_007511f0(((undefined *)GEN_TOP((*(int *)(this + 4) + 0x2c))),((undefined1 *)(gen_frame + 0x20)));
  F_00a02240(((byte *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
  return 0;
}

/* ref: FUN_006e87e0 */
unsigned int F_006e87e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6e87e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  undefined * this_00;
  uint uVar3;
  uint uVar4;
  undefined4 * puVar5;
  
  puVar5 = *(undefined4 * PTR32 *)this;
  this_00 = (undefined *)(REFG(int, 0x1488344) + 0x100);
  if (puVar5 != *(undefined4 * PTR32 *)((int)this + 4)) {
    do {
      uVar3 = F_00753350(this_00);
      piVar1 = (int *)*puVar5;
      uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,this_00,uVar3);
      if (uVar4 == 0) break;
      F_00c46e20(puVar5,puVar5 + 1,(*(int *)((int)this + 4) - (int)(puVar5 + 1) >> 2) * 4);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + -4;
      ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,this_00,uVar3);
      ((code *)*(gen_code32 *)*piVar1)(piVar1,1);
      puVar5 = *(undefined4 * PTR32 *)this;
    } while (puVar5 != *(undefined4 * PTR32 *)((int)this + 4));
  }
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x10);
  puVar5 = *(undefined4 * PTR32 *)((int)this + 0x14);
  while (puVar2 != puVar5) {
    uVar3 = F_00753350(this_00);
    piVar1 = (int *)*puVar2;
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,this_00,uVar3);
    if (uVar3 != 0) {
      F_00c46e20(puVar2,puVar2 + 1,(*(int *)((int)this + 0x14) - (int)(puVar2 + 1) >> 2) * 4);
      *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + -4;
      ((code *)*(gen_code32 *)*piVar1)(piVar1,1);
    }
    puVar5 = *(undefined4 * PTR32 *)((int)this + 0x14);
  }
  return 0;
}

/* ref: FUN_006e88c0 */
uint F_006e88c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e88c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int * piVar4;
  int * piVar5;
  int iVar6;
  
  iVar6 = REFG(int, 0x1488344) + 0x100;
  if (*(int *)(REFG(int, 0x1488344) + 0x124) == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    puVar3 = (undefined4 *)F_007512b0((undefined *)(REFG(int, 0x1488344) + 0x114));
    piVar4 = (int *)*puVar3;
  }
  puVar3 = *(undefined4 * PTR32 *)this;
  if (puVar3 == *(undefined4 * PTR32 *)((int)this + 4)) {
    if (piVar4 != (int *)0x0) {
      puVar3 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x14c))(piVar4,piVar4[0x18])));
    }
  }
  else {
    puVar3 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*puVar3 + 0xc))((int *)*puVar3,iVar6,piVar4)));
    if (((char)puVar3 != '\0') && (piVar4 = *(int * PTR32 *)this, piVar4 != *(int * PTR32 *)((int)this + 4))) {
      piVar5 = piVar4 + 1;
      do {
        piVar1 = (int *)*piVar4;
        if ((piVar1 == (int *)0x0) ||
           (puVar3 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1))), (char)puVar3 != '\0')) {
          puVar3 = (undefined4 *)*piVar4;
          if (puVar3 != (undefined4 *)0x0) {
            ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
          }
          puVar3 = (undefined4 *)
                   F_00c46e20(piVar4,piVar5,(*(int *)((int)this + 4) - (int)((int)(uintptr_t)piVar5) >> 2) * 4);
          *(int *)((int)this + 4) = *(int *)((int)this + 4) + -4;
        }
        else {
          piVar4 = piVar4 + 1;
          piVar5 = piVar5 + 1;
        }
      } while (piVar4 != *(int * PTR32 *)((int)this + 4));
    }
  }
  piVar5 = *(int * PTR32 *)((int)this + 0x14);
  for (piVar4 = *(int * PTR32 *)((int)this + 0x10); piVar4 != piVar5; piVar4 = piVar4 + 1) {
    puVar2 = (undefined4 *)*piVar4;
    if (puVar2 != (undefined4 *)0x0) {
      puVar3 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)*puVar2)(puVar2,1)));
    }
  }
  iVar6 = *(int *)((int)this + 0x10);
  if (iVar6 != *(int *)((int)this + 0x14)) {
    puVar3 = (undefined4 *)F_00c46e20(iVar6,*(int *)((int)this + 0x14),0);
    *(int *)((int)this + 0x14) = iVar6;
  }
  return (uint)puVar3;
}

/* ref: Client::Game::Event::CreateAppearanceTask::vf2 */
uint F_006e89c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e89c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  uint uVar2;
  
  F_007511f0((undefined *)(param_1 + 0x2c),this + 8);
  uVar2 = *(uint *)(this + 0x9c);
  if (uVar2 == 3) {
    piVar1 = *(int * PTR32 *)(this + 0x90);
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,1,0);
    if (param_2 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*param_2 + 0x154))(param_2,piVar1);
      return uVar2;
    }
  }
  else if (uVar2 == 7) {
    piVar1 = *(int * PTR32 *)(this + 0x90);
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,1,0);
    if (param_2 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*param_2 + 0x158))(param_2,piVar1);
    }
  }
  return uVar2;
}

/* ref: Client::Game::Event::BindCharacterByEntityIdTask::vf2 */
uint F_006e8a40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e8a40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  int iVar1;
  uint uVar2;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  (*(uint *)(gen_frame + 0x88)) = uVar2;
  iVar1 = *(int *)(this + 4);
  if (iVar1 != 0) {
    F_0071edf0(((undefined1 *)(gen_frame + 0x0)));
    F_006b9490(((undefined1 *)(gen_frame + 0x0)),8,iVar1);
    F_007511f0((undefined *)(param_1 + 0x2c),((undefined1 *)(gen_frame + 0x0)));
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x54))))(*(int * PTR32 *)(this + 4),1);
  }
  if (param_2 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*param_2 + 0x15c))(param_2,*(undefined4 *)(this + 4));
  }
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return uVar2;
}

/* ref: Client::Game::Event::BindCharacterByLayoutIdTask::vf2 */
uint F_006e8ad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e8ad0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  int iVar1;
  uint uVar2;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  (*(uint *)(gen_frame + 0x88)) = uVar2;
  iVar1 = *(int *)(this + 4);
  if (iVar1 != 0) {
    F_0071edf0(((undefined1 *)(gen_frame + 0x0)));
    F_006b9490(((undefined1 *)(gen_frame + 0x0)),8,iVar1);
    F_007511f0((undefined *)(param_1 + 0x2c),((undefined1 *)(gen_frame + 0x0)));
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x54))))(*(int * PTR32 *)(this + 4),1);
  }
  if (param_2 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*param_2 + 0x15c))(param_2,*(undefined4 *)(this + 4));
  }
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return uVar2;
}

/* ref: Client::Game::Event::LoadMovePositionTask::vf1 */
uint F_006e8b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e8b60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  undefined * pLVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(this + 0x2c);
  if (uVar3 < *(uint *)(this + 0x28)) {
    pLVar2 = this + uVar3 * 4 + 8;
    do {
      puVar1 = (undefined4 *)F_00ab37e0(*(undefined4 *)pLVar2);
      if (puVar1 == (undefined4 *)0x0) {
        return 0;
      }
      (*(undefined4 *)(gen_frame + 0xc)) = *puVar1;
      (*(undefined4 *)(gen_frame + 0x10)) = puVar1[1];
      (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)pLVar2;
      (*(undefined4 *)(gen_frame + 0x14)) = puVar1[2];
      (*(undefined4 *)(gen_frame + 0x18)) = puVar1[3];
      F_00751300(*(undefined * PTR32 *)(this + 4),&(*(undefined4 *)(gen_frame + 0x8)));
      *(uint *)(this + 0x2c) = uVar3;
      uVar3 = uVar3 + 1;
      pLVar2 = pLVar2 + 4;
    } while (uVar3 < *(uint *)(this + 0x28));
  }
  return 1;
}

/* ref: Client::Game::Event::PrepareCutSceneTask::vf2 */
uint F_006e8bf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e8bf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  uint uVar2;
  
  F_005d5430(&REFG(undefined, 0x1379c6c),1);
  *(undefined1 *)(REFG(int, 0x1488344) + 0x71c) = 1;
  if ((*(int *)(this + 4) == 1) && (*(int *)(REFG(int, 0x137104c) + 0x25f8) != 0)) {
    F_004e7f70(*(int *)(REFG(int, 0x137104c) + 0x25f8),(float)(float10)0);
  }
  F_006e6ba0(param_1,param_2,1);
  piVar1 = (int *)F_00424750(REFG(int, 0x137104c));
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x80))(piVar1,0);
    if ((char)uVar2 != '\0') {
      F_006c5600(param_1,0x3f);
    }
  }
  uVar2 = F_00a6ddf0(&REFG(undefined, 0x14ab380));
  if (param_2 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*param_2 + 0x180))(param_2);
  }
  return uVar2;
}

/* ref: Client::Game::Event::PostCutSceneTask::vf2 */
uint F_006e8c90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e8c90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  F_006e6000(REFG(undefined4, 0x1488344));
  F_00a69720(&REFG(undefined, 0x14ab380));
  uVar1 = F_004e7f70(*(undefined4 *)(REFG(int, 0x137104c) + 0x25f8),(float)(float10)1);
  if (param_2 != (int *)0x0) {
    uVar1 = ((code *)*(gen_code32 *)(*param_2 + 0x184))(param_2);
  }
  return uVar1;
}

/* ref: Client::Game::Event::FinalizeSceneTask::vf1 */
uint F_006e8ce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e8ce0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  
  if (this[0x408] == (undefined1)0x0) {
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xa0))(piVar2);
    if (uVar3 == 10) {
      this[0x409] = (undefined1)0x1;
    }
    this[0x408] = (undefined1)0x1;
  }
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xa0))(piVar2);
  if (this[0x409] != (undefined1)0x0) {
    if ((uVar3 & 8) != 0) {
      return 0;
    }
    this[0x409] = (undefined1)0x0;
  }
  F_006e3e70(param_1,param_2);
  if ((*(char *)(param_1 + 0xd5) == '\0') && (REFG(char, 0x14a737d) == '\0')) {
    if (*(int *)(REFG(int, 0x1488344) + 0x224) != 0) {
      uVar3 = *(uint *)(REFG(int, 0x1488344) + 0x220);
      if (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x214) == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = **(int * PTR32 *)(REFG(int, 0x1488344) + 0x214);
      }
      if (*(uint *)(iVar4 + 8) <= uVar3) {
        uVar3 = uVar3 - *(uint *)(iVar4 + 8);
      }
      if (*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar4 + 4) + uVar3 * 4))) + 0x28))) == 0x12) {
        return 1;
      }
    }
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2);
    bVar1 = F_0075ee20(uVar3);
    if (bVar1 != 0) {
      piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      ((code *)*(gen_code32 *)(*piVar2 + 0xa4))(piVar2,0,0x3c,1);
      piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      ((code *)*(gen_code32 *)(*piVar2 + 0xa4))(piVar2,1,0x3c,1);
    }
  }
  return 1;
}

/* ref: Client::Game::Event::MakeRetainerTask::vf2 */
uint F_006e8e10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e8e10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_006e6000(REFG(undefined4, 0x1488344));
  if (param_2 != (int *)0x0) {
    uVar1 = ((code *)*(gen_code32 *)(*param_2 + 0x1ac))(param_2,*(undefined4 *)(this + 8));
  }
  return uVar1;
}

/* ref: Client::Game::Event::LuaEventObject::vf1 */
unsigned int F_006e8e40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e8e40u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  iVar1 = REFG(int, 0x1488344);
  if ((((*(int *)(REFG(int, 0x1488344) + 0x124) != 0) &&
       (piVar3 = (int *)F_007512b0((undefined *)(REFG(int, 0x1488344) + 0x114)), uVar2 = (*(uint *)&gen_args[1]), *piVar3 != 0)
       ) && ((*(uint *)&gen_args[1]) < 7)) &&
     (F_006d7550(&(*(uint *)&gen_args[1]),*((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x60)))), (*(uint *)&gen_args[1]) != *(uint *)(iVar1 + 0x130))) {
    *(undefined1 *)((*(uint *)&gen_args[1]) + 0x7e + uVar2) = (undefined1)(*(undefined4 *)&gen_args[2]);
  }
  return 0;
}

/* ref: Client::Game::Event::LuaPc::vf1 */
unsigned int F_006e8ea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e8ea0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  iVar1 = REFG(int, 0x1488344);
  if ((((*(int *)(REFG(int, 0x1488344) + 0x124) != 0) &&
       (piVar3 = (int *)F_007512b0((undefined *)(REFG(int, 0x1488344) + 0x114)), uVar2 = (*(uint *)&gen_args[1]), *piVar3 != 0)
       ) && ((*(uint *)&gen_args[1]) < 7)) &&
     (F_006d7550(&(*(uint *)&gen_args[1]),*((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x60)))), (*(uint *)&gen_args[1]) != *(uint *)(iVar1 + 0x130))) {
    *(undefined1 *)((*(uint *)&gen_args[1]) + 0x7e + uVar2) = (undefined1)(*(undefined4 *)&gen_args[2]);
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf39 */
uint F_006e8f00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6e8f00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  
  F_006e6ba0(*(undefined * PTR32 *)(this + 4),this,1);
  this[0x44] = (undefined1)0x0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  this[0x4c] = (undefined1)0x0;
  if (param_3 == 0xb) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this,0x522,0,0);
  }
  else {
    uVar1 = param_3 - 0xc;
    if (uVar1 == 0) {
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this,0x521,0,0);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: FUN_006e8f60 */
unsigned int F_006e8f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e8f60u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined * this_00;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int * piVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint * this_01;
  
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x74))) == 0) {
    this_00 = *(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8);
    F_0042a990((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x7c);
    piVar4 = (int *)F_0052fba0(this_00);
    *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x78))) = piVar4;
    if (piVar4 == (int *)0x0) {
      ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x90))))((*(undefined * PTR32 *)&gen_args[0]),0,0,0);
      return 0;
    }
    iVar6 = (*(int *)&gen_args[2]);
    if ((*(int *)&gen_args[2]) == -1) {
      uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x44))(piVar4);
      iVar6 = uVar5 - (*(uint *)&gen_args[1]);
    }
    iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd0)));
    this_01 = ((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd0)));
    if (iVar1 != *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd4)))) {
      (*(int *)&gen_args[2]) = 0;
      F_00c46e20(iVar1,*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd4))),0);
      *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd4))) = (*(int *)&gen_args[2]) + iVar1;
    }
    F_0074cbd0(this_01,iVar6);
    uVar7 = iVar6 + (*(uint *)&gen_args[1]);
    for (uVar5 = (*(uint *)&gen_args[1]); (*(uint *)&gen_args[1]) = uVar5, uVar5 < uVar7; uVar5 = uVar5 + 1) {
      puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd4)));
      if ((&(*(uint *)&gen_args[1]) < puVar2) && (puVar3 = (undefined4 *)*this_01, puVar3 <= &(*(uint *)&gen_args[1]))) {
        if (puVar2 == *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd8)))) {
          F_0074d4f0(this_01,1);
        }
        uVar5 = (*(uint *)&gen_args[1]);
        if (*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd4))) != (undefined4 *)0x0) {
          **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd4))) =
               *((undefined4 *)GEN_TOP((*this_01 + ((int)&(*(uint *)&gen_args[1]) - (int)((int)(uintptr_t)puVar3) >> 2) * 4)));
        }
      }
      else {
        if (puVar2 == *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd8)))) {
          F_0074d4f0(this_01,1);
        }
        if (*((uint * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd4))) != (uint *)0x0) {
          **((uint * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd4))) = uVar5;
        }
      }
      *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd4))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd4))) + 4;
    }
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xe4))) = 0;
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x78))) + 0x14))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x78))));
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xe0))) = uVar5;
    F_006cda10((*(undefined * PTR32 *)&gen_args[0]));
  }
  return 0;
}

/* ref: FUN_006e90a0 */
uint F_006e90a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e90a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_006e5f80(REFG(undefined4, 0x1488344),this,param_1,param_2);
  return uVar1;
}

/* ref: Client::Game::Event::LuaEventHandler::vf39 */
uint F_006e90c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6e90c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  
  F_00a036e0(*(undefined * PTR32 *)(this + 0xf8));
  F_006e6ba0(*(undefined * PTR32 *)(this + 4),this,1);
  this[0x44] = (undefined1)0x0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  this[0x4c] = (undefined1)0x0;
  if (param_3 == 0xb) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this,0x522,0,0);
  }
  else {
    uVar1 = param_3 - 0xc;
    if (uVar1 == 0) {
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this,0x521,0,0);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: Client::Game::Event::LuaEventHandler::vf33 */
unsigned int F_006e9120(unsigned int gen_a0)
{
  GEN_ENTER(0x6e9120u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  
  if (**(char * PTR32 *)(this + 0x7c) != '\0') {
    if (*(int *)(this + 0x74) != 0) {
      piVar1 = *(int * PTR32 *)(this + 0x78);
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,*(int *)(this + 0x74));
      }
      puVar2 = *(undefined4 * PTR32 *)(this + 0x74);
      if (puVar2 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
        *(undefined4 *)(this + 0x74) = 0;
      }
    }
    F_006da0a0(REFG(undefined4, 0x1488344),this + 0x20);
    F_0074d7c0(this + 0x1c0,*((undefined4 *)GEN_TOP((*(int *)(this + 0x1c4) + 4))));
    *((int *)GEN_TOP((*(int *)(this + 0x1c4) + 4))) = *(int *)(this + 0x1c4);
    *(undefined4 *)*(undefined4 *)(this + 0x1c4) = *(undefined4 *)(this + 0x1c4);
    *((int *)GEN_TOP((*(int *)(this + 0x1c4) + 8))) = *(int *)(this + 0x1c4);
    *(undefined4 *)(this + 0x1c8) = 0;
    F_006e8f60(this,0,0xffffffff);
  }
  return 0;
}

/* ref: Client::Game::Event::AetheryteEventHandler::vf1 */
uint F_006e91c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6e91c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  ulonglong uVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042ce40(((undefined1 *)(gen_frame + 0x4)),"%s/%s",REFG(undefined * PTR32, 0x132370c),REFG(undefined * PTR32, 0x1323708));
  uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0x4)));
  F_0042e430(this + 0x7c,uVar1);
  F_006e8f60(this,0,0xffffffff);
  this[0x1c] = (undefined1)((byte)this[0x1c] | 2);
  uVar2 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return (uint)uVar2;
}

/* ref: FUN_006e9230 */
uint F_006e9230(unsigned int gen_a0)
{
  GEN_ENTER(0x6e9230u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 * this;
  
  this = (undefined4 *)F_00406b90(0x140,0,0);
  if (this != (undefined4 *)0x0) {
    F_006e44c0(this,param_1 & 0xffff | 0xd0000);
    *this = (*(undefined * PTR32 (*)[144])REFP(0x10b988c));
    this[0x4e] = 0;
    this[0x4f] = 0;
    F_00c48350(this + 0x3e,0,0x40);
    return (uint)this;
  }
  return 0;
}

/* ref: Client::Game::Event::ArrayEventHandler::vf142 */
uint F_006e92a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e92a0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined * pAVar4;
  
  if (((byte)(*(undefined * PTR32 *)&gen_args[0])[0x1c] & 1) != 0) {
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xe8)));
    if (puVar3 != *((undefined4 * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xec)))) {
      do {
        uVar1 = ((code *)*(gen_code32 *)(*(int *)*puVar3 + 8))((int *)*puVar3);
        if ((char)uVar1 == '\0') goto LAB_006e9302;
        puVar3 = puVar3 + 1;
      } while (puVar3 != *((undefined4 * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xec))));
    }
    pAVar4 = (*(undefined * PTR32 *)&gen_args[0]) + 0xf8;
    iVar2 = 0x10;
    do {
      if (*(int *)pAVar4 != 0) {
        F_006e5450(REFG(undefined4, 0x1488344),*(undefined4 *)(*(int *)pAVar4 + 8),(*(int *)&gen_args[1]));
      }
      pAVar4 = pAVar4 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
LAB_006e9302: ;
  iVar2 = (*(int *)&gen_args[1]);
  if ((*(int *)&gen_args[1]) != 0) {
    F_0073ce10((*(undefined * PTR32 *)&gen_args[0]) + 0xc,&(*(undefined4 *)(gen_frame + 0x4)),&(*(int *)&gen_args[1]));
    F_00744a50((*(undefined * PTR32 *)&gen_args[0]) + 0xc,&(*(int *)&gen_args[1]),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
    if (iVar2 == *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x50)))) {
      ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xbc))))((*(undefined * PTR32 *)&gen_args[0]),iVar2);
    }
  }
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x40))) != 0) {
    uVar1 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x40))) - 1;
    *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x40))) = uVar1;
    return uVar1;
  }
  return 0;
}

/* ref: Client::Game::Event::GuildleveAssignmentEventHandler::vf1 */
uint F_006e9370(unsigned int gen_a0)
{
  GEN_ENTER(0x6e9370u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  ulonglong uVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042ce40(((undefined1 *)(gen_frame + 0x4)),"%s/%s",REFG(undefined * PTR32, 0x1323714),REFG(undefined * PTR32, 0x1323710));
  uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0x4)));
  F_0042e430(this + 0x7c,uVar1);
  F_006e8f60(this,0,0xffffffff);
  this[0x1c] = (undefined1)((byte)this[0x1c] | 2);
  uVar2 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return (uint)uVar2;
}

/* ref: Client::Game::Event::GuildleveAssignmentEventHandler::vf128 */
uint F_006e93e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6e93e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  byte bVar2;
  uint uVar3;
  
  iVar1 = REFG(int, 0x1379694);
  if (REFG(int, 0x1379694) != 0) {
    uVar3 = F_00a4ffd0();
    bVar2 = F_006e49c0(this);
    if ((bVar2 != 0) && (bVar2 = F_006ce600(this), bVar2 == 0)) {
      if (*(int *)(this + 0x25c) == 0) {
        return 0xece5;
      }
      bVar2 = F_006d5600((uint)*(ushort *)(this + 0x25c),uVar3);
      if (bVar2 != 0) {
        return 0xece5;
      }
    }
    bVar2 = F_006d8490(this,iVar1);
    if (bVar2 != 0) {
      return 0xece1;
    }
  }
  return 0;
}

/* ref: FUN_006e9460 */
uint F_006e9460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6e9460u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x570);
  *(undefined4 *)((int)this + 0x270) = *(undefined4 *)(*param_1 + 4);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0x570) = 0;
  }
  *(undefined4 *)((int)this + 0x56c) = 0;
  uVar2 = F_006e47a0(this,param_3 >> 8 & 0xff,param_3 & 0xff,param_3 >> 0x10 & 0xff);
  return uVar2;
}

/* ref: FUN_006e94d0 */
uint F_006e94d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6e94d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  int iVar4;
  
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x570))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x56c)));
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x570))));
    }
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x570)));
    if (puVar3 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x570))) = 0;
    }
  }
  uVar2 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8));
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x56c))) = uVar2;
  puVar3 = (undefined4 *)F_00406b90(0x20,0,0);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(puVar3,1,(((*(uint *)&gen_args[4]) & 0xff) << 8 | (*(uint *)&gen_args[1]) & 0xff) << 8 | (*(uint *)&gen_args[2]) & 0xff);
    puVar3[5] = 1;
    *puVar3 = (*(undefined * PTR32 (*)[2])REFP(0x10b9198));
    puVar3[6] = (*(undefined * PTR32 *)&gen_args[0]);
    puVar3[7] = ((code *)REFP(0x6e9460));
  }
  (*(uint *)&gen_args[3]) = (*(uint *)&gen_args[3]) & 0xffff;
  *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x570))) = puVar3;
  F_00749410(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x548))),&(*(uint *)&gen_args[4]),&(*(uint *)&gen_args[3]));
  if ((*(uint *)&gen_args[4]) == *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54c)))) {
    iVar4 = 0;
  }
  else {
    iVar4 = (*(uint *)&gen_args[4]) + 0x10;
  }
  F_00cb4540(puVar3,0,*(undefined4 *)(iVar4 + 0x1c4));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x56c))) + 0x48))))
                    (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x56c))),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x570))));
  return uVar2;
}

/* ref: FUN_006e95f0 */
uint F_006e95f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6e95f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x5a4) = 0;
  if (*(int *)((int)this + 0x574) != *(int *)((int)this + 0x578)) {
    *(int *)((int)this + 0x578) = *(int *)((int)this + 0x574);
  }
  F_0074e1b0((undefined *)((int)this + 0x584),*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x588) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 0x588) + 4))) = *(int *)((int)this + 0x588);
  *(undefined4 *)*(undefined4 *)((int)this + 0x588) = *(undefined4 *)((int)this + 0x588);
  uVar1 = *(uint *)((int)this + 0x588);
  *(uint *)(uVar1 + 8) = uVar1;
  *(undefined4 *)((int)this + 0x58c) = 0;
  return uVar1;
}

/* ref: Client::Game::Event::GuildleveAssignmentEventHandler::vf39 */
uint F_006e9660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6e9660u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 * puVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  if (REFG(undefined4, 0x132410c) == this) {
    REFG(undefined4, 0x132410c) = (undefined *)0x0;
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
    ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,REFG(undefined4, 0x1324110),0);
  }
  if (REFG(undefined4, 0x132411c) == this) {
    REFG(undefined4, 0x132411c) = (undefined *)0x0;
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,REFG(undefined4, 0x1324120),0);
  }
  if (*(int *)(this + 0x570) != 0) {
    piVar2 = *(int * PTR32 *)(this + 0x56c);
    if (piVar2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar2 + 0x4c))(piVar2,*(int *)(this + 0x570));
    }
    puVar1 = *(undefined4 * PTR32 *)(this + 0x570);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      *(undefined4 *)(this + 0x570) = 0;
    }
  }
  *(undefined4 *)(this + 0x56c) = 0;
  F_00a036e0(*(undefined * PTR32 *)(this + 0xf8));
  F_006e6ba0(*(undefined * PTR32 *)(this + 4),this,1);
  this[0x44] = (undefined1)0x0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  this[0x4c] = (undefined1)0x0;
  if (param_3 == 0xb) {
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this,0x522,0,0);
  }
  else {
    uVar4 = param_3 - 0xc;
    if (uVar4 == 0) {
      uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this,0x521,0,0);
      return uVar4;
    }
  }
  return uVar4;
}

/* ref: Client::Game::Event::CompanyLeveOfficerEventHandler::vf1 */
uint F_006e9760(unsigned int gen_a0)
{
  GEN_ENTER(0x6e9760u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  ulonglong uVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042ce40(((undefined1 *)(gen_frame + 0x4)),"%s/%s",REFG(undefined * PTR32, 0x132371c),REFG(undefined * PTR32, 0x1323718));
  uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0x4)));
  F_0042e430(this + 0x7c,uVar1);
  F_006e8f60(this,0,0xffffffff);
  this[0x1c] = (undefined1)((byte)this[0x1c] | 2);
  uVar2 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return (uint)uVar2;
}

/* ref: FUN_006e97d0 */
uint F_006e97d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6e97d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00406b90(0x154,0,0);
  if (this != (undefined *)0x0) {
    uVar1 = F_006e4b30(this,param_1 & 0xffff | 0x30000);
    return uVar1;
  }
  return 0;
}

/* ref: Client::Game::Event::GatheringEventHandler::vf39 */
uint F_006e9800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6e9800u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  undefined * this_00;
  
  if (REFG(undefined4, 0x132412c) == this) {
    REFG(undefined4, 0x132412c) = (undefined *)0x0;
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,REFG(undefined4, 0x1324130),0);
  }
  F_00a4a760(&REFG(undefined, 0x14a7360),0x1a,0);
  iVar1 = *(int *)(this + 0x10c);
  if (iVar1 != 0) {
    iVar4 = 7;
    this_00 = (undefined *)(iVar1 + 0x3b0);
    do {
      this_00 = (undefined *)((int)this_00 + -0x74);
      F_0042c880(this_00);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    F_00406ad0(iVar1);
    *(undefined4 *)(this + 0x10c) = 0;
  }
  F_006e6ba0(*(undefined * PTR32 *)(this + 4),this,1);
  this[0x44] = (undefined1)0x0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  this[0x4c] = (undefined1)0x0;
  if (param_3 == 0xb) {
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this,0x522,0,0);
  }
  else {
    uVar3 = param_3 - 0xc;
    if (uVar3 == 0) {
      uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this,0x521,0,0);
      return uVar3;
    }
  }
  return uVar3;
}

/* ref: Client::Game::Event::CustomTalkEventHandler::vf39 */
uint F_006e98f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6e98f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  int * piVar1;
  uint uVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar3 = 0x3c;
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
  piVar1 = (int *)F_00763050(uVar2,uVar3);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
    if ((char)uVar2 != '\0') {
      REFG(undefined4, 0x1323bb8) = (undefined *)0x0;
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    }
  }
  if (REFG(undefined4, 0x1323bb8) == this) {
    REFG(undefined4, 0x1323bb8) = (undefined *)0x0;
  }
  F_006e6ba0(*(undefined * PTR32 *)(this + 4),this,1);
  this[0x44] = (undefined1)0x0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  this[0x4c] = (undefined1)0x0;
  if (param_3 == 0xb) {
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this,0x522,0,0);
  }
  else {
    uVar2 = param_3 - 0xc;
    if (uVar2 == 0) {
      uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this,0x521,0,0);
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_006e99a0 */
uint F_006e99a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e99a0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8)));
  uVar2 = F_00b9a750(*(undefined4 *)((int)this_00 + 8));
  if ((char)(*(int * PTR32 *)&gen_args[1]) == '\0') {
    (*(uint *)(gen_frame + 0x4)) = uVar2;
    uVar2 = F_0042a990((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x118);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = REFG(undefined * PTR32, 0x1323720);
    (*(int * PTR32 *)&gen_args[1]) = (int *)uVar2;
    F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar2);
    F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
    uVar3 = F_00b9a940(*(undefined4 *)((int)this_00 + 8),0xffffffff);
    if (uVar3 == 0) {
      F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
      F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar2);
      F_00b9b150(*(undefined4 *)((int)this_00 + 8),0,0);
      iVar4 = (*(uint *)(gen_frame + 0x4)) + 2;
      F_00a01c40(this_00,iVar4,"className",(*(int * PTR32 *)&gen_args[1]));
      F_00a01c80(this_00,iVar4,"referenceCount",0);
      piVar1 = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2e0)))));
      (*(uint *)(gen_frame + 0x4)) = (uint)piVar1;
      if (piVar1 != *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2e0)))) {
        do {
          uVar5 = *(undefined4 *)((*(uint *)(gen_frame + 0x4)) + 0x60);
          uVar2 = F_0042a990((*(uint *)(gen_frame + 0x4)) + 0xc);
          F_00a01c80(this_00,iVar4,uVar2,uVar5);
          F_00732eb0(&(*(uint *)(gen_frame + 0x4)));
        } while ((*(uint *)(gen_frame + 0x4)) != *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2e0))));
      }
      piVar1 = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))));
      (*(uint *)(gen_frame + 0x4)) = (uint)piVar1;
      if (piVar1 != *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))) {
        do {
          uVar5 = *(undefined4 *)((*(uint *)(gen_frame + 0x4)) + 0xc);
          uVar2 = F_0042a990((*(uint *)(gen_frame + 0x4)) + 0x10);
          F_00a01c80(this_00,iVar4,uVar2,uVar5);
          F_00732c70(&(*(uint *)(gen_frame + 0x4)));
        } while ((*(uint *)(gen_frame + 0x4)) != *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4))));
      }
      F_00b9bc00(*(undefined4 *)((int)this_00 + 8),(*(int * PTR32 *)&gen_args[1]));
      F_00b9a910(*(undefined4 *)((int)this_00 + 8),iVar4);
      if ((*(undefined * PTR32 *)(gen_frame + 0x8)) == (undefined *)0x0) {
        F_00b9b290(*(undefined4 *)((int)this_00 + 8),0xfffffffe,"__index");
        F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
        F_00b9b2f0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
      }
      else {
        F_00b9b290(*(undefined4 *)((int)this_00 + 8),0xfffffffe,"__index");
        F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
        F_00b9ae60(*(undefined4 *)((int)this_00 + 8),(*(undefined * PTR32 *)(gen_frame + 0x8)));
        F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
        F_00b9b290(*(undefined4 *)((int)this_00 + 8),iVar4,"__index");
        F_00b9a910(*(undefined4 *)((int)this_00 + 8),iVar4);
        F_00b9b3d0(*(undefined4 *)((int)this_00 + 8),iVar4);
        F_00b9b2f0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
        F_00a01ad0(this_00,(*(undefined * PTR32 *)(gen_frame + 0x8)));
      }
      goto LAB_006e9c0b;
    }
    uVar5 = *(undefined4 *)((int)this_00 + 8);
  }
  else {
    uVar3 = F_0042a990((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x118);
    F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar3);
    F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
    uVar3 = F_00b9a940(*(undefined4 *)((int)this_00 + 8),0xffffffff);
    if (uVar3 != 0) {
      (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))));
      if ((*(int * PTR32 *)&gen_args[1]) != *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))) {
        do {
          uVar5 = *((undefined4 *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0xc)));
          uVar3 = F_0042a990((int)(*(int * PTR32 *)&gen_args[1]) + 0x10);
          F_00a01c80(this_00,uVar2 + 1,uVar3,uVar5);
          F_00732c70(&(*(int * PTR32 *)&gen_args[1]));
        } while ((*(int * PTR32 *)&gen_args[1]) != (int *)*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4))));
      }
    }
    uVar5 = *(undefined4 *)((int)this_00 + 8);
  }
  F_00b9a760(uVar5,0xfffffffe);
LAB_006e9c0b: ;
  F_0074df70(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2dc))),*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2e0))) + 4))));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2e0))) + 4))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2e0)));
  *(undefined4 *)*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2e0))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2e0)));
  uVar2 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2e0)));
  *(uint *)(uVar2 + 8) = uVar2;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2e4))) = 0;
  return uVar2;
}

/* ref: FUN_006e9c50 */
uint F_006e9c50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e9c50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  (*(int *)(gen_frame + 0x8)) = 0;
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_0042cc20(((undefined1 *)(gen_frame + 0x18)),&REFG(undefined, 0x10b6990),REFG(undefined4, 0x108cc50));
  F_00ada1b0(param_1,((undefined1 *)(gen_frame + 0x18)),&(*(int *)(gen_frame + 0x8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x18)));
  if (1 < (uint)(((*(int *)(gen_frame + 0xc)) - (*(int *)(gen_frame + 0x8))) / 0x54)) {
    uVar1 = F_0042a970((*(int *)(gen_frame + 0x8)) + 0x54);
    if (uVar1 == 5) {
      uVar1 = F_0042a990((*(int *)(gen_frame + 0x8)) + 0x54);
      uVar1 = F_00c4c74c(uVar1);
      if (uVar1 != 0) {
        (*(undefined4 *)(gen_frame + 0x6d)) = 0;
        (*(undefined4 *)(gen_frame + 0x71)) = 0;
        (*(undefined1 *)(gen_frame + 0x75)) = 0;
        (*(undefined1 *)(gen_frame + 0x6c)) = 0;
        F_00c472af(&(*(undefined1 *)(gen_frame + 0x6c)),10,"%03u/",(int)uVar1 / 100);
        F_0042e430(param_2,&(*(undefined1 *)(gen_frame + 0x6c)));
        goto LAB_006e9d34;
      }
    }
  }
  F_0042aca0(param_2);
LAB_006e9d34: ;
  F_0042e360(param_2,param_1);
  F_0042ccf0(param_3,(*(int *)(gen_frame + 0x8)));
  uVar1 = F_004876d0(&(*(int *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return uVar1;
}

/* ref: FUN_006e9d70 */
uint F_006e9d70(unsigned int gen_a0)
{
  GEN_ENTER(0x6e9d70u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 * this;
  
  this = (undefined4 *)F_00406b90(0x10c,0,0);
  if (this != (undefined4 *)0x0) {
    F_006e44c0(this,param_1 & 0xffff | 0x90000);
    this[0x3e] = 0;
    this[0x3f] = 0;
    this[0x40] = 0;
    this[0x41] = 0;
    *(undefined1 *)(this + 0x42) = 0;
    *this = (*(undefined * PTR32 (*)[144])REFP(0x10b9d24));
    return (uint)this;
  }
  return 0;
}

/* ref: Client::Game::Event::DefaultTalkEventHandler::vf39 */
uint F_006e9dd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6e9dd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  undefined4 uVar2;
  
  F_006e6ba0(*(undefined * PTR32 *)(this + 4),this,1);
  this[0x44] = (undefined1)0x0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  this[0x4c] = (undefined1)0x0;
  if (param_3 == 0xb) {
    uVar2 = 0x522;
  }
  else {
    if (param_3 != 0xc) goto LAB_006e9e14;
    uVar2 = 0x521;
  }
  ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this,uVar2,0,0);
LAB_006e9e14: ;
  uVar1 = F_00a4a760(&REFG(undefined, 0x14a7360),0xf,0);
  return uVar1;
}

/* ref: FUN_006e9e30 */
uint F_006e9e30(unsigned int gen_a0)
{
  GEN_ENTER(0x6e9e30u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00406b90(0x1ec,0,0);
  if (this != (undefined *)0x0) {
    uVar1 = F_006e4c80(this,param_1 & 0xffff | 0xa0000);
    return uVar1;
  }
  return 0;
}

/* ref: Client::Game::Event::QuestEventHandler::vf124 */
byte F_006e9e60(unsigned int gen_a0)
{
  GEN_ENTER(0x6e9e60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  short sVar2;
  char * pcVar3;
  undefined * this_00;
  char * pcVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  int iVar9;
  char * pcVar10;
  char * pcVar11;
  char local_5;
  char * pcVar8;
  
  this_00 = REFG(undefined4, 0x1488344);
  pcVar8 = *(char * PTR32 *)(this + 0x16c);
  if (*pcVar8 != '\0') {
    sVar2 = *(short *)(this + 0x1d4);
    uVar6 = F_00a4ffd0();
    iVar9 = 0;
    iVar7 = uVar6 + 0x13b4;
    do {
      if (*(short *)(iVar7 + 4) == sVar2) {
        if (-1 < iVar9) {
          local_5 = *(char *)(iVar7 + 6);
          goto LAB_006e9ea8;
        }
        break;
      }
      iVar9 = iVar9 + 1;
      iVar7 = iVar7 + 0x10;
    } while (iVar9 < 0x1e);
    local_5 = '\0';
LAB_006e9ea8: ;
    pcVar8 = *(char * PTR32 *)(this + 0x32c);
    pcVar11 = *(char * PTR32 *)pcVar8;
    if (pcVar11 != pcVar8) {
      do {
        pcVar8 = *(char * PTR32 *)(pcVar11 + 0x14);
        pcVar10 = *(char * PTR32 *)pcVar8;
        if (pcVar10 != pcVar8) {
          do {
            if (((*(int *)(pcVar10 + 0xc) == 5000000) &&
                (pcVar8 = *(char * PTR32 *)(pcVar10 + 0x14), pcVar8 == (char *)0x3)) ||
               (pcVar8 = *(char * PTR32 *)(pcVar10 + 0x14), pcVar8 == &REFG(undefined, 0x4))) {
              if (pcVar11[0xc] == local_5) {
                if (pcVar8 == &REFG(undefined, 0x4)) {
                  bVar5 = F_006e6390(this_00,*(undefined4 *)(pcVar10 + 0x18),this,0);
                  pcVar8 = (char *)(uint)bVar5;
                }
                else {
                  bVar5 = F_006e6390(this_00,*(undefined4 *)(pcVar10 + 0x18),this,
                                       (uint)(byte)pcVar10[0x11]);
                  pcVar8 = (char *)(uint)bVar5;
                }
              }
              else {
                if (pcVar8 == &REFG(undefined, 0x4)) {
                  uVar6 = 0;
                }
                else {
                  uVar6 = (uint)(byte)pcVar10[0x11];
                }
                bVar5 = F_006deae0(this_00,*(undefined4 *)(pcVar10 + 0x18),this,uVar6);
                pcVar8 = (char *)(uint)bVar5;
              }
            }
            if (pcVar10[0x25] == '\0') {
              pcVar3 = *(char * PTR32 *)(pcVar10 + 8);
              if (pcVar3[0x25] == '\0') {
                cVar1 = (*(char * PTR32 *)pcVar3)[0x25];
                pcVar8 = *(char * PTR32 *)pcVar3;
                while (pcVar10 = pcVar3, cVar1 == '\0') {
                  cVar1 = (*(char * PTR32 *)pcVar8)[0x25];
                  pcVar3 = pcVar8;
                  pcVar8 = *(char * PTR32 *)pcVar8;
                }
              }
              else {
                cVar1 = (*(char * PTR32 *)(pcVar10 + 4))[0x25];
                pcVar4 = *(char * PTR32 *)(pcVar10 + 4);
                pcVar3 = pcVar10;
                while ((pcVar8 = pcVar4, pcVar10 = pcVar8, cVar1 == '\0' &&
                       (pcVar3 == *(char * PTR32 *)(pcVar8 + 8)))) {
                  cVar1 = (*(char * PTR32 *)(pcVar8 + 4))[0x25];
                  pcVar4 = *(char * PTR32 *)(pcVar8 + 4);
                  pcVar3 = pcVar8;
                }
              }
            }
          } while (pcVar10 != *(char * PTR32 *)(pcVar11 + 0x14));
        }
        if (pcVar11[0x21] == '\0') {
          pcVar8 = *(char * PTR32 *)(pcVar11 + 8);
          if (pcVar8[0x21] == '\0') {
            cVar1 = (*(char * PTR32 *)pcVar8)[0x21];
            pcVar11 = pcVar8;
            pcVar8 = *(char * PTR32 *)pcVar8;
            while (cVar1 == '\0') {
              cVar1 = (*(char * PTR32 *)pcVar8)[0x21];
              pcVar11 = pcVar8;
              pcVar8 = *(char * PTR32 *)pcVar8;
            }
          }
          else {
            cVar1 = (*(char * PTR32 *)(pcVar11 + 4))[0x21];
            pcVar3 = *(char * PTR32 *)(pcVar11 + 4);
            pcVar10 = pcVar11;
            while ((pcVar8 = pcVar3, pcVar11 = pcVar8, cVar1 == '\0' &&
                   (pcVar10 == *(char * PTR32 *)(pcVar8 + 8)))) {
              cVar1 = (*(char * PTR32 *)(pcVar8 + 4))[0x21];
              pcVar3 = *(char * PTR32 *)(pcVar8 + 4);
              pcVar10 = pcVar8;
            }
          }
        }
      } while (pcVar11 != *(char * PTR32 *)(this + 0x32c));
    }
  }
  return (byte)pcVar8;
}

/* ref: FUN_006e9ff0 */
uint F_006e9ff0(unsigned int gen_a0)
{
  GEN_ENTER(0x6e9ff0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0xf8);
  if ((*(byte *)((int)this + 0x36e) & 1) == 0) {
    uVar2 = F_00b9a750(*(undefined4 *)((int)this_00 + 8));
    (*(uint *)(gen_frame + 0x0)) = uVar2;
    uVar2 = F_0042a990((int)this + 0x118);
    (*(uint *)(gen_frame + 0x8)) = uVar2;
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = REFG(undefined * PTR32, 0x1323728);
    F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar2);
    F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
    uVar3 = F_00b9a940(*(undefined4 *)((int)this_00 + 8),0xffffffff);
    if (uVar3 == 0) {
      F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
      F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar2);
      F_00b9b150(*(undefined4 *)((int)this_00 + 8),0,0);
      iVar4 = (*(uint *)(gen_frame + 0x0)) + 2;
      F_00a01c40(this_00,iVar4,"className",(*(uint *)(gen_frame + 0x8)));
      F_00a01c80(this_00,iVar4,"referenceCount",0);
      piVar1 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x33c)));
      (*(uint *)(gen_frame + 0x0)) = (uint)piVar1;
      if (piVar1 != *(int * PTR32 *)((int)this + 0x33c)) {
        do {
          uVar5 = *(undefined4 *)((*(uint *)(gen_frame + 0x0)) + 0x60);
          uVar2 = F_0042a990((*(uint *)(gen_frame + 0x0)) + 0xc);
          F_00a01c80(this_00,iVar4,uVar2,uVar5);
          F_00732eb0(&(*(uint *)(gen_frame + 0x0)));
        } while ((*(uint *)(gen_frame + 0x0)) != *(uint *)((int)this + 0x33c));
      }
      piVar1 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x1c4)));
      (*(uint *)(gen_frame + 0x0)) = (uint)piVar1;
      if (piVar1 != *(int * PTR32 *)((int)this + 0x1c4)) {
        do {
          uVar5 = *(undefined4 *)((*(uint *)(gen_frame + 0x0)) + 0xc);
          uVar2 = F_0042a990((*(uint *)(gen_frame + 0x0)) + 0x10);
          F_00a01c80(this_00,iVar4,uVar2,uVar5);
          F_00732c70(&(*(uint *)(gen_frame + 0x0)));
        } while ((*(uint *)(gen_frame + 0x0)) != *(uint *)((int)this + 0x1c4));
      }
      F_00b9bc00(*(undefined4 *)((int)this_00 + 8),(*(uint *)(gen_frame + 0x8)));
      F_00b9a910(*(undefined4 *)((int)this_00 + 8),iVar4);
      if ((*(undefined * PTR32 *)(gen_frame + 0x4)) == (undefined *)0x0) {
        F_00b9b290(*(undefined4 *)((int)this_00 + 8),0xfffffffe,"__index");
        F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
        F_00b9b2f0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
        *(byte *)((int)this + 0x36e) = *(byte *)((int)this + 0x36e) | 1;
      }
      else {
        F_00b9b290(*(undefined4 *)((int)this_00 + 8),0xfffffffe,"__index");
        F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
        F_00b9ae60(*(undefined4 *)((int)this_00 + 8),(*(undefined * PTR32 *)(gen_frame + 0x4)));
        F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
        F_00b9b290(*(undefined4 *)((int)this_00 + 8),iVar4,"__index");
        F_00b9a910(*(undefined4 *)((int)this_00 + 8),iVar4);
        F_00b9b3d0(*(undefined4 *)((int)this_00 + 8),iVar4);
        F_00b9b2f0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
        F_00a01ad0(this_00,(*(undefined * PTR32 *)(gen_frame + 0x4)));
        *(byte *)((int)this + 0x36e) = *(byte *)((int)this + 0x36e) | 1;
      }
    }
    else {
      F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
      *(byte *)((int)this + 0x36e) = *(byte *)((int)this + 0x36e) | 1;
    }
  }
  else {
    uVar2 = F_00b9a750(*(undefined4 *)((int)this_00 + 8));
    uVar3 = F_0042a990((int)this + 0x118);
    F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar3);
    F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
    uVar3 = F_00b9a940(*(undefined4 *)((int)this_00 + 8),0xffffffff);
    if (uVar3 != 0) {
      piVar1 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x1c4)));
      (*(uint *)(gen_frame + 0x0)) = (uint)piVar1;
      if (piVar1 != *(int * PTR32 *)((int)this + 0x1c4)) {
        do {
          uVar5 = *(undefined4 *)((*(uint *)(gen_frame + 0x0)) + 0xc);
          uVar3 = F_0042a990((*(uint *)(gen_frame + 0x0)) + 0x10);
          F_00a01c80(this_00,uVar2 + 1,uVar3,uVar5);
          F_00732c70(&(*(uint *)(gen_frame + 0x0)));
        } while ((*(uint *)(gen_frame + 0x0)) != *(uint *)((int)this + 0x1c4));
      }
    }
    F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
  }
  F_0074df70((undefined *)((int)this + 0x338),*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x33c) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 0x33c) + 4))) = *(int *)((int)this + 0x33c);
  *(undefined4 *)*(undefined4 *)((int)this + 0x33c) = *(undefined4 *)((int)this + 0x33c);
  uVar2 = *(uint *)((int)this + 0x33c);
  *(uint *)(uVar2 + 8) = uVar2;
  *(undefined4 *)((int)this + 0x340) = 0;
  return uVar2;
}

/* ref: FUN_006ea2d0 */
uint F_006ea2d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6ea2d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = param_3;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(int *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  F_0042cc20(((undefined1 *)(gen_frame + 0x18)),&REFG(undefined, 0x10b6dbc),REFG(undefined4, 0x108cc50));
  F_00ada1b0(param_1,((undefined1 *)(gen_frame + 0x18)),&(*(int *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x18)));
  if (1 < (uint)(((*(int *)(gen_frame + 0x8)) - (*(int *)(gen_frame + 0x4))) / 0x54)) {
    uVar1 = F_0042a970((*(int *)(gen_frame + 0x4)) + 0x54);
    if (uVar1 == 5) {
      uVar1 = F_0042a990((*(int *)(gen_frame + 0x4)) + 0x54);
      uVar1 = F_00c4c74c(uVar1);
      if (uVar1 != 0) {
        (*(undefined4 *)(gen_frame + 0x6d)) = 0;
        (*(undefined4 *)(gen_frame + 0x71)) = 0;
        (*(undefined1 *)(gen_frame + 0x75)) = 0;
        (*(undefined1 *)(gen_frame + 0x6c)) = 0;
        F_00c472af(&(*(undefined1 *)(gen_frame + 0x6c)),10,"%03u/",(int)uVar1 / 100);
        F_0042e430(param_2,&(*(undefined1 *)(gen_frame + 0x6c)));
        goto LAB_006ea3b4;
      }
    }
  }
  F_0042aca0(param_2);
LAB_006ea3b4: ;
  F_0042e360(param_2,param_1);
  if ((*(int *)(gen_frame + 0x4)) == (*(int *)(gen_frame + 0x8))) {
    F_0042aca0((*(undefined * PTR32 *)(gen_frame + 0x14)));
  }
  else {
    F_0042ccf0((*(undefined * PTR32 *)(gen_frame + 0x14)),(*(int *)(gen_frame + 0x4)));
  }
  uVar1 = F_004876d0(&(*(int *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return uVar1;
}

/* ref: FUN_006ea3f0 */
uint F_006ea3f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ea3f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00406b90(0x1c10,0,0);
  if (this != (undefined *)0x0) {
    uVar1 = F_006e5000(this,param_1 & 0xffff | 0x40000);
    return uVar1;
  }
  return 0;
}

/* ref: Client::Game::Event::ShopEventHandler::vf39 */
uint F_006ea420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6ea420u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  
  this[0x1bf9] = (undefined1)0x0;
  F_006d1820(this,1);
  F_006e6ba0(*(undefined * PTR32 *)(this + 4),this,1);
  this[0x44] = (undefined1)0x0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  this[0x4c] = (undefined1)0x0;
  if (param_3 == 0xb) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this,0x522,0,0);
  }
  else {
    uVar1 = param_3 - 0xc;
    if (uVar1 == 0) {
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this,0x521,0,0);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: Client::Game::Event::CraftLeveClientEventHandler::vf1 */
uint F_006ea490(unsigned int gen_a0)
{
  GEN_ENTER(0x6ea490u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  ulonglong uVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042ce40(((undefined1 *)(gen_frame + 0x4)),"%s/%s",REFG(undefined * PTR32, 0x1323734),REFG(undefined * PTR32, 0x1323730));
  uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0x4)));
  F_0042e430(this + 0x7c,uVar1);
  F_006e8f60(this,0,0xffffffff);
  this[0x1c] = (undefined1)((byte)this[0x1c] | 2);
  uVar2 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return (uint)uVar2;
}

/* ref: Client::Game::Event::CraftLeveClientEventHandler::vf34 */
uint F_006ea500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6ea500u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)(this + 100);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)(this + 100) = 0;
  }
  *(undefined4 *)(this + 0x68) = 0;
  uVar2 = F_006e51b0(this);
  return uVar2;
}

/* ref: Client::Game::Event::CraftLeveClientEventHandler::vf39 */
uint F_006ea530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6ea530u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 * puVar1;
  undefined4 uVar2;
  int * piVar3;
  uint uVar4;
  
  piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = REFG(undefined4, 0x13241d4);
  if ((piVar3 != (int *)0x0) && (REFG(undefined4, 0x13241d0) == this)) {
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3)));
    ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,uVar2,0);
    REFG(undefined4, 0x13241d0) = (undefined *)0x0;
  }
  if (*(int *)(this + 0x1dc) != 0) {
    piVar3 = *(int * PTR32 *)(this + 0x1d8);
    if (piVar3 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar3 + 0x4c))(piVar3,*(int *)(this + 0x1dc));
    }
    puVar1 = *(undefined4 * PTR32 *)(this + 0x1dc);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      *(undefined4 *)(this + 0x1dc) = 0;
    }
  }
  if (*(int *)(this + 0x1e4) != 0) {
    piVar3 = *(int * PTR32 *)(this + 0x1e0);
    if (piVar3 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar3 + 0x4c))(piVar3,*(int *)(this + 0x1e4));
    }
    puVar1 = *(undefined4 * PTR32 *)(this + 0x1e4);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      *(undefined4 *)(this + 0x1e4) = 0;
    }
  }
  F_006e6ba0(*(undefined * PTR32 *)(this + 4),this,1);
  this[0x44] = (undefined1)0x0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  this[0x4c] = (undefined1)0x0;
  if (param_3 == 0xb) {
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this,0x522,0,0);
  }
  else {
    uVar4 = param_3 - 0xc;
    if (uVar4 == 0) {
      uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this,0x521,0,0);
      return uVar4;
    }
  }
  return uVar4;
}

/* ref: Client::Game::Event::FishingEventHandler::vf39 */
uint F_006ea630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6ea630u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  
  *(undefined4 *)(this + 0xfc) = 0;
  this[0x109] = (undefined1)0x0;
  if ((REFG(undefined4, 0x1379694) != (undefined *)0x0) && (*(char *)((int)REFG(undefined4, 0x1379694) + 0x188) == '\x06')) {
    F_00aaa5b0(REFG(undefined4, 0x1379694),1);
  }
  F_00a4a760(&REFG(undefined, 0x14a7360),0x1a,0);
  F_00a4a760(&REFG(undefined, 0x14a7360),0x1b,0);
  F_006e6ba0(*(undefined * PTR32 *)(this + 4),this,1);
  this[0x44] = (undefined1)0x0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  this[0x4c] = (undefined1)0x0;
  if (param_3 == 0xb) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this,0x522,0,0);
  }
  else {
    uVar1 = param_3 - 0xc;
    if (uVar1 == 0) {
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this,0x521,0,0);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: Client::Game::Event::GCShopEventHandler::vf39 */
uint F_006ea6d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6ea6d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  
  F_006d1bb0(1);
  F_006e6ba0(*(undefined * PTR32 *)(this + 4),this,1);
  this[0x44] = (undefined1)0x0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  this[0x4c] = (undefined1)0x0;
  if (param_3 == 0xb) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this,0x522,0,0);
  }
  else {
    uVar1 = param_3 - 0xc;
    if (uVar1 == 0) {
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this,0x521,0,0);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: FUN_006ea730 */
uint F_006ea730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6ea730u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined2 * puVar1;
  undefined4 * puVar2;
  uint uVar3;
  ulonglong uVar4;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  puVar1 = *(undefined2 * PTR32 *)(*param_1 + 4);
  *(undefined2 *)((int)this + 0x360) = puVar1[8];
  *(undefined2 *)((int)this + 0x362) = puVar1[10];
  *(undefined1 *)((int)this + 0x364) = *(undefined1 *)(puVar1 + 0xb);
  *(undefined2 *)((int)this + 0x366) = *puVar1;
  *(undefined2 *)((int)this + 0x368) = puVar1[2];
  *(undefined2 *)((int)this + 0x36a) = puVar1[4];
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x238);
  *(undefined2 *)((int)this + 0x36c) = puVar1[6];
  *(uint *)((int)this + 0x370) = (uint)(ushort)puVar1[9];
  if (puVar2 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    *(undefined4 *)((int)this + 0x238) = 0;
  }
  *(undefined4 *)((int)this + 0x234) = 0;
  if (*(char *)((int)this + 0x24c) != '\0') {
    uVar3 = F_0042a990((int)this + 0x118);
    F_0042ce40(((undefined1 *)(gen_frame + 0x4)),"%s/%s",REFG(undefined * PTR32, 0x132373c),uVar3);
    uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x4)));
    F_0042e430((undefined *)((int)this + 0x7c),uVar3);
    F_006e8f60(this,0,0xffffffff);
    uVar4 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return (uint)uVar4;
  }
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x240))(this,1,0);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar3;
}

/* ref: FUN_006ea850 */
uint F_006ea850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ea850u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8)));
  uVar2 = F_00b9a750(*(undefined4 *)((int)this_00 + 8));
  if ((char)(*(int * PTR32 *)&gen_args[1]) == '\0') {
    (*(uint *)(gen_frame + 0x4)) = uVar2;
    uVar2 = F_0042a990((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x118);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = REFG(undefined * PTR32, 0x1323738);
    (*(int * PTR32 *)&gen_args[1]) = (int *)uVar2;
    F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar2);
    F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
    uVar3 = F_00b9a940(*(undefined4 *)((int)this_00 + 8),0xffffffff);
    if (uVar3 == 0) {
      F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
      F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar2);
      F_00b9b150(*(undefined4 *)((int)this_00 + 8),0,0);
      iVar4 = (*(uint *)(gen_frame + 0x4)) + 2;
      F_00a01c40(this_00,iVar4,"className",(*(int * PTR32 *)&gen_args[1]));
      F_00a01c80(this_00,iVar4,"referenceCount",0);
      piVar1 = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x240)))));
      (*(uint *)(gen_frame + 0x4)) = (uint)piVar1;
      if (piVar1 != *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x240)))) {
        do {
          uVar5 = *(undefined4 *)((*(uint *)(gen_frame + 0x4)) + 0x60);
          uVar2 = F_0042a990((*(uint *)(gen_frame + 0x4)) + 0xc);
          F_00a01c80(this_00,iVar4,uVar2,uVar5);
          F_00732eb0(&(*(uint *)(gen_frame + 0x4)));
        } while ((*(uint *)(gen_frame + 0x4)) != *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x240))));
      }
      piVar1 = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))));
      (*(uint *)(gen_frame + 0x4)) = (uint)piVar1;
      if (piVar1 != *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))) {
        do {
          uVar5 = *(undefined4 *)((*(uint *)(gen_frame + 0x4)) + 0xc);
          uVar2 = F_0042a990((*(uint *)(gen_frame + 0x4)) + 0x10);
          F_00a01c80(this_00,iVar4,uVar2,uVar5);
          F_00732c70(&(*(uint *)(gen_frame + 0x4)));
        } while ((*(uint *)(gen_frame + 0x4)) != *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4))));
      }
      F_00b9bc00(*(undefined4 *)((int)this_00 + 8),(*(int * PTR32 *)&gen_args[1]));
      F_00b9a910(*(undefined4 *)((int)this_00 + 8),iVar4);
      if ((*(undefined * PTR32 *)(gen_frame + 0x8)) == (undefined *)0x0) {
        F_00b9b290(*(undefined4 *)((int)this_00 + 8),0xfffffffe,"__index");
        F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
        F_00b9b2f0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
      }
      else {
        F_00b9b290(*(undefined4 *)((int)this_00 + 8),0xfffffffe,"__index");
        F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
        F_00b9ae60(*(undefined4 *)((int)this_00 + 8),(*(undefined * PTR32 *)(gen_frame + 0x8)));
        F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
        F_00b9b290(*(undefined4 *)((int)this_00 + 8),iVar4,"__index");
        F_00b9a910(*(undefined4 *)((int)this_00 + 8),iVar4);
        F_00b9b3d0(*(undefined4 *)((int)this_00 + 8),iVar4);
        F_00b9b2f0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
        F_00a01ad0(this_00,(*(undefined * PTR32 *)(gen_frame + 0x8)));
      }
      goto LAB_006eaabb;
    }
    uVar5 = *(undefined4 *)((int)this_00 + 8);
  }
  else {
    uVar3 = F_0042a990((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x118);
    F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar3);
    F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
    uVar3 = F_00b9a940(*(undefined4 *)((int)this_00 + 8),0xffffffff);
    if (uVar3 != 0) {
      (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))));
      if ((*(int * PTR32 *)&gen_args[1]) != *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))) {
        do {
          uVar5 = *((undefined4 *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0xc)));
          uVar3 = F_0042a990((int)(*(int * PTR32 *)&gen_args[1]) + 0x10);
          F_00a01c80(this_00,uVar2 + 1,uVar3,uVar5);
          F_00732c70(&(*(int * PTR32 *)&gen_args[1]));
        } while ((*(int * PTR32 *)&gen_args[1]) != (int *)*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4))));
      }
    }
    uVar5 = *(undefined4 *)((int)this_00 + 8);
  }
  F_00b9a760(uVar5,0xfffffffe);
LAB_006eaabb: ;
  F_0074df70(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x23c))),*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x240))) + 4))));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x240))) + 4))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x240)));
  *(undefined4 *)*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x240))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x240)));
  uVar2 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x240)));
  *(uint *)(uVar2 + 8) = uVar2;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x244))) = 0;
  return uVar2;
}

/* ref: FUN_006eab00 */
uint F_006eab00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6eab00u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined * this_00;
  undefined * puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  ushort * local_8;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8)));
  uVar2 = F_00b9a750(*(undefined4 *)((int)this_00 + 8));
  if ((char)(*(ushort * PTR32 *)&gen_args[1]) == '\0') {
    (*(ushort * PTR32 *)&gen_args[1]) = (ushort *)uVar2;
    uVar2 = F_0042a990((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x118);
    puVar1 = REFG(undefined * PTR32, 0x1323740);
    F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar2);
    F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
    uVar3 = F_00b9a940(*(undefined4 *)((int)this_00 + 8),0xffffffff);
    if (uVar3 == 0) {
      F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
      F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar2);
      F_00b9b150(*(undefined4 *)((int)this_00 + 8),0,0);
      iVar5 = (int)(*(ushort * PTR32 *)&gen_args[1]) + 2;
      F_00a01c40(this_00,iVar5,"className",uVar2);
      F_00a01c80(this_00,iVar5,"referenceCount",0);
      (*(ushort * PTR32 *)&gen_args[1]) = ((ushort *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x238)))));
      if ((*(ushort * PTR32 *)&gen_args[1]) != (ushort *)*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x238)))) {
        do {
          uVar6 = *((undefined4 *)GEN_TOP(((int)(*(ushort * PTR32 *)&gen_args[1]) + 0x60)));
          uVar3 = F_0042a990((int)(*(ushort * PTR32 *)&gen_args[1]) + 0xc);
          F_00a01c80(this_00,iVar5,uVar3,uVar6);
          F_00732eb0(&(*(ushort * PTR32 *)&gen_args[1]));
        } while ((*(ushort * PTR32 *)&gen_args[1]) != (ushort *)*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x238))));
      }
      local_8 = *((ushort * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x244)));
      if (local_8 != *((ushort * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x248)))) {
        (*(ushort * PTR32 *)&gen_args[1]) = local_8 + 0x10;
        do {
          uVar3 = F_0042a990((*(ushort * PTR32 *)&gen_args[1]));
          if (uVar3 != 0) {
            uVar4 = (uint)*local_8;
            uVar3 = F_0042a990((*(ushort * PTR32 *)&gen_args[1]));
            F_00a01c80(this_00,iVar5,uVar3,uVar4);
          }
          (*(ushort * PTR32 *)&gen_args[1]) = (*(ushort * PTR32 *)&gen_args[1]) + 0x3a;
          local_8 = local_8 + 0x3a;
        } while (local_8 != *((ushort * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x248))));
      }
      (*(ushort * PTR32 *)&gen_args[1]) = ((ushort *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))));
      if ((*(ushort * PTR32 *)&gen_args[1]) != (ushort *)*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))) {
        do {
          uVar6 = *((undefined4 *)GEN_TOP(((int)(*(ushort * PTR32 *)&gen_args[1]) + 0xc)));
          uVar3 = F_0042a990((int)(*(ushort * PTR32 *)&gen_args[1]) + 0x10);
          F_00a01c80(this_00,iVar5,uVar3,uVar6);
          F_00732c70(&(*(ushort * PTR32 *)&gen_args[1]));
        } while ((*(ushort * PTR32 *)&gen_args[1]) != (ushort *)*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4))));
      }
      F_00b9bc00(*(undefined4 *)((int)this_00 + 8),uVar2);
      F_00b9a910(*(undefined4 *)((int)this_00 + 8),iVar5);
      if (puVar1 == (undefined *)0x0) {
        F_00b9b290(*(undefined4 *)((int)this_00 + 8),0xfffffffe,"__index");
        F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
        F_00b9b2f0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
      }
      else {
        F_00b9b290(*(undefined4 *)((int)this_00 + 8),0xfffffffe,"__index");
        F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
        F_00b9ae60(*(undefined4 *)((int)this_00 + 8),puVar1);
        F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
        F_00b9b290(*(undefined4 *)((int)this_00 + 8),iVar5,"__index");
        F_00b9a910(*(undefined4 *)((int)this_00 + 8),iVar5);
        F_00b9b3d0(*(undefined4 *)((int)this_00 + 8),iVar5);
        F_00b9b2f0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
        F_00a01ad0(this_00,puVar1);
      }
      goto LAB_006eadc7;
    }
LAB_006ead7b: ;
    uVar6 = *(undefined4 *)((int)this_00 + 8);
  }
  else {
    uVar3 = F_0042a990((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x118);
    F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar3);
    F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
    uVar3 = F_00b9a940(*(undefined4 *)((int)this_00 + 8),0xffffffff);
    if (uVar3 == 0) goto LAB_006ead7b;
    (*(ushort * PTR32 *)&gen_args[1]) = ((ushort *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))));
    if ((*(ushort * PTR32 *)&gen_args[1]) != (ushort *)*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))) {
      do {
        uVar6 = *((undefined4 *)GEN_TOP(((int)(*(ushort * PTR32 *)&gen_args[1]) + 0xc)));
        uVar3 = F_0042a990((int)(*(ushort * PTR32 *)&gen_args[1]) + 0x10);
        F_00a01c80(this_00,uVar2 + 1,uVar3,uVar6);
        F_00732c70(&(*(ushort * PTR32 *)&gen_args[1]));
      } while ((*(ushort * PTR32 *)&gen_args[1]) != (ushort *)*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4))));
    }
    uVar6 = *(undefined4 *)((int)this_00 + 8);
  }
  F_00b9a760(uVar6,0xfffffffe);
LAB_006eadc7: ;
  F_0074df70(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x234))),*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x238))) + 4))));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x238))) + 4))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x238)));
  *(undefined4 *)*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x238))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x238)));
  uVar2 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x238)));
  *(uint *)(uVar2 + 8) = uVar2;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x23c))) = 0;
  return uVar2;
}

/* ref: Client::Game::Event::SpecialShopEventHandler::vf39 */
uint F_006eae10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6eae10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  int * piVar1;
  uint uVar2;
  undefined4 uVar3;
  
  this[0x1a0] = (undefined1)0x0;
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar3 = 99;
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
  piVar1 = (int *)F_00763050(uVar2,uVar3);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
    if ((char)uVar2 != '\0') {
      *(undefined4 *)&REFG(undefined, 0x1324210) = 0;
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    }
  }
  if (*(int *)(this + 8) == 0x1b000c) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x1e0))(this);
  }
  F_006e6ba0(*(undefined * PTR32 *)(this + 4),this,1);
  this[0x44] = (undefined1)0x0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  this[0x4c] = (undefined1)0x0;
  if (param_3 == 0xb) {
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this,0x522,0,0);
  }
  else {
    uVar2 = param_3 - 0xc;
    if (uVar2 == 0) {
      uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this,0x521,0,0);
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_006eaed0 */
uint F_006eaed0(unsigned int gen_a0)
{
  GEN_ENTER(0x6eaed0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint * puVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  undefined * pvVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint * puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  *(undefined * PTR32 *)&REFG(undefined, 0x1324210) = this;
  piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar12 = 99;
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x48))(piVar3);
  pvVar5 = (undefined *)F_00763050(uVar4,uVar12);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = pvVar5;
  uVar4 = F_0042a990((int)this + 0x144);
  F_0077a530(pvVar5,0,uVar4);
  uVar4 = *(uint *)((int)this + 0x198);
  if ((uVar4 == 0) || (uVar4 == 1)) {
    F_0082b230(pvVar5,(*(int *)((int)this + 0xfc) - *(int *)((int)this + 0xf8)) / 0x1b0,0);
    iVar10 = *(int *)((int)this + 0xf8);
    iVar9 = 0;
    if (iVar10 != *(int *)((int)this + 0xfc)) {
      do {
        F_007de390((*(undefined * PTR32 *)(gen_frame + 0x18)),iVar9,*(undefined4 *)(iVar10 + 0xe4),(uint)*(ushort *)(iVar10 + 0xd8),
                     *(undefined4 *)(iVar10 + 0xdc),(uint)*(byte *)(iVar10 + 0xe8));
        iVar10 = iVar10 + 0x1b0;
        iVar9 = iVar9 + 1;
      } while (iVar10 != *(int *)((int)this + 0xfc));
    }
    puVar1 = *(uint * PTR32 *)((int)this + 0x11c);
    uVar8 = *(int *)((int)this + 0x120) - (int)((int)(uintptr_t)puVar1) >> 2;
    ((byte *)(gen_frame + 0x0))[0x10] = (byte)uVar8;
    uVar8 = uVar8 & 0xff;
    uVar4 = 0;
    puVar11 = puVar1;
    if (uVar8 != 0) {
      do {
        ((byte *)(gen_frame + 0x30))[(int)(uVar4)] = (byte)*puVar11;
        uVar4 = uVar4 + 1;
        puVar11 = puVar11 + 1;
      } while (uVar4 < uVar8);
    }
    (*(uint *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = **(undefined4 * PTR32 *)((int)this + 300);
    if (*(int *)((int)this + 0x198) == 0) {
      ((byte *)(gen_frame + 0x30))[0] = 1;
      ((byte *)(gen_frame + 0x30))[1] = 2;
      ((byte *)(gen_frame + 0x30))[2] = 3;
      ((byte *)(gen_frame + 0x30))[3] = 4;
      uVar12 = 1;
      ((byte *)(gen_frame + 0x0))[0x10] = 4;
      uVar4 = 0;
      do {
        if ((uint)((byte *)(gen_frame + 0x30))[(int)(uVar4)] == *puVar1) {
          (*(uint *)(gen_frame + 0x1c)) = uVar4;
          break;
        }
        bVar2 = (char)uVar4 + 1;
        uVar4 = (uint)bVar2;
      } while (bVar2 < 4);
    }
    else {
      uVar8 = F_00a41080(&REFG(undefined, 0x14a4230),0x165c,0,1,1);
      uVar6 = F_00a41080(&REFG(undefined, 0x14a4230),0x165d,0,1,1);
      uVar4 = F_00a41080(&REFG(undefined, 0x14a4230),0x165e,0,1,1);
      (*(uint *)(gen_frame + 0x28)) = uVar4;
      uVar7 = F_00a41080(&REFG(undefined, 0x14a4230),0x165f,0,1,1);
      uVar4 = 0;
      if (uVar8 != 0) {
        (*(uint *)(gen_frame + 0x1c)) = 0;
        uVar4 = uVar8;
      }
      if (uVar4 < uVar6) {
        (*(uint *)(gen_frame + 0x1c)) = 1;
        uVar4 = uVar6;
      }
      if (uVar4 < (*(uint *)(gen_frame + 0x28))) {
        (*(uint *)(gen_frame + 0x1c)) = 2;
        uVar4 = (*(uint *)(gen_frame + 0x28));
      }
      if (uVar4 < uVar7) {
        (*(uint *)(gen_frame + 0x1c)) = 3;
      }
      uVar12 = 2;
      (*(undefined4 *)(gen_frame + 0x14)) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 300) + (*(uint *)(gen_frame + 0x1c)) * 4)));
    }
    uVar4 = F_00751aa0((undefined *)((int)this + 0x10c),&(*(undefined4 *)(gen_frame + 0x14)));
    uVar13 = *(undefined4 *)(uVar4 + 4);
    uVar4 = F_00751aa0((undefined *)((int)this + 0x10c),&(*(undefined4 *)(gen_frame + 0x14)));
    uVar4 = F_0042a990(uVar4 + 8);
    pvVar5 = (*(undefined * PTR32 *)(gen_frame + 0x18));
    F_0077a550((*(undefined * PTR32 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x14)),uVar4,uVar13);
    uVar4 = F_008779e0(pvVar5,&REFG(undefined * PTR32, 0x132420c),uVar12,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)),((byte *)(gen_frame + 0x30)),(*(uint *)(gen_frame + 0x1c)));
  }
  else if (uVar4 == 2) {
    F_0082b230(pvVar5,(*(int *)((int)this + 0xfc) - *(int *)((int)this + 0xf8)) / 0x1b0,1);
    iVar10 = *(int *)((int)this + 0xf8);
    iVar9 = 0;
    if (iVar10 != *(int *)((int)this + 0xfc)) {
      do {
        F_007de390((*(undefined * PTR32 *)(gen_frame + 0x18)),iVar9,*(undefined4 *)(iVar10 + 0xe4),(uint)*(ushort *)(iVar10 + 0xd8),
                     1,0);
        F_0077a570((*(undefined * PTR32 *)(gen_frame + 0x18)),0,iVar9,*(undefined4 *)(iVar10 + 0xec),
                     (uint)*(ushort *)(iVar10 + 0xdc));
        if (*(int *)(iVar10 + 0xf0) != 0) {
          F_0077a570((*(undefined * PTR32 *)(gen_frame + 0x18)),1,iVar9,*(int *)(iVar10 + 0xf0),(uint)*(ushort *)(iVar10 + 0xe0));
        }
        iVar10 = iVar10 + 0x1b0;
        iVar9 = iVar9 + 1;
      } while (iVar10 != *(int *)((int)this + 0xfc));
    }
    uVar4 = F_00877b70((*(undefined * PTR32 *)(gen_frame + 0x18)),&REFG(undefined * PTR32, 0x132420c));
    F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
    return uVar4;
  }
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar4;
}

/* ref: FUN_006eb210 */
uint F_006eb210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6eb210u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar3 = 99;
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
  this_00 = (undefined *)F_00763050(uVar2,uVar3);
  uVar2 = 0;
  if (this_00 != (undefined *)0x0) {
    (*(int *)&gen_args[1]) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 300))) + (*(int *)&gen_args[1]) * 4)));
    uVar2 = F_00751aa0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10c))),&(*(int *)&gen_args[1]));
    uVar3 = *(undefined4 *)(uVar2 + 4);
    uVar2 = F_00751aa0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10c))),&(*(int *)&gen_args[1]));
    uVar2 = F_0042a990(uVar2 + 8);
    uVar2 = F_0077a550(this_00,(*(int *)&gen_args[1]),uVar2,uVar3);
  }
  return uVar2;
}

/* ref: Client::Game::Event::SpecialShopEventHandler::vf51 */
unsigned int F_006eb290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6eb290u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined * pSVar1;
  int * piVar2;
  
  if (*(int *)(this + 8) == 0x1b000c) {
    if (*((int *)GEN_TOP((*(int *)(this + 4) + 0x24))) == 0) {
      pSVar1 = (undefined *)0x0;
    }
    else {
      piVar2 = (int *)F_007512b0(((undefined *)GEN_TOP((*(int *)(this + 4) + 0x14))));
      pSVar1 = (undefined *)*piVar2;
    }
    if (pSVar1 != this) {
      ((code *)*(gen_code32 *)(*(int *)this + 0x1e0))(this);
    }
  }
  return 0;
}

/* ref: FUN_006eb2d0 */
uint F_006eb2d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6eb2d0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  uVar3 = (*(uint *)&gen_args[1]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)((*(uint *)&gen_args[1]) >> 0x10);
  if ((*(int *)&gen_args[2]) != 0) {
    bVar1 = F_00ae2460((*(int *)&gen_args[2]));
    if (bVar1 != 0) {
      return 0;
    }
  }
  (*(uint *)&gen_args[1]) = (*(uint *)&gen_args[1]) & 0xffffff;
  piVar2 = (int *)F_006dda70((*(undefined * PTR32 *)&gen_args[0]),uVar3);
  if (piVar2 == (int *)0x0) {
    F_00748f10(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))),&(*(uint *)&gen_args[1]),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
    if ((*(uint *)&gen_args[1]) != *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40)))) {
      piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)((*(uint *)&gen_args[1]) + 0x10))(uVar3)));
      if (piVar2 != (int *)0x0) {
        bVar1 = F_006e54c0((*(undefined * PTR32 *)&gen_args[0]),uVar3,piVar2);
        if (bVar1 == 0) {
          ((code *)*(gen_code32 *)((*(uint *)&gen_args[1]) + 0x14))(piVar2);
        }
        (*(uint *)&gen_args[1]) = CONCAT13(1,(undefined3)(*(uint *)&gen_args[1]));
        if (uVar3 < 0x140002) {
          if (uVar3 == 0x140001) {
            *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58))) = piVar2;
          }
          else if (uVar3 == 0xa0001) {
            *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))) = piVar2;
          }
          else if (uVar3 == 0xe0000) {
            *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) = piVar2;
          }
        }
        else if (uVar3 == 0x150001) {
          *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54))) = piVar2;
        }
        goto LAB_006eb383;
      }
    }
    return 0;
  }
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2);
  if ((char)uVar3 == '\0') {
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    if ((char)uVar3 == '\0') {
      (*(uint *)&gen_args[1]) = CONCAT13(1,(undefined3)(*(uint *)&gen_args[1]));
    }
  }
LAB_006eb383: ;
  ((code *)*(gen_code32 *)(*piVar2 + 0x234))(piVar2,(*(int *)&gen_args[2]));
  if ((*(undefined1 *)((char *)&(*(uint *)&gen_args[1]) + 3)) != '\0') {
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  }
  return (uint)piVar2;
}

/* ref: Client::Game::Event::LeveDirector::vf1 */
uint F_006eb3f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6eb3f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  ulonglong uVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042ce40(((undefined1 *)(gen_frame + 0x4)),"%s/%s",REFG(undefined * PTR32, 0x132374c),REFG(undefined * PTR32, 0x1323748));
  uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0x4)));
  F_0042e430(this + 0x7c,uVar1);
  F_006e8f60(this,0,0xffffffff);
  this[0x1c] = (undefined1)((byte)this[0x1c] | 2);
  uVar2 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return (uint)uVar2;
}

/* ref: Client::Game::Event::BattleLeveDirector::vf1 */
uint F_006eb460(unsigned int gen_a0)
{
  GEN_ENTER(0x6eb460u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042ce40(((undefined1 *)(gen_frame + 0x4)),"%s/%s",REFG(undefined * PTR32, 0x132374c),REFG(undefined * PTR32, 0x1323748));
  uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0x4)));
  F_0042e430(this + 0x7c,uVar1);
  F_006e8f60(this,0,0xffffffff);
  this[0x1c] = (undefined1)((byte)this[0x1c] | 2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  uVar1 = F_006d27e0(this,(uint)*(ushort *)(this + 0x310));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar1;
}

/* ref: Client::Game::Event::BattleLeveDirector::vf158 */
unsigned int F_006eb510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6eb510u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  undefined4 uVar2;
  
  if (((*(int *)(this + 0x50c) != 0) && (param_2 < 1)) && ((param_2 < 0 || (param_1 < 10)))) {
    uVar1 = F_00ab3300(0x28);
    if (uVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(uVar1 + 4);
    }
    uVar1 = F_006e5f80(REFG(undefined4, 0x1488344),this,uVar2,0);
    *(uint *)(this + 0x508) = uVar1;
  }
  return 0;
}

/* ref: Client::Game::Event::GatheringLeveDirector::vf1 */
uint F_006eb560(unsigned int gen_a0)
{
  GEN_ENTER(0x6eb560u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042ce40(((undefined1 *)(gen_frame + 0x4)),"%s/%s",REFG(undefined * PTR32, 0x132374c),REFG(undefined * PTR32, 0x1323748));
  uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0x4)));
  F_0042e430(this + 0x7c,uVar1);
  F_006e8f60(this,0,0xffffffff);
  this[0x1c] = (undefined1)((byte)this[0x1c] | 2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  uVar1 = F_006d27e0(this,(uint)*(ushort *)(this + 0x310));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar1;
}

/* ref: Client::Game::Event::CompanyLeveDirector::vf1 */
uint F_006eb5e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6eb5e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042ce40(((undefined1 *)(gen_frame + 0x4)),"%s/%s",REFG(undefined * PTR32, 0x132374c),REFG(undefined * PTR32, 0x1323748));
  uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0x4)));
  F_0042e430(this + 0x7c,uVar1);
  F_006e8f60(this,0,0xffffffff);
  this[0x1c] = (undefined1)((byte)this[0x1c] | 2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  uVar1 = F_006d27e0(this,(uint)*(ushort *)(this + 0x310));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar1;
}

/* ref: FUN_006eb660 */
uint F_006eb660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6eb660u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  ulonglong uVar8;
  
  (*(uint *)(gen_frame + 0xd8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xdc);
  puVar7 = *(uint * PTR32 *)(*param_1 + 4);
  F_0042e430((undefined *)((int)this + 0x1dc),(int)puVar7 + (puVar7[0x50] & 0xffffff) + 0x140);
  F_0042ccf0((undefined *)((int)this + 0x118),(undefined *)((int)this + 0x1dc));
  *(short *)((int)this + 0x1d8) = (short)puVar7[0x51];
  (*(uint * PTR32 *)(gen_frame + 0x24)) = puVar7;
  (*(int *)(gen_frame + 0x28)) = 0x28;
  do {
    pcVar4 = ((char *)GEN_TOP(((*puVar7 & 0xffffff) + (int)puVar7)));
    (*(char * PTR32 *)(gen_frame + 0x20)) = pcVar4;
    pcVar1 = pcVar4 + 1;
    do {
      cVar3 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar3 != '\0');
    if (pcVar4 != pcVar1) {
      (*(uint *)(gen_frame + 0x18)) = puVar7[1];
      (*(uint * PTR32 *)(gen_frame + 0x24)) = puVar7;
      puVar5 = (undefined4 *)F_004296a0(0x68,0,800);
      *puVar5 = *(undefined4 *)((int)this + 0x23c);
      puVar5[1] = *(undefined4 *)((int)this + 0x23c);
      puVar5[2] = *(undefined4 *)((int)this + 0x23c);
      *(undefined2 *)(puVar5 + 0x19) = 0;
      F_0042cc20(((undefined1 *)(gen_frame + 0x80)),(*(char * PTR32 *)(gen_frame + 0x20)),REFG(undefined4, 0x108cc50));
      (*(uint *)(gen_frame + 0xd4)) = (*(uint *)(gen_frame + 0x18));
      if (puVar5 + 3 != (undefined4 *)0x0) {
        F_0042cbc0(puVar5 + 3,((undefined1 *)(gen_frame + 0x80)));
        puVar5[0x18] = (*(uint *)(gen_frame + 0xd4));
      }
      F_0042c880(((undefined1 *)(gen_frame + 0x80)));
      F_007502b0((undefined *)((int)this + 0x238),((undefined1 *)(gen_frame + 0xc)),puVar5,0);
      puVar7 = (*(uint * PTR32 *)(gen_frame + 0x24));
    }
    puVar7 = puVar7 + 2;
    iVar2 = (*(int *)(gen_frame + 0x28)) + -1;
    (*(int *)(gen_frame + 0x28)) = iVar2;
    (*(uint * PTR32 *)(gen_frame + 0x24)) = puVar7;
  } while (iVar2 != 0);
  uVar6 = F_0042a990((int)this + 0x1dc);
  F_0042ce40(((undefined1 *)(gen_frame + 0x2c)),"%s/%s",REFG(undefined * PTR32, 0x1323774),uVar6);
  uVar6 = F_0042a990(((undefined1 *)(gen_frame + 0x2c)));
  F_0042e430((undefined *)((int)this + 0x7c),uVar6);
  F_006e8f60(this,0,0xffffffff);
  puVar5 = *(undefined4 * PTR32 *)((int)this + 0x234);
  if (puVar5 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar5)(puVar5,1);
    *(undefined4 *)((int)this + 0x234) = 0;
  }
  uVar8 = F_0042c880(((undefined1 *)(gen_frame + 0x2c)));
  F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
  return (uint)uVar8;
}

/* ref: FUN_006eb820 */
uint F_006eb820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6eb820u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8)));
  uVar2 = F_00b9a750(*(undefined4 *)((int)this_00 + 8));
  if ((char)(*(int * PTR32 *)&gen_args[1]) == '\0') {
    (*(uint *)(gen_frame + 0x4)) = uVar2;
    uVar2 = F_0042a990((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x118);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = REFG(undefined * PTR32, 0x1323770);
    (*(int * PTR32 *)&gen_args[1]) = (int *)uVar2;
    F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar2);
    F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
    uVar3 = F_00b9a940(*(undefined4 *)((int)this_00 + 8),0xffffffff);
    if (uVar3 == 0) {
      F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
      F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar2);
      F_00b9b150(*(undefined4 *)((int)this_00 + 8),0,0);
      iVar4 = (*(uint *)(gen_frame + 0x4)) + 2;
      F_00a01c40(this_00,iVar4,"className",(*(int * PTR32 *)&gen_args[1]));
      F_00a01c80(this_00,iVar4,"referenceCount",0);
      piVar1 = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x23c)))));
      (*(uint *)(gen_frame + 0x4)) = (uint)piVar1;
      if (piVar1 != *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x23c)))) {
        do {
          uVar5 = *(undefined4 *)((*(uint *)(gen_frame + 0x4)) + 0x60);
          uVar2 = F_0042a990((*(uint *)(gen_frame + 0x4)) + 0xc);
          F_00a01c80(this_00,iVar4,uVar2,uVar5);
          F_00732eb0(&(*(uint *)(gen_frame + 0x4)));
        } while ((*(uint *)(gen_frame + 0x4)) != *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x23c))));
      }
      piVar1 = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))));
      (*(uint *)(gen_frame + 0x4)) = (uint)piVar1;
      if (piVar1 != *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))) {
        do {
          uVar5 = *(undefined4 *)((*(uint *)(gen_frame + 0x4)) + 0xc);
          uVar2 = F_0042a990((*(uint *)(gen_frame + 0x4)) + 0x10);
          F_00a01c80(this_00,iVar4,uVar2,uVar5);
          F_00732c70(&(*(uint *)(gen_frame + 0x4)));
        } while ((*(uint *)(gen_frame + 0x4)) != *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4))));
      }
      F_00b9bc00(*(undefined4 *)((int)this_00 + 8),(*(int * PTR32 *)&gen_args[1]));
      F_00b9a910(*(undefined4 *)((int)this_00 + 8),iVar4);
      if ((*(undefined * PTR32 *)(gen_frame + 0x8)) == (undefined *)0x0) {
        F_00b9b290(*(undefined4 *)((int)this_00 + 8),0xfffffffe,"__index");
        F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
        F_00b9b2f0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
      }
      else {
        F_00b9b290(*(undefined4 *)((int)this_00 + 8),0xfffffffe,"__index");
        F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
        F_00b9ae60(*(undefined4 *)((int)this_00 + 8),(*(undefined * PTR32 *)(gen_frame + 0x8)));
        F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
        F_00b9b290(*(undefined4 *)((int)this_00 + 8),iVar4,"__index");
        F_00b9a910(*(undefined4 *)((int)this_00 + 8),iVar4);
        F_00b9b3d0(*(undefined4 *)((int)this_00 + 8),iVar4);
        F_00b9b2f0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
        F_00a01ad0(this_00,(*(undefined * PTR32 *)(gen_frame + 0x8)));
      }
      goto LAB_006eba8b;
    }
    uVar5 = *(undefined4 *)((int)this_00 + 8);
  }
  else {
    uVar3 = F_0042a990((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x118);
    F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar3);
    F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
    uVar3 = F_00b9a940(*(undefined4 *)((int)this_00 + 8),0xffffffff);
    if (uVar3 != 0) {
      (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))));
      if ((*(int * PTR32 *)&gen_args[1]) != *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))) {
        do {
          uVar5 = *((undefined4 *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0xc)));
          uVar3 = F_0042a990((int)(*(int * PTR32 *)&gen_args[1]) + 0x10);
          F_00a01c80(this_00,uVar2 + 1,uVar3,uVar5);
          F_00732c70(&(*(int * PTR32 *)&gen_args[1]));
        } while ((*(int * PTR32 *)&gen_args[1]) != (int *)*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4))));
      }
    }
    uVar5 = *(undefined4 *)((int)this_00 + 8);
  }
  F_00b9a760(uVar5,0xfffffffe);
LAB_006eba8b: ;
  F_0074df70(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x238))),*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x23c))) + 4))));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x23c))) + 4))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x23c)));
  *(undefined4 *)*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x23c))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x23c)));
  uVar2 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x23c)));
  *(uint *)(uVar2 + 8) = uVar2;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x240))) = 0;
  return uVar2;
}

/* ref: FUN_006ebad0 */
byte F_006ebad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6ebad0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  bVar1 = F_006e6390(REFG(undefined4, 0x1488344),param_2,this,param_1);
  return bVar1;
}

/* ref: FUN_006ebaf0 */
uint F_006ebaf0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ebaf0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  undefined4 * puVar4;
  uint uVar5;
  int iVar6;
  
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  puVar4 = (undefined4 *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar3);
  uVar1 = *puVar4;
  uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2);
  ((byte *)(gen_frame + 0x8))[0x20] = (byte)uVar3;
  uVar3 = F_00a019d0(((byte *)(gen_frame + 0x8)));
  iVar6 = 3;
  if (2 < (int)uVar3) {
    do {
      bVar2 = F_00a01f20(((byte *)(gen_frame + 0x8)),iVar6);
      if (bVar2 != 0) break;
      uVar5 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),iVar6);
      F_006e6390(REFG(undefined4, 0x1488344),uVar5,uVar1,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
      iVar6 = iVar6 + 1;
    } while (iVar6 <= (int)uVar3);
  }
  F_00a01890(((byte *)(gen_frame + 0x8)));
  return 0;
}

/* ref: Client::Game::Event::ExitRangeEventHandler::vf1 */
uint F_006ebb90(unsigned int gen_a0)
{
  GEN_ENTER(0x6ebb90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  ulonglong uVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042ce40(((undefined1 *)(gen_frame + 0x4)),"%s/%s",REFG(undefined * PTR32, 0x132377c),REFG(undefined * PTR32, 0x1323778));
  uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0x4)));
  F_0042e430(this + 0x7c,uVar1);
  F_006e8f60(this,0,0xffffffff);
  this[0x1c] = (undefined1)((byte)this[0x1c] | 2);
  uVar2 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return (uint)uVar2;
}

/* ref: Client::Game::Event::ExitRangeEventHandler::vf39 */
uint F_006ebc00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6ebc00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  
  F_00a036e0(*(undefined * PTR32 *)(this + 0xf8));
  F_006e6ba0(*(undefined * PTR32 *)(this + 4),this,1);
  this[0x44] = (undefined1)0x0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  this[0x4c] = (undefined1)0x0;
  if (param_3 == 0xb) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this,0x522,0,0);
    uVar1 = F_00ab5b10(&REFG(undefined4, 0x14bcc80),2);
    return uVar1;
  }
  uVar1 = param_3 - 0xc;
  if (uVar1 == 0) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this,0x521,0,0);
    uVar1 = F_00ab5b10(&REFG(undefined4, 0x14bcc80),2);
    return uVar1;
  }
  if ((9 < param_3) && (param_3 < 0x1d)) {
    uVar1 = F_00ab5b10(&REFG(undefined4, 0x14bcc80),2);
  }
  return uVar1;
}

/* ref: Client::Game::Event::ChocoboTaxiStandEventHandler::vf1 */
uint F_006ebca0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ebca0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  ulonglong uVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042ce40(((undefined1 *)(gen_frame + 0x4)),"%s/%s",REFG(undefined * PTR32, 0x1323784),REFG(undefined * PTR32, 0x1323780));
  uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0x4)));
  F_0042e430(this + 0x7c,uVar1);
  F_006e8f60(this,0,0xffffffff);
  this[0x1c] = (undefined1)((byte)this[0x1c] | 2);
  uVar2 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return (uint)uVar2;
}

/* ref: Client::Game::Event::Director::vf39 */
uint F_006ebd10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6ebd10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  
  if ((char)param_1 != '\f') {
    if ((char)param_1 == '\x0e') {
      F_00a69780(&REFG(undefined4, 0x14b119c));
      goto LAB_006ebd33;
    }
    if ((char)param_1 != '\x11') goto LAB_006ebd33;
  }
  F_00a69770(&REFG(undefined4, 0x14b119c));
LAB_006ebd33: ;
  F_00a036e0(*(undefined * PTR32 *)(this + 0xf8));
  F_006e6ba0(*(undefined * PTR32 *)(this + 4),this,1);
  this[0x44] = (undefined1)0x0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  this[0x4c] = (undefined1)0x0;
  if (param_3 == 0xb) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this,0x522,0,0);
  }
  else {
    uVar1 = param_3 - 0xc;
    if (uVar1 == 0) {
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this,0x521,0,0);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: FUN_006ebda0 */
uint F_006ebda0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6ebda0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  bool bVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  F_006ea2d0(param_1,param_3,param_4);
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_0042cc20(((undefined1 *)(gen_frame + 0x1c)),&REFG(undefined, 0x10b7ff8),REFG(undefined4, 0x108cc50));
  F_00ada1b0(param_3,((undefined1 *)(gen_frame + 0x1c)),&(*(int *)(gen_frame + 0xc)));
  F_0042c880(((undefined1 *)(gen_frame + 0x1c)));
  F_0042aca0(param_3);
  bVar1 = 1 < (byte)param_2;
  if (bVar1) {
    F_00c472af(((undefined1 *)(gen_frame + 0x70)),8,&REFG(undefined, 0x10b7ffc),(uint)(byte)param_2);
  }
  if (((*(int *)(gen_frame + 0x10)) - (*(int *)(gen_frame + 0xc))) / 0x54 == 2) {
    F_0042e360(param_3,(*(int *)(gen_frame + 0xc)));
    F_0042e370(param_3,(*(undefined * PTR32 (*)[1])REFP(0x10b8000)));
    if (bVar1) {
      F_0042e370(param_3,((undefined1 *)(gen_frame + 0x70)));
    }
    F_0042e370(param_3,&REFG(undefined, 0x10b8004));
    F_0042e360(param_3,(*(int *)(gen_frame + 0xc)) + 0x54);
  }
  F_0042e370(param_4,(*(undefined * PTR32 (*)[1])REFP(0x10b8008)));
  if (bVar1) {
    F_0042e370(param_4,((undefined1 *)(gen_frame + 0x70)));
  }
  uVar2 = F_004876d0(&(*(int *)(gen_frame + 0xc)));
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return uVar2;
}

/* ref: FUN_006ebec0 */
uint F_006ebec0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ebec0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  uint uVar1;
  ulonglong uVar2;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  F_0042b630(((undefined1 *)(gen_frame + 0xb4)));
  F_0042b630(((undefined1 *)(gen_frame + 0xc)));
  F_006ea2d0((int)this + 0x410,((undefined1 *)(gen_frame + 0xb4)),((undefined1 *)(gen_frame + 0xc)));
  uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0xb4)));
  F_0042ce40(((undefined1 *)(gen_frame + 0x60)),"%s/%s",REFG(undefined * PTR32, 0x132372c),uVar1);
  uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0x60)));
  F_0042e430((undefined *)((int)this + 0x7c),uVar1);
  F_006e8f60(this,0,0xffffffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x60)));
  F_0042c880(((undefined1 *)(gen_frame + 0xc)));
  uVar2 = F_0042c880(((undefined1 *)(gen_frame + 0xb4)));
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return (uint)uVar2;
}

/* ref: FUN_006ebf80 */
uint F_006ebf80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ebf80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(ushort *)((int)this + 0x20c) = (ushort)param_1;
  F_007440c0((undefined *)((int)this + 0x6fc));
  F_007443b0((undefined *)((int)this + 0x70c));
  if (*(int *)((int)this + 0x210) != 0) {
    F_006e5450(this,*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x210) + 8))),0);
    *(undefined4 *)((int)this + 0x210) = 0;
  }
  uVar1 = F_00ab1c90((uint)(ushort)param_1);
  if ((uVar1 != 0) && (*(int *)(uVar1 + 8) != 0)) {
    uVar1 = F_006eb2d0(this,*(int *)(uVar1 + 8),0);
    if (uVar1 != 0) {
      *(uint *)((int)this + 0x210) = uVar1;
    }
  }
  uVar1 = F_006e33b0(this);
  if (*(int *)((int)this + 0x238) != 0) {
    *(undefined4 *)((int)this + 0x238) = 0;
    *(undefined4 *)((int)this + 0x240) = 0xe0000000;
    *(undefined4 *)((int)this + 0x244) = 0;
    *(undefined1 *)((int)this + 0x248) = 0;
    *(undefined4 *)((int)this + 0x24c) = 0;
    *(undefined1 *)((int)this + 0x250) = 0;
    *(undefined4 *)((int)this + 0x254) = 0;
    *(undefined4 *)((int)this + 600) = 0;
    *(undefined1 *)((int)this + 0x25c) = 0;
  }
  return uVar1;
}

/* ref: FUN_006ec050 */
uint F_006ec050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6ec050u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_006eb2d0(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_006ec060 */
uint F_006ec060(unsigned int gen_a0)
{
  GEN_ENTER(0x6ec060u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  *(undefined * PTR32 *)((int)this + 4) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[136])REFP(0x10b8604));
  *(undefined * PTR32 *)((int)this + 0xc) = this;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[136])REFP(0x10b882c));
  *(undefined * PTR32 *)((int)this + 0x10) = this;
  puVar1 = (undefined4 *)((int)this + 0x14);
  *puVar1 = 0;
  puVar2 = (undefined4 *)F_004296a0(8,0,800);
  *puVar1 = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *(undefined4 * PTR32 *)*puVar1 = puVar1;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  F_00751140((undefined4 *)((int)this + 0x4c),8);
  F_00751140((undefined4 *)((int)this + 0x5c),8);
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined1 *)((int)this + 0xb0) = 0xff;
  *(undefined4 *)((int)this + 0xd0) = 0;
  F_0074ce90((undefined *)((int)this + 0x2c),0xc);
  F_0074d050((undefined *)((int)this + 0x3c),0x40);
  *(undefined2 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd6) = 0;
  *(undefined2 *)((int)this + 0xda) = 0;
  return (uint)this;
}

/* ref: FUN_006ec190 */
unsigned int F_006ec190(unsigned int gen_a0)
{
  GEN_ENTER(0x6ec190u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_004d1660(REFG(undefined4, 0x1370c18));
  F_006e68e0(this);
  return 0;
}

/* ref: FUN_006ec1b0 */
uint F_006ec1b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ec1b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_006e87e0((undefined *)((int)this + 0x4c));
  F_006c5500((undefined *)((int)this + 0x70));
  uVar1 = F_006d7210(this,*(undefined4 *)((int)this + 0x6c));
  return uVar1;
}

/* ref: FUN_006ec1d0 */
uint F_006ec1d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x6ec1d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  undefined * pvVar1;
  undefined4 * puVar2;
  uint uVar3;
  undefined4 extraout_EDX = 0;
  int iVar4;
  int * this_00;
  
  (*(uint *)(gen_frame + 0x98)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  (*(int * PTR32 *)(gen_frame + 0x4)) = param_1;
  (*(int *)(gen_frame + 0x8)) = param_2;
  (*(undefined4 *)(gen_frame + 0xc)) = param_3;
  if (param_1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_1 + 0x144))(param_1);
    F_00a6ef00(&REFG(undefined, 0x14ab428));
  }
  F_00751e80((undefined *)((int)this + 0x14),&(*(int * PTR32 *)(gen_frame + 0x4)));
  pvVar1 = REFG(undefined4, 0x1379694);
  iVar4 = param_2;
  if (*(int *)((int)this + 0x24) == 1) {
    puVar2 = (undefined4 *)F_00a5feb0(REFG(undefined4, 0x1379694));
    *(undefined4 *)((int)this + 0xc0) = *puVar2;
    *(undefined4 *)((int)this + 0xc4) = puVar2[1];
    *(undefined4 *)((int)this + 200) = puVar2[2];
    F_0071edf0(&(*(uint *)(gen_frame + 0x10)));
    F_006b9490(&(*(uint *)(gen_frame + 0x10)),1,pvVar1);
    F_007511f0((undefined *)((int)this + 0x2c),&(*(uint *)(gen_frame + 0x10)));
    iVar4 = (*(int *)(gen_frame + 0x8));
  }
  if (iVar4 == -0x20000000) {
    this_00 = (int *)0x0;
  }
  else {
    this_00 = (int *)F_00a354d0(&REFG(undefined4, 0x14a31f0),iVar4,(*(undefined4 *)(gen_frame + 0xc)));
  }
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 4))(this_00);
  if (uVar3 == 3) {
    F_0071edf0(&(*(uint *)(gen_frame + 0x10)));
    F_006b9490(&(*(uint *)(gen_frame + 0x10)),2,this_00);
  }
  else {
    if (uVar3 != 7) goto LAB_006ec356;
    F_0071edf0(&(*(uint *)(gen_frame + 0x10)));
    (*(undefined4 *)(gen_frame + 0x24)) = 3;
    uVar3 = ((code *)*(gen_code32 *)*this_00)(this_00);
    (*(uint *)(gen_frame + 0x18)) = (uint)*(ushort *)(this_00 + 0x22);
    (*(uint *)(gen_frame + 0x10)) = uVar3;
    (*(undefined4 *)(gen_frame + 0x14)) = extraout_EDX;
    puVar2 = (undefined4 *)F_00a5feb0(this_00);
    (*(undefined4 *)(gen_frame + 0x68)) = *puVar2;
    (*(undefined4 *)(gen_frame + 0x6c)) = puVar2[1];
    (*(undefined4 *)(gen_frame + 0x70)) = puVar2[2];
    (*(int *)(gen_frame + 0x74)) = this_00[0x2c];
    (*(uint *)(gen_frame + 0x7c)) = (uint)*(ushort *)((int)this_00 + 0x18a);
  }
  F_007511f0((undefined *)((int)this + 0x2c),&(*(uint *)(gen_frame + 0x10)));
LAB_006ec356: ;
  uVar3 = F_00af2010();
  F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
  return uVar3;
}

/* ref: FUN_006ec370 */
uint F_006ec370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ec370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined1 *)((int)this + 0xd5) = 0;
  F_00ab6d10();
  F_00ab6e10();
  uVar1 = F_006e88c0((undefined *)((int)this + 0x4c),param_1);
  return uVar1;
}

/* ref: FUN_006ec3a0 */
uint F_006ec3a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ec3a0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  
  uVar1 = F_00754690((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)&gen_args[1]));
  return uVar1;
}

/* ref: FUN_006ec3b0 */
uint F_006ec3b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ec3b0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  
  uVar1 = F_00754690(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))),&(*(undefined4 *)&gen_args[1]));
  return uVar1;
}

/* ref: FUN_006ec3d0 */
uint F_006ec3d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ec3d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = F_00b9a750(*(undefined4 *)((int)param_1 + 8));
  puVar1 = REFG(undefined * PTR32, 0x13236dc);
  F_00b9ae60(*(undefined4 *)((int)param_1 + 8),REFG(undefined * PTR32, 0x13236dc));
  F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
  uVar3 = F_00b9a940(*(undefined4 *)((int)param_1 + 8),0xffffffff);
  if (uVar3 == 0) {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
    F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar1);
    F_00b9b150(*(undefined4 *)((int)param_1 + 8),0,0);
    iVar4 = uVar2 + 2;
    F_00a01c40(param_1,iVar4,"className",puVar1);
    F_00a01c80(param_1,iVar4,"referenceCount",1);
    F_00a01cc0(param_1,iVar4,&REFG(undefined, 0x10b4254),((code *)REFP(0x6cade0)));
    F_00a01cc0(param_1,iVar4,"IsEventNpc",((code *)REFP(0x6cae40)));
    F_00a01cc0(param_1,iVar4,"IsBattleNpc",((code *)REFP(0x6caea0)));
    F_00a01cc0(param_1,iVar4,"IsRetainer",((code *)REFP(0x6caf00)));
    F_00a01cc0(param_1,iVar4,"IsEventObject",((code *)REFP(0x6caf60)));
    F_00a01cc0(param_1,iVar4,"IsAetheryte",((code *)REFP(0x6cafc0)));
    F_00a01cc0(param_1,iVar4,"GetBaseId",((code *)REFP(0x6cabe0)));
    F_00a01cc0(param_1,iVar4,"GetLayoutId",((code *)REFP(0x6cac50)));
    F_00a01cc0(param_1,iVar4,"GetContentId",((code *)REFP(0x6cad20)));
    F_00a01cc0(param_1,iVar4,"IsContent",((code *)REFP(0x6cad80)));
    F_00a01cc0(param_1,iVar4,"IsInContent",((code *)REFP(0x6cad80)));
    F_00a01cc0(param_1,iVar4,&REFG(undefined, 0x10b42dc),((code *)REFP(0x6b9e60)));
    F_00a01cc0(param_1,iVar4,"MotionTalk",((code *)REFP(0x6b9e80)));
    F_00a01cc0(param_1,iVar4,"WalkOutTalk",((code *)REFP(0x6b9ea0)));
    F_00a01cc0(param_1,iVar4,"TalkAsync",((code *)REFP(0x6b9ec0)));
    F_00a01cc0(param_1,iVar4,"CloseTalk",((code *)REFP(0x6b9f00)));
    F_00a01cc0(param_1,iVar4,"GetPosition",((code *)REFP(0x6caca0)));
    F_00a01cc0(param_1,iVar4,"Position",((code *)REFP(0x6baf20)));
    F_00a01cc0(param_1,iVar4,"Visible",((code *)REFP(0x6baf40)));
    F_00a01cc0(param_1,iVar4,"Direction",((code *)REFP(0x6baf60)));
    F_00a01cc0(param_1,iVar4,"EndEventRollback",((code *)REFP(0x6bb140)));
    F_00a01cc0(param_1,iVar4,"WalkIn",((code *)REFP(0x6bb1c0)));
    F_00a01cc0(param_1,iVar4,"WalkOut",((code *)REFP(0x6bb1e0)));
    F_00a01cc0(param_1,iVar4,"BattleMode",((code *)REFP(0x6bb200)));
    F_00a01cc0(param_1,iVar4,"EquipWeapon",((code *)REFP(0x6bb220)));
    F_00a01cc0(param_1,iVar4,"EquipArmor",((code *)REFP(0x6bb240)));
    F_00a01cc0(param_1,iVar4,"Equip",((code *)REFP(0x6bb260)));
    F_00a01cc0(param_1,iVar4,"AutoShake",((code *)REFP(0x6bb280)));
    F_00a01cc0(param_1,iVar4,"SetSceneEndRollback",((code *)REFP(0x6ca830)));
    F_00b9bc00(*(undefined4 *)((int)param_1 + 8),puVar1);
    F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar4);
    F_00b9b290(*(undefined4 *)((int)param_1 + 8),0xfffffffe,"__index");
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
    F_00b9b2f0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
  }
  else {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
  }
  F_00754330(param_2,REFG(undefined * PTR32, 0x13236e0),REFG(undefined * PTR32, 0x13236dc),0);
  return 1;
}

/* ref: FUN_006ec6e0 */
uint F_006ec6e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ec6e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * puVar1;
  undefined * puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = F_00b9a750(*(undefined4 *)((int)param_1 + 8));
  puVar2 = REFG(undefined * PTR32, 0x13236e4);
  puVar1 = REFG(undefined * PTR32, 0x13236d8);
  F_00b9ae60(*(undefined4 *)((int)param_1 + 8),REFG(undefined * PTR32, 0x13236e4));
  F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
  uVar4 = F_00b9a940(*(undefined4 *)((int)param_1 + 8),0xffffffff);
  if (uVar4 == 0) {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
    F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar2);
    F_00b9b150(*(undefined4 *)((int)param_1 + 8),0,0);
    iVar5 = uVar3 + 2;
    F_00a01c40(param_1,iVar5,"className",puVar2);
    F_00a01c80(param_1,iVar5,"referenceCount",1);
    F_00a01cc0(param_1,iVar5,"GetNpcId",((code *)REFP(0x6cabe0)));
    if (puVar1 == (undefined *)0x0) {
      F_00b9bc00(*(undefined4 *)((int)param_1 + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
      F_00b9b2f0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
    }
    else {
      F_00b9bc00(*(undefined4 *)((int)param_1 + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
      F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar1);
      F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),iVar5,"__index");
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b3d0(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b2f0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
      F_00a01ad0(param_1,puVar1);
    }
  }
  else {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
  }
  F_00754330(param_2,REFG(undefined * PTR32, 0x13236e0),REFG(undefined * PTR32, 0x13236e4),0);
  return 1;
}

/* ref: FUN_006ec890 */
uint F_006ec890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ec890u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * puVar1;
  undefined * puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = F_00b9a750(*(undefined4 *)((int)param_1 + 8));
  puVar2 = REFG(undefined * PTR32, 0x13236e8);
  puVar1 = REFG(undefined * PTR32, 0x13236e4);
  F_00b9ae60(*(undefined4 *)((int)param_1 + 8),REFG(undefined * PTR32, 0x13236e8));
  F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
  uVar4 = F_00b9a940(*(undefined4 *)((int)param_1 + 8),0xffffffff);
  if (uVar4 == 0) {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
    F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar2);
    F_00b9b150(*(undefined4 *)((int)param_1 + 8),0,0);
    iVar5 = uVar3 + 2;
    F_00a01c40(param_1,iVar5,"className",puVar2);
    F_00a01c80(param_1,iVar5,"referenceCount",1);
    F_00a01cc0(param_1,iVar5,"GetModel",((code *)REFP(0x6cb1c0)));
    F_00a01cc0(param_1,iVar5,"GetRace",((code *)REFP(0x734340)));
    F_00a01cc0(param_1,iVar5,"GetSex",((code *)REFP(0x7343b0)));
    F_00a01cc0(param_1,iVar5,"GetTribe",((code *)REFP(0x734420)));
    if (puVar1 == (undefined *)0x0) {
      F_00b9bc00(*(undefined4 *)((int)param_1 + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
      F_00b9b2f0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
    }
    else {
      F_00b9bc00(*(undefined4 *)((int)param_1 + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
      F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar1);
      F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),iVar5,"__index");
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b3d0(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b2f0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
      F_00a01ad0(param_1,puVar1);
    }
  }
  else {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
  }
  F_00754330(param_2,REFG(undefined * PTR32, 0x13236e0),REFG(undefined * PTR32, 0x13236e8),0);
  return 1;
}

/* ref: FUN_006eca70 */
uint F_006eca70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6eca70u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * puVar1;
  undefined * puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = F_00b9a750(*(undefined4 *)((int)param_1 + 8));
  puVar2 = REFG(undefined * PTR32, 0x13236ec);
  puVar1 = REFG(undefined * PTR32, 0x13236e4);
  F_00b9ae60(*(undefined4 *)((int)param_1 + 8),REFG(undefined * PTR32, 0x13236ec));
  F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
  uVar4 = F_00b9a940(*(undefined4 *)((int)param_1 + 8),0xffffffff);
  if (uVar4 == 0) {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
    F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar2);
    F_00b9b150(*(undefined4 *)((int)param_1 + 8),0,0);
    iVar5 = uVar3 + 2;
    F_00a01c40(param_1,iVar5,"className",puVar2);
    F_00a01c80(param_1,iVar5,"referenceCount",1);
    F_00a01cc0(param_1,iVar5,"GetClassJob",((code *)REFP(0x6cb250)));
    F_00a01cc0(param_1,iVar5,"GetClassLevel",((code *)REFP(0x6cb380)));
    F_00a01cc0(param_1,iVar5,"GetModel",((code *)REFP(0x6cb2f0)));
    F_00a01cc0(param_1,iVar5,"GetHp",((code *)REFP(0x6cb3e0)));
    F_00a01cc0(param_1,iVar5,"GetHpMax",((code *)REFP(0x6cb4c0)));
    F_00a01cc0(param_1,iVar5,"GetHpPercent",((code *)REFP(0x6cb460)));
    F_00a01cc0(param_1,iVar5,"GetMp",((code *)REFP(0x6cb520)));
    F_00a01cc0(param_1,iVar5,"GetMpMax",((code *)REFP(0x6cb600)));
    F_00a01cc0(param_1,iVar5,"GetMpPercent",((code *)REFP(0x6cb5a0)));
    if (puVar1 == (undefined *)0x0) {
      F_00b9bc00(*(undefined4 *)((int)param_1 + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
      F_00b9b2f0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
    }
    else {
      F_00b9bc00(*(undefined4 *)((int)param_1 + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
      F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar1);
      F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),iVar5,"__index");
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b3d0(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b2f0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
      F_00a01ad0(param_1,puVar1);
    }
  }
  else {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
  }
  F_00754330(param_2,REFG(undefined * PTR32, 0x13236e0),REFG(undefined * PTR32, 0x13236ec),0);
  return 1;
}

/* ref: FUN_006eccb0 */
uint F_006eccb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6eccb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * puVar1;
  undefined * puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = F_00b9a750(*(undefined4 *)((int)param_1 + 8));
  puVar2 = REFG(undefined * PTR32, 0x13236f0);
  puVar1 = REFG(undefined * PTR32, 0x13236d8);
  F_00b9ae60(*(undefined4 *)((int)param_1 + 8),REFG(undefined * PTR32, 0x13236f0));
  F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
  uVar4 = F_00b9a940(*(undefined4 *)((int)param_1 + 8),0xffffffff);
  if (uVar4 == 0) {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
    F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar2);
    F_00b9b150(*(undefined4 *)((int)param_1 + 8),0,0);
    iVar5 = uVar3 + 2;
    F_00a01c40(param_1,iVar5,"className",puVar2);
    F_00a01c80(param_1,iVar5,"referenceCount",1);
    F_00a01cc0(param_1,iVar5,"GetRace",((code *)REFP(0x734490)));
    F_00a01cc0(param_1,iVar5,"GetSex",((code *)REFP(0x7344f0)));
    if (puVar1 == (undefined *)0x0) {
      F_00b9bc00(*(undefined4 *)((int)param_1 + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
      F_00b9b2f0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
    }
    else {
      F_00b9bc00(*(undefined4 *)((int)param_1 + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
      F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar1);
      F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),iVar5,"__index");
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b3d0(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b2f0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
      F_00a01ad0(param_1,puVar1);
    }
  }
  else {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
  }
  F_00754330(param_2,REFG(undefined * PTR32, 0x13236e0),REFG(undefined * PTR32, 0x13236f0),0);
  return 1;
}

/* ref: FUN_006ece70 */
uint F_006ece70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ece70u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * puVar1;
  undefined * puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = F_00b9a750(*(undefined4 *)((int)param_1 + 8));
  puVar2 = REFG(undefined * PTR32, 0x13236f4);
  puVar1 = REFG(undefined * PTR32, 0x13236dc);
  F_00b9ae60(*(undefined4 *)((int)param_1 + 8),REFG(undefined * PTR32, 0x13236f4));
  F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
  uVar4 = F_00b9a940(*(undefined4 *)((int)param_1 + 8),0xffffffff);
  if (uVar4 == 0) {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
    F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar2);
    F_00b9b150(*(undefined4 *)((int)param_1 + 8),0,0);
    iVar5 = uVar3 + 2;
    F_00a01c40(param_1,iVar5,"className",puVar2);
    F_00a01c80(param_1,iVar5,"referenceCount",1);
    F_00a01cc0(param_1,iVar5,"PlaySharedGroupTimeline",((code *)REFP(0x6baf80)));
    F_00a01cc0(param_1,iVar5,"SetSharedGroupTimelineState",((code *)REFP(0x6bafa0)));
    F_00a01cc0(param_1,iVar5,"PlayQuestGimmickReaction",((code *)REFP(0x6bafc0)));
    if (puVar1 == (undefined *)0x0) {
      F_00b9bc00(*(undefined4 *)((int)param_1 + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
      F_00b9b2f0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
    }
    else {
      F_00b9bc00(*(undefined4 *)((int)param_1 + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
      F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar1);
      F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),iVar5,"__index");
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b3d0(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b2f0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
      F_00a01ad0(param_1,puVar1);
    }
  }
  else {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
  }
  F_00754330(param_2,REFG(undefined * PTR32, 0x13236e0),REFG(undefined * PTR32, 0x13236f4),0);
  return 1;
}

/* ref: FUN_006ed040 */
uint F_006ed040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ed040u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * puVar1;
  undefined * puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = F_00b9a750(*(undefined4 *)((int)param_1 + 8));
  puVar2 = REFG(undefined * PTR32, 0x13236fc);
  puVar1 = REFG(undefined * PTR32, 0x13236d8);
  F_00b9ae60(*(undefined4 *)((int)param_1 + 8),REFG(undefined * PTR32, 0x13236fc));
  F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
  uVar4 = F_00b9a940(*(undefined4 *)((int)param_1 + 8),0xffffffff);
  if (uVar4 == 0) {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
    F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar2);
    F_00b9b150(*(undefined4 *)((int)param_1 + 8),0,0);
    iVar5 = uVar3 + 2;
    F_00a01c40(param_1,iVar5,"className",puVar2);
    F_00a01c80(param_1,iVar5,"referenceCount",1);
    F_00a01cc0(param_1,iVar5,"GetCurrentEvent",((code *)REFP(0x6db050)));
    F_00a01cc0(param_1,iVar5,"GetClassJob",((code *)REFP(0x6cba90)));
    F_00a01cc0(param_1,iVar5,"GetClass",((code *)REFP(0x6cbaf0)));
    F_00a01cc0(param_1,iVar5,"GetClassLevel",((code *)REFP(0x6cbb50)));
    F_00a01cc0(param_1,iVar5,"GetClassLevelMax",((code *)REFP(0x6cbc50)));
    F_00a01cc0(param_1,iVar5,"GetFirstClass",((code *)REFP(0x6cbcf0)));
    F_00a01cc0(param_1,iVar5,"GetSex",((code *)REFP(0x6cbd60)));
    F_00a01cc0(param_1,iVar5,"GetStartTown",((code *)REFP(0x6cd390)));
    F_00a01cc0(param_1,iVar5,"GetQuestSequence",((code *)REFP(0x6cc000)));
    F_00a01cc0(param_1,iVar5,"GetQuestI8A",((code *)REFP(0x7347d0)));
    F_00a01cc0(param_1,iVar5,"GetQuestI8B",((code *)REFP(0x734850)));
    F_00a01cc0(param_1,iVar5,"GetQuestI8C",((code *)REFP(0x7348d0)));
    F_00a01cc0(param_1,iVar5,"GetQuestI8D",((code *)REFP(0x734950)));
    F_00a01cc0(param_1,iVar5,"GetQuestI8E",((code *)REFP(0x7349d0)));
    F_00a01cc0(param_1,iVar5,"GetQuestI8F",((code *)REFP(0x734a50)));
    F_00a01cc0(param_1,iVar5,"GetQuestUI8A",((code *)REFP(0x734ad0)));
    F_00a01cc0(param_1,iVar5,"GetQuestUI8B",((code *)REFP(0x734b50)));
    F_00a01cc0(param_1,iVar5,"GetQuestUI8C",((code *)REFP(0x734bd0)));
    F_00a01cc0(param_1,iVar5,"GetQuestUI8D",((code *)REFP(0x734c50)));
    F_00a01cc0(param_1,iVar5,"GetQuestUI8E",((code *)REFP(0x734cd0)));
    F_00a01cc0(param_1,iVar5,"GetQuestUI8F",((code *)REFP(0x734d50)));
    F_00a01cc0(param_1,iVar5,"GetQuestUI8AH",((code *)REFP(0x734dd0)));
    F_00a01cc0(param_1,iVar5,"GetQuestUI8BH",((code *)REFP(0x734e60)));
    F_00a01cc0(param_1,iVar5,"GetQuestUI8CH",((code *)REFP(0x734ef0)));
    F_00a01cc0(param_1,iVar5,"GetQuestUI8DH",((code *)REFP(0x734f80)));
    F_00a01cc0(param_1,iVar5,"GetQuestUI8EH",((code *)REFP(0x735010)));
    F_00a01cc0(param_1,iVar5,"GetQuestUI8FH",((code *)REFP(0x7350a0)));
    F_00a01cc0(param_1,iVar5,"GetQuestUI8AL",((code *)REFP(0x735130)));
    F_00a01cc0(param_1,iVar5,"GetQuestUI8BL",((code *)REFP(0x7351b0)));
    F_00a01cc0(param_1,iVar5,"GetQuestUI8CL",((code *)REFP(0x735230)));
    F_00a01cc0(param_1,iVar5,"GetQuestUI8DL",((code *)REFP(0x7352b0)));
    F_00a01cc0(param_1,iVar5,"GetQuestUI8EL",((code *)REFP(0x735330)));
    F_00a01cc0(param_1,iVar5,"GetQuestUI8FL",((code *)REFP(0x7353b0)));
    F_00a01cc0(param_1,iVar5,"GetQuestI16A",((code *)REFP(0x735430)));
    F_00a01cc0(param_1,iVar5,"GetQuestI16B",((code *)REFP(0x7354c0)));
    F_00a01cc0(param_1,iVar5,"GetQuestI16C",((code *)REFP(0x735550)));
    F_00a01cc0(param_1,iVar5,"GetQuestUI16A",((code *)REFP(0x7355e0)));
    F_00a01cc0(param_1,iVar5,"GetQuestUI16B",((code *)REFP(0x735670)));
    F_00a01cc0(param_1,iVar5,"GetQuestUI16C",((code *)REFP(0x735700)));
    F_00a01cc0(param_1,iVar5,"GetQuestI32A",((code *)REFP(0x735790)));
    F_00a01cc0(param_1,iVar5,"GetQuestUI32A",((code *)REFP(0x735800)));
    F_00a01cc0(param_1,iVar5,"GetQuestBranch",((code *)REFP(0x734cd0)));
    F_00a01cc0(param_1,iVar5,"GetQuestBitFlag8",((code *)REFP(0x735870)));
    F_00a01cc0(param_1,iVar5,"GetQuestBitFlag16",((code *)REFP(0x7358f0)));
    F_00a01cc0(param_1,iVar5,"GetQuestBitFlag24",((code *)REFP(0x735970)));
    F_00a01cc0(param_1,iVar5,"GetQuestBitFlag32",((code *)REFP(0x7359f0)));
    F_00a01cc0(param_1,iVar5,"GetQuestBitFlag40",((code *)REFP(0x735a70)));
    F_00a01cc0(param_1,iVar5,"GetQuestBitFlag48",((code *)REFP(0x735af0)));
    F_00a01cc0(param_1,iVar5,"IsQuestCompleted",((code *)REFP(0x6cbf20)));
    F_00a01cc0(param_1,iVar5,"IsQuestAccepted",((code *)REFP(0x6cbe50)));
    F_00a01cc0(param_1,iVar5,"IsQuestAcceptQualified",((code *)REFP(0x6e4080)));
    F_00a01cc0(param_1,iVar5,"IsQuestProgressQualified",((code *)REFP(0x6e4080)));
    F_00a01cc0(param_1,iVar5,"IsEpicQuestAccepted",((code *)REFP(0x6d5560)));
    F_00a01cc0(param_1,iVar5,"IsEpicQuestAcceptedAny",((code *)REFP(0x6cc0b0)));
    F_00a01cc0(param_1,iVar5,"GetLegacyEpicQuestWeapon",((code *)REFP(0x6cc150)));
    F_00a01cc0(param_1,iVar5,"GetLegacyEpicQuestSequence",((code *)REFP(0x6cc1f0)));
    F_00a01cc0(param_1,iVar5,"GetNumOfNewLetters",((code *)REFP(0x6cb6c0)));
    F_00a01cc0(param_1,iVar5,"GetNumOfDeniedLetters",((code *)REFP(0x6cb750)));
    F_00a01cc0(param_1,iVar5,"GetLetterBoxUsage",((code *)REFP(0x6cb7e0)));
    F_00a01cc0(param_1,iVar5,"IsReward",((code *)REFP(0x6cc260)));
    F_00a01cc0(param_1,iVar5,"IsHowTo",((code *)REFP(0x6cc390)));
    F_00a01cc0(param_1,iVar5,"IsChocoboTaxiStand",((code *)REFP(0x6cc420)));
    F_00a01cc0(param_1,iVar5,"GetGil",((code *)REFP(0x6cc4b0)));
    F_00a01cc0(param_1,iVar5,"IsMount",((code *)REFP(0x6ccde0)));
    F_00a01cc0(param_1,iVar5,"IsParty",((code *)REFP(0x6cce70)));
    F_00a01cc0(param_1,iVar5,"GetEquippedItem",((code *)REFP(0x6cc520)));
    F_00a01cc0(param_1,iVar5,"GetEquippedItemLevel",((code *)REFP(0x6cc580)));
    F_00a01cc0(param_1,iVar5,"GetEquippedItemEquipLevel",((code *)REFP(0x6cc610)));
    F_00a01cc0(param_1,iVar5,"GetNumOfItems",((code *)REFP(0x6cc6a0)));
    F_00a01cc0(param_1,iVar5,"GetNumOfNqItems",((code *)REFP(0x6cc850)));
    F_00a01cc0(param_1,iVar5,"GetNumOfHqItems",((code *)REFP(0x6cc900)));
    F_00a01cc0(param_1,iVar5,"IsItemObtainable",((code *)REFP(0x6bb320)));
    F_00a01cc0(param_1,iVar5,"IsClassJobBattle",((code *)REFP(0x6cc9e0)));
    F_00a01cc0(param_1,iVar5,"IsClassJobFighter",((code *)REFP(0x6cca80)));
    F_00a01cc0(param_1,iVar5,"IsClassJobSorcerer",((code *)REFP(0x6ccb20)));
    F_00a01cc0(param_1,iVar5,"IsClassJobLive",((code *)REFP(0x6ccbc0)));
    F_00a01cc0(param_1,iVar5,"IsClassJobGatherer",((code *)REFP(0x6ccc60)));
    F_00a01cc0(param_1,iVar5,"IsClassJobCrafter",((code *)REFP(0x6ccd00)));
    F_00a01cc0(param_1,iVar5,"IsChocoboTaxiPossible",((code *)REFP(0x6ccd70)));
    F_00a01cc0(param_1,iVar5,"IsInstanceContentUnlocked",((code *)REFP(0x6cd440)));
    F_00a01cc0(param_1,iVar5,"IsInstanceContentCompleted",((code *)REFP(0x6cd4b0)));
    F_00a01cc0(param_1,iVar5,"IsContentFinderUnlocked",((code *)REFP(0x6cba30)));
    F_00a01cc0(param_1,iVar5,"GetGrandCompany",((code *)REFP(0x6ccee0)));
    F_00a01cc0(param_1,iVar5,"GetGrandCompanyRank",((code *)REFP(0x6ccf40)));
    F_00a01cc0(param_1,iVar5,"IsItemsEquipped",((code *)REFP(0x6ccfc0)));
    F_00a01cc0(param_1,iVar5,"IsLegacy",((code *)REFP(0x6cd0a0)));
    F_00a01cc0(param_1,iVar5,"IsWarriorOfLight",((code *)REFP(0x6cd110)));
    F_00a01cc0(param_1,iVar5,"IsGCRankUpQuestCompleted",((code *)REFP(0x6cb900)));
    F_00a01cc0(param_1,iVar5,"IsMonsterNoteGCRankCompleted",((code *)REFP(0x6cb980)));
    F_00a01cc0(param_1,iVar5,"GetHomePoint",((code *)REFP(0x6cd180)));
    F_00a01cc0(param_1,iVar5,"IsAetheryte",((code *)REFP(0x6cd1d0)));
    F_00a01cc0(param_1,iVar5,"GetFavoritePoint",((code *)REFP(0x6cd260)));
    F_00a01cc0(param_1,iVar5,"IsFavoritePoint",((code *)REFP(0x6cd2c0)));
    F_00a01cc0(param_1,iVar5,"GetEmptyFavoriteIndex",((code *)REFP(0x6cd330)));
    F_00a01cc0(param_1,iVar5,"IsBuddyExist",((code *)REFP(0x6cd3e0)));
    F_00a01cc0(param_1,iVar5,"IsActionReward",((code *)REFP(0x6cc2f0)));
    F_00a01cc0(param_1,iVar5,"IsFreeCompany",((code *)REFP(0x6cd520)));
    F_00a01cc0(param_1,iVar5,"GetHp",((code *)REFP(0x6cd580)));
    F_00a01cc0(param_1,iVar5,"GetHpMax",((code *)REFP(0x6cd660)));
    F_00a01cc0(param_1,iVar5,"GetHpPercent",((code *)REFP(0x6cd600)));
    F_00a01cc0(param_1,iVar5,"GetMp",((code *)REFP(0x6cd6c0)));
    F_00a01cc0(param_1,iVar5,"GetMpMax",((code *)REFP(0x6cd7a0)));
    F_00a01cc0(param_1,iVar5,"GetMpPercent",((code *)REFP(0x6cd740)));
    F_00a01cc0(param_1,iVar5,"IsRight",((code *)REFP(0x6cd800)));
    if (puVar1 == (undefined *)0x0) {
      F_00b9bc00(*(undefined4 *)((int)param_1 + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
      F_00b9b2f0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
    }
    else {
      F_00b9bc00(*(undefined4 *)((int)param_1 + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
      F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar1);
      F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),iVar5,"__index");
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b3d0(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b2f0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
      F_00a01ad0(param_1,puVar1);
    }
  }
  else {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
  }
  F_00754330(param_2,REFG(undefined * PTR32, 0x13236e0),REFG(undefined * PTR32, 0x13236fc),0);
  return 1;
}

/* ref: FUN_006ed930 */
uint F_006ed930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ed930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)this + 8;
  uVar2 = F_006ec3d0(*(undefined4 *)((int)this + 4),iVar1);
  *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + uVar2;
  uVar2 = F_006ca8b0(*(undefined4 *)((int)this + 4),iVar1);
  *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + uVar2;
  uVar2 = F_006ed040(*(undefined4 *)((int)this + 4),iVar1);
  *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + uVar2;
  uVar2 = F_006ec6e0(*(undefined4 *)((int)this + 4),iVar1);
  *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + uVar2;
  uVar2 = F_006ec890(*(undefined4 *)((int)this + 4),iVar1);
  *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + uVar2;
  uVar2 = F_006eca70(*(undefined4 *)((int)this + 4),iVar1);
  *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + uVar2;
  uVar2 = F_006eccb0(*(undefined4 *)((int)this + 4),iVar1);
  *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + uVar2;
  uVar2 = F_006ece70(*(undefined4 *)((int)this + 4),iVar1);
  *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + uVar2;
  uVar2 = F_006cb020(*(undefined4 *)((int)this + 4),iVar1);
  *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + uVar2;
  return uVar2;
}

/* ref: Client::Game::Event::LuaActorModule::vf4 */
uint F_006ed9c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ed9c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_006ed930(this,1);
  return uVar1;
}

/* ref: Client::Game::Event::EventHandler::vf38 */
uint F_006ed9d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ed9d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  
  if ((*(short *)(this + 0x54) != -1) && (*(int *)(this + 0x60) == 0)) {
    *(undefined4 *)(this + 0x60) = param_1;
  }
  iVar1 = *(int *)(this + 4);
  *(undefined1 *)(iVar1 + 0xd5) = 0;
  F_00ab6d10();
  F_00ab6e10();
  uVar2 = F_006e88c0((undefined *)(iVar1 + 0x4c),param_1);
  return uVar2;
}

/* ref: FUN_006eda10 */
uint F_006eda10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6eda10u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint * this_00;
  undefined4 * puVar1;
  undefined4 * puVar2;
  int * piVar3;
  uint uVar4;
  uint * puVar5;
  
  this_00 = ((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xe8)));
  for (piVar3 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xe8))); piVar3 != *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xec)));
      piVar3 = piVar3 + 1) {
    if (*(int *)(*piVar3 + 8) == (*(uint *)&gen_args[1])) {
      return (uint)piVar3;
    }
  }
  uVar4 = F_006eb2d0(REFG(undefined4, 0x1488344),(*(uint *)&gen_args[1]),0);
  if (uVar4 == 0) {
    return 0;
  }
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xec)));
  (*(uint *)&gen_args[1]) = uVar4;
  if (&(*(uint *)&gen_args[1]) < puVar1) {
    puVar2 = (undefined4 *)*this_00;
    if (puVar2 <= &(*(uint *)&gen_args[1])) {
      if (puVar1 == *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf0)))) {
        F_00751c10(this_00,1);
      }
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xec)));
      puVar5 = (uint *)0x0;
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP((*this_00 + ((int)&(*(uint *)&gen_args[1]) - (int)((int)(uintptr_t)puVar2) >> 2) * 4)));
        *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xec))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xec))) + 4;
        return (uint)puVar1;
      }
      goto LAB_006edaac;
    }
  }
  if (puVar1 == *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf0)))) {
    F_00751c10(this_00,1);
  }
  puVar5 = *((uint * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xec)));
  if (puVar5 != (uint *)0x0) {
    *puVar5 = uVar4;
  }
LAB_006edaac: ;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xec))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xec))) + 4;
  return (uint)puVar5;
}

/* ref: FUN_006edac0 */
uint F_006edac0(unsigned int gen_a0)
{
  GEN_ENTER(0x6edac0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this;
  uint uVar1;
  undefined4 * puVar2;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  puVar2 = (undefined4 *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  this = (undefined *)*puVar2;
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  F_006eda10(this,uVar1);
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: FUN_006edb10 */
uint F_006edb10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6edb10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 * puVar5;
  int * piVar6;
  uint uVar7;
  int * piVar8;
  uint * puVar9;
  int * piVar10;
  uint uVar11;
  
  iVar3 = *(int *)(*param_1 + 4);
  uVar11 = 0;
  puVar9 = (uint *)((int)this + 0xf8);
  do {
    iVar4 = *(int *)(iVar3 + uVar11 * 4);
    piVar8 = (int *)0x0;
    if (iVar4 != 0) {
      if (*(int *)((int)this + 0x14) == 0) {
        piVar8 = (int *)F_006eb2d0(REFG(undefined4, 0x1488344),iVar4,0);
        *puVar9 = (uint)piVar8;
      }
      else {
        piVar8 = *(int * PTR32 *)((int)this + 0x10);
        piVar10 = (int *)*piVar8;
        if (piVar10 != piVar8) {
          do {
            uVar7 = F_006eb2d0(REFG(undefined4, 0x1488344),*(undefined4 *)(iVar3 + uVar11 * 4),piVar10[3]);
            *puVar9 = uVar7;
            if (*(char *)((int)piVar10 + 0x11) == '\0') {
              piVar8 = (int *)piVar10[2];
              if (*(char *)((int)piVar8 + 0x11) == '\0') {
                cVar1 = *(char *)(*piVar8 + 0x11);
                piVar10 = piVar8;
                piVar8 = (int *)*piVar8;
                while (cVar1 == '\0') {
                  cVar1 = *(char *)(*piVar8 + 0x11);
                  piVar10 = piVar8;
                  piVar8 = (int *)*piVar8;
                }
              }
              else {
                cVar1 = *(char *)(piVar10[1] + 0x11);
                piVar6 = (int *)piVar10[1];
                piVar8 = piVar10;
                while ((piVar10 = piVar6, cVar1 == '\0' && (piVar8 == (int *)piVar10[2]))) {
                  cVar1 = *(char *)(piVar10[1] + 0x11);
                  piVar6 = (int *)piVar10[1];
                  piVar8 = piVar10;
                }
              }
            }
            piVar8 = this;
          } while (piVar10 != *(int * PTR32 *)((int)this + 0x10));
        }
      }
      if (*puVar9 != 0) {
        puVar9 = puVar9 + 1;
      }
    }
    uVar11 = uVar11 + 1;
  } while (uVar11 < 0x10);
  puVar5 = *(undefined4 * PTR32 *)((int)this + 0x13c);
  if (puVar5 != (undefined4 *)0x0) {
    piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)*puVar5)(puVar5,1)));
    *(undefined4 *)((int)this + 0x13c) = 0;
  }
  *(byte *)((int)this + 0x1c) = *(byte *)((int)this + 0x1c) & 0xfd;
  bVar2 = *(byte *)((int)this + 0x1c);
  uVar11 = CONCAT31((int3)((uint)((int)(uintptr_t)piVar8) >> 8),bVar2);
  if ((bVar2 & 1) == 0) {
    *(byte *)((int)this + 0x1c) = bVar2 | 1;
    uVar11 = ((code *)*(gen_code32 *)(*(int *)this + 0x23c))(this);
  }
  return uVar11;
}

/* ref: Client::Game::Event::ArrayEventHandler::vf141 */
uint F_006edc20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6edc20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  uint uVar2;
  undefined * pAVar3;
  int iVar4;
  
  if (param_1 != 0) {
    puVar1 = (undefined4 *)F_004296a0(0x14,0,800);
    *puVar1 = *(undefined4 *)(this + 0x10);
    puVar1[1] = *(undefined4 *)(this + 0x10);
    puVar1[2] = *(undefined4 *)(this + 0x10);
    *(undefined2 *)(puVar1 + 4) = 0;
    if (puVar1 + 3 != (int *)0x0) {
      puVar1[3] = param_1;
    }
    F_00746c00(this + 0xc,((undefined1 *)(gen_frame + 0x4)),puVar1,0);
  }
  *(int *)(this + 0x40) = *(int *)(this + 0x40) + 1;
  uVar2 = *(uint *)(this + 0x40);
  (*(uint *)(gen_frame + 0x8)) = uVar2;
  if (((byte)this[0x1c] & 1) != 0) {
    puVar1 = *(undefined4 * PTR32 *)(this + 0xe8);
    if (puVar1 != *(undefined4 * PTR32 *)(this + 0xec)) {
      do {
        uVar2 = ((code *)*(gen_code32 *)(*(int *)*puVar1 + 8))((int *)*puVar1);
        if ((char)uVar2 == '\0') {
          return (*(uint *)(gen_frame + 0x8));
        }
        puVar1 = puVar1 + 1;
      } while (puVar1 != *(undefined4 * PTR32 *)(this + 0xec));
    }
    pAVar3 = this + 0xf8;
    iVar4 = 0x10;
    do {
      if (*(int *)pAVar3 != 0) {
        F_006eb2d0(REFG(undefined4, 0x1488344),*(undefined4 *)(*(int *)pAVar3 + 8),param_1);
      }
      pAVar3 = pAVar3 + 4;
      iVar4 = iVar4 + -1;
      uVar2 = (*(uint *)(gen_frame + 0x8));
    } while (iVar4 != 0);
  }
  return uVar2;
}

/* ref: FUN_006edcf0 */
ushort F_006edcf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12, unsigned int gen_a13, unsigned int gen_a14, unsigned int gen_a15, unsigned int gen_a16, unsigned int gen_a17, unsigned int gen_a18, unsigned int gen_a19, unsigned int gen_a20, unsigned int gen_a21, unsigned int gen_a22, unsigned int gen_a23, unsigned int gen_a24, unsigned int gen_a25, unsigned int gen_a26, unsigned int gen_a27, unsigned int gen_a28, unsigned int gen_a29, unsigned int gen_a30, unsigned int gen_a31, unsigned int gen_a32, unsigned int gen_a33, unsigned int gen_a34, unsigned int gen_a35, unsigned int gen_a36, unsigned int gen_a37, unsigned int gen_a38, unsigned int gen_a39, unsigned int gen_a40, unsigned int gen_a41, unsigned int gen_a42, unsigned int gen_a43, unsigned int gen_a44, unsigned int gen_a45, unsigned int gen_a46)
{
  GEN_ENTER(0x6edcf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[47];
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
  gen_args[17] = gen_a17;
  gen_args[18] = gen_a18;
  gen_args[19] = gen_a19;
  gen_args[20] = gen_a20;
  gen_args[21] = gen_a21;
  gen_args[22] = gen_a22;
  gen_args[23] = gen_a23;
  gen_args[24] = gen_a24;
  gen_args[25] = gen_a25;
  gen_args[26] = gen_a26;
  gen_args[27] = gen_a27;
  gen_args[28] = gen_a28;
  gen_args[29] = gen_a29;
  gen_args[30] = gen_a30;
  gen_args[31] = gen_a31;
  gen_args[32] = gen_a32;
  gen_args[33] = gen_a33;
  gen_args[34] = gen_a34;
  gen_args[35] = gen_a35;
  gen_args[36] = gen_a36;
  gen_args[37] = gen_a37;
  gen_args[38] = gen_a38;
  gen_args[39] = gen_a39;
  gen_args[40] = gen_a40;
  gen_args[41] = gen_a41;
  gen_args[42] = gen_a42;
  gen_args[43] = gen_a43;
  gen_args[44] = gen_a44;
  gen_args[45] = gen_a45;
  gen_args[46] = gen_a46;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  ushort uVar1;
  ushort * puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int * piVar8;
  uint uVar9;
  ushort * puVar10;
  uint uVar7;
  
  uVar7 = ((*(uint *)&gen_args[44]) & 0xffff) / 5;
  (*(uint *)(gen_frame + 0x14)) = 0;
  (*(uint *)(gen_frame + 0x10)) = uVar7;
  if (0x13 < uVar7) {
    (*(uint *)(gen_frame + 0x10)) = 0x13;
  }
  uVar7 = (*(uint *)(gen_frame + 0x10));
  iVar3 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x228))) * 4 + 0x22c))) * 0x14;
  piVar8 = ((int *)GEN_TOP(((*(uint *)(gen_frame + 0x10)) * 0x10 +
                  *((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x538))) + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x228))) * 0x10
                                   ))) + iVar3))))));
  (*(int *)(gen_frame + 0xc)) = iVar3;
  puVar10 = (ushort *)*piVar8;
  puVar2 = (ushort *)piVar8[1];
  if (puVar10 != puVar2) {
    do {
      if (*puVar10 == (ushort)(*(undefined4 *)&gen_args[1])) {
        F_007390c0(puVar10 + 0x5c,puVar2,puVar10,iVar3);
        iVar3 = piVar8[1];
        (*(int *)(gen_frame + 0x18)) = iVar3 + -0xb8;
        while ((*(int *)(gen_frame + 0x18)) != iVar3) {
          F_0042c880((undefined *)((*(int *)(gen_frame + 0x18)) + 0x58));
          F_0042c880((undefined *)((*(int *)(gen_frame + 0x18)) + 4));
          (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) + 0xb8;
        }
        piVar8[1] = piVar8[1] + -0xb8;
        puVar2 = (ushort *)piVar8[1];
        if (puVar10 == puVar2) {
          iVar3 = (int)puVar2 - *piVar8 >> 0x1f;
          if (((int)puVar2 - *piVar8) / 0xb8 + iVar3 != iVar3) {
            (*(uint *)(gen_frame + 0x14)) = (uint)puVar2[-0x5c];
            goto LAB_006edecd;
          }
          piVar8 = ((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x538))) + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x228))) * 0x10
                                   ))) + (*(int *)(gen_frame + 0xc)))));
          uVar9 = uVar7 + 1;
          iVar3 = *piVar8;
          uVar5 = piVar8[1] - iVar3 >> 4;
          (*(int *)(gen_frame + 0x18)) = iVar3;
          if (uVar5 <= uVar9) {
LAB_006ede8f: ;
            iVar6 = uVar7 - 1;
            if (iVar6 < 0) break;
            piVar8 = (int *)(iVar6 * 0x10 + iVar3);
            while (iVar4 = piVar8[1] - *piVar8 >> 0x1f,
                  (piVar8[1] - *piVar8) / 0xb8 + iVar4 == iVar4) {
              piVar8 = piVar8 + -4;
              iVar6 = iVar6 + -1;
              if (iVar6 < 0) goto LAB_006edf09;
            }
            (*(uint *)(gen_frame + 0x14)) = (uint)**(ushort * PTR32 *)(iVar3 + iVar6 * 0x10);
            goto LAB_006edecd;
          }
          piVar8 = (int *)(uVar9 * 0x10 + iVar3);
          while (iVar6 = piVar8[1] - *piVar8 >> 0x1f, uVar7 = (*(uint *)(gen_frame + 0x10)),
                (piVar8[1] - *piVar8) / 0xb8 + iVar6 == iVar6) {
            uVar9 = uVar9 + 1;
            piVar8 = piVar8 + 4;
            if (uVar5 <= uVar9) goto LAB_006ede8f;
          }
          uVar1 = **(ushort * PTR32 *)(iVar3 + uVar9 * 0x10);
          (*(uint *)(gen_frame + 0x14)) = (uint)uVar1;
          if (uVar1 == 0) goto LAB_006ede8f;
        }
        else {
          (*(uint *)(gen_frame + 0x14)) = (uint)*puVar10;
LAB_006edecd: ;
          if ((ushort)(*(uint *)(gen_frame + 0x14)) == 0) break;
        }
        *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x534))) = 0;
        F_0073dba0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x548))),&(*(undefined4 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
        F_00752000(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x548))),&(*(int *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x8)),(*(int *)(gen_frame + 0xc)));
        break;
      }
      puVar10 = puVar10 + 0x5c;
    } while (puVar10 != puVar2);
  }
LAB_006edf09: ;
  F_0042c880(&(*(undefined4 *)&gen_args[23]));
  F_0042c880(&(*(undefined4 *)&gen_args[2]));
  return (ushort)(*(uint *)(gen_frame + 0x14));
}

/* ref: FUN_006edf30 */
uint F_006edf30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6edf30u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * puVar1;
  undefined * puVar2;
  undefined * this;
  uint uVar3;
  uint uVar4;
  uint * puVar5;
  char * pcVar6;
  int iVar7;
  
  this = param_1;
  uVar3 = F_00b9a750(*(undefined4 *)((int)param_1 + 8));
  puVar2 = REFG(undefined * PTR32, 0x1323718);
  puVar1 = REFG(undefined * PTR32, 0x1323700);
  F_00b9ae60(*(undefined4 *)((int)param_1 + 8),REFG(undefined * PTR32, 0x1323718));
  F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
  uVar4 = F_00b9a940(*(undefined4 *)((int)param_1 + 8),0xffffffff);
  if (uVar4 == 0) {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
    F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar2);
    F_00b9b150(*(undefined4 *)((int)param_1 + 8),0,0);
    iVar7 = uVar3 + 2;
    F_00a01c40(param_1,iVar7,"className",puVar2);
    F_00a01c80(param_1,iVar7,"referenceCount",1);
    uVar3 = F_00ab02a0();
    param_1 = (undefined *)0x0;
    if (uVar3 != 0) {
      do {
        puVar5 = (uint *)F_00ab3300(param_1);
        if ((puVar5 != (uint *)0x0) &&
           (pcVar6 = ((char *)GEN_TOP(((*puVar5 & 0xffffff) + (int)puVar5))), *pcVar6 != '\0')) {
          F_00a01c80(this,iVar7,pcVar6,puVar5[1]);
        }
        param_1 = (undefined *)((int)param_1 + 1);
      } while (param_1 < uVar3);
    }
    if (puVar1 == (undefined *)0x0) {
      F_00b9bc00(*(undefined4 *)((int)this + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)this + 8),iVar7);
      F_00b9b290(*(undefined4 *)((int)this + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)this + 8),0xfffffffe);
      F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
    }
    else {
      F_00b9bc00(*(undefined4 *)((int)this + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)this + 8),iVar7);
      F_00b9b290(*(undefined4 *)((int)this + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)this + 8),0xfffffffe);
      F_00b9ae60(*(undefined4 *)((int)this + 8),puVar1);
      F_00b9b0d0(*(undefined4 *)((int)this + 8),0xffffd8ee);
      F_00b9b290(*(undefined4 *)((int)this + 8),iVar7,"__index");
      F_00b9a910(*(undefined4 *)((int)this + 8),iVar7);
      F_00b9b3d0(*(undefined4 *)((int)this + 8),iVar7);
      F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
      F_00a01ad0(this,puVar1);
    }
  }
  else {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
  }
  F_00754330(param_2,REFG(undefined * PTR32, 0x132371c),REFG(undefined * PTR32, 0x1323718),0);
  return 1;
}

/* ref: FUN_006ee120 */
uint F_006ee120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ee120u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * puVar1;
  undefined * puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = F_00b9a750(*(undefined4 *)((int)param_1 + 8));
  puVar2 = REFG(undefined * PTR32, 0x1323720);
  puVar1 = REFG(undefined * PTR32, 0x1323700);
  F_00b9ae60(*(undefined4 *)((int)param_1 + 8),REFG(undefined * PTR32, 0x1323720));
  F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
  uVar4 = F_00b9a940(*(undefined4 *)((int)param_1 + 8),0xffffffff);
  if (uVar4 == 0) {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
    F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar2);
    F_00b9b150(*(undefined4 *)((int)param_1 + 8),0,0);
    iVar5 = uVar3 + 2;
    F_00a01c40(param_1,iVar5,"className",puVar2);
    F_00a01c80(param_1,iVar5,"referenceCount",1);
    F_00a01cc0(param_1,iVar5,"CreateLinkshell",((code *)REFP(0x6ceba0)));
    F_00a01cc0(param_1,iVar5,"DisbandLinkshell",((code *)REFP(0x6cec40)));
    F_00a01cc0(param_1,iVar5,"RenameLinkshell",((code *)REFP(0x6cecf0)));
    F_00a01cc0(param_1,iVar5,"LoadRetainerCreation",((code *)REFP(0x6cf210)));
    F_00a01cc0(param_1,iVar5,"CreateRetainer",((code *)REFP(0x6cf390)));
    F_00a01cc0(param_1,iVar5,"CallRetainer",((code *)REFP(0x6cf460)));
    F_00a01cc0(param_1,iVar5,"GetMarketSellTaxRates",((code *)REFP(0x6cf550)));
    F_00a01cc0(param_1,iVar5,"RemoveRetainer",((code *)REFP(0x6cf5d0)));
    F_00a01cc0(param_1,iVar5,"MarketRegister",((code *)REFP(0x6cf6c0)));
    F_00a01cc0(param_1,iVar5,"MarketUnregister",((code *)REFP(0x6cf7f0)));
    F_00a01cc0(param_1,iVar5,"SelectRetainer",((code *)REFP(0x6cf8d0)));
    F_00a01cc0(param_1,iVar5,"SetCurrentRetainerIndex",((code *)REFP(0x6cf950)));
    F_00a01cc0(param_1,iVar5,"SendRetainerCharaMake",((code *)REFP(0x6cf9c0)));
    F_00a01cc0(param_1,iVar5,"IsInContentFinder",((code *)REFP(0x6cfa80)));
    F_00a01cc0(param_1,iVar5,"SetCharaMakeCondition",((code *)REFP(0x6cfb00)));
    F_00a01cc0(param_1,iVar5,"OpenRetainerInventory",((code *)REFP(0x6cfba0)));
    F_00a01cc0(param_1,iVar5,"DepopRetainer",((code *)REFP(0x6cfc10)));
    F_00a01cc0(param_1,iVar5,"GetRetainerName",((code *)REFP(0x6cfcf0)));
    F_00a01cc0(param_1,iVar5,"GetRetainerEmployedCount",((code *)REFP(0x6cfda0)));
    F_00a01cc0(param_1,iVar5,"CheckLinkshellCount",((code *)REFP(0x6bea00)));
    F_00a01cc0(param_1,iVar5,"GetFcStatus",((code *)REFP(0x6cf290)));
    F_00a01cc0(param_1,iVar5,"CreateFreeCompany",((code *)REFP(0x6cee70)));
    F_00a01cc0(param_1,iVar5,"CreateFreeCompanyPayGil",((code *)REFP(0x6cf0c0)));
    F_00a01cc0(param_1,iVar5,"RenameFcTag",((code *)REFP(0x6cedb0)));
    F_00a01cc0(param_1,iVar5,"DisbandFreeCompany",((code *)REFP(0x6cef80)));
    F_00a01cc0(param_1,iVar5,"MoveGrandCompany",((code *)REFP(0x6cf030)));
    F_00a01cc0(param_1,iVar5,"GetLinkshellList",((code *)REFP(0x6cfe10)));
    F_00a01cc0(param_1,iVar5,"GetRankUpCondition",((code *)REFP(0x6cff40)));
    F_00a01cc0(param_1,iVar5,"CheckFcChestEmpty",((code *)REFP(0x6cf310)));
    F_00a01c80(param_1,iVar5,"FC_STATUS_TYPE_INVALID",0);
    F_00a01c80(param_1,iVar5,"FC_STATUS_TYPE_INVITESTART",1);
    F_00a01c80(param_1,iVar5,"FC_STATUS_TYPE_INVITECOMPLETE",2);
    F_00a01c80(param_1,iVar5,"FC_STATUS_TYPE_NORMAL",3);
    F_00a01c80(param_1,iVar5,"FC_STATUS_TYPE_FREEZE",4);
    F_00a01c80(param_1,iVar5,"INPUT_STRING_TYPE_SHORT_NAME",2);
    F_00a01c80(param_1,iVar5,"INPUT_STRING_TYPE_NORMAL",2);
    F_00a01c80(param_1,iVar5,"GC_CHANGE_RESULT_NORMAL",0);
    F_00a01c80(param_1,iVar5,"GC_CHANGE_RESULT_FIRST_TIME",1);
    F_00a01c80(param_1,iVar5,"GC_CHANGE_RESULT_ERROR_INVALID",2);
    F_00a01c80(param_1,iVar5,"GC_CHANGE_RESULT_ERROR_TIME",3);
    F_00a01c80(param_1,iVar5,"GC_CHANGE_RESULT_ERROR_EQUIP",4);
    F_00a01c80(param_1,iVar5,"GC_CHANGE_RESULT_ERROR_QUEST",5);
    if (puVar1 == (undefined *)0x0) {
      F_00b9bc00(*(undefined4 *)((int)param_1 + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
      F_00b9b2f0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
    }
    else {
      F_00b9bc00(*(undefined4 *)((int)param_1 + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
      F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar1);
      F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),iVar5,"__index");
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b3d0(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b2f0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
      F_00a01ad0(param_1,puVar1);
    }
  }
  else {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
  }
  F_00754330(param_2,REFG(undefined * PTR32, 0x1323724),REFG(undefined * PTR32, 0x1323720),0);
  return 1;
}

/* ref: FUN_006ee590 */
uint F_006ee590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6ee590u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  char * pcVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  char * pcVar5;
  undefined4 * puVar6;
  uint uVar7;
  uint * puVar8;
  uint * puVar9;
  ulonglong uVar10;
  
  (*(uint *)(gen_frame + 0xd8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xdc);
  puVar8 = *(uint * PTR32 *)(*param_1 + 4);
  (*(uint * PTR32 *)(gen_frame + 0x1c)) = puVar8;
  F_0042e430((undefined *)((int)this + 0x22c),(int)puVar8 + (puVar8[0x3d] & 0xffffff) + 0xf4);
  F_006e9c50((undefined *)((int)this + 0x22c),(int)this + 0x280,(int)this + 0x118);
  F_0042e430((undefined *)((int)this + 0x1d8),(int)puVar8 + (puVar8[0x3c] & 0xffffff) + 0xf0);
  *(uint *)((int)this + 0x2ec) = puVar8[0x3e];
  *(byte *)((int)this + 0x2f0) =
       *(byte *)((int)this + 0x2f0) ^
       (*(byte *)((int)puVar8 + 0xfd) ^ *(byte *)((int)this + 0x2f0)) & 1;
  bVar4 = (*(char *)((int)puVar8 + 0xff) * '\x04' ^ *(byte *)((int)this + 0x2f0)) & 4 ^
          *(byte *)((int)this + 0x2f0);
  *(byte *)((int)this + 0x2f0) = bVar4;
  *(byte *)((int)this + 0x2f0) = (*(char *)((int)puVar8 + 0xfe) * '\x02' ^ bVar4) & 2 ^ bVar4;
  if ((char)puVar8[0x40] != '\0') {
    *(uint *)((int)this + 0x38) = *(uint *)((int)this + 0x38) | 4;
  }
  if (*(char *)((int)puVar8 + 0x101) != '\0') {
    *(uint *)((int)this + 0x38) = *(uint *)((int)this + 0x38) | 0x8000;
  }
  (*(uint * PTR32 *)(gen_frame + 0x24)) = puVar8;
  (*(int *)(gen_frame + 0x28)) = 0x1e;
  puVar9 = puVar8;
  do {
    pcVar5 = ((char *)GEN_TOP(((*puVar8 & 0xffffff) + (int)puVar8)));
    (*(char * PTR32 *)(gen_frame + 0x20)) = pcVar5;
    pcVar1 = pcVar5 + 1;
    do {
      cVar3 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar3 != '\0');
    if (pcVar5 != pcVar1) {
      (*(uint *)(gen_frame + 0x14)) = puVar8[1];
      (*(uint * PTR32 *)(gen_frame + 0x24)) = puVar8;
      puVar6 = (undefined4 *)F_004296a0(0x68,0,800);
      *puVar6 = *(undefined4 *)((int)this + 0x2e0);
      puVar6[1] = *(undefined4 *)((int)this + 0x2e0);
      puVar6[2] = *(undefined4 *)((int)this + 0x2e0);
      *(undefined2 *)(puVar6 + 0x19) = 0;
      F_0042cc20(((undefined1 *)(gen_frame + 0x80)),(*(char * PTR32 *)(gen_frame + 0x20)),REFG(undefined4, 0x108cc50));
      (*(uint *)(gen_frame + 0xd4)) = (*(uint *)(gen_frame + 0x14));
      if (puVar6 + 3 != (undefined4 *)0x0) {
        F_0042cbc0(puVar6 + 3,((undefined1 *)(gen_frame + 0x80)));
        puVar6[0x18] = (*(uint *)(gen_frame + 0xd4));
      }
      F_0042c880(((undefined1 *)(gen_frame + 0x80)));
      F_007502b0((undefined *)((int)this + 0x2dc),((undefined1 *)(gen_frame + 0x8)),puVar6,0);
      puVar8 = (*(uint * PTR32 *)(gen_frame + 0x24));
      puVar9 = (*(uint * PTR32 *)(gen_frame + 0x1c));
    }
    puVar8 = puVar8 + 2;
    iVar2 = (*(int *)(gen_frame + 0x28)) + -1;
    (*(int *)(gen_frame + 0x28)) = iVar2;
    (*(uint * PTR32 *)(gen_frame + 0x24)) = puVar8;
  } while (iVar2 != 0);
  if ((char)puVar9[0x3f] != '\0') {
    *(byte *)((int)this + 0x2f0) = *(byte *)((int)this + 0x2f0) | 8;
  }
  uVar7 = F_0042a990((int)this + 0x280);
  F_0042ce40(((undefined1 *)(gen_frame + 0x2c)),"%s/%s",REFG(undefined * PTR32, 0x1323724),uVar7);
  uVar7 = F_0042a990(((undefined1 *)(gen_frame + 0x2c)));
  F_0042e430((undefined *)((int)this + 0x7c),uVar7);
  F_006e8f60(this,0,0xffffffff);
  puVar6 = *(undefined4 * PTR32 *)((int)this + 0x2d8);
  if (puVar6 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar6)(puVar6,1);
    *(undefined4 *)((int)this + 0x2d8) = 0;
  }
  uVar10 = F_0042c880(((undefined1 *)(gen_frame + 0x2c)));
  F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
  return (uint)uVar10;
}

/* ref: FUN_006ee800 */
uint F_006ee800(unsigned int gen_a0)
{
  GEN_ENTER(0x6ee800u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 uVar2;
  
  F_006e9ff0(this);
  uVar2 = 0;
  uVar1 = F_0042a990((int)this + 0x280);
  uVar1 = F_00754440((undefined *)((int)this + 0xfc),REFG(undefined * PTR32, 0x132372c),uVar1,uVar2);
  return uVar1;
}

/* ref: FUN_006ee830 */
unsigned int F_006ee830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6ee830u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  
  iVar2 = *param_2;
  if (iVar2 != param_2[1]) {
    F_00c46e20(iVar2,param_2[1],0);
    param_2[1] = iVar2;
  }
  piVar6 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x348)));
  if (piVar6 != *(int * PTR32 *)((int)this + 0x348)) {
    do {
      if (piVar6[0xe] == param_1) {
        piVar3 = (int *)param_2[1];
        piVar5 = piVar6 + 3;
        if ((piVar5 < piVar3) && (piVar4 = (int *)*param_2, piVar4 <= piVar5)) {
          if (piVar3 == (int *)param_2[2]) {
            F_007520f0(param_2,1);
          }
          if ((undefined2 *)param_2[1] != (undefined2 *)0x0) {
            *(undefined2 *)param_2[1] =
                 *((undefined2 *)GEN_TOP((*param_2 + ((int)piVar5 - (int)((int)(uintptr_t)piVar4) >> 1) * 2)));
          }
        }
        else {
          if (piVar3 == (int *)param_2[2]) {
            F_007520f0(param_2,1);
          }
          if ((undefined2 *)param_2[1] != (undefined2 *)0x0) {
            *(undefined2 *)param_2[1] = (short)*piVar5;
          }
        }
        param_2[1] = param_2[1] + 2;
      }
      if (*(char *)((int)piVar6 + 0x9d) == '\0') {
        piVar5 = (int *)piVar6[2];
        if (*(char *)((int)piVar5 + 0x9d) == '\0') {
          cVar1 = *(char *)(*piVar5 + 0x9d);
          piVar6 = piVar5;
          piVar5 = (int *)*piVar5;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar5 + 0x9d);
            piVar6 = piVar5;
            piVar5 = (int *)*piVar5;
          }
        }
        else {
          cVar1 = *(char *)(piVar6[1] + 0x9d);
          piVar3 = (int *)piVar6[1];
          piVar5 = piVar6;
          while ((piVar6 = piVar3, cVar1 == '\0' && (piVar5 == (int *)piVar6[2]))) {
            cVar1 = *(char *)(piVar6[1] + 0x9d);
            piVar3 = (int *)piVar6[1];
            piVar5 = piVar6;
          }
        }
      }
    } while (piVar6 != *(int * PTR32 *)((int)this + 0x348));
  }
  return 0;
}

/* ref: FUN_006ee940 */
uint F_006ee940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6ee940u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  int iVar1;
  char * pcVar2;
  undefined4 * puVar3;
  uint uVar4;
  uint * puVar5;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  puVar5 = *(uint * PTR32 *)(*param_1 + 4);
  pcVar2 = ((char *)GEN_TOP(((int)puVar5 + (puVar5[0x17] & 0xffffff) + 0x5c)));
  if (*pcVar2 == '\0') {
    F_0042e430((undefined *)((int)this + 0x118),REFG(undefined * PTR32, 0x1323738));
    *(undefined1 *)((int)this + 0x24c) = 0;
  }
  else {
    F_0042e430((undefined *)((int)this + 0x118),pcVar2);
    *(undefined1 *)((int)this + 0x24c) = 1;
  }
  if (**(char * PTR32 *)((int)this + 0x1e0) == '\0') {
    F_0042e430((undefined *)((int)this + 0x1e0),(int)puVar5 + (puVar5[0x14] & 0xffffff) + 0x50);
  }
  if (**(char * PTR32 *)((int)this + 0x2b8) == '\0') {
    F_0042e430((undefined *)((int)this + 0x2b8),(int)puVar5 + (puVar5[0x15] & 0xffffff) + 0x54);
  }
  if (**(char * PTR32 *)((int)this + 0x30c) == '\0') {
    F_0042e430((undefined *)((int)this + 0x30c),(int)puVar5 + (puVar5[0x16] & 0xffffff) + 0x58);
  }
  *(uint *)((int)this + 0x260) = puVar5[0x18];
  *(char *)((int)this + 0x374) = (char)puVar5[0x19];
  F_0074df70((undefined *)((int)this + 0x23c),*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x240) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 0x240) + 4))) = *(int *)((int)this + 0x240);
  *(undefined4 *)*(undefined4 *)((int)this + 0x240) = *(undefined4 *)((int)this + 0x240);
  *((int *)GEN_TOP((*(int *)((int)this + 0x240) + 8))) = *(int *)((int)this + 0x240);
  *(undefined4 *)((int)this + 0x244) = 0;
  if (*(char *)((int)this + 0x24c) != '\0') {
    (*(uint * PTR32 *)(gen_frame + 0x18)) = puVar5;
    (*(int *)(gen_frame + 0x1c)) = 10;
    do {
      pcVar2 = ((char *)GEN_TOP(((*puVar5 & 0xffffff) + (int)puVar5)));
      (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar2;
      if (*pcVar2 != '\0') {
        (*(uint *)(gen_frame + 0x10)) = puVar5[1];
        (*(uint * PTR32 *)(gen_frame + 0x18)) = puVar5;
        puVar3 = (undefined4 *)F_004296a0(0x68,0,800);
        *puVar3 = *(undefined4 *)((int)this + 0x240);
        puVar3[1] = *(undefined4 *)((int)this + 0x240);
        puVar3[2] = *(undefined4 *)((int)this + 0x240);
        *(undefined2 *)(puVar3 + 0x19) = 0;
        F_0042cc20(((undefined1 *)(gen_frame + 0x20)),(*(char * PTR32 *)(gen_frame + 0x14)),REFG(undefined4, 0x108cc50));
        (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x10));
        if (puVar3 + 3 != (undefined4 *)0x0) {
          F_0042cbc0(puVar3 + 3,((undefined1 *)(gen_frame + 0x20)));
          puVar3[0x18] = (*(uint *)(gen_frame + 0x74));
        }
        F_0042c880(((undefined1 *)(gen_frame + 0x20)));
        F_007502b0((undefined *)((int)this + 0x23c),((undefined1 *)(gen_frame + 0x4)),puVar3,0);
        puVar5 = (*(uint * PTR32 *)(gen_frame + 0x18));
      }
      puVar5 = puVar5 + 2;
      iVar1 = (*(int *)(gen_frame + 0x1c)) + -1;
      (*(int *)(gen_frame + 0x1c)) = iVar1;
      (*(uint * PTR32 *)(gen_frame + 0x18)) = puVar5;
    } while (iVar1 != 0);
  }
  if (*(short *)((int)this + 0x25e) != 0) {
    *(uint *)((int)this + 0x38) = *(uint *)((int)this + 0x38) | 0x8000;
  }
  puVar3 = *(undefined4 * PTR32 *)((int)this + 0x238);
  if (puVar3 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
    *(undefined4 *)((int)this + 0x238) = 0;
  }
  uVar4 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8));
  *(uint *)((int)this + 0x234) = uVar4;
  puVar3 = (undefined4 *)F_00406b90(0x20,0,0);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(puVar3,1,0);
    puVar3[5] = 1;
    *puVar3 = (*(undefined * PTR32 (*)[2])REFP(0x10b9264));
    puVar3[6] = this;
    puVar3[7] = ((code *)REFP(0x6ea730));
  }
  *(undefined4 * PTR32 *)((int)this + 0x238) = puVar3;
  F_00cb4540(puVar3,0,(uint)*(ushort *)((int)this + 0x1de));
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x234) + 0x48))))
                    (*(int * PTR32 *)((int)this + 0x234),*(undefined4 *)((int)this + 0x238));
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return uVar4;
}

/* ref: FUN_006eebe0 */
uint F_006eebe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6eebe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * puVar1;
  undefined * puVar2;
  undefined * this;
  uint uVar3;
  uint uVar4;
  uint * puVar5;
  char * pcVar6;
  int iVar7;
  
  this = param_1;
  uVar3 = F_00b9a750(*(undefined4 *)((int)param_1 + 8));
  puVar2 = REFG(undefined * PTR32, 0x1323740);
  puVar1 = REFG(undefined * PTR32, 0x1323700);
  F_00b9ae60(*(undefined4 *)((int)param_1 + 8),REFG(undefined * PTR32, 0x1323740));
  F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
  uVar4 = F_00b9a940(*(undefined4 *)((int)param_1 + 8),0xffffffff);
  if (uVar4 == 0) {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
    F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar2);
    F_00b9b150(*(undefined4 *)((int)param_1 + 8),0,0);
    iVar7 = uVar3 + 2;
    F_00a01c40(param_1,iVar7,"className",puVar2);
    F_00a01c80(param_1,iVar7,"referenceCount",1);
    F_00a01cc0(param_1,iVar7,"GetSequence",((code *)REFP(0x6dd9f0)));
    F_00a01cc0(param_1,iVar7,"GetSequenceParam",((code *)REFP(0x6d9930)));
    uVar3 = F_00ab02e0();
    param_1 = (undefined *)0x0;
    if (uVar3 != 0) {
      do {
        puVar5 = (uint *)F_00ab3600(param_1);
        if ((puVar5 != (uint *)0x0) &&
           (pcVar6 = ((char *)GEN_TOP(((*puVar5 & 0xffffff) + (int)puVar5))), *pcVar6 != '\0')) {
          F_00a01c80(this,iVar7,pcVar6,puVar5[1]);
        }
        param_1 = (undefined *)((int)param_1 + 1);
      } while (param_1 < uVar3);
    }
    if (puVar1 == (undefined *)0x0) {
      F_00b9bc00(*(undefined4 *)((int)this + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)this + 8),iVar7);
      F_00b9b290(*(undefined4 *)((int)this + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)this + 8),0xfffffffe);
      F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
    }
    else {
      F_00b9bc00(*(undefined4 *)((int)this + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)this + 8),iVar7);
      F_00b9b290(*(undefined4 *)((int)this + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)this + 8),0xfffffffe);
      F_00b9ae60(*(undefined4 *)((int)this + 8),puVar1);
      F_00b9b0d0(*(undefined4 *)((int)this + 8),0xffffd8ee);
      F_00b9b290(*(undefined4 *)((int)this + 8),iVar7,"__index");
      F_00b9a910(*(undefined4 *)((int)this + 8),iVar7);
      F_00b9b3d0(*(undefined4 *)((int)this + 8),iVar7);
      F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
      F_00a01ad0(this,puVar1);
    }
  }
  else {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
  }
  F_00754330(param_2,REFG(undefined * PTR32, 0x1323744),REFG(undefined * PTR32, 0x1323740),0);
  return 1;
}

/* ref: FUN_006eedf0 */
uint F_006eedf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6eedf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * puVar1;
  undefined * puVar2;
  undefined * this;
  uint uVar3;
  uint uVar4;
  uint * puVar5;
  char * pcVar6;
  int iVar7;
  
  this = param_1;
  uVar3 = F_00b9a750(*(undefined4 *)((int)param_1 + 8));
  puVar2 = REFG(undefined * PTR32, 0x1323788);
  puVar1 = REFG(undefined * PTR32, 0x1323748);
  F_00b9ae60(*(undefined4 *)((int)param_1 + 8),REFG(undefined * PTR32, 0x1323748));
  F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
  uVar4 = F_00b9a940(*(undefined4 *)((int)param_1 + 8),0xffffffff);
  if (uVar4 == 0) {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
    F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar1);
    F_00b9b150(*(undefined4 *)((int)param_1 + 8),0,0);
    iVar7 = uVar3 + 2;
    F_00a01c40(param_1,iVar7,"className",puVar1);
    F_00a01c80(param_1,iVar7,"referenceCount",1);
    F_00a01cc0(param_1,iVar7,"GetLeveId",((code *)REFP(0x6d2910)));
    F_00a01cc0(param_1,iVar7,"LeveStart",((code *)REFP(0x6ba180)));
    F_00a01cc0(param_1,iVar7,"LeveSuccess",((code *)REFP(0x6ba1a0)));
    F_00a01cc0(param_1,iVar7,"LeveFailed",((code *)REFP(0x6ba1c0)));
    F_00a01cc0(param_1,iVar7,"PlayLeveStartAction",((code *)REFP(0x6d28b0)));
    F_00a01cc0(param_1,iVar7,"HideDirectorTodo",((code *)REFP(0x6c3860)));
    F_00a01c80(param_1,iVar7,"NOTICE_ID_GAME_START",0);
    F_00a01c80(param_1,iVar7,"NOTICE_ID_GAME_RESULT",1);
    F_00a01c80(param_1,iVar7,"NOTICE_ID_GAME_COME_BACK",2);
    F_00a01c80(param_1,iVar7,"LEVE_RESULT_NONE",0);
    F_00a01c80(param_1,iVar7,"LEVE_RESULT_SUCCEED",1);
    F_00a01c80(param_1,iVar7,"LEVE_RESULT_FAILED",2);
    F_00a01c80(param_1,iVar7,"LEVE_RESULT_FAILED_TIMER",3);
    uVar3 = F_00ab02a0();
    param_1 = (undefined *)0x0;
    if (uVar3 != 0) {
      do {
        puVar5 = (uint *)F_00ab3300(param_1);
        if ((puVar5 != (uint *)0x0) &&
           (pcVar6 = ((char *)GEN_TOP(((*puVar5 & 0xffffff) + (int)puVar5))), *pcVar6 != '\0')) {
          F_00a01c80(this,iVar7,pcVar6,puVar5[1]);
        }
        param_1 = (undefined *)((int)param_1 + 1);
      } while (param_1 < uVar3);
    }
    if (puVar2 == (undefined *)0x0) {
      F_00b9bc00(*(undefined4 *)((int)this + 8),puVar1);
      F_00b9a910(*(undefined4 *)((int)this + 8),iVar7);
      F_00b9b290(*(undefined4 *)((int)this + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)this + 8),0xfffffffe);
      F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
    }
    else {
      F_00b9bc00(*(undefined4 *)((int)this + 8),puVar1);
      F_00b9a910(*(undefined4 *)((int)this + 8),iVar7);
      F_00b9b290(*(undefined4 *)((int)this + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)this + 8),0xfffffffe);
      F_00b9ae60(*(undefined4 *)((int)this + 8),puVar2);
      F_00b9b0d0(*(undefined4 *)((int)this + 8),0xffffd8ee);
      F_00b9b290(*(undefined4 *)((int)this + 8),iVar7,"__index");
      F_00b9a910(*(undefined4 *)((int)this + 8),iVar7);
      F_00b9b3d0(*(undefined4 *)((int)this + 8),iVar7);
      F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
      F_00a01ad0(this,puVar2);
    }
  }
  else {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
  }
  F_00754330(param_2,REFG(undefined * PTR32, 0x132374c),REFG(undefined * PTR32, 0x1323748),0);
  return 1;
}

/* ref: FUN_006ef0b0 */
uint F_006ef0b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ef0b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * puVar1;
  undefined * puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = F_00b9a750(*(undefined4 *)((int)param_1 + 8));
  puVar2 = REFG(undefined * PTR32, 0x1323750);
  puVar1 = REFG(undefined * PTR32, 0x1323748);
  F_00b9ae60(*(undefined4 *)((int)param_1 + 8),REFG(undefined * PTR32, 0x1323750));
  F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
  uVar4 = F_00b9a940(*(undefined4 *)((int)param_1 + 8),0xffffffff);
  if (uVar4 == 0) {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
    F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar2);
    F_00b9b150(*(undefined4 *)((int)param_1 + 8),0,0);
    iVar5 = uVar3 + 2;
    F_00a01c40(param_1,iVar5,"className",puVar2);
    F_00a01c80(param_1,iVar5,"referenceCount",1);
    if (puVar1 == (undefined *)0x0) {
      F_00b9bc00(*(undefined4 *)((int)param_1 + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
      F_00b9b2f0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
    }
    else {
      F_00b9bc00(*(undefined4 *)((int)param_1 + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
      F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar1);
      F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),iVar5,"__index");
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b3d0(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b2f0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
      F_00a01ad0(param_1,puVar1);
    }
  }
  else {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
  }
  F_00754330(param_2,REFG(undefined * PTR32, 0x1323754),REFG(undefined * PTR32, 0x1323750),0);
  return 1;
}

/* ref: FUN_006ef250 */
uint F_006ef250(unsigned int gen_a0)
{
  GEN_ENTER(0x6ef250u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = *(uint *)((int)this + 0x4e8);
  *(undefined1 *)((int)this + 0x4f8) = 1;
  if ((uVar1 == 5) || (uVar1 == 9)) {
    uVar1 = F_00ab3300(0x2b);
    if (uVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(uVar1 + 4);
    }
    uVar1 = F_006e5f80(REFG(undefined4, 0x1488344),this,uVar2,0);
    *(uint *)((int)this + 0x504) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_006ef2a0 */
uint F_006ef2a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ef2a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  undefined4 uVar4;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  *(undefined1 *)(iVar1 + 0x4f8) = 1;
  if ((*(int *)(iVar1 + 0x4e8) == 5) || (*(int *)(iVar1 + 0x4e8) == 9)) {
    uVar2 = F_00ab3300(0x2b);
    if (uVar2 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(uVar2 + 4);
    }
    uVar2 = F_006e5f80(REFG(undefined4, 0x1488344),iVar1,uVar4,0);
    *(uint *)(iVar1 + 0x504) = uVar2;
  }
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: FUN_006ef320 */
uint F_006ef320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6ef320u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint * puVar6;
  int * piVar7;
  undefined4 * puVar8;
  
  puVar6 = (uint *)((int)this + 0x3d4);
  uVar2 = *puVar6;
  if (uVar2 != *(uint *)((int)this + 0x3d8)) {
    F_00c46e20(uVar2,*(uint *)((int)this + 0x3d8),0);
    *(uint *)((int)this + 0x3d8) = uVar2;
  }
  F_0074cbd0(puVar6,4);
  (*(uint *)(gen_frame + 0x0)) = 0;
  if (param_2 != 0) {
    do {
      piVar7 = *((int * PTR32 *)GEN_TOP((*(int *)(param_1 + (*(uint *)(gen_frame + 0x0)) * 4) + 4)));
      if (piVar7 != (int *)0x0) {
        iVar3 = *piVar7;
        uVar2 = 0;
        piVar7 = (int *)((int)this + 0x360);
        do {
          if (iVar3 == *piVar7) goto LAB_006ef470;
          uVar2 = uVar2 + 1;
          piVar7 = piVar7 + 1;
        } while (uVar2 < 4);
        piVar7 = *(int * PTR32 *)((int)this + 0x3d8);
        (*(int *)(gen_frame + 0x8)) = iVar3;
        if ((&(*(int *)(gen_frame + 0x8)) < piVar7) && (piVar1 = (int *)*puVar6, piVar1 <= &(*(int *)(gen_frame + 0x8)))) {
          if (piVar7 == *(int * PTR32 *)((int)this + 0x3dc)) {
            iVar3 = (int)piVar7 - (int)((int)(uintptr_t)piVar1) >> 2;
            if (iVar3 == -1) {
LAB_006ef501: ;
                    
              F_00c4579a("vector<T> too long");
            }
            uVar4 = iVar3 + 1;
            uVar2 = (int)*(int * PTR32 *)((int)this + 0x3dc) - (int)((int)(uintptr_t)piVar1) >> 2;
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
              F_0074cbd0(puVar6,uVar2);
            }
          }
          if (*(undefined4 * PTR32 *)((int)this + 0x3d8) != (undefined4 *)0x0) {
            **(undefined4 * PTR32 *)((int)this + 0x3d8) =
                 *((undefined4 *)GEN_TOP((*puVar6 + ((int)&(*(int *)(gen_frame + 0x8)) - (int)((int)(uintptr_t)piVar1) >> 2) * 4)));
          }
        }
        else {
          if (piVar7 == *(int * PTR32 *)((int)this + 0x3dc)) {
            iVar5 = (int)((int)piVar7 - *puVar6) >> 2;
            if (iVar5 == -1) goto LAB_006ef501;
            uVar4 = iVar5 + 1;
            uVar2 = (int)((int)*(int * PTR32 *)((int)this + 0x3dc) - *puVar6) >> 2;
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
              F_0074cbd0(puVar6,uVar2);
            }
          }
          if (*(int * PTR32 *)((int)this + 0x3d8) != (int *)0x0) {
            **(int * PTR32 *)((int)this + 0x3d8) = iVar3;
          }
        }
        *(int *)((int)this + 0x3d8) = *(int *)((int)this + 0x3d8) + 4;
      }
LAB_006ef470: ;
      (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) + 1;
    } while ((*(uint *)(gen_frame + 0x0)) < param_2);
  }
  puVar8 = *(undefined4 * PTR32 *)((int)this + 0x34c);
  if (puVar8 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar8)(puVar8,1);
    *(undefined4 *)((int)this + 0x34c) = 0;
  }
  *(undefined4 *)((int)this + 0x348) = 0;
  puVar6 = (uint *)F_00ab3420(*(undefined4 *)((int)this + 0x370));
  uVar2 = 0;
  if (puVar6 != (uint *)0x0) {
    uVar2 = F_0042e430((undefined *)((int)this + 0x118),(*puVar6 & 0xffffff) + (int)puVar6);
    if ((*(byte *)((int)this + 0x1c) & 1) != 0) {
      puVar8 = *(undefined4 * PTR32 *)((int)this + 0xe8);
      if (puVar8 == *(undefined4 * PTR32 *)((int)this + 0xec)) {
        return uVar2;
      }
      while (uVar2 = ((code *)*(gen_code32 *)(*(int *)*puVar8 + 8))((int *)*puVar8), (char)uVar2 != '\0') {
        puVar8 = puVar8 + 1;
        if (puVar8 == *(undefined4 * PTR32 *)((int)this + 0xec)) {
          return uVar2;
        }
      }
    }
    F_006c3bc0(this);
    uVar2 = F_00754440((undefined *)((int)this + 0xfc),REFG(undefined * PTR32, 0x132375c),
                         (*puVar6 & 0xffffff) + (int)puVar6,0);
  }
  return uVar2;
}

/* ref: FUN_006ef540 */
uint F_006ef540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ef540u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * puVar1;
  undefined * puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = F_00b9a750(*(undefined4 *)((int)param_1 + 8));
  puVar2 = REFG(undefined * PTR32, 0x1323758);
  puVar1 = REFG(undefined * PTR32, 0x1323748);
  F_00b9ae60(*(undefined4 *)((int)param_1 + 8),REFG(undefined * PTR32, 0x1323758));
  F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
  uVar4 = F_00b9a940(*(undefined4 *)((int)param_1 + 8),0xffffffff);
  if (uVar4 == 0) {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
    F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar2);
    F_00b9b150(*(undefined4 *)((int)param_1 + 8),0,0);
    iVar5 = uVar3 + 2;
    F_00a01c40(param_1,iVar5,"className",puVar2);
    F_00a01c80(param_1,iVar5,"referenceCount",1);
    if (puVar1 == (undefined *)0x0) {
      F_00b9bc00(*(undefined4 *)((int)param_1 + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
      F_00b9b2f0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
    }
    else {
      F_00b9bc00(*(undefined4 *)((int)param_1 + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
      F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar1);
      F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),iVar5,"__index");
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b3d0(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b2f0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
      F_00a01ad0(param_1,puVar1);
    }
  }
  else {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
  }
  F_00754330(param_2,REFG(undefined * PTR32, 0x132375c),REFG(undefined * PTR32, 0x1323758),0);
  return 1;
}

/* ref: FUN_006ef6e0 */
uint F_006ef6e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ef6e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * puVar1;
  undefined * puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = F_00b9a750(*(undefined4 *)((int)param_1 + 8));
  puVar2 = REFG(undefined * PTR32, 0x1323760);
  puVar1 = REFG(undefined * PTR32, 0x1323748);
  F_00b9ae60(*(undefined4 *)((int)param_1 + 8),REFG(undefined * PTR32, 0x1323760));
  F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
  uVar4 = F_00b9a940(*(undefined4 *)((int)param_1 + 8),0xffffffff);
  if (uVar4 == 0) {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
    F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar2);
    F_00b9b150(*(undefined4 *)((int)param_1 + 8),0,0);
    iVar5 = uVar3 + 2;
    F_00a01c40(param_1,iVar5,"className",puVar2);
    F_00a01c80(param_1,iVar5,"referenceCount",1);
    F_00a01cc0(param_1,iVar5,"SetDirectorTodo",((code *)REFP(0x730120)));
    F_00a01cc0(param_1,iVar5,"GetName",((code *)REFP(0x730170)));
    F_00a01c80(param_1,iVar5,"TODO_TYPE_FRACTION_BAR",1);
    F_00a01c80(param_1,iVar5,"TODO_TYPE_NUMBER",2);
    F_00a01c80(param_1,iVar5,"TODO_TYPE_BAR",3);
    F_00a01c80(param_1,iVar5,"TODO_TYPE_TIME_REMAINING",4);
    F_00a01c80(param_1,iVar5,"TODO_TYPE_LARGE_BAR",5);
    F_00a01c80(param_1,iVar5,"UI8_A",1);
    F_00a01c80(param_1,iVar5,"UI8_B",2);
    F_00a01c80(param_1,iVar5,"UI8_C",3);
    F_00a01c80(param_1,iVar5,"UI8_D",4);
    F_00a01c80(param_1,iVar5,"UI8_E",5);
    F_00a01c80(param_1,iVar5,"UI8_F",6);
    F_00a01c80(param_1,iVar5,"UI8_G",7);
    F_00a01c80(param_1,iVar5,"UI8_H",8);
    F_00a01c80(param_1,iVar5,"UI8_I",9);
    F_00a01c80(param_1,iVar5,"UI8_J",10);
    F_00a01c80(param_1,iVar5,"NAME_TYPE_BNPC",2);
    F_00a01cc0(param_1,iVar5,"GetEntry",((code *)REFP(0x6d40d0)));
    F_00a01c80(param_1,iVar5,"BASE_ID_ENTRY",0);
    F_00a01c80(param_1,iVar5,"LEVEL_ENTRY",1);
    F_00a01c80(param_1,iVar5,"NAME_ID_ENTRY",2);
    F_00a01c80(param_1,iVar5,"DROP_EVENT_ITEM_ID_ENTRY",3);
    F_00a01c80(param_1,iVar5,"DROP_EVENT_ITEM_MAX_ENTRY",4);
    F_00a01c80(param_1,iVar5,"GEN_LPANY",5);
    F_00a01c80(param_1,iVar5,"NUM_OF_APPEARANCE_ENTRY",6);
    if (puVar1 == (undefined *)0x0) {
      F_00b9bc00(*(undefined4 *)((int)param_1 + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
      F_00b9b2f0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
    }
    else {
      F_00b9bc00(*(undefined4 *)((int)param_1 + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
      F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar1);
      F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),iVar5,"__index");
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b3d0(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b2f0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
      F_00a01ad0(param_1,puVar1);
    }
  }
  else {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
  }
  F_00754330(param_2,REFG(undefined * PTR32, 0x1323764),REFG(undefined * PTR32, 0x1323760),0);
  return 1;
}

/* ref: Client::Game::Event::TestDirector::vf1 */
uint F_006efa10(unsigned int gen_a0)
{
  GEN_ENTER(0x6efa10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 uVar2;
  
  this[0x1c] = (undefined1)((byte)this[0x1c] | 2);
  F_006c3f30(this);
  uVar2 = 0;
  uVar1 = F_0042a990(this + 0x118);
  uVar1 = F_00754440(this + 0xfc,REFG(undefined * PTR32, 0x132376c),uVar1,uVar2);
  return uVar1;
}

/* ref: FUN_006efa40 */
uint F_006efa40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6efa40u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * puVar1;
  undefined * puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = F_00b9a750(*(undefined4 *)((int)param_1 + 8));
  puVar2 = REFG(undefined * PTR32, 0x1323788);
  puVar1 = REFG(undefined * PTR32, 0x1323768);
  F_00b9ae60(*(undefined4 *)((int)param_1 + 8),REFG(undefined * PTR32, 0x1323768));
  F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
  uVar4 = F_00b9a940(*(undefined4 *)((int)param_1 + 8),0xffffffff);
  if (uVar4 == 0) {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
    F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar1);
    F_00b9b150(*(undefined4 *)((int)param_1 + 8),0,0);
    iVar5 = uVar3 + 2;
    F_00a01c40(param_1,iVar5,"className",puVar1);
    F_00a01c80(param_1,iVar5,"referenceCount",1);
    if (puVar2 == (undefined *)0x0) {
      F_00b9bc00(*(undefined4 *)((int)param_1 + 8),puVar1);
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
      F_00b9b2f0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
    }
    else {
      F_00b9bc00(*(undefined4 *)((int)param_1 + 8),puVar1);
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
      F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar2);
      F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),iVar5,"__index");
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b3d0(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b2f0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
      F_00a01ad0(param_1,puVar2);
    }
  }
  else {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
  }
  F_00754330(param_2,REFG(undefined * PTR32, 0x132376c),REFG(undefined * PTR32, 0x1323768),0);
  return 1;
}

/* ref: Client::Game::Event::OpeningEventHandler::vf1 */
uint F_006efbe0(unsigned int gen_a0)
{
  GEN_ENTER(0x6efbe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * this_00;
  
  uVar1 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8));
  *(uint *)(this + 0x230) = uVar1;
  this_00 = (undefined4 *)F_00406b90(0x20,0,0);
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(this_00,1,0);
    this_00[5] = 1;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10b92c8));
    this_00[6] = this;
    this_00[7] = ((code *)REFP(0x6eb660));
  }
  *(undefined4 * PTR32 *)(this + 0x234) = this_00;
  F_00cb4540(this_00,0,*(undefined4 *)(this + 0x1d4));
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x230) + 0x48))))
                    (*(int * PTR32 *)(this + 0x230),*(undefined4 *)(this + 0x234));
  this[0x1c] = (undefined1)((byte)this[0x1c] | 2);
  return uVar1;
}

/* ref: FUN_006efc70 */
uint F_006efc70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6efc70u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * puVar1;
  undefined * puVar2;
  undefined * this;
  uint uVar3;
  uint uVar4;
  uint * puVar5;
  char * pcVar6;
  int iVar7;
  
  this = param_1;
  uVar3 = F_00b9a750(*(undefined4 *)((int)param_1 + 8));
  puVar2 = REFG(undefined * PTR32, 0x1323770);
  puVar1 = REFG(undefined * PTR32, 0x1323700);
  F_00b9ae60(*(undefined4 *)((int)param_1 + 8),REFG(undefined * PTR32, 0x1323770));
  F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
  uVar4 = F_00b9a940(*(undefined4 *)((int)param_1 + 8),0xffffffff);
  if (uVar4 == 0) {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
    F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar2);
    F_00b9b150(*(undefined4 *)((int)param_1 + 8),0,0);
    iVar7 = uVar3 + 2;
    F_00a01c40(param_1,iVar7,"className",puVar2);
    F_00a01c80(param_1,iVar7,"referenceCount",1);
    F_00a01cc0(param_1,iVar7,"EnableEventRange",((code *)REFP(0x6ebaf0)));
    F_00a01cc0(param_1,iVar7,"DisableEventRange",((code *)REFP(0x6e2a00)));
    F_00a01cc0(param_1,iVar7,"GetQuestId",((code *)REFP(0x6d45a0)));
    F_00a01cc0(param_1,iVar7,"IsSelectControlMode",((code *)REFP(0x6d4550)));
    F_00a01c80(param_1,iVar7,"OPENING_SEQ_0",0);
    F_00a01c80(param_1,iVar7,"OPENING_SEQ_1",1);
    F_00a01c80(param_1,iVar7,"OPENING_SEQ_2",2);
    uVar3 = F_00ab02c0();
    param_1 = (undefined *)0x0;
    if (uVar3 != 0) {
      do {
        puVar5 = (uint *)F_00ab35d0(param_1);
        if ((puVar5 != (uint *)0x0) &&
           (pcVar6 = ((char *)GEN_TOP(((*puVar5 & 0xffffff) + (int)puVar5))), *pcVar6 != '\0')) {
          F_00a01c80(this,iVar7,pcVar6,puVar5[1]);
        }
        param_1 = (undefined *)((int)param_1 + 1);
      } while (param_1 < uVar3);
    }
    if (puVar1 == (undefined *)0x0) {
      F_00b9bc00(*(undefined4 *)((int)this + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)this + 8),iVar7);
      F_00b9b290(*(undefined4 *)((int)this + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)this + 8),0xfffffffe);
      F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
    }
    else {
      F_00b9bc00(*(undefined4 *)((int)this + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)this + 8),iVar7);
      F_00b9b290(*(undefined4 *)((int)this + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)this + 8),0xfffffffe);
      F_00b9ae60(*(undefined4 *)((int)this + 8),puVar1);
      F_00b9b0d0(*(undefined4 *)((int)this + 8),0xffffd8ee);
      F_00b9b290(*(undefined4 *)((int)this + 8),iVar7,"__index");
      F_00b9a910(*(undefined4 *)((int)this + 8),iVar7);
      F_00b9b3d0(*(undefined4 *)((int)this + 8),iVar7);
      F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
      F_00a01ad0(this,puVar1);
    }
  }
  else {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
  }
  F_00754330(param_2,REFG(undefined * PTR32, 0x1323774),REFG(undefined * PTR32, 0x1323770),0);
  return 1;
}

/* ref: FUN_006efed0 */
uint F_006efed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6efed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * puVar1;
  undefined * puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = F_00b9a750(*(undefined4 *)((int)param_1 + 8));
  puVar2 = REFG(undefined * PTR32, 0x1323778);
  puVar1 = REFG(undefined * PTR32, 0x1323700);
  F_00b9ae60(*(undefined4 *)((int)param_1 + 8),REFG(undefined * PTR32, 0x1323778));
  F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
  uVar4 = F_00b9a940(*(undefined4 *)((int)param_1 + 8),0xffffffff);
  if (uVar4 == 0) {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
    F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar2);
    F_00b9b150(*(undefined4 *)((int)param_1 + 8),0,0);
    iVar5 = uVar3 + 2;
    F_00a01c40(param_1,iVar5,"className",puVar2);
    F_00a01c80(param_1,iVar5,"referenceCount",1);
    F_00a01cc0(param_1,iVar5,"IsDestMountable",((code *)REFP(0x6d4630)));
    if (puVar1 == (undefined *)0x0) {
      F_00b9bc00(*(undefined4 *)((int)param_1 + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
      F_00b9b2f0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
    }
    else {
      F_00b9bc00(*(undefined4 *)((int)param_1 + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
      F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar1);
      F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),iVar5,"__index");
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b3d0(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b2f0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
      F_00a01ad0(param_1,puVar1);
    }
  }
  else {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
  }
  F_00754330(param_2,REFG(undefined * PTR32, 0x132377c),REFG(undefined * PTR32, 0x1323778),0);
  return 1;
}

/* ref: FUN_006f0080 */
uint F_006f0080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f0080u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * puVar1;
  undefined * puVar2;
  undefined * this;
  uint uVar3;
  uint uVar4;
  uint * puVar5;
  char * pcVar6;
  int iVar7;
  
  this = param_1;
  uVar3 = F_00b9a750(*(undefined4 *)((int)param_1 + 8));
  puVar2 = REFG(undefined * PTR32, 0x1323788);
  puVar1 = REFG(undefined * PTR32, 0x1323700);
  F_00b9ae60(*(undefined4 *)((int)param_1 + 8),REFG(undefined * PTR32, 0x1323788));
  F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
  uVar4 = F_00b9a940(*(undefined4 *)((int)param_1 + 8),0xffffffff);
  if (uVar4 == 0) {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
    F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar2);
    F_00b9b150(*(undefined4 *)((int)param_1 + 8),0,0);
    iVar7 = uVar3 + 2;
    F_00a01c40(param_1,iVar7,"className",puVar2);
    F_00a01c80(param_1,iVar7,"referenceCount",1);
    F_00a01cc0(param_1,iVar7,"GetSequence",((code *)REFP(0x6d4760)));
    F_00a01cc0(param_1,iVar7,"GetI8A",((code *)REFP(0x736680)));
    F_00a01cc0(param_1,iVar7,"GetI8B",((code *)REFP(0x7366d0)));
    F_00a01cc0(param_1,iVar7,"GetI8C",((code *)REFP(0x736720)));
    F_00a01cc0(param_1,iVar7,"GetI8D",((code *)REFP(0x736770)));
    F_00a01cc0(param_1,iVar7,"GetI8E",((code *)REFP(0x7367c0)));
    F_00a01cc0(param_1,iVar7,"GetI8F",((code *)REFP(0x736810)));
    F_00a01cc0(param_1,iVar7,"GetI8G",((code *)REFP(0x736860)));
    F_00a01cc0(param_1,iVar7,"GetI8H",((code *)REFP(0x7368b0)));
    F_00a01cc0(param_1,iVar7,"GetI8I",((code *)REFP(0x736900)));
    F_00a01cc0(param_1,iVar7,"GetI8J",((code *)REFP(0x736950)));
    F_00a01cc0(param_1,iVar7,"GetUI8A",((code *)REFP(0x727830)));
    F_00a01cc0(param_1,iVar7,"GetUI8B",((code *)REFP(0x727880)));
    F_00a01cc0(param_1,iVar7,"GetUI8C",((code *)REFP(0x7278d0)));
    F_00a01cc0(param_1,iVar7,"GetUI8D",((code *)REFP(0x727920)));
    F_00a01cc0(param_1,iVar7,"GetUI8E",((code *)REFP(0x727970)));
    F_00a01cc0(param_1,iVar7,"GetUI8F",((code *)REFP(0x7279c0)));
    F_00a01cc0(param_1,iVar7,"GetUI8G",((code *)REFP(0x727a10)));
    F_00a01cc0(param_1,iVar7,"GetUI8H",((code *)REFP(0x727a60)));
    F_00a01cc0(param_1,iVar7,"GetUI8I",((code *)REFP(0x727ab0)));
    F_00a01cc0(param_1,iVar7,"GetUI8J",((code *)REFP(0x727b00)));
    F_00a01cc0(param_1,iVar7,"GetUI8AH",((code *)REFP(0x7369a0)));
    F_00a01cc0(param_1,iVar7,"GetUI8BH",((code *)REFP(0x736a00)));
    F_00a01cc0(param_1,iVar7,"GetUI8CH",((code *)REFP(0x736a60)));
    F_00a01cc0(param_1,iVar7,"GetUI8DH",((code *)REFP(0x736ac0)));
    F_00a01cc0(param_1,iVar7,"GetUI8EH",((code *)REFP(0x736b20)));
    F_00a01cc0(param_1,iVar7,"GetUI8FH",((code *)REFP(0x736b80)));
    F_00a01cc0(param_1,iVar7,"GetUI8GH",((code *)REFP(0x736be0)));
    F_00a01cc0(param_1,iVar7,"GetUI8HH",((code *)REFP(0x736c40)));
    F_00a01cc0(param_1,iVar7,"GetUI8IH",((code *)REFP(0x736ca0)));
    F_00a01cc0(param_1,iVar7,"GetUI8JH",((code *)REFP(0x736d00)));
    F_00a01cc0(param_1,iVar7,"GetUI8AL",((code *)REFP(0x736d60)));
    F_00a01cc0(param_1,iVar7,"GetUI8BL",((code *)REFP(0x736dc0)));
    F_00a01cc0(param_1,iVar7,"GetUI8CL",((code *)REFP(0x736e20)));
    F_00a01cc0(param_1,iVar7,"GetUI8DL",((code *)REFP(0x736e80)));
    F_00a01cc0(param_1,iVar7,"GetUI8EL",((code *)REFP(0x736ee0)));
    F_00a01cc0(param_1,iVar7,"GetUI8FL",((code *)REFP(0x736f40)));
    F_00a01cc0(param_1,iVar7,"GetUI8GL",((code *)REFP(0x736fa0)));
    F_00a01cc0(param_1,iVar7,"GetUI8HL",((code *)REFP(0x737000)));
    F_00a01cc0(param_1,iVar7,"GetUI8IL",((code *)REFP(0x737060)));
    F_00a01cc0(param_1,iVar7,"GetUI8JL",((code *)REFP(0x7370c0)));
    F_00a01cc0(param_1,iVar7,"GetI16A",((code *)REFP(0x737120)));
    F_00a01cc0(param_1,iVar7,"GetI16B",((code *)REFP(0x737190)));
    F_00a01cc0(param_1,iVar7,"GetI16C",((code *)REFP(0x737200)));
    F_00a01cc0(param_1,iVar7,"GetI16D",((code *)REFP(0x737270)));
    F_00a01cc0(param_1,iVar7,"GetI16E",((code *)REFP(0x7372e0)));
    F_00a01cc0(param_1,iVar7,"GetUI16A",((code *)REFP(0x737350)));
    F_00a01cc0(param_1,iVar7,"GetUI16B",((code *)REFP(0x7373b0)));
    F_00a01cc0(param_1,iVar7,"GetUI16C",((code *)REFP(0x737410)));
    F_00a01cc0(param_1,iVar7,"GetUI16D",((code *)REFP(0x737470)));
    F_00a01cc0(param_1,iVar7,"GetUI16E",((code *)REFP(0x7374d0)));
    F_00a01cc0(param_1,iVar7,"GetI32A",((code *)REFP(0x737530)));
    F_00a01cc0(param_1,iVar7,"GetI32B",((code *)REFP(0x7375b0)));
    F_00a01cc0(param_1,iVar7,"GetUI32A",((code *)REFP(0x737630)));
    F_00a01cc0(param_1,iVar7,"GetUI32B",((code *)REFP(0x7376b0)));
    F_00a01cc0(param_1,iVar7,"GetBranch",((code *)REFP(0x727b00)));
    F_00a01cc0(param_1,iVar7,"GetBitFlag8",((code *)REFP(0x737730)));
    F_00a01cc0(param_1,iVar7,"GetBitFlag16",((code *)REFP(0x7377b0)));
    F_00a01cc0(param_1,iVar7,"GetBitFlag24",((code *)REFP(0x737830)));
    F_00a01cc0(param_1,iVar7,"GetBitFlag32",((code *)REFP(0x7378b0)));
    F_00a01cc0(param_1,iVar7,"GetBitFlag40",((code *)REFP(0x737930)));
    F_00a01cc0(param_1,iVar7,"GetBitFlag48",((code *)REFP(0x7379b0)));
    F_00a01cc0(param_1,iVar7,"GetBitFlag56",((code *)REFP(0x737a30)));
    F_00a01cc0(param_1,iVar7,"GetBitFlag64",((code *)REFP(0x737ab0)));
    F_00a01cc0(param_1,iVar7,"GetBitFlag72",((code *)REFP(0x737b30)));
    F_00a01cc0(param_1,iVar7,"GetBitFlag80",((code *)REFP(0x737bb0)));
    uVar3 = F_00ab0300();
    param_1 = (undefined *)0x0;
    if (uVar3 != 0) {
      do {
        puVar5 = (uint *)F_00ab3870(param_1);
        if ((puVar5 != (uint *)0x0) &&
           (pcVar6 = ((char *)GEN_TOP(((*puVar5 & 0xffffff) + (int)puVar5))), *pcVar6 != '\0')) {
          F_00a01c80(this,iVar7,pcVar6,puVar5[1]);
        }
        param_1 = (undefined *)((int)param_1 + 1);
      } while (param_1 < uVar3);
    }
    if (puVar1 == (undefined *)0x0) {
      F_00b9bc00(*(undefined4 *)((int)this + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)this + 8),iVar7);
      F_00b9b290(*(undefined4 *)((int)this + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)this + 8),0xfffffffe);
      F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
    }
    else {
      F_00b9bc00(*(undefined4 *)((int)this + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)this + 8),iVar7);
      F_00b9b290(*(undefined4 *)((int)this + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)this + 8),0xfffffffe);
      F_00b9ae60(*(undefined4 *)((int)this + 8),puVar1);
      F_00b9b0d0(*(undefined4 *)((int)this + 8),0xffffd8ee);
      F_00b9b290(*(undefined4 *)((int)this + 8),iVar7,"__index");
      F_00b9a910(*(undefined4 *)((int)this + 8),iVar7);
      F_00b9b3d0(*(undefined4 *)((int)this + 8),iVar7);
      F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
      F_00a01ad0(this,puVar1);
    }
  }
  else {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
  }
  F_00754330(param_2,REFG(undefined * PTR32, 0x132378c),REFG(undefined * PTR32, 0x1323788),0);
  return 1;
}

/* ref: FUN_006f0710 */
uint F_006f0710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f0710u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * puVar1;
  undefined * puVar2;
  undefined * this;
  uint uVar3;
  uint uVar4;
  uint * puVar5;
  char * pcVar6;
  int iVar7;
  
  this = param_1;
  uVar3 = F_00b9a750(*(undefined4 *)((int)param_1 + 8));
  puVar2 = REFG(undefined * PTR32, 0x1323790);
  puVar1 = REFG(undefined * PTR32, 0x1323788);
  F_00b9ae60(*(undefined4 *)((int)param_1 + 8),REFG(undefined * PTR32, 0x1323790));
  F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
  uVar4 = F_00b9a940(*(undefined4 *)((int)param_1 + 8),0xffffffff);
  if (uVar4 == 0) {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
    F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar2);
    F_00b9b150(*(undefined4 *)((int)param_1 + 8),0,0);
    iVar7 = uVar3 + 2;
    F_00a01c40(param_1,iVar7,"className",puVar2);
    F_00a01c80(param_1,iVar7,"referenceCount",1);
    F_00a01cc0(param_1,iVar7,"SetDirectorObjective",((code *)REFP(0x6e2aa0)));
    F_00a01cc0(param_1,iVar7,"SetContentBGM",((code *)REFP(0x6d48b0)));
    F_00a01cc0(param_1,iVar7,"ResetContentBGM",((code *)REFP(0x6c5070)));
    F_00a01c80(param_1,iVar7,"END_EVENT_SCENE_RESULT",0);
    uVar3 = F_00ab0490();
    param_1 = (undefined *)0x0;
    if (uVar3 != 0) {
      do {
        puVar5 = (uint *)F_00ab40a0(param_1);
        if ((puVar5 != (uint *)0x0) &&
           (pcVar6 = ((char *)GEN_TOP(((*puVar5 & 0xffffff) + (int)puVar5))), *pcVar6 != '\0')) {
          F_00a01c80(this,iVar7,pcVar6,puVar5[1]);
        }
        param_1 = (undefined *)((int)param_1 + 1);
      } while (param_1 < uVar3);
    }
    if (puVar1 == (undefined *)0x0) {
      F_00b9bc00(*(undefined4 *)((int)this + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)this + 8),iVar7);
      F_00b9b290(*(undefined4 *)((int)this + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)this + 8),0xfffffffe);
      F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
    }
    else {
      F_00b9bc00(*(undefined4 *)((int)this + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)this + 8),iVar7);
      F_00b9b290(*(undefined4 *)((int)this + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)this + 8),0xfffffffe);
      F_00b9ae60(*(undefined4 *)((int)this + 8),puVar1);
      F_00b9b0d0(*(undefined4 *)((int)this + 8),0xffffd8ee);
      F_00b9b290(*(undefined4 *)((int)this + 8),iVar7,"__index");
      F_00b9a910(*(undefined4 *)((int)this + 8),iVar7);
      F_00b9b3d0(*(undefined4 *)((int)this + 8),iVar7);
      F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
      F_00a01ad0(this,puVar1);
    }
  }
  else {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
  }
  F_00754330(param_2,REFG(undefined * PTR32, 0x1323794),REFG(undefined * PTR32, 0x1323790),0);
  return 1;
}

/* ref: FUN_006f0940 */
uint F_006f0940(unsigned int gen_a0)
{
  GEN_ENTER(0x6f0940u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  char cVar2;
  undefined * this_00;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  char * pcVar6;
  char * pcVar7;
  uint * puVar8;
  int iVar9;
  undefined4 uVar10;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0xf8);
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = this;
  uVar4 = F_00b9a750(*(undefined4 *)((int)this_00 + 8));
  (*(uint *)(gen_frame + 0x10)) = uVar4;
  uVar4 = F_0042a990((int)this + 0x118);
  (*(uint *)(gen_frame + 0x18)) = uVar4;
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = REFG(undefined * PTR32, 0x1323790);
  F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar4);
  F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
  uVar5 = F_00b9a940(*(undefined4 *)((int)this_00 + 8),0xffffffff);
  if (uVar5 == 0) {
    F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
    F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar4);
    F_00b9b150(*(undefined4 *)((int)this_00 + 8),0,0);
    iVar9 = (*(uint *)(gen_frame + 0x10)) + 2;
    F_00a01c40(this_00,iVar9,"className",(*(uint *)(gen_frame + 0x18)));
    F_00a01c80(this_00,iVar9,"referenceCount",0);
    (*(uint *)(gen_frame + 0x10)) = 0;
    do {
      puVar8 = ((uint *)GEN_TOP(((*(uint *)(gen_frame + 0x10)) + *(int *)((int)this + 0x3b8))));
      pcVar6 = ((char *)GEN_TOP(((*puVar8 & 0xffffff) + (int)puVar8)));
      pcVar7 = pcVar6;
      do {
        cVar2 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
      if (pcVar7 != pcVar6 + 1) {
        F_00a01c80(this_00,iVar9,pcVar6,puVar8[1]);
      }
      this = (*(undefined * PTR32 *)(gen_frame + 0xc));
      uVar4 = (*(uint *)(gen_frame + 0x10)) + 8;
      (*(uint *)(gen_frame + 0x10)) = uVar4;
    } while ((int)uVar4 < 800);
    piVar1 = (int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x1c4);
    piVar3 = *(int * PTR32 *)*piVar1;
    (*(undefined * PTR32 *)(gen_frame + 0xc)) = piVar3;
    if (piVar3 != (int *)*piVar1) {
      do {
        uVar10 = *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 0xc);
        uVar4 = F_0042a990((int)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x10);
        F_00a01c80(this_00,iVar9,uVar4,uVar10);
        F_00732c70(&(*(undefined * PTR32 *)(gen_frame + 0xc)));
      } while ((*(undefined * PTR32 *)(gen_frame + 0xc)) != *(undefined * PTR32 *)((int)this + 0x1c4));
    }
    F_00b9bc00(*(undefined4 *)((int)this_00 + 8),(*(uint *)(gen_frame + 0x18)));
    F_00b9a910(*(undefined4 *)((int)this_00 + 8),iVar9);
    if ((*(undefined * PTR32 *)(gen_frame + 0x14)) == (undefined *)0x0) {
      F_00b9b290(*(undefined4 *)((int)this_00 + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
      F_00b9b2f0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
    }
    else {
      F_00b9b290(*(undefined4 *)((int)this_00 + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
      F_00b9ae60(*(undefined4 *)((int)this_00 + 8),(*(undefined * PTR32 *)(gen_frame + 0x14)));
      F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
      F_00b9b290(*(undefined4 *)((int)this_00 + 8),iVar9,"__index");
      F_00b9a910(*(undefined4 *)((int)this_00 + 8),iVar9);
      F_00b9b3d0(*(undefined4 *)((int)this_00 + 8),iVar9);
      F_00b9b2f0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
      F_00a01ad0(this_00,(*(undefined * PTR32 *)(gen_frame + 0x14)));
    }
  }
  else {
    F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
  }
  uVar10 = 0;
  uVar4 = F_0042a990((int)this + 0x464);
  uVar4 = F_00754440((undefined *)((int)this + 0xfc),REFG(undefined * PTR32, 0x132372c),uVar4,uVar10);
  return uVar4;
}

/* ref: FUN_006f0b80 */
uint F_006f0b80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6f0b80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  uint uVar2;
  
  F_0042e430((undefined *)((int)this + 0x3bc),
               (**(uint * PTR32 *)(*param_1 + 4) & 0xffffff) + (int)*(uint * PTR32 *)(*param_1 + 4));
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x314);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0x314) = 0;
  }
  *(undefined4 *)((int)this + 0x310) = 0;
  uVar2 = F_006ebec0(this);
  return uVar2;
}

/* ref: FUN_006f0be0 */
uint F_006f0be0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x6f0be0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  int * this_00;
  int * piVar5;
  undefined * pvVar6;
  uint uVar7;
  
  (*(undefined * PTR32 *)(gen_frame + 0x78)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(int *)(gen_frame + 0x70)) = REFG(int, 0x1379694);
  pvVar6 = (undefined *)0x0;
  if ((REFG(int, 0x1379694) != 0) && (pvVar6 = (undefined *)0x0, (*(uint *)&gen_args[1]) != 0)) {
    (*(uint *)(gen_frame + 0x68)) = (*(uint *)&gen_args[1]) & 0x80000000;
    if (((*(uint *)&gen_args[1]) & 0x80000000) == 0x80000000) {
      this_00 = (int *)F_00748af0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))),(*(uint *)&gen_args[1]));
    }
    else {
      this_00 = (int *)F_006dda70((*(undefined * PTR32 *)&gen_args[0]),(*(uint *)&gen_args[1]));
    }
    pvVar6 = (undefined *)0x0;
    if (this_00 != (int *)0x0) {
      if ((*(int *)&gen_args[2]) == -0x20000000) {
        (*(int * PTR32 *)(gen_frame + 0x74)) = (int *)0x0;
      }
      else {
        piVar5 = (int *)F_00a354d0(&REFG(undefined4, 0x14a31f0),(*(int *)&gen_args[2]),(*(undefined4 *)&gen_args[3]));
        (*(int * PTR32 *)(gen_frame + 0x74)) = piVar5;
      }
      (*(int * PTR32 *)(gen_frame + 0x6c)) = (*(int * PTR32 *)(gen_frame + 0x74));
      pvVar6 = (undefined *)0x0;
      if ((*(int * PTR32 *)(gen_frame + 0x74)) != (int *)0x0) {
        F_006da470((*(undefined * PTR32 *)&gen_args[0]));
        uVar3 = (*(undefined4 *)&gen_args[5]);
        uVar2 = (*(undefined4 *)&gen_args[4]);
        (*(int *)(gen_frame + 0x40)) = 0;
        (*(undefined4 *)(gen_frame + 0x4c)) = 0;
        (*(undefined1 *)(gen_frame + 0x50)) = 0;
        (*(undefined4 *)(gen_frame + 0x54)) = 0;
        (*(undefined1 *)(gen_frame + 0x58)) = 0;
        (*(undefined4 *)(gen_frame + 0x5c)) = 0;
        (*(undefined4 *)(gen_frame + 0x60)) = 0;
        (*(undefined1 *)(gen_frame + 0x64)) = 0;
        ((undefined * PTR32 * PTR32 *)(gen_frame + 0x38))[0] = (*(undefined * PTR32 (*)[1])REFP(0x10b8a5c));
        (*(undefined4 *)(gen_frame + 0x48)) = 0xe0000000;
        if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x238))) == 0) {
          if (((char)(*(undefined4 *)&gen_args[4]) != '\a') && (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x224))) != 0)) {
            uVar7 = F_006d9ec0((*(undefined * PTR32 *)&gen_args[0]));
            if (((char)uVar7 == '\0') && (((*(uint *)&gen_args[6]) & 1) == 0)) {
              return uVar7;
            }
            uVar7 = ((code *)*(gen_code32 *)(*this_00 + 0x210))(this_00,(*(int *)(gen_frame + 0x70)),(*(int * PTR32 *)(gen_frame + 0x74)),uVar2,(*(undefined4 *)&gen_args[5]));
            uVar7 = F_006b9070(((undefined1 *)(gen_frame + 0x8)),(*(uint *)&gen_args[1]),(*(int *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),uVar2,(*(undefined4 *)&gen_args[5]),(*(uint *)&gen_args[6]),uVar7);
            F_0071f280(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x280))),uVar7);
            uVar7 = F_006e33b0((*(undefined * PTR32 *)&gen_args[0]));
            return uVar7;
          }
          uVar7 = ((code *)*(gen_code32 *)(*this_00 + 0x210))(this_00,(*(int *)(gen_frame + 0x70)),(*(int * PTR32 *)(gen_frame + 0x74)),(*(undefined4 *)&gen_args[4]),(*(undefined4 *)&gen_args[5]));
          uVar7 = F_006b9070(((undefined1 *)(gen_frame + 0x8)),(*(uint *)&gen_args[1]),(*(int *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),uVar2,uVar3,(*(uint *)&gen_args[6]),uVar7);
          pvVar6 = (undefined *)F_0071f280(((undefined * PTR32 * PTR32 *)(gen_frame + 0x38)),uVar7);
        }
        else {
          bVar4 = F_006b9110(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x230))),(*(uint *)&gen_args[1]),(*(int *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]),(*(undefined4 *)&gen_args[5]));
          if (bVar4 == 0) {
            uVar7 = ((code *)*(gen_code32 *)(*this_00 + 0x210))(this_00,(*(int *)(gen_frame + 0x70)),(*(int * PTR32 *)(gen_frame + 0x74)),uVar2,uVar3);
            uVar7 = F_006b9070(((undefined1 *)(gen_frame + 0x8)),(*(uint *)&gen_args[1]),(*(int *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),uVar2,uVar3,(*(uint *)&gen_args[6]),uVar7);
            F_0071f280(((undefined * PTR32 * PTR32 *)(gen_frame + 0x38)),uVar7);
          }
          else {
            *(undefined1 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x78)) + 0x250) = (undefined1)(*(uint *)&gen_args[6]);
            F_0071f280(((undefined * PTR32 * PTR32 *)(gen_frame + 0x38)),(int)(*(undefined * PTR32 *)(gen_frame + 0x78)) + 0x230);
            F_006b9180((int)(*(undefined * PTR32 *)(gen_frame + 0x78)) + 0x230);
          }
          pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x78));
          if ((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x78)) + 0x224) != 0) &&
             (pvVar6 = (undefined *)F_00743a80((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x78)) + 0x214)),
             *(char *)((int)pvVar6 + 0x2c) != '\0')) {
            F_0071f280((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x78)) + 0x280),((undefined * PTR32 * PTR32 *)(gen_frame + 0x38)));
            pvVar6 = (undefined *)F_006b9180(((undefined * PTR32 * PTR32 *)(gen_frame + 0x38)));
          }
        }
        if ((*(int *)(gen_frame + 0x40)) != 0) {
          F_006ec1d0((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x78)) + 0x100),this_00,(*(int *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),uVar2,uVar3,(*(uint *)&gen_args[6]));
          uVar7 = ((code *)*(gen_code32 *)(*this_00 + 0x218))(this_00,(*(int * PTR32 *)(gen_frame + 0x74)),uVar2,uVar3);
          F_00536cc0(&REFG(undefined4, 0x1375bc0),uVar7,(*(uint *)&gen_args[1]),(*(int *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),uVar2,uVar3,(*(uint *)&gen_args[6]));
          F_007513d0((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x78)) + 0x214),((undefined * PTR32 * PTR32 *)(gen_frame + 0x38)));
          ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x74)) + 0x54))((*(int * PTR32 *)(gen_frame + 0x74)),1);
          F_0074a590((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x78)) + 0x6c0),&(*(int *)&gen_args[2]),&(*(int * PTR32 *)(gen_frame + 0x6c)));
          uVar7 = ((code *)*(gen_code32 *)(*this_00 + 0x214))(this_00,(*(int *)(gen_frame + 0x70)),(*(int * PTR32 *)(gen_frame + 0x74)),uVar2,uVar3);
          iVar1 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x78)) + 0x260);
          if ((iVar1 == 0) || (iVar1 == 0xf)) {
            if (uVar7 != 0) {
              *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x78)) + 0x260) = uVar7;
            }
          }
          else if ((iVar1 == 0x10) && (uVar7 == 0x11)) {
            *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x78)) + 0x260) = 0x11;
          }
          uVar7 = F_006df850(this_00,(*(int * PTR32 *)(gen_frame + 0x74)),uVar2,uVar3);
          if ((*(uint *)(gen_frame + 0x68)) == 0x80000000) {
            *(undefined1 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x78)) + 0xc0) = 0;
            return uVar7;
          }
          pvVar6 = (undefined *)F_006eb2d0((*(undefined * PTR32 *)(gen_frame + 0x78)),(*(uint *)&gen_args[1]),(*(int *)(gen_frame + 0x70)));
        }
      }
    }
  }
  return (uint)pvVar6;
}

/* ref: FUN_006f11c0 */
uint F_006f11c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6f11c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xb70];
  int * piVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint * puVar6;
  undefined * this_00;
  int iVar7;
  uint uVar8;
  uint * puVar9;
  undefined1 * in_ecx;
  uint uVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  undefined * PTR32 * ppuVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  (*(uint *)(gen_frame + 0xb68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xb6c);
  piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  in_ecx = ((undefined1 *)(gen_frame + 0x68));
  iVar7 = 0x1f;
  do {
    F_0042b630(in_ecx);
    in_ecx = in_ecx + 0x54;
    iVar7 = iVar7 + -1;
  } while (-1 < iVar7);
  uVar8 = -(uint)(REFG(undefined4, 0x13238f8) != 1);
  uVar10 = 0;
  (*(byte *)(gen_frame + 0x13)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  if (REFG(undefined4, 0x13238f8) != 0) {
    (*(undefined1 * PTR32 *)(gen_frame + 0x8)) = ((undefined1 *)(gen_frame + 0x68));
    do {
      piVar1 = ((int *)GEN_TOP((&REFG(undefined4, 0x1323878))[uVar10]));
      ((code *)*(gen_code32 *)(*piVar1 + 0x1b8))(piVar1,(*(undefined1 * PTR32 *)(gen_frame + 0x8)));
      uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x1c0))(piVar1,REFG(undefined4, 0x1323874));
      ((uint *)(gen_frame + 0xae8))[(int)(uVar10)] = uVar4;
      uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x1cc))(piVar1,REFG(undefined4, 0x1323874));
      bVar2 = (byte)(uVar4 >> 8);
      if ((*(byte *)(gen_frame + 0x13)) < bVar2) {
        (*(int *)(gen_frame + 0x4)) = 1;
        uVar8 = uVar10;
        (*(byte *)(gen_frame + 0x13)) = bVar2;
      }
      else if (bVar2 == (*(byte *)(gen_frame + 0x13))) {
        (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + 1;
      }
      (*(undefined1 * PTR32 *)(gen_frame + 0x8)) = (*(undefined1 * PTR32 *)(gen_frame + 0x8)) + 0x54;
      uVar10 = uVar10 + 1;
    } while (uVar10 < REFG(undefined4, 0x13238f8));
  }
  if ((REFG(undefined4, 0x13238f8) == 1) || ((*(int *)(gen_frame + 0x4)) == 1)) {
    F_006f0f30(this,uVar8);
  }
  else {
    puVar5 = (undefined4 *)F_00a5feb0(REFG(undefined4, 0x1379694));
    *(undefined4 *)((int)this + 0x1c0) = *puVar5;
    *(undefined4 *)((int)this + 0x1c4) = puVar5[1];
    *(undefined4 *)((int)this + 0x1c8) = puVar5[2];
    iVar7 = REFG(undefined4, 0x13238f8) * 3;
    uVar8 = iVar7 + 9;
    uVar10 = -(uint)((int)((ulonglong)uVar8 * 8 >> 0x20) != 0) | (uint)((ulonglong)uVar8 * 8);
    puVar6 = (uint *)F_00406bb0(-(uint)(0xfffffffb < uVar10) | uVar10 + 4,0,0);
    if (puVar6 == (uint *)0x0) {
      puVar9 = (uint *)0x0;
    }
    else {
      puVar9 = puVar6 + 1;
      *puVar6 = uVar8;
      puVar6 = puVar9;
      for (iVar7 = iVar7 + 8; -1 < iVar7; iVar7 = iVar7 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 2;
      }
    }
    F_005a2710(puVar9 + 6,6);
    uVar10 = 0;
    puVar9[7] = (uint)&REFG(undefined, 0x10b3a1b);
    if (REFG(undefined4, 0x13238f8) != 0) {
      (*(undefined1 * PTR32 *)(gen_frame + 0x8)) = ((undefined1 *)(gen_frame + 0x68));
      puVar6 = puVar9 + 0xf;
      do {
        F_005a2710(puVar6 + -3,3);
        puVar6[-2] = ((uint *)(gen_frame + 0xae8))[(int)(uVar10)];
        uVar4 = F_0042a990((*(undefined1 * PTR32 *)(gen_frame + 0x8)));
        F_005a2710(puVar6 + -1,6);
        *puVar6 = uVar4;
        F_005a2710(puVar6 + 1,3);
        (*(undefined1 * PTR32 *)(gen_frame + 0x8)) = (*(undefined1 * PTR32 *)(gen_frame + 0x8)) + 0x54;
        puVar6[2] = 0;
        uVar10 = uVar10 + 1;
        puVar6 = puVar6 + 6;
      } while (uVar10 < REFG(undefined4, 0x13238f8));
    }
    F_0042b630(((undefined1 *)(gen_frame + 0x14)));
    F_00ab0230(0x19029,((undefined1 *)(gen_frame + 0x14)));
    F_005a2710(puVar9 + (uVar10 * 3 + 6) * 2,3);
    (puVar9 + (uVar10 * 3 + 6) * 2)[1] = 0;
    uVar4 = F_0042a990(((undefined1 *)(gen_frame + 0x14)));
    F_005a2710(puVar9 + uVar10 * 6 + 0xe,6);
    puVar9[uVar10 * 6 + 0xf] = uVar4;
    F_005a2710(puVar9 + uVar10 * 6 + 0x10,3);
    uVar16 = 4;
    uVar15 = 0;
    uVar14 = 0;
    ppuVar13 = &REFG(undefined * PTR32, 0x1323870);
    puVar9[uVar10 * 6 + 0x11] = 0;
    uVar12 = 0x28;
    puVar6 = puVar9;
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3)));
    REFG(undefined4, 0x1323904) = F_008668b0(this_00,uVar12,uVar8,puVar6,ppuVar13,uVar14,uVar15,uVar16);
    if (puVar9 != (uint *)0x0) {
      uVar8 = puVar9[-1];
      puVar6 = puVar9 + uVar8 * 2;
      while (uVar8 = uVar8 - 1, -1 < (int)uVar8) {
        puVar6 = puVar6 + -2;
        F_005a2670(puVar6);
      }
      F_00406b30(puVar9 + -1);
    }
    F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  }
  puVar6 = ((uint *)(gen_frame + 0xae8));
  iVar7 = 0x1f;
  do {
    puVar6 = puVar6 + -0x15;
    uVar11 = F_0042c880(puVar6);
    iVar7 = iVar7 + -1;
  } while (-1 < iVar7);
  F_00c47745((*(uint *)(gen_frame + 0xb68)) ^ (uint)(uint)(gen_frame + 0xb6c));
  return (uint)uVar11;
}

/* ref: FUN_006f1520 */
uint F_006f1520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f1520u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined4 uVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd4))) = 0;
  *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd0))) = 0;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd2))) = 0;
  puVar2 = (undefined4 *)F_00406b90(0x14,0,0);
  uVar1 = REFG(float, 0x1087f04);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = (*(undefined4 * PTR32 *)&gen_args[1]);
    puVar2[2] = uVar1;
    uVar1 = REFG(float, 0x1094838);
    *puVar2 = (*(undefined * PTR32 (*)[6])REFP(0x10b8c74));
    puVar2[3] = uVar1;
    *(undefined2 *)(puVar2 + 4) = 0;
    (*(undefined4 * PTR32 *)&gen_args[1]) = puVar2;
    uVar3 = F_00754690(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))),&(*(undefined4 * PTR32 *)&gen_args[1]));
    return uVar3;
  }
  (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)0x0;
  uVar3 = F_00754690(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))),&(*(undefined4 * PTR32 *)&gen_args[1]));
  return uVar3;
}

/* ref: FUN_006f15b0 */
uint F_006f15b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6f15b0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)F_00406b90(0x40c,0,0);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[0x101] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6c)));
    *(undefined1 *)(puVar1 + 0x100) = (*((undefined1 *)GEN_TOP(((char *)&(*(undefined4 * PTR32 *)&gen_args[2]) + 0))));
    *puVar1 = (*(undefined * PTR32 (*)[6])REFP(0x10b8c90));
    *(undefined2 *)(puVar1 + 0x102) = 0;
    F_00c46aa0(puVar1 + 1,(*(undefined4 *)&gen_args[1]),((uint)(*(undefined4 * PTR32 *)&gen_args[2]) & 0xff) * 4);
    (*(undefined4 * PTR32 *)&gen_args[2]) = puVar1;
    uVar2 = F_00754690(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))),&(*(undefined4 * PTR32 *)&gen_args[2]));
    return uVar2;
  }
  (*(undefined4 * PTR32 *)&gen_args[2]) = (undefined4 *)0x0;
  uVar2 = F_00754690(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))),&(*(undefined4 * PTR32 *)&gen_args[2]));
  return uVar2;
}

/* ref: FUN_006f1640 */
uint F_006f1640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f1640u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  float10 fVar3;
  
  puVar1 = (undefined4 *)F_00406b90(8,0,0);
  if (puVar1 != (undefined4 *)0x0) {
    fVar3 = (float10)(int)(*(undefined4 * PTR32 *)&gen_args[1]);
    *puVar1 = (*(undefined * PTR32 (*)[6])REFP(0x10b8cc8));
    if ((int)(*(undefined4 * PTR32 *)&gen_args[1]) < 0) {
      fVar3 = fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    puVar1[1] = (undefined4)gen_fl2bits((float)(fVar3 * (float10)*(double *)&REFG(undefined, 0x10ba6f8)));
    (*(undefined4 * PTR32 *)&gen_args[1]) = puVar1;
    uVar2 = F_00754690(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))),&(*(undefined4 * PTR32 *)&gen_args[1]));
    return uVar2;
  }
  (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)0x0;
  uVar2 = F_00754690(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))),&(*(undefined4 * PTR32 *)&gen_args[1]));
  return uVar2;
}

/* ref: FUN_006f16b0 */
uint F_006f16b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6f16b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  uint uVar2;
  
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = this;
  puVar1 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (*(undefined * PTR32 (*)[6])REFP(0x10b8ce4));
    (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar1;
    uVar2 = F_00754690((undefined *)((int)this + 0x4c),&(*(undefined4 * PTR32 *)(gen_frame + 0x8)));
    return uVar2;
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (undefined4 *)0x0;
  uVar2 = F_00754690((undefined *)((int)this + 0x4c),&(*(undefined4 * PTR32 *)(gen_frame + 0x8)));
  return uVar2;
}

/* ref: FUN_006f1700 */
uint F_006f1700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6f1700u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)F_00406b90(0xc0,0,0);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (*(undefined * PTR32 (*)[6])REFP(0x10b8b94));
    F_0071edf0(puVar1 + 2);
    puVar1[0x26] = (*(undefined4 *)&gen_args[2]);
    puVar1[0x24] = 0;
    puVar1[0x25] = (*(undefined4 * PTR32 *)&gen_args[1]);
    puVar1[0x27] = 3;
    puVar1[0x2c] = 0;
    puVar1[0x2d] = 0;
    puVar1[0x2e] = 0;
    *(undefined2 *)(puVar1 + 0x2f) = 1;
    (*(undefined4 * PTR32 *)&gen_args[1]) = puVar1;
    uVar2 = F_00754690(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))),&(*(undefined4 * PTR32 *)&gen_args[1]));
    return uVar2;
  }
  (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)0x0;
  uVar2 = F_00754690(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))),&(*(undefined4 * PTR32 *)&gen_args[1]));
  return uVar2;
}

/* ref: FUN_006f17a0 */
uint F_006f17a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4, float gen_a5)
{
  GEN_ENTER(0x6f17a0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  memcpy(&gen_args[3], &gen_a3, sizeof gen_a3);
  gen_args[4] = gen_a4;
  memcpy(&gen_args[5], &gen_a5, sizeof gen_a5);
  uint uVar1;
  
  uVar1 = F_00406b90(0xc0,0,0);
  if (uVar1 != 0) {
    (*(float *)&gen_args[5]) = gen_bits2f(F_006bb3a0(uVar1,3,(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(float *)&gen_args[3]),(*(undefined4 *)&gen_args[4]),(*(float *)&gen_args[5])));
    uVar1 = F_00754690((undefined *)((*(int *)&gen_args[0]) + 0x4c),&(*(float *)&gen_args[5]));
    return uVar1;
  }
  (*(float *)&gen_args[5]) = 0.0;
  uVar1 = F_00754690((undefined *)((*(int *)&gen_args[0]) + 0x4c),&(*(float *)&gen_args[5]));
  return uVar1;
}

/* ref: FUN_006f1810 */
uint F_006f1810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6f1810u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)F_00406b90(0xc0,0,0);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (*(undefined * PTR32 (*)[6])REFP(0x10b8b94));
    F_0071edf0(puVar1 + 2);
    puVar1[0x26] = (*(undefined4 *)&gen_args[2]);
    puVar1[0x24] = 0;
    puVar1[0x25] = (*(undefined4 * PTR32 *)&gen_args[1]);
    puVar1[0x27] = 7;
    puVar1[0x2c] = 0;
    puVar1[0x2d] = 0;
    puVar1[0x2e] = 0;
    *(undefined2 *)(puVar1 + 0x2f) = 1;
    (*(undefined4 * PTR32 *)&gen_args[1]) = puVar1;
    uVar2 = F_00754690(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))),&(*(undefined4 * PTR32 *)&gen_args[1]));
    return uVar2;
  }
  (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)0x0;
  uVar2 = F_00754690(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))),&(*(undefined4 * PTR32 *)&gen_args[1]));
  return uVar2;
}

/* ref: FUN_006f18b0 */
uint F_006f18b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4, float gen_a5)
{
  GEN_ENTER(0x6f18b0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  memcpy(&gen_args[3], &gen_a3, sizeof gen_a3);
  gen_args[4] = gen_a4;
  memcpy(&gen_args[5], &gen_a5, sizeof gen_a5);
  uint uVar1;
  
  uVar1 = F_00406b90(0xc0,0,0);
  if (uVar1 != 0) {
    (*(float *)&gen_args[5]) = gen_bits2f(F_006bb3a0(uVar1,7,(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(float *)&gen_args[3]),(*(undefined4 *)&gen_args[4]),(*(float *)&gen_args[5])));
    uVar1 = F_00754690((undefined *)((*(int *)&gen_args[0]) + 0x4c),&(*(float *)&gen_args[5]));
    return uVar1;
  }
  (*(float *)&gen_args[5]) = 0.0;
  uVar1 = F_00754690((undefined *)((*(int *)&gen_args[0]) + 0x4c),&(*(float *)&gen_args[5]));
  return uVar1;
}

/* ref: FUN_006f1920 */
uint F_006f1920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f1920u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  __time64_t _Var3;
  
  puVar1 = (undefined4 *)F_00406b90(0x18,0,0);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (*(undefined * PTR32 (*)[6])REFP(0x10b8bb0));
    puVar1[1] = 0;
    puVar1[2] = (*(undefined4 * PTR32 *)&gen_args[1]);
    _Var3 = F_00c4b7c2((__time64_t *)0x0);
    *(__time64_t *)(puVar1 + 4) = _Var3;
    (*(undefined4 * PTR32 *)&gen_args[1]) = puVar1;
    uVar2 = F_00754690(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))),&(*(undefined4 * PTR32 *)&gen_args[1]));
    return uVar2;
  }
  (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)0x0;
  uVar2 = F_00754690(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))),&(*(undefined4 * PTR32 *)&gen_args[1]));
  return uVar2;
}

/* ref: FUN_006f1990 */
uint F_006f1990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f1990u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  __time64_t _Var3;
  
  puVar1 = (undefined4 *)F_00406b90(0x18,0,0);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (*(undefined * PTR32 (*)[6])REFP(0x10b8bcc));
    puVar1[1] = 0;
    puVar1[2] = (*(undefined4 * PTR32 *)&gen_args[1]);
    _Var3 = F_00c4b7c2((__time64_t *)0x0);
    *(__time64_t *)(puVar1 + 4) = _Var3;
    (*(undefined4 * PTR32 *)&gen_args[1]) = puVar1;
    uVar2 = F_00754690(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))),&(*(undefined4 * PTR32 *)&gen_args[1]));
    return uVar2;
  }
  (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)0x0;
  uVar2 = F_00754690(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))),&(*(undefined4 * PTR32 *)&gen_args[1]));
  return uVar2;
}

/* ref: FUN_006f1c40 */
byte F_006f1c40(unsigned int gen_a0)
{
  GEN_ENTER(0x6f1c40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = this;
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xa0))(piVar1);
  if ((uVar2 & 8) == 0) {
    return 0;
  }
  puVar3 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = (*(undefined * PTR32 (*)[6])REFP(0x10b8a80));
    (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar3;
    F_00754690((undefined *)((int)this + 0x4c),&(*(undefined4 * PTR32 *)(gen_frame + 0x8)));
    return 1;
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (undefined4 *)0x0;
  F_00754690((undefined *)((int)this + 0x4c),&(*(undefined4 * PTR32 *)(gen_frame + 0x8)));
  return 1;
}

/* ref: FUN_006f1d30 */
uint F_006f1d30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6f1d30u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)F_00406b90(0x30,0,0);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = (int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c;
    puVar1[10] = (*(undefined4 * PTR32 *)&gen_args[2]);
    *puVar1 = (*(undefined * PTR32 (*)[6])REFP(0x10b8be8));
    puVar1[0xb] = 0;
    F_00c46aa0(puVar1 + 2,(*(undefined4 *)&gen_args[1]),(int)(*(undefined4 * PTR32 *)&gen_args[2]) * 4);
    (*(undefined4 * PTR32 *)&gen_args[2]) = puVar1;
    uVar2 = F_00754690(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))),&(*(undefined4 * PTR32 *)&gen_args[2]));
    return uVar2;
  }
  (*(undefined4 * PTR32 *)&gen_args[2]) = (undefined4 *)0x0;
  uVar2 = F_00754690(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))),&(*(undefined4 * PTR32 *)&gen_args[2]));
  return uVar2;
}

/* ref: FUN_006f1e30 */
byte F_006f1e30(unsigned int gen_a0)
{
  GEN_ENTER(0x6f1e30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  undefined4 in_ecx;
  undefined4 * puVar2;
  
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = this;
  if (REFG(int, 0x1375bbc) != 1) {
    F_00b70d10(&REFG(undefined4, 0x1375b90),1);
  }
  if (REFG(int, 0x1375bbc) == -1) {
    in_ecx = 0;
  }
  else {
    in_ecx = (&REFG(undefined4, 0x1375b90))[REFG(int, 0x1375bbc)];
  }
  bVar1 = F_00b6b550(in_ecx);
  if (bVar1 == 0) {
    return 0;
  }
  puVar2 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = (*(undefined * PTR32 (*)[6])REFP(0x10b8a9c));
    (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar2;
    F_00754690((undefined *)((int)this + 0x4c),&(*(undefined4 * PTR32 *)(gen_frame + 0x8)));
    return 1;
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (undefined4 *)0x0;
  F_00754690((undefined *)((int)this + 0x4c),&(*(undefined4 * PTR32 *)(gen_frame + 0x8)));
  return 1;
}

/* ref: FUN_006f1ec0 */
uint F_006f1ec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x6f1ec0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)F_00406b90(0x70,0,0);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (*(undefined * PTR32 (*)[6])REFP(0x10b8c04));
    F_0042b630(puVar1 + 1);
    puVar1[0x16] = (*(undefined4 *)&gen_args[1]);
    puVar1[0x17] = (*(undefined4 *)&gen_args[3]);
    puVar1[0x19] = (*(undefined4 *)&gen_args[5]);
    puVar1[0x18] = (*(undefined4 *)&gen_args[4]);
    puVar1[0x1a] = (*(undefined4 *)&gen_args[6]);
    *(undefined2 *)(puVar1 + 0x1b) = 0;
    *(undefined1 *)((int)puVar1 + 0x6e) = (*((undefined1 *)GEN_TOP(((char *)&(*(undefined4 * PTR32 *)&gen_args[2]) + 0))));
    *(undefined1 *)((int)puVar1 + 0x6f) = 0;
    (*(undefined4 * PTR32 *)&gen_args[2]) = puVar1;
    uVar2 = F_00754690(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))),&(*(undefined4 * PTR32 *)&gen_args[2]));
    return uVar2;
  }
  (*(undefined4 * PTR32 *)&gen_args[2]) = (undefined4 *)0x0;
  uVar2 = F_00754690(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))),&(*(undefined4 * PTR32 *)&gen_args[2]));
  return uVar2;
}

/* ref: FUN_006f1f50 */
uint F_006f1f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f1f50u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)F_00406b90(8,0,0);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = (*(undefined4 * PTR32 *)&gen_args[1]);
    *puVar1 = (*(undefined * PTR32 (*)[6])REFP(0x10b8c20));
    (*(undefined4 * PTR32 *)&gen_args[1]) = puVar1;
    uVar2 = F_00754690(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))),&(*(undefined4 * PTR32 *)&gen_args[1]));
    return uVar2;
  }
  (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)0x0;
  uVar2 = F_00754690(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))),&(*(undefined4 * PTR32 *)&gen_args[1]));
  return uVar2;
}

/* ref: FUN_006f1fa0 */
uint F_006f1fa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6f1fa0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 uVar1;
  undefined4 * puVar2;
  undefined * puVar3;
  uint uVar4;
  
  puVar2 = (undefined4 *)F_00406b90(100,0,0);
  uVar1 = REFG(float, 0x1087f04);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[3] = (*(undefined4 * PTR32 *)&gen_args[1]);
    *puVar2 = (*(undefined * PTR32 (*)[6])REFP(0x10b8c3c));
    *(undefined2 *)(puVar2 + 1) = 0;
    puVar2[2] = uVar1;
    puVar3 = (*(undefined * PTR32 *)&gen_args[2]);
    if ((*(undefined * PTR32 *)&gen_args[2]) == (undefined *)0x0) {
      puVar3 = &REFG(undefined, 0x10b3a4a);
    }
    F_0042cc20(puVar2 + 4,puVar3,REFG(undefined4, 0x108cc50));
    (*(undefined4 * PTR32 *)&gen_args[1]) = puVar2;
    uVar4 = F_00754690(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))),&(*(undefined4 * PTR32 *)&gen_args[1]));
    return uVar4;
  }
  (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)0x0;
  uVar4 = F_00754690(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))),&(*(undefined4 * PTR32 *)&gen_args[1]));
  return uVar4;
}

/* ref: FUN_006f2030 */
uint F_006f2030(unsigned int gen_a0)
{
  GEN_ENTER(0x6f2030u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  uint uVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  pvVar1 = (undefined *)F_00406b90(0x10,0,0);
  if (pvVar1 != (undefined *)0x0) {
    pvVar1 = (undefined *)F_006c9c80(pvVar1);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar1;
    uVar2 = F_00754690((undefined *)((int)this + 0x4c),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
    return uVar2;
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  uVar2 = F_00754690((undefined *)((int)this + 0x4c),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  return uVar2;
}

/* ref: FUN_006f2080 */
uint F_006f2080(unsigned int gen_a0)
{
  GEN_ENTER(0x6f2080u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  uint uVar2;
  
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = this;
  puVar1 = (undefined4 *)F_00406b90(8,0,0);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (*(undefined * PTR32 (*)[6])REFP(0x10b8c58));
    *(undefined1 *)(puVar1 + 1) = 0;
    (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar1;
    uVar2 = F_00754690((undefined *)((int)this + 0x4c),&(*(undefined4 * PTR32 *)(gen_frame + 0x8)));
    return uVar2;
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (undefined4 *)0x0;
  uVar2 = F_00754690((undefined *)((int)this + 0x4c),&(*(undefined4 * PTR32 *)(gen_frame + 0x8)));
  return uVar2;
}

/* ref: FUN_006f20d0 */
byte F_006f20d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6f20d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  undefined4 in_ecx;
  undefined4 * puVar2;
  
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = this;
  if (REFG(int, 0x1375bbc) != 1) {
    F_00b70d10(&REFG(undefined4, 0x1375b90),1);
  }
  if (REFG(int, 0x1375bbc) == -1) {
    in_ecx = 0;
  }
  else {
    in_ecx = (&REFG(undefined4, 0x1375b90))[REFG(int, 0x1375bbc)];
  }
  bVar1 = F_00b6b580(in_ecx);
  if (bVar1 == 0) {
    return 0;
  }
  puVar2 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = (*(undefined * PTR32 (*)[6])REFP(0x10b8ab8));
    (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar2;
    F_00754690((undefined *)((int)this + 0x4c),&(*(undefined4 * PTR32 *)(gen_frame + 0x8)));
    return 1;
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (undefined4 *)0x0;
  F_00754690((undefined *)((int)this + 0x4c),&(*(undefined4 * PTR32 *)(gen_frame + 0x8)));
  return 1;
}

/* ref: FUN_006f2160 */
byte F_006f2160(unsigned int gen_a0)
{
  GEN_ENTER(0x6f2160u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  undefined4 in_ecx;
  undefined4 * puVar2;
  
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = this;
  if (REFG(int, 0x1375bbc) != 1) {
    F_00b70d10(&REFG(undefined4, 0x1375b90),1);
  }
  if (REFG(int, 0x1375bbc) == -1) {
    in_ecx = 0;
  }
  else {
    in_ecx = (&REFG(undefined4, 0x1375b90))[REFG(int, 0x1375bbc)];
  }
  bVar1 = F_00b6b5b0(in_ecx);
  if (bVar1 == 0) {
    return 0;
  }
  puVar2 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = (*(undefined * PTR32 (*)[6])REFP(0x10b8ad4));
    (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar2;
    F_00754690((undefined *)((int)this + 0x4c),&(*(undefined4 * PTR32 *)(gen_frame + 0x8)));
    return 1;
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (undefined4 *)0x0;
  F_00754690((undefined *)((int)this + 0x4c),&(*(undefined4 * PTR32 *)(gen_frame + 0x8)));
  return 1;
}

/* ref: FUN_006f21f0 */
byte F_006f21f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6f21f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  undefined4 in_ecx;
  undefined4 * puVar2;
  
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = this;
  if (REFG(int, 0x1375bbc) != 1) {
    F_00b70d10(&REFG(undefined4, 0x1375b90),1);
  }
  if (REFG(int, 0x1375bbc) == -1) {
    in_ecx = 0;
  }
  else {
    in_ecx = (&REFG(undefined4, 0x1375b90))[REFG(int, 0x1375bbc)];
  }
  bVar1 = F_00b6b5d0(in_ecx);
  if (bVar1 == 0) {
    return 0;
  }
  puVar2 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = (*(undefined * PTR32 (*)[6])REFP(0x10b8af0));
    (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar2;
    F_00754690((undefined *)((int)this + 0x4c),&(*(undefined4 * PTR32 *)(gen_frame + 0x8)));
    return 1;
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (undefined4 *)0x0;
  F_00754690((undefined *)((int)this + 0x4c),&(*(undefined4 * PTR32 *)(gen_frame + 0x8)));
  return 1;
}

/* ref: FUN_006f2490 */
uint F_006f2490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6f2490u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)F_00406b90(0x10,0,0);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = (*(undefined4 *)&gen_args[1]);
    puVar1[2] = (*(undefined4 *)&gen_args[2]);
    *(undefined1 *)(puVar1 + 3) = (*((undefined1 *)GEN_TOP(((char *)&(*(undefined4 * PTR32 *)&gen_args[3]) + 0))));
    *puVar1 = (*(undefined * PTR32 (*)[6])REFP(0x10b8b44));
    *(undefined1 *)((int)puVar1 + 0xd) = 0;
    (*(undefined4 * PTR32 *)&gen_args[3]) = puVar1;
    uVar2 = F_00754690(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))),&(*(undefined4 * PTR32 *)&gen_args[3]));
    return uVar2;
  }
  (*(undefined4 * PTR32 *)&gen_args[3]) = (undefined4 *)0x0;
  uVar2 = F_00754690(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))),&(*(undefined4 * PTR32 *)&gen_args[3]));
  return uVar2;
}

/* ref: FUN_006f24f0 */
uint F_006f24f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6f24f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  uint uVar2;
  
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = this;
  puVar1 = (undefined4 *)F_00406b90(0x10,0,0);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (*(undefined * PTR32 (*)[6])REFP(0x10b8b60));
    puVar1[1] = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
    (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar1;
    uVar2 = F_00754690((undefined *)((int)this + 0x4c),&(*(undefined4 * PTR32 *)(gen_frame + 0x8)));
    return uVar2;
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (undefined4 *)0x0;
  uVar2 = F_00754690((undefined *)((int)this + 0x4c),&(*(undefined4 * PTR32 *)(gen_frame + 0x8)));
  return uVar2;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf59 */
uint F_006f2550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f2550u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  float10 fVar6;
  
  pvVar1 = *(undefined * PTR32 *)(param_1 + 4);
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = pvVar1;
  F_00a02210(((byte *)(gen_frame + 0x4)),param_2);
  uVar2 = F_00a019d0(((byte *)(gen_frame + 0x4)));
  if (uVar2 == 3) {
    uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),2);
    uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),3);
    F_006f1700(pvVar1,uVar2,uVar3);
  }
  else {
    if (uVar2 != 5) {
      F_00a02240(((byte *)(gen_frame + 0x4)));
      return 0;
    }
    uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),2);
    uVar3 = F_00a01d20(((byte *)(gen_frame + 0x4)),3);
    piVar4 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),3,uVar3);
    pvVar1 = *(undefined * PTR32 *)(*piVar4 + 4);
    uVar3 = F_00a5feb0(pvVar1);
    fVar6 = F_00a01dd0(((byte *)(gen_frame + 0x4)),5);
    (*(float *)(gen_frame + 0x28)) = (float)fVar6;
    uVar5 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),4);
    param_2 = *(uint *)((int)pvVar1 + 0xb0);
    if ((char)uVar5 == '\x04') {
      param_2 = *(uint *)((int)pvVar1 + 0x20);
      uVar5 = 0;
    }
    F_006f17a0((*(undefined * PTR32 *)(gen_frame + 0x24)),uVar2,uVar3,GEN_TOF(gen_bits2f(param_2)),uVar5 & 0xff,(*(float *)(gen_frame + 0x28)));
  }
  uVar2 = F_00a02290(((byte *)(gen_frame + 0x4)),0);
  F_00a02240(((byte *)(gen_frame + 0x4)));
  return uVar2;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf60 */
uint F_006f2670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f2670u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this;
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  int * piVar3;
  float10 fVar4;
  
  this = *(undefined * PTR32 *)(param_1 + 4);
  F_00a02210(((byte *)(gen_frame + 0x4)),param_2);
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),2);
  (*(uint *)(gen_frame + 0x24)) = uVar1;
  uVar2 = F_00a019d0(((byte *)(gen_frame + 0x4)));
  if (uVar2 == 3) {
    uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),3);
    F_006f1810(this,uVar1,uVar2);
  }
  else {
    if (uVar2 != 5) {
      F_00a02240(((byte *)(gen_frame + 0x4)));
      return 0;
    }
    uVar1 = F_00a01d20(((byte *)(gen_frame + 0x4)),3);
    piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),3,uVar1);
    this_00 = *(undefined * PTR32 *)(*piVar3 + 4);
    uVar1 = F_00a5feb0(this_00);
    fVar4 = F_00a01dd0(((byte *)(gen_frame + 0x4)),5);
    (*(float *)(gen_frame + 0x28)) = (float)fVar4;
    uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),4);
    param_2 = *(uint *)((int)this_00 + 0xb0);
    if ((char)uVar2 == '\x04') {
      param_2 = *(uint *)((int)this_00 + 0x20);
      uVar2 = 0;
    }
    F_006f18b0(this,(*(uint *)(gen_frame + 0x24)),uVar1,GEN_TOF(gen_bits2f(param_2)),uVar2 & 0xff,(*(float *)(gen_frame + 0x28)));
  }
  uVar1 = F_00a02290(((byte *)(gen_frame + 0x4)),0);
  F_00a02240(((byte *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf61 */
uint F_006f2780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f2780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  F_006f1990(*(undefined * PTR32 *)(this + 4),uVar1);
  uVar1 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return uVar1;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf62 */
uint F_006f27d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f27d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  F_006f1920(*(undefined * PTR32 *)(this + 4),uVar1);
  uVar1 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return uVar1;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf72 */
uint F_006f2820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f2820u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  uint * this_00;
  undefined4 * PTR32 * ppuVar1;
  undefined4 * PTR32 * ppuVar2;
  uint uVar3;
  undefined4 * puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  F_00a02210(((byte *)(gen_frame + 0x4)),param_1);
  iVar7 = 0;
  iVar6 = 2;
  uVar3 = F_00a019d0(((byte *)(gen_frame + 0x4)));
  if (1 < (int)uVar3) {
    do {
      uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),iVar6);
      ((uint *)(gen_frame + 0x28))[(int)(iVar7)] = uVar3;
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 1;
      uVar3 = F_00a019d0(((byte *)(gen_frame + 0x4)));
    } while (iVar6 <= (int)uVar3);
  }
  iVar6 = *(int *)(this + 4);
  puVar4 = (undefined4 *)F_00406b90(0x30,0,0);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4[1] = iVar6 + 0x3c;
    *puVar4 = (*(undefined * PTR32 (*)[6])REFP(0x10b8be8));
    puVar4[10] = iVar7;
    puVar4[0xb] = 0;
    F_00c46aa0(puVar4 + 2,((uint *)(gen_frame + 0x28)),iVar7 * 4);
  }
  ppuVar1 = *(undefined4 * PTR32 * PTR32 *)(iVar6 + 0x50);
  this_00 = (uint *)(iVar6 + 0x4c);
  (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = puVar4;
  if (&(*(undefined4 * PTR32 *)(gen_frame + 0x24)) < ppuVar1) {
    ppuVar2 = (undefined4 * PTR32 *)*this_00;
    if (ppuVar2 <= &(*(undefined4 * PTR32 *)(gen_frame + 0x24))) {
      if (ppuVar1 == *(undefined4 * PTR32 * PTR32 *)(iVar6 + 0x54)) {
        iVar7 = (int)ppuVar1 - (int)((int)(uintptr_t)ppuVar2) >> 2;
        if (iVar7 == -1) {
                    
          F_00c4579a("vector<T> too long");
        }
        uVar5 = iVar7 + 1;
        uVar3 = (int)*(undefined4 * PTR32 * PTR32 *)(iVar6 + 0x54) - (int)((int)(uintptr_t)ppuVar2) >> 2;
        if (uVar3 < uVar5) {
          if (-(uVar3 >> 1) - 1 < uVar3) {
            uVar3 = 0;
          }
          else {
            uVar3 = uVar3 + (uVar3 >> 1);
          }
          if (uVar3 < uVar5) {
            uVar3 = uVar5;
          }
          F_00751140(this_00,uVar3);
        }
      }
      if (*(undefined4 * PTR32 *)(iVar6 + 0x50) != (undefined4 *)0x0) {
        **(undefined4 * PTR32 *)(iVar6 + 0x50) =
             *((undefined4 *)GEN_TOP((*this_00 + ((int)&(*(undefined4 * PTR32 *)(gen_frame + 0x24)) - (int)((int)(uintptr_t)ppuVar2) >> 2) * 4)));
      }
      goto LAB_006f297f;
    }
  }
  if (ppuVar1 == *(undefined4 * PTR32 * PTR32 *)(iVar6 + 0x54)) {
    iVar7 = (int)((int)ppuVar1 - *this_00) >> 2;
    if (iVar7 == -1) {
                    
      F_00c4579a("vector<T> too long");
    }
    uVar5 = iVar7 + 1;
    uVar3 = (int)((int)*(undefined4 * PTR32 * PTR32 *)(iVar6 + 0x54) - *this_00) >> 2;
    if (uVar3 < uVar5) {
      if (-(uVar3 >> 1) - 1 < uVar3) {
        uVar3 = 0;
      }
      else {
        uVar3 = uVar3 + (uVar3 >> 1);
      }
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
      F_00751140(this_00,uVar3);
    }
  }
  if (*(undefined4 * PTR32 *)(iVar6 + 0x50) != (undefined4 *)0x0) {
    **(undefined4 * PTR32 *)(iVar6 + 0x50) = puVar4;
  }
LAB_006f297f: ;
  *(int *)(iVar6 + 0x50) = *(int *)(iVar6 + 0x50) + 4;
  uVar3 = F_00a02290(((byte *)(gen_frame + 0x4)),0);
  F_00a02240(((byte *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar3;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf102 */
uint F_006f29b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f29b0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  
  F_00a02210(((undefined1 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)&gen_args[1]));
  iVar1 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4)));
  (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)F_00406b90(4,0,0);
  if ((*(undefined4 * PTR32 *)&gen_args[1]) == (undefined4 *)0x0) {
    (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)0x0;
  }
  else {
    *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(undefined * PTR32 (*)[6])REFP(0x10b8ce4));
  }
  F_00754690((undefined *)(iVar1 + 0x4c),&(*(undefined4 * PTR32 *)&gen_args[1]));
  uVar2 = F_00a02290(((undefined1 *)(gen_frame + 0xc)),0);
  F_00a02240(((undefined1 *)(gen_frame + 0xc)));
  return uVar2;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf58 */
uint F_006f2a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f2a20u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  float10 fVar3;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)&gen_args[1]));
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  if (uVar2 < 2) {
    uVar2 = 1;
  }
  iVar1 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4)));
  (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)F_00406b90(8,0,0);
  if ((*(undefined4 * PTR32 *)&gen_args[1]) == (undefined4 *)0x0) {
    (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)0x0;
  }
  else {
    fVar3 = (float10)(int)uVar2;
    *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(undefined * PTR32 (*)[6])REFP(0x10b8cc8));
    if ((int)uVar2 < 0) {
      fVar3 = fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    (*(undefined4 * PTR32 *)&gen_args[1])[1] = (undefined4)gen_fl2bits((float)(fVar3 * (float10)*(double *)&REFG(undefined, 0x10ba6f8)));
  }
  F_00754690((undefined *)(iVar1 + 0x4c),&(*(undefined4 * PTR32 *)&gen_args[1]));
  uVar2 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return uVar2;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf66 */
uint F_006f2ac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f2ac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  
  F_00a02210(((undefined1 *)(gen_frame + 0xc)),param_1);
  bVar1 = F_006f1e30(*(undefined * PTR32 *)(this + 4));
  if (bVar1 != 0) {
    uVar2 = F_00a02290(((undefined1 *)(gen_frame + 0xc)),0);
    F_00a02240(((undefined1 *)(gen_frame + 0xc)));
    return uVar2;
  }
  F_00a02240(((undefined1 *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf71 */
uint F_006f2b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f2b10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  
  F_00a02210(((undefined1 *)(gen_frame + 0xc)),param_1);
  bVar1 = F_006f1c40(*(undefined * PTR32 *)(this + 4));
  if (bVar1 == 0) {
    F_00a02240(((undefined1 *)(gen_frame + 0xc)));
    return 0;
  }
  uVar2 = F_00a02290(((undefined1 *)(gen_frame + 0xc)),0);
  F_00a02240(((undefined1 *)(gen_frame + 0xc)));
  return uVar2;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf73 */
uint F_006f2b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f2b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined4 * PTR32 * ppuVar1;
  undefined4 * PTR32 * ppuVar2;
  byte bVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint * puVar9;
  
  ((uint *)(gen_frame + 0x48))[4] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  iVar8 = *(int *)(this + 4);
  (*(undefined * PTR32 *)(gen_frame + 0x2c)) = this;
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar4 = F_00a019d0(((byte *)(gen_frame + 0xc)));
  puVar5 = (undefined4 *)F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x30)) = puVar5;
  (*(bool *)(gen_frame + 0x37)) = true;
  if (2 < (int)uVar4) {
    bVar3 = F_00a01f40(((byte *)(gen_frame + 0xc)),3);
    if (bVar3 != 0) {
      uVar6 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),3);
      (*(bool *)(gen_frame + 0x37)) = uVar6 == 0;
    }
  }
  F_00a51200(0x1e,(*(undefined4 * PTR32 *)(gen_frame + 0x30)),0,0,0);
  if (*(char *)(iVar8 + 0xd4) != '\0') {
    F_00a01860(((undefined1 *)(gen_frame + 0x38)),param_1);
    F_00b9ae00((*(undefined4 *)(gen_frame + 0x40)),1);
    F_00a01890(((undefined1 *)(gen_frame + 0x38)));
    F_00a02240(((byte *)(gen_frame + 0xc)));
    F_00c47745(((uint *)(gen_frame + 0x48))[4] ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  }
  ((uint *)(gen_frame + 0x48))[0] = 0;
  ((uint *)(gen_frame + 0x48))[1] = 0;
  ((uint *)(gen_frame + 0x48))[2] = 0;
  ((uint *)(gen_frame + 0x48))[3] = 0;
  iVar8 = 4;
  puVar9 = ((uint *)(gen_frame + 0x48));
  do {
    if ((int)uVar4 < iVar8) break;
    bVar3 = F_00a01f40(((byte *)(gen_frame + 0xc)),iVar8);
    if (bVar3 != 0) {
      uVar6 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),iVar8);
      *puVar9 = uVar6;
    }
    iVar8 = iVar8 + 1;
    puVar9 = puVar9 + 1;
  } while (iVar8 < 8);
  iVar8 = *(int *)((*(undefined * PTR32 *)(gen_frame + 0x2c)) + 4);
  puVar5 = (undefined4 *)F_00406b90(0x70,0,0);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = (*(undefined * PTR32 (*)[6])REFP(0x10b8c04));
    F_0042b630(puVar5 + 1);
    puVar5[0x16] = (*(undefined4 * PTR32 *)(gen_frame + 0x30));
    puVar5[0x17] = ((uint *)(gen_frame + 0x48))[0];
    puVar5[0x18] = ((uint *)(gen_frame + 0x48))[1];
    puVar5[0x19] = ((uint *)(gen_frame + 0x48))[2];
    puVar5[0x1a] = ((uint *)(gen_frame + 0x48))[3];
    *(undefined2 *)(puVar5 + 0x1b) = 0;
    *(bool *)((int)puVar5 + 0x6e) = (*(bool *)(gen_frame + 0x37));
    *(undefined1 *)((int)puVar5 + 0x6f) = 0;
  }
  ppuVar1 = *(undefined4 * PTR32 * PTR32 *)(iVar8 + 0x50);
  (*(undefined4 * PTR32 *)(gen_frame + 0x30)) = puVar5;
  if ((&(*(undefined4 * PTR32 *)(gen_frame + 0x30)) < ppuVar1) && (ppuVar2 = *(undefined4 * PTR32 * PTR32 *)(iVar8 + 0x4c), ppuVar2 <= &(*(undefined4 * PTR32 *)(gen_frame + 0x30)))) {
    if (ppuVar1 == *(undefined4 * PTR32 * PTR32 *)(iVar8 + 0x54)) {
      iVar7 = (int)ppuVar1 - (int)((int)(uintptr_t)ppuVar2) >> 2;
      if (iVar7 == -1) {
                    
        F_00c4579a("vector<T> too long");
      }
      uVar6 = iVar7 + 1;
      uVar4 = (int)*(undefined4 * PTR32 * PTR32 *)(iVar8 + 0x54) - (int)((int)(uintptr_t)ppuVar2) >> 2;
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
        F_00751140((undefined *)(iVar8 + 0x4c),uVar4);
      }
    }
    if (*(undefined4 * PTR32 *)(iVar8 + 0x50) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)(iVar8 + 0x50) =
           *((undefined4 *)GEN_TOP((*(int *)(iVar8 + 0x4c) + ((int)&(*(undefined4 * PTR32 *)(gen_frame + 0x30)) - (int)((int)(uintptr_t)ppuVar2) >> 2) * 4)));
    }
  }
  else {
    if (ppuVar1 == *(undefined4 * PTR32 * PTR32 *)(iVar8 + 0x54)) {
      iVar7 = (int)ppuVar1 - *(int *)(iVar8 + 0x4c) >> 2;
      if (iVar7 == -1) {
                    
        F_00c4579a("vector<T> too long");
      }
      uVar6 = iVar7 + 1;
      uVar4 = (int)*(undefined4 * PTR32 * PTR32 *)(iVar8 + 0x54) - *(int *)(iVar8 + 0x4c) >> 2;
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
        F_00751140((undefined *)(iVar8 + 0x4c),uVar4);
      }
    }
    if (*(undefined4 * PTR32 *)(iVar8 + 0x50) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)(iVar8 + 0x50) = puVar5;
    }
  }
  *(int *)(iVar8 + 0x50) = *(int *)(iVar8 + 0x50) + 4;
  uVar4 = F_00a02290(((byte *)(gen_frame + 0xc)),1);
  F_00a02240(((byte *)(gen_frame + 0xc)));
  F_00c47745(((uint *)(gen_frame + 0x48))[4] ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar4;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf104 */
uint F_006f2dc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f2dc0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  undefined * this_00;
  uint uVar2;
  
  F_00a02210(((undefined1 *)(gen_frame + 0xc)),(*(uint *)&gen_args[1]));
  iVar1 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4)));
  this_00 = (undefined *)F_00406b90(0x10,0,0);
  if (this_00 == (undefined *)0x0) {
    (*(uint *)&gen_args[1]) = 0;
  }
  else {
    (*(uint *)&gen_args[1]) = F_006c9c80(this_00);
  }
  F_00754690((undefined *)(iVar1 + 0x4c),&(*(uint *)&gen_args[1]));
  uVar2 = F_00a02290(((undefined1 *)(gen_frame + 0xc)),1);
  F_00a02240(((undefined1 *)(gen_frame + 0xc)));
  return uVar2;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf105 */
uint F_006f2e30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f2e30u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  
  F_00a02210(((undefined1 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)&gen_args[1]));
  iVar1 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4)));
  (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)F_00406b90(8,0,0);
  if ((*(undefined4 * PTR32 *)&gen_args[1]) == (undefined4 *)0x0) {
    (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)0x0;
  }
  else {
    *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(undefined * PTR32 (*)[6])REFP(0x10b8c58));
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
  }
  F_00754690((undefined *)(iVar1 + 0x4c),&(*(undefined4 * PTR32 *)&gen_args[1]));
  uVar2 = F_00a02290(((undefined1 *)(gen_frame + 0xc)),1);
  F_00a02240(((undefined1 *)(gen_frame + 0xc)));
  return uVar2;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf76 */
uint F_006f2ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f2ea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  
  F_00a02210(((undefined1 *)(gen_frame + 0xc)),param_1);
  bVar1 = F_006f20d0(*(undefined * PTR32 *)(this + 4));
  if (bVar1 != 0) {
    uVar2 = F_00a02290(((undefined1 *)(gen_frame + 0xc)),0);
    F_00a02240(((undefined1 *)(gen_frame + 0xc)));
    return uVar2;
  }
  F_00a02240(((undefined1 *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf78 */
uint F_006f2ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f2ef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  
  F_00a02210(((undefined1 *)(gen_frame + 0xc)),param_1);
  bVar1 = F_006f2160(*(undefined * PTR32 *)(this + 4));
  if (bVar1 != 0) {
    uVar2 = F_00a02290(((undefined1 *)(gen_frame + 0xc)),0);
    F_00a02240(((undefined1 *)(gen_frame + 0xc)));
    return uVar2;
  }
  F_00a02240(((undefined1 *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf81 */
uint F_006f2f40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f2f40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  
  F_00a02210(((undefined1 *)(gen_frame + 0xc)),param_1);
  bVar1 = F_006f21f0(*(undefined * PTR32 *)(this + 4));
  if (bVar1 != 0) {
    uVar2 = F_00a02290(((undefined1 *)(gen_frame + 0xc)),0);
    F_00a02240(((undefined1 *)(gen_frame + 0xc)));
    return uVar2;
  }
  F_00a02240(((undefined1 *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf93 */
uint F_006f2f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f2f90u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)&gen_args[1]));
  uVar3 = 0;
  uVar2 = F_00a019d0(((byte *)(gen_frame + 0xc)));
  if (1 < (int)uVar2) {
    uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  }
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0xd1))) = 1;
  iVar1 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4)));
  (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)F_00406b90(8,0,0);
  if ((*(undefined4 * PTR32 *)&gen_args[1]) == (undefined4 *)0x0) {
    (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)0x0;
  }
  else {
    *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(undefined * PTR32 (*)[6])REFP(0x10b8c20));
    (*(undefined4 * PTR32 *)&gen_args[1])[1] = uVar3;
  }
  F_00754690((undefined *)(iVar1 + 0x4c),&(*(undefined4 * PTR32 *)&gen_args[1]));
  uVar2 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return uVar2;
}

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
byte F_006f4180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
  return bVar4;
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
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  bVar1 = F_006f4180((undefined *)(*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(int * PTR32 *)&gen_args[3]));
  if (bVar1 != 0) {
    return 1;
  }
  this_00 = *((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xf8)));
  uVar2 = F_00b9a750(*(undefined4 *)((int)this_00 + 8));
  uVar3 = F_0042a990((*(undefined * PTR32 *)&gen_args[0]) + 0x118);
  F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar3);
  F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
  uVar3 = F_00b9a940(*(undefined4 *)((int)this_00 + 8),0xffffffff);
  if (uVar3 != 0) {
    (*(int * PTR32 *)&gen_args[3]) = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))));
    if ((*(int * PTR32 *)&gen_args[3]) != *((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))) {
      do {
        uVar4 = *((undefined4 *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[3]) + 0xc)));
        uVar3 = F_0042a990((int)(*(int * PTR32 *)&gen_args[3]) + 0x10);
        F_00a01c80(this_00,uVar2 + 1,uVar3,uVar4);
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
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  bVar1 = F_006f4180((undefined *)(*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(int * PTR32 *)&gen_args[3]));
  if (bVar1 == 0) {
    this_00 = *((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xf8)));
    uVar2 = F_00b9a750(*(undefined4 *)((int)this_00 + 8));
    uVar3 = F_0042a990((*(undefined * PTR32 *)&gen_args[0]) + 0x118);
    F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar3);
    F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
    uVar3 = F_00b9a940(*(undefined4 *)((int)this_00 + 8),0xffffffff);
    if (uVar3 != 0) {
      (*(int * PTR32 *)&gen_args[3]) = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))));
      if ((*(int * PTR32 *)&gen_args[3]) != *((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))) {
        do {
          uVar4 = *((undefined4 *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[3]) + 0xc)));
          uVar3 = F_0042a990((int)(*(int * PTR32 *)&gen_args[3]) + 0x10);
          F_00a01c80(this_00,uVar2 + 1,uVar3,uVar4);
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
  
  bVar1 = F_006f4180((undefined *)this,param_1,param_2,param_3);
  if (bVar1 != 0) {
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
  
  bVar1 = F_006f4180((undefined *)this,param_1,param_2,param_3);
  if (bVar1 != 0) {
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

