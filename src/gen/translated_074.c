#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_007d2060 */
unsigned int F_007d2060(unsigned int gen_a0)
{
  GEN_ENTER(0x7d2060u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  if (REFG(int, 0x1379694) == 0) goto LAB_007d20df;
  if (*(char *)(REFG(int, 0x1379694) + 0x1688) == '\x10') {
    if ((*(int *)((int)this + 0x24) == 0) || (*(int *)((int)this + 0x24) == 1)) goto LAB_007d20df;
  }
  else {
    if (*(char *)(REFG(int, 0x1379694) + 0x1688) == '\x11') {
      if ((*(int *)((int)this + 0x24) != 2) && (*(int *)((int)this + 0x24) != 3)) {
        *(undefined4 *)((int)this + 0x24) = 2;
      }
      goto LAB_007d20df;
    }
    if (((*(byte *)((int)this + 0x20) & 3) == 0) &&
       (uVar2 = F_00a68280(&REFG(undefined1, 0x14ab070),0x10,1), (short)uVar2 == 0)) {
      *(undefined4 *)((int)this + 0x24) = 2;
    }
    if (((*(byte *)((int)this + 0x20) & 0xc) != 0) ||
       (uVar2 = F_00a68280(&REFG(undefined1, 0x14ab070),0x11,1), (short)uVar2 != 0)) goto LAB_007d20df;
  }
  *(undefined4 *)((int)this + 0x24) = 0;
LAB_007d20df: ;
  if (3 < *(int *)((int)this + 0x24)) {
    *(undefined4 *)((int)this + 0x24) = 0;
  }
  iVar1 = *(int *)((int)this + 0x24);
  if (iVar1 < 4) {
    *(int *)((int)this + 0x28) = (int)*(short *)((int)this + iVar1 * 4 + 0x10);
    *(int *)((int)this + 0x2c) = (int)*(short *)((int)this + iVar1 * 4 + 0x12);
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentGatheringNote::vf11 */
byte F_007d2110(unsigned int gen_a0)
{
  GEN_ENTER(0x7d2110u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
  if ((*(int *)(uVar1 + 0x18) != 0) &&
     ((~(byte)(**((uint * PTR32 *)GEN_TOP((*(int *)(uVar1 + 0x18) + 0xe4))) >> 7) & 1) == 0)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_007d2140 */
uint F_007d2140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d2140u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined1 gen_out[0x4];
  uint uVar1;
  undefined4 * puVar2;
  int local_c;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_out + 0x0);
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d41c4));
  in_ecx[0x1b] = 0;
  in_ecx[0x1c] = 0xffffffff;
  puVar2 = in_ecx + 0x1d;
  local_c = 0xd;
  do {
    *puVar2 = (*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
    F_0042b630(puVar2 + 1);
    puVar2[0x16] = 0;
    puVar2[0x17] = 0;
    puVar2[0x18] = 0;
    *(undefined2 *)(puVar2 + 0x19) = 0;
    *(undefined1 *)((int)puVar2 + 0x66) = 0;
    puVar2 = puVar2 + 0x1a;
    local_c = local_c + -1;
  } while (-1 < local_c);
  in_ecx[3] = 1;
  in_ecx[5] = 0xffffffff;
  in_ecx[6] = 1;
  in_ecx[8] = 0xffffffff;
  in_ecx[9] = 1;
  in_ecx[0xb] = 0xffffffff;
  in_ecx[0xc] = 1;
  in_ecx[0xe] = 0xffffffff;
  in_ecx[0xf] = 1;
  in_ecx[0x11] = 0xffffffff;
  in_ecx[0x12] = 1;
  in_ecx[0x14] = 0xffffffff;
  in_ecx[0x15] = 1;
  in_ecx[0x17] = 0xffffffff;
  in_ecx[4] = 5;
  in_ecx[7] = 4;
  in_ecx[10] = 7;
  in_ecx[0xd] = 8;
  in_ecx[0x10] = 9;
  in_ecx[0x13] = 2;
  in_ecx[0x16] = 0xb;
  F_00c47745(uVar1 ^ (uint)(uint)(gen_out + 0x0));
  return (uint)in_ecx;
}

/* ref: FUN_007d2220 */
uint F_007d2220(unsigned int gen_a0)
{
  GEN_ENTER(0x7d2220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  ulonglong uVar5;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d41c4));
  iVar3 = 0xd;
  puVar4 = (undefined4 *)((int)this + 0x624);
  do {
    puVar4[-0x1a] = (*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
    uVar5 = F_0042c880(puVar4 + -0x19);
    uVar2 = (uint)uVar5;
    iVar3 = iVar3 + -1;
    puVar4 = puVar4 + -0x1a;
  } while (-1 < iVar3);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentGearSet::vf5 */
unsigned int F_007d2290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d2290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if ((*(int *)(this + 0x70) != -1) && (((byte)param_1 & 0x1f) == 1)) {
    F_0076dbd0(this);
  }
  return 0;
}

/* ref: FUN_007d22b0 */
uint F_007d22b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d22b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x34))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043b440(this_00);
  if ((param_1 == uVar1) && (uVar1 = F_0076dad0(this,param_1), uVar1 == 0)) {
    return 0;
  }
  uVar1 = F_0046bd40(this_00,param_1);
  return uVar1;
}

/* ref: FUN_007d22f0 */
uint F_007d22f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7d22f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  byte bVar1;
  int * piVar2;
  uint uVar3;
  undefined * this_00;
  uint in_ecx;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined * this_01;
  ulonglong uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2,0x3d);
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2,0x38)));
  in_ecx = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x34))))(*(int * PTR32 *)((int)this + 4));
  uVar4 = F_0043b440(in_ecx);
  uVar5 = F_0043b460(in_ecx);
  bVar1 = 0;
  (*(uint *)(gen_frame + 0xc)) = 0xffffffff;
  if (uVar4 == 0xffffffff) {
    if (uVar5 == 0xffffffff) goto LAB_007d237e;
  }
  else {
    uVar6 = F_0076dad0(this,uVar4);
    uVar5 = uVar4;
    (*(uint *)(gen_frame + 0xc)) = uVar4;
    if (uVar6 == 0) goto LAB_007d237e;
  }
  (*(uint *)(gen_frame + 0xc)) = uVar5;
  bVar1 = 1;
LAB_007d237e: ;
  if (*((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x70c))) != (uint)bVar1) {
    *((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x70c))) = (uint)bVar1;
    *(undefined1 *)(uVar3 + 0x1d) = 1;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),&REFG(undefined, 0x10bdb9e),REFG(undefined4, 0x108cc50));
  if (((*(uint *)(gen_frame + 0xc)) != 0xffffffff) &&
     (uVar5 = F_0043b3e0(in_ecx,(*(uint *)(gen_frame + 0xc))), (*(byte *)(uVar5 + 0x39) & 1) != 0)) {
    piVar2 = *(int * PTR32 *)((int)this + 4);
    iVar7 = uVar5 + 4;
    uVar5 = F_00435340((*(uint *)(gen_frame + 0xc)) + 1);
    uVar9 = 0x300;
    this_01 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2)));
    uVar5 = F_004608b0(this_01,uVar9,uVar5,iVar7);
    F_0042e430(((undefined1 *)(gen_frame + 0x14)),uVar5);
  }
  uVar11 = 0;
  uVar10 = 1;
  uVar9 = 0;
  uVar5 = F_0042a990(((undefined1 *)(gen_frame + 0x14)));
  F_00431250(this_00,0x144,uVar5,uVar9,uVar10,uVar11);
  uVar8 = F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return (uint)uVar8;
}

/* ref: FUN_007d2430 */
uint F_007d2430(unsigned int gen_a0)
{
  GEN_ENTER(0x7d2430u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  undefined * this_00;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined * this_01;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int local_18;
  int local_14;
  int local_c;
  uint local_8;
  
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2,0x2b);
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2,0x27)));
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x34))))(*(int * PTR32 *)((int)this + 4));
  bVar1 = F_00a37c00(&REFG(undefined, 0x14a4230));
  uVar5 = (uint)bVar1;
  local_14 = 0;
  local_8 = 0;
  if (uVar5 != 0) {
    local_18 = 0x24;
    local_c = 0x10;
    do {
      uVar6 = F_0043b3e0(uVar4,local_8);
      piVar2 = ((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + -8 + local_c)));
      if ((*(byte *)(uVar6 + 0x39) & 1) == 0) {
        if (*piVar2 != 0) {
          *piVar2 = 0;
          *(undefined1 *)(uVar3 + 0x1d) = 1;
        }
      }
      else {
        if (*piVar2 != 1) {
          *piVar2 = 1;
          *(undefined1 *)(uVar3 + 0x1d) = 1;
        }
        iVar8 = 0;
        uVar7 = F_0043b440(uVar4);
        if (local_8 == uVar7) {
          iVar8 = 1;
        }
        else {
          uVar7 = F_0043b460(uVar4);
          if (local_8 == uVar7) {
            iVar8 = 2;
          }
        }
        if (*((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + -4 + local_c))) != iVar8) {
          *((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + -4 + local_c))) = iVar8;
          *(undefined1 *)(uVar3 + 0x1d) = 1;
        }
        if (*(int *)(uVar6 + 0x34) == 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = *(int *)(uVar6 + 0x34) + 62000;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + local_c))) != iVar8) {
          *((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + local_c))) = iVar8;
          *(undefined1 *)(uVar3 + 0x1d) = 1;
        }
        if (*(int *)(uVar6 + 0x34) == 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = *(int *)(uVar6 + 0x34) + 0xf550;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + 4 + local_c))) != iVar8) {
          *((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + 4 + local_c))) = iVar8;
          *(undefined1 *)(uVar3 + 0x1d) = 1;
        }
        uVar7 = F_0076dad0(this,local_8);
        if (*((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 8 + local_c))) != uVar7) {
          *((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 8 + local_c))) = uVar7;
          *(undefined1 *)(uVar3 + 0x1d) = 1;
        }
        if (uVar6 + 4 != *((int *)GEN_TOP((local_18 + *(int *)((int)this_00 + 0x20))))) {
          *((uint *)GEN_TOP((local_18 + *(int *)((int)this_00 + 0x20)))) = uVar6 + 4;
          *(undefined1 *)((int)this_00 + 0x1d) = 1;
        }
        local_14 = local_14 + 1;
      }
      local_c = local_c + 0x14;
      local_18 = local_18 + 4;
      local_8 = local_8 + 1;
    } while ((int)local_8 < (int)uVar5);
  }
  this_01 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  if (**(uint * PTR32 *)(uVar3 + 0x20) != uVar5) {
    **(uint * PTR32 *)(uVar3 + 0x20) = uVar5;
    *(undefined1 *)(uVar3 + 0x1d) = 1;
  }
  uVar11 = 0;
  uVar10 = 1;
  uVar9 = 0;
  uVar6 = F_00461c60(this_01,0x7fc,local_14,uVar5);
  F_00431250(this_00,0,uVar6,uVar9,uVar10,uVar11);
  uVar4 = F_0043b3e0(uVar4,100);
  bVar1 = *(byte *)(uVar4 + 0x39) & 1;
  uVar4 = (uint)(bVar1 != 0);
  if (*((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 4))) != uVar4) {
    *((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 4))) = uVar4;
    *(undefined1 *)(uVar3 + 0x1d) = 1;
  }
  uVar3 = F_0043bd00(this_01,(uint)(bVar1 == 0) * 4 + 0x102c,0,0);
  if (uVar3 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 4)))) {
    *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 4))) = uVar3;
    *(undefined1 *)((int)this_00 + 0x1d) = 1;
  }
  uVar3 = F_0043bd00(this_01,(uint)((int)uVar5 <= local_14) * 4 + 0x102d,0,0);
  if (uVar3 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 8)))) {
    *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 8))) = uVar3;
    *(undefined1 *)((int)this_00 + 0x1d) = 1;
  }
  uVar3 = F_0043bd00(this_01,0x1032,0,0);
  if (uVar3 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0xc)))) {
    *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0xc))) = uVar3;
    *(undefined1 *)((int)this_00 + 0x1d) = 1;
  }
  uVar3 = F_0043bd00(this_01,0x1033,0,0);
  if (uVar3 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x10)))) {
    *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x10))) = uVar3;
    *(undefined1 *)((int)this_00 + 0x1d) = 1;
  }
  uVar3 = F_0043bd00(this_01,0x1109,0,0);
  if (uVar3 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x14)))) {
    *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x14))) = uVar3;
    *(undefined1 *)((int)this_00 + 0x1d) = 1;
  }
  uVar3 = F_0043bd00(this_01,0x110a,0,0);
  if (uVar3 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x18)))) {
    *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x18))) = uVar3;
    *(undefined1 *)((int)this_00 + 0x1d) = 1;
  }
  uVar3 = F_0043bd00(this_01,0x110c,0,0);
  if (uVar3 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x1c)))) {
    *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x1c))) = uVar3;
    *(undefined1 *)((int)this_00 + 0x1d) = 1;
  }
  uVar3 = F_0043bd00(this_01,0x110b,0,0);
  if (uVar3 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x20)))) {
    *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x20))) = uVar3;
    *(undefined1 *)((int)this_00 + 0x1d) = 1;
  }
  uVar3 = F_007d22f0(this);
  return uVar3;
}

/* ref: FUN_007d2750 */
byte F_007d2750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d2750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  byte bVar2;
  undefined * pvVar3;
  uint uVar4;
  int * piVar5;
  int iVar6;
  
  pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x34))))(*(int * PTR32 *)((int)this + 4))));
  F_0046c830(pvVar3,param_1);
  F_007d2430(this);
  if (*(int *)((int)this + 8) != 0) {
    bVar2 = F_00a37c00(&REFG(undefined, 0x14a4230));
    (*(uint *)(gen_frame + 0x14)) = (uint)bVar2;
    (*(int *)(gen_frame + 0x18)) = -1;
    iVar6 = param_1;
    iVar1 = param_1;
    if (param_1 < (int)(uint)bVar2) {
      do {
        uVar4 = F_0043b3e0(pvVar3,iVar6);
        if ((*(byte *)(uVar4 + 0x39) & 1) != 0) {
          (*(int *)(gen_frame + 0x18)) = iVar6;
          if (-1 < iVar6) goto LAB_007d27d9;
          break;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)(*(uint *)(gen_frame + 0x14)));
    }
    do {
      iVar1 = iVar1 + -1;
      if (iVar1 < 0) goto LAB_007d27d9;
      uVar4 = F_0043b3e0(pvVar3,iVar1);
    } while ((*(byte *)(uVar4 + 0x39) & 1) == 0);
    (*(int *)(gen_frame + 0x18)) = iVar1;
LAB_007d27d9: ;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
    (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x18));
    piVar5 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar5 + 0x5c))(piVar5,*(undefined4 *)((int)this + 8),1,&(*(undefined4 *)(gen_frame + 0xc)));
    F_005a2670(&(*(undefined4 *)(gen_frame + 0xc)));
  }
  if ((*(int *)((int)this + 0x70) != -1) && (*(int *)((int)this + 0x70) == param_1)) {
    if (*(int *)((int)this + 0x6c) != 0) {
      piVar5 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar5 + 0x54))(piVar5,*(undefined4 *)((int)this + 0x6c),0);
      *(undefined4 *)((int)this + 0x6c) = 0;
    }
    *(undefined4 *)((int)this + 0x70) = 0xffffffff;
  }
  pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x30))))(*(int * PTR32 *)((int)this + 4))));
  F_0043b110(pvVar3,param_1);
  return 0;
}

/* ref: FUN_007d2870 */
byte F_007d2870(unsigned int gen_a0)
{
  GEN_ENTER(0x7d2870u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x24) + 0xc))))(*(int * PTR32 *)(uVar1 + 0x24));
  if (*(int *)((int)this + 0x6c) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)((int)this + 0x6c),0);
    *(undefined4 *)((int)this + 0x6c) = 0;
  }
  return 1;
}

/* ref: FUN_007d28c0 */
byte F_007d28c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d28c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x34))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043b440(this_00);
  if ((param_1 == uVar1) && (uVar1 = F_0076dad0(this,param_1), uVar1 == 0)) {
    return 0;
  }
  F_0046bd40(this_00,param_1);
  return 0;
}

/* ref: FUN_007d2900 */
byte F_007d2900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d2900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  uint uVar2;
  int * piVar3;
  
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x34))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0046c950(pvVar1,param_1);
  F_007d2430(this);
  if (*(int *)((int)this + 8) != 0) {
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),3);
    (*(uint *)(gen_frame + 0x8)) = uVar2;
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3,*(undefined4 *)((int)this + 8),1,&(*(undefined4 *)(gen_frame + 0x4)));
    F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  }
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x30))))(*(int * PTR32 *)((int)this + 4))));
  F_004593f0(pvVar1,uVar2);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4));
  *(byte *)(uVar2 + 0x230bf) = *(byte *)(uVar2 + 0x230bf) | 2;
  return 0;
}

/* ref: FUN_007d29a0 */
byte F_007d29a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d29a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x34))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0046cac0(pvVar1,param_2,param_1);
  F_007d2430(this);
  if (*(int *)((int)this + 8) != 0) {
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),3);
    (*(uint *)(gen_frame + 0x8)) = uVar2;
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3,*(undefined4 *)((int)this + 8),1,&(*(undefined4 *)(gen_frame + 0x4)));
    F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  }
  iVar5 = param_1;
  uVar4 = uVar2;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x30))))(*(int * PTR32 *)((int)this + 4))));
  F_004594a0(pvVar1,iVar5,uVar4);
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4));
  *(byte *)(uVar4 + 0x230bf) = *(byte *)(uVar4 + 0x230bf) | 2;
  if ((*(int *)((int)this + 0x70) != -1) && (*(int *)((int)this + 0x70) == param_1)) {
    if (*(int *)((int)this + 0x6c) != 0) {
      piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,*(undefined4 *)((int)this + 0x6c),0);
      *(undefined4 *)((int)this + 0x6c) = 0;
    }
    *(undefined4 *)((int)this + 0x70) = 0xffffffff;
  }
  if ((*(uint *)((int)this + 0x70) != 0xffffffff) && (*(uint *)((int)this + 0x70) == uVar2)) {
    if (*(int *)((int)this + 0x6c) != 0) {
      piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,*(undefined4 *)((int)this + 0x6c),0);
      *(undefined4 *)((int)this + 0x6c) = 0;
    }
    *(undefined4 *)((int)this + 0x70) = 0xffffffff;
  }
  return 0;
}

/* ref: FUN_007d2ab0 */
uint F_007d2ab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d2ab0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  byte bVar1;
  undefined * pvVar2;
  int * piVar3;
  uint uVar4;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x34))))(*(int * PTR32 *)((int)this + 4))));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),param_2,REFG(undefined4, 0x108cc50));
  bVar1 = F_0046cc00(pvVar2,param_1,((undefined1 *)(gen_frame + 0x14)));
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  if (bVar1 != 0) {
    F_007d2430(this);
    if (*(int *)((int)this + 8) != 0) {
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
      (*(undefined4 *)(gen_frame + 0x10)) = param_1;
      piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3,*(undefined4 *)((int)this + 8),1,&(*(undefined4 *)(gen_frame + 0xc)));
      F_005a2670(&(*(undefined4 *)(gen_frame + 0xc)));
    }
  }
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x30))))(*(int * PTR32 *)((int)this + 4))));
  F_004593f0(pvVar2,param_1);
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4));
  *(byte *)(uVar4 + 0x230bf) = *(byte *)(uVar4 + 0x230bf) | 2;
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return uVar4 & 0xffffff00;
}

/* ref: FUN_007d2b80 */
uint F_007d2b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d2b80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d420c));
  *(undefined1 *)(in_ecx + 3) = 0;
  puVar1 = in_ecx + 4;
  param_2 = 1;
  do {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
    F_0042b630(puVar1 + 1);
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    *(undefined2 *)(puVar1 + 0x19) = 0;
    *(undefined1 *)((int)puVar1 + 0x66) = 0;
    puVar1 = puVar1 + 0x1b;
    param_2 = param_2 + -1;
  } while (-1 < param_2);
  puVar1 = in_ecx + 0x3a;
  param_2 = 7;
  do {
    F_0042b630(puVar1);
    puVar1 = puVar1 + 0x15;
    param_2 = param_2 + -1;
  } while (-1 < param_2);
  puVar1 = in_ecx + 0xe2;
  param_2 = 2;
  do {
    F_0042b630(puVar1);
    puVar1 = puVar1 + 0x15;
    param_2 = param_2 + -1;
  } while (-1 < param_2);
  puVar1 = in_ecx + 0x121;
  param_2 = 0x1d;
  do {
    F_0042b630(puVar1);
    puVar1 = puVar1 + 0x15;
    param_2 = param_2 + -1;
  } while (-1 < param_2);
  F_0042b630(in_ecx + 0x397);
  in_ecx[0x3ad] = 0;
  in_ecx[0x3ae] = 0;
  in_ecx[0x3ac] = 0xffffffff;
  return (uint)in_ecx;
}

/* ref: FUN_007d2c60 */
uint F_007d2c60(unsigned int gen_a0)
{
  GEN_ENTER(0x7d2c60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  undefined * pvVar4;
  undefined4 * puVar5;
  ulonglong uVar6;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d420c));
  F_0042c880((undefined *)((int)this + 0xe5c));
  pvVar4 = (undefined *)((int)this + 0xe5c);
  iVar3 = 0x1d;
  do {
    pvVar4 = (undefined *)((int)pvVar4 + -0x54);
    F_0042c880(pvVar4);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  pvVar4 = (undefined *)((int)this + 0x484);
  iVar3 = 2;
  do {
    pvVar4 = (undefined *)((int)pvVar4 + -0x54);
    F_0042c880(pvVar4);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  pvVar4 = (undefined *)((int)this + 0x388);
  iVar3 = 7;
  do {
    pvVar4 = (undefined *)((int)pvVar4 + -0x54);
    F_0042c880(pvVar4);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  iVar3 = 1;
  puVar5 = (undefined4 *)((int)this + 0xe8);
  do {
    puVar5[-0x1b] = (*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
    uVar6 = F_0042c880(puVar5 + -0x1a);
    uVar2 = (uint)uVar6;
    iVar3 = iVar3 + -1;
    puVar5 = puVar5 + -0x1b;
  } while (-1 < iVar3);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentBuddy::vf11 */
uint F_007d2d30(unsigned int gen_a0)
{
  GEN_ENTER(0x7d2d30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  uint uVar1;
  
  if ((REFG(undefined1, 0x14b4ec2) & 2) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
    in_EAX = 0;
    if (*(int *)(uVar1 + 0x18) != 0) {
      return ~(*((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(uVar1 + 0x18) + 0xe4))) + 4))) >> 10) & 1;
    }
  }
  return in_EAX & 0xffffff00;
}

/* ref: FUN_007d2d60 */
byte F_007d2d60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d2d60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  
  uVar2 = F_00a6b470(1);
  bVar1 = F_0076df70(param_2 + 0x50,param_2 + 0x48,param_2 + 0x40,(int)this + 0x10,uVar2);
  if (bVar1 == 0) {
    return 0;
  }
  uVar2 = F_00a6b4b0(1);
  if (-1 < (int)uVar2) {
    F_0076e060(param_2 + 0x78,uVar2);
  }
  piVar3 = &REFG(undefined4, 0x132818c);
  iVar4 = param_2 + 0x98;
  do {
    if (-1 < *piVar3) {
      F_0076e0c0(this,iVar4,*piVar3);
    }
    piVar3 = piVar3 + 1;
    iVar4 = iVar4 + 0x20;
  } while ((int)piVar3 < 0x13281a4);
  return 1;
}

/* ref: FUN_007d2df0 */
byte F_007d2df0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d2df0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  byte bVar2;
  byte bVar3;
  undefined * this_00;
  uint uVar4;
  undefined * this_01;
  int iVar5;
  uint * puVar6;
  undefined4 uVar7;
  
  bVar2 = *(byte *)(param_1 + 0x31);
  this_01 = (undefined *)((int)this + 0x388);
  (*(int *)(gen_frame + 0x18)) = 0;
  puVar6 = (uint *)(param_2 + 0x174);
  param_2 = param_2 + 0x188;
  do {
    bVar3 = F_00a6b380(param_1,(*(int *)(gen_frame + 0x18)));
    (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),bVar3);
    uVar7 = 0x136d;
    uVar4 = (uint)bVar3;
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar4 = F_00460bd0(this_00,uVar7,uVar4);
    F_0042e430(this_01,uVar4);
    F_005a2710(puVar6 + -7,3);
    puVar6[-6] = (uint)bVar3;
    uVar4 = F_0042a990(this_01);
    F_005a2710(puVar6 + -1,6);
    *puVar6 = uVar4;
    iVar5 = 0;
    iVar1 = param_2 + 0x230;
    do {
      F_0076e150(this,param_2,(*(int *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x8)),iVar5,(uint)bVar2);
      iVar5 = iVar5 + 1;
      param_2 = param_2 + 0x38;
    } while (iVar5 < 10);
    this_01 = (undefined *)((int)this_01 + 0x54);
    (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) + 1;
    puVar6 = puVar6 + 2;
    param_2 = iVar1;
  } while ((*(int *)(gen_frame + 0x18)) < 3);
  return 1;
}

/* ref: FUN_007d2fa0 */
uint F_007d2fa0(unsigned int gen_a0)
{
  GEN_ENTER(0x7d2fa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x670];
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0x668)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x66c);
  puVar1 = ((undefined4 *)(gen_frame + 0x0));
  iVar4 = 0xcc;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_0076e660(this,((undefined4 *)(gen_frame + 0x0)),*(undefined4 *)((int)this + 0xeb0));
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  ((code *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2,*(undefined4 *)((int)this + 0xeb8),0xcd,((undefined4 *)(gen_frame + 0x0)));
  this_00 = &(*(uint *)(gen_frame + 0x668));
  iVar4 = 0xcc;
  do {
    this_00 = this_00 + -2;
    uVar3 = F_005a2670(this_00);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_00c47745((*(uint *)(gen_frame + 0x668)) ^ (uint)(uint)(gen_frame + 0x66c));
  return uVar3;
}

/* ref: FUN_007d3030 */
unsigned int F_007d3030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d3030u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  
  if (param_1 == 0x4b) {
    piVar1 = (int *)((int)this + -0xc);
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + -0xc) + 0x10))))(piVar1);
    if ((char)uVar2 != '\0') {
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    }
  }
  return 0;
}

/* ref: FUN_007d3060 */
uint F_007d3060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d3060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  byte bVar1;
  undefined4 uVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  uint * this_00;
  int iVar6;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x68))(piVar3,*(undefined4 *)((int)this + 8));
  if (((char)uVar4 != '\0') && (uVar4 = param_1, param_1 < *(uint *)((int)this + 0x40))) {
    *(uint *)((int)this + 0x3c) = param_1;
    uVar5 = F_0076ea40(*(undefined4 *)((int)this + 0x4c),param_1,(uint)*(byte *)((int)this + 0x44)
                        );
    uVar4 = 0;
    if (uVar5 != 0) {
      uVar2 = *(undefined4 *)((int)this + 0x40);
      ((undefined4 *)(gen_frame + 0x0))[0] = 0;
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(undefined4 *)(gen_frame + 0x30)) = 0;
      (*(undefined4 *)(gen_frame + 0x38)) = 0;
      (*(undefined4 *)(gen_frame + 0x40)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),4);
      (*(undefined4 *)(gen_frame + 0xc)) = uVar2;
      uVar2 = *(undefined4 *)((int)this + 0x3c);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),4);
      (*(undefined4 *)(gen_frame + 0x14)) = uVar2;
      bVar1 = *(byte *)(uVar5 + 0x10);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),4);
      (*(uint *)(gen_frame + 0x1c)) = (uint)bVar1;
      uVar4 = F_0076ea90(uVar5,(uint)REFG(undefined1, 0x14ab14f),(uint)REFG(undefined1, 0x14ab29a));
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),4);
      (*(uint *)(gen_frame + 0x24)) = uVar4;
      iVar6 = *(int *)((int)this + 0x48);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),4);
      (*(int *)(gen_frame + 0x2c)) = iVar6 + 2;
      uVar4 = F_0076eae0(uVar5,(uint)REFG(undefined1, 0x14ab14f),(uint)REFG(undefined1, 0x14ab29a));
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),6);
      (*(uint *)(gen_frame + 0x34)) = uVar4;
      piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3,*(undefined4 *)((int)this + 8),9,((undefined4 *)(gen_frame + 0x0)));
      this_00 = &(*(uint *)(gen_frame + 0x48));
      iVar6 = 8;
      do {
        this_00 = this_00 + -2;
        uVar4 = F_005a2670(this_00);
        iVar6 = iVar6 + -1;
      } while (-1 < iVar6);
      F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
      return CONCAT31((int3)(uVar4 >> 8),1);
    }
    *(undefined4 *)((int)this + 0x50) = 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar4 & 0xffffff00;
}

/* ref: FUN_007d31d0 */
uint F_007d31d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7d31d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x1e0];
  uint uVar1;
  uint * puVar2;
  undefined * pvVar3;
  int * piVar4;
  int iVar5;
  undefined4 * this_00;
  undefined1 * this_01;
  undefined4 uVar6;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1dc);
  (*(uint *)(gen_frame + 0x1d8)) = uVar1;
  if ((*(char *)((int)this + 0x60) == '\0') && (param_1 != 0)) {
    F_00c47745(uVar1 ^ (uint)(uint)(gen_frame + 0x1dc));
    return uVar1 & 0xffffff00;
  }
  piVar4 = ((int *)(gen_frame + 0x8));
  iVar5 = 0x36;
  do {
    *piVar4 = 0;
    piVar4 = piVar4 + 2;
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  F_005a2710(((int *)(gen_frame + 0x8)),4);
  ((int *)(gen_frame + 0x8))[1] = param_1;
  F_005a2710(((undefined1 *)(gen_frame + 0x10)),4);
  (*(uint *)(gen_frame + 0x14)) = param_2;
  if (param_4 == (undefined *)0x0) {
    param_4 = &REFG(undefined, 0x10bdbc2);
  }
  F_005a2710(((undefined1 *)(gen_frame + 0x1b0)),6);
  (*(undefined * PTR32 *)(gen_frame + 0x1b4)) = param_4;
  F_005a2710(((undefined1 *)(gen_frame + 0x1b8)),3);
  (*(undefined4 *)(gen_frame + 0x1bc)) = param_3;
  if (param_1 == 0) {
    uVar1 = 1;
    this_01 = ((undefined1 *)(gen_frame + 0x20));
    do {
      puVar2 = (uint *)F_00ab2cf0(uVar1 & 0xffff);
      if (puVar2 == (uint *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = (*puVar2 & 0xffffff) + (int)puVar2;
      }
      F_005a2710(this_01,6);
      *(int *)(this_01 + 4) = iVar5;
      uVar1 = uVar1 + 1;
      this_01 = this_01 + 8;
    } while ((int)uVar1 < 0x2c);
  }
  (*(undefined1 *)(gen_frame + 0x7)) = 0;
  if (*(int *)((int)this + 0xcc) == 0) {
    uVar6 = 0x3c;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = F_007c8b20(pvVar3,uVar6);
    *(uint *)((int)this + 0xcc) = uVar1;
    if (uVar1 != 0) goto LAB_007d32fa;
  }
  else {
LAB_007d32fa: ;
    piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4,*(undefined4 *)((int)this + 0xcc),0x37,((int *)(gen_frame + 0x8)));
    (*(undefined1 *)(gen_frame + 0x7)) = 1;
  }
  if (param_1 != 2) goto LAB_007d33cf;
  (*(undefined4 *)(gen_frame + 0x1c0)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c8)) = 0;
  (*(undefined4 *)(gen_frame + 0x1d0)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x1c0)),4);
  (*(undefined4 *)(gen_frame + 0x1c4)) = 2;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x1c8)),4);
  (*(uint *)(gen_frame + 0x1cc)) = param_2 & 0xffff;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x1d0)),3);
  (*(uint *)(gen_frame + 0x1d4)) = param_2 >> 0x10 & 1;
  if (*(int *)((int)this + 0xd0) == 0) {
    uVar6 = 0x80;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = F_007c8b20(pvVar3,uVar6);
    *(uint *)((int)this + 0xd0) = uVar1;
    if (uVar1 != 0) goto LAB_007d3393;
  }
  else {
LAB_007d3393: ;
    piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4,*(undefined4 *)((int)this + 0xd0),3,&(*(undefined4 *)(gen_frame + 0x1c0)));
    (*(undefined1 *)(gen_frame + 0x7)) = 1;
  }
  puVar2 = &(*(uint *)(gen_frame + 0x1d8));
  iVar5 = 2;
  do {
    puVar2 = puVar2 + -2;
    F_005a2670(puVar2);
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
LAB_007d33cf: ;
  this_00 = &(*(undefined4 *)(gen_frame + 0x1c0));
  iVar5 = 0x36;
  do {
    this_00 = this_00 + -2;
    uVar1 = F_005a2670(this_00);
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  F_00c47745((*(uint *)(gen_frame + 0x1d8)) ^ (uint)(uint)(gen_frame + 0x1dc));
  return CONCAT31((int3)(uVar1 >> 8),(*(undefined1 *)(gen_frame + 0x7)));
}

/* ref: FUN_007d3410 */
uint F_007d3410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d3410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x1e0];
  uint uVar1;
  undefined4 * puVar2;
  undefined * pvVar3;
  int * piVar4;
  int iVar5;
  uint uVar6;
  uint * puVar7;
  uint uVar8;
  undefined4 uVar9;
  
  (*(uint *)(gen_frame + 0x1d8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1dc);
  iVar5 = *(int *)((int)this + 0xe4);
  uVar8 = 1 << ((byte)param_1 & 0x1f);
  uVar6 = param_1 >> 5;
  if (((*(uint *)(iVar5 + uVar6 * 4) & uVar8) == 0) == (bool)(char)param_2) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1dc) ^ (uint)(uint)(gen_frame + 0x1dc));
    return CONCAT31((int3)((uint)iVar5 >> 8),1);
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4));
  *(byte *)(uVar1 + 0x230bf) = *(byte *)(uVar1 + 0x230bf) | 0x20;
  if ((char)param_2 == '\0') {
    puVar7 = ((uint *)GEN_TOP((*(int *)((int)this + 0xe4) + uVar6 * 4)));
    *puVar7 = *puVar7 | uVar8;
    *(int *)((int)this + 0xdc) = *(int *)((int)this + 0xdc) + 1;
  }
  else {
    puVar7 = ((uint *)GEN_TOP((*(int *)((int)this + 0xe4) + uVar6 * 4)));
    *puVar7 = *puVar7 & ~uVar8;
    *(int *)((int)this + 0xdc) = *(int *)((int)this + 0xdc) + -1;
    param_1 = param_1 | 0x10000;
  }
  if (*(char *)((int)this + 0x60) == '\0') {
    F_00c47745((*(uint *)(gen_frame + 0x1d8)) ^ (uint)(uint)(gen_frame + 0x1dc));
    return uVar1 & 0xffffff00;
  }
  puVar2 = ((undefined4 *)(gen_frame + 0x8));
  iVar5 = 0x36;
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 2;
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  F_005a2710(((undefined4 *)(gen_frame + 0x8)),4);
  ((undefined4 *)(gen_frame + 0x8))[1] = 2;
  F_005a2710(((undefined1 *)(gen_frame + 0x10)),4);
  (*(uint *)(gen_frame + 0x14)) = param_1;
  F_005a2710(((undefined1 *)(gen_frame + 0x1b0)),6);
  (*(undefined * PTR32 *)(gen_frame + 0x1b4)) = &REFG(undefined, 0x10bdbc2);
  F_005a2710(((undefined1 *)(gen_frame + 0x1b8)),3);
  (*(undefined4 *)(gen_frame + 0x1bc)) = 0xffffffff;
  (*(undefined1 *)(gen_frame + 0x7)) = 0;
  if (*(int *)((int)this + 0xcc) == 0) {
    uVar9 = 0x3c;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar6 = F_007c8b20(pvVar3,uVar9);
    *(uint *)((int)this + 0xcc) = uVar6;
    if (uVar6 != 0) goto LAB_007d3546;
  }
  else {
LAB_007d3546: ;
    piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4,*(undefined4 *)((int)this + 0xcc),0x37,((undefined4 *)(gen_frame + 0x8)));
    (*(undefined1 *)(gen_frame + 0x7)) = 1;
  }
  (*(undefined4 *)(gen_frame + 0x1c0)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c8)) = 0;
  (*(undefined4 *)(gen_frame + 0x1d0)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x1c0)),4);
  (*(undefined4 *)(gen_frame + 0x1c4)) = 2;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x1c8)),4);
  (*(uint *)(gen_frame + 0x1cc)) = param_1 & 0xffff;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x1d0)),3);
  (*(uint *)(gen_frame + 0x1d4)) = param_1 >> 0x10 & 1;
  if (*(int *)((int)this + 0xd0) == 0) {
    uVar9 = 0x80;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar6 = F_007c8b20(pvVar3,uVar9);
    *(uint *)((int)this + 0xd0) = uVar6;
    if (uVar6 == 0) goto LAB_007d35ff;
  }
  piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4,*(undefined4 *)((int)this + 0xd0),3,&(*(undefined4 *)(gen_frame + 0x1c0)));
  (*(undefined1 *)(gen_frame + 0x7)) = 1;
LAB_007d35ff: ;
  puVar7 = &(*(uint *)(gen_frame + 0x1d8));
  iVar5 = 2;
  do {
    puVar7 = puVar7 + -2;
    F_005a2670(puVar7);
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  puVar2 = &(*(undefined4 *)(gen_frame + 0x1c0));
  iVar5 = 0x36;
  do {
    puVar2 = puVar2 + -2;
    uVar6 = F_005a2670(puVar2);
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  F_00c47745((*(uint *)(gen_frame + 0x1d8)) ^ (uint)(uint)(gen_frame + 0x1dc));
  return CONCAT31((int3)(uVar6 >> 8),(*(undefined1 *)(gen_frame + 0x7)));
}

/* ref: FUN_007d3660 */
byte F_007d3660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d3660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 7: ;
    iVar3 = 0x13;
    break;
  case 8: ;
    iVar3 = 0x3b;
    break;
  case 9: ;
    iVar3 = 0x14;
    break;
  default: ;
    goto switchD_007d3676_caseD_a;
  case 0x1d: ;
    iVar3 = 0x15;
    break;
  case 0x1f: ;
    iVar3 = 0x5b;
    break;
  case 0x29: ;
    iVar3 = 0x16;
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  piVar1 = *(int * PTR32 *)(uVar2 + 0xc + iVar3 * 4);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
    return (byte)uVar2;
  }
switchD_007d3676_caseD_a: ;
  return 1;
}

/* ref: FUN_007d3b80 */
unsigned int F_007d3b80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x7d3b80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x58)) = this;
  if (param_5 != (undefined4 *)0x0) {
    uVar5 = 1;
    uVar3 = F_00ab21a0((uint)*(byte *)((int)param_5 + 0x51));
    if (uVar3 != 0) {
      if (*(int *)(uVar3 + 0x10) == 0x20) {
        uVar5 = 2;
      }
      else if (*(int *)(uVar3 + 0x10) == 0x21) {
        uVar5 = 4;
      }
    }
    (*(undefined4 *)(gen_frame + 0x14)) = param_2;
    (*(undefined4 *)(gen_frame + 0xc)) = param_1;
    (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = param_5 + 4;
    bVar1 = *(byte *)(param_5 + 0x15);
    (*(undefined4 *)(gen_frame + 0x10)) = param_3;
    (*(undefined4 *)(gen_frame + 0x18)) = param_4;
    (*(undefined4 *)(gen_frame + 0x1c)) = param_6;
    (*(undefined4 *)(gen_frame + 0x24)) = *param_5;
    if ((bVar1 == 0) || (bVar4 = *(byte *)((int)param_5 + 0x53), bVar2 = bVar1, bVar4 <= bVar1)) {
      bVar4 = *(byte *)((int)param_5 + 0x53);
      bVar2 = bVar4;
    }
    (*(uint *)(gen_frame + 0x28)) = (uint)bVar2;
    (*(undefined4 *)(gen_frame + 0x2c)) = param_5[0x16];
    (*(undefined4 *)(gen_frame + 0x30)) = param_5[0x17];
    (*(int *)(gen_frame + 0x34)) = (int)*(short *)(param_5 + 0x18);
    (*(int *)(gen_frame + 0x38)) = (int)*(short *)((int)param_5 + 0x62);
    (*(uint *)(gen_frame + 0x3c)) = (uint)*(ushort *)(param_5 + 0x19);
    (*(undefined4 *)(gen_frame + 0x40)) = 1000;
    (*(uint *)(gen_frame + 0x44)) = (*(char *)(param_5 + 0x1a) == '\x03') - 1 & uVar5;
    (*(uint *)(gen_frame + 0x48)) = (uint)*(byte *)((int)param_5 + 0x51);
    if (*(char *)(param_5 + 0x1a) == '\x03') {
      (*(int *)(gen_frame + 0x4c)) = 0xf2b1;
    }
    else if ((*(uint *)(gen_frame + 0x48)) == 0) {
      (*(int *)(gen_frame + 0x4c)) = 0;
    }
    else {
      (*(int *)(gen_frame + 0x4c)) = (*(uint *)(gen_frame + 0x48)) + 0xf294;
    }
    if ((bVar1 == 0) || (bVar4 <= bVar1)) {
      bVar1 = 0;
    }
    else {
      bVar1 = 1;
    }
    (*(undefined1 *)(gen_frame + 0x54)) = *(undefined1 *)((int)param_5 + 0x52);
    (*(uint *)(gen_frame + 0x50)) = (uint)bVar1;
    if ((param_5[0xe2] & 0x10000) == 0) {
      (*(char *)(gen_frame + 0x55)) = '\0';
    }
    else {
      (*(char *)(gen_frame + 0x55)) = '\x10';
    }
    (*(bool *)(gen_frame + 0x57)) = (*(char *)(gen_frame + 0x55)) == '\x10';
    (*(undefined1 *)(gen_frame + 0x56)) = (undefined1)param_7;
    F_0076fc90((*(undefined * PTR32 *)(gen_frame + 0x58)),&(*(undefined4 *)(gen_frame + 0xc)));
  }
  return 0;
}

/* ref: FUN_007d3cd0 */
uint F_007d3cd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x7d3cd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  int param_5 = (int)gen_a5;
  int param_6 = (int)gen_a6;
  uint param_7 = (uint)gen_a7;
  int iVar1;
  int * piVar2;
  
  iVar1 = 0;
  if ((param_5 == -0x20000000) && (param_6 == 0)) {
    *(undefined4 *)((int)this + param_1 * 8 + 0x45c) = 0;
    *(uint *)((int)this + param_1 * 8 + 0x460) = param_1;
  }
  else {
    *(undefined4 *)((int)this + param_1 * 8 + 0x45c) = 0;
    *(uint *)((int)this + param_1 * 8 + 0x460) = param_1;
    if (0 < REFG(int, 0x14aa744)) {
      piVar2 = &REFG(undefined4, 0x14a9e84);
      do {
        if (*piVar2 == param_2) {
          iVar1 = (&REFG(undefined4, 0x14a9e88))[iVar1 * 0x12];
          *(int *)((int)this + param_1 * 8 + 0x45c) = iVar1;
          if (*(int *)((int)this + 0x4a4) < iVar1) {
            *(int *)((int)this + 0x4a4) = iVar1;
          }
          break;
        }
        iVar1 = iVar1 + 1;
        piVar2 = piVar2 + 0x12;
      } while (iVar1 < REFG(int, 0x14aa744));
    }
    if ((param_5 == param_3) && (param_6 == param_4)) {
      return param_1;
    }
  }
  return param_7;
}

/* ref: FUN_007d3ee0 */
uint F_007d3ee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d3ee0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  int * piVar1;
  int * piVar2;
  byte bVar3;
  uint uVar4;
  undefined * pvVar5;
  uint uVar6;
  int * piVar7;
  int iVar8;
  char * this_00;
  char cVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  if ((REFG(int, 0x14b11f8) == 0) || (REFG(char, 0x14b1251) == '\0')) {
    if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x160))) != 0) {
      *(undefined1 *)((int)this + 0xc) = 1;
    }
    uVar4 = *(uint *)(param_1 + 0x20);
    if (*(int *)(uVar4 + 0x160) != 0) {
      *(undefined4 *)(uVar4 + 0x160) = 0;
      *(undefined1 *)(param_1 + 0x1d) = 1;
    }
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
    return uVar4 & 0xffffff00;
  }
  F_0042b630(((undefined1 *)(gen_frame + 0x34)));
  if (REFG(char, 0x14b1250) == '\0') {
    bVar3 = F_00a698b0(&REFG(int, 0x14b11f8));
    if (bVar3 != 0) {
      piVar7 = *(int * PTR32 *)((int)this + 4);
      uVar11 = 0x21;
      uVar4 = F_00a6dfd0(&REFG(int, 0x14b11f8));
      uVar6 = ((code *)*(gen_code32 *)(*piVar7 + 0x18))(piVar7);
      uVar4 = F_00462440(uVar6,piVar7,uVar4,uVar11);
      F_0042ccf0(((undefined1 *)(gen_frame + 0x34)),uVar4);
      if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x19c))) != 1) {
        *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x19c))) = 1;
        *(undefined1 *)(param_1 + 0x1d) = 1;
      }
      uVar13 = 0;
      uVar12 = 1;
      uVar11 = 0;
      uVar4 = F_0042a990(((undefined1 *)(gen_frame + 0x34)));
      F_00431250(param_2,0x9e,uVar4,uVar11,uVar12,uVar13);
    }
    uVar10 = F_0042c880(((undefined1 *)(gen_frame + 0x34)));
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
    return CONCAT31((int3)(uVar10 >> 8),1);
  }
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x160))) != 1) {
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x160))) = 1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  iVar8 = 0;
  bVar3 = F_004351e0();
  if (bVar3 == 0) {
    pvVar5 = (undefined *)F_00b070f0();
    bVar3 = F_00b07930(pvVar5);
    if (bVar3 != 0) {
      iVar8 = 0x10000;
    }
  }
  else {
    iVar8 = 0x10001;
  }
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x1a0))) != iVar8) {
    *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x1a0))) = iVar8;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uVar4 = F_00a69790(&REFG(int, 0x14b11f8));
  uVar4 = F_0042a990(uVar4);
  if (uVar4 != *((uint *)GEN_TOP((*(int *)((int)param_2 + 0x20) + 0x26c)))) {
    *(undefined1 *)((int)param_2 + 0x1d) = 1;
  }
  *((uint *)GEN_TOP((*(int *)((int)param_2 + 0x20) + 0x26c))) = uVar4;
  uVar4 = F_00a697b0(&REFG(int, 0x14b11f8));
  uVar4 = F_0042a990(uVar4);
  if (uVar4 != *((uint *)GEN_TOP((*(int *)((int)param_2 + 0x20) + 0x270)))) {
    *(undefined1 *)((int)param_2 + 0x1d) = 1;
  }
  uVar14 = 0;
  *((uint *)GEN_TOP((*(int *)((int)param_2 + 0x20) + 0x270))) = uVar4;
  piVar7 = *(int * PTR32 *)((int)this + 4);
  uVar13 = 1;
  uVar12 = 0;
  uVar4 = F_00a697f0(&REFG(int, 0x14b11f8));
  uVar11 = 0x23;
  pvVar5 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar7 + 0x18))(piVar7)));
  uVar4 = F_00461bb0(pvVar5,uVar11,uVar4);
  F_00431250(param_2,0x9d,uVar4,uVar12,uVar13,uVar14);
  uVar4 = F_00a697a0(&REFG(int, 0x14b11f8));
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x164))) != uVar4) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x164))) = uVar4;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  bVar3 = F_00a698b0(&REFG(int, 0x14b11f8));
  if (bVar3 == 0) {
    if (*((int *)GEN_TOP((*(int *)((int)param_2 + 0x20) + 0x278))) != 0) {
      if (*((int *)GEN_TOP((*(int *)((int)param_2 + 0x24) + 0x278))) != 0) {
        F_00406ad0(*((undefined4 *)GEN_TOP((*(int *)((int)param_2 + 0x24) + 0x278))));
        *((undefined4 *)GEN_TOP((*(int *)((int)param_2 + 0x24) + 0x278))) = 0;
      }
      *((undefined4 *)GEN_TOP((*(int *)((int)param_2 + 0x20) + 0x278))) = 0;
      *(undefined1 *)((int)param_2 + 0x1d) = 1;
    }
  }
  else {
    piVar7 = *(int * PTR32 *)((int)this + 4);
    uVar11 = 0x21;
    uVar4 = F_00a6dfd0(&REFG(int, 0x14b11f8));
    uVar6 = ((code *)*(gen_code32 *)(*piVar7 + 0x18))(piVar7);
    uVar4 = F_00462440(uVar6,piVar7,uVar4,uVar11);
    F_0042ccf0(((undefined1 *)(gen_frame + 0x34)),uVar4);
    uVar13 = 0;
    uVar12 = 1;
    uVar11 = 0;
    uVar4 = F_0042a990(((undefined1 *)(gen_frame + 0x34)));
    F_00431250(param_2,0x9e,uVar4,uVar11,uVar12,uVar13);
  }
  piVar7 = (int *)F_00a698a0(&REFG(int, 0x14b11f8));
  (*(int *)(gen_frame + 0x18)) = (piVar7[1] - *piVar7) / 0x140;
  if (9 < (*(int *)(gen_frame + 0x18))) {
    (*(int *)(gen_frame + 0x18)) = 10;
  }
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(uint *)(gen_frame + 0x28)) = 0;
  (*(uint *)(gen_frame + 0x14)) = 0;
  (*(uint *)(gen_frame + 0x24)) = 1;
  if (0 < (*(int *)(gen_frame + 0x18))) {
    (*(int *)(gen_frame + 0x1c)) = 0x9f;
    (*(int *)(gen_frame + 0x8)) = 0;
    (*(int * PTR32 *)(gen_frame + 0x30)) = (int *)0x168;
    do {
      piVar2 = (*(int * PTR32 *)(gen_frame + 0x30));
      this_00 = (char *)(*piVar7 + (*(int *)(gen_frame + 0x8)));
      if (*this_00 == '\0') break;
      switch((unsigned int)(uintptr_t)(*(undefined4 *)(this_00 + 4))) {
      case 1: ;
        uVar11 = *(undefined4 *)(this_00 + 100);
        uVar12 = *(undefined4 *)(this_00 + 0x60);
        (*(int * PTR32 *)(gen_frame + 0x30)) = *(int * PTR32 *)((int)this + 4);
        uVar4 = F_0042a990(this_00 + 8);
        goto LAB_007d417f;
      case 2: ;
        piVar1 = *(int * PTR32 *)((int)this + 4);
        uVar11 = *(undefined4 *)(this_00 + 0x60);
        uVar4 = F_0042a990(this_00 + 8);
        uVar13 = 0;
        uVar12 = 0x47b;
        pvVar5 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1)));
        uVar4 = F_00462160(pvVar5,uVar12,uVar11,uVar13,uVar4);
        F_0042e430(((undefined1 *)(gen_frame + 0x34)),uVar4);
        goto LAB_007d42ed;
      case 3: ;
        F_0042ccf0(((undefined1 *)(gen_frame + 0x34)),this_00 + 8);
        if (*((int *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x30)) + *(int *)(param_1 + 0x20)))) == *(int *)(this_00 + 0x60)) break;
        *((int *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x30)) + *(int *)(param_1 + 0x20)))) = *(int *)(this_00 + 0x60);
        goto LAB_007d42fd;
      case 4: ;
        F_0042ccf0(((undefined1 *)(gen_frame + 0x34)),this_00 + 8);
        piVar1 = *(int * PTR32 *)((int)this + 4);
        uVar11 = 0x21;
        uVar4 = F_00476000();
        uVar4 = F_00907b30(this_00,uVar4,0);
        uVar6 = ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1);
        uVar4 = F_00462440(uVar6,piVar1,uVar4,uVar11);
        uVar13 = 0;
        uVar12 = 1;
        uVar11 = 0;
        uVar4 = F_0042a990(uVar4);
        F_00431250(param_2,(*(int *)(gen_frame + 0x1c)) + 10,uVar4,uVar11,uVar12,uVar13);
        (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) | (*(uint *)(gen_frame + 0x24)) << 10 | (*(uint *)(gen_frame + 0x24)) >> 0x16;
        if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + (int)(*(int * PTR32 *)(gen_frame + 0x30))))) != -1) {
          *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + (int)(*(int * PTR32 *)(gen_frame + 0x30))))) = 0xffffffff;
          goto LAB_007d42fd;
        }
        break;
      case 5: ;
        F_0042ccf0(((undefined1 *)(gen_frame + 0x34)),this_00 + 8);
        (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x14)) | (*(uint *)(gen_frame + 0x24));
        if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + (int)(*(int * PTR32 *)(gen_frame + 0x30))))) != *(int *)(this_00 + 0x60)) {
          *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + (int)(*(int * PTR32 *)(gen_frame + 0x30))))) = *(int *)(this_00 + 0x60);
          goto LAB_007d42fd;
        }
        break;
      case 6: ;
        uVar11 = *(undefined4 *)(this_00 + 100);
        uVar12 = *(undefined4 *)(this_00 + 0x60);
        (*(int * PTR32 *)(gen_frame + 0x30)) = *(int * PTR32 *)((int)this + 4);
        uVar4 = F_0042a990(this_00 + 8);
LAB_007d417f: ;
        uVar13 = 0x47a;
        pvVar5 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x30)) + 0x18))((*(int * PTR32 *)(gen_frame + 0x30)))));
        uVar4 = F_00462160(pvVar5,uVar13,uVar12,uVar11,uVar4);
        F_0042e430(((undefined1 *)(gen_frame + 0x34)),uVar4);
        if (*((int *)GEN_TOP(((int)piVar2 + *(int *)(param_1 + 0x20)))) != -1) {
          *((undefined4 *)GEN_TOP(((int)piVar2 + *(int *)(param_1 + 0x20)))) = 0xffffffff;
LAB_007d42fd: ;
          *(undefined1 *)(param_1 + 0x1d) = 1;
        }
        break;
      default: ;
        F_0042ccf0(((undefined1 *)(gen_frame + 0x34)),this_00 + 8);
LAB_007d42ed: ;
        if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + (int)(*(int * PTR32 *)(gen_frame + 0x30))))) == -1) break;
        *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + (int)(*(int * PTR32 *)(gen_frame + 0x30))))) = 0xffffffff;
        goto LAB_007d42fd;
      }
      uVar13 = 0;
      uVar12 = 1;
      uVar11 = 0;
      uVar4 = F_0042a990(((undefined1 *)(gen_frame + 0x34)));
      F_00431250(param_2,(*(int *)(gen_frame + 0x1c)),uVar4,uVar11,uVar12,uVar13);
      if (((*(int *)(this_00 + 4) == 1) || (*(int *)(this_00 + 4) == 6)) && (this_00[0x5d] != '\0'))
      {
        cVar9 = *(uint *)(this_00 + 100) <= *(uint *)(this_00 + 0x60);
      }
      else {
        cVar9 = this_00[0x5c];
      }
      if (cVar9 != '\0') {
        (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) | (*(uint *)(gen_frame + 0x24));
      }
      (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 1;
      (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 0x140;
      (*(int * PTR32 *)(gen_frame + 0x30)) = (int *)((int)piVar2 + 4);
      (*(uint *)(gen_frame + 0x24)) = (*(uint *)(gen_frame + 0x24)) << 1 | (uint)((int)(*(uint *)(gen_frame + 0x24)) < 0);
      iVar8 = (*(int *)(gen_frame + 0x1c)) + -0x9e;
      (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0x1c)) + 1;
    } while (iVar8 < (*(int *)(gen_frame + 0x18)));
  }
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 400))) != (*(int *)(gen_frame + 0x10))) {
    *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 400))) = (*(int *)(gen_frame + 0x10));
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x194))) != (*(uint *)(gen_frame + 0x28))) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x194))) = (*(uint *)(gen_frame + 0x28));
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x198))) != (*(uint *)(gen_frame + 0x14))) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x198))) = (*(uint *)(gen_frame + 0x14));
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x19c))) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x19c))) = 0;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  F_00a69760(&REFG(int, 0x14b11f8));
  uVar10 = F_0042c880(((undefined1 *)(gen_frame + 0x34)));
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return CONCAT31((int3)(uVar10 >> 8),1);
}

/* ref: FUN_007d44e0 */
uint F_007d44e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d44e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  int * piVar1;
  byte bVar2;
  uint uVar3;
  undefined * pvVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  char * this_00;
  char cVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  (*(uint *)(gen_frame + 0x98)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  (*(undefined * PTR32 *)(gen_frame + 0x30)) = this;
  (*(undefined * PTR32 *)(gen_frame + 0x40)) = param_2;
  if ((REFG(int, 0x14b119c) == 0) || (REFG(char, 0x14b11f5) == '\0')) {
    if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x110))) != 0) {
      *(undefined1 *)((int)this + 0xc) = 1;
    }
    uVar3 = *(uint *)(param_1 + 0x20);
    if (*(int *)(uVar3 + 0x110) != 0) {
      *(undefined4 *)(uVar3 + 0x110) = 0;
      *(undefined1 *)(param_1 + 0x1d) = 1;
    }
    F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
    return uVar3 & 0xffffff00;
  }
  F_0042b630(((undefined1 *)(gen_frame + 0x44)));
  if (REFG(char, 0x14b11f4) == '\0') {
    bVar2 = F_00a698b0(&REFG(int, 0x14b119c));
    if (bVar2 != 0) {
      piVar1 = *(int * PTR32 *)((int)this + 4);
      uVar10 = 0x21;
      uVar3 = F_00a6dfd0(&REFG(int, 0x14b119c));
      uVar5 = ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1);
      uVar3 = F_00462440(uVar5,param_2,uVar3,uVar10);
      F_0042ccf0(((undefined1 *)(gen_frame + 0x44)),uVar3);
      if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 4))) != 1) {
        *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + 4))) = 1;
        *(undefined1 *)(param_1 + 0x1d) = 1;
      }
      uVar12 = 0;
      uVar11 = 1;
      uVar10 = 0;
      uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x44)));
      F_00431250(param_2,0x76,uVar3,uVar10,uVar11,uVar12);
    }
    uVar9 = F_0042c880(((undefined1 *)(gen_frame + 0x44)));
    F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
    return CONCAT31((int3)(uVar9 >> 8),1);
  }
  uVar3 = F_00a697a0(&REFG(int, 0x14b119c));
  if (uVar3 < 2) {
    uVar3 = 1;
  }
  else {
    uVar3 = F_00a697a0(&REFG(int, 0x14b119c));
  }
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x110))) != uVar3) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x110))) = uVar3;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  bVar2 = F_00a69950(&REFG(int, 0x14b119c));
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x15c))) != (uint)bVar2) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x15c))) = (uint)bVar2;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  F_00a69840(&REFG(int, 0x14b119c),&(*(int *)(gen_frame + 0x8)),&(*(int *)(gen_frame + 0xc)),&(*(int *)(gen_frame + 0x10)));
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x114))) != (*(int *)(gen_frame + 0x8))) {
    *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x114))) = (*(int *)(gen_frame + 0x8));
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x118))) != (*(int *)(gen_frame + 0xc))) {
    *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x118))) = (*(int *)(gen_frame + 0xc));
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x11c))) != (*(int *)(gen_frame + 0x10))) {
    *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x11c))) = (*(int *)(gen_frame + 0x10));
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uVar3 = F_00a69790(&REFG(int, 0x14b119c));
  uVar3 = F_0042a990(uVar3);
  if (uVar3 != *((uint *)GEN_TOP((*(int *)((int)param_2 + 0x20) + 0x1cc)))) {
    *(undefined1 *)((int)param_2 + 0x1d) = 1;
  }
  *((uint *)GEN_TOP((*(int *)((int)param_2 + 0x20) + 0x1cc))) = uVar3;
  uVar3 = F_00a697b0(&REFG(int, 0x14b119c));
  uVar3 = F_0042a990(uVar3);
  if (uVar3 != *((uint *)GEN_TOP((*(int *)((int)param_2 + 0x20) + 0x1d0)))) {
    *(undefined1 *)((int)param_2 + 0x1d) = 1;
  }
  *((uint *)GEN_TOP((*(int *)((int)param_2 + 0x20) + 0x1d0))) = uVar3;
  uVar3 = F_00a697f0(&REFG(int, 0x14b119c));
  if ((int)uVar3 < 0) {
    uVar3 = F_0042a990(&REFG(undefined * PTR32, 0x12fd328));
    if (uVar3 != *((uint *)GEN_TOP((*(int *)((int)param_2 + 0x20) + 0x1d4)))) {
      *((uint *)GEN_TOP((*(int *)((int)param_2 + 0x20) + 0x1d4))) = uVar3;
      *(undefined1 *)((int)param_2 + 0x1d) = 1;
    }
  }
  else {
    piVar1 = *(int * PTR32 *)((int)this + 4);
    uVar13 = 0;
    uVar12 = 1;
    uVar11 = 0;
    uVar3 = F_00a697f0(&REFG(int, 0x14b119c));
    uVar10 = 0x24;
    pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1)));
    uVar3 = F_00461bb0(pvVar4,uVar10,uVar3);
    F_00431250(param_2,0x75,uVar3,uVar11,uVar12,uVar13);
    this = (*(undefined * PTR32 *)(gen_frame + 0x30));
  }
  bVar2 = F_00a698b0(&REFG(int, 0x14b119c));
  if (bVar2 == 0) {
    if (*((int *)GEN_TOP((*(int *)((int)param_2 + 0x20) + 0x1d8))) != 0) {
      if (*((int *)GEN_TOP((*(int *)((int)param_2 + 0x24) + 0x1d8))) != 0) {
        F_00406ad0(*((undefined4 *)GEN_TOP((*(int *)((int)param_2 + 0x24) + 0x1d8))));
        *((undefined4 *)GEN_TOP((*(int *)((int)param_2 + 0x24) + 0x1d8))) = 0;
      }
      *((undefined4 *)GEN_TOP((*(int *)((int)param_2 + 0x20) + 0x1d8))) = 0;
      *(undefined1 *)((int)param_2 + 0x1d) = 1;
    }
  }
  else {
    piVar1 = *(int * PTR32 *)((int)this + 4);
    uVar10 = 0x21;
    uVar3 = F_00a6dfd0(&REFG(int, 0x14b119c));
    uVar5 = ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1);
    uVar3 = F_00462440(uVar5,param_2,uVar3,uVar10);
    F_0042ccf0(((undefined1 *)(gen_frame + 0x44)),uVar3);
    uVar12 = 0;
    uVar11 = 1;
    uVar10 = 0;
    uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x44)));
    F_00431250(param_2,0x76,uVar3,uVar10,uVar11,uVar12);
  }
  uVar3 = F_00a697d0(&REFG(int, 0x14b119c));
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x120))) != uVar3) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x120))) = uVar3;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uVar3 = F_00a697e0(&REFG(int, 0x14b119c));
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x124))) != uVar3) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x124))) = uVar3;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uVar3 = F_00a697c0(&REFG(int, 0x14b119c));
  uVar3 = F_0042a990(uVar3);
  if (uVar3 != *((uint *)GEN_TOP((*(int *)((int)param_2 + 0x20) + 0x1dc)))) {
    *(undefined1 *)((int)param_2 + 0x1d) = 1;
  }
  *((uint *)GEN_TOP((*(int *)((int)param_2 + 0x20) + 0x1dc))) = uVar3;
  (*(int * PTR32 *)(gen_frame + 0x14)) = (int *)F_00a698a0(&REFG(int, 0x14b119c));
  (*(int *)(gen_frame + 0x24)) = ((*(int * PTR32 *)(gen_frame + 0x14))[1] - *(*(int * PTR32 *)(gen_frame + 0x14))) / 0x140;
  if (9 < (*(int *)(gen_frame + 0x24))) {
    (*(int *)(gen_frame + 0x24)) = 10;
  }
  (*(int *)(gen_frame + 0x1c)) = 0;
  (*(uint *)(gen_frame + 0x38)) = 0;
  (*(uint *)(gen_frame + 0x2c)) = 1;
  if (0 < (*(int *)(gen_frame + 0x24))) {
    (*(int *)(gen_frame + 0x28)) = 0x78;
    (*(int *)(gen_frame + 0x18)) = 0;
    (*(int *)(gen_frame + 0x3c)) = 0x128;
    do {
      this_00 = (char *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + (*(int *)(gen_frame + 0x18)));
      if (*this_00 == '\0') break;
      switch((unsigned int)(uintptr_t)(*(undefined4 *)(this_00 + 4))) {
      case 1: ;
        piVar1 = *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 4);
        (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)(this_00 + 100);
        (*(undefined4 *)(gen_frame + 0x34)) = *(undefined4 *)(this_00 + 0x60);
        uVar3 = F_0042a990(this_00 + 8);
        uVar12 = 0x47a;
        uVar10 = (*(undefined4 *)(gen_frame + 0x34));
        uVar11 = (*(undefined4 *)(gen_frame + 0x20));
        pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1)));
        uVar3 = F_00462160(pvVar4,uVar12,uVar10,uVar11,uVar3);
        F_0042e430(((undefined1 *)(gen_frame + 0x44)),uVar3);
        uVar3 = F_00907af0(this_00);
        param_2 = (*(undefined * PTR32 *)(gen_frame + 0x40));
        goto LAB_007d4877;
      case 2: ;
        piVar1 = *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 4);
        (*(undefined4 *)(gen_frame + 0x34)) = *(undefined4 *)(this_00 + 0x60);
        uVar3 = F_0042a990(this_00 + 8);
        uVar12 = 0;
        uVar11 = 0x47b;
        uVar10 = (*(undefined4 *)(gen_frame + 0x34));
        pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1)));
        uVar3 = F_00462160(pvVar4,uVar11,uVar10,uVar12,uVar3);
        F_0042e430(((undefined1 *)(gen_frame + 0x44)),uVar3);
        iVar6 = *(int *)(param_1 + 0x20);
        iVar7 = (*(int *)(gen_frame + 0x3c));
        param_2 = (*(undefined * PTR32 *)(gen_frame + 0x40));
        break;
      case 3: ;
        F_0042ccf0(((undefined1 *)(gen_frame + 0x44)),this_00 + 8);
        uVar3 = *(uint *)(this_00 + 0x60);
LAB_007d4877: ;
        if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + (*(int *)(gen_frame + 0x3c))))) != uVar3) {
          *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + (*(int *)(gen_frame + 0x3c))))) = uVar3;
          goto LAB_007d49b0;
        }
        goto LAB_007d49b4;
      case 4: ;
        F_0042ccf0(((undefined1 *)(gen_frame + 0x44)),this_00 + 8);
        piVar1 = *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 4);
        uVar10 = 0x21;
        uVar3 = F_00476000();
        uVar3 = F_00907b30(this_00,uVar3,0);
        uVar5 = ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1);
        uVar3 = F_00462440(uVar5,piVar1,uVar3,uVar10);
        uVar12 = 0;
        uVar11 = 1;
        uVar10 = 0;
        uVar3 = F_0042a990(uVar3);
        F_00431250((*(undefined * PTR32 *)(gen_frame + 0x40)),(*(int *)(gen_frame + 0x28)) + 10,uVar3,uVar10,uVar11,uVar12);
        iVar6 = *(int *)(param_1 + 0x20);
        (*(uint *)(gen_frame + 0x38)) = (*(uint *)(gen_frame + 0x38)) | (*(uint *)(gen_frame + 0x2c)) << 10 | (*(uint *)(gen_frame + 0x2c)) >> 0x16;
        iVar7 = (*(int *)(gen_frame + 0x3c));
        param_2 = (*(undefined * PTR32 *)(gen_frame + 0x40));
        break;
      default: ;
        F_0042ccf0(((undefined1 *)(gen_frame + 0x44)),this_00 + 8);
        goto LAB_007d499d;
      case 6: ;
        piVar1 = *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 4);
        (*(undefined4 *)(gen_frame + 0x34)) = *(undefined4 *)(this_00 + 100);
        (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)(this_00 + 0x60);
        uVar3 = F_0042a990(this_00 + 8);
        uVar12 = 0x47a;
        uVar10 = (*(undefined4 *)(gen_frame + 0x20));
        uVar11 = (*(undefined4 *)(gen_frame + 0x34));
        pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1)));
        uVar3 = F_00462160(pvVar4,uVar12,uVar10,uVar11,uVar3);
        F_0042e430(((undefined1 *)(gen_frame + 0x44)),uVar3);
        param_2 = (*(undefined * PTR32 *)(gen_frame + 0x40));
LAB_007d499d: ;
        iVar6 = (*(int *)(gen_frame + 0x3c));
        iVar7 = *(int *)(param_1 + 0x20);
      }
      if (*(int *)(iVar6 + iVar7) != -1) {
        *(undefined4 *)(iVar6 + iVar7) = 0xffffffff;
LAB_007d49b0: ;
        *(undefined1 *)(param_1 + 0x1d) = 1;
      }
LAB_007d49b4: ;
      uVar12 = 0;
      uVar11 = 1;
      uVar10 = 0;
      uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x44)));
      F_00431250(param_2,(*(int *)(gen_frame + 0x28)),uVar3,uVar10,uVar11,uVar12);
      iVar6 = (*(int *)(gen_frame + 0x28));
      if (((*(int *)(this_00 + 4) == 1) || (*(int *)(this_00 + 4) == 6)) && (this_00[0x5d] != '\0'))
      {
        cVar8 = *(uint *)(this_00 + 100) <= *(uint *)(this_00 + 0x60);
      }
      else {
        cVar8 = this_00[0x5c];
      }
      if (cVar8 != '\0') {
        (*(uint *)(gen_frame + 0x38)) = (*(uint *)(gen_frame + 0x38)) | (*(uint *)(gen_frame + 0x2c));
      }
      (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0x1c)) + 1;
      (*(int *)(gen_frame + 0x3c)) = (*(int *)(gen_frame + 0x3c)) + 4;
      (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) + 0x140;
      (*(int *)(gen_frame + 0x28)) = (*(int *)(gen_frame + 0x28)) + 1;
      (*(uint *)(gen_frame + 0x2c)) = (*(uint *)(gen_frame + 0x2c)) << 1 | (uint)((int)(*(uint *)(gen_frame + 0x2c)) < 0);
    } while (iVar6 + -0x77 < (*(int *)(gen_frame + 0x24)));
  }
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x150))) != (*(int *)(gen_frame + 0x1c))) {
    *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x150))) = (*(int *)(gen_frame + 0x1c));
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x154))) != (*(uint *)(gen_frame + 0x38))) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x154))) = (*(uint *)(gen_frame + 0x38));
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x158))) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x158))) = 0;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 4))) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + 4))) = 0;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  F_00a69760(&REFG(int, 0x14b119c));
  uVar9 = F_0042c880(((undefined1 *)(gen_frame + 0x44)));
  F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
  return CONCAT31((int3)(uVar9 >> 8),1);
}

/* ref: FUN_007d4b70 */
byte F_007d4b70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d4b70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  uint * puVar1;
  int iVar2;
  int iVar3;
  ushort * puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int in_ecx;
  int * piVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int local_30;
  int local_2c;
  uint local_24;
  int local_20;
  uint local_1c;
  int local_18;
  int local_14;
  uint local_c;
  uint local_8;
  
  iVar3 = param_1;
  puVar4 = (ushort *)F_00a69df0(&REFG(undefined, 0x14b0d04));
  if (((char)puVar4[0x8e] == '\0') &&
     ((*(char *)((int)this + 0xc) == '\0' || (REFG(char, 0x14b0ed8) != '\0')))) {
    return 0;
  }
  uVar7 = (uint)puVar4[1] + (uint)*puVar4;
  if (5 < uVar7) {
    uVar7 = 5;
  }
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 4))) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + 4))) = 0;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x19c))) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x19c))) = 0;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 8))) != uVar7) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 8))) = uVar7;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  local_14 = 0x1c;
  local_18 = 0x2b;
  local_30 = 0x8c;
  local_20 = 0;
  if (uVar7 != 0) {
    iVar8 = uVar7 * 0x2624;
    local_2c = 0x5c;
    param_1 = uVar7;
    local_24 = uVar7;
    do {
      local_24 = local_24 - 1;
      iVar8 = iVar8 + -0x2624;
      uVar13 = 0;
      in_ecx = *(int *)(puVar4 + 0x90) + iVar8;
      uVar12 = 1;
      uVar11 = 0;
      uVar5 = F_0042a990(in_ecx);
      F_00431250(param_2,local_20,uVar5,uVar11,uVar12,uVar13);
      local_8 = *(uint *)(in_ecx + 0x25e8);
      if (10 < local_8) {
        local_8 = 10;
      }
      if (*((uint *)GEN_TOP((local_2c + -0x50 + *(int *)(iVar3 + 0x20)))) != local_8) {
        *((uint *)GEN_TOP((local_2c + -0x50 + *(int *)(iVar3 + 0x20)))) = local_8;
        *(undefined1 *)(iVar3 + 0x1d) = 1;
      }
      iVar6 = *(int *)(in_ecx + 0xac);
      if (*(short *)(in_ecx + 0xa8) == 0xff) {
        iVar6 = iVar6 + 2;
      }
      local_c = iVar6 << 0x18;
      local_1c = (uint)*(ushort *)(in_ecx + 0x25e0);
      if (*((uint *)GEN_TOP((*(int *)(iVar3 + 0x20) + local_2c))) != local_1c) {
        *((uint *)GEN_TOP((*(int *)(iVar3 + 0x20) + local_2c))) = local_1c;
        *(undefined1 *)(iVar3 + 0x1d) = 1;
      }
      if (local_1c != 0) {
        piVar10 = (int *)(in_ecx + 0x25d4);
        do {
          uVar9 = 0;
          uVar5 = F_00ab2510(*piVar10);
          if (uVar5 != 0) {
            uVar9 = (uint)*(ushort *)(uVar5 + 0x1c);
          }
          if (*((int *)GEN_TOP((*(int *)(iVar3 + 0x20) + local_14 * 4))) != *piVar10) {
            *((int *)GEN_TOP((*(int *)(iVar3 + 0x20) + local_14 * 4))) = *piVar10;
            *(undefined1 *)(iVar3 + 0x1d) = 1;
          }
          local_14 = local_14 + 1;
          if (*((uint *)GEN_TOP((*(int *)(iVar3 + 0x20) + local_18 * 4))) != uVar9) {
            *((uint *)GEN_TOP((*(int *)(iVar3 + 0x20) + local_18 * 4))) = uVar9;
            *(undefined1 *)(iVar3 + 0x1d) = 1;
          }
          local_18 = local_18 + 1;
          uVar13 = 0;
          uVar12 = 1;
          uVar11 = 0;
          uVar5 = F_00ab64e0(*piVar10,0,uVar5);
          F_00431250(param_2,local_30,uVar5,uVar11,uVar12,uVar13);
          local_30 = local_30 + 1;
          piVar10 = piVar10 + 1;
          local_1c = local_1c - 1;
        } while (local_1c != 0);
      }
      iVar6 = 0;
      local_1c = 1;
      if (0 < (int)local_8) {
        do {
          uVar13 = 0;
          iVar2 = (*((int *)GEN_TOP((local_24 * 0x2624 + 0x25e4 + *(int *)(puVar4 + 0x90)))) + iVar6) * 0x18c +
                  0xb0 + in_ecx;
          uVar12 = 1;
          uVar11 = 0;
          uVar5 = F_0042a990(iVar2 + 8);
          F_00431250(param_2,param_1,uVar5,uVar11,uVar12,uVar13);
          uVar13 = 0;
          uVar12 = 1;
          uVar11 = 0;
          uVar5 = F_0042a990(iVar2 + 0x60);
          F_00431250(param_2,param_1 + 0x32,uVar5,uVar11,uVar12,uVar13);
          param_1 = param_1 + 1;
          if (*(char *)(iVar2 + 4) != '\0') {
            local_c = local_c | local_1c;
          }
          iVar6 = iVar6 + 1;
          local_1c = local_1c << 1 | (uint)((int)local_1c < 0);
        } while (iVar6 < (int)local_8);
      }
      if (*((int *)GEN_TOP((local_2c + 0x8c + *(int *)(iVar3 + 0x20)))) != -1) {
        *((undefined4 *)GEN_TOP((local_2c + 0x8c + *(int *)(iVar3 + 0x20)))) = 0xffffffff;
        *(undefined1 *)(iVar3 + 0x1d) = 1;
      }
      puVar1 = ((uint *)GEN_TOP((local_2c + -0x28 + *(int *)(iVar3 + 0x20))));
      if (*puVar1 != local_c) {
        *puVar1 = local_c;
        *(undefined1 *)(iVar3 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((local_2c + -0x14 + *(int *)(iVar3 + 0x20)))) != 0) {
        *((undefined4 *)GEN_TOP((local_2c + -0x14 + *(int *)(iVar3 + 0x20)))) = 0;
        *(undefined1 *)(iVar3 + 0x1d) = 1;
      }
      local_20 = local_20 + 1;
      local_2c = local_2c + 4;
    } while (local_20 < (int)uVar7);
  }
  if (uVar7 < 5) {
    iVar8 = uVar7 * 4 + 0xe8;
    do {
      if (*((int *)GEN_TOP((*(int *)(iVar3 + 0x20) + iVar8))) != -1) {
        *((undefined4 *)GEN_TOP((*(int *)(iVar3 + 0x20) + iVar8))) = 0xffffffff;
        *(undefined1 *)(iVar3 + 0x1d) = 1;
      }
      iVar8 = iVar8 + 4;
    } while (iVar8 < 0xfc);
  }
  F_00a69e00(&REFG(undefined, 0x14b0d04),0);
  *(undefined1 *)((int)this + 0xc) = 0;
  return 1;
}

/* ref: FUN_007d4ec0 */
uint F_007d4ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d4ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  uint uVar5;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2,0x1b);
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2,0x18);
  uVar5 = (uint)(*(char *)((int)this + 0xd) == '\x01');
  if (*((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x1a8))) != uVar5) {
    *((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x1a8))) = uVar5;
    *(undefined1 *)(uVar3 + 0x1d) = 1;
  }
  if (*(char *)((int)this + 0xd) == '\0') {
    F_007d3ee0(this,uVar3,uVar4);
    F_007d44e0(this,uVar3,uVar4);
    F_007d3d70(this,uVar3,uVar4);
    bVar1 = F_007d4b70(this,uVar3,uVar4);
    return CONCAT31(extraout_var,bVar1);
  }
  uVar5 = F_007d3ee0(this,uVar3,uVar4);
  if ((char)uVar5 != '\x01') {
    uVar5 = F_007d44e0(this,uVar3,uVar4);
    if ((char)uVar5 != '\x01') {
      bVar1 = F_007d3d70(this,uVar3,uVar4);
      uVar5 = CONCAT31(extraout_var_00,bVar1);
      if (bVar1 != 1) {
        bVar1 = F_007d4b70(this,uVar3,uVar4);
        uVar5 = CONCAT31(extraout_var_01,bVar1);
      }
    }
  }
  return uVar5;
}

/* ref: FUN_007d4f80 */
byte F_007d4f80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d4f80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  
  iVar1 = param_1;
  if ((*(byte *)(param_1 + 0x33d9) & 1) == 0) {
    uVar2 = (uint)(*(char *)(param_1 + 0x32a0) != '\0');
    if (*(char *)(param_1 + 0x330c) != '\0') {
      uVar2 = uVar2 + 1;
    }
    if (*(char *)(param_1 + 0x3378) != '\0') {
      uVar2 = uVar2 + 1;
    }
    *(int *)((int)this + 0x1af0) = *(int *)((int)this + 0x1af0) + uVar2;
    cVar4 = *(char *)(param_1 + 0x32a0) != '\0';
    if (*(char *)(param_1 + 0x330c) != '\0') {
      cVar4 = cVar4 + '\x01';
    }
    if (*(char *)(param_1 + 0x3378) != '\0') {
      cVar4 = cVar4 + '\x01';
    }
    return cVar4 != '\0';
  }
  iVar3 = param_1 + 0x328c;
  param_1 = 3;
  do {
    if (*(char *)(iVar3 + 0x14) != '\0') {
      F_00915a30(param_2,*(undefined4 *)((int)this + 0x1af0),iVar3);
      *(int *)((int)this + 0x1af0) = *(int *)((int)this + 0x1af0) + 1;
    }
    iVar3 = iVar3 + 0x6c;
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  *(byte *)(iVar1 + 0x33d9) = *(byte *)(iVar1 + 0x33d9) & 0xfe;
  return 1;
}

/* ref: FUN_007d5030 */
unsigned int F_007d5030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d5030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  char * pcVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  int * piVar5;
  uint uVar6;
  undefined * this_00;
  uint uVar7;
  uint uVar8;
  uint3 extraout_var = 0;
  uint3 extraout_var_00 = 0;
  int iVar9;
  uint3 uVar11;
  char * pcVar10;
  ulonglong uVar12;
  undefined4 uVar13;
  
  if ((*(char *)((int)this + 0x60) != '\0') &&
     (uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4)),
     *(char *)(uVar4 + 0x29254) == '\0')) {
    piVar5 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar4 = ((code *)*(gen_code32 *)(*piVar5 + 0x24))(piVar5,9);
    piVar5 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar6 = ((code *)*(gen_code32 *)(*piVar5 + 0x28))(piVar5,8);
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar13 = 1;
    uVar7 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
    uVar7 = F_00435440(uVar7,uVar13);
    if (uVar7 != 0) {
      uVar8 = F_00920ca0((undefined *)(uVar7 + 0x14));
      if ((int)uVar8 < 1) {
        if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x13c))) != 0) {
          *((undefined4 *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x13c))) = 0;
          *(undefined1 *)(uVar4 + 0x1d) = 1;
          uVar7 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
          if (*(undefined * PTR32 *)(uVar7 + 200) != (undefined *)0x0) {
            F_009218a0(*(undefined * PTR32 *)(uVar7 + 200));
          }
        }
      }
      else {
        uVar8 = F_00920ca0((undefined *)(uVar7 + 0x14));
        if (*((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x13c))) != uVar8) {
          *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x13c))) = uVar8;
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        uVar7 = F_0042a990(uVar7 + 0x24);
        if (uVar7 != *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x110)))) {
          *(undefined1 *)(uVar6 + 0x1d) = 1;
        }
        *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x110))) = uVar7;
        uVar7 = F_0043bd00(this_00,0xaa,0,0);
        if (uVar7 != *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x10c)))) {
          *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x10c))) = uVar7;
          *(undefined1 *)(uVar6 + 0x1d) = 1;
        }
      }
    }
    uVar13 = 5;
    uVar7 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
    uVar7 = F_00435440(uVar7,uVar13);
    if (uVar7 != 0) {
      iVar9 = *(int *)(uVar7 + 0x24);
      if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x140))) != iVar9) {
        *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x140))) = iVar9;
        *(undefined1 *)(uVar4 + 0x1d) = 1;
      }
      if (iVar9 != 0) {
        uVar7 = F_0042a990(uVar7 + 0x30);
        if (uVar7 != *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x118)))) {
          *(undefined1 *)(uVar6 + 0x1d) = 1;
        }
        *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x118))) = uVar7;
        uVar7 = F_0043bd00(this_00,0xab,0,0);
        if (uVar7 != *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x114)))) {
          *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x114))) = uVar7;
          *(undefined1 *)(uVar6 + 0x1d) = 1;
        }
      }
    }
    uVar13 = 2;
    uVar7 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
    uVar7 = F_00435440(uVar7,uVar13);
    if (uVar7 != 0) {
      iVar9 = *(int *)(uVar7 + 0x10);
      if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x144))) != iVar9) {
        *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x144))) = iVar9;
        *(undefined1 *)(uVar4 + 0x1d) = 1;
      }
      if (iVar9 != 0) {
        uVar8 = F_0042a990(uVar7 + 0x1c);
        if (uVar8 != *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x120)))) {
          *(undefined1 *)(uVar6 + 0x1d) = 1;
        }
        *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x120))) = uVar8;
        uVar8 = F_0043bd00(this_00,0xac,0,0);
        if (uVar8 != *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x11c)))) {
          *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x11c))) = uVar8;
          *(undefined1 *)(uVar6 + 0x1d) = 1;
        }
      }
      bVar3 = F_004393f0(uVar7);
      uVar11 = extraout_var;
      if ((bVar3 == 0) || (bVar3 = F_004351d0(), uVar11 = extraout_var_00, bVar3 != 0)) {
        iVar9 = (uint)uVar11 << 8;
      }
      else {
        iVar9 = CONCAT31(extraout_var_00,1);
      }
      F_007d3410(this,0x1c,iVar9);
    }
    if (0 < *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x14c)))) {
      uVar12 = F_00427d90();
      uVar7 = (uint)uVar12 - *(uint *)((int)this + 0x1b10);
      uVar8 = 0;
      if (((int)(uVar12 >> 0x20) - *(int *)((int)this + 0x1b14) ==
           (uint)((uint)uVar12 < *(uint *)((int)this + 0x1b10))) &&
         (uVar7 < *(uint *)((int)this + 0x1b00))) {
        uVar8 = ((*(uint *)((int)this + 0x1b00) - uVar7) + 999) / 1000;
      }
      if (*((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x14c))) != uVar8) {
        *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x14c))) = uVar8;
        *(undefined1 *)(uVar4 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x14c))) == 0) {
        uVar7 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
        if (*(undefined * PTR32 *)(uVar7 + 0x10c) != (undefined *)0x0) {
          F_0077e2e0(*(undefined * PTR32 *)(uVar7 + 0x10c));
        }
      }
    }
    uVar13 = 0xc;
    uVar7 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
    uVar7 = F_00435440(uVar7,uVar13);
    if (uVar7 != 0) {
      uVar8 = F_00920ca0((undefined *)(uVar7 + 0x14));
      if ((int)uVar8 < 1) {
        if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x148))) != 0) {
          *((undefined4 *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x148))) = 0;
          *(undefined1 *)(uVar4 + 0x1d) = 1;
          uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
          if (*(undefined * PTR32 *)(uVar4 + 0x118) != (undefined *)0x0) {
            F_009218d0(*(undefined * PTR32 *)(uVar4 + 0x118));
          }
        }
      }
      else {
        uVar8 = F_00920ca0((undefined *)(uVar7 + 0x14));
        if (*((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x148))) != uVar8) {
          *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x148))) = uVar8;
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        uVar4 = F_0042a990(uVar7 + 0x24);
        if (uVar4 != *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x128)))) {
          *(undefined1 *)(uVar6 + 0x1d) = 1;
        }
        *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x128))) = uVar4;
        uVar4 = F_0043bd00(this_00,0xb6a,0,0);
        if (uVar4 != *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x124)))) {
          *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x124))) = uVar4;
          *(undefined1 *)(uVar6 + 0x1d) = 1;
        }
      }
    }
    pcVar1 = (char *)((int)this + 0x1b20);
    pcVar10 = pcVar1;
    do {
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    if (pcVar10 != (char *)((int)this + 0x1b21)) {
      F_00771260(this,pcVar1,*(undefined4 *)((int)this + 0x1b38));
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      *(undefined4 *)((int)this + 0x1b24) = 0;
      *(undefined4 *)((int)this + 0x1b28) = 0;
      *(undefined4 *)((int)this + 0x1b2c) = 0;
      *(undefined4 *)((int)this + 0x1b30) = 0;
      *(undefined2 *)((int)this + 0x1b34) = 0;
      *(undefined4 *)((int)this + 0x1b38) = 0;
    }
  }
  return 0;
}

/* ref: FUN_007d5410 */
uint F_007d5410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d5410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  undefined * this_00;
  undefined * this_01;
  uint uVar4;
  uint in_ecx;
  uint uVar5;
  uint in_ecx_00;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  __time64_t _Var10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint local_1c;
  uint local_18;
  
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2,9);
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2,8)));
  this_01 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar11 = *(undefined4 *)(REFG(int, 0x137104c) + 0x10);
  uVar4 = F_00414500(uVar11,0xb5);
  uVar4 = *(uint *)(uVar4 + 0x14);
  if (*((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x130))) != uVar4) {
    *((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x130))) = uVar4;
    *(undefined1 *)(uVar3 + 0x1d) = 1;
  }
  if (*((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x134))) != (uint)(REFG(char, 0x14c0a66) != '\0')) {
    *((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x134))) = (uint)(REFG(char, 0x14c0a66) != '\0');
    *(undefined1 *)(uVar3 + 0x1d) = 1;
  }
  in_ecx = F_00424810(REFG(int, 0x137104c));
  if ((param_1 & 0x1f) == 0) {
    if (in_ecx == 0) {
      local_1c = 0;
      local_18 = 0;
    }
    else {
      local_1c = F_00975090(in_ecx);
      local_18 = F_009750b0(in_ecx);
    }
    uVar13 = 6;
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
    in_ecx_00 = F_00435440(uVar5,uVar13);
    uVar5 = *((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x124)));
    if (in_ecx_00 == 0) {
      iVar9 = 0;
    }
    else {
      uVar6 = F_00438ce0(in_ecx_00);
      uVar7 = F_00438c80(in_ecx_00);
      uVar8 = F_00438c90(in_ecx_00);
      iVar9 = (uVar5 & 0xff000000) + (uVar8 & 0xff) + (uVar7 + uVar6 * 0x100) * 0x100;
    }
    if (*((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x124))) != iVar9) {
      *((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x124))) = iVar9;
      *(undefined1 *)(uVar3 + 0x1d) = 1;
    }
    if (*(char *)(in_ecx_00 + 0x51b8) != '\0') {
      uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4));
      bVar1 = F_0075ee20(uVar5);
      if (bVar1 == 0) {
        uVar5 = *((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x124)));
        uVar6 = uVar5 | 0x1000000;
        if (uVar5 != uVar6) {
          *((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x124))) = uVar6;
          *(undefined1 *)(uVar3 + 0x1d) = 1;
        }
        *(undefined1 *)(in_ecx_00 + 0x51b8) = 0;
      }
    }
    if (in_ecx == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = F_009750d0(in_ecx);
    }
    if (*((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x128))) != uVar5) {
      *((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x128))) = uVar5;
      *(undefined1 *)(uVar3 + 0x1d) = 1;
    }
    if ((*(uint *)((int)this + 0xcec) != local_1c) || (*(uint *)((int)this + 0xcf0) != local_18)) {
      uVar14 = 0;
      uVar12 = 1;
      uVar13 = 0;
      *(uint *)((int)this + 0xcec) = local_1c;
      *(uint *)((int)this + 0xcf0) = local_18;
      uVar5 = F_00461c60(this_01,0x466,local_1c,local_18);
      F_00431250(this_00,0x5b,uVar5,uVar13,uVar12,uVar14);
    }
    if (*((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x138))) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x138))) = 0;
      *(undefined1 *)(uVar3 + 0x1d) = 1;
    }
  }
  uVar3 = 0x1f;
  if (uVar4 == 1) {
    uVar3 = 7;
  }
  if ((uVar4 != *(byte *)((int)this + 0x1b44)) || ((param_1 & uVar3) == 0)) {
    *(char *)((int)this + 0x1b44) = (char)uVar4;
    if (uVar4 == 1) {
      uVar4 = F_00461bb0(this_01,0x22,1);
      F_0042e430((undefined *)((int)this + 0xaa0),uVar4);
      uVar4 = F_0042a990((int)this + 0xc44);
      if (uVar4 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x164)))) {
        *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x164))) = uVar4;
        *(undefined1 *)((int)this_00 + 0x1d) = 1;
      }
      uVar4 = F_0042a990((int)this + 0xc98);
      if (uVar4 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x168)))) {
        *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x168))) = uVar4;
        *(undefined1 *)((int)this_00 + 0x1d) = 1;
      }
    }
    else if (uVar4 == 2) {
      if (in_ecx == 0) {
        _Var10 = F_00c4b7c2((__time64_t *)0x0);
        uVar4 = (uint)_Var10;
      }
      else {
        uVar4 = F_00476000();
      }
      if (uVar4 != *(uint *)((int)this + 0xcf4)) {
        uVar3 = F_00414500(uVar11,0xb6);
        uVar3 = F_00461bb0(this_01,*(int *)(uVar3 + 0x14) + 0x1c,uVar4);
        F_0042e430((undefined *)((int)this + 0xaa0),uVar3);
        *(uint *)((int)this + 0xcf4) = uVar4;
      }
      uVar4 = F_0042a990((int)this + 0xb9c);
      if (uVar4 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x164)))) {
        *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x164))) = uVar4;
        *(undefined1 *)((int)this_00 + 0x1d) = 1;
      }
      uVar4 = F_0042a990((int)this + 0xbf0);
      if (uVar4 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x168)))) {
        *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x168))) = uVar4;
        *(undefined1 *)((int)this_00 + 0x1d) = 1;
      }
    }
    else if (uVar4 == 3) {
      if (in_ecx == 0) {
        *(undefined4 *)((int)this + 0xcf4) = 0xffffffff;
        F_0042e430((undefined *)((int)this + 0xaa0),"--:--");
      }
      else {
        uVar4 = F_00476000();
        uVar3 = F_00a1ae70();
        iVar9 = uVar4 + uVar3;
        if (iVar9 != *(int *)((int)this + 0xcf4)) {
          uVar4 = F_00414500(uVar11,0xb6);
          uVar4 = F_00461bb0(this_01,*(int *)(uVar4 + 0x14) + 0x1c,iVar9);
          F_0042e430((undefined *)((int)this + 0xaa0),uVar4);
          *(int *)((int)this + 0xcf4) = iVar9;
        }
      }
      uVar4 = F_0042a990((int)this + 0xaf4);
      if (uVar4 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x164)))) {
        *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x164))) = uVar4;
        *(undefined1 *)((int)this_00 + 0x1d) = 1;
      }
      uVar4 = F_0042a990((int)this + 0xb48);
      if (uVar4 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x168)))) {
        *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x168))) = uVar4;
        *(undefined1 *)((int)this_00 + 0x1d) = 1;
      }
    }
    else {
      F_0042e430((undefined *)((int)this + 0xaa0),"--:--");
    }
    uVar12 = 0;
    uVar13 = 1;
    uVar11 = 0;
    uVar4 = F_0042a990((int)this + 0xaa0);
    in_ecx = F_00431250(this_00,0x42,uVar4,uVar11,uVar13,uVar12);
  }
  return in_ecx;
}

/* ref: FUN_007d5920 */
unsigned int F_007d5920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d5920u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  if (2 < param_2) {
    if (((((byte)*param_1 & 0xf) == 4) && (((byte)param_1[2] & 0xf) == 4)) &&
       (((byte)param_1[4] & 0xf) == 4)) {
      uVar1 = F_00475fa0(param_1[3],param_1[1]);
      F_00543ca0(&REFG(undefined4, 0x1375bc0),uVar1,0,0);
    }
  }
  return 0;
}

/* ref: FUN_007d5980 */
uint F_007d5980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7d5980u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  int iVar2;
  
  if ((*param_1 & 0xf) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 4);
  }
  if ((param_1[8] & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0xc);
  }
  if (((int)uVar1 < *(int *)((int)this + 0x1a68)) &&
     (uVar1 = *((uint *)GEN_TOP((*(int *)((int)this + uVar1 * 0xc + 0x18ec) + 0x40))), uVar1 != 0xe0000000)) {
    uVar1 = F_00a354d0(&REFG(undefined4, 0x14a31f0),uVar1,0);
    if (uVar1 != 0) {
      if (iVar2 == 0) {
        uVar1 = F_005476b0(&REFG(undefined4, 0x1375bc0),uVar1,0);
      }
      else if (iVar2 == 1) {
        uVar1 = F_00547560(&REFG(undefined4, 0x1375bc0),uVar1,0);
        return uVar1;
      }
    }
  }
  return uVar1;
}

/* ref: FUN_007d5a00 */
uint F_007d5a00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d5a00u, gen_a0, gen_a1, gen_a2, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 extraout_EDX = 0;
  int iVar2;
  
  if ((*param_1 & 0xf) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 4);
  }
  if (REFG(undefined4, 0x1375c40) != (undefined4 *)0x0) {
    param_1 = ((byte *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP(*REFG(int * PTR32, 0x1375c40))))(REFG(undefined4, 0x1375c40))));
    if (param_1 != (byte *)0xe0000000) {
      param_1 = (byte *)F_00a354d0(&REFG(undefined4, 0x14a31f0),param_1,extraout_EDX);
      if (param_1 != (byte *)0x0) {
        if (iVar2 == 0) {
          param_1 = (byte *)F_005476b0(&REFG(undefined4, 0x1375bc0),param_1,0);
        }
        else if (iVar2 == 1) {
          uVar1 = F_00547560(&REFG(undefined4, 0x1375bc0),param_1,0);
          return uVar1;
        }
      }
    }
  }
  return (uint)param_1;
}

/* ref: FUN_007d5a70 */
uint F_007d5a70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7d5a70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  uint uVar2;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  piVar1 = *(int * PTR32 *)(uVar2 + 0x88);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  }
  return uVar2;
}

/* ref: FUN_007d5a90 */
uint F_007d5a90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7d5a90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  uint uVar2;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  piVar1 = *(int * PTR32 *)(uVar2 + 0x54);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  }
  return uVar2;
}

/* ref: FUN_007d5ab0 */
uint F_007d5ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d5ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ushort uVar1;
  uint uVar2;
  int * piVar3;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  piVar3 = *(int * PTR32 *)(uVar2 + 0x24);
  uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3);
  if (((char)uVar2 != '\0') && (uVar2 = piVar3[0x82], uVar2 == *(uint *)((int)this + 0x18))) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
  }
  if (*(int *)((int)this + 0x18) != 0) {
    if (param_1 < 0) {
      uVar1 = 9;
    }
    else {
      uVar1 = (ushort)param_1 & (9 < param_1) - 1;
    }
    *(ushort *)((int)this + 0x1c) = uVar1;
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),4);
    (*(uint *)(gen_frame + 0x8)) = (uint)uVar1;
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3,*(undefined4 *)((int)this + 0x18),1,&(*(undefined4 *)(gen_frame + 0x4)));
    uVar2 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  }
  return uVar2;
}

/* ref: FUN_007d5b50 */
uint F_007d5b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d5b50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint in_EAX = 0;
  uint uVar1;
  int * piVar2;
  
  if (*(int *)((int)this + 0x20) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
    piVar2 = *(int * PTR32 *)(uVar1 + 0x24);
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2);
    if (((char)uVar1 != '\0') && (piVar2[0x82] == *(int *)((int)this + 0x20))) {
      ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    }
    if (param_1 < 10) {
      param_1 = 0x11;
    }
    else if (0x11 < param_1) {
      param_1 = 10;
    }
    *(int *)((int)this + 0x24) = param_1;
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2,6);
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    in_EAX = ((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2,5);
    if ((uVar1 != 0) && (in_EAX != 0)) {
      in_EAX = *(uint *)(uVar1 + 0x20);
      if (*(int *)(in_EAX + 0x2d14) != *(int *)((int)this + 0x24)) {
        *(int *)(in_EAX + 0x2d14) = *(int *)((int)this + 0x24);
        *(undefined1 *)(uVar1 + 0x1d) = 1;
      }
    }
  }
  return in_EAX;
}

/* ref: FUN_007d5c00 */
uint F_007d5c00(unsigned int gen_a0)
{
  GEN_ENTER(0x7d5c00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined4 in_ecx;
  char cVar1;
  byte bVar2;
  undefined * this_00;
  uint uVar3;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  int iVar4;
  int iVar5;
  
  ((uint *)(gen_frame + 0x8))[0x10] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x30))))(*(int * PTR32 *)((int)this + 4))));
  cVar1 = REFG(char, 0x14ab058);
  in_ecx = *(undefined4 *)(REFG(int, 0x137104c) + 0x10);
  uVar3 = F_00414500(in_ecx,(-(uint)(REFG(char, 0x14ab058) != '\0') & 9) + 0xdd);
  if (*(int *)(uVar3 + 0x14) == 0) {
    iVar4 = 1;
    while( true ) {
      iVar5 = *(int *)((int)this + 0x24) + iVar4;
      if (0x11 < iVar5) {
        iVar5 = iVar5 + -8;
      }
      bVar2 = F_0043aef0(this_00,iVar5);
      if (bVar2 == 0) break;
      iVar4 = iVar4 + 1;
      if (7 < iVar4) {
        F_00c47745(((uint *)(gen_frame + 0x8))[0x10] ^ (uint)(uint)(gen_frame + 0x4c));
        return CONCAT31(extraout_var,bVar2);
      }
    }
LAB_007d5d53: ;
    uVar3 = F_007d5b50(this,iVar5);
    F_00c47745(((uint *)(gen_frame + 0x8))[0x10] ^ (uint)(uint)(gen_frame + 0x4c));
    return uVar3;
  }
  ((uint *)(gen_frame + 0x8))[0] = 0xde;
  ((uint *)(gen_frame + 0x8))[1] = 0xdf;
  ((uint *)(gen_frame + 0x8))[2] = 0xe0;
  ((uint *)(gen_frame + 0x8))[3] = 0xe1;
  ((uint *)(gen_frame + 0x8))[4] = 0xe2;
  ((uint *)(gen_frame + 0x8))[5] = 0xe3;
  ((uint *)(gen_frame + 0x8))[6] = 0xe4;
  ((uint *)(gen_frame + 0x8))[7] = 0xe5;
  ((uint *)(gen_frame + 0x8))[8] = 0xe7;
  ((uint *)(gen_frame + 0x8))[9] = 0xe8;
  ((uint *)(gen_frame + 0x8))[10] = 0xe9;
  ((uint *)(gen_frame + 0x8))[0xb] = 0xea;
  ((uint *)(gen_frame + 0x8))[0xc] = 0xeb;
  ((uint *)(gen_frame + 0x8))[0xd] = 0xec;
  ((uint *)(gen_frame + 0x8))[0xe] = 0xed;
  ((uint *)(gen_frame + 0x8))[0xf] = 0xee;
  iVar4 = 1;
  do {
    iVar5 = *(int *)((int)this + 0x24) + iVar4;
    if (0x11 < iVar5) {
      iVar5 = iVar5 + -8;
    }
    uVar3 = F_00414500(in_ecx,((uint *)(gen_frame + 0x8))[iVar5 + -10 + (uint)(cVar1 != '\0') * 8]);
    if (*(int *)(uVar3 + 0x14) != 0) {
      bVar2 = F_0043aef0(this_00,iVar5);
      uVar3 = CONCAT31(extraout_var_00,bVar2);
      if (bVar2 == 0) goto LAB_007d5d53;
    }
    iVar4 = iVar4 + 1;
    if (7 < iVar4) {
      F_00c47745(((uint *)(gen_frame + 0x8))[0x10] ^ (uint)(uint)(gen_frame + 0x4c));
      return uVar3;
    }
  } while( true );
}

/* ref: FUN_007d5d70 */
uint F_007d5d70(unsigned int gen_a0)
{
  GEN_ENTER(0x7d5d70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x1c0];
  uint uVar1;
  undefined4 * puVar2;
  undefined * this_00;
  int * piVar3;
  int iVar4;
  uint * this_01;
  undefined4 uVar5;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1bc);
  (*(uint *)(gen_frame + 0x1b8)) = uVar1;
  if (*(char *)((int)this + 0x60) == '\0') goto LAB_007d5e5e;
  puVar2 = ((undefined4 *)(gen_frame + 0x0));
  iVar4 = 0x36;
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 2;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_005a2710(((undefined4 *)(gen_frame + 0x0)),4);
  ((undefined4 *)(gen_frame + 0x0))[1] = 7;
  F_005a2710(((undefined1 *)(gen_frame + 0x8)),4);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  F_005a2710(((undefined1 *)(gen_frame + 0x1a8)),6);
  (*(undefined * PTR32 *)(gen_frame + 0x1ac)) = &REFG(undefined, 0x10bdbc2);
  F_005a2710(((undefined1 *)(gen_frame + 0x1b0)),3);
  (*(undefined4 *)(gen_frame + 0x1b4)) = 0xffffffff;
  if (*(int *)((int)this + 0xcc) == 0) {
    uVar5 = 0x3c;
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = F_007c8b20(this_00,uVar5);
    *(uint *)((int)this + 0xcc) = uVar1;
    if (uVar1 != 0) goto LAB_007d5e22;
  }
  else {
LAB_007d5e22: ;
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3,*(undefined4 *)((int)this + 0xcc),0x37,((undefined4 *)(gen_frame + 0x0)));
  }
  this_01 = &(*(uint *)(gen_frame + 0x1b8));
  iVar4 = 0x36;
  do {
    this_01 = this_01 + -2;
    uVar1 = F_005a2670(this_01);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
LAB_007d5e5e: ;
  F_00c47745((*(uint *)(gen_frame + 0x1b8)) ^ (uint)(uint)(gen_frame + 0x1bc));
  return CONCAT31((int3)(uVar1 >> 8),1);
}

/* ref: FUN_007d5e70 */
byte F_007d5e70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x7d5e70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  double dVar1;
  undefined1 * puVar2;
  undefined4 local_c;
  
  puVar2 = (undefined1 *)F_00771060(param_1);
  if (puVar2 != (undefined1 *)0x0) {
    dVar1 = (double)param_4 * *(double *)&REFG(undefined, 0x10912a8);
    *puVar2 = 1;
    local_c = (undefined4)(longlong)TRUNC(dVar1);
    *(undefined4 *)(puVar2 + 0xac) = local_c;
    F_0042e430(puVar2 + 4,param_2);
    F_0042e430(puVar2 + 0x58,param_3);
    return 1;
  }
  return 0;
}

/* ref: FUN_007d5ee0 */
unsigned int F_007d5ee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d5ee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * in_ecx;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined * this_00;
  
  if ((param_1 != (int *)0x0) &&
     (uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0xb8))(param_1), (char)uVar2 != '\0')) {
    uVar2 = F_00a5f290(param_1);
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
    in_ecx = *(int * PTR32 *)(uVar3 + 0x24);
    if ((in_ecx != (int *)0x0) && (bVar1 = F_0076a220(uVar2), bVar1 != 0)) {
      F_00769610(in_ecx);
      F_007cd910(this_00,uVar2);
      ((code *)*(gen_code32 *)(*in_ecx + 8))(in_ecx);
    }
  }
  return 0;
}

/* ref: FUN_007d5f50 */
uint F_007d5f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d5f50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d4254));
  in_ecx[3] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_007d5f70 */
uint F_007d5f70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d5f70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d429c));
  in_ecx[3] = 0xe0000000;
  in_ecx[4] = 0xe0000000;
  in_ecx[5] = 0xe0000000;
  in_ecx[6] = 0xe0000000;
  F_0042b630(in_ecx + 7);
  F_0042b630(in_ecx + 0x1c);
  *(undefined1 *)((int)in_ecx + 0x142) = 0;
  F_0042b630(in_ecx + 0x57);
  in_ecx[0x6c] = 0;
  in_ecx[0x6d] = 0;
  in_ecx[0x6e] = 0;
  in_ecx[0x6f] = 0;
  in_ecx[0x70] = 0;
  in_ecx[0x71] = 0;
  in_ecx[0x72] = 0;
  in_ecx[0x73] = 0;
  iVar1 = 0;
  puVar2 = in_ecx + 0x3f;
  do {
    puVar2[-0xe] = 0;
    *puVar2 = 0;
    *(undefined1 *)((int)in_ecx + iVar1 + 0x134) = 0;
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar1 < 0xe);
  return (uint)in_ecx;
}

/* ref: Client::UI2::Agent::AgentInspect::vf3 */
uint F_007d6010(unsigned int gen_a0)
{
  GEN_ENTER(0x7d6010u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int * piVar2;
  uint uVar3;
  
  F_00ae0cd0(&REFG(undefined, 0x14c0920),0x2a);
  piVar2 = *(int * PTR32 *)(this + 0x1cc);
  *(undefined4 *)(this + 0x1c8) = 0;
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)(this + 0x1cc) = 0;
  }
  uVar1 = *(undefined4 *)(this + 8);
  *(undefined4 *)(this + 0x1bc) = 0;
  *(undefined4 *)(this + 8) = 0;
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,uVar1,0);
  return uVar3;
}

/* ref: FUN_007d6070 */
uint F_007d6070(unsigned int gen_a0)
{
  GEN_ENTER(0x7d6070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 0x1b4) - 2;
  if ((uVar1 == 0) && (*(char *)((int)this + 0x142) != '\0')) {
    uVar1 = F_00771ca0(this);
    *(undefined4 *)((int)this + 0x1b4) = 0;
  }
  return uVar1;
}

/* ref: FUN_007d60a0 */
uint F_007d60a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7d60a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 0x1b8) - 2;
  if ((uVar1 == 0) && (*(char *)((int)this + 0x142) != '\0')) {
    uVar1 = F_00771d50(this);
    *(undefined4 *)((int)this + 0x1b8) = 0;
  }
  return uVar1;
}

/* ref: FUN_007d60d0 */
byte F_007d60d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7d60d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  byte bVar2;
  undefined * this_00;
  undefined * pvVar3;
  uint uVar4;
  uint * puVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
  (*(byte *)(gen_frame + 0x1b)) = 1;
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),0x7d9);
  if ((*(undefined * PTR32 *)(gen_frame + 0xc)) == (undefined *)0x0) {
    return 1;
  }
  (*(int *)(gen_frame + 0x14)) = 0;
  puVar5 = (uint *)((int)this + 0xc4);
  do {
    iVar1 = (*(int *)(gen_frame + 0x14));
    this_00 = (undefined *)F_00a37da0((*(undefined * PTR32 *)(gen_frame + 0xc)),(*(int *)(gen_frame + 0x14)));
    if (this_00 == (undefined *)0x0) {
LAB_007d61f3: ;
      *puVar5 = 0;
      puVar5[0xe] = 0;
      *(undefined1 *)(iVar1 + 0x134 + (int)(*(undefined * PTR32 *)(gen_frame + 0x10))) = 0;
    }
    else {
      if (*(char *)((int)this_00 + 6) == '\0') {
        if (*(int *)((int)this_00 + 8) == 0) goto LAB_007d61f3;
        uVar4 = *(uint *)((int)this_00 + 8);
        if ((*(byte *)((int)this_00 + 0x14) & 1) != 0) {
          uVar4 = uVar4 + 1000000;
        }
      }
      else {
        pvVar3 = (undefined *)F_00a3a860(this_00);
        uVar4 = F_0046e5e0(pvVar3);
      }
      uVar4 = F_00ab65a0(uVar4,0);
      *puVar5 = uVar4;
      if (*(char *)((int)this_00 + 6) == '\0') {
        uVar4 = *(uint *)((int)this_00 + 8);
        if ((*(byte *)((int)this_00 + 0x14) & 1) != 0) {
          uVar4 = uVar4 + 1000000;
        }
      }
      else {
        pvVar3 = (undefined *)F_00a3a860(this_00);
        uVar4 = F_0046e5e0(pvVar3);
      }
      uVar4 = F_00ab24a0(uVar4);
      if ((*puVar5 == 0) || (uVar4 == 0)) {
        (*(byte *)(gen_frame + 0x1b)) = 0;
      }
      else {
        bVar2 = F_007c9be0(&(*(int *)(gen_frame + 0x8)),this_00);
        puVar5[0xe] = (uint)(bVar2 != 0) | (*(int *)(gen_frame + 0x8)) * 2;
        if (((REFG(undefined1, 0x14ab408) != 0) && (REFG(undefined1, 0x14ab408) < REFG(undefined1, 0x14ab407))) &&
           (REFG(undefined1, 0x14ab408) < *(byte *)(uVar4 + 0x9f))) {
          *(undefined1 *)((*(int *)(gen_frame + 0x14)) + 0x134 + (int)(*(undefined * PTR32 *)(gen_frame + 0x10))) = 1;
        }
      }
    }
    (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 1;
    puVar5 = puVar5 + 1;
    if (0xd < (*(int *)(gen_frame + 0x14))) {
      return (*(byte *)(gen_frame + 0x1b));
    }
  } while( true );
}

/* ref: FUN_007d6230 */
uint F_007d6230(unsigned int gen_a0)
{
  GEN_ENTER(0x7d6230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  if (REFG(int, 0x14ab3b0) == -0x20000000) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac) ^ (uint)(uint)(gen_frame + 0xac));
    return 0xe0000000;
  }
  uVar2 = F_00a64450(&REFG(undefined, 0x14a9a18),REFG(int, 0x14ab3b0));
  if (uVar2 == 0) {
    F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
    return 0;
  }
  iVar3 = 0;
  do {
    ((byte *)(gen_frame + 0x8c))[iVar3] = *(byte *)(uVar2 + 0x2db8 + iVar3);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x1a);
  ((byte *)(gen_frame + 0x8c))[3] = 0x32;
  (*(undefined4 *)(gen_frame + 0x64)) = *(undefined4 *)(uVar2 + 0x2d90);
  (*(undefined4 *)(gen_frame + 0x68)) = *(undefined4 *)(uVar2 + 0x2d94);
  (*(undefined4 *)(gen_frame + 0x6c)) = *(undefined4 *)(uVar2 + 0x2d98);
  (*(undefined4 *)(gen_frame + 0x70)) = *(undefined4 *)(uVar2 + 0x2d9c);
  (*(undefined4 *)(gen_frame + 0x74)) = *(undefined4 *)(uVar2 + 0x2da0);
  (*(undefined4 *)(gen_frame + 0x78)) = *(undefined4 *)(uVar2 + 0x2da4);
  (*(undefined4 *)(gen_frame + 0x7c)) = *(undefined4 *)(uVar2 + 0x2da8);
  (*(undefined4 *)(gen_frame + 0x80)) = *(undefined4 *)(uVar2 + 0x2dac);
  (*(undefined4 *)(gen_frame + 0x84)) = *(undefined4 *)(uVar2 + 0x2db0);
  (*(undefined4 *)(gen_frame + 0x88)) = *(undefined4 *)(uVar2 + 0x2db4);
  F_00aa39d0(*(undefined * PTR32 *)((int)this + 0x1c8),(uint)(*(byte *)(uVar2 + 0x2dd3) >> 5 & 1));
  F_00aa9000(*(undefined * PTR32 *)((int)this + 0x1c8),(uint)(*(byte *)(uVar2 + 0x2dd3) >> 6 & 1));
  F_00a9fa40(*(undefined4 *)((int)this + 0x1c8),1);
  F_00aaa640(*(undefined * PTR32 *)((int)this + 0x1c8),((byte *)(gen_frame + 0x8c)),&(*(undefined4 *)(gen_frame + 0x64)));
  ((undefined4 *)(gen_frame + 0xc))[2] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[2], REFG(float, 0x10c44a0));
  ((undefined4 *)(gen_frame + 0xc))[4] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[4], REFG(float, 0x10c449c));
  ((undefined4 *)(gen_frame + 0xc))[7] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[7], REFG(float, 0x10c449c));
  ((undefined4 *)(gen_frame + 0xc))[9] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[9], REFG(float, 0x10c449c));
  ((undefined4 *)(gen_frame + 0xc))[10] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[10], REFG(float, 0x10adbc4));
  ((undefined4 *)(gen_frame + 0xc))[0xb] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[0xb], REFG(float, 0x10adbc4));
  ((undefined4 *)(gen_frame + 0xc))[0xc] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[0xc], REFG(float, 0x10adbc4));
  ((undefined4 *)(gen_frame + 0xc))[0xd] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[0xd], REFG(float, 0x10adbc4));
  uVar1 = (uint)((byte *)(gen_frame + 0x8c))[1] + (uint)((byte *)(gen_frame + 0x8c))[4] * 2;
  ((undefined4 *)(gen_frame + 0xc))[3] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[3], REFG(float, 0x10c44a8));
  ((undefined4 *)(gen_frame + 0xc))[5] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[5], REFG(float, 0x10c44a4));
  ((undefined4 *)(gen_frame + 0xc))[0xe] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[0xe], REFG(float, 0x10c44a8));
  ((undefined4 *)(gen_frame + 0xc))[0xf] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[0xf], REFG(float, 0x10c4498));
  ((undefined4 *)(gen_frame + 0xc))[0x10] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[0x10], REFG(float, 0x10c44a8));
  ((undefined4 *)(gen_frame + 0xc))[0x11] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[0x11], REFG(float, 0x10c4498));
  ((undefined4 *)(gen_frame + 0xc))[0] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[0], REFG(float, 0x1087f04));
  ((undefined4 *)(gen_frame + 0xc))[1] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[1], REFG(float, 0x1087f04));
  ((undefined4 *)(gen_frame + 0xc))[6] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[6], REFG(float, 0x10c4494));
  ((undefined4 *)(gen_frame + 0xc))[8] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[8], REFG(float, 0x10c4494));
  ((undefined4 *)(gen_frame + 0xc))[0x12] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[0x12], REFG(float, 0x10ac108));
  ((undefined4 *)(gen_frame + 0xc))[0x13] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[0x13], REFG(float, 0x10c4490));
  ((undefined4 *)(gen_frame + 0xc))[0x14] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[0x14], REFG(float, 0x10ac108));
  ((undefined4 *)(gen_frame + 0xc))[0x15] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[0x15], REFG(float, 0x10c4490));
  if (uVar1 < 0x16) {
    (*(undefined4 *)(gen_frame + 0x8)) = ((undefined4 *)(gen_frame + 0xc))[uVar1];
  }
  else {
    (*(undefined4 *)(gen_frame + 0x8)) = REFG(float, 0x1087f04);
  }
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c8) + 0x4c))))((*(undefined4 *)(gen_frame + 0x8)));
  F_00aa1d10(*(undefined * PTR32 *)((int)this + 0x1c8),(uint)*(byte *)(uVar2 + 0x1680));
  F_00aa1cc0(*(undefined * PTR32 *)((int)this + 0x1c8),*(undefined4 *)(uVar2 + 0x1678),
               *(undefined4 *)(uVar2 + 0x167c));
  iVar3 = 0;
  puVar4 = (undefined4 *)(uVar2 + 0x16b0);
  do {
    uVar2 = F_00aa80c0(*(undefined * PTR32 *)((int)this + 0x1c8),iVar3,*puVar4,puVar4[1]);
    iVar3 = iVar3 + 1;
    puVar4 = puVar4 + 0x1e8;
  } while (iVar3 < 2);
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
  return CONCAT31((int3)(uVar2 >> 8),1);
}

/* ref: FUN_007d64e0 */
unsigned int F_007d64e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d64e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d42e4));
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 6;
  return 0;
}

/* ref: Client::UI2::Agent::AgentInventory::vf5 */
unsigned int F_007d6510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7d6510u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_ecx = (int)gen_a0;
  undefined4 in_esi = (undefined4)gen_a1;
  undefined4 in_edi = (undefined4)gen_a2;
  uint param_4 = (uint)gen_a3;
  if ((param_4 & 0x1f) != 0) {
    F_00772170(in_ecx,in_esi,in_edi,*(undefined4 *)(in_ecx + 0xc),0);
  }
  return 0;
}

/* ref: FUN_007d6530 */
uint F_007d6530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d6530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  piVar1 = *(int * PTR32 *)(uVar2 + 0x28);
  if ((piVar1 != (int *)0x0) &&
     ((uVar2 = piVar1[0x90], uVar2 == *(uint *)((int)this + 8) || ((char)param_1 != '\0')))) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  return uVar2;
}

/* ref: FUN_007d6570 */
uint F_007d6570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d6570u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  uVar3 = 0;
  if (*(int *)(uVar2 + 0x78) != 0) {
    piVar1 = ((int *)GEN_TOP((*(int *)(uVar2 + 0x78) + 0xc)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,param_2,param_1,0,0);
  }
  return uVar3;
}

/* ref: FUN_007d65a0 */
uint F_007d65a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d65a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  uVar3 = 0;
  if (*(int *)(uVar2 + 0xdc) != 0) {
    piVar1 = ((int *)GEN_TOP((*(int *)(uVar2 + 0xdc) + 0xc)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,param_2,param_1,0,0);
  }
  return uVar3;
}

/* ref: FUN_007d65e0 */
uint F_007d65e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d65e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  uVar3 = 0;
  if (*(int *)(uVar2 + 0xe8) != 0) {
    piVar1 = ((int *)GEN_TOP((*(int *)(uVar2 + 0xe8) + 0xc)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,param_2,param_1,0,1);
  }
  return uVar3;
}

/* ref: FUN_007d6620 */
uint F_007d6620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d6620u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  uVar3 = 0;
  if (*(int *)(uVar2 + 0xe8) != 0) {
    piVar1 = ((int *)GEN_TOP((*(int *)(uVar2 + 0xe8) + 0xc)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,param_2,param_1,0,2);
  }
  return uVar3;
}

/* ref: FUN_007d6660 */
uint F_007d6660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d6660u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  uVar3 = 0;
  if (*(int *)(uVar2 + 0x80) != 0) {
    piVar1 = ((int *)GEN_TOP((*(int *)(uVar2 + 0x80) + 0x10)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,param_2,param_1,0,0);
  }
  return uVar3;
}

/* ref: FUN_007d66a0 */
uint F_007d66a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d66a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  uVar3 = 0;
  if (*(int *)(uVar2 + 0x120) != 0) {
    piVar1 = ((int *)GEN_TOP((*(int *)(uVar2 + 0x120) + 0xc)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,param_2,param_1,0,0);
  }
  return uVar3;
}

/* ref: FUN_007d66e0 */
uint F_007d66e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7d66e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  undefined3 extraout_var = 0;
  undefined * this_00;
  undefined1 * puVar4;
  uint uVar5;
  float fVar6;
  double dVar7;
  int iVar8;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  uVar1 = *(undefined4 *)((int)this + 0x30);
  bVar3 = F_00ac2f60(&REFG(undefined, 0x14bcf40),2,uVar1);
  uVar5 = CONCAT31(extraout_var,bVar3);
  if (bVar3 != 0) {
    fVar6 = F_00ac3090(&REFG(undefined, 0x14bcf40),2,uVar1);
    dVar7 = F_00ac3060(&REFG(undefined, 0x14bcf40),2,uVar1);
    dVar7 = (double)((float)GEN_TOF((((float10)fVar6 - (float10)dVar7) * (float10)REFG(double, 0x10944b8))));
    if (dVar7 < 0.0) {
      dVar7 = dVar7 - REFG(double, 0x1088108);
    }
    else {
      dVar7 = dVar7 + REFG(double, 0x1088108);
    }
    uVar5 = (uint)dVar7;
    if (0 < (int)uVar5) {
      if ((int)uVar5 < 10) {
        (*(undefined4 *)(gen_frame + 0x9)) = 0;
        (*(undefined4 *)(gen_frame + 0xd)) = 0;
        (*(undefined4 *)(gen_frame + 0x11)) = 0;
        (*(undefined4 *)(gen_frame + 0x15)) = 0;
        (*(undefined4 *)(gen_frame + 0x19)) = 0;
        (*(undefined4 *)(gen_frame + 0x1d)) = 0;
        (*(undefined4 *)(gen_frame + 0x21)) = 0;
        (*(undefined2 *)(gen_frame + 0x25)) = 0;
        (*(undefined1 *)(gen_frame + 0x27)) = 0;
        (*(undefined1 *)(gen_frame + 0x8)) = 0;
        dVar7 = (double)(float)((float10)(int)uVar5 / (float10)REFG(double, 0x10944b8));
        F_00c472af(&(*(undefined1 *)(gen_frame + 0x8)),0x20,"%2.1f",(int)(ulonglong)gen_d2bits(dVar7),
                   (int)((ulonglong)gen_d2bits(dVar7) >> 0x20));
        puVar4 = &(*(undefined1 *)(gen_frame + 0x8));
      }
      else {
        iVar8 = (int)uVar5 / 10;
        this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
        puVar4 = (undefined1 *)F_00462880(this_00,iVar8);
      }
      F_00431250(*(undefined * PTR32 *)((int)this + 0x28),2,puVar4,0,1,0);
      iVar8 = *(int *)((int)this + 0x24);
      iVar2 = *(int *)(iVar8 + 0x20);
      uVar5 = *(uint *)(iVar2 + 8) | 2;
      *(uint *)(iVar2 + 8) = uVar5;
      *(undefined1 *)(iVar8 + 0x1d) = 1;
      F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
      return uVar5;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar5;
}

/* ref: FUN_007d6840 */
unsigned int F_007d6840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d6840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char cVar1;
  char * pcVar2;
  
  if (param_1 != (char *)0x0) {
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    if (pcVar2 != param_1 + 1) {
      F_00431250(*(undefined * PTR32 *)((int)this + 0x28),0xe,param_1,0,1,0);
      *(uint *)((int)this + 0x3c) = *(uint *)((int)this + 0x3c) | 0x100;
    }
  }
  return 0;
}

/* ref: FUN_007d6880 */
uint F_007d6880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7d6880u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  int param_4 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x150];
  byte bVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  undefined * pvVar7;
  uint uVar8;
  undefined * puVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  (*(uint *)(gen_frame + 0x148)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x14c);
  bVar1 = *(byte *)((int)this + 0x45);
  iVar12 = *(int *)((int)this + 0x24);
  iVar11 = *(int *)(iVar12 + 0x20);
  if (*(int *)(iVar11 + 0x60) != -2) {
    *(undefined4 *)(iVar11 + 0x60) = 0xfffffffe;
    *(undefined1 *)(iVar12 + 0x1d) = 1;
  }
  iVar12 = *(int *)((int)this + 0x24);
  iVar11 = *(int *)(iVar12 + 0x20);
  if (*(int *)(iVar11 + 100) != -2) {
    *(undefined4 *)(iVar11 + 100) = 0xfffffffe;
    *(undefined1 *)(iVar12 + 0x1d) = 1;
  }
  iVar12 = *(int *)((int)this + 0x24);
  iVar11 = *(int *)(iVar12 + 0x20);
  if (*(int *)(iVar11 + 0x68) != -2) {
    *(undefined4 *)(iVar11 + 0x68) = 0xfffffffe;
    *(undefined1 *)(iVar12 + 0x1d) = 1;
  }
  iVar12 = *(int *)((int)this + 0x24);
  iVar11 = *(int *)(iVar12 + 0x20);
  if (*(int *)(iVar11 + 0x6c) != -2) {
    *(undefined4 *)(iVar11 + 0x6c) = 0xfffffffe;
    *(undefined1 *)(iVar12 + 0x1d) = 1;
  }
  iVar12 = *(int *)((int)this + 0x24);
  iVar11 = *(int *)(iVar12 + 0x20);
  if (*(int *)(iVar11 + 0x70) != -2) {
    *(undefined4 *)(iVar11 + 0x70) = 0xfffffffe;
    *(undefined1 *)(iVar12 + 0x1d) = 1;
  }
  (*(uint *)(gen_frame + 0x10)) = 0;
  (*(uint *)(gen_frame + 0x0)) = 0;
  if (*(char *)(param_2 + 0xa3) != '\a') {
    uVar10 = 0;
    do {
      if (*(int *)(param_1 + uVar10 * 4) != 0) {
        if ((*(char *)((int)param_3 + 6) == '\0') || (uVar6 = F_00a3a860(param_3), uVar6 == 0)) {
          uVar5 = *((ushort *)GEN_TOP(((int)param_3 + (uVar10 & 0xff) * 2 + 0x20)));
        }
        else {
          uVar6 = uVar10;
          pvVar7 = (undefined *)F_00a3a860(param_3);
          uVar5 = F_0071d2c0(pvVar7,uVar6);
        }
        if (uVar5 != 0) {
          uVar6 = F_00a3ba20((uint)*((byte *)GEN_TOP((*(int *)(param_1 + uVar10 * 4) + 0x28))),param_3,0);
          ((uint *)(gen_frame + 0x20))[*((byte *)GEN_TOP((*(int *)(param_1 + uVar10 * 4) + 0x28)))] = uVar6;
          if ((int)uVar6 < 0) {
            F_00c47745((*(uint *)(gen_frame + 0x148)) ^ (uint)(uint)(gen_frame + 0x14c));
            return uVar6 & 0xffffff00;
          }
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < 5);
    uVar10 = 0;
    (*(int *)(gen_frame + 0x14)) = 0x33;
    (*(int *)(gen_frame + 0x8)) = 0x60;
    do {
      if (*(int *)(param_1 + uVar10 * 4) != 0) {
        if ((*(char *)((int)param_3 + 6) == '\0') || (uVar6 = F_00a3a860(param_3), uVar6 == 0)) {
          uVar5 = *((ushort *)GEN_TOP(((int)param_3 + (uVar10 & 0xff) * 2 + 0x20)));
        }
        else {
          uVar6 = uVar10 & 0xff;
          pvVar7 = (undefined *)F_00a3a860(param_3);
          uVar5 = F_0071d2c0(pvVar7,uVar6);
        }
        if (uVar5 != 0) {
          iVar12 = *(int *)((int)this + 0x24);
          iVar11 = *(int *)(iVar12 + 0x20);
          if (*(uint *)(iVar11 + (*(int *)(gen_frame + 0x8))) != (uint)*(byte *)(param_4 + uVar10)) {
            *(uint *)(iVar11 + (*(int *)(gen_frame + 0x8))) = (uint)*(byte *)(param_4 + uVar10);
            *(undefined1 *)(iVar12 + 0x1d) = 1;
          }
          uVar6 = (uint)bVar1;
          uVar13 = *((undefined4 *)GEN_TOP((*(int *)(param_1 + uVar10 * 4) + (uint)*(byte *)(param_4 + uVar10) * 4)));
          uVar14 = 0x201;
          pvVar7 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))))
          ;
          uVar6 = F_00461c60(pvVar7,uVar14,uVar13,uVar6);
          F_00431250(*(undefined * PTR32 *)((int)this + 0x28),(*(int *)(gen_frame + 0x14)) + -6,uVar6,0,1,0);
          if ((*(char *)((int)param_3 + 6) == '\0') || (uVar6 = F_00a3a860(param_3), uVar6 == 0))
          {
            bVar4 = *((byte *)GEN_TOP(((uVar10 & 0xff) + 0x2a + (int)param_3)));
          }
          else {
            uVar6 = uVar10 & 0xff;
            pvVar7 = (undefined *)F_00a3a860(param_3);
            bVar4 = F_0071d300(pvVar7,uVar6);
          }
          iVar12 = *(int *)(param_1 + uVar10 * 4);
          iVar11 = (int)*(char *)(bVar4 + 0x29 + iVar12);
          if (iVar11 < 1) {
            puVar9 = &REFG(undefined, 0x10bded6);
          }
          else {
            bVar4 = *(byte *)(iVar12 + 0x28);
            ((uint *)(gen_frame + 0x20))[bVar4] = ((uint *)(gen_frame + 0x20))[bVar4] + iVar11;
            uVar6 = F_00a6ad20((uint)bVar4,param_2);
            if ((int)uVar6 < (int)((uint *)(gen_frame + 0x20))[*(byte *)(iVar12 + 0x28)]) {
              iVar11 = iVar11 + (uVar6 - ((uint *)(gen_frame + 0x20))[*(byte *)(iVar12 + 0x28)]);
              if (iVar11 < 0) {
                iVar11 = 0;
              }
              (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) | 1 << ((byte)(*(uint *)(gen_frame + 0x10)) & 0x1f);
            }
            uVar6 = (uint)bVar1;
            uVar8 = (uint)*((byte *)GEN_TOP((*(int *)(param_1 + uVar10 * 4) + 0x28)));
            uVar14 = 1;
            uVar13 = 0x20f;
            pvVar7 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))
                                       (*(int * PTR32 *)((int)this + 4))));
            puVar9 = (undefined *)F_00461ea0(pvVar7,uVar13,uVar8,uVar14,iVar11,uVar6);
          }
          F_00431250(*(undefined * PTR32 *)((int)this + 0x28),(*(int *)(gen_frame + 0x14)),puVar9,0,1,0);
          (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 4;
          (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) + 1;
          (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 1;
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < 5);
  }
  if ((*(uint *)(gen_frame + 0x10)) < *(byte *)(param_2 + 0xa5)) {
    iVar12 = (*(uint *)(gen_frame + 0x10)) * 4 + 0x60;
    iVar11 = (*(uint *)(gen_frame + 0x10)) + 0x33;
    do {
      iVar2 = *(int *)((int)this + 0x24);
      iVar3 = *(int *)(iVar2 + 0x20);
      if (*(int *)(iVar3 + iVar12) != -1) {
        *(undefined4 *)(iVar3 + iVar12) = 0xffffffff;
        *(undefined1 *)(iVar2 + 0x1d) = 1;
      }
      F_00431250(*(undefined * PTR32 *)((int)this + 0x28),iVar11 + -6,&REFG(undefined, 0x10bded7),0,1,0);
      F_00431250(*(undefined * PTR32 *)((int)this + 0x28),iVar11,&REFG(undefined, 0x10bdeff),0,1,0);
      uVar10 = iVar11 - 0x32;
      iVar12 = iVar12 + 4;
      iVar11 = iVar11 + 1;
    } while (uVar10 < *(byte *)(param_2 + 0xa5));
  }
  iVar12 = *(int *)((int)this + 0x24);
  iVar11 = *(int *)(iVar12 + 0x20);
  if (*(uint *)(iVar11 + 0x5c) != (*(uint *)(gen_frame + 0x0))) {
    *(uint *)(iVar11 + 0x5c) = (*(uint *)(gen_frame + 0x0));
    *(undefined1 *)(iVar12 + 0x1d) = 1;
  }
  iVar12 = *(int *)((int)this + 0x24);
  iVar11 = *(int *)(iVar12 + 0x20);
  if (*(uint *)(iVar11 + 0x58) != (uint)*(byte *)(param_2 + 0xa5)) {
    *(uint *)(iVar11 + 0x58) = (uint)*(byte *)(param_2 + 0xa5);
    *(undefined1 *)(iVar12 + 0x1d) = 1;
  }
  if (((*(uint *)(gen_frame + 0x10)) != 0) || (*(char *)(param_2 + 0xa5) != '\0')) {
    *(uint *)((int)this + 0x3c) = *(uint *)((int)this + 0x3c) | 0x20;
  }
  F_00c47745((*(uint *)(gen_frame + 0x148)) ^ (uint)(uint)(gen_frame + 0x14c));
  return 1;
}

/* ref: FUN_007d6ca0 */
uint F_007d6ca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7d6ca0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  undefined * pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (param_1 != 0) {
    if (*(int *)((int)this + 0x2c) == 6) {
      uVar1 = F_006d5ef0(*(undefined4 *)((int)this + 0x30));
    }
    else if (param_2 == 9999) {
      if (*(int *)(param_1 + 0x34) == 0) goto LAB_007d6d18;
      uVar1 = F_006c0940(*(undefined4 *)(param_1 + 0x30),(uint)*(byte *)(param_1 + 0xae),
                           CONCAT31((int3)(param_3 - 0xf4241U >> 8),param_3 - 0xf4241U < 999999));
    }
    else {
      uVar1 = F_006c0a30(*(undefined4 *)(param_1 + 0x30),(uint)*(byte *)(param_1 + 0xae),param_2,
                           param_4);
    }
    if (uVar1 != 0) {
      uVar3 = 0x1e4;
      pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
      uVar1 = F_00461bb0(pvVar2,uVar3,uVar1);
      goto LAB_007d6d4b;
    }
  }
LAB_007d6d18: ;
  uVar5 = 0;
  uVar4 = 0;
  uVar3 = 0x1f7;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043bd00(pvVar2,uVar3,uVar4,uVar5);
LAB_007d6d4b: ;
  uVar1 = F_00431250(*(undefined * PTR32 *)((int)this + 0x28),0x14,uVar1,0,1,0);
  *(uint *)((int)this + 0x3c) = *(uint *)((int)this + 0x3c) | 4;
  return uVar1;
}

/* ref: FUN_007d6d70 */
byte F_007d6d70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d6d70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  if (param_1 != 0 || param_2 != 0) {
    uVar1 = F_00aae060(&REFG(undefined, 0x14b5ef0),param_1,param_2);
    if (uVar1 == 0) {
      return 0;
    }
    *(uint *)((int)this + 0x3c) = *(uint *)((int)this + 0x3c) | 1;
    F_00431250(*(undefined * PTR32 *)((int)this + 0x28),0x15,uVar1,0,1,0);
  }
  return 1;
}

/* ref: FUN_007d6dc0 */
unsigned int F_007d6dc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d6dc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  undefined * pvVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  
  uVar7 = 0;
  if (param_1 != (undefined *)0x0) {
    iVar1 = *(int *)((int)this + 0x2c);
    if ((((iVar1 != 2) || (param_2 == 0x7d9)) && (iVar1 != 6)) && (iVar1 != 0xd)) {
      uVar7 = 100;
      goto LAB_007d6e80;
    }
    bVar3 = F_00a36000(param_1);
    uVar7 = (uint)bVar3;
    if (bVar3 != 0) {
      if (uVar7 != 100) goto LAB_007d6e80;
      if (*(char *)((int)param_1 + 6) == '\0') {
LAB_007d6e64: ;
        uVar4 = *(ushort *)((int)param_1 + 0x12);
      }
      else {
        uVar6 = F_00a3a860(param_1);
        if (uVar6 == 0) goto LAB_007d6e64;
        pvVar5 = (undefined *)F_00a3a860(param_1);
        uVar4 = F_00906d60(pvVar5);
      }
      if (uVar4 != 30000) {
        uVar7 = 99;
      }
      goto LAB_007d6e80;
    }
    if (*(char *)((int)param_1 + 6) == '\0') {
LAB_007d6e2b: ;
      uVar4 = *(ushort *)((int)param_1 + 0x12);
    }
    else {
      uVar6 = F_00a3a860(param_1);
      if (uVar6 == 0) goto LAB_007d6e2b;
      pvVar5 = (undefined *)F_00a3a860(param_1);
      uVar4 = F_00906d60(pvVar5);
    }
    if (uVar4 != 0) {
      uVar7 = 1;
      goto LAB_007d6e80;
    }
  }
  *(uint *)((int)this + 0x3c) = *(uint *)((int)this + 0x3c) | 0x4000;
LAB_007d6e80: ;
  uVar8 = 0x1e3;
  uVar6 = uVar7;
  pvVar5 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar6 = F_00461bb0(pvVar5,uVar8,uVar6);
  F_00431250(*(undefined * PTR32 *)((int)this + 0x28),0x17,uVar6,0,1,0);
  iVar1 = *(int *)((int)this + 0x24);
  iVar2 = *(int *)(iVar1 + 0x20);
  if (*(uint *)(iVar2 + 0x4c) != uVar7) {
    *(uint *)(iVar2 + 0x4c) = uVar7;
    *(undefined1 *)(iVar1 + 0x1d) = 1;
  }
  return 0;
}

/* ref: FUN_007d6ed0 */
unsigned int F_007d6ed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d6ed0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  uint uVar4;
  undefined4 uVar5;
  
  uVar3 = F_007723a0(this,param_1,param_2);
  uVar5 = 0x1e3;
  uVar4 = uVar3;
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = F_00461bb0(this_00,uVar5,uVar4);
  F_00431250(*(undefined * PTR32 *)((int)this + 0x28),0x18,uVar4,0,1,0);
  iVar1 = *(int *)((int)this + 0x24);
  iVar2 = *(int *)(iVar1 + 0x20);
  if (*(uint *)(iVar2 + 0x48) != uVar3) {
    *(uint *)(iVar2 + 0x48) = uVar3;
    *(undefined1 *)(iVar1 + 0x1d) = 1;
  }
  return 0;
}

/* ref: FUN_007d6f30 */
uint F_007d6f30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d6f30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined * this_00;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  
  bVar1 = *(byte *)((int)this + 0x45);
  uVar8 = 0;
  uVar7 = 0;
  do {
    if ((*(int *)(param_1 + uVar7 * 4) == 0) || (uVar4 = F_00ab2290(uVar7), uVar4 == 0))
    goto LAB_007d6fe1;
    bVar2 = *(byte *)(param_2 + 0xa0);
    if (bVar2 == 0) {
LAB_007d6f93: ;
      if ((uVar7 != 0x15) && (uVar7 != 0x18)) {
LAB_007d6f9d: ;
        uVar5 = (uint)bVar1;
        iVar10 = *(int *)(param_1 + uVar7 * 4);
        uVar6 = (uint)(0 < iVar10);
        uVar9 = 0x200;
        uVar4 = uVar7;
        this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
        uVar4 = F_00461ea0(this_00,uVar9,uVar4,uVar6,iVar10,uVar5);
        F_00431250(*(undefined * PTR32 *)((int)this + 0x28),uVar8 + 0x1e,uVar4,0,1,0);
        uVar8 = uVar8 + 1;
        if (5 < uVar8) break;
      }
    }
    else if (bVar2 < 3) {
      if (((uVar7 != 0xc) && (uVar7 != 0xe)) && (uVar7 != 0xd)) goto LAB_007d6f9d;
    }
    else {
      if (bVar2 != 3) goto LAB_007d6f93;
      if ((uVar7 != 0x11) && (uVar7 != 0x12)) goto LAB_007d6f9d;
    }
LAB_007d6fe1: ;
    uVar7 = uVar7 + 1;
  } while (uVar7 < 0x4a);
  iVar10 = *(int *)((int)this + 0x24);
  iVar3 = *(int *)(iVar10 + 0x20);
  if (*(uint *)(iVar3 + 0x50) != uVar8) {
    *(uint *)(iVar3 + 0x50) = uVar8;
    *(undefined1 *)(iVar10 + 0x1d) = 1;
  }
  return uVar8;
}

/* ref: FUN_007d72e0 */
byte F_007d72e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x7d72e0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if ((char)(*(undefined4 *)&gen_args[1]) == '\0') {
    uVar2 = F_00ab25a0((uint)*(byte *)((*(int *)&gen_args[2]) + 0xa6));
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar4 = 0;
      do {
        uVar3 = uVar4;
        if (*(char *)(uVar2 + 4 + uVar4) == '\x01') break;
        uVar4 = uVar4 + 1;
        uVar3 = 0;
      } while (uVar4 < 0xe);
    }
    (*(uint *)&gen_args[8]) = (*(uint *)&gen_args[8]) & 0xffffff;
    bVar1 = F_00772840((int)&(*(uint *)&gen_args[8]) + 3,(*(undefined4 *)&gen_args[3]),uVar3);
    if (bVar1 != 0) {
      if ((char)(*(undefined4 *)&gen_args[3]) == '\0') {
        uVar3 = F_00a3bca0(0xc,REFG(undefined4, 0x14a4258),uVar3,0);
        if (-1 < (int)uVar3) {
          if ((*(undefined1 *)((char *)&(*(uint *)&gen_args[8]) + 3)) == '\0') {
            return 1;
          }
          *(*(int * PTR32 *)&gen_args[7]) = ((*(uint *)&gen_args[6]) & 0xffff) - uVar3;
          return 1;
        }
      }
      else {
        uVar3 = F_00a3bca0(0xd,REFG(undefined4, 0x14a4258),uVar3,0);
        if (-1 < (int)uVar3) {
          if ((*(undefined1 *)((char *)&(*(uint *)&gen_args[8]) + 3)) == '\0') {
            return 1;
          }
          *(*(int * PTR32 *)&gen_args[4]) = ((*(uint *)&gen_args[5]) & 0xffff) - uVar3;
          return 1;
        }
      }
    }
  }
  else if ((char)(*(undefined4 *)&gen_args[3]) == '\0') {
    if (((char)(*(uint *)&gen_args[8]) == '\0') && ((*(int *)&gen_args[9]) == 0)) {
      uVar3 = F_00a3bca0(0xc,*(undefined4 *)&REFG(undefined, 0x0),(int)*(short *)&REFG(undefined, 0x4),1);
    }
    else {
      uVar3 = F_00a3ba20(0xc,(*(int *)&gen_args[9]),1);
    }
    if (-1 < (int)uVar3) {
      *(*(int * PTR32 *)&gen_args[7]) = uVar3 - ((*(uint *)&gen_args[6]) & 0xffff);
      return 1;
    }
  }
  else {
    if (((char)(*(uint *)&gen_args[8]) == '\0') && ((*(int *)&gen_args[9]) == 0)) {
      uVar3 = F_00a3bca0(0xd,*(undefined4 *)&REFG(undefined, 0x0),(int)*(short *)&REFG(undefined, 0x4),1);
    }
    else {
      uVar3 = F_00a3ba20(0xd,(*(int *)&gen_args[9]),1);
    }
    if (-1 < (int)uVar3) {
      *(*(int * PTR32 *)&gen_args[4]) = uVar3 - ((*(uint *)&gen_args[5]) & 0xffff);
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_007d7450 */
unsigned int F_007d7450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d7450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)this + 0x24);
  iVar2 = *(int *)(iVar1 + 0x20);
  if (*(int *)(iVar2 + 4) != param_1) {
    *(int *)(iVar2 + 4) = param_1;
    *(undefined1 *)(iVar1 + 0x1d) = 1;
  }
  *(uint *)((int)this + 0x3c) = *(uint *)((int)this + 0x3c) | 0x400;
  return 0;
}

/* ref: FUN_007d7480 */
uint F_007d7480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x7d7480u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint param_4 = (uint)gen_a4;
  int param_5 = (int)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int iVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  
  F_00431250(*(undefined * PTR32 *)((int)this + 0x28),0,param_6,0,1,0);
  F_00431250(*(undefined * PTR32 *)((int)this + 0x28),1,param_7,0,1,0);
  iVar1 = *(int *)((int)this + 0x24);
  piVar2 = *(int * PTR32 *)(iVar1 + 0x20);
  if (*piVar2 != param_5) {
    *piVar2 = param_5;
    *(undefined1 *)(iVar1 + 0x1d) = 1;
  }
  iVar1 = *(int *)((int)this + 0x24);
  iVar3 = *(int *)(iVar1 + 0x20);
  if (*(uint *)(iVar3 + 0x28) != (param_2 & 0xff)) {
    *(uint *)(iVar3 + 0x28) = param_2 & 0xff;
    *(undefined1 *)(iVar1 + 0x1d) = 1;
  }
  iVar1 = *(int *)((int)this + 0x24);
  iVar3 = *(int *)(iVar1 + 0x20);
  if (*(uint *)(iVar3 + 0x30) != (param_4 & 0xff)) {
    *(uint *)(iVar3 + 0x30) = param_4 & 0xff;
    *(undefined1 *)(iVar1 + 0x1d) = 1;
  }
  iVar1 = *(int *)((int)this + 0x24);
  iVar3 = *(int *)(iVar1 + 0x20);
  if (*(uint *)(iVar3 + 0x2c) != (param_3 & 0xff)) {
    *(uint *)(iVar3 + 0x2c) = param_3 & 0xff;
    *(undefined1 *)(iVar1 + 0x1d) = 1;
  }
  uVar4 = F_00431250(*(undefined * PTR32 *)((int)this + 0x28),0xd,&REFG(undefined, 0x10bdf2e),0,1,0);
  return uVar4;
}

/* ref: FUN_007d7520 */
uint F_007d7520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7d7520u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  undefined * pvVar4;
  undefined4 uVar5;
  
  if (param_1 == (undefined *)0x0) {
    uVar2 = 0;
    uVar3 = 0;
  }
  else {
    uVar2 = F_00a3a8a0(param_1);
    uVar3 = F_00a41080(&REFG(undefined, 0x14a4230),param_3,0,1,1);
  }
  if (param_3 - 0x17U < 4) {
    uVar3 = F_00a3c240(&REFG(undefined, 0x14a4230),param_3);
  }
  piVar1 = *(int * PTR32 *)((int)this + 4);
  if (param_2 < 2) {
    uVar5 = 0x238;
    pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1)));
    uVar2 = F_00461bb0(pvVar4,uVar5,uVar3);
  }
  else {
    uVar5 = 0x239;
    pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1)));
    uVar2 = F_00461d60(pvVar4,uVar5,uVar2,param_2,uVar3);
  }
  uVar2 = F_00431250(*(undefined * PTR32 *)((int)this + 0x28),0xd,uVar2,0,1,0);
  return uVar2;
}

/* ref: FUN_007d75c0 */
unsigned int F_007d75c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7d75c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  uint param_4 = (uint)gen_a4;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined * this_00;
  int iVar4;
  uint uVar5;
  
  uVar2 = param_4 & 0xff;
  uVar5 = (uint)(-1 < param_3);
  iVar3 = ((char)param_2 != '\0') + 0x1f8;
  iVar4 = param_3;
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_00461d60(this_00,iVar3,uVar5,iVar4,uVar2);
  F_00431250(*(undefined * PTR32 *)((int)this + 0x28),param_1 + 9,uVar2,0,1,0);
  iVar4 = 0;
  if (param_3 < 1) {
    if (param_3 < 0) {
      iVar4 = 2;
    }
  }
  else {
    iVar4 = 1;
  }
  iVar3 = *(int *)((int)this + 0x24);
  iVar1 = *(int *)(iVar3 + 0x20);
  if (*(int *)(iVar1 + 0x14 + param_1 * 4) != iVar4) {
    *(int *)(iVar1 + 0x14 + param_1 * 4) = iVar4;
    *(undefined1 *)(iVar3 + 0x1d) = 1;
  }
  return 0;
}

/* ref: FUN_007d7640 */
uint F_007d7640(unsigned int gen_a0)
{
  GEN_ENTER(0x7d7640u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  undefined * this_00;
  undefined1 * puVar4;
  double dVar5;
  float fVar6;
  int iVar7;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x28)) = uVar3;
  if (*(int *)((int)this + 8) != 0) {
    uVar3 = 0;
    if (*(int *)((int)this + 0x1c) != 0) {
      bVar2 = F_00ac2f60(&REFG(undefined, 0x14bcf40),*(int *)((int)this + 0x1c),
                           *(undefined4 *)((int)this + 0x18));
      uVar3 = CONCAT31(extraout_var,bVar2);
      if (bVar2 != 0) {
        fVar6 = F_00ac3090(&REFG(undefined, 0x14bcf40),*(undefined4 *)((int)this + 0x1c),
                             *(undefined4 *)((int)this + 0x18));
        dVar5 = F_00ac3060(&REFG(undefined, 0x14bcf40),*(undefined4 *)((int)this + 0x1c),
                             *(undefined4 *)((int)this + 0x18));
        dVar5 = (double)((float)GEN_TOF((((float10)fVar6 - (float10)dVar5) * (float10)REFG(double, 0x10944b8))));
        if (dVar5 < 0.0) {
          dVar5 = dVar5 - REFG(double, 0x1088108);
        }
        else {
          dVar5 = dVar5 + REFG(double, 0x1088108);
        }
        uVar3 = (uint)dVar5;
        if (0 < (int)uVar3) {
          if ((int)uVar3 < 10) {
            (*(undefined4 *)(gen_frame + 0x9)) = 0;
            (*(undefined4 *)(gen_frame + 0xd)) = 0;
            (*(undefined4 *)(gen_frame + 0x11)) = 0;
            (*(undefined4 *)(gen_frame + 0x15)) = 0;
            (*(undefined4 *)(gen_frame + 0x19)) = 0;
            (*(undefined4 *)(gen_frame + 0x1d)) = 0;
            (*(undefined4 *)(gen_frame + 0x21)) = 0;
            (*(undefined2 *)(gen_frame + 0x25)) = 0;
            (*(undefined1 *)(gen_frame + 0x27)) = 0;
            (*(undefined1 *)(gen_frame + 0x8)) = 0;
            dVar5 = (double)(float)((float10)(int)uVar3 / (float10)REFG(double, 0x10944b8));
            F_00c472af(&(*(undefined1 *)(gen_frame + 0x8)),0x20,"%2.1f",(int)(ulonglong)gen_d2bits(dVar5),
                       (int)((ulonglong)gen_d2bits(dVar5) >> 0x20));
            puVar4 = &(*(undefined1 *)(gen_frame + 0x8));
          }
          else {
            iVar7 = (int)uVar3 / 10;
            this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))
                                        (*(int * PTR32 *)((int)this + 4))));
            puVar4 = (undefined1 *)F_00462880(this_00,iVar7);
          }
          F_00431250(*(undefined * PTR32 *)((int)this + 0x10),2,puVar4,0,1,0);
          iVar7 = *(int *)((int)this + 0xc);
          iVar1 = *(int *)(iVar7 + 0x20);
          uVar3 = *(uint *)(iVar1 + 0x10) | 2;
          *(uint *)(iVar1 + 0x10) = uVar3;
          *(undefined1 *)(iVar7 + 0x1d) = 1;
          F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
          return uVar3;
        }
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar3;
}

/* ref: FUN_007d77b0 */
unsigned int F_007d77b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d77b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int iVar2;
  
  F_00431250(*(undefined * PTR32 *)((int)this + 0x10),7,param_1,0,1,0);
  iVar1 = *(int *)((int)this + 0xc);
  iVar2 = *(int *)(iVar1 + 0x20);
  if (*(int *)(iVar2 + 0xc) != param_2) {
    *(int *)(iVar2 + 0xc) = param_2;
    *(undefined1 *)(iVar1 + 0x1d) = 1;
  }
  *(uint *)((int)this + 0x20) = *(uint *)((int)this + 0x20) | 4;
  return 0;
}

/* ref: FUN_007d77f0 */
uint F_007d77f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d77f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  undefined * pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 * puVar5;
  undefined4 uVar6;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  (*(uint *)(gen_frame + 0x88)) = uVar1;
  if (param_1 != 0) {
    (*(undefined1 *)(gen_frame + 0x8)) = 0;
    F_00c48350(((undefined1 *)(gen_frame + 0x9)),0,0x7f);
    F_00c472af(&(*(undefined1 *)(gen_frame + 0x8)),0x80,"%d.%02d",param_1 / 1000,((param_1 % 1000) * 100) / 1000);
    puVar5 = &(*(undefined1 *)(gen_frame + 0x8));
    uVar3 = 0x2ca;
    pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = F_00461190(pvVar2,uVar3,puVar5);
    F_00431250(*(undefined * PTR32 *)((int)this + 0x10),9,uVar1,0,1,0);
    uVar6 = 0;
    uVar4 = 0;
    uVar3 = 0x2be;
    pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = F_0043bd00(pvVar2,uVar3,uVar4,uVar6);
    uVar1 = F_00431250(*(undefined * PTR32 *)((int)this + 0x10),8,uVar1,0,1,0);
    *(uint *)((int)this + 0x20) = *(uint *)((int)this + 0x20) | 8;
  }
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return uVar1;
}

/* ref: FUN_007d78e0 */
uint F_007d78e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d78e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  undefined * pvVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 * puVar5;
  undefined4 uVar6;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  if (param_1 == 0) {
    uVar6 = 0;
    uVar4 = 0;
    uVar3 = 699;
    pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = F_0043bd00(pvVar1,uVar3,uVar4,uVar6);
  }
  else {
    (*(undefined1 *)(gen_frame + 0x8)) = 0;
    F_00c48350(((undefined1 *)(gen_frame + 0x9)),0,0x7f);
    F_00c472af(&(*(undefined1 *)(gen_frame + 0x8)),0x80,"%d.%02d",param_1 / 1000,((param_1 % 1000) * 100) / 1000);
    puVar5 = &(*(undefined1 *)(gen_frame + 0x8));
    uVar3 = 0x2ca;
    pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = F_00461190(pvVar1,uVar3,puVar5);
  }
  F_00431250(*(undefined * PTR32 *)((int)this + 0x10),0xb,uVar2,0,1,0);
  uVar6 = 0;
  uVar4 = 0;
  uVar3 = 0x2bd;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043bd00(pvVar1,uVar3,uVar4,uVar6);
  uVar2 = F_00431250(*(undefined * PTR32 *)((int)this + 0x10),10,uVar2,0,1,0);
  *(uint *)((int)this + 0x20) = *(uint *)((int)this + 0x20) | 0x10;
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return uVar2;
}

/* ref: FUN_007d79e0 */
uint F_007d79e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7d79e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *(int *)((int)this + 0xc);
  iVar2 = *(int *)(iVar1 + 0x20);
  if (*(uint *)(iVar2 + 4) != (param_1 & 0xffff)) {
    *(uint *)(iVar2 + 4) = param_1 & 0xffff;
    *(undefined1 *)(iVar1 + 0x1d) = 1;
  }
  F_00431250(*(undefined * PTR32 *)((int)this + 0x10),0,param_2,0,1,0);
  uVar3 = F_00431250(*(undefined * PTR32 *)((int)this + 0x10),1,param_3,0,1,0);
  return uVar3;
}

/* ref: FUN_007d7a30 */
uint F_007d7a30(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x7d7a30u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  double dVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  uVar6 = 0;
  uVar5 = 0;
  uVar4 = 0x2c5;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 0x18))))(*(int * PTR32 *)(param_1 + 4))));
  uVar3 = F_0043bd00(pvVar2,uVar4,uVar5,uVar6);
  F_00431250(*(undefined * PTR32 *)(param_1 + 0x10),3,uVar3,0,1,0);
  if (param_2 < 0.0) {
    dVar1 = (double)param_2 - REFG(double, 0x1088108);
  }
  else {
    dVar1 = (double)param_2 + REFG(double, 0x1088108);
  }
  iVar7 = (int)dVar1;
  uVar4 = 0x2c9;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 0x18))))(*(int * PTR32 *)(param_1 + 4))));
  uVar3 = F_00461bb0(pvVar2,uVar4,iVar7);
  uVar3 = F_00431250(*(undefined * PTR32 *)(param_1 + 0x10),4,uVar3,0,1,0);
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 1;
  return uVar3;
}

/* ref: FUN_007d7ac0 */
uint F_007d7ac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d7ac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar5 = 0;
  uVar4 = 0;
  uVar3 = 0x2c6;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043bd00(pvVar1,uVar3,uVar4,uVar5);
  F_00431250(*(undefined * PTR32 *)((int)this + 0x10),5,uVar2,0,1,0);
  uVar3 = 0x2c9;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_00461bb0(pvVar1,uVar3,param_1);
  uVar2 = F_00431250(*(undefined * PTR32 *)((int)this + 0x10),6,uVar2,0,1,0);
  *(uint *)((int)this + 0x20) = *(uint *)((int)this + 0x20) | 2;
  return uVar2;
}

/* ref: FUN_007d7b30 */
uint F_007d7b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d7b30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00431250(*(undefined * PTR32 *)((int)this + 0x10),0xc,param_1,0,1,0);
  *(uint *)((int)this + 0x20) = *(uint *)((int)this + 0x20) | 0x20;
  return uVar1;
}

/* ref: FUN_007d7b60 */
unsigned int F_007d7b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d7b60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  undefined4 uVar4;
  
  if ((byte)param_2 != 0) {
    iVar1 = *(int *)((int)this + 0xc);
    iVar2 = *(int *)(iVar1 + 0x20);
    if (*(int *)(iVar2 + 8) != param_1) {
      *(int *)(iVar2 + 8) = param_1;
      *(undefined1 *)(iVar1 + 0x1d) = 1;
    }
    uVar3 = (uint)(byte)param_2;
    uVar4 = 0x2cc;
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar3 = F_00461bb0(this_00,uVar4,uVar3);
    F_00431250(*(undefined * PTR32 *)((int)this + 0x10),0xd,uVar3,0,1,0);
    *(uint *)((int)this + 0x20) = *(uint *)((int)this + 0x20) | 0x40;
  }
  return 0;
}

/* ref: FUN_007d7bc0 */
uint F_007d7bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d7bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  undefined * this_00;
  undefined4 uVar2;
  
  uVar1 = param_1 & 0xff;
  uVar2 = 0x2ce;
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_00461bb0(this_00,uVar2,uVar1);
  uVar1 = F_00431250(*(undefined * PTR32 *)((int)this + 0x10),0xe,uVar1,0,1,0);
  *(uint *)((int)this + 0x20) = *(uint *)((int)this + 0x20) | 0x80;
  return uVar1;
}

/* ref: FUN_007d7c00 */
unsigned int F_007d7c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d7c00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0xe: ;
    *(undefined4 *)((int)this + 0x1c) = 1;
    break;
  case 0xf: ;
    *(undefined4 *)((int)this + 0x1c) = 9;
    break;
  case 0x10: ;
    *(undefined4 *)((int)this + 0x1c) = 5;
    break;
  case 0x11: ;
    *(undefined4 *)((int)this + 0x1c) = 6;
    break;
  case 0x12: ;
    *(undefined4 *)((int)this + 0x1c) = 7;
    break;
  case 0x13: ;
    *(undefined4 *)((int)this + 0x1c) = 8;
    break;
  default: ;
    *(undefined4 *)((int)this + 0x1c) = 0;
  }
  iVar1 = *(int *)((int)this + 0xc);
  iVar2 = *(int *)(iVar1 + 0x20);
  if (*(int *)(iVar2 + 0x18) != param_1) {
    *(int *)(iVar2 + 0x18) = param_1;
    *(undefined1 *)(iVar1 + 0x1d) = 1;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentLoot::vf5 */
uint F_007d7c80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d7c80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined * this_00;
  uint uVar3;
  
  if (*(int *)(this + 0x68) == 1) {
    bVar1 = F_00772d30();
    if (bVar1 != 0) {
      ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
    }
  }
  F_00772c00(this);
  uVar2 = F_00ae1d40(&REFG(undefined * PTR32, 0x1338d48));
  uVar3 = uVar2;
  if (*(uint *)(this + 0x20) != uVar2) {
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar3 = F_00760130(this_00,uVar3);
    *(uint *)(this + 0x20) = uVar2;
  }
  return uVar3;
}

/* ref: FUN_007d7cd0 */
uint F_007d7cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d7cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  int iVar2;
  
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d432c));
  F_0042b630((int)this + 0x10);
  iVar2 = (int)this + 100;
  iVar1 = 0xe;
  do {
    F_0042b630(iVar2);
    iVar2 = iVar2 + 0x54;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *(undefined4 *)((int)this + 0x550) = 0;
  *(undefined4 *)((int)this + 0x554) = 0;
  *(undefined4 *)((int)this + 0x558) = 0;
  F_0042b630((int)this + 0x55c);
  F_0042b630((int)this + 0x5b0);
  *(undefined4 *)((int)this + 0x604) = 0;
  *(undefined4 *)((int)this + 0x9f0) = 0;
  iVar2 = (int)this + 0xa20;
  iVar1 = 0x10;
  do {
    F_00401500(iVar2,0x544,2,((code *)REFP(0x471130)));
    iVar2 = iVar2 + 0xa98;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return (uint)this;
}

/* ref: FUN_007d7d80 */
uint F_007d7d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d7d80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int iVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  uint * this_00;
  int iVar5;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  iVar5 = *(int *)((int)this + 0x554);
  iVar1 = *(int *)((int)this + 0x558);
  ((undefined4 *)(gen_frame + 0x0))[0] = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),4);
  (*(int *)(gen_frame + 0x2c)) = *param_1;
  (*(int *)(gen_frame + 0x14)) = iVar5 * 100 + iVar1;
  if ((*(int *)(gen_frame + 0x2c)) == 0) {
    (*(int *)(gen_frame + 0x2c)) = -1;
  }
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),4);
  uVar3 = F_0042a990(param_1 + 1);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),6);
  (*(uint *)(gen_frame + 0x34)) = uVar3;
  bVar2 = F_0043b930(param_1);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x38)),2);
  (*(byte *)(gen_frame + 0x3c)) = bVar2;
  F_00772ea0(this,param_1,((undefined4 *)(gen_frame + 0x0)));
  piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4,*(undefined4 *)((int)this + 8),9,((undefined4 *)(gen_frame + 0x0)));
  this_00 = &(*(uint *)(gen_frame + 0x48));
  iVar5 = 8;
  do {
    this_00 = this_00 + -2;
    uVar3 = F_005a2670(this_00);
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar3;
}

/* ref: FUN_007d7e70 */
uint F_007d7e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d7e70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int * piVar2;
  undefined * this_00;
  undefined4 uVar3;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  if ((*(int *)(uVar1 + 0x48) != 0) &&
     (piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(uVar1 + 0x48) + 0xc))), piVar2 != (int *)0x0)) {
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2,param_1)));
    if (piVar2 != (int *)0x0) {
      uVar3 = 5;
      this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2)));
      uVar1 = F_00cb0950(this_00,uVar3);
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_007d8100 */
uint F_007d8100(unsigned int gen_a0)
{
  GEN_ENTER(0x7d8100u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  F_0043b900(in_ecx + 0xc);
  *(undefined1 *)(in_ecx + 0xa1c) = 0;
  *(undefined4 *)(in_ecx + 0xbe38) = 1;
  puVar2 = (undefined4 *)(in_ecx + 0x14a8);
  iVar3 = 0x11;
  do {
    *(undefined1 *)(puVar2 + 3) = 0;
    *puVar2 = 9;
    puVar2[1] = 0;
    puVar2[2] = 0;
    F_0043b900(puVar2 + -0x2a2);
    uVar1 = F_0043b900(puVar2 + -0x151);
    puVar2 = puVar2 + 0x2a6;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return uVar1;
}

/* ref: FUN_007d8170 */
uint F_007d8170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7d8170u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  if (0x10 < *(uint *)((int)this + 0xbe38)) {
    iVar2 = 0xf;
    this_00 = (undefined *)((int)this + 0x14b8);
    do {
      F_0090d740(this_00,(undefined *)((int)this_00 + 0xa98));
      iVar2 = iVar2 + -1;
      this_00 = (undefined *)((int)this_00 + 0xa98);
    } while (iVar2 != 0);
    *(undefined4 *)((int)this + 0xbe38) = 0x10;
  }
  puVar4 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0xbe38) * 0xa98 + 0xa20 + (int)this)));
  *(int *)((int)this + 0xbe38) = *(int *)((int)this + 0xbe38) + 1;
  puVar4[0x2a2] = param_1;
  *(undefined1 *)(puVar4 + 0x2a5) = 1;
  puVar4[0x2a3] = *(undefined4 *)((int)this + 0x554);
  puVar4[0x2a4] = *(undefined4 *)((int)this + 0x558);
  *puVar4 = *param_2;
  F_0042ccf0(puVar4 + 1,param_2 + 1);
  iVar2 = (int)param_2 - (int)puVar4;
  puVar3 = puVar4 + 0x16;
  param_2 = (undefined4 *)0xf;
  do {
    F_0042ccf0(puVar3,iVar2 + (int)puVar3);
    puVar3 = puVar3 + 0x15;
    param_2 = (undefined4 *)((int)param_2 + -1);
  } while (param_2 != (undefined4 *)0x0);
  if ((char)param_3 == '\0') {
    F_0043b900(puVar4 + 0x151);
  }
  else {
    puVar4[0x151] = *(undefined4 *)((int)this + 0xc);
    F_0042ccf0(puVar4 + 0x152,(int)this + 0x10);
    puVar4 = puVar4 + 0x167;
    iVar2 = (int)this + 100;
    param_3 = 0xf;
    do {
      F_0042ccf0(puVar4,iVar2);
      iVar2 = iVar2 + 0x54;
      puVar4 = puVar4 + 0x15;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  uVar1 = *(uint *)((int)this + 0xbe38);
  if (uVar1 < 0x11) {
    puVar3 = (undefined4 *)(uVar1 * 0xa98 + 0x14a8 + (int)this);
    iVar2 = 0x11 - uVar1;
    do {
      *(undefined1 *)(puVar3 + 3) = 0;
      *puVar3 = 9;
      puVar3[1] = 0;
      puVar3[2] = 0;
      F_0043b900(puVar3 + -0x2a2);
      uVar1 = F_0043b900(puVar3 + -0x151);
      puVar3 = puVar3 + 0x2a6;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentMacro::vf13 */
unsigned int F_007d82e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d82e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 == 3) {
    F_007d8100(in_ecx);
  }
  return 0;
}

/* ref: FUN_007d8300 */
uint F_007d8300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d8300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint local_8;
  
  uVar2 = 0;
  local_8 = 0;
  if (*(char *)((int)this + 0x33d4) != '\0') {
    iVar3 = (int)this + 0x438;
    do {
      if ((0xff < *(int *)((int)this + 0x33c8)) || (0xf < uVar2)) break;
      if (*(short *)(iVar3 + 0x18) != 0) {
        F_00915a30(param_1,*(int *)((int)this + 0x33c8),iVar3);
        *(int *)((int)this + 0x33c8) = *(int *)((int)this + 0x33c8) + 1;
        uVar2 = uVar2 + 1;
        *(int *)((int)this + 0x33c4) = *(int *)((int)this + 0x33c4) + 1;
      }
      local_8 = local_8 + 1;
      iVar3 = iVar3 + 0x74;
    } while (local_8 < *(byte *)((int)this + 0x33d4));
  }
  F_0042e430((undefined *)((int)this + 0x40f4),&REFG(undefined1, 0x107fc63));
  *(undefined4 *)((int)this + 0x4148) = 0;
  *(undefined4 *)((int)this + 0x414c) = 0;
  *(undefined4 *)((int)this + 0x4150) = 0;
  *(undefined4 *)((int)this + 0x4154) = 0;
  *(undefined4 *)((int)this + 0x4158) = 0;
  uVar1 = F_0042a990((int)this + 0x40f4);
  *(uint *)((int)this + 0x4158) = uVar1;
  *(undefined1 *)((int)this + 0x415c) = 0;
  uVar1 = uVar2;
  while ((uVar2 < 0x10 && (*(int *)((int)this + 0x33c8) < 0x100))) {
    F_00915a30(param_1,*(int *)((int)this + 0x33c8),(int)this + 0x4148);
    *(int *)((int)this + 0x33c8) = *(int *)((int)this + 0x33c8) + 1;
    *(int *)((int)this + 0x33c4) = *(int *)((int)this + 0x33c4) + 1;
    uVar2 = uVar2 + 1;
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}

/* ref: FUN_007d8410 */
uint F_007d8410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d8410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 uVar5;
  uint local_c;
  uint local_8;
  
  uVar3 = 0;
  local_8 = 0;
  local_c = 0;
  if (*(char *)((int)this + 0x33d4) == '\0') {
    return 0;
  }
  puVar4 = (undefined4 *)((int)this + 0x438);
  do {
    iVar1 = *(int *)((int)this + 0x33c8);
    if (0xff < iVar1) {
      return uVar3;
    }
    if (*(short *)(puVar4 + 6) == 0) {
      if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + iVar1 * 4))) == 0) {
        uVar5 = 0;
        uVar3 = F_00404270();
        puVar2 = (undefined4 *)F_00406bd0(0x14,0,uVar3,uVar5);
        uVar3 = local_8;
        if (puVar2 == (undefined4 *)0x0) {
          *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + iVar1 * 4))) = 0;
        }
        else {
          *puVar2 = *puVar4;
          puVar2[1] = puVar4[1];
          puVar2[2] = puVar4[2];
          puVar2[3] = puVar4[3];
          puVar2[4] = puVar4[4];
          *((undefined4 * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x20) + iVar1 * 4))) = puVar2;
        }
      }
      else {
        puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x20) + iVar1 * 4)));
        *puVar2 = *puVar4;
        puVar2[1] = puVar4[1];
        puVar2[2] = puVar4[2];
        puVar2[3] = puVar4[3];
        puVar2[4] = puVar4[4];
      }
      *(int *)((int)this + 0x33c8) = *(int *)((int)this + 0x33c8) + 1;
      uVar3 = uVar3 + 1;
      *(int *)((int)this + 0x33c0) = *(int *)((int)this + 0x33c0) + 1;
      local_8 = uVar3;
    }
    local_c = local_c + 1;
    puVar4 = puVar4 + 0x1d;
  } while (local_c < *(byte *)((int)this + 0x33d4));
  return uVar3;
}

/* ref: FUN_007d8520 */
byte F_007d8520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d8520u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  double dVar1;
  float * pfVar2;
  
  if (REFG(undefined4, 0x1379694) == (undefined *)0x0) {
    return 0;
  }
  pfVar2 = (float *)F_00a5feb0(REFG(undefined4, 0x1379694));
  (*(float *)(gen_frame + 0x18)) = *pfVar2;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x80;
  if ((*(float *)(gen_frame + 0x18)) < 0.0) {
    dVar1 = (double)(*(float *)(gen_frame + 0x18)) - REFG(double, 0x1088108);
  }
  else {
    dVar1 = (double)(*(float *)(gen_frame + 0x18)) + REFG(double, 0x1088108);
  }
  (*(float *)(gen_frame + 0x18)) = pfVar2[2];
  (*(undefined2 *)(gen_frame + 0x8)) = (short)(int)dVar1;
  if ((*(float *)(gen_frame + 0x18)) < 0.0) {
    dVar1 = (double)(*(float *)(gen_frame + 0x18)) - REFG(double, 0x1088108);
  }
  else {
    dVar1 = REFG(double, 0x1088108) + (double)(*(float *)(gen_frame + 0x18));
  }
  (*(undefined2 *)(gen_frame + 0xa)) = (short)(int)dVar1;
  (*(undefined4 *)(gen_frame + 0xc)) = 0xec1b;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = &REFG(undefined, 0x10be002);
  F_00915a30(param_1,param_2,&(*(undefined4 *)(gen_frame + 0x4)));
  return 1;
}

/* ref: FUN_007d85d0 */
uint F_007d85d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d85d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  short * in_EAX;
  uint uVar1;
  short sVar2;
  
  uVar1 = 0;
  if (*(char *)((int)this + 0x33d5) != '\0') {
    in_EAX = (short *)((int)this + 0x2890);
    while( true ) {
      if (*(int *)(in_EAX + 2) == 1) {
        sVar2 = *in_EAX;
      }
      else {
        sVar2 = 0;
      }
      if (sVar2 == (short)param_1) break;
      uVar1 = uVar1 + 1;
      in_EAX = in_EAX + 0x3a;
      if (*(byte *)((int)this + 0x33d5) <= uVar1) {
        return (uint)in_EAX;
      }
    }
    *(undefined1 *)((int)this + 0x33d5) = 0;
  }
  return (uint)in_EAX;
}

/* ref: FUN_007d8630 */
unsigned int F_007d8630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d8630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  short * psVar1;
  uint uVar2;
  short sVar3;
  
  uVar2 = 0;
  if (*(char *)((int)this + 0x33d5) != '\0') {
    psVar1 = (short *)((int)this + 0x2890);
    while( true ) {
      if (*(int *)(psVar1 + 2) == 2) {
        sVar3 = *psVar1;
      }
      else {
        sVar3 = 0;
      }
      if (sVar3 == (short)param_1) break;
      uVar2 = uVar2 + 1;
      psVar1 = psVar1 + 0x3a;
      if (*(byte *)((int)this + 0x33d5) <= uVar2) {
        return 0;
      }
    }
    *(undefined1 *)((int)this + 0x33d5) = 0;
  }
  return 0;
}

/* ref: FUN_007d8690 */
uint F_007d8690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d8690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 uVar5;
  uint local_c;
  uint local_8;
  
  local_8 = 0;
  local_c = 0;
  if (*(char *)((int)this + 0x33d7) == '\0') {
    return 0;
  }
  puVar4 = (undefined4 *)((int)this + 0x2d00);
  do {
    iVar1 = *(int *)((int)this + 0x33c8);
    if (0xff < iVar1) {
      return local_8;
    }
    if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + iVar1 * 4))) == 0) {
      uVar5 = 0;
      uVar2 = F_00404270();
      puVar3 = (undefined4 *)F_00406bd0(0x14,0,uVar2,uVar5);
      if (puVar3 == (undefined4 *)0x0) {
        *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + iVar1 * 4))) = 0;
      }
      else {
        *puVar3 = *puVar4;
        puVar3[1] = puVar4[1];
        puVar3[2] = puVar4[2];
        puVar3[3] = puVar4[3];
        puVar3[4] = puVar4[4];
        *((undefined4 * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x20) + iVar1 * 4))) = puVar3;
      }
    }
    else {
      puVar3 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x20) + iVar1 * 4)));
      *puVar3 = *puVar4;
      puVar3[1] = puVar4[1];
      puVar3[2] = puVar4[2];
      puVar3[3] = puVar4[3];
      puVar3[4] = puVar4[4];
    }
    *(int *)((int)this + 0x33c8) = *(int *)((int)this + 0x33c8) + 1;
    local_c = local_c + 1;
    local_8 = local_8 + 1;
    puVar4 = puVar4 + 0x1f;
  } while (local_c < *(byte *)((int)this + 0x33d7));
  return local_8;
}

/* ref: FUN_007d8790 */
uint F_007d8790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d8790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  uVar3 = 0;
  (*(uint *)(gen_frame + 0x28)) = 0;
  if ((*(int *)((int)this + 0x3398) == *(int *)((int)this + 0x3388)) &&
     ((*(int *)(gen_frame + 0x1c)) = REFG(int, 0x1379694), REFG(int, 0x1379694) != 0)) {
    (*(uint *)(gen_frame + 0x18)) = (uint)REFG(undefined1, 0x1338ad4);
    if (1 < (*(uint *)(gen_frame + 0x18))) {
      if (REFG(int, 0x14a73a0) == 0) {
        (*(undefined4 *)(gen_frame + 0x20)) = 0;
      }
      else {
        (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)((int)this + 0x339c);
      }
      (*(int *)(gen_frame + 0x24)) = 0;
      if ((*(uint *)(gen_frame + 0x18)) != 0) {
        do {
          piVar2 = (int *)F_00ae0850(&REFG(undefined, 0x1336e40),(*(int *)(gen_frame + 0x24)));
          if (((piVar2 != (int *)0x0) && (*piVar2 != *(int *)((*(int *)(gen_frame + 0x1c)) + 0x74))) &&
             ((char)piVar2[0x78] != '\0')) {
            bVar1 = F_00773f00(this,(*(undefined4 *)(gen_frame + 0x20)),*piVar2,0,piVar2 + 0x7c);
            uVar3 = (*(uint *)(gen_frame + 0x28));
            if (bVar1 != 0) {
              if (0xff < *(int *)((int)this + 0x33c8)) {
                return (*(uint *)(gen_frame + 0x28));
              }
              (*(undefined4 *)(gen_frame + 0x4)) = 9;
              uVar3 = F_0046e680(GEN_TOF(gen_bits2f(piVar2[0x7c])));
              (*(undefined2 *)(gen_frame + 0x8)) = (short)uVar3;
              uVar3 = F_0046e680(GEN_TOF(gen_bits2f(piVar2[0x7e])));
              (*(undefined2 *)(gen_frame + 0xa)) = (short)uVar3;
              (*(undefined4 *)(gen_frame + 0xc)) = 0xec05;
              (*(undefined4 *)(gen_frame + 0x10)) = 1;
              (*(int * PTR32 *)(gen_frame + 0x14)) = piVar2 + 4;
              F_00915a30(param_1,*(undefined4 *)((int)this + 0x33c8),&(*(undefined4 *)(gen_frame + 0x4)));
              (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) + 1;
              *(int *)((int)this + 0x33c8) = *(int *)((int)this + 0x33c8) + 1;
              uVar3 = (*(uint *)(gen_frame + 0x28));
            }
          }
          (*(int *)(gen_frame + 0x24)) = (*(int *)(gen_frame + 0x24)) + 1;
        } while ((*(int *)(gen_frame + 0x24)) < (int)(*(uint *)(gen_frame + 0x18)));
        return uVar3;
      }
    }
  }
  return 0;
}

/* ref: FUN_007d88e0 */
uint F_007d88e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d88e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  byte bVar2;
  uint uVar3;
  int * this_00;
  float * pfVar4;
  
  if ((*(int *)((int)this + 0x3398) == *(int *)((int)this + 0x3388)) && (REFG(int, 0x1379694) != 0)) {
    (*(uint *)(gen_frame + 0x28)) = 0;
    (*(uint *)(gen_frame + 0x1c)) = (uint)REFG(undefined1, 0x1338ad4);
    if (REFG(int, 0x14a73a0) == 0) {
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
    }
    else {
      (*(undefined4 *)(gen_frame + 0x24)) = *(undefined4 *)((int)this + 0x339c);
    }
    (*(int *)(gen_frame + 0x20)) = 0;
    if (REFG(undefined1, 0x1338ad4) != 0) {
      do {
        uVar3 = F_00ae0850(&REFG(undefined, 0x1336e40),(*(int *)(gen_frame + 0x20)));
        if ((uVar3 != 0) &&
           (this_00 = (int *)F_00a64450(&REFG(undefined, 0x14a9a18),*(undefined4 *)(uVar3 + 0x208)),
           this_00 != (int *)0x0)) {
          iVar1 = this_00[0x1d];
          uVar3 = F_00a5feb0(this_00);
          bVar2 = F_00773f00(this,(*(undefined4 *)(gen_frame + 0x24)),iVar1,0,uVar3);
          if (bVar2 != 0) {
            if (0xff < *(int *)((int)this + 0x33c8)) {
              return (*(uint *)(gen_frame + 0x28));
            }
            (*(undefined4 *)(gen_frame + 0x8)) = 9;
            pfVar4 = (float *)F_00a5feb0(this_00);
            uVar3 = F_0046e680(*pfVar4);
            (*(undefined2 *)(gen_frame + 0xc)) = (short)uVar3;
            uVar3 = F_00a5feb0(this_00);
            uVar3 = F_0046e680(*(float *)(uVar3 + 8));
            (*(undefined2 *)(gen_frame + 0xe)) = (short)uVar3;
            (*(undefined4 *)(gen_frame + 0x10)) = 0xec05;
            (*(undefined4 *)(gen_frame + 0x14)) = 1;
            (*(uint *)(gen_frame + 0x18)) = ((code *)*(gen_code32 *)(*this_00 + 0xc))(this_00);
            F_00915a30(param_1,*(undefined4 *)((int)this + 0x33c8),&(*(undefined4 *)(gen_frame + 0x8)));
            (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) + 1;
            *(int *)((int)this + 0x33c8) = *(int *)((int)this + 0x33c8) + 1;
          }
        }
        (*(int *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0x20)) + 1;
      } while ((*(int *)(gen_frame + 0x20)) < (int)(*(uint *)(gen_frame + 0x1c)));
    }
    return (*(uint *)(gen_frame + 0x28));
  }
  return 0;
}

/* ref: FUN_007d8a40 */
uint F_007d8a40(unsigned int gen_a0)
{
  GEN_ENTER(0x7d8a40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if ((*(uint *)((int)this + 0x33b0) >> 0xd & 1) != 0) {
    uVar2 = 9;
    *(uint *)((int)this + 0x33b0) = *(uint *)((int)this + 0x33b0) & 0xffffdfff;
  }
  if (*(char *)((int)this + 0x33e0) == '\0') {
    if (*(char *)((int)this + 0x33e2) != '\0') {
      uVar1 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0x197);
      if (*(int *)(uVar1 + 0x14) == 1) {
        uVar2 = uVar2 | 1;
        *(undefined1 *)((int)this + 0x33e2) = 0;
      }
    }
  }
  else {
    uVar2 = uVar2 | 2;
  }
  if (*(char *)((int)this + 0x33e1) != '\0') {
    uVar2 = uVar2 | 4;
    *(undefined1 *)((int)this + 0x33e1) = 0;
  }
  return uVar2;
}

/* ref: FUN_007d8ac0 */
unsigned int F_007d8ac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d8ac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0xffff;
  iVar2 = 0xffff;
  if ((*(uint *)((int)this + 0x33b0) >> 9 & 1) != 0) {
    iVar3 = 0;
    iVar2 = 0;
    *(uint *)((int)this + 0x33b0) = *(uint *)((int)this + 0x33b0) & 0xfffffdff;
  }
  if ((*(uint *)((int)this + 0x33b0) >> 10 & 1) != 0) {
    uVar1 = F_00ab1ea0(*(undefined4 *)((int)this + 0x33bc));
    if (uVar1 != 0) {
      iVar3 = (int)(((float10)GEN_TOD((*(short *)(uVar1 + 0x12) + -0x400))) /
                   (float10)*(float *)((int)this + 0x337c));
      iVar2 = (int)(((float10)GEN_TOD((*(short *)(uVar1 + 0x14) + -0x400))) /
                   (float10)*(float *)((int)this + 0x337c));
    }
    *(uint *)((int)this + 0x33b0) = *(uint *)((int)this + 0x33b0) & 0xfffffbff;
    *(undefined4 *)((int)this + 0x33bc) = 0;
  }
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x1c))) != iVar3) {
    *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x1c))) = iVar3;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x20))) != iVar2) {
    *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x20))) = iVar2;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentMap::vf3 */
uint F_007d8ba0(unsigned int gen_a0)
{
  GEN_ENTER(0x7d8ba0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  *(undefined2 *)(this + 0x33d5) = 0;
  this[0x33d7] = (undefined1)0x0;
  *(undefined4 *)(this + 0x33a8) = 0;
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined4 *)(this + 0x3384) = 0;
  *(undefined4 *)(this + 0x339c) = 0;
  *(undefined4 *)(this + 0x3398) = 0;
  *(undefined4 *)(this + 0x33a0) = 0;
  F_0042e430(this + 0xf0,&REFG(undefined, 0x10be015));
  *(undefined4 *)(this + 0x337c) = REFG(float, 0x1094884);
  F_0042e430(this + 0x144,&REFG(undefined, 0x10be016));
  *(undefined4 *)(this + 0x33a4) = 0;
  *(undefined4 *)(this + 0x33a8) = 0;
  *(undefined4 *)(this + 0x33b4) = 0;
  *(undefined4 *)(this + 0x33b0) = 0;
  *(undefined2 *)(this + 0x33d5) = 0;
  this[0x33d4] = (undefined1)0x0;
  this[0x33d7] = (undefined1)0x0;
  *(undefined2 *)(this + 0x33de) = 0;
  this[0x33d9] = (undefined1)0x0;
  this[0x33e3] = (undefined1)0x0;
  F_00773d70(this);
  F_0042aca0(this + 0x33c);
  uVar2 = F_0042aca0(this + 0x390);
  return uVar2;
}

/* ref: FUN_007d8c80 */
ushort F_007d8c80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x7d8c80u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  undefined * this_00;
  byte bVar1;
  ushort uVar2;
  undefined4 in_EAX = 0;
  uint uVar3;
  
  bVar1 = *(byte *)((int)this + 0x33d4);
  uVar2 = (ushort)CONCAT31((int3)((uint)in_EAX >> 8),bVar1);
  if (bVar1 < 0x50) {
    this_00 = (undefined *)((uint)bVar1 * 0x74 + 0x3e4 + (int)this);
    *(byte *)((int)this + 0x33d4) = bVar1 + 1;
    F_0042e430(this_00,&REFG(undefined1, 0x107fc63));
    *(undefined4 *)((int)this_00 + 0x54) = 0;
    *(undefined4 *)((int)this_00 + 0x58) = 0;
    *(undefined4 *)((int)this_00 + 0x5c) = 0;
    *(undefined4 *)((int)this_00 + 0x60) = 0;
    *(undefined4 *)((int)this_00 + 100) = 0;
    uVar3 = F_0042a990(this_00);
    *(uint *)((int)this_00 + 100) = uVar3;
    *(undefined1 *)((int)this_00 + 0x68) = 0;
    *(undefined4 *)((int)this_00 + 0x6c) = 0;
    *(undefined4 *)((int)this_00 + 0x70) = 0;
    F_0042ccf0(this_00,param_6);
    *(short *)((int)this_00 + 0x5a) = (short)param_3 + -0x400;
    *(short *)((int)this_00 + 0x58) = (short)param_2 + -0x400;
    *(undefined4 *)((int)this_00 + 0x60) = param_5;
    *(undefined4 *)((int)this_00 + 0x54) = param_1;
    *(undefined4 *)((int)this_00 + 0x5c) = param_4;
    uVar3 = F_0042a990(this_00);
    *(uint *)((int)this_00 + 100) = uVar3;
    *(ushort *)((int)this_00 + 0x6c) = (ushort)(byte)param_7;
    *(ushort *)((int)this_00 + 0x6e) = (ushort)param_8;
    *(undefined4 *)((int)this_00 + 0x70) = param_9;
    uVar2 = (ushort)param_8;
  }
  return uVar2;
}

/* ref: FUN_007d8d40 */
uint F_007d8d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d8d40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  char cVar1;
  undefined4 in_EAX = 0;
  uint uVar2;
  
  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),(char)param_1);
  cVar1 = *(char *)((int)this + 0x33da);
  *(char *)((int)this + 0x33da) = (char)param_1;
  if (cVar1 != (char)param_1) {
    uVar2 = F_00774820(this);
  }
  return uVar2;
}

/* ref: FUN_007d8d70 */
byte F_007d8d70(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x7d8d70u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  byte bVar1;
  
  if ((*param_1 == 0xebf9) &&
     ((!GEN_ISNAN(param_3) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(param_3 <= *(float *)&REFG(undefined, 0x1088114)))) {
    bVar1 = F_007743e0(param_1,param_2,param_3,0);
    return bVar1;
  }
  return 0;
}

/* ref: FUN_007d8db0 */
byte F_007d8db0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x7d8db0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  byte bVar1;
  
  if ((*param_1 == 0xec69) &&
     ((!GEN_ISNAN(param_3) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(param_3 <= *(float *)&REFG(undefined, 0x1088114)))) {
    bVar1 = F_007743e0(param_1,param_2,param_3,1);
    return bVar1;
  }
  return 0;
}

/* ref: FUN_007d8df0 */
uint F_007d8df0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7d8df0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  undefined3 extraout_var = 0;
  undefined * pvVar2;
  uint in_ecx;
  undefined3 extraout_var_00 = 0;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar3 = param_3;
  if (*param_2 != 0) {
    bVar1 = F_00b070e0();
    uVar3 = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      uVar3 = (uint)*param_2;
      pvVar2 = (undefined *)F_00b070f0();
      in_ecx = F_00b084c0(pvVar2,uVar3);
      uVar3 = 0;
      if (in_ecx != 0) {
        uVar3 = (uint)*param_2;
        pvVar2 = (undefined *)F_00b070f0();
        bVar1 = F_00b08860(pvVar2,uVar3);
        uVar3 = (uint)bVar1;
        uVar6 = 0x23;
        pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
        uVar3 = F_00461bb0(pvVar2,uVar6,uVar3);
        uVar3 = F_0042ce40(((undefined1 *)(gen_frame + 0x4)),"%s %s",uVar3,param_3);
        F_0042ccf0(param_1,uVar3);
        F_0042c880(((undefined1 *)(gen_frame + 0x4)));
        bVar1 = F_00b07f50(in_ecx);
        uVar6 = CONCAT31(extraout_var_00,bVar1);
        if (bVar1 != 0) {
          uVar3 = (uint)*param_2;
          pvVar2 = (undefined *)F_00b070f0();
          uVar5 = F_00b08810(pvVar2,uVar3);
          uVar3 = F_00476000();
          iVar4 = (int)uVar5 - uVar3;
          uVar6 = 0x21;
          uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4));
          uVar3 = F_00462440(uVar3,param_1,iVar4,uVar6);
          uVar3 = F_0042a990(uVar3);
          uVar3 = F_0042ce40(((undefined1 *)(gen_frame + 0x4)),(*(undefined * PTR32 (*)[1])REFP(0x10c01f4)),uVar3);
          F_0042e360(param_1,uVar3);
          uVar5 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
          uVar6 = (undefined4)uVar5;
        }
        F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
        return CONCAT31((int3)((uint)uVar6 >> 8),1);
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar3 & 0xffffff00;
}

/* ref: FUN_007d8f20 */
uint F_007d8f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d8f20u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint local_c;
  uint local_8;
  
  iVar4 = 0;
  if (param_2 != 0) {
    local_c = 0;
    local_8 = 0;
    do {
      uVar3 = 1 << ((byte)iVar4 & 0x1f);
      if ((param_2 & uVar3) != 0) {
        bVar1 = F_00ab5430(&REFG(undefined, 0x14b5268),param_1 & 0xffff,iVar4);
        if (bVar1 != 0) {
          local_c = local_c | uVar3;
          local_8 = local_8 + 1;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x20);
    uVar2 = 0;
    uVar3 = 1;
    iVar4 = 0x20;
    do {
      if ((param_2 & uVar3) != 0) {
        uVar2 = uVar2 + 1;
      }
      uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    if (local_8 < uVar2) {
      return local_c;
    }
  }
  return 0xffffffff;
}

/* ref: FUN_007d8fa0 */
uint F_007d8fa0(unsigned int gen_a0)
{
  GEN_ENTER(0x7d8fa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x339c) = *(undefined4 *)((int)this + 0x338c);
  uVar1 = F_00ab1e70(*(undefined4 *)((int)this + 0x338c));
  if (uVar1 != 0) {
    *(uint *)((int)this + 0x33ac) = (uint)*(byte *)(uVar1 + 0x20);
  }
  *(undefined4 *)((int)this + 0x3398) = *(undefined4 *)((int)this + 0x3388);
  *(undefined4 *)((int)this + 0x33a0) = *(undefined4 *)((int)this + 0x3390);
  F_0042ccf0((undefined *)((int)this + 0xf0),(int)this + 0x9c);
  *(undefined4 *)((int)this + 0x337c) = *(undefined4 *)((int)this + 0x3380);
  uVar1 = F_0042ccf0((undefined *)((int)this + 0x144),(int)this + 0x198);
  *(undefined4 *)((int)this + 0x33a4) = *(undefined4 *)((int)this + 0x3394);
  return uVar1;
}

/* ref: FUN_007d9020 */
unsigned int F_007d9020(unsigned int gen_a0)
{
  GEN_ENTER(0x7d9020u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (((REFG(int, 0x1370b90) != 0) && (param_1 != 0)) && (*(int *)(param_1 + 0x4078) != -1)) {
    *(undefined1 *)(param_1 + 0x33e1) = 1;
  }
  return 0;
}

/* ref: FUN_007d9050 */
uint F_007d9050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d9050u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d4374));
  return (uint)in_ecx;
}

/* ref: Client::UI2::Agent::AgentMarker::vf1 */
uint F_007d9070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7d9070u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint * puVar1;
  undefined * this_00;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  
  if ((*param_2 & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_2 + 4);
  }
  switch((unsigned int)(uintptr_t)(uVar2)) {
  case 0: ;
    break;
  case 1: ;
    if ((param_2[0x18] & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_2 + 0x1c);
    }
    puVar1 = (uint *)F_00ab28d0(uVar2);
    if (puVar1 != (uint *)0x0) {
      iVar3 = (*puVar1 & 0xffffff) + (int)puVar1;
      uVar4 = puVar1[1];
      uVar5 = 0x800;
      this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x54))))(*(int * PTR32 *)(this + 4))));
      F_00434720(this_00,uVar4,iVar3,uVar5,uVar2);
    }
  default: ;
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 2;
    return (uint)param_1;
  case 0xfffffffe: ;
  case 0xffffffff: ;
    *(undefined4 *)(this + 8) = 0;
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = 2;
    return (uint)param_1;
  }
  if ((param_2[0x18] & 0xf) != 0) {
    F_00774ac0(*(undefined4 *)(param_2 + 0x1c));
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 2;
    return (uint)param_1;
  }
  F_00774ac0(0);
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: Client::UI2::Agent::AgentMonsterNote::vf11 */
byte F_007d9160(unsigned int gen_a0)
{
  GEN_ENTER(0x7d9160u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
  if ((*(int *)(uVar1 + 0x18) != 0) &&
     ((~(byte)((uint)**((undefined4 * PTR32 *)GEN_TOP((*(int *)(uVar1 + 0x18) + 0xe4))) >> 8) & 1) != 0)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_007d9190 */
uint F_007d9190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d9190u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined1 uVar1;
  undefined4 in_EAX = 0;
  uint uVar2;
  int iVar3;
  
  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),(char)(*(undefined4 *)&gen_args[1]));
  *((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x21))) = (char)(*(undefined4 *)&gen_args[1]);
  do {
    if ((char)(*(undefined4 *)&gen_args[1]) < '\b') {
      *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) =
           *(undefined1 *)(&REFG(undefined4, 0x10c0218) + *((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x21))));
      *((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x22))) = (char)uVar2;
      return uVar2;
    }
    *((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = (char)(*(undefined4 *)&gen_args[2]);
    uVar2 = F_00ab3960((int)(char)(*(undefined4 *)&gen_args[2]));
    if (uVar2 != 0) {
      uVar1 = *(undefined1 *)(uVar2 + 0x14);
      *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x22))) = uVar1;
      return CONCAT31((int3)(uVar2 >> 8),uVar1);
    }
    uVar2 = F_00435250((uint)REFG(undefined1, 0x14ab0d4),0);
    iVar3 = 0;
    do {
      if ((&REFG(undefined4, 0x10c0218))[iVar3] == uVar2) {
        uVar2 = CONCAT31((int3)(uVar2 >> 8),(char)iVar3);
        if (-1 < (char)iVar3) goto LAB_007d91f8;
        break;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 8);
    uVar2 = F_00774d60((uint)REFG(undefined1, 0x14ab14e),0);
LAB_007d91f8: ;
    (*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[2]) + 0)) = '\0';
    (*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[1]) + 0)) = (char)uVar2;
    *((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x21))) = (char)(*(undefined4 *)&gen_args[1]);
  } while( true );
}

/* ref: FUN_007d9230 */
uint F_007d9230(unsigned int gen_a0)
{
  GEN_ENTER(0x7d9230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int iVar2;
  char cVar3;
  
  cVar3 = *(char *)((int)this + 0x21);
  if ('\a' < cVar3) {
    cVar3 = '\x01';
    (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),1);
    (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),REFG(undefined1, 0x14ab29a));
    if (REFG(undefined1, 0x14ab29a) != 0) {
      iVar2 = 0;
      do {
        if (*(uint *)(&REFG(undefined1, 0x10c0244) + iVar2 * 4) == (uint)REFG(undefined1, 0x14ab29a)) {
          cVar3 = (char)iVar2 + '\b';
          (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),cVar3);
          break;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 3);
    }
    F_007d9190(this,(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x4)));
    uVar1 = (('\a' < cVar3) - 1 & 0xfff0e4d0) + 1000000;
    *(uint *)((int)this + 0x1c) = uVar1;
    return uVar1;
  }
  uVar1 = F_00435250((uint)REFG(undefined1, 0x14ab0d4),0);
  if ((&REFG(undefined4, 0x10c0218))[*(char *)((int)this + 0x21)] != uVar1) {
    iVar2 = 0;
    do {
      if ((&REFG(undefined4, 0x10c0218))[iVar2] == uVar1) {
        cVar3 = (char)iVar2;
        if (-1 < cVar3) goto LAB_007d928f;
        break;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 8);
    uVar1 = F_00774d60((uint)REFG(undefined1, 0x14ab14e),0);
    cVar3 = (char)uVar1;
  }
LAB_007d928f: ;
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),cVar3);
  uVar1 = F_007d9190(this,(*(undefined4 *)(gen_frame + 0x8)),0);
  *(undefined4 *)((int)this + 0x1c) = 10000;
  return uVar1;
}

/* ref: FUN_007d9310 */
uint F_007d9310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d9310u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  in_ecx[3] = (*(undefined * PTR32 (*)[2])REFP(0x10b8168));
  in_ecx[4] = (*(undefined * PTR32 (*)[2])REFP(0x10b815c));
  *in_ecx = (*(undefined * PTR32 (*)[17])REFP(0x10d43d4));
  in_ecx[3] = (*(undefined * PTR32 (*)[2])REFP(0x10d43c4));
  in_ecx[4] = (*(undefined * PTR32 (*)[2])REFP(0x10d43b8));
  in_ecx[5] = 0;
  in_ecx[6] = 4;
  F_0042b630(in_ecx + 7);
  F_0042b630(in_ecx + 0x1c);
  in_ecx[0x31] = 0;
  *(undefined1 *)(in_ecx + 0x32) = 0xff;
  *(undefined2 *)((int)in_ecx + 0xca) = 0;
  in_ecx[0x33] = 0;
  puVar1 = in_ecx + 0x98;
  param_2 = 4;
  do {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
    F_0042b630(puVar1 + 1);
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    *(undefined2 *)(puVar1 + 0x19) = 0;
    *(undefined1 *)((int)puVar1 + 0x66) = 0;
    puVar1 = puVar1 + 0x1a;
    param_2 = param_2 + -1;
  } while (-1 < param_2);
  *(undefined1 *)(in_ecx + 0x11a) = 0;
  return (uint)in_ecx;
}

/* ref: Client::UI2::Agent::AgentNpcTrade::vf3 */
uint F_007d93d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7d93d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_0042aca0(this + 0x1c);
  uVar2 = F_0042aca0(this + 0x70);
  iVar1 = *(int *)(this + 0x14);
  if (iVar1 != 0) {
    *(undefined4 *)(this + 0x14) = 0;
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,iVar1,0);
  }
  *(undefined4 *)(this + 0xcc) = 0;
  if (*(int *)(this + 8) != 0) {
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return uVar2;
}

/* ref: FUN_007d9440 */
uint F_007d9440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d9440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = F_00ab24a0(param_1);
  if ((uVar2 != 0) && (*(byte *)(uVar2 + 0xa6) != 0)) {
    uVar2 = F_00ab25a0((uint)*(byte *)(uVar2 + 0xa6));
    if (uVar2 != 0) {
      iVar4 = 0;
      do {
        if ('\0' < *(char *)(uVar2 + 4 + iVar4)) goto LAB_007d9484;
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0xe);
    }
    iVar4 = -1;
LAB_007d9484: ;
    uVar2 = F_00434e40(iVar4);
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
    if (*(undefined * PTR32 *)(uVar3 + 0x130) != (undefined *)0x0) {
      bVar1 = F_0076a850(*(undefined * PTR32 *)(uVar3 + 0x130),param_1,uVar2);
      if (bVar1 != 0) {
        return uVar2;
      }
    }
  }
  return 0xffffffff;
}

/* ref: FUN_007d94d0 */
uint F_007d94d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d94d0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x260];
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  uint uVar6;
  undefined4 * this_01;
  int * piVar7;
  int iVar8;
  ulonglong uVar9;
  
  this_00 = (*(undefined * PTR32 *)&gen_args[2]);
  iVar8 = (*(int *)&gen_args[1]);
  (*(uint *)(gen_frame + 0x258)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x25c);
  uVar2 = F_00b9f960(&REFG(undefined, 0x14b0f2c));
  F_009222f0(((byte *)(gen_frame + 0x10)),uVar2);
  uVar2 = (uint)((byte *)(gen_frame + 0x10))[0];
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc4))) = uVar2;
  if (*((uint *)GEN_TOP((*(int *)(iVar8 + 0x20) + 0xdc))) != uVar2) {
    *((uint *)GEN_TOP((*(int *)(iVar8 + 0x20) + 0xdc))) = uVar2;
    *(undefined1 *)(iVar8 + 0x1d) = 1;
  }
  (*(int *)(gen_frame + 0x0)) = 0;
  if (0 < *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc4)))) {
    (*(int *)(gen_frame + 0xc)) = 0x1ac;
    (*(int *)(gen_frame + 0x8)) = 0xec;
    piVar7 = ((int *)(gen_frame + 0x14));
    do {
      iVar1 = piVar7[2];
      if ((char)piVar7[0x18] == '\0') {
        iVar3 = *piVar7;
      }
      else {
        iVar3 = *piVar7 + 1000000;
      }
      if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xcc))) == 2) {
        uVar2 = F_00a41080(&REFG(undefined, 0x14a4230),iVar3,0,1,1);
      }
      else {
        uVar2 = piVar7[1];
      }
      uVar6 = -(uint)(*(char *)((int)piVar7 + 0x72) != '\0') & 5;
      uVar4 = F_0042a990(piVar7 + 3);
      if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + -0xc + *(int *)(iVar8 + 0x20)))) != iVar1) {
        *((int *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + -0xc + *(int *)(iVar8 + 0x20)))) = iVar1;
        *(undefined1 *)(iVar8 + 0x1d) = 1;
      }
      if (*((uint *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + -8 + *(int *)(iVar8 + 0x20)))) != uVar2) {
        *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + -8 + *(int *)(iVar8 + 0x20)))) = uVar2;
        *(undefined1 *)(iVar8 + 0x1d) = 1;
      }
      if (*((uint *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + *(int *)(iVar8 + 0x20)))) != uVar6) {
        *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + *(int *)(iVar8 + 0x20)))) = uVar6;
        *(undefined1 *)(iVar8 + 0x1d) = 1;
      }
      F_00431250(this_00,(*(int *)(gen_frame + 0x0)) + 0xc,uVar4,0,1,0);
      piVar5 = ((int *)GEN_TOP((*(int *)(iVar8 + 0x20) + (*(int *)(gen_frame + 0xc)))));
      if (*piVar5 != iVar3) {
        *piVar5 = iVar3;
        *(undefined1 *)(iVar8 + 0x1d) = 1;
      }
      (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + 4;
      (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 0x14;
      (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
      piVar7 = piVar7 + 0x1d;
    } while ((*(int *)(gen_frame + 0x0)) < *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc4))));
  }
  iVar8 = 4;
  this_01 = &(*(int *)&gen_args[1]);
  do {
    this_01 = this_01 + -0x1d;
    uVar9 = F_0042c880(this_01);
    iVar8 = iVar8 + -1;
  } while (-1 < iVar8);
  F_00c47745((*(uint *)(gen_frame + 0x258)) ^ (uint)(uint)(gen_frame + 0x25c));
  return (uint)uVar9;
}

/* ref: FUN_007d96b0 */
unsigned int F_007d96b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d96b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10b8168));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d442c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10d441c));
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0xb;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0xffffffff;
  *(undefined2 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined2 *)((int)this + 0x48) = 0x101;
  return 0;
}

/* ref: FUN_007d9710 */
uint F_007d9710(unsigned int gen_a0)
{
  GEN_ENTER(0x7d9710u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  piVar2 = *(int * PTR32 *)(uVar1 + 0x24);
  if (piVar2 != (int *)0x0) {
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2);
    if (((char)uVar1 != '\0') && (uVar1 = piVar2[0x82], uVar1 == *(uint *)((int)this + 8))) {
      uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    }
  }
  if (*(int *)((int)this + 0x24) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)((int)this + 0x24),0);
    *(undefined4 *)((int)this + 0x24) = 0;
  }
  if (*(int *)((int)this + 0x28) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)((int)this + 0x28),0);
    *(undefined4 *)((int)this + 0x28) = 0;
  }
  if (*(int *)((int)this + 0x2c) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)((int)this + 0x2c),0);
    *(undefined4 *)((int)this + 0x2c) = 0;
  }
  if (*(undefined * PTR32 *)((int)this + 0x10) != (undefined *)0x0) {
    uVar1 = F_00a70580(*(undefined * PTR32 *)((int)this + 0x10));
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  return uVar1;
}

/* ref: FUN_007d97c0 */
uint F_007d97c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7d97c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  undefined * this_00;
  uint uVar5;
  ushort * puVar6;
  uint * puVar7;
  undefined * pvVar8;
  undefined * puVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint * puVar13;
  int * piVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int local_28;
  uint local_24;
  int local_20;
  int local_1c;
  uint local_18;
  uint local_10;
  
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,0x1a);
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,0x17)));
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar5 = ((code *)*(gen_code32 *)(*piVar3 + 0x2c))(piVar3,0);
  if ((((*(int *)((int)this + 0x10) == 0) || (uVar4 == 0)) || (this_00 == (undefined *)0x0)) ||
     (uVar5 == 0)) {
    return 0;
  }
  uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if ((char)uVar5 != '\0') {
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
    piVar3 = *(int * PTR32 *)(uVar5 + 0x24);
    if (((piVar3 != (int *)0x0) &&
        (uVar5 = ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3), (char)uVar5 != '\0')) &&
       (piVar3[0x82] == *(int *)((int)this + 8))) {
      ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    }
  }
  piVar3 = (int *)F_00a67930(*(undefined4 *)((int)this + 0x10));
  puVar6 = (ushort *)F_00a67950(*(undefined4 *)((int)this + 0x10));
  puVar7 = (uint *)F_00a67940(*(undefined4 *)((int)this + 0x10));
  local_24 = 0;
  if (*puVar6 != 0) {
    local_24 = *puVar6 - 1;
  }
  if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x12e8))) != *piVar3) {
    *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x12e8))) = *piVar3;
    *(undefined1 *)(uVar4 + 0x1d) = 1;
  }
  uVar5 = F_00775040(this);
  *(uint *)((int)this + 0x20) = uVar5;
  if (*((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1220))) != uVar5) {
    *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1220))) = uVar5;
    *(undefined1 *)(uVar4 + 0x1d) = 1;
  }
  if (*((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1224))) != (uint)*(ushort *)(piVar3 + 0x45)) {
    *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1224))) = (uint)*(ushort *)(piVar3 + 0x45);
    *(undefined1 *)(uVar4 + 0x1d) = 1;
  }
  uVar5 = (uint)*(ushort *)(piVar3 + 0x45);
  if (*(ushort *)(piVar3 + 0x45) == 0) {
    puVar9 = &REFG(undefined, 0x10be087);
  }
  else {
    uVar15 = 0x23;
    pvVar8 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    puVar9 = (undefined *)F_00461bb0(pvVar8,uVar15,uVar5);
  }
  F_00431250(this_00,0x361,puVar9,0,1,0);
  uVar5 = (uint)((char)piVar3[0x4f] != '\0');
  if (*((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1228))) != uVar5) {
    *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1228))) = uVar5;
    *(undefined1 *)(uVar4 + 0x1d) = 1;
  }
  uVar5 = F_0042a990(piVar3 + 1);
  if (uVar5 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0xc80)))) {
    *(undefined1 *)((int)this_00 + 0x1d) = 1;
  }
  *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0xc80))) = uVar5;
  if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1234))) != piVar3[0x4e]) {
    *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1234))) = piVar3[0x4e];
    *(undefined1 *)(uVar4 + 0x1d) = 1;
  }
  if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1238))) != piVar3[0xac]) {
    *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1238))) = piVar3[0xac];
    *(undefined1 *)(uVar4 + 0x1d) = 1;
  }
  if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x12ec))) != piVar3[0xad]) {
    *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x12ec))) = piVar3[0xad];
    *(undefined1 *)(uVar4 + 0x1d) = 1;
  }
  if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x12f8))) != piVar3[0xab]) {
    *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x12f8))) = piVar3[0xab];
    *(undefined1 *)(uVar4 + 0x1d) = 1;
  }
  uVar5 = F_0042a990(puVar6 + local_24 * 0x2c + 2);
  if (uVar5 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0xc88)))) {
    *(undefined1 *)((int)this_00 + 0x1d) = 1;
  }
  *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0xc88))) = uVar5;
  uVar5 = F_0042a990(piVar3 + 0x16);
  if (uVar5 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0xc84)))) {
    *(undefined1 *)((int)this_00 + 0x1d) = 1;
  }
  *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0xc84))) = uVar5;
  if (piVar3[0x4d] == 0) {
    if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x122c))) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x122c))) = 0;
      *(undefined1 *)(uVar4 + 0x1d) = 1;
    }
    if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1230))) == piVar3[0x4c]) goto LAB_007d9ac4;
    *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1230))) = piVar3[0x4c];
  }
  else {
    if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x122c))) != piVar3[0x4c]) {
      *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x122c))) = piVar3[0x4c];
      *(undefined1 *)(uVar4 + 0x1d) = 1;
    }
    uVar5 = F_00a67ce0(piVar3[0x4d],(uint)*(byte *)(piVar3 + 0xb3),
                         (uint)*(byte *)((int)piVar3 + 0x12e));
    if (*((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1230))) == uVar5) goto LAB_007d9ac4;
    *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1230))) = uVar5;
  }
  *(undefined1 *)(uVar4 + 0x1d) = 1;
LAB_007d9ac4: ;
  uVar17 = 0;
  uVar16 = 0;
  uVar15 = 0x1ca;
  pvVar8 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar5 = F_0043bd00(pvVar8,uVar15,uVar16,uVar17);
  if (uVar5 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0xc8c)))) {
    *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0xc8c))) = uVar5;
    *(undefined1 *)((int)this_00 + 0x1d) = 1;
  }
  iVar11 = piVar3[0x46];
  iVar2 = piVar3[0x47] - iVar11 >> 0x1f;
  uVar5 = 0;
  if ((piVar3[0x47] - iVar11) / 0x54 + iVar2 != iVar2) {
    local_18 = 0;
    local_1c = 0xd64;
    do {
      uVar10 = F_0042a990(local_18 + iVar11);
      puVar13 = ((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + local_1c)));
      if (uVar10 != *puVar13) {
        *(undefined1 *)((int)this_00 + 0x1d) = 1;
      }
      *puVar13 = uVar10;
      iVar11 = piVar3[0x46];
      local_18 = local_18 + 0x54;
      local_1c = local_1c + 4;
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uint)((piVar3[0x47] - iVar11) / 0x54));
  }
  iVar11 = (piVar3[0x47] - piVar3[0x46]) / 0x54;
  if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x12f4))) != iVar11) {
    *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x12f4))) = iVar11;
    *(undefined1 *)(uVar4 + 0x1d) = 1;
  }
  uVar17 = 0;
  uVar16 = 0;
  uVar15 = 0x1d3;
  pvVar8 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar5 = F_0043bd00(pvVar8,uVar15,uVar16,uVar17);
  if (uVar5 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0xd54)))) {
    *(undefined1 *)((int)this_00 + 0x1d) = 1;
  }
  *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0xd54))) = uVar5;
  uVar16 = 0;
  iVar11 = (-(uint)(*(int *)((int)this + 0x20) != 7) & 0xffffffc7) + 0x20e;
  uVar15 = 0;
  pvVar8 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar5 = F_0043bd00(pvVar8,iVar11,uVar15,uVar16);
  if (uVar5 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0xd58)))) {
    *(undefined1 *)((int)this_00 + 0x1d) = 1;
  }
  *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0xd58))) = uVar5;
  if (*(int *)((int)this + 0x20) == 6) {
    iVar11 = 0x1d6;
  }
  else {
    iVar11 = (-(uint)(*(int *)((int)this + 0x20) != 7) & 0xffffffc7) + 0x20d;
  }
  uVar16 = 0;
  uVar15 = 0;
  pvVar8 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar5 = F_0043bd00(pvVar8,iVar11,uVar15,uVar16);
  if (uVar5 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0xd5c)))) {
    *(undefined1 *)((int)this_00 + 0x1d) = 1;
  }
  *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0xd5c))) = uVar5;
  local_1c = 0;
  if (*(int *)((int)this + 0x30) == 0) {
    uVar5 = *puVar7;
  }
  else {
    uVar5 = 0;
  }
  local_18 = 0;
  if (uVar5 != 0) {
    uVar10 = 0xc90;
    puVar13 = puVar7 + 3;
    do {
      if (puVar13[0x15] == puVar7[1]) {
        if (*((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x5b0 + uVar10))) != (uint)(byte)puVar13[-1]) {
          *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x5b0 + uVar10))) = (uint)(byte)puVar13[-1];
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        uVar12 = F_0042a990(puVar13);
        if (uVar12 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + uVar10)))) {
          *(undefined1 *)((int)this_00 + 0x1d) = 1;
        }
        *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + uVar10))) = uVar12;
        uVar12 = F_0042a990(puVar13 + 0x16);
        puVar1 = ((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x14 + uVar10)));
        if (uVar12 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x14 + uVar10)))) {
          *(undefined1 *)((int)this_00 + 0x1d) = 1;
        }
        local_1c = local_1c + 1;
        uVar10 = uVar10 + 4;
        *puVar1 = uVar12;
        if (0xca3 < uVar10) break;
      }
      local_18 = local_18 + 1;
      puVar13 = puVar13 + 99;
    } while (local_18 < uVar5);
  }
  if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x123c))) != local_1c) {
    *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x123c))) = local_1c;
    *(undefined1 *)(uVar4 + 0x1d) = 1;
  }
  local_20 = 0;
  if (*(int *)((int)this + 0x30) != 0) {
    local_24 = (uint)*puVar6;
  }
  if (1 < local_24) {
    puVar6 = puVar6 + 0x2e;
    local_20 = local_24 - 1;
    iVar11 = 0xcf4;
    local_28 = local_20;
    do {
      uVar5 = F_0042a990(puVar6);
      if (uVar5 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + iVar11)))) {
        *(undefined1 *)((int)this_00 + 0x1d) = 1;
      }
      *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + iVar11))) = uVar5;
      iVar11 = iVar11 + 4;
      puVar6 = puVar6 + 0x2c;
      local_28 = local_28 + -1;
    } while (local_28 != 0);
  }
  if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x12f0))) != local_20) {
    *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x12f0))) = local_20;
    *(undefined1 *)(uVar4 + 0x1d) = 1;
  }
  if (*(int *)((int)this + 0x30) == 0) {
    uVar5 = (uint)*(byte *)(piVar3 + 0xb4);
  }
  else {
    uVar5 = 0;
  }
  if (*((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1254))) != uVar5) {
    *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1254))) = uVar5;
    *(undefined1 *)(uVar4 + 0x1d) = 1;
  }
  local_24 = 0;
  if (uVar5 != 0) {
    iVar11 = 0x126c;
    piVar14 = piVar3 + 0xcd;
    do {
      if (*((int *)GEN_TOP((iVar11 + -0x14 + *(int *)(uVar4 + 0x20)))) != piVar14[1]) {
        *((int *)GEN_TOP((iVar11 + -0x14 + *(int *)(uVar4 + 0x20)))) = piVar14[1];
        *(undefined1 *)(uVar4 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + iVar11))) != *piVar14) {
        *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + iVar11))) = *piVar14;
        *(undefined1 *)(uVar4 + 0x1d) = 1;
      }
      uVar17 = 0;
      uVar16 = 1;
      uVar15 = 0;
      uVar10 = F_0042a990(piVar14 + -0x17);
      F_00431250(this_00,local_24 + 0x333,uVar10,uVar15,uVar16,uVar17);
      if (*((int *)GEN_TOP((iVar11 + 0x28 + *(int *)(uVar4 + 0x20)))) != piVar14[-2]) {
        *((int *)GEN_TOP((iVar11 + 0x28 + *(int *)(uVar4 + 0x20)))) = piVar14[-2];
        *(undefined1 *)(uVar4 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((iVar11 + 0x14 + *(int *)(uVar4 + 0x20)))) != piVar14[-1]) {
        *((int *)GEN_TOP((iVar11 + 0x14 + *(int *)(uVar4 + 0x20)))) = piVar14[-1];
        *(undefined1 *)(uVar4 + 0x1d) = 1;
      }
      local_24 = local_24 + 1;
      piVar14 = piVar14 + 0x1b;
      iVar11 = iVar11 + 4;
    } while (local_24 < uVar5);
  }
  if (*(int *)((int)this + 0x30) == 0) {
    local_10 = (uint)*(byte *)((int)piVar3 + 0x2d1);
  }
  else {
    local_10 = 0;
  }
  if (*((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x12a8))) != local_10) {
    *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x12a8))) = local_10;
    *(undefined1 *)(uVar4 + 0x1d) = 1;
  }
  local_24 = 0;
  if (local_10 != 0) {
    iVar11 = 0x12c0;
    piVar14 = piVar3 + 0x152;
    do {
      if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + -0x14 + iVar11))) != piVar14[2]) {
        *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + -0x14 + iVar11))) = piVar14[2];
        *(undefined1 *)(uVar4 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + iVar11))) != *piVar14) {
        *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + iVar11))) = *piVar14;
        *(undefined1 *)(uVar4 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x14 + iVar11))) != piVar14[1]) {
        *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x14 + iVar11))) = piVar14[1];
        *(undefined1 *)(uVar4 + 0x1d) = 1;
      }
      uVar17 = 0;
      uVar16 = 1;
      uVar15 = 0;
      uVar5 = F_0042a990(piVar14 + -0x15);
      F_00431250(this_00,local_24 + 0x338,uVar5,uVar15,uVar16,uVar17);
      local_24 = local_24 + 1;
      piVar14 = piVar14 + 0x1b;
      iVar11 = iVar11 + 4;
    } while (local_24 < local_10);
  }
  if (*(int *)((int)this + 0x30) == 0) {
    uVar5 = (uint)*(byte *)((int)piVar3 + 0x2d2);
  }
  else {
    uVar5 = 0;
  }
  if (*((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x12fc))) != uVar5) {
    *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x12fc))) = uVar5;
    *(undefined1 *)(uVar4 + 0x1d) = 1;
  }
  local_24 = 0;
  if (uVar5 != 0) {
    iVar11 = 0x1310;
    piVar3 = piVar3 + 0x1db;
    do {
      if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + -0x10 + iVar11))) != piVar3[1]) {
        *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + -0x10 + iVar11))) = piVar3[1];
        *(undefined1 *)(uVar4 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + iVar11))) != *piVar3) {
        *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + iVar11))) = *piVar3;
        *(undefined1 *)(uVar4 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x10 + iVar11))) != piVar3[-2]) {
        *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x10 + iVar11))) = piVar3[-2];
        *(undefined1 *)(uVar4 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x20 + iVar11))) != piVar3[-1]) {
        *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x20 + iVar11))) = piVar3[-1];
        *(undefined1 *)(uVar4 + 0x1d) = 1;
      }
      uVar17 = 0;
      uVar16 = 1;
      uVar15 = 0;
      uVar10 = F_0042a990(piVar3 + -0x17);
      F_00431250(this_00,local_24 + 0x362,uVar10,uVar15,uVar16,uVar17);
      local_24 = local_24 + 1;
      piVar3 = piVar3 + 0x1b;
      iVar11 = iVar11 + 4;
    } while (local_24 < uVar5);
  }
  return 8;
}

/* ref: FUN_007da030 */
uint F_007da030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7da030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int * piVar6;
  uint uVar7;
  
  if (*(undefined * PTR32 *)((int)this + 0x10) != (undefined *)0x0) {
    piVar2 = (int *)F_00a74510(*(undefined * PTR32 *)((int)this + 0x10));
    piVar6 = (int *)piVar2[4];
    uVar3 = piVar2[5] - (int)((int)(uintptr_t)piVar6) >> 2;
    if ((piVar2[1] - *piVar2) / 0x54 == uVar3) {
      uVar7 = 0;
      iVar4 = 0;
      if (uVar3 != 0) {
        do {
          iVar1 = *piVar6;
          iVar5 = iVar4;
          if (((iVar1 != 0x17) && (iVar1 != 0x19)) && ((iVar1 != 0x1a || ((REFG(undefined1, 0x14ab150) & 1) != 0)))
             ) {
            iVar5 = iVar4 + 1;
            if (iVar4 == param_1) {
              return iVar1 - 1;
            }
          }
          uVar7 = uVar7 + 1;
          piVar6 = piVar6 + 1;
          iVar4 = iVar5;
        } while (uVar7 < uVar3);
      }
    }
  }
  return 1;
}

/* ref: Client::UI2::Agent::AgentQuestJournal::vf11 */
byte F_007da0c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7da0c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
  if ((*(int *)(uVar1 + 0x18) != 0) &&
     ((~(byte)(**((uint * PTR32 *)GEN_TOP((*(int *)(uVar1 + 0x18) + 0xe4))) >> 4) & 1) == 0)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_007da110 */
unsigned int F_007da110(unsigned int gen_a0)
{
  GEN_ENTER(0x7da110u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(char *)((int)this + 0xf6) != '\0') {
    if (*(int *)((int)this + 0x18) != 0) {
      F_00a3d7c0(&REFG(undefined, 0x14a4230),*(undefined4 *)((int)this + 0x10),
                   (uint)*(ushort *)((int)this + 0x14));
    }
    *(undefined4 *)((int)this + 0x10) = 9999;
    *(undefined2 *)((int)this + 0x14) = 0;
    *(undefined4 *)((int)this + 0x18) = 0;
    *(undefined4 *)((int)this + 0x1c) = 0;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentRecipeNote::vf3 */
uint F_007da150(unsigned int gen_a0)
{
  GEN_ENTER(0x7da150u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  F_00a712e0(&REFG(undefined, 0x14ab790));
  uVar1 = F_007752e0(this);
  if (*(int *)(this + 8) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return uVar1;
}

/* ref: FUN_007da190 */
uint F_007da190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7da190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint uVar2;
  undefined * this_00;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (REFG(int, 0x1379694) == 0) {
    return 0;
  }
  uVar3 = (uint)*(byte *)(REFG(int, 0x1379694) + 0x1689);
  (*(int *)(gen_frame + 0x4)) = (int)this + 0x128;
  F_007c9ad0((int)this + 0x128,(int)this + 0x17c,&(*(uint *)(gen_frame + 0x0)),&(*(uint *)(gen_frame + 0x8)));
  (*(uint *)(gen_frame + 0x8)) = (uint)REFG(undefined2, 0x14ab148);
  if (REFG(undefined2, 0x14ab148) != 0) {
    uVar2 = F_00a68280(&REFG(undefined1, 0x14ab070),0xffffffff,0);
    if ((ushort)(*(uint *)(gen_frame + 0x8)) < (ushort)uVar2) {
      bVar1 = 1;
      goto LAB_007da1f9;
    }
  }
  bVar1 = 0;
LAB_007da1f9: ;
  uVar2 = (uint)bVar1;
  uVar5 = 0;
  uVar4 = 0x178;
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = F_00461d60(this_00,uVar4,uVar3,uVar5,uVar2);
  F_005aa640((undefined *)(param_1 + 0x50),uVar3);
  uVar3 = F_0042a990((int)this + 0x17c);
  F_005a2710((undefined *)(param_1 + 0x58),6);
  *(uint *)(param_1 + 0x5c) = uVar3;
  uVar3 = F_0042a990((*(int *)(gen_frame + 0x4)));
  F_005a2710((undefined *)(param_1 + 0x60),6);
  *(uint *)(param_1 + 100) = uVar3;
  F_005a2710((undefined *)(param_1 + 0x48),4);
  *(uint *)(param_1 + 0x4c) = (*(uint *)(gen_frame + 0x0));
  return (*(uint *)(gen_frame + 0x0));
}

/* ref: FUN_007da270 */
uint F_007da270(unsigned int gen_a0)
{
  GEN_ENTER(0x7da270u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined * this_00;
  uint * puVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,0x19)));
  if (this_00 != (undefined *)0x0) {
    iVar4 = 0;
    do {
      puVar2 = (uint *)F_00ab2e40(iVar4);
      if (puVar2 == (uint *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*puVar2 & 0xffffff) + (int)puVar2;
      }
      F_00431250(this_00,iVar4 + 0x94,iVar3,0,1,0);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 8);
    return 0x10;
  }
  return 0;
}

/* ref: FUN_007da2e0 */
uint F_007da2e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7da2e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  undefined * this_00;
  uint * puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint local_8;
  
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2,0x1c);
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2,0x19)));
  if (((uVar3 != 0) && (this_00 != (undefined *)0x0)) && (*(int *)((int)this + 0x22c) != 0)) {
    uVar5 = (uint)*((byte *)GEN_TOP((REFG(int, 0x14ab7d0) + 0xd + *(int *)((int)this + 0x230))));
    if (*((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 8))) != uVar5) {
      *((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 8))) = uVar5;
      *(undefined1 *)(uVar3 + 0x1d) = 1;
    }
    iVar7 = 0;
    if (uVar5 != 0) {
      local_8 = 0x10;
      do {
        puVar4 = (uint *)F_00ab2f00(iVar7);
        if (puVar4 == (uint *)0x0) {
          iVar6 = 0;
        }
        else {
          iVar6 = (*puVar4 & 0xffffff) + (int)puVar4;
        }
        F_00431250(this_00,iVar7,iVar6,0,1,0);
        bVar1 = F_00a690e0(*(undefined4 *)((int)this + 0x230),iVar7);
        if (*((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + local_8))) != (uint)bVar1) {
          *((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + local_8))) = (uint)bVar1;
          *(undefined1 *)(uVar3 + 0x1d) = 1;
        }
        local_8 = local_8 + 4;
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)uVar5);
    }
    local_8 = 0;
    if (uVar5 != 0) {
      local_8 = (uint)*((byte *)GEN_TOP((REFG(int, 0x14ab7d0) + 0x15 + *(int *)((int)this + 0x230))));
      if (4 < local_8) {
        local_8 = 4;
      }
      if (local_8 != 0) {
        iVar7 = 0x9d;
        uVar8 = local_8;
        do {
          puVar4 = (uint *)F_00ab2f00(iVar7 + 0x34b);
          if (puVar4 == (uint *)0x0) {
            iVar6 = 0;
          }
          else {
            iVar6 = (*puVar4 & 0xffffff) + (int)puVar4;
          }
          F_00431250(this_00,iVar7,iVar6,0,1,0);
          iVar7 = iVar7 + 1;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
    }
    if (*((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x7ec))) != local_8) {
      *((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x7ec))) = local_8;
      *(undefined1 *)(uVar3 + 0x1d) = 1;
    }
    return (uint)(uVar5 != 0);
  }
  return 0;
}

/* ref: FUN_007da470 */
uint F_007da470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7da470u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint * puVar1;
  byte bVar2;
  undefined * this_00;
  uint uVar3;
  byte * pbVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0xe07;
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = F_0043bd00(this_00,uVar8,uVar9,uVar10);
  if (uVar3 != *((uint *)GEN_TOP((*(int *)(param_3 + 0x20) + 0x288)))) {
    *((uint *)GEN_TOP((*(int *)(param_3 + 0x20) + 0x288))) = uVar3;
    *(undefined1 *)(param_3 + 0x1d) = 1;
  }
  uVar3 = (uint)*(byte *)((int)this + 0x104) << 0x10 | 1;
  if (*((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + 4))) != uVar3) {
    *((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + 4))) = uVar3;
    *(undefined1 *)(param_2 + 0x1d) = 1;
  }
  bVar2 = F_00775500(this,param_1,0);
  if (bVar2 == 0) {
    return 0;
  }
  uVar3 = F_00a68de0(param_1);
  if (*((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x708))) != uVar3) {
    *((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x708))) = uVar3;
    *(undefined1 *)(param_2 + 0x1d) = 1;
  }
  if (**(int * PTR32 *)((int)param_1 + 0x40) == 0) {
    return 8;
  }
  iVar6 = 0;
  iVar7 = 0x1cd;
  pbVar4 = ((byte *)GEN_TOP((*(int *)((int)this + 0x238) * 0x444 + **(int * PTR32 *)((int)param_1 + 0x40) + 0x6e)));
  do {
    if (*(int *)(pbVar4 + -10) != 0) {
      if ((*pbVar4 & 1) != 0) {
        if (*(char *)((int)this + 0x106) == '\0') {
          return 8;
        }
        if (*(int *)(pbVar4 + -10) < 1) {
          return 8;
        }
        iVar6 = *(int *)((int)this + 0x28);
        if (iVar6 - 1000000U < 1000000) {
          iVar6 = iVar6 + -1000000;
        }
        if (iVar6 != *(int *)(pbVar4 + -10)) {
          return 8;
        }
        puVar1 = (uint *)((int)this + 0x20);
        if (puVar1 == (uint *)0x0) {
          return 8;
        }
        if (*((int *)GEN_TOP((*(int *)(param_2 + 0x20) + iVar7 * 4))) != *(int *)((int)this + 0x28)) {
          *((int *)GEN_TOP((*(int *)(param_2 + 0x20) + iVar7 * 4))) = *(int *)((int)this + 0x28);
          *(undefined1 *)(param_2 + 0x1d) = 1;
        }
        uVar3 = F_00775290((undefined *)((int)this + 0x10),puVar1);
        if (*((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + 4 + iVar7 * 4))) != uVar3) {
          *((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + 4 + iVar7 * 4))) = uVar3;
          *(undefined1 *)(param_2 + 0x1d) = 1;
        }
        uVar3 = *((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x14 + iVar7 * 4)));
        uVar5 = uVar3 | 2;
        if (uVar3 != uVar5) {
          *((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x14 + iVar7 * 4))) = uVar5;
          *(undefined1 *)(param_2 + 0x1d) = 1;
        }
        uVar3 = (int)*(short *)((int)this + 0x24) << 0x10 | *puVar1;
        puVar1 = ((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x18 + iVar7 * 4)));
        if (*puVar1 == uVar3) {
          return 8;
        }
        *puVar1 = uVar3;
        *(undefined1 *)(param_2 + 0x1d) = 1;
        return 8;
      }
      iVar7 = iVar7 + 7;
    }
    iVar6 = iVar6 + 1;
    pbVar4 = pbVar4 + 0x70;
    if (5 < iVar6) {
      return 8;
    }
  } while( true );
}

/* ref: FUN_007da600 */
unsigned int F_007da600(unsigned int gen_a0)
{
  GEN_ENTER(0x7da600u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  if (REFG(int, 0x1379694) != 0) {
    switch((unsigned int)(uintptr_t)(*(undefined1 *)(REFG(int, 0x1379694) + 0x1688))) {
    case 8: ;
      *(undefined4 *)((int)this + 0x230) = 0;
      break;
    case 9: ;
      *(undefined4 *)((int)this + 0x230) = 1;
      break;
    case 10: ;
      *(undefined4 *)((int)this + 0x230) = 2;
      break;
    case 0xb: ;
      *(undefined4 *)((int)this + 0x230) = 3;
      break;
    case 0xc: ;
      *(undefined4 *)((int)this + 0x230) = 4;
      break;
    case 0xd: ;
      *(undefined4 *)((int)this + 0x230) = 5;
      break;
    case 0xe: ;
      *(undefined4 *)((int)this + 0x230) = 6;
      break;
    case 0xf: ;
      *(undefined4 *)((int)this + 0x230) = 7;
      break;
    default: ;
      if ((*(uint *)((int)this + 0x22c) & 1 << ((byte)*(undefined4 *)((int)this + 0x230) & 0x1f)) ==
          0) {
        uVar2 = 0;
        do {
          if ((*(uint *)((int)this + 0x22c) & 1 << ((byte)uVar2 & 0x1f)) != 0) {
            *(uint *)((int)this + 0x230) = uVar2;
            break;
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < 8);
      }
    }
  }
  if (7 < *(int *)((int)this + 0x230)) {
    *(undefined4 *)((int)this + 0x230) = 0;
  }
  iVar1 = *(int *)((int)this + 0x230);
  if (iVar1 < 8) {
    *(int *)((int)this + 0x234) = (int)*(short *)((int)this + iVar1 * 4 + 0x108);
    *(int *)((int)this + 0x238) = (int)*(short *)((int)this + iVar1 * 4 + 0x10a);
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentRecipeNote::vf11 */
byte F_007da720(unsigned int gen_a0)
{
  GEN_ENTER(0x7da720u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
  if ((*(int *)(uVar1 + 0x18) == 0) ||
     ((~(byte)(**((uint * PTR32 *)GEN_TOP((*(int *)(uVar1 + 0x18) + 0xe4))) >> 9) & 1) != 0)) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    if (((char)uVar1 == '\0') && (REFG(char, 0x14a7365) != '\0')) {
      return 0;
    }
    if (REFG(char, 0x14a7378) == '\0') {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_007da780 */
uint F_007da780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7da780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  
  if (*(char *)((int)this + 0xc) == '\0') {
    uVar4 = F_005a2710((undefined *)(param_1 + 0x670),4);
    *(undefined4 *)(param_1 + 0x674) = 0;
    return uVar4;
  }
  uVar4 = F_007c9ad0((int)this + 0x7c,(int)this + 0xd0,&(*(undefined4 *)(gen_frame + 0x8)),(undefined4 *)((int)this + 0xaac))
  ;
  if (0 < (int)uVar4) {
    uVar1 = *(undefined4 *)((int)this + 0xaac);
    F_005a2710((undefined *)(param_1 + 0x670),4);
    *(undefined4 *)(param_1 + 0x674) = uVar1;
    F_005a2710((undefined *)(param_1 + 0x678),4);
    *(undefined4 *)(param_1 + 0x67c) = (*(undefined4 *)(gen_frame + 0x8));
    uVar4 = F_0042a990((int)this + 0x7c);
    F_005a2710((undefined *)(param_1 + 0x680),6);
    *(uint *)(param_1 + 0x684) = uVar4;
    uVar4 = F_0042a990((int)this + 0xd0);
    F_005a2710((undefined *)(param_1 + 0x688),6);
    *(uint *)(param_1 + 0x68c) = uVar4;
    uVar3 = REFG(undefined2, 0x14ab148);
    if ((REFG(undefined2, 0x14ab148) == 0) ||
       (uVar4 = F_00a68280(&REFG(undefined1, 0x14ab070),0xffffffff,0), (ushort)uVar4 <= uVar3)) {
      bVar2 = 0;
    }
    else {
      bVar2 = 1;
    }
    uVar4 = F_005a2710((undefined *)(param_1 + 0x690),3);
    *(uint *)(param_1 + 0x694) = (uint)bVar2;
    return uVar4;
  }
  return uVar4;
}

/* ref: FUN_007da890 */
uint F_007da890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7da890u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  in_ecx[3] = (*(undefined * PTR32 (*)[2])REFP(0x10b815c));
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d447c));
  in_ecx[3] = (*(undefined * PTR32 (*)[2])REFP(0x10d4470));
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[8] = 0;
  in_ecx[9] = 9999;
  in_ecx[10] = 0xffffffff;
  in_ecx[0xb] = 9999;
  in_ecx[0xc] = 0xffffffff;
  in_ecx[0xd] = 0xffffffff;
  in_ecx[0xe] = 0xffffffff;
  in_ecx[0xf] = 0xffffffff;
  in_ecx[0x10] = 0xffffffff;
  in_ecx[0x11] = 0;
  puVar1 = in_ecx + 0x12;
  param_2 = 0x18;
  do {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
    F_0042b630(puVar1 + 1);
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    *(undefined2 *)(puVar1 + 0x19) = 0;
    *(undefined1 *)((int)puVar1 + 0x66) = 0;
    puVar1 = puVar1 + 0x1a;
    param_2 = param_2 + -1;
  } while (-1 < param_2);
  in_ecx[0x2a3] = 0;
  in_ecx[0x2a4] = 0;
  in_ecx[0x2a5] = 0;
  in_ecx[0x2a6] = 0;
  in_ecx[0x2a7] = 0xffffffff;
  in_ecx[0x2a8] = 0;
  param_2 = 0x13;
  puVar1 = in_ecx + 0x2c1;
  do {
    F_0042b630(puVar1 + -0x16);
    F_0042b630(puVar1);
    puVar1 = puVar1 + 0x30;
    param_2 = param_2 + -1;
  } while (-1 < param_2);
  *(undefined1 *)(in_ecx + 0x669) = 0;
  in_ecx[0x66a] = 0;
  in_ecx[0x66b] = 0;
  in_ecx[0x66c] = 0;
  *(undefined1 *)((int)in_ecx + 0x19b6) = 0;
  in_ecx[0x66e] = 0;
  *(undefined2 *)(in_ecx + 0x66d) = 1;
  in_ecx[0x29c] = 0;
  in_ecx[0x29d] = 0;
  in_ecx[0x29e] = 0;
  in_ecx[0x29f] = 0;
  in_ecx[0x2a0] = 0;
  in_ecx[0x2a1] = 0;
  *(undefined1 *)(in_ecx + 0x2a2) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_007da9e0 */
byte F_007da9e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7da9e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int iVar2;
  
  if ((((0 < param_2) && (((byte)*param_1 & 0xf) == 3)) && (iVar1 = param_1[1], 0 < iVar1)) &&
     ((*(int *)((int)this + 0x24) != 9999 && (-1 < *(int *)((int)this + 0x28))))) {
    F_00a3d7c0(&REFG(undefined, 0x14a4230),*(int *)((int)this + 0x24),(uint)*(ushort *)((int)this + 0x28));
    if ((*(int *)((int)this + 0x2c) == 9999) || (*(int *)((int)this + 0x30) < 0)) {
      iVar2 = *(int *)((int)this + 0x24);
      if ((iVar2 < 10000) || (0x2716 < *(int *)((int)this + 0x28))) {
        F_00a41810(&REFG(undefined, 0x14a4230),iVar2,(uint)*(ushort *)((int)this + 0x28),iVar1);
      }
      else {
        F_00a418c0(&REFG(undefined, 0x14a4230),iVar2,(uint)*(ushort *)((int)this + 0x28),iVar1);
      }
    }
    else {
      F_00a493a0(&REFG(undefined, 0x14a4230),*(undefined4 *)((int)this + 0x24),
                   (uint)*(ushort *)((int)this + 0x28),*(int *)((int)this + 0x2c),
                   (uint)*(ushort *)((int)this + 0x30),iVar1);
    }
  }
  *(undefined4 *)((int)this + 0x19a8) = 0;
  F_007759b0(this);
  return 1;
}

/* ref: FUN_007daab0 */
byte F_007daab0(unsigned int gen_a0)
{
  GEN_ENTER(0x7daab0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  undefined * this;
  uint uVar3;
  uint uVar4;
  
  uVar2 = F_00ab24a0(*param_1);
  if (uVar2 != 0) {
    this = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),0x2ee2);
    if (this != (undefined *)0x0) {
      uVar3 = F_00a37da0(this,(int)*(short *)(param_1 + 0x2d));
      if (uVar3 != 0) {
        uVar4 = F_00ab65a0(*param_1,uVar2);
        param_1[1] = uVar4;
        uVar4 = F_00ab6240(*param_1,0,uVar2);
        F_0042e430(param_1 + 2,uVar4);
        uVar2 = F_00760640((uint)*(byte *)(uVar2 + 0xa6),uVar3,*(undefined4 *)(uVar2 + 0x28));
        *(short *)((int)param_1 + 0xb6) = (short)uVar2;
        bVar1 = F_007c9be0(param_1 + 0x2e,uVar3);
        *(byte *)(param_1 + 0x2f) = bVar1;
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_007dab60 */
uint F_007dab60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7dab60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * in_ecx = (undefined *)(uintptr_t)gen_a0;
  undefined4 in_ebx = (undefined4)gen_a1;
  undefined4 in_edi = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x140];
  uint uVar1;
  undefined * pvVar2;
  undefined4 * puVar3;
  int * piVar4;
  int iVar5;
  uint * this;
  uint uVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x13c);
  (*(uint *)(gen_frame + 0x138)) = uVar1;
  if (0 < *(int *)((int)in_ecx + 0x19b0)) {
    if ((*(uint *)((int)in_ecx + 0xa94) == 0) ||
       (*(uint *)((int)in_ecx + 0xa90) < *(uint *)((int)in_ecx + 0xa94))) {
      *(undefined4 *)((int)in_ecx + 0xa94) = 1;
    }
    uVar1 = 0;
    pvVar2 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),*(undefined4 *)((int)in_ecx + 0x24));
    if (pvVar2 != (undefined *)0x0) {
      pvVar2 = (undefined *)F_00a37da0(pvVar2,*(undefined4 *)((int)in_ecx + 0x28));
      if ((pvVar2 != (undefined *)0x0) &&
         ((*(char *)((int)pvVar2 + 6) != '\0' || (*(int *)((int)pvVar2 + 8) != 0)))) {
        uVar1 = F_00a3a8a0(pvVar2);
      }
    }
    if ((*(uint *)((int)in_ecx + 0xa98) == 0) || (uVar1 < *(uint *)((int)in_ecx + 0xa98))) {
      *(uint *)((int)in_ecx + 0xa98) = uVar1;
    }
    uVar1 = *(uint *)((int)in_ecx + 0xa90) / *(uint *)((int)in_ecx + 0xa98);
    if (uVar1 < *(uint *)((int)in_ecx + 0xa94)) {
      *(uint *)((int)in_ecx + 0xa94) = uVar1;
    }
    uVar6 = *(int *)((int)in_ecx + 0xa94) * *(uint *)((int)in_ecx + 0xa98);
    F_0042b630(((undefined1 *)(gen_frame + 0x5c)));
    F_00775a60(in_ecx,((undefined1 *)(gen_frame + 0x5c)),5,((uVar6 / 10) * 5) / 10);
    uVar8 = REFG(undefined4, 0x108cc50);
    pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)in_ecx + 4) + 0x18))))
                               (*(int * PTR32 *)((int)in_ecx + 4),0x39f)));
    uVar6 = F_00461bb0(pvVar2,uVar6,uVar8);
    F_0042cc20(((undefined1 *)(gen_frame + 0x8)),uVar6,in_ebx);
    puVar3 = ((undefined4 *)(gen_frame + 0xb0));
    iVar5 = 0x10;
    do {
      *puVar3 = 0;
      puVar3 = puVar3 + 2;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
    uVar8 = *(undefined4 *)((int)in_ecx + 0xa94);
    F_005a2710(((undefined1 *)(gen_frame + 0xd8)),3);
    (*(undefined4 *)(gen_frame + 0xdc)) = uVar8;
    F_005a2710(((undefined1 *)(gen_frame + 0xe8)),3);
    uVar8 = *(undefined4 *)((int)in_ecx + 0xa98);
    (*(uint *)(gen_frame + 0xec)) = uVar1;
    F_005a2710(((undefined1 *)(gen_frame + 0xf0)),3);
    (*(undefined4 *)(gen_frame + 0xf4)) = uVar8;
    uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0x5c)));
    F_005a2710(((undefined1 *)(gen_frame + 0x118)),6);
    (*(uint *)(gen_frame + 0x11c)) = uVar1;
    uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0x8)));
    F_005a2710(((undefined1 *)(gen_frame + 0x120)),6);
    (*(uint *)(gen_frame + 0x124)) = uVar1;
    piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)in_ecx + 4) + 0x1c))))(*(int * PTR32 *)((int)in_ecx + 4))));
    ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4,*(undefined4 *)((int)in_ecx + 0x19b0),0x11,((undefined4 *)(gen_frame + 0xb0)));
    this = &(*(uint *)(gen_frame + 0x138));
    iVar5 = 0x10;
    do {
      this = this + -2;
      F_005a2670(this);
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
    F_0042c880(((undefined1 *)(gen_frame + 0x8)));
    uVar7 = F_0042c880(((undefined1 *)(gen_frame + 0x5c)));
    uVar1 = (uint)uVar7;
  }
  F_00c47745((*(uint *)(gen_frame + 0x138)) ^ (uint)(uint)(gen_frame + 0x13c));
  return uVar1;
}

/* ref: FUN_007dad90 */
uint F_007dad90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7dad90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x1e0];
  uint uVar1;
  undefined4 * puVar2;
  undefined * pvVar3;
  int * piVar4;
  int iVar5;
  uint * this_00;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  
  (*(uint *)(gen_frame + 0x1d8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1dc);
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  iVar7 = *(int *)(uVar1 + 0x18);
  if (iVar7 == 0) goto LAB_007daf43;
  uVar6 = (param_1 & 0xff) << 0x10;
  if (*(char *)(iVar7 + 0x60) == '\0') goto LAB_007daf43;
  puVar2 = ((undefined4 *)(gen_frame + 0x8));
  iVar5 = 0x36;
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 2;
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  F_005a2710(((undefined4 *)(gen_frame + 0x8)),4);
  ((undefined4 *)(gen_frame + 0x8))[1] = 2;
  F_005a2710(((undefined1 *)(gen_frame + 0x10)),4);
  (*(uint *)(gen_frame + 0x14)) = uVar6 | 0x24;
  F_005a2710(((undefined1 *)(gen_frame + 0x1b0)),6);
  (*(undefined * PTR32 *)(gen_frame + 0x1b4)) = &REFG(undefined, 0x10bdbc2);
  F_005a2710(((undefined1 *)(gen_frame + 0x1b8)),3);
  (*(undefined4 *)(gen_frame + 0x1bc)) = 0xffffffff;
  if (*(int *)(iVar7 + 0xcc) == 0) {
    uVar8 = 0x3c;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar7 + 4) + 0x1c))))(*(int * PTR32 *)(iVar7 + 4))));
    uVar1 = F_007c8b20(pvVar3,uVar8);
    *(uint *)(iVar7 + 0xcc) = uVar1;
    if (uVar1 != 0) goto LAB_007dae5e;
  }
  else {
LAB_007dae5e: ;
    piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar7 + 4) + 0x1c))))(*(int * PTR32 *)(iVar7 + 4))));
    ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4,*(undefined4 *)(iVar7 + 0xcc),0x37,((undefined4 *)(gen_frame + 0x8)));
  }
  (*(undefined4 *)(gen_frame + 0x1c0)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c8)) = 0;
  (*(undefined4 *)(gen_frame + 0x1d0)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x1c0)),4);
  (*(undefined4 *)(gen_frame + 0x1c4)) = 2;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x1c8)),4);
  (*(undefined4 *)(gen_frame + 0x1cc)) = 0x24;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x1d0)),3);
  (*(uint *)(gen_frame + 0x1d4)) = (uVar6 & 0x10000) >> 0x10;
  if (*(int *)(iVar7 + 0xd0) == 0) {
    uVar8 = 0x80;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar7 + 4) + 0x1c))))(*(int * PTR32 *)(iVar7 + 4))));
    uVar1 = F_007c8b20(pvVar3,uVar8);
    *(uint *)(iVar7 + 0xd0) = uVar1;
    if (uVar1 != 0) goto LAB_007daef3;
  }
  else {
LAB_007daef3: ;
    piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar7 + 4) + 0x1c))))(*(int * PTR32 *)(iVar7 + 4))));
    ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4,*(undefined4 *)(iVar7 + 0xd0),3,&(*(undefined4 *)(gen_frame + 0x1c0)));
  }
  this_00 = &(*(uint *)(gen_frame + 0x1d8));
  iVar7 = 2;
  do {
    this_00 = this_00 + -2;
    F_005a2670(this_00);
    iVar7 = iVar7 + -1;
  } while (-1 < iVar7);
  puVar2 = &(*(undefined4 *)(gen_frame + 0x1c0));
  iVar7 = 0x36;
  do {
    puVar2 = puVar2 + -2;
    uVar1 = F_005a2670(puVar2);
    iVar7 = iVar7 + -1;
  } while (-1 < iVar7);
LAB_007daf43: ;
  F_00c47745((*(uint *)(gen_frame + 0x1d8)) ^ (uint)(uint)(gen_frame + 0x1dc));
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentReturn::vf11 */
uint F_007daf60(unsigned int gen_a0)
{
  GEN_ENTER(0x7daf60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
  if (*(int *)(uVar1 + 0x18) != 0) {
    return ~(*((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(uVar1 + 0x18) + 0xe4))) + 4))) >> 4) & 1;
  }
  return 1;
}

/* ref: FUN_007daf90 */
unsigned int F_007daf90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7daf90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if ((char)param_2 != '\0') {
    *(uint *)((int)this + 0xc) = *(uint *)((int)this + 0xc) | param_1;
    return 0;
  }
  *(uint *)((int)this + 0xc) = *(uint *)((int)this + 0xc) & ~param_1;
  if (param_1 == 1) {
    F_00776230(this);
  }
  return 0;
}

/* ref: FUN_007dafc0 */
unsigned int F_007dafc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7dafc0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d44c4));
  in_ecx[3] = 0;
  *(undefined1 *)(in_ecx + 4) = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[0xe] = 0;
  *(undefined1 *)(in_ecx + 0xf) = 0;
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  in_ecx[10] = 0;
  in_ecx[0xb] = 0;
  in_ecx[0xc] = 0;
  in_ecx[0xd] = 0;
  return 0;
}

/* ref: FUN_007db040 */
unsigned int F_007db040(unsigned int gen_a0)
{
  GEN_ENTER(0x7db040u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  piVar1 = *(int * PTR32 *)(uVar2 + 0x17c);
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
  if ((char)uVar2 != '\0') {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    return 0;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentStatus::vf3 */
uint F_007db070(unsigned int gen_a0)
{
  GEN_ENTER(0x7db070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  int * piVar3;
  
  F_00ae0cd0(&REFG(undefined, 0x14c0920),0x28);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  piVar3 = *(int * PTR32 *)(this + 0x38);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)(this + 0x38) = 0;
  }
  *(undefined4 *)(this + 0x14) = 0;
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x130) + 0xc))))(*(int * PTR32 *)(uVar2 + 0x130));
  if (*(int *)(this + 0xc) != 0) {
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,*(undefined4 *)(this + 0xc),0);
    *(undefined4 *)(this + 0xc) = 0;
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x14c) + 0xc))))(*(int * PTR32 *)(uVar2 + 0x14c));
  uVar1 = *(undefined4 *)(this + 8);
  *(undefined4 *)(this + 8) = 0;
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,uVar1,0);
  return uVar2;
}

/* ref: FUN_007db120 */
uint F_007db120(unsigned int gen_a0)
{
  GEN_ENTER(0x7db120u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int * piVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  
  iVar3 = REFG(int, 0x1379694);
  uVar4 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  (*(uint *)(gen_frame + 0xa8)) = uVar4;
  if (REFG(int, 0x1379694) == 0) {
    F_00c47745(uVar4 ^ (uint)(uint)(gen_frame + 0xac));
    return uVar4 & 0xffffff00;
  }
  iVar5 = 0;
  do {
    ((byte *)(gen_frame + 0x8c))[iVar5] = *(byte *)(REFG(int, 0x1379694) + 0x2db8 + iVar5);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x1a);
  ((byte *)(gen_frame + 0x8c))[3] = 0x32;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 88)) = *(undefined4 *)(REFG(int, 0x1379694) + 0x2d90);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 92)) = *(undefined4 *)(REFG(int, 0x1379694) + 0x2d94);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 96)) = *(undefined4 *)(REFG(int, 0x1379694) + 0x2d98);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 100)) = *(undefined4 *)(REFG(int, 0x1379694) + 0x2d9c);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 104)) = *(undefined4 *)(REFG(int, 0x1379694) + 0x2da0);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 108)) = *(undefined4 *)(REFG(int, 0x1379694) + 0x2da4);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 112)) = *(undefined4 *)(REFG(int, 0x1379694) + 0x2da8);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 116)) = *(undefined4 *)(REFG(int, 0x1379694) + 0x2dac);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 120)) = *(undefined4 *)(REFG(int, 0x1379694) + 0x2db0);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 124)) = *(undefined4 *)(REFG(int, 0x1379694) + 0x2db4);
  F_00a9fa40(*(undefined4 *)((int)this + 0x18),1);
  F_00aaa640(*(undefined * PTR32 *)((int)this + 0x18),((byte *)(gen_frame + 0x8c)),((byte *)(gen_frame + 0xc)) + 0x58);
  ((byte *)(gen_frame + 0xc))[8] = (byte)REFG(float, 0x10c44a0);
  ((byte *)(gen_frame + 0xc))[9] = (*(undefined1 *)((char *)&REFG(float, 0x10c44a0) + 1));
  ((byte *)(gen_frame + 0xc))[10] = (*(undefined1 *)((char *)&REFG(float, 0x10c44a0) + 2));
  ((byte *)(gen_frame + 0xc))[0xb] = (*(undefined1 *)((char *)&REFG(float, 0x10c44a0) + 3));
  ((byte *)(gen_frame + 0xc))[0x10] = (byte)REFG(float, 0x10c449c);
  ((byte *)(gen_frame + 0xc))[0x11] = (*(undefined1 *)((char *)&REFG(float, 0x10c449c) + 1));
  ((byte *)(gen_frame + 0xc))[0x12] = (*(undefined1 *)((char *)&REFG(float, 0x10c449c) + 2));
  ((byte *)(gen_frame + 0xc))[0x13] = (*(undefined1 *)((char *)&REFG(float, 0x10c449c) + 3));
  ((byte *)(gen_frame + 0xc))[0x1c] = (byte)REFG(float, 0x10c449c);
  ((byte *)(gen_frame + 0xc))[0x1d] = (*(undefined1 *)((char *)&REFG(float, 0x10c449c) + 1));
  ((byte *)(gen_frame + 0xc))[0x1e] = (*(undefined1 *)((char *)&REFG(float, 0x10c449c) + 2));
  ((byte *)(gen_frame + 0xc))[0x1f] = (*(undefined1 *)((char *)&REFG(float, 0x10c449c) + 3));
  ((byte *)(gen_frame + 0xc))[0x24] = (byte)REFG(float, 0x10c449c);
  ((byte *)(gen_frame + 0xc))[0x25] = (*(undefined1 *)((char *)&REFG(float, 0x10c449c) + 1));
  ((byte *)(gen_frame + 0xc))[0x26] = (*(undefined1 *)((char *)&REFG(float, 0x10c449c) + 2));
  ((byte *)(gen_frame + 0xc))[0x27] = (*(undefined1 *)((char *)&REFG(float, 0x10c449c) + 3));
  ((byte *)(gen_frame + 0xc))[0x28] = (byte)REFG(float, 0x10adbc4);
  ((byte *)(gen_frame + 0xc))[0x29] = (*(undefined1 *)((char *)&REFG(float, 0x10adbc4) + 1));
  ((byte *)(gen_frame + 0xc))[0x2a] = (*(undefined1 *)((char *)&REFG(float, 0x10adbc4) + 2));
  ((byte *)(gen_frame + 0xc))[0x2b] = (*(undefined1 *)((char *)&REFG(float, 0x10adbc4) + 3));
  ((byte *)(gen_frame + 0xc))[0x2c] = (byte)REFG(float, 0x10adbc4);
  ((byte *)(gen_frame + 0xc))[0x2d] = (*(undefined1 *)((char *)&REFG(float, 0x10adbc4) + 1));
  ((byte *)(gen_frame + 0xc))[0x2e] = (*(undefined1 *)((char *)&REFG(float, 0x10adbc4) + 2));
  ((byte *)(gen_frame + 0xc))[0x2f] = (*(undefined1 *)((char *)&REFG(float, 0x10adbc4) + 3));
  ((byte *)(gen_frame + 0xc))[0x30] = (byte)REFG(float, 0x10adbc4);
  ((byte *)(gen_frame + 0xc))[0x31] = (*(undefined1 *)((char *)&REFG(float, 0x10adbc4) + 1));
  ((byte *)(gen_frame + 0xc))[0x32] = (*(undefined1 *)((char *)&REFG(float, 0x10adbc4) + 2));
  ((byte *)(gen_frame + 0xc))[0x33] = (*(undefined1 *)((char *)&REFG(float, 0x10adbc4) + 3));
  ((byte *)(gen_frame + 0xc))[0x34] = (byte)REFG(float, 0x10adbc4);
  ((byte *)(gen_frame + 0xc))[0x35] = (*(undefined1 *)((char *)&REFG(float, 0x10adbc4) + 1));
  ((byte *)(gen_frame + 0xc))[0x36] = (*(undefined1 *)((char *)&REFG(float, 0x10adbc4) + 2));
  ((byte *)(gen_frame + 0xc))[0x37] = (*(undefined1 *)((char *)&REFG(float, 0x10adbc4) + 3));
  uVar4 = (uint)((byte *)(gen_frame + 0x8c))[1] + (uint)((byte *)(gen_frame + 0x8c))[4] * 2;
  ((byte *)(gen_frame + 0xc))[0xc] = (byte)REFG(float, 0x10c44a8);
  ((byte *)(gen_frame + 0xc))[0xd] = (*(undefined1 *)((char *)&REFG(float, 0x10c44a8) + 1));
  ((byte *)(gen_frame + 0xc))[0xe] = (*(undefined1 *)((char *)&REFG(float, 0x10c44a8) + 2));
  ((byte *)(gen_frame + 0xc))[0xf] = (*(undefined1 *)((char *)&REFG(float, 0x10c44a8) + 3));
  ((byte *)(gen_frame + 0xc))[0x14] = (byte)REFG(float, 0x10c44a4);
  ((byte *)(gen_frame + 0xc))[0x15] = (*(undefined1 *)((char *)&REFG(float, 0x10c44a4) + 1));
  ((byte *)(gen_frame + 0xc))[0x16] = (*(undefined1 *)((char *)&REFG(float, 0x10c44a4) + 2));
  ((byte *)(gen_frame + 0xc))[0x17] = (*(undefined1 *)((char *)&REFG(float, 0x10c44a4) + 3));
  ((byte *)(gen_frame + 0xc))[0x38] = (byte)REFG(float, 0x10c44a8);
  ((byte *)(gen_frame + 0xc))[0x39] = (*(undefined1 *)((char *)&REFG(float, 0x10c44a8) + 1));
  ((byte *)(gen_frame + 0xc))[0x3a] = (*(undefined1 *)((char *)&REFG(float, 0x10c44a8) + 2));
  ((byte *)(gen_frame + 0xc))[0x3b] = (*(undefined1 *)((char *)&REFG(float, 0x10c44a8) + 3));
  ((byte *)(gen_frame + 0xc))[0x3c] = (byte)REFG(float, 0x10c4498);
  ((byte *)(gen_frame + 0xc))[0x3d] = (*(undefined1 *)((char *)&REFG(float, 0x10c4498) + 1));
  ((byte *)(gen_frame + 0xc))[0x3e] = (*(undefined1 *)((char *)&REFG(float, 0x10c4498) + 2));
  ((byte *)(gen_frame + 0xc))[0x3f] = (*(undefined1 *)((char *)&REFG(float, 0x10c4498) + 3));
  ((byte *)(gen_frame + 0xc))[0x40] = (byte)REFG(float, 0x10c44a8);
  ((byte *)(gen_frame + 0xc))[0x41] = (*(undefined1 *)((char *)&REFG(float, 0x10c44a8) + 1));
  ((byte *)(gen_frame + 0xc))[0x42] = (*(undefined1 *)((char *)&REFG(float, 0x10c44a8) + 2));
  ((byte *)(gen_frame + 0xc))[0x43] = (*(undefined1 *)((char *)&REFG(float, 0x10c44a8) + 3));
  ((byte *)(gen_frame + 0xc))[0x44] = (byte)REFG(float, 0x10c4498);
  ((byte *)(gen_frame + 0xc))[0x45] = (*(undefined1 *)((char *)&REFG(float, 0x10c4498) + 1));
  ((byte *)(gen_frame + 0xc))[0x46] = (*(undefined1 *)((char *)&REFG(float, 0x10c4498) + 2));
  ((byte *)(gen_frame + 0xc))[0x47] = (*(undefined1 *)((char *)&REFG(float, 0x10c4498) + 3));
  ((byte *)(gen_frame + 0xc))[0] = (byte)REFG(float, 0x1087f04);
  ((byte *)(gen_frame + 0xc))[1] = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 1));
  ((byte *)(gen_frame + 0xc))[2] = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 2));
  ((byte *)(gen_frame + 0xc))[3] = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 3));
  ((byte *)(gen_frame + 0xc))[4] = (byte)REFG(float, 0x1087f04);
  ((byte *)(gen_frame + 0xc))[5] = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 1));
  ((byte *)(gen_frame + 0xc))[6] = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 2));
  ((byte *)(gen_frame + 0xc))[7] = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 3));
  ((byte *)(gen_frame + 0xc))[0x18] = (byte)REFG(float, 0x10c4494);
  ((byte *)(gen_frame + 0xc))[0x19] = (*(undefined1 *)((char *)&REFG(float, 0x10c4494) + 1));
  ((byte *)(gen_frame + 0xc))[0x1a] = (*(undefined1 *)((char *)&REFG(float, 0x10c4494) + 2));
  ((byte *)(gen_frame + 0xc))[0x1b] = (*(undefined1 *)((char *)&REFG(float, 0x10c4494) + 3));
  ((byte *)(gen_frame + 0xc))[0x20] = (byte)REFG(float, 0x10c4494);
  ((byte *)(gen_frame + 0xc))[0x21] = (*(undefined1 *)((char *)&REFG(float, 0x10c4494) + 1));
  ((byte *)(gen_frame + 0xc))[0x22] = (*(undefined1 *)((char *)&REFG(float, 0x10c4494) + 2));
  ((byte *)(gen_frame + 0xc))[0x23] = (*(undefined1 *)((char *)&REFG(float, 0x10c4494) + 3));
  ((byte *)(gen_frame + 0xc))[0x48] = (byte)REFG(float, 0x10ac108);
  ((byte *)(gen_frame + 0xc))[0x49] = (*(undefined1 *)((char *)&REFG(float, 0x10ac108) + 1));
  ((byte *)(gen_frame + 0xc))[0x4a] = (*(undefined1 *)((char *)&REFG(float, 0x10ac108) + 2));
  ((byte *)(gen_frame + 0xc))[0x4b] = (*(undefined1 *)((char *)&REFG(float, 0x10ac108) + 3));
  ((byte *)(gen_frame + 0xc))[0x4c] = (byte)REFG(float, 0x10c4490);
  ((byte *)(gen_frame + 0xc))[0x4d] = (*(undefined1 *)((char *)&REFG(float, 0x10c4490) + 1));
  ((byte *)(gen_frame + 0xc))[0x4e] = (*(undefined1 *)((char *)&REFG(float, 0x10c4490) + 2));
  ((byte *)(gen_frame + 0xc))[0x4f] = (*(undefined1 *)((char *)&REFG(float, 0x10c4490) + 3));
  ((byte *)(gen_frame + 0xc))[0x50] = (byte)REFG(float, 0x10ac108);
  ((byte *)(gen_frame + 0xc))[0x51] = (*(undefined1 *)((char *)&REFG(float, 0x10ac108) + 1));
  ((byte *)(gen_frame + 0xc))[0x52] = (*(undefined1 *)((char *)&REFG(float, 0x10ac108) + 2));
  ((byte *)(gen_frame + 0xc))[0x53] = (*(undefined1 *)((char *)&REFG(float, 0x10ac108) + 3));
  ((byte *)(gen_frame + 0xc))[0x54] = (byte)REFG(float, 0x10c4490);
  ((byte *)(gen_frame + 0xc))[0x55] = (*(undefined1 *)((char *)&REFG(float, 0x10c4490) + 1));
  ((byte *)(gen_frame + 0xc))[0x56] = (*(undefined1 *)((char *)&REFG(float, 0x10c4490) + 2));
  ((byte *)(gen_frame + 0xc))[0x57] = (*(undefined1 *)((char *)&REFG(float, 0x10c4490) + 3));
  if (uVar4 < 0x16) {
    (*(int *)(gen_frame + 0x8)) = *(int *)(((byte *)(gen_frame + 0xc)) + uVar4 * 4);
  }
  else {
    (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x8)) + 0)) = (byte)REFG(float, 0x1087f04);
    (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x8)) + 1)) = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 1));
    (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x8)) + 2)) = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 2));
    (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x8)) + 3)) = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 3));
  }
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 0x4c))))((*(int *)(gen_frame + 0x8)));
  F_00aa1d10(*(undefined * PTR32 *)((int)this + 0x18),(uint)*(byte *)(iVar3 + 0x1680));
  F_00aa1cc0(*(undefined * PTR32 *)((int)this + 0x18),*(undefined4 *)(iVar3 + 0x1678),
               *(undefined4 *)(iVar3 + 0x167c));
  (*(int *)(gen_frame + 0x8)) = 0;
  puVar7 = (undefined4 *)((int)this + 0x20);
  puVar8 = (undefined4 *)(iVar3 + 0x16b0);
  do {
    uVar1 = *puVar8;
    *puVar7 = uVar1;
    uVar2 = puVar8[1];
    puVar7[1] = uVar2;
    F_00aa80c0(*(undefined * PTR32 *)((int)this + 0x18),(*(int *)(gen_frame + 0x8)),uVar1,uVar2);
    (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
    puVar7 = puVar7 + 2;
    puVar8 = puVar8 + 0x1e8;
  } while ((*(int *)(gen_frame + 0x8)) < 2);
  *(undefined1 *)((int)this + 0x3c) = 0;
  piVar6 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = ((code *)*(gen_code32 *)(*piVar6 + 0x24))(piVar6,0x3d);
  if ((uVar4 != 0) && (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x710))) != 0)) {
    *((undefined4 *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x710))) = 0;
    *(undefined1 *)(uVar4 + 0x1d) = 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
  return CONCAT31((int3)(uVar4 >> 8),1);
}

/* ref: FUN_007db3c0 */
byte F_007db3c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7db3c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  uint uVar1;
  int * piVar2;
  int iVar3;
  
  if (REFG(undefined4, 0x1379694) != (int *)0x0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1379694) + 0x70))))(REFG(undefined4, 0x1379694));
    if ((char)uVar1 != '\0') {
      piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + 0xec)));
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 8))))
                        (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),0xc,0x10);
      if (uVar1 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = F_0061f4a0(uVar1);
      }
      *(uint *)((int)this + 0x38) = uVar1;
      F_0061f4d0(uVar1,0);
      this_00 = REFG(undefined4, 0x1487c60);
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4));
      uVar1 = F_0056a740(uVar1 + 0x2db98);
      F_0061f550(this_00,0,uVar1);
      ((code *)*(gen_code32 *)(*piVar2 + 0x7c))(piVar2,*(undefined4 *)((int)this + 0x38));
      iVar3 = 0;
      do {
        piVar2 = ((int *)GEN_TOP((*(int *)((int)this + 0x18) + 0x16c0 + iVar3)));
        if (piVar2 != (int *)0x0) {
          ((code *)*(gen_code32 *)(*piVar2 + 0x7c))(piVar2,*(undefined4 *)((int)this + 0x38));
        }
        iVar3 = iVar3 + 0x7a0;
      } while (iVar3 < 0xf40);
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      uVar1 = F_0062c750(0);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),10);
      (*(uint *)(gen_frame + 0x8)) = uVar1;
      piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2,*(undefined4 *)((int)this + 8),1,&(*(undefined4 *)(gen_frame + 0x4)));
      F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_007db4d0 */
uint F_007db4d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7db4d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d450c));
  *(undefined1 *)(in_ecx + 3) = 1;
  return (uint)in_ecx;
}

/* ref: FUN_007db4f0 */
uint F_007db4f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7db4f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __time64_t _Var1;
  ulonglong uVar2;
  
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d4554));
  F_00a1af40((undefined *)((int)this + 0x10));
  *(undefined1 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0xe0000000;
  *(undefined4 *)((int)this + 0xac) = 0;
  _Var1 = F_00c4b7c2((__time64_t *)0x0);
  *(int *)((int)this + 0x10) = (int)_Var1;
  uVar2 = F_00427d90();
  *(ulonglong *)((int)this + 0x18) = uVar2;
  uVar2 = F_00427e30();
  *(ulonglong *)((int)this + 0x20) = uVar2;
  *(undefined4 *)((int)this + 0x58) = 0xffffffff;
  *(undefined4 *)((int)this + 0x28) = 0xe0000000;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0xe0000000;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0xe0000000;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0xe0000000;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0xe0000000;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0xe0000000;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(uint *)((int)this + 0x58) = *(uint *)((int)this + 0x58) & 0xfffffffe;
  return (uint)this;
}

/* ref: FUN_007dbd80 */
unsigned int F_007dbd80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7dbd80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = this;
  (*(int *)(gen_frame + 0x2c)) = 0;
  iVar2 = 0;
  if ((*(byte *)((int)this + 0x58) & 0x10) != 0) {
    bVar1 = F_00532990(&REFG(undefined4, 0x1375bc0));
    if (bVar1 != 0) {
      (*(ulonglong *)(gen_frame + 0x20)) = F_00533c20(&REFG(undefined4, 0x1375bc0));
      iVar5 = (int)((*(ulonglong *)(gen_frame + 0x20)) >> 0x20);
      iVar2 = (int)(*(ulonglong *)(gen_frame + 0x20));
      if ((((param_2[1] != 0) || (iVar2 != param_2[2])) || (iVar5 != param_2[3])) &&
         (iVar2 != -0x20000000)) {
        uVar3 = F_00a354d0(&REFG(undefined4, 0x14a31f0),iVar2,iVar5);
        if (uVar3 != 0) {
          uVar4 = F_0043e0f0(((undefined1 *)(gen_frame + 0x10)),uVar3);
          bVar1 = F_0043dea0(((undefined1 *)(gen_frame + 0x0)),*param_2,uVar4);
          if (bVar1 != 0) {
            uVar6 = F_007c9d00(uVar3);
            iVar2 = (int)(uVar6 >> 0x20);
            (*(int *)(gen_frame + 0x18)) = (int)uVar6;
            if ((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x48) == (int)(*(ulonglong *)(gen_frame + 0x20))) &&
               (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x4c) == (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4)))) {
              (*(int *)(gen_frame + 0x2c)) = 1;
            }
            else {
              (*(int *)(gen_frame + 0x2c)) = 2;
            }
            uVar3 = F_00431490(((undefined1 *)(gen_frame + 0x0)),(uint)*(ushort *)(param_2 + 4),
                                 (uint)*(ushort *)(param_2 + 5));
            if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 100))) != uVar3) {
              *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 100))) = uVar3;
              *(undefined1 *)(param_1 + 0x1d) = 1;
            }
            if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x68))) != iVar2) {
              *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x68))) = iVar2;
              *(undefined1 *)(param_1 + 0x1d) = 1;
            }
            if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x6c))) != (*(int *)(gen_frame + 0x18))) {
              *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x6c))) = (*(int *)(gen_frame + 0x18));
              *(undefined1 *)(param_1 + 0x1d) = 1;
            }
          }
        }
        iVar2 = (int)(*(ulonglong *)(gen_frame + 0x20));
      }
      *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x48) = iVar2;
      *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x4c) = (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4));
      iVar2 = (*(int *)(gen_frame + 0x2c));
    }
  }
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x60))) != iVar2) {
    *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x60))) = iVar2;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  return 0;
}

/* ref: FUN_007dbed0 */
unsigned int F_007dbed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7dbed0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = this;
  (*(int *)(gen_frame + 0x2c)) = 0;
  iVar2 = 0;
  if ((*(byte *)((int)this + 0x58) & 0x20) != 0) {
    bVar1 = F_00532990(&REFG(undefined4, 0x1375bc0));
    if (bVar1 != 0) {
      (*(ulonglong *)(gen_frame + 0x20)) = F_00533c20(&REFG(undefined4, 0x1375bc0));
      iVar5 = (int)((*(ulonglong *)(gen_frame + 0x20)) >> 0x20);
      iVar2 = (int)(*(ulonglong *)(gen_frame + 0x20));
      if ((((param_2[1] != 0) || (iVar2 != param_2[2])) || (iVar5 != param_2[3])) &&
         (iVar2 != -0x20000000)) {
        uVar3 = F_00a354d0(&REFG(undefined4, 0x14a31f0),iVar2,iVar5);
        if (uVar3 != 0) {
          uVar4 = F_0043e0f0(((undefined1 *)(gen_frame + 0x10)),uVar3);
          bVar1 = F_0043dea0(((undefined1 *)(gen_frame + 0x0)),*param_2,uVar4);
          if (bVar1 != 0) {
            uVar6 = F_007c9d00(uVar3);
            iVar2 = (int)(uVar6 >> 0x20);
            (*(int *)(gen_frame + 0x18)) = (int)uVar6;
            if ((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x50) == (int)(*(ulonglong *)(gen_frame + 0x20))) &&
               (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x54) == (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4)))) {
              (*(int *)(gen_frame + 0x2c)) = 1;
            }
            else {
              (*(int *)(gen_frame + 0x2c)) = 2;
            }
            uVar3 = F_00431490(((undefined1 *)(gen_frame + 0x0)),(uint)*(ushort *)(param_2 + 4),
                                 (uint)*(ushort *)(param_2 + 5));
            if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x7c))) != uVar3) {
              *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x7c))) = uVar3;
              *(undefined1 *)(param_1 + 0x1d) = 1;
            }
            if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x80))) != iVar2) {
              *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x80))) = iVar2;
              *(undefined1 *)(param_1 + 0x1d) = 1;
            }
            if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x84))) != (*(int *)(gen_frame + 0x18))) {
              *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x84))) = (*(int *)(gen_frame + 0x18));
              *(undefined1 *)(param_1 + 0x1d) = 1;
            }
          }
        }
        iVar2 = (int)(*(ulonglong *)(gen_frame + 0x20));
      }
      *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x50) = iVar2;
      *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x54) = (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4));
      iVar2 = (*(int *)(gen_frame + 0x2c));
    }
  }
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x78))) != iVar2) {
    *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x78))) = iVar2;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentTargetCursor::vf5 */
unsigned int F_007dc030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7dc030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  undefined4 extraout_EDX = 0;
  ulonglong uVar6;
  
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,0x17);
  if (uVar4 != 0) {
    if (REFG(int, 0x1375bbc) != -1) {
      (*(int *)(gen_frame + 0x38)) = (&REFG(undefined4, 0x1375b90))[REFG(int, 0x1375bbc)];
      if (((*(int *)(gen_frame + 0x38)) != 0) && (*(int *)((*(int *)(gen_frame + 0x38)) + 0xd0) != 0)) {
        (*(undefined4 *)(gen_frame + 0x34)) = 0;
        if (REFG(int, 0x1375bbc) == 0) {
          (*(undefined4 *)(gen_frame + 0x34)) = *(undefined4 *)((*(int *)(gen_frame + 0x38)) + 0xe0);
        }
        (*(uint *)(gen_frame + 0x2c)) = 0xe0000000;
        (*(undefined4 *)(gen_frame + 0x30)) = 0;
        if (REFG(undefined4, 0x1379694) != (undefined4 *)0x0) {
          (*(uint *)(gen_frame + 0x2c)) = ((code *)*((gen_code32 *)GEN_TOP(*REFG(int * PTR32, 0x1379694))))(REFG(undefined4, 0x1379694));
          (*(undefined4 *)(gen_frame + 0x30)) = extraout_EDX;
        }
        if (this[0xa0] != (undefined1)0x0) {
          uVar6 = F_00538780(&REFG(undefined4, 0x1375bc0));
          (*(undefined4 *)(gen_frame + 0x28)) = (int)(uVar6 >> 0x20);
          if ((uVar6 != *(ulonglong *)(this + 0xa8)) ||
             (((*(int *)(this + 0xa8) == -0x20000000 && (*(int *)(this + 0xac) == 0)) ||
              (uVar6 == 0xe0000000)))) {
            this[0xa0] = (undefined1)0x0;
          }
        }
        (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0x38));
        (*(undefined4 *)(gen_frame + 0x10)) = (*(undefined4 *)(gen_frame + 0x34));
        (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x2c));
        (*(undefined4 *)(gen_frame + 0x18)) = (*(undefined4 *)(gen_frame + 0x30));
        uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4));
        (*(uint *)(gen_frame + 0x1c)) = (uint)*(ushort *)(uVar5 + 0x22d18);
        uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4));
        (*(uint *)(gen_frame + 0x20)) = (uint)*(ushort *)(uVar5 + 0x22d1a);
        F_007db590(this,uVar4,&(*(int *)(gen_frame + 0xc)));
        F_007db710(this,uVar4,&(*(int *)(gen_frame + 0xc)));
        F_007dba40(this,uVar4,&(*(int *)(gen_frame + 0xc)));
        F_007dbc10(this,uVar4,&(*(int *)(gen_frame + 0xc)));
        F_007dbd80(this,uVar4,&(*(int *)(gen_frame + 0xc)));
        F_007dbed0(this,uVar4,&(*(int *)(gen_frame + 0xc)));
        F_00776e40(uVar4,&(*(int *)(gen_frame + 0xc)));
        iVar1 = *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x40)));
        iVar2 = *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x58)));
        piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
        uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,4);
        if (uVar4 != 0) {
          if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x794))) != iVar1) {
            *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x794))) = iVar1;
            *(undefined1 *)(uVar4 + 0x1d) = 1;
          }
          if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x798))) != iVar2) {
            *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x798))) = iVar2;
            *(undefined1 *)(uVar4 + 0x1d) = 1;
          }
        }
        piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
        uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,0x14);
        if (uVar4 == 0) {
          return 0;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 4))) != iVar1) {
          *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 4))) = iVar1;
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 8))) == iVar2) {
          return 0;
        }
        *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 8))) = iVar2;
        *(undefined1 *)(uVar4 + 0x1d) = 1;
        return 0;
      }
    }
    *(undefined4 *)(this + 0x28) = 0xe0000000;
    *(undefined4 *)(this + 0x2c) = 0;
    if (**(int * PTR32 *)(uVar4 + 0x20) != 0) {
      **(int * PTR32 *)(uVar4 + 0x20) = 0;
      *(undefined1 *)(uVar4 + 0x1d) = 1;
    }
    *(undefined4 *)(this + 0x30) = 0xe0000000;
    *(undefined4 *)(this + 0x34) = 0;
    if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x18))) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x18))) = 0;
      *(undefined1 *)(uVar4 + 0x1d) = 1;
    }
    *(undefined4 *)(this + 0x38) = 0xe0000000;
    *(undefined4 *)(this + 0x3c) = 0;
    if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x30))) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x30))) = 0;
      *(undefined1 *)(uVar4 + 0x1d) = 1;
    }
    *(undefined4 *)(this + 0x40) = 0xe0000000;
    *(undefined4 *)(this + 0x44) = 0;
    if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x48))) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x48))) = 0;
      *(undefined1 *)(uVar4 + 0x1d) = 1;
    }
    *(undefined4 *)(this + 0x48) = 0xe0000000;
    *(undefined4 *)(this + 0x4c) = 0;
    if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x60))) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x60))) = 0;
      *(undefined1 *)(uVar4 + 0x1d) = 1;
    }
    *(undefined4 *)(this + 0x50) = 0xe0000000;
    *(undefined4 *)(this + 0x54) = 0;
    if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x78))) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x78))) = 0;
      *(undefined1 *)(uVar4 + 0x1d) = 1;
    }
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentTeleport::vf11 */
uint F_007dc3c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7dc3c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
  if (*(int *)(uVar1 + 0x18) != 0) {
    return ~(*((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(uVar1 + 0x18) + 0xe4))) + 4))) >> 3) & 1;
  }
  return 1;
}

/* ref: FUN_007dc3f0 */
uint F_007dc3f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7dc3f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  in_ecx[3] = (*(undefined * PTR32 (*)[2])REFP(0x10b815c));
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d45b4));
  in_ecx[3] = (*(undefined * PTR32 (*)[2])REFP(0x10d45a4));
  puVar1 = in_ecx + 4;
  param_2 = 9;
  do {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
    F_0042b630(puVar1 + 1);
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    *(undefined2 *)(puVar1 + 0x19) = 0;
    *(undefined1 *)((int)puVar1 + 0x66) = 0;
    puVar1 = puVar1 + 0x1a;
    param_2 = param_2 + -1;
  } while (-1 < param_2);
  in_ecx[0x108] = 0;
  in_ecx[0x109] = 0;
  *(undefined1 *)(in_ecx + 0x10a) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_007dc470 */
unsigned int F_007dc470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7dc470u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined * pvVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  
  if (*(int *)((int)this + 0x414) != 0) {
    return 0;
  }
  iVar4 = 0;
  do {
    pvVar1 = (undefined *)F_00a3af20(&REFG(undefined, 0x14a4230),iVar4);
    if (pvVar1 != (undefined *)0x0) {
      if (*(char *)((int)pvVar1 + 6) == '\0') {
        uVar2 = *(uint *)((int)pvVar1 + 8);
        if ((*(byte *)((int)pvVar1 + 0x14) & 1) != 0) {
          uVar2 = uVar2 + 1000000;
        }
      }
      else {
        pvVar1 = (undefined *)F_00a3a860(pvVar1);
        uVar2 = F_0046e5e0(pvVar1);
      }
      if (uVar2 == 0) {
        if (iVar4 < 0) {
          return 0;
        }
        if (*(int *)((int)this + 0x414) != 0) {
          piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + -8) + 0x1c))))
                                    (*(int * PTR32 *)((int)this + -8))));
          ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,*(undefined4 *)((int)this + 0x414),0);
          *(undefined4 *)((int)this + 0x414) = 0;
        }
        *(undefined4 *)((int)this + 0x418) = *(undefined4 *)((int)this + -4);
        F_00a47f70(&REFG(undefined, 0x14a4230),param_2,param_1,0x7d5,iVar4,1);
        return 0;
      }
    }
    iVar4 = iVar4 + 1;
    if (4 < iVar4) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_007dc540 */
uint F_007dc540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7dc540u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  
  *(undefined4 *)((int)this + 4) = param_1;
  puVar1 = (undefined4 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 8) = 0;
  *puVar1 = (*(undefined * PTR32 (*)[2])REFP(0x10909b4));
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *puVar1 = (*(undefined * PTR32 (*)[2])REFP(0x10d4640));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d45fc));
  *(undefined2 *)((int)this + 0x108) = 1;
  *(undefined4 *)((int)this + 0x10c) = 0xffffffff;
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4));
  F_0043cfd0(puVar1);
  return (uint)this;
}

/* ref: FUN_007dc5a0 */
uint F_007dc5a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7dc5a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  int * piVar3;
  undefined4 * puVar4;
  
  puVar1 = (undefined4 *)((int)this + 0xc);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d45fc));
  *puVar1 = (*(undefined * PTR32 (*)[2])REFP(0x10d4640));
  puVar4 = puVar1;
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4));
  uVar2 = F_0043cff0(puVar4);
  *puVar1 = (*(undefined * PTR32 (*)[2])REFP(0x10909b4));
  if (*(undefined * PTR32 *)((int)this + 0x14) != (undefined *)0x0) {
    uVar2 = F_00414620(*(undefined * PTR32 *)((int)this + 0x14),puVar1);
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: FUN_007dc610 */
uint F_007dc610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7dc610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int * piVar2;
  uint uVar3;
  uint * puVar4;
  undefined * pvVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar3 = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x6c))))(*(int * PTR32 *)((int)this + 4));
  *(char *)((int)this + 0x109) = (char)uVar1;
  (*(byte *)(gen_frame + 0xb)) = 1;
  puVar4 = (uint *)((int)this + 0x1c);
  do {
    uVar1 = F_00ab3b40(uVar3);
    if (((uVar1 != 0) && (*(char *)(uVar1 + 0x19) == *(char *)((int)this + 0x108))) &&
       (((&REFG(undefined1, 0x14b4edc))[uVar3 >> 3] & (*(byte *)(gen_frame + 0xb))) != 0)) {
      puVar4[-1] = uVar1;
      (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + 1;
      *puVar4 = uVar3;
      puVar4 = puVar4 + 2;
      if (0x1d < (*(int *)(gen_frame + 0x4))) break;
    }
    uVar3 = uVar3 + 1;
    (*(byte *)(gen_frame + 0xb)) = (*(byte *)(gen_frame + 0xb)) << 1 | (char)(*(byte *)(gen_frame + 0xb)) < '\0';
  } while ((int)uVar3 < 0x101);
  F_007777b0(this,0,(*(int *)(gen_frame + 0x4)) + -1);
  if (0 < (*(int *)(gen_frame + 0x4))) {
    pvVar5 = (undefined *)((int)param_1 + 0x110);
    piVar2 = (int *)((int)this + 0x18);
    (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x4));
    do {
      puVar4 = (uint *)*piVar2;
      uVar1 = *puVar4;
      F_005a2710(pvVar5,6);
      *(uint *)((int)pvVar5 + 4) = (uVar1 & 0xffffff) + (int)puVar4;
      piVar2 = piVar2 + 2;
      pvVar5 = (undefined *)((int)pvVar5 + 8);
      (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + -1;
    } while ((*(int *)(gen_frame + 0x0)) != 0);
  }
  F_005a2710((undefined *)((int)param_1 + 0x108),4);
  *(int *)((int)param_1 + 0x10c) = (*(int *)(gen_frame + 0x4));
  uVar8 = 0;
  uVar7 = 0;
  if (*(char *)((int)this + 0x109) == '\0') {
    uVar6 = 0xd40;
  }
  else {
    uVar6 = 0xd41;
  }
  pvVar5 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043bd00(pvVar5,uVar6,uVar7,uVar8);
  uVar3 = F_005a2710(param_1,6);
  *(uint *)((int)param_1 + 4) = uVar1;
  return uVar3;
}

/* ref: FUN_007dc740 */
uint F_007dc740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7dc740u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d464c));
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[7] = 0;
  *(undefined2 *)(in_ecx + 8) = 0x100;
  *(undefined1 *)((int)in_ecx + 0x22) = 1;
  puVar1 = in_ecx + 9;
  param_2 = 0x31;
  do {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
    F_0042b630(puVar1 + 1);
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    *(undefined2 *)(puVar1 + 0x19) = 0;
    *(undefined1 *)((int)puVar1 + 0x66) = 0;
    puVar1 = puVar1 + 0x1a;
    param_2 = param_2 + -1;
  } while (-1 < param_2);
  return (uint)in_ecx;
}

/* ref: FUN_007dc7b0 */
uint F_007dc7b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7dc7b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  uint uVar1;
  
  uVar1 = F_00777b50(param_1,0,3,param_2,param_3);
  *param_4 = 7;
  if (uVar1 == 0) {
    uVar1 = F_00777b50(param_1,1000,1000,param_2,param_3);
    *param_4 = 1;
    if (uVar1 == 0) {
      uVar1 = F_00777b50(param_1,0xdac,0xdac,param_2,param_3);
      *param_4 = 2;
      if (uVar1 == 0) {
        uVar1 = F_00777b50(param_1,0xc80,0xc80,param_2,param_3);
        *param_4 = 2;
        if (uVar1 == 0) {
          uVar1 = F_00777b50(param_1,0xc81,0xc83,param_2,param_3);
          *param_4 = 3;
          if (uVar1 == 0) {
            uVar1 = F_00777b50(param_1,0xc84,0xc86,param_2,param_3);
            *param_4 = 4;
            if (uVar1 == 0) {
              uVar1 = F_00777b50(param_1,0xc87,0xc88,param_2,param_3);
              *param_4 = 5;
              if (uVar1 == 0) {
                uVar1 = F_00777b50(param_1,0xc89,0xc89,param_2,param_3);
                *param_4 = 6;
                if (uVar1 == 0) {
                  uVar1 = F_00777b50(param_1,0xce4,0xce4,param_2,param_3);
                  *param_4 = 6;
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar1;
}

/* ref: FUN_007dc920 */
unsigned int F_007dc920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7dc920u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d4694));
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  return 0;
}

/* ref: Client::UI2::Agent::AgentLegacyItemStorage::vf3 */
unsigned int F_007dc950(unsigned int gen_a0)
{
  GEN_ENTER(0x7dc950u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)(this + 0xc) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 0xc),0);
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 0x10) = 0;
  }
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return 0;
}

/* ref: FUN_007dc9b0 */
byte F_007dc9b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x7dc9b0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  byte bVar1;
  ushort uVar2;
  undefined * pvVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  uint * puVar11;
  int * piVar12;
  int local_8;
  
  pvVar3 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c)));
  if (pvVar3 == (undefined *)0x0) {
    return 0;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = pvVar3;
  if (*(char *)((int)pvVar3 + 6) == '\0') {
    uVar4 = *(uint *)((int)pvVar3 + 8);
    if ((*(byte *)((int)pvVar3 + 0x14) & 1) != 0) {
      uVar4 = uVar4 + 1000000;
    }
  }
  else {
    pvVar3 = (undefined *)F_00a3a860(pvVar3);
    uVar4 = F_0046e5e0(pvVar3);
  }
  uVar4 = F_00ab24a0(uVar4);
  *(*(uint * PTR32 *)&gen_args[2]) = uVar4;
  if (uVar4 == 0) {
    return 0;
  }
  piVar12 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14)));
  (*((undefined1 *)GEN_TOP(((char *)&(*(uint * PTR32 *)&gen_args[2]) + 3)))) = 1;
  uVar4 = F_007782c0(*(*(undefined4 * PTR32 *)&gen_args[1]));
  local_8 = 0;
  if (0 < (int)uVar4) {
    iVar5 = (*(int *)&gen_args[4]) - (int)(*(uint * PTR32 *)&gen_args[3]);
    iVar6 = (*(int *)&gen_args[5]) - (int)(*(uint * PTR32 *)&gen_args[3]);
    puVar11 = (*(uint * PTR32 *)&gen_args[3]);
    do {
      piVar12 = piVar12 + 1;
      if (*piVar12 == 0) {
        uVar7 = F_00778330(*(*(undefined4 * PTR32 *)&gen_args[1]),local_8);
        pvVar3 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1])));
        if ((*(char *)((int)pvVar3 + 6) == '\0') || (uVar8 = F_00a3a860(pvVar3), uVar8 == 0)) {
          uVar2 = *((ushort *)GEN_TOP(((int)pvVar3 + (uVar7 & 0xff) * 2 + 0x20)));
        }
        else {
          uVar8 = uVar7;
          pvVar3 = (undefined *)F_00a3a860(pvVar3);
          uVar2 = F_0071d2c0(pvVar3,uVar8);
        }
        if (uVar2 != 0) {
          uVar8 = F_00ab20e0((uint)uVar2);
          *puVar11 = uVar8;
          if ((*(uint * PTR32 *)&gen_args[3]) != (uint *)0x0) {
            pvVar3 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1])));
            if ((*(char *)((int)pvVar3 + 6) == '\0') || (uVar8 = F_00a3a860(pvVar3), uVar8 == 0))
            {
              bVar1 = *((byte *)GEN_TOP(((uVar7 & 0xff) + 0x2a + (int)pvVar3)));
            }
            else {
              pvVar3 = (undefined *)F_00a3a860(pvVar3);
              bVar1 = F_0071d300(pvVar3,uVar7);
            }
            uVar9 = *(undefined4 *)(*puVar11 + (uint)bVar1 * 4);
            goto LAB_007dcb16;
          }
        }
LAB_007dcb2f: ;
        (*((undefined1 *)GEN_TOP(((char *)&(*(uint * PTR32 *)&gen_args[2]) + 3)))) = 0;
      }
      else {
        uVar7 = F_00a6add0(*piVar12);
        *puVar11 = uVar7;
        if (uVar7 == 0) goto LAB_007dcb2f;
        iVar10 = 0;
        do {
          if (*(int *)(uVar7 + iVar10 * 4) == *piVar12) goto LAB_007dca7d;
          iVar10 = iVar10 + 1;
        } while (iVar10 < 10);
        iVar10 = 0;
LAB_007dca7d: ;
        uVar9 = *(undefined4 *)(uVar7 + iVar10 * 4);
LAB_007dcb16: ;
        *(undefined4 *)(iVar5 + (int)puVar11) = uVar9;
        uVar7 = F_00ab24a0(uVar9);
        *(uint *)(iVar6 + (int)puVar11) = uVar7;
        if (uVar7 == 0) goto LAB_007dcb2f;
      }
      (*(uint * PTR32 *)&gen_args[3]) = (*(uint * PTR32 *)&gen_args[3]) + 5;
      local_8 = local_8 + 1;
      puVar11 = puVar11 + 1;
    } while (local_8 < (int)uVar4);
  }
  if ((*(int *)&gen_args[8]) != -1) {
    uVar4 = F_00778330(*(*(undefined4 * PTR32 *)&gen_args[1]),(*(int *)&gen_args[8]));
    pvVar3 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1])));
    if ((*(char *)((int)pvVar3 + 6) == '\0') || (uVar7 = F_00a3a860(pvVar3), uVar7 == 0)) {
      bVar1 = *((byte *)GEN_TOP(((uVar4 & 0xff) + 0x2a + (int)pvVar3)));
    }
    else {
      pvVar3 = (undefined *)F_00a3a860(pvVar3);
      bVar1 = F_0071d300(pvVar3,uVar4);
    }
    iVar6 = 0;
    iVar5 = (*(int *)&gen_args[6]) - (int)(*(uint * PTR32 *)&gen_args[7]);
    do {
      uVar4 = F_00ab20e0(iVar6 + 2);
      uVar9 = *(undefined4 *)(uVar4 + (uint)bVar1 * 4);
      *((undefined4 *)GEN_TOP((iVar5 + (int)(*(uint * PTR32 *)&gen_args[7])))) = uVar9;
      uVar4 = F_00ab24a0(uVar9);
      *(*(uint * PTR32 *)&gen_args[7]) = uVar4;
      if (uVar4 == 0) {
        (*((undefined1 *)GEN_TOP(((char *)&(*(uint * PTR32 *)&gen_args[2]) + 3)))) = 0;
      }
      iVar6 = iVar6 + 1;
      (*(uint * PTR32 *)&gen_args[7]) = (*(uint * PTR32 *)&gen_args[7]) + 1;
    } while (iVar6 < 0x18);
  }
  return (*((undefined1 *)GEN_TOP(((char *)&(*(uint * PTR32 *)&gen_args[2]) + 3))));
}

/* ref: FUN_007dcbf0 */
uint F_007dcbf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x7dcbf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int * param_6 = (int *)(uintptr_t)gen_a6;
  int param_7 = (int)gen_a7;
  int param_8 = (int)gen_a8;
  __declspec(align(16)) undefined1 gen_frame[0x160];
  undefined4 * puVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  undefined * pvVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint * puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  
  (*(uint *)(gen_frame + 0x158)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x15c);
  uVar4 = F_007782c0(param_4);
  F_005a2710((undefined *)(param_1 + 0x30),3);
  *(uint *)(param_1 + 0x34) = uVar4;
  pvVar5 = F_00c48350(((int *)(gen_frame + 0x30)),-1,0x128);
  uVar7 = (uint)pvVar5 & 0xffffff00;
  (*(undefined1 *)(gen_frame + 0x27)) = 0;
  (*(int *)(gen_frame + 0x8)) = 0;
  if (0 < (int)uVar4) {
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = param_3;
    iVar6 = param_8 - (int)param_6;
    puVar12 = (uint *)(param_1 + 100);
    do {
      uVar7 = F_00778330(param_4,(*(int *)(gen_frame + 0x8)));
      if ((*(char *)((int)param_4 + 6) == '\0') || (uVar8 = F_00a3a860(param_4), uVar8 == 0)) {
        uVar3 = *((ushort *)GEN_TOP(((int)param_4 + (uVar7 & 0xff) * 2 + 0x20)));
      }
      else {
        uVar8 = uVar7;
        pvVar5 = (undefined *)F_00a3a860(param_4);
        uVar3 = F_0071d2c0(pvVar5,uVar8);
      }
      if (uVar3 != 0) {
        if ((*(char *)((int)param_4 + 6) == '\0') || (uVar8 = F_00a3a860(param_4), uVar8 == 0)) {
          bVar2 = *((byte *)GEN_TOP(((uVar7 & 0xff) + 0x2a + (int)param_4)));
        }
        else {
          uVar8 = uVar7;
          pvVar5 = (undefined *)F_00a3a860(param_4);
          bVar2 = F_0071d300(pvVar5,uVar8);
        }
        if (bVar2 != 0xffffffff) {
          if ((*(char *)((int)param_4 + 6) == '\0') || (uVar8 = F_00a3a860(param_4), uVar8 == 0))
          {
            (*(byte *)(gen_frame + 0x2f)) = *((byte *)GEN_TOP(((uVar7 & 0xff) + 0x2a + (int)param_4)));
          }
          else {
            pvVar5 = (undefined *)F_00a3a860(param_4);
            (*(byte *)(gen_frame + 0x2f)) = F_0071d300(pvVar5,uVar7);
          }
          puVar1 = (undefined4 *)((int)param_6 + iVar6);
          uVar7 = F_00ab65a0(0,*(undefined4 *)((int)param_6 + iVar6));
          F_005a2710(puVar12 + -0xb,3);
          pvVar5 = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + (param_2 - (int)param_3))));
          uVar8 = (uint)(*(byte *)(gen_frame + 0x2f));
          puVar12[-10] = uVar7;
          uVar7 = F_00ab6240(*(undefined4 *)(*param_6 + uVar8 * 4),1,*puVar1);
          F_0042e430(pvVar5,uVar7);
          uVar7 = F_0042a990(pvVar5);
          F_005a2710(puVar12 + -1,6);
          *puVar12 = uVar7;
          uVar7 = *((uint *)GEN_TOP(((int)puVar1 + (param_7 - param_8))));
          F_005a2710(puVar12 + 9,3);
          puVar12[10] = uVar7;
          (*(byte *)(gen_frame + 0x2f)) = *(byte *)(*param_6 + 0x28);
          uVar7 = (uint)(*(byte *)(gen_frame + 0x2f));
          if (((int *)(gen_frame + 0x30))[uVar7] == -1) {
            uVar9 = F_00a6ad20((uint)*(byte *)(*param_6 + 0x28),param_5);
            uVar10 = F_00a3ba20(uVar7,param_4,0);
            (*(byte *)(gen_frame + 0x2f)) = *(byte *)(*param_6 + 0x28);
            uVar7 = (uint)(*(byte *)(gen_frame + 0x2f));
            ((int *)(gen_frame + 0x30))[uVar7] = uVar9 - uVar10;
          }
          if (((int *)(gen_frame + 0x30))[*(byte *)(*param_6 + 0x28)] < (int)*(char *)(*param_6 + 0x29 + uVar8)) {
            iVar11 = ((int *)(gen_frame + 0x30))[*(byte *)(*param_6 + 0x28)];
            ((int *)(gen_frame + 0x30))[*(byte *)(*param_6 + 0x28)] = 0;
          }
          else {
            iVar11 = (int)*(char *)(*param_6 + 0x29 + uVar8);
            ((int *)(gen_frame + 0x30))[*(byte *)(*param_6 + 0x28)] = ((int *)(gen_frame + 0x30))[*(byte *)(*param_6 + 0x28)] - iVar11;
          }
          if ((*(byte *)(gen_frame + 0x2f)) != 0) {
            uVar14 = 1;
            uVar13 = 0x20f;
            iVar15 = iVar11;
            pvVar5 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))
                                       (*(int * PTR32 *)((int)this + 4))));
            uVar7 = F_00461d60(pvVar5,uVar13,uVar7,uVar14,iVar15);
            F_0042e430((*(undefined * PTR32 *)(gen_frame + 0x18)),uVar7);
          }
          uVar7 = F_0042a990((*(undefined * PTR32 *)(gen_frame + 0x18)));
          F_005a2710(puVar12 + 0x13,6);
          puVar12[0x14] = uVar7;
          if (iVar11 == *(char *)(uVar8 + 0x29 + *param_6)) {
            F_005a2710(puVar12 + 0x1d,3);
            puVar12[0x1e] = 0;
          }
          else {
            F_005a2710(puVar12 + 0x1d,3);
            puVar12[0x1e] = 1;
            (*(undefined1 *)(gen_frame + 0x27)) = 1;
          }
        }
      }
      (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x54);
      (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
      puVar12 = puVar12 + 2;
      param_6 = param_6 + 1;
    } while ((*(int *)(gen_frame + 0x8)) < (int)uVar4);
    uVar7 = CONCAT31((int3)((uint)(*(int *)(gen_frame + 0x8)) >> 8),(*(undefined1 *)(gen_frame + 0x27)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x158)) ^ (uint)(uint)(gen_frame + 0x15c));
  return uVar7;
}

/* ref: FUN_007dcff0 */
uint F_007dcff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7dcff0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  byte bVar2;
  byte * pbVar3;
  
  iVar1 = (*(int *)&gen_args[1]);
  if ((((*(undefined * PTR32 *)&gen_args[0]) != (undefined *)0x0) && ((*(int *)&gen_args[1]) != 0)) && (*(char *)((*(int *)&gen_args[1]) + 0xa3) != '\a')) {
    bVar2 = F_00a3bef0((*(undefined * PTR32 *)&gen_args[0]));
    pbVar3 = (byte *)(iVar1 + 0xa5);
    if (*pbVar3 <= bVar2) {
      pbVar3 = ((byte *)GEN_TOP(((int)&(*(undefined * PTR32 *)&gen_args[0]) + 3)));
    }
    return (uint)*pbVar3;
  }
  return 0;
}

/* ref: FUN_007dd030 */
uint F_007dd030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7dd030u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar2 = *(undefined4 *)((int)this + 0x44);
  uVar3 = *(undefined4 *)((int)this + 0x48);
  uVar1 = *(undefined1 *)((int)this + 0x92);
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar4 = F_00a3d520(&REFG(undefined, 0x14a4230),*(undefined4 *)((int)this + 0x40),param_1,param_2,param_3);
    if (uVar4 != 0) {
      F_00a369d0();
      uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
      return uVar4;
    }
  }
  ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  uVar5 = F_007784e0(this);
  *(undefined4 *)((int)this + 0x44) = uVar2;
  *(int *)((int)this + 0x38) = param_1;
  *(int *)((int)this + 0x3c) = param_2;
  *(undefined4 *)((int)this + 0xc) = 6;
  *(undefined4 *)((int)this + 0x10) = 5;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x48) = uVar3;
  *(undefined1 *)((int)this + 0x92) = uVar1;
  *(undefined4 *)((int)this + 0x4c) = param_3;
  return CONCAT31((int3)((uint)uVar5 >> 8),uVar1);
}

/* ref: FUN_007dd0f0 */
uint F_007dd0f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7dd0f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  byte bVar1;
  
  if (param_2 != 0) {
    if (param_3 != *(int *)(param_2 + 0x74)) {
      return 0x1165;
    }
    if (param_4 < (int)(uint)*(byte *)(param_2 + 0x9f)) {
      return 0x1166;
    }
    if ((char)param_5 == '\0') {
      bVar1 = F_00778a20(param_1);
      if (bVar1 != 0) {
        return 0x1167;
      }
    }
  }
  return 0;
}

/* ref: FUN_007dd150 */
uint F_007dd150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7dd150u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  byte bVar2;
  byte * pbVar3;
  
  iVar1 = (*(int *)&gen_args[1]);
  if (((*(undefined * PTR32 *)&gen_args[0]) != (undefined *)0x0) && ((*(int *)&gen_args[1]) != 0)) {
    bVar2 = F_00a3bef0((*(undefined * PTR32 *)&gen_args[0]));
    pbVar3 = (byte *)(iVar1 + 0xa5);
    if (*pbVar3 <= bVar2) {
      pbVar3 = ((byte *)GEN_TOP(((int)&(*(undefined * PTR32 *)&gen_args[0]) + 3)));
    }
    return (uint)*pbVar3;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentCrossEditor::vf1 */
uint F_007dd190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7dd190u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  
  bVar2 = 0;
  if (0 < param_3) {
    if (param_4 == 1) {
      if ((*param_2 & 0xf) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(param_2 + 4);
      }
      bVar2 = F_00778c80(this,uVar3);
    }
    else if (param_4 == 2) {
      if ((*param_2 & 0xf) != 0) {
        iVar1 = *(int *)(param_2 + 4);
        if ((iVar1 < 0) || (iVar1 == 1)) {
          *(undefined4 *)(this + 0x6c) = 2;
        }
        else if (iVar1 == 0) goto LAB_007dd1bc;
        *(undefined4 *)(this + 0x68) = 0;
        *(undefined1 *)(param_1 + 1) = 1;
        *param_1 = 2;
        return (uint)param_1;
      }
LAB_007dd1bc: ;
      *(undefined4 *)(this + 0x6c) = 1;
      *(undefined4 *)(this + 0x68) = 0;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = 2;
      return (uint)param_1;
    }
  }
  *(byte *)(param_1 + 1) = bVar2;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: FUN_007dd230 */
uint F_007dd230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7dd230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined2 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d46dc));
  *(undefined4 *)((int)this + 0x10) = 0;
  F_0042cc20((undefined *)((int)this + 0x14),&REFG(undefined, 0x10be323),REFG(undefined4, 0x108cc50));
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  return (uint)this;
}

/* ref: FUN_007dd280 */
uint F_007dd280(unsigned int gen_a0)
{
  GEN_ENTER(0x7dd280u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d46dc));
  uVar3 = F_0042c880((undefined *)((int)this + 0x14));
  uVar2 = (uint)uVar3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: FUN_007dd2d0 */
uint F_007dd2d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x7dd2d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a4;
  int param_5 = (int)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  undefined4 uVar1;
  bool bVar2;
  uint uVar3;
  undefined * this_00;
  undefined4 * this_01;
  undefined * pvVar4;
  int iVar5;
  uint * puVar6;
  uint uVar7;
  int iVar8;
  uint * puVar9;
  
  (*(uint *)(gen_frame + 0x208)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x20c);
  uVar7 = 0;
  if (((int)param_3 < 0) || (7 < param_3)) {
    (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (undefined *)0x0;
  }
  else {
    (*(undefined * PTR32 *)(gen_frame + 0x1c)) = *(undefined * PTR32 *)(&REFG(undefined, 0x10c4510) + param_3 * 4);
  }
  *(undefined4 *)((int)this + 0x28) = 0;
  (*(uint *)(gen_frame + 0x24)) = 0;
  F_00c48350(((undefined1 *)(gen_frame + 0x28)),0,0x1e0);
  do {
    uVar3 = F_00ab3c60(uVar7);
    if ((uVar3 != 0) && ((undefined *)(uint)*(byte *)(uVar3 + 8) == (*(undefined * PTR32 *)(gen_frame + 0x1c)))) {
      iVar8 = *(int *)((int)this + 0x28);
      *(uint *)(((undefined1 *)(gen_frame + 0x28)) + iVar8 * 4 + -4) = uVar7;
      *(int *)((int)this + 0x28) = iVar8 + 1;
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 0x79);
  iVar8 = 0;
  bVar2 = true;
  if (0 < *(int *)((int)this + 0x28)) {
    do {
      uVar3 = F_00ab3c60(*(undefined4 *)(((undefined1 *)(gen_frame + 0x28)) + iVar8 * 4 + -4));
      uVar7 = 0;
      if ((uVar3 != 0) && (uVar7 = F_00ab24a0(*(undefined4 *)(uVar3 + 4)), uVar7 == 0)) {
        bVar2 = false;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)((int)this + 0x28));
    if (!bVar2) {
      F_00c47745((*(uint *)(gen_frame + 0x208)) ^ (uint)(uint)(gen_frame + 0x20c));
      return uVar7 & 0xffffff00;
    }
  }
  (*(int *)(gen_frame + 0xc)) = 0;
  do {
    this_00 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),(*(int *)(gen_frame + 0xc)));
    if ((this_00 != (undefined *)0x0) && ((*(int *)(gen_frame + 0x20)) = 0, 0 < *(int *)((int)this_00 + 0xc))) {
      do {
        this_01 = (undefined4 *)F_00a37da0(this_00,(*(int *)(gen_frame + 0x20)));
        if (this_01 != (undefined4 *)0x0) {
          if (*(char *)((int)this_01 + 6) == '\0') {
            uVar7 = this_01[2];
            if ((*(byte *)(this_01 + 5) & 1) != 0) {
              uVar7 = uVar7 + 1000000;
            }
          }
          else {
            pvVar4 = (undefined *)F_00a3a860(this_01);
            uVar7 = F_0046e5e0(pvVar4);
          }
          if (uVar7 != 0) {
            if (*(char *)((int)this_01 + 6) == '\0') {
              uVar7 = this_01[2];
              if ((*(byte *)(this_01 + 5) & 1) != 0) {
                uVar7 = uVar7 + 1000000;
              }
            }
            else {
              pvVar4 = (undefined *)F_00a3a860(this_01);
              uVar7 = F_0046e5e0(pvVar4);
            }
            uVar7 = F_00ab24a0(uVar7);
            if ((((uVar7 != 0) && (*(char *)(uVar7 + 0xa0) == '\x0f')) &&
                (uVar3 = F_00ab3c60(*(undefined4 *)(uVar7 + 0x2c)), uVar3 != 0)) &&
               ((undefined *)(uint)*(byte *)(uVar3 + 8) == (*(undefined * PTR32 *)(gen_frame + 0x1c)))) {
              iVar8 = *(int *)((int)this + 0x28);
              iVar5 = 0;
              if (0 < iVar8) {
                do {
                  if (*(int *)(((undefined1 *)(gen_frame + 0x28)) + iVar5 * 4 + -4) == *(int *)(uVar7 + 0x2c)) break;
                  iVar5 = iVar5 + 1;
                } while (iVar5 < iVar8);
              }
              if ((iVar5 != iVar8) && (*((int *)GEN_TOP((*(int *)((int)this + 0x30) + iVar5 * 4))) == 0)) {
                *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x30) + iVar5 * 4))) = this_01;
                F_00a3d750(&REFG(undefined, 0x14a4230),*this_01,(uint)*(ushort *)(this_01 + 1));
              }
            }
          }
        }
        (*(int *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0x20)) + 1;
      } while ((*(int *)(gen_frame + 0x20)) < *(int *)((int)this_00 + 0xc));
    }
    (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + 1;
  } while ((*(int *)(gen_frame + 0xc)) < 4);
  F_005a2710((undefined *)(param_2 + 0x28),3);
  *(uint *)(param_2 + 0x2c) = param_3;
  uVar1 = *(undefined4 *)((int)this + 0x28);
  F_005a2710((undefined *)(param_2 + 0x30),4);
  *(undefined4 *)(param_2 + 0x34) = uVar1;
  if (param_5 == -1) {
    if ((*(int *)((int)this + 0x2c) == -1) && (0 < *(int *)((int)this + 0x28))) {
      *(undefined4 *)((int)this + 0x2c) = 0;
    }
  }
  else {
    iVar8 = 0;
    if (0 < *(int *)((int)this + 0x28)) {
      do {
        if (param_5 == *(int *)(((undefined1 *)(gen_frame + 0x28)) + iVar8 * 4 + -4)) {
          *(int *)((int)this + 0x2c) = iVar8;
          break;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)((int)this + 0x28));
    }
  }
  uVar1 = *(undefined4 *)((int)this + 0x2c);
  uVar7 = F_005a2710((undefined *)(param_2 + 0x38),3);
  *(undefined4 *)(param_2 + 0x3c) = uVar1;
  (*(int *)(gen_frame + 0x20)) = 0;
  if (0 < *(int *)((int)this + 0x28)) {
    (*(undefined * PTR32 *)(gen_frame + 0x1c)) = param_4;
    puVar9 = (uint *)(param_2 + 0x104);
    do {
      uVar7 = (uint)(*((int *)GEN_TOP((*(int *)((int)this + 0x30) + (*(int *)(gen_frame + 0x20)) * 4))) == 0);
      if (((byte)param_6 != 0) && ((uint)(byte)param_6 == *(uint *)(((undefined1 *)(gen_frame + 0x28)) + (*(int *)(gen_frame + 0x20)) * 4 + -4))
         ) {
        uVar7 = uVar7 + 2;
      }
      F_005a2710(puVar9 + -0x31,3);
      uVar1 = *(undefined4 *)(((undefined1 *)(gen_frame + 0x28)) + (*(int *)(gen_frame + 0x20)) * 4 + -4);
      puVar9[-0x30] = uVar7;
      puVar6 = (uint *)F_00ab3c60(uVar1);
      uVar7 = 0;
      if (puVar6 != (uint *)0x0) {
        uVar3 = F_00ab24a0(puVar6[1]);
        uVar7 = 0;
        if (uVar3 != 0) {
          uVar7 = F_00ab65a0(puVar6[1],uVar3);
          F_005a2710(puVar9 + -1,3);
          *puVar9 = uVar7;
          uVar7 = *puVar6;
          F_005a2710(puVar9 + 0x2f,4);
          puVar9[0x30] = uVar7;
          uVar7 = F_00ab6240(puVar6[1],1,uVar3);
          F_0042e430((*(undefined * PTR32 *)(gen_frame + 0x1c)),uVar7);
          uVar7 = F_0042a990((*(undefined * PTR32 *)(gen_frame + 0x1c)));
          F_005a2710(puVar9 + 0x5f,6);
          puVar9[0x60] = uVar7;
          uVar3 = puVar6[1];
          uVar7 = F_005a2710(puVar9 + 0x8f,4);
          puVar9[0x90] = uVar3;
        }
      }
      (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0x54);
      (*(int *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0x20)) + 1;
      puVar9 = puVar9 + 2;
    } while ((*(int *)(gen_frame + 0x20)) < *(int *)((int)this + 0x28));
  }
  F_00c47745((*(uint *)(gen_frame + 0x208)) ^ (uint)(uint)(gen_frame + 0x20c));
  return CONCAT31((int3)(uVar7 >> 8),1);
}

/* ref: FUN_007dd6f0 */
uint F_007dd6f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7dd6f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  in_ecx[3] = (*(undefined * PTR32 (*)[2])REFP(0x10b8168));
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d472c));
  in_ecx[3] = (*(undefined * PTR32 (*)[2])REFP(0x10d4720));
  puVar2 = in_ecx + 4;
  iVar1 = 1;
  do {
    F_0042b630(puVar2);
    puVar2 = puVar2 + 0x15;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  puVar2 = in_ecx + 0x2e;
  iVar1 = 10;
  do {
    F_0042b630(puVar2);
    puVar2 = puVar2 + 0x15;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *(undefined2 *)(in_ecx + 0x115) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_007dd760 */
uint F_007dd760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7dd760u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d4774));
  in_ecx[3] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_007dd780 */
unsigned int F_007dd780(unsigned int gen_a0)
{
  GEN_ENTER(0x7dd780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return 0;
}

/* ref: FUN_007dd7c0 */
unsigned int F_007dd7c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7dd7c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d47bc));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  return 0;
}

/* ref: FUN_007dd800 */
uint F_007dd800(unsigned int gen_a0)
{
  GEN_ENTER(0x7dd800u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xa40];
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0xa38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa3c);
  puVar1 = ((undefined4 *)(gen_frame + 0x0));
  iVar4 = 0x146;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_00779150(this,((undefined4 *)(gen_frame + 0x0)));
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  ((code *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2,*(undefined4 *)((int)this + 8),0x147,((undefined4 *)(gen_frame + 0x0)));
  this_00 = &(*(uint *)(gen_frame + 0xa38));
  iVar4 = 0x146;
  do {
    this_00 = this_00 + -2;
    uVar3 = F_005a2670(this_00);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_00c47745((*(uint *)(gen_frame + 0xa38)) ^ (uint)(uint)(gen_frame + 0xa3c));
  return uVar3;
}

/* ref: FUN_007dd890 */
uint F_007dd890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7dd890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  
  F_005a2710(param_1,4);
  *(undefined4 *)((int)param_1 + 4) = 2;
  pvVar1 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  if (pvVar1 == (undefined *)0x0) {
    uVar4 = F_0046ff40();
    uVar2 = (uint)(uVar4 / 1000);
  }
  else {
    uVar2 = F_00975680(pvVar1);
  }
  uVar5 = *(undefined4 *)((int)this + 0x20);
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_00462810(pvVar1,0x11e5,uVar5,uVar2);
  uVar2 = F_0042a990(uVar2);
  uVar3 = F_005a2710((undefined *)((int)param_1 + 8),6);
  *(uint *)((int)param_1 + 0xc) = uVar2;
  return uVar3;
}

/* ref: FUN_007dd910 */
unsigned int F_007dd910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7dd910u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d4804));
  in_ecx[3] = 0;
  *(undefined2 *)(in_ecx + 4) = 0;
  *(undefined1 *)((int)in_ecx + 0x12) = 0;
  return 0;
}

/* ref: FUN_007dd940 */
unsigned int F_007dd940(unsigned int gen_a0)
{
  GEN_ENTER(0x7dd940u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return 0;
}

/* ref: FUN_007dd980 */
unsigned int F_007dd980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7dd980u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d484c));
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  *(undefined2 *)(in_ecx + 7) = 0;
  return 0;
}

/* ref: FUN_007dd9b0 */
unsigned int F_007dd9b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7dd9b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float * pfVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  
  if (*(int *)((int)this + 0xc) != 0) {
    (*(float *)(gen_frame + 0x18)) = F_00ba1980();
    uVar3 = *(uint *)((int)this + 0x18);
    if (*(char *)((int)this + 0x1c) == '\0') {
      if ((uVar3 < 0x1e) &&
         (pfVar1 = (float *)F_007797b0(this,uVar3 + 1), (float10)*pfVar1 <= (float10)(*(float *)(gen_frame + 0x18)))) {
        (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)((int)this + 0x18);
        (*(undefined4 *)(gen_frame + 0x4)) = 2;
        (*(undefined1 *)(gen_frame + 0x8)) = 1;
        (*(undefined4 *)(gen_frame + 0xc)) = 3;
        piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
        ((code *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2,*(undefined4 *)((int)this + 8),2,&(*(undefined4 *)(gen_frame + 0x4)));
        *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + 1;
        *(undefined1 *)((int)this + 0x1c) = 1;
        pfVar1 = &(*(float *)(gen_frame + 0x14));
        iVar4 = 1;
        do {
          pfVar1 = pfVar1 + -2;
          F_005a2670(pfVar1);
          iVar4 = iVar4 + -1;
        } while (-1 < iVar4);
        return 0;
      }
    }
    else if ((0 < (int)uVar3) && ((int)uVar3 < 0x1f)) {
      uVar3 = F_007797b0(this,uVar3);
      (*(float *)(gen_frame + 0x14)) = *(float *)(uVar3 + 4);
      if ((*(float *)(uVar3 + 4) <= 0.0) && (iVar4 = *(int *)((int)this + 0x18) + 1, iVar4 < 0x1f))
      {
        pfVar1 = (float *)F_007797b0(this,iVar4);
        (*(float *)(gen_frame + 0x14)) = *pfVar1;
      }
      if ((float10)(*(float *)(gen_frame + 0x14)) <= (float10)(*(float *)(gen_frame + 0x18))) {
        (*(undefined4 *)(gen_frame + 0x4)) = 2;
        (*(undefined1 *)(gen_frame + 0x8)) = 0;
        (*(undefined4 *)(gen_frame + 0xc)) = 3;
        (*(undefined4 *)(gen_frame + 0x10)) = 0;
        piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
        ((code *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2,*(undefined4 *)((int)this + 8),2,&(*(undefined4 *)(gen_frame + 0x4)));
        *(undefined1 *)((int)this + 0x1c) = 0;
        pfVar1 = &(*(float *)(gen_frame + 0x14));
        iVar4 = 1;
        do {
          pfVar1 = pfVar1 + -2;
          F_005a2670(pfVar1);
          iVar4 = iVar4 + -1;
        } while (-1 < iVar4);
      }
    }
  }
  return 0;
}

/* ref: FUN_007ddb00 */
uint F_007ddb00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7ddb00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d4894));
  return (uint)in_ecx;
}

/* ref: FUN_007ddb20 */
unsigned int F_007ddb20(unsigned int gen_a0)
{
  GEN_ENTER(0x7ddb20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return 0;
}

/* ref: FUN_007ddb60 */
uint F_007ddb60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7ddb60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d48dc));
  in_ecx[3] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_007ddb80 */
unsigned int F_007ddb80(unsigned int gen_a0)
{
  GEN_ENTER(0x7ddb80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return 0;
}

/* ref: FUN_007ddd00 */
unsigned int F_007ddd00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7ddd00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d4924));
  *(undefined2 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0xffffffff;
  *(undefined4 *)((int)this + 0x18) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  return 0;
}

/* ref: FUN_007ddd50 */
unsigned int F_007ddd50(unsigned int gen_a0)
{
  GEN_ENTER(0x7ddd50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int * piVar2;
  int iVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d4924));
  piVar2 = (int *)((int)this + 0x1c);
  iVar3 = 10;
  do {
    puVar1 = (undefined4 *)*piVar2;
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return 0;
}

/* ref: Client::UI2::Agent::AgentRecommendList::vf11 */
uint F_007dddb0(unsigned int gen_a0)
{
  GEN_ENTER(0x7dddb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  uint uVar1;
  
  if ((REFG(undefined1, 0x14b4ec1) & 2) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
    in_EAX = 0;
    if (*(int *)(uVar1 + 0x18) != 0) {
      return ~(**((uint * PTR32 *)GEN_TOP((*(int *)(uVar1 + 0x18) + 0xe4))) >> 0x1f) & 1;
    }
  }
  return in_EAX & 0xffffff00;
}

/* ref: FUN_007ddde0 */
uint F_007ddde0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7ddde0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  
  uVar3 = F_00435250((uint)REFG(undefined1, 0x14ab0d4),0);
  uVar4 = F_00ab21a0(uVar3);
  uVar1 = (*(uint *)&gen_args[3]);
  if ((uVar4 != 0) && (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) < 10)) {
    if ((REFG(undefined1, 0x14b4ec2) & 0x20) != 0) {
      bVar2 = F_00779a50(&REFG(undefined1, 0x14ab070),uVar3,uVar4,&(*(undefined4 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x8)));
      uVar4 = CONCAT31(extraout_var,bVar2);
      if (bVar2 != 0) {
        uVar4 = F_00779b90((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),uVar1,0,uVar3,10000,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
      }
    }
    if ((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) < 10) && ((REFG(undefined1, 0x14b4ec2) & 0x40) != 0)) {
      bVar2 = F_00779ae0(&REFG(undefined1, 0x14ab070),(int)&(*(uint *)&gen_args[3]) + 3,&(*(undefined4 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x8)));
      uVar4 = CONCAT31(extraout_var_00,bVar2);
      if (bVar2 != 0) {
        uVar4 = F_00779b90((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),uVar1,1,(*(uint *)&gen_args[3]) >> 0x18,1000000,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),
                             (*(undefined4 *)(gen_frame + 0x8)));
      }
    }
  }
  return uVar4;
}

/* ref: FUN_007dded0 */
byte F_007dded0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7dded0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint * puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 * local_c;
  int local_8;
  
  uVar5 = F_00a68280(&REFG(undefined1, 0x14ab070),0xffffffff,0);
  iVar1 = *(int *)((int)this + 0x14);
  if (iVar1 < 4) {
    do {
      iVar1 = *(int *)(&REFG(undefined, 0x10c046c) + *(int *)((int)this + 0x14) * 0xc);
      iVar2 = *(int *)(&REFG(undefined, 0x10c0468) + *(int *)((int)this + 0x14) * 0xc);
      iVar9 = *(int *)((int)this + 0x18);
      while (iVar9 < iVar1 - iVar2) {
        iVar9 = *(int *)((int)this + 0x14);
        if (*(int *)((int)this + 0x18) <
            *(int *)(&REFG(undefined, 0x10c046c) + iVar9 * 0xc) - *(int *)(&REFG(undefined, 0x10c0468) + iVar9 * 0xc)) {
          local_8 = *(int *)(&REFG(undefined, 0x10c0468) + iVar9 * 0xc) + *(int *)((int)this + 0x18);
        }
        else {
          local_8 = 0;
        }
        puVar6 = (uint *)F_00ab38a0(local_8);
        if (puVar6 == (uint *)0x0) {
          return 0;
        }
        iVar9 = local_8;
        uVar7 = F_00a4ffd0();
        bVar4 = F_00b8de30(uVar7,iVar9);
        if (((bVar4 != 0) && ((ushort)*(byte *)((int)puVar6 + 0x31) <= (ushort)uVar5)) &&
           ((ushort)uVar5 <= (ushort)*(byte *)((int)puVar6 + 0x32))) {
          uVar7 = F_00ab3900((uint)(byte)puVar6[0xc]);
          uVar10 = 0;
          uVar8 = F_00404270();
          local_c = (undefined4 *)F_00406bd0(100,0,uVar8,uVar10);
          if (local_c == (undefined4 *)0x0) {
            local_c = (undefined4 *)0x0;
          }
          else {
            *local_c = (*(undefined * PTR32 (*)[1])REFP(0x10c43e4));
            local_c[1] = 5;
            local_c[2] = 0;
            F_0042b630(local_c + 3);
            *local_c = (*(undefined * PTR32 (*)[1])REFP(0x10c4404));
            local_c[0x18] = 0;
          }
          uVar8 = *puVar6;
          iVar9 = *(int *)(uVar7 + 4);
          iVar3 = *(int *)((int)this + 0x10);
          local_c[2] = iVar9;
          F_0042e430(local_c + 3,(uVar8 & 0xffffff) + (int)puVar6);
          if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 4 + iVar3 * 4))) != iVar9) {
            *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 4 + iVar3 * 4))) = iVar9;
            *(undefined1 *)(param_1 + 0x1d) = 1;
          }
          uVar7 = F_0042a990(local_c + 3);
          if (uVar7 != *((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + iVar3 * 4)))) {
            *((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + iVar3 * 4))) = uVar7;
            *(undefined1 *)(param_2 + 0x1d) = 1;
          }
          if (*((undefined * PTR32 *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x28 + iVar3 * 4))) != &REFG(undefined, 0x10be333)) {
            *((undefined * PTR32 *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x28 + iVar3 * 4))) = &REFG(undefined, 0x10be333);
            *(undefined1 *)(param_2 + 0x1d) = 1;
          }
          local_c[0x18] = local_8;
          *((undefined4 * PTR32 *)GEN_TOP(((int)this + *(int *)((int)this + 0x10) * 4 + 0x1c))) = local_c;
          *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
          if (9 < *(int *)((int)this + 0x10)) {
            return 0;
          }
        }
        *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + 1;
        iVar9 = *(int *)((int)this + 0x18);
      }
      *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + 1;
      *(undefined4 *)((int)this + 0x18) = 0;
    } while (*(int *)((int)this + 0x14) < 4);
    iVar1 = *(int *)((int)this + 0x14);
  }
  return 3 < iVar1;
}

/* ref: FUN_007de0d0 */
unsigned int F_007de0d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7de0d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d496c));
  in_ecx[7] = 0;
  in_ecx[3] = 0;
  return 0;
}

/* ref: FUN_007de0f0 */
unsigned int F_007de0f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7de0f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d49b4));
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = &REFG(undefined, 0x10be336);
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  in_ecx[10] = 0;
  in_ecx[0xb] = 0;
  in_ecx[0xc] = 0;
  in_ecx[0xd] = 0;
  in_ecx[0xf] = 0;
  in_ecx[0x10] = 0;
  in_ecx[0x11] = 1;
  *(undefined2 *)((int)in_ecx + 0x49) = 0;
  *(undefined2 *)((int)in_ecx + 0x53) = 0;
  *(undefined4 *)((int)in_ecx + 0x4b) = 0;
  *(undefined4 *)((int)in_ecx + 0x4f) = 0;
  return 0;
}

/* ref: FUN_007de150 */
unsigned int F_007de150(unsigned int gen_a0)
{
  GEN_ENTER(0x7de150u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return 0;
}

/* ref: FUN_007de190 */
uint F_007de190(unsigned int gen_a0)
{
  GEN_ENTER(0x7de190u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x11960];
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0x11958)) = 0x7de19d;
  (*(uint *)(gen_frame + 0x11958)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  puVar1 = ((undefined4 *)(gen_frame + 0x10000));
  iVar4 = 0x32a;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_005a2710(((undefined1 *)(gen_frame + 0x10018)),4);
  (*(undefined4 *)(gen_frame + 0x1001c)) = 1;
  F_0077a0b0(this,((undefined4 *)(gen_frame + 0x10000)));
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  ((code *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2,*(undefined4 *)((int)this + 8),0x32b,((undefined4 *)(gen_frame + 0x10000)));
  this_00 = &(*(uint *)(gen_frame + 0x11958));
  iVar4 = 0x32a;
  do {
    this_00 = this_00 + -2;
    uVar3 = F_005a2670(this_00);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_00c47745((*(uint *)(gen_frame + 0x11958)) ^ (uint)(uint)(gen_frame + 0x0));
  return uVar3;
}

/* ref: FUN_007de230 */
uint F_007de230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7de230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x11970];
  bool bVar1;
  undefined4 * puVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  int iVar6;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0x11968)) = 0x7de23d;
  (*(uint *)(gen_frame + 0x11968)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  *(uint *)((int)this + 0x3c) = param_1;
  puVar2 = ((undefined4 *)(gen_frame + 0x10010));
  iVar5 = 0x32a;
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 2;
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  F_005a2710(((undefined1 *)(gen_frame + 0x10028)),4);
  (*(undefined4 *)(gen_frame + 0x1002c)) = 2;
  F_0077a4b0(this,((undefined4 *)(gen_frame + 0x10010)),param_1);
  iVar5 = 0;
  bVar1 = false;
  (*(uint *)(gen_frame + 0x10008)) = 0;
  if (*(int *)((int)this + 0x28) != 0) {
    do {
      uVar3 = *((uint *)GEN_TOP((*(int *)((int)this + 0x20) + 0xac + iVar5)));
      iVar6 = *(int *)((int)this + 0x20) + iVar5;
      if (uVar3 == 0) {
        uVar3 = 99;
      }
      else {
        uVar3 = param_1 / uVar3;
      }
      if (*(uint *)(iVar6 + 0xc0) < uVar3) {
        uVar3 = *(uint *)(iVar6 + 0xc0);
      }
      if (uVar3 == 0) {
        uVar3 = 1;
      }
      if (*(uint *)(iVar6 + 0xc4) != uVar3) {
        *(uint *)(iVar6 + 0xc4) = uVar3;
        bVar1 = true;
      }
      (*(uint *)(gen_frame + 0x10008)) = (*(uint *)(gen_frame + 0x10008)) + 1;
      iVar5 = iVar5 + 0xcc;
    } while ((*(uint *)(gen_frame + 0x10008)) < *(uint *)((int)this + 0x28));
    if (bVar1) {
      F_0077a0b0(this,((undefined4 *)(gen_frame + 0x10010)));
      F_005a2710(((undefined1 *)(gen_frame + 0x10028)),4);
      (*(undefined4 *)(gen_frame + 0x1002c)) = 3;
    }
  }
  piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4,*(undefined4 *)((int)this + 8),0x32b,((undefined4 *)(gen_frame + 0x10010)));
  this_00 = &(*(uint *)(gen_frame + 0x11968));
  iVar5 = 0x32a;
  do {
    this_00 = this_00 + -2;
    uVar3 = F_005a2670(this_00);
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  F_00c47745((*(uint *)(gen_frame + 0x11968)) ^ (uint)(uint)(gen_frame + 0x0));
  return uVar3;
}

/* ref: FUN_007de390 */
unsigned int F_007de390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x7de390u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  undefined * this_01;
  undefined4 uVar3;
  
  if (param_1 < *(uint *)((int)this + 0x28)) {
    this_01 = ((undefined *)GEN_TOP((param_1 * 0xcc + *(int *)((int)this + 0x20))));
    *(int *)((int)this_01 + 0xb8) = param_2;
    *(undefined4 *)((int)this_01 + 0xac) = param_4;
    *(uint *)((int)this_01 + 0xb0) = param_3 & 0xffff;
    uVar3 = 0x12;
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = F_00461bb0(this_00,uVar3,param_4);
    F_0042e430((undefined *)((int)this_01 + 0x54),uVar1);
    *(undefined1 *)((int)this_01 + 0xbc) = (undefined1)param_5;
    *(undefined4 *)((int)this_01 + 0xa8) = 0xffffffff;
    uVar1 = F_00ab24a0(*(undefined4 *)((int)this_01 + 0xb8));
    if (uVar1 == 0) {
      *(undefined1 *)((int)this + 0x54) = 1;
    }
    else {
      uVar2 = F_00ab6240(*(undefined4 *)((int)this_01 + 0xb8),0,uVar1);
      F_0042e430(this_01,uVar2);
      uVar2 = F_00ab25d0((uint)*(byte *)(uVar1 + 0xa1));
      if (uVar2 == 0) {
        uVar2 = F_00ab65a0(param_2,uVar1);
      }
      else {
        uVar2 = *(uint *)(uVar2 + 4);
      }
      *(uint *)((int)this_01 + 0xa8) = uVar2;
      *(undefined1 *)((int)this_01 + 200) = *(undefined1 *)(uVar1 + 0xbe);
      uVar1 = *(uint *)(uVar1 + 0x28);
      *(uint *)((int)this_01 + 0xc0) = uVar1;
      if (99 < uVar1) {
        *(undefined4 *)((int)this_01 + 0xc0) = 99;
      }
      *(undefined4 *)((int)this_01 + 0xc4) = *(undefined4 *)((int)this_01 + 0xc0);
    }
    if (param_2 - 0x17U < 4) {
      uVar1 = F_00a3c240(&REFG(undefined, 0x14a4230),param_2);
      *(uint *)((int)this_01 + 0xb4) = uVar1;
      return 0;
    }
    uVar1 = F_00a41080(&REFG(undefined, 0x14a4230),param_2,1,1,1);
    uVar2 = F_00a41080(&REFG(undefined, 0x14a4230),param_2,0,1,1);
    *(uint *)((int)this_01 + 0xb4) = uVar1 + uVar2;
  }
  return 0;
}

/* ref: FUN_007de4e0 */
unsigned int F_007de4e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7de4e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  in_ecx[3] = (*(undefined * PTR32 (*)[2])REFP(0x10b8168));
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d4a04));
  in_ecx[3] = (*(undefined * PTR32 (*)[2])REFP(0x10d49f8));
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  *(undefined1 *)(in_ecx + 8) = 0;
  in_ecx[9] = 0;
  in_ecx[10] = 0;
  in_ecx[0xb] = 0;
  in_ecx[0xc] = 0;
  in_ecx[0xd] = 0;
  return 0;
}

/* ref: FUN_007de530 */
uint F_007de530(unsigned int gen_a0)
{
  GEN_ENTER(0x7de530u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  int iVar2;
  int iVar3;
  uint in_EAX = 0;
  int iVar4;
  undefined * this_00;
  ulonglong uVar5;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x34);
  if (piVar1 != (int *)0x0) {
    (*(undefined4 *)(gen_frame + 0x14)) = 3;
    (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)0xffffffff;
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,((undefined1 *)(gen_frame + 0xc)),&(*(undefined4 *)(gen_frame + 0x14)),1,0);
    F_005a2670(((undefined1 *)(gen_frame + 0xc)));
    *(undefined4 *)((int)this + 0x34) = 0;
    in_EAX = F_005a2670(&(*(undefined4 *)(gen_frame + 0x14)));
  }
  if (*(undefined * PTR32 *)((int)this + 0x10) != (undefined *)0x0) {
    in_EAX = F_00a70580(*(undefined * PTR32 *)((int)this + 0x10));
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  iVar2 = *(int *)((int)this + 0x30);
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + -4);
    iVar4 = iVar3 + -1;
    (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)(iVar2 + -4);
    if (-1 < iVar4) {
      this_00 = (undefined *)(iVar3 * 0x58 + 4 + iVar2);
      do {
        this_00 = (undefined *)((int)this_00 + -0x58);
        F_0042c880(this_00);
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
    }
    uVar5 = F_00406b30((*(int * PTR32 *)(gen_frame + 0x18)));
    in_EAX = (uint)uVar5;
    *(undefined4 *)((int)this + 0x30) = 0;
  }
  return in_EAX;
}

/* ref: FUN_007de5d0 */
unsigned int F_007de5d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7de5d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x10);
  if (this_00 != (undefined *)0x0) {
    *(undefined4 *)((int)this + 0x24) = 0;
    *(undefined4 *)((int)this + 0x1c) = 0;
    if (*(int *)((int)this + 0x30) != 0) {
      F_00a7b630(this_00,(int)this + 0xc,
                   *((int *)GEN_TOP((*(int *)((int)this + 0x18) * 0x58 + *(int *)((int)this + 0x30)))) + -1);
      return 0;
    }
    F_00a7b630(this_00,(int)this + 0xc,1);
  }
  return 0;
}

/* ref: FUN_007de620 */
unsigned int F_007de620(unsigned int gen_a0)
{
  GEN_ENTER(0x7de620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  int iVar1;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x10);
  if ((this_00 != (undefined *)0x0) && (iVar1 = *(int *)((int)this + 0x24), 0 < iVar1)) {
    if (*(int *)((int)this + 0x30) != 0) {
      F_00a7e300(this_00,(int)this + 0xc,
                   *((int *)GEN_TOP((*(int *)((int)this + 0x18) * 0x58 + *(int *)((int)this + 0x30)))) + -1,
                   iVar1);
      return 0;
    }
    F_00a7e300(this_00,(int)this + 0xc,1,iVar1);
  }
  return 0;
}

/* ref: FUN_007de670 */
uint F_007de670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7de670u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a2;
  int iVar1;
  int iVar2;
  uint * puVar3;
  ushort * puVar4;
  uint uVar5;
  undefined * pvVar6;
  uint * puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int local_10;
  int local_c;
  
  iVar2 = (int)param_2;
  if ((*(byte *)((int)this + 0x28) & 0x10) == 0) {
    return 0;
  }
  puVar3 = (uint *)F_00a67930(*(undefined4 *)((int)this + 0x10));
  puVar4 = (ushort *)F_00a67950(*(undefined4 *)((int)this + 0x10));
  if ((puVar3[0x4d] < 0x39) || (0x3c < puVar3[0x4d])) {
    F_005a2710((undefined *)((int)param_2 + 0x10d0),4);
    *(undefined4 *)((int)param_2 + 0x10d4) = 1;
    local_10 = 0;
    if ((*puVar4 != 0) && (local_10 = *puVar4 - 1, local_10 != 0)) {
      pvVar6 = (undefined *)((int)param_2 + 0x1110);
      param_2 = puVar4 + 0x2e;
      local_c = local_10;
      do {
        uVar5 = F_0042a990(param_2);
        F_005a2710(pvVar6,8);
        param_2 = param_2 + 0x2c;
        *(uint *)((int)pvVar6 + 4) = uVar5;
        pvVar6 = (undefined *)((int)pvVar6 + 8);
        local_c = local_c + -1;
      } while (local_c != 0);
    }
    F_005a2710((undefined *)(iVar2 + 0x1108),4);
    *(int *)(iVar2 + 0x110c) = local_10;
  }
  else {
    F_005a2710((undefined *)((int)param_2 + 0x10d0),4);
    *(undefined4 *)((int)param_2 + 0x10d4) = 2;
    uVar5 = F_0042a990(puVar4 + 0x2e);
    F_005a2710((undefined *)((int)param_2 + 0x1100),8);
    *(uint *)((int)param_2 + 0x1104) = uVar5;
    F_005a2710((undefined *)((int)param_2 + 0x1108),4);
    *(undefined4 *)((int)param_2 + 0x110c) = 0;
    uVar5 = F_0042a990(puVar3 + 0x51);
    F_005a2710((undefined *)((int)param_2 + 0x1220),8);
    *(uint *)((int)param_2 + 0x1224) = uVar5;
  }
  uVar5 = (uint)(ushort)puVar3[0x45];
  uVar8 = 0x23;
  pvVar6 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar5 = F_00461bb0(pvVar6,uVar8,uVar5);
  F_005a2710((undefined *)(iVar2 + 0x10d8),6);
  *(uint *)(iVar2 + 0x10dc) = uVar5;
  uVar5 = puVar3[0x4c];
  F_005a2710((undefined *)(iVar2 + 0x10e0),4);
  *(uint *)(iVar2 + 0x10e4) = uVar5;
  uVar5 = F_00a67ce0(puVar3[0x4d],(uint)(byte)puVar3[0xb3],(uint)*(byte *)((int)puVar3 + 0x12e));
  F_005a2710((undefined *)(iVar2 + 0x10e8),4);
  *(uint *)(iVar2 + 0x10ec) = uVar5;
  uVar5 = puVar3[0x4e];
  F_005a2710((undefined *)(iVar2 + 0x10f0),4);
  *(uint *)(iVar2 + 0x10f4) = uVar5;
  uVar5 = F_0042a990(puVar3 + 1);
  F_005a2710((undefined *)(iVar2 + 0x10f8),8);
  *(uint *)(iVar2 + 0x10fc) = uVar5;
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0x1ca;
  pvVar6 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar5 = F_0043bd00(pvVar6,uVar8,uVar9,uVar10);
  F_005a2710((undefined *)(iVar2 + 0x11d0),8);
  *(uint *)(iVar2 + 0x11d4) = uVar5;
  iVar1 = (int)(puVar3[0x47] - puVar3[0x46]) / 0x54;
  if (iVar1 != 0) {
    param_2 = (ushort *)(iVar2 + 0x11e0);
    local_10 = 0;
    local_c = iVar1;
    do {
      uVar5 = F_0042a990(puVar3[0x46] + local_10);
      F_005a2710(param_2,8);
      local_10 = local_10 + 0x54;
      *(uint *)((int)param_2 + 4) = uVar5;
      param_2 = (ushort *)((int)param_2 + 8);
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  F_005a2710((undefined *)(iVar2 + 0x11d8),4);
  *(int *)(iVar2 + 0x11dc) = iVar1;
  uVar8 = 0;
  puVar7 = (uint *)F_00a67920(*(undefined4 *)((int)this + 0x10));
  uVar5 = 0;
  if (*puVar7 != 0) {
    puVar4 = (ushort *)puVar7[2];
    do {
      if (*puVar3 == (uint)*puVar4) {
        uVar8 = *(undefined4 *)((ushort *)puVar7[2] + uVar5 * 0x8e + 0x8c);
        goto LAB_007de97c;
      }
      uVar5 = uVar5 + 1;
      puVar4 = puVar4 + 0x8e;
    } while (uVar5 < *puVar7);
    uVar8 = 0;
  }
LAB_007de97c: ;
  F_005a2710((undefined *)(iVar2 + 0x1228),4);
  *(undefined4 *)(iVar2 + 0x122c) = uVar8;
  uVar8 = *(undefined4 *)((int)this + 0x1c);
  F_005a2710((undefined *)(iVar2 + 0x1230),4);
  *(undefined4 *)(iVar2 + 0x1234) = uVar8;
  return 0x10;
}

/* ref: FUN_007de9e0 */
uint F_007de9e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7de9e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d4a4c));
  in_ecx[3] = 0xffffffff;
  return (uint)in_ecx;
}

/* ref: FUN_007dea10 */
uint F_007dea10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7dea10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d4a94));
  in_ecx[3] = 0;
  F_0042b630(in_ecx + 4);
  in_ecx[0x19] = 0;
  return (uint)in_ecx;
}

/* ref: Client::UI2::Agent::AgentBlacklist::vf3 */
unsigned int F_007dea50(unsigned int gen_a0)
{
  GEN_ENTER(0x7dea50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)(this + 100) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 100),0);
    *(undefined4 *)(this + 100) = 0;
  }
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return 0;
}

/* ref: FUN_007deab0 */
uint F_007deab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7deab0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d4adc));
  in_ecx[3] = 0;
  F_0042b630(in_ecx + 4);
  in_ecx[0x19] = 0;
  *(undefined1 *)(in_ecx + 0x1a) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_007deaf0 */
uint F_007deaf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7deaf0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d4b24));
  in_ecx[3] = 0;
  F_0042b630(in_ecx + 4);
  in_ecx[0x1a] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_007deb30 */
uint F_007deb30(unsigned int gen_a0)
{
  GEN_ENTER(0x7deb30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  piVar2 = *(int * PTR32 *)(uVar1 + 0x24);
  if (piVar2 != (int *)0x0) {
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2);
    if (((char)uVar1 != '\0') && (uVar1 = piVar2[0x82], uVar1 == *(uint *)((int)this + 8))) {
      uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    }
  }
  if (*(int *)((int)this + 0x68) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)((int)this + 0x68),0);
    *(undefined4 *)((int)this + 0x68) = 0;
  }
  return uVar1;
}

/* ref: FUN_007deb90 */
uint F_007deb90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7deb90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined1 * puVar1;
  undefined4 * puVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  
  *(int *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[2])REFP(0x10909b4));
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d4b74));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10d4b68));
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined2 *)((int)this + 0x3d0) = 0;
  *(undefined4 *)((int)this + 0x564) = 0;
  *(undefined1 *)((int)this + 0xa52) = 0;
  *(undefined4 *)((int)this + 0xa54) = 0;
  puVar1 = (undefined1 *)((int)this + 0xa58);
  iVar5 = 0x1c;
  do {
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
    puVar1 = puVar1 + 8;
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  *(undefined2 *)((int)this + 0xb40) = 0;
  puVar2 = (undefined4 *)((int)this + 0xb44);
  iVar5 = 0x31;
  do {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2 = puVar2 + 3;
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  *(undefined4 *)((int)this + 0xd9c) = 0;
  *(undefined4 *)((int)this + 0xda0) = 0;
  *(undefined4 *)((int)this + 0xda4) = 0;
  *(undefined2 *)((int)this + 0xda8) = 0;
  *(undefined1 *)((int)this + 0xdaa) = 0;
  *(undefined4 *)((int)this + 0xdac) = 0;
  *(undefined4 *)((int)this + 0xdb0) = 0;
  *(undefined4 *)((int)this + 0xdb4) = 0;
  *(undefined4 *)((int)this + 0xdb8) = 0;
  *(undefined4 *)((int)this + 0xdc0) = 9999;
  *(undefined1 *)((int)this + 0xdc6) = 0;
  *(undefined4 *)((int)this + 0xdc8) = 0;
  *(undefined4 *)((int)this + 0xdcc) = 0;
  *(undefined4 *)((int)this + 0xdd8) = 0;
  *(undefined4 *)((int)this + 0xddc) = 0;
  *(undefined1 *)((int)this + 0xdd4) = 0;
  *(undefined4 *)((int)this + 0xdd0) = 0x75300000;
  *(undefined1 *)((int)this + 0xdef) = 0;
  *(undefined4 *)((int)this + 0xdf0) = 0;
  *(undefined4 *)((int)this + 0xdfc) = 0;
  *(undefined2 *)((int)this + 0xdc4) = 0;
  *(undefined4 *)((int)this + 0xde0) = 0;
  *(undefined4 *)((int)this + 0xde4) = 0;
  *(undefined2 *)((int)this + 0xde8) = 0;
  *(undefined4 *)((int)this + 0xdea) = 0;
  *(undefined1 *)((int)this + 0xdee) = 0;
  *(undefined4 *)((int)this + 0xdf4) = 0;
  *(undefined1 *)((int)this + 0xdf8) = 0;
  *(undefined4 *)((int)this + 0xe00) = 0;
  *(undefined4 *)((int)this + 0xe04) = 0;
  puVar2 = (undefined4 *)((int)this + 0xe08);
  param_1 = 5;
  do {
    *puVar2 = 0;
    F_0042b630(puVar2 + 1);
    puVar2 = puVar2 + 0x16;
    param_1 = param_1 + -1;
  } while (-1 < param_1);
  *(undefined2 *)((int)this + 0x1018) = 0;
  *(undefined4 *)((int)this + 0x101c) = 0;
  *(undefined4 *)((int)this + 0x1020) = 0;
  F_00c48350((undefined *)((int)this + 0x28),0,0x3a8);
  F_00c48350((undefined *)((int)this + 0xa18),0,0x3a);
  *(undefined4 *)((int)this + 0x564) = 0;
  *(undefined2 *)((int)this + 0x3d0) = 0;
  F_00c48350((undefined *)((int)this + 0x3d4),0,400);
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,0x24);
  if (uVar4 != 0) {
    if (**(int * PTR32 *)(uVar4 + 0x20) != *(int *)((int)this + 0x564)) {
      **(int * PTR32 *)(uVar4 + 0x20) = *(int *)((int)this + 0x564);
      *(undefined1 *)(uVar4 + 0x1d) = 1;
    }
  }
  uVar4 = 0;
  puVar2 = (undefined4 *)((int)this + 0x568);
  do {
    *(short *)(puVar2 + 2) = (short)uVar4;
    *puVar2 = 0;
    uVar4 = uVar4 + 1;
    puVar2 = puVar2 + 3;
  } while (uVar4 < 100);
  iVar5 = (int)this + 0xc;
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4));
  F_0043cfd0(iVar5);
  return (uint)this;
}

/* ref: FUN_007dedc0 */
uint F_007dedc0(unsigned int gen_a0)
{
  GEN_ENTER(0x7dedc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  int * piVar3;
  undefined * this_00;
  ulonglong uVar4;
  undefined4 * puVar5;
  int local_8;
  
  puVar1 = (undefined4 *)((int)this + 0xc);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d4b74));
  *puVar1 = (*(undefined * PTR32 (*)[2])REFP(0x10d4b68));
  puVar5 = puVar1;
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4));
  F_0043cff0(puVar5);
  local_8 = 5;
  this_00 = (undefined *)((int)this + 0x101c);
  do {
    this_00 = (undefined *)((int)this_00 + -0x58);
    uVar4 = F_0042c880(this_00);
    uVar2 = (uint)uVar4;
    local_8 = local_8 + -1;
  } while (-1 < local_8);
  *puVar1 = (*(undefined * PTR32 (*)[2])REFP(0x10909b4));
  if (*(undefined * PTR32 *)((int)this + 0x14) != (undefined *)0x0) {
    uVar2 = F_00414620(*(undefined * PTR32 *)((int)this + 0x14),puVar1);
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: FUN_007dee60 */
byte F_007dee60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7dee60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  
  if (param_2 < 1) {
    return 1;
  }
  if (((byte)*param_1 & 0xf) != 3) {
    return 1;
  }
  iVar1 = param_1[1];
  if (iVar1 == 0) {
    F_0077b8f0(this);
    F_0077b9f0(this,*(undefined4 *)((int)this + 0xda4),(int)this + 0x1018);
  }
  else {
    if (iVar1 == 1) {
      if (param_2 < 2) {
        return 0;
      }
      if (((byte)param_1[2] & 0xf) != 3) {
        return 0;
      }
      *(char *)((int)this + 0x1018) = (char)param_1[3];
      return 0;
    }
    if (iVar1 == 2) {
      if (param_2 < 2) {
        return 0;
      }
      if (((byte)param_1[2] & 0xf) != 3) {
        return 0;
      }
      iVar1 = param_1[3];
      if (iVar1 < 0) {
        return 0;
      }
      if (*(int *)((int)this + 0xe04) <= iVar1) {
        return 0;
      }
      *(char *)((int)this + 0x1019) = (char)iVar1;
      return 0;
    }
  }
  *(undefined4 *)((int)this + 0xe00) = 0;
  F_0077ba50(this);
  return 1;
}

/* ref: FUN_007def30 */
byte F_007def30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7def30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  
  if ((param_2 < 1) || (((byte)*param_1 & 0xf) != 3)) {
    *(undefined4 *)((int)this + 0x1020) = 0;
  }
  else {
    iVar1 = param_1[1];
    *(undefined4 *)((int)this + 0x1020) = 0;
    if (iVar1 == 0) {
      *(undefined4 *)((int)this + 0xdb4) = 4;
      return 1;
    }
  }
  return 1;
}

/* ref: FUN_007def80 */
byte F_007def80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7def80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  if (((0 < param_2) && (((byte)*param_1 & 0xf) == 3)) && (param_1[1] == 0)) {
    if (*(undefined * PTR32 *)((int)this + 0x1c) != (undefined *)0x0) {
      F_00438970(*(undefined * PTR32 *)((int)this + 0x1c),*(undefined4 *)((int)this + 0xdac));
      F_00443e00(*(undefined * PTR32 *)((int)this + 0x1c));
    }
    *(undefined4 *)((int)this + 0xdb4) = 5;
  }
  *(undefined4 *)((int)this + 0x1020) = 0;
  return 1;
}

/* ref: FUN_007defe0 */
uint F_007defe0(unsigned int gen_a0)
{
  GEN_ENTER(0x7defe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint in_EAX = 0;
  uint uVar2;
  
  *(undefined1 *)((int)this + 0x3d1) = 1;
  if (*(int *)((int)this + 0x20) == 0) {
    return in_EAX;
  }
  bVar1 = *(byte *)((int)this + 0xb41);
  if ((bVar1 < 0x32) && (uVar2 = (uint)bVar1, uVar2 < *(byte *)((int)this + 0xb40) + 1)) {
    if (bVar1 == 0) {
      *(undefined4 *)((int)this + 0xb44) = 0;
    }
    else {
      *(undefined4 *)((int)this + uVar2 * 0xc + 0xb44) =
           *(undefined4 *)((int)this + uVar2 * 0xc + 0xb3c);
    }
    uVar2 = F_00435730(*(undefined4 *)((int)this + 0x20));
    *((uint *)GEN_TOP(((int)this + (uint)*(byte *)((int)this + 0xb41) * 0xc + 0xb48))) = uVar2;
    if (*(byte *)((int)this + 0xb41) < 0x32) {
      uVar2 = F_00435740(*(undefined4 *)((int)this + 0x20));
      *((uint *)GEN_TOP(((int)this + ((uint)*(byte *)((int)this + 0xb41) * 3 + 0x2d3) * 4))) = uVar2;
      *(char *)((int)this + 0xb41) = *(char *)((int)this + 0xb41) + '\x01';
      uVar2 = F_0077b010(this);
      return uVar2;
    }
    *((undefined4 *)GEN_TOP(((int)this + ((uint)*(byte *)((int)this + 0xb41) * 3 + 0x2d3) * 4))) = 0;
    *(char *)((int)this + 0xb41) = *(char *)((int)this + 0xb41) + '\x01';
  }
  uVar2 = F_0077b010(this);
  return uVar2;
}

/* ref: FUN_007df0b0 */
uint F_007df0b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7df0b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0077b1a0(this,1);
  return uVar1;
}

/* ref: FUN_007df0c0 */
uint F_007df0c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7df0c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0043f8b0(0x14);
  uVar1 = F_0077adb0(this);
  return uVar1;
}

/* ref: FUN_007df0e0 */
uint F_007df0e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7df0e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (0 < *(int *)((int)this + 0xd9c)) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0xd9c),0);
    *(undefined4 *)((int)this + 0xd9c) = 0;
    if (*(int *)((int)this + 0xda0) != *(int *)((int)this + 8)) {
      *(undefined4 *)((int)this + 0x1c) = 0;
    }
  }
  *(undefined4 *)((int)this + 0xda0) = 0;
  uVar2 = F_0077b8f0(this);
  if (0 < *(int *)((int)this + 0x101c)) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0x101c),0);
    *(undefined4 *)((int)this + 0x101c) = 0;
  }
  *(undefined4 *)((int)this + 0xda4) = 0;
  *(undefined2 *)((int)this + 0xda8) = 0;
  *(undefined1 *)((int)this + 0xdaa) = 0;
  *(undefined4 *)((int)this + 0xdac) = 0;
  *(undefined4 *)((int)this + 0xdb4) = 0;
  *(undefined4 *)((int)this + 0xdb8) = 0;
  return uVar2;
}

/* ref: FUN_007df180 */
uint F_007df180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7df180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * this_00;
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  ushort * puVar4;
  byte * pbVar5;
  ulonglong uVar6;
  ushort * local_8;
  
  if (*(int *)((int)this + 0x1c) != 0) {
    bVar2 = F_00438840(*(int *)((int)this + 0x1c));
    if (param_1 < bVar2) {
      uVar3 = F_00438850(*(undefined4 *)((int)this + 0x1c),param_1);
      if (uVar3 != 0) {
        this_00 = (undefined4 *)((int)this + 0xdc0);
        F_00a35f30(this_00);
        F_00a35ee0(this_00,*(undefined4 *)(uVar3 + 0x24),0);
        *this_00 = 9999;
        *(undefined2 *)((int)this + 0xdc4) = (undefined2)param_1;
        *(undefined2 *)((int)this + 0xdd0) = *(undefined2 *)(uVar3 + 0x2c);
        *(undefined2 *)((int)this + 0xdd2) = *(undefined2 *)(uVar3 + 0x2a);
        if (*(char *)(uVar3 + 0x38) == '\x01') {
          *(byte *)((int)this + 0xdd4) = *(byte *)((int)this + 0xdd4) | 1;
        }
        else {
          *(byte *)((int)this + 0xdd4) = *(byte *)((int)this + 0xdd4) & 0xfe;
        }
        F_00a35f80(this_00,*(undefined4 *)(uVar3 + 0x20));
        *(undefined1 *)((int)this + 0xdef) = *(undefined1 *)(uVar3 + 0x3b);
        uVar6 = F_0077ae80(this,param_1);
        *(ulonglong *)((int)this + 0xdd8) = uVar6;
        bVar2 = 0;
        local_8 = (ushort *)(uVar3 + 0x2e);
        pbVar5 = (byte *)((int)this + 0xdea);
        puVar4 = (ushort *)((int)this + 0xde0);
        do {
          if (bVar2 < *(byte *)(uVar3 + 0x39)) {
            uVar1 = *local_8;
            *puVar4 = uVar1 >> 4;
            *pbVar5 = (byte)uVar1 & 0xf;
          }
          else {
            *puVar4 = 0;
            *pbVar5 = 0;
          }
          local_8 = local_8 + 1;
          bVar2 = bVar2 + 1;
          puVar4 = puVar4 + 1;
          pbVar5 = pbVar5 + 1;
        } while (bVar2 < 5);
        return (uint)this_00;
      }
    }
  }
  return 0;
}

/* ref: FUN_007df2a0 */
uint F_007df2a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7df2a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  uint uVar3;
  int iVar4;
  undefined * this_01;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint local_c;
  uint local_8;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,0x24);
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,0x21)));
  if ((uVar2 != 0) || (uVar3 = 0, this_00 != (undefined *)0x0)) {
    local_8 = 0;
    uVar3 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0xb5);
    if (*(int *)(uVar3 + 0x14) == 3) {
      local_8 = F_00a1ae70();
    }
    uVar3 = *((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x968)));
    if (0 < (int)uVar3) {
      iVar6 = 0x2c2;
      iVar5 = 0x978;
      local_c = uVar3;
      do {
        iVar4 = *((int *)GEN_TOP((iVar5 + *(int *)(uVar2 + 0x20)))) + local_8;
        uVar7 = 0x7cc;
        this_01 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
        uVar3 = F_00461bb0(this_01,uVar7,iVar4);
        uVar3 = F_00431250(this_00,iVar6,uVar3,0,1,0);
        iVar5 = iVar5 + 0x18;
        iVar6 = iVar6 + 5;
        local_c = local_c - 1;
      } while (local_c != 0);
    }
  }
  return uVar3;
}

/* ref: FUN_007df7b0 */
uint F_007df7b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7df7b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  *(undefined4 *)((int)this + 0x564) = 0;
  *(undefined2 *)((int)this + 0x3d0) = 0;
  F_00c48350((undefined *)((int)this + 0x3d4),0,400);
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,0x24);
  if (uVar2 != 0) {
    if (**(int * PTR32 *)(uVar2 + 0x20) != *(int *)((int)this + 0x564)) {
      **(int * PTR32 *)(uVar2 + 0x20) = *(int *)((int)this + 0x564);
      *(undefined1 *)(uVar2 + 0x1d) = 1;
    }
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,0x21);
  if (uVar2 != 0) {
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 0: ;
      uVar6 = 0x7c2;
      break;
    case 1: ;
      uVar6 = 0x7c3;
      break;
    case 2: ;
      uVar6 = 0x7c4;
      break;
    case 3: ;
      uVar6 = 0x7c5;
      break;
    default: ;
      uVar6 = 0x799;
    }
    uVar7 = 0;
    uVar4 = 0;
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar3 = F_0043bd00(this_00,uVar6,uVar4,uVar7);
    if (uVar3 != **(uint * PTR32 *)(uVar2 + 0x20)) {
      **(uint * PTR32 *)(uVar2 + 0x20) = uVar3;
      *(undefined1 *)(uVar2 + 0x1d) = 1;
    }
  }
  if ((int)param_2 < 0) {
    uVar2 = F_0077af30(this,0xffffffff,&REFG(undefined, 0x10be423));
    return uVar2;
  }
  uVar6 = 0;
  uVar4 = 0;
  if (param_2 < 0x48) {
    iVar5 = param_2 + ((int)param_2 / 0x18) * 0x36;
    uVar6 = *(undefined4 *)((int)this + iVar5 * 4 + 0x88);
    uVar4 = *(undefined4 *)((int)this + iVar5 * 4 + 0x100);
  }
  uVar2 = F_0077af30(this,uVar6,uVar4);
  return uVar2;
}

/* ref: FUN_007df900 */
uint F_007df900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7df900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  ushort uVar1;
  uint uVar2;
  undefined4 * puVar3;
  int * piVar4;
  int iVar5;
  uint * this_00;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc3c);
  (*(uint *)(gen_frame + 0xc38)) = uVar2;
  if ((*(int *)((int)this + 8) != 0) && ('\0' < (char)param_1)) {
    puVar3 = ((undefined4 *)(gen_frame + 0x0));
    iVar5 = 0x186;
    do {
      *puVar3 = 0;
      puVar3 = puVar3 + 2;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
    F_005a2710(((undefined4 *)(gen_frame + 0x0)),3);
    ((undefined4 *)(gen_frame + 0x0))[1] = 2;
    uVar1 = F_0077b300(this,param_1);
    F_005a2710(((undefined1 *)(gen_frame + 0x658)),3);
    (*(uint *)(gen_frame + 0x65c)) = (uint)uVar1;
    piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4,*(undefined4 *)((int)this + 8),0x187,((undefined4 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0xc38));
    iVar5 = 0x186;
    do {
      this_00 = this_00 + -2;
      uVar2 = F_005a2670(this_00);
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  F_00c47745((*(uint *)(gen_frame + 0xc38)) ^ (uint)(uint)(gen_frame + 0xc3c));
  return uVar2;
}

/* ref: FUN_007df9d0 */
uint F_007df9d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x7df9d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint param_6 = (uint)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  (*(uint *)(gen_frame + 0x8)) = param_6;
  if (*(int *)((int)this + 0x20) == 0) goto LAB_007dfb63;
  *(undefined2 *)((int)this + 0xb40) = 0;
  F_00c48350((undefined *)((int)this + 0xb44),0,600);
  if (param_1 < 0) {
    F_0042cc20(((char * PTR32 *)(gen_frame + 0x64)),param_2,REFG(undefined4, 0x108cc50));
    uVar3 = F_0042b790(((char * PTR32 *)(gen_frame + 0x64)));
    if (0x28 < uVar3) {
      uVar3 = F_0042d2f0(((char * PTR32 *)(gen_frame + 0x64)),((undefined1 *)(gen_frame + 0x10)),0,0x28);
      F_0042ccf0(((char * PTR32 *)(gen_frame + 0x64)),uVar3);
      F_0042c880(((undefined1 *)(gen_frame + 0x10)));
    }
    if (*((char * PTR32 *)(gen_frame + 0x64))[0] != '\0') {
      F_0077aec0(this,1);
      uVar3 = F_0042a990(((char * PTR32 *)(gen_frame + 0x64)));
      F_00435810(*(undefined * PTR32 *)((int)this + 0x20),uVar3);
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x20) + 0x10))))(*(int * PTR32 *)((int)this + 0x20));
    }
    F_0042c880(((char * PTR32 *)(gen_frame + 0x64)));
  }
  else {
    uVar3 = F_0077b260(this,param_1,((undefined1 *)(gen_frame + 0x4)),&(*(uint *)(gen_frame + 0xc)));
    if (uVar3 != 0) {
      F_0077aec0(this,1);
      uVar2 = (*(uint *)(gen_frame + 0xc));
      iVar1 = param_1 >> 0x1f;
      iVar5 = param_1 / 0x18 + iVar1;
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0xc)) + 0)) = 0;
      (*(uint *)(gen_frame + 0xc)) = uVar2 & 0xffffff00;
      if (iVar5 == iVar1) {
        uVar7 = 0;
LAB_007dfaab: ;
        uVar6 = 1;
      }
      else {
        if (iVar5 - iVar1 == 1) {
          param_4 = param_5;
          uVar7 = (*(uint *)(gen_frame + 0xc));
          if ((-1 < (int)(*(uint *)(gen_frame + 0x8))) && ((int)(*(uint *)(gen_frame + 0x8)) < *(int *)((int)this + 0xa54))) {
            (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0xc)) + 0)) = *(undefined1 *)((int)this + (*(uint *)(gen_frame + 0x8)) * 8 + 0xa58);
            uVar7 = CONCAT31((int3)(uVar2 >> 8),(undefined1)(*(uint *)(gen_frame + 0xc)));
            (*(uint *)(gen_frame + 0xc)) = uVar7;
          }
          goto LAB_007dfaab;
        }
        uVar7 = 0;
        param_4 = 0;
        uVar6 = 0;
      }
      F_004357e0(*(undefined * PTR32 *)((int)this + 0x20),uVar3,uVar6,param_4,uVar7);
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x20) + 0x10))))(*(int * PTR32 *)((int)this + 0x20));
    }
  }
  F_0077b450(this,param_1);
  param_6 = 0;
  puVar4 = (undefined4 *)((int)this + 0x568);
  do {
    *(short *)(puVar4 + 2) = (short)param_6;
    *puVar4 = 0;
    param_6 = param_6 + 1;
    puVar4 = puVar4 + 3;
  } while (param_6 < 100);
LAB_007dfb63: ;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return param_6;
}

/* ref: FUN_007dfb80 */
unsigned int F_007dfb80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7dfb80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  if (*(int *)((int)this + 0x20) != 0) {
    *(undefined4 *)((int)this + 0x564) = 0;
    *(undefined2 *)((int)this + 0x3d0) = 0;
    F_00c48350((undefined *)((int)this + 0x3d4),0,400);
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2,0x24);
    if (uVar3 != 0) {
      if (**(int * PTR32 *)(uVar3 + 0x20) != *(int *)((int)this + 0x564)) {
        **(int * PTR32 *)(uVar3 + 0x20) = *(int *)((int)this + 0x564);
        *(undefined1 *)(uVar3 + 0x1d) = 1;
      }
    }
    uVar3 = 0;
    puVar4 = (undefined4 *)((int)this + 0x568);
    do {
      *(short *)(puVar4 + 2) = (short)uVar3;
      *puVar4 = 0;
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 3;
    } while (uVar3 < 100);
    uVar3 = (uint)*(byte *)((int)this + 0xb40);
    if (param_1 == 1) {
      iVar1 = *((int *)GEN_TOP(((int)this + (uVar3 * 3 + 0x2d3) * 4)));
      if (iVar1 != 0) {
        F_0043fe60(*(undefined * PTR32 *)((int)this + 0x20),iVar1,100);
        *(char *)((int)this + 0xb40) = *(char *)((int)this + 0xb40) + '\x01';
        return 0;
      }
    }
    else {
      iVar1 = *(int *)((int)this + uVar3 * 0xc + 0xb44);
      if (iVar1 != *(int *)((int)this + uVar3 * 0xc + 0xb48)) {
        F_0043fe60(*(undefined * PTR32 *)((int)this + 0x20),iVar1,100);
        *(char *)((int)this + 0xb40) = *(char *)((int)this + 0xb40) + -1;
      }
    }
  }
  return 0;
}

/* ref: FUN_007dfc60 */
unsigned int F_007dfc60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7dfc60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  undefined4 uVar2;
  
  if (param_2 != 0) {
    F_007df0e0(this);
    if (*(int *)((int)this + 0x1c) == 0) {
      uVar2 = 9;
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
      uVar1 = F_00435440(uVar1,uVar2);
      *(uint *)((int)this + 0x1c) = uVar1;
    }
    *(undefined4 *)((int)this + 0xda4) = param_1;
    if (*(int *)((int)this + 0x1c) != 0) {
      F_00443df0(*(int *)((int)this + 0x1c));
      F_00438870(*(undefined4 *)((int)this + 0x1c),param_1);
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x10))))(*(int * PTR32 *)((int)this + 0x1c));
    }
    *(undefined2 *)((int)this + 0xda8) = 1;
    *(undefined1 *)((int)this + 0xdaa) = 0;
    *(int *)((int)this + 0xda0) = param_2;
    *(undefined2 *)((int)this + 0x1018) = 0;
  }
  return 0;
}

/* ref: FUN_007dfce0 */
unsigned int F_007dfce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7dfce0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d4bbc));
  in_ecx[3] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  return 0;
}

/* ref: FUN_007dfd10 */
uint F_007dfd10(unsigned int gen_a0)
{
  GEN_ENTER(0x7dfd10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  piVar2 = *(int * PTR32 *)(uVar1 + 0x24);
  if (piVar2 != (int *)0x0) {
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2);
    if (((char)uVar1 != '\0') && (uVar1 = piVar2[0x82], uVar1 == *(uint *)((int)this + 8))) {
      uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    }
  }
  if (*(int *)((int)this + 0x14) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)((int)this + 0x14),0);
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  return uVar1;
}

/* ref: FUN_007dfd70 */
uint F_007dfd70(unsigned int gen_a0)
{
  GEN_ENTER(0x7dfd70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d4c0c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10d4c00));
  F_0042c880((undefined *)((int)this + 0x110));
  F_0042c880((undefined *)((int)this + 0x74));
  uVar3 = F_0042c880((undefined *)((int)this + 0x20));
  uVar2 = (uint)uVar3;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[2])REFP(0x10b815c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: FUN_007dfde0 */
uint F_007dfde0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7dfde0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * pvVar1;
  undefined4 * puVar2;
  int iVar3;
  
  if ((char)param_1 != '\0') {
    F_00a3a100();
    iVar3 = 0;
    do {
      switch((unsigned int)(uintptr_t)(iVar3)) {
      case 0: ;
        puVar2 = (undefined4 *)((int)this + 200);
        break;
      case 1: ;
        puVar2 = (undefined4 *)((int)this + 0xd4);
        break;
      case 2: ;
        puVar2 = (undefined4 *)((int)this + 0xe0);
        break;
      case 3: ;
        puVar2 = (undefined4 *)((int)this + 0xec);
        break;
      case 4: ;
        puVar2 = (undefined4 *)((int)this + 0xf8);
        break;
      default: ;
        puVar2 = (undefined4 *)0x0;
      }
      F_00a3ced0(&REFG(undefined, 0x14a4230),0x7d2,iVar3,1);
      iVar3 = iVar3 + 1;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
    } while (iVar3 < 5);
  }
  pvVar1 = F_00c48350((undefined *)((int)this + 200),0,0x48);
  return (uint)pvVar1;
}

/* ref: Client::UI2::Agent::AgentLetterEdit::vf3 */
uint F_007dfe90(unsigned int gen_a0)
{
  GEN_ENTER(0x7dfe90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(this + 0x16c) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 0x16c),0);
    *(undefined4 *)(this + 0x16c) = 0;
  }
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  uVar2 = F_0042aca0(this + 0x20);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  return uVar2;
}

/* ref: FUN_007dfef0 */
uint F_007dfef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7dfef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  int iVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined * this_00;
  undefined * this_01;
  undefined4 * puVar4;
  uint uVar5;
  int * piVar6;
  int iVar7;
  uint * puVar8;
  undefined4 * in_ecx;
  undefined4 uVar9;
  undefined4 uVar10;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xdc);
  (*(uint *)(gen_frame + 0xd8)) = uVar2;
  if (*(int *)((int)this + 8) != 0) {
    pvVar3 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),0x7d2);
    (*(int *)(gen_frame + 0x8)) = 0;
    do {
      switch((unsigned int)(uintptr_t)((*(int *)(gen_frame + 0x8)))) {
      case 0: ;
        puVar8 = (uint *)((int)this + 200);
        break;
      case 1: ;
        puVar8 = (uint *)((int)this + 0xd4);
        break;
      case 2: ;
        puVar8 = (uint *)((int)this + 0xe0);
        break;
      case 3: ;
        puVar8 = (uint *)((int)this + 0xec);
        break;
      case 4: ;
        puVar8 = (uint *)((int)this + 0xf8);
        break;
      default: ;
        puVar8 = (uint *)0x0;
      }
      this_00 = (undefined *)F_00a363c0(pvVar3,(*(int *)(gen_frame + 0x8)));
      if (*(char *)((int)this_00 + 6) == '\0') {
        uVar2 = *(uint *)((int)this_00 + 8);
        if ((*(byte *)((int)this_00 + 0x14) & 1) != 0) {
          uVar2 = uVar2 + 1000000;
        }
      }
      else {
        this_01 = (undefined *)F_00a3a860(this_00);
        uVar2 = F_0046e5e0(this_01);
      }
      *puVar8 = uVar2;
      uVar2 = F_00a3a8a0(this_00);
      puVar8[1] = uVar2;
      (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
    } while ((*(int *)(gen_frame + 0x8)) < 5);
    puVar4 = ((undefined4 *)(gen_frame + 0x10));
    iVar7 = 0x18;
    do {
      *puVar4 = 0;
      puVar4 = puVar4 + 2;
      iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
    uVar10 = 0;
    uVar2 = F_00404270();
    puVar4 = (undefined4 *)F_00406c00(0x1a8,0,uVar2,uVar10);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      *puVar4 = 5;
      puVar4 = puVar4 + 1;
      iVar7 = 4;
      in_ecx = puVar4;
      do {
        F_0042b630(in_ecx);
        in_ecx = in_ecx + 0x15;
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
    }
    *(undefined4 * PTR32 *)((int)this + 0x164) = puVar4;
    uVar2 = F_00ab24a0(*(undefined4 *)((int)this + 200));
    if (uVar2 != 0) {
      uVar5 = F_00ab65a0(*(undefined4 *)((int)this + 200),uVar2);
      F_005a2710(((undefined1 *)(gen_frame + 0x20)),4);
      (*(uint *)(gen_frame + 0x24)) = uVar5;
      uVar5 = F_00ab6240(*(undefined4 *)((int)this + 200),0,uVar2);
      F_0042e430(*(undefined * PTR32 *)((int)this + 0x164),uVar5);
      uVar5 = F_0042a990(*(undefined4 *)((int)this + 0x164));
      F_005a2710(((undefined1 *)(gen_frame + 0xa0)),6);
      (*(uint *)(gen_frame + 0xa4)) = uVar5;
      if (*(uint *)(uVar2 + 0x28) < 2) {
        uVar10 = 0xffffffff;
      }
      else {
        uVar10 = *(undefined4 *)((int)this + 0xcc);
      }
      F_005a2710(((undefined1 *)(gen_frame + 0x48)),3);
      (*(undefined4 *)(gen_frame + 0x4c)) = uVar10;
      F_005a2710(((undefined1 *)(gen_frame + 0x78)),4);
      (*(undefined4 *)(gen_frame + 0x7c)) = 0x7d2;
    }
    uVar2 = F_00ab24a0(*(undefined4 *)((int)this + 0xd4));
    if (uVar2 != 0) {
      uVar5 = F_00ab65a0(*(undefined4 *)((int)this + 0xd4),uVar2);
      F_005a2710(((undefined1 *)(gen_frame + 0x28)),4);
      (*(uint *)(gen_frame + 0x2c)) = uVar5;
      uVar5 = F_00ab6240(*(undefined4 *)((int)this + 0xd4),0,uVar2);
      F_0042e430(((undefined *)GEN_TOP((*(int *)((int)this + 0x164) + 0x54))),uVar5);
      uVar5 = F_0042a990(*(int *)((int)this + 0x164) + 0x54);
      F_005a2710(((undefined1 *)(gen_frame + 0xa8)),6);
      (*(uint *)(gen_frame + 0xac)) = uVar5;
      if (*(uint *)(uVar2 + 0x28) < 2) {
        uVar10 = 0xffffffff;
      }
      else {
        uVar10 = *(undefined4 *)((int)this + 0xd8);
      }
      F_005a2710(((undefined1 *)(gen_frame + 0x50)),3);
      (*(undefined4 *)(gen_frame + 0x54)) = uVar10;
      F_005a2710(((undefined1 *)(gen_frame + 0x80)),4);
      (*(undefined4 *)(gen_frame + 0x84)) = 0x7d2;
    }
    uVar2 = F_00ab24a0(*(undefined4 *)((int)this + 0xe0));
    if (uVar2 != 0) {
      uVar5 = F_00ab65a0(*(undefined4 *)((int)this + 0xe0),uVar2);
      F_005a2710(((undefined1 *)(gen_frame + 0x30)),4);
      (*(uint *)(gen_frame + 0x34)) = uVar5;
      uVar5 = F_00ab6240(*(undefined4 *)((int)this + 0xe0),0,uVar2);
      F_0042e430(((undefined *)GEN_TOP((*(int *)((int)this + 0x164) + 0xa8))),uVar5);
      uVar5 = F_0042a990(*(int *)((int)this + 0x164) + 0xa8);
      F_005a2710(((undefined1 *)(gen_frame + 0xb0)),6);
      (*(uint *)(gen_frame + 0xb4)) = uVar5;
      if (*(uint *)(uVar2 + 0x28) < 2) {
        uVar10 = 0xffffffff;
      }
      else {
        uVar10 = *(undefined4 *)((int)this + 0xe4);
      }
      F_005a2710(((undefined1 *)(gen_frame + 0x58)),3);
      (*(undefined4 *)(gen_frame + 0x5c)) = uVar10;
      F_005a2710(((undefined1 *)(gen_frame + 0x88)),4);
      (*(undefined4 *)(gen_frame + 0x8c)) = 0x7d2;
    }
    uVar2 = F_00ab24a0(*(undefined4 *)((int)this + 0xec));
    if (uVar2 != 0) {
      uVar5 = F_00ab65a0(*(undefined4 *)((int)this + 0xec),uVar2);
      F_005a2710(((undefined1 *)(gen_frame + 0x38)),4);
      (*(uint *)(gen_frame + 0x3c)) = uVar5;
      uVar5 = F_00ab6240(*(undefined4 *)((int)this + 0xec),0,uVar2);
      F_0042e430(((undefined *)GEN_TOP((*(int *)((int)this + 0x164) + 0xfc))),uVar5);
      uVar5 = F_0042a990(*(int *)((int)this + 0x164) + 0xfc);
      F_005a2710(((undefined1 *)(gen_frame + 0xb8)),6);
      (*(uint *)(gen_frame + 0xbc)) = uVar5;
      if (*(uint *)(uVar2 + 0x28) < 2) {
        uVar10 = 0xffffffff;
      }
      else {
        uVar10 = *(undefined4 *)((int)this + 0xf0);
      }
      F_005a2710(((undefined1 *)(gen_frame + 0x60)),3);
      (*(undefined4 *)(gen_frame + 0x64)) = uVar10;
      F_005a2710(((undefined1 *)(gen_frame + 0x90)),4);
      (*(undefined4 *)(gen_frame + 0x94)) = 0x7d2;
    }
    uVar2 = F_00ab24a0(*(undefined4 *)((int)this + 0xf8));
    if (uVar2 != 0) {
      uVar5 = F_00ab65a0(*(undefined4 *)((int)this + 0xf8),uVar2);
      F_005a2710(((undefined1 *)(gen_frame + 0x40)),4);
      (*(uint *)(gen_frame + 0x44)) = uVar5;
      uVar5 = F_00ab6240(*(undefined4 *)((int)this + 0xf8),0,uVar2);
      F_0042e430(((undefined *)GEN_TOP((*(int *)((int)this + 0x164) + 0x150))),uVar5);
      uVar5 = F_0042a990(*(int *)((int)this + 0x164) + 0x150);
      F_005a2710(((undefined1 *)(gen_frame + 0xc0)),6);
      (*(uint *)(gen_frame + 0xc4)) = uVar5;
      if (*(uint *)(uVar2 + 0x28) < 2) {
        uVar10 = 0xffffffff;
      }
      else {
        uVar10 = *(undefined4 *)((int)this + 0xfc);
      }
      F_005a2710(((undefined1 *)(gen_frame + 0x68)),3);
      (*(undefined4 *)(gen_frame + 0x6c)) = uVar10;
      F_005a2710(((undefined1 *)(gen_frame + 0x98)),4);
      (*(undefined4 *)(gen_frame + 0x9c)) = 0x7d2;
    }
    uVar10 = *(undefined4 *)((int)this + 0x108);
    uVar9 = 0x14;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = F_00461bb0(pvVar3,uVar9,uVar10);
    F_0042e430((undefined *)((int)this + 0x110),uVar2);
    uVar2 = F_0042a990((int)this + 0x110);
    F_005a2710(((undefined1 *)(gen_frame + 0x70)),6);
    (*(uint *)(gen_frame + 0x74)) = uVar2;
    F_005a2710(((undefined1 *)(gen_frame + 0xc8)),4);
    uVar10 = *(undefined4 *)((int)this + 0x16c);
    (*(uint *)(gen_frame + 0xcc)) = (uint)((char)param_1 != '\0');
    F_005a2710(((undefined1 *)(gen_frame + 0xd0)),4);
    (*(undefined4 *)(gen_frame + 0xd4)) = uVar10;
    piVar6 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar6 + 0x5c))(piVar6,*(undefined4 *)((int)this + 8),0x19,((undefined4 *)(gen_frame + 0x10)));
    iVar7 = *(int *)((int)this + 0x164);
    if (iVar7 != 0) {
      iVar1 = *(int *)(iVar7 + -4);
      pvVar3 = (undefined *)(iVar1 * 0x54 + iVar7);
      while (iVar1 = iVar1 + -1, -1 < iVar1) {
        pvVar3 = (undefined *)((int)pvVar3 + -0x54);
        F_0042c880(pvVar3);
      }
      F_00406b30(iVar7 + -4);
    }
    puVar8 = &(*(uint *)(gen_frame + 0xd8));
    iVar7 = 0x18;
    do {
      puVar8 = puVar8 + -2;
      uVar2 = F_005a2670(puVar8);
      iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
  }
  F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
  return uVar2;
}

/* ref: FUN_007e04c0 */
uint F_007e04c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7e04c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  undefined * pvVar2;
  undefined4 * this_00;
  uint uVar3;
  undefined * this_01;
  uint * puVar4;
  
  if (*(int *)((int)this + 0x16c) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0x16c),0);
    *(undefined4 *)((int)this + 0x16c) = 0;
  }
  pvVar2 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),param_3);
  this_00 = (undefined4 *)F_00a37da0(pvVar2,param_2);
  uVar3 = F_00a37c50(this_00);
  if (uVar3 == 0) {
    F_0077bd50(this,param_2,param_3,0);
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 0: ;
      puVar4 = (uint *)((int)this + 200);
      break;
    case 1: ;
      puVar4 = (uint *)((int)this + 0xd4);
      break;
    case 2: ;
      puVar4 = (uint *)((int)this + 0xe0);
      break;
    case 3: ;
      puVar4 = (uint *)((int)this + 0xec);
      break;
    case 4: ;
      puVar4 = (uint *)((int)this + 0xf8);
      break;
    default: ;
      puVar4 = (uint *)0x0;
    }
    F_00a47f70(&REFG(undefined, 0x14a4230),*this_00,(uint)*(ushort *)(this_00 + 1),0x7d2,param_1,1);
    *(undefined2 *)(puVar4 + 2) = (undefined2)param_3;
    *(undefined2 *)((int)puVar4 + 10) = (undefined2)param_2;
    pvVar2 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),0x7d2);
    pvVar2 = (undefined *)F_00a363c0(pvVar2,param_1);
    *(undefined * PTR32 *)((int)this + 0x168) = pvVar2;
    if (*(char *)((int)pvVar2 + 6) != '\0') {
      this_01 = (undefined *)F_00a3a860(pvVar2);
      uVar3 = F_0046e5e0(this_01);
      *puVar4 = uVar3;
      uVar3 = F_00a3a8a0(pvVar2);
      puVar4[1] = uVar3;
      return uVar3;
    }
    uVar3 = *(uint *)((int)pvVar2 + 8);
    if ((*(byte *)((int)pvVar2 + 0x14) & 1) != 0) {
      uVar3 = uVar3 + 1000000;
    }
    *puVar4 = uVar3;
    uVar3 = F_00a3a8a0(pvVar2);
    puVar4[1] = uVar3;
  }
  return uVar3;
}

/* ref: FUN_007e0610 */
unsigned int F_007e0610(unsigned int gen_a0)
{
  GEN_ENTER(0x7e0610u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  iVar1 = *(int *)(uVar2 + 0x28);
  if ((((*(int *)((int)this + 200) != 0) && (*(int *)((int)this + 0xd4) != 0)) &&
      (*(int *)((int)this + 0xe0) != 0)) &&
     ((*(int *)((int)this + 0xec) != 0 && (*(int *)((int)this + 0xf8) != 0)))) {
    *(undefined4 *)(iVar1 + 0x1d0) = 0;
    *(undefined4 *)(iVar1 + 0x1d4) = 0;
    *(undefined1 *)(iVar1 + 0x1dc) = 0;
    *(undefined4 *)(iVar1 + 0x1d8) = 0;
    return 0;
  }
  *(undefined4 *)(iVar1 + 0x1d0) = 0x5e;
  *(int *)(iVar1 + 0x1d4) = (int)this + 0xc;
  *(undefined1 *)(iVar1 + 0x1dc) = 1;
  *(undefined4 *)(iVar1 + 0x1d8) = 0;
  return 0;
}

/* ref: FUN_007e0690 */
unsigned int F_007e0690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e0690u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d4c54));
  in_ecx[3] = 0;
  in_ecx[4] = 0xffffffff;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  *(undefined1 *)(in_ecx + 7) = 1;
  in_ecx[8] = 0;
  return 0;
}

/* ref: FUN_007e06d0 */
byte F_007e06d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e06d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  code * pcVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined * this_00;
  int * piVar4;
  int iVar5;
  undefined4 * in_ecx;
  undefined4 uVar6;
  
  if (*(int *)((int)this + 0x18) == 0) {
    uVar6 = 0;
    uVar2 = F_00404270();
    puVar3 = (undefined4 *)F_00406c00(0x1a8,0,uVar2,uVar6);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      *puVar3 = 5;
      puVar3 = puVar3 + 1;
      iVar5 = 4;
      in_ecx = puVar3;
      do {
        F_0042b630(in_ecx);
        in_ecx = in_ecx + 0x15;
        iVar5 = iVar5 + -1;
      } while (-1 < iVar5);
    }
    *(undefined4 * PTR32 *)((int)this + 0x18) = puVar3;
  }
  uVar6 = 6;
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
  this_00 = (undefined *)F_00435440(uVar2,uVar6);
  *(undefined * PTR32 *)((int)this + 0xc) = this_00;
  if ((this_00 != (undefined *)0x0) && (uVar2 = F_00444300(this_00,param_1), (char)uVar2 != '\0')) {
    if ((*(int *)((int)this + 0x10) != param_1) && (*(int *)((int)this + 0x20) != 0)) {
      piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar4 + 0x54))(piVar4,*(undefined4 *)((int)this + 0x20),0);
      *(undefined4 *)((int)this + 0x20) = 0;
    }
    pcVar1 = *(gen_code32 *)(*(int *)this + 8);
    *(int *)((int)this + 0x10) = param_1;
    *(undefined1 *)((int)this + 0x1c) = 0;
    (*pcVar1)(this);
    return 1;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentLetterView::vf3 */
uint F_007e07a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7e07a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  undefined * this_00;
  ulonglong uVar5;
  
  iVar1 = *(int *)(this + 0x18);
  uVar4 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + -4);
    this_00 = (undefined *)(iVar2 * 0x54 + iVar1);
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      this_00 = (undefined *)((int)this_00 + -0x54);
      F_0042c880(this_00);
    }
    uVar5 = F_00406b30(iVar1 + -4);
    uVar4 = (uint)uVar5;
    *(undefined4 *)(this + 0x18) = 0;
  }
  if (*(int *)(this + 0x20) != 0) {
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,*(undefined4 *)(this + 0x20),0);
    *(undefined4 *)(this + 0x20) = 0;
  }
  if (*(int *)(this + 8) != 0) {
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return uVar4;
}

/* ref: FUN_007e0840 */
uint F_007e0840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e0840u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  in_ecx[3] = (*(undefined * PTR32 (*)[2])REFP(0x10905bc));
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d4ca4));
  in_ecx[3] = (*(undefined * PTR32 (*)[2])REFP(0x10d4c98));
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  F_0042b630(in_ecx + 6);
  in_ecx[0x20] = 0;
  in_ecx[0x21] = 0;
  in_ecx[0x1c] = 0xffffffff;
  return (uint)in_ecx;
}

/* ref: FUN_007e0890 */
uint F_007e0890(unsigned int gen_a0)
{
  GEN_ENTER(0x7e0890u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d4ca4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10d4c98));
  if (*(int *)((int)this + 0x84) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0x84),0);
    *(undefined4 *)((int)this + 0x84) = 0;
  }
  uVar3 = F_0042c880((undefined *)((int)this + 0x18));
  uVar2 = (uint)uVar3;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[2])REFP(0x10905bc));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentLinkshell::vf3 */
unsigned int F_007e0920(unsigned int gen_a0)
{
  GEN_ENTER(0x7e0920u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  if (*(int *)(this + 0x84) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 0x84),0);
    *(undefined4 *)(this + 0x84) = 0;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentLinkshell::vf11 */
uint F_007e0980(unsigned int gen_a0)
{
  GEN_ENTER(0x7e0980u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  undefined3 extraout_var_00 = 0;
  uint uVar3;
  undefined4 uVar4;
  
  bVar1 = F_004351d0();
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 == 0) {
    uVar4 = 2;
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x44))))(*(int * PTR32 *)(this + 4));
    uVar2 = F_00435440(uVar2,uVar4);
    if (uVar2 != 0) {
      bVar1 = F_004393f0(uVar2);
      uVar2 = CONCAT31(extraout_var_00,bVar1);
      if (bVar1 == 0) goto LAB_007e09d1;
    }
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
    uVar2 = 0;
    if (*(int *)(uVar3 + 0x18) != 0) {
      return ~(**((uint * PTR32 *)GEN_TOP((*(int *)(uVar3 + 0x18) + 0xe4))) >> 0x1c) & 1;
    }
  }
LAB_007e09d1: ;
  return uVar2 & 0xffffff00;
}

/* ref: FUN_007e09e0 */
uint F_007e09e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e09e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[17])REFP(0x10d4cec));
  in_ecx[3] = 0;
  F_0042b630(in_ecx + 5);
  in_ecx[0x1a] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_007e0a20 */
uint F_007e0a20(unsigned int gen_a0)
{
  GEN_ENTER(0x7e0a20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x10d4cec));
  uVar3 = F_0042c880((undefined *)((int)this + 0x14));
  uVar2 = (uint)uVar3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentPartyInvite::vf3 */
unsigned int F_007e0a70(unsigned int gen_a0)
{
  GEN_ENTER(0x7e0a70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  
  if (*(int *)(this + 8) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  iVar1 = *(int *)(this + 0x68);
  if (iVar1 != 0) {
    *(undefined4 *)(this + 0x68) = 0;
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,iVar1,0);
  }
  return 0;
}

/* ref: FUN_007e0ad0 */
uint F_007e0ad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e0ad0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  in_ecx[3] = (*(undefined * PTR32 (*)[2])REFP(0x10905bc));
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d4d44));
  in_ecx[3] = (*(undefined * PTR32 (*)[2])REFP(0x10d4d34));
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  F_0042b630(in_ecx + 6);
  return (uint)in_ecx;
}

/* ref: FUN_007e0b10 */
uint F_007e0b10(unsigned int gen_a0)
{
  GEN_ENTER(0x7e0b10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d4d44));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10d4d34));
  uVar3 = F_0042c880((undefined *)((int)this + 0x18));
  uVar2 = (uint)uVar3;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[2])REFP(0x10905bc));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: FUN_007e0b70 */
uint F_007e0b70(unsigned int gen_a0)
{
  GEN_ENTER(0x7e0b70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  piVar2 = *(int * PTR32 *)(uVar1 + 0x24);
  if (piVar2 != (int *)0x0) {
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2);
    if (((char)uVar1 != '\0') && (uVar1 = piVar2[0x82], uVar1 == *(uint *)((int)this + 8))) {
      uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    }
  }
  if (*(int *)((int)this + 0x14) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)((int)this + 0x14),0);
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  return uVar1;
}

/* ref: FUN_007e0bd0 */
uint F_007e0bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e0bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int * piVar2;
  byte bVar3;
  
  *(int * PTR32 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[2])REFP(0x10905bc));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d4d94));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10d4d88));
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0x14))(param_1)));
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2)));
  iVar1 = *piVar2;
  F_0042b630((int)this + 0x18);
  F_0042aca0((int)this + 0x18);
  bVar3 = REFG(undefined1, 0x132814a) & 0x1f;
  *(undefined1 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(int *)((int)this + 0x74) = (1 << bVar3) + -1;
  *(undefined4 *)((int)this + 0x78) = 1;
  *(undefined4 *)((int)this + 0x7c) = 0x32;
  *(undefined4 *)((int)this + 0x80) = 1;
  *(undefined2 *)((int)this + 0x84) = 0;
  if (-1 < iVar1) {
    bVar3 = (byte)iVar1;
    *(byte *)((int)this + 0x86) = bVar3;
    *(char *)((int)this + 0x84) = '\x01' << (bVar3 & 0x1f);
  }
  return (uint)this;
}

/* ref: FUN_007e0c80 */
uint F_007e0c80(unsigned int gen_a0)
{
  GEN_ENTER(0x7e0c80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d4d94));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10d4d88));
  uVar3 = F_0042c880((undefined *)((int)this + 0x18));
  uVar2 = (uint)uVar3;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[2])REFP(0x10905bc));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: FUN_007e0ce0 */
uint F_007e0ce0(unsigned int gen_a0)
{
  GEN_ENTER(0x7e0ce0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  piVar2 = *(int * PTR32 *)(uVar1 + 0x24);
  if (piVar2 != (int *)0x0) {
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2);
    if (((char)uVar1 != '\0') && (uVar1 = piVar2[0x82], uVar1 == *(uint *)((int)this + 8))) {
      uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    }
  }
  if (*(int *)((int)this + 0x14) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)((int)this + 0x14),0);
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  return uVar1;
}

/* ref: FUN_007e0d40 */
uint F_007e0d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e0d40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  undefined2 * puVar2;
  undefined1 * puVar3;
  int iVar4;
  
  *(int * PTR32 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10c43c0));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d4de4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10d4dd8));
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x18))(param_1);
  *(uint *)((int)this + 0x10) = uVar1;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0x3000000;
  *(undefined1 *)((int)this + 0x24) = 1;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined1 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined2 *)((int)this + 0x40) = 0x11;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined2 *)((int)this + 0x6c) = 0;
  F_0042b630((int)this + 0x70);
  F_0090d0d0((undefined *)((int)this + 0xc4));
  *(undefined2 *)((int)this + 0x174) = 0;
  F_0042b630((int)this + 0x178);
  F_0042b630((int)this + 0x1cc);
  *(undefined1 *)((int)this + 0x220) = 0;
  F_0042b630((int)this + 0x224);
  F_0042b630((int)this + 0x278);
  puVar2 = (undefined2 *)((int)this + 0x2cc);
  iVar4 = 0x1d;
  do {
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 2) = 0;
    *(undefined4 *)(puVar2 + 4) = 0;
    puVar2[6] = 0;
    *(undefined1 *)(puVar2 + 7) = 0;
    puVar2 = puVar2 + 8;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  *(undefined2 *)((int)this + 0x4ac) = 0;
  *(undefined1 *)((int)this + 0x4ae) = 0;
  *(undefined2 *)((int)this + 0x4b2) = 0;
  *(undefined2 *)((int)this + 0x4be) = 0;
  *(undefined1 *)((int)this + 0x4b0) = 0;
  *(undefined1 *)((int)this + 0x4b4) = 0;
  *(undefined4 *)((int)this + 0x4b8) = 0;
  *(undefined1 *)((int)this + 0x4bc) = 0;
  *(undefined1 *)((int)this + 0x4c0) = 0;
  *(undefined4 *)((int)this + 0x4c4) = 0;
  *(undefined1 *)((int)this + 0x4c8) = 0;
  *(undefined2 *)((int)this + 0x4ca) = 0;
  *(undefined1 *)((int)this + 0x4cc) = 0;
  *(undefined4 *)((int)this + 0x4d0) = 0;
  puVar3 = (undefined1 *)((int)this + 0x4d4);
  iVar4 = 0xe;
  do {
    *puVar3 = 0;
    *(undefined2 *)(puVar3 + 2) = 0;
    puVar3[4] = 0;
    *(undefined4 *)(puVar3 + 8) = 0;
    puVar3 = puVar3 + 0xc;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  *(undefined1 *)((int)this + 0x588) = 0;
  *(undefined2 *)((int)this + 0x58a) = 0;
  *(undefined1 *)((int)this + 0x58c) = 0;
  *(undefined4 *)((int)this + 0x590) = 0;
  *(undefined4 *)((int)this + 0x594) = 0;
  F_00a1af40((undefined *)((int)this + 0x598));
  *(undefined4 *)((int)this + 0x5b0) = 0;
  *(undefined4 *)((int)this + 0x42) = 0;
  *(undefined4 *)((int)this + 0x46) = 0;
  *(undefined4 *)((int)this + 0x4a) = 0;
  *(undefined4 *)((int)this + 0x4e) = 0;
  *(undefined4 *)((int)this + 0x5b4) = 0;
  *(undefined4 *)((int)this + 0x5b8) = 0;
  *(undefined4 *)((int)this + 0x5bc) = 0;
  return (uint)this;
}

/* ref: FUN_007e0f00 */
uint F_007e0f00(unsigned int gen_a0)
{
  GEN_ENTER(0x7e0f00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d4de4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10d4dd8));
  F_0042c880((undefined *)((int)this + 0x278));
  F_0042c880((undefined *)((int)this + 0x224));
  F_0042c880((undefined *)((int)this + 0x1cc));
  F_0042c880((undefined *)((int)this + 0x178));
  uVar3 = F_0042c880((undefined *)((int)this + 0x70));
  uVar2 = (uint)uVar3;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10c43c0));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: FUN_007e0f80 */
unsigned int F_007e0f80(unsigned int gen_a0)
{
  GEN_ENTER(0x7e0f80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)((int)this + 0x54) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0x54),0);
    *(undefined4 *)((int)this + 0x54) = 0;
  }
  if (*(int *)((int)this + 0x5c) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0x5c),0);
    *(undefined4 *)((int)this + 0x5c) = 0;
  }
  return 0;
}

/* ref: FUN_007e0fe0 */
byte F_007e0fe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e0fe0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  ushort uVar1;
  byte bVar2;
  uint in_ecx;
  undefined * this_00;
  undefined4 * puVar3;
  int iVar4;
  undefined4 uVar5;
  
  if ((*(*(byte * PTR32 *)&gen_args[1]) & 0xf) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *((int *)GEN_TOP(((*(byte * PTR32 *)&gen_args[1]) + 4)));
  }
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) = 0;
  if (iVar4 < 0) {
    return 1;
  }
  uVar5 = 0xb;
  in_ecx = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x44))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))));
  this_00 = (undefined *)F_00435440(in_ecx,uVar5);
  switch((unsigned int)(uintptr_t)(*((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))))) {
  case 0: ;
    if ((((iVar4 == 0) && (*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) != (undefined *)0x0)) &&
        (puVar3 = (undefined4 *)
                  F_004360f0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))),
                               *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))),0), puVar3 != (undefined4 *)0x0))
       && (this_00 != (undefined *)0x0)) {
      if ((*(byte *)((int)puVar3 + 0x13) & 1) != 0) {
        F_0044ab20(this_00,*puVar3,puVar3[1]);
        return 1;
      }
      F_0044aaf0(this_00,puVar3 + 7);
      return 1;
    }
    break;
  case 1: ;
    if ((iVar4 == 0) && (this_00 != (undefined *)0x0)) {
      F_00441440(this_00);
      return 1;
    }
    break;
  case 2: ;
    if (iVar4 == 0) {
      F_0077cd30((*(undefined * PTR32 *)&gen_args[0]),0x98);
      return 1;
    }
    break;
  case 3: ;
    if ((iVar4 == 0) && (this_00 != (undefined *)0x0)) {
      F_00441750(this_00,(uint)*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x41))));
      return 1;
    }
    break;
  case 4: ;
    if ((iVar4 == 0) && (this_00 != (undefined *)0x0)) {
      if ((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))) != 0 || *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))) != 0) &&
         (*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))) != 0x11)) {
        F_004418f0(this_00,*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))),*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))),
                     (uint)*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))));
        F_007e0f80((*(undefined * PTR32 *)&gen_args[0]));
        *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))) = 0x11;
        return 1;
      }
    }
    goto LAB_007e1157;
  case 5: ;
    if ((iVar4 == 0) && (this_00 != (undefined *)0x0)) {
      if ((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))) != 0 || *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))) != 0) &&
         (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))) != '\x11')) {
        F_0044ac20(this_00,*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))),*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))));
        F_007e0f80((*(undefined * PTR32 *)&gen_args[0]));
      }
    }
LAB_007e1157: ;
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))) = 0x11;
    return 1;
  case 6: ;
    if ((iVar4 == 0) && (this_00 != (undefined *)0x0)) {
      uVar1 = *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58a)));
      (*(byte * PTR32 *)&gen_args[1]) = ((byte *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(byte * PTR32 *)&gen_args[1]), 1, 3),*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x588))))));
      bVar2 = F_0077dc00((*(undefined * PTR32 *)&gen_args[0]),1,(uint)*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x588))),(uint)uVar1);
      if (bVar2 != 0) {
        F_004410e0((uint)uVar1,(*(byte * PTR32 *)&gen_args[1]));
        return 1;
      }
    }
    break;
  case 7: ;
    if ((iVar4 == 0) && (this_00 != (undefined *)0x0)) {
      uVar1 = *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58a)));
      (*(byte * PTR32 *)&gen_args[1]) = ((byte *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(byte * PTR32 *)&gen_args[1]), 1, 3),*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x588))))));
      bVar2 = F_0077dc00((*(undefined * PTR32 *)&gen_args[0]),0,(uint)*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x588))),(uint)uVar1);
      if (bVar2 != 0) {
        F_00441030((uint)uVar1,(*(byte * PTR32 *)&gen_args[1]));
        return 1;
      }
    }
    break;
  case 8: ;
    if ((iVar4 == 0) && (this_00 != (undefined *)0x0)) {
      uVar1 = *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58a)));
      (*(byte * PTR32 *)&gen_args[1]) = ((byte *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(byte * PTR32 *)&gen_args[1]), 1, 3),*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x588))))));
      bVar2 = F_0077dc00((*(undefined * PTR32 *)&gen_args[0]),0,(uint)*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x588))),(uint)uVar1);
      if (bVar2 != 0) {
        F_00440f80((uint)uVar1,(*(byte * PTR32 *)&gen_args[1]));
      }
    }
  }
  return 1;
}

/* ref: FUN_007e1250 */
uint F_007e1250(unsigned int gen_a0)
{
  GEN_ENTER(0x7e1250u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  undefined4 uVar3;
  
  if (*(byte *)((int)this + 0x20) == 0) {
    F_0044ac80(*(undefined * PTR32 *)((int)this + 0x18),1,0);
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2,0x27);
    if (uVar1 != 0) {
      if (*((int *)GEN_TOP((*(int *)(uVar1 + 0x20) + 0x190c))) != 1) {
        *((undefined4 *)GEN_TOP((*(int *)(uVar1 + 0x20) + 0x190c))) = 1;
        *(undefined1 *)(uVar1 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((*(int *)(uVar1 + 0x20) + 0x1900))) != 0) {
        *((undefined4 *)GEN_TOP((*(int *)(uVar1 + 0x20) + 0x1900))) = 0;
        *(undefined1 *)(uVar1 + 0x1d) = 1;
      }
    }
  }
  else {
    uVar1 = *(byte *)((int)this + 0x20) - 1;
    if ((uVar1 == 0) && (*(char *)((int)this + 0x21) == '\0')) {
      if (*(char *)((int)this + 0x23) == '\x01') {
        uVar3 = 1;
      }
      else {
        uVar3 = 3;
      }
      F_0044ac80(*(undefined * PTR32 *)((int)this + 0x18),uVar3,
                   (uint)(ushort)((ushort)*(byte *)((int)this + 0x22) * 200));
      piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2,0x27);
      if (uVar1 != 0) {
        if (*((int *)GEN_TOP((*(int *)(uVar1 + 0x20) + 0x190c))) != 1) {
          *((undefined4 *)GEN_TOP((*(int *)(uVar1 + 0x20) + 0x190c))) = 1;
          *(undefined1 *)(uVar1 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar1 + 0x20) + 0x1900))) != 0) {
          *((undefined4 *)GEN_TOP((*(int *)(uVar1 + 0x20) + 0x1900))) = 0;
          *(undefined1 *)(uVar1 + 0x1d) = 1;
        }
      }
      uVar1 = F_0077c9a0(this);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: FUN_007e1340 */
uint F_007e1340(unsigned int gen_a0)
{
  GEN_ENTER(0x7e1340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  uint uVar3;
  undefined * this_00;
  uint uVar4;
  char * pcVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int local_c;
  int local_8;
  
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2,0x2c);
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2,0x28)));
  iVar6 = 0;
  if (((uVar3 != 0) && (this_00 != (undefined *)0x0)) && (*(int *)((int)this + 0x14) != 0)) {
    local_c = 0;
    local_8 = 8;
    do {
      uVar4 = F_00436a90(*(undefined4 *)((int)this + 0x14),iVar6);
      if (uVar4 == 0) break;
      if (*((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + -8 + local_8))) != iVar6) {
        *((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + -8 + local_8))) = iVar6;
        *(undefined1 *)(uVar3 + 0x1d) = 1;
      }
      if ((*(char *)(uVar4 + 0xb) == '\0') || (iVar6 == 0xf)) {
        *((undefined1 *)GEN_TOP((*(byte *)(uVar4 + 10) + 0x42 + (int)this))) = 0xff;
        if (*((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + -4 + local_8))) != -1) {
          *((undefined4 *)GEN_TOP((*(int *)(uVar3 + 0x20) + -4 + local_8))) = 0xffffffff;
          *(undefined1 *)(uVar3 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + local_8))) != 0) {
          *((undefined4 *)GEN_TOP((*(int *)(uVar3 + 0x20) + local_8))) = 0;
          *(undefined1 *)(uVar3 + 0x1d) = 1;
        }
        F_00431250(this_00,iVar6,"",0,1,0);
      }
      else {
        *((char *)GEN_TOP((*(byte *)(uVar4 + 10) + 0x42 + (int)this))) = (char)iVar6;
        if (*((uint *)GEN_TOP((local_8 + *(int *)(uVar3 + 0x20)))) != (uint)*(ushort *)(uVar4 + 8)) {
          *((uint *)GEN_TOP((local_8 + *(int *)(uVar3 + 0x20)))) = (uint)*(ushort *)(uVar4 + 8);
          *(undefined1 *)(uVar3 + 0x1d) = 1;
        }
        uVar9 = 0;
        uVar8 = 1;
        uVar7 = 0;
        uVar4 = F_00441270(uVar4);
        F_00431250(this_00,iVar6,uVar4,uVar7,uVar8,uVar9);
        local_c = local_c + 1;
      }
      local_8 = local_8 + 0xc;
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x10);
    iVar6 = 0;
    pcVar5 = (char *)((int)this + 0x43);
    local_8 = 4;
    do {
      if (-1 < pcVar5[-1]) {
        iVar1 = pcVar5[-1] * 3 + 1;
        if (*((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + iVar1 * 4))) != iVar6) {
          *((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + iVar1 * 4))) = iVar6;
          *(undefined1 *)(uVar3 + 0x1d) = 1;
        }
        iVar6 = iVar6 + 1;
      }
      if (-1 < *pcVar5) {
        iVar1 = *pcVar5 * 3 + 1;
        if (*((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + iVar1 * 4))) != iVar6) {
          *((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + iVar1 * 4))) = iVar6;
          *(undefined1 *)(uVar3 + 0x1d) = 1;
        }
        iVar6 = iVar6 + 1;
      }
      if (-1 < pcVar5[1]) {
        iVar1 = pcVar5[1] * 3 + 1;
        if (*((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + iVar1 * 4))) != iVar6) {
          *((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + iVar1 * 4))) = iVar6;
          *(undefined1 *)(uVar3 + 0x1d) = 1;
        }
        iVar6 = iVar6 + 1;
      }
      if (-1 < pcVar5[2]) {
        iVar1 = pcVar5[2] * 3 + 1;
        if (*((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + iVar1 * 4))) != iVar6) {
          *((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + iVar1 * 4))) = iVar6;
          *(undefined1 *)(uVar3 + 0x1d) = 1;
        }
        iVar6 = iVar6 + 1;
      }
      pcVar5 = pcVar5 + 4;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    if (*((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x164))) != (uint)(local_c == 0xf)) {
      *((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x164))) = (uint)(local_c == 0xf);
      *(undefined1 *)(uVar3 + 0x1d) = 1;
    }
    if (*((undefined1 * PTR32 *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x50))) != &REFG(undefined1, 0x14ab071)) {
      *((undefined1 * PTR32 *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x50))) = &REFG(undefined1, 0x14ab071);
      *(undefined1 *)((int)this_00 + 0x1d) = 1;
    }
    F_0077cfc0(this);
    uVar9 = 0;
    uVar8 = 1;
    uVar7 = 0;
    uVar3 = F_00461c60(*(undefined * PTR32 *)((int)this + 0x10),0x7fc,local_c,0xf);
    F_00431250(this_00,0x13,uVar3,uVar7,uVar8,uVar9);
    F_0077d140(this);
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2,0x27)));
    if (this_00 != (undefined *)0x0) {
      *(undefined1 *)((int)this_00 + 0x1d) = 1;
    }
  }
  return (uint)this_00;
}

/* ref: FUN_007e1590 */
byte F_007e1590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e1590u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  switch((unsigned int)(uintptr_t)(*(undefined1 *)((int)this + 0x6c))) {
  case 0: ;
  case 1: ;
    F_0077cd30(this,0x98);
    return 1;
  case 2: ;
  case 3: ;
  case 4: ;
    F_0077cd30(this,0x9b);
    return 1;
  case 5: ;
  case 6: ;
    F_0077cd30(this,0xf);
  }
  return 1;
}

/* ref: FUN_007e1600 */
uint F_007e1600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e1600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined1 *)((int)this + 0xc5) = (undefined1)param_1;
  uVar1 = F_0077d140(this);
  return uVar1;
}

/* ref: FUN_007e1620 */
unsigned int F_007e1620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e1620u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint * puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  int iVar17;
  uint uVar18;
  uint local_10;
  
  iVar3 = (*(int *)&gen_args[1]);
  if ((*(int *)&gen_args[1]) != 0) {
    (*(int *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[1]), 1, 3),*((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x41))));
    puVar4 = (uint *)F_00436a90(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))),(*(int *)&gen_args[1]));
    if ((puVar4 != (uint *)0x0) && (*(char *)((int)puVar4 + 0xb) != '\0')) {
      if (((*(byte *)(iVar3 + 0x10) & 0xf) == 0) || (*(int *)(iVar3 + 0x14) < 1)) {
        uVar18 = 0;
      }
      else {
        uVar18 = 1;
      }
      if (((*(byte *)(iVar3 + 0x18) & 0xf) == 0) || (*(int *)(iVar3 + 0x1c) < 1)) {
        uVar5 = 0;
      }
      else {
        uVar5 = 4;
      }
      if (((*(byte *)(iVar3 + 0x20) & 0xf) == 0) || (*(int *)(iVar3 + 0x24) < 1)) {
        uVar6 = 0;
      }
      else {
        uVar6 = 8;
      }
      if (((*(byte *)(iVar3 + 0x28) & 0xf) == 0) || (*(int *)(iVar3 + 0x2c) < 1)) {
        uVar7 = 0;
      }
      else {
        uVar7 = 0x20;
      }
      if (((*(byte *)(iVar3 + 0x30) & 0xf) == 0) || (*(int *)(iVar3 + 0x34) < 1)) {
        uVar8 = 0;
      }
      else {
        uVar8 = 0x80;
      }
      if (((*(byte *)(iVar3 + 0x38) & 0xf) == 0) || (*(int *)(iVar3 + 0x3c) < 1)) {
        uVar9 = 0;
      }
      else {
        uVar9 = 0x100;
      }
      if (((*(byte *)(iVar3 + 0x40) & 0xf) == 0) || (*(int *)(iVar3 + 0x44) < 1)) {
        uVar10 = 0;
      }
      else {
        uVar10 = 0x40;
      }
      if (((*(byte *)(iVar3 + 0x48) & 0xf) == 0) || (*(int *)(iVar3 + 0x4c) < 1)) {
        uVar11 = 0;
      }
      else {
        uVar11 = 0x200;
      }
      if (((*(byte *)(iVar3 + 0x50) & 0xf) == 0) || (*(int *)(iVar3 + 0x54) < 1)) {
        uVar12 = 0;
      }
      else {
        uVar12 = 0x800;
      }
      if (((*(byte *)(iVar3 + 0x58) & 0xf) == 0) || (*(int *)(iVar3 + 0x5c) < 1)) {
        uVar13 = 0;
      }
      else {
        uVar13 = 0x1000;
      }
      if (((*(byte *)(iVar3 + 0x60) & 0xf) == 0) || (*(int *)(iVar3 + 100) < 1)) {
        uVar14 = 0;
      }
      else {
        uVar14 = 0x2000;
      }
      if (((*(byte *)(iVar3 + 0x68) & 0xf) == 0) || (*(int *)(iVar3 + 0x6c) < 1)) {
        uVar15 = 0;
      }
      else {
        uVar15 = 0x4000;
      }
      uVar15 = uVar18 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 | uVar11 | uVar12 | uVar13 |
               uVar14 | uVar15;
      local_10 = 0;
      iVar17 = 0;
      do {
        uVar18 = iVar17 + 0xcU & 0xff;
        if ((*(byte *)(iVar3 + 0x10 + uVar18 * 8) & 0xf) == 0) {
          uVar16 = 0;
        }
        else {
          uVar16 = *(undefined4 *)(iVar3 + 0x14 + uVar18 * 8);
        }
        uVar18 = F_0077d600(uVar18,uVar16);
        lVar1 = ((ulonglong)(((ulonglong)(byte)uVar18 < 0x40) ? ((1L << (ulonglong)(byte)uVar18)) : 0));
        local_10 = local_10 | (uint)((ulonglong)lVar1 >> 0x20);
        iVar17 = iVar17 + 1;
        uVar15 = uVar15 | (uint)lVar1;
      } while (iVar17 < 5);
      if ((*(byte *)(iVar3 + 0x98) & 0xf) == 0) {
        uVar16 = 0;
      }
      else {
        uVar16 = *(undefined4 *)(iVar3 + 0x9c);
      }
      uVar18 = F_0077d600(0x11,uVar16);
      lVar1 = ((ulonglong)(((ulonglong)(byte)uVar18 < 0x40) ? ((1L << (ulonglong)(byte)uVar18)) : 0));
      if ((*(byte *)(iVar3 + 0xa0) & 0xf) == 0) {
        uVar16 = 0;
      }
      else {
        uVar16 = *(undefined4 *)(iVar3 + 0xa4);
      }
      uVar18 = F_0077d600(0x12,uVar16);
      lVar2 = ((ulonglong)(((ulonglong)(byte)uVar18 < 0x40) ? ((1L << (ulonglong)(byte)uVar18)) : 0));
      F_004415b0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))),(*(int *)&gen_args[1]),
                   (uint)lVar2 | *puVar4 & 0x10 | uVar15 | (uint)lVar1,
                   (uint)((ulonglong)lVar2 >> 0x20) | local_10 | (uint)((ulonglong)lVar1 >> 0x20));
    }
  }
  return 0;
}

/* ref: FUN_007e1850 */
uint F_007e1850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7e1850u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042b630(((undefined1 *)(gen_frame + 0x4)));
  uVar1 = F_0077d7c0(this,param_1,((undefined1 *)(gen_frame + 0x4)),param_2,param_3);
  if (uVar1 == 1) {
    F_0045ca80(*(undefined * PTR32 *)((int)this + 0x10),((undefined1 *)(gen_frame + 0x4)),(uint)*(byte *)(param_3 + 0x12),0);
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar1;
}

/* ref: FUN_007e18c0 */
uint F_007e18c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7e18c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042b630(((undefined1 *)(gen_frame + 0x4)));
  uVar1 = F_0077d7c0(this,param_1,((undefined1 *)(gen_frame + 0x4)),param_2,param_3);
  if (uVar1 == 1) {
    F_0045ccd0(*(undefined * PTR32 *)((int)this + 0x10),((undefined1 *)(gen_frame + 0x4)),(uint)*(byte *)(param_3 + 0x12),0);
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar1;
}

/* ref: FUN_007e1930 */
uint F_007e1930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e1930u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  uint * puVar3;
  uint uVar4;
  uint uVar5;
  undefined * puVar6;
  undefined * this_01;
  int iVar7;
  int iVar8;
  int iVar9;
  byte * pbVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  (*(uint *)(gen_frame + 0xd8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xdc);
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,0x2f);
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,0x2b)));
  if ((uVar2 != 0) && (this_00 != (undefined *)0x0)) {
    (*(int *)(gen_frame + 0x28)) = *((int *)GEN_TOP((*(int *)(uVar2 + 0x20) + 4)));
    (*(byte * PTR32 *)(gen_frame + 0x2c)) = (byte *)(param_2 + 0x1a);
    (*(int *)(gen_frame + 0x24)) = (*(int *)(gen_frame + 0x28)) * 4 + 8;
    (*(int *)(gen_frame + 0x1c)) = 5;
    do {
      if ((*(ushort *)((*(byte * PTR32 *)(gen_frame + 0x2c)) + -2) != 0) &&
         (puVar3 = (uint *)F_00ab40d0((uint)*(ushort *)((*(byte * PTR32 *)(gen_frame + 0x2c)) + -2)), puVar3 != (uint *)0x0)) {
        if (*((int *)GEN_TOP((*(int *)(uVar2 + 0x20) + (*(int *)(gen_frame + 0x24))))) != (int)*(char *)((int)puVar3 + 7)) {
          *((int *)GEN_TOP((*(int *)(uVar2 + 0x20) + (*(int *)(gen_frame + 0x24))))) = (int)*(char *)((int)puVar3 + 7);
          *(undefined1 *)(uVar2 + 0x1d) = 1;
        }
        (*(int *)(gen_frame + 0x18)) = 0;
        (*(int *)(gen_frame + 0x20)) = 0;
        (*(undefined4 *)(gen_frame + 0x14)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x14)), 1, 3),(char)puVar3[1]);
        F_0042b630(((undefined1 *)(gen_frame + 0x84)));
        pbVar10 = (*(byte * PTR32 *)(gen_frame + 0x2c)) + -0x12;
        uVar4 = F_0077d7c0(this,(*(undefined4 *)(gen_frame + 0x14)),((undefined1 *)(gen_frame + 0x84)),&(*(int *)(gen_frame + 0x18)),pbVar10);
        if (uVar4 == 1) {
          F_0045ca80(*(undefined * PTR32 *)((int)this + 0x10),((undefined1 *)(gen_frame + 0x84)),(uint)*(*(byte * PTR32 *)(gen_frame + 0x2c)),0);
        }
        F_0042c880(((undefined1 *)(gen_frame + 0x84)));
        (*(undefined4 *)(gen_frame + 0xc)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0xc)), 1, 3),*(undefined1 *)((int)puVar3 + 5));
        F_0042b630(((undefined1 *)(gen_frame + 0x84)));
        uVar5 = F_0077d7c0(this,(*(undefined4 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x84)),&(*(int *)(gen_frame + 0x20)),pbVar10);
        if (uVar5 == 1) {
          F_0045ccd0(*(undefined * PTR32 *)((int)this + 0x10),((undefined1 *)(gen_frame + 0x84)),(uint)*(*(byte * PTR32 *)(gen_frame + 0x2c)),0);
        }
        F_0042c880(((undefined1 *)(gen_frame + 0x84)));
        iVar9 = -1;
        iVar7 = -1;
        if (uVar4 == 2) {
          iVar7 = (*(int *)(gen_frame + 0x18));
        }
        iVar8 = iVar7;
        if ((uVar5 == 2) && (iVar8 = (*(int *)(gen_frame + 0x20)), -1 < iVar7)) {
          iVar8 = iVar7;
          iVar9 = (*(int *)(gen_frame + 0x20));
        }
        if ((*(char *)((int)puVar3 + 6) != '\0') && (iVar9 < 0)) {
          if (iVar8 < 0) {
            iVar8 = *(int *)((*(byte * PTR32 *)(gen_frame + 0x2c)) + -6);
          }
          else {
            iVar9 = *(int *)((*(byte * PTR32 *)(gen_frame + 0x2c)) + -6);
          }
        }
        puVar6 = (undefined *)
                 F_00460270(*(undefined * PTR32 *)((int)this + 0x10),(*puVar3 & 0xffffff) + (int)puVar3,iVar8,
                              iVar9);
        if (puVar6 == (undefined *)0x0) {
          puVar6 = &REFG(undefined, 0x10be47a);
        }
        iVar9 = (*(int *)(gen_frame + 0x28)) * 2;
        F_00431250(this_00,iVar9,puVar6,0,1,0);
        this_01 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
        if (this_01 == (undefined *)0x0) {
          uVar11 = F_0046ff40();
          uVar4 = (uint)(uVar11 / 1000);
        }
        else {
          uVar4 = F_00975680(this_01);
        }
        uVar4 = F_00462750(*(undefined4 *)((int)this + 0x10),this_00,this,
                             *(undefined4 *)((*(byte * PTR32 *)(gen_frame + 0x2c)) + -10),uVar4,2);
        F_0042cbc0(((undefined1 *)(gen_frame + 0x30)),uVar4);
        uVar14 = 0;
        uVar13 = 1;
        uVar12 = 0;
        uVar4 = F_0042a990(((undefined1 *)(gen_frame + 0x30)));
        F_00431250(this_00,iVar9 + 1,uVar4,uVar12,uVar13,uVar14);
        (*(int *)(gen_frame + 0x28)) = (*(int *)(gen_frame + 0x28)) + 1;
        (*(int *)(gen_frame + 0x24)) = (*(int *)(gen_frame + 0x24)) + 4;
        F_0042c880(((undefined1 *)(gen_frame + 0x30)));
      }
      (*(byte * PTR32 *)(gen_frame + 0x2c)) = (*(byte * PTR32 *)(gen_frame + 0x2c)) + 0x68;
      (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0x1c)) + -1;
    } while ((*(int *)(gen_frame + 0x1c)) != 0);
    if (*((int *)GEN_TOP((*(int *)(uVar2 + 0x20) + 4))) != (*(int *)(gen_frame + 0x28))) {
      *((int *)GEN_TOP((*(int *)(uVar2 + 0x20) + 4))) = (*(int *)(gen_frame + 0x28));
      *(undefined1 *)(uVar2 + 0x1d) = 1;
    }
    this_00 = (undefined *)0x1;
    if ((char)param_1 != '\0') {
      this_00 = (undefined *)0x2;
    }
    if (((undefined *)GEN_TOP(**(int * PTR32 *)(uVar2 + 0x20))) != this_00) {
      **(int * PTR32 *)(uVar2 + 0x20) = (int)this_00;
      *(undefined1 *)(uVar2 + 0x1d) = 1;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
  return (uint)this_00;
}

/* ref: FUN_007e1c20 */
uint F_007e1c20(unsigned int gen_a0)
{
  GEN_ENTER(0x7e1c20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0077d750(this);
  F_00441ba0(2);
  F_007e1250(this);
  uVar1 = F_0077db70(this);
  return uVar1;
}

/* ref: FUN_007e1c50 */
uint F_007e1c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e1c50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  F_0042e430((undefined *)((int)this + 0x1cc),param_1);
  uVar1 = F_0042ccf0((undefined *)((int)this + 0x178),(undefined *)((int)this + 0x1cc));
  *(undefined1 *)((int)this + 0x175) = 1;
  return uVar1;
}

/* ref: FUN_007e1c90 */
uint F_007e1c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e1c90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint in_EAX = 0;
  uint uVar1;
  
  if (param_1 == 0) {
    uVar1 = F_0042ccf0((undefined *)((int)this + 0x178),(int)this + 0x1cc);
    *(undefined2 *)((int)this + 0x174) = 0x100;
    return uVar1;
  }
  *(undefined1 *)((int)this + 0x174) = 0;
  return in_EAX;
}

/* ref: FUN_007e1cd0 */
uint F_007e1cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e1cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  F_0042e430((undefined *)((int)this + 0x278),param_1);
  uVar1 = F_0077da90(this,(undefined *)((int)this + 0x278));
  return uVar1;
}

/* ref: FUN_007e1d00 */
uint F_007e1d00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e1d00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint in_EAX = 0;
  
  if (param_1 == 0) {
    in_EAX = F_0077da90(this,(int)this + 0x278);
  }
  *(undefined1 *)((int)this + 0x220) = 0;
  return in_EAX;
}

/* ref: Client::UI2::Agent::AgentFreeCompany::vf3 */
uint F_007e1d30(unsigned int gen_a0)
{
  GEN_ENTER(0x7e1d30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  this[0x22] = (undefined1)0x0;
  if (*(int *)(this + 0x14) != 0) {
    F_00436de0(*(int *)(this + 0x14),0);
  }
  if (*(undefined * PTR32 *)(this + 0x14) != (undefined *)0x0) {
    F_00441f30(*(undefined * PTR32 *)(this + 0x14));
    F_0044e020(((undefined *)GEN_TOP((*(int *)(this + 0x14) + 0x490))),this + 0xc);
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
  piVar2 = *(int * PTR32 *)(uVar1 + 0x11c);
  if (piVar2 != (int *)0x0) {
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2);
    if ((char)uVar1 != '\0') {
      ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    }
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
  piVar2 = *(int * PTR32 *)(uVar1 + 0x114);
  if (piVar2 != (int *)0x0) {
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2);
    if ((char)uVar1 != '\0') {
      ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    }
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
  piVar2 = *(int * PTR32 *)(uVar1 + 0x24);
  if (((piVar2 != (int *)0x0) && (uVar1 = piVar2[0x82], uVar1 != 0)) &&
     (uVar1 == *(uint *)(this + 8))) {
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
  }
  if (*(int *)(this + 0x54) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)(this + 0x54),0);
    *(undefined4 *)(this + 0x54) = 0;
  }
  if (*(int *)(this + 0x5c) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)(this + 0x5c),0);
    *(undefined4 *)(this + 0x5c) = 0;
  }
  if (*(int *)(this + 0x28) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)(this + 0x28),0);
    *(undefined4 *)(this + 0x28) = 0;
  }
  if (*(int *)(this + 0x5c) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)(this + 0x5c),0);
    *(undefined4 *)(this + 0x5c) = 0;
  }
  if (*(int *)(this + 0x58) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)(this + 0x58),0);
    *(undefined4 *)(this + 0x58) = 0;
  }
  if (*(int *)(this + 0x60) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)(this + 0x60),0);
    *(undefined4 *)(this + 0x60) = 0;
  }
  if (*(int *)(this + 0x68) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)(this + 0x68),0);
    *(undefined4 *)(this + 0x68) = 0;
  }
  if (*(int *)(this + 100) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)(this + 100),0);
    *(undefined4 *)(this + 100) = 0;
  }
  if (*(int *)(this + 0x30) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)(this + 0x30),0);
    *(undefined4 *)(this + 0x30) = 0;
  }
  if (*(int *)(this + 8) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  if (*(int *)(this + 0x1c) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)(this + 0x1c),0);
    *(undefined4 *)(this + 0x1c) = 0;
  }
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentFreeCompany::vf11 */
byte F_007e1f50(unsigned int gen_a0)
{
  GEN_ENTER(0x7e1f50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  
  bVar1 = F_004351d0();
  if (bVar1 == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
    if ((*(int *)(uVar2 + 0x18) == 0) ||
       ((~(byte)((uint)**((undefined4 * PTR32 *)GEN_TOP((*(int *)(uVar2 + 0x18) + 0xe4))) >> 0x1b) & 1) != 0)) {
      uVar3 = 0xb;
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x44))))(*(int * PTR32 *)(this + 4));
      uVar2 = F_00435440(uVar2,uVar3);
      if (uVar2 != 0) {
        bVar1 = F_00436880(uVar2);
        if (bVar1 != 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_007e1fb0 */
uint F_007e1fb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e1fb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d4e2c));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0xffffffff;
  F_0042cc20((undefined *)((int)this + 0x68),"",REFG(undefined4, 0x108cc50));
  F_00c48350((undefined *)((int)this + 0x18),0,0x48);
  return (uint)this;
}

/* ref: FUN_007e2010 */
uint F_007e2010(unsigned int gen_a0)
{
  GEN_ENTER(0x7e2010u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d4e2c));
  uVar3 = F_0042c880((undefined *)((int)this + 0x68));
  uVar2 = (uint)uVar3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyOrganizeSheet::vf3 */
uint F_007e2060(unsigned int gen_a0)
{
  GEN_ENTER(0x7e2060u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x24) + 0xc))))(*(int * PTR32 *)(uVar1 + 0x24));
  if (*(int *)(this + 8) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return uVar1;
}

/* ref: FUN_007e21d0 */
uint F_007e21d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e21d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d4e74));
  in_ecx[3] = 0;
  in_ecx[4] = 0xe0000000;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  F_0042b630(in_ecx + 0x12);
  F_0042b630(in_ecx + 0x27);
  F_0042b630(in_ecx + 0x3c);
  F_0042b630(in_ecx + 0x51);
  return (uint)in_ecx;
}

/* ref: FUN_007e2230 */
uint F_007e2230(unsigned int gen_a0)
{
  GEN_ENTER(0x7e2230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d4e74));
  F_0042c880((undefined *)((int)this + 0x144));
  F_0042c880((undefined *)((int)this + 0xf0));
  F_0042c880((undefined *)((int)this + 0x9c));
  uVar3 = F_0042c880((undefined *)((int)this + 0x48));
  uVar2 = (uint)uVar3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: FUN_007e22a0 */
uint F_007e22a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e22a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[17])REFP(0x10d4ebc));
  in_ecx[3] = 0;
  F_0042b630(in_ecx + 5);
  in_ecx[0x1a] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_007e22e0 */
uint F_007e22e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7e22e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x10d4ebc));
  uVar3 = F_0042c880((undefined *)((int)this + 0x14));
  uVar2 = (uint)uVar3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyInvite::vf3 */
unsigned int F_007e2330(unsigned int gen_a0)
{
  GEN_ENTER(0x7e2330u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  
  if (*(int *)(this + 8) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  iVar1 = *(int *)(this + 0x68);
  if (iVar1 != 0) {
    *(undefined4 *)(this + 0x68) = 0;
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,iVar1,0);
  }
  return 0;
}

/* ref: FUN_007e2390 */
uint F_007e2390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e2390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d4f04));
  *(undefined4 *)((int)this + 0xc) = 0;
  F_0042cc20((undefined *)((int)this + 0x10),"",REFG(undefined4, 0x108cc50));
  return (uint)this;
}

/* ref: FUN_007e23d0 */
uint F_007e23d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7e23d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d4f04));
  uVar3 = F_0042c880((undefined *)((int)this + 0x10));
  uVar2 = (uint)uVar3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: FUN_007e2420 */
uint F_007e2420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e2420u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  *(int *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[2])REFP(0x10b815c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[2])REFP(0x10c43c0));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d4f64));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10d4f54));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[2])REFP(0x10d4f48));
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined2 *)((int)this + 0x1c) = 0;
  puVar1 = (undefined4 *)((int)this + 0x20);
  param_1 = 0x31;
  do {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
    F_0042b630(puVar1 + 1);
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    *(undefined2 *)(puVar1 + 0x19) = 0;
    *(undefined1 *)((int)puVar1 + 0x66) = 0;
    puVar1 = puVar1 + 0x1a;
    param_1 = param_1 + -1;
  } while (-1 < param_1);
  *(undefined4 *)((int)this + 0x1478) = 0;
  *(undefined1 *)((int)this + 0x147c) = 0;
  *(undefined4 *)((int)this + 0x1480) = 0;
  *(undefined4 *)((int)this + 0x1484) = 0;
  *(undefined4 *)((int)this + 0x1488) = 0;
  *(undefined4 *)((int)this + 0x148c) = 0;
  *(undefined4 *)((int)this + 0x1470) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1474) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1498) = 0;
  *(undefined4 *)((int)this + 0x149c) = 0;
  *(undefined4 *)((int)this + 0x1490) = 9999;
  *(undefined2 *)((int)this + 0x1494) = 0;
  *(undefined4 *)((int)this + 0x14a0) = 9999;
  *(undefined4 *)((int)this + 0x14a8) = 0;
  *(undefined4 *)((int)this + 0x14ac) = 0;
  *(undefined2 *)((int)this + 0x14a4) = 0;
  *(undefined4 *)((int)this + 0x14b0) = 9999;
  *(undefined4 *)((int)this + 0x14b8) = 0;
  *(undefined4 *)((int)this + 0x14bc) = 0;
  *(undefined2 *)((int)this + 0x14b4) = 0;
  *(undefined4 *)((int)this + 0x14c0) = 0;
  *(undefined4 *)((int)this + 0x14c4) = 0;
  *(undefined4 *)((int)this + 0x14c8) = 9999;
  *(undefined4 *)((int)this + 0x14d0) = 0;
  *(undefined4 *)((int)this + 0x14d4) = 0;
  *(undefined2 *)((int)this + 0x14cc) = 0;
  *(undefined4 *)((int)this + 0x14d8) = 9999;
  *(undefined2 *)((int)this + 0x14dc) = 0;
  *(undefined4 *)((int)this + 0x14e0) = 0;
  *(undefined4 *)((int)this + 0x14e4) = 0;
  *(undefined2 *)((int)this + 0x14ec) = 0;
  *(undefined4 *)((int)this + 0x14f0) = 0;
  return (uint)this;
}

/* ref: FUN_007e2580 */
uint F_007e2580(unsigned int gen_a0)
{
  GEN_ENTER(0x7e2580u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  ulonglong uVar5;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d4f64));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10d4f54));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[2])REFP(0x10d4f48));
  iVar3 = 0x31;
  puVar4 = (undefined4 *)((int)this + 0x1470);
  do {
    puVar4[-0x1a] = (*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
    uVar5 = F_0042c880(puVar4 + -0x19);
    uVar2 = (uint)uVar5;
    iVar3 = iVar3 + -1;
    puVar4 = puVar4 + -0x1a;
  } while (-1 < iVar3);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[2])REFP(0x10c43c0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[2])REFP(0x10b815c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: FUN_007e2920 */
uint F_007e2920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e2920u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  byte bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  undefined4 * puVar5;
  int * piVar6;
  int iVar7;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  if ((byte)param_1 < 3) {
    *(byte *)((int)this + 0x1c) = (byte)param_1;
  }
  if ((byte)param_2 < 5) {
    *(byte *)((int)this + 0x1d) = (byte)param_2;
  }
  uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if ((char)uVar4 != '\0') {
    uVar4 = F_0077f340(this,0);
    *(bool *)((int)this + 0x14ed) = (char)uVar4 == '\0';
    puVar5 = ((undefined4 *)(gen_frame + 0x0));
    iVar7 = 0xe;
    do {
      *puVar5 = 0;
      puVar5 = puVar5 + 2;
      iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
    F_005a2710(((undefined4 *)(gen_frame + 0x0)),4);
    bVar1 = *(byte *)((int)this + 0x1c);
    ((undefined4 *)(gen_frame + 0x0))[1] = 1;
    F_005a2710(((undefined1 *)(gen_frame + 0x8)),4);
    bVar2 = *(byte *)((int)this + 0x1d);
    (*(uint *)(gen_frame + 0xc)) = (uint)bVar1;
    F_005a2710(((undefined1 *)(gen_frame + 0x10)),4);
    cVar3 = *(char *)((int)this + 0x14ed);
    (*(uint *)(gen_frame + 0x14)) = (uint)bVar2;
    F_005a2710(((undefined1 *)(gen_frame + 0x18)),4);
    (*(uint *)(gen_frame + 0x1c)) = (uint)(cVar3 != '\0');
    piVar6 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar6 + 0x5c))(piVar6,*(undefined4 *)((int)this + 8),0xf,((undefined4 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0x78));
    iVar7 = 0xe;
    do {
      this_00 = this_00 + -2;
      uVar4 = F_005a2670(this_00);
      iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
  }
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return uVar4;
}

/* ref: FUN_007e2a20 */
uint F_007e2a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e2a20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  byte bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  undefined4 * puVar5;
  int * piVar6;
  int iVar7;
  uint * this_00;
  undefined4 uVar8;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if ((char)uVar4 != '\0') {
    puVar5 = ((undefined4 *)(gen_frame + 0x0));
    iVar7 = 0xe;
    do {
      *puVar5 = 0;
      puVar5 = puVar5 + 2;
      iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
    F_005a2710(((undefined4 *)(gen_frame + 0x0)),4);
    bVar1 = *(byte *)((int)this + 0x1c);
    ((undefined4 *)(gen_frame + 0x0))[1] = 0x19;
    F_005a2710(((undefined1 *)(gen_frame + 0x8)),4);
    bVar2 = *(byte *)((int)this + 0x1d);
    (*(uint *)(gen_frame + 0xc)) = (uint)bVar1;
    F_005a2710(((undefined1 *)(gen_frame + 0x10)),4);
    cVar3 = *(char *)((int)this + 0x14ed);
    (*(uint *)(gen_frame + 0x14)) = (uint)bVar2;
    F_005a2710(((undefined1 *)(gen_frame + 0x18)),4);
    (*(uint *)(gen_frame + 0x1c)) = (uint)(cVar3 != '\0');
    if ((char)param_1 == '\0') {
      (*(uint *)(gen_frame + 0x2c)) = F_0077f0b0(this);
    }
    else {
      (*(uint *)(gen_frame + 0x2c)) = 0;
    }
    F_005a2710(((undefined1 *)(gen_frame + 0x28)),4);
    if ((char)param_1 == '\0') {
      (*(uint *)(gen_frame + 0x34)) = F_0077f140(this);
    }
    else {
      (*(uint *)(gen_frame + 0x34)) = 0;
    }
    F_005a2710(((undefined1 *)(gen_frame + 0x30)),4);
    if ((char)param_1 == '\0') {
      (*(uint *)(gen_frame + 0x3c)) = F_0077f190(this);
    }
    else {
      (*(uint *)(gen_frame + 0x3c)) = 0;
    }
    F_005a2710(((undefined1 *)(gen_frame + 0x38)),4);
    if (((char)param_1 == '\0') && (*(char *)((int)this + 0x14ec) != '\0')) {
      uVar8 = 0;
    }
    else {
      uVar8 = 1;
    }
    F_005a2710(((undefined1 *)(gen_frame + 0x40)),4);
    (*(undefined4 *)(gen_frame + 0x44)) = uVar8;
    if ((char)param_1 == '\0') {
      uVar8 = *(undefined4 *)((int)this + 0x14f0);
    }
    else {
      uVar8 = 0;
    }
    F_005a2710(((undefined1 *)(gen_frame + 0x48)),4);
    (*(undefined4 *)(gen_frame + 0x4c)) = uVar8;
    piVar6 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar6 + 0x5c))(piVar6,*(undefined4 *)((int)this + 8),0xf,((undefined4 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0x78));
    iVar7 = 0xe;
    do {
      this_00 = this_00 + -2;
      uVar4 = F_005a2670(this_00);
      iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
  }
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return uVar4;
}

/* ref: FUN_007e2b90 */
uint F_007e2b90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x7e2b90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  int * piVar1;
  uint uVar2;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  piVar1 = *(int * PTR32 *)(uVar2 + 0x24);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
    if (((char)uVar2 != '\0') && (uVar2 = piVar1[0x82], uVar2 == *(uint *)((int)this + 8))) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))
                        (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_007e2bd0 */
unsigned int F_007e2bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e2bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  in_ecx[3] = (*(undefined * PTR32 (*)[2])REFP(0x10c43c0));
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d4fb4));
  in_ecx[3] = (*(undefined * PTR32 (*)[2])REFP(0x10d4fa8));
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[9] = 0;
  return 0;
}

/* ref: FUN_007e2c10 */
unsigned int F_007e2c10(unsigned int gen_a0)
{
  GEN_ENTER(0x7e2c10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10c43c0));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return 0;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyExchange::vf3 */
uint F_007e2c50(unsigned int gen_a0)
{
  GEN_ENTER(0x7e2c50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(this + 0x1c) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 0x1c),0);
    *(undefined4 *)(this + 0x1c) = 0;
  }
  if (*(int *)(this + 0x20) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 0x20),0);
    *(undefined4 *)(this + 0x20) = 0;
  }
  uVar2 = 0;
  if (*(int *)(this + 0x14) != 0) {
    uVar2 = F_0044e020(((undefined *)GEN_TOP((*(int *)(this + 0x14) + 0x490))),this + 0xc);
  }
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return uVar2;
}

/* ref: FUN_007e2ce0 */
uint F_007e2ce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e2ce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (*(int *)((int)this + 0x14) != 0) {
    if ((char)param_1 == '\0') {
      F_00440db0();
    }
    else {
      F_00441b10();
    }
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  if (*(undefined * PTR32 *)(uVar1 + 0x108) != (undefined *)0x0) {
    uVar1 = F_0077db70(*(undefined * PTR32 *)(uVar1 + 0x108));
  }
  return uVar1;
}

/* ref: FUN_007e2d20 */
uint F_007e2d20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e2d20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d4ffc));
  return (uint)in_ecx;
}

/* ref: FUN_007e2d40 */
unsigned int F_007e2d40(unsigned int gen_a0)
{
  GEN_ENTER(0x7e2d40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return 0;
}

/* ref: FUN_007e2d80 */
uint F_007e2d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e2d80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  undefined4 * puVar2;
  
  *(undefined4 *)((int)this + 4) = param_1;
  uVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10c43c0));
  puVar2 = (undefined4 *)((int)this + 0x10);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d504c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10d5040));
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *puVar2 = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  do {
    *(short *)puVar2 = (short)uVar1;
    uVar1 = uVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (uVar1 < 5);
  return (uint)this;
}

/* ref: FUN_007e2df0 */
unsigned int F_007e2df0(unsigned int gen_a0)
{
  GEN_ENTER(0x7e2df0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10c43c0));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return 0;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyCrestEditor::vf3 */
uint F_007e2e30(unsigned int gen_a0)
{
  GEN_ENTER(0x7e2e30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  uVar1 = F_0077f780(this,0,0);
  if (*(int *)(this + 8) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return uVar1;
}

/* ref: FUN_007e2e70 */
uint F_007e2e70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7e2e70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 uVar1;
  undefined4 uVar2;
  
  if ((0 < param_3) && (param_2 != (byte *)0x0)) {
    if ((*param_2 & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_2 + 4);
    }
    switch((unsigned int)(uintptr_t)(uVar2)) {
    case 0: ;
      if ((param_2[8] & 0xf) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(param_2 + 0xc);
      }
      if ((param_2[0x10] & 0xf) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined4 *)(param_2 + 0x14);
      }
      *(undefined4 *)((int)this + 0x38) = uVar2;
      *(undefined4 *)((int)this + 0x3c) = uVar1;
      F_0077f800(this);
      *(undefined1 *)((int)this + 0x5c) = 1;
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 2;
      return (uint)param_1;
    case 2: ;
      if ((param_2[8] & 0xf) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(param_2 + 0xc);
      }
      if ((param_2[0x10] & 0xf) != 0) {
        *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(param_2 + 0x14);
        *(undefined4 *)((int)this + 0x40) = uVar2;
        *(undefined1 *)(param_1 + 1) = 0;
        *param_1 = 2;
        return (uint)param_1;
      }
      *(undefined4 *)((int)this + 0x44) = 0;
      *(undefined4 *)((int)this + 0x40) = uVar2;
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 2;
      return (uint)param_1;
    case 3: ;
      if ((param_2[8] & 0xf) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(param_2 + 0xc);
      }
      if ((param_2[0x10] & 0xf) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined4 *)(param_2 + 0x14);
      }
      *(undefined4 *)((int)this + 0x38) = uVar2;
      *(undefined4 *)((int)this + 0x3c) = uVar1;
      break;
    case 0xfffffffe: ;
    case 0xffffffff: ;
    case 1: ;
      if (*(int *)((int)this + 0x48) != 0) {
        *(undefined4 *)((int)this + 0x44) = *(undefined4 *)((int)this + 0x3c);
        *(undefined4 *)((int)this + 0x40) = *(undefined4 *)((int)this + 0x38);
        F_0077f800(this);
        *(undefined1 *)((int)this + 0x5c) = 1;
        *(undefined1 *)(param_1 + 1) = 0;
        *param_1 = 2;
        return (uint)param_1;
      }
    }
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: FUN_007e2fd0 */
uint F_007e2fd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7e2fd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 uVar1;
  undefined4 uVar2;
  
  if ((0 < param_3) && (param_2 != (byte *)0x0)) {
    if ((*param_2 & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_2 + 4);
    }
    switch((unsigned int)(uintptr_t)(uVar2)) {
    case 0: ;
      if ((param_2[8] & 0xf) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(param_2 + 0xc);
      }
      if ((param_2[0x10] & 0xf) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined4 *)(param_2 + 0x14);
      }
      *(undefined4 *)((int)this + 0x38) = uVar2;
      *(undefined4 *)((int)this + 0x3c) = uVar1;
      F_0077f830(this);
      *(undefined1 *)((int)this + 0x5c) = 1;
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 2;
      return (uint)param_1;
    case 2: ;
      if ((param_2[8] & 0xf) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(param_2 + 0xc);
      }
      if ((param_2[0x10] & 0xf) != 0) {
        *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(param_2 + 0x14);
        *(undefined4 *)((int)this + 0x40) = uVar2;
        *(undefined1 *)(param_1 + 1) = 0;
        *param_1 = 2;
        return (uint)param_1;
      }
      *(undefined4 *)((int)this + 0x44) = 0;
      *(undefined4 *)((int)this + 0x40) = uVar2;
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 2;
      return (uint)param_1;
    case 3: ;
      if ((param_2[8] & 0xf) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(param_2 + 0xc);
      }
      if ((param_2[0x10] & 0xf) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined4 *)(param_2 + 0x14);
      }
      *(undefined4 *)((int)this + 0x38) = uVar2;
      *(undefined4 *)((int)this + 0x3c) = uVar1;
      break;
    case 0xfffffffe: ;
    case 0xffffffff: ;
    case 1: ;
      if (*(int *)((int)this + 0x4c) != 0) {
        *(undefined4 *)((int)this + 0x44) = *(undefined4 *)((int)this + 0x3c);
        *(undefined4 *)((int)this + 0x40) = *(undefined4 *)((int)this + 0x38);
        F_0077f830(this);
        *(undefined1 *)((int)this + 0x5c) = 1;
        *(undefined1 *)(param_1 + 1) = 0;
        *param_1 = 2;
        return (uint)param_1;
      }
    }
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: FUN_007e3130 */
uint F_007e3130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7e3130u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  short sVar1;
  byte bVar2;
  
  if (((0 < param_3) && (param_2 != (byte *)0x0)) && (param_4 != 0)) {
    if (((*param_2 & 0xf) == 0) || (*(int *)(param_2 + 4) == 0)) {
      sVar1 = *(short *)(param_4 + 2);
      if (sVar1 == 0) {
        bVar2 = F_0077fc80(this,*(undefined4 *)((int)this + 0x38),
                             *(undefined4 *)((int)this + 0x3c));
        if (bVar2 == 0) {
          F_0077f780(this,param_2,param_3);
        }
      }
      else {
        if (sVar1 == 1) {
          F_0077f860(this);
          F_0077f780(this,param_2,param_3);
          *(undefined1 *)(param_1 + 1) = 0;
          *param_1 = 2;
          return (uint)param_1;
        }
        if (sVar1 != 2) goto LAB_007e31e4;
        *(undefined4 *)((int)this + 0x38) = *(undefined4 *)((int)this + 0x30);
        *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)((int)this + 0x34);
        *(undefined4 *)((int)this + 0x40) = *(undefined4 *)((int)this + 0x30);
        *(undefined4 *)((int)this + 0x44) = *(undefined4 *)((int)this + 0x34);
        *(undefined2 *)((int)this + 0x5c) = 0x101;
        *(undefined1 *)((int)this + 0x5e) = 1;
      }
    }
    else if (*(int *)((int)this + 0x50) == 0) goto LAB_007e31e4;
    F_0077f860(this);
  }
LAB_007e31e4: ;
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: FUN_007e3200 */
uint F_007e3200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e3200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  byte * pbVar3;
  uint uVar4;
  uint uVar5;
  uint * puVar6;
  uint local_c;
  uint local_8;
  
  uVar5 = 0;
  if (param_1 == 0) {
    return 0;
  }
  local_c = 0;
  if ((*(int *)((int)this + 0x24) != 0) &&
     (bVar1 = F_00436870(*(int *)((int)this + 0x24)), bVar1 != 1)) {
    if (bVar1 == 2) {
      local_8 = 1;
      goto LAB_007e324b;
    }
    if (bVar1 == 3) {
      local_8 = 2;
      goto LAB_007e324b;
    }
  }
  local_8 = 0;
LAB_007e324b: ;
  uVar2 = F_00ab04b0();
  if (uVar2 != 0) {
    puVar6 = (uint *)(param_1 + 0x2c);
    do {
      if (0xff < local_c) break;
      if (((2 < uVar5) || (local_8 == uVar5)) &&
         (pbVar3 = (byte *)F_00ab4250(uVar5), pbVar3 != (byte *)0x0)) {
        bVar1 = *pbVar3;
        F_005a2710(puVar6 + -1,4);
        *puVar6 = (uint)bVar1 << 0x10 | uVar5;
        uVar4 = F_004353e0(uVar5,0);
        F_005a2710(puVar6 + 1,4);
        puVar6[2] = uVar4;
        puVar6 = puVar6 + 4;
        local_c = local_c + 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  F_005a2710((undefined *)(param_1 + 0x1028),4);
  *(uint *)(param_1 + 0x102c) = local_c;
  return local_c;
}

/* ref: FUN_007e32e0 */
unsigned int F_007e32e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7e32e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,0x3c);
  if (uVar4 != 0) {
    uVar5 = **(uint * PTR32 *)(uVar4 + 0x20);
    if (*(char *)((int)this + 0x5c) != '\0') {
      uVar5 = uVar5 | 1;
      *(undefined1 *)((int)this + 0x5c) = 0;
    }
    if (*(char *)((int)this + 0x5d) != '\0') {
      uVar5 = uVar5 | 2;
      *(undefined1 *)((int)this + 0x5d) = 0;
    }
    if (*(char *)((int)this + 0x5e) != '\0') {
      uVar5 = uVar5 | 4;
      *(undefined1 *)((int)this + 0x5e) = 0;
    }
    if (*(char *)((int)this + 0x5f) != '\0') {
      uVar5 = uVar5 | 8;
      *(undefined1 *)((int)this + 0x5f) = 0;
    }
    if (*(undefined * PTR32 *)((int)this + 0x24) != (undefined *)0x0) {
      bVar2 = F_00441290(*(undefined * PTR32 *)((int)this + 0x24),3);
      if (bVar2 == 0) {
        uVar5 = uVar5 & 0xffffffef;
      }
      else {
        uVar5 = uVar5 | 0x10;
      }
    }
    if ((*(int *)((int)this + 0x30) == *(int *)((int)this + 0x38)) &&
       (*(int *)((int)this + 0x34) == *(int *)((int)this + 0x3c))) {
      uVar5 = uVar5 & 0xffffffdf;
    }
    else {
      uVar5 = uVar5 | 0x20;
    }
    if (**(uint * PTR32 *)(uVar4 + 0x20) != uVar5) {
      **(uint * PTR32 *)(uVar4 + 0x20) = uVar5;
      *(undefined1 *)(uVar4 + 0x1d) = 1;
    }
    iVar1 = *(int *)((int)this + 0x34);
    if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 4))) != *(int *)((int)this + 0x30)) {
      *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 4))) = *(int *)((int)this + 0x30);
      *(undefined1 *)(uVar4 + 0x1d) = 1;
    }
    if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 8))) != iVar1) {
      *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 8))) = iVar1;
      *(undefined1 *)(uVar4 + 0x1d) = 1;
    }
    iVar1 = *(int *)((int)this + 0x3c);
    if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0xc))) != *(int *)((int)this + 0x38)) {
      *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0xc))) = *(int *)((int)this + 0x38);
      *(undefined1 *)(uVar4 + 0x1d) = 1;
    }
    if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x10))) != iVar1) {
      *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x10))) = iVar1;
      *(undefined1 *)(uVar4 + 0x1d) = 1;
    }
    iVar1 = *(int *)((int)this + 0x44);
    if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x14))) != *(int *)((int)this + 0x40)) {
      *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x14))) = *(int *)((int)this + 0x40);
      *(undefined1 *)(uVar4 + 0x1d) = 1;
    }
    if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x18))) != iVar1) {
      *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x18))) = iVar1;
      *(undefined1 *)(uVar4 + 0x1d) = 1;
    }
  }
  return 0;
}

/* ref: FUN_007e33f0 */
unsigned int F_007e33f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e33f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte * pbVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  F_00560070(&(*(undefined4 *)(gen_frame + 0x8)));
  uVar9 = F_0046ff40();
  uVar5 = (uint)uVar9 << 0xb ^ (uint)uVar9;
  uVar5 = uVar5 >> 8 ^ uVar5;
  F_0056bb40(&(*(undefined4 *)(gen_frame + 0x8)),(uint)((byte)uVar5 & 0x3f));
  (*(uint *)(gen_frame + 0x10)) = uVar5 >> 0x13 ^ uVar5;
  (*(uint *)(gen_frame + 0x18)) = uVar5 >> 0x13 ^ (*(uint *)(gen_frame + 0x10));
  F_0056bc40(&(*(undefined4 *)(gen_frame + 0x8)),(uint)((byte)(*(uint *)(gen_frame + 0x10)) & 0xf));
  F_0056bc80(&(*(undefined4 *)(gen_frame + 0x8)),(uint)((byte)(*(uint *)(gen_frame + 0x18)) & 0xf));
  (*(uint *)(gen_frame + 0x18)) = (*(uint *)(gen_frame + 0x18)) >> 0x13 ^ (*(uint *)(gen_frame + 0x18));
  F_0056bb80(&(*(undefined4 *)(gen_frame + 0x8)),(uint)((byte)(*(uint *)(gen_frame + 0x18)) & 0x3f));
  (*(uint *)(gen_frame + 0x14)) = F_00ab04b0();
  uVar5 = uVar5 << 0xb ^ uVar5;
  uVar5 = ((*(uint *)(gen_frame + 0x18)) >> 0xb ^ uVar5) >> 8 ^ (*(uint *)(gen_frame + 0x18)) ^ uVar5;
  uVar7 = uVar5 % ((*(uint *)(gen_frame + 0x14)) - 2);
  if ((*(int *)((int)this + 0x24) != 0) &&
     (bVar1 = F_00436870(*(int *)((int)this + 0x24)), bVar1 != 1)) {
    if (bVar1 == 2) {
      uVar2 = 1;
      goto LAB_007e34c9;
    }
    if (bVar1 == 3) {
      uVar2 = 2;
      goto LAB_007e34c9;
    }
  }
  uVar2 = 0;
LAB_007e34c9: ;
  uVar8 = uVar2;
  if (uVar7 != 0) {
    uVar6 = 0;
    uVar3 = 0;
    if ((*(uint *)(gen_frame + 0x14)) != 0) {
      do {
        if (2 < uVar3) {
          uVar6 = uVar6 + 1;
        }
        uVar8 = uVar3;
      } while ((uVar6 != uVar7) && (uVar3 = uVar3 + 1, uVar8 = uVar2, uVar3 < (*(uint *)(gen_frame + 0x14))));
    }
  }
  F_0056bb00(&(*(undefined4 *)(gen_frame + 0x8)),uVar8);
  pbVar4 = (byte *)F_00ab4250(uVar8);
  if (pbVar4 != (byte *)0x0) {
    uVar7 = (*(uint *)(gen_frame + 0x10)) << 0xb ^ (*(uint *)(gen_frame + 0x10));
    F_0056bbc0(&(*(undefined4 *)(gen_frame + 0x8)),((uVar5 >> 0xb ^ uVar7) >> 8 ^ uVar7 ^ uVar5) % (uint)*pbVar4);
  }
  *param_1 = (*(undefined4 *)(gen_frame + 0x8));
  param_1[1] = (*(undefined4 *)(gen_frame + 0xc));
  return 0;
}

/* ref: FUN_007e3550 */
uint F_007e3550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e3550u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  in_ecx[3] = (*(undefined * PTR32 (*)[2])REFP(0x10c43c0));
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d509c));
  in_ecx[3] = (*(undefined * PTR32 (*)[2])REFP(0x10d5090));
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  *(undefined2 *)(in_ecx + 8) = 0;
  in_ecx[9] = 0;
  in_ecx[10] = 0;
  in_ecx[0xb] = 0;
  in_ecx[0xc] = 0;
  puVar1 = in_ecx + 0xd;
  param_2 = 99;
  do {
    *(undefined2 *)(puVar1 + 1) = 0;
    *puVar1 = 9999;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *(undefined1 *)(puVar1 + 5) = 0xff;
    puVar1[6] = 0xffffffff;
    *(undefined1 *)(puVar1 + 7) = 0;
    F_0042b630(puVar1 + 8);
    F_0042b630(puVar1 + 0x1d);
    puVar1 = puVar1 + 0x32;
    param_2 = param_2 + -1;
  } while (-1 < param_2);
  *(undefined1 *)(in_ecx + 0x1395) = 0;
  in_ecx[0x1396] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_007e3600 */
uint F_007e3600(unsigned int gen_a0)
{
  GEN_ENTER(0x7e3600u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  undefined * pvVar4;
  ulonglong uVar5;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d509c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10d5090));
  iVar3 = 99;
  pvVar4 = (undefined *)((int)this + 0x4e74);
  do {
    F_0042c880((undefined *)((int)pvVar4 + -0x74));
    uVar5 = F_0042c880((undefined *)((int)pvVar4 + -200));
    uVar2 = (uint)uVar5;
    iVar3 = iVar3 + -1;
    pvVar4 = (undefined *)((int)pvVar4 + -200);
  } while (-1 < iVar3);
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10c43c0));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: FUN_007e3680 */
byte F_007e3680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e3680u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  
  if ((((*(*(byte * PTR32 *)&gen_args[1]) & 0xf) == 0) || (*((int *)GEN_TOP(((*(byte * PTR32 *)&gen_args[1]) + 4))) == 0)) &&
     (*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) < *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))))) {
    iVar1 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) * 200;
    (*(byte * PTR32 *)&gen_args[1]) = ((byte *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(byte * PTR32 *)&gen_args[1]), 1, 3),*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) == '\0')));
    F_00a37920(*((undefined4 *)GEN_TOP((iVar1 + 0x34 + (int)(*(undefined * PTR32 *)&gen_args[0])))),
                 (uint)*((ushort *)GEN_TOP((iVar1 + 0x38 + (int)(*(undefined * PTR32 *)&gen_args[0])))),(*(byte * PTR32 *)&gen_args[1]));
  }
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = 0;
  return 1;
}

/* ref: FUN_007e36e0 */
byte F_007e36e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e36e0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  char cVar1;
  
  if (((*(*(byte * PTR32 *)&gen_args[1]) & 0xf) == 0) || (*((int *)GEN_TOP(((*(byte * PTR32 *)&gen_args[1]) + 4))) == 0)) {
    (*(byte * PTR32 *)&gen_args[1]) = ((byte *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(byte * PTR32 *)&gen_args[1]), 1, 3),*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) == '\0')));
    cVar1 = *((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x21)));
    if (cVar1 == '\0') {
      F_00a37950((*(byte * PTR32 *)&gen_args[1]));
    }
    else {
      if (cVar1 == '\x01') {
        F_00a37970(6,(*(byte * PTR32 *)&gen_args[1]));
        *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = 0;
        return 1;
      }
      if (cVar1 == '\x02') {
        F_00a37970(5,(*(byte * PTR32 *)&gen_args[1]));
        *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = 0;
        return 1;
      }
    }
  }
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = 0;
  return 1;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyCrestDecal::vf3 */
uint F_007e3770(unsigned int gen_a0)
{
  GEN_ENTER(0x7e3770u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  if (*(int *)(this + 0x14) != 0) {
    F_0044e020(((undefined *)GEN_TOP((*(int *)(this + 0x14) + 0x490))),this + 0xc);
  }
  *(undefined4 *)(this + 0x4e58) = 0;
  uVar1 = F_00780040();
  if (*(int *)(this + 8) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return uVar1;
}

/* ref: FUN_007e37d0 */
unsigned int F_007e37d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e37d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * this_00;
  undefined * this_01;
  uint uVar1;
  
  if (((*(uint *)((int)this + 0x2c) < 100) &&
      (this_01 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),param_1), this_01 != (undefined *)0x0)) &&
     (param_1 = 0, 0 < *(int *)((int)this_01 + 0xc))) {
    do {
      uVar1 = F_00a37da0(this_01,param_1);
      if ((uVar1 != 0) && ((*(char *)(uVar1 + 6) != '\0' || (*(int *)(uVar1 + 8) != 0)))) {
        this_00 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x2c) * 200 + 0x34 + (int)this)));
        *this_00 = 9999;
        *(undefined2 *)(this_00 + 1) = 0;
        this_00[2] = 0;
        this_00[3] = 0;
        this_00[4] = 0;
        *(undefined1 *)(this_00 + 5) = 0xff;
        this_00[6] = 0xffffffff;
        *(undefined1 *)(this_00 + 7) = 0;
        F_00760f10(this_00,uVar1,0);
        *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x2c) * 200 + 0x44 + (int)this))) = param_2;
        *(int *)((int)this + 0x2c) = *(int *)((int)this + 0x2c) + 1;
        if (99 < *(uint *)((int)this + 0x2c)) {
          return 0;
        }
      }
      param_1 = param_1 + 1;
    } while (param_1 < *(int *)((int)this_01 + 0xc));
  }
  return 0;
}

/* ref: FUN_007e3890 */
unsigned int F_007e3890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e3890u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d50e4));
  in_ecx[3] = 0;
  *(undefined4 *)((int)in_ecx + 0x2a) = 0;
  *(undefined1 *)((int)in_ecx + 0x2e) = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  *(undefined2 *)(in_ecx + 10) = 0;
  *(undefined4 *)((int)in_ecx + 0x49) = 0;
  *(undefined1 *)((int)in_ecx + 0x4d) = 0;
  *(undefined4 *)((int)in_ecx + 0x2f) = 0;
  *(undefined4 *)((int)in_ecx + 0x33) = 0;
  *(undefined4 *)((int)in_ecx + 0x37) = 0;
  *(undefined4 *)((int)in_ecx + 0x3b) = 0;
  *(undefined4 *)((int)in_ecx + 0x3f) = 0;
  *(undefined4 *)((int)in_ecx + 0x43) = 0;
  *(undefined2 *)((int)in_ecx + 0x47) = 0;
  in_ecx[0x14] = 0;
  in_ecx[0x15] = 0;
  in_ecx[0x16] = 0;
  in_ecx[0x17] = 0;
  *(undefined1 *)(in_ecx + 0x18) = 0;
  return 0;
}

/* ref: FUN_007e3900 */
unsigned int F_007e3900(unsigned int gen_a0)
{
  GEN_ENTER(0x7e3900u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return 0;
}

/* ref: FUN_007e3940 */
unsigned int F_007e3940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e3940u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (*(int *)((int)this + 0x54) != 0) {
    ((code *)*(gen_code32 *)((int)this + 0x50))
              (*(undefined4 *)((int)this + 0x54),(int)this + 0x58,param_1,param_2);
  }
  return 0;
}

/* ref: FUN_007e3970 */
unsigned int F_007e3970(unsigned int gen_a0)
{
  GEN_ENTER(0x7e3970u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x54) = 0;
  return 0;
}

/* ref: Client::UI2::Agent::AgentCharaMakeBase::vf3 */
uint F_007e3980(unsigned int gen_a0)
{
  GEN_ENTER(0x7e3980u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0069f140(*(undefined * PTR32 *)(this + 0x1fa4));
  F_005ed040();
  ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this);
  uVar1 = *(uint *)(this + 0xf60);
  *(undefined4 *)(uVar1 + 0x54) = 0;
  *((undefined1 *)GEN_TOP((*(int *)(this + 0xf60) + 0x60))) = 1;
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentCharaMakeBase::vf20 */
uint F_007e39c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7e39c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
  piVar2 = *(int * PTR32 *)(uVar1 + 0x2c);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
  }
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x54))(this);
  if (*(int *)(this + 8) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return uVar1;
}

/* ref: FUN_007e3a10 */
byte F_007e3a10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e3a10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint * puVar6;
  undefined * this_00;
  undefined * pvVar7;
  byte * pbVar8;
  int local_18;
  uint local_14;
  int local_10;
  undefined * local_c;
  byte * local_8;
  
  if (((param_2 == 0xffffffff) &&
      ((uint)*(byte *)((int)this + 0x1fb0) == param_1[1] + 1 + (uint)*param_1 * 2)) &&
     (*(byte *)((int)this + 0x1fb1) == param_1[2])) {
    return 0;
  }
  *(byte *)((int)this + 0x1fb0) = *param_1 * '\x02' + param_1[1] + '\x01';
  *(byte *)((int)this + 0x1fb1) = param_1[2];
  *(undefined1 *)((int)this + 0x1fd3) = 0;
  if ((param_2 == 0xffffffff) || (param_2 == 0xfffffffe)) {
    *(undefined2 *)((int)this + 0x1fd4) = 0xffff;
  }
  local_18 = 0;
  uVar5 = F_00ab3630((uint)param_1[2] + ((uint)param_1[1] + (uint)*param_1 * 2) * 2);
  local_c = (undefined *)((int)this + 0x1de4);
  local_8 = param_1 + 0x54;
  local_14 = 0;
  pbVar8 = (byte *)(uVar5 + 0xee);
  this_00 = (undefined *)((int)this + 0x11d4);
  param_1 = (undefined *)((int)this + 0x1ec4);
  do {
    iVar3 = *(int *)(pbVar8 + -0xee);
    pvVar7 = this_00;
    if (0 < iVar3) {
      if ((param_2 == 0xffffffff) || (param_2 == 0xfffffffe)) {
        switch((unsigned int)(uintptr_t)(iVar3)) {
        case 0x6cc: ;
        case 0x6cd: ;
          *(char *)((int)this + 0x1fd4) = (char)local_14;
          break;
        case 0x6ce: ;
        case 0x6cf: ;
          *(char *)((int)this + 0x1fd5) = (char)local_14;
        }
      }
      else if (param_2 == local_14) {
        local_18 = 0xcb;
      }
      pvVar7 = (undefined *)((int)this_00 + 8);
      puVar6 = (uint *)F_00ab36c0(iVar3);
      if (puVar6 == (uint *)0x0) {
        local_10 = 0;
      }
      else {
        local_10 = (*puVar6 & 0xffffff) + (int)puVar6;
      }
      F_005a2710(this_00,6);
      *(int *)((int)this_00 + 4) = local_10;
      bVar1 = pbVar8[-1];
      bVar2 = *pbVar8;
      F_005a2710((undefined *)((int)param_1 + -0xdd0),3);
      *(uint *)((int)param_1 + -0xdcc) = (uint)bVar1 * 0x10000 + (uint)bVar2;
      uVar4 = *(undefined4 *)local_8;
      F_005a2710(param_1,4);
      *(undefined4 *)((int)param_1 + 4) = uVar4;
      *(char *)((int)this + 0x1fd3) = *(char *)((int)this + 0x1fd3) + '\x01';
      uVar4 = *(undefined4 *)(pbVar8 + -0xea);
      F_005a2710(local_c,3);
      *(undefined4 *)((int)local_c + 4) = uVar4;
      param_1 = (undefined *)((int)param_1 + 8);
    }
    local_8 = local_8 + 4;
    local_c = (undefined *)((int)local_c + 8);
    local_14 = local_14 + 1;
    pbVar8 = pbVar8 + 0xf0;
    this_00 = pvVar7;
  } while (local_14 < 0x1c);
  if ((param_2 != 0xffffffff) && (param_2 != 0xfffffffe)) {
    F_005a2710((undefined *)((int)this + 0x10ec),3);
    *(uint *)((int)this + 0x10f0) = ((local_18 + -0xcb) * 0x100 + param_2) * 0x100;
    return 1;
  }
  bVar1 = *(byte *)((int)this + 0x1fd3);
  F_005a2710((undefined *)((int)this + 0x10ec),3);
  *(uint *)((int)this + 0x10f0) = (uint)bVar1;
  return 1;
}

/* ref: FUN_007e3c50 */
uint F_007e3c50(unsigned int gen_a0)
{
  GEN_ENTER(0x7e3c50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  uint uVar2;
  int iVar3;
  
  puVar1 = (uint *)F_00ab36c0(0xf);
  if (puVar1 == (uint *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (*puVar1 & 0xffffff) + (int)puVar1;
  }
  F_005a2710((undefined *)((int)this + 0x1ce4),6);
  *(int *)((int)this + 0x1ce8) = iVar3;
  puVar1 = (uint *)F_00ab36c0(0x10);
  if (puVar1 == (uint *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (*puVar1 & 0xffffff) + (int)puVar1;
  }
  uVar2 = F_005a2710((undefined *)((int)this + 0x1cec),6);
  *(int *)((int)this + 0x1cf0) = iVar3;
  return uVar2;
}

/* ref: FUN_007e3cc0 */
uint F_007e3cc0(unsigned int gen_a0)
{
  GEN_ENTER(0x7e3cc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined * pvVar5;
  int local_c;
  int local_8;
  
  puVar1 = (uint *)F_00ab36c0((-(uint)(*(char *)((int)this + 0x1fa8) != '\x01') & 0x544) + 0x26e);
  if (puVar1 == (uint *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (*puVar1 & 0xffffff) + (int)puVar1;
  }
  F_005a2710((undefined *)((int)this + 0x1d8c),6);
  *(int *)((int)this + 0x1d90) = iVar3;
  iVar3 = 0x7bc;
  pvVar5 = (undefined *)((int)this + 0x1d94);
  local_8 = 3;
  do {
    if ((iVar3 < 0) || (puVar1 = (uint *)F_00ab36c0(iVar3), puVar1 == (uint *)0x0)) {
      iVar4 = 0;
    }
    else {
      iVar4 = (*puVar1 & 0xffffff) + (int)puVar1;
    }
    F_005a2710(pvVar5,6);
    *(int *)((int)pvVar5 + 4) = iVar4;
    iVar3 = iVar3 + 1;
    pvVar5 = (undefined *)((int)pvVar5 + 8);
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  iVar3 = 0x7bc;
  pvVar5 = (undefined *)((int)this + 0x1dac);
  local_8 = 3;
  do {
    if ((iVar3 < 0) || (uVar2 = F_00ab36c0(iVar3), uVar2 == 0)) {
      iVar4 = 0;
    }
    else {
      iVar4 = (*(uint *)(uVar2 + 8) & 0xffffff) + uVar2 + 8;
    }
    F_005a2710(pvVar5,6);
    *(int *)((int)pvVar5 + 4) = iVar4;
    iVar3 = iVar3 + 1;
    pvVar5 = (undefined *)((int)pvVar5 + 8);
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  iVar3 = 0x3e;
  pvVar5 = (undefined *)((int)this + 0x1dd4);
  local_c = 2;
  do {
    if ((iVar3 < 0) || (puVar1 = (uint *)F_00ab36c0(iVar3), puVar1 == (uint *)0x0)) {
      iVar4 = 0;
    }
    else {
      iVar4 = (*puVar1 & 0xffffff) + (int)puVar1;
    }
    uVar2 = F_005a2710(pvVar5,6);
    *(int *)((int)pvVar5 + 4) = iVar4;
    iVar3 = iVar3 + 1;
    pvVar5 = (undefined *)((int)pvVar5 + 8);
    local_c = local_c + -1;
  } while (local_c != 0);
  return uVar2;
}

/* ref: FUN_007e3e10 */
uint F_007e3e10(unsigned int gen_a0)
{
  GEN_ENTER(0x7e3e10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  int iVar2;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  ((uint *)(gen_frame + 0x4))[5] = uVar1;
  if (*(char *)((int)this + 0x1fbc) == '\x02') {
    ((uint *)(gen_frame + 0x4))[0] = 0x2c9;
    ((uint *)(gen_frame + 0x4))[1] = 0x2cb;
    ((uint *)(gen_frame + 0x4))[2] = 0x2de;
    ((uint *)(gen_frame + 0x4))[3] = 0x2d2;
    ((uint *)(gen_frame + 0x4))[4] = 700;
    uVar1 = ((uint *)(gen_frame + 0x4))[*(int *)((int)this + 0x1fc0)];
    if (REFG(undefined4, 0x148a44c) != (undefined *)0x0) {
      F_00aa0560(REFG(undefined4, 0x148a44c),3);
      F_00aa4270(REFG(undefined4, 0x148a44c),uVar1,0,0);
    }
    iVar2 = *(int *)((int)this + 0x1fc0) + 1;
    uVar1 = iVar2 / 5;
    *(int *)((int)this + 0x1fc0) = iVar2 % 5;
    *(undefined4 *)((int)this + 0x1fc8) = 0;
    *(undefined4 *)((int)this + 0x1fcc) = 0;
  }
  F_00c47745(((uint *)(gen_frame + 0x4))[5] ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar1;
}

/* ref: FUN_007e3ed0 */
byte F_007e3ed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7e3ed0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  int iVar1;
  int iVar2;
  byte bVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  
  piVar4 = (int *)F_00ab3630((*(int *)&gen_args[4]) + ((*(int *)&gen_args[3]) + (*(int *)&gen_args[2]) * 2) * 2);
  iVar2 = (*(int *)&gen_args[1]);
  uVar6 = 0;
  do {
    iVar1 = *piVar4;
    if (iVar1 == 0) break;
    uVar5 = (uint)*(byte *)(piVar4 + 0x3b);
    if (((iVar1 == 0xec) || (iVar1 == 0xf5)) && (piVar4[3] != 0)) {
      uVar5 = uVar5 | (piVar4[4] | 0x100U) << 0x10;
    }
    if (iVar1 == 0xcb) {
      uVar5 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),4);
      F_004142d0(&(*(int *)&gen_args[1]),*(undefined4 *)(uVar5 + 0x14));
      switch((unsigned int)(uintptr_t)((*(int *)&gen_args[1]))) {
      default: ;
        uVar5 = 0;
        break;
      case 1: ;
        uVar5 = 3;
        break;
      case 2: ;
        uVar5 = 6;
        break;
      case 3: ;
        uVar5 = 9;
      }
    }
    F_007808b0(uVar6,iVar2,piVar4,uVar5);
    uVar6 = uVar6 + 1;
    piVar4 = piVar4 + 0x3c;
  } while (uVar6 < 0x1c);
  *(undefined1 *)(iVar2 + 0xd) = (undefined1)(*(int *)&gen_args[4]);
  *(char *)(iVar2 + 0xc) = (char)(*(int *)&gen_args[2]) + '\x01';
  bVar3 = (char)(*(int *)&gen_args[2]) * '\x02' + (char)(*(int *)&gen_args[3]) + 1;
  *(byte *)(iVar2 + 0x10) = bVar3;
  return bVar3;
}

/* ref: FUN_007e3fd0 */
uint F_007e3fd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x7e3fd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = F_00ab3630(param_5 + (param_4 + param_3 * 2) * 2);
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    *param_1 = *(undefined4 *)(uVar1 + 0x1af8);
    param_1[1] = *(undefined4 *)(uVar1 + 0x1b00);
    param_1[2] = *(undefined4 *)(uVar1 + 0x1b08);
    param_1[3] = *(undefined4 *)(uVar1 + 0x1b10);
    uVar1 = *(uint *)(uVar1 + 0x1b18);
    param_1[4] = uVar1;
    return uVar1;
  case 1: ;
    puVar2 = (undefined4 *)F_00ab3660(param_6);
    uVar1 = 0;
    if (puVar2 != (undefined4 *)0x0) {
      *param_1 = *puVar2;
      param_1[1] = puVar2[2];
      param_1[2] = puVar2[4];
      param_1[3] = puVar2[6];
      uVar1 = puVar2[8];
      param_1[4] = uVar1;
      return uVar1;
    }
    break;
  case 2: ;
    *param_1 = *(undefined4 *)(uVar1 + 0x1b30);
    param_1[1] = *(undefined4 *)(uVar1 + 0x1b38);
    param_1[2] = *(undefined4 *)(uVar1 + 0x1b40);
    param_1[3] = *(undefined4 *)(uVar1 + 0x1b48);
    uVar1 = *(uint *)(uVar1 + 0x1b50);
    param_1[4] = uVar1;
    return uVar1;
  case 3: ;
    *param_1 = *(undefined4 *)(uVar1 + 0x1b68);
    param_1[1] = *(undefined4 *)(uVar1 + 0x1b70);
    param_1[2] = *(undefined4 *)(uVar1 + 0x1b78);
    param_1[3] = *(undefined4 *)(uVar1 + 0x1b80);
    uVar1 = *(uint *)(uVar1 + 0x1b88);
    param_1[4] = uVar1;
  }
  return uVar1;
}

/* ref: FUN_007e40e0 */
uint F_007e40e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e40e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined1 gen_out[0x4];
  int * piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined4 * local_c;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_out + 0x0);
  local_14 = 0;
  local_c = &REFG(undefined4, 0x13282e0);
  iVar6 = (int)this + 0x34;
  do {
    local_18 = 0;
    local_10 = local_14 * 4;
    do {
      local_1c = 0;
      do {
        F_007e3fd0(iVar6,param_1,local_14,local_18,local_1c,
                     (uint)*((byte *)GEN_TOP((*(int *)((int)this + 0xf5c) + 7))));
        if (((-1 < local_10) && (uVar3 = F_00ae0db0(&REFG(undefined, 0x14c0920),*local_c), uVar3 != 0)) &&
           (piVar1 = *(int * PTR32 *)(uVar3 + 0xec), piVar1 != (int *)0x0)) {
          iVar4 = 0;
          iVar5 = iVar6;
          do {
            ((code *)*(gen_code32 *)(*piVar1 + 0xfc))(piVar1,iVar4,iVar5);
            iVar4 = iVar4 + 1;
            iVar5 = iVar5 + 4;
          } while (iVar4 < 10);
        }
        local_10 = local_10 + 1;
        local_c = local_c + 1;
        local_1c = local_1c + 1;
        iVar6 = iVar6 + 0xc4;
      } while (local_1c < 2);
      local_18 = local_18 + 1;
    } while (local_18 < 2);
    local_14 = local_14 + 1;
  } while ((int)local_c < 0x1328330);
  F_00c47745(uVar2 ^ (uint)(uint)(gen_out + 0x0));
  return (uint)local_c;
}

/* ref: FUN_007e41f0 */
unsigned int F_007e41f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e41f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint local_20;
  uint * local_c;
  int local_8;
  
  uVar10 = F_0046ff40();
  uVar2 = (uint)uVar10;
  local_20 = 0;
  local_c = (uint *)(param_2 + 0x54);
  local_8 = 0;
  uVar5 = 0;
  uVar3 = 0;
  do {
    if (*param_1 == 0) {
      return 0;
    }
    uVar2 = uVar2 << 0xb ^ uVar2;
    uVar6 = uVar5 ^ (uVar5 >> 0xb ^ uVar2) >> 8 ^ uVar2;
    uVar4 = uVar6 % (uint)*(byte *)((int)param_1 + 0xee);
    uVar1 = *param_1;
    uVar8 = uVar6;
    uVar2 = local_20;
    uVar9 = local_20;
    uVar7 = uVar6;
    if (uVar1 < 0xfa) {
      if (uVar1 == 0xf9) {
        uVar3 = uVar3 << 0xb ^ uVar3;
        uVar8 = uVar6 ^ (uVar6 >> 0xb ^ uVar3) >> 8 ^ uVar3;
        uVar9 = uVar5;
        if ((uVar8 & 1) != 0) {
          uVar4 = uVar4 | 0x80;
        }
      }
      else {
        if (uVar1 == 0xec) {
          uVar3 = uVar3 << 0xb ^ uVar3;
          uVar3 = uVar6 ^ (uVar6 >> 0xb ^ uVar3) >> 8 ^ uVar3;
        }
        else {
          if (uVar1 != 0xf5) {
            uVar2 = uVar3;
            uVar7 = uVar5;
            if (uVar1 == 0xf8) {
              uVar3 = uVar3 << 0xb ^ uVar3;
              uVar7 = uVar6 ^ (uVar6 >> 0xb ^ uVar3) >> 8 ^ uVar3;
              if ((uVar7 & 1) == 0) {
                uVar4 = 0;
                uVar8 = uVar7;
                uVar2 = local_20;
                uVar9 = uVar5;
                uVar7 = uVar6;
              }
              else {
                uVar2 = local_20 << 0xb ^ local_20;
                uVar8 = uVar7 ^ (uVar7 >> 0xb ^ uVar2) >> 8 ^ uVar2;
                if ((uVar8 & 1) != 0) {
                  uVar4 = uVar4 + 0x80;
                }
                uVar4 = uVar4 | 0x100;
                uVar2 = uVar5;
                uVar9 = uVar6;
              }
            }
            goto LAB_007e4435;
          }
          uVar3 = uVar3 << 0xb ^ uVar3;
          uVar3 = uVar6 ^ (uVar6 >> 0xb ^ uVar3) >> 8 ^ uVar3;
        }
        uVar8 = uVar3;
        uVar9 = uVar5;
        if ((uVar3 & 1) != 0) {
          uVar2 = local_20 << 0xb ^ local_20;
          uVar8 = uVar3 ^ (uVar3 >> 0xb ^ uVar2) >> 8 ^ uVar2;
          uVar4 = ((uVar8 % 1000) % (uint)*(byte *)((int)param_1 + 0xee) | 0x100) << 0x10 | uVar4;
          uVar2 = uVar5;
          uVar9 = uVar6;
          uVar7 = uVar3;
        }
      }
    }
    else if (uVar1 < 0x6ce) {
      if (uVar1 < 0x6cc) {
        uVar2 = uVar3;
        uVar7 = uVar5;
        if ((uVar1 == 0xfa) &&
           (uVar3 = uVar3 << 0xb ^ uVar3, uVar8 = uVar6 ^ (uVar6 >> 0xb ^ uVar3) >> 8 ^ uVar3,
           uVar2 = local_20, uVar9 = uVar5, uVar7 = uVar6, (uVar8 & 1) != 0)) {
          uVar4 = uVar4 + 0x80;
        }
      }
      else {
        uVar3 = uVar3 << 0xb ^ uVar3;
        uVar8 = uVar6 ^ (uVar6 >> 0xb ^ uVar3) >> 8 ^ uVar3;
        uVar4 = uVar8 & 0x1f;
        uVar9 = uVar5;
      }
    }
    else {
      uVar2 = uVar3;
      uVar7 = uVar5;
      if (uVar1 - 0x6ce < 2) {
        uVar3 = uVar3 << 0xb ^ uVar3;
        uVar8 = uVar6 ^ (uVar6 >> 0xb ^ uVar3) >> 8 ^ uVar3;
        uVar4 = uVar8 & 3;
        uVar2 = local_20;
        uVar9 = uVar5;
        uVar7 = uVar6;
      }
    }
LAB_007e4435: ;
    local_20 = uVar7;
    *local_c = uVar4;
    F_007808b0(local_8,param_2,param_1,uVar4);
    local_c = local_c + 1;
    param_1 = param_1 + 0x3c;
    local_8 = local_8 + 1;
    uVar5 = uVar8;
    uVar3 = uVar9;
    if (0x1b < local_8) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_007e4480 */
byte F_007e4480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7e4480u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  uint uVar1;
  
  uVar1 = F_00ab3630(param_3 + (param_2 + param_1 * 2) * 2);
  return *(byte *)(uVar1 + 0x1a40 + param_4);
}

/* ref: FUN_007e44b0 */
byte F_007e44b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e44b0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  do {
    if (*(char *)((*(int *)&gen_args[0]) + 0x1a40 + iVar1) == (char)(*(undefined4 *)&gen_args[1])) goto LAB_007e450d;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0xc);
  uVar2 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),4);
  F_004142d0(&(*(undefined4 *)&gen_args[1]),*(undefined4 *)(uVar2 + 0x14));
  switch((unsigned int)(uintptr_t)((*(undefined4 *)&gen_args[1]))) {
  default: ;
    iVar1 = 0;
    break;
  case 1: ;
    return 3;
  case 2: ;
    return 6;
  case 3: ;
    return 9;
  }
LAB_007e450d: ;
  return (byte)iVar1;
}

/* ref: Client::UI2::Agent::AgentCharaMakeBase::vf36 */
uint F_007e4530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e4530u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte * pbVar1;
  bool bVar2;
  undefined * pAVar3;
  uint uVar4;
  undefined * pAVar5;
  
  if ((this[0x1fd0] == (undefined1)0x1) && ((char)param_2 != '\0')) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  pAVar3 = (undefined *)(int)(char)this[0x1fd0];
  if ((pAVar3 != param_1) || (bVar2)) {
    this[0x1fd0] = SUB41(param_1,0);
    pAVar5 = *(undefined * PTR32 *)(this + 0xf5c);
    if (REFG(undefined4, 0x148a44c) != (undefined *)0x0) {
      uVar4 = *(byte *)((int)REFG(undefined4, 0x148a44c) + 0x2dbc) - 1 & 0x80000001;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
      }
      pAVar5 = this + ((uint)*(byte *)((int)REFG(undefined4, 0x148a44c) + 0x2db9) +
                      ((uVar4 & 0xff) + (uint)(byte)(*(char *)((int)REFG(undefined4, 0x148a44c) + 0x2db8) - 1) * 2)
                      * 2) * 0xc4 + 0xc;
      if (pAVar5 != (undefined *)0x0) {
        F_007e3fd0(pAVar5 + 0x28,param_1,(uint)(byte)*pAVar5,(uint)(byte)pAVar5[1],
                     (uint)(byte)pAVar5[2],(uint)(byte)pAVar5[7]);
        F_00782ed0(pAVar5 + 0x28,(uint)(byte)*pAVar5,(uint)(byte)pAVar5[1],(uint)(byte)pAVar5[2]);
      }
    }
    pAVar3 = *(undefined * PTR32 *)(this + 0xf5c);
    if (pAVar5 != pAVar3) {
      F_007e3fd0(pAVar3 + 0x28,param_1,(uint)(byte)*pAVar3,(uint)(byte)pAVar3[1],
                   (uint)(byte)pAVar3[2],(uint)(byte)pAVar3[7]);
      pbVar1 = *(byte * PTR32 *)(this + 0xf5c);
      pAVar3 = (undefined *)
               F_00782ed0(pbVar1 + 0x28,(uint)*pbVar1,(uint)pbVar1[1],(uint)pbVar1[2]);
    }
    if (REFG(undefined4, 0x148a44c) != (undefined *)0x0) {
      F_00aa0560(REFG(undefined4, 0x148a44c),3);
      pAVar3 = (undefined *)F_00aa4270(REFG(undefined4, 0x148a44c),0x2ca,0,0);
    }
  }
  return (uint)pAVar3;
}

/* ref: FUN_007e4670 */
uint F_007e4670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e4670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  if (param_1 == 0) {
    *(undefined1 *)((int)this + 0x1fbc) = 0;
    return 0;
  }
  if (param_1 != 2) {
    uVar1 = F_007827a0(param_1);
    return uVar1;
  }
  *(undefined1 *)((int)this + 0x1fbc) = 2;
  uVar1 = F_007e3e10(this);
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentCreate::vf3 */
uint F_007e46b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7e46b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this);
  F_00782660();
  F_0069f140(*(undefined * PTR32 *)(this + 0x1fa4));
  F_005ed040();
  ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this);
  uVar1 = *(uint *)(this + 0xf60);
  *(undefined4 *)(uVar1 + 0x54) = 0;
  *((undefined1 *)GEN_TOP((*(int *)(this + 0xf60) + 0x60))) = 1;
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentCreate::vf32 */
unsigned int F_007e4700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e4700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  byte * pbVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined1 * puVar5;
  int iVar6;
  undefined1 * puVar7;
  
  pbVar2 = *(byte * PTR32 *)(this + 0xf5c);
  bVar1 = pbVar2[10];
  uVar4 = F_00ab3630((uint)pbVar2[2] + ((uint)pbVar2[1] + (uint)*pbVar2 * 2) * 2);
  *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)(uVar4 + 0x1a40 + (uint)bVar1);
  *(char *)(param_1 + 0x1f) = *((char *)GEN_TOP((*(int *)(this + 0xf5c) + 6))) + '\x01';
  *(char *)(param_1 + 0x20) = *((char *)GEN_TOP((*(int *)(this + 0xf5c) + 4))) + '\x01';
  *(char *)(param_1 + 0x21) = *((char *)GEN_TOP((*(int *)(this + 0xf5c) + 5))) + '\x01';
  uVar4 = F_00ab3660((uint)*((byte *)GEN_TOP((*(int *)(this + 0xf5c) + 7))));
  if (uVar4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined1 *)(uVar4 + 0x38);
  }
  *(undefined1 *)(param_1 + 0x22) = uVar3;
  *(undefined1 *)(param_1 + 0x23) = 1;
  puVar7 = ((undefined1 *)GEN_TOP((*(int *)(this + 0xf5c) + 0xc)));
  puVar5 = (undefined1 *)(param_1 + 4);
  iVar6 = 0x1a;
  do {
    *puVar5 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar5 = puVar5 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  return 0;
}

/* ref: Client::UI2::Agent::AgentCreate::vf37 */
uint F_007e47b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e47b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0xf60);
  if (*(int *)(uVar1 + 0x54) != 0) {
    uVar1 = ((code *)*(gen_code32 *)(uVar1 + 0x50))(*(undefined4 *)(uVar1 + 0x54),uVar1 + 0x58,2,param_1);
  }
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentCreate::vf39 */
unsigned int F_007e47e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e47e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int * piVar2;
  
  if (param_2 == 1) {
    F_0042e430(this + 0x1fdc,param_1);
    F_00780850(this,0xffffffff,0xffffffff);
    if (*(int *)(this + 0x2180) != 0) {
      iVar1 = *(int *)(this + 0xf60);
      if (*(int *)(iVar1 + 0x54) != 0) {
        ((code *)*(gen_code32 *)(iVar1 + 0x50))(*(undefined4 *)(iVar1 + 0x54),iVar1 + 0x58,0,0);
      }
      if (*(int *)(this + 8) != 0) {
        F_005a2710(this + 0x1dc4,3);
        *(undefined4 *)(this + 0x1dc8) = 0x115;
        piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
        ((code *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2,*(undefined4 *)(this + 8),0x205,this + 0xf7c);
      }
    }
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentCreate::vf40 */
unsigned int F_007e4880(unsigned int gen_a0)
{
  GEN_ENTER(0x7e4880u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  
  if (*(int *)(this + 0x2180) != 0) {
    iVar1 = *(int *)(this + 0xf60);
    if (*(int *)(iVar1 + 0x54) != 0) {
      ((code *)*(gen_code32 *)(iVar1 + 0x50))(*(undefined4 *)(iVar1 + 0x54),iVar1 + 0x58,0,0);
    }
    if (*(int *)(this + 8) != 0) {
      F_005a2710(this + 0x1dc4,3);
      *(undefined4 *)(this + 0x1dc8) = 0x115;
      piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
      ((code *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2,*(undefined4 *)(this + 8),0x205,this + 0xf7c);
    }
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentCreate::vf43 */
uint F_007e48f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e48f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0xf60);
  if (*(int *)(uVar1 + 0x54) != 0) {
    uVar1 = ((code *)*(gen_code32 *)(uVar1 + 0x50))(*(undefined4 *)(uVar1 + 0x54),uVar1 + 0x58,1,0);
  }
  return uVar1;
}

/* ref: FUN_007e4920 */
uint F_007e4920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e4920u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d512c));
  return (uint)in_ecx;
}

/* ref: FUN_007e4940 */
unsigned int F_007e4940(unsigned int gen_a0)
{
  GEN_ENTER(0x7e4940u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return 0;
}

/* ref: FUN_007e4980 */
uint F_007e4980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x7e4980u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int param_5 = (int)gen_a5;
  code * pcVar1;
  int iVar2;
  undefined * this_00;
  int * this_01;
  int * piVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar6 = 0;
  uVar5 = param_3;
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x50))))(*(int * PTR32 *)((int)this + 4))));
  F_00448810(this_00,uVar5,uVar6);
  this_01 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  if (this_01[0x8b4f] != 0) {
    piVar3 = this_01 + 0x8b3c;
    do {
      iVar2 = *piVar3;
      piVar3 = (int *)((int)piVar3 + 1);
    } while ((char)iVar2 != '\0');
    if (piVar3 == (int *)((int)this_01 + 0x22cf1)) {
      pcVar1 = *(gen_code32 *)(*this_01 + 0x14);
      this_01[0x8b4f] = 0;
      (*pcVar1)(this_01,"LobbyMain",0,0);
    }
    else {
      F_00559190(this_01,"LobbyMain");
      this_01[0x8b4f] = 0;
    }
  }
  *(undefined4 *)((int)this + 0x2ec) = param_1;
  *(undefined4 *)((int)this + 0x28) = param_1;
  *(undefined4 *)((int)this + 0x140) = param_1;
  *(undefined1 *)((int)this + 0x5fd) = (undefined1)param_2;
  *(char *)((int)this + 0x5fc) = (char)param_3;
  F_0042e430((undefined *)((int)this + 0x308),param_4);
  F_0042e430((undefined *)((int)this + 0x3b0),"");
  if (param_5 != 0) {
    uVar4 = F_0042e430((undefined *)((int)this + 0x35c),param_5);
    *(undefined1 *)((int)this + 0x68c) = 2;
    return uVar4;
  }
  uVar4 = F_0042e430((undefined *)((int)this + 0x35c),&REFG(undefined, 0x10c069c));
  *(undefined1 *)((int)this + 0x68c) = 2;
  return uVar4;
}

/* ref: FUN_007e4a80 */
uint F_007e4a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e4a80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  undefined * this_00;
  int * piVar3;
  undefined4 uVar4;
  
  if (*(char *)((int)this + 0x6d1) != '\0') {
    uVar1 = 0;
    piVar3 = (int *)((int)this + 0x11c);
    do {
      if ((1 < uVar1) || (*piVar3 < 10)) {
        iVar2 = uVar1 + 1;
        uVar4 = 0x59;
        this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x28))))(*(int * PTR32 *)((int)this + 4))));
        F_0046a6b0(this_00,uVar4,iVar2);
        break;
      }
      uVar1 = uVar1 + 1;
      piVar3 = piVar3 + 0x46;
    } while ((int)uVar1 < 2);
    *(undefined1 *)((int)this + 0x6d1) = 0;
  }
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 0;
  return (uint)param_1;
}

/* ref: FUN_007e4af0 */
unsigned int F_007e4af0(unsigned int gen_a0)
{
  GEN_ENTER(0x7e4af0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x7c))))(*(int * PTR32 *)((int)this + 4),6,0,0);
  uVar1 = (uint)REFG(undefined1, 0x14ab0d4);
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x30))))(*(int * PTR32 *)((int)this + 4))));
  F_0045c010(pvVar2,uVar1);
  F_00920c00(0,REFG(float, 0x1094884));
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 1;
  uVar6 = 0;
  uVar5 = 0;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  F_0075ec30(pvVar2,uVar5,uVar6,uVar7,uVar8,uVar9);
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  if (*(char *)(uVar1 + 4) != '\0') {
    puVar3 = (undefined4 *)(uVar1 + 0xc);
    iVar4 = 0x65;
    do {
      ((code *)*(gen_code32 *)(*(int *)*puVar3 + 0x34))((int *)*puVar3,0);
      puVar3 = puVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return 0;
}

/* ref: FUN_007e4b80 */
uint F_007e4b80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e4b80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  float fVar1;
  uint in_EAX = 0;
  uint uVar2;
  undefined * this_00;
  int iVar3;
  undefined4 * puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if (*(char *)((int)this + 0x6ce) == '\0') {
    *(undefined1 *)((int)this + 0x6ce) = 1;
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
    if (*(char *)(uVar2 + 4) != '\0') {
      puVar4 = (undefined4 *)(uVar2 + 0xc);
      iVar3 = 0x65;
      do {
        ((code *)*(gen_code32 *)(*(int *)*puVar4 + 0x34))((int *)*puVar4,2);
        puVar4 = puVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
    if (*(char *)(uVar2 + 4) != '\0') {
      puVar4 = (undefined4 *)(uVar2 + 0xc);
      iVar3 = 0x65;
      do {
        ((code *)*(gen_code32 *)(*(int *)*puVar4 + 0x34))((int *)*puVar4,3);
        puVar4 = puVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    fVar1 = REFG(float, 0x1088068);
    *(undefined1 *)((int)this + 0x6cd) = (undefined1)param_1;
    *(undefined2 *)((int)this + 0x6c8) = 0;
    *(undefined1 *)((int)this + 0x6bc) = (undefined1)param_2;
    F_0049b7d0(*(undefined4 *)(REFG(int, 0x137104c) + 0x25f4),1,fVar1,REFG(undefined4, 0x1302e44),REFG(undefined4, 0x1302e48),
                 REFG(undefined4, 0x1302e4c),REFG(undefined4, 0x1302e50));
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 1;
    uVar6 = 0x3c;
    uVar5 = 0;
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    F_0075ec30(this_00,uVar5,uVar6,uVar7,uVar8,uVar9);
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4));
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(uVar2 + 0x23330) + 0x4c))))((int *)(uVar2 + 0x23330),0x3e,0,0);
    in_EAX = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 8))))(*(int * PTR32 *)((int)this + 4),0x1fe,0);
    *(undefined1 *)((int)this + 0x68f) = 0x12;
  }
  return in_EAX;
}

/* ref: FUN_007e4cb0 */
uint F_007e4cb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e4cb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  uint uVar1;
  int * piVar2;
  undefined * this_00;
  undefined4 uVar3;
  
  uVar1 = F_007819f0(param_1);
  if ((uVar1 & 2) == 0) {
    if ((uVar1 & 8) == 0) {
      if ((char)uVar1 < '\0') {
        uVar1 = F_00781590(this,0x41);
        uVar1 = F_0042e430(param_2,uVar1);
        return uVar1;
      }
      if ((uVar1 & 0x100) != 0) {
        uVar1 = F_00781590(this,0x43);
        uVar1 = F_0042e430(param_2,uVar1);
        return uVar1;
      }
      uVar1 = F_0042e430(param_2,"");
      return uVar1;
    }
    uVar3 = 0x1b;
  }
  else {
    uVar3 = 0x40;
  }
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x2e8) + 0x24))))
                            (*(int * PTR32 *)((int)this + 0x2e8),uVar3)));
  if (piVar2 == (int *)0x0) {
    uVar1 = F_0042e430(param_2,&REFG(undefined, 0x10be54a));
    return uVar1;
  }
  uVar3 = 3;
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2)));
  uVar1 = F_00cb0950(this_00,uVar3);
  uVar1 = F_0042e430(param_2,uVar1);
  return uVar1;
}

/* ref: FUN_007e4d60 */
uint F_007e4d60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7e4d60u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  undefined3 uVar7;
  uint uVar6;
  
  ((uint *)(gen_frame + 0x8))[0xc] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  iVar5 = *param_1;
  piVar3 = param_1;
  if ((iVar5 == 0) ||
     ((*(int *)(iVar5 + 0xc) == 0 && (piVar3 = (int *)0x0, *(int *)(iVar5 + 8) == 0)))) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c) ^ (uint)(uint)(gen_frame + 0x3c));
    return (uint)piVar3 & 0xffffff00;
  }
  uVar4 = F_00e3be40(iVar5);
  if ((uVar4 == 0) || (*(char *)(uVar4 + 0x56) == '\0')) {
    F_00c47745(((uint *)(gen_frame + 0x8))[0xc] ^ (uint)(uint)(gen_frame + 0x3c));
    return uVar4 & 0xffffff00;
  }
  iVar5 = 0;
  do {
    param_2[iVar5] = *(byte *)(uVar4 + 0x56 + iVar5);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x1a);
  uVar7 = (undefined3)((uint)((int)(uintptr_t)param_4) >> 8);
  if (((*param_1 != 0) && (uVar6 = F_00e3be40(*param_1), uVar6 != 0)) &&
     (*(int *)(uVar6 + 0xa8) != 0)) {
    *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(uVar4 + 0x80);
    *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(uVar4 + 0x84);
    *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(uVar4 + 0x88);
    *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(uVar4 + 0x8c);
    *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(uVar4 + 0x90);
    *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(uVar4 + 0x94);
    *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(uVar4 + 0x98);
    *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(uVar4 + 0x9c);
    *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(uVar4 + 0xa0);
    *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(uVar4 + 0xa4);
    *param_3 = *(undefined4 *)(uVar4 + 0x70);
    param_3[1] = *(undefined4 *)(uVar4 + 0x74);
    *param_4 = *(undefined4 *)(uVar4 + 0x78);
    param_4[1] = *(undefined4 *)(uVar4 + 0x7c);
    F_00c47745(((uint *)(gen_frame + 0x8))[0xc] ^ (uint)(uint)(gen_frame + 0x3c));
    return CONCAT31(uVar7,1);
  }
  bVar1 = *param_2;
  bVar2 = param_2[1];
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  ((uint *)(gen_frame + 0x8))[0] = 0;
  ((uint *)(gen_frame + 0x8))[1] = 0;
  ((uint *)(gen_frame + 0x8))[2] = 0x10054;
  ((uint *)(gen_frame + 0x8))[3] = 0x10055;
  ((uint *)(gen_frame + 0x8))[4] = 0x10056;
  ((uint *)(gen_frame + 0x8))[5] = 0x10057;
  ((uint *)(gen_frame + 0x8))[6] = 0x1005c;
  ((uint *)(gen_frame + 0x8))[7] = 0x1005d;
  ((uint *)(gen_frame + 0x8))[8] = 0x10058;
  ((uint *)(gen_frame + 0x8))[9] = 0x10059;
  ((uint *)(gen_frame + 0x8))[10] = 0x1005a;
  ((uint *)(gen_frame + 0x8))[0xb] = 0x1005b;
  uVar4 = ((uint *)(gen_frame + 0x8))[(uint)bVar2 + (uint)bVar1 * 2];
  *(uint *)(param_2 + 0x20) = uVar4;
  *(uint *)(param_2 + 0x24) = uVar4;
  *(uint *)(param_2 + 0x28) = uVar4;
  *(uint *)(param_2 + 0x2c) = uVar4;
  param_2[0x30] = 0;
  param_2[0x31] = 0;
  param_2[0x32] = 0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  param_2[0x3c] = 0;
  param_2[0x3d] = 0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  param_2[0x40] = 0;
  param_2[0x41] = 0;
  param_2[0x42] = 0;
  param_2[0x43] = 0;
  *param_3 = 0;
  param_3[1] = 0;
  *param_4 = 0;
  param_4[1] = 0;
  F_00c47745(((uint *)(gen_frame + 0x8))[0xc] ^ (uint)(uint)(gen_frame + 0x3c));
  return CONCAT31(uVar7,1);
}

/* ref: FUN_007e4f40 */
unsigned int F_007e4f40(unsigned int gen_a0)
{
  GEN_ENTER(0x7e4f40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  piVar1 = *(int * PTR32 *)(uVar2 + 0x24);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    return 0;
  }
  return 0;
}

/* ref: FUN_007e4f90 */
unsigned int F_007e4f90(unsigned int gen_a0)
{
  GEN_ENTER(0x7e4f90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * this_00;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int local_8;
  
  if (*(int *)((int)this + 0x6f4) == 0) {
    uVar1 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8));
    uVar5 = 0;
    *(uint *)((int)this + 0x6f8) = uVar1;
    uVar1 = F_00404270();
    this_00 = (undefined4 *)F_00406bd0(0x28,0,uVar1,uVar5);
    if (this_00 == (undefined4 *)0x0) {
      this_00 = (undefined4 *)0x0;
    }
    else {
      F_00cb4700(this_00,0x38,0);
      this_00[5] = 0x38;
      *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10d39d4));
      this_00[6] = this;
      this_00[8] = ((code *)REFP(0x781c90));
      this_00[9] = 0;
    }
    *(undefined4 * PTR32 *)((int)this + 0x6f4) = this_00;
    iVar4 = 0;
    local_8 = 1;
    do {
      uVar1 = F_00ab2200(local_8);
      F_00cb4540(*(undefined * PTR32 *)((int)this + 0x6f4),iVar4,*(undefined4 *)(uVar1 + 8));
      F_00cb4540(*(undefined * PTR32 *)((int)this + 0x6f4),iVar4 + 1,*(undefined4 *)(uVar1 + 0x10));
      F_00cb4540(*(undefined * PTR32 *)((int)this + 0x6f4),iVar4 + 2,*(undefined4 *)(uVar1 + 0x18));
      F_00cb4540(*(undefined * PTR32 *)((int)this + 0x6f4),iVar4 + 3,*(undefined4 *)(uVar1 + 0x20));
      F_00cb4540(*(undefined * PTR32 *)((int)this + 0x6f4),iVar4 + 4,*(undefined4 *)(uVar1 + 0xc));
      F_00cb4540(*(undefined * PTR32 *)((int)this + 0x6f4),iVar4 + 5,*(undefined4 *)(uVar1 + 0x14));
      F_00cb4540(*(undefined * PTR32 *)((int)this + 0x6f4),iVar4 + 6,*(undefined4 *)(uVar1 + 0x1c));
      F_00cb4540(*(undefined * PTR32 *)((int)this + 0x6f4),iVar4 + 7,*(undefined4 *)(uVar1 + 0x24));
      local_8 = local_8 + 1;
      iVar4 = iVar4 + 8;
    } while (local_8 < 6);
    local_8 = 0;
    do {
      uVar1 = F_00ab3660(local_8);
      if (uVar1 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(uVar1 + 0x38);
      }
      uVar2 = F_00ab21a0(uVar5);
      if (uVar1 == 0) {
        uVar5 = 0;
        uVar3 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(uVar2 + 0x14);
        uVar3 = *(undefined4 *)(uVar2 + 0x18);
      }
      F_00cb4540(*(undefined * PTR32 *)((int)this + 0x6f4),iVar4,uVar5);
      F_00cb4540(*(undefined * PTR32 *)((int)this + 0x6f4),iVar4 + 1,uVar3);
      local_8 = local_8 + 1;
      iVar4 = iVar4 + 2;
    } while (local_8 < 8);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x6f8) + 0x48))))
              (*(int * PTR32 *)((int)this + 0x6f8),*(undefined4 *)((int)this + 0x6f4));
  }
  return 0;
}

/* ref: FUN_007e5140 */
byte F_007e5140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e5140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte bVar1;
  int iVar2;
  undefined * pvVar3;
  int * piVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined * PTR32 * ppuVar10;
  undefined4 uVar11;
  
  pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + -0xc) + 0x1c))))(*(int * PTR32 *)((int)this + -0xc))));
  F_0075ef20(pvVar3);
  F_0043f9a0();
  pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + -0xc) + 0x58))))(*(int * PTR32 *)((int)this + -0xc))));
  F_0043a410(pvVar3);
  pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + -0xc) + 0x1c))))(*(int * PTR32 *)((int)this + -0xc))));
  F_007c88b0(pvVar3);
  piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + -0xc) + 0x2c))))(*(int * PTR32 *)((int)this + -0xc))));
  ((code *)*(gen_code32 *)(*piVar4 + 0x1c))(piVar4,0,0);
  piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + -0xc) + 0x30))))(*(int * PTR32 *)((int)this + -0xc))));
  ((code *)*(gen_code32 *)(*piVar4 + 0x1c))(piVar4,0,0);
  piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + -0xc) + 0x38))))(*(int * PTR32 *)((int)this + -0xc))));
  ((code *)*(gen_code32 *)(*piVar4 + 0x1c))(piVar4,0,0);
  piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + -0xc) + 0x28))))(*(int * PTR32 *)((int)this + -0xc))));
  ((code *)*(gen_code32 *)(*piVar4 + 8))(piVar4,0,0);
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + -0xc) + 0x50))))(*(int * PTR32 *)((int)this + -0xc));
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(uVar5 + 0x850) + 0x1c))))(uVar5 + 0x850,0,0);
  piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + -0xc) + 0x34))))(*(int * PTR32 *)((int)this + -0xc))));
  ((code *)*(gen_code32 *)(*piVar4 + 0x1c))(piVar4,0,0);
  *(undefined2 *)((int)this + 0x6b8) = 0;
  uVar5 = F_00424810(REFG(int, 0x137104c));
  if (uVar5 != 0) {
    F_00975110(uVar5,0);
    F_009750f0(uVar5,0);
  }
  ppuVar10 = &REFG(undefined * PTR32, 0x12fd328);
  uVar8 = 0;
  uVar6 = 1;
  pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + -0xc) + 0x20))))(*(int * PTR32 *)((int)this + -0xc))));
  F_004485a0(pvVar3,uVar6,uVar8,ppuVar10);
  pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + -0xc) + 0x44))))(*(int * PTR32 *)((int)this + -0xc))));
  F_0044d9c0(pvVar3);
  if (*(char *)((int)this + 0x6be) == '\0') {
    F_0049b7d0(*(undefined4 *)(REFG(int, 0x137104c) + 0x25f4),1,REFG(float, 0x1088068),REFG(undefined4, 0x1302e44),REFG(undefined4, 0x1302e48),
                 REFG(undefined4, 0x1302e4c),REFG(undefined4, 0x1302e50));
    uVar11 = 0;
    uVar9 = 0;
    uVar7 = 1;
    uVar8 = 0xf;
    uVar6 = 0;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + -0xc) + 0x1c))))(*(int * PTR32 *)((int)this + -0xc))))
    ;
    F_0075ec30(pvVar3,uVar6,uVar8,uVar7,uVar9,uVar11);
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + -0xc) + 0x1c))))(*(int * PTR32 *)((int)this + -0xc));
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(uVar5 + 0x23330) + 0x4c))))((int *)(uVar5 + 0x23330),0x3e,0,1);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + -0xc) + 8))))(*(int * PTR32 *)((int)this + -0xc),0x1fe,0);
    *(undefined1 *)((int)this + 0x6ac) = 0xf;
  }
  if (*(char *)((int)this + 0x67f) == '\x12') {
    *(undefined1 *)((int)this + 0x67f) = 1;
  }
  pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + -0xc) + 0x54))))(*(int * PTR32 *)((int)this + -0xc))));
  F_004495a0(pvVar3);
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + -0xc) + 0x1c))))(*(int * PTR32 *)((int)this + -0xc));
  iVar2 = *(int *)(uVar5 + 0x2319c);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0xc) != 0)) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar2 + 0xc) + 0x40))))(*(int * PTR32 *)(iVar2 + 0xc));
  }
  F_0052f5e0(REFG(undefined4, 0x1375b00),0);
  *(undefined4 *)((int)this + 0x6dc) = *param_1;
  bVar1 = *(byte *)((int)this + 0x67c);
  *(undefined4 *)((int)this + 0x6e0) = param_1[1];
  *(byte *)((int)this + 0x67e) = bVar1;
  *(undefined1 *)((int)this + 0x67c) = 10;
  return bVar1;
}

/* ref: FUN_007e5390 */
uint F_007e5390(unsigned int gen_a0)
{
  GEN_ENTER(0x7e5390u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x180];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x16c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x170);
  if (REFG(int, 0x148a444) != 0) {
    F_00b6b680(REFG(int, 0x148a444),1);
  }
  *(undefined1 *)((int)this + 0x68c) = 0x15;
  F_00990c20(((undefined1 *)(gen_frame + 0x0)));
  REFG(undefined4, 0x148a450) = F_009cfc30("vfx/ui/eff/screen02vfx.avfx",((undefined1 *)(gen_frame + 0x0)),4,0);
  F_00982d70();
  uVar1 = F_0043f8b0(0xf4255);
  F_00c47745((*(uint *)(gen_frame + 0x16c)) ^ (uint)(uint)(gen_frame + 0x170));
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentRetainerCharaMake::vf2 */
uint F_007e5430(unsigned int gen_a0)
{
  GEN_ENTER(0x7e5430u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort uVar1;
  undefined * this_00;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 2;
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
  F_007601d0(this_00,uVar3);
  F_0049b7d0(*(undefined4 *)(REFG(int, 0x137104c) + 0x25f4),1,(float)(float10)0,REFG(undefined4, 0x1302e44),REFG(undefined4, 0x1302e48),
               REFG(undefined4, 0x1302e4c),REFG(undefined4, 0x1302e50));
  *(undefined4 *)(this + 0x2180) = 1;
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4));
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x23184) + 8))))(*(int * PTR32 *)(uVar2 + 0x23184),0x1fe,0);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(uVar2 + 0x23330) + 0x4c))))(uVar2 + 0x23330,0x3e,0,1);
  ((code *)*(gen_code32 *)(*(int *)this + 0x44))(this);
  uVar1 = F_00ab0620();
  uVar2 = F_00ab6ad0((uint)uVar1);
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentRetainerCharaMake::vf3 */
uint F_007e54f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7e54f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00ab6b60();
  F_00a06560(1);
  ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this);
  F_00782660();
  F_0069f140(*(undefined * PTR32 *)(this + 0x1fa4));
  F_005ed040();
  ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this);
  uVar1 = *(uint *)(this + 0xf60);
  *(undefined4 *)(uVar1 + 0x54) = 0;
  *((undefined1 *)GEN_TOP((*(int *)(this + 0xf60) + 0x60))) = 1;
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentRetainerCharaMake::vf36 */
uint F_007e5550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e5550u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  if (param_1 == 0) {
    param_1 = 3;
  }
  uVar1 = F_007e4530((undefined *)this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_007e5570 */
uint F_007e5570(unsigned int gen_a0)
{
  GEN_ENTER(0x7e5570u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * pcVar1;
  int iVar2;
  int * piVar3;
  int * this_00;
  uint uVar4;
  
  F_0049b7d0(*(undefined4 *)(REFG(int, 0x137104c) + 0x25f4),1,(float)(float10)0,REFG(undefined4, 0x1302e44),REFG(undefined4, 0x1302e48),
               REFG(undefined4, 0x1302e4c),REFG(undefined4, 0x1302e50));
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  ((code *)*(gen_code32 *)(*piVar3 + 0xf8))(piVar3,1);
  this_00 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  piVar3 = this_00;
  if (this_00[0x8b4f] != 1) {
    piVar3 = this_00 + 0x8b3c;
    do {
      iVar2 = *piVar3;
      piVar3 = (int *)((int)piVar3 + 1);
    } while ((char)iVar2 != '\0');
    if (piVar3 == (int *)((int)this_00 + 0x22cf1)) {
      pcVar1 = *(gen_code32 *)(*this_00 + 0x14);
      this_00[0x8b4f] = 1;
      uVar4 = (*pcVar1)(this_00,"GameMain",0,0);
      *(undefined4 *)((int)this + 0x2180) = 8;
      return uVar4;
    }
    piVar3 = (int *)F_00559190(this_00,"GameMain");
    this_00[0x8b4f] = 1;
  }
  *(undefined4 *)((int)this + 0x2180) = 8;
  return (uint)piVar3;
}

/* ref: FUN_007e5650 */
uint F_007e5650(unsigned int gen_a0)
{
  GEN_ENTER(0x7e5650u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  F_00920c00(0,(float)(float10)0);
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 1;
  uVar4 = 0;
  uVar3 = 0;
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  F_0075ec30(this_00,uVar3,uVar4,uVar5,uVar6,uVar7);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4));
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x23184) + 8))))(*(int * PTR32 *)(uVar2 + 0x23184),0x32,1);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(uVar2 + 0x23330) + 0x4c))))(uVar2 + 0x23330,0x2e,1,1);
  piVar1 = REFG(undefined4, 0x1379694);
  if (REFG(undefined4, 0x1379694) != (int *)0x0) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1379694) + 0x3c))))(REFG(undefined4, 0x1379694),(int)this + 0x2190);
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,0);
  }
  uVar2 = *(uint *)((int)this + 0xf60);
  if (*(int *)(uVar2 + 0x54) != 0) {
    uVar2 = ((code *)*(gen_code32 *)(uVar2 + 0x50))
                      (*(undefined4 *)(uVar2 + 0x54),uVar2 + 0x58,
                       (uint)(*(char *)((int)this + 0x21a0) != '\0'),0);
  }
  *(undefined4 *)((int)this + 0x2180) = 10;
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentCharaRemake::vf3 */
uint F_007e5710(unsigned int gen_a0)
{
  GEN_ENTER(0x7e5710u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this);
  F_00782660();
  F_0069f140(*(undefined * PTR32 *)(this + 0x1fa4));
  F_005ed040();
  ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this);
  uVar1 = *(uint *)(this + 0xf60);
  *(undefined4 *)(uVar1 + 0x54) = 0;
  *((undefined1 *)GEN_TOP((*(int *)(this + 0xf60) + 0x60))) = 1;
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentCharaRemake::vf24 */
unsigned int F_007e5760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e5760u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  
  if ((char)param_1 == '\0') {
    if (*(int *)(this + 8) != 0) {
      F_005a2710(this + 0x1dc4,3);
      *(undefined4 *)(this + 0x1dc8) = 0x21a;
      piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
      ((code *)*(gen_code32 *)(*piVar1 + 0x5c))(piVar1,*(undefined4 *)(this + 8),0x205,this + 0xf7c);
    }
    if (param_2 < 0) {
      param_2 = *(int *)(this + 0x1fac);
    }
    F_00780850(this,param_2,0xffffffff);
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentCharaRemake::vf43 */
uint F_007e57d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e57d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0xf60);
  if (*(int *)(uVar1 + 0x54) != 0) {
    uVar1 = ((code *)*(gen_code32 *)(uVar1 + 0x50))(*(undefined4 *)(uVar1 + 0x54),uVar1 + 0x58,1,0);
  }
  return uVar1;
}

/* ref: FUN_007e5800 */
unsigned int F_007e5800(unsigned int gen_a0)
{
  GEN_ENTER(0x7e5800u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  REFG(undefined1, 0x132814b) = (byte)param_1;
  if (REFG(int, 0x148a444) != 0) {
    F_00782390();
    uVar1 = (uint)REFG(undefined1, 0x132814b);
    F_00b72120(REFG(int, 0x148a444),(uint)REFG(undefined1, 0x132814b),GEN_TOF(gen_bits2f((&REFG(float, 0x132828c))[uVar1 * 5])),GEN_TOF(gen_bits2f((&REFG(float, 0x1328290))[uVar1 * 5])),GEN_TOF(gen_bits2f((&REFG(float, 0x1328294))[uVar1 * 5])),GEN_TOF(gen_bits2f((&REFG(float, 0x1328298))[uVar1 * 5])));
  }
  return 0;
}

/* ref: FUN_007e5870 */
unsigned int F_007e5870(unsigned int gen_a0)
{
  GEN_ENTER(0x7e5870u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  
  if ((REFG(int, 0x148a444) != 0) && (REFG(undefined1, 0x132814b) != param_1)) {
    REFG(undefined1, 0x132814b) = (byte)param_1;
    F_00782390();
    uVar1 = (uint)REFG(undefined1, 0x132814b);
    F_00b72120(REFG(int, 0x148a444),(uint)REFG(undefined1, 0x132814b),GEN_TOF(gen_bits2f((&REFG(float, 0x132828c))[uVar1 * 5])),GEN_TOF(gen_bits2f((&REFG(float, 0x1328290))[uVar1 * 5])),GEN_TOF(gen_bits2f((&REFG(float, 0x1328294))[uVar1 * 5])),GEN_TOF(gen_bits2f((&REFG(float, 0x1328298))[uVar1 * 5])));
  }
  return 0;
}

/* ref: FUN_007e58e0 */
uint F_007e58e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e58e0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  int iVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int * this;
  
  ((uint *)(gen_frame + 0x24))[0x16] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80);
  bVar2 = param_1[4];
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x20)) + 0)) = *param_1;
  (*(uint *)(gen_frame + 0x20)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x20)), 1, 3),*param_1);
  bVar3 = param_1[1];
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x18)) + 0)) = bVar2;
  (*(undefined4 *)(gen_frame + 0x18)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x18)), 1, 3),bVar2);
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x14)) + 0)) = bVar3;
  (*(undefined4 *)(gen_frame + 0x14)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x14)), 1, 3),bVar3);
  iVar1 = (bVar3 - 2) + (uint)bVar2 * 2;
  ((uint *)(gen_frame + 0x24))[0] = 0;
  ((uint *)(gen_frame + 0x24))[1] = 0;
  ((uint *)(gen_frame + 0x24))[2] = 0x10054;
  ((uint *)(gen_frame + 0x24))[3] = 0x10055;
  ((uint *)(gen_frame + 0x24))[4] = 0x10056;
  ((uint *)(gen_frame + 0x24))[5] = 0x10057;
  ((uint *)(gen_frame + 0x24))[6] = 0x1005c;
  ((uint *)(gen_frame + 0x24))[7] = 0x1005d;
  ((uint *)(gen_frame + 0x24))[8] = 0x10058;
  ((uint *)(gen_frame + 0x24))[9] = 0x10059;
  ((uint *)(gen_frame + 0x24))[10] = 0x1005a;
  ((uint *)(gen_frame + 0x24))[0xb] = 0x1005b;
  (*(uint *)(gen_frame + 0x1c)) = (uint)bVar3;
  if (-1 < (int)(&REFG(undefined4, 0x13282e0))[iVar1]) {
    F_00782b60((*(uint *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x14)));
    uVar4 = 0;
    if (-1 < (int)(&REFG(undefined4, 0x13282e0))[iVar1]) goto LAB_007e5ab1;
  }
  ((uint *)(gen_frame + 0x24))[0xc] = 0;
  ((uint *)(gen_frame + 0x24))[0xd] = 0;
  ((uint *)(gen_frame + 0x24))[0xe] = 0;
  ((uint *)(gen_frame + 0x24))[0xf] = 0;
  ((uint *)(gen_frame + 0x24))[0x10] = 0;
  ((uint *)(gen_frame + 0x24))[0x11] = 0;
  ((uint *)(gen_frame + 0x24))[0x12] = 0;
  ((uint *)(gen_frame + 0x24))[0x13] = 0;
  ((uint *)(gen_frame + 0x24))[0x14] = 0;
  ((uint *)(gen_frame + 0x24))[0x15] = 0;
  if (param_2 != 3) {
    ((uint *)(gen_frame + 0x24))[0xc] = 0;
    if (param_2 == 1) {
      ((uint *)(gen_frame + 0x24))[0xd] = 0x190026;
      ((uint *)(gen_frame + 0x24))[0xe] = 0x4b0026;
      ((uint *)(gen_frame + 0x24))[0xf] = 0x340026;
      ((uint *)(gen_frame + 0x24))[0x10] = 0x6a0026;
    }
    else {
      ((uint *)(gen_frame + 0x24))[0xd] = ((uint *)(gen_frame + 0x24))[(*(uint *)(gen_frame + 0x1c)) + ((*(uint *)(gen_frame + 0x20)) & 0xff) * 2];
      ((uint *)(gen_frame + 0x24))[0xe] = ((uint *)(gen_frame + 0x24))[0xd];
      ((uint *)(gen_frame + 0x24))[0xf] = ((uint *)(gen_frame + 0x24))[0xd];
      ((uint *)(gen_frame + 0x24))[0x10] = ((uint *)(gen_frame + 0x24))[0xd];
    }
  }
  ((uint *)(gen_frame + 0x24))[0xc] = 0;
  uVar4 = F_00ae3f10(&REFG(undefined, 0x14c0920),0xffffffff);
  (&REFG(undefined4, 0x13282e0))[iVar1] = uVar4;
  if (-1 < iVar1) {
    this = (int *)F_00ae0db0(&REFG(undefined, 0x14c0920),uVar4);
    uVar4 = 0;
    if (this != (int *)0x0) {
      F_00aaa640(this,param_1,((uint *)(gen_frame + 0x24)) + 0xc);
      ((code *)*(gen_code32 *)(*this + 0x2c))(this);
      ((code *)*(gen_code32 *)(*this + 0x24))(this,8,0);
      ((code *)*(gen_code32 *)(*this + 0x24))(this,0xb,0);
      ((code *)*(gen_code32 *)(*this + 0x28))(this,6,0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      ((code *)*(gen_code32 *)(*this + 0x3c))(this,&(*(undefined4 *)(gen_frame + 0x0)));
      ((code *)*(gen_code32 *)(*this + 0x48))(this,(undefined4)gen_fl2bits((float)(float10)0));
      uVar4 = F_00a5f500(this);
      if (uVar4 != 0) {
        *(undefined2 *)(uVar4 + 0x72) = 0;
      }
    }
  }
LAB_007e5ab1: ;
  F_00c47745(((uint *)(gen_frame + 0x24))[0x16] ^ (uint)(uint)(gen_frame + 0x80));
  return uVar4;
}

/* ref: Client::UI2::Agent::Lobby3D::LoadMapEvent::vf1 */
uint F_007e5ad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7e5ad0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint param_4 = (uint)gen_a4;
  if ((param_4 & 0x10) != 0) {
    F_005f9ab0((&REFG(undefined * PTR32, 0x132826c))[param_4 & 0xf],0,0,0,0);
    REFG(undefined1, 0x148a113) = 1;
    REFG(undefined2, 0x13282d8) = (undefined2)(param_4 & 0xf);
    REFG(undefined2, 0x13282dc) = 0xffff;
    *param_1 = 2;
    *(undefined1 *)(param_1 + 1) = 1;
    return (uint)param_1;
  }
  F_0049b7d0(*(undefined4 *)(REFG(int, 0x137104c) + 0x25f4),1,(float)(float10)0,REFG(undefined4, 0x1302e44),REFG(undefined4, 0x1302e48),
               REFG(undefined4, 0x1302e4c),REFG(undefined4, 0x1302e50));
  F_005ecf90();
  *(undefined2 *)&REFG(undefined, 0x148a448) = 0;
  REFG(undefined1, 0x148a113) = 0;
  REFG(undefined2, 0x13282d8) = 0xffff;
  F_00b70d10(&REFG(undefined4, 0x1375b90),0);
  REFG(undefined4, 0x148a444) = 0;
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 1;
  return (uint)param_1;
}

/* ref: FUN_007e5bb0 */
uint F_007e5bb0(void)
{
  GEN_ENTER(0x7e5bb0u, 0u, 0u, 0u, 0u);
  char cVar1;
  uint uVar2;
  
  uVar2 = REFG(undefined4, 0x1371290);
  if (REFG(short, 0x13282d8) < 3) {
    if (REFG(int, 0x148a44c) == 0) {
      cVar1 = '\x01';
    }
    else {
      cVar1 = *(char *)(REFG(int, 0x148a44c) + 0x2db8);
    }
    if (cVar1 != '\x02') {
      if (cVar1 == '\x03') {
        *(undefined1 *)(REFG(undefined4, 0x1371290) + 0x23) = 3;
        *(undefined4 *)(uVar2 + 0x24) = 0;
        return uVar2;
      }
      if (cVar1 != '\x05') goto LAB_007e5bdf;
    }
    *(undefined1 *)(REFG(undefined4, 0x1371290) + 0x23) = 1;
    *(undefined4 *)(uVar2 + 0x24) = 0;
    return uVar2;
  }
LAB_007e5bdf: ;
  *(undefined4 *)(REFG(undefined4, 0x1371290) + 0x24) = 0;
  *(undefined1 *)(uVar2 + 0x23) = 2;
  return uVar2;
}

/* ref: FUN_007e5c20 */
uint F_007e5c20(unsigned int gen_a0)
{
  GEN_ENTER(0x7e5c20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  float fVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 extraout_EDX = 0;
  undefined4 extraout_EDX_00 = 0;
  undefined4 extraout_EDX_01 = 0;
  int * piVar6;
  undefined4 uStackY_2c;
  
  *(short *)&REFG(undefined, 0x148a448) = (short)param_1;
  F_005d4f10(0,(int)(short)param_1 / 100,(int)(short)param_1 % 100);
  piVar6 = (int *)(REFG(int, 0x137104c) + 0x1210);
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(REFG(int, 0x137104c) + 0x1210) + 4))))(piVar6,0);
  *(ulonglong *)&uStackY_2c = CONCAT44(extraout_EDX,uVar4);
  uVar2 = *(ulonglong *)&uStackY_2c / 0xe10;
  uVar4 = ((code *)*(gen_code32 *)(*piVar6 + 4))(piVar6,0);
  *(ulonglong *)&uStackY_2c = CONCAT44(extraout_EDX_00,uVar4);
  uVar3 = *(ulonglong *)&uStackY_2c / 0x3c;
  uVar5 = ((code *)*(gen_code32 *)(*piVar6 + 4))(piVar6,0);
  uVar4 = REFG(undefined4, 0x1371290);
  *(ulonglong *)&uStackY_2c = CONCAT44(extraout_EDX_01,uVar5);
  *(undefined1 *)(REFG(undefined4, 0x1371290) + 0x28) = 1;
  fVar1 = ((float)GEN_TOF((((float10)GEN_TOD((((int)(uVar3 % 0x3c) + (int)(uVar2 % 0x18) * 0x3c) * 0x3c))) +
                 (float10)(int)(*(ulonglong *)&uStackY_2c % 0x3c))));
  *(float *)(uVar4 + 0xc) = fVar1;
  *(float *)(uVar4 + 8) = fVar1;
  return uVar4;
}

/* ref: FUN_007e5d20 */
uint F_007e5d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10)
{
  GEN_ENTER(0x7e5d20u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  undefined4 param_11 = (undefined4)gen_a10;
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  
  if (((((&REFG(undefined4, 0x148a470))[param_1 * 4] == param_2) && ((&REFG(undefined4, 0x148a474))[param_1 * 4] == param_3)) &&
      (-1 < (int)(&REFG(undefined4, 0x148a478))[param_1 * 4])) &&
     (uVar2 = F_00ae0db0(&REFG(undefined, 0x14c0920),(&REFG(undefined4, 0x148a478))[param_1 * 4]), uVar2 != 0)) {
    return uVar2;
  }
  iVar3 = 0;
  piVar5 = &REFG(undefined4, 0x148a570);
  while ((*piVar5 != param_2 || (piVar5[1] != param_3))) {
    piVar5 = piVar5 + 4;
    iVar3 = iVar3 + 1;
    if (0x148a58f < (int)piVar5) {
      iVar3 = 0;
      piVar5 = &REFG(undefined4, 0x148a470);
      while ((*piVar5 != param_2 || (piVar5[1] != param_3))) {
        piVar5 = piVar5 + 4;
        iVar3 = iVar3 + 1;
        if (0x148a56f < (int)piVar5) {
          if ((-1 < (int)(&REFG(undefined4, 0x148a478))[param_1 * 4]) &&
             (uVar2 = F_00ae0db0(&REFG(undefined, 0x14c0920),(&REFG(undefined4, 0x148a478))[param_1 * 4]), uVar2 != 0)) {
            F_00782d20(param_1);
          }
          F_00b88e00(param_4,param_4);
          uVar2 = F_00ae3f10(&REFG(undefined, 0x14c0920),0xffffffff);
          (&REFG(undefined4, 0x148a478))[param_1 * 4] = uVar2;
          (&REFG(undefined4, 0x148a470))[param_1 * 4] = param_2;
          (&REFG(undefined4, 0x148a474))[param_1 * 4] = param_3;
          if (-1 < (int)uVar2) {
            uVar4 = F_00ae0db0(&REFG(undefined, 0x14c0920),uVar2);
            uVar2 = 0;
            if (uVar4 != 0) {
              uVar2 = F_00782fe0(uVar4,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                                   param_11);
            }
          }
          return uVar2;
        }
      }
      (&REFG(undefined4, 0x148a470))[param_1 * 4] = param_2;
      (&REFG(undefined4, 0x148a474))[param_1 * 4] = param_3;
      (&REFG(undefined4, 0x148a478))[param_1 * 4] = (&REFG(undefined4, 0x148a478))[iVar3 * 4];
      (&REFG(undefined4, 0x148a470))[iVar3 * 4] = 0;
      (&REFG(undefined4, 0x148a474))[iVar3 * 4] = 0;
      (&REFG(undefined4, 0x148a478))[iVar3 * 4] = 0xffffffff;
      return iVar3 * 0x10;
    }
  }
  uVar1 = (&REFG(undefined4, 0x148a578))[iVar3 * 4];
  (&REFG(undefined4, 0x148a474))[param_1 * 4] = param_3;
  (&REFG(undefined4, 0x148a470))[param_1 * 4] = param_2;
  (&REFG(undefined4, 0x148a478))[param_1 * 4] = uVar1;
  (&REFG(undefined4, 0x148a570))[iVar3 * 4] = 0;
  (&REFG(undefined4, 0x148a574))[iVar3 * 4] = 0;
  (&REFG(undefined4, 0x148a578))[iVar3 * 4] = 0xffffffff;
  return iVar3 * 0x10;
}

/* ref: FUN_007e5eb0 */
byte F_007e5eb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e5eb0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar1 = REFG(undefined4, 0x148a44c);
  if (((int)(&REFG(undefined4, 0x148a478))[param_1 * 4] < 0) ||
     (piVar2 = (int *)F_00ae0db0(&REFG(undefined, 0x14c0920),(&REFG(undefined4, 0x148a478))[param_1 * 4]), piVar2 == (int *)0x0
     )) {
    return 0;
  }
  REFG(undefined4, 0x148a44c) = piVar2;
  if (piVar2 != piVar1) {
    param_1 = 0;
    if (piVar1 != (int *)0x0) {
      param_1 = piVar1[0x2c];
      ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,6,0);
      F_00b5aeb0(REFG(undefined4, 0x14c4e84),(uint)*(ushort *)(piVar1 + 0x22),0);
    }
    if ((char)param_2 == '\0') {
      if ((REFG(undefined4, 0x148a44c) != (int *)0x0) &&
         (((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x148a44c) + 0x24))))(REFG(undefined4, 0x148a44c),6,0), REFG(undefined4, 0x148a44c) != (int *)0x0)) {
        F_00aa0560(REFG(undefined4, 0x148a44c),3);
        F_00aa4270(REFG(undefined4, 0x148a44c),3,0,0);
      }
    }
    else if (REFG(undefined4, 0x148a44c) != (int *)0x0) {
      ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x148a44c) + 0x28))))(REFG(undefined4, 0x148a44c),6,0);
    }
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x148a44c) + 0x48))))(param_1);
    F_007e5bb0();
    F_00782390();
    return 1;
  }
  if ((char)param_2 == '\0') {
    ((code *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2,6,0);
    return 1;
  }
  ((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2,6,0);
  return 1;
}

/* ref: FUN_007e5fc0 */
uint F_007e5fc0(void)
{
  GEN_ENTER(0x7e5fc0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    F_00782d20(iVar2);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x10);
  uVar1 = F_00782e50();
  if (REFG(undefined4, 0x148a44c) != (int *)0x0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x148a44c) + 0x28))))(REFG(undefined4, 0x148a44c),6,0);
  }
  REFG(undefined4, 0x148a44c) = (int *)0x0;
  return uVar1;
}

/* ref: FUN_007e6000 */
uint F_007e6000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x7e6000u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  undefined4 local_8;
  
  iVar4 = REFG(int, 0x148a588);
  piVar2 = &REFG(int, 0x148a570);
  while ((*piVar2 != param_1 || (piVar2[1] != param_2))) {
    piVar2 = piVar2 + 4;
    if (0x148a58f < (int)piVar2) {
      if (-1 < REFG(int, 0x148a588)) {
        piVar2 = (int *)F_00ae0db0(&REFG(undefined, 0x14c0920),REFG(int, 0x148a588));
        if (piVar2 != (int *)0x0) {
          ((code *)*(gen_code32 *)(*piVar2 + 0x30))(piVar2);
        }
        F_00ae0cd0(&REFG(undefined, 0x14c0920),iVar4);
        if (REFG(undefined4, 0x148a44c) == piVar2) {
          REFG(undefined4, 0x148a44c) = (int *)0x0;
        }
      }
      REFG(undefined4, 0x148a580) = REFG(int, 0x148a570);
      REFG(undefined4, 0x148a584) = REFG(int, 0x148a574);
      REFG(int, 0x148a588) = REFG(undefined4, 0x148a578);
      *(undefined4 *)&REFG(undefined, 0x148a58c) = REFG(undefined4, 0x148a57c);
      iVar4 = 0;
      piVar2 = &REFG(undefined4, 0x148a470);
      while ((*piVar2 != param_1 || (piVar2[1] != param_2))) {
        piVar2 = piVar2 + 4;
        iVar4 = iVar4 + 1;
        if (0x148a56f < (int)piVar2) {
          F_00b88e00(param_3,param_3);
          uVar3 = F_00ae3f10(&REFG(undefined, 0x14c0920),0xffffffff);
          REFG(int, 0x148a570) = param_1;
          REFG(int, 0x148a574) = param_2;
          REFG(undefined4, 0x148a57c) = local_8;
          REFG(undefined4, 0x148a578) = uVar3;
          if (-1 < (int)uVar3) {
            uVar3 = F_00ae0db0(&REFG(undefined, 0x14c0920),uVar3);
            uVar3 = F_00782fe0(uVar3,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                                 param_10);
          }
          return uVar3;
        }
      }
      REFG(int, 0x148a574) = (&REFG(undefined4, 0x148a474))[iVar4 * 4];
      puVar1 = &REFG(undefined4, 0x148a470) + iVar4 * 4;
      REFG(int, 0x148a570) = *puVar1;
      REFG(undefined4, 0x148a578) = (&REFG(undefined4, 0x148a478))[iVar4 * 4];
      REFG(undefined4, 0x148a57c) = *(undefined4 *)(iVar4 * 0x10 + 0x148a47c);
      *puVar1 = 0;
      (&REFG(undefined4, 0x148a474))[iVar4 * 4] = 0;
      (&REFG(undefined4, 0x148a478))[iVar4 * 4] = 0xffffffff;
      return (uint)puVar1;
    }
  }
  return (uint)piVar2;
}

/* ref: FUN_007e6180 */
byte F_007e6180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e6180u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int * piVar1;
  char cVar2;
  int * piVar3;
  int iVar4;
  undefined4 uVar5;
  int local_8;
  
  piVar1 = REFG(undefined4, 0x148a44c);
  uVar5 = 0xffffffff;
  iVar4 = 0;
  piVar3 = &REFG(undefined4, 0x148a570);
  do {
    if ((*piVar3 == param_1) && (piVar3[1] == param_2)) {
      uVar5 = (&REFG(undefined4, 0x148a578))[iVar4 * 4];
      break;
    }
    piVar3 = piVar3 + 4;
    iVar4 = iVar4 + 1;
  } while ((int)piVar3 < 0x148a590);
  piVar3 = (int *)F_00ae0db0(&REFG(undefined, 0x14c0920),uVar5);
  if (piVar3 == (int *)0x0) {
    return 0;
  }
  REFG(undefined4, 0x148a44c) = piVar3;
  if (piVar3 == piVar1) {
    ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,6,0);
    return 1;
  }
  local_8 = 0;
  if (piVar1 != (int *)0x0) {
    local_8 = piVar1[0x2c];
    ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,6,0);
    F_00b5aeb0(REFG(undefined4, 0x14c4e84),(uint)*(ushort *)(piVar1 + 0x22),0);
  }
  if ((REFG(undefined4, 0x148a44c) != (int *)0x0) &&
     (((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x148a44c) + 0x24))))(REFG(undefined4, 0x148a44c),6,0), REFG(undefined4, 0x148a44c) != (int *)0x0)) {
    F_00aa0560(REFG(undefined4, 0x148a44c),3);
    F_00aa4270(REFG(undefined4, 0x148a44c),3,0,0);
  }
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x148a44c) + 0x48))))(local_8);
  iVar4 = REFG(int, 0x1371290);
  if (2 < REFG(short, 0x13282d8)) {
LAB_007e62a4: ;
    *(undefined4 *)(REFG(int, 0x1371290) + 0x24) = 0;
    *(undefined1 *)(iVar4 + 0x23) = 2;
    F_00782390();
    return 1;
  }
  if (REFG(undefined4, 0x148a44c) == (int *)0x0) {
    cVar2 = '\x01';
  }
  else {
    cVar2 = (char)REFG(int * PTR32, 0x148a44c)[0xb6e];
  }
  if (cVar2 != '\x02') {
    if (cVar2 == '\x03') {
      *(undefined1 *)(REFG(int, 0x1371290) + 0x23) = 3;
      *(undefined4 *)(iVar4 + 0x24) = 0;
      F_00782390();
      return 1;
    }
    if (cVar2 != '\x05') goto LAB_007e62a4;
  }
  *(undefined1 *)(REFG(int, 0x1371290) + 0x23) = 1;
  *(undefined4 *)(iVar4 + 0x24) = 0;
  F_00782390();
  return 1;
}

/* ref: Client::UI2::Agent::LobbyUIClient::vf6 */
unsigned int F_007e6310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e6310u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 4);
  *(undefined4 *)(this + 0xfc) = 4;
  if (piVar1[0x8e] == 3) {
    *(undefined1 *)(*piVar1 + 0x68c) = 6;
    piVar1[0x8e] = 4;
  }
  return 0;
}

/* ref: Client::UI2::Agent::LobbyUIClient::vf10 */
uint F_007e6340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7e6340u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  uint uVar2;
  
  *(undefined4 *)(this + 0x10) = param_1;
  piVar1 = *(int * PTR32 *)(this + 4);
  *(undefined4 *)(this + 0xfc) = 7;
  if (piVar1[0x8e] == 6) {
    *(undefined1 *)(*piVar1 + 0x68c) = 1;
    piVar1[0x8e] = 7;
  }
  uVar2 = F_00e3bd30(param_3);
  *(uint *)(this + 0x10c) = uVar2;
  return uVar2;
}

/* ref: FUN_007e63c0 */
byte F_007e63c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e63c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  uint * puVar2;
  int local_8;
  
  *(undefined4 *)((int)this + 0x238) = 2;
  puVar2 = (uint *)((int)this + 0x14);
  local_8 = 2;
  do {
    uVar1 = *puVar2;
    if (uVar1 == 0) {
      uVar1 = F_00974770((undefined *)puVar2[-1],0);
      *puVar2 = uVar1;
      if (uVar1 != 0) goto LAB_007e63f8;
    }
    else {
LAB_007e63f8: ;
      uVar1 = F_009747b0((undefined *)puVar2[-1],param_1,param_2,puVar2 + -3,uVar1);
      puVar2[0x3c] = 3 - ((uVar1 & 0xff) != 0);
    }
    puVar2 = puVar2 + 0x46;
    local_8 = local_8 + -1;
    if (local_8 == 0) {
      F_00783760(this);
      return 1;
    }
  } while( true );
}

/* ref: FUN_007e6440 */
byte F_007e6440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7e6440u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  int * piVar2;
  int local_8;
  
  *(undefined4 *)((int)this + 0x238) = 5;
  piVar2 = (int *)((int)this + 0x14);
  local_8 = 2;
  do {
    if ((*piVar2 != 0) && (piVar2[0x3c] == 4)) {
      uVar1 = F_009747f0((undefined *)piVar2[-1],param_1,param_2,param_3,piVar2 + -3,*piVar2,0);
      piVar2[0x3c] = 6 - (uint)((uVar1 & 0xff) != 0);
    }
    piVar2 = piVar2 + 0x46;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  F_00783760(this);
  return 1;
}

/* ref: FUN_007e64c0 */
byte F_007e64c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e64c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  
  iVar1 = param_1 * 0x118;
  if (*(int *)(iVar1 + 0x14 + (int)this) == 0) {
    return 0;
  }
  iVar1 = *(int *)((int)this + iVar1 + 0xa8) - *(int *)((int)this + iVar1 + 0xa4);
  return ((char)(iVar1 / 0x18) + (char)(iVar1 >> 0x1f)) -
         (char)((longlong)iVar1 * 0x2aaaaaab >> 0x3f);
}

/* ref: FUN_007e6500 */
uint F_007e6500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e6500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  undefined * this_00;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar6 = 0;
  uVar5 = 0;
  uVar4 = 1;
  uVar3 = 0x18;
  uVar2 = 0;
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x1c))))(*(int * PTR32 *)this)));
  F_0075ec30(this_00,uVar2,uVar3,uVar4,uVar5,uVar6);
  piVar1 = *(int * PTR32 *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0xc) = 1;
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x78))(piVar1,500);
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(uint *)((int)this + 8) = param_1;
  return param_1;
}

/* ref: FUN_007e6560 */
uint F_007e6560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e6560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d5174));
  *(undefined4 *)((int)this + 0xc) = 0;
  F_00a1af40((undefined *)((int)this + 0x10));
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0xffffffff;
  *(undefined1 *)((int)this + 0x34) = 1;
  return (uint)this;
}

/* ref: FUN_007e65a0 */
uint F_007e65a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7e65a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  piVar1 = *(int * PTR32 *)(uVar2 + 0x24);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
    if (((char)uVar2 != '\0') && (piVar1[0x82] == *(int *)((int)this + 8))) {
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    }
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x15c) + 0xc))))(*(int * PTR32 *)(uVar2 + 0x15c));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x158) + 0xc))))(*(int * PTR32 *)(uVar2 + 0x158));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x154) + 0xc))))(*(int * PTR32 *)(uVar2 + 0x154));
  return uVar2;
}

/* ref: FUN_007e6620 */
uint F_007e6620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e6620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x10d51bc));
  *(undefined4 *)((int)this + 0xc) = 0;
  F_0042b630((int)this + 0x10);
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined2 *)((int)this + 0x6c) = 0;
  F_0042e430((undefined *)((int)this + 0x10),&REFG(undefined, 0x10be5b6));
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentSupportSubList::vf1 */
uint F_007e6670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7e6670u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  
  if (((byte)*param_2 & 0xf) != 3) {
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 2;
    return (uint)param_1;
  }
  uVar2 = 0;
  switch((unsigned int)(uintptr_t)(param_2[1])) {
  case 0: ;
    if ((*(byte *)(param_2 + 2) & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = param_2[3];
    }
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x158) + 0x40))))(*(int * PTR32 *)(uVar1 + 0x158),5,uVar3);
    ((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this);
    *(undefined1 *)(param_1 + 1) = 0;
    this[0x6c] = (undefined1)0x1;
    *param_1 = 2;
    return (uint)param_1;
  case 1: ;
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x15c) + 0x4c))))(*(int * PTR32 *)(uVar1 + 0x15c),4,1);
  case 0xfffffffe: ;
  case 0xffffffff: ;
    uVar2 = 1;
    *(undefined4 *)(this + 8) = 0;
  default: ;
    *(undefined1 *)(param_1 + 1) = uVar2;
    *param_1 = 2;
    return (uint)param_1;
  }
}

/* ref: FUN_007e6740 */
unsigned int F_007e6740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e6740u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[17])REFP(0x10d5204));
  in_ecx[3] = 0;
  in_ecx[6] = 0;
  *(undefined1 *)(in_ecx + 7) = 0;
  in_ecx[8] = 0xffffffff;
  return 0;
}

/* ref: FUN_007e6800 */
uint F_007e6800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e6800u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[20])REFP(0x10d524c));
  in_ecx[3] = 0;
  in_ecx[6] = 0xffffffff;
  in_ecx[0xb] = 0;
  F_0042b630(in_ecx + 0xd);
  F_0042b630(in_ecx + 0x27);
  F_0042b630(in_ecx + 0x3c);
  F_0042b630(in_ecx + 0x51);
  return (uint)in_ecx;
}

/* ref: Client::UI2::Agent::AgentSupportSubEdit::vf3 */
unsigned int F_007e6860(unsigned int gen_a0)
{
  GEN_ENTER(0x7e6860u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  int * piVar3;
  
  if (((*(uint *)(this + 0x18) < 4) && (*(int *)(this + 0xc) != 0)) &&
     (iVar2 = *((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))), iVar2 != 0)) {
    puVar1 = (uint *)(iVar2 + 0x184);
    *puVar1 = *puVar1 & 0xffffffcf;
  }
  *(undefined4 *)(this + 0x18) = 0xffffffff;
  if (*(int *)(this + 8) != 0) {
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return 0;
}

/* ref: FUN_007e68b0 */
uint F_007e68b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7e68b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  
  if (((*(uint *)((int)this + 0x18) < 4) && (*(int *)((int)this + 0xc) != 0)) &&
     (iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc))), iVar2 != 0)) {
    puVar1 = (uint *)(iVar2 + 0x184);
    *puVar1 = *puVar1 & 0xffffffcf;
  }
  *(undefined4 *)((int)this + 0x18) = 0xffffffff;
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x158) + 0xc))))(*(int * PTR32 *)(uVar3 + 0x158));
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x154) + 0xc))))(*(int * PTR32 *)(uVar3 + 0x154));
  if (*(int *)((int)this + 8) != 0) {
    piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x54))(piVar4,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  return uVar3;
}

/* ref: FUN_007e6930 */
uint F_007e6930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e6930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined * pvVar4;
  int iVar5;
  int iVar6;
  undefined4 * this_00;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  F_0042b630(((undefined1 *)(gen_frame + 0x54)));
  F_0042b630(((undefined1 *)(gen_frame + 0x0)));
  if ((*(int *)((int)this + 0xc) != 0) &&
     (iVar5 = *((int *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc))), iVar5 != 0)) {
    piVar1 = (int *)F_0043c6b0(iVar5);
    if (*(uint *)((int)this + 0x24) < (uint)((piVar1[1] - *piVar1) / 0x68)) {
      iVar6 = *(uint *)((int)this + 0x24) * 0x68;
      uVar2 = F_0042a990(iVar6 + *piVar1);
      F_0042e430(((undefined1 *)(gen_frame + 0x54)),uVar2);
      iVar5 = *piVar1;
      if (*(uint *)((int)this + 0x28) <
          (uint)((*(int *)(iVar5 + 0x5c + iVar6) - *(int *)(iVar5 + 0x58 + iVar6)) / 0x58)) {
        uVar2 = F_0042a990(*(uint *)((int)this + 0x28) * 0x58 + *(int *)(iVar5 + 0x58 + iVar6));
        F_0042e430(((undefined1 *)(gen_frame + 0x0)),uVar2);
      }
    }
  }
  uVar9 = 0;
  uVar2 = F_00404270();
  puVar3 = (undefined4 *)F_00406c00(0x7c,0,uVar2,uVar9);
  if (puVar3 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    this_00 = puVar3 + 1;
    *puVar3 = 0xf;
    iVar5 = 0xe;
    puVar3 = this_00;
    do {
      *puVar3 = 0;
      puVar3 = puVar3 + 2;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  uVar9 = *(undefined4 *)((int)this + 0x10);
  F_005a2710(this_00,3);
  this_00[1] = uVar9;
  uVar10 = 0;
  uVar8 = 0;
  uVar9 = 0x11b4;
  pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043bd00(pvVar4,uVar9,uVar8,uVar10);
  F_005a2710(this_00 + 2,6);
  this_00[3] = uVar2;
  uVar10 = 0;
  uVar8 = 0;
  uVar9 = 0x11b5;
  pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043bd00(pvVar4,uVar9,uVar8,uVar10);
  F_005a2710(this_00 + 4,6);
  this_00[5] = uVar2;
  uVar10 = 0;
  uVar8 = 0;
  uVar9 = 0x11b6;
  pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043bd00(pvVar4,uVar9,uVar8,uVar10);
  F_005a2710(this_00 + 6,6);
  this_00[7] = uVar2;
  F_005a2710(this_00 + 8,6);
  this_00[9] = "";
  uVar10 = 0;
  uVar8 = 0;
  uVar9 = 0x11b7;
  pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043bd00(pvVar4,uVar9,uVar8,uVar10);
  F_005a2710(this_00 + 10,6);
  this_00[0xb] = uVar2;
  uVar2 = F_0042a990(param_1 + 8);
  F_005a2710(this_00 + 0xc,6);
  uVar10 = 0;
  this_00[0xd] = uVar2;
  uVar8 = 0;
  uVar9 = 0x11b8;
  pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043bd00(pvVar4,uVar9,uVar8,uVar10);
  F_005a2710(this_00 + 0xe,6);
  this_00[0xf] = uVar2;
  uVar10 = 0;
  uVar8 = 0;
  uVar9 = 0x11d3;
  pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043bd00(pvVar4,uVar9,uVar8,uVar10);
  F_005a2710(this_00 + 0x10,6);
  this_00[0x11] = uVar2;
  F_005a2710(this_00 + 0x12,3);
  this_00[0x13] = 1;
  F_005a2710(this_00 + 0x14,3);
  this_00[0x15] = 0;
  uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x54)));
  F_005a2710(this_00 + 0x16,6);
  this_00[0x17] = uVar2;
  F_005a2710(this_00 + 0x18,3);
  this_00[0x19] = 1;
  F_005a2710(this_00 + 0x1a,3);
  this_00[0x1b] = 0;
  uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x0)));
  F_005a2710(this_00 + 0x1c,6);
  this_00[0x1d] = uVar2;
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  ((code *)*(gen_code32 *)(*piVar1 + 0x5c))(piVar1,*(undefined4 *)((int)this + 8),0xf,this_00);
  iVar5 = this_00[-1];
  puVar3 = this_00 + iVar5 * 2;
  while (iVar5 = iVar5 + -1, -1 < iVar5) {
    puVar3 = puVar3 + -2;
    F_005a2670(puVar3);
  }
  F_00406b30(this_00 + -1);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)));
  uVar7 = F_0042c880(((undefined1 *)(gen_frame + 0x54)));
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
  return (uint)uVar7;
}

/* ref: FUN_007e6ca0 */
uint F_007e6ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e6ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  undefined * pvVar5;
  uint uVar6;
  int * piVar7;
  int * this_00;
  ulonglong uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint local_14;
  uint local_10;
  int local_c;
  
  uVar6 = 0;
  local_10 = 0;
  if ((*(int *)((int)this + 0xc) != 0) &&
     (iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc))), iVar1 != 0)) {
    piVar2 = (int *)F_0043c6b0(iVar1);
    iVar1 = *piVar2;
    uVar6 = (piVar2[1] - iVar1) / 0x68 & 0xffff;
    if (*(uint *)((int)this + 0x24) < uVar6) {
      iVar3 = *(uint *)((int)this + 0x24) * 0x68;
      local_10 = (*(int *)(iVar3 + 0x5c + iVar1) - *(int *)(iVar3 + 0x58 + iVar1)) / 0x58 & 0xffff;
    }
  }
  iVar1 = local_10 + 0xd + uVar6;
  uVar10 = 0;
  uVar4 = F_00404270();
  piVar2 = (int *)F_00406c00(-(uint)(0xfffffffb < (uint)(iVar1 * 8)) | iVar1 * 8 + 4U,0,uVar4,
                               uVar10);
  if (piVar2 == (int *)0x0) {
    this_00 = (int *)0x0;
  }
  else {
    this_00 = piVar2 + 1;
    *piVar2 = iVar1;
    piVar2 = this_00;
    iVar3 = iVar1;
    while (iVar3 = iVar3 + -1, -1 < iVar3) {
      *piVar2 = 0;
      piVar2 = piVar2 + 2;
    }
  }
  if (((*(int *)((int)this + 0xc) != 0) &&
      (iVar3 = *((int *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc))), iVar3 != 0)) &&
     (piVar2 = (int *)F_0043c6b0(iVar3), (short)uVar6 != 0)) {
    if (uVar6 != 0) {
      local_c = 0;
      piVar7 = this_00 + 0x16;
      local_14 = uVar6;
      do {
        uVar4 = F_0042a990(*piVar2 + local_c);
        F_005a2710(piVar7,6);
        local_c = local_c + 0x68;
        piVar7[1] = uVar4;
        piVar7 = piVar7 + 2;
        local_14 = local_14 - 1;
      } while (local_14 != 0);
    }
    if (local_10 != 0) {
      local_c = 0;
      piVar7 = this_00 + uVar6 * 2 + 0x1a;
      local_14 = local_10;
      do {
        uVar4 = F_0042a990(*((int *)GEN_TOP((*(int *)((int)this + 0x24) * 0x68 + 0x58 + *piVar2))) + local_c)
        ;
        F_005a2710(piVar7,6);
        local_c = local_c + 0x58;
        piVar7[1] = uVar4;
        piVar7 = piVar7 + 2;
        local_14 = local_14 - 1;
      } while (local_14 != 0);
    }
  }
  iVar3 = *(int *)((int)this + 0x10);
  F_005a2710(this_00,3);
  this_00[1] = iVar3;
  uVar11 = 0;
  uVar9 = 0;
  uVar10 = 0x11b4;
  pvVar5 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = F_0043bd00(pvVar5,uVar10,uVar9,uVar11);
  F_005a2710(this_00 + 2,6);
  this_00[3] = uVar4;
  uVar11 = 0;
  uVar9 = 0;
  uVar10 = 0x11b5;
  pvVar5 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = F_0043bd00(pvVar5,uVar10,uVar9,uVar11);
  F_005a2710(this_00 + 4,6);
  this_00[5] = uVar4;
  uVar11 = 0;
  uVar9 = 0;
  uVar10 = 0x11b6;
  pvVar5 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = F_0043bd00(pvVar5,uVar10,uVar9,uVar11);
  F_005a2710(this_00 + 6,6);
  this_00[7] = uVar4;
  F_005a2710(this_00 + 8,6);
  this_00[9] = (int)"";
  uVar11 = 0;
  uVar9 = 0;
  uVar10 = 0x11b7;
  pvVar5 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = F_0043bd00(pvVar5,uVar10,uVar9,uVar11);
  F_005a2710(this_00 + 10,6);
  this_00[0xb] = uVar4;
  uVar4 = F_0042a990(param_1 + 8);
  F_005a2710(this_00 + 0xc,6);
  uVar11 = 0;
  this_00[0xd] = uVar4;
  uVar9 = 0;
  uVar10 = 0x11b8;
  pvVar5 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = F_0043bd00(pvVar5,uVar10,uVar9,uVar11);
  F_005a2710(this_00 + 0xe,6);
  this_00[0xf] = uVar4;
  uVar11 = 0;
  uVar9 = 0;
  uVar10 = 0x11d3;
  pvVar5 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = F_0043bd00(pvVar5,uVar10,uVar9,uVar11);
  F_005a2710(this_00 + 0x10,6);
  this_00[0x11] = uVar4;
  F_005a2710(this_00 + 0x12,3);
  this_00[0x13] = uVar6;
  iVar3 = *(int *)((int)this + 0x24);
  F_005a2710(this_00 + 0x14,3);
  this_00[0x15] = iVar3;
  F_005a2710(this_00 + uVar6 * 2 + 0x16,3);
  (this_00 + uVar6 * 2 + 0x16)[1] = local_10;
  iVar3 = *(int *)((int)this + 0x28);
  F_005a2710(this_00 + uVar6 * 2 + 0x18,3);
  (this_00 + uVar6 * 2 + 0x18)[1] = iVar3;
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  ((code *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2,*(undefined4 *)((int)this + 8),iVar1,this_00);
  iVar1 = this_00[-1];
  piVar2 = this_00 + iVar1 * 2;
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    piVar2 = piVar2 + -2;
    F_005a2670(piVar2);
  }
  uVar8 = F_00406b30(this_00 + -1);
  return (uint)uVar8;
}

/* ref: FUN_007e7020 */
uint F_007e7020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e7020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_007e6ca0(this,param_1);
  return uVar1;
}

/* ref: FUN_007e7030 */
byte F_007e7030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7e7030u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  int in_ecx;
  uint uVar1;
  int * piVar2;
  
  if ((*(int *)((int)this + 0xc) != 0) &&
     (in_ecx = *((int *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc))), in_ecx != 0)) {
    piVar2 = (int *)F_0043c6b0(in_ecx);
    if (param_1 < (uint)((piVar2[1] - *piVar2) / 0x68)) {
      uVar1 = *(uint *)(param_1 * 0x68 + 0x54 + *piVar2);
      *param_3 = uVar1;
      if (0xffff < uVar1) {
        *param_3 = param_1;
      }
      piVar2 = (int *)(*piVar2 + 0x58 + param_1 * 0x68);
      if (param_2 < (uint)((piVar2[1] - *piVar2) / 0x58)) {
        *param_4 = *(undefined4 *)(param_2 * 0x58 + 0x54 + *piVar2);
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_007e70d0 */
byte F_007e70d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7e70d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  uint * param_4 = (uint *)(uintptr_t)gen_a4;
  int iVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  int iVar6;
  uint uVar7;
  uint local_8;
  
  if ((*(int *)((int)this + 0xc) != 0) &&
     (iVar3 = *((int *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc))), iVar3 != 0)) {
    piVar2 = (int *)F_0043c6b0(iVar3);
    iVar3 = *piVar2;
    iVar6 = piVar2[1] - iVar3 >> 0x1f;
    local_8 = 0;
    if ((piVar2[1] - iVar3) / 0x68 + iVar6 != iVar6) {
      iVar6 = 0;
      do {
        if (*(int *)(iVar6 + 0x54 + iVar3) == param_1) {
          *param_3 = local_8;
          iVar3 = *piVar2;
          iVar4 = *(int *)(iVar6 + 0x5c + iVar3) - *(int *)(iVar6 + 0x58 + iVar3);
          iVar1 = iVar4 >> 0x1f;
          uVar7 = 0;
          if (iVar4 / 0x58 + iVar1 != iVar1) {
            piVar5 = ((int *)GEN_TOP((*(int *)(iVar6 + 0x58 + iVar3) + 0x54)));
            do {
              if (*piVar5 == param_2) {
                *param_4 = uVar7;
                return 1;
              }
              uVar7 = uVar7 + 1;
              piVar5 = piVar5 + 0x16;
            } while (uVar7 < (uint)((*(int *)(iVar6 + 0x5c + iVar3) - *(int *)(iVar6 + 0x58 + iVar3)
                                    ) / 0x58));
          }
        }
        local_8 = local_8 + 1;
        iVar6 = iVar6 + 0x68;
      } while (local_8 < (uint)((piVar2[1] - iVar3) / 0x68));
    }
  }
  return 0;
}

/* ref: FUN_007e71d0 */
byte F_007e71d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e71d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  
  if ((((byte)*param_1 & 0xf) == 3) && (param_1[1] == 0)) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0x2c),0);
    *(undefined4 *)((int)this + 0x2c) = 0;
    F_007e68b0(this);
    return 1;
  }
  return 0;
}

/* ref: FUN_007e7220 */
uint F_007e7220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e7220u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d52a4));
  in_ecx[3] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_007e7240 */
unsigned int F_007e7240(unsigned int gen_a0)
{
  GEN_ENTER(0x7e7240u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return 0;
}

/* ref: FUN_007e7280 */
uint F_007e7280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e7280u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d52ec));
  return (uint)in_ecx;
}

/* ref: FUN_007e72a0 */
unsigned int F_007e72a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7e72a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return 0;
}

/* ref: Client::UI2::Agent::AgentCreditCast::vf1 */
uint F_007e72e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7e72e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  undefined * this_00;
  undefined1 uVar2;
  
  uVar2 = 0;
  if ((*param_2 & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_2 + 4);
  }
  if ((-3 < iVar1) && (iVar1 < 0)) {
    *(undefined4 *)(this + 8) = 0;
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    F_007cbc20(this_00);
    uVar2 = 1;
  }
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = uVar2;
  return (uint)param_1;
}

/* ref: FUN_007e7330 */
uint F_007e7330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e7330u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d5334));
  return (uint)in_ecx;
}

/* ref: FUN_007e7350 */
unsigned int F_007e7350(unsigned int gen_a0)
{
  GEN_ENTER(0x7e7350u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return 0;
}

/* ref: Client::UI2::Agent::AgentCreditEnd::vf1 */
uint F_007e7390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7e7390u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  undefined * this_00;
  undefined1 uVar2;
  
  uVar2 = 0;
  if ((*param_2 & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_2 + 4);
  }
  if ((-3 < iVar1) && (iVar1 < 0)) {
    *(undefined4 *)(this + 8) = 0;
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    F_007cbc20(this_00);
    uVar2 = 1;
  }
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = uVar2;
  return (uint)param_1;
}

/* ref: FUN_007e73e0 */
uint F_007e73e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e73e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d537c));
  return (uint)in_ecx;
}

/* ref: FUN_007e7400 */
unsigned int F_007e7400(unsigned int gen_a0)
{
  GEN_ENTER(0x7e7400u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return 0;
}

/* ref: FUN_007e7440 */
unsigned int F_007e7440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e7440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10c4650));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined2 *)((int)this + 0x2c) = 0;
  *(undefined2 *)((int)this + 0x2e) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined2 *)((int)this + 0x34) = 0;
  return 0;
}

/* ref: FUN_007e7490 */
uint F_007e7490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e7490u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint in_ecx;
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  if ((((*(uint *)&gen_args[1]) == 0) || (in_ecx = F_00559c20((*(uint *)&gen_args[1])), in_ecx == 0)) ||
     (uVar1 = F_005613a0(in_ecx), uVar1 != 2)) {
    in_ecx = 0;
  }
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = in_ecx;
  uVar1 = 0;
  if (in_ecx != 0) {
    F_0055a000(*(undefined * PTR32 *)(in_ecx + 0x70),&(*(uint *)&gen_args[1]),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
    uVar1 = (*(uint *)&gen_args[1]) & 0xffff;
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_007e74f0 */
uint F_007e74f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7e74f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint in_EAX = 0;
  undefined * pvVar1;
  uint uVar2;
  undefined4 in_ecx;
  float10 fVar3;
  
  if (param_1 != 0) {
    pvVar1 = (undefined *)F_00559c20(param_1);
    in_EAX = 0;
    if ((pvVar1 != (undefined *)0x0) && (in_EAX = F_005613a0(pvVar1), in_EAX == 9)) goto LAB_007e7521;
  }
  pvVar1 = (undefined *)0x0;
LAB_007e7521: ;
  *(undefined * PTR32 *)((int)this + 0x18) = pvVar1;
  if (pvVar1 != (undefined *)0x0) {
    uVar2 = F_0056d250(pvVar1,0,0);
    in_EAX = 0;
    if (uVar2 != 0) {
      if (*(int *)((int)this + 0x18) == 0) {
        in_ecx = 0;
      }
      else {
        in_ecx = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x70)));
      }
      fVar3 = F_00559d80(in_ecx);
      *(short *)((int)this + 0x2c) = (short)(int)fVar3;
      if (*(int *)((int)this + 0x18) == 0) {
        pvVar1 = (undefined *)0x0;
      }
      else {
        pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x70)));
      }
      F_00568380(pvVar1,0x21,0,this,0,0);
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
      (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)REFP(0x7844e0));
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (param_3 != 0) {
        ((int *)(gen_frame + 0x14))[3] = param_3;
        ((int *)(gen_frame + 0x14))[0] = param_2;
        *(undefined4 *)((int)this + 0x20) = 1;
        ((int *)(gen_frame + 0x14))[1] = 0;
        ((int *)(gen_frame + 0x14))[2] = 0;
        uVar2 = F_00574320(*(undefined * PTR32 *)((int)this + 0x18),&(*(undefined * PTR32 *)(gen_frame + 0x4)),((int *)(gen_frame + 0x14)),2,0);
        return uVar2;
      }
      *(undefined4 *)((int)this + 0x20) = 0;
      ((int *)(gen_frame + 0x14))[3] = param_2;
      uVar2 = F_00574320(*(undefined * PTR32 *)((int)this + 0x18),&(*(undefined * PTR32 *)(gen_frame + 0x4)),((int *)(gen_frame + 0x14)) + 3,1,0);
      return uVar2;
    }
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  return in_EAX;
}

/* ref: FUN_007e7600 */
uint F_007e7600(unsigned int gen_a0)
{
  GEN_ENTER(0x7e7600u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00586850(*(undefined * PTR32 *)((int)this + 4),3,0,this);
  uVar1 = 0;
  if (*(int *)((int)this + 0x18) != 0) {
    uVar1 = F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x70))),0x21,0,this,0);
  }
  return uVar1;
}

/* ref: FUN_007e7970 */
uint F_007e7970(unsigned int gen_a0)
{
  GEN_ENTER(0x7e7970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0x18) != 0) {
    uVar1 = F_0055a350(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x70))));
    if ((char)uVar1 == '\0') {
      uVar1 = F_00562110(*(undefined * PTR32 *)((int)this + 0x18),1);
    }
  }
  return uVar1;
}

/* ref: FUN_007e79a0 */
unsigned int F_007e79a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e79a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint in_ecx_00;
  uint uVar1;
  
  *(int *)(in_ecx + 0xc) = param_2;
  if (((param_2 == 0) || (in_ecx_00 = F_00559c20(param_2), in_ecx_00 == 0)) ||
     (uVar1 = F_005613a0(in_ecx_00), uVar1 != 0xd)) {
    in_ecx_00 = 0;
  }
  *(uint *)(in_ecx + 0x10) = in_ecx_00;
  if (in_ecx_00 != 0) {
    *(undefined2 *)(in_ecx_00 + 0xc2) = 4;
  }
  return 0;
}

/* ref: FUN_007e79f0 */
uint F_007e79f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e79f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  undefined * pvVar2;
  
  *(undefined4 *)((int)this + 4) = param_1;
  F_00568380(*(undefined * PTR32 *)((int)this + 8),0xc,0,param_1,0,0);
  if (*(int *)((int)this + 0x10) == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x70)));
  }
  F_00568380(pvVar2,0x19,1,param_1,0,0);
  pvVar2 = (undefined *)0x0;
  if (*(int *)((int)this + 0x10) != 0) {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x70)));
  }
  F_00568380(pvVar2,3,2,param_1,0,0);
  pvVar2 = (undefined *)0x0;
  if (*(int *)((int)this + 0x10) != 0) {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x70)));
  }
  F_00568380(pvVar2,4,3,param_1,0,0);
  F_00568380(*(undefined * PTR32 *)((int)this + 8),8,0x100,param_1,0,0);
  F_00568380(*(undefined * PTR32 *)((int)this + 8),3,0x101,param_1,0,0);
  F_00568380(*(undefined * PTR32 *)((int)this + 8),4,0x102,param_1,0,0);
  *(undefined4 *)((int)this + 0x54) = 1;
  F_00784800(this);
  *(undefined4 *)((int)this + 0x50) = 0;
  F_00589f20(*(undefined * PTR32 *)((int)this + 0x10),0);
  F_00574c80(*(undefined4 *)((int)this + 0x10),0,0,1);
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x10) + 0x28))))(*(int * PTR32 *)((int)this + 0x10),0);
  pvVar2 = (undefined *)0x0;
  if (*(int *)((int)this + 0x10) != 0) {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x70)));
  }
  F_0055a300(pvVar2,0);
  uVar1 = F_0056c440((undefined *)((int)this + 0x78),0x3a,0x200,param_1,0);
  return uVar1;
}

/* ref: FUN_007e7b00 */
uint F_007e7b00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e7b00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined1 *)((int)this + 0x24) = (undefined1)param_1;
  F_00784800(this);
  uVar1 = F_00784950(this,*(undefined4 *)((int)this + 0x2c),0,1,0);
  return uVar1;
}

/* ref: FUN_007e7b30 */
uint F_007e7b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e7b30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  short sVar2;
  int * piVar3;
  longlong lVar4;
  int iVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  undefined * pvVar10;
  undefined4 uVar11;
  
  piVar3 = *(int * PTR32 *)((int)this + 0x10);
  if ((uint)*(ushort *)((int)this + 0x3e) < *(uint *)((int)this + 0x48)) {
    ((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,1);
    pvVar10 = *(undefined * PTR32 *)((int)this + 0x10);
    if (*(char *)((int)this + 0xbf) == '\0') {
      if (pvVar10 != (undefined *)0x0) {
        pvVar10 = *(undefined * PTR32 *)((int)pvVar10 + 0x70);
      }
      uVar11 = 1;
    }
    else if (pvVar10 == (undefined *)0x0) {
      uVar11 = 0;
    }
    else {
      pvVar10 = *(undefined * PTR32 *)((int)pvVar10 + 0x70);
      uVar11 = 0;
    }
    F_0055a300(pvVar10,uVar11);
    iVar9 = *(int *)((int)this + 0x48);
    iVar5 = (iVar9 - (uint)*(ushort *)((int)this + 0x3e)) * 4;
    *(int *)((int)this + 0x6c) = iVar5;
    uVar8 = F_00589f20(*(undefined * PTR32 *)((int)this + 0x10),iVar5);
    if (*(char *)((int)this + 0xbe) != '\0') {
      return uVar8;
    }
    if (*(char *)((int)this + 0xa1) != '\0') {
LAB_007e7c89: ;
      *(undefined4 *)((int)this + 0x50) = *(undefined4 *)((int)this + 0x6c);
      goto LAB_007e7cfb;
    }
    if (*(char *)((int)this + 0xa0) != '\0') {
LAB_007e7c9a: ;
      *(undefined4 *)((int)this + 0x50) = 0;
      goto LAB_007e7cfb;
    }
    if ((char)param_1 != '\0') goto LAB_007e7cfb;
    sVar2 = *((short *)GEN_TOP((*(int *)((int)this + 8) + 0x10e)));
    bVar1 = *(byte *)((int)this + 0x58);
    uVar6 = F_0055a030(*(int *)((int)this + 8));
    iVar9 = (uint)bVar1 * iVar9 - (uint)uVar6;
    lVar4 = (ulonglong)(*(int *)((int)this + 0x30) * (uint)bVar1 - (int)sVar2) *
            (longlong)*(int *)((int)this + 0x6c);
  }
  else {
    if (*(ushort *)((int)this + 0x4c) <= *(ushort *)((int)this + 0x3e)) {
      *(undefined4 *)((int)this + 0x50) = 0;
      *(undefined4 *)((int)this + 0x6c) = 1;
      F_00574c80(piVar3,0,1,1);
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x10) + 0x28))))(*(int * PTR32 *)((int)this + 0x10),0);
      if (*(int *)((int)this + 0x10) != 0) {
        uVar8 = F_0055a300(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x70))),0);
        return uVar8;
      }
      uVar8 = F_0055a300((undefined *)0x0,0);
      return uVar8;
    }
    ((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,1);
    pvVar10 = *(undefined * PTR32 *)((int)this + 0x10);
    if (*(char *)((int)this + 0xbf) == '\0') {
      if (pvVar10 != (undefined *)0x0) {
        pvVar10 = *(undefined * PTR32 *)((int)pvVar10 + 0x70);
      }
      uVar11 = 1;
    }
    else if (pvVar10 == (undefined *)0x0) {
      uVar11 = 0;
    }
    else {
      pvVar10 = *(undefined * PTR32 *)((int)pvVar10 + 0x70);
      uVar11 = 0;
    }
    F_0055a300(pvVar10,uVar11);
    uVar6 = *(ushort *)((int)this + 0x4c);
    iVar9 = ((uint)uVar6 - (uint)*(ushort *)((int)this + 0x3e)) * 4;
    *(int *)((int)this + 0x6c) = iVar9;
    uVar8 = F_00589f20(*(undefined * PTR32 *)((int)this + 0x10),iVar9);
    if (*(char *)((int)this + 0xbe) != '\0') {
      return uVar8;
    }
    if (*(char *)((int)this + 0xa1) != '\0') goto LAB_007e7c89;
    if (*(char *)((int)this + 0xa0) != '\0') goto LAB_007e7c9a;
    sVar2 = *((short *)GEN_TOP((*(int *)((int)this + 8) + 0x10e)));
    bVar1 = *(byte *)((int)this + 0x58);
    uVar7 = F_0055a030(*(int *)((int)this + 8));
    iVar9 = (uint)bVar1 * (uint)uVar6 - (uint)uVar7;
    lVar4 = (ulonglong)(*(int *)((int)this + 0x30) * (uint)bVar1 - (int)sVar2) *
            (longlong)*(int *)((int)this + 0x6c);
  }
  *(int *)((int)this + 0x50) = (int)(lVar4 / (longlong)iVar9);
LAB_007e7cfb: ;
  uVar8 = F_00574c80(*(undefined4 *)((int)this + 0x10),*(uint *)((int)this + 0x50),1,1);
  return uVar8;
}

/* ref: FUN_007e7d70 */
uint F_007e7d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e7d70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  undefined * this_00;
  ushort uVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ushort uVar12;
  float10 fVar13;
  undefined4 uVar14;
  
  uVar14 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x18) + 8)));
  uVar7 = F_0055ab00(*(undefined4 *)((int)this + 8));
  uVar8 = F_00557890(uVar14,uVar7);
  uVar7 = 0;
  if (uVar8 != 0) {
    F_00577d20(*(undefined * PTR32 *)((int)this + 8),((undefined1 *)(gen_frame + 0x10)),((ushort *)(gen_frame + 0x14)),0,0,REFG(undefined4, 0x108cc50),0);
    ((ushort *)(gen_frame + 0x14))[0] = ((ushort *)(gen_frame + 0x14))[0] - *(byte *)((int)this + 0x58);
    uVar5 = F_0055a030(*(undefined4 *)((int)this + 8));
    sVar6 = uVar5 - ((ushort *)(gen_frame + 0x14))[0];
    uVar14 = 0;
    if (*(int *)((int)this + 0x10) != 0) {
      uVar14 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x70)));
    }
    uVar7 = F_0055a350(uVar14);
    if ((char)uVar7 != '\0') {
      iVar10 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0xb0)));
      uVar7 = *(uint *)((int)this + 0x48);
      iVar11 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0xa8)));
      (*(byte *)(gen_frame + 0x1b)) = *(byte *)((int)this + 0x58);
      uVar8 = (uint)*(byte *)((int)this + 0x58);
      uVar5 = F_0055a030(*(undefined4 *)((int)this + 8));
      (*(float *)(gen_frame + 0x0)) = 0.0;
      if (*(uint *)((int)this + 0x2c) < 0x7fffffff) {
        iVar9 = ((uVar7 - *(ushort *)((int)this + 0x4c)) - *(int *)((int)this + 0x30)) * uVar8;
        fVar13 = (float10)iVar9;
        if (iVar9 < 0) {
          fVar13 = fVar13 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        (*(float *)(gen_frame + 0x0)) = (float)fVar13;
      }
      iVar9 = *(int *)((int)this + 100);
      fVar13 = (float10)((float)GEN_TOF((((float10)1 - (float10)(float)((float10)iVar10 / (float10)iVar11)) *
                               (float10)(int)(uVar8 * uVar7 - (uint)uVar5)))) - (float10)(*(float *)(gen_frame + 0x0));
      if (iVar9 < 0) {
        fVar13 = (float10)((ushort *)(gen_frame + 0x14))[0] + (float10)(int)(iVar9 * uVar8);
      }
      (*(float *)(gen_frame + 0x8)) = (float)fVar13;
      if ((0.0 < (*(float *)(gen_frame + 0x8))) && (sVar6 < 0)) {
        if (((float10)GEN_TOD(-(int)sVar6)) < (float10)(*(float *)(gen_frame + 0x8))) {
          sVar6 = 0;
        }
        else {
          sVar6 = sVar6 + (short)(int)fVar13;
        }
      }
      if (0 < iVar9) {
        iVar10 = 0;
        uVar5 = 0;
        if (*(short *)((int)this + 0x44) != 0) {
          uVar12 = *(ushort *)((int)this + 0x1e);
          do {
            piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x5c) + 0x20))) + (uint)uVar12 * 4)));
            if (*piVar1 == *(int *)((int)this + 0xc4)) {
              sVar6 = -((ushort)(*(byte *)(gen_frame + 0x1b)) * (short)iVar10);
              break;
            }
            iVar10 = iVar10 + piVar1[1];
            uVar5 = uVar5 + 1;
            uVar12 = uVar12 + 2;
          } while (uVar5 < *(ushort *)((int)this + 0x44));
        }
      }
      if (*(int *)((int)this + 100) < 0) {
        if (uVar7 == *(ushort *)((int)this + 0x3e)) {
          uVar7 = *((uint *)GEN_TOP((*(int *)((int)this + 0x10) + 0xa8)));
        }
        else {
          iVar10 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0xa8)));
          bVar4 = *(byte *)((int)this + 0x58);
          uVar5 = F_0055a030(*(undefined4 *)((int)this + 8));
          uVar7 = (uint)((longlong)
                         ((ulonglong)(*(int *)((int)this + 0x30) * (uint)bVar4 - (int)sVar6) *
                         (longlong)iVar10) / (longlong)(int)(bVar4 * uVar7 - (uint)uVar5));
        }
        *(uint *)((int)this + 0x50) = uVar7;
        F_00574c80(*(undefined4 *)((int)this + 0x10),uVar7,1,1);
      }
    }
    uVar5 = F_0055a030(*(undefined4 *)((int)this + 8));
    iVar11 = (uint)uVar5 - (int)sVar6;
    iVar10 = iVar11 / (int)(uint)*(byte *)((int)this + 0x58);
    iVar9 = iVar10 * (uint)*(byte *)((int)this + 0x58);
    if (iVar11 != iVar9 && -1 < iVar11 - iVar9) {
      iVar10 = iVar10 + 1;
    }
    F_0055a020(*(undefined4 *)((int)this + 8));
    iVar11 = iVar10 * 0x80;
    if ((iVar11 < 0x2711) ||
       ((sVar6 < 0 &&
        (iVar11 = ((int)sVar6 / (int)(uint)*(byte *)((int)this + 0x58) + iVar10) * 0x80,
        iVar11 < 0x2711)))) {
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 0x110))) = 0;
    }
    else {
      this_00 = *(undefined * PTR32 *)((int)this + 8);
      fVar2 = *(float *)((int)this_00 + 0x34);
      fVar3 = *(float *)((int)this_00 + 0x30);
      uVar7 = F_00577ea0(this_00,(int)fVar3 & 0xffff,(int)fVar2 & 0xffff,0);
      uVar14 = 0;
      uVar5 = F_0055a030(*(undefined4 *)((int)this + 8));
      uVar8 = (uint)(ushort)(uVar5 + (short)(int)fVar2);
      uVar5 = F_0055a020(*(undefined4 *)((int)this + 8));
      uVar8 = F_00577ea0(*(undefined * PTR32 *)((int)this + 8),(uint)(ushort)(uVar5 + (short)(int)fVar3),uVar8
                           ,uVar14);
      if (uVar8 - uVar7 < 0x2711) {
        iVar11 = *(int *)((int)this + 8);
        *(undefined4 *)(iVar11 + 0x110) = 0;
      }
      else {
        iVar11 = uVar8 - 10000;
        *((int *)GEN_TOP((*(int *)((int)this + 8) + 0x110))) = iVar11;
      }
    }
    iVar10 = *(int *)((int)this + 8);
    uVar7 = CONCAT22((short)((uint)iVar11 >> 0x10),sVar6);
    *(undefined2 *)(iVar10 + 0x10c) = 0;
    *(short *)(iVar10 + 0x10e) = sVar6;
  }
  return uVar7;
}

/* ref: FUN_007e80a0 */
uint F_007e80a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7e80a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  
  F_005840a0(*(undefined * PTR32 *)((int)this + 8),0xc,0,*(undefined4 *)((int)this + 4),0);
  if (*(int *)((int)this + 0x10) == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x70)));
  }
  F_005840a0(pvVar2,0x19,1,*(undefined4 *)((int)this + 4),0);
  pvVar2 = (undefined *)0x0;
  if (*(int *)((int)this + 0x10) != 0) {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x70)));
  }
  F_005840a0(pvVar2,3,2,*(undefined4 *)((int)this + 4),0);
  pvVar2 = (undefined *)0x0;
  if (*(int *)((int)this + 0x10) != 0) {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x70)));
  }
  F_005840a0(pvVar2,4,3,*(undefined4 *)((int)this + 4),0);
  F_005840a0(*(undefined * PTR32 *)((int)this + 8),8,0x100,*(undefined4 *)((int)this + 4),0);
  F_005840a0(*(undefined * PTR32 *)((int)this + 8),3,0x101,*(undefined4 *)((int)this + 4),0);
  F_005840a0(*(undefined * PTR32 *)((int)this + 8),4,0x102,*(undefined4 *)((int)this + 4),0);
  uVar1 = F_00586850(*(undefined * PTR32 *)((int)this + 0x18),0x3a,0x200,*(undefined4 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_007e8160 */
unsigned int F_007e8160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e8160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  short * psVar1;
  ushort uVar2;
  int * piVar3;
  
  if (-1 < *(int *)((int)this + 0xc4)) {
    uVar2 = *(ushort *)((int)this + 0xca);
    if (1 < uVar2) {
      psVar1 = (short *)((int)this + 200);
      *psVar1 = *psVar1 + (short)param_1;
      if (*psVar1 < 0) {
        *(ushort *)((int)this + 200) = uVar2 - 1;
      }
      else if ((int)(uint)uVar2 <= (int)*(short *)((int)this + 200)) {
        *(undefined2 *)((int)this + 200) = 0;
      }
      F_00785090(this,*(int *)((int)this + 0xc4),(uint)*(ushort *)((int)this + 200));
      piVar3 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x38)));
      ((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3,((undefined1 *)(gen_frame + 0x4)),0);
      F_005a2670(((undefined1 *)(gen_frame + 0x4)));
    }
  }
  return 0;
}

/* ref: FUN_007e81e0 */
uint F_007e81e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e81e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  short sVar1;
  int * piVar2;
  undefined4 uVar3;
  uint uVar4;
  byte * pbVar5;
  uint * puVar6;
  int iVar7;
  ulonglong uVar8;
  
  uVar4 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xdc);
  (*(uint *)(gen_frame + 0xd8)) = uVar4;
  if (param_1 == 0) goto LAB_007e8439;
  F_0042b630(((undefined1 *)(gen_frame + 0x6c)));
  F_005684c0(*(undefined * PTR32 *)((int)this + 8),*(undefined4 *)(param_1 + 0x10),((undefined1 *)(gen_frame + 0x6c)));
  if (*(short *)(param_1 + 0x1e) == 3) {
    F_0042b630(((undefined1 *)(gen_frame + 0x18)));
    F_0042d000(((undefined1 *)(gen_frame + 0x18)),"m:%d,%d,%d,%d",(int)*(uint *)(param_1 + 0x20) >> 0x10,
                 *(uint *)(param_1 + 0x20) & 0xffff,*(undefined4 *)(param_1 + 0x24),
                 *(undefined4 *)(param_1 + 0x28));
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    uVar4 = F_0042a990(((undefined1 *)(gen_frame + 0x18)));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),6);
    (*(uint *)(gen_frame + 0x10)) = uVar4;
    piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x38)));
    pbVar5 = ((byte *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,((undefined1 *)(gen_frame + 0x4)),0xe,1,&(*(undefined4 *)(gen_frame + 0xc)))));
    if ((*pbVar5 & 0xf) == 0) {
      (*(byte *)(gen_frame + 0x17)) = 0;
    }
    else {
      (*(byte *)(gen_frame + 0x17)) = pbVar5[4];
    }
    F_005a2670(((undefined1 *)(gen_frame + 0x4)));
    if ((*(byte *)(gen_frame + 0x17)) == 0) {
      F_005a2670(&(*(undefined4 *)(gen_frame + 0xc)));
      F_0042c880(((undefined1 *)(gen_frame + 0x18)));
    }
    else {
      F_005602f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x18) + 0x20c))),0,0,0);
      if (-1 < *(int *)((int)this + 0xc4)) {
        F_0055ad50(*(undefined * PTR32 *)((int)this + 8),0,0);
        *(undefined4 *)((int)this + 0xc4) = 0xffffffff;
        *(undefined2 *)((int)this + 200) = 0xffff;
        if ((*((byte *)GEN_TOP((*(int *)((int)this + 4) + 0xfb))) & 2) != 0) {
          puVar6 = ((uint *)GEN_TOP((*(int *)((int)this + 4) + 0x120)));
          *puVar6 = *puVar6 & 0xffffffbf;
        }
      }
      F_005a2670(&(*(undefined4 *)(gen_frame + 0xc)));
      F_0042c880(((undefined1 *)(gen_frame + 0x18)));
LAB_007e8410: ;
      piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x38)));
      ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2,((undefined1 *)(gen_frame + 0x4)),1);
      F_005a2670(((undefined1 *)(gen_frame + 0x4)));
    }
  }
  else {
    if (*(char *)((int)this + 0xd8) != '\0') {
      F_0055ad50(*(undefined * PTR32 *)((int)this + 8),0,0);
      *(undefined4 *)((int)this + 0xc4) = 0xffffffff;
      *(undefined2 *)((int)this + 200) = 0xffff;
    }
    (*(undefined4 *)(gen_frame + 0xc0)) = 0;
    (*(undefined4 *)(gen_frame + 0xc8)) = 0;
    (*(undefined4 *)(gen_frame + 0xd0)) = 0;
    sVar1 = *(short *)(param_1 + 0x1e);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc0)),3);
    uVar3 = *(undefined4 *)(param_1 + 0x20);
    (*(int *)(gen_frame + 0xc4)) = sVar1 + 6;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc8)),4);
    (*(undefined4 *)(gen_frame + 0xcc)) = uVar3;
    uVar4 = F_0042a990(((undefined1 *)(gen_frame + 0x6c)));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xd0)),6);
    (*(uint *)(gen_frame + 0xd4)) = uVar4;
    uVar4 = F_005a9170(*(undefined * PTR32 *)((int)this + 4),3,&(*(undefined4 *)(gen_frame + 0xc0)));
    if ((char)uVar4 == '\0') {
      F_005602f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x18) + 0x20c))),0,0,0);
      *(undefined1 *)((int)this + 0xc1) = 1;
      puVar6 = &(*(uint *)(gen_frame + 0xd8));
      iVar7 = 2;
      do {
        puVar6 = puVar6 + -2;
        F_005a2670(puVar6);
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
      goto LAB_007e8410;
    }
    puVar6 = &(*(uint *)(gen_frame + 0xd8));
    iVar7 = 2;
    do {
      puVar6 = puVar6 + -2;
      F_005a2670(puVar6);
      iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
  }
  uVar8 = F_0042c880(((undefined1 *)(gen_frame + 0x6c)));
  uVar4 = (uint)uVar8;
LAB_007e8439: ;
  F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
  return uVar4;
}

