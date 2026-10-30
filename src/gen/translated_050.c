#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_006ac9f0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_006ac9f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6ac9f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;)
  byte bVar1;
  uint uVar2;
  
  *((undefined2 *)GEN_TOP(((int)this + 0x730))) = *param_1;
  *((undefined2 *)GEN_TOP(((int)this + 0x732))) = param_1[1];
  *((undefined2 *)GEN_TOP(((int)this + 0x734))) = param_1[2];
  bVar1 = F_006a8d00(this GEN_EDX_FWD,1,*((undefined1 *)GEN_TOP(((int)param_1 + 7))));
  if (bVar1 == 0) {
    return 0;
  }
  F_006a8f40(this GEN_EDX_ARG,0);
  if ((*(byte *)(param_1 + 3) & 1) == 0) {
    F_006abf50(this GEN_EDX_ARG);
    F_006abe30(this GEN_EDX_ARG,0x656d70,0x656d70);
  }
  else {
    F_006ac6b0(this GEN_EDX_ARG);
  }
  F_0068d7f0(this GEN_EDX_ARG);
  uVar2 = F_006767d0(((undefined *)GEN_TOP((REFG(int, 0x137128c) + 0x3d0))) GEN_EDX_ARG);
  *((uint *)GEN_TOP(((int)this + 0x740))) = uVar2;
  bVar1 = F_006930a0(this GEN_EDX_ARG);
  *((char *)GEN_TOP(((int)this + 0x65))) = (bVar1 != 0) + '\x02';
  F_00692c10(this GEN_EDX_ARG);
  F_006a8230(this GEN_EDX_ARG,0);
  return 1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006acab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x6acab0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  byte bVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined * pCVar11;
  undefined * local_8;
  
  uVar9 = *(uint *)(this + 0x74);
  uVar10 = 0;
  if (uVar9 != 0) {
    do {
      if (*((int *)GEN_TOP((*(int *)(this + 0x80) + uVar10 * 4))) != 0) {
        F_009bc2a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x80) + uVar10 * 4))) GEN_EDX_FWD);
        if (*((int *)GEN_TOP((*(int *)(this + 0x80) + uVar10 * 4))) != 0) {
          this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x80) + uVar10 * 4)));
          if (this_00 != ((undefined *)GEN_TOP(0x0))) {
            F_009cfa70(this_00 GEN_EDX_ARG);
            F_00406ad0(this_00);
          }
          *((undefined4 *)GEN_TOP((*(int *)(this + 0x80) + uVar10 * 4))) = 0;
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar9);
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x8c))))(this GEN_EDX_ARG);
  pCVar11 = this + 0x168;
  iVar8 = 2;
  do {
    piVar1 = *(int * PTR32 *)pCVar11;
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
      *(int *)pCVar11 = 0;
    }
    pCVar11 = pCVar11 + 4;
    iVar8 = iVar8 - 1;
  } while (iVar8 != 0);
  if (*(undefined * PTR32 *)(this + 0x78) != ((undefined *)GEN_TOP(0x0))) {
    F_0061eec0(*(undefined * PTR32 *)(this + 0x78) GEN_EDX_ARG,5);
  }
  piVar1 = *(int * PTR32 *)(this + 0xe0);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
    puVar2 = *(undefined4 * PTR32 *)(this + 0xe0);
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)(this + 0xe0) = 0;
    }
  }
  *(undefined4 *)(this + 0xe0) = 0;
  iVar8 = 10;
  do {
    iVar3 = *(int *)(this + 0x2d0);
    if (iVar3 != 0) {
      uVar7 = 0 << GEN_SHC((byte)iVar8, (unsigned int)(uintptr_t)iVar8);
      uVar5 = ~(1 << GEN_SHC((byte)iVar8, (unsigned int)(uintptr_t)iVar8));
      *((ushort *)GEN_TOP((iVar3 + 0x40))) = *((ushort *)GEN_TOP((iVar3 + 0x40))) & uVar5 | uVar7;
      *((ushort *)GEN_TOP((iVar3 + 0x42))) = *((ushort *)GEN_TOP((iVar3 + 0x42))) & uVar5 | uVar7;
      *((ushort *)GEN_TOP((iVar3 + 0x44))) = *((ushort *)GEN_TOP((iVar3 + 0x44))) & uVar5 | uVar7;
      iVar4 = *((int *)GEN_TOP((iVar3 + iVar8 * 4)));
      if (iVar4 != 0) {
        F_0050c620(iVar4,0,0);
        *((undefined4 *)GEN_TOP((iVar3 + iVar8 * 4))) = 0;
      }
      if (*((short *)GEN_TOP((*(int *)(this + 0x2d0) + 0x42))) == *((short *)GEN_TOP((*(int *)(this + 0x2d0) + 0x40)))) {
        *(uint *)(this + 0x2c8) = *(uint *)(this + 0x2c8) & 0x7fffffff;
      }
    }
    if (*(undefined * PTR32 *)(this + 0xe4) != ((undefined *)GEN_TOP(0x0))) {
      F_00b84d90(*(undefined * PTR32 *)(this + 0xe4) GEN_EDX_ARG,iVar8 - 10);
    }
    uVar10 = iVar8 - 9;
    iVar8 = iVar8 + 1;
  } while (uVar10 < 5);
  uVar10 = 0;
  if (*(undefined * PTR32 *)(this + 0xe4) != ((undefined *)GEN_TOP(0x0))) {
    F_00b84960(*(undefined * PTR32 *)(this + 0xe4) GEN_EDX_ARG);
    puVar2 = *(undefined4 * PTR32 *)(this + 0xe4);
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)(this + 0xe4) = 0;
    }
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x90) + 0xc))))(this + 0x90 GEN_EDX_ARG);
  if (uVar9 != 0) {
    do {
      F_006a69d0(this GEN_EDX_ARG,uVar10);
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar9);
  }
  if (*(ushort *)(this + 0x11a) != 0xffff) {
    F_00621a50(((undefined *)GEN_TOP((REFG(int, 0x137127c) + 0x1061c))) GEN_EDX_ARG,(uint)*(ushort *)(this + 0x11a));
    *(undefined2 *)(this + 0x11a) = 0xffff;
  }
  if (*(undefined * PTR32 *)(this + 0x164) != ((undefined *)GEN_TOP(0x0))) {
    F_00620800(*(undefined * PTR32 *)(this + 0x164) GEN_EDX_ARG);
    puVar2 = *(undefined4 * PTR32 *)(this + 0x164);
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)(this + 0x164) = 0;
    }
  }
  if (*(undefined * PTR32 *)(this + 0x160) != ((undefined *)GEN_TOP(0x0))) {
    F_0061e400(*(undefined * PTR32 *)(this + 0x160) GEN_EDX_ARG);
    puVar2 = *(undefined4 * PTR32 *)(this + 0x160);
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)(this + 0x160) = 0;
    }
  }
  F_009f54d0(this + 0x4a0 GEN_EDX_ARG,*(undefined4 *)(this + 0x414),1,0);
  uVar9 = 0;
  if (*(int *)(this + 0x414) != 0) {
    F_0050c620(*(int *)(this + 0x414),0,0);
    *(undefined4 *)(this + 0x414) = 0;
  }
  uVar10 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x140))))(this GEN_EDX_ARG);
  if (uVar10 != 0) {
    local_8 = this + 0x418;
    do {
      iVar8 = *(int *)(this + 0x2d0);
      bVar6 = (byte)uVar9;
      if (iVar8 != 0) {
        uVar7 = 0 << GEN_SHC(bVar6, bVar6);
        uVar5 = ~(1 << GEN_SHC(bVar6, bVar6));
        *((ushort *)GEN_TOP((iVar8 + 0x40))) = uVar5 & *((ushort *)GEN_TOP((iVar8 + 0x40))) | uVar7;
        *((ushort *)GEN_TOP((iVar8 + 0x42))) = uVar5 & *((ushort *)GEN_TOP((iVar8 + 0x42))) | uVar7;
        *((ushort *)GEN_TOP((iVar8 + 0x44))) = uVar5 & *((ushort *)GEN_TOP((iVar8 + 0x44))) | uVar7;
        iVar3 = *((int *)GEN_TOP((iVar8 + uVar9 * 4)));
        if (iVar3 != 0) {
          F_0050c620(iVar3,0,0);
          *((undefined4 *)GEN_TOP((iVar8 + uVar9 * 4))) = 0;
        }
        if (*((short *)GEN_TOP((*(int *)(this + 0x2d0) + 0x42))) == *((short *)GEN_TOP((*(int *)(this + 0x2d0) + 0x40))))
        {
          *(uint *)(this + 0x2c8) = *(uint *)(this + 0x2c8) & 0x7fffffff;
        }
      }
      F_009f0670(local_8 GEN_EDX_ARG,0);
      if (*(undefined * PTR32 *)(this + 0x78) != ((undefined *)GEN_TOP(0x0))) {
        F_00622fe0(*(undefined * PTR32 *)(this + 0x78) GEN_EDX_ARG,uVar9,0);
      }
      iVar8 = *(int *)(this + 0x2d0);
      if (iVar8 != 0) {
        uVar7 = 0 << GEN_SHC(bVar6 + 5, bVar6 + 5);
        uVar5 = ~(1 << GEN_SHC(bVar6 + 5, bVar6 + 5));
        *((ushort *)GEN_TOP((iVar8 + 0x40))) = uVar5 & *((ushort *)GEN_TOP((iVar8 + 0x40))) | uVar7;
        *((ushort *)GEN_TOP((iVar8 + 0x42))) = *((ushort *)GEN_TOP((iVar8 + 0x42))) & uVar5 | uVar7;
        *((ushort *)GEN_TOP((iVar8 + 0x44))) = *((ushort *)GEN_TOP((iVar8 + 0x44))) & uVar5 | uVar7;
        iVar3 = *((int *)GEN_TOP((iVar8 + 0x14 + uVar9 * 4)));
        if (iVar3 != 0) {
          F_0050c620(iVar3,0,0);
          *((undefined4 *)GEN_TOP((iVar8 + 0x14 + uVar9 * 4))) = 0;
        }
        if (*((short *)GEN_TOP((*(int *)(this + 0x2d0) + 0x42))) == *((short *)GEN_TOP((*(int *)(this + 0x2d0) + 0x40))))
        {
          *(uint *)(this + 0x2c8) = *(uint *)(this + 0x2c8) & 0x7fffffff;
        }
      }
      if (*(undefined * PTR32 *)(this + 0x78) != ((undefined *)GEN_TOP(0x0))) {
        F_0061edb0(*(undefined * PTR32 *)(this + 0x78) GEN_EDX_ARG,uVar9,0);
      }
      local_8 = local_8 + 0x88;
      uVar9 = uVar9 + 1;
      uVar10 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x140))))(this GEN_EDX_ARG);
    } while (uVar9 < uVar10);
  }
  piVar1 = *(int * PTR32 *)(this + 0x78);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
    *(undefined4 *)(this + 0x78) = 0;
  }
  iVar8 = *(int *)(this + 0x2d0);
  if (iVar8 != 0) {
    *((ushort *)GEN_TOP((iVar8 + 0x40))) = *((ushort *)GEN_TOP((iVar8 + 0x40))) & 0x7fff;
    *((ushort *)GEN_TOP((iVar8 + 0x42))) = *((ushort *)GEN_TOP((iVar8 + 0x42))) & 0x7fff;
    *((ushort *)GEN_TOP((iVar8 + 0x44))) = *((ushort *)GEN_TOP((iVar8 + 0x44))) & 0x7fff;
    if (*((int *)GEN_TOP((iVar8 + 0x3c))) != 0) {
      F_0050c620(*((int *)GEN_TOP((iVar8 + 0x3c))),0,0);
      *((undefined4 *)GEN_TOP((iVar8 + 0x3c))) = 0;
    }
    if (*((short *)GEN_TOP((*(int *)(this + 0x2d0) + 0x42))) == *((short *)GEN_TOP((*(int *)(this + 0x2d0) + 0x40)))) {
      *(uint *)(this + 0x2c8) = *(uint *)(this + 0x2c8) & 0x7fffffff;
    }
  }
  F_006ac790(this GEN_EDX_ARG);
  piVar1 = *(int * PTR32 *)(this + 0x2d8);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
    *(undefined4 *)(this + 0x2d8) = 0;
  }
  if (*(int *)(this + 0x2c8) == 0) {
    F_006a0300(this GEN_EDX_ARG);
  }
  if (*(int *)(this + 0x7c) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x14))) + 0x10))))
              (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x14))) GEN_EDX_ARG,*(int *)(this + 0x7c));
    *(undefined4 *)(this + 0x7c) = 0;
  }
  if (*(int *)(this + 0x80) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x14))) + 0x10))))
              (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x14))) GEN_EDX_ARG,*(int *)(this + 0x80));
    *(undefined4 *)(this + 0x80) = 0;
  }
  *(undefined4 *)(this + 0x74) = 0;
  this[100] = (undefined1)((byte)this[100] & 0xfb);
  this[0x65] = (undefined1)0x0;
  if (*(int *)(this + 0x60) != 0) {
    F_00b14100(REFG(void * PTR32, 0x1370c1c) GEN_EDX_ARG,*(int *)(this + 0x60));
    *(undefined4 *)(this + 0x60) = 0;
  }
  iVar8 = *(int *)(this + 0x14);
  if ((iVar8 != 0) && (*((undefined * PTR32 *)GEN_TOP((iVar8 + 0x20))) == this)) {
    *((uint *)GEN_TOP((iVar8 + 0x20))) =
         -(uint)(*(undefined * PTR32 *)(this + 0x1c) != this) & (uint)*(undefined * PTR32 *)(this + 0x1c);
  }
  *((undefined4 *)GEN_TOP((*(int *)(this + 0x1c) + 0x18))) = *(undefined4 *)(this + 0x18);
  *((undefined4 *)GEN_TOP((*(int *)(this + 0x18) + 0x1c))) = *(undefined4 *)(this + 0x1c);
  iVar8 = *(int *)(this + 0x28);
  uVar10 = *(uint *)(this + 0x24) & 0xfffffffc;
  uVar9 = *(uint *)(this + 0x24) & 3;
  *(undefined * PTR32 *)(this + 0x18) = this;
  *(undefined * PTR32 *)(this + 0x1c) = this;
  *(undefined4 *)(this + 0x14) = 0;
  *(uint *)(this + 0x24) = uVar9;
  *(undefined4 *)(this + 0x28) = 0;
  if (uVar10 != 0) {
    *((int *)GEN_TOP((uVar10 + 0x28))) = iVar8;
  }
  if (iVar8 != 0) {
    uVar9 = *((uint *)GEN_TOP((iVar8 + 0x24))) & 3 | uVar10;
    *((uint *)GEN_TOP((iVar8 + 0x24))) = uVar9;
  }
  *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 1;
  return uVar9;
}

/* ref: FUN_006acff0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_006acff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6))
{
  GEN_ENTER(0x6acff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_FRAME_DECL_GS(0x294, 12, 4);
  uint uVar1;
  int * piVar2;
  undefined4 * puVar3;
  int iVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x28c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x290));
  (*(int *)(gen_frame + 0x8)) = param_2;
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = param_3;
  (*(undefined4 *)(gen_frame + 0x14)) = param_4;
  (*(undefined4 *)(gen_frame + 0xc)) = param_5;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 2: ;
  case 4: ;
  case 5: ;
    goto switchD_006ad037_caseD_2;
  case 3: ;
    uVar1 = *((uint *)GEN_TOP(((int)this + 0x71c))) >> 0xb;
    break;
  default: ;
    uVar1 = *((uint *)GEN_TOP(((int)this + 0x71c))) >> 3;
  }
  if ((uVar1 & 1) == 0) {
    *param_1 = 0;
    param_1[1] = 0xffffffff;
    param_1[2] = 1;
    param_1[3] = 0x656d70;
    param_1[4] = 0x656d70;
    param_1[5] = 0;
    param_1[0xb] = 0xf;
    param_1[10] = 0;
    *(undefined1 *)(param_1 + 6) = 0;
    return (uint)param_1;
  }
switchD_006ad037_caseD_2: ;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 200))))(this GEN_EDX_FWD);
  iVar4 = 4;
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 1: ;
    iVar4 = 0;
    break;
  case 2: ;
    iVar4 = 2;
    break;
  case 3: ;
    iVar4 = 1;
    break;
  case 4: ;
    iVar4 = 3;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x128))))(this GEN_EDX_ARG);
  uVar1 = iVar4 << 0x10 | uVar1 & 0xffff;
  (*(uint *)(gen_frame + 0x1c)) = (uint)*((byte *)GEN_TOP(((int)this + 0x720)));
  (*(uint *)(gen_frame + 0x18)) = uVar1;
  F_006b6f60(&(*(undefined4 *)(gen_frame + 0x58)) GEN_EDX_ARG,(*(undefined4 * PTR32 *)(gen_frame + 0x10)),(*(int *)(gen_frame + 0x8)),&(*(uint *)(gen_frame + 0x18)),&(*(uint *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0xc)));
  piVar2 = ((int *)GEN_TOP(F_006b5da0(((undefined *)GEN_TOP(((int)this + 0x6c0))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x58)))));
  if (*((int *)GEN_TOP(((int)this + 0x6c4))) == *piVar2) {
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = ((undefined *)GEN_TOP(((int)this + 0x6d0)));
    piVar2 = ((int *)GEN_TOP(F_006b5da0(((undefined *)GEN_TOP(((int)this + 0x6d0))) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x58)))));
    if (*((int *)GEN_TOP(((int)this + 0x6d4))) == *piVar2) {
      (*(uint *)(gen_frame + 0x1c)) = 0;
      if (((*(int *)(gen_frame + 0x8)) < 3) || (4 < (*(int *)(gen_frame + 0x8)))) {
        uVar1 = F_00516f10(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137129c) + 0x58))) GEN_EDX_ARG,uVar1,
                             (uint)*((byte *)GEN_TOP(((int)this + 0x720))),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0xc)),(*(int *)(gen_frame + 0x8)),
                             (*(undefined4 * PTR32 *)(gen_frame + 0x10)),param_6);
LAB_006ad26a: ;
        (*(uint *)(gen_frame + 0x1c)) = uVar1;
      }
      else {
        F_00c48350(((undefined1 *)(gen_frame + 0x18c)),0,0x100);
        puVar3 = (*(undefined4 * PTR32 *)(gen_frame + 0x10));
        if (0xf < (uint)(*(undefined4 * PTR32 *)(gen_frame + 0x10))[5]) {
          puVar3 = ((undefined4 *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x10))));
        }
        F_00c472af(((undefined1 *)(gen_frame + 0x8c)),0x100,((char *)REFP(0x10af1e8)),puVar3);
        uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x118))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x18c)),0x100,1,((undefined1 *)(gen_frame + 0x8c)));
        if (uVar1 != 0) {
          F_004ff310(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG,4,0);
          (*(uint *)(gen_frame + 0x18)) = 0x706170;
          uVar1 = F_00513d20(&(*(undefined4 *)(gen_frame + 0x14)),&(*(uint *)(gen_frame + 0x18)),((undefined1 *)(gen_frame + 0x18c)),0,0,0);
          goto LAB_006ad26a;
        }
      }
      uVar1 = F_006b7860(((undefined1 *)(gen_frame + 0x20)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x58)),&(*(uint *)(gen_frame + 0x1c)));
      F_006b81e0((*(undefined * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),uVar1);
      if (0xf < (*(uint *)(gen_frame + 0x4c))) {
        F_00429760((*(undefined4 *)(gen_frame + 0x38)),(*(uint *)(gen_frame + 0x4c)) + 1,0x32);
      }
      F_006b7320(param_1 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x58)));
      goto LAB_006ad323;
    }
  }
  *param_1 = (*(undefined4 *)(gen_frame + 0x58));
  param_1[1] = (*(undefined4 *)(gen_frame + 0x5c));
  param_1[2] = (*(undefined4 *)(gen_frame + 0x60));
  param_1[3] = (*(undefined4 *)(gen_frame + 0x64));
  param_1[4] = (*(undefined4 *)(gen_frame + 0x68));
  param_1[5] = (*(undefined4 *)(gen_frame + 0x6c));
  param_1[0xb] = 0xf;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  F_004e54d0(param_1 + 6 GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x70)),0,0xffffffff);
LAB_006ad323: ;
  if (0xf < (*(uint *)(gen_frame + 0x84))) {
    F_00429760(((undefined4 *)(gen_frame + 0x70))[0],(*(uint *)(gen_frame + 0x84)) + 1,0x32);
  }
  return (uint)param_1;
}

/* ref: FUN_006ad380 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_006ad380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x6ad380u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  undefined * pvVar1;
  int iVar2;
  char cVar3;
  int * piVar4;
  int iVar5;
  byte bVar6;
  int * piVar7;
  uint uVar8;
  int * piVar9;
  undefined4 * puVar10;
  uint uVar11;
  uint uVar12;
  
  if (*((int *)GEN_TOP(((int)this + 0x78))) != 0) {
    uVar8 = *((uint *)GEN_TOP(((int)this + 0x2c0)));
    if (((((byte)(uVar8 >> 3) | (byte)(uVar8 >> 2) | (byte)(uVar8 >> 1) | (byte)uVar8) & 1) != 0 ||
        *((int *)GEN_TOP(((int)this + 0x40c))) != 0) || *((int *)GEN_TOP(((int)this + 0x6f8))) != 0) {
      if ((uVar8 & 1) != 0) {
        bVar6 = F_00691d30(((undefined4 *)GEN_TOP(((int)this + 0x3dc))));
        if (bVar6 != 0) {
          piVar4 = *((int * PTR32 *)GEN_TOP(((int)this + 0x3e0)));
          for (piVar9 = *((int * PTR32 *)GEN_TOP(((int)this + 0x3dc))); piVar9 != piVar4; piVar9 = piVar9 + 1) {
            piVar7 = ((int *)GEN_TOP((*piVar9 + 0x8c)));
            iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar7), 0);
            if (iVar2 < 8) {
              iVar2 = *piVar9;
              F_009f9db0(((undefined *)GEN_TOP(((int)this + 0x418))) GEN_EDX_ARG,iVar2,0,0);
            }
          }
          F_006ab8b0((int)this + 0x3dc);
          uVar8 = F_009f3260(((undefined *)GEN_TOP(((int)this + 0x418))) GEN_EDX_ARG);
          if (uVar8 != 0) {
            F_0061ef50(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x78))) GEN_EDX_ARG,0,((undefined *)GEN_TOP(((int)this + 0x418))));
          }
          *((uint *)GEN_TOP(((int)this + 0x2c0))) = *((uint *)GEN_TOP(((int)this + 0x2c0))) & 0xfffffffe;
          *((uint *)GEN_TOP(((int)this + 0x2c4))) = *((uint *)GEN_TOP(((int)this + 0x2c4))) | 1;
        }
      }
      if ((*((uint *)GEN_TOP(((int)this + 0x2c0))) >> 1 & 1) != 0) {
        bVar6 = F_00691d30(((undefined4 *)GEN_TOP(((int)this + 0x3ec))));
        if (bVar6 != 0) {
          piVar4 = *((int * PTR32 *)GEN_TOP(((int)this + 0x3f0)));
          for (piVar9 = *((int * PTR32 *)GEN_TOP(((int)this + 0x3ec))); piVar9 != piVar4; piVar9 = piVar9 + 1) {
            piVar7 = ((int *)GEN_TOP((*piVar9 + 0x8c)));
            iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar7), 0);
            if (iVar2 < 8) {
              iVar2 = *piVar9;
              F_009f9db0(((undefined *)GEN_TOP(((int)this + 0x418))) GEN_EDX_ARG,iVar2,0,1);
            }
          }
          F_006ab8b0((int)this + 0x3ec);
          uVar8 = F_009f3260(((undefined *)GEN_TOP(((int)this + 0x418))) GEN_EDX_ARG);
          if (uVar8 != 0) {
            F_0061ef50(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x78))) GEN_EDX_ARG,0,((undefined *)GEN_TOP(((int)this + 0x418))));
          }
          *((uint *)GEN_TOP(((int)this + 0x2c0))) = *((uint *)GEN_TOP(((int)this + 0x2c0))) & 0xfffffffd;
          *((uint *)GEN_TOP(((int)this + 0x2c4))) = *((uint *)GEN_TOP(((int)this + 0x2c4))) | 2;
        }
      }
      if (*((int *)GEN_TOP(((int)this + 0x40c))) != 0) {
        piVar9 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x414))) + 0x88)));
        iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar9), 0);
        if (iVar2 == 2) {
          piVar9 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x414))) + 0x8c)));
          iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar9), 0);
          if (iVar2 < 8) {
            uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 200))))(this GEN_EDX_ARG);
            pvVar1 = ((undefined *)GEN_TOP(((uint)(uVar8 == 1) * 0x88 + 0x418 + (int)this)));
            F_009f9db0(pvVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x414))),1,0);
            F_0061ef50(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x78))) GEN_EDX_ARG,(uint)(uVar8 == 1),pvVar1);
          }
          else if (*((int *)GEN_TOP(((int)this + 0x414))) != 0) {
            F_0050c620(*((int *)GEN_TOP(((int)this + 0x414))),0,0);
            *((undefined4 *)GEN_TOP(((int)this + 0x414))) = 0;
          }
          *((undefined4 *)GEN_TOP(((int)this + 0x40c))) = 0;
          *((undefined4 *)GEN_TOP(((int)this + 0x410))) = 0xffffffff;
        }
      }
      if ((*((uint *)GEN_TOP(((int)this + 0x2c0))) >> 3 & 1) != 0) {
        piVar4 = *((int * PTR32 *)GEN_TOP(((int)this + 0x400)));
        for (piVar9 = *((int * PTR32 *)GEN_TOP(((int)this + 0x3fc))); piVar9 != piVar4; piVar9 = piVar9 + 1) {
          piVar7 = ((int *)GEN_TOP((*piVar9 + 0x88)));
          iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar7), 0);
          if (iVar2 != 2) goto LAB_006ad664;
        }
        piVar4 = *((int * PTR32 *)GEN_TOP(((int)this + 0x400)));
        for (piVar9 = *((int * PTR32 *)GEN_TOP(((int)this + 0x3fc))); piVar9 != piVar4; piVar9 = piVar9 + 1) {
          piVar7 = ((int *)GEN_TOP((*piVar9 + 0x8c)));
          iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar7), 0);
          if (iVar2 < 8) {
            iVar2 = *piVar9;
            F_009f9db0(((undefined *)GEN_TOP(((int)this + 0x418))) GEN_EDX_ARG,iVar2,0,3);
          }
        }
        F_006ab8b0((int)this + 0x3fc);
        uVar8 = F_009f3260(((undefined *)GEN_TOP(((int)this + 0x418))) GEN_EDX_ARG);
        if (uVar8 != 0) {
          F_0061ef50(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x78))) GEN_EDX_ARG,0,((undefined *)GEN_TOP(((int)this + 0x418))));
        }
        *((uint *)GEN_TOP(((int)this + 0x2c0))) = *((uint *)GEN_TOP(((int)this + 0x2c0))) & 0xfffffff7;
        *((uint *)GEN_TOP(((int)this + 0x2c4))) = *((uint *)GEN_TOP(((int)this + 0x2c4))) | 8;
      }
LAB_006ad664: ;
      F_00b820e0(((undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      bVar6 = *((byte *)GEN_TOP(((int)this + 0x6fa)));
      ((undefined4 *)(gen_frame + 0x0))[0] = 1;
      if ((bVar6 & 1) != 0) {
        piVar9 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x710))) + 0x88)));
        iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar9), 0);
        if (iVar2 == 2) {
          piVar9 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x710))) + 0x8c)));
          iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar9), 0);
          if (iVar2 < 8) {
            F_00b82290(((undefined *)GEN_TOP(((int)this + 0x700))) GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x0)),*((undefined4 *)GEN_TOP(((int)this + 0x710))));
          }
          *((uint *)GEN_TOP(((int)this + 0x6f8))) = *((uint *)GEN_TOP(((int)this + 0x6f8))) & 0xfffeffff;
        }
      }
      uVar11 = *((uint *)GEN_TOP(((int)this + 0x74)));
      uVar12 = 0;
      (*(uint *)(gen_frame + 0x18)) = uVar11;
      uVar8 = 1;
      if (uVar11 != 0) {
        do {
          if (((*((uint *)GEN_TOP(((int)this + 0x6f8))) >> GEN_SHC((byte)uVar12, (unsigned int)(uintptr_t)uVar12) & 1) != 0) &&
             (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x714))) + uVar12 * 4))) != 0)) {
            piVar9 = ((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x714))) + uVar12 * 4))) + 0x88)));
            iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar9), 0);
            if (iVar2 == 2) {
              piVar9 = ((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x714))) + uVar12 * 4))) + 0x8c)));
              iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar9), 0);
              if (iVar2 < 8) {
                iVar2 = *((int *)GEN_TOP(((int)this + 0x714)));
                ((uint *)(gen_frame + 0x8))[0] = uVar12;
                F_00b82330(((undefined *)GEN_TOP(((int)this + 0x700))) GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x0)),
                             *((undefined4 *)GEN_TOP((iVar2 + uVar12 * 4))));
              }
              *((uint *)GEN_TOP(((int)this + 0x6f8))) =
                   ~uVar8 & *((uint *)GEN_TOP(((int)this + 0x6f8))) | 0 << GEN_SHC((byte)uVar12, (unsigned int)(uintptr_t)uVar12);
              uVar11 = (*(uint *)(gen_frame + 0x18));
            }
          }
          uVar12 = uVar12 + 1;
          uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
        } while (uVar12 < uVar11);
      }
    }
    piVar9 = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 0x6d4)))));
    if (piVar9 != *((int * PTR32 *)GEN_TOP(((int)this + 0x6d4)))) {
      do {
        iVar5 = piVar9[0x10];
        (*(uint *)(gen_frame + 0x18)) = iVar5;
        piVar4 = ((int *)GEN_TOP((iVar5 + 0x88)));
        iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar4), 0);
        if (iVar2 == 2) {
          piVar4 = ((int *)GEN_TOP((iVar5 + 0x8c)));
          iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar4), 0);
          if (iVar2 < 8) {
            puVar10 = ((undefined4 *)GEN_TOP(F_004296a0(0x48,0,0xcb)));
            *puVar10 = *((undefined4 *)GEN_TOP(((int)this + 0x6c4)));
            puVar10[1] = *((undefined4 *)GEN_TOP(((int)this + 0x6c4)));
            (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = puVar10;
            puVar10[2] = *((undefined4 *)GEN_TOP(((int)this + 0x6c4)));
            *(undefined2 *)(puVar10 + 0x11) = 0;
            if (puVar10 + 3 != ((int *)GEN_TOP(0x0))) {
              puVar10[3] = piVar9[3];
              puVar10[4] = piVar9[4];
              puVar10[5] = piVar9[5];
              puVar10[6] = piVar9[6];
              puVar10[7] = piVar9[7];
              puVar10[8] = piVar9[8];
              puVar10[0xe] = 0xf;
              puVar10[0xd] = 0;
              *(undefined1 *)(puVar10 + 9) = 0;
              F_004e54d0(puVar10 + 9 GEN_EDX_ARG,piVar9 + 9,0,0xffffffff);
              puVar10[0x10] = piVar9[0x10];
            }
            F_006b7f10(((undefined *)GEN_TOP(((int)this + 0x6c0))) GEN_EDX_ARG,((uint *)(gen_frame + 0x8)),(*(undefined4 * PTR32 *)(gen_frame + 0x1c)),0);
            iVar2 = piVar9[8];
            if (((iVar2 == 3) || (iVar2 == 4)) || (iVar2 == 5)) {
              bVar6 = 1;
            }
            else {
              bVar6 = 0;
            }
            (*(uint *)(gen_frame + 0x14)) = (uint)bVar6;
            if (((iVar2 == 3) || (iVar2 == 4)) || (iVar2 == 5)) {
              bVar6 = 1;
            }
            else {
              bVar6 = 0;
            }
            (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = ((undefined4 *)GEN_TOP((uint)bVar6));
            uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 200))))(this GEN_EDX_ARG);
            if (uVar8 != 1) {
              (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = ((undefined4 *)GEN_TOP(0x0));
            }
            pvVar1 = ((undefined *)GEN_TOP(((int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x1c))) * 0x88 + 0x418 + (int)this)));
            F_009f9db0(pvVar1 GEN_EDX_ARG,(*(uint *)(gen_frame + 0x18)),(*(uint *)(gen_frame + 0x14)),2);
            uVar8 = F_009f3260(pvVar1 GEN_EDX_ARG);
            if (uVar8 != 0) {
              F_0061ef50(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x78))) GEN_EDX_ARG,(*(undefined4 * PTR32 *)(gen_frame + 0x1c)),pvVar1);
            }
          }
          else if (iVar5 != 0) {
            F_0050c620(iVar5,0,0);
          }
          puVar10 = ((undefined4 *)GEN_TOP(F_006b7c10(((undefined *)GEN_TOP(((int)this + 0x6d0))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)),piVar9)));
          piVar9 = ((int *)GEN_TOP(*puVar10));
        }
        else if (*((char *)GEN_TOP(((int)piVar9 + 0x45))) == '\0') {
          piVar4 = ((int *)GEN_TOP(piVar9[2]));
          if (*((char *)GEN_TOP(((int)piVar4 + 0x45))) == '\0') {
            cVar3 = *((char *)GEN_TOP((*piVar4 + 0x45)));
            piVar9 = piVar4;
            piVar4 = ((int *)GEN_TOP(*piVar4));
            while (cVar3 == '\0') {
              cVar3 = *((char *)GEN_TOP((*piVar4 + 0x45)));
              piVar9 = piVar4;
              piVar4 = ((int *)GEN_TOP(*piVar4));
            }
          }
          else {
            cVar3 = *((char *)GEN_TOP((piVar9[1] + 0x45)));
            piVar7 = ((int *)GEN_TOP(piVar9[1]));
            piVar4 = piVar9;
            while ((piVar9 = piVar7, cVar3 == '\0' && (piVar4 == ((int *)GEN_TOP(piVar9[2]))))) {
              cVar3 = *((char *)GEN_TOP((piVar9[1] + 0x45)));
              piVar7 = ((int *)GEN_TOP(piVar9[1]));
              piVar4 = piVar9;
            }
          }
        }
      } while (piVar9 != *((int * PTR32 *)GEN_TOP(((int)this + 0x6d4))));
    }
  }
  return;
}

/* ref: Client::Graphics::Scene::Human::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_006ad970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x6ad970u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  undefined * pHVar4;
  
  piVar1 = *(int * PTR32 *)(this + 0x810);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_FWD,this);
  }
  if (-1 < *(int *)(this + 0x7e4)) {
    F_00676850(((undefined *)GEN_TOP((REFG(int, 0x137128c) + 0x3d0))) GEN_EDX_ARG,*(int *)(this + 0x7e4));
    *(undefined4 *)(this + 0x7e4) = 0xffffffff;
  }
  piVar1 = *(int * PTR32 *)(this + 0x7f8);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
    *(undefined4 *)(this + 0x7f8) = 0;
  }
  if (*(int *)(this + 0x7f4) != 0) {
    F_0050c620(*(int *)(this + 0x7f4),0,0);
    *(undefined4 *)(this + 0x7f4) = 0;
  }
  if (*(int *)(this + 0x7f0) != 0) {
    F_0050c620(*(int *)(this + 0x7f0),0,0);
    *(undefined4 *)(this + 0x7f0) = 0;
  }
  piVar1 = *(int * PTR32 *)(this + 0x7ec);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
    *(undefined4 *)(this + 0x7ec) = 0;
  }
  piVar1 = *(int * PTR32 *)(this + 0x7e8);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
    *(undefined4 *)(this + 0x7e8) = 0;
  }
  pHVar4 = this + 0x7bc;
  iVar3 = 10;
  do {
    if (*(int *)pHVar4 != 0) {
      F_0050c620(*(int *)pHVar4,0,0);
      *(int *)pHVar4 = 0;
    }
    pHVar4 = pHVar4 + 4;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  F_006acab0((undefined *)this GEN_EDX_ARG);
  uVar2 = 0;
  if (*(int *)(this + 0x818) != 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x14))) + 0x10))))
                      (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x14))) GEN_EDX_ARG,*(int *)(this + 0x818));
    *(undefined4 *)(this + 0x818) = 0;
  }
  return uVar2;
}

/* ref: Client::Graphics::Scene::Demihuman::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_006ada90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x6ada90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  undefined * pDVar4;
  
  piVar1 = *(int * PTR32 *)(this + 0x788);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_FWD,this);
  }
  if (-1 < *(int *)(this + 0x77c)) {
    F_00676850(((undefined *)GEN_TOP((REFG(int, 0x137128c) + 0x3d0))) GEN_EDX_ARG,*(int *)(this + 0x77c));
    *(undefined4 *)(this + 0x77c) = 0xffffffff;
  }
  piVar1 = *(int * PTR32 *)(this + 0x780);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
    *(undefined4 *)(this + 0x780) = 0;
  }
  pDVar4 = this + 0x768;
  iVar3 = 5;
  do {
    if (*(int *)pDVar4 != 0) {
      F_0050c620(*(int *)pDVar4,0,0);
      *(int *)pDVar4 = 0;
    }
    pDVar4 = pDVar4 + 4;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  F_006acab0((undefined *)this GEN_EDX_ARG);
  uVar2 = 0;
  if (*(int *)(this + 0x790) != 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x14))) + 0x10))))
                      (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x14))) GEN_EDX_ARG,*(int *)(this + 0x790));
    *(undefined4 *)(this + 0x790) = 0;
  }
  return uVar2;
}

/* ref: Client::Graphics::Scene::Weapon::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_006adb50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x6adb50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x744);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD);
    *(undefined4 *)(this + 0x744) = 0;
  }
  if (*(int *)(this + 0x740) != 0) {
    F_0050c620(*(int *)(this + 0x740),0,0);
    *(undefined4 *)(this + 0x740) = 0;
  }
  uVar2 = F_006acab0((undefined *)this GEN_EDX_ARG);
  return uVar2;
}

/* ref: Client::Graphics::Scene::Monster::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_006adba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x6adba0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (-1 < *(int *)(this + 0x740)) {
    F_00676850(((undefined *)GEN_TOP((REFG(int, 0x137128c) + 0x3d0))) GEN_EDX_FWD,*(int *)(this + 0x740));
    *(undefined4 *)(this + 0x740) = 0xffffffff;
  }
  if (*(int *)(this + 0x73c) != 0) {
    F_0050c620(*(int *)(this + 0x73c),0,0);
    *(undefined4 *)(this + 0x73c) = 0;
  }
  uVar1 = F_006acab0((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf4 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006adc00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x6adc00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined1 CVar1;
  undefined1 CVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  undefined3 extraout_var = 0;
  uint uVar6;
  uint uVar7;
  
  if (((*(int *)(this + 0x2c8) != 0) || (*(int *)(this + 0x2d4) != 0)) ||
     (*(int *)(this + 0x2d0) != 0)) {
    F_006a9000(this GEN_EDX_FWD);
  }
  F_006ad380(this GEN_EDX_ARG);
  if (*(int *)(this + 0x2c8) == 0) {
    F_006a0300(this GEN_EDX_ARG);
  }
  if (this[0x65] == (undefined1)0x2) {
    bVar5 = F_006930a0(this GEN_EDX_ARG);
    if (bVar5 == 0) {
      return CONCAT31(extraout_var,bVar5);
    }
    this[0x65] = (undefined1)0x3;
  }
  *(ushort *)(this + 0x70) = *(ushort *)(this + 0x70) & 0xfffd;
  *(ushort *)(this + 0x70) = *(ushort *)(this + 0x70) & 0xfffe;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x144))))(this GEN_EDX_ARG);
  CVar1 = this[0x70];
  uVar6 = *(uint *)(this + 0x74);
  iVar3 = *(int *)(this + 0x80);
  CVar2 = this[100];
  uVar7 = 0;
  if (uVar6 != 0) {
    do {
      iVar4 = *((int *)GEN_TOP((iVar3 + uVar7 * 4)));
      if (iVar4 != 0) {
        F_009bc190(iVar4 GEN_EDX_ARG,(byte)CVar1 >> 2 & (byte)CVar2 & 1);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar6);
  }
  F_006a0520(this GEN_EDX_ARG);
  uVar6 = *(uint *)(this + 0x71c) >> 0xc;
  if (((uVar6 & 1) != 0) && (*(undefined * PTR32 *)(this + 0xe4) != ((undefined *)GEN_TOP(0x0)))) {
    F_00b84310(*(undefined * PTR32 *)(this + 0xe4) GEN_EDX_ARG,*(int *)(this + 0x78) + 0x10);
    uVar6 = F_00b83a70(*(undefined * PTR32 *)(this + 0xe4) GEN_EDX_ARG);
  }
  return uVar6;
}

/* ref: Client::Graphics::Scene::Human::vf4 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_006add00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x6add00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_006a9300(this GEN_EDX_FWD);
  F_006adc00((undefined *)this GEN_EDX_ARG);
  if ((*(int *)(this + 0x2c8) == 0) && (*(int *)(this + 0x818) != 0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x14))) + 0x10))))
              (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x14))) GEN_EDX_ARG,*(int *)(this + 0x818));
    *(undefined4 *)(this + 0x818) = 0;
  }
  if (*(int *)(this + 0x7e4) < 0) {
    uVar1 = F_006767d0(((undefined *)GEN_TOP((REFG(int, 0x137128c) + 0x3d0))) GEN_EDX_ARG);
    *(uint *)(this + 0x7e4) = uVar1;
    if ((int)uVar1 < 0) goto LAB_006add92;
  }
  uVar1 = F_00678120(((undefined *)GEN_TOP((REFG(int, 0x137128c) + 0x3d0))) GEN_EDX_ARG,*(undefined4 *)(this + 0x7e4),this + 0x30);
  if (-1 < (int)uVar1) {
    this[100] = (undefined1)((uVar1 != 0) << 4 | (byte)this[100] & 0xef);
  }
LAB_006add92: ;
  F_006a2e10(this GEN_EDX_ARG);
  uVar1 = F_006a1430(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::Graphics::Scene::Demihuman::vf4 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_006addb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x6addb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  F_006a9440(this GEN_EDX_FWD);
  F_006adc00((undefined *)this GEN_EDX_ARG);
  if ((*(int *)(this + 0x2c8) == 0) && (*(int *)(this + 0x790) != 0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x14))) + 0x10))))
              (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x14))) GEN_EDX_ARG,*(int *)(this + 0x790));
    *(undefined4 *)(this + 0x790) = 0;
  }
  if (*(int *)(this + 0x77c) < 0) {
    uVar2 = F_006767d0(((undefined *)GEN_TOP((REFG(int, 0x137128c) + 0x3d0))) GEN_EDX_ARG);
    *(uint *)(this + 0x77c) = uVar2;
    if ((int)uVar2 < 0) goto LAB_006ade42;
  }
  uVar2 = F_00678120(((undefined *)GEN_TOP((REFG(int, 0x137128c) + 0x3d0))) GEN_EDX_ARG,*(undefined4 *)(this + 0x77c),this + 0x30);
  if (-1 < (int)uVar2) {
    this[100] = (undefined1)((uVar2 != 0) << 4 | (byte)this[100] & 0xef);
  }
LAB_006ade42: ;
  uVar2 = *(uint *)(this + 0x78c);
  if ((uVar2 != 0) && (piVar1 = *(int * PTR32 *)(this + 0x788), piVar1 != ((int *)GEN_TOP(0x0)))) {
    if ((uVar2 & 1) != 0) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,this);
      *(uint *)(this + 0x78c) = *(uint *)(this + 0x78c) & 0xfffffffe;
      return uVar2;
    }
    uVar2 = uVar2 >> 1;
    if ((uVar2 & 1) != 0) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG,this);
      *(uint *)(this + 0x78c) = *(uint *)(this + 0x78c) & 0xfffffffd;
    }
  }
  return uVar2;
}

/* ref: Client::Graphics::Scene::Monster::vf4 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_006ade90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x6ade90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined1 MVar1;
  uint uVar2;
  
  F_006adc00((undefined *)this GEN_EDX_FWD);
  if (*(int *)(this + 0x740) < 0) {
    uVar2 = F_006767d0(((undefined *)GEN_TOP((REFG(int, 0x137128c) + 0x3d0))) GEN_EDX_ARG);
    *(uint *)(this + 0x740) = uVar2;
    if ((int)uVar2 < 0) {
      return uVar2;
    }
  }
  uVar2 = F_00678120(((undefined *)GEN_TOP((REFG(int, 0x137128c) + 0x3d0))) GEN_EDX_ARG,*(undefined4 *)(this + 0x740),this + 0x30);
  if (-1 < (int)uVar2) {
    MVar1 = (undefined1)((uVar2 != 0) << 4 | (byte)this[100] & 0xef);
    uVar2 = CONCAT31((int3)(uVar2 >> 8),MVar1);
    this[100] = MVar1;
  }
  return uVar2;
}

/* ref: FUN_006adef0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006adef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x6adef0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  int iVar6;
  undefined * this_00;
  int local_8;
  
  F_00690510(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[50])REFP(0x10b2bf4));
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 100))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x66))) = 0xffff;
  *((byte *)GEN_TOP(((int)this + 100))) = *((byte *)GEN_TOP(((int)this + 100))) | 0xb;
  *((byte *)GEN_TOP(((int)this + 100))) = *((byte *)GEN_TOP(((int)this + 100))) & 0xef;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[91])REFP(0x10b32ec));
  *((undefined2 *)GEN_TOP(((int)this + 0x72))) = 3;
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x84))) =
       (*(undefined * PTR32 (*)[10])REFP(0x10b2b68));
  F_0062c700((int)this + 0x90 GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x90))) = (*(undefined * PTR32 (*)[5])REFP(0x10b32bc));
  *((undefined4 *)GEN_TOP(((int)this + 200))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xcc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xd0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xd4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xd8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xdc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xec))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xf0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xf4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xf8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xfc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x100))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x104))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x108))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x110))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x114))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x118))) = 0xfe;
  *((undefined4 *)GEN_TOP(((int)this + 0x11a))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x120))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x120))), REFG(float, 0x1375ac0));
  *((undefined4 *)GEN_TOP(((int)this + 0x124))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x124))), REFG(float, 0x1375ac4));
  *((undefined4 *)GEN_TOP(((int)this + 0x128))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x128))), REFG(float, 0x1375ac8));
  *((undefined4 *)GEN_TOP(((int)this + 300))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x130))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x130))), REFG(float, 0x1375ac0));
  *((undefined4 *)GEN_TOP(((int)this + 0x134))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x134))), REFG(float, 0x1375ac4));
  *((undefined4 *)GEN_TOP(((int)this + 0x138))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x138))), REFG(float, 0x1375ac8));
  *((undefined4 *)GEN_TOP(((int)this + 0x13c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x140))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x140))), REFG(float, 0x1375ac0));
  *((undefined4 *)GEN_TOP(((int)this + 0x144))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x144))), REFG(float, 0x1375ac4));
  *((undefined4 *)GEN_TOP(((int)this + 0x148))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x148))), REFG(float, 0x1375ac8));
  *((undefined4 *)GEN_TOP(((int)this + 0x150))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x150))), REFG(float, 0x1375ac0));
  *((undefined4 *)GEN_TOP(((int)this + 0x154))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x154))), REFG(float, 0x1375ac4));
  *((undefined4 *)GEN_TOP(((int)this + 0x158))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x158))), REFG(float, 0x1375ac8));
  *((undefined4 *)GEN_TOP(((int)this + 0x160))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x164))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x270))) = REFG(undefined4, 0x1302e44);
  *((undefined4 *)GEN_TOP(((int)this + 0x274))) = REFG(undefined4, 0x1302e48);
  *((undefined4 *)GEN_TOP(((int)this + 0x278))) = REFG(undefined4, 0x1302e4c);
  *((undefined4 *)GEN_TOP(((int)this + 0x27c))) = REFG(undefined4, 0x1302e50);
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *((undefined4 *)GEN_TOP(((int)this + 0x280))) = REFG(undefined4, 0x1302e54);
  *((undefined4 *)GEN_TOP(((int)this + 0x284))) = REFG(undefined4, 0x1302e58);
  *((undefined4 *)GEN_TOP(((int)this + 0x288))) = REFG(undefined4, 0x1302e5c);
  uVar2 = REFG(undefined4, 0x1302e60);
  *((undefined4 *)GEN_TOP(((int)this + 0x298))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28c))) = uVar2;
  *((undefined4 *)GEN_TOP(((int)this + 0x290))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x294))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x29c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2a0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2a4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2a8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2ac))) = 0;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1094884)));
  *((undefined4 *)GEN_TOP(((int)this + 0x2b0))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x2b0))), REFG(float, 0x1094884));
  *((undefined4 *)GEN_TOP(((int)this + 0x2b4))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x2b8))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 700))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2cc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2d0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2d4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2d8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3dc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3e0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3e4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3ec))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3f0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3f4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3fc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x400))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x404))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x414))) = 0;
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x418)));
  local_8 = 4;
  do {
    F_009f7db0(this_00 GEN_EDX_ARG);
    this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x88)));
    local_8 = local_8 - 1;
  } while (-1 < local_8);
  *((undefined4 *)GEN_TOP(((int)this + 0x6c8))) = 0;
  uVar3 = F_004296a0(0x48,0,0xcb);
  *((uint *)GEN_TOP(((int)this + 0x6c4))) = uVar3;
  *((uint *)GEN_TOP(uVar3)) = uVar3;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x6c4))) + 4))) = *((int *)GEN_TOP(((int)this + 0x6c4)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x6c4))) + 8))) = *((int *)GEN_TOP(((int)this + 0x6c4)));
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x6c4))) + 0x44))) = 1;
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x6c4))) + 0x45))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x6d8))) = 0;
  uVar3 = F_004296a0(0x48,0,0xcb);
  *((uint *)GEN_TOP(((int)this + 0x6d4))) = uVar3;
  *((uint *)GEN_TOP(uVar3)) = uVar3;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x6d4))) + 4))) = *((int *)GEN_TOP(((int)this + 0x6d4)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x6d4))) + 8))) = *((int *)GEN_TOP(((int)this + 0x6d4)));
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x6d4))) + 0x44))) = 1;
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x6d4))) + 0x45))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x6e0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x6e4))) = 0xdeadc0de;
  *((undefined4 *)GEN_TOP(((int)this + 0x6e8))) = 0xdeadc0de;
  *((undefined1 *)GEN_TOP(((int)this + 0x6ec))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x6f0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x6f4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x6f8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x6fc))) = 0;
  F_00b82420((int)this + 0x700 GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 0x710))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x714))) = 0;
  F_00b89bb0((int)this + 0x718 GEN_EDX_ARG);
  *((undefined1 *)GEN_TOP(((int)this + 0x720))) = 1;
  *((ushort *)GEN_TOP(((int)this + 0x70))) = *((ushort *)GEN_TOP(((int)this + 0x70))) & 0xfffe;
  *((ushort *)GEN_TOP(((int)this + 0x70))) = *((ushort *)GEN_TOP(((int)this + 0x70))) & 0xfffd;
  *((ushort *)GEN_TOP(((int)this + 0x70))) = *((ushort *)GEN_TOP(((int)this + 0x70))) | 4;
  *((ushort *)GEN_TOP(((int)this + 0x70))) = *((ushort *)GEN_TOP(((int)this + 0x70))) & 0xfff7;
  *((ushort *)GEN_TOP(((int)this + 0x70))) = *((ushort *)GEN_TOP(((int)this + 0x70))) & 0xffef;
  *((ushort *)GEN_TOP(((int)this + 0x70))) = *((ushort *)GEN_TOP(((int)this + 0x70))) & 0xffdf;
  *((ushort *)GEN_TOP(((int)this + 0x70))) = *((ushort *)GEN_TOP(((int)this + 0x70))) & 0xffbf;
  *((ushort *)GEN_TOP(((int)this + 0x70))) = *((ushort *)GEN_TOP(((int)this + 0x70))) & 0xff7f;
  *((gen_code32 *)GEN_TOP(((int)this + 0xe8))) = ((code *)REFP(0x6b0490));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0xec))) = this;
  *((gen_code32 *)GEN_TOP(((int)this + 0xf0))) = ((code *)REFP(0x6a6580));
  *((gen_code32 *)GEN_TOP(((int)this + 0xf8))) = ((code *)REFP(0x6b04b0));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0xfc))) = this;
  *((gen_code32 *)GEN_TOP(((int)this + 0x100))) = ((code *)REFP(0x691f90));
  *((gen_code32 *)GEN_TOP(((int)this + 0x108))) = ((code *)REFP(0x6b04d0));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x10c))) = this;
  *((gen_code32 *)GEN_TOP(((int)this + 0x110))) = ((code *)REFP(0x6a66c0));
  puVar4 = ((undefined4 *)GEN_TOP(((int)this + 0x170)));
  iVar6 = 0x10;
  do {
    iVar5 = 4;
    do {
      puVar4[0x5b] = 0;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
      iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
    iVar6 = iVar6 - 1;
  } while (iVar6 != 0);
  *((undefined4 *)GEN_TOP(((int)this + 0x168))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x16c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x410))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x40c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c4))) = 0;
  return (uint)this;
}

/* ref: FUN_006ae3e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_006ae3e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x6ae3e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_006adef0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[91])REFP(0x10b345c));
  *((undefined4 *)GEN_TOP(((int)this + 0x74c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x778))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x77c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7e4))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x7e8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7ec))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7f0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7f4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7f8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7fc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x800))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x804))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x808))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x80c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x810))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x818))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x730))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x734))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x738))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x73c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x740))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x744))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x748))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x750))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x754))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x758))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x75c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x760))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x764))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x768))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x76c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x770))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x774))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x780))) = 0x3ff0000;
  *((undefined4 *)GEN_TOP(((int)this + 0x786))) = 0x3ff0000;
  *((undefined1 *)GEN_TOP(((int)this + 0x784))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x78a))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x78c))) = 0x3ff0000;
  *((undefined1 *)GEN_TOP(((int)this + 0x790))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x792))) = 0x3ff0000;
  *((undefined1 *)GEN_TOP(((int)this + 0x796))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x798))) = 0x3ff0000;
  *((undefined1 *)GEN_TOP(((int)this + 0x79c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x79e))) = 0x3ff0000;
  *((undefined1 *)GEN_TOP(((int)this + 0x7a2))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7a4))) = 0x3ff0000;
  *((undefined1 *)GEN_TOP(((int)this + 0x7a8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7aa))) = 0x3ff0000;
  *((undefined1 *)GEN_TOP(((int)this + 0x7ae))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7b0))) = 0x3ff0000;
  *((undefined1 *)GEN_TOP(((int)this + 0x7b4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7b6))) = 0x3ff0000;
  *((undefined1 *)GEN_TOP(((int)this + 0x7ba))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7bc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7cc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 2000))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7d4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7d8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7dc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7e0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x814))) = 0;
  return (uint)this;
}

/* ref: FUN_006ae5b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_006ae5b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x6ae5b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_006adef0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[91])REFP(0x10b35cc));
  *((undefined4 *)GEN_TOP(((int)this + 0x730))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x748))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x77c))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x780))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x784))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x788))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x790))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x734))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x738))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x73c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x740))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x744))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x74a))) = 0x3ff0000;
  *((undefined4 *)GEN_TOP(((int)this + 0x750))) = 0x3ff0000;
  *((undefined1 *)GEN_TOP(((int)this + 0x74e))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x754))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x756))) = 0x3ff0000;
  *((undefined1 *)GEN_TOP(((int)this + 0x75a))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x75c))) = 0x3ff0000;
  *((undefined1 *)GEN_TOP(((int)this + 0x760))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x762))) = 0x3ff0000;
  *((undefined1 *)GEN_TOP(((int)this + 0x766))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x768))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x76c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x770))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x774))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x778))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x78c))) = 0;
  return (uint)this;
}

/* ref: FUN_006ae690 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_006ae690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x6ae690u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_006adef0(this GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x730))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x740))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x744))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[91])REFP(0x10b373c));
  *((undefined4 *)GEN_TOP(((int)this + 0x734))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x738))) = 0xffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x748))) = 0;
  return (uint)this;
}

/* ref: FUN_006ae6d0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_006ae6d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x6ae6d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_006adef0(this GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x730))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x73c))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[91])REFP(0x10b38ac));
  *((undefined2 *)GEN_TOP(((int)this + 0x734))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x740))) = 0xffffffff;
  return (uint)this;
}

/* ref: FUN_006ae710 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006ae710(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6ae710u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x20 + *((int *)GEN_TOP((in_ecx + 0xb4)));
}

/* ref: FUN_006ae730 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006ae730(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6ae730u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((param_2 * 0x20 + *((int *)GEN_TOP((in_ecx + 0xb4))))));
}

/* ref: FUN_006ae750 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_006ae750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x6ae750u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  short * psVar2;
  uint uVar3;
  
  uVar3 = (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xa8))) + 4))) + 0x1e +
                         *((int *)GEN_TOP(((int)this + 0xa8))))));
  uVar1 = 0;
  if (uVar3 != 0) {
    psVar2 = ((short *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xb8))) + 2)));
    do {
      if (*psVar2 != 0) {
        return 1;
      }
      uVar1 = uVar1 + 1;
      psVar2 = psVar2 + 0x1e;
    } while (uVar1 < uVar3);
  }
  return 0;
}

/* ref: FUN_006ae790 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_006ae790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x6ae790u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  short * psVar2;
  uint uVar3;
  
  uVar3 = (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xa8))) + 4))) + 0x1e +
                         *((int *)GEN_TOP(((int)this + 0xa8))))));
  uVar1 = 0;
  if (uVar3 != 0) {
    psVar2 = ((short *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xb8))) + 0xe)));
    do {
      if (*psVar2 != 0) {
        return 1;
      }
      uVar1 = uVar1 + 1;
      psVar2 = psVar2 + 0x1e;
    } while (uVar1 < uVar3);
  }
  return 0;
}

/* ref: FUN_006ae8d0 */
GEN_OWN GEN_FRAME byte F_006ae8d0(GEN_P(char * param_1, unsigned int gen_a0), GEN_P(char * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6ae8d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_2 = (char *)(uintptr_t)gen_a1;)
  return *param_1 == *param_2;
}

/* ref: FUN_006ae920 */
GEN_OWN GEN_FRAME uint F_006ae920(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x6ae920u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  *param_1 = (float)((float10)*param_2 / (float10)*param_3);
  param_1[1] = (float)((float10)param_2[1] / (float10)param_3[1]);
  return (uint)param_1;
}

/* ref: FUN_006ae940 */
GEN_OWN GEN_FRAME uint F_006ae940(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0x6ae940u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  *param_1 = (float)((float10)*param_2 - (float10)param_3);
  param_1[1] = (float)((float10)param_2[1] - (float10)param_3);
  return (uint)param_1;
}

/* ref: FUN_006aea10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006aea10(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0x6aea10u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  undefined4 uVar1;
  
  *in_ecx = *param_2;
  uVar1 = param_2[1];
  in_ecx[2] = (undefined4)gen_fl2bits(param_3);
  in_ecx[1] = uVar1;
  return (uint)in_ecx;
}

/* ref: FUN_006aea30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006aea30(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0x6aea30u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  undefined4 uVar1;
  
  *in_ecx = *param_2;
  uVar1 = param_2[1];
  in_ecx[2] = (undefined4)gen_fl2bits(param_3);
  in_ecx[1] = uVar1;
  return (uint)in_ecx;
}

/* ref: FUN_006aea50 */
GEN_OWN GEN_FRAME uint F_006aea50(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x6aea50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  *param_1 = (float)((float10)*param_2 + (float10)*param_3);
  param_1[1] = (float)((float10)param_2[1] + (float10)param_3[1]);
  param_1[2] = (float)((float10)param_2[2] + (float10)param_3[2]);
  return (uint)param_1;
}

/* ref: FUN_006aea80 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_006aea80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6aea80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a1;)
  uint uVar1;
  int iVar2;
  byte * pbVar3;
  
  uVar1 = 0x10;
  pbVar3 = param_1;
  do {
    if (*(int *)this != *(int *)pbVar3) {
      iVar2 = (uint)*(byte *)this - (uint)*pbVar3;
      if (((iVar2 == 0) && (iVar2 = (uint)*((byte *)GEN_TOP(((int)this + 1))) - (uint)pbVar3[1], iVar2 == 0))
         && (iVar2 = (uint)*((byte *)GEN_TOP(((int)this + 2))) - (uint)pbVar3[2], iVar2 == 0)) {
        iVar2 = (uint)*((byte *)GEN_TOP(((int)this + 3))) - (uint)pbVar3[3];
      }
      return (iVar2 >> 0x1f | 1U) == 0;
    }
    uVar1 = uVar1 - 4;
    pbVar3 = pbVar3 + 4;
    this = ((undefined *)GEN_TOP(((int)this + 4)));
  } while (3 < uVar1);
  return 1;
}

/* ref: FUN_006aeaf0 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_006aeaf0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x6aeaf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF(((float10)in_ecx[3] * (float10)in_ecx[3] +
                         ((float10)in_ecx[2] * (float10)in_ecx[2] +
                         ((float10)*in_ecx * (float10)*in_ecx +
                         (float10)in_ecx[1] * (float10)in_ecx[1]))))));
}

/* ref: FUN_006aeb20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006aeb20(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0x6aeb20u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  *in_ecx = param_2;
  in_ecx[5] = param_3;
  in_ecx[1] = 0.0;
  in_ecx[2] = 0.0;
  in_ecx[4] = 0.0;
  in_ecx[6] = 0.0;
  in_ecx[8] = 0.0;
  in_ecx[9] = 0.0;
  in_ecx[10] = param_4;
  in_ecx[0xc] = 0.0;
  in_ecx[0xd] = 0.0;
  in_ecx[0xe] = 0.0;
  return (uint)in_ecx;
}

/* ref: FUN_006aeb80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006aeb80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x6aeb80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP((param_2 * 0x10 + in_ecx)));
  *puVar1 = *param_3;
  puVar1[1] = param_3[1];
  puVar1[2] = param_3[2];
  return (uint)puVar1;
}

/* ref: FUN_006aebb0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_006aebb0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6aebb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  uVar1 = param_2[2];
  in_ecx[3] = 0;
  in_ecx[2] = uVar1;
  in_ecx[4] = param_2[4];
  in_ecx[5] = param_2[5];
  uVar1 = param_2[6];
  in_ecx[7] = 0;
  in_ecx[6] = uVar1;
  in_ecx[8] = param_2[8];
  in_ecx[9] = param_2[9];
  uVar1 = param_2[10];
  in_ecx[0xb] = 0;
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  in_ecx[10] = uVar1;
  in_ecx[0xc] = param_2[0xc];
  in_ecx[0xd] = param_2[0xd];
  uVar1 = param_2[0xe];
  in_ecx[0xf] = uVar2;
  in_ecx[0xe] = uVar1;
  return 0;
}

/* ref: FUN_006aec30 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_006aec30(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6aec30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar3 = (float10)REFG(double, 0x1088108);
  fVar4 = GEN_X87((float10)((float)GEN_TOF(((float10)(float)((float10)*in_ecx + (float10)in_ecx[4]) * fVar3))));
  fVar5 = GEN_X87((float10)((float)GEN_TOF(((float10)(float)((float10)in_ecx[5] + (float10)in_ecx[1]) * fVar3))));
  fVar1 = param_2[1];
  fVar3 = GEN_X87((float10)((float)GEN_TOF((fVar3 * (float10)(float)((float10)in_ecx[2] + (float10)in_ecx[6])))));
  fVar2 = param_2[2];
  *in_ecx = (float)(fVar4 - (float10)*param_2);
  in_ecx[1] = (float)(fVar5 - (float10)fVar1);
  in_ecx[2] = (float)(fVar3 - (float10)fVar2);
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  in_ecx[4] = (float)((float10)*param_2 + fVar4);
  in_ecx[5] = (float)(fVar5 + (float10)fVar1);
  in_ecx[6] = (float)(fVar3 + (float10)fVar2);
  return 0;
}

/* ref: FUN_006aecf0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_006aecf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6aecf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  fVar4 = (float10)REFG(double, 0x1088108);
  fVar1 = ((float)GEN_TOF(((float10)(float)((float10)param_1[4] - (float10)*param_1) * fVar4)));
  fVar2 = ((float)GEN_TOF(((float10)(float)((float10)param_1[5] - (float10)param_1[1]) * fVar4)));
  fVar3 = ((float)GEN_TOF((fVar4 * (float10)(float)((float10)param_1[6] - (float10)param_1[2]))));
  fVar4 = (float10)fVar1;
  fVar5 = (float10)fVar2;
  fVar6 = (float10)fVar3;
  *((float *)GEN_TOP(((int)this + 0xc))) =
       ((float)GEN_TOF(GEN_X87(SQRT((float10)((float)GEN_TOF((fVar6 * fVar6 + (fVar5 * fVar5 + fVar4 * fVar4))))))));
  *(float *)this = (float)((float10)*param_1 + (float10)fVar1);
  *((float *)GEN_TOP(((int)this + 4))) = (float)((float10)param_1[1] + (float10)fVar2);
  *((float *)GEN_TOP(((int)this + 8))) = (float)((float10)param_1[2] + (float10)fVar3);
  return (uint)this;
}

/* ref: FUN_006aeda0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_006aeda0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6aeda0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  
  bVar1 = F_006aea80(this GEN_EDX_FWD,param_1);
  return bVar1 == 0;
}

/* ref: FUN_006aedc0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_006aedc0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6aedc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  float10 fVar1;
  
  fVar1 = (float10)REFG(double, 0x1088108);
  if ((float10)((float)GEN_TOF(((float10)in_ecx[2] *
                       (float10)((float)GEN_TOF((fVar1 * (float10)(float)((float10)param_2[6] +
                                                                (float10)param_2[2])))) +
                      ((float10)*in_ecx *
                       (float10)((float)GEN_TOF(((float10)(float)((float10)param_2[4] + (float10)*param_2) *
                                       fVar1))) +
                      (float10)in_ecx[1] *
                      (float10)((float)GEN_TOF(((float10)(float)((float10)param_2[5] + (float10)param_2[1]) *
                                      fVar1))))))) - (float10)in_ecx[3] <=
      (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(ABS((float10)in_ecx[2]))) *
                       (float10)((float)GEN_TOF(((float10)(float)((float10)param_2[6] - (float10)param_2[2])
                                       * fVar1))) +
                      ((float10)((float)GEN_TOF(ABS((float10)*in_ecx))) *
                       (float10)((float)GEN_TOF(((float10)(float)((float10)param_2[4] - (float10)*param_2) *
                                       fVar1))) +
                      (float10)((float)GEN_TOF(ABS((float10)in_ecx[1]))) *
                      (float10)((float)GEN_TOF(((float10)(float)((float10)param_2[5] - (float10)param_2[1]) *
                                      fVar1)))))))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_006aef10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006aef10(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6aef10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_2 + 8))) * (float10)in_ecx[2] +
                      ((float10)*((float *)GEN_TOP(param_2)) * (float10)*in_ecx +
                      (float10)*((float *)GEN_TOP((param_2 + 4))) * (float10)in_ecx[1])))) - (float10)in_ecx[3]
      <= (float10)*((float *)GEN_TOP((param_2 + 0xc)))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_006aef50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006aef50(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6aef50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_2 + 8))) * (float10)in_ecx[2] +
                      ((float10)*((float *)GEN_TOP(param_2)) * (float10)*in_ecx +
                      (float10)*((float *)GEN_TOP((param_2 + 4))) * (float10)in_ecx[1])))) - (float10)in_ecx[3]
      <= -(float10)*((float *)GEN_TOP((param_2 + 0xc)))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_006aef90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006aef90(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x6aef90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[4] = *param_3;
  in_ecx[5] = param_3[1];
  in_ecx[6] = param_3[2];
  return (uint)in_ecx;
}

/* ref: FUN_006aefc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006aefc0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x6aefc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[4] = *param_3;
  in_ecx[5] = param_3[1];
  in_ecx[6] = param_3[2];
  return (uint)in_ecx;
}

/* ref: FUN_006aeff0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_006aeff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x6aeff0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  fVar1 = *((float *)GEN_TOP(((int)this + 4)));
  fVar2 = *((float *)GEN_TOP(((int)this + 8)));
  fVar3 = *((float *)GEN_TOP(((int)this + 0x14)));
  fVar4 = *((float *)GEN_TOP(((int)this + 0x18)));
  fVar6 = GEN_X87((float10)(float)((float10)*(float *)this - (float10)*param_1));
  fVar7 = GEN_X87((float10)(float)((float10)fVar1 - (float10)param_1[1]));
  fVar8 = GEN_X87((float10)(float)((float10)fVar2 - (float10)param_1[2]));
  fVar5 = ((float)GEN_TOF(((fVar6 * (float10)*((float *)GEN_TOP(((int)this + 0x10))) + fVar7 * (float10)fVar3) +
                 fVar8 * (float10)fVar4)));
  fVar6 = GEN_X87((float10)((float)GEN_TOF(((float10)((float)GEN_TOF((fVar8 * fVar8 + (fVar6 * fVar6 + fVar7 * fVar7)))) -
                          (float10)param_1[3] * (float10)param_1[3]))));
  if (((float10)0 < fVar6) &&
     ((!GEN_ISNAN(fVar5) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(fVar5 <= *(float *)&REFG(undefined, 0x1088114)))) {
    return 0;
  }
  fVar7 = (float10)fVar5;
  fVar6 = GEN_X87((float10)(float)(fVar7 * fVar7 - fVar6));
  if (fVar6 < (float10)0) {
    return 0;
  }
  fVar6 = GEN_X87((float10)(float)((float10)((float)GEN_TOF(-fVar7)) - (float10)((float)GEN_TOF(GEN_X87(SQRT(fVar6))))));
  if (fVar6 < (float10)0) {
    fVar6 = (float10)0.0;
  }
  *param_2 = ((float)GEN_TOF(((float10)*(float *)this +
                    (float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 0x10))) * fVar6))))));
  param_2[1] = ((float)GEN_TOF(((float10)fVar1 + (float10)(float)((float10)fVar3 * fVar6))));
  param_2[2] = ((float)GEN_TOF(((float10)fVar2 + (float10)(float)(fVar6 * (float10)fVar4))));
  return 1;
}

/* ref: FUN_006af160 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_006af160(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x6af160u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  float fVar1;
  
  fVar1 = ((float)GEN_TOF((((float10)*((float *)GEN_TOP((param_2 + 0xc))) -
                  (float10)((float)GEN_TOF((((float10)*((float *)GEN_TOP(param_2)) * (float10)*in_ecx +
                                   (float10)*((float *)GEN_TOP((param_2 + 4))) * (float10)in_ecx[1]) +
                                  (float10)*((float *)GEN_TOP((param_2 + 8))) * (float10)in_ecx[2])))) /
                 (float10)((float)GEN_TOF((((float10)*((float *)GEN_TOP(param_2)) * (float10)in_ecx[4] +
                                  (float10)in_ecx[5] * (float10)*((float *)GEN_TOP((param_2 + 4)))) +
                                 (float10)in_ecx[6] * (float10)*((float *)GEN_TOP((param_2 + 8)))))))));
  *param_3 = fVar1;
  if ((float10)0 <= (float10)fVar1) {
    return 1;
  }
  return 0;
}

/* ref: FUN_006af1f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006af1f0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x6af1f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[4] = *param_3;
  in_ecx[5] = param_3[1];
  in_ecx[6] = param_3[2];
  return (uint)in_ecx;
}

/* ref: FUN_006af220 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006af220(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0x6af220u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
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

/* ref: FUN_006af260 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_006af260(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6af260u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_0050c620(param_1,0,0);
  }
  return uVar1;
}

/* ref: FUN_006af280 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_006af280(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6af280u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (*((int *)GEN_TOP((param_1 + 0x34))) != 0) {
    uVar1 = F_0050c620(*((int *)GEN_TOP((param_1 + 0x34))),0,0);
    *((undefined4 *)GEN_TOP((param_1 + 0x34))) = 0;
  }
  return uVar1;
}

/* ref: FUN_006af2b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006af2b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x6af2b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  *(float *)this = *param_1 - *param_2;
  *((float *)GEN_TOP(((int)this + 4))) = fVar1 - fVar4;
  *((float *)GEN_TOP(((int)this + 8))) = fVar2 - fVar5;
  *((float *)GEN_TOP(((int)this + 0xc))) = fVar3 - fVar6;
  return (uint)param_1;
}

/* ref: FUN_006af2d0 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_006af2d0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x6af2d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  return (float10)*in_ecx;
}

/* ref: FUN_006af2f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006af2f0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6af2f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *in_ecx = *in_ecx - *param_2;
  in_ecx[1] = in_ecx[1] - fVar1;
  in_ecx[2] = in_ecx[2] - fVar2;
  in_ecx[3] = in_ecx[3] - fVar3;
  return (uint)param_2;
}

/* ref: FUN_006af310 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006af310(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0x6af310u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  F_00d988a0(param_1 GEN_EDX_FWD,param_2,param_3);
  return param_1;
}

/* ref: FUN_006af340 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006af340(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6af340u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *in_ecx = *param_2;
  in_ecx[1] = uVar1;
  in_ecx[2] = uVar2;
  in_ecx[3] = uVar3;
  return (uint)param_2;
}

/* ref: FUN_006af360 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006af360(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6af360u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *((undefined4 *)GEN_TOP((in_ecx + 0x20))) = *param_2;
  *((undefined4 *)GEN_TOP((in_ecx + 0x24))) = uVar1;
  *((undefined4 *)GEN_TOP((in_ecx + 0x28))) = uVar2;
  *((undefined4 *)GEN_TOP((in_ecx + 0x2c))) = uVar3;
  return (uint)param_2;
}

/* ref: FUN_006af380 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006af380(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6af380u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *in_ecx = *param_2;
  in_ecx[1] = uVar1;
  in_ecx[2] = uVar2;
  in_ecx[3] = uVar3;
  return (uint)in_ecx;
}

/* ref: FUN_006af3b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006af3b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x6af3b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(uint *)this = CONCAT22((undefined2)param_1,(undefined2)param_2);
  return CONCAT22((undefined2)param_1,(undefined2)param_2);
}

/* ref: FUN_006af3d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006af3d0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6af3d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006af3e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006af3e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x6af3e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(uint *)this = CONCAT22((undefined2)param_1,(undefined2)param_2);
  return CONCAT22((undefined2)param_1,(undefined2)param_2);
}

/* ref: FUN_006af420 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006af420(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6af420u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  return (uint)(*in_ecx < *param_2);
}

/* ref: FUN_006af480 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006af480(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0x6af480u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  *in_ecx = param_2;
  in_ecx[1] = (undefined4)gen_fl2bits(param_3);
  return (uint)in_ecx;
}

/* ref: FUN_006af4a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_006af4a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x6af4a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int * piVar2;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_FWD);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG)));
  return uVar1 + 4 + *piVar2 * 4;
}

/* ref: FUN_006af4c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_006af4c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x6af4c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int * piVar2;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_FWD);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG)));
  return uVar1 + 0x14 + *piVar2 * 4;
}

/* ref: FUN_006af4e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006af4e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x6af4e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  int * piVar2;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_FWD);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG)));
  return uVar1 + 0x14 + (*piVar2 + (param_2 + param_1 * 4) * 8) * 4;
}

/* ref: FUN_006af5d0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_006af5d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x6af5d0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *((float *)GEN_TOP((in_ecx + 4))) = param_2;
  *((undefined1 *)GEN_TOP((in_ecx + 9))) = 1;
  return;
}

/* ref: FUN_006af5f0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_006af5f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6af5f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *param_1 == *((int *)GEN_TOP(((int)this + 8)));
}

/* ref: FUN_006af610 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006af610(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6af610u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x74))) = param_2;
  return param_2;
}

/* ref: FUN_006af620 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_006af620(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6af620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  byte bVar1;
  
  if (*((int *)GEN_TOP((in_ecx + 0x54))) != 0) {
    bVar1 = F_009f0920(*((int *)GEN_TOP((in_ecx + 0x54))) GEN_EDX_FWD,param_2);
    return bVar1;
  }
  return 0;
}

/* ref: FUN_006af640 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_006af640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6af640u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x54))) != ((undefined *)GEN_TOP(0x0))) {
    F_009f4320(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x54))) GEN_EDX_FWD,param_1);
    return;
  }
  return;
}

/* ref: FUN_006af660 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_006af660(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6af660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if (*((int *)GEN_TOP((in_ecx + 0x54))) != 0) {
    F_009f0900(*((int *)GEN_TOP((in_ecx + 0x54))) GEN_EDX_FWD,param_2);
    return;
  }
  return;
}

/* ref: FUN_006af690 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_006af690(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x6af690u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  if (*((int *)GEN_TOP((in_ecx + 0x54))) != 0) {
    F_009f13a0(*((int *)GEN_TOP((in_ecx + 0x54))) GEN_EDX_FWD,param_2);
  }
  return;
}

/* ref: FUN_006af710 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_006af710(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6af710u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  return (uint)(*param_1 < *param_2);
}

/* ref: FUN_006af770 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006af770(GEN_P(undefined2 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6af770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined2 * in_ecx = (undefined2 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = (undefined2)param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006af790 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006af790(GEN_P(undefined2 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6af790u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined2 * in_ecx = (undefined2 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = (undefined2)param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006af7b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006af7b0(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6af7b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_006af7e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006af7e0(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6af7e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_006af830 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006af830(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6af830u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_006af880 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006af880(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6af880u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_006af920 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_006af920(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6af920u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,0xd8);
  return (uint)uVar1;
}

/* ref: FUN_006af950 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_006af950(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6af950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  ushort uVar1;
  
  uVar1 = (ushort)param_2 << 0xf | *((ushort *)GEN_TOP((param_1 + 6))) & 0x7fff;
  *((ushort *)GEN_TOP((param_1 + 6))) = uVar1;
  return uVar1;
}

/* ref: FUN_006af990 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_006af990(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6af990u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  ushort uVar1;
  
  uVar1 = (ushort)param_2 << 0xf | *((ushort *)GEN_TOP((param_1 + 0xe))) & 0x7fff;
  *((ushort *)GEN_TOP((param_1 + 0xe))) = uVar1;
  return uVar1;
}

/* ref: FUN_006afa50 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_006afa50(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6afa50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0xd8);
  return (uint)uVar1;
}

/* ref: FUN_006afa80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006afa80(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x6afa80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006afad0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_006afad0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6afad0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0xd8);
  return (uint)uVar1;
}

/* ref: FUN_006afb40 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_006afb40(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6afb40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 8,0xd8);
  return (uint)uVar1;
}

/* ref: FUN_006afb70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006afb70(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x6afb70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006afb90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006afb90(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x6afb90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006afbb0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_006afbb0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6afbb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x48,param_2,0xcb);
  return uVar1;
}

/* ref: FUN_006afbe0 */
GEN_OWN GEN_FRAME uint F_006afbe0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6afbe0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x14;
}

/* ref: FUN_006afbf0 */
GEN_OWN GEN_FRAME uint F_006afbf0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6afbf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x15;
}

/* ref: FUN_006afc00 */
GEN_OWN GEN_FRAME uint F_006afc00(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6afc00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_006afc10 */
GEN_OWN GEN_FRAME uint F_006afc10(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6afc10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 4;
}

/* ref: FUN_006afc20 */
GEN_OWN GEN_FRAME uint F_006afc20(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6afc20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 8;
}

/* ref: FUN_006afc30 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_006afc30(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6afc30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x18,param_2,0xd8);
  return uVar1;
}

/* ref: FUN_006afc80 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_006afc80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6afc80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x84)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
  }
  *((int * PTR32 *)GEN_TOP(((int)this + 0x84))) = param_1;
  return;
}

/* ref: FUN_006afce0 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_006afce0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x6afce0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  float10 fVar1;
  
  fVar1 = GEN_X87((float10)((float)GEN_TOF(((float10)1 - (float10)*((float *)GEN_TOP((in_ecx + 0x7c)))))));
  return GEN_X87((float10)(float)((float10)1 - fVar1 * fVar1));
}

/* ref: FUN_006afd20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006afd20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6afd20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x14))) = param_2;
  return param_2;
}

/* ref: FUN_006afd30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006afd30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x6afd30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int * piVar1;
  uint uVar2;
  
  if (param_2 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 8))))(param_2 GEN_EDX_FWD);
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x48)));
  if (*((int *)GEN_TOP((uVar2 + param_1 * 4))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((uVar2 + param_1 * 4)));
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x48))) + param_1 * 4))) = param_2;
    return uVar2;
  }
  *((int * PTR32 *)GEN_TOP((uVar2 + param_1 * 4))) = param_2;
  return uVar2;
}

/* ref: FUN_006afd90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006afd90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6afd90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x70))) = param_2;
  return param_2;
}

/* ref: FUN_006afdb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006afdb0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6afdb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x74))) = param_2;
  return param_2;
}

/* ref: FUN_006afde0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006afde0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6afde0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  if ((ushort)param_1 == 0xffff) {
    return 0;
  }
  return (int)this + (uint)(ushort)param_1 * 0x18 + 0x24;
}

/* ref: FUN_006afe20 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_006afe20(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6afe20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0xd4);
  return uVar1;
}

/* ref: FUN_006afe60 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_006afe60(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6afe60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0xd8);
  return uVar1;
}

/* ref: FUN_006afea0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_006afea0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6afea0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0xd8);
  return uVar1;
}

/* ref: FUN_006afee0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_006afee0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6afee0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 8,param_2,0xd8);
  return uVar1;
}

/* ref: FUN_006aff20 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_006aff20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6aff20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_006aff40 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_006aff40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6aff40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_006aff90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006aff90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6aff90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *((uint *)GEN_TOP((uVar2 + 8)));
  if (*((char *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 8))) + 0x15))) == '\0') {
    *((uint * PTR32 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 8))) + 4))) = param_1;
  }
  *((uint *)GEN_TOP((uVar2 + 4))) = param_1[1];
  if (param_1 == *((uint * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = uVar2;
    *((uint * PTR32 *)GEN_TOP((uVar2 + 8))) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  puVar1 = ((uint *)GEN_TOP(param_1[1]));
  if (param_1 == ((uint *)GEN_TOP(puVar1[2]))) {
    puVar1[2] = uVar2;
    *((uint * PTR32 *)GEN_TOP((uVar2 + 8))) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  *puVar1 = uVar2;
  *((uint * PTR32 *)GEN_TOP((uVar2 + 8))) = param_1;
  param_1[1] = uVar2;
  return uVar2;
}

/* ref: FUN_006afff0 */
GEN_OWN GEN_FRAME uint F_006afff0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6afff0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: FUN_006b0000 */
GEN_OWN GEN_FRAME uint F_006b0000(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6b0000u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*((uint *)GEN_TOP((param_1 + 8))) + 0x15)));
  uVar2 = *((uint *)GEN_TOP((param_1 + 8)));
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *((uint *)GEN_TOP((uVar3 + 8)));
    cVar1 = *((char *)GEN_TOP((uVar2 + 0x15)));
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_006b0020 */
GEN_OWN GEN_FRAME uint F_006b0020(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6b0020u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *((char *)GEN_TOP((*param_1 + 0x15)));
  piVar2 = ((int *)GEN_TOP(*param_1));
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = ((int *)GEN_TOP(*piVar3));
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_006b0080 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b0080(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6b0080u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x10))) = *param_2;
  *((undefined4 *)GEN_TOP((in_ecx + 0x14))) = param_2[1];
  *((undefined4 *)GEN_TOP((in_ecx + 0x18))) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_006b00a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b00a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6b00a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x1f0))) = param_2;
  return param_2;
}

/* ref: FUN_006b00b0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_006b00b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x6b00b0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *((float *)GEN_TOP((in_ecx + 500))) = (float)((float10)param_2 * (float10)param_2);
  return;
}

/* ref: FUN_006b00d0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_006b00d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x6b00d0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *((float *)GEN_TOP((in_ecx + 0x1f8))) = param_2;
  return;
}

/* ref: FUN_006b00f0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_006b00f0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(byte param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x6b00f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(byte param_3 = (byte)gen_a2;)
  *((byte *)GEN_TOP((param_2 + 0x3a6e + param_1))) = param_3;
  return param_3;
}

/* ref: FUN_006b0110 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_006b0110(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6b0110u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((ushort *)GEN_TOP((in_ecx + 8))) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_006b0120 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_006b0120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x6b0120u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((ushort *)GEN_TOP(((int)this + 10))) = (ushort)param_1;
  *((undefined2 *)GEN_TOP(((int)this + 0xc))) = (undefined2)param_2;
  return (ushort)param_1;
}

/* ref: FUN_006b0150 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b0150(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x6b0150u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006b0160 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_006b0160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x6b0160u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*((char *)GEN_TOP((iVar2 + 0x15))) == '\0') {
    piVar3 = *((int * PTR32 *)GEN_TOP((iVar2 + 8)));
    if (*((char *)GEN_TOP(((int)piVar3 + 0x15))) == '\0') {
      cVar1 = *((char *)GEN_TOP((*piVar3 + 0x15)));
      piVar4 = ((int *)GEN_TOP(*piVar3));
      while (cVar1 == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar4 + 0x15)));
        piVar3 = piVar4;
        piVar4 = ((int *)GEN_TOP(*piVar4));
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
    cVar1 = *((char *)GEN_TOP((iVar2 + 0x15)));
    while ((cVar1 == '\0' && (*(int *)this == *((int *)GEN_TOP((iVar2 + 8)))))) {
      *(int *)this = iVar2;
      iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
      cVar1 = *((char *)GEN_TOP((iVar2 + 0x15)));
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_006b01b0 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_006b01b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6b01b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((ushort *)GEN_TOP((in_ecx + 8))) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_006b0220 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b0220(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6b0220u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((in_ecx + 0x78 + param_2 * 4)));
}

/* ref: FUN_006b0230 */
GEN_OWN GEN_FRAME uint F_006b0230(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6b0230u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_006b0250 */
GEN_OWN GEN_FRAME uint F_006b0250(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6b0250u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_006b0260 */
GEN_OWN GEN_FRAME uint F_006b0260(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6b0260u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_006b0270 */
GEN_OWN GEN_FRAME uint F_006b0270(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6b0270u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_006b0280 */
GEN_OWN GEN_FRAME uint F_006b0280(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6b0280u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_006b0290 */
GEN_OWN GEN_FRAME uint F_006b0290(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6b0290u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_006b02a0 */
GEN_OWN GEN_FRAME uint F_006b02a0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6b02a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_006b02d0 */
GEN_OWN GEN_FRAME uint F_006b02d0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6b02d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_006b0310 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_006b0310(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6b0310u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_006b0330 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_006b0330(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6b0330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_006b0350 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_006b0350(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6b0350u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: Apricot::IInstanceListenner::vf1 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_006b0380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x6b0380u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  return 0;
}

/* ref: std::allocator<std::_Container_proxy>::construct_006b0390 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_006b0390(GEN_P(undefined * this, unsigned int gen_a0), GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x6b0390u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: Apricot::IInstanceListenner::vf2 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_006b03b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6b03b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1087f04));
  return 1;
}

/* ref: Apricot::IInstanceListenner::vf3 */
GEN_OWN GEN_NOFRAME uint F_006b03d0(void)
{
  GEN_ENTER(0x6b03d0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::IInstanceListenner::vf4 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_006b03e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6b03e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 0;
}

/* ref: Apricot::IInstanceListenner::vf5 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_006b03f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x6b03f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  return 0;
}

/* ref: Apricot::IInstanceListenner::vf6 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_006b0400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x6b0400u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *param_2 = GEN_FLT_TO(*param_2, REFG(float, 0x1087f04));
  return 1;
}

/* ref: Apricot::IInstanceListenner::vf7 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_006b0420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x6b0420u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  return 0;
}

/* ref: Apricot::IInstanceListenner::vf8 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_006b0430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6b0430u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Apricot::IInstanceListenner::vf9 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_006b0440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6b0440u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Apricot::IInstanceListenner::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b0450(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6b0450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[10])REFP(0x10b2a9c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_006b0490 */
GEN_OWN GEN_FRAME uint F_006b0490(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x6b0490u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = (*((code *)GEN_TOP(*param_2)))(param_1,param_3,param_4);
  return uVar1;
}

/* ref: FUN_006b04b0 */
GEN_OWN GEN_FRAME uint F_006b04b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x6b04b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = (*((code *)GEN_TOP(*param_2)))(param_1,param_3);
  return uVar1;
}

/* ref: FUN_006b04d0 */
GEN_OWN GEN_FRAME uint F_006b04d0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x6b04d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = (*((code *)GEN_TOP(*param_2)))(param_1,param_3);
  return uVar1;
}

/* ref: FUN_006b04f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b04f0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6b04f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  return *in_ecx - *param_2 >> 3;
}

/* ref: FUN_006b0540 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_006b0540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6b0540u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x10;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_1;
  return 1;
}

/* ref: FUN_006b0570 */
GEN_OWN GEN_FRAME unsigned int F_006b0570(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x6b0570u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  int * piVar1;
  
  if (param_1 != param_2) {
    piVar1 = param_1;
    do {
      if (*piVar1 == *param_3) {
        return 0;
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_006b0590 */
GEN_OWN GEN_FRAME byte F_006b0590(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(byte param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x6b0590u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(byte param_3 = (byte)gen_a2;)
  int * piVar1;
  
  for (piVar1 = param_1; piVar1 != param_2; piVar1 = piVar1 + 1) {
    if (*piVar1 != 0) {
      F_0050c620(*piVar1,0,0);
    }
  }
  return param_3;
}

/* ref: FUN_006b05d0 */
GEN_OWN GEN_FRAME uint F_006b05d0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6b05d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_006b05e0 */
GEN_OWN GEN_FRAME uint F_006b05e0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6b05e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_006b05f0 */
GEN_OWN GEN_FRAME uint F_006b05f0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6b05f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_006b0600 */
GEN_OWN GEN_FRAME uint F_006b0600(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6b0600u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_006b0610 */
GEN_OWN GEN_FRAME uint F_006b0610(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6b0610u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_006b0620 */
GEN_OWN GEN_FRAME uint F_006b0620(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x6b0620u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_006b0650 */
GEN_OWN GEN_FRAME uint F_006b0650(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6b0650u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_006b0660 */
GEN_OWN GEN_FRAME uint F_006b0660(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6b0660u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_006b0670 */
GEN_OWN GEN_FRAME uint F_006b0670(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6b0670u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_006b0680 */
GEN_OWN GEN_FRAME byte F_006b0680(void)
{
  GEN_ENTER(0x6b0680u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_006b0690 */
GEN_OWN GEN_FRAME uint F_006b0690(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x6b0690u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_006b06c0 */
GEN_OWN GEN_FRAME uint F_006b06c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x6b06c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_006b0710 */
GEN_OWN GEN_FRAME byte F_006b0710(void)
{
  GEN_ENTER(0x6b0710u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_006b0720 */
GEN_OWN GEN_FRAME uint F_006b0720(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6b0720u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_006b0730 */
GEN_OWN GEN_FRAME uint F_006b0730(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6b0730u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_006b0750 */
GEN_OWN GEN_FRAME uint F_006b0750(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6b0750u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: Client::Graphics::Vfx::VfxResourceInstanceListenner::vf1 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_006b0790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6b0790u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Client::Graphics::Vfx::VfxResourceInstanceListenner::vf2 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_006b07a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6b07a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Client::Graphics::Vfx::VfxResourceInstanceListenner::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b07b0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6b07b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x10b2ad0));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_006b0800 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b0800(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6b0800u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006b0830 */
GEN_OWN GEN_FRAME uint F_006b0830(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x6b0830u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = (*((code *)GEN_TOP(*param_2)))(param_1,param_3,param_4);
  return uVar1;
}

/* ref: FUN_006b0850 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_006b0850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6b0850u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_006b0880 */
GEN_OWN GEN_FRAME uint F_006b0880(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6b0880u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x1fU >> 5;
}

/* ref: FUN_006b0890 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b0890(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6b0890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_006b08a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b08a0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6b08a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*in_ecx + param_2 * 4)));
}

/* ref: FUN_006b08b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b08b0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x6b08b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  uint * puVar1;
  uint uVar2;
  
  uVar2 = 1 << ((byte)param_2 & 0x1f);
  puVar1 = ((uint *)GEN_TOP((*param_1 + (param_2 >> 5) * 4)));
  if (param_3 != '\0') {
    *puVar1 = *puVar1 | uVar2;
    return uVar2;
  }
  *puVar1 = *puVar1 & ~uVar2;
  return ~uVar2;
}

/* ref: FUN_006b08f0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_006b08f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x6b08f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  int iVar2;
  int iVar3;
  code * pcVar4;
  int iVar5;
  uint uVar6;
  int * piVar7;
  uint uVar8;
  int iVar9;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 0x24)));
  iVar3 = *((int *)GEN_TOP(((int)this + 0x18)));
  pcVar4 = *((gen_code32 *)GEN_TOP(((int)this + 0x20)));
  iVar5 = *((int *)GEN_TOP(((int)this + 0x68)));
  puVar1 = ((uint *)GEN_TOP(((int)this + 0x6c)));
  uVar8 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  while (uVar8 < iVar5 - 1U) {
    piVar7 = ((int *)GEN_TOP(((uVar8 & 0x1f) * 0x50 + *((int *)GEN_TOP(((int)this + (uVar8 >> 5) * 4 + 0x28))))));
    iVar9 = *piVar7;
    if (iVar9 != 0) {
      piVar7 = piVar7 + 4;
      do {
        (*pcVar4)(iVar2 + iVar3,piVar7);
        piVar7 = piVar7 + 1;
        iVar9 = iVar9 - 1;
      } while (iVar9 != 0);
    }
    puVar1 = ((uint *)GEN_TOP(((int)this + 0x6c)));
    uVar8 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  }
  uVar8 = *((int *)GEN_TOP(((int)this + 0x68))) - 1;
  iVar5 = *((int *)GEN_TOP(((int)this + (uVar8 >> 5) * 4 + 0x28)));
  iVar9 = (uVar8 & 0x1f) * 0x50;
  uVar6 = *((uint *)GEN_TOP((iVar5 + iVar9)));
  puVar1 = ((uint *)GEN_TOP(((int)this + 0x70)));
  uVar8 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  if (uVar8 < uVar6) {
    do {
      (*pcVar4)(iVar2 + iVar3,iVar5 + iVar9 + 0x10 + uVar8 * 4);
      puVar1 = ((uint *)GEN_TOP(((int)this + 0x70)));
      uVar8 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
    } while (uVar8 < uVar6);
  }
  return 0;
}

/* ref: FUN_006b09d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b09d0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x6b09d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  uint * puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  
  for (uVar5 = param_3 - 1U >> 5; param_2 >> 5 < uVar5; uVar5 = uVar5 - 1) {
    iVar2 = *param_1;
    *((uint *)GEN_TOP((iVar2 + uVar5 * 4))) =
         *((uint *)GEN_TOP((iVar2 - 4 + uVar5 * 4))) >> 0x1f | *((int *)GEN_TOP((iVar2 + uVar5 * 4))) * 2;
  }
  bVar6 = (byte)param_2 & 0x1f;
  uVar5 = -1 << bVar6;
  if (param_4 == '\0') {
    uVar7 = 0;
  }
  else {
    uVar7 = 1 << bVar6;
  }
  puVar1 = ((uint *)GEN_TOP((*param_1 + (param_2 >> 5) * 4)));
  uVar3 = *puVar1;
  uVar4 = (uVar3 & uVar5) * 2;
  *puVar1 = ~uVar5 & uVar3 | uVar4 | uVar7;
  return uVar4;
}

/* ref: FUN_006b0a50 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_006b0a50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x6b0a50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = -1 << ((byte)param_1 & 0x1f);
  uVar3 = param_1 >> 5;
  puVar1 = ((uint *)GEN_TOP((*(int *)this + uVar3 * 4)));
  uVar2 = *puVar1;
  *puVar1 = ~uVar4 & uVar2 | uVar2 >> 1 & uVar4;
  while (uVar3 = uVar3 + 1, uVar3 <= param_2 - 1U >> 5) {
    puVar1 = ((uint *)GEN_TOP((*(int *)this + uVar3 * 4 - 4)));
    *puVar1 = *puVar1 | *((int *)GEN_TOP((*(int *)this + uVar3 * 4))) << 0x1f;
    puVar1 = ((uint *)GEN_TOP((*(int *)this + uVar3 * 4)));
    *puVar1 = *puVar1 >> 1;
  }
  return 0;
}

/* ref: FUN_006b0ae0 */
GEN_OWN GEN_FRAME uint F_006b0ae0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6b0ae0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_006b0af0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b0af0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x6b0af0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_006b0b50 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_006b0b50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x6b0b50u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *((float *)GEN_TOP((in_ecx + 0x4d0))) = param_2;
  return;
}

/* ref: FUN_006b0b70 */
GEN_OWN GEN_FRAME uint F_006b0b70(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6b0b70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_006b0b90 */
GEN_OWN GEN_FRAME uint F_006b0b90(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6b0b90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_006b0ba0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b0ba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x6b0ba0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_006b0bc0 */
GEN_OWN GEN_FRAME uint F_006b0bc0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6b0bc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_006b0bd0 */
GEN_OWN GEN_FRAME uint F_006b0bd0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x6b0bd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_006b0c20 */
GEN_OWN GEN_FRAME uint F_006b0c20(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(code * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x6b0c20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(code * param_5 = (code *)(uintptr_t)gen_a4;)
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = param_2;
  while (param_3 < iVar2) {
    iVar4 = (iVar2 - 1) / 2;
    puVar1 = ((undefined4 *)GEN_TOP((param_1 + iVar4 * 8)));
    uVar3 = (*param_5)(puVar1,param_4);
    if ((char)uVar3 == '\0') break;
    *((undefined4 *)GEN_TOP((param_1 + iVar2 * 8))) = *puVar1;
    *((undefined4 *)GEN_TOP((param_1 + 4 + iVar2 * 8))) = puVar1[1];
    iVar2 = iVar4;
  }
  *((undefined4 *)GEN_TOP((param_1 + iVar2 * 8))) = *param_4;
  uVar3 = param_4[1];
  *((uint *)GEN_TOP((param_1 + 4 + iVar2 * 8))) = uVar3;
  return uVar3;
}

/* ref: FUN_006b0c90 */
GEN_OWN GEN_FRAME uint F_006b0c90(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6b0c90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_006b0ca0 */
GEN_OWN GEN_FRAME uint F_006b0ca0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6b0ca0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: Client::Graphics::Scene::Object::vf3 */
GEN_OWN GEN_NOFRAME byte F_006b0cc0(void)
{
  GEN_ENTER(0x6b0cc0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_006b0ce0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b0ce0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6b0ce0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 0x24))) & 3 | param_2;
  *((uint *)GEN_TOP((in_ecx + 0x24))) = uVar1;
  return uVar1;
}

/* ref: FUN_006b0d10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b0d10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6b0d10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x28))) = param_2;
  return param_2;
}

/* ref: FUN_006b0d80 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_006b0d80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6b0d80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x65))) = param_2;
  return param_2;
}

/* ref: FUN_006b0de0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b0de0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x6b0de0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 0xc0)));
  *((float *)GEN_TOP((uVar1 + 0xa4))) = param_2;
  return uVar1;
}

/* ref: FUN_006b0e20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b0e20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x6b0e20u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 0xc0)));
  *((float *)GEN_TOP((uVar1 + 0xac))) = param_2;
  return uVar1;
}

/* ref: FUN_006b0e50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b0e50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x6b0e50u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 0xc0)));
  *((float *)GEN_TOP((uVar1 + 0xb0))) = param_2;
  return uVar1;
}

/* ref: FUN_006b0e70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b0e70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6b0e70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x60))) = *param_2;
  *((undefined4 *)GEN_TOP((in_ecx + 100))) = param_2[1];
  *((undefined4 *)GEN_TOP((in_ecx + 0x68))) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_006b0ea0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b0ea0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6b0ea0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x70))) = *param_2;
  *((undefined4 *)GEN_TOP((in_ecx + 0x74))) = param_2[1];
  *((undefined4 *)GEN_TOP((in_ecx + 0x78))) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_006b0ed0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b0ed0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6b0ed0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 0xc0)));
  *((undefined1 *)GEN_TOP((uVar1 + 0xb8))) = param_2;
  return uVar1;
}

/* ref: FUN_006b0ef0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b0ef0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x6b0ef0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 0xc0)));
  *((float *)GEN_TOP((uVar1 + 0xb4))) = param_2;
  return uVar1;
}

/* ref: FUN_006b0f20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b0f20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x6b0f20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  *((uint *)GEN_TOP(((int)this + param_1 * 4 + 0x34))) = param_2;
  return param_2;
}

/* ref: FUN_006b0f40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b0f40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x6b0f40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP((param_1 * 0x40 + 0x10 + *((int *)GEN_TOP(((int)this + 0x4c))))));
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  puVar1[2] = param_2[2];
  puVar1[4] = param_2[4];
  puVar1[5] = param_2[5];
  puVar1[6] = param_2[6];
  puVar1[7] = param_2[7];
  puVar1[8] = param_2[8];
  puVar1[9] = param_2[9];
  puVar1[10] = param_2[10];
  return (uint)puVar1;
}

/* ref: FUN_006b0fd0 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_006b0fd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x6b0fd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  ushort uVar1;
  uint uVar2;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_FWD);
  uVar1 = *((ushort *)GEN_TOP((uVar2 + 6 + (param_1 / *((ushort *)GEN_TOP((uVar2 + 2)))) * 2)));
  if (uVar1 == 0xffff) {
    return 0;
  }
  return *((ushort *)GEN_TOP(((uVar2 - 6) +
          ((uint)*((ushort *)GEN_TOP((uVar2 + 4))) +
          ((uint)uVar1 + param_1 % (uint)*((ushort *)GEN_TOP((uVar2 + 2)))) * (uint)*((byte *)GEN_TOP((uVar2 + 1))) +
          param_2 + (param_2 / 100 + (param_2 / 10) * -2) * 5) * 2)));
}

/* ref: FUN_006b1070 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b1070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x6b1070u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_FWD);
  return uVar1 + (param_2 - 2 + (param_3 + param_1 * 2) * 2) * 0x1400;
}

/* ref: FUN_006b10a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b10a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6b10a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_FWD);
  return uVar1 + 0x1b5d0 + param_1 * 0x230;
}

/* ref: FUN_006b10c0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_006b10c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6b10c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return (*((uint *)GEN_TOP((in_ecx + 4))) & param_2) != 0;
}

/* ref: FUN_006b1150 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b1150(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6b1150u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 1: ;
    return *((uint *)GEN_TOP((in_ecx + 0x68)));
  case 2: ;
    return *((uint *)GEN_TOP((in_ecx + 0x70)));
  case 3: ;
    return *((uint *)GEN_TOP((in_ecx + 0x6c)));
  case 4: ;
    return *((uint *)GEN_TOP((in_ecx + 0x74)));
  default: ;
    return 0;
  }
}

/* ref: FUN_006b11b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_006b11b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x6b11b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_FWD);
  uVar1 = (*((ushort *)GEN_TOP((uVar1 + 2))) >> 1 & 0x55555555) + (*((ushort *)GEN_TOP((uVar1 + 2))) & 0x55555555);
  uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
  uVar1 = (uVar1 >> 4 & 0xf0f0f0f) + (uVar1 & 0xf0f0f0f);
  return (uVar1 >> 8) + (uVar1 & 0xff00ff);
}

/* ref: FUN_006b1210 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b1210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6b1210u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_FWD);
  uVar1 = (uint)*((ushort *)GEN_TOP((uVar1 + 2))) & (1 << GEN_SHC((char)param_1 + 1U, (char)param_1 + 1U)) - 1U;
  uVar1 = (uVar1 >> 1 & 0x55555555) + (uVar1 & 0x55555555);
  uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
  uVar1 = (uVar1 >> 4 & 0xf0f0f0f) + (uVar1 & 0xf0f0f0f);
  return ((uVar1 >> 8) + (uVar1 & 0xff00ff)) - 1;
}

/* ref: FUN_006b12f0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_006b12f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x6b12f0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *((float *)GEN_TOP((in_ecx + 0x290))) = param_2;
  return;
}

/* ref: FUN_006b1340 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_006b1340(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6b1340u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((ushort *)GEN_TOP((in_ecx + 0x72))) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_006b1350 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_006b1350(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x6b1350u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *((float *)GEN_TOP((in_ecx + 0x294))) = param_2;
  return;
}

/* ref: FUN_006b1390 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b1390(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6b1390u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x7c))) + param_2 * 4)));
}

/* ref: FUN_006b13d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b13d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x6b13d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xdc))) + 0x10 + param_1 * 0x40)));
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  puVar1[2] = param_2[2];
  puVar1[4] = param_2[4];
  puVar1[5] = param_2[5];
  puVar1[6] = param_2[6];
  puVar1[7] = param_2[7];
  puVar1[8] = param_2[8];
  puVar1[9] = param_2[9];
  puVar1[10] = param_2[10];
  return (uint)puVar1;
}

/* ref: FUN_006b1440 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_006b1440(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x6b1440u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  float10 fVar1;
  
  if (*((int *)GEN_TOP((in_ecx + 0x160))) != 0) {
    fVar1 = GEN_X87((float10)((float)GEN_TOF(((float10)1 - (float10)*((float *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x160))) + 0x7c)))))));
    return GEN_X87((float10)(float)((float10)1 - fVar1 * fVar1));
  }
  return (float10)REFG(float, 0x1087f04);
}

/* ref: FUN_006b14a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b14a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6b14a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  undefined4 * puVar2;
  uint in_EAX = 0;
  uint uVar3;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0xe0)));
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    *((uint *)GEN_TOP(((int)this + 0xe0))) = param_1;
    return in_EAX;
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD);
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xe0)));
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
    *((undefined4 *)GEN_TOP(((int)this + 0xe0))) = 0;
    *((uint *)GEN_TOP(((int)this + 0xe0))) = param_1;
    return param_1;
  }
  *((uint *)GEN_TOP(((int)this + 0xe0))) = param_1;
  return uVar3;
}

/* ref: FUN_006b1500 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_006b1500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x6b1500u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    iVar1 = *((int *)GEN_TOP(((int)this + uVar3 * 4)));
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = F_0050c620(iVar1,0,0);
      *((undefined4 *)GEN_TOP(((int)this + uVar3 * 4))) = 0;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x10);
  return uVar2;
}

/* ref: FUN_006b1530 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b1530(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6b1530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((in_ecx + param_2 * 4)));
}

/* ref: FUN_006b1540 */
GEN_OWN GEN_FRAME uint F_006b1540(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6b1540u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + param_1;
}

/* ref: FUN_006b1550 */
GEN_OWN GEN_FRAME uint F_006b1550(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6b1550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + param_1;
}

/* ref: FUN_006b15b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b15b0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6b15b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_006b15c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b15c0(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6b15c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_006b15d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b15d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6b15d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined2 uVar1;
  
  uVar1 = *((undefined2 *)GEN_TOP(((int)this + 8)));
  *param_1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(param_1 + 1) = uVar1;
  return (uint)param_1;
}

/* ref: FUN_006b1600 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_006b1600(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6b1600u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((ushort *)GEN_TOP((in_ecx + 10))) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_006b1620 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_006b1620(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6b1620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0xa0))) = param_2;
  return param_2;
}

/* ref: FUN_006b1700 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_006b1700(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6b1700u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((ushort *)GEN_TOP((in_ecx + 0x82))) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_006b1720 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_006b1720(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6b1720u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((ushort *)GEN_TOP((in_ecx + 0x84))) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_006b1740 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_006b1740(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6b1740u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x94))) = param_2;
  return param_2;
}

/* ref: FUN_006b1760 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_006b1760(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6b1760u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((ushort *)GEN_TOP((in_ecx + 0x86))) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_006b17a0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_006b17a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6b17a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x60))) = param_2;
  return param_2;
}

/* ref: FUN_006b1800 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_006b1800(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x6b1800u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *((float *)GEN_TOP((in_ecx + 0x88))) = param_2;
  return;
}

/* ref: FUN_006b1830 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_006b1830(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6b1830u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x94))) = param_2;
  *((undefined1 *)GEN_TOP((in_ecx + 0x96))) = 1;
  return param_2;
}

/* ref: FUN_006b1850 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_006b1850(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6b1850u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x95))) = param_2;
  *((undefined1 *)GEN_TOP((in_ecx + 0x96))) = 1;
  return param_2;
}

/* ref: FUN_006b18d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b18d0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(float param_5, float gen_a4), GEN_P(float param_6, float gen_a5), GEN_P(float param_7, float gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7))
{
  GEN_ENTER(0x6b18d0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  GEN_PIN(float param_6 = (float)gen_a5;)
  GEN_PIN(float param_7 = (float)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  param_1[2] = (undefined4)gen_fl2bits(param_4);
  param_1[3] = (undefined4)gen_fl2bits(param_5);
  *param_1 = param_2;
  param_1[4] = (undefined4)gen_fl2bits(param_6);
  param_1[1] = param_3;
  param_1[5] = (undefined4)gen_fl2bits(param_7);
  param_1[6] = param_8;
  return (uint)param_1;
}

/* ref: FUN_006b1930 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b1930(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6b1930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0xf0))) + param_2 * 4)));
}

/* ref: FUN_006b1960 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b1960(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6b1960u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x20 + 0xb0 + in_ecx;
}

/* ref: FUN_006b19b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b19b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6b19b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0xe0a4))) = param_2;
  return param_2;
}

/* ref: FUN_006b19d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b19d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6b19d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = param_1[1];
  uVar1 = param_1[2];
  *((uint *)GEN_TOP(((int)this + 0x54))) = uVar1;
  return uVar1;
}

/* ref: FUN_006b19f0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_006b19f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x6b19f0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *((float *)GEN_TOP((in_ecx + 0x58))) = param_2;
  return;
}

/* ref: FUN_006b1a20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b1a20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6b1a20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = param_1[1];
  uVar1 = param_1[2];
  *((uint *)GEN_TOP(((int)this + 100))) = uVar1;
  return uVar1;
}

/* ref: Client::Graphics::Scene::ResidentResourceManager::ResourceList::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b1a50(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6b1a50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10b2afc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Singleton_VWorld_Scene_Graphics_Client_Graphics::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b1af0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6b1af0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10b2a6c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Singleton_VCameraManager_Scene_Graphics_Client_Graphics::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b1b20(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6b1b20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10b2a74));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Singleton_VCharacterUtility_Scene_Graphics_Client_Graphics::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b1b50(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6b1b50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10b2a7c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Singleton_VGrassManager_Scene_Graphics_Client_Graphics::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b1b80(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6b1b80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10b2a84));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Singleton_VResidentResourceManager_Scene_Graphics_Client_Graphics::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b1bb0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6b1bb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10b2a8c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_006b1c00 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_006b1c00(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6b1c00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x48,0xcb);
  return (uint)uVar1;
}

/* ref: FUN_006b1c30 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_006b1c30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6b1c30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_006b1c50 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_006b1c50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6b1c50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_006b1c70 */
GEN_OWN GEN_FRAME uint F_006b1c70(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6b1c70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x44;
}

/* ref: FUN_006b1c80 */
GEN_OWN GEN_FRAME uint F_006b1c80(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6b1c80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x45;
}

/* ref: FUN_006b1c90 */
GEN_OWN GEN_FRAME uint F_006b1c90(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6b1c90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_006b1ca0 */
GEN_OWN GEN_FRAME uint F_006b1ca0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6b1ca0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 4;
}

/* ref: FUN_006b1cb0 */
GEN_OWN GEN_FRAME uint F_006b1cb0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6b1cb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 8;
}

/* ref: FUN_006b1cc0 */
GEN_OWN GEN_FRAME uint F_006b1cc0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6b1cc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: FUN_006b1cd0 */
GEN_OWN GEN_FRAME uint F_006b1cd0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6b1cd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*((uint *)GEN_TOP((param_1 + 8))) + 0x45)));
  uVar2 = *((uint *)GEN_TOP((param_1 + 8)));
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *((uint *)GEN_TOP((uVar3 + 8)));
    cVar1 = *((char *)GEN_TOP((uVar2 + 0x45)));
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_006b1cf0 */
GEN_OWN GEN_FRAME uint F_006b1cf0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6b1cf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *((char *)GEN_TOP((*param_1 + 0x45)));
  piVar2 = ((int *)GEN_TOP(*param_1));
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = ((int *)GEN_TOP(*piVar3));
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x45)));
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_006b1d20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b1d20(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x6b1d20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006b1d30 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_006b1d30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x6b1d30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*((char *)GEN_TOP((iVar2 + 0x45))) == '\0') {
    piVar3 = *((int * PTR32 *)GEN_TOP((iVar2 + 8)));
    if (*((char *)GEN_TOP(((int)piVar3 + 0x45))) == '\0') {
      cVar1 = *((char *)GEN_TOP((*piVar3 + 0x45)));
      piVar4 = ((int *)GEN_TOP(*piVar3));
      while (cVar1 == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar4 + 0x45)));
        piVar3 = piVar4;
        piVar4 = ((int *)GEN_TOP(*piVar4));
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
    cVar1 = *((char *)GEN_TOP((iVar2 + 0x45)));
    while ((cVar1 == '\0' && (*(int *)this == *((int *)GEN_TOP((iVar2 + 8)))))) {
      *(int *)this = iVar2;
      iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
      cVar1 = *((char *)GEN_TOP((iVar2 + 0x45)));
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_006b1d80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b1d80(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6b1d80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  uVar1 = *in_ecx;
  *param_2 = uVar1;
  param_2[1] = uVar1;
  param_2[2] = uVar1;
  param_2[3] = uVar1;
  return (uint)param_2;
}

/* ref: FUN_006b1da0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b1da0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6b1da0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  *param_2 = uVar1;
  param_2[1] = uVar1;
  param_2[2] = uVar1;
  param_2[3] = uVar1;
  return (uint)param_2;
}

/* ref: FUN_006b1dc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b1dc0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6b1dc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 8)));
  *param_2 = uVar1;
  param_2[1] = uVar1;
  param_2[2] = uVar1;
  param_2[3] = uVar1;
  return (uint)param_2;
}

/* ref: FUN_006b1de0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b1de0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x6b1de0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint uVar1;
  
  uVar1 = 0xffff;
  if (param_2 < 0x10) {
    uVar1 = (uint)(ushort)((1 << GEN_SHC((byte)param_2, (unsigned int)(uintptr_t)param_2)) - 1);
  }
  return *(ushort *)((int)(uintptr_t)this) >> GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1) & uVar1;
}

/* ref: FUN_006b1e10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b1e10(GEN_P(ushort * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6b1e10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(ushort * in_ecx = (ushort *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  return *in_ecx >> GEN_SHC(param_2, param_2) & 1;
}

/* ref: FUN_006b1e30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b1e30(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6b1e30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  *((ushort *)GEN_TOP(*param_1)) =
       ~(1 << GEN_SHC((byte)param_1[1], (byte)param_1[1])) & *((ushort *)GEN_TOP(*param_1)) |
       (ushort)(param_2 != '\0') << GEN_SHC((byte)param_1[1], (byte)param_1[1]);
  return (uint)param_1;
}

/* ref: FUN_006b1e70 */
GEN_OWN GEN_FRAME uint F_006b1e70(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6b1e70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_006b1e80 */
GEN_OWN GEN_FRAME uint F_006b1e80(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6b1e80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_1 & param_2;
}

/* ref: FUN_006b1e90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b1e90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x6b1e90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  return (uint)this;
}

/* ref: FUN_006b1eb0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_006b1eb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6b1eb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_006b2f30((int)this - 4 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_006b1ef0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b1ef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6b1ef0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  param_1[3] = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xa8))) + 4))) + 8 + *((int *)GEN_TOP(((int)this + 0xa8))))));
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return (uint)param_1;
}

/* ref: FUN_006b1f20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b1f20(GEN_P(float * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6b1f20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = *((float *)GEN_TOP(param_2));
  fVar3 = (float10)REFG(double, 0x1088108);
  fVar2 = ((float10)GEN_TOD(fsin((float10)(float)((float10)fVar1 * fVar3))));
  *param_1 = (float)fVar2;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  fVar3 = ((float10)GEN_TOD(fcos((float10)(float)((float10)fVar1 * fVar3))));
  param_1[3] = (float)fVar3;
  F_0054d030(param_1 GEN_EDX_FWD,GEN_ARGF(*((float *)GEN_TOP((param_2 + 4)))));
  F_0054d0f0(param_1 GEN_EDX_ARG,GEN_ARGF(*((float *)GEN_TOP((param_2 + 8)))));
  return (uint)param_1;
}

/* ref: FUN_006b1f90 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_006b1f90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6b1f90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x30, 0);
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  F_004f5e90(this GEN_EDX_FWD,&(*(float *)(gen_frame + 0x0)),param_1);
  fVar2 = (float10)(*(float *)(gen_frame + 0x0));
  fVar1 = *param_1;
  (*(float *)(gen_frame + 0x0)) = (float)(fVar2 - (float10)fVar1);
  fVar3 = (float10)(*(float *)(gen_frame + 0x4));
  (*(float *)(gen_frame + 0x4)) = (float)(fVar3 - (float10)param_1[1]);
  fVar4 = (float10)(*(float *)(gen_frame + 0x8));
  (*(float *)(gen_frame + 0x8)) = (float)(fVar4 - (float10)param_1[2]);
  fVar2 = GEN_X87((float10)(float)(fVar2 - (float10)fVar1));
  fVar3 = GEN_X87((float10)(float)(fVar3 - (float10)param_1[1]));
  fVar4 = GEN_X87((float10)(float)(fVar4 - (float10)param_1[2]));
  fVar1 = ((float)GEN_TOF((fVar4 * fVar4 + (fVar3 * fVar3 + fVar2 * fVar2))));
  (*(float *)(gen_frame + 0x1c)) = fVar1;
  if ((float10)fVar1 <= (float10)param_1[3] * (float10)param_1[3]) {
    return 1;
  }
  return 0;
}

/* ref: FUN_006b2020 */
GEN_OWN GEN_FRAME uint F_006b2020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b2020u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  undefined4 * puVar5;
  float10 fVar6;
  float10 fVar7;
  
  uVar4 = *(*(uint * PTR32 *)&gen_args[1]);
  fVar6 = (float10)*(double *)&REFG(undefined, 0x1088100);
  (*(uint * PTR32 *)&gen_args[1]) = ((uint *)GEN_TOP((uVar4 >> 0x18)));
  fVar1 = ((float)GEN_TOF(((float10)(uVar4 & 0xff) / fVar6)));
  (*(float *)(gen_frame + 0x10)) = fVar1;
  fVar2 = ((float)GEN_TOF(((float10)(uVar4 >> 8 & 0xff) / fVar6)));
  (*(float *)(gen_frame + 0x14)) = fVar2;
  fVar3 = ((float)GEN_TOF(((float10)(uVar4 >> 0x10 & 0xff) / fVar6)));
  (*(float *)(gen_frame + 0x18)) = fVar3;
  (*(float *)(gen_frame + 0x1c)) = ((float)GEN_TOF(((float10)(int)(*(uint * PTR32 *)&gen_args[1]) / fVar6)));
  fVar7 = (float10)fVar1;
  (*(float *)(gen_frame + 0x0)) = (float)(fVar7 * fVar7);
  fVar7 = (float10)fVar2;
  (*(float *)(gen_frame + 0x4)) = (float)(fVar7 * fVar7);
  fVar7 = (float10)fVar3;
  (*(float *)(gen_frame + 0x8)) = (float)(fVar7 * fVar7);
  (*(float *)(gen_frame + 0xc)) = ((float)GEN_TOF(((float10)(int)(*(uint * PTR32 *)&gen_args[1]) / fVar6)));
  puVar5 = ((undefined4 *)GEN_TOP(F_00413ab0(&(*(uint * PTR32 *)&gen_args[1]) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x0)))));
  *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar5;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_006b2100 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b2100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x6b2100u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = uVar2;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = uVar3;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = uVar2;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = uVar3;
  uVar3 = *(undefined4 *)&REFG(undefined, 0x1138afc);
  uVar2 = *(undefined4 *)&REFG(undefined, 0x1138af8);
  uVar1 = *(undefined4 *)&REFG(undefined, 0x1138af4);
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = *(undefined4 *)&REFG(undefined, 0x1138af0);
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = uVar2;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = uVar3;
  return (uint)this;
}

/* ref: FUN_006b2130 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b2130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x6b2130u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(uint *)this = CONCAT22((undefined2)param_1,(undefined2)param_2);
  return (uint)this;
}

/* ref: FUN_006b2160 */
GEN_OWN GEN_FRAME uint F_006b2160(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6b2160u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return (uint)param_1;
}

/* ref: FUN_006b2190 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b2190(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6b2190u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int * piVar1;
  int iVar2;
  undefined * this;
  
  if ((param_2 & 2) != 0) {
    piVar1 = ((int *)GEN_TOP(((int)param_1 - 4)));
    iVar2 = *piVar1;
    this = ((undefined *)GEN_TOP(((int)param_1 + iVar2 * 0xc)));
    while (iVar2 = iVar2 - 1, -1 < iVar2) {
      this = ((undefined *)GEN_TOP(((int)this - 0xc)));
      F_0068b9a0(this GEN_EDX_FWD);
    }
    if ((param_2 & 1) != 0) {
      F_00406b30(piVar1);
    }
    return (uint)piVar1;
  }
  F_0068b9a0(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_006b21f0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_006b21f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6b21f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  int * piVar2;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_FWD);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG)));
  return (byte)(*((uint *)GEN_TOP((uVar1 + 4 + ((param_1 >> 5) + *piVar2) * 4))) >> ((byte)param_1 & 0x1f)) & 1
  ;
}

/* ref: FUN_006b2230 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b2230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x6b2230u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_FWD);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG)));
  iVar1 = *piVar3;
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG);
  return uVar4 + *((int *)GEN_TOP((uVar2 + 0x14 + (iVar1 + (param_2 + param_1 * 4) * 8) * 4)));
}

/* ref: FUN_006b2270 */
GEN_OWN GEN_FRAME float GEN_THISCALL F_006b2270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x6b2270u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  int * piVar2;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_FWD);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG)));
  return *((float *)GEN_TOP((uVar1 + 0x18 + (*piVar2 + (param_2 + param_1 * 4) * 8) * 4)));
}

/* ref: FUN_006b22b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b22b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x6b22b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  int * piVar2;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_FWD);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG)));
  return uVar1 + 0x1c + (*piVar2 + (param_2 + param_1 * 4) * 8) * 4;
}

/* ref: FUN_006b22f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b22f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x6b22f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  int * piVar2;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_FWD);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG)));
  return uVar1 + 0x28 + (*piVar2 + (param_2 + param_1 * 4) * 8) * 4;
}

/* ref: Client::Graphics::Scene::AttachUtility::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b2340(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6b2340u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x10b2b58));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_006b23a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b23a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x6b23a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  uint uVar1;
  char * pcVar2;
  undefined * pvVar3;
  char * pcVar4;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x10)));
  if (param_3 == 0) {
    if (param_2 < uVar1) {
      return param_2;
    }
  }
  else {
    if (param_3 <= uVar1) {
      uVar1 = uVar1 - param_3;
      if (param_2 < uVar1) {
        uVar1 = param_2;
      }
      pvVar3 = this;
      if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
        pvVar3 = *(undefined * PTR32 *)this;
      }
      pcVar4 = ((char *)GEN_TOP(((int)pvVar3 + uVar1)));
      while( true ) {
        if ((*pcVar4 == *param_1) && (uVar1 = F_0040d320(pcVar4,param_1,param_3), uVar1 == 0)) {
          if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
            this = *(undefined * PTR32 *)this;
          }
          return (int)pcVar4 - (int)this;
        }
        pcVar2 = ((char *)GEN_TOP(F_004e18e0(this GEN_EDX_ARG)));
        if (pcVar4 == pcVar2) break;
        pcVar4 = pcVar4 - 1;
      }
    }
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

/* ref: FUN_006b2430 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_006b2430(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6b2430u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_006b2440 */
GEN_OWN GEN_FRAME uint F_006b2440(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6b2440u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: FUN_006b2450 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b2450(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x6b2450u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006b2480 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b2480(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x6b2480u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006b2490 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_006b2490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6b2490u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_006b24f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b24f0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x6b24f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006b2500 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_006b2500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6b2500u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_006b2520 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b2520(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x6b2520u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006b2530 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_006b2530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6b2530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_006b2560 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_006b2560(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6b2560u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_006b2580 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b2580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6b2580u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 2;
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

/* ref: FUN_006b25c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b25c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6b25c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 2;
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

/* ref: FUN_006b2600 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b2600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6b2600u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 2;
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

/* ref: FUN_006b2640 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b2640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6b2640u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 3;
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

/* ref: FUN_006b2680 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_006b2680(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6b2680u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_006b26b0 */
GEN_OWN GEN_FRAME uint F_006b26b0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6b26b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) + 8))))
                    (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_006b26d0 */
GEN_OWN GEN_FRAME uint F_006b26d0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6b26d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) + 8))))
                    (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_006b26f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b26f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6b26f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  int * piVar2;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((param_1 + 8)));
  *((int *)GEN_TOP((param_1 + 8))) = *piVar2;
  if (*((char *)GEN_TOP((*piVar2 + 0x15))) == '\0') {
    *((int *)GEN_TOP((*piVar2 + 4))) = param_1;
  }
  piVar2[1] = *((int *)GEN_TOP((param_1 + 4)));
  if (param_1 == *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = piVar2;
    *piVar2 = param_1;
    *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
    return (uint)piVar2;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 4)));
  if (param_1 == *piVar1) {
    *piVar1 = (int)piVar2;
    *piVar2 = param_1;
    *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
    return (uint)piVar2;
  }
  piVar1[2] = (int)piVar2;
  *piVar2 = param_1;
  *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_006b2760 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b2760(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x6b2760u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006b2770 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_006b2770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x6b2770u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_006b0160(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_006b2780 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b2780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x6b2780u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(gen_code32 *)this = ((code *)REFP(0x6b0490));
  *((uint *)GEN_TOP(((int)this + 4))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_2;
  return param_1;
}

/* ref: FUN_006b27a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b27a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x6b27a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(gen_code32 *)this = ((code *)REFP(0x6b04b0));
  *((uint *)GEN_TOP(((int)this + 4))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_2;
  return param_1;
}

/* ref: FUN_006b27c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b27c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x6b27c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(gen_code32 *)this = ((code *)REFP(0x6b04d0));
  *((uint *)GEN_TOP(((int)this + 4))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_2;
  return param_1;
}

/* ref: FUN_006b27e0 */
GEN_OWN GEN_FRAME uint F_006b27e0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x6b27e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_006b2810 */
GEN_OWN GEN_FRAME uint F_006b2810(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x6b2810u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_006b2830 */
GEN_OWN GEN_FRAME uint F_006b2830(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6b2830u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_006b2850 */
GEN_OWN GEN_FRAME uint F_006b2850(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x6b2850u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_006b2870 */
GEN_OWN GEN_FRAME uint F_006b2870(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x6b2870u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_006b2890 */
GEN_OWN GEN_FRAME uint F_006b2890(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x6b2890u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_006b28b0 */
GEN_OWN GEN_FRAME uint F_006b28b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x6b28b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_006b28d0 */
GEN_OWN GEN_FRAME uint F_006b28d0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x6b28d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_006b28f0 */
GEN_OWN GEN_FRAME uint F_006b28f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x6b28f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_006b2910 */
GEN_OWN GEN_FRAME uint F_006b2910(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x6b2910u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_006b2930 */
GEN_OWN GEN_FRAME uint F_006b2930(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x6b2930u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_006b2960 */
GEN_OWN GEN_FRAME unsigned int F_006b2960(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x6b2960u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_006b2980 */
GEN_OWN GEN_FRAME uint F_006b2980(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x6b2980u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_006b29e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b29e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6b29e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  byte bVar1;
  
  bVar1 = (byte)*((undefined4 *)GEN_TOP(((int)this + 4)));
  **(uint * PTR32 *)this =
       (*((uint *)GEN_TOP(*param_1)) >> GEN_SHC((byte)param_1[1], (byte)param_1[1]) & 1) << GEN_SHC(bVar1, bVar1) |
       ~(1 << GEN_SHC(bVar1, bVar1)) & **(uint * PTR32 *)this;
  return (uint)this;
}

/* ref: FUN_006b2a30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b2a30(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6b2a30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  return *in_ecx - *param_2 >> 3;
}

/* ref: FUN_006b2a50 */
GEN_OWN GEN_FRAME uint F_006b2a50(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6b2a50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_006b2a70 */
GEN_OWN GEN_FRAME uint F_006b2a70(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6b2a70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_006b2a90 */
GEN_OWN GEN_FRAME uint F_006b2a90(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6b2a90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_006b2ab0 */
GEN_OWN GEN_FRAME uint F_006b2ab0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6b2ab0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_006b2ae0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b2ae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x6b2ae0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_006b2b00 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_006b2b00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x6b2b00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*((char *)GEN_TOP(((int)puVar2 + 0x45))) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = ((int *)GEN_TOP(*puVar2));
  if (*((char *)GEN_TOP(((int)piVar5 + 0x45))) == '\0') {
    iVar3 = piVar5[2];
    if (*((char *)GEN_TOP((piVar5[2] + 0x45))) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *((int *)GEN_TOP((iVar4 + 8)));
      } while (*((char *)GEN_TOP((iVar3 + 0x45))) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = ((int *)GEN_TOP(puVar2[1]));
    cVar1 = *((char *)GEN_TOP(((int)piVar5 + 0x45)));
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = ((int *)GEN_TOP(piVar5[1]));
      cVar1 = *((char *)GEN_TOP(((int)piVar5 + 0x45)));
    }
    if (*((char *)GEN_TOP((*(int *)this + 0x45))) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_006b2b60 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_006b2b60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x6b2b60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_006b08f0(this GEN_EDX_FWD);
  return;
}

/* ref: FUN_006b2b70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b2b70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x6b2b70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0x6b0830));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_2;
  return (uint)this;
}

/* ref: FUN_006b2b90 */
GEN_OWN GEN_FRAME uint F_006b2b90(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6b2b90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_006b2ba0 */
GEN_OWN GEN_FRAME uint F_006b2ba0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6b2ba0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_006b2bb0 */
GEN_OWN GEN_FRAME uint F_006b2bb0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6b2bb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_006b2bc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b2bc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x6b2bc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_006b2c10 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_006b2c10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6b2c10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_006b2c30 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_006b2c30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x6b2c30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_006b1d30(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_006b2c50 */
GEN_OWN GEN_FRAME uint F_006b2c50(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6b2c50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x1fU >> 3 & 0x1ffffffc;
}

/* ref: FUN_006b2c70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b2c70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6b2c70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined * pvVar1;
  
  pvVar1 = F_00c48350(*(undefined * PTR32 *)this,0,param_1 + 0x1fU >> 3 & 0x1ffffffc);
  return (uint)pvVar1;
}

/* ref: FUN_006b2ca0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b2ca0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x6b2ca0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006b2cd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b2cd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x6b2cd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_006b2cf0 */
GEN_OWN GEN_FRAME uint F_006b2cf0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6b2cf0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_006b2d20 */
GEN_OWN GEN_FRAME uint F_006b2d20(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(code * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x6b2d20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(code * param_5 = (code *)(uintptr_t)gen_a4;)
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = param_2;
  while( true ) {
    iVar4 = iVar1 * 2 + 2;
    if (param_3 <= iVar4) break;
    iVar2 = param_1 + iVar4 * 8;
    uVar3 = (*param_5)(iVar2,iVar2 - 8);
    if ((char)uVar3 != '\0') {
      iVar4 = iVar1 * 2 + 1;
    }
    *((undefined4 *)GEN_TOP((param_1 + iVar1 * 8))) = *((undefined4 *)GEN_TOP((param_1 + iVar4 * 8)));
    *((undefined4 *)GEN_TOP((param_1 + 4 + iVar1 * 8))) = *((undefined4 *)GEN_TOP((param_1 + 4 + iVar4 * 8)));
    iVar1 = iVar4;
  }
  if (iVar4 == param_3) {
    *((undefined4 *)GEN_TOP((param_1 + iVar1 * 8))) = *((undefined4 *)GEN_TOP((param_1 - 8 + param_3 * 8)));
    *((undefined4 *)GEN_TOP((param_1 + 4 + iVar1 * 8))) = *((undefined4 *)GEN_TOP((param_1 - 4 + param_3 * 8)));
    iVar1 = param_3 - 1;
  }
  while (param_2 < iVar1) {
    iVar4 = (iVar1 - 1) / 2;
    uVar3 = (*param_5)(param_1 + iVar4 * 8,param_4);
    if ((char)uVar3 == '\0') break;
    *((undefined4 *)GEN_TOP((param_1 + iVar1 * 8))) = *((undefined4 *)GEN_TOP((param_1 + iVar4 * 8)));
    *((undefined4 *)GEN_TOP((param_1 + 4 + iVar1 * 8))) = *((undefined4 *)GEN_TOP((param_1 + 4 + iVar4 * 8)));
    iVar1 = iVar4;
  }
  *((undefined4 *)GEN_TOP((param_1 + iVar1 * 8))) = *param_4;
  *((undefined4 *)GEN_TOP((param_1 + 4 + iVar1 * 8))) = param_4[1];
  return (uint)param_4;
}

/* ref: FUN_006b2e00 */
GEN_OWN GEN_FRAME uint F_006b2e00(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x6b2e00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_006b2e30 */
GEN_OWN GEN_FRAME unsigned int F_006b2e30(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x6b2e30u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_006b2e60 */
GEN_OWN GEN_FRAME uint F_006b2e60(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x6b2e60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  uint uVar1;
  
  *param_3 = *param_1;
  param_3[1] = param_1[1];
  uVar1 = F_006b2d20(param_1,0,param_2 - (int)((int)(uintptr_t)param_1) >> 3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_006b2ea0 */
GEN_OWN GEN_FRAME uint F_006b2ea0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6b2ea0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x1c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x1c))) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_006b2ec0 */
GEN_OWN GEN_FRAME uint F_006b2ec0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6b2ec0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x14))) + 0x10))))
                      (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x14))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Client::Graphics::Scene::Object::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b2ee0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6b2ee0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[6])REFP(0x10b2ae0));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x14))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x14))) GEN_EDX_FWD,param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_006b2f10 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_006b2f10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x6b2f10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10b2b20));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x10b2b08));
  F_004d6680(((undefined4 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10b2a74));
  return;
}

/* ref: Client::Graphics::Scene::CameraManager::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b2f30(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6b2f30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10b2b20));
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x10b2b08));
  F_004d6680(param_1 + 1 GEN_EDX_FWD);
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10b2a74));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_006b2f70 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_006b2f70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x6b2f70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined * this_00;
  
  switch((unsigned int)(uintptr_t)(*((undefined4 *)GEN_TOP(((int)this + 0x38))))) {
  case 1: ;
  case 3: ;
    iVar1 = *((int *)GEN_TOP(((int)this + 0x44)));
    this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x40)));
    break;
  case 2: ;
  case 4: ;
    iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x44))) + 0x74)));
    this_00 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x40))) + 0x74)));
    break;
  default: ;
    goto switchD_006b2f7f_default;
  }
  if (((iVar1 != 0) && (this_00 != ((undefined *)GEN_TOP(0x0)))) && (*((undefined * PTR32 *)GEN_TOP((iVar1 + 0x20))) == this_00)) {
    F_006886d0(this_00 GEN_EDX_FWD);
    F_0068bd00(REFG(void * PTR32, 0x1371294) GEN_EDX_ARG,((undefined4)(uint)(this_00)));
  }
switchD_006b2f7f_default: ;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  return;
}

/* ref: FUN_006b2fe0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b2fe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6b2fe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint in_EAX = 0;
  uint * puVar1;
  
  if (0x1f < param_1) {
    return in_EAX & 0xffffff00;
  }
  puVar1 = ((uint *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_FWD)));
  return *puVar1 >> GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1) & 1;
}

/* ref: FUN_006b3010 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b3010(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6b3010u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 < 0x20) {
    puVar1 = ((uint *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_FWD)));
    if ((*puVar1 >> GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1) & 1) != 0) {
      puVar1 = ((uint *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG)));
      uVar2 = 0xffffffff;
      if (param_1 < 0x20) {
        uVar2 = (1 << GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1)) - 1;
      }
      uVar2 = ((*puVar1 & uVar2) >> 1 & 0x55555555) + (*puVar1 & uVar2 & 0x55555555);
      uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
      uVar2 = (uVar2 >> 4 & 0xf0f0f0f) + (uVar2 & 0xf0f0f0f);
      uVar3 = (uVar2 >> 8 & 0xff00ff) + (uVar2 & 0xff00ff);
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG);
      return uVar2 + ((uVar3 >> 0x10) + (uVar3 & 0xffff)) * 0x1000;
    }
  }
  return 0;
}

/* ref: FUN_006b30c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b30c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x6b30c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_FWD);
  *param_1 = *((undefined4 *)GEN_TOP((uVar1 + param_2 * 4)));
  return (uint)param_1;
}

/* ref: FUN_006b30e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b30e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x6b30e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_FWD);
  *param_1 = *((undefined4 *)GEN_TOP((uVar1 + 0x400 + param_2 * 4)));
  return (uint)param_1;
}

/* ref: FUN_006b3100 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b3100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x6b3100u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_FWD);
  *param_1 = *((undefined4 *)GEN_TOP((uVar1 + 0x800 + param_2 * 4)));
  return (uint)param_1;
}

/* ref: FUN_006b3120 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b3120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x6b3120u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_FWD);
  *param_1 = *((undefined4 *)GEN_TOP((uVar1 + 0xc00 + param_2 * 4)));
  return (uint)param_1;
}

/* ref: FUN_006b3140 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b3140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x6b3140u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_FWD);
  *param_1 = *((undefined4 *)GEN_TOP((uVar1 + 0x1000 + param_2 * 4)));
  return (uint)param_1;
}

/* ref: FUN_006b3160 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b3160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(int param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x6b3160u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(int param_5 = (int)gen_a5;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_FWD);
  *param_1 = *((undefined4 *)GEN_TOP((uVar1 + (param_3 - 2 + (param_4 + param_2 * 2) * 2) * 0x1400 + param_5 * 4)));
  return (uint)param_1;
}

/* ref: FUN_006b31a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b31a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(int param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x6b31a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(int param_5 = (int)gen_a5;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_FWD);
  *param_1 = *((undefined4 *)GEN_TOP((uVar1 + (param_3 - 2 + (param_4 + param_2 * 2) * 2) * 0x1400 + 0x400 + param_5 * 8)));
  return (uint)param_1;
}

/* ref: FUN_006b31e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b31e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(int param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x6b31e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(int param_5 = (int)gen_a5;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_FWD);
  *param_1 = *((undefined4 *)GEN_TOP((uVar1 + (param_3 - 2 + (param_4 + param_2 * 2) * 2) * 0x1400 + 0x404 + param_5 * 8)));
  return (uint)param_1;
}

/* ref: FUN_006b3220 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_006b3220(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(byte param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5))
{
  GEN_ENTER(0x6b3220u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(byte param_3 = (byte)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  int iVar1;
  uint uVar2;
  float * pfVar3;
  float10 fVar4;
  
  if (param_6 == 0xff) {
    return (float10)1;
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x5c))))(param_1 GEN_EDX_FWD);
  iVar1 = param_4 - 2 + param_5 * 2 + param_2 * 10;
  if ((param_3 & 1) == 0) {
    pfVar3 = ((float *)GEN_TOP((uVar2 + 0x1b5d0 + iVar1 * 0x38)));
  }
  else {
    pfVar3 = ((float *)GEN_TOP((uVar2 + 0x1b5e0 + iVar1 * 0x38)));
  }
  fVar4 = (float10)param_6;
  if (param_6 < 0) {
    fVar4 = GEN_X87(fVar4 + (float10)*(float *)&REFG(undefined, 0x1088110));
  }
  return GEN_X87((float10)((float)GEN_TOF(((float10)*pfVar3 +
                         (float10)(float)(fVar4 / (float10)*(double *)&REFG(undefined, 0x1088118)) *
                         ((float10)pfVar3[1] - (float10)*pfVar3)))));
}

/* ref: FUN_006b32b0 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_006b32b0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(byte param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5))
{
  GEN_ENTER(0x6b32b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(byte param_3 = (byte)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  int iVar1;
  uint uVar2;
  float * pfVar3;
  float10 fVar4;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x5c))))(param_1 GEN_EDX_FWD);
  iVar1 = param_4 - 2 + param_5 * 2 + param_2 * 10;
  if ((param_3 & 1) == 0) {
    pfVar3 = ((float *)GEN_TOP((uVar2 + 0x1b5d8 + iVar1 * 0x38)));
  }
  else {
    pfVar3 = ((float *)GEN_TOP((uVar2 + 0x1b5e8 + iVar1 * 0x38)));
  }
  fVar4 = (float10)param_6;
  if (param_6 < 0) {
    fVar4 = GEN_X87(fVar4 + (float10)*(float *)&REFG(undefined, 0x1088110));
  }
  return GEN_X87((float10)((float)GEN_TOF(((float10)*pfVar3 +
                         (float10)(float)(fVar4 / (float10)*(double *)&REFG(undefined, 0x1088118)) *
                         ((float10)pfVar3[1] - (float10)*pfVar3)))));
}

/* ref: FUN_006b3330 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b3330(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3), GEN_P(uint param_5, unsigned int gen_a4), GEN_P(uint param_6, unsigned int gen_a5), GEN_P(int param_7, unsigned int gen_a6))
{
  GEN_ENTER(0x6b3330u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  GEN_PIN(uint param_5 = (uint)gen_a4;)
  GEN_PIN(uint param_6 = (uint)gen_a5;)
  GEN_PIN(int param_7 = (int)gen_a6;)
  float * pfVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float10 fVar5;
  
  fVar2 = REFG(float, 0x1302c10);
  if ((param_4 & 1) == 0) {
    *param_2 = GEN_FLT_TO(*param_2, REFG(float, 0x1302c0c));
    fVar3 = REFG(float, 0x1302c14);
    param_2[1] = fVar2;
    param_2[2] = fVar3;
    return (uint)param_2;
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x5c))))(param_1 GEN_EDX_FWD);
  fVar5 = (float10)param_7;
  pfVar1 = ((float *)GEN_TOP((uVar4 + (param_5 + (param_6 + (param_3 + 200) * 5) * 2) * 0x38)));
  if (param_7 < 0) {
    fVar5 = GEN_X87(fVar5 + (float10)*(float *)&REFG(undefined, 0x1088110));
  }
  fVar2 = pfVar1[2];
  fVar3 = pfVar1[1];
  fVar5 = GEN_X87((float10)(float)(fVar5 / (float10)*(double *)&REFG(undefined, 0x1088118)));
  *param_2 = ((float)GEN_TOF((fVar5 * ((float10)pfVar1[3] - (float10)*pfVar1) + (float10)*pfVar1)));
  param_2[1] = ((float)GEN_TOF(((float10)fVar3 + fVar5 * ((float10)pfVar1[4] - (float10)fVar3))));
  param_2[2] = ((float)GEN_TOF(((float10)fVar2 + ((float10)pfVar1[5] - (float10)fVar2) * fVar5)));
  return (uint)param_2;
}

/* ref: FUN_006b3420 */
GEN_OWN GEN_FRAME float GEN_THISCALL F_006b3420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x6b3420u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  float10 fVar1;
  
  fVar1 = F_006b3220(*((undefined4 *)GEN_TOP(((int)this + 0x24))) GEN_EDX_FWD,(param_1 - 1U >> 1) + 1,(undefined1)param_2
                       ,param_1 - 1U & 1,param_3,param_4);
  return (float)fVar1;
}

/* ref: FUN_006b3450 */
GEN_OWN GEN_FRAME float GEN_THISCALL F_006b3450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x6b3450u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  float10 fVar1;
  
  fVar1 = F_006b32b0(*((undefined4 *)GEN_TOP(((int)this + 0x24))) GEN_EDX_FWD,(param_1 - 1U >> 1) + 1,(undefined1)param_2
                       ,param_1 - 1U & 1,param_3,param_4);
  return (float)fVar1;
}

/* ref: FUN_006b3480 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b3480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3), GEN_P(uint param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x6b3480u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  GEN_PIN(uint param_4 = (uint)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  F_006b3330(*((undefined4 *)GEN_TOP(((int)this + 0x24))) GEN_EDX_FWD,param_1,(param_2 - 1U >> 1) + 1,param_3,
               param_2 - 1U & 1,param_4,param_5);
  return param_1;
}

/* ref: FUN_006b34c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b34c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x6b34c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = F_006b1210(this GEN_EDX_FWD,param_1);
  if (uVar1 == 0xffffffff) {
    return 0;
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG);
  uVar3 = F_006b11b0(this GEN_EDX_ARG);
  return uVar2 + 4 + (uVar3 * param_2 + uVar1) * 6;
}

/* ref: FUN_006b3510 */
GEN_OWN GEN_FRAME uint F_006b3510(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6b3510u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x14))) + 8))))
                    (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x14))) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_006b3530 */
GEN_OWN GEN_FRAME uint F_006b3530(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6b3530u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x14))) + 8))))
                    (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x14))) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_006b3550 */
GEN_OWN GEN_FRAME uint F_006b3550(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6b3550u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x14))) + 0x10))))
                      (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x14))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_006b3570 */
GEN_OWN GEN_FRAME uint F_006b3570(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6b3570u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x14))) + 0x10))))
                      (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x14))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Client::Graphics::Scene::CharacterBase::VfxInstanceListenner::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b35a0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6b35a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[10])REFP(0x10b2a9c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_006b35d0 */
GEN_OWN GEN_FRAME uint F_006b35d0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6b35d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x14))) + 8))))
                    (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x14))) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_006b35f0 */
GEN_OWN GEN_FRAME uint F_006b35f0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6b35f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x14))) + 0x10))))
                      (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x14))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_006b3620 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_006b3620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x6b3620u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x2c0)));
  return ((byte)(uVar1 >> 3) | (byte)(uVar1 >> 2) | (byte)(uVar1 >> 1) |
         *((byte *)GEN_TOP(((int)this + 0x2c0)))) & 1 | *((int *)GEN_TOP(((int)this + 0x6f8))) != 0 |
         *((int *)GEN_TOP(((int)this + 0x40c))) != 0;
}

/* ref: FUN_006b3670 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b3670(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6b3670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  return *((ushort *)GEN_TOP((in_ecx + 0x40))) >> GEN_SHC(param_2, param_2) & 1;
}

/* ref: FUN_006b3690 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b3690(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6b3690u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  return *((ushort *)GEN_TOP((in_ecx + 0x42))) >> GEN_SHC(param_2, param_2) & 1;
}

/* ref: FUN_006b36d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b36d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x6b36d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  return *((ushort *)GEN_TOP((in_ecx + 0x40))) >> (param_3 + param_2 & 0x1fU) & 1;
}

/* ref: FUN_006b36f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b36f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x6b36f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  return *((uint *)GEN_TOP(((int)this + (param_1 + param_2) * 4)));
}

/* ref: FUN_006b3700 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b3700(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x6b3700u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  return *((ushort *)GEN_TOP((in_ecx + 0x40))) >> (param_3 + param_2 & 0x1fU) & 1;
}

/* ref: FUN_006b3720 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b3720(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x6b3720u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  return *((ushort *)GEN_TOP((in_ecx + 0x42))) >> (param_3 + param_2 & 0x1fU) & 1;
}

/* ref: FUN_006b3740 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b3740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x6b3740u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  return *((uint *)GEN_TOP(((int)this + (param_1 + param_2) * 4)));
}

/* ref: FUN_006b3750 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_006b3750(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x6b3750u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  float fVar1;
  float * pfVar2;
  float * pfVar3;
  
  *((float *)GEN_TOP((param_1 + 0x84))) = param_2;
  pfVar3 = ((float *)GEN_TOP((param_1 + 0x54)));
  if ((float10)*((float *)GEN_TOP((param_1 + 0x54))) < (float10)*((float *)GEN_TOP((param_1 + 0x50)))) {
    pfVar3 = ((float *)GEN_TOP((param_1 + 0x50)));
  }
  pfVar2 = ((float *)GEN_TOP((param_1 + 0x58)));
  if ((float10)*((float *)GEN_TOP((param_1 + 0x58))) < (float10)*pfVar3) {
    pfVar2 = pfVar3;
  }
  fVar1 = (float)((float10)*pfVar2 + (float10)*pfVar2);
  if ((float10)fVar1 < (float10)*((float *)GEN_TOP((param_1 + 0x84)))) {
    *((undefined4 *)GEN_TOP((param_1 + 0x84))) = *((undefined4 *)GEN_TOP((param_1 + 0x84)));
    return;
  }
  *((float *)GEN_TOP((param_1 + 0x84))) = fVar1;
  return;
}

/* ref: FUN_006b3840 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b3840(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x6b3840u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  unsigned int gen_args[1];
  memcpy(&gen_args[0], &gen_a1, sizeof gen_a1);
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  int iVar1;
  double dVar3;
  float * pfVar4;
  float10 fVar5;
  float10 fVar6;
  
  iVar1 = *((int *)GEN_TOP((param_1 + 0x28)));
  (*(float *)(gen_frame + 0x8)) = *((float *)GEN_TOP((param_1 + 0x18)));
  fVar5 = (float10)*((float *)GEN_TOP((param_1 + 0x18)));
  (*(float *)(gen_frame + 0x4)) = gen_bits2f(iVar1 - 1);
  (*(float *)(gen_frame + 0x0)) = 0.0;
  fVar6 = (float10)iVar1;
  if (iVar1 < 0) {
    fVar6 = GEN_X87(fVar6 + (float10)*(float *)&REFG(undefined, 0x1088110));
  }
  dVar3 = (GEN_X87MATH(((double)((float)GEN_TOF(((fVar6 * ((float10)(*(float *)&gen_args[0]) - fVar5)) / ((float10)*((float *)GEN_TOP((param_1 + 0x1c))) - fVar5))))),0xd));
  (*(float *)&gen_args[0]) = gen_bits2f((int)dVar3);
  pfVar4 = &(*(float *)&gen_args[0]);
  if (iVar1 - 1 <= (int)dVar3) {
    pfVar4 = &(*(float *)(gen_frame + 0x4));
  }
  if ((int)gen_fl2bits(*pfVar4) < 1) {
    pfVar4 = &(*(float *)(gen_frame + 0x0));
  }
  return (uint)gen_fl2bits(*pfVar4);
}

/* ref: FUN_006b38c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b38c0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x6b38c0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  unsigned int gen_args[1];
  memcpy(&gen_args[0], &gen_a1, sizeof gen_a1);
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  int iVar1;
  double dVar3;
  float * pfVar4;
  float10 fVar5;
  float10 fVar6;
  
  iVar1 = *((int *)GEN_TOP((param_1 + 0x28)));
  (*(float *)(gen_frame + 0x8)) = *((float *)GEN_TOP((param_1 + 0x20)));
  fVar5 = (float10)*((float *)GEN_TOP((param_1 + 0x20)));
  (*(float *)(gen_frame + 0x4)) = gen_bits2f(iVar1 - 1);
  (*(float *)(gen_frame + 0x0)) = 0.0;
  fVar6 = (float10)iVar1;
  if (iVar1 < 0) {
    fVar6 = GEN_X87(fVar6 + (float10)*(float *)&REFG(undefined, 0x1088110));
  }
  dVar3 = (GEN_X87MATH(((double)((float)GEN_TOF(((fVar6 * ((float10)(*(float *)&gen_args[0]) - fVar5)) / ((float10)*((float *)GEN_TOP((param_1 + 0x24))) - fVar5))))),0xd));
  (*(float *)&gen_args[0]) = gen_bits2f((int)dVar3);
  pfVar4 = &(*(float *)&gen_args[0]);
  if (iVar1 - 1 <= (int)dVar3) {
    pfVar4 = &(*(float *)(gen_frame + 0x4));
  }
  if ((int)gen_fl2bits(*pfVar4) < 1) {
    pfVar4 = &(*(float *)(gen_frame + 0x0));
  }
  return (uint)gen_fl2bits(*pfVar4);
}

/* ref: FUN_006b39a0 */
GEN_OWN GEN_FRAME uint F_006b39a0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6b39a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_006b3a00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b3a00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6b3a00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *((uint *)GEN_TOP((uVar2 + 8)));
  if (*((char *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 8))) + 0x45))) == '\0') {
    *((uint * PTR32 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 8))) + 4))) = param_1;
  }
  *((uint *)GEN_TOP((uVar2 + 4))) = param_1[1];
  if (param_1 == *((uint * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = uVar2;
    *((uint * PTR32 *)GEN_TOP((uVar2 + 8))) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  puVar1 = ((uint *)GEN_TOP(param_1[1]));
  if (param_1 == ((uint *)GEN_TOP(puVar1[2]))) {
    puVar1[2] = uVar2;
    *((uint * PTR32 *)GEN_TOP((uVar2 + 8))) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  *puVar1 = uVar2;
  *((uint * PTR32 *)GEN_TOP((uVar2 + 8))) = param_1;
  param_1[1] = uVar2;
  return uVar2;
}

/* ref: FUN_006b3a60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b3a60(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x6b3a60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006b3a70 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_006b3a70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x6b3a70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_006b1d30(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_006b3a80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b3a80(GEN_P(undefined4 in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x6b3a80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *param_2 = in_ecx;
  param_2[1] = param_3;
  return (uint)param_2;
}

/* ref: FUN_006b3aa0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b3aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x6b3aa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_3 >> 5;
  uVar1 = 0;
  if (uVar3 != 0) {
    do {
      *((uint *)GEN_TOP((*(int *)this + uVar1 * 4))) =
           *((uint *)GEN_TOP((*param_1 + uVar1 * 4))) & *((uint *)GEN_TOP((*param_2 + uVar1 * 4)));
      uVar1 = uVar1 + 1;
    } while (uVar1 < uVar3);
  }
  uVar1 = uVar3 * 0x20;
  iVar2 = param_3 + uVar3 * -0x20;
  if (iVar2 != 0) {
    uVar1 = *((uint *)GEN_TOP((*param_1 + uVar3 * 4))) & *((uint *)GEN_TOP((*param_2 + uVar3 * 4))) &
            ~(-1 << GEN_SHC((byte)iVar2, (unsigned int)(uintptr_t)iVar2));
    *((uint *)GEN_TOP((*(int *)this + uVar3 * 4))) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_006b3b10 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_006b3b10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6b3b10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_006b3b40((int)this - 0x60 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: Client::Graphics::Scene::World::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b3b40(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6b3b40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  param_1[0x1a] =
       (*(undefined * PTR32 (*)[1])REFP(0x10b2a94));
  param_1[0x18] = (*(undefined * PTR32 (*)[1])REFP(0x10b2a6c));
  *param_1 = (*(undefined * PTR32 (*)[6])REFP(0x10b2ae0));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x14))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x14))) GEN_EDX_FWD,param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::Scene::Camera::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b3b80(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6b3b80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[6])REFP(0x10b2ae0));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x14))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x14))) GEN_EDX_FWD,param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::Scene::CameraMaya::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006b3bc0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6b3bc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[6])REFP(0x10b2ae0));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x14))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x14))) GEN_EDX_FWD,param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::Scene::DrawObject::vf8 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_006b3bf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x6b3bf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: Client::Graphics::Scene::DrawObject::vf9 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_006b3c00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x6b3c00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: Client::Graphics::Scene::DrawObject::vf15 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_006b3c10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6b3c10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 0;
}

/* ref: Client::Graphics::Scene::DrawObject::vf14 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_006b3c20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x6b3c20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return 0;
}

/* ref: Client::Graphics::Scene::DrawObject::vf23 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_006b3c30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6b3c30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

