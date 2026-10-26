#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: Client::UI2::Agent::AgentCharaMakeBase::vf26 */
uint F_008fff40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x8fff40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined1 AVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  
  F_008f7ac0(this,param_1,param_2);
  bVar3 = F_007e3a10(this,param_2,param_3);
  if (bVar3 == 0) {
    F_005a2710(this + 0x10ec,3);
    *(undefined4 *)(this + 0x10f0) = 0;
  }
  F_007e3c50(this);
  F_007e3cc0(this);
  AVar1 = this[0x1fa8];
  F_005a2710(this + 0x105c,3);
  *(int *)(this + 0x1060) = (int)(char)AVar1;
  F_005a2710(this + 0x1dc4,3);
  *(undefined4 *)(this + 0x1dc8) = 0;
  bVar3 = *param_2;
  F_005a2710(this + 0x1064,3);
  *(uint *)(this + 0x1068) = (uint)bVar3;
  bVar3 = param_2[1];
  F_005a2710(this + 0x106c,3);
  *(uint *)(this + 0x1070) = (uint)bVar3;
  bVar3 = param_2[2];
  F_005a2710(this + 0x1074,3);
  *(uint *)(this + 0x1078) = (uint)bVar3;
  bVar3 = param_2[4];
  bVar2 = param_2[5];
  F_005a2710(this + 0x107c,3);
  *(uint *)(this + 0x1080) = (uint)bVar3 * 100 + (uint)bVar2;
  bVar3 = param_2[6];
  F_005a2710(this + 0x1084,3);
  *(uint *)(this + 0x1088) = (uint)bVar3;
  bVar3 = param_2[7];
  uVar4 = F_005a2710(this + 0x108c,3);
  *(uint *)(this + 0x1090) = (uint)bVar3;
  return uVar4;
}

/* ref: FUN_00900080 */
byte F_00900080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x900080u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  int iVar1;
  byte bVar2;
  ushort uVar3;
  int * piVar4;
  uint uVar5;
  undefined * this_00;
  uint uVar6;
  uint uVar7;
  int iVar8;
  byte * pbVar9;
  undefined1 * puVar10;
  uint uVar11;
  undefined * puVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  (*(uint *)(gen_frame + 0x118)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x11c);
  piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x24))(piVar4,2);
  piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4,1)));
  if (((*(int *)((int)this + 0x2e8) != 0) && (uVar5 != 0)) && (this_00 != (undefined *)0x0)) {
    (*(byte *)(gen_frame + 0x1b)) = '\0';
    if (param_1 == 0xfffffffe) {
      F_007819a0(this);
      uVar7 = **(uint * PTR32 *)(uVar5 + 0x20);
      uVar6 = uVar7 | 0x10;
      if (uVar7 != uVar6) {
        **(uint * PTR32 *)(uVar5 + 0x20) = uVar6;
        *(undefined1 *)(uVar5 + 0x1d) = 1;
      }
      if (REFG(int * PTR32, 0x148a44c) != (int *)0x0) {
        ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x148a44c) + 0x28))))(REFG(int * PTR32, 0x148a44c),6,0);
        REFG(undefined4, 0x1328330) = 0xffffffff;
        REFG(int * PTR32, 0x148a44c) = (int *)0x0;
      }
    }
    else {
      uVar7 = param_1;
      if (99 < (int)param_1) {
        uVar7 = param_1 - 100;
        (*(byte *)(gen_frame + 0x1b)) = 1;
      }
      (*(byte *)(gen_frame + 0x1b)) = 99 < (int)param_1;
      piVar4 = (int *)F_008d7bf0((undefined *)((int)this + 0x18),(int)*(char *)((int)this + 0x680),
                                   (int)*(short *)((int)this + 0x682),uVar7);
      (*(int * PTR32 *)(gen_frame + 0xc)) = piVar4;
      if (piVar4 == (int *)0x0) goto LAB_0090071e;
      if (*piVar4 != 0) {
        uVar6 = F_00e3be40(*piVar4);
        if ((uVar6 != 0) && ((*(byte *)(gen_frame + 0x1a)) = *(byte *)(uVar6 + 0x56), *(byte *)(uVar6 + 0x56) != 0)) {
          F_008f8640(this,(uint)*(byte *)(uVar6 + 0x4d),(uint)*(byte *)(uVar6 + 0x4e));
          uVar13 = F_0090c230((*(int * PTR32 *)(gen_frame + 0xc)));
          bVar2 = F_008a3160((undefined *)((int)this + 0x18),(int)uVar13,(int)(uVar13 >> 0x20));
          (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x14)) + 0)) = bVar2;
          (*(int *)(gen_frame + 0x14)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x14)), 1, 3),bVar2);
          uVar3 = F_00783200((*(int * PTR32 *)(gen_frame + 0xc)),(*(int *)(gen_frame + 0x14)));
          uVar13 = (ulonglong)CONCAT24(uVar3,(*(int *)(gen_frame + 0x14))) & 0xffffffff000000ff;
          F_008f8820(this,(int)uVar13,(int)(uVar13 >> 0x20));
          bVar2 = *(byte *)(uVar6 + 0x5a);
          (*(byte *)(gen_frame + 0x18)) = *(byte *)(uVar6 + 0x57);
          (*(int *)(gen_frame + 0x14)) = (*(byte *)(gen_frame + 0x1a)) - 1;
          (*(byte *)(gen_frame + 0x13)) = bVar2;
          (*(int *)(gen_frame + 0x8)) = 0;
          pbVar9 = (byte *)&(*(int *)(gen_frame + 0x14));
          if ((int)((*(byte *)(gen_frame + 0x1a)) - 1) < 1) {
            pbVar9 = (byte *)&(*(int *)(gen_frame + 0x8));
          }
          (*(byte *)(gen_frame + 0x19)) = *pbVar9;
          F_0042b630(((undefined1 *)(gen_frame + 0x70)));
          F_0042b630(((undefined1 *)(gen_frame + 0x1c)));
          F_0042b630(((undefined1 *)(gen_frame + 0xc4)));
          F_008f8bb0(this,(uint)(*(byte *)(gen_frame + 0x19)),(uint)(*(byte *)(gen_frame + 0x18)),((undefined1 *)(gen_frame + 0x70)));
          F_008f8cb0(this,(int)*(char *)((int)this + 0x680),(int)*(short *)((int)this + 0x682),
                       ((undefined1 *)(gen_frame + 0x1c)));
          iVar8 = (uint)(*(byte *)(gen_frame + 0x13)) + (uint)(*(byte *)(gen_frame + 0x1a)) * -2 + 1;
          (*(int *)(gen_frame + 0x8)) = iVar8;
          (*(int *)(gen_frame + 0x14)) = 0;
          pbVar9 = (byte *)&(*(int *)(gen_frame + 0x8));
          if (iVar8 < 1) {
            pbVar9 = (byte *)&(*(int *)(gen_frame + 0x14));
          }
          (*(byte *)(gen_frame + 0x1a)) = *pbVar9;
          iVar8 = *(byte *)(uVar6 + 0x4f) - 1;
          (*(int *)(gen_frame + 0x8)) = iVar8;
          (*(int *)(gen_frame + 0x14)) = 0;
          pbVar9 = (byte *)&(*(int *)(gen_frame + 0x8));
          if (iVar8 < 1) {
            pbVar9 = (byte *)&(*(int *)(gen_frame + 0x14));
          }
          (*(byte *)(gen_frame + 0x18)) = *pbVar9;
          if (*(*(int * PTR32 *)(gen_frame + 0xc)) == 0) {
            puVar10 = &REFG(undefined1, 0x107fc63);
          }
          else {
            puVar10 = (undefined1 *)(*(*(int * PTR32 *)(gen_frame + 0xc)) + 0x1a);
          }
          F_00431250(this_00,0x58,puVar10,0,1,0);
          uVar11 = F_00781590(this,0x7df);
          if (uVar11 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x164)))) {
            *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x164))) = uVar11;
            *(undefined1 *)((int)this_00 + 0x1d) = 1;
          }
          uVar16 = 0;
          uVar15 = 1;
          uVar14 = 0;
          uVar11 = F_0042a990(((undefined1 *)(gen_frame + 0x70)));
          F_00431250(this_00,0x5a,uVar11,uVar14,uVar15,uVar16);
          uVar11 = F_00781590(this,(uint)(*(byte *)(gen_frame + 0x19)) * 2 + 0x6f);
          if (uVar11 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x16c)))) {
            *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x16c))) = uVar11;
            *(undefined1 *)((int)this_00 + 0x1d) = 1;
          }
          uVar11 = F_00781590(this,0x7e0);
          if (uVar11 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x170)))) {
            *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x170))) = uVar11;
            *(undefined1 *)((int)this_00 + 0x1d) = 1;
          }
          uVar11 = F_00781590(this,((*(byte *)(gen_frame + 0x1a)) + 0x3c + (uint)(*(byte *)(gen_frame + 0x19)) * 2) * 2);
          if (uVar11 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x174)))) {
            *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x174))) = uVar11;
            *(undefined1 *)((int)this_00 + 0x1d) = 1;
          }
          uVar11 = F_00781590(this,((uint)(*(byte *)(gen_frame + 0x1a)) + (uint)(*(byte *)(gen_frame + 0x19)) * 2) * 2 + 0x79);
          if (uVar11 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x178)))) {
            *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x178))) = uVar11;
            *(undefined1 *)((int)this_00 + 0x1d) = 1;
          }
          uVar11 = F_00781590(this,0x7e3);
          if (uVar11 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x17c)))) {
            *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x17c))) = uVar11;
            *(undefined1 *)((int)this_00 + 0x1d) = 1;
          }
          uVar16 = 0;
          uVar15 = 1;
          uVar14 = 0;
          uVar11 = F_0042a990((int)this + 0x4ac);
          F_00431250(this_00,0x60,uVar11,uVar14,uVar15,uVar16);
          uVar16 = 0;
          uVar15 = 1;
          uVar14 = 0;
          uVar11 = F_0042a990((int)this + 0x500);
          F_00431250(this_00,0x61,uVar11,uVar14,uVar15,uVar16);
          uVar11 = F_00781590(this,0x7e2);
          if (uVar11 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x188)))) {
            *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x188))) = uVar11;
            *(undefined1 *)((int)this_00 + 0x1d) = 1;
          }
          uVar11 = F_00781590(this,(uint)(*(byte *)(gen_frame + 0x18)) * 2 + 0x9a);
          if (uVar11 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x18c)))) {
            *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x18c))) = uVar11;
            *(undefined1 *)((int)this_00 + 0x1d) = 1;
          }
          uVar11 = F_00781590(this,(uint)(*(byte *)(gen_frame + 0x18)) * 2 + 0x9b);
          if (uVar11 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 400)))) {
            *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 400))) = uVar11;
            *(undefined1 *)((int)this_00 + 0x1d) = 1;
          }
          uVar11 = F_00781590(this,0x7e1);
          if (uVar11 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x194)))) {
            *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x194))) = uVar11;
            *(undefined1 *)((int)this_00 + 0x1d) = 1;
          }
          uVar16 = 0;
          uVar15 = 1;
          uVar14 = 0;
          uVar11 = F_0042a990((int)this + 0x404);
          F_00431250(this_00,0x66,uVar11,uVar14,uVar15,uVar16);
          uVar16 = 0;
          uVar15 = 1;
          uVar14 = 0;
          uVar11 = F_0042a990((int)this + 0x458);
          F_00431250(this_00,0x67,uVar11,uVar14,uVar15,uVar16);
          uVar11 = F_00781590(this,0x7e4);
          if (uVar11 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x1a0)))) {
            *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x1a0))) = uVar11;
            *(undefined1 *)((int)this_00 + 0x1d) = 1;
          }
          puVar12 = (undefined *)F_007815d0((int)*(short *)(uVar6 + 0x54));
          if (puVar12 == (undefined *)0x0) {
            puVar12 = &REFG(undefined, 0x10be54b);
          }
          if (puVar12 != *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x1a4)))) {
            *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x1a4))) = puVar12;
            *(undefined1 *)((int)this_00 + 0x1d) = 1;
          }
          uVar6 = F_00781590(this,0x7e5);
          if (uVar6 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x1a8)))) {
            *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x1a8))) = uVar6;
            *(undefined1 *)((int)this_00 + 0x1d) = 1;
          }
          iVar8 = *(int *)((int)this_00 + 0x20);
          iVar1 = *((int *)GEN_TOP((iVar8 + ((int)*(short *)((int)this + 0x682) +
                                   *(char *)((int)this + 0x680) * 0x28) * 4)));
          if (iVar1 != *(int *)(iVar8 + 0x1ac)) {
            *(int *)(iVar8 + 0x1ac) = iVar1;
            *(undefined1 *)((int)this_00 + 0x1d) = 1;
          }
          uVar16 = 0;
          uVar15 = 1;
          uVar14 = 0;
          uVar6 = F_0042a990(((undefined1 *)(gen_frame + 0x1c)));
          F_00431250(this_00,0x6c,uVar6,uVar14,uVar15,uVar16);
          F_007e4cb0(this,(*(int * PTR32 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0xc4)));
          uVar16 = 0;
          uVar15 = 1;
          uVar14 = 0;
          uVar6 = F_0042a990(((undefined1 *)(gen_frame + 0xc4)));
          F_00431250(this_00,0x7a,uVar6,uVar14,uVar15,uVar16);
          uVar6 = **(uint * PTR32 *)(uVar5 + 0x20);
          uVar11 = uVar6 | 0x10;
          if (uVar6 != uVar11) {
            **(uint * PTR32 *)(uVar5 + 0x20) = uVar11;
            *(undefined1 *)(uVar5 + 0x1d) = 1;
          }
          if ((*(byte *)(gen_frame + 0x1b)) == '\0') {
            bVar2 = F_007e5eb0(uVar7,param_2);
          }
          else {
            uVar13 = F_0090c230((*(int * PTR32 *)(gen_frame + 0xc)));
            bVar2 = F_007e6180((int)uVar13,(int)(uVar13 >> 0x20));
          }
          (*(byte *)(gen_frame + 0x1b)) = bVar2;
          F_0042c880(((undefined1 *)(gen_frame + 0xc4)));
          F_0042c880(((undefined1 *)(gen_frame + 0x1c)));
          F_0042c880(((undefined1 *)(gen_frame + 0x70)));
          bVar2 = (*(byte *)(gen_frame + 0x1b));
          F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c));
          return bVar2;
        }
      }
      F_007819a0(this);
      uVar7 = **(uint * PTR32 *)(uVar5 + 0x20);
      uVar6 = uVar7 | 0x10;
      if (uVar7 != uVar6) {
        **(uint * PTR32 *)(uVar5 + 0x20) = uVar6;
        *(undefined1 *)(uVar5 + 0x1d) = 1;
      }
      if (REFG(int * PTR32, 0x148a44c) != (int *)0x0) {
        ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x148a44c) + 0x28))))(REFG(int * PTR32, 0x148a44c),6,0);
        REFG(undefined4, 0x1328330) = 0xffffffff;
        REFG(int * PTR32, 0x148a44c) = (int *)0x0;
        F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c));
        return 1;
      }
    }
    F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c));
    return 1;
  }
LAB_0090071e: ;
  if (REFG(int * PTR32, 0x148a44c) != (int *)0x0) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x148a44c) + 0x28))))(REFG(int * PTR32, 0x148a44c),6,0);
    REFG(undefined4, 0x1328330) = 0xffffffff;
    REFG(int * PTR32, 0x148a44c) = (int *)0x0;
  }
  F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c));
  return 0;
}

/* ref: Client::UI2::Agent::AgentLobby::vf1 */
uint F_00900760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x900760u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  uint param_4 = (uint)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xf0];
  float fVar1;
  undefined1 AVar2;
  char cVar3;
  byte bVar4;
  undefined1 AVar5;
  ushort uVar6;
  int iVar7;
  int * piVar8;
  undefined * pvVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined1 * puVar13;
  uint uVar14;
  uint * puVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined * pAVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  code * pcVar25;
  undefined4 uVar26;
  undefined8 uVar27;
  undefined4 uVar28;
  
  fVar1 = REFG(float, 0x1088068);
  (*(uint *)(gen_frame + 0xe8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xec);
  if ((param_3 == 0) && ((this[0x68f] == (undefined1)0x7 || (this[0x68f] == (undefined1)0x8)))) {
LAB_00900795: ;
    this[0x68f] = (undefined1)0x9;
    this[0x6cb] = (undefined1)0x0;
    *(undefined1 *)(param_1 + 1) = 1;
    goto LAB_00900a69;
  }
  if ((param_4 != 0) || (param_3 < 1)) {
    switch((unsigned int)(uintptr_t)(param_4 & 0xff)) {
    case 1: ;
      AVar2 = this[0x670];
      if ((*param_2 & 0xf) == 0) {
        AVar5 = (undefined1)0x0;
      }
      else {
        AVar5 = SUB41(*(undefined4 *)(param_2 + 4),0);
      }
      this[0x670] = AVar5;
      if (AVar5 == AVar2) {
        this[0x6bd] = this[0x671];
      }
      else {
        F_007e5fc0();
      }
      if ((char)this[0x670] < '\0') {
        this[0x68f] = (undefined1)0x3;
        *(undefined4 *)(this + 0x698) = 0;
        *(undefined4 *)(this + 0x69c) = 0;
        *(undefined4 *)(this + 0x684) = 0;
        *(undefined1 *)(param_1 + 1) = 1;
      }
      else {
        this[0x68c] = (undefined1)0x7;
        this[0x68f] = (undefined1)0xb;
        *(undefined4 *)(this + 0x684) = 0;
        *(undefined1 *)(param_1 + 1) = 1;
      }
      break;
    case 2: ;
      if ((((*param_2 & 0xf) == 0) || (*(int *)(param_2 + 4) == 0)) &&
         (piVar8 = (int *)F_008d7bf0(this + 0x18,(int)(char)this[0x680],
                                       (int)*(short *)(this + 0x682),(int)(char)this[0x671]),
         piVar8 != (int *)0x0)) {
        uVar18 = F_0090c230(piVar8);
        F_0042b630(((undefined1 *)(gen_frame + 0xc)));
        F_0042b630(((undefined1 *)(gen_frame + 0x60)));
        if (*piVar8 == 0) {
          puVar13 = &REFG(undefined1, 0x107fc63);
        }
        else {
          puVar13 = (undefined1 *)(*piVar8 + 0x1a);
        }
        F_0042e430(((undefined1 *)(gen_frame + 0xc)),puVar13);
        if (*piVar8 == 0) {
          puVar13 = &REFG(undefined1, 0x107fc63);
        }
        else {
          puVar13 = (undefined1 *)(*piVar8 + 0x3a);
        }
        F_0042e430(((undefined1 *)(gen_frame + 0x60)),puVar13);
        (*(undefined1 * PTR32 *)(gen_frame + 0x4)) = (undefined1 *)(uVar18 >> 0x20);
        (*(undefined4 *)(gen_frame + 0x0)) = (undefined4)uVar18;
        bVar4 = F_008a3160(this + 0x18,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined1 * PTR32 *)(gen_frame + 0x4)));
        (*(uint *)(gen_frame + 0xb8)) = (uint)bVar4;
        uVar6 = F_00783200(piVar8,(uint)bVar4);
        (*(uint *)(gen_frame + 0xb4)) = (uint)uVar6;
        uVar6 = F_00783250(piVar8);
        uVar12 = 0xf;
        (*(uint *)(gen_frame + 0xbc)) = (uint)uVar6;
        pcVar25 = ((code *)REFP(0x916e20));
        uVar27 = 0x8a27a0;
        puVar13 = ((undefined1 *)(gen_frame + 0xc));
        pAVar19 = this;
        pvVar9 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
        F_0075e840(pvVar9,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined1 * PTR32 *)(gen_frame + 0x4)),puVar13,pcVar25,pAVar19,(int)uVar27,
                     (int)((ulonglong)uVar27 >> 0x20),uVar12);
        F_007e4f40(this);
        F_0042c880(((undefined1 *)(gen_frame + 0x60)));
        F_0042c880(((undefined1 *)(gen_frame + 0xc)));
      }
      *(undefined4 *)(this + 0x684) = 0;
      *(undefined1 *)(param_1 + 1) = 1;
      break;
    case 3: ;
      if ((((*param_2 & 0xf) == 0) || (iVar16 = *(int *)(param_2 + 4), iVar16 == 0)) ||
         (iVar16 == 7)) {
        *(undefined4 *)(this + 0x684) = 0;
        F_008f2a60(this,0xffffffff);
        *(undefined1 *)(param_1 + 1) = 1;
      }
      else {
        uVar12 = 4;
        if (iVar16 == 6) {
          uVar27 = 0;
          uVar22 = 0;
          uVar21 = 0;
          uVar20 = 0x92;
          pAVar19 = this;
          pvVar9 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
          uVar14 = F_008668b0(pvVar9,uVar20,uVar21,uVar22,pAVar19,(int)uVar27,
                                (int)((ulonglong)uVar27 >> 0x20),uVar12);
          *(uint *)(this + 0x684) = uVar14;
          *(undefined1 *)(param_1 + 1) = 1;
        }
        else {
          (*(undefined4 *)(gen_frame + 0xc0)) = 0;
          (*(undefined4 *)(gen_frame + 0xc8)) = 0;
          (*(undefined4 *)(gen_frame + 0xd0)) = 0;
          (*(undefined4 *)(gen_frame + 0xd8)) = 0;
          (*(undefined4 *)(gen_frame + 0xe0)) = 0;
          F_005a2710(&(*(undefined4 *)(gen_frame + 0xc0)),4);
          (*(undefined4 *)(gen_frame + 0xc4)) = 0;
          piVar8 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
          ((code *)*(gen_code32 *)(*piVar8 + 0x5c))(piVar8,*(undefined4 *)(this + 8),5,&(*(undefined4 *)(gen_frame + 0xc0)));
          *(undefined4 *)(this + 0x684) = 0;
          puVar15 = &(*(uint *)(gen_frame + 0xe8));
          iVar16 = 4;
          do {
            puVar15 = puVar15 + -2;
            F_005a2670(puVar15);
            iVar16 = iVar16 + -1;
          } while (-1 < iVar16);
          *(undefined1 *)(param_1 + 1) = 1;
        }
      }
      break;
    case 4: ;
      F_008f8f60(this);
      *(undefined1 *)(param_1 + 1) = 1;
      break;
    case 5: ;
      if ((*param_2 & 0xf) == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(undefined4 *)(param_2 + 4);
      }
      switch((unsigned int)(uintptr_t)(uVar12)) {
      case 0: ;
        this[0x68c] = (undefined1)0x14;
        *(undefined4 *)(this + 0x684) = 0;
        *(undefined1 *)(param_1 + 1) = 1;
        break;
      case 1: ;
        this[0x68c] = (undefined1)0x1;
      case 0xffffffff: ;
      case 5: ;
        *(undefined4 *)(this + 0x684) = 0;
        *(undefined1 *)(param_1 + 1) = 1;
        break;
      default: ;
        goto switchD_009007db_caseD_9;
      }
      break;
    case 6: ;
      F_008a2730(this);
      *(undefined1 *)(param_1 + 1) = 1;
      break;
    case 7: ;
      if (((((*param_2 & 0xf) == 0) || (*(int *)(param_2 + 4) == 0)) &&
          (piVar8 = (int *)F_008d7bf0(this + 0x18,(int)(char)this[0x680],
                                        (int)*(short *)(this + 0x682),(int)(char)this[0x671]),
          piVar8 != (int *)0x0)) &&
         ((*piVar8 != 0 && (uVar14 = F_00e3be40(*piVar8), uVar14 != 0)))) {
        (*(undefined4 *)(gen_frame + 0xc0)) = 0;
        (*(undefined4 *)(gen_frame + 0xc8)) = 0;
        (*(undefined4 *)(gen_frame + 0xd0)) = 0;
        (*(undefined4 *)(gen_frame + 0xd8)) = 0;
        (*(undefined4 *)(gen_frame + 0xe0)) = 0;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0xc0)),4);
        (*(undefined4 *)(gen_frame + 0xc4)) = 8;
        if (*piVar8 == 0) {
          (*(undefined1 * PTR32 *)(gen_frame + 0x4)) = &REFG(undefined1, 0x107fc63);
        }
        else {
          (*(undefined1 * PTR32 *)(gen_frame + 0x4)) = (undefined1 *)(*piVar8 + 0x1a);
        }
        F_005a2710(&(*(undefined4 *)(gen_frame + 0xd0)),6);
        (*(undefined1 * PTR32 *)(gen_frame + 0xd4)) = (*(undefined1 * PTR32 *)(gen_frame + 0x4));
        if (*piVar8 == 0) {
          uVar14 = 0;
        }
        else {
          uVar14 = F_00e3be40(*piVar8);
        }
        bVar4 = *(byte *)(uVar14 + 0x5a);
        F_005a2710(&(*(undefined4 *)(gen_frame + 0xd8)),4);
        (*(undefined1 * PTR32 *)(gen_frame + 0x4)) = (undefined1 *)(uint)bVar4;
        (*(uint *)(gen_frame + 0xdc)) = (uint)(*(undefined1 * PTR32 *)(gen_frame + 0x4));
        if (*piVar8 == 0) {
          uVar14 = 0;
        }
        else {
          uVar14 = F_00e3be40(*piVar8);
        }
        bVar4 = *(byte *)(uVar14 + 0x57);
        F_005a2710(&(*(undefined4 *)(gen_frame + 0xe0)),4);
        (*(uint *)(gen_frame + 0xe4)) = (uint)bVar4;
        piVar8 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
        ((code *)*(gen_code32 *)(*piVar8 + 0x5c))(piVar8,*(undefined4 *)(this + 8),5,&(*(undefined4 *)(gen_frame + 0xc0)));
        puVar15 = &(*(uint *)(gen_frame + 0xe8));
        (*(undefined1 * PTR32 *)(gen_frame + 0x4)) = (undefined1 *)0x4;
        do {
          puVar15 = puVar15 + -2;
          F_005a2670(puVar15);
          (*(undefined1 * PTR32 *)(gen_frame + 0x4)) = (undefined1 *)((int)(*(undefined1 * PTR32 *)(gen_frame + 0x4)) + -1);
        } while (-1 < (int)(*(undefined1 * PTR32 *)(gen_frame + 0x4)));
      }
      *(undefined4 *)(this + 0x684) = 0;
      *(undefined1 *)(param_1 + 1) = 1;
      break;
    case 8: ;
      if (((*param_2 & 0xf) == 0) || (*(int *)(param_2 + 4) == 0)) {
        piVar8 = (int *)F_008d7bf0(this + 0x18,(int)(char)this[0x680],
                                     (int)*(short *)(this + 0x682),(int)(char)this[0x671]);
        if (piVar8 != (int *)0x0) {
          if (*piVar8 == 0) {
            (*(undefined1 *)((char *)&(*(undefined1 * PTR32 *)(gen_frame + 0x4)) + 0)) = 0;
          }
          else {
            (*(undefined1 *)((char *)&(*(undefined1 * PTR32 *)(gen_frame + 0x4)) + 0)) = *(byte *)(*piVar8 + 0x10);
          }
          pAVar19 = this + 0x5a8;
          uVar18 = F_0090c230(piVar8);
          bVar4 = F_00884af0(this + 0x18,(uint)(byte)(*(undefined1 * PTR32 *)(gen_frame + 0x4)),(int)uVar18,(int)(uVar18 >> 0x20),
                               pAVar19);
          if (bVar4 != 0) {
            F_00781b90(this,1);
            uVar12 = 2;
            pvVar9 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
            F_007601d0(pvVar9,uVar12);
            *(undefined4 *)(this + 0x684) = 0;
            *(undefined1 *)(param_1 + 1) = 1;
            break;
          }
        }
      }
      else {
        piVar8 = (int *)F_008d7bf0(this + 0x18,(int)(char)this[0x680],
                                     (int)*(short *)(this + 0x682),(int)(char)this[0x671]);
        if (piVar8 != (int *)0x0) {
          (*(undefined4 *)(gen_frame + 0xc0)) = 0;
          (*(undefined4 *)(gen_frame + 0xc8)) = 0;
          (*(undefined4 *)(gen_frame + 0xd0)) = 0;
          (*(undefined4 *)(gen_frame + 0xd8)) = 0;
          (*(undefined4 *)(gen_frame + 0xe0)) = 0;
          F_005a2710(&(*(undefined4 *)(gen_frame + 0xc0)),4);
          (*(undefined4 *)(gen_frame + 0xc4)) = 0x10;
          if (*piVar8 == 0) {
            (*(undefined1 * PTR32 *)(gen_frame + 0x4)) = &REFG(undefined1, 0x107fc63);
          }
          else {
            (*(undefined1 * PTR32 *)(gen_frame + 0x4)) = (undefined1 *)(*piVar8 + 0x1a);
          }
          F_005a2710(&(*(undefined4 *)(gen_frame + 0xd0)),6);
          (*(undefined1 * PTR32 *)(gen_frame + 0xd4)) = (*(undefined1 * PTR32 *)(gen_frame + 0x4));
          piVar8 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
          ((code *)*(gen_code32 *)(*piVar8 + 0x5c))(piVar8,*(undefined4 *)(this + 8),5,&(*(undefined4 *)(gen_frame + 0xc0)));
          *(undefined4 *)(this + 0x684) = 0;
          puVar15 = &(*(uint *)(gen_frame + 0xe8));
          (*(undefined1 * PTR32 *)(gen_frame + 0x4)) = (undefined1 *)0x4;
          do {
            puVar15 = puVar15 + -2;
            F_005a2670(puVar15);
            (*(undefined1 * PTR32 *)(gen_frame + 0x4)) = (undefined1 *)((int)(*(undefined1 * PTR32 *)(gen_frame + 0x4)) + -1);
          } while (-1 < (int)(*(undefined1 * PTR32 *)(gen_frame + 0x4)));
        }
      }
      *(undefined4 *)(this + 0x684) = 0;
      *(undefined1 *)(param_1 + 1) = 1;
      break;
    case 9: ;
      F_008e18b0(this);
      *(undefined1 *)(param_1 + 1) = 1;
      break;
    case 10: ;
      if (((*param_2 & 0xf) == 0) || (*(int *)(param_2 + 4) == 0)) {
        uVar12 = 0;
LAB_00901362: ;
        F_008f2bc0(this,uVar12);
      }
      goto LAB_00901369;
    default: ;
      goto switchD_009007db_caseD_9;
    case 0xd: ;
      if ((0 < param_3) && (((*param_2 & 0xf) == 0 || (*(int *)(param_2 + 4) == 0)))) {
        uVar12 = 1;
        goto LAB_00901362;
      }
LAB_00901369: ;
      *(undefined4 *)(this + 0x684) = 0;
      *(undefined1 *)(param_1 + 1) = 1;
      break;
    case 0xe: ;
      if ((param_3 < 1) ||
         ((((*param_2 & 0xf) != 0 && (*(int *)(param_2 + 4) != 0)) ||
          (pvVar9 = (undefined *)F_008d7bf0(this + 0x18,(int)(char)this[0x680],
                                         (int)*(short *)(this + 0x682),(int)(char)this[0x671]),
          pvVar9 == (undefined *)0x0)))) goto LAB_00901369;
      uVar14 = param_4 >> 0x10;
      uVar18 = F_0090c230(pvVar9);
      F_008b0870(this + 0x18,(int)uVar18,(int)(uVar18 >> 0x20),uVar14);
      *(undefined4 *)(this + 0x684) = 0;
      *(undefined1 *)(param_1 + 1) = 1;
      break;
    case 0x10: ;
      if ((0 < param_3) && (((*param_2 & 0xf) == 0 || (*(int *)(param_2 + 4) == 0)))) {
        uVar14 = 0xffffffff;
LAB_00900e0e: ;
        F_008f2a60(this,uVar14);
      }
    case 0xb: ;
switchD_00900e90_caseD_b: ;
      *(undefined4 *)(this + 0x684) = 0;
LAB_00900e1f: ;
      *(undefined1 *)(param_1 + 1) = 1;
      break;
    case 0x11: ;
      if ((param_3 < 1) || (((*param_2 & 0xf) != 0 && (*(int *)(param_2 + 4) != 0)))) {
        if (*((int *)GEN_TOP((*(int *)(this + 0x6d4) + 0xc))) != 0) {
          piVar8 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x6d4) + 0xc)));
          ((code *)*(gen_code32 *)(*piVar8 + 0x60))(piVar8,0,0xffffffff);
        }
        this[0x68c] = (undefined1)0x1;
        *(undefined4 *)(this + 0x684) = 0;
        *(undefined1 *)(param_1 + 1) = 1;
      }
      else {
        this[0x68c] = (undefined1)0xf;
        *(undefined4 *)(this + 0x684) = 0;
        *(undefined1 *)(param_1 + 1) = 1;
      }
      break;
    case 0x12: ;
      (*(undefined4 *)(gen_frame + 0xc0)) = 0;
      (*(undefined4 *)(gen_frame + 0xc8)) = 0;
      (*(undefined4 *)(gen_frame + 0xd0)) = 0;
      (*(undefined4 *)(gen_frame + 0xd8)) = 0;
      (*(undefined4 *)(gen_frame + 0xe0)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0xc0)),4);
      (*(undefined4 *)(gen_frame + 0xc4)) = 0;
      piVar8 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
      ((code *)*(gen_code32 *)(*piVar8 + 0x5c))(piVar8,*(undefined4 *)(this + 8),5,&(*(undefined4 *)(gen_frame + 0xc0)));
      *(undefined4 *)(this + 0x684) = 0;
      puVar15 = &(*(uint *)(gen_frame + 0xe8));
      iVar16 = 4;
      do {
        puVar15 = puVar15 + -2;
        F_005a2670(puVar15);
        iVar16 = iVar16 + -1;
      } while (-1 < iVar16);
      *(undefined1 *)(param_1 + 1) = 1;
      break;
    case 0x14: ;
      if (((0 < param_3) && ((*param_2 & 0xf) != 0)) && (*(int *)(param_2 + 4) == -2))
      goto LAB_00900e1f;
      *(undefined4 *)(this + 0x684) = 0;
      this[0x68c] = this[0x68d];
      this[0x6cf] = (undefined1)0x0;
      *(undefined4 *)(this + 0x6a8) = 0;
      *(undefined4 *)(this + 0x6ac) = 0;
      *(undefined1 *)(param_1 + 1) = 1;
      break;
    case 0x15: ;
      if ((param_3 < 1) || (((*param_2 & 0xf) != 0 && (*(int *)(param_2 + 4) != 0)))) {
        this[0x68f] = (undefined1)0x9;
        this[0x6cb] = (undefined1)0x0;
        *(undefined4 *)(this + 0x684) = 0;
        *(undefined1 *)(param_1 + 1) = 1;
      }
      else {
        F_008b06d0(this);
        *(undefined4 *)(this + 0x684) = 0;
        *(undefined1 *)(param_1 + 1) = 1;
      }
      break;
    case 0x16: ;
      uVar21 = 0;
      uVar27 = 1;
      uVar20 = 10;
      uVar12 = 0;
      pvVar9 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
      F_00820b30(pvVar9,uVar12,uVar20,(int)uVar27,(int)((ulonglong)uVar27 >> 0x20),uVar21);
      this[0x68c] = this[0x68d];
      *(undefined1 *)(param_1 + 1) = 1;
    }
    goto LAB_00900a69;
  }
  if ((*param_2 & 0xf) == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = *(uint *)(param_2 + 4);
    if (0x66 < uVar14) goto switchD_009007db_caseD_9;
  }
                    
                    
  switch((unsigned int)(uintptr_t)((&REFG(undefined1, 0x90171c))[uVar14])) {
  case 0: ;
    bVar4 = F_00414f10(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x10));
    if (bVar4 != 0) goto LAB_00900795;
    F_00883580(this);
    *(undefined1 *)(param_1 + 1) = 1;
    goto LAB_00900a69;
  case 1: ;
    if (6 < *(int *)(this + 0x250)) {
      piVar8 = (int *)F_00783840(this + 0x18);
      if ((piVar8 == (int *)0x0) || ((uint)(piVar8[1] - *piVar8 >> 2) < 2)) {
        this[0x670] = (undefined1)0x0;
        this[0x68c] = (undefined1)0x7;
        this[0x68f] = (undefined1)0xb;
      }
      else if (*(int *)(this + 0x684) == 0) {
        F_00882be0(this,piVar8);
        this[0x68f] = (undefined1)0xa;
      }
    }
    break;
  case 2: ;
    F_00882820(this,1);
    *(undefined1 *)(param_1 + 1) = 1;
    goto LAB_00900a69;
  case 3: ;
    bVar4 = F_00414f10(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x10));
    if (bVar4 == 0) {
      F_007e4f40(this);
      F_007e6500(REFG(void * PTR32, 0x148a454),0);
      this[0x68f] = (undefined1)0xd;
      *(undefined1 *)(param_1 + 1) = 1;
    }
    else {
      this[0x68f] = (undefined1)0xf;
      *(undefined1 *)(param_1 + 1) = 1;
    }
    goto LAB_00900a69;
  case 4: ;
    if (1 < param_3) {
      if (((*(uint *)(param_2 + 8) & 0xf) == 0) || (-1 < *(int *)(param_2 + 0xc))) {
        if ((*(uint *)(param_2 + 8) & 0xf) == 0) {
          AVar2 = (undefined1)0x0;
        }
        else {
          AVar2 = SUB41(*(undefined4 *)(param_2 + 0xc),0);
        }
LAB_00900a5f: ;
        this[0x6bd] = AVar2;
      }
      else {
        this[0x6bd] = (undefined1)0xfe;
      }
    }
    break;
  case 5: ;
    F_007e4a80(this,param_1);
    goto LAB_00900a6f;
  case 6: ;
    if (2 < param_3) {
      if ((param_2[8] & 0xf) == 0) {
        (*(int *)(gen_frame + 0x8)) = 0;
      }
      else {
        (*(int *)(gen_frame + 0x8)) = *(int *)(param_2 + 0xc);
      }
      if ((char)this[0x680] < '\0') {
        this[0x680] = SUB41((*(int *)(gen_frame + 0x8)),0);
      }
      if ((char)this[0x680] == (*(int *)(gen_frame + 0x8))) {
        if ((param_2[0x10] & 0xf) == 0) {
          iVar16 = 0;
        }
        else {
          iVar16 = *(int *)(param_2 + 0x14);
        }
        if (iVar16 != *(short *)(this + 0x682)) {
          *(short *)(this + 0x682) = (short)iVar16;
        }
        F_008ed1a0(this,(int)(char)this[0x680],(int)*(short *)(this + 0x682));
        if ((char)this[0x671] < '\0') {
          F_008e1c70(this,0);
        }
        F_008e1790(this,(*(int *)(gen_frame + 0x8)),iVar16,(int)(char)this[0x671]);
        this[0x6bd] = (undefined1)((char)this[0x671] + 'd');
      }
    }
    break;
  case 7: ;
    if (2 < param_3) {
      if ((param_2[8] & 0xf) == 0) {
        (*(int *)(gen_frame + 0x8)) = 0;
      }
      else {
        (*(int *)(gen_frame + 0x8)) = *(int *)(param_2 + 0xc);
      }
      if ((param_2[0x10] & 0xf) == 0) {
        iVar16 = 0;
      }
      else {
        iVar16 = *(int *)(param_2 + 0x14);
      }
      if (((*(int *)(gen_frame + 0x8)) != (char)this[0x680]) || (iVar16 != *(short *)(this + 0x682))) {
        this[0x680] = (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x8)) + 0));
        *(short *)(this + 0x682) = (short)iVar16;
        F_008ed1a0(this,(int)(char)(*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x8)) + 0)),(int)(short)iVar16);
      }
      if (-1 < (char)this[0x671]) {
        F_008e1790(this,(*(int *)(gen_frame + 0x8)),iVar16,(int)(char)this[0x671]);
        AVar2 = (undefined1)((char)this[0x671] + 'd');
        goto LAB_00900a5f;
      }
    }
    break;
  case 8: ;
    if (2 < param_3) {
      if ((param_2[8] & 0xf) == 0) {
        iVar16 = 0;
      }
      else {
        iVar16 = *(int *)(param_2 + 0xc);
      }
      if ((param_2[0x10] & 0xf) == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(param_2 + 0x14);
      }
      if ((iVar16 != (char)this[0x680]) || (iVar7 != *(short *)(this + 0x682))) {
        *(short *)(this + 0x682) = (short)iVar7;
        this[0x680] = SUB41(iVar16,0);
        F_008ed1a0(this,(int)(char)SUB41(iVar16,0),(int)(short)iVar7);
      }
      F_008e1600(this);
    }
    break;
  case 10: ;
    F_00781c20(this);
    F_007e6500(REFG(void * PTR32, 0x148a454),0);
    this[0x68f] = (undefined1)0xe;
    F_007e4f40(this);
    *(undefined1 *)(param_1 + 1) = 1;
    goto LAB_00900a69;
  case 0xb: ;
    F_00781c20(this);
    F_008b0700(this);
    this[0x68f] = (undefined1)0x8;
    F_007e4f40(this);
    *(undefined1 *)(param_1 + 1) = 1;
    goto LAB_00900a69;
  case 0xc: ;
    if (2 < param_3) {
      if (((param_2[8] & 0xf) == 0) || (*(int *)(param_2 + 0xc) == 0)) {
        if ((param_2[0x10] & 0xf) == 0) {
          AVar2 = (undefined1)0x0;
        }
        else {
          AVar2 = SUB41(*(undefined4 *)(param_2 + 0x14),0);
        }
        this[0x6bd] = AVar2;
        if ((char)AVar2 < '\0') {
          F_008a2540(this);
        }
        else {
          F_008e1c70(this,(int)(char)AVar2);
          F_008ea800(this,(int)(char)AVar2);
        }
      }
      else if (*(int *)(param_2 + 0xc) == 1) {
        if ((param_2[0x10] & 0xf) == 0) {
          cVar3 = '\0';
        }
        else {
          cVar3 = (char)*(undefined4 *)(param_2 + 0x14);
        }
        F_008e1c70(this,(int)cVar3);
        piVar8 = (int *)F_008d7bf0(this + 0x18,(int)(char)this[0x680],
                                     (int)*(short *)(this + 0x682),(int)cVar3);
        if ((piVar8 == (int *)0x0) || ((*piVar8 != 0 && (*piVar8 == -0x1a)))) {
          *(undefined4 *)(this + 0x6c0) = 0;
          *(undefined4 *)(this + 0x6c4) = 0;
        }
        else {
          uVar18 = F_0090c230(piVar8);
          *(ulonglong *)(this + 0x6c0) = uVar18;
          uVar14 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
          pvVar9 = *(undefined * PTR32 *)(uVar14 + 0x24);
          F_00769610(pvVar9);
          if ((*piVar8 != 0) && (bVar4 = F_00e3be70(*piVar8), bVar4 != 0)) {
            uVar20 = 0;
            uVar12 = 6;
            pAVar19 = this;
            uVar14 = F_00781590(this,0x17);
            F_00769650(pvVar9,uVar14,pAVar19,uVar12,uVar20);
          }
          if (((uint)piVar8[4] >> 2 & 1) != 0) {
            uVar20 = 0;
            uVar12 = 9;
            pAVar19 = this;
            uVar14 = F_00781590(this,0x4f);
            F_00769650(pvVar9,uVar14,pAVar19,uVar12,uVar20);
          }
          uVar20 = 0;
          uVar12 = 4;
          pAVar19 = this;
          uVar14 = F_00781590(this,0x14);
          F_00769650(pvVar9,uVar14,pAVar19,uVar12,uVar20);
          F_00869700(pvVar9,*(undefined4 *)(this + 8));
        }
      }
    }
    break;
  case 0xd: ;
    *(undefined2 *)(this + 0x68c) = 0;
    this[0x68f] = (undefined1)0x13;
    F_0049b7d0(*(undefined4 *)(REFG(int, 0x137104c) + 0x25f4),1,fVar1,REFG(undefined4, 0x1302e44),REFG(undefined4, 0x1302e48),
                 REFG(undefined4, 0x1302e4c),REFG(undefined4, 0x1302e50));
    F_007e4f40(this);
    *(undefined1 *)(param_1 + 1) = 1;
    goto LAB_00900a69;
  case 0xe: ;
    if (param_3 < 2) break;
    if ((param_2[8] & 0xf) == 0) {
      F_008f92c0(this,0);
      *(undefined1 *)(param_1 + 1) = 1;
    }
    else {
      F_008f92c0(this,*(undefined4 *)(param_2 + 0xc));
      *(undefined1 *)(param_1 + 1) = 1;
    }
    goto LAB_00900a69;
  case 0xf: ;
    if (2 < param_3) {
      if ((param_2[8] & 0xf) == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(undefined4 *)(param_2 + 0xc);
      }
      if ((param_2[0x10] & 0xf) == 0) {
        (*(undefined1 * PTR32 *)(gen_frame + 0x4)) = (undefined1 *)0x0;
      }
      else {
        (*(undefined1 * PTR32 *)(gen_frame + 0x4)) = *(undefined1 * PTR32 *)(param_2 + 0x14);
      }
      uVar14 = F_00ab3660(uVar12);
      if (uVar14 == 0) {
        iVar16 = 0;
      }
      else {
        iVar16 = *(int *)(uVar14 + 0x38);
      }
      piVar8 = *(int * PTR32 *)(this + 4);
      iVar7 = iVar16;
      uVar14 = F_00781590(this,0x49);
      pvVar9 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 0x18))(piVar8)));
      uVar14 = F_00460270(pvVar9,uVar14,iVar7,(*(undefined1 * PTR32 *)(gen_frame + 0x4)));
      uVar12 = *(undefined4 *)(this + 8);
      uVar28 = 0;
      uVar27 = 1;
      uVar26 = 1;
      uVar24 = 0;
      uVar23 = 0;
      uVar22 = 0;
      uVar21 = 4;
      uVar20 = 0;
      uVar17 = iVar16 << 0x10 | 0xe;
      piVar8 = *(int * PTR32 *)(this + 4);
      pAVar19 = this;
      uVar10 = F_00781590(this,0x4b);
      uVar11 = F_00781590(this,0x4a);
      pvVar9 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 0x1c))(piVar8)));
      uVar14 = F_00866a60(pvVar9,uVar14,uVar11,uVar10,pAVar19,uVar17,uVar20,uVar12,uVar21,uVar22,
                            uVar23,uVar24,uVar26,(int)uVar27,(int)((ulonglong)uVar27 >> 0x20),uVar28
                           );
      *(uint *)(this + 0x684) = uVar14;
    }
    break;
  case 0x10: ;
    this[0x68f] = (undefined1)0xf;
    break;
  case 0x11: ;
    if (1 < param_3) {
      if ((param_2[8] & 0xf) == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(undefined4 *)(param_2 + 0xc);
      }
      uVar14 = F_00ab3660(uVar12);
      if (uVar14 == 0) {
        F_00782910(0);
      }
      else {
        F_00782910(*(undefined4 *)(uVar14 + 0x38));
      }
    }
    break;
  case 0x12: ;
    if (param_3 < 2) break;
    *(undefined1 *)(param_1 + 1) = 1;
    goto LAB_00900a69;
  case 0x13: ;
    if (1 < param_3) {
      if (((*(uint *)(param_2 + 8) & 0xf) == 0) || (-1 < *(int *)(param_2 + 0xc))) {
        if ((*(uint *)(param_2 + 8) & 0xf) == 0) {
          uVar14 = 0;
        }
        else {
          uVar14 = *(uint *)(param_2 + 0xc);
        }
        uVar14 = uVar14 & 0xffff;
        goto LAB_00900e0e;
      }
      goto switchD_00900e90_caseD_b;
    }
    goto LAB_00900e1f;
  }
switchD_009007db_caseD_9: ;
  *(undefined1 *)(param_1 + 1) = 0;
LAB_00900a69: ;
  *param_1 = 2;
LAB_00900a6f: ;
  F_00c47745((*(uint *)(gen_frame + 0xe8)) ^ (uint)(uint)(gen_frame + 0xec));
  return (uint)param_1;
}

/* ref: Client::UI2::Agent::AgentCharaRemake::vf26 */
uint F_00901800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x901800u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  uint uVar2;
  
  F_008fff40((undefined *)this,param_1,param_2,param_3);
  if (((byte)this[0x1dc4] & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(this + 0x1dc8);
  }
  if (this[0x1fa8] == (undefined1)0x2) {
    uVar2 = uVar2 | 0xc00;
  }
  uVar1 = F_005a2710(this + 0x1dc4,3);
  *(uint *)(this + 0x1dc8) = uVar2;
  return uVar1;
}

/* ref: Client::UI2::Agent::LobbyUIClient::vf20 */
uint F_00901860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x901860u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  F_008be320(this,*(undefined4 *)(this + 0x14));
  iVar1 = *(int *)(this + 4);
  *(undefined2 *)(iVar1 + 0x250) = 0;
  iVar2 = *(int *)(iVar1 + 0x240);
  if (iVar2 != *(int *)(iVar1 + 0x244)) {
    F_00c46e20(iVar2,*(int *)(iVar1 + 0x244),0);
    *(int *)(iVar1 + 0x244) = iVar2;
  }
  *(undefined4 *)(this + 0xfc) = 0x11;
  puVar3 = *(undefined4 * PTR32 *)(this + 4);
  puVar3[0x8e] = 0x12;
  uVar4 = F_008f9880((undefined *)*puVar3,param_1);
  return uVar4;
}

/* ref: Client::UI2::Agent::LobbyUIClient::OnCharaSheetsLoaded */
uint F_009018e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9018e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  int * piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 * puVar7;
  undefined * pLVar8;
  uint uVar9;
  
  piVar2 = *(int * PTR32 *)(this + 0x14);
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = this;
  pLVar8 = this;
  if ((piVar2 != (int *)0x0) && (piVar2[1] - *piVar2 >> 2 == param_2)) {
    F_009542b0(this + 0xec);
    uVar9 = 0;
    if (param_2 != 0) {
      do {
        iVar3 = *((int *)GEN_TOP((*(int *)(param_1 + uVar9 * 4) + 4)));
        if ((iVar3 == 0) || (cVar1 = *(char *)(iVar3 + 0xa8), cVar1 == '\0')) {
          piVar2 = *(int * PTR32 *)(pLVar8 + 0x14);
          if ((piVar2 != (int *)0x0) && (uVar9 < (uint)(piVar2[1] - *piVar2 >> 2))) {
            if ((uint)(piVar2[1] - *piVar2 >> 2) <= uVar9) goto LAB_00901a48;
            iVar3 = *(int *)(*piVar2 + uVar9 * 4);
            if ((iVar3 != 0) && (uVar6 = F_00e3be40(iVar3), uVar6 != 0)) {
              (*(char *)(gen_frame + 0x1b)) = *(char *)(uVar6 + 0x50);
              goto LAB_0090197f;
            }
          }
          (*(char *)(gen_frame + 0x1b)) = '\0';
        }
        else {
          (*(char *)(gen_frame + 0x1b)) = cVar1;
        }
LAB_0090197f: ;
        iVar3 = **(int * PTR32 *)(pLVar8 + 0x14);
        if ((uint)((*(int * PTR32 *)(pLVar8 + 0x14))[1] - iVar3 >> 2) <= uVar9) {
LAB_00901a48: ;
                    
          F_00c457e7("invalid vector<T> subscript");
        }
        iVar3 = *(int *)(iVar3 + uVar9 * 4);
        uVar4 = *(undefined4 *)(iVar3 + 0xc);
        uVar5 = *(undefined4 *)(iVar3 + 8);
        puVar7 = (undefined4 *)F_004296a0(0x28,0,400);
        *puVar7 = *(undefined4 *)(this + 0xf0);
        puVar7[1] = *(undefined4 *)(this + 0xf0);
        puVar7[2] = *(undefined4 *)(this + 0xf0);
        *(undefined2 *)(puVar7 + 8) = 0;
        if (puVar7 + 4 != (undefined4 *)0x0) {
          puVar7[5] = uVar4;
          puVar7[4] = uVar5;
          *(char *)(puVar7 + 6) = (*(char *)(gen_frame + 0x1b));
        }
        F_00956da0(this + 0xec,((undefined1 *)(gen_frame + 0xc)),puVar7,0);
        uVar9 = uVar9 + 1;
        pLVar8 = (*(undefined * PTR32 *)(gen_frame + 0x14));
      } while (uVar9 < param_2);
    }
  }
  puVar7 = *(undefined4 * PTR32 *)(pLVar8 + 0x110);
  if (puVar7 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar7)(puVar7,1);
    *(undefined4 *)(pLVar8 + 0x110) = 0;
  }
  if (*(int *)(pLVar8 + 0xfc) != 8) {
    puVar7 = *(undefined4 * PTR32 *)(pLVar8 + 4);
    *(undefined4 *)(pLVar8 + 0xfc) = 0xd;
    uVar9 = F_008f9730((undefined *)*puVar7,*(undefined4 *)(pLVar8 + 0x108),pLVar8 + 0x9c,pLVar8 + 0x18
                         ,*(undefined4 *)(pLVar8 + 0x28),*(undefined4 *)(pLVar8 + 0x104));
    puVar7[0x8e] = 0xe;
    return uVar9;
  }
  *(undefined4 *)(pLVar8 + 0xfc) = 10;
  uVar9 = F_008ed740(*(undefined * PTR32 *)(pLVar8 + 4),pLVar8,pLVar8 + 0x9c,pLVar8 + 0x18,
                       *(undefined4 *)(pLVar8 + 0x28));
  return uVar9;
}

/* ref: Client::UI2::AddonCharaSelectNameInput::vf2 */
uint F_00901aa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x901aa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int * piVar1;
  uint uVar2;
  uint uVar3;
  undefined1 * this_00;
  int iVar4;
  ulonglong uVar5;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  uVar2 = param_1 & 0xffff;
  if (uVar2 == 6) {
    if (param_2 == *((ushort *)GEN_TOP((*(int *)(this + 0x39c) + 100)))) {
      uVar2 = F_008f99c0(this);
      F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
      return uVar2;
    }
  }
  else if (uVar2 == 0xc) {
    uVar2 = param_4[3];
    (*(int *)(gen_frame + 0xc)) = param_4[2];
    (*(uint *)(gen_frame + 0x10)) = uVar2;
    if (((char)param_4[1] == '\0') && ((*param_4 == 2 || (*param_4 == 3)))) {
      piVar1 = *(int * PTR32 *)(this + 0x398);
      uVar2 = F_0055dcb0();
      uVar2 = F_0055b9e0(uVar2);
      uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1);
      if (uVar2 == uVar3) {
        uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,0,0);
        F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
        return uVar2;
      }
      F_0059b390(this,*(undefined4 *)(this + 0x398),1,0);
      uVar2 = F_00557670(param_3,0);
      F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
      return uVar2;
    }
  }
  else if (uVar2 == 0x17) {
    if (param_2 == *((ushort *)GEN_TOP((*(int *)(this + 0x398) + 100)))) {
      F_00557670(param_3,0);
      F_0042b630(((undefined1 *)(gen_frame + 0x14)));
      if (this[0x3a3] == (undefined1)0x0) {
        uVar2 = F_0042a990(this + 0x180);
        F_0042e430(((undefined1 *)(gen_frame + 0x14)),uVar2);
        F_0042e370(((undefined1 *)(gen_frame + 0x14)),&REFG(undefined, 0x10c342c));
        uVar2 = F_0042a990(this + 0x1d4);
        F_0042e370(((undefined1 *)(gen_frame + 0x14)),uVar2);
      }
      else {
        F_0042ccf0(((undefined1 *)(gen_frame + 0x14)),this + 0x324);
      }
      (*(undefined4 *)(gen_frame + 0x4)) = 3;
      (*(undefined4 *)(gen_frame + 0x8)) = 0xf;
      uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x14)));
      (*(uint *)(gen_frame + 0x10)) = uVar2;
      (*(int *)(gen_frame + 0xc)) = 6;
      F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0x4)));
      this_00 = ((undefined1 *)(gen_frame + 0x14));
      iVar4 = 1;
      do {
        this_00 = this_00 + -8;
        F_005a2670(this_00);
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
      uVar5 = F_0042c880(((undefined1 *)(gen_frame + 0x14)));
      uVar2 = (uint)uVar5;
    }
    else {
      uVar2 = param_2;
      if (param_2 == *((ushort *)GEN_TOP((*(int *)(this + 0x39c) + 100)))) {
        uVar2 = F_0085f0d0(this);
        F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
        return uVar2;
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return uVar2;
}

/* ref: FUN_00901c90 */
uint F_00901c90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x901c90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_008f9b70(this,0,param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00901cb0 */
uint F_00901cb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x901cb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_008f9b70(this,1,param_1,param_2,param_3);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeCharaName::vf2 */
uint F_00901cd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x901cd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int iVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar4 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  ((byte *)(gen_frame + 0x4))[100] = (char)uVar4;
  ((byte *)(gen_frame + 0x4))[0x65] = (char)(uVar4 >> 8);
  ((byte *)(gen_frame + 0x4))[0x66] = (char)(uVar4 >> 0x10);
  ((byte *)(gen_frame + 0x4))[0x67] = (char)(uVar4 >> 0x18);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 12)) = param_3;
  if ((((*(undefined * PTR32 *)(this + 0x180) != (undefined *)0x0) && (((byte)this[0xf9] & 1) != 0)) &&
      (uVar4 = *(uint *)(this + 0xf4) >> 0x14 & 0xf, uVar4 != 5)) && (uVar4 != 4)) {
    uVar5 = param_1 & 0xffff;
    uVar4 = uVar5 - 6;
    if (uVar4 < 0x12) {
      uVar4 = (uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x901f08) + uVar5 + 2)));
      switch((unsigned int)(uintptr_t)(uVar5)) {
      case 6: ;
        uVar4 = *(uint *)(this + 0x2a4);
        if (param_2 == *(ushort *)(uVar4 + 100)) {
          uVar4 = F_008f9f10(this);
          F_00c47745((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 100)) ^ (uint)(uint)(gen_frame + 0x6c));
          return uVar4;
        }
        break;
      case 0xc: ;
        iVar1 = param_4[1];
        iVar2 = *param_4;
        (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 0)) = param_4[2];
        (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)) = param_4[3];
        if (((char)iVar1 == '\0') && (iVar2 == 2)) {
          piVar3 = *(int * PTR32 *)(this + 0x2a0);
          uVar4 = F_0055dcb0();
          uVar4 = F_0055b9e0(uVar4);
          ((byte *)(gen_frame + 0x4))[8] = (char)uVar4;
          ((byte *)(gen_frame + 0x4))[9] = (char)(uVar4 >> 8);
          ((byte *)(gen_frame + 0x4))[10] = (char)(uVar4 >> 0x10);
          ((byte *)(gen_frame + 0x4))[0xb] = (char)(uVar4 >> 0x18);
          uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x3c))(piVar3);
          if ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) != uVar4) {
            F_0059b390(this,*(undefined4 *)(this + 0x2a0),1,0);
            uVar4 = F_00557670((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 12)),0);
            break;
          }
        }
        uVar4 = F_008a99b0(*(undefined * PTR32 *)(this + 0x180),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 12)),param_4,0xffffffff);
        F_00c47745((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 100)) ^ (uint)(uint)(gen_frame + 0x6c));
        return uVar4;
      case 0xf: ;
        uVar4 = F_0081c250(*(undefined * PTR32 *)(this + 0x180),param_3,param_4);
        F_00c47745((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 100)) ^ (uint)(uint)(gen_frame + 0x6c));
        return uVar4;
      case 0x17: ;
        if (param_2 == *((ushort *)GEN_TOP((*(int *)(this + 0x2a0) + 100)))) {
          F_0042b630(((byte *)(gen_frame + 0x4)) + 0x10);
          if (this[0x2ad] == (undefined1)0x0) {
            uVar4 = F_0042a990(*(int *)(this + 0x28c) + 0x9c);
            F_0042e430(((byte *)(gen_frame + 0x4)) + 0x10,uVar4);
            F_0042e370(((byte *)(gen_frame + 0x4)) + 0x10,&REFG(undefined, 0x10c3660));
            uVar4 = F_0042a990(*(int *)(this + 0x290) + 0x9c);
            F_0042e370(((byte *)(gen_frame + 0x4)) + 0x10,uVar4);
          }
          else {
            uVar4 = F_0042a990(*(int *)(this + 0x294) + 0x9c);
            F_0042e430(((byte *)(gen_frame + 0x4)) + 0x10,uVar4);
          }
          uVar4 = F_0042a990(((byte *)(gen_frame + 0x4)) + 0x10);
          F_00896ac0(*(undefined * PTR32 *)(this + 0x180),1,0,0,uVar4);
          uVar6 = F_0042c880(((byte *)(gen_frame + 0x4)) + 0x10);
          F_00c47745((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 100)) ^ (uint)(uint)(gen_frame + 0x6c));
          return (uint)uVar6;
        }
        uVar4 = param_2;
        if (param_2 == *((ushort *)GEN_TOP((*(int *)(this + 0x2a4) + 100)))) {
          uVar4 = F_0085fa00(this);
          F_00c47745((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 100)) ^ (uint)(uint)(gen_frame + 0x6c));
          return uVar4;
        }
      }
    }
  }
  F_00c47745((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 100)) ^ (uint)(uint)(gen_frame + 0x6c));
  return uVar4;
}

/* ref: Client::UI2::AddonCharaMakeBirthDay::vf44 */
uint F_009024b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9024b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  uint uVar1;
  uint uVar2;
  undefined * pvVar3;
  uint * puVar4;
  char * pcVar5;
  undefined * pvVar6;
  int iVar7;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  uVar1 = F_0055e2f0(this,3);
  if (((uVar1 == 0) || (uVar1 = F_00559c20(uVar1), uVar1 == 0)) ||
     (uVar2 = F_005613a0(uVar1), uVar2 != 10)) {
    uVar1 = 0;
  }
  *(uint *)(this + 0x208) = uVar1;
  uVar1 = F_0055e2f0(this,0x27);
  if (((uVar1 == 0) || (uVar1 = F_00559c20(uVar1), uVar1 == 0)) ||
     (uVar2 = F_005613a0(uVar1), uVar2 != 1)) {
    uVar1 = 0;
  }
  *(uint *)(this + 0x20c) = uVar1;
  F_00568380(*(undefined * PTR32 *)(uVar1 + 0x70),0xc,(uint)*(ushort *)(uVar1 + 100),this,0,0);
  uVar1 = F_0055e2f0(this,0x28);
  if (((uVar1 == 0) || (uVar1 = F_00559c20(uVar1), uVar1 == 0)) ||
     (uVar2 = F_005613a0(uVar1), uVar2 != 1)) {
    uVar1 = 0;
  }
  *(uint *)(this + 0x210) = uVar1;
  F_00568380(*(undefined * PTR32 *)(uVar1 + 0x70),0xc,(uint)*(ushort *)(uVar1 + 100),this,0,0);
  pvVar3 = (undefined *)F_0055e340(this,2);
  puVar4 = (uint *)F_00ab36c0(0x7a2);
  if (puVar4 == (uint *)0x0) {
    pcVar5 = "";
  }
  else {
    pcVar5 = ((char *)GEN_TOP(((*puVar4 & 0xffffff) + (int)puVar4)));
  }
  F_00584110(pvVar3,pcVar5);
  uVar1 = *(uint *)(param_2 + 0x100) & 0xf;
  if (uVar1 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)(param_2 + 0x104);
  }
  (*(int *)(gen_frame + 0x20)) = iVar7 / 100;
  iVar7 = 0;
  if (uVar1 != 0) {
    iVar7 = *(int *)(param_2 + 0x104);
  }
  *(int *)(this + 0x21c) = iVar7 % 100;
  iVar7 = 2;
  do {
    uVar1 = F_0055e2f0(this,iVar7 + 3);
    if (((uVar1 == 0) || (pvVar3 = (undefined *)F_00559c20(uVar1), pvVar3 == (undefined *)0x0)) ||
       (uVar1 = F_005613a0(pvVar3), uVar1 != 4)) {
      pvVar3 = (undefined *)0x0;
    }
    F_0042ce40(((undefined1 *)(gen_frame + 0x24)),&REFG(undefined, 0x10c36e4),iVar7 + -1);
    uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0x24)));
    F_00589280(pvVar3,uVar1);
    if (pvVar3 == (undefined *)0x0) {
      pvVar6 = (undefined *)0x0;
    }
    else {
      pvVar6 = *(undefined * PTR32 *)((int)pvVar3 + 0x70);
    }
    F_00568380(pvVar6,0x17,iVar7,this,0,0);
    if (pvVar3 == (undefined *)0x0) {
      pvVar6 = (undefined *)0x0;
    }
    else {
      pvVar6 = *(undefined * PTR32 *)((int)pvVar3 + 0x70);
    }
    F_00568380(pvVar6,6,iVar7,this,0,0);
    if (pvVar3 == (undefined *)0x0) {
      pvVar6 = (undefined *)0x0;
    }
    else {
      pvVar6 = *(undefined * PTR32 *)((int)pvVar3 + 0x70);
    }
    F_00568380(pvVar6,7,iVar7,this,0,0);
    *(undefined1 *)((int)pvVar3 + 0x136) = 1;
    if (iVar7 + -2 == *(int *)(this + 0x21c)) {
      F_0059dde0(pvVar3,1);
    }
    F_0042c880(((undefined1 *)(gen_frame + 0x24)));
    uVar1 = iVar7 - 1;
    iVar7 = iVar7 + 1;
  } while (uVar1 < 0x20);
  iVar7 = *(int *)(this + 0x208);
  if (iVar7 != 0) {
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 2;
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
    (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)REFP(0x7c4be0));
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_00574320(*(undefined * PTR32 *)(iVar7 + 0x88),&(*(undefined * PTR32 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x14)),1,0);
    F_0059ead0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x208) + 0x88))),0xc,0,1);
    if (*((int *)GEN_TOP((*(int *)(this + 0x208) + 0x88))) == 0) {
      pvVar3 = (undefined *)0x0;
    }
    else {
      pvVar3 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x208) + 0x88))) + 0x70)));
    }
    F_00568380(pvVar3,0x23,0,this,0,0);
    F_0059caa0(*(undefined * PTR32 *)(this + 0x208),(*(int *)(gen_frame + 0x20)));
    uVar1 = F_00561490(*(undefined * PTR32 *)(this + 0x208),3);
    *(uint *)(this + 0x98) = uVar1;
  }
  if (*(int *)(this + 0x20c) == 0) {
    pvVar3 = (undefined *)0x0;
  }
  else {
    pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x20c) + 0x70)));
  }
  F_00568380(pvVar3,0x17,0,this,0,0);
  if (*(int *)(this + 0x210) == 0) {
    pvVar3 = (undefined *)0x0;
  }
  else {
    pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x210) + 0x70)));
  }
  F_00568380(pvVar3,0x17,1,this,0,0);
  uVar1 = F_0055e340(this,0x25);
  *(uint *)(this + 0x214) = uVar1;
  uVar1 = F_0055e340(this,0x26);
  *(uint *)(this + 0x218) = uVar1;
  F_008fa600(this,(*(int *)(gen_frame + 0x20)),*(undefined4 *)(this + 0x21c));
  F_0055e1c0(this,*(float *)&REFG(undefined, 0x109feac),0x32,0,(float)(float10)1,1);
  F_0055e220(this,*(float *)&REFG(undefined, 0x109feac),0x32,0,(float)(float10)1,1);
  *(undefined4 *)(this + 0xa0) = 0;
  uVar1 = F_005b0610(this,1,1,0);
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeBirthDay::vf2 */
unsigned int F_00902840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x902840u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  undefined * this_00;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  char * pcVar4;
  undefined4 uVar5;
  
  this_00 = *(undefined * PTR32 *)(this + 0x180);
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  uVar1 = *(uint *)(this + 0xf4) >> 0x14 & 0xf;
  if (uVar1 == 5) {
    return 0;
  }
  if (uVar1 == 4) {
    return 0;
  }
  switch((unsigned int)(uintptr_t)((undefined2)param_1)) {
  case 6: ;
    iVar2 = param_2 - 2;
    goto LAB_0090295e;
  case 7: ;
    iVar2 = *(int *)(this + 0x21c);
LAB_0090295e: ;
    uVar1 = F_00562c60(*(undefined4 *)(this + 0x208));
    F_008fa600(this,uVar1,iVar2);
    return 0;
  case 0xc: ;
    if ((param_2 != *((ushort *)GEN_TOP((*(int *)(this + 0x20c) + 100)))) &&
       (param_2 != *((ushort *)GEN_TOP((*(int *)(this + 0x210) + 100))))) {
      F_008a99b0(this_00,param_3,param_4,0xffffffff);
      return 0;
    }
    uVar1 = F_00557620(param_4);
    if ((char)uVar1 != '\0') {
      uVar5 = 0;
      uVar3 = 1;
      uVar1 = F_00860cb0(this);
      F_0059b390(this,uVar1,uVar3,uVar5);
      F_00557670(param_3,0);
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x210) + 0x34))))(*(int * PTR32 *)(this + 0x210));
      return 0;
    }
    break;
  case 0xf: ;
    F_0081c250(this_00,param_3,param_4);
    break;
  case 0x17: ;
    if (param_2 == 0) {
      uVar3 = *(undefined4 *)(this + 0x21c);
      pcVar4 = "";
      uVar1 = F_00562c60(*(undefined4 *)(this + 0x208));
      F_00896ac0(*(undefined * PTR32 *)(this + 0x180),1,uVar1,uVar3,pcVar4);
      return 0;
    }
    if (param_2 == 1) {
      F_00896ac0(this_00,0xffffffff,0,0,"");
      return 0;
    }
    iVar2 = param_2 - 2;
    pcVar4 = "";
    *(int *)(this + 0x21c) = iVar2;
    uVar1 = F_00562c60(*(undefined4 *)(this + 0x208));
    F_00896ac0(*(undefined * PTR32 *)(this + 0x180),0,uVar1,iVar2,pcVar4);
    uVar3 = *(undefined4 *)(this + 0x21c);
    uVar1 = F_00562c60(*(undefined4 *)(this + 0x208));
    F_008fa600(this,uVar1,uVar3);
    if ((*(byte *)(param_4 + 7) & 8) != 0) {
      F_0059b390(this,*(undefined4 *)(this + 0x20c),1,0);
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x20c) + 0x34))))(*(int * PTR32 *)(this + 0x20c));
      return 0;
    }
    break;
  case 0x23: ;
    uVar3 = *(undefined4 *)(this + 0x21c);
    uVar1 = F_00562c60(*(undefined4 *)(this + 0x208));
    F_008fa600(this,uVar1,uVar3);
    uVar3 = *(undefined4 *)(this + 0x21c);
    pcVar4 = "";
    uVar1 = F_00562c60(*(undefined4 *)(this + 0x208));
    F_00896ac0(*(undefined * PTR32 *)(this + 0x180),0,uVar1,uVar3,pcVar4);
    return 0;
  }
  return 0;
}

/* ref: Client::UI2::AddonCharaMakeDataExport::vf44 */
uint F_00902a80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x902a80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined * pvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  (*(byte * PTR32 *)(gen_frame + 0x20)) = param_2;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1493be4) + 0x14))))(REFG(int * PTR32, 0x1493be4));
  uVar2 = F_0055e2f0(this,7);
  uVar6 = 0;
  if (uVar2 != 0) {
    uVar2 = F_00559c20(uVar2);
    (*(uint *)(gen_frame + 0x1c)) = uVar2;
    if ((uVar2 != 0) && (uVar3 = F_005613a0(uVar2), uVar2 = (*(uint *)(gen_frame + 0x1c)), uVar3 == 9))
    goto LAB_00902ada;
  }
  uVar2 = 0;
LAB_00902ada: ;
  *(uint *)(this + 0x180) = uVar2;
  if (uVar2 == 0) {
    pvVar4 = (undefined *)0x0;
  }
  else {
    pvVar4 = *(undefined * PTR32 *)(uVar2 + 0x70);
  }
  F_00568380(pvVar4,0x21,0,this,0,0);
  F_005624c0(*(undefined * PTR32 *)(this + 0x180),1,1,0);
  pvVar4 = *(undefined * PTR32 *)(this + 0x180);
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 2;
  (*(undefined4 *)(gen_frame + 0x30)) = 3;
  (*(undefined4 *)(gen_frame + 0x3c)) = 4;
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = this;
  (*(gen_code32 *)(gen_frame + 0x10)) = ((code *)REFP(0x8fadc0));
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  F_00574320(pvVar4,&(*(undefined * PTR32 *)(gen_frame + 0xc)),&(*(undefined4 *)(gen_frame + 0x24)),3,0);
  F_0059ead0(*(undefined * PTR32 *)(this + 0x180),uVar1,0,1);
  if (uVar1 != 0) {
    F_005623b0(*(undefined * PTR32 *)(this + 0x180),0);
  }
  F_0056d400(*(undefined * PTR32 *)(this + 0x180),1,0,0);
  if ((*(*(byte * PTR32 *)(gen_frame + 0x20)) & 0xf) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)((*(byte * PTR32 *)(gen_frame + 0x20)) + 4);
  }
  *(undefined4 *)(this + 0x1dc) = uVar5;
  if (((*(byte * PTR32 *)(gen_frame + 0x20))[8] & 0xf) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)((*(byte * PTR32 *)(gen_frame + 0x20)) + 0xc);
  }
  *(undefined4 *)(this + 0x1e0) = uVar5;
  if (((*(byte * PTR32 *)(gen_frame + 0x20))[0x10] & 0xf) != 0) {
    uVar6 = *(undefined4 *)((*(byte * PTR32 *)(gen_frame + 0x20)) + 0x14);
  }
  F_0042e430(this + 0x188,uVar6);
  pvVar4 = (undefined *)F_0055e340(this,2);
  uVar1 = F_00584580(pvVar4,1);
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeDataImport::vf44 */
uint F_00902bf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x902bf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined * pvVar4;
  undefined4 uVar5;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  uVar2 = F_0055e2f0(this,7);
  if (((uVar2 == 0) || (uVar2 = F_00559c20(uVar2), uVar2 == 0)) ||
     (uVar3 = F_005613a0(uVar2), uVar3 != 9)) {
    uVar2 = 0;
  }
  *(uint *)(this + 0x180) = uVar2;
  if (uVar2 == 0) {
    pvVar4 = (undefined *)0x0;
  }
  else {
    pvVar4 = *(undefined * PTR32 *)(uVar2 + 0x70);
  }
  F_00568380(pvVar4,0x21,0,this,0,0);
  F_005624c0(*(undefined * PTR32 *)(this + 0x180),1,1,0);
  iVar1 = REFG(int, 0x1493bd0);
  pvVar4 = *(undefined * PTR32 *)(this + 0x180);
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 4;
  (*(undefined4 *)(gen_frame + 0x24)) = 5;
  (*(undefined4 *)(gen_frame + 0x30)) = 6;
  (*(undefined4 *)(gen_frame + 0x3c)) = 2;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  (*(gen_code32 *)(gen_frame + 0xc)) = ((code *)REFP(0x8fb7a0));
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_00574320(pvVar4,&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x18)),4,0);
  F_0059ead0(*(undefined * PTR32 *)(this + 0x180),iVar1,0,1);
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = 0;
  }
  F_005623b0(*(undefined * PTR32 *)(this + 0x180),uVar5);
  F_0056d400(*(undefined * PTR32 *)(this + 0x180),1,0,0);
  pvVar4 = (undefined *)F_0055e340(this,2);
  uVar2 = F_00584580(pvVar4,1);
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar2;
}

/* ref: Client::UI2::AddonCharaMakeFeatureSlider::vf46 */
byte F_00902d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x902d20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 uVar2;
  undefined4 local_8;
  
  if (*(int *)(this + 400) == 0) {
    return 0;
  }
  uVar2 = 0;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x24))))(*(int * PTR32 *)(this + 0x180));
  F_0059dbe0(*(undefined * PTR32 *)(this + 0x18c),uVar1,uVar2);
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x24))))(*(int * PTR32 *)(this + 0x180));
  F_008fbe70(this,uVar1);
  local_8 = CONCAT31((int3)((uint)((int)(uintptr_t)this) >> 8),*((undefined1 *)GEN_TOP((*(int *)(this + 0x180) + 0x28))));
  if (*(int *)(this + 400) == 0) {
    F_0055a300((undefined *)0x0,local_8);
    return 1;
  }
  F_0055a300(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 400) + 0x70))),local_8);
  return 1;
}

/* ref: Client::UI2::AddonCharaMakeFeatureSlider::vf2 */
uint F_00902db0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x902db0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  uint uVar1;
  
  uVar1 = (uint)(ushort)param_1;
  if (uVar1 == 0xc) {
    uVar1 = *(uint *)(this + 400);
    if (param_2 == *(ushort *)(uVar1 + 100)) {
      uVar1 = F_00557620(param_4);
      if ((char)uVar1 != '\0') {
        F_0059b390(this,*(undefined4 *)(this + 0x18c),1,0);
        *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 0x200000;
        F_00557670(param_3,0);
        uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 400) + 0x34))))(*(int * PTR32 *)(this + 400));
      }
    }
  }
  else if (uVar1 == 0x17) {
    uVar1 = *(uint *)(this + 400);
    if ((param_2 == *(ushort *)(uVar1 + 100)) && ((ushort)param_1 == 0x17)) {
      uVar1 = F_00862b10(*(undefined * PTR32 *)(this + 0x180));
      return uVar1;
    }
  }
  else if (uVar1 == 0x1b) {
    F_008fbe70(this,*param_4);
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x3c))))(*(int * PTR32 *)(this + 0x180),*param_4);
    return uVar1;
  }
  return uVar1;
}

/* ref: FUN_00902e70 */
unsigned int F_00902e70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x902e70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  code * pcVar2;
  uint uVar3;
  
  if (param_1 != 0) {
    uVar3 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0x140);
    if (*(int *)(uVar3 + 0x14) != 0) {
      uVar3 = F_00ab3b40(param_1);
      if (uVar3 != 0) {
        if (*(char *)(uVar3 + 0x1a) != '\0') {
          F_008fe450(*(undefined * PTR32 *)((int)this + 0x23230),param_1);
          return 0;
        }
        piVar1 = *(int * PTR32 *)((int)this + 0x2322c);
        piVar1[7] = param_2;
        pcVar2 = *(gen_code32 *)(*piVar1 + 8);
        piVar1[6] = param_1;
        *(undefined1 *)(piVar1 + 8) = 0;
        (*pcVar2)(piVar1);
      }
    }
  }
  return 0;
}

/* ref: FUN_00902ee0 */
unsigned int F_00902ee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x902ee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  int iVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if (*(int *)((int)this + -4) != 0) {
    F_008fc390((undefined *)((int)this + -0xc),1,0);
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + -8) + 0x1c))))(*(int * PTR32 *)((int)this + -8))));
    iVar2 = *(int *)((int)this + 0x44) - *(int *)((int)this + 0x40) >> 3;
    if (iVar2 == 0) {
                    
      F_00c457e7("invalid vector<T> subscript");
    }
    ((code *)*(gen_code32 *)(*piVar1 + 0x5c))
              (piVar1,*(undefined4 *)((int)this + -4),iVar2,*(int *)((int)this + 0x40));
    F_00488040((undefined *)((int)this + 0x40),&(*(undefined * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)((int)this + 0x40),
                 *(undefined4 *)((int)this + 0x44));
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentConfigKey::vf1 */
uint F_00902f50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x902f50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined * pAVar4;
  uint uVar5;
  int * piVar6;
  int iVar7;
  undefined * pvVar8;
  undefined4 unaff_EBX = 0;
  undefined4 unaff_ESI = 0;
  undefined4 unaff_EDI = 0;
  undefined4 uVar9;
  uint * this_00;
  undefined1 AVar10;
  undefined1 * puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 * puVar16;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  (*(uint *)(gen_frame + 0x58)) = uVar3;
  (*(uint *)(gen_frame + 0xc)) = REFG(int, 0x137104c);
  if (REFG(int, 0x137104c) == 0) {
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 2;
    F_00c47745(uVar3 ^ (uint)(uint)(gen_frame + 0x5c));
    return (uint)param_1;
  }
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 3)) = 0;
  (*(uint *)(gen_frame + 0x14)) = (uint)(*((uint3 *)GEN_TOP((gen_frame + 0x14))));
  puVar16 = param_1;
  switch((unsigned int)(uintptr_t)(param_4)) {
  case 1: ;
    if ((*param_2 & 0xf) == 0) {
      iVar7 = 0;
LAB_00902fc1: ;
      if (this == (undefined *)0x0) {
        pAVar4 = (undefined *)0x0;
      }
      else {
        pAVar4 = this + 0xc;
      }
      F_00448810(*(undefined * PTR32 *)(this + 0x28),iVar7,pAVar4);
      this[0x34] = (undefined1)0x1;
      puVar16 = param_1;
    }
    else {
      iVar7 = *(int *)(param_2 + 4);
      if (-1 < iVar7) goto LAB_00902fc1;
    }
    if (this[0x37] != this[0x38]) {
      pvVar8 = (undefined *)F_00414500(*(undefined4 *)((*(uint *)(gen_frame + 0xc)) + 0x10),0x14c);
      F_00414c60(pvVar8);
    }
    *(undefined4 *)(this + 0x2c) = 0;
    break;
  case 2: ;
    if (((*param_2 & 0xf) == 0) || (*(int *)(param_2 + 4) == 0)) {
      uVar3 = F_00a34610(*(undefined * PTR32 *)(this + 0x28),(uint)(byte)this[0x158],(uint)(byte)this[0x159]);
      uVar5 = F_007691f0(this,uVar3 & 0xffff);
      puVar16 = param_1;
      if (-1 < (int)uVar5) {
        uVar3 = F_00a343f0(*(undefined4 *)(this + 0x28),uVar3 & 0xffff);
        F_007cd2d0(this,uVar3);
        puVar16 = param_1;
      }
      uVar3 = F_008f34f0(this,*(undefined4 *)(this + 0x150),*(undefined4 *)(this + 0x154),
                           (uint)(byte)this[0x158],(uint)(byte)this[0x159]);
      if (uVar3 != 0) {
        F_007cd2d0(this,uVar3);
      }
      F_008fc960(this,1,0);
    }
    this[0x15a] = (undefined1)0x0;
    *(undefined4 *)(this + 0x2c) = 0;
    break;
  case 3: ;
    if (((*param_2 & 0xf) == 0) || (*(int *)(param_2 + 4) == 0)) {
      if (this[0x37] != this[0x38]) {
        uVar3 = (uint)(byte)this[0x37];
        uVar13 = 1;
        pvVar8 = (undefined *)F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0x14c);
        F_00414a40(pvVar8,uVar3,uVar13);
        puVar16 = param_1;
      }
      F_008f38e0(this);
      this[0x34] = (undefined1)0x0;
      piVar6 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
      ((code *)*(gen_code32 *)(*piVar6 + 0x54))(piVar6,*(undefined4 *)(this + 8),0);
      uVar13 = 0x340;
      pvVar8 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x28))))(*(int * PTR32 *)(this + 4))));
      F_0046a630(pvVar8,uVar13);
    }
    *(undefined4 *)(this + 0x2c) = 0;
    break;
  case 4: ;
    bVar2 = *param_2;
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    if ((bVar2 & 0xf) == 0) {
      (*(uint *)(gen_frame + 0x10)) = 0;
    }
    else {
      (*(uint *)(gen_frame + 0x10)) = *(uint *)(param_2 + 4);
    }
    uVar3 = (int)(*(uint *)(gen_frame + 0x10)) >> 8;
    (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) & 0xff;
    (*(uint *)(gen_frame + 0xc)) = uVar3;
    F_005a2710((gen_frame + 0x4),2);
    uVar3 = *(uint *)&(*(undefined1 *)(gen_frame + 0x8));
    (*(undefined1 *)(gen_frame + 0x8)) = 0;
    *(uint *)&(*(undefined1 *)(gen_frame + 0x8)) = uVar3 & 0xffffff00;
    puVar16 = param_1;
    if (*(int *)(this + 0x3b4) == 0) {
      if (((((*(uint *)(gen_frame + 0x10)) == 0x10) || ((*(uint *)(gen_frame + 0x10)) == 0x12)) || ((*(uint *)(gen_frame + 0x10)) == 0x11)) ||
         ((0x8f < (int)(*(uint *)(gen_frame + 0x10)) && ((int)(*(uint *)(gen_frame + 0x10)) < 0x96)))) {
        if (((*(uint *)(gen_frame + 0xc)) & 2) == 0) {
          iVar7 = *(int *)(this + 0x150);
          if (*(int *)(this + 0x154) == 0) {
            if ((param_2[8] & 0xf) == 0) {
              uVar13 = 0;
              iVar7 = iVar7 * 3 + 1;
            }
            else {
              uVar13 = *(undefined4 *)(param_2 + 0xc);
              iVar7 = iVar7 * 3 + 1;
            }
          }
          else {
            if ((param_2[8] & 0xf) == 0) {
              uVar13 = 0;
            }
            else {
              uVar13 = *(undefined4 *)(param_2 + 0xc);
            }
            iVar7 = iVar7 * 3 + 2;
          }
          iVar1 = *(int *)(this + 0x3c);
          uVar3 = F_00769260(this,uVar13,0);
          F_0042ccf0((undefined *)(iVar7 * 0x54 + iVar1),uVar3);
          puVar16 = param_1;
        }
        else {
          uVar3 = F_00769220(this,*(undefined4 *)(this + 0x150));
          uVar3 = F_00a343f0(*(undefined4 *)(this + 0x28),uVar3);
          F_007cd2d0(this,uVar3);
          puVar16 = param_1;
        }
      }
      else {
        if (((*(uint *)(gen_frame + 0xc)) & 1) == 0) goto LAB_00903269;
        if ((param_2[8] & 0xf) == 0) {
          uVar13 = 0;
        }
        else {
          uVar13 = *(undefined4 *)(param_2 + 0xc);
        }
        if ((*param_2 & 0xf) == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = *(undefined4 *)(param_2 + 4);
        }
        uVar3 = F_008f34f0(this,*(undefined4 *)(this + 0x150),*(undefined4 *)(this + 0x154),uVar9,
                             uVar13);
        *(uint *)(this + 0x3b4) = uVar3;
        puVar16 = param_1;
        if (uVar3 == 0) goto LAB_00903269;
        F_007cd2d0(this,uVar3);
        puVar16 = param_1;
      }
    }
    else {
      if (((*(uint *)(gen_frame + 0x10)) != *((byte *)GEN_TOP((*(int *)(this + 0x3b4) + *(int *)(this + 0x154) * 2)))) ||
         (((*(uint *)(gen_frame + 0xc)) & 2) == 0)) goto LAB_00903269;
      F_005a2710((gen_frame + 0x4),2);
      (*(undefined1 *)(gen_frame + 0x8)) = 1;
      *(uint *)&(*(undefined1 *)(gen_frame + 0x8)) = CONCAT31((*(undefined3 *)(gen_frame + 0x9)),1);
      this[0x34] = (undefined1)0x1;
      F_00823c00(this);
      puVar16 = param_1;
    }
    F_008fc960(this,0,1);
LAB_00903269: ;
    F_00560a60(puVar16,(gen_frame + 0x4));
    F_005a2670((gen_frame + 0x4));
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return (uint)puVar16;
  default: ;
    if (*(int *)(this + 0x2c) != 0) {
      piVar6 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
      ((code *)*(gen_code32 *)(*piVar6 + 0x54))(piVar6,*(undefined4 *)(this + 0x2c),0);
      *(undefined4 *)(this + 0x2c) = 0;
      puVar16 = param_1;
    }
    uVar3 = *(uint *)&(*(undefined1 *)(gen_frame + 0x8));
    if (param_3 == 0) {
      if (param_4 != 5) goto LAB_00903700;
      break;
    }
    if ((*param_2 & 0xf) == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(param_2 + 4);
      if (iVar7 < 0) {
        (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 3)) = 1;
        (*(uint *)(gen_frame + 0x14)) = CONCAT13(1,(*((uint3 *)GEN_TOP((gen_frame + 0x14)))));
        *(undefined4 *)(this + 8) = 0;
        if (this[0x34] != (undefined1)0x0) {
          F_008f38e0(this);
          this[0x34] = (undefined1)0x0;
          if (this[0x37] != this[0x38]) {
            uVar3 = (uint)(byte)this[0x37];
            uVar13 = 1;
            pvVar8 = (undefined *)F_00414500(*(undefined4 *)((*(uint *)(gen_frame + 0xc)) + 0x10),0x14c);
            F_00414a40(pvVar8,uVar3,uVar13);
          }
          uVar13 = 0x340;
          pvVar8 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x28))))(*(int * PTR32 *)(this + 4))));
          F_0046a630(pvVar8,uVar13);
        }
        goto LAB_00903700;
      }
    }
    if ((param_2[8] & 0xf) == 0) {
      (*(uint *)(gen_frame + 0x10)) = 0;
    }
    else {
      (*(uint *)(gen_frame + 0x10)) = *(int *)(param_2 + 0xc);
    }
    (*(undefined1 *)(gen_frame + 0x8)) = 0;
    *(uint *)&(*(undefined1 *)(gen_frame + 0x8)) = uVar3 & 0xffffff00;
    uVar5 = (*((uint *)GEN_TOP((gen_frame + 0x0)))) & 0xffffff00;
    switch((unsigned int)(uintptr_t)(iVar7)) {
    case 100: ;
      *(uint *)(this + 0x30) = (*(uint *)(gen_frame + 0x10));
      (*(undefined1 *)(gen_frame + 0x8)) = 1;
      *(uint *)&(*(undefined1 *)(gen_frame + 0x8)) = CONCAT31((int3)(uVar3 >> 8),1);
      uVar5 = CONCAT31((int3)((*((uint *)GEN_TOP((gen_frame + 0x0)))) >> 8),1);
      goto LAB_0090335f;
    case 0x65: ;
      AVar10 = (undefined1)((*(uint *)(gen_frame + 0x10)) != 0);
      this[0x34] = (undefined1)0x1;
      if (AVar10 != this[0x38]) {
        uVar3 = (uint)(byte)AVar10;
        uVar13 = 1;
        this[0x38] = AVar10;
        pvVar8 = (undefined *)F_00414500(*(undefined4 *)((*(uint *)(gen_frame + 0xc)) + 0x10),0x14c);
        F_00414a40(pvVar8,uVar3,uVar13);
      }
      F_00823c00(this);
      F_008fc960(this,*(uint *)&(*(undefined1 *)(gen_frame + 0x8)),uVar5);
      goto LAB_00903700;
    case 0x66: ;
      if (this[0x34] == (undefined1)0x0) {
        F_0043f8b0(0x18);
        (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 3)) = 1;
        (*(uint *)(gen_frame + 0x14)) = CONCAT13(1,(*((uint3 *)GEN_TOP((gen_frame + 0x14)))));
        *(undefined4 *)(this + 8) = 0;
        F_008fc960(this,*(uint *)&(*(undefined1 *)(gen_frame + 0x8)),uVar5);
      }
      else {
        F_00823c00(this);
        uVar14 = 0;
        uVar9 = 0;
        uVar13 = 1;
        piVar6 = *(int * PTR32 *)(this + 4);
        pvVar8 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar6 + 0x18))
                                   (piVar6,0x528,0,0,REFG(undefined4, 0x1327228),REFG(undefined4, 0x132722c),this,3,0,0,4,0,0,0,1)))
        ;
        uVar3 = F_0043bd00(pvVar8,uVar13,uVar9,uVar14);
        pvVar8 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar6 + 0x1c))(piVar6)));
        uVar3 = F_00866a60(pvVar8,uVar3,unaff_EDI,unaff_ESI,unaff_EBX,puVar16,uVar5,(*(undefined4 *)(gen_frame + 0x4)),
                             *(uint *)&(*(undefined1 *)(gen_frame + 0x8)),(*(uint *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x10)),(*(uint *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),
                             (*(uint *)(gen_frame + 0x20)),(*(uint *)(gen_frame + 0x24)));
        *(uint *)(this + 0x2c) = uVar3;
        (*(uint *)(gen_frame + 0x24)) = uVar5;
        (*(uint *)(gen_frame + 0x20)) = *(uint *)&(*(undefined1 *)(gen_frame + 0x8));
        (*(undefined4 *)(gen_frame + 0x1c)) = 0x90342b;
        F_008fc960(this,*(uint *)&(*(undefined1 *)(gen_frame + 0x8)),uVar5);
      }
      goto LAB_00903700;
    case 0x67: ;
      if (*(int *)(this + 0x2c) == 0) {
        F_00823c00(this);
        piVar6 = *(int * PTR32 *)(this + 4);
        uVar14 = 0;
        (*(undefined4 *)(gen_frame + 0x18)) = 0;
        (*(uint *)(gen_frame + 0x20)) = 0;
        (*(undefined4 *)(gen_frame + 0x28)) = 0;
        (*(undefined4 *)(gen_frame + 0x30)) = 0;
        (*(undefined4 *)(gen_frame + 0x38)) = 0;
        (*(undefined4 *)(gen_frame + 0x40)) = 0;
        (*(undefined4 *)(gen_frame + 0x48)) = 0;
        (*(undefined4 *)(gen_frame + 0x50)) = 0;
        uVar9 = 0;
        uVar13 = 0x523;
        pvVar8 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar6 + 0x18))(piVar6)));
        uVar3 = F_0043bd00(pvVar8,uVar13,uVar9,uVar14);
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),6);
        uVar14 = 0;
        (*(uint *)(gen_frame + 0x2c)) = uVar3;
        uVar9 = 0;
        uVar13 = 0x524;
        pvVar8 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x18))))(*(int * PTR32 *)(this + 4))));
        uVar3 = F_0043bd00(pvVar8,uVar13,uVar9,uVar14);
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x38)),6);
        uVar14 = 0;
        (*(uint *)(gen_frame + 0x3c)) = uVar3;
        uVar9 = 0;
        uVar13 = 0x525;
        pvVar8 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x18))))(*(int * PTR32 *)(this + 4))));
        uVar3 = F_0043bd00(pvVar8,uVar13,uVar9,uVar14);
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x40)),6);
        uVar14 = 0;
        (*(uint *)(gen_frame + 0x44)) = uVar3;
        uVar9 = 0;
        uVar13 = 0x526;
        pvVar8 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x18))))(*(int * PTR32 *)(this + 4))));
        uVar3 = F_0043bd00(pvVar8,uVar13,uVar9,uVar14);
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x48)),6);
        uVar14 = 0;
        (*(uint *)(gen_frame + 0x4c)) = uVar3;
        uVar9 = 0;
        uVar13 = 0x527;
        pvVar8 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x18))))(*(int * PTR32 *)(this + 4))));
        uVar3 = F_0043bd00(pvVar8,uVar13,uVar9,uVar14);
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x50)),6);
        (*(uint *)(gen_frame + 0x54)) = uVar3;
        uVar13 = *(undefined4 *)(this + 8);
        uVar15 = 4;
        uVar12 = 1;
        puVar11 = ((undefined1 *)GEN_TOP((gen_frame + 0x18)));
        uVar14 = 8;
        uVar9 = 0xc;
        pAVar4 = this;
        pvVar8 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
        uVar3 = F_008668b0(pvVar8,uVar9,uVar14,puVar11,pAVar4,uVar12,uVar13,uVar15);
        *(uint *)(this + 0x2c) = uVar3;
        this_00 = &(*(uint *)(gen_frame + 0x58));
        iVar7 = 7;
        do {
          this_00 = this_00 + -2;
          F_005a2670(this_00);
          iVar7 = iVar7 + -1;
        } while (-1 < iVar7);
        F_008fc960(this,*(uint *)&(*(undefined1 *)(gen_frame + 0x8)),uVar5);
        goto LAB_00903700;
      }
      break;
    case 0x68: ;
      if ((*(uint *)(gen_frame + 0x10)) != -1) {
        if ((param_2[0x10] & 0xf) == 0) {
          F_00823b60(this,(*(uint *)(gen_frame + 0x10)),0);
          F_008fc960(this,*(uint *)&(*(undefined1 *)(gen_frame + 0x8)),uVar5);
        }
        else {
          F_00823b60(this,(*(uint *)(gen_frame + 0x10)),*(undefined4 *)(param_2 + 0x14));
          F_008fc960(this,*(uint *)&(*(undefined1 *)(gen_frame + 0x8)),uVar5);
        }
        goto LAB_00903700;
      }
LAB_0090335f: ;
      F_00823c00(this);
      F_008fc960(this,*(uint *)&(*(undefined1 *)(gen_frame + 0x8)),uVar5);
      goto LAB_00903700;
    case 0x69: ;
      F_00823c00(this);
      *(uint *)(this + 0x150) = (*(uint *)(gen_frame + 0x10));
      if ((param_2[0x10] & 0xf) == 0) {
        uVar13 = 0;
      }
      else {
        uVar13 = *(undefined4 *)(param_2 + 0x14);
      }
      *(undefined4 *)(this + 0x154) = uVar13;
      uVar3 = F_008f34f0(this,(*(uint *)(gen_frame + 0x10)),uVar13,0,0);
      if (uVar3 != 0) {
        F_007cd2d0(this,uVar3);
        this[0x36] = (undefined1)0x1;
      }
      break;
    case 0x6a: ;
      if (this[0x34] != (undefined1)0x0) {
        F_00823c00(this);
        bVar2 = F_008f39f0(this);
        if (bVar2 == 0) {
          uVar13 = 0x345;
          pvVar8 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x28))))(*(int * PTR32 *)(this + 4))));
          F_0046a630(pvVar8,uVar13);
          F_008fc960(this,*(uint *)&(*(undefined1 *)(gen_frame + 0x8)),uVar5);
        }
        else {
          AVar10 = this[0x38];
          if (this[0x37] != AVar10) {
            uVar3 = (uint)(byte)AVar10;
            uVar13 = 1;
            this[0x37] = AVar10;
            pvVar8 = (undefined *)F_00414500(*(undefined4 *)((*(uint *)(gen_frame + 0xc)) + 0x10),0x14c);
            F_00414a40(pvVar8,uVar3,uVar13);
          }
          F_0043f8b0(1);
          uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x50))))(*(int * PTR32 *)(this + 4));
          ((code *)*((gen_code32 *)GEN_TOP((*(int *)(uVar3 + 0x850) + 0x20))))((int *)(uVar3 + 0x850),1);
          this[0x34] = (undefined1)0x0;
          uVar13 = 0x33f;
          pvVar8 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x28))))(*(int * PTR32 *)(this + 4))));
          F_0046a630(pvVar8,uVar13);
          F_008f37f0(this);
          F_008fc960(this,*(uint *)&(*(undefined1 *)(gen_frame + 0x8)),uVar5);
        }
        goto LAB_00903700;
      }
    }
    F_008fc960(this,*(uint *)&(*(undefined1 *)(gen_frame + 0x8)),uVar5);
    goto LAB_00903700;
  }
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 3)) = 1;
  (*(uint *)(gen_frame + 0x14)) = CONCAT13(1,(*((uint3 *)GEN_TOP((gen_frame + 0x14)))));
LAB_00903700: ;
  *puVar16 = 2;
  *(undefined1 *)(puVar16 + 1) = (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 3));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return (uint)puVar16;
}

/* ref: Client::UI2::Agent::AgentActionMenu::vf1 */
uint F_00903750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x903750u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  uint uVar4;
  undefined4 uVar5;
  int * piVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined1 local_5;
  
  uVar1 = 0;
  local_5 = 0;
  if ((*param_2 & 0xf) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(param_2 + 4);
  }
  switch((unsigned int)(uintptr_t)(uVar5)) {
  case 0: ;
    local_5 = 0;
    if ((param_2[0x18] & 0xf) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(param_2 + 0x1c);
    }
    if ((param_2[0x20] & 0xf) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_2 + 0x24);
    }
    F_008fe040(this,uVar5,(uint)(iVar2 != 0));
    break;
  case 1: ;
    if ((param_2[8] & 0xf) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(param_2 + 0xc);
    }
    if ((param_2[0x10] & 0xf) == 0) {
      F_008fe0e0(this,uVar5,0);
      local_5 = uVar1;
    }
    else {
      F_008fe0e0(this,uVar5,*(undefined4 *)(param_2 + 0x14));
      local_5 = uVar1;
    }
    break;
  case 2: ;
    if ((param_2[8] & 0xf) == 0) {
      *(undefined4 *)(this + 0x28) = 0;
      F_008fc9b0(this);
      local_5 = uVar1;
    }
    else {
      if (*(uint *)(param_2 + 0xc) < 10) {
        *(uint *)(this + 0x28) = *(uint *)(param_2 + 0xc);
      }
      F_008fc9b0(this);
      local_5 = uVar1;
    }
    break;
  case 3: ;
    if ((param_2[8] & 0xf) == 0) {
      uVar7 = 0;
LAB_0090383e: ;
      *(undefined4 *)(this + 0x28) = 3;
      *(uint *)(this + 0x2c) = uVar7;
    }
    else {
      uVar7 = *(uint *)(param_2 + 0xc);
      if (uVar7 < 10) goto LAB_0090383e;
    }
    F_008fc9b0(this);
    local_5 = uVar1;
    break;
  case 4: ;
    if ((param_2[0x18] & 0xf) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(uint *)(param_2 + 0x1c);
    }
    uVar9 = uVar7 & 0xffffff;
    if (uVar7 >> 0x18 == 5) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x118))))(*(int * PTR32 *)(this + 4),uVar9);
      local_5 = uVar1;
    }
    else {
      uVar12 = 0;
      uVar5 = 0;
      uVar10 = F_00533b60(&REFG(undefined4, 0x1375bc0));
      uVar7 = F_0076a7a0(uVar7 >> 0x18);
      F_00ac83b0(&REFG(undefined, 0x14bcf40),uVar7,uVar9,(int)uVar10,(int)(uVar10 >> 0x20),uVar5,uVar12);
      local_5 = uVar1;
    }
    break;
  case 5: ;
    if ((param_2[0x18] & 0xf) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(uint *)(param_2 + 0x1c);
    }
    if ((param_2[0x20] & 0xf) == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(uint *)(param_2 + 0x24);
    }
    uVar8 = uVar7 & 0xffffff;
    if ((uVar9 & 0x2000) == 0) {
      if ((uVar9 & 0x1000) != 0) {
        uVar3 = F_00ab1f00(uVar8);
        piVar6 = *(int * PTR32 *)(this + 4);
        uVar10 = CONCAT44(9,uVar7) & 0xffffffff00ffffff;
        uVar4 = F_00463610(2,(int)uVar10,(int)(uVar10 >> 0x20));
        uVar7 = (uint)*(ushort *)(uVar3 + 0xc);
        goto LAB_00903a2e;
      }
      if ((uVar9 & 0x100000) != 0) {
        uVar7 = F_00ab2cf0(uVar8);
        uVar5 = 7;
        goto LAB_009038e6;
      }
      if ((uVar9 & 0x400000) != 0) {
        uVar3 = F_00ab2870(uVar8);
        piVar6 = *(int * PTR32 *)(this + 4);
        uVar10 = CONCAT44(8,uVar7) & 0xffffffff00ffffff;
        uVar4 = F_00463610(2,(int)uVar10,(int)(uVar10 >> 0x20));
        uVar7 = (uint)*(ushort *)(uVar3 + 0x16);
        goto LAB_00903a2e;
      }
      if ((uVar9 & 0x80000) != 0) {
        uVar7 = F_00ab2c30(uVar8);
        uVar5 = 6;
        goto LAB_009038e6;
      }
      if ((uVar9 & 0x800000) == 0) {
        if ((uVar9 & 0x1000000) != 0) {
          uVar3 = F_00ab2840(uVar8);
          piVar6 = *(int * PTR32 *)(this + 4);
          uVar10 = CONCAT44(0xd,uVar7) & 0xffffffff00ffffff;
          uVar7 = F_00463610(2,(int)uVar10,(int)(uVar10 >> 0x20));
          uVar11 = CONCAT44(uVar7,(uint)*(ushort *)(uVar3 + 0x9a));
          this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar6 + 0x54))
                                      (piVar6,(uint)*(ushort *)(uVar3 + 0x9a),uVar7)));
          goto LAB_00903a3c;
        }
        local_5 = uVar1;
        if (uVar8 == 0xffffff) break;
        uVar3 = F_00ab1ed0(uVar8);
        piVar6 = *(int * PTR32 *)(this + 4);
        uVar10 = CONCAT44(1,uVar7) & 0xffffffff00ffffff;
        uVar4 = F_00463610(2,(int)uVar10,(int)(uVar10 >> 0x20));
        uVar7 = (uint)*(ushort *)(uVar3 + 8);
      }
      else {
        uVar3 = F_00ab2d50(uVar8);
        piVar6 = *(int * PTR32 *)(this + 4);
        uVar10 = CONCAT44(0xb,uVar7) & 0xffffffff00ffffff;
        uVar4 = F_00463610(2,(int)uVar10,(int)(uVar10 >> 0x20));
        uVar7 = *(uint *)(uVar3 + 8);
      }
LAB_00903a2e: ;
      uVar11 = CONCAT44(uVar4,uVar7);
      this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar6 + 0x54))(piVar6)));
    }
    else {
      uVar7 = F_00ab1f30(uVar8);
      uVar5 = 5;
LAB_009038e6: ;
      piVar6 = *(int * PTR32 *)(this + 4);
      uVar3 = F_00463610(2,uVar8,uVar5);
      uVar11 = CONCAT44(uVar3,*(undefined4 *)(uVar7 + 8));
      this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar6 + 0x54))(piVar6,*(undefined4 *)(uVar7 + 8),uVar3)));
    }
LAB_00903a3c: ;
    F_00434720(this_00,(int)uVar11,(int)((ulonglong)uVar11 >> 0x20),uVar9,uVar8);
    local_5 = uVar1;
    break;
  case 0xfffffffe: ;
  case 0xffffffff: ;
    local_5 = 1;
    *(undefined4 *)(this + 8) = 0;
  }
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = local_5;
  return (uint)param_1;
}

/* ref: Client::UI2::Agent::AgentActionMenu::vf5 */
uint F_00903a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x903a80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined1 AVar1;
  uint uVar2;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4));
  AVar1 = (undefined1)0x1;
  if ((*(byte *)(uVar2 + 0x230bf) & 0x10) == 0) {
    AVar1 = this[0xc];
  }
  this[0xc] = AVar1;
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4));
  AVar1 = (undefined1)0x1;
  if ((*(byte *)(uVar2 + 0x230bf) & 0x20) == 0) {
    AVar1 = this[0xd];
  }
  this[0xd] = AVar1;
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if (((char)uVar2 != '\0') &&
     ((this[0xc] != (undefined1)0x0 || (this[0xd] != (undefined1)0x0)))) {
    uVar2 = F_008fc9b0(this);
  }
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentActionMenu::vf2 */
uint F_00903ae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x903ae0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if ((char)uVar1 != '\0') {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))
                      (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar1;
  }
  *(undefined4 *)(this + 0x28) = 4;
  *(undefined4 *)(this + 0x2c) = 10;
  uVar1 = F_008fc9b0(this);
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentActionMenu::vf14 */
uint F_00903b10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x903b10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if ((char)uVar1 != '\0') {
    uVar1 = F_008fc9b0(this);
  }
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentActionMenu::vf15 */
uint F_00903b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x903b30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if ((char)uVar1 != '\0') {
    uVar1 = F_008fc9b0(this);
  }
  return uVar1;
}

/* ref: FUN_00903b50 */
uint F_00903b50(unsigned int gen_a0)
{
  GEN_ENTER(0x903b50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * in_EAX = 0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (*(int *)((int)this + 0x34) != 0) {
    uVar3 = F_00427d90();
    uVar1 = *(uint *)((int)this + 0x30);
    iVar2 = 0;
    if (*(int * PTR32 *)((int)this + 0x24) != (int *)0x0) {
      iVar2 = **(int * PTR32 *)((int)this + 0x24);
    }
    if (*(uint *)(iVar2 + 8) <= uVar1) {
      uVar1 = uVar1 - *(uint *)(iVar2 + 8);
    }
    in_EAX = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(iVar2 + 4) + uVar1 * 4)));
    if ((uint)in_EAX[1] <= (uint)((int)uVar3 - in_EAX[2])) {
      uVar4 = *in_EAX;
      uVar5 = 0;
      this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      F_00902e70(this_00,uVar4,uVar5);
      in_EAX = *(undefined4 * PTR32 *)((int)this + 0x34);
      if (in_EAX != (undefined4 *)0x0) {
        *(int *)((int)this + 0x30) = *(int *)((int)this + 0x30) + 1;
        if (*(uint *)((int)this + 0x2c) <= *(uint *)((int)this + 0x30)) {
          *(undefined4 *)((int)this + 0x30) = 0;
        }
        in_EAX = (undefined4 *)((int)in_EAX + -1);
        *(undefined4 * PTR32 *)((int)this + 0x34) = in_EAX;
        if (in_EAX == (undefined4 *)0x0) {
          *(undefined4 *)((int)this + 0x30) = 0;
        }
      }
      if (*(int *)((int)this + 0x34) != 0) {
        uVar1 = *(uint *)((int)this + 0x30);
        if (*(int * PTR32 *)((int)this + 0x24) == (int *)0x0) {
          iVar2 = 0;
        }
        else {
          iVar2 = **(int * PTR32 *)((int)this + 0x24);
        }
        if (*(uint *)(iVar2 + 8) <= uVar1) {
          uVar1 = uVar1 - *(uint *)(iVar2 + 8);
        }
        in_EAX = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(iVar2 + 4) + uVar1 * 4)));
        *(ulonglong *)(in_EAX + 2) = uVar3;
      }
    }
  }
  return (uint)in_EAX;
}

/* ref: FUN_00903c10 */
uint F_00903c10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x903c10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  bVar1 = F_00770240(param_1,param_2,param_4,param_6);
  (*(uint *)(gen_frame + 0x10)) = F_00770e40(((undefined1 *)(gen_frame + 0x1c)),5,param_3);
  iVar3 = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  if (bVar1 != 0) {
    if (4 < (int)(*(uint *)(gen_frame + 0x10))) {
      (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) - 1;
    }
    iVar3 = 1;
    (*(undefined4 *)(gen_frame + 0xc)) = 1;
  }
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x50 + param_4 * 0x4c))) != (*(uint *)(gen_frame + 0x10)) + iVar3) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x50 + param_4 * 0x4c))) = (*(uint *)(gen_frame + 0x10)) + iVar3;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uVar2 = F_008feed0(this,param_1,param_2,param_3,param_5,((undefined1 *)(gen_frame + 0x1c)),(*(uint *)(gen_frame + 0x10)),param_4 * 0x13 + 0x15,
                       param_4 * 5 + 0x70,(*(undefined4 *)(gen_frame + 0xc)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar2;
}

/* ref: FUN_00903ce0 */
byte F_00903ce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x903ce0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int param_5 = (int)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  uint uVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  uVar1 = F_00ab24e0((uint)*(ushort *)(param_2 + 0x90));
  if (uVar1 == 0) {
    F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
    return 0;
  }
  F_008ffac0(this,param_1,param_2,param_3,param_5,param_4);
  F_007d7520(this,param_3,*(undefined4 *)((int)this + 0x40),param_5);
  uVar2 = F_00ac1640(2,param_5,
                       CONCAT31((int3)(param_5 - 0xf4241U >> 8),param_5 - 0xf4241U < 999999));
  uVar2 = (uint)((double)(int)uVar2 / *(double *)&REFG(undefined, 0x10912a8));
  if (0 < (int)uVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x54)),&REFG(undefined, 0x10bde4f),REFG(undefined4, 0x108cc50));
    uVar4 = uVar2 / 0xe10;
    if (uVar4 != 0) {
      uVar5 = 0x2d;
      pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
      uVar4 = F_00461bb0(pvVar3,uVar5,uVar4);
      F_0042e430(((undefined1 *)(gen_frame + 0x54)),uVar4);
      uVar2 = uVar2 % 0xe10;
    }
    uVar4 = uVar2 / 0x3c;
    if (uVar4 != 0) {
      uVar5 = 0x2c;
      pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
      uVar4 = F_00461bb0(pvVar3,uVar5,uVar4);
      uVar4 = F_0042cdb0(((undefined1 *)(gen_frame + 0x54)),((undefined1 *)(gen_frame + 0x0)),uVar4);
      F_0042ccf0(((undefined1 *)(gen_frame + 0x54)),uVar4);
      F_0042c880(((undefined1 *)(gen_frame + 0x0)));
      uVar2 = uVar2 % 0x3c;
    }
    if (0 < (int)uVar2) {
      uVar5 = 0x31;
      pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
      uVar2 = F_00461bb0(pvVar3,uVar5,uVar2);
      uVar2 = F_0042cdb0(((undefined1 *)(gen_frame + 0x54)),((undefined1 *)(gen_frame + 0x0)),uVar2);
      F_0042ccf0(((undefined1 *)(gen_frame + 0x54)),uVar2);
      F_0042c880(((undefined1 *)(gen_frame + 0x0)));
    }
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 0x2be;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = F_0043bd00(pvVar3,uVar5,uVar6,uVar7);
    F_00431250(*(undefined * PTR32 *)((int)this + 0x28),5,uVar2,0,1,0);
    uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x54)));
    F_00431250(*(undefined * PTR32 *)((int)this + 0x28),8,uVar2,0,1,0);
    *(uint *)((int)this + 0x3c) = *(uint *)((int)this + 0x3c) | 0x2000;
    F_0042c880(((undefined1 *)(gen_frame + 0x54)));
  }
  F_00827270(this,uVar1,param_2,param_5);
  *(uint *)((int)this + 0x3c) = *(uint *)((int)this + 0x3c) | 0x80;
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
  return 1;
}

/* ref: Client::UI2::Agent::AgentActionDetail::vf5 */
unsigned int F_00903f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x903f20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2,0x1f);
  *(uint *)(this + 0xc) = uVar3;
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2,0x1c);
  iVar1 = *(int *)(this + 0xc);
  *(uint *)(this + 0x10) = uVar3;
  if ((iVar1 != 0) && (uVar3 != 0)) {
    if (*((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x10))) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x10))) = 0;
      *(undefined1 *)(iVar1 + 0x1d) = 1;
    }
    F_007d7640(this);
    F_008ffdf0(this);
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 0x10) = 0;
  }
  return 0;
}

/* ref: FUN_00903fa0 */
byte F_00903fa0(unsigned int gen_a0)
{
  GEN_ENTER(0x903fa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint * puVar1;
  char cVar2;
  uint uVar3;
  byte bVar5;
  undefined * this_00;
  undefined * pvVar6;
  int * piVar7;
  uint uVar8;
  undefined4 * puVar9;
  bool bVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  longlong lVar4;
  
  uVar8 = (*(uint *)(gen_frame + 0x28));
  switch((unsigned int)(uintptr_t)(*(undefined1 *)((int)this + 0x68f))) {
  case 2: ;
    uVar8 = F_00781520(*(undefined4 *)((int)this + 0x2e8),1,0x1c3);
    F_0082ce60(1,uVar8);
    if (((REFG(char, 0x148a113) == '\0') && (*(char *)((int)this + 0x6cb) == '\0')) &&
       (bVar5 = F_008d7c80((undefined *)((int)this + 0x18),(int)*(char *)((int)this + 0x680),
                             (int)*(short *)((int)this + 0x682)), bVar5 != 0)) {
      *(undefined1 *)((int)this + 0x6cb) = 1;
      if ((*(char *)((int)this + 0x6bd) == -1) || (*(char *)((int)this + 0x6bd) == -2)) {
        *(undefined1 *)((int)this + 0x6bd) = *(undefined1 *)((int)this + 0x671);
      }
    }
    break;
  case 3: ;
    if (((*(char *)((int)this + 0x6cc) != '\0') && (6 < *(int *)((int)this + 0x250))) &&
       (*(char *)((int)this + 0x6d0) == '\0')) {
      piVar7 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      uVar8 = ((code *)*(gen_code32 *)(*piVar7 + 0x60))(piVar7,*(undefined4 *)((int)this + 8),0,0);
      if (uVar8 == 1) {
        (*(undefined4 *)(gen_frame + 0x14)) = 0;
        (*(undefined4 *)(gen_frame + 0x1c)) = 0;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),4);
        (*(undefined4 *)(gen_frame + 0x18)) = 2;
        piVar7 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
        ((code *)*(gen_code32 *)(*piVar7 + 0x5c))(piVar7,*(undefined4 *)((int)this + 8),2,&(*(undefined4 *)(gen_frame + 0x14)));
        *(undefined1 *)((int)this + 0x6cc) = 0;
        puVar9 = &(*(undefined4 *)(gen_frame + 0x24));
        (*(uint *)(gen_frame + 0x28)) = 1;
        do {
          puVar9 = puVar9 + -2;
          F_005a2670(puVar9);
          uVar8 = (*(uint *)(gen_frame + 0x28)) - 1;
          (*(uint *)(gen_frame + 0x28)) = uVar8;
        } while (-1 < (int)uVar8);
      }
    }
    if (REFG(int * PTR32, 0x148a44c) != (int *)0x0) {
      ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x148a44c) + 0x28))))(REFG(int * PTR32, 0x148a44c),6,0);
      REFG(undefined4, 0x1328330) = 0xffffffff;
      REFG(int * PTR32, 0x148a44c) = (int *)0x0;
    }
    bVar5 = F_00414f10(*((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x137104c) + 0x10))));
    if ((bVar5 != 0) && (bVar5 = F_00783730((undefined *)((int)this + 0x18)), bVar5 == 0)) {
      lVar4 = (longlong)((double)*((float *)GEN_TOP(((int)REFG(void * PTR32, 0x137104c) + 0x1198))) * *(double *)&REFG(undefined, 0x10912a8));
      uVar3 = (uint)lVar4;
      puVar1 = (uint *)((int)this + 0x698);
      uVar8 = *puVar1;
      *puVar1 = *puVar1 + uVar3;
      *(int *)((int)this + 0x69c) =
           *(int *)((int)this + 0x69c) + (int)((ulonglong)lVar4 >> 0x20) + (uint)CARRY4(uVar8,uVar3)
      ;
      if ((*(int *)((int)this + 0x69c) != 0) || (60000 < *(uint *)((int)this + 0x698))) {
        *(undefined4 *)((int)this + 0x698) = 0;
        *(undefined4 *)((int)this + 0x69c) = 0;
        F_007e6500(REFG(void * PTR32, 0x148a454),1);
        *(undefined1 *)((int)this + 0x68f) = 0xe;
        F_007e4f40(this);
      }
    }
    break;
  case 4: ;
    uVar12 = 1;
    uVar8 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4));
    bVar5 = F_005590e0(uVar8,uVar12);
    if ((((bVar5 != 0) && (bVar5 = F_00781480(this), bVar5 != 0)) &&
        (*((char *)GEN_TOP((*((int *)GEN_TOP(((int)REFG(void * PTR32, 0x137104c) + 0x10))) + 0xac))) != '\0')) &&
       ((*(byte *)(REFG(int, 0x137129c) + 0xf0) & 1) != 0)) {
      *(undefined1 *)((int)this + 0x68f) = *(undefined1 *)((int)this + 0x690);
      *(undefined1 *)((int)this + 0x68c) = 3;
      *(undefined1 *)((int)this + 0x690) = 9;
      piVar7 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x14))))(*(int * PTR32 *)((int)this + 4))));
      uVar8 = ((code *)*(gen_code32 *)(*piVar7 + 8))(piVar7,"Lobby");
      *(uint *)((int)this + 0x2e8) = uVar8;
      uVar8 = F_00781520(uVar8,1,0x1c2);
      F_0082ce60(0,uVar8);
      F_007820e0();
      F_00782420(*(undefined4 *)((int)this + 0x2e8));
      F_0082d6c0();
      F_00883720(this);
    }
    break;
  case 5: ;
    F_007e4f40(this);
    cVar2 = *(char *)((int)this + 0x5fd);
    piVar7 = *(int * PTR32 *)((int)this + 4);
    uVar15 = 4;
    uVar13 = 0;
    uVar11 = 0;
    puVar9 = &(*(undefined4 *)(gen_frame + 0x24));
    (*(undefined4 *)(gen_frame + 0x24)) = 3;
    (*(uint *)(gen_frame + 0x28)) = (int)cVar2;
    uVar14 = 1;
    uVar12 = 1;
    pvVar6 = this;
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar7 + 0x1c))(piVar7)));
    uVar8 = F_008668b0(this_00,uVar12,uVar14,puVar9,pvVar6,uVar11,uVar13,uVar15);
    *(uint *)((int)this + 8) = uVar8;
    uVar8 = F_00781520(*(undefined4 *)((int)this + 0x2e8),1,0x1c2);
    F_0082ce60(0,uVar8);
    *(undefined1 *)((int)this + 0x68f) = 1;
    uVar14 = 1;
    uVar12 = 2;
    pvVar6 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    F_007602f0(pvVar6,uVar12,uVar14);
    uVar15 = 0;
    uVar13 = 0;
    uVar11 = 1;
    uVar14 = 0;
    uVar12 = 1;
    pvVar6 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    F_0075ec30(pvVar6,uVar12,uVar14,uVar11,uVar13,uVar15);
    F_005a2670(&(*(undefined4 *)(gen_frame + 0x24)));
    break;
  case 9: ;
    if (REFG(char, 0x148a113) == '\0') {
      F_007e4f40(this);
      F_008f8e70(this);
      uVar14 = 0;
      uVar12 = 2;
      pvVar6 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      F_007602f0(pvVar6,uVar12,uVar14);
      uVar15 = 0;
      uVar13 = 0;
      uVar11 = 1;
      uVar14 = 0x18;
      uVar12 = 0;
      pvVar6 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      F_00820b30(pvVar6,uVar12,uVar14,uVar11,uVar13,uVar15);
      F_00920c00(0,REFG(float, 0x1094884));
      *(undefined1 *)((int)this + 0x68f) = 3;
      *(undefined4 *)((int)this + 0x698) = 0;
      *(undefined4 *)((int)this + 0x69c) = 0;
    }
    else {
      uVar8 = F_00781520(*(undefined4 *)((int)this + 0x2e8),1,0x1c2);
      F_0082ce60(0,uVar8);
    }
    break;
  case 0xc: ;
    if (REFG(char, 0x148a113) == '\0') {
      uVar8 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4));
      bVar5 = F_0075ee20(uVar8);
      if (bVar5 != 0) {
        *(undefined1 *)((int)this + 0x68f) = 9;
      }
    }
    uVar8 = F_00781520(*(undefined4 *)((int)this + 0x2e8),1,0x1c2);
    F_0082ce60(0,uVar8);
    if (REFG(int * PTR32, 0x148a44c) != (int *)0x0) {
      ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x148a44c) + 0x28))))(REFG(int * PTR32, 0x148a44c),6,0);
      REFG(undefined4, 0x1328330) = 0xffffffff;
      REFG(int * PTR32, 0x148a44c) = (int *)0x0;
    }
    break;
  case 0xd: ;
    bVar5 = F_00783ac0(REFG(void * PTR32, 0x148a454));
    if (bVar5 == 0) {
      *(undefined1 *)((int)this + 0x68f) = 0xf;
      F_00783ae0(REFG(void * PTR32, 0x148a454),2);
      uVar8 = F_00781520(*(undefined4 *)((int)this + 0x2e8),1,0x1c3);
      F_0082ce60(1,uVar8);
      uVar8 = F_00781520(*(undefined4 *)((int)this + 0x2e8),1,0x1c3);
      F_0082ce60(1,uVar8);
    }
    break;
  case 0xe: ;
    bVar5 = F_00783ac0(REFG(void * PTR32, 0x148a454));
    if (bVar5 == 0) {
      *(undefined1 *)((int)this + 0x68f) = 9;
      F_00783ae0(REFG(void * PTR32, 0x148a454),1);
    }
    break;
  case 0xf: ;
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x28)) + 0)) = 0;
    (*(uint *)(gen_frame + 0x28)) = uVar8 & 0xffffff00;
    bVar5 = F_00414f10(*((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x137104c) + 0x10))));
    if (bVar5 == 0) {
      if ((-1 < *(char *)((int)this + 0x680)) &&
         (bVar5 = F_007e64c0((undefined *)((int)this + 0x18),(int)*(char *)((int)this + 0x680)),
         bVar5 == 0)) {
        F_00882ff0(this);
        (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x28)) + 0)) = 1;
        (*(uint *)(gen_frame + 0x28)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x28)), 1, 3),1);
      }
      F_00414f60(*((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x137104c) + 0x10))),1);
      (*(gen_code32 *)(gen_frame + 0xc)) = ((code *)REFP(0x781d70));
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(gen_code32 *)(gen_frame + 0x4)) = ((code *)REFP(0x916e00));
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
      F_00976af0(REFG(void * PTR32, 0x137104c),&(*(gen_code32 *)(gen_frame + 0x4)),0);
    }
    F_00882cf0(this,(*(uint *)(gen_frame + 0x28)));
    *(undefined1 *)((int)this + 0x68f) = 2;
    break;
  case 0x10: ;
    piVar7 = *(int * PTR32 *)((int)this + 0x6d4);
    if ((piVar7 != (int *)0x0) &&
       (uVar8 = ((code *)*(gen_code32 *)(*piVar7 + 0x10))(piVar7), (char)uVar8 != '\0')) {
      *(undefined1 *)((int)this + 0x6cb) = 1;
      *(undefined1 *)((int)this + 0x68f) = 1;
      *(undefined1 *)((int)this + 0x6bd) = 0xff;
    }
    break;
  case 0x11: ;
    piVar7 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar8 = ((code *)*(gen_code32 *)(*piVar7 + 0x60))(piVar7,*(undefined4 *)((int)this + 8),0,0);
    if (uVar8 == 1) {
      *(undefined1 *)((int)this + 0x68f) = 2;
      F_008ea800(this,(int)*(char *)((int)this + 0x671));
    }
    break;
  case 0x12: ;
    *(char *)((int)this + 0x6bc) = *(char *)((int)this + 0x6bc) + -1;
    if ((*(char *)((int)this + 0x6bc) < '\x01') && (*(undefined * PTR32 *)((int)this + 0x2ec) != (undefined *)0x0)) {
      *(undefined1 *)((int)this + 0x68f) = 1;
      F_00974760(*(undefined * PTR32 *)((int)this + 0x2ec));
    }
    break;
  case 0x13: ;
    lVar4 = (longlong)((double)*((float *)GEN_TOP(((int)REFG(void * PTR32, 0x137104c) + 0x1198))) * *(double *)&REFG(undefined, 0x10912a8));
    uVar3 = (uint)lVar4;
    puVar1 = (uint *)((int)this + 0x6b0);
    uVar8 = *puVar1;
    *puVar1 = *puVar1 + uVar3;
    *(int *)((int)this + 0x6b4) =
         *(int *)((int)this + 0x6b4) + (int)((ulonglong)lVar4 >> 0x20) + (uint)CARRY4(uVar8,uVar3);
    if ((*(int *)((int)this + 0x6b4) != 0) || (500 < *(uint *)((int)this + 0x6b0))) {
      *(undefined1 *)((int)this + 0x68f) = 0;
      *(undefined4 *)((int)this + 0x6b0) = 0;
      *(undefined4 *)((int)this + 0x6b4) = 0;
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x10))))(*(int * PTR32 *)((int)this + 4));
    }
  }
  bVar5 = *(byte *)((int)this + 0x6bd);
  if ((bVar5 != 0xff) && (*(int *)((int)this + 0x6d4) == 0)) {
    bVar10 = *(char *)((int)this + 0x6cb) == '\0';
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x28)) + 0)) = bVar10;
    (*(uint *)(gen_frame + 0x28)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x28)), 1, 3),bVar10);
    bVar5 = F_00900080(this,(int)(char)bVar5,(*(uint *)(gen_frame + 0x28)));
    if (bVar5 != 0) {
      *(undefined1 *)((int)this + 0x6bd) = 0xff;
    }
  }
  return bVar5;
}

/* ref: Client::UI2::AddonCharaSelectWorldServer::vf44 */
uint F_00904f70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x904f70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined * pAVar1;
  int iVar2;
  undefined * pvVar3;
  uint uVar4;
  int iVar5;
  undefined * PTR32 * ppAVar6;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  F_0055e1c0(this,*(float *)&REFG(undefined, 0x109feac),100,0,(float)(float10)1,1);
  F_0055e220(this,*(float *)&REFG(undefined, 0x109feac),100,0,(float)(float10)1,1);
  this[0xfa] = (undefined1)((byte)this[0xfa] | 0x10);
  this[0xf9] = (undefined1)((byte)this[0xf9] & 0xfb);
  F_00819ff0(this);
  iVar5 = 0;
  do {
    pAVar1 = this + iVar5 * 0x14 + 0x184;
    pvVar3 = (undefined *)0x0;
    if (*(int *)pAVar1 != 0) {
      pvVar3 = *(undefined * PTR32 *)(*(int *)pAVar1 + 0x70);
    }
    F_00568380(pvVar3,0x23,iVar5,this,0,0);
    pvVar3 = (undefined *)0x0;
    if (*(int *)pAVar1 != 0) {
      pvVar3 = *(undefined * PTR32 *)(*(int *)pAVar1 + 0x70);
    }
    F_00568380(pvVar3,0x21,iVar5,this,0,0);
    pvVar3 = (undefined *)0x0;
    if (*(int *)pAVar1 != 0) {
      pvVar3 = *(undefined * PTR32 *)(*(int *)pAVar1 + 0x70);
    }
    F_00568380(pvVar3,0x1f,iVar5,this,0,0);
    pvVar3 = (undefined *)0x0;
    if (*(int *)pAVar1 != 0) {
      pvVar3 = *(undefined * PTR32 *)(*(int *)pAVar1 + 0x70);
    }
    F_00568380(pvVar3,0x20,iVar5,this,0,0);
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x2c)) = 0;
    (*(undefined4 *)(gen_frame + 0x34)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x40)) = 0;
    (*(undefined4 *)(gen_frame + 0x44)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 2;
    (*(undefined4 *)(gen_frame + 0x30)) = 3;
    (*(undefined4 *)(gen_frame + 0x3c)) = 4;
    if (iVar5 == 0) {
      pvVar3 = *(undefined * PTR32 *)(this + 0x184);
      ppAVar6 = &(*(undefined * PTR32 *)(gen_frame + 0x4));
      (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
      (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)REFP(0x901c90));
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
    }
    else {
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      ppAVar6 = &(*(undefined * PTR32 *)(gen_frame + 0x14));
      pvVar3 = *(undefined * PTR32 *)pAVar1;
      (*(undefined * PTR32 *)(gen_frame + 0x14)) = this;
      (*(gen_code32 *)(gen_frame + 0x18)) = ((code *)REFP(0x901cb0));
    }
    F_00574320(pvVar3,ppAVar6,&(*(undefined4 *)(gen_frame + 0x24)),3,0);
    uVar4 = F_0055dcb0();
    uVar4 = F_0055b990(uVar4);
    if ((uVar4 == 0) || (*(int *)(uVar4 + 8) == 0)) {
LAB_009050eb: ;
      F_007c2fa0(this,iVar5);
    }
    else {
      iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(uVar4 + 8) + 0x20))) + 0x18 + iVar5 * 4)));
      if (iVar2 == 1) {
        F_0081a0c0(this,iVar5);
      }
      else {
        if (iVar2 != -1) goto LAB_009050eb;
        F_007c3030(this,iVar5);
      }
    }
    iVar5 = iVar5 + 1;
    if (1 < iVar5) {
      F_005a91d0(this,1,2);
      F_005a91d0(this,0,1);
      uVar4 = F_0055dcb0();
      uVar4 = F_0057f860(*(undefined * PTR32 *)(uVar4 + 0x14),"_CharaSelectListMenu");
      *(uint *)(this + 0x1ac) = uVar4;
      uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,1,0);
      F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
      return uVar4;
    }
  } while( true );
}

/* ref: Client::UI2::Agent::AgentHowTo::vf5 */
uint F_00905150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x905150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (*(int *)(this + 0x50) == 0) {
    uVar1 = F_00903b50(this);
  }
  else {
    uVar1 = *(int *)(this + 0x50) - 1;
    if (uVar1 == 0) {
      uVar1 = F_00825120(this);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: FUN_00905170 */
uint F_00905170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x905170u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  undefined4 uVar2;
  int * piVar3;
  undefined4 uVar4;
  
  F_007d3990(this,param_1,9,param_2,0,param_3,param_4,param_5,param_6,param_7);
  uVar4 = 0;
  uVar2 = 0;
  piVar3 = param_3;
  uVar1 = ((code *)*(gen_code32 *)(*param_3 + 0xd4))(param_3);
  F_00903c10(this,param_1,param_2,uVar1,uVar2,piVar3,uVar4);
  uVar1 = F_007702e0(param_1,param_2,(uint)param_3,0);
  return uVar1;
}

/* ref: FUN_009051e0 */
uint F_009051e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x9051e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  uint param_4 = (uint)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  uint uVar1;
  undefined * pvVar2;
  
  F_007d3b80(this,param_1,param_4 * 0x13 + 9,param_2,param_4,param_3,param_5,param_6);
  pvVar2 = param_3;
  uVar1 = F_00ae09f0(param_3);
  F_00903c10(this,param_1,param_2,(int)param_3 + 0x6c,param_4,uVar1,pvVar2);
  uVar1 = F_00ae09f0(param_3);
  uVar1 = F_007702e0(param_1,param_2,uVar1,param_4);
  return uVar1;
}

/* ref: FUN_00905250 */
uint F_00905250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x905250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  undefined * pvVar7;
  int * piVar8;
  undefined4 * puVar9;
  int iVar10;
  int * piVar11;
  uint uVar12;
  undefined4 uVar13;
  int * piVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x24))(piVar4,4);
  piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar6 = ((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4,3);
  piVar4 = REFG(int * PTR32, 0x1379694);
  (*(uint *)(gen_frame + 0x3c)) = uVar6;
  (*(int * PTR32 *)(gen_frame + 0x48)) = (int *)*(undefined4 *)(REFG(int, 0x137104c) + 0x10);
  uVar6 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0x137);
  if (*((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x1c))) != *(int *)(uVar6 + 0x14)) {
    *((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x1c))) = *(int *)(uVar6 + 0x14);
    *(undefined1 *)(uVar5 + 0x1d) = 1;
  }
  uVar6 = F_00414500((*(int * PTR32 *)(gen_frame + 0x48)),0x195);
  uVar13 = *(undefined4 *)(uVar6 + 0x14);
  *(undefined4 *)((int)this + 0x458) = 0;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 20)) = uVar13;
  *(undefined4 *)((int)this + 0x434) = 0xe0000000;
  *(undefined4 *)((int)this + 0x438) = 0xe0000000;
  *(undefined4 *)((int)this + 0x43c) = 0xe0000000;
  *(undefined4 *)((int)this + 0x440) = 0xe0000000;
  *(undefined4 *)((int)this + 0x444) = 0xe0000000;
  *(undefined4 *)((int)this + 0x448) = 0xe0000000;
  *(undefined4 *)((int)this + 0x44c) = 0xe0000000;
  *(undefined4 *)((int)this + 0x450) = 0xe0000000;
  *(undefined4 *)((int)this + 0x454) = 0xe0000000;
  if (piVar4 == (int *)0x0) {
    *(undefined4 *)((int)this + 0x430) = 0;
    piVar4 = *(int * PTR32 *)(uVar5 + 0x20);
    if (*piVar4 != 0) {
      *piVar4 = 0;
      *(undefined1 *)(uVar5 + 0x1d) = 1;
    }
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
    return (uint)piVar4;
  }
  *(undefined4 *)((int)this + 0x4a4) = 0;
  (*(uint *)(gen_frame + 0x40)) = (uint)REFG(undefined1, 0x1338ad4);
  if (REFG(undefined1, 0x1338ad4) < 2) {
    (*(uint *)(gen_frame + 0x40)) = 1;
  }
  if (*(uint *)((int)this + 0x430) != (*(uint *)(gen_frame + 0x40))) {
    uVar13 = 0xb2;
    if ((*(uint *)(gen_frame + 0x40)) < 2) {
      uVar13 = 0xaf;
    }
    else if ((*(uint *)(gen_frame + 0x40)) < 4) {
      uVar13 = 0xb0;
    }
    else if ((*(uint *)(gen_frame + 0x40)) < 8) {
      uVar13 = 0xb1;
    }
    uVar18 = 0;
    uVar17 = 0;
    pvVar7 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar6 = F_0043bd00(pvVar7,uVar13,uVar17,uVar18);
    if (uVar6 != *((uint *)GEN_TOP((*(int *)((*(uint *)(gen_frame + 0x3c)) + 0x20) + 0x264)))) {
      *((uint *)GEN_TOP((*(int *)((*(uint *)(gen_frame + 0x3c)) + 0x20) + 0x264))) = uVar6;
      *(undefined1 *)((*(uint *)(gen_frame + 0x3c)) + 0x1d) = 1;
    }
    if (**(uint * PTR32 *)(uVar5 + 0x20) != (*(uint *)(gen_frame + 0x40))) {
      **(uint * PTR32 *)(uVar5 + 0x20) = (*(uint *)(gen_frame + 0x40));
      *(undefined1 *)(uVar5 + 0x1d) = 1;
    }
    *(uint *)((int)this + 0x430) = (*(uint *)(gen_frame + 0x40));
  }
  piVar8 = (int *)F_005339e0(&REFG(undefined4, 0x1375bc0));
  (*(int * PTR32 *)(gen_frame + 0x48)) = piVar8;
  (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x28)) + 0)) = 0xe0000000;
  (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x28)) + 4)) = 0;
  (*(ulonglong *)(gen_frame + 0x28)) = 0xe0000000;
  if (((piVar8 != (int *)0x0) && (uVar6 = ((code *)*(gen_code32 *)(*piVar8 + 4))(piVar8), uVar6 == 2)) &&
     ((char)(*(int * PTR32 *)(gen_frame + 0x48))[0x62] != '\x02')) {
    uVar15 = F_00aa1840((*(int * PTR32 *)(gen_frame + 0x48)));
    (*(ulonglong *)(gen_frame + 0x28)) = uVar15;
  }
  (*(int * PTR32 *)(gen_frame + 0x48)) = (undefined *)(uint)REFG(undefined2, 0x14ab148);
  if (REFG(undefined2, 0x14ab148) != 0) {
    uVar6 = F_00a68280(&REFG(undefined1, 0x14ab070),0xffffffff,0);
    ((byte *)(gen_frame + 0xc))[0x18] = 1;
    ((byte *)(gen_frame + 0xc))[0x18] = 1;
    if ((ushort)(*(int * PTR32 *)(gen_frame + 0x48)) < (ushort)uVar6) goto LAB_00905423;
  }
  uVar13 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 24));
  ((byte *)(gen_frame + 0xc))[0x18] = 0;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 24)) = uVar13 & 0xffffff00;
LAB_00905423: ;
  (*(uint *)(gen_frame + 0x30)) = 0xffffffff;
  ((byte *)(gen_frame + 0xc))[0x10] = (byte)REFG(undefined4, 0x1338ad0);
  ((byte *)(gen_frame + 0xc))[0x11] = (*(undefined1 *)((char *)&REFG(undefined4, 0x1338ad0) + 1));
  ((byte *)(gen_frame + 0xc))[0x12] = (*(undefined1 *)((char *)&REFG(undefined4, 0x1338ad0) + 2));
  ((byte *)(gen_frame + 0xc))[0x13] = (*(undefined1 *)((char *)&REFG(undefined4, 0x1338ad0) + 3));
  if ((int)(*(uint *)(gen_frame + 0x40)) < 2) {
    F_00905170(this,uVar5,(*(uint *)(gen_frame + 0x3c)),piVar4,1,0,(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 24)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 20)));
    uVar16 = ((gen_lcode *)*(gen_code32 *)*piVar4)(piVar4);
    uVar6 = F_007d3cd0(this,0,piVar4[0x1d],(int)uVar16,(int)((ulonglong)uVar16 >> 0x20),
                         (undefined4)(*(ulonglong *)(gen_frame + 0x28)),(*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x28)) + 4)),0xffffffff);
    (*(uint *)(gen_frame + 0x30)) = uVar6;
  }
  else {
    uVar13 = 0;
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
    pvVar7 = (undefined *)F_00435440(uVar6,uVar13);
    (*(int * PTR32 *)(gen_frame + 0x48)) = pvVar7;
    F_009539d0((undefined *)((int)this + 0x420));
    (*(undefined * PTR32 *)(gen_frame + 0x44)) = (undefined *)0x0;
    if (0 < (int)(*(uint *)(gen_frame + 0x40))) {
      do {
        piVar8 = (int *)F_00ae0850(&REFG(undefined, 0x1336e40),(*(undefined * PTR32 *)(gen_frame + 0x44)));
        (*(int * PTR32 *)(gen_frame + 0x34)) = piVar8;
        if (*piVar8 != piVar4[0x1d]) {
          piVar8 = (int *)F_004458c0((*(int * PTR32 *)(gen_frame + 0x48)),piVar8[2],piVar8[3],0,0,0);
          (*(int * PTR32 *)(gen_frame + 0x38)) = piVar8;
          if ((int)piVar8 < 0) {
            (*(int * PTR32 *)(gen_frame + 0x38)) = (int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x44)) + 8);
          }
          (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 12)) = (*(int * PTR32 *)(gen_frame + 0x34)) + 4;
          puVar9 = (undefined4 *)F_004296a0(0x18,0,400);
          *puVar9 = *(undefined4 *)((int)this + 0x424);
          puVar9[1] = *(undefined4 *)((int)this + 0x424);
          puVar9[2] = *(undefined4 *)((int)this + 0x424);
          *(undefined2 *)(puVar9 + 5) = 0;
          if (puVar9 + 3 != (undefined4 *)0x0) {
            puVar9[3] = (*(int * PTR32 *)(gen_frame + 0x38));
            puVar9[4] = (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 12));
          }
          F_00956b70((undefined *)((int)this + 0x420),((byte *)(gen_frame + 0xc)),puVar9,0);
        }
        iVar10 = (int)(*(undefined * PTR32 *)(gen_frame + 0x44)) + 1;
        (*(undefined * PTR32 *)(gen_frame + 0x44)) = (undefined *)iVar10;
      } while (iVar10 < (int)(*(uint *)(gen_frame + 0x40)));
    }
    (*(undefined * PTR32 *)(gen_frame + 0x44)) = (undefined *)0x0;
    if (0 < (int)(*(uint *)(gen_frame + 0x40))) {
      do {
        piVar8 = (int *)F_00ae0850(&REFG(undefined, 0x1336e40),(*(undefined * PTR32 *)(gen_frame + 0x44)));
        (*(int * PTR32 *)(gen_frame + 0x38)) = piVar8;
        if (*piVar8 == piVar4[0x1d]) {
          (*(int * PTR32 *)(gen_frame + 0x48)) = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x44)) + 1U);
          F_007d3990(this,uVar5,9,(*(uint *)(gen_frame + 0x3c)),0,piVar4,(undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x44)) + 1U),
                       (uint)*(byte *)((int)piVar8 + 0x52),(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 24)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 20)));
          uVar17 = 0;
          uVar13 = 0;
          piVar8 = piVar4;
          uVar6 = ((code *)*(gen_code32 *)(*piVar4 + 0xd4))(piVar4);
          F_00903c10(this,uVar5,(*(uint *)(gen_frame + 0x3c)),uVar6,uVar13,piVar8,uVar17);
          F_007702e0(uVar5,(*(uint *)(gen_frame + 0x3c)),(uint)piVar4,0);
          uVar16 = ((gen_lcode *)*(gen_code32 *)*piVar4)(piVar4);
          uVar6 = F_007d3cd0(this,0,piVar4[0x1d],(int)uVar16,(int)((ulonglong)uVar16 >> 0x20),
                               (undefined4)(*(ulonglong *)(gen_frame + 0x28)),(*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x28)) + 4)),(*(uint *)(gen_frame + 0x30)));
          (*(uint *)(gen_frame + 0x30)) = uVar6;
          *(undefined1 *)((int)this + 0x415) = (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x44)) + 0));
        }
        else {
          piVar14 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x424)));
          piVar11 = (int *)0x1;
          (*(int * PTR32 *)(gen_frame + 0x34)) = (int *)0x1;
          if (piVar14 != *(int * PTR32 *)((int)this + 0x424)) {
            do {
              if ((int *)piVar14[4] == piVar8 + 4) break;
              piVar11 = (int *)((int)piVar11 + 1);
              if (*(char *)((int)piVar14 + 0x15) == '\0') {
                piVar2 = (int *)piVar14[2];
                if (*(char *)((int)piVar2 + 0x15) == '\0') {
                  cVar1 = *(char *)(*piVar2 + 0x15);
                  piVar14 = piVar2;
                  piVar2 = (int *)*piVar2;
                  while (cVar1 == '\0') {
                    cVar1 = *(char *)(*piVar2 + 0x15);
                    piVar14 = piVar2;
                    piVar2 = (int *)*piVar2;
                  }
                }
                else {
                  cVar1 = *(char *)(piVar14[1] + 0x15);
                  piVar3 = (int *)piVar14[1];
                  piVar2 = piVar14;
                  while ((piVar14 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar14[2]))) {
                    cVar1 = *(char *)(piVar14[1] + 0x15);
                    piVar3 = (int *)piVar14[1];
                    piVar2 = piVar14;
                  }
                }
              }
            } while (piVar14 != *(int * PTR32 *)((int)this + 0x424));
            (*(int * PTR32 *)(gen_frame + 0x34)) = piVar11;
            if (7 < (int)piVar11) break;
          }
          (*(int * PTR32 *)(gen_frame + 0x48)) = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x44)) + 1U);
          F_007d3b80(this,uVar5,(int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x34))) * 0x13 + 9,(*(uint *)(gen_frame + 0x3c)),(*(int * PTR32 *)(gen_frame + 0x34)),piVar8,
                       (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x44)) + 1U),(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 20)));
          piVar8 = (*(int * PTR32 *)(gen_frame + 0x38));
          uVar6 = F_00ae09f0((*(int * PTR32 *)(gen_frame + 0x38)));
          F_00903c10(this,uVar5,(*(uint *)(gen_frame + 0x3c)),(*(int * PTR32 *)(gen_frame + 0x38)) + 0x1b,(*(int * PTR32 *)(gen_frame + 0x34)),uVar6,piVar8);
          piVar8 = (*(int * PTR32 *)(gen_frame + 0x34));
          uVar6 = F_00ae09f0((*(int * PTR32 *)(gen_frame + 0x38)));
          F_007702e0(uVar5,(*(uint *)(gen_frame + 0x3c)),uVar6,(uint)piVar8);
          uVar6 = F_007d3cd0(this,(*(int * PTR32 *)(gen_frame + 0x34)),*(*(int * PTR32 *)(gen_frame + 0x38)),*(*(int * PTR32 *)(gen_frame + 0x38)),0,(undefined4)(*(ulonglong *)(gen_frame + 0x28)),
                               (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x28)) + 4)),(*(uint *)(gen_frame + 0x30)));
          (*(uint *)(gen_frame + 0x30)) = uVar6;
          if ((undefined *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 16)) == (*(undefined * PTR32 *)(gen_frame + 0x44))) {
            if (*((int * PTR32 *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0xc))) != (*(int * PTR32 *)(gen_frame + 0x34))) {
              *((int * PTR32 *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0xc))) = (*(int * PTR32 *)(gen_frame + 0x34));
              *(undefined1 *)(uVar5 + 0x1d) = 1;
            }
            ((byte *)(gen_frame + 0xc))[0x10] = 0xff;
            ((byte *)(gen_frame + 0xc))[0x11] = 0xff;
            ((byte *)(gen_frame + 0xc))[0x12] = 0xff;
            ((byte *)(gen_frame + 0xc))[0x13] = 0xff;
          }
          *(char *)((int)this + 0x415 + (int)(*(int * PTR32 *)(gen_frame + 0x34))) = (char)(*(undefined * PTR32 *)(gen_frame + 0x44));
        }
        (*(undefined * PTR32 *)(gen_frame + 0x44)) = (*(int * PTR32 *)(gen_frame + 0x48));
      } while ((int)(*(int * PTR32 *)(gen_frame + 0x48)) < (int)(*(uint *)(gen_frame + 0x40)));
    }
  }
  if ((-1 < (int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 16))) && (*((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0xc))) != 0)) {
    *((undefined4 *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0xc))) = 0;
    *(undefined1 *)(uVar5 + 0x1d) = 1;
  }
  uVar12 = F_007d3710(this,uVar5,(*(uint *)(gen_frame + 0x3c)),piVar4,(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 24)));
  uVar6 = (*(uint *)(gen_frame + 0x30));
  if (uVar12 != 0) {
    pvVar7 = (undefined *)F_00a64450(&REFG(undefined, 0x14a9a18),*(undefined4 *)(uVar12 + 0x38));
    (*(int * PTR32 *)(gen_frame + 0x48)) = pvVar7;
    uVar6 = F_00770e40(((undefined1 *)(gen_frame + 0x4c)),5,uVar12 + 0x44);
    if (*((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x774))) != uVar6) {
      *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x774))) = uVar6;
      *(undefined1 *)(uVar5 + 0x1d) = 1;
    }
    F_008feed0(this,uVar5,(*(uint *)(gen_frame + 0x3c)),uVar12 + 0x44,(*(int * PTR32 *)(gen_frame + 0x48)),((undefined1 *)(gen_frame + 0x4c)),uVar6,0x1de,0xa1,0);
    uVar6 = F_007d3cd0(this,(*(uint *)(gen_frame + 0x40)),*(undefined4 *)(uVar12 + 0x38),*(undefined4 *)(uVar12 + 0x38)
                         ,0,(undefined4)(*(ulonglong *)(gen_frame + 0x28)),(*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x28)) + 4)),(*(uint *)(gen_frame + 0x30)));
  }
  if (*((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x18))) != uVar6) {
    *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x18))) = uVar6;
    *(undefined1 *)(uVar5 + 0x1d) = 1;
  }
  F_008c4110(this,uVar5,(*(uint *)(gen_frame + 0x40)),(uint)(uVar12 != 0));
  if (*((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x20))) != (uint)REFG(undefined1, 0x1338ad5)) {
    *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x20))) = (uint)REFG(undefined1, 0x1338ad5);
    *(undefined1 *)(uVar5 + 0x1d) = 1;
  }
  uVar5 = F_007704b0(this,uVar5);
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return uVar5;
}

/* ref: Client::UI2::Agent::AgentHUD::vf5 */
unsigned int F_00905880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x905880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(int *)(this + 8) != 0) {
    F_007d5840(this,param_1);
    F_008fed10(this,param_1);
    F_00905250(this,param_1);
    F_008ff820(this,param_1);
    F_008f6010(this,param_1);
    F_00826600(this,param_1);
    F_007d5030(this,param_1);
    F_007d5410(this,param_1);
    F_00770990(this,param_1);
    F_007d4ec0(this,param_1);
    F_008ddd40(this,param_1);
    F_008c4230(this,param_1);
    F_00826cd0(this,param_1);
    F_0086de20(this);
  }
  return 0;
}

/* ref: FUN_00905910 */
uint F_00905910(unsigned int gen_a0)
{
  GEN_ENTER(0x905910u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  undefined3 extraout_var_02 = 0;
  undefined3 extraout_var_03 = 0;
  undefined3 extraout_var_04 = 0;
  undefined3 extraout_var_05 = 0;
  undefined * this_00;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined * pvVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  uVar6 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  (*(uint *)(gen_frame + 0x88)) = uVar6;
  if (*(char *)((int)this + 0x44) == '\0') goto LAB_00905c71;
  iVar1 = *(int *)((int)this + 0x30);
  uVar7 = *(undefined4 *)((int)this + 0x34);
  (*(int *)(gen_frame + 0x38)) = iVar1;
  (*(undefined4 *)(gen_frame + 0x20)) = uVar7;
  if ((*(int *)((int)this + 0x2c) != 10) && (2000000 < iVar1)) {
    *(undefined4 *)((int)this + 0x2c) = 10;
  }
  (*(undefined2 *)(gen_frame + 0x44)) = 0;
  (*(undefined1 *)(gen_frame + 0x46)) = 0;
  (*(undefined1 *)(gen_frame + 0x54)) = 0;
  (*(undefined2 *)(gen_frame + 0x52)) = 30000;
  (*(undefined4 *)(gen_frame + 0x40)) = 9999;
  (*(uint *)(gen_frame + 0x30)) = 9999;
  (*(undefined2 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x60)) = 0;
  (*(undefined4 *)(gen_frame + 0x64)) = 0;
  (*(undefined2 *)(gen_frame + 0x68)) = 0;
  (*(undefined4 *)(gen_frame + 0x6a)) = 0;
  (*(undefined2 *)(gen_frame + 0x6e)) = 0;
  (*(undefined4 *)(gen_frame + 0x74)) = 0;
  (*(undefined1 *)(gen_frame + 0x78)) = 0;
  (*(uint *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x5c)) = 0;
  (*(undefined4 *)(gen_frame + 0x70)) = 0;
  (*(undefined4 *)(gen_frame + 0x7c)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  bVar5 = F_008281d0(this,&(*(undefined4 *)(gen_frame + 0x40)),&(*(uint *)(gen_frame + 0x34)),&(*(undefined4 *)(gen_frame + 0x3c)),&(*(undefined4 *)(gen_frame + 0x24)),&(*(uint *)(gen_frame + 0x30)),&(*(int *)(gen_frame + 0x38)),uVar7);
  uVar3 = (*(uint *)(gen_frame + 0x30));
  uVar6 = CONCAT31(extraout_var,bVar5);
  if (bVar5 == 0) goto LAB_00905c71;
  (*(int *)(gen_frame + 0x80)) = 0;
  (*(uint *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  bVar5 = F_00772450(this,&(*(int *)(gen_frame + 0x80)),&(*(uint *)(gen_frame + 0x34)),&(*(undefined4 *)(gen_frame + 0x2c)),(*(uint *)(gen_frame + 0x30)),(*(int *)(gen_frame + 0x38)));
  uVar6 = CONCAT31(extraout_var_00,bVar5);
  if (bVar5 == 0) goto LAB_00905c71;
  bVar5 = F_007d6d70(this,(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)));
  iVar1 = (*(int *)(gen_frame + 0x80));
  uVar4 = (*(uint *)(gen_frame + 0x34));
  uVar6 = CONCAT31(extraout_var_01,bVar5);
  if (bVar5 == 0) goto LAB_00905c71;
  *(undefined1 *)((int)this + 0x45) = 0;
  uVar6 = F_007725f0(this,(*(uint *)(gen_frame + 0x34)),(*(int *)(gen_frame + 0x80)),uVar3);
  switch((unsigned int)(uintptr_t)(uVar6)) {
  case 0: ;
    bVar5 = F_00903ce0(this,(*(undefined4 *)(gen_frame + 0x2c)),iVar1,(*(undefined4 *)(gen_frame + 0x3c)),uVar3,(*(int *)(gen_frame + 0x38)));
    uVar6 = CONCAT31(extraout_var_02,bVar5);
    if (bVar5 == 0) goto LAB_00905c71;
    if (*(char *)(iVar1 + 0xa0) == '\x11') {
      uVar6 = F_00ab21d0((uint)*(byte *)(iVar1 + 0xac));
      uVar6 = F_008f2420(this,uVar6,iVar1,(*(undefined4 *)(gen_frame + 0x3c)),uVar3,(*(int *)(gen_frame + 0x38)));
      bVar5 = (byte)uVar6;
      goto joined_r0x00905aae;
    }
    break;
  case 1: ;
    uVar6 = F_00ab21d0((uint)*(byte *)(iVar1 + 0xac));
    iVar2 = *(int *)(iVar1 + 0x74);
    (*(uint *)(gen_frame + 0x34)) = uVar6;
    if (iVar2 == 0) {
      (*(uint *)(gen_frame + 0x30)) = 0;
    }
    else {
      uVar6 = F_00ab21a0(iVar2);
      (*(uint *)(gen_frame + 0x30)) = uVar6;
    }
    uVar6 = 0;
    if ((((*(uint *)(gen_frame + 0x34)) == 0) && (*(int *)(iVar1 + 0x74) != 0)) && ((*(uint *)(gen_frame + 0x30)) == 0)) goto LAB_00905c71;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined1 *)(gen_frame + 0x84)) = 0;
    (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x80)) + 0)) = 0;
    (*(int *)(gen_frame + 0x80)) = 0;
    bVar5 = F_007724f0(&(*(undefined4 *)(gen_frame + 0xc)),&(*(int *)(gen_frame + 0x80)),(*(undefined4 *)(gen_frame + 0x3c)));
    uVar6 = CONCAT31(extraout_var_04,bVar5);
    if (bVar5 == 0) goto LAB_00905c71;
    F_00772640(this,iVar1,(*(undefined4 *)(gen_frame + 0x3c)),uVar3);
    F_008ffac0(this,(*(undefined4 *)(gen_frame + 0x2c)),iVar1,(*(undefined4 *)(gen_frame + 0x3c)),(*(int *)(gen_frame + 0x38)),uVar3);
    F_007d7520(this,(*(undefined4 *)(gen_frame + 0x3c)),*(undefined4 *)((int)this + 0x40),(*(int *)(gen_frame + 0x38)));
    uVar6 = F_008f2420(this,(*(uint *)(gen_frame + 0x34)),iVar1,(*(undefined4 *)(gen_frame + 0x3c)),uVar3,(*(int *)(gen_frame + 0x38)));
    if ((char)uVar6 == '\0') goto LAB_00905c71;
    F_00827560(this,(*(uint *)(gen_frame + 0x30)),iVar1,(*(undefined4 *)(gen_frame + 0x3c)),uVar3,(*(int *)(gen_frame + 0x38)));
    F_008277a0(this,&(*(undefined4 *)(gen_frame + 0xc)),iVar1,(*(undefined4 *)(gen_frame + 0x3c)),(*(int *)(gen_frame + 0x38)));
    bVar5 = F_007d6880(this,&(*(undefined4 *)(gen_frame + 0xc)),iVar1,(*(undefined4 *)(gen_frame + 0x3c)),&(*(int *)(gen_frame + 0x80)));
    uVar6 = CONCAT31(extraout_var_05,bVar5);
    goto joined_r0x00905aae;
  case 2: ;
    bVar5 = F_008ffca0(this,(*(undefined4 *)(gen_frame + 0x2c)),iVar1,(*(undefined4 *)(gen_frame + 0x3c)),(*(int *)(gen_frame + 0x38)),uVar3);
    uVar6 = CONCAT31(extraout_var_03,bVar5);
joined_r0x00905aae: ;
    if (bVar5 == 0) goto LAB_00905c71;
    break;
  case 3: ;
    F_008f6b90(this,uVar4,(*(undefined4 *)(gen_frame + 0x3c)),uVar3,(*(int *)(gen_frame + 0x38)));
  }
  F_007d6ca0(this,iVar1,uVar3,(*(int *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x20)));
  iVar1 = *(int *)((int)this + 0x24);
  iVar2 = *(int *)(iVar1 + 0x20);
  if (*(uint *)(iVar2 + 0x20) != (uint)*(byte *)((int)this + 0x45)) {
    *(uint *)(iVar2 + 0x20) = (uint)*(byte *)((int)this + 0x45);
    *(undefined1 *)(iVar1 + 0x1d) = 1;
  }
  iVar1 = *(int *)((int)this + 0x24);
  iVar2 = *(int *)(iVar1 + 0x20);
  if (*(int *)(iVar2 + 0x10) != *(int *)((int)this + 0x3c)) {
    *(int *)(iVar2 + 0x10) = *(int *)((int)this + 0x3c);
    *(undefined1 *)(iVar1 + 0x1d) = 1;
  }
  iVar1 = *(int *)((int)this + 0x24);
  *((uint *)GEN_TOP((*(int *)(iVar1 + 0x20) + 8))) = *((uint *)GEN_TOP((*(int *)(iVar1 + 0x20) + 8))) | 1;
  *(undefined1 *)(iVar1 + 0x1d) = 1;
  uVar6 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0x191);
  iVar1 = *(int *)((int)this + 0x24);
  uVar13 = 4;
  uVar12 = 0;
  uVar11 = 0;
  *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0xc))) = *(undefined4 *)(uVar6 + 0x14);
  *(undefined1 *)(iVar1 + 0x1d) = 1;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0x36;
  pvVar10 = this;
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar6 = F_008668b0(this_00,uVar7,uVar8,uVar9,pvVar10,uVar11,uVar12,uVar13);
  *(uint *)((int)this + 8) = uVar6;
  *(undefined1 *)((int)this + 0x44) = 0;
LAB_00905c71: ;
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return uVar6;
}

/* ref: Client::UI2::Agent::LobbyUIClient::vf17 */
byte F_00905c90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x905c90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int iVar1;
  int iVar2;
  byte bVar3;
  
  *(undefined4 *)(this + 0x28) = param_4;
  *(undefined4 *)(this + 0x14) = param_2;
  F_008be3d0(this,param_3);
  F_008be320(this,*(undefined4 *)(this + 0x14));
  iVar1 = *(int *)(this + 4);
  *(undefined2 *)(iVar1 + 0x250) = 0;
  iVar2 = *(int *)(iVar1 + 0x240);
  if (iVar2 != *(int *)(iVar1 + 0x244)) {
    F_00c46e20(iVar2,*(int *)(iVar1 + 0x244),0);
    *(int *)(iVar1 + 0x244) = iVar2;
  }
  bVar3 = F_00904e60(this);
  return bVar3;
}

/* ref: Client::UI2::Agent::AgentItemDetail::vf5 */
uint F_00905d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x905d10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2,0x1d);
  *(uint *)(this + 0x24) = uVar3;
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2,0x1a);
  iVar1 = *(int *)(this + 0x24);
  *(uint *)(this + 0x28) = uVar3;
  if ((iVar1 != 0) && (uVar3 != 0)) {
    *(undefined4 *)(this + 0x3c) = 0;
    if (*((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 8))) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 8))) = 0;
      *(undefined1 *)(iVar1 + 0x1d) = 1;
    }
    if (*(int *)(this + 8) != 0) {
      F_007d66e0(this);
      F_00827180(this);
    }
    uVar3 = F_00905910(this);
    *(undefined4 *)(this + 0x24) = 0;
    *(undefined4 *)(this + 0x28) = 0;
  }
  return uVar3;
}

/* ref: Component::GUI2::AtkMessageBoxManager::AtkMessageBoxEvent::vf0 */
uint F_00905da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x905da0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10c3e5c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00905e70 */
uint F_00905e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x905e70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0058f6c0((undefined *)((int)this + 4),param_1,6);
  return uVar1;
}

/* ref: FUN_00905e90 */
uint F_00905e90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x905e90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_005944b0((undefined *)((int)this + 4),param_1);
  return uVar1;
}

/* ref: FUN_00905ea0 */
uint F_00905ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x905ea0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x110) = param_2;
  return param_2;
}

/* ref: FUN_00905ec0 */
byte F_00905ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x905ec0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0xd) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00905ee0 */
byte F_00905ee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x905ee0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0xf) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00905f00 */
byte F_00905f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x905f00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x10) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00905f70 */
uint F_00905f70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x905f70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00596b90(this,param_1,1);
  return uVar1;
}

/* ref: FUN_00905f90 */
byte F_00905f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x905f90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (*(byte *)(in_ecx + 0xdc) & (byte)param_2) != 0;
}

/* ref: FUN_00905fb0 */
byte F_00905fb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x905fb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0x18) == param_2;
}

/* ref: FUN_00905fd0 */
byte F_00905fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x905fd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0xe) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00905fe0 */
byte F_00905fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x905fe0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0xc70) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00905ff0 */
uint F_00905ff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x905ff0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a2;
  ushort uVar1;
  
  *param_1 = *(undefined2 *)((int)this + 0xc64);
  uVar1 = *(ushort *)((int)this + 0xc66);
  *param_2 = uVar1;
  return (uint)uVar1;
}

/* ref: FUN_00906080 */
byte F_00906080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906080u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x8b) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_009060a0 */
uint F_009060a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9060a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x110) = param_2;
  return param_2;
}

/* ref: FUN_009060d0 */
byte F_009060d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9060d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x10d) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_009060f0 */
uint F_009060f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9060f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x9c) = param_2;
  return param_2;
}

/* ref: FUN_00906100 */
uint F_00906100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906100u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xa4) = param_2;
  *(undefined1 *)(in_ecx + 0x13e) = 1;
  return param_2;
}

/* ref: FUN_00906120 */
byte F_00906120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906120u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 << 6 ^ *(byte *)(in_ecx + 0xf9)) & 0x40;
  *(byte *)(in_ecx + 0xf9) = *(byte *)(in_ecx + 0xf9) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00906150 */
unsigned int F_00906150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if ((char)param_1 != '\0') {
    *(ushort *)((int)this + 0x126) = *(ushort *)((int)this + 0x126) | 0x8000;
    return 0;
  }
  *(ushort *)((int)this + 0x126) = *(ushort *)((int)this + 0x126) & 0x7fff;
  return 0;
}

/* ref: FUN_00906180 */
uint F_00906180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906180u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x120) = param_2;
  return param_2;
}

/* ref: FUN_009061a0 */
unsigned int F_009061a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9061a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(uint *)(in_ecx + 0x120) = *(uint *)(in_ecx + 0x120) | 1;
    return 0;
  }
  *(uint *)(in_ecx + 0x120) = *(uint *)(in_ecx + 0x120) & 0xfffffffe;
  return 0;
}

/* ref: FUN_009061d0 */
unsigned int F_009061d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9061d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(uint *)(in_ecx + 0x120) = *(uint *)(in_ecx + 0x120) | 0x20000;
    return 0;
  }
  *(uint *)(in_ecx + 0x120) = *(uint *)(in_ecx + 0x120) & 0xfffdffff;
  return 0;
}

/* ref: FUN_00906210 */
unsigned int F_00906210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906210u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(uint *)(in_ecx + 0x120) = *(uint *)(in_ecx + 0x120) | 2;
    return 0;
  }
  *(uint *)(in_ecx + 0x120) = *(uint *)(in_ecx + 0x120) & 0xfffffffd;
  return 0;
}

/* ref: FUN_00906230 */
unsigned int F_00906230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906230u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(uint *)(in_ecx + 0x120) = *(uint *)(in_ecx + 0x120) | 4;
    return 0;
  }
  *(uint *)(in_ecx + 0x120) = *(uint *)(in_ecx + 0x120) & 0xfffffffb;
  return 0;
}

/* ref: FUN_00906250 */
unsigned int F_00906250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906250u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(uint *)(in_ecx + 0x120) = *(uint *)(in_ecx + 0x120) | 0x10;
    return 0;
  }
  *(uint *)(in_ecx + 0x120) = *(uint *)(in_ecx + 0x120) & 0xffffffef;
  return 0;
}

/* ref: FUN_00906270 */
unsigned int F_00906270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906270u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(uint *)(in_ecx + 0x120) = *(uint *)(in_ecx + 0x120) | 0x20;
    return 0;
  }
  *(uint *)(in_ecx + 0x120) = *(uint *)(in_ecx + 0x120) & 0xffffffdf;
  return 0;
}

/* ref: FUN_00906290 */
unsigned int F_00906290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906290u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(uint *)(in_ecx + 0x120) = *(uint *)(in_ecx + 0x120) | 0x40;
    return 0;
  }
  *(uint *)(in_ecx + 0x120) = *(uint *)(in_ecx + 0x120) & 0xffffffbf;
  return 0;
}

/* ref: FUN_009062b0 */
unsigned int F_009062b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9062b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(uint *)(in_ecx + 0x120) = *(uint *)(in_ecx + 0x120) | 0x80;
    return 0;
  }
  *(uint *)(in_ecx + 0x120) = *(uint *)(in_ecx + 0x120) & 0xffffff7f;
  return 0;
}

/* ref: FUN_009062e0 */
unsigned int F_009062e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9062e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(uint *)(in_ecx + 0x120) = *(uint *)(in_ecx + 0x120) | 0x100;
    return 0;
  }
  *(uint *)(in_ecx + 0x120) = *(uint *)(in_ecx + 0x120) & 0xfffffeff;
  return 0;
}

/* ref: FUN_00906310 */
unsigned int F_00906310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906310u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(uint *)(in_ecx + 0x120) = *(uint *)(in_ecx + 0x120) | 0x200;
    return 0;
  }
  *(uint *)(in_ecx + 0x120) = *(uint *)(in_ecx + 0x120) & 0xfffffdff;
  return 0;
}

/* ref: FUN_00906340 */
unsigned int F_00906340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906340u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(uint *)(in_ecx + 0x120) = *(uint *)(in_ecx + 0x120) | 0x800;
    return 0;
  }
  *(uint *)(in_ecx + 0x120) = *(uint *)(in_ecx + 0x120) & 0xfffff7ff;
  return 0;
}

/* ref: FUN_00906370 */
unsigned int F_00906370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906370u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(uint *)(in_ecx + 0x120) = *(uint *)(in_ecx + 0x120) | 0x4000;
    return 0;
  }
  *(uint *)(in_ecx + 0x120) = *(uint *)(in_ecx + 0x120) & 0xffffbfff;
  return 0;
}

/* ref: FUN_009063a0 */
unsigned int F_009063a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9063a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(uint *)(in_ecx + 0x120) = *(uint *)(in_ecx + 0x120) | 0x8000;
    return 0;
  }
  *(uint *)(in_ecx + 0x120) = *(uint *)(in_ecx + 0x120) & 0xffff7fff;
  return 0;
}

/* ref: FUN_009063d0 */
unsigned int F_009063d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9063d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(uint *)(in_ecx + 0x120) = *(uint *)(in_ecx + 0x120) | 0x10000;
    return 0;
  }
  *(uint *)(in_ecx + 0x120) = *(uint *)(in_ecx + 0x120) & 0xfffeffff;
  return 0;
}

/* ref: FUN_00906400 */
unsigned int F_00906400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906400u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(uint *)(in_ecx + 0x120) = *(uint *)(in_ecx + 0x120) | 0x40000;
    return 0;
  }
  *(uint *)(in_ecx + 0x120) = *(uint *)(in_ecx + 0x120) & 0xfffbffff;
  return 0;
}

/* ref: FUN_00906430 */
byte F_00906430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906430u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = (((char)param_2 == '\0') << 5 ^ *(byte *)(in_ecx + 0xfb)) & 0x20;
  *(byte *)(in_ecx + 0xfb) = *(byte *)(in_ecx + 0xfb) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00906450 */
byte F_00906450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906450u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 << 4 ^ *(byte *)(in_ecx + 0xf9)) & 0x10;
  *(byte *)(in_ecx + 0xf9) = *(byte *)(in_ecx + 0xf9) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00906480 */
byte F_00906480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906480u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x10f) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_009064a0 */
byte F_009064a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9064a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x10e) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_009064c0 */
uint F_009064c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9064c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0059d640(*(undefined * PTR32 *)((int)this + 0x90),param_1);
  return uVar1;
}

/* ref: FUN_009064f0 */
ushort F_009064f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9064f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ushort uVar1;
  
  uVar1 = F_00567f90(*(undefined * PTR32 *)((int)this + 0x90),param_1);
  return uVar1;
}

/* ref: FUN_00906500 */
uint F_00906500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00567ff0(*(undefined * PTR32 *)((int)this + 0x90),param_1);
  return uVar1;
}

/* ref: FUN_00906510 */
uint F_00906510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if (param_1 != (int *)0x0) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x3c))(param_1);
    *(uint *)((int)this + 0xa8) = uVar1;
    return uVar1;
  }
  *(undefined4 *)((int)this + 0xa8) = 0;
  return 0;
}

/* ref: FUN_00906540 */
byte F_00906540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906540u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x13f) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00906550 */
byte F_00906550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906550u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = (((char)param_2 == '\0') << 5 ^ *(byte *)(in_ecx + 0xf8)) & 0x20;
  *(byte *)(in_ecx + 0xf8) = *(byte *)(in_ecx + 0xf8) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00906570 */
byte F_00906570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906570u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = (((char)param_2 == '\0') << 4 ^ *(byte *)(in_ecx + 0xfb)) & 0x10;
  *(byte *)(in_ecx + 0xfb) = *(byte *)(in_ecx + 0xfb) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00906590 */
byte F_00906590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906590u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 << 4 ^ *(byte *)(in_ecx + 0xfa)) & 0x10;
  *(byte *)(in_ecx + 0xfa) = *(byte *)(in_ecx + 0xfa) ^ bVar1;
  return bVar1;
}

/* ref: FUN_009065b0 */
byte F_009065b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9065b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 << 5 ^ *(byte *)(in_ecx + 0xf9)) & 0x20;
  *(byte *)(in_ecx + 0xf9) = *(byte *)(in_ecx + 0xf9) ^ bVar1;
  return bVar1;
}

/* ref: FUN_009065d0 */
byte F_009065d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9065d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = (((char)param_2 == '\0') << 5 ^ *(byte *)(in_ecx + 0xfa)) & 0x20;
  *(byte *)(in_ecx + 0xfa) = *(byte *)(in_ecx + 0xfa) ^ bVar1;
  return bVar1;
}

/* ref: FUN_009065f0 */
byte F_009065f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9065f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 << 6 ^ *(byte *)(in_ecx + 0xfb)) & 0x40;
  *(byte *)(in_ecx + 0xfb) = *(byte *)(in_ecx + 0xfb) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00906610 */
byte F_00906610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_1 == '\0') << 7 | *(byte *)((int)this + 0xf9) & 0x7f;
  *(byte *)((int)this + 0xf9) = bVar1;
  *(byte *)((int)this + 0xfb) = (*(byte *)((int)this + 0xfb) ^ bVar1) & 0x7f ^ bVar1;
  return bVar1;
}

/* ref: FUN_00906650 */
byte F_00906650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_1 == '\0') << 7 | *(byte *)((int)this + 0xfb) & 0x7f;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) & 0x7f;
  *(byte *)((int)this + 0xfb) = bVar1;
  return bVar1;
}

/* ref: FUN_00906680 */
byte F_00906680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906680u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 * '\x02' ^ *(byte *)(in_ecx + 0xfa)) & 2;
  *(byte *)(in_ecx + 0xfa) = *(byte *)(in_ecx + 0xfa) ^ bVar1;
  return bVar1;
}

/* ref: FUN_009066a0 */
ushort F_009066a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9066a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x136) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_009066c0 */
byte F_009066c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9066c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = (((char)param_2 == '\0') << 6 ^ *(byte *)(in_ecx + 0xfa)) & 0x40;
  *(byte *)(in_ecx + 0xfa) = *(byte *)(in_ecx + 0xfa) ^ bVar1;
  return bVar1;
}

/* ref: FUN_009066e0 */
byte F_009066e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9066e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 * '\b' ^ *(byte *)(in_ecx + 0xfb)) & 8;
  *(byte *)(in_ecx + 0xfb) = *(byte *)(in_ecx + 0xfb) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00906730 */
byte F_00906730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906730u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 * '\x04' ^ *(byte *)(in_ecx + 0x1b0)) & 4;
  *(byte *)(in_ecx + 0x1b0) = *(byte *)(in_ecx + 0x1b0) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00906750 */
uint F_00906750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906750u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xd4) = param_2;
  return param_2;
}

/* ref: FUN_00906770 */
uint F_00906770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906770u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xd8) = param_2;
  return param_2;
}

/* ref: FUN_00906780 */
uint F_00906780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906780u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xdc) = param_2;
  return param_2;
}

/* ref: FUN_00906790 */
uint F_00906790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906790u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xe0) = param_2;
  return param_2;
}

/* ref: FUN_009067a0 */
uint F_009067a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9067a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xe4) = param_2;
  return param_2;
}

/* ref: FUN_009067c0 */
uint F_009067c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9067c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xec) = param_2;
  return param_2;
}

/* ref: FUN_009067d0 */
uint F_009067d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9067d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00572ff0(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00906880 */
byte F_00906880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906880u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x204) = (byte)param_2;
  return (byte)param_2;
}

/* ref: Client::UI2::RaptureAtkColorDataManager::vf0 */
uint F_009068e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9068e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10c3e68));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00906910 */
ushort F_00906910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906910u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(ushort *)(in_ecx + 6 + param_2 * 0xc);
}

/* ref: FUN_00906a50 */
ushort F_00906a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906a50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x2ea4) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00906a70 */
byte F_00906a70(unsigned int gen_a0)
{
  GEN_ENTER(0x906a70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  byte * pbVar2;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xd8))(this);
  if (uVar1 != 0) {
    pbVar2 = ((byte *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xd8))(this)));
    return *pbVar2;
  }
  return 0;
}

/* ref: FUN_00906aa0 */
uint F_00906aa0(unsigned int gen_a0)
{
  GEN_ENTER(0x906aa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xd8))(this);
  if (uVar1 != 0) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xd8))(this);
    uVar1 = F_00ac1a20((uint)*(byte *)(uVar1 + 1),*(undefined4 *)(uVar1 + 4));
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00906ae0 */
float F_00906ae0(unsigned int gen_a0)
{
  GEN_ENTER(0x906ae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xd8))();
  if (uVar1 != 0) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xd8))(this);
    return *(float *)(uVar1 + 0x34);
  }
  return 0.0;
}

/* ref: FUN_00906b30 */
float F_00906b30(unsigned int gen_a0)
{
  GEN_ENTER(0x906b30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xd8))();
  if (uVar1 != 0) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xd8))(this);
    return *(float *)(uVar1 + 0x38);
  }
  return 0.0;
}

/* ref: FUN_00906cf0 */
uint F_00906cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906cf0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00906d10 */
ushort F_00906d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906d10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 4) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00906d30 */
ulonglong F_00906d30(unsigned int gen_a0)
{
  GEN_ENTER(0x906d30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  while( true ) {
    if (*(char *)((int)this + 6) == '\0') break;
    uVar1 = F_00a3a860(this);
    if (uVar1 == 0) break;
    this = (undefined *)F_00a3a860(this);
  }
  return *(ulonglong *)((int)this + 0x18);
}

/* ref: FUN_00906d60 */
ushort F_00906d60(unsigned int gen_a0)
{
  GEN_ENTER(0x906d60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort uVar1;
  uint uVar2;
  undefined * this_00;
  
  if (*(char *)((int)this + 6) != '\0') {
    uVar2 = F_00a3a860(this);
    if (uVar2 != 0) {
      this_00 = (undefined *)F_00a3a860(this);
      uVar1 = F_00906d60(this_00);
      return uVar1;
    }
  }
  return *(ushort *)((int)this + 0x12);
}

/* ref: FUN_00906d90 */
byte F_00906d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906d90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 == '\x01') {
    *(byte *)(in_ecx + 0x14) = *(byte *)(in_ecx + 0x14) | 1;
    return 1;
  }
  *(byte *)(in_ecx + 0x14) = *(byte *)(in_ecx + 0x14) & 0xfe;
  return 1;
}

/* ref: FUN_00906db0 */
byte F_00906db0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x906db0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  *(ushort *)((int)this + (uint)(byte)param_1 * 2 + 0x20) = (ushort)param_2 >> 4;
  bVar1 = (byte)(ushort)param_2 & 0xf;
  *(byte *)((byte)param_1 + 0x2a + (int)this) = bVar1;
  return bVar1;
}

/* ref: FUN_00906de0 */
uint F_00906de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906de0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x3c) = param_2;
  return param_2;
}

/* ref: FUN_00906df0 */
uint F_00906df0(unsigned int gen_a0)
{
  GEN_ENTER(0x906df0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined * this_00;
  
  if (*(char *)((int)this + 6) == '\0') {
    return *(uint *)((int)this + 8);
  }
  this_00 = (undefined *)F_00a3a860(this);
  cVar1 = *(char *)((int)this_00 + 6);
  while (cVar1 == '\0') {
    this_00 = (undefined *)F_00a3a860(this_00);
    cVar1 = *(char *)((int)this_00 + 6);
  }
  return *(uint *)((int)this_00 + 8);
}

/* ref: FUN_00906e20 */
uint F_00906e20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x906e20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00a3bd60(this,param_1);
  *(undefined1 *)((int)this + 0x40) = (undefined1)param_2;
  *(undefined1 *)((int)this + 0x41) = (undefined1)param_3;
  *(undefined4 *)((int)this + 0x44) = 0;
  return uVar1;
}

/* ref: FUN_00906e80 */
uint F_00906e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906e80u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  double dVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((int)param_2 <= param_1) {
    return 100;
  }
  dVar1 = (double)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1088118)) /
                         (float10)(int)param_2)));
  if (dVar1 < 0.0) {
    return (int)(dVar1 - REFG(double, 0x1088108));
  }
  return (int)(dVar1 + REFG(double, 0x1088108));
}

/* ref: FUN_00906ed0 */
uint F_00906ed0(float gen_a0, float gen_a1)
{
  GEN_ENTER(0x906ed0u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), 0u, 0u);
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  double dVar1;
  
  if ((GEN_ISNAN(param_2) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) !=
      ((GEN_ISNAN(param_2) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || param_2 == *(float *)&REFG(undefined, 0x1088114))) {
    return 0;
  }
  if ((float10)param_2 <= (float10)param_1) {
    return 100;
  }
  dVar1 = (double)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1088118)) / (float10)param_2)))
  ;
  if (dVar1 < 0.0) {
    return (int)(dVar1 - REFG(double, 0x1088108));
  }
  return (int)(dVar1 + REFG(double, 0x1088108));
}

/* ref: FUN_00906f30 */
uint F_00906f30(unsigned int gen_a0)
{
  GEN_ENTER(0x906f30u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (param_1 == 0x20) {
    return 2;
  }
  if (param_1 != 0x21) {
    return 1;
  }
  return 4;
}

/* ref: FUN_00906f60 */
uint F_00906f60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906f60u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != 0) {
    return (param_2 + 0x26c) * 100 + param_1;
  }
  return 0;
}

/* ref: FUN_00906f80 */
uint F_00906f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x906f80u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != 0) {
    return (param_2 + 0x26d) * 100 + param_1;
  }
  return 0;
}

/* ref: FUN_00906fa0 */
uint F_00906fa0(unsigned int gen_a0)
{
  GEN_ENTER(0x906fa0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_0043f8b0(param_1 + 1000000);
  return uVar1;
}

/* ref: FUN_00906fc0 */
uint F_00906fc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x906fc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  return CONCAT31(CONCAT21(CONCAT11((undefined1)param_4,(undefined1)param_3),(undefined1)param_2),
                  (undefined1)param_1);
}

/* ref: FUN_00906ff0 */
byte F_00906ff0(unsigned int gen_a0)
{
  GEN_ENTER(0x906ff0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return (byte)param_1;
}

/* ref: FUN_00907000 */
uint F_00907000(unsigned int gen_a0)
{
  GEN_ENTER(0x907000u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 >> 8;
}

/* ref: FUN_00907010 */
uint F_00907010(unsigned int gen_a0)
{
  GEN_ENTER(0x907010u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 >> 0x10;
}

/* ref: FUN_00907020 */
uint F_00907020(unsigned int gen_a0)
{
  GEN_ENTER(0x907020u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 >> 0x18;
}

/* ref: Client::UI2::Agent::AgentInterface::vf5 */
unsigned int F_00907060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x907060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00907090 */
uint F_00907090(unsigned int gen_a0)
{
  GEN_ENTER(0x907090u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * this_00;
  
  this_00 = (undefined4 *)((int)this + 0xc);
  *(undefined4 *)this = 0x4000000;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined2 *)((int)this + 8) = 0;
  *(undefined1 *)((int)this + 10) = 0;
  F_0068e790(this_00);
  F_00c48350((undefined *)((int)this + 0x54),0,0x70);
  *this_00 = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined2 *)((int)this + 0x24) = 0;
  *(undefined1 *)((int)this + 0xe) = 1;
  F_00b88e00(this_00,this_00);
  return (uint)this;
}

/* ref: FUN_00907100 */
uint F_00907100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x907100u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00907170 */
uint F_00907170(unsigned int gen_a0)
{
  GEN_ENTER(0x907170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x10c3ea0));
  uVar1 = 0;
  if (*(int *)((int)this + 0x3208) != 0) {
    uVar2 = F_00406b30(*(int *)((int)this + 0x3208));
    uVar1 = (uint)uVar2;
    *(undefined4 *)((int)this + 0x3208) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x10c3e70));
  return uVar1;
}

/* ref: Client::System::Configuration::CharamakeAvatarSaveDataContainer::FixedContainer::vf1 */
byte F_009071c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9071c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if (0x27 < param_1) {
    return 0;
  }
  return *(int *)(this + param_1 * 0x140 + 0x138) == 1;
}

/* ref: Client::System::Configuration::CharamakeAvatarSaveDataContainer::FixedContainer::vf2 */
uint F_009071f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9071f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (0x27 < param_2) {
    return 0;
  }
  return param_2 * 0x140 + 4 + in_ecx;
}

/* ref: Client::System::Configuration::CharamakeAvatarSaveDataContainer::FixedContainer::vf3 */
uint F_00907210(unsigned int gen_a0)
{
  GEN_ENTER(0x907210u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x3204);
}

/* ref: Client::System::Configuration::CharamakeAvatarSaveDataContainer::FixedContainer::vf4 */
unsigned int F_00907220(unsigned int gen_a0)
{
  GEN_ENTER(0x907220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pFVar1;
  int iVar2;
  
  *(undefined4 *)(this + 0x3204) = 0;
  pFVar1 = this + 0x278;
  iVar2 = 8;
  do {
    if (*(int *)(pFVar1 + -0x140) == 1) {
      *(int *)(this + 0x3204) = *(int *)(this + 0x3204) + 1;
    }
    if (*(int *)pFVar1 == 1) {
      *(int *)(this + 0x3204) = *(int *)(this + 0x3204) + 1;
    }
    if (*(int *)(pFVar1 + 0x140) == 1) {
      *(int *)(this + 0x3204) = *(int *)(this + 0x3204) + 1;
    }
    if (*(int *)(pFVar1 + 0x280) == 1) {
      *(int *)(this + 0x3204) = *(int *)(this + 0x3204) + 1;
    }
    if (*(int *)(pFVar1 + 0x3c0) == 1) {
      *(int *)(this + 0x3204) = *(int *)(this + 0x3204) + 1;
    }
    pFVar1 = pFVar1 + 0x640;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 0;
}

/* ref: Client::System::Configuration::CharamakeAvatarSaveDataContainer::FixedContainer::vf5 */
uint F_00907290(void)
{
  GEN_ENTER(0x907290u, 0u, 0u, 0u, 0u);
  return 0x28;
}

/* ref: Client::System::Configuration::CharamakeAvatarSaveDataContainer::ContainerInterface::vf0 */
uint F_009072c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9072c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x10c3e70));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Configuration::CharamakeAvatarSaveDataContainer::FixedContainer::vf0 */
uint F_009072f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9072f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x10c3ea0));
  if (*(int *)(this + 0x3208) != 0) {
    F_00406b30(*(int *)(this + 0x3208));
    *(undefined4 *)(this + 0x3208) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x10c3e70));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00907350 */
unsigned int F_00907350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x907350u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(byte *)(in_ecx + 0x2c24c) = *(byte *)(in_ecx + 0x2c24c) | 2;
    return 0;
  }
  *(byte *)(in_ecx + 0x2c24c) = *(byte *)(in_ecx + 0x2c24c) & 0xfd;
  return 0;
}

/* ref: FUN_00907370 */
unsigned int F_00907370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x907370u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(byte *)(in_ecx + 0x2c24c) = *(byte *)(in_ecx + 0x2c24c) | 0x40;
    return 0;
  }
  *(byte *)(in_ecx + 0x2c24c) = *(byte *)(in_ecx + 0x2c24c) & 0xbf;
  return 0;
}

/* ref: Client::UI::Misc::ConfigModule::ConfigEventInterface::vf0 */
uint F_009073f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9073f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10c3ed0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00907450 */
byte F_00907450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x907450u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  if ((*(int *)((int)this + 0x48) == param_1) && (*(int *)((int)this + 0x4c) == param_2)) {
    *(int *)((int)this + 0x4c) = param_2;
    *(int *)((int)this + 0x48) = param_1;
    return 0;
  }
  *(int *)((int)this + 0x4c) = param_2;
  *(int *)((int)this + 0x48) = param_1;
  return 1;
}

/* ref: FUN_009074a0 */
uint F_009074a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9074a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0x6b90 + param_2 * 4);
}

/* ref: FUN_009074d0 */
uint F_009074d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9074d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0x70f4 + param_2 * 4);
}

/* ref: FUN_00907500 */
uint F_00907500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x907500u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0x71d4 + param_2 * 4);
}

/* ref: FUN_00907590 */
byte F_00907590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x907590u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (*(byte *)(in_ecx + 0x230bf) & (byte)param_2) != 0;
}

/* ref: FUN_009075f0 */
uint F_009075f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9075f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0042e430((undefined *)((int)this + 0xc4),&REFG(undefined1, 0x107fc63));
  uVar1 = F_0042e430((undefined *)((int)this + 0x118),&REFG(undefined1, 0x107fc63));
  return uVar1;
}

/* ref: FUN_00907620 */
uint F_00907620(unsigned int gen_a0)
{
  GEN_ENTER(0x907620u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
  F_0042b630(in_ecx + 1);
  in_ecx[0x16] = 0;
  in_ecx[0x17] = 0;
  in_ecx[0x18] = 0;
  *(undefined2 *)(in_ecx + 0x19) = 0;
  *(undefined1 *)((int)in_ecx + 0x66) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00907680 */
uint F_00907680(unsigned int gen_a0)
{
  GEN_ENTER(0x907680u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
  F_0042b630(in_ecx + 1);
  *(byte *)((int)in_ecx + 0x6d) = *(byte *)((int)in_ecx + 0x6d) & 0xfe;
  in_ecx[0x16] = 0;
  in_ecx[0x17] = 0;
  in_ecx[0x18] = 0;
  *(undefined2 *)(in_ecx + 0x19) = 0;
  *(undefined1 *)((int)in_ecx + 0x66) = 0;
  in_ecx[0x1a] = 0;
  *(undefined1 *)(in_ecx + 0x1b) = 0;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10c3efc));
  return (uint)in_ecx;
}

/* ref: FUN_009076d0 */
uint F_009076d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9076d0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
  F_0042b630(in_ecx + 1);
  in_ecx[0x16] = 0;
  in_ecx[0x17] = 0;
  in_ecx[0x18] = 0;
  *(undefined2 *)(in_ecx + 0x19) = 0;
  *(undefined1 *)((int)in_ecx + 0x66) = 0;
  in_ecx[0x1a] = 0;
  in_ecx[0x1b] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10c3f0c));
  return (uint)in_ecx;
}

/* ref: Client::UI2::RaptureAtkModule::CrystalCache::vf0 */
uint F_009077c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9077c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
  F_0042c880(this + 4);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::UIInputData::KeyLoadInterface::vf0 */
uint F_00907850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x907850u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10c3f1c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_009078f0 */
byte F_009078f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9078f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(byte *)(param_2 + 0x224 + in_ecx);
}

/* ref: FUN_00907940 */
byte F_00907940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x907940u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 == *((char *)GEN_TOP((*(int *)(in_ecx + 0x28) + 5)));
}

/* ref: FUN_00907960 */
uint F_00907960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x907960u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (uint)*((byte *)GEN_TOP((*(int *)(in_ecx + 0x40) + 0xd + param_2)));
}

/* ref: FUN_00907980 */
uint F_00907980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x907980u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (uint)*((byte *)GEN_TOP((*(int *)(in_ecx + 0x40) + 0x15 + param_2)));
}

/* ref: FUN_009079b0 */
uint F_009079b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9079b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (uint)(byte)param_2 * 0x60 + 0x32c + in_ecx;
}

/* ref: FUN_009079d0 */
uint F_009079d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9079d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (uint)(byte)param_2 * 0x54 + 0xe0 + in_ecx;
}

/* ref: FUN_00907a20 */
byte F_00907a20(unsigned int gen_a0)
{
  GEN_ENTER(0x907a20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((*(int *)(in_ecx + 4) != 0) && (*(int *)(in_ecx + 4) != 1)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00907af0 */
uint F_00907af0(unsigned int gen_a0)
{
  GEN_ENTER(0x907af0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if ((*(uint *)((int)this + 100) != 0) &&
     (uVar1 = (uint)(*(int *)((int)this + 0x60) * 100) / *(uint *)((int)this + 100), 100 < uVar1)) {
    uVar1 = 100;
  }
  return uVar1;
}

/* ref: FUN_00907b30 */
uint F_00907b30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x907b30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  if ((param_2 <= *(int *)((int)this + 0x6c)) &&
     ((param_2 < *(int *)((int)this + 0x6c) || (param_1 <= *(uint *)((int)this + 0x68))))) {
    return *(uint *)((int)this + 0x68) - param_1;
  }
  return 0;
}

/* ref: FUN_00907b60 */
uint F_00907b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x907b60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return in_ecx + 0x7c + param_2 * 0x18;
}

/* ref: FUN_00907bc0 */
uint F_00907bc0(unsigned int gen_a0)
{
  GEN_ENTER(0x907bc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((*(byte *)(in_ecx + 0x32) & 1) == 0) {
    return *(uint *)(in_ecx + 8);
  }
  return 0;
}

/* ref: FUN_00907ce0 */
uint F_00907ce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x907ce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *(undefined1 *)((int)this + 0x1e) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00907cf0 */
uint F_00907cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x907cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *(undefined1 *)((int)this + 0x1f) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00907d00 */
uint F_00907d00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x907d00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *(undefined1 *)((int)this + 0x20) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00907d10 */
uint F_00907d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x907d10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *(undefined1 *)((int)this + 0x21) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00907d20 */
uint F_00907d20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x907d20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *(undefined1 *)((int)this + 0x22) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00907d30 */
uint F_00907d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x907d30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *(undefined1 *)((int)this + 0x23) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00907d40 */
unsigned int F_00907d40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x907d40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  undefined1 * puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  if ((ushort)param_1 <= (ushort)param_2) {
    puVar1 = (undefined1 *)((ushort)param_1 + 4 + (int)this);
    uVar3 = (uint)(ushort)(((ushort)param_2 - (ushort)param_1) + 1);
    do {
      *puVar1 = *((undefined1 *)GEN_TOP(((uVar2 & 0xffff) + param_3)));
      puVar1 = puVar1 + 1;
      uVar2 = uVar2 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return 0;
}

/* ref: FUN_00907d90 */
uint F_00907d90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x907d90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined1 *)this = (undefined1)param_1;
  *(undefined1 *)((int)this + 1) = (undefined1)param_2;
  *(undefined1 *)((int)this + 2) = (undefined1)param_3;
  *(uint *)this = *(uint *)this | 0xff000000;
  return (uint)this;
}

/* ref: FUN_00907db0 */
uint F_00907db0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x907db0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(char *)this = (char)param_1;
  *(char *)((int)this + 2) = (char)((uint)param_1 >> 0x10);
  *(char *)((int)this + 1) = (char)((uint)param_1 >> 8);
  *(undefined1 *)((int)this + 3) = (undefined1)param_2;
  return (uint)this;
}

/* ref: FUN_009080e0 */
byte F_009080e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9080e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  return (*((byte *)GEN_TOP(((param_1 >> 3) + 0xb0bc + (int)this))) & (byte)(1 << ((byte)param_1 & 7))) != 0;
}

/* ref: FUN_00908160 */
uint F_00908160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x908160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  return (uint)this;
}

/* ref: FUN_009081b0 */
uint F_009081b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9081b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  return (uint)this;
}

/* ref: FUN_00908310 */
uint F_00908310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x908310u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x6c + 0x2d28 + in_ecx;
}

/* ref: FUN_00908340 */
uint F_00908340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x908340u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x6c + 0x3238 + in_ecx;
}

/* ref: FUN_00908360 */
byte F_00908360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x908360u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (*(byte *)(in_ecx + 0x33d9) & (byte)param_2) != 0;
}

/* ref: FUN_00908380 */
byte F_00908380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x908380u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x33d9) = *(byte *)(in_ecx + 0x33d9) | (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00908390 */
byte F_00908390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x908390u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x33d9) = *(byte *)(in_ecx + 0x33d9) & ~(byte)param_2;
  return ~(byte)param_2;
}

/* ref: FUN_009083b0 */
byte F_009083b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9083b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0x338c) == param_2;
}

/* ref: FUN_009083d0 */
byte F_009083d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9083d0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return (*(uint *)((*(int *)&gen_args[0]) + 0x33b0) & (*(uint *)&gen_args[1])) != 0;
}

/* ref: FUN_009083f0 */
uint F_009083f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9083f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x33b0) = param_2;
  return param_2;
}

/* ref: FUN_00908400 */
uint F_00908400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x908400u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x33b0) = *(uint *)(in_ecx + 0x33b0) | param_2;
  return param_2;
}

/* ref: FUN_00908410 */
uint F_00908410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x908410u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x33b0) = *(uint *)(in_ecx + 0x33b0) & ~param_2;
  return ~param_2;
}

/* ref: FUN_00908430 */
byte F_00908430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x908430u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return (*(uint *)((*(int *)&gen_args[0]) + 0x33b4) & (*(uint *)&gen_args[1])) != 0;
}

/* ref: FUN_00908450 */
uint F_00908450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x908450u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x33b4) = param_2;
  return param_2;
}

/* ref: FUN_00908460 */
uint F_00908460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x908460u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x33b4) = *(uint *)(in_ecx + 0x33b4) | param_2;
  return param_2;
}

/* ref: FUN_00908470 */
uint F_00908470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x908470u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x33b4) = *(uint *)(in_ecx + 0x33b4) & ~param_2;
  return ~param_2;
}

/* ref: FUN_009084a0 */
uint F_009084a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9084a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_0042cbc0(this,param_1);
  *(undefined4 *)((int)this + 0x54) = param_2;
  return (uint)this;
}

/* ref: FUN_009084c0 */
uint F_009084c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9084c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009084d0 */
byte F_009084d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9084d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  return uVar1 == *(uint *)this;
}

/* ref: FUN_009084f0 */
byte F_009084f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9084f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(byte *)(param_1 + 0x14);
}

/* ref: Client::UI2::Agent::AgentMap::ParamFunctor::vf0 */
uint F_00908550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x908550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10c3f28));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentMap::MapStructCompare::vf0 */
uint F_00908590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x908590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10c3f38));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_009085f0 */
byte F_009085f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9085f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x61) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00908600 */
byte F_00908600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x908600u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (*(byte *)(in_ecx + 0xdd6) & (byte)param_2) != 0;
}

/* ref: FUN_00908620 */
byte F_00908620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x908620u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0xdd6) = *(byte *)(in_ecx + 0xdd6) | (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00908630 */
uint F_00908630(unsigned int gen_a0)
{
  GEN_ENTER(0x908630u, gen_a0, 0u, 0u, 0u);
  undefined1 * in_ecx = (undefined1 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  F_0042b630(in_ecx + 4);
  F_0042b630(in_ecx + 0x58);
  *(undefined4 *)(in_ecx + 0xac) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00908660 */
uint F_00908660(unsigned int gen_a0)
{
  GEN_ENTER(0x908660u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx);
  F_0042b630(in_ecx + 0x54);
  *(undefined4 *)(in_ecx + 0xa8) = 0;
  *(undefined2 *)(in_ecx + 0xac) = 0;
  return in_ecx;
}

/* ref: FUN_00908690 */
uint F_00908690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x908690u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = param_4;
  return (uint)this;
}

/* ref: FUN_009086b0 */
uint F_009086b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x9086b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = param_4;
  *(undefined4 *)((int)this + 0x10) = param_5;
  *(undefined4 *)((int)this + 0x14) = param_6;
  *(undefined4 *)((int)this + 0x18) = param_7;
  return (uint)this;
}

/* ref: FUN_00908700 */
uint F_00908700(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x908700u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  return (uint)in_ecx;
}

/* ref: FUN_00908720 */
uint F_00908720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x908720u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0xc) = param_3;
  F_0042cbc0((undefined *)((int)this + 0x10),param_4);
  F_0042b630((int)this + 100);
  *(undefined1 *)((int)this + 0xb8) = (undefined1)param_5;
  *(undefined1 *)((int)this + 0xb9) = (undefined1)param_6;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  return (uint)this;
}

/* ref: FUN_009087a0 */
uint F_009087a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9087a0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx + 0x1c);
  F_0042b630(in_ecx + 0x70);
  F_0042b630(in_ecx + 0xc4);
  F_0042b630(in_ecx + 0x118);
  F_0042b630(in_ecx + 0x16c);
  return in_ecx;
}

/* ref: FUN_009087e0 */
uint F_009087e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9087e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0x16c));
  F_0042c880((undefined *)((int)this + 0x118));
  F_0042c880((undefined *)((int)this + 0xc4));
  F_0042c880((undefined *)((int)this + 0x70));
  uVar1 = F_0042c880((undefined *)((int)this + 0x1c));
  return (uint)uVar1;
}

/* ref: Client::UI2::RaptureAtkModule::InventoryCache::vf0 */
uint F_00908820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x908820u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pIVar1;
  int iVar2;
  undefined * pIVar3;
  
  if ((param_1 & 2) == 0) {
    *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
    F_0042c880(this + 4);
    if ((param_1 & 1) != 0) {
      F_00406ad0(this);
    }
  }
  else {
    pIVar1 = this + -4;
    iVar2 = *(int *)pIVar1;
    pIVar3 = this + iVar2 * 0x70;
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      *(undefined * PTR32 * PTR32 *)(pIVar3 + -0x70) = (*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
      F_0042c880(pIVar3 + -0x6c);
      pIVar3 = pIVar3 + -0x70;
    }
    this = pIVar1;
    if ((param_1 & 1) != 0) {
      F_00406b30(pIVar1);
      return (uint)pIVar1;
    }
  }
  return (uint)this;
}

/* ref: Client::UI2::RaptureAtkModule::ItemCache::vf0 */
uint F_009088a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9088a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pIVar1;
  int iVar2;
  undefined * pIVar3;
  
  if ((param_1 & 2) == 0) {
    *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
    F_0042c880(this + 4);
    if ((param_1 & 1) != 0) {
      F_00406ad0(this);
    }
  }
  else {
    pIVar1 = this + -4;
    iVar2 = *(int *)pIVar1;
    pIVar3 = this + iVar2 * 0x68;
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      *(undefined * PTR32 * PTR32 *)(pIVar3 + -0x68) = (*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
      F_0042c880(pIVar3 + -100);
      pIVar3 = pIVar3 + -0x68;
    }
    this = pIVar1;
    if ((param_1 & 1) != 0) {
      F_00406b30(pIVar1);
      return (uint)pIVar1;
    }
  }
  return (uint)this;
}

/* ref: FUN_00908920 */
uint F_00908920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x908920u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + (char)param_1 * 4 + 0x40) = param_2;
  return (int)(char)param_1;
}

/* ref: FUN_00908940 */
uint F_00908940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x908940u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x40) = param_2;
  *(uint *)(in_ecx + 0x44) = param_2;
  *(uint *)(in_ecx + 0x48) = param_2;
  *(uint *)(in_ecx + 0x4c) = param_2;
  return param_2;
}

/* ref: Component::GUI2::AtkManagedInterface::vf2 */
uint F_00908980(unsigned int gen_a0)
{
  GEN_ENTER(0x908980u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xc))(this)));
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1,1,0);
  }
  return uVar2;
}

/* ref: Component::GUI2::AtkManagedInterface::vf0 */
uint F_009089a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9089a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10c3f58));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_009089e0 */
uint F_009089e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9089e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return (uint)this;
}

/* ref: FUN_00908a00 */
uint F_00908a00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x908a00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0xc) = 0;
  return (uint)this;
}

/* ref: FUN_00908a60 */
uint F_00908a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x908a60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x94) = param_2;
  return param_2;
}

/* ref: FUN_00908a70 */
byte F_00908a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x908a70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x11d) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00908a80 */
byte F_00908a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x908a80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x113) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00908a90 */
byte F_00908a90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x908a90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x11c) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00908aa0 */
byte F_00908aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x908aa0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x11e) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00908ab0 */
byte F_00908ab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x908ab0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(byte *)((int)this + 0x121) = (byte)param_1;
  *(undefined1 *)((int)this + 0x122) = (undefined1)param_2;
  return (byte)param_1;
}

/* ref: FUN_00908ae0 */
byte F_00908ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x908ae0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x125) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00908af0 */
uint F_00908af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x908af0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xe4) = param_2;
  return param_2;
}

/* ref: FUN_00908b30 */
byte F_00908b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x908b30u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return (*(uint *)((*(int *)&gen_args[0]) + 0x188) & (*(uint *)&gen_args[1])) == (*(uint *)&gen_args[1]);
}

/* ref: FUN_00908b50 */
uint F_00908b50(unsigned int gen_a0)
{
  GEN_ENTER(0x908b50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  if (*((char *)GEN_TOP((*(int *)((int)this + 400) + 0x88))) == '\x01') {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x184) + 0x28))))(*(int * PTR32 *)((int)this + 0x184),1);
    return uVar2;
  }
  if (*(char *)((int)this + 0x19e) == '\0') {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x184) + 0x28))))(*(int * PTR32 *)((int)this + 0x184),0);
  }
  bVar1 = F_0055a300(*(undefined * PTR32 *)((int)this + 0x194),0);
  *(undefined1 *)((int)this + 0x19c) = 0;
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00908be0 */
ushort F_00908be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x908be0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x134) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00908c00 */
byte F_00908c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x908c00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x136) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00908c20 */
uint F_00908c20(unsigned int gen_a0)
{
  GEN_ENTER(0x908c20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00561390();
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x60))(this,uVar1 + 0xc0);
  return uVar1;
}

/* ref: FUN_00908c40 */
byte F_00908c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x908c40u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return (*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18c))) & (*(uint *)&gen_args[1])) == (*(uint *)&gen_args[1]);
}

/* ref: FUN_00908c60 */
uint F_00908c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x908c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  short sVar1;
  uint in_EAX = 0;
  uint uVar2;
  short sVar3;
  int iVar4;
  
  if (param_1 <= *(uint *)((int)this + 0x188)) {
    F_0059dde0(*((undefined * PTR32 *)GEN_TOP(((int)this + *(int *)((int)this + 0x184) * 4 + 0x1a4))),0);
    *(uint *)((int)this + 0x184) = param_1;
    in_EAX = F_0059dde0(*(undefined * PTR32 *)((int)this + param_1 * 4 + 0x1a4),1);
    if (*(undefined * PTR32 *)((int)this + 0x19c) != (undefined *)0x0) {
      sVar3 = *(short *)((int)this + 0x184) * 0x19;
      iVar4 = (int)sVar3;
      uVar2 = *(short *)((int)this + 0x180) - iVar4;
      if ((int)uVar2 < 0x19) {
        uVar2 = uVar2 & 0xffff;
      }
      else {
        uVar2 = 0x19;
      }
      F_0059ead0(*(undefined * PTR32 *)((int)this + 0x19c),uVar2,0,1);
      sVar1 = *(short *)((int)this + 400);
      if ((sVar3 <= sVar1) && ((int)sVar1 < iVar4 + 0x19)) {
        uVar2 = F_005623b0(*(undefined * PTR32 *)((int)this + 0x19c),sVar1 - iVar4);
        return uVar2;
      }
      in_EAX = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x19c) + 0x78))))(*(int * PTR32 *)((int)this + 0x19c));
    }
  }
  return in_EAX;
}

/* ref: FUN_00908d60 */
uint F_00908d60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x908d60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)((int)this + 0x144) = param_1;
  *(undefined4 *)((int)this + 0x148) = param_2;
  *(uint *)((int)this + 0x14c) = param_3;
  return param_3;
}

/* ref: FUN_00908dc0 */
uint F_00908dc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x908dc0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x2fc) = param_2;
  return param_2;
}

/* ref: FUN_00908de0 */
uint F_00908de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x908de0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x194) = param_2;
  return param_2;
}

/* ref: FUN_00908e50 */
byte F_00908e50(unsigned int gen_a0)
{
  GEN_ENTER(0x908e50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  byte * pbVar2;
  int iVar3;
  byte * pbVar4;
  bool bVar5;
  
  if (*(int *)(in_ecx + 0x18c) != 0) {
    pbVar4 = &REFG(undefined1, 0x107fc63);
    pbVar2 = (byte *)F_0042a990(*(int *)(in_ecx + 0x18c) + 0x9c);
    do {
      bVar1 = *pbVar2;
      bVar5 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_00908e90: ;
        iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_00908e95;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar5 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_00908e90;
      pbVar2 = pbVar2 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00908e95: ;
    if (iVar3 == 0) {
      return 0;
    }
  }
  if (*(int *)(in_ecx + 400) != 0) {
    pbVar4 = &REFG(undefined1, 0x107fc63);
    pbVar2 = (byte *)F_0042a990(*(int *)(in_ecx + 400) + 0x9c);
    do {
      bVar1 = *pbVar2;
      bVar5 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_00908ed8: ;
        iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_00908edd;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar5 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_00908ed8;
      pbVar2 = pbVar2 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00908edd: ;
    if (iVar3 == 0) {
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_00908ef0 */
byte F_00908ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x908ef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 1 << ((byte)param_1 & 0x1f);
  return (*(uint *)((int)this + 0x18c) & uVar1) == uVar1;
}

/* ref: FUN_00908f10 */
uint F_00908f10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x908f10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  ushort uVar1;
  short sVar2;
  int * piVar3;
  short sVar4;
  uint in_EAX = 0;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  if (param_1 <= *(uint *)((int)this + 0x188)) {
    F_0059dde0(*((undefined * PTR32 *)GEN_TOP(((int)this + *(int *)((int)this + 0x184) * 4 + 0x1ac))),0);
    *(uint *)((int)this + 0x184) = param_1;
    in_EAX = F_0059dde0(*(undefined * PTR32 *)((int)this + param_1 * 4 + 0x1ac),1);
    if (*(undefined * PTR32 *)((int)this + 0x1a4) != (undefined *)0x0) {
      uVar1 = *(ushort *)((int)this + 0x194);
      sVar4 = *(short *)((int)this + 0x184) * uVar1;
      iVar6 = (int)sVar4;
      uVar5 = *(short *)((int)this + 0x180) - iVar6;
      iVar7 = (int)(short)uVar1;
      if ((int)uVar5 < iVar7) {
        uVar5 = uVar5 & 0xffff;
      }
      else {
        uVar5 = (uint)uVar1;
      }
      F_0059ead0(*(undefined * PTR32 *)((int)this + 0x1a4),uVar5,0,1);
      sVar2 = *(short *)((int)this + 0x198);
      if ((sVar4 <= sVar2) && ((int)sVar2 < iVar7 + iVar6)) {
        uVar5 = F_005623b0(*(undefined * PTR32 *)((int)this + 0x1a4),sVar2 - iVar6);
        *(undefined4 *)((int)this + 0x1a0) = 0xffffffff;
        return uVar5;
      }
      piVar3 = *(int * PTR32 *)((int)this + 0x1a4);
      if ((char)param_2 == '\x01') {
        in_EAX = (int)sVar2 / iVar7;
        sVar4 = (short)piVar3[0x33];
        if (sVar4 == sVar2 % (short)uVar1) {
          ((code *)*(gen_code32 *)(*piVar3 + 0x74))(piVar3,0xffffffff,0);
          uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1a4) + 0x74))))
                            (*(int * PTR32 *)((int)this + 0x1a4),(int)sVar4,0);
          *(int *)((int)this + 0x1a0) = (int)sVar4;
          return uVar5;
        }
      }
      else {
        in_EAX = ((code *)*(gen_code32 *)(*piVar3 + 0x78))(piVar3);
      }
    }
  }
  return in_EAX;
}

/* ref: FUN_00909030 */
byte F_00909030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x909030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 1 << ((byte)param_1 & 0x1f);
  return (*(uint *)((int)this + 0x18c) & uVar1) == uVar1;
}

/* ref: FUN_00909050 */
uint F_00909050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x909050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  short sVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = param_1;
  if (param_1 <= *(uint *)((int)this + 0x188)) {
    *(uint *)((int)this + 0x184) = param_1;
    if (*(undefined * PTR32 *)((int)this + 0x1a0) != (undefined *)0x0) {
      sVar2 = (short)param_1 * 0x19;
      iVar4 = (int)sVar2;
      uVar3 = *(short *)((int)this + 0x180) - iVar4;
      if ((int)uVar3 < 0x19) {
        uVar3 = uVar3 & 0xffff;
      }
      else {
        uVar3 = 0x19;
      }
      F_0059ead0(*(undefined * PTR32 *)((int)this + 0x1a0),uVar3,0,1);
      sVar1 = *(short *)((int)this + 400);
      if ((sVar2 <= sVar1) && ((int)sVar1 < iVar4 + 0x19)) {
        iVar4 = sVar1 - iVar4;
        F_005623b0(*(undefined * PTR32 *)((int)this + 0x1a0),iVar4);
        uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1a0) + 0x74))))
                          (*(int * PTR32 *)((int)this + 0x1a0),iVar4,0);
        return uVar3;
      }
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1a0) + 0x78))))(*(int * PTR32 *)((int)this + 0x1a0));
    }
  }
  return uVar3;
}

/* ref: FUN_009091b0 */
uint F_009091b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9091b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return (int)(short)param_1;
}

/* ref: FUN_009091d0 */
uint F_009091d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9091d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return (int)(short)param_1;
}

/* ref: FUN_00909230 */
uint F_00909230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x909230u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  F_00561aa0(this,param_1);
  F_00561b40(this,param_2);
  uVar1 = F_00561b90(param_3,param_4);
  return uVar1;
}

/* ref: FUN_00909260 */
uint F_00909260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x909260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  if (param_1 == 0) {
    this_00 = (undefined *)0x0;
  }
  else {
    this_00 = (undefined *)F_00561530(this,param_1);
  }
  *(undefined * PTR32 *)((int)this + 0x9c) = this_00;
  uVar1 = F_0057eb30(this_00,*(undefined4 *)((int)this + 0xe4),0,0,0,0);
  return uVar1;
}

/* ref: FUN_009092a0 */
uint F_009092a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9092a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10c3f6c));
  return (uint)this;
}

/* ref: Client::UI2::AddonScreenInfoChild::vf62 */
unsigned int F_009092d0(void)
{
  GEN_ENTER(0x9092d0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::UI2::AddonScreenInfoChild::vf64 */
unsigned int F_009092e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9092e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::UI2::AddonScreenInfoChild::vf65 */
byte F_009092f0(void)
{
  GEN_ENTER(0x9092f0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::UI2::AddonScreenInfoChild::vf66 */
unsigned int F_00909300(void)
{
  GEN_ENTER(0x909300u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::UI2::AddonScreenInfoChild::vf0 */
uint F_00909310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x909310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10c3f6c));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00909340 */
uint F_00909340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x909340u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x188) = param_2;
  return param_2;
}

/* ref: FUN_00909360 */
uint F_00909360(unsigned int gen_a0)
{
  GEN_ENTER(0x909360u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  F_0058d480(in_ecx + 1);
  in_ecx[0xd] = 0;
  in_ecx[0x11] = 0;
  in_ecx[0x12] = 0;
  in_ecx[0x13] = 0;
  in_ecx[0x14] = 0;
  in_ecx[0x15] = 0;
  in_ecx[0x16] = 0;
  in_ecx[0x17] = 0;
  in_ecx[0x18] = 0;
  in_ecx[0x19] = 0;
  in_ecx[0x1a] = 0;
  in_ecx[0x1b] = 0;
  in_ecx[0xe] = 4;
  in_ecx[0xf] = 0x15;
  in_ecx[0x10] = 0xffffffff;
  return (uint)in_ecx;
}

/* ref: FUN_009093b0 */
uint F_009093b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9093b0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0xffffffff;
  in_ecx[1] = 0xffffffff;
  F_0042b630(in_ecx + 2);
  in_ecx[0x17] = 4;
  in_ecx[0x18] = 0x15;
  return (uint)in_ecx;
}

/* ref: FUN_00909450 */
byte F_00909450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x909450u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0xbc) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00909500 */
unsigned int F_00909500(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x909500u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x18) = param_2;
  return 0;
}

/* ref: FUN_00909530 */
uint F_00909530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x909530u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00909550 */
uint F_00909550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x909550u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00909560 */
ushort F_00909560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x909560u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x34) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00909590 */
unsigned int F_00909590(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x909590u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 8) = param_2;
  return 0;
}

/* ref: FUN_009095e0 */
byte F_009095e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9095e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  bool bVar1;
  
  bVar1 = GEN_ISNAN((float10)*(float *)(in_ecx + 0x60)) || GEN_ISNAN((float10)*(float *)(in_ecx + 0x58));
  if ((bVar1 != (bVar1 || (float10)*(float *)(in_ecx + 0x60) == (float10)*(float *)(in_ecx + 0x58)))
     && (bVar1 = GEN_ISNAN((float10)*(float *)(in_ecx + 100)) || GEN_ISNAN((float10)*(float *)(in_ecx + 0x5c)),
        bVar1 != (bVar1 || (float10)*(float *)(in_ecx + 100) == (float10)*(float *)(in_ecx + 0x5c)))
     ) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00909640 */
ushort F_00909640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x909640u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x7a) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: Client::UI2::AddonNaviMap::SetTargetRenderer::vf0 */
uint F_009096a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9096a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10a0b78));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonNaviMap::MaskRenderer::vf0 */
uint F_009096d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9096d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10a0b78));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00909710 */
uint F_00909710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x909710u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xa0) = param_2;
  return param_2;
}

/* ref: FUN_00909720 */
byte F_00909720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x909720u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 * '\x02' ^ *(byte *)(in_ecx + 0xaa)) & 2;
  *(byte *)(in_ecx + 0xaa) = *(byte *)(in_ecx + 0xaa) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00909740 */
byte F_00909740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x909740u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0xa9) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00909750 */
byte F_00909750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x909750u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 << 5 ^ *(byte *)(in_ecx + 0xaa)) & 0x20;
  *(byte *)(in_ecx + 0xaa) = *(byte *)(in_ecx + 0xaa) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00909770 */
uint F_00909770(unsigned int gen_a0)
{
  GEN_ENTER(0x909770u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0xffffffff;
  in_ecx[5] = 0;
  return 0;
}

/* ref: FUN_00909790 */
byte F_00909790(unsigned int gen_a0)
{
  GEN_ENTER(0x909790u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 < 2;
}

/* ref: FUN_009097b0 */
uint F_009097b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9097b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x198) = param_2;
  return param_2;
}

/* ref: FUN_00909820 */
uint F_00909820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x909820u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x180) = param_2;
  return param_2;
}

/* ref: FUN_00909830 */
uint F_00909830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x909830u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x180) = param_2;
  return param_2;
}

/* ref: FUN_00909850 */
ushort F_00909850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x909850u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(ushort *)((int)this + 0x28) = (ushort)param_1;
  *(undefined2 *)((int)this + 0x2a) = (undefined2)param_2;
  return (ushort)param_1;
}

/* ref: FUN_00909870 */
byte F_00909870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x909870u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 * '\x04' ^ *(byte *)(in_ecx + 0x2c)) & 4;
  *(byte *)(in_ecx + 0x2c) = *(byte *)(in_ecx + 0x2c) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00909890 */
byte F_00909890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x909890u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x2d) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_009098c0 */
byte F_009098c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9098c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x36) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_009098f0 */
byte F_009098f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9098f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x92) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00909900 */
byte F_00909900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x909900u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x94) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00909910 */
uint F_00909910(unsigned int gen_a0)
{
  GEN_ENTER(0x909910u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  F_0042b630(in_ecx + 1);
  F_0042b630(in_ecx + 0x16);
  F_0042b630(in_ecx + 0x2b);
  in_ecx[0x40] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_009099b0 */
uint F_009099b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9099b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  int iVar2;
  undefined4 * puVar3;
  
  puVar3 = (undefined4 *)((int)this + 0x1c);
  iVar2 = 5;
  do {
    F_0055a300((undefined *)*puVar3,param_1);
    puVar3 = puVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  F_0055a300(*(undefined * PTR32 *)((int)this + 0x14),param_1);
  F_0055a300(*(undefined * PTR32 *)((int)this + 0x18),param_1);
  bVar1 = F_0055a300(*(undefined * PTR32 *)((int)this + 0x30),param_1);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00909a50 */
uint F_00909a50(unsigned int gen_a0)
{
  GEN_ENTER(0x909a50u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  F_0042b630(in_ecx + 1);
  F_0042b630(in_ecx + 0x16);
  F_0042b630(in_ecx + 0x2b);
  F_0042b630(in_ecx + 0x40);
  F_0042b630(in_ecx + 0x55);
  in_ecx[0x6a] = 0;
  in_ecx[0x6b] = 0;
  in_ecx[0x6c] = 0;
  in_ecx[0x6d] = 0;
  in_ecx[0x6e] = 0;
  in_ecx[0x6f] = 0;
  in_ecx[0x70] = 0;
  in_ecx[0x71] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00909ac0 */
unsigned int F_00909ac0(unsigned int gen_a0)
{
  GEN_ENTER(0x909ac0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  in_ecx[8] = 0;
  in_ecx[0x29] = 0;
  in_ecx[0x2a] = 0;
  in_ecx[0x2b] = 0;
  *in_ecx = 0;
  in_ecx[9] = 0;
  in_ecx[0x11] = 0;
  in_ecx[0x19] = 0;
  in_ecx[0x21] = 0;
  in_ecx[1] = 0;
  in_ecx[10] = 0;
  in_ecx[0x12] = 0;
  in_ecx[0x1a] = 0;
  in_ecx[0x22] = 0;
  in_ecx[2] = 0;
  in_ecx[0xb] = 0;
  in_ecx[0x13] = 0;
  in_ecx[0x1b] = 0;
  in_ecx[0x23] = 0;
  in_ecx[3] = 0;
  in_ecx[0xc] = 0;
  in_ecx[0x14] = 0;
  in_ecx[0x1c] = 0;
  in_ecx[0x24] = 0;
  in_ecx[4] = 0;
  in_ecx[0xd] = 0;
  in_ecx[0x15] = 0;
  in_ecx[0x1d] = 0;
  in_ecx[0x25] = 0;
  in_ecx[5] = 0;
  in_ecx[0xe] = 0;
  in_ecx[0x16] = 0;
  in_ecx[0x1e] = 0;
  in_ecx[0x26] = 0;
  in_ecx[6] = 0;
  in_ecx[0xf] = 0;
  in_ecx[0x17] = 0;
  in_ecx[0x1f] = 0;
  in_ecx[0x27] = 0;
  in_ecx[7] = 0;
  in_ecx[0x10] = 0;
  in_ecx[0x18] = 0;
  in_ecx[0x20] = 0;
  in_ecx[0x28] = 0;
  return 0;
}

/* ref: FUN_00909b70 */
uint F_00909b70(unsigned int gen_a0)
{
  GEN_ENTER(0x909b70u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx);
  return in_ecx;
}

/* ref: FUN_00909bb0 */
uint F_00909bb0(unsigned int gen_a0)
{
  GEN_ENTER(0x909bb0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  F_0042b630(in_ecx + 1);
  return (uint)in_ecx;
}

/* ref: FUN_00909c00 */
unsigned int F_00909c00(unsigned int gen_a0)
{
  GEN_ENTER(0x909c00u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  in_ecx[10] = 0;
  in_ecx[0x2b] = 0;
  in_ecx[0x2c] = 0;
  in_ecx[0xb] = 0;
  in_ecx[0xc] = 0;
  in_ecx[0xd] = 0;
  in_ecx[0xe] = 0;
  in_ecx[0xf] = 0;
  in_ecx[0x10] = 0;
  in_ecx[0x11] = 0;
  in_ecx[0x12] = 0;
  in_ecx[0x13] = 0;
  in_ecx[0x14] = 0;
  in_ecx[0x15] = 0;
  in_ecx[0x16] = 0;
  in_ecx[0x17] = 0;
  in_ecx[0x18] = 0;
  in_ecx[0x19] = 0;
  in_ecx[0x1a] = 0;
  in_ecx[0x1b] = 0;
  in_ecx[0x1c] = 0;
  in_ecx[0x1d] = 0;
  in_ecx[0x1e] = 0;
  in_ecx[0x1f] = 0;
  in_ecx[0x20] = 0;
  in_ecx[0x21] = 0;
  in_ecx[0x22] = 0;
  in_ecx[0x23] = 0;
  in_ecx[0x24] = 0;
  in_ecx[0x25] = 0;
  in_ecx[0x26] = 0;
  in_ecx[0x27] = 0;
  in_ecx[0x28] = 0;
  in_ecx[0x29] = 0;
  in_ecx[0x2a] = 0;
  return 0;
}

/* ref: FUN_00909cb0 */
uint F_00909cb0(unsigned int gen_a0)
{
  GEN_ENTER(0x909cb0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx);
  F_0042b630(in_ecx + 0x54);
  return in_ecx;
}

/* ref: FUN_00909d10 */
byte F_00909d10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x909d10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(byte *)((int)this + 0x18e) = (byte)param_1;
  *(undefined1 *)((int)this + 399) = (undefined1)param_2;
  return (byte)param_1;
}

/* ref: FUN_00909dc0 */
uint F_00909dc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x909dc0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00909dd0 */
uint F_00909dd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x909dd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined2 *)this = (undefined2)param_1;
  *(undefined2 *)((int)this + 2) = (undefined2)param_2;
  return (uint)this;
}

/* ref: FUN_00909e50 */
uint F_00909e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x909e50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00909e60 */
uint F_00909e60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x909e60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined2 *)this = (undefined2)param_1;
  *(uint *)this = (param_2 & 0x7fff | (param_3 & 0xff) << 0xf) << 0x10 | (uint)*(ushort *)this;
  return (uint)this;
}

/* ref: FUN_00909ec0 */
uint F_00909ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x909ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00909ed0 */
uint F_00909ed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x909ed0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined2 *)this = (undefined2)param_1;
  *(uint *)this = (param_2 & 0x7fff | (param_3 & 0xff) << 0xf) << 0x10 | (uint)*(ushort *)this;
  return (uint)this;
}

/* ref: FUN_00909f70 */
uint F_00909f70(unsigned int gen_a0)
{
  GEN_ENTER(0x909f70u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1 >> 4 & 0xffffff;
}

/* ref: FUN_00909fe0 */
uint F_00909fe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x909fe0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  return param_1;
}

/* ref: FUN_0090a020 */
byte F_0090a020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90a020u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = (*(byte *)(in_ecx + 0xae) ^ (byte)param_2) & 0xf;
  *(byte *)(in_ecx + 0xae) = *(byte *)(in_ecx + 0xae) ^ bVar1;
  return bVar1;
}

/* ref: FUN_0090a060 */
byte F_0090a060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90a060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = *(byte *)((int)this + 0xae) & 0x7f | (char)param_1 << 7;
  *(byte *)((int)this + 0xae) = bVar1;
  return bVar1;
}

/* ref: FUN_0090a0e0 */
uint F_0090a0e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x90a0e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  return param_1;
}

/* ref: FUN_0090a190 */
uint F_0090a190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x90a190u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  return param_1;
}

/* ref: FUN_0090a1f0 */
uint F_0090a1f0(unsigned int gen_a0)
{
  GEN_ENTER(0x90a1f0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx + 4);
  F_0042b630(in_ecx + 0x58);
  F_0042b630(in_ecx + 0xac);
  return in_ecx;
}

/* ref: FUN_0090a240 */
uint F_0090a240(unsigned int gen_a0)
{
  GEN_ENTER(0x90a240u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx);
  *(undefined4 *)(in_ecx + 0x54) = 0;
  *(undefined4 *)(in_ecx + 0x58) = 0;
  *(undefined4 *)(in_ecx + 0x5c) = 0;
  *(undefined4 *)(in_ecx + 0x60) = 0;
  *(undefined2 *)(in_ecx + 100) = 0x100;
  return in_ecx;
}

/* ref: FUN_0090a260 */
uint F_0090a260(unsigned int gen_a0)
{
  GEN_ENTER(0x90a260u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx);
  F_0042b630(in_ecx + 0x54);
  *(undefined4 *)(in_ecx + 0xa8) = 0;
  *(undefined4 *)(in_ecx + 0xac) = 0;
  *(undefined4 *)(in_ecx + 0xb0) = 0;
  *(undefined2 *)(in_ecx + 0xb4) = 0x100;
  return in_ecx;
}

/* ref: FUN_0090a2a0 */
uint F_0090a2a0(unsigned int gen_a0)
{
  GEN_ENTER(0x90a2a0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  F_0042b630(in_ecx + 1);
  F_0042b630(in_ecx + 0x17);
  in_ecx[0x2c] = 0;
  in_ecx[0x2d] = 0;
  *(undefined1 *)(in_ecx + 0x2e) = 1;
  return (uint)in_ecx;
}

/* ref: FUN_0090a2e0 */
uint F_0090a2e0(unsigned int gen_a0)
{
  GEN_ENTER(0x90a2e0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx);
  *(undefined4 *)(in_ecx + 0x54) = 0;
  *(undefined4 *)(in_ecx + 0x58) = 0;
  return in_ecx;
}

/* ref: FUN_0090a300 */
uint F_0090a300(unsigned int gen_a0)
{
  GEN_ENTER(0x90a300u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx);
  *(undefined4 *)(in_ecx + 0x54) = 0;
  *(undefined4 *)(in_ecx + 0x58) = 0;
  *(undefined4 *)(in_ecx + 0x5c) = 0;
  return in_ecx;
}

/* ref: FUN_0090a320 */
uint F_0090a320(unsigned int gen_a0)
{
  GEN_ENTER(0x90a320u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx);
  *(undefined4 *)(in_ecx + 0x58) = 0;
  *(undefined4 *)(in_ecx + 0x5c) = 0;
  *(undefined1 *)(in_ecx + 0x60) = 0;
  *(undefined4 *)(in_ecx + 0x54) = 0xffffffff;
  return in_ecx;
}

/* ref: FUN_0090a400 */
unsigned int F_0090a400(unsigned int gen_a0)
{
  GEN_ENTER(0x90a400u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
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
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  puVar1 = (undefined4 *)((int)this + 0x8c);
  iVar2 = 0xe;
  do {
    puVar1[-0xe] = 0;
    *puVar1 = 0;
    puVar1[0xe] = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 0;
}

/* ref: FUN_0090a470 */
uint F_0090a470(unsigned int gen_a0)
{
  GEN_ENTER(0x90a470u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  in_ecx[1] = 0;
  F_0042b630(in_ecx + 2);
  return (uint)in_ecx;
}

/* ref: FUN_0090a490 */
unsigned int F_0090a490(unsigned int gen_a0)
{
  GEN_ENTER(0x90a490u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  puVar1 = (undefined4 *)((int)this + 0xcc);
  iVar2 = 0x1f;
  do {
    puVar1[-0x1f] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 0;
}

/* ref: FUN_0090a540 */
unsigned int F_0090a540(unsigned int gen_a0)
{
  GEN_ENTER(0x90a540u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  uVar1 = 0;
  do {
    *(undefined4 *)((int)this + uVar1 * 4) = 0;
    *(undefined4 *)((int)this + uVar1 * 4 + 0x4c) = 0;
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x13);
  return 0;
}

/* ref: FUN_0090a610 */
byte F_0090a610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90a610u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0xd8) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0090a620 */
byte F_0090a620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90a620u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x2b4) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0090a660 */
byte F_0090a660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90a660u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x29c) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0090a670 */
byte F_0090a670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90a670u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x278) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0090a690 */
byte F_0090a690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90a690u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x2b6) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0090a6c0 */
uint F_0090a6c0(unsigned int gen_a0)
{
  GEN_ENTER(0x90a6c0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx);
  return in_ecx;
}

/* ref: FUN_0090a720 */
uint F_0090a720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90a720u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0090a730 */
uint F_0090a730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x90a730u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined2 *)this = (undefined2)param_1;
  *(undefined2 *)((int)this + 2) = (undefined2)param_2;
  return (uint)this;
}

/* ref: FUN_0090a750 */
uint F_0090a750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x90a750u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: FUN_0090a770 */
uint F_0090a770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x90a770u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  ushort uVar1;
  
  uVar1 = F_0055a020(param_3);
  *param_1 = (float)((float10)uVar1 * (float10)REFG(double, 0x1088108) + (float10)*param_1);
  uVar1 = F_0055a030(param_3);
  *param_2 = (float)((float10)uVar1 * (float10)REFG(double, 0x1088108) + (float10)*param_2);
  return (uint)param_2;
}

/* ref: FUN_0090a820 */
uint F_0090a820(unsigned int gen_a0)
{
  GEN_ENTER(0x90a820u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c40ac));
  return (uint)this;
}

/* ref: FUN_0090a840 */
uint F_0090a840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90a840u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x180) = param_2;
  return param_2;
}

/* ref: FUN_0090a850 */
uint F_0090a850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90a850u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x184) = param_2;
  return param_2;
}

/* ref: FUN_0090a980 */
uint F_0090a980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90a980u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 100 + 4 + in_ecx;
}

/* ref: FUN_0090a9e0 */
uint F_0090a9e0(unsigned int gen_a0)
{
  GEN_ENTER(0x90a9e0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx + 4);
  F_0042b630(in_ecx + 0x5c);
  return in_ecx;
}

/* ref: FUN_0090aa00 */
uint F_0090aa00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90aa00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  if ((param_1 < 8) && (this_00 = *(undefined * PTR32 *)((int)this + param_1 * 4), this_00 != (undefined *)0x0)) {
    uVar1 = F_00561490(this_00,5);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_0090aa30 */
uint F_0090aa30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90aa30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  if ((param_1 < 8) && (this_00 = *(undefined * PTR32 *)((int)this + param_1 * 4), this_00 != (undefined *)0x0)) {
    uVar1 = F_00561530(this_00,4);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_0090aa60 */
uint F_0090aa60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90aa60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  if ((param_1 < 8) && (this_00 = *(undefined * PTR32 *)((int)this + param_1 * 4), this_00 != (undefined *)0x0)) {
    uVar1 = F_00561530(this_00,10);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_0090aa90 */
uint F_0090aa90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90aa90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  if ((param_1 < 8) && (this_00 = *(undefined * PTR32 *)((int)this + param_1 * 4), this_00 != (undefined *)0x0)) {
    uVar1 = F_00561530(this_00,0xe);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_0090aac0 */
uint F_0090aac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90aac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  if ((param_1 < 8) && (this_00 = *(undefined * PTR32 *)((int)this + param_1 * 4), this_00 != (undefined *)0x0)) {
    uVar1 = F_00561530(this_00,0x10);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_0090aaf0 */
uint F_0090aaf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90aaf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  if ((param_1 < 8) && (this_00 = *(undefined * PTR32 *)((int)this + param_1 * 4), this_00 != (undefined *)0x0)) {
    uVar1 = F_00561530(this_00,0xf);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_0090ab20 */
uint F_0090ab20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90ab20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  if ((param_1 < 8) && (this_00 = *(undefined * PTR32 *)((int)this + param_1 * 4), this_00 != (undefined *)0x0)) {
    uVar1 = F_00561490(this_00,3);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_0090ab50 */
uint F_0090ab50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90ab50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  if ((param_1 < 8) && (this_00 = *(undefined * PTR32 *)((int)this + param_1 * 4), this_00 != (undefined *)0x0)) {
    uVar1 = F_00561490(this_00,8);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_0090ab80 */
uint F_0090ab80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90ab80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  if ((param_1 < 8) && (this_00 = *(undefined * PTR32 *)((int)this + param_1 * 4), this_00 != (undefined *)0x0)) {
    uVar1 = F_00561490(this_00,0x11);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_0090abb0 */
uint F_0090abb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90abb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  if ((param_1 < 8) && (this_00 = *(undefined * PTR32 *)((int)this + param_1 * 4), this_00 != (undefined *)0x0)) {
    uVar1 = F_00561530(this_00,0x13);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_0090abe0 */
uint F_0090abe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90abe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  if ((param_1 < 8) && (this_00 = *(undefined * PTR32 *)((int)this + param_1 * 4), this_00 != (undefined *)0x0)) {
    uVar1 = F_00561490(this_00,0x16);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_0090ac10 */
uint F_0090ac10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90ac10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_0055a300(*(undefined * PTR32 *)this,param_1);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_0090ac80 */
unsigned int F_0090ac80(unsigned int gen_a0)
{
  GEN_ENTER(0x90ac80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((int)this + 0x68);
  iVar2 = 0xd;
  do {
    puVar1[-0x1a] = 0;
    puVar1[-0xd] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  return 0;
}

/* ref: FUN_0090ad40 */
uint F_0090ad40(unsigned int gen_a0)
{
  GEN_ENTER(0x90ad40u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (uint)(param_1 - 1U < 0xd);
}

/* ref: FUN_0090ad60 */
uint F_0090ad60(unsigned int gen_a0)
{
  GEN_ENTER(0x90ad60u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 - 1;
}

/* ref: FUN_0090ad70 */
uint F_0090ad70(unsigned int gen_a0)
{
  GEN_ENTER(0x90ad70u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (uint)(param_1 - 0xfU < 0x19);
}

/* ref: FUN_0090ad90 */
uint F_0090ad90(unsigned int gen_a0)
{
  GEN_ENTER(0x90ad90u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 - 0xf;
}

/* ref: FUN_0090ae00 */
uint F_0090ae00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90ae00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  ushort uVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  int iVar5;
  undefined4 uVar6;
  
  uVar2 = F_0056d300(*(undefined * PTR32 *)((int)this + 400),7);
  iVar5 = 0;
  if (uVar2 != 0) {
    do {
      uVar6 = 1;
      pvVar3 = (undefined *)F_0056d250(*(undefined * PTR32 *)((int)this + 400),7,iVar5);
      pvVar3 = (undefined *)F_00561490(pvVar3,uVar6);
      F_0055a300(pvVar3,param_1);
      iVar5 = iVar5 + 1;
    } while ((ushort)iVar5 < uVar2);
  }
  uVar2 = F_0056d300(*(undefined * PTR32 *)((int)this + 400),6);
  iVar5 = 0;
  if (uVar2 != 0) {
    do {
      uVar6 = 1;
      pvVar3 = (undefined *)F_0056d250(*(undefined * PTR32 *)((int)this + 400),6,iVar5);
      pvVar3 = (undefined *)F_00561490(pvVar3,uVar6);
      F_0055a300(pvVar3,param_1);
      iVar5 = iVar5 + 1;
    } while ((ushort)iVar5 < uVar2);
  }
  uVar2 = F_0056d300(*(undefined * PTR32 *)((int)this + 400),5);
  iVar5 = 0;
  if (uVar2 != 0) {
    do {
      uVar6 = 1;
      pvVar3 = (undefined *)F_0056d250(*(undefined * PTR32 *)((int)this + 400),5,iVar5);
      pvVar3 = (undefined *)F_00561490(pvVar3,uVar6);
      F_0055a300(pvVar3,param_1);
      iVar5 = iVar5 + 1;
    } while ((ushort)iVar5 < uVar2);
  }
  uVar2 = F_0056d300(*(undefined * PTR32 *)((int)this + 400),4);
  uVar4 = (uint)uVar2;
  iVar5 = 0;
  if (uVar2 != 0) {
    do {
      uVar6 = 1;
      pvVar3 = (undefined *)F_0056d250(*(undefined * PTR32 *)((int)this + 400),4,iVar5);
      pvVar3 = (undefined *)F_00561490(pvVar3,uVar6);
      bVar1 = F_0055a300(pvVar3,param_1);
      uVar4 = CONCAT31(extraout_var,bVar1);
      iVar5 = iVar5 + 1;
    } while ((ushort)iVar5 < uVar2);
  }
  return uVar4;
}

/* ref: FUN_0090b030 */
unsigned int F_0090b030(unsigned int gen_a0)
{
  GEN_ENTER(0x90b030u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined2 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x30) = 9;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 9;
  *(undefined2 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 9;
  *(undefined2 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 9;
  *(undefined2 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xe0) = 9;
  *(undefined2 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x10c) = 9;
  *(undefined2 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x138) = 9;
  *(undefined2 *)((int)this + 0x13c) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x144) = 0;
  *(undefined4 *)((int)this + 0x148) = 0;
  *(undefined4 *)((int)this + 0x14c) = 0;
  *(undefined4 *)((int)this + 0x150) = 0;
  *(undefined4 *)((int)this + 0x154) = 0;
  *(undefined4 *)((int)this + 0x158) = 0;
  *(undefined4 *)((int)this + 0x15c) = 0;
  *(undefined4 *)((int)this + 0x160) = 0;
  *(undefined4 *)((int)this + 0x164) = 9;
  *(undefined2 *)((int)this + 0x168) = 0;
  *(undefined4 *)((int)this + 0x16c) = 0;
  *(undefined4 *)((int)this + 0x170) = 0;
  *(undefined4 *)((int)this + 0x174) = 0;
  *(undefined4 *)((int)this + 0x178) = 0;
  *(undefined4 *)((int)this + 0x17c) = 0;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 9;
  *(undefined2 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined4 *)((int)this + 0x1b8) = 0;
  *(undefined4 *)((int)this + 0x1bc) = 9;
  *(undefined2 *)((int)this + 0x1c0) = 0;
  return 0;
}

/* ref: FUN_0090b2e0 */
unsigned int F_0090b2e0(unsigned int gen_a0)
{
  GEN_ENTER(0x90b2e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined2 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x2c) = 9;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 9;
  *(undefined2 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 9;
  *(undefined2 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 9;
  *(undefined2 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = 9;
  *(undefined2 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xf4) = 9;
  *(undefined2 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = 9;
  *(undefined2 *)((int)this + 0x120) = 0;
  return 0;
}

/* ref: Client::UI2::AddonCutSceneReplay::JournalTree::vf2 */
uint F_0090b4c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x90b4c0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(this + 8))
                    (*(undefined4 *)(this + 4),param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar1;
}

/* ref: Client::UI2::AddonCutSceneReplay::JournalTree::vf0 */
uint F_0090b4d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90b4d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10a0b64));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0090b500 */
uint F_0090b500(unsigned int gen_a0)
{
  GEN_ENTER(0x90b500u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx);
  F_0042b630(in_ecx + 0x58);
  F_0042b630(in_ecx + 0xac);
  return in_ecx;
}

/* ref: FUN_0090b520 */
uint F_0090b520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x90b520u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  F_0042e430(this,param_1);
  *(undefined4 *)((int)this + 0x54) = param_2;
  F_0042e430((undefined *)((int)this + 0x58),param_3);
  uVar1 = F_0042e430((undefined *)((int)this + 0xac),param_4);
  return uVar1;
}

/* ref: FUN_0090b600 */
uint F_0090b600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90b600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  int iVar2;
  undefined * this_00;
  
  if ((param_1 & 2) == 0) {
    F_0042c880(this);
    if ((param_1 & 1) != 0) {
      F_00406ad0(this);
    }
  }
  else {
    piVar1 = (int *)((int)this + -4);
    iVar2 = *piVar1;
    this_00 = (undefined *)(iVar2 * 0x54 + (int)this);
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      this_00 = (undefined *)((int)this_00 + -0x54);
      F_0042c880(this_00);
    }
    this = piVar1;
    if ((param_1 & 1) != 0) {
      F_00406b30(piVar1);
      return (uint)piVar1;
    }
  }
  return (uint)this;
}

/* ref: FUN_0090b680 */
uint F_0090b680(unsigned int gen_a0)
{
  GEN_ENTER(0x90b680u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  ulonglong uVar4;
  
  *(undefined4 *)this = 0;
  if (*(int *)((int)this + 4) != 0) {
    F_00406810(*(int *)((int)this + 4));
    *(undefined4 *)((int)this + 4) = 0;
  }
  iVar1 = *(int *)((int)this + 8);
  uVar3 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + -4);
    this_00 = (undefined *)(iVar2 * 0x54 + iVar1);
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      this_00 = (undefined *)((int)this_00 + -0x54);
      F_0042c880(this_00);
    }
    uVar4 = F_00406b30((int *)(iVar1 + -4));
    uVar3 = (uint)uVar4;
    *(undefined4 *)((int)this + 8) = 0;
  }
  return uVar3;
}

/* ref: FUN_0090b700 */
uint F_0090b700(unsigned int gen_a0)
{
  GEN_ENTER(0x90b700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  ulonglong uVar4;
  
  *(undefined4 *)this = 0;
  if (*(int *)((int)this + 4) != 0) {
    F_00406810(*(int *)((int)this + 4));
    *(undefined4 *)((int)this + 4) = 0;
  }
  iVar1 = *(int *)((int)this + 8);
  uVar3 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + -4);
    this_00 = (undefined *)(iVar2 * 0x54 + iVar1);
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      this_00 = (undefined *)((int)this_00 + -0x54);
      F_0042c880(this_00);
    }
    uVar4 = F_00406b30((int *)(iVar1 + -4));
    uVar3 = (uint)uVar4;
    *(undefined4 *)((int)this + 8) = 0;
  }
  return uVar3;
}

/* ref: FUN_0090b770 */
uint F_0090b770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90b770u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x1d0) = param_2;
  return param_2;
}

/* ref: FUN_0090b780 */
uint F_0090b780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90b780u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x1d4) = param_2;
  return param_2;
}

/* ref: FUN_0090b790 */
uint F_0090b790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90b790u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x1a4) = param_2;
  return param_2;
}

/* ref: FUN_0090b7a0 */
uint F_0090b7a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90b7a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x1a8) = param_2;
  return param_2;
}

/* ref: FUN_0090b7d0 */
uint F_0090b7d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90b7d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x388) = param_2;
  return param_2;
}

/* ref: FUN_0090b7e0 */
uint F_0090b7e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90b7e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x38c) = param_2;
  return param_2;
}

/* ref: FUN_0090b7f0 */
uint F_0090b7f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90b7f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x390) = param_2;
  return param_2;
}

/* ref: FUN_0090b800 */
uint F_0090b800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90b800u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x394) = param_2;
  return param_2;
}

/* ref: FUN_0090b810 */
uint F_0090b810(unsigned int gen_a0)
{
  GEN_ENTER(0x90b810u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[63])REFP(0x10c41bc));
  return (uint)this;
}

/* ref: FUN_0090b840 */
uint F_0090b840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90b840u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x180) = param_2;
  return param_2;
}

/* ref: Client::UI2::AddonCharaMakeSubMenuBase::vf62 */
unsigned int F_0090b850(void)
{
  GEN_ENTER(0x90b850u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::UI2::AddonCharaMakeSubMenuBase::vf0 */
uint F_0090b860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90b860u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[63])REFP(0x10c41bc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0090b8d0 */
uint F_0090b8d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x90b8d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  return param_1;
}

/* ref: FUN_0090b8f0 */
byte F_0090b8f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90b8f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x194) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0090b900 */
uint F_0090b900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90b900u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x180) = param_2;
  return param_2;
}

/* ref: FUN_0090b910 */
byte F_0090b910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90b910u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x188) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0090b9d0 */
uint F_0090b9d0(unsigned int gen_a0)
{
  GEN_ENTER(0x90b9d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c42bc));
  *(undefined4 *)((int)this + 0x180) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonLicenseViewer::vf0 */
uint F_0090ba00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90ba00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c42bc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Info::InfoEventHandlerInterface::vf0 */
uint F_0090ba90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90ba90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10c43c0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0090baf0 */
uint F_0090baf0(unsigned int gen_a0)
{
  GEN_ENTER(0x90baf0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *(undefined1 *)(in_ecx + 5) = 0xff;
  in_ecx[6] = 0xffffffff;
  *in_ecx = 9999;
  *(undefined2 *)(in_ecx + 1) = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  *(undefined1 *)(in_ecx + 7) = 0;
  F_0042b630(in_ecx + 8);
  F_0042b630(in_ecx + 0x1d);
  return (uint)in_ecx;
}

/* ref: FUN_0090bbf0 */
byte F_0090bbf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90bbf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  longlong lVar1;
  
  lVar1 = ((ulonglong)(((ulonglong)(byte)((char)param_1 * '\x05') < 0x40) ? ((1L << (ulonglong)(byte)((char)param_1 * '\x05'))) : 0)) * 0x10;
  if (((uint)lVar1 & *(uint *)((int)this + 0x28)) != 0 ||
      ((uint)((ulonglong)lVar1 >> 0x20) & *(uint *)((int)this + 0x2c)) != 0) {
    return 1;
  }
  return 0;
}

/* ref: FUN_0090bc30 */
byte F_0090bc30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x90bc30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  longlong lVar1;
  
  lVar1 = ((ulonglong)(((ulonglong)(byte)param_2 < 0x40) ? ((((ulonglong)(((ulonglong)(byte)((char)param_1 * '\x05') < 0x40) ? ((1L << (ulonglong)(byte)((char)param_1 * '\x05'))) : 0)) << (ulonglong)(byte)param_2)) : 0));
  if (((uint)lVar1 & *(uint *)((int)this + 0x28)) != 0 ||
      ((uint)((ulonglong)lVar1 >> 0x20) & *(uint *)((int)this + 0x2c)) != 0) {
    return 1;
  }
  return 0;
}

/* ref: FUN_0090bc70 */
byte F_0090bc70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x90bc70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return *(byte *)((int)this + (uint)(byte)param_1 * 4 + (uint)(byte)param_2);
}

/* ref: FUN_0090bc90 */
byte F_0090bc90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90bc90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return (*(uint *)((int)this + 0x34) & 1 << ((byte)param_1 & 0x1f)) != 0;
}

/* ref: FUN_0090bcb0 */
unsigned int F_0090bcb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x90bcb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  if (REFG(int, 0x1379c70) != 3) {
    uVar1 = 1 << ((byte)param_1 & 0x1f);
    if ((byte)param_2 == 0) {
      *(uint *)((int)this + 0x34) = *(uint *)((int)this + 0x34) & ~uVar1;
    }
    else {
      *(uint *)((int)this + 0x34) = *(uint *)((int)this + 0x34) | uVar1;
    }
    F_00a51200(0x24,(uint)*(byte *)((int)this + 0x38),(uint)(byte)param_1,(uint)(byte)param_2,0);
  }
  return 0;
}

/* ref: FUN_0090bd00 */
uint F_0090bd00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x90bd00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined4 *)((int)this + 0x2c) = param_1;
  *(undefined4 *)((int)this + 0x30) = param_2;
  *(uint *)((int)this + 0x34) = param_3;
  *(undefined4 *)((int)this + 0x38) = param_4;
  *(undefined1 *)((int)this + 0x44) = 1;
  return param_3;
}

/* ref: FUN_0090bd40 */
byte F_0090bd40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90bd40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x45) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0090bd70 */
byte F_0090bd70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x90bd70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined1 *)((int)this + 4) = (undefined1)param_2;
  *(byte *)((int)this + 5) = (byte)param_3;
  return (byte)param_3;
}

/* ref: FUN_0090bd90 */
uint F_0090bd90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90bd90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x20) = param_2;
  return param_2;
}

/* ref: FUN_0090bdc0 */
float10 F_0090bdc0(unsigned int gen_a0)
{
  GEN_ENTER(0x90bdc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  float10 fVar2;
  
  iVar1 = (*(int *)((int)this + 4) + *(int *)((int)(uintptr_t)this) * 0x3c) * 0x3c;
  fVar2 = (float10)iVar1;
  if (iVar1 < 0) {
    fVar2 = fVar2 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  return (float10)((float)GEN_TOF((fVar2 + (float10)*(float *)((int)this + 8))));
}

/* ref: FUN_0090be00 */
uint F_0090be00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x90be00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0x235a4) =
       ~(3 << ((char)param_1 * '\x02' & 0x1fU)) & *(uint *)((int)this + 0x235a4) |
       (uint)(byte)param_2 << ((char)param_1 * '\x02' & 0x1fU);
  return (uint)this;
}

/* ref: FUN_0090be30 */
uint F_0090be30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x90be30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0x235a8) =
       ~(3 << ((char)param_1 * '\x02' & 0x1fU)) & *(uint *)((int)this + 0x235a8) |
       (uint)(byte)param_2 << ((char)param_1 * '\x02' & 0x1fU);
  return (uint)this;
}

/* ref: FUN_0090be60 */
uint F_0090be60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x90be60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0x235ac) =
       ~(3 << ((char)param_1 * '\x02' & 0x1fU)) & *(uint *)((int)this + 0x235ac) |
       (uint)(byte)param_2 << ((char)param_1 * '\x02' & 0x1fU);
  return (uint)this;
}

/* ref: FUN_0090be90 */
uint F_0090be90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x90be90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0x235b0) =
       ~(3 << ((char)param_1 * '\x02' & 0x1fU)) & *(uint *)((int)this + 0x235b0) |
       (uint)(byte)param_2 << ((char)param_1 * '\x02' & 0x1fU);
  return (uint)this;
}

/* ref: FUN_0090bec0 */
uint F_0090bec0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x90bec0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  uint uVar1;
  undefined4 local_c;
  
  local_c = (undefined4)(longlong)TRUNC((double)param_4 * *(double *)&REFG(undefined, 0x10912a8));
  uVar1 = F_004e99a0(param_1,param_2,param_3,local_c);
  return uVar1;
}

/* ref: FUN_0090bf10 */
unsigned int F_0090bf10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x90bf10u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float fVar1;
  int iVar2;
  float10 fVar3;
  
  iVar2 = (*(int *)(param_2 + 4) + *(int *)param_2 * 0x3c) * 0x3c;
  fVar3 = (float10)iVar2;
  if (iVar2 < 0) {
    fVar3 = fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar1 = ((float)GEN_TOF((fVar3 + (float10)*(float *)(param_2 + 8))));
  *(float *)(param_1 + 0xc) = fVar1;
  if ((char)param_3 != '\0') {
    *(float *)(param_1 + 8) = fVar1;
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  return 0;
}

/* ref: FUN_0090c030 */
uint F_0090c030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90c030u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return in_ecx + 0x24 + param_2 * 2;
}

/* ref: FUN_0090c040 */
uint F_0090c040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90c040u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 0x56 + in_ecx;
}

/* ref: FUN_0090c050 */
uint F_0090c050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90c050u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return in_ecx + 0x80 + param_2 * 4;
}

/* ref: FUN_0090c070 */
uint F_0090c070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90c070u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 4 + in_ecx;
}

/* ref: FUN_0090c080 */
uint F_0090c080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90c080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *(undefined1 *)((int)this + 0x1e) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_0090c090 */
uint F_0090c090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90c090u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *(undefined1 *)((int)this + 0x1f) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_0090c0a0 */
uint F_0090c0a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90c0a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *(undefined1 *)((int)this + 0x20) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_0090c0b0 */
uint F_0090c0b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90c0b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *(undefined1 *)((int)this + 0x21) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_0090c0c0 */
uint F_0090c0c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90c0c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *(undefined1 *)((int)this + 0x22) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_0090c0d0 */
uint F_0090c0d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90c0d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)((int)this + 0x24) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_0090c0e0 */
uint F_0090c0e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x90c0e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined1 *)(param_1 + 4 + (int)this) = *param_2;
  return param_1;
}

